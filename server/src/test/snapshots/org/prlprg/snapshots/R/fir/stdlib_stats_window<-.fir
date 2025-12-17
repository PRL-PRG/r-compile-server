fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner709191543;
    st `window<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner709191543(x, `...`, value) {
  (reg x:*, reg ddd:dots, reg value:*) -+> V { var x:*, var `...`:dots?, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st value = value;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("window<-");
    goto L0(r2);
  L2():
    r = dyn base("window<-");
    goto L0(r);
  }
}