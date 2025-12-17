fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.isIndirectExtension` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg is:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg __:cls, reg r4:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V |
    mkenv;
    st object = object;
    is = ldf is;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn is(p, "SClassExtension");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0(c);
  L0(c2):
    popenv;
    return c2;
  L4():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(c5, r3):
    r6 = `>`(r3, 0.0);
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L5():
    __ = ldf `@` in base;
    r4 = dyn __(<sym object>, <sym by>);
    length = ldf length in base;
    r5 = dyn length(r4);
    check L7() else D2();
  L6():
    r2 = dyn base(<lang `@`(object, by)>);
    goto L1(c, r2);
  D2():
    deopt 10 [c, r5];
  L7():
    goto L1(c, r5);
  }
}