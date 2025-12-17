fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg stl:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg co2:*, reg co3:V, reg r7:V, reg p1:p(V +), reg r9:V, reg plot:cls, reg fit:*, reg fit1:V, reg p2:p(V +), reg r11:V, reg par:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg monthplot:cls, reg co4:*, reg co5:V, reg p4:p(V +), reg r18:V, reg monthplot1:cls, reg fit2:*, reg fit3:V, reg p5:p(V +), reg r20:V, reg monthplot2:cls, reg fit4:*, reg fit5:V, reg p6:p(V +), reg r22:V, reg monthplot3:cls, reg fit6:*, reg fit7:V, reg p7:p(V +), reg r24:V, reg par1:cls, reg op:*, reg op1:V, reg p8:p(V +), reg r26:V, reg cycle:cls, reg co6:*, reg co7:V, reg p9:p(V +), reg r28:V, reg r29:V, reg ___:cls, reg r30:V, reg monthplot4:cls, reg co8:*, reg co9:V, reg p10:p(V +), reg quarter:*, reg quarter1:V, reg p11:p(V +), reg r33:V |
    mkenv;
    r = clos inner2044426018;
    st monthplot = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    stl = ldf stl;
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
      sym1 = ldf log;
      base1 = ldf log in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      co2 = ld co2;
      co3 = force? co2;
      checkMissing(co3);
      r7 = log(co3, 2.718281828459045);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym co2>);
      goto L0(r5);
    };
    r9 = dyn stl[, `s.window`, `t.window`](p1, 20.0, 20.0);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r9];
  L4():
    goto L0();
  L6():
    st fit = r9;
    plot = ldf plot;
    check L7() else D4();
  D4():
    deopt 18 [];
  L7():
    p2 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r11 = dyn plot(p2);
    check L8() else D5();
  D5():
    deopt 20 [r11];
  L8():
    par = ldf par;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c = ldf c in base;
      r14 = dyn c(2.0, 2.0);
      goto L0(r14);
    L2():
      r12 = dyn base2(2.0, 2.0);
      goto L0(r12);
    };
    r16 = dyn par[mfrow](p3);
    check L10() else D7();
  D7():
    deopt 25 [r16];
  L10():
    st op = r16;
    monthplot = ldf monthplot;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    p4 = prom<V +>{
      co4 = ld co2;
      co5 = force? co4;
      checkMissing(co5);
      return co5;
    };
    r18 = dyn monthplot[, ylab, `cex.axis`](p4, "data", 0.8);
    check L12() else D9();
  D9():
    deopt 34 [r18];
  L12():
    monthplot1 = ldf monthplot;
    check L13() else D10();
  D10():
    deopt 36 [];
  L13():
    p5 = prom<V +>{
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    r20 = dyn monthplot1[, choice, `cex.axis`](p5, "seasonal", 0.8);
    check L14() else D11();
  D11():
    deopt 42 [r20];
  L14():
    monthplot2 = ldf monthplot;
    check L15() else D12();
  D12():
    deopt 44 [];
  L15():
    p6 = prom<V +>{
      fit4 = ld fit;
      fit5 = force? fit4;
      checkMissing(fit5);
      return fit5;
    };
    r22 = dyn monthplot2[, choice, `cex.axis`](p6, "trend", 0.8);
    check L16() else D13();
  D13():
    deopt 50 [r22];
  L16():
    monthplot3 = ldf monthplot;
    check L17() else D14();
  D14():
    deopt 52 [];
  L17():
    p7 = prom<V +>{
      fit6 = ld fit;
      fit7 = force? fit6;
      checkMissing(fit7);
      return fit7;
    };
    r24 = dyn monthplot3[, choice, type, `cex.axis`](p7, "remainder", "h", 0.8);
    check L18() else D15();
  D15():
    deopt 60 [r24];
  L18():
    par1 = ldf par;
    check L19() else D16();
  D16():
    deopt 62 [];
  L19():
    p8 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r26 = dyn par1(p8);
    check L20() else D17();
  D17():
    deopt 64 [r26];
  L20():
    cycle = ldf cycle;
    check L21() else D18();
  D18():
    deopt 67 [];
  L21():
    p9 = prom<V +>{
      co6 = ld co2;
      co7 = force? co6;
      checkMissing(co7);
      return co7;
    };
    r28 = dyn cycle(p9);
    check L22() else D19();
  D19():
    deopt 69 [r28];
  L22():
    r29 = `-`(r28, 1.0);
    ___ = ldf `%/%` in base;
    r30 = dyn ___(r29, 3.0);
    check L23() else D20();
  D20():
    deopt 74 [r30];
  L23():
    st quarter = r30;
    monthplot4 = ldf monthplot;
    check L24() else D21();
  D21():
    deopt 77 [];
  L24():
    p10 = prom<V +>{
      co8 = ld co2;
      co9 = force? co8;
      checkMissing(co9);
      return co9;
    };
    p11 = prom<V +>{
      quarter = ld quarter;
      quarter1 = force? quarter;
      checkMissing(quarter1);
      return quarter1;
    };
    r33 = dyn monthplot4[, phase](p10, p11);
    check L25() else D22();
  D22():
    deopt 81 [r33];
  L25():
    popenv;
    return r33;
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
    r2 = dyn UseMethod("monthplot");
    goto L0(r2);
  L2():
    r = dyn base("monthplot");
    goto L0(r);
  }
}