fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2103476326`;
    st `[[.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2103476326`(x, `...`, exact) {
  (reg x:*, reg ddd:dots, reg exact:*) -+> V { var x:*, var `...`:dots?, var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg r3:V, reg c:L, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg __:cls, reg r6:V, reg list:cls, reg r7:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg unclass:cls, reg r16:V, reg c1:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:*, reg __2:V, reg exact1:*, reg exact2:V, reg __3:cls, reg r19:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __4:*, reg __5:V, reg __6:cls, reg r20:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L0(NA_LGL) else L0(exact);
  L0(exact_orDefault):
    st exact = exact_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    r3 = `<`(r1, 2);
    c = `as.logical`(r3);
    if c then L9() else L2();
  L6():
    ___length = ldf `...length` in base;
    r2 = dyn ___length();
    check L8() else D0();
  L7():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  L2():
    sym3 = ldf unclass;
    base3 = ldf unclass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L13() else L14();
  L8():
    goto L1(r2);
  L9():
    structure = ldf structure;
    check L10() else D1();
  D1():
    deopt 7 [];
  L3(r15):
    c1 = `is.object`(r15);
    if c1 then L17() else L18(r15);
  L10():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      __ = ldf `[[` in base;
      r6 = dyn __(<lang unclass(x)>, <sym ...>, <sym exact>);
      list = ldf list in base;
      r7 = dyn list(r6);
      goto L0(r7);
    L2():
      r4 = dyn base1(<lang `[[`(unclass(x), ..., exact=exact)>);
      goto L0(r4);
    };
    p1 = prom<V +>{
      sym2 = ldf oldClass;
      base2 = ldf oldClass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      oldClass = ldf oldClass in base;
      r11 = dyn oldClass(x2);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym x>);
      goto L0(r9);
    };
    r13 = dyn structure[, class](p, p1);
    check L11() else D2();
  L13():
    x3 = ld x;
    check L15() else D3();
  L14():
    r14 = dyn base3(<sym x>);
    goto L3(r14);
  D2():
    deopt 11 [r13];
  D3():
    deopt 14 [x3];
  L4(dx1):
    c2 = `is.object`(dx1);
    if c2 then L22() else L23(dx1);
  L11():
    popenv;
    return r13;
  L15():
    x4 = force? x3;
    checkMissing(x4);
    unclass = ldf unclass in base;
    r16 = dyn unclass(x4);
    check L16() else D4();
  L17():
    dr = tryDispatchBuiltin.1("[[", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(r18):
    __1 = ld `..1`;
    check L20() else D5();
  D4():
    deopt 17 [r16];
  D5():
    deopt 18 [r18, __1];
  L5(dx5):
    popenv;
    return dx5;
  L16():
    goto L3(r16);
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L20():
    __2 = force? __1;
    exact1 = ld exact;
    check L21() else D6();
  L22():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(dx3):
    __4 = ld `..2`;
    check L25() else D7();
  D6():
    deopt 20 [r18, exact1];
  D7():
    deopt 25 [dx3, __4];
  L21():
    exact2 = force? exact1;
    __3 = ldf `[[` in base;
    r19 = dyn __3(r15, __2, exact2);
    goto L4(r19);
  L24():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  L25():
    __5 = force? __4;
    __6 = ldf `[` in base;
    r20 = dyn __6(dx3, __5);
    goto L5(r20);
  }
}