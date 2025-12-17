fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3672943467;
    st `.getClassesFromCache` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_getClassFromCache:*, reg C_R_getClassFromCache1:V, reg name1:*, reg name2:V, reg _classTable:*, reg _classTable1:V, reg vargs:dots, reg r2:V |
    mkenv;
    st name = name;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_R_getClassFromCache = ld C_R_getClassFromCache;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_R_getClassFromCache>, <sym name>, <sym .classTable>);
    goto L0(r);
  D0():
    deopt 1 [C_R_getClassFromCache];
  L3():
    C_R_getClassFromCache1 = force? C_R_getClassFromCache;
    checkMissing(C_R_getClassFromCache1);
    name1 = ld name;
    check L4() else D1();
  D1():
    deopt 2 [C_R_getClassFromCache1, name1];
  L4():
    name2 = force? name1;
    checkMissing(name2);
    _classTable = ld `.classTable`;
    check L5() else D2();
  D2():
    deopt 3 [C_R_getClassFromCache1, name2, _classTable];
  L5():
    _classTable1 = force? _classTable;
    checkMissing(_classTable1);
    vargs = dots[name2, _classTable1];
    r2 = `.Call`(C_R_getClassFromCache1, vargs, <missing>);
    goto L0(r2);
  }
}