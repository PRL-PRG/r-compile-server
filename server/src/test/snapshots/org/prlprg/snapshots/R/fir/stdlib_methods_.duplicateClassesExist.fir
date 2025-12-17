fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2015100991;
    st `.duplicateClassesExist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2015100991(on) {
  (reg on:*) -+> V { var on:*, reg get:cls, reg _classTable:*, reg _classTable1:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg nargs:cls, reg r4:V, reg c:L, reg assign:cls, reg on1:*, reg on2:V, reg p1:p(V +), reg _classTable2:*, reg _classTable3:V, reg p2:p(V +), reg r7:V, reg value:*, reg value1:V |
    mkenv;
    st on = on;
    get = ldf get;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      _classTable = ld `.classTable`;
      _classTable1 = force? _classTable;
      checkMissing(_classTable1);
      return _classTable1;
    };
    r1 = dyn get[, envir]("#HAS_DUPLICATE_CLASS_NAMES", p);
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st value = r1;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    c = `as.logical`(r3);
    if c then L8() else L1();
  L5():
    nargs = ldf nargs in base;
    r4 = dyn nargs();
    check L7() else D2();
  L6():
    r2 = dyn base();
    goto L0(r2);
  D2():
    deopt 10 [r4];
  L1():
    goto L2();
  L2():
    value = ld value;
    check L12() else D5();
  L7():
    goto L0(r4);
  L8():
    assign = ldf assign;
    check L9() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 20 [value];
  L9():
    p1 = prom<V +>{
      on1 = ld on;
      on2 = force? on1;
      checkMissing(on2);
      return on2;
    };
    p2 = prom<V +>{
      _classTable2 = ld `.classTable`;
      _classTable3 = force? _classTable2;
      checkMissing(_classTable3);
      return _classTable3;
    };
    r7 = dyn assign[, , envir]("#HAS_DUPLICATE_CLASS_NAMES", p1, p2);
    check L10() else D4();
  L12():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D4():
    deopt 17 [r7];
  L10():
    goto L2();
  }
}