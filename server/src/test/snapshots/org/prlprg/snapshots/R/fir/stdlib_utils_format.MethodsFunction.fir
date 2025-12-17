fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3348268119;
    st `format.MethodsFunction` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3348268119(x, byclass, `...`) {
  (reg x:*, reg byclass:*, reg ddd:dots) -+> V { var x:*, var byclass:*, reg byclass_isMissing:L, reg byclass_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg attr1:cls, reg r6:V, reg byclass1:*, reg byclass2:V, reg c:L, reg unique:cls, reg info:*, reg info1:V, reg c1:L, reg info3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p1:p(V +), reg r9:V, reg paste0:cls, reg rownames:cls, reg info4:*, reg info5:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg ifelse:cls, reg info6:*, reg info7:V, reg c2:L, reg info9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V |
    mkenv;
    st x = x;
    byclass_isMissing = missing.0(byclass);
    if byclass_isMissing then L0() else L1(byclass);
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "byclass");
      goto L0(r2);
    L2():
      r = dyn base(<sym x>, "byclass");
      goto L0(r);
    };
    goto L1(p);
  L1(byclass_orDefault):
    st byclass = byclass_orDefault;
    st `...` = ddd;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L2(r5):
    st info = r5;
    byclass1 = ld byclass;
    check L8() else D2();
  L4():
    x3 = ld x;
    check L6() else D0();
  L5():
    r4 = dyn base1(<sym x>, "info");
    goto L2(r4);
  D0():
    deopt 2 [x3];
  D2():
    deopt 8 [byclass1];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r6 = dyn attr1(x4, "info");
    check L7() else D1();
  L8():
    byclass2 = force? byclass1;
    checkMissing(byclass2);
    c = `as.logical`(byclass2);
    if c then L9() else L3();
  D1():
    deopt 6 [r6];
  L3():
    paste0 = ldf paste0;
    check L13() else D5();
  L7():
    goto L2(r6);
  L9():
    unique = ldf unique;
    check L10() else D3();
  D3():
    deopt 11 [];
  D5():
    deopt 15 [];
  L10():
    p1 = prom<V +>{
      info = ld info;
      info1 = force? info;
      checkMissing(info1);
      c1 = `is.object`(info1);
      if c1 then L1() else L2(info1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", info1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(info3):
      r7 = `$`(info3, <sym generic>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn unique(p1);
    check L11() else D4();
  L13():
    p3 = prom<V +>{
      rownames = ldf rownames;
      p2 = prom<V +>{
        info4 = ld info;
        info5 = force? info4;
        checkMissing(info5);
        return info5;
      };
      r11 = dyn rownames(p2);
      return r11;
    };
    p5 = prom<V +>{
      ifelse = ldf ifelse;
      p4 = prom<V +>{
        info6 = ld info;
        info7 = force? info6;
        checkMissing(info7);
        c2 = `is.object`(info7);
        if c2 then L1() else L2(info7);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", info7);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(info9):
        r13 = `$`(info9, <sym visible>);
        goto L0(r13);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r15 = dyn ifelse(p4, "", "*");
      return r15;
    };
    r17 = dyn paste0[, visible](p3, p5);
    check L14() else D6();
  D4():
    deopt 13 [r9];
  D6():
    deopt 19 [r17];
  L11():
    popenv;
    return r9;
  L14():
    popenv;
    return r17;
  }
}