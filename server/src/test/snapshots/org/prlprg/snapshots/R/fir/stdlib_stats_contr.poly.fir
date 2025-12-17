fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3291151242;
    st `contr.poly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3291151242(n, scores, contrasts, sparse) {
  (reg n:*, reg scores:*, reg contrasts:*, reg sparse:*) -+> V { var n:*, var scores:*, reg scores_isMissing:L, reg scores_orDefault:*, reg n1:*, reg n2:V, reg r:V, reg p:p(V +), var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, reg r2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg n3:*, reg n4:V, reg is_numeric:cls, reg r5:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg n5:*, reg n6:V, reg length:cls, reg r8:V, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg n7:*, reg n8:V, reg r12:I, reg n9:*, reg n10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg levs:*, reg levs1:V, reg length1:cls, reg r16:V, reg n11:*, reg n12:V, reg r17:V, reg c10:L, reg stop:cls, reg gettextf:cls, reg n13:*, reg n14:V, reg r18:V, reg p1:p(V +), reg r20:V, reg p2:p(V +), reg r22:V, reg n15:*, reg n16:V, reg r24:V, reg c11:L, reg stop1:cls, reg gettextf1:cls, reg n17:*, reg n18:V, reg r25:V, reg p3:p(V +), reg r27:V, reg p4:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg scores1:*, reg scores2:V, reg length2:cls, reg r33:V, reg n19:*, reg n20:V, reg r34:V, reg c12:L, reg stop2:cls, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg scores3:*, reg scores4:V, reg is_numeric1:cls, reg r39:V, reg r40:V, reg c13:L, reg c14:V, reg anyDuplicated:cls, reg scores5:*, reg scores6:V, reg p5:p(V +), reg r42:V, reg c16:L, reg c17:V, reg c19:L, reg stop3:cls, reg r43:V, reg make_poly:cls, reg n21:*, reg n22:V, reg p6:p(V +), reg scores7:*, reg scores8:V, reg p7:p(V +), reg r47:V, reg sparse1:*, reg sparse2:V, reg c20:L, reg _asSparse:cls, reg contr:*, reg contr1:V, reg p8:p(V +), reg r49:V, reg contrasts1:*, reg contrasts2:V, reg c21:L, reg colnames:cls, reg contr2:*, reg contr3:V, reg p9:p(V +), reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg c22:cls, reg r55:V, reg c23:L, reg r57:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg r64:R, reg r65:V, reg n23:*, reg n24:V, reg r66:V, reg min:cls, reg r67:V, reg r68:V, reg __:cls, reg r69:V, reg l:*, reg c24:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r72:V, reg dx12:V, reg l5:*, reg dx13:V, reg r73:R, reg r74:V, reg n25:*, reg n26:V, reg min1:cls, reg r75:V, reg r76:V, reg ___:cls, reg r77:V, reg dn:*, reg dn1:V, reg l6:*, reg colnames__:cls, reg r78:V, reg contr4:*, reg contr5:V, reg c25:L, reg dr4:V, reg dc2:L, reg dx14:V, reg dx15:V, reg __1:cls, reg r79:V, reg l7:*, reg c26:L, reg r81:R, reg dr6:V, reg dc3:L, reg dx16:V, reg dx17:V, reg ___1:cls, reg r84:V, reg contr8:*, reg contr9:V |
    mkenv;
    st n = n;
    scores_isMissing = missing.0(scores);
    if scores_isMissing then L0() else L1(scores);
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      r = `:`(1.0, n2);
      return r;
    };
    goto L1(p);
  L1(scores_orDefault):
    st scores = scores_orDefault;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L2(TRUE) else L2(contrasts);
  L2(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    sparse_isMissing = missing.0(sparse);
    if sparse_isMissing then L3(FALSE) else L3(sparse);
  L3(sparse_orDefault):
    st sparse = sparse_orDefault;
    r2 = clos inner1154157119;
    st `make.poly` = r2;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L4(r4):
    c = `as.logical`(r4);
    if c then L36() else L5(c);
  L32():
    n3 = ld n;
    check L34() else D0();
  L33():
    r3 = dyn base(<sym n>);
    goto L4(r3);
  D0():
    deopt 5 [n3];
  L5(c2):
    c9 = `as.logical`(c2);
    if c9 then L42() else L7();
  L34():
    n4 = force? n3;
    checkMissing(n4);
    is_numeric = ldf `is.numeric` in base;
    r5 = dyn is_numeric(n4);
    check L35() else D1();
  L36():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  D1():
    deopt 8 [r5];
  L6(c5, r7):
    r9 = `==`(r7, 1);
    c6 = `as.logical`(r9);
    c7 = `&&`(c5, c6);
    goto L5(c7);
  L7():
    n9 = ld n;
    check L47() else D5();
  L9():
    n11 = ld n;
    check L52() else D8();
  L35():
    goto L4(r5);
  L37():
    n5 = ld n;
    check L39() else D2();
  L38():
    r6 = dyn base1(<sym n>);
    goto L6(c, r6);
  L42():
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  D2():
    deopt 11 [c, n5];
  D5():
    deopt 23 [n9];
  D8():
    deopt 33 [n11];
  L8(r11):
    st levs = r11;
    goto L9();
  L39():
    n6 = force? n5;
    checkMissing(n6);
    length = ldf length in base;
    r8 = dyn length(n6);
    check L40() else D3();
  L43():
    n7 = ld n;
    check L45() else D4();
  L44():
    r10 = dyn base2(<sym n>);
    goto L8(r10);
  L47():
    n10 = force? n9;
    checkMissing(n10);
    st levs = n10;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L52():
    n12 = force? n11;
    checkMissing(n12);
    r17 = `<`(n12, 2.0);
    c10 = `as.logical`(r17);
    if c10 then L53() else L11();
  D3():
    deopt 14 [c, r8];
  D4():
    deopt 19 [n7];
  L10(r15):
    st n = r15;
    goto L9();
  L11():
    goto L12();
  L12():
    n15 = ld n;
    check L57() else D11();
  L40():
    goto L6(c, r8);
  L45():
    n8 = force? n7;
    checkMissing(n8);
    r12 = seq_len(n8);
    goto L8(r12);
  L48():
    levs = ld levs;
    check L50() else D6();
  L49():
    r14 = dyn base3(<sym levs>);
    goto L10(r14);
  L53():
    stop = ldf stop;
    check L54() else D9();
  D6():
    deopt 28 [levs];
  D9():
    deopt 38 [];
  D11():
    deopt 45 [n15];
  L50():
    levs1 = force? levs;
    checkMissing(levs1);
    length1 = ldf length in base;
    r16 = dyn length1(levs1);
    check L51() else D7();
  L54():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        n13 = ld n;
        n14 = force? n13;
        checkMissing(n14);
        r18 = `-`(n14, 1.0);
        return r18;
      };
      r20 = dyn gettextf("contrasts not defined for %d degrees of freedom", p1);
      return r20;
    };
    r22 = dyn stop[, domain](p2, NA_LGL);
    check L55() else D10();
  L57():
    n16 = force? n15;
    checkMissing(n16);
    r24 = `>`(n16, 95.0);
    c11 = `as.logical`(r24);
    if c11 then L58() else L13();
  D7():
    deopt 31 [r16];
  D10():
    deopt 42 [r22];
  L13():
    goto L14();
  L14():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L51():
    goto L10(r16);
  L55():
    goto L12();
  L58():
    stop1 = ldf stop;
    check L59() else D12();
  D12():
    deopt 50 [];
  L15(r32):
    n19 = ld n;
    check L66() else D16();
  L59():
    p4 = prom<V +>{
      gettextf1 = ldf gettextf;
      p3 = prom<V +>{
        n17 = ld n;
        n18 = force? n17;
        checkMissing(n18);
        r25 = `-`(n18, 1.0);
        return r25;
      };
      r27 = dyn gettextf1("orthogonal polynomials cannot be represented accurately enough for %d degrees of freedom", p3);
      return r27;
    };
    r29 = dyn stop1[, domain](p4, NA_LGL);
    check L60() else D13();
  L62():
    scores1 = ld scores;
    check L64() else D14();
  L63():
    r31 = dyn base4(<sym scores>);
    goto L15(r31);
  D13():
    deopt 54 [r29];
  D14():
    deopt 59 [scores1];
  D16():
    deopt 62 [r32, n19];
  L60():
    goto L14();
  L64():
    scores2 = force? scores1;
    checkMissing(scores2);
    length2 = ldf length in base;
    r33 = dyn length2(scores2);
    check L65() else D15();
  L66():
    n20 = force? n19;
    checkMissing(n20);
    r34 = `!=`(r32, n20);
    c12 = `as.logical`(r34);
    if c12 then L67() else L16();
  D15():
    deopt 62 [r33];
  L16():
    goto L17();
  L17():
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L65():
    goto L15(r33);
  L67():
    stop2 = ldf stop;
    check L68() else D17();
  D17():
    deopt 66 [];
  L18(r38):
    r40 = `!`(r38);
    c13 = `as.logical`(r40);
    if c13 then L19(c13) else L75();
  L68():
    r35 = dyn stop2("'scores' argument is of the wrong length");
    check L69() else D18();
  L71():
    scores3 = ld scores;
    check L73() else D19();
  L72():
    r37 = dyn base5(<sym scores>);
    goto L18(r37);
  D18():
    deopt 68 [r35];
  D19():
    deopt 73 [scores3];
  L19(c14):
    c19 = `as.logical`(c14);
    if c19 then L79() else L20();
  L69():
    goto L17();
  L73():
    scores4 = force? scores3;
    checkMissing(scores4);
    is_numeric1 = ldf `is.numeric` in base;
    r39 = dyn is_numeric1(scores4);
    check L74() else D20();
  L75():
    anyDuplicated = ldf anyDuplicated;
    check L76() else D21();
  D20():
    deopt 76 [r39];
  D21():
    deopt 79 [c13];
  L20():
    goto L21();
  L21():
    make_poly = ldf `make.poly`;
    check L83() else D25();
  L74():
    goto L18(r39);
  L76():
    p5 = prom<V +>{
      scores5 = ld scores;
      scores6 = force? scores5;
      checkMissing(scores6);
      return scores6;
    };
    r42 = dyn anyDuplicated(p5);
    check L77() else D22();
  L79():
    stop3 = ldf stop;
    check L80() else D23();
  D22():
    deopt 81 [c13, r42];
  D23():
    deopt 84 [];
  D25():
    deopt 90 [];
  L77():
    c16 = `as.logical`(r42);
    c17 = `||`(c13, c16);
    goto L19(c17);
  L80():
    r43 = dyn stop3("'scores' must all be different numbers");
    check L81() else D24();
  L83():
    p6 = prom<V +>{
      n21 = ld n;
      n22 = force? n21;
      checkMissing(n22);
      return n22;
    };
    p7 = prom<V +>{
      scores7 = ld scores;
      scores8 = force? scores7;
      checkMissing(scores8);
      return scores8;
    };
    r47 = dyn make_poly(p6, p7);
    check L84() else D26();
  D24():
    deopt 86 [r43];
  D26():
    deopt 93 [r47];
  L81():
    goto L21();
  L84():
    st contr = r47;
    sparse1 = ld sparse;
    check L85() else D27();
  D27():
    deopt 95 [sparse1];
  L85():
    sparse2 = force? sparse1;
    checkMissing(sparse2);
    c20 = `as.logical`(sparse2);
    if c20 then L86() else L22();
  L22():
    goto L23();
  L23():
    contrasts1 = ld contrasts;
    check L90() else D30();
  L86():
    _asSparse = ldf `.asSparse`;
    check L87() else D28();
  D28():
    deopt 98 [];
  D30():
    deopt 104 [contrasts1];
  L87():
    p8 = prom<V +>{
      contr = ld contr;
      contr1 = force? contr;
      checkMissing(contr1);
      return contr1;
    };
    r49 = dyn _asSparse(p8);
    check L88() else D29();
  L90():
    contrasts2 = force? contrasts1;
    checkMissing(contrasts2);
    c21 = `as.logical`(contrasts2);
    if c21 then L91() else L24();
  D29():
    deopt 100 [r49];
  L24():
    l7 = ld contr;
    c26 = `is.object`(l7);
    if c26 then L119() else L120(1.0);
  L88():
    st contr = r49;
    goto L23();
  L91():
    colnames = ldf colnames;
    check L92() else D31();
  D31():
    deopt 107 [];
  L31(dx17):
    st contr = dx17;
    contr8 = ld contr;
    check L122() else D42();
  L92():
    p9 = prom<V +>{
      contr2 = ld contr;
      contr3 = force? contr2;
      checkMissing(contr3);
      return contr3;
    };
    r52 = dyn colnames(p9);
    check L93() else D32();
  L119():
    dr6 = tryDispatchBuiltin.0("[<-", l7, 1.0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L121() else L120(1.0);
  L120(r81):
    ___1 = ldf `[<-` in base;
    r84 = dyn ___1(l7, <missing>, 1.0, 1.0);
    goto L31(r84);
  D32():
    deopt 109 [r52];
  D42():
    deopt 166 [contr8];
  L93():
    st dn = r52;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  L121():
    dx16 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx16);
  L122():
    contr9 = force? contr8;
    checkMissing(contr9);
    popenv;
    return contr9;
  L25(r54):
    c23 = `is.object`(r54);
    if c23 then L97() else L98(r54);
  L94():
    c22 = ldf c in base;
    r55 = dyn c22(".L", ".Q", ".C");
    check L96() else D33();
  L95():
    r53 = dyn base6(".L", ".Q", ".C");
    goto L25(r53);
  D33():
    deopt 117 [r55];
  L26(dx1):
    l = ld dn;
    c24 = `is.object`(l);
    if c24 then L104() else L105(dx1, l);
  L96():
    goto L25(r55);
  L97():
    dr = tryDispatchBuiltin.1("[", r54);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L99() else L98(dr);
  L98(r57):
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L27(r63, r64, r65):
    r68 = `:`(r64, r65);
    __ = ldf `[` in base;
    r69 = dyn __(r63, r68);
    goto L26(r69);
  L28(dx7):
    st dn = dx7;
    dn = ld dn;
    check L111() else D38();
  L99():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L100():
    n23 = ld n;
    check L102() else D34();
  L101():
    r62 = dyn base7(3.0, <lang `-`(n, 1.0)>);
    goto L27(r57, 1.0, r62);
  L104():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L106() else L105(dx1, dr2);
  L105(dx3, l2):
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  D34():
    deopt 122 [r57, 1.0, n23];
  D38():
    deopt 142 [dn];
  L29(dx12, l5, dx13, r73, r74):
    r76 = `:`(r73, r74);
    ___ = ldf `[<-` in base;
    r77 = dyn ___(l5, dx13, r76);
    goto L28(r77);
  L102():
    n24 = force? n23;
    checkMissing(n24);
    r66 = `-`(n24, 1.0);
    min = ldf min in base;
    r67 = dyn min(3.0, r66);
    check L103() else D35();
  L106():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx5);
  L107():
    n25 = ld n;
    check L109() else D36();
  L108():
    r72 = dyn base8(4.0, <sym n>);
    goto L29(dx3, l2, dx1, 2.0, r72);
  L111():
    dn1 = force? dn;
    checkMissing(dn1);
    l6 = ld contr;
    colnames__ = ldf `colnames<-`;
    check L112() else D39();
  D35():
    deopt 127 [r57, 1.0, r67];
  D36():
    deopt 135 [dx3, l2, dx1, 2.0, n25];
  D39():
    deopt 145 [dn1, l6, dn1];
  L103():
    goto L27(r57, 1.0, r67);
  L109():
    n26 = force? n25;
    checkMissing(n26);
    min1 = ldf min in base;
    r75 = dyn min1(4.0, n26);
    check L110() else D37();
  L112():
    r78 = dyn colnames__(l6, NULL, dn1);
    check L113() else D40();
  D37():
    deopt 138 [dx3, l2, dx1, 2.0, r75];
  D40():
    deopt 147 [dn1, r78];
  L110():
    goto L29(dx3, l2, dx1, 2.0, r75);
  L113():
    st contr = r78;
    contr4 = ld contr;
    check L114() else D41();
  D41():
    deopt 149 [contr4];
  L114():
    contr5 = force? contr4;
    checkMissing(contr5);
    c25 = `is.object`(contr5);
    if c25 then L115() else L116();
  L30(dx15):
    popenv;
    return dx15;
  L115():
    dr4 = tryDispatchBuiltin.1("[", contr5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L117() else L116();
  L116():
    __1 = ldf `[` in base;
    r79 = dyn __1(contr5, <missing>, -1.0, FALSE);
    goto L30(r79);
  L117():
    dx14 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx14);
  }
}
fun inner1154157119(n, scores) {
  (reg n:*, reg scores:*) -+> V { var n:*, var scores:*, reg scores1:*, reg scores2:V, reg mean:cls, reg scores3:*, reg scores4:V, reg p:p(V +), reg r1:V, reg r2:V, reg outer:cls, reg y:*, reg y1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg n1:*, reg n2:V, reg r6:I, reg r7:V, reg p2:p(V +), reg __:*, reg __1:V, reg p3:p(V +), reg r10:V, reg qr:cls, reg X:*, reg X1:V, reg p4:p(V +), reg r12:V, reg QR:*, reg QR1:V, reg c:L, reg QR3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg z:*, reg z1:V, reg row:cls, reg z2:*, reg z3:V, reg p5:p(V +), reg r15:V, reg col:cls, reg z4:*, reg z5:V, reg p6:p(V +), reg r17:V, reg r18:V, reg r19:V, reg qr_qy:cls, reg QR4:*, reg QR5:V, reg p7:p(V +), reg z6:*, reg z7:V, reg p8:p(V +), reg r22:V, reg sweep:cls, reg raw:*, reg raw1:V, reg p9:p(V +), reg apply:cls, reg raw2:*, reg raw3:V, reg p10:p(V +), reg r25:cls, reg p11:p(V +), reg r27:V, reg p12:p(V +), reg __2:*, reg __3:V, reg p13:p(V +), reg r30:V, reg paste0:cls, reg n3:*, reg n4:V, reg r31:V, reg r32:V, reg p14:p(V +), reg r34:V, reg l:*, reg colnames__:cls, reg r35:V, reg Z:*, reg Z1:V |
    mkenv;
    st n = n;
    st scores = scores;
    scores1 = ld scores;
    check L0() else D0();
  D0():
    deopt 0 [scores1];
  L0():
    scores2 = force? scores1;
    checkMissing(scores2);
    mean = ldf mean;
    check L1() else D1();
  D1():
    deopt 2 [scores2];
  L1():
    p = prom<V +>{
      scores3 = ld scores;
      scores4 = force? scores3;
      checkMissing(scores4);
      return scores4;
    };
    r1 = dyn mean(p);
    check L2() else D2();
  D2():
    deopt 4 [scores2, r1];
  L2():
    r2 = `-`(scores2, r1);
    st y = r2;
    outer = ldf outer;
    check L3() else D3();
  D3():
    deopt 8 [];
  L3():
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p2 = prom<V +>{
      sym = ldf seq_len;
      base = ldf seq_len in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      r7 = `-`(r5, 1.0);
      return r7;
    L1():
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      r6 = seq_len(n2);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym n>);
      goto L0(r4);
    };
    p3 = prom<V +>{
      __ = ld `^`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r10 = dyn outer(p1, p2, p3);
    check L4() else D4();
  D4():
    deopt 12 [r10];
  L4():
    st X = r10;
    qr = ldf qr;
    check L5() else D5();
  D5():
    deopt 15 [];
  L5():
    p4 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r12 = dyn qr(p4);
    check L6() else D6();
  D6():
    deopt 17 [r12];
  L6():
    st QR = r12;
    QR = ld QR;
    check L7() else D7();
  D7():
    deopt 19 [QR];
  L7():
    QR1 = force? QR;
    checkMissing(QR1);
    c = `is.object`(QR1);
    if c then L9() else L10(QR1);
  L8(dx1):
    st z = dx1;
    z = ld z;
    check L12() else D8();
  L9():
    dr = tryDispatchBuiltin.1("$", QR1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(QR3):
    r13 = `$`(QR3, <sym qr>);
    goto L8(r13);
  D8():
    deopt 23 [z];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    z1 = force? z;
    checkMissing(z1);
    row = ldf row;
    check L13() else D9();
  D9():
    deopt 25 [z1];
  L13():
    p5 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r15 = dyn row(p5);
    check L14() else D10();
  D10():
    deopt 27 [z1, r15];
  L14():
    col = ldf col;
    check L15() else D11();
  D11():
    deopt 28 [z1, r15];
  L15():
    p6 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r17 = dyn col(p6);
    check L16() else D12();
  D12():
    deopt 30 [z1, r15, r17];
  L16():
    r18 = `==`(r15, r17);
    r19 = `*`(z1, r18);
    st z = r19;
    qr_qy = ldf `qr.qy`;
    check L17() else D13();
  D13():
    deopt 35 [];
  L17():
    p7 = prom<V +>{
      QR4 = ld QR;
      QR5 = force? QR4;
      checkMissing(QR5);
      return QR5;
    };
    p8 = prom<V +>{
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      return z7;
    };
    r22 = dyn qr_qy(p7, p8);
    check L18() else D14();
  D14():
    deopt 38 [r22];
  L18():
    st raw = r22;
    sweep = ldf sweep;
    check L19() else D15();
  D15():
    deopt 41 [];
  L19():
    p9 = prom<V +>{
      raw = ld raw;
      raw1 = force? raw;
      checkMissing(raw1);
      return raw1;
    };
    p12 = prom<V +>{
      apply = ldf apply;
      p10 = prom<V +>{
        raw2 = ld raw;
        raw3 = force? raw2;
        checkMissing(raw3);
        return raw3;
      };
      p11 = prom<V +>{
        r25 = clos inner2501545716;
        return r25;
      };
      r27 = dyn apply(p10, 2, p11);
      return r27;
    };
    p13 = prom<V +>{
      __2 = ld `/`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r30 = dyn sweep[, , , , `check.margin`](p9, 2, p12, p13, FALSE);
    check L20() else D16();
  D16():
    deopt 48 [r30];
  L20():
    st Z = r30;
    paste0 = ldf paste0;
    check L21() else D17();
  D17():
    deopt 51 [];
  L21():
    p14 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r31 = `:`(1, n4);
      r32 = `-`(r31, 1);
      return r32;
    };
    r34 = dyn paste0("^", p14);
    check L22() else D18();
  D18():
    deopt 54 [r34];
  L22():
    l = ld Z;
    colnames__ = ldf `colnames<-`;
    check L23() else D19();
  D19():
    deopt 56 [r34, l, r34];
  L23():
    r35 = dyn colnames__(l, NULL, r34);
    check L24() else D20();
  D20():
    deopt 58 [r34, r35];
  L24():
    st Z = r35;
    Z = ld Z;
    check L25() else D21();
  D21():
    deopt 60 [Z];
  L25():
    Z1 = force? Z;
    checkMissing(Z1);
    popenv;
    return Z1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg r4:V, reg sum:cls, reg r5:V, reg r6:V |
    mkenv;
    st x = x;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang sum(`^`(x, 2.0))>);
    goto L0(r);
  L1(r3):
    r6 = sqrt(r3);
    goto L0(r6);
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r2 = dyn base1(<lang `^`(x, 2.0)>);
    goto L1(r2);
  D0():
    deopt 3 [x1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    r4 = `^`(x2, 2.0);
    sum = ldf sum in base;
    r5 = dyn sum(r4);
    check L7() else D1();
  D1():
    deopt 8 [r5];
  L7():
    goto L1(r5);
  }
}