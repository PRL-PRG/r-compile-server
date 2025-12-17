fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `fitted.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg names:cls, reg r2:V, reg p:p(V +), reg r4:V, reg c:L, reg object3:*, reg object4:V, reg c1:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg dx2:V, reg object7:*, reg object8:V, reg c2:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r6:V, reg napredict:cls, reg object11:*, reg object12:V, reg c3:L, reg object14:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r7:V, reg p1:p(V +), reg xx:*, reg xx1:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    _in_ = ldf `%in%`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      names = ldf names in base;
      r2 = dyn names(object2);
      goto L0(r2);
    L2():
      r = dyn base(<sym object>);
      goto L0(r);
    };
    r4 = dyn _in_("fitted.values", p);
    check L3() else D1();
  D1():
    deopt 4 [r4];
  L3():
    c = `as.logical`(r4);
    if c then L4() else L0();
  L0():
    object7 = ld object;
    check L11() else D3();
  L1(dx2):
    st xx = dx2;
    napredict = ldf napredict;
    check L16() else D4();
  L4():
    object3 = ld object;
    check L5() else D2();
  D2():
    deopt 5 [object3];
  D3():
    deopt 8 [object7];
  D4():
    deopt 13 [];
  L5():
    object4 = force? object3;
    checkMissing(object4);
    c1 = `is.object`(object4);
    if c1 then L7() else L8(object4);
  L11():
    object8 = force? object7;
    checkMissing(object8);
    c2 = `is.object`(object8);
    if c2 then L13() else L14(object8);
  L16():
    p1 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      c3 = `is.object`(object12);
      if c3 then L1() else L2(object12);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object14):
      r7 = `$`(object14, <sym na.action>);
      goto L0(r7);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p2 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    r10 = dyn napredict(p1, p2);
    check L17() else D5();
  D5():
    deopt 16 [r10];
  L6(dx1):
    goto L1(dx1);
  L7():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(object6):
    r5 = `$`(object6, <sym fitted.values>);
    goto L6(r5);
  L12(dx4):
    goto L1(dx4);
  L13():
    dr2 = tryDispatchBuiltin.1("$", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(object10):
    r6 = `$`(object10, <sym fitted>);
    goto L12(r6);
  L17():
    popenv;
    return r10;
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L15():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx3);
  }
}