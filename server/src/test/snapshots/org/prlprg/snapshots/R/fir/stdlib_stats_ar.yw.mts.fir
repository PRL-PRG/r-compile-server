fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2484640021;
    st `ar.yw.mts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2484640021(x, aic, `order.max`, `na.action`, demean, series, `var.method`, `...`) {
  (reg x:*, reg aic:*, reg order_max:*, reg na_action:*, reg demean:*, reg series:*, reg var_method:*, reg ddd:dots) -+> V { var x:*, var aic:*, reg aic_isMissing:L, reg aic_orDefault:*, var `order.max`:*, reg order_max_isMissing:L, reg order_max_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var series:*, reg series_isMissing:L, reg series_orDefault:*, var `var.method`:*, reg var_method_isMissing:L, reg var_method_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg series1:*, reg series2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r10:V, reg c2:L, reg tsp:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r12:V, reg na_action1:cls, reg as_ts:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg is_na:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg r27:V, reg x9:*, reg x10:V, reg c3:L, reg r29:V, reg dr:V, reg dc:L, reg dx:V, reg r31:V, reg dx1:V, reg __:cls, reg r32:V, reg is_na1:cls, reg r33:V, reg r34:V, reg any:cls, reg r35:V, reg c4:L, reg stop:cls, reg r36:V, reg ists:*, reg ists1:V, reg c5:L, reg tsp1:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r39:V, reg frequency:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r42:V, reg as_matrix:cls, reg x17:*, reg x18:V, reg p8:p(V +), reg r44:V, reg ncol:cls, reg x19:*, reg x20:V, reg p9:p(V +), reg r46:V, reg nrow:cls, reg x21:*, reg x22:V, reg p10:p(V +), reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg x23:*, reg x24:V, reg c6:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r53:V, reg is_na2:cls, reg r54:V, reg r55:V, reg sum:cls, reg r56:V, reg demean1:*, reg demean2:V, reg c7:L, reg colMeans:cls, reg x27:*, reg x28:V, reg p11:p(V +), reg r58:V, reg sweep:cls, reg x29:*, reg x30:V, reg p12:p(V +), reg x_mean:*, reg x_mean1:V, reg p13:p(V +), reg r61:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg rep:cls, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg ____:cls, reg order_max1:*, reg order_max2:V, reg p14:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:R, reg r73:V, reg n_obs:*, reg n_obs1:V, reg log10:cls, reg r74:V, reg r75:V, reg p15:p(V +), reg r77:V, reg r78:V, reg order_max3:*, reg order_max4:V, reg r79:V, reg c8:L, reg stop1:cls, reg r80:V, reg acf:cls, reg x31:*, reg x32:V, reg p16:p(V +), reg order_max5:*, reg order_max6:V, reg p17:p(V +), reg na_pass:*, reg na_pass1:V, reg p18:p(V +), reg r85:V, reg c9:L, reg r87:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r88:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:V, reg C_multi_yw:*, reg C_multi_yw1:V, reg aperm:cls, reg xacf:*, reg xacf1:V, reg p19:p(V +), reg p20:p(V +), reg r93:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r94:V, reg r95:V, reg n_obs2:*, reg n_obs3:V, reg as_integer:cls, reg r96:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r97:V, reg r98:V, reg order_max7:*, reg order_max8:V, reg as_integer1:cls, reg r99:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r100:V, reg r101:V, reg nser:*, reg nser1:V, reg as_integer2:cls, reg r102:V, reg double:cls, reg order_max9:*, reg order_max10:V, reg r103:V, reg nser2:*, reg nser3:V, reg r104:V, reg nser4:*, reg nser5:V, reg r105:V, reg p21:p(V +), reg r107:V, reg double1:cls, reg order_max11:*, reg order_max12:V, reg r108:V, reg nser6:*, reg nser7:V, reg r109:V, reg nser8:*, reg nser9:V, reg r110:V, reg p22:p(V +), reg r112:V, reg double2:cls, reg order_max13:*, reg order_max14:V, reg r113:V, reg nser10:*, reg nser11:V, reg r114:V, reg nser12:*, reg nser13:V, reg r115:V, reg p23:p(V +), reg r117:V, reg double3:cls, reg order_max15:*, reg order_max16:V, reg r118:V, reg p24:p(V +), reg r120:V, reg integer:cls, reg r121:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r122:V, reg r123:V, reg aic1:*, reg aic2:V, reg as_integer3:cls, reg r124:V, reg _C:cls, reg r125:V, reg aperm1:cls, reg array:cls, reg z:*, reg z1:V, reg c10:L, reg z3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r126:V, reg p25:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r128:V, reg r129:V, reg nser14:*, reg nser15:V, reg nser16:*, reg nser17:V, reg order_max17:*, reg order_max18:V, reg r130:V, reg c11:cls, reg r131:V, reg p26:p(V +), reg r133:V, reg p27:p(V +), reg p28:p(V +), reg r136:V, reg c12:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r139:V, reg aperm2:cls, reg array1:cls, reg z4:*, reg z5:V, reg c13:L, reg z7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r140:V, reg p29:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r142:V, reg r143:V, reg nser18:*, reg nser19:V, reg nser20:*, reg nser21:V, reg order_max19:*, reg order_max20:V, reg r144:V, reg c14:cls, reg r145:V, reg p30:p(V +), reg r147:V, reg p31:p(V +), reg p32:p(V +), reg r150:V, reg setNames:cls, reg z8:*, reg z9:V, reg c15:L, reg z11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r151:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r152:V, reg dx16:V, reg r153:V, reg z12:*, reg z13:V, reg c16:L, reg dx18:V, reg z15:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg dx22:V, reg r154:V, reg min:cls, reg r155:V, reg r156:V, reg p33:p(V +), reg order_max21:*, reg order_max22:V, reg r158:V, reg p34:p(V +), reg r160:V, reg z16:*, reg z17:V, reg c17:L, reg z19:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg r161:V, reg x33:*, reg x34:V, reg order:*, reg order1:V, reg r162:V, reg c18:L, reg aperm3:cls, reg array2:cls, reg z20:*, reg z21:V, reg c19:L, reg z23:V, reg dr18:V, reg dc9:L, reg dx25:V, reg dx26:V, reg r163:V, reg p35:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r165:V, reg r166:V, reg nser22:*, reg nser23:V, reg nser24:*, reg nser25:V, reg order_max23:*, reg order_max24:V, reg r167:V, reg c20:cls, reg r168:V, reg p36:p(V +), reg r170:V, reg p37:p(V +), reg p38:p(V +), reg r173:V, reg c21:L, reg r175:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg order2:*, reg order3:V, reg r176:V, reg r177:V, reg __3:cls, reg r178:V, reg r179:V, reg order4:*, reg order5:V, reg r180:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c22:L, reg x35:V, reg resid:*, reg resid1:V, reg c23:L, reg i6:I, reg resid3:V, reg dr22:V, reg dc11:L, reg dx29:V, reg i8:I, reg dx30:V, reg order6:*, reg order7:V, reg r181:V, reg r182:V, reg __4:cls, reg r183:V, reg x36:*, reg x37:V, reg c24:L, reg i10:I, reg dx32:V, reg x39:V, reg dr24:V, reg dc12:L, reg dx34:V, reg i12:I, reg dx35:V, reg dx36:V, reg order8:*, reg order9:V, reg i13:*, reg i14:V, reg r184:V, reg r185:V, reg n_used:*, reg n_used1:V, reg i15:*, reg i16:V, reg r186:V, reg r187:V, reg __5:cls, reg r188:V, reg t:cls, reg ar:*, reg ar1:V, reg c25:L, reg dr26:V, reg dc13:L, reg dx37:V, reg dx38:V, reg i17:*, reg i18:V, reg __6:cls, reg r189:V, reg p39:p(V +), reg r191:V, reg ___:cls, reg r192:V, reg r193:V, reg l1:*, reg c26:L, reg i20:I, reg r195:V, reg l3:*, reg dr28:V, reg dc14:L, reg dx39:V, reg i22:I, reg dx40:V, reg order10:*, reg order11:V, reg r198:V, reg r199:V, reg ___1:cls, reg r200:V, reg l4:*, reg c27:L, reg r202:L, reg l6:*, reg dr30:V, reg dc15:L, reg dx41:V, reg r204:L, reg dx42:V, reg order12:*, reg order13:V, reg r205:V, reg ___2:cls, reg r206:V, reg array3:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r208:V, reg r209:V, reg nser26:*, reg nser27:V, reg nser28:*, reg nser29:V, reg c28:cls, reg r210:V, reg p40:p(V +), reg r212:V, reg var_pred:*, reg var_pred1:V, reg c29:L, reg var_pred3:V, reg dr32:V, reg dc16:L, reg dx43:V, reg dx44:V, reg order14:*, reg order15:V, reg r213:V, reg __7:cls, reg r214:V, reg n_obs4:*, reg n_obs5:V, reg r215:V, reg n_obs6:*, reg n_obs7:V, reg nser30:*, reg nser31:V, reg demean3:*, reg demean4:V, reg order16:*, reg order17:V, reg r216:V, reg r217:V, reg r218:V, reg r219:V, reg ists2:*, reg ists3:V, reg c30:L, reg xtsp:*, reg xtsp1:V, reg l7:*, reg attr__:cls, reg r220:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r221:V, reg r222:V, reg c31:cls, reg r223:V, reg l8:*, reg attr__1:cls, reg r224:V, reg colnames:cls, reg x40:*, reg x41:V, reg p41:p(V +), reg r227:V, reg snames:*, reg snames1:V, reg l9:*, reg colnames__:cls, reg r228:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r229:V, reg r230:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r231:V, reg r232:V, reg order18:*, reg order19:V, reg r233:I, reg snames2:*, reg snames3:V, reg snames4:*, reg snames5:V, reg list:cls, reg r234:V, reg l10:*, reg dimnames__:cls, reg r235:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r236:V, reg r237:V, reg snames6:*, reg snames7:V, reg snames8:*, reg snames9:V, reg list1:cls, reg r238:V, reg l11:*, reg dimnames__1:cls, reg r239:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r240:V, reg r241:V, reg order_max25:*, reg order_max26:V, reg r242:V, reg snames10:*, reg snames11:V, reg snames12:*, reg snames13:V, reg list2:cls, reg r243:V, reg l12:*, reg dimnames__2:cls, reg r244:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r245:V, reg r246:V, reg order20:*, reg order21:V, reg ar4:*, reg ar5:V, reg var_pred4:*, reg var_pred5:V, reg x_mean2:*, reg x_mean3:V, reg xaic:*, reg xaic1:V, reg n_used2:*, reg n_used3:V, reg n_obs8:*, reg n_obs9:V, reg order_max27:*, reg order_max28:V, reg partialacf:*, reg partialacf1:V, reg resid4:*, reg resid5:V, reg series3:*, reg series4:V, reg xfreq:*, reg xfreq1:V, reg match_call:cls, reg r247:V, reg list3:cls, reg r248:V, reg l13:*, reg class__:cls, reg r249:V, reg res:*, reg res1:V |
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
    if guard then L53() else L54();
  L7(r2):
    c1 = `as.logical`(r2);
    if c1 then L56() else L8();
  L53():
    series1 = ld series;
    check L55() else D0();
  L54():
    r1 = dyn base(<sym series>);
    goto L7(r1);
  D0():
    deopt 1 [series1];
  L8():
    goto L9();
  L9():
    is_ts = ldf `is.ts`;
    check L60() else D3();
  L55():
    series2 = force? series1;
    checkMissing(series2);
    c = `==`(series2, NULL);
    goto L7(c);
  L56():
    deparse1 = ldf deparse1;
    check L57() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L57():
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
    check L58() else D2();
  L60():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn is_ts(p2);
    check L61() else D4();
  D2():
    deopt 7 [r7];
  D4():
    deopt 14 [r10];
  L58():
    st series = r7;
    goto L9();
  L61():
    st ists = r10;
    c2 = `as.logical`(r10);
    if c2 then L62() else L10();
  L10():
    goto L11();
  L11():
    na_action1 = ldf `na.action`;
    check L66() else D7();
  L62():
    tsp = ldf tsp;
    check L63() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 24 [];
  L63():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn tsp(p3);
    check L64() else D6();
  L66():
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
    check L67() else D8();
  D6():
    deopt 19 [r12];
  D8():
    deopt 26 [r17];
  L64():
    st xtsp = r12;
    goto L11();
  L67():
    st x = r17;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L12(r19):
    c4 = `as.logical`(r19);
    if c4 then L82() else L16();
  L68():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L70() else L71();
  L69():
    r18 = dyn base2(<lang `!=`(is.na(x), is.na(`[`(x, , 1.0)))>);
    goto L12(r18);
  L13(r21):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L16():
    goto L17();
  L17():
    ists = ld ists;
    check L86() else D16();
  L70():
    x7 = ld x;
    check L72() else D9();
  L71():
    r20 = dyn base3(<sym x>);
    goto L13(r20);
  L82():
    stop = ldf stop;
    check L83() else D14();
  D9():
    deopt 32 [x7];
  D14():
    deopt 49 [];
  D16():
    deopt 54 [ists];
  L14(r26, r27):
    r34 = `!=`(r26, r27);
    any = ldf any in base;
    r35 = dyn any(r34);
    check L81() else D13();
  L72():
    x8 = force? x7;
    checkMissing(x8);
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(x8);
    check L73() else D10();
  L74():
    x9 = ld x;
    check L76() else D11();
  L75():
    r25 = dyn base4(<lang `[`(x, , 1.0)>);
    goto L14(r21, r25);
  L83():
    r36 = dyn stop("NAs in 'x' must be the same row-wise");
    check L84() else D15();
  L86():
    ists1 = force? ists;
    checkMissing(ists1);
    c5 = `as.logical`(ists1);
    if c5 then L87() else L18();
  D10():
    deopt 35 [r22];
  D11():
    deopt 37 [r21, x9];
  D13():
    deopt 47 [r35];
  D15():
    deopt 51 [r36];
  L18():
    goto L19();
  L19():
    frequency = ldf frequency;
    check L91() else D19();
  L73():
    goto L13(r22);
  L76():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L77() else L78(r21);
  L81():
    goto L12(r35);
  L84():
    goto L17();
  L87():
    tsp1 = ldf tsp;
    check L88() else D17();
  D17():
    deopt 57 [];
  D19():
    deopt 64 [];
  L15(r31, dx1):
    is_na1 = ldf `is.na` in base;
    r33 = dyn is_na1(dx1);
    check L80() else D12();
  L77():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L79() else L78(r21);
  L78(r29):
    __ = ldf `[` in base;
    r32 = dyn __(x10, <missing>, 1.0);
    goto L15(r29, r32);
  L88():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r39 = dyn tsp1(p6);
    check L89() else D18();
  L91():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r42 = dyn frequency(p7);
    check L92() else D20();
  D12():
    deopt 44 [r31, r33];
  D18():
    deopt 59 [r39];
  D20():
    deopt 66 [r42];
  L79():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(r21, dx);
  L80():
    goto L14(r31, r33);
  L89():
    st xtsp = r39;
    goto L19();
  L92():
    st xfreq = r42;
    as_matrix = ldf `as.matrix`;
    check L93() else D21();
  D21():
    deopt 69 [];
  L93():
    p8 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r44 = dyn as_matrix(p8);
    check L94() else D22();
  D22():
    deopt 71 [r44];
  L94():
    st x = r44;
    ncol = ldf ncol;
    check L95() else D23();
  D23():
    deopt 74 [];
  L95():
    p9 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r46 = dyn ncol(p9);
    check L96() else D24();
  D24():
    deopt 76 [r46];
  L96():
    st nser = r46;
    nrow = ldf nrow;
    check L97() else D25();
  D25():
    deopt 79 [];
  L97():
    p10 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r48 = dyn nrow(p10);
    check L98() else D26();
  D26():
    deopt 81 [r48];
  L98():
    st `n.used` = r48;
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L20(r50):
    st `n.obs` = r50;
    demean1 = ld demean;
    check L109() else D30();
  L99():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L100():
    r49 = dyn base5(<lang `!`(is.na(`[`(x, , 1.0)))>);
    goto L20(r49);
  D30():
    deopt 99 [demean1];
  L21(r52):
    r55 = `!`(r52);
    sum = ldf sum in base;
    r56 = dyn sum(r55);
    check L108() else D29();
  L101():
    x23 = ld x;
    check L103() else D27();
  L102():
    r51 = dyn base6(<lang `[`(x, , 1.0)>);
    goto L21(r51);
  L109():
    demean2 = force? demean1;
    checkMissing(demean2);
    c7 = `as.logical`(demean2);
    if c7 then L110() else L23();
  D27():
    deopt 87 [x23];
  D29():
    deopt 97 [r56];
  L23():
    sym7 = ldf rep;
    base7 = ldf rep in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L116() else L117();
  L24():
    sym8 = ldf floor;
    base8 = ldf floor in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  L103():
    x24 = force? x23;
    checkMissing(x24);
    c6 = `is.object`(x24);
    if c6 then L104() else L105();
  L108():
    goto L20(r56);
  L110():
    colMeans = ldf colMeans;
    check L111() else D31();
  D31():
    deopt 102 [];
  L22(dx3):
    is_na2 = ldf `is.na` in base;
    r54 = dyn is_na2(dx3);
    check L107() else D28();
  L25(r64):
    st `x.mean` = r64;
    goto L24();
  L26(r67):
    st `order.max` = r67;
    order_max3 = ld `order.max`;
    check L122() else D37();
  L104():
    dr2 = tryDispatchBuiltin.1("[", x24);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L106() else L105();
  L105():
    __1 = ldf `[` in base;
    r53 = dyn __1(x24, <missing>, 1.0);
    goto L22(r53);
  L111():
    p11 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    r58 = dyn colMeans[, `na.rm`](p11, TRUE);
    check L112() else D32();
  L116():
    rep = ldf rep in base;
    r65 = dyn rep(0.0, <sym nser>);
    goto L25(r65);
  L117():
    r63 = dyn base7(0.0, <sym nser>);
    goto L25(r63);
  L118():
    ____ = ldf `%||%`;
    check L120() else D35();
  L119():
    r66 = dyn base8(<lang `%||%`(order.max, `(`(`*`(10.0, log10(n.obs))))>);
    goto L26(r66);
  D28():
    deopt 94 [r54];
  D32():
    deopt 106 [r58];
  D35():
    deopt 123 [];
  D37():
    deopt 129 [order_max3];
  L106():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx2);
  L107():
    goto L21(r54);
  L112():
    st `x.mean` = r58;
    sweep = ldf sweep;
    check L113() else D33();
  L120():
    p14 = prom<V +>{
      order_max1 = ld `order.max`;
      order_max2 = force? order_max1;
      checkMissing(order_max2);
      return order_max2;
    };
    p15 = prom<V +>{
      sym9 = ldf log10;
      base9 = ldf log10 in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r72, r73):
      r75 = `*`(r72, r73);
      visible.0();
      return r75;
    L1():
      n_obs = ld `n.obs`;
      n_obs1 = force? n_obs;
      checkMissing(n_obs1);
      log10 = ldf log10 in base;
      r74 = dyn log10(n_obs1);
      goto L0(10.0, r74);
    L2():
      r71 = dyn base9(<sym n.obs>);
      goto L0(10.0, r71);
    };
    r77 = dyn ____(p14, p15);
    check L121() else D36();
  L122():
    order_max4 = force? order_max3;
    checkMissing(order_max4);
    r79 = `<`(order_max4, 1);
    c8 = `as.logical`(r79);
    if c8 then L123() else L27();
  D33():
    deopt 109 [];
  D36():
    deopt 126 [r77];
  L27():
    goto L28();
  L28():
    acf = ldf acf;
    check L127() else D40();
  L113():
    p12 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p13 = prom<V +>{
      x_mean = ld `x.mean`;
      x_mean1 = force? x_mean;
      checkMissing(x_mean1);
      return x_mean1;
    };
    r61 = dyn sweep[, , , `check.margin`](p12, 2, p13, FALSE);
    check L114() else D34();
  L121():
    r78 = floor(r77);
    goto L26(r78);
  L123():
    stop1 = ldf stop;
    check L124() else D38();
  D34():
    deopt 115 [r61];
  D38():
    deopt 134 [];
  D40():
    deopt 140 [];
  L114():
    st x = r61;
    goto L24();
  L124():
    r80 = dyn stop1("'order.max' must be >= 1");
    check L125() else D39();
  L127():
    p16 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p17 = prom<V +>{
      order_max5 = ld `order.max`;
      order_max6 = force? order_max5;
      checkMissing(order_max6);
      return order_max6;
    };
    p18 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r85 = dyn acf[, type, plot, `lag.max`, `na.action`](p16, "cov", FALSE, p17, p18);
    check L128() else D41();
  D39():
    deopt 136 [r80];
  D41():
    deopt 150 [r85];
  L125():
    goto L28();
  L128():
    c9 = `is.object`(r85);
    if c9 then L130() else L131(r85);
  L129(dx5):
    st xacf = dx5;
    sym10 = ldf `.C`;
    base10 = ldf `.C` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  L130():
    dr4 = tryDispatchBuiltin.1("$", r85);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L132() else L131(dr4);
  L131(r87):
    r88 = `$`(r87, <sym acf>);
    goto L129(r88);
  L29(r90):
    st z = r90;
    aperm1 = ldf aperm;
    check L165() else D64();
  L132():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L129(dx4);
  L133():
    C_multi_yw = ld C_multi_yw;
    check L135() else D42();
  L134():
    r89 = dyn base10[, , , , , coefs, pacf, var, aic, order, ](<sym C_multi_yw>, <lang aperm(xacf, `:`(3.0, 1.0))>, <lang as.integer(n.obs)>, <lang as.integer(order.max)>, <lang as.integer(nser)>, <lang double(`*`(`*`(`(`(`+`(1, order.max)), nser), nser))>, <lang double(`*`(`*`(`(`(`+`(1, order.max)), nser), nser))>, <lang double(`*`(`*`(`(`(`+`(1, order.max)), nser), nser))>, <lang double(`+`(1, order.max))>, <lang integer(1)>, <lang as.integer(aic)>);
    goto L29(r89);
  D42():
    deopt 155 [C_multi_yw];
  D64():
    deopt 215 [];
  L135():
    C_multi_yw1 = force? C_multi_yw;
    checkMissing(C_multi_yw1);
    aperm = ldf aperm;
    check L136() else D43();
  L165():
    p27 = prom<V +>{
      array = ldf array;
      p25 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        c10 = `is.object`(z1);
        if c10 then L1() else L2(z1);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", z1);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(z3):
        r126 = `$`(z3, <sym pacf>);
        goto L0(r126);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p26 = prom<V +>{
        sym15 = ldf c;
        base15 = ldf c in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r129):
        return r129;
      L1():
        nser14 = ld nser;
        nser15 = force? nser14;
        checkMissing(nser15);
        nser16 = ld nser;
        nser17 = force? nser16;
        checkMissing(nser17);
        order_max17 = ld `order.max`;
        order_max18 = force? order_max17;
        checkMissing(order_max18);
        r130 = `+`(order_max18, 1);
        c11 = ldf c in base;
        r131 = dyn c11(nser15, nser17, r130);
        goto L0(r131);
      L2():
        r128 = dyn base15(<sym nser>, <sym nser>, <lang `+`(order.max, 1)>);
        goto L0(r128);
      };
      r133 = dyn array[, dim](p25, p26);
      return r133;
    };
    p28 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r136 = dyn aperm1(p27, p28);
    check L166() else D65();
  D43():
    deopt 158 [];
  D65():
    deopt 218 [r136];
  L136():
    p19 = prom<V +>{
      xacf = ld xacf;
      xacf1 = force? xacf;
      checkMissing(xacf1);
      return xacf1;
    };
    p20 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r93 = dyn aperm(p19, p20);
    check L137() else D44();
  L166():
    c12 = `is.object`(r136);
    if c12 then L167() else L168();
  D44():
    deopt 161 [r93];
  L34(dx9):
    st partialacf = dx9;
    aperm2 = ldf aperm;
    check L170() else D66();
  L137():
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L138() else L139();
  L167():
    dr8 = tryDispatchBuiltin.1("[", r136);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L169() else L168();
  L168():
    __2 = ldf `[` in base;
    r139 = dyn __2(r136, -1, <missing>, <missing>, FALSE);
    goto L34(r139);
  D66():
    deopt 229 [];
  L30(r95):
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L142() else L143();
  L138():
    n_obs2 = ld `n.obs`;
    check L140() else D45();
  L139():
    r94 = dyn base11(<sym n.obs>);
    goto L30(r94);
  L169():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L34(dx8);
  L170():
    p31 = prom<V +>{
      array1 = ldf array;
      p29 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        c13 = `is.object`(z5);
        if c13 then L1() else L2(z5);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("$", z5);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(z7):
        r140 = `$`(z7, <sym var>);
        goto L0(r140);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      p30 = prom<V +>{
        sym16 = ldf c;
        base16 = ldf c in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L1() else L2();
      L0(r143):
        return r143;
      L1():
        nser18 = ld nser;
        nser19 = force? nser18;
        checkMissing(nser19);
        nser20 = ld nser;
        nser21 = force? nser20;
        checkMissing(nser21);
        order_max19 = ld `order.max`;
        order_max20 = force? order_max19;
        checkMissing(order_max20);
        r144 = `+`(order_max20, 1);
        c14 = ldf c in base;
        r145 = dyn c14(nser19, nser21, r144);
        goto L0(r145);
      L2():
        r142 = dyn base16(<sym nser>, <sym nser>, <lang `+`(order.max, 1)>);
        goto L0(r142);
      };
      r147 = dyn array1[, dim](p29, p30);
      return r147;
    };
    p32 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r150 = dyn aperm2(p31, p32);
    check L171() else D67();
  D45():
    deopt 164 [n_obs2];
  D67():
    deopt 232 [r150];
  L31(r98):
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L146() else L147();
  L140():
    n_obs3 = force? n_obs2;
    checkMissing(n_obs3);
    as_integer = ldf `as.integer` in base;
    r96 = dyn as_integer(n_obs3);
    check L141() else D46();
  L142():
    order_max7 = ld `order.max`;
    check L144() else D47();
  L143():
    r97 = dyn base12(<sym order.max>);
    goto L31(r97);
  L171():
    st `var.pred` = r150;
    setNames = ldf setNames;
    check L172() else D68();
  D46():
    deopt 167 [r96];
  D47():
    deopt 170 [order_max7];
  D68():
    deopt 235 [];
  L32(r101):
    double = ldf double;
    check L150() else D51();
  L141():
    goto L30(r96);
  L144():
    order_max8 = force? order_max7;
    checkMissing(order_max8);
    as_integer1 = ldf `as.integer` in base;
    r99 = dyn as_integer1(order_max8);
    check L145() else D48();
  L146():
    nser = ld nser;
    check L148() else D49();
  L147():
    r100 = dyn base13(<sym nser>);
    goto L32(r100);
  L172():
    p33 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      c15 = `is.object`(z9);
      if c15 then L2() else L3(z9);
    L1(dx13):
      sym17 = ldf min;
      base17 = ldf min in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L5() else L6();
    L2():
      dr12 = tryDispatchBuiltin.1("$", z9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(z11):
      r151 = `$`(z11, <sym aic>);
      goto L1(r151);
    L0(dx16, r153):
      r156 = `-`(dx16, r153);
      return r156;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx12);
    L5():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c16 = `is.object`(z13);
      if c16 then L8() else L9(dx13, z13);
    L6():
      r152 = dyn base17(<lang `$`(z, aic)>);
      goto L0(dx13, r152);
    L7(dx21, dx22):
      min = ldf min in base;
      r155 = dyn min(dx22);
      goto L0(dx21, r155);
    L8():
      dr14 = tryDispatchBuiltin.1("$", z13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L10() else L9(dx13, dr14);
    L9(dx18, z15):
      r154 = `$`(z15, <sym aic>);
      goto L7(dx18, r154);
    L10():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L7(dx13, dx20);
    };
    p34 = prom<V +>{
      order_max21 = ld `order.max`;
      order_max22 = force? order_max21;
      checkMissing(order_max22);
      r158 = `:`(0.0, order_max22);
      return r158;
    };
    r160 = dyn setNames(p33, p34);
    check L173() else D69();
  D48():
    deopt 173 [r99];
  D49():
    deopt 176 [nser];
  D51():
    deopt 181 [];
  D69():
    deopt 238 [r160];
  L145():
    goto L31(r99);
  L148():
    nser1 = force? nser;
    checkMissing(nser1);
    as_integer2 = ldf `as.integer` in base;
    r102 = dyn as_integer2(nser1);
    check L149() else D50();
  L150():
    p21 = prom<V +>{
      order_max9 = ld `order.max`;
      order_max10 = force? order_max9;
      checkMissing(order_max10);
      r103 = `+`(1, order_max10);
      nser2 = ld nser;
      nser3 = force? nser2;
      checkMissing(nser3);
      r104 = `*`(r103, nser3);
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      r105 = `*`(r104, nser5);
      return r105;
    };
    r107 = dyn double(p21);
    check L151() else D52();
  L173():
    st xaic = r160;
    z16 = ld z;
    check L174() else D70();
  D50():
    deopt 179 [r102];
  D52():
    deopt 183 [r107];
  D70():
    deopt 240 [z16];
  L149():
    goto L32(r102);
  L151():
    double1 = ldf double;
    check L152() else D53();
  L174():
    z17 = force? z16;
    checkMissing(z17);
    c17 = `is.object`(z17);
    if c17 then L176() else L177(z17);
  D53():
    deopt 186 [];
  L152():
    p22 = prom<V +>{
      order_max11 = ld `order.max`;
      order_max12 = force? order_max11;
      checkMissing(order_max12);
      r108 = `+`(1, order_max12);
      nser6 = ld nser;
      nser7 = force? nser6;
      checkMissing(nser7);
      r109 = `*`(r108, nser7);
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      r110 = `*`(r109, nser9);
      return r110;
    };
    r112 = dyn double1(p22);
    check L153() else D54();
  L175(dx24):
    st order = dx24;
    x33 = ld x;
    check L179() else D71();
  L176():
    dr16 = tryDispatchBuiltin.1("$", z17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L178() else L177(dr16);
  L177(z19):
    r161 = `$`(z19, <sym order>);
    goto L175(r161);
  D54():
    deopt 188 [r112];
  D71():
    deopt 244 [x33];
  L153():
    double2 = ldf double;
    check L154() else D55();
  L178():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L175(dx23);
  L179():
    x34 = force? x33;
    checkMissing(x34);
    st resid = x34;
    order = ld order;
    check L180() else D72();
  D55():
    deopt 191 [];
  D72():
    deopt 247 [order];
  L154():
    p23 = prom<V +>{
      order_max13 = ld `order.max`;
      order_max14 = force? order_max13;
      checkMissing(order_max14);
      r113 = `+`(1, order_max14);
      nser10 = ld nser;
      nser11 = force? nser10;
      checkMissing(nser11);
      r114 = `*`(r113, nser11);
      nser12 = ld nser;
      nser13 = force? nser12;
      checkMissing(nser13);
      r115 = `*`(r114, nser13);
      return r115;
    };
    r117 = dyn double2(p23);
    check L155() else D56();
  L180():
    order1 = force? order;
    checkMissing(order1);
    r162 = `>`(order1, 0.0);
    c18 = `as.logical`(r162);
    if c18 then L181() else L35();
  D56():
    deopt 193 [r117];
  L35():
    array3 = ldf array;
    check L215() else D89();
  L43():
    var_pred = ld `var.pred`;
    check L217() else D91();
  L155():
    double3 = ldf double;
    check L156() else D57();
  L181():
    aperm3 = ldf aperm;
    check L182() else D73();
  D57():
    deopt 196 [];
  D73():
    deopt 252 [];
  D89():
    deopt 331 [];
  D91():
    deopt 336 [var_pred];
  L156():
    p24 = prom<V +>{
      order_max15 = ld `order.max`;
      order_max16 = force? order_max15;
      checkMissing(order_max16);
      r118 = `+`(1, order_max16);
      return r118;
    };
    r120 = dyn double3(p24);
    check L157() else D58();
  L182():
    p37 = prom<V +>{
      array2 = ldf array;
      p35 = prom<V +>{
        z20 = ld z;
        z21 = force? z20;
        checkMissing(z21);
        c19 = `is.object`(z21);
        if c19 then L1() else L2(z21);
      L0(dx26):
        return dx26;
      L1():
        dr18 = tryDispatchBuiltin.1("$", z21);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(z23):
        r163 = `$`(z23, <sym coefs>);
        goto L0(r163);
      L3():
        dx25 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx25);
      };
      p36 = prom<V +>{
        sym18 = ldf c;
        base18 = ldf c in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L1() else L2();
      L0(r166):
        return r166;
      L1():
        nser22 = ld nser;
        nser23 = force? nser22;
        checkMissing(nser23);
        nser24 = ld nser;
        nser25 = force? nser24;
        checkMissing(nser25);
        order_max23 = ld `order.max`;
        order_max24 = force? order_max23;
        checkMissing(order_max24);
        r167 = `+`(order_max24, 1);
        c20 = ldf c in base;
        r168 = dyn c20(nser23, nser25, r167);
        goto L0(r168);
      L2():
        r165 = dyn base18(<sym nser>, <sym nser>, <lang `+`(order.max, 1)>);
        goto L0(r165);
      };
      r170 = dyn array2[, dim](p35, p36);
      return r170;
    };
    p38 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r173 = dyn aperm3(p37, p38);
    check L183() else D74();
  L215():
    p40 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r209):
      return r209;
    L1():
      nser26 = ld nser;
      nser27 = force? nser26;
      checkMissing(nser27);
      nser28 = ld nser;
      nser29 = force? nser28;
      checkMissing(nser29);
      c28 = ldf c in base;
      r210 = dyn c28(0.0, nser27, nser29);
      goto L0(r210);
    L2():
      r208 = dyn base19(0.0, <sym nser>, <sym nser>);
      goto L0(r208);
    };
    r212 = dyn array3[dim](p40);
    check L216() else D90();
  L217():
    var_pred1 = force? var_pred;
    checkMissing(var_pred1);
    c29 = `is.object`(var_pred1);
    if c29 then L218() else L219(var_pred1);
  D58():
    deopt 198 [r120];
  D74():
    deopt 255 [r173];
  D90():
    deopt 334 [r212];
  L44(dx44):
    n_obs4 = ld `n.obs`;
    check L222() else D93();
  L157():
    integer = ldf integer;
    check L158() else D59();
  L183():
    c21 = `is.object`(r173);
    if c21 then L184() else L185(r173);
  L216():
    st ar = r212;
    goto L43();
  L218():
    dr32 = tryDispatchBuiltin.1("[", var_pred1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L220() else L219(dr32);
  L219(var_pred3):
    order14 = ld order;
    check L221() else D92();
  D59():
    deopt 201 [];
  D92():
    deopt 338 [var_pred3, order14];
  D93():
    deopt 347 [dx44, n_obs4];
  L36(dx28):
    r179 = `-`(<missing>, dx28);
    st ar = r179;
    order4 = ld order;
    check L188() else D76();
  L158():
    r121 = dyn integer(1);
    check L159() else D60();
  L184():
    dr20 = tryDispatchBuiltin.1("[", r173);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L186() else L185(dr20);
  L185(r175):
    order2 = ld order;
    check L187() else D75();
  L220():
    dx43 = getTryDispatchBuiltinValue(dr32);
    goto L44(dx43);
  L221():
    order15 = force? order14;
    checkMissing(order15);
    r213 = `+`(order15, 1);
    __7 = ldf `[` in base;
    r214 = dyn __7(var_pred1, r213, <missing>, <missing>, TRUE);
    goto L44(r214);
  L222():
    n_obs5 = force? n_obs4;
    checkMissing(n_obs5);
    r215 = `*`(dx44, n_obs5);
    n_obs6 = ld `n.obs`;
    check L223() else D94();
  D60():
    deopt 203 [r121];
  D75():
    deopt 257 [r175, 2, order2];
  D76():
    deopt 271 [1, order4];
  D94():
    deopt 349 [r215, n_obs6];
  L159():
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L160() else L161();
  L186():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L36(dx27);
  L187():
    order3 = force? order2;
    checkMissing(order3);
    r176 = `+`(order3, 1);
    r177 = `:`(2, r176);
    __3 = ldf `[` in base;
    r178 = dyn __3(r173, r177, <missing>, <missing>, FALSE);
    goto L36(r178);
  L188():
    order5 = force? order4;
    checkMissing(order5);
    r180 = `:`(1, order5);
    s = toForSeq(r180);
    l = length(s);
    i = 0;
    goto L37(i);
  L223():
    n_obs7 = force? n_obs6;
    checkMissing(n_obs7);
    nser30 = ld nser;
    check L224() else D95();
  D95():
    deopt 350 [r215, n_obs7, nser30];
  L33(r123):
    _C = ldf `.C` in base;
    r125 = dyn _C(C_multi_yw1, r93, r95, r98, r101, r107, r112, r117, r120, r121, r123);
    check L164() else D63();
  L37(i1):
    i2 = `+`.1(i1, 1);
    c22 = `<`.1(l, i2);
    if c22 then L189() else L41();
  L160():
    aic1 = ld aic;
    check L162() else D61();
  L161():
    r122 = dyn base14(<sym aic>);
    goto L33(r122);
  L224():
    nser31 = force? nser30;
    checkMissing(nser31);
    demean3 = ld demean;
    check L225() else D96();
  D61():
    deopt 207 [aic1];
  D63():
    deopt 212 [r125];
  D96():
    deopt 351 [r215, n_obs7, nser31, demean3];
  L41():
    x35 = `[[`(s, i2, NULL, TRUE);
    st i = x35;
    resid = ld resid;
    check L190() else D77();
  L162():
    aic2 = force? aic1;
    checkMissing(aic2);
    as_integer3 = ldf `as.integer` in base;
    r124 = dyn as_integer3(aic2);
    check L163() else D62();
  L164():
    goto L29(r125);
  L189():
    l4 = ld resid;
    c27 = `is.object`(l4);
    if c27 then L210() else L211(NA_LGL, l4);
  L225():
    demean4 = force? demean3;
    checkMissing(demean4);
    order16 = ld order;
    check L226() else D97();
  D62():
    deopt 210 [r124];
  D77():
    deopt 274 [i2, resid];
  D97():
    deopt 352 [r215, n_obs7, nser31, demean4, order16];
  L42(r204, dx42):
    st resid = dx42;
    goto L43();
  L163():
    goto L33(r124);
  L190():
    resid1 = force? resid;
    checkMissing(resid1);
    c23 = `is.object`(resid1);
    if c23 then L191() else L192(i2, resid1);
  L210():
    dr30 = tryDispatchBuiltin.0("[<-", l4, NA_LGL);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L212() else L211(NA_LGL, dr30);
  L211(r202, l6):
    order12 = ld order;
    check L213() else D88();
  L226():
    order17 = force? order16;
    checkMissing(order17);
    r216 = `+`(demean4, order17);
    r217 = `*`(nser31, r216);
    r218 = `-`(n_obs7, r217);
    r219 = `/`(r215, r218);
    st `var.pred` = r219;
    ists2 = ld ists;
    check L227() else D98();
  D88():
    deopt 323 [r202, l6, NA_LGL, 1, order12];
  D98():
    deopt 359 [ists2];
  L38(i8, dx30):
    x36 = ld x;
    check L195() else D79();
  L191():
    dr22 = tryDispatchBuiltin.1("[", resid1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L193() else L192(i2, dr22);
  L192(i6, resid3):
    order6 = ld order;
    check L194() else D78();
  L212():
    dx41 = getTryDispatchBuiltinValue(dr30);
    goto L42(NA_LGL, dx41);
  L213():
    order13 = force? order12;
    checkMissing(order13);
    r205 = `:`(1, order13);
    ___2 = ldf `[<-` in base;
    r206 = dyn ___2(l4, r205, <missing>, NA_LGL);
    goto L42(r202, r206);
  L227():
    ists3 = force? ists2;
    checkMissing(ists3);
    c30 = `as.logical`(ists3);
    if c30 then L228() else L45();
  D78():
    deopt 277 [i6, resid3, 1, order6];
  D79():
    deopt 284 [i8, dx30, x36];
  L45():
    goto L47();
  L47():
    colnames = ldf colnames;
    check L238() else D105();
  L193():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L38(i2, dx29);
  L194():
    order7 = force? order6;
    checkMissing(order7);
    r181 = `:`(1, order7);
    r182 = `-`(<missing>, r181);
    __4 = ldf `[` in base;
    r183 = dyn __4(resid1, r182, <missing>);
    goto L38(i6, r183);
  L195():
    x37 = force? x36;
    checkMissing(x37);
    c24 = `is.object`(x37);
    if c24 then L196() else L197(i8, dx30, x37);
  L228():
    xtsp = ld xtsp;
    check L229() else D99();
  D99():
    deopt 361 [xtsp];
  D105():
    deopt 384 [];
  L39(i12, dx35, dx36):
    t = ldf t;
    check L203() else D84();
  L196():
    dr24 = tryDispatchBuiltin.1("[", x37);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L198() else L197(i8, dx30, dr24);
  L197(i10, dx32, x39):
    order8 = ld order;
    check L199() else D80();
  L229():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l7 = ld resid;
    attr__ = ldf `attr<-`;
    check L230() else D100();
  L238():
    p41 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      return x41;
    };
    r227 = dyn colnames(p41);
    check L239() else D106();
  D80():
    deopt 286 [i10, dx32, x39, order8];
  D84():
    deopt 300 [i12, dx35];
  D100():
    deopt 364 [xtsp1, l7, xtsp1];
  D106():
    deopt 386 [r227];
  L198():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L39(i8, dx30, dx34);
  L199():
    order9 = force? order8;
    checkMissing(order9);
    i13 = ld i;
    check L200() else D81();
  L203():
    p39 = prom<V +>{
      ar = ld ar;
      ar1 = force? ar;
      checkMissing(ar1);
      c25 = `is.object`(ar1);
      if c25 then L1() else L2();
    L0(dx38):
      return dx38;
    L1():
      dr26 = tryDispatchBuiltin.1("[", ar1);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2();
    L2():
      i17 = ld i;
      i18 = force? i17;
      __6 = ldf `[` in base;
      r189 = dyn __6(ar1, i18, <missing>, <missing>);
      goto L0(r189);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx37);
    };
    r191 = dyn t(p39);
    check L204() else D85();
  L230():
    r220 = dyn attr__(l7, NULL, "tsp", xtsp1);
    check L231() else D101();
  L239():
    st snames = r227;
    snames = ld snames;
    check L240() else D107();
  D81():
    deopt 287 [i10, dx32, x39, order9, i13];
  D85():
    deopt 302 [i12, dx35, r191];
  D101():
    deopt 367 [xtsp1, r220];
  D107():
    deopt 388 [snames];
  L200():
    i14 = force? i13;
    checkMissing(i14);
    r184 = `-`(order9, i14);
    r185 = `+`(r184, 1);
    n_used = ld `n.used`;
    check L201() else D82();
  L204():
    ___ = ldf `%*%` in base;
    r192 = dyn ___(dx36, r191);
    check L205() else D86();
  L231():
    st resid = r220;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L232() else L233();
  L240():
    snames1 = force? snames;
    checkMissing(snames1);
    l9 = ld resid;
    colnames__ = ldf `colnames<-`;
    check L241() else D108();
  D82():
    deopt 291 [i10, dx32, x39, r185, n_used];
  D86():
    deopt 304 [i12, dx35, r192];
  D108():
    deopt 391 [snames1, l9, snames1];
  L46(r222):
    l8 = ld resid;
    attr__1 = ldf `attr<-`;
    check L235() else D103();
  L201():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    i15 = ld i;
    check L202() else D83();
  L205():
    r193 = `-`(dx35, r192);
    l1 = ld resid;
    c26 = `is.object`(l1);
    if c26 then L206() else L207(i12, r193, l1);
  L232():
    c31 = ldf c in base;
    r223 = dyn c31("mts", "ts");
    check L234() else D102();
  L233():
    r221 = dyn base20("mts", "ts");
    goto L46(r221);
  L241():
    r228 = dyn colnames__(l9, NULL, snames1);
    check L242() else D109();
  D83():
    deopt 292 [i10, dx32, x39, r185, n_used1, i15];
  D102():
    deopt 374 [r223];
  D103():
    deopt 376 [r222, l8, r222];
  D109():
    deopt 393 [snames1, r228];
  L40(i22, dx40):
    st resid = dx40;
    goto L37(i22);
  L202():
    i16 = force? i15;
    checkMissing(i16);
    r186 = `-`(n_used1, i16);
    r187 = `:`(r185, r186);
    __5 = ldf `[` in base;
    r188 = dyn __5(x37, r187, <missing>);
    goto L39(i10, dx32, r188);
  L206():
    dr28 = tryDispatchBuiltin.0("[<-", l1, r193);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L208() else L207(i12, r193, dr28);
  L207(i20, r195, l3):
    order10 = ld order;
    check L209() else D87();
  L234():
    goto L46(r223);
  L235():
    r224 = dyn attr__1(l8, NULL, "class", r222);
    check L236() else D104();
  L242():
    st resid = r228;
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L243() else L244();
  D87():
    deopt 308 [i20, r195, l3, r193, 1, order10];
  D104():
    deopt 379 [r222, r224];
  L48(r230):
    l10 = ld ar;
    dimnames__ = ldf `dimnames<-`;
    check L251() else D114();
  L208():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L40(i12, dx39);
  L209():
    order11 = force? order10;
    checkMissing(order11);
    r198 = `:`(1, order11);
    r199 = `-`(<missing>, r198);
    ___1 = ldf `[<-` in base;
    r200 = dyn ___1(l1, r199, <missing>, r193);
    goto L40(i20, r200);
  L236():
    st resid = r224;
    goto L47();
  L243():
    sym22 = ldf seq_len;
    base22 = ldf seq_len in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L245() else L246();
  L244():
    r229 = dyn base21(<lang seq_len(order)>, <sym snames>, <sym snames>);
    goto L48(r229);
  D114():
    deopt 408 [r230, l10, r230];
  L49(r232):
    snames2 = ld snames;
    check L248() else D111();
  L245():
    order18 = ld order;
    check L247() else D110();
  L246():
    r231 = dyn base22(<sym order>);
    goto L49(r231);
  L251():
    r235 = dyn dimnames__(l10, NULL, r230);
    check L252() else D115();
  D110():
    deopt 398 [order18];
  D111():
    deopt 401 [snames2];
  D115():
    deopt 410 [r230, r235];
  L247():
    order19 = force? order18;
    checkMissing(order19);
    r233 = seq_len(order19);
    goto L49(r233);
  L248():
    snames3 = force? snames2;
    checkMissing(snames3);
    snames4 = ld snames;
    check L249() else D112();
  L252():
    st ar = r235;
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L253() else L254();
  D112():
    deopt 403 [snames4];
  L50(r237):
    l11 = ld `var.pred`;
    dimnames__1 = ldf `dimnames<-`;
    check L258() else D119();
  L249():
    snames5 = force? snames4;
    checkMissing(snames5);
    list = ldf list in base;
    r234 = dyn list(r232, snames3, snames5);
    check L250() else D113();
  L253():
    snames6 = ld snames;
    check L255() else D116();
  L254():
    r236 = dyn base23(<sym snames>, <sym snames>);
    goto L50(r236);
  D113():
    deopt 406 [r234];
  D116():
    deopt 414 [snames6];
  D119():
    deopt 421 [r237, l11, r237];
  L250():
    goto L48(r234);
  L255():
    snames7 = force? snames6;
    checkMissing(snames7);
    snames8 = ld snames;
    check L256() else D117();
  L258():
    r239 = dyn dimnames__1(l11, NULL, r237);
    check L259() else D120();
  D117():
    deopt 416 [snames8];
  D120():
    deopt 423 [r237, r239];
  L256():
    snames9 = force? snames8;
    checkMissing(snames9);
    list1 = ldf list in base;
    r238 = dyn list1(snames7, snames9);
    check L257() else D118();
  L259():
    st `var.pred` = r239;
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L260() else L261();
  D118():
    deopt 419 [r238];
  L51(r241):
    l12 = ld partialacf;
    dimnames__2 = ldf `dimnames<-`;
    check L266() else D125();
  L257():
    goto L50(r238);
  L260():
    order_max25 = ld `order.max`;
    check L262() else D121();
  L261():
    r240 = dyn base24(<lang `:`(1, order.max)>, <sym snames>, <sym snames>);
    goto L51(r240);
  D121():
    deopt 428 [1, order_max25];
  D125():
    deopt 438 [r241, l12, r241];
  L262():
    order_max26 = force? order_max25;
    checkMissing(order_max26);
    r242 = `:`(1, order_max26);
    snames10 = ld snames;
    check L263() else D122();
  L266():
    r244 = dyn dimnames__2(l12, NULL, r241);
    check L267() else D126();
  D122():
    deopt 431 [snames10];
  D126():
    deopt 440 [r241, r244];
  L263():
    snames11 = force? snames10;
    checkMissing(snames11);
    snames12 = ld snames;
    check L264() else D123();
  L267():
    st partialacf = r244;
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L268() else L269();
  D123():
    deopt 433 [snames12];
  L52(r246):
    st res = r246;
    l13 = ld res;
    class__ = ldf `class<-`;
    check L285() else D142();
  L264():
    snames13 = force? snames12;
    checkMissing(snames13);
    list2 = ldf list in base;
    r243 = dyn list2(r242, snames11, snames13);
    check L265() else D124();
  L268():
    order20 = ld order;
    check L270() else D127();
  L269():
    r245 = dyn base25[order, ar, `var.pred`, `x.mean`, aic, `n.used`, `n.obs`, `order.max`, partialacf, resid, method, series, frequency, call](<sym order>, <sym ar>, <sym var.pred>, <sym x.mean>, <sym xaic>, <sym n.used>, <sym n.obs>, <sym order.max>, <sym partialacf>, <sym resid>, "Yule-Walker", <sym series>, <sym xfreq>, <lang match.call()>);
    goto L52(r245);
  D124():
    deopt 436 [r243];
  D127():
    deopt 444 [order20];
  D142():
    deopt 492 ["ar", l13, "ar"];
  L265():
    goto L51(r243);
  L270():
    order21 = force? order20;
    checkMissing(order21);
    ar4 = ld ar;
    check L271() else D128();
  L285():
    r249 = dyn class__(l13, NULL, "ar");
    check L286() else D143();
  D128():
    deopt 447 [ar4];
  D143():
    deopt 494 ["ar", r249];
  L271():
    ar5 = force? ar4;
    checkMissing(ar5);
    var_pred4 = ld `var.pred`;
    check L272() else D129();
  L286():
    st res = r249;
    res = ld res;
    check L287() else D144();
  D129():
    deopt 450 [var_pred4];
  D144():
    deopt 496 [res];
  L272():
    var_pred5 = force? var_pred4;
    checkMissing(var_pred5);
    x_mean2 = ld `x.mean`;
    check L273() else D130();
  L287():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D130():
    deopt 453 [x_mean2];
  L273():
    x_mean3 = force? x_mean2;
    checkMissing(x_mean3);
    xaic = ld xaic;
    check L274() else D131();
  D131():
    deopt 456 [xaic];
  L274():
    xaic1 = force? xaic;
    checkMissing(xaic1);
    n_used2 = ld `n.used`;
    check L275() else D132();
  D132():
    deopt 459 [n_used2];
  L275():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    n_obs8 = ld `n.obs`;
    check L276() else D133();
  D133():
    deopt 462 [n_obs8];
  L276():
    n_obs9 = force? n_obs8;
    checkMissing(n_obs9);
    order_max27 = ld `order.max`;
    check L277() else D134();
  D134():
    deopt 465 [order_max27];
  L277():
    order_max28 = force? order_max27;
    checkMissing(order_max28);
    partialacf = ld partialacf;
    check L278() else D135();
  D135():
    deopt 468 [partialacf];
  L278():
    partialacf1 = force? partialacf;
    checkMissing(partialacf1);
    resid4 = ld resid;
    check L279() else D136();
  D136():
    deopt 471 [resid4];
  L279():
    resid5 = force? resid4;
    checkMissing(resid5);
    series3 = ld series;
    check L280() else D137();
  D137():
    deopt 476 [series3];
  L280():
    series4 = force? series3;
    checkMissing(series4);
    xfreq = ld xfreq;
    check L281() else D138();
  D138():
    deopt 479 [xfreq];
  L281():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    match_call = ldf `match.call`;
    check L282() else D139();
  D139():
    deopt 483 [];
  L282():
    r247 = dyn match_call();
    check L283() else D140();
  D140():
    deopt 484 [r247];
  L283():
    list3 = ldf list in base;
    r248 = dyn list3(order21, ar5, var_pred5, x_mean3, xaic1, n_used3, n_obs9, order_max28, partialacf1, resid5, "Yule-Walker", series4, xfreq1, r247);
    check L284() else D141();
  D141():
    deopt 487 [r248];
  L284():
    goto L52(r248);
  }
}