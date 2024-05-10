package org.prlprg.bc;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.Nullable;
import java.util.*;
import java.util.function.Function;
import javax.annotation.concurrent.Immutable;
import org.prlprg.sexp.*;

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
  public String toString() {
    StringBuilder sb = new StringBuilder("=== CONSTS " + debugId() + " ===");
    var idx = 0;
    for (var c : this) {
      var cStr = c.toString();
      sb.append(String.format("%n%3d: ", idx++));
      if (cStr.contains(System.lineSeparator())) {
        sb.append(System.lineSeparator()).append(c).append(System.lineSeparator());
      } else {
        sb.append(c);
      }
    }
    return sb.toString();
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (o == null || getClass() != o.getClass()) return false;
    if (!super.equals(o)) return false;
    ConstPool other = (ConstPool) o;
    return consts.equals(other.consts);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), consts);
  }

  // FIXME: use some global id
  private String debugId() {
    return "@" + hashCode();
  }

  /**
   * A typed index into a bytecode pool.
   *
   * <p>It also contains a reference to the owner pool which is checked at runtime for extra safety.
   */
  public record Idx<S extends SEXP>(int idx, Class<S> type) {
    @Override
    public String toString() {
      // TODO: add sexp type?
      return String.format("%d", idx);
    }

    public static <S extends SEXP> Idx<S> create(int i, S value) {
      @SuppressWarnings("unchecked")
      var idx = new Idx<>(i, (Class<S>) value.getCanonicalType());
      return idx;
    }
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
      this(Collections.emptyList());
    }

    public Builder(List<SEXP> consts) {
      index = new HashMap<>(consts.size());
      values = new ArrayList<>(consts.size());

      for (var e : consts) {
        add(e);
      }
    }

    public <S extends SEXP> Idx<S> add(S c) {
      var i =
          index.computeIfAbsent(
              c,
              (ignored) -> {
                var x = index.size();
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

    // FIXME: do we need this?
    public @Nullable Idx<LangSXP> indexLangOrNilIfNegative(int i) {
      return i >= 0 ? orNil(i, LangSXP.class) : null;
    }

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
}
