fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner162799014;
    st getNamespaceName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner162799014(ns) {
  (reg ns:*) -+> V { var ns:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg isBaseNamespace:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r3:V, reg c:L, reg _getNamespaceInfo:cls, reg ns5:*, reg ns6:V, reg p2:p(V +), reg r5:V, reg c1:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V |
    mkenv;
    st ns = ns;
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
    r1 = dyn asNamespace(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st ns = r1;
    isBaseNamespace = ldf isBaseNamespace;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r3 = dyn isBaseNamespace(p1);
    check L5() else D3();
  D3():
    deopt 8 [r3];
  L5():
    c = `as.logical`(r3);
    if c then L6() else L0();
  L0():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L8() else D4();
  L6():
    popenv;
    return "base";
  D4():
    deopt 12 [];
  L8():
    p2 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r5 = dyn _getNamespaceInfo(p2, "spec");
    check L9() else D5();
  D5():
    deopt 15 [r5];
  L9():
    c1 = `is.object`(r5);
    if c1 then L10() else L11(r5);
  L1(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r7):
    __ = ldf `[` in base;
    r8 = dyn __(r7, "name");
    goto L1(r8);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}