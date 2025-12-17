fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.medpolish` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg cat1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p2:p(V +), reg r7:V, reg print:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg p3:p(V +), reg digits1:*, reg digits2:V, reg p4:p(V +), reg ddd1:dots?, reg r11:V, reg cat2:cls, reg r12:V, reg print1:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p5:p(V +), reg digits3:*, reg digits4:V, reg p6:p(V +), reg ddd2:dots?, reg r16:V, reg cat3:cls, reg r17:V, reg print2:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r18:V, reg p7:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg digits5:*, reg digits6:V, reg r22:V, reg max:cls, reg r23:V, reg p8:p(V +), reg ddd3:dots?, reg r25:V, reg cat4:cls, reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg x21:*, reg x22:V, reg invisible:cls, reg r29:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
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
      r2 = `$`(x4, <sym name>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn cat[, , , sep]("\nMedian Polish Results (Dataset: \"", p1, "\")\n", "");
    check L4() else D1();
  D1():
    deopt 7 [r4];
  L4():
    cat1 = ldf cat;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
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
      r5 = `$`(x8, <sym overall>);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r7 = dyn cat1[, , , sep]("\nOverall: ", p2, "\n\nRow Effects:\n", "");
    check L6() else D3();
  D3():
    deopt 15 [r7];
  L6():
    print = ldf print;
    check L7() else D4();
  D4():
    deopt 17 [];
  L7():
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
      r8 = `$`(x12, <sym row>);
      goto L0(r8);
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
    ddd1 = ld `...`;
    r11 = dyn print[, digits, `...`](p3, p4, ddd1);
    check L8() else D5();
  D5():
    deopt 22 [r11];
  L8():
    cat2 = ldf cat;
    check L9() else D6();
  D6():
    deopt 24 [];
  L9():
    r12 = dyn cat2("\nColumn Effects:\n");
    check L10() else D7();
  D7():
    deopt 26 [r12];
  L10():
    print1 = ldf print;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    p5 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r13 = `$`(x16, <sym col>);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd2 = ld `...`;
    r16 = dyn print1[, digits, `...`](p5, p6, ddd2);
    check L12() else D9();
  D9():
    deopt 33 [r16];
  L12():
    cat3 = ldf cat;
    check L13() else D10();
  D10():
    deopt 35 [];
  L13():
    r17 = dyn cat3("\nResiduals:\n");
    check L14() else D11();
  D11():
    deopt 37 [r17];
  L14():
    print2 = ldf print;
    check L15() else D12();
  D12():
    deopt 39 [];
  L15():
    p7 = prom<V +>{
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
      r18 = `$`(x20, <sym residuals>);
      goto L0(r18);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p8 = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r21):
      return r21;
    L1():
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      r22 = `-`(digits6, 2);
      max = ldf max in base;
      r23 = dyn max(2, r22);
      goto L0(r23);
    L2():
      r20 = dyn base(2, <lang `-`(digits, 2)>);
      goto L0(r20);
    };
    ddd3 = ld `...`;
    r25 = dyn print2[, digits, `...`](p7, p8, ddd3);
    check L16() else D13();
  D13():
    deopt 44 [r25];
  L16():
    cat4 = ldf cat;
    check L17() else D14();
  D14():
    deopt 46 [];
  L17():
    r26 = dyn cat4("\n");
    check L18() else D15();
  D15():
    deopt 48 [r26];
  L18():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L2(r28):
    popenv;
    return r28;
  L19():
    x21 = ld x;
    check L21() else D16();
  L20():
    r27 = dyn base1(<sym x>);
    goto L2(r27);
  D16():
    deopt 51 [x21];
  L21():
    x22 = force? x21;
    checkMissing(x22);
    invisible = ldf invisible in base;
    r29 = dyn invisible(x22);
    check L22() else D17();
  D17():
    deopt 54 [r29];
  L22():
    goto L2(r29);
  }
}