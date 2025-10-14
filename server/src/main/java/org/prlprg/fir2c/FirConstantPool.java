package org.prlprg.fir2c;

import com.google.common.collect.ImmutableList;
import java.util.LinkedHashMap;
import java.util.Map;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VectorSXP;

/** Tracks constants that need to be materialised in a C constant pool. */
final class FirConstantPool {
  private final Map<SEXP, Integer> indices = new LinkedHashMap<>();

  public int intern(SEXP sexp) {
    return indices.computeIfAbsent(sexp, ignored -> indices.size());
  }

  public VectorSXP<SEXP> toVector() {
    var constants = ImmutableList.copyOf(indices.keySet());
    return SEXPs.vec(constants.toArray(SEXP[]::new));
  }
}
