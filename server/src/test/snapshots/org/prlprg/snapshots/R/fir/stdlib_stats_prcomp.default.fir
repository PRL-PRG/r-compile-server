fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4106172069;
    st `prcomp.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4106172069(x, retx, center, `scale.`, tol, `rank.`, `...`) {
  (reg x:*, reg retx:*, reg center:*, reg scale_:*, reg tol:*, reg rank_:*, reg ddd:dots) -+> V { var x:*, var retx:*, reg retx_isMissing:L, reg retx_orDefault:*, var center:*, reg center_isMissing:L, reg center_orDefault:*, var `scale.`:*, reg scale__isMissing:L, reg scale__orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, var `rank.`:*, reg rank__isMissing:L, reg rank__orDefault:*, var `...`:dots?, reg chkDots:cls, reg ddd1:dots?, reg r:V, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg scale:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg center1:*, reg center2:V, reg p2:p(V +), reg scale_1:*, reg scale_2:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg attr:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg attr1:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sc:*, reg sc1:V, reg r15:V, reg any:cls, reg r16:V, reg c:L, reg stop:cls, reg r17:V, reg nrow:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r20:V, reg ncol:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg rank_1:*, reg rank_2:V, reg c1:V, reg r25:V, reg c2:L, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg rank_3:*, reg rank_4:V, reg length:cls, reg r28:V, reg r29:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg rank_5:*, reg rank_6:V, reg is_finite:cls, reg r33:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg rank_7:*, reg rank_8:V, reg as_integer:cls, reg r37:V, reg r38:V, reg p8:p(V +), reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg rank_9:*, reg rank_10:V, reg as_integer1:cls, reg r45:V, reg n:*, reg n1:V, reg p9:*, reg p10:V, reg min:cls, reg r46:V, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg n2:*, reg n3:V, reg p11:*, reg p12:V, reg min1:cls, reg r49:V, reg svd:cls, reg x13:*, reg x14:V, reg p13:p(V +), reg k:*, reg k1:V, reg p14:p(V +), reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg k2:*, reg k3:V, reg r55:I, reg s:*, reg s1:V, reg c3:L, reg s3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg dx4:V, reg r58:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r59:V, reg dx7:V, reg r60:V, reg n4:*, reg n5:V, reg r61:V, reg max:cls, reg r62:V, reg r63:V, reg r64:V, reg l:*, reg c4:L, reg r66:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx8:V, reg dx9:V, reg r69:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r70:V, reg r71:V, reg tol1:*, reg tol2:V, reg c5:V, reg r72:V, reg c6:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg r74:V, reg s4:*, reg s5:V, reg c7:L, reg s7:V, reg dr4:V, reg dc2:L, reg dx10:V, reg dx11:V, reg r75:V, reg s8:*, reg s9:V, reg c8:L, reg dx13:V, reg s11:V, reg dr6:V, reg dc3:L, reg dx15:V, reg dx16:V, reg dx17:V, reg r76:V, reg c9:L, reg dx20:V, reg dx21:V, reg dr8:V, reg dc4:L, reg dx23:V, reg dx24:V, reg dx25:V, reg __:cls, reg r77:V, reg tol3:*, reg tol4:V, reg r78:V, reg r79:V, reg sum:cls, reg r80:V, reg rank:*, reg rank1:V, reg k4:*, reg k5:V, reg r81:V, reg c10:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r82:V, reg r83:V, reg rank2:*, reg rank3:V, reg r84:I, reg s12:*, reg s13:V, reg c11:L, reg s15:V, reg dr10:V, reg dc5:L, reg dx26:V, reg dx27:V, reg r85:V, reg c12:L, reg dx29:V, reg dr12:V, reg dc6:L, reg dx30:V, reg dx31:V, reg j:*, reg j1:V, reg __1:cls, reg r86:V, reg l3:*, reg c13:L, reg dx33:V, reg l5:*, reg dr14:V, reg dc7:L, reg dx35:V, reg dx36:V, reg dx37:V, reg r87:V, reg dx38:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r88:V, reg r89:V, reg colnames:cls, reg x15:*, reg x16:V, reg p15:p(V +), reg r91:V, reg paste0:cls, reg j2:*, reg j3:V, reg p16:p(V +), reg r93:V, reg list:cls, reg r94:V, reg l6:*, reg c14:L, reg r97:V, reg l9:*, reg r98:V, reg l10:*, reg dr16:V, reg dc8:L, reg dx40:V, reg r101:V, reg l12:*, reg r102:V, reg dx41:V, reg r103:V, reg dimnames__:cls, reg r104:V, reg c15:L, reg r106:V, reg l14:*, reg dr18:V, reg dc9:L, reg dx42:V, reg dx43:V, reg r109:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r110:V, reg r111:V, reg s16:*, reg s17:V, reg c16:L, reg s19:V, reg dr20:V, reg dc10:L, reg dx44:V, reg dx45:V, reg r112:V, reg s20:*, reg s21:V, reg c17:L, reg s23:V, reg dr22:V, reg dc11:L, reg dx46:V, reg dx47:V, reg r113:V, reg ____:cls, reg cen:*, reg cen1:V, reg p17:p(V +), reg r115:V, reg ____1:cls, reg sc2:*, reg sc3:V, reg p18:p(V +), reg r117:V, reg list1:cls, reg r118:V, reg retx1:*, reg retx2:V, reg c18:L, reg x17:*, reg x18:V, reg s24:*, reg s25:V, reg c19:L, reg s27:V, reg dr24:V, reg dc12:L, reg dx48:V, reg dx49:V, reg r119:V, reg ___:cls, reg r120:V, reg l15:*, reg c20:L, reg r122:V, reg l17:*, reg dr26:V, reg dc13:L, reg dx50:V, reg r124:V, reg dx51:V, reg r125:V, reg l18:*, reg class__:cls, reg r127:V, reg r128:*, reg r129:V |
    mkenv;
    st x = x;
    retx_isMissing = missing.0(retx);
    if retx_isMissing then L0(TRUE) else L0(retx);
  L0(retx_orDefault):
    st retx = retx_orDefault;
    center_isMissing = missing.0(center);
    if center_isMissing then L1(TRUE) else L1(center);
  L1(center_orDefault):
    st center = center_orDefault;
    scale__isMissing = missing.0(scale_);
    if scale__isMissing then L2(FALSE) else L2(scale_);
  L2(scale__orDefault):
    st `scale.` = scale__orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L3(NULL) else L3(tol);
  L3(tol_orDefault):
    st tol = tol_orDefault;
    rank__isMissing = missing.0(rank_);
    if rank__isMissing then L4(NULL) else L4(rank_);
  L4(rank__orDefault):
    st `rank.` = rank__orDefault;
    st `...` = ddd;
    chkDots = ldf chkDots;
    check L31() else D0();
  D0():
    deopt 1 [];
  L31():
    ddd1 = ld `...`;
    r = dyn chkDots[`...`](ddd1);
    check L32() else D1();
  D1():
    deopt 3 [r];
  L32():
    as_matrix = ldf `as.matrix`;
    check L33() else D2();
  D2():
    deopt 5 [];
  L33():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn as_matrix(p);
    check L34() else D3();
  D3():
    deopt 7 [r2];
  L34():
    st x = r2;
    scale = ldf scale;
    check L35() else D4();
  D4():
    deopt 10 [];
  L35():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      center1 = ld center;
      center2 = force? center1;
      checkMissing(center2);
      return center2;
    };
    p3 = prom<V +>{
      scale_1 = ld `scale.`;
      scale_2 = force? scale_1;
      checkMissing(scale_2);
      return scale_2;
    };
    r6 = dyn scale[, center, scale](p1, p2, p3);
    check L36() else D5();
  D5():
    deopt 16 [r6];
  L36():
    st x = r6;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L5(r8):
    st cen = r8;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L37():
    x5 = ld x;
    check L39() else D6();
  L38():
    r7 = dyn base(<sym x>, "scaled:center");
    goto L5(r7);
  D6():
    deopt 20 [x5];
  L6(r11):
    st sc = r11;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L39():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r9 = dyn attr(x6, "scaled:center");
    check L40() else D7();
  L41():
    x7 = ld x;
    check L43() else D8();
  L42():
    r10 = dyn base1(<sym x>, "scaled:scale");
    goto L6(r10);
  D7():
    deopt 24 [r9];
  D8():
    deopt 28 [x7];
  L7(r14):
    c = `as.logical`(r14);
    if c then L49() else L8();
  L40():
    goto L5(r9);
  L43():
    x8 = force? x7;
    checkMissing(x8);
    attr1 = ldf attr in base;
    r12 = dyn attr1(x8, "scaled:scale");
    check L44() else D9();
  L45():
    sc = ld sc;
    check L47() else D10();
  L46():
    r13 = dyn base2(<lang `==`(sc, 0.0)>);
    goto L7(r13);
  D9():
    deopt 32 [r12];
  D10():
    deopt 36 [sc];
  L8():
    goto L9();
  L9():
    nrow = ldf nrow;
    check L53() else D14();
  L44():
    goto L6(r12);
  L47():
    sc1 = force? sc;
    checkMissing(sc1);
    r15 = `==`(sc1, 0.0);
    any = ldf any in base;
    r16 = dyn any(r15);
    check L48() else D11();
  L49():
    stop = ldf stop;
    check L50() else D12();
  D11():
    deopt 41 [r16];
  D12():
    deopt 43 [];
  D14():
    deopt 49 [];
  L48():
    goto L7(r16);
  L50():
    r17 = dyn stop("cannot rescale a constant/zero column to unit variance");
    check L51() else D13();
  L53():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r20 = dyn nrow(p4);
    check L54() else D15();
  D13():
    deopt 45 [r17];
  D15():
    deopt 51 [r20];
  L51():
    goto L9();
  L54():
    st n = r20;
    ncol = ldf ncol;
    check L55() else D16();
  D16():
    deopt 54 [];
  L55():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r22 = dyn ncol(p5);
    check L56() else D17();
  D17():
    deopt 56 [r22];
  L56():
    st p = r22;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L10(r24):
    r25 = `!`(r24);
    c2 = `as.logical`(r25);
    if c2 then L60() else L11();
  L57():
    rank_1 = ld `rank.`;
    check L59() else D18();
  L58():
    r23 = dyn base3(<sym rank.>);
    goto L10(r23);
  D18():
    deopt 59 [rank_1];
  L11():
    sym9 = ldf min;
    base9 = ldf min in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L73() else L74();
  L14(r47):
    st k = r47;
    svd = ldf svd;
    check L78() else D29();
  L59():
    rank_2 = force? rank_1;
    checkMissing(rank_2);
    c1 = `==`(rank_2, NULL);
    goto L10(c1);
  L60():
    stopifnot = ldf stopifnot;
    check L61() else D19();
  D19():
    deopt 64 [];
  D29():
    deopt 93 [];
  L61():
    p6 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r27):
      r29 = `==`(r27, 1.0);
      return r29;
    L1():
      rank_3 = ld `rank.`;
      rank_4 = force? rank_3;
      checkMissing(rank_4);
      length = ldf length in base;
      r28 = dyn length(rank_4);
      goto L0(r28);
    L2():
      r26 = dyn base4(<sym rank.>);
      goto L0(r26);
    };
    p7 = prom<V +>{
      sym5 = ldf `is.finite`;
      base5 = ldf `is.finite` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      rank_5 = ld `rank.`;
      rank_6 = force? rank_5;
      checkMissing(rank_6);
      is_finite = ldf `is.finite` in base;
      r33 = dyn is_finite(rank_6);
      goto L0(r33);
    L2():
      r31 = dyn base5(<sym rank.>);
      goto L0(r31);
    };
    p8 = prom<V +>{
      sym6 = ldf `as.integer`;
      base6 = ldf `as.integer` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r36):
      r38 = `>`(r36, 0.0);
      return r38;
    L1():
      rank_7 = ld `rank.`;
      rank_8 = force? rank_7;
      checkMissing(rank_8);
      as_integer = ldf `as.integer` in base;
      r37 = dyn as_integer(rank_8);
      goto L0(r37);
    L2():
      r35 = dyn base6(<sym rank.>);
      goto L0(r35);
    };
    r40 = dyn stopifnot(p6, p7, p8);
    check L62() else D20();
  L73():
    n2 = ld n;
    check L75() else D26();
  L74():
    r48 = dyn base9(<sym n>, <sym p>);
    goto L14(r48);
  L78():
    p13 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p14 = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      return k1;
    };
    r52 = dyn svd[, nu, nv](p13, 0.0, p14);
    check L79() else D30();
  D20():
    deopt 68 [r40];
  D26():
    deopt 85 [n2];
  D30():
    deopt 99 [r52];
  L62():
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  L75():
    n3 = force? n2;
    checkMissing(n3);
    p11 = ld p;
    check L76() else D27();
  L79():
    st s = r52;
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L80() else L81();
  D27():
    deopt 87 [p11];
  L12(r42):
    goto L14(r42);
  L15(r54):
    st j = r54;
    s = ld s;
    check L83() else D32();
  L63():
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L65() else L66();
  L64():
    r41 = dyn base7(<lang as.integer(rank.)>, <sym n>, <sym p>);
    goto L12(r41);
  L76():
    p12 = force? p11;
    checkMissing(p12);
    min1 = ldf min in base;
    r49 = dyn min1(n3, p12);
    check L77() else D28();
  L80():
    k2 = ld k;
    check L82() else D31();
  L81():
    r53 = dyn base10(<sym k>);
    goto L15(r53);
  D28():
    deopt 90 [r49];
  D31():
    deopt 102 [k2];
  D32():
    deopt 106 [s];
  L13(r44):
    n = ld n;
    check L69() else D23();
  L65():
    rank_9 = ld `rank.`;
    check L67() else D21();
  L66():
    r43 = dyn base8(<sym rank.>);
    goto L13(r43);
  L77():
    goto L14(r49);
  L82():
    k3 = force? k2;
    checkMissing(k3);
    r55 = seq_len(k3);
    goto L15(r55);
  L83():
    s1 = force? s;
    checkMissing(s1);
    c3 = `is.object`(s1);
    if c3 then L85() else L86(s1);
  D21():
    deopt 73 [rank_9];
  D23():
    deopt 77 [n];
  L67():
    rank_10 = force? rank_9;
    checkMissing(rank_10);
    as_integer1 = ldf `as.integer` in base;
    r45 = dyn as_integer1(rank_10);
    check L68() else D22();
  L69():
    n1 = force? n;
    checkMissing(n1);
    p9 = ld p;
    check L70() else D24();
  L84(dx1):
    sym11 = ldf sqrt;
    base11 = ldf sqrt in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L88() else L89();
  L85():
    dr = tryDispatchBuiltin.1("$", s1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L87() else L86(dr);
  L86(s3):
    r56 = `$`(s3, <sym d>);
    goto L84(r56);
  D22():
    deopt 76 [r45];
  D24():
    deopt 79 [p9];
  L16(dx4, r58):
    r64 = `/`(dx4, r58);
    l = ld s;
    c4 = `is.object`(l);
    if c4 then L95() else L96(r64, l);
  L68():
    goto L13(r45);
  L70():
    p10 = force? p9;
    checkMissing(p10);
    min = ldf min in base;
    r46 = dyn min(r44, n1, p10);
    check L71() else D25();
  L87():
    dx = getTryDispatchBuiltinValue(dr);
    goto L84(dx);
  L88():
    sym12 = ldf max;
    base12 = ldf max in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L90() else L91();
  L89():
    r57 = dyn base11(<lang max(1.0, `-`(n, 1.0))>);
    goto L16(dx1, r57);
  D25():
    deopt 82 [r46];
  L17(dx7, r60):
    r63 = sqrt(r60);
    goto L16(dx7, r63);
  L71():
    goto L12(r46);
  L90():
    n4 = ld n;
    check L92() else D33();
  L91():
    r59 = dyn base12(1.0, <lang `-`(n, 1.0)>);
    goto L17(dx1, r59);
  L94(dx9):
    st s = dx9;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L98() else L99();
  L95():
    dr2 = tryDispatchBuiltin.0("$<-", l, r64);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L97() else L96(r64, dr2);
  L96(r66, l2):
    r69 = `$<-`(l2, <sym d>, r64);
    goto L94(r69);
  D33():
    deopt 112 [dx1, n4];
  L18(r71):
    r72 = `!`(r71);
    c6 = `as.logical`(r72);
    if c6 then L101() else L19();
  L92():
    n5 = force? n4;
    checkMissing(n5);
    r61 = `-`(n5, 1.0);
    max = ldf max in base;
    r62 = dyn max(1.0, r61);
    check L93() else D34();
  L97():
    dx8 = getTryDispatchBuiltinValue(dr2);
    goto L94(dx8);
  L98():
    tol1 = ld tol;
    check L100() else D35();
  L99():
    r70 = dyn base13(<sym tol>);
    goto L18(r70);
  D34():
    deopt 117 [dx1, r62];
  D35():
    deopt 124 [tol1];
  L19():
    goto L26();
  L26():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L140() else L141();
  L93():
    goto L17(dx1, r62);
  L100():
    tol2 = force? tol1;
    checkMissing(tol2);
    c5 = `==`(tol2, NULL);
    goto L18(c5);
  L101():
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L102() else L103();
  L20(r74):
    st rank = r74;
    rank = ld rank;
    check L119() else D40();
  L27(r89):
    l6 = ld s;
    c14 = `is.object`(l6);
    if c14 then L148() else L149(r89, l6, r89, l6);
  L102():
    s4 = ld s;
    check L104() else D36();
  L103():
    r73 = dyn base14(<lang `>`(`$`(s, d), `(`(`*`(`[`(`$`(s, d), 1), tol)))>);
    goto L20(r73);
  L140():
    colnames = ldf colnames;
    check L142() else D45();
  L141():
    r88 = dyn base16(<lang colnames(x)>, <lang paste0("PC", j)>);
    goto L27(r88);
  D36():
    deopt 130 [s4];
  D40():
    deopt 144 [rank];
  D45():
    deopt 174 [];
  L104():
    s5 = force? s4;
    checkMissing(s5);
    c7 = `is.object`(s5);
    if c7 then L106() else L107(s5);
  L119():
    rank1 = force? rank;
    checkMissing(rank1);
    k4 = ld k;
    check L120() else D41();
  L142():
    p15 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r91 = dyn colnames(p15);
    check L143() else D46();
  L147(r101, l12, r102, dx41):
    dimnames__ = ldf `dimnames<-`;
    check L151() else D50();
  L148():
    dr16 = tryDispatchBuiltin.1("$", l6);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L150() else L149(r89, l6, r89, dr16);
  L149(r97, l9, r98, l10):
    r103 = `$`(l10, <sym v>);
    goto L147(r97, l9, r98, r103);
  D41():
    deopt 145 [rank1, k4];
  D46():
    deopt 176 [r91];
  D50():
    deopt 188 [r101, l12, dx41, r102];
  L105(dx11):
    s8 = ld s;
    check L109() else D37();
  L106():
    dr4 = tryDispatchBuiltin.1("$", s5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L108() else L107(dr4);
  L107(s7):
    r75 = `$`(s7, <sym d>);
    goto L105(r75);
  L120():
    k5 = force? k4;
    checkMissing(k5);
    r81 = `<`(rank1, k5);
    c10 = `as.logical`(r81);
    if c10 then L121() else L22();
  L143():
    paste0 = ldf paste0;
    check L144() else D47();
  L150():
    dx40 = getTryDispatchBuiltinValue(dr16);
    goto L147(r89, l6, r89, dx40);
  L151():
    r104 = dyn dimnames__(dx41, NULL, r102);
    check L152() else D51();
  D37():
    deopt 132 [dx11, s8];
  D47():
    deopt 178 [];
  D51():
    deopt 190 [r101, l12, r104];
  L22():
    goto L25(NULL);
  L25(dx38):
    goto L26();
  L108():
    dx10 = getTryDispatchBuiltinValue(dr4);
    goto L105(dx10);
  L109():
    s9 = force? s8;
    checkMissing(s9);
    c8 = `is.object`(s9);
    if c8 then L111() else L112(dx11, s9);
  L121():
    sym15 = ldf seq_len;
    base15 = ldf seq_len in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L122() else L123();
  L144():
    p16 = prom<V +>{
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      return j3;
    };
    r93 = dyn paste0("PC", p16);
    check L145() else D48();
  L152():
    c15 = `is.object`(l12);
    if c15 then L154() else L155(r101, l12);
  D48():
    deopt 181 [r93];
  L23(r83):
    st j = r83;
    s12 = ld s;
    check L125() else D43();
  L110(dx16, dx17):
    c9 = `is.object`(dx17);
    if c9 then L114() else L115(dx16, dx17);
  L111():
    dr6 = tryDispatchBuiltin.1("$", s9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L113() else L112(dx11, dr6);
  L112(dx13, s11):
    r76 = `$`(s11, <sym d>);
    goto L110(dx13, r76);
  L122():
    rank2 = ld rank;
    check L124() else D42();
  L123():
    r82 = dyn base15(<lang `<-`(k, rank)>);
    goto L23(r82);
  L145():
    list = ldf list in base;
    r94 = dyn list(r91, r93);
    check L146() else D49();
  L153(dx43):
    st s = dx43;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L157() else L158();
  L154():
    dr18 = tryDispatchBuiltin.0("$<-", l12, r104);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L156() else L155(r101, dr18);
  L155(r106, l14):
    r109 = `$<-`(l14, <sym v>, r104);
    goto L153(r109);
  D42():
    deopt 149 [rank2];
  D43():
    deopt 154 [s12];
  D49():
    deopt 183 [r94];
  L21(dx24, dx25):
    tol3 = ld tol;
    check L117() else D38();
  L28(r111):
    st r = r111;
    retx1 = ld retx;
    check L174() else D59();
  L113():
    dx15 = getTryDispatchBuiltinValue(dr6);
    goto L110(dx11, dx15);
  L114():
    dr8 = tryDispatchBuiltin.1("[", dx17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L116() else L115(dx16, dr8);
  L115(dx20, dx21):
    __ = ldf `[` in base;
    r77 = dyn __(dx21, 1);
    goto L21(dx20, r77);
  L124():
    rank3 = force? rank2;
    checkMissing(rank3);
    st k = rank3;
    r84 = seq_len(rank3);
    goto L23(r84);
  L125():
    s13 = force? s12;
    checkMissing(s13);
    c11 = `is.object`(s13);
    if c11 then L127() else L128(s13);
  L146():
    goto L27(r94);
  L156():
    dx42 = getTryDispatchBuiltinValue(dr18);
    goto L153(dx42);
  L157():
    s16 = ld s;
    check L159() else D52();
  L158():
    r110 = dyn base17[sdev, rotation, center, scale](<lang `$`(s, d)>, <lang `$`(s, v)>, <lang `%||%`(cen, FALSE)>, <lang `%||%`(sc, FALSE)>);
    goto L28(r110);
  D38():
    deopt 137 [dx24, dx25, tol3];
  D52():
    deopt 195 [s16];
  D59():
    deopt 218 [retx1];
  L116():
    dx23 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx16, dx23);
  L117():
    tol4 = force? tol3;
    checkMissing(tol4);
    r78 = `*`(dx25, tol4);
    r79 = `>`(dx24, r78);
    sum = ldf sum in base;
    r80 = dyn sum(r79);
    check L118() else D39();
  L126(dx27):
    c12 = `is.object`(dx27);
    if c12 then L130() else L131(dx27);
  L127():
    dr10 = tryDispatchBuiltin.1("$", s13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L129() else L128(dr10);
  L128(s15):
    r85 = `$`(s15, <sym v>);
    goto L126(r85);
  L159():
    s17 = force? s16;
    checkMissing(s17);
    c16 = `is.object`(s17);
    if c16 then L161() else L162(s17);
  L174():
    retx2 = force? retx1;
    checkMissing(retx2);
    c18 = `as.logical`(retx2);
    if c18 then L175() else L29();
  D39():
    deopt 142 [r80];
  L24(dx31):
    l3 = ld s;
    c13 = `is.object`(l3);
    if c13 then L135() else L136(dx31, l3);
  L29():
    goto L30();
  L30():
    l18 = ld r;
    class__ = ldf `class<-`;
    check L188() else D63();
  L118():
    goto L20(r80);
  L129():
    dx26 = getTryDispatchBuiltinValue(dr10);
    goto L126(dx26);
  L130():
    dr12 = tryDispatchBuiltin.1("[", dx27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L132() else L131(dr12);
  L131(dx29):
    j = ld j;
    check L133() else D44();
  L160(dx45):
    s20 = ld s;
    check L164() else D53();
  L161():
    dr20 = tryDispatchBuiltin.1("$", s17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L163() else L162(dr20);
  L162(s19):
    r112 = `$`(s19, <sym d>);
    goto L160(r112);
  L175():
    x17 = ld x;
    check L176() else D60();
  D44():
    deopt 158 [dx29, j];
  D53():
    deopt 199 [s20];
  D60():
    deopt 221 [x17];
  D63():
    deopt 236 ["prcomp", l18, "prcomp"];
  L132():
    dx30 = getTryDispatchBuiltinValue(dr12);
    goto L24(dx30);
  L133():
    j1 = force? j;
    __1 = ldf `[` in base;
    r86 = dyn __1(dx27, <missing>, j1, FALSE);
    goto L24(r86);
  L134(dx36, dx37):
    st s = dx37;
    goto L25(dx36);
  L135():
    dr14 = tryDispatchBuiltin.0("$<-", l3, dx31);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L137() else L136(dx31, dr14);
  L136(dx33, l5):
    r87 = `$<-`(l5, <sym v>, dx31);
    goto L134(dx33, r87);
  L163():
    dx44 = getTryDispatchBuiltinValue(dr20);
    goto L160(dx44);
  L164():
    s21 = force? s20;
    checkMissing(s21);
    c17 = `is.object`(s21);
    if c17 then L166() else L167(s21);
  L176():
    x18 = force? x17;
    checkMissing(x18);
    s24 = ld s;
    check L177() else D61();
  L188():
    r127 = dyn class__(l18, NULL, "prcomp");
    check L189() else D64();
  D61():
    deopt 223 [s24];
  D64():
    deopt 238 ["prcomp", r127];
  L137():
    dx35 = getTryDispatchBuiltinValue(dr14);
    goto L134(dx31, dx35);
  L165(dx47):
    ____ = ldf `%||%`;
    check L169() else D54();
  L166():
    dr22 = tryDispatchBuiltin.1("$", s21);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L168() else L167(dr22);
  L167(s23):
    r113 = `$`(s23, <sym v>);
    goto L165(r113);
  L177():
    s25 = force? s24;
    checkMissing(s25);
    c19 = `is.object`(s25);
    if c19 then L179() else L180(s25);
  L189():
    st r = r127;
    r128 = ld r;
    check L190() else D65();
  D54():
    deopt 204 [];
  D65():
    deopt 240 [r128];
  L168():
    dx46 = getTryDispatchBuiltinValue(dr22);
    goto L165(dx46);
  L169():
    p17 = prom<V +>{
      cen = ld cen;
      cen1 = force? cen;
      checkMissing(cen1);
      return cen1;
    };
    r115 = dyn ____(p17, FALSE);
    check L170() else D55();
  L178(dx49):
    ___ = ldf `%*%` in base;
    r120 = dyn ___(x18, dx49);
    check L182() else D62();
  L179():
    dr24 = tryDispatchBuiltin.1("$", s25);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L181() else L180(dr24);
  L180(s27):
    r119 = `$`(s27, <sym v>);
    goto L178(r119);
  L190():
    r129 = force? r128;
    checkMissing(r129);
    popenv;
    return r129;
  D55():
    deopt 207 [r115];
  D62():
    deopt 227 [r120];
  L170():
    ____1 = ldf `%||%`;
    check L171() else D56();
  L181():
    dx48 = getTryDispatchBuiltinValue(dr24);
    goto L178(dx48);
  L182():
    l15 = ld r;
    c20 = `is.object`(l15);
    if c20 then L184() else L185(r120, l15);
  D56():
    deopt 210 [];
  L171():
    p18 = prom<V +>{
      sc2 = ld sc;
      sc3 = force? sc2;
      checkMissing(sc3);
      return sc3;
    };
    r117 = dyn ____1(p18, FALSE);
    check L172() else D57();
  L183(r124, dx51):
    st r = dx51;
    goto L30();
  L184():
    dr26 = tryDispatchBuiltin.0("$<-", l15, r120);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L186() else L185(r120, dr26);
  L185(r122, l17):
    r125 = `$<-`(l17, <sym x>, r120);
    goto L183(r122, r125);
  D57():
    deopt 213 [r117];
  L172():
    list1 = ldf list in base;
    r118 = dyn list1(dx45, dx47, r115, r117);
    check L173() else D58();
  L186():
    dx50 = getTryDispatchBuiltinValue(dr26);
    goto L183(r120, dx50);
  D58():
    deopt 216 [r118];
  L173():
    goto L28(r118);
  }
}