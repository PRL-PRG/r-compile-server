fun main() {
  () -+> V { reg r:cls, reg rnorm:cls, reg r1:V, reg rnorm1:cls, reg r2:V, reg var_test:cls, reg x:*, reg x1:V, reg p:p(V +), reg y:*, reg y1:V, reg p1:p(V +), reg r5:V, reg var_test1:cls, reg lm:cls, reg __:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg lm1:cls, reg __1:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V |
    mkenv;
    r = clos inner2044426018;
    st `var.test` = r;
    rnorm = ldf rnorm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn rnorm[, mean, sd](50.0, 0.0, 2.0);
    check L1() else D1();
  D1():
    deopt 10 [r1];
  L1():
    st x = r1;
    rnorm1 = ldf rnorm;
    check L2() else D2();
  D2():
    deopt 13 [];
  L2():
    r2 = dyn rnorm1[, mean, sd](30.0, 1.0, 1.0);
    check L3() else D3();
  D3():
    deopt 19 [r2];
  L3():
    st y = r2;
    var_test = ldf `var.test`;
    check L4() else D4();
  D4():
    deopt 22 [];
  L4():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r5 = dyn var_test(p, p1);
    check L5() else D5();
  D5():
    deopt 25 [r5];
  L5():
    var_test1 = ldf `var.test`;
    check L6() else D6();
  D6():
    deopt 27 [];
  L6():
    p3 = prom<V +>{
      lm = ldf lm;
      p2 = prom<V +>{
        __ = ldf `~` in base;
        r6 = dyn __(<sym x>, 1.0);
        return r6;
      };
      r8 = dyn lm(p2);
      return r8;
    };
    p5 = prom<V +>{
      lm1 = ldf lm;
      p4 = prom<V +>{
        __1 = ldf `~` in base;
        r10 = dyn __1(<sym y>, 1.0);
        return r10;
      };
      r12 = dyn lm1(p4);
      return r12;
    };
    r14 = dyn var_test1(p3, p5);
    check L7() else D7();
  D7():
    deopt 30 [r14];
  L7():
    popenv;
    return r14;
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
    r2 = dyn UseMethod("var.test");
    goto L0(r2);
  L2():
    r = dyn base("var.test");
    goto L0(r);
  }
}