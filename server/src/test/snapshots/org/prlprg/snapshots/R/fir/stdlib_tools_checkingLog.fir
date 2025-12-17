fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384943734;
    st checkingLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384943734(Log, `...`) {
  (reg Log:*, reg ddd:dots) -+> V { var Log:*, var `...`:dots?, reg printLog:cls, reg Log1:*, reg Log2:V, reg p:p(V +), reg Log3:*, reg Log4:V, reg c:L, reg Log6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st Log = Log;
    st `...` = ddd;
    printLog = ldf printLog;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      Log1 = ld Log;
      Log2 = force? Log1;
      checkMissing(Log2);
      return Log2;
    };
    p1 = prom<V +>{
      Log3 = ld Log;
      Log4 = force? Log3;
      checkMissing(Log4);
      c = `is.object`(Log4);
      if c then L1() else L2(Log4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", Log4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(Log6):
      r1 = `$`(Log6, <sym stars>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    r3 = dyn printLog[, , , `...`, ](p, p1, " checking ", ddd1, " ...");
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}