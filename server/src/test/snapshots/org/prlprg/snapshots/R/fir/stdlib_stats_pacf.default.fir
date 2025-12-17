fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner369445359;
    st `pacf.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner369445359(x, `lag.max`, plot, `na.action`, `...`) {
  (reg x:*, reg lag_max:*, reg plot:*, reg na_action:*, reg ddd:dots) -+> V { var x:*, var `lag.max`:*, reg lag_max_isMissing:L, reg lag_max_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var `...`:dots?, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg substitute:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg na_action1:cls, reg as_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg drop:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r15:V, reg r16:V, reg c:L, reg stop:cls, reg r17:V, reg frequency:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r20:V, reg NROW:cls, reg x7:*, reg x8:V, reg p5:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg lag_max1:*, reg lag_max2:V, reg c1:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:R, reg r31:V, reg sampleT:*, reg sampleT1:V, reg NCOL:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r33:V, reg r34:V, reg log10:cls, reg r35:V, reg r36:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg lag_max3:*, reg lag_max4:V, reg sampleT2:*, reg sampleT3:V, reg r41:V, reg min:cls, reg r42:V, reg lag_max5:*, reg lag_max6:V, reg r43:V, reg c3:L, reg stop1:cls, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg x11:*, reg x12:V, reg is_matrix:cls, reg r48:V, reg c4:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg x13:*, reg x14:V, reg anyNA:cls, reg r51:V, reg c5:L, reg stop2:cls, reg r52:V, reg ncol:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r55:V, reg sweep:cls, reg x17:*, reg x18:V, reg p8:p(V +), reg colMeans:cls, reg x19:*, reg x20:V, reg p9:p(V +), reg r58:V, reg p10:p(V +), reg r60:V, reg matrix:cls, reg nser:*, reg nser1:V, reg p11:p(V +), reg nser2:*, reg nser3:V, reg p12:p(V +), reg r63:V, reg l:*, reg c6:L, reg r65:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lower_tri:cls, reg lag:*, reg lag1:V, reg p13:p(V +), reg r69:V, reg ___:cls, reg r70:V, reg ar_yw:cls, reg x21:*, reg x22:V, reg p14:p(V +), reg lag_max7:*, reg lag_max8:V, reg p15:p(V +), reg r73:V, reg c7:L, reg r75:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r76:V, reg outer:cls, reg lag_max9:*, reg lag_max10:V, reg r77:V, reg p16:p(V +), reg lag2:*, reg lag3:V, reg x_freq:*, reg x_freq1:V, reg r79:V, reg p17:p(V +), reg r81:V, reg colnames:cls, reg x23:*, reg x24:V, reg p18:p(V +), reg r83:V, reg scale:cls, reg x25:*, reg x26:V, reg p19:p(V +), reg r86:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r87:V, reg r88:V, reg acf:cls, reg x27:*, reg x28:V, reg p20:p(V +), reg lag_max11:*, reg lag_max12:V, reg p21:p(V +), reg na_action2:*, reg na_action3:V, reg p22:p(V +), reg r92:V, reg c8:L, reg r94:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r95:V, reg drop1:cls, reg r96:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg C_pacf1:*, reg C_pacf2:V, reg acf1:*, reg acf2:V, reg lag_max13:*, reg lag_max14:V, reg vargs:dots, reg r99:V, reg array:cls, reg lag_max15:*, reg lag_max16:V, reg r100:V, reg x_freq2:*, reg x_freq3:V, reg r101:V, reg p23:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r103:V, reg r104:V, reg lag_max17:*, reg lag_max18:V, reg c9:cls, reg r105:V, reg p24:p(V +), reg r107:V, reg structure:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r108:V, reg r109:V, reg pacf:*, reg pacf1:V, reg sampleT4:*, reg sampleT5:V, reg lag4:*, reg lag5:V, reg series:*, reg series1:V, reg snames:*, reg snames1:V, reg list:cls, reg r110:V, reg p25:p(V +), reg r112:V, reg plot1:*, reg plot2:V, reg c10:L, reg plot_acf:cls, reg acf_out:*, reg acf_out1:V, reg p26:p(V +), reg ddd1:dots?, reg r114:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r115:V, reg r116:V, reg acf_out2:*, reg acf_out3:V, reg invisible:cls, reg r117:V, reg acf_out4:*, reg acf_out5:V |
    mkenv;
    st x = x;
    lag_max_isMissing = missing.0(lag_max);
    if lag_max_isMissing then L0(NULL) else L0(lag_max);
  L0(lag_max_orDefault):
    st `lag.max` = lag_max_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L1(TRUE) else L1(plot);
  L1(plot_orDefault):
    st plot = plot_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L2() else L3(na_action);
  L2():
    p = prom<V +>{
      na_fail = ld `na.fail`;
      na_fail1 = force? na_fail;
      checkMissing(na_fail1);
      return na_fail1;
    };
    goto L3(p);
  L3(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    st `...` = ddd;
    deparse1 = ldf deparse1;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p1 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      substitute = ldf substitute in base;
      r3 = dyn substitute(<sym x>);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    r5 = dyn deparse1(p1);
    check L28() else D1();
  D1():
    deopt 3 [r5];
  L28():
    st series = r5;
    sym1 = ldf drop;
    base1 = ldf drop in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L4(r7):
    st x = r7;
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L29():
    na_action1 = ldf `na.action`;
    check L31() else D2();
  L30():
    r6 = dyn base1(<lang na.action(as.ts(x))>);
    goto L4(r6);
  D2():
    deopt 8 [];
  L5(r14):
    r16 = `!`(r14);
    c = `as.logical`(r16);
    if c then L38() else L6();
  L31():
    p3 = prom<V +>{
      as_ts = ldf `as.ts`;
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r9 = dyn as_ts(p2);
      return r9;
    };
    r11 = dyn na_action1(p3);
    check L32() else D3();
  L34():
    x3 = ld x;
    check L36() else D5();
  L35():
    r13 = dyn base2(<sym x>);
    goto L5(r13);
  D3():
    deopt 10 [r11];
  D5():
    deopt 16 [x3];
  L6():
    goto L7();
  L7():
    frequency = ldf frequency;
    check L42() else D9();
  L32():
    drop = ldf drop in base;
    r12 = dyn drop(r11);
    check L33() else D4();
  L36():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r15 = dyn is_numeric(x4);
    check L37() else D6();
  L38():
    stop = ldf stop;
    check L39() else D7();
  D4():
    deopt 12 [r12];
  D6():
    deopt 19 [r15];
  D7():
    deopt 22 [];
  D9():
    deopt 28 [];
  L33():
    goto L4(r12);
  L37():
    goto L5(r15);
  L39():
    r17 = dyn stop("'x' must be numeric");
    check L40() else D8();
  L42():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r20 = dyn frequency(p4);
    check L43() else D10();
  D8():
    deopt 24 [r17];
  D10():
    deopt 30 [r20];
  L40():
    goto L7();
  L43():
    st `x.freq` = r20;
    NROW = ldf NROW;
    check L44() else D11();
  D11():
    deopt 33 [];
  L44():
    p5 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r22 = dyn NROW(p5);
    check L45() else D12();
  D12():
    deopt 35 [r22];
  L45():
    st sampleT = r22;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L8(r24):
    c2 = `as.logical`(r24);
    if c2 then L49() else L9();
  L46():
    lag_max1 = ld `lag.max`;
    check L48() else D13();
  L47():
    r23 = dyn base3(<sym lag.max>);
    goto L8(r23);
  D13():
    deopt 38 [lag_max1];
  L9():
    goto L12();
  L12():
    sym6 = ldf min;
    base6 = ldf min in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L48():
    lag_max2 = force? lag_max1;
    checkMissing(lag_max2);
    c1 = `==`(lag_max2, NULL);
    goto L8(c1);
  L49():
    sym4 = ldf floor;
    base4 = ldf floor in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L10(r26):
    st `lag.max` = r26;
    goto L12();
  L13(r40):
    st `lag.max` = r40;
    lag_max5 = ld `lag.max`;
    check L64() else D21();
  L50():
    sym5 = ldf log10;
    base5 = ldf log10 in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  L51():
    r25 = dyn base4(<lang `*`(10.0, log10(`/`(sampleT, NCOL(x))))>);
    goto L10(r25);
  L59():
    lag_max3 = ld `lag.max`;
    check L61() else D18();
  L60():
    r39 = dyn base6(<sym lag.max>, <lang `-`(sampleT, 1.0)>);
    goto L13(r39);
  D18():
    deopt 60 [lag_max3];
  D21():
    deopt 69 [lag_max5];
  L11(r30, r31):
    r36 = `*`(r30, r31);
    r37 = floor(r36);
    goto L10(r37);
  L52():
    sampleT = ld sampleT;
    check L54() else D14();
  L53():
    r29 = dyn base5(<lang `/`(sampleT, NCOL(x))>);
    goto L11(10.0, r29);
  L61():
    lag_max4 = force? lag_max3;
    checkMissing(lag_max4);
    sampleT2 = ld sampleT;
    check L62() else D19();
  L64():
    lag_max6 = force? lag_max5;
    checkMissing(lag_max6);
    r43 = `<`(lag_max6, 1.0);
    c3 = `as.logical`(r43);
    if c3 then L65() else L14();
  D14():
    deopt 45 [10.0, sampleT];
  D19():
    deopt 62 [sampleT2];
  L14():
    goto L15();
  L15():
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L54():
    sampleT1 = force? sampleT;
    checkMissing(sampleT1);
    NCOL = ldf NCOL;
    check L55() else D15();
  L62():
    sampleT3 = force? sampleT2;
    checkMissing(sampleT3);
    r41 = `-`(sampleT3, 1.0);
    min = ldf min in base;
    r42 = dyn min(lag_max4, r41);
    check L63() else D20();
  L65():
    stop1 = ldf stop;
    check L66() else D22();
  D15():
    deopt 47 [10.0, sampleT1];
  D20():
    deopt 67 [r42];
  D22():
    deopt 74 [];
  L16(r47):
    c4 = `as.logical`(r47);
    if c4 then L73() else L17();
  L55():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r33 = dyn NCOL(p6);
    check L56() else D16();
  L63():
    goto L13(r42);
  L66():
    r44 = dyn stop1("'lag.max' must be at least 1");
    check L67() else D23();
  L69():
    x11 = ld x;
    check L71() else D24();
  L70():
    r46 = dyn base7(<sym x>);
    goto L16(r46);
  D16():
    deopt 49 [10.0, sampleT1, r33];
  D23():
    deopt 76 [r44];
  D24():
    deopt 81 [x11];
  L17():
    scale = ldf scale;
    check L104() else D44();
  L22():
    structure = ldf structure;
    check L122() else D54();
  L56():
    r34 = `/`(sampleT1, r33);
    log10 = ldf log10 in base;
    r35 = dyn log10(r34);
    check L57() else D17();
  L67():
    goto L15();
  L71():
    x12 = force? x11;
    checkMissing(x12);
    is_matrix = ldf `is.matrix` in base;
    r48 = dyn is_matrix(x12);
    check L72() else D25();
  L73():
    sym8 = ldf anyNA;
    base8 = ldf anyNA in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L74() else L75();
  D17():
    deopt 52 [10.0, r35];
  D25():
    deopt 84 [r48];
  D44():
    deopt 147 [];
  D54():
    deopt 187 [];
  L18(r50):
    c5 = `as.logical`(r50);
    if c5 then L78() else L19();
  L57():
    goto L11(10.0, r35);
  L72():
    goto L16(r48);
  L74():
    x13 = ld x;
    check L76() else D26();
  L75():
    r49 = dyn base8(<sym x>);
    goto L18(r49);
  L104():
    p19 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    r86 = dyn scale(p19, TRUE, FALSE);
    check L105() else D45();
  L122():
    p25 = prom<V +>{
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r109):
      return r109;
    L1():
      pacf = ld pacf;
      pacf1 = force? pacf;
      checkMissing(pacf1);
      sampleT4 = ld sampleT;
      sampleT5 = force? sampleT4;
      checkMissing(sampleT5);
      lag4 = ld lag;
      lag5 = force? lag4;
      checkMissing(lag5);
      series = ld series;
      series1 = force? series;
      checkMissing(series1);
      snames = ld snames;
      snames1 = force? snames;
      checkMissing(snames1);
      list = ldf list in base;
      r110 = dyn list(pacf1, "partial", sampleT5, lag5, series1, snames1);
      goto L0(r110);
    L2():
      r108 = dyn base12[acf, type, `n.used`, lag, series, snames](<sym pacf>, "partial", <sym sampleT>, <sym lag>, <sym series>, <sym snames>);
      goto L0(r108);
    };
    r112 = dyn structure[`.Data`, class](p25, "acf");
    check L123() else D55();
  D26():
    deopt 87 [x13];
  D45():
    deopt 151 [r86];
  D55():
    deopt 192 [r112];
  L19():
    goto L20();
  L20():
    ncol = ldf ncol;
    check L82() else D30();
  L76():
    x14 = force? x13;
    checkMissing(x14);
    anyNA = ldf anyNA in base;
    r51 = dyn anyNA(x14);
    check L77() else D27();
  L78():
    stop2 = ldf stop;
    check L79() else D28();
  L105():
    st x = r86;
    sym9 = ldf drop;
    base9 = ldf drop in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L106() else L107();
  L123():
    st `acf.out` = r112;
    plot1 = ld plot;
    check L124() else D56();
  D27():
    deopt 90 [r51];
  D28():
    deopt 92 [];
  D30():
    deopt 98 [];
  D56():
    deopt 194 [plot1];
  L23(r88):
    st acf = r88;
    sym10 = ldf `.Call`;
    base10 = ldf `.Call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  L77():
    goto L18(r51);
  L79():
    r52 = dyn stop2("NAs in 'x'");
    check L80() else D29();
  L82():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r55 = dyn ncol(p7);
    check L83() else D31();
  L106():
    acf = ldf acf;
    check L108() else D46();
  L107():
    r87 = dyn base9(<lang `$`(acf(x, lag.max=lag.max, plot=FALSE, na.action=na.action), acf)>);
    goto L23(r87);
  L124():
    plot2 = force? plot1;
    checkMissing(plot2);
    c10 = `as.logical`(plot2);
    if c10 then L125() else L25();
  D29():
    deopt 94 [r52];
  D31():
    deopt 100 [r55];
  D46():
    deopt 156 [];
  L24(r98):
    st pacf = r98;
    array = ldf array;
    check L120() else D52();
  L25():
    acf_out4 = ld `acf.out`;
    check L133() else D61();
  L80():
    goto L20();
  L83():
    st nser = r55;
    sweep = ldf sweep;
    check L84() else D32();
  L108():
    p20 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p21 = prom<V +>{
      lag_max11 = ld `lag.max`;
      lag_max12 = force? lag_max11;
      checkMissing(lag_max12);
      return lag_max12;
    };
    p22 = prom<V +>{
      na_action2 = ld `na.action`;
      na_action3 = force? na_action2;
      checkMissing(na_action3);
      return na_action3;
    };
    r92 = dyn acf[, `lag.max`, plot, `na.action`](p20, p21, FALSE, p22);
    check L109() else D47();
  L115():
    C_pacf1 = ld C_pacf1;
    check L117() else D49();
  L116():
    r97 = dyn base10(<sym C_pacf1>, <sym acf>, <sym lag.max>);
    goto L24(r97);
  L125():
    plot_acf = ldf `plot.acf`;
    check L126() else D57();
  D32():
    deopt 103 [];
  D47():
    deopt 164 [r92];
  D49():
    deopt 170 [C_pacf1];
  D52():
    deopt 177 [];
  D57():
    deopt 197 [];
  D61():
    deopt 207 [acf_out4];
  L84():
    p8 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p10 = prom<V +>{
      colMeans = ldf colMeans;
      p9 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r58 = dyn colMeans(p9);
      return r58;
    };
    r60 = dyn sweep[, , , `check.margin`](p8, 2.0, p10, FALSE);
    check L85() else D33();
  L109():
    c8 = `is.object`(r92);
    if c8 then L111() else L112(r92);
  L117():
    C_pacf2 = force? C_pacf1;
    checkMissing(C_pacf2);
    acf1 = ld acf;
    check L118() else D50();
  L120():
    p23 = prom<V +>{
      lag_max15 = ld `lag.max`;
      lag_max16 = force? lag_max15;
      checkMissing(lag_max16);
      r100 = `:`(1, lag_max16);
      x_freq2 = ld `x.freq`;
      x_freq3 = force? x_freq2;
      checkMissing(x_freq3);
      r101 = `/`(r100, x_freq3);
      return r101;
    };
    p24 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      lag_max17 = ld `lag.max`;
      lag_max18 = force? lag_max17;
      checkMissing(lag_max18);
      c9 = ldf c in base;
      r105 = dyn c9(lag_max18, 1, 1);
      goto L0(r105);
    L2():
      r103 = dyn base11(<sym lag.max>, 1, 1);
      goto L0(r103);
    };
    r107 = dyn array[, dim](p23, p24);
    check L121() else D53();
  L126():
    p26 = prom<V +>{
      acf_out = ld `acf.out`;
      acf_out1 = force? acf_out;
      checkMissing(acf_out1);
      return acf_out1;
    };
    ddd1 = ld `...`;
    r114 = dyn plot_acf[, `...`](p26, ddd1);
    check L127() else D58();
  L133():
    acf_out5 = force? acf_out4;
    checkMissing(acf_out5);
    popenv;
    return acf_out5;
  D33():
    deopt 109 [r60];
  D50():
    deopt 171 [C_pacf2, acf1];
  D53():
    deopt 181 [r107];
  D58():
    deopt 200 [r114];
  L85():
    st x = r60;
    matrix = ldf matrix;
    check L86() else D34();
  L110(dx5):
    drop1 = ldf drop in base;
    r96 = dyn drop1(dx5);
    check L114() else D48();
  L111():
    dr4 = tryDispatchBuiltin.1("$", r92);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L113() else L112(dr4);
  L112(r94):
    r95 = `$`(r94, <sym acf>);
    goto L110(r95);
  L118():
    acf2 = force? acf1;
    checkMissing(acf2);
    lag_max13 = ld `lag.max`;
    check L119() else D51();
  L121():
    st lag = r107;
    st snames = NULL;
    goto L22();
  L127():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L128() else L129();
  D34():
    deopt 112 [];
  D48():
    deopt 167 [r96];
  D51():
    deopt 172 [C_pacf2, acf2, lag_max13];
  L26(r116):
    popenv;
    return r116;
  L86():
    p11 = prom<V +>{
      nser = ld nser;
      nser1 = force? nser;
      checkMissing(nser1);
      return nser1;
    };
    p12 = prom<V +>{
      nser2 = ld nser;
      nser3 = force? nser2;
      checkMissing(nser3);
      return nser3;
    };
    r63 = dyn matrix(1.0, p11, p12);
    check L87() else D35();
  L113():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L110(dx4);
  L114():
    goto L23(r96);
  L119():
    lag_max14 = force? lag_max13;
    checkMissing(lag_max14);
    vargs = dots[acf2, lag_max14];
    r99 = `.Call`(C_pacf2, vargs, <missing>);
    goto L24(r99);
  L128():
    acf_out2 = ld `acf.out`;
    check L130() else D59();
  L129():
    r115 = dyn base13(<sym acf.out>);
    goto L26(r115);
  D35():
    deopt 116 [r63];
  D59():
    deopt 203 [acf_out2];
  L87():
    st lag = r63;
    l = ld lag;
    c6 = `is.object`(l);
    if c6 then L88() else L89(-1.0, l);
  L130():
    acf_out3 = force? acf_out2;
    checkMissing(acf_out3);
    invisible = ldf invisible in base;
    r117 = dyn invisible(acf_out3);
    check L131() else D60();
  D60():
    deopt 206 [r117];
  L21(dx1):
    st lag = dx1;
    ar_yw = ldf `ar.yw`;
    check L93() else D38();
  L88():
    dr = tryDispatchBuiltin.0("[<-", l, -1.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L90() else L89(-1.0, dr);
  L89(r65, l2):
    lower_tri = ldf `lower.tri`;
    check L91() else D36();
  L131():
    goto L26(r117);
  D36():
    deopt 122 [r65, l2, -1.0];
  D38():
    deopt 128 [];
  L90():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L91():
    p13 = prom<V +>{
      lag = ld lag;
      lag1 = force? lag;
      checkMissing(lag1);
      return lag1;
    };
    r69 = dyn lower_tri(p13);
    check L92() else D37();
  L93():
    p14 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p15 = prom<V +>{
      lag_max7 = ld `lag.max`;
      lag_max8 = force? lag_max7;
      checkMissing(lag_max8);
      return lag_max8;
    };
    r73 = dyn ar_yw[, `order.max`](p14, p15);
    check L94() else D39();
  D37():
    deopt 124 [r65, l2, -1.0, r69];
  D39():
    deopt 132 [r73];
  L92():
    ___ = ldf `[<-` in base;
    r70 = dyn ___(l2, -1.0, r69);
    goto L21(r70);
  L94():
    c7 = `is.object`(r73);
    if c7 then L96() else L97(r73);
  L95(dx3):
    st pacf = dx3;
    outer = ldf outer;
    check L99() else D40();
  L96():
    dr2 = tryDispatchBuiltin.1("$", r73);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(dr2);
  L97(r75):
    r76 = `$`(r75, <sym partialacf>);
    goto L95(r76);
  D40():
    deopt 136 [];
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L95(dx2);
  L99():
    p16 = prom<V +>{
      lag_max9 = ld `lag.max`;
      lag_max10 = force? lag_max9;
      checkMissing(lag_max10);
      r77 = `:`(1, lag_max10);
      return r77;
    };
    p17 = prom<V +>{
      lag2 = ld lag;
      lag3 = force? lag2;
      checkMissing(lag3);
      x_freq = ld `x.freq`;
      x_freq1 = force? x_freq;
      checkMissing(x_freq1);
      r79 = `/`(lag3, x_freq1);
      return r79;
    };
    r81 = dyn outer(p16, p17);
    check L100() else D41();
  D41():
    deopt 139 [r81];
  L100():
    st lag = r81;
    colnames = ldf colnames;
    check L101() else D42();
  D42():
    deopt 142 [];
  L101():
    p18 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r83 = dyn colnames(p18);
    check L102() else D43();
  D43():
    deopt 144 [r83];
  L102():
    st snames = r83;
    goto L22();
  }
}