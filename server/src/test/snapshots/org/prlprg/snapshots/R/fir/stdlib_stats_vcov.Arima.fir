fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `vcov.Arima` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    object1 = ld object;
    check L0() else D0();
  D0():
    deopt 0 [object1];
  L0():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L2() else L3(object2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(object4):
    r = `$`(object4, <sym var.coef>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}