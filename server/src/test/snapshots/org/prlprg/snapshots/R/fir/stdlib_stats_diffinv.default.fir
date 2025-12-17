fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1288204249;
    st `diffinv.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1288204249(x, lag, differences, xi, `...`) {
  (reg x:*, reg lag:*, reg differences:*, reg xi:*, reg ddd:dots) -+> V { var x:*, var lag:*, reg lag_isMissing:L, reg lag_orDefault:*, var differences:*, reg differences_isMissing:L, reg differences_orDefault:*, var xi:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg nrow:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg ncol:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r6:V, reg matrix:cls, reg n:*, reg n1:V, reg lag1:*, reg lag2:V, reg differences1:*, reg differences2:V, reg r7:V, reg r8:V, reg p2:p(V +), reg m:*, reg m1:V, reg p3:p(V +), reg r11:V, reg m2:*, reg m3:V, reg r12:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg missing:cls, reg r15:V, reg c2:L, reg matrix1:cls, reg lag3:*, reg lag4:V, reg differences3:*, reg differences4:V, reg r16:V, reg p4:p(V +), reg m4:*, reg m5:V, reg p5:p(V +), reg r19:V, reg NROW:cls, reg xi1:*, reg xi2:V, reg p6:p(V +), reg r22:V, reg lag5:*, reg lag6:V, reg differences5:*, reg differences6:V, reg r23:V, reg r24:V, reg c3:L, reg c4:V, reg NCOL:cls, reg xi3:*, reg xi4:V, reg p7:p(V +), reg r26:V, reg m6:*, reg m7:V, reg r27:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r28:V, reg m8:*, reg m9:V, reg r30:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x7:V, reg diffinv_vector:cls, reg as_vector:cls, reg x8:*, reg x9:V, reg c11:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg p9:p(V +), reg lag7:*, reg lag8:V, reg p10:p(V +), reg differences7:*, reg differences8:V, reg p11:p(V +), reg as_vector1:cls, reg xi5:*, reg xi6:V, reg c12:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r37:V, reg p12:p(V +), reg r39:V, reg p13:p(V +), reg r41:V, reg l1:*, reg c13:L, reg i10:I, reg r43:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i12:I, reg dx5:V, reg i13:*, reg i14:V, reg ___:cls, reg r46:V, reg i15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r47:V, reg r48:V, reg x12:*, reg x13:V, reg is_vector:cls, reg r49:V, reg c14:L, reg diffinv_vector1:cls, reg x14:*, reg x15:V, reg p14:p(V +), reg lag9:*, reg lag10:V, reg p15:p(V +), reg differences9:*, reg differences10:V, reg p16:p(V +), reg xi9:*, reg xi10:V, reg p17:p(V +), reg r54:V, reg stop1:cls, reg r55:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    lag_isMissing = missing.0(lag);
    if lag_isMissing then L0(1.0) else L0(lag);
  L0(lag_orDefault):
    st lag = lag_orDefault;
    differences_isMissing = missing.0(differences);
    if differences_isMissing then L1(1.0) else L1(differences);
  L1(differences_orDefault):
    st differences = differences_orDefault;
    st xi = xi;
    st `...` = ddd;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L2(r1):
    c = `as.logical`(r1);
    if c then L22() else L3();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    sym2 = ldf `is.vector`;
    base2 = ldf `is.vector` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L15():
    y = ld y;
    check L70() else D30();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L21() else D1();
  L22():
    nrow = ldf nrow;
    check L23() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D30():
    deopt 104 [y];
  L16(r48):
    c14 = `as.logical`(r48);
    if c14 then L64() else L17();
  L21():
    goto L2(r2);
  L23():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn nrow(p);
    check L24() else D3();
  L60():
    x12 = ld x;
    check L62() else D24();
  L61():
    r47 = dyn base2(<sym x>);
    goto L16(r47);
  L70():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D3():
    deopt 9 [r4];
  D24():
    deopt 87 [x12];
  L17():
    stop1 = ldf stop;
    check L68() else D28();
  L24():
    st n = r4;
    ncol = ldf ncol;
    check L25() else D4();
  L62():
    x13 = force? x12;
    checkMissing(x13);
    is_vector = ldf `is.vector` in base;
    r49 = dyn is_vector(x13, "any");
    check L63() else D25();
  L64():
    diffinv_vector1 = ldf `diffinv.vector`;
    check L65() else D26();
  D4():
    deopt 12 [];
  D25():
    deopt 91 [r49];
  D26():
    deopt 93 [];
  D28():
    deopt 101 [];
  L25():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r6 = dyn ncol(p1);
    check L26() else D5();
  L63():
    goto L16(r49);
  L65():
    p14 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    p15 = prom<V +>{
      lag9 = ld lag;
      lag10 = force? lag9;
      checkMissing(lag10);
      return lag10;
    };
    p16 = prom<V +>{
      differences9 = ld differences;
      differences10 = force? differences9;
      checkMissing(differences10);
      return differences10;
    };
    p17 = prom<V +>{
      xi9 = ld xi;
      xi10 = force? xi9;
      checkMissing(xi10);
      return xi10;
    };
    r54 = dyn diffinv_vector1(p14, p15, p16, p17);
    check L66() else D27();
  L68():
    r55 = dyn stop1("'x' is not a vector or matrix");
    check L69() else D29();
  D5():
    deopt 14 [r6];
  D27():
    deopt 98 [r54];
  D29():
    deopt 103 [r55];
  L26():
    st m = r6;
    matrix = ldf matrix;
    check L27() else D6();
  L66():
    st y = r54;
    goto L15();
  L69():
    goto L15();
  D6():
    deopt 17 [];
  L27():
    p2 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      lag1 = ld lag;
      lag2 = force? lag1;
      checkMissing(lag2);
      differences1 = ld differences;
      differences2 = force? differences1;
      checkMissing(differences2);
      r7 = `*`(lag2, differences2);
      r8 = `+`(n1, r7);
      return r8;
    };
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r11 = dyn matrix[, nrow, ncol](0.0, p2, p3);
    check L28() else D7();
  D7():
    deopt 23 [r11];
  L28():
    st y = r11;
    m2 = ld m;
    check L29() else D8();
  D8():
    deopt 25 [m2];
  L29():
    m3 = force? m2;
    checkMissing(m3);
    r12 = `>=`(m3, 1.0);
    c1 = `as.logical`(r12);
    if c1 then L30() else L4();
  L4():
    goto L14(NULL);
  L14(i15):
    goto L15();
  L30():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L5(r14):
    c2 = `as.logical`(r14);
    if c2 then L33() else L6();
  L31():
    missing = ldf missing in base;
    r15 = dyn missing(<sym xi>);
    goto L5(r15);
  L32():
    r13 = dyn base1(<sym xi>);
    goto L5(r13);
  L6():
    goto L7();
  L7():
    NROW = ldf NROW;
    check L37() else D11();
  L33():
    matrix1 = ldf matrix;
    check L34() else D9();
  D9():
    deopt 33 [];
  D11():
    deopt 42 [];
  L34():
    p4 = prom<V +>{
      lag3 = ld lag;
      lag4 = force? lag3;
      checkMissing(lag4);
      differences3 = ld differences;
      differences4 = force? differences3;
      checkMissing(differences4);
      r16 = `*`(lag4, differences4);
      return r16;
    };
    p5 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r19 = dyn matrix1(0.0, p4, p5);
    check L35() else D10();
  L37():
    p6 = prom<V +>{
      xi1 = ld xi;
      xi2 = force? xi1;
      checkMissing(xi2);
      return xi2;
    };
    r22 = dyn NROW(p6);
    check L38() else D12();
  D10():
    deopt 37 [r19];
  D12():
    deopt 44 [r22];
  L35():
    st xi = r19;
    goto L7();
  L38():
    lag5 = ld lag;
    check L39() else D13();
  D13():
    deopt 44 [r22, lag5];
  L39():
    lag6 = force? lag5;
    checkMissing(lag6);
    differences5 = ld differences;
    check L40() else D14();
  D14():
    deopt 45 [r22, lag6, differences5];
  L40():
    differences6 = force? differences5;
    checkMissing(differences6);
    r23 = `*`(lag6, differences6);
    r24 = `!=`(r22, r23);
    c3 = `as.logical`(r24);
    if c3 then L8(c3) else L41();
  L8(c4):
    c9 = `as.logical`(c4);
    if c9 then L46() else L9();
  L41():
    NCOL = ldf NCOL;
    check L42() else D15();
  D15():
    deopt 50 [c3];
  L9():
    goto L10();
  L10():
    m8 = ld m;
    check L50() else D20();
  L42():
    p7 = prom<V +>{
      xi3 = ld xi;
      xi4 = force? xi3;
      checkMissing(xi4);
      return xi4;
    };
    r26 = dyn NCOL(p7);
    check L43() else D16();
  L46():
    stop = ldf stop;
    check L47() else D18();
  D16():
    deopt 52 [c3, r26];
  D18():
    deopt 57 [];
  D20():
    deopt 63 [1, m8];
  L43():
    m6 = ld m;
    check L44() else D17();
  L47():
    r28 = dyn stop("incorrect dimensions for 'xi'");
    check L48() else D19();
  L50():
    m9 = force? m8;
    checkMissing(m9);
    r30 = `:`(1, m9);
    s = toForSeq(r30);
    l = length(s);
    i = 0;
    goto L11(i);
  D17():
    deopt 52 [c3, r26, m6];
  D19():
    deopt 59 [r28];
  L11(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L51() else L13();
  L44():
    m7 = force? m6;
    checkMissing(m7);
    r27 = `!=`(r26, m7);
    c6 = `as.logical`(r27);
    c7 = `||`(c3, c6);
    goto L8(c7);
  L48():
    goto L10();
  L13():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    diffinv_vector = ldf `diffinv.vector`;
    check L52() else D21();
  L51():
    goto L14(i2);
  D21():
    deopt 67 [i2];
  L52():
    p9 = prom<V +>{
      as_vector = ldf `as.vector`;
      p8 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        c11 = `is.object`(x9);
        if c11 then L1() else L2();
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", x9);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2();
      L2():
        i5 = ld i;
        i6 = force? i5;
        __ = ldf `[` in base;
        r31 = dyn __(x9, <missing>, i6);
        goto L0(r31);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r33 = dyn as_vector(p8);
      return r33;
    };
    p10 = prom<V +>{
      lag7 = ld lag;
      lag8 = force? lag7;
      checkMissing(lag8);
      return lag8;
    };
    p11 = prom<V +>{
      differences7 = ld differences;
      differences8 = force? differences7;
      checkMissing(differences8);
      return differences8;
    };
    p13 = prom<V +>{
      as_vector1 = ldf `as.vector`;
      p12 = prom<V +>{
        xi5 = ld xi;
        xi6 = force? xi5;
        checkMissing(xi6);
        c12 = `is.object`(xi6);
        if c12 then L1() else L2();
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", xi6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2();
      L2():
        i7 = ld i;
        i8 = force? i7;
        __1 = ldf `[` in base;
        r37 = dyn __1(xi6, <missing>, i8);
        goto L0(r37);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r39 = dyn as_vector1(p12);
      return r39;
    };
    r41 = dyn diffinv_vector(p9, p10, p11, p13);
    check L53() else D22();
  D22():
    deopt 72 [i2, r41];
  L53():
    l1 = ld y;
    c13 = `is.object`(l1);
    if c13 then L54() else L55(i2, r41, l1);
  L12(i12, dx5):
    st y = dx5;
    goto L11(i12);
  L54():
    dr4 = tryDispatchBuiltin.0("[<-", l1, r41);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(i2, r41, dr4);
  L55(i10, r43, l3):
    i13 = ld i;
    check L57() else D23();
  D23():
    deopt 75 [i10, r43, l3, r41, i13];
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(i2, dx4);
  L57():
    i14 = force? i13;
    ___ = ldf `[<-` in base;
    r46 = dyn ___(l1, <missing>, i14, r41);
    goto L12(i10, r46);
  }
}