fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1243904590;
    st `.vcov.aliased` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1243904590(aliased, vc, complete) {
  (reg aliased:*, reg vc:*, reg complete:*) -+> V { var aliased:*, var vc:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, reg complete1:*, reg complete2:V, reg c:L, reg c2:V, reg NROW:cls, reg vc1:*, reg vc2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg c5:L, reg r5:V, reg r6:V, reg aliased1:*, reg aliased2:V, reg length:cls, reg r7:V, reg r8:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c14:L, reg r10:V, reg aliased3:*, reg aliased4:V, reg any:cls, reg r11:V, reg c15:L, reg c16:V, reg c18:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg aliased5:*, reg aliased6:V, reg names:cls, reg r14:V, reg matrix:cls, reg P:*, reg P1:V, reg p1:p(V +), reg P2:*, reg P3:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg cn:*, reg cn1:V, reg cn2:*, reg cn3:V, reg list:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg which:cls, reg aliased7:*, reg aliased8:V, reg r22:V, reg p4:p(V +), reg r24:V, reg vc3:*, reg vc4:V, reg l:*, reg c19:L, reg vc6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg j:*, reg j1:V, reg j2:*, reg j3:V, reg ___:cls, reg r25:V, reg VC:*, reg VC1:V, reg vc9:*, reg vc10:V |
    mkenv;
    st aliased = aliased;
    st vc = vc;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(TRUE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    complete1 = ld complete;
    check L8() else D0();
  D0():
    deopt 0 [complete1];
  L8():
    complete2 = force? complete1;
    checkMissing(complete2);
    c = `as.logical`(complete2);
    if c then L9() else L1(c);
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L17() else L3(c9);
  L9():
    NROW = ldf NROW;
    check L10() else D1();
  D1():
    deopt 3 [c];
  L3(c11):
    c18 = `as.logical`(c11);
    if c18 then L23() else L5();
  L10():
    p = prom<V +>{
      vc1 = ld vc;
      vc2 = force? vc1;
      checkMissing(vc2);
      return vc2;
    };
    r1 = dyn NROW(p);
    check L11() else D2();
  L17():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D2():
    deopt 5 [c, r1];
  L4(c14, r10):
    c15 = `as.logical`(r10);
    c16 = `&&`(c14, c15);
    goto L3(c16);
  L5():
    vc9 = ld vc;
    check L40() else D17();
  L11():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L18():
    aliased3 = ld aliased;
    check L20() else D5();
  L19():
    r9 = dyn base1(<sym aliased>);
    goto L4(c9, r9);
  L23():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D5():
    deopt 16 [c9, aliased3];
  D17():
    deopt 52 [vc9];
  L2(c5, r5, r6):
    st P = r6;
    r8 = `<`(r5, r6);
    c6 = `as.logical`(r8);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L6(r13):
    st cn = r13;
    matrix = ldf matrix;
    check L28() else D9();
  L12():
    aliased1 = ld aliased;
    check L14() else D3();
  L13():
    r4 = dyn base(<sym aliased>);
    goto L2(c, r1, r4);
  L20():
    aliased4 = force? aliased3;
    checkMissing(aliased4);
    any = ldf any in base;
    r11 = dyn any(aliased4);
    check L21() else D6();
  L24():
    aliased5 = ld aliased;
    check L26() else D7();
  L25():
    r12 = dyn base2(<sym aliased>);
    goto L6(r12);
  L40():
    vc10 = force? vc9;
    checkMissing(vc10);
    popenv;
    return vc10;
  D3():
    deopt 7 [c, r1, aliased1];
  D6():
    deopt 19 [c9, r11];
  D7():
    deopt 23 [aliased5];
  D9():
    deopt 29 [];
  L14():
    aliased2 = force? aliased1;
    checkMissing(aliased2);
    length = ldf length in base;
    r7 = dyn length(aliased2);
    check L15() else D4();
  L21():
    goto L4(c9, r11);
  L26():
    aliased6 = force? aliased5;
    checkMissing(aliased6);
    names = ldf names in base;
    r14 = dyn names(aliased6);
    check L27() else D8();
  L28():
    p1 = prom<V +>{
      P = ld P;
      P1 = force? P;
      checkMissing(P1);
      return P1;
    };
    p2 = prom<V +>{
      P2 = ld P;
      P3 = force? P2;
      checkMissing(P3);
      return P3;
    };
    p3 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      cn2 = ld cn;
      cn3 = force? cn2;
      checkMissing(cn3);
      list = ldf list in base;
      r19 = dyn list(cn1, cn3);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym cn>, <sym cn>);
      goto L0(r17);
    };
    r21 = dyn matrix[, , , dimnames](NA_REAL, p1, p2, p3);
    check L29() else D10();
  D4():
    deopt 10 [c, r1, r7];
  D8():
    deopt 26 [r14];
  D10():
    deopt 35 [r21];
  L15():
    goto L2(c, r1, r7);
  L27():
    goto L6(r14);
  L29():
    st VC = r21;
    which = ldf which;
    check L30() else D11();
  D11():
    deopt 38 [];
  L30():
    p4 = prom<V +>{
      aliased7 = ld aliased;
      aliased8 = force? aliased7;
      checkMissing(aliased8);
      r22 = `!`(aliased8);
      return r22;
    };
    r24 = dyn which(p4);
    check L31() else D12();
  D12():
    deopt 40 [r24];
  L31():
    st j = r24;
    vc3 = ld vc;
    check L32() else D13();
  D13():
    deopt 42 [vc3];
  L32():
    vc4 = force? vc3;
    checkMissing(vc4);
    l = ld VC;
    c19 = `is.object`(l);
    if c19 then L33() else L34(vc4, l);
  L7(dx1):
    st VC = dx1;
    VC = ld VC;
    check L38() else D16();
  L33():
    dr = tryDispatchBuiltin.0("[<-", l, vc4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(vc4, dr);
  L34(vc6, l2):
    j = ld j;
    check L36() else D14();
  D14():
    deopt 45 [vc6, l2, vc4, j];
  D16():
    deopt 50 [VC];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L36():
    j1 = force? j;
    j2 = ld j;
    check L37() else D15();
  L38():
    VC1 = force? VC;
    checkMissing(VC1);
    popenv;
    return VC1;
  D15():
    deopt 46 [vc6, l2, vc4, j1, j2];
  L37():
    j3 = force? j2;
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, vc4, j1, j3);
    goto L7(r25);
  }
}