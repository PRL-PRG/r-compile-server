fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2310282661;
    st getNamespaceVersion = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2310282661(ns) {
  (reg ns:*) -+> V { var ns:*, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg isBaseNamespace:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r3:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg paste:cls, reg R_version:*, reg R_version1:V, reg c1:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p2:p(V +), reg R_version4:*, reg R_version5:V, reg c2:L, reg R_version7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p3:p(V +), reg r10:V, reg c3:cls, reg r11:V, reg _getNamespaceInfo:cls, reg ns5:*, reg ns6:V, reg p4:p(V +), reg r13:V, reg c4:L, reg r15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r16:V |
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
    isBaseNamespace = ldf isBaseNamespace;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r3 = dyn isBaseNamespace(p1);
    check L6() else D3();
  D3():
    deopt 8 [r3];
  L6():
    c = `as.logical`(r3);
    if c then L7() else L0();
  L0():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L14() else D7();
  L7():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  D7():
    deopt 22 [];
  L1(r5):
    popenv;
    return r5;
  L8():
    paste = ldf paste;
    check L10() else D4();
  L9():
    r4 = dyn base[version](<lang paste(`$`(R.version, major), `$`(R.version, minor), sep=".")>);
    goto L1(r4);
  L14():
    p4 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r13 = dyn _getNamespaceInfo(p4, "spec");
    check L15() else D8();
  D4():
    deopt 12 [];
  D8():
    deopt 25 [r13];
  L10():
    p2 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c1 = `is.object`(R_version1);
      if c1 then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r6 = `$`(R_version3, <sym major>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c2 = `is.object`(R_version5);
      if c2 then L1() else L2(R_version5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", R_version5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(R_version7):
      r8 = `$`(R_version7, <sym minor>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r10 = dyn paste[, , sep](p2, p3, ".");
    check L11() else D5();
  L15():
    c4 = `is.object`(r13);
    if c4 then L16() else L17(r13);
  D5():
    deopt 17 [r10];
  L2(dx5):
    popenv;
    return dx5;
  L11():
    c3 = ldf c in base;
    r11 = dyn c3(r10);
    check L12() else D6();
  L16():
    dr4 = tryDispatchBuiltin.1("[", r13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(dr4);
  L17(r15):
    __ = ldf `[` in base;
    r16 = dyn __(r15, "version");
    goto L2(r16);
  D6():
    deopt 20 [r11];
  L12():
    goto L1(r11);
  L18():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  }
}