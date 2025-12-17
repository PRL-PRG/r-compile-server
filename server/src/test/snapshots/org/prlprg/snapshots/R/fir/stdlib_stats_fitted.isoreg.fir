fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `fitted.isoreg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg object9:*, reg object10:V, reg c3:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r2:V, reg c4:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg order:cls, reg object13:*, reg object14:V, reg c5:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r3:V, reg p:p(V +), reg r5:V, reg __:cls, reg r6:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    object1 = ld object;
    check L2() else D0();
  D0():
    deopt 0 [object1];
  L2():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L4() else L5(object2);
  L3(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L7() else L0();
  L4():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(object4):
    r = `$`(object4, <sym isOrd>);
    goto L3(r);
  L0():
    object9 = ld object;
    check L14() else D2();
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    object5 = ld object;
    check L8() else D1();
  D1():
    deopt 3 [object5];
  D2():
    deopt 6 [object9];
  L8():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L10() else L11(object6);
  L14():
    object10 = force? object9;
    checkMissing(object10);
    c3 = `is.object`(object10);
    if c3 then L16() else L17(object10);
  L9(dx3):
    popenv;
    return dx3;
  L10():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(object8):
    r1 = `$`(object8, <sym yf>);
    goto L9(r1);
  L15(dx5):
    c4 = `is.object`(dx5);
    if c4 then L19() else L20(dx5);
  L16():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(dr4);
  L17(object12):
    r2 = `$`(object12, <sym yf>);
    goto L15(r2);
  L1(dx9):
    popenv;
    return dx9;
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L18():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L19():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L21() else L20(dr6);
  L20(dx7):
    order = ldf order;
    check L22() else D3();
  D3():
    deopt 10 [dx7];
  L21():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L1(dx8);
  L22():
    p = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c5 = `is.object`(object14);
      if c5 then L1() else L2(object14);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object16):
      r3 = `$`(object16, <sym ord>);
      goto L0(r3);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    r5 = dyn order(p);
    check L23() else D4();
  D4():
    deopt 12 [dx7, r5];
  L23():
    __ = ldf `[` in base;
    r6 = dyn __(dx7, r5);
    goto L1(r6);
  }
}