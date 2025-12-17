fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `na.action.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_list:cls, reg r2:V, reg c:L, reg c2:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object3:*, reg object4:V, reg names:cls, reg r5:V, reg p:p(V +), reg r7:V, reg c3:L, reg c4:V, reg c6:L, reg object5:*, reg object6:V, reg c7:L, reg object8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg object9:*, reg object10:V, reg attr:cls, reg r11:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1(c);
  L5():
    object1 = ld object;
    check L7() else D0();
  L6():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(c2):
    c6 = `as.logical`(c2);
    if c6 then L13() else L2();
  L7():
    object2 = force? object1;
    checkMissing(object2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(object2);
    check L8() else D1();
  L9():
    _in_ = ldf `%in%`;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [c];
  L2():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L8():
    goto L0(r2);
  L10():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      names = ldf names in base;
      r5 = dyn names(object4);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym object>);
      goto L0(r3);
    };
    r7 = dyn _in_("na.action", p);
    check L11() else D3();
  L13():
    object5 = ld object;
    check L14() else D4();
  D3():
    deopt 10 [c, r7];
  D4():
    deopt 12 [object5];
  L4(r10):
    popenv;
    return r10;
  L11():
    c3 = `as.logical`(r7);
    c4 = `&&`(c, c3);
    goto L1(c4);
  L14():
    object6 = force? object5;
    checkMissing(object6);
    c7 = `is.object`(object6);
    if c7 then L15() else L16(object6);
  L19():
    object9 = ld object;
    check L21() else D5();
  L20():
    r9 = dyn base2(<sym object>, "na.action");
    goto L4(r9);
  D5():
    deopt 19 [object9];
  L3(dx1):
    popenv;
    return dx1;
  L15():
    dr = tryDispatchBuiltin.1("[[", object6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(object8):
    __ = ldf `[[` in base;
    r8 = dyn __(object8, "na.action");
    goto L3(r8);
  L21():
    object10 = force? object9;
    checkMissing(object10);
    attr = ldf attr in base;
    r11 = dyn attr(object10, "na.action");
    check L22() else D6();
  D6():
    deopt 23 [r11];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    goto L4(r11);
  }
}