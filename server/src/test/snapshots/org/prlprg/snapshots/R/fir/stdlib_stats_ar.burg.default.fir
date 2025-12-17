fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2484640021;
    st `ar.burg.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2484640021(x, aic, `order.max`, `na.action`, demean, series, `var.method`, `...`) {
  (reg x:*, reg aic:*, reg order_max:*, reg na_action:*, reg demean:*, reg series:*, reg var_method:*, reg ddd:dots) -+> V { var x:*, var aic:*, reg aic_isMissing:L, reg aic_orDefault:*, var `order.max`:*, reg order_max_isMissing:L, reg order_max_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var series:*, reg series_isMissing:L, reg series_orDefault:*, var `var.method`:*, reg var_method_isMissing:L, reg var_method_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg series1:*, reg series2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r10:V, reg c2:L, reg tsp:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r12:V, reg na_action1:cls, reg as_ts:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x7:*, reg x8:V, reg anyNA:cls, reg r20:V, reg c3:L, reg stop:cls, reg r21:V, reg ists:*, reg ists1:V, reg c4:L, reg tsp1:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r24:V, reg frequency:cls, reg x11:*, reg x12:V, reg p7:p(V +), reg r27:V, reg as_vector:cls, reg x13:*, reg x14:V, reg p8:p(V +), reg r29:V, reg demean1:*, reg demean2:V, reg c5:L, reg mean:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r31:V, reg x17:*, reg x18:V, reg x_mean:*, reg x_mean1:V, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg x19:*, reg x20:V, reg length:cls, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg order_max1:*, reg order_max2:V, reg c6:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg n_used:*, reg n_used1:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:R, reg r48:V, reg n_used2:*, reg n_used3:V, reg log10:cls, reg r49:V, reg r50:V, reg r51:V, reg min:cls, reg r52:V, reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg order_max3:*, reg order_max4:V, reg r55:V, reg order_max5:*, reg order_max6:V, reg r56:V, reg c8:L, reg stop1:cls, reg r57:V, reg order_max7:*, reg order_max8:V, reg n_used4:*, reg n_used5:V, reg r59:V, reg c9:L, reg stop2:cls, reg r60:V, reg numeric:cls, reg order_max9:*, reg order_max10:V, reg r61:V, reg p10:p(V +), reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg C_Burg:*, reg C_Burg1:V, reg x21:*, reg x22:V, reg order_max11:*, reg order_max12:V, reg vargs:dots, reg r66:V, reg matrix:cls, reg z:*, reg z1:V, reg c10:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r67:V, reg p11:p(V +), reg order_max13:*, reg order_max14:V, reg p12:p(V +), reg order_max15:*, reg order_max16:V, reg p13:p(V +), reg r71:V, reg array:cls, reg diag:cls, reg coefs:*, reg coefs1:V, reg p14:p(V +), reg r73:V, reg p15:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r75:V, reg r76:V, reg order_max17:*, reg order_max18:V, reg c11:cls, reg r77:V, reg p16:p(V +), reg r79:V, reg var_method1:*, reg var_method2:V, reg r80:V, reg c12:L, reg z4:*, reg z5:V, reg c13:L, reg z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r81:V, reg dx4:V, reg z8:*, reg z9:V, reg c14:L, reg z11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg __2:cls, reg r82:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r83:V, reg r84:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg var_pred:*, reg var_pred1:V, reg is_nan:cls, reg r87:V, reg any:cls, reg r88:V, reg c15:L, reg stop3:cls, reg r89:V, reg n_used6:*, reg n_used7:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg n_used10:V, reg r92:V, reg var_pred2:*, reg var_pred3:V, reg r93:V, reg r94:V, reg order_max19:*, reg order_max20:V, reg r95:V, reg r96:V, reg r97:V, reg demean3:*, reg demean4:V, reg r98:V, reg r99:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r100:V, reg r101:V, reg aic1:*, reg aic2:V, reg min1:cls, reg r102:V, reg setNames:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r103:V, reg r104:V, reg maic:*, reg maic1:V, reg is_finite:cls, reg r105:V, reg c16:L, reg xaic:*, reg xaic1:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r106:V, reg xaic4:V, reg r107:V, reg xaic5:*, reg xaic6:V, reg min2:cls, reg r108:V, reg r109:V, reg ifelse:cls, reg xaic7:*, reg xaic8:V, reg maic2:*, reg maic3:V, reg r110:V, reg p17:p(V +), reg r112:V, reg p18:p(V +), reg order_max21:*, reg order_max22:V, reg r114:V, reg p19:p(V +), reg r116:V, reg aic3:*, reg aic4:V, reg c17:L, reg order_max23:*, reg order_max24:V, reg r117:V, reg c18:L, reg r119:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg xaic9:*, reg xaic10:V, reg r120:V, reg __3:cls, reg r121:V, reg dx8:V, reg order_max25:*, reg order_max26:V, reg order:*, reg order1:V, reg c19:L, reg coefs2:*, reg coefs3:V, reg c20:L, reg coefs5:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg order2:*, reg order3:V, reg order4:*, reg order5:V, reg r122:V, reg __4:cls, reg r123:V, reg dx11:V, reg numeric1:cls, reg r124:V, reg var_pred4:*, reg var_pred5:V, reg c21:L, reg var_pred7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg order6:*, reg order7:V, reg r125:V, reg __5:cls, reg r126:V, reg order8:*, reg order9:V, reg c22:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r127:V, reg r128:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r129:V, reg r130:V, reg rep:cls, reg r131:V, reg embed:cls, reg x23:*, reg x24:V, reg p20:p(V +), reg order10:*, reg order11:V, reg r133:V, reg p21:p(V +), reg r135:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r136:V, reg r137:V, reg ar:*, reg ar1:V, reg r138:V, reg c23:cls, reg r139:V, reg ___:cls, reg r140:V, reg c24:cls, reg r141:V, reg r142:V, reg x25:*, reg x26:V, reg ists2:*, reg ists3:V, reg c25:L, reg xtsp:*, reg xtsp1:V, reg l:*, reg attr__:cls, reg r143:V, reg l1:*, reg attr__1:cls, reg r144:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r146:V, reg r147:V, reg order12:*, reg order13:V, reg ar2:*, reg ar3:V, reg var_pred8:*, reg var_pred9:V, reg x_mean2:*, reg x_mean3:V, reg xaic11:*, reg xaic12:V, reg n_used11:*, reg n_used12:V, reg n_used13:*, reg n_used14:V, reg order_max27:*, reg order_max28:V, reg partialacf:*, reg partialacf1:V, reg resid:*, reg resid1:V, reg ifelse1:cls, reg var_method3:*, reg var_method4:V, reg r148:V, reg p22:p(V +), reg r150:V, reg series3:*, reg series4:V, reg xfreq:*, reg xfreq1:V, reg match_call:cls, reg r151:V, reg list:cls, reg r152:V, reg order14:*, reg order15:V, reg c26:L, reg acf:cls, reg x27:*, reg x28:V, reg p23:p(V +), reg order16:*, reg order17:V, reg p24:p(V +), reg r155:V, reg c27:L, reg r157:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r158:V, reg solve:cls, reg toeplitz:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r159:V, reg r160:V, reg xacf:*, reg xacf1:V, reg drop:cls, reg r161:V, reg c28:L, reg r163:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r166:V, reg r167:V, reg r168:V, reg order18:*, reg order19:V, reg r169:I, reg __6:cls, reg r170:V, reg p25:p(V +), reg r172:V, reg p26:p(V +), reg r174:V, reg var_pred10:*, reg var_pred11:V, reg r175:V, reg n_used15:*, reg n_used16:V, reg r176:V, reg l2:*, reg c29:L, reg r178:V, reg l4:*, reg dr16:V, reg dc8:L, reg dx18:V, reg r180:V, reg dx19:V, reg r181:V, reg l5:*, reg class__:cls, reg r183:V, reg res:*, reg res1:V |
    mkenv;
    st x = x;
    aic_isMissing = missing.0(aic);
    if aic_isMissing then L0(TRUE) else L0(aic);
  L0(aic_orDefault):
    st aic = aic_orDefault;
    order_max_isMissing = missing.0(order_max);
    if order_max_isMissing then L1(NULL) else L1(order_max);
  L1(order_max_orDefault):
    st `order.max` = order_max_orDefault;
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
    demean_isMissing = missing.0(demean);
    if demean_isMissing then L4(TRUE) else L4(demean);
  L4(demean_orDefault):
    st demean = demean_orDefault;
    series_isMissing = missing.0(series);
    if series_isMissing then L5(NULL) else L5(series);
  L5(series_orDefault):
    st series = series_orDefault;
    var_method_isMissing = missing.0(var_method);
    if var_method_isMissing then L6(1) else L6(var_method);
  L6(var_method_orDefault):
    st `var.method` = var_method_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L56() else L57();
  L7(r2):
    c1 = `as.logical`(r2);
    if c1 then L59() else L8();
  L56():
    series1 = ld series;
    check L58() else D0();
  L57():
    r1 = dyn base(<sym series>);
    goto L7(r1);
  D0():
    deopt 1 [series1];
  L8():
    goto L9();
  L9():
    is_ts = ldf `is.ts`;
    check L63() else D3();
  L58():
    series2 = force? series1;
    checkMissing(series2);
    c = `==`(series2, NULL);
    goto L7(c);
  L59():
    deparse1 = ldf deparse1;
    check L60() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L60():
    p1 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      substitute = ldf substitute in base;
      r5 = dyn substitute(<sym x>);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym x>);
      goto L0(r3);
    };
    r7 = dyn deparse1(p1);
    check L61() else D2();
  L63():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn is_ts(p2);
    check L64() else D4();
  D2():
    deopt 7 [r7];
  D4():
    deopt 14 [r10];
  L61():
    st series = r7;
    goto L9();
  L64():
    st ists = r10;
    c2 = `as.logical`(r10);
    if c2 then L65() else L10();
  L10():
    goto L11();
  L11():
    na_action1 = ldf `na.action`;
    check L69() else D7();
  L65():
    tsp = ldf tsp;
    check L66() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 24 [];
  L66():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn tsp(p3);
    check L67() else D6();
  L69():
    p5 = prom<V +>{
      as_ts = ldf `as.ts`;
      p4 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r15 = dyn as_ts(p4);
      return r15;
    };
    r17 = dyn na_action1(p5);
    check L70() else D8();
  D6():
    deopt 19 [r12];
  D8():
    deopt 26 [r17];
  L67():
    st xtsp = r12;
    goto L11();
  L70():
    st x = r17;
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L71() else L72();
  L12(r19):
    c3 = `as.logical`(r19);
    if c3 then L75() else L13();
  L71():
    x7 = ld x;
    check L73() else D9();
  L72():
    r18 = dyn base2(<sym x>);
    goto L12(r18);
  D9():
    deopt 30 [x7];
  L13():
    goto L14();
  L14():
    ists = ld ists;
    check L79() else D13();
  L73():
    x8 = force? x7;
    checkMissing(x8);
    anyNA = ldf anyNA in base;
    r20 = dyn anyNA(x8);
    check L74() else D10();
  L75():
    stop = ldf stop;
    check L76() else D11();
  D10():
    deopt 33 [r20];
  D11():
    deopt 35 [];
  D13():
    deopt 40 [ists];
  L74():
    goto L12(r20);
  L76():
    r21 = dyn stop("NAs in 'x'");
    check L77() else D12();
  L79():
    ists1 = force? ists;
    checkMissing(ists1);
    c4 = `as.logical`(ists1);
    if c4 then L80() else L15();
  D12():
    deopt 37 [r21];
  L15():
    goto L16();
  L16():
    frequency = ldf frequency;
    check L84() else D16();
  L77():
    goto L14();
  L80():
    tsp1 = ldf tsp;
    check L81() else D14();
  D14():
    deopt 43 [];
  D16():
    deopt 50 [];
  L81():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r24 = dyn tsp1(p6);
    check L82() else D15();
  L84():
    p7 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r27 = dyn frequency(p7);
    check L85() else D17();
  D15():
    deopt 45 [r24];
  D17():
    deopt 52 [r27];
  L82():
    st xtsp = r24;
    goto L16();
  L85():
    st xfreq = r27;
    as_vector = ldf `as.vector`;
    check L86() else D18();
  D18():
    deopt 55 [];
  L86():
    p8 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r29 = dyn as_vector(p8);
    check L87() else D19();
  D19():
    deopt 57 [r29];
  L87():
    st x = r29;
    demean1 = ld demean;
    check L88() else D20();
  D20():
    deopt 59 [demean1];
  L88():
    demean2 = force? demean1;
    checkMissing(demean2);
    c5 = `as.logical`(demean2);
    if c5 then L89() else L17();
  L17():
    st `x.mean` = 0.0;
    goto L18();
  L18():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L95() else L96();
  L89():
    mean = ldf mean;
    check L90() else D21();
  D21():
    deopt 62 [];
  L19(r35):
    st `n.used` = r35;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L99() else L100();
  L90():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r31 = dyn mean(p9);
    check L91() else D22();
  L95():
    x19 = ld x;
    check L97() else D25();
  L96():
    r34 = dyn base3(<sym x>);
    goto L19(r34);
  D22():
    deopt 64 [r31];
  D25():
    deopt 76 [x19];
  L20(r38):
    c7 = `as.logical`(r38);
    if c7 then L102() else L21();
  L91():
    st `x.mean` = r31;
    x17 = ld x;
    check L92() else D23();
  L97():
    x20 = force? x19;
    checkMissing(x20);
    length = ldf length in base;
    r36 = dyn length(x20);
    check L98() else D26();
  L99():
    order_max1 = ld `order.max`;
    check L101() else D27();
  L100():
    r37 = dyn base4(<sym order.max>);
    goto L20(r37);
  D23():
    deopt 66 [x17];
  D26():
    deopt 79 [r36];
  D27():
    deopt 82 [order_max1];
  L21():
    sym8 = ldf floor;
    base8 = ldf floor in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L114() else L115();
  L25(r53):
    st `order.max` = r53;
    order_max5 = ld `order.max`;
    check L117() else D33();
  L92():
    x18 = force? x17;
    checkMissing(x18);
    x_mean = ld `x.mean`;
    check L93() else D24();
  L98():
    goto L19(r36);
  L101():
    order_max2 = force? order_max1;
    checkMissing(order_max2);
    c6 = `==`(order_max2, NULL);
    goto L20(c6);
  L102():
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L103() else L104();
  D24():
    deopt 67 [x18, x_mean];
  D33():
    deopt 108 [order_max5];
  L22(r40):
    goto L25(r40);
  L93():
    x_mean1 = force? x_mean;
    checkMissing(x_mean1);
    r32 = `-`(x18, x_mean1);
    st x = r32;
    goto L18();
  L103():
    n_used = ld `n.used`;
    check L105() else D28();
  L104():
    r39 = dyn base5(<lang `-`(n.used, 1)>, <lang floor(`*`(10.0, log10(n.used)))>);
    goto L22(r39);
  L114():
    order_max3 = ld `order.max`;
    check L116() else D32();
  L115():
    r54 = dyn base8(<sym order.max>);
    goto L25(r54);
  L117():
    order_max6 = force? order_max5;
    checkMissing(order_max6);
    r56 = `<`(order_max6, 1);
    c8 = `as.logical`(r56);
    if c8 then L118() else L26();
  D28():
    deopt 87 [n_used];
  D32():
    deopt 104 [order_max3];
  L26():
    order_max7 = ld `order.max`;
    check L122() else D36();
  L27():
    numeric = ldf numeric;
    check L128() else D40();
  L105():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    r41 = `-`(n_used1, 1);
    sym6 = ldf floor;
    base6 = ldf floor in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L106() else L107();
  L116():
    order_max4 = force? order_max3;
    checkMissing(order_max4);
    r55 = floor(order_max4);
    goto L25(r55);
  L118():
    stop1 = ldf stop;
    check L119() else D34();
  D34():
    deopt 113 [];
  D36():
    deopt 116 [order_max7];
  D40():
    deopt 127 [];
  L23(r43):
    min = ldf min in base;
    r52 = dyn min(r41, r43);
    check L112() else D31();
  L106():
    sym7 = ldf log10;
    base7 = ldf log10 in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  L107():
    r42 = dyn base6(<lang `*`(10.0, log10(n.used))>);
    goto L23(r42);
  L119():
    r57 = dyn stop1("'order.max' must be >= 1");
    check L120() else D35();
  L122():
    order_max8 = force? order_max7;
    checkMissing(order_max8);
    n_used4 = ld `n.used`;
    check L123() else D37();
  L128():
    p10 = prom<V +>{
      order_max9 = ld `order.max`;
      order_max10 = force? order_max9;
      checkMissing(order_max10);
      r61 = `+`(order_max10, 1);
      return r61;
    };
    r63 = dyn numeric(p10);
    check L129() else D41();
  D31():
    deopt 102 [r52];
  D35():
    deopt 115 [r57];
  D37():
    deopt 117 [order_max8, n_used4];
  D41():
    deopt 129 [r63];
  L24(r47, r48):
    r50 = `*`(r47, r48);
    r51 = floor(r50);
    goto L23(r51);
  L108():
    n_used2 = ld `n.used`;
    check L110() else D29();
  L109():
    r46 = dyn base7(<sym n.used>);
    goto L24(10.0, r46);
  L112():
    goto L22(r52);
  L120():
    goto L27();
  L123():
    n_used5 = force? n_used4;
    checkMissing(n_used5);
    r59 = `>=`(order_max8, n_used5);
    c9 = `as.logical`(r59);
    if c9 then L124() else L28();
  L129():
    st xaic = r63;
    sym9 = ldf `.Call`;
    base9 = ldf `.Call` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L130() else L131();
  D29():
    deopt 95 [10.0, n_used2];
  L28():
    goto L27();
  L29(r65):
    st z = r65;
    matrix = ldf matrix;
    check L135() else D45();
  L110():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    log10 = ldf log10 in base;
    r49 = dyn log10(n_used3);
    check L111() else D30();
  L124():
    stop2 = ldf stop;
    check L125() else D38();
  L130():
    C_Burg = ld C_Burg;
    check L132() else D42();
  L131():
    r64 = dyn base9(<sym C_Burg>, <sym x>, <sym order.max>);
    goto L29(r64);
  D30():
    deopt 98 [10.0, r49];
  D38():
    deopt 121 [];
  D42():
    deopt 132 [C_Burg];
  D45():
    deopt 139 [];
  L111():
    goto L24(10.0, r49);
  L125():
    r60 = dyn stop2("'order.max' must be < 'n.used'");
    check L126() else D39();
  L132():
    C_Burg1 = force? C_Burg;
    checkMissing(C_Burg1);
    x21 = ld x;
    check L133() else D43();
  L135():
    p11 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c10 = `is.object`(z1);
      if c10 then L1() else L2(z1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", z1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(z3):
      __ = ldf `[[` in base;
      r67 = dyn __(z3, 1);
      goto L0(r67);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p12 = prom<V +>{
      order_max13 = ld `order.max`;
      order_max14 = force? order_max13;
      checkMissing(order_max14);
      return order_max14;
    };
    p13 = prom<V +>{
      order_max15 = ld `order.max`;
      order_max16 = force? order_max15;
      checkMissing(order_max16);
      return order_max16;
    };
    r71 = dyn matrix(p11, p12, p13);
    check L136() else D46();
  D39():
    deopt 123 [r60];
  D43():
    deopt 133 [C_Burg1, x21];
  D46():
    deopt 143 [r71];
  L126():
    goto L27();
  L133():
    x22 = force? x21;
    checkMissing(x22);
    order_max11 = ld `order.max`;
    check L134() else D44();
  L136():
    st coefs = r71;
    array = ldf array;
    check L137() else D47();
  D44():
    deopt 134 [C_Burg1, x22, order_max11];
  D47():
    deopt 146 [];
  L134():
    order_max12 = force? order_max11;
    checkMissing(order_max12);
    vargs = dots[x22, order_max12];
    r66 = `.Call`(C_Burg1, vargs, <missing>);
    goto L29(r66);
  L137():
    p15 = prom<V +>{
      diag = ldf diag;
      p14 = prom<V +>{
        coefs = ld coefs;
        coefs1 = force? coefs;
        checkMissing(coefs1);
        return coefs1;
      };
      r73 = dyn diag(p14);
      return r73;
    };
    p16 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r76):
      return r76;
    L1():
      order_max17 = ld `order.max`;
      order_max18 = force? order_max17;
      checkMissing(order_max18);
      c11 = ldf c in base;
      r77 = dyn c11(order_max18, 1, 1);
      goto L0(r77);
    L2():
      r75 = dyn base10(<sym order.max>, 1, 1);
      goto L0(r75);
    };
    r79 = dyn array[, dim](p15, p16);
    check L138() else D48();
  D48():
    deopt 150 [r79];
  L138():
    st partialacf = r79;
    var_method1 = ld `var.method`;
    check L139() else D49();
  D49():
    deopt 152 [var_method1];
  L139():
    var_method2 = force? var_method1;
    checkMissing(var_method2);
    r80 = `==`(var_method2, 1);
    c12 = `as.logical`(r80);
    if c12 then L140() else L30();
  L30():
    z8 = ld z;
    check L146() else D51();
  L32(dx4):
    st `var.pred` = dx4;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L150() else L151();
  L140():
    z4 = ld z;
    check L141() else D50();
  D50():
    deopt 156 [z4];
  D51():
    deopt 161 [z8];
  L33(r84):
    c15 = `as.logical`(r84);
    if c15 then L157() else L35();
  L141():
    z5 = force? z4;
    checkMissing(z5);
    c13 = `is.object`(z5);
    if c13 then L142() else L143(z5);
  L146():
    z9 = force? z8;
    checkMissing(z9);
    c14 = `is.object`(z9);
    if c14 then L147() else L148(z9);
  L150():
    sym12 = ldf `is.nan`;
    base12 = ldf `is.nan` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L152() else L153();
  L151():
    r83 = dyn base11(<lang is.nan(var.pred)>);
    goto L33(r83);
  L31(dx3):
    goto L32(dx3);
  L34(r86):
    any = ldf any in base;
    r88 = dyn any(r86);
    check L156() else D54();
  L35():
    goto L36();
  L36():
    n_used6 = ld `n.used`;
    check L161() else D57();
  L142():
    dr2 = tryDispatchBuiltin.1("[[", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L144() else L143(dr2);
  L143(z7):
    __1 = ldf `[[` in base;
    r81 = dyn __1(z7, 2);
    goto L31(r81);
  L147():
    dr4 = tryDispatchBuiltin.1("[[", z9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L149() else L148(dr4);
  L148(z11):
    __2 = ldf `[[` in base;
    r82 = dyn __2(z11, 3);
    goto L32(r82);
  L152():
    var_pred = ld `var.pred`;
    check L154() else D52();
  L153():
    r85 = dyn base12(<sym var.pred>);
    goto L34(r85);
  L157():
    stop3 = ldf stop;
    check L158() else D55();
  D52():
    deopt 171 [var_pred];
  D54():
    deopt 176 [r88];
  D55():
    deopt 178 [];
  D57():
    deopt 183 [n_used6];
  L144():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L149():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx5);
  L154():
    var_pred1 = force? var_pred;
    checkMissing(var_pred1);
    is_nan = ldf `is.nan` in base;
    r87 = dyn is_nan(var_pred1);
    check L155() else D53();
  L156():
    goto L33(r88);
  L158():
    r89 = dyn stop3("zero-variance series");
    check L159() else D56();
  L161():
    n_used7 = force? n_used6;
    checkMissing(n_used7);
    sym13 = ldf log;
    base13 = ldf log in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L162() else L163();
  D53():
    deopt 174 [r87];
  D56():
    deopt 180 [r89];
  L37(n_used10, r92):
    r94 = `*`(n_used10, r92);
    order_max19 = ld `order.max`;
    check L165() else D59();
  L155():
    goto L34(r87);
  L159():
    goto L36();
  L162():
    var_pred2 = ld `var.pred`;
    check L164() else D58();
  L163():
    r91 = dyn base13(<sym var.pred>);
    goto L37(n_used7, r91);
  D58():
    deopt 185 [n_used7, var_pred2];
  D59():
    deopt 190 [r94, 2.0, 0, order_max19];
  L164():
    var_pred3 = force? var_pred2;
    checkMissing(var_pred3);
    r93 = log(var_pred3, 2.718281828459045);
    goto L37(n_used7, r93);
  L165():
    order_max20 = force? order_max19;
    checkMissing(order_max20);
    r95 = `:`(0, order_max20);
    r96 = `*`(2.0, r95);
    r97 = `+`(r94, r96);
    demean3 = ld demean;
    check L166() else D60();
  D60():
    deopt 195 [r97, 2.0, demean3];
  L166():
    demean4 = force? demean3;
    checkMissing(demean4);
    r98 = `*`(2.0, demean4);
    r99 = `+`(r97, r98);
    st xaic = r99;
    sym14 = ldf min;
    base14 = ldf min in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L167() else L168();
  L38(r101):
    st maic = r101;
    setNames = ldf setNames;
    check L171() else D63();
  L167():
    aic1 = ld aic;
    check L169() else D61();
  L168():
    r100 = dyn base14(<sym aic>);
    goto L38(r100);
  D61():
    deopt 202 [aic1];
  D63():
    deopt 208 [];
  L169():
    aic2 = force? aic1;
    checkMissing(aic2);
    min1 = ldf min in base;
    r102 = dyn min1(aic2);
    check L170() else D62();
  L171():
    p18 = prom<V +>{
      sym15 = ldf `is.finite`;
      base15 = ldf `is.finite` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L3() else L4();
    L0(r104):
      c16 = `as.logical`(r104);
      if c16 then L5() else L1();
    L3():
      maic = ld maic;
      maic1 = force? maic;
      checkMissing(maic1);
      is_finite = ldf `is.finite` in base;
      r105 = dyn is_finite(maic1);
      goto L0(r105);
    L4():
      r103 = dyn base15(<sym maic>);
      goto L0(r103);
    L1():
      ifelse = ldf ifelse;
      p17 = prom<V +>{
        xaic7 = ld xaic;
        xaic8 = force? xaic7;
        checkMissing(xaic8);
        maic2 = ld maic;
        maic3 = force? maic2;
        checkMissing(maic3);
        r110 = `==`(xaic8, maic3);
        return r110;
      };
      r112 = dyn ifelse(p17, 0.0, +Infinity);
      return r112;
    L5():
      xaic = ld xaic;
      xaic1 = force? xaic;
      checkMissing(xaic1);
      sym16 = ldf min;
      base16 = ldf min in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L6() else L7();
    L2(xaic4, r107):
      r109 = `-`(xaic4, r107);
      return r109;
    L6():
      xaic5 = ld xaic;
      xaic6 = force? xaic5;
      checkMissing(xaic6);
      min2 = ldf min in base;
      r108 = dyn min2(xaic6);
      goto L2(xaic1, r108);
    L7():
      r106 = dyn base16(<sym xaic>);
      goto L2(xaic1, r106);
    };
    p19 = prom<V +>{
      order_max21 = ld `order.max`;
      order_max22 = force? order_max21;
      checkMissing(order_max22);
      r114 = `:`(0, order_max22);
      return r114;
    };
    r116 = dyn setNames(p18, p19);
    check L172() else D64();
  D62():
    deopt 205 [r102];
  D64():
    deopt 211 [r116];
  L170():
    goto L38(r102);
  L172():
    st xaic = r116;
    aic3 = ld aic;
    check L173() else D65();
  D65():
    deopt 213 [aic3];
  L173():
    aic4 = force? aic3;
    checkMissing(aic4);
    c17 = `as.logical`(aic4);
    if c17 then L174() else L39();
  L39():
    order_max25 = ld `order.max`;
    check L181() else D68();
  L41(dx8):
    st order = dx8;
    order = ld order;
    check L182() else D69();
  L174():
    order_max23 = ld `order.max`;
    check L175() else D66();
  D66():
    deopt 216 [0, order_max23];
  D68():
    deopt 224 [order_max25];
  D69():
    deopt 227 [order];
  L175():
    order_max24 = force? order_max23;
    checkMissing(order_max24);
    r117 = `:`(0, order_max24);
    c18 = `is.object`(r117);
    if c18 then L176() else L177(r117);
  L181():
    order_max26 = force? order_max25;
    checkMissing(order_max26);
    goto L41(order_max26);
  L182():
    order1 = force? order;
    checkMissing(order1);
    c19 = `as.logical`(order1);
    if c19 then L183() else L42();
  L40(dx7):
    goto L41(dx7);
  L42():
    numeric1 = ldf numeric;
    check L191() else D73();
  L44(dx11):
    st ar = dx11;
    var_pred4 = ld `var.pred`;
    check L193() else D75();
  L176():
    dr6 = tryDispatchBuiltin.1("[", r117);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L178() else L177(dr6);
  L177(r119):
    xaic9 = ld xaic;
    check L179() else D67();
  L183():
    coefs2 = ld coefs;
    check L184() else D70();
  D67():
    deopt 219 [r119, xaic9];
  D70():
    deopt 229 [coefs2];
  D73():
    deopt 238 [];
  D75():
    deopt 241 [var_pred4];
  L178():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L40(dx6);
  L179():
    xaic10 = force? xaic9;
    checkMissing(xaic10);
    r120 = `==`(xaic10, 0.0);
    __3 = ldf `[` in base;
    r121 = dyn __3(r119, r120);
    goto L40(r121);
  L184():
    coefs3 = force? coefs2;
    checkMissing(coefs3);
    c20 = `is.object`(coefs3);
    if c20 then L185() else L186(coefs3);
  L191():
    r124 = dyn numeric1();
    check L192() else D74();
  L193():
    var_pred5 = force? var_pred4;
    checkMissing(var_pred5);
    c21 = `is.object`(var_pred5);
    if c21 then L194() else L195(var_pred5);
  D74():
    deopt 239 [r124];
  L43(dx10):
    goto L44(dx10);
  L45(dx13):
    st `var.pred` = dx13;
    order8 = ld order;
    check L198() else D77();
  L185():
    dr8 = tryDispatchBuiltin.1("[", coefs3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L187() else L186(dr8);
  L186(coefs5):
    order2 = ld order;
    check L188() else D71();
  L192():
    goto L44(r124);
  L194():
    dr10 = tryDispatchBuiltin.1("[", var_pred5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L196() else L195(dr10);
  L195(var_pred7):
    order6 = ld order;
    check L197() else D76();
  D71():
    deopt 231 [coefs5, order2];
  D76():
    deopt 243 [var_pred7, order6];
  D77():
    deopt 249 [order8];
  L187():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L43(dx9);
  L188():
    order3 = force? order2;
    order4 = ld order;
    check L189() else D72();
  L196():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L45(dx12);
  L197():
    order7 = force? order6;
    checkMissing(order7);
    r125 = `+`(order7, 1);
    __5 = ldf `[` in base;
    r126 = dyn __5(var_pred7, r125);
    goto L45(r126);
  L198():
    order9 = force? order8;
    checkMissing(order9);
    c22 = `as.logical`(order9);
    if c22 then L199() else L46();
  D72():
    deopt 233 [coefs5, order3, 1, order4];
  L46():
    x25 = ld x;
    check L213() else D84();
  L50(r142):
    st resid = r142;
    ists2 = ld ists;
    check L214() else D85();
  L189():
    order5 = force? order4;
    checkMissing(order5);
    r122 = `:`(1, order5);
    __4 = ldf `[` in base;
    r123 = dyn __4(coefs5, order3, r122);
    goto L43(r123);
  L199():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L200() else L201();
  D84():
    deopt 274 [x25];
  D85():
    deopt 277 [ists2];
  L47(r128):
    goto L50(r128);
  L200():
    sym18 = ldf rep;
    base18 = ldf rep in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L202() else L203();
  L201():
    r127 = dyn base17(<lang rep(NA_LGL, order)>, <lang `%*%`(embed(x, `+`(order, 1)), c(1.0, `-`(ar)))>);
    goto L47(r127);
  L213():
    x26 = force? x25;
    checkMissing(x26);
    goto L50(x26);
  L214():
    ists3 = force? ists2;
    checkMissing(ists3);
    c25 = `as.logical`(ists3);
    if c25 then L215() else L51();
  L48(r130):
    embed = ldf embed;
    check L204() else D78();
  L51():
    goto L52();
  L52():
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L222() else L223();
  L202():
    rep = ldf rep in base;
    r131 = dyn rep(NA_LGL, <sym order>);
    goto L48(r131);
  L203():
    r129 = dyn base18(NA_LGL, <sym order>);
    goto L48(r129);
  L215():
    xtsp = ld xtsp;
    check L216() else D86();
  D78():
    deopt 258 [];
  D86():
    deopt 279 [xtsp];
  L53(r147):
    st res = r147;
    order14 = ld order;
    check L241() else D108();
  L204():
    p20 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p21 = prom<V +>{
      order10 = ld order;
      order11 = force? order10;
      checkMissing(order11);
      r133 = `+`(order11, 1);
      return r133;
    };
    r135 = dyn embed(p20, p21);
    check L205() else D79();
  L216():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l = ld resid;
    attr__ = ldf `attr<-`;
    check L217() else D87();
  L222():
    order12 = ld order;
    check L224() else D91();
  L223():
    r146 = dyn base20[order, ar, `var.pred`, `x.mean`, aic, `n.used`, `n.obs`, `order.max`, partialacf, resid, method, series, frequency, call](<sym order>, <sym ar>, <sym var.pred>, <sym x.mean>, <sym xaic>, <sym n.used>, <sym n.used>, <sym order.max>, <sym partialacf>, <sym resid>, <lang ifelse(`==`(var.method, 1), "Burg", "Burg2")>, <sym series>, <sym xfreq>, <lang match.call()>);
    goto L53(r146);
  D79():
    deopt 261 [r135];
  D87():
    deopt 282 [xtsp1, l, xtsp1];
  D91():
    deopt 299 [order12];
  D108():
    deopt 349 [order14];
  L205():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L206() else L207();
  L217():
    r143 = dyn attr__(l, NULL, "tsp", xtsp1);
    check L218() else D88();
  L224():
    order13 = force? order12;
    checkMissing(order13);
    ar2 = ld ar;
    check L225() else D92();
  L241():
    order15 = force? order14;
    checkMissing(order15);
    c26 = `as.logical`(order15);
    if c26 then L242() else L54();
  D88():
    deopt 285 [xtsp1, r143];
  D92():
    deopt 302 [ar2];
  L49(r137):
    ___ = ldf `%*%` in base;
    r140 = dyn ___(r135, r137);
    check L210() else D82();
  L54():
    goto L55();
  L55():
    l5 = ld res;
    class__ = ldf `class<-`;
    check L258() else D115();
  L206():
    ar = ld ar;
    check L208() else D80();
  L207():
    r136 = dyn base19(1.0, <lang `-`(ar)>);
    goto L49(r136);
  L218():
    st resid = r143;
    l1 = ld resid;
    attr__1 = ldf `attr<-`;
    check L219() else D89();
  L225():
    ar3 = force? ar2;
    checkMissing(ar3);
    var_pred8 = ld `var.pred`;
    check L226() else D93();
  L242():
    acf = ldf acf;
    check L243() else D109();
  D80():
    deopt 265 [ar];
  D82():
    deopt 271 [r140];
  D89():
    deopt 290 ["ts", l1, "ts"];
  D93():
    deopt 305 [var_pred8];
  D109():
    deopt 352 [];
  D115():
    deopt 379 ["ar", l5, "ar"];
  L208():
    ar1 = force? ar;
    checkMissing(ar1);
    r138 = `-`(<missing>, ar1);
    c23 = ldf c in base;
    r139 = dyn c23(1.0, r138);
    check L209() else D81();
  L210():
    c24 = ldf c in base;
    r141 = dyn c24(r130, r140);
    check L211() else D83();
  L219():
    r144 = dyn attr__1(l1, NULL, "class", "ts");
    check L220() else D90();
  L226():
    var_pred9 = force? var_pred8;
    checkMissing(var_pred9);
    x_mean2 = ld `x.mean`;
    check L227() else D94();
  L243():
    p23 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p24 = prom<V +>{
      order16 = ld order;
      order17 = force? order16;
      checkMissing(order17);
      return order17;
    };
    r155 = dyn acf[, type, `lag.max`, plot](p23, "covariance", p24, FALSE);
    check L244() else D110();
  L258():
    r183 = dyn class__(l5, NULL, "ar");
    check L259() else D116();
  D81():
    deopt 269 [r139];
  D83():
    deopt 273 [r141];
  D90():
    deopt 293 ["ts", r144];
  D94():
    deopt 308 [x_mean2];
  D110():
    deopt 360 [r155];
  D116():
    deopt 381 ["ar", r183];
  L209():
    goto L49(r139);
  L211():
    goto L47(r141);
  L220():
    st resid = r144;
    goto L52();
  L227():
    x_mean3 = force? x_mean2;
    checkMissing(x_mean3);
    xaic11 = ld xaic;
    check L228() else D95();
  L244():
    c27 = `is.object`(r155);
    if c27 then L246() else L247(r155);
  L259():
    st res = r183;
    res = ld res;
    check L260() else D117();
  D95():
    deopt 311 [xaic11];
  D117():
    deopt 383 [res];
  L228():
    xaic12 = force? xaic11;
    checkMissing(xaic12);
    n_used11 = ld `n.used`;
    check L229() else D96();
  L245(dx15):
    st xacf = dx15;
    solve = ldf solve;
    check L249() else D111();
  L246():
    dr12 = tryDispatchBuiltin.1("$", r155);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L248() else L247(dr12);
  L247(r157):
    r158 = `$`(r157, <sym acf>);
    goto L245(r158);
  L260():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D96():
    deopt 314 [n_used11];
  D111():
    deopt 364 [];
  L229():
    n_used12 = force? n_used11;
    checkMissing(n_used12);
    n_used13 = ld `n.used`;
    check L230() else D97();
  L248():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L245(dx14);
  L249():
    p26 = prom<V +>{
      toeplitz = ldf toeplitz;
      p25 = prom<V +>{
        sym21 = ldf drop;
        base21 = ldf drop in base;
        guard21 = `==`.4(sym21, base21);
        if guard21 then L3() else L4();
      L0(r160):
        c28 = `is.object`(r160);
        if c28 then L5() else L6(r160);
      L3():
        xacf = ld xacf;
        xacf1 = force? xacf;
        checkMissing(xacf1);
        drop = ldf drop in base;
        r161 = dyn drop(xacf1);
        goto L0(r161);
      L4():
        r159 = dyn base21(<sym xacf>);
        goto L0(r159);
      L1(dx17):
        return dx17;
      L5():
        dr14 = tryDispatchBuiltin.1("[", r160);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L7() else L6(dr14);
      L6(r163):
        sym22 = ldf seq_len;
        base22 = ldf seq_len in base;
        guard22 = `==`.4(sym22, base22);
        if guard22 then L8() else L9();
      L2(r167, r168):
        __6 = ldf `[` in base;
        r170 = dyn __6(r167, r168);
        goto L1(r170);
      L7():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L1(dx16);
      L8():
        order18 = ld order;
        order19 = force? order18;
        checkMissing(order19);
        r169 = seq_len(order19);
        goto L2(r163, r169);
      L9():
        r166 = dyn base22(<sym order>);
        goto L2(r163, r166);
      };
      r172 = dyn toeplitz(p25);
      return r172;
    };
    r174 = dyn solve(p26);
    check L250() else D112();
  D97():
    deopt 317 [n_used13];
  D112():
    deopt 366 [r174];
  L230():
    n_used14 = force? n_used13;
    checkMissing(n_used14);
    order_max27 = ld `order.max`;
    check L231() else D98();
  L250():
    var_pred10 = ld `var.pred`;
    check L251() else D113();
  D98():
    deopt 320 [order_max27];
  D113():
    deopt 366 [r174, var_pred10];
  L231():
    order_max28 = force? order_max27;
    checkMissing(order_max28);
    partialacf = ld partialacf;
    check L232() else D99();
  L251():
    var_pred11 = force? var_pred10;
    checkMissing(var_pred11);
    r175 = `*`(r174, var_pred11);
    n_used15 = ld `n.used`;
    check L252() else D114();
  D99():
    deopt 323 [partialacf];
  D114():
    deopt 368 [r175, n_used15];
  L232():
    partialacf1 = force? partialacf;
    checkMissing(partialacf1);
    resid = ld resid;
    check L233() else D100();
  L252():
    n_used16 = force? n_used15;
    checkMissing(n_used16);
    r176 = `/`(r175, n_used16);
    l2 = ld res;
    c29 = `is.object`(l2);
    if c29 then L254() else L255(r176, l2);
  D100():
    deopt 326 [resid];
  L233():
    resid1 = force? resid;
    checkMissing(resid1);
    ifelse1 = ldf ifelse;
    check L234() else D101();
  L253(r180, dx19):
    st res = dx19;
    goto L55();
  L254():
    dr16 = tryDispatchBuiltin.0("$<-", l2, r176);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L256() else L255(r176, dr16);
  L255(r178, l4):
    r181 = `$<-`(l4, <sym asy.var.coef>, r176);
    goto L253(r178, r181);
  D101():
    deopt 330 [];
  L234():
    p22 = prom<V +>{
      var_method3 = ld `var.method`;
      var_method4 = force? var_method3;
      checkMissing(var_method4);
      r148 = `==`(var_method4, 1);
      return r148;
    };
    r150 = dyn ifelse1(p22, "Burg", "Burg2");
    check L235() else D102();
  L256():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L253(r176, dx18);
  D102():
    deopt 334 [r150];
  L235():
    series3 = ld series;
    check L236() else D103();
  D103():
    deopt 336 [series3];
  L236():
    series4 = force? series3;
    checkMissing(series4);
    xfreq = ld xfreq;
    check L237() else D104();
  D104():
    deopt 339 [xfreq];
  L237():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    match_call = ldf `match.call`;
    check L238() else D105();
  D105():
    deopt 343 [];
  L238():
    r151 = dyn match_call();
    check L239() else D106();
  D106():
    deopt 344 [r151];
  L239():
    list = ldf list in base;
    r152 = dyn list(order13, ar3, var_pred9, x_mean3, xaic12, n_used12, n_used14, order_max28, partialacf1, resid1, r150, series4, xfreq1, r151);
    check L240() else D107();
  D107():
    deopt 347 [r152];
  L240():
    goto L53(r152);
  }
}