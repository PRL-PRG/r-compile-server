fun main() {
  () -+> V { reg r:cls, reg maintainer:cls, reg r1:V |
    mkenv;
    r = clos inner423301576;
    st maintainer = r;
    maintainer = ldf maintainer;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn maintainer("MASS");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg force:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V, reg packageDescription:cls, reg pkg3:*, reg pkg4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg desc:*, reg desc1:V, reg is_list:cls, reg r6:V, reg c:L, reg gsub:cls, reg desc2:*, reg desc3:V, reg c1:L, reg desc5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p2:p(V +), reg r9:V |
    mkenv;
    st pkg = pkg;
    force = ldf force;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r1 = dyn force(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    packageDescription = ldf packageDescription;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    p1 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    r3 = dyn packageDescription(p1);
    check L5() else D3();
  D3():
    deopt 7 [r3];
  L5():
    st desc = r3;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    c = `as.logical`(r5);
    if c then L10() else L1();
  L6():
    desc = ld desc;
    check L8() else D4();
  L7():
    r4 = dyn base(<sym desc>);
    goto L0(r4);
  D4():
    deopt 11 [desc];
  L1():
    popenv;
    return NA_STR;
  L8():
    desc1 = force? desc;
    checkMissing(desc1);
    is_list = ldf `is.list` in base;
    r6 = dyn is_list(desc1);
    check L9() else D5();
  L10():
    gsub = ldf gsub;
    check L11() else D6();
  D5():
    deopt 14 [r6];
  D6():
    deopt 16 [];
  L9():
    goto L0(r6);
  L11():
    p2 = prom<V +>{
      desc2 = ld desc;
      desc3 = force? desc2;
      checkMissing(desc3);
      c1 = `is.object`(desc3);
      if c1 then L1() else L2(desc3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", desc3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(desc5):
      r7 = `$`(desc5, <sym Maintainer>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn gsub[, , , fixed]("\n", " ", p2, TRUE);
    check L12() else D7();
  D7():
    deopt 22 [r9];
  L12():
    popenv;
    return r9;
  }
}