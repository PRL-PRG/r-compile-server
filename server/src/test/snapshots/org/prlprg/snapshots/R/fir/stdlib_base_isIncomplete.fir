fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1019204350;
    st isIncomplete = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1019204350(con) {
  (reg con:*) -+> V { var con:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg isIncomplete:cls, reg r2:V |
    mkenv;
    st con = con;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    con1 = ld con;
    check L3() else D0();
  L2():
    r = dyn base(<lang isIncomplete(con)>);
    goto L0(r);
  D0():
    deopt 2 [con1];
  L3():
    con2 = force? con1;
    checkMissing(con2);
    isIncomplete = ldf isIncomplete in base;
    r2 = dyn isIncomplete(con2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}