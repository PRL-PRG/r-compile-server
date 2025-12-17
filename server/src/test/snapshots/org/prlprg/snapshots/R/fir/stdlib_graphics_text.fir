fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg p:p(V +), reg p1:p(V +), reg r3:V, reg text:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg K:*, reg K1:V, reg r6:V, reg r7:V, reg K2:*, reg K3:V, reg r8:V, reg r9:V, reg p2:p(V +), reg r11:V, reg plot1:cls, reg p3:p(V +), reg p4:p(V +), reg r14:V, reg mtext:cls, reg r15:V, reg points:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c:cls, reg r18:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg c1:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg text1:cls, reg r25:V, reg text2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg c2:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg text3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg expression:cls, reg r33:V, reg p8:p(V +), reg r35:V, reg text4:cls, reg r36:V, reg text5:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg expression1:cls, reg r39:V, reg p9:p(V +), reg r41:V, reg text6:cls, reg r42:V, reg text7:cls, reg r43:V |
    mkenv;
    r = clos inner2044426018;
    st text = r;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int -1, 0, 1>;
    };
    p1 = prom<V +>{
      return <int -1, 0, 1>;
    };
    r3 = dyn plot[, , type, xlab, ylab](p, p1, "n", "Re", "Im");
    check L1() else D1();
  D1():
    deopt 13 [r3];
  L1():
    st K = 16.0;
    text = ldf text;
    check L2() else D2();
  D2():
    deopt 18 [];
  L2():
    p2 = prom<V +>{
      sym = ldf exp;
      base = ldf exp in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      K = ld K;
      K1 = force? K;
      checkMissing(K1);
      r6 = `:`(1.0, K1);
      r7 = `*`(6.283185307179586i, r6);
      K2 = ld K;
      K3 = force? K2;
      checkMissing(K3);
      r8 = `/`(r7, K3);
      r9 = exp(r8);
      goto L0(r9);
    L2():
      r4 = dyn base(<lang `/`(`*`(`*`(`*`(1.0i, 2.0), pi), `(`(`:`(1.0, K))), K)>);
      goto L0(r4);
    };
    r11 = dyn text[, col](p2, 2.0);
    check L3() else D3();
  D3():
    deopt 22 [r11];
  L3():
    plot1 = ldf plot;
    check L4() else D4();
  D4():
    deopt 24 [];
  L4():
    p3 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p4 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r14 = dyn plot1[, , main, sub](p3, p4, "text(...) examples\n~~~~~~~~~~~~~~", "R is GNU \u00a9, but not \u00ae ...");
    check L5() else D5();
  D5():
    deopt 31 [r14];
  L5():
    mtext = ldf mtext;
    check L6() else D6();
  D6():
    deopt 33 [];
  L6():
    r15 = dyn mtext[, side]("\u00abLatin-1 accented chars\u00bb: \u00e9\u00e8 \u00f8\u00d8 \u00e5<\u00c5 \u00e6<\u00c6", 3.0);
    check L7() else D7();
  D7():
    deopt 37 [r15];
  L7():
    points = ldf points;
    check L8() else D8();
  D8():
    deopt 39 [];
  L8():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c = ldf c in base;
      r18 = dyn c(6.0, 2.0);
      goto L0(r18);
    L2():
      r16 = dyn base1(6.0, 2.0);
      goto L0(r16);
    };
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c1 = ldf c in base;
      r22 = dyn c1(2.0, 1.0);
      goto L0(r22);
    L2():
      r20 = dyn base2(2.0, 1.0);
      goto L0(r20);
    };
    r24 = dyn points[, , pch, cex, col](p5, p6, 3.0, 4.0, "red");
    check L9() else D9();
  D9():
    deopt 48 [r24];
  L9():
    text1 = ldf text;
    check L10() else D10();
  D10():
    deopt 50 [];
  L10():
    r25 = dyn text1[, , , cex](6.0, 2.0, "the text is CENTERED around (x,y) = (6,2) by default", 0.8);
    check L11() else D11();
  D11():
    deopt 56 [r25];
  L11():
    text2 = ldf text;
    check L12() else D12();
  D12():
    deopt 58 [];
  L12():
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c2 = ldf c in base;
      r28 = dyn c2(0.0, 0.0);
      goto L0(r28);
    L2():
      r26 = dyn base3(0.0, 0.0);
      goto L0(r26);
    };
    r30 = dyn text2[, , , adj](2.0, 1.0, "or Left/Bottom - JUSTIFIED at (2,1) by 'adj = c(0,0)'", p7);
    check L13() else D13();
  D13():
    deopt 64 [r30];
  L13():
    text3 = ldf text;
    check L14() else D14();
  D14():
    deopt 66 [];
  L14():
    p8 = prom<V +>{
      sym4 = ldf expression;
      base4 = ldf expression in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      expression = ldf expression in base;
      r33 = dyn expression(<lang `==`(hat(beta), `*`(`*`(`^`(`(`(`*`(`^`(X, t), X)), {
                `-`(1.0)
              }), `^`(X, t)), y))>);
      goto L0(r33);
    L2():
      r31 = dyn base4(<lang `==`(hat(beta), `*`(`*`(`^`(`(`(`*`(`^`(X, t), X)), {
                `-`(1.0)
              }), `^`(X, t)), y))>);
      goto L0(r31);
    };
    r35 = dyn text3(4.0, 9.0, p8);
    check L15() else D15();
  D15():
    deopt 70 [r35];
  L15():
    text4 = ldf text;
    check L16() else D16();
  D16():
    deopt 72 [];
  L16():
    r36 = dyn text4[, , , cex](4.0, 8.4, "expression(hat(beta) == (X^t * X)^{-1} * X^t * y)", 0.75);
    check L17() else D17();
  D17():
    deopt 78 [r36];
  L17():
    text5 = ldf text;
    check L18() else D18();
  D18():
    deopt 80 [];
  L18():
    p9 = prom<V +>{
      sym5 = ldf expression;
      base5 = ldf expression in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      expression1 = ldf expression in base;
      r39 = dyn expression1(<lang `==`(bar(x), sum(frac(`[`(x, i), n), `==`(i, 1.0), n))>);
      goto L0(r39);
    L2():
      r37 = dyn base5(<lang `==`(bar(x), sum(frac(`[`(x, i), n), `==`(i, 1.0), n))>);
      goto L0(r37);
    };
    r41 = dyn text5(4.0, 7.0, p9);
    check L19() else D19();
  D19():
    deopt 84 [r41];
  L19():
    text6 = ldf text;
    check L20() else D20();
  D20():
    deopt 86 [];
  L20():
    r42 = dyn text6(5.0, 10.2, "Le fran\u00e7ais, c'est facile: R\u00e8gles, Libert\u00e9, Egalit\u00e9, Fraternit\u00e9...");
    check L21() else D21();
  D21():
    deopt 90 [r42];
  L21():
    text7 = ldf text;
    check L22() else D22();
  D22():
    deopt 92 [];
  L22():
    r43 = dyn text7(5.0, 9.8, "Jetz no chli z\u00fcrit\u00fc\u00fctsch: (noch ein bi\u00dfchen Z\u00fcrcher deutsch)");
    check L23() else D23();
  D23():
    deopt 96 [r43];
  L23():
    popenv;
    return r43;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("text");
    goto L0(r2);
  L2():
    r = dyn base("text");
    goto L0(r);
  }
}