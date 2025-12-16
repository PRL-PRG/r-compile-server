fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1092641343`;
    st unserialize = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1092641343`(connection, refhook) {
  (reg connection:*, reg refhook:*) -+> V { var connection:*, var refhook:*, reg refhook_isMissing:L, reg refhook_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg connection1:*, reg connection2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg connection3:*, reg connection4:V, reg c6:L, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c15:L, reg r8:V, reg connection5:*, reg connection6:V, reg inherits:cls, reg r9:V, reg r10:V, reg c16:L, reg c17:V, reg c19:L, reg stop:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg connection7:*, reg connection8:V, reg refhook1:*, reg refhook2:V, reg unserialize:cls, reg r15:V |
    mkenv;
    st connection = connection;
    refhook_isMissing = missing.0(refhook);
    if refhook_isMissing then L0(NULL) else L0(refhook);
  L0(refhook_orDefault):
    st refhook = refhook_orDefault;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    r3 = `!=`(r1, "raw");
    c = `as.logical`(r3);
    if c then L13() else L2(c);
  L9():
    connection1 = ld connection;
    check L11() else D0();
  L10():
    r = dyn base(<sym connection>);
    goto L1(r);
  D0():
    deopt 2 [connection1];
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L18() else L4(c10);
  L11():
    connection2 = force? connection1;
    checkMissing(connection2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(connection2);
    check L12() else D1();
  L13():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D1():
    deopt 5 [r2];
  L3(c5, r5):
    r6 = `!`(r5);
    c7 = `as.logical`(r6);
    c8 = `&&`(c5, c7);
    goto L2(c8);
  L4(c12):
    c19 = `as.logical`(c12);
    if c19 then L24() else L6();
  L12():
    goto L1(r2);
  L14():
    connection3 = ld connection;
    check L16() else D2();
  L15():
    r4 = dyn base1(<sym connection>);
    goto L3(c, r4);
  L18():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  D2():
    deopt 9 [c, connection3];
  L5(c15, r8):
    r10 = `!`(r8);
    c16 = `as.logical`(r10);
    c17 = `&&`(c15, c16);
    goto L4(c17);
  L6():
    goto L7();
  L7():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L16():
    connection4 = force? connection3;
    checkMissing(connection4);
    c6 = `is.character`(connection4);
    goto L3(c, c6);
  L19():
    connection5 = ld connection;
    check L21() else D3();
  L20():
    r7 = dyn base2(<sym connection>, "connection");
    goto L5(c10, r7);
  L24():
    stop = ldf stop;
    check L25() else D5();
  D3():
    deopt 16 [c10, connection5];
  D5():
    deopt 25 [];
  L8(r14):
    popenv;
    return r14;
  L21():
    connection6 = force? connection5;
    checkMissing(connection6);
    inherits = ldf inherits in base;
    r9 = dyn inherits(connection6, "connection", FALSE);
    check L22() else D4();
  L25():
    r11 = dyn stop("'connection' must be a connection");
    check L26() else D6();
  L28():
    connection7 = ld connection;
    check L30() else D7();
  L29():
    r13 = dyn base3(<lang unserialize(connection, refhook)>);
    goto L8(r13);
  D4():
    deopt 21 [c10, r9];
  D6():
    deopt 27 [r11];
  D7():
    deopt 32 [connection7];
  L22():
    goto L5(c10, r9);
  L26():
    goto L7();
  L30():
    connection8 = force? connection7;
    checkMissing(connection8);
    refhook1 = ld refhook;
    check L31() else D8();
  D8():
    deopt 34 [refhook1];
  L31():
    refhook2 = force? refhook1;
    checkMissing(refhook2);
    unserialize = ldf unserialize in base;
    r15 = dyn unserialize(connection8, refhook2);
    check L32() else D9();
  D9():
    deopt 37 [r15];
  L32():
    goto L8(r15);
  }
}