fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-96675486`;
    st withCallingHandlers = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-96675486`(expr, `...`) {
  (reg expr:*, reg ddd:dots) -+> V { var expr:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg handlers:*, reg handlers1:V, reg names:cls, reg r5:V, reg parent_frame:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg classes:*, reg classes1:V, reg length:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg r14:V, reg handlers2:*, reg handlers3:V, reg length1:cls, reg r15:V, reg r16:V, reg c:L, reg stop:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg classes2:*, reg classes3:V, reg handlers4:*, reg handlers5:V, reg parentenv:*, reg parentenv1:V, reg _addCondHands:cls, reg r21:V, reg expr1:*, reg expr2:V |
    mkenv;
    st expr = expr;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st handlers = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    list = ldf list;
    check L9() else D0();
  L8():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    st classes = r4;
    parent_frame = ldf `parent.frame`;
    check L15() else D4();
  L9():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L10() else D1();
  L11():
    handlers = ld handlers;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym handlers>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [handlers];
  D4():
    deopt 14 [];
  L10():
    goto L0(r2);
  L13():
    handlers1 = force? handlers;
    checkMissing(handlers1);
    names = ldf names in base;
    r5 = dyn names(handlers1);
    check L14() else D3();
  L15():
    r6 = dyn parent_frame();
    check L16() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 15 [r6];
  L14():
    goto L1(r5);
  L16():
    st parentenv = r6;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L2(r8):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L17():
    classes = ld classes;
    check L19() else D6();
  L18():
    r7 = dyn base2(<sym classes>);
    goto L2(r7);
  D6():
    deopt 19 [classes];
  L3(r13, r14):
    r16 = `!=`(r13, r14);
    c = `as.logical`(r16);
    if c then L25() else L4();
  L19():
    classes1 = force? classes;
    checkMissing(classes1);
    length = ldf length in base;
    r9 = dyn length(classes1);
    check L20() else D7();
  L21():
    handlers2 = ld handlers;
    check L23() else D8();
  L22():
    r12 = dyn base3(<sym handlers>);
    goto L3(r8, r12);
  D7():
    deopt 22 [r9];
  D8():
    deopt 24 [r8, handlers2];
  L4():
    goto L5();
  L5():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L20():
    goto L2(r9);
  L23():
    handlers3 = force? handlers2;
    checkMissing(handlers3);
    length1 = ldf length in base;
    r15 = dyn length1(handlers3);
    check L24() else D9();
  L25():
    stop = ldf stop;
    check L26() else D10();
  D9():
    deopt 27 [r8, r15];
  D10():
    deopt 30 [];
  L6():
    expr1 = ld expr;
    check L35() else D16();
  L24():
    goto L3(r8, r15);
  L26():
    r17 = dyn stop("condition handlers must be specified with a condition class");
    check L27() else D11();
  L29():
    classes2 = ld classes;
    check L31() else D12();
  L30():
    r19 = dyn base4(<lang .addCondHands(classes, handlers, parentenv, NULL, TRUE)>);
    goto L6();
  D11():
    deopt 32 [r17];
  D12():
    deopt 37 [classes2];
  D16():
    deopt 47 [expr1];
  L27():
    goto L5();
  L31():
    classes3 = force? classes2;
    checkMissing(classes3);
    handlers4 = ld handlers;
    check L32() else D13();
  L35():
    expr2 = force? expr1;
    checkMissing(expr2);
    popenv;
    return expr2;
  D13():
    deopt 39 [handlers4];
  L32():
    handlers5 = force? handlers4;
    checkMissing(handlers5);
    parentenv = ld parentenv;
    check L33() else D14();
  D14():
    deopt 41 [parentenv];
  L33():
    parentenv1 = force? parentenv;
    checkMissing(parentenv1);
    _addCondHands = ldf `.addCondHands` in base;
    r21 = dyn _addCondHands(classes3, handlers5, parentenv1, NULL, TRUE);
    check L34() else D15();
  D15():
    deopt 46 [r21];
  L34():
    goto L6();
  }
}