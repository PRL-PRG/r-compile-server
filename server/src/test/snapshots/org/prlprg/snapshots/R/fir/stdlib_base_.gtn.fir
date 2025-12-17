fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner905067902;
    st `.gtn` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner905067902(x, strictly) {
  (reg x:*, reg strictly:*) -+> V { var x:*, var strictly:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg strictly1:*, reg strictly2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg x7:*, reg x8:V, reg c2:L, reg dx3:V, reg x10:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg n:*, reg n1:V, reg r6:V, reg __1:cls, reg r7:V, reg r8:V, reg all:cls, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x11:*, reg x12:V, reg c3:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r13:V, reg x15:*, reg x16:V, reg c4:L, reg dx11:V, reg x18:V, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg dx15:V, reg n2:*, reg n3:V, reg r14:V, reg __3:cls, reg r15:V, reg r16:V, reg all1:cls, reg r17:V, reg r18:V |
    mkenv;
    st x = x;
    st strictly = strictly;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st n = r1;
    strictly1 = ld strictly;
    check L12() else D2();
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [strictly1];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L11() else D1();
  L12():
    strictly2 = force? strictly1;
    checkMissing(strictly2);
    c = `as.logical`(strictly2);
    if c then L13() else L1();
  D1():
    deopt 5 [r2];
  L1():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L11():
    goto L0(r2);
  L13():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(r4):
    r10 = `!`(r4);
    popenv;
    return r10;
  L5(r12):
    r18 = `!`(r12);
    popenv;
    return r18;
  L14():
    x3 = ld x;
    check L16() else D3();
  L15():
    r3 = dyn base1(<lang `>`(`[`(x, `-`(1)), `[`(x, `-`(n)))>);
    goto L2(r3);
  L27():
    x11 = ld x;
    check L29() else D7();
  L28():
    r11 = dyn base2(<lang `>=`(`[`(x, `-`(1)), `[`(x, `-`(n)))>);
    goto L5(r11);
  D3():
    deopt 11 [x3];
  D7():
    deopt 27 [x11];
  L16():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L17() else L18(x4);
  L29():
    x12 = force? x11;
    checkMissing(x12);
    c3 = `is.object`(x12);
    if c3 then L30() else L31(x12);
  L3(dx1):
    x7 = ld x;
    check L20() else D4();
  L6(dx9):
    x15 = ld x;
    check L33() else D8();
  L17():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(x6):
    __ = ldf `[` in base;
    r5 = dyn __(x6, -1);
    goto L3(r5);
  L30():
    dr4 = tryDispatchBuiltin.1("[", x12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(dr4);
  L31(x14):
    __2 = ldf `[` in base;
    r13 = dyn __2(x14, -1);
    goto L6(r13);
  D4():
    deopt 15 [dx1, x7];
  D8():
    deopt 31 [dx9, x15];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L20():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.object`(x8);
    if c2 then L21() else L22(dx1, x8);
  L32():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx8);
  L33():
    x16 = force? x15;
    checkMissing(x16);
    c4 = `is.object`(x16);
    if c4 then L34() else L35(dx9, x16);
  L4(dx6, dx7):
    r8 = `>`(dx6, dx7);
    all = ldf all in base;
    r9 = dyn all(r8);
    check L25() else D6();
  L7(dx14, dx15):
    r16 = `>=`(dx14, dx15);
    all1 = ldf all in base;
    r17 = dyn all1(r16);
    check L38() else D10();
  L21():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dx1, dr2);
  L22(dx3, x10):
    n = ld n;
    check L24() else D5();
  L34():
    dr6 = tryDispatchBuiltin.1("[", x16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L36() else L35(dx9, dr6);
  L35(dx11, x18):
    n2 = ld n;
    check L37() else D9();
  D5():
    deopt 17 [dx3, x10, n];
  D6():
    deopt 23 [r9];
  D9():
    deopt 33 [dx11, x18, n2];
  D10():
    deopt 39 [r17];
  L23():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx1, dx5);
  L24():
    n1 = force? n;
    checkMissing(n1);
    r6 = `-`(<missing>, n1);
    __1 = ldf `[` in base;
    r7 = dyn __1(x10, r6);
    goto L4(dx3, r7);
  L25():
    goto L2(r9);
  L36():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx9, dx13);
  L37():
    n3 = force? n2;
    checkMissing(n3);
    r14 = `-`(<missing>, n3);
    __3 = ldf `[` in base;
    r15 = dyn __3(x18, r14);
    goto L7(dx11, r15);
  L38():
    goto L5(r17);
  }
}