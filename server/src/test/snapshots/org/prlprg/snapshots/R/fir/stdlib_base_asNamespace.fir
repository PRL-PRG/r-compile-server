fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3701361451;
    st asNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3701361451(ns, `base.OK`) {
  (reg ns:*, reg base_OK:*) -+> V { var ns:*, var `base.OK`:*, reg base_OK_isMissing:L, reg base_OK_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ns1:*, reg ns2:V, reg c:L, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg ns3:*, reg ns4:V, reg c7:L, reg c8:L, reg c9:V, reg c11:L, reg getNamespace:cls, reg ns5:*, reg ns6:V, reg p:p(V +), reg r5:V, reg isNamespace:cls, reg ns7:*, reg ns8:V, reg p1:p(V +), reg r8:V, reg r9:V, reg c12:L, reg stop:cls, reg r10:V, reg base_OK1:*, reg base_OK2:V, reg r11:V, reg c13:L, reg c15:V, reg isBaseNamespace:cls, reg ns9:*, reg ns10:V, reg p2:p(V +), reg r13:V, reg c16:L, reg c17:V, reg c19:L, reg stop1:cls, reg r14:V, reg ns11:*, reg ns12:V |
    mkenv;
    st ns = ns;
    base_OK_isMissing = missing.0(base_OK);
    if base_OK_isMissing then L0(TRUE) else L0(base_OK);
  L0(base_OK_orDefault):
    st `base.OK` = base_OK_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L2(c1) else L12();
  L9():
    ns1 = ld ns;
    check L11() else D0();
  L10():
    r = dyn base(<sym ns>);
    goto L1(r);
  D0():
    deopt 1 [ns1];
  L2(c2):
    c11 = `as.logical`(c2);
    if c11 then L17() else L4();
  L11():
    ns2 = force? ns1;
    checkMissing(ns2);
    c = `is.character`(ns2);
    goto L1(c);
  L12():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L3(c6, r3):
    c8 = `as.logical`(r3);
    c9 = `||`(c6, c8);
    goto L2(c9);
  L4():
    goto L5();
  L5():
    isNamespace = ldf isNamespace;
    check L21() else D4();
  L13():
    ns3 = ld ns;
    check L15() else D1();
  L14():
    r2 = dyn base1(<sym ns>);
    goto L3(c1, r2);
  L17():
    getNamespace = ldf getNamespace;
    check L18() else D2();
  D1():
    deopt 5 [c1, ns3];
  D2():
    deopt 10 [];
  D4():
    deopt 17 [];
  L15():
    ns4 = force? ns3;
    checkMissing(ns4);
    c7 = `is.symbol`(ns4);
    goto L3(c1, c7);
  L18():
    p = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r5 = dyn getNamespace(p);
    check L19() else D3();
  L21():
    p1 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r8 = dyn isNamespace(p1);
    check L22() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 19 [r8];
  L19():
    st ns = r5;
    goto L5();
  L22():
    r9 = `!`(r8);
    c12 = `as.logical`(r9);
    if c12 then L23() else L6();
  L6():
    base_OK1 = ld `base.OK`;
    check L27() else D8();
  L23():
    stop = ldf stop;
    check L24() else D6();
  D6():
    deopt 22 [];
  D8():
    deopt 25 [base_OK1];
  L24():
    r10 = dyn stop("not a namespace");
    check L25() else D7();
  L27():
    base_OK2 = force? base_OK1;
    checkMissing(base_OK2);
    r11 = `!`(base_OK2);
    c13 = `as.logical`(r11);
    if c13 then L28() else L7(c13);
  D7():
    deopt 24 [r10];
  L7(c15):
    c19 = `as.logical`(c15);
    if c19 then L32() else L8();
  L25():
    popenv;
    return r10;
  L28():
    isBaseNamespace = ldf isBaseNamespace;
    check L29() else D9();
  D9():
    deopt 29 [c13];
  L8():
    ns11 = ld ns;
    check L36() else D13();
  L29():
    p2 = prom<V +>{
      ns9 = ld ns;
      ns10 = force? ns9;
      checkMissing(ns10);
      return ns10;
    };
    r13 = dyn isBaseNamespace(p2);
    check L30() else D10();
  L32():
    stop1 = ldf stop;
    check L33() else D11();
  D10():
    deopt 31 [c13, r13];
  D11():
    deopt 34 [];
  D13():
    deopt 37 [ns11];
  L30():
    c16 = `as.logical`(r13);
    c17 = `&&`(c13, c16);
    goto L7(c17);
  L33():
    r14 = dyn stop1("operation not allowed on base namespace");
    check L34() else D12();
  L36():
    ns12 = force? ns11;
    checkMissing(ns12);
    popenv;
    return ns12;
  D12():
    deopt 36 [r14];
  L34():
    popenv;
    return r14;
  }
}