fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `residuals.isoreg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg fitted:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r2:V, reg r3:V |
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
    fitted = ldf fitted;
    check L5() else D1();
  L2():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(object4):
    r = `$`(object4, <sym y>);
    goto L1(r);
  D1():
    deopt 3 [dx1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r2 = dyn fitted(p);
    check L6() else D2();
  D2():
    deopt 5 [dx1, r2];
  L6():
    r3 = `-`(dx1, r2);
    popenv;
    return r3;
  }
}