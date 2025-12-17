fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2135165956;
    st detachPackages = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2135165956(pkgs, verbose) {
  (reg pkgs:*, reg verbose:*) -+> V { var pkgs:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg pkgs1:*, reg pkgs2:V, reg c:L, reg pkgs4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg pkgs5:*, reg pkgs6:V, reg p:p(V +), reg search:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg __:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg pkgs7:*, reg pkgs8:V, reg length:cls, reg r7:V, reg r8:V, reg c1:L, reg verbose1:*, reg verbose2:V, reg c2:L, reg paste:cls, reg paste1:cls, reg sQuote:cls, reg pkgs9:*, reg pkgs10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg cat:cls, reg strwrap:cls, reg msg:*, reg msg1:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg startsWith:cls, reg pkgs11:*, reg pkgs12:V, reg p7:p(V +), reg r23:V, reg pkgs13:*, reg pkgs14:V, reg c3:L, reg pkgs16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg isPkg:*, reg isPkg1:V, reg r24:V, reg __1:cls, reg r25:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg i7:I, reg r27:V, reg item:*, reg item1:V, reg search1:cls, reg r28:V, reg match:cls, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg i10:I, reg r31:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r32:V, reg r33:V, reg c5:L, reg _detach:cls, reg pos2:*, reg pos3:V, reg p8:p(V +), reg r35:V, reg i13:I, reg pkgs17:*, reg pkgs18:V, reg c6:L, reg pkgs20:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg isPkg2:*, reg isPkg3:V, reg __2:cls, reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg pkgs21:*, reg pkgs22:V, reg length1:cls, reg r40:V, reg r41:V, reg c7:L, reg lapply:cls, reg pkgs23:*, reg pkgs24:V, reg p9:p(V +), reg r45:cls, reg p10:p(V +), reg r47:V, reg pkgs25:*, reg pkgs26:V, reg l1:*, reg names__:cls, reg r48:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg r50:V, reg Sys_getenv:cls, reg r51:V, reg nzchar:cls, reg r52:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg c8:cls, reg r55:V, reg paste2:cls, reg exclusions:*, reg exclusions1:V, reg p11:p(V +), reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg deps:*, reg deps1:V, reg length2:cls, reg r60:V, reg c9:L, reg unlist:cls, reg deps2:*, reg deps3:V, reg p12:p(V +), reg r62:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg deps4:*, reg deps5:V, reg r65:I, reg s1:V, reg l2:I, reg i14:I, reg i15:I, reg i16:I, reg c10:L, reg x1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg i21:I, reg r67:V, reg deps6:*, reg deps7:V, reg names:cls, reg r68:V, reg c11:L, reg i23:I, reg r70:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i25:I, reg dx7:V, reg i26:*, reg i27:V, reg __3:cls, reg r71:V, reg _in_1:cls, reg _rmpkg:cls, reg this:*, reg this1:V, reg p13:p(V +), reg r73:V, reg p14:p(V +), reg unl:*, reg unl1:V, reg p15:p(V +), reg r76:V, reg c12:L, reg try:cls, reg detach:cls, reg this2:*, reg this3:V, reg p16:p(V +), reg unload:*, reg unload1:V, reg c13:L, reg c15:V, reg _notin_:cls, reg this4:*, reg this5:V, reg p17:p(V +), reg exclusions2:*, reg exclusions3:V, reg p18:p(V +), reg r81:V, reg c16:L, reg c17:V, reg p19:p(V +), reg r83:V, reg p20:p(V +), reg r85:V, reg deps8:*, reg deps9:V, reg c19:L, reg deps11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i33:*, reg i34:V, reg r86:V, reg __4:cls, reg r87:V |
    mkenv;
    st pkgs = pkgs;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(TRUE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    pkgs1 = ld pkgs;
    check L32() else D0();
  D0():
    deopt 0 [pkgs1];
  L32():
    pkgs2 = force? pkgs1;
    checkMissing(pkgs2);
    c = `is.object`(pkgs2);
    if c then L33() else L34(pkgs2);
  L1(dx1):
    st pkgs = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L33():
    dr = tryDispatchBuiltin.1("[", pkgs2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(pkgs4):
    _in_ = ldf `%in%`;
    check L36() else D1();
  D1():
    deopt 3 [pkgs4];
  L2(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L42() else L3();
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L36():
    p = prom<V +>{
      pkgs5 = ld pkgs;
      pkgs6 = force? pkgs5;
      checkMissing(pkgs6);
      return pkgs6;
    };
    p1 = prom<V +>{
      search = ldf search;
      r1 = dyn search();
      return r1;
    };
    r3 = dyn _in_(p, p1);
    check L37() else D2();
  L38():
    pkgs7 = ld pkgs;
    check L40() else D3();
  L39():
    r5 = dyn base(<sym pkgs>);
    goto L2(r5);
  D2():
    deopt 6 [pkgs4, r3];
  D3():
    deopt 11 [pkgs7];
  L3():
    verbose1 = ld verbose;
    check L45() else D5();
  L37():
    __ = ldf `[` in base;
    r4 = dyn __(pkgs4, r3);
    goto L1(r4);
  L40():
    pkgs8 = force? pkgs7;
    checkMissing(pkgs8);
    length = ldf length in base;
    r7 = dyn length(pkgs8);
    check L41() else D4();
  L42():
    popenv;
    return NULL;
  D4():
    deopt 14 [r7];
  D5():
    deopt 21 [verbose1];
  L41():
    goto L2(r7);
  L45():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c2 = `as.logical`(verbose2);
    if c2 then L46() else L5();
  L5():
    goto L6();
  L6():
    startsWith = ldf startsWith;
    check L52() else D10();
  L46():
    paste = ldf paste;
    check L47() else D6();
  D6():
    deopt 24 [];
  D10():
    deopt 40 [];
  L47():
    p4 = prom<V +>{
      paste1 = ldf paste;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          pkgs9 = ld pkgs;
          pkgs10 = force? pkgs9;
          checkMissing(pkgs10);
          return pkgs10;
        };
        r12 = dyn sQuote(p2);
        return r12;
      };
      r14 = dyn paste1[, collapse](p3, ", ");
      return r14;
    };
    r16 = dyn paste("detaching", p4);
    check L48() else D7();
  L52():
    p7 = prom<V +>{
      pkgs11 = ld pkgs;
      pkgs12 = force? pkgs11;
      checkMissing(pkgs12);
      return pkgs12;
    };
    r23 = dyn startsWith(p7, "package:");
    check L53() else D11();
  D7():
    deopt 27 [r16];
  D11():
    deopt 43 [r23];
  L48():
    st msg = r16;
    cat = ldf cat;
    check L49() else D8();
  L53():
    st isPkg = r23;
    pkgs13 = ld pkgs;
    check L54() else D12();
  D8():
    deopt 30 [];
  D12():
    deopt 45 [pkgs13];
  L49():
    p6 = prom<V +>{
      strwrap = ldf strwrap;
      p5 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r18 = dyn strwrap[, exdent](p5, 2);
      return r18;
    };
    r20 = dyn cat[, , , sep]("", p6, "", "\n");
    check L50() else D9();
  L54():
    pkgs14 = force? pkgs13;
    checkMissing(pkgs14);
    c3 = `is.object`(pkgs14);
    if c3 then L55() else L56(pkgs14);
  D9():
    deopt 36 [r20];
  L7(dx3):
    s = toForSeq(dx3);
    l = length(s);
    i = 0;
    goto L8(i);
  L50():
    goto L6();
  L55():
    dr2 = tryDispatchBuiltin.1("[", pkgs14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(dr2);
  L56(pkgs16):
    isPkg = ld isPkg;
    check L58() else D13();
  D13():
    deopt 47 [pkgs16, isPkg];
  L8(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L59() else L13();
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L58():
    isPkg1 = force? isPkg;
    checkMissing(isPkg1);
    r24 = `!`(isPkg1);
    __1 = ldf `[` in base;
    r25 = dyn __1(pkgs16, r24);
    goto L7(r25);
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st item = x;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L59():
    pkgs17 = ld pkgs;
    check L74() else D22();
  D22():
    deopt 79 [pkgs17];
  L9(i7, r27):
    st pos = r27;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L66() else L67();
  L60():
    item = ld item;
    check L62() else D14();
  L61():
    r26 = dyn base1(<sym item>, <lang search()>);
    goto L9(i2, r26);
  L74():
    pkgs18 = force? pkgs17;
    checkMissing(pkgs18);
    c6 = `is.object`(pkgs18);
    if c6 then L75() else L76(pkgs18);
  D14():
    deopt 53 [i2, item];
  L10(i10, r31):
    r33 = `!`(r31);
    c5 = `as.logical`(r33);
    if c5 then L70() else L11();
  L14(dx5):
    st pkgs = dx5;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L79() else L80();
  L62():
    item1 = force? item;
    checkMissing(item1);
    search1 = ldf search;
    check L63() else D15();
  L66():
    pos = ld pos;
    check L68() else D18();
  L67():
    r30 = dyn base2(<sym pos>);
    goto L10(i7, r30);
  L75():
    dr4 = tryDispatchBuiltin.1("[", pkgs18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L77() else L76(dr4);
  L76(pkgs20):
    isPkg2 = ld isPkg;
    check L78() else D23();
  D15():
    deopt 56 [i2];
  D18():
    deopt 65 [i7, pos];
  D23():
    deopt 81 [pkgs20, isPkg2];
  L11():
    goto L12(i10);
  L12(i13):
    goto L8(i13);
  L15(r39):
    r41 = `!`(r39);
    c7 = `as.logical`(r41);
    if c7 then L83() else L16();
  L63():
    r28 = dyn search1();
    check L64() else D16();
  L68():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r32 = dyn is_na(pos1);
    check L69() else D19();
  L70():
    _detach = ldf `.detach`;
    check L71() else D20();
  L77():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L78():
    isPkg3 = force? isPkg2;
    __2 = ldf `[` in base;
    r37 = dyn __2(pkgs20, isPkg3);
    goto L14(r37);
  L79():
    pkgs21 = ld pkgs;
    check L81() else D24();
  L80():
    r38 = dyn base3(<sym pkgs>);
    goto L15(r38);
  D16():
    deopt 57 [i2, r28];
  D19():
    deopt 68 [i7, r32];
  D20():
    deopt 71 [i10];
  D24():
    deopt 87 [pkgs21];
  L16():
    lapply = ldf lapply;
    check L86() else D26();
  L64():
    match = ldf match in base;
    r29 = dyn match(item1, r28, NA_INT, NULL);
    check L65() else D17();
  L69():
    goto L10(i7, r32);
  L71():
    p8 = prom<V +>{
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      return pos3;
    };
    r35 = dyn _detach(p8);
    check L72() else D21();
  L81():
    pkgs22 = force? pkgs21;
    checkMissing(pkgs22);
    length1 = ldf length in base;
    r40 = dyn length1(pkgs22);
    check L82() else D25();
  L83():
    popenv;
    return NULL;
  D17():
    deopt 61 [i2, r29];
  D21():
    deopt 73 [i10, r35];
  D25():
    deopt 90 [r40];
  D26():
    deopt 98 [];
  L65():
    goto L9(i2, r29);
  L72():
    goto L12(i10);
  L82():
    goto L15(r40);
  L86():
    p9 = prom<V +>{
      pkgs23 = ld pkgs;
      pkgs24 = force? pkgs23;
      checkMissing(pkgs24);
      return pkgs24;
    };
    p10 = prom<V +>{
      r45 = clos inner2501545716;
      return r45;
    };
    r47 = dyn lapply(p9, p10);
    check L87() else D27();
  D27():
    deopt 101 [r47];
  L87():
    st deps = r47;
    pkgs25 = ld pkgs;
    check L88() else D28();
  D28():
    deopt 103 [pkgs25];
  L88():
    pkgs26 = force? pkgs25;
    checkMissing(pkgs26);
    l1 = ld deps;
    names__ = ldf `names<-`;
    check L89() else D29();
  D29():
    deopt 106 [pkgs26, l1, pkgs26];
  L89():
    r48 = dyn names__(l1, NULL, pkgs26);
    check L90() else D30();
  D30():
    deopt 108 [pkgs26, r48];
  L90():
    st deps = r48;
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  L18(r50):
    st unload = r50;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  L91():
    Sys_getenv = ldf `Sys.getenv`;
    check L93() else D31();
  L92():
    r49 = dyn base4(<lang Sys.getenv("_R_CHECK_UNLOAD_NAMESPACES_")>);
    goto L18(r49);
  D31():
    deopt 113 [];
  L19(r54):
    st exclusions = r54;
    paste2 = ldf paste0;
    check L99() else D35();
  L93():
    r51 = dyn Sys_getenv("_R_CHECK_UNLOAD_NAMESPACES_");
    check L94() else D32();
  L96():
    c8 = ldf c in base;
    r55 = dyn c8("grid", "tcltk");
    check L98() else D34();
  L97():
    r53 = dyn base5("grid", "tcltk");
    goto L19(r53);
  D32():
    deopt 115 [r51];
  D34():
    deopt 124 [r55];
  D35():
    deopt 127 [];
  L94():
    nzchar = ldf nzchar in base;
    r52 = dyn nzchar(r51);
    check L95() else D33();
  L98():
    goto L19(r55);
  L99():
    p11 = prom<V +>{
      exclusions = ld exclusions;
      exclusions1 = force? exclusions;
      checkMissing(exclusions1);
      return exclusions1;
    };
    r57 = dyn paste2("package:", p11);
    check L100() else D36();
  D33():
    deopt 117 [r52];
  D36():
    deopt 130 [r57];
  L95():
    goto L18(r52);
  L100():
    st exclusions = r57;
    goto L31();
  L31():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L20(r59):
    c9 = `as.logical`(r59);
    if c9 then L105() else L21();
  L101():
    deps = ld deps;
    check L103() else D37();
  L102():
    r58 = dyn base6(<sym deps>);
    goto L20(r58);
  D37():
    deopt 134 [deps];
  L21():
    invisible.0();
    popenv;
    return NULL;
  L103():
    deps1 = force? deps;
    checkMissing(deps1);
    length2 = ldf length in base;
    r60 = dyn length2(deps1);
    check L104() else D38();
  L105():
    unlist = ldf unlist;
    check L106() else D39();
  D38():
    deopt 137 [r60];
  D39():
    deopt 139 [];
  L104():
    goto L20(r60);
  L106():
    p12 = prom<V +>{
      deps2 = ld deps;
      deps3 = force? deps2;
      checkMissing(deps3);
      return deps3;
    };
    r62 = dyn unlist(p12);
    check L107() else D40();
  D40():
    deopt 141 [r62];
  L107():
    st unl = r62;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  L22(r64):
    s1 = toForSeq(r64);
    l2 = length(s1);
    i14 = 0;
    goto L23(i14);
  L108():
    deps4 = ld deps;
    check L110() else D41();
  L109():
    r63 = dyn base7(<sym deps>);
    goto L22(r63);
  D41():
    deopt 144 [deps4];
  L23(i15):
    i16 = `+`.1(i15, 1);
    c10 = `<`.1(l2, i16);
    if c10 then L111() else L29();
  L110():
    deps5 = force? deps4;
    checkMissing(deps5);
    r65 = seq_along(deps5);
    goto L22(r65);
  L28():
    try = ldf try;
    check L126() else D47();
  L29():
    x1 = `[[`(s1, i16, NULL, TRUE);
    st i = x1;
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L111():
    goto L28();
  D47():
    deopt 170 [];
  L24(i21, r67):
    c11 = `is.object`(r67);
    if c11 then L116() else L117(i21, r67);
  L112():
    deps6 = ld deps;
    check L114() else D42();
  L113():
    r66 = dyn base8(<sym deps>);
    goto L24(i16, r66);
  L126():
    p20 = prom<V +>{
      detach = ldf detach;
      p16 = prom<V +>{
        this2 = ld this;
        this3 = force? this2;
        checkMissing(this3);
        return this3;
      };
      p19 = prom<V +>{
        unload = ld unload;
        unload1 = force? unload;
        checkMissing(unload1);
        c13 = `as.logical`(unload1);
        if c13 then L1() else L0(c13);
      L0(c15):
        return c15;
      L1():
        _notin_ = ldf `%notin%`;
        p17 = prom<V +>{
          this4 = ld this;
          this5 = force? this4;
          checkMissing(this5);
          return this5;
        };
        p18 = prom<V +>{
          exclusions2 = ld exclusions;
          exclusions3 = force? exclusions2;
          checkMissing(exclusions3);
          return exclusions3;
        };
        r81 = dyn _notin_(p17, p18);
        c16 = `as.logical`(r81);
        c17 = `&&`(c13, c16);
        goto L0(c17);
      };
      r83 = dyn detach[, `character.only`, unload, force](p16, TRUE, p19, TRUE);
      return r83;
    };
    r85 = dyn try(p20);
    check L127() else D48();
  D42():
    deopt 149 [i16, deps6];
  D48():
    deopt 172 [r85];
  L25(i25, dx7):
    st this = dx7;
    _in_1 = ldf `%in%`;
    check L120() else D45();
  L114():
    deps7 = force? deps6;
    checkMissing(deps7);
    names = ldf names in base;
    r68 = dyn names(deps7);
    check L115() else D43();
  L116():
    dr6 = tryDispatchBuiltin.1("[", r67);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L118() else L117(i21, dr6);
  L117(i23, r70):
    i26 = ld i;
    check L119() else D44();
  L127():
    deps8 = ld deps;
    check L128() else D49();
  D43():
    deopt 152 [i16, r68];
  D44():
    deopt 153 [i23, r70, i26];
  D45():
    deopt 158 [i25];
  D49():
    deopt 173 [deps8];
  L115():
    goto L24(i16, r68);
  L118():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L25(i21, dx6);
  L119():
    i27 = force? i26;
    __3 = ldf `[` in base;
    r71 = dyn __3(r70, i27);
    goto L25(i23, r71);
  L120():
    p14 = prom<V +>{
      _rmpkg = ldf `.rmpkg`;
      p13 = prom<V +>{
        this = ld this;
        this1 = force? this;
        checkMissing(this1);
        return this1;
      };
      r73 = dyn _rmpkg(p13);
      return r73;
    };
    p15 = prom<V +>{
      unl = ld unl;
      unl1 = force? unl;
      checkMissing(unl1);
      return unl1;
    };
    r76 = dyn _in_1(p14, p15);
    check L121() else D46();
  L128():
    deps9 = force? deps8;
    checkMissing(deps9);
    c19 = `is.object`(deps9);
    if c19 then L129() else L130(deps9);
  D46():
    deopt 161 [i25, r76];
  L30(dx9):
    st deps = dx9;
    goto L31();
  L121():
    c12 = `as.logical`(r76);
    if c12 then L122() else L26();
  L129():
    dr8 = tryDispatchBuiltin.1("[", deps9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L131() else L130(dr8);
  L130(deps11):
    i33 = ld i;
    check L132() else D50();
  D50():
    deopt 175 [deps11, i33];
  L26():
    goto L28();
  L122():
    goto L23(i25);
  L131():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L30(dx8);
  L132():
    i34 = force? i33;
    checkMissing(i34);
    r86 = `-`(<missing>, i34);
    __4 = ldf `[` in base;
    r87 = dyn __4(deps11, r86);
    goto L30(r87);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg exists:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg get:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg character:cls, reg r4:V |
    mkenv;
    st x = x;
    exists = ldf exists;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn exists[, , inherits](".Depends", p, FALSE);
    check L2() else D1();
  D1():
    deopt 6 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    character = ldf character;
    check L7() else D4();
  L3():
    get = ldf get;
    check L4() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn get(".Depends", p1);
    check L5() else D3();
  L7():
    r4 = dyn character();
    check L8() else D5();
  D3():
    deopt 11 [r3];
  D5():
    deopt 14 [r4];
  L5():
    popenv;
    return r3;
  L8():
    popenv;
    return r4;
  }
}