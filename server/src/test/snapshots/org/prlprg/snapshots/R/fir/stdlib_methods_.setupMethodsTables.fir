fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2327491837;
    st `.setupMethodsTables` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2327491837(generic, initialize) {
  (reg generic:*, reg initialize:*) -+> V { var generic:*, var initialize:*, reg initialize_isMissing:L, reg initialize_orDefault:*, reg exists:cls, reg env:*, reg env1:V, reg p:p(V +), reg r1:V, reg r2:V, reg p1:p(V +), reg environment:cls, reg generic1:*, reg generic2:V, reg p2:p(V +), reg r5:V, reg initialize1:*, reg initialize2:V, reg c:L, reg c1:V, reg exists1:cls, reg env2:*, reg env3:V, reg p3:p(V +), reg r7:V, reg r8:V, reg c3:L, reg c4:V, reg c6:L, reg __:cls, reg r9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg getGeneric:cls, reg gp:*, reg gp1:V, reg p4:p(V +), reg r11:V, reg is:cls, reg gpDef:*, reg gpDef1:V, reg p5:p(V +), reg r13:V, reg c8:L, reg _getMethodsTable:cls, reg gpDef2:*, reg gpDef3:V, reg p6:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg i9:I, reg r17:V, reg nsig:*, reg nsig1:V, reg get:cls, reg environment1:cls, reg gpDef4:*, reg gpDef5:V, reg p7:p(V +), reg r19:V, reg p8:p(V +), reg r21:V, reg max:cls, reg r22:V, reg i10:I, reg assign:cls, reg nsig2:*, reg nsig3:V, reg p9:p(V +), reg env4:*, reg env5:V, reg p10:p(V +), reg r26:V, reg lapply:cls, reg __1:cls, reg r28:V, reg p11:p(V +), reg as_name:*, reg as_name1:V, reg p12:p(V +), reg r31:V, reg assign1:cls, reg argSyms:*, reg argSyms1:V, reg p13:p(V +), reg env6:*, reg env7:V, reg p14:p(V +), reg r34:V, reg initialize3:*, reg initialize4:V, reg c9:L, reg __2:cls, reg r35:V, reg _mtableAddToTable:cls, reg generic3:*, reg generic4:V, reg p15:p(V +), reg mtable:*, reg mtable1:V, reg p16:p(V +), reg r38:V, reg assign2:cls, reg mtable2:*, reg mtable3:V, reg p17:p(V +), reg env8:*, reg env9:V, reg p18:p(V +), reg r41:V, reg getMethodsForDispatch:cls, reg generic5:*, reg generic6:V, reg p19:p(V +), reg r44:V, reg _resetInheritedMethods:cls, reg env10:*, reg env11:V, reg p20:p(V +), reg mtable4:*, reg mtable5:V, reg p21:p(V +), reg r47:V, reg is1:cls, reg generic7:*, reg generic8:V, reg p22:p(V +), reg r49:V, reg c10:L, reg __3:cls, reg r50:V, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg c11:L, reg x1:V, reg getGeneric1:cls, reg gp2:*, reg gp3:V, reg p23:p(V +), reg r52:V, reg is2:cls, reg gpDef6:*, reg gpDef7:V, reg p24:p(V +), reg r54:V, reg c12:L, reg _getMethodsTable1:cls, reg gpDef8:*, reg gpDef9:V, reg p25:p(V +), reg r56:V, reg i18:I |
    mkenv;
    st generic = generic;
    initialize_isMissing = missing.0(initialize);
    if initialize_isMissing then L0() else L1(initialize);
  L0():
    p1 = prom<V +>{
      exists = ldf exists;
      p = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      r1 = dyn exists[, envir, inherits](".MTable", p, FALSE);
      r2 = `!`(r1);
      return r2;
    };
    goto L1(p1);
  L1(initialize_orDefault):
    st initialize = initialize_orDefault;
    environment = ldf environment;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p2 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r5 = dyn environment(p2);
    check L19() else D1();
  D1():
    deopt 3 [r5];
  L19():
    st env = r5;
    initialize1 = ld initialize;
    check L20() else D2();
  D2():
    deopt 5 [initialize1];
  L20():
    initialize2 = force? initialize1;
    checkMissing(initialize2);
    c = `as.logical`(initialize2);
    if c then L2(c) else L21();
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L25() else L3();
  L21():
    exists1 = ldf exists;
    check L22() else D3();
  D3():
    deopt 8 [c];
  L3():
    goto L9();
  L9():
    lapply = ldf lapply;
    check L44() else D17();
  L22():
    p3 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r7 = dyn exists1[, envir, inherits](".SigLength", p3, FALSE);
    check L23() else D4();
  L25():
    st nsig = 1.0;
    __ = ldf `@` in base;
    r9 = dyn __(<sym generic>, <sym group>);
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L4(i);
  D4():
    deopt 14 [c, r7];
  D17():
    deopt 64 [];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L26() else L8();
  L23():
    r8 = `!`(r7);
    c3 = `as.logical`(r8);
    c4 = `||`(c, c3);
    goto L2(c4);
  L44():
    p11 = prom<V +>{
      __1 = ldf `@` in base;
      r28 = dyn __1(<sym generic>, <sym signature>);
      return r28;
    };
    p12 = prom<V +>{
      as_name = ld `as.name`;
      as_name1 = force? as_name;
      checkMissing(as_name1);
      return as_name1;
    };
    r31 = dyn lapply(p11, p12);
    check L45() else D18();
  D18():
    deopt 67 [r31];
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st gp = x;
    getGeneric = ldf getGeneric;
    check L27() else D5();
  L26():
    assign = ldf assign;
    check L41() else D15();
  L45():
    st argSyms = r31;
    assign1 = ldf assign;
    check L46() else D19();
  D5():
    deopt 23 [i2];
  D15():
    deopt 55 [];
  D19():
    deopt 70 [];
  L27():
    p4 = prom<V +>{
      gp = ld gp;
      gp1 = force? gp;
      checkMissing(gp1);
      return gp1;
    };
    r11 = dyn getGeneric(p4);
    check L28() else D6();
  L41():
    p9 = prom<V +>{
      nsig2 = ld nsig;
      nsig3 = force? nsig2;
      checkMissing(nsig3);
      return nsig3;
    };
    p10 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r26 = dyn assign[, , envir](".SigLength", p9, p10);
    check L42() else D16();
  L46():
    p13 = prom<V +>{
      argSyms = ld argSyms;
      argSyms1 = force? argSyms;
      checkMissing(argSyms1);
      return argSyms1;
    };
    p14 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r34 = dyn assign1[, , envir](".SigArgs", p13, p14);
    check L47() else D20();
  D6():
    deopt 25 [i2, r11];
  D16():
    deopt 60 [r26];
  D20():
    deopt 75 [r34];
  L28():
    st gpDef = r11;
    is = ldf is;
    check L29() else D7();
  L42():
    goto L9();
  L47():
    initialize3 = ld initialize;
    check L48() else D21();
  D7():
    deopt 28 [i2];
  D21():
    deopt 76 [initialize3];
  L29():
    p5 = prom<V +>{
      gpDef = ld gpDef;
      gpDef1 = force? gpDef;
      checkMissing(gpDef1);
      return gpDef1;
    };
    r13 = dyn is(p5, "genericFunction");
    check L30() else D8();
  L48():
    initialize4 = force? initialize3;
    checkMissing(initialize4);
    c9 = `as.logical`(initialize4);
    if c9 then L49() else L10();
  D8():
    deopt 31 [i2, r13];
  L10():
    getMethodsForDispatch = ldf getMethodsForDispatch;
    check L55() else D26();
  L11():
    _resetInheritedMethods = ldf `.resetInheritedMethods`;
    check L57() else D28();
  L30():
    c8 = `as.logical`(r13);
    if c8 then L31() else L5();
  L49():
    __2 = ldf `@` in base;
    r35 = dyn __2(<sym generic>, <sym default>);
    st mtable = r35;
    _mtableAddToTable = ldf `.mtableAddToTable`;
    check L50() else D22();
  D22():
    deopt 82 [];
  D26():
    deopt 95 [];
  D28():
    deopt 100 [];
  L5():
    goto L7(i2);
  L7(i10):
    goto L4(i10);
  L31():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L32() else D9();
  L50():
    p15 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    p16 = prom<V +>{
      mtable = ld mtable;
      mtable1 = force? mtable;
      checkMissing(mtable1);
      return mtable1;
    };
    r38 = dyn _mtableAddToTable(p15, p16);
    check L51() else D23();
  L55():
    p19 = prom<V +>{
      generic5 = ld generic;
      generic6 = force? generic5;
      checkMissing(generic6);
      return generic6;
    };
    r44 = dyn getMethodsForDispatch(p19);
    check L56() else D27();
  L57():
    p20 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    p21 = prom<V +>{
      mtable4 = ld mtable;
      mtable5 = force? mtable4;
      checkMissing(mtable5);
      return mtable5;
    };
    r47 = dyn _resetInheritedMethods(p20, p21);
    check L58() else D29();
  D9():
    deopt 33 [i2];
  D23():
    deopt 85 [r38];
  D27():
    deopt 97 [r44];
  D29():
    deopt 103 [r47];
  L32():
    p6 = prom<V +>{
      gpDef2 = ld gpDef;
      gpDef3 = force? gpDef2;
      checkMissing(gpDef3);
      return gpDef3;
    };
    r15 = dyn _getMethodsTable(p6);
    check L33() else D10();
  L51():
    st mtable = r38;
    assign2 = ldf assign;
    check L52() else D24();
  L56():
    st mtable = r44;
    goto L11();
  L58():
    is1 = ldf is;
    check L59() else D30();
  D10():
    deopt 35 [i2, r15];
  D24():
    deopt 88 [];
  D30():
    deopt 105 [];
  L33():
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L52():
    p17 = prom<V +>{
      mtable2 = ld mtable;
      mtable3 = force? mtable2;
      checkMissing(mtable3);
      return mtable3;
    };
    p18 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r41 = dyn assign2[, , envir](".MTable", p17, p18);
    check L53() else D25();
  L59():
    p22 = prom<V +>{
      generic7 = ld generic;
      generic8 = force? generic7;
      checkMissing(generic8);
      return generic8;
    };
    r49 = dyn is1(p22, "groupGenericFunction");
    check L60() else D31();
  D25():
    deopt 93 [r41];
  D31():
    deopt 108 [r49];
  L6(i9, r17):
    st nsig = r17;
    goto L7(i9);
  L34():
    nsig = ld nsig;
    check L36() else D11();
  L35():
    r16 = dyn base(<sym nsig>, <lang get(".SigLength", envir=environment(gpDef))>);
    goto L6(i2, r16);
  L53():
    goto L11();
  L60():
    c10 = `as.logical`(r49);
    if c10 then L61() else L12();
  D11():
    deopt 38 [i2, nsig];
  L12():
    goto L17();
  L17():
    popenv;
    return NULL;
  L36():
    nsig1 = force? nsig;
    checkMissing(nsig1);
    get = ldf get;
    check L37() else D12();
  L61():
    __3 = ldf `@` in base;
    r50 = dyn __3(<sym generic>, <sym groupMembers>);
    s1 = toForSeq(r50);
    l1 = length(s1);
    i11 = 0;
    goto L13(i11);
  D12():
    deopt 41 [i2];
  L13(i12):
    i13 = `+`.1(i12, 1);
    c11 = `<`.1(l1, i13);
    if c11 then L62() else L16();
  L37():
    p8 = prom<V +>{
      environment1 = ldf environment;
      p7 = prom<V +>{
        gpDef4 = ld gpDef;
        gpDef5 = force? gpDef4;
        checkMissing(gpDef5);
        return gpDef5;
      };
      r19 = dyn environment1(p7);
      return r19;
    };
    r21 = dyn get[, envir](".SigLength", p8);
    check L38() else D13();
  D13():
    deopt 45 [i2, r21];
  L16():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st gp = x1;
    getGeneric1 = ldf getGeneric;
    check L63() else D32();
  L38():
    max = ldf max in base;
    r22 = dyn max(nsig1, r21);
    check L39() else D14();
  L62():
    goto L17();
  D14():
    deopt 47 [i2, r22];
  D32():
    deopt 112 [i13];
  L39():
    goto L6(i2, r22);
  L63():
    p23 = prom<V +>{
      gp2 = ld gp;
      gp3 = force? gp2;
      checkMissing(gp3);
      return gp3;
    };
    r52 = dyn getGeneric1(p23);
    check L64() else D33();
  D33():
    deopt 114 [i13, r52];
  L64():
    st gpDef = r52;
    is2 = ldf is;
    check L65() else D34();
  D34():
    deopt 117 [i13];
  L65():
    p24 = prom<V +>{
      gpDef6 = ld gpDef;
      gpDef7 = force? gpDef6;
      checkMissing(gpDef7);
      return gpDef7;
    };
    r54 = dyn is2(p24, "genericFunction");
    check L66() else D35();
  D35():
    deopt 120 [i13, r54];
  L66():
    c12 = `as.logical`(r54);
    if c12 then L67() else L14();
  L14():
    goto L15(i13);
  L15(i18):
    goto L13(i18);
  L67():
    _getMethodsTable1 = ldf `.getMethodsTable`;
    check L68() else D36();
  D36():
    deopt 122 [i13];
  L68():
    p25 = prom<V +>{
      gpDef8 = ld gpDef;
      gpDef9 = force? gpDef8;
      checkMissing(gpDef9);
      return gpDef9;
    };
    r56 = dyn _getMethodsTable1(p25);
    check L69() else D37();
  D37():
    deopt 124 [i13, r56];
  L69():
    goto L15(i13);
  }
}