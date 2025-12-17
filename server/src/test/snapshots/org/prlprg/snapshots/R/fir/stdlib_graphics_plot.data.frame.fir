fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg OrchardSprays:*, reg OrchardSprays1:V, reg c:L, reg OrchardSprays3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V, reg plot1:cls, reg OrchardSprays4:*, reg OrchardSprays5:V, reg c1:L, reg OrchardSprays7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg OrchardSprays10:V, reg r5:V, reg c2:cls, reg r6:V, reg __1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg plot2:cls, reg OrchardSprays11:*, reg OrchardSprays12:V, reg p2:p(V +), reg r11:V, reg plot3:cls, reg iris:*, reg iris1:V, reg p3:p(V +), reg r13:V, reg plot4:cls, reg iris2:*, reg iris3:V, reg c3:L, reg iris5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg plot5:cls, reg women:*, reg women1:V, reg p5:p(V +), reg r18:V |
    mkenv;
    r = clos inner2044426018;
    st `plot.data.frame` = r;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      OrchardSprays = ld OrchardSprays;
      OrchardSprays1 = force? OrchardSprays;
      checkMissing(OrchardSprays1);
      c = `is.object`(OrchardSprays1);
      if c then L1() else L2(OrchardSprays1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", OrchardSprays1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(OrchardSprays3):
      __ = ldf `[` in base;
      r1 = dyn __(OrchardSprays3, 1.0);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn plot[, method](p, "jitter");
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    plot1 = ldf plot;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      OrchardSprays4 = ld OrchardSprays;
      OrchardSprays5 = force? OrchardSprays4;
      checkMissing(OrchardSprays5);
      c1 = `is.object`(OrchardSprays5);
      if c1 then L2() else L3(OrchardSprays5);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", OrchardSprays5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(OrchardSprays7):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(OrchardSprays10, r5):
      __1 = ldf `[` in base;
      r7 = dyn __1(OrchardSprays10, r5);
      goto L0(r7);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      c2 = ldf c in base;
      r6 = dyn c2(4.0, 1.0);
      goto L1(OrchardSprays7, r6);
    L6():
      r4 = dyn base(4.0, 1.0);
      goto L1(OrchardSprays7, r4);
    };
    r9 = dyn plot1(p1);
    check L3() else D3();
  D3():
    deopt 12 [r9];
  L3():
    plot2 = ldf plot;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      OrchardSprays11 = ld OrchardSprays;
      OrchardSprays12 = force? OrchardSprays11;
      checkMissing(OrchardSprays12);
      return OrchardSprays12;
    };
    r11 = dyn plot2(p2);
    check L5() else D5();
  D5():
    deopt 16 [r11];
  L5():
    plot3 = ldf plot;
    check L6() else D6();
  D6():
    deopt 18 [];
  L6():
    p3 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      return iris1;
    };
    r13 = dyn plot3(p3);
    check L7() else D7();
  D7():
    deopt 20 [r13];
  L7():
    plot4 = ldf plot;
    check L8() else D8();
  D8():
    deopt 22 [];
  L8():
    p4 = prom<V +>{
      iris2 = ld iris;
      iris3 = force? iris2;
      checkMissing(iris3);
      c3 = `is.object`(iris3);
      if c3 then L1() else L2(iris3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", iris3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(iris5):
      __2 = ldf `[` in base;
      r14 = dyn __2(iris5, <int 5, 4>);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r16 = dyn plot4(p4);
    check L9() else D9();
  D9():
    deopt 24 [r16];
  L9():
    plot5 = ldf plot;
    check L10() else D10();
  D10():
    deopt 26 [];
  L10():
    p5 = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      return women1;
    };
    r18 = dyn plot5(p5);
    check L11() else D11();
  D11():
    deopt 28 [r18];
  L11():
    popenv;
    return r18;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg ncol:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r7:V, reg r8:V, reg c1:L, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg class:cls, reg r12:V, reg c3:L, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r15:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg c4:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg c5:L, reg stripchart:cls, reg x11:*, reg x12:V, reg p4:p(V +), reg ddd1:dots?, reg r23:V, reg plot:cls, reg x13:*, reg x14:V, reg p5:p(V +), reg ddd2:dots?, reg r25:V, reg ncol1:cls, reg x15:*, reg x16:V, reg p6:p(V +), reg r27:V, reg r28:V, reg c6:L, reg plot2:cls, reg x17:*, reg x18:V, reg p7:p(V +), reg ddd3:dots?, reg r30:V, reg pairs:cls, reg data_matrix:cls, reg x19:*, reg x20:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg ddd4:dots?, reg r34:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner2207324802;
    st plot2 = r;
    is_data_frame = ldf `is.data.frame`;
    check L6() else D0();
  D0():
    deopt 4 [];
  L6():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn is_data_frame(p);
    check L7() else D1();
  D1():
    deopt 6 [r2];
  L7():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L8() else L0();
  L0():
    goto L1();
  L1():
    ncol = ldf ncol;
    check L12() else D4();
  L8():
    stop = ldf stop;
    check L9() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L9():
    r4 = dyn stop("'plot.data.frame' applied to non data frame");
    check L10() else D3();
  L12():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn ncol(p1);
    check L13() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 17 [r7];
  L10():
    goto L1();
  L13():
    r8 = `==`(r7, 1.0);
    c1 = `as.logical`(r8);
    if c1 then L14() else L2();
  L2():
    ncol1 = ldf ncol;
    check L28() else D13();
  L14():
    x5 = ld x;
    check L15() else D6();
  D6():
    deopt 20 [x5];
  D13():
    deopt 42 [];
  L15():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L16() else L17(x6);
  L28():
    p6 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r27 = dyn ncol1(p6);
    check L29() else D14();
  D14():
    deopt 44 [r27];
  L3(dx1):
    st x1 = dx1;
    _in_ = ldf `%in%`;
    check L19() else D7();
  L16():
    dr = tryDispatchBuiltin.1("[[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(x8):
    __ = ldf `[[` in base;
    r9 = dyn __(x8, 1);
    goto L3(r9);
  L29():
    r28 = `==`(r27, 2.0);
    c6 = `as.logical`(r28);
    if c6 then L30() else L5();
  D7():
    deopt 27 [];
  L5():
    pairs = ldf pairs;
    check L34() else D17();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L19():
    p2 = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r11):
      c3 = `is.object`(r11);
      if c3 then L4() else L5(r11);
    L2():
      x9 = ld x1;
      x10 = force? x9;
      checkMissing(x10);
      class = ldf class in base;
      r12 = dyn class(x10);
      goto L0(r12);
    L3():
      r10 = dyn base(<sym x1>);
      goto L0(r10);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r14):
      __1 = ldf `[` in base;
      r15 = dyn __1(r14, 1);
      goto L1(r15);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c4 = ldf c in base;
      r19 = dyn c4("integer", "numeric");
      goto L0(r19);
    L2():
      r17 = dyn base1("integer", "numeric");
      goto L0(r17);
    };
    r21 = dyn _in_(p2, p3);
    check L20() else D8();
  L30():
    plot2 = ldf plot2;
    check L31() else D15();
  D8():
    deopt 30 [r21];
  D15():
    deopt 48 [];
  D17():
    deopt 53 [];
  L20():
    c5 = `as.logical`(r21);
    if c5 then L21() else L4();
  L31():
    p7 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    ddd3 = ld `...`;
    r30 = dyn plot2[, `...`](p7, ddd3);
    check L32() else D16();
  L34():
    p9 = prom<V +>{
      data_matrix = ldf `data.matrix`;
      p8 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r32 = dyn data_matrix(p8);
      return r32;
    };
    ddd4 = ld `...`;
    r34 = dyn pairs[, `...`](p9, ddd4);
    check L35() else D18();
  D16():
    deopt 51 [r30];
  D18():
    deopt 56 [r34];
  L4():
    plot = ldf plot;
    check L25() else D11();
  L21():
    stripchart = ldf stripchart;
    check L22() else D9();
  L32():
    popenv;
    return r30;
  L35():
    popenv;
    return r34;
  D9():
    deopt 32 [];
  D11():
    deopt 37 [];
  L22():
    p4 = prom<V +>{
      x11 = ld x1;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    ddd1 = ld `...`;
    r23 = dyn stripchart[, `...`](p4, ddd1);
    check L23() else D10();
  L25():
    p5 = prom<V +>{
      x13 = ld x1;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    ddd2 = ld `...`;
    r25 = dyn plot[, `...`](p5, ddd2);
    check L26() else D12();
  D10():
    deopt 35 [r23];
  D12():
    deopt 40 [r25];
  L23():
    popenv;
    return r23;
  L26():
    popenv;
    return r25;
  }
}
fun inner2207324802(x, xlab, ylab, `...`) {
  (reg x:*, reg xlab:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg names1:cls, reg r9:V, reg c1:L, reg r11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p1:p(V +), var `...`:dots?, reg plot:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r14:V, reg p2:p(V +), reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r16:V, reg p3:p(V +), reg xlab1:*, reg xlab2:V, reg p4:p(V +), reg ylab1:*, reg ylab2:V, reg p5:p(V +), reg ddd1:dots?, reg r20:V |
    mkenv;
    st x = x;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L0() else L1(xlab);
  L0():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `is.object`(r1);
      if c then L4() else L5(r1);
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r2 = dyn names(x2);
      goto L0(r2);
    L3():
      r = dyn base(<sym x>);
      goto L0(r);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r4):
      __ = ldf `[` in base;
      r5 = dyn __(r4, 1);
      goto L1(r5);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    goto L1(p);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2() else L3(ylab);
  L2():
    p1 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r8):
      c1 = `is.object`(r8);
      if c1 then L4() else L5(r8);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      names1 = ldf names in base;
      r9 = dyn names1(x4);
      goto L0(r9);
    L3():
      r7 = dyn base1(<sym x>);
      goto L0(r7);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r11):
      __1 = ldf `[` in base;
      r12 = dyn __1(r11, 2);
      goto L1(r12);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    goto L3(p1);
  L3(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    plot = ldf plot;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L1() else L2(x6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", x6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x8):
      __2 = ldf `[[` in base;
      r14 = dyn __2(x8, 1);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L1() else L2(x10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x12):
      __3 = ldf `[[` in base;
      r16 = dyn __3(x12, 2);
      goto L0(r16);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p4 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p5 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd1 = ld `...`;
    r20 = dyn plot[, , xlab, ylab, `...`](p2, p3, p4, p5, ddd1);
    check L5() else D1();
  D1():
    deopt 9 [r20];
  L5():
    popenv;
    return r20;
  }
}