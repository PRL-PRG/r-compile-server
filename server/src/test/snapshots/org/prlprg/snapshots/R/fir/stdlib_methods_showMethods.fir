fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg setClass:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg setMethod:cls, reg signature:cls, reg r10:V, reg p2:p(V +), reg r12:cls, reg p3:p(V +), reg r14:V, reg setMethod1:cls, reg signature1:cls, reg r15:V, reg p4:p(V +), reg r17:cls, reg p5:p(V +), reg r19:V, reg setMethod2:cls, reg r20:cls, reg p6:p(V +), reg r22:V, reg showMethods:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg loadedNamespaces:cls, reg r28:V, reg match:cls, reg r29:V, reg is_na:cls, reg r30:V, reg c1:L, reg loadNamespace:cls, reg r31:V, reg showMethods1:cls, reg r33:V, reg no4:*, reg no5:V, reg c2:L, reg unloadNamespace:cls, reg r34:V |
    mkenv;
    r = clos inner1249346721;
    st showMethods = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    setClass = ldf setClass;
    check L10() else D2();
  L6():
    require = ldf require;
    check L8() else D0();
  L7():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L8():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L9() else D1();
  L10():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c("numeric", "numeric");
      goto L0(r7);
    L2():
      r5 = dyn base1[x, y]("numeric", "numeric");
      goto L0(r5);
    };
    r9 = dyn setClass[, slots]("track", p1);
    check L11() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r9];
  L9():
    goto L0();
  L11():
    setMethod = ldf setMethod;
    check L12() else D4();
  D4():
    deopt 15 [];
  L12():
    p2 = prom<V +>{
      signature = ldf signature;
      r10 = dyn signature[x, y]("track", "missing");
      return r10;
    };
    p3 = prom<V +>{
      r12 = clos inner3924448841;
      return r12;
    };
    r14 = dyn setMethod("plot", p2, p3);
    check L13() else D5();
  D5():
    deopt 19 [r14];
  L13():
    setMethod1 = ldf setMethod;
    check L14() else D6();
  D6():
    deopt 21 [];
  L14():
    p4 = prom<V +>{
      signature1 = ldf signature;
      r15 = dyn signature1[y]("track");
      return r15;
    };
    p5 = prom<V +>{
      r17 = clos inner3924448841;
      return r17;
    };
    r19 = dyn setMethod1("plot", p4, p5);
    check L15() else D7();
  D7():
    deopt 25 [r19];
  L15():
    setMethod2 = ldf setMethod;
    check L16() else D8();
  D8():
    deopt 27 [];
  L16():
    p6 = prom<V +>{
      r20 = clos inner3924448841;
      return r20;
    };
    r22 = dyn setMethod2("plot", "track", p6);
    check L17() else D9();
  D9():
    deopt 31 [r22];
  L17():
    showMethods = ldf showMethods;
    check L18() else D10();
  D10():
    deopt 33 [];
  L18():
    r23 = dyn showMethods[, classes]("plot", "track");
    check L19() else D11();
  D11():
    deopt 37 [r23];
  L19():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L1(r25):
    st no4 = r25;
    c1 = `as.logical`(r25);
    if c1 then L28() else L3();
  L20():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L21():
    r24 = dyn base2(<lang match("stats4", loadedNamespaces())>);
    goto L1(r24);
  L2(r27):
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(r27);
    check L27() else D15();
  L3():
    goto L4();
  L4():
    showMethods1 = ldf showMethods;
    check L32() else D18();
  L22():
    loadedNamespaces = ldf loadedNamespaces;
    check L24() else D12();
  L23():
    r26 = dyn base3("stats4", <lang loadedNamespaces()>);
    goto L2(r26);
  L28():
    loadNamespace = ldf loadNamespace;
    check L29() else D16();
  D12():
    deopt 44 [];
  D15():
    deopt 51 [r30];
  D16():
    deopt 54 [];
  D18():
    deopt 60 [];
  L24():
    r28 = dyn loadedNamespaces();
    check L25() else D13();
  L27():
    goto L1(r30);
  L29():
    r31 = dyn loadNamespace("stats4");
    check L30() else D17();
  L32():
    r33 = dyn showMethods1[classes]("mle");
    check L33() else D19();
  D13():
    deopt 45 [r28];
  D17():
    deopt 56 [r31];
  D19():
    deopt 63 [r33];
  L25():
    match = ldf match in base;
    r29 = dyn match("stats4", r28, NA_INT, NULL);
    check L26() else D14();
  L30():
    goto L4();
  L33():
    no4 = ld no4;
    check L34() else D20();
  D14():
    deopt 49 [r29];
  D20():
    deopt 64 [no4];
  L26():
    goto L2(r29);
  L34():
    no5 = force? no4;
    checkMissing(no5);
    c2 = `as.logical`(no5);
    if c2 then L35() else L5();
  L5():
    invisible.0();
    popenv;
    return NULL;
  L35():
    unloadNamespace = ldf unloadNamespace;
    check L36() else D21();
  D21():
    deopt 67 [];
  L36():
    r34 = dyn unloadNamespace("stats4");
    check L37() else D22();
  D22():
    deopt 69 [r34];
  L37():
    popenv;
    return r34;
  }
}
fun inner1249346721(f, where, classes, includeDefs, inherited, showEmpty, printTo, fdef) {
  (reg f:*, reg where:*, reg classes:*, reg includeDefs:*, reg inherited:*, reg showEmpty:*, reg printTo:*, reg fdef:*) -+> V { var f:*, reg f_isMissing:L, reg f_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var includeDefs:*, reg includeDefs_isMissing:L, reg includeDefs_orDefault:*, var inherited:*, reg inherited_isMissing:L, reg inherited_orDefault:*, reg includeDefs1:*, reg includeDefs2:V, reg r6:V, reg p3:p(V +), var showEmpty:*, var printTo:*, reg printTo_isMissing:L, reg printTo_orDefault:*, reg stdout:cls, reg r8:V, reg p4:p(V +), var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p5:p(V +), reg where1:*, reg where2:V, reg p6:p(V +), reg r12:V, reg p7:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg missing1:cls, reg r19:V, reg r20:V, reg isFALSE:cls, reg printTo1:*, reg printTo2:V, reg p8:p(V +), reg r23:V, reg c1:L, reg textConnection:cls, reg r24:V, reg r25:V, reg printTo3:*, reg printTo4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg f3:*, reg f4:V, reg is_function:cls, reg r28:V, reg c2:L, reg f5:*, reg f6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg missing2:cls, reg r31:V, reg c3:L, reg environment:cls, reg f7:*, reg f8:V, reg p9:p(V +), reg r33:V, reg deparse1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg substitute:cls, reg r37:V, reg p10:p(V +), reg r39:V, reg is:cls, reg f9:*, reg f10:V, reg p11:p(V +), reg r42:V, reg r43:V, reg c4:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg f11:*, reg f12:V, reg class:cls, reg r46:V, reg p12:p(V +), reg r48:V, reg p13:p(V +), reg r50:V, reg p14:p(V +), reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg f13:*, reg f14:V, reg length:cls, reg r56:V, reg r57:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg missing3:cls, reg r60:V, reg c6:L, reg getGenerics:cls, reg r61:V, reg r62:V, reg getGenerics1:cls, reg where3:*, reg where4:V, reg p15:p(V +), reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg f15:*, reg f16:V, reg length1:cls, reg r68:V, reg r69:V, reg c7:L, reg cat:cls, reg con:*, reg con1:V, reg p16:p(V +), reg r71:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg r74:V, reg f17:*, reg f18:V, reg length2:cls, reg r75:V, reg r76:V, reg c8:L, reg f19:*, reg f20:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg getGeneric1:cls, reg ff:*, reg ff1:V, reg p17:p(V +), reg where5:*, reg where6:V, reg p18:p(V +), reg r79:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r80:V, reg i7:I, reg r81:V, reg missing4:cls, reg r82:V, reg c10:L, reg isGeneric:cls, reg ff2:*, reg ff3:V, reg p19:p(V +), reg r84:V, reg c11:L, reg Recall:cls, reg ff4:*, reg ff5:V, reg p20:p(V +), reg classes1:*, reg classes2:V, reg p21:p(V +), reg includeDefs3:*, reg includeDefs4:V, reg p22:p(V +), reg inherited1:*, reg inherited2:V, reg p23:p(V +), reg showEmpty1:*, reg showEmpty2:V, reg p24:p(V +), reg con2:*, reg con3:V, reg p25:p(V +), reg ffdef:*, reg ffdef1:V, reg p26:p(V +), reg r92:V, reg i12:I, reg r93:V, reg i13:I, reg isGeneric1:cls, reg ff6:*, reg ff7:V, reg p27:p(V +), reg where7:*, reg where8:V, reg p28:p(V +), reg r97:V, reg c12:L, reg Recall1:cls, reg ff8:*, reg ff9:V, reg p29:p(V +), reg where9:*, reg where10:V, reg p30:p(V +), reg classes3:*, reg classes4:V, reg p31:p(V +), reg includeDefs5:*, reg includeDefs6:V, reg p32:p(V +), reg inherited3:*, reg inherited4:V, reg p33:p(V +), reg showEmpty3:*, reg showEmpty4:V, reg p34:p(V +), reg con4:*, reg con5:V, reg p35:p(V +), reg ffdef2:*, reg ffdef3:V, reg p36:p(V +), reg r106:V, reg paste0:cls, reg f21:*, reg f22:V, reg p37:p(V +), reg r108:V, reg is1:cls, reg fdef1:*, reg fdef2:V, reg p38:p(V +), reg r110:V, reg r111:V, reg c13:L, reg cat1:cls, reg con6:*, reg con7:V, reg p39:p(V +), reg out:*, reg out1:V, reg p40:p(V +), reg r114:V, reg _showMethodsTable:cls, reg fdef3:*, reg fdef4:V, reg p41:p(V +), reg includeDefs7:*, reg includeDefs8:V, reg p42:p(V +), reg inherited5:*, reg inherited6:V, reg p43:p(V +), reg classes5:*, reg classes6:V, reg p44:p(V +), reg showEmpty5:*, reg showEmpty6:V, reg p45:p(V +), reg con8:*, reg con9:V, reg p46:p(V +), reg r121:V, reg isFALSE1:cls, reg printTo5:*, reg printTo6:V, reg p47:p(V +), reg r123:V, reg c14:L, reg textConnectionValue:cls, reg con10:*, reg con11:V, reg p48:p(V +), reg r125:V, reg close:cls, reg con12:*, reg con13:V, reg p49:p(V +), reg r127:V, reg txtOut:*, reg txtOut1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r128:V, reg r129:V, reg printTo7:*, reg printTo8:V, reg invisible:cls, reg r130:V |
    mkenv;
    f_isMissing = missing.0(f);
    if f_isMissing then L0() else L1(f);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(f_orDefault):
    st f = f_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r2 = dyn parent_frame();
        return r2;
      };
      r4 = dyn topenv(p1);
      return r4;
    };
    goto L3(p2);
  L3(where_orDefault):
    st where = where_orDefault;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L4(NULL) else L4(classes);
  L4(classes_orDefault):
    st classes = classes_orDefault;
    includeDefs_isMissing = missing.0(includeDefs);
    if includeDefs_isMissing then L5(FALSE) else L5(includeDefs);
  L5(includeDefs_orDefault):
    st includeDefs = includeDefs_orDefault;
    inherited_isMissing = missing.0(inherited);
    if inherited_isMissing then L6() else L7(inherited);
  L6():
    p3 = prom<V +>{
      includeDefs1 = ld includeDefs;
      includeDefs2 = force? includeDefs1;
      checkMissing(includeDefs2);
      r6 = `!`(includeDefs2);
      return r6;
    };
    goto L7(p3);
  L7(inherited_orDefault):
    st inherited = inherited_orDefault;
    st showEmpty = showEmpty;
    printTo_isMissing = missing.0(printTo);
    if printTo_isMissing then L8() else L9(printTo);
  L8():
    p4 = prom<V +>{
      stdout = ldf stdout;
      r8 = dyn stdout();
      return r8;
    };
    goto L9(p4);
  L9(printTo_orDefault):
    st printTo = printTo_orDefault;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L10() else L11(fdef);
  L10():
    p7 = prom<V +>{
      getGeneric = ldf getGeneric;
      p5 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p6 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r12 = dyn getGeneric[, where](p5, p6);
      return r12;
    };
    goto L11(p7);
  L11(fdef_orDefault):
    st fdef = fdef_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L48() else L49();
  L12(r15):
    c = `as.logical`(r15);
    if c then L50() else L13();
  L48():
    missing = ldf missing in base;
    r16 = dyn missing(<sym showEmpty>);
    goto L12(r16);
  L49():
    r14 = dyn base(<sym showEmpty>);
    goto L12(r14);
  L13():
    goto L15();
  L15():
    isFALSE = ldf isFALSE;
    check L54() else D0();
  L50():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  D0():
    deopt 11 [];
  L14(r18):
    r20 = `!`(r18);
    st showEmpty = r20;
    goto L15();
  L51():
    missing1 = ldf missing in base;
    r19 = dyn missing1(<sym f>);
    goto L14(r19);
  L52():
    r17 = dyn base1(<sym f>);
    goto L14(r17);
  L54():
    p8 = prom<V +>{
      printTo1 = ld printTo;
      printTo2 = force? printTo1;
      checkMissing(printTo2);
      return printTo2;
    };
    r23 = dyn isFALSE(p8);
    check L55() else D1();
  D1():
    deopt 13 [r23];
  L55():
    c1 = `as.logical`(r23);
    if c1 then L56() else L16();
  L16():
    printTo3 = ld printTo;
    check L60() else D4();
  L17(r25):
    st con = r25;
    sym2 = ldf `is.function`;
    base2 = ldf `is.function` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  L56():
    textConnection = ldf textConnection;
    check L57() else D2();
  D2():
    deopt 15 [];
  D4():
    deopt 19 [printTo3];
  L18(r27):
    c2 = `as.logical`(r27);
    if c2 then L65() else L19();
  L57():
    r24 = dyn textConnection(NULL, "w");
    check L58() else D3();
  L60():
    printTo4 = force? printTo3;
    checkMissing(printTo4);
    goto L17(printTo4);
  L61():
    f3 = ld f;
    check L63() else D5();
  L62():
    r26 = dyn base2(<sym f>);
    goto L18(r26);
  D3():
    deopt 18 [r24];
  D5():
    deopt 24 [f3];
  L19():
    goto L23();
  L23():
    is = ldf is;
    check L76() else D12();
  L58():
    goto L17(r24);
  L63():
    f4 = force? f3;
    checkMissing(f4);
    is_function = ldf `is.function` in base;
    r28 = dyn is_function(f4);
    check L64() else D6();
  L65():
    f5 = ld f;
    check L66() else D7();
  D6():
    deopt 27 [r28];
  D7():
    deopt 28 [f5];
  D12():
    deopt 49 [];
  L64():
    goto L18(r28);
  L66():
    f6 = force? f5;
    checkMissing(f6);
    st fdef = f6;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L76():
    p11 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r42 = dyn is(p11, "character");
    check L77() else D13();
  D13():
    deopt 52 [r42];
  L20(r30):
    c3 = `as.logical`(r30);
    if c3 then L69() else L21();
  L67():
    missing2 = ldf missing in base;
    r31 = dyn missing2(<sym where>);
    goto L20(r31);
  L68():
    r29 = dyn base3(<sym where>);
    goto L20(r29);
  L77():
    r43 = `!`(r42);
    c4 = `as.logical`(r43);
    if c4 then L78() else L24();
  L21():
    goto L22();
  L22():
    deparse1 = ldf deparse1;
    check L73() else D10();
  L24():
    goto L25();
  L25():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L69():
    environment = ldf environment;
    check L70() else D8();
  L78():
    stop = ldf stop;
    check L79() else D14();
  D8():
    deopt 35 [];
  D10():
    deopt 42 [];
  D14():
    deopt 55 [];
  L26(r55):
    r57 = `==`(r55, 0);
    c5 = `as.logical`(r57);
    if c5 then L86() else L27();
  L70():
    p9 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r33 = dyn environment(p9);
    check L71() else D9();
  L73():
    p10 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      substitute = ldf substitute in base;
      r37 = dyn substitute(<sym f>);
      goto L0(r37);
    L2():
      r35 = dyn base4(<sym f>);
      goto L0(r35);
    };
    r39 = dyn deparse1(p10);
    check L74() else D11();
  L79():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        dQuote = ldf dQuote;
        p12 = prom<V +>{
          sym5 = ldf class;
          base5 = ldf class in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r45):
          return r45;
        L1():
          f11 = ld f;
          f12 = force? f11;
          checkMissing(f12);
          class = ldf class in base;
          r46 = dyn class(f12);
          goto L0(r46);
        L2():
          r44 = dyn base5(<sym f>);
          goto L0(r44);
        };
        r48 = dyn dQuote(p12);
        return r48;
      };
      r50 = dyn gettextf("first argument should be the names of one of more generic functions (got object of class %s)", p13);
      return r50;
    };
    r52 = dyn stop[, domain](p14, NA_LGL);
    check L80() else D15();
  L82():
    f13 = ld f;
    check L84() else D16();
  L83():
    r54 = dyn base6(<sym f>);
    goto L26(r54);
  D9():
    deopt 37 [r33];
  D11():
    deopt 44 [r39];
  D15():
    deopt 59 [r52];
  D16():
    deopt 64 [f13];
  L27():
    goto L31();
  L31():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L96() else L97();
  L71():
    st where = r33;
    goto L22();
  L74():
    st f = r39;
    goto L23();
  L80():
    goto L25();
  L84():
    f14 = force? f13;
    checkMissing(f14);
    length = ldf length in base;
    r56 = dyn length(f14);
    check L85() else D17();
  L86():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  D17():
    deopt 67 [r56];
  L28(r59):
    c6 = `as.logical`(r59);
    if c6 then L89() else L29();
  L32(r67):
    r69 = `==`(r67, 0);
    c7 = `as.logical`(r69);
    if c7 then L100() else L33();
  L85():
    goto L26(r56);
  L87():
    missing3 = ldf missing in base;
    r60 = dyn missing3(<sym where>);
    goto L28(r60);
  L88():
    r58 = dyn base7(<sym where>);
    goto L28(r58);
  L96():
    f15 = ld f;
    check L98() else D22();
  L97():
    r66 = dyn base8(<sym f>);
    goto L32(r66);
  D22():
    deopt 85 [f15];
  L29():
    getGenerics1 = ldf getGenerics;
    check L93() else D20();
  L30(r62):
    st f = r62;
    goto L31();
  L33():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L104() else L105();
  L34():
    isFALSE1 = ldf isFALSE;
    check L140() else D47();
  L89():
    getGenerics = ldf getGenerics;
    check L90() else D18();
  L98():
    f16 = force? f15;
    checkMissing(f16);
    length1 = ldf length in base;
    r68 = dyn length1(f16);
    check L99() else D23();
  L100():
    cat = ldf cat;
    check L101() else D24();
  D18():
    deopt 74 [];
  D20():
    deopt 77 [];
  D23():
    deopt 88 [r68];
  D24():
    deopt 92 [];
  D47():
    deopt 200 [];
  L35(r74):
    r76 = `>`(r74, 1);
    c8 = `as.logical`(r76);
    if c8 then L108() else L36();
  L90():
    r61 = dyn getGenerics();
    check L91() else D19();
  L93():
    p15 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r64 = dyn getGenerics1(p15);
    check L94() else D21();
  L99():
    goto L32(r68);
  L101():
    p16 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r71 = dyn cat[file, ](p16, "no applicable functions\n");
    check L102() else D25();
  L104():
    f17 = ld f;
    check L106() else D26();
  L105():
    r73 = dyn base9(<sym f>);
    goto L35(r73);
  L140():
    p47 = prom<V +>{
      printTo5 = ld printTo;
      printTo6 = force? printTo5;
      checkMissing(printTo6);
      return printTo6;
    };
    r123 = dyn isFALSE1(p47);
    check L141() else D48();
  D19():
    deopt 75 [r61];
  D21():
    deopt 79 [r64];
  D25():
    deopt 96 [r71];
  D26():
    deopt 99 [f17];
  D48():
    deopt 202 [r123];
  L36():
    paste0 = ldf paste0;
    check L130() else D39();
  L91():
    goto L30(r61);
  L94():
    goto L30(r64);
  L102():
    goto L34();
  L106():
    f18 = force? f17;
    checkMissing(f18);
    length2 = ldf length in base;
    r75 = dyn length2(f18);
    check L107() else D27();
  L108():
    f19 = ld f;
    check L109() else D28();
  L141():
    c14 = `as.logical`(r123);
    if c14 then L142() else L46();
  D27():
    deopt 102 [r75];
  D28():
    deopt 105 [f19];
  D39():
    deopt 168 [];
  L46():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L149() else L150();
  L107():
    goto L35(r75);
  L109():
    f20 = force? f19;
    checkMissing(f20);
    s = toForSeq(f20);
    l = length(s);
    i = 0;
    goto L37(i);
  L130():
    p37 = prom<V +>{
      f21 = ld f;
      f22 = force? f21;
      checkMissing(f22);
      return f22;
    };
    r108 = dyn paste0("\nFunction \"", p37, "\":\n");
    check L131() else D40();
  L142():
    textConnectionValue = ldf textConnectionValue;
    check L143() else D49();
  D40():
    deopt 172 [r108];
  D49():
    deopt 204 [];
  L37(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L110() else L44();
  L47(r129):
    popenv;
    return r129;
  L131():
    st out = r108;
    is1 = ldf is;
    check L132() else D41();
  L143():
    p48 = prom<V +>{
      con10 = ld con;
      con11 = force? con10;
      checkMissing(con11);
      return con11;
    };
    r125 = dyn textConnectionValue(p48);
    check L144() else D50();
  L149():
    printTo7 = ld printTo;
    check L151() else D54();
  L150():
    r128 = dyn base11(<sym printTo>);
    goto L47(r128);
  D41():
    deopt 175 [];
  D50():
    deopt 206 [r125];
  D54():
    deopt 216 [printTo7];
  L44():
    x = `[[`(s, i2, NULL, TRUE);
    st ff = x;
    getGeneric1 = ldf getGeneric;
    check L111() else D29();
  L110():
    goto L34();
  L132():
    p38 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r110 = dyn is1(p38, "genericFunction");
    check L133() else D42();
  L144():
    st txtOut = r125;
    close = ldf close;
    check L145() else D51();
  L151():
    printTo8 = force? printTo7;
    checkMissing(printTo8);
    invisible = ldf invisible in base;
    r130 = dyn invisible(printTo8);
    check L152() else D55();
  D29():
    deopt 108 [i2];
  D42():
    deopt 178 [r110];
  D51():
    deopt 209 [];
  D55():
    deopt 219 [r130];
  L111():
    p17 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    p18 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r79 = dyn getGeneric1[, where](p17, p18);
    check L112() else D30();
  L133():
    r111 = `!`(r110);
    c13 = `as.logical`(r111);
    if c13 then L134() else L45();
  L145():
    p49 = prom<V +>{
      con12 = ld con;
      con13 = force? con12;
      checkMissing(con13);
      return con13;
    };
    r127 = dyn close(p49);
    check L146() else D52();
  L152():
    goto L47(r130);
  D30():
    deopt 112 [i2, r79];
  D52():
    deopt 211 [r127];
  L45():
    _showMethodsTable = ldf `.showMethodsTable`;
    check L138() else D45();
  L112():
    st ffdef = r79;
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  L134():
    cat1 = ldf cat;
    check L135() else D43();
  L146():
    txtOut = ld txtOut;
    check L147() else D53();
  D43():
    deopt 181 [];
  D45():
    deopt 188 [];
  D53():
    deopt 212 [txtOut];
  L38(i7, r81):
    c10 = `as.logical`(r81);
    if c10 then L115() else L39();
  L113():
    missing4 = ldf missing in base;
    r82 = dyn missing4(<sym where>);
    goto L38(i2, r82);
  L114():
    r80 = dyn base10(<sym where>);
    goto L38(i2, r80);
  L135():
    p39 = prom<V +>{
      con6 = ld con;
      con7 = force? con6;
      checkMissing(con7);
      return con7;
    };
    p40 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r114 = dyn cat1[file, , ](p39, p40, "<not an S4 generic function>\n");
    check L136() else D44();
  L138():
    p41 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p42 = prom<V +>{
      includeDefs7 = ld includeDefs;
      includeDefs8 = force? includeDefs7;
      checkMissing(includeDefs8);
      return includeDefs8;
    };
    p43 = prom<V +>{
      inherited5 = ld inherited;
      inherited6 = force? inherited5;
      checkMissing(inherited6);
      return inherited6;
    };
    p44 = prom<V +>{
      classes5 = ld classes;
      classes6 = force? classes5;
      checkMissing(classes6);
      return classes6;
    };
    p45 = prom<V +>{
      showEmpty5 = ld showEmpty;
      showEmpty6 = force? showEmpty5;
      checkMissing(showEmpty6);
      return showEmpty6;
    };
    p46 = prom<V +>{
      con8 = ld con;
      con9 = force? con8;
      checkMissing(con9);
      return con9;
    };
    r121 = dyn _showMethodsTable[, , , classes, showEmpty, printTo](p41, p42, p43, p44, p45, p46);
    check L139() else D46();
  L147():
    txtOut1 = force? txtOut;
    checkMissing(txtOut1);
    popenv;
    return txtOut1;
  D44():
    deopt 186 [r114];
  D46():
    deopt 198 [r121];
  L39():
    isGeneric1 = ldf isGeneric;
    check L123() else D35();
  L42(i13):
    goto L37(i13);
  L115():
    isGeneric = ldf isGeneric;
    check L116() else D31();
  L136():
    goto L34();
  L139():
    goto L34();
  D31():
    deopt 118 [i7];
  D35():
    deopt 140 [i7];
  L116():
    p19 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r84 = dyn isGeneric(p19);
    check L117() else D32();
  L123():
    p27 = prom<V +>{
      ff6 = ld ff;
      ff7 = force? ff6;
      checkMissing(ff7);
      return ff7;
    };
    p28 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r97 = dyn isGeneric1(p27, p28);
    check L124() else D36();
  D32():
    deopt 120 [i7, r84];
  D36():
    deopt 143 [i7, r97];
  L117():
    c11 = `as.logical`(r84);
    if c11 then L118() else L40();
  L124():
    c12 = `as.logical`(r97);
    if c12 then L125() else L43();
  L40():
    goto L41(i7, NULL);
  L41(i12, r93):
    goto L42(i12);
  L43():
    goto L42(i7);
  L118():
    Recall = ldf Recall;
    check L119() else D33();
  L125():
    Recall1 = ldf Recall;
    check L126() else D37();
  D33():
    deopt 122 [i7];
  D37():
    deopt 145 [i7];
  L119():
    p20 = prom<V +>{
      ff4 = ld ff;
      ff5 = force? ff4;
      checkMissing(ff5);
      return ff5;
    };
    p21 = prom<V +>{
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      return classes2;
    };
    p22 = prom<V +>{
      includeDefs3 = ld includeDefs;
      includeDefs4 = force? includeDefs3;
      checkMissing(includeDefs4);
      return includeDefs4;
    };
    p23 = prom<V +>{
      inherited1 = ld inherited;
      inherited2 = force? inherited1;
      checkMissing(inherited2);
      return inherited2;
    };
    p24 = prom<V +>{
      showEmpty1 = ld showEmpty;
      showEmpty2 = force? showEmpty1;
      checkMissing(showEmpty2);
      return showEmpty2;
    };
    p25 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    p26 = prom<V +>{
      ffdef = ld ffdef;
      ffdef1 = force? ffdef;
      checkMissing(ffdef1);
      return ffdef1;
    };
    r92 = dyn Recall[, classes, includeDefs, inherited, showEmpty, printTo, fdef](p20, p21, p22, p23, p24, p25, p26);
    check L120() else D34();
  L126():
    p29 = prom<V +>{
      ff8 = ld ff;
      ff9 = force? ff8;
      checkMissing(ff9);
      return ff9;
    };
    p30 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    p31 = prom<V +>{
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      return classes4;
    };
    p32 = prom<V +>{
      includeDefs5 = ld includeDefs;
      includeDefs6 = force? includeDefs5;
      checkMissing(includeDefs6);
      return includeDefs6;
    };
    p33 = prom<V +>{
      inherited3 = ld inherited;
      inherited4 = force? inherited3;
      checkMissing(inherited4);
      return inherited4;
    };
    p34 = prom<V +>{
      showEmpty3 = ld showEmpty;
      showEmpty4 = force? showEmpty3;
      checkMissing(showEmpty4);
      return showEmpty4;
    };
    p35 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    p36 = prom<V +>{
      ffdef2 = ld ffdef;
      ffdef3 = force? ffdef2;
      checkMissing(ffdef3);
      return ffdef3;
    };
    r106 = dyn Recall1[, where, classes, includeDefs, inherited, showEmpty, printTo, fdef](p29, p30, p31, p32, p33, p34, p35, p36);
    check L127() else D38();
  D34():
    deopt 136 [i7, r92];
  D38():
    deopt 161 [i7, r106];
  L120():
    goto L41(i7, r92);
  L127():
    goto L42(i7);
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg plot:cls, reg slot:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg slot1:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg ddd1:dots?, reg r6:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      slot = ldf slot;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn slot(p, "x");
      return r1;
    };
    p3 = prom<V +>{
      slot1 = ldf slot;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r4 = dyn slot1(p2, "y");
      return r4;
    };
    ddd1 = ld `...`;
    r6 = dyn plot[, , `...`](p1, p3, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}