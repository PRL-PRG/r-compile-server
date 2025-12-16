fun main() {
  () -+> V { reg r:cls, reg isSymmetric:cls, reg diag:cls, reg r1:V, reg p:p(V +), reg r3:V, reg l:*, reg c:L, reg r5:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r8:V, reg D3:*, reg D4:V, reg isSymmetric1:cls, reg D5:*, reg D6:V, reg p1:p(V +), reg r10:V, reg isSymmetric2:cls, reg D7:*, reg D8:V, reg p2:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg matrix:cls, reg p3:p(V +), reg r16:V, reg r17:V, reg t:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg Z:*, reg Z1:V, reg Conj:cls, reg r20:V, reg p4:p(V +), reg r22:V, reg Z2:*, reg Z3:V, reg ___1:cls, reg r23:V, reg Z4:*, reg Z5:V, reg isSymmetric3:cls, reg Z6:*, reg Z7:V, reg p5:p(V +), reg r25:V, reg isSymmetric4:cls, reg Z8:*, reg Z9:V, reg r26:V, reg p6:p(V +), reg r28:V, reg isSymmetric5:cls, reg Z10:*, reg Z11:V, reg r29:V, reg p7:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg c1:cls, reg r34:V, reg l3:*, reg colnames__:cls, reg r35:V, reg isSymmetric6:cls, reg D9:*, reg D10:V, reg p8:p(V +), reg r37:V, reg isSymmetric7:cls, reg D11:*, reg D12:V, reg p9:p(V +), reg r39:V |
    mkenv;
    r = clos `inner-2083163048`;
    st isSymmetric = r;
    isSymmetric = ldf isSymmetric;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      diag = ldf diag;
      r1 = dyn diag(3.0);
      st D3 = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn isSymmetric(p);
    check L4() else D1();
  D1():
    deopt 6 [r3];
  L4():
    l = ld D3;
    c = `is.object`(l);
    if c then L5() else L6(1.0E-100, l);
  L0(dx1):
    st D3 = dx1;
    D3 = ld D3;
    check L8() else D2();
  L5():
    dr = tryDispatchBuiltin.0("[<-", l, 1.0E-100);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(1.0E-100, dr);
  L6(r5, l2):
    ___ = ldf `[<-` in base;
    r8 = dyn ___(l2, 1.0E-100, 2.0, 1.0);
    goto L0(r8);
  D2():
    deopt 15 [D3];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    D4 = force? D3;
    checkMissing(D4);
    isSymmetric1 = ldf isSymmetric;
    check L9() else D3();
  D3():
    deopt 18 [];
  L9():
    p1 = prom<V +>{
      D5 = ld D3;
      D6 = force? D5;
      checkMissing(D6);
      return D6;
    };
    r10 = dyn isSymmetric1(p1);
    check L10() else D4();
  D4():
    deopt 20 [r10];
  L10():
    isSymmetric2 = ldf isSymmetric;
    check L11() else D5();
  D5():
    deopt 22 [];
  L11():
    p2 = prom<V +>{
      D7 = ld D3;
      D8 = force? D7;
      checkMissing(D8);
      return D8;
    };
    r12 = dyn isSymmetric2[, tol](p2, 0.0);
    check L12() else D6();
  D6():
    deopt 26 [r12];
  L12():
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r14):
    st Z = r14;
    t = ldf t;
    check L17() else D9();
  L13():
    matrix = ldf matrix;
    check L15() else D7();
  L14():
    r13 = dyn base(<lang matrix(`+`(`:`(`-`(1.0), 2.0), 0.0i), 2.0)>);
    goto L1(r13);
  D7():
    deopt 29 [];
  D9():
    deopt 37 [];
  L15():
    p3 = prom<V +>{
      return <cplx -1.0+0.0i, 0.0i, 1.0+0.0i, 2.0+0.0i>;
    };
    r16 = dyn matrix(p3, 2.0);
    check L16() else D8();
  L17():
    p4 = prom<V +>{
      sym1 = ldf Conj;
      base1 = ldf Conj in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      Z = ld Z;
      Z1 = force? Z;
      checkMissing(Z1);
      Conj = ldf Conj in base;
      r20 = dyn Conj(Z1);
      goto L0(r20);
    L2():
      r18 = dyn base1(<sym Z>);
      goto L0(r18);
    };
    r22 = dyn t(p4);
    check L18() else D10();
  D8():
    deopt 32 [r16];
  D10():
    deopt 39 [r22];
  L16():
    r17 = sqrt(r16);
    goto L1(r17);
  L18():
    Z2 = ld Z;
    check L19() else D11();
  D11():
    deopt 40 [Z2];
  L19():
    Z3 = force? Z2;
    checkMissing(Z3);
    ___1 = ldf `%*%` in base;
    r23 = dyn ___1(r22, Z3);
    check L20() else D12();
  D12():
    deopt 43 [r23];
  L20():
    st Z = r23;
    Z4 = ld Z;
    check L21() else D13();
  D13():
    deopt 45 [Z4];
  L21():
    Z5 = force? Z4;
    checkMissing(Z5);
    isSymmetric3 = ldf isSymmetric;
    check L22() else D14();
  D14():
    deopt 48 [];
  L22():
    p5 = prom<V +>{
      Z6 = ld Z;
      Z7 = force? Z6;
      checkMissing(Z7);
      return Z7;
    };
    r25 = dyn isSymmetric3(p5);
    check L23() else D15();
  D15():
    deopt 50 [r25];
  L23():
    isSymmetric4 = ldf isSymmetric;
    check L24() else D16();
  D16():
    deopt 52 [];
  L24():
    p6 = prom<V +>{
      Z8 = ld Z;
      Z9 = force? Z8;
      checkMissing(Z9);
      r26 = `+`(Z9, 1.0);
      return r26;
    };
    r28 = dyn isSymmetric4(p6);
    check L25() else D17();
  D17():
    deopt 54 [r28];
  L25():
    isSymmetric5 = ldf isSymmetric;
    check L26() else D18();
  D18():
    deopt 56 [];
  L26():
    p7 = prom<V +>{
      Z10 = ld Z;
      Z11 = force? Z10;
      checkMissing(Z11);
      r29 = `+`(Z11, 1.0i);
      return r29;
    };
    r31 = dyn isSymmetric5(p7);
    check L27() else D19();
  D19():
    deopt 58 [r31];
  L27():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L2(r33):
    l3 = ld D3;
    colnames__ = ldf `colnames<-`;
    check L31() else D21();
  L28():
    c1 = ldf c in base;
    r34 = dyn c1("X", "Y", "Z");
    check L30() else D20();
  L29():
    r32 = dyn base2("X", "Y", "Z");
    goto L2(r32);
  D20():
    deopt 65 [r34];
  D21():
    deopt 67 [r33, l3, r33];
  L30():
    goto L2(r34);
  L31():
    r35 = dyn colnames__(l3, NULL, r33);
    check L32() else D22();
  D22():
    deopt 69 [r33, r35];
  L32():
    st D3 = r35;
    isSymmetric6 = ldf isSymmetric;
    check L33() else D23();
  D23():
    deopt 72 [];
  L33():
    p8 = prom<V +>{
      D9 = ld D3;
      D10 = force? D9;
      checkMissing(D10);
      return D10;
    };
    r37 = dyn isSymmetric6(p8);
    check L34() else D24();
  D24():
    deopt 74 [r37];
  L34():
    isSymmetric7 = ldf isSymmetric;
    check L35() else D25();
  D25():
    deopt 76 [];
  L35():
    p9 = prom<V +>{
      D11 = ld D3;
      D12 = force? D11;
      checkMissing(D12);
      return D12;
    };
    r39 = dyn isSymmetric7[, `check.attributes`](p9, FALSE);
    check L36() else D26();
  D26():
    deopt 80 [r39];
  L36():
    popenv;
    return r39;
  }
}
fun `inner-2083163048`(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("isSymmetric");
    goto L0(r2);
  L2():
    r = dyn base("isSymmetric");
    goto L0(r);
  }
}