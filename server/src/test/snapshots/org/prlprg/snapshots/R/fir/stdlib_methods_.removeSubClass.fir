fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner669269334;
    st `.removeSubClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner669269334(class, subclass, cdef) {
  (reg class:*, reg subclass:*, reg cdef:*) -+> V { var class:*, var subclass:*, var cdef:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cdef1:*, reg cdef2:V, reg c:V, reg c1:L, reg _deleteSubClass:cls, reg cdef3:*, reg cdef4:V, reg p:p(V +), reg subclass1:*, reg subclass2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg newdef:*, reg newdef1:V, reg c2:V, reg r8:V, reg c3:L, reg _cacheClass:cls, reg class1:*, reg class2:V, reg p2:p(V +), reg newdef2:*, reg newdef3:V, reg p3:p(V +), reg __:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg __1:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg pname:*, reg pname1:V, reg identical:cls, reg r18:V, reg c4:L, reg paste0:cls, reg pname2:*, reg pname3:V, reg p5:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg pname4:*, reg pname5:V, reg search:cls, reg r24:V, reg match:cls, reg r25:V, reg pos:*, reg pos1:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg pname6:*, reg pname7:V, reg as_environment:cls, reg r28:V, reg classMetaName:cls, reg class3:*, reg class4:V, reg p6:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg penv:*, reg penv1:V, reg c6:L, reg penv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cmeta:*, reg cmeta1:V, reg __2:cls, reg r33:V, reg c7:V, reg r34:V, reg c8:L, reg _in_:cls, reg subclass3:*, reg subclass4:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg __3:cls, reg r38:V, reg names:cls, reg r39:V, reg p8:p(V +), reg r41:V, reg c9:L, reg _deleteSubClass1:cls, reg cdefp:*, reg cdefp1:V, reg p9:p(V +), reg subclass5:*, reg subclass6:V, reg p10:p(V +), reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg newdef4:*, reg newdef5:V, reg c10:V, reg r47:V, reg c11:L, reg bindingIsLocked:cls, reg cmeta2:*, reg cmeta3:V, reg p11:p(V +), reg penv4:*, reg penv5:V, reg p12:p(V +), reg r50:V, reg c12:L, reg _assignOverBinding:cls, reg cmeta4:*, reg cmeta5:V, reg p13:p(V +), reg newdef6:*, reg newdef7:V, reg p14:p(V +), reg penv6:*, reg penv7:V, reg p15:p(V +), reg r54:V, reg r55:V, reg newdef8:*, reg newdef9:V, reg l:*, reg c13:L, reg newdef11:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg newdef13:V, reg dx3:V, reg cmeta6:*, reg cmeta7:V, reg ____:cls, reg r56:V, reg r57:V, reg r58:V, reg r59:V, reg signature:cls, reg subclass7:*, reg subclass8:V, reg p16:p(V +), reg class5:*, reg class6:V, reg p17:p(V +), reg r62:V, reg existsMethod:cls, reg sig:*, reg sig1:V, reg p18:p(V +), reg r64:V, reg c14:L, reg _removeCachedMethod:cls, reg sig2:*, reg sig3:V, reg p19:p(V +), reg r66:V, reg existsMethod1:cls, reg sig4:*, reg sig5:V, reg p20:p(V +), reg r69:V, reg c15:L, reg _removeCachedMethod1:cls, reg sig6:*, reg sig7:V, reg p21:p(V +), reg r71:V |
    mkenv;
    st class = class;
    st subclass = subclass;
    st cdef = cdef;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L30() else L1();
  L27():
    cdef1 = ld cdef;
    check L29() else D0();
  L28():
    r = dyn base(<sym cdef>);
    goto L0(r);
  D0():
    deopt 1 [cdef1];
  L1():
    _deleteSubClass = ldf `.deleteSubClass`;
    check L32() else D1();
  L2():
    signature = ldf signature;
    check L95() else D32();
  L29():
    cdef2 = force? cdef1;
    checkMissing(cdef2);
    c = `==`(cdef2, NULL);
    goto L0(c);
  L30():
    goto L2();
  D1():
    deopt 7 [];
  D32():
    deopt 131 [];
  L32():
    p = prom<V +>{
      cdef3 = ld cdef;
      cdef4 = force? cdef3;
      checkMissing(cdef4);
      return cdef4;
    };
    p1 = prom<V +>{
      subclass1 = ld subclass;
      subclass2 = force? subclass1;
      checkMissing(subclass2);
      return subclass2;
    };
    r5 = dyn _deleteSubClass(p, p1);
    check L33() else D2();
  L95():
    p16 = prom<V +>{
      subclass7 = ld subclass;
      subclass8 = force? subclass7;
      checkMissing(subclass8);
      return subclass8;
    };
    p17 = prom<V +>{
      class5 = ld class;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    r62 = dyn signature[from, to](p16, p17);
    check L96() else D33();
  D2():
    deopt 10 [r5];
  D33():
    deopt 136 [r62];
  L33():
    st newdef = r5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L96():
    st sig = r62;
    existsMethod = ldf existsMethod;
    check L97() else D34();
  D34():
    deopt 139 [];
  L3(r7):
    r8 = `!`(r7);
    c3 = `as.logical`(r8);
    if c3 then L37() else L4();
  L34():
    newdef = ld newdef;
    check L36() else D3();
  L35():
    r6 = dyn base1(<sym newdef>);
    goto L3(r6);
  L97():
    p18 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    r64 = dyn existsMethod("coerce", p18);
    check L98() else D35();
  D3():
    deopt 13 [newdef];
  D35():
    deopt 142 [r64];
  L4():
    goto L5();
  L5():
    __1 = ldf `@` in base;
    r15 = dyn __1(<sym cdef>, <sym package>);
    st pname = r15;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L36():
    newdef1 = force? newdef;
    checkMissing(newdef1);
    c2 = `==`(newdef1, NULL);
    goto L3(c2);
  L37():
    _cacheClass = ldf `.cacheClass`;
    check L38() else D4();
  L98():
    c14 = `as.logical`(r64);
    if c14 then L99() else L24();
  D4():
    deopt 18 [];
  L6(r17):
    c4 = `as.logical`(r17);
    if c4 then L45() else L7();
  L24():
    goto L25();
  L25():
    existsMethod1 = ldf existsMethod;
    check L103() else D38();
  L38():
    p2 = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    p3 = prom<V +>{
      newdef2 = ld newdef;
      newdef3 = force? newdef2;
      checkMissing(newdef3);
      return newdef3;
    };
    p4 = prom<V +>{
      __ = ldf `@` in base;
      r11 = dyn __(<sym cdef>, <sym package>);
      return r11;
    };
    r13 = dyn _cacheClass(p2, p3, FALSE, p4);
    check L39() else D5();
  L41():
    pname = ld pname;
    check L43() else D6();
  L42():
    r16 = dyn base2(<sym pname>, ".GlobalEnv");
    goto L6(r16);
  L99():
    _removeCachedMethod = ldf `.removeCachedMethod`;
    check L100() else D36();
  D5():
    deopt 23 [r13];
  D6():
    deopt 31 [pname];
  D36():
    deopt 144 [];
  D38():
    deopt 151 [];
  L7():
    paste0 = ldf paste0;
    check L47() else D8();
  L8():
    pos = ld pos;
    check L55() else D14();
  L39():
    goto L5();
  L43():
    pname1 = force? pname;
    checkMissing(pname1);
    identical = ldf identical in base;
    r18 = dyn identical(pname1, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L44() else D7();
  L45():
    st pos = 1.0;
    goto L8();
  L100():
    p19 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    r66 = dyn _removeCachedMethod("coerce", p19);
    check L101() else D37();
  L103():
    p20 = prom<V +>{
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      return sig5;
    };
    r69 = dyn existsMethod1("coerce<-", p20);
    check L104() else D39();
  D7():
    deopt 42 [r18];
  D8():
    deopt 47 [];
  D14():
    deopt 64 [pos];
  D37():
    deopt 147 [r66];
  D39():
    deopt 154 [r69];
  L44():
    goto L6(r18);
  L47():
    p5 = prom<V +>{
      pname2 = ld pname;
      pname3 = force? pname2;
      checkMissing(pname3);
      return pname3;
    };
    r21 = dyn paste0("package:", p5);
    check L48() else D9();
  L55():
    pos1 = force? pos;
    checkMissing(pos1);
    c5 = `as.logical`(pos1);
    if c5 then L56() else L10();
  L101():
    goto L25();
  L104():
    c15 = `as.logical`(r69);
    if c15 then L105() else L26();
  D9():
    deopt 50 [r21];
  L10():
    goto L2();
  L26():
    invisible.0();
    popenv;
    return NULL;
  L48():
    st pname = r21;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L56():
    sym4 = ldf `as.environment`;
    base4 = ldf `as.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L105():
    _removeCachedMethod1 = ldf `.removeCachedMethod`;
    check L106() else D40();
  D40():
    deopt 156 [];
  L9(r23):
    st pos = r23;
    goto L8();
  L11(r27):
    st penv = r27;
    classMetaName = ldf classMetaName;
    check L61() else D17();
  L49():
    pname4 = ld pname;
    check L51() else D10();
  L50():
    r22 = dyn base3(<sym pname>, <lang search()>, 0.0);
    goto L9(r22);
  L57():
    pname6 = ld pname;
    check L59() else D15();
  L58():
    r26 = dyn base4(<sym pname>);
    goto L11(r26);
  L106():
    p21 = prom<V +>{
      sig6 = ld sig;
      sig7 = force? sig6;
      checkMissing(sig7);
      return sig7;
    };
    r71 = dyn _removeCachedMethod1("coerce<-", p21);
    check L107() else D41();
  D10():
    deopt 54 [pname4];
  D15():
    deopt 68 [pname6];
  D17():
    deopt 74 [];
  D41():
    deopt 159 [r71];
  L51():
    pname5 = force? pname4;
    checkMissing(pname5);
    search = ldf search;
    check L52() else D11();
  L59():
    pname7 = force? pname6;
    checkMissing(pname7);
    as_environment = ldf `as.environment` in base;
    r28 = dyn as_environment(pname7);
    check L60() else D16();
  L61():
    p6 = prom<V +>{
      class3 = ld class;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    r30 = dyn classMetaName(p6);
    check L62() else D18();
  L107():
    popenv;
    return r71;
  D11():
    deopt 57 [];
  D16():
    deopt 71 [r28];
  D18():
    deopt 76 [r30];
  L52():
    r24 = dyn search();
    check L53() else D12();
  L60():
    goto L11(r28);
  L62():
    st cmeta = r30;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  D12():
    deopt 58 [r24];
  L12(r32):
    r34 = `!`(r32);
    c8 = `as.logical`(r34);
    if c8 then L70() else L14();
  L53():
    match = ldf match in base;
    r25 = dyn match(pname5, r24, 0.0, NULL);
    check L54() else D13();
  L63():
    penv = ld penv;
    check L65() else D19();
  L64():
    r31 = dyn base5(<lang `<-`(cdefp, `[[`(penv, cmeta))>);
    goto L12(r31);
  D13():
    deopt 62 [r25];
  D19():
    deopt 79 [penv];
  L14():
    goto L23(NULL);
  L23(r59):
    goto L2();
  L54():
    goto L9(r25);
  L65():
    penv1 = force? penv;
    checkMissing(penv1);
    c6 = `is.object`(penv1);
    if c6 then L66() else L67(penv1);
  L70():
    _in_ = ldf `%in%`;
    check L71() else D21();
  D21():
    deopt 88 [];
  L13(dx1):
    st cdefp = dx1;
    c7 = `==`(dx1, NULL);
    goto L12(c7);
  L66():
    dr = tryDispatchBuiltin.1("[[", penv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(dr);
  L67(penv3):
    cmeta = ld cmeta;
    check L69() else D20();
  L71():
    p7 = prom<V +>{
      subclass3 = ld subclass;
      subclass4 = force? subclass3;
      checkMissing(subclass4);
      return subclass4;
    };
    p8 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      __3 = ldf `@` in base;
      r38 = dyn __3(<sym cdefp>, <sym subclasses>);
      names = ldf names in base;
      r39 = dyn names(r38);
      goto L0(r39);
    L2():
      r36 = dyn base6(<lang `@`(cdefp, subclasses)>);
      goto L0(r36);
    };
    r41 = dyn _in_(p7, p8);
    check L72() else D22();
  D20():
    deopt 81 [penv3, cmeta];
  D22():
    deopt 91 [r41];
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L69():
    cmeta1 = force? cmeta;
    __2 = ldf `[[` in base;
    r33 = dyn __2(penv3, cmeta1);
    goto L13(r33);
  L72():
    c9 = `as.logical`(r41);
    if c9 then L73() else L15();
  L15():
    goto L22(NULL);
  L22(r58):
    goto L23(r58);
  L73():
    _deleteSubClass1 = ldf `.deleteSubClass`;
    check L74() else D23();
  D23():
    deopt 93 [];
  L74():
    p9 = prom<V +>{
      cdefp = ld cdefp;
      cdefp1 = force? cdefp;
      checkMissing(cdefp1);
      return cdefp1;
    };
    p10 = prom<V +>{
      subclass5 = ld subclass;
      subclass6 = force? subclass5;
      checkMissing(subclass6);
      return subclass6;
    };
    r44 = dyn _deleteSubClass1(p9, p10);
    check L75() else D24();
  D24():
    deopt 96 [r44];
  L75():
    st newdef = r44;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L16(r46):
    r47 = `!`(r46);
    c11 = `as.logical`(r47);
    if c11 then L79() else L17();
  L76():
    newdef4 = ld newdef;
    check L78() else D25();
  L77():
    r45 = dyn base7(<sym newdef>);
    goto L16(r45);
  D25():
    deopt 99 [newdef4];
  L17():
    goto L21(NULL);
  L21(r57):
    goto L22(r57);
  L78():
    newdef5 = force? newdef4;
    checkMissing(newdef5);
    c10 = `==`(newdef5, NULL);
    goto L16(c10);
  L79():
    bindingIsLocked = ldf bindingIsLocked;
    check L80() else D26();
  D26():
    deopt 104 [];
  L80():
    p11 = prom<V +>{
      cmeta2 = ld cmeta;
      cmeta3 = force? cmeta2;
      checkMissing(cmeta3);
      return cmeta3;
    };
    p12 = prom<V +>{
      penv4 = ld penv;
      penv5 = force? penv4;
      checkMissing(penv5);
      return penv5;
    };
    r50 = dyn bindingIsLocked(p11, p12);
    check L81() else D27();
  D27():
    deopt 107 [r50];
  L81():
    c12 = `as.logical`(r50);
    if c12 then L82() else L18();
  L18():
    newdef8 = ld newdef;
    check L86() else D30();
  L19(r55):
    goto L21(r55);
  L82():
    _assignOverBinding = ldf `.assignOverBinding`;
    check L83() else D28();
  D28():
    deopt 109 [];
  D30():
    deopt 115 [newdef8];
  L83():
    p13 = prom<V +>{
      cmeta4 = ld cmeta;
      cmeta5 = force? cmeta4;
      checkMissing(cmeta5);
      return cmeta5;
    };
    p14 = prom<V +>{
      newdef6 = ld newdef;
      newdef7 = force? newdef6;
      checkMissing(newdef7);
      return newdef7;
    };
    p15 = prom<V +>{
      penv6 = ld penv;
      penv7 = force? penv6;
      checkMissing(penv7);
      return penv7;
    };
    r54 = dyn _assignOverBinding(p13, p14, p15, FALSE);
    check L84() else D29();
  L86():
    newdef9 = force? newdef8;
    checkMissing(newdef9);
    l = ld penv;
    c13 = `is.object`(l);
    if c13 then L87() else L88(newdef9, l);
  D29():
    deopt 114 [r54];
  L20(newdef13, dx3):
    st penv = dx3;
    goto L19(newdef13);
  L84():
    goto L19(r54);
  L87():
    dr2 = tryDispatchBuiltin.0("[[<-", l, newdef9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L89() else L88(newdef9, dr2);
  L88(newdef11, l2):
    cmeta6 = ld cmeta;
    check L90() else D31();
  D31():
    deopt 118 [newdef11, l2, newdef9, cmeta6];
  L89():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(newdef9, dx2);
  L90():
    cmeta7 = force? cmeta6;
    ____ = ldf `[[<-` in base;
    r56 = dyn ____(l2, newdef9, cmeta7);
    goto L20(newdef11, r56);
  }
}