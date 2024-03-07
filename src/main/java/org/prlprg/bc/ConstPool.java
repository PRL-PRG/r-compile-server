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

      @SuppressWarnings("unchecked")
      var idx = (Idx<S>) new Idx<>(i, c.getClass());
      return idx;
    }

    /**
     * Finish building the pool.
     *
     * @return The pool.
     */
    public ConstPool build() {
      return new ConstPool(ImmutableList.copyOf(values));
    }

    Idx<SEXP> indexAny(int i) {
      return checkedIndex(new Idx<>(i, SEXP.class));
    }

    Idx<LangSXP> indexLang(int i) {
      return checkedIndex(new Idx<>(i, LangSXP.class));
    }

    Idx<RegSymSXP> indexSym(int i) {
      return checkedIndex(new Idx<>(i, RegSymSXP.class));
    }

    // FIXME: do we need this?
    @Nullable Idx<LangSXP> indexLangOrNilIfNegative(int i) {
      return i >= 0 ? orNil(i, LangSXP.class) : null;
    }

    @Nullable Idx<StrOrRegSymSXP> indexStrOrSymOrNil(int i) {
      return orNil(i, StrOrRegSymSXP.class);
    }

    @Nullable Idx<StrSXP> indexStrOrNil(int i) {
      return orNil(i, StrSXP.class);
    }

    @Nullable Idx<IntSXP> indexIntOrNil(int i) {
      return orNil(i, IntSXP.class);
    }

    Idx<VecSXP> indexClosure(int i) {
      var idx = checkedIndex(new Idx<>(i, VecSXP.class));

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

    @Nullable <S extends SEXP> Idx<S> orNil(int i, Class<S> clazz) {
      var idx = new Idx<>(i, clazz);
      if (validateIndex(idx)) {
        return idx;
      } else {
        if (validateIndex(new Idx<>(i, NilSXP.class))) {
          return null;
        } else {
          throw new IllegalArgumentException(
              "Expected " + clazz + " or NilSXP, but got " + values.get(i).getClass());
        }
      }
    }

    private <S extends SEXP> Idx<S> checkedIndex(Idx<S> idx) {
      if (!validateIndex(idx)) {
        throw new IllegalArgumentException(
            "At index "
                + idx.idx()
                + " expected "
                + idx.type()
                + ", got "
                + values.get(idx.idx).getClass());
      }
      return idx;
    }

    private <S extends SEXP> boolean validateIndex(Idx<S> idx) {
      var v = values.get(idx.idx());
      return idx.type().isAssignableFrom(v.getClass());
    }

    @SuppressWarnings("unchecked")
    public <S extends SEXP> void reset(Idx<S> idx, Function<S, S> fun) {
      checkedIndex(idx);
      values.set(idx.idx(), fun.apply((S) values.get(idx.idx())));
    }
  }
}
