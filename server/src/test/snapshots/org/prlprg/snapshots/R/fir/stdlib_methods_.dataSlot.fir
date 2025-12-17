fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2649044198;
    st `.dataSlot` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2649044198(slotNames) {
  (reg slotNames:*) -+> V { var slotNames:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg dataSlot:*, reg dataSlot1:V, reg c1:L, reg dataSlot3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg dataSlot6:V, reg r4:V, reg dataSlot7:*, reg dataSlot8:V, reg slotNames1:*, reg slotNames2:V, reg match:cls, reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg dataSlot9:*, reg dataSlot10:V, reg length:cls, reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg r12:V, reg dataSlot11:*, reg dataSlot12:V |
    mkenv;
    st slotNames = slotNames;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st dataSlot = r1;
    dataSlot = ld dataSlot;
    check L9() else D1();
  L6():
    c = ldf c in base;
    r2 = dyn c(".Data", ".xData");
    check L8() else D0();
  L7():
    r = dyn base(".Data", ".xData");
    goto L0(r);
  D0():
    deopt 5 [r2];
  D1():
    deopt 7 [dataSlot];
  L8():
    goto L0(r2);
  L9():
    dataSlot1 = force? dataSlot;
    checkMissing(dataSlot1);
    c1 = `is.object`(dataSlot1);
    if c1 then L10() else L11(dataSlot1);
  L1(dx1):
    st dataSlot = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L10():
    dr = tryDispatchBuiltin.1("[", dataSlot1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(dataSlot3):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(dataSlot6, r4):
    r6 = `>`(r4, 0.0);
    __ = ldf `[` in base;
    r7 = dyn __(dataSlot6, r6);
    goto L1(r7);
  L3(r9):
    r11 = `>`(r9, 1.0);
    c2 = `as.logical`(r11);
    if c2 then L22() else L4();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    dataSlot7 = ld dataSlot;
    check L15() else D2();
  L14():
    r3 = dyn base1(<sym dataSlot>, <sym slotNames>, 0.0);
    goto L2(dataSlot3, r3);
  L18():
    dataSlot9 = ld dataSlot;
    check L20() else D5();
  L19():
    r8 = dyn base2(<sym dataSlot>);
    goto L3(r8);
  D2():
    deopt 11 [dataSlot3, dataSlot7];
  D5():
    deopt 25 [dataSlot9];
  L4():
    goto L5();
  L5():
    dataSlot11 = ld dataSlot;
    check L26() else D9();
  L15():
    dataSlot8 = force? dataSlot7;
    checkMissing(dataSlot8);
    slotNames1 = ld slotNames;
    check L16() else D3();
  L20():
    dataSlot10 = force? dataSlot9;
    checkMissing(dataSlot10);
    length = ldf length in base;
    r10 = dyn length(dataSlot10);
    check L21() else D6();
  L22():
    stop = ldf stop;
    check L23() else D7();
  D3():
    deopt 13 [dataSlot3, slotNames1];
  D6():
    deopt 28 [r10];
  D7():
    deopt 32 [];
  D9():
    deopt 37 [dataSlot11];
  L16():
    slotNames2 = force? slotNames1;
    checkMissing(slotNames2);
    match = ldf match in base;
    r5 = dyn match(dataSlot8, slotNames2, 0.0, NULL);
    check L17() else D4();
  L21():
    goto L3(r10);
  L23():
    r12 = dyn stop("class cannot have both an ordinary and hidden data type");
    check L24() else D8();
  L26():
    dataSlot12 = force? dataSlot11;
    checkMissing(dataSlot12);
    popenv;
    return dataSlot12;
  D4():
    deopt 18 [dataSlot3, r5];
  D8():
    deopt 34 [r12];
  L17():
    goto L2(dataSlot3, r5);
  L24():
    goto L5();
  }
}