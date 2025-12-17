fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner353481685;
    st `print.object_size` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner353481685(x, quote, units, standard, digits, `...`) {
  (reg x:*, reg quote:*, reg units:*, reg standard:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, var standard:*, reg standard_isMissing:L, reg standard_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg format_object_size:cls, reg x1:*, reg x2:V, reg p:p(V +), reg units1:*, reg units2:V, reg p1:p(V +), reg standard1:*, reg standard2:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg r4:V, reg quote1:*, reg quote2:V, reg c:L, reg print_default:cls, reg y:*, reg y1:V, reg p4:p(V +), reg ddd1:dots?, reg r6:V, reg cat:cls, reg y2:*, reg y3:V, reg p5:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg invisible:cls, reg r12:V |
    mkenv;
    st x = x;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L0(FALSE) else L0(quote);
  L0(quote_orDefault):
    st quote = quote_orDefault;
    units_isMissing = missing.0(units);
    if units_isMissing then L1("b") else L1(units);
  L1(units_orDefault):
    st units = units_orDefault;
    standard_isMissing = missing.0(standard);
    if standard_isMissing then L2("auto") else L2(standard);
  L2(standard_orDefault):
    st standard = standard_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L3(1) else L3(digits);
  L3(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    format_object_size = ldf `format.object_size`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      units1 = ld units;
      units2 = force? units1;
      checkMissing(units2);
      return units2;
    };
    p2 = prom<V +>{
      standard1 = ld standard;
      standard2 = force? standard1;
      checkMissing(standard2);
      return standard2;
    };
    p3 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r4 = dyn format_object_size[, units, standard, digits](p, p1, p2, p3);
    check L8() else D1();
  D1():
    deopt 9 [r4];
  L8():
    st y = r4;
    quote1 = ld quote;
    check L9() else D2();
  D2():
    deopt 11 [quote1];
  L9():
    quote2 = force? quote1;
    checkMissing(quote2);
    c = `as.logical`(quote2);
    if c then L10() else L4();
  L4():
    cat = ldf cat;
    check L14() else D5();
  L5():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L10():
    print_default = ldf `print.default`;
    check L11() else D3();
  D3():
    deopt 14 [];
  D5():
    deopt 19 [];
  L6(r11):
    popenv;
    return r11;
  L11():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    ddd1 = ld `...`;
    r6 = dyn print_default[, `...`](p4, ddd1);
    check L12() else D4();
  L14():
    p5 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r9 = dyn cat[, , sep](p5, "\n", "");
    check L15() else D6();
  L16():
    x3 = ld x;
    check L18() else D7();
  L17():
    r10 = dyn base(<sym x>);
    goto L6(r10);
  D4():
    deopt 17 [r6];
  D6():
    deopt 24 [r9];
  D7():
    deopt 27 [x3];
  L12():
    goto L5();
  L15():
    goto L5();
  L18():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r12 = dyn invisible(x4);
    check L19() else D8();
  D8():
    deopt 30 [r12];
  L19():
    goto L6(r12);
  }
}