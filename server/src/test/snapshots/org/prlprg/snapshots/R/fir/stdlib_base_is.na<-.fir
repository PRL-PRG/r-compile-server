fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `is.na<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
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
    r2 = dyn UseMethod("is.na<-");
    goto L0(r2);
  L2():
    r = dyn base("is.na<-");
    goto L0(r);
  }
}