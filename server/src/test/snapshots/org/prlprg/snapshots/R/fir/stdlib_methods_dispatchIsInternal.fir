fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4083244991;
    st dispatchIsInternal = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4083244991(fdef) {
  (reg fdef:*) -+> V { var fdef:*, reg is_primitive:cls, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg c:L, reg c1:V, reg is:cls, reg __1:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg c3:L, reg c4:V |
    mkenv;
    st fdef = fdef;
    is_primitive = ldf `is.primitive`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym fdef>, <sym default>);
      return r;
    };
    r2 = dyn is_primitive(p);
    check L2() else D1();
  D1():
    deopt 3 [r2];
  L2():
    c = `as.logical`(r2);
    if c then L0(c) else L3();
  L0(c1):
    popenv;
    return c1;
  L3():
    is = ldf is;
    check L4() else D2();
  D2():
    deopt 5 [c];
  L4():
    p1 = prom<V +>{
      __1 = ldf `@` in base;
      r3 = dyn __1(<sym fdef>, <sym default>);
      return r3;
    };
    r5 = dyn is(p1, "internalDispatchMethod");
    check L5() else D3();
  D3():
    deopt 8 [c, r5];
  L5():
    c3 = `as.logical`(r5);
    c4 = `||`(c, c3);
    goto L0(c4);
  }
}