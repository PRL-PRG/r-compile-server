fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2310282661;
    st isBaseNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2310282661(ns) {
  (reg ns:*) -+> V { var ns:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ns1:*, reg ns2:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg identical:cls, reg r2:V |
    mkenv;
    st ns = ns;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    ns1 = ld ns;
    check L3() else D0();
  L2():
    r = dyn base(<sym ns>, <sym .BaseNamespaceEnv>);
    goto L0(r);
  D0():
    deopt 2 [ns1];
  L3():
    ns2 = force? ns1;
    checkMissing(ns2);
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L4() else D1();
  D1():
    deopt 4 [_BaseNamespaceEnv];
  L4():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    identical = ldf identical in base;
    r2 = dyn identical(ns2, _BaseNamespaceEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L5() else D2();
  D2():
    deopt 14 [r2];
  L5():
    goto L0(r2);
  }
}