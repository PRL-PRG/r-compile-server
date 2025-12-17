fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st slotNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg names:cls, reg r5:V, reg _slotNames:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r7:V |
    mkenv;
    st x = x;
    is = ldf is;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is(p, "classRepresentation");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0();
  L0():
    _slotNames = ldf `.slotNames`;
    check L9() else D3();
  L4():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  D3():
    deopt 12 [];
  L1(r3):
    popenv;
    return r3;
  L5():
    __ = ldf `@` in base;
    r4 = dyn __(<sym x>, <sym slots>);
    names = ldf names in base;
    r5 = dyn names(r4);
    check L7() else D2();
  L6():
    r2 = dyn base(<lang `@`(x, slots)>);
    goto L1(r2);
  L9():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn _slotNames(p1);
    check L10() else D4();
  D2():
    deopt 10 [r5];
  D4():
    deopt 14 [r7];
  L7():
    goto L1(r5);
  L10():
    popenv;
    return r7;
  }
}