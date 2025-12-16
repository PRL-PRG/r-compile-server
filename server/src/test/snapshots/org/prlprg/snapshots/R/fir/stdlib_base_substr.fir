fun main() {
  () -+> V { reg r:cls, reg substr:cls, reg r1:V, reg substring:cls, reg p:p(V +), reg p1:p(V +), reg r4:V, reg substr1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg rep:cls, reg r7:V, reg p2:p(V +), reg p3:p(V +), reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c:cls, reg r14:V, reg substr2:cls, reg x:*, reg x1:V, reg p5:p(V +), reg r16:V, reg substring1:cls, reg x2:*, reg x3:V, reg p6:p(V +), reg p7:p(V +), reg r19:V, reg x4:*, reg x5:V, reg LETTERS:*, reg LETTERS1:V, reg c1:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg LETTERS6:V, reg r21:V, reg x6:*, reg x7:V, reg r22:I, reg __:cls, reg r23:V, reg l:*, reg names__:cls, reg r24:V, reg noquote:cls, reg r25:V, reg l1:*, reg comment__:cls, reg r26:V, reg str:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg X:*, reg X1:V, reg attributes:cls, reg r29:V, reg p8:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg c2:cls, reg r34:V, reg l2:*, reg substring__:cls, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg c3:cls, reg r38:V, reg l3:*, reg substring__1:cls, reg r39:V, reg X2:*, reg X3:V, reg stopifnot:cls, reg x8:*, reg x9:V, reg X4:*, reg X5:V, reg r40:V, reg p9:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg aX:*, reg aX1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg X6:*, reg X7:V, reg attributes1:cls, reg r46:V, reg identical:cls, reg r47:V, reg p10:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg comment:cls, reg X8:*, reg X9:V, reg p11:p(V +), reg r52:V, reg nzchar:cls, reg r53:V, reg p12:p(V +), reg r55:V |
    mkenv;
    r = clos `inner-1630913651`;
    st substr = r;
    substr = ldf substr;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    r1 = dyn substr("abcdef", 2.0, 4.0);
    check L6() else D1();
  D1():
    deopt 8 [r1];
  L6():
    substring = ldf substring;
    check L7() else D2();
  D2():
    deopt 10 [];
  L7():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    r4 = dyn substring("abcdef", p, p1);
    check L8() else D3();
  D3():
    deopt 14 [r4];
  L8():
    substr1 = ldf substr;
    check L9() else D4();
  D4():
    deopt 16 [];
  L9():
    p2 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      rep = ldf rep in base;
      r7 = dyn rep("abcdef", 4.0);
      goto L0(r7);
    L2():
      r5 = dyn base("abcdef", 4.0);
      goto L0(r5);
    };
    p3 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p4 = prom<V +>{
      return <int 4, 5>;
    };
    r11 = dyn substr1(p2, p3, p4);
    check L10() else D5();
  D5():
    deopt 20 [r11];
  L10():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L0(r13):
    st x = r13;
    substr2 = ldf substr;
    check L14() else D7();
  L11():
    c = ldf c in base;
    r14 = dyn c("asfef", "qwerty", "yuiop[", "b", "stuff.blah.yech");
    check L13() else D6();
  L12():
    r12 = dyn base1("asfef", "qwerty", "yuiop[", "b", "stuff.blah.yech");
    goto L0(r12);
  D6():
    deopt 29 [r14];
  D7():
    deopt 32 [];
  L13():
    goto L0(r14);
  L14():
    p5 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r16 = dyn substr2(p5, 2.0, 5.0);
    check L15() else D8();
  D8():
    deopt 36 [r16];
  L15():
    substring1 = ldf substring;
    check L16() else D9();
  D9():
    deopt 38 [];
  L16():
    p6 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p7 = prom<V +>{
      return <int 4, 5, 6>;
    };
    r19 = dyn substring1(p6, 2.0, p7);
    check L17() else D10();
  D10():
    deopt 42 [r19];
  L17():
    x4 = ld x;
    check L18() else D11();
  D11():
    deopt 43 [x4];
  L18():
    x5 = force? x4;
    checkMissing(x5);
    st X = x5;
    LETTERS = ld LETTERS;
    check L19() else D12();
  D12():
    deopt 46 [LETTERS];
  L19():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c1 = `is.object`(LETTERS1);
    if c1 then L20() else L21(LETTERS1);
  L1(dx1):
    l = ld X;
    names__ = ldf `names<-`;
    check L26() else D14();
  L20():
    dr = tryDispatchBuiltin.1("[", LETTERS1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(LETTERS3):
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D14():
    deopt 54 [dx1, l, dx1];
  L2(LETTERS6, r21):
    __ = ldf `[` in base;
    r23 = dyn __(LETTERS6, r21);
    goto L1(r23);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L23():
    x6 = ld x;
    check L25() else D13();
  L24():
    r20 = dyn base2(<sym x>);
    goto L2(LETTERS3, r20);
  L26():
    r24 = dyn names__(l, NULL, dx1);
    check L27() else D15();
  D13():
    deopt 49 [LETTERS3, x6];
  D15():
    deopt 56 [dx1, r24];
  L25():
    x7 = force? x6;
    checkMissing(x7);
    r22 = seq_along(x7);
    goto L2(LETTERS3, r22);
  L27():
    st X = r24;
    noquote = ldf noquote;
    check L28() else D16();
  D16():
    deopt 59 [];
  L28():
    r25 = dyn noquote("is a named vector");
    check L29() else D17();
  D17():
    deopt 61 [r25];
  L29():
    l1 = ld X;
    comment__ = ldf `comment<-`;
    check L30() else D18();
  D18():
    deopt 63 [r25, l1, r25];
  L30():
    r26 = dyn comment__(l1, NULL, r25);
    check L31() else D19();
  D19():
    deopt 65 [r25, r26];
  L31():
    st X = r26;
    str = ldf str;
    check L32() else D20();
  D20():
    deopt 68 [];
  L32():
    p8 = prom<V +>{
      sym3 = ldf attributes;
      base3 = ldf attributes in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      st aX = r28;
      invisible.0();
      return r28;
    L1():
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      attributes = ldf attributes in base;
      r29 = dyn attributes(X1);
      goto L0(r29);
    L2():
      r27 = dyn base3(<sym X>);
      goto L0(r27);
    };
    r31 = dyn str(p8);
    check L33() else D21();
  D21():
    deopt 70 [r31];
  L33():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L3(r33):
    l2 = ld x;
    substring__ = ldf `substring<-`;
    check L37() else D23();
  L34():
    c2 = ldf c in base;
    r34 = dyn c2("..", "+++");
    check L36() else D22();
  L35():
    r32 = dyn base4("..", "+++");
    goto L3(r32);
  D22():
    deopt 76 [r34];
  D23():
    deopt 78 [r33, l2, r33];
  L36():
    goto L3(r34);
  L37():
    r35 = dyn substring__(l2, NULL, 2.0, r33);
    check L38() else D24();
  D24():
    deopt 81 [r33, r35];
  L38():
    st x = r35;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L4(r37):
    l3 = ld X;
    substring__1 = ldf `substring<-`;
    check L42() else D26();
  L39():
    c3 = ldf c in base;
    r38 = dyn c3("..", "+++");
    check L41() else D25();
  L40():
    r36 = dyn base5("..", "+++");
    goto L4(r36);
  D25():
    deopt 88 [r38];
  D26():
    deopt 90 [r37, l3, r37];
  L41():
    goto L4(r38);
  L42():
    r39 = dyn substring__1(l3, NULL, 2.0, r37);
    check L43() else D27();
  D27():
    deopt 93 [r37, r39];
  L43():
    st X = r39;
    X2 = ld X;
    check L44() else D28();
  D28():
    deopt 95 [X2];
  L44():
    X3 = force? X2;
    checkMissing(X3);
    stopifnot = ldf stopifnot;
    check L45() else D29();
  D29():
    deopt 98 [];
  L45():
    p9 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      X4 = ld X;
      X5 = force? X4;
      checkMissing(X5);
      r40 = `==`(x9, X5);
      return r40;
    };
    p10 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r43):
      return r43;
    L2():
      aX = ld aX;
      aX1 = force? aX;
      checkMissing(aX1);
      sym7 = ldf attributes;
      base7 = ldf attributes in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r42 = dyn base6(<sym aX>, <lang attributes(X)>);
      goto L0(r42);
    L1(r45):
      identical = ldf identical in base;
      r47 = dyn identical(aX1, r45, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r47);
    L4():
      X6 = ld X;
      X7 = force? X6;
      checkMissing(X7);
      attributes1 = ldf attributes in base;
      r46 = dyn attributes1(X7);
      goto L1(r46);
    L5():
      r44 = dyn base7(<sym X>);
      goto L1(r44);
    };
    p12 = prom<V +>{
      sym8 = ldf nzchar;
      base8 = ldf nzchar in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      comment = ldf comment;
      p11 = prom<V +>{
        X8 = ld X;
        X9 = force? X8;
        checkMissing(X9);
        return X9;
      };
      r52 = dyn comment(p11);
      nzchar = ldf nzchar in base;
      r53 = dyn nzchar(r52);
      goto L0(r53);
    L2():
      r49 = dyn base8(<lang comment(X)>);
      goto L0(r49);
    };
    r55 = dyn stopifnot(p9, p10, p12);
    check L46() else D30();
  D30():
    deopt 102 [r55];
  L46():
    popenv;
    return r55;
  }
}
fun `inner-1630913651`(x, start, stop) {
  (reg x:*, reg start:*, reg stop:*) -+> V { var x:*, var start:*, var stop:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg as_character:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg start1:*, reg start2:V, reg as_integer:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg stop1:*, reg stop2:V, reg as_integer1:cls, reg r14:V, reg substr:cls, reg r15:V |
    mkenv;
    st x = x;
    st start = start;
    st stop = stop;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L10() else L1();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L10():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r4):
    st x = r4;
    goto L3();
  L4(r8):
    popenv;
    return r8;
  L11():
    x3 = ld x;
    check L13() else D1();
  L12():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L16():
    x5 = ld x;
    check L18() else D3();
  L17():
    r7 = dyn base2(<lang substr(x, as.integer(start), as.integer(stop))>);
    goto L4(r7);
  D1():
    deopt 7 [x3];
  D3():
    deopt 16 [x5];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(x4);
    check L14() else D2();
  L18():
    x6 = force? x5;
    checkMissing(x6);
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  D2():
    deopt 10 [r5];
  L5(r10):
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L14():
    goto L2(r5);
  L19():
    start1 = ld start;
    check L21() else D4();
  L20():
    r9 = dyn base3(<sym start>);
    goto L5(r9);
  D4():
    deopt 20 [start1];
  L6(r13):
    substr = ldf substr in base;
    r15 = dyn substr(x6, r10, r13);
    check L27() else D8();
  L21():
    start2 = force? start1;
    checkMissing(start2);
    as_integer = ldf `as.integer` in base;
    r11 = dyn as_integer(start2);
    check L22() else D5();
  L23():
    stop1 = ld stop;
    check L25() else D6();
  L24():
    r12 = dyn base4(<sym stop>);
    goto L6(r12);
  D5():
    deopt 23 [r11];
  D6():
    deopt 26 [stop1];
  D8():
    deopt 31 [r15];
  L22():
    goto L5(r11);
  L25():
    stop2 = force? stop1;
    checkMissing(stop2);
    as_integer1 = ldf `as.integer` in base;
    r14 = dyn as_integer1(stop2);
    check L26() else D7();
  L27():
    goto L4(r15);
  D7():
    deopt 29 [r14];
  L26():
    goto L6(r14);
  }
}