fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg cars:*, reg cars1:V, reg p:p(V +), reg r2:V, reg lines:cls, reg __:cls, reg r3:V, reg r4:cls, reg cars2:*, reg cars3:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    r = clos inner2044426018;
    st lines = r;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r2 = dyn plot[, main](p, "Stopping Distance versus Speed");
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    lines = ldf lines;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      __ = ldf `::`;
      r3 = dyn __("stats", "lowess");
      checkFun.0(r3);
      r4 = r3 as cls;
      p1 = prom<V +>{
        cars2 = ld cars;
        cars3 = force? cars2;
        checkMissing(cars3);
        return cars3;
      };
      r6 = dyn r4(p1);
      return r6;
    };
    r8 = dyn lines(p2);
    check L3() else D3();
  D3():
    deopt 12 [r8];
  L3():
    popenv;
    return r8;
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
    r2 = dyn UseMethod("lines");
    goto L0(r2);
  L2():
    r = dyn base("lines");
    goto L0(r);
  }
}