fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3312777330;
    st read_check_log = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3312777330(log, drop, `...`) {
  (reg log:*, reg drop:*, reg ddd:dots) -+> V { var log:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg readLines:cls, reg log1:*, reg log2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg drop1:*, reg drop2:V, reg c:L, reg grep:cls, reg lines:*, reg lines1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg pos:*, reg pos1:V, reg length:cls, reg r6:V, reg c1:L, reg c3:V, reg lines2:*, reg lines3:V, reg c4:L, reg c6:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg c8:L, reg dx1:V, reg pos2:*, reg pos3:V, reg c9:L, reg c11:L, reg lines7:V, reg pos5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c13:L, reg lines9:V, reg dx3:V, reg __:cls, reg r7:V, reg r8:V, reg __1:cls, reg r9:V, reg r10:V, reg c14:L, reg c15:V, reg c17:L, reg lines10:*, reg lines11:V, reg c18:L, reg lines13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg lines16:V, reg r12:V, reg pos6:*, reg pos7:V, reg r13:V, reg r14:I, reg __2:cls, reg r15:V, reg dx6:V, reg lines17:*, reg lines18:V |
    mkenv;
    st log = log;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    readLines = ldf readLines;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    ddd1 = ld `...`;
    r1 = dyn readLines[, warn, `...`](p, FALSE, ddd1);
    check L12() else D1();
  D1():
    deopt 6 [r1];
  L12():
    st lines = r1;
    drop1 = ld drop;
    check L13() else D2();
  D2():
    deopt 8 [drop1];
  L13():
    drop2 = force? drop1;
    checkMissing(drop2);
    c = `as.logical`(drop2);
    if c then L14() else L1();
  L1():
    goto L10();
  L10():
    lines17 = ld lines;
    check L41() else D11();
  L14():
    grep = ldf grep;
    check L15() else D3();
  D3():
    deopt 11 [];
  D11():
    deopt 54 [lines17];
  L15():
    p1 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r3 = dyn grep[, , perl, useBytes]("^Current CRAN status:", p1, TRUE, TRUE);
    check L16() else D4();
  L41():
    lines18 = force? lines17;
    checkMissing(lines18);
    popenv;
    return lines18;
  D4():
    deopt 18 [r3];
  L16():
    st pos = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L21() else L3(c1);
  L17():
    pos = ld pos;
    check L19() else D5();
  L18():
    r4 = dyn base(<sym pos>);
    goto L2(r4);
  D5():
    deopt 22 [pos];
  L3(c3):
    c17 = `as.logical`(c3);
    if c17 then L31() else L6();
  L19():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r6 = dyn length(pos1);
    check L20() else D6();
  L21():
    lines2 = ld lines;
    check L22() else D7();
  D6():
    deopt 25 [r6];
  D7():
    deopt 26 [c1, lines2];
  L6():
    goto L9(NULL);
  L9(dx6):
    goto L10();
  L20():
    goto L2(r6);
  L22():
    lines3 = force? lines2;
    checkMissing(lines3);
    c4 = `is.object`(lines3);
    if c4 then L23() else L24(c1, lines3);
  L31():
    lines10 = ld lines;
    check L32() else D9();
  D9():
    deopt 40 [lines10];
  L4(c8, dx1):
    r10 = `==`(dx1, "");
    c14 = `as.logical`(r10);
    c15 = `&&`(c8, c14);
    goto L3(c15);
  L23():
    dr = tryDispatchBuiltin.1("[", lines3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(c1, dr);
  L24(c6, lines5):
    pos2 = ld pos;
    check L26() else D8();
  L32():
    lines11 = force? lines10;
    checkMissing(lines11);
    c18 = `is.object`(lines11);
    if c18 then L33() else L34(lines11);
  D8():
    deopt 28 [c6, lines5, pos2];
  L7(dx5):
    st lines = dx5;
    goto L9(dx5);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c1, dx);
  L26():
    pos3 = force? pos2;
    checkMissing(pos3);
    c9 = `is.object`(pos3);
    if c9 then L27() else L28(c6, lines5, pos3);
  L33():
    dr4 = tryDispatchBuiltin.1("[", lines11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(dr4);
  L34(lines13):
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L5(c13, lines9, dx3):
    r8 = `-`(dx3, 1);
    st pos = r8;
    __1 = ldf `[` in base;
    r9 = dyn __1(lines9, r8);
    goto L4(c13, r9);
  L8(lines16, r12):
    __2 = ldf `[` in base;
    r15 = dyn __2(lines16, r12);
    goto L7(r15);
  L27():
    dr2 = tryDispatchBuiltin.1("[", pos3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(c6, lines5, dr2);
  L28(c11, lines7, pos5):
    __ = ldf `[` in base;
    r7 = dyn __(pos5, 1);
    goto L5(c11, lines7, r7);
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L36():
    pos6 = ld pos;
    check L38() else D10();
  L37():
    r11 = dyn base1(<lang `-`(pos, 1)>);
    goto L8(lines13, r11);
  D10():
    deopt 43 [lines13, pos6];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(c6, lines5, dx2);
  L38():
    pos7 = force? pos6;
    checkMissing(pos7);
    r13 = `-`(pos7, 1);
    r14 = seq_len(r13);
    goto L8(lines13, r14);
  }
}