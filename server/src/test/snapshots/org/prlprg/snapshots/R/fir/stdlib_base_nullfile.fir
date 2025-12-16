fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st nullfile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg c1:L |
    mkenv;
    _Platform = ld `.Platform`;
    check L1() else D0();
  D0():
    deopt 0 [_Platform];
  L1():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L3() else L4(_Platform1);
  L2(dx1):
    r1 = `==`(dx1, "windows");
    c1 = `as.logical`(r1);
    if c1 then L6() else L0();
  L3():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L2(r);
  L0():
    popenv;
    return "/dev/null";
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    popenv;
    return "nul:";
  }
}