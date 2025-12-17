fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2221487158;
    st `.row_names_info` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2221487158(x, type) {
  (reg x:*, reg type:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg type1:*, reg type2:V, reg shortRowNames:cls, reg r2:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0(1) else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang shortRowNames(x, type)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    type1 = ld type;
    check L5() else D1();
  D1():
    deopt 4 [type1];
  L5():
    type2 = force? type1;
    checkMissing(type2);
    shortRowNames = ldf shortRowNames in base;
    r2 = dyn shortRowNames(x2, type2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}