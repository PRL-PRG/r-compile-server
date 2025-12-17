fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg graphics:*, reg graphics1:V, reg p1:p(V +), reg r8:V, reg plot:cls, reg cars:*, reg cars1:V, reg p2:p(V +), reg r10:V, reg lines:cls, reg lowess:cls, reg cars2:*, reg cars3:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg plot1:cls, reg sin:*, reg sin1:V, reg p5:p(V +), reg p6:p(V +), reg p7:p(V +), reg r18:V, reg plot2:cls, reg table:cls, reg rpois:cls, reg r19:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg plot3:cls, reg sort:cls, reg rnorm:cls, reg r24:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg r28:V, reg points:cls, reg x:*, reg x1:V, reg p12:p(V +), reg r30:V |
    mkenv;
    r = clos inner3924448841;
    st plot = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    plot = ldf plot;
    check L10() else D4();
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    require1 = ldf require;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym graphics>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 14 [];
  L5():
    goto L0();
  L8():
    p1 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r8 = dyn require1(p1);
    check L9() else D3();
  L10():
    p2 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r10 = dyn plot(p2);
    check L11() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 16 [r10];
  L9():
    goto L1();
  L11():
    lines = ldf lines;
    check L12() else D6();
  D6():
    deopt 18 [];
  L12():
    p4 = prom<V +>{
      lowess = ldf lowess;
      p3 = prom<V +>{
        cars2 = ld cars;
        cars3 = force? cars2;
        checkMissing(cars3);
        return cars3;
      };
      r12 = dyn lowess(p3);
      return r12;
    };
    r14 = dyn lines(p4);
    check L13() else D7();
  D7():
    deopt 20 [r14];
  L13():
    plot1 = ldf plot;
    check L14() else D8();
  D8():
    deopt 22 [];
  L14():
    p5 = prom<V +>{
      sin = ld sin;
      sin1 = force? sin;
      checkMissing(sin1);
      return sin1;
    };
    p6 = prom<V +>{
      return -3.141592653589793;
    };
    p7 = prom<V +>{
      return 6.283185307179586;
    };
    r18 = dyn plot1(p5, p6, p7);
    check L15() else D9();
  D9():
    deopt 26 [r18];
  L15():
    plot2 = ldf plot;
    check L16() else D10();
  D10():
    deopt 28 [];
  L16():
    p9 = prom<V +>{
      table = ldf table;
      p8 = prom<V +>{
        rpois = ldf rpois;
        r19 = dyn rpois(100.0, 5.0);
        return r19;
      };
      r21 = dyn table(p8);
      return r21;
    };
    r23 = dyn plot2[, type, col, lwd, main](p9, "h", "red", 10.0, "rpois(100, lambda = 5)");
    check L17() else D11();
  D11():
    deopt 38 [r23];
  L17():
    plot3 = ldf plot;
    check L18() else D12();
  D12():
    deopt 40 [];
  L18():
    p11 = prom<V +>{
      sort = ldf sort;
      p10 = prom<V +>{
        rnorm = ldf rnorm;
        r24 = dyn rnorm(47.0);
        return r24;
      };
      r26 = dyn sort(p10);
      st x = r26;
      invisible.0();
      return r26;
    };
    r28 = dyn plot3[, type, main](p11, "s", "plot(x, type = \"s\")");
    check L19() else D13();
  D13():
    deopt 46 [r28];
  L19():
    points = ldf points;
    check L20() else D14();
  D14():
    deopt 48 [];
  L20():
    p12 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r30 = dyn points[, cex, col](p12, 0.5, "dark red");
    check L21() else D15();
  D15():
    deopt 54 [r30];
  L21():
    popenv;
    return r30;
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
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
    r2 = dyn UseMethod("plot");
    goto L0(r2);
  L2():
    r = dyn base("plot");
    goto L0(r);
  }
}