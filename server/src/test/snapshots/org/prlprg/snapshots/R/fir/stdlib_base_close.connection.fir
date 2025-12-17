fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner630326990;
    st `close.connection` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner630326990(con, type, `...`) {
  (reg con:*, reg type:*, reg ddd:dots) -+> V { var con:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg type1:*, reg type2:V, reg close:cls, reg r2:V |
    mkenv;
    st con = con;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("rw") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    con1 = ld con;
    check L4() else D0();
  L3():
    r = dyn base(<lang close(con, type)>);
    goto L1(r);
  D0():
    deopt 2 [con1];
  L4():
    con2 = force? con1;
    checkMissing(con2);
    type1 = ld type;
    check L5() else D1();
  D1():
    deopt 4 [type1];
  L5():
    type2 = force? type1;
    checkMissing(type2);
    close = ldf close in base;
    r2 = dyn close(con2, type2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}