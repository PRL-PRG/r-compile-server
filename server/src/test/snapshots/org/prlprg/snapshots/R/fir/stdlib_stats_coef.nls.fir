fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `coef.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg dx6:cls, reg r2:V |
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
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L2():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(object4):
    r = `$`(object4, <sym m>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5(dx5):
    checkFun.0(dx5);
    dx6 = dx5 as cls;
    r2 = dyn dx6();
    check L9() else D1();
  L6():
    dr2 = tryDispatchBuiltin.1("$", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    r1 = `$`(dx3, <sym getAllPars>);
    goto L5(r1);
  D1():
    deopt 5 [r2];
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  L9():
    popenv;
    return r2;
  }
}