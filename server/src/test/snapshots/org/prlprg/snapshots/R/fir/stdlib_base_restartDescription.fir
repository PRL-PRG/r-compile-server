fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1413327215;
    st restartDescription = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1413327215(r) {
  (reg r:*) -+> V { var r:*, reg r1:*, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V |
    mkenv;
    st r = r;
    r1 = ld r;
    check L0() else D0();
  D0():
    deopt 0 [r1];
  L0():
    r2 = force? r1;
    checkMissing(r2);
    c = `is.object`(r2);
    if c then L2() else L3(r2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(r4):
    r5 = `$`(r4, <sym description>);
    goto L1(r5);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}