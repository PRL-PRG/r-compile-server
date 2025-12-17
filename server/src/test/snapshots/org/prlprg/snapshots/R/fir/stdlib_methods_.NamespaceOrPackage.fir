fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203017188;
    st `.NamespaceOrPackage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg as_name:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V, reg _getNamespace:cls, reg name:*, reg name1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg ns:*, reg ns1:V, reg c:V, reg r6:V, reg c1:L, reg asNamespace:cls, reg ns2:*, reg ns3:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg paste0:cls, reg what3:*, reg what4:V, reg p3:p(V +), reg r12:V, reg search:cls, reg r13:V, reg match:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg i:*, reg i1:V, reg is_na:cls, reg r17:V, reg c2:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg i2:*, reg i3:V, reg as_environment:cls, reg r20:V |
    mkenv;
    st what = what;
    as_name = ldf `as.name`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    r1 = dyn as_name(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st name = r1;
    _getNamespace = ldf `.getNamespace`;
    check L8() else D2();
  D2():
    deopt 6 [];
  L8():
    p1 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    r3 = dyn _getNamespace(p1);
    check L9() else D3();
  D3():
    deopt 8 [r3];
  L9():
    st ns = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L13() else L1();
  L10():
    ns = ld ns;
    check L12() else D4();
  L11():
    r4 = dyn base(<sym ns>);
    goto L0(r4);
  D4():
    deopt 11 [ns];
  L1():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L12():
    ns1 = force? ns;
    checkMissing(ns1);
    c = `==`(ns1, NULL);
    goto L0(c);
  L13():
    asNamespace = ldf asNamespace;
    check L14() else D5();
  D5():
    deopt 16 [];
  L2(r10):
    st i = r10;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L14():
    p2 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r8 = dyn asNamespace(p2);
    check L15() else D6();
  L17():
    paste0 = ldf paste0;
    check L19() else D7();
  L18():
    r9 = dyn base1(<lang paste0("package:", what)>, <lang search()>);
    goto L2(r9);
  D6():
    deopt 18 [r8];
  D7():
    deopt 22 [];
  L3(r16):
    c2 = `as.logical`(r16);
    if c2 then L28() else L4();
  L15():
    popenv;
    return r8;
  L19():
    p3 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    r12 = dyn paste0("package:", p3);
    check L20() else D8();
  L24():
    i = ld i;
    check L26() else D12();
  L25():
    r15 = dyn base2(<sym i>);
    goto L3(r15);
  D8():
    deopt 25 [r12];
  D12():
    deopt 36 [i];
  L4():
    sym3 = ldf `as.environment`;
    base3 = ldf `as.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L20():
    search = ldf search;
    check L21() else D9();
  L26():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(i1);
    check L27() else D13();
  L28():
    _GlobalEnv = ld `.GlobalEnv`;
    check L29() else D14();
  D9():
    deopt 27 [];
  D13():
    deopt 39 [r17];
  D14():
    deopt 40 [_GlobalEnv];
  L5(r19):
    popenv;
    return r19;
  L21():
    r13 = dyn search();
    check L22() else D10();
  L27():
    goto L3(r17);
  L29():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    popenv;
    return _GlobalEnv1;
  L31():
    i2 = ld i;
    check L33() else D15();
  L32():
    r18 = dyn base3(<sym i>);
    goto L5(r18);
  D10():
    deopt 28 [r13];
  D15():
    deopt 44 [i2];
  L22():
    match = ldf match in base;
    r14 = dyn match(r12, r13, NA_INT, NULL);
    check L23() else D11();
  L33():
    i3 = force? i2;
    checkMissing(i3);
    as_environment = ldf `as.environment` in base;
    r20 = dyn as_environment(i3);
    check L34() else D16();
  D11():
    deopt 32 [r14];
  D16():
    deopt 47 [r20];
  L23():
    goto L2(r14);
  L34():
    goto L5(r20);
  }
}