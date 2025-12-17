fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg __:cls, reg r3:V, reg class:cls, reg r4:V, reg fo:*, reg fo1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg fo2:*, reg fo3:V, reg typeof:cls, reg r7:V, reg terms:cls, reg fo4:*, reg fo5:V, reg p:p(V +), reg r9:V, reg environment:cls, reg fo6:*, reg fo7:V, reg p1:p(V +), reg r11:V, reg environment1:cls, reg as_formula:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg environment2:cls, reg as_formula1:cls, reg new_env:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg paste0:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg as_formula2:cls, reg paste1:cls, reg paste2:cls, reg xnam:*, reg xnam1:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg reformulate:cls, reg xnam2:*, reg xnam3:V, reg p9:p(V +), reg r30:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg fmla:*, reg fmla1:V, reg fmla2:*, reg fmla3:V, reg identical:cls, reg r33:V, reg p10:p(V +), reg r35:V |
    mkenv;
    r = clos inner2044426018;
    st formula = r;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    fo = ld fo;
    check L5() else D1();
  L2():
    __ = ldf `~` in base;
    r3 = dyn __(<sym y>, <lang `*`(x1, x2)>);
    st fo = r3;
    class = ldf class in base;
    r4 = dyn class(r3);
    check L4() else D0();
  L3():
    r1 = dyn base(<lang `<-`(fo, `~`(y, `*`(x1, x2)))>);
    goto L0();
  D0():
    deopt 9 [r4];
  D1():
    deopt 10 [fo];
  L4():
    goto L0();
  L5():
    fo1 = force? fo;
    checkMissing(fo1);
    sym1 = ldf typeof;
    base1 = ldf typeof in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1():
    terms = ldf terms;
    check L10() else D4();
  L6():
    fo2 = ld fo;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym fo>);
    goto L1();
  D2():
    deopt 14 [fo2];
  D4():
    deopt 19 [];
  L8():
    fo3 = force? fo2;
    checkMissing(fo3);
    typeof = ldf typeof in base;
    r7 = dyn typeof(fo3);
    check L9() else D3();
  L10():
    p = prom<V +>{
      fo4 = ld fo;
      fo5 = force? fo4;
      checkMissing(fo5);
      return fo5;
    };
    r9 = dyn terms(p);
    check L11() else D5();
  D3():
    deopt 17 [r7];
  D5():
    deopt 21 [r9];
  L9():
    goto L1();
  L11():
    environment = ldf environment;
    check L12() else D6();
  D6():
    deopt 23 [];
  L12():
    p1 = prom<V +>{
      fo6 = ld fo;
      fo7 = force? fo6;
      checkMissing(fo7);
      return fo7;
    };
    r11 = dyn environment(p1);
    check L13() else D7();
  D7():
    deopt 25 [r11];
  L13():
    environment1 = ldf environment;
    check L14() else D8();
  D8():
    deopt 27 [];
  L14():
    p2 = prom<V +>{
      as_formula = ldf `as.formula`;
      r12 = dyn as_formula("y ~ x");
      return r12;
    };
    r14 = dyn environment1(p2);
    check L15() else D9();
  D9():
    deopt 29 [r14];
  L15():
    environment2 = ldf environment;
    check L16() else D10();
  D10():
    deopt 31 [];
  L16():
    p4 = prom<V +>{
      as_formula1 = ldf `as.formula`;
      p3 = prom<V +>{
        new_env = ldf `new.env`;
        r15 = dyn new_env();
        return r15;
      };
      r17 = dyn as_formula1[, env]("y ~ x", p3);
      return r17;
    };
    r19 = dyn environment2(p4);
    check L17() else D11();
  D11():
    deopt 33 [r19];
  L17():
    paste0 = ldf paste0;
    check L18() else D12();
  D12():
    deopt 35 [];
  L18():
    p5 = prom<V +>{
      r20 = `:`(1.0, 25.0);
      return r20;
    };
    r22 = dyn paste0("x", p5);
    check L19() else D13();
  D13():
    deopt 38 [r22];
  L19():
    st xnam = r22;
    as_formula2 = ldf `as.formula`;
    check L20() else D14();
  D14():
    deopt 41 [];
  L20():
    p8 = prom<V +>{
      paste1 = ldf paste;
      p7 = prom<V +>{
        paste2 = ldf paste;
        p6 = prom<V +>{
          xnam = ld xnam;
          xnam1 = force? xnam;
          checkMissing(xnam1);
          return xnam1;
        };
        r24 = dyn paste2[, collapse](p6, "+");
        return r24;
      };
      r26 = dyn paste1("y ~ ", p7);
      return r26;
    };
    r28 = dyn as_formula2(p8);
    check L21() else D15();
  D15():
    deopt 43 [r28];
  L21():
    st fmla = r28;
    reformulate = ldf reformulate;
    check L22() else D16();
  D16():
    deopt 46 [];
  L22():
    p9 = prom<V +>{
      xnam2 = ld xnam;
      xnam3 = force? xnam2;
      checkMissing(xnam3);
      return xnam3;
    };
    r30 = dyn reformulate[, response](p9, "y");
    check L23() else D17();
  D17():
    deopt 50 [r30];
  L23():
    st fmla2 = r30;
    stopifnot = ldf stopifnot;
    check L24() else D18();
  D18():
    deopt 53 [];
  L24():
    p10 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      fmla = ld fmla;
      fmla1 = force? fmla;
      checkMissing(fmla1);
      fmla2 = ld fmla2;
      fmla3 = force? fmla2;
      checkMissing(fmla3);
      identical = ldf identical in base;
      r33 = dyn identical(fmla1, fmla3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r33);
    L2():
      r31 = dyn base2(<sym fmla>, <sym fmla2>);
      goto L0(r31);
    };
    r35 = dyn stopifnot(p10);
    check L25() else D19();
  D19():
    deopt 55 [r35];
  L25():
    popenv;
    return r35;
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
    r2 = dyn UseMethod("formula");
    goto L0(r2);
  L2():
    r = dyn base("formula");
    goto L0(r);
  }
}