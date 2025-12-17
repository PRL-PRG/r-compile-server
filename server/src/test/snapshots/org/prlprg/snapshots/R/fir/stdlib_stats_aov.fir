fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3818944143;
    st aov = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3818944143(formula, data, projections, qr, contrasts, `...`) {
  (reg formula:*, reg data:*, reg projections:*, reg qr:*, reg contrasts:*, reg ddd:dots) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var projections:*, reg projections_isMissing:L, reg projections_orDefault:*, var qr:*, reg qr_isMissing:L, reg qr_orDefault:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg terms:cls, reg formula1:*, reg formula2:V, reg p:p(V +), reg r4:V, reg r5:V, reg terms1:cls, reg formula3:*, reg formula4:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg Terms:*, reg Terms1:V, reg attr:cls, reg r11:V, reg c1:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg indError:*, reg indError1:V, reg length:cls, reg r17:V, reg r18:V, reg c2:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg indError2:*, reg indError3:V, reg length1:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg indError4:*, reg indError5:V, reg length2:cls, reg r27:V, reg p5:p(V +), reg r29:V, reg p6:p(V +), reg r31:V, reg match_call:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg quote:cls, reg r36:V, reg l:*, reg c3:L, reg r38:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r41:V, reg l3:*, reg c4:L, reg r43:L, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r46:V, reg projections1:*, reg projections2:V, reg c5:L, reg l6:*, reg c6:L, reg r48:L, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r50:L, reg dx7:V, reg r51:V, reg l9:*, reg c7:L, reg r54:dots, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg indError6:*, reg indError7:V, reg c8:V, reg c9:L, reg eval:cls, reg lmcall:*, reg lmcall1:V, reg p7:p(V +), reg parent_frame:cls, reg r61:V, reg p8:p(V +), reg r63:V, reg Call:*, reg Call1:V, reg l12:*, reg c10:L, reg Call3:V, reg l14:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r64:V, reg structure:cls, reg fit:*, reg fit1:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg r69:V, reg fit2:*, reg fit3:V, reg inherits:cls, reg r70:V, reg c11:L, reg r71:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg fit4:*, reg fit5:V, reg oldClass:cls, reg r74:V, reg c12:cls, reg r75:V, reg p10:p(V +), reg projections3:*, reg projections4:V, reg c13:L, reg proj:cls, reg fit6:*, reg fit7:V, reg p11:p(V +), reg r78:V, reg p12:p(V +), reg r80:V, reg pmatch:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg Call6:*, reg Call7:V, reg names:cls, reg r83:V, reg p13:p(V +), reg r85:V, reg c14:L, reg stop1:cls, reg r86:V, reg r88:cls, reg options:cls, reg r89:V, reg options1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg c15:cls, reg r92:V, reg p14:p(V +), reg r94:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg on_exit:cls, reg r97:V, reg Terms2:*, reg Terms3:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg r99:V, reg Terms4:*, reg Terms5:V, reg attr1:cls, reg r100:V, reg c16:L, reg r102:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg indError8:*, reg indError9:V, reg r103:V, reg __:cls, reg r104:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r105:V, reg r106:V, reg Terms6:*, reg Terms7:V, reg attr2:cls, reg r107:V, reg lmcall2:*, reg lmcall3:V, reg as_formula:cls, reg paste:cls, reg deparseb:cls, reg formula5:*, reg formula6:V, reg c17:L, reg formula8:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __1:cls, reg r108:V, reg p15:p(V +), reg r110:V, reg p16:p(V +), reg deparseb1:cls, reg errorterm:*, reg errorterm1:V, reg c18:L, reg errorterm3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __2:cls, reg r112:V, reg p17:p(V +), reg r114:V, reg p18:p(V +), reg intercept:*, reg intercept1:V, reg r116:V, reg c19:L, reg p19:p(V +), reg r118:V, reg p20:p(V +), reg environment:cls, reg formula9:*, reg formula10:V, reg p21:p(V +), reg r121:V, reg p22:p(V +), reg r123:V, reg l15:*, reg c20:L, reg r125:V, reg l17:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r128:V, reg l18:*, reg c21:L, reg r130:S, reg l20:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r133:V, reg l21:*, reg c22:L, reg r135:L, reg l23:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r138:V, reg l24:*, reg c23:L, reg r140:dots, reg l26:*, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r143:V, reg eval1:cls, reg ecall:*, reg ecall1:V, reg p23:p(V +), reg parent_frame1:cls, reg r145:V, reg p24:p(V +), reg r147:V, reg options2:cls, reg opcons:*, reg opcons1:V, reg p25:p(V +), reg r149:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r150:V, reg r151:V, reg terms2:cls, reg er_fit:*, reg er_fit1:V, reg p26:p(V +), reg r153:V, reg attr3:cls, reg r154:V, reg sub:cls, reg nmstrata:*, reg nmstrata1:V, reg p27:p(V +), reg r156:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r157:V, reg r158:V, reg nmstrata2:*, reg nmstrata3:V, reg c24:cls, reg r159:V, reg er_fit2:*, reg er_fit3:V, reg c25:L, reg er_fit5:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r160:V, reg er_fit6:*, reg er_fit7:V, reg c26:L, reg er_fit9:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r161:V, reg rank_e:*, reg rank_e1:V, reg NROW:cls, reg er_fit10:*, reg er_fit11:V, reg c27:L, reg er_fit13:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r162:V, reg p28:p(V +), reg r164:V, reg r165:V, reg c28:L, reg warning:cls, reg r166:V, reg er_fit14:*, reg er_fit15:V, reg c29:L, reg er_fit17:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r168:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r169:V, reg r170:V, reg qty:*, reg qty1:V, reg is_matrix:cls, reg r171:V, reg er_fit18:*, reg er_fit19:V, reg c30:L, reg er_fit21:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r172:V, reg c31:L, reg dx37:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg qr_e:*, reg qr_e1:V, reg c32:L, reg dx41:V, reg qr_e3:V, reg dr38:V, reg dc19:L, reg dx43:V, reg dx44:V, reg dx45:V, reg r173:V, reg c33:L, reg dx48:V, reg dx49:V, reg dr40:V, reg dc20:L, reg dx51:V, reg dx52:V, reg dx53:V, reg rank_e2:*, reg rank_e3:V, reg r174:V, reg __3:cls, reg r175:V, reg __4:cls, reg r176:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r177:V, reg r178:V, reg nmstrata4:*, reg nmstrata5:V, reg length3:cls, reg r179:V, reg r180:V, reg NROW1:cls, reg qty2:*, reg qty3:V, reg p29:p(V +), reg r182:V, reg nobs:*, reg nobs1:V, reg rank_e4:*, reg rank_e5:V, reg r183:V, reg c34:L, reg maxasgn:*, reg maxasgn1:V, reg r184:V, reg l27:*, reg c35:L, reg r186:V, reg l29:*, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg rank_e6:*, reg rank_e7:V, reg r189:V, reg nobs2:*, reg nobs3:V, reg r190:V, reg ___:cls, reg r191:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r192:V, reg r193:V, reg nmstrata6:*, reg nmstrata7:V, reg c36:cls, reg r194:V, reg maxasgn2:*, reg maxasgn3:V, reg r195:V, reg r196:V, reg maxasgn4:*, reg maxasgn5:V, reg r197:V, reg setNames:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r198:V, reg r199:V, reg len:*, reg len1:V, reg vector:cls, reg r200:V, reg p30:p(V +), reg nmstrata8:*, reg nmstrata9:V, reg p31:p(V +), reg r203:V, reg update:cls, reg formula11:*, reg formula12:V, reg p32:p(V +), reg paste1:cls, reg deparseb2:cls, reg errorterm4:*, reg errorterm5:V, reg p33:p(V +), reg r206:V, reg p34:p(V +), reg r208:V, reg p35:p(V +), reg r210:V, reg l30:*, reg c37:L, reg r212:V, reg l32:*, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg r215:V, reg terms3:cls, reg form:*, reg form1:V, reg p36:p(V +), reg r217:V, reg l33:*, reg c38:L, reg r219:S, reg l35:*, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg r222:V, reg eval2:cls, reg lmcall4:*, reg lmcall5:V, reg p37:p(V +), reg parent_frame2:cls, reg r224:V, reg p38:p(V +), reg r226:V, reg _getXlevels:cls, reg Terms8:*, reg Terms9:V, reg p39:p(V +), reg mf:*, reg mf1:V, reg p40:p(V +), reg r229:V, reg model_response:cls, reg mf2:*, reg mf3:V, reg p41:p(V +), reg r231:V, reg model_matrix:cls, reg Terms10:*, reg Terms11:V, reg p42:p(V +), reg mf4:*, reg mf5:V, reg p43:p(V +), reg contrasts1:*, reg contrasts2:V, reg p44:p(V +), reg r235:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r236:V, reg r237:V, reg qtx:*, reg qtx1:V, reg attr4:cls, reg r238:V, reg colnames:cls, reg qtx2:*, reg qtx3:V, reg p45:p(V +), reg r240:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r241:V, reg r242:V, reg qtx4:*, reg qtx5:V, reg attr5:cls, reg r243:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r244:V, reg r245:V, reg model_weights:cls, reg mf6:*, reg mf7:V, reg p46:p(V +), reg r247:V, reg length4:cls, reg r248:V, reg c39:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r249:V, reg r250:V, reg wts:*, reg wts1:V, reg r251:V, reg resp:*, reg resp1:V, reg wts2:*, reg wts3:V, reg r252:V, reg qtx6:*, reg qtx7:V, reg wts4:*, reg wts5:V, reg r253:V, reg as_matrix:cls, reg qr_qty:cls, reg qr_e4:*, reg qr_e5:V, reg p47:p(V +), reg resp2:*, reg resp3:V, reg p48:p(V +), reg r257:V, reg p49:p(V +), reg r259:V, reg ncol:cls, reg qty4:*, reg qty5:V, reg p50:p(V +), reg r261:V, reg r262:V, reg c40:L, reg ____1:cls, reg colnames1:cls, reg resp4:*, reg resp5:V, reg p51:p(V +), reg r264:V, reg p52:p(V +), reg paste2:cls, reg nc:*, reg nc1:V, reg r266:V, reg p53:p(V +), reg r268:V, reg p54:p(V +), reg r270:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r271:V, reg r272:V, reg seq:cls, reg nrow:cls, reg qty6:*, reg qty7:V, reg p55:p(V +), reg r274:V, reg p56:p(V +), reg r276:V, reg dny:*, reg dny1:V, reg list:cls, reg r277:V, reg l36:*, reg dimnames__:cls, reg r278:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r280:V, reg r281:V, reg seq1:cls, reg nrow1:cls, reg qty8:*, reg qty9:V, reg p57:p(V +), reg r283:V, reg p58:p(V +), reg r285:V, reg list1:cls, reg r286:V, reg l37:*, reg dimnames__1:cls, reg r287:V, reg qr_qty1:cls, reg qr_e6:*, reg qr_e7:V, reg p59:p(V +), reg qtx8:*, reg qtx9:V, reg p60:p(V +), reg r290:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r291:V, reg r292:V, reg seq2:cls, reg nrow2:cls, reg qtx10:*, reg qtx11:V, reg p61:p(V +), reg r294:V, reg p62:p(V +), reg r296:V, reg dnx:*, reg dnx1:V, reg list2:cls, reg r297:V, reg l38:*, reg dimnames__2:cls, reg r298:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r299:V, reg r300:V, reg nmstrata10:*, reg nmstrata11:V, reg r301:I, reg s:V, reg l39:I, reg i:I, reg i1:I, reg i2:I, reg c41:L, reg x:V, reg asgn_e:*, reg asgn_e1:V, reg i5:*, reg i6:V, reg r302:V, reg r303:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r304:V, reg i9:I, reg r305:V, reg select:*, reg select1:V, reg sum:cls, reg r306:V, reg ni:*, reg ni1:V, reg r307:V, reg c42:L, reg qtx12:*, reg qtx13:V, reg c43:L, reg i15:I, reg qtx15:V, reg dr48:V, reg dc24:L, reg dx60:V, reg i17:I, reg dx61:V, reg select2:*, reg select3:V, reg __5:cls, reg r309:V, reg colSums:cls, reg xi:*, reg xi1:V, reg r310:V, reg p63:p(V +), reg r312:V, reg r313:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r314:V, reg i20:I, reg r315:V, reg cols:*, reg cols1:V, reg any:cls, reg r316:V, reg c44:L, reg xi2:*, reg xi3:V, reg c45:L, reg i24:I, reg xi5:V, reg dr50:V, reg dc25:L, reg dx62:V, reg i26:I, reg dx63:V, reg cols2:*, reg cols3:V, reg __6:cls, reg r317:V, reg asgn_t:*, reg asgn_t1:V, reg c46:L, reg i28:I, reg asgn_t3:V, reg dr52:V, reg dc26:L, reg dx64:V, reg i30:I, reg dx65:V, reg cols4:*, reg cols5:V, reg __7:cls, reg r318:V, reg l40:*, reg attr__:cls, reg r319:V, reg lm_fit:cls, reg xi6:*, reg xi7:V, reg p64:p(V +), reg qty10:*, reg qty11:V, reg c47:L, reg dr54:V, reg dc27:L, reg dx66:V, reg dx67:V, reg select4:*, reg select5:V, reg __8:cls, reg r321:V, reg p65:p(V +), reg r323:V, reg Terms12:*, reg Terms13:V, reg l41:*, reg c48:L, reg i32:I, reg Terms15:V, reg l43:*, reg dr56:V, reg dc28:L, reg dx68:V, reg i34:I, reg Terms17:V, reg dx69:V, reg r324:V, reg i35:I, reg qty14:*, reg qty15:V, reg c49:L, reg i37:I, reg qty17:V, reg dr58:V, reg dc29:L, reg dx70:V, reg i39:I, reg dx71:V, reg select6:*, reg select7:V, reg __9:cls, reg r325:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r326:V, reg i42:I, reg r327:V, reg numeric:cls, reg r328:V, reg y:*, reg y1:V, reg y2:*, reg y3:V, reg r329:V, reg wts6:*, reg wts7:V, reg NROW2:cls, reg y4:*, reg y5:V, reg p66:p(V +), reg r331:V, reg list3:cls, reg r332:V, reg projections5:*, reg projections6:V, reg c50:L, reg proj1:cls, reg fiti:*, reg fiti1:V, reg p67:p(V +), reg r334:V, reg l44:*, reg c51:L, reg i46:I, reg r336:V, reg l46:*, reg dr60:V, reg dc30:L, reg dx72:V, reg i48:I, reg r338:V, reg dx73:V, reg r339:V, reg i49:I, reg sym32:cls, reg base32:cls, reg guard32:L, reg r341:V, reg i52:I, reg r342:V, reg maov:*, reg maov1:V, reg c52:L, reg i55:I, reg r343:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r344:V, reg i58:I, reg r345:V, reg er_fit22:*, reg er_fit23:V, reg oldClass1:cls, reg r346:V, reg c53:cls, reg r347:V, reg l47:*, reg class__:cls, reg r348:V, reg fiti2:*, reg fiti3:V, reg l48:*, reg c54:L, reg i60:I, reg fiti5:V, reg l50:*, reg dr62:V, reg dc31:L, reg dx74:V, reg i62:I, reg dx75:V, reg i63:*, reg i64:V, reg ____2:cls, reg r349:V, reg structure1:cls, reg sym34:cls, reg base34:cls, reg guard34:L, reg r350:V, reg r351:V, reg c55:cls, reg r352:V, reg p68:p(V +), reg result:*, reg result1:V, reg c56:L, reg result3:V, reg dr64:V, reg dc32:L, reg dx76:V, reg dx77:V, reg vapply:cls, reg result4:*, reg result5:V, reg p69:p(V +), reg is_null:*, reg is_null1:V, reg p70:p(V +), reg r356:V, reg r357:V, reg __10:cls, reg r358:V, reg p71:p(V +), reg qr1:*, reg qr2:V, reg c57:L, reg qr_e8:*, reg qr_e9:V, reg p72:p(V +), reg Call8:*, reg Call9:V, reg p73:p(V +), reg sym35:cls, reg base35:cls, reg guard35:L, reg r362:V, reg r363:V, reg wts8:*, reg wts9:V, reg length5:cls, reg r364:V, reg c58:L, reg wts10:*, reg wts11:V, reg p74:p(V +), reg allTerms:*, reg allTerms1:V, reg p75:p(V +), reg cons:*, reg cons1:V, reg p76:p(V +), reg xlev:*, reg xlev1:V, reg p77:p(V +), reg r369:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    projections_isMissing = missing.0(projections);
    if projections_isMissing then L1(FALSE) else L1(projections);
  L1(projections_orDefault):
    st projections = projections_orDefault;
    qr_isMissing = missing.0(qr);
    if qr_isMissing then L2(TRUE) else L2(qr);
  L2(qr_orDefault):
    st qr = qr_orDefault;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L3(NULL) else L3(contrasts);
  L3(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L67() else L68();
  L4(r1):
    c = `as.logical`(r1);
    if c then L69() else L5();
  L67():
    missing = ldf missing in base;
    r2 = dyn missing(<sym data>);
    goto L4(r2);
  L68():
    r = dyn base(<sym data>);
    goto L4(r);
  L5():
    terms1 = ldf terms;
    check L73() else D2();
  L6(r5):
    st Terms = r5;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L75() else L76();
  L69():
    terms = ldf terms;
    check L70() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 9 [];
  L7(r10):
    c1 = `is.object`(r10);
    if c1 then L80() else L81(r10);
  L70():
    p = prom<V +>{
      formula1 = ld formula;
      formula2 = force? formula1;
      checkMissing(formula2);
      return formula2;
    };
    r4 = dyn terms(p, "Error");
    check L71() else D1();
  L73():
    p1 = prom<V +>{
      formula3 = ld formula;
      formula4 = force? formula3;
      checkMissing(formula4);
      return formula4;
    };
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r8 = dyn terms1[, , data](p1, "Error", p2);
    check L74() else D3();
  L75():
    Terms = ld Terms;
    check L77() else D4();
  L76():
    r9 = dyn base1(<sym Terms>, "specials");
    goto L7(r9);
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r8];
  D4():
    deopt 18 [Terms];
  L71():
    goto L6(r4);
  L74():
    goto L6(r8);
  L77():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    attr = ldf attr in base;
    r11 = dyn attr(Terms1, "specials");
    check L78() else D5();
  L79(dx1):
    st indError = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L83() else L84();
  L80():
    dr = tryDispatchBuiltin.1("$", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L82() else L81(dr);
  L81(r13):
    r14 = `$`(r13, <sym Error>);
    goto L79(r14);
  D5():
    deopt 22 [r11];
  L8(r16):
    r18 = `>`(r16, 1);
    c2 = `as.logical`(r18);
    if c2 then L87() else L9();
  L78():
    goto L7(r11);
  L82():
    dx = getTryDispatchBuiltinValue(dr);
    goto L79(dx);
  L83():
    indError = ld indError;
    check L85() else D6();
  L84():
    r15 = dyn base2(<sym indError>);
    goto L8(r15);
  D6():
    deopt 27 [indError];
  L9():
    goto L10();
  L10():
    match_call = ldf `match.call`;
    check L91() else D10();
  L85():
    indError1 = force? indError;
    checkMissing(indError1);
    length = ldf length in base;
    r17 = dyn length(indError1);
    check L86() else D7();
  L87():
    stop = ldf stop;
    check L88() else D8();
  D7():
    deopt 30 [r17];
  D8():
    deopt 34 [];
  D10():
    deopt 42 [];
  L86():
    goto L8(r17);
  L88():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        ngettext = ldf ngettext;
        p3 = prom<V +>{
          sym3 = ldf length;
          base3 = ldf length in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r20):
          return r20;
        L1():
          indError2 = ld indError;
          indError3 = force? indError2;
          checkMissing(indError3);
          length1 = ldf length in base;
          r21 = dyn length1(indError3);
          goto L0(r21);
        L2():
          r19 = dyn base3(<sym indError>);
          goto L0(r19);
        };
        r23 = dyn ngettext(p3, "there are %d Error terms: only 1 is allowed", "there are %d Error terms: only 1 is allowed");
        return r23;
      };
      p5 = prom<V +>{
        sym4 = ldf length;
        base4 = ldf length in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        indError4 = ld indError;
        indError5 = force? indError4;
        checkMissing(indError5);
        length2 = ldf length in base;
        r27 = dyn length2(indError5);
        goto L0(r27);
      L2():
        r25 = dyn base4(<sym indError>);
        goto L0(r25);
      };
      r29 = dyn sprintf(p4, p5);
      return r29;
    };
    r31 = dyn stop[, domain](p6, NA_LGL);
    check L89() else D9();
  L91():
    r33 = dyn match_call();
    check L92() else D11();
  D9():
    deopt 38 [r31];
  D11():
    deopt 43 [r33];
  L89():
    goto L10();
  L92():
    st Call = r33;
    st lmcall = r33;
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L93() else L94();
  L11(r35):
    l = ld lmcall;
    c3 = `is.object`(l);
    if c3 then L95() else L96(r35, l);
  L93():
    quote = ldf quote in base;
    r36 = dyn quote(<lang `::`(stats, lm)>);
    goto L11(r36);
  L94():
    r34 = dyn base5(<lang `::`(stats, lm)>);
    goto L11(r34);
  L12(dx3):
    st lmcall = dx3;
    l3 = ld lmcall;
    c4 = `is.object`(l3);
    if c4 then L99() else L100(TRUE, l3);
  L95():
    dr2 = tryDispatchBuiltin.0("[[<-", l, r35);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L97() else L96(r35, dr2);
  L96(r38, l2):
    ____ = ldf `[[<-` in base;
    r41 = dyn ____(l2, r35, 1);
    goto L12(r41);
  L97():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L98(dx5):
    st lmcall = dx5;
    projections1 = ld projections;
    check L102() else D12();
  L99():
    dr4 = tryDispatchBuiltin.0("$<-", l3, TRUE);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L101() else L100(TRUE, dr4);
  L100(r43, l5):
    r46 = `$<-`(l5, <sym singular.ok>, TRUE);
    goto L98(r46);
  D12():
    deopt 59 [projections1];
  L101():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L98(dx4);
  L102():
    projections2 = force? projections1;
    checkMissing(projections2);
    c5 = `as.logical`(projections2);
    if c5 then L103() else L13();
  L13():
    goto L14();
  L14():
    l9 = ld lmcall;
    c7 = `is.object`(l9);
    if c7 then L110() else L111(NULL, l9);
  L103():
    l6 = ld lmcall;
    c6 = `is.object`(l6);
    if c6 then L105() else L106(TRUE, l6);
  L104(r50, dx7):
    st lmcall = dx7;
    st qr = r50;
    goto L14();
  L105():
    dr6 = tryDispatchBuiltin.0("$<-", l6, TRUE);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106(TRUE, dr6);
  L106(r48, l8):
    r51 = `$<-`(l8, <sym qr>, TRUE);
    goto L104(r48, r51);
  L109(dx9):
    st lmcall = dx9;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L113() else L114();
  L110():
    dr8 = tryDispatchBuiltin.0("$<-", l9, NULL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L112() else L111(NULL, dr8);
  L111(r54, l11):
    r57 = `$<-`(l11, <sym projections>, NULL);
    goto L109(r57);
  L15(r59):
    c9 = `as.logical`(r59);
    if c9 then L116() else L16();
  L107():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L104(TRUE, dx6);
  L112():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L109(dx8);
  L113():
    indError6 = ld indError;
    check L115() else D13();
  L114():
    r58 = dyn base6(<sym indError>);
    goto L15(r58);
  D13():
    deopt 75 [indError6];
  L16():
    pmatch = ldf pmatch;
    check L127() else D19();
  L115():
    indError7 = force? indError6;
    checkMissing(indError7);
    c8 = `==`(indError7, NULL);
    goto L15(c8);
  L116():
    eval = ldf eval;
    check L117() else D14();
  D14():
    deopt 79 [];
  D19():
    deopt 98 [];
  L117():
    p7 = prom<V +>{
      lmcall = ld lmcall;
      lmcall1 = force? lmcall;
      checkMissing(lmcall1);
      return lmcall1;
    };
    p8 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r61 = dyn parent_frame();
      return r61;
    };
    r63 = dyn eval(p7, p8);
    check L118() else D15();
  L127():
    p13 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      Call6 = ld Call;
      Call7 = force? Call6;
      checkMissing(Call7);
      names = ldf names in base;
      r83 = dyn names(Call7);
      goto L0(r83);
    L2():
      r81 = dyn base10(<sym Call>);
      goto L0(r81);
    };
    r85 = dyn pmatch("weights", p13, 0);
    check L128() else D20();
  D15():
    deopt 82 [r63];
  D20():
    deopt 102 [r85];
  L118():
    st fit = r63;
    Call = ld Call;
    check L119() else D16();
  L128():
    c14 = `as.logical`(r85);
    if c14 then L129() else L17();
  D16():
    deopt 84 [Call];
  L17():
    goto L18();
  L18():
    r88 = clos inner4125524309;
    st deparseb = r88;
    options = ldf options;
    check L133() else D23();
  L119():
    Call1 = force? Call;
    checkMissing(Call1);
    l12 = ld fit;
    c10 = `is.object`(l12);
    if c10 then L121() else L122(Call1, l12);
  L129():
    stop1 = ldf stop;
    check L130() else D21();
  D21():
    deopt 104 [];
  D23():
    deopt 113 [];
  L120(dx11):
    st fit = dx11;
    structure = ldf structure;
    check L124() else D17();
  L121():
    dr10 = tryDispatchBuiltin.0("$<-", l12, Call1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L123() else L122(Call1, dr10);
  L122(Call3, l14):
    r64 = `$<-`(l14, <sym call>, Call1);
    goto L120(r64);
  L130():
    r86 = dyn stop1("weights are not supported in a multistratum aov() fit");
    check L131() else D22();
  L133():
    r89 = dyn options("contrasts");
    check L134() else D24();
  D17():
    deopt 90 [];
  D22():
    deopt 106 [r86];
  D24():
    deopt 115 [r89];
  L123():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L120(dx10);
  L124():
    p9 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    p10 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L0(r67):
      return r67;
    L5():
      sym8 = ldf inherits;
      base8 = ldf inherits in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L7() else L8();
    L6():
      r66 = dyn base7(<lang if(inherits(fit, "mlm"), "maov")>, "aov", <lang oldClass(fit)>);
      goto L0(r66);
    L1(r69):
      c11 = `as.logical`(r69);
      if c11 then L9() else L2();
    L7():
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      inherits = ldf inherits in base;
      r70 = dyn inherits(fit3, "mlm", FALSE);
      goto L1(r70);
    L8():
      r68 = dyn base8(<sym fit>, "mlm");
      goto L1(r68);
    L2():
      goto L3(NULL);
    L3(r71):
      sym9 = ldf oldClass;
      base9 = ldf oldClass in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L11() else L12();
    L9():
      goto L3("maov");
    L4(r73):
      c12 = ldf c in base;
      r75 = dyn c12(r71, "aov", r73);
      goto L0(r75);
    L11():
      fit4 = ld fit;
      fit5 = force? fit4;
      checkMissing(fit5);
      oldClass = ldf oldClass in base;
      r74 = dyn oldClass(fit5);
      goto L4(r74);
    L12():
      r72 = dyn base9(<sym fit>);
      goto L4(r72);
    };
    p12 = prom<V +>{
      projections3 = ld projections;
      projections4 = force? projections3;
      checkMissing(projections4);
      c13 = `as.logical`(projections4);
      if c13 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      proj = ldf proj;
      p11 = prom<V +>{
        fit6 = ld fit;
        fit7 = force? fit6;
        checkMissing(fit7);
        return fit7;
      };
      r78 = dyn proj(p11);
      return r78;
    };
    r80 = dyn structure[, class, projections](p9, p10, p12);
    check L125() else D18();
  L131():
    goto L18();
  L134():
    st opcons = r89;
    options1 = ldf options;
    check L135() else D25();
  D18():
    deopt 96 [r80];
  D25():
    deopt 118 [];
  L125():
    popenv;
    return r80;
  L135():
    p14 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r91):
      return r91;
    L1():
      c15 = ldf c in base;
      r92 = dyn c15("contr.helmert", "contr.poly");
      goto L0(r92);
    L2():
      r90 = dyn base11("contr.helmert", "contr.poly");
      goto L0(r90);
    };
    r94 = dyn options1[contrasts](p14);
    check L136() else D26();
  D26():
    deopt 121 [r94];
  L136():
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L137() else L138();
  L19():
    Terms2 = ld Terms;
    check L139() else D27();
  L137():
    on_exit = ldf `on.exit` in base;
    r97 = dyn on_exit(<lang options(opcons)>);
    goto L19();
  L138():
    r95 = dyn base12(<lang options(opcons)>);
    goto L19();
  D27():
    deopt 125 [Terms2];
  L139():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    st allTerms = Terms3;
    sym13 = ldf attr;
    base13 = ldf attr in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L140() else L141();
  L20(r99):
    c16 = `is.object`(r99);
    if c16 then L144() else L145(r99);
  L140():
    Terms4 = ld Terms;
    check L142() else D28();
  L141():
    r98 = dyn base13(<sym Terms>, "variables");
    goto L20(r98);
  D28():
    deopt 130 [Terms4];
  L21(dx13):
    st errorterm = dx13;
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L148() else L149();
  L142():
    Terms5 = force? Terms4;
    checkMissing(Terms5);
    attr1 = ldf attr in base;
    r100 = dyn attr1(Terms5, "variables");
    check L143() else D29();
  L144():
    dr12 = tryDispatchBuiltin.1("[[", r99);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L146() else L145(dr12);
  L145(r102):
    indError8 = ld indError;
    check L147() else D30();
  D29():
    deopt 134 [r100];
  D30():
    deopt 136 [r102, 1, indError8];
  L22(r106):
    st intercept = r106;
    lmcall2 = ld lmcall;
    check L152() else D33();
  L143():
    goto L20(r100);
  L146():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L21(dx12);
  L147():
    indError9 = force? indError8;
    checkMissing(indError9);
    r103 = `+`(1, indError9);
    __ = ldf `[[` in base;
    r104 = dyn __(r102, r103);
    goto L21(r104);
  L148():
    Terms6 = ld Terms;
    check L150() else D31();
  L149():
    r105 = dyn base14(<sym Terms>, "intercept");
    goto L22(r105);
  D31():
    deopt 143 [Terms6];
  D33():
    deopt 149 [lmcall2];
  L150():
    Terms7 = force? Terms6;
    checkMissing(Terms7);
    attr2 = ldf attr in base;
    r107 = dyn attr2(Terms7, "intercept");
    check L151() else D32();
  L152():
    lmcall3 = force? lmcall2;
    checkMissing(lmcall3);
    st ecall = lmcall3;
    as_formula = ldf `as.formula`;
    check L153() else D34();
  D32():
    deopt 147 [r107];
  D34():
    deopt 153 [];
  L151():
    goto L22(r107);
  L153():
    p20 = prom<V +>{
      paste = ldf paste;
      p16 = prom<V +>{
        deparseb = ldf deparseb;
        p15 = prom<V +>{
          formula5 = ld formula;
          formula6 = force? formula5;
          checkMissing(formula6);
          c17 = `is.object`(formula6);
          if c17 then L1() else L2(formula6);
        L0(dx15):
          return dx15;
        L1():
          dr14 = tryDispatchBuiltin.1("[[", formula6);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L3() else L2(dr14);
        L2(formula8):
          __1 = ldf `[[` in base;
          r108 = dyn __1(formula8, 2);
          goto L0(r108);
        L3():
          dx14 = getTryDispatchBuiltinValue(dr14);
          goto L0(dx14);
        };
        r110 = dyn deparseb(p15);
        return r110;
      };
      p18 = prom<V +>{
        deparseb1 = ldf deparseb;
        p17 = prom<V +>{
          errorterm = ld errorterm;
          errorterm1 = force? errorterm;
          checkMissing(errorterm1);
          c18 = `is.object`(errorterm1);
          if c18 then L1() else L2(errorterm1);
        L0(dx17):
          return dx17;
        L1():
          dr16 = tryDispatchBuiltin.1("[[", errorterm1);
          dc8 = getTryDispatchBuiltinDispatched(dr16);
          if dc8 then L3() else L2(dr16);
        L2(errorterm3):
          __2 = ldf `[[` in base;
          r112 = dyn __2(errorterm3, 2);
          goto L0(r112);
        L3():
          dx16 = getTryDispatchBuiltinValue(dr16);
          goto L0(dx16);
        };
        r114 = dyn deparseb1(p17);
        return r114;
      };
      p19 = prom<V +>{
        intercept = ld intercept;
        intercept1 = force? intercept;
        checkMissing(intercept1);
        r116 = `!`(intercept1);
        c19 = `as.logical`(r116);
        if c19 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        return "- 1";
      };
      r118 = dyn paste(p16, "~", p18, p19);
      return r118;
    };
    p22 = prom<V +>{
      environment = ldf environment;
      p21 = prom<V +>{
        formula9 = ld formula;
        formula10 = force? formula9;
        checkMissing(formula10);
        return formula10;
      };
      r121 = dyn environment(p21);
      return r121;
    };
    r123 = dyn as_formula[, env](p20, p22);
    check L154() else D35();
  D35():
    deopt 157 [r123];
  L154():
    l15 = ld ecall;
    c20 = `is.object`(l15);
    if c20 then L156() else L157(r123, l15);
  L155(dx19):
    st ecall = dx19;
    l18 = ld ecall;
    c21 = `is.object`(l18);
    if c21 then L160() else L161("qr", l18);
  L156():
    dr18 = tryDispatchBuiltin.0("$<-", l15, r123);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L158() else L157(r123, dr18);
  L157(r125, l17):
    r128 = `$<-`(l17, <sym formula>, r123);
    goto L155(r128);
  L158():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L155(dx18);
  L159(dx21):
    st ecall = dx21;
    l21 = ld ecall;
    c22 = `is.object`(l21);
    if c22 then L164() else L165(TRUE, l21);
  L160():
    dr20 = tryDispatchBuiltin.0("$<-", l18, "qr");
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L162() else L161("qr", dr20);
  L161(r130, l20):
    r133 = `$<-`(l20, <sym method>, "qr");
    goto L159(r133);
  L162():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L159(dx20);
  L163(dx23):
    st ecall = dx23;
    l24 = ld ecall;
    c23 = `is.object`(l24);
    if c23 then L168() else L169(NULL, l24);
  L164():
    dr22 = tryDispatchBuiltin.0("$<-", l21, TRUE);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L166() else L165(TRUE, dr22);
  L165(r135, l23):
    r138 = `$<-`(l23, <sym qr>, TRUE);
    goto L163(r138);
  L166():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L163(dx22);
  L167(dx25):
    st ecall = dx25;
    eval1 = ldf eval;
    check L171() else D36();
  L168():
    dr24 = tryDispatchBuiltin.0("$<-", l24, NULL);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L170() else L169(NULL, dr24);
  L169(r140, l26):
    r143 = `$<-`(l26, <sym contrasts>, NULL);
    goto L167(r143);
  D36():
    deopt 177 [];
  L170():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L167(dx24);
  L171():
    p23 = prom<V +>{
      ecall = ld ecall;
      ecall1 = force? ecall;
      checkMissing(ecall1);
      return ecall1;
    };
    p24 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r145 = dyn parent_frame1();
      return r145;
    };
    r147 = dyn eval1(p23, p24);
    check L172() else D37();
  D37():
    deopt 180 [r147];
  L172():
    st `er.fit` = r147;
    options2 = ldf options;
    check L173() else D38();
  D38():
    deopt 183 [];
  L173():
    p25 = prom<V +>{
      opcons = ld opcons;
      opcons1 = force? opcons;
      checkMissing(opcons1);
      return opcons1;
    };
    r149 = dyn options2(p25);
    check L174() else D39();
  D39():
    deopt 185 [r149];
  L174():
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L175() else L176();
  L23(r151):
    st nmstrata = r151;
    sub = ldf sub;
    check L180() else D43();
  L175():
    terms2 = ldf terms;
    check L177() else D40();
  L176():
    r150 = dyn base15(<lang terms(er.fit)>, "term.labels");
    goto L23(r150);
  D40():
    deopt 189 [];
  D43():
    deopt 197 [];
  L177():
    p26 = prom<V +>{
      er_fit = ld `er.fit`;
      er_fit1 = force? er_fit;
      checkMissing(er_fit1);
      return er_fit1;
    };
    r153 = dyn terms2(p26);
    check L178() else D41();
  L180():
    p27 = prom<V +>{
      nmstrata = ld nmstrata;
      nmstrata1 = force? nmstrata;
      checkMissing(nmstrata1);
      return nmstrata1;
    };
    r156 = dyn sub("^`(.*)`$", "\\1", p27);
    check L181() else D44();
  D41():
    deopt 191 [r153];
  D44():
    deopt 201 [r156];
  L178():
    attr3 = ldf attr in base;
    r154 = dyn attr3(r153, "term.labels");
    check L179() else D42();
  L181():
    st nmstrata = r156;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L182() else L183();
  D42():
    deopt 194 [r154];
  L24(r158):
    st nmstrata = r158;
    er_fit2 = ld `er.fit`;
    check L186() else D47();
  L179():
    goto L23(r154);
  L182():
    nmstrata2 = ld nmstrata;
    check L184() else D45();
  L183():
    r157 = dyn base16("(Intercept)", <sym nmstrata>);
    goto L24(r157);
  D45():
    deopt 206 [nmstrata2];
  D47():
    deopt 211 [er_fit2];
  L184():
    nmstrata3 = force? nmstrata2;
    checkMissing(nmstrata3);
    c24 = ldf c in base;
    r159 = dyn c24("(Intercept)", nmstrata3);
    check L185() else D46();
  L186():
    er_fit3 = force? er_fit2;
    checkMissing(er_fit3);
    c25 = `is.object`(er_fit3);
    if c25 then L188() else L189(er_fit3);
  D46():
    deopt 209 [r159];
  L185():
    goto L24(r159);
  L187(dx27):
    st `qr.e` = dx27;
    er_fit6 = ld `er.fit`;
    check L191() else D48();
  L188():
    dr26 = tryDispatchBuiltin.1("$", er_fit3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L190() else L189(dr26);
  L189(er_fit5):
    r160 = `$`(er_fit5, <sym qr>);
    goto L187(r160);
  D48():
    deopt 215 [er_fit6];
  L190():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L187(dx26);
  L191():
    er_fit7 = force? er_fit6;
    checkMissing(er_fit7);
    c26 = `is.object`(er_fit7);
    if c26 then L193() else L194(er_fit7);
  L192(dx29):
    st `rank.e` = dx29;
    rank_e = ld `rank.e`;
    check L196() else D49();
  L193():
    dr28 = tryDispatchBuiltin.1("$", er_fit7);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L195() else L194(dr28);
  L194(er_fit9):
    r161 = `$`(er_fit9, <sym rank>);
    goto L192(r161);
  D49():
    deopt 219 [rank_e];
  L195():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L192(dx28);
  L196():
    rank_e1 = force? rank_e;
    checkMissing(rank_e1);
    NROW = ldf NROW;
    check L197() else D50();
  D50():
    deopt 221 [rank_e1];
  L197():
    p28 = prom<V +>{
      er_fit10 = ld `er.fit`;
      er_fit11 = force? er_fit10;
      checkMissing(er_fit11);
      c27 = `is.object`(er_fit11);
      if c27 then L1() else L2(er_fit11);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("$", er_fit11);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(er_fit13):
      r162 = `$`(er_fit13, <sym coefficients>);
      goto L0(r162);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r164 = dyn NROW(p28);
    check L198() else D51();
  D51():
    deopt 223 [rank_e1, r164];
  L198():
    r165 = `<`(rank_e1, r164);
    c28 = `as.logical`(r165);
    if c28 then L199() else L25();
  L25():
    goto L26();
  L26():
    er_fit14 = ld `er.fit`;
    check L203() else D54();
  L199():
    warning = ldf warning;
    check L200() else D52();
  D52():
    deopt 226 [];
  D54():
    deopt 231 [er_fit14];
  L200():
    r166 = dyn warning("Error() model is singular");
    check L201() else D53();
  L203():
    er_fit15 = force? er_fit14;
    checkMissing(er_fit15);
    c29 = `is.object`(er_fit15);
    if c29 then L205() else L206(er_fit15);
  D53():
    deopt 228 [r166];
  L201():
    goto L26();
  L204(dx33):
    st qty = dx33;
    sym17 = ldf `is.matrix`;
    base17 = ldf `is.matrix` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L208() else L209();
  L205():
    dr32 = tryDispatchBuiltin.1("$", er_fit15);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L207() else L206(dr32);
  L206(er_fit17):
    r168 = `$`(er_fit17, <sym residuals>);
    goto L204(r168);
  L27(r170):
    st maov = r170;
    er_fit18 = ld `er.fit`;
    check L212() else D57();
  L207():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L204(dx32);
  L208():
    qty = ld qty;
    check L210() else D55();
  L209():
    r169 = dyn base17(<sym qty>);
    goto L27(r169);
  D55():
    deopt 237 [qty];
  D57():
    deopt 242 [er_fit18];
  L210():
    qty1 = force? qty;
    checkMissing(qty1);
    is_matrix = ldf `is.matrix` in base;
    r171 = dyn is_matrix(qty1);
    check L211() else D56();
  L212():
    er_fit19 = force? er_fit18;
    checkMissing(er_fit19);
    c30 = `is.object`(er_fit19);
    if c30 then L214() else L215(er_fit19);
  D56():
    deopt 240 [r171];
  L211():
    goto L27(r171);
  L213(dx35):
    c31 = `is.object`(dx35);
    if c31 then L217() else L218(dx35);
  L214():
    dr34 = tryDispatchBuiltin.1("$", er_fit19);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L216() else L215(dr34);
  L215(er_fit21):
    r172 = `$`(er_fit21, <sym assign>);
    goto L213(r172);
  L28(dx39):
    st `asgn.e` = dx39;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L229() else L230();
  L216():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L213(dx34);
  L217():
    dr36 = tryDispatchBuiltin.1("[", dx35);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L219() else L218(dr36);
  L218(dx37):
    qr_e = ld `qr.e`;
    check L220() else D58();
  D58():
    deopt 245 [dx37, qr_e];
  L30(r178):
    r180 = `-`(r178, 1);
    st maxasgn = r180;
    NROW1 = ldf NROW;
    check L233() else D62();
  L219():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L28(dx38);
  L220():
    qr_e1 = force? qr_e;
    checkMissing(qr_e1);
    c32 = `is.object`(qr_e1);
    if c32 then L222() else L223(dx37, qr_e1);
  L229():
    nmstrata4 = ld nmstrata;
    check L231() else D60();
  L230():
    r177 = dyn base18(<sym nmstrata>);
    goto L30(r177);
  D60():
    deopt 257 [nmstrata4];
  D62():
    deopt 265 [];
  L221(dx44, dx45):
    c33 = `is.object`(dx45);
    if c33 then L225() else L226(dx44, dx45);
  L222():
    dr38 = tryDispatchBuiltin.1("$", qr_e1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L224() else L223(dx37, dr38);
  L223(dx41, qr_e3):
    r173 = `$`(qr_e3, <sym pivot>);
    goto L221(dx41, r173);
  L231():
    nmstrata5 = force? nmstrata4;
    checkMissing(nmstrata5);
    length3 = ldf length in base;
    r179 = dyn length3(nmstrata5);
    check L232() else D61();
  L233():
    p29 = prom<V +>{
      qty2 = ld qty;
      qty3 = force? qty2;
      checkMissing(qty3);
      return qty3;
    };
    r182 = dyn NROW1(p29);
    check L234() else D63();
  D61():
    deopt 260 [r179];
  D63():
    deopt 267 [r182];
  L29(dx52, dx53):
    __4 = ldf `[` in base;
    r176 = dyn __4(dx52, dx53);
    goto L28(r176);
  L224():
    dx43 = getTryDispatchBuiltinValue(dr38);
    goto L221(dx37, dx43);
  L225():
    dr40 = tryDispatchBuiltin.1("[", dx45);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L227() else L226(dx44, dr40);
  L226(dx48, dx49):
    rank_e2 = ld `rank.e`;
    check L228() else D59();
  L232():
    goto L30(r179);
  L234():
    st nobs = r182;
    nobs = ld nobs;
    check L235() else D64();
  D59():
    deopt 249 [dx48, dx49, 1, rank_e2];
  D64():
    deopt 269 [nobs];
  L227():
    dx51 = getTryDispatchBuiltinValue(dr40);
    goto L29(dx44, dx51);
  L228():
    rank_e3 = force? rank_e2;
    checkMissing(rank_e3);
    r174 = `:`(1, rank_e3);
    __3 = ldf `[` in base;
    r175 = dyn __3(dx49, r174);
    goto L29(dx48, r175);
  L235():
    nobs1 = force? nobs;
    checkMissing(nobs1);
    rank_e4 = ld `rank.e`;
    check L236() else D65();
  D65():
    deopt 270 [nobs1, rank_e4];
  L236():
    rank_e5 = force? rank_e4;
    checkMissing(rank_e5);
    r183 = `>`(nobs1, rank_e5);
    c34 = `as.logical`(r183);
    if c34 then L237() else L31();
  L31():
    maxasgn4 = ld maxasgn;
    check L250() else D72();
  L34(r196):
    st len = r196;
    setNames = ldf setNames;
    check L251() else D73();
  L237():
    maxasgn = ld maxasgn;
    check L238() else D66();
  D66():
    deopt 273 [maxasgn];
  D72():
    deopt 298 [maxasgn4];
  D73():
    deopt 304 [];
  L238():
    maxasgn1 = force? maxasgn;
    checkMissing(maxasgn1);
    r184 = `+`(maxasgn1, 1);
    l27 = ld `asgn.e`;
    c35 = `is.object`(l27);
    if c35 then L239() else L240(r184, l27);
  L250():
    maxasgn5 = force? maxasgn4;
    checkMissing(maxasgn5);
    r197 = `+`(maxasgn5, 1);
    goto L34(r197);
  L251():
    p30 = prom<V +>{
      sym20 = ldf vector;
      base20 = ldf vector in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r199):
      return r199;
    L1():
      len = ld len;
      len1 = force? len;
      checkMissing(len1);
      vector = ldf vector in base;
      r200 = dyn vector("list", len1);
      goto L0(r200);
    L2():
      r198 = dyn base20("list", <sym len>);
      goto L0(r198);
    };
    p31 = prom<V +>{
      nmstrata8 = ld nmstrata;
      nmstrata9 = force? nmstrata8;
      checkMissing(nmstrata9);
      return nmstrata9;
    };
    r203 = dyn setNames(p30, p31);
    check L252() else D74();
  D74():
    deopt 307 [r203];
  L32(dx55):
    st `asgn.e` = dx55;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L244() else L245();
  L239():
    dr42 = tryDispatchBuiltin.0("[<-", l27, r184);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L241() else L240(r184, dr42);
  L240(r186, l29):
    rank_e6 = ld `rank.e`;
    check L242() else D67();
  L252():
    st result = r203;
    update = ldf update;
    check L253() else D75();
  D67():
    deopt 278 [r186, l29, r184, rank_e6];
  D75():
    deopt 310 [];
  L33(r193):
    st nmstrata = r193;
    maxasgn2 = ld maxasgn;
    check L248() else D71();
  L241():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L32(dx54);
  L242():
    rank_e7 = force? rank_e6;
    checkMissing(rank_e7);
    r189 = `+`(rank_e7, 1);
    nobs2 = ld nobs;
    check L243() else D68();
  L244():
    nmstrata6 = ld nmstrata;
    check L246() else D69();
  L245():
    r192 = dyn base19(<sym nmstrata>, "Within");
    goto L33(r192);
  L253():
    p32 = prom<V +>{
      formula11 = ld formula;
      formula12 = force? formula11;
      checkMissing(formula12);
      return formula12;
    };
    p35 = prom<V +>{
      paste1 = ldf paste;
      p34 = prom<V +>{
        deparseb2 = ldf deparseb;
        p33 = prom<V +>{
          errorterm4 = ld errorterm;
          errorterm5 = force? errorterm4;
          checkMissing(errorterm5);
          return errorterm5;
        };
        r206 = dyn deparseb2(p33);
        return r206;
      };
      r208 = dyn paste1(". ~ .-", p34);
      return r208;
    };
    r210 = dyn update(p32, p35);
    check L254() else D76();
  D68():
    deopt 281 [r186, l29, r184, r189, nobs2];
  D69():
    deopt 288 [nmstrata6];
  D71():
    deopt 294 [maxasgn2];
  D76():
    deopt 313 [r210];
  L243():
    nobs3 = force? nobs2;
    checkMissing(nobs3);
    r190 = `:`(r189, nobs3);
    ___ = ldf `[<-` in base;
    r191 = dyn ___(l29, r184, r190);
    goto L32(r191);
  L246():
    nmstrata7 = force? nmstrata6;
    checkMissing(nmstrata7);
    c36 = ldf c in base;
    r194 = dyn c36(nmstrata7, "Within");
    check L247() else D70();
  L248():
    maxasgn3 = force? maxasgn2;
    checkMissing(maxasgn3);
    r195 = `+`(maxasgn3, 2);
    goto L34(r195);
  L254():
    st form = r210;
    l30 = ld lmcall;
    c37 = `is.object`(l30);
    if c37 then L256() else L257(r210, l30);
  D70():
    deopt 292 [r194];
  L247():
    goto L33(r194);
  L255(dx57):
    st lmcall = dx57;
    terms3 = ldf terms;
    check L259() else D77();
  L256():
    dr44 = tryDispatchBuiltin.0("$<-", l30, r210);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L258() else L257(r210, dr44);
  L257(r212, l32):
    r215 = `$<-`(l32, <sym formula>, r210);
    goto L255(r215);
  D77():
    deopt 319 [];
  L258():
    dx56 = getTryDispatchBuiltinValue(dr44);
    goto L255(dx56);
  L259():
    p36 = prom<V +>{
      form = ld form;
      form1 = force? form;
      checkMissing(form1);
      return form1;
    };
    r217 = dyn terms3(p36);
    check L260() else D78();
  D78():
    deopt 321 [r217];
  L260():
    st Terms = r217;
    l33 = ld lmcall;
    c38 = `is.object`(l33);
    if c38 then L262() else L263("model.frame", l33);
  L261(dx59):
    st lmcall = dx59;
    eval2 = ldf eval;
    check L265() else D79();
  L262():
    dr46 = tryDispatchBuiltin.0("$<-", l33, "model.frame");
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L264() else L263("model.frame", dr46);
  L263(r219, l35):
    r222 = `$<-`(l35, <sym method>, "model.frame");
    goto L261(r222);
  D79():
    deopt 329 [];
  L264():
    dx58 = getTryDispatchBuiltinValue(dr46);
    goto L261(dx58);
  L265():
    p37 = prom<V +>{
      lmcall4 = ld lmcall;
      lmcall5 = force? lmcall4;
      checkMissing(lmcall5);
      return lmcall5;
    };
    p38 = prom<V +>{
      parent_frame2 = ldf `parent.frame`;
      r224 = dyn parent_frame2();
      return r224;
    };
    r226 = dyn eval2(p37, p38);
    check L266() else D80();
  D80():
    deopt 332 [r226];
  L266():
    st mf = r226;
    _getXlevels = ldf `.getXlevels`;
    check L267() else D81();
  D81():
    deopt 335 [];
  L267():
    p39 = prom<V +>{
      Terms8 = ld Terms;
      Terms9 = force? Terms8;
      checkMissing(Terms9);
      return Terms9;
    };
    p40 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r229 = dyn _getXlevels(p39, p40);
    check L268() else D82();
  D82():
    deopt 338 [r229];
  L268():
    st xlev = r229;
    model_response = ldf `model.response`;
    check L269() else D83();
  D83():
    deopt 341 [];
  L269():
    p41 = prom<V +>{
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      return mf3;
    };
    r231 = dyn model_response(p41);
    check L270() else D84();
  D84():
    deopt 343 [r231];
  L270():
    st resp = r231;
    model_matrix = ldf `model.matrix`;
    check L271() else D85();
  D85():
    deopt 346 [];
  L271():
    p42 = prom<V +>{
      Terms10 = ld Terms;
      Terms11 = force? Terms10;
      checkMissing(Terms11);
      return Terms11;
    };
    p43 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      return mf5;
    };
    p44 = prom<V +>{
      contrasts1 = ld contrasts;
      contrasts2 = force? contrasts1;
      checkMissing(contrasts2);
      return contrasts2;
    };
    r235 = dyn model_matrix(p42, p43, p44);
    check L272() else D86();
  D86():
    deopt 350 [r235];
  L272():
    st qtx = r235;
    sym21 = ldf attr;
    base21 = ldf attr in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L273() else L274();
  L35(r237):
    st cons = r237;
    colnames = ldf colnames;
    check L277() else D89();
  L273():
    qtx = ld qtx;
    check L275() else D87();
  L274():
    r236 = dyn base21(<sym qtx>, "contrasts");
    goto L35(r236);
  D87():
    deopt 354 [qtx];
  D89():
    deopt 361 [];
  L275():
    qtx1 = force? qtx;
    checkMissing(qtx1);
    attr4 = ldf attr in base;
    r238 = dyn attr4(qtx1, "contrasts");
    check L276() else D88();
  L277():
    p45 = prom<V +>{
      qtx2 = ld qtx;
      qtx3 = force? qtx2;
      checkMissing(qtx3);
      return qtx3;
    };
    r240 = dyn colnames(p45);
    check L278() else D90();
  D88():
    deopt 358 [r238];
  D90():
    deopt 363 [r240];
  L276():
    goto L35(r238);
  L278():
    st dnx = r240;
    sym22 = ldf attr;
    base22 = ldf attr in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L279() else L280();
  L36(r242):
    st `asgn.t` = r242;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L283() else L284();
  L279():
    qtx4 = ld qtx;
    check L281() else D91();
  L280():
    r241 = dyn base22(<sym qtx>, "assign");
    goto L36(r241);
  D91():
    deopt 367 [qtx4];
  L37(r245):
    c39 = `as.logical`(r245);
    if c39 then L288() else L38();
  L281():
    qtx5 = force? qtx4;
    checkMissing(qtx5);
    attr5 = ldf attr in base;
    r243 = dyn attr5(qtx5, "assign");
    check L282() else D92();
  L283():
    model_weights = ldf `model.weights`;
    check L285() else D93();
  L284():
    r244 = dyn base23(<lang `<-`(wts, model.weights(mf))>);
    goto L37(r244);
  D92():
    deopt 371 [r243];
  D93():
    deopt 376 [];
  L38():
    goto L40();
  L40():
    as_matrix = ldf `as.matrix`;
    check L297() else D101();
  L282():
    goto L36(r243);
  L285():
    p46 = prom<V +>{
      mf6 = ld mf;
      mf7 = force? mf6;
      checkMissing(mf7);
      return mf7;
    };
    r247 = dyn model_weights(p46);
    check L286() else D94();
  L288():
    sym24 = ldf sqrt;
    base24 = ldf sqrt in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L289() else L290();
  D94():
    deopt 378 [r247];
  D101():
    deopt 400 [];
  L39(r250):
    st wts = r250;
    resp = ld resp;
    check L292() else D97();
  L286():
    st wts = r247;
    length4 = ldf length in base;
    r248 = dyn length4(r247);
    check L287() else D95();
  L289():
    wts = ld wts;
    check L291() else D96();
  L290():
    r249 = dyn base24(<sym wts>);
    goto L39(r249);
  L297():
    p49 = prom<V +>{
      qr_qty = ldf `qr.qty`;
      p47 = prom<V +>{
        qr_e4 = ld `qr.e`;
        qr_e5 = force? qr_e4;
        checkMissing(qr_e5);
        return qr_e5;
      };
      p48 = prom<V +>{
        resp2 = ld resp;
        resp3 = force? resp2;
        checkMissing(resp3);
        return resp3;
      };
      r257 = dyn qr_qty(p47, p48);
      return r257;
    };
    r259 = dyn as_matrix(p49);
    check L298() else D102();
  D95():
    deopt 381 [r248];
  D96():
    deopt 383 [wts];
  D97():
    deopt 387 [resp];
  D102():
    deopt 402 [r259];
  L287():
    goto L37(r248);
  L291():
    wts1 = force? wts;
    checkMissing(wts1);
    r251 = sqrt(wts1);
    goto L39(r251);
  L292():
    resp1 = force? resp;
    checkMissing(resp1);
    wts2 = ld wts;
    check L293() else D98();
  L298():
    st qty = r259;
    ncol = ldf ncol;
    check L299() else D103();
  D98():
    deopt 388 [resp1, wts2];
  D103():
    deopt 405 [];
  L293():
    wts3 = force? wts2;
    checkMissing(wts3);
    r252 = `*`(resp1, wts3);
    st resp = r252;
    qtx6 = ld qtx;
    check L294() else D99();
  L299():
    p50 = prom<V +>{
      qty4 = ld qty;
      qty5 = force? qty4;
      checkMissing(qty5);
      return qty5;
    };
    r261 = dyn ncol(p50);
    check L300() else D104();
  D99():
    deopt 392 [qtx6];
  D104():
    deopt 407 [r261];
  L294():
    qtx7 = force? qtx6;
    checkMissing(qtx7);
    wts4 = ld wts;
    check L295() else D100();
  L300():
    st nc = r261;
    r262 = `>`(r261, 1);
    c40 = `as.logical`(r262);
    if c40 then L301() else L41();
  D100():
    deopt 393 [qtx7, wts4];
  L41():
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L313() else L314();
  L43():
    qr_qty1 = ldf `qr.qty`;
    check L320() else D118();
  L295():
    wts5 = force? wts4;
    checkMissing(wts5);
    r253 = `*`(qtx7, wts5);
    st qtx = r253;
    goto L40();
  L301():
    ____1 = ldf `%||%`;
    check L302() else D105();
  D105():
    deopt 412 [];
  D118():
    deopt 447 [];
  L44(r281):
    l37 = ld qty;
    dimnames__1 = ldf `dimnames<-`;
    check L318() else D116();
  L302():
    p52 = prom<V +>{
      colnames1 = ldf colnames;
      p51 = prom<V +>{
        resp4 = ld resp;
        resp5 = force? resp4;
        checkMissing(resp5);
        return resp5;
      };
      r264 = dyn colnames1(p51);
      return r264;
    };
    p54 = prom<V +>{
      paste2 = ldf paste0;
      p53 = prom<V +>{
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        r266 = `:`(1, nc1);
        return r266;
      };
      r268 = dyn paste2("Y", p53);
      return r268;
    };
    r270 = dyn ____1(p52, p54);
    check L303() else D106();
  L313():
    seq1 = ldf seq;
    check L315() else D113();
  L314():
    r280 = dyn base26(<lang seq(nrow(qty))>, NULL);
    goto L44(r280);
  L320():
    p59 = prom<V +>{
      qr_e6 = ld `qr.e`;
      qr_e7 = force? qr_e6;
      checkMissing(qr_e7);
      return qr_e7;
    };
    p60 = prom<V +>{
      qtx8 = ld qtx;
      qtx9 = force? qtx8;
      checkMissing(qtx9);
      return qtx9;
    };
    r290 = dyn qr_qty1(p59, p60);
    check L321() else D119();
  D106():
    deopt 415 [r270];
  D113():
    deopt 435 [];
  D116():
    deopt 442 [r281, l37, r281];
  D119():
    deopt 450 [r290];
  L303():
    st dny = r270;
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L304() else L305();
  L315():
    p58 = prom<V +>{
      nrow1 = ldf nrow;
      p57 = prom<V +>{
        qty8 = ld qty;
        qty9 = force? qty8;
        checkMissing(qty9);
        return qty9;
      };
      r283 = dyn nrow1(p57);
      return r283;
    };
    r285 = dyn seq1(p58);
    check L316() else D114();
  L318():
    r287 = dyn dimnames__1(l37, NULL, r281);
    check L319() else D117();
  L321():
    st qtx = r290;
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L322() else L323();
  D114():
    deopt 437 [r285];
  D117():
    deopt 444 [r281, r287];
  L42(r272):
    l36 = ld qty;
    dimnames__ = ldf `dimnames<-`;
    check L310() else D111();
  L45(r292):
    l38 = ld qtx;
    dimnames__2 = ldf `dimnames<-`;
    check L328() else D124();
  L304():
    seq = ldf seq;
    check L306() else D107();
  L305():
    r271 = dyn base25(<lang seq(nrow(qty))>, <sym dny>);
    goto L42(r271);
  L316():
    list1 = ldf list in base;
    r286 = dyn list1(r285, NULL);
    check L317() else D115();
  L319():
    st qty = r287;
    goto L43();
  L322():
    seq2 = ldf seq;
    check L324() else D120();
  L323():
    r291 = dyn base27(<lang seq(nrow(qtx))>, <sym dnx>);
    goto L45(r291);
  D107():
    deopt 420 [];
  D111():
    deopt 428 [r272, l36, r272];
  D115():
    deopt 440 [r286];
  D120():
    deopt 455 [];
  D124():
    deopt 463 [r292, l38, r292];
  L306():
    p56 = prom<V +>{
      nrow = ldf nrow;
      p55 = prom<V +>{
        qty6 = ld qty;
        qty7 = force? qty6;
        checkMissing(qty7);
        return qty7;
      };
      r274 = dyn nrow(p55);
      return r274;
    };
    r276 = dyn seq(p56);
    check L307() else D108();
  L310():
    r278 = dyn dimnames__(l36, NULL, r272);
    check L311() else D112();
  L317():
    goto L44(r286);
  L324():
    p62 = prom<V +>{
      nrow2 = ldf nrow;
      p61 = prom<V +>{
        qtx10 = ld qtx;
        qtx11 = force? qtx10;
        checkMissing(qtx11);
        return qtx11;
      };
      r294 = dyn nrow2(p61);
      return r294;
    };
    r296 = dyn seq2(p62);
    check L325() else D121();
  L328():
    r298 = dyn dimnames__2(l38, NULL, r292);
    check L329() else D125();
  D108():
    deopt 422 [r276];
  D112():
    deopt 430 [r272, r278];
  D121():
    deopt 457 [r296];
  D125():
    deopt 465 [r292, r298];
  L307():
    dny = ld dny;
    check L308() else D109();
  L311():
    st qty = r278;
    goto L43();
  L325():
    dnx = ld dnx;
    check L326() else D122();
  L329():
    st qtx = r298;
    sym28 = ldf seq_along;
    base28 = ldf seq_along in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L330() else L331();
  D109():
    deopt 423 [dny];
  D122():
    deopt 458 [dnx];
  L46(r300):
    s = toForSeq(r300);
    l39 = length(s);
    i = 0;
    goto L47(i);
  L308():
    dny1 = force? dny;
    checkMissing(dny1);
    list = ldf list in base;
    r277 = dyn list(r276, dny1);
    check L309() else D110();
  L326():
    dnx1 = force? dnx;
    checkMissing(dnx1);
    list2 = ldf list in base;
    r297 = dyn list2(r296, dnx1);
    check L327() else D123();
  L330():
    nmstrata10 = ld nmstrata;
    check L332() else D126();
  L331():
    r299 = dyn base28(<sym nmstrata>);
    goto L46(r299);
  D110():
    deopt 426 [r277];
  D123():
    deopt 461 [r297];
  D126():
    deopt 468 [nmstrata10];
  L47(i1):
    i2 = `+`.1(i1, 1);
    c41 = `<`.1(l39, i2);
    if c41 then L333() else L66();
  L309():
    goto L42(r277);
  L327():
    goto L45(r297);
  L332():
    nmstrata11 = force? nmstrata10;
    checkMissing(nmstrata11);
    r301 = seq_along(nmstrata11);
    goto L46(r301);
  L66():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    asgn_e = ld `asgn.e`;
    check L334() else D127();
  L333():
    structure1 = ldf structure;
    check L417() else D168();
  D127():
    deopt 471 [i2, asgn_e];
  D168():
    deopt 628 [];
  L334():
    asgn_e1 = force? asgn_e;
    checkMissing(asgn_e1);
    i5 = ld i;
    check L335() else D128();
  L417():
    p68 = prom<V +>{
      sym34 = ldf c;
      base34 = ldf c in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L1() else L2();
    L0(r351):
      return r351;
    L1():
      c55 = ldf c in base;
      r352 = dyn c55("aovlist", "listof");
      goto L0(r352);
    L2():
      r350 = dyn base34("aovlist", "listof");
      goto L0(r350);
    };
    p71 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      c56 = `is.object`(result1);
      if c56 then L1() else L2(result1);
    L0(dx77):
      return dx77;
    L1():
      dr64 = tryDispatchBuiltin.1("[", result1);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(result3):
      vapply = ldf vapply;
      p69 = prom<V +>{
        result4 = ld result;
        result5 = force? result4;
        checkMissing(result5);
        return result5;
      };
      p70 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r356 = dyn vapply(p69, p70, NA_LGL);
      r357 = `!`(r356);
      __10 = ldf `[` in base;
      r358 = dyn __10(result3, r357);
      goto L0(r358);
    L3():
      dx76 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx76);
    };
    p72 = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      c57 = `as.logical`(qr2);
      if c57 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      qr_e8 = ld `qr.e`;
      qr_e9 = force? qr_e8;
      checkMissing(qr_e9);
      return qr_e9;
    };
    p73 = prom<V +>{
      Call8 = ld Call;
      Call9 = force? Call8;
      checkMissing(Call9);
      return Call9;
    };
    p74 = prom<V +>{
      sym35 = ldf length;
      base35 = ldf length in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L2() else L3();
    L0(r363):
      c58 = `as.logical`(r363);
      if c58 then L4() else L1();
    L2():
      wts8 = ld wts;
      wts9 = force? wts8;
      checkMissing(wts9);
      length5 = ldf length in base;
      r364 = dyn length5(wts9);
      goto L0(r364);
    L3():
      r362 = dyn base35(<sym wts>);
      goto L0(r362);
    L1():
      invisible.0();
      return NULL;
    L4():
      wts10 = ld wts;
      wts11 = force? wts10;
      checkMissing(wts11);
      return wts11;
    };
    p75 = prom<V +>{
      allTerms = ld allTerms;
      allTerms1 = force? allTerms;
      checkMissing(allTerms1);
      return allTerms1;
    };
    p76 = prom<V +>{
      cons = ld cons;
      cons1 = force? cons;
      checkMissing(cons1);
      return cons1;
    };
    p77 = prom<V +>{
      xlev = ld xlev;
      xlev1 = force? xlev;
      checkMissing(xlev1);
      return xlev1;
    };
    r369 = dyn structure1[class, , `error.qr`, call, weights, terms, contrasts, xlevels](p68, p71, p72, p73, p74, p75, p76, p77);
    check L418() else D169();
  D128():
    deopt 472 [i2, asgn_e1, i5];
  D169():
    deopt 644 [r369];
  L335():
    i6 = force? i5;
    checkMissing(i6);
    r302 = `-`(i6, 1);
    r303 = `==`(asgn_e1, r302);
    st select = r303;
    sym29 = ldf sum;
    base29 = ldf sum in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L336() else L337();
  L418():
    popenv;
    return r369;
  L48(i9, r305):
    st ni = r305;
    ni = ld ni;
    check L340() else D131();
  L336():
    select = ld select;
    check L338() else D129();
  L337():
    r304 = dyn base29(<sym select>);
    goto L48(i2, r304);
  D129():
    deopt 480 [i2, select];
  D131():
    deopt 485 [i9, ni];
  L338():
    select1 = force? select;
    checkMissing(select1);
    sum = ldf sum in base;
    r306 = dyn sum(select1);
    check L339() else D130();
  L340():
    ni1 = force? ni;
    checkMissing(ni1);
    r307 = `!`(ni1);
    c42 = `as.logical`(r307);
    if c42 then L341() else L49();
  D130():
    deopt 483 [i2, r306];
  L49():
    qtx12 = ld qtx;
    check L344() else D132();
  L339():
    goto L48(i2, r306);
  L341():
    goto L47(i9);
  D132():
    deopt 492 [i9, qtx12];
  L344():
    qtx13 = force? qtx12;
    checkMissing(qtx13);
    c43 = `is.object`(qtx13);
    if c43 then L345() else L346(i9, qtx13);
  L51(i17, dx61):
    st xi = dx61;
    colSums = ldf colSums;
    check L349() else D134();
  L345():
    dr48 = tryDispatchBuiltin.1("[", qtx13);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L347() else L346(i9, dr48);
  L346(i15, qtx15):
    select2 = ld select;
    check L348() else D133();
  D133():
    deopt 494 [i15, qtx15, select2];
  D134():
    deopt 503 [i17];
  L347():
    dx60 = getTryDispatchBuiltinValue(dr48);
    goto L51(i9, dx60);
  L348():
    select3 = force? select2;
    __5 = ldf `[` in base;
    r309 = dyn __5(qtx13, select3, <missing>, FALSE);
    goto L51(i15, r309);
  L349():
    p63 = prom<V +>{
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      r310 = `^`(xi1, 2.0);
      return r310;
    };
    r312 = dyn colSums(p63);
    check L350() else D135();
  D135():
    deopt 505 [i17, r312];
  L350():
    r313 = `>`(r312, 1.0E-5);
    st cols = r313;
    sym30 = ldf any;
    base30 = ldf any in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L351() else L352();
  L52(i20, r315):
    c44 = `as.logical`(r315);
    if c44 then L355() else L53();
  L351():
    cols = ld cols;
    check L353() else D136();
  L352():
    r314 = dyn base30(<sym cols>);
    goto L52(i17, r314);
  D136():
    deopt 511 [i17, cols];
  L53():
    qty14 = ld qty;
    check L376() else D147();
  L56(i35):
    projections5 = ld projections;
    check L391() else D157();
  L353():
    cols1 = force? cols;
    checkMissing(cols1);
    any = ldf any in base;
    r316 = dyn any(cols1);
    check L354() else D137();
  L355():
    xi2 = ld xi;
    check L356() else D138();
  D137():
    deopt 514 [i17, r316];
  D138():
    deopt 515 [i20, xi2];
  D147():
    deopt 547 [i20, qty14];
  D157():
    deopt 584 [i35, projections5];
  L354():
    goto L52(i17, r316);
  L356():
    xi3 = force? xi2;
    checkMissing(xi3);
    c45 = `is.object`(xi3);
    if c45 then L357() else L358(i20, xi3);
  L376():
    qty15 = force? qty14;
    checkMissing(qty15);
    c49 = `is.object`(qty15);
    if c49 then L377() else L378(i20, qty15);
  L391():
    projections6 = force? projections5;
    checkMissing(projections6);
    c50 = `as.logical`(projections6);
    if c50 then L392() else L59();
  L54(i26, dx63):
    st xi = dx63;
    asgn_t = ld `asgn.t`;
    check L361() else D140();
  L57(i39, dx71):
    st y = dx71;
    sym31 = ldf list;
    base31 = ldf list in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L381() else L382();
  L59():
    goto L60(i35);
  L60(i49):
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L400() else L401();
  L357():
    dr50 = tryDispatchBuiltin.1("[", xi3);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L359() else L358(i20, dr50);
  L358(i24, xi5):
    cols2 = ld cols;
    check L360() else D139();
  L377():
    dr58 = tryDispatchBuiltin.1("[", qty15);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L379() else L378(i20, dr58);
  L378(i37, qty17):
    select6 = ld select;
    check L380() else D148();
  L392():
    proj1 = ldf proj;
    check L393() else D158();
  D139():
    deopt 518 [i24, xi5, cols2];
  D140():
    deopt 525 [i26, asgn_t];
  D148():
    deopt 549 [i37, qty17, select6];
  D158():
    deopt 587 [i35];
  L58(i42, r327):
    st fiti = r327;
    goto L56(i42);
  L61(i52, r342):
    l47 = ld fiti;
    class__ = ldf `class<-`;
    check L410() else D164();
  L359():
    dx62 = getTryDispatchBuiltinValue(dr50);
    goto L54(i20, dx62);
  L360():
    cols3 = force? cols2;
    __6 = ldf `[` in base;
    r317 = dyn __6(xi3, <missing>, cols3, FALSE);
    goto L54(i24, r317);
  L361():
    asgn_t1 = force? asgn_t;
    checkMissing(asgn_t1);
    c46 = `is.object`(asgn_t1);
    if c46 then L362() else L363(i26, asgn_t1);
  L379():
    dx70 = getTryDispatchBuiltinValue(dr58);
    goto L57(i20, dx70);
  L380():
    select7 = force? select6;
    __9 = ldf `[` in base;
    r325 = dyn __9(qty15, select7, <missing>, FALSE);
    goto L57(i37, r325);
  L381():
    numeric = ldf numeric;
    check L383() else D149();
  L382():
    r326 = dyn base31[coefficients, residuals, `fitted.values`, weights, rank, `df.residual`](<lang numeric()>, <sym y>, <lang `*`(0.0, y)>, <sym wts>, 0, <lang NROW(y)>);
    goto L58(i39, r326);
  L393():
    p67 = prom<V +>{
      fiti = ld fiti;
      fiti1 = force? fiti;
      checkMissing(fiti1);
      return fiti1;
    };
    r334 = dyn proj1(p67);
    check L394() else D159();
  L400():
    maov = ld maov;
    check L402() else D160();
  L401():
    r341 = dyn base32(<lang if(maov, "maov")>, "aov", <lang oldClass(er.fit)>);
    goto L61(i49, r341);
  D149():
    deopt 560 [i39];
  D159():
    deopt 589 [i35, r334];
  D160():
    deopt 597 [i49, maov];
  D164():
    deopt 613 [i52, r342, l47, r342];
  L55(i30, dx65):
    l40 = ld xi;
    attr__ = ldf `attr<-`;
    check L366() else D142();
  L362():
    dr52 = tryDispatchBuiltin.1("[", asgn_t1);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L364() else L363(i26, dr52);
  L363(i28, asgn_t3):
    cols4 = ld cols;
    check L365() else D141();
  L383():
    r328 = dyn numeric();
    check L384() else D150();
  L394():
    l44 = ld fiti;
    c51 = `is.object`(l44);
    if c51 then L396() else L397(i35, r334, l44);
  L402():
    maov1 = force? maov;
    checkMissing(maov1);
    c52 = `as.logical`(maov1);
    if c52 then L403() else L62();
  L410():
    r348 = dyn class__(l47, NULL, r342);
    check L411() else D165();
  D141():
    deopt 527 [i28, asgn_t3, cols4];
  D142():
    deopt 531 [i30, dx65, l40, dx65];
  D150():
    deopt 561 [i39, r328];
  D165():
    deopt 615 [i52, r342, r348];
  L62():
    goto L63(i49, NULL);
  L63(i55, r343):
    sym33 = ldf oldClass;
    base33 = ldf oldClass in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L405() else L406();
  L364():
    dx64 = getTryDispatchBuiltinValue(dr52);
    goto L55(i26, dx64);
  L365():
    cols5 = force? cols4;
    __7 = ldf `[` in base;
    r318 = dyn __7(asgn_t3, cols5);
    goto L55(i28, r318);
  L366():
    r319 = dyn attr__(l40, NULL, "assign", dx65);
    check L367() else D143();
  L384():
    y = ld y;
    check L385() else D151();
  L395(i48, r338, dx73):
    st fiti = dx73;
    goto L60(i48);
  L396():
    dr60 = tryDispatchBuiltin.0("$<-", l44, r334);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L398() else L397(i35, r334, dr60);
  L397(i46, r336, l46):
    r339 = `$<-`(l46, <sym projections>, r334);
    goto L395(i46, r336, r339);
  L403():
    goto L63(i49, "maov");
  L411():
    st fiti = r348;
    fiti2 = ld fiti;
    check L412() else D166();
  D143():
    deopt 534 [i30, dx65, r319];
  D151():
    deopt 563 [i39, y];
  D166():
    deopt 617 [i52, fiti2];
  L64(i58, r345):
    c53 = ldf c in base;
    r347 = dyn c53(r343, "aov", r345);
    check L409() else D163();
  L367():
    st xi = r319;
    lm_fit = ldf `lm.fit`;
    check L368() else D144();
  L385():
    y1 = force? y;
    checkMissing(y1);
    y2 = ld y;
    check L386() else D152();
  L398():
    dx72 = getTryDispatchBuiltinValue(dr60);
    goto L395(i35, r334, dx72);
  L405():
    er_fit22 = ld `er.fit`;
    check L407() else D161();
  L406():
    r344 = dyn base33(<sym er.fit>);
    goto L64(i55, r344);
  L412():
    fiti3 = force? fiti2;
    checkMissing(fiti3);
    l48 = ld result;
    c54 = `is.object`(l48);
    if c54 then L413() else L414(i52, fiti3, l48);
  D144():
    deopt 537 [i30];
  D152():
    deopt 567 [i39, 0.0, y2];
  D161():
    deopt 606 [i55, er_fit22];
  D163():
    deopt 611 [i58, r347];
  L65(i62, dx75):
    st result = dx75;
    goto L47(i62);
  L368():
    p64 = prom<V +>{
      xi6 = ld xi;
      xi7 = force? xi6;
      checkMissing(xi7);
      return xi7;
    };
    p65 = prom<V +>{
      qty10 = ld qty;
      qty11 = force? qty10;
      checkMissing(qty11);
      c47 = `is.object`(qty11);
      if c47 then L1() else L2();
    L0(dx67):
      return dx67;
    L1():
      dr54 = tryDispatchBuiltin.1("[", qty11);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2();
    L2():
      select4 = ld select;
      select5 = force? select4;
      __8 = ldf `[` in base;
      r321 = dyn __8(qty11, select5, <missing>, FALSE);
      goto L0(r321);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx66);
    };
    r323 = dyn lm_fit(p64, p65);
    check L369() else D145();
  L386():
    y3 = force? y2;
    checkMissing(y3);
    r329 = `*`(0.0, y3);
    wts6 = ld wts;
    check L387() else D153();
  L407():
    er_fit23 = force? er_fit22;
    checkMissing(er_fit23);
    oldClass1 = ldf oldClass in base;
    r346 = dyn oldClass1(er_fit23);
    check L408() else D162();
  L409():
    goto L61(i58, r347);
  L413():
    dr62 = tryDispatchBuiltin.0("[[<-", l48, fiti3);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L415() else L414(i52, fiti3, dr62);
  L414(i60, fiti5, l50):
    i63 = ld i;
    check L416() else D167();
  D145():
    deopt 540 [i30, r323];
  D153():
    deopt 571 [i39, wts6];
  D162():
    deopt 609 [i55, r346];
  D167():
    deopt 620 [i60, fiti5, l50, fiti3, i63];
  L369():
    st fiti = r323;
    Terms12 = ld Terms;
    check L370() else D146();
  L387():
    wts7 = force? wts6;
    checkMissing(wts7);
    NROW2 = ldf NROW;
    check L388() else D154();
  L408():
    goto L64(i55, r346);
  L415():
    dx74 = getTryDispatchBuiltinValue(dr62);
    goto L65(i52, dx74);
  L416():
    i64 = force? i63;
    ____2 = ldf `[[<-` in base;
    r349 = dyn ____2(l50, fiti3, i64);
    goto L65(i60, r349);
  D146():
    deopt 542 [i30, Terms12];
  D154():
    deopt 577 [i39];
  L370():
    Terms13 = force? Terms12;
    checkMissing(Terms13);
    l41 = ld fiti;
    c48 = `is.object`(l41);
    if c48 then L372() else L373(i30, Terms13, l41);
  L388():
    p66 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r331 = dyn NROW2(p66);
    check L389() else D155();
  D155():
    deopt 579 [i39, r331];
  L371(i34, Terms17, dx69):
    st fiti = dx69;
    goto L56(i34);
  L372():
    dr56 = tryDispatchBuiltin.0("$<-", l41, Terms13);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L374() else L373(i30, Terms13, dr56);
  L373(i32, Terms15, l43):
    r324 = `$<-`(l43, <sym terms>, Terms13);
    goto L371(i32, Terms15, r324);
  L389():
    list3 = ldf list in base;
    r332 = dyn list3(r328, y1, r329, wts7, 0, r331);
    check L390() else D156();
  D156():
    deopt 582 [i39, r332];
  L374():
    dx68 = getTryDispatchBuiltinValue(dr56);
    goto L371(i30, Terms13, dx68);
  L390():
    goto L58(i39, r332);
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg deparse1:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st expr = expr;
    deparse1 = ldf deparse1;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r1 = dyn deparse1[, backtick](p, TRUE);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}