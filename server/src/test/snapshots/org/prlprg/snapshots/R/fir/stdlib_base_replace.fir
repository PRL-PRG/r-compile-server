fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1925309411`;
    st replace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1925309411`(x, list, values) {
  (reg x:*, reg list:*, reg values:*) -+> V { var x:*, var list:*, var values:*, reg values1:*, reg values2:V, reg l:*, reg c:L, reg values4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg list1:*, reg list2:V, reg ___:cls, reg r:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st list = list;
    st values = values;
    values1 = ld values;
    check L1() else D0();
  D0():
    deopt 0 [values1];
  L1():
    values2 = force? values1;
    checkMissing(values2);
    l = ld x;
    c = `is.object`(l);
    if c then L2() else L3(values2, l);
  L0(dx1):
    st x = dx1;
    x1 = ld x;
    check L6() else D2();
  L2():
    dr = tryDispatchBuiltin.0("[<-", l, values2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(values2, dr);
  L3(values4, l2):
    list1 = ld list;
    check L5() else D1();
  D1():
    deopt 3 [values4, l2, values2, list1];
  D2():
    deopt 7 [x1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    list2 = force? list1;
    ___ = ldf `[<-` in base;
    r = dyn ___(l2, values2, list2);
    goto L0(r);
  L6():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}