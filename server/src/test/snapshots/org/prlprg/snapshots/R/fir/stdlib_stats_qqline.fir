fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3014876116;
    st qqline = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3014876116(y, datax, distribution, probs, qtype, `...`) {
  (reg y:*, reg datax:*, reg distribution:*, reg probs:*, reg qtype:*, reg ddd:dots) -+> V { var y:*, var datax:*, reg datax_isMissing:L, reg datax_orDefault:*, var distribution:*, reg distribution_isMissing:L, reg distribution_orDefault:*, reg qnorm:*, reg qnorm1:V, reg p:p(V +), var probs:*, reg probs_isMissing:L, reg probs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), var qtype:*, reg qtype_isMissing:L, reg qtype_orDefault:*, var `...`:dots?, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg probs1:*, reg probs2:V, reg length:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg distribution1:*, reg distribution2:V, reg is_function:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg as_vector:cls, reg quantile:cls, reg y1:*, reg y2:V, reg p4:p(V +), reg probs3:*, reg probs4:V, reg p5:p(V +), reg qtype1:*, reg qtype2:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg distribution3:cls, reg probs5:*, reg probs6:V, reg p8:p(V +), reg r22:V, reg datax1:*, reg datax2:V, reg c1:L, reg diff:cls, reg x:*, reg x1:V, reg p9:p(V +), reg r24:V, reg diff1:cls, reg y3:*, reg y4:V, reg p10:p(V +), reg r26:V, reg r27:V, reg x2:*, reg x3:V, reg c2:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r28:V, reg slope:*, reg slope1:V, reg y5:*, reg y6:V, reg c3:L, reg dx3:V, reg slope3:V, reg y8:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg slope5:V, reg dx7:V, reg __1:cls, reg r29:V, reg r30:V, reg r31:V, reg diff2:cls, reg y9:*, reg y10:V, reg p11:p(V +), reg r34:V, reg diff3:cls, reg x6:*, reg x7:V, reg p12:p(V +), reg r36:V, reg r37:V, reg y11:*, reg y12:V, reg c4:L, reg y14:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r38:V, reg slope6:*, reg slope7:V, reg x8:*, reg x9:V, reg c5:L, reg dx11:V, reg slope9:V, reg x11:V, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg slope11:V, reg dx15:V, reg __3:cls, reg r39:V, reg r40:V, reg r41:V, reg abline:cls, reg int:*, reg int1:V, reg p13:p(V +), reg slope12:*, reg slope13:V, reg p14:p(V +), reg ddd1:dots?, reg r44:V |
    mkenv;
    st y = y;
    datax_isMissing = missing.0(datax);
    if datax_isMissing then L0(FALSE) else L0(datax);
  L0(datax_orDefault):
    st datax = datax_orDefault;
    distribution_isMissing = missing.0(distribution);
    if distribution_isMissing then L1() else L2(distribution);
  L1():
    p = prom<V +>{
      qnorm = ld qnorm;
      qnorm1 = force? qnorm;
      checkMissing(qnorm1);
      return qnorm1;
    };
    goto L2(p);
  L2(distribution_orDefault):
    st distribution = distribution_orDefault;
    probs_isMissing = missing.0(probs);
    if probs_isMissing then L3() else L4(probs);
  L3():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(0.25, 0.75);
      goto L0(r3);
    L2():
      r1 = dyn base(0.25, 0.75);
      goto L0(r1);
    };
    goto L4(p1);
  L4(probs_orDefault):
    st probs = probs_orDefault;
    qtype_isMissing = missing.0(qtype);
    if qtype_isMissing then L5(7.0) else L5(qtype);
  L5(qtype_orDefault):
    st qtype = qtype_orDefault;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      r8 = `==`(r6, 2.0);
      return r8;
    L1():
      probs1 = ld probs;
      probs2 = force? probs1;
      checkMissing(probs2);
      length = ldf length in base;
      r7 = dyn length(probs2);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym probs>);
      goto L0(r5);
    };
    p3 = prom<V +>{
      sym2 = ldf `is.function`;
      base2 = ldf `is.function` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      distribution1 = ld distribution;
      distribution2 = force? distribution1;
      checkMissing(distribution2);
      is_function = ldf `is.function` in base;
      r12 = dyn is_function(distribution2);
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym distribution>);
      goto L0(r10);
    };
    r14 = dyn stopifnot(p2, p3);
    check L13() else D1();
  D1():
    deopt 4 [r14];
  L13():
    as_vector = ldf `as.vector`;
    check L14() else D2();
  D2():
    deopt 6 [];
  L14():
    p7 = prom<V +>{
      quantile = ldf quantile;
      p4 = prom<V +>{
        y1 = ld y;
        y2 = force? y1;
        checkMissing(y2);
        return y2;
      };
      p5 = prom<V +>{
        probs3 = ld probs;
        probs4 = force? probs3;
        checkMissing(probs4);
        return probs4;
      };
      p6 = prom<V +>{
        qtype1 = ld qtype;
        qtype2 = force? qtype1;
        checkMissing(qtype2);
        return qtype2;
      };
      r18 = dyn quantile[, , names, type, `na.rm`](p4, p5, FALSE, p6, TRUE);
      return r18;
    };
    r20 = dyn as_vector(p7);
    check L15() else D3();
  D3():
    deopt 8 [r20];
  L15():
    st y = r20;
    distribution3 = ldf distribution;
    check L16() else D4();
  D4():
    deopt 11 [];
  L16():
    p8 = prom<V +>{
      probs5 = ld probs;
      probs6 = force? probs5;
      checkMissing(probs6);
      return probs6;
    };
    r22 = dyn distribution3(p8);
    check L17() else D5();
  D5():
    deopt 13 [r22];
  L17():
    st x = r22;
    datax1 = ld datax;
    check L18() else D6();
  D6():
    deopt 15 [datax1];
  L18():
    datax2 = force? datax1;
    checkMissing(datax2);
    c1 = `as.logical`(datax2);
    if c1 then L19() else L6();
  L6():
    diff2 = ldf diff;
    check L34() else D14();
  L9():
    abline = ldf abline;
    check L47() else D21();
  L19():
    diff = ldf diff;
    check L20() else D7();
  D7():
    deopt 18 [];
  D14():
    deopt 40 [];
  D21():
    deopt 62 [];
  L20():
    p9 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r24 = dyn diff(p9);
    check L21() else D8();
  L34():
    p11 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r34 = dyn diff2(p11);
    check L35() else D15();
  L47():
    p13 = prom<V +>{
      int = ld int;
      int1 = force? int;
      checkMissing(int1);
      return int1;
    };
    p14 = prom<V +>{
      slope12 = ld slope;
      slope13 = force? slope12;
      checkMissing(slope13);
      return slope13;
    };
    ddd1 = ld `...`;
    r44 = dyn abline[, , `...`](p13, p14, ddd1);
    check L48() else D22();
  D8():
    deopt 20 [r24];
  D15():
    deopt 42 [r34];
  D22():
    deopt 66 [r44];
  L21():
    diff1 = ldf diff;
    check L22() else D9();
  L35():
    diff3 = ldf diff;
    check L36() else D16();
  L48():
    popenv;
    return r44;
  D9():
    deopt 21 [r24];
  D16():
    deopt 43 [r34];
  L22():
    p10 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r26 = dyn diff1(p10);
    check L23() else D10();
  L36():
    p12 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r36 = dyn diff3(p12);
    check L37() else D17();
  D10():
    deopt 23 [r24, r26];
  D17():
    deopt 45 [r34, r36];
  L23():
    r27 = `/`(r24, r26);
    st slope = r27;
    x2 = ld x;
    check L24() else D11();
  L37():
    r37 = `/`(r34, r36);
    st slope = r37;
    y11 = ld y;
    check L38() else D18();
  D11():
    deopt 26 [x2];
  D18():
    deopt 48 [y11];
  L24():
    x3 = force? x2;
    checkMissing(x3);
    c2 = `is.object`(x3);
    if c2 then L25() else L26(x3);
  L38():
    y12 = force? y11;
    checkMissing(y12);
    c4 = `is.object`(y12);
    if c4 then L39() else L40(y12);
  L7(dx1):
    slope = ld slope;
    check L28() else D12();
  L10(dx9):
    slope6 = ld slope;
    check L42() else D19();
  L25():
    dr = tryDispatchBuiltin.1("[[", x3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(x5):
    __ = ldf `[[` in base;
    r28 = dyn __(x5, 1);
    goto L7(r28);
  L39():
    dr4 = tryDispatchBuiltin.1("[[", y12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(y14):
    __2 = ldf `[[` in base;
    r38 = dyn __2(y14, 1);
    goto L10(r38);
  D12():
    deopt 30 [dx1, slope];
  D19():
    deopt 52 [dx9, slope6];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L28():
    slope1 = force? slope;
    checkMissing(slope1);
    y5 = ld y;
    check L29() else D13();
  L41():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx8);
  L42():
    slope7 = force? slope6;
    checkMissing(slope7);
    x8 = ld x;
    check L43() else D20();
  D13():
    deopt 31 [dx1, slope1, y5];
  D20():
    deopt 53 [dx9, slope7, x8];
  L29():
    y6 = force? y5;
    checkMissing(y6);
    c3 = `is.object`(y6);
    if c3 then L30() else L31(dx1, slope1, y6);
  L43():
    x9 = force? x8;
    checkMissing(x9);
    c5 = `is.object`(x9);
    if c5 then L44() else L45(dx9, slope7, x9);
  L8(dx6, slope5, dx7):
    r30 = `*`(slope5, dx7);
    r31 = `-`(dx6, r30);
    st int = r31;
    goto L9();
  L11(dx14, slope11, dx15):
    r40 = `*`(slope11, dx15);
    r41 = `-`(dx14, r40);
    st int = r41;
    goto L9();
  L30():
    dr2 = tryDispatchBuiltin.1("[[", y6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(dx1, slope1, dr2);
  L31(dx3, slope3, y8):
    __1 = ldf `[[` in base;
    r29 = dyn __1(y8, 1);
    goto L8(dx3, slope3, r29);
  L44():
    dr6 = tryDispatchBuiltin.1("[[", x9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L46() else L45(dx9, slope7, dr6);
  L45(dx11, slope9, x11):
    __3 = ldf `[[` in base;
    r39 = dyn __3(x11, 1);
    goto L11(dx11, slope9, r39);
  L32():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx1, slope1, dx5);
  L46():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx9, slope7, dx13);
  }
}