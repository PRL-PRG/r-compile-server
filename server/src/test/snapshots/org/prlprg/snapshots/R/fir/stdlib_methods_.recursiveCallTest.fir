fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1871848933;
    st `.recursiveCallTest` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1871848933(x, fname) {
  (reg x:*, reg fname:*) -+> V { var x:*, var fname:*, reg is:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg quote:cls, reg r7:V, reg identical:cls, reg r8:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x7:*, reg x8:V, reg c3:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg fname1:*, reg fname2:V, reg identical1:cls, reg r12:V, reg r13:V, reg c4:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg fname3:*, reg fname4:V, reg p1:p(V +), reg r15:V, reg p2:p(V +), reg paste:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg x11:*, reg x12:V, reg c5:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r19:V, reg as_character:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg x15:*, reg x16:V, reg length:cls, reg r32:V, reg r33:V, reg seq_int:cls, reg r34:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x17:V, reg Recall:cls, reg x18:*, reg x19:V, reg c7:L, reg x21:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i5:*, reg i6:V, reg __3:cls, reg r35:V, reg p6:p(V +), reg fname5:*, reg fname6:V, reg p7:p(V +), reg r38:V, reg c8:L, reg is1:cls, reg x22:*, reg x23:V, reg p8:p(V +), reg r42:V, reg c9:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg x24:*, reg x25:V, reg length1:cls, reg r47:V, reg r48:V, reg seq_int1:cls, reg r49:V, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg c10:L, reg x26:V, reg Recall1:cls, reg x27:*, reg x28:V, reg c11:L, reg x30:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i16:*, reg i17:V, reg __4:cls, reg r50:V, reg p9:p(V +), reg fname7:*, reg fname8:V, reg p10:p(V +), reg r53:V, reg c12:L |
    mkenv;
    st x = x;
    st fname = fname;
    is = ldf is;
    check L22() else D0();
  D0():
    deopt 1 [];
  L22():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is(p, "call");
    check L23() else D1();
  D1():
    deopt 4 [r1];
  L23():
    c = `as.logical`(r1);
    if c then L24() else L0();
  L0():
    is1 = ldf is;
    check L62() else D14();
  L24():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  D14():
    deopt 84 [];
  L1(r3):
    c2 = `as.logical`(r3);
    if c2 then L34() else L4();
  L25():
    x3 = ld x;
    check L27() else D2();
  L26():
    r2 = dyn base(<lang `[[`(x, 1)>, <lang quote(standardGeneric)>);
    goto L1(r2);
  L62():
    p8 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    r42 = dyn is1(p8, "language");
    check L63() else D15();
  D2():
    deopt 7 [x3];
  D15():
    deopt 87 [r42];
  L4():
    sym4 = ldf `seq.int`;
    base4 = ldf `seq.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L27():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L28() else L29(x4);
  L34():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L63():
    c9 = `as.logical`(r42);
    if c9 then L64() else L15();
  L2(dx1):
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L5(r10):
    r13 = `!`(r10);
    c4 = `as.logical`(r13);
    if c4 then L43() else L7();
  L9(r29):
    s = toForSeq(r29);
    l = length(s);
    i = 0;
    goto L11(i);
  L15():
    popenv;
    return FALSE;
  L28():
    dr = tryDispatchBuiltin.1("[[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(x6):
    __ = ldf `[[` in base;
    r4 = dyn __(x6, 1);
    goto L2(r4);
  L35():
    x7 = ld x;
    check L37() else D4();
  L36():
    r9 = dyn base2(<lang `[[`(x, 2)>, <sym fname>);
    goto L5(r9);
  L48():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L49():
    r28 = dyn base4[from, `length.out`](2, <lang `-`(length(x), 1)>);
    goto L9(r28);
  L64():
    sym6 = ldf `seq.int`;
    base6 = ldf `seq.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  D4():
    deopt 26 [x7];
  L3(r6):
    identical = ldf identical in base;
    r8 = dyn identical(dx1, r6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L33() else D3();
  L7():
    goto L8();
  L8():
    popenv;
    return TRUE;
  L10(r31):
    r33 = `-`(r31, 1);
    seq_int = ldf `seq.int` in base;
    r34 = dyn seq_int(2, r33);
    check L54() else D11();
  L11(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L55() else L14();
  L16(r44):
    s1 = toForSeq(r44);
    l1 = length(s1);
    i11 = 0;
    goto L18(i11);
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L31():
    quote = ldf quote in base;
    r7 = dyn quote(<sym standardGeneric>);
    goto L3(r7);
  L32():
    r5 = dyn base1(<sym standardGeneric>);
    goto L3(r5);
  L37():
    x8 = force? x7;
    checkMissing(x8);
    c3 = `is.object`(x8);
    if c3 then L38() else L39(x8);
  L43():
    warning = ldf warning;
    check L44() else D7();
  L50():
    x15 = ld x;
    check L52() else D9();
  L51():
    r30 = dyn base5(<sym x>);
    goto L10(r30);
  L65():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L66():
    r43 = dyn base6[from, `length.out`](2, <lang `-`(length(x), 1)>);
    goto L16(r43);
  D3():
    deopt 23 [r8];
  D7():
    deopt 44 [];
  D9():
    deopt 59 [x15];
  D11():
    deopt 67 [r34];
  L6(dx3):
    fname1 = ld fname;
    check L41() else D5();
  L14():
    x17 = `[[`(s, i2, NULL, TRUE);
    st i = x17;
    Recall = ldf Recall;
    check L56() else D12();
  L17(r46):
    r48 = `-`(r46, 1);
    seq_int1 = ldf `seq.int` in base;
    r49 = dyn seq_int1(2, r48);
    check L71() else D18();
  L18(i12):
    i13 = `+`.1(i12, 1);
    c10 = `<`.1(l1, i13);
    if c10 then L72() else L21();
  L33():
    goto L1(r8);
  L38():
    dr2 = tryDispatchBuiltin.1("[[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(x10):
    __1 = ldf `[[` in base;
    r11 = dyn __1(x10, 2);
    goto L6(r11);
  L44():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p1 = prom<V +>{
          fname3 = ld fname;
          fname4 = force? fname3;
          checkMissing(fname4);
          return fname4;
        };
        r15 = dyn sQuote(p1);
        return r15;
      };
      p4 = prom<V +>{
        paste = ldf paste;
        p3 = prom<V +>{
          sym3 = ldf `as.character`;
          base3 = ldf `as.character` in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L2() else L3();
        L0(r18):
          return r18;
        L2():
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          c5 = `is.object`(x12);
          if c5 then L4() else L5(x12);
        L3():
          r17 = dyn base3(<lang `[[`(x, 2)>);
          goto L0(r17);
        L1(dx5):
          as_character = ldf `as.character` in base;
          r20 = dyn as_character(dx5);
          goto L0(r20);
        L4():
          dr4 = tryDispatchBuiltin.1("[[", x12);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L6() else L5(dr4);
        L5(x14):
          __2 = ldf `[[` in base;
          r19 = dyn __2(x14, 2);
          goto L1(r19);
        L6():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L1(dx4);
        };
        r22 = dyn paste[, collapse](p3, "\n");
        return r22;
      };
      r24 = dyn gettextf("the body of the generic function for %s calls 'standardGeneric' to dispatch on a different name (\"%s\")!", p2, p4);
      return r24;
    };
    r26 = dyn warning[, domain](p5, NA_LGL);
    check L45() else D8();
  L52():
    x16 = force? x15;
    checkMissing(x16);
    length = ldf length in base;
    r32 = dyn length(x16);
    check L53() else D10();
  L54():
    goto L9(r34);
  L55():
    popenv;
    return FALSE;
  L67():
    x24 = ld x;
    check L69() else D16();
  L68():
    r45 = dyn base7(<sym x>);
    goto L17(r45);
  D5():
    deopt 31 [fname1];
  D8():
    deopt 48 [r26];
  D10():
    deopt 62 [r32];
  D12():
    deopt 69 [i2];
  D16():
    deopt 94 [x24];
  D18():
    deopt 102 [r49];
  L21():
    x26 = `[[`(s1, i13, NULL, TRUE);
    st i = x26;
    Recall1 = ldf Recall;
    check L73() else D19();
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L41():
    fname2 = force? fname1;
    checkMissing(fname2);
    identical1 = ldf identical in base;
    r12 = dyn identical1(dx3, fname2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L42() else D6();
  L45():
    goto L8();
  L53():
    goto L10(r32);
  L56():
    p6 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      c7 = `is.object`(x19);
      if c7 then L1() else L2(x19);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", x19);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x21):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r35 = dyn __3(x21, i6);
      goto L0(r35);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      fname5 = ld fname;
      fname6 = force? fname5;
      checkMissing(fname6);
      return fname6;
    };
    r38 = dyn Recall(p6, p7);
    check L57() else D13();
  L69():
    x25 = force? x24;
    checkMissing(x25);
    length1 = ldf length in base;
    r47 = dyn length1(x25);
    check L70() else D17();
  L71():
    goto L16(r49);
  L72():
    popenv;
    return FALSE;
  D6():
    deopt 41 [r12];
  D13():
    deopt 72 [i2, r38];
  D17():
    deopt 97 [r47];
  D19():
    deopt 104 [i13];
  L42():
    goto L5(r12);
  L57():
    c8 = `as.logical`(r38);
    if c8 then L58() else L12();
  L70():
    goto L17(r47);
  L73():
    p9 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      c11 = `is.object`(x28);
      if c11 then L1() else L2(x28);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", x28);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x30):
      i16 = ld i;
      i17 = force? i16;
      __4 = ldf `[[` in base;
      r50 = dyn __4(x30, i17);
      goto L0(r50);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p10 = prom<V +>{
      fname7 = ld fname;
      fname8 = force? fname7;
      checkMissing(fname8);
      return fname8;
    };
    r53 = dyn Recall1(p9, p10);
    check L74() else D20();
  D20():
    deopt 107 [i13, r53];
  L12():
    goto L11(i2);
  L58():
    popenv;
    return TRUE;
  L74():
    c12 = `as.logical`(r53);
    if c12 then L75() else L19();
  L19():
    goto L18(i13);
  L75():
    popenv;
    return TRUE;
  }
}