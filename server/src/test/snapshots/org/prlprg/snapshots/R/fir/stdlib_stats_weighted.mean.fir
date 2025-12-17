fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg weighted_mean:cls, reg x:*, reg x1:V, reg p:p(V +), reg wt:*, reg wt1:V, reg p1:p(V +), reg r10:V |
    mkenv;
    r = clos inner2386108811;
    st `weighted.mean` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    r4 = `/`(r2, 15.0);
    st wt = r4;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r3 = dyn c(5.0, 5.0, 4.0, 1.0);
    check L4() else D0();
  L3():
    r1 = dyn base(5.0, 5.0, 4.0, 1.0);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  L1(r6):
    st x = r6;
    weighted_mean = ldf `weighted.mean`;
    check L8() else D2();
  L4():
    goto L0(r3);
  L5():
    c1 = ldf c in base;
    r7 = dyn c1(3.7, 3.3, 3.5, 2.8);
    check L7() else D1();
  L6():
    r5 = dyn base1(3.7, 3.3, 3.5, 2.8);
    goto L1(r5);
  D1():
    deopt 21 [r7];
  D2():
    deopt 24 [];
  L7():
    goto L1(r7);
  L8():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      wt = ld wt;
      wt1 = force? wt;
      checkMissing(wt1);
      return wt1;
    };
    r10 = dyn weighted_mean(p, p1);
    check L9() else D3();
  D3():
    deopt 27 [r10];
  L9():
    st xm = r10;
    invisible.0();
    popenv;
    return r10;
  }
}
fun inner2386108811(x, w, `...`) {
  (reg x:*, reg w:*, reg ddd:dots) -+> V { var x:*, var w:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st w = w;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("weighted.mean");
    goto L0(r2);
  L2():
    r = dyn base("weighted.mean");
    goto L0(r);
  }
}