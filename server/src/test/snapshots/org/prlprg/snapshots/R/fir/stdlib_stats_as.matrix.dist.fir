fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.matrix.dist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg matrix:cls, reg size:*, reg size1:V, reg p:p(V +), reg size2:*, reg size3:V, reg p1:p(V +), reg r5:V, reg size4:*, reg size5:V, reg r6:V, reg c:L, reg size6:*, reg size7:V, reg r7:V, reg r8:V, reg size8:*, reg size9:V, reg r9:V, reg sequence_default:cls, reg n__1:*, reg n__2:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg s_1:*, reg s_2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg df:*, reg df1:V, reg length:cls, reg r15:V, reg s_3:*, reg s_4:V, reg seq_int:cls, reg r16:V, reg p3:p(V +), reg size10:*, reg size11:V, reg p4:p(V +), reg r19:V, reg sequence_default1:cls, reg n__3:*, reg n__4:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg df2:*, reg df3:V, reg length1:cls, reg r25:V, reg r26:V, reg s_5:*, reg s_6:V, reg seq_int1:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg x3:*, reg x4:V, reg l:*, reg c1:L, reg x6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg x8:V, reg dx1:V, reg lo:*, reg lo1:V, reg ___:cls, reg r30:V, reg l3:*, reg c2:L, reg x10:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg x12:V, reg dx3:V, reg up:*, reg up1:V, reg ___1:cls, reg r31:V, reg ____:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg x14:*, reg x15:V, reg attr1:cls, reg r34:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg size12:*, reg size13:V, reg r38:I, reg p8:p(V +), reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg labels:*, reg labels1:V, reg labels2:*, reg labels3:V, reg list:cls, reg r43:V, reg l6:*, reg dimnames__:cls, reg r44:V, reg df4:*, reg df5:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st size = r1;
    matrix = ldf matrix;
    check L10() else D2();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>, "Size");
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 9 [];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "Size");
    check L9() else D1();
  L10():
    p = prom<V +>{
      size = ld size;
      size1 = force? size;
      checkMissing(size1);
      return size1;
    };
    p1 = prom<V +>{
      size2 = ld size;
      size3 = force? size2;
      checkMissing(size3);
      return size3;
    };
    r5 = dyn matrix(0.0, p, p1);
    check L11() else D3();
  D1():
    deopt 6 [r2];
  D3():
    deopt 13 [r5];
  L9():
    goto L0(r2);
  L11():
    st df = r5;
    size4 = ld size;
    check L12() else D4();
  D4():
    deopt 15 [size4];
  L12():
    size5 = force? size4;
    checkMissing(size5);
    r6 = `>`(size5, 1);
    c = `as.logical`(r6);
    if c then L13() else L1();
  L1():
    goto L4();
  L4():
    ____ = ldf `%||%`;
    check L30() else D14();
  L13():
    size6 = ld size;
    check L14() else D5();
  D5():
    deopt 19 [size6];
  D14():
    deopt 62 [];
  L14():
    size7 = force? size6;
    checkMissing(size7);
    r7 = `-`(size7, 1);
    r8 = `:`(r7, 1);
    st `n..1` = r8;
    size8 = ld size;
    check L15() else D6();
  L30():
    p7 = prom<V +>{
      sym5 = ldf attr;
      base5 = ldf attr in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      attr1 = ldf attr in base;
      r34 = dyn attr1(x15, "Labels");
      goto L0(r34);
    L2():
      r32 = dyn base5(<sym x>, "Labels");
      goto L0(r32);
    };
    p8 = prom<V +>{
      sym6 = ldf seq_len;
      base6 = ldf seq_len in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      size12 = ld size;
      size13 = force? size12;
      checkMissing(size13);
      r38 = seq_len(size13);
      goto L0(r38);
    L2():
      r36 = dyn base6(<sym size>);
      goto L0(r36);
    };
    r40 = dyn ____(p7, p8);
    check L31() else D15();
  D6():
    deopt 26 [size8];
  D15():
    deopt 65 [r40];
  L15():
    size9 = force? size8;
    checkMissing(size9);
    r9 = `+`(size9, 1);
    st `s.1` = r9;
    sequence_default = ldf `sequence.default`;
    check L16() else D7();
  L31():
    st labels = r40;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L32() else L33();
  D7():
    deopt 32 [];
  L5(r42):
    l6 = ld df;
    dimnames__ = ldf `dimnames<-`;
    check L37() else D19();
  L16():
    p2 = prom<V +>{
      n__1 = ld `n..1`;
      n__2 = force? n__1;
      checkMissing(n__2);
      return n__2;
    };
    p3 = prom<V +>{
      sym1 = ldf `seq.int`;
      base1 = ldf `seq.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r12):
      return r12;
    L2():
      s_1 = ld `s.1`;
      s_2 = force? s_1;
      checkMissing(s_2);
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r11 = dyn base1(<sym s.1>, <lang length(df)>, <sym s.1>);
      goto L0(r11);
    L1(r14):
      s_3 = ld `s.1`;
      s_4 = force? s_3;
      checkMissing(s_4);
      seq_int = ldf `seq.int` in base;
      r16 = dyn seq_int(s_2, r14, s_4);
      goto L0(r16);
    L4():
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      length = ldf length in base;
      r15 = dyn length(df1);
      goto L1(r15);
    L5():
      r13 = dyn base2(<sym df>);
      goto L1(r13);
    };
    p4 = prom<V +>{
      size10 = ld size;
      size11 = force? size10;
      checkMissing(size11);
      return size11;
    };
    r19 = dyn sequence_default[, from, by](p2, p3, p4);
    check L17() else D8();
  L32():
    labels = ld labels;
    check L34() else D16();
  L33():
    r41 = dyn base7(<sym labels>, <sym labels>);
    goto L5(r41);
  D8():
    deopt 38 [r19];
  D16():
    deopt 69 [labels];
  D19():
    deopt 76 [r42, l6, r42];
  L17():
    st up = r19;
    sequence_default1 = ldf `sequence.default`;
    check L18() else D9();
  L34():
    labels1 = force? labels;
    checkMissing(labels1);
    labels2 = ld labels;
    check L35() else D17();
  L37():
    r44 = dyn dimnames__(l6, NULL, r42);
    check L38() else D20();
  D9():
    deopt 41 [];
  D17():
    deopt 71 [labels2];
  D20():
    deopt 78 [r42, r44];
  L18():
    p5 = prom<V +>{
      n__3 = ld `n..1`;
      n__4 = force? n__3;
      checkMissing(n__4);
      return n__4;
    };
    p6 = prom<V +>{
      sym3 = ldf `seq.int`;
      base3 = ldf `seq.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r22):
      return r22;
    L2():
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r21 = dyn base3(2, <lang `+`(length(df), 1)>, <sym s.1>);
      goto L0(r21);
    L1(r24):
      r26 = `+`(r24, 1);
      s_5 = ld `s.1`;
      s_6 = force? s_5;
      checkMissing(s_6);
      seq_int1 = ldf `seq.int` in base;
      r27 = dyn seq_int1(2, r26, s_6);
      goto L0(r27);
    L4():
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      length1 = ldf length in base;
      r25 = dyn length1(df3);
      goto L1(r25);
    L5():
      r23 = dyn base4(<sym df>);
      goto L1(r23);
    };
    r29 = dyn sequence_default1[, from](p5, p6);
    check L19() else D10();
  L35():
    labels3 = force? labels2;
    checkMissing(labels3);
    list = ldf list in base;
    r43 = dyn list(labels1, labels3);
    check L36() else D18();
  L38():
    st df = r44;
    df4 = ld df;
    check L39() else D21();
  D10():
    deopt 45 [r29];
  D18():
    deopt 74 [r43];
  D21():
    deopt 80 [df4];
  L19():
    st lo = r29;
    x3 = ld x;
    check L20() else D11();
  L36():
    goto L5(r43);
  L39():
    df5 = force? df4;
    checkMissing(df5);
    popenv;
    return df5;
  D11():
    deopt 47 [x3];
  L20():
    x4 = force? x3;
    checkMissing(x4);
    l = ld df;
    c1 = `is.object`(l);
    if c1 then L21() else L22(x4, l);
  L2(x8, dx1):
    st df = dx1;
    l3 = ld df;
    c2 = `is.object`(l3);
    if c2 then L25() else L26(x8, l3);
  L21():
    dr = tryDispatchBuiltin.0("[<-", l, x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(x4, dr);
  L22(x6, l2):
    lo = ld lo;
    check L24() else D12();
  D12():
    deopt 50 [x6, l2, x4, lo];
  L3(x12, dx3):
    st df = dx3;
    goto L4();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(x4, dx);
  L24():
    lo1 = force? lo;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l2, x4, lo1);
    goto L2(x6, r30);
  L25():
    dr2 = tryDispatchBuiltin.0("[<-", l3, x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(x8, dr2);
  L26(x10, l5):
    up = ld up;
    check L28() else D13();
  D13():
    deopt 55 [x10, l5, x8, up];
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(x8, dx2);
  L28():
    up1 = force? up;
    ___1 = ldf `[<-` in base;
    r31 = dyn ___1(l5, x8, up1);
    goto L3(x10, r31);
  }
}