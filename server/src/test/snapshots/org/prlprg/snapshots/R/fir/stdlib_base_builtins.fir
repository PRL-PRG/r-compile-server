fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1743915964`;
    st builtins = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1743915964`(internal) {
  (reg internal:*) -+> V { var internal:*, reg internal_isMissing:L, reg internal_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg internal1:*, reg internal2:V, reg builtins:cls, reg r2:V |
    mkenv;
    internal_isMissing = missing.0(internal);
    if internal_isMissing then L0(FALSE) else L0(internal);
  L0(internal_orDefault):
    st internal = internal_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    internal1 = ld internal;
    check L4() else D0();
  L3():
    r = dyn base(<lang builtins(internal)>);
    goto L1(r);
  D0():
    deopt 2 [internal1];
  L4():
    internal2 = force? internal1;
    checkMissing(internal2);
    builtins = ldf builtins in base;
    r2 = dyn builtins(internal2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}