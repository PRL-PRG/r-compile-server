fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st aspell_inspect_context = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg split:cls, reg x1:*, reg x2:V, reg p:p(V +), reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg r3:V, reg Map:cls, reg r4:cls, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x7:*, reg x8:V, reg names:cls, reg r8:V, reg p3:p(V +), reg x9:*, reg x10:V, reg p4:p(V +), reg r11:V, reg data_frame:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p5:p(V +), reg y:*, reg y1:V, reg p6:p(V +), reg r14:V, reg p7:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg y2:*, reg y3:V, reg length:cls, reg r19:V, reg r20:V, reg c1:L, reg list2DF:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg character:cls, reg r25:V, reg list:cls, reg r26:V, reg rep_int:cls, reg r27:V, reg p8:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg c2:cls, reg r33:V, reg l:*, reg names__:cls, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg c3:cls, reg r37:V, reg l1:*, reg class__:cls, reg r38:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    split = ldf split;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c = `is.object`(x4);
      if c then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      r1 = `$`(x6, <sym File>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn split(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r3];
  L6():
    st x = r3;
    Map = ldf Map;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p2 = prom<V +>{
      r4 = clos inner3158359806;
      return r4;
    };
    p3 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      names = ldf names in base;
      r8 = dyn names(x8);
      goto L0(r8);
    L2():
      r6 = dyn base(<sym x>);
      goto L0(r6);
    };
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r11 = dyn Map(p2, p3, p4);
    check L8() else D3();
  D3():
    deopt 11 [r11];
  L8():
    st y = r11;
    data_frame = ldf `data.frame`;
    check L9() else D4();
  D4():
    deopt 14 [];
  L9():
    p7 = prom<V +>{
      do_call = ldf `do.call`;
      p5 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p6 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r14 = dyn do_call(p5, p6);
      return r14;
    };
    r16 = dyn data_frame[, stringsAsFactors](p7, FALSE);
    check L10() else D5();
  D5():
    deopt 18 [r16];
  L10():
    st y = r16;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L0(r18):
    r20 = `!`(r18);
    c1 = `as.logical`(r20);
    if c1 then L15() else L1();
  L11():
    y2 = ld y;
    check L13() else D6();
  L12():
    r17 = dyn base1(<sym y>);
    goto L0(r17);
  D6():
    deopt 22 [y2];
  L1():
    goto L2();
  L2():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L19() else L20();
  L13():
    y3 = force? y2;
    checkMissing(y3);
    length = ldf length in base;
    r19 = dyn length(y3);
    check L14() else D7();
  L15():
    list2DF = ldf list2DF;
    check L16() else D8();
  D7():
    deopt 25 [r19];
  D8():
    deopt 28 [];
  L3(r32):
    l = ld y;
    names__ = ldf `names<-`;
    check L22() else D11();
  L14():
    goto L0(r19);
  L16():
    p8 = prom<V +>{
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r22):
      return r22;
    L2():
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r21 = dyn base2(<lang list(character())>, 6);
      goto L0(r21);
    L1(r24):
      rep_int = ldf `rep.int` in base;
      r27 = dyn rep_int(r24, 6);
      goto L0(r27);
    L4():
      character = ldf character;
      r25 = dyn character();
      list = ldf list in base;
      r26 = dyn list(r25);
      goto L1(r26);
    L5():
      r23 = dyn base3(<lang character()>);
      goto L1(r23);
    };
    r29 = dyn list2DF(p8);
    check L17() else D9();
  L19():
    c2 = ldf c in base;
    r33 = dyn c2("File", "Line", "Column", "Left", "Original", "Right");
    check L21() else D10();
  L20():
    r31 = dyn base4("File", "Line", "Column", "Left", "Original", "Right");
    goto L3(r31);
  D9():
    deopt 30 [r29];
  D10():
    deopt 43 [r33];
  D11():
    deopt 45 [r32, l, r32];
  L17():
    st y = r29;
    goto L2();
  L21():
    goto L3(r33);
  L22():
    r34 = dyn names__(l, NULL, r32);
    check L23() else D12();
  D12():
    deopt 47 [r32, r34];
  L23():
    st y = r34;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L24() else L25();
  L4(r36):
    l1 = ld y;
    class__ = ldf `class<-`;
    check L27() else D14();
  L24():
    c3 = ldf c in base;
    r37 = dyn c3("aspell_inspect_context", "data.frame");
    check L26() else D13();
  L25():
    r35 = dyn base5("aspell_inspect_context", "data.frame");
    goto L4(r35);
  D13():
    deopt 54 [r37];
  D14():
    deopt 56 [r36, l1, r36];
  L26():
    goto L4(r37);
  L27():
    r38 = dyn class__(l1, NULL, r36);
    check L28() else D15();
  D15():
    deopt 58 [r36, r38];
  L28():
    st y = r38;
    y4 = ld y;
    check L29() else D16();
  D16():
    deopt 60 [y4];
  L29():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  }
}
fun inner3158359806(f, x) {
  (reg f:*, reg x:*) -+> V { var f:*, var x:*, reg readLines:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg c1:L, reg r5:V, reg x4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r7:V, reg dx3:V, reg r8:V, reg __:cls, reg r9:V, reg cbind:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p2:p(V +), reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p3:p(V +), reg substring:cls, reg lines:*, reg lines1:V, reg p4:p(V +), reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r16:V, reg r17:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg x17:*, reg x18:V, reg c5:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r21:V, reg p7:p(V +), reg substring1:cls, reg lines2:*, reg lines3:V, reg p8:p(V +), reg x21:*, reg x22:V, reg c6:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r24:V, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg dx16:V, reg r26:V, reg x25:*, reg x26:V, reg c7:L, reg dx18:V, reg x28:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg dx22:V, reg r27:V, reg nchar:cls, reg r28:V, reg r29:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V |
    mkenv;
    st f = f;
    st x = x;
    readLines = ldf readLines;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn readLines[, warn](p, FALSE);
    check L2() else D1();
  D1():
    deopt 5 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    st lines = dx1;
    cbind = ldf cbind;
    check L11() else D3();
  L3():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    x1 = ld x;
    check L6() else D2();
  D2():
    deopt 6 [r3, x1];
  D3():
    deopt 12 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.object`(x2);
    if c1 then L8() else L9(r3, x2);
  L11():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L1() else L2(x6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x8):
      r11 = `$`(x8, <sym Line>);
      goto L0(r11);
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
      dr6 = tryDispatchBuiltin.1("$", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x12):
      r13 = `$`(x12, <sym Column>);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      substring = ldf substring;
      p4 = prom<V +>{
        lines = ld lines;
        lines1 = force? lines;
        checkMissing(lines1);
        return lines1;
      };
      p5 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c4 = `is.object`(x14);
        if c4 then L1() else L2(x14);
      L0(dx9):
        r17 = `-`(dx9, 1);
        return r17;
      L1():
        dr8 = tryDispatchBuiltin.1("$", x14);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(x16):
        r16 = `$`(x16, <sym Column>);
        goto L0(r16);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r19 = dyn substring(p4, 1, p5);
      return r19;
    };
    p7 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c5 = `is.object`(x18);
      if c5 then L1() else L2(x18);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x20):
      r21 = `$`(x20, <sym Original>);
      goto L0(r21);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p10 = prom<V +>{
      substring1 = ldf substring;
      p8 = prom<V +>{
        lines2 = ld lines;
        lines3 = force? lines2;
        checkMissing(lines3);
        return lines3;
      };
      p9 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c6 = `is.object`(x22);
        if c6 then L2() else L3(x22);
      L1(dx13):
        sym = ldf nchar;
        base = ldf nchar in base;
        guard = `==`.4(sym, base);
        if guard then L5() else L6();
      L2():
        dr12 = tryDispatchBuiltin.1("$", x22);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L4() else L3(dr12);
      L3(x24):
        r24 = `$`(x24, <sym Column>);
        goto L1(r24);
      L0(dx16, r26):
        r29 = `+`(dx16, r26);
        return r29;
      L4():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L1(dx12);
      L5():
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        c7 = `is.object`(x26);
        if c7 then L8() else L9(dx13, x26);
      L6():
        r25 = dyn base(<lang `$`(x, Original)>);
        goto L0(dx13, r25);
      L7(dx21, dx22):
        nchar = ldf nchar in base;
        r28 = dyn nchar(dx22, "chars", FALSE, NA_LGL);
        goto L0(dx21, r28);
      L8():
        dr14 = tryDispatchBuiltin.1("$", x26);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L10() else L9(dx13, dr14);
      L9(dx18, x28):
        r27 = `$`(x28, <sym Original>);
        goto L7(dx18, r27);
      L10():
        dx20 = getTryDispatchBuiltinValue(dr14);
        goto L7(dx13, dx20);
      };
      r31 = dyn substring1(p8, p9);
      return r31;
    };
    r33 = dyn cbind(p1, p2, p3, p6, p7, p10);
    check L12() else D4();
  D4():
    deopt 19 [r33];
  L7(r7, dx3):
    __ = ldf `[` in base;
    r9 = dyn __(r7, dx3);
    goto L0(r9);
  L8():
    dr2 = tryDispatchBuiltin.1("$", x2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(r3, dr2);
  L9(r5, x4):
    r8 = `$`(x4, <sym Line>);
    goto L7(r5, r8);
  L12():
    popenv;
    return r33;
  L10():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(r3, dx2);
  }
}