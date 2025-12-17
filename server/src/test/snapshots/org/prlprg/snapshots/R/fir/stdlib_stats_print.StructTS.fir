fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.StructTS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg cat1:cls, reg r11:V, reg print_default:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg p3:p(V +), reg digits1:*, reg digits2:V, reg p4:p(V +), reg ddd1:dots?, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg x9:*, reg x10:V, reg invisible:cls, reg r18:V |
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
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      deparse = ldf deparse;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L1() else L2(x2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x4):
        r6 = `$`(x4, <sym call>);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r8 = dyn deparse[, `width.cutoff`](p1, 75);
      return r8;
    };
    r10 = dyn cat[, , , sep]("\nCall:", p2, "", "\n");
    check L4() else D1();
  D1():
    deopt 7 [r10];
  L4():
    cat1 = ldf cat;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
    r11 = dyn cat1("Variances:\n");
    check L6() else D3();
  D3():
    deopt 11 [r11];
  L6():
    print_default = ldf `print.default`;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r12 = `$`(x8, <sym coef>);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r15 = dyn print_default[, `print.gap`, digits, `...`](p3, 2, p4, ddd1);
    check L8() else D5();
  D5():
    deopt 20 [r15];
  L8():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(r17):
    popenv;
    return r17;
  L9():
    x9 = ld x;
    check L11() else D6();
  L10():
    r16 = dyn base1(<sym x>);
    goto L2(r16);
  D6():
    deopt 23 [x9];
  L11():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r18 = dyn invisible(x10);
    check L12() else D7();
  D7():
    deopt 26 [r18];
  L12():
    goto L2(r18);
  }
}