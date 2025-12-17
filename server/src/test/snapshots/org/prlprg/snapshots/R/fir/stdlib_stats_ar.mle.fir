fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3975754853;
    st `ar.mle` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3975754853(x, aic, `order.max`, `na.action`, demean, series, `...`) {
  (reg x:*, reg aic:*, reg order_max:*, reg na_action:*, reg demean:*, reg series:*, reg ddd:dots) -+> V { var x:*, var aic:*, reg aic_isMissing:L, reg aic_orDefault:*, var `order.max`:*, reg order_max_isMissing:L, reg order_max_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var series:*, reg series_isMissing:L, reg series_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg series1:*, reg series2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x3:*, reg x4:V, reg dim:cls, reg r15:V, reg c2:V, reg r16:V, reg c3:L, reg stop:cls, reg r17:V, reg na_action1:cls, reg as_ts:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x7:*, reg x8:V, reg anyNA:cls, reg r25:V, reg c4:L, reg stop1:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg x9:*, reg x10:V, reg is_numeric:cls, reg r30:V, reg r31:V, reg c5:L, reg stop2:cls, reg r32:V, reg ists:*, reg ists1:V, reg c6:L, reg tsp:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r35:V, reg frequency:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r38:V, reg as_vector:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg x17:*, reg x18:V, reg length:cls, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg order_max1:*, reg order_max2:V, reg c7:V, reg c8:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg n_used:*, reg n_used1:V, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:R, reg r55:V, reg n_used2:*, reg n_used3:V, reg log10:cls, reg r56:V, reg r57:V, reg r58:V, reg min:cls, reg r59:V, reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg round:cls, reg r62:V, reg order_max3:*, reg order_max4:V, reg r63:V, reg c9:L, reg stop3:cls, reg r64:V, reg order_max5:*, reg order_max6:V, reg n_used4:*, reg n_used5:V, reg r66:V, reg c10:L, reg stop4:cls, reg r67:V, reg aic1:*, reg aic2:V, reg c11:L, reg matrix:cls, reg order_max7:*, reg order_max8:V, reg r68:V, reg p8:p(V +), reg order_max9:*, reg order_max10:V, reg r70:V, reg p9:p(V +), reg r72:V, reg numeric:cls, reg order_max11:*, reg order_max12:V, reg r73:V, reg p10:p(V +), reg r75:V, reg numeric1:cls, reg order_max13:*, reg order_max14:V, reg r76:V, reg p11:p(V +), reg r78:V, reg demean1:*, reg demean2:V, reg c12:L, reg mean:cls, reg x19:*, reg x20:V, reg p12:p(V +), reg r80:V, reg r81:V, reg xm:*, reg xm1:V, reg l:*, reg c13:L, reg xm3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r82:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r83:V, reg r84:V, reg x21:*, reg x22:V, reg xm6:*, reg xm7:V, reg r85:V, reg r86:V, reg sum:cls, reg r87:V, reg n_used6:*, reg n_used7:V, reg r88:V, reg var0:*, reg var1:V, reg l3:*, reg c14:L, reg var3:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___1:cls, reg r89:V, reg n_used8:*, reg n_used9:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r90:V, reg n_used12:V, reg r91:V, reg var6:*, reg var7:V, reg r92:V, reg r93:V, reg demean3:*, reg demean4:V, reg r94:V, reg r95:V, reg r96:V, reg n_used13:*, reg n_used14:V, reg r97:V, reg n_used15:*, reg n_used16:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r100:V, reg r101:V, reg n_used19:V, reg r102:V, reg r103:V, reg r104:V, reg r105:V, reg l6:*, reg c15:L, reg r107:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___2:cls, reg r110:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r111:V, reg r112:V, reg order_max15:*, reg order_max16:V, reg r113:I, reg s:V, reg l9:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x23:V, reg arima0:cls, reg x24:*, reg x25:V, reg p13:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r115:V, reg r116:V, reg i5:*, reg i6:V, reg c17:cls, reg r117:V, reg p14:p(V +), reg demean5:*, reg demean6:V, reg p15:p(V +), reg r120:V, reg fit:*, reg fit1:V, reg c18:L, reg i8:I, reg fit3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i10:I, reg dx7:V, reg r121:V, reg c19:L, reg i12:I, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i14:I, reg dx11:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r122:V, reg i17:I, reg dx14:V, reg r123:V, reg i18:*, reg i19:V, reg demean7:*, reg demean8:V, reg r124:V, reg r125:I, reg __:cls, reg r126:V, reg l10:*, reg c20:L, reg i21:I, reg dx16:V, reg l12:*, reg dr10:V, reg dc5:L, reg dx18:V, reg i23:I, reg dx20:V, reg i24:*, reg i25:V, reg r127:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r130:V, reg i28:I, reg dx25:V, reg l15:*, reg dx26:V, reg r131:V, reg r132:V, reg i29:*, reg i30:V, reg demean9:*, reg demean10:V, reg r133:V, reg r134:I, reg ___3:cls, reg r135:V, reg fit4:*, reg fit5:V, reg c21:L, reg i32:I, reg fit7:V, reg dr12:V, reg dc6:L, reg dx27:V, reg i34:I, reg dx28:V, reg r136:V, reg l16:*, reg c22:L, reg i36:I, reg dx30:V, reg l18:*, reg dr14:V, reg dc7:L, reg dx32:V, reg i38:I, reg dx34:V, reg i39:*, reg i40:V, reg r137:V, reg ___4:cls, reg r138:V, reg fit8:*, reg fit9:V, reg c23:L, reg i42:I, reg fit11:V, reg dr16:V, reg dc8:L, reg dx35:V, reg i44:I, reg dx36:V, reg r139:V, reg l19:*, reg c24:L, reg i46:I, reg dx38:V, reg l21:*, reg dr18:V, reg dc9:L, reg dx40:V, reg i48:I, reg dx42:V, reg i49:*, reg i50:V, reg r140:V, reg ___5:cls, reg r141:V, reg setNames:cls, reg xaic:*, reg xaic1:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r142:V, reg xaic4:V, reg r143:V, reg xaic5:*, reg xaic6:V, reg min1:cls, reg r144:V, reg r145:V, reg p16:p(V +), reg order_max17:*, reg order_max18:V, reg r147:V, reg p17:p(V +), reg r149:V, reg order_max19:*, reg order_max20:V, reg r150:V, reg c25:L, reg r152:V, reg dr20:V, reg dc10:L, reg dx43:V, reg dx44:V, reg xaic7:*, reg xaic8:V, reg r153:V, reg __1:cls, reg r154:V, reg coefs:*, reg coefs1:V, reg c26:L, reg coefs3:V, reg dr22:V, reg dc11:L, reg dx45:V, reg dx46:V, reg order:*, reg order1:V, reg r155:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r158:V, reg coefs6:V, reg r159:V, reg r160:V, reg order2:*, reg order3:V, reg r161:I, reg __2:cls, reg r162:V, reg coefs7:*, reg coefs8:V, reg c27:L, reg coefs10:V, reg dr24:V, reg dc12:L, reg dx47:V, reg dx48:V, reg order4:*, reg order5:V, reg r163:V, reg order6:*, reg order7:V, reg r164:V, reg __3:cls, reg r165:V, reg var_pred:*, reg var_pred1:V, reg c28:L, reg var_pred3:V, reg dr26:V, reg dc13:L, reg dx49:V, reg dx50:V, reg order8:*, reg order9:V, reg r166:V, reg __4:cls, reg r167:V, reg order_max21:*, reg order_max22:V, reg arima1:cls, reg x26:*, reg x27:V, reg p18:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r169:V, reg r170:V, reg order10:*, reg order11:V, reg c29:cls, reg r171:V, reg p19:p(V +), reg demean11:*, reg demean12:V, reg p20:p(V +), reg r174:V, reg fit12:*, reg fit13:V, reg c30:L, reg fit15:V, reg dr28:V, reg dc14:L, reg dx52:V, reg dx53:V, reg r175:V, reg demean13:*, reg demean14:V, reg c31:L, reg coefs11:*, reg coefs12:V, reg c32:L, reg coefs14:V, reg dr30:V, reg dc15:L, reg dx54:V, reg dx55:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r176:V, reg coefs17:V, reg r177:V, reg coefs18:*, reg coefs19:V, reg length1:cls, reg r178:V, reg r179:V, reg __5:cls, reg r180:V, reg coefs20:*, reg coefs21:V, reg c33:L, reg coefs23:V, reg dr32:V, reg dc16:L, reg dx56:V, reg dx57:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r181:V, reg coefs26:V, reg r182:V, reg coefs27:*, reg coefs28:V, reg length2:cls, reg r183:V, reg __6:cls, reg r184:V, reg coefs29:*, reg coefs30:V, reg fit16:*, reg fit17:V, reg c34:L, reg fit19:V, reg dr34:V, reg dc17:L, reg dx59:V, reg dx60:V, reg r185:V, reg structure:cls, reg order12:*, reg order13:V, reg p21:p(V +), reg r187:V, reg order14:*, reg order15:V, reg c35:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r188:V, reg r189:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r190:V, reg r191:V, reg rep:cls, reg r192:V, reg embed:cls, reg x28:*, reg x29:V, reg x_mean:*, reg x_mean1:V, reg r193:V, reg p22:p(V +), reg order16:*, reg order17:V, reg r195:V, reg p23:p(V +), reg r197:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r198:V, reg r199:V, reg ar:*, reg ar1:V, reg r200:V, reg c36:cls, reg r201:V, reg ___6:cls, reg r202:V, reg c37:cls, reg r203:V, reg r204:V, reg x30:*, reg x31:V, reg x_mean2:*, reg x_mean3:V, reg r205:V, reg ists2:*, reg ists3:V, reg c38:L, reg xtsp:*, reg xtsp1:V, reg l22:*, reg attr__:cls, reg r206:V, reg l23:*, reg attr__1:cls, reg r207:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r209:V, reg r210:V, reg order18:*, reg order19:V, reg ar2:*, reg ar3:V, reg var_pred4:*, reg var_pred5:V, reg x_mean4:*, reg x_mean5:V, reg xaic9:*, reg xaic10:V, reg n_used20:*, reg n_used21:V, reg n_used22:*, reg n_used23:V, reg order_max23:*, reg order_max24:V, reg resid:*, reg resid1:V, reg series3:*, reg series4:V, reg xfreq:*, reg xfreq1:V, reg match_call:cls, reg r211:V, reg list:cls, reg r212:V, reg order20:*, reg order21:V, reg c39:L, reg acf:cls, reg x32:*, reg x33:V, reg p24:p(V +), reg order22:*, reg order23:V, reg p25:p(V +), reg r215:V, reg c40:L, reg r217:V, reg dr36:V, reg dc18:L, reg dx61:V, reg dx62:V, reg r218:V, reg var_pred6:*, reg var_pred7:V, reg n_used24:*, reg n_used25:V, reg r219:V, reg solve:cls, reg toeplitz:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r220:V, reg r221:V, reg xacf:*, reg xacf1:V, reg drop:cls, reg r222:V, reg c41:L, reg r224:V, reg dr38:V, reg dc19:L, reg dx63:V, reg dx64:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r227:V, reg r228:V, reg r229:V, reg order24:*, reg order25:V, reg r230:I, reg __7:cls, reg r231:V, reg p26:p(V +), reg r233:V, reg p27:p(V +), reg r235:V, reg r236:V, reg l24:*, reg c42:L, reg r238:V, reg l26:*, reg dr40:V, reg dc20:L, reg dx65:V, reg r240:V, reg dx66:V, reg r241:V, reg l27:*, reg class__:cls, reg r243:V, reg res:*, reg res1:V |
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
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L71() else L72();
  L6(r2):
    c1 = `as.logical`(r2);
    if c1 then L74() else L7();
  L71():
    series1 = ld series;
    check L73() else D0();
  L72():
    r1 = dyn base(<sym series>);
    goto L6(r1);
  D0():
    deopt 1 [series1];
  L7():
    goto L8();
  L8():
    is_ts = ldf `is.ts`;
    check L78() else D3();
  L73():
    series2 = force? series1;
    checkMissing(series2);
    c = `==`(series2, NULL);
    goto L6(c);
  L74():
    deparse1 = ldf deparse1;
    check L75() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L75():
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
    check L76() else D2();
  L78():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn is_ts(p2);
    check L79() else D4();
  D2():
    deopt 7 [r7];
  D4():
    deopt 14 [r10];
  L76():
    st series = r7;
    goto L8();
  L79():
    st ists = r10;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L80() else L81();
  L9(r12):
    r16 = `!`(r12);
    c3 = `as.logical`(r16);
    if c3 then L86() else L11();
  L80():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L82() else L83();
  L81():
    r11 = dyn base2(<lang dim(x)>);
    goto L9(r11);
  L10(r14):
    c2 = `==`(r14, NULL);
    goto L9(c2);
  L11():
    goto L12();
  L12():
    na_action1 = ldf `na.action`;
    check L90() else D9();
  L82():
    x3 = ld x;
    check L84() else D5();
  L83():
    r13 = dyn base3(<sym x>);
    goto L10(r13);
  L86():
    stop = ldf stop;
    check L87() else D7();
  D5():
    deopt 19 [x3];
  D7():
    deopt 26 [];
  D9():
    deopt 32 [];
  L84():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r15 = dyn dim(x4);
    check L85() else D6();
  L87():
    r17 = dyn stop("MLE only implemented for univariate series");
    check L88() else D8();
  L90():
    p4 = prom<V +>{
      as_ts = ldf `as.ts`;
      p3 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r20 = dyn as_ts(p3);
      return r20;
    };
    r22 = dyn na_action1(p4);
    check L91() else D10();
  D6():
    deopt 22 [r15];
  D8():
    deopt 28 [r17];
  D10():
    deopt 34 [r22];
  L85():
    goto L10(r15);
  L88():
    goto L12();
  L91():
    st x = r22;
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  L13(r24):
    c4 = `as.logical`(r24);
    if c4 then L96() else L14();
  L92():
    x7 = ld x;
    check L94() else D11();
  L93():
    r23 = dyn base4(<sym x>);
    goto L13(r23);
  D11():
    deopt 38 [x7];
  L14():
    goto L15();
  L15():
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L94():
    x8 = force? x7;
    checkMissing(x8);
    anyNA = ldf anyNA in base;
    r25 = dyn anyNA(x8);
    check L95() else D12();
  L96():
    stop1 = ldf stop;
    check L97() else D13();
  D12():
    deopt 41 [r25];
  D13():
    deopt 43 [];
  L16(r29):
    r31 = `!`(r29);
    c5 = `as.logical`(r31);
    if c5 then L104() else L17();
  L95():
    goto L13(r25);
  L97():
    r26 = dyn stop1("NAs in 'x'");
    check L98() else D14();
  L100():
    x9 = ld x;
    check L102() else D15();
  L101():
    r28 = dyn base5(<sym x>);
    goto L16(r28);
  D14():
    deopt 45 [r26];
  D15():
    deopt 50 [x9];
  L17():
    goto L18();
  L18():
    ists = ld ists;
    check L108() else D19();
  L98():
    goto L15();
  L102():
    x10 = force? x9;
    checkMissing(x10);
    is_numeric = ldf `is.numeric` in base;
    r30 = dyn is_numeric(x10);
    check L103() else D16();
  L104():
    stop2 = ldf stop;
    check L105() else D17();
  D16():
    deopt 53 [r30];
  D17():
    deopt 56 [];
  D19():
    deopt 61 [ists];
  L103():
    goto L16(r30);
  L105():
    r32 = dyn stop2("'x' must be numeric");
    check L106() else D18();
  L108():
    ists1 = force? ists;
    checkMissing(ists1);
    c6 = `as.logical`(ists1);
    if c6 then L109() else L19();
  D18():
    deopt 58 [r32];
  L19():
    goto L20();
  L20():
    frequency = ldf frequency;
    check L113() else D22();
  L106():
    goto L18();
  L109():
    tsp = ldf tsp;
    check L110() else D20();
  D20():
    deopt 64 [];
  D22():
    deopt 71 [];
  L110():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r35 = dyn tsp(p5);
    check L111() else D21();
  L113():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r38 = dyn frequency(p6);
    check L114() else D23();
  D21():
    deopt 66 [r35];
  D23():
    deopt 73 [r38];
  L111():
    st xtsp = r35;
    goto L20();
  L114():
    st xfreq = r38;
    as_vector = ldf `as.vector`;
    check L115() else D24();
  D24():
    deopt 76 [];
  L115():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r40 = dyn as_vector(p7);
    check L116() else D25();
  D25():
    deopt 78 [r40];
  L116():
    st x = r40;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  L21(r42):
    st `n.used` = r42;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L121() else L122();
  L117():
    x17 = ld x;
    check L119() else D26();
  L118():
    r41 = dyn base6(<sym x>);
    goto L21(r41);
  D26():
    deopt 82 [x17];
  L22(r45):
    c8 = `as.logical`(r45);
    if c8 then L124() else L23();
  L119():
    x18 = force? x17;
    checkMissing(x18);
    length = ldf length in base;
    r43 = dyn length(x18);
    check L120() else D27();
  L121():
    order_max1 = ld `order.max`;
    check L123() else D28();
  L122():
    r44 = dyn base7(<sym order.max>);
    goto L22(r44);
  D27():
    deopt 85 [r43];
  D28():
    deopt 88 [order_max1];
  L23():
    sym11 = ldf round;
    base11 = ldf round in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L136() else L137();
  L27(r60):
    st `order.max` = r60;
    order_max3 = ld `order.max`;
    check L138() else D33();
  L120():
    goto L21(r43);
  L123():
    order_max2 = force? order_max1;
    checkMissing(order_max2);
    c7 = `==`(order_max2, NULL);
    goto L22(c7);
  L124():
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L125() else L126();
  D33():
    deopt 114 [order_max3];
  L24(r47):
    goto L27(r47);
  L125():
    n_used = ld `n.used`;
    check L127() else D29();
  L126():
    r46 = dyn base8(<lang `-`(n.used, 1)>, 12, <lang floor(`*`(10.0, log10(n.used)))>);
    goto L24(r46);
  L136():
    round = ldf round in base;
    r62 = dyn round(<sym order.max>);
    goto L27(r62);
  L137():
    r61 = dyn base11(<sym order.max>);
    goto L27(r61);
  L138():
    order_max4 = force? order_max3;
    checkMissing(order_max4);
    r63 = `<`(order_max4, 0);
    c9 = `as.logical`(r63);
    if c9 then L139() else L28();
  D29():
    deopt 93 [n_used];
  L28():
    order_max5 = ld `order.max`;
    check L143() else D36();
  L29():
    aic1 = ld aic;
    check L149() else D40();
  L127():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    r48 = `-`(n_used1, 1);
    sym9 = ldf floor;
    base9 = ldf floor in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  L139():
    stop3 = ldf stop;
    check L140() else D34();
  D34():
    deopt 119 [];
  D36():
    deopt 122 [order_max5];
  D40():
    deopt 132 [aic1];
  L25(r50):
    min = ldf min in base;
    r59 = dyn min(r48, 12, r50);
    check L134() else D32();
  L128():
    sym10 = ldf log10;
    base10 = ldf log10 in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L130() else L131();
  L129():
    r49 = dyn base9(<lang `*`(10.0, log10(n.used))>);
    goto L25(r49);
  L140():
    r64 = dyn stop3("'order.max' must be >= 0");
    check L141() else D35();
  L143():
    order_max6 = force? order_max5;
    checkMissing(order_max6);
    n_used4 = ld `n.used`;
    check L144() else D37();
  L149():
    aic2 = force? aic1;
    checkMissing(aic2);
    c11 = `as.logical`(aic2);
    if c11 then L150() else L31();
  D32():
    deopt 109 [r59];
  D35():
    deopt 121 [r64];
  D37():
    deopt 123 [order_max6, n_used4];
  L26(r54, r55):
    r57 = `*`(r54, r55);
    r58 = floor(r57);
    goto L25(r58);
  L31():
    order_max21 = ld `order.max`;
    check L259() else D86();
  L54():
    order14 = ld order;
    check L294() else D101();
  L130():
    n_used2 = ld `n.used`;
    check L132() else D30();
  L131():
    r53 = dyn base10(<sym n.used>);
    goto L26(10.0, r53);
  L134():
    goto L24(r59);
  L141():
    goto L29();
  L144():
    n_used5 = force? n_used4;
    checkMissing(n_used5);
    r66 = `>=`(order_max6, n_used5);
    c10 = `as.logical`(r66);
    if c10 then L145() else L30();
  L150():
    matrix = ldf matrix;
    check L151() else D41();
  D30():
    deopt 102 [10.0, n_used2];
  D41():
    deopt 135 [];
  D86():
    deopt 317 [order_max21];
  D101():
    deopt 373 [order14];
  L30():
    goto L29();
  L132():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    log10 = ldf log10 in base;
    r56 = dyn log10(n_used3);
    check L133() else D31();
  L145():
    stop4 = ldf stop;
    check L146() else D38();
  L151():
    p8 = prom<V +>{
      order_max7 = ld `order.max`;
      order_max8 = force? order_max7;
      checkMissing(order_max8);
      r68 = `+`(order_max8, 1);
      return r68;
    };
    p9 = prom<V +>{
      order_max9 = ld `order.max`;
      order_max10 = force? order_max9;
      checkMissing(order_max10);
      r70 = `+`(order_max10, 1);
      return r70;
    };
    r72 = dyn matrix(NA_LGL, p8, p9);
    check L152() else D42();
  L259():
    order_max22 = force? order_max21;
    checkMissing(order_max22);
    st order = order_max22;
    arima1 = ldf arima0;
    check L260() else D87();
  L294():
    order15 = force? order14;
    checkMissing(order15);
    c35 = `as.logical`(order15);
    if c35 then L295() else L61();
  D31():
    deopt 105 [10.0, r56];
  D38():
    deopt 127 [];
  D42():
    deopt 139 [r72];
  D87():
    deopt 321 [];
  L61():
    x30 = ld x;
    check L309() else D108();
  L65(r204):
    st resid = r204;
    ists2 = ld ists;
    check L311() else D110();
  L133():
    goto L26(10.0, r56);
  L146():
    r67 = dyn stop4("'order.max' must be < 'n.used'");
    check L147() else D39();
  L152():
    st coefs = r72;
    numeric = ldf numeric;
    check L153() else D43();
  L260():
    p18 = prom<V +>{
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    p19 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r170):
      return r170;
    L1():
      order10 = ld order;
      order11 = force? order10;
      checkMissing(order11);
      c29 = ldf c in base;
      r171 = dyn c29(order11, 0, 0);
      goto L0(r171);
    L2():
      r169 = dyn base21(<sym order>, 0, 0);
      goto L0(r169);
    };
    p20 = prom<V +>{
      demean11 = ld demean;
      demean12 = force? demean11;
      checkMissing(demean12);
      return demean12;
    };
    r174 = dyn arima1[, order, `include.mean`](p18, p19, p20);
    check L261() else D88();
  L295():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L296() else L297();
  D39():
    deopt 129 [r67];
  D43():
    deopt 142 [];
  D88():
    deopt 327 [r174];
  D108():
    deopt 398 [x30];
  D110():
    deopt 403 [ists2];
  L62(r189):
    goto L65(r189);
  L147():
    goto L29();
  L153():
    p10 = prom<V +>{
      order_max11 = ld `order.max`;
      order_max12 = force? order_max11;
      checkMissing(order_max12);
      r73 = `+`(order_max12, 1);
      return r73;
    };
    r75 = dyn numeric(p10);
    check L154() else D44();
  L261():
    st fit = r174;
    fit12 = ld fit;
    check L262() else D89();
  L296():
    sym25 = ldf rep;
    base25 = ldf rep in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L298() else L299();
  L297():
    r188 = dyn base24(<lang rep(NA_LGL, order)>, <lang `%*%`(embed(`-`(x, x.mean), `+`(order, 1)), c(1.0, `-`(ar)))>);
    goto L62(r188);
  L309():
    x31 = force? x30;
    checkMissing(x31);
    x_mean2 = ld `x.mean`;
    check L310() else D109();
  L311():
    ists3 = force? ists2;
    checkMissing(ists3);
    c38 = `as.logical`(ists3);
    if c38 then L312() else L66();
  D44():
    deopt 144 [r75];
  D89():
    deopt 329 [fit12];
  D109():
    deopt 399 [x31, x_mean2];
  L63(r191):
    embed = ldf embed;
    check L300() else D102();
  L66():
    goto L67();
  L67():
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L319() else L320();
  L154():
    st `var.pred` = r75;
    numeric1 = ldf numeric;
    check L155() else D45();
  L262():
    fit13 = force? fit12;
    checkMissing(fit13);
    c30 = `is.object`(fit13);
    if c30 then L264() else L265(fit13);
  L298():
    rep = ldf rep in base;
    r192 = dyn rep(NA_LGL, <sym order>);
    goto L63(r192);
  L299():
    r190 = dyn base25(NA_LGL, <sym order>);
    goto L63(r190);
  L310():
    x_mean3 = force? x_mean2;
    checkMissing(x_mean3);
    r205 = `-`(x31, x_mean3);
    goto L65(r205);
  L312():
    xtsp = ld xtsp;
    check L313() else D111();
  D45():
    deopt 147 [];
  D102():
    deopt 382 [];
  D111():
    deopt 405 [xtsp];
  L68(r210):
    st res = r210;
    order20 = ld order;
    check L335() else D130();
  L155():
    p11 = prom<V +>{
      order_max13 = ld `order.max`;
      order_max14 = force? order_max13;
      checkMissing(order_max14);
      r76 = `+`(order_max14, 1);
      return r76;
    };
    r78 = dyn numeric1(p11);
    check L156() else D46();
  L263(dx53):
    st coefs = dx53;
    demean13 = ld demean;
    check L267() else D90();
  L264():
    dr28 = tryDispatchBuiltin.1("$", fit13);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L266() else L265(dr28);
  L265(fit15):
    r175 = `$`(fit15, <sym coef>);
    goto L263(r175);
  L300():
    p22 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      x_mean = ld `x.mean`;
      x_mean1 = force? x_mean;
      checkMissing(x_mean1);
      r193 = `-`(x29, x_mean1);
      return r193;
    };
    p23 = prom<V +>{
      order16 = ld order;
      order17 = force? order16;
      checkMissing(order17);
      r195 = `+`(order17, 1);
      return r195;
    };
    r197 = dyn embed(p22, p23);
    check L301() else D103();
  L313():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l22 = ld resid;
    attr__ = ldf `attr<-`;
    check L314() else D112();
  L319():
    order18 = ld order;
    check L321() else D116();
  L320():
    r209 = dyn base27[order, ar, `var.pred`, `x.mean`, aic, `n.used`, `n.obs`, `order.max`, partialacf, resid, method, series, frequency, call](<sym order>, <sym ar>, <sym var.pred>, <sym x.mean>, <sym xaic>, <sym n.used>, <sym n.used>, <sym order.max>, NULL, <sym resid>, "MLE", <sym series>, <sym xfreq>, <lang match.call()>);
    goto L68(r209);
  D46():
    deopt 149 [r78];
  D90():
    deopt 333 [demean13];
  D103():
    deopt 385 [r197];
  D112():
    deopt 408 [xtsp1, l22, xtsp1];
  D116():
    deopt 425 [order18];
  D130():
    deopt 469 [order20];
  L156():
    st xaic = r78;
    demean1 = ld demean;
    check L157() else D47();
  L266():
    dx52 = getTryDispatchBuiltinValue(dr28);
    goto L263(dx52);
  L267():
    demean14 = force? demean13;
    checkMissing(demean14);
    c31 = `as.logical`(demean14);
    if c31 then L268() else L55();
  L301():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L302() else L303();
  L314():
    r206 = dyn attr__(l22, NULL, "tsp", xtsp1);
    check L315() else D113();
  L321():
    order19 = force? order18;
    checkMissing(order19);
    ar2 = ld ar;
    check L322() else D117();
  L335():
    order21 = force? order20;
    checkMissing(order21);
    c39 = `as.logical`(order21);
    if c39 then L336() else L69();
  D47():
    deopt 151 [demean1];
  D113():
    deopt 411 [xtsp1, r206];
  D117():
    deopt 428 [ar2];
  L55():
    coefs29 = ld coefs;
    check L286() else D97();
  L60():
    fit16 = ld fit;
    check L287() else D98();
  L64(r199):
    ___6 = ldf `%*%` in base;
    r202 = dyn ___6(r197, r199);
    check L306() else D106();
  L69():
    goto L70();
  L70():
    l27 = ld res;
    class__ = ldf `class<-`;
    check L352() else D137();
  L157():
    demean2 = force? demean1;
    checkMissing(demean2);
    c12 = `as.logical`(demean2);
    if c12 then L158() else L32();
  L268():
    coefs11 = ld coefs;
    check L269() else D91();
  L302():
    ar = ld ar;
    check L304() else D104();
  L303():
    r198 = dyn base26(1.0, <lang `-`(ar)>);
    goto L64(r198);
  L315():
    st resid = r206;
    l23 = ld resid;
    attr__1 = ldf `attr<-`;
    check L316() else D114();
  L322():
    ar3 = force? ar2;
    checkMissing(ar3);
    var_pred4 = ld `var.pred`;
    check L323() else D118();
  L336():
    acf = ldf acf;
    check L337() else D131();
  D91():
    deopt 335 [coefs11];
  D97():
    deopt 356 [coefs29];
  D98():
    deopt 362 [fit16];
  D104():
    deopt 389 [ar];
  D106():
    deopt 395 [r202];
  D114():
    deopt 416 ["ts", l23, "ts"];
  D118():
    deopt 431 [var_pred4];
  D131():
    deopt 472 [];
  D137():
    deopt 499 ["ar", l27, "ar"];
  L32():
    goto L33(0.0);
  L33(r81):
    st xm = r81;
    xm = ld xm;
    check L162() else D50();
  L158():
    mean = ldf mean;
    check L159() else D48();
  L269():
    coefs12 = force? coefs11;
    checkMissing(coefs12);
    c32 = `is.object`(coefs12);
    if c32 then L270() else L271(coefs12);
  L286():
    coefs30 = force? coefs29;
    checkMissing(coefs30);
    st ar = coefs30;
    st `x.mean` = 0.0;
    goto L60();
  L287():
    fit17 = force? fit16;
    checkMissing(fit17);
    c34 = `is.object`(fit17);
    if c34 then L289() else L290(fit17);
  L304():
    ar1 = force? ar;
    checkMissing(ar1);
    r200 = `-`(<missing>, ar1);
    c36 = ldf c in base;
    r201 = dyn c36(1.0, r200);
    check L305() else D105();
  L306():
    c37 = ldf c in base;
    r203 = dyn c37(r191, r202);
    check L307() else D107();
  L316():
    r207 = dyn attr__1(l23, NULL, "class", "ts");
    check L317() else D115();
  L323():
    var_pred5 = force? var_pred4;
    checkMissing(var_pred5);
    x_mean4 = ld `x.mean`;
    check L324() else D119();
  L337():
    p24 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      return x33;
    };
    p25 = prom<V +>{
      order22 = ld order;
      order23 = force? order22;
      checkMissing(order23);
      return order23;
    };
    r215 = dyn acf[, type, `lag.max`, plot](p24, "covariance", p25, FALSE);
    check L338() else D132();
  L352():
    r243 = dyn class__(l27, NULL, "ar");
    check L353() else D138();
  D48():
    deopt 154 [];
  D50():
    deopt 160 [xm];
  D105():
    deopt 393 [r201];
  D107():
    deopt 397 [r203];
  D115():
    deopt 419 ["ts", r207];
  D119():
    deopt 434 [x_mean4];
  D132():
    deopt 480 [r215];
  D138():
    deopt 501 ["ar", r243];
  L56(dx55):
    st ar = dx55;
    coefs20 = ld coefs;
    check L277() else D94();
  L159():
    p12 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r80 = dyn mean(p12);
    check L160() else D49();
  L162():
    xm1 = force? xm;
    checkMissing(xm1);
    l = ld coefs;
    c13 = `is.object`(l);
    if c13 then L163() else L164(xm1, l);
  L270():
    dr30 = tryDispatchBuiltin.1("[", coefs12);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L272() else L271(dr30);
  L271(coefs14):
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L273() else L274();
  L288(dx60):
    st `var.pred` = dx60;
    structure = ldf structure;
    check L292() else D99();
  L289():
    dr34 = tryDispatchBuiltin.1("$", fit17);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L291() else L290(dr34);
  L290(fit19):
    r185 = `$`(fit19, <sym sigma2>);
    goto L288(r185);
  L305():
    goto L64(r201);
  L307():
    goto L62(r203);
  L317():
    st resid = r207;
    goto L67();
  L324():
    x_mean5 = force? x_mean4;
    checkMissing(x_mean5);
    xaic9 = ld xaic;
    check L325() else D120();
  L338():
    c40 = `is.object`(r215);
    if c40 then L340() else L341(r215);
  L353():
    st res = r243;
    res = ld res;
    check L354() else D139();
  D49():
    deopt 156 [r80];
  D94():
    deopt 346 [coefs20];
  D99():
    deopt 367 [];
  D120():
    deopt 437 [xaic9];
  D139():
    deopt 503 [res];
  L34(dx1):
    st coefs = dx1;
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L166() else L167();
  L57(coefs17, r177):
    r179 = `-`(<missing>, r177);
    __5 = ldf `[` in base;
    r180 = dyn __5(coefs17, r179);
    goto L56(r180);
  L160():
    goto L33(r80);
  L163():
    dr = tryDispatchBuiltin.0("[<-", l, xm1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L165() else L164(xm1, dr);
  L164(xm3, l2):
    ___ = ldf `[<-` in base;
    r82 = dyn ___(l2, xm1, 1.0, 1);
    goto L34(r82);
  L272():
    dx54 = getTryDispatchBuiltinValue(dr30);
    goto L56(dx54);
  L273():
    coefs18 = ld coefs;
    check L275() else D92();
  L274():
    r176 = dyn base22(<sym coefs>);
    goto L57(coefs14, r176);
  L277():
    coefs21 = force? coefs20;
    checkMissing(coefs21);
    c33 = `is.object`(coefs21);
    if c33 then L278() else L279(coefs21);
  L291():
    dx59 = getTryDispatchBuiltinValue(dr34);
    goto L288(dx59);
  L292():
    p21 = prom<V +>{
      order12 = ld order;
      order13 = force? order12;
      checkMissing(order13);
      return order13;
    };
    r187 = dyn structure[, names](0.0, p21);
    check L293() else D100();
  L325():
    xaic10 = force? xaic9;
    checkMissing(xaic10);
    n_used20 = ld `n.used`;
    check L326() else D121();
  L339(dx62):
    st xacf = dx62;
    var_pred6 = ld `var.pred`;
    check L343() else D133();
  L340():
    dr36 = tryDispatchBuiltin.1("$", r215);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L342() else L341(dr36);
  L341(r217):
    r218 = `$`(r217, <sym acf>);
    goto L339(r218);
  L354():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D92():
    deopt 339 [coefs14, coefs18];
  D100():
    deopt 371 [r187];
  D121():
    deopt 440 [n_used20];
  D133():
    deopt 483 [var_pred6];
  L35(r84):
    n_used6 = ld `n.used`;
    check L171() else D54();
  L58(dx57):
    st `x.mean` = dx57;
    goto L60();
  L165():
    dx = getTryDispatchBuiltinValue(dr);
    goto L34(dx);
  L166():
    x21 = ld x;
    check L168() else D51();
  L167():
    r83 = dyn base12(<lang `^`(`(`(`-`(x, xm)), 2.0)>);
    goto L35(r83);
  L275():
    coefs19 = force? coefs18;
    checkMissing(coefs19);
    length1 = ldf length in base;
    r178 = dyn length1(coefs19);
    check L276() else D93();
  L278():
    dr32 = tryDispatchBuiltin.1("[", coefs21);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L280() else L279(dr32);
  L279(coefs23):
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L281() else L282();
  L293():
    st xaic = r187;
    goto L54();
  L326():
    n_used21 = force? n_used20;
    checkMissing(n_used21);
    n_used22 = ld `n.used`;
    check L327() else D122();
  L342():
    dx61 = getTryDispatchBuiltinValue(dr36);
    goto L339(dx61);
  L343():
    var_pred7 = force? var_pred6;
    checkMissing(var_pred7);
    n_used24 = ld `n.used`;
    check L344() else D134();
  D51():
    deopt 170 [x21];
  D54():
    deopt 177 [r84, n_used6];
  D93():
    deopt 342 [coefs14, r178];
  D122():
    deopt 443 [n_used22];
  D134():
    deopt 484 [var_pred7, n_used24];
  L59(coefs26, r182):
    __6 = ldf `[` in base;
    r184 = dyn __6(coefs26, r182);
    goto L58(r184);
  L168():
    x22 = force? x21;
    checkMissing(x22);
    xm6 = ld xm;
    check L169() else D52();
  L171():
    n_used7 = force? n_used6;
    checkMissing(n_used7);
    r88 = `/`(r84, n_used7);
    st var0 = r88;
    var0 = ld var0;
    check L172() else D55();
  L276():
    goto L57(coefs14, r178);
  L280():
    dx56 = getTryDispatchBuiltinValue(dr32);
    goto L58(dx56);
  L281():
    coefs27 = ld coefs;
    check L283() else D95();
  L282():
    r181 = dyn base23(<sym coefs>);
    goto L59(coefs23, r181);
  L327():
    n_used23 = force? n_used22;
    checkMissing(n_used23);
    order_max23 = ld `order.max`;
    check L328() else D123();
  L344():
    n_used25 = force? n_used24;
    checkMissing(n_used25);
    r219 = `/`(var_pred7, n_used25);
    solve = ldf solve;
    check L345() else D135();
  D52():
    deopt 171 [x22, xm6];
  D55():
    deopt 181 [var0];
  D95():
    deopt 350 [coefs23, coefs27];
  D123():
    deopt 446 [order_max23];
  D135():
    deopt 487 [r219];
  L169():
    xm7 = force? xm6;
    checkMissing(xm7);
    r85 = `-`(x22, xm7);
    r86 = `^`(r85, 2.0);
    sum = ldf sum in base;
    r87 = dyn sum(r86);
    check L170() else D53();
  L172():
    var1 = force? var0;
    checkMissing(var1);
    l3 = ld `var.pred`;
    c14 = `is.object`(l3);
    if c14 then L173() else L174(var1, l3);
  L283():
    coefs28 = force? coefs27;
    checkMissing(coefs28);
    length2 = ldf length in base;
    r183 = dyn length2(coefs28);
    check L284() else D96();
  L328():
    order_max24 = force? order_max23;
    checkMissing(order_max24);
    resid = ld resid;
    check L329() else D124();
  L345():
    p27 = prom<V +>{
      toeplitz = ldf toeplitz;
      p26 = prom<V +>{
        sym28 = ldf drop;
        base28 = ldf drop in base;
        guard28 = `==`.4(sym28, base28);
        if guard28 then L3() else L4();
      L0(r221):
        c41 = `is.object`(r221);
        if c41 then L5() else L6(r221);
      L3():
        xacf = ld xacf;
        xacf1 = force? xacf;
        checkMissing(xacf1);
        drop = ldf drop in base;
        r222 = dyn drop(xacf1);
        goto L0(r222);
      L4():
        r220 = dyn base28(<sym xacf>);
        goto L0(r220);
      L1(dx64):
        return dx64;
      L5():
        dr38 = tryDispatchBuiltin.1("[", r221);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L7() else L6(dr38);
      L6(r224):
        sym29 = ldf seq_len;
        base29 = ldf seq_len in base;
        guard29 = `==`.4(sym29, base29);
        if guard29 then L8() else L9();
      L2(r228, r229):
        __7 = ldf `[` in base;
        r231 = dyn __7(r228, r229);
        goto L1(r231);
      L7():
        dx63 = getTryDispatchBuiltinValue(dr38);
        goto L1(dx63);
      L8():
        order24 = ld order;
        order25 = force? order24;
        checkMissing(order25);
        r230 = seq_len(order25);
        goto L2(r224, r230);
      L9():
        r227 = dyn base29(<sym order>);
        goto L2(r224, r227);
      };
      r233 = dyn toeplitz(p26);
      return r233;
    };
    r235 = dyn solve(p27);
    check L346() else D136();
  D53():
    deopt 177 [r87];
  D96():
    deopt 353 [coefs23, r183];
  D124():
    deopt 451 [resid];
  D136():
    deopt 489 [r219, r235];
  L36(dx3):
    st `var.pred` = dx3;
    n_used8 = ld `n.used`;
    check L176() else D56();
  L170():
    goto L35(r87);
  L173():
    dr2 = tryDispatchBuiltin.0("[<-", l3, var1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L175() else L174(var1, dr2);
  L174(var3, l5):
    ___1 = ldf `[<-` in base;
    r89 = dyn ___1(l5, var1, 1);
    goto L36(r89);
  L284():
    goto L59(coefs23, r183);
  L329():
    resid1 = force? resid;
    checkMissing(resid1);
    series3 = ld series;
    check L330() else D125();
  L346():
    r236 = `*`(r219, r235);
    l24 = ld res;
    c42 = `is.object`(l24);
    if c42 then L348() else L349(r236, l24);
  D56():
    deopt 188 [n_used8];
  D125():
    deopt 456 [series3];
  L175():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx2);
  L176():
    n_used9 = force? n_used8;
    checkMissing(n_used9);
    sym13 = ldf log;
    base13 = ldf log in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L177() else L178();
  L330():
    series4 = force? series3;
    checkMissing(series4);
    xfreq = ld xfreq;
    check L331() else D126();
  L347(r240, dx66):
    st res = dx66;
    goto L70();
  L348():
    dr40 = tryDispatchBuiltin.0("$<-", l24, r236);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L350() else L349(r236, dr40);
  L349(r238, l26):
    r241 = `$<-`(l26, <sym asy.var.coef>, r236);
    goto L347(r238, r241);
  D126():
    deopt 459 [xfreq];
  L37(n_used12, r91):
    r93 = `*`(n_used12, r91);
    demean3 = ld demean;
    check L180() else D58();
  L177():
    var6 = ld var0;
    check L179() else D57();
  L178():
    r90 = dyn base13(<sym var0>);
    goto L37(n_used9, r90);
  L331():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    match_call = ldf `match.call`;
    check L332() else D127();
  L350():
    dx65 = getTryDispatchBuiltinValue(dr40);
    goto L347(r236, dx65);
  D57():
    deopt 190 [n_used9, var6];
  D58():
    deopt 194 [r93, 2.0, demean3];
  D127():
    deopt 463 [];
  L179():
    var7 = force? var6;
    checkMissing(var7);
    r92 = log(var7, 2.718281828459045);
    goto L37(n_used9, r92);
  L180():
    demean4 = force? demean3;
    checkMissing(demean4);
    r94 = `*`(2.0, demean4);
    r95 = `+`(r93, r94);
    r96 = `+`(r95, 2.0);
    n_used13 = ld `n.used`;
    check L181() else D59();
  L332():
    r211 = dyn match_call();
    check L333() else D128();
  D59():
    deopt 199 [r96, n_used13];
  D128():
    deopt 464 [r211];
  L181():
    n_used14 = force? n_used13;
    checkMissing(n_used14);
    r97 = `+`(r96, n_used14);
    n_used15 = ld `n.used`;
    check L182() else D60();
  L333():
    list = ldf list in base;
    r212 = dyn list(order19, ar3, var_pred5, x_mean5, xaic10, n_used21, n_used23, order_max24, NULL, resid1, "MLE", series4, xfreq1, r211);
    check L334() else D129();
  D60():
    deopt 201 [r97, n_used15];
  D129():
    deopt 467 [r212];
  L182():
    n_used16 = force? n_used15;
    checkMissing(n_used16);
    sym14 = ldf log;
    base14 = ldf log in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L183() else L184();
  L334():
    goto L68(r212);
  L38(r101, n_used19, r102):
    r104 = `*`(n_used19, r102);
    r105 = `+`(r101, r104);
    l6 = ld xaic;
    c15 = `is.object`(l6);
    if c15 then L185() else L186(r105, l6);
  L183():
    r103 = log(6.283185307179586, 2.718281828459045);
    goto L38(r97, n_used16, r103);
  L184():
    r100 = dyn base14(<lang `*`(2.0, pi)>);
    goto L38(r97, n_used16, r100);
  L39(dx5):
    st xaic = dx5;
    sym15 = ldf seq_len;
    base15 = ldf seq_len in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L188() else L189();
  L185():
    dr4 = tryDispatchBuiltin.0("[<-", l6, r105);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L187() else L186(r105, dr4);
  L186(r107, l8):
    ___2 = ldf `[<-` in base;
    r110 = dyn ___2(l8, r105, 1);
    goto L39(r110);
  L40(r112):
    s = toForSeq(r112);
    l9 = length(s);
    i = 0;
    goto L41(i);
  L187():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L39(dx4);
  L188():
    order_max15 = ld `order.max`;
    check L190() else D61();
  L189():
    r111 = dyn base15(<sym order.max>);
    goto L40(r111);
  D61():
    deopt 214 [order_max15];
  L41(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l9, i2);
    if c16 then L191() else L48();
  L190():
    order_max16 = force? order_max15;
    checkMissing(order_max16);
    r113 = seq_len(order_max16);
    goto L40(r113);
  L48():
    x23 = `[[`(s, i2, NULL, TRUE);
    st i = x23;
    arima0 = ldf arima0;
    check L192() else D62();
  L191():
    setNames = ldf setNames;
    check L232() else D74();
  D62():
    deopt 218 [i2];
  D74():
    deopt 272 [];
  L192():
    p13 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    p14 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r116):
      return r116;
    L1():
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      c17 = ldf c in base;
      r117 = dyn c17(i6, 0, 0);
      goto L0(r117);
    L2():
      r115 = dyn base16(<sym i>, 0, 0);
      goto L0(r115);
    };
    p15 = prom<V +>{
      demean5 = ld demean;
      demean6 = force? demean5;
      checkMissing(demean6);
      return demean6;
    };
    r120 = dyn arima0[, order, `include.mean`](p13, p14, p15);
    check L193() else D63();
  L232():
    p16 = prom<V +>{
      xaic = ld xaic;
      xaic1 = force? xaic;
      checkMissing(xaic1);
      sym19 = ldf min;
      base19 = ldf min in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(xaic4, r143):
      r145 = `-`(xaic4, r143);
      return r145;
    L1():
      xaic5 = ld xaic;
      xaic6 = force? xaic5;
      checkMissing(xaic6);
      min1 = ldf min in base;
      r144 = dyn min1(xaic6);
      goto L0(xaic1, r144);
    L2():
      r142 = dyn base19(<sym xaic>);
      goto L0(xaic1, r142);
    };
    p17 = prom<V +>{
      order_max17 = ld `order.max`;
      order_max18 = force? order_max17;
      checkMissing(order_max18);
      r147 = `:`(0, order_max18);
      return r147;
    };
    r149 = dyn setNames(p16, p17);
    check L233() else D75();
  D63():
    deopt 224 [i2, r120];
  D75():
    deopt 275 [r149];
  L193():
    st fit = r120;
    fit = ld fit;
    check L194() else D64();
  L233():
    st xaic = r149;
    order_max19 = ld `order.max`;
    check L234() else D76();
  D64():
    deopt 226 [i2, fit];
  D76():
    deopt 278 [0, order_max19];
  L194():
    fit1 = force? fit;
    checkMissing(fit1);
    c18 = `is.object`(fit1);
    if c18 then L196() else L197(i2, fit1);
  L234():
    order_max20 = force? order_max19;
    checkMissing(order_max20);
    r150 = `:`(0, order_max20);
    c25 = `is.object`(r150);
    if c25 then L235() else L236(r150);
  L49(dx44):
    st order = dx44;
    coefs = ld coefs;
    check L239() else D78();
  L195(i10, dx7):
    c19 = `is.object`(dx7);
    if c19 then L199() else L200(i10, dx7);
  L196():
    dr6 = tryDispatchBuiltin.1("$", fit1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L198() else L197(i2, dr6);
  L197(i8, fit3):
    r121 = `$`(fit3, <sym coef>);
    goto L195(i8, r121);
  L235():
    dr20 = tryDispatchBuiltin.1("[", r150);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L237() else L236(dr20);
  L236(r152):
    xaic7 = ld xaic;
    check L238() else D77();
  D77():
    deopt 281 [r152, xaic7];
  D78():
    deopt 287 [coefs];
  L42(i14, dx11):
    l10 = ld coefs;
    c20 = `is.object`(l10);
    if c20 then L206() else L207(i14, dx11, l10);
  L198():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L195(i2, dx6);
  L199():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L201() else L200(i10, dr8);
  L200(i12, dx9):
    sym17 = ldf seq_len;
    base17 = ldf seq_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L202() else L203();
  L237():
    dx43 = getTryDispatchBuiltinValue(dr20);
    goto L49(dx43);
  L238():
    xaic8 = force? xaic7;
    checkMissing(xaic8);
    r153 = `==`(xaic8, 0);
    __1 = ldf `[` in base;
    r154 = dyn __1(r152, r153);
    goto L49(r154);
  L239():
    coefs1 = force? coefs;
    checkMissing(coefs1);
    c26 = `is.object`(coefs1);
    if c26 then L240() else L241(coefs1);
  L43(i17, dx14, r123):
    __ = ldf `[` in base;
    r126 = dyn __(dx14, r123);
    goto L42(i17, r126);
  L44(i23, dx20):
    st coefs = dx20;
    fit4 = ld fit;
    check L214() else D70();
  L50(dx46):
    st ar = dx46;
    coefs7 = ld coefs;
    check L247() else D81();
  L201():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L42(i10, dx10);
  L202():
    i18 = ld i;
    check L204() else D65();
  L203():
    r122 = dyn base17(<lang `+`(i, demean)>);
    goto L43(i12, dx9, r122);
  L206():
    dr10 = tryDispatchBuiltin.0("[<-", l10, dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L208() else L207(i14, dx11, dr10);
  L207(i21, dx16, l12):
    i24 = ld i;
    check L209() else D67();
  L240():
    dr22 = tryDispatchBuiltin.1("[", coefs1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L242() else L241(dr22);
  L241(coefs3):
    order = ld order;
    check L243() else D79();
  D65():
    deopt 230 [i12, dx9, i18];
  D67():
    deopt 237 [i21, dx16, l12, dx11, i24];
  D70():
    deopt 248 [i23, fit4];
  D79():
    deopt 289 [coefs3, order];
  D81():
    deopt 298 [coefs7];
  L204():
    i19 = force? i18;
    checkMissing(i19);
    demean7 = ld demean;
    check L205() else D66();
  L208():
    dx18 = getTryDispatchBuiltinValue(dr10);
    goto L44(i14, dx18);
  L209():
    i25 = force? i24;
    checkMissing(i25);
    r127 = `+`(i25, 1);
    sym18 = ldf seq_len;
    base18 = ldf seq_len in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L210() else L211();
  L214():
    fit5 = force? fit4;
    checkMissing(fit5);
    c21 = `is.object`(fit5);
    if c21 then L216() else L217(i23, fit5);
  L242():
    dx45 = getTryDispatchBuiltinValue(dr22);
    goto L50(dx45);
  L243():
    order1 = force? order;
    checkMissing(order1);
    r155 = `+`(order1, 1);
    sym20 = ldf seq_len;
    base20 = ldf seq_len in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L244() else L245();
  L247():
    coefs8 = force? coefs7;
    checkMissing(coefs8);
    c27 = `is.object`(coefs8);
    if c27 then L248() else L249(coefs8);
  D66():
    deopt 231 [i12, dx9, i19, demean7];
  L45(i28, dx25, l15, dx26, r131, r132):
    ___3 = ldf `[<-` in base;
    r135 = dyn ___3(l15, dx26, r131, r132);
    goto L44(i28, r135);
  L51(coefs6, r159, r160):
    __2 = ldf `[` in base;
    r162 = dyn __2(coefs6, r159, r160);
    goto L50(r162);
  L52(dx48):
    st `x.mean` = dx48;
    var_pred = ld `var.pred`;
    check L253() else D84();
  L205():
    demean8 = force? demean7;
    checkMissing(demean8);
    r124 = `+`(i19, demean8);
    r125 = seq_len(r124);
    goto L43(i12, dx9, r125);
  L210():
    i29 = ld i;
    check L212() else D68();
  L211():
    r130 = dyn base18(<lang `+`(i, demean)>);
    goto L45(i21, dx16, l12, dx11, r127, r130);
  L215(i34, dx28):
    l16 = ld xaic;
    c22 = `is.object`(l16);
    if c22 then L219() else L220(i34, dx28, l16);
  L216():
    dr12 = tryDispatchBuiltin.1("$", fit5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L218() else L217(i23, dr12);
  L217(i32, fit7):
    r136 = `$`(fit7, <sym aic>);
    goto L215(i32, r136);
  L244():
    order2 = ld order;
    check L246() else D80();
  L245():
    r158 = dyn base20(<sym order>);
    goto L51(coefs3, r155, r158);
  L248():
    dr24 = tryDispatchBuiltin.1("[", coefs8);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L250() else L249(dr24);
  L249(coefs10):
    order4 = ld order;
    check L251() else D82();
  D68():
    deopt 241 [i21, dx16, l12, dx11, r127, i29];
  D80():
    deopt 293 [coefs3, r155, order2];
  D82():
    deopt 300 [coefs10, order4];
  D84():
    deopt 309 [var_pred];
  L46(i38, dx34):
    st xaic = dx34;
    fit8 = ld fit;
    check L223() else D72();
  L212():
    i30 = force? i29;
    checkMissing(i30);
    demean9 = ld demean;
    check L213() else D69();
  L218():
    dx27 = getTryDispatchBuiltinValue(dr12);
    goto L215(i23, dx27);
  L219():
    dr14 = tryDispatchBuiltin.0("[<-", l16, dx28);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L221() else L220(i34, dx28, dr14);
  L220(i36, dx30, l18):
    i39 = ld i;
    check L222() else D71();
  L246():
    order3 = force? order2;
    checkMissing(order3);
    r161 = seq_len(order3);
    goto L51(coefs3, r155, r161);
  L250():
    dx47 = getTryDispatchBuiltinValue(dr24);
    goto L52(dx47);
  L251():
    order5 = force? order4;
    checkMissing(order5);
    r163 = `+`(order5, 1);
    order6 = ld order;
    check L252() else D83();
  L253():
    var_pred1 = force? var_pred;
    checkMissing(var_pred1);
    c28 = `is.object`(var_pred1);
    if c28 then L254() else L255(var_pred1);
  D69():
    deopt 242 [i21, dx16, l12, dx11, r127, i30, demean9];
  D71():
    deopt 252 [i36, dx30, l18, dx28, i39];
  D72():
    deopt 258 [i38, fit8];
  D83():
    deopt 303 [coefs10, r163, order6];
  L53(dx50):
    st `var.pred` = dx50;
    goto L54();
  L213():
    demean10 = force? demean9;
    checkMissing(demean10);
    r133 = `+`(i30, demean10);
    r134 = seq_len(r133);
    goto L45(i21, dx16, l12, dx11, r127, r134);
  L221():
    dx32 = getTryDispatchBuiltinValue(dr14);
    goto L46(i34, dx32);
  L222():
    i40 = force? i39;
    checkMissing(i40);
    r137 = `+`(i40, 1);
    ___4 = ldf `[<-` in base;
    r138 = dyn ___4(l18, dx28, r137);
    goto L46(i36, r138);
  L223():
    fit9 = force? fit8;
    checkMissing(fit9);
    c23 = `is.object`(fit9);
    if c23 then L225() else L226(i38, fit9);
  L252():
    order7 = force? order6;
    checkMissing(order7);
    r164 = `+`(order7, 1);
    __3 = ldf `[` in base;
    r165 = dyn __3(coefs10, r163, r164);
    goto L52(r165);
  L254():
    dr26 = tryDispatchBuiltin.1("[", var_pred1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L256() else L255(dr26);
  L255(var_pred3):
    order8 = ld order;
    check L257() else D85();
  D85():
    deopt 311 [var_pred3, order8];
  L224(i44, dx36):
    l19 = ld `var.pred`;
    c24 = `is.object`(l19);
    if c24 then L228() else L229(i44, dx36, l19);
  L225():
    dr16 = tryDispatchBuiltin.1("$", fit9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L227() else L226(i38, dr16);
  L226(i42, fit11):
    r139 = `$`(fit11, <sym sigma2>);
    goto L224(i42, r139);
  L256():
    dx49 = getTryDispatchBuiltinValue(dr26);
    goto L53(dx49);
  L257():
    order9 = force? order8;
    checkMissing(order9);
    r166 = `+`(order9, 1);
    __4 = ldf `[` in base;
    r167 = dyn __4(var_pred3, r166);
    goto L53(r167);
  L47(i48, dx42):
    st `var.pred` = dx42;
    goto L41(i48);
  L227():
    dx35 = getTryDispatchBuiltinValue(dr16);
    goto L224(i38, dx35);
  L228():
    dr18 = tryDispatchBuiltin.0("[<-", l19, dx36);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L230() else L229(i44, dx36, dr18);
  L229(i46, dx38, l21):
    i49 = ld i;
    check L231() else D73();
  D73():
    deopt 262 [i46, dx38, l21, dx36, i49];
  L230():
    dx40 = getTryDispatchBuiltinValue(dr18);
    goto L47(i44, dx40);
  L231():
    i50 = force? i49;
    checkMissing(i50);
    r140 = `+`(i50, 1);
    ___5 = ldf `[<-` in base;
    r141 = dyn ___5(l21, dx36, r140);
    goto L47(i46, r141);
  }
}