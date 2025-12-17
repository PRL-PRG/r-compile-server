fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2732073249;
    st simpleLoess = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2732073249(y, x, weights, span, degree, parametric, `drop.square`, normalize, statistics, surface, cell, iterations, iterTrace, `trace.hat`) {
  (reg y:*, reg x:*, reg weights:*, reg span:*, reg degree:*, reg parametric:*, reg drop_square:*, reg normalize:*, reg statistics:*, reg surface:*, reg cell:*, reg iterations:*, reg iterTrace:*, reg trace_hat:*) -+> V { var y:*, var x:*, var weights:*, var span:*, reg span_isMissing:L, reg span_orDefault:*, var degree:*, reg degree_isMissing:L, reg degree_orDefault:*, var parametric:*, reg parametric_isMissing:L, reg parametric_orDefault:*, var `drop.square`:*, reg drop_square_isMissing:L, reg drop_square_orDefault:*, var normalize:*, reg normalize_isMissing:L, reg normalize_orDefault:*, var statistics:*, reg statistics_isMissing:L, reg statistics_orDefault:*, var surface:*, reg surface_isMissing:L, reg surface_orDefault:*, var cell:*, var iterations:*, var iterTrace:*, var `trace.hat`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg NCOL:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg as_integer:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg D:*, reg D1:V, reg is_na:cls, reg r7:V, reg c:L, reg stop:cls, reg r8:V, reg D2:*, reg D3:V, reg r10:V, reg c1:L, reg stop1:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg NROW:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r16:V, reg as_integer1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg N:*, reg N1:V, reg is_na1:cls, reg r20:V, reg c2:L, reg stop2:cls, reg r21:V, reg N2:*, reg N3:V, reg r23:V, reg c3:L, reg c4:V, reg D4:*, reg D5:V, reg r24:V, reg c6:L, reg c7:V, reg c9:L, reg stop3:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg y1:*, reg y2:V, reg length:cls, reg r29:V, reg N4:*, reg N5:V, reg r30:V, reg c10:L, reg stop4:cls, reg r31:V, reg as_matrix:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r34:V, reg l:*, reg storage_mode__:cls, reg r35:V, reg l1:*, reg storage_mode__1:cls, reg r36:V, reg l2:*, reg storage_mode__2:cls, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg N6:*, reg N7:V, reg max:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg N8:*, reg N9:V, reg rep_len:cls, reg r43:V, reg normalize1:*, reg normalize2:V, reg c11:L, reg c13:V, reg D6:*, reg D7:V, reg r44:V, reg c14:L, reg c15:V, reg c17:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg N10:*, reg N11:V, reg r47:V, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg apply:cls, reg apply1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg sort:*, reg sort1:V, reg p4:p(V +), reg r53:V, reg c18:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg seq:cls, reg trim:*, reg trim1:V, reg r56:V, reg p5:p(V +), reg N12:*, reg N13:V, reg trim2:*, reg trim3:V, reg r58:V, reg p6:p(V +), reg r60:V, reg __:cls, reg r61:V, reg p7:p(V +), reg var:*, reg var1:V, reg p8:p(V +), reg r64:V, reg r65:V, reg x9:*, reg x10:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg x13:V, reg r67:V, reg rep:cls, reg r68:V, reg r69:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg drop_square1:*, reg drop_square2:V, reg sum:cls, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg parametric1:*, reg parametric2:V, reg sum1:cls, reg r76:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r77:V, reg r78:V, reg parametric3:*, reg parametric4:V, reg r79:V, reg sum2:cls, reg r80:V, reg order:cls, reg parametric5:*, reg parametric6:V, reg p9:p(V +), reg r82:V, reg x14:*, reg x15:V, reg c19:L, reg x17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order_parametric:*, reg order_parametric1:V, reg __1:cls, reg r83:V, reg drop_square3:*, reg drop_square4:V, reg r84:V, reg c20:L, reg r86:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg order_parametric2:*, reg order_parametric3:V, reg __2:cls, reg r87:V, reg degree1:*, reg degree2:V, reg r88:V, reg c21:L, reg c23:V, reg sum_drop_sqr:*, reg sum_drop_sqr1:V, reg c24:L, reg c25:V, reg c27:L, reg stop5:cls, reg r89:V, reg D8:*, reg D9:V, reg r91:V, reg c28:L, reg c30:V, reg sum_drop_sqr2:*, reg sum_drop_sqr3:V, reg c31:L, reg c32:V, reg c34:L, reg stop6:cls, reg r92:V, reg sum_parametric:*, reg sum_parametric1:V, reg D10:*, reg D11:V, reg r94:V, reg c35:L, reg stop7:cls, reg r95:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg span1:*, reg span2:V, reg length1:cls, reg r99:V, reg r100:V, reg c36:L, reg stop8:cls, reg r101:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r103:V, reg r104:V, reg cell1:*, reg cell2:V, reg length2:cls, reg r105:V, reg r106:V, reg c37:L, reg stop9:cls, reg r107:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r109:V, reg r110:V, reg degree3:*, reg degree4:V, reg length3:cls, reg r111:V, reg r112:V, reg c38:L, reg stop10:cls, reg r113:V, reg surface1:*, reg surface2:V, reg r115:V, reg c39:L, reg c41:V, reg statistics1:*, reg statistics2:V, reg r116:V, reg c42:L, reg c43:V, reg c45:L, reg trace_hat1:*, reg trace_hat2:V, reg r117:V, reg c46:L, reg r118:S, reg paste:cls, reg surface3:*, reg surface4:V, reg p10:p(V +), reg statistics3:*, reg statistics4:V, reg p11:p(V +), reg r122:V, reg iterations1:*, reg iterations2:V, reg r123:V, reg do_rob:*, reg do_rob1:V, reg r124:V, reg c47:L, reg c49:V, reg iterTrace1:*, reg iterTrace2:V, reg c50:L, reg c51:V, reg c53:L, reg warning:cls, reg sprintf:cls, reg gettext:cls, reg r125:V, reg p12:p(V +), reg iterTrace3:*, reg iterTrace4:V, reg p13:p(V +), reg iterations3:*, reg iterations4:V, reg p14:p(V +), reg r129:V, reg p15:p(V +), reg r131:V, reg statistics5:*, reg statistics6:V, reg r133:V, reg iterTrace5:*, reg iterTrace6:V, reg c54:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r135:V, reg r136:V, reg iterations5:*, reg iterations6:V, reg r137:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c55:L, reg x18:V, reg statistics7:*, reg statistics8:V, reg r138:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r139:V, reg i7:I, reg r140:V, reg C_loess_raw:*, reg C_loess_raw1:V, reg y3:*, reg y4:V, reg x19:*, reg x20:V, reg no_st:*, reg no_st1:V, reg c56:L, reg i10:I, reg r141:V, reg weights1:*, reg weights2:V, reg no_st2:*, reg no_st3:V, reg c57:L, reg weights3:*, reg weights4:V, reg robust:*, reg robust1:V, reg r142:V, reg i13:I, reg r143:V, reg D12:*, reg D13:V, reg N14:*, reg N15:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r144:V, reg i16:I, reg r145:V, reg span3:*, reg span4:V, reg as_double:cls, reg r146:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r147:V, reg i19:I, reg r148:V, reg degree5:*, reg degree6:V, reg as_integer2:cls, reg r149:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r150:V, reg i22:I, reg r151:V, reg nonparametric:*, reg nonparametric1:V, reg as_integer3:cls, reg r152:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r153:V, reg i25:I, reg r154:V, reg order_drop_sqr:*, reg order_drop_sqr1:V, reg as_integer4:cls, reg r155:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r156:V, reg i28:I, reg r157:V, reg sum_drop_sqr4:*, reg sum_drop_sqr5:V, reg as_integer5:cls, reg r158:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r159:V, reg i31:I, reg r160:V, reg span5:*, reg span6:V, reg cell3:*, reg cell4:V, reg r161:V, reg as_double1:cls, reg r162:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r163:V, reg i34:I, reg r164:V, reg surf_stat:*, reg surf_stat1:V, reg as_character:cls, reg r165:V, reg double:cls, reg N16:*, reg N17:V, reg p16:p(V +), reg r167:V, reg integer:cls, reg r168:V, reg integer1:cls, reg max_kd:*, reg max_kd1:V, reg p17:p(V +), reg r170:V, reg double1:cls, reg max_kd2:*, reg max_kd3:V, reg p18:p(V +), reg r172:V, reg double2:cls, reg D14:*, reg D15:V, reg r173:V, reg p19:p(V +), reg r175:V, reg double3:cls, reg D16:*, reg D17:V, reg r176:V, reg max_kd4:*, reg max_kd5:V, reg r177:V, reg p20:p(V +), reg r179:V, reg double4:cls, reg N18:*, reg N19:V, reg p21:p(V +), reg r181:V, reg double5:cls, reg r182:V, reg double6:cls, reg r183:V, reg double7:cls, reg r184:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r185:V, reg i37:I, reg r186:V, reg surf_stat2:*, reg surf_stat3:V, reg r187:V, reg as_integer6:cls, reg r188:V, reg _C:cls, reg r189:V, reg z:*, reg z1:V, reg c58:L, reg i39:I, reg z3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i41:I, reg dx7:V, reg r190:V, reg y5:*, reg y6:V, reg fitted:*, reg fitted1:V, reg r191:V, reg j:*, reg j1:V, reg iterations7:*, reg iterations8:V, reg r192:V, reg c59:L, reg iterTrace7:*, reg iterTrace8:V, reg c60:L, reg robust2:*, reg robust3:V, reg i46:I, reg sym26:cls, reg base26:cls, reg guard26:L, reg r193:V, reg i49:I, reg r194:V, reg C_lowesw:*, reg C_lowesw1:V, reg fitted_residuals:*, reg fitted_residuals1:V, reg N20:*, reg N21:V, reg double8:cls, reg N22:*, reg N23:V, reg p22:p(V +), reg r196:V, reg integer2:cls, reg N24:*, reg N25:V, reg p23:p(V +), reg r198:V, reg _Fortran:cls, reg r199:V, reg c61:L, reg i51:I, reg r201:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i53:I, reg dx9:V, reg r202:V, reg i54:I, reg j2:*, reg j3:V, reg r203:V, reg c62:L, reg z4:*, reg z5:V, reg c63:L, reg i58:I, reg z7:V, reg dr10:V, reg dc5:L, reg dx11:V, reg i60:I, reg dx12:V, reg r204:V, reg z8:*, reg z9:V, reg c64:L, reg i62:I, reg z11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i64:I, reg dx14:V, reg r205:V, reg z12:*, reg z13:V, reg c65:L, reg i66:I, reg z15:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i68:I, reg dx16:V, reg r206:V, reg do_rob2:*, reg do_rob3:V, reg c66:L, reg paste1:cls, reg surface5:*, reg surface6:V, reg p24:p(V +), reg statistics9:*, reg statistics10:V, reg p25:p(V +), reg r209:V, reg i71:I, reg r210:V, reg i72:I, reg iterTrace9:*, reg iterTrace10:V, reg c67:L, reg wRSS:*, reg wRSS1:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r212:V, reg i77:I, reg r213:V, reg weights5:*, reg weights6:V, reg fitted_residuals2:*, reg fitted_residuals3:V, reg r214:V, reg r215:V, reg sum3:cls, reg r216:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r217:V, reg i80:I, reg r218:V, reg oSS:*, reg oSS1:V, reg wRSS2:*, reg wRSS3:V, reg r219:V, reg abs:cls, reg r220:V, reg wRSS4:*, reg wRSS5:V, reg r221:V, reg c68:L, reg i83:I, reg r224:V, reg r225:V, reg wRSS6:*, reg wRSS7:V, reg r226:V, reg j4:*, reg j5:V, reg iterations9:*, reg iterations10:V, reg r227:V, reg c69:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r228:V, reg i88:I, reg r229:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r230:V, reg i91:I, reg r231:V, reg old_rob:*, reg old_rob1:V, reg robust5:*, reg robust6:V, reg r232:V, reg abs1:cls, reg r233:V, reg sum4:cls, reg r234:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r237:V, reg i94:I, reg r238:V, reg r239:V, reg robust7:*, reg robust8:V, reg sum5:cls, reg r240:V, reg r241:V, reg i95:I, reg r242:V, reg cat:cls, reg sprintf1:cls, reg j6:*, reg j7:V, reg p26:p(V +), reg wRSS8:*, reg wRSS9:V, reg p27:p(V +), reg del_SS:*, reg del_SS1:V, reg p28:p(V +), reg d_rob_w:*, reg d_rob_w1:V, reg p29:p(V +), reg r247:V, reg p30:p(V +), reg r249:V, reg iterTrace11:*, reg iterTrace12:V, reg r250:V, reg c70:L, reg i97:I, reg c72:V, reg j8:*, reg j9:V, reg iterations11:*, reg iterations12:V, reg r251:V, reg c73:L, reg c74:V, reg c76:L, reg cat1:cls, reg r252:V, reg print:cls, reg quantile:cls, reg robust9:*, reg robust10:V, reg p31:p(V +), reg p32:p(V +), reg r255:V, reg p33:p(V +), reg r257:V, reg i101:I, reg r258:V, reg i102:I, reg surface7:*, reg surface8:V, reg r260:V, reg c77:L, reg setNames:cls, reg z16:*, reg z17:V, reg c78:L, reg z19:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r261:V, reg p34:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r263:V, reg r264:V, reg c79:cls, reg r265:V, reg p35:p(V +), reg r267:V, reg D18:*, reg D19:V, reg r268:V, reg pars:*, reg pars1:V, reg c80:L, reg r270:V, reg pars3:V, reg dr18:V, reg dc9:L, reg dx19:V, reg r272:V, reg dx20:V, reg __3:cls, reg r273:V, reg r274:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r275:V, reg r276:V, reg pars4:*, reg pars5:V, reg z20:*, reg z21:V, reg c81:L, reg z23:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r277:V, reg c82:L, reg dx24:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg pars6:*, reg pars7:V, reg c83:L, reg dx28:V, reg r279:I, reg pars9:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg r281:I, reg dx32:V, reg __4:cls, reg r282:V, reg r283:V, reg __5:cls, reg r284:V, reg z24:*, reg z25:V, reg c84:L, reg z27:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg r285:V, reg c85:L, reg dx36:V, reg dr28:V, reg dc14:L, reg dx37:V, reg dx38:V, reg pars10:*, reg pars11:V, reg c86:L, reg dx40:V, reg r287:I, reg pars13:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg r289:I, reg dx44:V, reg __6:cls, reg r290:V, reg r291:V, reg __7:cls, reg r292:V, reg z28:*, reg z29:V, reg c87:L, reg z31:V, reg dr32:V, reg dc16:L, reg dx45:V, reg dx46:V, reg r293:V, reg z32:*, reg z33:V, reg c88:L, reg z35:V, reg dr34:V, reg dc17:L, reg dx47:V, reg dx48:V, reg r294:V, reg c89:L, reg dx50:V, reg dr36:V, reg dc18:L, reg dx51:V, reg dx52:V, reg enough:*, reg enough1:V, reg r295:V, reg __8:cls, reg r296:V, reg list:cls, reg r297:V, reg do_rob4:*, reg do_rob5:V, reg c90:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r299:V, reg r300:V, reg C_lowesp:*, reg C_lowesp1:V, reg N26:*, reg N27:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r301:V, reg r302:V, reg y7:*, reg y8:V, reg as_double2:cls, reg r303:V, reg fitted2:*, reg fitted3:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r304:V, reg r305:V, reg weights7:*, reg weights8:V, reg as_double3:cls, reg r306:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r307:V, reg r308:V, reg robust11:*, reg robust12:V, reg as_double4:cls, reg r309:V, reg integer3:cls, reg N28:*, reg N29:V, reg p36:p(V +), reg r311:V, reg double9:cls, reg N30:*, reg N31:V, reg p37:p(V +), reg r313:V, reg _Fortran1:cls, reg r314:V, reg c91:L, reg r316:V, reg dr38:V, reg dc19:L, reg dx53:V, reg dx54:V, reg r317:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r318:V, reg r319:V, reg C_loess_raw2:*, reg C_loess_raw3:V, reg pseudovalues:*, reg pseudovalues1:V, reg x21:*, reg x22:V, reg weights9:*, reg weights10:V, reg weights11:*, reg weights12:V, reg D20:*, reg D21:V, reg N32:*, reg N33:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r320:V, reg r321:V, reg span7:*, reg span8:V, reg as_double5:cls, reg r322:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r323:V, reg r324:V, reg degree7:*, reg degree8:V, reg as_integer7:cls, reg r325:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r326:V, reg r327:V, reg nonparametric2:*, reg nonparametric3:V, reg as_integer8:cls, reg r328:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r329:V, reg r330:V, reg order_drop_sqr2:*, reg order_drop_sqr3:V, reg as_integer9:cls, reg r331:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r332:V, reg r333:V, reg sum_drop_sqr6:*, reg sum_drop_sqr7:V, reg as_integer10:cls, reg r334:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r335:V, reg r336:V, reg span9:*, reg span10:V, reg cell5:*, reg cell6:V, reg r337:V, reg as_double6:cls, reg r338:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r339:V, reg r340:V, reg surf_stat4:*, reg surf_stat5:V, reg as_character1:cls, reg r341:V, reg double10:cls, reg N34:*, reg N35:V, reg p38:p(V +), reg r343:V, reg integer4:cls, reg r344:V, reg integer5:cls, reg max_kd6:*, reg max_kd7:V, reg p39:p(V +), reg r346:V, reg double11:cls, reg max_kd8:*, reg max_kd9:V, reg p40:p(V +), reg r348:V, reg double12:cls, reg D22:*, reg D23:V, reg r349:V, reg p41:p(V +), reg r351:V, reg double13:cls, reg D24:*, reg D25:V, reg r352:V, reg max_kd10:*, reg max_kd11:V, reg r353:V, reg p42:p(V +), reg r355:V, reg double14:cls, reg N36:*, reg N37:V, reg p43:p(V +), reg r357:V, reg double15:cls, reg r358:V, reg double16:cls, reg r359:V, reg double17:cls, reg r360:V, reg _C1:cls, reg r361:V, reg c92:L, reg r363:V, reg dr40:V, reg dc20:L, reg dx55:V, reg dx56:V, reg __9:cls, reg r364:V, reg pseudovalues2:*, reg pseudovalues3:V, reg zz:*, reg zz1:V, reg r365:V, reg do_rob6:*, reg do_rob7:V, reg c93:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r367:V, reg r368:V, reg weights13:*, reg weights14:V, reg pseudo_resid:*, reg pseudo_resid1:V, reg r369:V, reg r370:V, reg sum6:cls, reg r371:V, reg r372:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r373:V, reg weights15:*, reg weights16:V, reg fitted_residuals4:*, reg fitted_residuals5:V, reg r374:V, reg r375:V, reg sum7:cls, reg r376:V, reg one_delta:*, reg one_delta1:V, reg trace_hat_out:*, reg trace_hat_out1:V, reg r377:V, reg r378:V, reg N38:*, reg N39:V, reg r379:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r380:V, reg r381:V, reg sum_squares:*, reg sum_squares1:V, reg one_delta2:*, reg one_delta3:V, reg r382:V, reg r383:V, reg structure:cls, reg sym49:cls, reg base49:cls, reg guard49:L, reg r384:V, reg r385:V, reg N40:*, reg N41:V, reg fitted4:*, reg fitted5:V, reg fitted_residuals6:*, reg fitted_residuals7:V, reg enp:*, reg enp1:V, reg s1:*, reg s2:V, reg one_delta4:*, reg one_delta5:V, reg two_delta:*, reg two_delta1:V, reg trace_hat_out2:*, reg trace_hat_out3:V, reg divisor:*, reg divisor1:V, reg robust13:*, reg robust14:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r386:V, reg r387:V, reg span11:*, reg span12:V, reg degree9:*, reg degree10:V, reg normalize3:*, reg normalize4:V, reg parametric7:*, reg parametric8:V, reg drop_square5:*, reg drop_square6:V, reg surface9:*, reg surface10:V, reg cell7:*, reg cell8:V, reg iterations13:*, reg iterations14:V, reg r388:V, reg c94:L, reg r389:S, reg trace_hat3:*, reg trace_hat4:V, reg iterations15:*, reg iterations16:V, reg list1:cls, reg r390:V, reg surface11:*, reg surface12:V, reg r391:V, reg c95:L, reg fit_kd:*, reg fit_kd1:V, reg fit_kd2:V, reg list2:cls, reg r392:V, reg p44:p(V +), reg r394:V |
    mkenv;
    st y = y;
    st x = x;
    st weights = weights;
    span_isMissing = missing.0(span);
    if span_isMissing then L0(0.75) else L0(span);
  L0(span_orDefault):
    st span = span_orDefault;
    degree_isMissing = missing.0(degree);
    if degree_isMissing then L1(2) else L1(degree);
  L1(degree_orDefault):
    st degree = degree_orDefault;
    parametric_isMissing = missing.0(parametric);
    if parametric_isMissing then L2(FALSE) else L2(parametric);
  L2(parametric_orDefault):
    st parametric = parametric_orDefault;
    drop_square_isMissing = missing.0(drop_square);
    if drop_square_isMissing then L3(FALSE) else L3(drop_square);
  L3(drop_square_orDefault):
    st `drop.square` = drop_square_orDefault;
    normalize_isMissing = missing.0(normalize);
    if normalize_isMissing then L4(TRUE) else L4(normalize);
  L4(normalize_orDefault):
    st normalize = normalize_orDefault;
    statistics_isMissing = missing.0(statistics);
    if statistics_isMissing then L5("approximate") else L5(statistics);
  L5(statistics_orDefault):
    st statistics = statistics_orDefault;
    surface_isMissing = missing.0(surface);
    if surface_isMissing then L6("interpolate") else L6(surface);
  L6(surface_orDefault):
    st surface = surface_orDefault;
    st cell = cell;
    st iterations = iterations;
    st iterTrace = iterTrace;
    st `trace.hat` = trace_hat;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L130() else L131();
  L7(r1):
    st D = r1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L135() else L136();
  L130():
    NCOL = ldf NCOL;
    check L132() else D0();
  L131():
    r = dyn base(<lang NCOL(x)>);
    goto L7(r);
  D0():
    deopt 3 [];
  L8(r6):
    c = `as.logical`(r6);
    if c then L139() else L9();
  L132():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn NCOL(p);
    check L133() else D1();
  L135():
    D = ld D;
    check L137() else D3();
  L136():
    r5 = dyn base1(<sym D>);
    goto L8(r5);
  D1():
    deopt 5 [r3];
  D3():
    deopt 11 [D];
  L9():
    goto L10();
  L10():
    D2 = ld D;
    check L143() else D7();
  L133():
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(r3);
    check L134() else D2();
  L137():
    D1 = force? D;
    checkMissing(D1);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(D1);
    check L138() else D4();
  L139():
    stop = ldf stop;
    check L140() else D5();
  D2():
    deopt 7 [r4];
  D4():
    deopt 14 [r7];
  D5():
    deopt 16 [];
  D7():
    deopt 21 [D2];
  L134():
    goto L7(r4);
  L138():
    goto L8(r7);
  L140():
    r8 = dyn stop("invalid NCOL(X)");
    check L141() else D6();
  L143():
    D3 = force? D2;
    checkMissing(D3);
    r10 = `>`(D3, 4.0);
    c1 = `as.logical`(r10);
    if c1 then L144() else L11();
  D6():
    deopt 18 [r8];
  L11():
    goto L12();
  L12():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L148() else L149();
  L141():
    goto L10();
  L144():
    stop1 = ldf stop;
    check L145() else D8();
  D8():
    deopt 26 [];
  L13(r14):
    st N = r14;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L153() else L154();
  L145():
    r11 = dyn stop1("only 1-4 predictors are allowed");
    check L146() else D9();
  L148():
    NROW = ldf NROW;
    check L150() else D10();
  L149():
    r13 = dyn base2(<lang NROW(x)>);
    goto L13(r13);
  D9():
    deopt 28 [r11];
  D10():
    deopt 34 [];
  L14(r19):
    c2 = `as.logical`(r19);
    if c2 then L157() else L15();
  L146():
    goto L12();
  L150():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r16 = dyn NROW(p1);
    check L151() else D11();
  L153():
    N = ld N;
    check L155() else D13();
  L154():
    r18 = dyn base3(<sym N>);
    goto L14(r18);
  D11():
    deopt 36 [r16];
  D13():
    deopt 42 [N];
  L15():
    goto L16();
  L16():
    N2 = ld N;
    check L161() else D17();
  L151():
    as_integer1 = ldf `as.integer` in base;
    r17 = dyn as_integer1(r16);
    check L152() else D12();
  L155():
    N1 = force? N;
    checkMissing(N1);
    is_na1 = ldf `is.na` in base;
    r20 = dyn is_na1(N1);
    check L156() else D14();
  L157():
    stop2 = ldf stop;
    check L158() else D15();
  D12():
    deopt 38 [r17];
  D14():
    deopt 45 [r20];
  D15():
    deopt 47 [];
  D17():
    deopt 52 [N2];
  L152():
    goto L13(r17);
  L156():
    goto L14(r20);
  L158():
    r21 = dyn stop2("invalid NROW(X)");
    check L159() else D16();
  L161():
    N3 = force? N2;
    checkMissing(N3);
    r23 = `!`(N3);
    c3 = `as.logical`(r23);
    if c3 then L17(c3) else L162();
  D16():
    deopt 49 [r21];
  L17(c4):
    c9 = `as.logical`(c4);
    if c9 then L165() else L18();
  L159():
    goto L16();
  L162():
    D4 = ld D;
    check L163() else D18();
  D18():
    deopt 55 [c3, D4];
  L18():
    goto L19();
  L19():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L169() else L170();
  L163():
    D5 = force? D4;
    checkMissing(D5);
    r24 = `!`(D5);
    c6 = `as.logical`(r24);
    c7 = `||`(c3, c6);
    goto L17(c7);
  L165():
    stop3 = ldf stop;
    check L166() else D19();
  D19():
    deopt 60 [];
  L20(r28):
    N4 = ld N;
    check L173() else D23();
  L166():
    r25 = dyn stop3("invalid 'x'");
    check L167() else D20();
  L169():
    y1 = ld y;
    check L171() else D21();
  L170():
    r27 = dyn base4(<sym y>);
    goto L20(r27);
  D20():
    deopt 62 [r25];
  D21():
    deopt 67 [y1];
  D23():
    deopt 70 [r28, N4];
  L167():
    goto L19();
  L171():
    y2 = force? y1;
    checkMissing(y2);
    length = ldf length in base;
    r29 = dyn length(y2);
    check L172() else D22();
  L173():
    N5 = force? N4;
    checkMissing(N5);
    r30 = `!=`(r28, N5);
    c10 = `as.logical`(r30);
    if c10 then L174() else L21();
  D22():
    deopt 70 [r29];
  L21():
    goto L22();
  L22():
    as_matrix = ldf `as.matrix`;
    check L178() else D26();
  L172():
    goto L20(r29);
  L174():
    stop4 = ldf stop;
    check L175() else D24();
  D24():
    deopt 74 [];
  D26():
    deopt 80 [];
  L175():
    r31 = dyn stop4("invalid 'y'");
    check L176() else D25();
  L178():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r34 = dyn as_matrix(p2);
    check L179() else D27();
  D25():
    deopt 76 [r31];
  D27():
    deopt 82 [r34];
  L176():
    goto L22();
  L179():
    st x = r34;
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L180() else D28();
  D28():
    deopt 87 ["double", l, "double"];
  L180():
    r35 = dyn storage_mode__(l, NULL, "double");
    check L181() else D29();
  D29():
    deopt 89 ["double", r35];
  L181():
    st x = r35;
    l1 = ld y;
    storage_mode__1 = ldf `storage.mode<-`;
    check L182() else D30();
  D30():
    deopt 94 ["double", l1, "double"];
  L182():
    r36 = dyn storage_mode__1(l1, NULL, "double");
    check L183() else D31();
  D31():
    deopt 96 ["double", r36];
  L183():
    st y = r36;
    l2 = ld weights;
    storage_mode__2 = ldf `storage.mode<-`;
    check L184() else D32();
  D32():
    deopt 101 ["double", l2, "double"];
  L184():
    r37 = dyn storage_mode__2(l2, NULL, "double");
    check L185() else D33();
  D33():
    deopt 103 ["double", r37];
  L185():
    st weights = r37;
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L186() else L187();
  L23(r39):
    st `max.kd` = r39;
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L190() else L191();
  L186():
    N6 = ld N;
    check L188() else D34();
  L187():
    r38 = dyn base5(<sym N>, 200);
    goto L23(r38);
  D34():
    deopt 107 [N6];
  L24(r42):
    st robust = r42;
    normalize1 = ld normalize;
    check L194() else D38();
  L188():
    N7 = force? N6;
    checkMissing(N7);
    max = ldf max in base;
    r40 = dyn max(N7, 200);
    check L189() else D35();
  L190():
    N8 = ld N;
    check L192() else D36();
  L191():
    r41 = dyn base6(1.0, <sym N>);
    goto L24(r41);
  D35():
    deopt 111 [r40];
  D36():
    deopt 116 [N8];
  D38():
    deopt 121 [normalize1];
  L189():
    goto L23(r40);
  L192():
    N9 = force? N8;
    checkMissing(N9);
    rep_len = ldf rep_len in base;
    r43 = dyn rep_len(1.0, N9);
    check L193() else D37();
  L194():
    normalize2 = force? normalize1;
    checkMissing(normalize2);
    c11 = `as.logical`(normalize2);
    if c11 then L195() else L25(c11);
  D37():
    deopt 119 [r43];
  L25(c13):
    c17 = `as.logical`(c13);
    if c17 then L198() else L26();
  L193():
    goto L24(r43);
  L195():
    D6 = ld D;
    check L196() else D39();
  D39():
    deopt 123 [c11, D6];
  L26():
    st divisor = 1.0;
    goto L30();
  L30():
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L210() else L211();
  L196():
    D7 = force? D6;
    checkMissing(D7);
    r44 = `>`(D7, 1);
    c14 = `as.logical`(r44);
    c15 = `&&`(c11, c14);
    goto L25(c15);
  L198():
    sym7 = ldf ceiling;
    base7 = ldf ceiling in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L199() else L200();
  L27(r46):
    st trim = r46;
    sym8 = ldf sqrt;
    base8 = ldf sqrt in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L202() else L203();
  L31(r72):
    st `sum.drop.sqr` = r72;
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L214() else L215();
  L199():
    N10 = ld N;
    check L201() else D40();
  L200():
    r45 = dyn base7(<lang `*`(0.1, N)>);
    goto L27(r45);
  L210():
    drop_square1 = ld `drop.square`;
    check L212() else D44();
  L211():
    r71 = dyn base10(<sym drop.square>);
    goto L31(r71);
  D40():
    deopt 130 [0.1, N10];
  D44():
    deopt 155 [drop_square1];
  L28(r50):
    st divisor = r50;
    x9 = ld x;
    check L206() else D43();
  L32(r75):
    st `sum.parametric` = r75;
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L218() else L219();
  L201():
    N11 = force? N10;
    checkMissing(N11);
    r47 = `*`(0.1, N11);
    r48 = ceiling(r47);
    goto L27(r48);
  L202():
    apply = ldf apply;
    check L204() else D41();
  L203():
    r49 = dyn base8(<lang apply(`[`(apply(x, 2, sort), seq(`+`(trim, 1.0), `-`(N, trim)), , drop=FALSE), 2, var)>);
    goto L28(r49);
  L212():
    drop_square2 = force? drop_square1;
    checkMissing(drop_square2);
    sum = ldf sum in base;
    r73 = dyn sum(drop_square2);
    check L213() else D45();
  L214():
    parametric1 = ld parametric;
    check L216() else D46();
  L215():
    r74 = dyn base11(<sym parametric>);
    goto L32(r74);
  D41():
    deopt 137 [];
  D43():
    deopt 144 [x9];
  D45():
    deopt 158 [r73];
  D46():
    deopt 162 [parametric1];
  L33(r78):
    st nonparametric = r78;
    order = ldf order;
    check L222() else D50();
  L204():
    p7 = prom<V +>{
      apply1 = ldf apply;
      p3 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p4 = prom<V +>{
        sort = ld sort;
        sort1 = force? sort;
        checkMissing(sort1);
        return sort1;
      };
      r53 = dyn apply1(p3, 2, p4);
      c18 = `is.object`(r53);
      if c18 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r53);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      seq = ldf seq;
      p5 = prom<V +>{
        trim = ld trim;
        trim1 = force? trim;
        checkMissing(trim1);
        r56 = `+`(trim1, 1.0);
        return r56;
      };
      p6 = prom<V +>{
        N12 = ld N;
        N13 = force? N12;
        checkMissing(N13);
        trim2 = ld trim;
        trim3 = force? trim2;
        checkMissing(trim3);
        r58 = `-`(N13, trim3);
        return r58;
      };
      r60 = dyn seq(p5, p6);
      __ = ldf `[` in base;
      r61 = dyn __(r53, r60, <missing>, FALSE);
      goto L0(r61);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      var = ld var;
      var1 = force? var;
      checkMissing(var1);
      return var1;
    };
    r64 = dyn apply(p7, 2, p8);
    check L205() else D42();
  L206():
    x10 = force? x9;
    checkMissing(x10);
    sym9 = ldf rep;
    base9 = ldf rep in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L207() else L208();
  L213():
    goto L31(r73);
  L216():
    parametric2 = force? parametric1;
    checkMissing(parametric2);
    sum1 = ldf sum in base;
    r76 = dyn sum1(parametric2);
    check L217() else D47();
  L218():
    parametric3 = ld parametric;
    check L220() else D48();
  L219():
    r77 = dyn base12(<lang `!`(parametric)>);
    goto L33(r77);
  D42():
    deopt 141 [r64];
  D47():
    deopt 165 [r76];
  D48():
    deopt 169 [parametric3];
  D50():
    deopt 176 [];
  L29(x13, r67):
    r69 = `/`(x13, r67);
    st x = r69;
    goto L30();
  L205():
    r65 = sqrt(r64);
    goto L28(r65);
  L207():
    rep = ldf rep in base;
    r68 = dyn rep(<sym divisor>, <lang rep_len(N, D)>);
    goto L29(x10, r68);
  L208():
    r66 = dyn base9(<sym divisor>, <lang rep_len(N, D)>);
    goto L29(x10, r66);
  L217():
    goto L32(r76);
  L220():
    parametric4 = force? parametric3;
    checkMissing(parametric4);
    r79 = `!`(parametric4);
    sum2 = ldf sum in base;
    r80 = dyn sum2(r79);
    check L221() else D49();
  L222():
    p9 = prom<V +>{
      parametric5 = ld parametric;
      parametric6 = force? parametric5;
      checkMissing(parametric6);
      return parametric6;
    };
    r82 = dyn order(p9);
    check L223() else D51();
  D49():
    deopt 173 [r80];
  D51():
    deopt 178 [r82];
  L221():
    goto L33(r80);
  L223():
    st `order.parametric` = r82;
    x14 = ld x;
    check L224() else D52();
  D52():
    deopt 180 [x14];
  L224():
    x15 = force? x14;
    checkMissing(x15);
    c19 = `is.object`(x15);
    if c19 then L225() else L226(x15);
  L34(dx3):
    st x = dx3;
    drop_square3 = ld `drop.square`;
    check L229() else D54();
  L225():
    dr2 = tryDispatchBuiltin.1("[", x15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L227() else L226(dr2);
  L226(x17):
    order_parametric = ld `order.parametric`;
    check L228() else D53();
  D53():
    deopt 183 [x17, order_parametric];
  D54():
    deopt 189 [2, drop_square3];
  L227():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L34(dx2);
  L228():
    order_parametric1 = force? order_parametric;
    __1 = ldf `[` in base;
    r83 = dyn __1(x15, <missing>, order_parametric1);
    goto L34(r83);
  L229():
    drop_square4 = force? drop_square3;
    checkMissing(drop_square4);
    r84 = `-`(2, drop_square4);
    c20 = `is.object`(r84);
    if c20 then L230() else L231(r84);
  L35(dx5):
    st `order.drop.sqr` = dx5;
    degree1 = ld degree;
    check L234() else D56();
  L230():
    dr4 = tryDispatchBuiltin.1("[", r84);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L232() else L231(dr4);
  L231(r86):
    order_parametric2 = ld `order.parametric`;
    check L233() else D55();
  D55():
    deopt 192 [r86, order_parametric2];
  D56():
    deopt 196 [degree1];
  L232():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx4);
  L233():
    order_parametric3 = force? order_parametric2;
    __2 = ldf `[` in base;
    r87 = dyn __2(r86, order_parametric3);
    goto L35(r87);
  L234():
    degree2 = force? degree1;
    checkMissing(degree2);
    r88 = `==`(degree2, 1);
    c21 = `as.logical`(r88);
    if c21 then L235() else L36(c21);
  L36(c23):
    c27 = `as.logical`(c23);
    if c27 then L238() else L37();
  L235():
    sum_drop_sqr = ld `sum.drop.sqr`;
    check L236() else D57();
  D57():
    deopt 200 [c21, sum_drop_sqr];
  L37():
    goto L38();
  L38():
    D8 = ld D;
    check L242() else D60();
  L236():
    sum_drop_sqr1 = force? sum_drop_sqr;
    checkMissing(sum_drop_sqr1);
    c24 = `as.logical`(sum_drop_sqr1);
    c25 = `&&`(c21, c24);
    goto L36(c25);
  L238():
    stop5 = ldf stop;
    check L239() else D58();
  D58():
    deopt 204 [];
  D60():
    deopt 209 [D8];
  L239():
    r89 = dyn stop5("specified the square of a factor predictor to be dropped when degree = 1");
    check L240() else D59();
  L242():
    D9 = force? D8;
    checkMissing(D9);
    r91 = `==`(D9, 1);
    c28 = `as.logical`(r91);
    if c28 then L243() else L39(c28);
  D59():
    deopt 206 [r89];
  L39(c30):
    c34 = `as.logical`(c30);
    if c34 then L246() else L40();
  L240():
    goto L38();
  L243():
    sum_drop_sqr2 = ld `sum.drop.sqr`;
    check L244() else D61();
  D61():
    deopt 213 [c28, sum_drop_sqr2];
  L40():
    goto L41();
  L41():
    sum_parametric = ld `sum.parametric`;
    check L250() else D64();
  L244():
    sum_drop_sqr3 = force? sum_drop_sqr2;
    checkMissing(sum_drop_sqr3);
    c31 = `as.logical`(sum_drop_sqr3);
    c32 = `&&`(c28, c31);
    goto L39(c32);
  L246():
    stop6 = ldf stop;
    check L247() else D62();
  D62():
    deopt 217 [];
  D64():
    deopt 222 [sum_parametric];
  L247():
    r92 = dyn stop6("specified the square of a predictor to be dropped with only one numeric predictor");
    check L248() else D63();
  L250():
    sum_parametric1 = force? sum_parametric;
    checkMissing(sum_parametric1);
    D10 = ld D;
    check L251() else D65();
  D63():
    deopt 219 [r92];
  D65():
    deopt 223 [sum_parametric1, D10];
  L248():
    goto L41();
  L251():
    D11 = force? D10;
    checkMissing(D11);
    r94 = `==`(sum_parametric1, D11);
    c35 = `as.logical`(r94);
    if c35 then L252() else L42();
  L42():
    goto L43();
  L43():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L256() else L257();
  L252():
    stop7 = ldf stop;
    check L253() else D66();
  D66():
    deopt 227 [];
  L44(r98):
    r100 = `!=`(r98, 1);
    c36 = `as.logical`(r100);
    if c36 then L260() else L45();
  L253():
    r95 = dyn stop7("specified parametric for all predictors");
    check L254() else D67();
  L256():
    span1 = ld span;
    check L258() else D68();
  L257():
    r97 = dyn base13(<sym span>);
    goto L44(r97);
  D67():
    deopt 229 [r95];
  D68():
    deopt 234 [span1];
  L45():
    goto L46();
  L46():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L264() else L265();
  L254():
    goto L43();
  L258():
    span2 = force? span1;
    checkMissing(span2);
    length1 = ldf length in base;
    r99 = dyn length1(span2);
    check L259() else D69();
  L260():
    stop8 = ldf stop;
    check L261() else D70();
  D69():
    deopt 237 [r99];
  D70():
    deopt 241 [];
  L47(r104):
    r106 = `!=`(r104, 1);
    c37 = `as.logical`(r106);
    if c37 then L268() else L48();
  L259():
    goto L44(r99);
  L261():
    r101 = dyn stop8("invalid argument 'span'");
    check L262() else D71();
  L264():
    cell1 = ld cell;
    check L266() else D72();
  L265():
    r103 = dyn base14(<sym cell>);
    goto L47(r103);
  D71():
    deopt 243 [r101];
  D72():
    deopt 248 [cell1];
  L48():
    goto L49();
  L49():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L272() else L273();
  L262():
    goto L46();
  L266():
    cell2 = force? cell1;
    checkMissing(cell2);
    length2 = ldf length in base;
    r105 = dyn length2(cell2);
    check L267() else D73();
  L268():
    stop9 = ldf stop;
    check L269() else D74();
  D73():
    deopt 251 [r105];
  D74():
    deopt 255 [];
  L50(r110):
    r112 = `!=`(r110, 1);
    c38 = `as.logical`(r112);
    if c38 then L276() else L51();
  L267():
    goto L47(r105);
  L269():
    r107 = dyn stop9("invalid argument 'cell'");
    check L270() else D75();
  L272():
    degree3 = ld degree;
    check L274() else D76();
  L273():
    r109 = dyn base15(<sym degree>);
    goto L50(r109);
  D75():
    deopt 257 [r107];
  D76():
    deopt 262 [degree3];
  L51():
    goto L52();
  L52():
    surface1 = ld surface;
    check L280() else D80();
  L270():
    goto L49();
  L274():
    degree4 = force? degree3;
    checkMissing(degree4);
    length3 = ldf length in base;
    r111 = dyn length3(degree4);
    check L275() else D77();
  L276():
    stop10 = ldf stop;
    check L277() else D78();
  D77():
    deopt 265 [r111];
  D78():
    deopt 269 [];
  D80():
    deopt 274 [surface1];
  L275():
    goto L50(r111);
  L277():
    r113 = dyn stop10("invalid argument 'degree'");
    check L278() else D79();
  L280():
    surface2 = force? surface1;
    checkMissing(surface2);
    r115 = `==`(surface2, "interpolate");
    c39 = `as.logical`(r115);
    if c39 then L281() else L53(c39);
  D79():
    deopt 271 [r113];
  L53(c41):
    c45 = `as.logical`(c41);
    if c45 then L284() else L54();
  L278():
    goto L52();
  L281():
    statistics1 = ld statistics;
    check L282() else D81();
  D81():
    deopt 278 [c39, statistics1];
  L54():
    goto L57();
  L57():
    paste = ldf paste;
    check L289() else D83();
  L282():
    statistics2 = force? statistics1;
    checkMissing(statistics2);
    r116 = `==`(statistics2, "approximate");
    c42 = `as.logical`(r116);
    c43 = `&&`(c39, c42);
    goto L53(c43);
  L284():
    trace_hat1 = ld `trace.hat`;
    check L285() else D82();
  D82():
    deopt 283 [trace_hat1];
  D83():
    deopt 295 [];
  L285():
    trace_hat2 = force? trace_hat1;
    checkMissing(trace_hat2);
    r117 = `==`(trace_hat2, "exact");
    c46 = `as.logical`(r117);
    if c46 then L286() else L55();
  L289():
    p10 = prom<V +>{
      surface3 = ld surface;
      surface4 = force? surface3;
      checkMissing(surface4);
      return surface4;
    };
    p11 = prom<V +>{
      statistics3 = ld statistics;
      statistics4 = force? statistics3;
      checkMissing(statistics4);
      return statistics4;
    };
    r122 = dyn paste[, , sep](p10, p11, "/");
    check L290() else D84();
  D84():
    deopt 300 [r122];
  L55():
    goto L56("2.approx");
  L56(r118):
    st statistics = r118;
    goto L57();
  L286():
    goto L56("1.approx");
  L290():
    st `surf.stat` = r122;
    iterations1 = ld iterations;
    check L291() else D85();
  D85():
    deopt 302 [iterations1];
  L291():
    iterations2 = force? iterations1;
    checkMissing(iterations2);
    r123 = `>`(iterations2, 1);
    st `do.rob` = r123;
    do_rob = ld `do.rob`;
    check L292() else D86();
  D86():
    deopt 307 [do_rob];
  L292():
    do_rob1 = force? do_rob;
    checkMissing(do_rob1);
    r124 = `!`(do_rob1);
    c47 = `as.logical`(r124);
    if c47 then L293() else L58(c47);
  L58(c49):
    c53 = `as.logical`(c49);
    if c53 then L296() else L59();
  L293():
    iterTrace1 = ld iterTrace;
    check L294() else D87();
  D87():
    deopt 310 [c47, iterTrace1];
  L59():
    goto L60();
  L60():
    statistics5 = ld statistics;
    check L300() else D90();
  L294():
    iterTrace2 = force? iterTrace1;
    checkMissing(iterTrace2);
    c50 = `as.logical`(iterTrace2);
    c51 = `&&`(c47, c50);
    goto L58(c51);
  L296():
    warning = ldf warning;
    check L297() else D88();
  D88():
    deopt 314 [];
  D90():
    deopt 322 [statistics5];
  L297():
    p15 = prom<V +>{
      sprintf = ldf sprintf;
      p12 = prom<V +>{
        gettext = ldf gettext;
        r125 = dyn gettext("iterTrace = %d is not obeyed since iterations = %d");
        return r125;
      };
      p13 = prom<V +>{
        iterTrace3 = ld iterTrace;
        iterTrace4 = force? iterTrace3;
        checkMissing(iterTrace4);
        return iterTrace4;
      };
      p14 = prom<V +>{
        iterations3 = ld iterations;
        iterations4 = force? iterations3;
        checkMissing(iterations4);
        return iterations4;
      };
      r129 = dyn sprintf(p12, p13, p14);
      return r129;
    };
    r131 = dyn warning(p15);
    check L298() else D89();
  L300():
    statistics6 = force? statistics5;
    checkMissing(statistics6);
    r133 = `==`(statistics6, "none");
    st `no.st` = r133;
    iterTrace5 = ld iterTrace;
    check L301() else D91();
  D89():
    deopt 316 [r131];
  D91():
    deopt 327 [iterTrace5];
  L298():
    st iterTrace = FALSE;
    goto L60();
  L301():
    iterTrace6 = force? iterTrace5;
    checkMissing(iterTrace6);
    c54 = `as.logical`(iterTrace6);
    if c54 then L302() else L61();
  L61():
    goto L62();
  L62():
    sym16 = ldf seq_len;
    base16 = ldf seq_len in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L304() else L305();
  L302():
    st wRSS = NA_LGL;
    goto L62();
  L63(r136):
    s = toForSeq(r136);
    l3 = length(s);
    i = 0;
    goto L64(i);
  L304():
    iterations5 = ld iterations;
    check L306() else D92();
  L305():
    r135 = dyn base16(<sym iterations>);
    goto L63(r135);
  D92():
    deopt 335 [iterations5];
  L64(i1):
    i2 = `+`.1(i1, 1);
    c55 = `<`.1(l3, i2);
    if c55 then L307() else L101();
  L306():
    iterations6 = force? iterations5;
    checkMissing(iterations6);
    r137 = seq_len(iterations6);
    goto L63(r137);
  L101():
    x18 = `[[`(s, i2, NULL, TRUE);
    st j = x18;
    statistics7 = ld statistics;
    check L308() else D93();
  L307():
    surface7 = ld surface;
    check L478() else D191();
  D93():
    deopt 338 [i2, statistics7];
  D191():
    deopt 641 [surface7];
  L308():
    statistics8 = force? statistics7;
    checkMissing(statistics8);
    r138 = `==`(statistics8, "none");
    st `no.st` = r138;
    sym17 = ldf `.C`;
    base17 = ldf `.C` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L309() else L310();
  L478():
    surface8 = force? surface7;
    checkMissing(surface8);
    r260 = `==`(surface8, "interpolate");
    c77 = `as.logical`(r260);
    if c77 then L479() else L102();
  L65(i7, r140):
    st z = r140;
    z = ld z;
    check L379() else D142();
  L102():
    goto L110();
  L110():
    do_rob4 = ld `do.rob`;
    check L530() else D205();
  L309():
    C_loess_raw = ld C_loess_raw;
    check L311() else D94();
  L310():
    r139 = dyn base17[, , , , , , , , , , , , , , `fitted.values`, parameter, a, xi, vert, vval, diagonal, trL, delta1, delta2, ](<sym C_loess_raw>, <sym y>, <sym x>, <lang if(no.st, 1.0, weights)>, <lang if(no.st, `*`(weights, robust), 1.0)>, <sym D>, <sym N>, <lang as.double(span)>, <lang as.integer(degree)>, <lang as.integer(nonparametric)>, <lang as.integer(order.drop.sqr)>, <lang as.integer(sum.drop.sqr)>, <lang as.double(`*`(span, cell))>, <lang as.character(surf.stat)>, <lang double(N)>, <lang integer(7)>, <lang integer(max.kd)>, <lang double(max.kd)>, <lang double(`*`(2, D))>, <lang double(`*`(`(`(`+`(D, 1)), max.kd))>, <lang double(N)>, <lang double(1)>, <lang double(1)>, <lang double(1)>, <lang as.integer(`==`(surf.stat, "interpolate/exact"))>);
    goto L65(i2, r139);
  L479():
    setNames = ldf setNames;
    check L480() else D192();
  D94():
    deopt 345 [i2, C_loess_raw];
  D142():
    deopt 474 [i7, z];
  D192():
    deopt 646 [];
  D205():
    deopt 708 [do_rob4];
  L311():
    C_loess_raw1 = force? C_loess_raw;
    checkMissing(C_loess_raw1);
    y3 = ld y;
    check L312() else D95();
  L379():
    z1 = force? z;
    checkMissing(z1);
    c58 = `is.object`(z1);
    if c58 then L381() else L382(i7, z1);
  L480():
    p34 = prom<V +>{
      z16 = ld z;
      z17 = force? z16;
      checkMissing(z17);
      c78 = `is.object`(z17);
      if c78 then L1() else L2(z17);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("$", z17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(z19):
      r261 = `$`(z19, <sym parameter>);
      goto L0(r261);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    p35 = prom<V +>{
      sym32 = ldf c;
      base32 = ldf c in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L1() else L2();
    L0(r264):
      return r264;
    L1():
      c79 = ldf c in base;
      r265 = dyn c79("d", "n", "vc", "nc", "nv", "liv", "lv");
      goto L0(r265);
    L2():
      r263 = dyn base32("d", "n", "vc", "nc", "nv", "liv", "lv");
      goto L0(r263);
    };
    r267 = dyn setNames(p34, p35);
    check L481() else D193();
  L530():
    do_rob5 = force? do_rob4;
    checkMissing(do_rob5);
    c90 = `as.logical`(do_rob5);
    if c90 then L531() else L111();
  D95():
    deopt 347 [i2, y3];
  D193():
    deopt 649 [r267];
  L111():
    goto L125();
  L125():
    do_rob6 = ld `do.rob`;
    check L623() else D265();
  L312():
    y4 = force? y3;
    checkMissing(y4);
    x19 = ld x;
    check L313() else D96();
  L380(i41, dx7):
    st fitted = dx7;
    y5 = ld y;
    check L384() else D143();
  L381():
    dr6 = tryDispatchBuiltin.1("$", z1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L383() else L382(i7, dr6);
  L382(i39, z3):
    r190 = `$`(z3, <sym fitted.values>);
    goto L380(i39, r190);
  L481():
    st pars = r267;
    D18 = ld D;
    check L482() else D194();
  L531():
    sym34 = ldf `.Fortran`;
    base34 = ldf `.Fortran` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L532() else L533();
  D96():
    deopt 349 [i2, x19];
  D143():
    deopt 478 [i41, y5];
  D194():
    deopt 651 [D18];
  D265():
    deopt 873 [do_rob6];
  L112(r300):
    c91 = `is.object`(r300);
    if c91 then L555() else L556(r300);
  L313():
    x20 = force? x19;
    checkMissing(x20);
    no_st = ld `no.st`;
    check L314() else D97();
  L383():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L380(i7, dx6);
  L384():
    y6 = force? y5;
    checkMissing(y6);
    fitted = ld fitted;
    check L385() else D144();
  L482():
    D19 = force? D18;
    checkMissing(D19);
    r268 = `+`(D19, 1);
    pars = ld pars;
    check L483() else D195();
  L532():
    C_lowesp = ld C_lowesp;
    check L534() else D206();
  L533():
    r299 = dyn base34[, , , , , , , pseudovalues](<sym C_lowesp>, <sym N>, <lang as.double(y)>, <sym fitted>, <lang as.double(weights)>, <lang as.double(robust)>, <lang integer(N)>, <lang double(N)>);
    goto L112(r299);
  L623():
    do_rob7 = force? do_rob6;
    checkMissing(do_rob7);
    c93 = `as.logical`(do_rob7);
    if c93 then L624() else L126();
  D97():
    deopt 351 [i2, no_st];
  D144():
    deopt 479 [i41, y6, fitted];
  D195():
    deopt 654 [r268, pars];
  D206():
    deopt 712 [C_lowesp];
  L126():
    sym47 = ldf sum;
    base47 = ldf sum in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L631() else L632();
  L128(r372):
    st `sum.squares` = r372;
    one_delta = ld `one.delta`;
    check L636() else D272();
  L314():
    no_st1 = force? no_st;
    checkMissing(no_st1);
    c56 = `as.logical`(no_st1);
    if c56 then L315() else L66();
  L385():
    fitted1 = force? fitted;
    checkMissing(fitted1);
    r191 = `-`(y6, fitted1);
    st `fitted.residuals` = r191;
    j = ld j;
    check L386() else D145();
  L483():
    pars1 = force? pars;
    checkMissing(pars1);
    c80 = `is.object`(pars1);
    if c80 then L484() else L485(r268, pars1);
  L534():
    C_lowesp1 = force? C_lowesp;
    checkMissing(C_lowesp1);
    N26 = ld N;
    check L535() else D207();
  L554(dx54):
    st pseudovalues = dx54;
    sym38 = ldf `.C`;
    base38 = ldf `.C` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L558() else L559();
  L555():
    dr38 = tryDispatchBuiltin.1("$", r300);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L557() else L556(dr38);
  L556(r316):
    r317 = `$`(r316, <sym pseudovalues>);
    goto L554(r317);
  L624():
    sym46 = ldf sum;
    base46 = ldf sum in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L625() else L626();
  D145():
    deopt 483 [i41, j];
  D207():
    deopt 714 [N26];
  D272():
    deopt 896 [one_delta];
  L66():
    weights1 = ld weights;
    check L317() else D98();
  L67(i10, r141):
    no_st2 = ld `no.st`;
    check L318() else D99();
  L103(r272, dx20):
    r274 = `*`(r272, dx20);
    st enough = r274;
    sym33 = ldf list;
    base33 = ldf list in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L487() else L488();
  L116(r319):
    c92 = `is.object`(r319);
    if c92 then L617() else L618(r319);
  L127(r368):
    goto L128(r368);
  L315():
    goto L67(i2, 1.0);
  L386():
    j1 = force? j;
    checkMissing(j1);
    iterations7 = ld iterations;
    check L387() else D146();
  L484():
    dr18 = tryDispatchBuiltin.1("[[", pars1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L486() else L485(r268, dr18);
  L485(r270, pars3):
    __3 = ldf `[[` in base;
    r273 = dyn __3(pars3, "nv");
    goto L103(r270, r273);
  L535():
    N27 = force? N26;
    checkMissing(N27);
    sym35 = ldf `as.double`;
    base35 = ldf `as.double` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L536() else L537();
  L557():
    dx53 = getTryDispatchBuiltinValue(dr38);
    goto L554(dx53);
  L558():
    C_loess_raw2 = ld C_loess_raw;
    check L560() else D220();
  L559():
    r318 = dyn base38[, , , , , , , , , , , , , , fitted, parameter, a, xi, vert, vval, diagonal, trL, delta1, delta2, ](<sym C_loess_raw>, <sym pseudovalues>, <sym x>, <sym weights>, <sym weights>, <sym D>, <sym N>, <lang as.double(span)>, <lang as.integer(degree)>, <lang as.integer(nonparametric)>, <lang as.integer(order.drop.sqr)>, <lang as.integer(sum.drop.sqr)>, <lang as.double(`*`(span, cell))>, <lang as.character(surf.stat)>, <lang double(N)>, <lang integer(7)>, <lang integer(max.kd)>, <lang double(max.kd)>, <lang double(`*`(2, D))>, <lang double(`*`(`(`(`+`(D, 1)), max.kd))>, <lang double(N)>, <lang double(1)>, <lang double(1)>, <lang double(1)>, 0);
    goto L116(r318);
  L625():
    weights13 = ld weights;
    check L627() else D266();
  L626():
    r367 = dyn base46(<lang `*`(weights, `^`(pseudo.resid, 2.0))>);
    goto L127(r367);
  L631():
    weights15 = ld weights;
    check L633() else D269();
  L632():
    r373 = dyn base47(<lang `*`(weights, `^`(fitted.residuals, 2.0))>);
    goto L128(r373);
  L636():
    one_delta1 = force? one_delta;
    checkMissing(one_delta1);
    trace_hat_out = ld `trace.hat.out`;
    check L637() else D273();
  D98():
    deopt 355 [i2, weights1];
  D99():
    deopt 357 [i10, no_st2];
  D146():
    deopt 484 [i41, j1, iterations7];
  D220():
    deopt 751 [C_loess_raw2];
  D266():
    deopt 877 [weights13];
  D269():
    deopt 887 [weights15];
  D273():
    deopt 898 [one_delta1, 2.0, trace_hat_out];
  L104(r276):
    st `fit.kd` = r276;
    goto L110();
  L113(r302):
    fitted2 = ld fitted;
    check L540() else D210();
  L124(dx56):
    st zz = dx56;
    pseudovalues2 = ld pseudovalues;
    check L620() else D263();
  L317():
    weights2 = force? weights1;
    checkMissing(weights2);
    goto L67(i2, weights2);
  L318():
    no_st3 = force? no_st2;
    checkMissing(no_st3);
    c57 = `as.logical`(no_st3);
    if c57 then L319() else L68();
  L387():
    iterations8 = force? iterations7;
    checkMissing(iterations8);
    r192 = `<`(j1, iterations8);
    c59 = `as.logical`(r192);
    if c59 then L388() else L78();
  L486():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L103(r268, dx19);
  L487():
    pars4 = ld pars;
    check L489() else D196();
  L488():
    r275 = dyn base33[parameter, a, xi, vert, vval](<sym pars>, <lang `[`(`$`(z, a), `:`(1, `[`(pars, 4)))>, <lang `[`(`$`(z, xi), `:`(1, `[`(pars, 4)))>, <lang `$`(z, vert)>, <lang `[`(`$`(z, vval), `:`(1, enough))>);
    goto L104(r275);
  L536():
    y7 = ld y;
    check L538() else D208();
  L537():
    r301 = dyn base35(<sym y>);
    goto L113(r301);
  L560():
    C_loess_raw3 = force? C_loess_raw2;
    checkMissing(C_loess_raw3);
    pseudovalues = ld pseudovalues;
    check L561() else D221();
  L617():
    dr40 = tryDispatchBuiltin.1("[[", r319);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L619() else L618(dr40);
  L618(r363):
    __9 = ldf `[[` in base;
    r364 = dyn __9(r363, "fitted");
    goto L124(r364);
  L627():
    weights14 = force? weights13;
    checkMissing(weights14);
    pseudo_resid = ld `pseudo.resid`;
    check L628() else D267();
  L633():
    weights16 = force? weights15;
    checkMissing(weights16);
    fitted_residuals4 = ld `fitted.residuals`;
    check L634() else D270();
  L637():
    trace_hat_out1 = force? trace_hat_out;
    checkMissing(trace_hat_out1);
    r377 = `*`(2.0, trace_hat_out1);
    r378 = `+`(one_delta1, r377);
    N38 = ld N;
    check L638() else D274();
  D196():
    deopt 663 [pars4];
  D208():
    deopt 718 [y7];
  D210():
    deopt 722 [fitted2];
  D221():
    deopt 753 [pseudovalues];
  D263():
    deopt 866 [pseudovalues2];
  D267():
    deopt 878 [weights14, pseudo_resid];
  D270():
    deopt 888 [weights16, fitted_residuals4];
  D274():
    deopt 901 [r378, N38];
  L68():
    goto L69(i10, 1.0);
  L69(i13, r143):
    D12 = ld D;
    check L323() else D102();
  L78():
    goto L82(i41);
  L82(i54):
    j2 = ld j;
    check L408() else D157();
  L319():
    weights3 = ld weights;
    check L320() else D100();
  L388():
    iterTrace7 = ld iterTrace;
    check L389() else D147();
  L489():
    pars5 = force? pars4;
    checkMissing(pars5);
    z20 = ld z;
    check L490() else D197();
  L538():
    y8 = force? y7;
    checkMissing(y8);
    as_double2 = ldf `as.double` in base;
    r303 = dyn as_double2(y8);
    check L539() else D209();
  L540():
    fitted3 = force? fitted2;
    checkMissing(fitted3);
    sym36 = ldf `as.double`;
    base36 = ldf `as.double` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L541() else L542();
  L561():
    pseudovalues1 = force? pseudovalues;
    checkMissing(pseudovalues1);
    x21 = ld x;
    check L562() else D222();
  L619():
    dx55 = getTryDispatchBuiltinValue(dr40);
    goto L124(dx55);
  L620():
    pseudovalues3 = force? pseudovalues2;
    checkMissing(pseudovalues3);
    zz = ld zz;
    check L621() else D264();
  L628():
    pseudo_resid1 = force? pseudo_resid;
    checkMissing(pseudo_resid1);
    r369 = `^`(pseudo_resid1, 2.0);
    r370 = `*`(weights14, r369);
    sum6 = ldf sum in base;
    r371 = dyn sum6(r370);
    check L629() else D268();
  L634():
    fitted_residuals5 = force? fitted_residuals4;
    checkMissing(fitted_residuals5);
    r374 = `^`(fitted_residuals5, 2.0);
    r375 = `*`(weights16, r374);
    sum7 = ldf sum in base;
    r376 = dyn sum7(r375);
    check L635() else D271();
  L638():
    N39 = force? N38;
    checkMissing(N39);
    r379 = `-`(r378, N39);
    st enp = r379;
    sym48 = ldf sqrt;
    base48 = ldf sqrt in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L639() else L640();
  D100():
    deopt 359 [i10, weights3];
  D102():
    deopt 365 [i13, D12];
  D147():
    deopt 487 [i41, iterTrace7];
  D157():
    deopt 517 [i54, j2];
  D197():
    deopt 666 [z20];
  D209():
    deopt 721 [r303];
  D222():
    deopt 755 [x21];
  D264():
    deopt 867 [pseudovalues3, zz];
  D268():
    deopt 884 [r371];
  D271():
    deopt 894 [r376];
  L114(r305):
    sym37 = ldf `as.double`;
    base37 = ldf `as.double` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L545() else L546();
  L129(r381):
    st s = r381;
    structure = ldf structure;
    check L643() else D277();
  L320():
    weights4 = force? weights3;
    checkMissing(weights4);
    robust = ld robust;
    check L321() else D101();
  L323():
    D13 = force? D12;
    checkMissing(D13);
    N14 = ld N;
    check L324() else D103();
  L389():
    iterTrace8 = force? iterTrace7;
    checkMissing(iterTrace8);
    c60 = `as.logical`(iterTrace8);
    if c60 then L390() else L79();
  L408():
    j3 = force? j2;
    checkMissing(j3);
    r203 = `==`(j3, 1.0);
    c62 = `as.logical`(r203);
    if c62 then L409() else L83();
  L490():
    z21 = force? z20;
    checkMissing(z21);
    c81 = `is.object`(z21);
    if c81 then L492() else L493(z21);
  L539():
    goto L113(r303);
  L541():
    weights7 = ld weights;
    check L543() else D211();
  L542():
    r304 = dyn base36(<sym weights>);
    goto L114(r304);
  L562():
    x22 = force? x21;
    checkMissing(x22);
    weights9 = ld weights;
    check L563() else D223();
  L621():
    zz1 = force? zz;
    checkMissing(zz1);
    r365 = `-`(pseudovalues3, zz1);
    st `pseudo.resid` = r365;
    goto L125();
  L629():
    goto L127(r371);
  L635():
    goto L128(r376);
  L639():
    sum_squares = ld `sum.squares`;
    check L641() else D275();
  L640():
    r380 = dyn base48(<lang `/`(sum.squares, one.delta)>);
    goto L129(r380);
  D101():
    deopt 360 [i10, weights4, robust];
  D103():
    deopt 367 [i13, N14];
  D211():
    deopt 726 [weights7];
  D223():
    deopt 757 [weights9];
  D275():
    deopt 906 [sum_squares];
  D277():
    deopt 913 [];
  L79():
    goto L80(i41);
  L80(i46):
    sym26 = ldf `.Fortran`;
    base26 = ldf `.Fortran` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L393() else L394();
  L83():
    goto L86(i54);
  L86(i72):
    iterTrace9 = ld iterTrace;
    check L431() else D164();
  L115(r308):
    integer3 = ldf integer;
    check L549() else D215();
  L321():
    robust1 = force? robust;
    checkMissing(robust1);
    r142 = `*`(weights4, robust1);
    goto L69(i10, r142);
  L324():
    N15 = force? N14;
    checkMissing(N15);
    sym18 = ldf `as.double`;
    base18 = ldf `as.double` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L325() else L326();
  L390():
    robust2 = ld robust;
    check L391() else D148();
  L409():
    z4 = ld z;
    check L410() else D158();
  L491(dx22):
    c82 = `is.object`(dx22);
    if c82 then L495() else L496(dx22);
  L492():
    dr20 = tryDispatchBuiltin.1("$", z21);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L494() else L493(dr20);
  L493(z23):
    r277 = `$`(z23, <sym a>);
    goto L491(r277);
  L543():
    weights8 = force? weights7;
    checkMissing(weights8);
    as_double3 = ldf `as.double` in base;
    r306 = dyn as_double3(weights8);
    check L544() else D212();
  L545():
    robust11 = ld robust;
    check L547() else D213();
  L546():
    r307 = dyn base37(<sym robust>);
    goto L115(r307);
  L563():
    weights10 = force? weights9;
    checkMissing(weights10);
    weights11 = ld weights;
    check L564() else D224();
  L641():
    sum_squares1 = force? sum_squares;
    checkMissing(sum_squares1);
    one_delta2 = ld `one.delta`;
    check L642() else D276();
  L643():
    p44 = prom<V +>{
      sym49 = ldf list;
      base49 = ldf list in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L6() else L7();
    L0(r385):
      return r385;
    L6():
      N40 = ld N;
      N41 = force? N40;
      checkMissing(N41);
      fitted4 = ld fitted;
      fitted5 = force? fitted4;
      checkMissing(fitted5);
      fitted_residuals6 = ld `fitted.residuals`;
      fitted_residuals7 = force? fitted_residuals6;
      checkMissing(fitted_residuals7);
      enp = ld enp;
      enp1 = force? enp;
      checkMissing(enp1);
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      one_delta4 = ld `one.delta`;
      one_delta5 = force? one_delta4;
      checkMissing(one_delta5);
      two_delta = ld `two.delta`;
      two_delta1 = force? two_delta;
      checkMissing(two_delta1);
      trace_hat_out2 = ld `trace.hat.out`;
      trace_hat_out3 = force? trace_hat_out2;
      checkMissing(trace_hat_out3);
      divisor = ld divisor;
      divisor1 = force? divisor;
      checkMissing(divisor1);
      robust13 = ld robust;
      robust14 = force? robust13;
      checkMissing(robust14);
      sym50 = ldf list;
      base50 = ldf list in base;
      guard50 = `==`.4(sym50, base50);
      if guard50 then L8() else L9();
    L7():
      r384 = dyn base49[n, fitted, residuals, enp, s, `one.delta`, `two.delta`, `trace.hat`, divisor, robust, pars, kd](<sym N>, <sym fitted>, <sym fitted.residuals>, <sym enp>, <sym s>, <sym one.delta>, <sym two.delta>, <sym trace.hat.out>, <sym divisor>, <sym robust>, <lang list(span=span, degree=degree, normalize=normalize, parametric=parametric, drop.square=drop.square, surface=surface, cell=cell, family=if(`<=`(iterations, 1), "gaussian", "symmetric"), trace.hat=trace.hat, iterations=iterations)>, <lang if(`==`(surface, "interpolate"), fit.kd)>);
      goto L0(r384);
    L1(r387):
      surface11 = ld surface;
      surface12 = force? surface11;
      checkMissing(surface12);
      r391 = `==`(surface12, "interpolate");
      c95 = `as.logical`(r391);
      if c95 then L12() else L4();
    L8():
      span11 = ld span;
      span12 = force? span11;
      checkMissing(span12);
      degree9 = ld degree;
      degree10 = force? degree9;
      checkMissing(degree10);
      normalize3 = ld normalize;
      normalize4 = force? normalize3;
      checkMissing(normalize4);
      parametric7 = ld parametric;
      parametric8 = force? parametric7;
      checkMissing(parametric8);
      drop_square5 = ld `drop.square`;
      drop_square6 = force? drop_square5;
      checkMissing(drop_square6);
      surface9 = ld surface;
      surface10 = force? surface9;
      checkMissing(surface10);
      cell7 = ld cell;
      cell8 = force? cell7;
      checkMissing(cell8);
      iterations13 = ld iterations;
      iterations14 = force? iterations13;
      checkMissing(iterations14);
      r388 = `<=`(iterations14, 1);
      c94 = `as.logical`(r388);
      if c94 then L10() else L2();
    L9():
      r386 = dyn base50[span, degree, normalize, parametric, `drop.square`, surface, cell, family, `trace.hat`, iterations](<sym span>, <sym degree>, <sym normalize>, <sym parametric>, <sym drop.square>, <sym surface>, <sym cell>, <lang if(`<=`(iterations, 1), "gaussian", "symmetric")>, <sym trace.hat>, <sym iterations>);
      goto L1(r386);
    L2():
      goto L3("symmetric");
    L3(r389):
      trace_hat3 = ld `trace.hat`;
      trace_hat4 = force? trace_hat3;
      checkMissing(trace_hat4);
      iterations15 = ld iterations;
      iterations16 = force? iterations15;
      checkMissing(iterations16);
      list1 = ldf list in base;
      r390 = dyn list1(span12, degree10, normalize4, parametric8, drop_square6, surface10, cell8, r389, trace_hat4, iterations16);
      goto L1(r390);
    L4():
      goto L5(NULL);
    L5(fit_kd2):
      list2 = ldf list in base;
      r392 = dyn list2(N41, fitted5, fitted_residuals7, enp1, s2, one_delta5, two_delta1, trace_hat_out3, divisor1, robust14, r387, fit_kd2);
      goto L0(r392);
    L10():
      goto L3("gaussian");
    L12():
      fit_kd = ld `fit.kd`;
      fit_kd1 = force? fit_kd;
      checkMissing(fit_kd1);
      goto L5(fit_kd1);
    };
    r394 = dyn structure[class, ]("loess", p44);
    check L644() else D278();
  D148():
    deopt 489 [i41, robust2];
  D158():
    deopt 521 [i54, z4];
  D164():
    deopt 553 [i72, iterTrace9];
  D212():
    deopt 729 [r306];
  D213():
    deopt 732 [robust11];
  D215():
    deopt 737 [];
  D224():
    deopt 759 [weights11];
  D276():
    deopt 907 [sum_squares1, one_delta2];
  D278():
    deopt 917 [r394];
  L70(i16, r145):
    sym19 = ldf `as.integer`;
    base19 = ldf `as.integer` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L329() else L330();
  L81(i49, r194):
    c61 = `is.object`(r194);
    if c61 then L404() else L405(i49, r194);
  L105(dx26):
    z24 = ld z;
    check L502() else D199();
  L325():
    span3 = ld span;
    check L327() else D104();
  L326():
    r144 = dyn base18(<sym span>);
    goto L70(i13, r144);
  L391():
    robust3 = force? robust2;
    checkMissing(robust3);
    st `old.rob` = robust3;
    goto L80(i41);
  L393():
    C_lowesw = ld C_lowesw;
    check L395() else D149();
  L394():
    r193 = dyn base26[, , , robust, ](<sym C_lowesw>, <sym fitted.residuals>, <sym N>, <lang double(N)>, <lang integer(N)>);
    goto L81(i46, r193);
  L410():
    z5 = force? z4;
    checkMissing(z5);
    c63 = `is.object`(z5);
    if c63 then L412() else L413(i54, z5);
  L431():
    iterTrace10 = force? iterTrace9;
    checkMissing(iterTrace10);
    c67 = `as.logical`(iterTrace10);
    if c67 then L432() else L87();
  L494():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L491(dx21);
  L495():
    dr22 = tryDispatchBuiltin.1("[", dx22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L497() else L496(dr22);
  L496(dx24):
    pars6 = ld pars;
    check L498() else D198();
  L544():
    goto L114(r306);
  L547():
    robust12 = force? robust11;
    checkMissing(robust12);
    as_double4 = ldf `as.double` in base;
    r309 = dyn as_double4(robust12);
    check L548() else D214();
  L549():
    p36 = prom<V +>{
      N28 = ld N;
      N29 = force? N28;
      checkMissing(N29);
      return N29;
    };
    r311 = dyn integer3(p36);
    check L550() else D216();
  L564():
    weights12 = force? weights11;
    checkMissing(weights12);
    D20 = ld D;
    check L565() else D225();
  L642():
    one_delta3 = force? one_delta2;
    checkMissing(one_delta3);
    r382 = `/`(sum_squares1, one_delta3);
    r383 = sqrt(r382);
    goto L129(r383);
  L644():
    popenv;
    return r394;
  D104():
    deopt 371 [i13, span3];
  D149():
    deopt 496 [i46, C_lowesw];
  D198():
    deopt 670 [dx24, 1, pars6];
  D199():
    deopt 678 [z24];
  D214():
    deopt 735 [r309];
  D216():
    deopt 739 [r311];
  D225():
    deopt 761 [D20];
  L71(i19, r148):
    sym20 = ldf `as.integer`;
    base20 = ldf `as.integer` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L333() else L334();
  L87():
    goto L100(i72);
  L100(i102):
    goto L64(i102);
  L327():
    span4 = force? span3;
    checkMissing(span4);
    as_double = ldf `as.double` in base;
    r146 = dyn as_double(span4);
    check L328() else D105();
  L329():
    degree5 = ld degree;
    check L331() else D106();
  L330():
    r147 = dyn base19(<sym degree>);
    goto L71(i16, r147);
  L395():
    C_lowesw1 = force? C_lowesw;
    checkMissing(C_lowesw1);
    fitted_residuals = ld `fitted.residuals`;
    check L396() else D150();
  L403(i53, dx9):
    st robust = dx9;
    goto L82(i53);
  L404():
    dr8 = tryDispatchBuiltin.1("$", r194);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L406() else L405(i49, dr8);
  L405(i51, r201):
    r202 = `$`(r201, <sym robust>);
    goto L403(i51, r202);
  L411(i60, dx12):
    st `trace.hat.out` = dx12;
    z8 = ld z;
    check L415() else D159();
  L412():
    dr10 = tryDispatchBuiltin.1("$", z5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L414() else L413(i54, dr10);
  L413(i58, z7):
    r204 = `$`(z7, <sym trL>);
    goto L411(i58, r204);
  L432():
    wRSS = ld wRSS;
    check L433() else D165();
  L497():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L105(dx25);
  L498():
    pars7 = force? pars6;
    checkMissing(pars7);
    c83 = `is.object`(pars7);
    if c83 then L499() else L500(dx24, 1, pars7);
  L502():
    z25 = force? z24;
    checkMissing(z25);
    c84 = `is.object`(z25);
    if c84 then L504() else L505(z25);
  L548():
    goto L115(r309);
  L550():
    double9 = ldf double;
    check L551() else D217();
  L565():
    D21 = force? D20;
    checkMissing(D21);
    N32 = ld N;
    check L566() else D226();
  D105():
    deopt 374 [i13, r146];
  D106():
    deopt 377 [i16, degree5];
  D150():
    deopt 498 [i46, fitted_residuals];
  D159():
    deopt 525 [i60, z8];
  D165():
    deopt 555 [i72, wRSS];
  D217():
    deopt 741 [];
  D226():
    deopt 763 [N32];
  L72(i22, r151):
    sym21 = ldf `as.integer`;
    base21 = ldf `as.integer` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L337() else L338();
  L106(dx31, r281, dx32):
    r283 = `:`(r281, dx32);
    __5 = ldf `[` in base;
    r284 = dyn __5(dx31, r283);
    goto L105(r284);
  L328():
    goto L70(i13, r146);
  L331():
    degree6 = force? degree5;
    checkMissing(degree6);
    as_integer2 = ldf `as.integer` in base;
    r149 = dyn as_integer2(degree6);
    check L332() else D107();
  L333():
    nonparametric = ld nonparametric;
    check L335() else D108();
  L334():
    r150 = dyn base20(<sym nonparametric>);
    goto L72(i19, r150);
  L396():
    fitted_residuals1 = force? fitted_residuals;
    checkMissing(fitted_residuals1);
    N20 = ld N;
    check L397() else D151();
  L406():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L403(i49, dx8);
  L414():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L411(i54, dx11);
  L415():
    z9 = force? z8;
    checkMissing(z9);
    c64 = `is.object`(z9);
    if c64 then L417() else L418(i60, z9);
  L433():
    wRSS1 = force? wRSS;
    checkMissing(wRSS1);
    st oSS = wRSS1;
    sym27 = ldf sum;
    base27 = ldf sum in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L434() else L435();
  L499():
    dr24 = tryDispatchBuiltin.1("[", pars7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L501() else L500(dx24, 1, dr24);
  L500(dx28, r279, pars9):
    __4 = ldf `[` in base;
    r282 = dyn __4(pars9, 4);
    goto L106(dx28, r279, r282);
  L503(dx34):
    c85 = `is.object`(dx34);
    if c85 then L507() else L508(dx34);
  L504():
    dr26 = tryDispatchBuiltin.1("$", z25);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L506() else L505(dr26);
  L505(z27):
    r285 = `$`(z27, <sym xi>);
    goto L503(r285);
  L551():
    p37 = prom<V +>{
      N30 = ld N;
      N31 = force? N30;
      checkMissing(N31);
      return N31;
    };
    r313 = dyn double9(p37);
    check L552() else D218();
  L566():
    N33 = force? N32;
    checkMissing(N33);
    sym39 = ldf `as.double`;
    base39 = ldf `as.double` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L567() else L568();
  D107():
    deopt 380 [i16, r149];
  D108():
    deopt 383 [i19, nonparametric];
  D151():
    deopt 500 [i46, N20];
  D218():
    deopt 743 [r313];
  L73(i25, r154):
    sym22 = ldf `as.integer`;
    base22 = ldf `as.integer` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L341() else L342();
  L88(i77, r213):
    st wRSS = r213;
    sym28 = ldf abs;
    base28 = ldf abs in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L439() else L440();
  L107(dx38):
    z28 = ld z;
    check L514() else D201();
  L117(r321):
    sym40 = ldf `as.integer`;
    base40 = ldf `as.integer` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L571() else L572();
  L332():
    goto L71(i16, r149);
  L335():
    nonparametric1 = force? nonparametric;
    checkMissing(nonparametric1);
    as_integer3 = ldf `as.integer` in base;
    r152 = dyn as_integer3(nonparametric1);
    check L336() else D109();
  L337():
    order_drop_sqr = ld `order.drop.sqr`;
    check L339() else D110();
  L338():
    r153 = dyn base21(<sym order.drop.sqr>);
    goto L73(i22, r153);
  L397():
    N21 = force? N20;
    checkMissing(N21);
    double8 = ldf double;
    check L398() else D152();
  L416(i64, dx14):
    st `one.delta` = dx14;
    z12 = ld z;
    check L420() else D160();
  L417():
    dr12 = tryDispatchBuiltin.1("$", z9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L419() else L418(i60, dr12);
  L418(i62, z11):
    r205 = `$`(z11, <sym delta1>);
    goto L416(i62, r205);
  L434():
    weights5 = ld weights;
    check L436() else D166();
  L435():
    r212 = dyn base27(<lang `*`(weights, `^`(fitted.residuals, 2.0))>);
    goto L88(i72, r212);
  L501():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L106(dx24, 1, dx30);
  L506():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L503(dx33);
  L507():
    dr28 = tryDispatchBuiltin.1("[", dx34);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L509() else L508(dr28);
  L508(dx36):
    pars10 = ld pars;
    check L510() else D200();
  L552():
    _Fortran1 = ldf `.Fortran` in base;
    r314 = dyn _Fortran1(C_lowesp1, N27, r302, fitted3, r305, r308, r311, r313);
    check L553() else D219();
  L567():
    span7 = ld span;
    check L569() else D227();
  L568():
    r320 = dyn base39(<sym span>);
    goto L117(r320);
  D109():
    deopt 386 [i19, r152];
  D110():
    deopt 389 [i22, order_drop_sqr];
  D152():
    deopt 503 [i46];
  D160():
    deopt 529 [i64, z12];
  D166():
    deopt 560 [i72, weights5];
  D200():
    deopt 682 [dx36, 1, pars10];
  D201():
    deopt 690 [z28];
  D219():
    deopt 746 [r314];
  D227():
    deopt 767 [span7];
  L74(i28, r157):
    sym23 = ldf `as.double`;
    base23 = ldf `as.double` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L345() else L346();
  L89(i80, r218):
    wRSS4 = ld wRSS;
    check L444() else D172();
  L118(r324):
    sym41 = ldf `as.integer`;
    base41 = ldf `as.integer` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L575() else L576();
  L336():
    goto L72(i19, r152);
  L339():
    order_drop_sqr1 = force? order_drop_sqr;
    checkMissing(order_drop_sqr1);
    as_integer4 = ldf `as.integer` in base;
    r155 = dyn as_integer4(order_drop_sqr1);
    check L340() else D111();
  L341():
    sum_drop_sqr4 = ld `sum.drop.sqr`;
    check L343() else D112();
  L342():
    r156 = dyn base22(<sym sum.drop.sqr>);
    goto L74(i25, r156);
  L398():
    p22 = prom<V +>{
      N22 = ld N;
      N23 = force? N22;
      checkMissing(N23);
      return N23;
    };
    r196 = dyn double8(p22);
    check L399() else D153();
  L419():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L416(i60, dx13);
  L420():
    z13 = force? z12;
    checkMissing(z13);
    c65 = `is.object`(z13);
    if c65 then L422() else L423(i64, z13);
  L436():
    weights6 = force? weights5;
    checkMissing(weights6);
    fitted_residuals2 = ld `fitted.residuals`;
    check L437() else D167();
  L439():
    oSS = ld oSS;
    check L441() else D169();
  L440():
    r217 = dyn base28(<lang `-`(oSS, wRSS)>);
    goto L89(i77, r217);
  L509():
    dx37 = getTryDispatchBuiltinValue(dr28);
    goto L107(dx37);
  L510():
    pars11 = force? pars10;
    checkMissing(pars11);
    c86 = `is.object`(pars11);
    if c86 then L511() else L512(dx36, 1, pars11);
  L514():
    z29 = force? z28;
    checkMissing(z29);
    c87 = `is.object`(z29);
    if c87 then L516() else L517(z29);
  L553():
    goto L112(r314);
  L569():
    span8 = force? span7;
    checkMissing(span8);
    as_double5 = ldf `as.double` in base;
    r322 = dyn as_double5(span8);
    check L570() else D228();
  L571():
    degree7 = ld degree;
    check L573() else D229();
  L572():
    r323 = dyn base40(<sym degree>);
    goto L118(r323);
  D111():
    deopt 392 [i22, r155];
  D112():
    deopt 395 [i25, sum_drop_sqr4];
  D153():
    deopt 505 [i46, r196];
  D167():
    deopt 561 [i72, weights6, fitted_residuals2];
  D169():
    deopt 571 [i77, oSS];
  D172():
    deopt 576 [i80, r218, wRSS4];
  D228():
    deopt 770 [r322];
  D229():
    deopt 773 [degree7];
  L75(i31, r160):
    sym24 = ldf `as.character`;
    base24 = ldf `as.character` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L350() else L351();
  L108(dx43, r289, dx44):
    r291 = `:`(r289, dx44);
    __7 = ldf `[` in base;
    r292 = dyn __7(dx43, r291);
    goto L107(r292);
  L119(r327):
    sym42 = ldf `as.integer`;
    base42 = ldf `as.integer` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L579() else L580();
  L340():
    goto L73(i22, r155);
  L343():
    sum_drop_sqr5 = force? sum_drop_sqr4;
    checkMissing(sum_drop_sqr5);
    as_integer5 = ldf `as.integer` in base;
    r158 = dyn as_integer5(sum_drop_sqr5);
    check L344() else D113();
  L345():
    span5 = ld span;
    check L347() else D114();
  L346():
    r159 = dyn base23(<lang `*`(span, cell)>);
    goto L75(i28, r159);
  L399():
    integer2 = ldf integer;
    check L400() else D154();
  L421(i68, dx16):
    st `two.delta` = dx16;
    do_rob2 = ld `do.rob`;
    check L425() else D161();
  L422():
    dr14 = tryDispatchBuiltin.1("$", z13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L424() else L423(i64, dr14);
  L423(i66, z15):
    r206 = `$`(z15, <sym delta2>);
    goto L421(i66, r206);
  L437():
    fitted_residuals3 = force? fitted_residuals2;
    checkMissing(fitted_residuals3);
    r214 = `^`(fitted_residuals3, 2.0);
    r215 = `*`(weights6, r214);
    sum3 = ldf sum in base;
    r216 = dyn sum3(r215);
    check L438() else D168();
  L441():
    oSS1 = force? oSS;
    checkMissing(oSS1);
    wRSS2 = ld wRSS;
    check L442() else D170();
  L444():
    wRSS5 = force? wRSS4;
    checkMissing(wRSS5);
    r221 = `==`(wRSS5, 0.0);
    c68 = `as.logical`(r221);
    if c68 then L445() else L90();
  L511():
    dr30 = tryDispatchBuiltin.1("[", pars11);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L513() else L512(dx36, 1, dr30);
  L512(dx40, r287, pars13):
    __6 = ldf `[` in base;
    r290 = dyn __6(pars13, 4);
    goto L108(dx40, r287, r290);
  L515(dx46):
    z32 = ld z;
    check L519() else D202();
  L516():
    dr32 = tryDispatchBuiltin.1("$", z29);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L518() else L517(dr32);
  L517(z31):
    r293 = `$`(z31, <sym vert>);
    goto L515(r293);
  L570():
    goto L117(r322);
  L573():
    degree8 = force? degree7;
    checkMissing(degree8);
    as_integer7 = ldf `as.integer` in base;
    r325 = dyn as_integer7(degree8);
    check L574() else D230();
  L575():
    nonparametric2 = ld nonparametric;
    check L577() else D231();
  L576():
    r326 = dyn base41(<sym nonparametric>);
    goto L119(r326);
  D113():
    deopt 398 [i25, r158];
  D114():
    deopt 401 [i28, span5];
  D154():
    deopt 508 [i46];
  D161():
    deopt 533 [i68, do_rob2];
  D168():
    deopt 567 [i72, r216];
  D170():
    deopt 572 [i77, oSS1, wRSS2];
  D202():
    deopt 694 [z32];
  D230():
    deopt 776 [r325];
  D231():
    deopt 779 [nonparametric2];
  L76(i34, r164):
    double = ldf double;
    check L354() else D119();
  L90():
    wRSS6 = ld wRSS;
    check L447() else D173();
  L91(i83, r224, r225):
    r226 = `/`(r224, r225);
    st `del.SS` = r226;
    j4 = ld j;
    check L448() else D174();
  L120(r330):
    sym43 = ldf `as.integer`;
    base43 = ldf `as.integer` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L583() else L584();
  L344():
    goto L74(i25, r158);
  L347():
    span6 = force? span5;
    checkMissing(span6);
    cell3 = ld cell;
    check L348() else D115();
  L350():
    surf_stat = ld `surf.stat`;
    check L352() else D117();
  L351():
    r163 = dyn base24(<sym surf.stat>);
    goto L76(i31, r163);
  L400():
    p23 = prom<V +>{
      N24 = ld N;
      N25 = force? N24;
      checkMissing(N25);
      return N25;
    };
    r198 = dyn integer2(p23);
    check L401() else D155();
  L424():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L421(i64, dx15);
  L425():
    do_rob3 = force? do_rob2;
    checkMissing(do_rob3);
    c66 = `as.logical`(do_rob3);
    if c66 then L426() else L84();
  L438():
    goto L88(i72, r216);
  L442():
    wRSS3 = force? wRSS2;
    checkMissing(wRSS3);
    r219 = `-`(oSS1, wRSS3);
    abs = ldf abs in base;
    r220 = dyn abs(r219);
    check L443() else D171();
  L445():
    goto L91(i80, r218, 1.0);
  L513():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L108(dx36, 1, dx42);
  L518():
    dx45 = getTryDispatchBuiltinValue(dr32);
    goto L515(dx45);
  L519():
    z33 = force? z32;
    checkMissing(z33);
    c88 = `is.object`(z33);
    if c88 then L521() else L522(z33);
  L574():
    goto L118(r325);
  L577():
    nonparametric3 = force? nonparametric2;
    checkMissing(nonparametric3);
    as_integer8 = ldf `as.integer` in base;
    r328 = dyn as_integer8(nonparametric3);
    check L578() else D232();
  L579():
    order_drop_sqr2 = ld `order.drop.sqr`;
    check L581() else D233();
  L580():
    r329 = dyn base42(<sym order.drop.sqr>);
    goto L120(r329);
  D115():
    deopt 402 [i28, span6, cell3];
  D117():
    deopt 409 [i31, surf_stat];
  D119():
    deopt 414 [i34];
  D155():
    deopt 510 [i46, r198];
  D171():
    deopt 576 [i77, r220];
  D173():
    deopt 582 [i80, r218, wRSS6];
  D174():
    deopt 586 [i83, j4];
  D232():
    deopt 782 [r328];
  D233():
    deopt 785 [order_drop_sqr2];
  L84():
    goto L85(i68, NULL);
  L85(i71, r210):
    goto L86(i71);
  L121(r333):
    sym44 = ldf `as.double`;
    base44 = ldf `as.double` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L587() else L588();
  L348():
    cell4 = force? cell3;
    checkMissing(cell4);
    r161 = `*`(span6, cell4);
    as_double1 = ldf `as.double` in base;
    r162 = dyn as_double1(r161);
    check L349() else D116();
  L352():
    surf_stat1 = force? surf_stat;
    checkMissing(surf_stat1);
    as_character = ldf `as.character` in base;
    r165 = dyn as_character(surf_stat1);
    check L353() else D118();
  L354():
    p16 = prom<V +>{
      N16 = ld N;
      N17 = force? N16;
      checkMissing(N17);
      return N17;
    };
    r167 = dyn double(p16);
    check L355() else D120();
  L401():
    _Fortran = ldf `.Fortran` in base;
    r199 = dyn _Fortran(C_lowesw1, fitted_residuals1, N21, r196, r198);
    check L402() else D156();
  L426():
    st statistics = "none";
    paste1 = ldf paste;
    check L427() else D162();
  L443():
    goto L89(i77, r220);
  L447():
    wRSS7 = force? wRSS6;
    checkMissing(wRSS7);
    goto L91(i80, r218, wRSS7);
  L448():
    j5 = force? j4;
    checkMissing(j5);
    iterations9 = ld iterations;
    check L449() else D175();
  L520(dx48):
    c89 = `is.object`(dx48);
    if c89 then L524() else L525(dx48);
  L521():
    dr34 = tryDispatchBuiltin.1("$", z33);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L523() else L522(dr34);
  L522(z35):
    r294 = `$`(z35, <sym vval>);
    goto L520(r294);
  L578():
    goto L119(r328);
  L581():
    order_drop_sqr3 = force? order_drop_sqr2;
    checkMissing(order_drop_sqr3);
    as_integer9 = ldf `as.integer` in base;
    r331 = dyn as_integer9(order_drop_sqr3);
    check L582() else D234();
  L583():
    sum_drop_sqr6 = ld `sum.drop.sqr`;
    check L585() else D235();
  L584():
    r332 = dyn base43(<sym sum.drop.sqr>);
    goto L121(r332);
  D116():
    deopt 406 [i28, r162];
  D118():
    deopt 412 [i31, r165];
  D120():
    deopt 416 [i34, r167];
  D156():
    deopt 512 [i46, r199];
  D162():
    deopt 539 [i68];
  D175():
    deopt 587 [i83, j5, iterations9];
  D234():
    deopt 788 [r331];
  D235():
    deopt 791 [sum_drop_sqr6];
  L109(dx52):
    list = ldf list in base;
    r297 = dyn list(pars5, dx26, dx38, dx46, dx52);
    check L528() else D204();
  L122(r336):
    sym45 = ldf `as.character`;
    base45 = ldf `as.character` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L592() else L593();
  L349():
    goto L75(i28, r162);
  L353():
    goto L76(i31, r165);
  L355():
    integer = ldf integer;
    check L356() else D121();
  L402():
    goto L81(i46, r199);
  L427():
    p24 = prom<V +>{
      surface5 = ld surface;
      surface6 = force? surface5;
      checkMissing(surface6);
      return surface6;
    };
    p25 = prom<V +>{
      statistics9 = ld statistics;
      statistics10 = force? statistics9;
      checkMissing(statistics10);
      return statistics10;
    };
    r209 = dyn paste1[, , sep](p24, p25, "/");
    check L428() else D163();
  L449():
    iterations10 = force? iterations9;
    checkMissing(iterations10);
    r227 = `<`(j5, iterations10);
    c69 = `as.logical`(r227);
    if c69 then L450() else L92();
  L523():
    dx47 = getTryDispatchBuiltinValue(dr34);
    goto L520(dx47);
  L524():
    dr36 = tryDispatchBuiltin.1("[", dx48);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L526() else L525(dr36);
  L525(dx50):
    enough = ld enough;
    check L527() else D203();
  L582():
    goto L120(r331);
  L585():
    sum_drop_sqr7 = force? sum_drop_sqr6;
    checkMissing(sum_drop_sqr7);
    as_integer10 = ldf `as.integer` in base;
    r334 = dyn as_integer10(sum_drop_sqr7);
    check L586() else D236();
  L587():
    span9 = ld span;
    check L589() else D237();
  L588():
    r335 = dyn base44(<lang `*`(span, cell)>);
    goto L122(r335);
  D121():
    deopt 419 [i34];
  D163():
    deopt 544 [i68, r209];
  D203():
    deopt 698 [dx50, 1, enough];
  D204():
    deopt 704 [r297];
  D236():
    deopt 794 [r334];
  D237():
    deopt 797 [span9];
  L92():
    goto L96(i83, NA_LGL);
  L96(i95, r242):
    st `d.rob.w` = r242;
    cat = ldf cat;
    check L464() else D182();
  L123(r340):
    double10 = ldf double;
    check L596() else D242();
  L356():
    r168 = dyn integer(7);
    check L357() else D122();
  L428():
    st `surf.stat` = r209;
    st `no.st` = TRUE;
    goto L85(i68, TRUE);
  L450():
    sym29 = ldf sum;
    base29 = ldf sum in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L451() else L452();
  L526():
    dx51 = getTryDispatchBuiltinValue(dr36);
    goto L109(dx51);
  L527():
    enough1 = force? enough;
    checkMissing(enough1);
    r295 = `:`(1, enough1);
    __8 = ldf `[` in base;
    r296 = dyn __8(dx50, r295);
    goto L109(r296);
  L528():
    goto L104(r297);
  L586():
    goto L121(r334);
  L589():
    span10 = force? span9;
    checkMissing(span10);
    cell5 = ld cell;
    check L590() else D238();
  L592():
    surf_stat4 = ld `surf.stat`;
    check L594() else D240();
  L593():
    r339 = dyn base45(<sym surf.stat>);
    goto L123(r339);
  D122():
    deopt 421 [i34, r168];
  D182():
    deopt 612 [i95];
  D238():
    deopt 798 [span10, cell5];
  D240():
    deopt 805 [surf_stat4];
  D242():
    deopt 810 [];
  L93(i88, r229):
    sym31 = ldf sum;
    base31 = ldf sum in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L459() else L460();
  L357():
    integer1 = ldf integer;
    check L358() else D123();
  L451():
    sym30 = ldf abs;
    base30 = ldf abs in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L453() else L454();
  L452():
    r228 = dyn base29(<lang abs(`-`(old.rob, robust))>);
    goto L93(i83, r228);
  L464():
    p30 = prom<V +>{
      sprintf1 = ldf sprintf;
      p26 = prom<V +>{
        j6 = ld j;
        j7 = force? j6;
        checkMissing(j7);
        return j7;
      };
      p27 = prom<V +>{
        wRSS8 = ld wRSS;
        wRSS9 = force? wRSS8;
        checkMissing(wRSS9);
        return wRSS9;
      };
      p28 = prom<V +>{
        del_SS = ld `del.SS`;
        del_SS1 = force? del_SS;
        checkMissing(del_SS1);
        return del_SS1;
      };
      p29 = prom<V +>{
        d_rob_w = ld `d.rob.w`;
        d_rob_w1 = force? d_rob_w;
        checkMissing(d_rob_w1);
        return d_rob_w1;
      };
      r247 = dyn sprintf1("iter.%2d: wRSS=%#14.9g, rel. changes: (SS=%#9.4g, rob.wgts=%#9.4g)\n", p26, p27, p28, p29);
      return r247;
    };
    r249 = dyn cat(p30);
    check L465() else D183();
  L590():
    cell6 = force? cell5;
    checkMissing(cell6);
    r337 = `*`(span10, cell6);
    as_double6 = ldf `as.double` in base;
    r338 = dyn as_double6(r337);
    check L591() else D239();
  L594():
    surf_stat5 = force? surf_stat4;
    checkMissing(surf_stat5);
    as_character1 = ldf `as.character` in base;
    r341 = dyn as_character1(surf_stat5);
    check L595() else D241();
  L596():
    p38 = prom<V +>{
      N34 = ld N;
      N35 = force? N34;
      checkMissing(N35);
      return N35;
    };
    r343 = dyn double10(p38);
    check L597() else D243();
  D123():
    deopt 424 [i34];
  D183():
    deopt 614 [i95, r249];
  D239():
    deopt 802 [r338];
  D241():
    deopt 808 [r341];
  D243():
    deopt 812 [r343];
  L94(i91, r231):
    sum4 = ldf sum in base;
    r234 = dyn sum4(r231);
    check L458() else D179();
  L95(i94, r238, r239):
    r241 = `/`(r238, r239);
    goto L96(i94, r241);
  L358():
    p17 = prom<V +>{
      max_kd = ld `max.kd`;
      max_kd1 = force? max_kd;
      checkMissing(max_kd1);
      return max_kd1;
    };
    r170 = dyn integer1(p17);
    check L359() else D124();
  L453():
    old_rob = ld `old.rob`;
    check L455() else D176();
  L454():
    r230 = dyn base30(<lang `-`(old.rob, robust)>);
    goto L94(i83, r230);
  L459():
    robust7 = ld robust;
    check L461() else D180();
  L460():
    r237 = dyn base31(<sym robust>);
    goto L95(i88, r229, r237);
  L465():
    iterTrace11 = ld iterTrace;
    check L466() else D184();
  L591():
    goto L122(r338);
  L595():
    goto L123(r341);
  L597():
    integer4 = ldf integer;
    check L598() else D244();
  D124():
    deopt 426 [i34, r170];
  D176():
    deopt 594 [i83, old_rob];
  D179():
    deopt 601 [i91, r234];
  D180():
    deopt 603 [i88, r229, robust7];
  D184():
    deopt 615 [i95, iterTrace11];
  D244():
    deopt 815 [];
  L359():
    double1 = ldf double;
    check L360() else D125();
  L455():
    old_rob1 = force? old_rob;
    checkMissing(old_rob1);
    robust5 = ld robust;
    check L456() else D177();
  L458():
    goto L93(i91, r234);
  L461():
    robust8 = force? robust7;
    checkMissing(robust8);
    sum5 = ldf sum in base;
    r240 = dyn sum5(robust8);
    check L462() else D181();
  L466():
    iterTrace12 = force? iterTrace11;
    checkMissing(iterTrace12);
    r250 = `>=`(iterTrace12, 2.0);
    c70 = `as.logical`(r250);
    if c70 then L467() else L97(i95, c70);
  L598():
    r344 = dyn integer4(7);
    check L599() else D245();
  D125():
    deopt 429 [i34];
  D177():
    deopt 595 [i83, old_rob1, robust5];
  D181():
    deopt 606 [i88, r229, r240];
  D245():
    deopt 817 [r344];
  L97(i97, c72):
    c76 = `as.logical`(c72);
    if c76 then L471() else L98();
  L360():
    p18 = prom<V +>{
      max_kd2 = ld `max.kd`;
      max_kd3 = force? max_kd2;
      checkMissing(max_kd3);
      return max_kd3;
    };
    r172 = dyn double1(p18);
    check L361() else D126();
  L456():
    robust6 = force? robust5;
    checkMissing(robust6);
    r232 = `-`(old_rob1, robust6);
    abs1 = ldf abs in base;
    r233 = dyn abs1(r232);
    check L457() else D178();
  L462():
    goto L95(i88, r229, r240);
  L467():
    j8 = ld j;
    check L468() else D185();
  L599():
    integer5 = ldf integer;
    check L600() else D246();
  D126():
    deopt 431 [i34, r172];
  D178():
    deopt 599 [i83, r233];
  D185():
    deopt 619 [i95, c70, j8];
  D246():
    deopt 820 [];
  L98():
    goto L99(i97, NULL);
  L99(i101, r258):
    goto L100(i101);
  L361():
    double2 = ldf double;
    check L362() else D127();
  L457():
    goto L94(i83, r233);
  L468():
    j9 = force? j8;
    checkMissing(j9);
    iterations11 = ld iterations;
    check L469() else D186();
  L471():
    cat1 = ldf cat;
    check L472() else D187();
  L600():
    p39 = prom<V +>{
      max_kd6 = ld `max.kd`;
      max_kd7 = force? max_kd6;
      checkMissing(max_kd7);
      return max_kd7;
    };
    r346 = dyn integer5(p39);
    check L601() else D247();
  D127():
    deopt 434 [i34];
  D186():
    deopt 620 [i95, c70, j9, iterations11];
  D187():
    deopt 625 [i97];
  D247():
    deopt 822 [r346];
  L362():
    p19 = prom<V +>{
      D14 = ld D;
      D15 = force? D14;
      checkMissing(D15);
      r173 = `*`(2, D15);
      return r173;
    };
    r175 = dyn double2(p19);
    check L363() else D128();
  L469():
    iterations12 = force? iterations11;
    checkMissing(iterations12);
    r251 = `<`(j9, iterations12);
    c73 = `as.logical`(r251);
    c74 = `&&`(c70, c73);
    goto L97(i95, c74);
  L472():
    r252 = dyn cat1("robustness weights:\n");
    check L473() else D188();
  L601():
    double11 = ldf double;
    check L602() else D248();
  D128():
    deopt 436 [i34, r175];
  D188():
    deopt 627 [i97, r252];
  D248():
    deopt 825 [];
  L363():
    double3 = ldf double;
    check L364() else D129();
  L473():
    print = ldf print;
    check L474() else D189();
  L602():
    p40 = prom<V +>{
      max_kd8 = ld `max.kd`;
      max_kd9 = force? max_kd8;
      checkMissing(max_kd9);
      return max_kd9;
    };
    r348 = dyn double11(p40);
    check L603() else D249();
  D129():
    deopt 439 [i34];
  D189():
    deopt 629 [i97];
  D249():
    deopt 827 [r348];
  L364():
    p20 = prom<V +>{
      D16 = ld D;
      D17 = force? D16;
      checkMissing(D17);
      r176 = `+`(D17, 1);
      max_kd4 = ld `max.kd`;
      max_kd5 = force? max_kd4;
      checkMissing(max_kd5);
      r177 = `*`(r176, max_kd5);
      return r177;
    };
    r179 = dyn double3(p20);
    check L365() else D130();
  L474():
    p33 = prom<V +>{
      quantile = ldf quantile;
      p31 = prom<V +>{
        robust9 = ld robust;
        robust10 = force? robust9;
        checkMissing(robust10);
        return robust10;
      };
      p32 = prom<V +>{
        return <real 0.0, 0.125, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1.0>;
      };
      r255 = dyn quantile[, probs](p31, p32);
      return r255;
    };
    r257 = dyn print[, digits](p33, 3.0);
    check L475() else D190();
  L603():
    double12 = ldf double;
    check L604() else D250();
  D130():
    deopt 441 [i34, r179];
  D190():
    deopt 633 [i97, r257];
  D250():
    deopt 830 [];
  L365():
    double4 = ldf double;
    check L366() else D131();
  L475():
    goto L99(i97, r257);
  L604():
    p41 = prom<V +>{
      D22 = ld D;
      D23 = force? D22;
      checkMissing(D23);
      r349 = `*`(2, D23);
      return r349;
    };
    r351 = dyn double12(p41);
    check L605() else D251();
  D131():
    deopt 444 [i34];
  D251():
    deopt 832 [r351];
  L366():
    p21 = prom<V +>{
      N18 = ld N;
      N19 = force? N18;
      checkMissing(N19);
      return N19;
    };
    r181 = dyn double4(p21);
    check L367() else D132();
  L605():
    double13 = ldf double;
    check L606() else D252();
  D132():
    deopt 446 [i34, r181];
  D252():
    deopt 835 [];
  L367():
    double5 = ldf double;
    check L368() else D133();
  L606():
    p42 = prom<V +>{
      D24 = ld D;
      D25 = force? D24;
      checkMissing(D25);
      r352 = `+`(D25, 1);
      max_kd10 = ld `max.kd`;
      max_kd11 = force? max_kd10;
      checkMissing(max_kd11);
      r353 = `*`(r352, max_kd11);
      return r353;
    };
    r355 = dyn double13(p42);
    check L607() else D253();
  D133():
    deopt 449 [i34];
  D253():
    deopt 837 [r355];
  L368():
    r182 = dyn double5(1);
    check L369() else D134();
  L607():
    double14 = ldf double;
    check L608() else D254();
  D134():
    deopt 451 [i34, r182];
  D254():
    deopt 840 [];
  L369():
    double6 = ldf double;
    check L370() else D135();
  L608():
    p43 = prom<V +>{
      N36 = ld N;
      N37 = force? N36;
      checkMissing(N37);
      return N37;
    };
    r357 = dyn double14(p43);
    check L609() else D255();
  D135():
    deopt 454 [i34];
  D255():
    deopt 842 [r357];
  L370():
    r183 = dyn double6(1);
    check L371() else D136();
  L609():
    double15 = ldf double;
    check L610() else D256();
  D136():
    deopt 456 [i34, r183];
  D256():
    deopt 845 [];
  L371():
    double7 = ldf double;
    check L372() else D137();
  L610():
    r358 = dyn double15(1);
    check L611() else D257();
  D137():
    deopt 459 [i34];
  D257():
    deopt 847 [r358];
  L372():
    r184 = dyn double7(1);
    check L373() else D138();
  L611():
    double16 = ldf double;
    check L612() else D258();
  D138():
    deopt 461 [i34, r184];
  D258():
    deopt 850 [];
  L373():
    sym25 = ldf `as.integer`;
    base25 = ldf `as.integer` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L374() else L375();
  L612():
    r359 = dyn double16(1);
    check L613() else D259();
  D259():
    deopt 852 [r359];
  L77(i37, r186):
    _C = ldf `.C` in base;
    r189 = dyn _C(C_loess_raw1, y4, x20, r141, r143, D13, N15, r145, r148, r151, r154, r157, r160, r164, r167, r168, r170, r172, r175, r179, r181, r182, r183, r184, r186);
    check L378() else D141();
  L374():
    surf_stat2 = ld `surf.stat`;
    check L376() else D139();
  L375():
    r185 = dyn base25(<lang `==`(surf.stat, "interpolate/exact")>);
    goto L77(i34, r185);
  L613():
    double17 = ldf double;
    check L614() else D260();
  D139():
    deopt 465 [i34, surf_stat2];
  D141():
    deopt 472 [i37, r189];
  D260():
    deopt 855 [];
  L376():
    surf_stat3 = force? surf_stat2;
    checkMissing(surf_stat3);
    r187 = `==`(surf_stat3, "interpolate/exact");
    as_integer6 = ldf `as.integer` in base;
    r188 = dyn as_integer6(r187);
    check L377() else D140();
  L378():
    goto L65(i37, r189);
  L614():
    r360 = dyn double17(1);
    check L615() else D261();
  D140():
    deopt 470 [i34, r188];
  D261():
    deopt 857 [r360];
  L377():
    goto L77(i34, r188);
  L615():
    _C1 = ldf `.C` in base;
    r361 = dyn _C1(C_loess_raw3, pseudovalues1, x22, weights10, weights12, D21, N33, r321, r324, r327, r330, r333, r336, r340, r343, r344, r346, r348, r351, r355, r357, r358, r359, r360, 0);
    check L616() else D262();
  D262():
    deopt 861 [r361];
  L616():
    goto L116(r361);
  }
}