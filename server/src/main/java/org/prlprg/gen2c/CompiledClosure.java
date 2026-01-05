package org.prlprg.gen2c;

import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

public record CompiledClosure(String cName, VecSXP constantPool) {
  public static CompiledClosure fromSexp(SEXP sexp) {
    if (!(sexp instanceof VecSXP s)
        || s.size() != 2
        || !(s.get(0) instanceof StrSXP cName)
        || cName.size() != 1
        || !(s.get(1) instanceof VecSXP constantPool)) {
      throw new IllegalArgumentException(
          "Expected VecSXP of length 2 with first element StrSXP of length 1 and second element VecSXP");
    }
    return new CompiledClosure(cName.get(0), constantPool);
  }

  public SEXP asSexp() {
    return SEXPs.vec(SEXPs.string(cName), constantPool);
  }
}
