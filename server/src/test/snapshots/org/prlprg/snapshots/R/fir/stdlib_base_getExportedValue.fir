fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1008498651`;
    st getExportedValue = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1008498651`(ns, name) {
  (reg ns:*, reg name:*) -+> V { var ns:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ns1:*, reg ns2:V, reg name1:*, reg name2:V, reg getNamespaceValue:cls, reg r2:V |
    mkenv;
    st ns = ns;
    st name = name;
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
    r = dyn base(<lang getNamespaceValue(ns, name, TRUE)>);
    goto L0(r);
  D0():
    deopt 2 [ns1];
  L3():
    ns2 = force? ns1;
    checkMissing(ns2);
    name1 = ld name;
    check L4() else D1();
  D1():
    deopt 4 [name1];
  L4():
    name2 = force? name1;
    checkMissing(name2);
    getNamespaceValue = ldf getNamespaceValue in base;
    r2 = dyn getNamespaceValue(ns2, name2, TRUE);
    check L5() else D2();
  D2():
    deopt 8 [r2];
  L5():
    goto L0(r2);
  }
}