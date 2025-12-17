fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner476805505;
    st `lag.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner476805505(x, k, `...`) {
  (reg x:*, reg k:*, reg ddd:dots) -+> V { var x:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg k1:*, reg k2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg k5:V, reg r1:V, reg round:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg round1:cls, reg r6:V, reg warning:cls, reg r7:V, reg hasTsp:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r10:V, reg tsp:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r12:V, reg p2:*, reg p3:V, reg k6:*, reg k7:V, reg p4:*, reg p5:V, reg c1:L, reg p8:V, reg k9:V, reg p9:V, reg dr:V, reg dc:L, reg dx:V, reg p11:V, reg k11:V, reg dx1:V, reg __:cls, reg r13:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg p14:V, reg r18:V, reg r19:V, reg c2:cls, reg r20:V, reg r21:V, reg r22:V, reg l:*, reg tsp__:cls, reg r23:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(1.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    k1 = ld k;
    check L7() else D0();
  D0():
    deopt 0 [k1];
  L7():
    k2 = force? k1;
    checkMissing(k2);
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(k5, r1):
    r3 = `!=`(k5, r1);
    c = `as.logical`(r3);
    if c then L10() else L2();
  L8():
    round = ldf round in base;
    r2 = dyn round(<sym k>);
    goto L1(k2, r2);
  L9():
    r = dyn base(<sym k>);
    goto L1(k2, r);
  L2():
    goto L4();
  L4():
    hasTsp = ldf hasTsp;
    check L16() else D3();
  L10():
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D3():
    deopt 16 [];
  L3(r5):
    st k = r5;
    warning = ldf warning;
    check L13() else D1();
  L11():
    round1 = ldf round in base;
    r6 = dyn round1(<sym k>);
    goto L3(r6);
  L12():
    r4 = dyn base1(<sym k>);
    goto L3(r4);
  L16():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn hasTsp(p);
    check L17() else D4();
  D1():
    deopt 10 [];
  D4():
    deopt 18 [r10];
  L13():
    r7 = dyn warning("'k' is not an integer");
    check L14() else D2();
  L17():
    st x = r10;
    tsp = ldf tsp;
    check L18() else D5();
  D2():
    deopt 12 [r7];
  D5():
    deopt 21 [];
  L14():
    goto L4();
  L18():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn tsp(p1);
    check L19() else D6();
  D6():
    deopt 23 [r12];
  L19():
    st p = r12;
    p2 = ld p;
    check L20() else D7();
  D7():
    deopt 25 [p2];
  L20():
    p3 = force? p2;
    checkMissing(p3);
    k6 = ld k;
    check L21() else D8();
  D8():
    deopt 26 [p3, k6];
  L21():
    k7 = force? k6;
    checkMissing(k7);
    p4 = ld p;
    check L22() else D9();
  D9():
    deopt 27 [p3, k7, p4];
  L22():
    p5 = force? p4;
    checkMissing(p5);
    c1 = `is.object`(p5);
    if c1 then L23() else L24(p3, k7, p5);
  L5(p11, k11, dx1):
    r14 = `/`(k11, dx1);
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L23():
    dr = tryDispatchBuiltin.1("[", p5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(p3, k7, dr);
  L24(p8, k9, p9):
    __ = ldf `[` in base;
    r13 = dyn __(p9, 3);
    goto L5(p8, k9, r13);
  L6(p14, r18, r19):
    r21 = `*`(r18, r19);
    r22 = `-`(p14, r21);
    l = ld x;
    tsp__ = ldf `tsp<-`;
    check L29() else D11();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(p3, k7, dx);
  L26():
    c2 = ldf c in base;
    r20 = dyn c2(1.0, 1.0, 0.0);
    check L28() else D10();
  L27():
    r17 = dyn base2(1.0, 1.0, 0.0);
    goto L6(p11, r14, r17);
  D10():
    deopt 38 [p11, r14, r20];
  D11():
    deopt 42 [r22, l, r22];
  L28():
    goto L6(p11, r14, r20);
  L29():
    r23 = dyn tsp__(l, NULL, r22);
    check L30() else D12();
  D12():
    deopt 44 [r22, r23];
  L30():
    st x = r23;
    x5 = ld x;
    check L31() else D13();
  D13():
    deopt 46 [x5];
  L31():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  }
}