fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3782021761;
    st creatingLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3782021761(Log, text) {
  (reg Log:*, reg text:*) -+> V { var Log:*, var text:*, reg printLog:cls, reg Log1:*, reg Log2:V, reg p:p(V +), reg Log3:*, reg Log4:V, reg c:L, reg Log6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg text1:*, reg text2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st Log = Log;
    st text = text;
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
    p2 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r4 = dyn printLog(p, p1, " creating ", p2, " ...");
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    popenv;
    return r4;
  }
}