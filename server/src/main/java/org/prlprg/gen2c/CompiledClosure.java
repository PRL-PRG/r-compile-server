package org.prlprg.gen2c;

import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;

public record CompiledClosure(String cName, VecSXP constantPool) {
  public static CompiledClosure fromSexp(CloSXP sexp) {
    return new CompiledClosure(
        ((StrSXP) ((LangSXP) sexp.body()).arg(0)).get(0), (VecSXP) ((LangSXP) sexp.body()).arg(1));
  }

  public CloSXP asSexp() {
    return SEXPs.closure(
        SEXPs.list(TaggedElem.DOTS),
        SEXPs.lang(
            SEXPs.symbol(".Call"),
            SEXPs.string(cName),
            constantPool,
            SEXPs.lang(SEXPs.symbol("globalenv")),
            SEXPs.list(TaggedElem.DOTS)),
        SEXPs.EMPTY_ENV);
  }
}
