fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `formula.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg form:*, reg form1:V, reg c1:V, reg r3:V, reg c2:L, reg formula:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg r6:V, reg environment:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r7:V, reg p1:p(V +), reg r9:V, reg l:*, reg environment__:cls, reg r10:V, reg form2:*, reg form3:V, reg formula1:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r11:V, reg p2:p(V +), reg r13:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L4() else L5(x2);
  L3(dx1):
    st form = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L4():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x4):
    r = `$`(x4, <sym formula>);
    goto L3(r);
  L0(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L10() else L1();
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    form = ld form;
    check L9() else D1();
  L8():
    r1 = dyn base(<sym form>);
    goto L0(r1);
  D1():
    deopt 5 [form];
  L1():
    formula1 = ldf formula;
    check L19() else D9();
  L9():
    form1 = force? form;
    checkMissing(form1);
    c1 = `==`(form1, NULL);
    goto L0(c1);
  L10():
    formula = ldf formula;
    check L11() else D2();
  D2():
    deopt 10 [];
  D9():
    deopt 26 [];
  L11():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r4 = `$`(x8, <sym terms>);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r6 = dyn formula(p);
    check L12() else D3();
  L19():
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c5 = `is.object`(x14);
      if c5 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r11 = `$`(x16, <sym terms>);
      goto L0(r11);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r13 = dyn formula1(p2);
    check L20() else D10();
  D3():
    deopt 12 [r6];
  D10():
    deopt 28 [r13];
  L12():
    st form = r6;
    environment = ldf environment;
    check L13() else D4();
  L20():
    popenv;
    return r13;
  D4():
    deopt 15 [];
  L13():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c4 = `is.object`(x10);
      if c4 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r7 = `$`(x12, <sym formula>);
      goto L0(r7);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r9 = dyn environment(p1);
    check L14() else D5();
  D5():
    deopt 17 [r9];
  L14():
    l = ld form;
    environment__ = ldf `environment<-`;
    check L15() else D6();
  D6():
    deopt 19 [r9, l, r9];
  L15():
    r10 = dyn environment__(l, NULL, r9);
    check L16() else D7();
  D7():
    deopt 21 [r9, r10];
  L16():
    st form = r10;
    form2 = ld form;
    check L17() else D8();
  D8():
    deopt 23 [form2];
  L17():
    form3 = force? form2;
    checkMissing(form3);
    popenv;
    return form3;
  }
}