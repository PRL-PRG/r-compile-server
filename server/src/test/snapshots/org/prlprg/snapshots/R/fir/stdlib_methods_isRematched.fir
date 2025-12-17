fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3939969715;
    st isRematched = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3939969715(definition) {
  (reg definition:*) -+> V { var definition:*, reg body:cls, reg definition1:*, reg definition2:V, reg p:p(V +), reg r1:V, reg _identC:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg bdy:*, reg bdy1:V, reg class:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c5:L, reg r8:V, reg bdy2:*, reg bdy3:V, reg length:cls, reg r9:V, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg bdy4:*, reg bdy5:V, reg c10:L, reg bdy7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg _identC1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg bdy8:*, reg bdy9:V, reg class1:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg c11:L, reg c13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c16:L, reg r18:V, reg bdy10:*, reg bdy11:V, reg c17:L, reg c19:L, reg bdy13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c21:L, reg dx3:V, reg __1:cls, reg r19:V, reg as_name:cls, reg r20:V, reg identical:cls, reg r21:V, reg c22:L, reg c23:V |
    mkenv;
    st definition = definition;
    body = ldf body;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      definition1 = ld definition;
      definition2 = force? definition1;
      checkMissing(definition2);
      return definition2;
    };
    r1 = dyn body(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st bdy = r1;
    _identC = ldf `.identC`;
    check L9() else D2();
  D2():
    deopt 6 [];
  L9():
    p1 = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      bdy = ld bdy;
      bdy1 = force? bdy;
      checkMissing(bdy1);
      class = ldf class in base;
      r4 = dyn class(bdy1);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym bdy>);
      goto L0(r2);
    };
    r6 = dyn _identC(p1, "{");
    check L10() else D3();
  D3():
    deopt 9 [r6];
  L10():
    c = `as.logical`(r6);
    if c then L11() else L0(c);
  L0(c2):
    c9 = `as.logical`(c2);
    if c9 then L17() else L2();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1(c5, r8):
    r10 = `>`(r8, 1);
    c6 = `as.logical`(r10);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L2():
    popenv;
    return FALSE;
  L12():
    bdy2 = ld bdy;
    check L14() else D4();
  L13():
    r7 = dyn base1(<sym bdy>);
    goto L1(c, r7);
  L17():
    bdy4 = ld bdy;
    check L18() else D6();
  D4():
    deopt 12 [c, bdy2];
  D6():
    deopt 19 [bdy4];
  L14():
    bdy3 = force? bdy2;
    checkMissing(bdy3);
    length = ldf length in base;
    r9 = dyn length(bdy3);
    check L15() else D5();
  L18():
    bdy5 = force? bdy4;
    checkMissing(bdy5);
    c10 = `is.object`(bdy5);
    if c10 then L19() else L20(bdy5);
  D5():
    deopt 15 [c, r9];
  L3(dx1):
    st bdy = dx1;
    _identC1 = ldf `.identC`;
    check L22() else D7();
  L15():
    goto L1(c, r9);
  L19():
    dr = tryDispatchBuiltin.1("[[", bdy5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(bdy7):
    __ = ldf `[[` in base;
    r11 = dyn __(bdy7, 2);
    goto L3(r11);
  D7():
    deopt 26 [];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    p2 = prom<V +>{
      sym2 = ldf class;
      base2 = ldf class in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      bdy8 = ld bdy;
      bdy9 = force? bdy8;
      checkMissing(bdy9);
      class1 = ldf class in base;
      r14 = dyn class1(bdy9);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym bdy>);
      goto L0(r12);
    };
    r16 = dyn _identC1(p2, "<-");
    check L23() else D8();
  D8():
    deopt 29 [r16];
  L23():
    c11 = `as.logical`(r16);
    if c11 then L24() else L4(c11);
  L4(c13):
    popenv;
    return c13;
  L24():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L5(c16, r18):
    c22 = `as.logical`(r18);
    c23 = `&&`(c16, c22);
    goto L4(c23);
  L25():
    bdy10 = ld bdy;
    check L27() else D9();
  L26():
    r17 = dyn base3(<lang `[[`(bdy, 2)>, <lang as.name(".local")>);
    goto L5(c11, r17);
  D9():
    deopt 32 [c11, bdy10];
  L27():
    bdy11 = force? bdy10;
    checkMissing(bdy11);
    c17 = `is.object`(bdy11);
    if c17 then L28() else L29(c11, bdy11);
  L6(c21, dx3):
    as_name = ldf `as.name`;
    check L31() else D10();
  L28():
    dr2 = tryDispatchBuiltin.1("[[", bdy11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(c11, dr2);
  L29(c19, bdy13):
    __1 = ldf `[[` in base;
    r19 = dyn __1(bdy13, 2);
    goto L6(c19, r19);
  D10():
    deopt 38 [c21];
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(c11, dx2);
  L31():
    r20 = dyn as_name(".local");
    check L32() else D11();
  D11():
    deopt 40 [c21, r20];
  L32():
    identical = ldf identical in base;
    r21 = dyn identical(dx3, r20, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L33() else D12();
  D12():
    deopt 49 [c21, r21];
  L33():
    goto L5(c21, r21);
  }
}