fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1019204350;
    st flush = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1019204350(con) {
  (reg con:*) -+> V { var con:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st con = con;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("flush");
    goto L0(r2);
  L2():
    r = dyn base("flush");
    goto L0(r);
  }
}