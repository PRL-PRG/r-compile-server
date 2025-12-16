fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner73615469;
    st `sys.function` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner73615469(which) {
  (reg which:*) -+> V { var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg which1:*, reg which2:V, reg sys_function:cls, reg r2:V |
    mkenv;
    which_isMissing = missing.0(which);
    if which_isMissing then L0(0) else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    which1 = ld which;
    check L4() else D0();
  L3():
    r = dyn base(<lang sys.function(which)>);
    goto L1(r);
  D0():
    deopt 2 [which1];
  L4():
    which2 = force? which1;
    checkMissing(which2);
    sys_function = ldf `sys.function` in base;
    r2 = dyn sys_function(which2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}