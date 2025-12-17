fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1785083265;
    st `bw.SJ` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1785083265(x, nb, lower, upper, method, tol) {
  (reg x:*, reg nb:*, reg lower:*, reg upper:*, reg method:*, reg tol:*) -+> V { var x:*, var nb:*, reg nb_isMissing:L, reg nb_orDefault:*, var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, reg hmax:*, reg hmax1:V, reg r:V, reg p:p(V +), var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg hmax2:*, reg hmax3:V, reg p1:p(V +), var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p2:p(V +), var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg lower1:*, reg lower2:V, reg r7:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x1:*, reg x2:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg stop:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg n:*, reg n1:V, reg as_integer:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg n2:*, reg n3:V, reg is_na:cls, reg r20:V, reg c2:L, reg stop1:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r25:V, reg r26:V, reg c3:L, reg stop2:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg nb1:*, reg nb2:V, reg as_integer1:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg nb3:*, reg nb4:V, reg is_na1:cls, reg r34:V, reg c4:L, reg c5:V, reg nb5:*, reg nb6:V, reg r35:V, reg c7:L, reg c8:V, reg c10:L, reg stop3:cls, reg r36:V, reg l:*, reg storage_mode__:cls, reg r38:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p4:p(V +), reg r40:V, reg r41:cls, reg r42:cls, reg bw_pair_cnts:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg nb7:*, reg nb8:V, reg p6:p(V +), reg n4:*, reg n5:V, reg nb9:*, reg nb10:V, reg r45:V, reg r46:V, reg p7:p(V +), reg r48:V, reg Z:*, reg Z1:V, reg c11:L, reg Z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r49:V, reg Z4:*, reg Z5:V, reg c12:L, reg Z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg sd:cls, reg x7:*, reg x8:V, reg p8:p(V +), reg r54:V, reg IQR:cls, reg x9:*, reg x10:V, reg p9:p(V +), reg r56:V, reg r57:V, reg min:cls, reg r58:V, reg scale:*, reg scale1:V, reg r59:V, reg n6:*, reg n7:V, reg r60:V, reg r61:V, reg scale2:*, reg scale3:V, reg r62:V, reg n8:*, reg n9:V, reg r63:V, reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:R, reg r71:R, reg r72:V, reg r73:V, reg r74:V, reg n10:*, reg n11:V, reg r75:V, reg r76:V, reg TDh:cls, reg b:*, reg b1:V, reg p10:p(V +), reg r78:V, reg r79:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r80:V, reg r81:V, reg TD:*, reg TD1:V, reg is_finite:cls, reg r82:V, reg r83:V, reg c13:L, reg c14:V, reg TD2:*, reg TD3:V, reg r84:V, reg c16:L, reg c17:V, reg c19:L, reg stop4:cls, reg r85:V, reg method3:*, reg method4:V, reg r87:V, reg c20:L, reg c21:*, reg c22:V, reg SDh:cls, reg n12:*, reg n13:V, reg TD4:*, reg TD5:V, reg r88:V, reg r89:V, reg r90:V, reg p11:p(V +), reg r92:V, reg r93:V, reg r94:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r96:V, reg r97:V, reg missing:cls, reg r98:V, reg c23:L, reg c24:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r99:V, reg c28:L, reg r100:V, reg missing1:cls, reg r101:V, reg c29:L, reg c30:V, reg c32:L, reg scale4:*, reg scale5:V, reg r102:V, reg n14:*, reg n15:V, reg r103:V, reg r104:V, reg SDh1:cls, reg a:*, reg a1:V, reg p12:p(V +), reg r107:V, reg TD6:*, reg TD7:V, reg r108:V, reg r109:V, reg r110:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r111:V, reg r112:V, reg alph2:*, reg alph3:V, reg is_finite1:cls, reg r113:V, reg r114:V, reg c33:L, reg stop5:cls, reg r115:V, reg r117:cls, reg fSD:cls, reg lower3:*, reg lower4:V, reg p13:p(V +), reg r119:V, reg fSD1:cls, reg upper1:*, reg upper2:V, reg p14:p(V +), reg r121:V, reg r122:V, reg r123:V, reg c34:L, reg itry:*, reg itry1:V, reg r124:V, reg c35:L, reg c36:V, reg bnd_Miss:*, reg bnd_Miss1:V, reg r125:V, reg c38:L, reg c39:V, reg c41:L, reg stop6:cls, reg r126:V, reg itry2:*, reg itry3:V, reg __2:cls, reg r128:V, reg c42:L, reg upper3:*, reg upper4:V, reg r129:V, reg lower5:*, reg lower6:V, reg r131:V, reg getOption:cls, reg r132:V, reg c43:L, reg message:cls, reg gettextf:cls, reg itry4:*, reg itry5:V, reg p15:p(V +), reg lower7:*, reg lower8:V, reg p16:p(V +), reg upper5:*, reg upper6:V, reg p17:p(V +), reg r136:V, reg p18:p(V +), reg r138:V, reg itry6:*, reg itry7:V, reg r140:V, reg uniroot:cls, reg fSD2:*, reg fSD3:V, reg p19:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r142:V, reg r143:V, reg lower9:*, reg lower10:V, reg upper7:*, reg upper8:V, reg c44:cls, reg r144:V, reg p20:p(V +), reg tol1:*, reg tol2:V, reg p21:p(V +), reg r147:V, reg c45:L, reg r149:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r150:V, reg res:*, reg res1:V |
    mkenv;
    st x = x;
    nb_isMissing = missing.0(nb);
    if nb_isMissing then L0(1000) else L0(nb);
  L0(nb_orDefault):
    st nb = nb_orDefault;
    lower_isMissing = missing.0(lower);
    if lower_isMissing then L1() else L2(lower);
  L1():
    p = prom<V +>{
      hmax = ld hmax;
      hmax1 = force? hmax;
      checkMissing(hmax1);
      r = `*`(0.1, hmax1);
      return r;
    };
    goto L2(p);
  L2(lower_orDefault):
    st lower = lower_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L3() else L4(upper);
  L3():
    p1 = prom<V +>{
      hmax2 = ld hmax;
      hmax3 = force? hmax2;
      checkMissing(hmax3);
      return hmax3;
    };
    goto L4(p1);
  L4(upper_orDefault):
    st upper = upper_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L5() else L6(method);
  L5():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c("ste", "dpi");
      goto L0(r5);
    L2():
      r3 = dyn base("ste", "dpi");
      goto L0(r3);
    };
    goto L6(p2);
  L6(method_orDefault):
    st method = method_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L7() else L8(tol);
  L7():
    p3 = prom<V +>{
      lower1 = ld lower;
      lower2 = force? lower1;
      checkMissing(lower2);
      r7 = `*`(0.1, lower2);
      return r7;
    };
    goto L8(p3);
  L8(tol_orDefault):
    st tol = tol_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L9(r10):
    st n = r10;
    r12 = `<`(r10, 2);
    c1 = `as.logical`(r12);
    if c1 then L55() else L10();
  L51():
    x1 = ld x;
    check L53() else D0();
  L52():
    r9 = dyn base1(<sym x>);
    goto L9(r9);
  D0():
    deopt 2 [x1];
  L10():
    goto L11();
  L11():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L53():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r11 = dyn length(x2);
    check L54() else D1();
  L55():
    stop = ldf stop;
    check L56() else D2();
  D1():
    deopt 5 [r11];
  D2():
    deopt 10 [];
  L12(r16):
    st n = r16;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L54():
    goto L9(r11);
  L56():
    r13 = dyn stop("need at least 2 data points");
    check L57() else D3();
  L59():
    n = ld n;
    check L61() else D4();
  L60():
    r15 = dyn base2(<sym n>);
    goto L12(r15);
  D3():
    deopt 12 [r13];
  D4():
    deopt 17 [n];
  L13(r19):
    c2 = `as.logical`(r19);
    if c2 then L67() else L14();
  L57():
    goto L11();
  L61():
    n1 = force? n;
    checkMissing(n1);
    as_integer = ldf `as.integer` in base;
    r17 = dyn as_integer(n1);
    check L62() else D5();
  L63():
    n2 = ld n;
    check L65() else D6();
  L64():
    r18 = dyn base3(<sym n>);
    goto L13(r18);
  D5():
    deopt 20 [r17];
  D6():
    deopt 24 [n2];
  L14():
    goto L15();
  L15():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L62():
    goto L12(r17);
  L65():
    n3 = force? n2;
    checkMissing(n3);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(n3);
    check L66() else D7();
  L67():
    stop1 = ldf stop;
    check L68() else D8();
  D7():
    deopt 27 [r20];
  D8():
    deopt 29 [];
  L16(r24):
    r26 = `!`(r24);
    c3 = `as.logical`(r26);
    if c3 then L75() else L17();
  L66():
    goto L13(r20);
  L68():
    r21 = dyn stop1("invalid length(x)");
    check L69() else D9();
  L71():
    x3 = ld x;
    check L73() else D10();
  L72():
    r23 = dyn base4(<sym x>);
    goto L16(r23);
  D9():
    deopt 31 [r21];
  D10():
    deopt 36 [x3];
  L17():
    goto L18();
  L18():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L69():
    goto L15();
  L73():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r25 = dyn is_numeric(x4);
    check L74() else D11();
  L75():
    stop2 = ldf stop;
    check L76() else D12();
  D11():
    deopt 39 [r25];
  D12():
    deopt 42 [];
  L19(r30):
    st nb = r30;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L83() else L84();
  L74():
    goto L16(r25);
  L76():
    r27 = dyn stop2("invalid 'x'");
    check L77() else D13();
  L79():
    nb1 = ld nb;
    check L81() else D14();
  L80():
    r29 = dyn base5(<sym nb>);
    goto L19(r29);
  D13():
    deopt 44 [r27];
  D14():
    deopt 49 [nb1];
  L20(r33):
    c4 = `as.logical`(r33);
    if c4 then L21(c4) else L87();
  L77():
    goto L18();
  L81():
    nb2 = force? nb1;
    checkMissing(nb2);
    as_integer1 = ldf `as.integer` in base;
    r31 = dyn as_integer1(nb2);
    check L82() else D15();
  L83():
    nb3 = ld nb;
    check L85() else D16();
  L84():
    r32 = dyn base6(<sym nb>);
    goto L20(r32);
  D15():
    deopt 52 [r31];
  D16():
    deopt 56 [nb3];
  L21(c5):
    c10 = `as.logical`(c5);
    if c10 then L90() else L22();
  L82():
    goto L19(r31);
  L85():
    nb4 = force? nb3;
    checkMissing(nb4);
    is_na1 = ldf `is.na` in base;
    r34 = dyn is_na1(nb4);
    check L86() else D17();
  L87():
    nb5 = ld nb;
    check L88() else D18();
  D17():
    deopt 59 [r34];
  D18():
    deopt 60 [c4, nb5];
  L22():
    goto L23();
  L23():
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L94() else D21();
  L86():
    goto L20(r34);
  L88():
    nb6 = force? nb5;
    checkMissing(nb6);
    r35 = `<=`(nb6, 0);
    c7 = `as.logical`(r35);
    c8 = `||`(c4, c7);
    goto L21(c8);
  L90():
    stop3 = ldf stop;
    check L91() else D19();
  D19():
    deopt 66 [];
  D21():
    deopt 74 ["double", l, "double"];
  L91():
    r36 = dyn stop3("invalid 'nb'");
    check L92() else D20();
  L94():
    r38 = dyn storage_mode__(l, NULL, "double");
    check L95() else D22();
  D20():
    deopt 68 [r36];
  D22():
    deopt 76 ["double", r38];
  L92():
    goto L23();
  L95():
    st x = r38;
    match_arg = ldf `match.arg`;
    check L96() else D23();
  D23():
    deopt 79 [];
  L96():
    p4 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r40 = dyn match_arg(p4);
    check L97() else D24();
  D24():
    deopt 81 [r40];
  L97():
    st method = r40;
    r41 = clos inner1031285476;
    st SDh = r41;
    r42 = clos inner1031285476;
    st TDh = r42;
    bw_pair_cnts = ldf bw_pair_cnts;
    check L98() else D25();
  D25():
    deopt 90 [];
  L98():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p6 = prom<V +>{
      nb7 = ld nb;
      nb8 = force? nb7;
      checkMissing(nb8);
      return nb8;
    };
    p7 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      nb9 = ld nb;
      nb10 = force? nb9;
      checkMissing(nb10);
      r45 = `/`(nb10, 2.0);
      r46 = `>`(n5, r45);
      return r46;
    };
    r48 = dyn bw_pair_cnts(p5, p6, p7);
    check L99() else D26();
  D26():
    deopt 94 [r48];
  L99():
    st Z = r48;
    Z = ld Z;
    check L100() else D27();
  D27():
    deopt 96 [Z];
  L100():
    Z1 = force? Z;
    checkMissing(Z1);
    c11 = `is.object`(Z1);
    if c11 then L101() else L102(Z1);
  L24(dx1):
    st d = dx1;
    Z4 = ld Z;
    check L104() else D28();
  L101():
    dr = tryDispatchBuiltin.1("[[", Z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L103() else L102(dr);
  L102(Z3):
    __ = ldf `[[` in base;
    r49 = dyn __(Z3, 1);
    goto L24(r49);
  D28():
    deopt 102 [Z4];
  L103():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L104():
    Z5 = force? Z4;
    checkMissing(Z5);
    c12 = `is.object`(Z5);
    if c12 then L105() else L106(Z5);
  L25(dx3):
    st cnt = dx3;
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  L105():
    dr2 = tryDispatchBuiltin.1("[[", Z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L107() else L106(dr2);
  L106(Z7):
    __1 = ldf `[[` in base;
    r50 = dyn __1(Z7, 2);
    goto L25(r50);
  L26(r52):
    st scale = r52;
    scale = ld scale;
    check L115() else D34();
  L107():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L108():
    sd = ldf sd;
    check L110() else D29();
  L109():
    r51 = dyn base7(<lang sd(x)>, <lang `/`(IQR(x), 1.349)>);
    goto L26(r51);
  D29():
    deopt 111 [];
  D34():
    deopt 124 [1.24, scale];
  L110():
    p8 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r54 = dyn sd(p8);
    check L111() else D30();
  L115():
    scale1 = force? scale;
    checkMissing(scale1);
    r59 = `*`(1.24, scale1);
    n6 = ld n;
    check L116() else D35();
  D30():
    deopt 113 [r54];
  D35():
    deopt 126 [r59, n6];
  L111():
    IQR = ldf IQR;
    check L112() else D31();
  L116():
    n7 = force? n6;
    checkMissing(n7);
    r60 = `^`(n7, -0.14285714285714285);
    r61 = `*`(r59, r60);
    st a = r61;
    scale2 = ld scale;
    check L117() else D36();
  D31():
    deopt 115 [];
  D36():
    deopt 133 [1.23, scale2];
  L112():
    p9 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r56 = dyn IQR(p9);
    check L113() else D32();
  L117():
    scale3 = force? scale2;
    checkMissing(scale3);
    r62 = `*`(1.23, scale3);
    n8 = ld n;
    check L118() else D37();
  D32():
    deopt 117 [r56];
  D37():
    deopt 135 [r62, n8];
  L113():
    r57 = `/`(r56, 1.349);
    min = ldf min in base;
    r58 = dyn min(r54, r57);
    check L114() else D33();
  L118():
    n9 = force? n8;
    checkMissing(n9);
    r63 = `^`(n9, -0.1111111111111111);
    r64 = `*`(r62, r63);
    st b = r64;
    sym8 = ldf sqrt;
    base8 = ldf sqrt in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L119() else L120();
  D33():
    deopt 121 [r58];
  L27(r70, r71, r72):
    r74 = `*`(r71, r72);
    n10 = ld n;
    check L121() else D38();
  L114():
    goto L26(r58);
  L119():
    r73 = sqrt(3.141592653589793);
    goto L27(1.0, 2.0, r73);
  L120():
    r69 = dyn base8(<sym pi>);
    goto L27(1.0, 2.0, r69);
  D38():
    deopt 147 [r70, r74, n10];
  L121():
    n11 = force? n10;
    checkMissing(n11);
    r75 = `*`(r74, n11);
    r76 = `/`(r70, r75);
    st c1 = r76;
    TDh = ldf TDh;
    check L122() else D39();
  D39():
    deopt 153 [];
  L122():
    p10 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r78 = dyn TDh(p10);
    check L123() else D40();
  D40():
    deopt 155 [r78];
  L123():
    r79 = `-`(<missing>, r78);
    st TD = r79;
    sym9 = ldf `is.finite`;
    base9 = ldf `is.finite` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L124() else L125();
  L28(r81):
    r83 = `!`(r81);
    c13 = `as.logical`(r83);
    if c13 then L29(c13) else L128();
  L124():
    TD = ld TD;
    check L126() else D41();
  L125():
    r80 = dyn base9(<sym TD>);
    goto L28(r80);
  D41():
    deopt 160 [TD];
  L29(c14):
    c19 = `as.logical`(c14);
    if c19 then L131() else L30();
  L126():
    TD1 = force? TD;
    checkMissing(TD1);
    is_finite = ldf `is.finite` in base;
    r82 = dyn is_finite(TD1);
    check L127() else D42();
  L128():
    TD2 = ld TD;
    check L129() else D43();
  D42():
    deopt 163 [r82];
  D43():
    deopt 165 [c13, TD2];
  L30():
    goto L31();
  L31():
    method3 = ld method;
    check L135() else D46();
  L127():
    goto L28(r82);
  L129():
    TD3 = force? TD2;
    checkMissing(TD3);
    r84 = `<=`(TD3, 0.0);
    c16 = `as.logical`(r84);
    c17 = `||`(c13, c16);
    goto L29(c17);
  L131():
    stop4 = ldf stop;
    check L132() else D44();
  D44():
    deopt 171 [];
  D46():
    deopt 178 [method3];
  L132():
    r85 = dyn stop4[, domain]("sample is too sparse to find TD", NA_LGL);
    check L133() else D45();
  L135():
    method4 = force? method3;
    checkMissing(method4);
    r87 = `==`(method4, "dpi");
    c20 = `as.logical`(r87);
    if c20 then L136() else L32();
  D45():
    deopt 175 [r85];
  L32():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L141() else L142();
  L33():
    res = ld res;
    check L195() else D78();
  L133():
    goto L31();
  L136():
    c21 = ld c1;
    check L137() else D47();
  D47():
    deopt 182 [c21];
  D78():
    deopt 311 [res];
  L34(r97):
    c23 = `as.logical`(r97);
    if c23 then L35(c23) else L143();
  L137():
    c22 = force? c21;
    checkMissing(c22);
    SDh = ldf SDh;
    check L138() else D48();
  L141():
    missing = ldf missing in base;
    r98 = dyn missing(<sym lower>);
    goto L34(r98);
  L142():
    r96 = dyn base10(<sym lower>);
    goto L34(r96);
  L195():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D48():
    deopt 184 [c22];
  L35(c24):
    st `bnd.Miss` = c24;
    c32 = `as.logical`(c24);
    if c32 then L147() else L37();
  L138():
    p11 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      TD4 = ld TD;
      TD5 = force? TD4;
      checkMissing(TD5);
      r88 = `*`(n13, TD5);
      r89 = `/`(2.394, r88);
      r90 = `^`(r89, 0.14285714285714285);
      return r90;
    };
    r92 = dyn SDh(p11);
    check L139() else D49();
  L143():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L144() else L145();
  D49():
    deopt 186 [c22, r92];
  L36(c28, r100):
    c29 = `as.logical`(r100);
    c30 = `||`(c28, c29);
    goto L35(c30);
  L37():
    goto L38();
  L38():
    SDh1 = ldf SDh;
    check L151() else D52();
  L139():
    r93 = `/`(c22, r92);
    r94 = `^`(r93, 0.2);
    st res = r94;
    goto L33();
  L144():
    missing1 = ldf missing in base;
    r101 = dyn missing1(<sym upper>);
    goto L36(c23, r101);
  L145():
    r99 = dyn base11(<sym upper>);
    goto L36(c23, r99);
  L147():
    scale4 = ld scale;
    check L148() else D50();
  D50():
    deopt 200 [1.144, scale4];
  D52():
    deopt 212 [1.357];
  L148():
    scale5 = force? scale4;
    checkMissing(scale5);
    r102 = `*`(1.144, scale5);
    n14 = ld n;
    check L149() else D51();
  L151():
    p12 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r107 = dyn SDh1(p12);
    check L152() else D53();
  D51():
    deopt 202 [r102, n14];
  D53():
    deopt 214 [1.357, r107];
  L149():
    n15 = force? n14;
    checkMissing(n15);
    r103 = `^`(n15, -0.2);
    r104 = `*`(r102, r103);
    st hmax = r104;
    goto L38();
  L152():
    TD6 = ld TD;
    check L153() else D54();
  D54():
    deopt 214 [1.357, r107, TD6];
  L153():
    TD7 = force? TD6;
    checkMissing(TD7);
    r108 = `/`(r107, TD7);
    r109 = `^`(r108, 0.14285714285714285);
    r110 = `*`(1.357, r109);
    st alph2 = r110;
    sym12 = ldf `is.finite`;
    base12 = ldf `is.finite` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L154() else L155();
  L39(r112):
    r114 = `!`(r112);
    c33 = `as.logical`(r114);
    if c33 then L158() else L40();
  L154():
    alph2 = ld alph2;
    check L156() else D55();
  L155():
    r111 = dyn base12(<sym alph2>);
    goto L39(r111);
  D55():
    deopt 223 [alph2];
  L40():
    goto L41();
  L41():
    st itry = 1;
    r117 = clos inner1031285476;
    st fSD = r117;
    goto L50();
  L156():
    alph3 = force? alph2;
    checkMissing(alph3);
    is_finite1 = ldf `is.finite` in base;
    r113 = dyn is_finite1(alph3);
    check L157() else D56();
  L158():
    stop5 = ldf stop;
    check L159() else D57();
  D56():
    deopt 226 [r113];
  D57():
    deopt 229 [];
  L50():
    fSD = ldf fSD;
    check L162() else D59();
  L157():
    goto L39(r113);
  L159():
    r115 = dyn stop5[, domain]("sample is too sparse to find alph2", NA_LGL);
    check L160() else D58();
  D58():
    deopt 233 [r115];
  D59():
    deopt 243 [];
  L160():
    goto L41();
  L162():
    p13 = prom<V +>{
      lower3 = ld lower;
      lower4 = force? lower3;
      checkMissing(lower4);
      return lower4;
    };
    r119 = dyn fSD(p13);
    check L163() else D60();
  D60():
    deopt 245 [r119];
  L163():
    fSD1 = ldf fSD;
    check L164() else D61();
  D61():
    deopt 246 [r119];
  L164():
    p14 = prom<V +>{
      upper1 = ld upper;
      upper2 = force? upper1;
      checkMissing(upper2);
      return upper2;
    };
    r121 = dyn fSD1(p14);
    check L165() else D62();
  D62():
    deopt 248 [r119, r121];
  L165():
    r122 = `*`(r119, r121);
    r123 = `>`(r122, 0.0);
    c34 = `as.logical`(r123);
    if c34 then L166() else L42();
  L42():
    uniroot = ldf uniroot;
    check L189() else D76();
  L166():
    itry = ld itry;
    check L167() else D63();
  D63():
    deopt 252 [itry];
  D76():
    deopt 303 [];
  L167():
    itry1 = force? itry;
    checkMissing(itry1);
    r124 = `>`(itry1, 99);
    c35 = `as.logical`(r124);
    if c35 then L43(c35) else L168();
  L189():
    p19 = prom<V +>{
      fSD2 = ld fSD;
      fSD3 = force? fSD2;
      checkMissing(fSD3);
      return fSD3;
    };
    p20 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r143):
      return r143;
    L1():
      lower9 = ld lower;
      lower10 = force? lower9;
      checkMissing(lower10);
      upper7 = ld upper;
      upper8 = force? upper7;
      checkMissing(upper8);
      c44 = ldf c in base;
      r144 = dyn c44(lower10, upper8);
      goto L0(r144);
    L2():
      r142 = dyn base13(<sym lower>, <sym upper>);
      goto L0(r142);
    };
    p21 = prom<V +>{
      tol1 = ld tol;
      tol2 = force? tol1;
      checkMissing(tol2);
      return tol2;
    };
    r147 = dyn uniroot[, , tol](p19, p20, p21);
    check L190() else D77();
  D77():
    deopt 308 [r147];
  L43(c36):
    c41 = `as.logical`(c36);
    if c41 then L171() else L44();
  L168():
    bnd_Miss = ld `bnd.Miss`;
    check L169() else D64();
  L190():
    c45 = `is.object`(r147);
    if c45 then L192() else L193(r147);
  D64():
    deopt 256 [c35, bnd_Miss];
  L44():
    goto L45();
  L45():
    itry2 = ld itry;
    check L175() else D67();
  L169():
    bnd_Miss1 = force? bnd_Miss;
    checkMissing(bnd_Miss1);
    r125 = `!`(bnd_Miss1);
    c38 = `as.logical`(r125);
    c39 = `||`(c35, c38);
    goto L43(c39);
  L171():
    stop6 = ldf stop;
    check L172() else D65();
  L191(dx5):
    st res = dx5;
    goto L33();
  L192():
    dr4 = tryDispatchBuiltin.1("$", r147);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L194() else L193(dr4);
  L193(r149):
    r150 = `$`(r149, <sym root>);
    goto L191(r150);
  D65():
    deopt 261 [];
  D67():
    deopt 267 [itry2];
  L172():
    r126 = dyn stop6("no solution in the specified range of bandwidths");
    check L173() else D66();
  L175():
    itry3 = force? itry2;
    checkMissing(itry3);
    __2 = ldf `%%` in base;
    r128 = dyn __2(itry3, 2.0);
    check L176() else D68();
  L194():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L191(dx4);
  D66():
    deopt 263 [r126];
  D68():
    deopt 271 [r128];
  L173():
    goto L45();
  L176():
    c42 = `as.logical`(r128);
    if c42 then L177() else L46();
  L46():
    lower5 = ld lower;
    check L180() else D70();
  L47():
    getOption = ldf getOption;
    check L181() else D71();
  L177():
    upper3 = ld upper;
    check L178() else D69();
  D69():
    deopt 272 [upper3];
  D70():
    deopt 277 [lower5];
  D71():
    deopt 283 [];
  L178():
    upper4 = force? upper3;
    checkMissing(upper4);
    r129 = `*`(upper4, 1.2);
    st upper = r129;
    goto L47();
  L180():
    lower6 = force? lower5;
    checkMissing(lower6);
    r131 = `/`(lower6, 1.2);
    st lower = r131;
    goto L47();
  L181():
    r132 = dyn getOption("verbose");
    check L182() else D72();
  D72():
    deopt 285 [r132];
  L182():
    c43 = `as.logical`(r132);
    if c43 then L183() else L48();
  L48():
    goto L49();
  L49():
    itry6 = ld itry;
    check L187() else D75();
  L183():
    message = ldf message;
    check L184() else D73();
  D73():
    deopt 287 [];
  D75():
    deopt 294 [itry6];
  L184():
    p18 = prom<V +>{
      gettextf = ldf gettextf;
      p15 = prom<V +>{
        itry4 = ld itry;
        itry5 = force? itry4;
        checkMissing(itry5);
        return itry5;
      };
      p16 = prom<V +>{
        lower7 = ld lower;
        lower8 = force? lower7;
        checkMissing(lower8);
        return lower8;
      };
      p17 = prom<V +>{
        upper5 = ld upper;
        upper6 = force? upper5;
        checkMissing(upper6);
        return upper6;
      };
      r136 = dyn gettextf("increasing bw.SJ() search interval (%d) to [%.4g,%.4g]", p15, p16, p17);
      return r136;
    };
    r138 = dyn message[, domain](p18, NA_LGL);
    check L185() else D74();
  L187():
    itry7 = force? itry6;
    checkMissing(itry7);
    r140 = `+`(itry7, 1);
    st itry = r140;
    goto L50();
  D74():
    deopt 291 [r138];
  L185():
    goto L49();
  }
}
fun inner1031285476(h) {
  (reg h:*) -+> V { var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_bw_phi4:*, reg C_bw_phi5:V, reg n:*, reg n1:V, reg d:*, reg d1:V, reg cnt:*, reg cnt1:V, reg h1:*, reg h2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st h = h;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_bw_phi4 = ld C_bw_phi4;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_bw_phi4>, <sym n>, <sym d>, <sym cnt>, <sym h>);
    goto L0(r);
  D0():
    deopt 1 [C_bw_phi4];
  L3():
    C_bw_phi5 = force? C_bw_phi4;
    checkMissing(C_bw_phi5);
    n = ld n;
    check L4() else D1();
  D1():
    deopt 2 [C_bw_phi5, n];
  L4():
    n1 = force? n;
    checkMissing(n1);
    d = ld d;
    check L5() else D2();
  D2():
    deopt 3 [C_bw_phi5, n1, d];
  L5():
    d1 = force? d;
    checkMissing(d1);
    cnt = ld cnt;
    check L6() else D3();
  D3():
    deopt 4 [C_bw_phi5, n1, d1, cnt];
  L6():
    cnt1 = force? cnt;
    checkMissing(cnt1);
    h1 = ld h;
    check L7() else D4();
  D4():
    deopt 5 [C_bw_phi5, n1, d1, cnt1, h1];
  L7():
    h2 = force? h1;
    checkMissing(h2);
    vargs = dots[n1, d1, cnt1, h2];
    r2 = `.Call`(C_bw_phi5, vargs, <missing>);
    goto L0(r2);
  }
}