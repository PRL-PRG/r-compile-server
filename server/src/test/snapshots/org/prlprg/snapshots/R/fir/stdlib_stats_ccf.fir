fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2201034064;
    st ccf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2201034064(x, y, `lag.max`, type, plot, `na.action`, `...`) {
  (reg x:*, reg y:*, reg lag_max:*, reg type:*, reg plot:*, reg na_action:*, reg ddd:dots) -+> V { var x:*, var y:*, var `lag.max`:*, reg lag_max_isMissing:L, reg lag_max_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p1:p(V +), var `...`:dots?, reg match_arg:cls, reg type1:*, reg type2:V, reg p2:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r9:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg y1:*, reg y2:V, reg is_matrix1:cls, reg r12:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r13:V, reg ts_intersect:cls, reg as_ts:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg as_ts1:cls, reg y3:*, reg y4:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg deparse:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg substitute:cls, reg r26:V, reg p7:p(V +), reg r28:V, reg c11:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r31:V, reg deparse1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg substitute1:cls, reg r34:V, reg p8:p(V +), reg r36:V, reg c12:L, reg r38:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r39:V, reg c13:cls, reg r40:V, reg l:*, reg colnames__:cls, reg r41:V, reg acf:cls, reg X:*, reg X1:V, reg p9:p(V +), reg lag_max1:*, reg lag_max2:V, reg p10:p(V +), reg type3:*, reg type4:V, reg p11:p(V +), reg na_action1:*, reg na_action2:V, reg p12:p(V +), reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg rev:cls, reg acf_out:*, reg acf_out1:V, reg c14:L, reg acf_out3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r49:V, reg c15:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r50:V, reg p13:p(V +), reg r52:V, reg acf_out4:*, reg acf_out5:V, reg c16:L, reg acf_out7:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r53:V, reg c17:L, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r54:V, reg c18:cls, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg rev1:cls, reg acf_out8:*, reg acf_out9:V, reg c19:L, reg acf_out11:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r58:V, reg c20:L, reg dx19:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg __4:cls, reg r59:V, reg p14:p(V +), reg r61:V, reg acf_out12:*, reg acf_out13:V, reg c21:L, reg acf_out15:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r62:V, reg c22:L, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg __5:cls, reg r63:V, reg c23:cls, reg r64:V, reg array:cls, reg y5:*, reg y6:V, reg p15:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg y7:*, reg y8:V, reg length:cls, reg r70:V, reg c24:cls, reg r71:V, reg p16:p(V +), reg r73:V, reg l1:*, reg c25:L, reg r75:V, reg l3:*, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg r78:V, reg array1:cls, reg lag:*, reg lag1:V, reg p17:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r80:V, reg r81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:V, reg y9:*, reg y10:V, reg length1:cls, reg r84:V, reg c26:cls, reg r85:V, reg p18:p(V +), reg r87:V, reg l4:*, reg c27:L, reg r89:V, reg l6:*, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r92:V, reg paste:cls, reg acf_out16:*, reg acf_out17:V, reg c28:L, reg acf_out19:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg r93:V, reg p19:p(V +), reg r95:V, reg l7:*, reg c29:L, reg r97:V, reg l9:*, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r100:V, reg plot1:*, reg plot2:V, reg c30:L, reg plot3:cls, reg acf_out20:*, reg acf_out21:V, reg p20:p(V +), reg ddd1:dots?, reg r102:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r103:V, reg r104:V, reg acf_out22:*, reg acf_out23:V, reg invisible:cls, reg r105:V, reg acf_out24:*, reg acf_out25:V |
    mkenv;
    st x = x;
    st y = y;
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
      r2 = dyn c("correlation", "covariance");
      goto L0(r2);
    L2():
      r = dyn base("correlation", "covariance");
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
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p2 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r6 = dyn match_arg(p2);
    check L21() else D1();
  D1():
    deopt 3 [r6];
  L21():
    st type = r6;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L6(r8):
    c1 = `as.logical`(r8);
    if c1 then L7(c1) else L26();
  L22():
    x1 = ld x;
    check L24() else D2();
  L23():
    r7 = dyn base1(<sym x>);
    goto L6(r7);
  D2():
    deopt 7 [x1];
  L7(c2):
    c10 = `as.logical`(c2);
    if c10 then L32() else L9();
  L24():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r9 = dyn is_matrix(x2);
    check L25() else D3();
  L26():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  D3():
    deopt 10 [r9];
  L8(c6, r11):
    c7 = `as.logical`(r11);
    c8 = `||`(c6, c7);
    goto L7(c8);
  L9():
    goto L10();
  L10():
    ts_intersect = ldf `ts.intersect`;
    check L36() else D8();
  L25():
    goto L6(r9);
  L27():
    y1 = ld y;
    check L29() else D4();
  L28():
    r10 = dyn base2(<sym y>);
    goto L8(c1, r10);
  L32():
    stop = ldf stop;
    check L33() else D6();
  D4():
    deopt 13 [c1, y1];
  D6():
    deopt 19 [];
  D8():
    deopt 25 [];
  L29():
    y2 = force? y1;
    checkMissing(y2);
    is_matrix1 = ldf `is.matrix` in base;
    r12 = dyn is_matrix1(y2);
    check L30() else D5();
  L33():
    r13 = dyn stop("univariate time series only");
    check L34() else D7();
  L36():
    p4 = prom<V +>{
      as_ts = ldf `as.ts`;
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r16 = dyn as_ts(p3);
      return r16;
    };
    p6 = prom<V +>{
      as_ts1 = ldf `as.ts`;
      p5 = prom<V +>{
        y3 = ld y;
        y4 = force? y3;
        checkMissing(y4);
        return y4;
      };
      r19 = dyn as_ts1(p5);
      return r19;
    };
    r21 = dyn ts_intersect(p4, p6);
    check L37() else D9();
  D5():
    deopt 16 [c1, r12];
  D7():
    deopt 21 [r13];
  D9():
    deopt 28 [r21];
  L30():
    goto L8(c1, r12);
  L34():
    goto L10();
  L37():
    st X = r21;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L11(r23):
    l = ld X;
    colnames__ = ldf `colnames<-`;
    check L51() else D15();
  L38():
    deparse = ldf deparse;
    check L40() else D10();
  L39():
    r22 = dyn base3(<lang `[`(deparse(substitute(x)), 1)>, <lang `[`(deparse(substitute(y)), 1)>);
    goto L11(r22);
  D10():
    deopt 33 [];
  D15():
    deopt 49 [r23, l, r23];
  L40():
    p7 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      substitute = ldf substitute in base;
      r26 = dyn substitute(<sym x>);
      goto L0(r26);
    L2():
      r24 = dyn base4(<sym x>);
      goto L0(r24);
    };
    r28 = dyn deparse(p7);
    check L41() else D11();
  L51():
    r41 = dyn colnames__(l, NULL, r23);
    check L52() else D16();
  D11():
    deopt 35 [r28];
  D16():
    deopt 51 [r23, r41];
  L41():
    c11 = `is.object`(r28);
    if c11 then L42() else L43(r28);
  L52():
    st X = r41;
    acf = ldf acf;
    check L53() else D17();
  D17():
    deopt 54 [];
  L12(dx1):
    deparse1 = ldf deparse;
    check L45() else D12();
  L42():
    dr = tryDispatchBuiltin.1("[", r28);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(dr);
  L43(r30):
    __ = ldf `[` in base;
    r31 = dyn __(r30, 1);
    goto L12(r31);
  L53():
    p9 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    p10 = prom<V +>{
      lag_max1 = ld `lag.max`;
      lag_max2 = force? lag_max1;
      checkMissing(lag_max2);
      return lag_max2;
    };
    p11 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p12 = prom<V +>{
      na_action1 = ld `na.action`;
      na_action2 = force? na_action1;
      checkMissing(na_action2);
      return na_action2;
    };
    r46 = dyn acf[, `lag.max`, plot, type, `na.action`](p9, p10, FALSE, p11, p12);
    check L54() else D18();
  D12():
    deopt 40 [];
  D18():
    deopt 64 [r46];
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L45():
    p8 = prom<V +>{
      sym5 = ldf substitute;
      base5 = ldf substitute in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      substitute1 = ldf substitute in base;
      r34 = dyn substitute1(<sym y>);
      goto L0(r34);
    L2():
      r32 = dyn base5(<sym y>);
      goto L0(r32);
    };
    r36 = dyn deparse1(p8);
    check L46() else D13();
  L54():
    st `acf.out` = r46;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  D13():
    deopt 42 [r36];
  L14(r48):
    st lag = r48;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L46():
    c12 = `is.object`(r36);
    if c12 then L47() else L48(r36);
  L55():
    rev = ldf rev;
    check L57() else D19();
  L56():
    r47 = dyn base6(<lang rev(`[`(`$`(acf.out, lag), `-`(1.0), 2.0, 1.0))>, <lang `[`(`$`(acf.out, lag), , 1.0, 2.0)>);
    goto L14(r47);
  D19():
    deopt 69 [];
  L13(dx3):
    c13 = ldf c in base;
    r40 = dyn c13(dx1, dx3);
    check L50() else D14();
  L16(r57):
    st y = r57;
    array = ldf array;
    check L81() else D27();
  L47():
    dr2 = tryDispatchBuiltin.1("[", r36);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(dr2);
  L48(r38):
    __1 = ldf `[` in base;
    r39 = dyn __1(r38, 1);
    goto L13(r39);
  L57():
    p13 = prom<V +>{
      acf_out = ld `acf.out`;
      acf_out1 = force? acf_out;
      checkMissing(acf_out1);
      c14 = `is.object`(acf_out1);
      if c14 then L2() else L3(acf_out1);
    L1(dx5):
      c15 = `is.object`(dx5);
      if c15 then L5() else L6(dx5);
    L2():
      dr4 = tryDispatchBuiltin.1("$", acf_out1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(acf_out3):
      r49 = `$`(acf_out3, <sym lag>);
      goto L1(r49);
    L0(dx9):
      return dx9;
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L5():
      dr6 = tryDispatchBuiltin.1("[", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx7):
      __2 = ldf `[` in base;
      r50 = dyn __2(dx7, -1.0, 2.0, 1.0);
      goto L0(r50);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r52 = dyn rev(p13);
    check L58() else D20();
  L68():
    rev1 = ldf rev;
    check L70() else D23();
  L69():
    r56 = dyn base7(<lang rev(`[`(`$`(acf.out, acf), `-`(1.0), 2.0, 1.0))>, <lang `[`(`$`(acf.out, acf), , 1.0, 2.0)>);
    goto L16(r56);
  D14():
    deopt 47 [r40];
  D20():
    deopt 71 [r52];
  D23():
    deopt 86 [];
  D27():
    deopt 101 [];
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L50():
    goto L11(r40);
  L58():
    acf_out4 = ld `acf.out`;
    check L59() else D21();
  L70():
    p14 = prom<V +>{
      acf_out8 = ld `acf.out`;
      acf_out9 = force? acf_out8;
      checkMissing(acf_out9);
      c19 = `is.object`(acf_out9);
      if c19 then L2() else L3(acf_out9);
    L1(dx17):
      c20 = `is.object`(dx17);
      if c20 then L5() else L6(dx17);
    L2():
      dr12 = tryDispatchBuiltin.1("$", acf_out9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(acf_out11):
      r58 = `$`(acf_out11, <sym acf>);
      goto L1(r58);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx16);
    L5():
      dr14 = tryDispatchBuiltin.1("[", dx17);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx19):
      __4 = ldf `[` in base;
      r59 = dyn __4(dx19, -1.0, 2.0, 1.0);
      goto L0(r59);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx20);
    };
    r61 = dyn rev1(p14);
    check L71() else D24();
  L81():
    p15 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    p16 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r67):
      return r67;
    L2():
      sym9 = ldf length;
      base9 = ldf length in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r66 = dyn base8(<lang length(y)>, 1, 1);
      goto L0(r66);
    L1(r69):
      c24 = ldf c in base;
      r71 = dyn c24(r69, 1, 1);
      goto L0(r71);
    L4():
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      length = ldf length in base;
      r70 = dyn length(y8);
      goto L1(r70);
    L5():
      r68 = dyn base9(<sym y>);
      goto L1(r68);
    };
    r73 = dyn array[, dim](p15, p16);
    check L82() else D28();
  D21():
    deopt 72 [acf_out4];
  D24():
    deopt 88 [r61];
  D28():
    deopt 105 [r73];
  L59():
    acf_out5 = force? acf_out4;
    checkMissing(acf_out5);
    c16 = `is.object`(acf_out5);
    if c16 then L61() else L62(acf_out5);
  L71():
    acf_out12 = ld `acf.out`;
    check L72() else D25();
  L82():
    l1 = ld `acf.out`;
    c25 = `is.object`(l1);
    if c25 then L84() else L85(r73, l1);
  D25():
    deopt 89 [acf_out12];
  L60(dx11):
    c17 = `is.object`(dx11);
    if c17 then L64() else L65();
  L61():
    dr8 = tryDispatchBuiltin.1("$", acf_out5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L63() else L62(dr8);
  L62(acf_out7):
    r53 = `$`(acf_out7, <sym lag>);
    goto L60(r53);
  L72():
    acf_out13 = force? acf_out12;
    checkMissing(acf_out13);
    c21 = `is.object`(acf_out13);
    if c21 then L74() else L75(acf_out13);
  L83(dx29):
    st `acf.out` = dx29;
    array1 = ldf array;
    check L87() else D29();
  L84():
    dr20 = tryDispatchBuiltin.0("$<-", l1, r73);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L86() else L85(r73, dr20);
  L85(r75, l3):
    r78 = `$<-`(l3, <sym acf>, r73);
    goto L83(r78);
  D29():
    deopt 110 [];
  L15(dx15):
    c18 = ldf c in base;
    r55 = dyn c18(r52, dx15);
    check L67() else D22();
  L63():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L60(dx10);
  L64():
    dr10 = tryDispatchBuiltin.1("[", dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L66() else L65();
  L65():
    __3 = ldf `[` in base;
    r54 = dyn __3(dx11, <missing>, 1.0, 2.0);
    goto L15(r54);
  L73(dx23):
    c22 = `is.object`(dx23);
    if c22 then L77() else L78();
  L74():
    dr16 = tryDispatchBuiltin.1("$", acf_out13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L76() else L75(dr16);
  L75(acf_out15):
    r62 = `$`(acf_out15, <sym acf>);
    goto L73(r62);
  L86():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L83(dx28);
  L87():
    p17 = prom<V +>{
      lag = ld lag;
      lag1 = force? lag;
      checkMissing(lag1);
      return lag1;
    };
    p18 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r81):
      return r81;
    L2():
      sym11 = ldf length;
      base11 = ldf length in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r80 = dyn base10(<lang length(y)>, 1, 1);
      goto L0(r80);
    L1(r83):
      c26 = ldf c in base;
      r85 = dyn c26(r83, 1, 1);
      goto L0(r85);
    L4():
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      length1 = ldf length in base;
      r84 = dyn length1(y10);
      goto L1(r84);
    L5():
      r82 = dyn base11(<sym y>);
      goto L1(r82);
    };
    r87 = dyn array1[, dim](p17, p18);
    check L88() else D30();
  D22():
    deopt 81 [r55];
  D30():
    deopt 114 [r87];
  L17(dx27):
    c23 = ldf c in base;
    r64 = dyn c23(r61, dx27);
    check L80() else D26();
  L66():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx14);
  L67():
    goto L14(r55);
  L76():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L73(dx22);
  L77():
    dr18 = tryDispatchBuiltin.1("[", dx23);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L79() else L78();
  L78():
    __5 = ldf `[` in base;
    r63 = dyn __5(dx23, <missing>, 1.0, 2.0);
    goto L17(r63);
  L88():
    l4 = ld `acf.out`;
    c27 = `is.object`(l4);
    if c27 then L90() else L91(r87, l4);
  D26():
    deopt 98 [r64];
  L79():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L17(dx26);
  L80():
    goto L16(r64);
  L89(dx31):
    st `acf.out` = dx31;
    paste = ldf paste;
    check L93() else D31();
  L90():
    dr22 = tryDispatchBuiltin.0("$<-", l4, r87);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L92() else L91(r87, dr22);
  L91(r89, l6):
    r92 = `$<-`(l6, <sym lag>, r87);
    goto L89(r92);
  D31():
    deopt 119 [];
  L92():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L89(dx30);
  L93():
    p19 = prom<V +>{
      acf_out16 = ld `acf.out`;
      acf_out17 = force? acf_out16;
      checkMissing(acf_out17);
      c28 = `is.object`(acf_out17);
      if c28 then L1() else L2(acf_out17);
    L0(dx33):
      return dx33;
    L1():
      dr24 = tryDispatchBuiltin.1("$", acf_out17);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(acf_out19):
      r93 = `$`(acf_out19, <sym snames>);
      goto L0(r93);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx32);
    };
    r95 = dyn paste[, collapse](p19, " & ");
    check L94() else D32();
  D32():
    deopt 123 [r95];
  L94():
    l7 = ld `acf.out`;
    c29 = `is.object`(l7);
    if c29 then L96() else L97(r95, l7);
  L95(dx35):
    st `acf.out` = dx35;
    plot1 = ld plot;
    check L99() else D33();
  L96():
    dr26 = tryDispatchBuiltin.0("$<-", l7, r95);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L98() else L97(r95, dr26);
  L97(r97, l9):
    r100 = `$<-`(l9, <sym snames>, r95);
    goto L95(r100);
  D33():
    deopt 127 [plot1];
  L98():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L95(dx34);
  L99():
    plot2 = force? plot1;
    checkMissing(plot2);
    c30 = `as.logical`(plot2);
    if c30 then L100() else L18();
  L18():
    acf_out24 = ld `acf.out`;
    check L108() else D38();
  L100():
    plot3 = ldf plot;
    check L101() else D34();
  D34():
    deopt 130 [];
  D38():
    deopt 140 [acf_out24];
  L101():
    p20 = prom<V +>{
      acf_out20 = ld `acf.out`;
      acf_out21 = force? acf_out20;
      checkMissing(acf_out21);
      return acf_out21;
    };
    ddd1 = ld `...`;
    r102 = dyn plot3[, `...`](p20, ddd1);
    check L102() else D35();
  L108():
    acf_out25 = force? acf_out24;
    checkMissing(acf_out25);
    popenv;
    return acf_out25;
  D35():
    deopt 133 [r102];
  L102():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L103() else L104();
  L19(r104):
    popenv;
    return r104;
  L103():
    acf_out22 = ld `acf.out`;
    check L105() else D36();
  L104():
    r103 = dyn base12(<sym acf.out>);
    goto L19(r103);
  D36():
    deopt 136 [acf_out22];
  L105():
    acf_out23 = force? acf_out22;
    checkMissing(acf_out23);
    invisible = ldf invisible in base;
    r105 = dyn invisible(acf_out23);
    check L106() else D37();
  D37():
    deopt 139 [r105];
  L106():
    goto L19(r105);
  }
}