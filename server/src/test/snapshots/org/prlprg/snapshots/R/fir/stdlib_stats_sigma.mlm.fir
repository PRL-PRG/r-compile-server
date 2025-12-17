fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `sigma.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg colSums:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg p:p(V +), reg r5:V, reg object5:*, reg object6:V, reg c1:L, reg r7:V, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r9:V, reg dx3:V, reg r10:V, reg r11:V, reg r12:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    colSums = ldf colSums;
    check L3() else D0();
  L2():
    r = dyn base(<lang `/`(colSums(`^`(`$`(object, residuals), 2.0)), `$`(object, df.residual))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      r3 = `^`(dx1, 2.0);
      return r3;
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r2 = `$`(object4, <sym residuals>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn colSums(p);
    check L4() else D1();
  D1():
    deopt 4 [r5];
  L4():
    object5 = ld object;
    check L5() else D2();
  D2():
    deopt 4 [r5, object5];
  L5():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L7() else L8(r5, object6);
  L6(r9, dx3):
    r11 = `/`(r9, dx3);
    r12 = sqrt(r11);
    goto L0(r12);
  L7():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(r5, dr2);
  L8(r7, object8):
    r10 = `$`(object8, <sym df.residual>);
    goto L6(r7, r10);
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(r5, dx2);
  }
}