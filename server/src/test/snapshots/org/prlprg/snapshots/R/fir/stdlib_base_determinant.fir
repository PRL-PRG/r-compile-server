fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2001464471`;
    st determinant = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2001464471`(x, logarithm, `...`) {
  (reg x:*, reg logarithm:*, reg ddd:dots) -+> V { var x:*, var logarithm:*, reg logarithm_isMissing:L, reg logarithm_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    logarithm_isMissing = missing.0(logarithm);
    if logarithm_isMissing then L0(TRUE) else L0(logarithm);
  L0(logarithm_orDefault):
    st logarithm = logarithm_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("determinant");
    goto L1(r2);
  L3():
    r = dyn base("determinant");
    goto L1(r);
  }
}