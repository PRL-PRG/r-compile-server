package org.prlprg.gen2c;

import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

public record CompiledClosure(ListSXP formals, EnvSXP enclos, String cName, VecSXP constantPool) {
  public static CompiledClosure fromSexp(CloSXP sexp) {
    return new CompiledClosure(sexp.parameters(), sexp.env(), ((StrSXP)((LangSXP) sexp.body()).arg(1)).get(0), (VecSXP) ((LangSXP) sexp.body()).arg(3));
  }

  public CloSXP asSexp() {
    return SEXPs.closure(formals, SEXPs.lang(SEXPs.symbol(".Call"), SEXPs.string(cName), enclos, constantPool), enclos);
  }
}
