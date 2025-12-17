fun main() {
  () -+> V { reg r:cls, reg diff:cls, reg s:*, reg s1:V, reg p:p(V +), reg r2:V, reg diffinv:cls, reg d:*, reg d1:V, reg p1:p(V +), reg r4:V |
    mkenv;
    r = clos inner2044426018;
    st diffinv = r;
    st s = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    diff = ldf diff;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r2 = dyn diff(p);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    st d = r2;
    diffinv = ldf diffinv;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p1 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r4 = dyn diffinv[, xi](p1, 1.0);
    check L3() else D3();
  D3():
    deopt 16 [r4];
  L3():
    popenv;
    return r4;
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
    r2 = dyn UseMethod("diffinv");
    goto L0(r2);
  L2():
    r = dyn base("diffinv");
    goto L0(r);
  }
}