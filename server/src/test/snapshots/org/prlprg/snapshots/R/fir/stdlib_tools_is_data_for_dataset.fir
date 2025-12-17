fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3708401697;
    st is_data_for_dataset = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg e3:*, reg e4:V, reg c3:L, reg c5:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg __:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c10:L, reg dx4:V, reg r6:V, reg quote:cls, reg r7:V, reg r8:V, reg c11:L, reg c12:V, reg c14:L, reg c16:V, reg e7:*, reg e8:V, reg c17:L, reg c19:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx5:V, reg c21:L, reg dx6:V, reg __1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c24:L, reg dx9:V, reg r11:V, reg quote1:cls, reg r12:V, reg r13:V, reg c25:L, reg c26:V, reg c28:L, reg c30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c33:L, reg r15:V, reg e11:*, reg e12:V, reg length1:cls, reg r16:V, reg r17:V, reg c34:L, reg c35:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    r3 = `>=`(r1, 2);
    c = `as.logical`(r3);
    if c then L13() else L1(c);
  L9():
    e1 = ld e;
    check L11() else D0();
  L10():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c14 = `as.logical`(c2);
    if c14 then L21() else L4(c14);
  L11():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L12() else D1();
  L13():
    e3 = ld e;
    check L14() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [c, e3];
  L4(c16):
    c28 = `as.logical`(c16);
    if c28 then L29() else L7(c28);
  L12():
    goto L0(r2);
  L14():
    e4 = force? e3;
    checkMissing(e4);
    c3 = `is.object`(e4);
    if c3 then L15() else L16(c, e4);
  L21():
    e7 = ld e;
    check L22() else D3();
  D3():
    deopt 17 [c14, e7];
  L2(c7, dx1):
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L7(c30):
    popenv;
    return c30;
  L15():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(c, dr);
  L16(c5, e6):
    __ = ldf `[[` in base;
    r4 = dyn __(e6, 1);
    goto L2(c5, r4);
  L22():
    e8 = force? e7;
    checkMissing(e8);
    c17 = `is.object`(e8);
    if c17 then L23() else L24(c14, e8);
  L29():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L3(c10, dx4, r6):
    r8 = `==`(dx4, r6);
    c11 = `as.logical`(r8);
    c12 = `&&`(c10, c11);
    goto L1(c12);
  L5(c21, dx6):
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L8(c33, r15):
    r17 = `<=`(r15, 4);
    c34 = `as.logical`(r17);
    c35 = `&&`(c33, c34);
    goto L7(c35);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(c, dx);
  L18():
    quote = ldf quote in base;
    r7 = dyn quote(<sym data>);
    goto L3(c7, dx1, r7);
  L19():
    r5 = dyn base1(<sym data>);
    goto L3(c7, dx1, r5);
  L23():
    dr2 = tryDispatchBuiltin.1("[[", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(c14, dr2);
  L24(c19, e10):
    __1 = ldf `[[` in base;
    r9 = dyn __1(e10, 2);
    goto L5(c19, r9);
  L30():
    e11 = ld e;
    check L32() else D4();
  L31():
    r14 = dyn base3(<sym e>);
    goto L8(c28, r14);
  D4():
    deopt 28 [c28, e11];
  L6(c24, dx9, r11):
    r13 = `!=`(dx9, r11);
    c25 = `as.logical`(r13);
    c26 = `&&`(c24, c25);
    goto L4(c26);
  L25():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(c14, dx5);
  L26():
    quote1 = ldf quote in base;
    r12 = dyn quote1(<sym ...>);
    goto L6(c21, dx6, r12);
  L27():
    r10 = dyn base2(<sym ...>);
    goto L6(c21, dx6, r10);
  L32():
    e12 = force? e11;
    checkMissing(e12);
    length1 = ldf length in base;
    r16 = dyn length1(e12);
    check L33() else D5();
  D5():
    deopt 31 [c28, r16];
  L33():
    goto L8(c28, r16);
  }
}