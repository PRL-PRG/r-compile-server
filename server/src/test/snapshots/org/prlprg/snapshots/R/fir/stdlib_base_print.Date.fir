fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner750459982;
    st `print.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner750459982(x, max, `...`) {
  (reg x:*, reg max:*, reg ddd:dots) -+> V { var x:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg max1:*, reg max2:V, reg c:V, reg c1:L, reg getOption:cls, reg r2:V, reg max3:*, reg max4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg max7:V, reg r5:V, reg x1:*, reg x2:V, reg length:cls, reg r6:V, reg r7:V, reg c2:L, reg print:cls, reg format:cls, reg x3:*, reg x4:V, reg c3:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg x9:V, reg r9:V, reg max8:*, reg max9:V, reg r10:I, reg __:cls, reg r11:V, reg p:p(V +), reg r13:V, reg p1:p(V +), reg max10:*, reg max11:V, reg r15:V, reg p2:p(V +), reg ddd1:dots?, reg r17:V, reg cat:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x10:*, reg x11:V, reg length1:cls, reg r20:V, reg max12:*, reg max13:V, reg r21:V, reg p3:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg x12:*, reg x13:V, reg length2:cls, reg r27:V, reg c4:L, reg print1:cls, reg format1:cls, reg x14:*, reg x15:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg max14:*, reg max15:V, reg p6:p(V +), reg ddd2:dots?, reg r32:V, reg cat1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg x16:*, reg x17:V, reg class:cls, reg r35:V, reg c5:L, reg r37:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r38:V, reg p7:p(V +), reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg x18:*, reg x19:V, reg invisible:cls, reg r43:V |
    mkenv;
    st x = x;
    max_isMissing = missing.0(max);
    if max_isMissing then L0(NULL) else L0(max);
  L0(max_orDefault):
    st max = max_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L13() else L2();
  L10():
    max1 = ld max;
    check L12() else D0();
  L11():
    r = dyn base(<sym max>);
    goto L1(r);
  D0():
    deopt 1 [max1];
  L2():
    goto L3();
  L3():
    max3 = ld max;
    check L17() else D3();
  L12():
    max2 = force? max1;
    checkMissing(max2);
    c = `==`(max2, NULL);
    goto L1(c);
  L13():
    getOption = ldf getOption;
    check L14() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [max3];
  L14():
    r2 = dyn getOption("max.print", 9999);
    check L15() else D2();
  L17():
    max4 = force? max3;
    checkMissing(max4);
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D2():
    deopt 8 [r2];
  L4(max7, r5):
    r7 = `<`(max7, r5);
    c2 = `as.logical`(r7);
    if c2 then L22() else L5();
  L15():
    st max = r2;
    goto L3();
  L18():
    x1 = ld x;
    check L20() else D4();
  L19():
    r4 = dyn base1(<sym x>);
    goto L4(max4, r4);
  D4():
    deopt 15 [max4, x1];
  L5():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L6():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L38() else L39();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r6 = dyn length(x2);
    check L21() else D5();
  L22():
    print = ldf print;
    check L23() else D6();
  D5():
    deopt 18 [max4, r6];
  D6():
    deopt 21 [];
  L7(r26):
    c4 = `as.logical`(r26);
    if c4 then L32() else L8();
  L9(r42):
    popenv;
    return r42;
  L21():
    goto L4(max4, r6);
  L23():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c3 = `is.object`(x4);
        if c3 then L2() else L3(x4);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", x4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(x6):
        sym2 = ldf seq_len;
        base2 = ldf seq_len in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L5() else L6();
      L1(x9, r9):
        __ = ldf `[` in base;
        r11 = dyn __(x9, r9);
        goto L0(r11);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        max8 = ld max;
        max9 = force? max8;
        checkMissing(max9);
        r10 = seq_len(max9);
        goto L1(x6, r10);
      L6():
        r8 = dyn base2(<sym max>);
        goto L1(x6, r8);
      };
      r13 = dyn format(p);
      return r13;
    };
    p2 = prom<V +>{
      max10 = ld max;
      max11 = force? max10;
      checkMissing(max11);
      r15 = `+`(max11, 1.0);
      return r15;
    };
    ddd1 = ld `...`;
    r17 = dyn print[, max, `...`](p1, p2, ddd1);
    check L24() else D7();
  L28():
    x12 = ld x;
    check L30() else D10();
  L29():
    r25 = dyn base4(<sym x>);
    goto L7(r25);
  L38():
    x18 = ld x;
    check L40() else D16();
  L39():
    r41 = dyn base6(<sym x>);
    goto L9(r41);
  D7():
    deopt 26 [r17];
  D10():
    deopt 35 [x12];
  D16():
    deopt 53 [x18];
  L8():
    cat1 = ldf cat;
    check L36() else D14();
  L24():
    cat = ldf cat;
    check L25() else D8();
  L30():
    x13 = force? x12;
    checkMissing(x13);
    length2 = ldf length in base;
    r27 = dyn length2(x13);
    check L31() else D11();
  L32():
    print1 = ldf print;
    check L33() else D12();
  L40():
    x19 = force? x18;
    checkMissing(x19);
    invisible = ldf invisible in base;
    r43 = dyn invisible(x19);
    check L41() else D17();
  D8():
    deopt 28 [];
  D11():
    deopt 38 [r27];
  D12():
    deopt 40 [];
  D14():
    deopt 47 [];
  D17():
    deopt 56 [r43];
  L25():
    p3 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      max12 = ld max;
      max13 = force? max12;
      checkMissing(max13);
      r21 = `-`(r19, max13);
      return r21;
    L1():
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      length1 = ldf length in base;
      r20 = dyn length1(x11);
      goto L0(r20);
    L2():
      r18 = dyn base3(<sym x>);
      goto L0(r18);
    };
    r23 = dyn cat(" [ reached 'max' / getOption(\"max.print\") -- omitted", p3, "entries ]\n");
    check L26() else D9();
  L31():
    goto L7(r27);
  L33():
    p5 = prom<V +>{
      format1 = ldf format;
      p4 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r29 = dyn format1(p4);
      return r29;
    };
    p6 = prom<V +>{
      max14 = ld max;
      max15 = force? max14;
      checkMissing(max15);
      return max15;
    };
    ddd2 = ld `...`;
    r32 = dyn print1[, max, `...`](p5, p6, ddd2);
    check L34() else D13();
  L36():
    p7 = prom<V +>{
      sym5 = ldf class;
      base5 = ldf class in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r34):
      c5 = `is.object`(r34);
      if c5 then L4() else L5(r34);
    L2():
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      class = ldf class in base;
      r35 = dyn class(x17);
      goto L0(r35);
    L3():
      r33 = dyn base5(<sym x>);
      goto L0(r33);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r34);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r37):
      __1 = ldf `[` in base;
      r38 = dyn __1(r37, 1);
      goto L1(r38);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r40 = dyn cat1(p7, "of length 0\n");
    check L37() else D15();
  L41():
    goto L9(r43);
  D9():
    deopt 32 [r23];
  D13():
    deopt 45 [r32];
  D15():
    deopt 50 [r40];
  L26():
    goto L6();
  L34():
    goto L6();
  L37():
    goto L6();
  }
}