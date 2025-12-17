fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.standardize_license_components` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg with:cls, reg _standardizable_license_specs_db:*, reg _standardizable_license_specs_db1:V, reg p:p(V +), reg ospecs:*, reg ospecs1:V, reg c:L, reg ospecs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg ospecs6:V, reg r4:V, reg x1:*, reg x2:V, reg ispecs:*, reg ispecs1:V, reg match:cls, reg r5:V, reg __:cls, reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st x = x;
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    with = ldf with;
    check L3() else D0();
  L2():
    r = dyn base(<sym .standardizable_license_specs_db>, <lang `[`(ospecs, match(x, ispecs))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      _standardizable_license_specs_db = ld `.standardizable_license_specs_db`;
      _standardizable_license_specs_db1 = force? _standardizable_license_specs_db;
      checkMissing(_standardizable_license_specs_db1);
      return _standardizable_license_specs_db1;
    };
    p1 = prom<V +>{
      ospecs = ld ospecs;
      ospecs1 = force? ospecs;
      checkMissing(ospecs1);
      c = `is.object`(ospecs1);
      if c then L2() else L3(ospecs1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", ospecs1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(ospecs3):
      sym1 = ldf match;
      base1 = ldf match in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(ospecs6, r4):
      __ = ldf `[` in base;
      r6 = dyn __(ospecs6, r4);
      goto L0(r6);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      ispecs = ld ispecs;
      ispecs1 = force? ispecs;
      checkMissing(ispecs1);
      match = ldf match in base;
      r5 = dyn match(x2, ispecs1, NA_INT, NULL);
      goto L1(ospecs3, r5);
    L6():
      r3 = dyn base1(<sym x>, <sym ispecs>);
      goto L1(ospecs3, r3);
    };
    r8 = dyn with(p, p1);
    check L4() else D1();
  D1():
    deopt 5 [r8];
  L4():
    goto L0(r8);
  }
}