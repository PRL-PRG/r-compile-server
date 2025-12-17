fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg paste:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg coef:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r16:V, reg length:cls, reg r17:V, reg c1:L, reg cat1:cls, reg r18:V, reg print_default:cls, reg format:cls, reg coef1:cls, reg x7:*, reg x8:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg digits1:*, reg digits2:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg cat2:cls, reg r27:V, reg cat3:cls, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg x9:*, reg x10:V, reg invisible:cls, reg r31:V |
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
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p3 = prom<V +>{
      paste = ldf paste;
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
        r8 = dyn deparse(p1);
        return r8;
      };
      r10 = dyn paste[, sep, collapse](p2, "\n", "\n");
      return r10;
    };
    r12 = dyn cat[, , , sep]("\nCall:\n", p3, "\n\n", "");
    check L7() else D1();
  D1():
    deopt 7 [r12];
  L7():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L2(r14):
    c1 = `as.logical`(r14);
    if c1 then L13() else L3();
  L8():
    coef = ldf coef;
    check L10() else D2();
  L9():
    r13 = dyn base1(<lang coef(x)>);
    goto L2(r13);
  D2():
    deopt 11 [];
  L3():
    cat2 = ldf cat;
    check L19() else D9();
  L4():
    cat3 = ldf cat;
    check L21() else D11();
  L10():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r16 = dyn coef(p4);
    check L11() else D3();
  L13():
    cat1 = ldf cat;
    check L14() else D5();
  D3():
    deopt 13 [r16];
  D5():
    deopt 17 [];
  D9():
    deopt 29 [];
  D11():
    deopt 33 [];
  L11():
    length = ldf length in base;
    r17 = dyn length(r16);
    check L12() else D4();
  L14():
    r18 = dyn cat1("Coefficients:\n");
    check L15() else D6();
  L19():
    r27 = dyn cat2("No coefficients\n");
    check L20() else D10();
  L21():
    r28 = dyn cat3("\n");
    check L22() else D12();
  D4():
    deopt 15 [r17];
  D6():
    deopt 19 [r18];
  D10():
    deopt 31 [r27];
  D12():
    deopt 35 [r28];
  L12():
    goto L2(r17);
  L15():
    print_default = ldf `print.default`;
    check L16() else D7();
  L20():
    goto L4();
  L22():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D7():
    deopt 21 [];
  L5(r30):
    popenv;
    return r30;
  L16():
    p8 = prom<V +>{
      format = ldf format;
      p6 = prom<V +>{
        coef1 = ldf coef;
        p5 = prom<V +>{
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r20 = dyn coef1(p5);
        return r20;
      };
      p7 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r23 = dyn format[, digits](p6, p7);
      return r23;
    };
    r25 = dyn print_default[, `print.gap`, quote](p8, 2, FALSE);
    check L17() else D8();
  L23():
    x9 = ld x;
    check L25() else D13();
  L24():
    r29 = dyn base2(<sym x>);
    goto L5(r29);
  D8():
    deopt 27 [r25];
  D13():
    deopt 38 [x9];
  L17():
    goto L4();
  L25():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r31 = dyn invisible(x10);
    check L26() else D14();
  D14():
    deopt 41 [r31];
  L26():
    goto L5(r31);
  }
}