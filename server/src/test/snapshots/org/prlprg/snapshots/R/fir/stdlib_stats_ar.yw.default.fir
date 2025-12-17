fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3975754853;
    st `ar.yw.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3975754853(x, aic, `order.max`, `na.action`, demean, series, `...`) {
  (reg x:*, reg aic:*, reg order_max:*, reg na_action:*, reg demean:*, reg series:*, reg ddd:dots) -+> V { var x:*, var aic:*, reg aic_isMissing:L, reg aic_orDefault:*, var `order.max`:*, reg order_max_isMissing:L, reg order_max_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var series:*, reg series_isMissing:L, reg series_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg series1:*, reg series2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r10:V, reg na_action1:cls, reg as_ts:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg ists:*, reg ists1:V, reg c2:L, reg tsp:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r16:V, reg frequency:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r19:V, reg as_matrix:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg x11:*, reg x12:V, reg is_numeric:cls, reg r24:V, reg r25:V, reg c3:L, reg stop:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg x13:*, reg x14:V, reg is_na:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg r37:V, reg x15:*, reg x16:V, reg c4:L, reg r39:V, reg dr:V, reg dc:L, reg dx:V, reg r41:V, reg dx1:V, reg __:cls, reg r42:V, reg is_na1:cls, reg r43:V, reg r44:V, reg any:cls, reg r45:V, reg c5:L, reg stop1:cls, reg r46:V, reg ncol:cls, reg x19:*, reg x20:V, reg p8:p(V +), reg r49:V, reg demean1:*, reg demean2:V, reg c6:L, reg colMeans:cls, reg x21:*, reg x22:V, reg p9:p(V +), reg r51:V, reg sweep:cls, reg x23:*, reg x24:V, reg p10:p(V +), reg xm:*, reg xm1:V, reg p11:p(V +), reg r54:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg nser:*, reg nser1:V, reg rep_int:cls, reg r58:V, reg nrow:cls, reg x25:*, reg x26:V, reg p12:p(V +), reg r60:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg x27:*, reg x28:V, reg c7:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r65:V, reg is_na2:cls, reg r66:V, reg r67:V, reg sum:cls, reg r68:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg order_max1:*, reg order_max2:V, reg c8:V, reg c9:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg n_obs:*, reg n_obs1:V, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg r79:R, reg r80:V, reg n_obs2:*, reg n_obs3:V, reg log10:cls, reg r81:V, reg r82:V, reg r83:V, reg min:cls, reg r84:V, reg r85:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r86:V, reg order_max3:*, reg order_max4:V, reg r87:V, reg order_max5:*, reg order_max6:V, reg r88:V, reg c10:L, reg stop2:cls, reg r89:V, reg order_max7:*, reg order_max8:V, reg n_obs4:*, reg n_obs5:V, reg r91:V, reg c11:L, reg stop3:cls, reg r92:V, reg acf:cls, reg x31:*, reg x32:V, reg p13:p(V +), reg order_max9:*, reg order_max10:V, reg p14:p(V +), reg demean3:*, reg demean4:V, reg p15:p(V +), reg na_pass:*, reg na_pass1:V, reg p16:p(V +), reg r97:V, reg c12:L, reg r99:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r100:V, reg nser2:*, reg nser3:V, reg r101:V, reg c13:L, reg colnames:cls, reg x33:*, reg x34:V, reg p17:p(V +), reg r103:V, reg array:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r104:V, reg r105:V, reg order_max11:*, reg order_max12:V, reg r106:V, reg nser4:*, reg nser5:V, reg nser6:*, reg nser7:V, reg c14:cls, reg r107:V, reg p18:p(V +), reg r109:V, reg diag:cls, reg nser8:*, reg nser9:V, reg p19:p(V +), reg r111:V, reg l:*, reg c15:L, reg r113:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r115:V, reg dx7:V, reg ___:cls, reg r116:V, reg l3:*, reg c16:L, reg r118:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ___1:cls, reg r121:V, reg xacf:*, reg xacf1:V, reg c17:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r122:V, reg array1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r123:V, reg r124:V, reg order_max13:*, reg order_max14:V, reg nser10:*, reg nser11:V, reg nser12:*, reg nser13:V, reg c18:cls, reg r125:V, reg p20:p(V +), reg r127:V, reg numeric:cls, reg order_max15:*, reg order_max16:V, reg r128:V, reg p21:p(V +), reg r130:V, reg r131:cls, reg r132:cls, reg r133:cls, reg order_max17:*, reg order_max18:V, reg r134:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x35:V, reg cal_aic:cls, reg m:*, reg m1:V, reg p22:p(V +), reg r136:V, reg l7:*, reg c20:L, reg i6:I, reg r138:V, reg l9:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i8:I, reg dx13:V, reg m2:*, reg m3:V, reg r141:V, reg ___2:cls, reg r142:V, reg aic1:*, reg aic2:V, reg r143:V, reg c21:L, reg i9:I, reg c22:V, reg xaic:*, reg xaic1:V, reg c24:L, reg i12:I, reg c26:L, reg xaic3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i14:I, reg c28:L, reg dx15:V, reg m4:*, reg m5:V, reg r144:V, reg __3:cls, reg r145:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r146:V, reg i17:I, reg c31:L, reg dx18:V, reg r147:V, reg xaic4:*, reg xaic5:V, reg c32:L, reg i19:I, reg c34:L, reg dx20:V, reg xaic7:V, reg dr16:V, reg dc8:L, reg dx22:V, reg i21:I, reg c36:L, reg dx23:V, reg dx24:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r148:V, reg i24:I, reg c39:L, reg dx27:V, reg xaic10:V, reg r149:V, reg m6:*, reg m7:V, reg r150:V, reg r151:I, reg __4:cls, reg r152:V, reg min1:cls, reg r153:V, reg r154:V, reg c40:L, reg c41:V, reg c43:L, reg A:*, reg A1:V, reg m8:*, reg m9:V, reg EA:*, reg EA1:V, reg n_obs6:*, reg n_obs7:V, reg r155:V, reg n_obs8:*, reg n_obs9:V, reg nser14:*, reg nser15:V, reg m10:*, reg m11:V, reg r156:V, reg r157:V, reg r158:V, reg r159:V, reg i28:I, reg m12:*, reg m13:V, reg order_max19:*, reg order_max20:V, reg r161:V, reg c44:L, reg solve_yw:cls, reg m14:*, reg m15:V, reg p23:p(V +), reg r163:V, reg A2:*, reg A3:V, reg c45:L, reg i32:I, reg A5:V, reg dr18:V, reg dc9:L, reg dx28:V, reg i34:I, reg dx29:V, reg m16:*, reg m17:V, reg r164:V, reg __5:cls, reg r165:V, reg r166:V, reg l10:*, reg c46:L, reg i36:I, reg r168:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx30:V, reg i38:I, reg r170:V, reg dx31:V, reg m18:*, reg m19:V, reg r171:V, reg ___3:cls, reg r172:V, reg i39:I, reg setNames:cls, reg xaic11:*, reg xaic12:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r174:V, reg xaic15:V, reg r175:V, reg xaic16:*, reg xaic17:V, reg min2:cls, reg r176:V, reg r177:V, reg p24:p(V +), reg order_max21:*, reg order_max22:V, reg r179:V, reg p25:p(V +), reg r181:V, reg cal_resid:cls, reg r182:V, reg order:*, reg order1:V, reg c47:L, reg ar:*, reg ar1:V, reg c48:L, reg ar3:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg order2:*, reg order3:V, reg r183:V, reg r184:V, reg __6:cls, reg r185:V, reg r186:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r187:V, reg r188:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r189:V, reg r190:V, reg order4:*, reg order5:V, reg r191:I, reg snames:*, reg snames1:V, reg snames2:*, reg snames3:V, reg list:cls, reg r192:V, reg l13:*, reg dimnames__:cls, reg r193:V, reg array2:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r195:V, reg r196:V, reg nser16:*, reg nser17:V, reg nser18:*, reg nser19:V, reg c49:cls, reg r197:V, reg p26:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r199:V, reg r200:V, reg snames4:*, reg snames5:V, reg snames6:*, reg snames7:V, reg list1:cls, reg r201:V, reg p27:p(V +), reg r203:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r204:V, reg r205:V, reg snames8:*, reg snames9:V, reg snames10:*, reg snames11:V, reg list2:cls, reg r206:V, reg l14:*, reg dimnames__1:cls, reg r207:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r208:V, reg r209:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r210:V, reg r211:V, reg order_max23:*, reg order_max24:V, reg r212:I, reg snames12:*, reg snames13:V, reg snames14:*, reg snames15:V, reg list3:cls, reg r213:V, reg l15:*, reg dimnames__2:cls, reg r214:V, reg colnames1:cls, reg x36:*, reg x37:V, reg p28:p(V +), reg r216:V, reg l16:*, reg colnames__:cls, reg r217:V, reg xacf4:*, reg xacf5:V, reg c50:L, reg xacf7:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg __7:cls, reg r219:V, reg r220:V, reg c51:L, reg stop4:cls, reg r221:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r223:V, reg r224:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r225:V, reg r226:V, reg xacf8:*, reg xacf9:V, reg drop:cls, reg r227:V, reg as_double:cls, reg r228:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r229:V, reg r230:V, reg C_eureka:*, reg C_eureka1:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r231:V, reg r232:V, reg order_max25:*, reg order_max26:V, reg as_integer:cls, reg r233:V, reg r234:*, reg r235:V, reg r236:*, reg r237:V, reg double:cls, reg order_max27:*, reg order_max28:V, reg r238:V, reg p29:p(V +), reg r240:V, reg double1:cls, reg order_max29:*, reg order_max30:V, reg p30:p(V +), reg r242:V, reg double2:cls, reg order_max31:*, reg order_max32:V, reg p31:p(V +), reg r244:V, reg _Fortran:cls, reg r245:V, reg matrix:cls, reg z:*, reg z1:V, reg c52:L, reg z3:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg r246:V, reg p32:p(V +), reg order_max33:*, reg order_max34:V, reg p33:p(V +), reg order_max35:*, reg order_max36:V, reg p34:p(V +), reg r250:V, reg array3:cls, reg diag1:cls, reg coefs:*, reg coefs1:V, reg p35:p(V +), reg r252:V, reg p36:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r254:V, reg r255:V, reg order_max37:*, reg order_max38:V, reg c53:cls, reg r256:V, reg p37:p(V +), reg r258:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r259:V, reg r260:V, reg r261:*, reg r262:V, reg c54:L, reg r264:V, reg dr28:V, reg dc14:L, reg dx38:V, reg dx39:V, reg __8:cls, reg r265:V, reg z4:*, reg z5:V, reg c55:L, reg z7:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg r266:V, reg c56:cls, reg r267:V, reg n_obs10:*, reg n_obs11:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r268:V, reg n_obs14:V, reg r269:V, reg var_pred:*, reg var_pred1:V, reg r270:V, reg r271:V, reg order_max39:*, reg order_max40:V, reg r272:V, reg r273:V, reg r274:V, reg demean5:*, reg demean6:V, reg r275:V, reg r276:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r277:V, reg r278:V, reg aic3:*, reg aic4:V, reg min3:cls, reg r279:V, reg setNames1:cls, reg sym34:cls, reg base34:cls, reg guard34:L, reg r280:V, reg r281:V, reg maic:*, reg maic1:V, reg is_finite:cls, reg r282:V, reg c57:L, reg xaic18:*, reg xaic19:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r283:V, reg xaic22:V, reg r284:V, reg xaic23:*, reg xaic24:V, reg min4:cls, reg r285:V, reg r286:V, reg ifelse:cls, reg xaic25:*, reg xaic26:V, reg maic2:*, reg maic3:V, reg r287:V, reg p38:p(V +), reg r289:V, reg p39:p(V +), reg order_max41:*, reg order_max42:V, reg r291:V, reg p40:p(V +), reg r293:V, reg aic5:*, reg aic6:V, reg c58:L, reg order_max43:*, reg order_max44:V, reg r294:V, reg c59:L, reg r296:V, reg dr32:V, reg dc16:L, reg dx42:V, reg dx43:V, reg xaic27:*, reg xaic28:V, reg r297:V, reg __9:cls, reg r298:V, reg dx44:V, reg order_max45:*, reg order_max46:V, reg order6:*, reg order7:V, reg c60:L, reg coefs2:*, reg coefs3:V, reg c61:L, reg coefs5:V, reg dr34:V, reg dc17:L, reg dx45:V, reg dx46:V, reg order8:*, reg order9:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r299:V, reg coefs8:V, reg order12:V, reg r300:V, reg order13:*, reg order14:V, reg r301:I, reg __10:cls, reg r302:V, reg dx47:V, reg numeric1:cls, reg r303:V, reg var_pred2:*, reg var_pred3:V, reg c62:L, reg var_pred5:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg order15:*, reg order16:V, reg r304:V, reg __11:cls, reg r305:V, reg var_pred6:*, reg var_pred7:V, reg n_obs15:*, reg n_obs16:V, reg r306:V, reg n_obs17:*, reg n_obs18:V, reg order17:*, reg order18:V, reg r307:V, reg r308:V, reg r309:V, reg order19:*, reg order20:V, reg c63:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r310:V, reg r311:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r312:V, reg r313:V, reg order21:*, reg order22:V, reg rep_int1:cls, reg r314:V, reg embed:cls, reg x38:*, reg x39:V, reg p41:p(V +), reg order23:*, reg order24:V, reg r316:V, reg p42:p(V +), reg r318:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r319:V, reg r320:V, reg ar4:*, reg ar5:V, reg r321:V, reg c64:cls, reg r322:V, reg ___4:cls, reg r323:V, reg c65:cls, reg r324:V, reg r325:V, reg as_vector:cls, reg x40:*, reg x41:V, reg p43:p(V +), reg r327:V, reg ists2:*, reg ists3:V, reg c66:L, reg xtsp:*, reg xtsp1:V, reg l17:*, reg attr__:cls, reg r328:V, reg l18:*, reg attr__1:cls, reg r329:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r330:V, reg r331:V, reg order25:*, reg order26:V, reg ar6:*, reg ar7:V, reg var_pred8:*, reg var_pred9:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r332:V, reg r333:V, reg xm2:*, reg xm3:V, reg drop1:cls, reg r334:V, reg xaic29:*, reg xaic30:V, reg n_used:*, reg n_used1:V, reg n_obs19:*, reg n_obs20:V, reg order_max47:*, reg order_max48:V, reg partialacf:*, reg partialacf1:V, reg resid:*, reg resid1:V, reg series3:*, reg series4:V, reg xfreq:*, reg xfreq1:V, reg match_call:cls, reg r335:V, reg list4:cls, reg r336:V, reg nser20:*, reg nser21:V, reg r337:V, reg c67:L, reg c69:V, reg order27:*, reg order28:V, reg c70:L, reg c71:V, reg c73:L, reg var_pred10:*, reg var_pred11:V, reg n_obs21:*, reg n_obs22:V, reg r338:V, reg solve:cls, reg toeplitz:cls, reg sym42:cls, reg base42:cls, reg guard42:L, reg r339:V, reg r340:V, reg xacf10:*, reg xacf11:V, reg drop2:cls, reg r341:V, reg c74:L, reg r343:V, reg dr38:V, reg dc19:L, reg dx50:V, reg dx51:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r346:V, reg r347:V, reg r348:V, reg order29:*, reg order30:V, reg r349:I, reg __12:cls, reg r350:V, reg p44:p(V +), reg r352:V, reg p45:p(V +), reg r354:V, reg r355:V, reg l19:*, reg c75:L, reg r357:V, reg l21:*, reg dr40:V, reg dc20:L, reg dx52:V, reg r359:V, reg dx53:V, reg r360:V, reg l22:*, reg class__:cls, reg r362:V, reg res:*, reg res1:V |
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
    if guard then L92() else L93();
  L6(r2):
    c1 = `as.logical`(r2);
    if c1 then L95() else L7();
  L92():
    series1 = ld series;
    check L94() else D0();
  L93():
    r1 = dyn base(<sym series>);
    goto L6(r1);
  D0():
    deopt 1 [series1];
  L7():
    goto L8();
  L8():
    is_ts = ldf `is.ts`;
    check L99() else D3();
  L94():
    series2 = force? series1;
    checkMissing(series2);
    c = `==`(series2, NULL);
    goto L6(c);
  L95():
    deparse1 = ldf deparse1;
    check L96() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L96():
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
    check L97() else D2();
  L99():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r10 = dyn is_ts(p2);
    check L100() else D4();
  D2():
    deopt 7 [r7];
  D4():
    deopt 14 [r10];
  L97():
    st series = r7;
    goto L8();
  L100():
    st ists = r10;
    na_action1 = ldf `na.action`;
    check L101() else D5();
  D5():
    deopt 17 [];
  L101():
    p4 = prom<V +>{
      as_ts = ldf `as.ts`;
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r12 = dyn as_ts(p3);
      return r12;
    };
    r14 = dyn na_action1(p4);
    check L102() else D6();
  D6():
    deopt 19 [r14];
  L102():
    st x = r14;
    ists = ld ists;
    check L103() else D7();
  D7():
    deopt 21 [ists];
  L103():
    ists1 = force? ists;
    checkMissing(ists1);
    c2 = `as.logical`(ists1);
    if c2 then L104() else L9();
  L9():
    goto L10();
  L10():
    frequency = ldf frequency;
    check L108() else D10();
  L104():
    tsp = ldf tsp;
    check L105() else D8();
  D8():
    deopt 24 [];
  D10():
    deopt 31 [];
  L105():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r16 = dyn tsp(p5);
    check L106() else D9();
  L108():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r19 = dyn frequency(p6);
    check L109() else D11();
  D9():
    deopt 26 [r16];
  D11():
    deopt 33 [r19];
  L106():
    st xtsp = r16;
    goto L10();
  L109():
    st xfreq = r19;
    as_matrix = ldf `as.matrix`;
    check L110() else D12();
  D12():
    deopt 36 [];
  L110():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r21 = dyn as_matrix(p7);
    check L111() else D13();
  D13():
    deopt 38 [r21];
  L111():
    st x = r21;
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L112() else L113();
  L11(r23):
    r25 = `!`(r23);
    c3 = `as.logical`(r25);
    if c3 then L116() else L12();
  L112():
    x11 = ld x;
    check L114() else D14();
  L113():
    r22 = dyn base2(<sym x>);
    goto L11(r22);
  D14():
    deopt 42 [x11];
  L12():
    goto L13();
  L13():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L120() else L121();
  L114():
    x12 = force? x11;
    checkMissing(x12);
    is_numeric = ldf `is.numeric` in base;
    r24 = dyn is_numeric(x12);
    check L115() else D15();
  L116():
    stop = ldf stop;
    check L117() else D16();
  D15():
    deopt 45 [r24];
  D16():
    deopt 48 [];
  L14(r29):
    c5 = `as.logical`(r29);
    if c5 then L134() else L18();
  L115():
    goto L11(r24);
  L117():
    r26 = dyn stop("'x' must be numeric");
    check L118() else D17();
  L120():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L122() else L123();
  L121():
    r28 = dyn base3(<lang `!=`(is.na(x), is.na(`[`(x, , 1.0)))>);
    goto L14(r28);
  D17():
    deopt 50 [r26];
  L15(r31):
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L126() else L127();
  L18():
    goto L19();
  L19():
    ncol = ldf ncol;
    check L138() else D25();
  L118():
    goto L13();
  L122():
    x13 = ld x;
    check L124() else D18();
  L123():
    r30 = dyn base4(<sym x>);
    goto L15(r30);
  L134():
    stop1 = ldf stop;
    check L135() else D23();
  D18():
    deopt 57 [x13];
  D23():
    deopt 74 [];
  D25():
    deopt 80 [];
  L16(r36, r37):
    r44 = `!=`(r36, r37);
    any = ldf any in base;
    r45 = dyn any(r44);
    check L133() else D22();
  L124():
    x14 = force? x13;
    checkMissing(x14);
    is_na = ldf `is.na` in base;
    r32 = dyn is_na(x14);
    check L125() else D19();
  L126():
    x15 = ld x;
    check L128() else D20();
  L127():
    r35 = dyn base5(<lang `[`(x, , 1.0)>);
    goto L16(r31, r35);
  L135():
    r46 = dyn stop1("NAs in 'x' must be the same row-wise");
    check L136() else D24();
  L138():
    p8 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r49 = dyn ncol(p8);
    check L139() else D26();
  D19():
    deopt 60 [r32];
  D20():
    deopt 62 [r31, x15];
  D22():
    deopt 72 [r45];
  D24():
    deopt 76 [r46];
  D26():
    deopt 82 [r49];
  L125():
    goto L15(r32);
  L128():
    x16 = force? x15;
    checkMissing(x16);
    c4 = `is.object`(x16);
    if c4 then L129() else L130(r31);
  L133():
    goto L14(r45);
  L136():
    goto L19();
  L139():
    st nser = r49;
    demean1 = ld demean;
    check L140() else D27();
  D27():
    deopt 84 [demean1];
  L17(r41, dx1):
    is_na1 = ldf `is.na` in base;
    r43 = dyn is_na1(dx1);
    check L132() else D21();
  L129():
    dr = tryDispatchBuiltin.1("[", x16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L131() else L130(r31);
  L130(r39):
    __ = ldf `[` in base;
    r42 = dyn __(x16, <missing>, 1.0);
    goto L17(r39, r42);
  L140():
    demean2 = force? demean1;
    checkMissing(demean2);
    c6 = `as.logical`(demean2);
    if c6 then L141() else L20();
  D21():
    deopt 69 [r41, r43];
  L20():
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L147() else L148();
  L21():
    nrow = ldf nrow;
    check L151() else D34();
  L131():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(r31, dx);
  L132():
    goto L16(r41, r43);
  L141():
    colMeans = ldf colMeans;
    check L142() else D28();
  D28():
    deopt 87 [];
  D34():
    deopt 111 [];
  L22(r57):
    st xm = r57;
    goto L21();
  L142():
    p9 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r51 = dyn colMeans[, `na.rm`](p9, TRUE);
    check L143() else D29();
  L147():
    nser = ld nser;
    check L149() else D32();
  L148():
    r56 = dyn base6(0.0, <sym nser>);
    goto L22(r56);
  L151():
    p12 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    r60 = dyn nrow(p12);
    check L152() else D35();
  D29():
    deopt 91 [r51];
  D32():
    deopt 105 [nser];
  D35():
    deopt 113 [r60];
  L143():
    st xm = r51;
    sweep = ldf sweep;
    check L144() else D30();
  L149():
    nser1 = force? nser;
    checkMissing(nser1);
    rep_int = ldf `rep.int` in base;
    r58 = dyn rep_int(0.0, nser1);
    check L150() else D33();
  L152():
    st `n.used` = r60;
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L153() else L154();
  D30():
    deopt 94 [];
  D33():
    deopt 108 [r58];
  L23(r62):
    st `n.obs` = r62;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L163() else L164();
  L144():
    p10 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p11 = prom<V +>{
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      return xm1;
    };
    r54 = dyn sweep[, , , `check.margin`](p10, 2, p11, FALSE);
    check L145() else D31();
  L150():
    goto L22(r58);
  L153():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L155() else L156();
  L154():
    r61 = dyn base7(<lang `!`(is.na(`[`(x, , 1.0)))>);
    goto L23(r61);
  D31():
    deopt 100 [r54];
  L24(r64):
    r67 = `!`(r64);
    sum = ldf sum in base;
    r68 = dyn sum(r67);
    check L162() else D38();
  L26(r70):
    c9 = `as.logical`(r70);
    if c9 then L166() else L27();
  L145():
    st x = r54;
    goto L21();
  L155():
    x27 = ld x;
    check L157() else D36();
  L156():
    r63 = dyn base8(<lang `[`(x, , 1.0)>);
    goto L24(r63);
  L163():
    order_max1 = ld `order.max`;
    check L165() else D39();
  L164():
    r69 = dyn base9(<sym order.max>);
    goto L26(r69);
  D36():
    deopt 119 [x27];
  D38():
    deopt 129 [r68];
  D39():
    deopt 132 [order_max1];
  L27():
    sym13 = ldf floor;
    base13 = ldf floor in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L178() else L179();
  L31(r85):
    st `order.max` = r85;
    order_max5 = ld `order.max`;
    check L181() else D45();
  L157():
    x28 = force? x27;
    checkMissing(x28);
    c7 = `is.object`(x28);
    if c7 then L158() else L159();
  L162():
    goto L23(r68);
  L165():
    order_max2 = force? order_max1;
    checkMissing(order_max2);
    c8 = `==`(order_max2, NULL);
    goto L26(c8);
  L166():
    sym10 = ldf min;
    base10 = ldf min in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L167() else L168();
  D45():
    deopt 158 [order_max5];
  L25(dx3):
    is_na2 = ldf `is.na` in base;
    r66 = dyn is_na2(dx3);
    check L161() else D37();
  L28(r72):
    goto L31(r72);
  L158():
    dr2 = tryDispatchBuiltin.1("[", x28);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L160() else L159();
  L159():
    __1 = ldf `[` in base;
    r65 = dyn __1(x28, <missing>, 1.0);
    goto L25(r65);
  L167():
    n_obs = ld `n.obs`;
    check L169() else D40();
  L168():
    r71 = dyn base10(<lang `-`(n.obs, 1)>, <lang floor(`*`(10.0, log10(n.obs)))>);
    goto L28(r71);
  L178():
    order_max3 = ld `order.max`;
    check L180() else D44();
  L179():
    r86 = dyn base13(<sym order.max>);
    goto L31(r86);
  L181():
    order_max6 = force? order_max5;
    checkMissing(order_max6);
    r88 = `<`(order_max6, 1);
    c10 = `as.logical`(r88);
    if c10 then L182() else L32();
  D37():
    deopt 126 [r66];
  D40():
    deopt 137 [n_obs];
  D44():
    deopt 154 [order_max3];
  L32():
    order_max7 = ld `order.max`;
    check L186() else D48();
  L33():
    acf = ldf acf;
    check L192() else D52();
  L160():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L161():
    goto L24(r66);
  L169():
    n_obs1 = force? n_obs;
    checkMissing(n_obs1);
    r73 = `-`(n_obs1, 1);
    sym11 = ldf floor;
    base11 = ldf floor in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L170() else L171();
  L180():
    order_max4 = force? order_max3;
    checkMissing(order_max4);
    r87 = floor(order_max4);
    goto L31(r87);
  L182():
    stop2 = ldf stop;
    check L183() else D46();
  D46():
    deopt 163 [];
  D48():
    deopt 166 [order_max7];
  D52():
    deopt 177 [];
  L29(r75):
    min = ldf min in base;
    r84 = dyn min(r73, r75);
    check L176() else D43();
  L170():
    sym12 = ldf log10;
    base12 = ldf log10 in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L172() else L173();
  L171():
    r74 = dyn base11(<lang `*`(10.0, log10(n.obs))>);
    goto L29(r74);
  L183():
    r89 = dyn stop2("'order.max' must be >= 1");
    check L184() else D47();
  L186():
    order_max8 = force? order_max7;
    checkMissing(order_max8);
    n_obs4 = ld `n.obs`;
    check L187() else D49();
  L192():
    p13 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p14 = prom<V +>{
      order_max9 = ld `order.max`;
      order_max10 = force? order_max9;
      checkMissing(order_max10);
      return order_max10;
    };
    p15 = prom<V +>{
      demean3 = ld demean;
      demean4 = force? demean3;
      checkMissing(demean4);
      return demean4;
    };
    p16 = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    r97 = dyn acf[, type, `lag.max`, plot, demean, `na.action`](p13, "covariance", p14, FALSE, p15, p16);
    check L193() else D53();
  D43():
    deopt 152 [r84];
  D47():
    deopt 165 [r89];
  D49():
    deopt 167 [order_max8, n_obs4];
  D53():
    deopt 189 [r97];
  L30(r79, r80):
    r82 = `*`(r79, r80);
    r83 = floor(r82);
    goto L29(r83);
  L172():
    n_obs2 = ld `n.obs`;
    check L174() else D41();
  L173():
    r78 = dyn base12(<sym n.obs>);
    goto L30(10.0, r78);
  L176():
    goto L28(r84);
  L184():
    goto L33();
  L187():
    n_obs5 = force? n_obs4;
    checkMissing(n_obs5);
    r91 = `>=`(order_max8, n_obs5);
    c11 = `as.logical`(r91);
    if c11 then L188() else L34();
  L193():
    c12 = `is.object`(r97);
    if c12 then L195() else L196(r97);
  D41():
    deopt 145 [10.0, n_obs2];
  L34():
    goto L33();
  L174():
    n_obs3 = force? n_obs2;
    checkMissing(n_obs3);
    log10 = ldf log10 in base;
    r81 = dyn log10(n_obs3);
    check L175() else D42();
  L188():
    stop3 = ldf stop;
    check L189() else D50();
  L194(dx5):
    st xacf = dx5;
    nser2 = ld nser;
    check L198() else D54();
  L195():
    dr4 = tryDispatchBuiltin.1("$", r97);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L197() else L196(dr4);
  L196(r99):
    r100 = `$`(r99, <sym acf>);
    goto L194(r100);
  D42():
    deopt 148 [10.0, r81];
  D50():
    deopt 171 [];
  D54():
    deopt 192 [nser2];
  L175():
    goto L30(10.0, r81);
  L189():
    r92 = dyn stop3("'order.max' must be < 'n.obs'");
    check L190() else D51();
  L197():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L194(dx4);
  L198():
    nser3 = force? nser2;
    checkMissing(nser3);
    r101 = `>`(nser3, 1);
    c13 = `as.logical`(r101);
    if c13 then L199() else L35();
  D51():
    deopt 173 [r92];
  L35():
    xacf4 = ld xacf;
    check L316() else D120();
  L61():
    sym40 = ldf list;
    base40 = ldf list in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L433() else L434();
  L190():
    goto L33();
  L199():
    colnames = ldf colnames;
    check L200() else D55();
  D55():
    deopt 197 [];
  D120():
    deopt 448 [xacf4];
  L87(r331):
    st res = r331;
    nser20 = ld nser;
    check L453() else D202();
  L200():
    p17 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r103 = dyn colnames(p17);
    check L201() else D56();
  L316():
    xacf5 = force? xacf4;
    checkMissing(xacf5);
    c50 = `is.object`(xacf5);
    if c50 then L317() else L318(xacf5);
  L433():
    order25 = ld order;
    check L435() else D186();
  L434():
    r330 = dyn base40[order, ar, `var.pred`, `x.mean`, aic, `n.used`, `n.obs`, `order.max`, partialacf, resid, method, series, frequency, call](<sym order>, <sym ar>, <sym var.pred>, <lang drop(xm)>, <sym xaic>, <sym n.used>, <sym n.obs>, <sym order.max>, <sym partialacf>, <sym resid>, "Yule-Walker", <sym series>, <sym xfreq>, <lang match.call()>);
    goto L87(r330);
  D56():
    deopt 199 [r103];
  D186():
    deopt 663 [order25];
  D202():
    deopt 712 [nser20];
  L62(dx35):
    r220 = `==`(dx35, 0.0);
    c51 = `as.logical`(r220);
    if c51 then L320() else L63();
  L201():
    st snames = r103;
    array = ldf array;
    check L202() else D57();
  L317():
    dr24 = tryDispatchBuiltin.1("[", xacf5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L319() else L318(dr24);
  L318(xacf7):
    __7 = ldf `[` in base;
    r219 = dyn __7(xacf7, 1);
    goto L62(r219);
  L435():
    order26 = force? order25;
    checkMissing(order26);
    ar6 = ld ar;
    check L436() else D187();
  L453():
    nser21 = force? nser20;
    checkMissing(nser21);
    r337 = `==`(nser21, 1);
    c67 = `as.logical`(r337);
    if c67 then L454() else L89(c67);
  D57():
    deopt 202 [];
  D187():
    deopt 666 [ar6];
  L63():
    goto L64();
  L64():
    sym26 = ldf `as.double`;
    base26 = ldf `as.double` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L324() else L325();
  L89(c69):
    c73 = `as.logical`(c69);
    if c73 then L457() else L90();
  L202():
    p18 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      order_max11 = ld `order.max`;
      order_max12 = force? order_max11;
      checkMissing(order_max12);
      r106 = `+`(order_max12, 1);
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      nser6 = ld nser;
      nser7 = force? nser6;
      checkMissing(nser7);
      c14 = ldf c in base;
      r107 = dyn c14(r106, nser5, nser7);
      goto L0(r107);
    L2():
      r104 = dyn base14(<lang `+`(order.max, 1)>, <sym nser>, <sym nser>);
      goto L0(r104);
    };
    r109 = dyn array[, dim](0.0, p18);
    check L203() else D58();
  L319():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L62(dx34);
  L320():
    stop4 = ldf stop;
    check L321() else D121();
  L436():
    ar7 = force? ar6;
    checkMissing(ar7);
    var_pred8 = ld `var.pred`;
    check L437() else D188();
  L454():
    order27 = ld order;
    check L455() else D203();
  D58():
    deopt 206 [r109];
  D121():
    deopt 456 [];
  D188():
    deopt 669 [var_pred8];
  D203():
    deopt 716 [c67, order27];
  L65(r224):
    st r = r224;
    sym28 = ldf `.Fortran`;
    base28 = ldf `.Fortran` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L331() else L332();
  L90():
    goto L91();
  L91():
    l22 = ld res;
    class__ = ldf `class<-`;
    check L467() else D208();
  L203():
    st B = r109;
    st A = r109;
    diag = ldf diag;
    check L204() else D59();
  L321():
    r221 = dyn stop4("zero-variance series");
    check L322() else D122();
  L324():
    sym27 = ldf drop;
    base27 = ldf drop in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L326() else L327();
  L325():
    r223 = dyn base26(<lang drop(xacf)>);
    goto L65(r223);
  L437():
    var_pred9 = force? var_pred8;
    checkMissing(var_pred9);
    sym41 = ldf drop;
    base41 = ldf drop in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L438() else L439();
  L455():
    order28 = force? order27;
    checkMissing(order28);
    c70 = `as.logical`(order28);
    c71 = `&&`(c67, c70);
    goto L89(c71);
  L457():
    var_pred10 = ld `var.pred`;
    check L458() else D204();
  D59():
    deopt 210 [];
  D122():
    deopt 458 [r221];
  D204():
    deopt 719 [var_pred10];
  D208():
    deopt 735 ["ar", l22, "ar"];
  L66(r226):
    as_double = ldf `as.double` in base;
    r228 = dyn as_double(r226);
    check L330() else D125();
  L67(r230):
    st z = r230;
    matrix = ldf matrix;
    check L347() else D138();
  L88(r333):
    xaic29 = ld xaic;
    check L442() else D191();
  L204():
    p19 = prom<V +>{
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      return nser9;
    };
    r111 = dyn diag(p19);
    check L205() else D60();
  L322():
    goto L64();
  L326():
    xacf8 = ld xacf;
    check L328() else D123();
  L327():
    r225 = dyn base27(<sym xacf>);
    goto L66(r225);
  L331():
    C_eureka = ld C_eureka;
    check L333() else D126();
  L332():
    r229 = dyn base28[, , , , coefs, vars, ](<sym C_eureka>, <lang as.integer(order.max)>, <sym r>, <sym r>, <lang double(`^`(order.max, 2.0))>, <lang double(order.max)>, <lang double(order.max)>);
    goto L67(r229);
  L438():
    xm2 = ld xm;
    check L440() else D189();
  L439():
    r332 = dyn base41(<sym xm>);
    goto L88(r332);
  L458():
    var_pred11 = force? var_pred10;
    checkMissing(var_pred11);
    n_obs21 = ld `n.obs`;
    check L459() else D205();
  L467():
    r362 = dyn class__(l22, NULL, "ar");
    check L468() else D209();
  D60():
    deopt 212 [r111];
  D123():
    deopt 465 [xacf8];
  D125():
    deopt 470 [r228];
  D126():
    deopt 474 [C_eureka];
  D138():
    deopt 504 [];
  D189():
    deopt 674 [xm2];
  D191():
    deopt 679 [xaic29];
  D205():
    deopt 720 [var_pred11, n_obs21];
  D209():
    deopt 737 ["ar", r362];
  L205():
    l = ld B;
    c15 = `is.object`(l);
    if c15 then L206() else L207(r111);
  L328():
    xacf9 = force? xacf8;
    checkMissing(xacf9);
    drop = ldf drop in base;
    r227 = dyn drop(xacf9);
    check L329() else D124();
  L330():
    goto L65(r228);
  L333():
    C_eureka1 = force? C_eureka;
    checkMissing(C_eureka1);
    sym29 = ldf `as.integer`;
    base29 = ldf `as.integer` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L334() else L335();
  L347():
    p32 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c52 = `is.object`(z1);
      if c52 then L1() else L2(z1);
    L0(dx37):
      return dx37;
    L1():
      dr26 = tryDispatchBuiltin.1("$", z1);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(z3):
      r246 = `$`(z3, <sym coefs>);
      goto L0(r246);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx36);
    };
    p33 = prom<V +>{
      order_max33 = ld `order.max`;
      order_max34 = force? order_max33;
      checkMissing(order_max34);
      return order_max34;
    };
    p34 = prom<V +>{
      order_max35 = ld `order.max`;
      order_max36 = force? order_max35;
      checkMissing(order_max36);
      return order_max36;
    };
    r250 = dyn matrix(p32, p33, p34);
    check L348() else D139();
  L440():
    xm3 = force? xm2;
    checkMissing(xm3);
    drop1 = ldf drop in base;
    r334 = dyn drop1(xm3);
    check L441() else D190();
  L442():
    xaic30 = force? xaic29;
    checkMissing(xaic30);
    n_used = ld `n.used`;
    check L443() else D192();
  L459():
    n_obs22 = force? n_obs21;
    checkMissing(n_obs22);
    r338 = `/`(var_pred11, n_obs22);
    solve = ldf solve;
    check L460() else D206();
  L468():
    st res = r362;
    res = ld res;
    check L469() else D210();
  D124():
    deopt 468 [r227];
  D139():
    deopt 508 [r250];
  D190():
    deopt 677 [r334];
  D192():
    deopt 682 [n_used];
  D206():
    deopt 723 [r338];
  D210():
    deopt 739 [res];
  L36(r115, dx7):
    st B = dx7;
    l3 = ld A;
    c16 = `is.object`(l3);
    if c16 then L209() else L210(r115);
  L68(r232):
    r234 = ld r;
    check L338() else D129();
  L206():
    dr6 = tryDispatchBuiltin.0("[<-", l, r111);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L208() else L207(r111);
  L207(r113):
    ___ = ldf `[<-` in base;
    r116 = dyn ___(l, 1, <missing>, <missing>, r111);
    goto L36(r113, r116);
  L329():
    goto L66(r227);
  L334():
    order_max25 = ld `order.max`;
    check L336() else D127();
  L335():
    r231 = dyn base29(<sym order.max>);
    goto L68(r231);
  L348():
    st coefs = r250;
    array3 = ldf array;
    check L349() else D140();
  L441():
    goto L88(r334);
  L443():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    n_obs19 = ld `n.obs`;
    check L444() else D193();
  L460():
    p45 = prom<V +>{
      toeplitz = ldf toeplitz;
      p44 = prom<V +>{
        sym42 = ldf drop;
        base42 = ldf drop in base;
        guard42 = `==`.4(sym42, base42);
        if guard42 then L3() else L4();
      L0(r340):
        c74 = `is.object`(r340);
        if c74 then L5() else L6(r340);
      L3():
        xacf10 = ld xacf;
        xacf11 = force? xacf10;
        checkMissing(xacf11);
        drop2 = ldf drop in base;
        r341 = dyn drop2(xacf11);
        goto L0(r341);
      L4():
        r339 = dyn base42(<sym xacf>);
        goto L0(r339);
      L1(dx51):
        return dx51;
      L5():
        dr38 = tryDispatchBuiltin.1("[", r340);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L7() else L6(dr38);
      L6(r343):
        sym43 = ldf seq_len;
        base43 = ldf seq_len in base;
        guard43 = `==`.4(sym43, base43);
        if guard43 then L8() else L9();
      L2(r347, r348):
        __12 = ldf `[` in base;
        r350 = dyn __12(r347, r348);
        goto L1(r350);
      L7():
        dx50 = getTryDispatchBuiltinValue(dr38);
        goto L1(dx50);
      L8():
        order29 = ld order;
        order30 = force? order29;
        checkMissing(order30);
        r349 = seq_len(order30);
        goto L2(r343, r349);
      L9():
        r346 = dyn base43(<sym order>);
        goto L2(r343, r346);
      };
      r352 = dyn toeplitz(p44);
      return r352;
    };
    r354 = dyn solve(p45);
    check L461() else D207();
  L469():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D127():
    deopt 478 [order_max25];
  D129():
    deopt 482 [r234];
  D140():
    deopt 511 [];
  D193():
    deopt 685 [n_obs19];
  D207():
    deopt 725 [r338, r354];
  L37(dx9):
    st A = dx9;
    xacf = ld xacf;
    check L212() else D61();
  L208():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(r111, dx6);
  L209():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r115);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L211() else L210(r115);
  L210(r118):
    ___1 = ldf `[<-` in base;
    r121 = dyn ___1(l3, 1, <missing>, <missing>, r115);
    goto L37(r121);
  L336():
    order_max26 = force? order_max25;
    checkMissing(order_max26);
    as_integer = ldf `as.integer` in base;
    r233 = dyn as_integer(order_max26);
    check L337() else D128();
  L338():
    r235 = force? r234;
    checkMissing(r235);
    r236 = ld r;
    check L339() else D130();
  L349():
    p36 = prom<V +>{
      diag1 = ldf diag;
      p35 = prom<V +>{
        coefs = ld coefs;
        coefs1 = force? coefs;
        checkMissing(coefs1);
        return coefs1;
      };
      r252 = dyn diag1(p35);
      return r252;
    };
    p37 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r255):
      return r255;
    L1():
      order_max37 = ld `order.max`;
      order_max38 = force? order_max37;
      checkMissing(order_max38);
      c53 = ldf c in base;
      r256 = dyn c53(order_max38, 1, 1);
      goto L0(r256);
    L2():
      r254 = dyn base30(<sym order.max>, 1, 1);
      goto L0(r254);
    };
    r258 = dyn array3[, dim](p36, p37);
    check L350() else D141();
  L444():
    n_obs20 = force? n_obs19;
    checkMissing(n_obs20);
    order_max47 = ld `order.max`;
    check L445() else D194();
  L461():
    r355 = `*`(r338, r354);
    l19 = ld res;
    c75 = `is.object`(l19);
    if c75 then L463() else L464(r355, l19);
  D61():
    deopt 227 [xacf];
  D128():
    deopt 481 [r233];
  D130():
    deopt 484 [r236];
  D141():
    deopt 515 [r258];
  D194():
    deopt 688 [order_max47];
  L211():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L37(dx8);
  L212():
    xacf1 = force? xacf;
    checkMissing(xacf1);
    c17 = `is.object`(xacf1);
    if c17 then L213() else L214();
  L337():
    goto L68(r233);
  L339():
    r237 = force? r236;
    checkMissing(r237);
    double = ldf double;
    check L340() else D131();
  L350():
    st partialacf = r258;
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L351() else L352();
  L445():
    order_max48 = force? order_max47;
    checkMissing(order_max48);
    partialacf = ld partialacf;
    check L446() else D195();
  L462(r359, dx53):
    st res = dx53;
    goto L91();
  L463():
    dr40 = tryDispatchBuiltin.0("$<-", l19, r355);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L465() else L464(r355, dr40);
  L464(r357, l21):
    r360 = `$<-`(l21, <sym asy.var.coef>, r355);
    goto L462(r357, r360);
  D131():
    deopt 487 [];
  D195():
    deopt 691 [partialacf];
  L38(dx11):
    st EB = dx11;
    st EA = dx11;
    array1 = ldf array;
    check L216() else D62();
  L69(r260):
    st `var.pred` = r260;
    n_obs10 = ld `n.obs`;
    check L363() else D145();
  L213():
    dr10 = tryDispatchBuiltin.1("[", xacf1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L215() else L214();
  L214():
    __2 = ldf `[` in base;
    r122 = dyn __2(xacf1, 1, <missing>, <missing>, TRUE);
    goto L38(r122);
  L340():
    p29 = prom<V +>{
      order_max27 = ld `order.max`;
      order_max28 = force? order_max27;
      checkMissing(order_max28);
      r238 = `^`(order_max28, 2.0);
      return r238;
    };
    r240 = dyn double(p29);
    check L341() else D132();
  L351():
    r261 = ld r;
    check L353() else D142();
  L352():
    r259 = dyn base31(<lang `[`(r, 1)>, <lang `$`(z, vars)>);
    goto L69(r259);
  L446():
    partialacf1 = force? partialacf;
    checkMissing(partialacf1);
    resid = ld resid;
    check L447() else D196();
  L465():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L462(r355, dx52);
  D62():
    deopt 239 [];
  D132():
    deopt 489 [r240];
  D142():
    deopt 519 [r261];
  D145():
    deopt 530 [n_obs10];
  D196():
    deopt 694 [resid];
  L215():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L38(dx10);
  L216():
    p20 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r124):
      return r124;
    L1():
      order_max13 = ld `order.max`;
      order_max14 = force? order_max13;
      checkMissing(order_max14);
      nser10 = ld nser;
      nser11 = force? nser10;
      checkMissing(nser11);
      nser12 = ld nser;
      nser13 = force? nser12;
      checkMissing(nser13);
      c18 = ldf c in base;
      r125 = dyn c18(order_max14, nser11, nser13);
      goto L0(r125);
    L2():
      r123 = dyn base15(<sym order.max>, <sym nser>, <sym nser>);
      goto L0(r123);
    };
    r127 = dyn array1[dim](p20);
    check L217() else D63();
  L341():
    double1 = ldf double;
    check L342() else D133();
  L353():
    r262 = force? r261;
    checkMissing(r262);
    c54 = `is.object`(r262);
    if c54 then L354() else L355(r262);
  L363():
    n_obs11 = force? n_obs10;
    checkMissing(n_obs11);
    sym32 = ldf log;
    base32 = ldf log in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L364() else L365();
  L447():
    resid1 = force? resid;
    checkMissing(resid1);
    series3 = ld series;
    check L448() else D197();
  D63():
    deopt 242 [r127];
  D133():
    deopt 492 [];
  D197():
    deopt 699 [series3];
  L70(dx39):
    z4 = ld z;
    check L357() else D143();
  L71(n_obs14, r269):
    r271 = `*`(n_obs14, r269);
    order_max39 = ld `order.max`;
    check L367() else D147();
  L217():
    st partialacf = r127;
    numeric = ldf numeric;
    check L218() else D64();
  L342():
    p30 = prom<V +>{
      order_max29 = ld `order.max`;
      order_max30 = force? order_max29;
      checkMissing(order_max30);
      return order_max30;
    };
    r242 = dyn double1(p30);
    check L343() else D134();
  L354():
    dr28 = tryDispatchBuiltin.1("[", r262);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L356() else L355(dr28);
  L355(r264):
    __8 = ldf `[` in base;
    r265 = dyn __8(r264, 1);
    goto L70(r265);
  L364():
    var_pred = ld `var.pred`;
    check L366() else D146();
  L365():
    r268 = dyn base32(<sym var.pred>);
    goto L71(n_obs11, r268);
  L448():
    series4 = force? series3;
    checkMissing(series4);
    xfreq = ld xfreq;
    check L449() else D198();
  D64():
    deopt 245 [];
  D134():
    deopt 494 [r242];
  D143():
    deopt 524 [z4];
  D146():
    deopt 532 [n_obs11, var_pred];
  D147():
    deopt 537 [r271, 2.0, 0, order_max39];
  D198():
    deopt 702 [xfreq];
  L218():
    p21 = prom<V +>{
      order_max15 = ld `order.max`;
      order_max16 = force? order_max15;
      checkMissing(order_max16);
      r128 = `+`(order_max16, 1);
      return r128;
    };
    r130 = dyn numeric(p21);
    check L219() else D65();
  L343():
    double2 = ldf double;
    check L344() else D135();
  L356():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L70(dx38);
  L357():
    z5 = force? z4;
    checkMissing(z5);
    c55 = `is.object`(z5);
    if c55 then L359() else L360(z5);
  L366():
    var_pred1 = force? var_pred;
    checkMissing(var_pred1);
    r270 = log(var_pred1, 2.718281828459045);
    goto L71(n_obs11, r270);
  L367():
    order_max40 = force? order_max39;
    checkMissing(order_max40);
    r272 = `:`(0, order_max40);
    r273 = `*`(2.0, r272);
    r274 = `+`(r271, r273);
    demean5 = ld demean;
    check L368() else D148();
  L449():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    match_call = ldf `match.call`;
    check L450() else D199();
  D65():
    deopt 247 [r130];
  D135():
    deopt 497 [];
  D148():
    deopt 542 [r274, 2.0, demean5];
  D199():
    deopt 706 [];
  L219():
    st xaic = r130;
    r131 = clos inner2296048169;
    st `solve.yw` = r131;
    r132 = clos inner2296048169;
    st `cal.aic` = r132;
    r133 = clos inner2708337952;
    st `cal.resid` = r133;
    st order = 0;
    order_max17 = ld `order.max`;
    check L220() else D66();
  L344():
    p31 = prom<V +>{
      order_max31 = ld `order.max`;
      order_max32 = force? order_max31;
      checkMissing(order_max32);
      return order_max32;
    };
    r244 = dyn double2(p31);
    check L345() else D136();
  L358(dx41):
    c56 = ldf c in base;
    r267 = dyn c56(dx39, dx41);
    check L362() else D144();
  L359():
    dr30 = tryDispatchBuiltin.1("$", z5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L361() else L360(dr30);
  L360(z7):
    r266 = `$`(z7, <sym vars>);
    goto L358(r266);
  L368():
    demean6 = force? demean5;
    checkMissing(demean6);
    r275 = `*`(2.0, demean6);
    r276 = `+`(r274, r275);
    st xaic = r276;
    sym33 = ldf min;
    base33 = ldf min in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L369() else L370();
  L450():
    r335 = dyn match_call();
    check L451() else D200();
  D66():
    deopt 262 [0, order_max17];
  D136():
    deopt 499 [r244];
  D144():
    deopt 528 [r267];
  D200():
    deopt 707 [r335];
  L72(r278):
    st maic = r278;
    setNames1 = ldf setNames;
    check L373() else D151();
  L220():
    order_max18 = force? order_max17;
    checkMissing(order_max18);
    r134 = `:`(0, order_max18);
    s = toForSeq(r134);
    l6 = length(s);
    i = 0;
    goto L39(i);
  L345():
    _Fortran = ldf `.Fortran` in base;
    r245 = dyn _Fortran(C_eureka1, r232, r235, r237, r240, r242, r244);
    check L346() else D137();
  L361():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L358(dx40);
  L362():
    goto L69(r267);
  L369():
    aic3 = ld aic;
    check L371() else D149();
  L370():
    r277 = dyn base33(<sym aic>);
    goto L72(r277);
  L451():
    list4 = ldf list in base;
    r336 = dyn list4(order26, ar7, var_pred9, r333, xaic30, n_used1, n_obs20, order_max48, partialacf1, resid1, "Yule-Walker", series4, xfreq1, r335);
    check L452() else D201();
  D137():
    deopt 501 [r245];
  D149():
    deopt 549 [aic3];
  D151():
    deopt 555 [];
  D201():
    deopt 710 [r336];
  L39(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l6, i2);
    if c19 then L221() else L52();
  L346():
    goto L67(r245);
  L371():
    aic4 = force? aic3;
    checkMissing(aic4);
    min3 = ldf min in base;
    r279 = dyn min3(aic4);
    check L372() else D150();
  L373():
    p39 = prom<V +>{
      sym34 = ldf `is.finite`;
      base34 = ldf `is.finite` in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L3() else L4();
    L0(r281):
      c57 = `as.logical`(r281);
      if c57 then L5() else L1();
    L3():
      maic = ld maic;
      maic1 = force? maic;
      checkMissing(maic1);
      is_finite = ldf `is.finite` in base;
      r282 = dyn is_finite(maic1);
      goto L0(r282);
    L4():
      r280 = dyn base34(<sym maic>);
      goto L0(r280);
    L1():
      ifelse = ldf ifelse;
      p38 = prom<V +>{
        xaic25 = ld xaic;
        xaic26 = force? xaic25;
        checkMissing(xaic26);
        maic2 = ld maic;
        maic3 = force? maic2;
        checkMissing(maic3);
        r287 = `==`(xaic26, maic3);
        return r287;
      };
      r289 = dyn ifelse(p38, 0.0, +Infinity);
      return r289;
    L5():
      xaic18 = ld xaic;
      xaic19 = force? xaic18;
      checkMissing(xaic19);
      sym35 = ldf min;
      base35 = ldf min in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L6() else L7();
    L2(xaic22, r284):
      r286 = `-`(xaic22, r284);
      return r286;
    L6():
      xaic23 = ld xaic;
      xaic24 = force? xaic23;
      checkMissing(xaic24);
      min4 = ldf min in base;
      r285 = dyn min4(xaic24);
      goto L2(xaic19, r285);
    L7():
      r283 = dyn base35(<sym xaic>);
      goto L2(xaic19, r283);
    };
    p40 = prom<V +>{
      order_max41 = ld `order.max`;
      order_max42 = force? order_max41;
      checkMissing(order_max42);
      r291 = `:`(0, order_max42);
      return r291;
    };
    r293 = dyn setNames1(p39, p40);
    check L374() else D152();
  L452():
    goto L87(r336);
  D150():
    deopt 552 [r279];
  D152():
    deopt 558 [r293];
  L52():
    x35 = `[[`(s, i2, NULL, TRUE);
    st m = x35;
    cal_aic = ldf `cal.aic`;
    check L222() else D67();
  L221():
    setNames = ldf setNames;
    check L270() else D90();
  L372():
    goto L72(r279);
  L374():
    st xaic = r293;
    aic5 = ld aic;
    check L375() else D153();
  D67():
    deopt 266 [i2];
  D90():
    deopt 356 [];
  D153():
    deopt 560 [aic5];
  L222():
    p22 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r136 = dyn cal_aic(p22);
    check L223() else D68();
  L270():
    p24 = prom<V +>{
      xaic11 = ld xaic;
      xaic12 = force? xaic11;
      checkMissing(xaic12);
      sym18 = ldf min;
      base18 = ldf min in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(xaic15, r175):
      r177 = `-`(xaic15, r175);
      return r177;
    L1():
      xaic16 = ld xaic;
      xaic17 = force? xaic16;
      checkMissing(xaic17);
      min2 = ldf min in base;
      r176 = dyn min2(xaic17);
      goto L0(xaic12, r176);
    L2():
      r174 = dyn base18(<sym xaic>);
      goto L0(xaic12, r174);
    };
    p25 = prom<V +>{
      order_max21 = ld `order.max`;
      order_max22 = force? order_max21;
      checkMissing(order_max22);
      r179 = `:`(0, order_max22);
      return r179;
    };
    r181 = dyn setNames(p24, p25);
    check L271() else D91();
  L375():
    aic6 = force? aic5;
    checkMissing(aic6);
    c58 = `as.logical`(aic6);
    if c58 then L376() else L73();
  D68():
    deopt 268 [i2, r136];
  D91():
    deopt 359 [r181];
  L73():
    order_max45 = ld `order.max`;
    check L383() else D156();
  L75(dx44):
    st order = dx44;
    order6 = ld order;
    check L384() else D157();
  L223():
    l7 = ld xaic;
    c20 = `is.object`(l7);
    if c20 then L224() else L225(i2, r136, l7);
  L271():
    st xaic = r181;
    cal_resid = ldf `cal.resid`;
    check L272() else D92();
  L376():
    order_max43 = ld `order.max`;
    check L377() else D154();
  D92():
    deopt 362 [];
  D154():
    deopt 563 [0, order_max43];
  D156():
    deopt 571 [order_max45];
  D157():
    deopt 574 [order6];
  L40(i8, dx13):
    st xaic = dx13;
    aic1 = ld aic;
    check L228() else D70();
  L224():
    dr12 = tryDispatchBuiltin.0("[<-", l7, r136);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L226() else L225(i2, r136, dr12);
  L225(i6, r138, l9):
    m2 = ld m;
    check L227() else D69();
  L272():
    r182 = dyn cal_resid();
    check L273() else D93();
  L377():
    order_max44 = force? order_max43;
    checkMissing(order_max44);
    r294 = `:`(0, order_max44);
    c59 = `is.object`(r294);
    if c59 then L378() else L379(r294);
  L383():
    order_max46 = force? order_max45;
    checkMissing(order_max46);
    goto L75(order_max46);
  L384():
    order7 = force? order6;
    checkMissing(order7);
    c60 = `as.logical`(order7);
    if c60 then L385() else L76();
  D69():
    deopt 270 [i6, r138, l9, r136, m2];
  D70():
    deopt 276 [i8, aic1];
  D93():
    deopt 363 [r182];
  L74(dx43):
    goto L75(dx43);
  L76():
    numeric1 = ldf numeric;
    check L395() else D161();
  L79(dx47):
    st ar = dx47;
    var_pred2 = ld `var.pred`;
    check L397() else D163();
  L226():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L40(i2, dx12);
  L227():
    m3 = force? m2;
    checkMissing(m3);
    r141 = `+`(m3, 1);
    ___2 = ldf `[<-` in base;
    r142 = dyn ___2(l9, r136, r141);
    goto L40(i6, r142);
  L228():
    aic2 = force? aic1;
    checkMissing(aic2);
    r143 = `!`(aic2);
    c21 = `as.logical`(r143);
    if c21 then L41(i8, c21) else L229();
  L273():
    st resid = r182;
    order = ld order;
    check L274() else D94();
  L378():
    dr32 = tryDispatchBuiltin.1("[", r294);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L380() else L379(dr32);
  L379(r296):
    xaic27 = ld xaic;
    check L381() else D155();
  L385():
    coefs2 = ld coefs;
    check L386() else D158();
  D94():
    deopt 365 [order];
  D155():
    deopt 566 [r296, xaic27];
  D158():
    deopt 576 [coefs2];
  D161():
    deopt 585 [];
  D163():
    deopt 588 [var_pred2];
  L41(i9, c22):
    c43 = `as.logical`(c22);
    if c43 then L246() else L46();
  L229():
    xaic = ld xaic;
    check L230() else D71();
  L274():
    order1 = force? order;
    checkMissing(order1);
    c47 = `as.logical`(order1);
    if c47 then L275() else L53();
  L380():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L74(dx42);
  L381():
    xaic28 = force? xaic27;
    checkMissing(xaic28);
    r297 = `==`(xaic28, 0);
    __9 = ldf `[` in base;
    r298 = dyn __9(r296, r297);
    goto L74(r298);
  L386():
    coefs3 = force? coefs2;
    checkMissing(coefs3);
    c61 = `is.object`(coefs3);
    if c61 then L387() else L388(coefs3);
  L395():
    r303 = dyn numeric1();
    check L396() else D162();
  L397():
    var_pred3 = force? var_pred2;
    checkMissing(var_pred3);
    c62 = `is.object`(var_pred3);
    if c62 then L398() else L399(var_pred3);
  D71():
    deopt 279 [i8, c21, xaic];
  D162():
    deopt 586 [r303];
  L46():
    goto L47(i9);
  L47(i28):
    m12 = ld m;
    check L255() else D83();
  L53():
    array2 = ldf array;
    check L292() else D103();
  L57():
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L294() else L295();
  L77(dx46):
    goto L79(dx46);
  L80(dx49):
    st `var.pred` = dx49;
    var_pred6 = ld `var.pred`;
    check L402() else D165();
  L230():
    xaic1 = force? xaic;
    checkMissing(xaic1);
    c24 = `is.object`(xaic1);
    if c24 then L231() else L232(i8, c21, xaic1);
  L246():
    A = ld A;
    check L247() else D76();
  L275():
    ar = ld ar;
    check L276() else D95();
  L387():
    dr34 = tryDispatchBuiltin.1("[", coefs3);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L389() else L388(dr34);
  L388(coefs5):
    order8 = ld order;
    check L390() else D159();
  L396():
    goto L79(r303);
  L398():
    dr36 = tryDispatchBuiltin.1("[", var_pred3);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L400() else L399(dr36);
  L399(var_pred5):
    order15 = ld order;
    check L401() else D164();
  D76():
    deopt 300 [i9, A];
  D83():
    deopt 321 [i28, m12];
  D95():
    deopt 367 [ar];
  D103():
    deopt 401 [];
  D159():
    deopt 578 [coefs5, order8];
  D164():
    deopt 590 [var_pred5, order15];
  D165():
    deopt 596 [var_pred6];
  L42(i14, c28, dx15):
    sym16 = ldf min;
    base16 = ldf min in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L235() else L236();
  L58(r205):
    l14 = ld `var.pred`;
    dimnames__1 = ldf `dimnames<-`;
    check L299() else D108();
  L231():
    dr14 = tryDispatchBuiltin.1("[", xaic1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L233() else L232(i8, c21, dr14);
  L232(i12, c26, xaic3):
    m4 = ld m;
    check L234() else D72();
  L247():
    A1 = force? A;
    checkMissing(A1);
    st ar = A1;
    m8 = ld m;
    check L248() else D77();
  L255():
    m13 = force? m12;
    checkMissing(m13);
    order_max19 = ld `order.max`;
    check L256() else D84();
  L276():
    ar1 = force? ar;
    checkMissing(ar1);
    c48 = `is.object`(ar1);
    if c48 then L277() else L278(ar1);
  L292():
    p26 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r196):
      return r196;
    L1():
      nser16 = ld nser;
      nser17 = force? nser16;
      checkMissing(nser17);
      nser18 = ld nser;
      nser19 = force? nser18;
      checkMissing(nser19);
      c49 = ldf c in base;
      r197 = dyn c49(0, nser17, nser19);
      goto L0(r197);
    L2():
      r195 = dyn base21(0, <sym nser>, <sym nser>);
      goto L0(r195);
    };
    p27 = prom<V +>{
      sym22 = ldf list;
      base22 = ldf list in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r200):
      return r200;
    L1():
      snames4 = ld snames;
      snames5 = force? snames4;
      checkMissing(snames5);
      snames6 = ld snames;
      snames7 = force? snames6;
      checkMissing(snames7);
      list1 = ldf list in base;
      r201 = dyn list1(NULL, snames5, snames7);
      goto L0(r201);
    L2():
      r199 = dyn base22(NULL, <sym snames>, <sym snames>);
      goto L0(r199);
    };
    r203 = dyn array2[, dim, dimnames](0.0, p26, p27);
    check L293() else D104();
  L294():
    snames8 = ld snames;
    check L296() else D105();
  L295():
    r204 = dyn base23(<sym snames>, <sym snames>);
    goto L58(r204);
  L389():
    dx45 = getTryDispatchBuiltinValue(dr34);
    goto L77(dx45);
  L390():
    order9 = force? order8;
    sym36 = ldf seq_len;
    base36 = ldf seq_len in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L391() else L392();
  L400():
    dx48 = getTryDispatchBuiltinValue(dr36);
    goto L80(dx48);
  L401():
    order16 = force? order15;
    checkMissing(order16);
    r304 = `+`(order16, 1);
    __11 = ldf `[` in base;
    r305 = dyn __11(var_pred5, r304);
    goto L80(r305);
  L402():
    var_pred7 = force? var_pred6;
    checkMissing(var_pred7);
    n_obs15 = ld `n.obs`;
    check L403() else D166();
  D72():
    deopt 281 [i12, c26, xaic3, m4];
  D77():
    deopt 303 [i9, m8];
  D84():
    deopt 322 [i28, m13, order_max19];
  D104():
    deopt 407 [r203];
  D105():
    deopt 411 [snames8];
  D108():
    deopt 418 [r205, l14, r205];
  D166():
    deopt 597 [var_pred7, n_obs15];
  L43(i17, c31, dx18, r147):
    r154 = `==`(dx18, r147);
    c40 = `as.logical`(r154);
    c41 = `||`(c31, c40);
    goto L41(i17, c41);
  L54(dx33):
    r186 = `-`(<missing>, dx33);
    st ar = r186;
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L281() else L282();
  L78(coefs8, order12, r300):
    __10 = ldf `[` in base;
    r302 = dyn __10(coefs8, order12, r300);
    goto L77(r302);
  L233():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L42(i8, c21, dx14);
  L234():
    m5 = force? m4;
    checkMissing(m5);
    r144 = `+`(m5, 1);
    __3 = ldf `[` in base;
    r145 = dyn __3(xaic3, r144);
    goto L42(i12, c26, r145);
  L235():
    xaic4 = ld xaic;
    check L237() else D73();
  L236():
    r146 = dyn base16(<lang `[`(xaic, seq_len(`+`(m, 1)))>);
    goto L43(i14, c28, dx15, r146);
  L248():
    m9 = force? m8;
    checkMissing(m9);
    st order = m9;
    EA = ld EA;
    check L249() else D78();
  L256():
    order_max20 = force? order_max19;
    checkMissing(order_max20);
    r161 = `<`(m13, order_max20);
    c44 = `as.logical`(r161);
    if c44 then L257() else L48();
  L277():
    dr22 = tryDispatchBuiltin.1("[", ar1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L279() else L278(dr22);
  L278(ar3):
    order2 = ld order;
    check L280() else D96();
  L293():
    st ar = r203;
    goto L57();
  L296():
    snames9 = force? snames8;
    checkMissing(snames9);
    snames10 = ld snames;
    check L297() else D106();
  L299():
    r207 = dyn dimnames__1(l14, NULL, r205);
    check L300() else D109();
  L391():
    order13 = ld order;
    check L393() else D160();
  L392():
    r299 = dyn base36(<sym order>);
    goto L78(coefs5, order9, r299);
  L403():
    n_obs16 = force? n_obs15;
    checkMissing(n_obs16);
    r306 = `*`(var_pred7, n_obs16);
    n_obs17 = ld `n.obs`;
    check L404() else D167();
  D73():
    deopt 287 [i14, c28, dx15, xaic4];
  D78():
    deopt 306 [i9, EA];
  D96():
    deopt 370 [ar3, 2, order2];
  D106():
    deopt 413 [snames10];
  D109():
    deopt 420 [r205, r207];
  D160():
    deopt 580 [coefs5, order9, order13];
  D167():
    deopt 599 [r306, n_obs17];
  L48():
    goto L51(i28);
  L51(i39):
    goto L39(i39);
  L55(r188):
    l13 = ld ar;
    dimnames__ = ldf `dimnames<-`;
    check L289() else D101();
  L237():
    xaic5 = force? xaic4;
    checkMissing(xaic5);
    c32 = `is.object`(xaic5);
    if c32 then L238() else L239(i14, c28, dx15, xaic5);
  L249():
    EA1 = force? EA;
    checkMissing(EA1);
    n_obs6 = ld `n.obs`;
    check L250() else D79();
  L257():
    solve_yw = ldf `solve.yw`;
    check L258() else D85();
  L279():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L54(dx32);
  L280():
    order3 = force? order2;
    checkMissing(order3);
    r183 = `+`(order3, 1);
    r184 = `:`(2, r183);
    __6 = ldf `[` in base;
    r185 = dyn __6(ar1, r184, <missing>, <missing>, FALSE);
    goto L54(r185);
  L281():
    sym20 = ldf seq_len;
    base20 = ldf seq_len in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L283() else L284();
  L282():
    r187 = dyn base19(<lang seq_len(order)>, <sym snames>, <sym snames>);
    goto L55(r187);
  L297():
    snames11 = force? snames10;
    checkMissing(snames11);
    list2 = ldf list in base;
    r206 = dyn list2(snames9, snames11);
    check L298() else D107();
  L300():
    st `var.pred` = r207;
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L301() else L302();
  L393():
    order14 = force? order13;
    checkMissing(order14);
    r301 = seq_len(order14);
    goto L78(coefs5, order9, r301);
  L404():
    n_obs18 = force? n_obs17;
    checkMissing(n_obs18);
    order17 = ld order;
    check L405() else D168();
  D79():
    deopt 307 [i9, EA1, n_obs6];
  D85():
    deopt 326 [i28];
  D101():
    deopt 396 [r188, l13, r188];
  D107():
    deopt 416 [r206];
  D168():
    deopt 600 [r306, n_obs18, order17];
  L44(i21, c36, dx23, dx24):
    min1 = ldf min in base;
    r153 = dyn min1(dx24);
    check L244() else D75();
  L56(r190):
    snames = ld snames;
    check L286() else D98();
  L59(r209):
    l15 = ld partialacf;
    dimnames__2 = ldf `dimnames<-`;
    check L309() else D114();
  L238():
    dr16 = tryDispatchBuiltin.1("[", xaic5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L240() else L239(i14, c28, dx15, dr16);
  L239(i19, c34, dx20, xaic7):
    sym17 = ldf seq_len;
    base17 = ldf seq_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L241() else L242();
  L250():
    n_obs7 = force? n_obs6;
    checkMissing(n_obs7);
    r155 = `*`(EA1, n_obs7);
    n_obs8 = ld `n.obs`;
    check L251() else D80();
  L258():
    p23 = prom<V +>{
      m14 = ld m;
      m15 = force? m14;
      checkMissing(m15);
      return m15;
    };
    r163 = dyn solve_yw(p23);
    check L259() else D86();
  L283():
    order4 = ld order;
    check L285() else D97();
  L284():
    r189 = dyn base20(<sym order>);
    goto L56(r189);
  L289():
    r193 = dyn dimnames__(l13, NULL, r188);
    check L290() else D102();
  L298():
    goto L58(r206);
  L301():
    sym25 = ldf seq_len;
    base25 = ldf seq_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L303() else L304();
  L302():
    r208 = dyn base24(<lang seq_len(order.max)>, <sym snames>, <sym snames>);
    goto L59(r208);
  L405():
    order18 = force? order17;
    checkMissing(order18);
    r307 = `+`(order18, 1);
    r308 = `-`(n_obs18, r307);
    r309 = `/`(r306, r308);
    st `var.pred` = r309;
    order19 = ld order;
    check L406() else D169();
  D75():
    deopt 297 [i21, c36, dx23, r153];
  D80():
    deopt 309 [i9, r155, n_obs8];
  D86():
    deopt 328 [i28, r163];
  D97():
    deopt 386 [order4];
  D98():
    deopt 389 [snames];
  D102():
    deopt 398 [r188, r193];
  D114():
    deopt 435 [r209, l15, r209];
  D169():
    deopt 607 [order19];
  L45(i24, c39, dx27, xaic10, r149):
    __4 = ldf `[` in base;
    r152 = dyn __4(xaic10, r149);
    goto L44(i24, c39, dx27, r152);
  L60(r211):
    snames12 = ld snames;
    check L306() else D111();
  L240():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L44(i14, c28, dx15, dx22);
  L241():
    m6 = ld m;
    check L243() else D74();
  L242():
    r148 = dyn base17(<lang `+`(m, 1)>);
    goto L45(i19, c34, dx20, xaic7, r148);
  L244():
    goto L43(i21, c36, dx23, r153);
  L251():
    n_obs9 = force? n_obs8;
    checkMissing(n_obs9);
    nser14 = ld nser;
    check L252() else D81();
  L259():
    A2 = ld A;
    check L260() else D87();
  L285():
    order5 = force? order4;
    checkMissing(order5);
    r191 = seq_len(order5);
    goto L56(r191);
  L286():
    snames1 = force? snames;
    checkMissing(snames1);
    snames2 = ld snames;
    check L287() else D99();
  L290():
    st ar = r193;
    goto L57();
  L303():
    order_max23 = ld `order.max`;
    check L305() else D110();
  L304():
    r210 = dyn base25(<sym order.max>);
    goto L60(r210);
  L309():
    r214 = dyn dimnames__2(l15, NULL, r209);
    check L310() else D115();
  L406():
    order20 = force? order19;
    checkMissing(order20);
    c63 = `as.logical`(order20);
    if c63 then L407() else L81();
  D74():
    deopt 290 [i19, c34, dx20, xaic7, m6];
  D81():
    deopt 310 [i9, r155, n_obs9, nser14];
  D87():
    deopt 329 [i28, A2];
  D99():
    deopt 391 [snames2];
  D110():
    deopt 425 [order_max23];
  D111():
    deopt 428 [snames12];
  D115():
    deopt 437 [r209, r214];
  L81():
    as_vector = ldf `as.vector`;
    check L423() else D178();
  L85(r325):
    st resid = r325;
    ists2 = ld ists;
    check L425() else D180();
  L243():
    m7 = force? m6;
    checkMissing(m7);
    r150 = `+`(m7, 1);
    r151 = seq_len(r150);
    goto L45(i19, c34, dx20, xaic7, r151);
  L252():
    nser15 = force? nser14;
    checkMissing(nser15);
    m10 = ld m;
    check L253() else D82();
  L260():
    A3 = force? A2;
    checkMissing(A3);
    c45 = `is.object`(A3);
    if c45 then L261() else L262(i28, A3);
  L287():
    snames3 = force? snames2;
    checkMissing(snames3);
    list = ldf list in base;
    r192 = dyn list(r190, snames1, snames3);
    check L288() else D100();
  L305():
    order_max24 = force? order_max23;
    checkMissing(order_max24);
    r212 = seq_len(order_max24);
    goto L60(r212);
  L306():
    snames13 = force? snames12;
    checkMissing(snames13);
    snames14 = ld snames;
    check L307() else D112();
  L310():
    st partialacf = r214;
    colnames1 = ldf colnames;
    check L311() else D116();
  L407():
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L408() else L409();
  D82():
    deopt 311 [i9, r155, n_obs9, nser15, m10];
  D100():
    deopt 394 [r192];
  D112():
    deopt 430 [snames14];
  D116():
    deopt 440 [];
  D178():
    deopt 637 [];
  D180():
    deopt 641 [ists2];
  L49(i34, dx29):
    r166 = `-`(<missing>, dx29);
    l10 = ld partialacf;
    c46 = `is.object`(l10);
    if c46 then L265() else L266(i34, r166, l10);
  L82(r311):
    goto L85(r311);
  L253():
    m11 = force? m10;
    checkMissing(m11);
    r156 = `+`(m11, 1);
    r157 = `*`(nser15, r156);
    r158 = `-`(n_obs9, r157);
    r159 = `/`(r155, r158);
    st `var.pred` = r159;
    goto L47(i9);
  L261():
    dr18 = tryDispatchBuiltin.1("[", A3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L263() else L262(i28, dr18);
  L262(i32, A5):
    m16 = ld m;
    check L264() else D88();
  L288():
    goto L55(r192);
  L307():
    snames15 = force? snames14;
    checkMissing(snames15);
    list3 = ldf list in base;
    r213 = dyn list3(r211, snames13, snames15);
    check L308() else D113();
  L311():
    p28 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      return x37;
    };
    r216 = dyn colnames1(p28);
    check L312() else D117();
  L408():
    sym38 = ldf `rep.int`;
    base38 = ldf `rep.int` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L410() else L411();
  L409():
    r310 = dyn base37(<lang rep.int(NA_LGL, order)>, <lang `%*%`(embed(x, `+`(order, 1)), c(1.0, `-`(ar)))>);
    goto L82(r310);
  L423():
    p43 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      return x41;
    };
    r327 = dyn as_vector(p43);
    check L424() else D179();
  L425():
    ists3 = force? ists2;
    checkMissing(ists3);
    c66 = `as.logical`(ists3);
    if c66 then L426() else L86();
  D88():
    deopt 331 [i32, A5, m16];
  D113():
    deopt 433 [r213];
  D117():
    deopt 442 [r216];
  D179():
    deopt 639 [r327];
  L50(i38, r170, dx31):
    st partialacf = dx31;
    goto L51(i38);
  L83(r313):
    embed = ldf embed;
    check L414() else D172();
  L86():
    goto L61();
  L263():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L49(i28, dx28);
  L264():
    m17 = force? m16;
    checkMissing(m17);
    r164 = `+`(m17, 2);
    __5 = ldf `[` in base;
    r165 = dyn __5(A3, r164, <missing>, <missing>);
    goto L49(i32, r165);
  L265():
    dr20 = tryDispatchBuiltin.0("[<-", l10, r166);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L267() else L266(i34, r166, dr20);
  L266(i36, r168, l12):
    m18 = ld m;
    check L268() else D89();
  L308():
    goto L59(r213);
  L312():
    l16 = ld resid;
    colnames__ = ldf `colnames<-`;
    check L313() else D118();
  L410():
    order21 = ld order;
    check L412() else D170();
  L411():
    r312 = dyn base38(NA_LGL, <sym order>);
    goto L83(r312);
  L424():
    goto L85(r327);
  L426():
    xtsp = ld xtsp;
    check L427() else D181();
  D89():
    deopt 341 [i36, r168, l12, r166, m18];
  D118():
    deopt 444 [r216, l16, r216];
  D170():
    deopt 614 [order21];
  D172():
    deopt 620 [];
  D181():
    deopt 643 [xtsp];
  L267():
    dx30 = getTryDispatchBuiltinValue(dr20);
    goto L50(i34, r166, dx30);
  L268():
    m19 = force? m18;
    checkMissing(m19);
    r171 = `+`(m19, 1);
    ___3 = ldf `[<-` in base;
    r172 = dyn ___3(l10, r171, <missing>, <missing>, r166);
    goto L50(i36, r168, r172);
  L313():
    r217 = dyn colnames__(l16, NULL, r216);
    check L314() else D119();
  L412():
    order22 = force? order21;
    checkMissing(order22);
    rep_int1 = ldf `rep.int` in base;
    r314 = dyn rep_int1(NA_LGL, order22);
    check L413() else D171();
  L414():
    p41 = prom<V +>{
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      return x39;
    };
    p42 = prom<V +>{
      order23 = ld order;
      order24 = force? order23;
      checkMissing(order24);
      r316 = `+`(order24, 1);
      return r316;
    };
    r318 = dyn embed(p41, p42);
    check L415() else D173();
  L427():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l17 = ld resid;
    attr__ = ldf `attr<-`;
    check L428() else D182();
  D119():
    deopt 446 [r216, r217];
  D171():
    deopt 617 [r314];
  D173():
    deopt 623 [r318];
  D182():
    deopt 646 [xtsp1, l17, xtsp1];
  L314():
    st resid = r217;
    goto L61();
  L413():
    goto L83(r314);
  L415():
    sym39 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L416() else L417();
  L428():
    r328 = dyn attr__(l17, NULL, "tsp", xtsp1);
    check L429() else D183();
  D183():
    deopt 649 [xtsp1, r328];
  L84(r320):
    ___4 = ldf `%*%` in base;
    r323 = dyn ___4(r318, r320);
    check L420() else D176();
  L416():
    ar4 = ld ar;
    check L418() else D174();
  L417():
    r319 = dyn base39(1.0, <lang `-`(ar)>);
    goto L84(r319);
  L429():
    st resid = r328;
    l18 = ld resid;
    attr__1 = ldf `attr<-`;
    check L430() else D184();
  D174():
    deopt 627 [ar4];
  D176():
    deopt 633 [r323];
  D184():
    deopt 654 ["ts", l18, "ts"];
  L418():
    ar5 = force? ar4;
    checkMissing(ar5);
    r321 = `-`(<missing>, ar5);
    c64 = ldf c in base;
    r322 = dyn c64(1.0, r321);
    check L419() else D175();
  L420():
    c65 = ldf c in base;
    r324 = dyn c65(r313, r323);
    check L421() else D177();
  L430():
    r329 = dyn attr__1(l18, NULL, "class", "ts");
    check L431() else D185();
  D175():
    deopt 631 [r322];
  D177():
    deopt 635 [r324];
  D185():
    deopt 657 ["ts", r329];
  L419():
    goto L84(r322);
  L421():
    goto L82(r324);
  L431():
    st resid = r329;
    goto L61();
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg m1:*, reg m2:V, reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg betaA:*, reg betaA1:V, reg A:*, reg A1:V, reg c1:L, reg i6:I, reg betaA3:V, reg A3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg betaA5:V, reg dx1:V, reg i9:*, reg i10:V, reg r1:V, reg __:cls, reg r2:V, reg xacf:*, reg xacf1:V, reg c2:L, reg i12:I, reg betaA7:V, reg xacf3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg betaA9:V, reg dx3:V, reg m3:*, reg m4:V, reg r3:V, reg i15:*, reg i16:V, reg r4:V, reg __1:cls, reg r5:V, reg ___:cls, reg r6:V, reg r7:V, reg betaB:*, reg betaB1:V, reg B:*, reg B1:V, reg c3:L, reg i18:I, reg betaB3:V, reg B3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i20:I, reg betaB5:V, reg dx5:V, reg i21:*, reg i22:V, reg r8:V, reg __2:cls, reg r9:V, reg t:cls, reg xacf4:*, reg xacf5:V, reg c4:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg m5:*, reg m6:V, reg r10:V, reg i23:*, reg i24:V, reg r11:V, reg __3:cls, reg r12:V, reg p:p(V +), reg r14:V, reg ___1:cls, reg r15:V, reg r16:V, reg t1:cls, reg qr_solve:cls, reg t2:cls, reg EB:*, reg EB1:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg t3:cls, reg betaA10:*, reg betaA11:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg r26:V, reg t4:cls, reg qr_solve1:cls, reg t5:cls, reg EA:*, reg EA1:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg t6:cls, reg betaB6:*, reg betaB7:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg r36:V, reg diag:cls, reg nser:*, reg nser1:V, reg p11:p(V +), reg r38:V, reg KB:*, reg KB1:V, reg KA:*, reg KA1:V, reg ___2:cls, reg r39:V, reg r40:V, reg EB2:*, reg EB3:V, reg ___3:cls, reg r41:V, reg diag1:cls, reg nser2:*, reg nser3:V, reg p12:p(V +), reg r43:V, reg KA2:*, reg KA3:V, reg KB2:*, reg KB3:V, reg ___4:cls, reg r44:V, reg r45:V, reg EA2:*, reg EA3:V, reg ___5:cls, reg r46:V, reg A4:*, reg A5:V, reg B4:*, reg B5:V, reg sym:cls, reg base:cls, reg guard:L, reg r47:V, reg r48:V, reg m7:*, reg m8:V, reg r49:V, reg r50:I, reg s1:V, reg l1:I, reg i25:I, reg i26:I, reg i27:I, reg c5:L, reg x1:V, reg Aold:*, reg Aold1:V, reg c6:L, reg i31:I, reg Aold3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i33:I, reg dx9:V, reg i34:*, reg i35:V, reg r51:V, reg __4:cls, reg r52:V, reg KA4:*, reg KA5:V, reg Bold:*, reg Bold1:V, reg c7:L, reg i37:I, reg dx11:V, reg Bold3:V, reg dr10:V, reg dc5:L, reg dx13:V, reg i39:I, reg dx14:V, reg dx15:V, reg m9:*, reg m10:V, reg r53:V, reg i40:*, reg i41:V, reg r54:V, reg __5:cls, reg r55:V, reg ___6:cls, reg r56:V, reg r57:V, reg l2:*, reg c8:L, reg i43:I, reg r59:V, reg l4:*, reg dr12:V, reg dc6:L, reg dx16:V, reg i45:I, reg dx17:V, reg i46:*, reg i47:V, reg r62:V, reg ___7:cls, reg r63:V, reg Bold4:*, reg Bold5:V, reg c9:L, reg i49:I, reg Bold7:V, reg dr14:V, reg dc7:L, reg dx18:V, reg i51:I, reg dx19:V, reg i52:*, reg i53:V, reg r64:V, reg __6:cls, reg r65:V, reg KB4:*, reg KB5:V, reg Aold4:*, reg Aold5:V, reg c10:L, reg i55:I, reg dx21:V, reg Aold7:V, reg dr16:V, reg dc8:L, reg dx23:V, reg i57:I, reg dx24:V, reg dx25:V, reg m11:*, reg m12:V, reg r66:V, reg i58:*, reg i59:V, reg r67:V, reg __7:cls, reg r68:V, reg ___8:cls, reg r69:V, reg r70:V, reg l5:*, reg c11:L, reg i61:I, reg r72:V, reg l7:*, reg dr18:V, reg dc9:L, reg dx26:V, reg i63:I, reg dx27:V, reg i64:*, reg i65:V, reg r75:V, reg ___9:cls, reg r76:V |
    mkenv;
    st m = m;
    st betaB = 0.0;
    st betaA = 0.0;
    m1 = ld m;
    check L14() else D0();
  D0():
    deopt 5 [0, m1];
  L14():
    m2 = force? m1;
    checkMissing(m2);
    r = `:`(0, m2);
    s = toForSeq(r);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    betaA = ld betaA;
    check L16() else D1();
  L15():
    t1 = ldf t;
    check L38() else D14();
  D1():
    deopt 8 [i2, betaA];
  D14():
    deopt 60 [];
  L16():
    betaA1 = force? betaA;
    checkMissing(betaA1);
    A = ld A;
    check L17() else D2();
  L38():
    p5 = prom<V +>{
      qr_solve = ldf `qr.solve`;
      p2 = prom<V +>{
        t2 = ldf t;
        p1 = prom<V +>{
          EB = ld EB;
          EB1 = force? EB;
          checkMissing(EB1);
          return EB1;
        };
        r18 = dyn t2(p1);
        return r18;
      };
      p4 = prom<V +>{
        t3 = ldf t;
        p3 = prom<V +>{
          betaA10 = ld betaA;
          betaA11 = force? betaA10;
          checkMissing(betaA11);
          return betaA11;
        };
        r21 = dyn t3(p3);
        return r21;
      };
      r23 = dyn qr_solve(p2, p4);
      return r23;
    };
    r25 = dyn t1(p5);
    check L39() else D15();
  D2():
    deopt 10 [i2, betaA1, A];
  D15():
    deopt 62 [r25];
  L17():
    A1 = force? A;
    checkMissing(A1);
    c1 = `is.object`(A1);
    if c1 then L18() else L19(i2, betaA1, A1);
  L39():
    r26 = `-`(<missing>, r25);
    st KA = r26;
    t4 = ldf t;
    check L40() else D16();
  D16():
    deopt 66 [];
  L1(i8, betaA5, dx1):
    xacf = ld xacf;
    check L22() else D4();
  L18():
    dr = tryDispatchBuiltin.1("[", A1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(i2, betaA1, dr);
  L19(i6, betaA3, A3):
    i9 = ld i;
    check L21() else D3();
  L40():
    p10 = prom<V +>{
      qr_solve1 = ldf `qr.solve`;
      p7 = prom<V +>{
        t5 = ldf t;
        p6 = prom<V +>{
          EA = ld EA;
          EA1 = force? EA;
          checkMissing(EA1);
          return EA1;
        };
        r28 = dyn t5(p6);
        return r28;
      };
      p9 = prom<V +>{
        t6 = ldf t;
        p8 = prom<V +>{
          betaB6 = ld betaB;
          betaB7 = force? betaB6;
          checkMissing(betaB7);
          return betaB7;
        };
        r31 = dyn t6(p8);
        return r31;
      };
      r33 = dyn qr_solve1(p7, p9);
      return r33;
    };
    r35 = dyn t4(p10);
    check L41() else D17();
  D3():
    deopt 12 [i6, betaA3, A3, i9];
  D4():
    deopt 20 [i8, betaA5, xacf];
  D17():
    deopt 68 [r35];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(i2, betaA1, dx);
  L21():
    i10 = force? i9;
    checkMissing(i10);
    r1 = `+`(i10, 1);
    __ = ldf `[` in base;
    r2 = dyn __(A1, r1, <missing>, <missing>);
    goto L1(i6, betaA3, r2);
  L22():
    xacf1 = force? xacf;
    checkMissing(xacf1);
    c2 = `is.object`(xacf1);
    if c2 then L23() else L24(i8, betaA5, xacf1);
  L41():
    r36 = `-`(<missing>, r35);
    st KB = r36;
    diag = ldf diag;
    check L42() else D18();
  D18():
    deopt 73 [];
  L2(i14, betaA9, dx3):
    ___ = ldf `%*%` in base;
    r6 = dyn ___(dx1, dx3);
    check L28() else D7();
  L23():
    dr2 = tryDispatchBuiltin.1("[", xacf1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(i8, betaA5, dr2);
  L24(i12, betaA7, xacf3):
    m3 = ld m;
    check L26() else D5();
  L42():
    p11 = prom<V +>{
      nser = ld nser;
      nser1 = force? nser;
      checkMissing(nser1);
      return nser1;
    };
    r38 = dyn diag(p11);
    check L43() else D19();
  D5():
    deopt 22 [i12, betaA7, xacf3, m3];
  D7():
    deopt 33 [i14, betaA9, r6];
  D19():
    deopt 75 [r38];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(i8, betaA5, dx2);
  L26():
    m4 = force? m3;
    checkMissing(m4);
    r3 = `+`(m4, 2);
    i15 = ld i;
    check L27() else D6();
  L28():
    r7 = `+`(betaA9, r6);
    st betaA = r7;
    betaB = ld betaB;
    check L29() else D8();
  L43():
    KB = ld KB;
    check L44() else D20();
  D6():
    deopt 25 [i12, betaA7, xacf3, r3, i15];
  D8():
    deopt 36 [i14, betaB];
  D20():
    deopt 76 [r38, KB];
  L27():
    i16 = force? i15;
    checkMissing(i16);
    r4 = `-`(r3, i16);
    __1 = ldf `[` in base;
    r5 = dyn __1(xacf1, r4, <missing>, <missing>);
    goto L2(i12, betaA7, r5);
  L29():
    betaB1 = force? betaB;
    checkMissing(betaB1);
    B = ld B;
    check L30() else D9();
  L44():
    KB1 = force? KB;
    checkMissing(KB1);
    KA = ld KA;
    check L45() else D21();
  D9():
    deopt 38 [i14, betaB1, B];
  D21():
    deopt 78 [r38, KA];
  L30():
    B1 = force? B;
    checkMissing(B1);
    c3 = `is.object`(B1);
    if c3 then L31() else L32(i14, betaB1, B1);
  L45():
    KA1 = force? KA;
    checkMissing(KA1);
    ___2 = ldf `%*%` in base;
    r39 = dyn ___2(KB1, KA1);
    check L46() else D22();
  D22():
    deopt 81 [r38, r39];
  L3(i20, betaB5, dx5):
    t = ldf t;
    check L35() else D11();
  L31():
    dr4 = tryDispatchBuiltin.1("[", B1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(i14, betaB1, dr4);
  L32(i18, betaB3, B3):
    i21 = ld i;
    check L34() else D10();
  L46():
    r40 = `-`(r38, r39);
    EB2 = ld EB;
    check L47() else D23();
  D10():
    deopt 40 [i18, betaB3, B3, i21];
  D11():
    deopt 49 [i20, betaB5];
  D23():
    deopt 83 [EB2];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(i14, betaB1, dx4);
  L34():
    i22 = force? i21;
    checkMissing(i22);
    r8 = `+`(i22, 1);
    __2 = ldf `[` in base;
    r9 = dyn __2(B1, r8, <missing>, <missing>);
    goto L3(i18, betaB3, r9);
  L35():
    p = prom<V +>{
      xacf4 = ld xacf;
      xacf5 = force? xacf4;
      checkMissing(xacf5);
      c4 = `is.object`(xacf5);
      if c4 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", xacf5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      m5 = ld m;
      m6 = force? m5;
      checkMissing(m6);
      r10 = `+`(m6, 2);
      i23 = ld i;
      i24 = force? i23;
      checkMissing(i24);
      r11 = `-`(r10, i24);
      __3 = ldf `[` in base;
      r12 = dyn __3(xacf5, r11, <missing>, <missing>);
      goto L0(r12);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r14 = dyn t(p);
    check L36() else D12();
  L47():
    EB3 = force? EB2;
    checkMissing(EB3);
    ___3 = ldf `%*%` in base;
    r41 = dyn ___3(r40, EB3);
    check L48() else D24();
  D12():
    deopt 51 [i20, betaB5, r14];
  D24():
    deopt 86 [r41];
  L36():
    ___1 = ldf `%*%` in base;
    r15 = dyn ___1(dx5, r14);
    check L37() else D13();
  L48():
    sst EB = r41;
    diag1 = ldf diag;
    check L49() else D25();
  D13():
    deopt 53 [i20, betaB5, r15];
  D25():
    deopt 90 [];
  L37():
    r16 = `+`(betaB5, r15);
    st betaB = r16;
    goto L0(i20);
  L49():
    p12 = prom<V +>{
      nser2 = ld nser;
      nser3 = force? nser2;
      checkMissing(nser3);
      return nser3;
    };
    r43 = dyn diag1(p12);
    check L50() else D26();
  D26():
    deopt 92 [r43];
  L50():
    KA2 = ld KA;
    check L51() else D27();
  D27():
    deopt 93 [r43, KA2];
  L51():
    KA3 = force? KA2;
    checkMissing(KA3);
    KB2 = ld KB;
    check L52() else D28();
  D28():
    deopt 95 [r43, KB2];
  L52():
    KB3 = force? KB2;
    checkMissing(KB3);
    ___4 = ldf `%*%` in base;
    r44 = dyn ___4(KA3, KB3);
    check L53() else D29();
  D29():
    deopt 98 [r43, r44];
  L53():
    r45 = `-`(r43, r44);
    EA2 = ld EA;
    check L54() else D30();
  D30():
    deopt 100 [EA2];
  L54():
    EA3 = force? EA2;
    checkMissing(EA3);
    ___5 = ldf `%*%` in base;
    r46 = dyn ___5(r45, EA3);
    check L55() else D31();
  D31():
    deopt 103 [r46];
  L55():
    sst EA = r46;
    A4 = ld A;
    check L56() else D32();
  D32():
    deopt 105 [A4];
  L56():
    A5 = force? A4;
    checkMissing(A5);
    st Aold = A5;
    B4 = ld B;
    check L57() else D33();
  D33():
    deopt 108 [B4];
  L57():
    B5 = force? B4;
    checkMissing(B5);
    st Bold = B5;
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L5(r48):
    s1 = toForSeq(r48);
    l1 = length(s1);
    i25 = 0;
    goto L6(i25);
  L58():
    m7 = ld m;
    check L60() else D34();
  L59():
    r47 = dyn base(<lang `+`(m, 1)>);
    goto L5(r47);
  D34():
    deopt 112 [m7];
  L6(i26):
    i27 = `+`.1(i26, 1);
    c5 = `<`.1(l1, i27);
    if c5 then L61() else L13();
  L60():
    m8 = force? m7;
    checkMissing(m8);
    r49 = `+`(m8, 1);
    r50 = seq_len(r49);
    goto L5(r50);
  L13():
    x1 = `[[`(s1, i27, NULL, TRUE);
    st i = x1;
    Aold = ld Aold;
    check L62() else D35();
  L61():
    invisible.0();
    popenv;
    return i27;
  D35():
    deopt 117 [i27, Aold];
  L62():
    Aold1 = force? Aold;
    checkMissing(Aold1);
    c6 = `is.object`(Aold1);
    if c6 then L63() else L64(i27, Aold1);
  L7(i33, dx9):
    KA4 = ld KA;
    check L67() else D37();
  L63():
    dr8 = tryDispatchBuiltin.1("[", Aold1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(i27, dr8);
  L64(i31, Aold3):
    i34 = ld i;
    check L66() else D36();
  D36():
    deopt 119 [i31, Aold3, i34];
  D37():
    deopt 127 [i33, dx9, KA4];
  L65():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(i27, dx8);
  L66():
    i35 = force? i34;
    checkMissing(i35);
    r51 = `+`(i35, 1);
    __4 = ldf `[` in base;
    r52 = dyn __4(Aold1, r51, <missing>, <missing>);
    goto L7(i31, r52);
  L67():
    KA5 = force? KA4;
    checkMissing(KA5);
    Bold = ld Bold;
    check L68() else D38();
  D38():
    deopt 129 [i33, dx9, Bold];
  L68():
    Bold1 = force? Bold;
    checkMissing(Bold1);
    c7 = `is.object`(Bold1);
    if c7 then L69() else L70(i33, dx9, Bold1);
  L8(i39, dx14, dx15):
    ___6 = ldf `%*%` in base;
    r56 = dyn ___6(KA5, dx15);
    check L74() else D41();
  L69():
    dr10 = tryDispatchBuiltin.1("[", Bold1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L71() else L70(i33, dx9, dr10);
  L70(i37, dx11, Bold3):
    m9 = ld m;
    check L72() else D39();
  D39():
    deopt 131 [i37, dx11, Bold3, m9];
  D41():
    deopt 142 [i39, dx14, r56];
  L71():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L8(i33, dx9, dx13);
  L72():
    m10 = force? m9;
    checkMissing(m10);
    r53 = `+`(m10, 2);
    i40 = ld i;
    check L73() else D40();
  L74():
    r57 = `+`(dx14, r56);
    l2 = sld A;
    c8 = `is.object`(l2);
    if c8 then L75() else L76(i39, r57, l2);
  D40():
    deopt 134 [i37, dx11, Bold3, r53, i40];
  L9(i45, dx17):
    sst A = dx17;
    Bold4 = ld Bold;
    check L79() else D43();
  L73():
    i41 = force? i40;
    checkMissing(i41);
    r54 = `-`(r53, i41);
    __5 = ldf `[` in base;
    r55 = dyn __5(Bold1, r54, <missing>, <missing>);
    goto L8(i37, dx11, r55);
  L75():
    dr12 = tryDispatchBuiltin.0("[<-", l2, r57);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L77() else L76(i39, r57, dr12);
  L76(i43, r59, l4):
    i46 = ld i;
    check L78() else D42();
  D42():
    deopt 145 [i43, r59, l4, r57, i46];
  D43():
    deopt 154 [i45, Bold4];
  L77():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L9(i39, dx16);
  L78():
    i47 = force? i46;
    checkMissing(i47);
    r62 = `+`(i47, 1);
    ___7 = ldf `[<-` in base;
    r63 = dyn ___7(l2, r62, <missing>, <missing>, r57);
    goto L9(i43, r63);
  L79():
    Bold5 = force? Bold4;
    checkMissing(Bold5);
    c9 = `is.object`(Bold5);
    if c9 then L80() else L81(i45, Bold5);
  L10(i51, dx19):
    KB4 = ld KB;
    check L84() else D45();
  L80():
    dr14 = tryDispatchBuiltin.1("[", Bold5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L82() else L81(i45, dr14);
  L81(i49, Bold7):
    i52 = ld i;
    check L83() else D44();
  D44():
    deopt 156 [i49, Bold7, i52];
  D45():
    deopt 164 [i51, dx19, KB4];
  L82():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L10(i45, dx18);
  L83():
    i53 = force? i52;
    checkMissing(i53);
    r64 = `+`(i53, 1);
    __6 = ldf `[` in base;
    r65 = dyn __6(Bold5, r64, <missing>, <missing>);
    goto L10(i49, r65);
  L84():
    KB5 = force? KB4;
    checkMissing(KB5);
    Aold4 = ld Aold;
    check L85() else D46();
  D46():
    deopt 166 [i51, dx19, Aold4];
  L85():
    Aold5 = force? Aold4;
    checkMissing(Aold5);
    c10 = `is.object`(Aold5);
    if c10 then L86() else L87(i51, dx19, Aold5);
  L11(i57, dx24, dx25):
    ___8 = ldf `%*%` in base;
    r69 = dyn ___8(KB5, dx25);
    check L91() else D49();
  L86():
    dr16 = tryDispatchBuiltin.1("[", Aold5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L88() else L87(i51, dx19, dr16);
  L87(i55, dx21, Aold7):
    m11 = ld m;
    check L89() else D47();
  D47():
    deopt 168 [i55, dx21, Aold7, m11];
  D49():
    deopt 179 [i57, dx24, r69];
  L88():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L11(i51, dx19, dx23);
  L89():
    m12 = force? m11;
    checkMissing(m12);
    r66 = `+`(m12, 2);
    i58 = ld i;
    check L90() else D48();
  L91():
    r70 = `+`(dx24, r69);
    l5 = sld B;
    c11 = `is.object`(l5);
    if c11 then L92() else L93(i57, r70, l5);
  D48():
    deopt 171 [i55, dx21, Aold7, r66, i58];
  L12(i63, dx27):
    sst B = dx27;
    goto L6(i63);
  L90():
    i59 = force? i58;
    checkMissing(i59);
    r67 = `-`(r66, i59);
    __7 = ldf `[` in base;
    r68 = dyn __7(Aold5, r67, <missing>, <missing>);
    goto L11(i55, dx21, r68);
  L92():
    dr18 = tryDispatchBuiltin.0("[<-", l5, r70);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L94() else L93(i57, r70, dr18);
  L93(i61, r72, l7):
    i64 = ld i;
    check L95() else D50();
  D50():
    deopt 182 [i61, r72, l7, r70, i64];
  L94():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L12(i57, dx26);
  L95():
    i65 = force? i64;
    checkMissing(i65);
    r75 = `+`(i65, 1);
    ___9 = ldf `[<-` in base;
    r76 = dyn ___9(l5, r75, <missing>, <missing>, r70);
    goto L12(i61, r76);
  }
}
fun inner2708337952() {
  () -+> V { reg array:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n_used:*, reg n_used1:V, reg order:*, reg order1:V, reg r2:V, reg nser:*, reg nser1:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg order2:*, reg order3:V, reg r6:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg resid:*, reg resid1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg i7:I, reg resid4:V, reg r8:V, reg x1:*, reg x2:V, reg c2:L, reg i9:I, reg resid6:V, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg resid8:V, reg dx1:V, reg order4:*, reg order5:V, reg i12:*, reg i13:V, reg r9:V, reg r10:V, reg n_used2:*, reg n_used3:V, reg i14:*, reg i15:V, reg r11:V, reg r12:V, reg __:cls, reg r13:V, reg ar:*, reg ar1:V, reg c3:L, reg i17:I, reg resid10:V, reg ar3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg resid12:V, reg dx3:V, reg i20:*, reg i21:V, reg r14:V, reg __1:cls, reg r15:V, reg tcrossprod:cls, reg r16:V, reg r17:V, reg rbind:cls, reg matrix:cls, reg order6:*, reg order7:V, reg p1:p(V +), reg nser2:*, reg nser3:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg resid13:*, reg resid14:V, reg p4:p(V +), reg r23:V |
    mkenv;
    array = ldf array;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      n_used = ld `n.used`;
      n_used1 = force? n_used;
      checkMissing(n_used1);
      order = ld order;
      order1 = force? order;
      checkMissing(order1);
      r2 = `-`(n_used1, order1);
      nser = ld nser;
      nser1 = force? nser;
      checkMissing(nser1);
      c = ldf c in base;
      r3 = dyn c(r2, nser1);
      goto L0(r3);
    L2():
      r = dyn base(<lang `-`(n.used, order)>, <sym nser>);
      goto L0(r);
    };
    r5 = dyn array[, dim](0.0, p);
    check L6() else D1();
  D1():
    deopt 5 [r5];
  L6():
    st resid = r5;
    order2 = ld order;
    check L7() else D2();
  D2():
    deopt 8 [0, order2];
  L7():
    order3 = force? order2;
    checkMissing(order3);
    r6 = `:`(0, order3);
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L8() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    resid = ld resid;
    check L9() else D3();
  L8():
    rbind = ldf rbind;
    check L26() else D12();
  D3():
    deopt 11 [i2, resid];
  D12():
    deopt 49 [];
  L9():
    resid1 = force? resid;
    checkMissing(resid1);
    sym1 = ldf tcrossprod;
    base1 = ldf tcrossprod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L26():
    p3 = prom<V +>{
      matrix = ldf matrix;
      p1 = prom<V +>{
        order6 = ld order;
        order7 = force? order6;
        checkMissing(order7);
        return order7;
      };
      p2 = prom<V +>{
        nser2 = ld nser;
        nser3 = force? nser2;
        checkMissing(nser3);
        return nser3;
      };
      r20 = dyn matrix(NA_LGL, p1, p2);
      return r20;
    };
    p4 = prom<V +>{
      resid13 = ld resid;
      resid14 = force? resid13;
      checkMissing(resid14);
      return resid14;
    };
    r23 = dyn rbind(p3, p4);
    check L27() else D13();
  D13():
    deopt 52 [r23];
  L1(i7, resid4, r8):
    r17 = `+`(resid4, r8);
    st resid = r17;
    goto L0(i7);
  L10():
    x1 = ld x;
    check L12() else D4();
  L11():
    r7 = dyn base1(<lang `[`(x, `:`(`(`(`+`(`-`(order, i), 1)), `(`(`-`(n.used, i))), , drop=FALSE)>, <lang `[`(ar, `+`(i, 1), , )>);
    goto L1(i2, resid1, r7);
  L27():
    popenv;
    return r23;
  D4():
    deopt 14 [i2, resid1, x1];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    c2 = `is.object`(x2);
    if c2 then L13() else L14(i2, resid1, x2);
  L2(i11, resid8, dx1):
    ar = ld ar;
    check L20() else D9();
  L13():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(i2, resid1, dr);
  L14(i9, resid6, x4):
    order4 = ld order;
    check L16() else D5();
  D5():
    deopt 16 [i9, resid6, x4, order4];
  D9():
    deopt 31 [i11, resid8, ar];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, resid1, dx);
  L16():
    order5 = force? order4;
    checkMissing(order5);
    i12 = ld i;
    check L17() else D6();
  L20():
    ar1 = force? ar;
    checkMissing(ar1);
    c3 = `is.object`(ar1);
    if c3 then L21() else L22(i11, resid8, ar1);
  D6():
    deopt 17 [i9, resid6, x4, order5, i12];
  L3(i19, resid12, dx3):
    tcrossprod = ldf tcrossprod in base;
    r16 = dyn tcrossprod(dx1, dx3);
    check L25() else D11();
  L17():
    i13 = force? i12;
    checkMissing(i13);
    r9 = `-`(order5, i13);
    r10 = `+`(r9, 1);
    n_used2 = ld `n.used`;
    check L18() else D7();
  L21():
    dr2 = tryDispatchBuiltin.1("[", ar1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(i11, resid8, dr2);
  L22(i17, resid10, ar3):
    i20 = ld i;
    check L24() else D10();
  D7():
    deopt 21 [i9, resid6, x4, r10, n_used2];
  D10():
    deopt 33 [i17, resid10, ar3, i20];
  D11():
    deopt 42 [i19, resid12, r16];
  L18():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    i14 = ld i;
    check L19() else D8();
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i11, resid8, dx2);
  L24():
    i21 = force? i20;
    checkMissing(i21);
    r14 = `+`(i21, 1);
    __1 = ldf `[` in base;
    r15 = dyn __1(ar1, r14, <missing>, <missing>);
    goto L3(i17, resid10, r15);
  L25():
    goto L1(i19, resid12, r16);
  D8():
    deopt 22 [i9, resid6, x4, r10, n_used3, i14];
  L19():
    i15 = force? i14;
    checkMissing(i15);
    r11 = `-`(n_used3, i15);
    r12 = `:`(r10, r11);
    __ = ldf `[` in base;
    r13 = dyn __(x2, r12, <missing>, FALSE);
    goto L2(i9, resid6, r13);
  }
}