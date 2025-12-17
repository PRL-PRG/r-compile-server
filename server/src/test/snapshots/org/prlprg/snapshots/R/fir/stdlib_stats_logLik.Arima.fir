fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `logLik.Arima` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg is_na:cls, reg r3:V, reg c1:L, reg r4:V, reg structure:cls, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg object9:*, reg object10:V, reg c3:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r9:V, reg sum:cls, reg r10:V, reg r11:V, reg p1:p(V +), reg object13:*, reg object14:V, reg c4:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p2:p(V +), reg r15:V, reg l:*, reg class__:cls, reg r16:V, reg res:*, reg res1:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L11() else L1();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<lang `$`(object, aic)>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    structure = ldf structure;
    check L13() else D2();
  L2(r4):
    st res = r4;
    l = ld res;
    class__ = ldf `class<-`;
    check L15() else D4();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L7() else L8(object2);
  L11():
    goto L2(NA_LGL);
  D2():
    deopt 10 [];
  D4():
    deopt 21 ["logLik", l, "logLik"];
  L6(dx1):
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L10() else D1();
  L7():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(object4):
    r2 = `$`(object4, <sym aic>);
    goto L6(r2);
  L13():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c2 = `is.object`(object6);
      if c2 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r5 = `$`(object8, <sym loglik>);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      sym1 = ldf sum;
      base1 = ldf sum in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      r11 = `+`(r8, 1.0);
      return r11;
    L1():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c3 = `is.object`(object10);
      if c3 then L4() else L5(object10);
    L2():
      r7 = dyn base1(<lang `$`(object, mask)>);
      goto L0(r7);
    L3(dx5):
      sum = ldf sum in base;
      r10 = dyn sum(dx5);
      goto L0(r10);
    L4():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(object12):
      r9 = `$`(object12, <sym mask>);
      goto L3(r9);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx4);
    };
    p2 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c4 = `is.object`(object14);
      if c4 then L1() else L2(object14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object16):
      r13 = `$`(object16, <sym nobs>);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r15 = dyn structure[, df, nobs](p, p1, p2);
    check L14() else D3();
  L15():
    r16 = dyn class__(l, NULL, "logLik");
    check L16() else D5();
  D1():
    deopt 6 [r3];
  D3():
    deopt 16 [r15];
  D5():
    deopt 23 ["logLik", r16];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    goto L0(r3);
  L14():
    goto L2(r15);
  L16():
    st res = r16;
    res = ld res;
    check L17() else D6();
  D6():
    deopt 25 [res];
  L17():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  }
}