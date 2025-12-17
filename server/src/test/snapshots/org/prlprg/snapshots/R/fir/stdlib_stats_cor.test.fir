fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg cor_test:cls, reg x:*, reg x1:V, reg p:p(V +), reg y:*, reg y1:V, reg p1:p(V +), reg r9:V, reg cor_test1:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg y2:*, reg y3:V, reg p3:p(V +), reg r12:V, reg cor_test2:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg y4:*, reg y5:V, reg p5:p(V +), reg r15:V, reg cor_test3:cls, reg x6:*, reg x7:V, reg p6:p(V +), reg y6:*, reg y7:V, reg p7:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p8:p(V +), reg r22:V, reg pairs:cls, reg USJudgeRatings:*, reg USJudgeRatings1:V, reg p9:p(V +), reg r24:V, reg cor_test4:cls, reg __:cls, reg r25:V, reg p10:p(V +), reg USJudgeRatings2:*, reg USJudgeRatings3:V, reg p11:p(V +), reg r28:V |
    mkenv;
    r = clos inner2044426018;
    st `cor.test` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r2):
    st x = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L3():
    c = ldf c in base;
    r3 = dyn c(44.4, 45.9, 41.9, 53.3, 44.7, 44.1, 50.7, 45.2, 60.1);
    check L5() else D0();
  L4():
    r1 = dyn base(44.4, 45.9, 41.9, 53.3, 44.7, 44.1, 50.7, 45.2, 60.1);
    goto L0(r1);
  D0():
    deopt 15 [r3];
  L1(r5):
    st y = r5;
    cor_test = ldf `cor.test`;
    check L9() else D2();
  L5():
    goto L0(r3);
  L6():
    c1 = ldf c in base;
    r6 = dyn c1(2.6, 3.1, 2.5, 5.0, 3.6, 4.0, 5.2, 2.8, 3.8);
    check L8() else D1();
  L7():
    r4 = dyn base1(2.6, 3.1, 2.5, 5.0, 3.6, 4.0, 5.2, 2.8, 3.8);
    goto L1(r4);
  D1():
    deopt 29 [r6];
  D2():
    deopt 32 [];
  L8():
    goto L1(r6);
  L9():
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
    r9 = dyn cor_test[, , method, alternative](p, p1, "kendall", "greater");
    check L10() else D3();
  D3():
    deopt 39 [r9];
  L10():
    cor_test1 = ldf `cor.test`;
    check L11() else D4();
  D4():
    deopt 41 [];
  L11():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r12 = dyn cor_test1[, , method, alternative, exact](p2, p3, "kendall", "greater", FALSE);
    check L12() else D5();
  D5():
    deopt 50 [r12];
  L12():
    cor_test2 = ldf `cor.test`;
    check L13() else D6();
  D6():
    deopt 52 [];
  L13():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p5 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r15 = dyn cor_test2[, , method, alternative](p4, p5, "spearm", "g");
    check L14() else D7();
  D7():
    deopt 59 [r15];
  L14():
    cor_test3 = ldf `cor.test`;
    check L15() else D8();
  D8():
    deopt 61 [];
  L15():
    p6 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p7 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r18 = dyn cor_test3[, , alternative](p6, p7, "g");
    check L16() else D9();
  D9():
    deopt 66 [r18];
  L16():
    sym2 = ldf require;
    base2 = ldf require in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L2():
    pairs = ldf pairs;
    check L21() else D12();
  L17():
    require = ldf require;
    check L19() else D10();
  L18():
    r19 = dyn base2(<sym graphics>);
    goto L2();
  D10():
    deopt 69 [];
  D12():
    deopt 73 [];
  L19():
    p8 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r22 = dyn require(p8);
    check L20() else D11();
  L21():
    p9 = prom<V +>{
      USJudgeRatings = ld USJudgeRatings;
      USJudgeRatings1 = force? USJudgeRatings;
      checkMissing(USJudgeRatings1);
      return USJudgeRatings1;
    };
    r24 = dyn pairs(p9);
    check L22() else D13();
  D11():
    deopt 71 [r22];
  D13():
    deopt 75 [r24];
  L20():
    goto L2();
  L22():
    cor_test4 = ldf `cor.test`;
    check L23() else D14();
  D14():
    deopt 77 [];
  L23():
    p10 = prom<V +>{
      __ = ldf `~` in base;
      r25 = dyn __(<lang `+`(CONT, INTG)>);
      return r25;
    };
    p11 = prom<V +>{
      USJudgeRatings2 = ld USJudgeRatings;
      USJudgeRatings3 = force? USJudgeRatings2;
      checkMissing(USJudgeRatings3);
      return USJudgeRatings3;
    };
    r28 = dyn cor_test4[, data](p10, p11);
    check L24() else D15();
  D15():
    deopt 81 [r28];
  L24():
    popenv;
    return r28;
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
    r2 = dyn UseMethod("cor.test");
    goto L0(r2);
  L2():
    r = dyn base("cor.test");
    goto L0(r);
  }
}