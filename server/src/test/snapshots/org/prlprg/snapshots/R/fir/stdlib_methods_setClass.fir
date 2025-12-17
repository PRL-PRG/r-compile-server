fun main() {
  () -+> V { reg r:cls, reg isClass:cls, reg r1:V, reg c:L, reg removeClass:cls, reg r2:V, reg isClass1:cls, reg r4:V, reg c1:L, reg removeClass1:cls, reg r5:V, reg isClass2:cls, reg r7:V, reg c2:L, reg removeClass2:cls, reg r8:V, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg c3:cls, reg r12:V, reg p:p(V +), reg r14:V, reg track:cls, reg p1:p(V +), reg rnorm:cls, reg r16:V, reg r17:V, reg p2:p(V +), reg r19:V, reg setClass1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg c4:cls, reg r22:V, reg p3:p(V +), reg r24:V, reg trackCurve:cls, reg t1:*, reg t2:V, reg p4:p(V +), reg p5:p(V +), reg r27:V, reg setClass2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg c5:cls, reg r30:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg numeric:cls, reg r34:V, reg matrix:cls, reg r35:V, reg matrix1:cls, reg r36:V, reg list:cls, reg r37:V, reg p7:p(V +), reg r39:V, reg setClass3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg c6:cls, reg r42:V, reg p8:p(V +), reg r44:V, reg numWithId:cls, reg p9:p(V +), reg r46:V, reg setClass4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg c7:cls, reg r49:V, reg p10:p(V +), reg r51:V, reg setMethod:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg c8:cls, reg r54:V, reg p11:p(V +), reg r56:cls, reg p12:p(V +), reg r58:V, reg stampedEnv:cls, reg Sys_time:cls, reg r59:V, reg p13:p(V +), reg r61:V, reg rnorm1:cls, reg r62:V, reg l:*, reg c9:L, reg r64:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r67:V, reg new:cls, reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg slot:cls, reg tMC:*, reg tMC1:V, reg p14:p(V +), reg r72:V, reg is_matrix:cls, reg r73:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg slot1:cls, reg tMC2:*, reg tMC3:V, reg p15:p(V +), reg r77:V, reg is_matrix1:cls, reg r78:V, reg setClass5:cls, reg matrix2:cls, reg r79:V, reg p16:p(V +), reg r81:V, reg nrow:cls, reg new1:cls, reg r82:V, reg p17:p(V +), reg r84:V, reg nrow1:cls, reg new2:cls, reg r85:V, reg p18:p(V +), reg r87:V, reg __:cls, reg r88:V, reg r89:cls, reg r90:V, reg setClass6:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r91:V, reg r92:V, reg c10:cls, reg r93:V, reg p19:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r95:V, reg r96:V, reg xxx:*, reg xxx1:V, reg list1:cls, reg r97:V, reg p20:p(V +), reg r99:V, reg stopifnot:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r100:V, reg r101:V, reg __1:cls, reg r102:V, reg xxx2:*, reg xxx3:V, reg identical:cls, reg r103:V, reg p21:p(V +), reg r105:V, reg removeClass3:cls, reg r106:V, reg removeClass4:cls, reg r107:V, reg removeClass5:cls, reg r108:V, reg removeClass6:cls, reg r109:V, reg removeClass7:cls, reg r110:V |
    mkenv;
    r = clos inner1698648891;
    st setClass = r;
    isClass = ldf isClass;
    check L9() else D0();
  D0():
    deopt 4 [];
  L9():
    r1 = dyn isClass("trackMultiCurve");
    check L10() else D1();
  D1():
    deopt 6 [r1];
  L10():
    c = `as.logical`(r1);
    if c then L11() else L0();
  L0():
    goto L1();
  L1():
    isClass1 = ldf isClass;
    check L15() else D4();
  L11():
    removeClass = ldf removeClass;
    check L12() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L12():
    r2 = dyn removeClass("trackMultiCurve");
    check L13() else D3();
  L15():
    r4 = dyn isClass1("trackCurve");
    check L16() else D5();
  D3():
    deopt 10 [r2];
  D5():
    deopt 16 [r4];
  L13():
    goto L1();
  L16():
    c1 = `as.logical`(r4);
    if c1 then L17() else L2();
  L2():
    goto L3();
  L3():
    isClass2 = ldf isClass;
    check L21() else D8();
  L17():
    removeClass1 = ldf removeClass;
    check L18() else D6();
  D6():
    deopt 18 [];
  D8():
    deopt 24 [];
  L18():
    r5 = dyn removeClass1("trackCurve");
    check L19() else D7();
  L21():
    r7 = dyn isClass2("track");
    check L22() else D9();
  D7():
    deopt 20 [r5];
  D9():
    deopt 26 [r7];
  L19():
    goto L3();
  L22():
    c2 = `as.logical`(r7);
    if c2 then L23() else L4();
  L4():
    goto L5();
  L5():
    setClass = ldf setClass;
    check L27() else D12();
  L23():
    removeClass2 = ldf removeClass;
    check L24() else D10();
  D10():
    deopt 28 [];
  D12():
    deopt 34 [];
  L24():
    r8 = dyn removeClass2("track");
    check L25() else D11();
  L27():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c3 = ldf c in base;
      r12 = dyn c3("numeric", "numeric");
      goto L0(r12);
    L2():
      r10 = dyn base[x, y]("numeric", "numeric");
      goto L0(r10);
    };
    r14 = dyn setClass[, slots]("track", p);
    check L28() else D13();
  D11():
    deopt 30 [r8];
  D13():
    deopt 38 [r14];
  L25():
    goto L5();
  L28():
    st track = r14;
    track = ldf track;
    check L29() else D14();
  D14():
    deopt 41 [];
  L29():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p2 = prom<V +>{
      rnorm = ldf rnorm;
      r16 = dyn rnorm(10.0);
      r17 = `+`(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, r16);
      return r17;
    };
    r19 = dyn track[x, y](p1, p2);
    check L30() else D15();
  D15():
    deopt 46 [r19];
  L30():
    st t1 = r19;
    setClass1 = ldf setClass;
    check L31() else D16();
  D16():
    deopt 49 [];
  L31():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c4 = ldf c in base;
      r22 = dyn c4("numeric");
      goto L0(r22);
    L2():
      r20 = dyn base1[smooth]("numeric");
      goto L0(r20);
    };
    r24 = dyn setClass1[, slots, contains]("trackCurve", p3, "track");
    check L32() else D17();
  D17():
    deopt 55 [r24];
  L32():
    st trackCurve = r24;
    trackCurve = ldf trackCurve;
    check L33() else D18();
  D18():
    deopt 58 [];
  L33():
    p4 = prom<V +>{
      t1 = ld t1;
      t2 = force? t1;
      checkMissing(t2);
      return t2;
    };
    p5 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r27 = dyn trackCurve[, smooth](p4, p5);
    check L34() else D19();
  D19():
    deopt 62 [r27];
  L34():
    st t1s = r27;
    setClass2 = ldf setClass;
    check L35() else D20();
  D20():
    deopt 65 [];
  L35():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c5 = ldf c in base;
      r30 = dyn c5("numeric", "matrix", "matrix");
      goto L0(r30);
    L2():
      r28 = dyn base2[x, y, smooth]("numeric", "matrix", "matrix");
      goto L0(r28);
    };
    p7 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      numeric = ldf numeric;
      r34 = dyn numeric();
      matrix = ldf matrix;
      r35 = dyn matrix(0.0, 0.0, 0.0);
      matrix1 = ldf matrix;
      r36 = dyn matrix1(0.0, 0.0, 0.0);
      list = ldf list in base;
      r37 = dyn list(r34, r35, r36);
      goto L0(r37);
    L2():
      r32 = dyn base3[x, y, smooth](<lang numeric()>, <lang matrix(0.0, 0.0, 0.0)>, <lang matrix(0.0, 0.0, 0.0)>);
      goto L0(r32);
    };
    r39 = dyn setClass2[, slots, prototype]("trackMultiCurve", p6, p7);
    check L36() else D21();
  D21():
    deopt 71 [r39];
  L36():
    setClass3 = ldf setClass;
    check L37() else D22();
  D22():
    deopt 73 [];
  L37():
    p8 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      c6 = ldf c in base;
      r42 = dyn c6("character");
      goto L0(r42);
    L2():
      r40 = dyn base4[id]("character");
      goto L0(r40);
    };
    r44 = dyn setClass3[, slots, contains]("numWithId", p8, "numeric");
    check L38() else D23();
  D23():
    deopt 79 [r44];
  L38():
    st numWithId = r44;
    numWithId = ldf numWithId;
    check L39() else D24();
  D24():
    deopt 82 [];
  L39():
    p9 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r46 = dyn numWithId[, id](p9, "An Example");
    check L40() else D25();
  D25():
    deopt 86 [r46];
  L40():
    setClass4 = ldf setClass;
    check L41() else D26();
  D26():
    deopt 88 [];
  L41():
    p10 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      c7 = ldf c in base;
      r49 = dyn c7("POSIXct");
      goto L0(r49);
    L2():
      r47 = dyn base5[update]("POSIXct");
      goto L0(r47);
    };
    r51 = dyn setClass4[, contains, slots]("stampedEnv", "environment", p10);
    check L42() else D27();
  D27():
    deopt 94 [r51];
  L42():
    st stampedEnv = r51;
    setMethod = ldf setMethod;
    check L43() else D28();
  D28():
    deopt 97 [];
  L43():
    p11 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c8 = ldf c in base;
      r54 = dyn c8("stampedEnv", "character", "missing");
      goto L0(r54);
    L2():
      r52 = dyn base6("stampedEnv", "character", "missing");
      goto L0(r52);
    };
    p12 = prom<V +>{
      r56 = clos inner107536280;
      return r56;
    };
    r58 = dyn setMethod("[[<-", p11, p12);
    check L44() else D29();
  D29():
    deopt 101 [r58];
  L44():
    stampedEnv = ldf stampedEnv;
    check L45() else D30();
  D30():
    deopt 103 [];
  L45():
    p13 = prom<V +>{
      Sys_time = ldf `Sys.time`;
      r59 = dyn Sys_time();
      return r59;
    };
    r61 = dyn stampedEnv[update](p13);
    check L46() else D31();
  D31():
    deopt 106 [r61];
  L46():
    st e1 = r61;
    rnorm1 = ldf rnorm;
    check L47() else D32();
  D32():
    deopt 109 [];
  L47():
    r62 = dyn rnorm1(10.0);
    check L48() else D33();
  D33():
    deopt 111 [r62];
  L48():
    l = ld e1;
    c9 = `is.object`(l);
    if c9 then L49() else L50(r62, l);
  L6(dx1):
    st e1 = dx1;
    new = ldf new;
    check L52() else D34();
  L49():
    dr = tryDispatchBuiltin.0("[[<-", l, r62);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(r62, dr);
  L50(r64, l2):
    ____ = ldf `[[<-` in base;
    r67 = dyn ____(l2, r62, "noise");
    goto L6(r67);
  D34():
    deopt 118 [];
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L52():
    r68 = dyn new("trackMultiCurve");
    check L53() else D35();
  D35():
    deopt 120 [r68];
  L53():
    st tMC = r68;
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L7():
    sym8 = ldf `is.matrix`;
    base8 = ldf `is.matrix` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L59() else L60();
  L54():
    slot = ldf slot;
    check L56() else D36();
  L55():
    r69 = dyn base7(<lang slot(tMC, "y")>);
    goto L7();
  D36():
    deopt 125 [];
  L8():
    setClass5 = ldf setClass;
    check L64() else D42();
  L56():
    p14 = prom<V +>{
      tMC = ld tMC;
      tMC1 = force? tMC;
      checkMissing(tMC1);
      return tMC1;
    };
    r72 = dyn slot(p14, "y");
    check L57() else D37();
  L59():
    slot1 = ldf slot;
    check L61() else D39();
  L60():
    r74 = dyn base8(<lang slot(tMC, "smooth")>);
    goto L8();
  D37():
    deopt 128 [r72];
  D39():
    deopt 134 [];
  D42():
    deopt 141 [];
  L57():
    is_matrix = ldf `is.matrix` in base;
    r73 = dyn is_matrix(r72);
    check L58() else D38();
  L61():
    p15 = prom<V +>{
      tMC2 = ld tMC;
      tMC3 = force? tMC2;
      checkMissing(tMC3);
      return tMC3;
    };
    r77 = dyn slot1(p15, "smooth");
    check L62() else D40();
  L64():
    p16 = prom<V +>{
      matrix2 = ldf matrix;
      r79 = dyn matrix2(0.0, 0.0, 0.0);
      return r79;
    };
    r81 = dyn setClass5[, , prototype]("myMatrix", "matrix", p16);
    check L65() else D43();
  D38():
    deopt 130 [r73];
  D40():
    deopt 137 [r77];
  D43():
    deopt 146 [r81];
  L58():
    goto L7();
  L62():
    is_matrix1 = ldf `is.matrix` in base;
    r78 = dyn is_matrix1(r77);
    check L63() else D41();
  L65():
    nrow = ldf nrow;
    check L66() else D44();
  D41():
    deopt 139 [r78];
  D44():
    deopt 148 [];
  L63():
    goto L8();
  L66():
    p17 = prom<V +>{
      new1 = ldf new;
      r82 = dyn new1("myMatrix");
      return r82;
    };
    r84 = dyn nrow(p17);
    check L67() else D45();
  D45():
    deopt 150 [r84];
  L67():
    nrow1 = ldf nrow;
    check L68() else D46();
  D46():
    deopt 152 [];
  L68():
    p18 = prom<V +>{
      new2 = ldf new;
      r85 = dyn new2("matrix");
      return r85;
    };
    r87 = dyn nrow1(p18);
    check L69() else D47();
  D47():
    deopt 154 [r87];
  L69():
    __ = ldf `::`;
    check L70() else D48();
  D48():
    deopt 156 [];
  L70():
    r88 = dyn __("stats", "rnorm");
    check L71() else D49();
  D49():
    deopt 159 [r88];
  L71():
    checkFun.0(r88);
    r89 = r88 as cls;
    r90 = dyn r89(3.0);
    check L72() else D50();
  D50():
    deopt 162 [r90];
  L72():
    st xxx = r90;
    setClass6 = ldf setClass;
    check L73() else D51();
  D51():
    deopt 165 [];
  L73():
    p19 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c10 = ldf c in base;
      r93 = dyn c10("numeric");
      goto L0(r93);
    L2():
      r91 = dyn base9[x]("numeric");
      goto L0(r91);
    };
    p20 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      xxx = ld xxx;
      xxx1 = force? xxx;
      checkMissing(xxx1);
      list1 = ldf list in base;
      r97 = dyn list1(xxx1);
      goto L0(r97);
    L2():
      r95 = dyn base10[x](<sym xxx>);
      goto L0(r95);
    };
    r99 = dyn setClass6[, slots, prototype]("xNum", p19, p20);
    check L74() else D52();
  D52():
    deopt 171 [r99];
  L74():
    stopifnot = ldf stopifnot;
    check L75() else D53();
  D53():
    deopt 173 [];
  L75():
    p21 = prom<V +>{
      sym11 = ldf identical;
      base11 = ldf identical in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      __1 = ldf `@` in base;
      r102 = dyn __1(<lang new("xNum")>, <sym x>);
      xxx2 = ld xxx;
      xxx3 = force? xxx2;
      checkMissing(xxx3);
      identical = ldf identical in base;
      r103 = dyn identical(r102, xxx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r103);
    L2():
      r100 = dyn base11(<lang `@`(new("xNum"), x)>, <sym xxx>);
      goto L0(r100);
    };
    r105 = dyn stopifnot(p21);
    check L76() else D54();
  D54():
    deopt 175 [r105];
  L76():
    removeClass3 = ldf removeClass;
    check L77() else D55();
  D55():
    deopt 177 [];
  L77():
    r106 = dyn removeClass3("xNum");
    check L78() else D56();
  D56():
    deopt 179 [r106];
  L78():
    removeClass4 = ldf removeClass;
    check L79() else D57();
  D57():
    deopt 181 [];
  L79():
    r107 = dyn removeClass4("myMatrix");
    check L80() else D58();
  D58():
    deopt 183 [r107];
  L80():
    removeClass5 = ldf removeClass;
    check L81() else D59();
  D59():
    deopt 185 [];
  L81():
    r108 = dyn removeClass5("trackMultiCurve");
    check L82() else D60();
  D60():
    deopt 187 [r108];
  L82():
    removeClass6 = ldf removeClass;
    check L83() else D61();
  D61():
    deopt 189 [];
  L83():
    r109 = dyn removeClass6("trackCurve");
    check L84() else D62();
  D62():
    deopt 191 [r109];
  L84():
    removeClass7 = ldf removeClass;
    check L85() else D63();
  D63():
    deopt 193 [];
  L85():
    r110 = dyn removeClass7("track");
    check L86() else D64();
  D64():
    deopt 195 [r110];
  L86():
    popenv;
    return r110;
  }
}
fun inner1698648891(Class, representation, prototype, contains, validity, access, where, version, sealed, package, S3methods, slots) {
  (reg Class:*, reg representation:*, reg prototype:*, reg contains:*, reg validity:*, reg access:*, reg where:*, reg version:*, reg sealed:*, reg package:*, reg S3methods:*, reg slots:*) -+> V { var Class:*, var representation:*, reg representation_isMissing:L, reg representation_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var prototype:*, reg prototype_isMissing:L, reg prototype_orDefault:*, var contains:*, reg contains_isMissing:L, reg contains_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), var validity:*, reg validity_isMissing:L, reg validity_orDefault:*, var access:*, reg access_isMissing:L, reg access_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg list1:cls, reg r8:V, reg p2:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), var version:*, reg version_isMissing:L, reg version_orDefault:*, reg _newExternalptr:cls, reg r14:V, reg p5:p(V +), var sealed:*, reg sealed_isMissing:L, reg sealed_orDefault:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg getPackageName:cls, reg where1:*, reg where2:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), var S3methods:*, reg S3methods_isMissing:L, reg S3methods_orDefault:*, var slots:*, reg getClassDef:cls, reg Class1:*, reg Class2:V, reg p8:p(V +), reg where3:*, reg where4:V, reg p9:p(V +), reg r21:V, reg is:cls, reg oldDef:*, reg oldDef1:V, reg p10:p(V +), reg r23:V, reg c:L, reg c2:V, reg __:cls, reg r24:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg Class3:*, reg Class4:V, reg p11:p(V +), reg r26:V, reg p12:p(V +), reg r28:V, reg p13:p(V +), reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg missing:cls, reg r34:V, reg r35:V, reg c7:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg missing1:cls, reg r38:V, reg r39:V, reg c8:L, reg stop1:cls, reg r40:V, reg inferProperties:cls, reg slots1:*, reg slots2:V, reg p14:p(V +), reg r43:V, reg makeClassRepresentation:cls, reg Class5:*, reg Class6:V, reg p15:p(V +), reg properties:*, reg properties1:V, reg p16:p(V +), reg contains1:*, reg contains2:V, reg p17:p(V +), reg prototype1:*, reg prototype2:V, reg p18:p(V +), reg package1:*, reg package2:V, reg p19:p(V +), reg validity1:*, reg validity2:V, reg p20:p(V +), reg access1:*, reg access2:V, reg p21:p(V +), reg version1:*, reg version2:V, reg p22:p(V +), reg sealed1:*, reg sealed2:V, reg p23:p(V +), reg where5:*, reg where6:V, reg p24:p(V +), reg r54:V, reg is1:cls, reg representation1:*, reg representation2:V, reg p25:p(V +), reg r57:V, reg c9:L, reg representation3:*, reg representation4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r58:V, reg r59:V, reg missing2:cls, reg r60:V, reg c10:L, reg c12:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r61:V, reg c15:L, reg r62:V, reg missing3:cls, reg r63:V, reg c16:L, reg c17:V, reg c19:L, reg c21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg c24:L, reg r65:V, reg missing4:cls, reg r66:V, reg c25:L, reg c26:V, reg c28:L, reg c30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r67:V, reg c33:L, reg r68:V, reg missing5:cls, reg r69:V, reg c34:L, reg c35:V, reg c37:L, reg c39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg c42:L, reg r71:V, reg missing6:cls, reg r72:V, reg c43:L, reg c44:V, reg c46:L, reg c48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg c51:L, reg r74:V, reg missing7:cls, reg r75:V, reg c52:L, reg c53:V, reg r76:V, reg c55:L, reg stop2:cls, reg r77:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg __1:cls, reg r81:V, reg length:cls, reg r82:V, reg r83:V, reg c56:L, reg package3:*, reg package4:V, reg l:*, reg ___:cls, reg r84:V, reg package5:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r85:V, reg r86:V, reg representation5:*, reg representation6:V, reg c57:L, reg c58:L, reg c60:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r87:V, reg c63:L, reg r88:V, reg representation7:*, reg representation8:V, reg length1:cls, reg r89:V, reg r90:V, reg c64:L, reg c65:V, reg c67:L, reg c69:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg c72:L, reg r92:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r93:V, reg c75:L, reg r94:V, reg representation9:*, reg representation10:V, reg names:cls, reg r95:V, reg c76:V, reg c77:L, reg c78:V, reg c80:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r96:V, reg r97:V, reg representation11:*, reg representation12:V, reg list2:cls, reg r98:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r100:V, reg r101:V, reg allNames:cls, reg representation13:*, reg representation14:V, reg p26:p(V +), reg r103:V, reg nzchar:cls, reg r104:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r105:V, reg r106:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r107:V, reg r108:V, reg representation15:*, reg representation16:V, reg c81:L, reg representation18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg slots3:*, reg slots4:V, reg r109:V, reg __2:cls, reg r110:V, reg as_character:cls, reg r111:V, reg contains3:*, reg contains4:V, reg c82:cls, reg r112:V, reg representation19:*, reg representation20:V, reg c83:L, reg representation22:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg slots5:*, reg slots6:V, reg __3:cls, reg r113:V, reg makeClassRepresentation1:cls, reg Class7:*, reg Class8:V, reg p27:p(V +), reg properties2:*, reg properties3:V, reg p28:p(V +), reg superClasses:*, reg superClasses1:V, reg p29:p(V +), reg prototype3:*, reg prototype4:V, reg p30:p(V +), reg package6:*, reg package7:V, reg p31:p(V +), reg validity3:*, reg validity4:V, reg p32:p(V +), reg access3:*, reg access4:V, reg p33:p(V +), reg version3:*, reg version4:V, reg p34:p(V +), reg sealed3:*, reg sealed4:V, reg p35:p(V +), reg where7:*, reg where8:V, reg p36:p(V +), reg r124:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r125:V, reg r126:V, reg __4:cls, reg r127:V, reg names1:cls, reg r128:V, reg completeClassDefinition:cls, reg Class9:*, reg Class10:V, reg p37:p(V +), reg classDef:*, reg classDef1:V, reg p38:p(V +), reg where9:*, reg where10:V, reg p39:p(V +), reg r132:V, reg _uncacheClass:cls, reg Class11:*, reg Class12:V, reg p40:p(V +), reg classDef2:*, reg classDef3:V, reg p41:p(V +), reg r135:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r136:V, reg r137:V, reg superClasses2:*, reg superClasses3:V, reg length2:cls, reg r138:V, reg r139:V, reg c84:L, reg __5:cls, reg r140:V, reg l1:*, reg ___1:cls, reg r141:V, reg assignClassDef:cls, reg Class13:*, reg Class14:V, reg p42:p(V +), reg classDef4:*, reg classDef5:V, reg p43:p(V +), reg where11:*, reg where12:V, reg p44:p(V +), reg r145:V, reg character1:cls, reg r146:V, reg __6:cls, reg r147:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c85:L, reg x:V, reg __7:cls, reg r148:V, reg is2:cls, reg try:cls, reg setIs:cls, reg Class15:*, reg Class16:V, reg p45:p(V +), reg class2:*, reg class3:V, reg p46:p(V +), reg classDef6:*, reg classDef7:V, reg p47:p(V +), reg where13:*, reg where14:V, reg p48:p(V +), reg r153:V, reg p49:p(V +), reg r155:V, reg p50:p(V +), reg r157:V, reg c86:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r158:V, reg i9:I, reg r159:V, reg badContains:*, reg badContains1:V, reg class4:*, reg class5:V, reg c87:cls, reg r160:V, reg i10:I, reg getClassDef1:cls, reg Class17:*, reg Class18:V, reg p51:p(V +), reg where15:*, reg where16:V, reg p52:p(V +), reg r164:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r165:V, reg i13:I, reg r166:V, reg classDef8:*, reg classDef9:V, reg c88:V, reg c89:L, reg stop3:cls, reg sprintf:cls, reg dQuote1:cls, reg Class19:*, reg Class20:V, reg p53:p(V +), reg r168:V, reg p54:p(V +), reg r170:V, reg p55:p(V +), reg r172:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r173:V, reg r174:V, reg badContains2:*, reg badContains3:V, reg length3:cls, reg r175:V, reg c90:L, reg paste:cls, reg _dQ:cls, reg badContains4:*, reg badContains5:V, reg p56:p(V +), reg r177:V, reg p57:p(V +), reg r179:V, reg is3:cls, reg try1:cls, reg removeClass:cls, reg Class21:*, reg Class22:V, reg p58:p(V +), reg where17:*, reg where18:V, reg p59:p(V +), reg r182:V, reg p60:p(V +), reg r184:V, reg p61:p(V +), reg r186:V, reg c91:L, reg stop4:cls, reg gettextf1:cls, reg msg:*, reg msg1:V, reg p62:p(V +), reg dQuote2:cls, reg Class23:*, reg Class24:V, reg p63:p(V +), reg r189:V, reg p64:p(V +), reg sQuote:cls, reg getPackageName1:cls, reg where19:*, reg where20:V, reg p65:p(V +), reg r192:V, reg p66:p(V +), reg r194:V, reg p67:p(V +), reg r196:V, reg p68:p(V +), reg r198:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r200:V, reg r201:V, reg oldDef2:*, reg oldDef3:V, reg c92:V, reg c93:L, reg stop5:cls, reg gettextf2:cls, reg msg2:*, reg msg3:V, reg p69:p(V +), reg dQuote3:cls, reg Class25:*, reg Class26:V, reg p70:p(V +), reg r204:V, reg p71:p(V +), reg sQuote1:cls, reg getPackageName2:cls, reg where21:*, reg where22:V, reg p72:p(V +), reg r207:V, reg p73:p(V +), reg r209:V, reg p74:p(V +), reg r211:V, reg p75:p(V +), reg r213:V, reg r214:V, reg is4:cls, reg try2:cls, reg setClass:cls, reg Class27:*, reg Class28:V, reg p76:p(V +), reg oldDef4:*, reg oldDef5:V, reg p77:p(V +), reg where23:*, reg where24:V, reg p78:p(V +), reg r218:V, reg p79:p(V +), reg r220:V, reg p80:p(V +), reg r222:V, reg c94:L, reg stop6:cls, reg gettextf3:cls, reg msg4:*, reg msg5:V, reg p81:p(V +), reg dQuote4:cls, reg Class29:*, reg Class30:V, reg p82:p(V +), reg r225:V, reg p83:p(V +), reg sQuote2:cls, reg getPackageName3:cls, reg where25:*, reg where26:V, reg p84:p(V +), reg r228:V, reg p85:p(V +), reg r230:V, reg p86:p(V +), reg r232:V, reg p87:p(V +), reg r234:V, reg stop7:cls, reg gettextf4:cls, reg msg6:*, reg msg7:V, reg p88:p(V +), reg dQuote5:cls, reg Class31:*, reg Class32:V, reg p89:p(V +), reg r237:V, reg p90:p(V +), reg sQuote3:cls, reg getPackageName4:cls, reg where27:*, reg where28:V, reg p91:p(V +), reg r240:V, reg p92:p(V +), reg r242:V, reg p93:p(V +), reg r244:V, reg p94:p(V +), reg r246:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r248:V, reg r249:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r250:V, reg r251:V, reg __8:cls, reg r252:V, reg attr:cls, reg r253:V, reg length4:cls, reg r254:V, reg r255:V, reg c95:L, reg _reportSuperclassConflicts:cls, reg Class33:*, reg Class34:V, reg p95:p(V +), reg __9:cls, reg r257:V, reg p96:p(V +), reg where29:*, reg where30:V, reg p97:p(V +), reg r260:V, reg _checkRequiredGenerics:cls, reg Class35:*, reg Class36:V, reg p98:p(V +), reg classDef10:*, reg classDef11:V, reg p99:p(V +), reg where31:*, reg where32:V, reg p100:p(V +), reg r265:V, reg sealed5:*, reg sealed6:V, reg c96:L, reg l3:*, reg ___2:cls, reg r266:V, reg r267:V, reg S3methods1:*, reg S3methods2:V, reg c97:L, reg _setS3MethodsOn:cls, reg classDef12:*, reg classDef13:V, reg p101:p(V +), reg r270:V, reg assignClassDef1:cls, reg Class37:*, reg Class38:V, reg p102:p(V +), reg classDef14:*, reg classDef15:V, reg p103:p(V +), reg where33:*, reg where34:V, reg p104:p(V +), reg r275:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r276:V, reg r277:V, reg classGeneratorFunction:cls, reg classDef16:*, reg classDef17:V, reg p105:p(V +), reg where35:*, reg where36:V, reg p106:p(V +), reg r280:V, reg invisible:cls, reg r281:V |
    mkenv;
    st Class = Class;
    representation_isMissing = missing.0(representation);
    if representation_isMissing then L0() else L1(representation);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(representation_orDefault):
    st representation = representation_orDefault;
    prototype_isMissing = missing.0(prototype);
    if prototype_isMissing then L2(NULL) else L2(prototype);
  L2(prototype_orDefault):
    st prototype = prototype_orDefault;
    contains_isMissing = missing.0(contains);
    if contains_isMissing then L3() else L4(contains);
  L3():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    goto L4(p1);
  L4(contains_orDefault):
    st contains = contains_orDefault;
    validity_isMissing = missing.0(validity);
    if validity_isMissing then L5(NULL) else L5(validity);
  L5(validity_orDefault):
    st validity = validity_orDefault;
    access_isMissing = missing.0(access);
    if access_isMissing then L6() else L7(access);
  L6():
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      list1 = ldf list in base;
      r8 = dyn list1();
      goto L0(r8);
    L2():
      r6 = dyn base1();
      goto L0(r6);
    };
    goto L7(p2);
  L7(access_orDefault):
    st access = access_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L8() else L9(where);
  L8():
    p4 = prom<V +>{
      topenv = ldf topenv;
      p3 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r10 = dyn parent_frame();
        return r10;
      };
      r12 = dyn topenv(p3);
      return r12;
    };
    goto L9(p4);
  L9(where_orDefault):
    st where = where_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L10() else L11(version);
  L10():
    p5 = prom<V +>{
      _newExternalptr = ldf `.newExternalptr`;
      r14 = dyn _newExternalptr();
      return r14;
    };
    goto L11(p5);
  L11(version_orDefault):
    st version = version_orDefault;
    sealed_isMissing = missing.0(sealed);
    if sealed_isMissing then L12(FALSE) else L12(sealed);
  L12(sealed_orDefault):
    st sealed = sealed_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L13() else L14(package);
  L13():
    p7 = prom<V +>{
      getPackageName = ldf getPackageName;
      p6 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r17 = dyn getPackageName(p6);
      return r17;
    };
    goto L14(p7);
  L14(package_orDefault):
    st package = package_orDefault;
    S3methods_isMissing = missing.0(S3methods);
    if S3methods_isMissing then L15(FALSE) else L15(S3methods);
  L15(S3methods_orDefault):
    st S3methods = S3methods_orDefault;
    st slots = slots;
    getClassDef = ldf getClassDef;
    check L85() else D0();
  D0():
    deopt 1 [];
  L85():
    p8 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p9 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r21 = dyn getClassDef(p8, p9);
    check L86() else D1();
  D1():
    deopt 4 [r21];
  L86():
    st oldDef = r21;
    is = ldf is;
    check L87() else D2();
  D2():
    deopt 7 [];
  L87():
    p10 = prom<V +>{
      oldDef = ld oldDef;
      oldDef1 = force? oldDef;
      checkMissing(oldDef1);
      return oldDef1;
    };
    r23 = dyn is(p10, "classRepresentation");
    check L88() else D3();
  D3():
    deopt 10 [r23];
  L88():
    c = `as.logical`(r23);
    if c then L89() else L16(c);
  L16(c2):
    c6 = `as.logical`(c2);
    if c6 then L91() else L17();
  L89():
    __ = ldf `@` in base;
    r24 = dyn __(<sym oldDef>, <sym sealed>);
    c3 = `as.logical`(r24);
    c4 = `&&`(c, c3);
    goto L16(c4);
  L17():
    goto L18();
  L18():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L95() else L96();
  L91():
    stop = ldf stop;
    check L92() else D4();
  D4():
    deopt 15 [];
  L19(r33):
    r35 = `!`(r33);
    c7 = `as.logical`(r35);
    if c7 then L97() else L20();
  L92():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        dQuote = ldf dQuote;
        p11 = prom<V +>{
          Class3 = ld Class;
          Class4 = force? Class3;
          checkMissing(Class4);
          return Class4;
        };
        r26 = dyn dQuote(p11);
        return r26;
      };
      r28 = dyn gettextf("%s has a sealed class definition and cannot be redefined", p12);
      return r28;
    };
    r30 = dyn stop[, domain](p13, NA_LGL);
    check L93() else D5();
  L95():
    missing = ldf missing in base;
    r34 = dyn missing(<sym slots>);
    goto L19(r34);
  L96():
    r32 = dyn base2(<sym slots>);
    goto L19(r32);
  D5():
    deopt 19 [r30];
  L20():
    is1 = ldf is;
    check L109() else D12();
  L24():
    sym19 = ldf names;
    base19 = ldf names in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L195() else L196();
  L93():
    goto L18();
  L97():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  D12():
    deopt 58 [];
  L21(r37):
    r39 = `!`(r37);
    c8 = `as.logical`(r39);
    if c8 then L100() else L22();
  L56(r126):
    st superClasses = r126;
    completeClassDefinition = ldf completeClassDefinition;
    check L198() else D41();
  L98():
    missing1 = ldf missing in base;
    r38 = dyn missing1(<sym representation>);
    goto L21(r38);
  L99():
    r36 = dyn base3(<sym representation>);
    goto L21(r36);
  L109():
    p25 = prom<V +>{
      representation1 = ld representation;
      representation2 = force? representation1;
      checkMissing(representation2);
      return representation2;
    };
    r57 = dyn is1(p25, "classRepresentation");
    check L110() else D13();
  L195():
    __4 = ldf `@` in base;
    r127 = dyn __4(<sym classDef>, <sym contains>);
    names1 = ldf names in base;
    r128 = dyn names1(r127);
    check L197() else D40();
  L196():
    r125 = dyn base19(<lang `@`(classDef, contains)>);
    goto L56(r125);
  D13():
    deopt 61 [r57];
  D40():
    deopt 196 [r128];
  D41():
    deopt 199 [];
  L22():
    goto L23();
  L23():
    inferProperties = ldf inferProperties;
    check L104() else D8();
  L100():
    stop1 = ldf stop;
    check L101() else D6();
  L110():
    c9 = `as.logical`(r57);
    if c9 then L111() else L25();
  L197():
    goto L56(r128);
  L198():
    p37 = prom<V +>{
      Class9 = ld Class;
      Class10 = force? Class9;
      checkMissing(Class10);
      return Class10;
    };
    p38 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    p39 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r132 = dyn completeClassDefinition[, , , doExtends](p37, p38, p39, FALSE);
    check L199() else D42();
  D6():
    deopt 31 [];
  D8():
    deopt 37 [];
  D42():
    deopt 205 [r132];
  L25():
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L148() else L149();
  L101():
    r40 = dyn stop1("Argument \"representation\" cannot be used if argument \"slots\" is supplied");
    check L102() else D7();
  L104():
    p14 = prom<V +>{
      slots1 = ld slots;
      slots2 = force? slots1;
      checkMissing(slots2);
      return slots2;
    };
    r43 = dyn inferProperties(p14, "slot");
    check L105() else D9();
  L111():
    representation3 = ld representation;
    check L112() else D14();
  L199():
    st classDef = r132;
    _uncacheClass = ldf `.uncacheClass`;
    check L200() else D43();
  D7():
    deopt 33 [r40];
  D9():
    deopt 40 [r43];
  D14():
    deopt 62 [representation3];
  D43():
    deopt 208 [];
  L42(r86):
    c58 = `as.logical`(r86);
    if c58 then L151() else L43(c58);
  L102():
    goto L23();
  L105():
    st properties = r43;
    makeClassRepresentation = ldf makeClassRepresentation;
    check L106() else D10();
  L112():
    representation4 = force? representation3;
    checkMissing(representation4);
    st classDef = representation4;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L113() else L114();
  L148():
    representation5 = ld representation;
    check L150() else D21();
  L149():
    r85 = dyn base11(<sym representation>);
    goto L42(r85);
  L200():
    p40 = prom<V +>{
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    };
    p41 = prom<V +>{
      classDef2 = ld classDef;
      classDef3 = force? classDef2;
      checkMissing(classDef3);
      return classDef3;
    };
    r135 = dyn _uncacheClass(p40, p41);
    check L201() else D44();
  D10():
    deopt 43 [];
  D21():
    deopt 114 [representation5];
  D44():
    deopt 211 [r135];
  L26(r59):
    c10 = `as.logical`(r59);
    if c10 then L115() else L27(c10);
  L43(c60):
    c67 = `as.logical`(c60);
    if c67 then L157() else L45(c67);
  L106():
    p15 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    p16 = prom<V +>{
      properties = ld properties;
      properties1 = force? properties;
      checkMissing(properties1);
      return properties1;
    };
    p17 = prom<V +>{
      contains1 = ld contains;
      contains2 = force? contains1;
      checkMissing(contains2);
      return contains2;
    };
    p18 = prom<V +>{
      prototype1 = ld prototype;
      prototype2 = force? prototype1;
      checkMissing(prototype2);
      return prototype2;
    };
    p19 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p20 = prom<V +>{
      validity1 = ld validity;
      validity2 = force? validity1;
      checkMissing(validity2);
      return validity2;
    };
    p21 = prom<V +>{
      access1 = ld access;
      access2 = force? access1;
      checkMissing(access2);
      return access2;
    };
    p22 = prom<V +>{
      version1 = ld version;
      version2 = force? version1;
      checkMissing(version2);
      return version2;
    };
    p23 = prom<V +>{
      sealed1 = ld sealed;
      sealed2 = force? sealed1;
      checkMissing(sealed2);
      return sealed2;
    };
    p24 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r54 = dyn makeClassRepresentation[, , , , , , , , , where](p15, p16, p17, p18, p19, p20, p21, p22, p23, p24);
    check L107() else D11();
  L113():
    missing2 = ldf missing in base;
    r60 = dyn missing2(<sym prototype>);
    goto L26(r60);
  L114():
    r58 = dyn base4(<sym prototype>);
    goto L26(r58);
  L150():
    representation6 = force? representation5;
    checkMissing(representation6);
    c57 = `is.character`(representation6);
    goto L42(c57);
  L151():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L152() else L153();
  L201():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L202() else L203();
  D11():
    deopt 55 [r54];
  L27(c12):
    c19 = `as.logical`(c12);
    if c19 then L119() else L29(c19);
  L44(c63, r88):
    r90 = `==`(r88, 1);
    c64 = `as.logical`(r90);
    c65 = `&&`(c63, c64);
    goto L43(c65);
  L45(c69):
    c80 = `as.logical`(c69);
    if c80 then L165() else L48();
  L57(r137):
    r139 = `>`(r137, 0);
    c84 = `as.logical`(r139);
    if c84 then L206() else L58();
  L107():
    st classDef = r54;
    goto L24();
  L115():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L152():
    representation7 = ld representation;
    check L154() else D22();
  L153():
    r87 = dyn base12(<sym representation>);
    goto L44(c58, r87);
  L157():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L158() else L159();
  L202():
    superClasses2 = ld superClasses;
    check L204() else D45();
  L203():
    r136 = dyn base20(<sym superClasses>);
    goto L57(r136);
  D22():
    deopt 119 [c58, representation7];
  D45():
    deopt 214 [superClasses2];
  L28(c15, r62):
    c16 = `as.logical`(r62);
    c17 = `&&`(c15, c16);
    goto L27(c17);
  L29(c21):
    c28 = `as.logical`(c21);
    if c28 then L123() else L31(c28);
  L46(c72, r92):
    c77 = `as.logical`(r92);
    c78 = `&&`(c72, c77);
    goto L45(c78);
  L48():
    goto L50();
  L50():
    sym16 = ldf nzchar;
    base16 = ldf nzchar in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L171() else L172();
  L58():
    goto L81();
  L81():
    S3methods1 = ld S3methods;
    check L279() else D89();
  L116():
    missing3 = ldf missing in base;
    r63 = dyn missing3(<sym contains>);
    goto L28(c10, r63);
  L117():
    r61 = dyn base5(<sym contains>);
    goto L28(c10, r61);
  L119():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  L154():
    representation8 = force? representation7;
    checkMissing(representation8);
    length1 = ldf length in base;
    r89 = dyn length1(representation8);
    check L155() else D23();
  L158():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L160() else L161();
  L159():
    r91 = dyn base13(<lang names(representation)>);
    goto L46(c67, r91);
  L165():
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L166() else L167();
  L204():
    superClasses3 = force? superClasses2;
    checkMissing(superClasses3);
    length2 = ldf length in base;
    r138 = dyn length2(superClasses3);
    check L205() else D46();
  L206():
    __5 = ldf `@` in base;
    r140 = dyn __5(<sym classDef>, <sym sealed>);
    st sealed = r140;
    l1 = ld classDef;
    ___1 = ldf `@<-`;
    check L207() else D47();
  D23():
    deopt 122 [c58, r89];
  D46():
    deopt 217 [r138];
  D47():
    deopt 226 [FALSE, l1, FALSE];
  D89():
    deopt 378 [S3methods1];
  L30(c24, r65):
    c25 = `as.logical`(r65);
    c26 = `&&`(c24, c25);
    goto L29(c26);
  L31(c30):
    c37 = `as.logical`(c30);
    if c37 then L127() else L33(c37);
  L47(c75, r94):
    c76 = `==`(r94, NULL);
    goto L46(c75, c76);
  L49(r97):
    st representation = r97;
    goto L50();
  L51(r101):
    st slots = r101;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L176() else L177();
  L120():
    missing4 = ldf missing in base;
    r66 = dyn missing4(<sym validity>);
    goto L30(c19, r66);
  L121():
    r64 = dyn base6(<sym validity>);
    goto L30(c19, r64);
  L123():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L124() else L125();
  L155():
    goto L44(c58, r89);
  L160():
    representation9 = ld representation;
    check L162() else D24();
  L161():
    r93 = dyn base14(<sym representation>);
    goto L47(c67, r93);
  L166():
    representation11 = ld representation;
    check L168() else D26();
  L167():
    r96 = dyn base15(<sym representation>);
    goto L49(r96);
  L171():
    allNames = ldf allNames;
    check L173() else D28();
  L172():
    r100 = dyn base16(<lang allNames(representation)>);
    goto L51(r100);
  L205():
    goto L57(r138);
  L207():
    r141 = dyn ___1(l1, NULL, "sealed", FALSE);
    check L208() else D48();
  L279():
    S3methods2 = force? S3methods1;
    checkMissing(S3methods2);
    c97 = `as.logical`(S3methods2);
    if c97 then L280() else L82();
  D24():
    deopt 129 [c67, representation9];
  D26():
    deopt 137 [representation11];
  D28():
    deopt 147 [];
  D48():
    deopt 229 [FALSE, r141];
  L32(c33, r68):
    c34 = `as.logical`(r68);
    c35 = `&&`(c33, c34);
    goto L31(c35);
  L33(c39):
    c46 = `as.logical`(c39);
    if c46 then L131() else L35(c46);
  L52(r106):
    st superClasses = r106;
    representation19 = ld representation;
    check L188() else D36();
  L82():
    goto L83();
  L83():
    assignClassDef1 = ldf assignClassDef;
    check L284() else D92();
  L124():
    missing5 = ldf missing in base;
    r69 = dyn missing5(<sym access>);
    goto L32(c28, r69);
  L125():
    r67 = dyn base7(<sym access>);
    goto L32(c28, r67);
  L127():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L128() else L129();
  L162():
    representation10 = force? representation9;
    checkMissing(representation10);
    names = ldf names in base;
    r95 = dyn names(representation10);
    check L163() else D25();
  L168():
    representation12 = force? representation11;
    checkMissing(representation12);
    list2 = ldf list in base;
    r98 = dyn list2(representation12);
    check L169() else D27();
  L173():
    p26 = prom<V +>{
      representation13 = ld representation;
      representation14 = force? representation13;
      checkMissing(representation14);
      return representation14;
    };
    r103 = dyn allNames(p26);
    check L174() else D29();
  L176():
    sym18 = ldf `as.character`;
    base18 = ldf `as.character` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L178() else L179();
  L177():
    r105 = dyn base17(<lang as.character(`[`(representation, `!`(slots)))>, <sym contains>);
    goto L52(r105);
  L208():
    st classDef = r141;
    assignClassDef = ldf assignClassDef;
    check L209() else D49();
  L280():
    _setS3MethodsOn = ldf `.setS3MethodsOn`;
    check L281() else D90();
  D25():
    deopt 132 [c67, r95];
  D27():
    deopt 140 [r98];
  D29():
    deopt 149 [r103];
  D36():
    deopt 170 [representation19];
  D49():
    deopt 232 [];
  D90():
    deopt 381 [];
  D92():
    deopt 388 [];
  L34(c42, r71):
    c43 = `as.logical`(r71);
    c44 = `&&`(c42, c43);
    goto L33(c44);
  L35(c48):
    r76 = `!`(c48);
    c55 = `as.logical`(r76);
    if c55 then L135() else L37();
  L53(r108):
    contains3 = ld contains;
    check L186() else D34();
  L128():
    missing6 = ldf missing in base;
    r72 = dyn missing6(<sym version>);
    goto L34(c37, r72);
  L129():
    r70 = dyn base8(<sym version>);
    goto L34(c37, r70);
  L131():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L132() else L133();
  L163():
    goto L47(c67, r95);
  L169():
    goto L49(r98);
  L174():
    nzchar = ldf nzchar in base;
    r104 = dyn nzchar(r103);
    check L175() else D30();
  L178():
    representation15 = ld representation;
    check L180() else D31();
  L179():
    r107 = dyn base18(<lang `[`(representation, `!`(slots))>);
    goto L53(r107);
  L188():
    representation20 = force? representation19;
    checkMissing(representation20);
    c83 = `is.object`(representation20);
    if c83 then L189() else L190(representation20);
  L209():
    p42 = prom<V +>{
      Class13 = ld Class;
      Class14 = force? Class13;
      checkMissing(Class14);
      return Class14;
    };
    p43 = prom<V +>{
      classDef4 = ld classDef;
      classDef5 = force? classDef4;
      checkMissing(classDef5);
      return classDef5;
    };
    p44 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r145 = dyn assignClassDef(p42, p43, p44);
    check L210() else D50();
  L281():
    p101 = prom<V +>{
      classDef12 = ld classDef;
      classDef13 = force? classDef12;
      checkMissing(classDef13);
      return classDef13;
    };
    r270 = dyn _setS3MethodsOn(p101);
    check L282() else D91();
  L284():
    p102 = prom<V +>{
      Class37 = ld Class;
      Class38 = force? Class37;
      checkMissing(Class38);
      return Class38;
    };
    p103 = prom<V +>{
      classDef14 = ld classDef;
      classDef15 = force? classDef14;
      checkMissing(classDef15);
      return classDef15;
    };
    p104 = prom<V +>{
      where33 = ld where;
      where34 = force? where33;
      checkMissing(where34);
      return where34;
    };
    r275 = dyn assignClassDef1(p102, p103, p104);
    check L285() else D93();
  D30():
    deopt 151 [r104];
  D31():
    deopt 157 [representation15];
  D34():
    deopt 165 [contains3];
  D50():
    deopt 236 [r145];
  D91():
    deopt 383 [r270];
  D93():
    deopt 392 [r275];
  L36(c51, r74):
    c52 = `as.logical`(r74);
    c53 = `&&`(c51, c52);
    goto L35(c53);
  L37():
    goto L38();
  L38():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L139() else L140();
  L55(dx3):
    st properties = dx3;
    makeClassRepresentation1 = ldf makeClassRepresentation;
    check L193() else D38();
  L132():
    missing7 = ldf missing in base;
    r75 = dyn missing7(<sym package>);
    goto L36(c46, r75);
  L133():
    r73 = dyn base9(<sym package>);
    goto L36(c46, r73);
  L135():
    stop2 = ldf stop;
    check L136() else D15();
  L175():
    goto L51(r104);
  L180():
    representation16 = force? representation15;
    checkMissing(representation16);
    c81 = `is.object`(representation16);
    if c81 then L181() else L182(representation16);
  L186():
    contains4 = force? contains3;
    checkMissing(contains4);
    c82 = ldf c in base;
    r112 = dyn c82(r108, contains4);
    check L187() else D35();
  L189():
    dr2 = tryDispatchBuiltin.1("[", representation20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L191() else L190(dr2);
  L190(representation22):
    slots5 = ld slots;
    check L192() else D37();
  L210():
    character1 = ldf character;
    check L211() else D51();
  L282():
    st classDef = r270;
    goto L83();
  L285():
    sym27 = ldf invisible;
    base27 = ldf invisible in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L286() else L287();
  D15():
    deopt 90 [];
  D35():
    deopt 168 [r112];
  D37():
    deopt 172 [representation22, slots5];
  D38():
    deopt 177 [];
  D51():
    deopt 238 [];
  L39(r80):
    r83 = `==`(r80, 0);
    c56 = `as.logical`(r83);
    if c56 then L142() else L40();
  L54(dx1):
    as_character = ldf `as.character` in base;
    r111 = dyn as_character(dx1);
    check L185() else D33();
  L84(r277):
    popenv;
    return r277;
  L136():
    r77 = dyn stop2("only arguments 'Class' and 'where' can be supplied when argument 'representation' is a 'classRepresentation' object");
    check L137() else D16();
  L139():
    __1 = ldf `@` in base;
    r81 = dyn __1(<sym classDef>, <sym package>);
    length = ldf length in base;
    r82 = dyn length(r81);
    check L141() else D17();
  L140():
    r79 = dyn base10(<lang `@`(classDef, package)>);
    goto L39(r79);
  L181():
    dr = tryDispatchBuiltin.1("[", representation16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L183() else L182(dr);
  L182(representation18):
    slots3 = ld slots;
    check L184() else D32();
  L187():
    goto L52(r112);
  L191():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L55(dx2);
  L192():
    slots6 = force? slots5;
    __3 = ldf `[` in base;
    r113 = dyn __3(representation22, slots6);
    goto L55(r113);
  L193():
    p27 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p28 = prom<V +>{
      properties2 = ld properties;
      properties3 = force? properties2;
      checkMissing(properties3);
      return properties3;
    };
    p29 = prom<V +>{
      superClasses = ld superClasses;
      superClasses1 = force? superClasses;
      checkMissing(superClasses1);
      return superClasses1;
    };
    p30 = prom<V +>{
      prototype3 = ld prototype;
      prototype4 = force? prototype3;
      checkMissing(prototype4);
      return prototype4;
    };
    p31 = prom<V +>{
      package6 = ld package;
      package7 = force? package6;
      checkMissing(package7);
      return package7;
    };
    p32 = prom<V +>{
      validity3 = ld validity;
      validity4 = force? validity3;
      checkMissing(validity4);
      return validity4;
    };
    p33 = prom<V +>{
      access3 = ld access;
      access4 = force? access3;
      checkMissing(access4);
      return access4;
    };
    p34 = prom<V +>{
      version3 = ld version;
      version4 = force? version3;
      checkMissing(version4);
      return version4;
    };
    p35 = prom<V +>{
      sealed3 = ld sealed;
      sealed4 = force? sealed3;
      checkMissing(sealed4);
      return sealed4;
    };
    p36 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r124 = dyn makeClassRepresentation1[, , , , , , , , , where](p27, p28, p29, p30, p31, p32, p33, p34, p35, p36);
    check L194() else D39();
  L211():
    r146 = dyn character1();
    check L212() else D52();
  L286():
    classGeneratorFunction = ldf classGeneratorFunction;
    check L288() else D94();
  L287():
    r276 = dyn base27(<lang classGeneratorFunction(classDef, where)>);
    goto L84(r276);
  D16():
    deopt 92 [r77];
  D17():
    deopt 100 [r82];
  D32():
    deopt 159 [representation18, slots3];
  D33():
    deopt 164 [r111];
  D39():
    deopt 189 [r124];
  D52():
    deopt 239 [r146];
  D94():
    deopt 396 [];
  L40():
    goto L41(NULL);
  L41(package5):
    goto L24();
  L137():
    goto L38();
  L141():
    goto L39(r82);
  L142():
    package3 = ld package;
    check L143() else D18();
  L183():
    dx = getTryDispatchBuiltinValue(dr);
    goto L54(dx);
  L184():
    slots4 = force? slots3;
    checkMissing(slots4);
    r109 = `!`(slots4);
    __2 = ldf `[` in base;
    r110 = dyn __2(representation18, r109);
    goto L54(r110);
  L185():
    goto L53(r111);
  L194():
    st classDef = r124;
    goto L24();
  L212():
    st badContains = r146;
    __6 = ldf `@` in base;
    r147 = dyn __6(<sym classDef>, <sym contains>);
    s = toForSeq(r147);
    l2 = length(s);
    i = 0;
    goto L59(i);
  L288():
    p105 = prom<V +>{
      classDef16 = ld classDef;
      classDef17 = force? classDef16;
      checkMissing(classDef17);
      return classDef17;
    };
    p106 = prom<V +>{
      where35 = ld where;
      where36 = force? where35;
      checkMissing(where36);
      return where36;
    };
    r280 = dyn classGeneratorFunction(p105, p106);
    check L289() else D95();
  D18():
    deopt 103 [package3];
  D95():
    deopt 399 [r280];
  L59(i1):
    i2 = `+`.1(i1, 1);
    c85 = `<`.1(l2, i2);
    if c85 then L213() else L65();
  L143():
    package4 = force? package3;
    checkMissing(package4);
    l = ld classDef;
    ___ = ldf `@<-`;
    check L144() else D19();
  L289():
    invisible = ldf invisible in base;
    r281 = dyn invisible(r280);
    check L290() else D96();
  D19():
    deopt 106 [package4, l, package4];
  D96():
    deopt 401 [r281];
  L65():
    x = `[[`(s, i2, NULL, TRUE);
    st ext = x;
    __7 = ldf `@` in base;
    r148 = dyn __7(<sym ext>, <sym superClass>);
    st class2 = r148;
    is2 = ldf is;
    check L214() else D53();
  L144():
    r84 = dyn ___(l, NULL, "package", package4);
    check L145() else D20();
  L213():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L232() else L233();
  L290():
    goto L84(r281);
  D20():
    deopt 109 [package4, r84];
  D53():
    deopt 247 [i2];
  L66(r174):
    c90 = `as.logical`(r174);
    if c90 then L236() else L67();
  L145():
    st classDef = r84;
    goto L41(package4);
  L214():
    p50 = prom<V +>{
      try = ldf try;
      p49 = prom<V +>{
        setIs = ldf setIs;
        p45 = prom<V +>{
          Class15 = ld Class;
          Class16 = force? Class15;
          checkMissing(Class16);
          return Class16;
        };
        p46 = prom<V +>{
          class2 = ld class2;
          class3 = force? class2;
          checkMissing(class3);
          return class3;
        };
        p47 = prom<V +>{
          classDef6 = ld classDef;
          classDef7 = force? classDef6;
          checkMissing(classDef7);
          return classDef7;
        };
        p48 = prom<V +>{
          where13 = ld where;
          where14 = force? where13;
          checkMissing(where14);
          return where14;
        };
        r153 = dyn setIs[, , classDef, where](p45, p46, p47, p48);
        return r153;
      };
      r155 = dyn try(p49);
      return r155;
    };
    r157 = dyn is2(p50, "try-error");
    check L215() else D54();
  L232():
    badContains2 = ld badContains;
    check L234() else D63();
  L233():
    r173 = dyn base23(<sym badContains>);
    goto L66(r173);
  D54():
    deopt 250 [i2, r157];
  D63():
    deopt 284 [badContains2];
  L67():
    goto L74();
  L74():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L261() else L262();
  L215():
    c86 = `as.logical`(r157);
    if c86 then L216() else L60();
  L234():
    badContains3 = force? badContains2;
    checkMissing(badContains3);
    length3 = ldf length in base;
    r175 = dyn length3(badContains3);
    check L235() else D64();
  L236():
    paste = ldf paste;
    check L237() else D65();
  D64():
    deopt 287 [r175];
  D65():
    deopt 289 [];
  L60():
    getClassDef1 = ldf getClassDef;
    check L223() else D58();
  L62(i10):
    goto L59(i10);
  L75(r249):
    r255 = `>`(r249, 0.0);
    c95 = `as.logical`(r255);
    if c95 then L267() else L77();
  L216():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L217() else L218();
  L235():
    goto L66(r175);
  L237():
    p57 = prom<V +>{
      _dQ = ldf `.dQ`;
      p56 = prom<V +>{
        badContains4 = ld badContains;
        badContains5 = force? badContains4;
        checkMissing(badContains5);
        return badContains5;
      };
      r177 = dyn _dQ(p56);
      return r177;
    };
    r179 = dyn paste[, collapse](p57, ", ");
    check L238() else D66();
  L261():
    sym26 = ldf attr;
    base26 = ldf attr in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L263() else L264();
  L262():
    r248 = dyn base25(<lang attr(`@`(classDef, contains), "conflicts")>);
    goto L75(r248);
  D58():
    deopt 261 [i2];
  D66():
    deopt 293 [r179];
  L61(i9, r159):
    st badContains = r159;
    goto L62(i9);
  L76(r251):
    length4 = ldf length in base;
    r254 = dyn length4(r251);
    check L266() else D81();
  L77():
    goto L78();
  L78():
    _checkRequiredGenerics = ldf `.checkRequiredGenerics`;
    check L271() else D84();
  L217():
    badContains = ld badContains;
    check L219() else D55();
  L218():
    r158 = dyn base21(<sym badContains>, <sym class2>);
    goto L61(i2, r158);
  L223():
    p51 = prom<V +>{
      Class17 = ld Class;
      Class18 = force? Class17;
      checkMissing(Class18);
      return Class18;
    };
    p52 = prom<V +>{
      where15 = ld where;
      where16 = force? where15;
      checkMissing(where16);
      return where16;
    };
    r164 = dyn getClassDef1[, where](p51, p52);
    check L224() else D59();
  L238():
    st msg = r179;
    is3 = ldf is;
    check L239() else D67();
  L263():
    __8 = ldf `@` in base;
    r252 = dyn __8(<sym classDef>, <sym contains>);
    attr = ldf attr in base;
    r253 = dyn attr(r252, "conflicts");
    check L265() else D80();
  L264():
    r250 = dyn base26(<lang `@`(classDef, contains)>, "conflicts");
    goto L76(r250);
  L267():
    _reportSuperclassConflicts = ldf `.reportSuperclassConflicts`;
    check L268() else D82();
  D55():
    deopt 253 [i2, badContains];
  D59():
    deopt 265 [i2, r164];
  D67():
    deopt 296 [];
  D80():
    deopt 345 [r253];
  D81():
    deopt 347 [r254];
  D82():
    deopt 351 [];
  D84():
    deopt 359 [];
  L219():
    badContains1 = force? badContains;
    checkMissing(badContains1);
    class4 = ld class2;
    check L220() else D56();
  L224():
    st classDef = r164;
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L225() else L226();
  L239():
    p61 = prom<V +>{
      try1 = ldf try;
      p60 = prom<V +>{
        removeClass = ldf removeClass;
        p58 = prom<V +>{
          Class21 = ld Class;
          Class22 = force? Class21;
          checkMissing(Class22);
          return Class22;
        };
        p59 = prom<V +>{
          where17 = ld where;
          where18 = force? where17;
          checkMissing(where18);
          return where18;
        };
        r182 = dyn removeClass(p58, p59);
        return r182;
      };
      r184 = dyn try1(p60);
      return r184;
    };
    r186 = dyn is3(p61, "try-error");
    check L240() else D68();
  L265():
    goto L76(r253);
  L266():
    goto L75(r254);
  L268():
    p95 = prom<V +>{
      Class33 = ld Class;
      Class34 = force? Class33;
      checkMissing(Class34);
      return Class34;
    };
    p96 = prom<V +>{
      __9 = ldf `@` in base;
      r257 = dyn __9(<sym classDef>, <sym contains>);
      return r257;
    };
    p97 = prom<V +>{
      where29 = ld where;
      where30 = force? where29;
      checkMissing(where30);
      return where30;
    };
    r260 = dyn _reportSuperclassConflicts(p95, p96, p97);
    check L269() else D83();
  L271():
    p98 = prom<V +>{
      Class35 = ld Class;
      Class36 = force? Class35;
      checkMissing(Class36);
      return Class36;
    };
    p99 = prom<V +>{
      classDef10 = ld classDef;
      classDef11 = force? classDef10;
      checkMissing(classDef11);
      return classDef11;
    };
    p100 = prom<V +>{
      where31 = ld where;
      where32 = force? where31;
      checkMissing(where32);
      return where32;
    };
    r265 = dyn _checkRequiredGenerics(p98, p99, p100);
    check L272() else D85();
  D56():
    deopt 255 [i2, class4];
  D68():
    deopt 299 [r186];
  D83():
    deopt 355 [r260];
  D85():
    deopt 363 [r265];
  L63(i13, r166):
    c89 = `as.logical`(r166);
    if c89 then L228() else L64();
  L220():
    class5 = force? class4;
    checkMissing(class5);
    c87 = ldf c in base;
    r160 = dyn c87(badContains1, class5);
    check L221() else D57();
  L225():
    classDef8 = ld classDef;
    check L227() else D60();
  L226():
    r165 = dyn base22(<sym classDef>);
    goto L63(i2, r165);
  L240():
    c91 = `as.logical`(r186);
    if c91 then L241() else L68();
  L269():
    goto L78();
  L272():
    sealed5 = ld sealed;
    check L273() else D86();
  D57():
    deopt 258 [i2, r160];
  D60():
    deopt 268 [i2, classDef8];
  D86():
    deopt 364 [sealed5];
  L64():
    goto L62(i13);
  L68():
    goto L69();
  L69():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L245() else L246();
  L221():
    goto L61(i2, r160);
  L227():
    classDef9 = force? classDef8;
    checkMissing(classDef9);
    c88 = `==`(classDef9, NULL);
    goto L63(i2, c88);
  L228():
    stop3 = ldf stop;
    check L229() else D61();
  L241():
    stop4 = ldf stop;
    check L242() else D69();
  L273():
    sealed6 = force? sealed5;
    checkMissing(sealed6);
    c96 = `as.logical`(sealed6);
    if c96 then L274() else L79();
  D61():
    deopt 272 [i13];
  D69():
    deopt 301 [];
  L70(r201):
    c93 = `as.logical`(r201);
    if c93 then L248() else L71();
  L79():
    goto L80(NULL);
  L80(r267):
    goto L81();
  L229():
    p55 = prom<V +>{
      sprintf = ldf sprintf;
      p54 = prom<V +>{
        dQuote1 = ldf dQuote;
        p53 = prom<V +>{
          Class19 = ld Class;
          Class20 = force? Class19;
          checkMissing(Class20);
          return Class20;
        };
        r168 = dyn dQuote1(p53);
        return r168;
      };
      r170 = dyn sprintf("internal error: definition of class %s not properly assigned", p54);
      return r170;
    };
    r172 = dyn stop3[, domain](p55, NA_LGL);
    check L230() else D62();
  L242():
    p68 = prom<V +>{
      gettextf1 = ldf gettextf;
      p62 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p64 = prom<V +>{
        dQuote2 = ldf dQuote;
        p63 = prom<V +>{
          Class23 = ld Class;
          Class24 = force? Class23;
          checkMissing(Class24);
          return Class24;
        };
        r189 = dyn dQuote2(p63);
        return r189;
      };
      p67 = prom<V +>{
        sQuote = ldf sQuote;
        p66 = prom<V +>{
          getPackageName1 = ldf getPackageName;
          p65 = prom<V +>{
            where19 = ld where;
            where20 = force? where19;
            checkMissing(where20);
            return where20;
          };
          r192 = dyn getPackageName1(p65);
          return r192;
        };
        r194 = dyn sQuote(p66);
        return r194;
      };
      r196 = dyn gettextf1("error in contained classes (%s) for class %s and unable to remove definition from %s", p62, p64, p67);
      return r196;
    };
    r198 = dyn stop4[, domain](p68, NA_LGL);
    check L243() else D70();
  L245():
    oldDef2 = ld oldDef;
    check L247() else D71();
  L246():
    r200 = dyn base24(<sym oldDef>);
    goto L70(r200);
  L274():
    l3 = ld classDef;
    ___2 = ldf `@<-`;
    check L275() else D87();
  D62():
    deopt 276 [i13, r172];
  D70():
    deopt 305 [r198];
  D71():
    deopt 309 [oldDef2];
  D87():
    deopt 369 [TRUE, l3, TRUE];
  L71():
    is4 = ldf is;
    check L252() else D74();
  L72(r214):
    goto L74();
  L230():
    goto L62(i13);
  L243():
    goto L69();
  L247():
    oldDef3 = force? oldDef2;
    checkMissing(oldDef3);
    c92 = `==`(oldDef3, NULL);
    goto L70(c92);
  L248():
    stop5 = ldf stop;
    check L249() else D72();
  L275():
    r266 = dyn ___2(l3, NULL, "sealed", TRUE);
    check L276() else D88();
  D72():
    deopt 313 [];
  D74():
    deopt 319 [];
  D88():
    deopt 372 [TRUE, r266];
  L249():
    p75 = prom<V +>{
      gettextf2 = ldf gettextf;
      p69 = prom<V +>{
        msg2 = ld msg;
        msg3 = force? msg2;
        checkMissing(msg3);
        return msg3;
      };
      p71 = prom<V +>{
        dQuote3 = ldf dQuote;
        p70 = prom<V +>{
          Class25 = ld Class;
          Class26 = force? Class25;
          checkMissing(Class26);
          return Class26;
        };
        r204 = dyn dQuote3(p70);
        return r204;
      };
      p74 = prom<V +>{
        sQuote1 = ldf sQuote;
        p73 = prom<V +>{
          getPackageName2 = ldf getPackageName;
          p72 = prom<V +>{
            where21 = ld where;
            where22 = force? where21;
            checkMissing(where22);
            return where22;
          };
          r207 = dyn getPackageName2(p72);
          return r207;
        };
        r209 = dyn sQuote1(p73);
        return r209;
      };
      r211 = dyn gettextf2("error in contained classes (%s) for class %s; class definition removed from %s", p69, p71, p74);
      return r211;
    };
    r213 = dyn stop5[, domain](p75, NA_LGL);
    check L250() else D73();
  L252():
    p80 = prom<V +>{
      try2 = ldf try;
      p79 = prom<V +>{
        setClass = ldf setClass;
        p76 = prom<V +>{
          Class27 = ld Class;
          Class28 = force? Class27;
          checkMissing(Class28);
          return Class28;
        };
        p77 = prom<V +>{
          oldDef4 = ld oldDef;
          oldDef5 = force? oldDef4;
          checkMissing(oldDef5);
          return oldDef5;
        };
        p78 = prom<V +>{
          where23 = ld where;
          where24 = force? where23;
          checkMissing(where24);
          return where24;
        };
        r218 = dyn setClass[, , where](p76, p77, p78);
        return r218;
      };
      r220 = dyn try2(p79);
      return r220;
    };
    r222 = dyn is4(p80, "try-error");
    check L253() else D75();
  L276():
    st classDef = r266;
    goto L80(TRUE);
  D73():
    deopt 317 [r213];
  D75():
    deopt 322 [r222];
  L250():
    goto L72(r213);
  L253():
    c94 = `as.logical`(r222);
    if c94 then L254() else L73();
  L73():
    stop7 = ldf stop;
    check L258() else D78();
  L254():
    stop6 = ldf stop;
    check L255() else D76();
  D76():
    deopt 324 [];
  D78():
    deopt 330 [];
  L255():
    p87 = prom<V +>{
      gettextf3 = ldf gettextf;
      p81 = prom<V +>{
        msg4 = ld msg;
        msg5 = force? msg4;
        checkMissing(msg5);
        return msg5;
      };
      p83 = prom<V +>{
        dQuote4 = ldf dQuote;
        p82 = prom<V +>{
          Class29 = ld Class;
          Class30 = force? Class29;
          checkMissing(Class30);
          return Class30;
        };
        r225 = dyn dQuote4(p82);
        return r225;
      };
      p86 = prom<V +>{
        sQuote2 = ldf sQuote;
        p85 = prom<V +>{
          getPackageName3 = ldf getPackageName;
          p84 = prom<V +>{
            where25 = ld where;
            where26 = force? where25;
            checkMissing(where26);
            return where26;
          };
          r228 = dyn getPackageName3(p84);
          return r228;
        };
        r230 = dyn sQuote2(p85);
        return r230;
      };
      r232 = dyn gettextf3("error in contained classes (%s) for class %s and unable to restore previous definition from %s", p81, p83, p86);
      return r232;
    };
    r234 = dyn stop6[, domain](p87, NA_LGL);
    check L256() else D77();
  L258():
    p94 = prom<V +>{
      gettextf4 = ldf gettextf;
      p88 = prom<V +>{
        msg6 = ld msg;
        msg7 = force? msg6;
        checkMissing(msg7);
        return msg7;
      };
      p90 = prom<V +>{
        dQuote5 = ldf dQuote;
        p89 = prom<V +>{
          Class31 = ld Class;
          Class32 = force? Class31;
          checkMissing(Class32);
          return Class32;
        };
        r237 = dyn dQuote5(p89);
        return r237;
      };
      p93 = prom<V +>{
        sQuote3 = ldf sQuote;
        p92 = prom<V +>{
          getPackageName4 = ldf getPackageName;
          p91 = prom<V +>{
            where27 = ld where;
            where28 = force? where27;
            checkMissing(where28);
            return where28;
          };
          r240 = dyn getPackageName4(p91);
          return r240;
        };
        r242 = dyn sQuote3(p92);
        return r242;
      };
      r244 = dyn gettextf4("error in contained classes (%s) for class %s; previous definition restored to %s", p88, p90, p93);
      return r244;
    };
    r246 = dyn stop7[, domain](p94, NA_LGL);
    check L259() else D79();
  D77():
    deopt 328 [r234];
  D79():
    deopt 334 [r246];
  L256():
    goto L72(r234);
  L259():
    goto L72(r246);
  }
}
fun inner107536280(x, i, j, `...`, value) {
  (reg x:*, reg i:*, reg j:*, reg ddd:dots, reg value:*) -+> V { var x:*, var i:*, var j:*, var `...`:dots?, var value:*, reg as:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg value1:*, reg value2:V, reg l:*, reg c:L, reg value4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg ____:cls, reg r2:V, reg Sys_time:cls, reg r3:V, reg l3:*, reg ___:cls, reg r4:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st `...` = ddd;
    st value = value;
    as = ldf as;
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
    r1 = dyn as(p, "environment");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    st ev = r1;
    value1 = ld value;
    check L3() else D2();
  D2():
    deopt 6 [value1];
  L3():
    value2 = force? value1;
    checkMissing(value2);
    l = ld ev;
    c = `is.object`(l);
    if c then L4() else L5(value2, l);
  L0(dx1):
    st ev = dx1;
    Sys_time = ldf `Sys.time`;
    check L8() else D4();
  L4():
    dr = tryDispatchBuiltin.0("[[<-", l, value2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(value2, dr);
  L5(value4, l2):
    i1 = ld i;
    check L7() else D3();
  D3():
    deopt 9 [value4, l2, value2, i1];
  D4():
    deopt 14 [];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    i2 = force? i1;
    ____ = ldf `[[<-` in base;
    r2 = dyn ____(l2, value2, i2);
    goto L0(r2);
  L8():
    r3 = dyn Sys_time();
    check L9() else D5();
  D5():
    deopt 15 [r3];
  L9():
    l3 = ld x;
    ___ = ldf `@<-`;
    check L10() else D6();
  D6():
    deopt 17 [r3, l3, r3];
  L10():
    r4 = dyn ___(l3, NULL, "update", r3);
    check L11() else D7();
  D7():
    deopt 20 [r3, r4];
  L11():
    st x = r4;
    x3 = ld x;
    check L12() else D8();
  D8():
    deopt 22 [x3];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}