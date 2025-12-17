fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3624283997;
    st `[.getAnywhere` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3624283997(x, i) {
  (reg x:*, reg i:*) -+> V { var x:*, var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg i1:*, reg i2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg i3:*, reg i4:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg x1:*, reg x2:V, reg c2:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __:cls, reg r11:V, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r12:V, reg c5:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg i7:*, reg i8:V, reg __1:cls, reg r13:V |
    mkenv;
    st x = x;
    st i = i;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L11() else L1();
  L7():
    i1 = ld i;
    check L9() else D0();
  L8():
    r = dyn base(<sym i>);
    goto L0(r);
  D0():
    deopt 2 [i1];
  L1():
    goto L2();
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L9():
    i2 = force? i1;
    checkMissing(i2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(i2);
    check L10() else D1();
  L11():
    stop = ldf stop;
    check L12() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L3(r7):
    r9 = `==`(r7, 1);
    c1 = `as.logical`(r9);
    if c1 then L19() else L4();
  L10():
    goto L0(r2);
  L12():
    r4 = dyn stop("only numeric indices can be used");
    check L13() else D3();
  L15():
    i3 = ld i;
    check L17() else D4();
  L16():
    r6 = dyn base1(<sym i>);
    goto L3(r6);
  D3():
    deopt 10 [r4];
  D4():
    deopt 15 [i3];
  L4():
    x5 = ld x;
    check L30() else D8();
  L13():
    goto L2();
  L17():
    i4 = force? i3;
    checkMissing(i4);
    length = ldf length in base;
    r8 = dyn length(i4);
    check L18() else D5();
  L19():
    x1 = ld x;
    check L20() else D6();
  D5():
    deopt 18 [r8];
  D6():
    deopt 21 [x1];
  D8():
    deopt 27 [x5];
  L18():
    goto L3(r8);
  L20():
    x2 = force? x1;
    checkMissing(x2);
    c2 = `is.object`(x2);
    if c2 then L22() else L23(x2);
  L30():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L32() else L33(x6);
  L21(dx1):
    c3 = `is.object`(dx1);
    if c3 then L25() else L26(dx1);
  L22():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(x4):
    r10 = `$`(x4, <sym objs>);
    goto L21(r10);
  L31(dx7):
    c5 = `is.object`(dx7);
    if c5 then L35() else L36(dx7);
  L32():
    dr4 = tryDispatchBuiltin.1("$", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(x8):
    r12 = `$`(x8, <sym objs>);
    goto L31(r12);
  L5(dx5):
    popenv;
    return dx5;
  L6(dx11):
    popenv;
    return dx11;
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L25():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dr2);
  L26(dx3):
    i5 = ld i;
    check L28() else D7();
  L34():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx6);
  L35():
    dr6 = tryDispatchBuiltin.1("[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L37() else L36(dr6);
  L36(dx9):
    i7 = ld i;
    check L38() else D9();
  D7():
    deopt 24 [dx3, i5];
  D9():
    deopt 30 [dx9, i7];
  L27():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  L28():
    i6 = force? i5;
    __ = ldf `[[` in base;
    r11 = dyn __(dx3, i6);
    goto L5(r11);
  L37():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx10);
  L38():
    i8 = force? i7;
    __1 = ldf `[` in base;
    r13 = dyn __1(dx9, i8);
    goto L6(r13);
  }
}