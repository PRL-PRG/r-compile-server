fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1382329412;
    st registerS3method = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1382329412(genname, class, method, envir) {
  (reg genname:*, reg class:*, reg method:*, reg envir:*) -+> V { var genname:*, var class:*, var method:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg _in_:cls, reg genname1:*, reg genname2:V, reg p1:p(V +), reg groupGenerics:*, reg groupGenerics1:V, reg p2:p(V +), reg r8:V, reg c1:L, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg _BaseNamespaceEnv2:V, reg get:cls, reg genname3:*, reg genname4:V, reg p3:p(V +), reg envir1:*, reg envir2:V, reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg _isMethodsDispatchOn:cls, reg r14:V, reg c2:L, reg c4:V, reg __:cls, reg r15:V, reg r16:cls, reg genfun:*, reg genfun1:V, reg p5:p(V +), reg r18:V, reg c5:L, reg c6:V, reg c8:L, reg __1:cls, reg r19:V, reg r20:cls, reg __2:cls, reg r21:V, reg p6:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg genfun2:*, reg genfun3:V, reg typeof:cls, reg r27:V, reg r28:V, reg c9:L, reg environment:cls, reg genfun4:*, reg genfun5:V, reg p7:p(V +), reg r30:V, reg _BaseNamespaceEnv3:*, reg _BaseNamespaceEnv4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg defenv:*, reg defenv1:V, reg c10:L, reg defenv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __3:cls, reg r33:V, reg c11:V, reg c12:L, reg new_env:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg baseenv:cls, reg r36:V, reg p8:p(V +), reg r38:V, reg table:*, reg table1:V, reg l:*, reg c13:L, reg table3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg table5:V, reg dx3:V, reg ____:cls, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg method1:*, reg method2:V, reg c14:L, reg c15:L, reg r42:cls, reg exists:cls, reg method3:*, reg method4:V, reg p9:p(V +), reg envir3:*, reg envir4:V, reg p10:p(V +), reg r45:V, reg r46:V, reg c16:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg method5:*, reg method6:V, reg p11:p(V +), reg r48:V, reg p12:p(V +), reg r50:V, reg p13:p(V +), reg r52:V, reg r53:V, reg assignWrapped:cls, reg paste:cls, reg genname5:*, reg genname6:V, reg p14:p(V +), reg class1:*, reg class2:V, reg p15:p(V +), reg r56:V, reg p16:p(V +), reg method7:*, reg method8:V, reg p17:p(V +), reg envir5:*, reg envir6:V, reg p18:p(V +), reg table7:*, reg table8:V, reg p19:p(V +), reg r61:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg method9:*, reg method10:V, reg is_function:cls, reg r65:V, reg c17:L, reg assign:cls, reg paste1:cls, reg genname7:*, reg genname8:V, reg p20:p(V +), reg class3:*, reg class4:V, reg p21:p(V +), reg r68:V, reg p22:p(V +), reg method11:*, reg method12:V, reg p23:p(V +), reg table9:*, reg table10:V, reg p24:p(V +), reg r72:V, reg stop:cls, reg r73:V, reg isNamespace:cls, reg envir7:*, reg envir8:V, reg p25:p(V +), reg r75:V, reg c18:L, reg c20:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r76:V, reg c23:L, reg r77:V, reg envir9:*, reg envir10:V, reg _BaseNamespaceEnv5:*, reg _BaseNamespaceEnv6:V, reg identical:cls, reg r78:V, reg r79:V, reg c24:L, reg c25:V, reg c27:L, reg addNamespaceS3method:cls, reg envir11:*, reg envir12:V, reg p26:p(V +), reg genname9:*, reg genname10:V, reg p27:p(V +), reg class5:*, reg class6:V, reg p28:p(V +), reg method13:*, reg method14:V, reg p29:p(V +), reg r84:V |
    mkenv;
    st genname = genname;
    st class = class;
    st method = method;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    r2 = clos `inner-606827076`;
    st addNamespaceS3method = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L2(r4):
    st groupGenerics = r4;
    _in_ = ldf `%in%`;
    check L29() else D1();
  L26():
    c = ldf c in base;
    r5 = dyn c("Math", "Ops", "matrixOps", "Summary", "Complex");
    check L28() else D0();
  L27():
    r3 = dyn base("Math", "Ops", "matrixOps", "Summary", "Complex");
    goto L2(r3);
  D0():
    deopt 11 [r5];
  D1():
    deopt 14 [];
  L28():
    goto L2(r5);
  L29():
    p1 = prom<V +>{
      genname1 = ld genname;
      genname2 = force? genname1;
      checkMissing(genname2);
      return genname2;
    };
    p2 = prom<V +>{
      groupGenerics = ld groupGenerics;
      groupGenerics1 = force? groupGenerics;
      checkMissing(groupGenerics1);
      return groupGenerics1;
    };
    r8 = dyn _in_(p1, p2);
    check L30() else D2();
  D2():
    deopt 17 [r8];
  L30():
    c1 = `as.logical`(r8);
    if c1 then L31() else L3();
  L3():
    get = ldf get;
    check L34() else D4();
  L4(_BaseNamespaceEnv2):
    st defenv = _BaseNamespaceEnv2;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L31():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L32() else D3();
  D3():
    deopt 18 [_BaseNamespaceEnv];
  D4():
    deopt 21 [];
  L11(r32):
    c12 = `as.logical`(r32);
    if c12 then L64() else L13();
  L32():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    goto L4(_BaseNamespaceEnv1);
  L34():
    p3 = prom<V +>{
      genname3 = ld genname;
      genname4 = force? genname3;
      checkMissing(genname4);
      return genname4;
    };
    p4 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r11 = dyn get[, envir](p3, p4);
    check L35() else D5();
  L58():
    defenv = ld defenv;
    check L60() else D18();
  L59():
    r31 = dyn base3(<lang `<-`(table, `[[`(defenv, ".__S3MethodsTable__."))>);
    goto L11(r31);
  D5():
    deopt 25 [r11];
  D18():
    deopt 68 [defenv];
  L13():
    goto L15();
  L15():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L35():
    st genfun = r11;
    sym1 = ldf `.isMethodsDispatchOn`;
    base1 = ldf `.isMethodsDispatchOn` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L60():
    defenv1 = force? defenv;
    checkMissing(defenv1);
    c10 = `is.object`(defenv1);
    if c10 then L61() else L62(defenv1);
  L64():
    new_env = ldf `new.env`;
    check L65() else D19();
  D19():
    deopt 76 [];
  L5(r13):
    c2 = `as.logical`(r13);
    if c2 then L39() else L6(c2);
  L12(dx1):
    st table = dx1;
    c11 = `==`(dx1, NULL);
    goto L11(c11);
  L16(r41):
    c15 = `as.logical`(r41);
    if c15 then L75() else L17();
  L36():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r14 = dyn _isMethodsDispatchOn();
    check L38() else D6();
  L37():
    r12 = dyn base1();
    goto L5(r12);
  L61():
    dr = tryDispatchBuiltin.1("[[", defenv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(defenv3):
    __3 = ldf `[[` in base;
    r33 = dyn __3(defenv3, ".__S3MethodsTable__.");
    goto L12(r33);
  L65():
    p8 = prom<V +>{
      sym4 = ldf baseenv;
      base4 = ldf baseenv in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      baseenv = ldf baseenv in base;
      r36 = dyn baseenv();
      goto L0(r36);
    L2():
      r34 = dyn base4();
      goto L0(r34);
    };
    r38 = dyn new_env[hash, parent](TRUE, p8);
    check L66() else D20();
  L72():
    method1 = ld method;
    check L74() else D22();
  L73():
    r40 = dyn base5(<sym method>);
    goto L16(r40);
  D6():
    deopt 30 [r14];
  D20():
    deopt 81 [r38];
  D22():
    deopt 93 [method1];
  L6(c4):
    c8 = `as.logical`(c4);
    if c8 then L44() else L7();
  L17():
    sym6 = ldf `is.function`;
    base6 = ldf `is.function` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L20():
    isNamespace = ldf isNamespace;
    check L95() else D35();
  L38():
    goto L5(r14);
  L39():
    __ = ldf `::`;
    check L40() else D7();
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L66():
    st table = r38;
    table = ld table;
    check L67() else D21();
  L74():
    method2 = force? method1;
    checkMissing(method2);
    c14 = `is.character`(method2);
    goto L16(c14);
  L75():
    r42 = clos `inner-80659549`;
    st assignWrapped = r42;
    exists = ldf exists;
    check L76() else D23();
  D7():
    deopt 32 [c2];
  D21():
    deopt 83 [table];
  D23():
    deopt 100 [];
  D35():
    deopt 139 [];
  L7():
    goto L8();
  L8():
    sym2 = ldf typeof;
    base2 = ldf typeof in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L21(r64):
    c17 = `as.logical`(r64);
    if c17 then L89() else L22();
  L40():
    r15 = dyn __("methods", "is");
    check L41() else D8();
  L44():
    __1 = ldf `::`;
    check L45() else D10();
  L67():
    table1 = force? table;
    checkMissing(table1);
    l = ld defenv;
    c13 = `is.object`(l);
    if c13 then L68() else L69(table1, l);
  L76():
    p9 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p10 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r45 = dyn exists[, envir](p9, p10);
    check L77() else D24();
  L85():
    method9 = ld method;
    check L87() else D29();
  L86():
    r63 = dyn base6(<sym method>);
    goto L21(r63);
  L95():
    p25 = prom<V +>{
      envir7 = ld envir;
      envir8 = force? envir7;
      checkMissing(envir8);
      return envir8;
    };
    r75 = dyn isNamespace(p25);
    check L96() else D36();
  D8():
    deopt 35 [c2, r15];
  D10():
    deopt 42 [];
  D24():
    deopt 104 [r45];
  D29():
    deopt 123 [method9];
  D36():
    deopt 141 [r75];
  L9(r26):
    r28 = `==`(r26, "closure");
    c9 = `as.logical`(r28);
    if c9 then L53() else L10();
  L14(table5, dx3):
    st defenv = dx3;
    goto L15();
  L22():
    stop = ldf stop;
    check L93() else D33();
  L41():
    checkFun.0(r15);
    r16 = r15 as cls;
    p5 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r18 = dyn r16(p5, "genericFunction");
    check L42() else D9();
  L45():
    r19 = dyn __1("methods", "finalDefaultMethod");
    check L46() else D11();
  L49():
    genfun2 = ld genfun;
    check L51() else D13();
  L50():
    r25 = dyn base2(<sym genfun>);
    goto L9(r25);
  L68():
    dr2 = tryDispatchBuiltin.0("[[<-", l, table1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(table1, dr2);
  L69(table3, l2):
    ____ = ldf `[[<-` in base;
    r39 = dyn ____(l2, table1, ".__S3MethodsTable__.");
    goto L14(table3, r39);
  L77():
    r46 = `!`(r45);
    c16 = `as.logical`(r46);
    if c16 then L78() else L18();
  L87():
    method10 = force? method9;
    checkMissing(method10);
    is_function = ldf `is.function` in base;
    r65 = dyn is_function(method10);
    check L88() else D30();
  L89():
    assign = ldf assign;
    check L90() else D31();
  L96():
    c18 = `as.logical`(r75);
    if c18 then L97() else L23(c18);
  D9():
    deopt 39 [c2, r18];
  D11():
    deopt 45 [r19];
  D13():
    deopt 54 [genfun2];
  D30():
    deopt 126 [r65];
  D31():
    deopt 128 [];
  D33():
    deopt 135 [];
  L10():
    _BaseNamespaceEnv3 = ld `.BaseNamespaceEnv`;
    check L57() else D17();
  L18():
    assignWrapped = ldf assignWrapped;
    check L82() else D27();
  L19(r53):
    goto L20();
  L23(c20):
    c27 = `as.logical`(c20);
    if c27 then L104() else L25();
  L42():
    c5 = `as.logical`(r18);
    c6 = `&&`(c2, c5);
    goto L6(c6);
  L46():
    checkFun.0(r19);
    r20 = r19 as cls;
    p6 = prom<V +>{
      __2 = ldf `@` in base;
      r21 = dyn __2(<sym genfun>, <sym default>);
      return r21;
    };
    r23 = dyn r20(p6);
    check L47() else D12();
  L51():
    genfun3 = force? genfun2;
    checkMissing(genfun3);
    typeof = ldf typeof in base;
    r27 = dyn typeof(genfun3);
    check L52() else D14();
  L53():
    environment = ldf environment;
    check L54() else D15();
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(table1, dx2);
  L78():
    warning = ldf warning;
    check L79() else D25();
  L88():
    goto L21(r65);
  L90():
    p22 = prom<V +>{
      paste1 = ldf paste;
      p20 = prom<V +>{
        genname7 = ld genname;
        genname8 = force? genname7;
        checkMissing(genname8);
        return genname8;
      };
      p21 = prom<V +>{
        class3 = ld class;
        class4 = force? class3;
        checkMissing(class4);
        return class4;
      };
      r68 = dyn paste1[, , sep](p20, p21, ".");
      return r68;
    };
    p23 = prom<V +>{
      method11 = ld method;
      method12 = force? method11;
      checkMissing(method12);
      return method12;
    };
    p24 = prom<V +>{
      table9 = ld table;
      table10 = force? table9;
      checkMissing(table10);
      return table10;
    };
    r72 = dyn assign[, , envir](p22, p23, p24);
    check L91() else D32();
  L93():
    r73 = dyn stop("bad method");
    check L94() else D34();
  L97():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  D12():
    deopt 48 [r23];
  D14():
    deopt 57 [r27];
  D15():
    deopt 61 [];
  D17():
    deopt 64 [_BaseNamespaceEnv3];
  D25():
    deopt 107 [];
  D27():
    deopt 113 [];
  D32():
    deopt 133 [r72];
  D34():
    deopt 137 [r73];
  L24(c23, r77):
    r79 = `!`(r77);
    c24 = `as.logical`(r79);
    c25 = `&&`(c23, c24);
    goto L23(c25);
  L25():
    invisible.0();
    popenv;
    return NULL;
  L47():
    st genfun = r23;
    goto L8();
  L52():
    goto L9(r27);
  L54():
    p7 = prom<V +>{
      genfun4 = ld genfun;
      genfun5 = force? genfun4;
      checkMissing(genfun5);
      return genfun5;
    };
    r30 = dyn environment(p7);
    check L55() else D16();
  L57():
    _BaseNamespaceEnv4 = force? _BaseNamespaceEnv3;
    checkMissing(_BaseNamespaceEnv4);
    goto L4(_BaseNamespaceEnv4);
  L79():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        p11 = prom<V +>{
          method5 = ld method;
          method6 = force? method5;
          checkMissing(method6);
          return method6;
        };
        r48 = dyn sQuote(p11);
        return r48;
      };
      r50 = dyn gettextf("S3 method %s was declared but not found", p12);
      return r50;
    };
    r52 = dyn warning[, `call.`](p13, FALSE);
    check L80() else D26();
  L82():
    p16 = prom<V +>{
      paste = ldf paste;
      p14 = prom<V +>{
        genname5 = ld genname;
        genname6 = force? genname5;
        checkMissing(genname6);
        return genname6;
      };
      p15 = prom<V +>{
        class1 = ld class;
        class2 = force? class1;
        checkMissing(class2);
        return class2;
      };
      r56 = dyn paste[, , sep](p14, p15, ".");
      return r56;
    };
    p17 = prom<V +>{
      method7 = ld method;
      method8 = force? method7;
      checkMissing(method8);
      return method8;
    };
    p18 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    p19 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      return table8;
    };
    r61 = dyn assignWrapped[, , home, envir](p16, p17, p18, p19);
    check L83() else D28();
  L91():
    goto L20();
  L94():
    goto L20();
  L98():
    envir9 = ld envir;
    check L100() else D37();
  L99():
    r76 = dyn base7(<sym envir>, <sym .BaseNamespaceEnv>);
    goto L24(c18, r76);
  L104():
    addNamespaceS3method = ldf addNamespaceS3method;
    check L105() else D40();
  D16():
    deopt 63 [r30];
  D26():
    deopt 111 [r52];
  D28():
    deopt 120 [r61];
  D37():
    deopt 144 [c18, envir9];
  D40():
    deopt 160 [];
  L55():
    goto L4(r30);
  L80():
    goto L19(r52);
  L83():
    goto L19(r61);
  L100():
    envir10 = force? envir9;
    checkMissing(envir10);
    _BaseNamespaceEnv5 = ld `.BaseNamespaceEnv`;
    check L101() else D38();
  L105():
    p26 = prom<V +>{
      envir11 = ld envir;
      envir12 = force? envir11;
      checkMissing(envir12);
      return envir12;
    };
    p27 = prom<V +>{
      genname9 = ld genname;
      genname10 = force? genname9;
      checkMissing(genname10);
      return genname10;
    };
    p28 = prom<V +>{
      class5 = ld class;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    p29 = prom<V +>{
      method13 = ld method;
      method14 = force? method13;
      checkMissing(method14);
      return method14;
    };
    r84 = dyn addNamespaceS3method(p26, p27, p28, p29);
    check L106() else D41();
  D38():
    deopt 146 [c18, _BaseNamespaceEnv5];
  D41():
    deopt 165 [r84];
  L101():
    _BaseNamespaceEnv6 = force? _BaseNamespaceEnv5;
    checkMissing(_BaseNamespaceEnv6);
    identical = ldf identical in base;
    r78 = dyn identical(envir10, _BaseNamespaceEnv6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L102() else D39();
  L106():
    popenv;
    return r84;
  D39():
    deopt 156 [c18, r78];
  L102():
    goto L24(c18, r78);
  }
}
fun `inner-606827076`(ns, generic, class, method) {
  (reg ns:*, reg generic:*, reg class:*, reg method:*) -+> V { var ns:*, var generic:*, var class:*, var method:*, reg rbind:cls, reg _getNamespaceInfo:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg generic1:*, reg generic2:V, reg class1:*, reg class2:V, reg method1:*, reg method2:V, reg c:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg setNamespaceInfo:cls, reg ns3:*, reg ns4:V, reg p3:p(V +), reg regs:*, reg regs1:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st ns = ns;
    st generic = generic;
    st class = class;
    st method = method;
    rbind = ldf rbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _getNamespaceInfo = ldf `.getNamespaceInfo`;
      p = prom<V +>{
        ns1 = ld ns;
        ns2 = force? ns1;
        checkMissing(ns2);
        return ns2;
      };
      r1 = dyn _getNamespaceInfo(p, "S3methods");
      return r1;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      c = ldf c in base;
      r5 = dyn c(generic2, class2, method2, NA_STR);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym generic>, <sym class>, <sym method>, NA_STR);
      goto L0(r3);
    };
    r7 = dyn rbind(p1, p2);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    st regs = r7;
    setNamespaceInfo = ldf setNamespaceInfo;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p3 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    p4 = prom<V +>{
      regs = ld regs;
      regs1 = force? regs;
      checkMissing(regs1);
      return regs1;
    };
    r10 = dyn setNamespaceInfo(p3, "S3methods", p4);
    check L3() else D3();
  D3():
    deopt 11 [r10];
  L3():
    popenv;
    return r10;
  }
}
fun `inner-80659549`(x, method, home, envir) {
  (reg x:*, reg method:*, reg home:*, reg envir:*) -+> V { var x:*, var method:*, var home:*, var envir:*, reg method1:*, reg method2:V, reg home1:*, reg home2:V, reg delayedAssign:cls, reg x1:*, reg x2:V, reg p:p(V +), reg get:cls, reg method3:*, reg method4:V, reg p1:p(V +), reg home3:*, reg home4:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg envir1:*, reg envir2:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st method = method;
    st home = home;
    st envir = envir;
    method1 = ld method;
    check L0() else D0();
  D0():
    deopt 0 [method1];
  L0():
    method2 = force? method1;
    checkMissing(method2);
    st method = method2;
    home1 = ld home;
    check L1() else D1();
  D1():
    deopt 3 [home1];
  L1():
    home2 = force? home1;
    checkMissing(home2);
    st home = home2;
    delayedAssign = ldf delayedAssign;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      get = ldf get;
      p1 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      p2 = prom<V +>{
        home3 = ld home;
        home4 = force? home3;
        checkMissing(home4);
        return home4;
      };
      r3 = dyn get[, envir](p1, p2);
      return r3;
    };
    p4 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r6 = dyn delayedAssign[, , `assign.env`](p, p3, p4);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    popenv;
    return r6;
  }
}