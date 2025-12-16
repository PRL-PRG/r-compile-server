fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner55533541;
    st getConnection = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner55533541(what) {
  (reg what:*) -+> V { var what:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg getConnection:cls, reg r2:V |
    mkenv;
    st what = what;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    what1 = ld what;
    check L3() else D0();
  L2():
    r = dyn base(<lang getConnection(what)>);
    goto L0(r);
  D0():
    deopt 2 [what1];
  L3():
    what2 = force? what1;
    checkMissing(what2);
    getConnection = ldf getConnection in base;
    r2 = dyn getConnection(what2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}