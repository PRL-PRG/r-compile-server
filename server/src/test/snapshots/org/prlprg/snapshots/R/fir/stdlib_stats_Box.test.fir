fun main() {
  () -+> V { reg r:cls, reg rnorm:cls, reg r1:V, reg Box_test:cls, reg x:*, reg x1:V, reg p:p(V +), reg r3:V, reg Box_test1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner3180477695;
    st `Box.test` = r;
    rnorm = ldf rnorm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn rnorm(100.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    st x = r1;
    Box_test = ldf `Box.test`;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r3 = dyn Box_test[, lag](p, 1.0);
    check L3() else D3();
  D3():
    deopt 13 [r3];
  L3():
    Box_test1 = ldf `Box.test`;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r5 = dyn Box_test1[, lag, type](p1, 1.0, "Ljung");
    check L5() else D5();
  D5():
    deopt 21 [r5];
  L5():
    popenv;
    return r5;
  }
}
fun inner3180477695(x, lag, type, fitdf) {
  (reg x:*, reg lag:*, reg type:*, reg fitdf:*) -+> V { var x:*, var lag:*, reg lag_isMissing:L, reg lag_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var fitdf:*, reg fitdf_isMissing:L, reg fitdf_orDefault:*, reg NCOL:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg r6:V, reg c1:L, reg stop:cls, reg r7:V, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg substitute:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg lag1:*, reg lag2:V, reg as_integer:cls, reg r16:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p3:p(V +), reg r18:V, reg acf:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg lag3:*, reg lag4:V, reg p5:p(V +), reg na_pass:*, reg na_pass1:V, reg p6:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg x5:*, reg x6:V, reg is_na:cls, reg r27:V, reg r28:V, reg sum:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg lag5:*, reg lag6:V, reg fitdf1:*, reg fitdf2:V, reg r32:V, reg c2:cls, reg r33:V, reg cor:*, reg cor1:V, reg c3:L, reg cor3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg c4:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg lag7:*, reg lag8:V, reg r35:V, reg r36:V, reg __:cls, reg r37:V, reg type3:*, reg type4:V, reg r38:V, reg c5:L, reg n:*, reg n1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg n4:V, reg r40:V, reg obs:*, reg obs1:V, reg r41:V, reg sum1:cls, reg r42:V, reg r43:V, reg pchisq:cls, reg STATISTIC:*, reg STATISTIC1:V, reg p7:p(V +), reg lag9:*, reg lag10:V, reg fitdf3:*, reg fitdf4:V, reg r45:V, reg p8:p(V +), reg r47:V, reg r48:V, reg n5:*, reg n6:V, reg n7:*, reg n8:V, reg r50:V, reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg r63:R, reg r64:V, reg n9:*, reg n10:V, reg r65:V, reg n11:*, reg n12:V, reg lag11:*, reg lag12:V, reg r66:V, reg seq_int:cls, reg r67:V, reg r68:V, reg obs2:*, reg obs3:V, reg r69:V, reg r70:V, reg sum2:cls, reg r71:V, reg r72:V, reg pchisq1:cls, reg STATISTIC2:*, reg STATISTIC3:V, reg p9:p(V +), reg lag13:*, reg lag14:V, reg fitdf5:*, reg fitdf6:V, reg r74:V, reg p10:p(V +), reg r76:V, reg r77:V, reg l:*, reg names__:cls, reg r78:V, reg structure:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg STATISTIC4:*, reg STATISTIC5:V, reg PARAMETER:*, reg PARAMETER1:V, reg PVAL:*, reg PVAL1:V, reg METHOD:*, reg METHOD1:V, reg DNAME:*, reg DNAME1:V, reg list:cls, reg r81:V, reg p11:p(V +), reg r83:V |
    mkenv;
    st x = x;
    lag_isMissing = missing.0(lag);
    if lag_isMissing then L0(1.0) else L0(lag);
  L0(lag_orDefault):
    st lag = lag_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1() else L2(type);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Box-Pierce", "Ljung-Box");
      goto L0(r2);
    L2():
      r = dyn base("Box-Pierce", "Ljung-Box");
      goto L0(r);
    };
    goto L2(p);
  L2(type_orDefault):
    st type = type_orDefault;
    fitdf_isMissing = missing.0(fitdf);
    if fitdf_isMissing then L3(0.0) else L3(fitdf);
  L3(fitdf_orDefault):
    st fitdf = fitdf_orDefault;
    NCOL = ldf NCOL;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn NCOL(p1);
    check L17() else D1();
  D1():
    deopt 3 [r5];
  L17():
    r6 = `>`(r5, 1.0);
    c1 = `as.logical`(r6);
    if c1 then L18() else L4();
  L4():
    goto L5();
  L5():
    deparse1 = ldf deparse1;
    check L22() else D4();
  L18():
    stop = ldf stop;
    check L19() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L19():
    r7 = dyn stop("x is not a vector or univariate time series");
    check L20() else D3();
  L22():
    p2 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      substitute = ldf substitute in base;
      r11 = dyn substitute(<sym x>);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym x>);
      goto L0(r9);
    };
    r13 = dyn deparse1(p2);
    check L23() else D5();
  D3():
    deopt 9 [r7];
  D5():
    deopt 15 [r13];
  L20():
    goto L5();
  L23():
    st DNAME = r13;
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L6(r15):
    st lag = r15;
    match_arg = ldf `match.arg`;
    check L28() else D8();
  L24():
    lag1 = ld lag;
    check L26() else D6();
  L25():
    r14 = dyn base2(<sym lag>);
    goto L6(r14);
  D6():
    deopt 19 [lag1];
  D8():
    deopt 25 [];
  L26():
    lag2 = force? lag1;
    checkMissing(lag2);
    as_integer = ldf `as.integer` in base;
    r16 = dyn as_integer(lag2);
    check L27() else D7();
  L28():
    p3 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r18 = dyn match_arg(p3);
    check L29() else D9();
  D7():
    deopt 22 [r16];
  D9():
    deopt 27 [r18];
  L27():
    goto L6(r16);
  L29():
    st type = r18;
    acf = ldf acf;
    check L30() else D10();
  D10():
    deopt 30 [];
  L30():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p5 = prom<V +>{
      lag3 = ld lag;
      lag4 = force? lag3;
      checkMissing(lag4);
      return lag4;
    };
    p6 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r22 = dyn acf[, `lag.max`, plot, `na.action`](p4, p5, FALSE, p6);
    check L31() else D11();
  D11():
    deopt 38 [r22];
  L31():
    st cor = r22;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L7(r24):
    st n = r24;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L32():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L33():
    r23 = dyn base3(<lang `!`(is.na(x))>);
    goto L7(r23);
  L8(r26):
    r28 = `!`(r26);
    sum = ldf sum in base;
    r29 = dyn sum(r28);
    check L38() else D14();
  L9(r31):
    st PARAMETER = r31;
    cor = ld cor;
    check L44() else D18();
  L34():
    x5 = ld x;
    check L36() else D12();
  L35():
    r25 = dyn base4(<sym x>);
    goto L8(r25);
  L39():
    lag5 = ld lag;
    check L41() else D15();
  L40():
    r30 = dyn base5[df](<lang `-`(lag, fitdf)>);
    goto L9(r30);
  D12():
    deopt 44 [x5];
  D14():
    deopt 50 [r29];
  D15():
    deopt 54 [lag5];
  D18():
    deopt 62 [cor];
  L36():
    x6 = force? x5;
    checkMissing(x6);
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(x6);
    check L37() else D13();
  L38():
    goto L7(r29);
  L41():
    lag6 = force? lag5;
    checkMissing(lag6);
    fitdf1 = ld fitdf;
    check L42() else D16();
  L44():
    cor1 = force? cor;
    checkMissing(cor1);
    c3 = `is.object`(cor1);
    if c3 then L46() else L47(cor1);
  D13():
    deopt 47 [r27];
  D16():
    deopt 55 [lag6, fitdf1];
  L37():
    goto L8(r27);
  L42():
    fitdf2 = force? fitdf1;
    checkMissing(fitdf2);
    r32 = `-`(lag6, fitdf2);
    c2 = ldf c in base;
    r33 = dyn c2(r32);
    check L43() else D17();
  L45(dx1):
    c4 = `is.object`(dx1);
    if c4 then L49() else L50(dx1);
  L46():
    dr = tryDispatchBuiltin.1("$", cor1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(cor3):
    r34 = `$`(cor3, <sym acf>);
    goto L45(r34);
  D17():
    deopt 60 [r33];
  L10(dx5):
    st obs = dx5;
    type3 = ld type;
    check L53() else D20();
  L43():
    goto L9(r33);
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L45(dx);
  L49():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(dr2);
  L50(dx3):
    lag7 = ld lag;
    check L52() else D19();
  D19():
    deopt 66 [dx3, 2.0, lag7];
  D20():
    deopt 73 [type3];
  L51():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx4);
  L52():
    lag8 = force? lag7;
    checkMissing(lag8);
    r35 = `+`(lag8, 1.0);
    r36 = `:`(2.0, r35);
    __ = ldf `[` in base;
    r37 = dyn __(dx3, r36);
    goto L10(r37);
  L53():
    type4 = force? type3;
    checkMissing(type4);
    r38 = `==`(type4, "Box-Pierce");
    c5 = `as.logical`(r38);
    if c5 then L54() else L11();
  L11():
    st METHOD = "Box-Ljung test";
    n5 = ld n;
    check L63() else D26();
  L13():
    l = ld STATISTIC;
    names__ = ldf `names<-`;
    check L77() else D36();
  L54():
    st METHOD = "Box-Pierce test";
    n = ld n;
    check L55() else D21();
  D21():
    deopt 80 [n];
  D26():
    deopt 102 [n5];
  D36():
    deopt 142 ["X-squared", l, "X-squared"];
  L55():
    n1 = force? n;
    checkMissing(n1);
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  L63():
    n6 = force? n5;
    checkMissing(n6);
    n7 = ld n;
    check L64() else D27();
  L77():
    r78 = dyn names__(l, NULL, "X-squared");
    check L78() else D37();
  D27():
    deopt 103 [n6, n7];
  D37():
    deopt 144 ["X-squared", r78];
  L12(n4, r40):
    r43 = `*`(n4, r40);
    st STATISTIC = r43;
    pchisq = ldf pchisq;
    check L60() else D24();
  L56():
    obs = ld obs;
    check L58() else D22();
  L57():
    r39 = dyn base6(<lang `^`(obs, 2.0)>);
    goto L12(n1, r39);
  L64():
    n8 = force? n7;
    checkMissing(n8);
    r50 = `+`(n8, 2.0);
    r51 = `*`(n6, r50);
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L65() else L66();
  L78():
    st STATISTIC = r78;
    structure = ldf structure;
    check L79() else D38();
  D22():
    deopt 83 [n1, obs];
  D24():
    deopt 93 [1.0];
  D38():
    deopt 147 [];
  L14(r55, r56):
    r72 = `*`(r55, r56);
    st STATISTIC = r72;
    pchisq1 = ldf pchisq;
    check L75() else D34();
  L58():
    obs1 = force? obs;
    checkMissing(obs1);
    r41 = `^`(obs1, 2.0);
    sum1 = ldf sum in base;
    r42 = dyn sum1(r41);
    check L59() else D23();
  L60():
    p7 = prom<V +>{
      STATISTIC = ld STATISTIC;
      STATISTIC1 = force? STATISTIC;
      checkMissing(STATISTIC1);
      return STATISTIC1;
    };
    p8 = prom<V +>{
      lag9 = ld lag;
      lag10 = force? lag9;
      checkMissing(lag10);
      fitdf3 = ld fitdf;
      fitdf4 = force? fitdf3;
      checkMissing(fitdf4);
      r45 = `-`(lag10, fitdf4);
      return r45;
    };
    r47 = dyn pchisq(p7, p8);
    check L61() else D25();
  L65():
    sym8 = ldf `seq.int`;
    base8 = ldf `seq.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L67() else L68();
  L66():
    r54 = dyn base7(<lang `*`(`/`(1.0, seq.int(`-`(n, 1.0), `-`(n, lag))), `^`(obs, 2.0))>);
    goto L14(r51, r54);
  L79():
    p11 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      STATISTIC4 = ld STATISTIC;
      STATISTIC5 = force? STATISTIC4;
      checkMissing(STATISTIC5);
      PARAMETER = ld PARAMETER;
      PARAMETER1 = force? PARAMETER;
      checkMissing(PARAMETER1);
      PVAL = ld PVAL;
      PVAL1 = force? PVAL;
      checkMissing(PVAL1);
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      DNAME = ld DNAME;
      DNAME1 = force? DNAME;
      checkMissing(DNAME1);
      list = ldf list in base;
      r81 = dyn list(STATISTIC5, PARAMETER1, PVAL1, METHOD1, DNAME1);
      goto L0(r81);
    L2():
      r79 = dyn base9[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>);
      goto L0(r79);
    };
    r83 = dyn structure[, class](p11, "htest");
    check L80() else D39();
  D23():
    deopt 88 [n1, r42];
  D25():
    deopt 96 [1.0, r47];
  D34():
    deopt 133 [1.0];
  D39():
    deopt 151 [r83];
  L15(r62, r63, r64):
    r68 = `/`(r63, r64);
    obs2 = ld obs;
    check L73() else D32();
  L59():
    goto L12(n1, r42);
  L61():
    r48 = `-`(1.0, r47);
    st PVAL = r48;
    goto L13();
  L67():
    n9 = ld n;
    check L69() else D28();
  L68():
    r61 = dyn base8(<lang `-`(n, 1.0)>, <lang `-`(n, lag)>);
    goto L15(r51, 1.0, r61);
  L75():
    p9 = prom<V +>{
      STATISTIC2 = ld STATISTIC;
      STATISTIC3 = force? STATISTIC2;
      checkMissing(STATISTIC3);
      return STATISTIC3;
    };
    p10 = prom<V +>{
      lag13 = ld lag;
      lag14 = force? lag13;
      checkMissing(lag14);
      fitdf5 = ld fitdf;
      fitdf6 = force? fitdf5;
      checkMissing(fitdf6);
      r74 = `-`(lag14, fitdf6);
      return r74;
    };
    r76 = dyn pchisq1(p9, p10);
    check L76() else D35();
  L80():
    popenv;
    return r83;
  D28():
    deopt 112 [r51, 1.0, n9];
  D32():
    deopt 122 [r62, r68, obs2];
  D35():
    deopt 136 [1.0, r76];
  L69():
    n10 = force? n9;
    checkMissing(n10);
    r65 = `-`(n10, 1.0);
    n11 = ld n;
    check L70() else D29();
  L73():
    obs3 = force? obs2;
    checkMissing(obs3);
    r69 = `^`(obs3, 2.0);
    r70 = `*`(r68, r69);
    sum2 = ldf sum in base;
    r71 = dyn sum2(r70);
    check L74() else D33();
  L76():
    r77 = `-`(1.0, r76);
    st PVAL = r77;
    goto L13();
  D29():
    deopt 116 [r51, 1.0, n11];
  D33():
    deopt 128 [r62, r71];
  L70():
    n12 = force? n11;
    checkMissing(n12);
    lag11 = ld lag;
    check L71() else D30();
  L74():
    goto L14(r62, r71);
  D30():
    deopt 117 [r51, 1.0, n12, lag11];
  L71():
    lag12 = force? lag11;
    checkMissing(lag12);
    r66 = `-`(n12, lag12);
    seq_int = ldf `seq.int` in base;
    r67 = dyn seq_int(r65, r66);
    check L72() else D31();
  D31():
    deopt 121 [r51, 1.0, r67];
  L72():
    goto L15(r51, 1.0, r67);
  }
}