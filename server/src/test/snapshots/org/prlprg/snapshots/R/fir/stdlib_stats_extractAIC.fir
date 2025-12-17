fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3097143473;
    st extractAIC = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3097143473(fit, scale, k, `...`) {
  (reg fit:*, reg scale:*, reg k:*, reg ddd:dots) -+> V { var fit:*, var scale:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st fit = fit;
    st scale = scale;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
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
    r2 = dyn UseMethod("extractAIC");
    goto L1(r2);
  L3():
    r = dyn base("extractAIC");
    goto L1(r);
  }
}