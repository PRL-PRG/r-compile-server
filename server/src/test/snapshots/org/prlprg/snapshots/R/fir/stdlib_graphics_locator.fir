fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3407658826;
    st locator = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3407658826(n, type, `...`) {
  (reg n:*, reg type:*, reg ddd:dots) -+> V { var n:*, reg n_isMissing:L, reg n_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg length:cls, reg r5:V, reg c:L, reg par:cls, reg extras:*, reg extras1:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg on_exit:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg C_locator:*, reg C_locator1:V, reg n1:*, reg n2:V, reg type1:*, reg type2:V, reg _External2:cls, reg r14:V, reg z:*, reg z1:V, reg c1:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg z4:*, reg z5:V, reg c2:L, reg z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg z8:*, reg z9:V, reg c3:L, reg z11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r17:V, reg r18:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x:*, reg x1:V, reg c5:L, reg x3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg n3:*, reg n4:V, reg r21:V, reg __3:cls, reg r22:V, reg y:*, reg y1:V, reg c6:L, reg y3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg n5:*, reg n6:V, reg r23:V, reg __4:cls, reg r24:V, reg list1:cls, reg r25:V |
    mkenv;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(512.0) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1("n") else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r1):
    c = `as.logical`(r1);
    if c then L22() else L4();
  L15():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L16():
    r = dyn base(<lang `<-`(extras, list(...))>);
    goto L2(r);
  L3(r3):
    st extras = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L21() else D2();
  L4():
    goto L6();
  L6():
    sym3 = ldf `.External2`;
    base3 = ldf `.External2` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L17():
    list = ldf list;
    check L19() else D0();
  L18():
    r2 = dyn base1(<sym ...>);
    goto L3(r2);
  L22():
    par = ldf par;
    check L23() else D3();
  D0():
    deopt 4 [];
  D2():
    deopt 9 [r5];
  D3():
    deopt 11 [];
  L7(r13):
    st z = r13;
    z = ld z;
    check L34() else D9();
  L19():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L20() else D1();
  L21():
    goto L2(r5);
  L23():
    p = prom<V +>{
      extras = ld extras;
      extras1 = force? extras;
      checkMissing(extras1);
      return extras1;
    };
    r7 = dyn par(p);
    check L24() else D4();
  L28():
    C_locator = ld C_locator;
    check L30() else D5();
  L29():
    r12 = dyn base3[, , type](<sym C_locator>, <sym n>, <sym type>);
    goto L7(r12);
  D1():
    deopt 6 [r4];
  D4():
    deopt 13 [r7];
  D5():
    deopt 22 [C_locator];
  D9():
    deopt 32 [z];
  L20():
    goto L3(r4);
  L24():
    st opar = r7;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L30():
    C_locator1 = force? C_locator;
    checkMissing(C_locator1);
    n1 = ld n;
    check L31() else D6();
  L34():
    z1 = force? z;
    checkMissing(z1);
    c1 = `is.object`(z1);
    if c1 then L35() else L36(z1);
  D6():
    deopt 24 [n1];
  L5(r9):
    goto L6();
  L8(dx1):
    st x = dx1;
    z4 = ld z;
    check L38() else D10();
  L25():
    on_exit = ldf `on.exit` in base;
    r10 = dyn on_exit(<lang par(opar)>);
    goto L5(r10);
  L26():
    r8 = dyn base2(<lang par(opar)>);
    goto L5(r8);
  L31():
    n2 = force? n1;
    checkMissing(n2);
    type1 = ld type;
    check L32() else D7();
  L35():
    dr = tryDispatchBuiltin.1("[[", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(z3):
    __ = ldf `[[` in base;
    r15 = dyn __(z3, 1);
    goto L8(r15);
  D7():
    deopt 26 [type1];
  D10():
    deopt 38 [z4];
  L32():
    type2 = force? type1;
    checkMissing(type2);
    _External2 = ldf `.External2` in base;
    r14 = dyn _External2(C_locator1, n2, type2);
    check L33() else D8();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L38():
    z5 = force? z4;
    checkMissing(z5);
    c2 = `is.object`(z5);
    if c2 then L39() else L40(z5);
  D8():
    deopt 30 [r14];
  L9(dx3):
    st y = dx3;
    z8 = ld z;
    check L42() else D11();
  L33():
    goto L7(r14);
  L39():
    dr2 = tryDispatchBuiltin.1("[[", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(z7):
    __1 = ldf `[[` in base;
    r16 = dyn __1(z7, 2);
    goto L9(r16);
  D11():
    deopt 44 [z8];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L42():
    z9 = force? z8;
    checkMissing(z9);
    c3 = `is.object`(z9);
    if c3 then L43() else L44(z9);
  L10(dx5):
    st n = dx5;
    r18 = `>`(dx5, 0.0);
    c4 = `as.logical`(r18);
    if c4 then L46() else L11();
  L43():
    dr4 = tryDispatchBuiltin.1("[[", z9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(dr4);
  L44(z11):
    __2 = ldf `[[` in base;
    r17 = dyn __2(z11, 3);
    goto L10(r17);
  L11():
    invisible.0();
    popenv;
    return NULL;
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L46():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L12(r20):
    popenv;
    return r20;
  L47():
    x = ld x;
    check L49() else D12();
  L48():
    r19 = dyn base4[x, y](<lang `[`(x, `:`(1, n))>, <lang `[`(y, `:`(1, n))>);
    goto L12(r19);
  D12():
    deopt 54 [x];
  L49():
    x1 = force? x;
    checkMissing(x1);
    c5 = `is.object`(x1);
    if c5 then L50() else L51(x1);
  L13(dx7):
    y = ld y;
    check L54() else D14();
  L50():
    dr6 = tryDispatchBuiltin.1("[", x1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L52() else L51(dr6);
  L51(x3):
    n3 = ld n;
    check L53() else D13();
  D13():
    deopt 57 [x3, 1, n3];
  D14():
    deopt 62 [y];
  L52():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L53():
    n4 = force? n3;
    checkMissing(n4);
    r21 = `:`(1, n4);
    __3 = ldf `[` in base;
    r22 = dyn __3(x3, r21);
    goto L13(r22);
  L54():
    y1 = force? y;
    checkMissing(y1);
    c6 = `is.object`(y1);
    if c6 then L55() else L56(y1);
  L14(dx9):
    list1 = ldf list in base;
    r25 = dyn list1(dx7, dx9);
    check L59() else D16();
  L55():
    dr8 = tryDispatchBuiltin.1("[", y1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L57() else L56(dr8);
  L56(y3):
    n5 = ld n;
    check L58() else D15();
  D15():
    deopt 65 [y3, 1, n5];
  D16():
    deopt 71 [r25];
  L57():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx8);
  L58():
    n6 = force? n5;
    checkMissing(n6);
    r23 = `:`(1, n6);
    __4 = ldf `[` in base;
    r24 = dyn __4(y3, r23);
    goto L14(r24);
  L59():
    goto L12(r25);
  }
}