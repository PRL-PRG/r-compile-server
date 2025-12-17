fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2310282661;
    st getNamespaceImports = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2310282661(ns) {
  (reg ns:*) -+> V { var ns:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg isBaseNamespace:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r3:V, reg c:L, reg _getNamespaceInfo:cls, reg ns5:*, reg ns6:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st ns = ns;
    asNamespace = ldf asNamespace;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn asNamespace(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st ns = r1;
    isBaseNamespace = ldf isBaseNamespace;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r3 = dyn isBaseNamespace(p1);
    check L4() else D3();
  D3():
    deopt 8 [r3];
  L4():
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L7() else D4();
  L5():
    popenv;
    return NULL;
  D4():
    deopt 12 [];
  L7():
    p2 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r5 = dyn _getNamespaceInfo(p2, "imports");
    check L8() else D5();
  D5():
    deopt 15 [r5];
  L8():
    popenv;
    return r5;
  }
}