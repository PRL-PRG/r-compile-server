fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `residuals.HoltWinters` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg object5:*, reg object6:V, reg c1:L, reg dx3:V, reg object8:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg r1:V, reg c2:L, reg dx10:V, reg dr4:V, reg dc2:L, reg dx13:V, reg dx14:V, reg dx15:V, reg __:cls, reg r2:V, reg r3:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    object1 = ld object;
    check L1() else D0();
  D0():
    deopt 0 [object1];
  L1():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L3() else L4(object2);
  L2(dx1):
    object5 = ld object;
    check L6() else D1();
  L3():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(object4):
    r = `$`(object4, <sym x>);
    goto L2(r);
  D1():
    deopt 2 [dx1, object5];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L8() else L9(dx1, object6);
  L7(dx6, dx7):
    c2 = `is.object`(dx7);
    if c2 then L11() else L12(dx6);
  L8():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(dx1, dr2);
  L9(dx3, object8):
    r1 = `$`(object8, <sym fitted>);
    goto L7(dx3, r1);
  L0(dx14, dx15):
    r3 = `-`(dx14, dx15);
    popenv;
    return r3;
  L10():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx1, dx5);
  L11():
    dr4 = tryDispatchBuiltin.1("[", dx7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L13() else L12(dx6);
  L12(dx10):
    __ = ldf `[` in base;
    r2 = dyn __(dx7, <missing>, 1.0);
    goto L0(dx10, r2);
  L13():
    dx13 = getTryDispatchBuiltinValue(dr4);
    goto L0(dx6, dx13);
  }
}