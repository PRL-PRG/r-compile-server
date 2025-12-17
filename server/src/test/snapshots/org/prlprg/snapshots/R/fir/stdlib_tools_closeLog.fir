fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner285995296;
    st closeLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner285995296(Log) {
  (reg Log:*) -+> V { var Log:*, reg Log1:*, reg Log2:V, reg c:L, reg Log4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg c1:L, reg close:cls, reg Log5:*, reg Log6:V, reg c2:L, reg Log8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st Log = Log;
    Log1 = ld Log;
    check L1() else D0();
  D0():
    deopt 0 [Log1];
  L1():
    Log2 = force? Log1;
    checkMissing(Log2);
    c = `is.object`(Log2);
    if c then L3() else L4(Log2);
  L2(dx1):
    r1 = `>`(dx1, 2);
    c1 = `as.logical`(r1);
    if c1 then L6() else L0();
  L3():
    dr = tryDispatchBuiltin.1("$", Log2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(Log4):
    r = `$`(Log4, <sym con>);
    goto L2(r);
  L0():
    invisible.0();
    popenv;
    return NULL;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    close = ldf close;
    check L7() else D1();
  D1():
    deopt 6 [];
  L7():
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
      r2 = `$`(Log8, <sym con>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r4 = dyn close(p);
    check L8() else D2();
  D2():
    deopt 8 [r4];
  L8():
    popenv;
    return r4;
  }
}