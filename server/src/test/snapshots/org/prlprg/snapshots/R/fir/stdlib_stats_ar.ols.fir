fun main() {
  () -+> V { reg r:cls, reg ar:cls, reg lh:*, reg lh1:V, reg p:p(V +), reg r2:V, reg ar_ols:cls, reg lh2:*, reg lh3:V, reg p1:p(V +), reg r4:V, reg ar_ols1:cls, reg lh4:*, reg lh5:V, reg p2:p(V +), reg r6:V, reg ar_ols2:cls, reg ts_union:cls, reg BJsales:*, reg BJsales1:V, reg p3:p(V +), reg BJsales_lead:*, reg BJsales_lead1:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg diff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg EuStockMarkets:*, reg EuStockMarkets1:V, reg r14:V, reg p6:p(V +), reg r16:V, reg ar_ols3:cls, reg x:*, reg x1:V, reg p7:p(V +), reg r18:V |
    mkenv;
    r = clos inner1144858522;
    st `ar.ols` = r;
    ar = ldf ar;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      lh = ld lh;
      lh1 = force? lh;
      checkMissing(lh1);
      return lh1;
    };
    r2 = dyn ar[, method](p, "burg");
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    ar_ols = ldf `ar.ols`;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      lh2 = ld lh;
      lh3 = force? lh2;
      checkMissing(lh3);
      return lh3;
    };
    r4 = dyn ar_ols(p1);
    check L3() else D3();
  D3():
    deopt 12 [r4];
  L3():
    ar_ols1 = ldf `ar.ols`;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      lh4 = ld lh;
      lh5 = force? lh4;
      checkMissing(lh5);
      return lh5;
    };
    r6 = dyn ar_ols1(p2, FALSE, 4.0);
    check L5() else D5();
  D5():
    deopt 18 [r6];
  L5():
    ar_ols2 = ldf `ar.ols`;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p5 = prom<V +>{
      ts_union = ldf `ts.union`;
      p3 = prom<V +>{
        BJsales = ld BJsales;
        BJsales1 = force? BJsales;
        checkMissing(BJsales1);
        return BJsales1;
      };
      p4 = prom<V +>{
        BJsales_lead = ld `BJsales.lead`;
        BJsales_lead1 = force? BJsales_lead;
        checkMissing(BJsales_lead1);
        return BJsales_lead1;
      };
      r9 = dyn ts_union(p3, p4);
      return r9;
    };
    r11 = dyn ar_ols2(p5);
    check L7() else D7();
  D7():
    deopt 22 [r11];
  L7():
    diff = ldf diff;
    check L8() else D8();
  D8():
    deopt 24 [];
  L8():
    p6 = prom<V +>{
      sym = ldf log;
      base = ldf log in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      EuStockMarkets = ld EuStockMarkets;
      EuStockMarkets1 = force? EuStockMarkets;
      checkMissing(EuStockMarkets1);
      r14 = log(EuStockMarkets1, 2.718281828459045);
      goto L0(r14);
    L2():
      r12 = dyn base(<sym EuStockMarkets>);
      goto L0(r12);
    };
    r16 = dyn diff(p6);
    check L9() else D9();
  D9():
    deopt 26 [r16];
  L9():
    st x = r16;
    ar_ols3 = ldf `ar.ols`;
    check L10() else D10();
  D10():
    deopt 29 [];
  L10():
    p7 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r18 = dyn ar_ols3[, `order.max`, demean, intercept](p7, 6.0, FALSE, TRUE);
    check L11() else D11();
  D11():
    deopt 37 [r18];
  L11():
    popenv;
    return r18;
  }
}
fun inner1144858522(x, aic, `order.max`, `na.action`, demean, intercept, series, `...`) {
  (reg x:*, reg aic:*, reg order_max:*, reg na_action:*, reg demean:*, reg intercept:*, reg series:*, reg ddd:dots) -+> V { var x:*, var aic:*, reg aic_isMissing:L, reg aic_orDefault:*, var `order.max`:*, reg order_max_isMissing:L, reg order_max_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, reg demean1:*, reg demean2:V, reg p1:p(V +), var series:*, reg series_isMissing:L, reg series_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg series1:*, reg series2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg is_ts:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg r11:V, reg na_action1:cls, reg as_ts:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg x5:*, reg x6:V, reg anyNA:cls, reg r18:V, reg c2:L, reg stop:cls, reg r19:V, reg ists:*, reg ists1:V, reg c3:L, reg tsp:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r22:V, reg frequency:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg r25:V, reg as_matrix:cls, reg x11:*, reg x12:V, reg p8:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg x13:*, reg x14:V, reg is_numeric:cls, reg r30:V, reg r31:V, reg c4:L, reg stop1:cls, reg r32:V, reg nrow:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r35:V, reg ncol:cls, reg x17:*, reg x18:V, reg p10:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg nser:*, reg nser1:V, reg r40:I, reg rescale:*, reg rescale1:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg apply:cls, reg x19:*, reg x20:V, reg p11:p(V +), reg var:*, reg var1:V, reg p12:p(V +), reg r47:V, reg drop:cls, reg r48:V, reg r49:V, reg l:*, reg c6:L, reg r51:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sc:*, reg sc1:V, reg r54:V, reg ___:cls, reg r55:V, reg x21:*, reg x22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg x25:V, reg r57:V, reg sc2:*, reg sc3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg x28:V, reg r59:V, reg n_used:*, reg n_used1:V, reg nser2:*, reg nser3:V, reg rep_int:cls, reg r60:V, reg rep_int1:cls, reg r61:V, reg r62:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg nser4:*, reg nser5:V, reg rep_int2:cls, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg order_max1:*, reg order_max2:V, reg c7:V, reg c8:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg n_used2:*, reg n_used3:V, reg r71:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r72:V, reg r73:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:R, reg r78:V, reg n_used4:*, reg n_used5:V, reg log10:cls, reg r79:V, reg r80:V, reg r81:V, reg min:cls, reg r82:V, reg r83:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg round:cls, reg r85:V, reg order_max3:*, reg order_max4:V, reg r86:V, reg c9:L, reg stop2:cls, reg r87:V, reg order_max5:*, reg order_max6:V, reg n_used6:*, reg n_used7:V, reg r89:V, reg c10:L, reg stop3:cls, reg r90:V, reg aic1:*, reg aic2:V, reg c11:L, reg r92:V, reg order_max7:*, reg order_max8:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r93:V, reg r94:V, reg order_max9:*, reg order_max10:V, reg order_min:*, reg order_min1:V, reg r95:V, reg r96:V, reg vector:cls, reg r97:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg order_max11:*, reg order_max12:V, reg order_min2:*, reg order_min3:V, reg r100:V, reg r101:V, reg rep_int3:cls, reg r102:V, reg r103:cls, reg demean3:*, reg demean4:V, reg c12:L, reg colMeans:cls, reg x29:*, reg x30:V, reg p13:p(V +), reg r105:V, reg sweep:cls, reg x31:*, reg x32:V, reg p14:p(V +), reg xm:*, reg xm1:V, reg p15:p(V +), reg r108:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r110:V, reg r111:V, reg nser6:*, reg nser7:V, reg rep_int4:cls, reg r112:V, reg order_min4:*, reg order_min5:V, reg order_max13:*, reg order_max14:V, reg r113:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c13:L, reg x33:V, reg embed:cls, reg x34:*, reg x35:V, reg p16:p(V +), reg m:*, reg m1:V, reg r115:V, reg p17:p(V +), reg r117:V, reg intercept1:*, reg intercept2:V, reg c14:L, reg m2:*, reg m3:V, reg c15:L, reg cbind:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r118:V, reg r119:V, reg nrow1:cls, reg y:*, reg y1:V, reg p18:p(V +), reg r121:V, reg rep_int5:cls, reg r122:V, reg p19:p(V +), reg y2:*, reg y3:V, reg c16:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nser8:*, reg nser9:V, reg r124:V, reg ncol1:cls, reg y6:*, reg y7:V, reg p20:p(V +), reg r126:V, reg r127:V, reg __:cls, reg r128:V, reg p21:p(V +), reg r130:V, reg i9:I, reg r131:V, reg as_matrix1:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r132:V, reg r133:V, reg nrow2:cls, reg y8:*, reg y9:V, reg p22:p(V +), reg r135:V, reg rep_int6:cls, reg r136:V, reg p23:p(V +), reg r138:V, reg i10:I, reg r139:V, reg m4:*, reg m5:V, reg c17:L, reg y10:*, reg y11:V, reg c18:L, reg i14:I, reg y13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i16:I, reg dx5:V, reg nser10:*, reg nser11:V, reg r140:V, reg ncol2:cls, reg y14:*, reg y15:V, reg p24:p(V +), reg r142:V, reg r143:V, reg __1:cls, reg r144:V, reg matrix:cls, reg nrow3:cls, reg y16:*, reg y17:V, reg p25:p(V +), reg r146:V, reg p26:p(V +), reg r148:V, reg t:cls, reg y18:*, reg y19:V, reg c19:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg iser:*, reg iser1:V, reg __2:cls, reg r149:V, reg p27:p(V +), reg r151:V, reg ncol3:cls, reg Y:*, reg Y1:V, reg p28:p(V +), reg r153:V, reg t1:cls, reg X:*, reg X1:V, reg p29:p(V +), reg r155:V, reg X2:*, reg X3:V, reg ___1:cls, reg r156:V, reg qr:cls, reg XX:*, reg XX1:V, reg p30:p(V +), reg r158:V, reg c20:L, reg i18:I, reg r160:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i20:I, reg dx9:V, reg r161:V, reg rank:*, reg rank1:V, reg nrow4:cls, reg XX2:*, reg XX3:V, reg p31:p(V +), reg r163:V, reg r164:V, reg c21:L, reg warning:cls, reg paste:cls, reg m6:*, reg m7:V, reg p32:p(V +), reg m8:*, reg m9:V, reg r166:V, reg p33:p(V +), reg r168:V, reg p34:p(V +), reg r170:V, reg ncol4:cls, reg XX4:*, reg XX5:V, reg p35:p(V +), reg r173:V, reg r174:V, reg c22:L, reg solve:cls, reg XX6:*, reg XX7:V, reg p36:p(V +), reg r176:V, reg i28:I, reg r177:V, reg XX8:*, reg XX9:V, reg Y2:*, reg Y3:V, reg X4:*, reg X5:V, reg ___2:cls, reg r178:V, reg P:*, reg P1:V, reg ___3:cls, reg r179:V, reg l4:*, reg c23:L, reg i30:I, reg r181:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i32:I, reg dx11:V, reg m10:*, reg m11:V, reg order_min6:*, reg order_min7:V, reg r184:V, reg r185:V, reg ____:cls, reg r186:V, reg A:*, reg A1:V, reg c24:L, reg i34:I, reg A3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i36:I, reg dx13:V, reg m12:*, reg m13:V, reg order_min8:*, reg order_min9:V, reg r187:V, reg r188:V, reg __3:cls, reg r189:V, reg t2:cls, reg X6:*, reg X7:V, reg p37:p(V +), reg r191:V, reg ___4:cls, reg r192:V, reg Y4:*, reg Y5:V, reg YH:*, reg YH1:V, reg r193:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r194:V, reg i39:I, reg r195:V, reg E:*, reg E1:V, reg tcrossprod:cls, reg r196:V, reg N:*, reg N1:V, reg r197:V, reg l7:*, reg c25:L, reg i41:I, reg r199:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i43:I, reg dx15:V, reg m14:*, reg m15:V, reg order_min10:*, reg order_min11:V, reg r202:V, reg r203:V, reg ____1:cls, reg r204:V, reg _x_:cls, reg P2:*, reg P3:V, reg p38:p(V +), reg varE:*, reg varE1:V, reg c26:L, reg varE3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg m16:*, reg m17:V, reg order_min12:*, reg order_min13:V, reg r206:V, reg r207:V, reg __4:cls, reg r208:V, reg p39:p(V +), reg r210:V, reg ncol5:cls, reg varA:*, reg varA1:V, reg p40:p(V +), reg r212:V, reg r213:V, reg c27:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r214:V, reg i48:I, reg r215:V, reg diag:cls, reg varA2:*, reg varA3:V, reg p41:p(V +), reg r217:V, reg r218:V, reg i49:I, reg r219:V, reg numeric:cls, reg r220:V, reg l10:*, reg c28:L, reg i51:I, reg r222:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i53:I, reg dx19:V, reg m18:*, reg m19:V, reg order_min14:*, reg order_min15:V, reg r225:V, reg r226:V, reg ____2:cls, reg r227:V, reg n_used8:*, reg n_used9:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r228:V, reg i56:I, reg n_used12:V, reg r229:V, reg det:cls, reg varE4:*, reg varE5:V, reg c29:L, reg varE7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg m20:*, reg m21:V, reg order_min16:*, reg order_min17:V, reg r230:V, reg r231:V, reg __5:cls, reg r232:V, reg p42:p(V +), reg r234:V, reg r235:V, reg r236:V, reg nser12:*, reg nser13:V, reg r237:V, reg nser14:*, reg nser15:V, reg m22:*, reg m23:V, reg r238:V, reg intercept3:*, reg intercept4:V, reg r239:V, reg r240:V, reg r241:V, reg l13:*, reg c30:L, reg i58:I, reg r243:V, reg l15:*, reg dr22:V, reg dc11:L, reg dx22:V, reg i60:I, reg dx23:V, reg m24:*, reg m25:V, reg order_min18:*, reg order_min19:V, reg r246:V, reg r247:V, reg ___5:cls, reg r248:V, reg aic3:*, reg aic4:V, reg c31:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r249:V, reg r250:V, reg xaic:*, reg xaic1:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r251:V, reg xaic4:V, reg r252:V, reg xaic5:*, reg xaic6:V, reg min1:cls, reg r253:V, reg r254:V, reg which_max:cls, reg r255:V, reg order_min20:*, reg order_min21:V, reg r256:V, reg r257:V, reg r258:V, reg order_max15:*, reg order_max16:V, reg embed1:cls, reg x36:*, reg x37:V, reg p43:p(V +), reg m26:*, reg m27:V, reg r260:V, reg p44:p(V +), reg r262:V, reg A4:*, reg A5:V, reg c32:L, reg A7:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg m28:*, reg m29:V, reg order_min22:*, reg order_min23:V, reg r263:V, reg r264:V, reg __6:cls, reg r265:V, reg intercept5:*, reg intercept6:V, reg c33:L, reg AA:*, reg AA1:V, reg c34:L, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __7:cls, reg r266:V, reg AA4:*, reg AA5:V, reg c35:L, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg __8:cls, reg r267:V, reg m30:*, reg m31:V, reg c36:L, reg cbind1:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r268:V, reg r269:V, reg nrow5:cls, reg y22:*, reg y23:V, reg p45:p(V +), reg r271:V, reg rep_int7:cls, reg r272:V, reg p46:p(V +), reg y24:*, reg y25:V, reg c37:L, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg nser16:*, reg nser17:V, reg r274:V, reg ncol6:cls, reg y28:*, reg y29:V, reg p47:p(V +), reg r276:V, reg r277:V, reg __9:cls, reg r278:V, reg p48:p(V +), reg r280:V, reg r281:V, reg as_matrix2:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r282:V, reg r283:V, reg nrow6:cls, reg y30:*, reg y31:V, reg p49:p(V +), reg r285:V, reg rep_int8:cls, reg r286:V, reg p50:p(V +), reg r288:V, reg m32:*, reg m33:V, reg c38:L, reg y32:*, reg y33:V, reg c39:L, reg y35:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg nser18:*, reg nser19:V, reg r290:V, reg ncol7:cls, reg y36:*, reg y37:V, reg p51:p(V +), reg r292:V, reg r293:V, reg __10:cls, reg r294:V, reg dx34:V, reg matrix1:cls, reg nrow7:cls, reg y38:*, reg y39:V, reg p52:p(V +), reg r296:V, reg p53:p(V +), reg r298:V, reg AA8:*, reg AA9:V, reg t3:cls, reg y40:*, reg y41:V, reg c40:L, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg iser2:*, reg iser3:V, reg __11:cls, reg r299:V, reg p54:p(V +), reg r301:V, reg AA10:*, reg AA11:V, reg t4:cls, reg X8:*, reg X9:V, reg p55:p(V +), reg r303:V, reg ___6:cls, reg r304:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r305:V, reg r306:V, reg rbind:cls, reg matrix2:cls, reg m34:*, reg m35:V, reg p56:p(V +), reg nser20:*, reg nser21:V, reg p57:p(V +), reg r309:V, reg p58:p(V +), reg t5:cls, reg Y6:*, reg Y7:V, reg YH2:*, reg YH3:V, reg r311:V, reg p59:p(V +), reg r313:V, reg p60:p(V +), reg r315:V, reg drop1:cls, reg r316:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r317:V, reg r318:V, reg aic5:*, reg aic6:V, reg min2:cls, reg r319:V, reg setNames:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r320:V, reg r321:V, reg maic:*, reg maic1:V, reg is_finite:cls, reg r322:V, reg c41:L, reg xaic7:*, reg xaic8:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r323:V, reg xaic11:V, reg r324:V, reg xaic12:*, reg xaic13:V, reg min3:cls, reg r325:V, reg r326:V, reg ifelse:cls, reg xaic14:*, reg xaic15:V, reg maic2:*, reg maic3:V, reg r327:V, reg p61:p(V +), reg r329:V, reg p62:p(V +), reg order_min24:*, reg order_min25:V, reg order_max17:*, reg order_max18:V, reg r331:V, reg p63:p(V +), reg r333:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r334:V, reg r335:V, reg nser22:*, reg nser23:V, reg nser24:*, reg nser25:V, reg m36:*, reg m37:V, reg c42:cls, reg r336:V, reg l16:*, reg dim__:cls, reg r337:V, reg aperm:cls, reg ar:*, reg ar1:V, reg p64:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r339:V, reg r340:V, reg c43:cls, reg r341:V, reg p65:p(V +), reg r343:V, reg seA:*, reg seA1:V, reg c44:L, reg seA3:V, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg m38:*, reg m39:V, reg order_min26:*, reg order_min27:V, reg r344:V, reg r345:V, reg __12:cls, reg r346:V, reg intercept7:*, reg intercept8:V, reg c45:L, reg ses:*, reg ses1:V, reg c46:L, reg ses3:V, reg dr38:V, reg dc19:L, reg dx39:V, reg dx40:V, reg iser4:*, reg iser5:V, reg __13:cls, reg r347:V, reg ses4:*, reg ses5:V, reg c47:L, reg ses7:V, reg dr40:V, reg dc20:L, reg dx41:V, reg dx42:V, reg iser6:*, reg iser7:V, reg r348:V, reg __14:cls, reg r349:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r350:V, reg r351:V, reg nser26:*, reg nser27:V, reg rep_int9:cls, reg r352:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r353:V, reg r354:V, reg nser28:*, reg nser29:V, reg nser30:*, reg nser31:V, reg m40:*, reg m41:V, reg c48:cls, reg r355:V, reg l17:*, reg dim__1:cls, reg r356:V, reg aperm1:cls, reg ses8:*, reg ses9:V, reg p66:p(V +), reg sym35:cls, reg base35:cls, reg guard35:L, reg r358:V, reg r359:V, reg c49:cls, reg r360:V, reg p67:p(V +), reg r362:V, reg varE8:*, reg varE9:V, reg c50:L, reg varE11:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg m42:*, reg m43:V, reg order_min28:*, reg order_min29:V, reg r363:V, reg r364:V, reg __15:cls, reg r365:V, reg nser32:*, reg nser33:V, reg r366:V, reg c51:L, reg colnames:cls, reg x38:*, reg x39:V, reg p68:p(V +), reg r368:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r369:V, reg r370:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r371:V, reg r372:V, reg m44:*, reg m45:V, reg r373:I, reg snames:*, reg snames1:V, reg snames2:*, reg snames3:V, reg list:cls, reg r374:V, reg l18:*, reg dimnames__:cls, reg r375:V, reg l19:*, reg dimnames__1:cls, reg r376:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r377:V, reg r378:V, reg snames4:*, reg snames5:V, reg snames6:*, reg snames7:V, reg list1:cls, reg r379:V, reg l20:*, reg dimnames__2:cls, reg r380:V, reg snames8:*, reg snames9:V, reg l21:*, reg colnames__:cls, reg r381:V, reg l22:*, reg names__:cls, reg r382:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r383:V, reg r384:V, reg var_pred:*, reg var_pred1:V, reg drop2:cls, reg r385:V, reg ists2:*, reg ists3:V, reg c52:L, reg xtsp:*, reg xtsp1:V, reg l23:*, reg attr__:cls, reg r386:V, reg l24:*, reg attr__1:cls, reg r387:V, reg rescale2:*, reg rescale3:V, reg c53:L, reg xm2:*, reg xm3:V, reg sc4:*, reg sc5:V, reg r389:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r390:V, reg r391:V, reg xint:*, reg xint1:V, reg c54:V, reg r392:V, reg c55:L, reg xint2:*, reg xint3:V, reg sc6:*, reg sc7:V, reg r393:V, reg outer:cls, reg sc8:*, reg sc9:V, reg p69:p(V +), reg sc10:*, reg sc11:V, reg r396:V, reg p70:p(V +), reg r398:V, reg nser34:*, reg nser35:V, reg r399:V, reg c56:L, reg c58:V, reg m46:*, reg m47:V, reg c59:L, reg c60:V, reg c62:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r400:V, reg r401:V, reg m48:*, reg m49:V, reg r402:I, reg s1:V, reg l25:I, reg i61:I, reg i62:I, reg i63:I, reg c63:L, reg x40:V, reg ar2:*, reg ar3:V, reg c64:L, reg i67:I, reg ar5:V, reg dr44:V, reg dc22:L, reg dx46:V, reg i69:I, reg dx47:V, reg i70:*, reg i71:V, reg __16:cls, reg r403:V, reg aa:*, reg aa1:V, reg r404:V, reg l26:*, reg c65:L, reg i73:I, reg r406:V, reg l28:*, reg dr46:V, reg dc23:L, reg dx48:V, reg i75:I, reg dx49:V, reg i76:*, reg i77:V, reg ___7:cls, reg r409:V, reg var_pred2:*, reg var_pred3:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r410:V, reg var_pred6:V, reg r411:V, reg outer1:cls, reg sc12:*, reg sc13:V, reg p71:p(V +), reg sc14:*, reg sc15:V, reg p72:p(V +), reg r414:V, reg drop3:cls, reg r415:V, reg r416:V, reg E2:*, reg E3:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r417:V, reg E6:V, reg r418:V, reg sc16:*, reg sc17:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r419:V, reg E9:V, reg r420:V, reg NROW:cls, reg E10:*, reg E11:V, reg p73:p(V +), reg r422:V, reg nser36:*, reg nser37:V, reg rep_int10:cls, reg r423:V, reg rep_int11:cls, reg r424:V, reg r425:V, reg sem:*, reg sem1:V, reg sc18:*, reg sc19:V, reg r426:V, reg m50:*, reg m51:V, reg c66:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r427:V, reg r428:V, reg m52:*, reg m53:V, reg r429:I, reg s2:V, reg l29:I, reg i79:I, reg i80:I, reg i81:I, reg c67:L, reg x41:V, reg ses10:*, reg ses11:V, reg c68:L, reg i85:I, reg ses13:V, reg dr48:V, reg dc24:L, reg dx50:V, reg i87:I, reg dx51:V, reg i88:*, reg i89:V, reg __17:cls, reg r430:V, reg aa2:*, reg aa3:V, reg r431:V, reg l30:*, reg c69:L, reg i91:I, reg r433:V, reg l32:*, reg dr50:V, reg dc25:L, reg dx52:V, reg i93:I, reg dx53:V, reg i94:*, reg i95:V, reg ___8:cls, reg r436:V, reg i96:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r437:V, reg r438:V, reg m54:*, reg m55:V, reg ar6:*, reg ar7:V, reg var_pred7:*, reg var_pred8:V, reg xm4:*, reg xm5:V, reg xint4:*, reg xint5:V, reg xaic16:*, reg xaic17:V, reg n_used13:*, reg n_used14:V, reg n_used15:*, reg n_used16:V, reg order_max19:*, reg order_max20:V, reg E12:*, reg E13:V, reg series3:*, reg series4:V, reg xfreq:*, reg xfreq1:V, reg match_call:cls, reg r439:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r440:V, reg r441:V, reg sem2:*, reg sem3:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r442:V, reg r443:V, reg ses14:*, reg ses15:V, reg drop4:cls, reg r444:V, reg list2:cls, reg r445:V, reg list3:cls, reg r446:V, reg l33:*, reg class__:cls, reg r447:V, reg res:*, reg res1:V |
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
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L5() else L6(intercept);
  L5():
    p1 = prom<V +>{
      demean1 = ld demean;
      demean2 = force? demean1;
      checkMissing(demean2);
      return demean2;
    };
    goto L6(p1);
  L6(intercept_orDefault):
    st intercept = intercept_orDefault;
    series_isMissing = missing.0(series);
    if series_isMissing then L7(NULL) else L7(series);
  L7(series_orDefault):
    st series = series_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L127() else L128();
  L8(r3):
    c1 = `as.logical`(r3);
    if c1 then L130() else L9();
  L127():
    series1 = ld series;
    check L129() else D0();
  L128():
    r2 = dyn base(<sym series>);
    goto L8(r2);
  D0():
    deopt 1 [series1];
  L9():
    goto L10();
  L10():
    st rescale = TRUE;
    is_ts = ldf `is.ts`;
    check L134() else D3();
  L129():
    series2 = force? series1;
    checkMissing(series2);
    c = `==`(series2, NULL);
    goto L8(c);
  L130():
    deparse1 = ldf deparse1;
    check L131() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 15 [];
  L131():
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
    r8 = dyn deparse1(p2);
    check L132() else D2();
  L134():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r11 = dyn is_ts(p3);
    check L135() else D4();
  D2():
    deopt 7 [r8];
  D4():
    deopt 17 [r11];
  L132():
    st series = r8;
    goto L10();
  L135():
    st ists = r11;
    na_action1 = ldf `na.action`;
    check L136() else D5();
  D5():
    deopt 20 [];
  L136():
    p5 = prom<V +>{
      as_ts = ldf `as.ts`;
      p4 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r13 = dyn as_ts(p4);
      return r13;
    };
    r15 = dyn na_action1(p5);
    check L137() else D6();
  D6():
    deopt 22 [r15];
  L137():
    st x = r15;
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L138() else L139();
  L11(r17):
    c2 = `as.logical`(r17);
    if c2 then L142() else L12();
  L138():
    x5 = ld x;
    check L140() else D7();
  L139():
    r16 = dyn base2(<sym x>);
    goto L11(r16);
  D7():
    deopt 26 [x5];
  L12():
    goto L13();
  L13():
    ists = ld ists;
    check L146() else D11();
  L140():
    x6 = force? x5;
    checkMissing(x6);
    anyNA = ldf anyNA in base;
    r18 = dyn anyNA(x6);
    check L141() else D8();
  L142():
    stop = ldf stop;
    check L143() else D9();
  D8():
    deopt 29 [r18];
  D9():
    deopt 31 [];
  D11():
    deopt 36 [ists];
  L141():
    goto L11(r18);
  L143():
    r19 = dyn stop("NAs in 'x'");
    check L144() else D10();
  L146():
    ists1 = force? ists;
    checkMissing(ists1);
    c3 = `as.logical`(ists1);
    if c3 then L147() else L14();
  D10():
    deopt 33 [r19];
  L14():
    goto L15();
  L15():
    frequency = ldf frequency;
    check L151() else D14();
  L144():
    goto L13();
  L147():
    tsp = ldf tsp;
    check L148() else D12();
  D12():
    deopt 39 [];
  D14():
    deopt 46 [];
  L148():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r22 = dyn tsp(p6);
    check L149() else D13();
  L151():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r25 = dyn frequency(p7);
    check L152() else D15();
  D13():
    deopt 41 [r22];
  D15():
    deopt 48 [r25];
  L149():
    st xtsp = r22;
    goto L15();
  L152():
    st xfreq = r25;
    as_matrix = ldf `as.matrix`;
    check L153() else D16();
  D16():
    deopt 51 [];
  L153():
    p8 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r27 = dyn as_matrix(p8);
    check L154() else D17();
  D17():
    deopt 53 [r27];
  L154():
    st x = r27;
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L155() else L156();
  L16(r29):
    r31 = `!`(r29);
    c4 = `as.logical`(r31);
    if c4 then L159() else L17();
  L155():
    x13 = ld x;
    check L157() else D18();
  L156():
    r28 = dyn base3(<sym x>);
    goto L16(r28);
  D18():
    deopt 57 [x13];
  L17():
    goto L18();
  L18():
    nrow = ldf nrow;
    check L163() else D22();
  L157():
    x14 = force? x13;
    checkMissing(x14);
    is_numeric = ldf `is.numeric` in base;
    r30 = dyn is_numeric(x14);
    check L158() else D19();
  L159():
    stop1 = ldf stop;
    check L160() else D20();
  D19():
    deopt 60 [r30];
  D20():
    deopt 63 [];
  D22():
    deopt 69 [];
  L158():
    goto L16(r30);
  L160():
    r32 = dyn stop1("'x' must be numeric");
    check L161() else D21();
  L163():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r35 = dyn nrow(p9);
    check L164() else D23();
  D21():
    deopt 65 [r32];
  D23():
    deopt 71 [r35];
  L161():
    goto L18();
  L164():
    st `n.used` = r35;
    ncol = ldf ncol;
    check L165() else D24();
  D24():
    deopt 74 [];
  L165():
    p10 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r37 = dyn ncol(p10);
    check L166() else D25();
  D25():
    deopt 76 [r37];
  L166():
    st nser = r37;
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L167() else L168();
  L19(r39):
    st iser = r39;
    rescale = ld rescale;
    check L170() else D27();
  L167():
    nser = ld nser;
    check L169() else D26();
  L168():
    r38 = dyn base4(<sym nser>);
    goto L19(r38);
  D26():
    deopt 79 [nser];
  D27():
    deopt 83 [rescale];
  L169():
    nser1 = force? nser;
    checkMissing(nser1);
    r40 = seq_len(nser1);
    goto L19(r40);
  L170():
    rescale1 = force? rescale;
    checkMissing(rescale1);
    c5 = `as.logical`(rescale1);
    if c5 then L171() else L20();
  L20():
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L194() else L195();
  L26():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L198() else L199();
  L171():
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L172() else L173();
  L21(r42):
    st sc = r42;
    l = ld sc;
    c6 = `is.object`(l);
    if c6 then L179() else L180(1.0, l);
  L27(r65):
    st sc = r65;
    goto L26();
  L28(r68):
    c8 = `as.logical`(r68);
    if c8 then L201() else L29();
  L172():
    sym6 = ldf drop;
    base6 = ldf drop in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L174() else L175();
  L173():
    r41 = dyn base5(<lang drop(apply(x, 2, var))>);
    goto L21(r41);
  L194():
    nser4 = ld nser;
    check L196() else D38();
  L195():
    r64 = dyn base9(1.0, <sym nser>);
    goto L27(r64);
  L198():
    order_max1 = ld `order.max`;
    check L200() else D40();
  L199():
    r67 = dyn base10(<sym order.max>);
    goto L28(r67);
  D38():
    deopt 127 [nser4];
  D40():
    deopt 133 [order_max1];
  L22(r44):
    r49 = sqrt(r44);
    goto L21(r49);
  L23(dx1):
    st sc = dx1;
    x21 = ld x;
    check L183() else D32();
  L29():
    sym14 = ldf round;
    base14 = ldf round in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L213() else L214();
  L33(r83):
    st `order.max` = r83;
    order_max3 = ld `order.max`;
    check L215() else D45();
  L174():
    apply = ldf apply;
    check L176() else D28();
  L175():
    r43 = dyn base6(<lang apply(x, 2, var)>);
    goto L22(r43);
  L179():
    dr = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L181() else L180(1.0, dr);
  L180(r51, l2):
    sc = ld sc;
    check L182() else D31();
  L196():
    nser5 = force? nser4;
    checkMissing(nser5);
    rep_int2 = ldf `rep.int` in base;
    r66 = dyn rep_int2(1.0, nser5);
    check L197() else D39();
  L200():
    order_max2 = force? order_max1;
    checkMissing(order_max2);
    c7 = `==`(order_max2, NULL);
    goto L28(c7);
  L201():
    sym11 = ldf min;
    base11 = ldf min in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L202() else L203();
  D28():
    deopt 89 [];
  D31():
    deopt 101 [r51, l2, 1.0, sc];
  D32():
    deopt 107 [x21];
  D39():
    deopt 130 [r66];
  D45():
    deopt 158 [order_max3];
  L30(r70):
    goto L33(r70);
  L176():
    p11 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    p12 = prom<V +>{
      var = ld var;
      var1 = force? var;
      checkMissing(var1);
      return var1;
    };
    r47 = dyn apply(p11, 2, p12);
    check L177() else D29();
  L181():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L182():
    sc1 = force? sc;
    checkMissing(sc1);
    r54 = `==`(sc1, 0.0);
    ___ = ldf `[<-` in base;
    r55 = dyn ___(l2, 1.0, r54);
    goto L23(r55);
  L183():
    x22 = force? x21;
    checkMissing(x22);
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L184() else L185();
  L197():
    goto L27(r66);
  L202():
    n_used2 = ld `n.used`;
    check L204() else D41();
  L203():
    r69 = dyn base11(<lang `-`(n.used, 1)>, <lang floor(`*`(10.0, log10(n.used)))>);
    goto L30(r69);
  L213():
    round = ldf round in base;
    r85 = dyn round(<sym order.max>);
    goto L33(r85);
  L214():
    r84 = dyn base14(<sym order.max>);
    goto L33(r84);
  L215():
    order_max4 = force? order_max3;
    checkMissing(order_max4);
    r86 = `<`(order_max4, 0);
    c9 = `as.logical`(r86);
    if c9 then L216() else L34();
  D29():
    deopt 93 [r47];
  D41():
    deopt 138 [n_used2];
  L24(x25, r57):
    r62 = `/`(x25, r57);
    st x = r62;
    goto L26();
  L34():
    goto L35();
  L35():
    order_max5 = ld `order.max`;
    check L220() else D48();
  L177():
    drop = ldf drop in base;
    r48 = dyn drop(r47);
    check L178() else D30();
  L184():
    sc2 = ld sc;
    check L186() else D33();
  L185():
    r56 = dyn base7(<sym sc>, <lang rep.int(n.used, nser)>);
    goto L24(x22, r56);
  L204():
    n_used3 = force? n_used2;
    checkMissing(n_used3);
    r71 = `-`(n_used3, 1);
    sym12 = ldf floor;
    base12 = ldf floor in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L205() else L206();
  L216():
    stop2 = ldf stop;
    check L217() else D46();
  D30():
    deopt 95 [r48];
  D33():
    deopt 110 [x22, sc2];
  D46():
    deopt 163 [];
  D48():
    deopt 168 [order_max5];
  L31(r73):
    min = ldf min in base;
    r82 = dyn min(r71, r73);
    check L211() else D44();
  L178():
    goto L22(r48);
  L186():
    sc3 = force? sc2;
    checkMissing(sc3);
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L187() else L188();
  L205():
    sym13 = ldf log10;
    base13 = ldf log10 in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L207() else L208();
  L206():
    r72 = dyn base12(<lang `*`(10.0, log10(n.used))>);
    goto L31(r72);
  L217():
    r87 = dyn stop2("'order.max' must be >= 0");
    check L218() else D47();
  L220():
    order_max6 = force? order_max5;
    checkMissing(order_max6);
    n_used6 = ld `n.used`;
    check L221() else D49();
  D44():
    deopt 153 [r82];
  D47():
    deopt 165 [r87];
  D49():
    deopt 169 [order_max6, n_used6];
  L25(x28, r59):
    rep_int1 = ldf `rep.int` in base;
    r61 = dyn rep_int1(sc3, r59);
    check L192() else D37();
  L32(r77, r78):
    r80 = `*`(r77, r78);
    r81 = floor(r80);
    goto L31(r81);
  L187():
    n_used = ld `n.used`;
    check L189() else D34();
  L188():
    r58 = dyn base8(<sym n.used>, <sym nser>);
    goto L25(x22, r58);
  L207():
    n_used4 = ld `n.used`;
    check L209() else D42();
  L208():
    r76 = dyn base13(<sym n.used>);
    goto L32(10.0, r76);
  L211():
    goto L30(r82);
  L218():
    goto L35();
  L221():
    n_used7 = force? n_used6;
    checkMissing(n_used7);
    r89 = `>=`(order_max6, n_used7);
    c10 = `as.logical`(r89);
    if c10 then L222() else L36();
  D34():
    deopt 114 [x22, n_used];
  D37():
    deopt 121 [x28, r61];
  D42():
    deopt 146 [10.0, n_used4];
  L36():
    goto L37();
  L37():
    aic1 = ld aic;
    check L226() else D52();
  L189():
    n_used1 = force? n_used;
    checkMissing(n_used1);
    nser2 = ld nser;
    check L190() else D35();
  L192():
    goto L24(x28, r61);
  L209():
    n_used5 = force? n_used4;
    checkMissing(n_used5);
    log10 = ldf log10 in base;
    r79 = dyn log10(n_used5);
    check L210() else D43();
  L222():
    stop3 = ldf stop;
    check L223() else D50();
  D35():
    deopt 116 [x22, nser2];
  D43():
    deopt 149 [10.0, r79];
  D50():
    deopt 173 [];
  D52():
    deopt 178 [aic1];
  L190():
    nser3 = force? nser2;
    checkMissing(nser3);
    rep_int = ldf `rep.int` in base;
    r60 = dyn rep_int(n_used1, nser3);
    check L191() else D36();
  L210():
    goto L32(10.0, r79);
  L223():
    r90 = dyn stop3("'order.max' must be < 'n.used'");
    check L224() else D51();
  L226():
    aic2 = force? aic1;
    checkMissing(aic2);
    c11 = `as.logical`(aic2);
    if c11 then L227() else L38();
  D36():
    deopt 119 [x22, r60];
  D51():
    deopt 175 [r90];
  L38():
    order_max7 = ld `order.max`;
    check L229() else D53();
  L39(r92):
    st `order.min` = r92;
    sym15 = ldf vector;
    base15 = ldf vector in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L230() else L231();
  L191():
    goto L25(x22, r60);
  L224():
    goto L37();
  L227():
    goto L39(0);
  D53():
    deopt 182 [order_max7];
  L40(r94):
    st A = r94;
    st seA = r94;
    st varE = r94;
    sym16 = ldf `rep.int`;
    base16 = ldf `rep.int` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L235() else L236();
  L229():
    order_max8 = force? order_max7;
    checkMissing(order_max8);
    goto L39(order_max8);
  L230():
    order_max9 = ld `order.max`;
    check L232() else D54();
  L231():
    r93 = dyn base15("list", <lang `+`(`-`(order.max, order.min), 1)>);
    goto L40(r93);
  D54():
    deopt 188 [order_max9];
  L41(r99):
    st xaic = r99;
    r103 = clos inner2501545716;
    st det = r103;
    demean3 = ld demean;
    check L240() else D60();
  L232():
    order_max10 = force? order_max9;
    checkMissing(order_max10);
    order_min = ld `order.min`;
    check L233() else D55();
  L235():
    order_max11 = ld `order.max`;
    check L237() else D57();
  L236():
    r98 = dyn base16(+Infinity, <lang `+`(`-`(order.max, order.min), 1)>);
    goto L41(r98);
  D55():
    deopt 189 [order_max10, order_min];
  D57():
    deopt 202 [order_max11];
  D60():
    deopt 214 [demean3];
  L233():
    order_min1 = force? order_min;
    checkMissing(order_min1);
    r95 = `-`(order_max10, order_min1);
    r96 = `+`(r95, 1);
    vector = ldf vector in base;
    r97 = dyn vector("list", r96);
    check L234() else D56();
  L237():
    order_max12 = force? order_max11;
    checkMissing(order_max12);
    order_min2 = ld `order.min`;
    check L238() else D58();
  L240():
    demean4 = force? demean3;
    checkMissing(demean4);
    c12 = `as.logical`(demean4);
    if c12 then L241() else L42();
  D56():
    deopt 195 [r97];
  D58():
    deopt 203 [order_max12, order_min2];
  L42():
    sym17 = ldf `rep.int`;
    base17 = ldf `rep.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L247() else L248();
  L43():
    order_min4 = ld `order.min`;
    check L251() else D67();
  L234():
    goto L40(r97);
  L238():
    order_min3 = force? order_min2;
    checkMissing(order_min3);
    r100 = `-`(order_max12, order_min3);
    r101 = `+`(r100, 1);
    rep_int3 = ldf `rep.int` in base;
    r102 = dyn rep_int3(+Infinity, r101);
    check L239() else D59();
  L241():
    colMeans = ldf colMeans;
    check L242() else D61();
  D59():
    deopt 209 [r102];
  D61():
    deopt 217 [];
  D67():
    deopt 238 [order_min4];
  L44(r111):
    st xm = r111;
    goto L43();
  L239():
    goto L41(r102);
  L242():
    p13 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r105 = dyn colMeans(p13);
    check L243() else D62();
  L247():
    nser6 = ld nser;
    check L249() else D65();
  L248():
    r110 = dyn base17(0.0, <sym nser>);
    goto L44(r110);
  L251():
    order_min5 = force? order_min4;
    checkMissing(order_min5);
    order_max13 = ld `order.max`;
    check L252() else D68();
  D62():
    deopt 219 [r105];
  D65():
    deopt 233 [nser6];
  D68():
    deopt 239 [order_min5, order_max13];
  L243():
    st xm = r105;
    sweep = ldf sweep;
    check L244() else D63();
  L249():
    nser7 = force? nser6;
    checkMissing(nser7);
    rep_int4 = ldf `rep.int` in base;
    r112 = dyn rep_int4(0.0, nser7);
    check L250() else D66();
  L252():
    order_max14 = force? order_max13;
    checkMissing(order_max14);
    r113 = `:`(order_min5, order_max14);
    s = toForSeq(r113);
    l3 = length(s);
    i = 0;
    goto L45(i);
  D63():
    deopt 222 [];
  D66():
    deopt 236 [r112];
  L45(i1):
    i2 = `+`.1(i1, 1);
    c13 = `<`.1(l3, i2);
    if c13 then L253() else L67();
  L244():
    p14 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p15 = prom<V +>{
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      return xm1;
    };
    r108 = dyn sweep[, , , `check.margin`](p14, 2, p15, FALSE);
    check L245() else D64();
  L250():
    goto L44(r112);
  D64():
    deopt 228 [r108];
  L53():
    aic3 = ld aic;
    check L369() else D143();
  L67():
    x33 = `[[`(s, i2, NULL, TRUE);
    st m = x33;
    embed = ldf embed;
    check L254() else D69();
  L245():
    st x = r108;
    goto L43();
  L253():
    goto L53();
  D69():
    deopt 243 [i2];
  D143():
    deopt 458 [aic3];
  L254():
    p16 = prom<V +>{
      x34 = ld x;
      x35 = force? x34;
      checkMissing(x35);
      return x35;
    };
    p17 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      r115 = `+`(m1, 1);
      return r115;
    };
    r117 = dyn embed(p16, p17);
    check L255() else D70();
  L369():
    aic4 = force? aic3;
    checkMissing(aic4);
    c31 = `as.logical`(aic4);
    if c31 then L370() else L68();
  D70():
    deopt 246 [i2, r117];
  L68():
    order_max15 = ld `order.max`;
    check L381() else D149();
  L71(r258):
    st m = r258;
    embed1 = ldf embed;
    check L382() else D150();
  L255():
    st y = r117;
    intercept1 = ld intercept;
    check L256() else D71();
  L370():
    sym23 = ldf `which.max`;
    base23 = ldf `which.max` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L371() else L372();
  D71():
    deopt 248 [i2, intercept1];
  D149():
    deopt 476 [order_max15];
  D150():
    deopt 480 [];
  L69(r250):
    order_min20 = ld `order.min`;
    check L379() else D148();
  L256():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    c14 = `as.logical`(intercept2);
    if c14 then L257() else L46();
  L371():
    xaic = ld xaic;
    check L373() else D144();
  L372():
    r249 = dyn base23(<lang `==`(xaic, min(xaic))>);
    goto L69(r249);
  L381():
    order_max16 = force? order_max15;
    checkMissing(order_max16);
    goto L71(order_max16);
  L382():
    p43 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      return x37;
    };
    p44 = prom<V +>{
      m26 = ld m;
      m27 = force? m26;
      checkMissing(m27);
      r260 = `+`(m27, 1);
      return r260;
    };
    r262 = dyn embed1(p43, p44);
    check L383() else D151();
  D144():
    deopt 462 [xaic];
  D148():
    deopt 471 [r250, order_min20];
  D151():
    deopt 483 [r262];
  L46():
    m4 = ld m;
    check L266() else D77();
  L49(i10, r139):
    st X = r139;
    t = ldf t;
    check L278() else D84();
  L257():
    m2 = ld m;
    check L258() else D72();
  L373():
    xaic1 = force? xaic;
    checkMissing(xaic1);
    sym24 = ldf min;
    base24 = ldf min in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L374() else L375();
  L379():
    order_min21 = force? order_min20;
    checkMissing(order_min21);
    r256 = `+`(r250, order_min21);
    r257 = `-`(r256, 1);
    goto L71(r257);
  L383():
    st y = r262;
    A4 = ld A;
    check L384() else D152();
  D72():
    deopt 250 [i2, m2];
  D77():
    deopt 261 [i2, m4];
  D84():
    deopt 284 [i10];
  D152():
    deopt 485 [A4];
  L70(xaic4, r252):
    r254 = `==`(xaic4, r252);
    which_max = ldf `which.max` in base;
    r255 = dyn which_max(r254);
    check L378() else D147();
  L258():
    m3 = force? m2;
    checkMissing(m3);
    c15 = `as.logical`(m3);
    if c15 then L259() else L47();
  L266():
    m5 = force? m4;
    checkMissing(m5);
    c17 = `as.logical`(m5);
    if c17 then L267() else L50();
  L278():
    p27 = prom<V +>{
      y18 = ld y;
      y19 = force? y18;
      checkMissing(y19);
      c19 = `is.object`(y19);
      if c19 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", y19);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      iser = ld iser;
      iser1 = force? iser;
      __2 = ldf `[` in base;
      r149 = dyn __2(y19, <missing>, iser1);
      goto L0(r149);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r151 = dyn t(p27);
    check L279() else D85();
  L374():
    xaic5 = ld xaic;
    check L376() else D145();
  L375():
    r251 = dyn base24(<sym xaic>);
    goto L70(xaic1, r251);
  L384():
    A5 = force? A4;
    checkMissing(A5);
    c32 = `is.object`(A5);
    if c32 then L385() else L386(A5);
  D85():
    deopt 286 [i10, r151];
  D145():
    deopt 465 [xaic1, xaic5];
  D147():
    deopt 471 [r255];
  L47():
    as_matrix1 = ldf `as.matrix`;
    check L263() else D75();
  L48(i9, r131):
    goto L49(i9, r131);
  L50():
    matrix = ldf matrix;
    check L276() else D82();
  L72(dx25):
    st AA = dx25;
    intercept5 = ld intercept;
    check L390() else D155();
  L259():
    cbind = ldf cbind;
    check L260() else D73();
  L267():
    y10 = ld y;
    check L268() else D78();
  L279():
    st Y = r151;
    ncol3 = ldf ncol;
    check L280() else D86();
  L376():
    xaic6 = force? xaic5;
    checkMissing(xaic6);
    min1 = ldf min in base;
    r253 = dyn min1(xaic6);
    check L377() else D146();
  L378():
    goto L69(r255);
  L385():
    dr24 = tryDispatchBuiltin.1("[[", A5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L387() else L386(dr24);
  L386(A7):
    m28 = ld m;
    check L388() else D153();
  D73():
    deopt 253 [i2];
  D75():
    deopt 258 [i2];
  D78():
    deopt 263 [i2, y10];
  D82():
    deopt 277 [i2];
  D86():
    deopt 289 [i10];
  D146():
    deopt 468 [xaic1, r253];
  D153():
    deopt 487 [A7, m28];
  D155():
    deopt 495 [intercept5];
  L260():
    p19 = prom<V +>{
      sym18 = ldf `rep.int`;
      base18 = ldf `rep.int` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r119):
      return r119;
    L1():
      nrow1 = ldf nrow;
      p18 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r121 = dyn nrow1(p18);
      rep_int5 = ldf `rep.int` in base;
      r122 = dyn rep_int5(1.0, r121);
      goto L0(r122);
    L2():
      r118 = dyn base18(1.0, <lang nrow(y)>);
      goto L0(r118);
    };
    p21 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      c16 = `is.object`(y3);
      if c16 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", y3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      r124 = `+`(nser9, 1);
      ncol1 = ldf ncol;
      p20 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      r126 = dyn ncol1(p20);
      r127 = `:`(r124, r126);
      __ = ldf `[` in base;
      r128 = dyn __(y3, <missing>, r127);
      goto L0(r128);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r130 = dyn cbind(p19, p21);
    check L261() else D74();
  L263():
    p23 = prom<V +>{
      sym19 = ldf `rep.int`;
      base19 = ldf `rep.int` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      nrow2 = ldf nrow;
      p22 = prom<V +>{
        y8 = ld y;
        y9 = force? y8;
        checkMissing(y9);
        return y9;
      };
      r135 = dyn nrow2(p22);
      rep_int6 = ldf `rep.int` in base;
      r136 = dyn rep_int6(1.0, r135);
      goto L0(r136);
    L2():
      r132 = dyn base19(1.0, <lang nrow(y)>);
      goto L0(r132);
    };
    r138 = dyn as_matrix1(p23);
    check L264() else D76();
  L268():
    y11 = force? y10;
    checkMissing(y11);
    c18 = `is.object`(y11);
    if c18 then L269() else L270(i2, y11);
  L276():
    p26 = prom<V +>{
      nrow3 = ldf nrow;
      p25 = prom<V +>{
        y16 = ld y;
        y17 = force? y16;
        checkMissing(y17);
        return y17;
      };
      r146 = dyn nrow3(p25);
      return r146;
    };
    r148 = dyn matrix(0.0, p26, 0.0);
    check L277() else D83();
  L280():
    p28 = prom<V +>{
      Y = ld Y;
      Y1 = force? Y;
      checkMissing(Y1);
      return Y1;
    };
    r153 = dyn ncol3(p28);
    check L281() else D87();
  L377():
    goto L70(xaic1, r253);
  L387():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L72(dx24);
  L388():
    m29 = force? m28;
    checkMissing(m29);
    order_min22 = ld `order.min`;
    check L389() else D154();
  L390():
    intercept6 = force? intercept5;
    checkMissing(intercept6);
    c33 = `as.logical`(intercept6);
    if c33 then L391() else L73();
  D74():
    deopt 256 [i2, r130];
  D76():
    deopt 260 [i2, r138];
  D83():
    deopt 281 [i2, r148];
  D87():
    deopt 291 [i10, r153];
  D154():
    deopt 488 [A7, m29, order_min22];
  L51(i16, dx5):
    goto L49(i16, dx5);
  L73():
    m32 = ld m;
    check L408() else D163();
  L78():
    t3 = ldf t;
    check L421() else D171();
  L261():
    goto L48(i2, r130);
  L264():
    goto L48(i2, r138);
  L269():
    dr4 = tryDispatchBuiltin.1("[", y11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L271() else L270(i2, dr4);
  L270(i14, y13):
    nser10 = ld nser;
    check L272() else D79();
  L277():
    goto L49(i2, r148);
  L281():
    st N = r153;
    t1 = ldf t;
    check L282() else D88();
  L389():
    order_min23 = force? order_min22;
    checkMissing(order_min23);
    r263 = `-`(m29, order_min23);
    r264 = `+`(r263, 1);
    __6 = ldf `[[` in base;
    r265 = dyn __6(A7, r264);
    goto L72(r265);
  L391():
    AA = ld AA;
    check L392() else D156();
  D79():
    deopt 266 [i14, y13, nser10];
  D88():
    deopt 295 [i10];
  D156():
    deopt 497 [AA];
  D163():
    deopt 524 [m32];
  D171():
    deopt 553 [];
  L271():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L51(i2, dx4);
  L272():
    nser11 = force? nser10;
    checkMissing(nser11);
    r140 = `+`(nser11, 1);
    ncol2 = ldf ncol;
    check L273() else D80();
  L282():
    p29 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r155 = dyn t1(p29);
    check L283() else D89();
  L392():
    AA1 = force? AA;
    checkMissing(AA1);
    c34 = `is.object`(AA1);
    if c34 then L393() else L394();
  L408():
    m33 = force? m32;
    checkMissing(m33);
    c38 = `as.logical`(m33);
    if c38 then L409() else L79();
  L421():
    p54 = prom<V +>{
      y40 = ld y;
      y41 = force? y40;
      checkMissing(y41);
      c40 = `is.object`(y41);
      if c40 then L1() else L2();
    L0(dx36):
      return dx36;
    L1():
      dr34 = tryDispatchBuiltin.1("[", y41);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2();
    L2():
      iser2 = ld iser;
      iser3 = force? iser2;
      __11 = ldf `[` in base;
      r299 = dyn __11(y41, <missing>, iser3, FALSE);
      goto L0(r299);
    L3():
      dx35 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx35);
    };
    r301 = dyn t3(p54);
    check L422() else D172();
  D80():
    deopt 270 [i14, y13, r140];
  D89():
    deopt 297 [i10, r155];
  D172():
    deopt 555 [r301];
  L74(dx27):
    st xint = dx27;
    AA4 = ld AA;
    check L396() else D157();
  L79():
    matrix1 = ldf matrix;
    check L418() else D168();
  L81(dx34):
    st X = dx34;
    st xint = NULL;
    AA8 = ld AA;
    check L420() else D170();
  L273():
    p24 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      return y15;
    };
    r142 = dyn ncol2(p24);
    check L274() else D81();
  L283():
    X2 = ld X;
    check L284() else D90();
  L393():
    dr26 = tryDispatchBuiltin.1("[", AA1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L395() else L394();
  L394():
    __7 = ldf `[` in base;
    r266 = dyn __7(AA1, <missing>, 1);
    goto L74(r266);
  L409():
    y32 = ld y;
    check L410() else D164();
  L422():
    st Y = r301;
    AA10 = ld AA;
    check L423() else D173();
  D81():
    deopt 272 [i14, y13, r140, r142];
  D90():
    deopt 298 [i10, X2];
  D157():
    deopt 504 [AA4];
  D164():
    deopt 526 [y32];
  D168():
    deopt 540 [];
  D170():
    deopt 549 [AA8];
  D173():
    deopt 558 [AA10];
  L274():
    r143 = `:`(r140, r142);
    __1 = ldf `[` in base;
    r144 = dyn __1(y11, <missing>, r143);
    goto L51(i14, r144);
  L284():
    X3 = force? X2;
    checkMissing(X3);
    ___1 = ldf `%*%` in base;
    r156 = dyn ___1(r155, X3);
    check L285() else D91();
  L395():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L74(dx26);
  L396():
    AA5 = force? AA4;
    checkMissing(AA5);
    c35 = `is.object`(AA5);
    if c35 then L397() else L398();
  L410():
    y33 = force? y32;
    checkMissing(y33);
    c39 = `is.object`(y33);
    if c39 then L411() else L412(y33);
  L418():
    p53 = prom<V +>{
      nrow7 = ldf nrow;
      p52 = prom<V +>{
        y38 = ld y;
        y39 = force? y38;
        checkMissing(y39);
        return y39;
      };
      r296 = dyn nrow7(p52);
      return r296;
    };
    r298 = dyn matrix1(0.0, p53, 0);
    check L419() else D169();
  L420():
    AA9 = force? AA8;
    checkMissing(AA9);
    st ar = AA9;
    goto L78();
  L423():
    AA11 = force? AA10;
    checkMissing(AA11);
    t4 = ldf t;
    check L424() else D174();
  D91():
    deopt 301 [i10, r156];
  D169():
    deopt 544 [r298];
  D174():
    deopt 561 [];
  L75(dx29):
    st ar = dx29;
    m30 = ld m;
    check L400() else D158();
  L80(dx33):
    goto L81(dx33);
  L285():
    st XX = r156;
    qr = ldf qr;
    check L286() else D92();
  L397():
    dr28 = tryDispatchBuiltin.1("[", AA5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L399() else L398();
  L398():
    __8 = ldf `[` in base;
    r267 = dyn __8(AA5, <missing>, -1);
    goto L75(r267);
  L411():
    dr32 = tryDispatchBuiltin.1("[", y33);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L413() else L412(dr32);
  L412(y35):
    nser18 = ld nser;
    check L414() else D165();
  L419():
    goto L81(r298);
  L424():
    p55 = prom<V +>{
      X8 = ld X;
      X9 = force? X8;
      checkMissing(X9);
      return X9;
    };
    r303 = dyn t4(p55);
    check L425() else D175();
  D92():
    deopt 304 [i10];
  D158():
    deopt 512 [m30];
  D165():
    deopt 529 [y35, nser18];
  D175():
    deopt 563 [r303];
  L286():
    p30 = prom<V +>{
      XX = ld XX;
      XX1 = force? XX;
      checkMissing(XX1);
      return XX1;
    };
    r158 = dyn qr(p30);
    check L287() else D93();
  L399():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L75(dx28);
  L400():
    m31 = force? m30;
    checkMissing(m31);
    c36 = `as.logical`(m31);
    if c36 then L401() else L76();
  L413():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L80(dx32);
  L414():
    nser19 = force? nser18;
    checkMissing(nser19);
    r290 = `+`(nser19, 1);
    ncol7 = ldf ncol;
    check L415() else D166();
  L425():
    ___6 = ldf `%*%` in base;
    r304 = dyn ___6(AA11, r303);
    check L426() else D176();
  D93():
    deopt 306 [i10, r158];
  D166():
    deopt 533 [y35, r290];
  D176():
    deopt 565 [r304];
  L76():
    as_matrix2 = ldf `as.matrix`;
    check L405() else D161();
  L77(r281):
    st X = r281;
    goto L78();
  L287():
    c20 = `is.object`(r158);
    if c20 then L289() else L290(i10, r158);
  L401():
    cbind1 = ldf cbind;
    check L402() else D159();
  L415():
    p51 = prom<V +>{
      y36 = ld y;
      y37 = force? y36;
      checkMissing(y37);
      return y37;
    };
    r292 = dyn ncol7(p51);
    check L416() else D167();
  L426():
    st YH = r304;
    sym27 = ldf drop;
    base27 = ldf drop in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L427() else L428();
  D159():
    deopt 515 [];
  D161():
    deopt 520 [];
  D167():
    deopt 535 [y35, r290, r292];
  L82(r306):
    st E = r306;
    sym28 = ldf min;
    base28 = ldf min in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L432() else L433();
  L288(i20, dx9):
    st rank = dx9;
    rank = ld rank;
    check L292() else D94();
  L289():
    dr8 = tryDispatchBuiltin.1("$", r158);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L291() else L290(i10, dr8);
  L290(i18, r160):
    r161 = `$`(r160, <sym rank>);
    goto L288(i18, r161);
  L402():
    p46 = prom<V +>{
      sym25 = ldf `rep.int`;
      base25 = ldf `rep.int` in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r269):
      return r269;
    L1():
      nrow5 = ldf nrow;
      p45 = prom<V +>{
        y22 = ld y;
        y23 = force? y22;
        checkMissing(y23);
        return y23;
      };
      r271 = dyn nrow5(p45);
      rep_int7 = ldf `rep.int` in base;
      r272 = dyn rep_int7(1.0, r271);
      goto L0(r272);
    L2():
      r268 = dyn base25(1.0, <lang nrow(y)>);
      goto L0(r268);
    };
    p48 = prom<V +>{
      y24 = ld y;
      y25 = force? y24;
      checkMissing(y25);
      c37 = `is.object`(y25);
      if c37 then L1() else L2();
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[", y25);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      nser16 = ld nser;
      nser17 = force? nser16;
      checkMissing(nser17);
      r274 = `+`(nser17, 1);
      ncol6 = ldf ncol;
      p47 = prom<V +>{
        y28 = ld y;
        y29 = force? y28;
        checkMissing(y29);
        return y29;
      };
      r276 = dyn ncol6(p47);
      r277 = `:`(r274, r276);
      __9 = ldf `[` in base;
      r278 = dyn __9(y25, <missing>, r277);
      goto L0(r278);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r280 = dyn cbind1(p46, p48);
    check L403() else D160();
  L405():
    p50 = prom<V +>{
      sym26 = ldf `rep.int`;
      base26 = ldf `rep.int` in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r283):
      return r283;
    L1():
      nrow6 = ldf nrow;
      p49 = prom<V +>{
        y30 = ld y;
        y31 = force? y30;
        checkMissing(y31);
        return y31;
      };
      r285 = dyn nrow6(p49);
      rep_int8 = ldf `rep.int` in base;
      r286 = dyn rep_int8(1.0, r285);
      goto L0(r286);
    L2():
      r282 = dyn base26(1.0, <lang nrow(y)>);
      goto L0(r282);
    };
    r288 = dyn as_matrix2(p50);
    check L406() else D162();
  L416():
    r293 = `:`(r290, r292);
    __10 = ldf `[` in base;
    r294 = dyn __10(y33, <missing>, r293);
    goto L80(r294);
  L427():
    rbind = ldf rbind;
    check L429() else D177();
  L428():
    r305 = dyn base27(<lang rbind(matrix(NA_LGL, m, nser), t(`-`(Y, YH)))>);
    goto L82(r305);
  D94():
    deopt 309 [i20, rank];
  D160():
    deopt 518 [r280];
  D162():
    deopt 522 [r288];
  D177():
    deopt 570 [];
  L83(r318):
    st maic = r318;
    setNames = ldf setNames;
    check L436() else D182();
  L291():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L288(i10, dx8);
  L292():
    rank1 = force? rank;
    checkMissing(rank1);
    nrow4 = ldf nrow;
    check L293() else D95();
  L403():
    goto L77(r280);
  L406():
    goto L77(r288);
  L429():
    p58 = prom<V +>{
      matrix2 = ldf matrix;
      p56 = prom<V +>{
        m34 = ld m;
        m35 = force? m34;
        checkMissing(m35);
        return m35;
      };
      p57 = prom<V +>{
        nser20 = ld nser;
        nser21 = force? nser20;
        checkMissing(nser21);
        return nser21;
      };
      r309 = dyn matrix2(NA_LGL, p56, p57);
      return r309;
    };
    p60 = prom<V +>{
      t5 = ldf t;
      p59 = prom<V +>{
        Y6 = ld Y;
        Y7 = force? Y6;
        checkMissing(Y7);
        YH2 = ld YH;
        YH3 = force? YH2;
        checkMissing(YH3);
        r311 = `-`(Y7, YH3);
        return r311;
      };
      r313 = dyn t5(p59);
      return r313;
    };
    r315 = dyn rbind(p58, p60);
    check L430() else D178();
  L432():
    aic5 = ld aic;
    check L434() else D180();
  L433():
    r317 = dyn base28(<sym aic>);
    goto L83(r317);
  D95():
    deopt 311 [i20, rank1];
  D178():
    deopt 573 [r315];
  D180():
    deopt 579 [aic5];
  D182():
    deopt 585 [];
  L293():
    p31 = prom<V +>{
      XX2 = ld XX;
      XX3 = force? XX2;
      checkMissing(XX3);
      return XX3;
    };
    r163 = dyn nrow4(p31);
    check L294() else D96();
  L430():
    drop1 = ldf drop in base;
    r316 = dyn drop1(r315);
    check L431() else D179();
  L434():
    aic6 = force? aic5;
    checkMissing(aic6);
    min2 = ldf min in base;
    r319 = dyn min2(aic6);
    check L435() else D181();
  L436():
    p62 = prom<V +>{
      sym29 = ldf `is.finite`;
      base29 = ldf `is.finite` in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L3() else L4();
    L0(r321):
      c41 = `as.logical`(r321);
      if c41 then L5() else L1();
    L3():
      maic = ld maic;
      maic1 = force? maic;
      checkMissing(maic1);
      is_finite = ldf `is.finite` in base;
      r322 = dyn is_finite(maic1);
      goto L0(r322);
    L4():
      r320 = dyn base29(<sym maic>);
      goto L0(r320);
    L1():
      ifelse = ldf ifelse;
      p61 = prom<V +>{
        xaic14 = ld xaic;
        xaic15 = force? xaic14;
        checkMissing(xaic15);
        maic2 = ld maic;
        maic3 = force? maic2;
        checkMissing(maic3);
        r327 = `==`(xaic15, maic3);
        return r327;
      };
      r329 = dyn ifelse(p61, 0.0, +Infinity);
      return r329;
    L5():
      xaic7 = ld xaic;
      xaic8 = force? xaic7;
      checkMissing(xaic8);
      sym30 = ldf min;
      base30 = ldf min in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L6() else L7();
    L2(xaic11, r324):
      r326 = `-`(xaic11, r324);
      return r326;
    L6():
      xaic12 = ld xaic;
      xaic13 = force? xaic12;
      checkMissing(xaic13);
      min3 = ldf min in base;
      r325 = dyn min3(xaic13);
      goto L2(xaic8, r325);
    L7():
      r323 = dyn base30(<sym xaic>);
      goto L2(xaic8, r323);
    };
    p63 = prom<V +>{
      order_min24 = ld `order.min`;
      order_min25 = force? order_min24;
      checkMissing(order_min25);
      order_max17 = ld `order.max`;
      order_max18 = force? order_max17;
      checkMissing(order_max18);
      r331 = `:`(order_min25, order_max18);
      return r331;
    };
    r333 = dyn setNames(p62, p63);
    check L437() else D183();
  D96():
    deopt 313 [i20, rank1, r163];
  D179():
    deopt 575 [r316];
  D181():
    deopt 582 [r319];
  D183():
    deopt 588 [r333];
  L294():
    r164 = `!=`(rank1, r163);
    c21 = `as.logical`(r164);
    if c21 then L295() else L52();
  L431():
    goto L82(r316);
  L435():
    goto L83(r319);
  L437():
    st xaic = r333;
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L438() else L439();
  L52():
    ncol4 = ldf ncol;
    check L300() else D99();
  L84(r335):
    l16 = ld ar;
    dim__ = ldf `dim<-`;
    check L444() else D188();
  L295():
    warning = ldf warning;
    check L296() else D97();
  L438():
    nser22 = ld nser;
    check L440() else D184();
  L439():
    r334 = dyn base31(<sym nser>, <sym nser>, <sym m>);
    goto L84(r334);
  D97():
    deopt 316 [i20];
  D99():
    deopt 326 [i20];
  D184():
    deopt 592 [nser22];
  D188():
    deopt 601 [r335, l16, r335];
  L296():
    p34 = prom<V +>{
      paste = ldf paste;
      p32 = prom<V +>{
        m6 = ld m;
        m7 = force? m6;
        checkMissing(m7);
        return m7;
      };
      p33 = prom<V +>{
        m8 = ld m;
        m9 = force? m8;
        checkMissing(m9);
        r166 = `-`(m9, 1);
        return r166;
      };
      r168 = dyn paste("model order: ", p32, "singularities in the computation of the projection matrix", "results are only valid up to model order", p33);
      return r168;
    };
    r170 = dyn warning[, domain](p34, NA_LGL);
    check L297() else D98();
  L300():
    p35 = prom<V +>{
      XX4 = ld XX;
      XX5 = force? XX4;
      checkMissing(XX5);
      return XX5;
    };
    r173 = dyn ncol4(p35);
    check L301() else D100();
  L440():
    nser23 = force? nser22;
    checkMissing(nser23);
    nser24 = ld nser;
    check L441() else D185();
  L444():
    r337 = dyn dim__(l16, NULL, r335);
    check L445() else D189();
  D98():
    deopt 320 [i20, r170];
  D100():
    deopt 328 [i20, r173];
  D185():
    deopt 594 [nser24];
  D189():
    deopt 603 [r335, r337];
  L297():
    goto L53();
  L301():
    r174 = `>`(r173, 0.0);
    c22 = `as.logical`(r174);
    if c22 then L302() else L55();
  L441():
    nser25 = force? nser24;
    checkMissing(nser25);
    m36 = ld m;
    check L442() else D186();
  L445():
    st ar = r337;
    aperm = ldf aperm;
    check L446() else D190();
  D186():
    deopt 596 [m36];
  D190():
    deopt 606 [];
  L55():
    XX8 = ld XX;
    check L306() else D103();
  L56(i28, r177):
    st P = r177;
    Y2 = ld Y;
    check L307() else D104();
  L302():
    solve = ldf solve;
    check L303() else D101();
  L442():
    m37 = force? m36;
    checkMissing(m37);
    c42 = ldf c in base;
    r336 = dyn c42(nser23, nser25, m37);
    check L443() else D187();
  L446():
    p64 = prom<V +>{
      ar = ld ar;
      ar1 = force? ar;
      checkMissing(ar1);
      return ar1;
    };
    p65 = prom<V +>{
      sym32 = ldf c;
      base32 = ldf c in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L1() else L2();
    L0(r340):
      return r340;
    L1():
      c43 = ldf c in base;
      r341 = dyn c43(3, 1, 2);
      goto L0(r341);
    L2():
      r339 = dyn base32(3, 1, 2);
      goto L0(r339);
    };
    r343 = dyn aperm(p64, p65);
    check L447() else D191();
  D101():
    deopt 332 [i20];
  D103():
    deopt 335 [i20, XX8];
  D104():
    deopt 340 [i28, Y2];
  D187():
    deopt 599 [r336];
  D191():
    deopt 609 [r343];
  L303():
    p36 = prom<V +>{
      XX6 = ld XX;
      XX7 = force? XX6;
      checkMissing(XX7);
      return XX7;
    };
    r176 = dyn solve(p36);
    check L304() else D102();
  L306():
    XX9 = force? XX8;
    checkMissing(XX9);
    goto L56(i20, XX9);
  L307():
    Y3 = force? Y2;
    checkMissing(Y3);
    X4 = ld X;
    check L308() else D105();
  L443():
    goto L84(r336);
  L447():
    st ar = r343;
    seA = ld seA;
    check L448() else D192();
  D102():
    deopt 334 [i20, r176];
  D105():
    deopt 342 [i28, X4];
  D192():
    deopt 611 [seA];
  L304():
    goto L56(i20, r176);
  L308():
    X5 = force? X4;
    checkMissing(X5);
    ___2 = ldf `%*%` in base;
    r178 = dyn ___2(Y3, X5);
    check L309() else D106();
  L448():
    seA1 = force? seA;
    checkMissing(seA1);
    c44 = `is.object`(seA1);
    if c44 then L449() else L450(seA1);
  D106():
    deopt 345 [i28, r178];
  L85(dx38):
    st ses = dx38;
    intercept7 = ld intercept;
    check L454() else D195();
  L309():
    P = ld P;
    check L310() else D107();
  L449():
    dr36 = tryDispatchBuiltin.1("[[", seA1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L451() else L450(dr36);
  L450(seA3):
    m38 = ld m;
    check L452() else D193();
  D107():
    deopt 346 [i28, P];
  D193():
    deopt 613 [seA3, m38];
  D195():
    deopt 621 [intercept7];
  L310():
    P1 = force? P;
    checkMissing(P1);
    ___3 = ldf `%*%` in base;
    r179 = dyn ___3(r178, P1);
    check L311() else D108();
  L451():
    dx37 = getTryDispatchBuiltinValue(dr36);
    goto L85(dx37);
  L452():
    m39 = force? m38;
    checkMissing(m39);
    order_min26 = ld `order.min`;
    check L453() else D194();
  L454():
    intercept8 = force? intercept7;
    checkMissing(intercept8);
    c45 = `as.logical`(intercept8);
    if c45 then L455() else L86();
  D108():
    deopt 349 [i28, r179];
  D194():
    deopt 614 [seA3, m39, order_min26];
  L86():
    sym33 = ldf `rep.int`;
    base33 = ldf `rep.int` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L467() else L468();
  L89():
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L471() else L472();
  L311():
    l4 = ld A;
    c23 = `is.object`(l4);
    if c23 then L312() else L313(i28, r179, l4);
  L453():
    order_min27 = force? order_min26;
    checkMissing(order_min27);
    r344 = `-`(m39, order_min27);
    r345 = `+`(r344, 1);
    __12 = ldf `[[` in base;
    r346 = dyn __12(seA3, r345);
    goto L85(r346);
  L455():
    ses = ld ses;
    check L456() else D196();
  D196():
    deopt 623 [ses];
  L57(i32, dx11):
    st A = dx11;
    A = ld A;
    check L317() else D111();
  L90(r351):
    st sem = r351;
    goto L89();
  L91(r354):
    l17 = ld ses;
    dim__1 = ldf `dim<-`;
    check L477() else D206();
  L312():
    dr10 = tryDispatchBuiltin.0("[[<-", l4, r179);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L314() else L313(i28, r179, dr10);
  L313(i30, r181, l6):
    m10 = ld m;
    check L315() else D109();
  L456():
    ses1 = force? ses;
    checkMissing(ses1);
    c46 = `is.object`(ses1);
    if c46 then L457() else L458(ses1);
  L467():
    nser26 = ld nser;
    check L469() else D200();
  L468():
    r350 = dyn base33(0.0, <sym nser>);
    goto L90(r350);
  L471():
    nser28 = ld nser;
    check L473() else D202();
  L472():
    r353 = dyn base34(<sym nser>, <sym nser>, <sym m>);
    goto L91(r353);
  D109():
    deopt 351 [i30, r181, l6, r179, m10];
  D111():
    deopt 360 [i32, A];
  D200():
    deopt 639 [nser26];
  D202():
    deopt 646 [nser28];
  D206():
    deopt 655 [r354, l17, r354];
  L87(dx40):
    st sem = dx40;
    ses4 = ld ses;
    check L461() else D198();
  L314():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L57(i28, dx10);
  L315():
    m11 = force? m10;
    checkMissing(m11);
    order_min6 = ld `order.min`;
    check L316() else D110();
  L317():
    A1 = force? A;
    checkMissing(A1);
    c24 = `is.object`(A1);
    if c24 then L318() else L319(i32, A1);
  L457():
    dr38 = tryDispatchBuiltin.1("[", ses1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L459() else L458(dr38);
  L458(ses3):
    iser4 = ld iser;
    check L460() else D197();
  L469():
    nser27 = force? nser26;
    checkMissing(nser27);
    rep_int9 = ldf `rep.int` in base;
    r352 = dyn rep_int9(0.0, nser27);
    check L470() else D201();
  L473():
    nser29 = force? nser28;
    checkMissing(nser29);
    nser30 = ld nser;
    check L474() else D203();
  L477():
    r356 = dyn dim__1(l17, NULL, r354);
    check L478() else D207();
  D110():
    deopt 352 [i30, r181, l6, r179, m11, order_min6];
  D197():
    deopt 625 [ses3, iser4];
  D198():
    deopt 629 [ses4];
  D201():
    deopt 642 [r352];
  D203():
    deopt 648 [nser30];
  D207():
    deopt 657 [r354, r356];
  L58(i36, dx13):
    t2 = ldf t;
    check L323() else D114();
  L316():
    order_min7 = force? order_min6;
    checkMissing(order_min7);
    r184 = `-`(m11, order_min7);
    r185 = `+`(r184, 1);
    ____ = ldf `[[<-` in base;
    r186 = dyn ____(l6, r179, r185);
    goto L57(i30, r186);
  L318():
    dr12 = tryDispatchBuiltin.1("[[", A1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L320() else L319(i32, dr12);
  L319(i34, A3):
    m12 = ld m;
    check L321() else D112();
  L459():
    dx39 = getTryDispatchBuiltinValue(dr38);
    goto L87(dx39);
  L460():
    iser5 = force? iser4;
    __13 = ldf `[` in base;
    r347 = dyn __13(ses3, iser5);
    goto L87(r347);
  L461():
    ses5 = force? ses4;
    checkMissing(ses5);
    c47 = `is.object`(ses5);
    if c47 then L462() else L463(ses5);
  L470():
    goto L90(r352);
  L474():
    nser31 = force? nser30;
    checkMissing(nser31);
    m40 = ld m;
    check L475() else D204();
  L478():
    st ses = r356;
    aperm1 = ldf aperm;
    check L479() else D208();
  D112():
    deopt 362 [i34, A3, m12];
  D114():
    deopt 370 [i36];
  D204():
    deopt 650 [m40];
  D208():
    deopt 660 [];
  L88(dx42):
    st ses = dx42;
    goto L89();
  L320():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L58(i32, dx12);
  L321():
    m13 = force? m12;
    checkMissing(m13);
    order_min8 = ld `order.min`;
    check L322() else D113();
  L323():
    p37 = prom<V +>{
      X6 = ld X;
      X7 = force? X6;
      checkMissing(X7);
      return X7;
    };
    r191 = dyn t2(p37);
    check L324() else D115();
  L462():
    dr40 = tryDispatchBuiltin.1("[", ses5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L464() else L463(dr40);
  L463(ses7):
    iser6 = ld iser;
    check L465() else D199();
  L475():
    m41 = force? m40;
    checkMissing(m41);
    c48 = ldf c in base;
    r355 = dyn c48(nser29, nser31, m41);
    check L476() else D205();
  L479():
    p66 = prom<V +>{
      ses8 = ld ses;
      ses9 = force? ses8;
      checkMissing(ses9);
      return ses9;
    };
    p67 = prom<V +>{
      sym35 = ldf c;
      base35 = ldf c in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r359):
      return r359;
    L1():
      c49 = ldf c in base;
      r360 = dyn c49(3, 1, 2);
      goto L0(r360);
    L2():
      r358 = dyn base35(3, 1, 2);
      goto L0(r358);
    };
    r362 = dyn aperm1(p66, p67);
    check L480() else D209();
  D113():
    deopt 363 [i34, A3, m13, order_min8];
  D115():
    deopt 372 [i36, r191];
  D199():
    deopt 631 [ses7, iser6];
  D205():
    deopt 653 [r355];
  D209():
    deopt 663 [r362];
  L322():
    order_min9 = force? order_min8;
    checkMissing(order_min9);
    r187 = `-`(m13, order_min9);
    r188 = `+`(r187, 1);
    __3 = ldf `[[` in base;
    r189 = dyn __3(A3, r188);
    goto L58(i34, r189);
  L324():
    ___4 = ldf `%*%` in base;
    r192 = dyn ___4(dx13, r191);
    check L325() else D116();
  L464():
    dx41 = getTryDispatchBuiltinValue(dr40);
    goto L88(dx41);
  L465():
    iser7 = force? iser6;
    checkMissing(iser7);
    r348 = `-`(<missing>, iser7);
    __14 = ldf `[` in base;
    r349 = dyn __14(ses7, r348);
    goto L88(r349);
  L476():
    goto L91(r355);
  L480():
    st ses = r362;
    varE8 = ld varE;
    check L481() else D210();
  D116():
    deopt 374 [i36, r192];
  D210():
    deopt 665 [varE8];
  L325():
    st YH = r192;
    Y4 = ld Y;
    check L326() else D117();
  L481():
    varE9 = force? varE8;
    checkMissing(varE9);
    c50 = `is.object`(varE9);
    if c50 then L482() else L483(varE9);
  D117():
    deopt 376 [i36, Y4];
  L92(dx45):
    st `var.pred` = dx45;
    nser32 = ld nser;
    check L487() else D213();
  L326():
    Y5 = force? Y4;
    checkMissing(Y5);
    YH = ld YH;
    check L327() else D118();
  L482():
    dr42 = tryDispatchBuiltin.1("[[", varE9);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L484() else L483(dr42);
  L483(varE11):
    m42 = ld m;
    check L485() else D211();
  D118():
    deopt 377 [i36, Y5, YH];
  D211():
    deopt 667 [varE11, m42];
  D213():
    deopt 675 [nser32];
  L327():
    YH1 = force? YH;
    checkMissing(YH1);
    r193 = `-`(Y5, YH1);
    st E = r193;
    sym20 = ldf tcrossprod;
    base20 = ldf tcrossprod in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L328() else L329();
  L484():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L92(dx44);
  L485():
    m43 = force? m42;
    checkMissing(m43);
    order_min28 = ld `order.min`;
    check L486() else D212();
  L487():
    nser33 = force? nser32;
    checkMissing(nser33);
    r366 = `>`(nser33, 1);
    c51 = `as.logical`(r366);
    if c51 then L488() else L93();
  D212():
    deopt 668 [varE11, m43, order_min28];
  L59(i39, r195):
    N = ld N;
    check L332() else D121();
  L93():
    sym39 = ldf drop;
    base39 = ldf drop in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L516() else L517();
  L97():
    ists2 = ld ists;
    check L520() else D236();
  L328():
    E = ld E;
    check L330() else D119();
  L329():
    r194 = dyn base20(<sym E>);
    goto L59(i36, r194);
  L486():
    order_min29 = force? order_min28;
    checkMissing(order_min29);
    r363 = `-`(m43, order_min29);
    r364 = `+`(r363, 1);
    __15 = ldf `[[` in base;
    r365 = dyn __15(varE11, r364);
    goto L92(r365);
  L488():
    colnames = ldf colnames;
    check L489() else D214();
  D119():
    deopt 383 [i36, E];
  D121():
    deopt 386 [i39, r195, N];
  D214():
    deopt 680 [];
  D236():
    deopt 738 [ists2];
  L98(r384):
    st `var.pred` = r384;
    goto L97();
  L330():
    E1 = force? E;
    checkMissing(E1);
    tcrossprod = ldf tcrossprod in base;
    r196 = dyn tcrossprod(E1);
    check L331() else D120();
  L332():
    N1 = force? N;
    checkMissing(N1);
    r197 = `/`(r195, N1);
    l7 = ld varE;
    c25 = `is.object`(l7);
    if c25 then L333() else L334(i39, r197, l7);
  L489():
    p68 = prom<V +>{
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      return x39;
    };
    r368 = dyn colnames(p68);
    check L490() else D215();
  L516():
    var_pred = ld `var.pred`;
    check L518() else D234();
  L517():
    r383 = dyn base39(<sym var.pred>);
    goto L98(r383);
  L520():
    ists3 = force? ists2;
    checkMissing(ists3);
    c52 = `as.logical`(ists3);
    if c52 then L521() else L99();
  D120():
    deopt 386 [i36, r196];
  D215():
    deopt 682 [r368];
  D234():
    deopt 733 [var_pred];
  L60(i43, dx15):
    st varE = dx15;
    _x_ = ldf `%x%`;
    check L338() else D124();
  L99():
    goto L100();
  L100():
    rescale2 = ld rescale;
    check L528() else D242();
  L331():
    goto L59(i36, r196);
  L333():
    dr14 = tryDispatchBuiltin.0("[[<-", l7, r197);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L335() else L334(i39, r197, dr14);
  L334(i41, r199, l9):
    m14 = ld m;
    check L336() else D122();
  L490():
    st snames = r368;
    sym36 = ldf list;
    base36 = ldf list in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L491() else L492();
  L518():
    var_pred1 = force? var_pred;
    checkMissing(var_pred1);
    drop2 = ldf drop in base;
    r385 = dyn drop2(var_pred1);
    check L519() else D235();
  L521():
    xtsp = ld xtsp;
    check L522() else D237();
  D122():
    deopt 390 [i41, r199, l9, r197, m14];
  D124():
    deopt 399 [i43];
  D235():
    deopt 736 [r385];
  D237():
    deopt 740 [xtsp];
  D242():
    deopt 758 [rescale2];
  L94(r370):
    l18 = ld ar;
    dimnames__ = ldf `dimnames<-`;
    check L499() else D220();
  L335():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L60(i39, dx14);
  L336():
    m15 = force? m14;
    checkMissing(m15);
    order_min10 = ld `order.min`;
    check L337() else D123();
  L338():
    p38 = prom<V +>{
      P2 = ld P;
      P3 = force? P2;
      checkMissing(P3);
      return P3;
    };
    p39 = prom<V +>{
      varE = ld varE;
      varE1 = force? varE;
      checkMissing(varE1);
      c26 = `is.object`(varE1);
      if c26 then L1() else L2(varE1);
    L0(dx17):
      visible.0();
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", varE1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(varE3):
      m16 = ld m;
      m17 = force? m16;
      checkMissing(m17);
      order_min12 = ld `order.min`;
      order_min13 = force? order_min12;
      checkMissing(order_min13);
      r206 = `-`(m17, order_min13);
      r207 = `+`(r206, 1);
      __4 = ldf `[[` in base;
      r208 = dyn __4(varE3, r207);
      goto L0(r208);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r210 = dyn _x_(p38, p39);
    check L339() else D125();
  L491():
    sym37 = ldf seq_len;
    base37 = ldf seq_len in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L493() else L494();
  L492():
    r369 = dyn base36(<lang seq_len(m)>, <sym snames>, <sym snames>);
    goto L94(r369);
  L519():
    goto L98(r385);
  L522():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l23 = ld E;
    attr__ = ldf `attr<-`;
    check L523() else D238();
  L528():
    rescale3 = force? rescale2;
    checkMissing(rescale3);
    c53 = `as.logical`(rescale3);
    if c53 then L529() else L101();
  D123():
    deopt 391 [i41, r199, l9, r197, m15, order_min10];
  D125():
    deopt 402 [i43, r210];
  D220():
    deopt 697 [r370, l18, r370];
  D238():
    deopt 743 [xtsp1, l23, xtsp1];
  L95(r372):
    snames = ld snames;
    check L496() else D217();
  L101():
    goto L123();
  L123():
    sym46 = ldf list;
    base46 = ldf list in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L598() else L599();
  L337():
    order_min11 = force? order_min10;
    checkMissing(order_min11);
    r202 = `-`(m15, order_min11);
    r203 = `+`(r202, 1);
    ____1 = ldf `[[<-` in base;
    r204 = dyn ____1(l9, r197, r203);
    goto L60(i41, r204);
  L339():
    st varA = r210;
    ncol5 = ldf ncol;
    check L340() else D126();
  L493():
    m44 = ld m;
    check L495() else D216();
  L494():
    r371 = dyn base37(<sym m>);
    goto L95(r371);
  L499():
    r375 = dyn dimnames__(l18, NULL, r370);
    check L500() else D221();
  L523():
    r386 = dyn attr__(l23, NULL, "tsp", xtsp1);
    check L524() else D239();
  L529():
    xm2 = ld xm;
    check L530() else D243();
  D126():
    deopt 405 [i43];
  D216():
    deopt 687 [m44];
  D217():
    deopt 690 [snames];
  D221():
    deopt 699 [r370, r375];
  D239():
    deopt 746 [xtsp1, r386];
  D243():
    deopt 760 [xm2];
  L124(r438):
    st res = r438;
    l33 = ld res;
    class__ = ldf `class<-`;
    check L623() else D295();
  L340():
    p40 = prom<V +>{
      varA = ld varA;
      varA1 = force? varA;
      checkMissing(varA1);
      return varA1;
    };
    r212 = dyn ncol5(p40);
    check L341() else D127();
  L495():
    m45 = force? m44;
    checkMissing(m45);
    r373 = seq_len(m45);
    goto L95(r373);
  L496():
    snames1 = force? snames;
    checkMissing(snames1);
    snames2 = ld snames;
    check L497() else D218();
  L500():
    st ar = r375;
    l19 = ld ses;
    dimnames__1 = ldf `dimnames<-`;
    check L501() else D222();
  L524():
    st E = r386;
    l24 = ld E;
    attr__1 = ldf `attr<-`;
    check L525() else D240();
  L530():
    xm3 = force? xm2;
    checkMissing(xm3);
    sc4 = ld sc;
    check L531() else D244();
  L598():
    m54 = ld m;
    check L600() else D276();
  L599():
    r437 = dyn base46[order, ar, `var.pred`, `x.mean`, `x.intercept`, aic, `n.used`, `n.obs`, `order.max`, partialacf, resid, method, series, frequency, call, `asy.se.coef`](<sym m>, <sym ar>, <sym var.pred>, <sym xm>, <sym xint>, <sym xaic>, <sym n.used>, <sym n.used>, <sym order.max>, NULL, <sym E>, "Unconstrained LS", <sym series>, <sym xfreq>, <lang match.call()>, <lang list(x.mean=sem, ar=drop(ses))>);
    goto L124(r437);
  D127():
    deopt 407 [i43, r212];
  D218():
    deopt 692 [snames2];
  D222():
    deopt 702 [r370, l19, r370];
  D240():
    deopt 751 ["ts", l24, "ts"];
  D244():
    deopt 761 [xm3, sc4];
  D276():
    deopt 886 [m54];
  D295():
    deopt 951 ["ar", l33, "ar"];
  L341():
    r213 = `>`(r212, 0.0);
    c27 = `as.logical`(r213);
    if c27 then L342() else L61();
  L497():
    snames3 = force? snames2;
    checkMissing(snames3);
    list = ldf list in base;
    r374 = dyn list(r372, snames1, snames3);
    check L498() else D219();
  L501():
    r376 = dyn dimnames__1(l19, NULL, r370);
    check L502() else D223();
  L525():
    r387 = dyn attr__1(l24, NULL, "class", "ts");
    check L526() else D241();
  L531():
    sc5 = force? sc4;
    checkMissing(sc5);
    r389 = `*`(xm3, sc5);
    st xm = r389;
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L532() else L533();
  L600():
    m55 = force? m54;
    checkMissing(m55);
    ar6 = ld ar;
    check L601() else D277();
  L623():
    r447 = dyn class__(l33, NULL, "ar");
    check L624() else D296();
  D219():
    deopt 695 [r374];
  D223():
    deopt 704 [r370, r376];
  D241():
    deopt 754 ["ts", r387];
  D277():
    deopt 889 [ar6];
  D296():
    deopt 953 ["ar", r447];
  L61():
    numeric = ldf numeric;
    check L348() else D130();
  L63(i49, r219):
    l10 = ld seA;
    c28 = `is.object`(l10);
    if c28 then L350() else L351(i49, r219, l10);
  L102(r391):
    r392 = `!`(r391);
    c55 = `as.logical`(r392);
    if c55 then L535() else L103();
  L342():
    sym21 = ldf sqrt;
    base21 = ldf sqrt in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L343() else L344();
  L498():
    goto L94(r374);
  L502():
    st ses = r376;
    sym38 = ldf list;
    base38 = ldf list in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L503() else L504();
  L526():
    st E = r387;
    goto L100();
  L532():
    xint = ld xint;
    check L534() else D245();
  L533():
    r390 = dyn base40(<sym xint>);
    goto L102(r390);
  L601():
    ar7 = force? ar6;
    checkMissing(ar7);
    var_pred7 = ld `var.pred`;
    check L602() else D278();
  L624():
    st res = r447;
    res = ld res;
    check L625() else D297();
  D130():
    deopt 417 [i43];
  D245():
    deopt 766 [xint];
  D278():
    deopt 892 [var_pred7];
  D297():
    deopt 955 [res];
  L62(i48, r215):
    goto L63(i48, r215);
  L64(i53, dx19):
    st seA = dx19;
    n_used8 = ld `n.used`;
    check L355() else D134();
  L96(r378):
    l20 = ld `var.pred`;
    dimnames__2 = ldf `dimnames<-`;
    check L508() else D227();
  L103():
    goto L104();
  L104():
    outer = ldf outer;
    check L539() else D248();
  L343():
    diag = ldf diag;
    check L345() else D128();
  L344():
    r214 = dyn base21(<lang diag(varA)>);
    goto L62(i43, r214);
  L348():
    r220 = dyn numeric();
    check L349() else D131();
  L350():
    dr18 = tryDispatchBuiltin.0("[[<-", l10, r219);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L352() else L351(i49, r219, dr18);
  L351(i51, r222, l12):
    m18 = ld m;
    check L353() else D132();
  L503():
    snames4 = ld snames;
    check L505() else D224();
  L504():
    r377 = dyn base38(<sym snames>, <sym snames>);
    goto L96(r377);
  L534():
    xint1 = force? xint;
    checkMissing(xint1);
    c54 = `==`(xint1, NULL);
    goto L102(c54);
  L535():
    xint2 = ld xint;
    check L536() else D246();
  L602():
    var_pred8 = force? var_pred7;
    checkMissing(var_pred8);
    xm4 = ld xm;
    check L603() else D279();
  L625():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D128():
    deopt 412 [i43];
  D131():
    deopt 418 [i43, r220];
  D132():
    deopt 420 [i51, r222, l12, r219, m18];
  D134():
    deopt 428 [i53, n_used8];
  D224():
    deopt 708 [snames4];
  D227():
    deopt 715 [r378, l20, r378];
  D246():
    deopt 770 [xint2];
  D248():
    deopt 778 [];
  D279():
    deopt 895 [xm4];
  L345():
    p41 = prom<V +>{
      varA2 = ld varA;
      varA3 = force? varA2;
      checkMissing(varA3);
      return varA3;
    };
    r217 = dyn diag(p41);
    check L346() else D129();
  L349():
    goto L63(i43, r220);
  L352():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L64(i49, dx18);
  L353():
    m19 = force? m18;
    checkMissing(m19);
    order_min14 = ld `order.min`;
    check L354() else D133();
  L355():
    n_used9 = force? n_used8;
    checkMissing(n_used9);
    sym22 = ldf log;
    base22 = ldf log in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L356() else L357();
  L505():
    snames5 = force? snames4;
    checkMissing(snames5);
    snames6 = ld snames;
    check L506() else D225();
  L508():
    r380 = dyn dimnames__2(l20, NULL, r378);
    check L509() else D228();
  L536():
    xint3 = force? xint2;
    checkMissing(xint3);
    sc6 = ld sc;
    check L537() else D247();
  L539():
    p69 = prom<V +>{
      sc8 = ld sc;
      sc9 = force? sc8;
      checkMissing(sc9);
      return sc9;
    };
    p70 = prom<V +>{
      sc10 = ld sc;
      sc11 = force? sc10;
      checkMissing(sc11);
      r396 = `/`(1.0, sc11);
      return r396;
    };
    r398 = dyn outer(p69, p70);
    check L540() else D249();
  L603():
    xm5 = force? xm4;
    checkMissing(xm5);
    xint4 = ld xint;
    check L604() else D280();
  D129():
    deopt 414 [i43, r217];
  D133():
    deopt 421 [i51, r222, l12, r219, m19, order_min14];
  D225():
    deopt 710 [snames6];
  D228():
    deopt 717 [r378, r380];
  D247():
    deopt 771 [xint3, sc6];
  D249():
    deopt 781 [r398];
  D280():
    deopt 898 [xint4];
  L65(i56, n_used12, r229):
    r236 = `*`(n_used12, r229);
    nser12 = ld nser;
    check L360() else D137();
  L346():
    r218 = sqrt(r217);
    goto L62(i43, r218);
  L354():
    order_min15 = force? order_min14;
    checkMissing(order_min15);
    r225 = `-`(m19, order_min15);
    r226 = `+`(r225, 1);
    ____2 = ldf `[[<-` in base;
    r227 = dyn ____2(l12, r219, r226);
    goto L64(i51, r227);
  L356():
    det = ldf det;
    check L358() else D135();
  L357():
    r228 = dyn base22(<lang det(`[[`(varE, `+`(`-`(m, order.min), 1)))>);
    goto L65(i53, n_used9, r228);
  L506():
    snames7 = force? snames6;
    checkMissing(snames7);
    list1 = ldf list in base;
    r379 = dyn list1(snames5, snames7);
    check L507() else D226();
  L509():
    st `var.pred` = r380;
    snames8 = ld snames;
    check L510() else D229();
  L537():
    sc7 = force? sc6;
    checkMissing(sc7);
    r393 = `*`(xint3, sc7);
    st xint = r393;
    goto L104();
  L540():
    st aa = r398;
    nser34 = ld nser;
    check L541() else D250();
  L604():
    xint5 = force? xint4;
    checkMissing(xint5);
    xaic16 = ld xaic;
    check L605() else D281();
  D135():
    deopt 431 [i53, n_used9];
  D137():
    deopt 436 [i56, r236, 2.0, nser12];
  D226():
    deopt 713 [r379];
  D229():
    deopt 719 [snames8];
  D250():
    deopt 783 [nser34];
  D281():
    deopt 901 [xaic16];
  L358():
    p42 = prom<V +>{
      varE4 = ld varE;
      varE5 = force? varE4;
      checkMissing(varE5);
      c29 = `is.object`(varE5);
      if c29 then L1() else L2(varE5);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[[", varE5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(varE7):
      m20 = ld m;
      m21 = force? m20;
      checkMissing(m21);
      order_min16 = ld `order.min`;
      order_min17 = force? order_min16;
      checkMissing(order_min17);
      r230 = `-`(m21, order_min17);
      r231 = `+`(r230, 1);
      __5 = ldf `[[` in base;
      r232 = dyn __5(varE7, r231);
      goto L0(r232);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r234 = dyn det(p42);
    check L359() else D136();
  L360():
    nser13 = force? nser12;
    checkMissing(nser13);
    r237 = `*`(2.0, nser13);
    nser14 = ld nser;
    check L361() else D138();
  L507():
    goto L96(r379);
  L510():
    snames9 = force? snames8;
    checkMissing(snames9);
    l21 = ld E;
    colnames__ = ldf `colnames<-`;
    check L511() else D230();
  L541():
    nser35 = force? nser34;
    checkMissing(nser35);
    r399 = `>`(nser35, 1);
    c56 = `as.logical`(r399);
    if c56 then L542() else L105(c56);
  L605():
    xaic17 = force? xaic16;
    checkMissing(xaic17);
    n_used13 = ld `n.used`;
    check L606() else D282();
  D136():
    deopt 433 [i53, n_used9, r234];
  D138():
    deopt 438 [i56, r236, r237, nser14];
  D230():
    deopt 722 [snames9, l21, snames9];
  D282():
    deopt 904 [n_used13];
  L105(c58):
    c62 = `as.logical`(c58);
    if c62 then L545() else L106();
  L359():
    r235 = log(r234, 2.718281828459045);
    goto L65(i53, n_used9, r235);
  L361():
    nser15 = force? nser14;
    checkMissing(nser15);
    m22 = ld m;
    check L362() else D139();
  L511():
    r381 = dyn colnames__(l21, NULL, snames9);
    check L512() else D231();
  L542():
    m46 = ld m;
    check L543() else D251();
  L606():
    n_used14 = force? n_used13;
    checkMissing(n_used14);
    n_used15 = ld `n.used`;
    check L607() else D283();
  D139():
    deopt 439 [i56, r236, r237, nser15, m22];
  D231():
    deopt 724 [snames9, r381];
  D251():
    deopt 787 [c56, m46];
  D283():
    deopt 907 [n_used15];
  L106():
    goto L112();
  L112():
    var_pred2 = ld `var.pred`;
    check L561() else D257();
  L362():
    m23 = force? m22;
    checkMissing(m23);
    r238 = `*`(nser15, m23);
    intercept3 = ld intercept;
    check L363() else D140();
  L512():
    st E = r381;
    l22 = ld sem;
    names__ = ldf `names<-`;
    check L513() else D232();
  L543():
    m47 = force? m46;
    checkMissing(m47);
    c59 = `as.logical`(m47);
    c60 = `&&`(c56, c59);
    goto L105(c60);
  L545():
    sym41 = ldf seq_len;
    base41 = ldf seq_len in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L546() else L547();
  L607():
    n_used16 = force? n_used15;
    checkMissing(n_used16);
    order_max19 = ld `order.max`;
    check L608() else D284();
  D140():
    deopt 441 [i56, r236, r237, r238, intercept3];
  D232():
    deopt 727 [snames9, l22, snames9];
  D257():
    deopt 817 [var_pred2];
  D284():
    deopt 910 [order_max19];
  L107(r401):
    s1 = toForSeq(r401);
    l25 = length(s1);
    i61 = 0;
    goto L108(i61);
  L363():
    intercept4 = force? intercept3;
    checkMissing(intercept4);
    r239 = `+`(r238, intercept4);
    r240 = `*`(r237, r239);
    r241 = `+`(r236, r240);
    l13 = ld xaic;
    c30 = `is.object`(l13);
    if c30 then L364() else L365(i56, r241, l13);
  L513():
    r382 = dyn names__(l22, NULL, snames9);
    check L514() else D233();
  L546():
    m48 = ld m;
    check L548() else D252();
  L547():
    r400 = dyn base41(<sym m>);
    goto L107(r400);
  L561():
    var_pred3 = force? var_pred2;
    checkMissing(var_pred3);
    sym42 = ldf drop;
    base42 = ldf drop in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L562() else L563();
  L608():
    order_max20 = force? order_max19;
    checkMissing(order_max20);
    E12 = ld E;
    check L609() else D285();
  D233():
    deopt 729 [snames9, r382];
  D252():
    deopt 791 [m48];
  D285():
    deopt 915 [E12];
  L66(i60, dx23):
    st xaic = dx23;
    goto L45(i60);
  L108(i62):
    i63 = `+`.1(i62, 1);
    c63 = `<`.1(l25, i63);
    if c63 then L549() else L111();
  L113(var_pred6, r411):
    r416 = `*`(var_pred6, r411);
    st `var.pred` = r416;
    E2 = ld E;
    check L567() else D261();
  L364():
    dr22 = tryDispatchBuiltin.0("[<-", l13, r241);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L366() else L365(i56, r241, dr22);
  L365(i58, r243, l15):
    m24 = ld m;
    check L367() else D141();
  L514():
    st sem = r382;
    goto L97();
  L548():
    m49 = force? m48;
    checkMissing(m49);
    r402 = seq_len(m49);
    goto L107(r402);
  L562():
    outer1 = ldf outer;
    check L564() else D258();
  L563():
    r410 = dyn base42(<lang outer(sc, sc)>);
    goto L113(var_pred3, r410);
  L609():
    E13 = force? E12;
    checkMissing(E13);
    series3 = ld series;
    check L610() else D286();
  D141():
    deopt 447 [i58, r243, l15, r241, m24];
  D258():
    deopt 821 [var_pred3];
  D261():
    deopt 829 [E2];
  D286():
    deopt 920 [series3];
  L111():
    x40 = `[[`(s1, i63, NULL, TRUE);
    st i = x40;
    ar2 = ld ar;
    check L550() else D253();
  L366():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L66(i56, dx22);
  L367():
    m25 = force? m24;
    checkMissing(m25);
    order_min18 = ld `order.min`;
    check L368() else D142();
  L549():
    goto L112();
  L564():
    p71 = prom<V +>{
      sc12 = ld sc;
      sc13 = force? sc12;
      checkMissing(sc13);
      return sc13;
    };
    p72 = prom<V +>{
      sc14 = ld sc;
      sc15 = force? sc14;
      checkMissing(sc15);
      return sc15;
    };
    r414 = dyn outer1(p71, p72);
    check L565() else D259();
  L567():
    E3 = force? E2;
    checkMissing(E3);
    sym43 = ldf `rep.int`;
    base43 = ldf `rep.int` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L568() else L569();
  L610():
    series4 = force? series3;
    checkMissing(series4);
    xfreq = ld xfreq;
    check L611() else D287();
  D142():
    deopt 448 [i58, r243, l15, r241, m25, order_min18];
  D253():
    deopt 794 [i63, ar2];
  D259():
    deopt 824 [var_pred3, r414];
  D287():
    deopt 923 [xfreq];
  L114(E6, r418):
    r425 = `*`(E6, r418);
    st E = r425;
    sem = ld sem;
    check L578() else D268();
  L368():
    order_min19 = force? order_min18;
    checkMissing(order_min19);
    r246 = `-`(m25, order_min19);
    r247 = `+`(r246, 1);
    ___5 = ldf `[<-` in base;
    r248 = dyn ___5(l15, r241, r247);
    goto L66(i58, r248);
  L550():
    ar3 = force? ar2;
    checkMissing(ar3);
    c64 = `is.object`(ar3);
    if c64 then L551() else L552(i63, ar3);
  L565():
    drop3 = ldf drop in base;
    r415 = dyn drop3(r414);
    check L566() else D260();
  L568():
    sc16 = ld sc;
    check L570() else D262();
  L569():
    r417 = dyn base43(<sym sc>, <lang rep.int(NROW(E), nser)>);
    goto L114(E3, r417);
  L611():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    match_call = ldf `match.call`;
    check L612() else D288();
  D260():
    deopt 826 [var_pred3, r415];
  D262():
    deopt 832 [E3, sc16];
  D268():
    deopt 848 [sem];
  D288():
    deopt 927 [];
  L109(i69, dx47):
    aa = ld aa;
    check L555() else D255();
  L551():
    dr44 = tryDispatchBuiltin.1("[", ar3);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L553() else L552(i63, dr44);
  L552(i67, ar5):
    i70 = ld i;
    check L554() else D254();
  L566():
    goto L113(var_pred3, r415);
  L570():
    sc17 = force? sc16;
    checkMissing(sc17);
    sym44 = ldf `rep.int`;
    base44 = ldf `rep.int` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L571() else L572();
  L578():
    sem1 = force? sem;
    checkMissing(sem1);
    sc18 = ld sc;
    check L579() else D269();
  L612():
    r439 = dyn match_call();
    check L613() else D289();
  D254():
    deopt 796 [i67, ar5, i70];
  D255():
    deopt 801 [i69, dx47, aa];
  D269():
    deopt 849 [sem1, sc18];
  D289():
    deopt 928 [r439];
  L115(E9, r420):
    rep_int11 = ldf `rep.int` in base;
    r424 = dyn rep_int11(sc17, r420);
    check L577() else D267();
  L553():
    dx46 = getTryDispatchBuiltinValue(dr44);
    goto L109(i63, dx46);
  L554():
    i71 = force? i70;
    __16 = ldf `[` in base;
    r403 = dyn __16(ar3, i71, <missing>, <missing>);
    goto L109(i67, r403);
  L555():
    aa1 = force? aa;
    checkMissing(aa1);
    r404 = `*`(dx47, aa1);
    l26 = ld ar;
    c65 = `is.object`(l26);
    if c65 then L556() else L557(i69, r404, l26);
  L571():
    NROW = ldf NROW;
    check L573() else D263();
  L572():
    r419 = dyn base44(<lang NROW(E)>, <sym nser>);
    goto L115(E3, r419);
  L579():
    sc19 = force? sc18;
    checkMissing(sc19);
    r426 = `*`(sem1, sc19);
    st sem = r426;
    m50 = ld m;
    check L580() else D270();
  L613():
    sym47 = ldf list;
    base47 = ldf list in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L614() else L615();
  D263():
    deopt 837 [E3];
  D267():
    deopt 845 [E9, r424];
  D270():
    deopt 853 [m50];
  L110(i75, dx49):
    st ar = dx49;
    goto L108(i75);
  L125(r441):
    list3 = ldf list in base;
    r446 = dyn list3(m55, ar7, var_pred8, xm5, xint5, xaic17, n_used14, n_used16, order_max20, NULL, E13, "Unconstrained LS", series4, xfreq1, r439, r441);
    check L622() else D294();
  L556():
    dr46 = tryDispatchBuiltin.0("[<-", l26, r404);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L558() else L557(i69, r404, dr46);
  L557(i73, r406, l28):
    i76 = ld i;
    check L559() else D256();
  L573():
    p73 = prom<V +>{
      E10 = ld E;
      E11 = force? E10;
      checkMissing(E11);
      return E11;
    };
    r422 = dyn NROW(p73);
    check L574() else D264();
  L577():
    goto L114(E9, r424);
  L580():
    m51 = force? m50;
    checkMissing(m51);
    c66 = `as.logical`(m51);
    if c66 then L581() else L116();
  L614():
    sem2 = ld sem;
    check L616() else D290();
  L615():
    r440 = dyn base47[`x.mean`, ar](<sym sem>, <lang drop(ses)>);
    goto L125(r440);
  D256():
    deopt 805 [i73, r406, l28, r404, i76];
  D264():
    deopt 839 [E3, r422];
  D290():
    deopt 932 [sem2];
  D294():
    deopt 946 [r446];
  L116():
    goto L122(NULL);
  L122(i96):
    goto L123();
  L558():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L110(i69, dx48);
  L559():
    i77 = force? i76;
    ___7 = ldf `[<-` in base;
    r409 = dyn ___7(l26, i77, <missing>, <missing>, r404);
    goto L110(i73, r409);
  L574():
    nser36 = ld nser;
    check L575() else D265();
  L581():
    sym45 = ldf seq_len;
    base45 = ldf seq_len in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L582() else L583();
  L616():
    sem3 = force? sem2;
    checkMissing(sem3);
    sym48 = ldf drop;
    base48 = ldf drop in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L617() else L618();
  L622():
    goto L124(r446);
  D265():
    deopt 840 [E3, nser36];
  L117(r428):
    s2 = toForSeq(r428);
    l29 = length(s2);
    i79 = 0;
    goto L118(i79);
  L126(r443):
    list2 = ldf list in base;
    r445 = dyn list2(sem3, r443);
    check L621() else D293();
  L575():
    nser37 = force? nser36;
    checkMissing(nser37);
    rep_int10 = ldf `rep.int` in base;
    r423 = dyn rep_int10(r422, nser37);
    check L576() else D266();
  L582():
    m52 = ld m;
    check L584() else D271();
  L583():
    r427 = dyn base45(<sym m>);
    goto L117(r427);
  L617():
    ses14 = ld ses;
    check L619() else D291();
  L618():
    r442 = dyn base48(<sym ses>);
    goto L126(r442);
  D266():
    deopt 843 [E3, r423];
  D271():
    deopt 856 [m52];
  D291():
    deopt 937 [ses14];
  D293():
    deopt 943 [r445];
  L118(i80):
    i81 = `+`.1(i80, 1);
    c67 = `<`.1(l29, i81);
    if c67 then L585() else L121();
  L576():
    goto L115(E3, r423);
  L584():
    m53 = force? m52;
    checkMissing(m53);
    r429 = seq_len(m53);
    goto L117(r429);
  L619():
    ses15 = force? ses14;
    checkMissing(ses15);
    drop4 = ldf drop in base;
    r444 = dyn drop4(ses15);
    check L620() else D292();
  L621():
    goto L125(r445);
  D292():
    deopt 940 [r444];
  L121():
    x41 = `[[`(s2, i81, NULL, TRUE);
    st i = x41;
    ses10 = ld ses;
    check L586() else D272();
  L585():
    goto L122(i81);
  L620():
    goto L126(r444);
  D272():
    deopt 859 [i81, ses10];
  L586():
    ses11 = force? ses10;
    checkMissing(ses11);
    c68 = `is.object`(ses11);
    if c68 then L587() else L588(i81, ses11);
  L119(i87, dx51):
    aa2 = ld aa;
    check L591() else D274();
  L587():
    dr48 = tryDispatchBuiltin.1("[", ses11);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L589() else L588(i81, dr48);
  L588(i85, ses13):
    i88 = ld i;
    check L590() else D273();
  D273():
    deopt 861 [i85, ses13, i88];
  D274():
    deopt 866 [i87, dx51, aa2];
  L589():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L119(i81, dx50);
  L590():
    i89 = force? i88;
    __17 = ldf `[` in base;
    r430 = dyn __17(ses11, i89, <missing>, <missing>);
    goto L119(i85, r430);
  L591():
    aa3 = force? aa2;
    checkMissing(aa3);
    r431 = `*`(dx51, aa3);
    l30 = ld ses;
    c69 = `is.object`(l30);
    if c69 then L592() else L593(i87, r431, l30);
  L120(i93, dx53):
    st ses = dx53;
    goto L118(i93);
  L592():
    dr50 = tryDispatchBuiltin.0("[<-", l30, r431);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L594() else L593(i87, r431, dr50);
  L593(i91, r433, l32):
    i94 = ld i;
    check L595() else D275();
  D275():
    deopt 870 [i91, r433, l32, r431, i94];
  L594():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L120(i87, dx52);
  L595():
    i95 = force? i94;
    ___8 = ldf `[<-` in base;
    r436 = dyn ___8(l30, i95, <missing>, <missing>, r431);
    goto L120(i91, r436);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg diag:cls, reg qr:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg p1:p(V +), reg r10:V, reg prod:cls, reg r11:V, reg ncol:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r13:V, reg r14:V, reg r15:V, reg r16:V, reg max:cls, reg r17:V |
    mkenv;
    st x = x;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf prod;
    base1 = ldf prod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(0.0, <lang `*`(prod(diag(`$`(qr(x), qr))), `^`(`(`(`-`(1.0)), `(`(`-`(ncol(x), 1.0))))>);
    goto L0(r);
  L1(r3):
    ncol = ldf ncol;
    check L9() else D3();
  L4():
    diag = ldf diag;
    check L6() else D0();
  L5():
    r2 = dyn base1(<lang diag(`$`(qr(x), qr))>);
    goto L1(r2);
  D0():
    deopt 6 [];
  D3():
    deopt 12 [r3, -1.0];
  L6():
    p1 = prom<V +>{
      qr = ldf qr;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r5 = dyn qr(p);
      c = `is.object`(r5);
      if c then L1() else L2(r5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r7):
      r8 = `$`(r7, <sym qr>);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn diag(p1);
    check L7() else D1();
  L9():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r13 = dyn ncol(p2);
    check L10() else D4();
  D1():
    deopt 8 [r10];
  D4():
    deopt 14 [r3, -1.0, r13];
  L7():
    prod = ldf prod in base;
    r11 = dyn prod(r10);
    check L8() else D2();
  L10():
    r14 = `-`(r13, 1.0);
    r15 = `^`(-1.0, r14);
    r16 = `*`(r3, r15);
    max = ldf max in base;
    r17 = dyn max(0.0, r16);
    check L11() else D5();
  D2():
    deopt 10 [r11];
  D5():
    deopt 20 [r17];
  L8():
    goto L1(r11);
  L11():
    goto L0(r17);
  }
}