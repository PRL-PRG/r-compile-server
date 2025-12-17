fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg cat:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg class:cls, reg r8:V, reg c1:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg is_array:cls, reg r17:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg c7:L, reg r19:V, reg x7:*, reg x8:V, reg length1:cls, reg r20:V, reg r21:V, reg c8:L, reg c9:V, reg c11:L, reg cat1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg x9:*, reg x10:V, reg attr:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg x11:*, reg x12:V, reg unclass:cls, reg r29:V, reg l:*, reg attr__:cls, reg r30:V, reg print:cls, reg y:*, reg y1:V, reg p3:p(V +), reg digits1:*, reg digits2:V, reg p4:p(V +), reg ddd1:dots?, reg r33:V, reg cat2:cls, reg format:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg x13:*, reg x14:V, reg unclass1:cls, reg r36:V, reg p5:p(V +), reg digits3:*, reg digits4:V, reg p6:p(V +), reg r39:V, reg p7:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg x15:*, reg x16:V, reg attr1:cls, reg r43:V, reg p8:p(V +), reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg x17:*, reg x18:V, reg invisible:cls, reg r48:V |
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
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L2(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L15() else L3();
  L11():
    x1 = ld x;
    check L13() else D0();
  L12():
    r2 = dyn base(<sym x>);
    goto L2(r2);
  D0():
    deopt 2 [x1];
  L3():
    sym2 = ldf `is.array`;
    base2 = ldf `is.array` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L4():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L43() else L44();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L14() else D1();
  L15():
    cat = ldf cat;
    check L16() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [];
  L5(r16):
    c2 = `as.logical`(r16);
    if c2 then L6(c2) else L23();
  L10(r47):
    popenv;
    return r47;
  L14():
    goto L2(r4);
  L16():
    p1 = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      c1 = `is.object`(r7);
      if c1 then L4() else L5(r7);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      class = ldf class in base;
      r8 = dyn class(x4);
      goto L0(r8);
    L3():
      r6 = dyn base1(<sym x>);
      goto L0(r6);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r10):
      __ = ldf `[` in base;
      r11 = dyn __(r10, 1);
      goto L1(r11);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r13 = dyn cat(p1, "of length 0\n");
    check L17() else D3();
  L19():
    x5 = ld x;
    check L21() else D4();
  L20():
    r15 = dyn base2(<sym x>);
    goto L5(r15);
  L43():
    x17 = ld x;
    check L45() else D18();
  L44():
    r46 = dyn base8(<sym x>);
    goto L10(r46);
  D3():
    deopt 11 [r13];
  D4():
    deopt 14 [x5];
  D18():
    deopt 69 [x17];
  L6(c3):
    c11 = `as.logical`(c3);
    if c11 then L29() else L8();
  L17():
    goto L4();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    is_array = ldf `is.array` in base;
    r17 = dyn is_array(x6);
    check L22() else D5();
  L23():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L45():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r48 = dyn invisible(x18);
    check L46() else D19();
  D5():
    deopt 17 [r17];
  D19():
    deopt 72 [r48];
  L7(c7, r19):
    r21 = `>`(r19, 1);
    c8 = `as.logical`(r21);
    c9 = `||`(c7, c8);
    goto L6(c9);
  L8():
    cat2 = ldf cat;
    check L41() else D16();
  L22():
    goto L5(r17);
  L24():
    x7 = ld x;
    check L26() else D6();
  L25():
    r18 = dyn base3(<sym x>);
    goto L7(c2, r18);
  L29():
    cat1 = ldf cat;
    check L30() else D8();
  L46():
    goto L10(r48);
  D6():
    deopt 20 [c2, x7];
  D8():
    deopt 28 [];
  D16():
    deopt 58 [];
  L26():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r20 = dyn length1(x8);
    check L27() else D7();
  L30():
    p2 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr = ldf attr in base;
      r24 = dyn attr(x10, "units");
      goto L0(r24);
    L2():
      r22 = dyn base4(<sym x>, "units");
      goto L0(r22);
    };
    r26 = dyn cat1[, , , sep]("Time differences in ", p2, "\n", "");
    check L31() else D9();
  L41():
    p7 = prom<V +>{
      format = ldf format;
      p5 = prom<V +>{
        sym6 = ldf unclass;
        base6 = ldf unclass in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r35):
        return r35;
      L1():
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        unclass1 = ldf unclass in base;
        r36 = dyn unclass1(x14);
        goto L0(r36);
      L2():
        r34 = dyn base6(<sym x>);
        goto L0(r34);
      };
      p6 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r39 = dyn format[, digits](p5, p6);
      return r39;
    };
    p8 = prom<V +>{
      sym7 = ldf attr;
      base7 = ldf attr in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      attr1 = ldf attr in base;
      r43 = dyn attr1(x16, "units");
      goto L0(r43);
    L2():
      r41 = dyn base7(<sym x>, "units");
      goto L0(r41);
    };
    r45 = dyn cat2[, , , , , sep]("Time difference of ", p7, " ", p8, "\n", "");
    check L42() else D17();
  D7():
    deopt 23 [c2, r20];
  D9():
    deopt 34 [r26];
  D17():
    deopt 66 [r45];
  L27():
    goto L7(c2, r20);
  L31():
    sym5 = ldf unclass;
    base5 = ldf unclass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L32() else L33();
  L42():
    goto L4();
  L9(r28):
    st y = r28;
    l = ld y;
    attr__ = ldf `attr<-`;
    check L36() else D12();
  L32():
    x11 = ld x;
    check L34() else D10();
  L33():
    r27 = dyn base5(<sym x>);
    goto L9(r27);
  D10():
    deopt 37 [x11];
  D12():
    deopt 45 [NULL, l, NULL];
  L34():
    x12 = force? x11;
    checkMissing(x12);
    unclass = ldf unclass in base;
    r29 = dyn unclass(x12);
    check L35() else D11();
  L36():
    r30 = dyn attr__(l, NULL, "units", NULL);
    check L37() else D13();
  D11():
    deopt 40 [r29];
  D13():
    deopt 48 [NULL, r30];
  L35():
    goto L9(r29);
  L37():
    st y = r30;
    print = ldf print;
    check L38() else D14();
  D14():
    deopt 51 [];
  L38():
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p4 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r33 = dyn print[, digits, `...`](p3, p4, ddd1);
    check L39() else D15();
  D15():
    deopt 56 [r33];
  L39():
    goto L4();
  }
}