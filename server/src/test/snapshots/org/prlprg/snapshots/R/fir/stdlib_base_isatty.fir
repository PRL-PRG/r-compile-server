fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1019204350;
    st isatty = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1019204350(con) {
  (reg con:*) -+> V { var con:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg con3:*, reg con4:V, reg isatty:cls, reg r6:V |
    mkenv;
    st con = con;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    con1 = ld con;
    check L5() else D0();
  L4():
    r = dyn base(<sym con>, "terminal");
    goto L0(r);
  D0():
    deopt 2 [con1];
  L1():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    con2 = force? con1;
    checkMissing(con2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(con2, "terminal", FALSE);
    check L6() else D1();
  L7():
    popenv;
    return FALSE;
  D1():
    deopt 7 [r2];
  L2(r5):
    popenv;
    return r5;
  L6():
    goto L0(r2);
  L9():
    con3 = ld con;
    check L11() else D2();
  L10():
    r4 = dyn base1(<lang isatty(con)>);
    goto L2(r4);
  D2():
    deopt 13 [con3];
  L11():
    con4 = force? con3;
    checkMissing(con4);
    isatty = ldf isatty in base;
    r6 = dyn isatty(con4);
    check L12() else D3();
  D3():
    deopt 16 [r6];
  L12():
    goto L2(r6);
  }
}