fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.OptRequireMethods` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _in_:cls, reg pkg:*, reg pkg1:V, reg p:p(V +), reg getOption:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg require:cls, reg pkg2:*, reg pkg3:V, reg p2:p(V +), reg r7:V, reg r8:V, reg c1:L, reg warning:cls, reg r9:V |
    mkenv;
    st pkg = "methods";
    _in_ = ldf `%in%`;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p1 = prom<V +>{
      getOption = ldf getOption;
      r1 = dyn getOption("defaultPackages");
      return r1;
    };
    r3 = dyn _in_(p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    setInvisible.0();
    popenv;
    return NULL;
  L5():
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r5):
    r8 = `!`(r5);
    c1 = `as.logical`(r8);
    if c1 then L10() else L2();
  L6():
    require = ldf require;
    check L8() else D2();
  L7():
    r4 = dyn base[, quietly, `warn.conflicts`, `character.only`](<sym pkg>, TRUE, FALSE, TRUE);
    goto L1(r4);
  D2():
    deopt 10 [];
  L2():
    setInvisible.0();
    popenv;
    return NULL;
  L8():
    p2 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r7 = dyn require[, quietly, `warn.conflicts`, `character.only`](p2, TRUE, FALSE, TRUE);
    check L9() else D3();
  L10():
    warning = ldf warning;
    check L11() else D4();
  D3():
    deopt 18 [r7];
  D4():
    deopt 21 [];
  L9():
    goto L1(r7);
  L11():
    r9 = dyn warning[, `call.`]("package \"methods\" in options(\"defaultPackages\") was not found", FALSE);
    check L12() else D5();
  D5():
    deopt 25 [r9];
  L12():
    popenv;
    return r9;
  }
}