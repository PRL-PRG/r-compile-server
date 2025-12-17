fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.stl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg r:V, reg dput:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg cat1:cls, reg r4:V, reg print:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p1:p(V +), reg ddd1:dots?, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg x9:*, reg x10:V, reg invisible:cls, reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn cat(" Call:\n ");
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
    r4 = dyn cat1("\nComponents\n");
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
      r5 = `$`(x8, <sym time.series>);
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
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r9):
    popenv;
    return r9;
  L9():
    x9 = ld x;
    check L11() else D8();
  L10():
    r8 = dyn base(<sym x>);
    goto L0(r8);
  D8():
    deopt 21 [x9];
  L11():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r10 = dyn invisible(x10);
    check L12() else D9();
  D9():
    deopt 24 [r10];
  L12():
    goto L0(r10);
  }
}