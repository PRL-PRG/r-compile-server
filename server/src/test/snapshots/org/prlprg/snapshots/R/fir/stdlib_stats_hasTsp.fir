fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st hasTsp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg NROW:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r8:V, reg c2:cls, reg r9:V, reg l:*, reg attr__:cls, reg r10:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L11() else L2();
  L5():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang attr(x, "tsp")>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    goto L4();
  L4():
    x5 = ld x;
    check L20() else D7();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym x>, "tsp");
    goto L1(r2);
  L11():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  D0():
    deopt 3 [x1];
  D7():
    deopt 27 [x5];
  L3(r6):
    l = ld x;
    attr__ = ldf `attr<-`;
    check L17() else D5();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "tsp");
    check L10() else D1();
  L12():
    NROW = ldf NROW;
    check L14() else D2();
  L13():
    r5 = dyn base2(1.0, <lang NROW(x)>, 1.0);
    goto L3(r5);
  L20():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D1():
    deopt 7 [r4];
  D2():
    deopt 13 [];
  D5():
    deopt 20 [r6, l, r6];
  L10():
    goto L1(r4);
  L14():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r8 = dyn NROW(p);
    check L15() else D3();
  L17():
    r10 = dyn attr__(l, NULL, "tsp", r6);
    check L18() else D6();
  D3():
    deopt 15 [r8];
  D6():
    deopt 23 [r6, r10];
  L15():
    c2 = ldf c in base;
    r9 = dyn c2(1.0, r8, 1.0);
    check L16() else D4();
  L18():
    st x = r10;
    goto L4();
  D4():
    deopt 18 [r9];
  L16():
    goto L3(r9);
  }
}