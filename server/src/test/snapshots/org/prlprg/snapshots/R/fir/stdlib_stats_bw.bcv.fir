fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2560675370;
    st `bw.bcv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2560675370(x, nb, lower, upper, tol) {
  (reg x:*, reg nb:*, reg lower:*, reg upper:*, reg tol:*) -+> V { var x:*, var nb:*, reg nb_isMissing:L, reg nb_orDefault:*, var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, reg hmax:*, reg hmax1:V, reg r:V, reg p:p(V +), var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg hmax2:*, reg hmax3:V, reg p1:p(V +), var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg lower1:*, reg lower2:V, reg r3:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg stop:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg n:*, reg n1:V, reg as_integer:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg n2:*, reg n3:V, reg is_na:cls, reg r16:V, reg c1:L, reg stop1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r21:V, reg r22:V, reg c2:L, reg stop2:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg nb1:*, reg nb2:V, reg as_integer1:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg nb3:*, reg nb4:V, reg is_na1:cls, reg r30:V, reg c3:L, reg c4:V, reg nb5:*, reg nb6:V, reg r31:V, reg c6:L, reg c7:V, reg c9:L, reg stop3:cls, reg r32:V, reg l:*, reg storage_mode__:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:R, reg r39:V, reg var:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r41:V, reg r42:V, reg r43:V, reg n4:*, reg n5:V, reg r44:V, reg r45:V, reg bw_pair_cnts:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg nb7:*, reg nb8:V, reg p5:p(V +), reg n6:*, reg n7:V, reg nb9:*, reg nb10:V, reg r48:V, reg r49:V, reg p6:p(V +), reg r51:V, reg Z:*, reg Z1:V, reg c10:L, reg Z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r52:V, reg Z4:*, reg Z5:V, reg c11:L, reg Z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r53:V, reg r54:cls, reg optimize:cls, reg fbcv:*, reg fbcv1:V, reg p7:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg lower3:*, reg lower4:V, reg upper1:*, reg upper2:V, reg c12:cls, reg r58:V, reg p8:p(V +), reg tol1:*, reg tol2:V, reg p9:p(V +), reg r61:V, reg c13:L, reg r63:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r64:V, reg h:*, reg h1:V, reg lower5:*, reg lower6:V, reg tol3:*, reg tol4:V, reg r65:V, reg r66:V, reg c14:L, reg c15:V, reg h2:*, reg h3:V, reg upper3:*, reg upper4:V, reg tol5:*, reg tol6:V, reg r67:V, reg r68:V, reg c17:L, reg c18:V, reg c20:L, reg warning:cls, reg r69:V, reg h4:*, reg h5:V |
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
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L5() else L6(tol);
  L5():
    p2 = prom<V +>{
      lower1 = ld lower;
      lower2 = force? lower1;
      checkMissing(lower2);
      r3 = `*`(0.1, lower2);
      return r3;
    };
    goto L6(p2);
  L6(tol_orDefault):
    st tol = tol_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L7(r6):
    st n = r6;
    r8 = `<`(r6, 2);
    c = `as.logical`(r8);
    if c then L32() else L8();
  L28():
    x1 = ld x;
    check L30() else D0();
  L29():
    r5 = dyn base(<sym x>);
    goto L7(r5);
  D0():
    deopt 2 [x1];
  L8():
    goto L9();
  L9():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L30():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r7 = dyn length(x2);
    check L31() else D1();
  L32():
    stop = ldf stop;
    check L33() else D2();
  D1():
    deopt 5 [r7];
  D2():
    deopt 10 [];
  L10(r12):
    st n = r12;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L31():
    goto L7(r7);
  L33():
    r9 = dyn stop("need at least 2 data points");
    check L34() else D3();
  L36():
    n = ld n;
    check L38() else D4();
  L37():
    r11 = dyn base1(<sym n>);
    goto L10(r11);
  D3():
    deopt 12 [r9];
  D4():
    deopt 17 [n];
  L11(r15):
    c1 = `as.logical`(r15);
    if c1 then L44() else L12();
  L34():
    goto L9();
  L38():
    n1 = force? n;
    checkMissing(n1);
    as_integer = ldf `as.integer` in base;
    r13 = dyn as_integer(n1);
    check L39() else D5();
  L40():
    n2 = ld n;
    check L42() else D6();
  L41():
    r14 = dyn base2(<sym n>);
    goto L11(r14);
  D5():
    deopt 20 [r13];
  D6():
    deopt 24 [n2];
  L12():
    goto L13();
  L13():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L39():
    goto L10(r13);
  L42():
    n3 = force? n2;
    checkMissing(n3);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(n3);
    check L43() else D7();
  L44():
    stop1 = ldf stop;
    check L45() else D8();
  D7():
    deopt 27 [r16];
  D8():
    deopt 29 [];
  L14(r20):
    r22 = `!`(r20);
    c2 = `as.logical`(r22);
    if c2 then L52() else L15();
  L43():
    goto L11(r16);
  L45():
    r17 = dyn stop1("invalid length(x)");
    check L46() else D9();
  L48():
    x3 = ld x;
    check L50() else D10();
  L49():
    r19 = dyn base3(<sym x>);
    goto L14(r19);
  D9():
    deopt 31 [r17];
  D10():
    deopt 36 [x3];
  L15():
    goto L16();
  L16():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L46():
    goto L13();
  L50():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r21 = dyn is_numeric(x4);
    check L51() else D11();
  L52():
    stop2 = ldf stop;
    check L53() else D12();
  D11():
    deopt 39 [r21];
  D12():
    deopt 42 [];
  L17(r26):
    st nb = r26;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L51():
    goto L14(r21);
  L53():
    r23 = dyn stop2("invalid 'x'");
    check L54() else D13();
  L56():
    nb1 = ld nb;
    check L58() else D14();
  L57():
    r25 = dyn base4(<sym nb>);
    goto L17(r25);
  D13():
    deopt 44 [r23];
  D14():
    deopt 49 [nb1];
  L18(r29):
    c3 = `as.logical`(r29);
    if c3 then L19(c3) else L64();
  L54():
    goto L16();
  L58():
    nb2 = force? nb1;
    checkMissing(nb2);
    as_integer1 = ldf `as.integer` in base;
    r27 = dyn as_integer1(nb2);
    check L59() else D15();
  L60():
    nb3 = ld nb;
    check L62() else D16();
  L61():
    r28 = dyn base5(<sym nb>);
    goto L18(r28);
  D15():
    deopt 52 [r27];
  D16():
    deopt 56 [nb3];
  L19(c4):
    c9 = `as.logical`(c4);
    if c9 then L67() else L20();
  L59():
    goto L17(r27);
  L62():
    nb4 = force? nb3;
    checkMissing(nb4);
    is_na1 = ldf `is.na` in base;
    r30 = dyn is_na1(nb4);
    check L63() else D17();
  L64():
    nb5 = ld nb;
    check L65() else D18();
  D17():
    deopt 59 [r30];
  D18():
    deopt 60 [c3, nb5];
  L20():
    goto L21();
  L21():
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L71() else D21();
  L63():
    goto L18(r30);
  L65():
    nb6 = force? nb5;
    checkMissing(nb6);
    r31 = `<=`(nb6, 0);
    c6 = `as.logical`(r31);
    c7 = `||`(c3, c6);
    goto L19(c7);
  L67():
    stop3 = ldf stop;
    check L68() else D19();
  D19():
    deopt 66 [];
  D21():
    deopt 74 ["double", l, "double"];
  L68():
    r32 = dyn stop3("invalid 'nb'");
    check L69() else D20();
  L71():
    r34 = dyn storage_mode__(l, NULL, "double");
    check L72() else D22();
  D20():
    deopt 68 [r32];
  D22():
    deopt 76 ["double", r34];
  L69():
    goto L21();
  L72():
    st x = r34;
    sym6 = ldf sqrt;
    base6 = ldf sqrt in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L22(r38, r39):
    r43 = `*`(r38, r39);
    n4 = ld n;
    check L77() else D25();
  L73():
    var = ldf var;
    check L75() else D23();
  L74():
    r37 = dyn base6(<lang var(x)>);
    goto L22(1.144, r37);
  D23():
    deopt 81 [1.144];
  D25():
    deopt 85 [r43, n4];
  L75():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r41 = dyn var(p3);
    check L76() else D24();
  L77():
    n5 = force? n4;
    checkMissing(n5);
    r44 = `^`(n5, -0.2);
    r45 = `*`(r43, r44);
    st hmax = r45;
    bw_pair_cnts = ldf bw_pair_cnts;
    check L78() else D26();
  D24():
    deopt 83 [1.144, r41];
  D26():
    deopt 92 [];
  L76():
    r42 = sqrt(r41);
    goto L22(1.144, r42);
  L78():
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p5 = prom<V +>{
      nb7 = ld nb;
      nb8 = force? nb7;
      checkMissing(nb8);
      return nb8;
    };
    p6 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      nb9 = ld nb;
      nb10 = force? nb9;
      checkMissing(nb10);
      r48 = `/`(nb10, 2.0);
      r49 = `>`(n7, r48);
      return r49;
    };
    r51 = dyn bw_pair_cnts(p4, p5, p6);
    check L79() else D27();
  D27():
    deopt 96 [r51];
  L79():
    st Z = r51;
    Z = ld Z;
    check L80() else D28();
  D28():
    deopt 98 [Z];
  L80():
    Z1 = force? Z;
    checkMissing(Z1);
    c10 = `is.object`(Z1);
    if c10 then L81() else L82(Z1);
  L23(dx1):
    st d = dx1;
    Z4 = ld Z;
    check L84() else D29();
  L81():
    dr = tryDispatchBuiltin.1("[[", Z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L83() else L82(dr);
  L82(Z3):
    __ = ldf `[[` in base;
    r52 = dyn __(Z3, 1);
    goto L23(r52);
  D29():
    deopt 104 [Z4];
  L83():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L84():
    Z5 = force? Z4;
    checkMissing(Z5);
    c11 = `is.object`(Z5);
    if c11 then L85() else L86(Z5);
  L24(dx3):
    st cnt = dx3;
    r54 = clos inner1031285476;
    st fbcv = r54;
    optimize = ldf optimize;
    check L88() else D30();
  L85():
    dr2 = tryDispatchBuiltin.1("[[", Z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L87() else L86(dr2);
  L86(Z7):
    __1 = ldf `[[` in base;
    r53 = dyn __1(Z7, 2);
    goto L24(r53);
  D30():
    deopt 114 [];
  L87():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L88():
    p7 = prom<V +>{
      fbcv = ld fbcv;
      fbcv1 = force? fbcv;
      checkMissing(fbcv1);
      return fbcv1;
    };
    p8 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      lower3 = ld lower;
      lower4 = force? lower3;
      checkMissing(lower4);
      upper1 = ld upper;
      upper2 = force? upper1;
      checkMissing(upper2);
      c12 = ldf c in base;
      r58 = dyn c12(lower4, upper2);
      goto L0(r58);
    L2():
      r56 = dyn base7(<sym lower>, <sym upper>);
      goto L0(r56);
    };
    p9 = prom<V +>{
      tol1 = ld tol;
      tol2 = force? tol1;
      checkMissing(tol2);
      return tol2;
    };
    r61 = dyn optimize[, , tol](p7, p8, p9);
    check L89() else D31();
  D31():
    deopt 119 [r61];
  L89():
    c13 = `is.object`(r61);
    if c13 then L91() else L92(r61);
  L90(dx5):
    st h = dx5;
    h = ld h;
    check L94() else D32();
  L91():
    dr4 = tryDispatchBuiltin.1("$", r61);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L93() else L92(dr4);
  L92(r63):
    r64 = `$`(r63, <sym minimum>);
    goto L90(r64);
  D32():
    deopt 122 [h];
  L93():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L90(dx4);
  L94():
    h1 = force? h;
    checkMissing(h1);
    lower5 = ld lower;
    check L95() else D33();
  D33():
    deopt 123 [h1, lower5];
  L95():
    lower6 = force? lower5;
    checkMissing(lower6);
    tol3 = ld tol;
    check L96() else D34();
  D34():
    deopt 124 [h1, lower6, tol3];
  L96():
    tol4 = force? tol3;
    checkMissing(tol4);
    r65 = `+`(lower6, tol4);
    r66 = `<`(h1, r65);
    c14 = `as.logical`(r66);
    if c14 then L25(c14) else L97();
  L25(c15):
    c20 = `as.logical`(c15);
    if c20 then L102() else L26();
  L97():
    h2 = ld h;
    check L98() else D35();
  D35():
    deopt 128 [c14, h2];
  L26():
    goto L27();
  L27():
    h4 = ld h;
    check L106() else D40();
  L98():
    h3 = force? h2;
    checkMissing(h3);
    upper3 = ld upper;
    check L99() else D36();
  L102():
    warning = ldf warning;
    check L103() else D38();
  D36():
    deopt 129 [c14, h3, upper3];
  D38():
    deopt 136 [];
  D40():
    deopt 141 [h4];
  L99():
    upper4 = force? upper3;
    checkMissing(upper4);
    tol5 = ld tol;
    check L100() else D37();
  L103():
    r69 = dyn warning("minimum occurred at one end of the range");
    check L104() else D39();
  L106():
    h5 = force? h4;
    checkMissing(h5);
    popenv;
    return h5;
  D37():
    deopt 130 [c14, h3, upper4, tol5];
  D39():
    deopt 138 [r69];
  L100():
    tol6 = force? tol5;
    checkMissing(tol6);
    r67 = `-`(upper4, tol6);
    r68 = `>`(h3, r67);
    c17 = `as.logical`(r68);
    c18 = `||`(c14, c17);
    goto L25(c18);
  L104():
    goto L27();
  }
}
fun inner1031285476(h) {
  (reg h:*) -+> V { var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_bw_bcv:*, reg C_bw_bcv1:V, reg n:*, reg n1:V, reg d:*, reg d1:V, reg cnt:*, reg cnt1:V, reg h1:*, reg h2:V, reg vargs:dots, reg r2:V |
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
    C_bw_bcv = ld C_bw_bcv;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_bw_bcv>, <sym n>, <sym d>, <sym cnt>, <sym h>);
    goto L0(r);
  D0():
    deopt 1 [C_bw_bcv];
  L3():
    C_bw_bcv1 = force? C_bw_bcv;
    checkMissing(C_bw_bcv1);
    n = ld n;
    check L4() else D1();
  D1():
    deopt 2 [C_bw_bcv1, n];
  L4():
    n1 = force? n;
    checkMissing(n1);
    d = ld d;
    check L5() else D2();
  D2():
    deopt 3 [C_bw_bcv1, n1, d];
  L5():
    d1 = force? d;
    checkMissing(d1);
    cnt = ld cnt;
    check L6() else D3();
  D3():
    deopt 4 [C_bw_bcv1, n1, d1, cnt];
  L6():
    cnt1 = force? cnt;
    checkMissing(cnt1);
    h1 = ld h;
    check L7() else D4();
  D4():
    deopt 5 [C_bw_bcv1, n1, d1, cnt1, h1];
  L7():
    h2 = force? h1;
    checkMissing(h2);
    vargs = dots[n1, d1, cnt1, h2];
    r2 = `.Call`(C_bw_bcv1, vargs, <missing>);
    goto L0(r2);
  }
}