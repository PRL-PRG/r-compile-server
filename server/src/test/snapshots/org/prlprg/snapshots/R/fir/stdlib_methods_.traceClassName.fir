fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1548306783;
    st `.traceClassName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1548306783(className) {
  (reg className:*) -+> V { var className:*, reg paste0:cls, reg className1:*, reg className2:V, reg p:p(V +), reg r1:V, reg l:*, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r6:V, reg className3:*, reg className4:V |
    mkenv;
    st className = className;
    paste0 = ldf paste0;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      className1 = ld className;
      className2 = force? className1;
      checkMissing(className2);
      return className2;
    };
    r1 = dyn paste0(p, "WithTrace");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    l = ld className;
    c = `is.object`(l);
    if c then L3() else L4(r1);
  L0(dx1):
    st className = dx1;
    className3 = ld className;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(r1);
  L4(r3):
    ___ = ldf `[<-` in base;
    r6 = dyn ___(l, <missing>, r1);
    goto L0(r6);
  D2():
    deopt 10 [className3];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    className4 = force? className3;
    checkMissing(className4);
    popenv;
    return className4;
  }
}