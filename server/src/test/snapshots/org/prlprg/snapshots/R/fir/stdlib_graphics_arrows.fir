fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg __1:cls, reg r4:V, reg r5:cls, reg r6:V, reg order:cls, reg x:*, reg x1:V, reg p:p(V +), reg y:*, reg y1:V, reg p1:p(V +), reg r9:V, reg x2:*, reg x3:V, reg c:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __2:cls, reg r10:V, reg y2:*, reg y3:V, reg c1:L, reg y5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:*, reg i3:V, reg __3:cls, reg r11:V, reg plot:cls, reg x6:*, reg x7:V, reg p2:p(V +), reg y6:*, reg y7:V, reg p3:p(V +), reg r14:V, reg seq:cls, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg x8:*, reg x9:V, reg length:cls, reg r17:V, reg r18:V, reg p4:p(V +), reg r20:V, reg arrows:cls, reg x10:*, reg x11:V, reg c2:L, reg x13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg s:*, reg s1:V, reg __4:cls, reg r21:V, reg p5:p(V +), reg y8:*, reg y9:V, reg c3:L, reg y11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg s2:*, reg s3:V, reg __5:cls, reg r23:V, reg p6:p(V +), reg x14:*, reg x15:V, reg c4:L, reg x17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg s4:*, reg s5:V, reg r25:V, reg __6:cls, reg r26:V, reg p7:p(V +), reg y12:*, reg y13:V, reg c5:L, reg y15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg s6:*, reg s7:V, reg r28:V, reg __7:cls, reg r29:V, reg p8:p(V +), reg p9:p(V +), reg r32:V, reg s8:*, reg s9:V, reg c6:L, reg s11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg s14:V, reg r34:V, reg s15:*, reg s16:V, reg length1:cls, reg r35:V, reg r36:V, reg __8:cls, reg r37:V, reg segments:cls, reg x18:*, reg x19:V, reg c7:L, reg x21:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg s17:*, reg s18:V, reg __9:cls, reg r38:V, reg p10:p(V +), reg y16:*, reg y17:V, reg c8:L, reg y19:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg s19:*, reg s20:V, reg __10:cls, reg r40:V, reg p11:p(V +), reg x22:*, reg x23:V, reg c9:L, reg x25:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg s21:*, reg s22:V, reg r42:V, reg __11:cls, reg r43:V, reg p12:p(V +), reg y20:*, reg y21:V, reg c10:L, reg y23:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg s23:*, reg s24:V, reg r45:V, reg __12:cls, reg r46:V, reg p13:p(V +), reg r48:V |
    mkenv;
    r = clos `inner-989463419`;
    st arrows = r;
    __ = ldf `::`;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    r1 = dyn __("stats", "runif");
    check L5() else D1();
  D1():
    deopt 7 [r1];
  L5():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2(12.0);
    check L6() else D2();
  D2():
    deopt 10 [r3];
  L6():
    st x = r3;
    __1 = ldf `::`;
    check L7() else D3();
  D3():
    deopt 13 [];
  L7():
    r4 = dyn __1("stats", "rnorm");
    check L8() else D4();
  D4():
    deopt 16 [r4];
  L8():
    checkFun.0(r4);
    r5 = r4 as cls;
    r6 = dyn r5(12.0);
    check L9() else D5();
  D5():
    deopt 19 [r6];
  L9():
    st y = r6;
    order = ldf order;
    check L10() else D6();
  D6():
    deopt 22 [];
  L10():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r9 = dyn order(p, p1);
    check L11() else D7();
  D7():
    deopt 25 [r9];
  L11():
    st i = r9;
    x2 = ld x;
    check L12() else D8();
  D8():
    deopt 27 [x2];
  L12():
    x3 = force? x2;
    checkMissing(x3);
    c = `is.object`(x3);
    if c then L13() else L14(x3);
  L0(dx1):
    st x = dx1;
    y2 = ld y;
    check L17() else D10();
  L13():
    dr = tryDispatchBuiltin.1("[", x3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x5):
    i = ld i;
    check L16() else D9();
  D9():
    deopt 29 [x5, i];
  D10():
    deopt 33 [y2];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L16():
    i1 = force? i;
    __2 = ldf `[` in base;
    r10 = dyn __2(x5, i1);
    goto L0(r10);
  L17():
    y3 = force? y2;
    checkMissing(y3);
    c1 = `is.object`(y3);
    if c1 then L18() else L19(y3);
  L1(dx3):
    st y = dx3;
    plot = ldf plot;
    check L22() else D12();
  L18():
    dr2 = tryDispatchBuiltin.1("[", y3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(y5):
    i2 = ld i;
    check L21() else D11();
  D11():
    deopt 35 [y5, i2];
  D12():
    deopt 40 [];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L21():
    i3 = force? i2;
    __3 = ldf `[` in base;
    r11 = dyn __3(y5, i3);
    goto L1(r11);
  L22():
    p2 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p3 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r14 = dyn plot[, , main](p2, p3, "arrows(.) and segments(.)");
    check L23() else D13();
  D13():
    deopt 45 [r14];
  L23():
    seq = ldf seq;
    check L24() else D14();
  D14():
    deopt 47 [];
  L24():
    p4 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r16):
      r18 = `-`(r16, 1.0);
      return r18;
    L1():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      length = ldf length in base;
      r17 = dyn length(x9);
      goto L0(r17);
    L2():
      r15 = dyn base(<sym x>);
      goto L0(r15);
    };
    r20 = dyn seq(p4);
    check L25() else D15();
  D15():
    deopt 49 [r20];
  L25():
    st s = r20;
    arrows = ldf arrows;
    check L26() else D16();
  D16():
    deopt 52 [];
  L26():
    p5 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c2 = `is.object`(x11);
      if c2 then L1() else L2(x11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x13):
      s = ld s;
      s1 = force? s;
      __4 = ldf `[` in base;
      r21 = dyn __4(x13, s1);
      goto L0(r21);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      c3 = `is.object`(y9);
      if c3 then L1() else L2(y9);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", y9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(y11):
      s2 = ld s;
      s3 = force? s2;
      __5 = ldf `[` in base;
      r23 = dyn __5(y11, s3);
      goto L0(r23);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      c4 = `is.object`(x15);
      if c4 then L1() else L2(x15);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x17):
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      r25 = `+`(s5, 1.0);
      __6 = ldf `[` in base;
      r26 = dyn __6(x17, r25);
      goto L0(r26);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p8 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      c5 = `is.object`(y13);
      if c5 then L1() else L2(y13);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", y13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(y15):
      s6 = ld s;
      s7 = force? s6;
      checkMissing(s7);
      r28 = `+`(s7, 1.0);
      __7 = ldf `[` in base;
      r29 = dyn __7(y15, r28);
      goto L0(r29);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p9 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r32 = dyn arrows[, , , , col](p5, p6, p7, p8, p9);
    check L27() else D17();
  D17():
    deopt 59 [r32];
  L27():
    s8 = ld s;
    check L28() else D18();
  D18():
    deopt 60 [s8];
  L28():
    s9 = force? s8;
    checkMissing(s9);
    c6 = `is.object`(s9);
    if c6 then L29() else L30(s9);
  L2(dx13):
    st s = dx13;
    segments = ldf segments;
    check L36() else D21();
  L29():
    dr12 = tryDispatchBuiltin.1("[", s9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L31() else L30(dr12);
  L30(s11):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  D21():
    deopt 72 [];
  L3(s14, r34):
    r36 = `-`(<missing>, r34);
    __8 = ldf `[` in base;
    r37 = dyn __8(s14, r36);
    goto L2(r37);
  L31():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L2(dx12);
  L32():
    s15 = ld s;
    check L34() else D19();
  L33():
    r33 = dyn base1(<sym s>);
    goto L3(s11, r33);
  L36():
    p10 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      c7 = `is.object`(x19);
      if c7 then L1() else L2(x19);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", x19);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x21):
      s17 = ld s;
      s18 = force? s17;
      __9 = ldf `[` in base;
      r38 = dyn __9(x21, s18);
      goto L0(r38);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p11 = prom<V +>{
      y16 = ld y;
      y17 = force? y16;
      checkMissing(y17);
      c8 = `is.object`(y17);
      if c8 then L1() else L2(y17);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", y17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(y19):
      s19 = ld s;
      s20 = force? s19;
      __10 = ldf `[` in base;
      r40 = dyn __10(y19, s20);
      goto L0(r40);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p12 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      c9 = `is.object`(x23);
      if c9 then L1() else L2(x23);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", x23);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x25):
      s21 = ld s;
      s22 = force? s21;
      checkMissing(s22);
      r42 = `+`(s22, 2.0);
      __11 = ldf `[` in base;
      r43 = dyn __11(x25, r42);
      goto L0(r43);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p13 = prom<V +>{
      y20 = ld y;
      y21 = force? y20;
      checkMissing(y21);
      c10 = `is.object`(y21);
      if c10 then L1() else L2(y21);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", y21);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(y23):
      s23 = ld s;
      s24 = force? s23;
      checkMissing(s24);
      r45 = `+`(s24, 2.0);
      __12 = ldf `[` in base;
      r46 = dyn __12(y23, r45);
      goto L0(r46);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r48 = dyn segments[, , , , col](p10, p11, p12, p13, "pink");
    check L37() else D22();
  D19():
    deopt 64 [s11, s15];
  D22():
    deopt 79 [r48];
  L34():
    s16 = force? s15;
    checkMissing(s16);
    length1 = ldf length in base;
    r35 = dyn length1(s16);
    check L35() else D20();
  L37():
    popenv;
    return r48;
  D20():
    deopt 67 [s11, r35];
  L35():
    goto L3(s11, r35);
  }
}
fun `inner-989463419`(x0, y0, x1, y1, length, angle, code, col, lty, lwd, `...`) {
  (reg x0:*, reg y0:*, reg x1:*, reg y1:*, reg length:*, reg angle:*, reg code:*, reg col:*, reg lty:*, reg lwd:*, reg ddd:dots) -+> V { var x0:*, var y0:*, var x1:*, reg x1_isMissing:L, reg x1_orDefault:*, reg x2:*, reg x3:V, reg p:p(V +), var y1:*, reg y1_isMissing:L, reg y1_orDefault:*, reg y2:*, reg y3:V, reg p1:p(V +), var length:*, reg length_isMissing:L, reg length_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var code:*, reg code_isMissing:L, reg code_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r2:V, reg p2:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par1:cls, reg r4:V, reg p3:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par2:cls, reg r6:V, reg p4:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg missing:cls, reg r10:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg c5:L, reg r12:V, reg missing1:cls, reg r13:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r14:V, reg length1:cls, reg length2:*, reg length3:V, reg p5:p(V +), reg r17:V, reg r18:V, reg c10:L, reg c11:V, reg length4:cls, reg angle1:*, reg angle2:V, reg p6:p(V +), reg r20:V, reg r21:V, reg c13:L, reg c14:V, reg c16:L, reg c17:V, reg length5:cls, reg code1:*, reg code2:V, reg p7:p(V +), reg r23:V, reg r24:V, reg c19:L, reg c20:V, reg c22:L, reg warning:cls, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg _External_graphics:cls, reg C_arrows:*, reg C_arrows1:V, reg p8:p(V +), reg x4:*, reg x5:V, reg p9:p(V +), reg y4:*, reg y5:V, reg p10:p(V +), reg x6:*, reg x7:V, reg p11:p(V +), reg y6:*, reg y7:V, reg p12:p(V +), reg length6:*, reg length7:V, reg p13:p(V +), reg angle3:*, reg angle4:V, reg p14:p(V +), reg code3:*, reg code4:V, reg p15:p(V +), reg col1:*, reg col2:V, reg p16:p(V +), reg lty1:*, reg lty2:V, reg p17:p(V +), reg lwd1:*, reg lwd2:V, reg p18:p(V +), reg ddd1:dots?, reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg invisible:cls, reg r43:V |
    mkenv;
    st x0 = x0;
    st y0 = y0;
    x1_isMissing = missing.0(x1);
    if x1_isMissing then L0() else L1(x1);
  L0():
    p = prom<V +>{
      x2 = ld x0;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    goto L1(p);
  L1(x1_orDefault):
    st x1 = x1_orDefault;
    y1_isMissing = missing.0(y1);
    if y1_isMissing then L2() else L3(y1);
  L2():
    p1 = prom<V +>{
      y2 = ld y0;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    goto L3(p1);
  L3(y1_orDefault):
    st y1 = y1_orDefault;
    length_isMissing = missing.0(length);
    if length_isMissing then L4(0.25) else L4(length);
  L4(length_orDefault):
    st length = length_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L5(30.0) else L5(angle);
  L5(angle_orDefault):
    st angle = angle_orDefault;
    code_isMissing = missing.0(code);
    if code_isMissing then L6(2.0) else L6(code);
  L6(code_orDefault):
    st code = code_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L7() else L8(col);
  L7():
    p2 = prom<V +>{
      par = ldf par;
      r2 = dyn par("fg");
      return r2;
    };
    goto L8(p2);
  L8(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L9() else L10(lty);
  L9():
    p3 = prom<V +>{
      par1 = ldf par;
      r4 = dyn par1("lty");
      return r4;
    };
    goto L10(p3);
  L10(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L11() else L12(lwd);
  L11():
    p4 = prom<V +>{
      par2 = ldf par;
      r6 = dyn par2("lwd");
      return r6;
    };
    goto L12(p4);
  L12(lwd_orDefault):
    st lwd = lwd_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L13(r9):
    c = `as.logical`(r9);
    if c then L26() else L14(c);
  L24():
    missing = ldf missing in base;
    r10 = dyn missing(<sym x1>);
    goto L13(r10);
  L25():
    r8 = dyn base(<sym x1>);
    goto L13(r8);
  L14(c2):
    c9 = `as.logical`(c2);
    if c9 then L30() else L16();
  L26():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L15(c5, r12):
    c6 = `as.logical`(r12);
    c7 = `&&`(c5, c6);
    goto L14(c7);
  L16():
    goto L17();
  L17():
    length1 = ldf length;
    check L34() else D2();
  L27():
    missing1 = ldf missing in base;
    r13 = dyn missing1(<sym y1>);
    goto L15(c, r13);
  L28():
    r11 = dyn base1(<sym y1>);
    goto L15(c, r11);
  L30():
    stop = ldf stop;
    check L31() else D0();
  D0():
    deopt 8 [];
  D2():
    deopt 14 [];
  L31():
    r14 = dyn stop("one of 'x1' and 'y1' must be given");
    check L32() else D1();
  L34():
    p5 = prom<V +>{
      length2 = ld length;
      length3 = force? length2;
      checkMissing(length3);
      return length3;
    };
    r17 = dyn length1(p5);
    check L35() else D3();
  D1():
    deopt 10 [r14];
  D3():
    deopt 16 [r17];
  L32():
    goto L17();
  L35():
    r18 = `>`(r17, 1.0);
    c10 = `as.logical`(r18);
    if c10 then L18(c10) else L36();
  L18(c11):
    c16 = `as.logical`(c11);
    if c16 then L19(c16) else L40();
  L36():
    length4 = ldf length;
    check L37() else D4();
  D4():
    deopt 20 [c10];
  L19(c17):
    c22 = `as.logical`(c17);
    if c22 then L44() else L20();
  L37():
    p6 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      return angle2;
    };
    r20 = dyn length4(p6);
    check L38() else D5();
  L40():
    length5 = ldf length;
    check L41() else D6();
  D5():
    deopt 22 [c10, r20];
  D6():
    deopt 27 [c16];
  L20():
    goto L21();
  L21():
    sym2 = ldf `.External.graphics`;
    base2 = ldf `.External.graphics` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L38():
    r21 = `>`(r20, 1.0);
    c13 = `as.logical`(r21);
    c14 = `||`(c10, c13);
    goto L18(c14);
  L41():
    p7 = prom<V +>{
      code1 = ld code;
      code2 = force? code1;
      checkMissing(code2);
      return code2;
    };
    r23 = dyn length5(p7);
    check L42() else D7();
  L44():
    warning = ldf warning;
    check L45() else D8();
  D7():
    deopt 29 [c16, r23];
  D8():
    deopt 34 [];
  L22():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L42():
    r24 = `>`(r23, 1.0);
    c19 = `as.logical`(r24);
    c20 = `||`(c16, c19);
    goto L19(c20);
  L45():
    r25 = dyn warning("'length', 'angle', or 'code' greater than length 1; values after the first are ignored");
    check L46() else D9();
  L48():
    _External_graphics = ldf `.External.graphics`;
    check L50() else D10();
  L49():
    r27 = dyn base2[, , , , , length, angle, code, col, lty, lwd, ](<sym C_arrows>, <sym x0>, <sym y0>, <sym x1>, <sym y1>, <sym length>, <sym angle>, <sym code>, <sym col>, <sym lty>, <sym lwd>, <sym ...>);
    goto L22();
  D9():
    deopt 36 [r25];
  D10():
    deopt 41 [];
  L23(r42):
    popenv;
    return r42;
  L46():
    goto L21();
  L50():
    p8 = prom<V +>{
      C_arrows = ld C_arrows;
      C_arrows1 = force? C_arrows;
      checkMissing(C_arrows1);
      return C_arrows1;
    };
    p9 = prom<V +>{
      x4 = ld x0;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p10 = prom<V +>{
      y4 = ld y0;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p11 = prom<V +>{
      x6 = ld x1;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p12 = prom<V +>{
      y6 = ld y1;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p13 = prom<V +>{
      length6 = ld length;
      length7 = force? length6;
      checkMissing(length7);
      return length7;
    };
    p14 = prom<V +>{
      angle3 = ld angle;
      angle4 = force? angle3;
      checkMissing(angle4);
      return angle4;
    };
    p15 = prom<V +>{
      code3 = ld code;
      code4 = force? code3;
      checkMissing(code4);
      return code4;
    };
    p16 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p17 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p18 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    ddd1 = ld `...`;
    r40 = dyn _External_graphics[, , , , , length, angle, code, col, lty, lwd, `...`](p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, ddd1);
    check L51() else D11();
  L52():
    invisible = ldf invisible in base;
    r43 = dyn invisible();
    check L54() else D12();
  L53():
    r41 = dyn base3();
    goto L23(r41);
  D11():
    deopt 60 [r40];
  D12():
    deopt 64 [r43];
  L51():
    goto L22();
  L54():
    goto L23(r43);
  }
}