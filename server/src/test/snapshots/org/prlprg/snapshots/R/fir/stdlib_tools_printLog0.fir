fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384943734;
    st printLog0 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384943734(Log, `...`) {
  (reg Log:*, reg ddd:dots) -+> V { var Log:*, var `...`:dots?, reg cat:cls, reg ddd1:dots?, reg r:V, reg Log1:*, reg Log2:V, reg c:L, reg Log4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg r2:V, reg c1:L, reg cat1:cls, reg ddd2:dots?, reg Log5:*, reg Log6:V, reg c2:L, reg Log8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg p:p(V +), reg r5:V |
    mkenv;
    st Log = Log;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    ddd1 = ld `...`;
    r = dyn cat[`...`, sep](ddd1, "");
    check L2() else D1();
  D1():
    deopt 5 [r];
  L2():
    Log1 = ld Log;
    check L3() else D2();
  D2():
    deopt 6 [Log1];
  L3():
    Log2 = force? Log1;
    checkMissing(Log2);
    c = `is.object`(Log2);
    if c then L5() else L6(Log2);
  L4(dx1):
    r2 = `>`(dx1, 0);
    c1 = `as.logical`(r2);
    if c1 then L8() else L0();
  L5():
    dr = tryDispatchBuiltin.1("$", Log2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(Log4):
    r1 = `$`(Log4, <sym con>);
    goto L4(r1);
  L0():
    invisible.0();
    popenv;
    return NULL;
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    cat1 = ldf cat;
    check L9() else D3();
  D3():
    deopt 12 [];
  L9():
    ddd2 = ld `...`;
    p = prom<V +>{
      Log5 = ld Log;
      Log6 = force? Log5;
      checkMissing(Log6);
      c2 = `is.object`(Log6);
      if c2 then L1() else L2(Log6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", Log6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(Log8):
      r3 = `$`(Log8, <sym con>);
      goto L0(r3);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r5 = dyn cat1[`...`, file, sep](ddd2, p, "");
    check L10() else D4();
  D4():
    deopt 18 [r5];
  L10():
    popenv;
    return r5;
  }
}