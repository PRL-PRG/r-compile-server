fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `nobs.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg w:*, reg w1:V, reg r6:V, reg sum:cls, reg r7:V, reg NROW:cls, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p:p(V +), reg r10:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L10() else L1();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<lang `<-`(w, `$`(object, weights))>);
    goto L0(r);
  D0():
    deopt 1 [object1];
  L1():
    NROW = ldf NROW;
    check L16() else D3();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L7() else L8(object2);
  L10():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D3():
    deopt 16 [];
  L2(r5):
    popenv;
    return r5;
  L6(dx1):
    st w = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L7():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(object4):
    r2 = `$`(object4, <sym weights>);
    goto L6(r2);
  L11():
    w = ld w;
    check L13() else D1();
  L12():
    r4 = dyn base1(<lang `!=`(w, 0.0)>);
    goto L2(r4);
  L16():
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
      r8 = `$`(object8, <sym residuals>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r10 = dyn NROW(p);
    check L17() else D4();
  D1():
    deopt 9 [w];
  D4():
    deopt 18 [r10];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L13():
    w1 = force? w;
    checkMissing(w1);
    r6 = `!=`(w1, 0.0);
    sum = ldf sum in base;
    r7 = dyn sum(r6);
    check L14() else D2();
  L17():
    popenv;
    return r10;
  D2():
    deopt 14 [r7];
  L14():
    goto L2(r7);
  }
}