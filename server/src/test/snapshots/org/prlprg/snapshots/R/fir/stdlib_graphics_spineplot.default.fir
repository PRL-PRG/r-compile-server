fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1949947992;
    st `spineplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1949947992(x, y, breaks, `tol.ylab`, off, ylevels, col, main, xlab, ylab, xaxlabels, yaxlabels, xlim, ylim, axes, weights, `...`) {
  (reg x:*, reg y:*, reg breaks:*, reg tol_ylab:*, reg off:*, reg ylevels:*, reg col:*, reg main:*, reg xlab:*, reg ylab:*, reg xaxlabels:*, reg yaxlabels:*, reg xlim:*, reg ylim:*, reg axes:*, reg weights:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var breaks:*, reg breaks_isMissing:L, reg breaks_orDefault:*, var `tol.ylab`:*, reg tol_ylab_isMissing:L, reg tol_ylab_orDefault:*, var off:*, reg off_isMissing:L, reg off_orDefault:*, var ylevels:*, reg ylevels_isMissing:L, reg ylevels_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xaxlabels:*, reg xaxlabels_isMissing:L, reg xaxlabels_orDefault:*, var yaxlabels:*, reg yaxlabels_isMissing:L, reg yaxlabels_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var weights:*, reg weights_isMissing:L, reg weights_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x1:*, reg x2:V, reg dim:cls, reg r11:V, reg length:cls, reg r12:V, reg r13:V, reg c2:L, reg stop:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg weights1:*, reg weights2:V, reg c3:V, reg r18:V, reg c4:L, reg stop1:cls, reg r19:V, reg x3:*, reg x4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg xlab1:*, reg xlab2:V, reg c5:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg tab:*, reg tab1:V, reg dimnames:cls, reg r27:V, reg names:cls, reg r28:V, reg c7:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg ylab1:*, reg ylab2:V, reg c8:V, reg c9:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r34:V, reg r35:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg r37:V, reg tab2:*, reg tab3:V, reg dimnames1:cls, reg r38:V, reg names1:cls, reg r39:V, reg c10:L, reg r41:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r42:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg r44:V, reg tab4:*, reg tab5:V, reg dimnames2:cls, reg r45:V, reg c11:L, reg r47:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r48:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r49:V, reg r50:V, reg tab6:*, reg tab7:V, reg dimnames3:cls, reg r51:V, reg c12:L, reg r53:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r54:V, reg NCOL:cls, reg tab8:*, reg tab9:V, reg p1:p(V +), reg r56:V, reg NROW:cls, reg tab10:*, reg tab11:V, reg p2:p(V +), reg r58:V, reg is_factor:cls, reg y1:*, reg y2:V, reg p3:p(V +), reg r61:V, reg r62:V, reg c13:L, reg stop2:cls, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r65:V, reg r66:V, reg ylevels1:*, reg ylevels2:V, reg c14:V, reg r67:V, reg c15:L, reg factor:cls, reg y3:*, reg y4:V, reg p4:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg r70:V, reg ylevels3:*, reg ylevels4:V, reg is_numeric:cls, reg r71:V, reg c16:L, reg levels:cls, reg y5:*, reg y6:V, reg p5:p(V +), reg r73:V, reg c17:L, reg r75:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg ylevels5:*, reg ylevels6:V, reg __4:cls, reg r76:V, reg ylevels7:*, reg ylevels8:V, reg p6:p(V +), reg r78:V, reg is_factor1:cls, reg x5:*, reg x6:V, reg p7:p(V +), reg r81:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r82:V, reg r83:V, reg xlab3:*, reg xlab4:V, reg c18:V, reg c19:L, reg deparse1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r84:V, reg r85:V, reg substitute:cls, reg r86:V, reg p8:p(V +), reg r88:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r90:V, reg r91:V, reg ylab3:*, reg ylab4:V, reg c20:V, reg c21:L, reg deparse2:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r92:V, reg r93:V, reg substitute1:cls, reg r94:V, reg p9:p(V +), reg r96:V, reg x_categorical:*, reg x_categorical1:V, reg c22:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r98:V, reg r99:V, reg weights3:*, reg weights4:V, reg c23:V, reg c24:L, reg table:cls, reg x7:*, reg x8:V, reg p10:p(V +), reg y7:*, reg y8:V, reg p11:p(V +), reg r102:V, reg as_table:cls, reg tapply:cls, reg weights5:*, reg weights6:V, reg p12:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r105:V, reg r106:V, reg x9:*, reg x10:V, reg y9:*, reg y10:V, reg list:cls, reg r107:V, reg p13:p(V +), reg sum:*, reg sum1:V, reg p14:p(V +), reg r110:V, reg p15:p(V +), reg r112:V, reg l:*, reg c25:L, reg r114:R, reg l2:*, reg dr10:V, reg dc5:L, reg dx12:V, reg r116:R, reg dx13:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r121:V, reg r122:R, reg l5:*, reg r123:R, reg r124:V, reg tab12:*, reg tab13:V, reg is_na:cls, reg r125:V, reg ___:cls, reg r126:V, reg levels1:cls, reg x11:*, reg x12:V, reg p16:p(V +), reg r128:V, reg NROW1:cls, reg tab14:*, reg tab15:V, reg p17:p(V +), reg r130:V, reg levels2:cls, reg y11:*, reg y12:V, reg p18:p(V +), reg r133:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r134:V, reg r135:V, reg ynam:*, reg ynam1:V, reg length1:cls, reg r136:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r137:V, reg r138:V, reg col1:*, reg col2:V, reg c26:V, reg c27:L, reg gray_colors:cls, reg ny:*, reg ny1:V, reg p19:p(V +), reg r140:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r142:V, reg r143:V, reg col3:*, reg col4:V, reg ny2:*, reg ny3:V, reg rep_len:cls, reg r144:V, reg x_categorical2:*, reg x_categorical3:V, reg r145:V, reg c28:L, reg r146:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r147:V, reg r148:V, reg off1:*, reg off2:V, reg c29:V, reg c30:L, reg off3:*, reg off4:V, reg r149:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r150:V, reg r151:V, reg yaxlabels1:*, reg yaxlabels2:V, reg c31:V, reg c32:L, reg ynam2:*, reg ynam3:V, reg ynam4:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r152:V, reg yaxlabels3:*, reg yaxlabels4:V, reg ny4:*, reg ny5:V, reg rep_len1:cls, reg r153:V, reg x_categorical4:*, reg x_categorical5:V, reg c33:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r154:V, reg r155:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r156:V, reg r157:V, reg proportions:cls, reg marginSums:cls, reg tab16:*, reg tab17:V, reg p20:p(V +), reg r159:V, reg p21:p(V +), reg r161:V, reg off5:*, reg off6:V, reg r162:V, reg cumsum:cls, reg r163:V, reg c34:cls, reg r164:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r165:V, reg r166:V, reg xaxlabels1:*, reg xaxlabels2:V, reg c35:V, reg c36:L, reg xnam:*, reg xnam1:V, reg xnam2:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r167:V, reg xaxlabels3:*, reg xaxlabels4:V, reg nx:*, reg nx1:V, reg rep_len2:cls, reg r168:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r169:V, reg r170:V, reg x13:*, reg x14:V, reg is_numeric1:cls, reg r171:V, reg r172:V, reg c37:L, reg x15:*, reg x16:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r173:V, reg r174:V, reg x17:*, reg x18:V, reg as_numeric:cls, reg r175:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r177:V, reg r178:V, reg breaks1:*, reg breaks2:V, reg c38:V, reg c39:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r179:V, reg r180:V, reg weights7:*, reg weights8:V, reg c40:V, reg c41:L, reg nclass_Sturges:cls, reg x19:*, reg x20:V, reg p22:p(V +), reg r182:V, reg r183:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r184:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r185:V, reg r186:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r187:V, reg r188:V, reg weights9:*, reg weights10:V, reg sum2:cls, reg r189:V, reg log2:cls, reg r190:V, reg r191:V, reg r192:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r194:V, reg r195:V, reg breaks3:*, reg breaks4:V, reg as_numeric1:cls, reg r196:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r197:V, reg r198:V, reg breaks5:*, reg breaks6:V, reg length2:cls, reg r199:V, reg r200:V, reg c42:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r201:V, reg r202:V, reg breaks7:*, reg breaks8:V, reg is_numeric2:cls, reg r203:V, reg r204:V, reg c43:L, reg c44:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r205:V, reg c48:L, reg r206:V, reg breaks9:*, reg breaks10:V, reg is_finite:cls, reg r207:V, reg r208:V, reg c49:L, reg c50:V, reg c52:L, reg c53:V, reg breaks11:*, reg breaks12:V, reg r209:V, reg c55:L, reg c56:V, reg c58:L, reg stop3:cls, reg r210:V, reg breaks13:*, reg breaks14:V, reg r212:V, reg c59:L, reg warning:cls, reg gettextf:cls, reg breaks15:*, reg breaks16:V, reg p23:p(V +), reg r214:V, reg p24:p(V +), reg r216:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r218:V, reg r219:V, reg weights11:*, reg weights12:V, reg c60:V, reg c61:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r220:V, reg r221:V, reg x21:*, reg x22:V, reg range:cls, reg r222:V, reg r223:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r224:V, reg x23:*, reg x24:V, reg c62:L, reg x26:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg weights13:*, reg weights14:V, reg r225:V, reg __5:cls, reg r226:V, reg range1:cls, reg r227:V, reg pretty:cls, reg rg:*, reg rg1:V, reg p25:p(V +), reg breaks17:*, reg breaks18:V, reg p26:p(V +), reg r230:V, reg cut:cls, reg x27:*, reg x28:V, reg p27:p(V +), reg breaks19:*, reg breaks20:V, reg p28:p(V +), reg r234:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r235:V, reg r236:V, reg weights15:*, reg weights16:V, reg c63:V, reg c64:L, reg table1:cls, reg x29:*, reg x30:V, reg p29:p(V +), reg y13:*, reg y14:V, reg p30:p(V +), reg r239:V, reg as_table1:cls, reg tapply1:cls, reg weights17:*, reg weights18:V, reg p31:p(V +), reg sym47:cls, reg base47:cls, reg guard47:L, reg r242:V, reg r243:V, reg x31:*, reg x32:V, reg y15:*, reg y16:V, reg list1:cls, reg r244:V, reg p32:p(V +), reg sum3:*, reg sum4:V, reg p33:p(V +), reg r247:V, reg p34:p(V +), reg r249:V, reg l6:*, reg c65:L, reg r251:R, reg l8:*, reg dr14:V, reg dc7:L, reg dx16:V, reg r253:R, reg dx17:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r258:V, reg r259:R, reg l11:*, reg r260:R, reg r261:V, reg tab18:*, reg tab19:V, reg is_na1:cls, reg r262:V, reg ___1:cls, reg r263:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r264:V, reg r265:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r266:V, reg r267:V, reg proportions1:cls, reg marginSums1:cls, reg tab20:*, reg tab21:V, reg p35:p(V +), reg r269:V, reg p36:p(V +), reg r271:V, reg cumsum1:cls, reg r272:V, reg c66:cls, reg r273:V, reg NROW2:cls, reg tab22:*, reg tab23:V, reg p37:p(V +), reg r275:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r276:V, reg r277:V, reg xaxlabels5:*, reg xaxlabels6:V, reg c67:V, reg c68:L, reg xnumeric:*, reg xnumeric1:V, reg c69:L, reg breaks21:*, reg breaks22:V, reg breaks23:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r278:V, reg xorig:*, reg xorig1:V, reg c70:L, reg xorig3:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r279:V, reg xorig4:*, reg xorig5:V, reg c71:L, reg xorig7:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r280:V, reg xorig10:V, reg r281:V, reg diff:cls, reg sym54:cls, reg base54:cls, reg guard54:L, reg r282:V, reg r283:V, reg x33:*, reg x34:V, reg as_numeric2:cls, reg r284:V, reg p38:p(V +), reg r286:V, reg r287:V, reg c72:cls, reg r288:V, reg __7:cls, reg r289:V, reg c73:cls, reg r290:V, reg breaks24:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r291:V, reg xaxlabels7:*, reg xaxlabels8:V, reg nx2:*, reg nx3:V, reg r292:V, reg rep_len3:cls, reg r293:V, reg rev:cls, reg yaxlabels5:*, reg yaxlabels6:V, reg p39:p(V +), reg r295:V, reg rbind:cls, reg apply:cls, reg proportions2:cls, reg tab24:*, reg tab25:V, reg c74:L, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg ncol:cls, reg tab28:*, reg tab29:V, reg p40:p(V +), reg r297:V, reg r298:V, reg __8:cls, reg r299:V, reg p41:p(V +), reg r301:V, reg p42:p(V +), reg cumsum2:*, reg cumsum3:V, reg p43:p(V +), reg r304:V, reg p44:p(V +), reg r306:V, reg l12:*, reg c75:L, reg r308:R, reg l14:*, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r315:V, reg r316:R, reg l17:*, reg r317:R, reg r318:V, reg yat:*, reg yat1:V, reg is_na2:cls, reg r319:V, reg ___2:cls, reg r320:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r321:V, reg r322:V, reg xlim1:*, reg xlim2:V, reg c76:V, reg c77:L, reg sym58:cls, reg base58:cls, reg guard58:L, reg r323:V, reg r324:V, reg off7:*, reg off8:V, reg nx4:*, reg nx5:V, reg r325:V, reg r326:V, reg r327:V, reg c78:cls, reg r328:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r330:V, reg r331:V, reg xlim3:*, reg xlim4:V, reg r332:V, reg any:cls, reg r333:V, reg c79:L, reg c80:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r334:V, reg c84:L, reg r335:V, reg xlim5:*, reg xlim6:V, reg r336:V, reg any1:cls, reg r337:V, reg c85:L, reg c86:V, reg c88:L, reg warning1:cls, reg r338:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r339:V, reg r340:V, reg xlim7:*, reg xlim8:V, reg min:cls, reg r341:V, reg r342:V, reg c89:L, reg c90:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r343:V, reg c94:L, reg r344:V, reg xlim9:*, reg xlim10:V, reg max:cls, reg r345:V, reg r346:V, reg c95:L, reg c96:V, reg c98:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r347:V, reg r348:V, reg c99:cls, reg r349:V, reg r350:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r351:V, reg r352:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r353:V, reg r354:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r355:V, reg r356:V, reg xlim11:*, reg xlim12:V, reg min1:cls, reg r357:V, reg max1:cls, reg r358:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r359:V, reg r360:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r361:V, reg r362:V, reg xlim13:*, reg xlim14:V, reg max2:cls, reg r363:V, reg min2:cls, reg r364:V, reg c100:cls, reg r365:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r366:V, reg r367:V, reg ylim1:*, reg ylim2:V, reg r368:V, reg any2:cls, reg r369:V, reg c101:L, reg c102:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r370:V, reg c106:L, reg r371:V, reg ylim3:*, reg ylim4:V, reg r372:V, reg any3:cls, reg r373:V, reg c107:L, reg c108:V, reg c110:L, reg warning2:cls, reg r374:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r375:V, reg r376:V, reg ylim5:*, reg ylim6:V, reg min3:cls, reg r377:V, reg r378:V, reg c111:L, reg c112:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r379:V, reg c116:L, reg r380:V, reg ylim7:*, reg ylim8:V, reg max3:cls, reg r381:V, reg r382:V, reg c117:L, reg c118:V, reg c120:L, reg sym73:cls, reg base73:cls, reg guard73:L, reg r383:V, reg r384:V, reg c121:cls, reg r385:V, reg r386:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r387:V, reg r388:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r389:V, reg r390:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r391:V, reg r392:V, reg ylim9:*, reg ylim10:V, reg min4:cls, reg r393:V, reg max4:cls, reg r394:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r395:V, reg r396:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r397:V, reg r398:V, reg ylim11:*, reg ylim12:V, reg max5:cls, reg r399:V, reg min5:cls, reg r400:V, reg c122:cls, reg r401:V, reg dev_hold:cls, reg r403:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r404:V, reg on_exit:cls, reg r406:V, reg plot:cls, reg xlim15:*, reg xlim16:V, reg p45:p(V +), reg ylim13:*, reg ylim14:V, reg p46:p(V +), reg main1:*, reg main2:V, reg p47:p(V +), reg xlab5:*, reg xlab6:V, reg p48:p(V +), reg ylab5:*, reg ylab6:V, reg p49:p(V +), reg r412:V, reg as_vector:cls, reg yat2:*, reg yat3:V, reg c123:L, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg ny6:*, reg ny7:V, reg r413:V, reg r414:V, reg __9:cls, reg r415:V, reg p50:p(V +), reg r417:V, reg as_vector1:cls, reg yat6:*, reg yat7:V, reg c124:L, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __10:cls, reg r418:V, reg p51:p(V +), reg r420:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r421:V, reg r422:V, reg rep:cls, reg r423:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r424:V, reg r425:V, reg rep1:cls, reg r426:V, reg sym82:cls, reg base82:cls, reg guard82:L, reg r427:V, reg r428:V, reg rep2:cls, reg r429:V, reg rect:cls, reg xleft:*, reg xleft1:V, reg p52:p(V +), reg ybottom:*, reg ybottom1:V, reg p53:p(V +), reg xright:*, reg xright1:V, reg p54:p(V +), reg ytop:*, reg ytop1:V, reg p55:p(V +), reg col5:*, reg col6:V, reg p56:p(V +), reg ddd1:dots?, reg r435:V, reg axes1:*, reg axes2:V, reg c125:L, reg x_categorical6:*, reg x_categorical7:V, reg c126:L, reg axis:cls, reg xat:*, reg xat1:V, reg c127:L, reg xat3:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg nx6:*, reg nx7:V, reg r436:V, reg __11:cls, reg r437:V, reg xat4:*, reg xat5:V, reg c128:L, reg dx33:V, reg xat7:V, reg dr30:V, reg dc15:L, reg dx35:V, reg dx36:V, reg dx37:V, reg nx8:*, reg nx9:V, reg r438:V, reg r439:V, reg __12:cls, reg r440:V, reg r441:V, reg off9:*, reg off10:V, reg r442:V, reg r443:V, reg p57:p(V +), reg xaxlabels9:*, reg xaxlabels10:V, reg p58:p(V +), reg r446:V, reg axis1:cls, reg xat8:*, reg xat9:V, reg p59:p(V +), reg xaxlabels11:*, reg xaxlabels12:V, reg p60:p(V +), reg r450:V, reg yat10:*, reg yat11:V, reg c129:L, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg __13:cls, reg r451:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r452:V, reg r453:V, reg diff1:cls, reg yat14:*, reg yat15:V, reg p61:p(V +), reg r455:V, reg tol_ylab1:*, reg tol_ylab2:V, reg r456:V, reg any4:cls, reg r457:V, reg equidist:*, reg equidist1:V, reg c130:L, reg sym84:cls, reg base84:cls, reg guard84:L, reg r458:V, reg r459:V, reg ny8:*, reg ny9:V, reg r460:V, reg r461:V, reg ny10:*, reg ny11:V, reg r462:V, reg r463:V, reg r464:V, reg ny12:*, reg ny13:V, reg r465:V, reg seq_int:cls, reg r466:V, reg r467:V, reg yat16:*, reg yat17:V, reg c131:L, reg yat19:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg __14:cls, reg r468:V, reg yat20:*, reg yat21:V, reg c132:L, reg dx43:V, reg yat23:V, reg dr36:V, reg dc18:L, reg dx45:V, reg dx46:V, reg dx47:V, reg sym85:cls, reg base85:cls, reg guard85:L, reg r469:V, reg dx50:V, reg yat26:V, reg r470:V, reg yat27:*, reg yat28:V, reg length3:cls, reg r471:V, reg r472:V, reg __15:cls, reg r473:V, reg r474:V, reg r475:V, reg axis2:cls, reg yat29:*, reg yat30:V, reg p62:p(V +), reg yaxlabels7:*, reg yaxlabels8:V, reg p63:p(V +), reg r478:V, reg axis3:cls, reg r479:V, reg x_categorical8:*, reg x_categorical9:V, reg r481:V, reg c133:L, reg box:cls, reg r482:V, reg sym86:cls, reg base86:cls, reg guard86:L, reg r484:V, reg r485:V, reg xlab7:*, reg xlab8:V, reg ylab7:*, reg ylab8:V, reg c134:cls, reg r486:V, reg l18:*, reg dimnames4:cls, reg r487:V, reg names__:cls, reg r488:V, reg dimnames__:cls, reg r489:V, reg sym87:cls, reg base87:cls, reg guard87:L, reg r490:V, reg r491:V, reg tab30:*, reg tab31:V, reg invisible:cls, reg r492:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    breaks_isMissing = missing.0(breaks);
    if breaks_isMissing then L1(NULL) else L1(breaks);
  L1(breaks_orDefault):
    st breaks = breaks_orDefault;
    tol_ylab_isMissing = missing.0(tol_ylab);
    if tol_ylab_isMissing then L2(0.05) else L2(tol_ylab);
  L2(tol_ylab_orDefault):
    st `tol.ylab` = tol_ylab_orDefault;
    off_isMissing = missing.0(off);
    if off_isMissing then L3(NULL) else L3(off);
  L3(off_orDefault):
    st off = off_orDefault;
    ylevels_isMissing = missing.0(ylevels);
    if ylevels_isMissing then L4(NULL) else L4(ylevels);
  L4(ylevels_orDefault):
    st ylevels = ylevels_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L5(NULL) else L5(col);
  L5(col_orDefault):
    st col = col_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L6("") else L6(main);
  L6(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L7(NULL) else L7(xlab);
  L7(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L8(NULL) else L8(ylab);
  L8(ylab_orDefault):
    st ylab = ylab_orDefault;
    xaxlabels_isMissing = missing.0(xaxlabels);
    if xaxlabels_isMissing then L9(NULL) else L9(xaxlabels);
  L9(xaxlabels_orDefault):
    st xaxlabels = xaxlabels_orDefault;
    yaxlabels_isMissing = missing.0(yaxlabels);
    if yaxlabels_isMissing then L10(NULL) else L10(yaxlabels);
  L10(yaxlabels_orDefault):
    st yaxlabels = yaxlabels_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L11(NULL) else L11(xlim);
  L11(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L12() else L13(ylim);
  L12():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0.0, 1.0);
      goto L0(r2);
    L2():
      r = dyn base(0.0, 1.0);
      goto L0(r);
    };
    goto L13(p);
  L13(ylim_orDefault):
    st ylim = ylim_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L14(TRUE) else L14(axes);
  L14(axes_orDefault):
    st axes = axes_orDefault;
    weights_isMissing = missing.0(weights);
    if weights_isMissing then L15(NULL) else L15(weights);
  L15(weights_orDefault):
    st weights = weights_orDefault;
    st `...` = ddd;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L180() else L181();
  L16(r5):
    c1 = `as.logical`(r5);
    if c1 then L182() else L17();
  L180():
    missing = ldf missing in base;
    r6 = dyn missing(<sym y>);
    goto L16(r6);
  L181():
    r4 = dyn base1(<sym y>);
    goto L16(r4);
  L17():
    is_factor = ldf `is.factor`;
    check L251() else D25();
  L41():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L309() else L310();
  L182():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L183() else L184();
  D25():
    deopt 109 [];
  L18(r8):
    r13 = `!=`(r8, 2);
    c2 = `as.logical`(r13);
    if c2 then L190() else L20();
  L61(r138):
    c27 = `as.logical`(r138);
    if c27 then L312() else L62();
  L183():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L185() else L186();
  L184():
    r7 = dyn base2(<lang dim(x)>);
    goto L18(r7);
  L251():
    p3 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r61 = dyn is_factor(p3);
    check L252() else D26();
  L309():
    col1 = ld col;
    check L311() else D56();
  L310():
    r137 = dyn base23(<sym col>);
    goto L61(r137);
  D26():
    deopt 111 [r61];
  D56():
    deopt 213 [col1];
  L19(r10):
    length = ldf length in base;
    r12 = dyn length(r10);
    check L189() else D2();
  L20():
    goto L21();
  L21():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L194() else L195();
  L62():
    goto L63();
  L63():
    sym24 = ldf rep_len;
    base24 = ldf rep_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L316() else L317();
  L185():
    x1 = ld x;
    check L187() else D0();
  L186():
    r9 = dyn base3(<sym x>);
    goto L19(r9);
  L190():
    stop = ldf stop;
    check L191() else D3();
  L252():
    r62 = `!`(r61);
    c13 = `as.logical`(r62);
    if c13 then L253() else L42();
  L311():
    col2 = force? col1;
    checkMissing(col2);
    c26 = `==`(col2, NULL);
    goto L61(c26);
  L312():
    gray_colors = ldf `gray.colors`;
    check L313() else D57();
  D0():
    deopt 7 [x1];
  D2():
    deopt 12 [r12];
  D3():
    deopt 16 [];
  D57():
    deopt 217 [];
  L22(r17):
    r18 = `!`(r17);
    c4 = `as.logical`(r18);
    if c4 then L197() else L23();
  L42():
    goto L43();
  L43():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L257() else L258();
  L64(r143):
    st col = r143;
    x_categorical2 = ld `x.categorical`;
    check L321() else D62();
  L187():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r11 = dyn dim(x2);
    check L188() else D1();
  L189():
    goto L18(r12);
  L191():
    r14 = dyn stop("a 2-way table has to be specified");
    check L192() else D4();
  L194():
    weights1 = ld weights;
    check L196() else D5();
  L195():
    r16 = dyn base4(<sym weights>);
    goto L22(r16);
  L253():
    stop2 = ldf stop;
    check L254() else D27();
  L313():
    p19 = prom<V +>{
      ny = ld ny;
      ny1 = force? ny;
      checkMissing(ny1);
      return ny1;
    };
    r140 = dyn gray_colors(p19);
    check L314() else D58();
  L316():
    col3 = ld col;
    check L318() else D59();
  L317():
    r142 = dyn base24(<sym col>, <sym ny>);
    goto L64(r142);
  D1():
    deopt 10 [r11];
  D4():
    deopt 18 [r14];
  D5():
    deopt 22 [weights1];
  D27():
    deopt 114 [];
  D58():
    deopt 219 [r140];
  D59():
    deopt 225 [col3];
  D62():
    deopt 232 [x_categorical2];
  L23():
    goto L24();
  L24():
    x3 = ld x;
    check L201() else D8();
  L44(r66):
    r67 = `!`(r66);
    c15 = `as.logical`(r67);
    if c15 then L260() else L45();
  L188():
    goto L19(r11);
  L192():
    goto L21();
  L196():
    weights2 = force? weights1;
    checkMissing(weights2);
    c3 = `==`(weights2, NULL);
    goto L22(c3);
  L197():
    stop1 = ldf stop;
    check L198() else D6();
  L254():
    r63 = dyn stop2("dependent variable should be a factor");
    check L255() else D28();
  L257():
    ylevels1 = ld ylevels;
    check L259() else D29();
  L258():
    r65 = dyn base13(<sym ylevels>);
    goto L44(r65);
  L314():
    st col = r140;
    goto L63();
  L318():
    col4 = force? col3;
    checkMissing(col4);
    ny2 = ld ny;
    check L319() else D60();
  L321():
    x_categorical3 = force? x_categorical2;
    checkMissing(x_categorical3);
    r145 = `!`(x_categorical3);
    c28 = `as.logical`(r145);
    if c28 then L322() else L65();
  D6():
    deopt 27 [];
  D8():
    deopt 32 [x3];
  D28():
    deopt 116 [r63];
  D29():
    deopt 120 [ylevels1];
  D60():
    deopt 227 [ny2];
  L45():
    goto L46();
  L46():
    is_factor1 = ldf `is.factor`;
    check L264() else D32();
  L65():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L324() else L325();
  L66(r146):
    st off = r146;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L330() else L331();
  L198():
    r19 = dyn stop1("weights are not supported for 2-way table specification");
    check L199() else D7();
  L201():
    x4 = force? x3;
    checkMissing(x4);
    st tab = x4;
    st `x.categorical` = TRUE;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L202() else L203();
  L255():
    goto L43();
  L259():
    ylevels2 = force? ylevels1;
    checkMissing(ylevels2);
    c14 = `==`(ylevels2, NULL);
    goto L44(c14);
  L260():
    factor = ldf factor;
    check L261() else D30();
  L319():
    ny3 = force? ny2;
    checkMissing(ny3);
    rep_len = ldf rep_len in base;
    r144 = dyn rep_len(col4, ny3);
    check L320() else D61();
  L322():
    goto L66(0.0);
  D7():
    deopt 29 [r19];
  D30():
    deopt 125 [];
  D32():
    deopt 134 [];
  D61():
    deopt 230 [r144];
  L25(r22):
    c6 = `as.logical`(r22);
    if c6 then L205() else L26();
  L67(r148):
    c30 = `as.logical`(r148);
    if c30 then L327() else L68();
  L69(r151):
    c32 = `as.logical`(r151);
    if c32 then L333() else L70();
  L199():
    goto L24();
  L202():
    xlab1 = ld xlab;
    check L204() else D9();
  L203():
    r21 = dyn base5(<sym xlab>);
    goto L25(r21);
  L261():
    p4 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p6 = prom<V +>{
      sym14 = ldf `is.numeric`;
      base14 = ldf `is.numeric` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L3() else L4();
    L0(r70):
      c16 = `as.logical`(r70);
      if c16 then L5() else L1();
    L3():
      ylevels3 = ld ylevels;
      ylevels4 = force? ylevels3;
      checkMissing(ylevels4);
      is_numeric = ldf `is.numeric` in base;
      r71 = dyn is_numeric(ylevels4);
      goto L0(r71);
    L4():
      r69 = dyn base14(<sym ylevels>);
      goto L0(r69);
    L1():
      ylevels7 = ld ylevels;
      ylevels8 = force? ylevels7;
      checkMissing(ylevels8);
      return ylevels8;
    L5():
      levels = ldf levels;
      p5 = prom<V +>{
        y5 = ld y;
        y6 = force? y5;
        checkMissing(y6);
        return y6;
      };
      r73 = dyn levels(p5);
      c17 = `is.object`(r73);
      if c17 then L6() else L7(r73);
    L2(dx11):
      return dx11;
    L6():
      dr8 = tryDispatchBuiltin.1("[", r73);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L8() else L7(dr8);
    L7(r75):
      ylevels5 = ld ylevels;
      ylevels6 = force? ylevels5;
      __4 = ldf `[` in base;
      r76 = dyn __4(r75, ylevels6);
      goto L2(r76);
    L8():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L2(dx10);
    };
    r78 = dyn factor[, levels](p4, p6);
    check L262() else D31();
  L264():
    p7 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r81 = dyn is_factor1(p7);
    check L265() else D33();
  L320():
    goto L64(r144);
  L324():
    off1 = ld off;
    check L326() else D63();
  L325():
    r147 = dyn base25(<sym off>);
    goto L67(r147);
  L330():
    yaxlabels1 = ld yaxlabels;
    check L332() else D65();
  L331():
    r150 = dyn base26(<sym yaxlabels>);
    goto L69(r150);
  D9():
    deopt 39 [xlab1];
  D31():
    deopt 129 [r78];
  D33():
    deopt 136 [r81];
  D63():
    deopt 238 [off1];
  D65():
    deopt 249 [yaxlabels1];
  L26():
    goto L30();
  L30():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L217() else L218();
  L68():
    off3 = ld off;
    check L329() else D64();
  L70():
    sym27 = ldf rep_len;
    base27 = ldf rep_len in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L336() else L337();
  L71(ynam4):
    st yaxlabels = ynam4;
    x_categorical4 = ld `x.categorical`;
    check L341() else D70();
  L204():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c5 = `==`(xlab2, NULL);
    goto L25(c5);
  L205():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L206() else L207();
  L262():
    st y = r78;
    goto L46();
  L265():
    st `x.categorical` = r81;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L266() else L267();
  L326():
    off2 = force? off1;
    checkMissing(off2);
    c29 = `==`(off2, NULL);
    goto L67(c29);
  L327():
    goto L66(0.02);
  L332():
    yaxlabels2 = force? yaxlabels1;
    checkMissing(yaxlabels2);
    c31 = `==`(yaxlabels2, NULL);
    goto L69(c31);
  L333():
    ynam2 = ld ynam;
    check L334() else D66();
  D64():
    deopt 243 [off3];
  D66():
    deopt 252 [ynam2];
  D70():
    deopt 263 [x_categorical4];
  L27(r24):
    c7 = `is.object`(r24);
    if c7 then L213() else L214(r24);
  L31(r33):
    c9 = `as.logical`(r33);
    if c9 then L220() else L32();
  L47(r83):
    c19 = `as.logical`(r83);
    if c19 then L269() else L48();
  L206():
    sym7 = ldf dimnames;
    base7 = ldf dimnames in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L208() else L209();
  L207():
    r23 = dyn base6(<lang dimnames(tab)>);
    goto L27(r23);
  L217():
    ylab1 = ld ylab;
    check L219() else D13();
  L218():
    r32 = dyn base8(<sym ylab>);
    goto L31(r32);
  L266():
    xlab3 = ld xlab;
    check L268() else D34();
  L267():
    r82 = dyn base15(<sym xlab>);
    goto L47(r82);
  L329():
    off4 = force? off3;
    checkMissing(off4);
    r149 = `/`(off4, 100.0);
    goto L66(r149);
  L334():
    ynam3 = force? ynam2;
    checkMissing(ynam3);
    goto L71(ynam3);
  L336():
    yaxlabels3 = ld yaxlabels;
    check L338() else D67();
  L337():
    r152 = dyn base27(<sym yaxlabels>, <sym ny>);
    goto L71(r152);
  L341():
    x_categorical5 = force? x_categorical4;
    checkMissing(x_categorical5);
    c33 = `as.logical`(x_categorical5);
    if c33 then L342() else L72();
  D13():
    deopt 59 [ylab1];
  D34():
    deopt 139 [xlab3];
  D67():
    deopt 256 [yaxlabels3];
  L28(r26):
    names = ldf names in base;
    r28 = dyn names(r26);
    check L212() else D12();
  L29(dx1):
    st xlab = dx1;
    goto L30();
  L32():
    goto L36();
  L36():
    sym11 = ldf dimnames;
    base11 = ldf dimnames in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L232() else L233();
  L48():
    goto L49();
  L49():
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L273() else L274();
  L72():
    sym32 = ldf `is.numeric`;
    base32 = ldf `is.numeric` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L364() else L365();
  L78():
    rev = ldf rev;
    check L505() else D142();
  L208():
    tab = ld tab;
    check L210() else D10();
  L209():
    r25 = dyn base7(<sym tab>);
    goto L28(r25);
  L213():
    dr = tryDispatchBuiltin.1("[", r24);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L215() else L214(dr);
  L214(r30):
    __ = ldf `[` in base;
    r31 = dyn __(r30, 1);
    goto L29(r31);
  L219():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c8 = `==`(ylab2, NULL);
    goto L31(c8);
  L220():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L221() else L222();
  L268():
    xlab4 = force? xlab3;
    checkMissing(xlab4);
    c18 = `==`(xlab4, NULL);
    goto L47(c18);
  L269():
    deparse1 = ldf deparse1;
    check L270() else D35();
  L338():
    yaxlabels4 = force? yaxlabels3;
    checkMissing(yaxlabels4);
    ny4 = ld ny;
    check L339() else D68();
  L342():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L343() else L344();
  D10():
    deopt 46 [tab];
  D12():
    deopt 51 [r28];
  D35():
    deopt 143 [];
  D68():
    deopt 258 [ny4];
  D142():
    deopt 535 [];
  L33(r35):
    c10 = `is.object`(r35);
    if c10 then L228() else L229(r35);
  L37(r44):
    c11 = `is.object`(r44);
    if c11 then L236() else L237(r44);
  L50(r91):
    c21 = `as.logical`(r91);
    if c21 then L276() else L51();
  L73(r155):
    st xat = r155;
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L352() else L353();
  L79(r170):
    st xnumeric = r170;
    r172 = `!`(r170);
    c37 = `as.logical`(r172);
    if c37 then L368() else L80();
  L210():
    tab1 = force? tab;
    checkMissing(tab1);
    dimnames = ldf dimnames in base;
    r27 = dyn dimnames(tab1);
    check L211() else D11();
  L212():
    goto L27(r28);
  L215():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L221():
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L223() else L224();
  L222():
    r34 = dyn base9(<lang dimnames(tab)>);
    goto L33(r34);
  L232():
    tab4 = ld tab;
    check L234() else D17();
  L233():
    r43 = dyn base11(<sym tab>);
    goto L37(r43);
  L270():
    p8 = prom<V +>{
      sym16 = ldf substitute;
      base16 = ldf substitute in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r85):
      return r85;
    L1():
      substitute = ldf substitute in base;
      r86 = dyn substitute(<sym x>);
      goto L0(r86);
    L2():
      r84 = dyn base16(<sym x>);
      goto L0(r84);
    };
    r88 = dyn deparse1(p8);
    check L271() else D36();
  L273():
    ylab3 = ld ylab;
    check L275() else D37();
  L274():
    r90 = dyn base17(<sym ylab>);
    goto L50(r90);
  L339():
    ny5 = force? ny4;
    checkMissing(ny5);
    rep_len1 = ldf rep_len in base;
    r153 = dyn rep_len1(yaxlabels4, ny5);
    check L340() else D69();
  L343():
    sym29 = ldf cumsum;
    base29 = ldf cumsum in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L345() else L346();
  L344():
    r154 = dyn base28(0.0, <lang cumsum(`+`(proportions(marginSums(tab, 1.0)), off))>);
    goto L73(r154);
  L364():
    x13 = ld x;
    check L366() else D81();
  L365():
    r169 = dyn base32(<sym x>);
    goto L79(r169);
  L505():
    p39 = prom<V +>{
      yaxlabels5 = ld yaxlabels;
      yaxlabels6 = force? yaxlabels5;
      checkMissing(yaxlabels6);
      return yaxlabels6;
    };
    r295 = dyn rev(p39);
    check L506() else D143();
  D11():
    deopt 49 [r27];
  D17():
    deopt 80 [tab4];
  D36():
    deopt 145 [r88];
  D37():
    deopt 150 [ylab3];
  D69():
    deopt 261 [r153];
  D81():
    deopt 298 [x13];
  D143():
    deopt 537 [r295];
  L34(r37):
    names1 = ldf names in base;
    r39 = dyn names1(r37);
    check L227() else D16();
  L35(dx4):
    st ylab = dx4;
    goto L36();
  L38(dx7):
    st xnam = dx7;
    sym12 = ldf dimnames;
    base12 = ldf dimnames in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L239() else L240();
  L51():
    goto L52();
  L52():
    x_categorical = ld `x.categorical`;
    check L280() else D40();
  L74(r157):
    c34 = ldf c in base;
    r164 = dyn c34(0.0, r157);
    check L351() else D75();
  L75(r166):
    c36 = `as.logical`(r166);
    if c36 then L355() else L76();
  L80():
    goto L82();
  L82():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L375() else L376();
  L211():
    goto L28(r27);
  L223():
    tab2 = ld tab;
    check L225() else D14();
  L224():
    r36 = dyn base10(<sym tab>);
    goto L34(r36);
  L228():
    dr2 = tryDispatchBuiltin.1("[", r35);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L230() else L229(dr2);
  L229(r41):
    __1 = ldf `[` in base;
    r42 = dyn __1(r41, 2);
    goto L35(r42);
  L234():
    tab5 = force? tab4;
    checkMissing(tab5);
    dimnames2 = ldf dimnames in base;
    r45 = dyn dimnames2(tab5);
    check L235() else D18();
  L236():
    dr4 = tryDispatchBuiltin.1("[[", r44);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L238() else L237(dr4);
  L237(r47):
    __2 = ldf `[[` in base;
    r48 = dyn __2(r47, 1);
    goto L38(r48);
  L271():
    st xlab = r88;
    goto L49();
  L275():
    ylab4 = force? ylab3;
    checkMissing(ylab4);
    c20 = `==`(ylab4, NULL);
    goto L50(c20);
  L276():
    deparse2 = ldf deparse1;
    check L277() else D38();
  L340():
    goto L71(r153);
  L345():
    proportions = ldf proportions;
    check L347() else D71();
  L346():
    r156 = dyn base29(<lang `+`(proportions(marginSums(tab, 1.0)), off)>);
    goto L74(r156);
  L352():
    xaxlabels1 = ld xaxlabels;
    check L354() else D76();
  L353():
    r165 = dyn base30(<sym xaxlabels>);
    goto L75(r165);
  L366():
    x14 = force? x13;
    checkMissing(x14);
    is_numeric1 = ldf `is.numeric` in base;
    r171 = dyn is_numeric1(x14);
    check L367() else D82();
  L368():
    x15 = ld x;
    check L369() else D83();
  L506():
    st yaxlabels = r295;
    rbind = ldf rbind;
    check L507() else D144();
  D14():
    deopt 66 [tab2];
  D16():
    deopt 71 [r39];
  D18():
    deopt 83 [r45];
  D38():
    deopt 154 [];
  D40():
    deopt 160 [x_categorical];
  D71():
    deopt 271 [];
  D75():
    deopt 279 [r164];
  D76():
    deopt 282 [xaxlabels1];
  D82():
    deopt 301 [r171];
  D83():
    deopt 304 [x15];
  D144():
    deopt 540 [];
  L39(r50):
    c12 = `is.object`(r50);
    if c12 then L243() else L244(r50);
  L76():
    sym31 = ldf rep_len;
    base31 = ldf rep_len in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L358() else L359();
  L77(xnam2):
    st xaxlabels = xnam2;
    goto L78();
  L83(r178):
    c39 = `as.logical`(r178);
    if c39 then L378() else L84();
  L225():
    tab3 = force? tab2;
    checkMissing(tab3);
    dimnames1 = ldf dimnames in base;
    r38 = dyn dimnames1(tab3);
    check L226() else D15();
  L227():
    goto L33(r39);
  L230():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L35(dx3);
  L235():
    goto L37(r45);
  L238():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx6);
  L239():
    tab6 = ld tab;
    check L241() else D19();
  L240():
    r49 = dyn base12(<sym tab>);
    goto L39(r49);
  L277():
    p9 = prom<V +>{
      sym18 = ldf substitute;
      base18 = ldf substitute in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r93):
      return r93;
    L1():
      substitute1 = ldf substitute in base;
      r94 = dyn substitute1(<sym y>);
      goto L0(r94);
    L2():
      r92 = dyn base18(<sym y>);
      goto L0(r92);
    };
    r96 = dyn deparse2(p9);
    check L278() else D39();
  L280():
    x_categorical1 = force? x_categorical;
    checkMissing(x_categorical1);
    c22 = `as.logical`(x_categorical1);
    if c22 then L281() else L53();
  L347():
    p21 = prom<V +>{
      marginSums = ldf marginSums;
      p20 = prom<V +>{
        tab16 = ld tab;
        tab17 = force? tab16;
        checkMissing(tab17);
        return tab17;
      };
      r159 = dyn marginSums(p20, 1.0);
      return r159;
    };
    r161 = dyn proportions(p21);
    check L348() else D72();
  L351():
    goto L73(r164);
  L354():
    xaxlabels2 = force? xaxlabels1;
    checkMissing(xaxlabels2);
    c35 = `==`(xaxlabels2, NULL);
    goto L75(c35);
  L355():
    xnam = ld xnam;
    check L356() else D77();
  L367():
    goto L79(r171);
  L369():
    x16 = force? x15;
    checkMissing(x16);
    st xorig = x16;
    sym33 = ldf `as.numeric`;
    base33 = ldf `as.numeric` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L370() else L371();
  L375():
    breaks1 = ld breaks;
    check L377() else D86();
  L376():
    r177 = dyn base34(<sym breaks>);
    goto L83(r177);
  L507():
    p44 = prom<V +>{
      apply = ldf apply;
      p42 = prom<V +>{
        proportions2 = ldf proportions;
        p41 = prom<V +>{
          tab24 = ld tab;
          tab25 = force? tab24;
          checkMissing(tab25);
          c74 = `is.object`(tab25);
          if c74 then L1() else L2();
        L0(dx23):
          return dx23;
        L1():
          dr20 = tryDispatchBuiltin.1("[", tab25);
          dc10 = getTryDispatchBuiltinDispatched(dr20);
          if dc10 then L3() else L2();
        L2():
          ncol = ldf ncol;
          p40 = prom<V +>{
            tab28 = ld tab;
            tab29 = force? tab28;
            checkMissing(tab29);
            return tab29;
          };
          r297 = dyn ncol(p40);
          r298 = `:`(r297, 1);
          __8 = ldf `[` in base;
          r299 = dyn __8(tab25, <missing>, r298, FALSE);
          goto L0(r299);
        L3():
          dx22 = getTryDispatchBuiltinValue(dr20);
          goto L0(dx22);
        };
        r301 = dyn proportions2(p41, 1.0);
        return r301;
      };
      p43 = prom<V +>{
        cumsum2 = ld cumsum;
        cumsum3 = force? cumsum2;
        checkMissing(cumsum3);
        return cumsum3;
      };
      r304 = dyn apply(p42, 1, p43);
      return r304;
    };
    r306 = dyn rbind(0.0, p44);
    check L508() else D145();
  D15():
    deopt 69 [r38];
  D19():
    deopt 90 [tab6];
  D39():
    deopt 156 [r96];
  D72():
    deopt 273 [r161];
  D77():
    deopt 285 [xnam];
  D86():
    deopt 317 [breaks1];
  D145():
    deopt 543 [r306];
  L40(dx9):
    st ynam = dx9;
    NCOL = ldf NCOL;
    check L246() else D21();
  L53():
    goto L59();
  L59():
    levels2 = ldf levels;
    check L303() else D52();
  L81(r174):
    st x = r174;
    goto L82();
  L84():
    goto L90();
  L90():
    sym39 = ldf `as.numeric`;
    base39 = ldf `as.numeric` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L396() else L397();
  L226():
    goto L34(r38);
  L241():
    tab7 = force? tab6;
    checkMissing(tab7);
    dimnames3 = ldf dimnames in base;
    r51 = dyn dimnames3(tab7);
    check L242() else D20();
  L243():
    dr6 = tryDispatchBuiltin.1("[[", r50);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L245() else L244(dr6);
  L244(r53):
    __3 = ldf `[[` in base;
    r54 = dyn __3(r53, 2);
    goto L40(r54);
  L278():
    st ylab = r96;
    goto L52();
  L281():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L282() else L283();
  L348():
    off5 = ld off;
    check L349() else D73();
  L356():
    xnam1 = force? xnam;
    checkMissing(xnam1);
    goto L77(xnam1);
  L358():
    xaxlabels3 = ld xaxlabels;
    check L360() else D78();
  L359():
    r167 = dyn base31(<sym xaxlabels>, <sym nx>);
    goto L77(r167);
  L370():
    x17 = ld x;
    check L372() else D84();
  L371():
    r173 = dyn base33(<sym x>);
    goto L81(r173);
  L377():
    breaks2 = force? breaks1;
    checkMissing(breaks2);
    c38 = `==`(breaks2, NULL);
    goto L83(c38);
  L378():
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L379() else L380();
  L508():
    st yat = r306;
    l12 = ld yat;
    c75 = `is.object`(l12);
    if c75 then L509() else L510(1.0, l12);
  D20():
    deopt 93 [r51];
  D21():
    deopt 99 [];
  D52():
    deopt 201 [];
  D73():
    deopt 273 [r161, off5];
  D78():
    deopt 289 [xaxlabels3];
  D84():
    deopt 309 [x17];
  L54(r99):
    c24 = `as.logical`(r99);
    if c24 then L285() else L55();
  L85(r180):
    c41 = `as.logical`(r180);
    if c41 then L382() else L86();
  L91(r195):
    st breaks = r195;
    sym40 = ldf length;
    base40 = ldf length in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L400() else L401();
  L123(dx25):
    st yat = dx25;
    sym57 = ldf `is.null`;
    base57 = ldf `is.null` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L516() else L517();
  L242():
    goto L39(r51);
  L245():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L40(dx8);
  L246():
    p1 = prom<V +>{
      tab8 = ld tab;
      tab9 = force? tab8;
      checkMissing(tab9);
      return tab9;
    };
    r56 = dyn NCOL(p1);
    check L247() else D22();
  L282():
    weights3 = ld weights;
    check L284() else D41();
  L283():
    r98 = dyn base19(<sym weights>);
    goto L54(r98);
  L303():
    p18 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    r133 = dyn levels2(p18);
    check L304() else D53();
  L349():
    off6 = force? off5;
    checkMissing(off6);
    r162 = `+`(r161, off6);
    cumsum = ldf cumsum in base;
    r163 = dyn cumsum(r162);
    check L350() else D74();
  L360():
    xaxlabels4 = force? xaxlabels3;
    checkMissing(xaxlabels4);
    nx = ld nx;
    check L361() else D79();
  L372():
    x18 = force? x17;
    checkMissing(x18);
    as_numeric = ldf `as.numeric` in base;
    r175 = dyn as_numeric(x18);
    check L373() else D85();
  L379():
    weights7 = ld weights;
    check L381() else D87();
  L380():
    r179 = dyn base35(<sym weights>);
    goto L85(r179);
  L396():
    breaks3 = ld breaks;
    check L398() else D93();
  L397():
    r194 = dyn base39(<sym breaks>);
    goto L91(r194);
  L509():
    dr22 = tryDispatchBuiltin.0("[<-", l12, 1.0);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L511() else L510(1.0, dr22);
  L510(r308, l14):
    sym56 = ldf `is.na`;
    base56 = ldf `is.na` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L512() else L513();
  D22():
    deopt 101 [r56];
  D41():
    deopt 163 [weights3];
  D53():
    deopt 203 [r133];
  D74():
    deopt 277 [r163];
  D79():
    deopt 291 [nx];
  D85():
    deopt 312 [r175];
  D87():
    deopt 321 [weights7];
  D93():
    deopt 347 [breaks3];
  L55():
    as_table = ldf `as.table`;
    check L289() else D44();
  L56():
    levels1 = ldf levels;
    check L298() else D48();
  L86():
    sym36 = ldf ceiling;
    base36 = ldf ceiling in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L386() else L387();
  L87(r183):
    st breaks = r183;
    goto L90();
  L92(r198):
    r200 = `==`(r198, 1);
    c42 = `as.logical`(r200);
    if c42 then L404() else L93();
  L124(r316, l17, r317, r318):
    ___2 = ldf `[<-` in base;
    r320 = dyn ___2(l17, r317, r318);
    goto L123(r320);
  L125(r322):
    c77 = `as.logical`(r322);
    if c77 then L519() else L126();
  L247():
    st ny = r56;
    NROW = ldf NROW;
    check L248() else D23();
  L284():
    weights4 = force? weights3;
    checkMissing(weights4);
    c23 = `==`(weights4, NULL);
    goto L54(c23);
  L285():
    table = ldf table;
    check L286() else D42();
  L304():
    st ynam = r133;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L305() else L306();
  L350():
    goto L74(r163);
  L361():
    nx1 = force? nx;
    checkMissing(nx1);
    rep_len2 = ldf rep_len in base;
    r168 = dyn rep_len2(xaxlabels4, nx1);
    check L362() else D80();
  L373():
    goto L81(r175);
  L381():
    weights8 = force? weights7;
    checkMissing(weights8);
    c40 = `==`(weights8, NULL);
    goto L85(c40);
  L382():
    nclass_Sturges = ldf `nclass.Sturges`;
    check L383() else D88();
  L398():
    breaks4 = force? breaks3;
    checkMissing(breaks4);
    as_numeric1 = ldf `as.numeric` in base;
    r196 = dyn as_numeric1(breaks4);
    check L399() else D94();
  L400():
    breaks5 = ld breaks;
    check L402() else D95();
  L401():
    r197 = dyn base40(<sym breaks>);
    goto L92(r197);
  L511():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L123(dx24);
  L512():
    yat = ld yat;
    check L514() else D146();
  L513():
    r315 = dyn base56(<sym yat>);
    goto L124(r308, l14, 1.0, r315);
  L516():
    xlim1 = ld xlim;
    check L518() else D148();
  L517():
    r321 = dyn base57(<sym xlim>);
    goto L125(r321);
  D23():
    deopt 104 [];
  D42():
    deopt 167 [];
  D44():
    deopt 173 [];
  D48():
    deopt 189 [];
  D80():
    deopt 294 [r168];
  D88():
    deopt 325 [];
  D94():
    deopt 350 [r196];
  D95():
    deopt 354 [breaks5];
  D146():
    deopt 550 [r308, l14, 1.0, yat];
  D148():
    deopt 557 [xlim1];
  L60(r135):
    st ny = r135;
    goto L41();
  L93():
    goto L107();
  L107():
    cut = ldf cut;
    check L447() else D115();
  L126():
    sym59 = ldf any;
    base59 = ldf any in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L526() else L527();
  L128():
    sym69 = ldf any;
    base69 = ldf any in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L572() else L573();
  L248():
    p2 = prom<V +>{
      tab10 = ld tab;
      tab11 = force? tab10;
      checkMissing(tab11);
      return tab11;
    };
    r58 = dyn NROW(p2);
    check L249() else D24();
  L286():
    p10 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p11 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r102 = dyn table(p10, p11);
    check L287() else D43();
  L289():
    p15 = prom<V +>{
      tapply = ldf tapply;
      p12 = prom<V +>{
        weights5 = ld weights;
        weights6 = force? weights5;
        checkMissing(weights6);
        return weights6;
      };
      p13 = prom<V +>{
        sym20 = ldf list;
        base20 = ldf list in base;
        guard20 = `==`.4(sym20, base20);
        if guard20 then L1() else L2();
      L0(r106):
        return r106;
      L1():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        y9 = ld y;
        y10 = force? y9;
        checkMissing(y10);
        list = ldf list in base;
        r107 = dyn list(x10, y10);
        goto L0(r107);
      L2():
        r105 = dyn base20(<sym x>, <sym y>);
        goto L0(r105);
      };
      p14 = prom<V +>{
        sum = ld sum;
        sum1 = force? sum;
        checkMissing(sum1);
        return sum1;
      };
      r110 = dyn tapply[, , FUN, `na.rm`](p12, p13, p14, TRUE);
      return r110;
    };
    r112 = dyn as_table(p15);
    check L290() else D45();
  L298():
    p16 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r128 = dyn levels1(p16);
    check L299() else D49();
  L305():
    ynam = ld ynam;
    check L307() else D54();
  L306():
    r134 = dyn base22(<sym ynam>);
    goto L60(r134);
  L362():
    goto L77(r168);
  L383():
    p22 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r182 = dyn nclass_Sturges(p22);
    check L384() else D89();
  L386():
    sym37 = ldf log2;
    base37 = ldf log2 in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L388() else L389();
  L387():
    r184 = dyn base36(<lang `+`(log2(sum(weights)), 1.0)>);
    goto L87(r184);
  L399():
    goto L91(r196);
  L402():
    breaks6 = force? breaks5;
    checkMissing(breaks6);
    length2 = ldf length in base;
    r199 = dyn length2(breaks6);
    check L403() else D96();
  L404():
    sym41 = ldf `is.numeric`;
    base41 = ldf `is.numeric` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L405() else L406();
  L514():
    yat1 = force? yat;
    checkMissing(yat1);
    is_na2 = ldf `is.na` in base;
    r319 = dyn is_na2(yat1);
    check L515() else D147();
  L518():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c76 = `==`(xlim2, NULL);
    goto L125(c76);
  L519():
    sym58 = ldf c;
    base58 = ldf c in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L520() else L521();
  D24():
    deopt 106 [r58];
  D43():
    deopt 170 [r102];
  D45():
    deopt 175 [r112];
  D49():
    deopt 191 [r128];
  D54():
    deopt 207 [ynam];
  D89():
    deopt 327 [r182];
  D96():
    deopt 357 [r199];
  D115():
    deopt 439 [];
  D147():
    deopt 553 [r308, l14, 1.0, r319];
  L88(r186):
    r191 = `+`(r186, 1.0);
    r192 = ceiling(r191);
    goto L87(r192);
  L94(r202):
    r204 = `!`(r202);
    c43 = `as.logical`(r204);
    if c43 then L95(c43) else L409();
  L127(r324):
    st xlim = r324;
    goto L128();
  L129(r331):
    c79 = `as.logical`(r331);
    if c79 then L130(c79) else L530();
  L144(r367):
    c101 = `as.logical`(r367);
    if c101 then L145(c101) else L576();
  L249():
    st nx = r58;
    goto L41();
  L287():
    st tab = r102;
    goto L56();
  L290():
    st tab = r112;
    l = ld tab;
    c25 = `is.object`(l);
    if c25 then L291() else L292(0.0, l);
  L299():
    st xnam = r128;
    NROW1 = ldf NROW;
    check L300() else D50();
  L307():
    ynam1 = force? ynam;
    checkMissing(ynam1);
    length1 = ldf length in base;
    r136 = dyn length1(ynam1);
    check L308() else D55();
  L384():
    goto L87(r182);
  L388():
    sym38 = ldf sum;
    base38 = ldf sum in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L390() else L391();
  L389():
    r185 = dyn base37(<lang sum(weights)>);
    goto L88(r185);
  L403():
    goto L92(r199);
  L405():
    breaks7 = ld breaks;
    check L407() else D97();
  L406():
    r201 = dyn base41(<sym breaks>);
    goto L94(r201);
  L447():
    p27 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p28 = prom<V +>{
      breaks19 = ld breaks;
      breaks20 = force? breaks19;
      checkMissing(breaks20);
      return breaks20;
    };
    r234 = dyn cut[, breaks, `include.lowest`](p27, p28, TRUE);
    check L448() else D116();
  L515():
    goto L124(r308, l14, 1.0, r319);
  L520():
    off7 = ld off;
    check L522() else D149();
  L521():
    r323 = dyn base58(0.0, <lang `+`(1.0, `*`(off, `(`(`-`(nx, 1))))>);
    goto L127(r323);
  L526():
    xlim3 = ld xlim;
    check L528() else D152();
  L527():
    r330 = dyn base59(<lang `<`(xlim, 0.0)>);
    goto L129(r330);
  L572():
    ylim1 = ld ylim;
    check L574() else D170();
  L573():
    r366 = dyn base69(<lang `<`(ylim, 0.0)>);
    goto L144(r366);
  D50():
    deopt 194 [];
  D55():
    deopt 210 [r136];
  D97():
    deopt 362 [breaks7];
  D116():
    deopt 445 [r234];
  D149():
    deopt 564 [1.0, off7];
  D152():
    deopt 576 [xlim3];
  D170():
    deopt 650 [ylim1];
  L57(r116, dx13):
    st tab = dx13;
    goto L56();
  L89(r188):
    log2 = ldf log2 in base;
    r190 = dyn log2(r188);
    check L394() else D92();
  L95(c44):
    c52 = `as.logical`(c44);
    if c52 then L97(c52) else L415();
  L130(c80):
    c88 = `as.logical`(c80);
    if c88 then L536() else L132();
  L145(c102):
    c110 = `as.logical`(c102);
    if c110 then L582() else L147();
  L291():
    dr10 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L293() else L292(0.0, dr10);
  L292(r114, l2):
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L294() else L295();
  L300():
    p17 = prom<V +>{
      tab14 = ld tab;
      tab15 = force? tab14;
      checkMissing(tab15);
      return tab15;
    };
    r130 = dyn NROW1(p17);
    check L301() else D51();
  L308():
    goto L60(r136);
  L390():
    weights9 = ld weights;
    check L392() else D90();
  L391():
    r187 = dyn base38(<sym weights>);
    goto L89(r187);
  L407():
    breaks8 = force? breaks7;
    checkMissing(breaks8);
    is_numeric2 = ldf `is.numeric` in base;
    r203 = dyn is_numeric2(breaks8);
    check L408() else D98();
  L409():
    sym42 = ldf `is.finite`;
    base42 = ldf `is.finite` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L410() else L411();
  L448():
    st x1 = r234;
    sym46 = ldf `is.null`;
    base46 = ldf `is.null` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L449() else L450();
  L522():
    off8 = force? off7;
    checkMissing(off8);
    nx4 = ld nx;
    check L523() else D150();
  L528():
    xlim4 = force? xlim3;
    checkMissing(xlim4);
    r332 = `<`(xlim4, 0.0);
    any = ldf any in base;
    r333 = dyn any(r332);
    check L529() else D153();
  L530():
    sym60 = ldf any;
    base60 = ldf any in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L531() else L532();
  L574():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    r368 = `<`(ylim2, 0.0);
    any2 = ldf any in base;
    r369 = dyn any2(r368);
    check L575() else D171();
  L576():
    sym70 = ldf any;
    base70 = ldf any in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L577() else L578();
  D51():
    deopt 196 [r130];
  D90():
    deopt 333 [weights9];
  D92():
    deopt 338 [r190];
  D98():
    deopt 365 [r203];
  D150():
    deopt 565 [1.0, off8, nx4];
  D153():
    deopt 581 [r333];
  D171():
    deopt 655 [r369];
  L58(r122, l5, r123, r124):
    ___ = ldf `[<-` in base;
    r126 = dyn ___(l5, r123, r124);
    goto L57(r122, r126);
  L96(c48, r206):
    r208 = `!`(r206);
    c49 = `as.logical`(r208);
    c50 = `||`(c48, c49);
    goto L95(c50);
  L97(c53):
    c58 = `as.logical`(c53);
    if c58 then L418() else L98();
  L108(r236):
    c64 = `as.logical`(r236);
    if c64 then L452() else L109();
  L131(c84, r335):
    c85 = `as.logical`(r335);
    c86 = `||`(c84, c85);
    goto L130(c86);
  L132():
    goto L128();
  L146(c106, r371):
    c107 = `as.logical`(r371);
    c108 = `||`(c106, c107);
    goto L145(c108);
  L147():
    goto L159();
  L159():
    dev_hold = ldf `dev.hold`;
    check L618() else D188();
  L293():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L57(0.0, dx12);
  L294():
    tab12 = ld tab;
    check L296() else D46();
  L295():
    r121 = dyn base21(<sym tab>);
    goto L58(r114, l2, 0.0, r121);
  L301():
    st nx = r130;
    goto L59();
  L392():
    weights10 = force? weights9;
    checkMissing(weights10);
    sum2 = ldf sum in base;
    r189 = dyn sum2(weights10);
    check L393() else D91();
  L394():
    goto L88(r190);
  L408():
    goto L94(r203);
  L410():
    breaks9 = ld breaks;
    check L412() else D99();
  L411():
    r205 = dyn base42(<sym breaks>);
    goto L96(c43, r205);
  L415():
    breaks11 = ld breaks;
    check L416() else D101();
  L449():
    weights15 = ld weights;
    check L451() else D117();
  L450():
    r235 = dyn base46(<sym weights>);
    goto L108(r235);
  L523():
    nx5 = force? nx4;
    checkMissing(nx5);
    r325 = `-`(nx5, 1);
    r326 = `*`(off8, r325);
    r327 = `+`(1.0, r326);
    c78 = ldf c in base;
    r328 = dyn c78(0.0, r327);
    check L524() else D151();
  L529():
    goto L129(r333);
  L531():
    xlim5 = ld xlim;
    check L533() else D154();
  L532():
    r334 = dyn base60(<lang `>`(xlim, 1.0)>);
    goto L131(c79, r334);
  L536():
    warning1 = ldf warning;
    check L537() else D156();
  L575():
    goto L144(r369);
  L577():
    ylim3 = ld ylim;
    check L579() else D172();
  L578():
    r370 = dyn base70(<lang `>`(ylim, 1.0)>);
    goto L146(c101, r370);
  L582():
    warning2 = ldf warning;
    check L583() else D174();
  D46():
    deopt 182 [r114, l2, 0.0, tab12];
  D91():
    deopt 336 [r189];
  D99():
    deopt 369 [c43, breaks9];
  D101():
    deopt 375 [c52, breaks11];
  D117():
    deopt 448 [weights15];
  D151():
    deopt 572 [r328];
  D154():
    deopt 584 [c79, xlim5];
  D156():
    deopt 592 [];
  D172():
    deopt 658 [c101, ylim3];
  D174():
    deopt 666 [];
  D188():
    deopt 723 [];
  L98():
    goto L99();
  L99():
    breaks13 = ld breaks;
    check L422() else D104();
  L109():
    as_table1 = ldf `as.table`;
    check L456() else D120();
  L110():
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L465() else L466();
  L296():
    tab13 = force? tab12;
    checkMissing(tab13);
    is_na = ldf `is.na` in base;
    r125 = dyn is_na(tab13);
    check L297() else D47();
  L393():
    goto L89(r189);
  L412():
    breaks10 = force? breaks9;
    checkMissing(breaks10);
    is_finite = ldf `is.finite` in base;
    r207 = dyn is_finite(breaks10);
    check L413() else D100();
  L416():
    breaks12 = force? breaks11;
    checkMissing(breaks12);
    r209 = `<`(breaks12, 1);
    c55 = `as.logical`(r209);
    c56 = `||`(c52, c55);
    goto L97(c56);
  L418():
    stop3 = ldf stop;
    check L419() else D102();
  L451():
    weights16 = force? weights15;
    checkMissing(weights16);
    c63 = `==`(weights16, NULL);
    goto L108(c63);
  L452():
    table1 = ldf table;
    check L453() else D118();
  L524():
    goto L127(r328);
  L533():
    xlim6 = force? xlim5;
    checkMissing(xlim6);
    r336 = `>`(xlim6, 1.0);
    any1 = ldf any in base;
    r337 = dyn any1(r336);
    check L534() else D155();
  L537():
    r338 = dyn warning1("x axis is on a cumulative probability scale, 'xlim' must be in [0,1]");
    check L538() else D157();
  L579():
    ylim4 = force? ylim3;
    checkMissing(ylim4);
    r372 = `>`(ylim4, 1.0);
    any3 = ldf any in base;
    r373 = dyn any3(r372);
    check L580() else D173();
  L583():
    r374 = dyn warning2("y axis is on a cumulative probability scale, 'ylim' must be in [0,1]");
    check L584() else D175();
  L618():
    r403 = dyn dev_hold();
    check L619() else D189();
  D47():
    deopt 185 [r114, l2, 0.0, r125];
  D100():
    deopt 372 [c43, r207];
  D102():
    deopt 381 [];
  D104():
    deopt 386 [breaks13];
  D118():
    deopt 452 [];
  D120():
    deopt 458 [];
  D155():
    deopt 589 [c79, r337];
  D157():
    deopt 594 [r338];
  D173():
    deopt 663 [c101, r373];
  D175():
    deopt 668 [r374];
  D189():
    deopt 724 [r403];
  L113(r265):
    st xat = r265;
    NROW2 = ldf NROW;
    check L473() else D128();
  L297():
    goto L58(r114, l2, 0.0, r125);
  L413():
    goto L96(c43, r207);
  L419():
    r210 = dyn stop3("invalid number of 'breaks'");
    check L420() else D103();
  L422():
    breaks14 = force? breaks13;
    checkMissing(breaks14);
    r212 = `>`(breaks14, 1000000.0);
    c59 = `as.logical`(r212);
    if c59 then L423() else L100();
  L453():
    p29 = prom<V +>{
      x29 = ld x1;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p30 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    r239 = dyn table1(p29, p30);
    check L454() else D119();
  L456():
    p34 = prom<V +>{
      tapply1 = ldf tapply;
      p31 = prom<V +>{
        weights17 = ld weights;
        weights18 = force? weights17;
        checkMissing(weights18);
        return weights18;
      };
      p32 = prom<V +>{
        sym47 = ldf list;
        base47 = ldf list in base;
        guard47 = `==`.4(sym47, base47);
        if guard47 then L1() else L2();
      L0(r243):
        return r243;
      L1():
        x31 = ld x1;
        x32 = force? x31;
        checkMissing(x32);
        y15 = ld y;
        y16 = force? y15;
        checkMissing(y16);
        list1 = ldf list in base;
        r244 = dyn list1(x32, y16);
        goto L0(r244);
      L2():
        r242 = dyn base47(<sym x1>, <sym y>);
        goto L0(r242);
      };
      p33 = prom<V +>{
        sum3 = ld sum;
        sum4 = force? sum3;
        checkMissing(sum4);
        return sum4;
      };
      r247 = dyn tapply1[, , FUN, `na.rm`](p31, p32, p33, TRUE);
      return r247;
    };
    r249 = dyn as_table1(p34);
    check L457() else D121();
  L465():
    sym50 = ldf cumsum;
    base50 = ldf cumsum in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L467() else L468();
  L466():
    r264 = dyn base49(0.0, <lang cumsum(proportions(marginSums(tab, 1.0)))>);
    goto L113(r264);
  L534():
    goto L131(c79, r337);
  L538():
    sym61 = ldf min;
    base61 = ldf min in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L539() else L540();
  L580():
    goto L146(c101, r373);
  L584():
    sym71 = ldf min;
    base71 = ldf min in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L585() else L586();
  L619():
    sym79 = ldf `on.exit`;
    base79 = ldf `on.exit` in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L620() else L621();
  D103():
    deopt 383 [r210];
  D119():
    deopt 455 [r239];
  D121():
    deopt 460 [r249];
  D128():
    deopt 488 [];
  L100():
    goto L101();
  L101():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L427() else L428();
  L114(r267):
    c66 = ldf c in base;
    r273 = dyn c66(0.0, r267);
    check L472() else D127();
  L133(r340):
    r342 = `>`(r340, 1.0);
    c89 = `as.logical`(r342);
    if c89 then L134(c89) else L543();
  L148(r376):
    r378 = `>`(r376, 1.0);
    c111 = `as.logical`(r378);
    if c111 then L149(c111) else L589();
  L160():
    plot = ldf plot;
    check L622() else D190();
  L420():
    goto L99();
  L423():
    warning = ldf warning;
    check L424() else D105();
  L454():
    st tab = r239;
    goto L110();
  L457():
    st tab = r249;
    l6 = ld tab;
    c65 = `is.object`(l6);
    if c65 then L458() else L459(0.0, l6);
  L467():
    proportions1 = ldf proportions;
    check L469() else D124();
  L468():
    r266 = dyn base50(<lang proportions(marginSums(tab, 1.0))>);
    goto L114(r266);
  L473():
    p37 = prom<V +>{
      tab22 = ld tab;
      tab23 = force? tab22;
      checkMissing(tab23);
      return tab23;
    };
    r275 = dyn NROW2(p37);
    check L474() else D129();
  L539():
    xlim7 = ld xlim;
    check L541() else D158();
  L540():
    r339 = dyn base61(<sym xlim>);
    goto L133(r339);
  L585():
    ylim5 = ld ylim;
    check L587() else D176();
  L586():
    r375 = dyn base71(<sym ylim>);
    goto L148(r375);
  L620():
    on_exit = ldf `on.exit` in base;
    r406 = dyn on_exit(<lang dev.flush()>);
    goto L160();
  L621():
    r404 = dyn base79(<lang dev.flush()>);
    goto L160();
  D105():
    deopt 391 [];
  D124():
    deopt 479 [];
  D127():
    deopt 485 [r273];
  D129():
    deopt 490 [r275];
  D158():
    deopt 597 [xlim7];
  D176():
    deopt 671 [ylim5];
  D190():
    deopt 729 [];
  L102(r219):
    c61 = `as.logical`(r219);
    if c61 then L430() else L103();
  L111(r253, dx17):
    st tab = dx17;
    goto L110();
  L134(c90):
    c98 = `as.logical`(c90);
    if c98 then L549() else L136();
  L149(c112):
    c120 = `as.logical`(c112);
    if c120 then L595() else L151();
  L424():
    p24 = prom<V +>{
      gettextf = ldf gettextf;
      p23 = prom<V +>{
        breaks15 = ld breaks;
        breaks16 = force? breaks15;
        checkMissing(breaks16);
        return breaks16;
      };
      r214 = dyn gettextf("'breaks = %g' is too large and set to 1e6", p23);
      return r214;
    };
    r216 = dyn warning[, domain](p24, NA_LGL);
    check L425() else D106();
  L427():
    weights11 = ld weights;
    check L429() else D107();
  L428():
    r218 = dyn base43(<sym weights>);
    goto L102(r218);
  L458():
    dr14 = tryDispatchBuiltin.0("[<-", l6, 0.0);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L460() else L459(0.0, dr14);
  L459(r251, l8):
    sym48 = ldf `is.na`;
    base48 = ldf `is.na` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L461() else L462();
  L469():
    p36 = prom<V +>{
      marginSums1 = ldf marginSums;
      p35 = prom<V +>{
        tab20 = ld tab;
        tab21 = force? tab20;
        checkMissing(tab21);
        return tab21;
      };
      r269 = dyn marginSums1(p35, 1.0);
      return r269;
    };
    r271 = dyn proportions1(p36);
    check L470() else D125();
  L472():
    goto L113(r273);
  L474():
    st nx = r275;
    sym51 = ldf `is.null`;
    base51 = ldf `is.null` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L475() else L476();
  L541():
    xlim8 = force? xlim7;
    checkMissing(xlim8);
    min = ldf min in base;
    r341 = dyn min(xlim8);
    check L542() else D159();
  L543():
    sym62 = ldf max;
    base62 = ldf max in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L544() else L545();
  L587():
    ylim6 = force? ylim5;
    checkMissing(ylim6);
    min3 = ldf min in base;
    r377 = dyn min3(ylim6);
    check L588() else D177();
  L589():
    sym72 = ldf max;
    base72 = ldf max in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L590() else L591();
  L622():
    p45 = prom<V +>{
      xlim15 = ld xlim;
      xlim16 = force? xlim15;
      checkMissing(xlim16);
      return xlim16;
    };
    p46 = prom<V +>{
      ylim13 = ld ylim;
      ylim14 = force? ylim13;
      checkMissing(ylim14);
      return ylim14;
    };
    p47 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p48 = prom<V +>{
      xlab5 = ld xlab;
      xlab6 = force? xlab5;
      checkMissing(xlab6);
      return xlab6;
    };
    p49 = prom<V +>{
      ylab5 = ld ylab;
      ylab6 = force? ylab5;
      checkMissing(ylab6);
      return ylab6;
    };
    r412 = dyn plot[, , xlim, ylim, type, axes, xaxs, yaxs, main, xlab, ylab](0.0, 0.0, p45, p46, "n", FALSE, "i", "i", p47, p48, p49);
    check L623() else D191();
  D106():
    deopt 395 [r216];
  D107():
    deopt 402 [weights11];
  D125():
    deopt 481 [r271];
  D159():
    deopt 600 [r341];
  D177():
    deopt 674 [r377];
  D191():
    deopt 750 [r412];
  L103():
    sym45 = ldf range;
    base45 = ldf range in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L436() else L437();
  L105(r223):
    st rg = r223;
    pretty = ldf pretty;
    check L444() else D113();
  L112(r259, l11, r260, r261):
    ___1 = ldf `[<-` in base;
    r263 = dyn ___1(l11, r260, r261);
    goto L111(r259, r263);
  L115(r277):
    c68 = `as.logical`(r277);
    if c68 then L478() else L116();
  L135(c94, r344):
    r346 = `<`(r344, 0.0);
    c95 = `as.logical`(r346);
    c96 = `||`(c94, c95);
    goto L134(c96);
  L136():
    sym64 = ldf c;
    base64 = ldf c in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L554() else L555();
  L138(r350):
    goto L128();
  L150(c116, r380):
    r382 = `<`(r380, 0.0);
    c117 = `as.logical`(r382);
    c118 = `||`(c116, c117);
    goto L149(c118);
  L151():
    sym74 = ldf c;
    base74 = ldf c in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L600() else L601();
  L153(r386):
    goto L159();
  L425():
    st breaks = 1000000;
    goto L101();
  L429():
    weights12 = force? weights11;
    checkMissing(weights12);
    c60 = `==`(weights12, NULL);
    goto L102(c60);
  L430():
    sym44 = ldf range;
    base44 = ldf range in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L431() else L432();
  L460():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L111(0.0, dx16);
  L461():
    tab18 = ld tab;
    check L463() else D122();
  L462():
    r258 = dyn base48(<sym tab>);
    goto L112(r251, l8, 0.0, r258);
  L470():
    cumsum1 = ldf cumsum in base;
    r272 = dyn cumsum1(r271);
    check L471() else D126();
  L475():
    xaxlabels5 = ld xaxlabels;
    check L477() else D130();
  L476():
    r276 = dyn base51(<sym xaxlabels>);
    goto L115(r276);
  L542():
    goto L133(r341);
  L544():
    xlim9 = ld xlim;
    check L546() else D160();
  L545():
    r343 = dyn base62(<sym xlim>);
    goto L135(c89, r343);
  L549():
    sym63 = ldf c;
    base63 = ldf c in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L550() else L551();
  L588():
    goto L148(r377);
  L590():
    ylim7 = ld ylim;
    check L592() else D178();
  L591():
    r379 = dyn base72(<sym ylim>);
    goto L150(c111, r379);
  L595():
    sym73 = ldf c;
    base73 = ldf c in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L596() else L597();
  L623():
    as_vector = ldf `as.vector`;
    check L624() else D192();
  D113():
    deopt 428 [];
  D122():
    deopt 467 [r251, l8, 0.0, tab18];
  D126():
    deopt 483 [r272];
  D130():
    deopt 493 [xaxlabels5];
  D160():
    deopt 605 [c89, xlim9];
  D178():
    deopt 679 [c111, ylim7];
  D192():
    deopt 752 [];
  L104(r221):
    goto L105(r221);
  L116():
    sym55 = ldf rep_len;
    base55 = ldf rep_len in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L500() else L501();
  L122(breaks24):
    st xaxlabels = breaks24;
    goto L78();
  L137(r348):
    st xlim = r348;
    goto L138(r348);
  L139(r352):
    st xlim = r352;
    goto L138(r352);
  L152(r384):
    st ylim = r384;
    goto L153(r384);
  L154(r388):
    st ylim = r388;
    goto L153(r388);
  L431():
    x21 = ld x;
    check L433() else D108();
  L432():
    r220 = dyn base44[, `na.rm`](<sym x>, TRUE);
    goto L104(r220);
  L436():
    x23 = ld x;
    check L438() else D110();
  L437():
    r224 = dyn base45[, `na.rm`](<lang `[`(x, `>`(weights, 0.0))>, TRUE);
    goto L105(r224);
  L444():
    p25 = prom<V +>{
      rg = ld rg;
      rg1 = force? rg;
      checkMissing(rg1);
      return rg1;
    };
    p26 = prom<V +>{
      breaks17 = ld breaks;
      breaks18 = force? breaks17;
      checkMissing(breaks18);
      return breaks18;
    };
    r230 = dyn pretty[, n, `min.n`](p25, p26, 1.0);
    check L445() else D114();
  L463():
    tab19 = force? tab18;
    checkMissing(tab19);
    is_na1 = ldf `is.na` in base;
    r262 = dyn is_na1(tab19);
    check L464() else D123();
  L471():
    goto L114(r272);
  L477():
    xaxlabels6 = force? xaxlabels5;
    checkMissing(xaxlabels6);
    c67 = `==`(xaxlabels6, NULL);
    goto L115(c67);
  L478():
    xnumeric = ld xnumeric;
    check L479() else D131();
  L546():
    xlim10 = force? xlim9;
    checkMissing(xlim10);
    max = ldf max in base;
    r345 = dyn max(xlim10);
    check L547() else D161();
  L550():
    c99 = ldf c in base;
    r349 = dyn c99(0.0, 1.0);
    check L552() else D162();
  L551():
    r347 = dyn base63(0.0, 1.0);
    goto L137(r347);
  L554():
    sym65 = ldf max;
    base65 = ldf max in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L556() else L557();
  L555():
    r351 = dyn base64(<lang max(min(xlim), 0.0)>, <lang min(max(xlim), 1.0)>);
    goto L139(r351);
  L592():
    ylim8 = force? ylim7;
    checkMissing(ylim8);
    max3 = ldf max in base;
    r381 = dyn max3(ylim8);
    check L593() else D179();
  L596():
    c121 = ldf c in base;
    r385 = dyn c121(0.0, 1.0);
    check L598() else D180();
  L597():
    r383 = dyn base73(0.0, 1.0);
    goto L152(r383);
  L600():
    sym75 = ldf max;
    base75 = ldf max in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L602() else L603();
  L601():
    r387 = dyn base74(<lang max(min(ylim), 0.0)>, <lang min(max(ylim), 1.0)>);
    goto L154(r387);
  L624():
    p50 = prom<V +>{
      yat2 = ld yat;
      yat3 = force? yat2;
      checkMissing(yat3);
      c123 = `is.object`(yat3);
      if c123 then L1() else L2();
    L0(dx27):
      return dx27;
    L1():
      dr24 = tryDispatchBuiltin.1("[", yat3);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2();
    L2():
      ny6 = ld ny;
      ny7 = force? ny6;
      checkMissing(ny7);
      r413 = `+`(ny7, 1);
      r414 = `-`(<missing>, r413);
      __9 = ldf `[` in base;
      r415 = dyn __9(yat3, r414, <missing>);
      goto L0(r415);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx26);
    };
    r417 = dyn as_vector(p50);
    check L625() else D193();
  D108():
    deopt 407 [x21];
  D110():
    deopt 415 [x23];
  D114():
    deopt 434 [r230];
  D123():
    deopt 470 [r251, l8, 0.0, r262];
  D131():
    deopt 496 [xnumeric];
  D161():
    deopt 608 [c89, r345];
  D162():
    deopt 617 [r349];
  D179():
    deopt 682 [c111, r381];
  D180():
    deopt 691 [r385];
  D193():
    deopt 754 [r417];
  L140(r354):
    sym67 = ldf min;
    base67 = ldf min in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L563() else L564();
  L155(r390):
    sym77 = ldf min;
    base77 = ldf min in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L609() else L610();
  L433():
    x22 = force? x21;
    checkMissing(x22);
    range = ldf range in base;
    r222 = dyn range(x22, TRUE);
    check L434() else D109();
  L438():
    x24 = force? x23;
    checkMissing(x24);
    c62 = `is.object`(x24);
    if c62 then L439() else L440(x24);
  L445():
    st breaks = r230;
    goto L107();
  L464():
    goto L112(r251, l8, 0.0, r262);
  L479():
    xnumeric1 = force? xnumeric;
    checkMissing(xnumeric1);
    c69 = `as.logical`(xnumeric1);
    if c69 then L480() else L117();
  L500():
    xaxlabels7 = ld xaxlabels;
    check L502() else D139();
  L501():
    r291 = dyn base55(<sym xaxlabels>, <lang `+`(nx, 1)>);
    goto L122(r291);
  L547():
    goto L135(c89, r345);
  L552():
    goto L137(r349);
  L556():
    sym66 = ldf min;
    base66 = ldf min in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L558() else L559();
  L557():
    r353 = dyn base65(<lang min(xlim)>, 0.0);
    goto L140(r353);
  L593():
    goto L150(c111, r381);
  L598():
    goto L152(r385);
  L602():
    sym76 = ldf min;
    base76 = ldf min in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L604() else L605();
  L603():
    r389 = dyn base75(<lang min(ylim)>, 0.0);
    goto L155(r389);
  L625():
    st ybottom = r417;
    as_vector1 = ldf `as.vector`;
    check L626() else D194();
  D109():
    deopt 412 [r222];
  D139():
    deopt 525 [xaxlabels7];
  D194():
    deopt 757 [];
  L106(dx15):
    range1 = ldf range in base;
    r227 = dyn range1(dx15, TRUE);
    check L443() else D112();
  L117():
    sym52 = ldf c;
    base52 = ldf c in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L483() else L484();
  L118(breaks23):
    goto L122(breaks23);
  L141(r356):
    max1 = ldf max in base;
    r358 = dyn max1(r356, 0.0);
    check L562() else D165();
  L142(r360):
    c100 = ldf c in base;
    r365 = dyn c100(r354, r360);
    check L570() else D169();
  L156(r392):
    max4 = ldf max in base;
    r394 = dyn max4(r392, 0.0);
    check L608() else D183();
  L157(r396):
    c122 = ldf c in base;
    r401 = dyn c122(r390, r396);
    check L616() else D187();
  L434():
    goto L104(r222);
  L439():
    dr12 = tryDispatchBuiltin.1("[", x24);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L441() else L440(dr12);
  L440(x26):
    weights13 = ld weights;
    check L442() else D111();
  L480():
    breaks21 = ld breaks;
    check L481() else D132();
  L502():
    xaxlabels8 = force? xaxlabels7;
    checkMissing(xaxlabels8);
    nx2 = ld nx;
    check L503() else D140();
  L558():
    xlim11 = ld xlim;
    check L560() else D163();
  L559():
    r355 = dyn base66(<sym xlim>);
    goto L141(r355);
  L563():
    sym68 = ldf max;
    base68 = ldf max in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L565() else L566();
  L564():
    r359 = dyn base67(<lang max(xlim)>, 1.0);
    goto L142(r359);
  L604():
    ylim9 = ld ylim;
    check L606() else D181();
  L605():
    r391 = dyn base76(<sym ylim>);
    goto L156(r391);
  L609():
    sym78 = ldf max;
    base78 = ldf max in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L611() else L612();
  L610():
    r395 = dyn base77(<lang max(ylim)>, 1.0);
    goto L157(r395);
  L626():
    p51 = prom<V +>{
      yat6 = ld yat;
      yat7 = force? yat6;
      checkMissing(yat7);
      c124 = `is.object`(yat7);
      if c124 then L1() else L2();
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", yat7);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2();
    L2():
      __10 = ldf `[` in base;
      r418 = dyn __10(yat7, -1, <missing>);
      goto L0(r418);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    r420 = dyn as_vector1(p51);
    check L627() else D195();
  D111():
    deopt 417 [x26, weights13];
  D112():
    deopt 425 [r227];
  D132():
    deopt 498 [breaks21];
  D140():
    deopt 527 [nx2];
  D163():
    deopt 625 [xlim11];
  D165():
    deopt 631 [r358];
  D169():
    deopt 644 [r365];
  D181():
    deopt 699 [ylim9];
  D183():
    deopt 705 [r394];
  D187():
    deopt 718 [r401];
  D195():
    deopt 759 [r420];
  L143(r362):
    min2 = ldf min in base;
    r364 = dyn min2(r362, 1.0);
    check L569() else D168();
  L158(r398):
    min5 = ldf min in base;
    r400 = dyn min5(r398, 1.0);
    check L615() else D186();
  L441():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L106(dx14);
  L442():
    weights14 = force? weights13;
    checkMissing(weights14);
    r225 = `>`(weights14, 0.0);
    __5 = ldf `[` in base;
    r226 = dyn __5(x26, r225);
    goto L106(r226);
  L443():
    goto L105(r227);
  L481():
    breaks22 = force? breaks21;
    checkMissing(breaks22);
    goto L118(breaks22);
  L483():
    xorig = ld xorig;
    check L485() else D133();
  L484():
    r278 = dyn base52(<lang `[`(xorig, 1)>, <lang `[`(xorig, c(`>`(diff(as.numeric(x1)), 0.0), TRUE))>);
    goto L118(r278);
  L503():
    nx3 = force? nx2;
    checkMissing(nx3);
    r292 = `+`(nx3, 1);
    rep_len3 = ldf rep_len in base;
    r293 = dyn rep_len3(xaxlabels8, r292);
    check L504() else D141();
  L560():
    xlim12 = force? xlim11;
    checkMissing(xlim12);
    min1 = ldf min in base;
    r357 = dyn min1(xlim12);
    check L561() else D164();
  L562():
    goto L140(r358);
  L565():
    xlim13 = ld xlim;
    check L567() else D166();
  L566():
    r361 = dyn base68(<sym xlim>);
    goto L143(r361);
  L570():
    goto L139(r365);
  L606():
    ylim10 = force? ylim9;
    checkMissing(ylim10);
    min4 = ldf min in base;
    r393 = dyn min4(ylim10);
    check L607() else D182();
  L608():
    goto L155(r394);
  L611():
    ylim11 = ld ylim;
    check L613() else D184();
  L612():
    r397 = dyn base78(<sym ylim>);
    goto L158(r397);
  L616():
    goto L154(r401);
  L627():
    st ytop = r420;
    sym80 = ldf rep;
    base80 = ldf rep in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L628() else L629();
  D133():
    deopt 502 [xorig];
  D141():
    deopt 532 [r293];
  D164():
    deopt 628 [r357];
  D166():
    deopt 636 [xlim13];
  D168():
    deopt 642 [r364];
  D182():
    deopt 702 [r393];
  D184():
    deopt 710 [ylim11];
  D186():
    deopt 716 [r400];
  L161(r422):
    st xleft = r422;
    sym81 = ldf rep;
    base81 = ldf rep in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L630() else L631();
  L485():
    xorig1 = force? xorig;
    checkMissing(xorig1);
    c70 = `is.object`(xorig1);
    if c70 then L486() else L487(xorig1);
  L504():
    goto L122(r293);
  L561():
    goto L141(r357);
  L567():
    xlim14 = force? xlim13;
    checkMissing(xlim14);
    max2 = ldf max in base;
    r363 = dyn max2(xlim14);
    check L568() else D167();
  L569():
    goto L142(r364);
  L607():
    goto L156(r393);
  L613():
    ylim12 = force? ylim11;
    checkMissing(ylim12);
    max5 = ldf max in base;
    r399 = dyn max5(ylim12);
    check L614() else D185();
  L615():
    goto L157(r400);
  L628():
    rep = ldf rep in base;
    r423 = dyn rep(<lang `[`(xat, `:`(1, nx))>, <lang rep(ny, nx)>);
    goto L161(r423);
  L629():
    r421 = dyn base80(<lang `[`(xat, `:`(1, nx))>, <lang rep(ny, nx)>);
    goto L161(r421);
  D167():
    deopt 639 [r363];
  D185():
    deopt 713 [r399];
  L119(dx19):
    xorig4 = ld xorig;
    check L489() else D134();
  L162(r425):
    st xright = r425;
    sym82 = ldf rep;
    base82 = ldf rep in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L632() else L633();
  L486():
    dr16 = tryDispatchBuiltin.1("[", xorig1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L488() else L487(dr16);
  L487(xorig3):
    __6 = ldf `[` in base;
    r279 = dyn __6(xorig3, 1);
    goto L119(r279);
  L568():
    goto L143(r363);
  L614():
    goto L158(r399);
  L630():
    rep1 = ldf rep in base;
    r426 = dyn rep1(<lang `-`(`[`(xat, `:`(2, `(`(`+`(nx, 1)))), off)>, <lang rep(ny, nx)>);
    goto L162(r426);
  L631():
    r424 = dyn base81(<lang `-`(`[`(xat, `:`(2, `(`(`+`(nx, 1)))), off)>, <lang rep(ny, nx)>);
    goto L162(r424);
  D134():
    deopt 507 [xorig4];
  L163(r428):
    st col = r428;
    rect = ldf rect;
    check L634() else D196();
  L488():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L119(dx18);
  L489():
    xorig5 = force? xorig4;
    checkMissing(xorig5);
    c71 = `is.object`(xorig5);
    if c71 then L490() else L491(xorig5);
  L632():
    rep2 = ldf rep in base;
    r429 = dyn rep2(<sym col>, <sym nx>);
    goto L163(r429);
  L633():
    r427 = dyn base82(<sym col>, <sym nx>);
    goto L163(r427);
  D196():
    deopt 774 [];
  L120(dx21):
    c73 = ldf c in base;
    r290 = dyn c73(dx19, dx21);
    check L498() else D138();
  L490():
    dr18 = tryDispatchBuiltin.1("[", xorig5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L492() else L491(dr18);
  L491(xorig7):
    sym53 = ldf c;
    base53 = ldf c in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L493() else L494();
  L634():
    p52 = prom<V +>{
      xleft = ld xleft;
      xleft1 = force? xleft;
      checkMissing(xleft1);
      return xleft1;
    };
    p53 = prom<V +>{
      ybottom = ld ybottom;
      ybottom1 = force? ybottom;
      checkMissing(ybottom1);
      return ybottom1;
    };
    p54 = prom<V +>{
      xright = ld xright;
      xright1 = force? xright;
      checkMissing(xright1);
      return xright1;
    };
    p55 = prom<V +>{
      ytop = ld ytop;
      ytop1 = force? ytop;
      checkMissing(ytop1);
      return ytop1;
    };
    p56 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    ddd1 = ld `...`;
    r435 = dyn rect[, , , , col, `...`](p52, p53, p54, p55, p56, ddd1);
    check L635() else D197();
  D138():
    deopt 522 [r290];
  D197():
    deopt 782 [r435];
  L121(xorig10, r281):
    __7 = ldf `[` in base;
    r289 = dyn __7(xorig10, r281);
    goto L120(r289);
  L492():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L120(dx20);
  L493():
    diff = ldf diff;
    check L495() else D135();
  L494():
    r280 = dyn base53(<lang `>`(diff(as.numeric(x1)), 0.0)>, TRUE);
    goto L121(xorig7, r280);
  L498():
    goto L118(r290);
  L635():
    axes1 = ld axes;
    check L636() else D198();
  D135():
    deopt 512 [xorig7];
  D198():
    deopt 783 [axes1];
  L495():
    p38 = prom<V +>{
      sym54 = ldf `as.numeric`;
      base54 = ldf `as.numeric` in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L1() else L2();
    L0(r283):
      return r283;
    L1():
      x33 = ld x1;
      x34 = force? x33;
      checkMissing(x34);
      as_numeric2 = ldf `as.numeric` in base;
      r284 = dyn as_numeric2(x34);
      goto L0(r284);
    L2():
      r282 = dyn base54(<sym x1>);
      goto L0(r282);
    };
    r286 = dyn diff(p38);
    check L496() else D136();
  L636():
    axes2 = force? axes1;
    checkMissing(axes2);
    c125 = `as.logical`(axes2);
    if c125 then L637() else L164();
  D136():
    deopt 514 [xorig7, r286];
  L164():
    goto L175();
  L175():
    x_categorical8 = ld `x.categorical`;
    check L681() else D222();
  L496():
    r287 = `>`(r286, 0.0);
    c72 = ldf c in base;
    r288 = dyn c72(r287, TRUE);
    check L497() else D137();
  L637():
    x_categorical6 = ld `x.categorical`;
    check L638() else D199();
  D137():
    deopt 519 [xorig7, r288];
  D199():
    deopt 785 [x_categorical6];
  D222():
    deopt 882 [x_categorical8];
  L497():
    goto L121(xorig7, r288);
  L638():
    x_categorical7 = force? x_categorical6;
    checkMissing(x_categorical7);
    c126 = `as.logical`(x_categorical7);
    if c126 then L639() else L165();
  L681():
    x_categorical9 = force? x_categorical8;
    checkMissing(x_categorical9);
    r481 = `!`(x_categorical9);
    c133 = `as.logical`(r481);
    if c133 then L682() else L176();
  L165():
    axis1 = ldf axis;
    check L643() else D202();
  L166():
    yat10 = ld yat;
    check L645() else D204();
  L176():
    goto L177();
  L177():
    sym86 = ldf c;
    base86 = ldf c in base;
    guard86 = `==`.4(sym86, base86);
    if guard86 then L686() else L687();
  L639():
    axis = ldf axis;
    check L640() else D200();
  L682():
    box = ldf box;
    check L683() else D223();
  D200():
    deopt 788 [];
  D202():
    deopt 798 [];
  D204():
    deopt 805 [yat10];
  D223():
    deopt 886 [];
  L178(r485):
    l18 = ld tab;
    dimnames4 = ldf dimnames;
    check L691() else D228();
  L640():
    p57 = prom<V +>{
      xat = ld xat;
      xat1 = force? xat;
      checkMissing(xat1);
      c127 = `is.object`(xat1);
      if c127 then L2() else L3(xat1);
    L0(dx31):
      xat4 = ld xat;
      xat5 = force? xat4;
      checkMissing(xat5);
      c128 = `is.object`(xat5);
      if c128 then L5() else L6(dx31, xat5);
    L2():
      dr28 = tryDispatchBuiltin.1("[", xat1);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L4() else L3(dr28);
    L3(xat3):
      nx6 = ld nx;
      nx7 = force? nx6;
      checkMissing(nx7);
      r436 = `:`(1, nx7);
      __11 = ldf `[` in base;
      r437 = dyn __11(xat3, r436);
      goto L0(r437);
    L1(dx36, dx37):
      r441 = `+`(dx36, dx37);
      off9 = ld off;
      off10 = force? off9;
      checkMissing(off10);
      r442 = `-`(r441, off10);
      r443 = `/`(r442, 2.0);
      return r443;
    L4():
      dx30 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx30);
    L5():
      dr30 = tryDispatchBuiltin.1("[", xat5);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(dx31, dr30);
    L6(dx33, xat7):
      nx8 = ld nx;
      nx9 = force? nx8;
      checkMissing(nx9);
      r438 = `+`(nx9, 1);
      r439 = `:`(2, r438);
      __12 = ldf `[` in base;
      r440 = dyn __12(xat7, r439);
      goto L1(dx33, r440);
    L7():
      dx35 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx31, dx35);
    };
    p58 = prom<V +>{
      xaxlabels9 = ld xaxlabels;
      xaxlabels10 = force? xaxlabels9;
      checkMissing(xaxlabels10);
      return xaxlabels10;
    };
    r446 = dyn axis[, at, labels, tick](1.0, p57, p58, FALSE);
    check L641() else D201();
  L643():
    p59 = prom<V +>{
      xat8 = ld xat;
      xat9 = force? xat8;
      checkMissing(xat9);
      return xat9;
    };
    p60 = prom<V +>{
      xaxlabels11 = ld xaxlabels;
      xaxlabels12 = force? xaxlabels11;
      checkMissing(xaxlabels12);
      return xaxlabels12;
    };
    r450 = dyn axis1[, at, labels](1.0, p59, p60);
    check L644() else D203();
  L645():
    yat11 = force? yat10;
    checkMissing(yat11);
    c129 = `is.object`(yat11);
    if c129 then L646() else L647();
  L683():
    r482 = dyn box();
    check L684() else D224();
  L686():
    xlab7 = ld xlab;
    check L688() else D225();
  L687():
    r484 = dyn base86(<sym xlab>, <sym ylab>);
    goto L178(r484);
  D201():
    deopt 796 [r446];
  D203():
    deopt 804 [r450];
  D224():
    deopt 887 [r482];
  D225():
    deopt 892 [xlab7];
  D228():
    deopt 899 [r485, l18, r485];
  L167(dx39):
    st yat = dx39;
    sym83 = ldf any;
    base83 = ldf any in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L649() else L650();
  L641():
    goto L166();
  L644():
    goto L166();
  L646():
    dr32 = tryDispatchBuiltin.1("[", yat11);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L648() else L647();
  L647():
    __13 = ldf `[` in base;
    r451 = dyn __13(yat11, <missing>, 1);
    goto L167(r451);
  L684():
    goto L177();
  L688():
    xlab8 = force? xlab7;
    checkMissing(xlab8);
    ylab7 = ld ylab;
    check L689() else D226();
  L691():
    r487 = dyn dimnames4(r485, NULL);
    check L692() else D229();
  D226():
    deopt 894 [ylab7];
  D229():
    deopt 901 [r485, l18, r485, r487];
  L168(r453):
    st equidist = r453;
    equidist = ld equidist;
    check L655() else D209();
  L648():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L167(dx38);
  L649():
    diff1 = ldf diff;
    check L651() else D205();
  L650():
    r452 = dyn base83(<lang `<`(diff(yat), tol.ylab)>);
    goto L168(r452);
  L689():
    ylab8 = force? ylab7;
    checkMissing(ylab8);
    c134 = ldf c in base;
    r486 = dyn c134(xlab8, ylab8);
    check L690() else D227();
  L692():
    names__ = ldf `names<-`;
    check L693() else D230();
  D205():
    deopt 815 [];
  D209():
    deopt 823 [equidist];
  D227():
    deopt 897 [r486];
  D230():
    deopt 903 [r485, l18, r487, r485];
  L651():
    p61 = prom<V +>{
      yat14 = ld yat;
      yat15 = force? yat14;
      checkMissing(yat15);
      return yat15;
    };
    r455 = dyn diff1(p61);
    check L652() else D206();
  L655():
    equidist1 = force? equidist;
    checkMissing(equidist1);
    c130 = `as.logical`(equidist1);
    if c130 then L656() else L169();
  L690():
    goto L178(r486);
  L693():
    r488 = dyn names__(r487, NULL, r485);
    check L694() else D231();
  D206():
    deopt 817 [r455];
  D231():
    deopt 905 [r485, l18, r488];
  L169():
    yat16 = ld yat;
    check L664() else D214();
  L171(r467):
    st yat = r467;
    axis2 = ldf axis;
    check L676() else D218();
  L652():
    tol_ylab1 = ld `tol.ylab`;
    check L653() else D207();
  L656():
    sym84 = ldf `seq.int`;
    base84 = ldf `seq.int` in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L657() else L658();
  L694():
    dimnames__ = ldf `dimnames<-`;
    check L695() else D232();
  D207():
    deopt 817 [r455, tol_ylab1];
  D214():
    deopt 848 [yat16];
  D218():
    deopt 867 [];
  D232():
    deopt 906 [r485, l18, r488];
  L170(r459):
    goto L171(r459);
  L653():
    tol_ylab2 = force? tol_ylab1;
    checkMissing(tol_ylab2);
    r456 = `<`(r455, tol_ylab2);
    any4 = ldf any in base;
    r457 = dyn any4(r456);
    check L654() else D208();
  L657():
    ny8 = ld ny;
    check L659() else D210();
  L658():
    r458 = dyn base84[, , by](<lang `/`(1.0, `(`(`*`(2.0, ny)))>, <lang `-`(1.0, `/`(1.0, `(`(`*`(2.0, ny))))>, <lang `/`(1.0, ny)>);
    goto L170(r458);
  L664():
    yat17 = force? yat16;
    checkMissing(yat17);
    c131 = `is.object`(yat17);
    if c131 then L665() else L666(yat17);
  L676():
    p62 = prom<V +>{
      yat29 = ld yat;
      yat30 = force? yat29;
      checkMissing(yat30);
      return yat30;
    };
    p63 = prom<V +>{
      yaxlabels7 = ld yaxlabels;
      yaxlabels8 = force? yaxlabels7;
      checkMissing(yaxlabels8);
      return yaxlabels8;
    };
    r478 = dyn axis2[, at, labels, tick](2.0, p62, p63, FALSE);
    check L677() else D219();
  L695():
    r489 = dyn dimnames__(l18, NULL, r488);
    check L696() else D233();
  D208():
    deopt 821 [r457];
  D210():
    deopt 829 [1.0, 2.0, ny8];
  D219():
    deopt 875 [r478];
  D233():
    deopt 908 [r485, r489];
  L172(dx41):
    yat20 = ld yat;
    check L668() else D215();
  L654():
    goto L168(r457);
  L659():
    ny9 = force? ny8;
    checkMissing(ny9);
    r460 = `*`(2.0, ny9);
    r461 = `/`(1.0, r460);
    ny10 = ld ny;
    check L660() else D211();
  L665():
    dr34 = tryDispatchBuiltin.1("[", yat17);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L667() else L666(dr34);
  L666(yat19):
    __14 = ldf `[` in base;
    r468 = dyn __14(yat19, -1);
    goto L172(r468);
  L677():
    axis3 = ldf axis;
    check L678() else D220();
  L696():
    st tab = r489;
    sym87 = ldf invisible;
    base87 = ldf invisible in base;
    guard87 = `==`.4(sym87, base87);
    if guard87 then L697() else L698();
  D211():
    deopt 836 [1.0, 1.0, 2.0, ny10];
  D215():
    deopt 852 [dx41, yat20];
  D220():
    deopt 877 [];
  L179(r491):
    popenv;
    return r491;
  L660():
    ny11 = force? ny10;
    checkMissing(ny11);
    r462 = `*`(2.0, ny11);
    r463 = `/`(1.0, r462);
    r464 = `-`(1.0, r463);
    ny12 = ld ny;
    check L661() else D212();
  L667():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L172(dx40);
  L668():
    yat21 = force? yat20;
    checkMissing(yat21);
    c132 = `is.object`(yat21);
    if c132 then L669() else L670(dx41, yat21);
  L678():
    r479 = dyn axis3(4.0);
    check L679() else D221();
  L697():
    tab30 = ld tab;
    check L699() else D234();
  L698():
    r490 = dyn base87(<sym tab>);
    goto L179(r490);
  D212():
    deopt 842 [1.0, ny12];
  D221():
    deopt 879 [r479];
  D234():
    deopt 912 [tab30];
  L173(dx46, dx47):
    r474 = `+`(dx46, dx47);
    r475 = `/`(r474, 2.0);
    goto L171(r475);
  L661():
    ny13 = force? ny12;
    checkMissing(ny13);
    r465 = `/`(1.0, ny13);
    seq_int = ldf `seq.int` in base;
    r466 = dyn seq_int(r461, r464, r465);
    check L662() else D213();
  L669():
    dr36 = tryDispatchBuiltin.1("[", yat21);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L671() else L670(dx41, dr36);
  L670(dx43, yat23):
    sym85 = ldf length;
    base85 = ldf length in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L672() else L673();
  L679():
    goto L175();
  L699():
    tab31 = force? tab30;
    checkMissing(tab31);
    invisible = ldf invisible in base;
    r492 = dyn invisible(tab31);
    check L700() else D235();
  D213():
    deopt 847 [r466];
  D235():
    deopt 915 [r492];
  L174(dx50, yat26, r470):
    r472 = `-`(<missing>, r470);
    __15 = ldf `[` in base;
    r473 = dyn __15(yat26, r472);
    goto L173(dx50, r473);
  L662():
    goto L170(r466);
  L671():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L173(dx41, dx45);
  L672():
    yat27 = ld yat;
    check L674() else D216();
  L673():
    r469 = dyn base85(<sym yat>);
    goto L174(dx43, yat23, r469);
  L700():
    goto L179(r492);
  D216():
    deopt 856 [dx43, yat23, yat27];
  L674():
    yat28 = force? yat27;
    checkMissing(yat28);
    length3 = ldf length in base;
    r471 = dyn length3(yat28);
    check L675() else D217();
  D217():
    deopt 859 [dx43, yat23, r471];
  L675():
    goto L174(dx43, yat23, r471);
  }
}