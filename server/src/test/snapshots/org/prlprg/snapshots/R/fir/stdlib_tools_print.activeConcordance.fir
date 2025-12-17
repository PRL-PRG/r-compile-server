fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.activeConcordance` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg r:V, reg print:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg cat1:cls, reg r4:V, reg print1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p1:p(V +), reg r7:V, reg print2:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg dx6:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg x13:*, reg x14:V, reg invisible:cls, reg r14:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn cat("lastSrcref:");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    print = ldf print;
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
      r1 = `$`(x4, <sym lastSrcref>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn print(p);
    check L4() else D3();
  D3():
    deopt 7 [r3];
  L4():
    cat1 = ldf cat;
    check L5() else D4();
  D4():
    deopt 9 [];
  L5():
    r4 = dyn cat1("lastText:");
    check L6() else D5();
  D5():
    deopt 11 [r4];
  L6():
    print1 = ldf print;
    check L7() else D6();
  D6():
    deopt 13 [];
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
      r5 = `$`(x8, <sym lastText>);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r7 = dyn print1(p1);
    check L8() else D7();
  D7():
    deopt 15 [r7];
  L8():
    print2 = ldf print;
    check L9() else D8();
  D8():
    deopt 17 [];
  L9():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(x10);
    L0(dx5):
      checkFun.0(dx5);
      dx6 = dx5 as cls;
      r9 = dyn dx6();
      return r9;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r8 = `$`(x12, <sym finish>);
      goto L0(r8);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r11 = dyn print2(p2);
    check L10() else D9();
  D9():
    deopt 19 [r11];
  L10():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r13):
    popenv;
    return r13;
  L11():
    x13 = ld x;
    check L13() else D10();
  L12():
    r12 = dyn base(<sym x>);
    goto L0(r12);
  D10():
    deopt 22 [x13];
  L13():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r14 = dyn invisible(x14);
    check L14() else D11();
  D11():
    deopt 25 [r14];
  L14():
    goto L0(r14);
  }
}