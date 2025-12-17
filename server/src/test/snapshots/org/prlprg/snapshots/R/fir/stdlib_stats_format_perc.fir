fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3028732884;
    st format_perc = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3028732884(x, digits, probability, `use.fC`, `...`) {
  (reg x:*, reg digits:*, reg probability:*, reg use_fC:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg max:cls, reg r3:V, reg p:p(V +), var probability:*, reg probability_isMissing:L, reg probability_orDefault:*, var `use.fC`:*, reg use_fC_isMissing:L, reg use_fC_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg length:cls, reg r7:V, reg r8:V, reg p1:p(V +), var `...`:dots?, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg length1:cls, reg r12:V, reg c:L, reg probability1:*, reg probability2:V, reg c1:L, reg x5:*, reg x6:V, reg r13:V, reg paste0:cls, reg use_fC1:*, reg use_fC2:V, reg c2:L, reg formatC:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg r17:V, reg format:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg digits3:*, reg digits4:V, reg p5:p(V +), reg ddd1:dots?, reg r20:V, reg p6:p(V +), reg r22:V, reg l:*, reg c3:L, reg r24:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:S, reg l5:*, reg r33:S, reg r34:V, reg x11:*, reg x12:V, reg is_na:cls, reg r35:V, reg ___:cls, reg r36:V, reg ans:*, reg ans1:V, reg character:cls, reg r37:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      max = ldf max in base;
      r3 = dyn max(2, r2);
      goto L0(r3);
    L2():
      r = dyn base(2, <lang getOption("digits")>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    probability_isMissing = missing.0(probability);
    if probability_isMissing then L2(TRUE) else L2(probability);
  L2(probability_orDefault):
    st probability = probability_orDefault;
    use_fC_isMissing = missing.0(use_fC);
    if use_fC_isMissing then L3() else L4(use_fC);
  L3():
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      r8 = `<`(r6, 100.0);
      return r8;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r7 = dyn length(x2);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym x>);
      goto L0(r5);
    };
    goto L4(p1);
  L4(use_fC_orDefault):
    st `use.fC` = use_fC_orDefault;
    st `...` = ddd;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L5(r11):
    c = `as.logical`(r11);
    if c then L15() else L6();
  L11():
    x3 = ld x;
    check L13() else D0();
  L12():
    r10 = dyn base2(<sym x>);
    goto L5(r10);
  D0():
    deopt 2 [x3];
  L6():
    character = ldf character;
    check L31() else D9();
  L13():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r12 = dyn length1(x4);
    check L14() else D1();
  L15():
    probability1 = ld probability;
    check L16() else D2();
  D1():
    deopt 5 [r12];
  D2():
    deopt 6 [probability1];
  D9():
    deopt 35 [];
  L14():
    goto L5(r12);
  L16():
    probability2 = force? probability1;
    checkMissing(probability2);
    c1 = `as.logical`(probability2);
    if c1 then L17() else L7();
  L31():
    r37 = dyn character(0.0);
    check L32() else D10();
  D10():
    deopt 37 [r37];
  L7():
    goto L8();
  L8():
    paste0 = ldf paste0;
    check L20() else D4();
  L17():
    x5 = ld x;
    check L18() else D3();
  L32():
    popenv;
    return r37;
  D3():
    deopt 9 [100.0, x5];
  D4():
    deopt 16 [];
  L18():
    x6 = force? x5;
    checkMissing(x6);
    r13 = `*`(100.0, x6);
    st x = r13;
    goto L8();
  L20():
    p6 = prom<V +>{
      use_fC1 = ld `use.fC`;
      use_fC2 = force? use_fC1;
      checkMissing(use_fC2);
      c2 = `as.logical`(use_fC2);
      if c2 then L1() else L0();
    L0():
      format = ldf format;
      p4 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      p5 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      ddd1 = ld `...`;
      r20 = dyn format[, trim, digits, `...`](p4, TRUE, p5, ddd1);
      return r20;
    L1():
      formatC = ldf formatC;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p3 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r17 = dyn formatC[, format, width, digits](p2, "fg", 1.0, p3);
      return r17;
    };
    r22 = dyn paste0(p6, "%");
    check L21() else D5();
  D5():
    deopt 19 [r22];
  L21():
    st ans = r22;
    l = ld ans;
    c3 = `is.object`(l);
    if c3 then L22() else L23("", l);
  L9(dx1):
    st ans = dx1;
    ans = ld ans;
    check L29() else D8();
  L22():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23("", dr);
  L23(r24, l2):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D8():
    deopt 32 [ans];
  L10(r32, l5, r33, r34):
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l5, r33, r34);
    goto L9(r36);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L25():
    x11 = ld x;
    check L27() else D6();
  L26():
    r31 = dyn base3(<sym x>);
    goto L10(r24, l2, "", r31);
  L29():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D6():
    deopt 26 [r24, l2, "", x11];
  L27():
    x12 = force? x11;
    checkMissing(x12);
    is_na = ldf `is.na` in base;
    r35 = dyn is_na(x12);
    check L28() else D7();
  D7():
    deopt 29 [r24, l2, "", r35];
  L28():
    goto L10(r24, l2, "", r35);
  }
}