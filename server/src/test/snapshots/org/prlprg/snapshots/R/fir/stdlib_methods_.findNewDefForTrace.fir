fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1207159221;
    st `.findNewDefForTrace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1207159221(what, signature, env, package) {
  (reg what:*, reg signature:*, reg env:*, reg package:*) -+> V { var what:*, var signature:*, var env:*, var package:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg signature1:*, reg signature2:V, reg c:V, reg c1:L, reg exists:cls, reg what1:*, reg what2:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg r4:V, reg c2:L, reg get:cls, reg what3:*, reg what4:V, reg p2:p(V +), reg env3:*, reg env4:V, reg p3:p(V +), reg r7:V, reg r8:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg what5:*, reg what6:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V, reg _TableMetaName:cls, reg what7:*, reg what8:V, reg p7:p(V +), reg r17:V, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg env5:*, reg env6:V, reg names:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg grep:cls, reg table:*, reg table1:V, reg p9:p(V +), reg allObjects:*, reg allObjects1:V, reg p10:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg i:*, reg i1:V, reg length:cls, reg r28:V, reg r29:V, reg c3:L, reg env7:*, reg env8:V, reg c4:L, reg env10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg allObjects2:*, reg allObjects3:V, reg c5:L, reg env12:V, reg allObjects5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg env14:V, reg dx3:V, reg i2:*, reg i3:V, reg __:cls, reg r30:V, reg __1:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg i4:*, reg i5:V, reg length1:cls, reg r34:V, reg r35:V, reg c6:L, reg allObjects6:*, reg allObjects7:V, reg c7:L, reg allObjects9:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg i6:*, reg i7:V, reg c8:L, reg allObjects11:V, reg i9:V, reg dr6:V, reg dc3:L, reg dx7:V, reg allObjects13:V, reg dx8:V, reg __2:cls, reg r36:V, reg __3:cls, reg r37:V, reg warning:cls, reg gettextf1:cls, reg table2:*, reg table3:V, reg p11:p(V +), reg r39:V, reg p12:p(V +), reg r41:V, reg env15:*, reg env16:V, reg c9:L, reg env18:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg table4:*, reg table5:V, reg __4:cls, reg r42:V, reg stop1:cls, reg gettextf2:cls, reg sQuote1:cls, reg what9:*, reg what10:V, reg p13:p(V +), reg r44:V, reg p14:p(V +), reg r46:V, reg p15:p(V +), reg r48:V, reg exists1:cls, reg signature3:*, reg signature4:V, reg p16:p(V +), reg table6:*, reg table7:V, reg p17:p(V +), reg r51:V, reg c10:L, reg get1:cls, reg signature5:*, reg signature6:V, reg p18:p(V +), reg table8:*, reg table9:V, reg p19:p(V +), reg r54:V, reg stop2:cls, reg gettextf3:cls, reg sQuote2:cls, reg what11:*, reg what12:V, reg p20:p(V +), reg r56:V, reg p21:p(V +), reg sQuote3:cls, reg signature7:*, reg signature8:V, reg p22:p(V +), reg r59:V, reg p23:p(V +), reg r61:V, reg p24:p(V +), reg r63:V, reg newObject:*, reg newObject1:V |
    mkenv;
    st what = what;
    st signature = signature;
    st env = env;
    st package = package;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L19() else L1();
  L16():
    signature1 = ld signature;
    check L18() else D0();
  L17():
    r = dyn base(<sym signature>);
    goto L0(r);
  D0():
    deopt 1 [signature1];
  L1():
    _TableMetaName = ldf `.TableMetaName`;
    check L29() else D7();
  L4():
    newObject = ld newObject;
    check L81() else D34();
  L18():
    signature2 = force? signature1;
    checkMissing(signature2);
    c = `==`(signature2, NULL);
    goto L0(c);
  L19():
    exists = ldf exists;
    check L20() else D1();
  D1():
    deopt 5 [];
  D7():
    deopt 26 [];
  D34():
    deopt 117 [newObject];
  L20():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r4 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L21() else D2();
  L29():
    p7 = prom<V +>{
      what7 = ld what;
      what8 = force? what7;
      checkMissing(what8);
      return what8;
    };
    r17 = dyn _TableMetaName(p7, "");
    check L30() else D8();
  L81():
    newObject1 = force? newObject;
    checkMissing(newObject1);
    popenv;
    return newObject1;
  D2():
    deopt 11 [r4];
  D8():
    deopt 29 [r17];
  L21():
    c2 = `as.logical`(r4);
    if c2 then L22() else L2();
  L30():
    st table = r17;
    sort = ldf sort;
    check L31() else D9();
  D9():
    deopt 32 [];
  L2():
    stop = ldf stop;
    check L26() else D5();
  L3(r8):
    goto L4();
  L22():
    get = ldf get;
    check L23() else D3();
  L31():
    p8 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      names = ldf names in base;
      r20 = dyn names(env6);
      goto L0(r20);
    L2():
      r18 = dyn base1(<sym env>);
      goto L0(r18);
    };
    r22 = dyn sort(p8);
    check L32() else D10();
  D3():
    deopt 13 [];
  D5():
    deopt 20 [];
  D10():
    deopt 34 [r22];
  L23():
    p2 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p3 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r7 = dyn get[, envir](p2, p3);
    check L24() else D4();
  L26():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          what5 = ld what;
          what6 = force? what5;
          checkMissing(what6);
          return what6;
        };
        r10 = dyn sQuote(p4);
        return r10;
      };
      r12 = dyn gettextf("no definition for object %s found in tracing environment", p5);
      return r12;
    };
    r14 = dyn stop[, domain](p6, NA_LGL);
    check L27() else D6();
  L32():
    st allObjects = r22;
    grep = ldf grep;
    check L33() else D11();
  D4():
    deopt 17 [r7];
  D6():
    deopt 24 [r14];
  D11():
    deopt 37 [];
  L24():
    st newObject = r7;
    goto L3(r7);
  L27():
    goto L3(r14);
  L33():
    p9 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p10 = prom<V +>{
      allObjects = ld allObjects;
      allObjects1 = force? allObjects;
      checkMissing(allObjects1);
      return allObjects1;
    };
    r25 = dyn grep[, , fixed](p9, p10, TRUE);
    check L34() else D12();
  D12():
    deopt 42 [r25];
  L34():
    st i = r25;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L5(r27):
    r29 = `==`(r27, 1.0);
    c3 = `as.logical`(r29);
    if c3 then L39() else L6();
  L35():
    i = ld i;
    check L37() else D13();
  L36():
    r26 = dyn base2(<sym i>);
    goto L5(r26);
  D13():
    deopt 46 [i];
  L6():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L9():
    exists1 = ldf exists;
    check L73() else D28();
  L37():
    i1 = force? i;
    checkMissing(i1);
    length = ldf length in base;
    r28 = dyn length(i1);
    check L38() else D14();
  L39():
    env7 = ld env;
    check L40() else D15();
  D14():
    deopt 49 [r28];
  D15():
    deopt 52 [env7];
  D28():
    deopt 97 [];
  L10(r33):
    r35 = `>`(r33, 1.0);
    c6 = `as.logical`(r35);
    if c6 then L54() else L11();
  L38():
    goto L5(r28);
  L40():
    env8 = force? env7;
    checkMissing(env8);
    c4 = `is.object`(env8);
    if c4 then L41() else L42(env8);
  L50():
    i4 = ld i;
    check L52() else D18();
  L51():
    r32 = dyn base3(<sym i>);
    goto L10(r32);
  L73():
    p16 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p17 = prom<V +>{
      table6 = ld table;
      table7 = force? table6;
      checkMissing(table7);
      return table7;
    };
    r51 = dyn exists1[, envir, inherits](p16, p17, FALSE);
    check L74() else D29();
  D18():
    deopt 63 [i4];
  D29():
    deopt 103 [r51];
  L7(dx1):
    st table = dx1;
    goto L9();
  L11():
    stop1 = ldf stop;
    check L71() else D26();
  L41():
    dr = tryDispatchBuiltin.1("[[", env8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(env10):
    allObjects2 = ld allObjects;
    check L44() else D16();
  L52():
    i5 = force? i4;
    checkMissing(i5);
    length1 = ldf length in base;
    r34 = dyn length1(i5);
    check L53() else D19();
  L54():
    allObjects6 = ld allObjects;
    check L55() else D20();
  L74():
    c10 = `as.logical`(r51);
    if c10 then L75() else L15();
  D16():
    deopt 54 [env10, allObjects2];
  D19():
    deopt 66 [r34];
  D20():
    deopt 69 [allObjects6];
  D26():
    deopt 91 [];
  L15():
    stop2 = ldf stop;
    check L79() else D32();
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L44():
    allObjects3 = force? allObjects2;
    checkMissing(allObjects3);
    c5 = `is.object`(allObjects3);
    if c5 then L45() else L46(env10, allObjects3);
  L53():
    goto L10(r34);
  L55():
    allObjects7 = force? allObjects6;
    checkMissing(allObjects7);
    c7 = `is.object`(allObjects7);
    if c7 then L56() else L57(allObjects7);
  L71():
    p15 = prom<V +>{
      gettextf2 = ldf gettextf;
      p14 = prom<V +>{
        sQuote1 = ldf sQuote;
        p13 = prom<V +>{
          what9 = ld what;
          what10 = force? what9;
          checkMissing(what10);
          return what10;
        };
        r44 = dyn sQuote1(p13);
        return r44;
      };
      r46 = dyn gettextf2("does not seem to be a method table for generic %s in tracing environment", p14);
      return r46;
    };
    r48 = dyn stop1[, domain](p15, NA_LGL);
    check L72() else D27();
  L75():
    get1 = ldf get;
    check L76() else D30();
  D27():
    deopt 95 [r48];
  D30():
    deopt 105 [];
  D32():
    deopt 112 [];
  L8(env14, dx3):
    __1 = ldf `[[` in base;
    r31 = dyn __1(env14, dx3);
    goto L7(r31);
  L12(dx6):
    st table = dx6;
    warning = ldf warning;
    check L63() else D22();
  L45():
    dr2 = tryDispatchBuiltin.1("[[", allObjects3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L47() else L46(env10, dr2);
  L46(env12, allObjects5):
    i2 = ld i;
    check L48() else D17();
  L56():
    dr4 = tryDispatchBuiltin.1("[[", allObjects7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(dr4);
  L57(allObjects9):
    i6 = ld i;
    check L59() else D21();
  L72():
    goto L9();
  L76():
    p18 = prom<V +>{
      signature5 = ld signature;
      signature6 = force? signature5;
      checkMissing(signature6);
      return signature6;
    };
    p19 = prom<V +>{
      table8 = ld table;
      table9 = force? table8;
      checkMissing(table9);
      return table9;
    };
    r54 = dyn get1[, envir](p18, p19);
    check L77() else D31();
  L79():
    p24 = prom<V +>{
      gettextf3 = ldf gettextf;
      p21 = prom<V +>{
        sQuote2 = ldf sQuote;
        p20 = prom<V +>{
          what11 = ld what;
          what12 = force? what11;
          checkMissing(what12);
          return what12;
        };
        r56 = dyn sQuote2(p20);
        return r56;
      };
      p23 = prom<V +>{
        sQuote3 = ldf sQuote;
        p22 = prom<V +>{
          signature7 = ld signature;
          signature8 = force? signature7;
          checkMissing(signature8);
          return signature8;
        };
        r59 = dyn sQuote3(p22);
        return r59;
      };
      r61 = dyn gettextf3("no method in methods table for %s for signature %s", p21, p23);
      return r61;
    };
    r63 = dyn stop2[, domain](p24, NA_LGL);
    check L80() else D33();
  D17():
    deopt 56 [env12, allObjects5, i2];
  D21():
    deopt 71 [allObjects9, i6];
  D22():
    deopt 79 [];
  D31():
    deopt 109 [r54];
  D33():
    deopt 116 [r63];
  L47():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(env10, dx2);
  L48():
    i3 = force? i2;
    __ = ldf `[[` in base;
    r30 = dyn __(allObjects5, i3);
    goto L8(env12, r30);
  L58():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx5);
  L59():
    i7 = force? i6;
    checkMissing(i7);
    c8 = `is.object`(i7);
    if c8 then L60() else L61(allObjects9, i7);
  L63():
    p12 = prom<V +>{
      gettextf1 = ldf gettextf;
      p11 = prom<V +>{
        table2 = ld table;
        table3 = force? table2;
        checkMissing(table3);
        return table3;
      };
      r39 = dyn gettextf1("multiple generics match pattern, using table %s", p11);
      return r39;
    };
    r41 = dyn warning[, domain](p12, NA_LGL);
    check L64() else D23();
  L77():
    st newObject = r54;
    goto L4();
  L80():
    goto L4();
  D23():
    deopt 83 [r41];
  L13(allObjects13, dx8):
    __3 = ldf `[[` in base;
    r37 = dyn __3(allObjects13, dx8);
    goto L12(r37);
  L60():
    dr6 = tryDispatchBuiltin.1("[[", i7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(allObjects9, dr6);
  L61(allObjects11, i9):
    __2 = ldf `[[` in base;
    r36 = dyn __2(i9, 1.0);
    goto L13(allObjects11, r36);
  L64():
    env15 = ld env;
    check L65() else D24();
  D24():
    deopt 84 [env15];
  L62():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L13(allObjects9, dx7);
  L65():
    env16 = force? env15;
    checkMissing(env16);
    c9 = `is.object`(env16);
    if c9 then L66() else L67(env16);
  L14(dx10):
    st table = dx10;
    goto L9();
  L66():
    dr8 = tryDispatchBuiltin.1("[[", env16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L68() else L67(dr8);
  L67(env18):
    table4 = ld table;
    check L69() else D25();
  D25():
    deopt 86 [env18, table4];
  L68():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx9);
  L69():
    table5 = force? table4;
    __4 = ldf `[[` in base;
    r42 = dyn __4(env18, table5);
    goto L14(r42);
  }
}