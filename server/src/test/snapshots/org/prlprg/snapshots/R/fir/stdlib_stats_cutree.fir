fun main() {
  () -+> V { reg r:cls, reg hclust:cls, reg dist:cls, reg USArrests:*, reg USArrests1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg cutree:cls, reg hc:*, reg hc1:V, reg p2:p(V +), reg p3:p(V +), reg r7:V, reg cutree1:cls, reg hc2:*, reg hc3:V, reg p4:p(V +), reg r9:V, reg cutree2:cls, reg hc4:*, reg hc5:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg p6:p(V +), reg r15:V, reg table:cls, reg g24:*, reg g25:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg p7:p(V +), reg g28:*, reg g29:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r18:V, reg p8:p(V +), reg r20:V |
    mkenv;
    r = clos inner3141108219;
    st cutree = r;
    hclust = ldf hclust;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      dist = ldf dist;
      p = prom<V +>{
        USArrests = ld USArrests;
        USArrests1 = force? USArrests;
        checkMissing(USArrests1);
        return USArrests1;
      };
      r2 = dyn dist(p);
      return r2;
    };
    r4 = dyn hclust(p1);
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    st hc = r4;
    cutree = ldf cutree;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p2 = prom<V +>{
      hc = ld hc;
      hc1 = force? hc;
      checkMissing(hc1);
      return hc1;
    };
    p3 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r7 = dyn cutree[, k](p2, p3);
    check L3() else D3();
  D3():
    deopt 13 [r7];
  L3():
    cutree1 = ldf cutree;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p4 = prom<V +>{
      hc2 = ld hc;
      hc3 = force? hc2;
      checkMissing(hc3);
      return hc3;
    };
    r9 = dyn cutree1[, h](p4, 250.0);
    check L5() else D5();
  D5():
    deopt 19 [r9];
  L5():
    cutree2 = ldf cutree;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    p5 = prom<V +>{
      hc4 = ld hc;
      hc5 = force? hc4;
      checkMissing(hc5);
      return hc5;
    };
    p6 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c = ldf c in base;
      r13 = dyn c(2.0, 4.0);
      goto L0(r13);
    L2():
      r11 = dyn base(2.0, 4.0);
      goto L0(r11);
    };
    r15 = dyn cutree2[, k](p5, p6);
    check L7() else D7();
  D7():
    deopt 25 [r15];
  L7():
    st g24 = r15;
    table = ldf table;
    check L8() else D8();
  D8():
    deopt 28 [];
  L8():
    p7 = prom<V +>{
      g24 = ld g24;
      g25 = force? g24;
      checkMissing(g25);
      c1 = `is.object`(g25);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", g25);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r16 = dyn __(g25, <missing>, "2");
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      g28 = ld g24;
      g29 = force? g28;
      checkMissing(g29);
      c2 = `is.object`(g29);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", g29);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r18 = dyn __1(g29, <missing>, "4");
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r20 = dyn table[grp2, grp4](p7, p8);
    check L9() else D9();
  D9():
    deopt 33 [r20];
  L9():
    popenv;
    return r20;
  }
}
fun inner3141108219(tree, k, h) {
  (reg tree:*, reg k:*, reg h:*) -+> V { var tree:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var h:*, reg h_isMissing:L, reg h_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nrow:cls, reg tree1:*, reg tree2:V, reg c:L, reg tree4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg r4:V, reg c1:V, reg c2:L, reg c3:V, reg n1:*, reg n2:V, reg r5:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg r6:V, reg n3:*, reg n4:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg k1:*, reg k2:V, reg c9:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c15:L, reg r12:V, reg h1:*, reg h2:V, reg c16:V, reg c17:L, reg c18:V, reg c20:L, reg stop1:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg k3:*, reg k4:V, reg c21:V, reg c22:L, reg is_unsorted:cls, reg tree5:*, reg tree6:V, reg c23:L, reg tree8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg p1:p(V +), reg r19:V, reg c24:L, reg stop2:cls, reg r20:V, reg n5:*, reg n6:V, reg r22:V, reg apply:cls, reg outer:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg tree9:*, reg tree10:V, reg c25:L, reg tree12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r25:V, reg c26:cls, reg r26:V, reg p2:p(V +), reg h3:*, reg h4:V, reg p3:p(V +), reg __:*, reg __1:V, reg p4:p(V +), reg r30:V, reg p5:p(V +), reg which_max:*, reg which_max1:V, reg p6:p(V +), reg r33:V, reg r34:V, reg getOption:cls, reg r35:V, reg c27:L, reg message:cls, reg k5:*, reg k6:V, reg p7:p(V +), reg r37:V, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg k7:*, reg k8:V, reg as_integer:cls, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg k9:*, reg k10:V, reg min:cls, reg r45:V, reg r46:V, reg c28:L, reg c29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg c33:L, reg r48:V, reg k11:*, reg k12:V, reg max:cls, reg r49:V, reg n7:*, reg n8:V, reg r50:V, reg c34:L, reg c35:V, reg c37:L, reg stop3:cls, reg gettextf:cls, reg n9:*, reg n10:V, reg p8:p(V +), reg r52:V, reg p9:p(V +), reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg C_cutree:*, reg C_cutree1:V, reg tree13:*, reg tree14:V, reg c38:L, reg C_cutree3:V, reg tree16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg C_cutree5:V, reg dx7:V, reg r57:V, reg k13:*, reg k14:V, reg vargs:dots, reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg k15:*, reg k16:V, reg length:cls, reg r61:V, reg r62:V, reg c39:L, reg setNames:cls, reg as_vector:cls, reg ans:*, reg ans1:V, reg p10:p(V +), reg r64:V, reg p11:p(V +), reg tree17:*, reg tree18:V, reg c40:L, reg tree20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r66:V, reg p12:p(V +), reg r68:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg h5:*, reg h6:V, reg c41:V, reg r72:V, reg c42:L, reg h7:*, reg h8:V, reg h9:V, reg k17:*, reg k18:V, reg l:*, reg colnames__:cls, reg r73:V, reg tree21:*, reg tree22:V, reg c43:L, reg tree24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r74:V, reg l1:*, reg rownames__:cls, reg r75:V, reg ans2:*, reg ans3:V |
    mkenv;
    st tree = tree;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(NULL) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    h_isMissing = missing.0(h);
    if h_isMissing then L1(NULL) else L1(h);
  L1(h_orDefault):
    st h = h_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L2(r1):
    c2 = `as.logical`(r1);
    if c2 then L3(c2) else L34();
  L30():
    nrow = ldf nrow;
    check L32() else D0();
  L31():
    r = dyn base(<lang `<-`(n1, nrow(`$`(tree, merge)))>);
    goto L2(r);
  D0():
    deopt 2 [];
  L3(c3):
    c8 = `as.logical`(c3);
    if c8 then L37() else L4();
  L32():
    p = prom<V +>{
      tree1 = ld tree;
      tree2 = force? tree1;
      checkMissing(tree2);
      c = `is.object`(tree2);
      if c then L1() else L2(tree2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", tree2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(tree4):
      r2 = `$`(tree4, <sym merge>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn nrow(p);
    check L33() else D1();
  L34():
    n1 = ld n1;
    check L35() else D2();
  D1():
    deopt 4 [r4];
  D2():
    deopt 7 [c2, n1];
  L4():
    goto L5();
  L5():
    n3 = ld n1;
    check L41() else D5();
  L33():
    st n1 = r4;
    c1 = `==`(r4, NULL);
    goto L2(c1);
  L35():
    n2 = force? n1;
    checkMissing(n2);
    r5 = `<`(n2, 1.0);
    c5 = `as.logical`(r5);
    c6 = `||`(c2, c5);
    goto L3(c6);
  L37():
    stop = ldf stop;
    check L38() else D3();
  D3():
    deopt 13 [];
  D5():
    deopt 18 [n3];
  L38():
    r6 = dyn stop("invalid 'tree' ('merge' component)");
    check L39() else D4();
  L41():
    n4 = force? n3;
    checkMissing(n4);
    r8 = `+`(n4, 1.0);
    st n = r8;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  D4():
    deopt 15 [r6];
  L6(r10):
    c10 = `as.logical`(r10);
    if c10 then L45() else L7(c10);
  L39():
    goto L5();
  L42():
    k1 = ld k;
    check L44() else D6();
  L43():
    r9 = dyn base1(<sym k>);
    goto L6(r9);
  D6():
    deopt 24 [k1];
  L7(c12):
    c20 = `as.logical`(c12);
    if c20 then L50() else L9();
  L44():
    k2 = force? k1;
    checkMissing(k2);
    c9 = `==`(k2, NULL);
    goto L6(c9);
  L45():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L8(c15, r12):
    c17 = `as.logical`(r12);
    c18 = `&&`(c15, c17);
    goto L7(c18);
  L9():
    goto L10();
  L10():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L46():
    h1 = ld h;
    check L48() else D7();
  L47():
    r11 = dyn base2(<sym h>);
    goto L8(c10, r11);
  L50():
    stop1 = ldf stop;
    check L51() else D8();
  D7():
    deopt 28 [c10, h1];
  D8():
    deopt 33 [];
  L11(r16):
    c22 = `as.logical`(r16);
    if c22 then L57() else L12();
  L48():
    h2 = force? h1;
    checkMissing(h2);
    c16 = `==`(h2, NULL);
    goto L8(c10, c16);
  L51():
    r13 = dyn stop1("either 'k' or 'h' must be specified");
    check L52() else D9();
  L54():
    k3 = ld k;
    check L56() else D10();
  L55():
    r15 = dyn base3(<sym k>);
    goto L11(r15);
  D9():
    deopt 35 [r13];
  D10():
    deopt 39 [k3];
  L12():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L17():
    sym8 = ldf `.Call`;
    base8 = ldf `.Call` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L52():
    goto L10();
  L56():
    k4 = force? k3;
    checkMissing(k4);
    c21 = `==`(k4, NULL);
    goto L11(c21);
  L57():
    is_unsorted = ldf `is.unsorted`;
    check L58() else D11();
  D11():
    deopt 43 [];
  L18(r41):
    st k = r41;
    sym6 = ldf min;
    base6 = ldf min in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L23(r56):
    st ans = r56;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L102() else L103();
  L58():
    p1 = prom<V +>{
      tree5 = ld tree;
      tree6 = force? tree5;
      checkMissing(tree6);
      c23 = `is.object`(tree6);
      if c23 then L1() else L2(tree6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", tree6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(tree8):
      r17 = `$`(tree8, <sym height>);
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r19 = dyn is_unsorted(p1);
    check L59() else D12();
  L74():
    k7 = ld k;
    check L76() else D22();
  L75():
    r40 = dyn base5(<sym k>);
    goto L18(r40);
  L93():
    C_cutree = ld C_cutree;
    check L95() else D31();
  L94():
    r55 = dyn base8(<sym C_cutree>, <lang `$`(tree, merge)>, <sym k>);
    goto L23(r55);
  D12():
    deopt 45 [r19];
  D22():
    deopt 78 [k7];
  D31():
    deopt 109 [C_cutree];
  L19(r44):
    r46 = `<`(r44, 1.0);
    c28 = `as.logical`(r46);
    if c28 then L20(c28) else L82();
  L24(r60):
    r62 = `==`(r60, 1);
    c39 = `as.logical`(r62);
    if c39 then L106() else L25();
  L59():
    c24 = `as.logical`(r19);
    if c24 then L60() else L13();
  L76():
    k8 = force? k7;
    checkMissing(k8);
    as_integer = ldf `as.integer` in base;
    r42 = dyn as_integer(k8);
    check L77() else D23();
  L78():
    k9 = ld k;
    check L80() else D24();
  L79():
    r43 = dyn base6(<sym k>);
    goto L19(r43);
  L95():
    C_cutree1 = force? C_cutree;
    checkMissing(C_cutree1);
    tree13 = ld tree;
    check L96() else D32();
  L102():
    k15 = ld k;
    check L104() else D34();
  L103():
    r59 = dyn base9(<sym k>);
    goto L24(r59);
  D23():
    deopt 81 [r42];
  D24():
    deopt 85 [k9];
  D32():
    deopt 110 [C_cutree1, tree13];
  D34():
    deopt 118 [k15];
  L13():
    goto L14();
  L14():
    n5 = ld n;
    check L64() else D15();
  L20(c29):
    c37 = `as.logical`(c29);
    if c37 then L89() else L22();
  L25():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L110() else L111();
  L26():
    ans2 = ld ans;
    check L126() else D46();
  L60():
    stop2 = ldf stop;
    check L61() else D13();
  L77():
    goto L18(r42);
  L80():
    k10 = force? k9;
    checkMissing(k10);
    min = ldf min in base;
    r45 = dyn min(k10);
    check L81() else D25();
  L82():
    sym7 = ldf max;
    base7 = ldf max in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L96():
    tree14 = force? tree13;
    checkMissing(tree14);
    c38 = `is.object`(tree14);
    if c38 then L98() else L99(C_cutree1, tree14);
  L104():
    k16 = force? k15;
    checkMissing(k16);
    length = ldf length in base;
    r61 = dyn length(k16);
    check L105() else D35();
  L106():
    setNames = ldf setNames;
    check L107() else D36();
  D13():
    deopt 47 [];
  D15():
    deopt 52 [n5];
  D25():
    deopt 88 [r45];
  D35():
    deopt 121 [r61];
  D36():
    deopt 125 [];
  D46():
    deopt 152 [ans2];
  L21(c33, r48):
    n7 = ld n;
    check L87() else D28();
  L22():
    goto L17();
  L27(r71):
    r72 = `!`(r71);
    c42 = `as.logical`(r72);
    if c42 then L113() else L28();
  L61():
    r20 = dyn stop2("the 'height' component of 'tree' is not sorted (increasingly)");
    check L62() else D14();
  L64():
    n6 = force? n5;
    checkMissing(n6);
    r22 = `+`(n6, 1);
    apply = ldf apply;
    check L65() else D16();
  L81():
    goto L19(r45);
  L83():
    k11 = ld k;
    check L85() else D26();
  L84():
    r47 = dyn base7(<sym k>);
    goto L21(c28, r47);
  L89():
    stop3 = ldf stop;
    check L90() else D29();
  L97(C_cutree5, dx7):
    k13 = ld k;
    check L101() else D33();
  L98():
    dr6 = tryDispatchBuiltin.1("$", tree14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L100() else L99(C_cutree1, dr6);
  L99(C_cutree3, tree16):
    r57 = `$`(tree16, <sym merge>);
    goto L97(C_cutree3, r57);
  L105():
    goto L24(r61);
  L107():
    p11 = prom<V +>{
      as_vector = ldf `as.vector`;
      p10 = prom<V +>{
        ans = ld ans;
        ans1 = force? ans;
        checkMissing(ans1);
        return ans1;
      };
      r64 = dyn as_vector(p10);
      return r64;
    };
    p12 = prom<V +>{
      tree17 = ld tree;
      tree18 = force? tree17;
      checkMissing(tree18);
      c40 = `is.object`(tree18);
      if c40 then L1() else L2(tree18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", tree18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(tree20):
      r66 = `$`(tree20, <sym labels>);
      goto L0(r66);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r68 = dyn setNames(p11, p12);
    check L108() else D37();
  L110():
    h5 = ld h;
    check L112() else D38();
  L111():
    r70 = dyn base10(<sym h>);
    goto L27(r70);
  L126():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D14():
    deopt 49 [r20];
  D16():
    deopt 56 [r22];
  D26():
    deopt 93 [c28, k11];
  D28():
    deopt 96 [c33, r48, n7];
  D29():
    deopt 101 [];
  D33():
    deopt 112 [C_cutree5, dx7, k13];
  D37():
    deopt 128 [r68];
  D38():
    deopt 131 [h5];
  L28():
    k17 = ld k;
    check L116() else D40();
  L29(h9):
    l = ld ans;
    colnames__ = ldf `colnames<-`;
    check L117() else D41();
  L62():
    goto L14();
  L65():
    p5 = prom<V +>{
      outer = ldf outer;
      p2 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        tree9 = ld tree;
        tree10 = force? tree9;
        checkMissing(tree10);
        c25 = `is.object`(tree10);
        if c25 then L4() else L5(tree10);
      L2():
        r23 = dyn base4(<lang `$`(tree, height)>, +Infinity);
        goto L0(r23);
      L3(dx5):
        c26 = ldf c in base;
        r26 = dyn c26(dx5, +Infinity);
        goto L0(r26);
      L4():
        dr4 = tryDispatchBuiltin.1("$", tree10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5(dr4);
      L5(tree12):
        r25 = `$`(tree12, <sym height>);
        goto L3(r25);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L3(dx4);
      };
      p3 = prom<V +>{
        h3 = ld h;
        h4 = force? h3;
        checkMissing(h4);
        return h4;
      };
      p4 = prom<V +>{
        __ = ld `>`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      r30 = dyn outer(p2, p3, p4);
      return r30;
    };
    p6 = prom<V +>{
      which_max = ld `which.max`;
      which_max1 = force? which_max;
      checkMissing(which_max1);
      return which_max1;
    };
    r33 = dyn apply(p5, 2.0, p6);
    check L66() else D17();
  L85():
    k12 = force? k11;
    checkMissing(k12);
    max = ldf max in base;
    r49 = dyn max(k12);
    check L86() else D27();
  L87():
    n8 = force? n7;
    checkMissing(n8);
    r50 = `>`(r48, n8);
    c34 = `as.logical`(r50);
    c35 = `||`(c33, c34);
    goto L20(c35);
  L90():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        n9 = ld n;
        n10 = force? n9;
        checkMissing(n10);
        return n10;
      };
      r52 = dyn gettextf("elements of 'k' must be between 1 and %d", p8);
      return r52;
    };
    r54 = dyn stop3[, domain](p9, NA_LGL);
    check L91() else D30();
  L100():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L97(C_cutree1, dx6);
  L101():
    k14 = force? k13;
    checkMissing(k14);
    vargs = dots[dx7, k14];
    r58 = `.Call`(C_cutree5, vargs, <missing>);
    goto L23(r58);
  L108():
    st ans = r68;
    goto L26();
  L112():
    h6 = force? h5;
    checkMissing(h6);
    c41 = `==`(h6, NULL);
    goto L27(c41);
  L113():
    h7 = ld h;
    check L114() else D39();
  D17():
    deopt 60 [r22, r33];
  D27():
    deopt 96 [c28, r49];
  D30():
    deopt 105 [r54];
  D39():
    deopt 135 [h7];
  D40():
    deopt 137 [k17];
  D41():
    deopt 140 [h9, l, h9];
  L66():
    r34 = `-`(r22, r33);
    st k = r34;
    getOption = ldf getOption;
    check L67() else D18();
  L86():
    goto L21(c28, r49);
  L91():
    goto L17();
  L114():
    h8 = force? h7;
    checkMissing(h8);
    goto L29(h8);
  L116():
    k18 = force? k17;
    checkMissing(k18);
    goto L29(k18);
  L117():
    r73 = dyn colnames__(l, NULL, h9);
    check L118() else D42();
  D18():
    deopt 64 [];
  D42():
    deopt 142 [h9, r73];
  L67():
    r35 = dyn getOption("verbose");
    check L68() else D19();
  L118():
    st ans = r73;
    tree21 = ld tree;
    check L119() else D43();
  D19():
    deopt 66 [r35];
  D43():
    deopt 144 [tree21];
  L68():
    c27 = `as.logical`(r35);
    if c27 then L69() else L15();
  L119():
    tree22 = force? tree21;
    checkMissing(tree22);
    c43 = `is.object`(tree22);
    if c43 then L121() else L122(tree22);
  L15():
    goto L16(NULL);
  L16(r38):
    goto L17();
  L69():
    message = ldf message;
    check L70() else D20();
  L120(dx11):
    l1 = ld ans;
    rownames__ = ldf `rownames<-`;
    check L124() else D44();
  L121():
    dr10 = tryDispatchBuiltin.1("$", tree22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L123() else L122(dr10);
  L122(tree24):
    r74 = `$`(tree24, <sym labels>);
    goto L120(r74);
  D20():
    deopt 68 [];
  D44():
    deopt 148 [dx11, l1, dx11];
  L70():
    p7 = prom<V +>{
      k5 = ld k;
      k6 = force? k5;
      checkMissing(k6);
      return k6;
    };
    r37 = dyn message[, , domain]("cutree(): k(h) = ", p7, NA_LGL);
    check L71() else D21();
  L123():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L120(dx10);
  L124():
    r75 = dyn rownames__(l1, NULL, dx11);
    check L125() else D45();
  D21():
    deopt 73 [r37];
  D45():
    deopt 150 [dx11, r75];
  L71():
    goto L16(r37);
  L125():
    st ans = r75;
    goto L26();
  }
}