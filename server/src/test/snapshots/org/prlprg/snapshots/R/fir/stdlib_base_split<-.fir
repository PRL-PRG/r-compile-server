fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2200846310;
    st `split<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2200846310(x, f, drop, `...`, value) {
  (reg x:*, reg f:*, reg drop:*, reg ddd:dots, reg value:*) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    st value = value;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("split<-");
    goto L1(r2);
  L3():
    r = dyn base("split<-");
    goto L1(r);
  }
}