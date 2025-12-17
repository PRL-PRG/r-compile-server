fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg hilbert:cls, reg r2:V, reg h9:*, reg h10:V, reg qr:cls, reg h11:*, reg h12:V, reg p:p(V +), reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg r7:V, reg qr1:cls, reg h13:*, reg h14:V, reg p1:p(V +), reg r9:V, reg qrh9:*, reg qrh10:V, reg c1:L, reg qrh12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r10:V, reg qr_solve:cls, reg h15:*, reg h16:V, reg p2:p(V +), reg y:*, reg y1:V, reg p3:p(V +), reg r13:V, reg qr_coef:cls, reg qrh13:*, reg qrh14:V, reg p4:p(V +), reg y2:*, reg y3:V, reg p5:p(V +), reg r16:V, reg h17:*, reg h18:V, reg x:*, reg x1:V, reg ___:cls, reg r17:V, reg matrix:cls, reg runif:cls, reg r18:V, reg p6:p(V +), reg r20:V, reg qr_solve1:cls, reg A:*, reg A1:V, reg p7:p(V +), reg b:*, reg b1:V, reg p8:p(V +), reg r23:V, reg solve:cls, reg qr2:cls, reg A2:*, reg A3:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg b2:*, reg b3:V, reg p11:p(V +), reg r28:V, reg matrix1:cls, reg runif1:cls, reg r29:V, reg p12:p(V +), reg r31:V, reg qr_solve2:cls, reg A4:*, reg A5:V, reg p13:p(V +), reg b4:*, reg b5:V, reg p14:p(V +), reg r34:V, reg solve1:cls, reg qr3:cls, reg A6:*, reg A7:V, reg p15:p(V +), reg r36:V, reg p16:p(V +), reg b6:*, reg b7:V, reg p17:p(V +), reg r39:V |
    mkenv;
    r = clos inner2044426018;
    st qr = r;
    r1 = clos inner4266987626;
    st hilbert = r1;
    hilbert = ldf hilbert;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r2 = dyn hilbert(9.0);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    st h9 = r2;
    h9 = ld h9;
    check L2() else D2();
  D2():
    deopt 11 [h9];
  L2():
    h10 = force? h9;
    checkMissing(h10);
    qr = ldf qr;
    check L3() else D3();
  D3():
    deopt 14 [];
  L3():
    p = prom<V +>{
      h11 = ld h9;
      h12 = force? h11;
      checkMissing(h12);
      return h12;
    };
    r4 = dyn qr(p);
    check L4() else D4();
  D4():
    deopt 16 [r4];
  L4():
    c = `is.object`(r4);
    if c then L6() else L7(r4);
  L5():
    qr1 = ldf qr;
    check L9() else D5();
  L6():
    dr = tryDispatchBuiltin.1("$", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r6):
    r7 = `$`(r6, <sym rank>);
    goto L5();
  D5():
    deopt 19 [];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5();
  L9():
    p1 = prom<V +>{
      h13 = ld h9;
      h14 = force? h13;
      checkMissing(h14);
      return h14;
    };
    r9 = dyn qr1[, tol](p1, 1.0E-10);
    check L10() else D6();
  D6():
    deopt 23 [r9];
  L10():
    st qrh9 = r9;
    qrh9 = ld qrh9;
    check L11() else D7();
  D7():
    deopt 25 [qrh9];
  L11():
    qrh10 = force? qrh9;
    checkMissing(qrh10);
    c1 = `is.object`(qrh10);
    if c1 then L13() else L14(qrh10);
  L12():
    st y = <real 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9>;
    qr_solve = ldf `qr.solve`;
    check L16() else D8();
  L13():
    dr2 = tryDispatchBuiltin.1("$", qrh10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(qrh12):
    r10 = `$`(qrh12, <sym rank>);
    goto L12();
  D8():
    deopt 32 [];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12();
  L16():
    p2 = prom<V +>{
      h15 = ld h9;
      h16 = force? h15;
      checkMissing(h16);
      return h16;
    };
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r13 = dyn qr_solve[, , tol](p2, p3, 1.0E-10);
    check L17() else D9();
  D9():
    deopt 37 [r13];
  L17():
    st x = r13;
    qr_coef = ldf `qr.coef`;
    check L18() else D10();
  D10():
    deopt 40 [];
  L18():
    p4 = prom<V +>{
      qrh13 = ld qrh9;
      qrh14 = force? qrh13;
      checkMissing(qrh14);
      return qrh14;
    };
    p5 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r16 = dyn qr_coef(p4, p5);
    check L19() else D11();
  D11():
    deopt 43 [r16];
  L19():
    st x = r16;
    h17 = ld h9;
    check L20() else D12();
  D12():
    deopt 46 [h17];
  L20():
    h18 = force? h17;
    checkMissing(h18);
    x = ld x;
    check L21() else D13();
  D13():
    deopt 48 [x];
  L21():
    x1 = force? x;
    checkMissing(x1);
    ___ = ldf `%*%` in base;
    r17 = dyn ___(h18, x1);
    check L22() else D14();
  D14():
    deopt 51 [r17];
  L22():
    matrix = ldf matrix;
    check L23() else D15();
  D15():
    deopt 53 [];
  L23():
    p6 = prom<V +>{
      runif = ldf runif;
      r18 = dyn runif(12.0);
      return r18;
    };
    r20 = dyn matrix(p6, 4.0);
    check L24() else D16();
  D16():
    deopt 56 [r20];
  L24():
    st A = r20;
    st b = <int 1, 2, 3, 4>;
    qr_solve1 = ldf `qr.solve`;
    check L25() else D17();
  D17():
    deopt 62 [];
  L25():
    p7 = prom<V +>{
      A = ld A;
      A1 = force? A;
      checkMissing(A1);
      return A1;
    };
    p8 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r23 = dyn qr_solve1(p7, p8);
    check L26() else D18();
  D18():
    deopt 65 [r23];
  L26():
    solve = ldf solve;
    check L27() else D19();
  D19():
    deopt 67 [];
  L27():
    p10 = prom<V +>{
      qr2 = ldf qr;
      p9 = prom<V +>{
        A2 = ld A;
        A3 = force? A2;
        checkMissing(A3);
        return A3;
      };
      r25 = dyn qr2[, LAPACK](p9, TRUE);
      return r25;
    };
    p11 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    r28 = dyn solve(p10, p11);
    check L28() else D20();
  D20():
    deopt 70 [r28];
  L28():
    matrix1 = ldf matrix;
    check L29() else D21();
  D21():
    deopt 72 [];
  L29():
    p12 = prom<V +>{
      runif1 = ldf runif;
      r29 = dyn runif1(12.0);
      return r29;
    };
    r31 = dyn matrix1(p12, 3.0);
    check L30() else D22();
  D22():
    deopt 75 [r31];
  L30():
    st A = r31;
    st b = <int 1, 2, 3>;
    qr_solve2 = ldf `qr.solve`;
    check L31() else D23();
  D23():
    deopt 81 [];
  L31():
    p13 = prom<V +>{
      A4 = ld A;
      A5 = force? A4;
      checkMissing(A5);
      return A5;
    };
    p14 = prom<V +>{
      b4 = ld b;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    r34 = dyn qr_solve2(p13, p14);
    check L32() else D24();
  D24():
    deopt 84 [r34];
  L32():
    solve1 = ldf solve;
    check L33() else D25();
  D25():
    deopt 86 [];
  L33():
    p16 = prom<V +>{
      qr3 = ldf qr;
      p15 = prom<V +>{
        A6 = ld A;
        A7 = force? A6;
        checkMissing(A7);
        return A7;
      };
      r36 = dyn qr3[, LAPACK](p15, TRUE);
      return r36;
    };
    p17 = prom<V +>{
      b6 = ld b;
      b7 = force? b6;
      checkMissing(b7);
      return b7;
    };
    r39 = dyn solve1(p16, p17);
    check L34() else D26();
  D26():
    deopt 89 [r39];
  L34():
    popenv;
    return r39;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
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
    r2 = dyn UseMethod("qr");
    goto L0(r2);
  L2():
    r = dyn base("qr");
    goto L0(r);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg outer:cls, reg i:*, reg i1:V, reg r1:V, reg p:p(V +), reg i2:*, reg i3:V, reg p1:p(V +), reg __:*, reg __1:V, reg p2:p(V +), reg r5:V, reg r6:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L0() else D0();
  D0():
    deopt 1 [1.0, n1];
  L0():
    n2 = force? n1;
    checkMissing(n2);
    r = `:`(1.0, n2);
    st i = r;
    outer = ldf outer;
    check L1() else D1();
  D1():
    deopt 7 [1.0];
  L1():
    p = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      r1 = `-`(i1, 1.0);
      return r1;
    };
    p1 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    p2 = prom<V +>{
      __ = ld `+`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r5 = dyn outer(p, p1, p2);
    check L2() else D2();
  D2():
    deopt 11 [1.0, r5];
  L2():
    r6 = `/`(1.0, r5);
    popenv;
    return r6;
  }
}