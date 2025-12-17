fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1988001061;
    st `print.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1988001061(x, tz, usetz, max, `...`) {
  (reg x:*, reg tz:*, reg usetz:*, reg max:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var usetz:*, reg usetz_isMissing:L, reg usetz_orDefault:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg max1:*, reg max2:V, reg c:V, reg c1:L, reg getOption:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c2:L, reg r7:cls, reg r8:cls, reg r9:cls, reg max3:*, reg max4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg max7:V, reg r11:V, reg x1:*, reg x2:V, reg length:cls, reg r12:V, reg r13:V, reg c3:L, reg print:cls, reg FORM:cls, reg x3:*, reg x4:V, reg c4:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg x9:V, reg r15:V, reg max8:*, reg max9:V, reg r16:I, reg __:cls, reg r17:V, reg p:p(V +), reg r19:V, reg p1:p(V +), reg max10:*, reg max11:V, reg r21:V, reg p2:p(V +), reg ddd1:dots?, reg r23:V, reg cat:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg x10:*, reg x11:V, reg length1:cls, reg r26:V, reg max12:*, reg max13:V, reg r27:V, reg p3:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg x12:*, reg x13:V, reg length2:cls, reg r33:V, reg c5:L, reg print1:cls, reg FORM1:cls, reg x14:*, reg x15:V, reg p4:p(V +), reg r35:V, reg p5:p(V +), reg max14:*, reg max15:V, reg p6:p(V +), reg ddd2:dots?, reg r38:V, reg cat1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg x16:*, reg x17:V, reg class:cls, reg r41:V, reg c6:L, reg r43:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r44:V, reg p7:p(V +), reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg x18:*, reg x19:V, reg invisible:cls, reg r49:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    usetz_isMissing = missing.0(usetz);
    if usetz_isMissing then L1(TRUE) else L1(usetz);
  L1(usetz_orDefault):
    st usetz = usetz_orDefault;
    max_isMissing = missing.0(max);
    if max_isMissing then L2(NULL) else L2(max);
  L2(max_orDefault):
    st max = max_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L18() else L4();
  L15():
    max1 = ld max;
    check L17() else D0();
  L16():
    r = dyn base(<sym max>);
    goto L3(r);
  D0():
    deopt 1 [max1];
  L4():
    goto L5();
  L5():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L17():
    max2 = force? max1;
    checkMissing(max2);
    c = `==`(max2, NULL);
    goto L3(c);
  L18():
    getOption = ldf getOption;
    check L19() else D1();
  D1():
    deopt 5 [];
  L6(r5):
    c2 = `as.logical`(r5);
    if c2 then L24() else L7();
  L19():
    r2 = dyn getOption("max.print", 9999);
    check L20() else D2();
  L22():
    missing = ldf missing in base;
    r6 = dyn missing(<sym tz>);
    goto L6(r6);
  L23():
    r4 = dyn base1(<sym tz>);
    goto L6(r4);
  D2():
    deopt 8 [r2];
  L7():
    r9 = clos inner2148457334;
    goto L8(r9);
  L8(r8):
    st FORM = r8;
    max3 = ld max;
    check L26() else D3();
  L20():
    st max = r2;
    goto L5();
  L24():
    r7 = clos inner2148457334;
    goto L8(r7);
  D3():
    deopt 20 [max3];
  L26():
    max4 = force? max3;
    checkMissing(max4);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L9(max7, r11):
    r13 = `<`(max7, r11);
    c3 = `as.logical`(r13);
    if c3 then L31() else L10();
  L27():
    x1 = ld x;
    check L29() else D4();
  L28():
    r10 = dyn base2(<sym x>);
    goto L9(max4, r10);
  D4():
    deopt 23 [max4, x1];
  L10():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L11():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L47() else L48();
  L29():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r12 = dyn length(x2);
    check L30() else D5();
  L31():
    print = ldf print;
    check L32() else D6();
  D5():
    deopt 26 [max4, r12];
  D6():
    deopt 29 [];
  L12(r32):
    c5 = `as.logical`(r32);
    if c5 then L41() else L13();
  L14(r48):
    popenv;
    return r48;
  L30():
    goto L9(max4, r12);
  L32():
    p1 = prom<V +>{
      FORM = ldf FORM;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c4 = `is.object`(x4);
        if c4 then L2() else L3(x4);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", x4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(x6):
        sym3 = ldf seq_len;
        base3 = ldf seq_len in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L5() else L6();
      L1(x9, r15):
        __ = ldf `[` in base;
        r17 = dyn __(x9, r15);
        goto L0(r17);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        max8 = ld max;
        max9 = force? max8;
        checkMissing(max9);
        r16 = seq_len(max9);
        goto L1(x6, r16);
      L6():
        r14 = dyn base3(<sym max>);
        goto L1(x6, r14);
      };
      r19 = dyn FORM(p);
      return r19;
    };
    p2 = prom<V +>{
      max10 = ld max;
      max11 = force? max10;
      checkMissing(max11);
      r21 = `+`(max11, 1.0);
      return r21;
    };
    ddd1 = ld `...`;
    r23 = dyn print[, max, `...`](p1, p2, ddd1);
    check L33() else D7();
  L37():
    x12 = ld x;
    check L39() else D10();
  L38():
    r31 = dyn base5(<sym x>);
    goto L12(r31);
  L47():
    x18 = ld x;
    check L49() else D16();
  L48():
    r47 = dyn base7(<sym x>);
    goto L14(r47);
  D7():
    deopt 34 [r23];
  D10():
    deopt 43 [x12];
  D16():
    deopt 61 [x18];
  L13():
    cat1 = ldf cat;
    check L45() else D14();
  L33():
    cat = ldf cat;
    check L34() else D8();
  L39():
    x13 = force? x12;
    checkMissing(x13);
    length2 = ldf length in base;
    r33 = dyn length2(x13);
    check L40() else D11();
  L41():
    print1 = ldf print;
    check L42() else D12();
  L49():
    x19 = force? x18;
    checkMissing(x19);
    invisible = ldf invisible in base;
    r49 = dyn invisible(x19);
    check L50() else D17();
  D8():
    deopt 36 [];
  D11():
    deopt 46 [r33];
  D12():
    deopt 48 [];
  D14():
    deopt 55 [];
  D17():
    deopt 64 [r49];
  L34():
    p3 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r25):
      max12 = ld max;
      max13 = force? max12;
      checkMissing(max13);
      r27 = `-`(r25, max13);
      return r27;
    L1():
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      length1 = ldf length in base;
      r26 = dyn length1(x11);
      goto L0(r26);
    L2():
      r24 = dyn base4(<sym x>);
      goto L0(r24);
    };
    r29 = dyn cat(" [ reached 'max' / getOption(\"max.print\") -- omitted", p3, "entries ]\n");
    check L35() else D9();
  L40():
    goto L12(r33);
  L42():
    p5 = prom<V +>{
      FORM1 = ldf FORM;
      p4 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r35 = dyn FORM1(p4);
      return r35;
    };
    p6 = prom<V +>{
      max14 = ld max;
      max15 = force? max14;
      checkMissing(max15);
      return max15;
    };
    ddd2 = ld `...`;
    r38 = dyn print1[, max, `...`](p5, p6, ddd2);
    check L43() else D13();
  L45():
    p7 = prom<V +>{
      sym6 = ldf class;
      base6 = ldf class in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r40):
      c6 = `is.object`(r40);
      if c6 then L4() else L5(r40);
    L2():
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      class = ldf class in base;
      r41 = dyn class(x17);
      goto L0(r41);
    L3():
      r39 = dyn base6(<sym x>);
      goto L0(r39);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r40);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r43):
      __1 = ldf `[` in base;
      r44 = dyn __1(r43, 1);
      goto L1(r44);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r46 = dyn cat1(p7, "of length 0\n");
    check L46() else D15();
  L50():
    goto L14(r49);
  D9():
    deopt 40 [r29];
  D13():
    deopt 53 [r38];
  D15():
    deopt 58 [r46];
  L35():
    goto L11();
  L43():
    goto L11();
  L46():
    goto L11();
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg format:cls, reg z1:*, reg z2:V, reg p:p(V +), reg usetz:*, reg usetz1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st z = z;
    format = ldf format;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      return z2;
    };
    p1 = prom<V +>{
      usetz = ld usetz;
      usetz1 = force? usetz;
      checkMissing(usetz1);
      return usetz1;
    };
    r2 = dyn format[, usetz](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}