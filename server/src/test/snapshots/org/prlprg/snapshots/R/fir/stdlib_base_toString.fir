fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg toString:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg toString1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos inner2044426018;
    st toString = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    st x = r2;
    toString = ldf toString;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r3 = dyn c("a", "b", "aaaaaaaaaaa");
    check L3() else D0();
  L2():
    r1 = dyn base("a", "b", "aaaaaaaaaaa");
    goto L0(r1);
  D0():
    deopt 9 [r3];
  D1():
    deopt 12 [];
  L3():
    goto L0(r3);
  L4():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn toString(p);
    check L5() else D2();
  D2():
    deopt 14 [r5];
  L5():
    toString1 = ldf toString;
    check L6() else D3();
  D3():
    deopt 16 [];
  L6():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r7 = dyn toString1[, width](p1, 8.0);
    check L7() else D4();
  D4():
    deopt 20 [r7];
  L7():
    popenv;
    return r7;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
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
    r2 = dyn UseMethod("toString");
    goto L0(r2);
  L2():
    r = dyn base("toString");
    goto L0(r);
  }
}