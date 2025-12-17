fun main() {
  () -+> V { reg r:cls, reg gl:cls, reg r1:V, reg l:*, reg levels:cls, reg r2:V, reg c:L, reg r5:S, reg l2:*, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg r8:S, reg l4:*, reg dx1:V, reg ___:cls, reg r9:V, reg levels__:cls, reg r10:V, reg l5:*, reg levels1:cls, reg r11:V, reg c1:L, reg r14:S, reg l7:*, reg r15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:S, reg l9:*, reg dx3:V, reg ___1:cls, reg r18:V, reg levels__1:cls, reg r19:V, reg x:*, reg x1:V, reg gl1:cls, reg r20:V, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg l10:*, reg levels__2:cls, reg r24:V, reg y:*, reg y1:V, reg gl2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg p:p(V +), reg r29:V, reg z:*, reg z1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg c4:cls, reg r32:V, reg l11:*, reg levels__3:cls, reg r33:V, reg z2:*, reg z3:V, reg gl3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg c5:cls, reg r36:V, reg p1:p(V +), reg r38:V, reg z4:*, reg z5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg c6:cls, reg r43:V, reg list:cls, reg r44:V, reg l12:*, reg levels__4:cls, reg r45:V, reg z6:*, reg z7:V, reg factor:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg c7:cls, reg r48:V, reg p2:p(V +), reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg c8:cls, reg r53:V, reg l13:*, reg levels__5:cls, reg r54:V, reg f:*, reg f1:V, reg factor1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg c9:cls, reg r57:V, reg p3:p(V +), reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg r61:V, reg list1:cls, reg r62:V, reg l14:*, reg levels__6:cls, reg r63:V, reg f2:*, reg f3:V |
    mkenv;
    r = clos inner2501545716;
    st levels = r;
    gl = ldf gl;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    r1 = dyn gl(2.0, 4.0, 8.0);
    check L9() else D1();
  D1():
    deopt 8 [r1];
  L9():
    st x = r1;
    l = ld x;
    levels = ldf levels;
    check L10() else D2();
  D2():
    deopt 13 ["low", l, "low"];
  L10():
    r2 = dyn levels("low", NULL);
    check L11() else D3();
  D3():
    deopt 15 ["low", l, "low", r2];
  L11():
    c = `is.object`(r2);
    if c then L12() else L13("low", l, r2);
  L0(r8, l4, dx1):
    levels__ = ldf `levels<-`;
    check L15() else D4();
  L12():
    dr = tryDispatchBuiltin.0("[<-", r2, "low");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13("low", l, dr);
  L13(r5, l2, r6):
    ___ = ldf `[<-` in base;
    r9 = dyn ___(r6, "low", 1.0);
    goto L0(r5, l2, r9);
  D4():
    deopt 20 [r8, l4, dx1];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0("low", l, dx);
  L15():
    r10 = dyn levels__(l4, NULL, dx1);
    check L16() else D5();
  D5():
    deopt 22 [r8, r10];
  L16():
    st x = r10;
    l5 = ld x;
    levels1 = ldf levels;
    check L17() else D6();
  D6():
    deopt 27 ["high", l5, "high"];
  L17():
    r11 = dyn levels1("high", NULL);
    check L18() else D7();
  D7():
    deopt 29 ["high", l5, "high", r11];
  L18():
    c1 = `is.object`(r11);
    if c1 then L19() else L20("high", l5, r11);
  L1(r17, l9, dx3):
    levels__1 = ldf `levels<-`;
    check L22() else D8();
  L19():
    dr2 = tryDispatchBuiltin.0("[<-", r11, "high");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20("high", l5, dr2);
  L20(r14, l7, r15):
    ___1 = ldf `[<-` in base;
    r18 = dyn ___1(r15, "high", 2.0);
    goto L1(r14, l7, r18);
  D8():
    deopt 34 [r17, l9, dx3];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1("high", l5, dx2);
  L22():
    r19 = dyn levels__1(l9, NULL, dx3);
    check L23() else D9();
  D9():
    deopt 36 [r17, r19];
  L23():
    st x = r19;
    x = ld x;
    check L24() else D10();
  D10():
    deopt 38 [x];
  L24():
    x1 = force? x;
    checkMissing(x1);
    gl1 = ldf gl;
    check L25() else D11();
  D11():
    deopt 41 [];
  L25():
    r20 = dyn gl1(2.0, 4.0, 8.0);
    check L26() else D12();
  D12():
    deopt 45 [r20];
  L26():
    st y = r20;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L2(r22):
    l10 = ld y;
    levels__2 = ldf `levels<-`;
    check L30() else D14();
  L27():
    c2 = ldf c in base;
    r23 = dyn c2("low", "high");
    check L29() else D13();
  L28():
    r21 = dyn base("low", "high");
    goto L2(r21);
  D13():
    deopt 52 [r23];
  D14():
    deopt 54 [r22, l10, r22];
  L29():
    goto L2(r23);
  L30():
    r24 = dyn levels__2(l10, NULL, r22);
    check L31() else D15();
  D15():
    deopt 56 [r22, r24];
  L31():
    st y = r24;
    y = ld y;
    check L32() else D16();
  D16():
    deopt 58 [y];
  L32():
    y1 = force? y;
    checkMissing(y1);
    gl2 = ldf gl;
    check L33() else D17();
  D17():
    deopt 61 [];
  L33():
    p = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c3 = ldf c in base;
      r27 = dyn c3("apple", "salad", "orange");
      goto L0(r27);
    L2():
      r25 = dyn base1("apple", "salad", "orange");
      goto L0(r25);
    };
    r29 = dyn gl2[, , , labels](3.0, 2.0, 12.0, p);
    check L34() else D18();
  D18():
    deopt 67 [r29];
  L34():
    st z = r29;
    z = ld z;
    check L35() else D19();
  D19():
    deopt 69 [z];
  L35():
    z1 = force? z;
    checkMissing(z1);
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L3(r31):
    l11 = ld z;
    levels__3 = ldf `levels<-`;
    check L39() else D21();
  L36():
    c4 = ldf c in base;
    r32 = dyn c4("fruit", "veg", "fruit");
    check L38() else D20();
  L37():
    r30 = dyn base2("fruit", "veg", "fruit");
    goto L3(r30);
  D20():
    deopt 77 [r32];
  D21():
    deopt 79 [r31, l11, r31];
  L38():
    goto L3(r32);
  L39():
    r33 = dyn levels__3(l11, NULL, r31);
    check L40() else D22();
  D22():
    deopt 81 [r31, r33];
  L40():
    st z = r33;
    z2 = ld z;
    check L41() else D23();
  D23():
    deopt 83 [z2];
  L41():
    z3 = force? z2;
    checkMissing(z3);
    gl3 = ldf gl;
    check L42() else D24();
  D24():
    deopt 86 [];
  L42():
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c5 = ldf c in base;
      r36 = dyn c5("apple", "salad", "orange");
      goto L0(r36);
    L2():
      r34 = dyn base3("apple", "salad", "orange");
      goto L0(r34);
    };
    r38 = dyn gl3[, , , labels](3.0, 2.0, 12.0, p1);
    check L43() else D25();
  D25():
    deopt 92 [r38];
  L43():
    st z = r38;
    z4 = ld z;
    check L44() else D26();
  D26():
    deopt 94 [z4];
  L44():
    z5 = force? z4;
    checkMissing(z5);
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L4(r40):
    l12 = ld z;
    levels__4 = ldf `levels<-`;
    check L51() else D29();
  L45():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L46():
    r39 = dyn base4[fruit, veg](<lang c("apple", "orange")>, "salad");
    goto L4(r39);
  D29():
    deopt 110 [r40, l12, r40];
  L5(r42):
    list = ldf list in base;
    r44 = dyn list(r42, "salad");
    check L50() else D28();
  L47():
    c6 = ldf c in base;
    r43 = dyn c6("apple", "orange");
    check L49() else D27();
  L48():
    r41 = dyn base5("apple", "orange");
    goto L5(r41);
  L51():
    r45 = dyn levels__4(l12, NULL, r40);
    check L52() else D30();
  D27():
    deopt 103 [r43];
  D28():
    deopt 108 [r44];
  D30():
    deopt 112 [r40, r45];
  L49():
    goto L5(r43);
  L50():
    goto L4(r44);
  L52():
    st z = r45;
    z6 = ld z;
    check L53() else D31();
  D31():
    deopt 114 [z6];
  L53():
    z7 = force? z6;
    checkMissing(z7);
    factor = ldf factor;
    check L54() else D32();
  D32():
    deopt 117 [];
  L54():
    p2 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      c7 = ldf c in base;
      r48 = dyn c7("a", "b");
      goto L0(r48);
    L2():
      r46 = dyn base6("a", "b");
      goto L0(r46);
    };
    r50 = dyn factor(p2);
    check L55() else D33();
  D33():
    deopt 119 [r50];
  L55():
    st f = r50;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L56() else L57();
  L6(r52):
    l13 = ld f;
    levels__5 = ldf `levels<-`;
    check L59() else D35();
  L56():
    c8 = ldf c in base;
    r53 = dyn c8("c", "a", "b");
    check L58() else D34();
  L57():
    r51 = dyn base7("c", "a", "b");
    goto L6(r51);
  D34():
    deopt 127 [r53];
  D35():
    deopt 129 [r52, l13, r52];
  L58():
    goto L6(r53);
  L59():
    r54 = dyn levels__5(l13, NULL, r52);
    check L60() else D36();
  D36():
    deopt 131 [r52, r54];
  L60():
    st f = r54;
    f = ld f;
    check L61() else D37();
  D37():
    deopt 133 [f];
  L61():
    f1 = force? f;
    checkMissing(f1);
    factor1 = ldf factor;
    check L62() else D38();
  D38():
    deopt 136 [];
  L62():
    p3 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      c9 = ldf c in base;
      r57 = dyn c9("a", "b");
      goto L0(r57);
    L2():
      r55 = dyn base8("a", "b");
      goto L0(r55);
    };
    r59 = dyn factor1(p3);
    check L63() else D39();
  D39():
    deopt 138 [r59];
  L63():
    st f = r59;
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L64() else L65();
  L7(r61):
    l14 = ld f;
    levels__6 = ldf `levels<-`;
    check L67() else D41();
  L64():
    list1 = ldf list in base;
    r62 = dyn list1("C", "a", "b");
    check L66() else D40();
  L65():
    r60 = dyn base9[C, A, B]("C", "a", "b");
    goto L7(r60);
  D40():
    deopt 149 [r62];
  D41():
    deopt 151 [r61, l14, r61];
  L66():
    goto L7(r62);
  L67():
    r63 = dyn levels__6(l14, NULL, r61);
    check L68() else D42();
  D42():
    deopt 153 [r61, r63];
  L68():
    st f = r63;
    f2 = ld f;
    check L69() else D43();
  D43():
    deopt 155 [f2];
  L69():
    f3 = force? f2;
    checkMissing(f3);
    popenv;
    return f3;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("levels");
    goto L0(r2);
  L2():
    r = dyn base("levels");
    goto L0(r);
  }
}