fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2107108032;
    st xyinch = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2107108032(xy, `warn.log`) {
  (reg xy:*, reg warn_log:*) -+> V { var xy:*, reg xy_isMissing:L, reg xy_orDefault:*, var `warn.log`:*, reg warn_log_isMissing:L, reg warn_log_orDefault:*, reg warn_log1:*, reg warn_log2:V, reg c:L, reg c2:V, reg par:cls, reg r:V, reg c3:L, reg c4:L, reg c5:V, reg par1:cls, reg r1:V, reg c8:L, reg c9:V, reg c12:L, reg c13:V, reg c15:L, reg warning:cls, reg r2:V, reg par2:cls, reg r4:V, reg xy1:*, reg xy2:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg xy5:V, reg r6:V, reg u:*, reg u1:V, reg c16:L, reg xy7:V, reg u3:V, reg dr:V, reg dc:L, reg dx:V, reg xy9:V, reg dx1:V, reg __:cls, reg r7:V, reg u4:*, reg u5:V, reg c17:L, reg xy11:V, reg dx3:V, reg u7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg xy13:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r8:V, reg r9:V, reg u8:*, reg u9:V, reg c18:L, reg xy15:V, reg u11:V, reg dr4:V, reg dc2:L, reg dx8:V, reg xy17:V, reg dx9:V, reg __2:cls, reg r10:V, reg u12:*, reg u13:V, reg c19:L, reg xy19:V, reg dx11:V, reg u15:V, reg dr6:V, reg dc3:L, reg dx13:V, reg xy21:V, reg dx14:V, reg dx15:V, reg __3:cls, reg r11:V, reg r12:V, reg c20:cls, reg r13:V, reg r14:V, reg par3:cls, reg r15:V, reg r16:V |
    mkenv;
    xy_isMissing = missing.0(xy);
    if xy_isMissing then L0(1.0) else L0(xy);
  L0(xy_orDefault):
    st xy = xy_orDefault;
    warn_log_isMissing = missing.0(warn_log);
    if warn_log_isMissing then L1(TRUE) else L1(warn_log);
  L1(warn_log_orDefault):
    st `warn.log` = warn_log_orDefault;
    warn_log1 = ld `warn.log`;
    check L11() else D0();
  D0():
    deopt 0 [warn_log1];
  L11():
    warn_log2 = force? warn_log1;
    checkMissing(warn_log2);
    c = `as.logical`(warn_log2);
    if c then L12() else L2(c);
  L2(c2):
    c15 = `as.logical`(c2);
    if c15 then L20() else L4();
  L12():
    par = ldf par;
    check L13() else D1();
  D1():
    deopt 3 [c];
  L4():
    goto L5();
  L5():
    par2 = ldf par;
    check L24() else D7();
  L13():
    r = dyn par("xlog");
    check L14() else D2();
  L20():
    warning = ldf warning;
    check L21() else D5();
  D2():
    deopt 5 [c, r];
  D5():
    deopt 13 [];
  D7():
    deopt 19 [];
  L14():
    c3 = `as.logical`(r);
    if c3 then L3(c, c3) else L15();
  L21():
    r2 = dyn warning("log scale:  xyinch() is nonsense");
    check L22() else D6();
  L24():
    r4 = dyn par2("usr");
    check L25() else D8();
  D6():
    deopt 15 [r2];
  D8():
    deopt 21 [r4];
  L3(c4, c5):
    c12 = `as.logical`(c5);
    c13 = `&&`(c4, c12);
    goto L2(c13);
  L15():
    par1 = ldf par;
    check L16() else D3();
  L22():
    goto L5();
  L25():
    st u = r4;
    xy1 = ld xy;
    check L26() else D9();
  D3():
    deopt 7 [c, c3];
  D9():
    deopt 23 [xy1];
  L16():
    r1 = dyn par1("ylog");
    check L17() else D4();
  L26():
    xy2 = force? xy1;
    checkMissing(xy2);
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  D4():
    deopt 9 [c, c3, r1];
  L6(xy5, r6):
    r14 = `*`(xy5, r6);
    par3 = ldf par;
    check L46() else D15();
  L17():
    c8 = `as.logical`(r1);
    c9 = `||`(c3, c8);
    goto L3(c, c9);
  L27():
    u = ld u;
    check L29() else D10();
  L28():
    r5 = dyn base(<lang `-`(`[`(u, 2), `[`(u, 1))>, <lang `-`(`[`(u, 4), `[`(u, 3))>);
    goto L6(xy2, r5);
  D10():
    deopt 26 [xy2, u];
  D15():
    deopt 49 [r14];
  L29():
    u1 = force? u;
    checkMissing(u1);
    c16 = `is.object`(u1);
    if c16 then L30() else L31(xy2, u1);
  L46():
    r15 = dyn par3("pin");
    check L47() else D16();
  D16():
    deopt 51 [r14, r15];
  L7(xy9, dx1):
    u4 = ld u;
    check L33() else D11();
  L30():
    dr = tryDispatchBuiltin.1("[", u1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(xy2, dr);
  L31(xy7, u3):
    __ = ldf `[` in base;
    r7 = dyn __(u3, 2);
    goto L7(xy7, r7);
  L47():
    r16 = `/`(r14, r15);
    popenv;
    return r16;
  D11():
    deopt 30 [xy9, dx1, u4];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(xy2, dx);
  L33():
    u5 = force? u4;
    checkMissing(u5);
    c17 = `is.object`(u5);
    if c17 then L34() else L35(xy9, dx1, u5);
  L8(xy13, dx6, dx7):
    r9 = `-`(dx6, dx7);
    u8 = ld u;
    check L37() else D12();
  L34():
    dr2 = tryDispatchBuiltin.1("[", u5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(xy9, dx1, dr2);
  L35(xy11, dx3, u7):
    __1 = ldf `[` in base;
    r8 = dyn __1(u7, 1);
    goto L8(xy11, dx3, r8);
  D12():
    deopt 36 [xy13, u8];
  L36():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L8(xy9, dx1, dx5);
  L37():
    u9 = force? u8;
    checkMissing(u9);
    c18 = `is.object`(u9);
    if c18 then L38() else L39(xy13, u9);
  L9(xy17, dx9):
    u12 = ld u;
    check L41() else D13();
  L38():
    dr4 = tryDispatchBuiltin.1("[", u9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(xy13, dr4);
  L39(xy15, u11):
    __2 = ldf `[` in base;
    r10 = dyn __2(u11, 4);
    goto L9(xy15, r10);
  D13():
    deopt 40 [xy17, dx9, u12];
  L40():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L9(xy13, dx8);
  L41():
    u13 = force? u12;
    checkMissing(u13);
    c19 = `is.object`(u13);
    if c19 then L42() else L43(xy17, dx9, u13);
  L10(xy21, dx14, dx15):
    r12 = `-`(dx14, dx15);
    c20 = ldf c in base;
    r13 = dyn c20(r9, r12);
    check L45() else D14();
  L42():
    dr6 = tryDispatchBuiltin.1("[", u13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(xy17, dx9, dr6);
  L43(xy19, dx11, u15):
    __3 = ldf `[` in base;
    r11 = dyn __3(u15, 3);
    goto L10(xy19, dx11, r11);
  D14():
    deopt 47 [xy21, r13];
  L44():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L10(xy17, dx9, dx13);
  L45():
    goto L6(xy21, r13);
  }
}