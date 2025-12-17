fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `weights.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg wts:*, reg wts1:V, reg c1:V, reg c2:L, reg wts2:*, reg wts3:V, reg napredict:cls, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg p:p(V +), reg wts4:*, reg wts5:V, reg p1:p(V +), reg r6:V |
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
    st wts = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L4():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(object4):
    r = `$`(object4, <sym weights>);
    goto L3(r);
  L0(r2):
    c2 = `as.logical`(r2);
    if c2 then L10() else L1();
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    wts = ld wts;
    check L9() else D1();
  L8():
    r1 = dyn base(<sym wts>);
    goto L0(r1);
  D1():
    deopt 5 [wts];
  L1():
    napredict = ldf napredict;
    check L13() else D3();
  L9():
    wts1 = force? wts;
    checkMissing(wts1);
    c1 = `==`(wts1, NULL);
    goto L0(c1);
  L10():
    wts2 = ld wts;
    check L11() else D2();
  D2():
    deopt 8 [wts2];
  D3():
    deopt 11 [];
  L11():
    wts3 = force? wts2;
    checkMissing(wts3);
    popenv;
    return wts3;
  L13():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c3 = `is.object`(object6);
      if c3 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r3 = `$`(object8, <sym na.action>);
      goto L0(r3);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      wts4 = ld wts;
      wts5 = force? wts4;
      checkMissing(wts5);
      return wts5;
    };
    r6 = dyn napredict(p, p1);
    check L14() else D4();
  D4():
    deopt 14 [r6];
  L14():
    popenv;
    return r6;
  }
}