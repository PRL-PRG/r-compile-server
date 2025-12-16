fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-246859285`;
    st `dir.exists` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-246859285`(paths) {
  (reg paths:*) -+> V { var paths:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paths1:*, reg paths2:V, reg dir_exists:cls, reg r2:V |
    mkenv;
    st paths = paths;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    paths1 = ld paths;
    check L3() else D0();
  L2():
    r = dyn base(<lang dir.exists(paths)>);
    goto L0(r);
  D0():
    deopt 2 [paths1];
  L3():
    paths2 = force? paths1;
    checkMissing(paths2);
    dir_exists = ldf `dir.exists` in base;
    r2 = dyn dir_exists(paths2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}