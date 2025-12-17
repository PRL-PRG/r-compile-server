fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg cycle:cls, reg presidents:*, reg presidents1:V, reg p1:p(V +), reg r6:V, reg plot:cls, reg as_vector:cls, reg time:cls, reg presidents2:*, reg presidents3:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg as_vector1:cls, reg presidents4:*, reg presidents5:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V |
    mkenv;
    r = clos inner2044426018;
    st time = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    cycle = ldf cycle;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    r6 = dyn cycle(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    plot = ldf plot;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p4 = prom<V +>{
      as_vector = ldf `as.vector`;
      p3 = prom<V +>{
        time = ldf time;
        p2 = prom<V +>{
          presidents2 = ld presidents;
          presidents3 = force? presidents2;
          checkMissing(presidents3);
          return presidents3;
        };
        r8 = dyn time(p2);
        return r8;
      };
      r10 = dyn as_vector(p3);
      return r10;
    };
    p6 = prom<V +>{
      as_vector1 = ldf `as.vector`;
      p5 = prom<V +>{
        presidents4 = ld presidents;
        presidents5 = force? presidents4;
        checkMissing(presidents5);
        return presidents5;
      };
      r13 = dyn as_vector1(p5);
      return r13;
    };
    r15 = dyn plot[, , type](p4, p6, "l");
    check L8() else D5();
  D5():
    deopt 18 [r15];
  L8():
    popenv;
    return r15;
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
    r2 = dyn UseMethod("time");
    goto L0(r2);
  L2():
    r = dyn base("time");
    goto L0(r);
  }
}