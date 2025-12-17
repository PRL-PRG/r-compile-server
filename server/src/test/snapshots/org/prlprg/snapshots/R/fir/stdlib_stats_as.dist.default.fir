fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3608797442;
    st `as.dist.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3608797442(m, diag, upper) {
  (reg m:*, reg diag:*, reg upper:*) -+> V { var m:*, var diag:*, reg diag_isMissing:L, reg diag_orDefault:*, var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg m1:*, reg m2:V, reg inherits:cls, reg r2:V, reg c:L, reg m3:*, reg m4:V, reg as_matrix:cls, reg m6:*, reg m7:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg m8:*, reg m9:V, reg is_numeric:cls, reg r7:V, reg r8:V, reg c1:L, reg l:*, reg storage_mode__:cls, reg r9:V, reg nrow:cls, reg m10:*, reg m11:V, reg p1:p(V +), reg r12:V, reg ncol:cls, reg m12:*, reg m13:V, reg p2:p(V +), reg r14:V, reg p3:*, reg p4:V, reg r15:V, reg c2:L, reg warning:cls, reg r16:V, reg m14:*, reg m15:V, reg c3:L, reg m17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg row:cls, reg m18:*, reg m19:V, reg p5:p(V +), reg r19:V, reg col:cls, reg m20:*, reg m21:V, reg p6:p(V +), reg r21:V, reg r22:V, reg __:cls, reg r23:V, reg l1:*, reg attributes__:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg rownames:cls, reg m22:*, reg m23:V, reg p7:p(V +), reg r28:V, reg c4:V, reg r29:V, reg c5:L, reg rownames1:cls, reg m24:*, reg m25:V, reg p8:p(V +), reg r31:V, reg l2:*, reg attr__:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg colnames:cls, reg m26:*, reg m27:V, reg p9:p(V +), reg r37:V, reg c6:V, reg r38:V, reg c7:L, reg colnames1:cls, reg m28:*, reg m29:V, reg p10:p(V +), reg r40:V, reg l3:*, reg attr__1:cls, reg r41:V, reg p11:*, reg p12:V, reg l4:*, reg attr__2:cls, reg r42:V, reg match_call:cls, reg r43:V, reg l5:*, reg attr__3:cls, reg r44:V, reg l6:*, reg class__:cls, reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg ans:*, reg ans1:V, reg attr:cls, reg r50:V, reg c8:V, reg c9:L, reg c10:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg c14:L, reg r52:V, reg missing:cls, reg r53:V, reg r54:V, reg c15:L, reg c16:V, reg c18:L, reg diag1:*, reg diag2:V, reg l7:*, reg attr__4:cls, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg ans2:*, reg ans3:V, reg attr1:cls, reg r60:V, reg c19:V, reg c20:L, reg c21:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg c25:L, reg r62:V, reg missing1:cls, reg r63:V, reg r64:V, reg c26:L, reg c27:V, reg c29:L, reg upper1:*, reg upper2:V, reg l8:*, reg attr__5:cls, reg r65:V, reg ans4:*, reg ans5:V |
    mkenv;
    st m = m;
    diag_isMissing = missing.0(diag);
    if diag_isMissing then L0(FALSE) else L0(diag);
  L0(diag_orDefault):
    st diag = diag_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L1(FALSE) else L1(upper);
  L1(upper_orDefault):
    st upper = upper_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L2(r1):
    c = `as.logical`(r1);
    if c then L32() else L3();
  L28():
    m1 = ld m;
    check L30() else D0();
  L29():
    r = dyn base(<sym m>, "dist");
    goto L2(r);
  D0():
    deopt 2 [m1];
  L3():
    as_matrix = ldf `as.matrix`;
    check L35() else D3();
  L4():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L30():
    m2 = force? m1;
    checkMissing(m2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(m2, "dist", FALSE);
    check L31() else D1();
  L32():
    m3 = ld m;
    check L33() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [m3];
  D3():
    deopt 12 [];
  L16(r47):
    c9 = `as.logical`(r47);
    if c9 then L18(c9) else L99();
  L31():
    goto L2(r2);
  L33():
    m4 = force? m3;
    checkMissing(m4);
    st ans = m4;
    goto L4();
  L35():
    p = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r4 = dyn as_matrix(p);
    check L36() else D4();
  L93():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  L94():
    r46 = dyn base4(<lang attr(ans, "Diag")>);
    goto L16(r46);
  D4():
    deopt 14 [r4];
  L17(r49):
    c8 = `==`(r49, NULL);
    goto L16(c8);
  L18(c10):
    c18 = `as.logical`(c10);
    if c18 then L103() else L20();
  L36():
    st m = r4;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L95():
    ans = ld ans;
    check L97() else D44();
  L96():
    r48 = dyn base5(<sym ans>, "Diag");
    goto L17(r48);
  L99():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L100() else L101();
  D44():
    deopt 131 [ans];
  L5(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L41() else L6();
  L19(c14, r52):
    r54 = `!`(r52);
    c15 = `as.logical`(r54);
    c16 = `||`(c14, c15);
    goto L18(c16);
  L20():
    goto L21();
  L21():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  L37():
    m8 = ld m;
    check L39() else D5();
  L38():
    r5 = dyn base1(<sym m>);
    goto L5(r5);
  L97():
    ans1 = force? ans;
    checkMissing(ans1);
    attr = ldf attr in base;
    r50 = dyn attr(ans1, "Diag");
    check L98() else D45();
  L100():
    missing = ldf missing in base;
    r53 = dyn missing(<sym diag>);
    goto L19(c9, r53);
  L101():
    r51 = dyn base6(<sym diag>);
    goto L19(c9, r51);
  L103():
    diag1 = ld diag;
    check L104() else D46();
  D5():
    deopt 18 [m8];
  D45():
    deopt 135 [r50];
  D46():
    deopt 142 [diag1];
  L6():
    goto L7();
  L7():
    nrow = ldf nrow;
    check L45() else D9();
  L22(r57):
    c20 = `as.logical`(r57);
    if c20 then L24(c20) else L114();
  L39():
    m9 = force? m8;
    checkMissing(m9);
    is_numeric = ldf `is.numeric` in base;
    r7 = dyn is_numeric(m9);
    check L40() else D6();
  L41():
    l = ld m;
    storage_mode__ = ldf `storage.mode<-`;
    check L42() else D7();
  L98():
    goto L17(r50);
  L104():
    diag2 = force? diag1;
    checkMissing(diag2);
    l7 = ld ans;
    attr__4 = ldf `attr<-`;
    check L105() else D47();
  L108():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L110() else L111();
  L109():
    r56 = dyn base7(<lang attr(ans, "Upper")>);
    goto L22(r56);
  D6():
    deopt 21 [r7];
  D7():
    deopt 26 ["numeric", l, "numeric"];
  D9():
    deopt 33 [];
  D47():
    deopt 145 [diag2, l7, diag2];
  L23(r59):
    c19 = `==`(r59, NULL);
    goto L22(c19);
  L24(c21):
    c29 = `as.logical`(c21);
    if c29 then L118() else L26();
  L40():
    goto L5(r7);
  L42():
    r9 = dyn storage_mode__(l, NULL, "numeric");
    check L43() else D8();
  L45():
    p1 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      return m11;
    };
    r12 = dyn nrow(p1);
    check L46() else D10();
  L105():
    r55 = dyn attr__4(l7, NULL, "Diag", diag2);
    check L106() else D48();
  L110():
    ans2 = ld ans;
    check L112() else D49();
  L111():
    r58 = dyn base8(<sym ans>, "Upper");
    goto L23(r58);
  L114():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  D8():
    deopt 28 ["numeric", r9];
  D10():
    deopt 35 [r12];
  D48():
    deopt 148 [diag2, r55];
  D49():
    deopt 155 [ans2];
  L25(c25, r62):
    r64 = `!`(r62);
    c26 = `as.logical`(r64);
    c27 = `||`(c25, c26);
    goto L24(c27);
  L26():
    goto L27();
  L27():
    ans4 = ld ans;
    check L123() else D54();
  L43():
    st m = r9;
    goto L7();
  L46():
    st p = r12;
    ncol = ldf ncol;
    check L47() else D11();
  L106():
    st ans = r55;
    goto L21();
  L112():
    ans3 = force? ans2;
    checkMissing(ans3);
    attr1 = ldf attr in base;
    r60 = dyn attr1(ans3, "Upper");
    check L113() else D50();
  L115():
    missing1 = ldf missing in base;
    r63 = dyn missing1(<sym upper>);
    goto L25(c20, r63);
  L116():
    r61 = dyn base9(<sym upper>);
    goto L25(c20, r61);
  L118():
    upper1 = ld upper;
    check L119() else D51();
  D11():
    deopt 38 [];
  D50():
    deopt 159 [r60];
  D51():
    deopt 166 [upper1];
  D54():
    deopt 176 [ans4];
  L47():
    p2 = prom<V +>{
      m12 = ld m;
      m13 = force? m12;
      checkMissing(m13);
      return m13;
    };
    r14 = dyn ncol(p2);
    check L48() else D12();
  L113():
    goto L23(r60);
  L119():
    upper2 = force? upper1;
    checkMissing(upper2);
    l8 = ld ans;
    attr__5 = ldf `attr<-`;
    check L120() else D52();
  L123():
    ans5 = force? ans4;
    checkMissing(ans5);
    popenv;
    return ans5;
  D12():
    deopt 40 [r14];
  D52():
    deopt 169 [upper2, l8, upper2];
  L48():
    p3 = ld p;
    check L49() else D13();
  L120():
    r65 = dyn attr__5(l8, NULL, "Upper", upper2);
    check L121() else D53();
  D13():
    deopt 40 [r14, p3];
  D53():
    deopt 172 [upper2, r65];
  L49():
    p4 = force? p3;
    checkMissing(p4);
    r15 = `!=`(r14, p4);
    c2 = `as.logical`(r15);
    if c2 then L50() else L8();
  L121():
    st ans = r65;
    goto L27();
  L8():
    goto L9();
  L9():
    m14 = ld m;
    check L54() else D16();
  L50():
    warning = ldf warning;
    check L51() else D14();
  D14():
    deopt 44 [];
  D16():
    deopt 49 [m14];
  L51():
    r16 = dyn warning("non-square matrix");
    check L52() else D15();
  L54():
    m15 = force? m14;
    checkMissing(m15);
    c3 = `is.object`(m15);
    if c3 then L55() else L56(m15);
  D15():
    deopt 46 [r16];
  L10(dx1):
    st ans = dx1;
    l1 = ld ans;
    attributes__ = ldf `attributes<-`;
    check L62() else D21();
  L52():
    goto L9();
  L55():
    dr = tryDispatchBuiltin.1("[", m15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L57() else L56(dr);
  L56(m17):
    row = ldf row;
    check L58() else D17();
  D17():
    deopt 52 [m17];
  D21():
    deopt 64 [NULL, l1, NULL];
  L57():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L58():
    p5 = prom<V +>{
      m18 = ld m;
      m19 = force? m18;
      checkMissing(m19);
      return m19;
    };
    r19 = dyn row(p5);
    check L59() else D18();
  L62():
    r24 = dyn attributes__(l1, NULL, NULL);
    check L63() else D22();
  D18():
    deopt 54 [m17, r19];
  D22():
    deopt 66 [NULL, r24];
  L59():
    col = ldf col;
    check L60() else D19();
  L63():
    st ans = r24;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  D19():
    deopt 55 [m17, r19];
  L11(r26):
    r29 = `!`(r26);
    c5 = `as.logical`(r29);
    if c5 then L68() else L12();
  L60():
    p6 = prom<V +>{
      m20 = ld m;
      m21 = force? m20;
      checkMissing(m21);
      return m21;
    };
    r21 = dyn col(p6);
    check L61() else D20();
  L64():
    rownames = ldf rownames;
    check L66() else D23();
  L65():
    r25 = dyn base2(<lang rownames(m)>);
    goto L11(r25);
  D20():
    deopt 57 [m17, r19, r21];
  D23():
    deopt 70 [];
  L12():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L13():
    p11 = ld p;
    check L84() else D35();
  L61():
    r22 = `>`(r19, r21);
    __ = ldf `[` in base;
    r23 = dyn __(m17, r22);
    goto L10(r23);
  L66():
    p7 = prom<V +>{
      m22 = ld m;
      m23 = force? m22;
      checkMissing(m23);
      return m23;
    };
    r28 = dyn rownames(p7);
    check L67() else D24();
  L68():
    rownames1 = ldf rownames;
    check L69() else D25();
  D24():
    deopt 72 [r28];
  D25():
    deopt 76 [];
  D35():
    deopt 104 [p11];
  L14(r35):
    r38 = `!`(r35);
    c7 = `as.logical`(r38);
    if c7 then L78() else L15();
  L67():
    c4 = `==`(r28, NULL);
    goto L11(c4);
  L69():
    p8 = prom<V +>{
      m24 = ld m;
      m25 = force? m24;
      checkMissing(m25);
      return m25;
    };
    r31 = dyn rownames1(p8);
    check L70() else D26();
  L74():
    colnames = ldf colnames;
    check L76() else D29();
  L75():
    r34 = dyn base3(<lang colnames(m)>);
    goto L14(r34);
  L84():
    p12 = force? p11;
    checkMissing(p12);
    l4 = ld ans;
    attr__2 = ldf `attr<-`;
    check L85() else D36();
  D26():
    deopt 78 [r31];
  D29():
    deopt 87 [];
  D36():
    deopt 107 [p12, l4, p12];
  L15():
    goto L13();
  L70():
    l2 = ld ans;
    attr__ = ldf `attr<-`;
    check L71() else D27();
  L76():
    p9 = prom<V +>{
      m26 = ld m;
      m27 = force? m26;
      checkMissing(m27);
      return m27;
    };
    r37 = dyn colnames(p9);
    check L77() else D30();
  L78():
    colnames1 = ldf colnames;
    check L79() else D31();
  L85():
    r42 = dyn attr__2(l4, NULL, "Size", p12);
    check L86() else D37();
  D27():
    deopt 80 [r31, l2, r31];
  D30():
    deopt 89 [r37];
  D31():
    deopt 93 [];
  D37():
    deopt 110 [p12, r42];
  L71():
    r32 = dyn attr__(l2, NULL, "Labels", r31);
    check L72() else D28();
  L77():
    c6 = `==`(r37, NULL);
    goto L14(c6);
  L79():
    p10 = prom<V +>{
      m28 = ld m;
      m29 = force? m28;
      checkMissing(m29);
      return m29;
    };
    r40 = dyn colnames1(p10);
    check L80() else D32();
  L86():
    st ans = r42;
    match_call = ldf `match.call`;
    check L87() else D38();
  D28():
    deopt 83 [r31, r32];
  D32():
    deopt 95 [r40];
  D38():
    deopt 113 [];
  L72():
    st ans = r32;
    goto L13();
  L80():
    l3 = ld ans;
    attr__1 = ldf `attr<-`;
    check L81() else D33();
  L87():
    r43 = dyn match_call();
    check L88() else D39();
  D33():
    deopt 97 [r40, l3, r40];
  D39():
    deopt 114 [r43];
  L81():
    r41 = dyn attr__1(l3, NULL, "Labels", r40);
    check L82() else D34();
  L88():
    l5 = ld ans;
    attr__3 = ldf `attr<-`;
    check L89() else D40();
  D34():
    deopt 100 [r40, r41];
  D40():
    deopt 116 [r43, l5, r43];
  L82():
    st ans = r41;
    goto L13();
  L89():
    r44 = dyn attr__3(l5, NULL, "call", r43);
    check L90() else D41();
  D41():
    deopt 119 [r43, r44];
  L90():
    st ans = r44;
    l6 = ld ans;
    class__ = ldf `class<-`;
    check L91() else D42();
  D42():
    deopt 124 ["dist", l6, "dist"];
  L91():
    r45 = dyn class__(l6, NULL, "dist");
    check L92() else D43();
  D43():
    deopt 126 ["dist", r45];
  L92():
    st ans = r45;
    goto L4();
  }
}