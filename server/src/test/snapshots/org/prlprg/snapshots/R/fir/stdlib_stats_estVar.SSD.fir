fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `estVar.SSD` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg object5:*, reg object6:V, reg c1:L, reg dx3:V, reg object8:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg r1:V, reg r2:V |
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
    object5 = ld object;
    check L5() else D1();
  L2():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(object4):
    r = `$`(object4, <sym SSD>);
    goto L1(r);
  D1():
    deopt 2 [dx1, object5];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L7() else L8(dx1, object6);
  L6(dx6, dx7):
    r2 = `/`(dx6, dx7);
    popenv;
    return r2;
  L7():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(dx1, dr2);
  L8(dx3, object8):
    r1 = `$`(object8, <sym df>);
    goto L6(dx3, r1);
  L9():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx1, dx5);
  }
}