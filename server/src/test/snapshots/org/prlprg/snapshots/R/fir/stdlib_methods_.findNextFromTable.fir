fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3381016977;
    st `.findNextFromTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3381016977(method, f, optional, envir, prev) {
  (reg method:*, reg f:*, reg optional:*, reg envir:*, reg prev:*) -+> V { var method:*, var f:*, var optional:*, var envir:*, var prev:*, reg prev_isMissing:L, reg prev_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg getGeneric:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg envir1:*, reg envir2:V, reg p2:p(V +), reg r4:V, reg environment:cls, reg fdef:*, reg fdef1:V, reg p3:p(V +), reg r6:V, reg get:cls, reg env:*, reg env1:V, reg p4:p(V +), reg r8:V, reg __:cls, reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg defined:*, reg defined1:V, reg length:cls, reg r12:V, reg m:*, reg m1:V, reg n:*, reg n1:V, reg r13:V, reg c:L, reg n2:*, reg n3:V, reg l:*, reg length__:cls, reg r14:V, reg n5:*, reg n6:V, reg m2:*, reg m3:V, reg r15:V, reg c1:L, reg new:cls, reg fdef2:*, reg fdef3:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg __1:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg rep:cls, reg r22:V, reg c2:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg prev1:*, reg prev2:V, reg _sigLabel:cls, reg defined2:*, reg defined3:V, reg p7:p(V +), reg r29:V, reg c3:cls, reg r30:V, reg _getMethodsTable:cls, reg fdef4:*, reg fdef5:V, reg p8:p(V +), reg r32:V, reg _findInheritedMethods:cls, reg defined4:*, reg defined5:V, reg p9:p(V +), reg fdef6:*, reg fdef7:V, reg p10:p(V +), reg allTable:*, reg allTable1:V, reg p11:p(V +), reg excluded:*, reg excluded1:V, reg p12:p(V +), reg envir3:*, reg envir4:V, reg p13:p(V +), reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg methods:*, reg methods1:V, reg length1:cls, reg r41:V, reg r42:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg finalDefaultMethod:cls, reg __2:cls, reg r45:V, reg p14:p(V +), reg r47:V, reg list:cls, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg methods2:*, reg methods3:V, reg length2:cls, reg r52:V, reg r53:V, reg c5:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg methods4:*, reg methods5:V, reg length3:cls, reg r56:V, reg p15:p(V +), reg r58:V, reg p16:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg methods6:*, reg methods7:V, reg length4:cls, reg r62:V, reg p17:p(V +), reg r64:V, reg p18:p(V +), reg r66:V, reg new1:cls, reg method1:*, reg method2:V, reg p19:p(V +), reg methods8:*, reg methods9:V, reg c6:L, reg methods11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __3:cls, reg r69:V, reg p20:p(V +), reg as_list:cls, reg excluded2:*, reg excluded3:V, reg p21:p(V +), reg r72:V, reg p22:p(V +), reg r74:V |
    mkenv;
    st method = method;
    st f = f;
    st optional = optional;
    st envir = envir;
    prev_isMissing = missing.0(prev);
    if prev_isMissing then L0() else L1(prev);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(prev_orDefault):
    st prev = prev_orDefault;
    getGeneric = ldf getGeneric;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p2 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r4 = dyn getGeneric[, where](p1, p2);
    check L15() else D1();
  D1():
    deopt 5 [r4];
  L15():
    st fdef = r4;
    environment = ldf environment;
    check L16() else D2();
  D2():
    deopt 8 [];
  L16():
    p3 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r6 = dyn environment(p3);
    check L17() else D3();
  D3():
    deopt 10 [r6];
  L17():
    st env = r6;
    get = ldf get;
    check L18() else D4();
  D4():
    deopt 13 [];
  L18():
    p4 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r8 = dyn get[, envir](".SigLength", p4);
    check L19() else D5();
  D5():
    deopt 17 [r8];
  L19():
    st n = r8;
    __ = ldf `@` in base;
    r9 = dyn __(<sym method>, <sym defined>);
    st defined = r9;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L2(r11):
    st m = r11;
    m = ld m;
    check L24() else D8();
  L20():
    defined = ld defined;
    check L22() else D6();
  L21():
    r10 = dyn base(<sym defined>);
    goto L2(r10);
  D6():
    deopt 24 [defined];
  D8():
    deopt 29 [m];
  L22():
    defined1 = force? defined;
    checkMissing(defined1);
    length = ldf length in base;
    r12 = dyn length(defined1);
    check L23() else D7();
  L24():
    m1 = force? m;
    checkMissing(m1);
    n = ld n;
    check L25() else D9();
  D7():
    deopt 27 [r12];
  D9():
    deopt 30 [m1, n];
  L23():
    goto L2(r12);
  L25():
    n1 = force? n;
    checkMissing(n1);
    r13 = `>`(m1, n1);
    c = `as.logical`(r13);
    if c then L26() else L3();
  L3():
    n5 = ld n;
    check L31() else D13();
  L4():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L26():
    n2 = ld n;
    check L27() else D10();
  D10():
    deopt 33 [n2];
  D13():
    deopt 40 [n5];
  L6(r27):
    st excluded = r27;
    _getMethodsTable = ldf `.getMethodsTable`;
    check L43() else D21();
  L27():
    n3 = force? n2;
    checkMissing(n3);
    l = ld defined;
    length__ = ldf `length<-`;
    check L28() else D11();
  L31():
    n6 = force? n5;
    checkMissing(n6);
    m2 = ld m;
    check L32() else D14();
  L37():
    prev1 = ld prev;
    check L39() else D17();
  L38():
    r26 = dyn base3(<sym prev>, <lang .sigLabel(defined)>);
    goto L6(r26);
  D11():
    deopt 36 [n3, l, n3];
  D14():
    deopt 41 [n6, m2];
  D17():
    deopt 55 [prev1];
  D21():
    deopt 65 [];
  L28():
    r14 = dyn length__(l, NULL, n3);
    check L29() else D12();
  L32():
    m3 = force? m2;
    checkMissing(m3);
    r15 = `>`(n6, m3);
    c1 = `as.logical`(r15);
    if c1 then L33() else L5();
  L39():
    prev2 = force? prev1;
    checkMissing(prev2);
    _sigLabel = ldf `.sigLabel`;
    check L40() else D18();
  L43():
    p8 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    r32 = dyn _getMethodsTable[, inherited](p8, TRUE);
    check L44() else D22();
  D12():
    deopt 38 [n3, r14];
  D18():
    deopt 58 [];
  D22():
    deopt 69 [r32];
  L5():
    goto L4();
  L29():
    st defined = r14;
    goto L4();
  L33():
    new = ldf new;
    check L34() else D15();
  L40():
    p7 = prom<V +>{
      defined2 = ld defined;
      defined3 = force? defined2;
      checkMissing(defined3);
      return defined3;
    };
    r29 = dyn _sigLabel(p7);
    check L41() else D19();
  L44():
    st allTable = r32;
    _findInheritedMethods = ldf `.findInheritedMethods`;
    check L45() else D23();
  D15():
    deopt 45 [];
  D19():
    deopt 60 [r29];
  D23():
    deopt 72 [];
  L34():
    p5 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    p6 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r18):
      return r18;
    L2():
      __1 = ldf `@` in base;
      r19 = dyn __1(<sym defined>, <sym .Data>);
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r17 = dyn base1(<lang `@`(defined, .Data)>, <lang rep("ANY", `-`(n, m))>);
      goto L0(r17);
    L1(r21):
      c2 = ldf c in base;
      r23 = dyn c2(r19, r21);
      goto L0(r23);
    L4():
      rep = ldf rep in base;
      r22 = dyn rep("ANY", <lang `-`(n, m)>);
      goto L1(r22);
    L5():
      r20 = dyn base2("ANY", <lang `-`(n, m)>);
      goto L1(r20);
    };
    r25 = dyn new("signature", p5, p6);
    check L35() else D16();
  L41():
    c3 = ldf c in base;
    r30 = dyn c3(prev2, r29);
    check L42() else D20();
  L45():
    p9 = prom<V +>{
      defined4 = ld defined;
      defined5 = force? defined4;
      checkMissing(defined5);
      return defined5;
    };
    p10 = prom<V +>{
      fdef6 = ld fdef;
      fdef7 = force? fdef6;
      checkMissing(fdef7);
      return fdef7;
    };
    p11 = prom<V +>{
      allTable = ld allTable;
      allTable1 = force? allTable;
      checkMissing(allTable1);
      return allTable1;
    };
    p12 = prom<V +>{
      excluded = ld excluded;
      excluded1 = force? excluded;
      checkMissing(excluded1);
      return excluded1;
    };
    p13 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r38 = dyn _findInheritedMethods[, , mtable, table, excluded, where](p9, p10, NULL, p11, p12, p13);
    check L46() else D24();
  D16():
    deopt 49 [r25];
  D20():
    deopt 62 [r30];
  D24():
    deopt 83 [r38];
  L35():
    st defined = r25;
    goto L4();
  L42():
    goto L6(r30);
  L46():
    st methods = r38;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L7(r40):
    r42 = `==`(r40, 0);
    c4 = `as.logical`(r42);
    if c4 then L51() else L8();
  L47():
    methods = ld methods;
    check L49() else D25();
  L48():
    r39 = dyn base4(<sym methods>);
    goto L7(r39);
  D25():
    deopt 87 [methods];
  L8():
    goto L10();
  L10():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L49():
    methods1 = force? methods;
    checkMissing(methods1);
    length1 = ldf length in base;
    r41 = dyn length1(methods1);
    check L50() else D26();
  L51():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  D26():
    deopt 90 [r41];
  L9(r44):
    st methods = r44;
    goto L10();
  L11(r51):
    r53 = `>`(r51, 1);
    c5 = `as.logical`(r53);
    if c5 then L62() else L12();
  L50():
    goto L7(r41);
  L52():
    finalDefaultMethod = ldf finalDefaultMethod;
    check L54() else D27();
  L53():
    r43 = dyn base5(<lang finalDefaultMethod(`@`(fdef, default))>);
    goto L9(r43);
  L58():
    methods2 = ld methods;
    check L60() else D30();
  L59():
    r50 = dyn base6(<sym methods>);
    goto L11(r50);
  D27():
    deopt 96 [];
  D30():
    deopt 106 [methods2];
  L12():
    goto L13();
  L13():
    new1 = ldf new;
    check L66() else D34();
  L54():
    p14 = prom<V +>{
      __2 = ldf `@` in base;
      r45 = dyn __2(<sym fdef>, <sym default>);
      return r45;
    };
    r47 = dyn finalDefaultMethod(p14);
    check L55() else D28();
  L60():
    methods3 = force? methods2;
    checkMissing(methods3);
    length2 = ldf length in base;
    r52 = dyn length2(methods3);
    check L61() else D31();
  L62():
    warning = ldf warning;
    check L63() else D32();
  D28():
    deopt 98 [r47];
  D31():
    deopt 109 [r52];
  D32():
    deopt 113 [];
  D34():
    deopt 121 [];
  L55():
    list = ldf list in base;
    r48 = dyn list(r47);
    check L56() else D29();
  L61():
    goto L11(r52);
  L63():
    p18 = prom<V +>{
      sprintf = ldf sprintf;
      p16 = prom<V +>{
        ngettext = ldf ngettext;
        p15 = prom<V +>{
          sym7 = ldf length;
          base7 = ldf length in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r55):
          return r55;
        L1():
          methods4 = ld methods;
          methods5 = force? methods4;
          checkMissing(methods5);
          length3 = ldf length in base;
          r56 = dyn length3(methods5);
          goto L0(r56);
        L2():
          r54 = dyn base7(<sym methods>);
          goto L0(r54);
        };
        r58 = dyn ngettext(p15, "found %d equally good next method", "found %d equally good next methods");
        return r58;
      };
      p17 = prom<V +>{
        sym8 = ldf length;
        base8 = ldf length in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r61):
        return r61;
      L1():
        methods6 = ld methods;
        methods7 = force? methods6;
        checkMissing(methods7);
        length4 = ldf length in base;
        r62 = dyn length4(methods7);
        goto L0(r62);
      L2():
        r60 = dyn base8(<sym methods>);
        goto L0(r60);
      };
      r64 = dyn sprintf(p16, p17);
      return r64;
    };
    r66 = dyn warning[, domain](p18, NA_LGL);
    check L64() else D33();
  L66():
    p19 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p20 = prom<V +>{
      methods8 = ld methods;
      methods9 = force? methods8;
      checkMissing(methods9);
      c6 = `is.object`(methods9);
      if c6 then L1() else L2(methods9);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", methods9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(methods11):
      __3 = ldf `[[` in base;
      r69 = dyn __3(methods11, 1);
      goto L0(r69);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p22 = prom<V +>{
      as_list = ldf `as.list`;
      p21 = prom<V +>{
        excluded2 = ld excluded;
        excluded3 = force? excluded2;
        checkMissing(excluded3);
        return excluded3;
      };
      r72 = dyn as_list(p21);
      return r72;
    };
    r74 = dyn new1[, , nextMethod, excluded]("MethodWithNext", p19, p20, p22);
    check L67() else D35();
  D29():
    deopt 100 [r48];
  D33():
    deopt 117 [r66];
  D35():
    deopt 128 [r74];
  L56():
    goto L9(r48);
  L64():
    goto L13();
  L67():
    popenv;
    return r74;
  }
}