fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg graphics:*, reg graphics1:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg c:cls, reg r16:V, reg list:cls, reg r17:V, reg lapply:cls, reg x:*, reg x1:V, reg p2:p(V +), reg mean:*, reg mean1:V, reg p3:p(V +), reg r20:V, reg lapply1:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg quantile:*, reg quantile1:V, reg p5:p(V +), reg p6:p(V +), reg r24:V, reg sapply:cls, reg x4:*, reg x5:V, reg p7:p(V +), reg quantile2:*, reg quantile3:V, reg p8:p(V +), reg r27:V, reg sapply1:cls, reg p9:p(V +), reg seq:*, reg seq1:V, reg p10:p(V +), reg r30:V, reg sapply2:cls, reg i39:*, reg i40:V, reg p11:p(V +), reg fivenum:*, reg fivenum1:V, reg p12:p(V +), reg r33:V, reg vapply:cls, reg i41:*, reg i42:V, reg p13:p(V +), reg fivenum2:*, reg fivenum3:V, reg p14:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg c1:cls, reg r38:V, reg p15:p(V +), reg r40:V, reg structure:cls, reg p16:p(V +), reg LETTERS:*, reg LETTERS1:V, reg c2:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r42:V, reg p17:p(V +), reg r44:V, reg r45:cls, reg sapply3:cls, reg v:*, reg v1:V, reg p18:p(V +), reg f2:*, reg f3:V, reg p19:p(V +), reg p20:p(V +), reg r49:V, reg vapply1:cls, reg v2:*, reg v3:V, reg p21:p(V +), reg f4:*, reg f5:V, reg p22:p(V +), reg outer:cls, reg p23:p(V +), reg p24:p(V +), reg r54:V, reg p25:p(V +), reg p26:p(V +), reg r57:V, reg stopifnot:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg a2:*, reg a3:V, reg dim:cls, reg r60:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg r65:V, reg c3:cls, reg r66:V, reg r67:V, reg p27:p(V +), reg all_equal:cls, reg a4:*, reg a5:V, reg p28:p(V +), reg a_2:*, reg a_3:V, reg p29:p(V +), reg r71:V, reg p30:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg r74:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r75:V, reg r76:V, reg a6:*, reg a7:V, reg dimnames:cls, reg r77:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r78:V, reg r79:V, reg LETTERS4:*, reg LETTERS5:V, reg c4:L, reg LETTERS7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r80:V, reg list1:cls, reg r81:V, reg identical:cls, reg r82:V, reg p31:p(V +), reg r84:V, reg hist:cls, reg replicate:cls, reg mean2:cls, reg rexp:cls, reg r85:V, reg p32:p(V +), reg r87:V, reg p33:p(V +), reg r89:V, reg p34:p(V +), reg r91:V, reg r92:cls, reg r93:cls, reg bar:cls, reg r94:V |
    mkenv;
    r = clos inner3204550915;
    st lapply = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    require = ldf require;
    check L7() else D0();
  L6():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L7():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L8() else D1();
  L9():
    require1 = ldf require;
    check L11() else D2();
  L10():
    r5 = dyn base1(<sym graphics>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  L2(r10):
    st x = r10;
    lapply = ldf lapply;
    check L21() else D6();
  L8():
    goto L0();
  L11():
    p1 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r8 = dyn require1(p1);
    check L12() else D3();
  L13():
    sym3 = ldf exp;
    base3 = ldf exp in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L14():
    r9 = dyn base2[a, beta, logic](<lang `:`(1.0, 10.0)>, <lang exp(`:`(`-`(3.0), 3.0))>, <lang c(TRUE, FALSE, FALSE, TRUE)>);
    goto L2(r9);
  D3():
    deopt 12 [r8];
  D6():
    deopt 36 [];
  L3(r12):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L17() else L18();
  L12():
    goto L1();
  L15():
    r13 = exp(<int -3, -2, -1, 0, 1, 2, 3>);
    goto L3(r13);
  L16():
    r11 = dyn base3(<lang `:`(`-`(3.0), 3.0)>);
    goto L3(r11);
  L21():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r20 = dyn lapply(p2, p3);
    check L22() else D7();
  D7():
    deopt 39 [r20];
  L4(r15):
    list = ldf list in base;
    r17 = dyn list(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, r12, r15);
    check L20() else D5();
  L17():
    c = ldf c in base;
    r16 = dyn c(TRUE, FALSE, FALSE, TRUE);
    check L19() else D4();
  L18():
    r14 = dyn base4(TRUE, FALSE, FALSE, TRUE);
    goto L4(r14);
  L22():
    lapply1 = ldf lapply;
    check L23() else D8();
  D4():
    deopt 30 [r16];
  D5():
    deopt 33 [r17];
  D8():
    deopt 41 [];
  L19():
    goto L4(r16);
  L20():
    goto L2(r17);
  L23():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p5 = prom<V +>{
      quantile = ld quantile;
      quantile1 = force? quantile;
      checkMissing(quantile1);
      return quantile1;
    };
    p6 = prom<V +>{
      return <real 0.25, 0.5, 0.75>;
    };
    r24 = dyn lapply1[, , probs](p4, p5, p6);
    check L24() else D9();
  D9():
    deopt 46 [r24];
  L24():
    sapply = ldf sapply;
    check L25() else D10();
  D10():
    deopt 48 [];
  L25():
    p7 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p8 = prom<V +>{
      quantile2 = ld quantile;
      quantile3 = force? quantile2;
      checkMissing(quantile3);
      return quantile3;
    };
    r27 = dyn sapply(p7, p8);
    check L26() else D11();
  D11():
    deopt 51 [r27];
  L26():
    sapply1 = ldf sapply;
    check L27() else D12();
  D12():
    deopt 53 [];
  L27():
    p9 = prom<V +>{
      return <int 3, 4, 5, 6, 7, 8, 9>;
    };
    p10 = prom<V +>{
      seq = ld seq;
      seq1 = force? seq;
      checkMissing(seq1);
      return seq1;
    };
    r30 = dyn sapply1(p9, p10);
    check L28() else D13();
  D13():
    deopt 56 [r30];
  L28():
    st i39 = r30;
    sapply2 = ldf sapply;
    check L29() else D14();
  D14():
    deopt 59 [];
  L29():
    p11 = prom<V +>{
      i39 = ld i39;
      i40 = force? i39;
      checkMissing(i40);
      return i40;
    };
    p12 = prom<V +>{
      fivenum = ld fivenum;
      fivenum1 = force? fivenum;
      checkMissing(fivenum1);
      return fivenum1;
    };
    r33 = dyn sapply2(p11, p12);
    check L30() else D15();
  D15():
    deopt 62 [r33];
  L30():
    vapply = ldf vapply;
    check L31() else D16();
  D16():
    deopt 64 [];
  L31():
    p13 = prom<V +>{
      i41 = ld i39;
      i42 = force? i41;
      checkMissing(i42);
      return i42;
    };
    p14 = prom<V +>{
      fivenum2 = ld fivenum;
      fivenum3 = force? fivenum2;
      checkMissing(fivenum3);
      return fivenum3;
    };
    p15 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c1 = ldf c in base;
      r38 = dyn c1(0.0, 0.0, 0.0, 0.0, 0.0);
      goto L0(r38);
    L2():
      r36 = dyn base5[`Min.`, `1st Qu.`, Median, `3rd Qu.`, `Max.`](0.0, 0.0, 0.0, 0.0, 0.0);
      goto L0(r36);
    };
    r40 = dyn vapply(p13, p14, p15);
    check L32() else D17();
  D17():
    deopt 68 [r40];
  L32():
    structure = ldf structure;
    check L33() else D18();
  D18():
    deopt 70 [];
  L33():
    p16 = prom<V +>{
      return <real 50.0, 60.0, 70.0, 80.0>;
    };
    p17 = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c2 = `is.object`(LETTERS1);
      if c2 then L1() else L2(LETTERS1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", LETTERS1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(LETTERS3):
      __ = ldf `[` in base;
      r42 = dyn __(LETTERS3, <int 1, 2, 3, 4>);
      goto L0(r42);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r44 = dyn structure[, names](p16, p17);
    check L34() else D19();
  D19():
    deopt 74 [r44];
  L34():
    st v = r44;
    r45 = clos inner799576941;
    st f2 = r45;
    sapply3 = ldf sapply;
    check L35() else D20();
  D20():
    deopt 80 [];
  L35():
    p18 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    p19 = prom<V +>{
      f2 = ld f2;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p20 = prom<V +>{
      return <real 2.0, 4.0, 6.0, 8.0, 10.0>;
    };
    r49 = dyn sapply3[, , y, simplify](p18, p19, p20, "array");
    check L36() else D21();
  D21():
    deopt 87 [r49];
  L36():
    st a2 = r49;
    vapply1 = ldf vapply;
    check L37() else D22();
  D22():
    deopt 90 [];
  L37():
    p21 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    p22 = prom<V +>{
      f4 = ld f2;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p25 = prom<V +>{
      outer = ldf outer;
      p23 = prom<V +>{
        return <int 1, 2, 3>;
      };
      p24 = prom<V +>{
        return <int 1, 2, 3, 4, 5>;
      };
      r54 = dyn outer(p23, p24);
      return r54;
    };
    p26 = prom<V +>{
      return <real 2.0, 4.0, 6.0, 8.0, 10.0>;
    };
    r57 = dyn vapply1[, , , y](p21, p22, p25, p26);
    check L38() else D23();
  D23():
    deopt 96 [r57];
  L38():
    st `a.2` = r57;
    stopifnot = ldf stopifnot;
    check L39() else D24();
  D24():
    deopt 99 [];
  L39():
    p27 = prom<V +>{
      sym6 = ldf dim;
      base6 = ldf dim in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r59):
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L2():
      a2 = ld a2;
      a3 = force? a2;
      checkMissing(a3);
      dim = ldf dim in base;
      r60 = dyn dim(a3);
      goto L0(r60);
    L3():
      r58 = dyn base6(<sym a2>);
      goto L0(r58);
    L1(r64, r65):
      r67 = `==`(r64, r65);
      return r67;
    L4():
      c3 = ldf c in base;
      r66 = dyn c3(3.0, 5.0, 4.0);
      goto L1(r59, r66);
    L5():
      r63 = dyn base7(3.0, 5.0, 4.0);
      goto L1(r59, r63);
    };
    p30 = prom<V +>{
      all_equal = ldf `all.equal`;
      p28 = prom<V +>{
        a4 = ld a2;
        a5 = force? a4;
        checkMissing(a5);
        return a5;
      };
      p29 = prom<V +>{
        a_2 = ld `a.2`;
        a_3 = force? a_2;
        checkMissing(a_3);
        return a_3;
      };
      r71 = dyn all_equal(p28, p29);
      return r71;
    };
    p31 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L0(r74):
      return r74;
    L4():
      sym9 = ldf dimnames;
      base9 = ldf dimnames in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L6() else L7();
    L5():
      r73 = dyn base8(<lang dimnames(a2)>, <lang list(NULL, NULL, `[`(LETTERS, `:`(1.0, 4.0)))>);
      goto L0(r73);
    L1(r76):
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L8() else L9();
    L6():
      a6 = ld a2;
      a7 = force? a6;
      checkMissing(a7);
      dimnames = ldf dimnames in base;
      r77 = dyn dimnames(a7);
      goto L1(r77);
    L7():
      r75 = dyn base9(<sym a2>);
      goto L1(r75);
    L2(r79):
      identical = ldf identical in base;
      r82 = dyn identical(r76, r79, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r82);
    L8():
      LETTERS4 = ld LETTERS;
      LETTERS5 = force? LETTERS4;
      checkMissing(LETTERS5);
      c4 = `is.object`(LETTERS5);
      if c4 then L10() else L11(LETTERS5);
    L9():
      r78 = dyn base10(NULL, NULL, <lang `[`(LETTERS, `:`(1.0, 4.0))>);
      goto L2(r78);
    L3(dx3):
      list1 = ldf list in base;
      r81 = dyn list1(NULL, NULL, dx3);
      goto L2(r81);
    L10():
      dr2 = tryDispatchBuiltin.1("[", LETTERS5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L12() else L11(dr2);
    L11(LETTERS7):
      __1 = ldf `[` in base;
      r80 = dyn __1(LETTERS7, <int 1, 2, 3, 4>);
      goto L3(r80);
    L12():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r84 = dyn stopifnot(p27, p30, p31);
    check L40() else D25();
  D25():
    deopt 103 [r84];
  L40():
    hist = ldf hist;
    check L41() else D26();
  D26():
    deopt 105 [];
  L41():
    p34 = prom<V +>{
      replicate = ldf replicate;
      p33 = prom<V +>{
        mean2 = ldf mean;
        p32 = prom<V +>{
          rexp = ldf rexp;
          r85 = dyn rexp(10.0);
          return r85;
        };
        r87 = dyn mean2(p32);
        return r87;
      };
      r89 = dyn replicate(100.0, p33);
      return r89;
    };
    r91 = dyn hist(p34);
    check L42() else D27();
  D27():
    deopt 107 [r91];
  L42():
    r92 = clos inner1699941422;
    st foo = r92;
    r93 = clos inner1234038774;
    st bar = r93;
    bar = ldf bar;
    check L43() else D28();
  D28():
    deopt 115 [];
  L43():
    r94 = dyn bar[, x](5.0, 3.0);
    check L44() else D29();
  D29():
    deopt 119 [r94];
  L44():
    popenv;
    return r94;
  }
}
fun inner3204550915(X, FUN, `...`) {
  (reg X:*, reg FUN:*, reg ddd:dots) -+> V { var X:*, var FUN:*, var `...`:dots?, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg X1:*, reg X2:V, reg is_vector:cls, reg r4:V, reg r5:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg X3:*, reg X4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg as_list:cls, reg X5:*, reg X6:V, reg p1:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg _Internal:cls, reg r13:V |
    mkenv;
    st X = X;
    st FUN = FUN;
    st `...` = ddd;
    match_fun = ldf `match.fun`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st FUN = r1;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L1(c) else L12();
  L8():
    X1 = ld X;
    check L10() else D2();
  L9():
    r2 = dyn base(<sym X>);
    goto L0(r2);
  D2():
    deopt 7 [X1];
  L1(c1):
    c10 = `as.logical`(c1);
    if c10 then L17() else L3();
  L10():
    X2 = force? X1;
    checkMissing(X2);
    is_vector = ldf `is.vector` in base;
    r4 = dyn is_vector(X2, "any");
    check L11() else D3();
  L12():
    sym1 = ldf `is.object`;
    base1 = ldf `is.object` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D3():
    deopt 11 [r4];
  L2(c5, r7):
    c7 = `as.logical`(r7);
    c8 = `||`(c5, c7);
    goto L1(c8);
  L3():
    goto L4();
  L4():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L11():
    goto L0(r4);
  L13():
    X3 = ld X;
    check L15() else D4();
  L14():
    r6 = dyn base1(<sym X>);
    goto L2(c, r6);
  L17():
    as_list = ldf `as.list`;
    check L18() else D5();
  D4():
    deopt 14 [c, X3];
  D5():
    deopt 19 [];
  L5(r12):
    popenv;
    return r12;
  L15():
    X4 = force? X3;
    checkMissing(X4);
    c6 = `is.object`(X4);
    goto L2(c, c6);
  L18():
    p1 = prom<V +>{
      X5 = ld X;
      X6 = force? X5;
      checkMissing(X6);
      return X6;
    };
    r9 = dyn as_list(p1);
    check L19() else D6();
  L21():
    _Internal = ldf `.Internal` in base;
    r13 = dyn _Internal(<lang lapply(X, FUN)>);
    goto L5(r13);
  L22():
    r11 = dyn base2(<lang lapply(X, FUN)>);
    goto L5(r11);
  D6():
    deopt 21 [r9];
  L19():
    st X = r9;
    goto L4();
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg outer:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st x = x;
    st y = y;
    outer = ldf outer;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(<sym x>, 3.0);
      goto L0(r2);
    L2():
      r = dyn base[, `length.out`](<sym x>, 3.0);
      goto L0(r);
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r5 = dyn outer(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner1699941422(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg c:cls, reg r2:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(1.0) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L1(2.0) else L1(y);
  L1(y_orDefault):
    st y = y_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>, <sym y>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L6() else D1();
  D1():
    deopt 4 [y1];
  L6():
    y2 = force? y1;
    checkMissing(y2);
    c = ldf c in base;
    r2 = dyn c(x2, y2);
    check L7() else D2();
  D2():
    deopt 7 [r2];
  L7():
    goto L2(r2);
  }
}
fun inner1234038774(n, x) {
  (reg n:*, reg x:*) -+> V { var n:*, var x:*, reg replicate:cls, reg n1:*, reg n2:V, reg p:p(V +), reg foo:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st n = n;
    st x = x;
    replicate = ldf replicate;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p2 = prom<V +>{
      foo = ldf foo;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r2 = dyn foo[x](p1);
      return r2;
    };
    r4 = dyn replicate(p, p2);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}