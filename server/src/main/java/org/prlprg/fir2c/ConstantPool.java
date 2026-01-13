package org.prlprg.fir2c;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;

/// Closure constant pool builder.
final class ConstantPool {
  private final Map<SEXP, Integer> indices = new LinkedHashMap<>();
  private final Map<Object, Integer> patchedIndices = new LinkedHashMap<>();
  private final List<SEXP> data = new ArrayList<>();

  public int intern(SEXP sexp) {
    return indices.computeIfAbsent(
        sexp,
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

  public VecSXP toSexp() {
    return SEXPs.vec(data);
  }
}
