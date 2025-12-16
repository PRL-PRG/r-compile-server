fun main() {
  () -+> V { reg r:cls, reg which:cls, reg LETTERS:*, reg LETTERS1:V, reg r1:V, reg p:p(V +), reg r3:V, reg which1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg letters:*, reg letters1:V, reg c1:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg seq:cls, reg ll:*, reg ll1:V, reg p2:p(V +), reg r10:V, reg __:cls, reg r11:V, reg l:*, reg names__:cls, reg r12:V, reg which2:cls, reg ll2:*, reg ll3:V, reg p3:p(V +), reg r14:V, reg which3:cls, reg r15:V, reg __1:cls, reg r16:V, reg r17:V, reg p4:p(V +), reg r19:V, reg which4:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg matrix:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg m:*, reg m1:V, reg __2:cls, reg r26:V, reg r27:V, reg which5:cls, reg div_3:*, reg div_4:V, reg p7:p(V +), reg r29:V, reg which6:cls, reg div_5:*, reg div_6:V, reg p8:p(V +), reg r31:V, reg paste:cls, reg p9:p(V +), reg r33:V, reg l1:*, reg rownames__:cls, reg r34:V, reg which7:cls, reg m2:*, reg m3:V, reg __3:cls, reg r35:V, reg r36:V, reg p10:p(V +), reg r38:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r39:V, reg r40:V, reg c2:cls, reg r41:V, reg l2:*, reg dim__:cls, reg r42:V, reg m4:*, reg m5:V, reg which8:cls, reg div_7:*, reg div_8:V, reg p11:p(V +), reg r44:V, reg which9:cls, reg div_9:*, reg div_10:V, reg p12:p(V +), reg r46:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r47:V, reg r48:V, reg m6:*, reg m7:V, reg c3:cls, reg r49:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg r51:V, reg vm:*, reg vm1:V, reg length:cls, reg r52:V, reg l3:*, reg dim__1:cls, reg r53:V, reg which10:cls, reg div_11:*, reg div_12:V, reg p13:p(V +), reg r55:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r56:V, reg r57:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg r59:V, reg c4:cls, reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg c5:cls, reg r63:V, reg LETTERS2:*, reg LETTERS3:V, reg c6:L, reg LETTERS5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __4:cls, reg r64:V, reg list:cls, reg r65:V, reg l4:*, reg dimnames__:cls, reg r66:V, reg which11:cls, reg m8:*, reg m9:V, reg __5:cls, reg r67:V, reg r68:V, reg p14:p(V +), reg r70:V, reg vm2:*, reg vm3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r71:V, reg r72:V, reg LETTERS6:*, reg LETTERS7:V, reg c7:L, reg LETTERS9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r73:V, reg __6:cls, reg r74:V, reg list1:cls, reg r75:V, reg l5:*, reg dimnames__1:cls, reg r76:V, reg which12:cls, reg vn:*, reg vn1:V, reg __7:cls, reg r77:V, reg r78:V, reg p15:p(V +), reg r80:V, reg stopifnot:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r81:V, reg r82:V, reg wv:*, reg wv1:V, reg array:cls, reg p16:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r84:V, reg r85:V, reg c8:cls, reg r86:V, reg p17:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r88:V, reg r89:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg c9:cls, reg r92:V, reg list2:cls, reg r93:V, reg p18:p(V +), reg r95:V, reg identical:cls, reg r96:V, reg p19:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r98:V, reg r99:V, reg wm:*, reg wm1:V, reg array1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r100:V, reg r101:V, reg c10:cls, reg r102:V, reg p20:p(V +), reg p21:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r105:V, reg r106:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r107:V, reg r108:V, reg rep:cls, reg r109:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r110:V, reg r111:V, reg c11:cls, reg r112:V, reg list3:cls, reg r113:V, reg p22:p(V +), reg r115:V, reg identical1:cls, reg r116:V, reg p23:p(V +), reg r118:V |
    mkenv;
    r = clos `inner-2113290713`;
    st which = r;
    which = ldf which;
    check L10() else D0();
  D0():
    deopt 4 [];
  L10():
    p = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      r1 = `==`(LETTERS1, "R");
      return r1;
    };
    r3 = dyn which(p);
    check L11() else D1();
  D1():
    deopt 6 [r3];
  L11():
    which1 = ldf which;
    check L12() else D2();
  D2():
    deopt 8 [];
  L12():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      st ll = r5;
      invisible.0();
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c(TRUE, FALSE, TRUE, NA_LGL, FALSE, FALSE, TRUE);
      goto L0(r6);
    L2():
      r4 = dyn base(TRUE, FALSE, TRUE, NA_LGL, FALSE, FALSE, TRUE);
      goto L0(r4);
    };
    r8 = dyn which1(p1);
    check L13() else D3();
  D3():
    deopt 10 [r8];
  L13():
    letters = ld letters;
    check L14() else D4();
  D4():
    deopt 11 [letters];
  L14():
    letters1 = force? letters;
    checkMissing(letters1);
    c1 = `is.object`(letters1);
    if c1 then L15() else L16(letters1);
  L0(dx1):
    l = ld ll;
    names__ = ldf `names<-`;
    check L20() else D7();
  L15():
    dr = tryDispatchBuiltin.1("[", letters1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(letters3):
    seq = ldf seq;
    check L18() else D5();
  D5():
    deopt 14 [letters3];
  D7():
    deopt 19 [dx1, l, dx1];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L18():
    p2 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    r10 = dyn seq(p2);
    check L19() else D6();
  L20():
    r12 = dyn names__(l, NULL, dx1);
    check L21() else D8();
  D6():
    deopt 16 [letters3, r10];
  D8():
    deopt 21 [dx1, r12];
  L19():
    __ = ldf `[` in base;
    r11 = dyn __(letters3, r10);
    goto L0(r11);
  L21():
    st ll = r12;
    which2 = ldf which;
    check L22() else D9();
  D9():
    deopt 24 [];
  L22():
    p3 = prom<V +>{
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      return ll3;
    };
    r14 = dyn which2(p3);
    check L23() else D10();
  D10():
    deopt 26 [r14];
  L23():
    which3 = ldf which;
    check L24() else D11();
  D11():
    deopt 28 [];
  L24():
    p4 = prom<V +>{
      r15 = `:`(1.0, 12.0);
      __1 = ldf `%%` in base;
      r16 = dyn __1(r15, 2.0);
      r17 = `==`(r16, 0.0);
      return r17;
    };
    r19 = dyn which3(p4);
    check L25() else D12();
  D12():
    deopt 30 [r19];
  L25():
    which4 = ldf which;
    check L26() else D13();
  D13():
    deopt 32 [];
  L26():
    p5 = prom<V +>{
      r20 = `>`(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, 3.0);
      return r20;
    };
    r22 = dyn which4[, `arr.ind`](p5, TRUE);
    check L27() else D14();
  D14():
    deopt 36 [r22];
  L27():
    matrix = ldf matrix;
    check L28() else D15();
  D15():
    deopt 38 [];
  L28():
    p6 = prom<V +>{
      r23 = `:`(1.0, 12.0);
      return r23;
    };
    r25 = dyn matrix(p6, 3.0, 4.0);
    check L29() else D16();
  D16():
    deopt 42 [r25];
  L29():
    st m = r25;
    m = ld m;
    check L30() else D17();
  D17():
    deopt 45 [m];
  L30():
    m1 = force? m;
    checkMissing(m1);
    __2 = ldf `%%` in base;
    r26 = dyn __2(m1, 3.0);
    check L31() else D18();
  D18():
    deopt 49 [r26];
  L31():
    r27 = `==`(r26, 0.0);
    st `div.3` = r27;
    which5 = ldf which;
    check L32() else D19();
  D19():
    deopt 54 [];
  L32():
    p7 = prom<V +>{
      div_3 = ld `div.3`;
      div_4 = force? div_3;
      checkMissing(div_4);
      return div_4;
    };
    r29 = dyn which5(p7);
    check L33() else D20();
  D20():
    deopt 56 [r29];
  L33():
    which6 = ldf which;
    check L34() else D21();
  D21():
    deopt 58 [];
  L34():
    p8 = prom<V +>{
      div_5 = ld `div.3`;
      div_6 = force? div_5;
      checkMissing(div_6);
      return div_6;
    };
    r31 = dyn which6[, `arr.ind`](p8, TRUE);
    check L35() else D22();
  D22():
    deopt 62 [r31];
  L35():
    paste = ldf paste;
    check L36() else D23();
  D23():
    deopt 64 [];
  L36():
    p9 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r33 = dyn paste[, , sep]("Case", p9, "_");
    check L37() else D24();
  D24():
    deopt 69 [r33];
  L37():
    l1 = ld m;
    rownames__ = ldf `rownames<-`;
    check L38() else D25();
  D25():
    deopt 71 [r33, l1, r33];
  L38():
    r34 = dyn rownames__(l1, NULL, r33);
    check L39() else D26();
  D26():
    deopt 73 [r33, r34];
  L39():
    st m = r34;
    which7 = ldf which;
    check L40() else D27();
  D27():
    deopt 76 [];
  L40():
    p10 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      __3 = ldf `%%` in base;
      r35 = dyn __3(m3, 5.0);
      r36 = `==`(r35, 0.0);
      return r36;
    };
    r38 = dyn which7[, `arr.ind`](p10, TRUE);
    check L41() else D28();
  D28():
    deopt 80 [r38];
  L41():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L1(r40):
    l2 = ld m;
    dim__ = ldf `dim<-`;
    check L45() else D30();
  L42():
    c2 = ldf c in base;
    r41 = dyn c2(2.0, 2.0, 3.0);
    check L44() else D29();
  L43():
    r39 = dyn base1(2.0, 2.0, 3.0);
    goto L1(r39);
  D29():
    deopt 87 [r41];
  D30():
    deopt 89 [r40, l2, r40];
  L44():
    goto L1(r41);
  L45():
    r42 = dyn dim__(l2, NULL, r40);
    check L46() else D31();
  D31():
    deopt 91 [r40, r42];
  L46():
    st m = r42;
    m4 = ld m;
    check L47() else D32();
  D32():
    deopt 93 [m4];
  L47():
    m5 = force? m4;
    checkMissing(m5);
    which8 = ldf which;
    check L48() else D33();
  D33():
    deopt 96 [];
  L48():
    p11 = prom<V +>{
      div_7 = ld `div.3`;
      div_8 = force? div_7;
      checkMissing(div_8);
      return div_8;
    };
    r44 = dyn which8[, `arr.ind`](p11, FALSE);
    check L49() else D34();
  D34():
    deopt 100 [r44];
  L49():
    which9 = ldf which;
    check L50() else D35();
  D35():
    deopt 102 [];
  L50():
    p12 = prom<V +>{
      div_9 = ld `div.3`;
      div_10 = force? div_9;
      checkMissing(div_10);
      return div_10;
    };
    r46 = dyn which9[, `arr.ind`](p12, TRUE);
    check L51() else D36();
  D36():
    deopt 106 [r46];
  L51():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L2(r48):
    st vm = r48;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L52():
    m6 = ld m;
    check L54() else D37();
  L53():
    r47 = dyn base2(<sym m>);
    goto L2(r47);
  D37():
    deopt 109 [m6];
  L3(r51):
    l3 = ld vm;
    dim__1 = ldf `dim<-`;
    check L60() else D41();
  L54():
    m7 = force? m6;
    checkMissing(m7);
    c3 = ldf c in base;
    r49 = dyn c3(m7);
    check L55() else D38();
  L56():
    vm = ld vm;
    check L58() else D39();
  L57():
    r50 = dyn base3(<sym vm>);
    goto L3(r50);
  D38():
    deopt 112 [r49];
  D39():
    deopt 116 [vm];
  D41():
    deopt 121 [r51, l3, r51];
  L55():
    goto L2(r49);
  L58():
    vm1 = force? vm;
    checkMissing(vm1);
    length = ldf length in base;
    r52 = dyn length(vm1);
    check L59() else D40();
  L60():
    r53 = dyn dim__1(l3, NULL, r51);
    check L61() else D42();
  D40():
    deopt 119 [r52];
  D42():
    deopt 123 [r51, r53];
  L59():
    goto L3(r52);
  L61():
    st vm = r53;
    which10 = ldf which;
    check L62() else D43();
  D43():
    deopt 126 [];
  L62():
    p13 = prom<V +>{
      div_11 = ld `div.3`;
      div_12 = force? div_11;
      checkMissing(div_12);
      return div_12;
    };
    r55 = dyn which10[, `arr.ind`](p13, TRUE);
    check L63() else D44();
  D44():
    deopt 130 [r55];
  L63():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L4(r57):
    l4 = ld m;
    dimnames__ = ldf `dimnames<-`;
    check L77() else D49();
  L64():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L65():
    r56 = dyn base4[X, Z, three](<lang c("U", "V")>, <lang c("y", "z")>, <lang `[`(LETTERS, `:`(1.0, 3.0))>);
    goto L4(r56);
  D49():
    deopt 156 [r57, l4, r57];
  L5(r59):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L66():
    c4 = ldf c in base;
    r60 = dyn c4("U", "V");
    check L68() else D45();
  L67():
    r58 = dyn base5("U", "V");
    goto L5(r58);
  L77():
    r66 = dyn dimnames__(l4, NULL, r57);
    check L78() else D50();
  D45():
    deopt 138 [r60];
  D50():
    deopt 158 [r57, r66];
  L6(r62):
    LETTERS2 = ld LETTERS;
    check L72() else D47();
  L68():
    goto L5(r60);
  L69():
    c5 = ldf c in base;
    r63 = dyn c5("y", "z");
    check L71() else D46();
  L70():
    r61 = dyn base6("y", "z");
    goto L6(r61);
  L78():
    st m = r66;
    which11 = ldf which;
    check L79() else D51();
  D46():
    deopt 145 [r63];
  D47():
    deopt 147 [LETTERS2];
  D51():
    deopt 161 [];
  L71():
    goto L6(r63);
  L72():
    LETTERS3 = force? LETTERS2;
    checkMissing(LETTERS3);
    c6 = `is.object`(LETTERS3);
    if c6 then L73() else L74(LETTERS3);
  L79():
    p14 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      __5 = ldf `%%` in base;
      r67 = dyn __5(m9, 3.0);
      r68 = `==`(r67, 0.0);
      return r68;
    };
    r70 = dyn which11[, `arr.ind`](p14, TRUE);
    check L80() else D52();
  D52():
    deopt 165 [r70];
  L7(dx3):
    list = ldf list in base;
    r65 = dyn list(r59, r62, dx3);
    check L76() else D48();
  L73():
    dr2 = tryDispatchBuiltin.1("[", LETTERS3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L75() else L74(dr2);
  L74(LETTERS5):
    __4 = ldf `[` in base;
    r64 = dyn __4(LETTERS5, <int 1, 2, 3>);
    goto L7(r64);
  L80():
    st wm = r70;
    vm2 = ld vm;
    check L81() else D53();
  D48():
    deopt 154 [r65];
  D53():
    deopt 167 [vm2];
  L75():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L76():
    goto L4(r65);
  L81():
    vm3 = force? vm2;
    checkMissing(vm3);
    st vn = vm3;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  L8(r72):
    l5 = ld vn;
    dimnames__1 = ldf `dimnames<-`;
    check L89() else D56();
  L82():
    LETTERS6 = ld LETTERS;
    check L84() else D54();
  L83():
    r71 = dyn base7(<lang `[`(LETTERS, `:`(1.0, 12.0))>);
    goto L8(r71);
  D54():
    deopt 172 [LETTERS6];
  D56():
    deopt 182 [r72, l5, r72];
  L84():
    LETTERS7 = force? LETTERS6;
    checkMissing(LETTERS7);
    c7 = `is.object`(LETTERS7);
    if c7 then L85() else L86(LETTERS7);
  L89():
    r76 = dyn dimnames__1(l5, NULL, r72);
    check L90() else D57();
  D57():
    deopt 184 [r72, r76];
  L9(dx5):
    list1 = ldf list in base;
    r75 = dyn list1(dx5);
    check L88() else D55();
  L85():
    dr4 = tryDispatchBuiltin.1("[", LETTERS7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(dr4);
  L86(LETTERS9):
    r73 = `:`(1.0, 12.0);
    __6 = ldf `[` in base;
    r74 = dyn __6(LETTERS9, r73);
    goto L9(r74);
  L90():
    st vn = r76;
    which12 = ldf which;
    check L91() else D58();
  D55():
    deopt 180 [r75];
  D58():
    deopt 187 [];
  L87():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L88():
    goto L8(r75);
  L91():
    p15 = prom<V +>{
      vn = ld vn;
      vn1 = force? vn;
      checkMissing(vn1);
      __7 = ldf `%%` in base;
      r77 = dyn __7(vn1, 3.0);
      r78 = `==`(r77, 0.0);
      return r78;
    };
    r80 = dyn which12[, `arr.ind`](p15, TRUE);
    check L92() else D59();
  D59():
    deopt 191 [r80];
  L92():
    st wv = r80;
    stopifnot = ldf stopifnot;
    check L93() else D60();
  D60():
    deopt 194 [];
  L93():
    p19 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      wv = ld wv;
      wv1 = force? wv;
      checkMissing(wv1);
      array = ldf array;
      p16 = prom<V +>{
        return <int 3, 6, 9, 12>;
      };
      p17 = prom<V +>{
        sym9 = ldf c;
        base9 = ldf c in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r85):
        return r85;
      L1():
        c8 = ldf c in base;
        r86 = dyn c8(4.0, 1.0);
        goto L0(r86);
      L2():
        r84 = dyn base9(4.0, 1.0);
        goto L0(r84);
      };
      p18 = prom<V +>{
        sym10 = ldf list;
        base10 = ldf list in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L2() else L3();
      L0(r89):
        return r89;
      L2():
        sym11 = ldf c;
        base11 = ldf c in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L4() else L5();
      L3():
        r88 = dyn base10(<lang c("C", "F", "I", "L")>, "dim1");
        goto L0(r88);
      L1(r91):
        list2 = ldf list in base;
        r93 = dyn list2(r91, "dim1");
        goto L0(r93);
      L4():
        c9 = ldf c in base;
        r92 = dyn c9("C", "F", "I", "L");
        goto L1(r92);
      L5():
        r90 = dyn base11("C", "F", "I", "L");
        goto L1(r90);
      };
      r95 = dyn array[, dim, dimnames](p16, p17, p18);
      identical = ldf identical in base;
      r96 = dyn identical(wv1, r95, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r96);
    L2():
      r81 = dyn base8(<sym wv>, <lang array(`*`(3, `(`(`:`(1.0, 4.0))), dim=c(4.0, 1.0), dimnames=list(c("C", "F", "I", "L"), "dim1"))>);
      goto L0(r81);
    };
    p23 = prom<V +>{
      sym12 = ldf identical;
      base12 = ldf identical in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r99):
      return r99;
    L1():
      wm = ld wm;
      wm1 = force? wm;
      checkMissing(wm1);
      array1 = ldf array;
      p20 = prom<V +>{
        sym13 = ldf c;
        base13 = ldf c in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r101):
        return r101;
      L1():
        c10 = ldf c in base;
        r102 = dyn c10(<int 1, 2>, <int 1, 2>, <int 2, 1>, <int 1, 2>, <int 1, 2, 3>, 3);
        goto L0(r102);
      L2():
        r100 = dyn base13(<lang `:`(1.0, 2.0)>, <lang `:`(1.0, 2.0)>, <lang `:`(2.0, 1.0)>, <lang `:`(1.0, 2.0)>, <lang `:`(1.0, 3.0)>, 3);
        goto L0(r100);
      };
      p21 = prom<V +>{
        return <int 4, 3>;
      };
      p22 = prom<V +>{
        sym14 = ldf list;
        base14 = ldf list in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L3() else L4();
      L0(r106):
        return r106;
      L3():
        sym15 = ldf rep;
        base15 = ldf rep in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L5() else L6();
      L4():
        r105 = dyn base14(<lang rep(c("U", "V"), 2.0)>, <lang c("X", "Z", "three")>);
        goto L0(r105);
      L1(r108):
        sym16 = ldf c;
        base16 = ldf c in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L7() else L8();
      L5():
        rep = ldf rep in base;
        r109 = dyn rep(<lang c("U", "V")>, 2.0);
        goto L1(r109);
      L6():
        r107 = dyn base15(<lang c("U", "V")>, 2.0);
        goto L1(r107);
      L2(r111):
        list3 = ldf list in base;
        r113 = dyn list3(r108, r111);
        goto L0(r113);
      L7():
        c11 = ldf c in base;
        r112 = dyn c11("X", "Z", "three");
        goto L2(r112);
      L8():
        r110 = dyn base16("X", "Z", "three");
        goto L2(r110);
      };
      r115 = dyn array1[, dim, dimnames](p20, p21, p22);
      identical1 = ldf identical in base;
      r116 = dyn identical1(wm1, r115, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r116);
    L2():
      r98 = dyn base12(<sym wm>, <lang array(c(`:`(1.0, 2.0), `:`(1.0, 2.0), `:`(2.0, 1.0), `:`(1.0, 2.0), `:`(1.0, 3.0), 3), dim=`:`(4.0, 3.0), dimnames=list(rep(c("U", "V"), 2.0), c("X", "Z", "three")))>);
      goto L0(r98);
    };
    r118 = dyn stopifnot(p19, p23);
    check L94() else D61();
  D61():
    deopt 197 [r118];
  L94():
    popenv;
    return r118;
  }
}
fun `inner-2113290713`(x, `arr.ind`, useNames) {
  (reg x:*, reg arr_ind:*, reg useNames:*) -+> V { var x:*, var `arr.ind`:*, reg arr_ind_isMissing:L, reg arr_ind_orDefault:*, var useNames:*, reg useNames_isMissing:L, reg useNames_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg which:cls, reg r2:V, reg isTRUE:cls, reg arr_ind1:*, reg arr_ind2:V, reg p:p(V +), reg r4:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c8:L, reg r8:V, reg x3:*, reg x4:V, reg dim:cls, reg r9:V, reg c9:V, reg r10:V, reg c10:L, reg c11:V, reg c13:L, reg arrayInd:cls, reg wh:*, reg wh1:V, reg p1:p(V +), reg d:*, reg d1:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r15:V, reg p3:p(V +), reg useNames1:*, reg useNames2:V, reg p4:p(V +), reg r18:V, reg wh2:*, reg wh3:V |
    mkenv;
    st x = x;
    arr_ind_isMissing = missing.0(arr_ind);
    if arr_ind_isMissing then L0(FALSE) else L0(arr_ind);
  L0(arr_ind_orDefault):
    st `arr.ind` = arr_ind_orDefault;
    useNames_isMissing = missing.0(useNames);
    if useNames_isMissing then L1(TRUE) else L1(useNames);
  L1(useNames_orDefault):
    st useNames = useNames_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r1):
    st wh = r1;
    isTRUE = ldf isTRUE;
    check L11() else D2();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<lang which(x)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    which = ldf which in base;
    r2 = dyn which(x2);
    check L10() else D1();
  L11():
    p = prom<V +>{
      arr_ind1 = ld `arr.ind`;
      arr_ind2 = force? arr_ind1;
      checkMissing(arr_ind2);
      return arr_ind2;
    };
    r4 = dyn isTRUE(p);
    check L12() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L10():
    goto L2(r2);
  L12():
    c = `as.logical`(r4);
    if c then L13() else L3(c);
  L3(c2):
    c13 = `as.logical`(c2);
    if c13 then L21() else L6();
  L13():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L4(c5, r6):
    r10 = `!`(r6);
    c10 = `as.logical`(r10);
    c11 = `&&`(c5, c10);
    goto L3(c11);
  L6():
    wh2 = ld wh;
    check L25() else D8();
  L14():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r5 = dyn base1(<lang `<-`(d, dim(x))>);
    goto L4(c, r5);
  L21():
    arrayInd = ldf arrayInd;
    check L22() else D6();
  D6():
    deopt 23 [];
  D8():
    deopt 30 [wh2];
  L5(c8, r8):
    st d = r8;
    c9 = `==`(r8, NULL);
    goto L4(c8, c9);
  L16():
    x3 = ld x;
    check L18() else D4();
  L17():
    r7 = dyn base2(<sym x>);
    goto L5(c, r7);
  L22():
    p1 = prom<V +>{
      wh = ld wh;
      wh1 = force? wh;
      checkMissing(wh1);
      return wh1;
    };
    p2 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p3 = prom<V +>{
      sym3 = ldf dimnames;
      base3 = ldf dimnames in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      dimnames = ldf dimnames in base;
      r15 = dyn dimnames(x6);
      goto L0(r15);
    L2():
      r13 = dyn base3(<sym x>);
      goto L0(r13);
    };
    p4 = prom<V +>{
      useNames1 = ld useNames;
      useNames2 = force? useNames1;
      checkMissing(useNames2);
      return useNames2;
    };
    r18 = dyn arrayInd[, , , useNames](p1, p2, p3, p4);
    check L23() else D7();
  L25():
    wh3 = force? wh2;
    checkMissing(wh3);
    popenv;
    return wh3;
  D4():
    deopt 14 [c, x3];
  D7():
    deopt 29 [r18];
  L18():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r9 = dyn dim(x4);
    check L19() else D5();
  L23():
    popenv;
    return r18;
  D5():
    deopt 17 [c, r9];
  L19():
    goto L5(c, r9);
  }
}