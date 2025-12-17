fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2310282661;
    st getNamespaceExports = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2310282661(ns) {
  (reg ns:*) -+> V { var ns:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg isBaseNamespace:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r5:V, reg c:L, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg _BaseNamespaceEnv2:V, reg _getNamespaceInfo:cls, reg ns5:*, reg ns6:V, reg p2:p(V +), reg r7:V, reg names:cls, reg r8:V |
    mkenv;
    st ns = ns;
    asNamespace = ldf asNamespace;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn asNamespace(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st ns = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    popenv;
    return r3;
  L5():
    isBaseNamespace = ldf isBaseNamespace;
    check L7() else D2();
  L6():
    r2 = dyn base(<lang if(isBaseNamespace(ns), .BaseNamespaceEnv, .getNamespaceInfo(ns, "exports"))>);
    goto L0(r2);
  D2():
    deopt 8 [];
  L7():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r5 = dyn isBaseNamespace(p1);
    check L8() else D3();
  D3():
    deopt 10 [r5];
  L8():
    c = `as.logical`(r5);
    if c then L9() else L1();
  L1():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L12() else D5();
  L2(_BaseNamespaceEnv2):
    names = ldf names in base;
    r8 = dyn names(_BaseNamespaceEnv2);
    check L14() else D7();
  L9():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L10() else D4();
  D4():
    deopt 11 [_BaseNamespaceEnv];
  D5():
    deopt 14 [];
  D7():
    deopt 19 [r8];
  L10():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    goto L2(_BaseNamespaceEnv1);
  L12():
    p2 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r7 = dyn _getNamespaceInfo(p2, "exports");
    check L13() else D6();
  L14():
    goto L0(r8);
  D6():
    deopt 17 [r7];
  L13():
    goto L2(r7);
  }
}