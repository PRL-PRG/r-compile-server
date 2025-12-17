fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st loadedNamespaces = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg getNamespaceRegistry:cls, reg r4:V, reg names:cls, reg r5:V |
    mkenv;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang .Internal(getNamespaceRegistry())>);
    goto L0(r);
  L1(r3):
    names = ldf names in base;
    r5 = dyn names(r3);
    check L7() else D1();
  L4():
    getNamespaceRegistry = ldf getNamespaceRegistry in base;
    r4 = dyn getNamespaceRegistry();
    check L6() else D0();
  L5():
    r2 = dyn base1(<lang getNamespaceRegistry()>);
    goto L1(r2);
  D0():
    deopt 5 [r4];
  D1():
    deopt 7 [r5];
  L6():
    goto L1(r4);
  L7():
    goto L0(r5);
  }
}