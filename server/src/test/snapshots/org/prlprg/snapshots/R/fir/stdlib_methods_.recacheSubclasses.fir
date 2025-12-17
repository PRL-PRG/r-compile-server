fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2354100988;
    st `.recacheSubclasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2354100988(class, def, env) {
  (reg class:*, reg def:*, reg env:*) -+> V { var class:*, var def:*, var env:*, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg subs:*, reg subs1:V, reg names:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg subs2:*, reg subs3:V, reg r6:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg subNames:*, reg subNames1:V, reg c1:L, reg i6:I, reg subNames3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r7:V, reg getClassDef:cls, reg what:*, reg what1:V, reg p:p(V +), reg packageSlot:cls, reg subs4:*, reg subs5:V, reg c2:L, reg subs7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __2:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg i15:I, reg r15:V, reg subDef:*, reg subDef1:V, reg c3:V, reg c4:L, reg getClassDef1:cls, reg what2:*, reg what3:V, reg p3:p(V +), reg env1:*, reg env2:V, reg p4:p(V +), reg r18:V, reg i18:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg i21:I, reg r21:V, reg subDef2:*, reg subDef3:V, reg c5:V, reg c6:L, reg warning:cls, reg gettextf:cls, reg _dQ:cls, reg what4:*, reg what5:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg _dQ1:cls, reg __3:cls, reg r25:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg r31:V, reg i24:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg i27:I, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg i30:I, reg r36:V, reg what6:*, reg what7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg i33:I, reg r38:V, reg __4:cls, reg r39:V, reg names1:cls, reg r40:V, reg match:cls, reg r41:V, reg is_na:cls, reg r42:V, reg c7:L, reg __5:cls, reg r43:V, reg subs8:*, reg subs9:V, reg c8:L, reg i37:I, reg subs11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i39:I, reg dx5:V, reg i40:*, reg i41:V, reg __6:cls, reg r44:V, reg l1:*, reg c9:L, reg i43:I, reg dx7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx9:V, reg i45:I, reg dx11:V, reg class1:*, reg class2:V, reg ____:cls, reg r45:V, reg cntns:*, reg cntns1:V, reg c10:L, reg i47:I, reg cntns3:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i49:I, reg dx13:V, reg sort_list:cls, reg vapply:cls, reg cntns4:*, reg cntns5:V, reg p10:p(V +), reg r47:cls, reg p11:p(V +), reg r49:V, reg p12:p(V +), reg r51:V, reg __7:cls, reg r52:V, reg cntns6:*, reg cntns7:V, reg l4:*, reg ___:cls, reg r53:V, reg _cacheClass:cls, reg what8:*, reg what9:V, reg p13:p(V +), reg subDef4:*, reg subDef5:V, reg p14:p(V +), reg env3:*, reg env4:V, reg p15:p(V +), reg r57:V |
    mkenv;
    st class = class;
    st def = def;
    st env = env;
    __ = ldf `@` in base;
    r = dyn __(<sym def>, <sym subclasses>);
    st subs = r;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r2):
    st subNames = r2;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L18():
    subs = ld subs;
    check L20() else D0();
  L19():
    r1 = dyn base(<sym subs>);
    goto L0(r1);
  D0():
    deopt 5 [subs];
  L1(r5):
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L2(i);
  L20():
    subs1 = force? subs;
    checkMissing(subs1);
    names = ldf names in base;
    r3 = dyn names(subs1);
    check L21() else D1();
  L22():
    subs2 = ld subs;
    check L24() else D2();
  L23():
    r4 = dyn base1(<sym subs>);
    goto L1(r4);
  D1():
    deopt 8 [r3];
  D2():
    deopt 11 [subs2];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L25() else L17();
  L21():
    goto L0(r3);
  L24():
    subs3 = force? subs2;
    checkMissing(subs3);
    r6 = seq_along(subs3);
    goto L1(r6);
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    subNames = ld subNames;
    check L26() else D3();
  L25():
    popenv;
    return NULL;
  D3():
    deopt 14 [i2, subNames];
  L26():
    subNames1 = force? subNames;
    checkMissing(subNames1);
    c1 = `is.object`(subNames1);
    if c1 then L27() else L28(i2, subNames1);
  L3(i8, dx1):
    st what = dx1;
    getClassDef = ldf getClassDef;
    check L31() else D5();
  L27():
    dr = tryDispatchBuiltin.1("[[", subNames1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(i2, dr);
  L28(i6, subNames3):
    i9 = ld i;
    check L30() else D4();
  D4():
    deopt 16 [i6, subNames3, i9];
  D5():
    deopt 21 [i8];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L30():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r7 = dyn __1(subNames3, i10);
    goto L3(i6, r7);
  L31():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p2 = prom<V +>{
      packageSlot = ldf packageSlot;
      p1 = prom<V +>{
        subs4 = ld subs;
        subs5 = force? subs4;
        checkMissing(subs5);
        c2 = `is.object`(subs5);
        if c2 then L1() else L2(subs5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", subs5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(subs7):
        i11 = ld i;
        i12 = force? i11;
        __2 = ldf `[[` in base;
        r9 = dyn __2(subs7, i12);
        goto L0(r9);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r11 = dyn packageSlot(p1);
      return r11;
    };
    r13 = dyn getClassDef[, package](p, p2);
    check L32() else D6();
  D6():
    deopt 25 [i8, r13];
  L32():
    st subDef = r13;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L4(i15, r15):
    c4 = `as.logical`(r15);
    if c4 then L36() else L5();
  L33():
    subDef = ld subDef;
    check L35() else D7();
  L34():
    r14 = dyn base2(<sym subDef>);
    goto L4(i8, r14);
  D7():
    deopt 28 [i8, subDef];
  L5():
    goto L6(i15);
  L6(i18):
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L35():
    subDef1 = force? subDef;
    checkMissing(subDef1);
    c3 = `==`(subDef1, NULL);
    goto L4(i8, c3);
  L36():
    getClassDef1 = ldf getClassDef;
    check L37() else D8();
  D8():
    deopt 32 [i15];
  L7(i21, r21):
    c6 = `as.logical`(r21);
    if c6 then L43() else L8();
  L37():
    p3 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p4 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r18 = dyn getClassDef1(p3, p4);
    check L38() else D9();
  L40():
    subDef2 = ld subDef;
    check L42() else D10();
  L41():
    r20 = dyn base3(<sym subDef>);
    goto L7(i18, r20);
  D9():
    deopt 35 [i15, r18];
  D10():
    deopt 40 [i18, subDef2];
  L8():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L9(i24):
    goto L2(i24);
  L38():
    st subDef = r18;
    goto L6(i15);
  L42():
    subDef3 = force? subDef2;
    checkMissing(subDef3);
    c5 = `==`(subDef3, NULL);
    goto L7(i18, c5);
  L43():
    warning = ldf warning;
    check L44() else D11();
  D11():
    deopt 44 [i21];
  L10(i27, r34):
    c7 = `as.logical`(r34);
    if c7 then L57() else L13();
  L44():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        _dQ = ldf `.dQ`;
        p5 = prom<V +>{
          what4 = ld what;
          what5 = force? what4;
          checkMissing(what5);
          return what5;
        };
        r23 = dyn _dQ(p5);
        return r23;
      };
      p8 = prom<V +>{
        _dQ1 = ldf `.dQ`;
        p7 = prom<V +>{
          __3 = ldf `@` in base;
          r25 = dyn __3(<sym def>, <sym className>);
          return r25;
        };
        r27 = dyn _dQ1(p7);
        return r27;
      };
      r29 = dyn gettextf("undefined subclass %s of class %s; definition not updated", p6, p8);
      return r29;
    };
    r31 = dyn warning(p9);
    check L45() else D12();
  L47():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L48():
    r33 = dyn base4(<lang match(what, names(`@`(subDef, contains)))>);
    goto L10(i21, r33);
  D12():
    deopt 46 [i21, r31];
  L11(i30, r36):
    is_na = ldf `is.na` in base;
    r42 = dyn is_na(r36);
    check L56() else D16();
  L13():
    goto L9(i27);
  L45():
    goto L9(i21);
  L49():
    what6 = ld what;
    check L51() else D13();
  L50():
    r35 = dyn base5(<sym what>, <lang names(`@`(subDef, contains))>);
    goto L11(i21, r35);
  L57():
    __5 = ldf `@` in base;
    r43 = dyn __5(<sym subDef>, <sym contains>);
    st cntns = r43;
    subs8 = ld subs;
    check L58() else D17();
  D13():
    deopt 51 [i21, what6];
  D16():
    deopt 64 [i30, r42];
  D17():
    deopt 68 [i27, subs8];
  L51():
    what7 = force? what6;
    checkMissing(what7);
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L56():
    goto L10(i30, r42);
  L58():
    subs9 = force? subs8;
    checkMissing(subs9);
    c8 = `is.object`(subs9);
    if c8 then L59() else L60(i27, subs9);
  L12(i33, r38):
    match = ldf match in base;
    r41 = dyn match(what7, r38, NA_INT, NULL);
    check L55() else D15();
  L14(i39, dx5):
    l1 = ld cntns;
    c9 = `is.object`(l1);
    if c9 then L63() else L64(i39, dx5, l1);
  L52():
    __4 = ldf `@` in base;
    r39 = dyn __4(<sym subDef>, <sym contains>);
    names1 = ldf names in base;
    r40 = dyn names1(r39);
    check L54() else D14();
  L53():
    r37 = dyn base6(<lang `@`(subDef, contains)>);
    goto L12(i21, r37);
  L59():
    dr4 = tryDispatchBuiltin.1("[[", subs9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(i27, dr4);
  L60(i37, subs11):
    i40 = ld i;
    check L62() else D18();
  D14():
    deopt 58 [i21, r40];
  D15():
    deopt 62 [i33, r41];
  D18():
    deopt 70 [i37, subs11, i40];
  L15(i45, dx11):
    st cntns = dx11;
    cntns = ld cntns;
    check L67() else D20();
  L54():
    goto L12(i21, r40);
  L55():
    goto L11(i33, r41);
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(i27, dx4);
  L62():
    i41 = force? i40;
    __6 = ldf `[[` in base;
    r44 = dyn __6(subs11, i41);
    goto L14(i37, r44);
  L63():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(i39, dx5, dr6);
  L64(i43, dx7, l3):
    class1 = ld class;
    check L66() else D19();
  D19():
    deopt 74 [i43, dx7, l3, dx5, class1];
  D20():
    deopt 78 [i45, cntns];
  L65():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L15(i39, dx9);
  L66():
    class2 = force? class1;
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l3, dx5, class2);
    goto L15(i43, r45);
  L67():
    cntns1 = force? cntns;
    checkMissing(cntns1);
    c10 = `is.object`(cntns1);
    if c10 then L68() else L69(i45, cntns1);
  L16(i49, dx13):
    st cntns = dx13;
    cntns6 = ld cntns;
    check L73() else D23();
  L68():
    dr8 = tryDispatchBuiltin.1("[", cntns1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(i45, dr8);
  L69(i47, cntns3):
    sort_list = ldf `sort.list`;
    check L71() else D21();
  D21():
    deopt 81 [i47, cntns3];
  D23():
    deopt 86 [i49, cntns6];
  L70():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L16(i45, dx12);
  L71():
    p12 = prom<V +>{
      vapply = ldf vapply;
      p10 = prom<V +>{
        cntns4 = ld cntns;
        cntns5 = force? cntns4;
        checkMissing(cntns5);
        return cntns5;
      };
      p11 = prom<V +>{
        r47 = clos inner2501545716;
        return r47;
      };
      r49 = dyn vapply(p10, p11, 1.0);
      return r49;
    };
    r51 = dyn sort_list(p12);
    check L72() else D22();
  L73():
    cntns7 = force? cntns6;
    checkMissing(cntns7);
    l4 = ld subDef;
    ___ = ldf `@<-`;
    check L74() else D24();
  D22():
    deopt 83 [i47, cntns3, r51];
  D24():
    deopt 89 [i49, cntns7, l4, cntns7];
  L72():
    __7 = ldf `[` in base;
    r52 = dyn __7(cntns3, r51);
    goto L16(i47, r52);
  L74():
    r53 = dyn ___(l4, NULL, "contains", cntns7);
    check L75() else D25();
  D25():
    deopt 92 [i49, cntns7, r53];
  L75():
    st subDef = r53;
    _cacheClass = ldf `.cacheClass`;
    check L76() else D26();
  D26():
    deopt 95 [i49];
  L76():
    p13 = prom<V +>{
      what8 = ld what;
      what9 = force? what8;
      checkMissing(what9);
      return what9;
    };
    p14 = prom<V +>{
      subDef4 = ld subDef;
      subDef5 = force? subDef4;
      checkMissing(subDef5);
      return subDef5;
    };
    p15 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r57 = dyn _cacheClass(p13, p14, FALSE, p15);
    check L77() else D27();
  D27():
    deopt 100 [i49, r57];
  L77():
    goto L9(i49);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    __ = ldf `@` in base;
    r = dyn __(<sym x>, <sym distance>);
    popenv;
    return r;
  }
}