fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg exists:cls, reg r5:V, reg getS3method:cls, reg r6:V |
    mkenv;
    r = clos inner1374065725;
    st getS3method = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    exists = ldf exists;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn exists("predict.ppr");
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r5];
  L4():
    goto L0();
  L6():
    getS3method = ldf getS3method;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    r6 = dyn getS3method("predict", "ppr");
    check L8() else D5();
  D5():
    deopt 16 [r6];
  L8():
    popenv;
    return r6;
  }
}
fun inner1374065725(f, class, optional, envir) {
  (reg f:*, reg class:*, reg optional:*, reg envir:*) -+> V { var f:*, var class:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg f1:*, reg f2:V, reg c:L, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg f3:*, reg f4:V, reg length:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg r10:V, reg stopifnot1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg class1:*, reg class2:V, reg c1:L, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg class3:*, reg class4:V, reg length1:cls, reg r16:V, reg r17:V, reg p4:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg f5:*, reg f6:V, reg getKnownS3generics:cls, reg r22:V, reg r23:V, reg any:cls, reg r24:V, reg r25:V, reg c2:L, reg findGeneric:cls, reg f7:*, reg f8:V, reg p5:p(V +), reg envir1:*, reg envir2:V, reg p6:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg truegf:*, reg truegf1:V, reg nzchar:cls, reg r31:V, reg c3:L, reg truegf2:*, reg truegf3:V, reg truegf4:V, reg optional1:*, reg optional2:V, reg c4:L, reg stop:cls, reg gettextf:cls, reg f9:*, reg f10:V, reg p7:p(V +), reg r34:V, reg p8:p(V +), reg r36:V, reg paste:cls, reg f11:*, reg f12:V, reg p9:p(V +), reg class5:*, reg class6:V, reg p10:p(V +), reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg get0:cls, reg method:*, reg method1:V, reg p11:p(V +), reg envir3:*, reg envir4:V, reg p12:p(V +), reg r44:V, reg c5:V, reg r45:V, reg c6:L, reg isNamespace:cls, reg environment:cls, reg m:*, reg m1:V, reg p13:p(V +), reg r47:V, reg p14:p(V +), reg r49:V, reg c7:L, reg environmentName:cls, reg em:*, reg em1:V, reg p15:p(V +), reg r51:V, reg r52:V, reg is_primitive:cls, reg m2:*, reg m3:V, reg p16:p(V +), reg r54:V, reg c8:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg method2:*, reg method3:V, reg __:cls, reg r59:V, reg r60:cls, reg pkg:*, reg pkg1:V, reg p17:p(V +), reg r62:V, reg match:cls, reg r63:V, reg is_na:cls, reg r64:V, reg c9:L, reg m4:*, reg m5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg _knownS3Generics:*, reg _knownS3Generics1:V, reg c10:L, reg _knownS3Generics3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f13:*, reg f14:V, reg __1:cls, reg r70:V, reg is_na1:cls, reg r71:V, reg r72:V, reg c11:L, reg asNamespace:cls, reg w:*, reg w1:V, reg p18:p(V +), reg r74:V, reg r75:V, reg _in_:cls, reg f15:*, reg f16:V, reg p19:p(V +), reg ___:cls, reg r77:V, reg r78:cls, reg r79:V, reg p20:p(V +), reg r81:V, reg c12:L, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg get1:cls, reg f17:*, reg f18:V, reg p21:p(V +), reg envir5:*, reg envir6:V, reg p22:p(V +), reg r84:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r85:V, reg r86:V, reg _isMethodsDispatchOn:cls, reg r87:V, reg c13:L, reg c15:V, reg __2:cls, reg r88:V, reg r89:cls, reg genfun:*, reg genfun1:V, reg p23:p(V +), reg r91:V, reg c16:L, reg c17:V, reg c19:L, reg __3:cls, reg r92:V, reg r93:cls, reg genfun2:*, reg genfun3:V, reg p24:p(V +), reg r95:V, reg _defenv_for_S3_registry:cls, reg genfun4:*, reg genfun5:V, reg p25:p(V +), reg r98:V, reg get2:cls, reg defenv:*, reg defenv1:V, reg p26:p(V +), reg r100:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg r102:V, reg get3:cls, reg method4:*, reg method5:V, reg p27:p(V +), reg S3Table:*, reg S3Table1:V, reg p28:p(V +), reg r105:V, reg c20:V, reg r106:V, reg c21:L, reg m6:*, reg m7:V, reg optional3:*, reg optional4:V, reg c22:L, reg stop1:cls, reg gettextf1:cls, reg method6:*, reg method7:V, reg p29:p(V +), reg r108:V, reg p30:p(V +), reg r110:V |
    mkenv;
    st f = f;
    st class = class;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L0(FALSE) else L0(optional);
  L0(optional_orDefault):
    st optional = optional_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L1() else L2(envir);
  L1():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L2(p);
  L2(envir_orDefault):
    st envir = envir_orDefault;
    stopifnot = ldf stopifnot;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p1 = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      c = `is.character`(f2);
      goto L0(c);
    L2():
      r2 = dyn base(<sym f>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      r8 = `==`(r6, 1);
      return r8;
    L1():
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      length = ldf length in base;
      r7 = dyn length(f4);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym f>);
      goto L0(r5);
    };
    r10 = dyn stopifnot(p1, p2);
    check L33() else D1();
  D1():
    deopt 4 [r10];
  L33():
    stopifnot1 = ldf stopifnot;
    check L34() else D2();
  D2():
    deopt 6 [];
  L34():
    p3 = prom<V +>{
      sym2 = ldf `is.character`;
      base2 = ldf `is.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      c1 = `is.character`(class2);
      goto L0(c1);
    L2():
      r11 = dyn base2(<sym class>);
      goto L0(r11);
    };
    p4 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      r17 = `==`(r15, 1);
      return r17;
    L1():
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      length1 = ldf length in base;
      r16 = dyn length1(class4);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym class>);
      goto L0(r14);
    };
    r19 = dyn stopifnot1(p3, p4);
    check L35() else D3();
  D3():
    deopt 9 [r19];
  L35():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L3(r21):
    r25 = `!`(r21);
    c2 = `as.logical`(r25);
    if c2 then L42() else L4();
  L36():
    f5 = ld f;
    check L38() else D4();
  L37():
    r20 = dyn base4(<lang `==`(f, getKnownS3generics())>);
    goto L3(r20);
  D4():
    deopt 12 [f5];
  L4():
    goto L9();
  L9():
    paste = ldf paste;
    check L59() else D16();
  L38():
    f6 = force? f5;
    checkMissing(f6);
    getKnownS3generics = ldf getKnownS3generics;
    check L39() else D5();
  L42():
    findGeneric = ldf findGeneric;
    check L43() else D8();
  D5():
    deopt 14 [f6];
  D8():
    deopt 21 [];
  D16():
    deopt 49 [];
  L39():
    r22 = dyn getKnownS3generics();
    check L40() else D6();
  L43():
    p5 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p6 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r28 = dyn findGeneric(p5, p6);
    check L44() else D9();
  L59():
    p9 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    p10 = prom<V +>{
      class5 = ld class;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    r39 = dyn paste[, , sep](p9, p10, ".");
    check L60() else D17();
  D6():
    deopt 15 [f6, r22];
  D9():
    deopt 24 [r28];
  D17():
    deopt 54 [r39];
  L40():
    r23 = `==`(f6, r22);
    any = ldf any in base;
    r24 = dyn any(r23);
    check L41() else D7();
  L44():
    st truegf = r28;
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L60():
    st method = r39;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  D7():
    deopt 18 [r24];
  L5(r30):
    c3 = `as.logical`(r30);
    if c3 then L49() else L6();
  L10(r41):
    r45 = `!`(r41);
    c6 = `as.logical`(r45);
    if c6 then L65() else L11();
  L41():
    goto L3(r24);
  L45():
    truegf = ld truegf;
    check L47() else D10();
  L46():
    r29 = dyn base5(<sym truegf>);
    goto L5(r29);
  L61():
    get0 = ldf get0;
    check L63() else D18();
  L62():
    r40 = dyn base6(<lang `<-`(m, get0(method, envir=envir, mode="function"))>);
    goto L10(r40);
  D10():
    deopt 28 [truegf];
  D18():
    deopt 58 [];
  L6():
    optional1 = ld optional;
    check L52() else D13();
  L7(truegf4):
    goto L9();
  L11():
    goto L19();
  L19():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L91() else L92();
  L47():
    truegf1 = force? truegf;
    checkMissing(truegf1);
    nzchar = ldf nzchar in base;
    r31 = dyn nzchar(truegf1);
    check L48() else D11();
  L49():
    truegf2 = ld truegf;
    check L50() else D12();
  L63():
    p11 = prom<V +>{
      method = ld method;
      method1 = force? method;
      checkMissing(method1);
      return method1;
    };
    p12 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r44 = dyn get0[, envir, mode](p11, p12, "function");
    check L64() else D19();
  L65():
    isNamespace = ldf isNamespace;
    check L66() else D20();
  D11():
    deopt 31 [r31];
  D12():
    deopt 32 [truegf2];
  D13():
    deopt 35 [optional1];
  D19():
    deopt 64 [r44];
  D20():
    deopt 69 [];
  L20(r69):
    r72 = `!`(r69);
    c11 = `as.logical`(r72);
    if c11 then L99() else L22();
  L48():
    goto L5(r31);
  L50():
    truegf3 = force? truegf2;
    checkMissing(truegf3);
    st f = truegf3;
    goto L7(truegf3);
  L52():
    optional2 = force? optional1;
    checkMissing(optional2);
    c4 = `as.logical`(optional2);
    if c4 then L53() else L8();
  L64():
    st m = r44;
    c5 = `==`(r44, NULL);
    goto L10(c5);
  L66():
    p14 = prom<V +>{
      environment = ldf environment;
      p13 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r47 = dyn environment(p13);
      st em = r47;
      invisible.0();
      return r47;
    };
    r49 = dyn isNamespace(p14);
    check L67() else D21();
  L91():
    _knownS3Generics = ld `.knownS3Generics`;
    check L93() else D33();
  L92():
    r68 = dyn base9(<lang `<-`(w, `[`(.knownS3Generics, f))>);
    goto L20(r68);
  D21():
    deopt 71 [r49];
  D33():
    deopt 114 [_knownS3Generics];
  L8():
    stop = ldf stop;
    check L56() else D14();
  L22():
    _in_ = ldf `%in%`;
    check L103() else D38();
  L23(r75):
    st defenv = r75;
    get2 = ldf get;
    check L125() else D52();
  L53():
    popenv;
    return NULL;
  L67():
    c7 = `as.logical`(r49);
    if c7 then L68() else L12();
  L93():
    _knownS3Generics1 = force? _knownS3Generics;
    checkMissing(_knownS3Generics1);
    c10 = `is.object`(_knownS3Generics1);
    if c10 then L94() else L95(_knownS3Generics1);
  L99():
    asNamespace = ldf asNamespace;
    check L100() else D36();
  D14():
    deopt 41 [];
  D36():
    deopt 124 [];
  D38():
    deopt 128 [];
  D52():
    deopt 175 [];
  L12():
    is_primitive = ldf `is.primitive`;
    check L72() else D24();
  L13(r52):
    st pkg = r52;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L21(dx1):
    st w = dx1;
    is_na1 = ldf `is.na` in base;
    r71 = dyn is_na1(dx1);
    check L98() else D35();
  L56():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        f9 = ld f;
        f10 = force? f9;
        checkMissing(f10);
        return f10;
      };
      r34 = dyn gettextf("no function '%s' could be found", p7);
      return r34;
    };
    r36 = dyn stop[, domain](p8, NA_LGL);
    check L57() else D15();
  L68():
    environmentName = ldf environmentName;
    check L69() else D22();
  L94():
    dr = tryDispatchBuiltin.1("[", _knownS3Generics1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L96() else L95(dr);
  L95(_knownS3Generics3):
    f13 = ld f;
    check L97() else D34();
  L100():
    p18 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    r74 = dyn asNamespace(p18);
    check L101() else D37();
  L103():
    p19 = prom<V +>{
      f15 = ld f;
      f16 = force? f15;
      checkMissing(f16);
      return f16;
    };
    p20 = prom<V +>{
      ___ = ldf `:::`;
      r77 = dyn ___("tools", ".get_internal_S3_generics");
      checkFun.0(r77);
      r78 = r77 as cls;
      r79 = dyn r78();
      return r79;
    };
    r81 = dyn _in_(p19, p20);
    check L104() else D39();
  L125():
    p26 = prom<V +>{
      defenv = ld defenv;
      defenv1 = force? defenv;
      checkMissing(defenv1);
      return defenv1;
    };
    r100 = dyn get2[, envir](".__S3MethodsTable__.", p26);
    check L126() else D53();
  D15():
    deopt 45 [r36];
  D22():
    deopt 73 [];
  D24():
    deopt 77 [];
  D34():
    deopt 116 [_knownS3Generics3, f13];
  D35():
    deopt 121 [r71];
  D37():
    deopt 126 [r74];
  D39():
    deopt 131 [r81];
  D53():
    deopt 179 [r100];
  L15(r56):
    c9 = `as.logical`(r56);
    if c9 then L86() else L17();
  L57():
    goto L7(r36);
  L69():
    p15 = prom<V +>{
      em = ld em;
      em1 = force? em;
      checkMissing(em1);
      return em1;
    };
    r51 = dyn environmentName(p15);
    check L70() else D23();
  L72():
    p16 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r54 = dyn is_primitive(p16);
    check L73() else D25();
  L76():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L78() else L79();
  L77():
    r55 = dyn base7(<lang match(method, `::`(tools, nonS3methods)(pkg))>);
    goto L15(r55);
  L96():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L97():
    f14 = force? f13;
    __1 = ldf `[` in base;
    r70 = dyn __1(_knownS3Generics3, f14);
    goto L21(r70);
  L98():
    goto L20(r71);
  L101():
    goto L23(r74);
  L104():
    c12 = `as.logical`(r81);
    if c12 then L105() else L24();
  L126():
    st S3Table = r100;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L127() else L128();
  D23():
    deopt 75 [r51];
  D25():
    deopt 79 [r54];
  L16(r58):
    is_na = ldf `is.na` in base;
    r64 = dyn is_na(r58);
    check L85() else D31();
  L17():
    goto L19();
  L24():
    get1 = ldf get;
    check L108() else D41();
  L29(r102):
    r106 = `!`(r102);
    c21 = `as.logical`(r106);
    if c21 then L131() else L30();
  L70():
    goto L13(r51);
  L73():
    c8 = `as.logical`(r54);
    if c8 then L74() else L14();
  L78():
    method2 = ld method;
    check L80() else D26();
  L79():
    r57 = dyn base8(<sym method>, <lang `::`(tools, nonS3methods)(pkg)>);
    goto L16(r57);
  L86():
    m4 = ld m;
    check L87() else D32();
  L105():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L106() else D40();
  L127():
    get3 = ldf get0;
    check L129() else D54();
  L128():
    r101 = dyn base11(<lang `<-`(m, get0(method, envir=S3Table, inherits=FALSE))>);
    goto L29(r101);
  D26():
    deopt 89 [method2];
  D31():
    deopt 104 [r64];
  D32():
    deopt 105 [m4];
  D40():
    deopt 132 [_BaseNamespaceEnv];
  D41():
    deopt 135 [];
  D54():
    deopt 183 [];
  L14():
    goto L13(NULL);
  L30():
    optional3 = ld optional;
    check L134() else D57();
  L74():
    goto L13("base");
  L80():
    method3 = force? method2;
    checkMissing(method3);
    __ = ldf `::`;
    check L81() else D27();
  L85():
    goto L15(r64);
  L87():
    m5 = force? m4;
    checkMissing(m5);
    popenv;
    return m5;
  L106():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    goto L23(_BaseNamespaceEnv1);
  L108():
    p21 = prom<V +>{
      f17 = ld f;
      f18 = force? f17;
      checkMissing(f18);
      return f18;
    };
    p22 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    r84 = dyn get1[, mode, envir](p21, "function", p22);
    check L109() else D42();
  L129():
    p27 = prom<V +>{
      method4 = ld method;
      method5 = force? method4;
      checkMissing(method5);
      return method5;
    };
    p28 = prom<V +>{
      S3Table = ld S3Table;
      S3Table1 = force? S3Table;
      checkMissing(S3Table1);
      return S3Table1;
    };
    r105 = dyn get3[, envir, inherits](p27, p28, FALSE);
    check L130() else D55();
  L131():
    m6 = ld m;
    check L132() else D56();
  D27():
    deopt 92 [];
  D42():
    deopt 141 [r84];
  D55():
    deopt 189 [r105];
  D56():
    deopt 193 [m6];
  D57():
    deopt 195 [optional3];
  L81():
    r59 = dyn __("tools", "nonS3methods");
    check L82() else D28();
  L109():
    st genfun = r84;
    sym10 = ldf `.isMethodsDispatchOn`;
    base10 = ldf `.isMethodsDispatchOn` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L110() else L111();
  L130():
    st m = r105;
    c20 = `==`(r105, NULL);
    goto L29(c20);
  L132():
    m7 = force? m6;
    checkMissing(m7);
    popenv;
    return m7;
  L134():
    optional4 = force? optional3;
    checkMissing(optional4);
    c22 = `as.logical`(optional4);
    if c22 then L135() else L31();
  D28():
    deopt 95 [r59];
  L25(r86):
    c13 = `as.logical`(r86);
    if c13 then L113() else L26(c13);
  L31():
    stop1 = ldf stop;
    check L137() else D58();
  L82():
    checkFun.0(r59);
    r60 = r59 as cls;
    p17 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r62 = dyn r60(p17);
    check L83() else D29();
  L110():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r87 = dyn _isMethodsDispatchOn();
    check L112() else D43();
  L111():
    r85 = dyn base10();
    goto L25(r85);
  L135():
    popenv;
    return NULL;
  D29():
    deopt 98 [r62];
  D43():
    deopt 146 [r87];
  D58():
    deopt 200 [];
  L26(c15):
    c19 = `as.logical`(c15);
    if c19 then L118() else L27();
  L83():
    match = ldf match in base;
    r63 = dyn match(method3, r62, NA_INT, NULL);
    check L84() else D30();
  L112():
    goto L25(r87);
  L113():
    __2 = ldf `::`;
    check L114() else D44();
  L137():
    p30 = prom<V +>{
      gettextf1 = ldf gettextf;
      p29 = prom<V +>{
        method6 = ld method;
        method7 = force? method6;
        checkMissing(method7);
        return method7;
      };
      r108 = dyn gettextf1("S3 method '%s' not found", p29);
      return r108;
    };
    r110 = dyn stop1[, domain](p30, NA_LGL);
    check L138() else D59();
  D30():
    deopt 102 [r63];
  D44():
    deopt 148 [c13];
  D59():
    deopt 204 [r110];
  L27():
    goto L28();
  L28():
    _defenv_for_S3_registry = ldf `.defenv_for_S3_registry`;
    check L123() else D50();
  L84():
    goto L16(r63);
  L114():
    r88 = dyn __2("methods", "is");
    check L115() else D45();
  L118():
    __3 = ldf `::`;
    check L119() else D47();
  L138():
    popenv;
    return r110;
  D45():
    deopt 151 [c13, r88];
  D47():
    deopt 158 [];
  D50():
    deopt 170 [];
  L115():
    checkFun.0(r88);
    r89 = r88 as cls;
    p23 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r91 = dyn r89(p23, "genericFunction");
    check L116() else D46();
  L119():
    r92 = dyn __3("methods", "selectMethod");
    check L120() else D48();
  L123():
    p25 = prom<V +>{
      genfun4 = ld genfun;
      genfun5 = force? genfun4;
      checkMissing(genfun5);
      return genfun5;
    };
    r98 = dyn _defenv_for_S3_registry(p25);
    check L124() else D51();
  D46():
    deopt 155 [c13, r91];
  D48():
    deopt 161 [r92];
  D51():
    deopt 172 [r98];
  L116():
    c16 = `as.logical`(r91);
    c17 = `&&`(c13, c16);
    goto L26(c17);
  L120():
    checkFun.0(r92);
    r93 = r92 as cls;
    p24 = prom<V +>{
      genfun2 = ld genfun;
      genfun3 = force? genfun2;
      checkMissing(genfun3);
      return genfun3;
    };
    r95 = dyn r93(p24, "ANY");
    check L121() else D49();
  L124():
    goto L23(r98);
  D49():
    deopt 165 [r95];
  L121():
    st genfun = r95;
    goto L28();
  }
}