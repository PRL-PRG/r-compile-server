fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.packageForGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_list:cls, reg r2:V, reg c:L, reg lapply:cls, reg object3:*, reg object4:V, reg p:p(V +), reg _packageForGeneric:*, reg _packageForGeneric1:V, reg p1:p(V +), reg r5:V, reg is:cls, reg object5:*, reg object6:V, reg p2:p(V +), reg r7:V, reg c1:L, reg __:cls, reg r8:V |
    mkenv;
    st object = object;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    is = ldf is;
    check L11() else D4();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(object2);
    check L6() else D1();
  L7():
    lapply = ldf lapply;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [];
  L6():
    goto L0(r2);
  L8():
    p = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p1 = prom<V +>{
      _packageForGeneric = ld `.packageForGeneric`;
      _packageForGeneric1 = force? _packageForGeneric;
      checkMissing(_packageForGeneric1);
      return _packageForGeneric1;
    };
    r5 = dyn lapply(p, p1);
    check L9() else D3();
  L11():
    p2 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r7 = dyn is(p2, "genericFunction");
    check L12() else D5();
  D3():
    deopt 10 [r5];
  D5():
    deopt 15 [r7];
  L9():
    popenv;
    return r5;
  L12():
    c1 = `as.logical`(r7);
    if c1 then L13() else L2();
  L2():
    popenv;
    return "base";
  L13():
    __ = ldf `@` in base;
    r8 = dyn __(<sym object>, <sym package>);
    popenv;
    return r8;
  }
}