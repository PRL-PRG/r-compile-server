fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3218627976;
    st `.setObjectParent` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3218627976(refMethods, refSuperClasses, where) {
  (reg refMethods:*, reg refSuperClasses:*, reg where:*) -+> V { var refMethods:*, var refSuperClasses:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg emptyenv:cls, reg r2:V, reg refSuperClasses1:*, reg refSuperClasses2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg i7:I, reg r4:V, reg cl:*, reg cl1:V, reg identical:cls, reg r5:V, reg c1:L, reg __:cls, reg r7:V, reg clRefMethods:*, reg clRefMethods1:V, reg c2:L, reg i14:I, reg clRefMethods3:V, reg dr:V, reg dc:L, reg dx:V, reg i16:I, reg dx1:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg i19:I, reg r10:V, reg env:*, reg env1:V, reg empty:*, reg empty1:V, reg identical1:cls, reg r11:V, reg c3:L, reg clEnv:*, reg clEnv1:V, reg clRefMethods4:*, reg clRefMethods5:V, reg c4:L, reg i23:I, reg clRefMethods7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i25:I, reg dx3:V, reg r12:V, reg i26:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg i29:I, reg r14:V, reg clEnv2:*, reg clEnv3:V, reg env2:*, reg env3:V, reg identical2:cls, reg r15:V, reg r16:V, reg c5:L, reg r17:cls, reg stop:cls, reg gettextf:cls, reg _nQuote:cls, reg clRefMethods8:*, reg clRefMethods9:V, reg c6:L, reg clRefMethods11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r18:V, reg p:p(V +), reg r20:V, reg p1:p(V +), reg _nQuote1:cls, reg pkg:*, reg pkg1:V, reg p2:p(V +), reg r23:V, reg p3:p(V +), reg r25:V, reg p4:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg env4:*, reg env5:V, reg empty2:*, reg empty3:V, reg identical3:cls, reg r30:V, reg c7:L, reg where1:*, reg where2:V, reg c8:L, reg where4:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg pkg2:*, reg pkg3:V, reg c9:V, reg c10:L, reg where5:*, reg where6:V, reg l1:*, reg c11:L, reg where8:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r35:V, reg pkg4:*, reg pkg5:V, reg l4:*, reg c12:L, reg pkg7:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx11:V, reg pkg9:V, reg dx12:V, reg r36:V, reg env6:*, reg env7:V, reg l7:*, reg c13:L, reg env9:V, reg l9:*, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r37:V, reg pkg10:*, reg pkg11:V, reg l10:*, reg c14:L, reg pkg13:V, reg l12:*, reg dr14:V, reg dc7:L, reg dx15:V, reg pkg15:V, reg dx16:V, reg r38:V |
    mkenv;
    st refMethods = refMethods;
    st refSuperClasses = refSuperClasses;
    st where = where;
    sym = ldf emptyenv;
    base = ldf emptyenv in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st empty = r1;
    st env = r1;
    refSuperClasses1 = ld refSuperClasses;
    check L20() else D1();
  L17():
    emptyenv = ldf emptyenv in base;
    r2 = dyn emptyenv();
    check L19() else D0();
  L18():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [refSuperClasses1];
  L19():
    goto L0(r2);
  L20():
    refSuperClasses2 = force? refSuperClasses1;
    checkMissing(refSuperClasses2);
    s = toForSeq(refSuperClasses2);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L21() else L11();
  L4():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L21():
    goto L4();
  L2(i7, r4):
    c1 = `as.logical`(r4);
    if c1 then L26() else L3();
  L12(r29):
    c7 = `as.logical`(r29);
    if c7 then L61() else L13();
  L22():
    cl = ld cl;
    check L24() else D2();
  L23():
    r3 = dyn base1(<sym cl>, "envRefClass");
    goto L2(i2, r3);
  L56():
    env4 = ld env;
    check L58() else D15();
  L57():
    r28 = dyn base4(<sym env>, <sym empty>);
    goto L12(r28);
  D2():
    deopt 10 [i2, cl];
  D15():
    deopt 85 [env4];
  L3():
    __ = ldf `@` in base;
    r7 = dyn __(<lang getClass(cl)>, <sym refMethods>);
    st clRefMethods = r7;
    clRefMethods = ld clRefMethods;
    check L29() else D4();
  L13():
    env6 = ld env;
    check L83() else D22();
  L24():
    cl1 = force? cl;
    checkMissing(cl1);
    identical = ldf identical in base;
    r5 = dyn identical(cl1, "envRefClass", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L25() else D3();
  L26():
    goto L4();
  L58():
    env5 = force? env4;
    checkMissing(env5);
    empty2 = ld empty;
    check L59() else D16();
  L61():
    where1 = ld where;
    check L62() else D18();
  D3():
    deopt 21 [i2, r5];
  D4():
    deopt 29 [i7, clRefMethods];
  D16():
    deopt 87 [empty2];
  D18():
    deopt 98 [where1];
  D22():
    deopt 122 [env6];
  L25():
    goto L2(i2, r5);
  L29():
    clRefMethods1 = force? clRefMethods;
    checkMissing(clRefMethods1);
    c2 = `is.object`(clRefMethods1);
    if c2 then L31() else L32(i7, clRefMethods1);
  L59():
    empty3 = force? empty2;
    checkMissing(empty3);
    identical3 = ldf identical in base;
    r30 = dyn identical3(env5, empty3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L60() else D17();
  L62():
    where2 = force? where1;
    checkMissing(where2);
    c8 = `is.object`(where2);
    if c8 then L64() else L65(where2);
  L83():
    env7 = force? env6;
    checkMissing(env7);
    l7 = ld refMethods;
    c13 = `is.object`(l7);
    if c13 then L85() else L86(env7, l7);
  D17():
    deopt 97 [r30];
  L30(i16, dx1):
    st clEnv = dx1;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L31():
    dr = tryDispatchBuiltin.1("$", clRefMethods1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(i7, dr);
  L32(i14, clRefMethods3):
    r8 = `$`(clRefMethods3, <sym .objectParent>);
    goto L30(i14, r8);
  L60():
    goto L12(r30);
  L63(dx8):
    st pkg = dx8;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L64():
    dr6 = tryDispatchBuiltin.1("$", where2);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(dr6);
  L65(where4):
    r31 = `$`(where4, <sym .packageName>);
    goto L63(r31);
  L84(dx14):
    st refMethods = dx14;
    pkg10 = ld pkg;
    check L88() else D23();
  L85():
    dr12 = tryDispatchBuiltin.0("$<-", l7, env7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L87() else L86(env7, dr12);
  L86(env9, l9):
    r37 = `$<-`(l9, <sym .objectParent>, env7);
    goto L84(r37);
  D23():
    deopt 127 [pkg10];
  L6(i19, r10):
    c3 = `as.logical`(r10);
    if c3 then L39() else L7();
  L14(r33):
    c10 = `as.logical`(r33);
    if c10 then L70() else L15();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(i7, dx);
  L34():
    env = ld env;
    check L36() else D5();
  L35():
    r9 = dyn base2(<sym env>, <sym empty>);
    goto L6(i16, r9);
  L66():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L63(dx7);
  L67():
    pkg2 = ld pkg;
    check L69() else D19();
  L68():
    r32 = dyn base5(<sym pkg>);
    goto L14(r32);
  L87():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L84(dx13);
  L88():
    pkg11 = force? pkg10;
    checkMissing(pkg11);
    l10 = ld refMethods;
    c14 = `is.object`(l10);
    if c14 then L90() else L91(pkg11, l10);
  D5():
    deopt 35 [i16, env];
  D19():
    deopt 103 [pkg2];
  L7():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L8(i26):
    goto L1(i26);
  L15():
    goto L16();
  L16():
    where5 = ld where;
    check L72() else D20();
  L36():
    env1 = force? env;
    checkMissing(env1);
    empty = ld empty;
    check L37() else D6();
  L39():
    clEnv = ld clEnv;
    check L40() else D8();
  L69():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    c9 = `==`(pkg3, NULL);
    goto L14(c9);
  L70():
    st pkg = ".GlobalEnv";
    goto L16();
  L89(pkg15, dx16):
    st refMethods = dx16;
    invisible.0();
    popenv;
    return pkg15;
  L90():
    dr14 = tryDispatchBuiltin.0("$<-", l10, pkg11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L92() else L91(pkg11, dr14);
  L91(pkg13, l12):
    r38 = `$<-`(l12, <sym .objectPackage>, pkg11);
    goto L89(pkg13, r38);
  D6():
    deopt 37 [i16, empty];
  D8():
    deopt 48 [i19, clEnv];
  D20():
    deopt 111 [where5];
  L9(i29, r14):
    r16 = `!`(r14);
    c5 = `as.logical`(r16);
    if c5 then L52() else L10();
  L37():
    empty1 = force? empty;
    checkMissing(empty1);
    identical1 = ldf identical in base;
    r11 = dyn identical1(env1, empty1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L38() else D7();
  L40():
    clEnv1 = force? clEnv;
    checkMissing(clEnv1);
    st env = clEnv1;
    clRefMethods4 = ld clRefMethods;
    check L41() else D9();
  L47():
    clEnv2 = ld clEnv;
    check L49() else D10();
  L48():
    r13 = dyn base3(<sym clEnv>, <sym env>);
    goto L9(i19, r13);
  L72():
    where6 = force? where5;
    checkMissing(where6);
    l1 = ld refMethods;
    c11 = `is.object`(l1);
    if c11 then L74() else L75(where6, l1);
  L92():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L89(pkg11, dx15);
  D7():
    deopt 47 [i16, r11];
  D9():
    deopt 51 [i19, clRefMethods4];
  D10():
    deopt 57 [i19, clEnv2];
  L10():
    goto L8(i29);
  L38():
    goto L6(i16, r11);
  L41():
    clRefMethods5 = force? clRefMethods4;
    checkMissing(clRefMethods5);
    c4 = `is.object`(clRefMethods5);
    if c4 then L43() else L44(i19, clRefMethods5);
  L49():
    clEnv3 = force? clEnv2;
    checkMissing(clEnv3);
    env2 = ld env;
    check L50() else D11();
  L52():
    r17 = clos inner2203017188;
    st `.nQuote` = r17;
    stop = ldf stop;
    check L53() else D13();
  L73(dx10):
    st refMethods = dx10;
    pkg4 = ld pkg;
    check L77() else D21();
  L74():
    dr8 = tryDispatchBuiltin.0("$<-", l1, where6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(where6, dr8);
  L75(where8, l3):
    r35 = `$<-`(l3, <sym .objectParent>, where6);
    goto L73(r35);
  D11():
    deopt 59 [i19, env2];
  D13():
    deopt 75 [i29];
  D21():
    deopt 116 [pkg4];
  L42(i25, dx3):
    st pkg = dx3;
    goto L8(i25);
  L43():
    dr2 = tryDispatchBuiltin.1("$", clRefMethods5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(i19, dr2);
  L44(i23, clRefMethods7):
    r12 = `$`(clRefMethods7, <sym .objectPackage>);
    goto L42(i23, r12);
  L50():
    env3 = force? env2;
    checkMissing(env3);
    identical2 = ldf identical in base;
    r15 = dyn identical2(clEnv3, env3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L51() else D12();
  L53():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        _nQuote = ldf `.nQuote`;
        p = prom<V +>{
          clRefMethods8 = ld clRefMethods;
          clRefMethods9 = force? clRefMethods8;
          checkMissing(clRefMethods9);
          c6 = `is.object`(clRefMethods9);
          if c6 then L1() else L2(clRefMethods9);
        L0(dx6):
          return dx6;
        L1():
          dr4 = tryDispatchBuiltin.1("$", clRefMethods9);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(clRefMethods11):
          r18 = `$`(clRefMethods11, <sym .objectPackage>);
          goto L0(r18);
        L3():
          dx5 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx5);
        };
        r20 = dyn _nQuote(p);
        return r20;
      };
      p3 = prom<V +>{
        _nQuote1 = ldf `.nQuote`;
        p2 = prom<V +>{
          pkg = ld pkg;
          pkg1 = force? pkg;
          checkMissing(pkg1);
          return pkg1;
        };
        r23 = dyn _nQuote1(p2);
        return r23;
      };
      r25 = dyn gettextf("Reference superclasses must come from the same package for the environment to be defined:  got %s and %s", p1, p3);
      return r25;
    };
    r27 = dyn stop(p4);
    check L54() else D14();
  L76():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L73(dx9);
  L77():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    l4 = ld refMethods;
    c12 = `is.object`(l4);
    if c12 then L79() else L80(pkg5, l4);
  D12():
    deopt 69 [i19, r15];
  D14():
    deopt 77 [i29, r27];
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L42(i19, dx2);
  L51():
    goto L9(i19, r15);
  L54():
    goto L8(i29);
  L78(pkg9, dx12):
    st refMethods = dx12;
    invisible.0();
    popenv;
    return pkg9;
  L79():
    dr10 = tryDispatchBuiltin.0("$<-", l4, pkg5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(pkg5, dr10);
  L80(pkg7, l6):
    r36 = `$<-`(l6, <sym .objectPackage>, pkg5);
    goto L78(pkg7, r36);
  L81():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L78(pkg5, dx11);
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg paste0:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st what = what;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    r1 = dyn paste0("\"", p, "\"");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}