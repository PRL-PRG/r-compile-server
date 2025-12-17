fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg options1:cls, reg w:*, reg w1:V, reg p:p(V +), reg r3:V, reg cat:cls, reg w2:*, reg w3:V, reg p1:p(V +), reg r5:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg x1:V, reg cat1:cls, reg i13:*, reg i14:V, reg p2:p(V +), reg r7:V, reg matrix:cls, reg p3:p(V +), reg r9:V, reg cat2:cls, reg r10:V, reg options2:cls, reg ow:*, reg ow1:V, reg p4:p(V +), reg r12:V, reg tail:cls, reg warnings:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg summary:cls, reg warnings1:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg warnings2:cls, reg r19:V, reg unique:cls, reg ww:*, reg ww1:V, reg p7:p(V +), reg r21:V, reg summary1:cls, reg ww2:*, reg ww3:V, reg p8:p(V +), reg r23:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg ww4:*, reg ww5:V, reg c2:L, reg ww7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r28:V, reg ww8:*, reg ww9:V, reg c3:L, reg ww11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r29:V, reg c4:cls, reg r30:V, reg ww12:*, reg ww13:V, reg c5:L, reg ww15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg ww18:V, reg r32:V, reg c6:cls, reg r33:V, reg __2:cls, reg r34:V, reg identical:cls, reg r35:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg uw:*, reg uw1:V, reg length:cls, reg r39:V, reg r40:V, reg p10:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg uw2:*, reg uw3:V, reg names:cls, reg r46:V, reg nchar:cls, reg r47:V, reg r48:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg sw:*, reg sw1:V, reg length1:cls, reg r52:V, reg r53:V, reg p12:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg sw2:*, reg sw3:V, reg attr:cls, reg r57:V, reg r58:V, reg p13:p(V +), reg r60:V, reg options3:cls, reg r61:V, reg r62:V, reg r63:V, reg s2:V, reg l2:I, reg i15:I, reg i16:I, reg i17:I, reg c7:L, reg x2:V, reg r64:V, reg s3:V, reg l3:I, reg i20:I, reg i21:I, reg i22:I, reg i23:I, reg c8:L, reg x3:V, reg matrix1:cls, reg x4:*, reg x5:V, reg p14:p(V +), reg n:*, reg n1:V, reg p15:p(V +), reg m:*, reg m1:V, reg p16:p(V +), reg r68:V, reg summary2:cls, reg warnings3:cls, reg r69:V, reg p17:p(V +), reg r71:V, reg options4:cls, reg op:*, reg op1:V, reg p18:p(V +), reg r73:V |
    mkenv;
    r = clos inner1246119658;
    st warnings = r;
    options = ldf options;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    r1 = dyn options("warn");
    check L9() else D1();
  D1():
    deopt 6 [r1];
  L9():
    st ow = r1;
    s = toForSeq(<int -1, 0, 1>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st w = x;
    options1 = ldf options;
    check L11() else D2();
  L10():
    options2 = ldf options;
    check L22() else D12();
  D2():
    deopt 11 [i2];
  D12():
    deopt 46 [];
  L11():
    p = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    r3 = dyn options1[warn](p);
    check L12() else D3();
  L22():
    p4 = prom<V +>{
      ow = ld ow;
      ow1 = force? ow;
      checkMissing(ow1);
      return ow1;
    };
    r12 = dyn options2(p4);
    check L23() else D13();
  D3():
    deopt 14 [i2, r3];
  D13():
    deopt 48 [r12];
  L12():
    cat = ldf cat;
    check L13() else D4();
  L23():
    tail = ldf tail;
    check L24() else D14();
  D4():
    deopt 16 [i2];
  D14():
    deopt 50 [];
  L13():
    p1 = prom<V +>{
      w2 = ld w;
      w3 = force? w2;
      checkMissing(w3);
      return w3;
    };
    r5 = dyn cat("\n warn =", p1, "\n");
    check L14() else D5();
  L24():
    p5 = prom<V +>{
      warnings = ldf warnings;
      r13 = dyn warnings();
      return r13;
    };
    r15 = dyn tail(p5, 2.0);
    check L25() else D15();
  D5():
    deopt 20 [i2, r5];
  D15():
    deopt 53 [r15];
  L14():
    s1 = toForSeq(<int 1, 2, 3>);
    l1 = length(s1);
    i5 = 0;
    goto L1(i2, i5);
  L25():
    summary = ldf summary;
    check L26() else D16();
  D16():
    deopt 55 [];
  L1(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L15() else L2();
  L26():
    p6 = prom<V +>{
      warnings1 = ldf warnings;
      r16 = dyn warnings1();
      return r16;
    };
    r18 = dyn summary(p6);
    check L27() else D17();
  D17():
    deopt 57 [r18];
  L2():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st i = x1;
    cat1 = ldf cat;
    check L16() else D6();
  L15():
    cat2 = ldf cat;
    check L20() else D10();
  L27():
    warnings2 = ldf warnings;
    check L28() else D18();
  D6():
    deopt 24 [i6, i8];
  D10():
    deopt 39 [i6];
  D18():
    deopt 59 [];
  L16():
    p2 = prom<V +>{
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      return i14;
    };
    r7 = dyn cat1(p2, "..\n");
    check L17() else D7();
  L20():
    r10 = dyn cat2("--=--=--\n");
    check L21() else D11();
  L28():
    r19 = dyn warnings2();
    check L29() else D19();
  D7():
    deopt 27 [i6, i8, r7];
  D11():
    deopt 41 [i6, r10];
  D19():
    deopt 60 [r19];
  L17():
    matrix = ldf matrix;
    check L18() else D8();
  L21():
    goto L0(i6);
  L29():
    st ww = r19;
    unique = ldf unique;
    check L30() else D20();
  D8():
    deopt 29 [i6, i8];
  D20():
    deopt 63 [];
  L18():
    p3 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    r9 = dyn matrix(p3, 3.0, 4.0);
    check L19() else D9();
  L30():
    p7 = prom<V +>{
      ww = ld ww;
      ww1 = force? ww;
      checkMissing(ww1);
      return ww1;
    };
    r21 = dyn unique(p7);
    check L31() else D21();
  D9():
    deopt 33 [i6, i8, r9];
  D21():
    deopt 65 [r21];
  L19():
    st m = r9;
    goto L1(i6, i8);
  L31():
    st uw = r21;
    summary1 = ldf summary;
    check L32() else D22();
  D22():
    deopt 68 [];
  L32():
    p8 = prom<V +>{
      ww2 = ld ww;
      ww3 = force? ww2;
      checkMissing(ww3);
      return ww3;
    };
    r23 = dyn summary1(p8);
    check L33() else D23();
  D23():
    deopt 70 [r23];
  L33():
    st sw = r23;
    stopifnot = ldf stopifnot;
    check L34() else D24();
  D24():
    deopt 73 [];
  L34():
    p9 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L6() else L7();
    L0(r25):
      return r25;
    L6():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L7():
      r24 = dyn base(<lang c(`[`(ww, 1.0), `[`(ww, 3.0))>, <lang `[`(ww, c(1.0, 3.0))>);
      goto L0(r24);
    L1(r27):
      ww12 = ld ww;
      ww13 = force? ww12;
      checkMissing(ww13);
      c5 = `is.object`(ww13);
      if c5 then L16() else L17(ww13);
    L8():
      ww4 = ld ww;
      ww5 = force? ww4;
      checkMissing(ww5);
      c2 = `is.object`(ww5);
      if c2 then L10() else L11(ww5);
    L9():
      r26 = dyn base1(<lang `[`(ww, 1.0)>, <lang `[`(ww, 3.0)>);
      goto L1(r26);
    L2(dx1):
      ww8 = ld ww;
      ww9 = force? ww8;
      checkMissing(ww9);
      c3 = `is.object`(ww9);
      if c3 then L13() else L14(ww9);
    L4(dx5):
      identical = ldf identical in base;
      r35 = dyn identical(r27, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r35);
    L10():
      dr = tryDispatchBuiltin.1("[", ww5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L12() else L11(dr);
    L11(ww7):
      __ = ldf `[` in base;
      r28 = dyn __(ww7, 1.0);
      goto L2(r28);
    L16():
      dr4 = tryDispatchBuiltin.1("[", ww13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L18() else L17(dr4);
    L17(ww15):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L19() else L20();
    L3(dx3):
      c4 = ldf c in base;
      r30 = dyn c4(dx1, dx3);
      goto L1(r30);
    L5(ww18, r32):
      __2 = ldf `[` in base;
      r34 = dyn __2(ww18, r32);
      goto L4(r34);
    L12():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    L13():
      dr2 = tryDispatchBuiltin.1("[", ww9);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L15() else L14(dr2);
    L14(ww11):
      __1 = ldf `[` in base;
      r29 = dyn __1(ww11, 3.0);
      goto L3(r29);
    L18():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx4);
    L19():
      c6 = ldf c in base;
      r33 = dyn c6(1.0, 3.0);
      goto L5(ww15, r33);
    L20():
      r31 = dyn base2(1.0, 3.0);
      goto L5(ww15, r31);
    L15():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    p10 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r38):
      r40 = `==`(r38, 1.0);
      return r40;
    L1():
      uw = ld uw;
      uw1 = force? uw;
      checkMissing(uw1);
      length = ldf length in base;
      r39 = dyn length(uw1);
      goto L0(r39);
    L2():
      r37 = dyn base3(<sym uw>);
      goto L0(r37);
    };
    p11 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r43):
      r48 = `>`(r43, 10.0);
      return r48;
    L2():
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r42 = dyn base4(<lang names(uw)>);
      goto L0(r42);
    L1(r45):
      nchar = ldf nchar in base;
      r47 = dyn nchar(r45, "chars", FALSE, NA_LGL);
      goto L0(r47);
    L4():
      uw2 = ld uw;
      uw3 = force? uw2;
      checkMissing(uw3);
      names = ldf names in base;
      r46 = dyn names(uw3);
      goto L1(r46);
    L5():
      r44 = dyn base5(<sym uw>);
      goto L1(r44);
    };
    p12 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r51):
      r53 = `==`(r51, 1.0);
      return r53;
    L1():
      sw = ld sw;
      sw1 = force? sw;
      checkMissing(sw1);
      length1 = ldf length in base;
      r52 = dyn length1(sw1);
      goto L0(r52);
    L2():
      r50 = dyn base6(<sym sw>);
      goto L0(r50);
    };
    p13 = prom<V +>{
      sym7 = ldf attr;
      base7 = ldf attr in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r56):
      r58 = `==`(r56, 3.0);
      return r58;
    L1():
      sw2 = ld sw;
      sw3 = force? sw2;
      checkMissing(sw3);
      attr = ldf attr in base;
      r57 = dyn attr(sw3, "counts");
      goto L0(r57);
    L2():
      r55 = dyn base7(<sym sw>, "counts");
      goto L0(r55);
    };
    r60 = dyn stopifnot(p9, p10, p11, p12, p13);
    check L35() else D25();
  D25():
    deopt 79 [r60];
  L35():
    options3 = ldf options;
    check L36() else D26();
  D26():
    deopt 81 [];
  L36():
    r61 = dyn options3[nwarnings](10000.0);
    check L37() else D27();
  D27():
    deopt 84 [r61];
  L37():
    st op = r61;
    r62 = `:`(1.0, 36.0);
    st x = r62;
    r63 = `:`(1.0, 13.0);
    s2 = toForSeq(r63);
    l2 = length(s2);
    i15 = 0;
    goto L4(i15);
  L4(i16):
    i17 = `+`.1(i16, 1);
    c7 = `<`.1(l2, i17);
    if c7 then L38() else L7();
  L7():
    x2 = `[[`(s2, i17, NULL, TRUE);
    st n = x2;
    r64 = `:`(1.0, 12.0);
    s3 = toForSeq(r64);
    l3 = length(s3);
    i20 = 0;
    goto L5(i17, i20);
  L38():
    summary2 = ldf summary;
    check L42() else D30();
  D30():
    deopt 113 [];
  L5(i21, i22):
    i23 = `+`.1(i22, 1);
    c8 = `<`.1(l3, i23);
    if c8 then L39() else L6();
  L42():
    p17 = prom<V +>{
      warnings3 = ldf warnings;
      r69 = dyn warnings3();
      return r69;
    };
    r71 = dyn summary2(p17);
    check L43() else D31();
  D31():
    deopt 115 [r71];
  L6():
    x3 = `[[`(s3, i23, NULL, TRUE);
    st m = x3;
    matrix1 = ldf matrix;
    check L40() else D28();
  L39():
    goto L4(i21);
  L43():
    options4 = ldf options;
    check L44() else D32();
  D28():
    deopt 100 [i21, i23];
  D32():
    deopt 117 [];
  L40():
    p14 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p15 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    p16 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r68 = dyn matrix1(p14, p15, p16);
    check L41() else D29();
  L44():
    p18 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r73 = dyn options4(p18);
    check L45() else D33();
  D29():
    deopt 104 [i21, i23, r68];
  D33():
    deopt 119 [r73];
  L41():
    st A = r68;
    goto L5(i21, i23);
  L45():
    popenv;
    return r73;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg structure:cls, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg baseenv:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg list:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg list1:cls, reg ddd1:dots?, reg r15:V, reg p3:p(V +), reg r17:V |
    mkenv;
    st `...` = ddd;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      ____ = ldf `%||%`;
      p = prom<V +>{
        sym = ldf baseenv;
        base = ldf baseenv in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r1):
        c = `is.object`(r1);
        if c then L4() else L5(r1);
      L2():
        baseenv = ldf baseenv in base;
        r2 = dyn baseenv();
        goto L0(r2);
      L3():
        r = dyn base();
        goto L0(r);
      L1(dx1):
        return dx1;
      L4():
        dr = tryDispatchBuiltin.1("[[", r1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(r4):
        __ = ldf `[[` in base;
        r5 = dyn __(r4, "last.warning");
        goto L1(r5);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      p1 = prom<V +>{
        sym1 = ldf list;
        base1 = ldf list in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r8):
        return r8;
      L1():
        list = ldf list in base;
        r9 = dyn list();
        goto L0(r9);
      L2():
        r7 = dyn base1();
        goto L0(r7);
      };
      r11 = dyn ____(p, p1);
      return r11;
    };
    p3 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      list1 = ldf list;
      ddd1 = ld `...`;
      r15 = dyn list1[`...`](ddd1);
      goto L0(r15);
    L2():
      r13 = dyn base2(<sym ...>);
      goto L0(r13);
    };
    r17 = dyn structure[, dots, class](p2, p3, "warnings");
    check L1() else D1();
  D1():
    deopt 7 [r17];
  L1():
    popenv;
    return r17;
  }
}