fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `quarters.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_POSIXlt:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg ___:cls, reg r5:V, reg paste0:cls, reg x3:*, reg x4:V, reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L0() else D0();
  D0():
    deopt 2 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_POSIXlt(p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L2(dx1):
    ___ = ldf `%/%` in base;
    r5 = dyn ___(dx1, 3.0);
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.1("$", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    r4 = `$`(r3, <sym mon>);
    goto L2(r4);
  D2():
    deopt 8 [r5];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    st x = r5;
    paste0 = ldf paste0;
    check L7() else D3();
  D3():
    deopt 11 [];
  L7():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      r6 = `+`(x4, 1.0);
      return r6;
    };
    r8 = dyn paste0("Q", p1);
    check L8() else D4();
  D4():
    deopt 14 [r8];
  L8():
    popenv;
    return r8;
  }
}