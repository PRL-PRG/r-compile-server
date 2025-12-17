fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg abline:cls, reg r10:V, reg text:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg abline1:cls, reg p3:p(V +), reg p4:p(V +), reg r18:V, reg abline2:cls, reg r19:V, reg text1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg c3:cls, reg r22:V, reg p5:p(V +), reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg require:cls, reg stats:*, reg stats1:V, reg p6:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg c4:cls, reg r31:V, reg plot1:cls, reg sale5:*, reg sale6:V, reg p7:p(V +), reg r33:V, reg abline3:cls, reg lsfit:cls, reg p8:p(V +), reg sale7:*, reg sale8:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg r38:V, reg abline4:cls, reg lsfit1:cls, reg p11:p(V +), reg sale9:*, reg sale10:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg r43:V, reg lm:cls, reg __:cls, reg r44:V, reg p14:p(V +), reg cars:*, reg cars1:V, reg p15:p(V +), reg r47:V, reg plot2:cls, reg cars2:*, reg cars3:V, reg p16:p(V +), reg r49:V, reg abline5:cls, reg z:*, reg z1:V, reg p17:p(V +), reg r51:V, reg abline6:cls, reg coef:cls, reg z2:*, reg z3:V, reg p18:p(V +), reg r53:V, reg p19:p(V +), reg r55:V, reg abline7:cls, reg lm1:cls, reg __1:cls, reg r56:V, reg p20:p(V +), reg cars4:*, reg cars5:V, reg p21:p(V +), reg r59:V, reg p22:p(V +), reg r61:V, reg abline8:cls, reg coef1:cls, reg mC:*, reg mC1:V, reg p23:p(V +), reg r63:V, reg p24:p(V +), reg r65:V |
    mkenv;
    r = clos inner3889957089;
    st abline = r;
    plot = ldf plot;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(-2.0, 3.0);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang `-`(2.0)>, 3.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1(-1.0, 5.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(<lang `-`(1.0)>, 5.0);
      goto L0(r5);
    };
    r9 = dyn plot[, , type, xlab, ylab, asp](p, p1, "n", "x", "y", 1.0);
    check L3() else D1();
  D1():
    deopt 15 [r9];
  L3():
    abline = ldf abline;
    check L4() else D2();
  D2():
    deopt 17 [];
  L4():
    r10 = dyn abline[h, v, col](0.0, 0.0, "gray60");
    check L5() else D3();
  D3():
    deopt 24 [r10];
  L5():
    text = ldf text;
    check L6() else D4();
  D4():
    deopt 26 [];
  L6():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2(0.0, -0.1);
      goto L0(r13);
    L2():
      r11 = dyn base2(0.0, <lang `-`(0.1)>);
      goto L0(r11);
    };
    r15 = dyn text[, , , col, adj](1.0, 0.0, "abline( h = 0 )", "gray60", p2);
    check L7() else D5();
  D5():
    deopt 34 [r15];
  L7():
    abline1 = ldf abline;
    check L8() else D6();
  D6():
    deopt 36 [];
  L8():
    p3 = prom<V +>{
      return <int -1, 0, 1, 2, 3, 4, 5>;
    };
    p4 = prom<V +>{
      return <int -2, -1, 0, 1, 2, 3>;
    };
    r18 = dyn abline1[h, v, col, lty](p3, p4, "lightgray", 3.0);
    check L9() else D7();
  D7():
    deopt 45 [r18];
  L9():
    abline2 = ldf abline;
    check L10() else D8();
  D8():
    deopt 47 [];
  L10():
    r19 = dyn abline2[a, b, col](1.0, 2.0, 2.0);
    check L11() else D9();
  D9():
    deopt 54 [r19];
  L11():
    text1 = ldf text;
    check L12() else D10();
  D10():
    deopt 56 [];
  L12():
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c3 = ldf c in base;
      r22 = dyn c3(-0.1, -0.1);
      goto L0(r22);
    L2():
      r20 = dyn base3(<lang `-`(0.1)>, <lang `-`(0.1)>);
      goto L0(r20);
    };
    r24 = dyn text1[, , , col, adj](1.0, 3.0, "abline( 1, 2 )", 2.0, p5);
    check L13() else D11();
  D11():
    deopt 64 [r24];
  L13():
    sym4 = ldf require;
    base4 = ldf require in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L14() else L15();
  L0():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L18() else L19();
  L14():
    require = ldf require;
    check L16() else D12();
  L15():
    r25 = dyn base4(<sym stats>);
    goto L0();
  D12():
    deopt 67 [];
  L1(r30):
    st sale5 = r30;
    plot1 = ldf plot;
    check L21() else D15();
  L16():
    p6 = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r28 = dyn require(p6);
    check L17() else D13();
  L18():
    c4 = ldf c in base;
    r31 = dyn c4(6.0, 4.0, 9.0, 7.0, 6.0, 12.0, 8.0, 10.0, 9.0, 13.0);
    check L20() else D14();
  L19():
    r29 = dyn base5(6.0, 4.0, 9.0, 7.0, 6.0, 12.0, 8.0, 10.0, 9.0, 13.0);
    goto L1(r29);
  D13():
    deopt 69 [r28];
  D14():
    deopt 83 [r31];
  D15():
    deopt 86 [];
  L17():
    goto L0();
  L20():
    goto L1(r31);
  L21():
    p7 = prom<V +>{
      sale5 = ld sale5;
      sale6 = force? sale5;
      checkMissing(sale6);
      return sale6;
    };
    r33 = dyn plot1(p7);
    check L22() else D16();
  D16():
    deopt 88 [r33];
  L22():
    abline3 = ldf abline;
    check L23() else D17();
  D17():
    deopt 90 [];
  L23():
    p10 = prom<V +>{
      lsfit = ldf lsfit;
      p8 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p9 = prom<V +>{
        sale7 = ld sale5;
        sale8 = force? sale7;
        checkMissing(sale8);
        return sale8;
      };
      r36 = dyn lsfit(p8, p9);
      return r36;
    };
    r38 = dyn abline3(p10);
    check L24() else D18();
  D18():
    deopt 92 [r38];
  L24():
    abline4 = ldf abline;
    check L25() else D19();
  D19():
    deopt 94 [];
  L25():
    p13 = prom<V +>{
      lsfit1 = ldf lsfit;
      p11 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p12 = prom<V +>{
        sale9 = ld sale5;
        sale10 = force? sale9;
        checkMissing(sale10);
        return sale10;
      };
      r41 = dyn lsfit1[, , intercept](p11, p12, FALSE);
      return r41;
    };
    r43 = dyn abline4[, col](p13, 4.0);
    check L26() else D20();
  D20():
    deopt 98 [r43];
  L26():
    lm = ldf lm;
    check L27() else D21();
  D21():
    deopt 100 [];
  L27():
    p14 = prom<V +>{
      __ = ldf `~` in base;
      r44 = dyn __(<sym dist>, <sym speed>);
      return r44;
    };
    p15 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r47 = dyn lm[, data](p14, p15);
    check L28() else D22();
  D22():
    deopt 104 [r47];
  L28():
    st z = r47;
    plot2 = ldf plot;
    check L29() else D23();
  D23():
    deopt 107 [];
  L29():
    p16 = prom<V +>{
      cars2 = ld cars;
      cars3 = force? cars2;
      checkMissing(cars3);
      return cars3;
    };
    r49 = dyn plot2(p16);
    check L30() else D24();
  D24():
    deopt 109 [r49];
  L30():
    abline5 = ldf abline;
    check L31() else D25();
  D25():
    deopt 111 [];
  L31():
    p17 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r51 = dyn abline5(p17);
    check L32() else D26();
  D26():
    deopt 113 [r51];
  L32():
    abline6 = ldf abline;
    check L33() else D27();
  D27():
    deopt 115 [];
  L33():
    p19 = prom<V +>{
      coef = ldf coef;
      p18 = prom<V +>{
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        return z3;
      };
      r53 = dyn coef(p18);
      return r53;
    };
    r55 = dyn abline6[coef](p19);
    check L34() else D28();
  D28():
    deopt 118 [r55];
  L34():
    abline7 = ldf abline;
    check L35() else D29();
  D29():
    deopt 120 [];
  L35():
    p22 = prom<V +>{
      lm1 = ldf lm;
      p20 = prom<V +>{
        __1 = ldf `~` in base;
        r56 = dyn __1(<sym dist>, 1.0);
        return r56;
      };
      p21 = prom<V +>{
        cars4 = ld cars;
        cars5 = force? cars4;
        checkMissing(cars5);
        return cars5;
      };
      r59 = dyn lm1[, data](p20, p21);
      st mC = r59;
      invisible.0();
      return r59;
    };
    r61 = dyn abline7(p22);
    check L36() else D30();
  D30():
    deopt 122 [r61];
  L36():
    abline8 = ldf abline;
    check L37() else D31();
  D31():
    deopt 124 [];
  L37():
    p24 = prom<V +>{
      coef1 = ldf coef;
      p23 = prom<V +>{
        mC = ld mC;
        mC1 = force? mC;
        checkMissing(mC1);
        return mC1;
      };
      r63 = dyn coef1(p23);
      return r63;
    };
    r65 = dyn abline8[a, b, col](p24, 0.0, "blue");
    check L38() else D32();
  D32():
    deopt 131 [r65];
  L38():
    popenv;
    return r65;
  }
}
fun inner3889957089(a, b, h, v, reg, coef, untf, `...`) {
  (reg a:*, reg b:*, reg h:*, reg v:*, reg reg:*, reg coef:*, reg untf:*, reg ddd:dots) -+> V { var a:*, reg a_isMissing:L, reg a_orDefault:*, var b:*, reg b_isMissing:L, reg b_orDefault:*, var h:*, reg h_isMissing:L, reg h_orDefault:*, var v:*, reg v_isMissing:L, reg v_orDefault:*, var reg:*, reg reg_isMissing:L, reg reg_orDefault:*, var coef:*, reg coef_isMissing:L, reg coef_orDefault:*, var untf:*, reg untf_isMissing:L, reg untf_orDefault:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg reg1:*, reg reg2:V, reg c:V, reg r3:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg a1:*, reg a2:V, reg c2:V, reg r6:V, reg c3:L, reg warning:cls, reg r7:V, reg reg3:*, reg reg4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg a3:*, reg a4:V, reg c4:L, reg c5:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c10:L, reg r12:V, reg a5:*, reg a6:V, reg is_list:cls, reg r13:V, reg c11:L, reg c12:V, reg c14:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg as_vector:cls, reg coef1:cls, reg a7:*, reg a8:V, reg p:p(V +), reg r17:V, reg p1:p(V +), reg r19:V, reg length:cls, reg r20:V, reg p2:*, reg p3:V, reg r21:V, reg c15:L, reg warning1:cls, reg gettextf:cls, reg p4:*, reg p5:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg a9:*, reg a10:V, reg inherits:cls, reg r29:V, reg islm:*, reg islm1:V, reg c16:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg __:cls, reg r34:V, reg r35:cls, reg a11:*, reg a12:V, reg p8:p(V +), reg r37:V, reg attr:cls, reg r38:V, reg as_logical:cls, reg r39:V, reg r40:V, reg r41:V, reg p9:*, reg p10:V, reg r42:V, reg noInt:*, reg noInt1:V, reg c17:L, reg coefa:*, reg coefa1:V, reg c18:L, reg coefa3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r43:V, reg dx2:V, reg coefa4:*, reg coefa5:V, reg c19:L, reg coefa7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __2:cls, reg r44:V, reg p11:*, reg p12:V, reg r45:V, reg c20:L, reg coefa8:*, reg coefa9:V, reg c21:L, reg coefa11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __3:cls, reg r46:V, reg dx7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg coef2:*, reg coef3:V, reg c22:V, reg r49:V, reg c23:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg a13:*, reg a14:V, reg c24:V, reg r52:V, reg c25:L, reg warning2:cls, reg r53:V, reg coef4:*, reg coef5:V, reg c26:L, reg coef7:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg __4:cls, reg r55:V, reg coef8:*, reg coef9:V, reg c27:L, reg coef11:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r56:V, reg int_abline:cls, reg a15:*, reg a16:V, reg p13:p(V +), reg b1:*, reg b2:V, reg p14:p(V +), reg h1:*, reg h2:V, reg p15:p(V +), reg v1:*, reg v2:V, reg p16:p(V +), reg untf1:*, reg untf2:V, reg p17:p(V +), reg ddd1:dots?, reg r62:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg invisible:cls, reg r65:V |
    mkenv;
    a_isMissing = missing.0(a);
    if a_isMissing then L0(NULL) else L0(a);
  L0(a_orDefault):
    st a = a_orDefault;
    b_isMissing = missing.0(b);
    if b_isMissing then L1(NULL) else L1(b);
  L1(b_orDefault):
    st b = b_orDefault;
    h_isMissing = missing.0(h);
    if h_isMissing then L2(NULL) else L2(h);
  L2(h_orDefault):
    st h = h_orDefault;
    v_isMissing = missing.0(v);
    if v_isMissing then L3(NULL) else L3(v);
  L3(v_orDefault):
    st v = v_orDefault;
    reg_isMissing = missing.0(reg);
    if reg_isMissing then L4(NULL) else L4(reg);
  L4(reg_orDefault):
    st reg = reg_orDefault;
    coef_isMissing = missing.0(coef);
    if coef_isMissing then L5(NULL) else L5(coef);
  L5(coef_orDefault):
    st coef = coef_orDefault;
    untf_isMissing = missing.0(untf);
    if untf_isMissing then L6(FALSE) else L6(untf);
  L6(untf_orDefault):
    st untf = untf_orDefault;
    st `...` = ddd;
    r = clos inner1019198373;
    st int_abline = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L42() else L43();
  L7(r2):
    r3 = `!`(r2);
    c1 = `as.logical`(r3);
    if c1 then L45() else L8();
  L42():
    reg1 = ld reg;
    check L44() else D0();
  L43():
    r1 = dyn base(<sym reg>);
    goto L7(r1);
  D0():
    deopt 4 [reg1];
  L8():
    goto L12();
  L12():
    sym2 = ldf `is.object`;
    base2 = ldf `is.object` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L44():
    reg2 = force? reg1;
    checkMissing(reg2);
    c = `==`(reg2, NULL);
    goto L7(c);
  L45():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L9(r5):
    r6 = `!`(r5);
    c3 = `as.logical`(r6);
    if c3 then L49() else L10();
  L13(r10):
    c5 = `as.logical`(r10);
    if c5 then L14(c5) else L58();
  L46():
    a1 = ld a;
    check L48() else D1();
  L47():
    r4 = dyn base1(<sym a>);
    goto L9(r4);
  L55():
    a3 = ld a;
    check L57() else D5();
  L56():
    r9 = dyn base2(<sym a>);
    goto L13(r9);
  D1():
    deopt 9 [a1];
  D5():
    deopt 25 [a3];
  L10():
    goto L11();
  L11():
    reg3 = ld reg;
    check L53() else D4();
  L14(c6):
    c14 = `as.logical`(c6);
    if c14 then L64() else L16();
  L48():
    a2 = force? a1;
    checkMissing(a2);
    c2 = `==`(a2, NULL);
    goto L9(c2);
  L49():
    warning = ldf warning;
    check L50() else D2();
  L57():
    a4 = force? a3;
    checkMissing(a4);
    c4 = `is.object`(a4);
    goto L13(c4);
  L58():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  D2():
    deopt 14 [];
  D4():
    deopt 19 [reg3];
  L15(c10, r12):
    c11 = `as.logical`(r12);
    c12 = `||`(c10, c11);
    goto L14(c12);
  L16():
    goto L32();
  L32():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L50():
    r7 = dyn warning("'a' is overridden by 'reg'");
    check L51() else D3();
  L53():
    reg4 = force? reg3;
    checkMissing(reg4);
    st a = reg4;
    goto L12();
  L59():
    a5 = ld a;
    check L61() else D6();
  L60():
    r11 = dyn base3(<sym a>);
    goto L15(c5, r11);
  L64():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  D3():
    deopt 16 [r7];
  D6():
    deopt 30 [c5, a5];
  L17(r15):
    st p = r15;
    p2 = ld p;
    check L70() else D11();
  L33(r48):
    r49 = `!`(r48);
    c23 = `as.logical`(r49);
    if c23 then L114() else L34();
  L51():
    goto L11();
  L61():
    a6 = force? a5;
    checkMissing(a6);
    is_list = ldf `is.list` in base;
    r13 = dyn is_list(a6);
    check L62() else D7();
  L65():
    as_vector = ldf `as.vector`;
    check L67() else D8();
  L66():
    r14 = dyn base4(<lang `<-`(coefa, as.vector(coef(a)))>);
    goto L17(r14);
  L111():
    coef2 = ld coef;
    check L113() else D28();
  L112():
    r47 = dyn base8(<sym coef>);
    goto L33(r47);
  D7():
    deopt 33 [c5, r13];
  D8():
    deopt 38 [];
  D11():
    deopt 45 [p2];
  D28():
    deopt 123 [coef2];
  L34():
    goto L40();
  L40():
    int_abline = ldf int_abline;
    check L131() else D34();
  L62():
    goto L15(c5, r13);
  L67():
    p1 = prom<V +>{
      coef1 = ldf coef;
      p = prom<V +>{
        a7 = ld a;
        a8 = force? a7;
        checkMissing(a8);
        return a8;
      };
      r17 = dyn coef1(p);
      return r17;
    };
    r19 = dyn as_vector(p1);
    check L68() else D9();
  L70():
    p3 = force? p2;
    checkMissing(p3);
    r21 = `>`(p3, 2.0);
    c15 = `as.logical`(r21);
    if c15 then L71() else L18();
  L113():
    coef3 = force? coef2;
    checkMissing(coef3);
    c22 = `==`(coef3, NULL);
    goto L33(c22);
  L114():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  D9():
    deopt 40 [r19];
  D34():
    deopt 153 [];
  L18():
    goto L19();
  L19():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L35(r51):
    r52 = `!`(r51);
    c25 = `as.logical`(r52);
    if c25 then L118() else L36();
  L68():
    st coefa = r19;
    length = ldf length in base;
    r20 = dyn length(r19);
    check L69() else D10();
  L71():
    warning1 = ldf warning;
    check L72() else D12();
  L115():
    a13 = ld a;
    check L117() else D29();
  L116():
    r50 = dyn base9(<sym a>);
    goto L35(r50);
  L131():
    p13 = prom<V +>{
      a15 = ld a;
      a16 = force? a15;
      checkMissing(a16);
      return a16;
    };
    p14 = prom<V +>{
      b1 = ld b;
      b2 = force? b1;
      checkMissing(b2);
      return b2;
    };
    p15 = prom<V +>{
      h1 = ld h;
      h2 = force? h1;
      checkMissing(h2);
      return h2;
    };
    p16 = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    p17 = prom<V +>{
      untf1 = ld untf;
      untf2 = force? untf1;
      checkMissing(untf2);
      return untf2;
    };
    ddd1 = ld `...`;
    r62 = dyn int_abline[a, b, h, v, untf, `...`](p13, p14, p15, p16, p17, ddd1);
    check L132() else D35();
  D10():
    deopt 43 [r20];
  D12():
    deopt 50 [];
  D29():
    deopt 128 [a13];
  D35():
    deopt 165 [r62];
  L20(r28):
    st islm = r28;
    islm = ld islm;
    check L79() else D16();
  L36():
    goto L37();
  L37():
    coef4 = ld coef;
    check L122() else D32();
  L69():
    goto L17(r20);
  L72():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        p4 = ld p;
        p5 = force? p4;
        checkMissing(p5);
        return p5;
      };
      r23 = dyn gettextf("only using the first two of %d regression coefficients", p6);
      return r23;
    };
    r25 = dyn warning1[, domain](p7, NA_LGL);
    check L73() else D13();
  L75():
    a9 = ld a;
    check L77() else D14();
  L76():
    r27 = dyn base5(<sym a>, "lm");
    goto L20(r27);
  L117():
    a14 = force? a13;
    checkMissing(a14);
    c24 = `==`(a14, NULL);
    goto L35(c24);
  L118():
    warning2 = ldf warning;
    check L119() else D30();
  L132():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  D13():
    deopt 54 [r25];
  D14():
    deopt 59 [a9];
  D16():
    deopt 66 [islm];
  D30():
    deopt 133 [];
  D32():
    deopt 138 [coef4];
  L41(r64):
    popenv;
    return r64;
  L73():
    goto L19();
  L77():
    a10 = force? a9;
    checkMissing(a10);
    inherits = ldf inherits in base;
    r29 = dyn inherits(a10, "lm", FALSE);
    check L78() else D15();
  L79():
    islm1 = force? islm;
    checkMissing(islm1);
    c16 = `as.logical`(islm1);
    if c16 then L80() else L21();
  L119():
    r53 = dyn warning2("'a' and 'b' are overridden by 'coef'");
    check L120() else D31();
  L122():
    coef5 = force? coef4;
    checkMissing(coef5);
    c26 = `is.object`(coef5);
    if c26 then L123() else L124(coef5);
  L133():
    invisible = ldf invisible in base;
    r65 = dyn invisible();
    check L135() else D36();
  L134():
    r63 = dyn base10();
    goto L41(r63);
  D15():
    deopt 64 [r29];
  D31():
    deopt 135 [r53];
  D36():
    deopt 169 [r65];
  L21():
    p9 = ld p;
    check L91() else D22();
  L24(r41):
    st noInt = r41;
    noInt = ld noInt;
    check L92() else D23();
  L38(dx10):
    st a = dx10;
    coef8 = ld coef;
    check L126() else D33();
  L78():
    goto L20(r29);
  L80():
    sym6 = ldf `as.logical`;
    base6 = ldf `as.logical` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L120():
    goto L37();
  L123():
    dr6 = tryDispatchBuiltin.1("[", coef5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L125() else L124(dr6);
  L124(coef7):
    __4 = ldf `[` in base;
    r55 = dyn __4(coef7, 1);
    goto L38(r55);
  L135():
    goto L41(r65);
  D22():
    deopt 86 [p9];
  D23():
    deopt 91 [noInt];
  D33():
    deopt 144 [coef8];
  L22(r31):
    r40 = `!`(r31);
    goto L24(r40);
  L81():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L82():
    r30 = dyn base6(<lang attr(`::`(stats, terms)(a), "intercept")>);
    goto L22(r30);
  L91():
    p10 = force? p9;
    checkMissing(p10);
    r42 = `==`(p10, 1.0);
    goto L24(r42);
  L92():
    noInt1 = force? noInt;
    checkMissing(noInt1);
    c17 = `as.logical`(noInt1);
    if c17 then L93() else L25();
  L125():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L38(dx9);
  L126():
    coef9 = force? coef8;
    checkMissing(coef9);
    c27 = `is.object`(coef9);
    if c27 then L127() else L128(coef9);
  L23(r33):
    as_logical = ldf `as.logical` in base;
    r39 = dyn as_logical(r33);
    check L89() else D21();
  L25():
    coefa4 = ld coefa;
    check L99() else D25();
  L27(dx2):
    goto L32();
  L39(dx12):
    st b = dx12;
    goto L40();
  L83():
    __ = ldf `::`;
    check L85() else D17();
  L84():
    r32 = dyn base7(<lang `::`(stats, terms)(a)>, "intercept");
    goto L23(r32);
  L93():
    st a = 0.0;
    coefa = ld coefa;
    check L94() else D24();
  L127():
    dr8 = tryDispatchBuiltin.1("[", coef9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L129() else L128(dr8);
  L128(coef11):
    __5 = ldf `[` in base;
    r56 = dyn __5(coef11, 2);
    goto L39(r56);
  D17():
    deopt 73 [];
  D21():
    deopt 84 [r39];
  D24():
    deopt 96 [coefa];
  D25():
    deopt 102 [coefa4];
  L85():
    r34 = dyn __("stats", "terms");
    check L86() else D18();
  L89():
    goto L22(r39);
  L94():
    coefa1 = force? coefa;
    checkMissing(coefa1);
    c18 = `is.object`(coefa1);
    if c18 then L95() else L96(coefa1);
  L99():
    coefa5 = force? coefa4;
    checkMissing(coefa5);
    c19 = `is.object`(coefa5);
    if c19 then L100() else L101(coefa5);
  L129():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L39(dx11);
  D18():
    deopt 76 [r34];
  L26(dx1):
    st b = dx1;
    goto L27(dx1);
  L28(dx4):
    st a = dx4;
    p11 = ld p;
    check L103() else D26();
  L86():
    checkFun.0(r34);
    r35 = r34 as cls;
    p8 = prom<V +>{
      a11 = ld a;
      a12 = force? a11;
      checkMissing(a12);
      return a12;
    };
    r37 = dyn r35(p8);
    check L87() else D19();
  L95():
    dr = tryDispatchBuiltin.1("[", coefa1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L97() else L96(dr);
  L96(coefa3):
    __1 = ldf `[` in base;
    r43 = dyn __1(coefa3, 1);
    goto L26(r43);
  L100():
    dr2 = tryDispatchBuiltin.1("[", coefa5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L102() else L101(dr2);
  L101(coefa7):
    __2 = ldf `[` in base;
    r44 = dyn __2(coefa7, 1);
    goto L28(r44);
  D19():
    deopt 79 [r37];
  D26():
    deopt 108 [p11];
  L87():
    attr = ldf attr in base;
    r38 = dyn attr(r37, "intercept");
    check L88() else D20();
  L97():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L102():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx3);
  L103():
    p12 = force? p11;
    checkMissing(p12);
    r45 = `>=`(p12, 2.0);
    c20 = `as.logical`(r45);
    if c20 then L104() else L29();
  D20():
    deopt 82 [r38];
  L29():
    goto L31(0.0);
  L31(dx7):
    st b = dx7;
    goto L27(dx7);
  L88():
    goto L23(r38);
  L104():
    coefa8 = ld coefa;
    check L105() else D27();
  D27():
    deopt 112 [coefa8];
  L105():
    coefa9 = force? coefa8;
    checkMissing(coefa9);
    c21 = `is.object`(coefa9);
    if c21 then L106() else L107(coefa9);
  L30(dx6):
    goto L31(dx6);
  L106():
    dr4 = tryDispatchBuiltin.1("[", coefa9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L108() else L107(dr4);
  L107(coefa11):
    __3 = ldf `[` in base;
    r46 = dyn __3(coefa11, 2);
    goto L30(r46);
  L108():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx5);
  }
}
fun inner1019198373(a, b, h, v, untf, col, lty, lwd, `...`) {
  (reg a:*, reg b:*, reg h:*, reg v:*, reg untf:*, reg col:*, reg lty:*, reg lwd:*, reg ddd:dots) -+> V { var a:*, var b:*, var h:*, var v:*, var untf:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par1:cls, reg r2:V, reg p1:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par2:cls, reg r4:V, reg p2:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg _External_graphics:cls, reg C_abline:*, reg C_abline1:V, reg p3:p(V +), reg a1:*, reg a2:V, reg p4:p(V +), reg b1:*, reg b2:V, reg p5:p(V +), reg h1:*, reg h2:V, reg p6:p(V +), reg v1:*, reg v2:V, reg p7:p(V +), reg untf1:*, reg untf2:V, reg p8:p(V +), reg col1:*, reg col2:V, reg p9:p(V +), reg lty1:*, reg lty2:V, reg p10:p(V +), reg lwd1:*, reg lwd2:V, reg p11:p(V +), reg ddd1:dots?, reg r17:V |
    mkenv;
    st a = a;
    st b = b;
    st h = h;
    st v = v;
    st untf = untf;
    col_isMissing = missing.0(col);
    if col_isMissing then L0() else L1(col);
  L0():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("col");
      return r;
    };
    goto L1(p);
  L1(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L2() else L3(lty);
  L2():
    p1 = prom<V +>{
      par1 = ldf par;
      r2 = dyn par1("lty");
      return r2;
    };
    goto L3(p1);
  L3(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L4() else L5(lwd);
  L4():
    p2 = prom<V +>{
      par2 = ldf par;
      r4 = dyn par2("lwd");
      return r4;
    };
    goto L5(p2);
  L5(lwd_orDefault):
    st lwd = lwd_orDefault;
    st `...` = ddd;
    sym = ldf `.External.graphics`;
    base = ldf `.External.graphics` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L6(r7):
    popenv;
    return r7;
  L7():
    _External_graphics = ldf `.External.graphics`;
    check L9() else D0();
  L8():
    r6 = dyn base(<sym C_abline>, <sym a>, <sym b>, <sym h>, <sym v>, <sym untf>, <sym col>, <sym lty>, <sym lwd>, <sym ...>);
    goto L6(r6);
  D0():
    deopt 2 [];
  L9():
    p3 = prom<V +>{
      C_abline = ld C_abline;
      C_abline1 = force? C_abline;
      checkMissing(C_abline1);
      return C_abline1;
    };
    p4 = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    p5 = prom<V +>{
      b1 = ld b;
      b2 = force? b1;
      checkMissing(b2);
      return b2;
    };
    p6 = prom<V +>{
      h1 = ld h;
      h2 = force? h1;
      checkMissing(h2);
      return h2;
    };
    p7 = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    p8 = prom<V +>{
      untf1 = ld untf;
      untf2 = force? untf1;
      checkMissing(untf2);
      return untf2;
    };
    p9 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p10 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p11 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    ddd1 = ld `...`;
    r17 = dyn _External_graphics[, , , , , , , , , `...`](p3, p4, p5, p6, p7, p8, p9, p10, p11, ddd1);
    check L10() else D1();
  D1():
    deopt 13 [r17];
  L10():
    goto L6(r17);
  }
}