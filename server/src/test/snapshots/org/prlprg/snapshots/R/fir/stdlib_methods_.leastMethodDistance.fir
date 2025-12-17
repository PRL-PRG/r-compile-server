fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2550629801;
    st `.leastMethodDistance` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2550629801(methods, supersList, classDefs, fromGroup, verbose) {
  (reg methods:*, reg supersList:*, reg classDefs:*, reg fromGroup:*, reg verbose:*) -+> V { var methods:*, var supersList:*, var classDefs:*, var fromGroup:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg methods1:*, reg methods2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg rep:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg classDefs1:*, reg classDefs2:V, reg length1:cls, reg r8:V, reg matrix:cls, reg nArg:*, reg nArg1:V, reg p:p(V +), reg n:*, reg n1:V, reg p1:p(V +), reg r11:V, reg n2:*, reg n3:V, reg r12:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __:cls, reg r13:V, reg cl:*, reg cl1:V, reg l1:*, reg c1:L, reg i6:I, reg cl3:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg i11:I, reg cl10:V, reg l6:*, reg cl11:V, reg r15:V, reg cl12:*, reg cl13:V, reg r16:I, reg j:*, reg j1:V, reg ___:cls, reg r17:V, reg lapply:cls, reg classDefs3:*, reg classDefs4:V, reg p2:p(V +), reg _inhDistances:*, reg _inhDistances1:V, reg p3:p(V +), reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg unlist:cls, reg containsDist:*, reg containsDist1:V, reg p4:p(V +), reg r24:V, reg max:cls, reg r25:V, reg r26:V, reg verbose1:*, reg verbose2:V, reg c2:L, reg cat:cls, reg r27:V, reg print:cls, reg containsDist2:*, reg containsDist3:V, reg p5:p(V +), reg r29:V, reg nArg2:*, reg nArg3:V, reg r31:V, reg s1:V, reg l7:I, reg i12:I, reg i13:I, reg i14:I, reg c3:L, reg x1:V, reg containsDist4:*, reg containsDist5:V, reg c4:L, reg i18:I, reg containsDist7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __1:cls, reg r32:V, reg maxDist:*, reg maxDist1:V, reg l8:*, reg c5:L, reg i24:I, reg maxDist3:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i26:I, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg i29:I, reg maxDist10:V, reg l13:*, reg maxDist11:V, reg r34:V, reg ihi:*, reg ihi1:V, reg is_na:cls, reg r35:V, reg ___1:cls, reg r36:V, reg defClasses:*, reg defClasses1:V, reg c6:L, reg i31:I, reg defClasses3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i33:I, reg dx7:V, reg i34:*, reg i35:V, reg __2:cls, reg r37:V, reg dist:*, reg dist1:V, reg ihi2:*, reg ihi3:V, reg c7:L, reg i37:I, reg dist3:V, reg ihi5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i39:I, reg dist5:V, reg dx9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg i42:I, reg dist8:V, reg ihi8:V, reg r39:V, reg cli:*, reg cli1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg i45:I, reg dist11:V, reg ihi11:V, reg r41:V, reg ihi12:*, reg ihi13:V, reg names:cls, reg r42:V, reg match:cls, reg r43:V, reg __3:cls, reg r44:V, reg r45:V, reg verbose3:*, reg verbose4:V, reg c8:L, reg cat1:cls, reg paste:cls, reg formatC:cls, reg dist12:*, reg dist13:V, reg p6:p(V +), reg r47:V, reg p7:p(V +), reg r49:V, reg p8:p(V +), reg r51:V, reg dist14:*, reg dist15:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg dist18:V, reg r54:V, reg dist19:*, reg dist20:V, reg min:cls, reg r55:V, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg fromGroup1:*, reg fromGroup2:V, reg c9:L, reg fromGroup4:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg best:*, reg best1:V, reg __4:cls, reg r59:V, reg any:cls, reg r60:V, reg c10:L, reg c12:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg c15:L, reg r62:V, reg fromGroup5:*, reg fromGroup6:V, reg c16:L, reg c18:L, reg fromGroup8:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c20:L, reg dx13:V, reg best2:*, reg best3:V, reg __5:cls, reg r63:V, reg all:cls, reg r64:V, reg r65:V, reg c21:L, reg c22:V, reg c24:L, reg best4:*, reg best5:V, reg fromGroup9:*, reg fromGroup10:V, reg r66:V, reg r67:V, reg n4:*, reg n5:V, reg r69:V, reg c25:L, reg r71:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg best6:*, reg best7:V, reg __6:cls, reg r72:V |
    mkenv;
    st methods = methods;
    st supersList = supersList;
    st classDefs = classDefs;
    st fromGroup = fromGroup;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L1(r1):
    st n = r1;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L31():
    methods1 = ld methods;
    check L33() else D0();
  L32():
    r = dyn base(<sym methods>);
    goto L1(r);
  D0():
    deopt 2 [methods1];
  L2(r4):
    st dist = r4;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L33():
    methods2 = force? methods1;
    checkMissing(methods2);
    length = ldf length in base;
    r2 = dyn length(methods2);
    check L34() else D1();
  L35():
    rep = ldf rep in base;
    r5 = dyn rep(0.0, <sym n>);
    goto L2(r5);
  L36():
    r3 = dyn base1(0.0, <sym n>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  L3(r7):
    st nArg = r7;
    matrix = ldf matrix;
    check L41() else D4();
  L34():
    goto L1(r2);
  L37():
    classDefs1 = ld classDefs;
    check L39() else D2();
  L38():
    r6 = dyn base2(<sym classDefs>);
    goto L3(r6);
  D2():
    deopt 13 [classDefs1];
  D4():
    deopt 19 [];
  L39():
    classDefs2 = force? classDefs1;
    checkMissing(classDefs2);
    length1 = ldf length in base;
    r8 = dyn length1(classDefs2);
    check L40() else D3();
  L41():
    p = prom<V +>{
      nArg = ld nArg;
      nArg1 = force? nArg;
      checkMissing(nArg1);
      return nArg1;
    };
    p1 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r11 = dyn matrix("ANY", p, p1);
    check L42() else D5();
  D3():
    deopt 16 [r8];
  D5():
    deopt 23 [r11];
  L40():
    goto L3(r8);
  L42():
    st defClasses = r11;
    n2 = ld n;
    check L43() else D6();
  D6():
    deopt 26 [1, n2];
  L43():
    n3 = force? n2;
    checkMissing(n3);
    r12 = `:`(1, n3);
    s = toForSeq(r12);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L44() else L7();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    __ = ldf `@` in base;
    r13 = dyn __(<lang `@`(`[[`(methods, j), defined)>, <sym .Data>);
    st cl = r13;
    cl = ld cl;
    check L45() else D7();
  L44():
    lapply = ldf lapply;
    check L53() else D10();
  D7():
    deopt 32 [i2, cl];
  D10():
    deopt 46 [];
  L45():
    cl1 = force? cl;
    checkMissing(cl1);
    l1 = ld defClasses;
    c1 = `is.object`(l1);
    if c1 then L46() else L47(i2, cl1, l1);
  L53():
    p2 = prom<V +>{
      classDefs3 = ld classDefs;
      classDefs4 = force? classDefs3;
      checkMissing(classDefs4);
      return classDefs4;
    };
    p3 = prom<V +>{
      _inhDistances = ld `.inhDistances`;
      _inhDistances1 = force? _inhDistances;
      checkMissing(_inhDistances1);
      return _inhDistances1;
    };
    r20 = dyn lapply(p2, p3);
    check L54() else D11();
  D11():
    deopt 49 [r20];
  L5(i8, dx1):
    st defClasses = dx1;
    goto L4(i8);
  L46():
    dr = tryDispatchBuiltin.0("[<-", l1, cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(i2, cl1, dr);
  L47(i6, cl3, l3):
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L54():
    st containsDist = r20;
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L6(i11, cl10, l6, cl11, r15):
    j = ld j;
    check L52() else D9();
  L8(r22):
    r26 = `+`(r22, 1.0);
    st maxDist = r26;
    verbose1 = ld verbose;
    check L60() else D15();
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, dx);
  L49():
    cl12 = ld cl;
    check L51() else D8();
  L50():
    r14 = dyn base3(<sym cl>);
    goto L6(i6, cl3, l3, cl1, r14);
  L55():
    unlist = ldf unlist;
    check L57() else D12();
  L56():
    r21 = dyn base4[, `na.rm`](<lang unlist(containsDist)>, TRUE);
    goto L8(r21);
  D8():
    deopt 36 [i6, cl3, l3, cl1, cl12];
  D9():
    deopt 38 [i11, cl10, l6, cl11, r15, j];
  D12():
    deopt 54 [];
  D15():
    deopt 64 [verbose1];
  L51():
    cl13 = force? cl12;
    checkMissing(cl13);
    r16 = seq_along(cl13);
    goto L6(i6, cl3, l3, cl1, r16);
  L52():
    j1 = force? j;
    ___ = ldf `[<-` in base;
    r17 = dyn ___(l6, cl11, r15, j1);
    goto L5(i11, r17);
  L57():
    p4 = prom<V +>{
      containsDist = ld containsDist;
      containsDist1 = force? containsDist;
      checkMissing(containsDist1);
      return containsDist1;
    };
    r24 = dyn unlist(p4);
    check L58() else D13();
  L60():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c2 = `as.logical`(verbose2);
    if c2 then L61() else L9();
  D13():
    deopt 56 [r24];
  L9():
    goto L10();
  L10():
    nArg2 = ld nArg;
    check L67() else D20();
  L58():
    max = ldf max in base;
    r25 = dyn max(r24, TRUE);
    check L59() else D14();
  L61():
    cat = ldf cat;
    check L62() else D16();
  D14():
    deopt 60 [r25];
  D16():
    deopt 67 [];
  D20():
    deopt 77 [1, nArg2];
  L59():
    goto L8(r25);
  L62():
    r27 = dyn cat("** individual arguments' distances:\n");
    check L63() else D17();
  L67():
    nArg3 = force? nArg2;
    checkMissing(nArg3);
    r31 = `:`(1, nArg3);
    s1 = toForSeq(r31);
    l7 = length(s1);
    i12 = 0;
    goto L11(i12);
  D17():
    deopt 69 [r27];
  L11(i13):
    i14 = `+`.1(i13, 1);
    c3 = `<`.1(l7, i14);
    if c3 then L68() else L19();
  L63():
    print = ldf print;
    check L64() else D18();
  D18():
    deopt 71 [];
  L19():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st i = x1;
    containsDist4 = ld containsDist;
    check L69() else D21();
  L64():
    p5 = prom<V +>{
      containsDist2 = ld containsDist;
      containsDist3 = force? containsDist2;
      checkMissing(containsDist3);
      return containsDist3;
    };
    r29 = dyn print(p5);
    check L65() else D19();
  L68():
    verbose3 = ld verbose;
    check L100() else D34();
  D19():
    deopt 73 [r29];
  D21():
    deopt 80 [i14, containsDist4];
  D34():
    deopt 128 [verbose3];
  L65():
    goto L10();
  L69():
    containsDist5 = force? containsDist4;
    checkMissing(containsDist5);
    c4 = `is.object`(containsDist5);
    if c4 then L70() else L71(i14, containsDist5);
  L100():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c8 = `as.logical`(verbose4);
    if c8 then L101() else L20();
  L12(i20, dx3):
    st ihi = dx3;
    maxDist = ld maxDist;
    check L74() else D23();
  L20():
    goto L21();
  L21():
    dist14 = ld dist;
    check L105() else D37();
  L70():
    dr2 = tryDispatchBuiltin.1("[[", containsDist5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L72() else L71(i14, dr2);
  L71(i18, containsDist7):
    i21 = ld i;
    check L73() else D22();
  L101():
    cat1 = ldf cat;
    check L102() else D35();
  D22():
    deopt 82 [i18, containsDist7, i21];
  D23():
    deopt 86 [i20, maxDist];
  D35():
    deopt 131 [];
  D37():
    deopt 140 [dist14];
  L72():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(i14, dx2);
  L73():
    i22 = force? i21;
    __1 = ldf `[[` in base;
    r32 = dyn __1(containsDist7, i22);
    goto L12(i18, r32);
  L74():
    maxDist1 = force? maxDist;
    checkMissing(maxDist1);
    l8 = ld ihi;
    c5 = `is.object`(l8);
    if c5 then L75() else L76(i20, maxDist1, l8);
  L102():
    p8 = prom<V +>{
      paste = ldf paste;
      p7 = prom<V +>{
        formatC = ldf formatC;
        p6 = prom<V +>{
          dist12 = ld dist;
          dist13 = force? dist12;
          checkMissing(dist13);
          return dist13;
        };
        r47 = dyn formatC(p6);
        return r47;
      };
      r49 = dyn paste[, collapse](p7, ", ");
      return r49;
    };
    r51 = dyn cat1[, , , sep]("** final methods' distances: (", p8, ")\n", "");
    check L103() else D36();
  L105():
    dist15 = force? dist14;
    checkMissing(dist15);
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L106() else L107();
  D36():
    deopt 137 [r51];
  L13(i26, dx5):
    st ihi = dx5;
    defClasses = ld defClasses;
    check L82() else D26();
  L22(dist18, r54):
    r56 = `==`(dist18, r54);
    st best = r56;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  L75():
    dr4 = tryDispatchBuiltin.0("[<-", l8, maxDist1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L77() else L76(i20, maxDist1, dr4);
  L76(i24, maxDist3, l10):
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L78() else L79();
  L103():
    goto L21();
  L106():
    dist19 = ld dist;
    check L108() else D38();
  L107():
    r53 = dyn base8(<sym dist>);
    goto L22(dist15, r53);
  D26():
    deopt 97 [i26, defClasses];
  D38():
    deopt 143 [dist15, dist19];
  L14(i29, maxDist10, l13, maxDist11, r34):
    ___1 = ldf `[<-` in base;
    r36 = dyn ___1(l13, maxDist11, r34);
    goto L13(i29, r36);
  L23(r58):
    c10 = `as.logical`(r58);
    if c10 then L118() else L25(c10);
  L77():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(i20, dx4);
  L78():
    ihi = ld ihi;
    check L80() else D24();
  L79():
    r33 = dyn base5(<sym ihi>);
    goto L14(i24, maxDist3, l10, maxDist1, r33);
  L82():
    defClasses1 = force? defClasses;
    checkMissing(defClasses1);
    c6 = `is.object`(defClasses1);
    if c6 then L83() else L84(i26, defClasses1);
  L108():
    dist20 = force? dist19;
    checkMissing(dist20);
    min = ldf min in base;
    r55 = dyn min(dist20);
    check L109() else D39();
  L110():
    fromGroup1 = ld fromGroup;
    check L112() else D40();
  L111():
    r57 = dyn base9(<lang `[`(fromGroup, best)>);
    goto L23(r57);
  D24():
    deopt 91 [i24, maxDist3, l10, maxDist1, ihi];
  D39():
    deopt 146 [dist15, r55];
  D40():
    deopt 151 [fromGroup1];
  L15(i33, dx7):
    st cli = dx7;
    dist = ld dist;
    check L87() else D28();
  L25(c12):
    c24 = `as.logical`(c12);
    if c24 then L128() else L28();
  L80():
    ihi1 = force? ihi;
    checkMissing(ihi1);
    is_na = ldf `is.na` in base;
    r35 = dyn is_na(ihi1);
    check L81() else D25();
  L83():
    dr6 = tryDispatchBuiltin.1("[", defClasses1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(i26, dr6);
  L84(i31, defClasses3):
    i34 = ld i;
    check L86() else D27();
  L109():
    goto L22(dist15, r55);
  L112():
    fromGroup2 = force? fromGroup1;
    checkMissing(fromGroup2);
    c9 = `is.object`(fromGroup2);
    if c9 then L113() else L114(fromGroup2);
  L118():
    sym10 = ldf all;
    base10 = ldf all in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  D25():
    deopt 94 [i24, maxDist3, l10, maxDist1, r35];
  D27():
    deopt 99 [i31, defClasses3, i34];
  D28():
    deopt 105 [i33, dist];
  L24(dx11):
    any = ldf any in base;
    r60 = dyn any(dx11);
    check L117() else D42();
  L26(c15, r62):
    r65 = `!`(r62);
    c21 = `as.logical`(r65);
    c22 = `&&`(c15, c21);
    goto L25(c22);
  L28():
    goto L29();
  L29():
    n4 = ld n;
    check L132() else D48();
  L81():
    goto L14(i24, maxDist3, l10, maxDist1, r35);
  L85():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i26, dx6);
  L86():
    i35 = force? i34;
    __2 = ldf `[` in base;
    r37 = dyn __2(defClasses1, i35, <missing>);
    goto L15(i31, r37);
  L87():
    dist1 = force? dist;
    checkMissing(dist1);
    ihi2 = ld ihi;
    check L88() else D29();
  L113():
    dr10 = tryDispatchBuiltin.1("[", fromGroup2);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L115() else L114(dr10);
  L114(fromGroup4):
    best = ld best;
    check L116() else D41();
  L119():
    fromGroup5 = ld fromGroup;
    check L121() else D43();
  L120():
    r61 = dyn base10(<lang `[`(fromGroup, best)>);
    goto L26(c10, r61);
  L128():
    best4 = ld best;
    check L129() else D46();
  D29():
    deopt 106 [i33, dist1, ihi2];
  D41():
    deopt 153 [fromGroup4, best];
  D42():
    deopt 157 [r60];
  D43():
    deopt 160 [c10, fromGroup5];
  D46():
    deopt 169 [best4];
  D48():
    deopt 178 [1.0, n4];
  L88():
    ihi3 = force? ihi2;
    checkMissing(ihi3);
    c7 = `is.object`(ihi3);
    if c7 then L89() else L90(i33, dist1, ihi3);
  L115():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L24(dx10);
  L116():
    best1 = force? best;
    __4 = ldf `[` in base;
    r59 = dyn __4(fromGroup4, best1);
    goto L24(r59);
  L117():
    goto L23(r60);
  L121():
    fromGroup6 = force? fromGroup5;
    checkMissing(fromGroup6);
    c16 = `is.object`(fromGroup6);
    if c16 then L122() else L123(c10, fromGroup6);
  L129():
    best5 = force? best4;
    checkMissing(best5);
    fromGroup9 = ld fromGroup;
    check L130() else D47();
  L132():
    n5 = force? n4;
    checkMissing(n5);
    r69 = `:`(1.0, n5);
    c25 = `is.object`(r69);
    if c25 then L133() else L134(r69);
  D47():
    deopt 170 [best5, fromGroup9];
  L16(i39, dist5, dx9):
    r45 = `+`(dist5, dx9);
    st dist = r45;
    goto L11(i39);
  L27(c20, dx13):
    all = ldf all in base;
    r64 = dyn all(dx13);
    check L126() else D45();
  L30(dx15):
    popenv;
    return dx15;
  L89():
    dr8 = tryDispatchBuiltin.1("[", ihi3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L91() else L90(i33, dist1, dr8);
  L90(i37, dist3, ihi5):
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  L122():
    dr12 = tryDispatchBuiltin.1("[", fromGroup6);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L124() else L123(c10, dr12);
  L123(c18, fromGroup8):
    best2 = ld best;
    check L125() else D44();
  L130():
    fromGroup10 = force? fromGroup9;
    checkMissing(fromGroup10);
    r66 = `!`(fromGroup10);
    r67 = `&&`(best5, r66);
    st best = r67;
    goto L29();
  L133():
    dr14 = tryDispatchBuiltin.1("[", r69);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L135() else L134(dr14);
  L134(r71):
    best6 = ld best;
    check L136() else D49();
  D44():
    deopt 162 [c18, fromGroup8, best2];
  D45():
    deopt 166 [c20, r64];
  D49():
    deopt 181 [r71, best6];
  L17(i42, dist8, ihi8, r39):
    __3 = ldf `[` in base;
    r44 = dyn __3(ihi8, r39);
    goto L16(i42, dist8, r44);
  L91():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L16(i33, dist1, dx8);
  L92():
    cli = ld cli;
    check L94() else D30();
  L93():
    r38 = dyn base6(<sym cli>, <lang names(ihi)>);
    goto L17(i37, dist3, ihi5, r38);
  L124():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L27(c10, dx12);
  L125():
    best3 = force? best2;
    __5 = ldf `[` in base;
    r63 = dyn __5(fromGroup8, best3);
    goto L27(c18, r63);
  L126():
    goto L26(c20, r64);
  L135():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L30(dx14);
  L136():
    best7 = force? best6;
    __6 = ldf `[` in base;
    r72 = dyn __6(r71, best7);
    goto L30(r72);
  D30():
    deopt 110 [i37, dist3, ihi5, cli];
  L94():
    cli1 = force? cli;
    checkMissing(cli1);
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L18(i45, dist11, ihi11, r41):
    match = ldf match in base;
    r43 = dyn match(cli1, r41, NA_INT, NULL);
    check L99() else D33();
  L95():
    ihi12 = ld ihi;
    check L97() else D31();
  L96():
    r40 = dyn base7(<sym ihi>);
    goto L18(i37, dist3, ihi5, r40);
  D31():
    deopt 114 [i37, dist3, ihi5, ihi12];
  D33():
    deopt 121 [i45, dist11, ihi11, r43];
  L97():
    ihi13 = force? ihi12;
    checkMissing(ihi13);
    names = ldf names in base;
    r42 = dyn names(ihi13);
    check L98() else D32();
  L99():
    goto L17(i45, dist11, ihi11, r43);
  D32():
    deopt 117 [i37, dist3, ihi5, r42];
  L98():
    goto L18(i37, dist3, ihi5, r42);
  }
}