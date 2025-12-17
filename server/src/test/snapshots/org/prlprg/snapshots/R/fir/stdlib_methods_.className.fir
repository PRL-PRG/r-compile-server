fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3618118985;
    st `.className` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3618118985(cl) {
  (reg cl:*) -+> V { var cl:*, reg is:cls, reg cl1:*, reg cl2:V, reg p:p(V +), reg r1:V, reg c:L, reg __:cls, reg r2:V, reg as:cls, reg cl3:*, reg cl4:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st cl = cl;
    is = ldf is;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    r1 = dyn is(p, "classRepresentation");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    as = ldf as;
    check L5() else D2();
  L3():
    __ = ldf `@` in base;
    r2 = dyn __(<sym cl>, <sym className>);
    popenv;
    return r2;
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      cl3 = ld cl;
      cl4 = force? cl3;
      checkMissing(cl4);
      return cl4;
    };
    r4 = dyn as(p1, "character");
    check L6() else D3();
  D3():
    deopt 11 [r4];
  L6():
    popenv;
    return r4;
  }
}