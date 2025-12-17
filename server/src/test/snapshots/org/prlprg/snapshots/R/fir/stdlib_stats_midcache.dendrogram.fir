fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1683484624;
    st `midcache.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1683484624(x, type, quiet) {
  (reg x:*, reg type:*, reg quiet:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, reg match_arg:cls, reg type1:*, reg type2:V, reg p:p(V +), reg r1:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg inherits:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg getOption:cls, reg r7:V, reg r8:V, reg r9:cls, reg setmid:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg type3:*, reg type4:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("hclust") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L1(FALSE) else L1(quiet);
  L1(quiet_orDefault):
    st quiet = quiet_orDefault;
    match_arg = ldf `match.arg`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r1 = dyn match_arg(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st type = r1;
    stopifnot = ldf stopifnot;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p1 = prom<V +>{
      sym = ldf inherits;
      base = ldf inherits in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      inherits = ldf inherits in base;
      r4 = dyn inherits(x2, "dendrogram", FALSE);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>, "dendrogram");
      goto L0(r2);
    };
    r6 = dyn stopifnot(p1);
    check L5() else D3();
  D3():
    deopt 8 [r6];
  L5():
    getOption = ldf getOption;
    check L6() else D4();
  D4():
    deopt 10 [];
  L6():
    r7 = dyn getOption("verbose", 0.0);
    check L7() else D5();
  D5():
    deopt 13 [r7];
  L7():
    r8 = `>=`(r7, 2.0);
    st verbose = r8;
    r9 = clos inner3785875086;
    st setmid = r9;
    setmid = ldf setmid;
    check L8() else D6();
  D6():
    deopt 21 [];
  L8():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    r12 = dyn setmid[, type](p2, p3);
    check L9() else D7();
  D7():
    deopt 25 [r12];
  L9():
    popenv;
    return r12;
  }
}
fun inner3785875086(d, type) {
  (reg d:*, reg type:*) -+> V { var d:*, var type:*, reg integer:cls, reg r:V, reg integer1:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg is_leaf:cls, reg d1:*, reg d2:V, reg p:p(V +), reg r6:V, reg r7:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg d3:*, reg d4:V, reg length:cls, reg r10:V, reg k:*, reg k1:V, reg r11:V, reg c1:L, reg stop:cls, reg r12:V, reg depth:*, reg depth1:V, reg r14:V, reg verbose:*, reg verbose1:V, reg c2:L, reg cat:cls, reg sprintf:cls, reg depth2:*, reg depth3:V, reg p1:p(V +), reg k2:*, reg k3:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg r19:V, reg k4:*, reg k5:V, reg l:*, reg c3:L, reg k7:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg depth4:*, reg depth5:V, reg ___:cls, reg r21:V, reg storage_mode:cls, reg jj:*, reg jj1:V, reg p4:p(V +), reg r23:V, reg storage_mode1:cls, reg kk:*, reg kk1:V, reg p5:p(V +), reg r25:V, reg r26:V, reg c4:L, reg storage_mode2:cls, reg kk2:*, reg kk3:V, reg p6:p(V +), reg r28:V, reg l3:*, reg storage_mode__:cls, reg r29:V, reg d5:*, reg d6:V, reg l4:*, reg c5:L, reg d8:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg depth6:*, reg depth7:V, reg ____:cls, reg r31:V, reg d11:*, reg d12:V, reg c6:L, reg d14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg l7:*, reg c7:L, reg d16:V, reg r33:I, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg d18:V, reg r35:I, reg dx7:V, reg depth8:*, reg depth9:V, reg ___1:cls, reg r36:V, reg __:cls, reg r37:V, reg depth10:*, reg depth11:V, reg c8:L, reg kk4:*, reg kk5:V, reg c9:L, reg kk7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg depth12:*, reg depth13:V, reg __1:cls, reg r39:V, reg jj2:*, reg jj3:V, reg c10:L, reg jj5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg depth14:*, reg depth15:V, reg __2:cls, reg r40:V, reg dd:*, reg dd1:V, reg c11:L, reg dd3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg depth16:*, reg depth17:V, reg __3:cls, reg r41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg d19:*, reg d20:V, reg unclass:cls, reg r44:V, reg l10:*, reg c12:L, reg r46:V, reg l12:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg j:*, reg j1:V, reg ____1:cls, reg r49:V, reg j2:*, reg j3:V, reg k10:*, reg k11:V, reg r50:V, reg c13:L, reg depth18:*, reg depth19:V, reg r52:V, reg verbose2:*, reg verbose3:V, reg c14:L, reg cat1:cls, reg sprintf1:cls, reg depth20:*, reg depth21:V, reg p7:p(V +), reg k12:*, reg k13:V, reg p8:p(V +), reg r55:V, reg p9:p(V +), reg r57:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg r60:V, reg vapply:cls, reg r61:*, reg r62:V, reg p10:p(V +), reg _midDend:*, reg _midDend1:V, reg p11:p(V +), reg r65:V, reg sum:cls, reg r66:V, reg quiet:*, reg quiet1:V, reg r67:V, reg c15:L, reg c17:V, reg type1:*, reg type2:V, reg r68:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg k14:*, reg k15:V, reg r69:V, reg c24:L, reg c25:V, reg c27:L, reg warning:cls, reg r70:V, reg _memberDend:cls, reg r72:*, reg r73:V, reg c28:L, reg r75:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r76:V, reg p12:p(V +), reg r78:V, reg midS:*, reg midS1:V, reg r79:V, reg r80:V, reg l13:*, reg attr__:cls, reg r81:V, reg r82:*, reg r83:V, reg depth22:*, reg depth23:V, reg r84:V, reg c29:L, reg r86:*, reg r87:V, reg l14:*, reg c30:L, reg r89:V, reg l16:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg depth24:*, reg depth25:V, reg ____2:cls, reg r92:V, reg r93:*, reg r94:V, reg c31:L, reg r96:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg j4:*, reg j5:V, reg r97:V, reg l17:*, reg c32:L, reg r100:V, reg r101:V, reg l19:*, reg dr22:V, reg dc11:L, reg dx22:V, reg r104:V, reg r105:V, reg dx23:V, reg depth26:*, reg depth27:V, reg ___2:cls, reg r106:V, reg __5:cls, reg r107:V, reg d21:*, reg d22:V |
    mkenv;
    st d = d;
    st type = type;
    st depth = 0;
    integer = ldf integer;
    check L37() else D0();
  D0():
    deopt 4 [];
  L37():
    r = dyn integer();
    check L38() else D1();
  D1():
    deopt 5 [r];
  L38():
    st kk = r;
    integer1 = ldf integer;
    check L39() else D2();
  D2():
    deopt 8 [];
  L39():
    r1 = dyn integer1();
    check L40() else D3();
  D3():
    deopt 9 [r1];
  L40():
    st jj = r1;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L0(r3):
    st dd = r3;
    goto L13();
  L41():
    list = ldf list in base;
    r4 = dyn list();
    check L43() else D4();
  L42():
    r2 = dyn base();
    goto L0(r2);
  D4():
    deopt 14 [r4];
  L13():
    is_leaf = ldf `is.leaf`;
    check L44() else D5();
  L43():
    goto L0(r4);
  D5():
    deopt 17 [];
  L44():
    p = prom<V +>{
      d1 = ld d;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    r6 = dyn is_leaf(p);
    check L45() else D6();
  D6():
    deopt 19 [r6];
  L45():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L46() else L1();
  L1():
    goto L30();
  L46():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L2(r9):
    st k = r9;
    k = ld k;
    check L51() else D9();
  L30():
    depth10 = ld depth;
    check L92() else D30();
  L47():
    d3 = ld d;
    check L49() else D7();
  L48():
    r8 = dyn base1(<sym d>);
    goto L2(r8);
  D7():
    deopt 23 [d3];
  D9():
    deopt 28 [k];
  D30():
    deopt 101 [depth10];
  L49():
    d4 = force? d3;
    checkMissing(d4);
    length = ldf length in base;
    r10 = dyn length(d4);
    check L50() else D8();
  L51():
    k1 = force? k;
    checkMissing(k1);
    r11 = `<`(k1, 1.0);
    c1 = `as.logical`(r11);
    if c1 then L52() else L3();
  L92():
    depth11 = force? depth10;
    checkMissing(depth11);
    c8 = `as.logical`(depth11);
    if c8 then L93() else L15();
  D8():
    deopt 26 [r10];
  L3():
    goto L4();
  L4():
    depth = ld depth;
    check L56() else D12();
  L15():
    depth22 = ld depth;
    check L151() else D60();
  L50():
    goto L2(r10);
  L52():
    stop = ldf stop;
    check L53() else D10();
  L93():
    kk4 = ld kk;
    check L94() else D31();
  D10():
    deopt 33 [];
  D12():
    deopt 38 [depth];
  D31():
    deopt 103 [kk4];
  D60():
    deopt 203 [depth22];
  L53():
    r12 = dyn stop("dendrogram node with non-positive #{branches}");
    check L54() else D11();
  L56():
    depth1 = force? depth;
    checkMissing(depth1);
    r14 = `+`(depth1, 1);
    st depth = r14;
    verbose = ld verbose;
    check L57() else D13();
  L94():
    kk5 = force? kk4;
    checkMissing(kk5);
    c9 = `is.object`(kk5);
    if c9 then L95() else L96(kk5);
  L151():
    depth23 = force? depth22;
    checkMissing(depth23);
    r84 = `!`(depth23);
    c29 = `as.logical`(r84);
    if c29 then L152() else L31();
  D11():
    deopt 35 [r12];
  D13():
    deopt 43 [verbose];
  L16(dx9):
    st k = dx9;
    jj2 = ld jj;
    check L99() else D33();
  L31():
    r86 = ld r;
    check L155() else D61();
  L54():
    goto L4();
  L57():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c2 = `as.logical`(verbose1);
    if c2 then L58() else L5();
  L95():
    dr8 = tryDispatchBuiltin.1("[", kk5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L97() else L96(dr8);
  L96(kk7):
    depth12 = ld depth;
    check L98() else D32();
  L152():
    d21 = ld d;
    check L170() else D66();
  D32():
    deopt 105 [kk7, depth12];
  D33():
    deopt 109 [jj2];
  D61():
    deopt 210 [r86];
  D66():
    deopt 235 [d21];
  L5():
    goto L6();
  L6():
    k4 = ld k;
    check L62() else D16();
  L58():
    cat = ldf cat;
    check L59() else D14();
  L97():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L16(dx8);
  L98():
    depth13 = force? depth12;
    __1 = ldf `[` in base;
    r39 = dyn __1(kk7, depth13);
    goto L16(r39);
  L99():
    jj3 = force? jj2;
    checkMissing(jj3);
    c10 = `is.object`(jj3);
    if c10 then L100() else L101(jj3);
  L155():
    r87 = force? r86;
    checkMissing(r87);
    l14 = ld dd;
    c30 = `is.object`(l14);
    if c30 then L156() else L157(r87, l14);
  L170():
    d22 = force? d21;
    checkMissing(d22);
    popenv;
    return d22;
  D14():
    deopt 46 [];
  D16():
    deopt 51 [k4];
  L17(dx11):
    st j = dx11;
    dd = ld dd;
    check L104() else D35();
  L34(dx19):
    st dd = dx19;
    r93 = ld r;
    check L160() else D63();
  L59():
    p3 = prom<V +>{
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        depth2 = ld depth;
        depth3 = force? depth2;
        checkMissing(depth3);
        return depth3;
      };
      p2 = prom<V +>{
        k2 = ld k;
        k3 = force? k2;
        checkMissing(k3);
        return k3;
      };
      r17 = dyn sprintf(" depth(+)=%4d, k=%d\n", p1, p2);
      return r17;
    };
    r19 = dyn cat(p3);
    check L60() else D15();
  L62():
    k5 = force? k4;
    checkMissing(k5);
    l = ld kk;
    c3 = `is.object`(l);
    if c3 then L63() else L64(k5, l);
  L100():
    dr10 = tryDispatchBuiltin.1("[", jj3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L102() else L101(dr10);
  L101(jj5):
    depth14 = ld depth;
    check L103() else D34();
  L156():
    dr18 = tryDispatchBuiltin.0("[[<-", l14, r87);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L158() else L157(r87, dr18);
  L157(r89, l16):
    depth24 = ld depth;
    check L159() else D62();
  D15():
    deopt 48 [r19];
  D34():
    deopt 111 [jj5, depth14];
  D35():
    deopt 115 [dd];
  D62():
    deopt 213 [r89, l16, r87, depth24];
  D63():
    deopt 217 [r93];
  L7(dx1):
    st kk = dx1;
    storage_mode = ldf `storage.mode`;
    check L67() else D18();
  L60():
    goto L6();
  L63():
    dr = tryDispatchBuiltin.0("[<-", l, k5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(k5, dr);
  L64(k7, l2):
    depth4 = ld depth;
    check L66() else D17();
  L102():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L17(dx10);
  L103():
    depth15 = force? depth14;
    __2 = ldf `[` in base;
    r40 = dyn __2(jj5, depth15);
    goto L17(r40);
  L104():
    dd1 = force? dd;
    checkMissing(dd1);
    c11 = `is.object`(dd1);
    if c11 then L105() else L106(dd1);
  L158():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L34(dx18);
  L159():
    depth25 = force? depth24;
    ____2 = ldf `[[<-` in base;
    r92 = dyn ____2(l16, r87, depth25);
    goto L34(r92);
  L160():
    r94 = force? r93;
    checkMissing(r94);
    c31 = `is.object`(r94);
    if c31 then L161() else L162(r94);
  D17():
    deopt 54 [k7, l2, k5, depth4];
  D18():
    deopt 59 [];
  L18(dx13):
    st r = dx13;
    sym2 = ldf unclass;
    base2 = ldf unclass in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L109() else L110();
  L35(dx21):
    st d = dx21;
    goto L13();
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L66():
    depth5 = force? depth4;
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l2, k5, depth5);
    goto L7(r21);
  L67():
    p4 = prom<V +>{
      jj = ld jj;
      jj1 = force? jj;
      checkMissing(jj1);
      return jj1;
    };
    r23 = dyn storage_mode(p4);
    check L68() else D19();
  L105():
    dr12 = tryDispatchBuiltin.1("[[", dd1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L107() else L106(dr12);
  L106(dd3):
    depth16 = ld depth;
    check L108() else D36();
  L161():
    dr20 = tryDispatchBuiltin.1("[[", r94);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L163() else L162(dr20);
  L162(r96):
    j4 = ld j;
    check L164() else D64();
  D19():
    deopt 61 [r23];
  D36():
    deopt 117 [dd3, depth16];
  D64():
    deopt 220 [r96, j4];
  L19(r43):
    l10 = ld r;
    c12 = `is.object`(l10);
    if c12 then L113() else L114(r43, l10);
  L68():
    storage_mode1 = ldf `storage.mode`;
    check L69() else D20();
  L107():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L18(dx12);
  L108():
    depth17 = force? depth16;
    __3 = ldf `[[` in base;
    r41 = dyn __3(dd3, depth17);
    goto L18(r41);
  L109():
    d19 = ld d;
    check L111() else D37();
  L110():
    r42 = dyn base2(<sym d>);
    goto L19(r42);
  L163():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L35(dx20);
  L164():
    j5 = force? j4;
    checkMissing(j5);
    r97 = `+`(j5, 1);
    l17 = ld jj;
    c32 = `is.object`(l17);
    if c32 then L165() else L166(r96, r97, l17);
  D20():
    deopt 62 [r23];
  D37():
    deopt 123 [d19];
  L20(dx15):
    st r = dx15;
    j2 = ld j;
    check L117() else D40();
  L36(r104, r105, dx23):
    st jj = dx23;
    __5 = ldf `[[` in base;
    r107 = dyn __5(r104, r105);
    goto L35(r107);
  L69():
    p5 = prom<V +>{
      kk = ld kk;
      kk1 = force? kk;
      checkMissing(kk1);
      return kk1;
    };
    r25 = dyn storage_mode1(p5);
    check L70() else D21();
  L111():
    d20 = force? d19;
    checkMissing(d20);
    unclass = ldf unclass in base;
    r44 = dyn unclass(d20);
    check L112() else D38();
  L113():
    dr14 = tryDispatchBuiltin.0("[[<-", l10, r43);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L115() else L114(r43, dr14);
  L114(r46, l12):
    j = ld j;
    check L116() else D39();
  L165():
    dr22 = tryDispatchBuiltin.0("[<-", l17, r97);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L167() else L166(r96, r97, dr22);
  L166(r100, r101, l19):
    depth26 = ld depth;
    check L168() else D65();
  D21():
    deopt 64 [r23, r25];
  D38():
    deopt 126 [r44];
  D39():
    deopt 128 [r46, l12, r43, j];
  D40():
    deopt 132 [j2];
  D65():
    deopt 225 [r100, r101, l19, r97, depth26];
  L70():
    r26 = `!=`(r23, r25);
    c4 = `as.logical`(r26);
    if c4 then L71() else L8();
  L112():
    goto L19(r44);
  L115():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L20(dx14);
  L116():
    j1 = force? j;
    ____1 = ldf `[[<-` in base;
    r49 = dyn ____1(l12, r43, j1);
    goto L20(r49);
  L117():
    j3 = force? j2;
    checkMissing(j3);
    k10 = ld k;
    check L118() else D41();
  L167():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L36(r96, r97, dx22);
  L168():
    depth27 = force? depth26;
    ___2 = ldf `[<-` in base;
    r106 = dyn ___2(l19, r97, depth27);
    goto L36(r100, r101, r106);
  D41():
    deopt 133 [j3, k10];
  L8():
    goto L9();
  L9():
    d5 = ld d;
    check L77() else D26();
  L71():
    storage_mode2 = ldf `storage.mode`;
    check L72() else D22();
  L118():
    k11 = force? k10;
    checkMissing(k11);
    r50 = `<`(j3, k11);
    c13 = `as.logical`(r50);
    if c13 then L119() else L21();
  D22():
    deopt 67 [];
  D26():
    deopt 77 [d5];
  L21():
    depth18 = ld depth;
    check L122() else D42();
  L72():
    p6 = prom<V +>{
      kk2 = ld kk;
      kk3 = force? kk2;
      checkMissing(kk3);
      return kk3;
    };
    r28 = dyn storage_mode2(p6);
    check L73() else D23();
  L77():
    d6 = force? d5;
    checkMissing(d6);
    l4 = ld dd;
    c5 = `is.object`(l4);
    if c5 then L78() else L79(d6, l4);
  L119():
    goto L15();
  D23():
    deopt 69 [r28];
  D42():
    deopt 140 [depth18];
  L10(dx3):
    st dd = dx3;
    d11 = ld d;
    check L82() else D28();
  L73():
    l3 = ld jj;
    storage_mode__ = ldf `storage.mode<-`;
    check L74() else D24();
  L78():
    dr2 = tryDispatchBuiltin.0("[[<-", l4, d6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L80() else L79(d6, dr2);
  L79(d8, l6):
    depth6 = ld depth;
    check L81() else D27();
  L122():
    depth19 = force? depth18;
    checkMissing(depth19);
    r52 = `-`(depth19, 1);
    st depth = r52;
    verbose2 = ld verbose;
    check L123() else D43();
  D24():
    deopt 71 [r28, l3, r28];
  D27():
    deopt 80 [d8, l6, d6, depth6];
  D28():
    deopt 84 [d11];
  D43():
    deopt 145 [verbose2];
  L74():
    r29 = dyn storage_mode__(l3, NULL, r28);
    check L75() else D25();
  L80():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L81():
    depth7 = force? depth6;
    ____ = ldf `[[<-` in base;
    r31 = dyn ____(l6, d6, depth7);
    goto L10(r31);
  L82():
    d12 = force? d11;
    checkMissing(d12);
    c6 = `is.object`(d12);
    if c6 then L83() else L84(d12);
  L123():
    verbose3 = force? verbose2;
    checkMissing(verbose3);
    c14 = `as.logical`(verbose3);
    if c14 then L124() else L23();
  D25():
    deopt 73 [r28, r29];
  L11(dx5):
    st d = dx5;
    goto L13();
  L23():
    goto L24();
  L24():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L128() else L129();
  L75():
    st jj = r29;
    goto L9();
  L83():
    dr4 = tryDispatchBuiltin.1("[[", d12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L85() else L84(dr4);
  L84(d14):
    l7 = ld jj;
    c7 = `is.object`(l7);
    if c7 then L86() else L87(d14, 1, l7);
  L124():
    cat1 = ldf cat;
    check L125() else D44();
  D44():
    deopt 148 [];
  L12(d18, r35, dx7):
    st jj = dx7;
    __ = ldf `[[` in base;
    r37 = dyn __(d18, r35);
    goto L11(r37);
  L25(r60):
    st midS = r60;
    quiet = ld quiet;
    check L133() else D49();
  L85():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L86():
    dr6 = tryDispatchBuiltin.0("[<-", l7, 1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L88() else L87(d14, 1, dr6);
  L87(d16, r33, l9):
    depth8 = ld depth;
    check L89() else D29();
  L125():
    p9 = prom<V +>{
      sprintf1 = ldf sprintf;
      p7 = prom<V +>{
        depth20 = ld depth;
        depth21 = force? depth20;
        checkMissing(depth21);
        return depth21;
      };
      p8 = prom<V +>{
        k12 = ld k;
        k13 = force? k12;
        checkMissing(k13);
        return k13;
      };
      r55 = dyn sprintf1(" depth(-)=%4d, k=%d\n", p7, p8);
      return r55;
    };
    r57 = dyn cat1(p9);
    check L126() else D45();
  L128():
    vapply = ldf vapply;
    check L130() else D46();
  L129():
    r59 = dyn base3(<lang vapply(r, .midDend, 0.0)>);
    goto L25(r59);
  D29():
    deopt 90 [d16, r33, l9, 1, depth8];
  D45():
    deopt 150 [r57];
  D46():
    deopt 156 [];
  D49():
    deopt 164 [quiet];
  L88():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(d14, 1, dx6);
  L89():
    depth9 = force? depth8;
    ___1 = ldf `[<-` in base;
    r36 = dyn ___1(l9, 1, depth9);
    goto L12(d16, r33, r36);
  L126():
    goto L24();
  L130():
    p10 = prom<V +>{
      r61 = ld r;
      r62 = force? r61;
      checkMissing(r62);
      return r62;
    };
    p11 = prom<V +>{
      _midDend = ld `.midDend`;
      _midDend1 = force? _midDend;
      checkMissing(_midDend1);
      return _midDend1;
    };
    r65 = dyn vapply(p10, p11, 0.0);
    check L131() else D47();
  L133():
    quiet1 = force? quiet;
    checkMissing(quiet1);
    r67 = `!`(quiet1);
    c15 = `as.logical`(r67);
    if c15 then L134() else L26(c15);
  D47():
    deopt 160 [r65];
  L26(c17):
    c21 = `as.logical`(c17);
    if c21 then L137() else L27(c21);
  L131():
    sum = ldf sum in base;
    r66 = dyn sum(r65);
    check L132() else D48();
  L134():
    type1 = ld type;
    check L135() else D50();
  D48():
    deopt 162 [r66];
  D50():
    deopt 167 [c15, type1];
  L27(c23):
    c27 = `as.logical`(c23);
    if c27 then L140() else L28();
  L132():
    goto L25(r66);
  L135():
    type2 = force? type1;
    checkMissing(type2);
    r68 = `==`(type2, "hclust");
    c18 = `as.logical`(r68);
    c19 = `&&`(c15, c18);
    goto L26(c19);
  L137():
    k14 = ld k;
    check L138() else D51();
  D51():
    deopt 172 [c21, k14];
  L28():
    goto L29();
  L29():
    _memberDend = ldf `.memberDend`;
    check L144() else D54();
  L138():
    k15 = force? k14;
    checkMissing(k15);
    r69 = `!=`(k15, 2.0);
    c24 = `as.logical`(r69);
    c25 = `&&`(c21, c24);
    goto L27(c25);
  L140():
    warning = ldf warning;
    check L141() else D52();
  D52():
    deopt 178 [];
  D54():
    deopt 184 [];
  L141():
    r70 = dyn warning("midcache() of non-binary dendrograms only partly implemented");
    check L142() else D53();
  L144():
    p12 = prom<V +>{
      r72 = ld r;
      r73 = force? r72;
      checkMissing(r73);
      c28 = `is.object`(r73);
      if c28 then L1() else L2(r73);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", r73);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(r75):
      __4 = ldf `[[` in base;
      r76 = dyn __4(r75, 1);
      goto L0(r76);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r78 = dyn _memberDend(p12);
    check L145() else D55();
  D53():
    deopt 180 [r70];
  D55():
    deopt 186 [r78];
  L142():
    goto L29();
  L145():
    midS = ld midS;
    check L146() else D56();
  D56():
    deopt 186 [r78, midS];
  L146():
    midS1 = force? midS;
    checkMissing(midS1);
    r79 = `+`(r78, midS1);
    r80 = `/`(r79, 2.0);
    l13 = ld r;
    attr__ = ldf `attr<-`;
    check L147() else D57();
  D57():
    deopt 192 [r80, l13, r80];
  L147():
    r81 = dyn attr__(l13, NULL, "midpoint", r80);
    check L148() else D58();
  D58():
    deopt 195 [r80, r81];
  L148():
    st r = r81;
    r82 = ld r;
    check L149() else D59();
  D59():
    deopt 197 [r82];
  L149():
    r83 = force? r82;
    checkMissing(r83);
    st d = r83;
    goto L30();
  }
}