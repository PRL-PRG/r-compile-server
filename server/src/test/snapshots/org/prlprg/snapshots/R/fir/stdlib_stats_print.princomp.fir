fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.princomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg r:V, reg dput:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg cat1:cls, reg r4:V, reg print:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p1:p(V +), reg ddd1:dots?, reg r7:V, reg cat2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg length:cls, reg r11:V, reg p2:p(V +), reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p3:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg x17:*, reg x18:V, reg invisible:cls, reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn cat("Call:\n");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    dput = ldf dput;
    check L3() else D2();
  D2():
    deopt 5 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r1 = `$`(x4, <sym call>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn dput[, control](p, NULL);
    check L4() else D3();
  D3():
    deopt 9 [r3];
  L4():
    cat1 = ldf cat;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    r4 = dyn cat1("\nStandard deviations:\n");
    check L6() else D5();
  D5():
    deopt 13 [r4];
  L6():
    print = ldf print;
    check L7() else D6();
  D6():
    deopt 15 [];
  L7():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r5 = `$`(x8, <sym sdev>);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    ddd1 = ld `...`;
    r7 = dyn print[, `...`](p1, ddd1);
    check L8() else D7();
  D7():
    deopt 18 [r7];
  L8():
    cat2 = ldf cat;
    check L9() else D8();
  D8():
    deopt 20 [];
  L9():
    p2 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L4() else L5(x10);
    L2():
      r8 = dyn base(<lang `$`(x, scale)>);
      goto L0(r8);
    L3(dx5):
      length = ldf length in base;
      r11 = dyn length(dx5);
      goto L0(r11);
    L4():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(x12):
      r10 = `$`(x12, <sym scale>);
      goto L3(r10);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx4);
    };
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r13 = `$`(x16, <sym n.obs>);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r15 = dyn cat2("\n", p2, " variables and ", p3, "observations.\n");
    check L10() else D9();
  D9():
    deopt 26 [r15];
  L10():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L0(r17):
    popenv;
    return r17;
  L11():
    x17 = ld x;
    check L13() else D10();
  L12():
    r16 = dyn base1(<sym x>);
    goto L0(r16);
  D10():
    deopt 29 [x17];
  L13():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r18 = dyn invisible(x18);
    check L14() else D11();
  D11():
    deopt 32 [r18];
  L14():
    goto L0(r18);
  }
}