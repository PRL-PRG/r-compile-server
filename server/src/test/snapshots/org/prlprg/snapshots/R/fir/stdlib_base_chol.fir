fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg chol:cls, reg m:*, reg m1:V, reg p1:p(V +), reg r7:V, reg t:cls, reg cm:*, reg cm1:V, reg p2:p(V +), reg r9:V, reg cm2:*, reg cm3:V, reg ___:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg cm4:*, reg cm5:V, reg crossprod:cls, reg r13:V, reg matrix1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c1:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg cbind:cls, reg x:*, reg x1:V, reg p4:p(V +), reg x2:*, reg x3:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg x6:*, reg x7:V, reg c3:L, reg dx3:V, reg r22:R, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg r24:R, reg dx7:V, reg __1:cls, reg r25:V, reg r26:V, reg r27:V, reg p5:p(V +), reg r29:V, reg letters:*, reg letters1:V, reg c4:L, reg letters3:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r30:V, reg l:*, reg colnames__:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg x10:*, reg x11:V, reg crossprod1:cls, reg r34:V, reg qr:cls, reg m2:*, reg m3:V, reg p6:p(V +), reg r36:V, reg c5:L, reg r38:V, reg dr6:V, reg dc3:L, reg dx10:V, reg r39:V, reg try:cls, reg chol1:cls, reg m4:*, reg m5:V, reg p7:p(V +), reg r41:V, reg p8:p(V +), reg r43:V, reg chol2:cls, reg m6:*, reg m7:V, reg p9:p(V +), reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg Q:*, reg Q1:V, reg attr:cls, reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg Q2:*, reg Q3:V, reg c6:L, reg Q5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg order:cls, reg pivot:*, reg pivot1:V, reg p10:p(V +), reg r52:V, reg __3:cls, reg r53:V, reg crossprod2:cls, reg r54:V, reg matrix2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg c7:cls, reg r57:V, reg p11:p(V +), reg r59:V, reg try1:cls, reg chol3:cls, reg m8:*, reg m9:V, reg p12:p(V +), reg r61:V, reg p13:p(V +), reg r63:V, reg chol4:cls, reg m10:*, reg m11:V, reg p14:p(V +), reg r65:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg Q6:*, reg Q7:V, reg crossprod3:cls, reg r68:V |
    mkenv;
    r = clos inner2044426018;
    st chol = r;
    matrix = ldf matrix;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(5.0, 1.0, 1.0, 3.0);
      goto L0(r3);
    L2():
      r1 = dyn base(5.0, 1.0, 1.0, 3.0);
      goto L0(r1);
    };
    r5 = dyn matrix(p, 2.0, 2.0);
    check L8() else D1();
  D1():
    deopt 8 [r5];
  L8():
    st m = r5;
    chol = ldf chol;
    check L9() else D2();
  D2():
    deopt 11 [];
  L9():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r7 = dyn chol(p1);
    check L10() else D3();
  D3():
    deopt 13 [r7];
  L10():
    st cm = r7;
    t = ldf t;
    check L11() else D4();
  D4():
    deopt 17 [];
  L11():
    p2 = prom<V +>{
      cm = ld cm;
      cm1 = force? cm;
      checkMissing(cm1);
      return cm1;
    };
    r9 = dyn t(p2);
    check L12() else D5();
  D5():
    deopt 19 [r9];
  L12():
    cm2 = ld cm;
    check L13() else D6();
  D6():
    deopt 20 [cm2];
  L13():
    cm3 = force? cm2;
    checkMissing(cm3);
    ___ = ldf `%*%` in base;
    r10 = dyn ___(r9, cm3);
    check L14() else D7();
  D7():
    deopt 23 [r10];
  L14():
    sym1 = ldf crossprod;
    base1 = ldf crossprod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L0():
    matrix1 = ldf matrix;
    check L19() else D10();
  L15():
    cm4 = ld cm;
    check L17() else D8();
  L16():
    r11 = dyn base1(<sym cm>);
    goto L0();
  D8():
    deopt 26 [cm4];
  D10():
    deopt 31 [];
  L17():
    cm5 = force? cm4;
    checkMissing(cm5);
    crossprod = ldf crossprod in base;
    r13 = dyn crossprod(cm5);
    check L18() else D9();
  L19():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c1 = ldf c in base;
      r16 = dyn c1(<int 1, 2, 3, 4, 5>, <real 1.0, 4.0, 9.0, 16.0, 25.0>);
      goto L0(r16);
    L2():
      r14 = dyn base2(<lang `:`(1.0, 5.0)>, <lang `^`(`(`(`:`(1.0, 5.0)), 2.0)>);
      goto L0(r14);
    };
    r18 = dyn matrix1(p3, 5.0, 2.0);
    check L20() else D11();
  D9():
    deopt 29 [r13];
  D11():
    deopt 35 [r18];
  L18():
    goto L0();
  L20():
    st x = r18;
    cbind = ldf cbind;
    check L21() else D12();
  D12():
    deopt 38 [];
  L21():
    p4 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c2 = `is.object`(x3);
      if c2 then L2() else L3();
    L0(dx1):
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c3 = `is.object`(x7);
      if c3 then L5() else L6(dx1, 3.0);
    L2():
      dr = tryDispatchBuiltin.1("[", x3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3();
    L3():
      __ = ldf `[` in base;
      r20 = dyn __(x3, <missing>, 1.0);
      goto L0(r20);
    L1(dx6, r24, dx7):
      r26 = `*`(r24, dx7);
      r27 = `+`(dx6, r26);
      return r27;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", x7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dx1, 3.0);
    L6(dx3, r22):
      __1 = ldf `[` in base;
      r25 = dyn __1(x7, <missing>, 2.0);
      goto L1(dx3, r22, r25);
    L7():
      dx5 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx1, 3.0, dx5);
    };
    r29 = dyn cbind(p4, p5);
    check L22() else D13();
  D13():
    deopt 41 [r29];
  L22():
    st x = r29;
    letters = ld letters;
    check L23() else D14();
  D14():
    deopt 43 [letters];
  L23():
    letters1 = force? letters;
    checkMissing(letters1);
    c4 = `is.object`(letters1);
    if c4 then L24() else L25(letters1);
  L1(dx9):
    l = ld x;
    colnames__ = ldf `colnames<-`;
    check L27() else D15();
  L24():
    dr4 = tryDispatchBuiltin.1("[", letters1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(letters3):
    __2 = ldf `[` in base;
    r30 = dyn __2(letters3, <int 20, 21, 22>);
    goto L1(r30);
  D15():
    deopt 49 [dx9, l, dx9];
  L26():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L1(dx8);
  L27():
    r31 = dyn colnames__(l, NULL, dx9);
    check L28() else D16();
  D16():
    deopt 51 [dx9, r31];
  L28():
    st x = r31;
    sym3 = ldf crossprod;
    base3 = ldf crossprod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L2(r33):
    st m = r33;
    qr = ldf qr;
    check L33() else D19();
  L29():
    x10 = ld x;
    check L31() else D17();
  L30():
    r32 = dyn base3(<sym x>);
    goto L2(r32);
  D17():
    deopt 55 [x10];
  D19():
    deopt 61 [];
  L31():
    x11 = force? x10;
    checkMissing(x11);
    crossprod1 = ldf crossprod in base;
    r34 = dyn crossprod1(x11);
    check L32() else D18();
  L33():
    p6 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r36 = dyn qr(p6);
    check L34() else D20();
  D18():
    deopt 58 [r34];
  D20():
    deopt 63 [r36];
  L32():
    goto L2(r34);
  L34():
    c5 = `is.object`(r36);
    if c5 then L36() else L37(r36);
  L35():
    try = ldf try;
    check L39() else D21();
  L36():
    dr6 = tryDispatchBuiltin.1("$", r36);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(dr6);
  L37(r38):
    r39 = `$`(r38, <sym rank>);
    goto L35();
  D21():
    deopt 66 [];
  L38():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L35();
  L39():
    p8 = prom<V +>{
      chol1 = ldf chol;
      p7 = prom<V +>{
        m4 = ld m;
        m5 = force? m4;
        checkMissing(m5);
        return m5;
      };
      r41 = dyn chol1(p7);
      return r41;
    };
    r43 = dyn try(p8);
    check L40() else D22();
  D22():
    deopt 68 [r43];
  L40():
    chol2 = ldf chol;
    check L41() else D23();
  D23():
    deopt 70 [];
  L41():
    p9 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r45 = dyn chol2[, pivot](p9, TRUE);
    check L42() else D24();
  D24():
    deopt 74 [r45];
  L42():
    st Q = r45;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L3(r47):
    st pivot = r47;
    sym5 = ldf crossprod;
    base5 = ldf crossprod in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L43():
    Q = ld Q;
    check L45() else D25();
  L44():
    r46 = dyn base4(<sym Q>, "pivot");
    goto L3(r46);
  D25():
    deopt 78 [Q];
  L4():
    matrix2 = ldf matrix;
    check L56() else D31();
  L45():
    Q1 = force? Q;
    checkMissing(Q1);
    attr = ldf attr in base;
    r48 = dyn attr(Q1, "pivot");
    check L46() else D26();
  L47():
    Q2 = ld Q;
    check L49() else D27();
  L48():
    r49 = dyn base5(<lang `[`(Q, , order(pivot))>);
    goto L4();
  D26():
    deopt 82 [r48];
  D27():
    deopt 86 [Q2];
  D31():
    deopt 98 [];
  L46():
    goto L3(r48);
  L49():
    Q3 = force? Q2;
    checkMissing(Q3);
    c6 = `is.object`(Q3);
    if c6 then L50() else L51(Q3);
  L56():
    p11 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      c7 = ldf c in base;
      r57 = dyn c7(5.0, -5.0, -5.0, 3.0);
      goto L0(r57);
    L2():
      r55 = dyn base6(5.0, <lang `-`(5.0)>, <lang `-`(5.0)>, 3.0);
      goto L0(r55);
    };
    r59 = dyn matrix2(p11, 2.0, 2.0);
    check L57() else D32();
  D32():
    deopt 102 [r59];
  L5(dx13):
    crossprod2 = ldf crossprod in base;
    r54 = dyn crossprod2(dx13);
    check L55() else D30();
  L50():
    dr8 = tryDispatchBuiltin.1("[", Q3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L52() else L51(dr8);
  L51(Q5):
    order = ldf order;
    check L53() else D28();
  L57():
    st m = r59;
    try1 = ldf try;
    check L58() else D33();
  D28():
    deopt 90 [Q5];
  D30():
    deopt 96 [r54];
  D33():
    deopt 105 [];
  L52():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx12);
  L53():
    p10 = prom<V +>{
      pivot = ld pivot;
      pivot1 = force? pivot;
      checkMissing(pivot1);
      return pivot1;
    };
    r52 = dyn order(p10);
    check L54() else D29();
  L55():
    goto L4();
  L58():
    p13 = prom<V +>{
      chol3 = ldf chol;
      p12 = prom<V +>{
        m8 = ld m;
        m9 = force? m8;
        checkMissing(m9);
        return m9;
      };
      r61 = dyn chol3(p12);
      return r61;
    };
    r63 = dyn try1(p13);
    check L59() else D34();
  D29():
    deopt 92 [Q5, r52];
  D34():
    deopt 107 [r63];
  L54():
    __3 = ldf `[` in base;
    r53 = dyn __3(Q3, <missing>, r52);
    goto L5(r53);
  L59():
    chol4 = ldf chol;
    check L60() else D35();
  D35():
    deopt 109 [];
  L60():
    p14 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      return m11;
    };
    r65 = dyn chol4[, pivot](p14, TRUE);
    check L61() else D36();
  D36():
    deopt 113 [r65];
  L61():
    st Q = r65;
    sym7 = ldf crossprod;
    base7 = ldf crossprod in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  L6(r67):
    popenv;
    return r67;
  L62():
    Q6 = ld Q;
    check L64() else D37();
  L63():
    r66 = dyn base7(<sym Q>);
    goto L6(r66);
  D37():
    deopt 117 [Q6];
  L64():
    Q7 = force? Q6;
    checkMissing(Q7);
    crossprod3 = ldf crossprod in base;
    r68 = dyn crossprod3(Q7);
    check L65() else D38();
  D38():
    deopt 120 [r68];
  L65():
    goto L6(r68);
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
    r2 = dyn UseMethod("chol");
    goto L0(r2);
  L2():
    r = dyn base("chol");
    goto L0(r);
  }
}