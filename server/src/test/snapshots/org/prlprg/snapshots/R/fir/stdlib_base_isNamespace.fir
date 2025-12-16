fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner162799014;
    st isNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner162799014(ns) {
  (reg ns:*) -+> V { var ns:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ns1:*, reg ns2:V, reg isNamespaceEnv:cls, reg r2:V |
    mkenv;
    st ns = ns;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    ns1 = ld ns;
    check L3() else D0();
  L2():
    r = dyn base(<lang isNamespaceEnv(ns)>);
    goto L0(r);
  D0():
    deopt 2 [ns1];
  L3():
    ns2 = force? ns1;
    checkMissing(ns2);
    isNamespaceEnv = ldf isNamespaceEnv in base;
    r2 = dyn isNamespaceEnv(ns2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}