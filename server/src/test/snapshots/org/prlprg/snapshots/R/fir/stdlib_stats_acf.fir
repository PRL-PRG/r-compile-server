fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg acf:cls, reg lh:*, reg lh1:V, reg p1:p(V +), reg r6:V, reg acf1:cls, reg lh2:*, reg lh3:V, reg p2:p(V +), reg r8:V, reg pacf:cls, reg lh4:*, reg lh5:V, reg p3:p(V +), reg r10:V, reg acf2:cls, reg ldeaths:*, reg ldeaths1:V, reg p4:p(V +), reg r12:V, reg acf3:cls, reg ldeaths2:*, reg ldeaths3:V, reg p5:p(V +), reg r14:V, reg acf4:cls, reg ts_union:cls, reg mdeaths:*, reg mdeaths1:V, reg p6:p(V +), reg fdeaths:*, reg fdeaths1:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg ccf:cls, reg mdeaths2:*, reg mdeaths3:V, reg p9:p(V +), reg fdeaths2:*, reg fdeaths3:V, reg p10:p(V +), reg r22:V, reg presidents:*, reg presidents1:V, reg acf5:cls, reg presidents2:*, reg presidents3:V, reg p11:p(V +), reg na_pass:*, reg na_pass1:V, reg p12:p(V +), reg r25:V, reg pacf1:cls, reg presidents4:*, reg presidents5:V, reg p13:p(V +), reg na_pass2:*, reg na_pass3:V, reg p14:p(V +), reg r28:V |
    mkenv;
    r = clos inner552012143;
    st acf = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    acf = ldf acf;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      lh = ld lh;
      lh1 = force? lh;
      checkMissing(lh1);
      return lh1;
    };
    r6 = dyn acf(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    acf1 = ldf acf;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      lh2 = ld lh;
      lh3 = force? lh2;
      checkMissing(lh3);
      return lh3;
    };
    r8 = dyn acf1[, type](p2, "covariance");
    check L8() else D5();
  D5():
    deopt 17 [r8];
  L8():
    pacf = ldf pacf;
    check L9() else D6();
  D6():
    deopt 19 [];
  L9():
    p3 = prom<V +>{
      lh4 = ld lh;
      lh5 = force? lh4;
      checkMissing(lh5);
      return lh5;
    };
    r10 = dyn pacf(p3);
    check L10() else D7();
  D7():
    deopt 21 [r10];
  L10():
    acf2 = ldf acf;
    check L11() else D8();
  D8():
    deopt 23 [];
  L11():
    p4 = prom<V +>{
      ldeaths = ld ldeaths;
      ldeaths1 = force? ldeaths;
      checkMissing(ldeaths1);
      return ldeaths1;
    };
    r12 = dyn acf2(p4);
    check L12() else D9();
  D9():
    deopt 25 [r12];
  L12():
    acf3 = ldf acf;
    check L13() else D10();
  D10():
    deopt 27 [];
  L13():
    p5 = prom<V +>{
      ldeaths2 = ld ldeaths;
      ldeaths3 = force? ldeaths2;
      checkMissing(ldeaths3);
      return ldeaths3;
    };
    r14 = dyn acf3[, `ci.type`](p5, "ma");
    check L14() else D11();
  D11():
    deopt 31 [r14];
  L14():
    acf4 = ldf acf;
    check L15() else D12();
  D12():
    deopt 33 [];
  L15():
    p8 = prom<V +>{
      ts_union = ldf `ts.union`;
      p6 = prom<V +>{
        mdeaths = ld mdeaths;
        mdeaths1 = force? mdeaths;
        checkMissing(mdeaths1);
        return mdeaths1;
      };
      p7 = prom<V +>{
        fdeaths = ld fdeaths;
        fdeaths1 = force? fdeaths;
        checkMissing(fdeaths1);
        return fdeaths1;
      };
      r17 = dyn ts_union(p6, p7);
      return r17;
    };
    r19 = dyn acf4(p8);
    check L16() else D13();
  D13():
    deopt 35 [r19];
  L16():
    ccf = ldf ccf;
    check L17() else D14();
  D14():
    deopt 37 [];
  L17():
    p9 = prom<V +>{
      mdeaths2 = ld mdeaths;
      mdeaths3 = force? mdeaths2;
      checkMissing(mdeaths3);
      return mdeaths3;
    };
    p10 = prom<V +>{
      fdeaths2 = ld fdeaths;
      fdeaths3 = force? fdeaths2;
      checkMissing(fdeaths3);
      return fdeaths3;
    };
    r22 = dyn ccf[, , ylab](p9, p10, "cross-correlation");
    check L18() else D15();
  D15():
    deopt 42 [r22];
  L18():
    presidents = ld presidents;
    check L19() else D16();
  D16():
    deopt 43 [presidents];
  L19():
    presidents1 = force? presidents;
    checkMissing(presidents1);
    acf5 = ldf acf;
    check L20() else D17();
  D17():
    deopt 46 [];
  L20():
    p11 = prom<V +>{
      presidents2 = ld presidents;
      presidents3 = force? presidents2;
      checkMissing(presidents3);
      return presidents3;
    };
    p12 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r25 = dyn acf5[, `na.action`](p11, p12);
    check L21() else D18();
  D18():
    deopt 50 [r25];
  L21():
    pacf1 = ldf pacf;
    check L22() else D19();
  D19():
    deopt 52 [];
  L22():
    p13 = prom<V +>{
      presidents4 = ld presidents;
      presidents5 = force? presidents4;
      checkMissing(presidents5);
      return presidents5;
    };
    p14 = prom<V +>{
      na_pass2 = ld `na.pass`;
      na_pass3 = force? na_pass2;
      checkMissing(na_pass3);
      return na_pass3;
    };
    r28 = dyn pacf1[, `na.action`](p13, p14);
    check L23() else D20();
  D20():
    deopt 56 [r28];
  L23():
    popenv;
    return r28;
  }
}
fun inner552012143(x, `lag.max`, type, plot, `na.action`, demean, `...`) {
  (reg x:*, reg lag_max:*, reg type:*, reg plot:*, reg na_action:*, reg demean:*, reg ddd:dots) -+> V { var x:*, var `lag.max`:*, reg lag_max_isMissing:L, reg lag_max_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p1:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var `...`:dots?, reg match_arg:cls, reg type1:*, reg type2:V, reg p2:p(V +), reg r6:V, reg type3:*, reg type4:V, reg r7:V, reg c1:L, reg match_call:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg quote:cls, reg r11:V, reg l:*, reg c2:L, reg r13:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r16:V, reg l3:*, reg c3:L, reg r18:dots, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg eval:cls, reg m:*, reg m1:V, reg p3:p(V +), reg parent_frame:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg deparse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg substitute:cls, reg r30:V, reg p5:p(V +), reg r32:V, reg na_action1:cls, reg as_ts:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg r34:V, reg p7:p(V +), reg r36:V, reg frequency:cls, reg x3:*, reg x4:V, reg p8:p(V +), reg r38:V, reg as_matrix:cls, reg x5:*, reg x6:V, reg p9:p(V +), reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg x7:*, reg x8:V, reg is_numeric:cls, reg r43:V, reg r44:V, reg c4:L, reg stop:cls, reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg nrow:cls, reg x9:*, reg x10:V, reg p10:p(V +), reg r50:V, reg as_integer:cls, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg ncol:cls, reg x11:*, reg x12:V, reg p11:p(V +), reg r55:V, reg as_integer1:cls, reg r56:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg sampleT:*, reg sampleT1:V, reg is_na:cls, reg r59:V, reg c5:L, reg c6:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg c10:L, reg r61:V, reg nser:*, reg nser1:V, reg is_na1:cls, reg r62:V, reg c11:L, reg c12:V, reg c14:L, reg stop1:cls, reg r63:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg lag_max1:*, reg lag_max2:V, reg c15:V, reg c16:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:R, reg r73:V, reg sampleT2:*, reg sampleT3:V, reg log10:cls, reg r74:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r79:V, reg r80:R, reg r81:V, reg r82:V, reg nser2:*, reg nser3:V, reg log11:cls, reg r83:V, reg r84:V, reg r85:V, reg r86:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r88:V, reg r89:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r90:V, reg r91:V, reg lag_max3:*, reg lag_max4:V, reg sampleT4:*, reg sampleT5:V, reg r92:V, reg min:cls, reg r93:V, reg as_integer2:cls, reg r94:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r95:V, reg r96:V, reg lag_max5:*, reg lag_max6:V, reg is_na2:cls, reg r97:V, reg c17:L, reg c18:V, reg lag_max7:*, reg lag_max8:V, reg r98:V, reg c20:L, reg c21:V, reg c23:L, reg stop2:cls, reg r99:V, reg demean1:*, reg demean2:V, reg c24:L, reg sweep:cls, reg x13:*, reg x14:V, reg p12:p(V +), reg colMeans:cls, reg x15:*, reg x16:V, reg p13:p(V +), reg r103:V, reg p14:p(V +), reg r105:V, reg matrix:cls, reg nser4:*, reg nser5:V, reg p15:p(V +), reg nser6:*, reg nser7:V, reg p16:p(V +), reg r109:V, reg l6:*, reg c25:L, reg r111:R, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg lower_tri:cls, reg lag:*, reg lag1:V, reg p17:p(V +), reg r115:V, reg ___:cls, reg r116:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r117:V, reg r118:V, reg C_acf:*, reg C_acf1:V, reg x17:*, reg x18:V, reg lag_max9:*, reg lag_max10:V, reg type5:*, reg type6:V, reg r119:V, reg vargs:dots, reg r120:V, reg outer:cls, reg lag_max11:*, reg lag_max12:V, reg r121:V, reg p18:p(V +), reg lag2:*, reg lag3:V, reg x_freq:*, reg x_freq1:V, reg r123:V, reg p19:p(V +), reg r125:V, reg structure:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r126:V, reg r127:V, reg acf:*, reg acf1:V, reg type7:*, reg type8:V, reg sampleT6:*, reg sampleT7:V, reg lag4:*, reg lag5:V, reg series:*, reg series1:V, reg colnames:cls, reg x19:*, reg x20:V, reg p20:p(V +), reg r129:V, reg list:cls, reg r130:V, reg p21:p(V +), reg r132:V, reg plot1:*, reg plot2:V, reg c26:L, reg plot_acf:cls, reg acf_out:*, reg acf_out1:V, reg p22:p(V +), reg ddd1:dots?, reg r134:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r135:V, reg r136:V, reg acf_out2:*, reg acf_out3:V, reg invisible:cls, reg r137:V, reg acf_out4:*, reg acf_out5:V |
    mkenv;
    st x = x;
    lag_max_isMissing = missing.0(lag_max);
    if lag_max_isMissing then L0(NULL) else L0(lag_max);
  L0(lag_max_orDefault):
    st `lag.max` = lag_max_orDefault;
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
      r2 = dyn c("correlation", "covariance", "partial");
      goto L0(r2);
    L2():
      r = dyn base("correlation", "covariance", "partial");
      goto L0(r);
    };
    goto L2(p);
  L2(type_orDefault):
    st type = type_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L3(TRUE) else L3(plot);
  L3(plot_orDefault):
    st plot = plot_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L4() else L5(na_action);
  L4():
    p1 = prom<V +>{
      na_fail = ld `na.fail`;
      na_fail1 = force? na_fail;
      checkMissing(na_fail1);
      return na_fail1;
    };
    goto L5(p1);
  L5(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    demean_isMissing = missing.0(demean);
    if demean_isMissing then L6(TRUE) else L6(demean);
  L6(demean_orDefault):
    st demean = demean_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L39() else D0();
  D0():
    deopt 1 [];
  L39():
    p2 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r6 = dyn match_arg(p2);
    check L40() else D1();
  D1():
    deopt 3 [r6];
  L40():
    st type = r6;
    type3 = ld type;
    check L41() else D2();
  D2():
    deopt 5 [type3];
  L41():
    type4 = force? type3;
    checkMissing(type4);
    r7 = `==`(type4, "partial");
    c1 = `as.logical`(r7);
    if c1 then L42() else L7();
  L7():
    deparse1 = ldf deparse1;
    check L58() else D7();
  L42():
    match_call = ldf `match.call`;
    check L43() else D3();
  D3():
    deopt 10 [];
  D7():
    deopt 35 [];
  L43():
    r8 = dyn match_call();
    check L44() else D4();
  L58():
    p5 = prom<V +>{
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      substitute = ldf substitute in base;
      r30 = dyn substitute(<sym x>);
      goto L0(r30);
    L2():
      r28 = dyn base2(<sym x>);
      goto L0(r28);
    };
    r32 = dyn deparse1(p5);
    check L59() else D8();
  D4():
    deopt 11 [r8];
  D8():
    deopt 37 [r32];
  L44():
    st m = r8;
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L59():
    st series = r32;
    na_action1 = ldf `na.action`;
    check L60() else D9();
  D9():
    deopt 40 [];
  L8(r10):
    l = ld m;
    c2 = `is.object`(l);
    if c2 then L47() else L48(r10, l);
  L45():
    quote = ldf quote in base;
    r11 = dyn quote(<lang `::`(stats, pacf)>);
    goto L8(r11);
  L46():
    r9 = dyn base1(<lang `::`(stats, pacf)>);
    goto L8(r9);
  L60():
    p7 = prom<V +>{
      as_ts = ldf `as.ts`;
      p6 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r34 = dyn as_ts(p6);
      return r34;
    };
    r36 = dyn na_action1(p7);
    check L61() else D10();
  D10():
    deopt 42 [r36];
  L9(dx1):
    st m = dx1;
    l3 = ld m;
    c3 = `is.object`(l3);
    if c3 then L51() else L52(NULL, l3);
  L47():
    dr = tryDispatchBuiltin.0("[[<-", l, r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(r10, dr);
  L48(r13, l2):
    ____ = ldf `[[<-` in base;
    r16 = dyn ____(l2, r10, 1);
    goto L9(r16);
  L61():
    st x = r36;
    frequency = ldf frequency;
    check L62() else D11();
  D11():
    deopt 45 [];
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L50(dx3):
    st m = dx3;
    eval = ldf eval;
    check L54() else D5();
  L51():
    dr2 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(NULL, dr2);
  L52(r18, l5):
    r21 = `$<-`(l5, <sym type>, NULL);
    goto L50(r21);
  L62():
    p8 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r38 = dyn frequency(p8);
    check L63() else D12();
  D5():
    deopt 27 [];
  D12():
    deopt 47 [r38];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L50(dx2);
  L54():
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r23 = dyn parent_frame();
      return r23;
    };
    r25 = dyn eval(p3, p4);
    check L55() else D6();
  L63():
    st `x.freq` = r38;
    as_matrix = ldf `as.matrix`;
    check L64() else D13();
  D6():
    deopt 30 [r25];
  D13():
    deopt 50 [];
  L55():
    popenv;
    return r25;
  L64():
    p9 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r40 = dyn as_matrix(p9);
    check L65() else D14();
  D14():
    deopt 52 [r40];
  L65():
    st x = r40;
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L11(r42):
    r44 = `!`(r42);
    c4 = `as.logical`(r44);
    if c4 then L70() else L12();
  L66():
    x7 = ld x;
    check L68() else D15();
  L67():
    r41 = dyn base3(<sym x>);
    goto L11(r41);
  D15():
    deopt 56 [x7];
  L12():
    goto L13();
  L13():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L68():
    x8 = force? x7;
    checkMissing(x8);
    is_numeric = ldf `is.numeric` in base;
    r43 = dyn is_numeric(x8);
    check L69() else D16();
  L70():
    stop = ldf stop;
    check L71() else D17();
  D16():
    deopt 59 [r43];
  D17():
    deopt 62 [];
  L14(r48):
    st sampleT = r48;
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L69():
    goto L11(r43);
  L71():
    r45 = dyn stop("'x' must be numeric");
    check L72() else D18();
  L74():
    nrow = ldf nrow;
    check L76() else D19();
  L75():
    r47 = dyn base4(<lang nrow(x)>);
    goto L14(r47);
  D18():
    deopt 64 [r45];
  D19():
    deopt 70 [];
  L15(r53):
    st nser = r53;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L72():
    goto L13();
  L76():
    p10 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r50 = dyn nrow(p10);
    check L77() else D20();
  L79():
    ncol = ldf ncol;
    check L81() else D22();
  L80():
    r52 = dyn base5(<lang ncol(x)>);
    goto L15(r52);
  D20():
    deopt 72 [r50];
  D22():
    deopt 79 [];
  L16(r58):
    c5 = `as.logical`(r58);
    if c5 then L17(c5) else L88();
  L77():
    as_integer = ldf `as.integer` in base;
    r51 = dyn as_integer(r50);
    check L78() else D21();
  L81():
    p11 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r55 = dyn ncol(p11);
    check L82() else D23();
  L84():
    sampleT = ld sampleT;
    check L86() else D25();
  L85():
    r57 = dyn base6(<sym sampleT>);
    goto L16(r57);
  D21():
    deopt 74 [r51];
  D23():
    deopt 81 [r55];
  D25():
    deopt 87 [sampleT];
  L17(c6):
    c14 = `as.logical`(c6);
    if c14 then L94() else L19();
  L78():
    goto L14(r51);
  L82():
    as_integer1 = ldf `as.integer` in base;
    r56 = dyn as_integer1(r55);
    check L83() else D24();
  L86():
    sampleT1 = force? sampleT;
    checkMissing(sampleT1);
    is_na = ldf `is.na` in base;
    r59 = dyn is_na(sampleT1);
    check L87() else D26();
  L88():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  D24():
    deopt 83 [r56];
  D26():
    deopt 90 [r59];
  L18(c10, r61):
    c11 = `as.logical`(r61);
    c12 = `||`(c10, c11);
    goto L17(c12);
  L19():
    goto L20();
  L20():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  L83():
    goto L15(r56);
  L87():
    goto L16(r59);
  L89():
    nser = ld nser;
    check L91() else D27();
  L90():
    r60 = dyn base7(<sym nser>);
    goto L18(c5, r60);
  L94():
    stop1 = ldf stop;
    check L95() else D29();
  D27():
    deopt 93 [c5, nser];
  D29():
    deopt 99 [];
  L21(r66):
    c16 = `as.logical`(r66);
    if c16 then L101() else L22();
  L91():
    nser1 = force? nser;
    checkMissing(nser1);
    is_na1 = ldf `is.na` in base;
    r62 = dyn is_na1(nser1);
    check L92() else D28();
  L95():
    r63 = dyn stop1("'sampleT' and 'nser' must be integer");
    check L96() else D30();
  L98():
    lag_max1 = ld `lag.max`;
    check L100() else D31();
  L99():
    r65 = dyn base8(<sym lag.max>);
    goto L21(r65);
  D28():
    deopt 96 [c5, r62];
  D30():
    deopt 101 [r63];
  D31():
    deopt 105 [lag_max1];
  L22():
    goto L26();
  L26():
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L113() else L114();
  L92():
    goto L18(c5, r62);
  L96():
    goto L20();
  L100():
    lag_max2 = force? lag_max1;
    checkMissing(lag_max2);
    c15 = `==`(lag_max2, NULL);
    goto L21(c15);
  L101():
    sym9 = ldf floor;
    base9 = ldf floor in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L102() else L103();
  L23(r68):
    st `lag.max` = r68;
    goto L26();
  L27(r89):
    st `lag.max` = r89;
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L121() else L122();
  L102():
    sym10 = ldf log10;
    base10 = ldf log10 in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L104() else L105();
  L103():
    r67 = dyn base9(<lang `*`(10.0, `(`(`-`(log10(sampleT), log10(nser))))>);
    goto L23(r67);
  L113():
    sym13 = ldf min;
    base13 = ldf min in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L115() else L116();
  L114():
    r88 = dyn base12(<lang min(lag.max, `-`(sampleT, 1))>);
    goto L27(r88);
  L24(r72, r73):
    sym11 = ldf log10;
    base11 = ldf log10 in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  L28(r91):
    as_integer2 = ldf `as.integer` in base;
    r94 = dyn as_integer2(r91);
    check L120() else D39();
  L29(r96):
    c17 = `as.logical`(r96);
    if c17 then L30(c17) else L125();
  L104():
    sampleT2 = ld sampleT;
    check L106() else D32();
  L105():
    r71 = dyn base10(<sym sampleT>);
    goto L24(10.0, r71);
  L115():
    lag_max3 = ld `lag.max`;
    check L117() else D36();
  L116():
    r90 = dyn base13(<sym lag.max>, <lang `-`(sampleT, 1)>);
    goto L28(r90);
  L121():
    lag_max5 = ld `lag.max`;
    check L123() else D40();
  L122():
    r95 = dyn base14(<sym lag.max>);
    goto L29(r95);
  D32():
    deopt 112 [10.0, sampleT2];
  D36():
    deopt 131 [lag_max3];
  D39():
    deopt 140 [r94];
  D40():
    deopt 144 [lag_max5];
  L25(r80, r81, r82):
    r84 = `-`(r81, r82);
    r85 = `*`(r80, r84);
    r86 = floor(r85);
    goto L23(r86);
  L30(c18):
    c23 = `as.logical`(c18);
    if c23 then L128() else L31();
  L106():
    sampleT3 = force? sampleT2;
    checkMissing(sampleT3);
    log10 = ldf log10 in base;
    r74 = dyn log10(sampleT3);
    check L107() else D33();
  L108():
    nser2 = ld nser;
    check L110() else D34();
  L109():
    r79 = dyn base11(<sym nser>);
    goto L25(r72, r73, r79);
  L117():
    lag_max4 = force? lag_max3;
    checkMissing(lag_max4);
    sampleT4 = ld sampleT;
    check L118() else D37();
  L120():
    goto L27(r94);
  L123():
    lag_max6 = force? lag_max5;
    checkMissing(lag_max6);
    is_na2 = ldf `is.na` in base;
    r97 = dyn is_na2(lag_max6);
    check L124() else D41();
  L125():
    lag_max7 = ld `lag.max`;
    check L126() else D42();
  D33():
    deopt 115 [10.0, r74];
  D34():
    deopt 117 [r72, r73, nser2];
  D37():
    deopt 133 [sampleT4];
  D41():
    deopt 147 [r97];
  D42():
    deopt 148 [c17, lag_max7];
  L31():
    goto L32();
  L32():
    demean1 = ld demean;
    check L132() else D45();
  L107():
    goto L24(10.0, r74);
  L110():
    nser3 = force? nser2;
    checkMissing(nser3);
    log11 = ldf log10 in base;
    r83 = dyn log11(nser3);
    check L111() else D35();
  L118():
    sampleT5 = force? sampleT4;
    checkMissing(sampleT5);
    r92 = `-`(sampleT5, 1);
    min = ldf min in base;
    r93 = dyn min(lag_max4, r92);
    check L119() else D38();
  L124():
    goto L29(r97);
  L126():
    lag_max8 = force? lag_max7;
    checkMissing(lag_max8);
    r98 = `<`(lag_max8, 0.0);
    c20 = `as.logical`(r98);
    c21 = `||`(c17, c20);
    goto L30(c21);
  L128():
    stop2 = ldf stop;
    check L129() else D43();
  D35():
    deopt 120 [r72, r73, r83];
  D38():
    deopt 138 [r93];
  D43():
    deopt 154 [];
  D45():
    deopt 159 [demean1];
  L111():
    goto L25(r72, r73, r83);
  L119():
    goto L28(r93);
  L129():
    r99 = dyn stop2("'lag.max' must be at least 0");
    check L130() else D44();
  L132():
    demean2 = force? demean1;
    checkMissing(demean2);
    c24 = `as.logical`(demean2);
    if c24 then L133() else L33();
  D44():
    deopt 156 [r99];
  L33():
    goto L34();
  L34():
    matrix = ldf matrix;
    check L137() else D48();
  L130():
    goto L32();
  L133():
    sweep = ldf sweep;
    check L134() else D46();
  D46():
    deopt 162 [];
  D48():
    deopt 173 [];
  L134():
    p12 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p14 = prom<V +>{
      colMeans = ldf colMeans;
      p13 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r103 = dyn colMeans[, `na.rm`](p13, TRUE);
      return r103;
    };
    r105 = dyn sweep[, , , `check.margin`](p12, 2.0, p14, FALSE);
    check L135() else D47();
  L137():
    p15 = prom<V +>{
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      return nser5;
    };
    p16 = prom<V +>{
      nser6 = ld nser;
      nser7 = force? nser6;
      checkMissing(nser7);
      return nser7;
    };
    r109 = dyn matrix(1.0, p15, p16);
    check L138() else D49();
  D47():
    deopt 168 [r105];
  D49():
    deopt 177 [r109];
  L135():
    st x = r105;
    goto L34();
  L138():
    st lag = r109;
    l6 = ld lag;
    c25 = `is.object`(l6);
    if c25 then L139() else L140(-1.0, l6);
  L35(dx5):
    st lag = dx5;
    sym15 = ldf `.Call`;
    base15 = ldf `.Call` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L144() else L145();
  L139():
    dr4 = tryDispatchBuiltin.0("[<-", l6, -1.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L141() else L140(-1.0, dr4);
  L140(r111, l8):
    lower_tri = ldf `lower.tri`;
    check L142() else D50();
  D50():
    deopt 183 [r111, l8, -1.0];
  L36(r118):
    st acf = r118;
    outer = ldf outer;
    check L150() else D56();
  L141():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx4);
  L142():
    p17 = prom<V +>{
      lag = ld lag;
      lag1 = force? lag;
      checkMissing(lag1);
      return lag1;
    };
    r115 = dyn lower_tri(p17);
    check L143() else D51();
  L144():
    C_acf = ld C_acf;
    check L146() else D52();
  L145():
    r117 = dyn base15(<sym C_acf>, <sym x>, <sym lag.max>, <lang `==`(type, "correlation")>);
    goto L36(r117);
  D51():
    deopt 185 [r111, l8, -1.0, r115];
  D52():
    deopt 189 [C_acf];
  D56():
    deopt 199 [];
  L143():
    ___ = ldf `[<-` in base;
    r116 = dyn ___(l8, -1.0, r115);
    goto L35(r116);
  L146():
    C_acf1 = force? C_acf;
    checkMissing(C_acf1);
    x17 = ld x;
    check L147() else D53();
  L150():
    p18 = prom<V +>{
      lag_max11 = ld `lag.max`;
      lag_max12 = force? lag_max11;
      checkMissing(lag_max12);
      r121 = `:`(0.0, lag_max12);
      return r121;
    };
    p19 = prom<V +>{
      lag2 = ld lag;
      lag3 = force? lag2;
      checkMissing(lag3);
      x_freq = ld `x.freq`;
      x_freq1 = force? x_freq;
      checkMissing(x_freq1);
      r123 = `/`(lag3, x_freq1);
      return r123;
    };
    r125 = dyn outer(p18, p19);
    check L151() else D57();
  D53():
    deopt 190 [C_acf1, x17];
  D57():
    deopt 202 [r125];
  L147():
    x18 = force? x17;
    checkMissing(x18);
    lag_max9 = ld `lag.max`;
    check L148() else D54();
  L151():
    st lag = r125;
    structure = ldf structure;
    check L152() else D58();
  D54():
    deopt 191 [C_acf1, x18, lag_max9];
  D58():
    deopt 205 [];
  L148():
    lag_max10 = force? lag_max9;
    checkMissing(lag_max10);
    type5 = ld type;
    check L149() else D55();
  L152():
    p21 = prom<V +>{
      sym16 = ldf list;
      base16 = ldf list in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r127):
      return r127;
    L1():
      acf = ld acf;
      acf1 = force? acf;
      checkMissing(acf1);
      type7 = ld type;
      type8 = force? type7;
      checkMissing(type8);
      sampleT6 = ld sampleT;
      sampleT7 = force? sampleT6;
      checkMissing(sampleT7);
      lag4 = ld lag;
      lag5 = force? lag4;
      checkMissing(lag5);
      series = ld series;
      series1 = force? series;
      checkMissing(series1);
      colnames = ldf colnames;
      p20 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r129 = dyn colnames(p20);
      list = ldf list in base;
      r130 = dyn list(acf1, type8, sampleT7, lag5, series1, r129);
      goto L0(r130);
    L2():
      r126 = dyn base16[acf, type, `n.used`, lag, series, snames](<sym acf>, <sym type>, <sym sampleT>, <sym lag>, <sym series>, <lang colnames(x)>);
      goto L0(r126);
    };
    r132 = dyn structure[, class](p21, "acf");
    check L153() else D59();
  D55():
    deopt 192 [C_acf1, x18, lag_max10, type5];
  D59():
    deopt 209 [r132];
  L149():
    type6 = force? type5;
    checkMissing(type6);
    r119 = `==`(type6, "correlation");
    vargs = dots[x18, lag_max10, r119];
    r120 = `.Call`(C_acf1, vargs, <missing>);
    goto L36(r120);
  L153():
    st `acf.out` = r132;
    plot1 = ld plot;
    check L154() else D60();
  D60():
    deopt 211 [plot1];
  L154():
    plot2 = force? plot1;
    checkMissing(plot2);
    c26 = `as.logical`(plot2);
    if c26 then L155() else L37();
  L37():
    acf_out4 = ld `acf.out`;
    check L163() else D65();
  L155():
    plot_acf = ldf `plot.acf`;
    check L156() else D61();
  D61():
    deopt 214 [];
  D65():
    deopt 224 [acf_out4];
  L156():
    p22 = prom<V +>{
      acf_out = ld `acf.out`;
      acf_out1 = force? acf_out;
      checkMissing(acf_out1);
      return acf_out1;
    };
    ddd1 = ld `...`;
    r134 = dyn plot_acf[, `...`](p22, ddd1);
    check L157() else D62();
  L163():
    acf_out5 = force? acf_out4;
    checkMissing(acf_out5);
    popenv;
    return acf_out5;
  D62():
    deopt 217 [r134];
  L157():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L158() else L159();
  L38(r136):
    popenv;
    return r136;
  L158():
    acf_out2 = ld `acf.out`;
    check L160() else D63();
  L159():
    r135 = dyn base17(<sym acf.out>);
    goto L38(r135);
  D63():
    deopt 220 [acf_out2];
  L160():
    acf_out3 = force? acf_out2;
    checkMissing(acf_out3);
    invisible = ldf invisible in base;
    r137 = dyn invisible(acf_out3);
    check L161() else D64();
  D64():
    deopt 223 [r137];
  L161():
    goto L38(r137);
  }
}