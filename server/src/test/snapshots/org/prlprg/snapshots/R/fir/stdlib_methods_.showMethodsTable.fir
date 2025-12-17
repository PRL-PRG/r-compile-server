fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2546867021;
    st `.showMethodsTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2546867021(generic, includeDefs, inherited, classes, showEmpty, printTo) {
  (reg generic:*, reg includeDefs:*, reg inherited:*, reg classes:*, reg showEmpty:*, reg printTo:*) -+> V { var generic:*, var includeDefs:*, reg includeDefs_isMissing:L, reg includeDefs_orDefault:*, var inherited:*, reg inherited_isMissing:L, reg inherited_orDefault:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var showEmpty:*, reg showEmpty_isMissing:L, reg showEmpty_orDefault:*, var printTo:*, reg printTo_isMissing:L, reg printTo_orDefault:*, reg stdout:cls, reg r:V, reg p:p(V +), reg r2:cls, reg r3:cls, reg r4:cls, reg environment:cls, reg generic1:*, reg generic2:V, reg p1:p(V +), reg r6:V, reg get:cls, reg inherited1:*, reg inherited2:V, reg c:L, reg p2:p(V +), reg env:*, reg env1:V, reg p3:p(V +), reg r9:V, reg __:cls, reg r10:V, reg packageSlot:cls, reg f:*, reg f1:V, reg p4:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg p5:*, reg p6:V, reg c1:V, reg c2:L, reg new:cls, reg generic3:*, reg generic4:V, reg p7:p(V +), reg r17:V, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg table:*, reg table1:V, reg names:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg classes1:*, reg classes2:V, reg c3:V, reg r25:V, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg c9:L, reg r27:V, reg labels:*, reg labels1:V, reg length:cls, reg r28:V, reg r29:V, reg c10:L, reg c11:V, reg c13:L, reg strsplit:cls, reg labels2:*, reg labels3:V, reg p9:p(V +), reg r31:V, reg vapply:cls, reg sigL:*, reg sigL1:V, reg p10:p(V +), reg r33:cls, reg p11:p(V +), reg classes3:*, reg classes4:V, reg p12:p(V +), reg r36:V, reg r37:V, reg labels4:*, reg labels5:V, reg c14:L, reg labels7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep:*, reg keep1:V, reg __1:cls, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg labels8:*, reg labels9:V, reg length1:cls, reg r41:V, reg r42:V, reg c15:L, reg showEmpty1:*, reg showEmpty2:V, reg c16:L, reg doFun:cls, reg f2:*, reg f3:V, reg p13:p(V +), reg p14:*, reg p15:V, reg p16:p(V +), reg r45:V, reg cf:cls, reg r46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg invisible:cls, reg r50:V, reg doFun1:cls, reg f4:*, reg f5:V, reg p17:p(V +), reg p18:*, reg p19:V, reg p20:p(V +), reg r55:V, reg mget:cls, reg labels10:*, reg labels11:V, reg p21:p(V +), reg table2:*, reg table3:V, reg p22:p(V +), reg r58:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c17:L, reg x:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg i7:I, reg r60:V, reg m:*, reg m1:V, reg is_environment:cls, reg r61:V, reg c18:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg i12:I, reg r63:V, reg m2:*, reg m3:V, reg names1:cls, reg r64:V, reg m4:*, reg m5:V, reg c19:L, reg i14:I, reg m7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg i16:I, reg dx4:V, reg pkgs:*, reg pkgs1:V, reg c20:L, reg i18:I, reg m9:V, reg pkgs3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg i20:I, reg m11:V, reg dx6:V, reg __2:cls, reg r65:V, reg __3:cls, reg r66:V, reg i21:I, reg is:cls, reg m12:*, reg m13:V, reg p23:p(V +), reg r68:V, reg c21:L, reg __4:cls, reg r69:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg i26:I, reg r71:V, reg t:*, reg t1:V, reg length2:cls, reg r72:V, reg r73:V, reg c22:L, reg deflt:*, reg deflt1:V, reg i29:I, reg __5:cls, reg r74:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r75:V, reg i32:I, reg r76:V, reg d:*, reg d1:V, reg length3:cls, reg r77:V, reg r78:V, reg c23:L, reg deflt3:*, reg deflt4:V, reg i35:I, reg cf1:cls, reg sigString:cls, reg t2:*, reg t3:V, reg p24:p(V +), reg r80:V, reg p25:p(V +), reg r82:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg i38:I, reg r84:V, reg t4:*, reg t5:V, reg d2:*, reg d3:V, reg identical:cls, reg r85:V, reg r86:V, reg c24:L, reg cf2:cls, reg sigString1:cls, reg d4:*, reg d5:V, reg p26:p(V +), reg r88:V, reg p27:p(V +), reg r90:V, reg i41:I, reg _identC:cls, reg __6:cls, reg r92:V, reg p28:p(V +), reg f6:*, reg f7:V, reg p29:p(V +), reg r95:V, reg r96:V, reg c25:L, reg i43:I, reg c27:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r97:V, reg i46:I, reg c30:L, reg r98:V, reg __7:cls, reg r99:V, reg length4:cls, reg r100:V, reg r101:V, reg c31:L, reg c32:V, reg c34:L, reg i49:I, reg c36:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r102:V, reg i52:I, reg c39:L, reg r103:V, reg __8:cls, reg r104:V, reg nzchar:cls, reg r105:V, reg c40:L, reg c41:V, reg c43:L, reg cf3:cls, reg __9:cls, reg r106:V, reg p30:p(V +), reg r108:V, reg i56:I, reg sym13:cls, reg base13:cls, reg guard13:L, reg r110:V, reg i59:I, reg r111:V, reg pkgs4:*, reg pkgs5:V, reg length5:cls, reg r112:V, reg r113:V, reg c44:L, reg cf4:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r114:V, reg r115:V, reg pkgs6:*, reg pkgs7:V, reg length6:cls, reg r116:V, reg p31:p(V +), reg r118:V, reg i62:I, reg r119:V, reg i63:I, reg includeDefs1:*, reg includeDefs2:V, reg c45:L, reg i65:I, reg c47:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r121:V, reg i68:I, reg c50:L, reg r122:V, reg m14:*, reg m15:V, reg is_function:cls, reg r123:V, reg c51:L, reg c52:V, reg c54:L, reg is1:cls, reg m16:*, reg m17:V, reg p32:p(V +), reg r125:V, reg c55:L, reg __10:cls, reg r126:V, reg i74:I, reg cat:cls, reg deparse:cls, reg m18:*, reg m19:V, reg p33:p(V +), reg r129:V, reg p34:p(V +), reg printTo1:*, reg printTo2:V, reg p35:p(V +), reg r132:V, reg i75:I, reg cat1:cls, reg printTo3:*, reg printTo4:V, reg p36:p(V +), reg r135:V |
    mkenv;
    st generic = generic;
    includeDefs_isMissing = missing.0(includeDefs);
    if includeDefs_isMissing then L0(FALSE) else L0(includeDefs);
  L0(includeDefs_orDefault):
    st includeDefs = includeDefs_orDefault;
    inherited_isMissing = missing.0(inherited);
    if inherited_isMissing then L1(FALSE) else L1(inherited);
  L1(inherited_orDefault):
    st inherited = inherited_orDefault;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L2(NULL) else L2(classes);
  L2(classes_orDefault):
    st classes = classes_orDefault;
    showEmpty_isMissing = missing.0(showEmpty);
    if showEmpty_isMissing then L3(TRUE) else L3(showEmpty);
  L3(showEmpty_orDefault):
    st showEmpty = showEmpty_orDefault;
    printTo_isMissing = missing.0(printTo);
    if printTo_isMissing then L4() else L5(printTo);
  L4():
    p = prom<V +>{
      stdout = ldf stdout;
      r = dyn stdout();
      return r;
    };
    goto L5(p);
  L5(printTo_orDefault):
    st printTo = printTo_orDefault;
    r2 = clos inner1246119658;
    st cf = r2;
    r3 = clos inner2755828749;
    st sigString = r3;
    r4 = clos inner1510805264;
    st doFun = r4;
    environment = ldf environment;
    check L55() else D0();
  D0():
    deopt 10 [];
  L55():
    p1 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r6 = dyn environment(p1);
    check L56() else D1();
  D1():
    deopt 12 [r6];
  L56():
    st env = r6;
    get = ldf get;
    check L57() else D2();
  D2():
    deopt 15 [];
  L57():
    p2 = prom<V +>{
      inherited1 = ld inherited;
      inherited2 = force? inherited1;
      checkMissing(inherited2);
      c = `as.logical`(inherited2);
      if c then L1() else L0();
    L0():
      return ".MTable";
    L1():
      return ".AllMTable";
    };
    p3 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r9 = dyn get[, envir](p2, p3);
    check L58() else D3();
  D3():
    deopt 19 [r9];
  L58():
    st table = r9;
    __ = ldf `@` in base;
    r10 = dyn __(<sym generic>, <sym generic>);
    st f = r10;
    packageSlot = ldf packageSlot;
    check L59() else D4();
  D4():
    deopt 25 [];
  L59():
    p4 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r12 = dyn packageSlot(p4);
    check L60() else D5();
  D5():
    deopt 27 [r12];
  L60():
    st p = r12;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L61() else L62();
  L6(r14):
    c2 = `as.logical`(r14);
    if c2 then L64() else L7();
  L61():
    p5 = ld p;
    check L63() else D6();
  L62():
    r13 = dyn base(<sym p>);
    goto L6(r13);
  D6():
    deopt 30 [p5];
  L7():
    goto L8();
  L8():
    new = ldf new;
    check L66() else D7();
  L63():
    p6 = force? p5;
    checkMissing(p6);
    c1 = `==`(p6, NULL);
    goto L6(c1);
  L64():
    st p = "base";
    goto L8();
  D7():
    deopt 39 [];
  L66():
    p7 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    r17 = dyn new("signature", p7, "ANY");
    check L67() else D8();
  D8():
    deopt 43 [r17];
  L67():
    st deflt = r17;
    sort = ldf sort;
    check L68() else D9();
  D9():
    deopt 46 [];
  L68():
    p8 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      names = ldf names in base;
      r20 = dyn names(table1);
      goto L0(r20);
    L2():
      r18 = dyn base1(<sym table>);
      goto L0(r18);
    };
    r22 = dyn sort(p8);
    check L69() else D10();
  D10():
    deopt 48 [r22];
  L69():
    st labels = r22;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L70() else L71();
  L9(r24):
    r25 = `!`(r24);
    c4 = `as.logical`(r25);
    if c4 then L73() else L10(c4);
  L70():
    classes1 = ld classes;
    check L72() else D11();
  L71():
    r23 = dyn base2(<sym classes>);
    goto L9(r23);
  D11():
    deopt 51 [classes1];
  L10(c6):
    c13 = `as.logical`(c6);
    if c13 then L79() else L12();
  L72():
    classes2 = force? classes1;
    checkMissing(classes2);
    c3 = `==`(classes2, NULL);
    goto L9(c3);
  L73():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L11(c9, r27):
    r29 = `>`(r27, 0);
    c10 = `as.logical`(r29);
    c11 = `&&`(c9, c10);
    goto L10(c11);
  L12():
    goto L14();
  L14():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L90() else L91();
  L74():
    labels = ld labels;
    check L76() else D12();
  L75():
    r26 = dyn base3(<sym labels>);
    goto L11(c4, r26);
  L79():
    strsplit = ldf strsplit;
    check L80() else D14();
  D12():
    deopt 57 [c4, labels];
  D14():
    deopt 65 [];
  L15(r40):
    r42 = `==`(r40, 0);
    c15 = `as.logical`(r42);
    if c15 then L94() else L16();
  L76():
    labels1 = force? labels;
    checkMissing(labels1);
    length = ldf length in base;
    r28 = dyn length(labels1);
    check L77() else D13();
  L80():
    p9 = prom<V +>{
      labels2 = ld labels;
      labels3 = force? labels2;
      checkMissing(labels3);
      return labels3;
    };
    r31 = dyn strsplit[, split](p9, "#");
    check L81() else D15();
  L90():
    labels8 = ld labels;
    check L92() else D20();
  L91():
    r39 = dyn base4(<sym labels>);
    goto L15(r39);
  D13():
    deopt 60 [c4, r28];
  D15():
    deopt 69 [r31];
  D20():
    deopt 91 [labels8];
  L16():
    doFun1 = ldf doFun;
    check L107() else D28();
  L77():
    goto L11(c4, r28);
  L81():
    st sigL = r31;
    vapply = ldf vapply;
    check L82() else D16();
  L92():
    labels9 = force? labels8;
    checkMissing(labels9);
    length1 = ldf length in base;
    r41 = dyn length1(labels9);
    check L93() else D21();
  L94():
    showEmpty1 = ld showEmpty;
    check L95() else D22();
  D16():
    deopt 72 [];
  D21():
    deopt 94 [r41];
  D22():
    deopt 97 [showEmpty1];
  D28():
    deopt 118 [];
  L82():
    p10 = prom<V +>{
      sigL = ld sigL;
      sigL1 = force? sigL;
      checkMissing(sigL1);
      return sigL1;
    };
    p11 = prom<V +>{
      r33 = clos inner799576941;
      return r33;
    };
    p12 = prom<V +>{
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      return classes4;
    };
    r36 = dyn vapply[, , , y](p10, p11, NA_LGL, p12);
    check L83() else D17();
  L93():
    goto L15(r41);
  L95():
    showEmpty2 = force? showEmpty1;
    checkMissing(showEmpty2);
    c16 = `as.logical`(showEmpty2);
    if c16 then L96() else L17();
  L107():
    p17 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p20 = prom<V +>{
      p18 = ld p;
      p19 = force? p18;
      checkMissing(p19);
      return p19;
    };
    r55 = dyn doFun1(p17, p20);
    check L108() else D29();
  D17():
    deopt 78 [r36];
  D29():
    deopt 121 [r55];
  L17():
    goto L18();
  L18():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L102() else L103();
  L83():
    r37 = `!`(r36);
    st keep = r37;
    labels4 = ld labels;
    check L84() else D18();
  L96():
    doFun = ldf doFun;
    check L97() else D23();
  L108():
    mget = ldf mget;
    check L109() else D30();
  D18():
    deopt 81 [labels4];
  D23():
    deopt 100 [];
  D30():
    deopt 123 [];
  L19(r49):
    popenv;
    return r49;
  L84():
    labels5 = force? labels4;
    checkMissing(labels5);
    c14 = `is.object`(labels5);
    if c14 then L85() else L86(labels5);
  L97():
    p13 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p16 = prom<V +>{
      p14 = ld p;
      p15 = force? p14;
      checkMissing(p15);
      return p15;
    };
    r45 = dyn doFun(p13, p16);
    check L98() else D24();
  L102():
    invisible = ldf invisible in base;
    r50 = dyn invisible();
    check L104() else D27();
  L103():
    r48 = dyn base5();
    goto L19(r48);
  L109():
    p21 = prom<V +>{
      labels10 = ld labels;
      labels11 = force? labels10;
      checkMissing(labels11);
      return labels11;
    };
    p22 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    r58 = dyn mget(p21, p22);
    check L110() else D31();
  D24():
    deopt 103 [r45];
  D27():
    deopt 113 [r50];
  D31():
    deopt 126 [r58];
  L13(dx1):
    st labels = dx1;
    goto L14();
  L85():
    dr = tryDispatchBuiltin.1("[", labels5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L87() else L86(dr);
  L86(labels7):
    keep = ld keep;
    check L88() else D19();
  L98():
    cf = ldf cf;
    check L99() else D25();
  L104():
    goto L19(r50);
  L110():
    s = toForSeq(r58);
    l = length(s);
    i = 0;
    goto L21(i);
  D19():
    deopt 83 [labels7, keep];
  D25():
    deopt 105 [];
  L21(i1):
    i2 = `+`.1(i1, 1);
    c17 = `<`.1(l, i2);
    if c17 then L111() else L54();
  L87():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L88():
    keep1 = force? keep;
    __1 = ldf `[` in base;
    r38 = dyn __1(labels7, keep1);
    goto L13(r38);
  L99():
    r46 = dyn cf("<No methods>\n\n");
    check L100() else D26();
  D26():
    deopt 107 [r46];
  L54():
    x = `[[`(s, i2, NULL, TRUE);
    st m = x;
    st pkgs = NULL;
    sym6 = ldf `is.environment`;
    base6 = ldf `is.environment` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L112() else L113();
  L100():
    goto L18();
  L111():
    cat1 = ldf cat;
    check L198() else D70();
  D70():
    deopt 302 [];
  L22(i7, r60):
    c18 = `as.logical`(r60);
    if c18 then L116() else L23();
  L112():
    m = ld m;
    check L114() else D32();
  L113():
    r59 = dyn base6(<sym m>);
    goto L22(i2, r59);
  L198():
    p36 = prom<V +>{
      printTo3 = ld printTo;
      printTo4 = force? printTo3;
      checkMissing(printTo4);
      return printTo4;
    };
    r135 = dyn cat1[, file]("\n", p36);
    check L199() else D71();
  D32():
    deopt 132 [i2, m];
  D71():
    deopt 306 [r135];
  L23():
    goto L27(i7);
  L27(i21):
    is = ldf is;
    check L130() else D38();
  L114():
    m1 = force? m;
    checkMissing(m1);
    is_environment = ldf `is.environment` in base;
    r61 = dyn is_environment(m1);
    check L115() else D33();
  L116():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L117() else L118();
  L199():
    popenv;
    return r135;
  D33():
    deopt 135 [i2, r61];
  D38():
    deopt 155 [i21];
  L24(i12, r63):
    st pkgs = r63;
    m4 = ld m;
    check L121() else D36();
  L115():
    goto L22(i2, r61);
  L117():
    m2 = ld m;
    check L119() else D34();
  L118():
    r62 = dyn base7(<sym m>);
    goto L24(i7, r62);
  L130():
    p23 = prom<V +>{
      m12 = ld m;
      m13 = force? m12;
      checkMissing(m13);
      return m13;
    };
    r68 = dyn is(p23, "MethodDefinition");
    check L131() else D39();
  D34():
    deopt 138 [i7, m2];
  D36():
    deopt 143 [i12, m4];
  D39():
    deopt 158 [i21, r68];
  L119():
    m3 = force? m2;
    checkMissing(m3);
    names1 = ldf names in base;
    r64 = dyn names1(m3);
    check L120() else D35();
  L121():
    m5 = force? m4;
    checkMissing(m5);
    c19 = `is.object`(m5);
    if c19 then L122() else L123(i12, m5);
  L131():
    c21 = `as.logical`(r68);
    if c21 then L132() else L28();
  D35():
    deopt 141 [i7, r64];
  L25(i16, dx4):
    st m = dx4;
    goto L27(i16);
  L28():
    goto L47(i21);
  L47(i63):
    includeDefs1 = ld includeDefs;
    check L183() else D63();
  L120():
    goto L24(i7, r64);
  L122():
    dr2 = tryDispatchBuiltin.1("[[", m5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L124() else L123(i12, dr2);
  L123(i14, m7):
    pkgs = ld pkgs;
    check L125() else D37();
  L132():
    __4 = ldf `@` in base;
    r69 = dyn __4(<sym m>, <sym target>);
    st t = r69;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L133() else L134();
  D37():
    deopt 145 [i14, m7, pkgs];
  D63():
    deopt 268 [i63, includeDefs1];
  L29(i26, r71):
    r73 = `==`(r71, 0);
    c22 = `as.logical`(r73);
    if c22 then L137() else L30();
  L124():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L25(i12, dx3);
  L125():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    c20 = `is.object`(pkgs1);
    if c20 then L126() else L127(i14, m7, pkgs1);
  L133():
    t = ld t;
    check L135() else D40();
  L134():
    r70 = dyn base8(<sym t>);
    goto L29(i21, r70);
  L183():
    includeDefs2 = force? includeDefs1;
    checkMissing(includeDefs2);
    c45 = `as.logical`(includeDefs2);
    if c45 then L184() else L48(i63, c45);
  D40():
    deopt 164 [i21, t];
  L26(i20, m11, dx6):
    __3 = ldf `[[` in base;
    r66 = dyn __3(m11, dx6);
    goto L25(i20, r66);
  L30():
    goto L31(i26);
  L31(i29):
    __5 = ldf `@` in base;
    r74 = dyn __5(<sym m>, <sym defined>);
    st d = r74;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L140() else L141();
  L48(i65, c47):
    c54 = `as.logical`(c47);
    if c54 then L190() else L50();
  L126():
    dr4 = tryDispatchBuiltin.1("[", pkgs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L128() else L127(i14, m7, dr4);
  L127(i18, m9, pkgs3):
    __2 = ldf `[` in base;
    r65 = dyn __2(pkgs3, 1);
    goto L26(i18, m9, r65);
  L135():
    t1 = force? t;
    checkMissing(t1);
    length2 = ldf length in base;
    r72 = dyn length2(t1);
    check L136() else D41();
  L137():
    deflt = ld deflt;
    check L138() else D42();
  L184():
    sym15 = ldf `is.function`;
    base15 = ldf `is.function` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L185() else L186();
  D41():
    deopt 167 [i21, r72];
  D42():
    deopt 170 [i26, deflt];
  L32(i32, r76):
    r78 = `==`(r76, 0);
    c23 = `as.logical`(r78);
    if c23 then L144() else L33();
  L49(i68, c50, r122):
    c51 = `as.logical`(r122);
    c52 = `&&`(c50, c51);
    goto L48(i68, c52);
  L50():
    goto L53(i65);
  L53(i75):
    goto L21(i75);
  L128():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L26(i14, m7, dx5);
  L136():
    goto L29(i21, r72);
  L138():
    deflt1 = force? deflt;
    checkMissing(deflt1);
    st t = deflt1;
    goto L31(i26);
  L140():
    d = ld d;
    check L142() else D43();
  L141():
    r75 = dyn base9(<sym d>);
    goto L32(i29, r75);
  L185():
    m14 = ld m;
    check L187() else D64();
  L186():
    r121 = dyn base15(<sym m>);
    goto L49(i63, c45, r121);
  L190():
    is1 = ldf is;
    check L191() else D66();
  D43():
    deopt 180 [i29, d];
  D64():
    deopt 272 [i63, c45, m14];
  D66():
    deopt 278 [i65];
  L33():
    goto L34(i32);
  L34(i35):
    cf1 = ldf cf;
    check L147() else D46();
  L142():
    d1 = force? d;
    checkMissing(d1);
    length3 = ldf length in base;
    r77 = dyn length3(d1);
    check L143() else D44();
  L144():
    deflt3 = ld deflt;
    check L145() else D45();
  L187():
    m15 = force? m14;
    checkMissing(m15);
    is_function = ldf `is.function` in base;
    r123 = dyn is_function(m15);
    check L188() else D65();
  L191():
    p32 = prom<V +>{
      m16 = ld m;
      m17 = force? m16;
      checkMissing(m17);
      return m17;
    };
    r125 = dyn is1(p32, "MethodDefinition");
    check L192() else D67();
  D44():
    deopt 183 [i29, r77];
  D45():
    deopt 186 [i32, deflt3];
  D46():
    deopt 192 [i35];
  D65():
    deopt 275 [i63, c45, r123];
  D67():
    deopt 281 [i65, r125];
  L143():
    goto L32(i29, r77);
  L145():
    deflt4 = force? deflt3;
    checkMissing(deflt4);
    st d = deflt4;
    goto L34(i32);
  L147():
    p25 = prom<V +>{
      sigString = ldf sigString;
      p24 = prom<V +>{
        t2 = ld t;
        t3 = force? t2;
        checkMissing(t3);
        return t3;
      };
      r80 = dyn sigString(p24);
      return r80;
    };
    r82 = dyn cf1(p25, "\n");
    check L148() else D47();
  L188():
    goto L49(i63, c45, r123);
  L192():
    c55 = `as.logical`(r125);
    if c55 then L193() else L51();
  D47():
    deopt 195 [i35, r82];
  L51():
    goto L52(i65);
  L52(i74):
    cat = ldf cat;
    check L195() else D68();
  L148():
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L149() else L150();
  L193():
    __10 = ldf `@` in base;
    r126 = dyn __10(<sym m>, <sym .Data>);
    st m = r126;
    goto L52(i65);
  D68():
    deopt 288 [i74];
  L35(i38, r84):
    r86 = `!`(r84);
    c24 = `as.logical`(r86);
    if c24 then L154() else L36();
  L149():
    t4 = ld t;
    check L151() else D48();
  L150():
    r83 = dyn base10(<sym t>, <sym d>);
    goto L35(i35, r83);
  L195():
    p34 = prom<V +>{
      deparse = ldf deparse;
      p33 = prom<V +>{
        m18 = ld m;
        m19 = force? m18;
        checkMissing(m19);
        return m19;
      };
      r129 = dyn deparse(p33);
      return r129;
    };
    p35 = prom<V +>{
      printTo1 = ld printTo;
      printTo2 = force? printTo1;
      checkMissing(printTo2);
      return printTo2;
    };
    r132 = dyn cat[, sep, , file](p34, "\n", "\n", p35);
    check L196() else D69();
  D48():
    deopt 198 [i35, t4];
  D69():
    deopt 295 [i74, r132];
  L36():
    goto L37(i38);
  L37(i41):
    _identC = ldf `.identC`;
    check L158() else D53();
  L151():
    t5 = force? t4;
    checkMissing(t5);
    d2 = ld d;
    check L152() else D49();
  L154():
    cf2 = ldf cf;
    check L155() else D51();
  L196():
    goto L53(i74);
  D49():
    deopt 200 [i35, d2];
  D51():
    deopt 213 [i38];
  D53():
    deopt 221 [i41];
  L152():
    d3 = force? d2;
    checkMissing(d3);
    identical = ldf identical in base;
    r85 = dyn identical(t5, d3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L153() else D50();
  L155():
    p27 = prom<V +>{
      sigString1 = ldf sigString;
      p26 = prom<V +>{
        d4 = ld d;
        d5 = force? d4;
        checkMissing(d5);
        return d5;
      };
      r88 = dyn sigString1(p26);
      return r88;
    };
    r90 = dyn cf2("    (inherited from: ", p27, ")\n");
    check L156() else D52();
  L158():
    p28 = prom<V +>{
      __6 = ldf `@` in base;
      r92 = dyn __6(<sym m>, <sym generic>);
      return r92;
    };
    p29 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r95 = dyn _identC(p28, p29);
    check L159() else D54();
  D50():
    deopt 210 [i35, r85];
  D52():
    deopt 217 [i38, r90];
  D54():
    deopt 224 [i41, r95];
  L153():
    goto L35(i35, r85);
  L156():
    goto L37(i38);
  L159():
    r96 = `!`(r95);
    c25 = `as.logical`(r96);
    if c25 then L160() else L38(i41, c25);
  L38(i43, c27):
    c34 = `as.logical`(c27);
    if c34 then L165() else L40(i43, c34);
  L160():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L161() else L162();
  L39(i46, c30, r98):
    r101 = `==`(r98, 1);
    c31 = `as.logical`(r101);
    c32 = `&&`(c30, c31);
    goto L38(i46, c32);
  L40(i49, c36):
    c43 = `as.logical`(c36);
    if c43 then L170() else L42();
  L161():
    __7 = ldf `@` in base;
    r99 = dyn __7(<sym m>, <sym generic>);
    length4 = ldf length in base;
    r100 = dyn length4(r99);
    check L163() else D55();
  L162():
    r97 = dyn base11(<lang `@`(m, generic)>);
    goto L39(i41, c25, r97);
  L165():
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L166() else L167();
  D55():
    deopt 231 [i41, c25, r100];
  L41(i52, c39, r103):
    c40 = `as.logical`(r103);
    c41 = `&&`(c39, c40);
    goto L40(i52, c41);
  L42():
    goto L43(i49);
  L43(i56):
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L174() else L175();
  L163():
    goto L39(i41, c25, r100);
  L166():
    __8 = ldf `@` in base;
    r104 = dyn __8(<sym m>, <sym generic>);
    nzchar = ldf nzchar in base;
    r105 = dyn nzchar(r104);
    check L168() else D56();
  L167():
    r102 = dyn base12(<lang `@`(m, generic)>);
    goto L41(i43, c34, r102);
  L170():
    cf3 = ldf cf;
    check L171() else D57();
  D56():
    deopt 240 [i43, c34, r105];
  D57():
    deopt 243 [i49];
  L44(i59, r111):
    r113 = `>`(r111, 1.0);
    c44 = `as.logical`(r113);
    if c44 then L178() else L45();
  L168():
    goto L41(i43, c34, r105);
  L171():
    p30 = prom<V +>{
      __9 = ldf `@` in base;
      r106 = dyn __9(<sym m>, <sym generic>);
      return r106;
    };
    r108 = dyn cf3("    (definition from function \"", p30, "\")\n");
    check L172() else D58();
  L174():
    pkgs4 = ld pkgs;
    check L176() else D59();
  L175():
    r110 = dyn base13(<sym pkgs>);
    goto L44(i56, r110);
  D58():
    deopt 247 [i49, r108];
  D59():
    deopt 252 [i56, pkgs4];
  L45():
    goto L46(i59, NULL);
  L46(i62, r119):
    goto L47(i62);
  L172():
    goto L43(i49);
  L176():
    pkgs5 = force? pkgs4;
    checkMissing(pkgs5);
    length5 = ldf length in base;
    r112 = dyn length5(pkgs5);
    check L177() else D60();
  L178():
    cf4 = ldf cf;
    check L179() else D61();
  D60():
    deopt 255 [i56, r112];
  D61():
    deopt 259 [i59];
  L177():
    goto L44(i56, r112);
  L179():
    p31 = prom<V +>{
      sym14 = ldf length;
      base14 = ldf length in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r115):
      return r115;
    L1():
      pkgs6 = ld pkgs;
      pkgs7 = force? pkgs6;
      checkMissing(pkgs7);
      length6 = ldf length in base;
      r116 = dyn length6(pkgs7);
      goto L0(r116);
    L2():
      r114 = dyn base14(<sym pkgs>);
      goto L0(r114);
    };
    r118 = dyn cf4("  (", p31, " methods defined for this signature, with different packages)\n");
    check L180() else D62();
  D62():
    deopt 263 [i59, r118];
  L180():
    goto L46(i59, r118);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg cat:cls, reg printTo:*, reg printTo1:V, reg p:p(V +), reg ddd1:dots?, reg r1:V |
    mkenv;
    st `...` = ddd;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      printTo = ld printTo;
      printTo1 = force? printTo;
      checkMissing(printTo1);
      return printTo1;
    };
    ddd1 = ld `...`;
    r1 = dyn cat[file, sep, `...`](p, "", ddd1);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2755828749(sig) {
  (reg sig:*) -+> V { var sig:*, reg paste0:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sig1:*, reg sig2:V, reg names:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sig3:*, reg sig4:V, reg as_character:cls, reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st sig = sig;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      sig1 = ld sig;
      sig2 = force? sig1;
      checkMissing(sig2);
      names = ldf names in base;
      r2 = dyn names(sig2);
      goto L0(r2);
    L2():
      r = dyn base(<sym sig>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      sig3 = ld sig;
      sig4 = force? sig3;
      checkMissing(sig4);
      as_character = ldf `as.character` in base;
      r6 = dyn as_character(sig4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym sig>);
      goto L0(r4);
    };
    r8 = dyn paste0[, , , , collapse](p, "=\"", p1, "\"", ", ");
    check L1() else D1();
  D1():
    deopt 8 [r8];
  L1():
    popenv;
    return r8;
  }
}
fun inner1510805264(func, pkg) {
  (reg func:*, reg pkg:*) -+> V { var func:*, var pkg:*, reg cf:cls, reg func1:*, reg func2:V, reg p:p(V +), reg pkg1:*, reg pkg2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st func = func;
    st pkg = pkg;
    cf = ldf cf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      func1 = ld func;
      func2 = force? func1;
      checkMissing(func2);
      return func2;
    };
    p1 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r2 = dyn cf("Function: ", p, " (package ", p1, ")\n");
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg match:cls, reg r6:V, reg is_na:cls, reg r7:V, reg all:cls, reg r8:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang is.na(match(x, y))>);
    goto L0(r);
  L1(r3):
    all = ldf all in base;
    r8 = dyn all(r3);
    check L13() else D4();
  L5():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L7() else L8();
  L6():
    r2 = dyn base1(<lang match(x, y)>);
    goto L1(r2);
  D4():
    deopt 17 [r8];
  L2(r5):
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(r5);
    check L12() else D3();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r4 = dyn base2(<sym x>, <sym y>);
    goto L2(r4);
  L13():
    goto L0(r8);
  D0():
    deopt 6 [x1];
  D3():
    deopt 15 [r7];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L10() else D1();
  L12():
    goto L1(r7);
  D1():
    deopt 8 [y1];
  L10():
    y2 = force? y1;
    checkMissing(y2);
    match = ldf match in base;
    r6 = dyn match(x2, y2, NA_INT, NULL);
    check L11() else D2();
  D2():
    deopt 13 [r6];
  L11():
    goto L2(r6);
  }
}