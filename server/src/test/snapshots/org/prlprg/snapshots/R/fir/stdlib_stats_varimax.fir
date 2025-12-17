fun main() {
  () -+> V { reg r:cls, reg factanal:cls, reg __:cls, reg r1:V, reg p:p(V +), reg swiss:*, reg swiss1:V, reg p1:p(V +), reg r4:V, reg varimax:cls, reg loadings:cls, reg fa:*, reg fa1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg promax:cls, reg loadings1:cls, reg fa2:*, reg fa3:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V |
    mkenv;
    r = clos inner728015849;
    st varimax = r;
    factanal = ldf factanal;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym .>);
      return r1;
    };
    p1 = prom<V +>{
      swiss = ld swiss;
      swiss1 = force? swiss;
      checkMissing(swiss1);
      return swiss1;
    };
    r4 = dyn factanal[, , data](p, 2.0, p1);
    check L1() else D1();
  D1():
    deopt 9 [r4];
  L1():
    st fa = r4;
    varimax = ldf varimax;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p3 = prom<V +>{
      loadings = ldf loadings;
      p2 = prom<V +>{
        fa = ld fa;
        fa1 = force? fa;
        checkMissing(fa1);
        return fa1;
      };
      r6 = dyn loadings(p2);
      return r6;
    };
    r8 = dyn varimax[, normalize](p3, FALSE);
    check L3() else D3();
  D3():
    deopt 16 [r8];
  L3():
    promax = ldf promax;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p5 = prom<V +>{
      loadings1 = ldf loadings;
      p4 = prom<V +>{
        fa2 = ld fa;
        fa3 = force? fa2;
        checkMissing(fa3);
        return fa3;
      };
      r10 = dyn loadings1(p4);
      return r10;
    };
    r12 = dyn promax(p5);
    check L5() else D5();
  D5():
    deopt 20 [r12];
  L5():
    popenv;
    return r12;
  }
}
fun inner728015849(x, normalize, eps) {
  (reg x:*, reg normalize:*, reg eps:*) -+> V { var x:*, var normalize:*, reg normalize_isMissing:L, reg normalize_orDefault:*, var eps:*, reg eps_isMissing:L, reg eps_orDefault:*, reg ncol:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg nc:*, reg nc1:V, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg normalize1:*, reg normalize2:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg apply:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r10:cls, reg p2:p(V +), reg r12:V, reg drop:cls, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg sc:*, reg sc1:V, reg r15:V, reg nrow:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg r18:V, reg diag:cls, reg nc2:*, reg nc3:V, reg p4:p(V +), reg r20:V, reg r21:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x11:V, reg x12:*, reg x13:V, reg TT:*, reg TT1:V, reg ___:cls, reg r22:V, reg t:cls, reg x14:*, reg x15:V, reg p5:p(V +), reg r24:V, reg z:*, reg z1:V, reg r25:V, reg z2:*, reg z3:V, reg diag1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg rep:cls, reg r30:V, reg z4:*, reg z5:V, reg r31:V, reg ___1:cls, reg r32:V, reg drop1:cls, reg r33:V, reg p6:p(V +), reg r35:V, reg ___2:cls, reg r36:V, reg p7:*, reg p8:V, reg r37:V, reg r38:V, reg ___3:cls, reg r39:V, reg La_svd:cls, reg B:*, reg B1:V, reg p9:p(V +), reg r41:V, reg sB:*, reg sB1:V, reg c3:L, reg i6:I, reg sB3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg r42:V, reg sB4:*, reg sB5:V, reg c4:L, reg i10:I, reg sB7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i12:I, reg dx3:V, reg r43:V, reg ___4:cls, reg r44:V, reg d:*, reg d1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg i15:I, reg r46:V, reg sB8:*, reg sB9:V, reg c5:L, reg i17:I, reg sB11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i19:I, reg dx5:V, reg r47:V, reg sum:cls, reg r48:V, reg d2:*, reg d3:V, reg dpast:*, reg dpast1:V, reg eps1:*, reg eps2:V, reg r49:V, reg r50:V, reg r51:V, reg c6:L, reg x16:*, reg x17:V, reg TT2:*, reg TT3:V, reg ___5:cls, reg r53:V, reg normalize3:*, reg normalize4:V, reg c7:L, reg z6:*, reg z7:V, reg sc2:*, reg sc3:V, reg r54:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg x18:*, reg x19:V, reg dimnames:cls, reg r58:V, reg l1:*, reg dimnames__:cls, reg r59:V, reg l2:*, reg class__:cls, reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg z8:*, reg z9:V, reg TT4:*, reg TT5:V, reg list:cls, reg r63:V |
    mkenv;
    st x = x;
    normalize_isMissing = missing.0(normalize);
    if normalize_isMissing then L0(TRUE) else L0(normalize);
  L0(normalize_orDefault):
    st normalize = normalize_orDefault;
    eps_isMissing = missing.0(eps);
    if eps_isMissing then L1(1.0E-5) else L1(eps);
  L1(eps_orDefault):
    st eps = eps_orDefault;
    ncol = ldf ncol;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn ncol(p);
    check L19() else D1();
  D1():
    deopt 3 [r1];
  L19():
    st nc = r1;
    nc = ld nc;
    check L20() else D2();
  D2():
    deopt 5 [nc];
  L20():
    nc1 = force? nc;
    checkMissing(nc1);
    r2 = `<`(nc1, 2.0);
    c = `as.logical`(r2);
    if c then L21() else L2();
  L2():
    normalize1 = ld normalize;
    check L25() else D4();
  L21():
    x3 = ld x;
    check L22() else D3();
  D3():
    deopt 9 [x3];
  D4():
    deopt 14 [normalize1];
  L22():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L25():
    normalize2 = force? normalize1;
    checkMissing(normalize2);
    c1 = `as.logical`(normalize2);
    if c1 then L26() else L4();
  L4():
    goto L7();
  L7():
    nrow = ldf nrow;
    check L37() else D10();
  L26():
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  D10():
    deopt 37 [];
  L5(r6):
    st sc = r6;
    x7 = ld x;
    check L34() else D8();
  L27():
    sym1 = ldf drop;
    base1 = ldf drop in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L28():
    r5 = dyn base(<lang drop(apply(x, 1, function((x=), sum(`^`(x, 2.0)), NULL)))>);
    goto L5(r5);
  L37():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r18 = dyn nrow(p3);
    check L38() else D11();
  D8():
    deopt 29 [x7];
  D11():
    deopt 39 [r18];
  L6(r8):
    r14 = sqrt(r8);
    goto L5(r14);
  L29():
    apply = ldf apply;
    check L31() else D5();
  L30():
    r7 = dyn base1(<lang apply(x, 1, function((x=), sum(`^`(x, 2.0)), NULL))>);
    goto L6(r7);
  L34():
    x8 = force? x7;
    checkMissing(x8);
    sc = ld sc;
    check L35() else D9();
  L38():
    st p = r18;
    diag = ldf diag;
    check L39() else D12();
  D5():
    deopt 20 [];
  D9():
    deopt 30 [x8, sc];
  D12():
    deopt 42 [];
  L31():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      r10 = clos inner2501545716;
      return r10;
    };
    r12 = dyn apply(p1, 1, p2);
    check L32() else D6();
  L35():
    sc1 = force? sc;
    checkMissing(sc1);
    r15 = `/`(x8, sc1);
    st x = r15;
    goto L7();
  L39():
    p4 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      return nc3;
    };
    r20 = dyn diag(p4);
    check L40() else D13();
  D6():
    deopt 24 [r12];
  D13():
    deopt 44 [r20];
  L32():
    drop = ldf drop in base;
    r13 = dyn drop(r12);
    check L33() else D7();
  L40():
    st TT = r20;
    st d = 0.0;
    r21 = `:`(1, 1000);
    s = toForSeq(r21);
    l = length(s);
    i = 0;
    goto L8(i);
  D7():
    deopt 26 [r13];
  L8(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L41() else L13();
  L33():
    goto L6(r13);
  L11():
    x16 = ld x;
    check L82() else D37();
  L13():
    x11 = `[[`(s, i2, NULL, TRUE);
    st i = x11;
    x12 = ld x;
    check L42() else D14();
  L41():
    goto L11();
  D14():
    deopt 54 [i2, x12];
  D37():
    deopt 126 [x16];
  L42():
    x13 = force? x12;
    checkMissing(x13);
    TT = ld TT;
    check L43() else D15();
  L82():
    x17 = force? x16;
    checkMissing(x17);
    TT2 = ld TT;
    check L83() else D38();
  D15():
    deopt 56 [i2, TT];
  D38():
    deopt 128 [TT2];
  L43():
    TT1 = force? TT;
    checkMissing(TT1);
    ___ = ldf `%*%` in base;
    r22 = dyn ___(x13, TT1);
    check L44() else D16();
  L83():
    TT3 = force? TT2;
    checkMissing(TT3);
    ___5 = ldf `%*%` in base;
    r53 = dyn ___5(x17, TT3);
    check L84() else D39();
  D16():
    deopt 59 [i2, r22];
  D39():
    deopt 131 [r53];
  L44():
    st z = r22;
    t = ldf t;
    check L45() else D17();
  L84():
    st z = r53;
    normalize3 = ld normalize;
    check L85() else D40();
  D17():
    deopt 63 [i2];
  D40():
    deopt 133 [normalize3];
  L45():
    p5 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r24 = dyn t(p5);
    check L46() else D18();
  L85():
    normalize4 = force? normalize3;
    checkMissing(normalize4);
    c7 = `as.logical`(normalize4);
    if c7 then L86() else L14();
  D18():
    deopt 65 [i2, r24];
  L14():
    goto L15();
  L15():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L46():
    z = ld z;
    check L47() else D19();
  L86():
    z6 = ld z;
    check L87() else D41();
  D19():
    deopt 66 [i2, z];
  D41():
    deopt 135 [z6];
  L16(r57):
    l1 = ld z;
    dimnames__ = ldf `dimnames<-`;
    check L94() else D45();
  L47():
    z1 = force? z;
    checkMissing(z1);
    r25 = `^`(z1, 3.0);
    z2 = ld z;
    check L48() else D20();
  L87():
    z7 = force? z6;
    checkMissing(z7);
    sc2 = ld sc;
    check L88() else D42();
  L90():
    x18 = ld x;
    check L92() else D43();
  L91():
    r56 = dyn base5(<sym x>);
    goto L16(r56);
  D20():
    deopt 70 [i2, r25, z2];
  D42():
    deopt 136 [z7, sc2];
  D43():
    deopt 144 [x18];
  D45():
    deopt 149 [r57, l1, r57];
  L48():
    z3 = force? z2;
    checkMissing(z3);
    diag1 = ldf diag;
    check L49() else D21();
  L88():
    sc3 = force? sc2;
    checkMissing(sc3);
    r54 = `*`(z7, sc3);
    st z = r54;
    goto L15();
  L92():
    x19 = force? x18;
    checkMissing(x19);
    dimnames = ldf dimnames in base;
    r58 = dyn dimnames(x19);
    check L93() else D44();
  L94():
    r59 = dyn dimnames__(l1, NULL, r57);
    check L95() else D46();
  D21():
    deopt 73 [i2, r25];
  D44():
    deopt 147 [r58];
  D46():
    deopt 151 [r57, r59];
  L49():
    p6 = prom<V +>{
      sym2 = ldf drop;
      base2 = ldf drop in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r27):
      return r27;
    L2():
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r26 = dyn base2(<lang `%*%`(rep(1.0, p), `^`(z, 2.0))>);
      goto L0(r26);
    L1(r29):
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      r31 = `^`(z5, 2.0);
      ___1 = ldf `%*%` in base;
      r32 = dyn ___1(r29, r31);
      drop1 = ldf drop in base;
      r33 = dyn drop1(r32);
      goto L0(r33);
    L4():
      rep = ldf rep in base;
      r30 = dyn rep(1.0, <sym p>);
      goto L1(r30);
    L5():
      r28 = dyn base3(1.0, <sym p>);
      goto L1(r28);
    };
    r35 = dyn diag1(p6);
    check L50() else D22();
  L93():
    goto L16(r58);
  L95():
    st z = r59;
    l2 = ld z;
    class__ = ldf `class<-`;
    check L96() else D47();
  D22():
    deopt 75 [i2, r25, r35];
  D47():
    deopt 156 ["loadings", l2, "loadings"];
  L50():
    ___2 = ldf `%*%` in base;
    r36 = dyn ___2(z3, r35);
    check L51() else D23();
  L96():
    r60 = dyn class__(l2, NULL, "loadings");
    check L97() else D48();
  D23():
    deopt 77 [i2, r25, r36];
  D48():
    deopt 158 ["loadings", r60];
  L51():
    p7 = ld p;
    check L52() else D24();
  L97():
    st z = r60;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L98() else L99();
  D24():
    deopt 77 [i2, r25, r36, p7];
  L17(r62):
    popenv;
    return r62;
  L52():
    p8 = force? p7;
    checkMissing(p8);
    r37 = `/`(r36, p8);
    r38 = `-`(r25, r37);
    ___3 = ldf `%*%` in base;
    r39 = dyn ___3(r24, r38);
    check L53() else D25();
  L98():
    z8 = ld z;
    check L100() else D49();
  L99():
    r61 = dyn base6[loadings, rotmat](<sym z>, <sym TT>);
    goto L17(r61);
  D25():
    deopt 82 [i2, r39];
  D49():
    deopt 162 [z8];
  L53():
    st B = r39;
    La_svd = ldf `La.svd`;
    check L54() else D26();
  L100():
    z9 = force? z8;
    checkMissing(z9);
    TT4 = ld TT;
    check L101() else D50();
  D26():
    deopt 85 [i2];
  D50():
    deopt 165 [TT4];
  L54():
    p9 = prom<V +>{
      B = ld B;
      B1 = force? B;
      checkMissing(B1);
      return B1;
    };
    r41 = dyn La_svd(p9);
    check L55() else D27();
  L101():
    TT5 = force? TT4;
    checkMissing(TT5);
    list = ldf list in base;
    r63 = dyn list(z9, TT5);
    check L102() else D51();
  D27():
    deopt 87 [i2, r41];
  D51():
    deopt 169 [r63];
  L55():
    st sB = r41;
    sB = ld sB;
    check L56() else D28();
  L102():
    goto L17(r63);
  D28():
    deopt 90 [i2, sB];
  L56():
    sB1 = force? sB;
    checkMissing(sB1);
    c3 = `is.object`(sB1);
    if c3 then L58() else L59(i2, sB1);
  L57(i8, dx1):
    sB4 = ld sB;
    check L61() else D29();
  L58():
    dr = tryDispatchBuiltin.1("$", sB1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(i2, dr);
  L59(i6, sB3):
    r42 = `$`(sB3, <sym u>);
    goto L57(i6, r42);
  D29():
    deopt 93 [i8, sB4];
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L57(i2, dx);
  L61():
    sB5 = force? sB4;
    checkMissing(sB5);
    c4 = `is.object`(sB5);
    if c4 then L63() else L64(i8, sB5);
  L62(i12, dx3):
    ___4 = ldf `%*%` in base;
    r44 = dyn ___4(dx1, dx3);
    check L66() else D30();
  L63():
    dr2 = tryDispatchBuiltin.1("$", sB5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(i8, dr2);
  L64(i10, sB7):
    r43 = `$`(sB7, <sym vt>);
    goto L62(i10, r43);
  D30():
    deopt 97 [i12, r44];
  L65():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L62(i8, dx2);
  L66():
    st TT = r44;
    d = ld d;
    check L67() else D31();
  D31():
    deopt 99 [i12, d];
  L67():
    d1 = force? d;
    checkMissing(d1);
    st dpast = d1;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  L9(i15, r46):
    st d = r46;
    d2 = ld d;
    check L76() else D34();
  L68():
    sB8 = ld sB;
    check L70() else D32();
  L69():
    r45 = dyn base4(<lang `$`(sB, d)>);
    goto L9(i12, r45);
  D32():
    deopt 104 [i12, sB8];
  D34():
    deopt 110 [i15, d2];
  L70():
    sB9 = force? sB8;
    checkMissing(sB9);
    c5 = `is.object`(sB9);
    if c5 then L72() else L73(i12, sB9);
  L76():
    d3 = force? d2;
    checkMissing(d3);
    dpast = ld dpast;
    check L77() else D35();
  D35():
    deopt 111 [i15, d3, dpast];
  L71(i19, dx5):
    sum = ldf sum in base;
    r48 = dyn sum(dx5);
    check L75() else D33();
  L72():
    dr4 = tryDispatchBuiltin.1("$", sB9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(i12, dr4);
  L73(i17, sB11):
    r47 = `$`(sB11, <sym d>);
    goto L71(i17, r47);
  L77():
    dpast1 = force? dpast;
    checkMissing(dpast1);
    eps1 = ld eps;
    check L78() else D36();
  D33():
    deopt 108 [i19, r48];
  D36():
    deopt 113 [i15, d3, dpast1, 1.0, eps1];
  L74():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L71(i12, dx4);
  L75():
    goto L9(i19, r48);
  L78():
    eps2 = force? eps1;
    checkMissing(eps2);
    r49 = `+`(1.0, eps2);
    r50 = `*`(dpast1, r49);
    r51 = `<`(d3, r50);
    c6 = `as.logical`(r51);
    if c6 then L79() else L10();
  L10():
    goto L8(i15);
  L79():
    goto L11();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:V, reg sum:cls, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `^`(x, 2.0)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `^`(x2, 2.0);
    sum = ldf sum in base;
    r3 = dyn sum(r2);
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    goto L0(r3);
  }
}