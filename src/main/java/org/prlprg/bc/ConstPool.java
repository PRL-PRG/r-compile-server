package org.prlprg.bc;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.Nullable;
import java.util.*;
import java.util.function.Function;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrOrRegSymSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Classes;

/** A pool (array) of constants. */
@Immutable
public final class ConstPool extends ForwardingList<SEXP> {
  private final ImmutableList<SEXP> consts;

  private ConstPool(List<SEXP> consts) {
    this.consts = ImmutableList.copyOf(consts);
  }

  @Override
  protected List<SEXP> delegate() {
    return consts;
  }

  /**
   * Get the element at the given pool index
   *
   * @throws IndexOutOfBoundsException if the index is out of bounds
   * @throws ClassCastException if the element is not of the expected type
   */
  public <S extends SEXP> S get(Idx<S> idx) {
    var res = consts.get(idx.idx());
    return idx.type().cast(res);
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (o == null || getClass() != o.getClass()) return false;
    if (!super.equals(o)) return false;
    ConstPool sexps = (ConstPool) o;
    return consts.equals(sexps.consts);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), consts);
  }

  /**
   * A typed index into a bytecode pool.
   *
   * <p>It also contains a reference to the owner pool which is checked at runtime for extra safety.
   */
  public record Idx<S extends SEXP>(int idx, Class<S> type) {
    public static <S extends SEXP> Idx<S> create(int i, S value) {
      @SuppressWarnings("unchecked")
      var idx = new Idx<>(i, (Class<S>) value.getCanonicalType());
      return idx;
    }

    // region serialization and deserialization
    @ParseMethod
    private static Idx<?> parse(Parser p) {
      var s = p.scanner();

      s.assertAndSkip('#');
      var idx = s.readUInt();
      Class<? extends SEXP> type = SEXP.class;
      if (s.trySkip(':')) {
        var typeName = s.readJavaIdentifierOrKeyword();
        try {
          type = Classes.permittedSubclassWithSimpleName(SEXP.class, typeName);
        } catch (IllegalArgumentException e) {
          throw s.fail("SEXP subclass", typeName);
        }
      }
      return new Idx<>(idx, type);
    }

    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write('#');
      p.print(idx);
      if (type != SEXP.class) {
        w.write(':');
        w.write(type.getSimpleName());
      }
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
    // endregion serialization and deserialization
  }

  /**
   * A builder class for creating constant pools.
   *
   * <p>Not synchronized, so don't use from multiple threads.
   */
  public static class Builder {
    private final Map<SEXP, Integer> index;
    private final List<SEXP> values;

    public Builder() {
      this.index = new HashMap<>();
      this.values = new ArrayList<>();
    }

    public Builder(Collection<? extends SEXP> consts) {
      this.index = new HashMap<>(consts.size());
      this.values = new ArrayList<>(consts.size());
      for (var e : consts) {
        add(e);
      }
    }

    public <S extends SEXP> Idx<S> add(S c) {
      var i =
          index.computeIfAbsent(
              c,
              (ignored) -> {
                var x = values.size();
                values.add(c);
                return x;
              });

      return Idx.create(i, c);
    }

    /**
     * Finish building the pool.
     *
     * @return The pool.
     */
    public ConstPool build() {
      return new ConstPool(ImmutableList.copyOf(values));
    }

    public Idx<SEXP> index(int i) {
      return Idx.create(i, values.get(i));
    }

    private <S extends SEXP> Idx<S> index(int i, Class<S> type) {
      var value = values.get(i);
      if (type.isInstance(value)) {
        return Idx.create(i, type.cast(value));
      } else {
        throw new IllegalArgumentException("Expected " + type + ", but got " + value.getClass());
      }
    }

    public Idx<LangSXP> indexLang(int i) {
      return index(i, LangSXP.class);
    }

    public Idx<RegSymSXP> indexSym(int i) {
      return index(i, RegSymSXP.class);
    }

    // FIXME: do we need these? ---
    public @Nullable Idx<LangSXP> indexLangOrNilIfNegative(int i) {
      return i >= 0 ? orNil(i, LangSXP.class) : null;
    }

    public @Nullable Idx<IntSXP> indexIntOrNilIfNegative(int i) {
      return i >= 0 ? orNil(i, IntSXP.class) : null;
    }

    public @Nullable Idx<StrSXP> indexStrOrNilIfNegative(int i) {
      return i >= 0 ? orNil(i, StrSXP.class) : null;
    }

    // -- FIXME

    public @Nullable Idx<StrOrRegSymSXP> indexStrOrSymOrNil(int i) {
      return orNil(i, StrOrRegSymSXP.class);
    }

    public @Nullable Idx<StrSXP> indexStrOrNil(int i) {
      return orNil(i, StrSXP.class);
    }

    public @Nullable Idx<IntSXP> indexIntOrNil(int i) {
      return orNil(i, IntSXP.class);
    }

    public Idx<VecSXP> indexClosure(int i) {
      var idx = index(i, VecSXP.class);

      // check vector shape
      var vec = (VecSXP) values.get(i);
      if (vec.size() != 2 && vec.size() != 3) {
        throw new IllegalArgumentException(
            "Malformed formals/body/srcref vector, expected length 2 or 3, got " + vec);
      }
      if (!(vec.get(0) instanceof ListSXP)) {
        throw new IllegalArgumentException(
            "Malformed formals/body/srcref vector, expected first element to be a list (formals), got "
                + vec.get(0));
      }

      return idx;
    }

    public @Nullable <S extends SEXP> Idx<S> orNil(int i, Class<S> clazz) {
      var value = values.get(i);
      if (clazz.isInstance(value)) {
        return Idx.create(i, clazz.cast(value));
      } else if (value instanceof NilSXP) {
        return null;
      } else {
        throw new IllegalArgumentException(
            "Expected " + clazz + " or NilSXP, but got " + value.getClass());
      }
    }

    @SuppressWarnings("unchecked")
    public <S extends SEXP> void reset(Idx<S> idx, Function<S, S> fun) {
      values.set(idx.idx(), fun.apply((S) values.get(idx.idx())));
    }
  }

  // region serialization and deserialization
  @ParseMethod
  private static ConstPool parse(Parser p) {
    var s = p.scanner();

    var consts = new ArrayList<SEXP>();
    s.assertAndSkip("=== CONSTS ===");
    for (var idx = 0; s.nextCharSatisfies(Character::isDigit); idx++) {
      var actualIdx = s.readUInt();
      if (actualIdx != idx) {
        throw s.fail("index " + idx, "index " + actualIdx);
      }
      s.assertAndSkip(":");

      consts.add(p.parse(SEXP.class));
    }

    return new ConstPool(consts);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("=== CONSTS ===");
    var n = (int) Math.log10(size()) + 1;
    var idx = 0;
    for (var c : this) {
      w.formatter().format("%n%" + n + "d: ", idx++);
      p.print(c);
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
