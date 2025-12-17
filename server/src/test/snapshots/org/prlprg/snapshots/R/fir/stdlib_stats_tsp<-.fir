fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `tsp<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg value1:*, reg value2:V, reg l:*, reg attr__:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg value3:*, reg value4:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg inherits:cls, reg r8:V, reg c2:L, reg cl:*, reg cl1:V, reg c3:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cl4:*, reg cl5:V, reg r9:V, reg __:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg inherits1:cls, reg r13:V, reg c4:L, reg cl6:*, reg cl7:V, reg c5:L, reg cl9:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg cl10:*, reg cl11:V, reg r14:V, reg __1:cls, reg r15:V, reg cl12:*, reg cl13:V, reg l1:*, reg class__:cls, reg r16:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    st cl = r1;
    value1 = ld value;
    check L16() else D2();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [value1];
  L14():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L15() else D1();
  L16():
    value2 = force? value1;
    checkMissing(value2);
    l = ld x;
    attr__ = ldf `attr<-`;
    check L17() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [value2, l, value2];
  L15():
    goto L0(r2);
  L17():
    r3 = dyn attr__(l, NULL, "tsp", value2);
    check L18() else D4();
  D4():
    deopt 13 [value2, r3];
  L18():
    st x = r3;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L22() else L2();
  L19():
    value3 = ld value;
    check L21() else D5();
  L20():
    r4 = dyn base1(<sym value>);
    goto L1(r4);
  D5():
    deopt 16 [value3];
  L2():
    goto L11();
  L11():
    x7 = ld x;
    check L49() else D17();
  L21():
    value4 = force? value3;
    checkMissing(value4);
    c = `==`(value4, NULL);
    goto L1(c);
  L22():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D17():
    deopt 64 [x7];
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L27() else L4();
  L23():
    x3 = ld x;
    check L25() else D6();
  L24():
    r6 = dyn base2(<sym x>, "ts");
    goto L3(r6);
  L49():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  D6():
    deopt 21 [x3];
  L4():
    goto L6();
  L6():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L25():
    x4 = force? x3;
    checkMissing(x4);
    inherits = ldf inherits in base;
    r8 = dyn inherits(x4, "ts", FALSE);
    check L26() else D7();
  L27():
    cl = ld cl;
    check L28() else D8();
  D7():
    deopt 26 [r8];
  D8():
    deopt 27 [cl];
  L7(r12):
    c4 = `as.logical`(r12);
    if c4 then L38() else L8();
  L26():
    goto L3(r8);
  L28():
    cl1 = force? cl;
    checkMissing(cl1);
    c3 = `is.object`(cl1);
    if c3 then L29() else L30(cl1);
  L34():
    x5 = ld x;
    check L36() else D10();
  L35():
    r11 = dyn base3(<sym x>, "mts");
    goto L7(r11);
  D10():
    deopt 39 [x5];
  L5(dx1):
    st cl = dx1;
    goto L6();
  L8():
    goto L10();
  L10():
    cl12 = ld cl;
    check L45() else D14();
  L29():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(cl3):
    cl4 = ld cl;
    check L32() else D9();
  L36():
    x6 = force? x5;
    checkMissing(x6);
    inherits1 = ldf inherits in base;
    r13 = dyn inherits1(x6, "mts", FALSE);
    check L37() else D11();
  L38():
    cl6 = ld cl;
    check L39() else D12();
  D9():
    deopt 30 [cl3, "ts", cl4];
  D11():
    deopt 44 [r13];
  D12():
    deopt 45 [cl6];
  D14():
    deopt 55 [cl12];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L32():
    cl5 = force? cl4;
    checkMissing(cl5);
    r9 = `!=`("ts", cl5);
    __ = ldf `[` in base;
    r10 = dyn __(cl3, r9);
    goto L5(r10);
  L37():
    goto L7(r13);
  L39():
    cl7 = force? cl6;
    checkMissing(cl7);
    c5 = `is.object`(cl7);
    if c5 then L40() else L41(cl7);
  L45():
    cl13 = force? cl12;
    checkMissing(cl13);
    l1 = ld x;
    class__ = ldf `class<-`;
    check L46() else D15();
  D15():
    deopt 58 [cl13, l1, cl13];
  L9(dx4):
    st cl = dx4;
    goto L10();
  L40():
    dr2 = tryDispatchBuiltin.1("[", cl7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(cl9):
    cl10 = ld cl;
    check L43() else D13();
  L46():
    r16 = dyn class__(l1, NULL, cl13);
    check L47() else D16();
  D13():
    deopt 48 [cl9, "mts", cl10];
  D16():
    deopt 60 [cl13, r16];
  L42():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx3);
  L43():
    cl11 = force? cl10;
    checkMissing(cl11);
    r14 = `!=`("mts", cl11);
    __1 = ldf `[` in base;
    r15 = dyn __1(cl9, r14);
    goto L9(r15);
  L47():
    st x = r16;
    goto L11();
  }
}