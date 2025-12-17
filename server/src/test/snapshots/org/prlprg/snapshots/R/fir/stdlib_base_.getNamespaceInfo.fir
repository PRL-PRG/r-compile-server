fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1937826624;
    st `.getNamespaceInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1937826624(ns, which) {
  (reg ns:*, reg which:*) -+> V { var ns:*, var which:*, reg ns1:*, reg ns2:V, reg c:L, reg ns4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg which1:*, reg which2:V, reg __1:cls, reg r1:V |
    mkenv;
    st ns = ns;
    st which = which;
    ns1 = ld ns;
    check L2() else D0();
  D0():
    deopt 0 [ns1];
  L2():
    ns2 = force? ns1;
    checkMissing(ns2);
    c = `is.object`(ns2);
    if c then L3() else L4(ns2);
  L0(dx1):
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L3():
    dr = tryDispatchBuiltin.1("[[", ns2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(ns4):
    __ = ldf `[[` in base;
    r = dyn __(ns4, ".__NAMESPACE__.");
    goto L0(r);
  L1(dx5):
    popenv;
    return dx5;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    which1 = ld which;
    check L9() else D1();
  D1():
    deopt 5 [dx3, which1];
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  L9():
    which2 = force? which1;
    __1 = ldf `[[` in base;
    r1 = dyn __1(dx3, which2);
    goto L1(r1);
  }
}