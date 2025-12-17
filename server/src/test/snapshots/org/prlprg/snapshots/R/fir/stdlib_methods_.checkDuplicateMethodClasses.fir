fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1233657161;
    st `.checkDuplicateMethodClasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1233657161(classDefs, env, label) {
  (reg classDefs:*, reg env:*, reg label:*) -+> V { var classDefs:*, var env:*, var label:*, reg strsplit:cls, reg label1:*, reg label2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg sort:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg env1:*, reg env2:V, reg names:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg strsplit1:cls, reg sigs:*, reg sigs1:V, reg p2:p(V +), reg r11:V, reg vapply:cls, reg plabels:*, reg plabels1:V, reg p3:p(V +), reg _hasThisSubclass:*, reg _hasThisSubclass1:V, reg p4:p(V +), reg logical:cls, reg r14:V, reg p5:p(V +), reg classDefs1:*, reg classDefs2:V, reg p6:p(V +), reg supers:*, reg supers1:V, reg p7:p(V +), reg r18:V, reg mget:cls, reg sigs2:*, reg sigs3:V, reg c1:L, reg sigs5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg hasSubclass:*, reg hasSubclass1:V, reg __1:cls, reg r19:V, reg p8:p(V +), reg env3:*, reg env4:V, reg p9:p(V +), reg r22:V |
    mkenv;
    st classDefs = classDefs;
    st env = env;
    st label = label;
    strsplit = ldf strsplit;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      label1 = ld label;
      label2 = force? label1;
      checkMissing(label2);
      return label2;
    };
    r1 = dyn strsplit(p, "#", TRUE);
    check L2() else D1();
  D1():
    deopt 5 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    st supers = dx1;
    sort = ldf sort;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    __ = ldf `[[` in base;
    r4 = dyn __(r3, 1.0);
    goto L0(r4);
  D2():
    deopt 11 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      names = ldf names in base;
      r7 = dyn names(env2);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym env>);
      goto L0(r5);
    };
    r9 = dyn sort(p1);
    check L7() else D3();
  D3():
    deopt 13 [r9];
  L7():
    st sigs = r9;
    strsplit1 = ldf strsplit;
    check L8() else D4();
  D4():
    deopt 16 [];
  L8():
    p2 = prom<V +>{
      sigs = ld sigs;
      sigs1 = force? sigs;
      checkMissing(sigs1);
      return sigs1;
    };
    r11 = dyn strsplit1(p2, "#", TRUE);
    check L9() else D5();
  D5():
    deopt 20 [r11];
  L9():
    st plabels = r11;
    vapply = ldf vapply;
    check L10() else D6();
  D6():
    deopt 23 [];
  L10():
    p3 = prom<V +>{
      plabels = ld plabels;
      plabels1 = force? plabels;
      checkMissing(plabels1);
      return plabels1;
    };
    p4 = prom<V +>{
      _hasThisSubclass = ld `.hasThisSubclass`;
      _hasThisSubclass1 = force? _hasThisSubclass;
      checkMissing(_hasThisSubclass1);
      return _hasThisSubclass1;
    };
    p5 = prom<V +>{
      logical = ldf logical;
      r14 = dyn logical(1);
      return r14;
    };
    p6 = prom<V +>{
      classDefs1 = ld classDefs;
      classDefs2 = force? classDefs1;
      checkMissing(classDefs2);
      return classDefs2;
    };
    p7 = prom<V +>{
      supers = ld supers;
      supers1 = force? supers;
      checkMissing(supers1);
      return supers1;
    };
    r18 = dyn vapply[, , , classDefs, supers](p3, p4, p5, p6, p7);
    check L11() else D7();
  D7():
    deopt 31 [r18];
  L11():
    st hasSubclass = r18;
    mget = ldf mget;
    check L12() else D8();
  D8():
    deopt 34 [];
  L12():
    p8 = prom<V +>{
      sigs2 = ld sigs;
      sigs3 = force? sigs2;
      checkMissing(sigs3);
      c1 = `is.object`(sigs3);
      if c1 then L1() else L2(sigs3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", sigs3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(sigs5):
      hasSubclass = ld hasSubclass;
      hasSubclass1 = force? hasSubclass;
      __1 = ldf `[` in base;
      r19 = dyn __1(sigs5, hasSubclass1);
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p9 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r22 = dyn mget(p8, p9);
    check L13() else D9();
  D9():
    deopt 37 [r22];
  L13():
    popenv;
    return r22;
  }
}