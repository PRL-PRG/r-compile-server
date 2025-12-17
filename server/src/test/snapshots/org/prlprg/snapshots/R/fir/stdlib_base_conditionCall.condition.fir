fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4061490079;
    st `conditionCall.condition` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4061490079(c) {
  (reg c:*) -+> V { var c:*, reg c1:*, reg c2:V, reg c3:L, reg c5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V |
    mkenv;
    st c = c;
    c1 = ld c;
    check L0() else D0();
  D0():
    deopt 0 [c1];
  L0():
    c2 = force? c1;
    checkMissing(c2);
    c3 = `is.object`(c2);
    if c3 then L2() else L3(c2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", c2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(c5):
    r = `$`(c5, <sym call>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}