fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner682235887;
    st selectMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner682235887(f, signature, optional, useInherited, mlist, fdef, verbose, doCache) {
  (reg f:*, reg signature:*, reg optional:*, reg useInherited:*, reg mlist:*, reg fdef:*, reg verbose:*, reg doCache:*) -+> V { var f:*, var signature:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var useInherited:*, reg useInherited_isMissing:L, reg useInherited_orDefault:*, var mlist:*, reg mlist_isMissing:L, reg mlist_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fdef1:*, reg fdef2:V, reg c:V, reg r2:V, reg c1:L, reg getMethodsForDispatch:cls, reg fdef3:*, reg fdef4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg optional1:*, reg optional2:V, reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var doCache:*, reg doCache_isMissing:L, reg doCache_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg mlist1:*, reg mlist2:V, reg is_environment:cls, reg r13:V, reg c2:L, reg environment:cls, reg fdef5:*, reg fdef6:V, reg p5:p(V +), reg r15:V, reg _getGenericSigLength:cls, reg fdef7:*, reg fdef8:V, reg p6:p(V +), reg fenv:*, reg fenv1:V, reg p7:p(V +), reg r18:V, reg verbose1:*, reg verbose2:V, reg c3:L, reg cat:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg mlist3:*, reg mlist4:V, reg length:cls, reg r21:V, reg p8:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg signature1:*, reg signature2:V, reg length1:cls, reg r27:V, reg nsig:*, reg nsig1:V, reg r28:V, reg c4:L, reg l:*, reg c5:L, reg r30:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r32:S, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:S, reg l5:*, reg r39:S, reg r40:V, reg signature3:*, reg signature4:V, reg length2:cls, reg r41:V, reg r42:V, reg nsig2:*, reg nsig3:V, reg r43:V, reg ___:cls, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg __:cls, reg r48:V, reg identical:cls, reg r49:V, reg c6:L, reg _selectDotsMethod:cls, reg signature5:*, reg signature6:V, reg p9:p(V +), reg mlist5:*, reg mlist6:V, reg p10:p(V +), reg useInherited1:*, reg useInherited2:V, reg c7:L, reg getMethodsForDispatch1:cls, reg fdef9:*, reg fdef10:V, reg p11:p(V +), reg r53:V, reg p12:p(V +), reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg method:*, reg method1:V, reg c8:V, reg c9:L, reg c11:V, reg optional3:*, reg optional4:V, reg r58:V, reg c12:L, reg c13:V, reg c15:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r59:V, reg p13:p(V +), reg dQuote:cls, reg signature7:*, reg signature8:V, reg p14:p(V +), reg r62:V, reg p15:p(V +), reg r64:V, reg p16:p(V +), reg r66:V, reg method2:*, reg method3:V, reg _findMethodInTable:cls, reg signature9:*, reg signature10:V, reg p17:p(V +), reg mlist7:*, reg mlist8:V, reg p18:p(V +), reg fdef11:*, reg fdef12:V, reg p19:p(V +), reg r73:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg r75:V, reg method4:*, reg method5:V, reg c16:V, reg c17:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r76:V, reg r77:V, reg missing:cls, reg r78:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg signature11:*, reg signature12:V, reg match:cls, reg r83:V, reg is_na:cls, reg r84:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg r89:V, reg fdef13:*, reg fdef14:V, reg coerce:*, reg coerce1:V, reg identical1:cls, reg r90:V, reg c19:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg r96:V, reg r97:V, reg c20:cls, reg r98:V, reg r99:V, reg r100:V, reg r101:V, reg verbose3:*, reg verbose4:V, reg c21:L, reg cat1:cls, reg paste:cls, reg signature13:*, reg signature14:V, reg p20:p(V +), reg r104:V, reg p21:p(V +), reg r106:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r108:V, reg r109:V, reg useInherited3:*, reg useInherited4:V, reg any:cls, reg r110:V, reg c22:L, reg _getMethodsTable:cls, reg fdef15:*, reg fdef16:V, reg p22:p(V +), reg fenv2:*, reg fenv3:V, reg p23:p(V +), reg r113:V, reg _findInheritedMethods:cls, reg signature15:*, reg signature16:V, reg p24:p(V +), reg fdef17:*, reg fdef18:V, reg p25:p(V +), reg allmethods:*, reg allmethods1:V, reg p26:p(V +), reg mlist9:*, reg mlist10:V, reg p27:p(V +), reg useInherited5:*, reg useInherited6:V, reg p28:p(V +), reg verbose5:*, reg verbose6:V, reg p29:p(V +), reg doCache1:*, reg doCache2:V, reg p30:p(V +), reg r121:V, reg r122:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r123:V, reg r124:V, reg methods:*, reg methods1:V, reg length3:cls, reg r125:V, reg c23:L, reg methods2:*, reg methods3:V, reg c24:L, reg methods5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r126:V, reg optional5:*, reg optional6:V, reg c25:L, reg stop1:cls, reg gettextf1:cls, reg paste1:cls, reg signature17:*, reg signature18:V, reg p31:p(V +), reg r128:V, reg p32:p(V +), reg r130:V, reg p33:p(V +), reg r132:V, reg method6:*, reg method7:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r133:V, reg r134:V, reg mlist11:*, reg mlist12:V, reg c26:V, reg c27:L, reg optional7:*, reg optional8:V, reg c28:L, reg mlist13:*, reg mlist14:V, reg stop2:cls, reg gettextf2:cls, reg sQuote1:cls, reg f3:*, reg f4:V, reg p34:p(V +), reg r136:V, reg p35:p(V +), reg r138:V, reg p36:p(V +), reg r140:V, reg stop3:cls, reg r141:V |
    mkenv;
    st f = f;
    st signature = signature;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L0(FALSE) else L0(optional);
  L0(optional_orDefault):
    st optional = optional_orDefault;
    useInherited_isMissing = missing.0(useInherited);
    if useInherited_isMissing then L1(TRUE) else L1(useInherited);
  L1(useInherited_orDefault):
    st useInherited = useInherited_orDefault;
    mlist_isMissing = missing.0(mlist);
    if mlist_isMissing then L2() else L3(mlist);
  L2():
    p1 = prom<V +>{
      sym = ldf `is.null`;
      base = ldf `is.null` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      r2 = `!`(r1);
      c1 = `as.logical`(r2);
      if c1 then L4() else L1();
    L2():
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      c = `==`(fdef2, NULL);
      goto L0(c);
    L3():
      r = dyn base(<sym fdef>);
      goto L0(r);
    L1():
      invisible.0();
      return NULL;
    L4():
      getMethodsForDispatch = ldf getMethodsForDispatch;
      p = prom<V +>{
        fdef3 = ld fdef;
        fdef4 = force? fdef3;
        checkMissing(fdef4);
        return fdef4;
      };
      r4 = dyn getMethodsForDispatch(p);
      return r4;
    };
    goto L3(p1);
  L3(mlist_orDefault):
    st mlist = mlist_orDefault;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L4() else L5(fdef);
  L4():
    p4 = prom<V +>{
      getGeneric = ldf getGeneric;
      p2 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p3 = prom<V +>{
        optional1 = ld optional;
        optional2 = force? optional1;
        checkMissing(optional2);
        r7 = `!`(optional2);
        return r7;
      };
      r9 = dyn getGeneric(p2, p3);
      return r9;
    };
    goto L5(p4);
  L5(fdef_orDefault):
    st fdef = fdef_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L6(FALSE) else L6(verbose);
  L6(verbose_orDefault):
    st verbose = verbose_orDefault;
    doCache_isMissing = missing.0(doCache);
    if doCache_isMissing then L7(FALSE) else L7(doCache);
  L7(doCache_orDefault):
    st doCache = doCache_orDefault;
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L8(r12):
    c2 = `as.logical`(r12);
    if c2 then L51() else L9();
  L47():
    mlist1 = ld mlist;
    check L49() else D0();
  L48():
    r11 = dyn base1(<sym mlist>);
    goto L8(r11);
  D0():
    deopt 2 [mlist1];
  L9():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L155() else L156();
  L49():
    mlist2 = force? mlist1;
    checkMissing(mlist2);
    is_environment = ldf `is.environment` in base;
    r13 = dyn is_environment(mlist2);
    check L50() else D1();
  L51():
    environment = ldf environment;
    check L52() else D2();
  D1():
    deopt 5 [r13];
  D2():
    deopt 7 [];
  L44(r134):
    c27 = `as.logical`(r134);
    if c27 then L158() else L45();
  L50():
    goto L8(r13);
  L52():
    p5 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r15 = dyn environment(p5);
    check L53() else D3();
  L155():
    mlist11 = ld mlist;
    check L157() else D49();
  L156():
    r133 = dyn base15(<sym mlist>);
    goto L44(r133);
  D3():
    deopt 9 [r15];
  D49():
    deopt 216 [mlist11];
  L45():
    stop3 = ldf stop;
    check L166() else D54();
  L53():
    st fenv = r15;
    _getGenericSigLength = ldf `.getGenericSigLength`;
    check L54() else D4();
  L157():
    mlist12 = force? mlist11;
    checkMissing(mlist12);
    c26 = `==`(mlist12, NULL);
    goto L44(c26);
  L158():
    optional7 = ld optional;
    check L159() else D50();
  D4():
    deopt 12 [];
  D50():
    deopt 219 [optional7];
  D54():
    deopt 230 [];
  L54():
    p6 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    p7 = prom<V +>{
      fenv = ld fenv;
      fenv1 = force? fenv;
      checkMissing(fenv1);
      return fenv1;
    };
    r18 = dyn _getGenericSigLength(p6, p7, FALSE);
    check L55() else D5();
  L159():
    optional8 = force? optional7;
    checkMissing(optional8);
    c28 = `as.logical`(optional8);
    if c28 then L160() else L46();
  L166():
    r141 = dyn stop3[, , domain]("selectMethod(): mlist is not an environment or NULL :\n", "** should no longer happen!", NA_LGL);
    check L167() else D55();
  D5():
    deopt 16 [r18];
  D55():
    deopt 235 [r141];
  L46():
    stop2 = ldf stop;
    check L163() else D52();
  L55():
    st nsig = r18;
    verbose1 = ld verbose;
    check L56() else D6();
  L160():
    mlist13 = ld mlist;
    check L161() else D51();
  L167():
    popenv;
    return r141;
  D6():
    deopt 18 [verbose1];
  D51():
    deopt 221 [mlist13];
  D52():
    deopt 224 [];
  L56():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c3 = `as.logical`(verbose2);
    if c3 then L57() else L10();
  L161():
    mlist14 = force? mlist13;
    checkMissing(mlist14);
    popenv;
    return mlist14;
  L163():
    p36 = prom<V +>{
      gettextf2 = ldf gettextf;
      p35 = prom<V +>{
        sQuote1 = ldf sQuote;
        p34 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r136 = dyn sQuote1(p34);
        return r136;
      };
      r138 = dyn gettextf2("%s has no methods defined", p35);
      return r138;
    };
    r140 = dyn stop2[, domain](p36, NA_LGL);
    check L164() else D53();
  D53():
    deopt 228 [r140];
  L10():
    goto L11();
  L11():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L57():
    cat = ldf cat;
    check L58() else D7();
  L164():
    popenv;
    return r140;
  D7():
    deopt 21 [];
  L12(r26):
    nsig = ld nsig;
    check L65() else D11();
  L58():
    p8 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      mlist3 = ld mlist;
      mlist4 = force? mlist3;
      checkMissing(mlist4);
      length = ldf length in base;
      r21 = dyn length(mlist4);
      goto L0(r21);
    L2():
      r19 = dyn base2(<sym mlist>);
      goto L0(r19);
    };
    r23 = dyn cat("* mlist environment with", p8, "potential methods\n");
    check L59() else D8();
  L61():
    signature1 = ld signature;
    check L63() else D9();
  L62():
    r25 = dyn base3(<sym signature>);
    goto L12(r25);
  D8():
    deopt 25 [r23];
  D9():
    deopt 30 [signature1];
  D11():
    deopt 33 [r26, nsig];
  L59():
    goto L11();
  L63():
    signature2 = force? signature1;
    checkMissing(signature2);
    length1 = ldf length in base;
    r27 = dyn length1(signature2);
    check L64() else D10();
  L65():
    nsig1 = force? nsig;
    checkMissing(nsig1);
    r28 = `<`(r26, nsig1);
    c4 = `as.logical`(r28);
    if c4 then L66() else L13();
  D10():
    deopt 33 [r27];
  L13():
    goto L16();
  L16():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L64():
    goto L12(r27);
  L66():
    l = ld signature;
    c5 = `is.object`(l);
    if c5 then L67() else L68("ANY", l);
  L14(r32, dx1):
    st signature = dx1;
    goto L16();
  L17(r47):
    c6 = `as.logical`(r47);
    if c6 then L79() else L18();
  L67():
    dr = tryDispatchBuiltin.0("[<-", l, "ANY");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L69() else L68("ANY", dr);
  L68(r30, l2):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L76():
    __ = ldf `@` in base;
    r48 = dyn __(<sym fdef>, <sym signature>);
    identical = ldf identical in base;
    r49 = dyn identical(r48, "...", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L78() else D15();
  L77():
    r46 = dyn base5(<lang `@`(fdef, signature)>, "...");
    goto L17(r46);
  D15():
    deopt 66 [r49];
  L15(r38, l5, r39, r40):
    r42 = `+`(r40, 1.0);
    nsig2 = ld nsig;
    check L74() else D14();
  L18():
    _findMethodInTable = ldf `.findMethodInTable`;
    check L95() else D23();
  L69():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14("ANY", dx);
  L70():
    signature3 = ld signature;
    check L72() else D12();
  L71():
    r37 = dyn base4(<sym signature>);
    goto L15(r30, l2, "ANY", r37);
  L78():
    goto L17(r49);
  L79():
    _selectDotsMethod = ldf `.selectDotsMethod`;
    check L80() else D16();
  D12():
    deopt 41 [r30, l2, "ANY", signature3];
  D14():
    deopt 46 [r38, l5, r39, r42, nsig2];
  D16():
    deopt 68 [];
  D23():
    deopt 96 [];
  L72():
    signature4 = force? signature3;
    checkMissing(signature4);
    length2 = ldf length in base;
    r41 = dyn length2(signature4);
    check L73() else D13();
  L74():
    nsig3 = force? nsig2;
    checkMissing(nsig3);
    r43 = `:`(r42, nsig3);
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l5, r39, r43);
    goto L14(r38, r44);
  L80():
    p9 = prom<V +>{
      signature5 = ld signature;
      signature6 = force? signature5;
      checkMissing(signature6);
      return signature6;
    };
    p10 = prom<V +>{
      mlist5 = ld mlist;
      mlist6 = force? mlist5;
      checkMissing(mlist6);
      return mlist6;
    };
    p12 = prom<V +>{
      useInherited1 = ld useInherited;
      useInherited2 = force? useInherited1;
      checkMissing(useInherited2);
      c7 = `as.logical`(useInherited2);
      if c7 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      getMethodsForDispatch1 = ldf getMethodsForDispatch;
      p11 = prom<V +>{
        fdef9 = ld fdef;
        fdef10 = force? fdef9;
        checkMissing(fdef10);
        return fdef10;
      };
      r53 = dyn getMethodsForDispatch1[, inherited](p11, TRUE);
      return r53;
    };
    r55 = dyn _selectDotsMethod(p9, p10, p12);
    check L81() else D17();
  L95():
    p17 = prom<V +>{
      signature9 = ld signature;
      signature10 = force? signature9;
      checkMissing(signature10);
      return signature10;
    };
    p18 = prom<V +>{
      mlist7 = ld mlist;
      mlist8 = force? mlist7;
      checkMissing(mlist8);
      return mlist8;
    };
    p19 = prom<V +>{
      fdef11 = ld fdef;
      fdef12 = force? fdef11;
      checkMissing(fdef12);
      return fdef12;
    };
    r73 = dyn _findMethodInTable(p17, p18, p19);
    check L96() else D24();
  D13():
    deopt 44 [r30, l2, "ANY", r41];
  D17():
    deopt 72 [r55];
  D24():
    deopt 100 [r73];
  L73():
    goto L15(r30, l2, "ANY", r41);
  L81():
    st method = r55;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L96():
    st method = r73;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  L19(r57):
    c9 = `as.logical`(r57);
    if c9 then L85() else L20(c9);
  L24(r75):
    c17 = `as.logical`(r75);
    if c17 then L100() else L25();
  L82():
    method = ld method;
    check L84() else D18();
  L83():
    r56 = dyn base6(<sym method>);
    goto L19(r56);
  L97():
    method4 = ld method;
    check L99() else D25();
  L98():
    r74 = dyn base7(<sym method>);
    goto L24(r74);
  D18():
    deopt 75 [method];
  D25():
    deopt 103 [method4];
  L20(c11):
    c15 = `as.logical`(c11);
    if c15 then L88() else L21();
  L25():
    method6 = ld method;
    check L153() else D48();
  L84():
    method1 = force? method;
    checkMissing(method1);
    c8 = `==`(method1, NULL);
    goto L19(c8);
  L85():
    optional3 = ld optional;
    check L86() else D19();
  L99():
    method5 = force? method4;
    checkMissing(method5);
    c16 = `==`(method5, NULL);
    goto L24(c16);
  L100():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L101() else L102();
  D19():
    deopt 78 [c9, optional3];
  D48():
    deopt 213 [method6];
  L21():
    goto L22();
  L22():
    method2 = ld method;
    check L92() else D22();
  L26(r77):
    c18 = `as.logical`(r77);
    if c18 then L103() else L27();
  L86():
    optional4 = force? optional3;
    checkMissing(optional4);
    r58 = `!`(optional4);
    c12 = `as.logical`(r58);
    c13 = `&&`(c9, c12);
    goto L20(c13);
  L88():
    stop = ldf stop;
    check L89() else D20();
  L101():
    missing = ldf missing in base;
    r78 = dyn missing(<sym useInherited>);
    goto L26(r78);
  L102():
    r76 = dyn base8(<sym useInherited>);
    goto L26(r76);
  L153():
    method7 = force? method6;
    checkMissing(method7);
    popenv;
    return method7;
  D20():
    deopt 83 [];
  D22():
    deopt 90 [method2];
  L27():
    goto L34();
  L34():
    verbose3 = ld verbose;
    check L122() else D33();
  L89():
    p16 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        sQuote = ldf sQuote;
        r59 = dyn sQuote("...");
        return r59;
      };
      p15 = prom<V +>{
        dQuote = ldf dQuote;
        p14 = prom<V +>{
          signature7 = ld signature;
          signature8 = force? signature7;
          checkMissing(signature8);
          return signature8;
        };
        r62 = dyn dQuote(p14);
        return r62;
      };
      r64 = dyn gettextf("no method for %s matches class %s", p13, p15);
      return r64;
    };
    r66 = dyn stop[, domain](p16, NA_LGL);
    check L90() else D21();
  L92():
    method3 = force? method2;
    checkMissing(method3);
    popenv;
    return method3;
  L103():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L104() else L105();
  D21():
    deopt 87 [r66];
  D33():
    deopt 148 [verbose3];
  L28(r80):
    sym11 = ldf identical;
    base11 = ldf identical in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L111() else L112();
  L90():
    goto L22();
  L104():
    sym10 = ldf match;
    base10 = ldf match in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L106() else L107();
  L105():
    r79 = dyn base9(<lang match(signature, "ANY")>);
    goto L28(r79);
  L122():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c21 = `as.logical`(verbose4);
    if c21 then L123() else L35();
  L29(r82):
    is_na = ldf `is.na` in base;
    r84 = dyn is_na(r82);
    check L110() else D28();
  L30(r88, r89):
    c19 = `as.logical`(r89);
    if c19 then L116() else L31();
  L35():
    goto L36();
  L36():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L127() else L128();
  L106():
    signature11 = ld signature;
    check L108() else D26();
  L107():
    r81 = dyn base10(<sym signature>, "ANY");
    goto L29(r81);
  L111():
    fdef13 = ld fdef;
    check L113() else D29();
  L112():
    r87 = dyn base11(<sym fdef>, <sym coerce>);
    goto L30(r80, r87);
  L123():
    cat1 = ldf cat;
    check L124() else D34();
  D26():
    deopt 113 [signature11];
  D28():
    deopt 121 [r84];
  D29():
    deopt 123 [r80, fdef13];
  D34():
    deopt 151 [];
  L31():
    goto L33(r88, TRUE);
  L33(r99, r100):
    r101 = `&&`(r99, r100);
    st useInherited = r101;
    goto L34();
  L37(r109):
    c22 = `as.logical`(r109);
    if c22 then L131() else L38();
  L108():
    signature12 = force? signature11;
    checkMissing(signature12);
    match = ldf match in base;
    r83 = dyn match(signature12, "ANY", NA_INT, NULL);
    check L109() else D27();
  L110():
    goto L28(r84);
  L113():
    fdef14 = force? fdef13;
    checkMissing(fdef14);
    coerce = ld coerce;
    check L114() else D30();
  L116():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  L124():
    p21 = prom<V +>{
      paste = ldf paste;
      p20 = prom<V +>{
        signature13 = ld signature;
        signature14 = force? signature13;
        checkMissing(signature14);
        return signature14;
      };
      r104 = dyn paste[, collapse](p20, ", ");
      return r104;
    };
    r106 = dyn cat1[, , , sep]("  no direct match found to signature (", p21, ")\n", "");
    check L125() else D35();
  L127():
    useInherited3 = ld useInherited;
    check L129() else D36();
  L128():
    r108 = dyn base13(<sym useInherited>);
    goto L37(r108);
  D27():
    deopt 119 [r83];
  D30():
    deopt 125 [r80, coerce];
  D35():
    deopt 157 [r106];
  D36():
    deopt 162 [useInherited3];
  L32(r96, r97):
    goto L33(r96, r97);
  L38():
    goto L39(NULL);
  L39(r122):
    st methods = r122;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L137() else L138();
  L109():
    goto L29(r83);
  L114():
    coerce1 = force? coerce;
    checkMissing(coerce1);
    identical1 = ldf identical in base;
    r90 = dyn identical1(fdef14, coerce1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L115() else D31();
  L117():
    c20 = ldf c in base;
    r98 = dyn c20(TRUE, FALSE);
    check L119() else D32();
  L118():
    r95 = dyn base12(TRUE, FALSE);
    goto L32(r88, r95);
  L125():
    goto L36();
  L129():
    useInherited4 = force? useInherited3;
    checkMissing(useInherited4);
    any = ldf any in base;
    r110 = dyn any(useInherited4);
    check L130() else D37();
  L131():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L132() else D38();
  D31():
    deopt 135 [r80, r90];
  D32():
    deopt 141 [r88, r98];
  D37():
    deopt 165 [r110];
  D38():
    deopt 167 [];
  L40(r124):
    c23 = `as.logical`(r124);
    if c23 then L141() else L41();
  L115():
    goto L30(r80, r90);
  L119():
    goto L32(r88, r98);
  L130():
    goto L37(r110);
  L132():
    p22 = prom<V +>{
      fdef15 = ld fdef;
      fdef16 = force? fdef15;
      checkMissing(fdef16);
      return fdef16;
    };
    p23 = prom<V +>{
      fenv2 = ld fenv;
      fenv3 = force? fenv2;
      checkMissing(fenv3);
      return fenv3;
    };
    r113 = dyn _getMethodsTable[, , check, inherited](p22, p23, FALSE, TRUE);
    check L133() else D39();
  L137():
    methods = ld methods;
    check L139() else D42();
  L138():
    r123 = dyn base14(<sym methods>);
    goto L40(r123);
  D39():
    deopt 174 [r113];
  D42():
    deopt 196 [methods];
  L41():
    optional5 = ld optional;
    check L147() else D45();
  L133():
    st allmethods = r113;
    _findInheritedMethods = ldf `.findInheritedMethods`;
    check L134() else D40();
  L139():
    methods1 = force? methods;
    checkMissing(methods1);
    length3 = ldf length in base;
    r125 = dyn length3(methods1);
    check L140() else D43();
  L141():
    methods2 = ld methods;
    check L142() else D44();
  D40():
    deopt 177 [];
  D43():
    deopt 199 [r125];
  D44():
    deopt 200 [methods2];
  D45():
    deopt 205 [optional5];
  L134():
    p24 = prom<V +>{
      signature15 = ld signature;
      signature16 = force? signature15;
      checkMissing(signature16);
      return signature16;
    };
    p25 = prom<V +>{
      fdef17 = ld fdef;
      fdef18 = force? fdef17;
      checkMissing(fdef18);
      return fdef18;
    };
    p26 = prom<V +>{
      allmethods = ld allmethods;
      allmethods1 = force? allmethods;
      checkMissing(allmethods1);
      return allmethods1;
    };
    p27 = prom<V +>{
      mlist9 = ld mlist;
      mlist10 = force? mlist9;
      checkMissing(mlist10);
      return mlist10;
    };
    p28 = prom<V +>{
      useInherited5 = ld useInherited;
      useInherited6 = force? useInherited5;
      checkMissing(useInherited6);
      return useInherited6;
    };
    p29 = prom<V +>{
      verbose5 = ld verbose;
      verbose6 = force? verbose5;
      checkMissing(verbose6);
      return verbose6;
    };
    p30 = prom<V +>{
      doCache1 = ld doCache;
      doCache2 = force? doCache1;
      checkMissing(doCache2);
      return doCache2;
    };
    r121 = dyn _findInheritedMethods[, , mtable, table, useInherited, verbose, doCache](p24, p25, p26, p27, p28, p29, p30);
    check L135() else D41();
  L140():
    goto L40(r125);
  L142():
    methods3 = force? methods2;
    checkMissing(methods3);
    c24 = `is.object`(methods3);
    if c24 then L143() else L144(methods3);
  L147():
    optional6 = force? optional5;
    checkMissing(optional6);
    c25 = `as.logical`(optional6);
    if c25 then L148() else L43();
  D41():
    deopt 190 [r121];
  L42(dx3):
    popenv;
    return dx3;
  L43():
    stop1 = ldf stop;
    check L150() else D46();
  L135():
    goto L39(r121);
  L143():
    dr2 = tryDispatchBuiltin.1("[[", methods3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L145() else L144(dr2);
  L144(methods5):
    __1 = ldf `[[` in base;
    r126 = dyn __1(methods5, 1);
    goto L42(r126);
  L148():
    popenv;
    return NULL;
  D46():
    deopt 210 [];
  L145():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L42(dx2);
  L150():
    p33 = prom<V +>{
      gettextf1 = ldf gettextf;
      p32 = prom<V +>{
        paste1 = ldf paste;
        p31 = prom<V +>{
          signature17 = ld signature;
          signature18 = force? signature17;
          checkMissing(signature18);
          return signature18;
        };
        r128 = dyn paste1[, collapse](p31, ", ");
        return r128;
      };
      r130 = dyn gettextf1("no method found for signature %s", p32);
      return r130;
    };
    r132 = dyn stop1(p33);
    check L151() else D47();
  D47():
    deopt 212 [r132];
  L151():
    popenv;
    return r132;
  }
}