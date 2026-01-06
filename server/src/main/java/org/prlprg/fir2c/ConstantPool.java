package org.prlprg.fir2c;

import java.util.LinkedHashMap;
import java.util.Map;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;

/// Constants used by a [CModule].
final class ConstantPool {
  private final Map<SEXP, Integer> indices = new LinkedHashMap<>();

  public int intern(SEXP sexp) {
    return indices.computeIfAbsent(sexp, _ -> indices.size());
  }

  public VecSXP toSexp() {
    return SEXPs.vec(indices.keySet().toArray(SEXP[]::new));
  }
}
