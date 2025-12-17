fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2484640021;
    st `ar.burg.mts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2484640021(x, aic, `order.max`, `na.action`, demean, series, `var.method`, `...`) {
  (reg x:*, reg aic:*, reg order_max:*, reg na_action:*, reg demean:*, reg series:*, reg var_method:*, reg ddd:dots) -+> V { var x:*, var aic:*, reg aic_isMissing:L, reg aic_orDefault:*, var `order.max`:*, reg order_max_isMissing:L, reg order_max_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var series:*, reg series_isMissing:L, reg series_orDefault:*, var `var.method`:*, reg var_method_isMissing:L, reg var_method_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg series1:*, reg series2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r10:V, reg c2:L, reg tsp:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r12:V, reg na_action1:cls, reg as_ts:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x7:*, reg x8:V, reg anyNA:cls, reg r20:V, reg c3:L, reg stop:cls, reg r21:V, reg ists:*, reg ists1:V, reg c4:L, reg tsp1:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r24:V, reg frequency:cls, reg x11:*, reg x12:V, reg p7:p(V +), reg r27:V, reg as_matrix:cls, reg x13:*, reg x14:V, reg p8:p(V +), reg r29:V, reg ncol:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r31:V, reg nrow:cls, reg x17:*, reg x18:V, reg p10:p(V +), reg r33:V, reg demean1:*, reg demean2:V, reg c5:L, reg colMeans:cls, reg x19:*, reg x20:V, reg p11:p(V +), reg r35:V, reg sweep:cls, reg x21:*, reg x22:V, reg p12:p(V +), reg x_mean:*, reg x_mean1:V, reg p13:p(V +), reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg rep:cls, reg r42:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg order_max1:*, reg order_max2:V, reg c6:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:R, reg r51:V, reg n_used:*, reg n_used1:V, reg log10:cls, reg r52:V, reg r53:V, reg r54:V, reg order_max3:*, reg order_max4:V, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg C_multi_burg:*, reg C_multi_burg1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg n_used2:*, reg n_used3:V, reg as_integer:cls, reg r60:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg r62:V, reg x23:*, reg x24:V, reg as_double:cls, reg r63:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r64:V, reg r65:V, reg order_max5:*, reg order_max6:V, reg as_integer1:cls, reg r66:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg nser:*, reg nser1:V, reg as_integer2:cls, reg r69:V, reg double:cls, reg order_max7:*, reg order_max8:V, reg r70:V, reg nser2:*, reg nser3:V, reg r71:V, reg nser4:*, reg nser5:V, reg r72:V, reg p14:p(V +), reg r74:V, reg double1:cls, reg order_max9:*, reg order_max10:V, reg r75:V, reg nser6:*, reg nser7:V, reg r76:V, reg nser8:*, reg nser9:V, reg r77:V, reg p15:p(V +), reg r79:V, reg double2:cls, reg order_max11:*, reg order_max12:V, reg r80:V, reg nser10:*, reg nser11:V, reg r81:V, reg nser12:*, reg nser13:V, reg r82:V, reg p16:p(V +), reg r84:V, reg double3:cls, reg order_max13:*, reg order_max14:V, reg r85:V, reg p17:p(V +), reg r87:V, reg integer:cls, reg r88:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg r90:V, reg aic1:*, reg aic2:V, reg as_integer3:cls, reg r91:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r92:V, reg r93:V, reg var_method1:*, reg var_method2:V, reg as_integer4:cls, reg r94:V, reg _C:cls, reg r95:V, reg aperm:cls, reg array:cls, reg z:*, reg z1:V, reg c8:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r96:V, reg p18:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r98:V, reg r99:V, reg nser14:*, reg nser15:V, reg nser16:*, reg nser17:V, reg order_max15:*, reg order_max16:V, reg r100:V, reg c9:cls, reg r101:V, reg p19:p(V +), reg r103:V, reg p20:p(V +), reg p21:p(V +), reg r106:V, reg c10:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r109:V, reg aperm1:cls, reg array1:cls, reg z4:*, reg z5:V, reg c11:L, reg z7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r110:V, reg p22:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r112:V, reg r113:V, reg nser18:*, reg nser19:V, reg nser20:*, reg nser21:V, reg order_max17:*, reg order_max18:V, reg r114:V, reg c12:cls, reg r115:V, reg p23:p(V +), reg r117:V, reg p24:p(V +), reg p25:p(V +), reg r120:V, reg setNames:cls, reg z8:*, reg z9:V, reg c13:L, reg z11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r121:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r122:V, reg dx10:V, reg r123:V, reg z12:*, reg z13:V, reg c14:L, reg dx12:V, reg z15:V, reg dr8:V, reg dc4:L, reg dx14:V, reg dx15:V, reg dx16:V, reg r124:V, reg min:cls, reg r125:V, reg r126:V, reg p26:p(V +), reg order_max19:*, reg order_max20:V, reg r128:V, reg p27:p(V +), reg r130:V, reg z16:*, reg z17:V, reg c15:L, reg z19:V, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg r131:V, reg order:*, reg order1:V, reg c16:L, reg aperm2:cls, reg array2:cls, reg z20:*, reg z21:V, reg c17:L, reg z23:V, reg dr12:V, reg dc6:L, reg dx19:V, reg dx20:V, reg r132:V, reg p28:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r134:V, reg r135:V, reg nser22:*, reg nser23:V, reg nser24:*, reg nser25:V, reg order_max21:*, reg order_max22:V, reg r136:V, reg c18:cls, reg r137:V, reg p29:p(V +), reg r139:V, reg p30:p(V +), reg p31:p(V +), reg r142:V, reg c19:L, reg r144:V, reg dr14:V, reg dc7:L, reg dx21:V, reg dx22:V, reg order2:*, reg order3:V, reg r145:V, reg r146:V, reg __1:cls, reg r147:V, reg r148:V, reg r149:V, reg array3:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r150:V, reg r151:V, reg nser26:*, reg nser27:V, reg nser28:*, reg nser29:V, reg c20:cls, reg r152:V, reg p32:p(V +), reg r154:V, reg var_pred:*, reg var_pred1:V, reg c21:L, reg var_pred3:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg order4:*, reg order5:V, reg r155:V, reg __2:cls, reg r156:V, reg matrix:cls, reg z24:*, reg z25:V, reg c22:L, reg z27:V, reg dr18:V, reg dc9:L, reg dx25:V, reg dx26:V, reg r157:V, reg p33:p(V +), reg n_used4:*, reg n_used5:V, reg p34:p(V +), reg nser30:*, reg nser31:V, reg p35:p(V +), reg r161:V, reg order6:*, reg order7:V, reg c23:L, reg l:*, reg c24:L, reg r163:L, reg l2:*, reg dr20:V, reg dc10:L, reg dx27:V, reg r165:L, reg dx28:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r170:V, reg r171:L, reg r172:L, reg r173:V, reg order8:*, reg order9:V, reg r174:I, reg ___:cls, reg r175:V, reg ists2:*, reg ists3:V, reg c25:L, reg xtsp:*, reg xtsp1:V, reg l6:*, reg attr__:cls, reg r177:V, reg l7:*, reg attr__1:cls, reg r178:V, reg colnames:cls, reg x25:*, reg x26:V, reg p36:p(V +), reg r181:V, reg snames:*, reg snames1:V, reg l8:*, reg colnames__:cls, reg r182:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r183:V, reg r184:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r185:V, reg r186:V, reg order10:*, reg order11:V, reg r187:I, reg snames2:*, reg snames3:V, reg snames4:*, reg snames5:V, reg list:cls, reg r188:V, reg l9:*, reg dimnames__:cls, reg r189:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r190:V, reg r191:V, reg snames6:*, reg snames7:V, reg snames8:*, reg snames9:V, reg list1:cls, reg r192:V, reg l10:*, reg dimnames__1:cls, reg r193:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r194:V, reg r195:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r196:V, reg r197:V, reg order_max23:*, reg order_max24:V, reg r198:I, reg snames10:*, reg snames11:V, reg snames12:*, reg snames13:V, reg list2:cls, reg r199:V, reg l11:*, reg dimnames__2:cls, reg r200:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r201:V, reg r202:V, reg order12:*, reg order13:V, reg ar:*, reg ar1:V, reg var_pred4:*, reg var_pred5:V, reg x_mean2:*, reg x_mean3:V, reg xaic:*, reg xaic1:V, reg n_used6:*, reg n_used7:V, reg n_used8:*, reg n_used9:V, reg order_max25:*, reg order_max26:V, reg partialacf:*, reg partialacf1:V, reg resid:*, reg resid1:V, reg ifelse:cls, reg var_method3:*, reg var_method4:V, reg r203:V, reg p37:p(V +), reg r205:V, reg series3:*, reg series4:V, reg xfreq:*, reg xfreq1:V, reg match_call:cls, reg r206:V, reg list3:cls, reg r207:V, reg l12:*, reg class__:cls, reg r208:V, reg res:*, reg res1:V |
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
    if guard then L49() else L50();
  L7(r2):
    c1 = `as.logical`(r2);
    if c1 then L52() else L8();
  L49():
    series1 = ld series;
    check L51() else D0();
  L50():
    r1 = dyn base(<sym series>);
    goto L7(r1);
  D0():
    deopt 1 [series1];
  L8():
    goto L9();
  L9():
    is_ts = ldf `is.ts`;
    check L56() else D3();
  L51():
    series2 = force? series1;
    checkMissing(series2);
    c = `==`(series2, NULL);
    goto L7(c);
  L52():
    deparse1 = ldf deparse1;
    check L53() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L53():
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
    check L54() else D2();
  L56():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn is_ts(p2);
    check L57() else D4();
  D2():
    deopt 7 [r7];
  D4():
    deopt 14 [r10];
  L54():
    st series = r7;
    goto L9();
  L57():
    st ists = r10;
    c2 = `as.logical`(r10);
    if c2 then L58() else L10();
  L10():
    goto L11();
  L11():
    na_action1 = ldf `na.action`;
    check L62() else D7();
  L58():
    tsp = ldf tsp;
    check L59() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 24 [];
  L59():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn tsp(p3);
    check L60() else D6();
  L62():
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
    check L63() else D8();
  D6():
    deopt 19 [r12];
  D8():
    deopt 26 [r17];
  L60():
    st xtsp = r12;
    goto L11();
  L63():
    st x = r17;
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  L12(r19):
    c3 = `as.logical`(r19);
    if c3 then L68() else L13();
  L64():
    x7 = ld x;
    check L66() else D9();
  L65():
    r18 = dyn base2(<sym x>);
    goto L12(r18);
  D9():
    deopt 30 [x7];
  L13():
    goto L14();
  L14():
    ists = ld ists;
    check L72() else D13();
  L66():
    x8 = force? x7;
    checkMissing(x8);
    anyNA = ldf anyNA in base;
    r20 = dyn anyNA(x8);
    check L67() else D10();
  L68():
    stop = ldf stop;
    check L69() else D11();
  D10():
    deopt 33 [r20];
  D11():
    deopt 35 [];
  D13():
    deopt 40 [ists];
  L67():
    goto L12(r20);
  L69():
    r21 = dyn stop("NAs in 'x'");
    check L70() else D12();
  L72():
    ists1 = force? ists;
    checkMissing(ists1);
    c4 = `as.logical`(ists1);
    if c4 then L73() else L15();
  D12():
    deopt 37 [r21];
  L15():
    goto L16();
  L16():
    frequency = ldf frequency;
    check L77() else D16();
  L70():
    goto L14();
  L73():
    tsp1 = ldf tsp;
    check L74() else D14();
  D14():
    deopt 43 [];
  D16():
    deopt 50 [];
  L74():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r24 = dyn tsp1(p6);
    check L75() else D15();
  L77():
    p7 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r27 = dyn frequency(p7);
    check L78() else D17();
  D15():
    deopt 45 [r24];
  D17():
    deopt 52 [r27];
  L75():
    st xtsp = r24;
    goto L16();
  L78():
    st xfreq = r27;
    as_matrix = ldf `as.matrix`;
    check L79() else D18();
  D18():
    deopt 55 [];
  L79():
    p8 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r29 = dyn as_matrix(p8);
    check L80() else D19();
  D19():
    deopt 57 [r29];
  L80():
    st x = r29;
    ncol = ldf ncol;
    check L81() else D20();
  D20():
    deopt 60 [];
  L81():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r31 = dyn ncol(p9);
    check L82() else D21();
  D21():
    deopt 62 [r31];
  L82():
    st nser = r31;
    nrow = ldf nrow;
    check L83() else D22();
  D22():
    deopt 65 [];
  L83():
    p10 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r33 = dyn nrow(p10);
    check L84() else D23();
  D23():
    deopt 67 [r33];
  L84():
    st `n.used` = r33;
    demean1 = ld demean;
    check L85() else D24();
  D24():
    deopt 69 [demean1];
  L85():
    demean2 = force? demean1;
    checkMissing(demean2);
    c5 = `as.logical`(demean2);
    if c5 then L86() else L17();
  L17():
    sym3 = ldf rep;
    base3 = ldf rep in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L92() else L93();
  L18():
    sym4 = ldf floor;
    base4 = ldf floor in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L94() else L95();
  L86():
    colMeans = ldf colMeans;
    check L87() else D25();
  D25():
    deopt 72 [];
  L19(r41):
    st `x.mean` = r41;
    goto L18();
  L20(r44):
    st `order.max` = r44;
    sym7 = ldf `.C`;
    base7 = ldf `.C` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  L87():
    p11 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r35 = dyn colMeans(p11);
    check L88() else D26();
  L92():
    rep = ldf rep in base;
    r42 = dyn rep(0.0, <sym nser>);
    goto L19(r42);
  L93():
    r40 = dyn base3(0.0, <sym nser>);
    goto L19(r40);
  L94():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  L95():
    r43 = dyn base4(<lang if(is.null(order.max), `*`(10.0, log10(n.used)), order.max)>);
    goto L20(r43);
  D26():
    deopt 74 [r35];
  L21(r46):
    c7 = `as.logical`(r46);
    if c7 then L99() else L22();
  L25(r57):
    st z = r57;
    aperm = ldf aperm;
    check L144() else D57();
  L88():
    st `x.mean` = r35;
    sweep = ldf sweep;
    check L89() else D27();
  L96():
    order_max1 = ld `order.max`;
    check L98() else D29();
  L97():
    r45 = dyn base5(<sym order.max>);
    goto L21(r45);
  L106():
    C_multi_burg = ld C_multi_burg;
    check L108() else D33();
  L107():
    r56 = dyn base7[, , resid, , , coefs, pacf, var, aic, order, , ](<sym C_multi_burg>, <lang as.integer(n.used)>, <lang as.double(x)>, <lang as.integer(order.max)>, <lang as.integer(nser)>, <lang double(`*`(`*`(`(`(`+`(1, order.max)), nser), nser))>, <lang double(`*`(`*`(`(`(`+`(1, order.max)), nser), nser))>, <lang double(`*`(`*`(`(`(`+`(1, order.max)), nser), nser))>, <lang double(`+`(1, order.max))>, <lang integer(1)>, <lang as.integer(aic)>, <lang as.integer(var.method)>);
    goto L25(r56);
  D27():
    deopt 77 [];
  D29():
    deopt 91 [order_max1];
  D33():
    deopt 108 [C_multi_burg];
  D57():
    deopt 176 [];
  L22():
    order_max3 = ld `order.max`;
    check L105() else D32();
  L24(r54):
    r55 = floor(r54);
    goto L20(r55);
  L89():
    p12 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p13 = prom<V +>{
      x_mean = ld `x.mean`;
      x_mean1 = force? x_mean;
      checkMissing(x_mean1);
      return x_mean1;
    };
    r38 = dyn sweep[, , , `check.margin`](p12, 2, p13, FALSE);
    check L90() else D28();
  L98():
    order_max2 = force? order_max1;
    checkMissing(order_max2);
    c6 = `==`(order_max2, NULL);
    goto L21(c6);
  L99():
    sym6 = ldf log10;
    base6 = ldf log10 in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L100() else L101();
  L108():
    C_multi_burg1 = force? C_multi_burg;
    checkMissing(C_multi_burg1);
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L109() else L110();
  L144():
    p20 = prom<V +>{
      array = ldf array;
      p18 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        c8 = `is.object`(z1);
        if c8 then L1() else L2(z1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", z1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(z3):
        r96 = `$`(z3, <sym pacf>);
        goto L0(r96);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p19 = prom<V +>{
        sym14 = ldf c;
        base14 = ldf c in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L1() else L2();
      L0(r99):
        return r99;
      L1():
        nser14 = ld nser;
        nser15 = force? nser14;
        checkMissing(nser15);
        nser16 = ld nser;
        nser17 = force? nser16;
        checkMissing(nser17);
        order_max15 = ld `order.max`;
        order_max16 = force? order_max15;
        checkMissing(order_max16);
        r100 = `+`(order_max16, 1);
        c9 = ldf c in base;
        r101 = dyn c9(nser15, nser17, r100);
        goto L0(r101);
      L2():
        r98 = dyn base14(<sym nser>, <sym nser>, <lang `+`(order.max, 1)>);
        goto L0(r98);
      };
      r103 = dyn array[, dim](p18, p19);
      return r103;
    };
    p21 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r106 = dyn aperm(p20, p21);
    check L145() else D58();
  D28():
    deopt 83 [r38];
  D32():
    deopt 102 [order_max3];
  D58():
    deopt 179 [r106];
  L23(r50, r51):
    r53 = `*`(r50, r51);
    goto L24(r53);
  L26(r59):
    sym9 = ldf `as.double`;
    base9 = ldf `as.double` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L113() else L114();
  L90():
    st x = r38;
    goto L18();
  L100():
    n_used = ld `n.used`;
    check L102() else D30();
  L101():
    r49 = dyn base6(<sym n.used>);
    goto L23(10.0, r49);
  L105():
    order_max4 = force? order_max3;
    checkMissing(order_max4);
    goto L24(order_max4);
  L109():
    n_used2 = ld `n.used`;
    check L111() else D34();
  L110():
    r58 = dyn base8(<sym n.used>);
    goto L26(r58);
  L145():
    c10 = `is.object`(r106);
    if c10 then L146() else L147();
  D30():
    deopt 97 [10.0, n_used];
  D34():
    deopt 112 [n_used2];
  L27(r62):
    sym10 = ldf `as.integer`;
    base10 = ldf `as.integer` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L117() else L118();
  L32(dx3):
    st partialacf = dx3;
    aperm1 = ldf aperm;
    check L149() else D59();
  L102():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    log10 = ldf log10 in base;
    r52 = dyn log10(n_used1);
    check L103() else D31();
  L111():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    as_integer = ldf `as.integer` in base;
    r60 = dyn as_integer(n_used3);
    check L112() else D35();
  L113():
    x23 = ld x;
    check L115() else D36();
  L114():
    r61 = dyn base9(<sym x>);
    goto L27(r61);
  L146():
    dr2 = tryDispatchBuiltin.1("[", r106);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L148() else L147();
  L147():
    __ = ldf `[` in base;
    r109 = dyn __(r106, -1, <missing>, <missing>, FALSE);
    goto L32(r109);
  D31():
    deopt 100 [10.0, r52];
  D35():
    deopt 115 [r60];
  D36():
    deopt 118 [x23];
  D59():
    deopt 190 [];
  L28(r65):
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L121() else L122();
  L103():
    goto L23(10.0, r52);
  L112():
    goto L26(r60);
  L115():
    x24 = force? x23;
    checkMissing(x24);
    as_double = ldf `as.double` in base;
    r63 = dyn as_double(x24);
    check L116() else D37();
  L117():
    order_max5 = ld `order.max`;
    check L119() else D38();
  L118():
    r64 = dyn base10(<sym order.max>);
    goto L28(r64);
  L148():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L149():
    p24 = prom<V +>{
      array1 = ldf array;
      p22 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        c11 = `is.object`(z5);
        if c11 then L1() else L2(z5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", z5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(z7):
        r110 = `$`(z7, <sym var>);
        goto L0(r110);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p23 = prom<V +>{
        sym15 = ldf c;
        base15 = ldf c in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r113):
        return r113;
      L1():
        nser18 = ld nser;
        nser19 = force? nser18;
        checkMissing(nser19);
        nser20 = ld nser;
        nser21 = force? nser20;
        checkMissing(nser21);
        order_max17 = ld `order.max`;
        order_max18 = force? order_max17;
        checkMissing(order_max18);
        r114 = `+`(order_max18, 1);
        c12 = ldf c in base;
        r115 = dyn c12(nser19, nser21, r114);
        goto L0(r115);
      L2():
        r112 = dyn base15(<sym nser>, <sym nser>, <lang `+`(order.max, 1)>);
        goto L0(r112);
      };
      r117 = dyn array1[, dim](p22, p23);
      return r117;
    };
    p25 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r120 = dyn aperm1(p24, p25);
    check L150() else D60();
  D37():
    deopt 121 [r63];
  D38():
    deopt 125 [order_max5];
  D60():
    deopt 193 [r120];
  L29(r68):
    double = ldf double;
    check L125() else D42();
  L116():
    goto L27(r63);
  L119():
    order_max6 = force? order_max5;
    checkMissing(order_max6);
    as_integer1 = ldf `as.integer` in base;
    r66 = dyn as_integer1(order_max6);
    check L120() else D39();
  L121():
    nser = ld nser;
    check L123() else D40();
  L122():
    r67 = dyn base11(<sym nser>);
    goto L29(r67);
  L150():
    st `var.pred` = r120;
    setNames = ldf setNames;
    check L151() else D61();
  D39():
    deopt 128 [r66];
  D40():
    deopt 131 [nser];
  D42():
    deopt 136 [];
  D61():
    deopt 196 [];
  L120():
    goto L28(r66);
  L123():
    nser1 = force? nser;
    checkMissing(nser1);
    as_integer2 = ldf `as.integer` in base;
    r69 = dyn as_integer2(nser1);
    check L124() else D41();
  L125():
    p14 = prom<V +>{
      order_max7 = ld `order.max`;
      order_max8 = force? order_max7;
      checkMissing(order_max8);
      r70 = `+`(1, order_max8);
      nser2 = ld nser;
      nser3 = force? nser2;
      checkMissing(nser3);
      r71 = `*`(r70, nser3);
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      r72 = `*`(r71, nser5);
      return r72;
    };
    r74 = dyn double(p14);
    check L126() else D43();
  L151():
    p26 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      c13 = `is.object`(z9);
      if c13 then L2() else L3(z9);
    L1(dx7):
      sym16 = ldf min;
      base16 = ldf min in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L5() else L6();
    L2():
      dr6 = tryDispatchBuiltin.1("$", z9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(z11):
      r121 = `$`(z11, <sym aic>);
      goto L1(r121);
    L0(dx10, r123):
      r126 = `-`(dx10, r123);
      return r126;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    L5():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c14 = `is.object`(z13);
      if c14 then L8() else L9(dx7, z13);
    L6():
      r122 = dyn base16(<lang `$`(z, aic)>);
      goto L0(dx7, r122);
    L7(dx15, dx16):
      min = ldf min in base;
      r125 = dyn min(dx16);
      goto L0(dx15, r125);
    L8():
      dr8 = tryDispatchBuiltin.1("$", z13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L10() else L9(dx7, dr8);
    L9(dx12, z15):
      r124 = `$`(z15, <sym aic>);
      goto L7(dx12, r124);
    L10():
      dx14 = getTryDispatchBuiltinValue(dr8);
      goto L7(dx7, dx14);
    };
    p27 = prom<V +>{
      order_max19 = ld `order.max`;
      order_max20 = force? order_max19;
      checkMissing(order_max20);
      r128 = `:`(0.0, order_max20);
      return r128;
    };
    r130 = dyn setNames(p26, p27);
    check L152() else D62();
  D41():
    deopt 134 [r69];
  D43():
    deopt 138 [r74];
  D62():
    deopt 199 [r130];
  L124():
    goto L29(r69);
  L126():
    double1 = ldf double;
    check L127() else D44();
  L152():
    st xaic = r130;
    z16 = ld z;
    check L153() else D63();
  D44():
    deopt 141 [];
  D63():
    deopt 201 [z16];
  L127():
    p15 = prom<V +>{
      order_max9 = ld `order.max`;
      order_max10 = force? order_max9;
      checkMissing(order_max10);
      r75 = `+`(1, order_max10);
      nser6 = ld nser;
      nser7 = force? nser6;
      checkMissing(nser7);
      r76 = `*`(r75, nser7);
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      r77 = `*`(r76, nser9);
      return r77;
    };
    r79 = dyn double1(p15);
    check L128() else D45();
  L153():
    z17 = force? z16;
    checkMissing(z17);
    c15 = `is.object`(z17);
    if c15 then L155() else L156(z17);
  D45():
    deopt 143 [r79];
  L128():
    double2 = ldf double;
    check L129() else D46();
  L154(dx18):
    st order = dx18;
    order = ld order;
    check L158() else D64();
  L155():
    dr10 = tryDispatchBuiltin.1("$", z17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L157() else L156(dr10);
  L156(z19):
    r131 = `$`(z19, <sym order>);
    goto L154(r131);
  D46():
    deopt 146 [];
  D64():
    deopt 205 [order];
  L129():
    p16 = prom<V +>{
      order_max11 = ld `order.max`;
      order_max12 = force? order_max11;
      checkMissing(order_max12);
      r80 = `+`(1, order_max12);
      nser10 = ld nser;
      nser11 = force? nser10;
      checkMissing(nser11);
      r81 = `*`(r80, nser11);
      nser12 = ld nser;
      nser13 = force? nser12;
      checkMissing(nser13);
      r82 = `*`(r81, nser13);
      return r82;
    };
    r84 = dyn double2(p16);
    check L130() else D47();
  L157():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L154(dx17);
  L158():
    order1 = force? order;
    checkMissing(order1);
    c16 = `as.logical`(order1);
    if c16 then L159() else L33();
  D47():
    deopt 148 [r84];
  L33():
    array3 = ldf array;
    check L167() else D68();
  L35(r149):
    st ar = r149;
    var_pred = ld `var.pred`;
    check L169() else D70();
  L130():
    double3 = ldf double;
    check L131() else D48();
  L159():
    aperm2 = ldf aperm;
    check L160() else D65();
  D48():
    deopt 151 [];
  D65():
    deopt 208 [];
  D68():
    deopt 226 [];
  D70():
    deopt 231 [var_pred];
  L131():
    p17 = prom<V +>{
      order_max13 = ld `order.max`;
      order_max14 = force? order_max13;
      checkMissing(order_max14);
      r85 = `+`(1, order_max14);
      return r85;
    };
    r87 = dyn double3(p17);
    check L132() else D49();
  L160():
    p30 = prom<V +>{
      array2 = ldf array;
      p28 = prom<V +>{
        z20 = ld z;
        z21 = force? z20;
        checkMissing(z21);
        c17 = `is.object`(z21);
        if c17 then L1() else L2(z21);
      L0(dx20):
        return dx20;
      L1():
        dr12 = tryDispatchBuiltin.1("$", z21);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(z23):
        r132 = `$`(z23, <sym coefs>);
        goto L0(r132);
      L3():
        dx19 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx19);
      };
      p29 = prom<V +>{
        sym17 = ldf c;
        base17 = ldf c in base;
        guard17 = `==`.4(sym17, base17);
        if guard17 then L1() else L2();
      L0(r135):
        return r135;
      L1():
        nser22 = ld nser;
        nser23 = force? nser22;
        checkMissing(nser23);
        nser24 = ld nser;
        nser25 = force? nser24;
        checkMissing(nser25);
        order_max21 = ld `order.max`;
        order_max22 = force? order_max21;
        checkMissing(order_max22);
        r136 = `+`(order_max22, 1);
        c18 = ldf c in base;
        r137 = dyn c18(nser23, nser25, r136);
        goto L0(r137);
      L2():
        r134 = dyn base17(<sym nser>, <sym nser>, <lang `+`(order.max, 1)>);
        goto L0(r134);
      };
      r139 = dyn array2[, dim](p28, p29);
      return r139;
    };
    p31 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r142 = dyn aperm2(p30, p31);
    check L161() else D66();
  L167():
    p32 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r151):
      return r151;
    L1():
      nser26 = ld nser;
      nser27 = force? nser26;
      checkMissing(nser27);
      nser28 = ld nser;
      nser29 = force? nser28;
      checkMissing(nser29);
      c20 = ldf c in base;
      r152 = dyn c20(0.0, nser27, nser29);
      goto L0(r152);
    L2():
      r150 = dyn base18(0.0, <sym nser>, <sym nser>);
      goto L0(r150);
    };
    r154 = dyn array3[dim](p32);
    check L168() else D69();
  L169():
    var_pred1 = force? var_pred;
    checkMissing(var_pred1);
    c21 = `is.object`(var_pred1);
    if c21 then L170() else L171(var_pred1);
  D49():
    deopt 153 [r87];
  D66():
    deopt 211 [r142];
  D69():
    deopt 229 [r154];
  L36(dx24):
    st `var.pred` = dx24;
    matrix = ldf matrix;
    check L174() else D72();
  L132():
    integer = ldf integer;
    check L133() else D50();
  L161():
    c19 = `is.object`(r142);
    if c19 then L162() else L163(r142);
  L168():
    goto L35(r154);
  L170():
    dr16 = tryDispatchBuiltin.1("[", var_pred1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L172() else L171(dr16);
  L171(var_pred3):
    order4 = ld order;
    check L173() else D71();
  D50():
    deopt 156 [];
  D71():
    deopt 233 [var_pred3, order4];
  D72():
    deopt 245 [];
  L34(dx22):
    r148 = `-`(<missing>, dx22);
    goto L35(r148);
  L133():
    r88 = dyn integer(1);
    check L134() else D51();
  L162():
    dr14 = tryDispatchBuiltin.1("[", r142);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L164() else L163(dr14);
  L163(r144):
    order2 = ld order;
    check L165() else D67();
  L172():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L36(dx23);
  L173():
    order5 = force? order4;
    checkMissing(order5);
    r155 = `+`(order5, 1);
    __2 = ldf `[` in base;
    r156 = dyn __2(var_pred1, r155, <missing>, <missing>, TRUE);
    goto L36(r156);
  L174():
    p33 = prom<V +>{
      z24 = ld z;
      z25 = force? z24;
      checkMissing(z25);
      c22 = `is.object`(z25);
      if c22 then L1() else L2(z25);
    L0(dx26):
      return dx26;
    L1():
      dr18 = tryDispatchBuiltin.1("$", z25);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(z27):
      r157 = `$`(z27, <sym resid>);
      goto L0(r157);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx25);
    };
    p34 = prom<V +>{
      n_used4 = ld `n.used`;
      n_used5 = force? n_used4;
      checkMissing(n_used5);
      return n_used5;
    };
    p35 = prom<V +>{
      nser30 = ld nser;
      nser31 = force? nser30;
      checkMissing(nser31);
      return nser31;
    };
    r161 = dyn matrix[, nrow, ncol](p33, p34, p35);
    check L175() else D73();
  D51():
    deopt 158 [r88];
  D67():
    deopt 213 [r144, 2, order2];
  D73():
    deopt 251 [r161];
  L134():
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L135() else L136();
  L164():
    dx21 = getTryDispatchBuiltinValue(dr14);
    goto L34(dx21);
  L165():
    order3 = force? order2;
    checkMissing(order3);
    r145 = `+`(order3, 1);
    r146 = `:`(2, r145);
    __1 = ldf `[` in base;
    r147 = dyn __1(r142, r146, <missing>, <missing>, FALSE);
    goto L34(r147);
  L175():
    st resid = r161;
    order6 = ld order;
    check L176() else D74();
  D74():
    deopt 253 [order6];
  L30(r90):
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L139() else L140();
  L135():
    aic1 = ld aic;
    check L137() else D52();
  L136():
    r89 = dyn base12(<sym aic>);
    goto L30(r89);
  L176():
    order7 = force? order6;
    checkMissing(order7);
    c23 = `as.logical`(order7);
    if c23 then L177() else L37();
  D52():
    deopt 162 [aic1];
  L31(r93):
    _C = ldf `.C` in base;
    r95 = dyn _C(C_multi_burg1, r59, r62, r65, r68, r74, r79, r84, r87, r88, r90, r93);
    check L143() else D56();
  L37():
    goto L40();
  L40():
    ists2 = ld ists;
    check L185() else D76();
  L137():
    aic2 = force? aic1;
    checkMissing(aic2);
    as_integer3 = ldf `as.integer` in base;
    r91 = dyn as_integer3(aic2);
    check L138() else D53();
  L139():
    var_method1 = ld `var.method`;
    check L141() else D54();
  L140():
    r92 = dyn base13(<sym var.method>);
    goto L31(r92);
  L177():
    l = ld resid;
    c24 = `is.object`(l);
    if c24 then L178() else L179(NA_LGL, l);
  D53():
    deopt 165 [r91];
  D54():
    deopt 168 [var_method1];
  D56():
    deopt 173 [r95];
  D76():
    deopt 268 [ists2];
  L38(r165, dx28):
    st resid = dx28;
    goto L40();
  L138():
    goto L30(r91);
  L141():
    var_method2 = force? var_method1;
    checkMissing(var_method2);
    as_integer4 = ldf `as.integer` in base;
    r94 = dyn as_integer4(var_method2);
    check L142() else D55();
  L143():
    goto L25(r95);
  L178():
    dr20 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L180() else L179(NA_LGL, dr20);
  L179(r163, l2):
    sym19 = ldf seq_len;
    base19 = ldf seq_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L181() else L182();
  L185():
    ists3 = force? ists2;
    checkMissing(ists3);
    c25 = `as.logical`(ists3);
    if c25 then L186() else L41();
  D55():
    deopt 171 [r94];
  L39(r171, r172, r173):
    ___ = ldf `[<-` in base;
    r175 = dyn ___(l, r173, <missing>, r172);
    goto L38(r171, r175);
  L41():
    goto L42();
  L42():
    colnames = ldf colnames;
    check L193() else D82();
  L142():
    goto L31(r94);
  L180():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L38(NA_LGL, dx27);
  L181():
    order8 = ld order;
    check L183() else D75();
  L182():
    r170 = dyn base19(<sym order>);
    goto L39(r163, NA_LGL, r170);
  L186():
    xtsp = ld xtsp;
    check L187() else D77();
  D75():
    deopt 259 [r163, l2, NA_LGL, order8];
  D77():
    deopt 270 [xtsp];
  D82():
    deopt 289 [];
  L183():
    order9 = force? order8;
    checkMissing(order9);
    r174 = seq_len(order9);
    goto L39(r163, NA_LGL, r174);
  L187():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l6 = ld resid;
    attr__ = ldf `attr<-`;
    check L188() else D78();
  L193():
    p36 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    r181 = dyn colnames(p36);
    check L194() else D83();
  D78():
    deopt 273 [xtsp1, l6, xtsp1];
  D83():
    deopt 291 [r181];
  L188():
    r177 = dyn attr__(l6, NULL, "tsp", xtsp1);
    check L189() else D79();
  L194():
    st snames = r181;
    snames = ld snames;
    check L195() else D84();
  D79():
    deopt 276 [xtsp1, r177];
  D84():
    deopt 293 [snames];
  L189():
    st resid = r177;
    l7 = ld resid;
    attr__1 = ldf `attr<-`;
    check L190() else D80();
  L195():
    snames1 = force? snames;
    checkMissing(snames1);
    l8 = ld resid;
    colnames__ = ldf `colnames<-`;
    check L196() else D85();
  D80():
    deopt 281 ["mts", l7, "mts"];
  D85():
    deopt 296 [snames1, l8, snames1];
  L190():
    r178 = dyn attr__1(l7, NULL, "class", "mts");
    check L191() else D81();
  L196():
    r182 = dyn colnames__(l8, NULL, snames1);
    check L197() else D86();
  D81():
    deopt 284 ["mts", r178];
  D86():
    deopt 298 [snames1, r182];
  L191():
    st resid = r178;
    goto L42();
  L197():
    st resid = r182;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L198() else L199();
  L43(r184):
    l9 = ld ar;
    dimnames__ = ldf `dimnames<-`;
    check L206() else D91();
  L198():
    sym21 = ldf seq_len;
    base21 = ldf seq_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L200() else L201();
  L199():
    r183 = dyn base20(<lang seq_len(order)>, <sym snames>, <sym snames>);
    goto L43(r183);
  D91():
    deopt 313 [r184, l9, r184];
  L44(r186):
    snames2 = ld snames;
    check L203() else D88();
  L200():
    order10 = ld order;
    check L202() else D87();
  L201():
    r185 = dyn base21(<sym order>);
    goto L44(r185);
  L206():
    r189 = dyn dimnames__(l9, NULL, r184);
    check L207() else D92();
  D87():
    deopt 303 [order10];
  D88():
    deopt 306 [snames2];
  D92():
    deopt 315 [r184, r189];
  L202():
    order11 = force? order10;
    checkMissing(order11);
    r187 = seq_len(order11);
    goto L44(r187);
  L203():
    snames3 = force? snames2;
    checkMissing(snames3);
    snames4 = ld snames;
    check L204() else D89();
  L207():
    st ar = r189;
    sym22 = ldf list;
    base22 = ldf list in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L208() else L209();
  D89():
    deopt 308 [snames4];
  L45(r191):
    l10 = ld `var.pred`;
    dimnames__1 = ldf `dimnames<-`;
    check L213() else D96();
  L204():
    snames5 = force? snames4;
    checkMissing(snames5);
    list = ldf list in base;
    r188 = dyn list(r186, snames3, snames5);
    check L205() else D90();
  L208():
    snames6 = ld snames;
    check L210() else D93();
  L209():
    r190 = dyn base22(<sym snames>, <sym snames>);
    goto L45(r190);
  D90():
    deopt 311 [r188];
  D93():
    deopt 319 [snames6];
  D96():
    deopt 326 [r191, l10, r191];
  L205():
    goto L43(r188);
  L210():
    snames7 = force? snames6;
    checkMissing(snames7);
    snames8 = ld snames;
    check L211() else D94();
  L213():
    r193 = dyn dimnames__1(l10, NULL, r191);
    check L214() else D97();
  D94():
    deopt 321 [snames8];
  D97():
    deopt 328 [r191, r193];
  L211():
    snames9 = force? snames8;
    checkMissing(snames9);
    list1 = ldf list in base;
    r192 = dyn list1(snames7, snames9);
    check L212() else D95();
  L214():
    st `var.pred` = r193;
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L215() else L216();
  D95():
    deopt 324 [r192];
  L46(r195):
    l11 = ld partialacf;
    dimnames__2 = ldf `dimnames<-`;
    check L223() else D102();
  L212():
    goto L45(r192);
  L215():
    sym24 = ldf seq_len;
    base24 = ldf seq_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L217() else L218();
  L216():
    r194 = dyn base23(<lang seq_len(order.max)>, <sym snames>, <sym snames>);
    goto L46(r194);
  D102():
    deopt 343 [r195, l11, r195];
  L47(r197):
    snames10 = ld snames;
    check L220() else D99();
  L217():
    order_max23 = ld `order.max`;
    check L219() else D98();
  L218():
    r196 = dyn base24(<sym order.max>);
    goto L47(r196);
  L223():
    r200 = dyn dimnames__2(l11, NULL, r195);
    check L224() else D103();
  D98():
    deopt 333 [order_max23];
  D99():
    deopt 336 [snames10];
  D103():
    deopt 345 [r195, r200];
  L219():
    order_max24 = force? order_max23;
    checkMissing(order_max24);
    r198 = seq_len(order_max24);
    goto L47(r198);
  L220():
    snames11 = force? snames10;
    checkMissing(snames11);
    snames12 = ld snames;
    check L221() else D100();
  L224():
    st partialacf = r200;
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L225() else L226();
  D100():
    deopt 338 [snames12];
  L48(r202):
    st res = r202;
    l12 = ld res;
    class__ = ldf `class<-`;
    check L244() else D121();
  L221():
    snames13 = force? snames12;
    checkMissing(snames13);
    list2 = ldf list in base;
    r199 = dyn list2(r197, snames11, snames13);
    check L222() else D101();
  L225():
    order12 = ld order;
    check L227() else D104();
  L226():
    r201 = dyn base25[order, ar, `var.pred`, `x.mean`, aic, `n.used`, `n.obs`, `order.max`, partialacf, resid, method, series, frequency, call](<sym order>, <sym ar>, <sym var.pred>, <sym x.mean>, <sym xaic>, <sym n.used>, <sym n.used>, <sym order.max>, <sym partialacf>, <sym resid>, <lang ifelse(`==`(var.method, 1), "Burg", "Burg2")>, <sym series>, <sym xfreq>, <lang match.call()>);
    goto L48(r201);
  D101():
    deopt 341 [r199];
  D104():
    deopt 349 [order12];
  D121():
    deopt 402 ["ar", l12, "ar"];
  L222():
    goto L46(r199);
  L227():
    order13 = force? order12;
    checkMissing(order13);
    ar = ld ar;
    check L228() else D105();
  L244():
    r208 = dyn class__(l12, NULL, "ar");
    check L245() else D122();
  D105():
    deopt 352 [ar];
  D122():
    deopt 404 ["ar", r208];
  L228():
    ar1 = force? ar;
    checkMissing(ar1);
    var_pred4 = ld `var.pred`;
    check L229() else D106();
  L245():
    st res = r208;
    res = ld res;
    check L246() else D123();
  D106():
    deopt 355 [var_pred4];
  D123():
    deopt 406 [res];
  L229():
    var_pred5 = force? var_pred4;
    checkMissing(var_pred5);
    x_mean2 = ld `x.mean`;
    check L230() else D107();
  L246():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D107():
    deopt 358 [x_mean2];
  L230():
    x_mean3 = force? x_mean2;
    checkMissing(x_mean3);
    xaic = ld xaic;
    check L231() else D108();
  D108():
    deopt 361 [xaic];
  L231():
    xaic1 = force? xaic;
    checkMissing(xaic1);
    n_used6 = ld `n.used`;
    check L232() else D109();
  D109():
    deopt 364 [n_used6];
  L232():
    n_used7 = force? n_used6;
    checkMissing(n_used7);
    n_used8 = ld `n.used`;
    check L233() else D110();
  D110():
    deopt 367 [n_used8];
  L233():
    n_used9 = force? n_used8;
    checkMissing(n_used9);
    order_max25 = ld `order.max`;
    check L234() else D111();
  D111():
    deopt 370 [order_max25];
  L234():
    order_max26 = force? order_max25;
    checkMissing(order_max26);
    partialacf = ld partialacf;
    check L235() else D112();
  D112():
    deopt 373 [partialacf];
  L235():
    partialacf1 = force? partialacf;
    checkMissing(partialacf1);
    resid = ld resid;
    check L236() else D113();
  D113():
    deopt 376 [resid];
  L236():
    resid1 = force? resid;
    checkMissing(resid1);
    ifelse = ldf ifelse;
    check L237() else D114();
  D114():
    deopt 380 [];
  L237():
    p37 = prom<V +>{
      var_method3 = ld `var.method`;
      var_method4 = force? var_method3;
      checkMissing(var_method4);
      r203 = `==`(var_method4, 1);
      return r203;
    };
    r205 = dyn ifelse(p37, "Burg", "Burg2");
    check L238() else D115();
  D115():
    deopt 384 [r205];
  L238():
    series3 = ld series;
    check L239() else D116();
  D116():
    deopt 386 [series3];
  L239():
    series4 = force? series3;
    checkMissing(series4);
    xfreq = ld xfreq;
    check L240() else D117();
  D117():
    deopt 389 [xfreq];
  L240():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    match_call = ldf `match.call`;
    check L241() else D118();
  D118():
    deopt 393 [];
  L241():
    r206 = dyn match_call();
    check L242() else D119();
  D119():
    deopt 394 [r206];
  L242():
    list3 = ldf list in base;
    r207 = dyn list3(order13, ar1, var_pred5, x_mean3, xaic1, n_used7, n_used9, order_max26, partialacf1, resid1, r205, series4, xfreq1, r206);
    check L243() else D120();
  D120():
    deopt 397 [r207];
  L243():
    goto L48(r207);
  }
}