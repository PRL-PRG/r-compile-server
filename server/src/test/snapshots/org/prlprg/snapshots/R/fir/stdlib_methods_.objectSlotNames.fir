fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.objectSlotNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg attributes:cls, reg r4:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg value:*, reg value1:V, reg c:V, reg c1:L, reg character:cls, reg r8:V, reg value2:*, reg value3:V, reg c2:L, reg value5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg value8:V, reg r10:V, reg value9:*, reg value10:V, reg match:cls, reg r11:V, reg r12:V, reg __:cls, reg r13:V |
    mkenv;
    st object = object;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st value = r1;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L6():
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r = dyn base(<lang attributes(object)>);
    goto L0(r);
  L1(r3):
    names = ldf names in base;
    r5 = dyn names(r3);
    check L12() else D2();
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L16() else L3();
  L8():
    object1 = ld object;
    check L10() else D0();
  L9():
    r2 = dyn base1(<sym object>);
    goto L1(r2);
  L13():
    value = ld value;
    check L15() else D3();
  L14():
    r6 = dyn base2(<sym value>);
    goto L2(r6);
  D0():
    deopt 4 [object1];
  D2():
    deopt 9 [r5];
  D3():
    deopt 12 [value];
  L3():
    value2 = ld value;
    check L20() else D6();
  L10():
    object2 = force? object1;
    checkMissing(object2);
    attributes = ldf attributes in base;
    r4 = dyn attributes(object2);
    check L11() else D1();
  L12():
    goto L0(r5);
  L15():
    value1 = force? value;
    checkMissing(value1);
    c = `==`(value1, NULL);
    goto L2(c);
  L16():
    character = ldf character;
    check L17() else D4();
  D1():
    deopt 7 [r4];
  D4():
    deopt 16 [];
  D6():
    deopt 18 [value2];
  L11():
    goto L1(r4);
  L17():
    r8 = dyn character();
    check L18() else D5();
  L20():
    value3 = force? value2;
    checkMissing(value3);
    c2 = `is.object`(value3);
    if c2 then L21() else L22(value3);
  D5():
    deopt 17 [r8];
  L4(dx1):
    popenv;
    return dx1;
  L18():
    popenv;
    return r8;
  L21():
    dr = tryDispatchBuiltin.1("[", value3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(value5):
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L5(value8, r10):
    r12 = `-`(<missing>, r10);
    __ = ldf `[` in base;
    r13 = dyn __(value8, r12);
    goto L4(r13);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L24():
    value9 = ld value;
    check L26() else D7();
  L25():
    r9 = dyn base3("class", <sym value>, 0);
    goto L5(value5, r9);
  D7():
    deopt 23 [value5, value9];
  L26():
    value10 = force? value9;
    checkMissing(value10);
    match = ldf match in base;
    r11 = dyn match("class", value10, 0, NULL);
    check L27() else D8();
  D8():
    deopt 28 [value5, r11];
  L27():
    goto L5(value5, r11);
  }
}