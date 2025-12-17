fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3323372643;
    st `print.pairwise.htest` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3323372643(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg cat1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg p2:p(V +), reg r11:V, reg format_pval:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p3:p(V +), reg digits1:*, reg digits2:V, reg p4:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r18:V, reg attributes:cls, reg r19:V, reg l:*, reg attributes__:cls, reg r20:V, reg print:cls, reg pp:*, reg pp1:V, reg p5:p(V +), reg ddd1:dots?, reg r22:V, reg cat2:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r23:V, reg p6:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg x21:*, reg x22:V, reg invisible:cls, reg r28:V |
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
      r3 = `-`(r2, 5);
      max = ldf max in base;
      r4 = dyn max(1, r3);
      goto L0(r4);
    L2():
      r = dyn base(1, <lang `-`(getOption("digits"), 5)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
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
      r6 = `$`(x4, <sym method>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn cat("\n\tPairwise comparisons using", p1, "\n\n");
    check L5() else D1();
  D1():
    deopt 5 [r8];
  L5():
    cat1 = ldf cat;
    check L6() else D2();
  D2():
    deopt 7 [];
  L6():
    p2 = prom<V +>{
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
      r9 = `$`(x8, <sym data.name>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r11 = dyn cat1("data: ", p2, "\n\n");
    check L7() else D3();
  D3():
    deopt 11 [r11];
  L7():
    format_pval = ldf `format.pval`;
    check L8() else D4();
  D4():
    deopt 13 [];
  L8():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r12 = `$`(x12, <sym p.value>);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r15 = dyn format_pval[, digits, `na.form`](p3, p4, "-");
    check L9() else D5();
  D5():
    deopt 19 [r15];
  L9():
    st pp = r15;
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r17):
    l = ld pp;
    attributes__ = ldf `attributes<-`;
    check L18() else D8();
  L10():
    x13 = ld x;
    check L12() else D6();
  L11():
    r16 = dyn base1(<lang `$`(x, p.value)>);
    goto L2(r16);
  D6():
    deopt 23 [x13];
  D8():
    deopt 29 [r17, l, r17];
  L12():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L14() else L15(x14);
  L18():
    r20 = dyn attributes__(l, NULL, r17);
    check L19() else D9();
  D9():
    deopt 31 [r17, r20];
  L13(dx7):
    attributes = ldf attributes in base;
    r19 = dyn attributes(dx7);
    check L17() else D7();
  L14():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L16() else L15(dr6);
  L15(x16):
    r18 = `$`(x16, <sym p.value>);
    goto L13(r18);
  L19():
    st pp = r20;
    print = ldf print;
    check L20() else D10();
  D7():
    deopt 27 [r19];
  D10():
    deopt 34 [];
  L16():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L17():
    goto L2(r19);
  L20():
    p5 = prom<V +>{
      pp = ld pp;
      pp1 = force? pp;
      checkMissing(pp1);
      return pp1;
    };
    ddd1 = ld `...`;
    r22 = dyn print[, quote, `...`](p5, FALSE, ddd1);
    check L21() else D11();
  D11():
    deopt 39 [r22];
  L21():
    cat2 = ldf cat;
    check L22() else D12();
  D12():
    deopt 41 [];
  L22():
    p6 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c4 = `is.object`(x18);
      if c4 then L1() else L2(x18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      r23 = `$`(x20, <sym p.adjust.method>);
      goto L0(r23);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r25 = dyn cat2("\nP value adjustment method:", p6, "\n");
    check L23() else D13();
  D13():
    deopt 45 [r25];
  L23():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L3(r27):
    popenv;
    return r27;
  L24():
    x21 = ld x;
    check L26() else D14();
  L25():
    r26 = dyn base2(<sym x>);
    goto L3(r26);
  D14():
    deopt 48 [x21];
  L26():
    x22 = force? x21;
    checkMissing(x22);
    invisible = ldf invisible in base;
    r28 = dyn invisible(x22);
    check L27() else D15();
  D15():
    deopt 51 [r28];
  L27():
    goto L3(r28);
  }
}