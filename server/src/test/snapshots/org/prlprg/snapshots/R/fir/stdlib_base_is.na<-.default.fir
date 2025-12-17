fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `.default` = r;
    st `is.na` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg l:*, reg c:L, reg r1:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg value1:*, reg value2:V, reg ___:cls, reg r4:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st value = value;
    l = ld x;
    c = `is.object`(l);
    if c then L1() else L2(NA_LGL, l);
  L0(dx1):
    st x = dx1;
    x1 = ld x;
    check L5() else D1();
  L1():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L3() else L2(NA_LGL, dr);
  L2(r1, l2):
    value1 = ld value;
    check L4() else D0();
  D0():
    deopt 3 [r1, l2, NA_LGL, value1];
  D1():
    deopt 7 [x1];
  L3():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L4():
    value2 = force? value1;
    ___ = ldf `[<-` in base;
    r4 = dyn ___(l2, NA_LGL, value2);
    goto L0(r4);
  L5():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}