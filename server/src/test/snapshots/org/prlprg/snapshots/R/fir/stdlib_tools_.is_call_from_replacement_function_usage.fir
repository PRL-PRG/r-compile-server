fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.is_call_from_replacement_function_usage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg c6:L, reg c8:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c13:L, reg r8:V, reg quote:cls, reg r9:V, reg identical:cls, reg r10:V, reg c14:L, reg c15:V, reg c17:L, reg c19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c22:L, reg r12:V, reg x7:*, reg x8:V, reg c23:L, reg c25:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c27:L, reg dx3:V, reg __1:cls, reg r13:V, reg length1:cls, reg r14:V, reg r15:V, reg c28:L, reg c29:V, reg c31:L, reg c33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg c36:L, reg r17:V, reg x11:*, reg x12:V, reg c37:L, reg c39:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c41:L, reg dx5:V, reg __2:cls, reg r18:V, reg c42:L, reg c43:L, reg c44:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    r3 = `==`(r1, 3);
    c = `as.logical`(r3);
    if c then L15() else L1(c);
  L11():
    x1 = ld x;
    check L13() else D0();
  L12():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    c17 = `as.logical`(c2);
    if c17 then L26() else L5(c17);
  L13():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L14() else D1();
  L15():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    c14 = `as.logical`(r5);
    c15 = `&&`(c5, c14);
    goto L1(c15);
  L5(c19):
    c31 = `as.logical`(c19);
    if c31 then L35() else L8(c31);
  L14():
    goto L0(r2);
  L16():
    x3 = ld x;
    check L18() else D2();
  L17():
    r4 = dyn base1(<lang `[[`(x, 1)>, <lang quote(`<-`)>);
    goto L2(c, r4);
  L26():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  D2():
    deopt 10 [c, x3];
  L6(c22, r12):
    r15 = `>`(r12, 1);
    c28 = `as.logical`(r15);
    c29 = `&&`(c22, c28);
    goto L5(c29);
  L8(c33):
    visible.0();
    popenv;
    return c33;
  L18():
    x4 = force? x3;
    checkMissing(x4);
    c6 = `is.object`(x4);
    if c6 then L19() else L20(c, x4);
  L27():
    x7 = ld x;
    check L29() else D4();
  L28():
    r11 = dyn base3(<lang `[[`(x, 2)>);
    goto L6(c17, r11);
  L35():
    sym4 = ldf `is.symbol`;
    base4 = ldf `is.symbol` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  D4():
    deopt 30 [c17, x7];
  L3(c10, dx1):
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L9(c36, r17):
    c43 = `as.logical`(r17);
    c44 = `&&`(c36, c43);
    goto L8(c44);
  L19():
    dr = tryDispatchBuiltin.1("[[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(c, dr);
  L20(c8, x6):
    __ = ldf `[[` in base;
    r6 = dyn __(x6, 1);
    goto L3(c8, r6);
  L29():
    x8 = force? x7;
    checkMissing(x8);
    c23 = `is.object`(x8);
    if c23 then L30() else L31(c17, x8);
  L36():
    x11 = ld x;
    check L38() else D6();
  L37():
    r16 = dyn base4(<lang `[[`(x, 3)>);
    goto L9(c31, r16);
  D6():
    deopt 41 [c31, x11];
  L4(c13, r8):
    identical = ldf identical in base;
    r10 = dyn identical(dx1, r8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D3();
  L7(c27, dx3):
    length1 = ldf length in base;
    r14 = dyn length1(dx3);
    check L33() else D5();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L22():
    quote = ldf quote in base;
    r9 = dyn quote(<sym `<-`>);
    goto L4(c10, r9);
  L23():
    r7 = dyn base2(<sym `<-`>);
    goto L4(c10, r7);
  L30():
    dr2 = tryDispatchBuiltin.1("[[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(c17, dr2);
  L31(c25, x10):
    __1 = ldf `[[` in base;
    r13 = dyn __1(x10, 2);
    goto L7(c25, r13);
  L38():
    x12 = force? x11;
    checkMissing(x12);
    c37 = `is.object`(x12);
    if c37 then L39() else L40(c31, x12);
  D3():
    deopt 26 [c13, r10];
  D5():
    deopt 36 [c27, r14];
  L10(c41, dx5):
    c42 = `is.symbol`(dx5);
    goto L9(c41, c42);
  L24():
    goto L2(c13, r10);
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(c17, dx2);
  L33():
    goto L6(c27, r14);
  L39():
    dr4 = tryDispatchBuiltin.1("[[", x12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(c31, dr4);
  L40(c39, x14):
    __2 = ldf `[[` in base;
    r18 = dyn __2(x14, 3);
    goto L10(c39, r18);
  L41():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(c31, dx4);
  }
}