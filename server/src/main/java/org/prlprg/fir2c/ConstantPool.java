package org.prlprg.fir2c;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.stream.IntStream;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;

/// Closure constant pool builder.
final class ConstantPool {
  private final Map<Key, Integer> indices = new LinkedHashMap<>();
  private final Map<Object, Integer> patchedIndices = new LinkedHashMap<>();
  private final List<SEXP> data = new ArrayList<>();

  public int intern(SEXP sexp) {
    return indices.computeIfAbsent(
        new Key(sexp),
        _ -> {
          data.add(sexp);
          return data.size() - 1;
        });
  }

  /// If `obj` hasn't already been "interned" this way, add a NULL value to the pool, and call
  /// `patch` with its index. `patch` should add code that will modify the index at runtime with
  /// the SEXP encoded (at runtime) in `obj`.
  public int internPatched(Object obj, Consumer<Integer> patch) {
    return patchedIndices.computeIfAbsent(
        obj,
        _ -> {
          patch.accept(data.size());
          data.add(SEXPs.NULL);
          return data.size() - 1;
        });
  }

  /// Add a NULL value to the pool, and return its index. For entries that are modified at
  /// runtime and, unlike [#internPatched(Object, Consumer)], always unique.
  public int internSpace() {
    data.add(SEXPs.NULL);
    return data.size() - 1;
  }

  /// Add `sexp` to the pool in an always-unique slot (never deduplicated, unlike
  /// [#intern(SEXP)]), and return its index.
  ///
  /// Required for constant pools of nested functions, versions, and promises: those are mutated
  /// at runtime by their init functions (e.g. each promise stores its `Fir_PromiseGlobalData`
  /// in its pool's slot 0), so two structurally-equal pools must not share a slot, otherwise
  /// their inits overwrite each other's runtime data.
  public int internUnique(SEXP sexp) {
    data.add(sexp);
    return data.size() - 1;
  }

  public VecSXP toSexp() {
    return SEXPs.vec(data);
  }

  /// Compares real vectors bitwise, because [RealSXP#equals(Object)] is fuzzy: it equates close
  /// numbers, and `NaN` with `NA`.
  private record Key(SEXP sexp) {
    @Override
    public boolean equals(Object o) {
      return o instanceof Key(var other)
          && (sexp instanceof RealSXP r1 && other instanceof RealSXP r2
              ? r1.getClass() == r2.getClass()
                  && r1.size() == r2.size()
                  && IntStream.range(0, r1.size())
                      .allMatch(
                          i ->
                              Double.doubleToRawLongBits(r1.get(i))
                                  == Double.doubleToRawLongBits(r2.get(i)))
                  && Objects.equals(r1.attributes(), r2.attributes())
              : sexp.equals(other));
    }

    @Override
    public int hashCode() {
      return sexp.hashCode();
    }
  }
}
