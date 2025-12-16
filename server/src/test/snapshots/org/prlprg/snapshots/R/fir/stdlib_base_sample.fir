fun main() {
  () -+> V { reg r:cls, reg r1:V, reg sample:cls, reg x:*, reg x1:V, reg p:p(V +), reg r3:V, reg sample1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r5:V, reg sample2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg sample3:cls, reg x4:*, reg x5:V, reg c1:L, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x8:*, reg x9:V, reg r11:V, reg __:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sample4:cls, reg x10:*, reg x11:V, reg c2:L, reg x13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg x14:*, reg x15:V, reg r15:V, reg __1:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg sample5:cls, reg x16:*, reg x17:V, reg c3:L, reg x19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg x20:*, reg x21:V, reg r19:V, reg __2:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg r23:cls, reg resample:cls, reg x22:*, reg x23:V, reg c4:L, reg x25:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg x26:*, reg x27:V, reg r24:V, reg __3:cls, reg r25:V, reg p6:p(V +), reg r27:V, reg resample1:cls, reg x28:*, reg x29:V, reg c5:L, reg x31:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg x32:*, reg x33:V, reg r28:V, reg __4:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg resample2:cls, reg x34:*, reg x35:V, reg c6:L, reg x37:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg x38:*, reg x39:V, reg r32:V, reg __5:cls, reg r33:V, reg p8:p(V +), reg r35:V, reg sample_int:cls, reg r36:V, reg sample_int1:cls, reg r37:V |
    mkenv;
    r = clos `inner-1097037473`;
    st sample = r;
    r1 = `:`(1.0, 12.0);
    st x = r1;
    sample = ldf sample;
    check L0() else D0();
  D0():
    deopt 9 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r3 = dyn sample(p);
    check L1() else D1();
  D1():
    deopt 11 [r3];
  L1():
    sample1 = ldf sample;
    check L2() else D2();
  D2():
    deopt 13 [];
  L2():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r5 = dyn sample1[, replace](p1, TRUE);
    check L3() else D3();
  D3():
    deopt 17 [r5];
  L3():
    sample2 = ldf sample;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c(0.0, 1.0);
      goto L0(r8);
    L2():
      r6 = dyn base(0.0, 1.0);
      goto L0(r6);
    };
    r10 = dyn sample2[, , replace](p2, 100.0, TRUE);
    check L5() else D5();
  D5():
    deopt 24 [r10];
  L5():
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    sample3 = ldf sample;
    check L6() else D6();
  D6():
    deopt 29 [];
  L6():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      c1 = `is.object`(x5);
      if c1 then L1() else L2(x5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x7):
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      r11 = `>`(x9, 8.0);
      __ = ldf `[` in base;
      r12 = dyn __(x7, r11);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn sample3(p3);
    check L7() else D7();
  D7():
    deopt 31 [r14];
  L7():
    sample4 = ldf sample;
    check L8() else D8();
  D8():
    deopt 33 [];
  L8():
    p4 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c2 = `is.object`(x11);
      if c2 then L1() else L2(x11);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x13):
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      r15 = `>`(x15, 9.0);
      __1 = ldf `[` in base;
      r16 = dyn __1(x13, r15);
      goto L0(r16);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r18 = dyn sample4(p4);
    check L9() else D9();
  D9():
    deopt 35 [r18];
  L9():
    sample5 = ldf sample;
    check L10() else D10();
  D10():
    deopt 37 [];
  L10():
    p5 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      c3 = `is.object`(x17);
      if c3 then L1() else L2(x17);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x17);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x19):
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      r19 = `>`(x21, 10.0);
      __2 = ldf `[` in base;
      r20 = dyn __2(x19, r19);
      goto L0(r20);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r22 = dyn sample5(p5);
    check L11() else D11();
  D11():
    deopt 39 [r22];
  L11():
    r23 = clos `inner-103057629`;
    st resample = r23;
    resample = ldf resample;
    check L12() else D12();
  D12():
    deopt 44 [];
  L12():
    p6 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      c4 = `is.object`(x23);
      if c4 then L1() else L2(x23);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x23);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x25):
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      r24 = `>`(x27, 8.0);
      __3 = ldf `[` in base;
      r25 = dyn __3(x25, r24);
      goto L0(r25);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r27 = dyn resample(p6);
    check L13() else D13();
  D13():
    deopt 46 [r27];
  L13():
    resample1 = ldf resample;
    check L14() else D14();
  D14():
    deopt 48 [];
  L14():
    p7 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      c5 = `is.object`(x29);
      if c5 then L1() else L2(x29);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x29);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x31):
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      r28 = `>`(x33, 9.0);
      __4 = ldf `[` in base;
      r29 = dyn __4(x31, r28);
      goto L0(r29);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r31 = dyn resample1(p7);
    check L15() else D15();
  D15():
    deopt 50 [r31];
  L15():
    resample2 = ldf resample;
    check L16() else D16();
  D16():
    deopt 52 [];
  L16():
    p8 = prom<V +>{
      x34 = ld x;
      x35 = force? x34;
      checkMissing(x35);
      c6 = `is.object`(x35);
      if c6 then L1() else L2(x35);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x35);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x37):
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      r32 = `>`(x39, 10.0);
      __5 = ldf `[` in base;
      r33 = dyn __5(x37, r32);
      goto L0(r33);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r35 = dyn resample2(p8);
    check L17() else D17();
  D17():
    deopt 54 [r35];
  L17():
    sample_int = ldf `sample.int`;
    check L18() else D18();
  D18():
    deopt 56 [];
  L18():
    r36 = dyn sample_int[, , replace](1.0E10, 12.0, TRUE);
    check L19() else D19();
  D19():
    deopt 61 [r36];
  L19():
    sample_int1 = ldf `sample.int`;
    check L20() else D20();
  D20():
    deopt 63 [];
  L20():
    r37 = dyn sample_int1(1.0E10, 12.0);
    check L21() else D21();
  D21():
    deopt 66 [r37];
  L21():
    popenv;
    return r37;
  }
}
fun `inner-1097037473`(x, size, replace, prob) {
  (reg x:*, reg size:*, reg replace:*, reg prob:*) -+> V { var x:*, var size:*, var replace:*, reg replace_isMissing:L, reg replace_orDefault:*, var prob:*, reg prob_isMissing:L, reg prob_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c14:L, reg r8:V, reg x5:*, reg x6:V, reg is_finite:cls, reg r9:V, reg c15:L, reg c16:V, reg c18:L, reg c20:V, reg x7:*, reg x8:V, reg r10:V, reg c21:L, reg c22:V, reg c24:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg c25:L, reg x9:*, reg x10:V, reg sample_int:cls, reg x12:*, reg x13:V, reg p:p(V +), reg size1:*, reg size2:V, reg p1:p(V +), reg replace1:*, reg replace2:V, reg p2:p(V +), reg prob1:*, reg prob2:V, reg p3:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg c26:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg x14:*, reg x15:V, reg length1:cls, reg r24:V, reg x16:*, reg x17:V, reg c27:L, reg x19:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sample_int1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg x20:*, reg x21:V, reg length2:cls, reg r28:V, reg p4:p(V +), reg size3:*, reg size4:V, reg p5:p(V +), reg replace3:*, reg replace4:V, reg p6:p(V +), reg prob3:*, reg prob4:V, reg p7:p(V +), reg r33:V, reg __:cls, reg r34:V |
    mkenv;
    st x = x;
    st size = size;
    replace_isMissing = missing.0(replace);
    if replace_isMissing then L0(FALSE) else L0(replace);
  L0(replace_orDefault):
    st replace = replace_orDefault;
    prob_isMissing = missing.0(prob);
    if prob_isMissing then L1(NULL) else L1(prob);
  L1(prob_orDefault):
    st prob = prob_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L21() else L3(c);
  L17():
    x1 = ld x;
    check L19() else D0();
  L18():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3(c2):
    c9 = `as.logical`(c2);
    if c9 then L27() else L5(c9);
  L19():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L20() else D1();
  L21():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D1():
    deopt 5 [r2];
  L4(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `&&`(c5, c6);
    goto L3(c7);
  L5(c11):
    c18 = `as.logical`(c11);
    if c18 then L33() else L7(c18);
  L20():
    goto L2(r2);
  L22():
    x3 = ld x;
    check L24() else D2();
  L23():
    r4 = dyn base1(<sym x>);
    goto L4(c, r4);
  L27():
    sym2 = ldf `is.finite`;
    base2 = ldf `is.finite` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  D2():
    deopt 10 [c, x3];
  L6(c14, r8):
    c15 = `as.logical`(r8);
    c16 = `&&`(c14, c15);
    goto L5(c16);
  L7(c20):
    c24 = `as.logical`(c20);
    if c24 then L36() else L8();
  L24():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(x4);
    check L25() else D3();
  L28():
    x5 = ld x;
    check L30() else D4();
  L29():
    r7 = dyn base2(<sym x>);
    goto L6(c9, r7);
  L33():
    x7 = ld x;
    check L34() else D6();
  D3():
    deopt 13 [c, r6];
  D4():
    deopt 17 [c9, x5];
  D6():
    deopt 22 [c18, x7];
  L8():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L25():
    goto L4(c, r6);
  L30():
    x6 = force? x5;
    checkMissing(x6);
    is_finite = ldf `is.finite` in base;
    r9 = dyn is_finite(x6);
    check L31() else D5();
  L34():
    x8 = force? x7;
    checkMissing(x8);
    r10 = `>=`(x8, 1.0);
    c21 = `as.logical`(r10);
    c22 = `&&`(c18, c21);
    goto L7(c22);
  L36():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  D5():
    deopt 20 [c9, r9];
  L9(r12):
    c25 = `as.logical`(r12);
    if c25 then L39() else L10();
  L12(r20):
    c26 = `as.logical`(r20);
    if c26 then L47() else L13();
  L31():
    goto L6(c9, r9);
  L37():
    missing = ldf missing in base;
    r13 = dyn missing(<sym size>);
    goto L9(r13);
  L38():
    r11 = dyn base3(<sym size>);
    goto L9(r11);
  L45():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym size>);
    goto L12(r21);
  L46():
    r19 = dyn base4(<sym size>);
    goto L12(r19);
  L10():
    goto L11();
  L11():
    sample_int = ldf `sample.int`;
    check L42() else D8();
  L13():
    goto L15();
  L15():
    x16 = ld x;
    check L53() else D12();
  L39():
    x9 = ld x;
    check L40() else D7();
  L47():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D7():
    deopt 30 [x9];
  D8():
    deopt 36 [];
  D12():
    deopt 54 [x16];
  L14(r23):
    st size = r23;
    goto L15();
  L40():
    x10 = force? x9;
    checkMissing(x10);
    st size = x10;
    goto L11();
  L42():
    p = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p1 = prom<V +>{
      size1 = ld size;
      size2 = force? size1;
      checkMissing(size2);
      return size2;
    };
    p2 = prom<V +>{
      replace1 = ld replace;
      replace2 = force? replace1;
      checkMissing(replace2);
      return replace2;
    };
    p3 = prom<V +>{
      prob1 = ld prob;
      prob2 = force? prob1;
      checkMissing(prob2);
      return prob2;
    };
    r18 = dyn sample_int(p, p1, p2, p3);
    check L43() else D9();
  L48():
    x14 = ld x;
    check L50() else D10();
  L49():
    r22 = dyn base5(<sym x>);
    goto L14(r22);
  L53():
    x17 = force? x16;
    checkMissing(x17);
    c27 = `is.object`(x17);
    if c27 then L54() else L55(x17);
  D9():
    deopt 41 [r18];
  D10():
    deopt 47 [x14];
  L16(dx1):
    popenv;
    return dx1;
  L43():
    popenv;
    return r18;
  L50():
    x15 = force? x14;
    checkMissing(x15);
    length1 = ldf length in base;
    r24 = dyn length1(x15);
    check L51() else D11();
  L54():
    dr = tryDispatchBuiltin.1("[", x17);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L56() else L55(dr);
  L55(x19):
    sample_int1 = ldf `sample.int`;
    check L57() else D13();
  D11():
    deopt 50 [r24];
  D13():
    deopt 57 [x19];
  L51():
    goto L14(r24);
  L56():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L57():
    p4 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      length2 = ldf length in base;
      r28 = dyn length2(x21);
      goto L0(r28);
    L2():
      r26 = dyn base6(<sym x>);
      goto L0(r26);
    };
    p5 = prom<V +>{
      size3 = ld size;
      size4 = force? size3;
      checkMissing(size4);
      return size4;
    };
    p6 = prom<V +>{
      replace3 = ld replace;
      replace4 = force? replace3;
      checkMissing(replace4);
      return replace4;
    };
    p7 = prom<V +>{
      prob3 = ld prob;
      prob4 = force? prob3;
      checkMissing(prob4);
      return prob4;
    };
    r33 = dyn sample_int1(p4, p5, p6, p7);
    check L58() else D14();
  D14():
    deopt 62 [x19, r33];
  L58():
    __ = ldf `[` in base;
    r34 = dyn __(x19, r33);
    goto L16(r34);
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sample_int:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x5:*, reg x6:V, reg length:cls, reg r2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    sample_int = ldf `sample.int`;
    check L5() else D1();
  D1():
    deopt 3 [x4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      length = ldf length in base;
      r2 = dyn length(x6);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    ddd1 = ld `...`;
    r4 = dyn sample_int[, `...`](p, ddd1);
    check L6() else D2();
  D2():
    deopt 6 [x4, r4];
  L6():
    __ = ldf `[` in base;
    r5 = dyn __(x4, r4);
    goto L0(r5);
  }
}