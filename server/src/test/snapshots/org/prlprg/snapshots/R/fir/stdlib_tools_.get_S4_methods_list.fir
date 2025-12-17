fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2754866355;
    st `.get_S4_methods_list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2754866355(f, env) {
  (reg f:*, reg env:*) -+> V { var f:*, var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg as_environment:cls, reg r2:V, reg get:cls, reg ___:cls, reg r3:V, reg r4:cls, reg f1:*, reg f2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg f3:*, reg f4:V, reg attr:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg env3:*, reg env4:V, reg p3:p(V +), reg r13:V, reg as_list:cls, reg tab:*, reg tab1:V, reg p4:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg vapply:cls, reg mlist:*, reg mlist1:V, reg p5:p(V +), reg __:cls, reg r19:V, reg p6:p(V +), reg r21:V, reg any:cls, reg r22:V, reg c:L, reg mlist2:*, reg mlist3:V, reg c1:L, reg mlist5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg r23:V, reg __1:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg mlist6:*, reg mlist7:V, reg length:cls, reg r27:V, reg c2:L, reg isNamespace:cls, reg env5:*, reg env6:V, reg p7:p(V +), reg r29:V, reg c3:L, reg env7:*, reg env8:V, reg env9:V, reg _get_namespace_from_package_env:cls, reg env10:*, reg env11:V, reg p8:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg namespace:*, reg namespace1:V, reg c4:V, reg r34:V, reg c5:L, reg Filter:cls, reg r35:cls, reg p9:p(V +), reg mlist8:*, reg mlist9:V, reg p10:p(V +), reg r38:V, reg r39:V, reg Filter1:cls, reg r40:cls, reg p11:p(V +), reg mlist10:*, reg mlist11:V, reg p12:p(V +), reg r43:V, reg mlist12:*, reg mlist13:V |
    mkenv;
    st f = f;
    st env = env;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st env = r1;
    get = ldf get;
    check L17() else D2();
  L13():
    env1 = ld env;
    check L15() else D0();
  L14():
    r = dyn base(<sym env>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  D2():
    deopt 8 [];
  L15():
    env2 = force? env1;
    checkMissing(env2);
    as_environment = ldf `as.environment` in base;
    r2 = dyn as_environment(env2);
    check L16() else D1();
  L17():
    p2 = prom<V +>{
      ___ = ldf `:::`;
      r3 = dyn ___("methods", ".TableMetaName");
      checkFun.0(r3);
      r4 = r3 as cls;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p1 = prom<V +>{
        sym1 = ldf attr;
        base1 = ldf attr in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r7):
        return r7;
      L1():
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        attr = ldf attr in base;
        r8 = dyn attr(f4, "package");
        goto L0(r8);
      L2():
        r6 = dyn base1(<sym f>, "package");
        goto L0(r6);
      };
      r10 = dyn r4(p, p1);
      return r10;
    };
    p3 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r13 = dyn get[, envir](p2, p3);
    check L18() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 12 [r13];
  L16():
    goto L0(r2);
  L18():
    st tab = r13;
    as_list = ldf `as.list`;
    check L19() else D4();
  D4():
    deopt 15 [];
  L19():
    p4 = prom<V +>{
      tab = ld tab;
      tab1 = force? tab;
      checkMissing(tab1);
      return tab1;
    };
    r15 = dyn as_list[, `all.names`, sorted](p4, TRUE, TRUE);
    check L20() else D5();
  D5():
    deopt 21 [r15];
  L20():
    st mlist = r15;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L1(r17):
    c = `as.logical`(r17);
    if c then L26() else L2();
  L21():
    vapply = ldf vapply;
    check L23() else D6();
  L22():
    r16 = dyn base2(<lang `<-`(ind, vapply(mlist, `::`(methods, is), NA_LGL, "derivedDefaultMethod"))>);
    goto L1(r16);
  D6():
    deopt 26 [];
  L2():
    goto L4();
  L4():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L23():
    p5 = prom<V +>{
      mlist = ld mlist;
      mlist1 = force? mlist;
      checkMissing(mlist1);
      return mlist1;
    };
    p6 = prom<V +>{
      __ = ldf `::`;
      r19 = dyn __("methods", "is");
      return r19;
    };
    r21 = dyn vapply(p5, p6, NA_LGL, "derivedDefaultMethod");
    check L24() else D7();
  L26():
    mlist2 = ld mlist;
    check L27() else D9();
  D7():
    deopt 31 [r21];
  D9():
    deopt 35 [mlist2];
  L5(r26):
    c2 = `as.logical`(r26);
    if c2 then L37() else L6();
  L24():
    st ind = r21;
    any = ldf any in base;
    r22 = dyn any(r21);
    check L25() else D8();
  L27():
    mlist3 = force? mlist2;
    checkMissing(mlist3);
    c1 = `is.object`(mlist3);
    if c1 then L28() else L29(mlist3);
  L33():
    mlist6 = ld mlist;
    check L35() else D11();
  L34():
    r25 = dyn base3(<sym mlist>);
    goto L5(r25);
  D8():
    deopt 34 [r22];
  D11():
    deopt 46 [mlist6];
  L3(dx1):
    st mlist = dx1;
    goto L4();
  L6():
    goto L12();
  L12():
    mlist12 = ld mlist;
    check L55() else D23();
  L25():
    goto L1(r22);
  L28():
    dr = tryDispatchBuiltin.1("[", mlist3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(mlist5):
    ind = ld ind;
    check L31() else D10();
  L35():
    mlist7 = force? mlist6;
    checkMissing(mlist7);
    length = ldf length in base;
    r27 = dyn length(mlist7);
    check L36() else D12();
  L37():
    isNamespace = ldf isNamespace;
    check L38() else D13();
  D10():
    deopt 37 [mlist5, ind];
  D12():
    deopt 49 [r27];
  D13():
    deopt 51 [];
  D23():
    deopt 79 [mlist12];
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L31():
    ind1 = force? ind;
    checkMissing(ind1);
    r23 = `!`(ind1);
    __1 = ldf `[` in base;
    r24 = dyn __1(mlist5, r23);
    goto L3(r24);
  L36():
    goto L5(r27);
  L38():
    p7 = prom<V +>{
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      return env6;
    };
    r29 = dyn isNamespace(p7);
    check L39() else D14();
  L55():
    mlist13 = force? mlist12;
    checkMissing(mlist13);
    popenv;
    return mlist13;
  D14():
    deopt 53 [r29];
  L39():
    c3 = `as.logical`(r29);
    if c3 then L40() else L7();
  L7():
    _get_namespace_from_package_env = ldf `.get_namespace_from_package_env`;
    check L43() else D16();
  L8(env9):
    st namespace = env9;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L40():
    env7 = ld env;
    check L41() else D15();
  D15():
    deopt 54 [env7];
  D16():
    deopt 57 [];
  L9(r33):
    r34 = `!`(r33);
    c5 = `as.logical`(r34);
    if c5 then L48() else L10();
  L41():
    env8 = force? env7;
    checkMissing(env8);
    goto L8(env8);
  L43():
    p8 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    r31 = dyn _get_namespace_from_package_env(p8);
    check L44() else D17();
  L45():
    namespace = ld namespace;
    check L47() else D18();
  L46():
    r32 = dyn base4(<sym namespace>);
    goto L9(r32);
  D17():
    deopt 59 [r31];
  D18():
    deopt 62 [namespace];
  L10():
    Filter1 = ldf Filter;
    check L52() else D21();
  L11(r39):
    st mlist = r39;
    goto L12();
  L44():
    goto L8(r31);
  L47():
    namespace1 = force? namespace;
    checkMissing(namespace1);
    c4 = `==`(namespace1, NULL);
    goto L9(c4);
  L48():
    Filter = ldf Filter;
    check L49() else D19();
  D19():
    deopt 67 [];
  D21():
    deopt 72 [];
  L49():
    p9 = prom<V +>{
      r35 = clos inner2296048169;
      return r35;
    };
    p10 = prom<V +>{
      mlist8 = ld mlist;
      mlist9 = force? mlist8;
      checkMissing(mlist9);
      return mlist9;
    };
    r38 = dyn Filter(p9, p10);
    check L50() else D20();
  L52():
    p11 = prom<V +>{
      r40 = clos inner2296048169;
      return r40;
    };
    p12 = prom<V +>{
      mlist10 = ld mlist;
      mlist11 = force? mlist10;
      checkMissing(mlist11);
      return mlist11;
    };
    r43 = dyn Filter1(p11, p12);
    check L53() else D22();
  D20():
    deopt 70 [r38];
  D22():
    deopt 75 [r43];
  L50():
    goto L11(r38);
  L53():
    goto L11(r43);
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg environment:cls, reg m1:*, reg m2:V, reg p:p(V +), reg r3:V, reg namespace:*, reg namespace1:V, reg identical:cls, reg r4:V |
    mkenv;
    st m = m;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    environment = ldf environment;
    check L3() else D0();
  L2():
    r = dyn base(<lang environment(m)>, <sym namespace>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    r3 = dyn environment(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    namespace = ld namespace;
    check L5() else D2();
  D2():
    deopt 6 [namespace];
  L5():
    namespace1 = force? namespace;
    checkMissing(namespace1);
    identical = ldf identical in base;
    r4 = dyn identical(r3, namespace1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L6() else D3();
  D3():
    deopt 16 [r4];
  L6():
    goto L0(r4);
  }
}