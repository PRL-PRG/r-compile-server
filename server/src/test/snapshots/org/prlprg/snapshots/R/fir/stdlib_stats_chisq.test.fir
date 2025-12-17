fun main() {
  () -+> V { reg r:cls, reg as_table:cls, reg rbind:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg c3:cls, reg r19:V, reg list:cls, reg r20:V, reg l:*, reg dimnames__:cls, reg r21:V, reg chisq_test:cls, reg M:*, reg M1:V, reg p3:p(V +), reg r23:V, reg Xsq:*, reg Xsq1:V, reg c4:L, reg Xsq3:V, reg dr:V, reg dc:L, reg dx:V, reg r24:V, reg Xsq4:*, reg Xsq5:V, reg c5:L, reg Xsq7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r25:V, reg Xsq8:*, reg Xsq9:V, reg c6:L, reg Xsq11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r26:V, reg Xsq12:*, reg Xsq13:V, reg c7:L, reg Xsq15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r27:V, reg matrix:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg c8:cls, reg r30:V, reg p4:p(V +), reg r32:V, reg chisq_test1:cls, reg x:*, reg x1:V, reg p5:p(V +), reg r34:V, reg c9:L, reg r36:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r37:V, reg chisq_test2:cls, reg x2:*, reg x3:V, reg p6:p(V +), reg r39:V, reg c10:L, reg r41:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg c11:cls, reg r45:V, reg chisq_test3:cls, reg x4:*, reg x5:V, reg p7:p(V +), reg r47:V, reg chisq_test4:cls, reg as_table1:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg r49:V, reg p9:p(V +), reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg c12:cls, reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg c13:cls, reg r57:V, reg try:cls, reg chisq_test5:cls, reg x8:*, reg x9:V, reg p10:p(V +), reg p11:*, reg p12:V, reg p13:p(V +), reg r60:V, reg p14:p(V +), reg r62:V, reg chisq_test6:cls, reg x10:*, reg x11:V, reg p15:p(V +), reg p16:*, reg p17:V, reg p18:p(V +), reg r65:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg r67:V, reg c14:cls, reg r68:V, reg chisq_test7:cls, reg x12:*, reg x13:V, reg p19:p(V +), reg p20:*, reg p21:V, reg p22:p(V +), reg r71:V, reg chisq_test8:cls, reg x14:*, reg x15:V, reg p23:p(V +), reg p24:*, reg p25:V, reg p26:p(V +), reg r74:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r75:V, reg r76:V, reg runif:cls, reg r77:V, reg r78:V, reg trunc:cls, reg r79:V, reg chisq_test9:cls, reg table:cls, reg x16:*, reg x17:V, reg p27:p(V +), reg r81:V, reg p28:p(V +), reg r83:V |
    mkenv;
    r = clos inner298077229;
    st `chisq.test` = r;
    as_table = ldf `as.table`;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    p2 = prom<V +>{
      rbind = ldf rbind;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        c = ldf c in base;
        r3 = dyn c(762.0, 327.0, 468.0);
        goto L0(r3);
      L2():
        r1 = dyn base(762.0, 327.0, 468.0);
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
        r7 = dyn c1(484.0, 239.0, 477.0);
        goto L0(r7);
      L2():
        r5 = dyn base1(484.0, 239.0, 477.0);
        goto L0(r5);
      };
      r9 = dyn rbind(p, p1);
      return r9;
    };
    r11 = dyn as_table(p2);
    check L9() else D1();
  D1():
    deopt 6 [r11];
  L9():
    st M = r11;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L0(r13):
    l = ld M;
    dimnames__ = ldf `dimnames<-`;
    check L19() else D5();
  L10():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L12() else L13();
  L11():
    r12 = dyn base2[gender, party](<lang c("F", "M")>, <lang c("Democrat", "Independent", "Republican")>);
    goto L0(r12);
  D5():
    deopt 28 [r13, l, r13];
  L1(r15):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L15() else L16();
  L12():
    c2 = ldf c in base;
    r16 = dyn c2("F", "M");
    check L14() else D2();
  L13():
    r14 = dyn base3("F", "M");
    goto L1(r14);
  L19():
    r21 = dyn dimnames__(l, NULL, r13);
    check L20() else D6();
  D2():
    deopt 15 [r16];
  D6():
    deopt 30 [r13, r21];
  L2(r18):
    list = ldf list in base;
    r20 = dyn list(r15, r18);
    check L18() else D4();
  L14():
    goto L1(r16);
  L15():
    c3 = ldf c in base;
    r19 = dyn c3("Democrat", "Independent", "Republican");
    check L17() else D3();
  L16():
    r17 = dyn base4("Democrat", "Independent", "Republican");
    goto L2(r17);
  L20():
    st M = r21;
    chisq_test = ldf `chisq.test`;
    check L21() else D7();
  D3():
    deopt 23 [r19];
  D4():
    deopt 26 [r20];
  D7():
    deopt 33 [];
  L17():
    goto L2(r19);
  L18():
    goto L0(r20);
  L21():
    p3 = prom<V +>{
      M = ld M;
      M1 = force? M;
      checkMissing(M1);
      return M1;
    };
    r23 = dyn chisq_test(p3);
    check L22() else D8();
  D8():
    deopt 35 [r23];
  L22():
    st Xsq = r23;
    Xsq = ld Xsq;
    check L23() else D9();
  D9():
    deopt 37 [Xsq];
  L23():
    Xsq1 = force? Xsq;
    checkMissing(Xsq1);
    c4 = `is.object`(Xsq1);
    if c4 then L25() else L26(Xsq1);
  L24():
    Xsq4 = ld Xsq;
    check L28() else D10();
  L25():
    dr = tryDispatchBuiltin.1("$", Xsq1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(Xsq3):
    r24 = `$`(Xsq3, <sym observed>);
    goto L24();
  D10():
    deopt 40 [Xsq4];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24();
  L28():
    Xsq5 = force? Xsq4;
    checkMissing(Xsq5);
    c5 = `is.object`(Xsq5);
    if c5 then L30() else L31(Xsq5);
  L29():
    Xsq8 = ld Xsq;
    check L33() else D11();
  L30():
    dr2 = tryDispatchBuiltin.1("$", Xsq5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(dr2);
  L31(Xsq7):
    r25 = `$`(Xsq7, <sym expected>);
    goto L29();
  D11():
    deopt 43 [Xsq8];
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L29();
  L33():
    Xsq9 = force? Xsq8;
    checkMissing(Xsq9);
    c6 = `is.object`(Xsq9);
    if c6 then L35() else L36(Xsq9);
  L34():
    Xsq12 = ld Xsq;
    check L38() else D12();
  L35():
    dr4 = tryDispatchBuiltin.1("$", Xsq9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(dr4);
  L36(Xsq11):
    r26 = `$`(Xsq11, <sym residuals>);
    goto L34();
  D12():
    deopt 46 [Xsq12];
  L37():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L34();
  L38():
    Xsq13 = force? Xsq12;
    checkMissing(Xsq13);
    c7 = `is.object`(Xsq13);
    if c7 then L40() else L41(Xsq13);
  L39():
    matrix = ldf matrix;
    check L43() else D13();
  L40():
    dr6 = tryDispatchBuiltin.1("$", Xsq13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41(dr6);
  L41(Xsq15):
    r27 = `$`(Xsq15, <sym stdres>);
    goto L39();
  D13():
    deopt 50 [];
  L42():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L39();
  L43():
    p4 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c8 = ldf c in base;
      r30 = dyn c8(12.0, 5.0, 7.0, 7.0);
      goto L0(r30);
    L2():
      r28 = dyn base5(12.0, 5.0, 7.0, 7.0);
      goto L0(r28);
    };
    r32 = dyn matrix[, ncol](p4, 2.0);
    check L44() else D14();
  D14():
    deopt 54 [r32];
  L44():
    st x = r32;
    chisq_test1 = ldf `chisq.test`;
    check L45() else D15();
  D15():
    deopt 57 [];
  L45():
    p5 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r34 = dyn chisq_test1(p5);
    check L46() else D16();
  D16():
    deopt 59 [r34];
  L46():
    c9 = `is.object`(r34);
    if c9 then L48() else L49(r34);
  L47():
    chisq_test2 = ldf `chisq.test`;
    check L51() else D17();
  L48():
    dr8 = tryDispatchBuiltin.1("$", r34);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L50() else L49(dr8);
  L49(r36):
    r37 = `$`(r36, <sym p.value>);
    goto L47();
  D17():
    deopt 62 [];
  L50():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L47();
  L51():
    p6 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r39 = dyn chisq_test2[, `simulate.p.value`, B](p6, TRUE, 10000.0);
    check L52() else D18();
  D18():
    deopt 68 [r39];
  L52():
    c10 = `is.object`(r39);
    if c10 then L54() else L55(r39);
  L53():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L54():
    dr10 = tryDispatchBuiltin.1("$", r39);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L56() else L55(dr10);
  L55(r41):
    r42 = `$`(r41, <sym p.value>);
    goto L53();
  L3(r44):
    st x = r44;
    chisq_test3 = ldf `chisq.test`;
    check L60() else D20();
  L56():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L53();
  L57():
    c11 = ldf c in base;
    r45 = dyn c11(20.0, 15.0, 25.0);
    check L59() else D19();
  L58():
    r43 = dyn base6[A, B, C](20.0, 15.0, 25.0);
    goto L3(r43);
  D19():
    deopt 79 [r45];
  D20():
    deopt 82 [];
  L59():
    goto L3(r45);
  L60():
    p7 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r47 = dyn chisq_test3(p7);
    check L61() else D21();
  D21():
    deopt 84 [r47];
  L61():
    chisq_test4 = ldf `chisq.test`;
    check L62() else D22();
  D22():
    deopt 86 [];
  L62():
    p9 = prom<V +>{
      as_table1 = ldf `as.table`;
      p8 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r49 = dyn as_table1(p8);
      return r49;
    };
    r51 = dyn chisq_test4(p9);
    check L63() else D23();
  D23():
    deopt 88 [r51];
  L63():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  L4(r53):
    st x = r53;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L67() else L68();
  L64():
    c12 = ldf c in base;
    r54 = dyn c12(89.0, 37.0, 30.0, 28.0, 2.0);
    check L66() else D24();
  L65():
    r52 = dyn base7(89.0, 37.0, 30.0, 28.0, 2.0);
    goto L4(r52);
  D24():
    deopt 97 [r54];
  L5(r56):
    st p = r56;
    try = ldf try;
    check L70() else D26();
  L66():
    goto L4(r54);
  L67():
    c13 = ldf c in base;
    r57 = dyn c13(40.0, 20.0, 20.0, 15.0, 5.0);
    check L69() else D25();
  L68():
    r55 = dyn base8(40.0, 20.0, 20.0, 15.0, 5.0);
    goto L5(r55);
  D25():
    deopt 107 [r57];
  D26():
    deopt 110 [];
  L69():
    goto L5(r57);
  L70():
    p14 = prom<V +>{
      chisq_test5 = ldf `chisq.test`;
      p10 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      p13 = prom<V +>{
        p11 = ld p;
        p12 = force? p11;
        checkMissing(p12);
        return p12;
      };
      r60 = dyn chisq_test5[, p](p10, p13);
      return r60;
    };
    r62 = dyn try(p14);
    check L71() else D27();
  D27():
    deopt 112 [r62];
  L71():
    chisq_test6 = ldf `chisq.test`;
    check L72() else D28();
  D28():
    deopt 114 [];
  L72():
    p15 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p18 = prom<V +>{
      p16 = ld p;
      p17 = force? p16;
      checkMissing(p17);
      return p17;
    };
    r65 = dyn chisq_test6[, p, `rescale.p`](p15, p18, TRUE);
    check L73() else D29();
  D29():
    deopt 120 [r65];
  L73():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L74() else L75();
  L6(r67):
    st p = r67;
    chisq_test7 = ldf `chisq.test`;
    check L77() else D31();
  L74():
    c14 = ldf c in base;
    r68 = dyn c14(0.4, 0.2, 0.2, 0.19, 0.01);
    check L76() else D30();
  L75():
    r66 = dyn base9(0.4, 0.2, 0.2, 0.19, 0.01);
    goto L6(r66);
  D30():
    deopt 129 [r68];
  D31():
    deopt 132 [];
  L76():
    goto L6(r68);
  L77():
    p19 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p22 = prom<V +>{
      p20 = ld p;
      p21 = force? p20;
      checkMissing(p21);
      return p21;
    };
    r71 = dyn chisq_test7[, p](p19, p22);
    check L78() else D32();
  D32():
    deopt 136 [r71];
  L78():
    chisq_test8 = ldf `chisq.test`;
    check L79() else D33();
  D33():
    deopt 138 [];
  L79():
    p23 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    p26 = prom<V +>{
      p24 = ld p;
      p25 = force? p24;
      checkMissing(p25);
      return p25;
    };
    r74 = dyn chisq_test8[, p, `simulate.p.value`](p23, p26, TRUE);
    check L80() else D34();
  D34():
    deopt 144 [r74];
  L80():
    sym10 = ldf trunc;
    base10 = ldf trunc in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L81() else L82();
  L7(r76):
    st x = r76;
    chisq_test9 = ldf `chisq.test`;
    check L86() else D38();
  L81():
    runif = ldf runif;
    check L83() else D35();
  L82():
    r75 = dyn base10(<lang `*`(5.0, runif(100.0))>);
    goto L7(r75);
  D35():
    deopt 149 [5.0];
  D38():
    deopt 157 [];
  L83():
    r77 = dyn runif(100.0);
    check L84() else D36();
  L86():
    p28 = prom<V +>{
      table = ldf table;
      p27 = prom<V +>{
        x16 = ld x;
        x17 = force? x16;
        checkMissing(x17);
        return x17;
      };
      r81 = dyn table(p27);
      return r81;
    };
    r83 = dyn chisq_test9(p28);
    check L87() else D39();
  D36():
    deopt 151 [5.0, r77];
  D39():
    deopt 159 [r83];
  L84():
    r78 = `*`(5.0, r77);
    trunc = ldf trunc in base;
    r79 = dyn trunc(r78);
    check L85() else D37();
  L87():
    popenv;
    return r83;
  D37():
    deopt 154 [r79];
  L85():
    goto L7(r79);
  }
}
fun inner298077229(x, y, correct, p, `rescale.p`, `simulate.p.value`, B) {
  (reg x:*, reg y:*, reg correct:*, reg p:*, reg rescale_p:*, reg simulate_p_value:*, reg B:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var correct:*, reg correct_isMissing:L, reg correct_orDefault:*, var p:*, reg p_isMissing:L, reg p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p1:p(V +), var `rescale.p`:*, reg rescale_p_isMissing:L, reg rescale_p_orDefault:*, var `simulate.p.value`:*, reg simulate_p_value_isMissing:L, reg simulate_p_value_orDefault:*, var B:*, reg B_isMissing:L, reg B_orDefault:*, reg deparse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg r10:V, reg c:L, reg as_matrix:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r16:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x7:*, reg x8:V, reg dim:cls, reg r21:V, reg min:cls, reg r22:V, reg r23:V, reg c2:L, reg as_vector:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg x11:*, reg x12:V, reg is_matrix1:cls, reg r30:V, reg r31:V, reg c3:L, reg c5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg c8:L, reg r33:V, reg y1:*, reg y2:V, reg c9:V, reg r34:V, reg c10:L, reg c11:V, reg c13:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg x13:*, reg x14:V, reg length:cls, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg r42:V, reg y3:*, reg y4:V, reg length1:cls, reg r43:V, reg r44:V, reg c14:L, reg stop:cls, reg r45:V, reg deparse1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg substitute1:cls, reg r49:V, reg p6:p(V +), reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg DNAME:*, reg DNAME1:V, reg length2:cls, reg r54:V, reg r55:V, reg c15:L, reg c16:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg c20:L, reg r57:V, reg DNAME2:*, reg DNAME3:V, reg nchar:cls, reg r58:V, reg r59:V, reg c21:L, reg c22:V, reg c24:L, reg r60:V, reg DNAME4:*, reg DNAME5:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg DNAME6:*, reg DNAME7:V, reg length3:cls, reg r63:V, reg r64:V, reg c25:L, reg c26:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r65:V, reg c30:L, reg r66:V, reg DNAME8:*, reg DNAME9:V, reg nchar1:cls, reg r67:V, reg r68:V, reg c31:L, reg c32:V, reg c34:L, reg r69:V, reg DNAME10:*, reg DNAME11:V, reg complete_cases:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg y5:*, reg y6:V, reg p8:p(V +), reg r72:V, reg factor:cls, reg x17:*, reg x18:V, reg c35:L, reg x20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg OK:*, reg OK1:V, reg __:cls, reg r73:V, reg p9:p(V +), reg r75:V, reg factor1:cls, reg y7:*, reg y8:V, reg c36:L, reg y10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg OK2:*, reg OK3:V, reg __1:cls, reg r76:V, reg p10:p(V +), reg r78:V, reg nlevels:cls, reg x21:*, reg x22:V, reg p11:p(V +), reg r80:V, reg r81:V, reg c37:L, reg c38:V, reg nlevels1:cls, reg y11:*, reg y12:V, reg p12:p(V +), reg r83:V, reg r84:V, reg c40:L, reg c41:V, reg c43:L, reg stop1:cls, reg r85:V, reg table:cls, reg x23:*, reg x24:V, reg p13:p(V +), reg y13:*, reg y14:V, reg p14:p(V +), reg r89:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg r91:V, reg xname:*, reg xname1:V, reg yname:*, reg yname1:V, reg c44:cls, reg r92:V, reg l:*, reg dimnames:cls, reg r93:V, reg names__:cls, reg r94:V, reg dimnames__:cls, reg r95:V, reg paste:cls, reg paste1:cls, reg DNAME12:*, reg DNAME13:V, reg p15:p(V +), reg r97:V, reg p16:p(V +), reg paste2:cls, reg DNAME14:*, reg DNAME15:V, reg p17:p(V +), reg r100:V, reg p18:p(V +), reg r102:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r104:V, reg r105:V, reg x25:*, reg x26:V, reg r106:V, reg any:cls, reg r107:V, reg c45:L, reg c46:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r108:V, reg c50:L, reg r109:V, reg x27:*, reg x28:V, reg anyNA:cls, reg r110:V, reg c51:L, reg c52:V, reg c54:L, reg stop2:cls, reg r111:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r113:V, reg r114:V, reg x29:*, reg x30:V, reg sum:cls, reg r115:V, reg r116:V, reg c55:L, reg stop3:cls, reg r117:V, reg simulate_p_value1:*, reg simulate_p_value2:V, reg c56:L, reg r119:cls, reg _Machine:*, reg _Machine1:V, reg c57:L, reg r122:R, reg r123:R, reg _Machine3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r126:R, reg r127:R, reg dx5:V, reg r128:V, reg r129:V, reg r130:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r132:V, reg r133:V, reg x31:*, reg x32:V, reg is_matrix2:cls, reg r134:V, reg c58:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r135:V, reg r136:V, reg nrow:cls, reg x33:*, reg x34:V, reg p19:p(V +), reg r138:V, reg as_integer:cls, reg r139:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r140:V, reg r141:V, reg ncol:cls, reg x35:*, reg x36:V, reg p20:p(V +), reg r143:V, reg as_integer1:cls, reg r144:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r145:V, reg r146:V, reg nr:*, reg nr1:V, reg is_na:cls, reg r147:V, reg c59:L, reg c60:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r148:V, reg c64:L, reg r149:V, reg nc:*, reg nc1:V, reg is_na1:cls, reg r150:V, reg c65:L, reg c66:V, reg c68:L, reg c69:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r151:V, reg c73:L, reg r152:V, reg nr2:*, reg nr3:V, reg nc2:*, reg nc3:V, reg r153:V, reg is_na2:cls, reg r154:V, reg c74:L, reg c75:V, reg c77:L, reg stop4:cls, reg r155:V, reg rowSums:cls, reg x37:*, reg x38:V, reg p21:p(V +), reg r158:V, reg colSums:cls, reg x39:*, reg x40:V, reg p22:p(V +), reg r160:V, reg outer:cls, reg sr:*, reg sr1:V, reg p23:p(V +), reg sc:*, reg sc1:V, reg p24:p(V +), reg r163:V, reg n:*, reg n1:V, reg r164:V, reg r165:cls, reg outer1:cls, reg sr2:*, reg sr3:V, reg p25:p(V +), reg sc2:*, reg sc3:V, reg p26:p(V +), reg v:*, reg v1:V, reg p27:p(V +), reg n2:*, reg n3:V, reg p28:p(V +), reg r170:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r171:V, reg r172:V, reg x41:*, reg x42:V, reg dimnames1:cls, reg r173:V, reg l1:*, reg dimnames__1:cls, reg r174:V, reg simulate_p_value3:*, reg simulate_p_value4:V, reg c78:L, reg c80:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r175:V, reg c83:L, reg r176:V, reg sr4:*, reg sr5:V, reg r177:V, reg all:cls, reg r178:V, reg c84:L, reg c85:V, reg c87:L, reg c89:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r179:V, reg c92:L, reg r180:V, reg sc4:*, reg sc5:V, reg r181:V, reg all1:cls, reg r182:V, reg c93:L, reg c94:V, reg c96:L, reg setMETH:cls, reg r183:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r184:V, reg r185:V, reg C_chisq_sim:*, reg C_chisq_sim1:V, reg sr6:*, reg sr7:V, reg sc6:*, reg sc7:V, reg B1:*, reg B2:V, reg E:*, reg E1:V, reg vargs:dots, reg r186:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r187:V, reg r188:V, reg sort:cls, reg x43:*, reg x44:V, reg E2:*, reg E3:V, reg r189:V, reg r190:V, reg E4:*, reg E5:V, reg r191:V, reg p29:p(V +), reg r193:V, reg sum1:cls, reg r194:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r197:V, reg r198:R, reg r199:V, reg tmp:*, reg tmp1:V, reg almost_1:*, reg almost_2:V, reg STATISTIC:*, reg STATISTIC1:V, reg r200:V, reg r201:V, reg sum2:cls, reg r202:V, reg r203:V, reg B3:*, reg B4:V, reg r204:V, reg r205:V, reg r206:V, reg simulate_p_value5:*, reg simulate_p_value6:V, reg c97:L, reg warning:cls, reg r207:V, reg correct1:*, reg correct2:V, reg c98:L, reg c100:V, reg nrow1:cls, reg x45:*, reg x46:V, reg p30:p(V +), reg r210:V, reg r211:V, reg c101:L, reg c102:V, reg c104:L, reg c106:V, reg ncol1:cls, reg x47:*, reg x48:V, reg p31:p(V +), reg r213:V, reg r214:V, reg c107:L, reg c108:V, reg c110:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r215:V, reg r216:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r217:V, reg r218:V, reg x49:*, reg x50:V, reg E6:*, reg E7:V, reg r219:V, reg abs:cls, reg r220:V, reg min1:cls, reg r221:V, reg YATES:*, reg YATES1:V, reg r222:V, reg c111:L, reg paste3:cls, reg METHOD:*, reg METHOD1:V, reg p32:p(V +), reg r224:V, reg r225:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r227:V, reg r228:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r229:V, reg r230:V, reg x51:*, reg x52:V, reg E8:*, reg E9:V, reg r231:V, reg abs1:cls, reg r232:V, reg YATES2:*, reg YATES3:V, reg r233:V, reg r234:V, reg E10:*, reg E11:V, reg r235:V, reg sum3:cls, reg r236:V, reg nr4:*, reg nr5:V, reg r237:V, reg nc4:*, reg nc5:V, reg r238:V, reg r239:V, reg pchisq:cls, reg STATISTIC2:*, reg STATISTIC3:V, reg p33:p(V +), reg PARAMETER:*, reg PARAMETER1:V, reg p34:p(V +), reg r242:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r244:V, reg r245:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r246:V, reg r247:V, reg x53:*, reg x54:V, reg dim1:cls, reg r248:V, reg length4:cls, reg r249:V, reg r250:V, reg c112:L, reg stop5:cls, reg r251:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r253:V, reg r254:V, reg x55:*, reg x56:V, reg length5:cls, reg r255:V, reg r256:V, reg c113:L, reg stop6:cls, reg r257:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r259:V, reg r260:V, reg x57:*, reg x58:V, reg length6:cls, reg r261:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r264:V, reg r265:V, reg r266:V, reg p35:*, reg p36:V, reg length7:cls, reg r267:V, reg r268:V, reg c114:L, reg stop7:cls, reg r269:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r271:V, reg r272:V, reg p37:*, reg p38:V, reg r273:V, reg any1:cls, reg r274:V, reg c115:L, reg stop8:cls, reg r275:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r277:V, reg r278:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r279:V, reg r280:V, reg p39:*, reg p40:V, reg sum4:cls, reg r281:V, reg r282:V, reg abs2:cls, reg r283:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r286:V, reg r287:V, reg r288:V, reg _Machine4:*, reg _Machine5:V, reg c116:L, reg r290:V, reg _Machine7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r292:V, reg dx7:V, reg r293:V, reg r294:V, reg r295:V, reg c117:L, reg rescale_p1:*, reg rescale_p2:V, reg c118:L, reg p41:*, reg p42:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r296:V, reg p45:V, reg r297:V, reg p46:*, reg p47:V, reg sum5:cls, reg r298:V, reg r299:V, reg r300:V, reg stop9:cls, reg r301:V, reg n4:*, reg n5:V, reg p48:*, reg p49:V, reg r303:V, reg n6:*, reg n7:V, reg p50:*, reg p51:V, reg r304:V, reg p52:*, reg p53:V, reg r305:V, reg r306:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r307:V, reg r308:V, reg x59:*, reg x60:V, reg E12:*, reg E13:V, reg r309:V, reg r310:V, reg E14:*, reg E15:V, reg r311:V, reg sum6:cls, reg r312:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r313:V, reg r314:V, reg x61:*, reg x62:V, reg names:cls, reg r315:V, reg l2:*, reg names__1:cls, reg r316:V, reg simulate_p_value7:*, reg simulate_p_value8:V, reg c119:L, reg setMETH1:cls, reg r317:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r318:V, reg r319:V, reg x63:*, reg x64:V, reg length8:cls, reg r320:V, reg matrix:cls, reg sample_int:cls, reg nx:*, reg nx1:V, reg p54:p(V +), reg B5:*, reg B6:V, reg n8:*, reg n9:V, reg r322:V, reg p55:p(V +), reg p56:*, reg p57:V, reg p58:p(V +), reg r325:V, reg p59:p(V +), reg n10:*, reg n11:V, reg p60:p(V +), reg r328:V, reg apply:cls, reg sm:*, reg sm1:V, reg p61:p(V +), reg r330:cls, reg p62:p(V +), reg E16:*, reg E17:V, reg p63:p(V +), reg nx2:*, reg nx3:V, reg p64:p(V +), reg r334:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r337:V, reg r338:R, reg r339:V, reg ss:*, reg ss1:V, reg almost_3:*, reg almost_4:V, reg STATISTIC4:*, reg STATISTIC5:V, reg r340:V, reg r341:V, reg sum7:cls, reg r342:V, reg r343:V, reg B7:*, reg B8:V, reg r344:V, reg r345:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r346:V, reg r347:V, reg x65:*, reg x66:V, reg length9:cls, reg r348:V, reg r349:V, reg pchisq1:cls, reg STATISTIC6:*, reg STATISTIC7:V, reg p65:p(V +), reg PARAMETER2:*, reg PARAMETER3:V, reg p66:p(V +), reg r352:V, reg l3:*, reg names__2:cls, reg r353:V, reg l4:*, reg names__3:cls, reg r354:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r355:V, reg r356:V, reg E18:*, reg E19:V, reg r357:V, reg any2:cls, reg r358:V, reg c120:L, reg c122:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r359:V, reg c125:L, reg r360:V, reg PARAMETER4:*, reg PARAMETER5:V, reg is_finite:cls, reg r361:V, reg c126:L, reg c127:V, reg c129:L, reg warning1:cls, reg r362:V, reg structure:cls, reg sym51:cls, reg base51:cls, reg guard51:L, reg r364:V, reg r365:V, reg STATISTIC8:*, reg STATISTIC9:V, reg PARAMETER6:*, reg PARAMETER7:V, reg PVAL:*, reg PVAL1:V, reg METHOD2:*, reg METHOD3:V, reg DNAME16:*, reg DNAME17:V, reg x67:*, reg x68:V, reg E20:*, reg E21:V, reg x69:*, reg x70:V, reg E22:*, reg E23:V, reg r366:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r369:V, reg r370:V, reg r371:V, reg E24:*, reg E25:V, reg r372:V, reg r373:V, reg x71:*, reg x72:V, reg E26:*, reg E27:V, reg r374:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r377:V, reg r378:V, reg r379:V, reg V:*, reg V1:V, reg r380:V, reg r381:V, reg list:cls, reg r382:V, reg p67:p(V +), reg r384:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    correct_isMissing = missing.0(correct);
    if correct_isMissing then L1(TRUE) else L1(correct);
  L1(correct_orDefault):
    st correct = correct_orDefault;
    p_isMissing = missing.0(p);
    if p_isMissing then L2() else L3(p);
  L2():
    p1 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(<lang `/`(1.0, length(x))>, <lang length(x)>);
      goto L0(r2);
    L2():
      r = dyn base(<lang `/`(1.0, length(x))>, <lang length(x)>);
      goto L0(r);
    };
    goto L3(p1);
  L3(p_orDefault):
    st p = p_orDefault;
    rescale_p_isMissing = missing.0(rescale_p);
    if rescale_p_isMissing then L4(FALSE) else L4(rescale_p);
  L4(rescale_p_orDefault):
    st `rescale.p` = rescale_p_orDefault;
    simulate_p_value_isMissing = missing.0(simulate_p_value);
    if simulate_p_value_isMissing then L5(FALSE) else L5(simulate_p_value);
  L5(simulate_p_value_orDefault):
    st `simulate.p.value` = simulate_p_value_orDefault;
    B_isMissing = missing.0(B);
    if B_isMissing then L6(2000.0) else L6(B);
  L6(B_orDefault):
    st B = B_orDefault;
    deparse = ldf deparse;
    check L116() else D0();
  D0():
    deopt 1 [];
  L116():
    p2 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      substitute = ldf substitute in base;
      r6 = dyn substitute(<sym x>);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    r8 = dyn deparse(p2);
    check L117() else D1();
  D1():
    deopt 3 [r8];
  L117():
    st DNAME = r8;
    is_data_frame = ldf `is.data.frame`;
    check L118() else D2();
  D2():
    deopt 6 [];
  L118():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn is_data_frame(p3);
    check L119() else D3();
  D3():
    deopt 8 [r10];
  L119():
    c = `as.logical`(r10);
    if c then L120() else L7();
  L7():
    goto L8();
  L8():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L124() else L125();
  L120():
    as_matrix = ldf `as.matrix`;
    check L121() else D4();
  D4():
    deopt 10 [];
  L9(r15):
    c1 = `as.logical`(r15);
    if c1 then L128() else L10();
  L121():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn as_matrix(p4);
    check L122() else D5();
  L124():
    x5 = ld x;
    check L126() else D6();
  L125():
    r14 = dyn base2(<sym x>);
    goto L9(r14);
  D5():
    deopt 12 [r12];
  D6():
    deopt 18 [x5];
  L10():
    goto L15();
  L15():
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L141() else L142();
  L122():
    st x = r12;
    goto L8();
  L126():
    x6 = force? x5;
    checkMissing(x6);
    is_matrix = ldf `is.matrix` in base;
    r16 = dyn is_matrix(x6);
    check L127() else D7();
  L128():
    sym3 = ldf min;
    base3 = ldf min in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L129() else L130();
  D7():
    deopt 21 [r16];
  L11(r18):
    r23 = `==`(r18, 1);
    c2 = `as.logical`(r23);
    if c2 then L136() else L13();
  L16(r29):
    r31 = `!`(r29);
    c3 = `as.logical`(r31);
    if c3 then L145() else L17(c3);
  L127():
    goto L9(r16);
  L129():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L131() else L132();
  L130():
    r17 = dyn base3(<lang dim(x)>);
    goto L11(r17);
  L141():
    x11 = ld x;
    check L143() else D13();
  L142():
    r28 = dyn base5(<sym x>);
    goto L16(r28);
  D13():
    deopt 45 [x11];
  L12(r20):
    min = ldf min in base;
    r22 = dyn min(r20);
    check L135() else D10();
  L13():
    goto L14(NULL);
  L14(r26):
    goto L15();
  L17(c5):
    c13 = `as.logical`(c5);
    if c13 then L150() else L19();
  L131():
    x7 = ld x;
    check L133() else D8();
  L132():
    r19 = dyn base4(<sym x>);
    goto L12(r19);
  L136():
    as_vector = ldf `as.vector`;
    check L137() else D11();
  L143():
    x12 = force? x11;
    checkMissing(x12);
    is_matrix1 = ldf `is.matrix` in base;
    r30 = dyn is_matrix1(x12);
    check L144() else D14();
  L145():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L146() else L147();
  D8():
    deopt 26 [x7];
  D10():
    deopt 31 [r22];
  D11():
    deopt 35 [];
  D14():
    deopt 48 [r30];
  L18(c8, r33):
    r34 = `!`(r33);
    c10 = `as.logical`(r34);
    c11 = `&&`(c8, c10);
    goto L17(c11);
  L19():
    goto L38();
  L38():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L223() else L224();
  L133():
    x8 = force? x7;
    checkMissing(x8);
    dim = ldf dim in base;
    r21 = dyn dim(x8);
    check L134() else D9();
  L135():
    goto L11(r22);
  L137():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r25 = dyn as_vector(p5);
    check L138() else D12();
  L144():
    goto L16(r30);
  L146():
    y1 = ld y;
    check L148() else D15();
  L147():
    r32 = dyn base6(<sym y>);
    goto L18(c3, r32);
  L150():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L151() else L152();
  D9():
    deopt 29 [r21];
  D12():
    deopt 37 [r25];
  D15():
    deopt 51 [c3, y1];
  L20(r36):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L155() else L156();
  L39(r105):
    c45 = `as.logical`(r105);
    if c45 then L40(c45) else L227();
  L134():
    goto L12(r21);
  L138():
    st x = r25;
    goto L14(r25);
  L148():
    y2 = force? y1;
    checkMissing(y2);
    c9 = `==`(y2, NULL);
    goto L18(c3, c9);
  L151():
    x13 = ld x;
    check L153() else D16();
  L152():
    r35 = dyn base7(<sym x>);
    goto L20(r35);
  L223():
    x25 = ld x;
    check L225() else D59();
  L224():
    r104 = dyn base15(<lang `<`(x, 0.0)>);
    goto L39(r104);
  D16():
    deopt 58 [x13];
  D59():
    deopt 201 [x25];
  L21(r41, r42):
    r44 = `!=`(r41, r42);
    c14 = `as.logical`(r44);
    if c14 then L159() else L22();
  L40(c46):
    c54 = `as.logical`(c46);
    if c54 then L233() else L42();
  L153():
    x14 = force? x13;
    checkMissing(x14);
    length = ldf length in base;
    r37 = dyn length(x14);
    check L154() else D17();
  L155():
    y3 = ld y;
    check L157() else D18();
  L156():
    r40 = dyn base8(<sym y>);
    goto L21(r36, r40);
  L225():
    x26 = force? x25;
    checkMissing(x26);
    r106 = `<`(x26, 0.0);
    any = ldf any in base;
    r107 = dyn any(r106);
    check L226() else D60();
  L227():
    sym16 = ldf anyNA;
    base16 = ldf anyNA in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L228() else L229();
  D17():
    deopt 61 [r37];
  D18():
    deopt 63 [r36, y3];
  D60():
    deopt 206 [r107];
  L22():
    goto L23();
  L23():
    deparse1 = ldf deparse;
    check L163() else D22();
  L41(c50, r109):
    c51 = `as.logical`(r109);
    c52 = `||`(c50, c51);
    goto L40(c52);
  L42():
    goto L43();
  L43():
    sym17 = ldf sum;
    base17 = ldf sum in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L237() else L238();
  L154():
    goto L20(r37);
  L157():
    y4 = force? y3;
    checkMissing(y4);
    length1 = ldf length in base;
    r43 = dyn length1(y4);
    check L158() else D19();
  L159():
    stop = ldf stop;
    check L160() else D20();
  L226():
    goto L39(r107);
  L228():
    x27 = ld x;
    check L230() else D61();
  L229():
    r108 = dyn base16(<sym x>);
    goto L41(c45, r108);
  L233():
    stop2 = ldf stop;
    check L234() else D63();
  D19():
    deopt 66 [r36, r43];
  D20():
    deopt 69 [];
  D22():
    deopt 75 [];
  D61():
    deopt 209 [c45, x27];
  D63():
    deopt 215 [];
  L44(r114):
    st n = r114;
    r116 = `==`(r114, 0.0);
    c55 = `as.logical`(r116);
    if c55 then L241() else L45();
  L158():
    goto L21(r36, r43);
  L160():
    r45 = dyn stop("'x' and 'y' must have the same length");
    check L161() else D21();
  L163():
    p6 = prom<V +>{
      sym9 = ldf substitute;
      base9 = ldf substitute in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      substitute1 = ldf substitute in base;
      r49 = dyn substitute1(<sym y>);
      goto L0(r49);
    L2():
      r47 = dyn base9(<sym y>);
      goto L0(r47);
    };
    r51 = dyn deparse1(p6);
    check L164() else D23();
  L230():
    x28 = force? x27;
    checkMissing(x28);
    anyNA = ldf anyNA in base;
    r110 = dyn anyNA(x28);
    check L231() else D62();
  L234():
    r111 = dyn stop2("all entries of 'x' must be nonnegative and finite");
    check L235() else D64();
  L237():
    x29 = ld x;
    check L239() else D65();
  L238():
    r113 = dyn base17(<sym x>);
    goto L44(r113);
  D21():
    deopt 71 [r45];
  D23():
    deopt 77 [r51];
  D62():
    deopt 212 [c45, r110];
  D64():
    deopt 217 [r111];
  D65():
    deopt 222 [x29];
  L45():
    goto L46();
  L46():
    simulate_p_value1 = ld `simulate.p.value`;
    check L245() else D69();
  L161():
    goto L23();
  L164():
    st DNAME2 = r51;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L165() else L166();
  L231():
    goto L41(c45, r110);
  L235():
    goto L43();
  L239():
    x30 = force? x29;
    checkMissing(x30);
    sum = ldf sum in base;
    r115 = dyn sum(x30);
    check L240() else D66();
  L241():
    stop3 = ldf stop;
    check L242() else D67();
  D66():
    deopt 225 [r115];
  D67():
    deopt 230 [];
  D69():
    deopt 235 [simulate_p_value1];
  L24(r53):
    r55 = `>`(r53, 1);
    c15 = `as.logical`(r55);
    if c15 then L25(c15) else L169();
  L165():
    DNAME = ld DNAME;
    check L167() else D24();
  L166():
    r52 = dyn base10(<sym DNAME>);
    goto L24(r52);
  L240():
    goto L44(r115);
  L242():
    r117 = dyn stop3("at least one entry of 'x' must be positive");
    check L243() else D68();
  L245():
    simulate_p_value2 = force? simulate_p_value1;
    checkMissing(simulate_p_value2);
    c56 = `as.logical`(simulate_p_value2);
    if c56 then L246() else L47();
  D24():
    deopt 81 [DNAME];
  D68():
    deopt 232 [r117];
  L25(c16):
    c24 = `as.logical`(c16);
    if c24 then L175() else L27();
  L47():
    goto L48();
  L48():
    sym18 = ldf `is.matrix`;
    base18 = ldf `is.matrix` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L253() else L254();
  L167():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    length2 = ldf length in base;
    r54 = dyn length2(DNAME1);
    check L168() else D25();
  L169():
    sym11 = ldf nchar;
    base11 = ldf nchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L170() else L171();
  L243():
    goto L46();
  L246():
    r119 = clos inner2708337952;
    st setMETH = r119;
    _Machine = ld `.Machine`;
    check L247() else D70();
  D25():
    deopt 84 [r54];
  D70():
    deopt 242 [1.0, 64.0, _Machine];
  L26(c20, r57):
    r59 = `>`(r57, 30.0);
    c21 = `as.logical`(r59);
    c22 = `||`(c20, c21);
    goto L25(c22);
  L27():
    DNAME4 = ld DNAME;
    check L177() else D28();
  L28(r60):
    st xname = r60;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L178() else L179();
  L49(r133):
    c58 = `as.logical`(r133);
    if c58 then L257() else L50();
  L168():
    goto L24(r54);
  L170():
    DNAME2 = ld DNAME;
    check L172() else D26();
  L171():
    r56 = dyn base11(<sym DNAME>, "w");
    goto L26(c15, r56);
  L175():
    goto L28("");
  L247():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c57 = `is.object`(_Machine1);
    if c57 then L249() else L250(1.0, 64.0, _Machine1);
  L253():
    x31 = ld x;
    check L255() else D71();
  L254():
    r132 = dyn base18(<sym x>);
    goto L49(r132);
  D26():
    deopt 89 [c15, DNAME2];
  D28():
    deopt 101 [DNAME4];
  D71():
    deopt 252 [x31];
  L29(r62):
    r64 = `>`(r62, 1);
    c25 = `as.logical`(r64);
    if c25 then L30(c25) else L182();
  L50():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L384() else L385();
  L82():
    l3 = ld STATISTIC;
    names__2 = ldf `names<-`;
    check L492() else D206();
  L172():
    DNAME3 = force? DNAME2;
    checkMissing(DNAME3);
    nchar = ldf nchar in base;
    r58 = dyn nchar(DNAME3, "w", FALSE, NA_LGL);
    check L173() else D27();
  L177():
    DNAME5 = force? DNAME4;
    checkMissing(DNAME5);
    goto L28(DNAME5);
  L178():
    DNAME6 = ld DNAME2;
    check L180() else D29();
  L179():
    r61 = dyn base12(<sym DNAME2>);
    goto L29(r61);
  L248(r126, r127, dx5):
    r129 = `*`(r127, dx5);
    r130 = `-`(r126, r129);
    st `almost.1` = r130;
    goto L48();
  L249():
    dr4 = tryDispatchBuiltin.1("$", _Machine1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L251() else L250(1.0, 64.0, dr4);
  L250(r122, r123, _Machine3):
    r128 = `$`(_Machine3, <sym double.eps>);
    goto L248(r122, r123, r128);
  L255():
    x32 = force? x31;
    checkMissing(x32);
    is_matrix2 = ldf `is.matrix` in base;
    r134 = dyn is_matrix2(x32);
    check L256() else D72();
  L257():
    st METHOD = "Pearson's Chi-squared test";
    sym19 = ldf `as.integer`;
    base19 = ldf `as.integer` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L258() else L259();
  D27():
    deopt 95 [c15, r58];
  D29():
    deopt 106 [DNAME6];
  D72():
    deopt 255 [r134];
  D206():
    deopt 708 ["X-squared", l3, "X-squared"];
  L30(c26):
    c34 = `as.logical`(c26);
    if c34 then L188() else L32();
  L51(r136):
    st nr = r136;
    sym20 = ldf `as.integer`;
    base20 = ldf `as.integer` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L263() else L264();
  L83(r245):
    r250 = `>`(r245, 2);
    c112 = `as.logical`(r250);
    if c112 then L391() else L85();
  L173():
    goto L26(c15, r58);
  L180():
    DNAME7 = force? DNAME6;
    checkMissing(DNAME7);
    length3 = ldf length in base;
    r63 = dyn length3(DNAME7);
    check L181() else D30();
  L182():
    sym13 = ldf nchar;
    base13 = ldf nchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L183() else L184();
  L251():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L248(1.0, 64.0, dx4);
  L256():
    goto L49(r134);
  L258():
    nrow = ldf nrow;
    check L260() else D73();
  L259():
    r135 = dyn base19(<lang nrow(x)>);
    goto L51(r135);
  L384():
    sym35 = ldf dim;
    base35 = ldf dim in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L386() else L387();
  L385():
    r244 = dyn base34(<lang dim(x)>);
    goto L83(r244);
  L492():
    r353 = dyn names__2(l3, NULL, "X-squared");
    check L493() else D207();
  D30():
    deopt 109 [r63];
  D73():
    deopt 262 [];
  D207():
    deopt 710 ["X-squared", r353];
  L31(c30, r66):
    r68 = `>`(r66, 30.0);
    c31 = `as.logical`(r68);
    c32 = `||`(c30, c31);
    goto L30(c32);
  L32():
    DNAME10 = ld DNAME2;
    check L190() else D33();
  L33(r69):
    st yname = r69;
    complete_cases = ldf `complete.cases`;
    check L191() else D34();
  L52(r141):
    st nc = r141;
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L268() else L269();
  L84(r247):
    length4 = ldf length in base;
    r249 = dyn length4(r247);
    check L390() else D148();
  L85():
    goto L86();
  L86():
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L395() else L396();
  L181():
    goto L29(r63);
  L183():
    DNAME8 = ld DNAME2;
    check L185() else D31();
  L184():
    r65 = dyn base13(<sym DNAME2>, "w");
    goto L31(c25, r65);
  L188():
    goto L33("");
  L260():
    p19 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r138 = dyn nrow(p19);
    check L261() else D74();
  L263():
    ncol = ldf ncol;
    check L265() else D76();
  L264():
    r140 = dyn base20(<lang ncol(x)>);
    goto L52(r140);
  L386():
    x53 = ld x;
    check L388() else D146();
  L387():
    r246 = dyn base35(<sym x>);
    goto L84(r246);
  L391():
    stop5 = ldf stop;
    check L392() else D149();
  L493():
    st STATISTIC = r353;
    l4 = ld PARAMETER;
    names__3 = ldf `names<-`;
    check L494() else D208();
  D31():
    deopt 114 [c25, DNAME8];
  D33():
    deopt 126 [DNAME10];
  D34():
    deopt 130 [];
  D74():
    deopt 264 [r138];
  D76():
    deopt 271 [];
  D146():
    deopt 503 [x53];
  D148():
    deopt 508 [r249];
  D149():
    deopt 512 [];
  D208():
    deopt 715 ["df", l4, "df"];
  L53(r146):
    c59 = `as.logical`(r146);
    if c59 then L54(c59) else L272();
  L87(r254):
    r256 = `==`(r254, 1);
    c113 = `as.logical`(r256);
    if c113 then L399() else L88();
  L185():
    DNAME9 = force? DNAME8;
    checkMissing(DNAME9);
    nchar1 = ldf nchar in base;
    r67 = dyn nchar1(DNAME9, "w", FALSE, NA_LGL);
    check L186() else D32();
  L190():
    DNAME11 = force? DNAME10;
    checkMissing(DNAME11);
    goto L33(DNAME11);
  L191():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p8 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r72 = dyn complete_cases(p7, p8);
    check L192() else D35();
  L261():
    as_integer = ldf `as.integer` in base;
    r139 = dyn as_integer(r138);
    check L262() else D75();
  L265():
    p20 = prom<V +>{
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      return x36;
    };
    r143 = dyn ncol(p20);
    check L266() else D77();
  L268():
    nr = ld nr;
    check L270() else D79();
  L269():
    r145 = dyn base21(<sym nr>);
    goto L53(r145);
  L388():
    x54 = force? x53;
    checkMissing(x54);
    dim1 = ldf dim in base;
    r248 = dyn dim1(x54);
    check L389() else D147();
  L390():
    goto L83(r249);
  L392():
    r251 = dyn stop5("invalid 'x'");
    check L393() else D150();
  L395():
    x55 = ld x;
    check L397() else D151();
  L396():
    r253 = dyn base36(<sym x>);
    goto L87(r253);
  L494():
    r354 = dyn names__3(l4, NULL, "df");
    check L495() else D209();
  D32():
    deopt 120 [c25, r67];
  D35():
    deopt 133 [r72];
  D75():
    deopt 266 [r139];
  D77():
    deopt 273 [r143];
  D79():
    deopt 279 [nr];
  D147():
    deopt 506 [r248];
  D150():
    deopt 514 [r251];
  D151():
    deopt 519 [x55];
  D209():
    deopt 717 ["df", r354];
  L54(c60):
    c68 = `as.logical`(c60);
    if c68 then L56(c68) else L278();
  L88():
    goto L89();
  L89():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L403() else L404();
  L186():
    goto L31(c25, r67);
  L192():
    st OK = r72;
    factor = ldf factor;
    check L193() else D36();
  L262():
    goto L51(r139);
  L266():
    as_integer1 = ldf `as.integer` in base;
    r144 = dyn as_integer1(r143);
    check L267() else D78();
  L270():
    nr1 = force? nr;
    checkMissing(nr1);
    is_na = ldf `is.na` in base;
    r147 = dyn is_na(nr1);
    check L271() else D80();
  L272():
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L273() else L274();
  L389():
    goto L84(r248);
  L393():
    goto L86();
  L397():
    x56 = force? x55;
    checkMissing(x56);
    length5 = ldf length in base;
    r255 = dyn length5(x56);
    check L398() else D152();
  L399():
    stop6 = ldf stop;
    check L400() else D153();
  L495():
    st PARAMETER = r354;
    sym49 = ldf any;
    base49 = ldf any in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L496() else L497();
  D36():
    deopt 136 [];
  D78():
    deopt 275 [r144];
  D80():
    deopt 282 [r147];
  D152():
    deopt 522 [r255];
  D153():
    deopt 526 [];
  L55(c64, r149):
    c65 = `as.logical`(r149);
    c66 = `||`(c64, c65);
    goto L54(c66);
  L56(c69):
    c77 = `as.logical`(c69);
    if c77 then L285() else L58();
  L90(r260):
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L407() else L408();
  L111(r356):
    c120 = `as.logical`(r356);
    if c120 then L500() else L112(c120);
  L193():
    p9 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c35 = `is.object`(x18);
      if c35 then L1() else L2(x18);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x18);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x20):
      OK = ld OK;
      OK1 = force? OK;
      __ = ldf `[` in base;
      r73 = dyn __(x20, OK1);
      goto L0(r73);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r75 = dyn factor(p9);
    check L194() else D37();
  L267():
    goto L52(r144);
  L271():
    goto L53(r147);
  L273():
    nc = ld nc;
    check L275() else D81();
  L274():
    r148 = dyn base22(<sym nc>);
    goto L55(c59, r148);
  L278():
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L279() else L280();
  L398():
    goto L87(r255);
  L400():
    r257 = dyn stop6("'x' must at least have 2 elements");
    check L401() else D154();
  L403():
    x57 = ld x;
    check L405() else D155();
  L404():
    r259 = dyn base37(<sym x>);
    goto L90(r259);
  L496():
    E18 = ld E;
    check L498() else D210();
  L497():
    r355 = dyn base49(<lang `<`(E, 5.0)>);
    goto L111(r355);
  D37():
    deopt 138 [r75];
  D81():
    deopt 285 [c59, nc];
  D154():
    deopt 528 [r257];
  D155():
    deopt 533 [x57];
  D210():
    deopt 721 [E18];
  L57(c73, r152):
    c74 = `as.logical`(r152);
    c75 = `||`(c73, c74);
    goto L56(c75);
  L58():
    goto L59();
  L59():
    rowSums = ldf rowSums;
    check L289() else D88();
  L91(r265, r266):
    r268 = `!=`(r265, r266);
    c114 = `as.logical`(r268);
    if c114 then L411() else L92();
  L112(c122):
    c129 = `as.logical`(c122);
    if c129 then L506() else L114();
  L194():
    st x = r75;
    factor1 = ldf factor;
    check L195() else D38();
  L275():
    nc1 = force? nc;
    checkMissing(nc1);
    is_na1 = ldf `is.na` in base;
    r150 = dyn is_na1(nc1);
    check L276() else D82();
  L279():
    nr2 = ld nr;
    check L281() else D83();
  L280():
    r151 = dyn base23(<lang `*`(nr, nc)>);
    goto L57(c68, r151);
  L285():
    stop4 = ldf stop;
    check L286() else D86();
  L401():
    goto L89();
  L405():
    x58 = force? x57;
    checkMissing(x58);
    length6 = ldf length in base;
    r261 = dyn length6(x58);
    check L406() else D156();
  L407():
    p35 = ld p;
    check L409() else D157();
  L408():
    r264 = dyn base38(<sym p>);
    goto L91(r260, r264);
  L498():
    E19 = force? E18;
    checkMissing(E19);
    r357 = `<`(E19, 5.0);
    any2 = ldf any in base;
    r358 = dyn any2(r357);
    check L499() else D211();
  L500():
    sym50 = ldf `is.finite`;
    base50 = ldf `is.finite` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L501() else L502();
  D38():
    deopt 141 [];
  D82():
    deopt 288 [c59, r150];
  D83():
    deopt 292 [c68, nr2];
  D86():
    deopt 300 [];
  D88():
    deopt 308 [];
  D156():
    deopt 536 [r261];
  D157():
    deopt 538 [r260, p35];
  D211():
    deopt 726 [r358];
  L92():
    goto L93();
  L93():
    sym39 = ldf any;
    base39 = ldf any in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L415() else L416();
  L113(c125, r360):
    c126 = `as.logical`(r360);
    c127 = `&&`(c125, c126);
    goto L112(c127);
  L114():
    goto L115();
  L115():
    structure = ldf structure;
    check L510() else D216();
  L195():
    p10 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      c36 = `is.object`(y8);
      if c36 then L1() else L2(y8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", y8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(y10):
      OK2 = ld OK;
      OK3 = force? OK2;
      __1 = ldf `[` in base;
      r76 = dyn __1(y10, OK3);
      goto L0(r76);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r78 = dyn factor1(p10);
    check L196() else D39();
  L276():
    goto L55(c59, r150);
  L281():
    nr3 = force? nr2;
    checkMissing(nr3);
    nc2 = ld nc;
    check L282() else D84();
  L286():
    r155 = dyn stop4[, domain]("invalid nrow(x) or ncol(x)", NA_LGL);
    check L287() else D87();
  L289():
    p21 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    r158 = dyn rowSums(p21);
    check L290() else D89();
  L406():
    goto L90(r261);
  L409():
    p36 = force? p35;
    checkMissing(p36);
    length7 = ldf length in base;
    r267 = dyn length7(p36);
    check L410() else D158();
  L411():
    stop7 = ldf stop;
    check L412() else D159();
  L499():
    goto L111(r358);
  L501():
    PARAMETER4 = ld PARAMETER;
    check L503() else D212();
  L502():
    r359 = dyn base50(<sym PARAMETER>);
    goto L113(c120, r359);
  L506():
    warning1 = ldf warning;
    check L507() else D214();
  D39():
    deopt 143 [r78];
  D84():
    deopt 293 [c68, nr3, nc2];
  D87():
    deopt 304 [r155];
  D89():
    deopt 310 [r158];
  D158():
    deopt 541 [r260, r267];
  D159():
    deopt 544 [];
  D212():
    deopt 729 [c120, PARAMETER4];
  D214():
    deopt 735 [];
  D216():
    deopt 741 [];
  L94(r272):
    c115 = `as.logical`(r272);
    if c115 then L419() else L95();
  L196():
    st y = r78;
    nlevels = ldf nlevels;
    check L197() else D40();
  L282():
    nc3 = force? nc2;
    checkMissing(nc3);
    r153 = `*`(nr3, nc3);
    is_na2 = ldf `is.na` in base;
    r154 = dyn is_na2(r153);
    check L283() else D85();
  L287():
    goto L59();
  L290():
    st sr = r158;
    colSums = ldf colSums;
    check L291() else D90();
  L410():
    goto L91(r260, r267);
  L412():
    r269 = dyn stop7("'x' and 'p' must have the same number of elements");
    check L413() else D160();
  L415():
    p37 = ld p;
    check L417() else D161();
  L416():
    r271 = dyn base39(<lang `<`(p, 0.0)>);
    goto L94(r271);
  L503():
    PARAMETER5 = force? PARAMETER4;
    checkMissing(PARAMETER5);
    is_finite = ldf `is.finite` in base;
    r361 = dyn is_finite(PARAMETER5);
    check L504() else D213();
  L507():
    r362 = dyn warning1("Chi-squared approximation may be incorrect");
    check L508() else D215();
  L510():
    p67 = prom<V +>{
      sym51 = ldf list;
      base51 = ldf list in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L3() else L4();
    L0(r365):
      return r365;
    L3():
      STATISTIC8 = ld STATISTIC;
      STATISTIC9 = force? STATISTIC8;
      checkMissing(STATISTIC9);
      PARAMETER6 = ld PARAMETER;
      PARAMETER7 = force? PARAMETER6;
      checkMissing(PARAMETER7);
      PVAL = ld PVAL;
      PVAL1 = force? PVAL;
      checkMissing(PVAL1);
      METHOD2 = ld METHOD;
      METHOD3 = force? METHOD2;
      checkMissing(METHOD3);
      DNAME16 = ld DNAME;
      DNAME17 = force? DNAME16;
      checkMissing(DNAME17);
      x67 = ld x;
      x68 = force? x67;
      checkMissing(x68);
      E20 = ld E;
      E21 = force? E20;
      checkMissing(E21);
      x69 = ld x;
      x70 = force? x69;
      checkMissing(x70);
      E22 = ld E;
      E23 = force? E22;
      checkMissing(E23);
      r366 = `-`(x70, E23);
      sym52 = ldf sqrt;
      base52 = ldf sqrt in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L5() else L6();
    L4():
      r364 = dyn base51[statistic, parameter, `p.value`, method, `data.name`, observed, expected, residuals, stdres](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>, <sym x>, <sym E>, <lang `/`(`(`(`-`(x, E)), sqrt(E))>, <lang `/`(`(`(`-`(x, E)), sqrt(V))>);
      goto L0(r364);
    L1(r370, r371):
      r373 = `/`(r370, r371);
      x71 = ld x;
      x72 = force? x71;
      checkMissing(x72);
      E26 = ld E;
      E27 = force? E26;
      checkMissing(E27);
      r374 = `-`(x72, E27);
      sym53 = ldf sqrt;
      base53 = ldf sqrt in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L7() else L8();
    L5():
      E24 = ld E;
      E25 = force? E24;
      checkMissing(E25);
      r372 = sqrt(E25);
      goto L1(r366, r372);
    L6():
      r369 = dyn base52(<sym E>);
      goto L1(r366, r369);
    L2(r378, r379):
      r381 = `/`(r378, r379);
      list = ldf list in base;
      r382 = dyn list(STATISTIC9, PARAMETER7, PVAL1, METHOD3, DNAME17, x68, E21, r373, r381);
      goto L0(r382);
    L7():
      V = ld V;
      V1 = force? V;
      checkMissing(V1);
      r380 = sqrt(V1);
      goto L2(r374, r380);
    L8():
      r377 = dyn base53(<sym V>);
      goto L2(r374, r377);
    };
    r384 = dyn structure[, class](p67, "htest");
    check L511() else D217();
  D40():
    deopt 146 [];
  D85():
    deopt 297 [c68, r154];
  D90():
    deopt 313 [];
  D160():
    deopt 546 [r269];
  D161():
    deopt 551 [p37];
  D213():
    deopt 732 [c120, r361];
  D215():
    deopt 737 [r362];
  D217():
    deopt 745 [r384];
  L95():
    goto L96();
  L96():
    sym40 = ldf abs;
    base40 = ldf abs in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L423() else L424();
  L197():
    p11 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r80 = dyn nlevels(p11);
    check L198() else D41();
  L283():
    goto L57(c68, r154);
  L291():
    p22 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    r160 = dyn colSums(p22);
    check L292() else D91();
  L413():
    goto L93();
  L417():
    p38 = force? p37;
    checkMissing(p38);
    r273 = `<`(p38, 0.0);
    any1 = ldf any in base;
    r274 = dyn any1(r273);
    check L418() else D162();
  L419():
    stop8 = ldf stop;
    check L420() else D163();
  L504():
    goto L113(c120, r361);
  L508():
    goto L115();
  L511():
    popenv;
    return r384;
  D41():
    deopt 148 [r80];
  D91():
    deopt 315 [r160];
  D162():
    deopt 556 [r274];
  D163():
    deopt 558 [];
  L97(r278):
    sym42 = ldf sqrt;
    base42 = ldf sqrt in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L430() else L431();
  L198():
    r81 = `<`(r80, 2);
    c37 = `as.logical`(r81);
    if c37 then L34(c37) else L199();
  L292():
    st sc = r160;
    outer = ldf outer;
    check L293() else D92();
  L418():
    goto L94(r274);
  L420():
    r275 = dyn stop8("probabilities must be non-negative.");
    check L421() else D164();
  L423():
    sym41 = ldf sum;
    base41 = ldf sum in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L425() else L426();
  L424():
    r277 = dyn base40(<lang `-`(sum(p), 1.0)>);
    goto L97(r277);
  D92():
    deopt 318 [];
  D164():
    deopt 560 [r275];
  L34(c38):
    c43 = `as.logical`(c38);
    if c43 then L203() else L35();
  L98(r280):
    r282 = `-`(r280, 1.0);
    abs2 = ldf abs in base;
    r283 = dyn abs2(r282);
    check L429() else D167();
  L99(r287, r288):
    r295 = `>`(r287, r288);
    c117 = `as.logical`(r295);
    if c117 then L437() else L100();
  L199():
    nlevels1 = ldf nlevels;
    check L200() else D42();
  L293():
    p23 = prom<V +>{
      sr = ld sr;
      sr1 = force? sr;
      checkMissing(sr1);
      return sr1;
    };
    p24 = prom<V +>{
      sc = ld sc;
      sc1 = force? sc;
      checkMissing(sc1);
      return sc1;
    };
    r163 = dyn outer(p23, p24);
    check L294() else D93();
  L421():
    goto L96();
  L425():
    p39 = ld p;
    check L427() else D165();
  L426():
    r279 = dyn base41(<sym p>);
    goto L98(r279);
  L430():
    _Machine4 = ld `.Machine`;
    check L432() else D168();
  L431():
    r286 = dyn base42(<lang `$`(.Machine, double.eps)>);
    goto L99(r278, r286);
  D42():
    deopt 152 [c37];
  D93():
    deopt 321 [r163];
  D165():
    deopt 567 [p39];
  D167():
    deopt 574 [r283];
  D168():
    deopt 575 [r278, _Machine4];
  L35():
    goto L36();
  L36():
    table = ldf table;
    check L207() else D46();
  L100():
    goto L104();
  L104():
    st METHOD = "Chi-squared test for given probabilities";
    n4 = ld n;
    check L449() else D175();
  L200():
    p12 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    r83 = dyn nlevels1(p12);
    check L201() else D43();
  L203():
    stop1 = ldf stop;
    check L204() else D44();
  L294():
    n = ld n;
    check L295() else D94();
  L427():
    p40 = force? p39;
    checkMissing(p40);
    sum4 = ldf sum in base;
    r281 = dyn sum4(p40);
    check L428() else D166();
  L429():
    goto L97(r283);
  L432():
    _Machine5 = force? _Machine4;
    checkMissing(_Machine5);
    c116 = `is.object`(_Machine5);
    if c116 then L434() else L435(r278, _Machine5);
  L437():
    rescale_p1 = ld `rescale.p`;
    check L438() else D169();
  D43():
    deopt 154 [c37, r83];
  D44():
    deopt 159 [];
  D46():
    deopt 165 [];
  D94():
    deopt 321 [r163, n];
  D166():
    deopt 570 [r281];
  D169():
    deopt 580 [rescale_p1];
  D175():
    deopt 600 [n4];
  L201():
    r84 = `<`(r83, 2);
    c40 = `as.logical`(r84);
    c41 = `||`(c37, c40);
    goto L34(c41);
  L204():
    r85 = dyn stop1("'x' and 'y' must have at least 2 levels");
    check L205() else D45();
  L207():
    p13 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p14 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    r89 = dyn table(p13, p14);
    check L208() else D47();
  L295():
    n1 = force? n;
    checkMissing(n1);
    r164 = `/`(r163, n1);
    st E = r164;
    r165 = clos inner3291413465;
    st v = r165;
    outer1 = ldf outer;
    check L296() else D95();
  L428():
    goto L98(r281);
  L433(r292, dx7):
    r294 = sqrt(dx7);
    goto L99(r292, r294);
  L434():
    dr6 = tryDispatchBuiltin.1("$", _Machine5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L436() else L435(r278, dr6);
  L435(r290, _Machine7):
    r293 = `$`(_Machine7, <sym double.eps>);
    goto L433(r290, r293);
  L438():
    rescale_p2 = force? rescale_p1;
    checkMissing(rescale_p2);
    c118 = `as.logical`(rescale_p2);
    if c118 then L439() else L101();
  L449():
    n5 = force? n4;
    checkMissing(n5);
    p48 = ld p;
    check L450() else D176();
  D45():
    deopt 161 [r85];
  D47():
    deopt 168 [r89];
  D95():
    deopt 329 [];
  D176():
    deopt 601 [n5, p48];
  L101():
    stop9 = ldf stop;
    check L446() else D173();
  L103(r300):
    goto L104();
  L205():
    goto L36();
  L208():
    st x = r89;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L209() else L210();
  L296():
    p25 = prom<V +>{
      sr2 = ld sr;
      sr3 = force? sr2;
      checkMissing(sr3);
      return sr3;
    };
    p26 = prom<V +>{
      sc2 = ld sc;
      sc3 = force? sc2;
      checkMissing(sc3);
      return sc3;
    };
    p27 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    p28 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    r170 = dyn outer1(p25, p26, p27, p28);
    check L297() else D96();
  L436():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L433(r278, dx6);
  L439():
    p41 = ld p;
    check L440() else D170();
  L450():
    p49 = force? p48;
    checkMissing(p49);
    r303 = `*`(n5, p49);
    st E = r303;
    n6 = ld n;
    check L451() else D177();
  D96():
    deopt 334 [r170];
  D170():
    deopt 582 [p41];
  D173():
    deopt 592 [];
  D177():
    deopt 605 [n6];
  L37(r91):
    l = ld x;
    dimnames = ldf dimnames;
    check L214() else D51();
  L209():
    xname = ld xname;
    check L211() else D48();
  L210():
    r90 = dyn base14(<sym xname>, <sym yname>);
    goto L37(r90);
  L297():
    st V = r170;
    sym24 = ldf dimnames;
    base24 = ldf dimnames in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L298() else L299();
  L440():
    p42 = force? p41;
    checkMissing(p42);
    sym43 = ldf sum;
    base43 = ldf sum in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L441() else L442();
  L446():
    r301 = dyn stop9("probabilities must sum to 1.");
    check L447() else D174();
  L451():
    n7 = force? n6;
    checkMissing(n7);
    p50 = ld p;
    check L452() else D178();
  D48():
    deopt 172 [xname];
  D51():
    deopt 179 [r91, l, r91];
  D174():
    deopt 594 [r301];
  D178():
    deopt 606 [n7, p50];
  L60(r172):
    l1 = ld E;
    dimnames__1 = ldf `dimnames<-`;
    check L302() else D99();
  L102(p45, r297):
    r299 = `/`(p45, r297);
    st p = r299;
    goto L103(r299);
  L211():
    xname1 = force? xname;
    checkMissing(xname1);
    yname = ld yname;
    check L212() else D49();
  L214():
    r93 = dyn dimnames(r91, NULL);
    check L215() else D52();
  L298():
    x41 = ld x;
    check L300() else D97();
  L299():
    r171 = dyn base24(<sym x>);
    goto L60(r171);
  L441():
    p46 = ld p;
    check L443() else D171();
  L442():
    r296 = dyn base43(<sym p>);
    goto L102(p42, r296);
  L447():
    goto L103(r301);
  L452():
    p51 = force? p50;
    checkMissing(p51);
    r304 = `*`(n7, p51);
    p52 = ld p;
    check L453() else D179();
  D49():
    deopt 174 [yname];
  D52():
    deopt 181 [r91, l, r91, r93];
  D97():
    deopt 338 [x41];
  D99():
    deopt 343 [r172, l1, r172];
  D171():
    deopt 585 [p42, p46];
  D179():
    deopt 609 [r304, 1.0, p52];
  L212():
    yname1 = force? yname;
    checkMissing(yname1);
    c44 = ldf c in base;
    r92 = dyn c44(xname1, yname1);
    check L213() else D50();
  L215():
    names__ = ldf `names<-`;
    check L216() else D53();
  L300():
    x42 = force? x41;
    checkMissing(x42);
    dimnames1 = ldf dimnames in base;
    r173 = dyn dimnames1(x42);
    check L301() else D98();
  L302():
    r174 = dyn dimnames__1(l1, NULL, r172);
    check L303() else D100();
  L443():
    p47 = force? p46;
    checkMissing(p47);
    sum5 = ldf sum in base;
    r298 = dyn sum5(p47);
    check L444() else D172();
  L453():
    p53 = force? p52;
    checkMissing(p53);
    r305 = `-`(1.0, p53);
    r306 = `*`(r304, r305);
    st V = r306;
    sym44 = ldf sum;
    base44 = ldf sum in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L454() else L455();
  D50():
    deopt 177 [r92];
  D53():
    deopt 183 [r91, l, r93, r91];
  D98():
    deopt 341 [r173];
  D100():
    deopt 345 [r172, r174];
  D172():
    deopt 588 [p42, r298];
  L105(r308):
    st STATISTIC = r308;
    sym45 = ldf names;
    base45 = ldf names in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L460() else L461();
  L213():
    goto L37(r92);
  L216():
    r94 = dyn names__(r93, NULL, r91);
    check L217() else D54();
  L301():
    goto L60(r173);
  L303():
    st E = r174;
    simulate_p_value3 = ld `simulate.p.value`;
    check L304() else D101();
  L444():
    goto L102(p42, r298);
  L454():
    x59 = ld x;
    check L456() else D180();
  L455():
    r307 = dyn base44(<lang `/`(`^`(`(`(`-`(x, E)), 2.0), E)>);
    goto L105(r307);
  D54():
    deopt 185 [r91, l, r94];
  D101():
    deopt 347 [simulate_p_value3];
  D180():
    deopt 616 [x59];
  L106(r314):
    l2 = ld E;
    names__1 = ldf `names<-`;
    check L464() else D186();
  L217():
    dimnames__ = ldf `dimnames<-`;
    check L218() else D55();
  L304():
    simulate_p_value4 = force? simulate_p_value3;
    checkMissing(simulate_p_value4);
    c78 = `as.logical`(simulate_p_value4);
    if c78 then L305() else L61(c78);
  L456():
    x60 = force? x59;
    checkMissing(x60);
    E12 = ld E;
    check L457() else D181();
  L460():
    x61 = ld x;
    check L462() else D184();
  L461():
    r313 = dyn base45(<sym x>);
    goto L106(r313);
  D55():
    deopt 186 [r91, l, r94];
  D181():
    deopt 617 [x60, E12];
  D184():
    deopt 629 [x61];
  D186():
    deopt 634 [r314, l2, r314];
  L61(c80):
    c87 = `as.logical`(c80);
    if c87 then L311() else L63(c87);
  L218():
    r95 = dyn dimnames__(l, NULL, r94);
    check L219() else D56();
  L305():
    sym25 = ldf all;
    base25 = ldf all in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L306() else L307();
  L457():
    E13 = force? E12;
    checkMissing(E13);
    r309 = `-`(x60, E13);
    r310 = `^`(r309, 2.0);
    E14 = ld E;
    check L458() else D182();
  L462():
    x62 = force? x61;
    checkMissing(x62);
    names = ldf names in base;
    r315 = dyn names(x62);
    check L463() else D185();
  L464():
    r316 = dyn names__1(l2, NULL, r314);
    check L465() else D187();
  D56():
    deopt 188 [r91, r95];
  D182():
    deopt 621 [r310, E14];
  D185():
    deopt 632 [r315];
  D187():
    deopt 636 [r314, r316];
  L62(c83, r176):
    c84 = `as.logical`(r176);
    c85 = `&&`(c83, c84);
    goto L61(c85);
  L63(c89):
    c96 = `as.logical`(c89);
    if c96 then L317() else L65();
  L219():
    st x = r95;
    paste = ldf paste;
    check L220() else D57();
  L306():
    sr4 = ld sr;
    check L308() else D102();
  L307():
    r175 = dyn base25(<lang `>`(sr, 0.0)>);
    goto L62(c78, r175);
  L311():
    sym26 = ldf all;
    base26 = ldf all in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L312() else L313();
  L458():
    E15 = force? E14;
    checkMissing(E15);
    r311 = `/`(r310, E15);
    sum6 = ldf sum in base;
    r312 = dyn sum6(r311);
    check L459() else D183();
  L463():
    goto L106(r315);
  L465():
    st E = r316;
    simulate_p_value7 = ld `simulate.p.value`;
    check L466() else D188();
  D57():
    deopt 191 [];
  D102():
    deopt 351 [c78, sr4];
  D183():
    deopt 625 [r312];
  D188():
    deopt 638 [simulate_p_value7];
  L64(c92, r180):
    c93 = `as.logical`(r180);
    c94 = `&&`(c92, c93);
    goto L63(c94);
  L65():
    simulate_p_value5 = ld `simulate.p.value`;
    check L340() else D121();
  L69(r206):
    goto L82();
  L220():
    p16 = prom<V +>{
      paste1 = ldf paste;
      p15 = prom<V +>{
        DNAME12 = ld DNAME;
        DNAME13 = force? DNAME12;
        checkMissing(DNAME13);
        return DNAME13;
      };
      r97 = dyn paste1[, collapse](p15, "\n");
      return r97;
    };
    p18 = prom<V +>{
      paste2 = ldf paste;
      p17 = prom<V +>{
        DNAME14 = ld DNAME2;
        DNAME15 = force? DNAME14;
        checkMissing(DNAME15);
        return DNAME15;
      };
      r100 = dyn paste2[, collapse](p17, "\n");
      return r100;
    };
    r102 = dyn paste(p16, "and", p18);
    check L221() else D58();
  L308():
    sr5 = force? sr4;
    checkMissing(sr5);
    r177 = `>`(sr5, 0.0);
    all = ldf all in base;
    r178 = dyn all(r177);
    check L309() else D103();
  L312():
    sc4 = ld sc;
    check L314() else D104();
  L313():
    r179 = dyn base26(<lang `>`(sc, 0.0)>);
    goto L64(c87, r179);
  L317():
    setMETH = ldf setMETH;
    check L318() else D106();
  L459():
    goto L105(r312);
  L466():
    simulate_p_value8 = force? simulate_p_value7;
    checkMissing(simulate_p_value8);
    c119 = `as.logical`(simulate_p_value8);
    if c119 then L467() else L107();
  D58():
    deopt 195 [r102];
  D103():
    deopt 356 [c78, r178];
  D104():
    deopt 360 [c87, sc4];
  D106():
    deopt 368 [];
  D121():
    deopt 410 [simulate_p_value5];
  L107():
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L486() else L487();
  L221():
    st DNAME = r102;
    goto L38();
  L309():
    goto L62(c78, r178);
  L314():
    sc5 = force? sc4;
    checkMissing(sc5);
    r181 = `>`(sc5, 0.0);
    all1 = ldf all in base;
    r182 = dyn all1(r181);
    check L315() else D105();
  L318():
    r183 = dyn setMETH();
    check L319() else D107();
  L340():
    simulate_p_value6 = force? simulate_p_value5;
    checkMissing(simulate_p_value6);
    c97 = `as.logical`(simulate_p_value6);
    if c97 then L341() else L70();
  L467():
    setMETH1 = ldf setMETH;
    check L468() else D189();
  D105():
    deopt 365 [c87, r182];
  D107():
    deopt 369 [r183];
  D189():
    deopt 641 [];
  L70():
    goto L71();
  L71():
    correct1 = ld correct;
    check L345() else D124();
  L110(r347):
    r349 = `-`(r347, 1.0);
    st PARAMETER = r349;
    pchisq1 = ldf pchisq;
    check L490() else D204();
  L315():
    goto L64(c87, r182);
  L319():
    sym27 = ldf `.Call`;
    base27 = ldf `.Call` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L320() else L321();
  L341():
    warning = ldf warning;
    check L342() else D122();
  L468():
    r317 = dyn setMETH1();
    check L469() else D190();
  L486():
    x65 = ld x;
    check L488() else D202();
  L487():
    r346 = dyn base48(<sym x>);
    goto L110(r346);
  D122():
    deopt 413 [];
  D124():
    deopt 418 [correct1];
  D190():
    deopt 642 [r317];
  D202():
    deopt 690 [x65];
  D204():
    deopt 698 [];
  L66(r185):
    st tmp = r185;
    sym28 = ldf sum;
    base28 = ldf sum in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L327() else L328();
  L320():
    C_chisq_sim = ld C_chisq_sim;
    check L322() else D108();
  L321():
    r184 = dyn base27(<sym C_chisq_sim>, <sym sr>, <sym sc>, <sym B>, <sym E>);
    goto L66(r184);
  L342():
    r207 = dyn warning("cannot compute simulated p-value with zero marginals");
    check L343() else D123();
  L345():
    correct2 = force? correct1;
    checkMissing(correct2);
    c98 = `as.logical`(correct2);
    if c98 then L346() else L72(c98);
  L469():
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L470() else L471();
  L488():
    x66 = force? x65;
    checkMissing(x66);
    length9 = ldf length in base;
    r348 = dyn length9(x66);
    check L489() else D203();
  L490():
    p65 = prom<V +>{
      STATISTIC6 = ld STATISTIC;
      STATISTIC7 = force? STATISTIC6;
      checkMissing(STATISTIC7);
      return STATISTIC7;
    };
    p66 = prom<V +>{
      PARAMETER2 = ld PARAMETER;
      PARAMETER3 = force? PARAMETER2;
      checkMissing(PARAMETER3);
      return PARAMETER3;
    };
    r352 = dyn pchisq1[, , `lower.tail`](p65, p66, FALSE);
    check L491() else D205();
  D108():
    deopt 371 [C_chisq_sim];
  D123():
    deopt 415 [r207];
  D203():
    deopt 693 [r348];
  D205():
    deopt 703 [r352];
  L67(r188):
    st STATISTIC = r188;
    st PARAMETER = NA_LGL;
    sym29 = ldf sum;
    base29 = ldf sum in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L332() else L333();
  L72(c100):
    c104 = `as.logical`(c100);
    if c104 then L350() else L73(c104);
  L108(r319):
    st nx = r319;
    matrix = ldf matrix;
    check L474() else D193();
  L322():
    C_chisq_sim1 = force? C_chisq_sim;
    checkMissing(C_chisq_sim1);
    sr6 = ld sr;
    check L323() else D109();
  L327():
    sort = ldf sort;
    check L329() else D113();
  L328():
    r187 = dyn base28(<lang sort(`/`(`^`(`(`(`-`(x, E)), 2.0), E), decreasing=TRUE)>);
    goto L67(r187);
  L343():
    goto L71();
  L346():
    nrow1 = ldf nrow;
    check L347() else D125();
  L470():
    x63 = ld x;
    check L472() else D191();
  L471():
    r318 = dyn base46(<sym x>);
    goto L108(r318);
  L489():
    goto L110(r348);
  L491():
    st PVAL = r352;
    goto L82();
  D109():
    deopt 372 [C_chisq_sim1, sr6];
  D113():
    deopt 382 [];
  D125():
    deopt 421 [c98];
  D191():
    deopt 645 [x63];
  D193():
    deopt 651 [];
  L68(r198, r199):
    r203 = `+`(r198, r199);
    B3 = ld B;
    check L338() else D120();
  L73(c106):
    c110 = `as.logical`(c106);
    if c110 then L354() else L74();
  L323():
    sr7 = force? sr6;
    checkMissing(sr7);
    sc6 = ld sc;
    check L324() else D110();
  L329():
    p29 = prom<V +>{
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      E2 = ld E;
      E3 = force? E2;
      checkMissing(E3);
      r189 = `-`(x44, E3);
      r190 = `^`(r189, 2.0);
      E4 = ld E;
      E5 = force? E4;
      checkMissing(E5);
      r191 = `/`(r190, E5);
      return r191;
    };
    r193 = dyn sort[, decreasing](p29, TRUE);
    check L330() else D114();
  L332():
    tmp = ld tmp;
    check L334() else D116();
  L333():
    r197 = dyn base29(<lang `>=`(tmp, `*`(almost.1, STATISTIC))>);
    goto L68(1.0, r197);
  L347():
    p30 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      return x46;
    };
    r210 = dyn nrow1(p30);
    check L348() else D126();
  L350():
    ncol1 = ldf ncol;
    check L351() else D127();
  L472():
    x64 = force? x63;
    checkMissing(x64);
    length8 = ldf length in base;
    r320 = dyn length8(x64);
    check L473() else D192();
  L474():
    p59 = prom<V +>{
      sample_int = ldf `sample.int`;
      p54 = prom<V +>{
        nx = ld nx;
        nx1 = force? nx;
        checkMissing(nx1);
        return nx1;
      };
      p55 = prom<V +>{
        B5 = ld B;
        B6 = force? B5;
        checkMissing(B6);
        n8 = ld n;
        n9 = force? n8;
        checkMissing(n9);
        r322 = `*`(B6, n9);
        return r322;
      };
      p58 = prom<V +>{
        p56 = ld p;
        p57 = force? p56;
        checkMissing(p57);
        return p57;
      };
      r325 = dyn sample_int[, , , prob](p54, p55, TRUE, p58);
      return r325;
    };
    p60 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      return n11;
    };
    r328 = dyn matrix[, nrow](p59, p60);
    check L475() else D194();
  D110():
    deopt 373 [C_chisq_sim1, sr7, sc6];
  D114():
    deopt 386 [r193];
  D116():
    deopt 396 [1.0, tmp];
  D120():
    deopt 404 [r203, B3];
  D126():
    deopt 423 [c98, r210];
  D127():
    deopt 428 [c104];
  D192():
    deopt 648 [r320];
  D194():
    deopt 655 [r328];
  L74():
    st YATES = 0.0;
    goto L79();
  L79():
    sym32 = ldf sum;
    base32 = ldf sum in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L369() else L370();
  L324():
    sc7 = force? sc6;
    checkMissing(sc7);
    B1 = ld B;
    check L325() else D111();
  L330():
    sum1 = ldf sum in base;
    r194 = dyn sum1(r193);
    check L331() else D115();
  L334():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    almost_1 = ld `almost.1`;
    check L335() else D117();
  L338():
    B4 = force? B3;
    checkMissing(B4);
    r204 = `+`(B4, 1.0);
    r205 = `/`(r203, r204);
    st PVAL = r205;
    goto L69(r205);
  L348():
    r211 = `==`(r210, 2);
    c101 = `as.logical`(r211);
    c102 = `&&`(c98, c101);
    goto L72(c102);
  L351():
    p31 = prom<V +>{
      x47 = ld x;
      x48 = force? x47;
      checkMissing(x48);
      return x48;
    };
    r213 = dyn ncol1(p31);
    check L352() else D128();
  L354():
    sym30 = ldf min;
    base30 = ldf min in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L355() else L356();
  L473():
    goto L108(r320);
  L475():
    st sm = r328;
    apply = ldf apply;
    check L476() else D195();
  D111():
    deopt 374 [C_chisq_sim1, sr7, sc7, B1];
  D115():
    deopt 388 [r194];
  D117():
    deopt 397 [1.0, tmp1, almost_1];
  D128():
    deopt 430 [c104, r213];
  D195():
    deopt 658 [];
  L75(r216):
    st YATES = r216;
    YATES = ld YATES;
    check L363() else D133();
  L80(r228):
    st STATISTIC = r228;
    nr4 = ld nr;
    check L379() else D142();
  L325():
    B2 = force? B1;
    checkMissing(B2);
    E = ld E;
    check L326() else D112();
  L331():
    goto L67(r194);
  L335():
    almost_2 = force? almost_1;
    checkMissing(almost_2);
    STATISTIC = ld STATISTIC;
    check L336() else D118();
  L352():
    r214 = `==`(r213, 2);
    c107 = `as.logical`(r214);
    c108 = `&&`(c104, c107);
    goto L73(c108);
  L355():
    sym31 = ldf abs;
    base31 = ldf abs in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L357() else L358();
  L356():
    r215 = dyn base30(0.5, <lang abs(`-`(x, E))>);
    goto L75(r215);
  L369():
    sym33 = ldf abs;
    base33 = ldf abs in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L371() else L372();
  L370():
    r227 = dyn base32(<lang `/`(`^`(`(`(`-`(abs(`-`(x, E)), YATES)), 2.0), E)>);
    goto L80(r227);
  L476():
    p61 = prom<V +>{
      sm = ld sm;
      sm1 = force? sm;
      checkMissing(sm1);
      return sm1;
    };
    p62 = prom<V +>{
      r330 = clos inner1631533690;
      return r330;
    };
    p63 = prom<V +>{
      E16 = ld E;
      E17 = force? E16;
      checkMissing(E17);
      return E17;
    };
    p64 = prom<V +>{
      nx2 = ld nx;
      nx3 = force? nx2;
      checkMissing(nx3);
      return nx3;
    };
    r334 = dyn apply[, , , E, k](p61, 2, p62, p63, p64);
    check L477() else D196();
  D112():
    deopt 375 [C_chisq_sim1, sr7, sc7, B2, E];
  D118():
    deopt 398 [1.0, tmp1, almost_2, STATISTIC];
  D133():
    deopt 448 [YATES];
  D142():
    deopt 482 [nr4];
  D196():
    deopt 666 [r334];
  L76(r218):
    min1 = ldf min in base;
    r221 = dyn min1(0.5, r218);
    check L362() else D132();
  L81(r230):
    YATES2 = ld YATES;
    check L376() else D139();
  L326():
    E1 = force? E;
    checkMissing(E1);
    vargs = dots[sr7, sc7, B2, E1];
    r186 = `.Call`(C_chisq_sim1, vargs, <missing>);
    goto L66(r186);
  L336():
    STATISTIC1 = force? STATISTIC;
    checkMissing(STATISTIC1);
    r200 = `*`(almost_2, STATISTIC1);
    r201 = `>=`(tmp1, r200);
    sum2 = ldf sum in base;
    r202 = dyn sum2(r201);
    check L337() else D119();
  L357():
    x49 = ld x;
    check L359() else D129();
  L358():
    r217 = dyn base31(<lang `-`(x, E)>);
    goto L76(r217);
  L363():
    YATES1 = force? YATES;
    checkMissing(YATES1);
    r222 = `>`(YATES1, 0.0);
    c111 = `as.logical`(r222);
    if c111 then L364() else L77();
  L371():
    x51 = ld x;
    check L373() else D136();
  L372():
    r229 = dyn base33(<lang `-`(x, E)>);
    goto L81(r229);
  L379():
    nr5 = force? nr4;
    checkMissing(nr5);
    r237 = `-`(nr5, 1);
    nc4 = ld nc;
    check L380() else D143();
  L477():
    st ss = r334;
    st PARAMETER = NA_LGL;
    sym47 = ldf sum;
    base47 = ldf sum in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L478() else L479();
  D119():
    deopt 403 [1.0, r202];
  D129():
    deopt 439 [x49];
  D132():
    deopt 446 [r221];
  D136():
    deopt 467 [x51];
  D139():
    deopt 472 [r230, YATES2];
  D143():
    deopt 485 [r237, nc4];
  L77():
    goto L78(NULL);
  L78(r225):
    goto L79();
  L109(r338, r339):
    r343 = `+`(r338, r339);
    B7 = ld B;
    check L484() else D201();
  L337():
    goto L68(1.0, r202);
  L359():
    x50 = force? x49;
    checkMissing(x50);
    E6 = ld E;
    check L360() else D130();
  L362():
    goto L75(r221);
  L364():
    paste3 = ldf paste;
    check L365() else D134();
  L373():
    x52 = force? x51;
    checkMissing(x52);
    E8 = ld E;
    check L374() else D137();
  L376():
    YATES3 = force? YATES2;
    checkMissing(YATES3);
    r233 = `-`(r230, YATES3);
    r234 = `^`(r233, 2.0);
    E10 = ld E;
    check L377() else D140();
  L380():
    nc5 = force? nc4;
    checkMissing(nc5);
    r238 = `-`(nc5, 1);
    r239 = `*`(r237, r238);
    st PARAMETER = r239;
    pchisq = ldf pchisq;
    check L381() else D144();
  L478():
    ss = ld ss;
    check L480() else D197();
  L479():
    r337 = dyn base47(<lang `>=`(ss, `*`(almost.1, STATISTIC))>);
    goto L109(1.0, r337);
  D130():
    deopt 440 [x50, E6];
  D134():
    deopt 453 [];
  D137():
    deopt 468 [x52, E8];
  D140():
    deopt 476 [r234, E10];
  D144():
    deopt 492 [];
  D197():
    deopt 674 [1.0, ss];
  D201():
    deopt 682 [r343, B7];
  L360():
    E7 = force? E6;
    checkMissing(E7);
    r219 = `-`(x50, E7);
    abs = ldf abs in base;
    r220 = dyn abs(r219);
    check L361() else D131();
  L365():
    p32 = prom<V +>{
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      return METHOD1;
    };
    r224 = dyn paste3(p32, "with Yates' continuity correction");
    check L366() else D135();
  L374():
    E9 = force? E8;
    checkMissing(E9);
    r231 = `-`(x52, E9);
    abs1 = ldf abs in base;
    r232 = dyn abs1(r231);
    check L375() else D138();
  L377():
    E11 = force? E10;
    checkMissing(E11);
    r235 = `/`(r234, E11);
    sum3 = ldf sum in base;
    r236 = dyn sum3(r235);
    check L378() else D141();
  L381():
    p33 = prom<V +>{
      STATISTIC2 = ld STATISTIC;
      STATISTIC3 = force? STATISTIC2;
      checkMissing(STATISTIC3);
      return STATISTIC3;
    };
    p34 = prom<V +>{
      PARAMETER = ld PARAMETER;
      PARAMETER1 = force? PARAMETER;
      checkMissing(PARAMETER1);
      return PARAMETER1;
    };
    r242 = dyn pchisq[, , `lower.tail`](p33, p34, FALSE);
    check L382() else D145();
  L480():
    ss1 = force? ss;
    checkMissing(ss1);
    almost_3 = ld `almost.1`;
    check L481() else D198();
  L484():
    B8 = force? B7;
    checkMissing(B8);
    r344 = `+`(B8, 1.0);
    r345 = `/`(r343, r344);
    st PVAL = r345;
    goto L82();
  D131():
    deopt 444 [r220];
  D135():
    deopt 456 [r224];
  D138():
    deopt 472 [r232];
  D141():
    deopt 480 [r236];
  D145():
    deopt 497 [r242];
  D198():
    deopt 675 [1.0, ss1, almost_3];
  L361():
    goto L76(r220);
  L366():
    st METHOD = r224;
    goto L78(r224);
  L375():
    goto L81(r232);
  L378():
    goto L80(r236);
  L382():
    st PVAL = r242;
    goto L69(r242);
  L481():
    almost_4 = force? almost_3;
    checkMissing(almost_4);
    STATISTIC4 = ld STATISTIC;
    check L482() else D199();
  D199():
    deopt 676 [1.0, ss1, almost_4, STATISTIC4];
  L482():
    STATISTIC5 = force? STATISTIC4;
    checkMissing(STATISTIC5);
    r340 = `*`(almost_4, STATISTIC5);
    r341 = `>=`(ss1, r340);
    sum7 = ldf sum in base;
    r342 = dyn sum7(r341);
    check L483() else D200();
  D200():
    deopt 681 [1.0, r342];
  L483():
    goto L109(1.0, r342);
  }
}
fun inner2708337952() {
  () -+> V { reg paste:cls, reg METHOD:*, reg METHOD1:V, reg p:p(V +), reg B:*, reg B1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      return METHOD1;
    };
    p1 = prom<V +>{
      B = ld B;
      B1 = force? B;
      checkMissing(B1);
      return B1;
    };
    r2 = dyn paste(p, "with simulated p-value\n\t (based on", p1, "replicates)");
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    sst METHOD = r2;
    invisible.0();
    popenv;
    return r2;
  }
}
fun inner3291413465(r, c, n) {
  (reg r:*, reg c:*, reg n:*) -+> V { var r:*, var c:*, var n:*, reg c1:*, reg c2:V, reg r1:*, reg r2:V, reg r3:V, reg n1:*, reg n2:V, reg r4:*, reg r5:V, reg r6:V, reg r7:V, reg n3:*, reg n4:V, reg c3:*, reg c4:V, reg r8:V, reg r9:V, reg n5:*, reg n6:V, reg r10:V, reg r11:V |
    mkenv;
    st r = r;
    st c = c;
    st n = n;
    c1 = ld c;
    check L0() else D0();
  D0():
    deopt 0 [c1];
  L0():
    c2 = force? c1;
    checkMissing(c2);
    r1 = ld r;
    check L1() else D1();
  D1():
    deopt 1 [c2, r1];
  L1():
    r2 = force? r1;
    checkMissing(r2);
    r3 = `*`(c2, r2);
    n1 = ld n;
    check L2() else D2();
  D2():
    deopt 3 [r3, n1];
  L2():
    n2 = force? n1;
    checkMissing(n2);
    r4 = ld r;
    check L3() else D3();
  D3():
    deopt 4 [r3, n2, r4];
  L3():
    r5 = force? r4;
    checkMissing(r5);
    r6 = `-`(n2, r5);
    r7 = `*`(r3, r6);
    n3 = ld n;
    check L4() else D4();
  D4():
    deopt 7 [r7, n3];
  L4():
    n4 = force? n3;
    checkMissing(n4);
    c3 = ld c;
    check L5() else D5();
  D5():
    deopt 8 [r7, n4, c3];
  L5():
    c4 = force? c3;
    checkMissing(c4);
    r8 = `-`(n4, c4);
    r9 = `*`(r7, r8);
    n5 = ld n;
    check L6() else D6();
  D6():
    deopt 11 [r9, n5];
  L6():
    n6 = force? n5;
    checkMissing(n6);
    r10 = `^`(n6, 3.0);
    r11 = `/`(r9, r10);
    popenv;
    return r11;
  }
}
fun inner1631533690(x, E, k) {
  (reg x:*, reg E:*, reg k:*) -+> V { var x:*, var E:*, var k:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg table:cls, reg factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg k1:*, reg k2:V, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg E1:*, reg E2:V, reg r8:V, reg r9:V, reg E3:*, reg E4:V, reg r10:V, reg sum:cls, reg r11:V |
    mkenv;
    st x = x;
    st E = E;
    st k = k;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    table = ldf table;
    check L3() else D0();
  L2():
    r = dyn base(<lang `/`(`^`(`(`(`-`(table(factor(x, levels=`:`(1, k))), E)), 2.0), E)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p2 = prom<V +>{
      factor = ldf factor;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        k1 = ld k;
        k2 = force? k1;
        checkMissing(k2);
        r3 = `:`(1, k2);
        return r3;
      };
      r5 = dyn factor[, levels](p, p1);
      return r5;
    };
    r7 = dyn table(p2);
    check L4() else D1();
  D1():
    deopt 5 [r7];
  L4():
    E1 = ld E;
    check L5() else D2();
  D2():
    deopt 5 [r7, E1];
  L5():
    E2 = force? E1;
    checkMissing(E2);
    r8 = `-`(r7, E2);
    r9 = `^`(r8, 2.0);
    E3 = ld E;
    check L6() else D3();
  D3():
    deopt 9 [r9, E3];
  L6():
    E4 = force? E3;
    checkMissing(E4);
    r10 = `/`(r9, E4);
    sum = ldf sum in base;
    r11 = dyn sum(r10);
    check L7() else D4();
  D4():
    deopt 13 [r11];
  L7():
    goto L0(r11);
  }
}