fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3608797442;
    st `as.dist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3608797442(m, diag, upper) {
  (reg m:*, reg diag:*, reg upper:*) -+> V { var m:*, var diag:*, reg diag_isMissing:L, reg diag_orDefault:*, var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st m = m;
    diag_isMissing = missing.0(diag);
    if diag_isMissing then L0(FALSE) else L0(diag);
  L0(diag_orDefault):
    st diag = diag_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L1(FALSE) else L1(upper);
  L1(upper_orDefault):
    st upper = upper_orDefault;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("as.dist");
    goto L2(r2);
  L4():
    r = dyn base("as.dist");
    goto L2(r);
  }
}