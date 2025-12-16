fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st `sys.parents` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_parents:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    sys_parents = ldf `sys.parents` in base;
    r2 = dyn sys_parents();
    check L3() else D0();
  L2():
    r = dyn base(<lang sys.parents()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}