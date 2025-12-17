fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `deviance.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg colSums:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg r4:V, reg w:*, reg w1:V, reg object9:*, reg object10:V, reg c4:L, reg w3:V, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg w5:V, reg dx5:V, reg r5:V, reg r6:V, reg r7:V, reg p:p(V +), reg r9:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    colSums = ldf colSums;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `is.null`;
      base = ldf `is.null` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c2 = `as.logical`(r1);
      if c2 then L8() else L1();
    L2():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L5() else L6(object2);
    L3():
      r = dyn base(<lang `<-`(w, `$`(object, weights))>);
      goto L0(r);
    L1():
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c4 = `is.object`(object10);
      if c4 then L15() else L16(w1, object10);
    L4(dx1):
      st w = dx1;
      c1 = `==`(dx1, NULL);
      goto L0(c1);
    L5():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(object4):
      r2 = `$`(object4, <sym weights>);
      goto L4(r2);
    L8():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c3 = `is.object`(object6);
      if c3 then L10() else L11(object6);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L4(dx);
    L9(dx3):
      r4 = `^`(dx3, 2.0);
      return r4;
    L10():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L12() else L11(dr2);
    L11(object8):
      r3 = `$`(object8, <sym residuals>);
      goto L9(r3);
    L14(w5, dx5):
      r6 = `^`(dx5, 2.0);
      r7 = `*`(w5, r6);
      return r7;
    L15():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L17() else L16(w1, dr4);
    L16(w3, object12):
      r5 = `$`(object12, <sym residuals>);
      goto L14(w3, r5);
    L12():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L9(dx2);
    L17():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L14(w1, dx4);
    };
    r9 = dyn colSums(p);
    check L1() else D1();
  D1():
    deopt 3 [r9];
  L1():
    popenv;
    return r9;
  }
}