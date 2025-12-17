fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1503708617;
    st setNamespaceInfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1503708617(ns, which, val) {
  (reg ns:*, reg which:*, reg val:*) -+> V { var ns:*, var which:*, var val:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg ns3:*, reg ns4:V, reg c:L, reg ns6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg val1:*, reg val2:V, reg l:*, reg c1:L, reg val4:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg val6:V, reg dx3:V, reg which1:*, reg which2:V, reg ____:cls, reg r3:V |
    mkenv;
    st ns = ns;
    st which = which;
    st val = val;
    asNamespace = ldf asNamespace;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn asNamespace[, `base.OK`](p, FALSE);
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    st ns = r1;
    ns3 = ld ns;
    check L4() else D2();
  D2():
    deopt 7 [ns3];
  L4():
    ns4 = force? ns3;
    checkMissing(ns4);
    c = `is.object`(ns4);
    if c then L5() else L6(ns4);
  L0(dx1):
    st info = dx1;
    val1 = ld val;
    check L8() else D3();
  L5():
    dr = tryDispatchBuiltin.1("[[", ns4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(ns6):
    __ = ldf `[[` in base;
    r2 = dyn __(ns6, ".__NAMESPACE__.");
    goto L0(r2);
  D3():
    deopt 13 [val1];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    val2 = force? val1;
    checkMissing(val2);
    l = ld info;
    c1 = `is.object`(l);
    if c1 then L9() else L10(val2, l);
  L1(val6, dx3):
    st info = dx3;
    invisible.0();
    popenv;
    return val6;
  L9():
    dr2 = tryDispatchBuiltin.0("[[<-", l, val2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(val2, dr2);
  L10(val4, l2):
    which1 = ld which;
    check L12() else D4();
  D4():
    deopt 16 [val4, l2, val2, which1];
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(val2, dx2);
  L12():
    which2 = force? which1;
    ____ = ldf `[[<-` in base;
    r3 = dyn ____(l2, val2, which2);
    goto L1(val4, r3);
  }
}