fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3672943467;
    st isNamespaceLoaded = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg isRegisteredNamespace:cls, reg r2:V |
    mkenv;
    st name = name;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    name1 = ld name;
    check L3() else D0();
  L2():
    r = dyn base(<lang isRegisteredNamespace(name)>);
    goto L0(r);
  D0():
    deopt 2 [name1];
  L3():
    name2 = force? name1;
    checkMissing(name2);
    isRegisteredNamespace = ldf isRegisteredNamespace in base;
    r2 = dyn isRegisteredNamespace(name2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}