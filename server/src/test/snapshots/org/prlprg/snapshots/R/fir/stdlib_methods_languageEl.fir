fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1343598342;
    st languageEl = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1343598342(object, which) {
  (reg object:*, reg which:*) -+> V { var object:*, var which:*, reg as_list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg which1:*, reg which2:V, reg c:L, reg c1:L, reg data:*, reg data1:V, reg c2:L, reg data3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg which3:*, reg which4:V, reg __:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg object3:*, reg object4:V, reg typeof:cls, reg r7:V, reg r8:V, reg c3:L, reg isGrammarSymbol:cls, reg data4:*, reg data5:V, reg c4:L, reg data7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg c5:L, reg data8:*, reg data9:V, reg c6:L, reg data11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg which5:*, reg which6:V, reg r12:V, reg __2:cls, reg r13:V, reg data12:*, reg data13:V, reg c7:L, reg data15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg which7:*, reg which8:V, reg __3:cls, reg r14:V, reg data16:*, reg data17:V, reg c8:L, reg data19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg which9:*, reg which10:V, reg __4:cls, reg r15:V |
    mkenv;
    st object = object;
    st which = which;
    as_list = ldf `as.list`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn as_list(p);
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    st data = r1;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r3):
    c1 = `as.logical`(r3);
    if c1 then L14() else L1();
  L11():
    which1 = ld which;
    check L13() else D2();
  L12():
    r2 = dyn base(<sym which>);
    goto L0(r2);
  D2():
    deopt 6 [which1];
  L1():
    sym1 = ldf typeof;
    base1 = ldf typeof in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L13():
    which2 = force? which1;
    checkMissing(which2);
    c = `is.character`(which2);
    goto L0(c);
  L14():
    data = ld data;
    check L15() else D3();
  D3():
    deopt 9 [data];
  L3(r6):
    r8 = `==`(r6, "language");
    c3 = `as.logical`(r8);
    if c3 then L25() else L4();
  L15():
    data1 = force? data;
    checkMissing(data1);
    c2 = `is.object`(data1);
    if c2 then L16() else L17(data1);
  L21():
    object3 = ld object;
    check L23() else D5();
  L22():
    r5 = dyn base1(<sym object>);
    goto L3(r5);
  D5():
    deopt 16 [object3];
  L2(dx1):
    popenv;
    return dx1;
  L4():
    data16 = ld data;
    check L41() else D13();
  L16():
    dr = tryDispatchBuiltin.1("[[", data1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(data3):
    which3 = ld which;
    check L19() else D4();
  L23():
    object4 = force? object3;
    checkMissing(object4);
    typeof = ldf typeof in base;
    r7 = dyn typeof(object4);
    check L24() else D6();
  L25():
    isGrammarSymbol = ldf isGrammarSymbol;
    check L26() else D7();
  D4():
    deopt 11 [data3, which3];
  D6():
    deopt 19 [r7];
  D7():
    deopt 23 [];
  D13():
    deopt 38 [data16];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L19():
    which4 = force? which3;
    __ = ldf `[[` in base;
    r4 = dyn __(data3, which4);
    goto L2(r4);
  L24():
    goto L3(r7);
  L26():
    p1 = prom<V +>{
      data4 = ld data;
      data5 = force? data4;
      checkMissing(data5);
      c4 = `is.object`(data5);
      if c4 then L1() else L2(data5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", data5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(data7):
      __1 = ldf `[[` in base;
      r9 = dyn __1(data7, 1);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r11 = dyn isGrammarSymbol(p1);
    check L27() else D8();
  L41():
    data17 = force? data16;
    checkMissing(data17);
    c8 = `is.object`(data17);
    if c8 then L42() else L43(data17);
  D8():
    deopt 25 [r11];
  L8(dx9):
    popenv;
    return dx9;
  L27():
    c5 = `as.logical`(r11);
    if c5 then L28() else L5();
  L42():
    dr8 = tryDispatchBuiltin.1("[[", data17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L44() else L43(dr8);
  L43(data19):
    which9 = ld which;
    check L45() else D14();
  D14():
    deopt 40 [data19, which9];
  L5():
    data12 = ld data;
    check L35() else D11();
  L28():
    data8 = ld data;
    check L29() else D9();
  L44():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx8);
  L45():
    which10 = force? which9;
    __4 = ldf `[[` in base;
    r15 = dyn __4(data19, which10);
    goto L8(r15);
  D9():
    deopt 26 [data8];
  D11():
    deopt 33 [data12];
  L29():
    data9 = force? data8;
    checkMissing(data9);
    c6 = `is.object`(data9);
    if c6 then L30() else L31(data9);
  L35():
    data13 = force? data12;
    checkMissing(data13);
    c7 = `is.object`(data13);
    if c7 then L36() else L37(data13);
  L6(dx5):
    popenv;
    return dx5;
  L7(dx7):
    popenv;
    return dx7;
  L30():
    dr4 = tryDispatchBuiltin.1("[[", data9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(dr4);
  L31(data11):
    which5 = ld which;
    check L33() else D10();
  L36():
    dr6 = tryDispatchBuiltin.1("[[", data13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(dr6);
  L37(data15):
    which7 = ld which;
    check L39() else D12();
  D10():
    deopt 28 [data11, which5];
  D12():
    deopt 35 [data15, which7];
  L32():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L33():
    which6 = force? which5;
    checkMissing(which6);
    r12 = `+`(which6, 1.0);
    __2 = ldf `[[` in base;
    r13 = dyn __2(data11, r12);
    goto L6(r13);
  L38():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx6);
  L39():
    which8 = force? which7;
    __3 = ldf `[[` in base;
    r14 = dyn __3(data15, which8);
    goto L7(r14);
  }
}