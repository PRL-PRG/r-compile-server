fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2706329346;
    st `%in%` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2706329346(x, table) {
  (reg x:*, reg table:*) -+> V { var x:*, var table:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg table1:*, reg table2:V, reg match:cls, reg r2:V, reg r3:V |
    mkenv;
    st x = x;
    st table = table;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r3 = `>`(r1, 0);
    popenv;
    return r3;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base[, , nomatch](<sym x>, <sym table>, 0);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    table1 = ld table;
    check L4() else D1();
  D1():
    deopt 4 [table1];
  L4():
    table2 = force? table1;
    checkMissing(table2);
    match = ldf match in base;
    r2 = dyn match(x2, table2, 0, NULL);
    check L5() else D2();
  D2():
    deopt 9 [r2];
  L5():
    goto L0(r2);
  }
}