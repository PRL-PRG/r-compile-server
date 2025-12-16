fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1745713407;
    st pushBackLength = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1745713407(connection) {
  (reg connection:*) -+> V { var connection:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg connection1:*, reg connection2:V, reg pushBackLength:cls, reg r2:V |
    mkenv;
    st connection = connection;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    connection1 = ld connection;
    check L3() else D0();
  L2():
    r = dyn base(<lang pushBackLength(connection)>);
    goto L0(r);
  D0():
    deopt 2 [connection1];
  L3():
    connection2 = force? connection1;
    checkMissing(connection2);
    pushBackLength = ldf pushBackLength in base;
    r2 = dyn pushBackLength(connection2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}