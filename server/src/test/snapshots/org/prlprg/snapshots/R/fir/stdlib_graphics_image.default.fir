fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3255148122;
    st `image.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3255148122(x, y, z, zlim, xlim, ylim, col, add, xaxs, yaxs, xlab, ylab, breaks, oldstyle, useRaster, `...`) {
  (reg x:*, reg y:*, reg z:*, reg zlim:*, reg xlim:*, reg ylim:*, reg col:*, reg add:*, reg xaxs:*, reg yaxs:*, reg xlab:*, reg ylab:*, reg breaks:*, reg oldstyle:*, reg useRaster:*, reg ddd:dots) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg seq:cls, reg nrow:cls, reg z1:*, reg z2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var y:*, reg y_isMissing:L, reg y_orDefault:*, reg seq1:cls, reg ncol:cls, reg z3:*, reg z4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), var z:*, var zlim:*, reg zlim_isMissing:L, reg zlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg z5:*, reg z6:V, reg c:L, reg z8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg z11:V, reg r13:V, reg z12:*, reg z13:V, reg is_finite:cls, reg r14:V, reg __:cls, reg r15:V, reg range:cls, reg r16:V, reg p6:p(V +), var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x1:*, reg x2:V, reg range1:cls, reg r20:V, reg p7:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg y1:*, reg y2:V, reg range2:cls, reg r24:V, reg p8:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, reg hcl_colors:cls, reg r26:V, reg p9:p(V +), var add:*, reg add_isMissing:L, reg add_orDefault:*, var xaxs:*, reg xaxs_isMissing:L, reg xaxs_orDefault:*, var yaxs:*, reg yaxs_isMissing:L, reg yaxs_orDefault:*, var xlab:*, var ylab:*, var breaks:*, var oldstyle:*, reg oldstyle_isMissing:L, reg oldstyle_orDefault:*, var useRaster:*, var `...`:dots?, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg missing:cls, reg r30:V, reg c1:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg missing1:cls, reg r33:V, reg r34:V, reg c2:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg x3:*, reg x4:V, reg is_list:cls, reg r37:V, reg c3:L, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r38:V, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r39:V, reg x13:*, reg x14:V, reg c6:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg x17:*, reg x18:V, reg dim:cls, reg r45:V, reg c7:V, reg c8:L, reg stop:cls, reg r46:V, reg x19:*, reg x20:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg nrow1:cls, reg z14:*, reg z15:V, reg p10:p(V +), reg r51:V, reg seq_int:cls, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg missing2:cls, reg r55:V, reg c9:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg r58:V, reg missing3:cls, reg r59:V, reg c10:L, reg r60:V, reg r61:V, reg stop1:cls, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg r65:V, reg x21:*, reg x22:V, reg is_list1:cls, reg r66:V, reg c11:L, reg deparse1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r67:V, reg r68:V, reg substitute:cls, reg r69:V, reg p11:p(V +), reg r71:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r72:V, reg r73:V, reg missing4:cls, reg r74:V, reg c12:L, reg paste0:cls, reg xn:*, reg xn1:V, reg p12:p(V +), reg r76:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r78:V, reg r79:V, reg missing5:cls, reg r80:V, reg c13:L, reg paste1:cls, reg xn2:*, reg xn3:V, reg p13:p(V +), reg r82:V, reg x23:*, reg x24:V, reg c14:L, reg x26:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r84:V, reg x27:*, reg x28:V, reg c15:L, reg x30:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r85:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r86:V, reg r87:V, reg missing6:cls, reg r88:V, reg c16:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r89:V, reg r90:V, reg missing7:cls, reg r91:V, reg c17:L, reg r92:V, reg deparse2:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r93:V, reg r94:V, reg substitute1:cls, reg r95:V, reg p14:p(V +), reg r97:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r99:V, reg r100:V, reg missing8:cls, reg r101:V, reg c18:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r102:V, reg r103:V, reg missing9:cls, reg r104:V, reg c19:L, reg r105:V, reg deparse3:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r106:V, reg r107:V, reg substitute2:cls, reg r108:V, reg p15:p(V +), reg r110:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r111:V, reg r112:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r113:V, reg r114:V, reg x31:*, reg x32:V, reg is_finite1:cls, reg r115:V, reg r116:V, reg any:cls, reg r117:V, reg c20:L, reg c21:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r118:V, reg c25:L, reg r119:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r120:V, reg c28:L, reg r121:V, reg y3:*, reg y4:V, reg is_finite2:cls, reg r122:V, reg r123:V, reg any1:cls, reg r124:V, reg c29:L, reg c30:V, reg c32:L, reg stop2:cls, reg r125:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r127:V, reg r128:V, reg diff:cls, reg x33:*, reg x34:V, reg p16:p(V +), reg r130:V, reg r131:V, reg any2:cls, reg r132:V, reg c33:L, reg c34:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r133:V, reg c38:L, reg r134:V, reg diff1:cls, reg y5:*, reg y6:V, reg p17:p(V +), reg r136:V, reg r137:V, reg any3:cls, reg r138:V, reg c39:L, reg c40:V, reg c42:L, reg stop3:cls, reg r139:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r141:V, reg r142:V, reg z16:*, reg z17:V, reg is_matrix:cls, reg r143:V, reg r144:V, reg c43:L, reg stop4:cls, reg r145:V, reg _in_:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r147:V, reg r148:V, reg z18:*, reg z19:V, reg typeof:cls, reg r149:V, reg p18:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r151:V, reg r152:V, reg c44:cls, reg r153:V, reg p19:p(V +), reg r155:V, reg r156:V, reg c45:L, reg stop5:cls, reg r157:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r159:V, reg r160:V, reg x35:*, reg x36:V, reg length:cls, reg r161:V, reg r162:V, reg c46:L, reg c48:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r163:V, reg c51:L, reg r164:V, reg x37:*, reg x38:V, reg length1:cls, reg r165:V, reg nrow2:cls, reg z20:*, reg z21:V, reg p20:p(V +), reg r167:V, reg r168:V, reg c52:L, reg c53:V, reg c55:L, reg diff2:cls, reg x39:*, reg x40:V, reg p21:p(V +), reg r170:V, reg r171:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r172:V, reg r173:V, reg x41:*, reg x42:V, reg c56:L, reg x44:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __1:cls, reg r174:V, reg dx15:*, reg dx16:V, reg c57:L, reg dx19:V, reg dx20:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg dx24:V, reg __2:cls, reg r175:V, reg r176:V, reg x45:*, reg x46:V, reg c58:L, reg x48:V, reg dr16:V, reg dc8:L, reg dx25:V, reg dx26:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r177:V, reg x51:V, reg r178:V, reg x52:*, reg x53:V, reg length2:cls, reg r179:V, reg r180:V, reg __3:cls, reg r181:V, reg dx27:*, reg dx28:V, reg r182:V, reg x54:*, reg x55:V, reg c59:L, reg x57:V, reg dr18:V, reg dc9:L, reg dx29:V, reg dx30:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r183:V, reg x60:V, reg r184:V, reg x61:*, reg x62:V, reg length3:cls, reg r185:V, reg __4:cls, reg r186:V, reg dx31:*, reg dx32:V, reg c60:L, reg dx35:V, reg dx36:V, reg dr20:V, reg dc10:L, reg dx38:V, reg dx39:V, reg dx40:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r187:V, reg dx45:V, reg dx46:V, reg r188:V, reg x63:*, reg x64:V, reg length4:cls, reg r189:V, reg r190:V, reg __5:cls, reg r191:V, reg r192:V, reg c61:cls, reg r193:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r195:V, reg r196:V, reg y7:*, reg y8:V, reg length5:cls, reg r197:V, reg r198:V, reg c62:L, reg c64:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r199:V, reg c67:L, reg r200:V, reg y9:*, reg y10:V, reg length6:cls, reg r201:V, reg ncol1:cls, reg z22:*, reg z23:V, reg p22:p(V +), reg r203:V, reg r204:V, reg c68:L, reg c69:V, reg c71:L, reg diff3:cls, reg y11:*, reg y12:V, reg p23:p(V +), reg r206:V, reg r207:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r208:V, reg r209:V, reg y13:*, reg y14:V, reg c72:L, reg y16:V, reg dr22:V, reg dc11:L, reg dx47:V, reg dx48:V, reg __6:cls, reg r210:V, reg dy:*, reg dy1:V, reg c73:L, reg dx50:V, reg dy3:V, reg dr24:V, reg dc12:L, reg dx52:V, reg dx53:V, reg dx54:V, reg __7:cls, reg r211:V, reg r212:V, reg y17:*, reg y18:V, reg c74:L, reg y20:V, reg dr26:V, reg dc13:L, reg dx55:V, reg dx56:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r213:V, reg y23:V, reg r214:V, reg y24:*, reg y25:V, reg length7:cls, reg r215:V, reg r216:V, reg __8:cls, reg r217:V, reg dy4:*, reg dy5:V, reg r218:V, reg y26:*, reg y27:V, reg c75:L, reg y29:V, reg dr28:V, reg dc14:L, reg dx57:V, reg dx58:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r219:V, reg y32:V, reg r220:V, reg y33:*, reg y34:V, reg length8:cls, reg r221:V, reg __9:cls, reg r222:V, reg dy6:*, reg dy7:V, reg c76:L, reg dx60:V, reg dy9:V, reg dr30:V, reg dc15:L, reg dx62:V, reg dx63:V, reg dx64:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r223:V, reg dx67:V, reg dy12:V, reg r224:V, reg y35:*, reg y36:V, reg length9:cls, reg r225:V, reg r226:V, reg __10:cls, reg r227:V, reg r228:V, reg c77:cls, reg r229:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r231:V, reg r232:V, reg missing10:cls, reg r233:V, reg c78:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r234:V, reg r235:V, reg col1:*, reg col2:V, reg length10:cls, reg r236:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r237:V, reg r238:V, reg missing11:cls, reg r239:V, reg r240:V, reg c79:L, reg c81:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r241:V, reg c84:L, reg r242:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r243:V, reg c87:L, reg r244:V, reg zlim1:*, reg zlim2:V, reg is_finite3:cls, reg r245:V, reg r246:V, reg any4:cls, reg r247:V, reg c88:L, reg c89:L, reg c90:V, reg diff4:cls, reg zlim3:*, reg zlim4:V, reg p24:p(V +), reg r249:V, reg r250:V, reg c93:L, reg c94:V, reg c97:L, reg c98:V, reg c100:L, reg stop6:cls, reg r251:V, reg diff5:cls, reg zlim5:*, reg zlim6:V, reg p25:p(V +), reg r254:V, reg r255:V, reg c101:L, reg zlim7:*, reg zlim8:V, reg c102:L, reg zlim10:V, reg dr32:V, reg dc16:L, reg dx68:V, reg dx69:V, reg __11:cls, reg r256:V, reg r257:V, reg c103:L, reg sym48:cls, reg base48:cls, reg guard48:L, reg r258:V, reg r259:V, reg c104:cls, reg r260:V, reg r261:V, reg zlim11:*, reg zlim12:V, reg c105:L, reg zlim14:V, reg dr34:V, reg dc17:L, reg dx70:V, reg dx71:V, reg __12:cls, reg r262:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r263:V, reg dx74:V, reg r264:V, reg c106:cls, reg r265:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r268:V, reg dx77:V, reg r269:V, reg r270:V, reg zlim15:*, reg zlim16:V, reg c107:L, reg dx79:V, reg r272:V, reg zlim18:V, reg dr36:V, reg dc18:L, reg dx81:V, reg dx82:V, reg r274:V, reg dx83:V, reg __13:cls, reg r275:V, reg abs:cls, reg r276:V, reg r277:V, reg r278:V, reg z24:*, reg z25:V, reg zlim19:*, reg zlim20:V, reg c108:L, reg z27:V, reg zlim22:V, reg dr38:V, reg dc19:L, reg dx84:V, reg z29:V, reg dx85:V, reg __14:cls, reg r280:V, reg r281:V, reg diff6:cls, reg zlim23:*, reg zlim24:V, reg p26:p(V +), reg r283:V, reg r284:V, reg oldstyle1:*, reg oldstyle2:V, reg c109:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r285:V, reg r286:V, reg nc:*, reg nc1:V, reg r287:V, reg z30:*, reg z31:V, reg r288:V, reg r289:V, reg r290:V, reg r291:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r292:V, reg nc2:*, reg nc3:V, reg r293:V, reg z32:*, reg z33:V, reg r294:V, reg r295:V, reg r296:V, reg l:*, reg c110:L, reg r298:L, reg l2:*, reg dr40:V, reg dc20:L, reg dx86:V, reg r300:L, reg dx87:V, reg zi:*, reg zi1:V, reg r301:V, reg zi2:*, reg zi3:V, reg nc4:*, reg nc5:V, reg r302:V, reg r303:V, reg ___:cls, reg r304:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r306:V, reg r307:V, reg breaks1:*, reg breaks2:V, reg length11:cls, reg r308:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r311:V, reg r312:V, reg r313:V, reg col3:*, reg col4:V, reg length12:cls, reg r314:V, reg r315:V, reg r316:V, reg c111:L, reg stop7:cls, reg r317:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r319:V, reg r320:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r321:V, reg r322:V, reg breaks3:*, reg breaks4:V, reg is_finite4:cls, reg r323:V, reg r324:V, reg any5:cls, reg r325:V, reg c112:L, reg stop8:cls, reg r326:V, reg is_unsorted:cls, reg breaks5:*, reg breaks6:V, reg p27:p(V +), reg r329:V, reg c113:L, reg warning:cls, reg r330:V, reg sort:cls, reg breaks7:*, reg breaks8:V, reg p28:p(V +), reg r332:V, reg _bincode:cls, reg z34:*, reg z35:V, reg p29:p(V +), reg breaks9:*, reg breaks10:V, reg p30:p(V +), reg r336:V, reg r337:V, reg add1:*, reg add2:V, reg r338:V, reg c114:L, reg plot:cls, reg xlim1:*, reg xlim2:V, reg p31:p(V +), reg ylim1:*, reg ylim2:V, reg p32:p(V +), reg xlim3:*, reg xlim4:V, reg p33:p(V +), reg ylim3:*, reg ylim4:V, reg p34:p(V +), reg xaxs1:*, reg xaxs2:V, reg p35:p(V +), reg yaxs1:*, reg yaxs2:V, reg p36:p(V +), reg xlab1:*, reg xlab2:V, reg p37:p(V +), reg ylab1:*, reg ylab2:V, reg p38:p(V +), reg ddd1:dots?, reg r347:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r349:V, reg r350:V, reg x65:*, reg x66:V, reg length13:cls, reg r351:V, reg r352:V, reg c115:L, reg par:cls, reg r353:V, reg c116:L, reg r355:V, reg dr42:V, reg dc21:L, reg dx88:V, reg dx89:V, reg __15:cls, reg r356:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r357:V, reg r358:V, reg y37:*, reg y38:V, reg length14:cls, reg r359:V, reg r360:V, reg c117:L, reg par1:cls, reg r361:V, reg c118:L, reg r363:V, reg dr44:V, reg dc22:L, reg dx91:V, reg dx92:V, reg __16:cls, reg r364:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r365:V, reg r366:V, reg x67:*, reg x68:V, reg length15:cls, reg r367:V, reg nrow3:cls, reg z36:*, reg z37:V, reg p39:p(V +), reg r369:V, reg r370:V, reg r371:V, reg c119:L, reg c120:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r372:V, reg c124:L, reg r373:V, reg y39:*, reg y40:V, reg length16:cls, reg r374:V, reg ncol2:cls, reg z38:*, reg z39:V, reg p40:p(V +), reg r376:V, reg r377:V, reg r378:V, reg c125:L, reg c126:V, reg c128:L, reg stop9:cls, reg r379:V, reg r381:cls, reg sym61:cls, reg base61:cls, reg guard61:L, reg r382:V, reg r383:V, reg missing12:cls, reg r384:V, reg c129:L, reg getOption:cls, reg r385:V, reg useRaster1:*, reg useRaster2:V, reg c130:L, reg c132:V, reg check_irregular:cls, reg x69:*, reg x70:V, reg p41:p(V +), reg y41:*, reg y42:V, reg p42:p(V +), reg r388:V, reg c133:L, reg c134:V, reg c136:L, reg useRaster3:*, reg useRaster4:V, reg c137:L, reg dev_capabilities:cls, reg r390:V, reg c138:L, reg r392:V, reg dr46:V, reg dc23:L, reg dx94:V, reg dx95:V, reg r393:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r394:V, reg r395:V, reg ras:*, reg ras1:V, reg identical:cls, reg r396:V, reg c139:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r398:V, reg r399:V, reg ras2:*, reg ras3:V, reg identical1:cls, reg r400:V, reg c140:L, reg sym64:cls, reg base64:cls, reg guard64:L, reg r401:V, reg r402:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r403:V, reg r404:V, reg zi4:*, reg zi5:V, reg is_na:cls, reg r405:V, reg r406:V, reg all:cls, reg r407:V, reg r408:V, reg r409:V, reg useRaster5:*, reg useRaster6:V, reg c141:L, reg check_irregular1:cls, reg x71:*, reg x72:V, reg p43:p(V +), reg y43:*, reg y44:V, reg p44:p(V +), reg r413:V, reg c142:L, reg stop10:cls, reg gettextf:cls, reg sQuote:cls, reg r414:V, reg p45:p(V +), reg r416:V, reg p46:p(V +), reg r418:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r420:V, reg r421:V, reg col5:*, reg col6:V, reg c143:L, reg r422:V, reg c144:L, reg sym67:cls, reg base67:cls, reg guard67:L, reg r423:V, reg r424:V, reg col7:*, reg col8:V, reg as_integer:cls, reg r425:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r426:V, reg r427:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r428:V, reg r429:V, reg col9:*, reg col10:V, reg is_na1:cls, reg r430:V, reg r431:V, reg col11:*, reg col12:V, reg r432:V, reg r433:V, reg any6:cls, reg r434:V, reg c145:L, reg stop11:cls, reg r435:V, reg l3:*, reg c146:L, reg r438:I, reg l5:*, reg dr48:V, reg dc24:L, reg dx96:V, reg dx97:V, reg col13:*, reg col14:V, reg r441:V, reg ___1:cls, reg r442:V, reg palette:cls, reg r443:V, reg p47:*, reg p48:V, reg c147:L, reg p50:V, reg dr50:V, reg dc25:L, reg dx98:V, reg dx99:V, reg col15:*, reg col16:V, reg r444:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r445:V, reg p53:V, reg r446:V, reg p54:*, reg p55:V, reg length17:cls, reg r447:V, reg __17:cls, reg r448:V, reg r449:V, reg __18:cls, reg r450:V, reg col17:*, reg col18:V, reg c148:L, reg col20:V, reg dr52:V, reg dc26:L, reg dx101:V, reg dx102:V, reg zi6:*, reg zi7:V, reg r451:V, reg __19:cls, reg r452:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r453:V, reg r454:V, reg z40:*, reg z41:V, reg dim1:cls, reg r455:V, reg l6:*, reg dim__:cls, reg r456:V, reg t:cls, reg zc:*, reg zc1:V, reg p56:p(V +), reg r458:V, reg c149:L, reg r460:V, reg dr54:V, reg dc27:L, reg dx103:V, reg dx104:V, reg ncol3:cls, reg zc2:*, reg zc3:V, reg p57:p(V +), reg r462:V, reg r463:V, reg __20:cls, reg r464:V, reg rasterImage:cls, reg as_raster:cls, reg zc4:*, reg zc5:V, reg p58:p(V +), reg r466:V, reg p59:p(V +), reg sym72:cls, reg base72:cls, reg guard72:L, reg r468:V, reg r469:V, reg x73:*, reg x74:V, reg min:cls, reg r470:V, reg p60:p(V +), reg sym73:cls, reg base73:cls, reg guard73:L, reg r472:V, reg r473:V, reg y45:*, reg y46:V, reg min1:cls, reg r474:V, reg p61:p(V +), reg sym74:cls, reg base74:cls, reg guard74:L, reg r476:V, reg r477:V, reg x75:*, reg x76:V, reg max:cls, reg r478:V, reg p62:p(V +), reg sym75:cls, reg base75:cls, reg guard75:L, reg r480:V, reg r481:V, reg y47:*, reg y48:V, reg max1:cls, reg r482:V, reg p63:p(V +), reg r484:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r486:V, reg C_image:*, reg C_image1:V, reg x77:*, reg x78:V, reg y49:*, reg y50:V, reg zi8:*, reg zi9:V, reg col21:*, reg col22:V, reg _External_graphics:cls, reg r487:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r488:V, reg r489:V, reg invisible:cls, reg r490:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p2 = prom<V +>{
      seq = ldf seq;
      p1 = prom<V +>{
        nrow = ldf nrow;
        p = prom<V +>{
          z1 = ld z;
          z2 = force? z1;
          checkMissing(z2);
          return z2;
        };
        r1 = dyn nrow(p);
        return r1;
      };
      r3 = dyn seq[, , `length.out`](0.0, 1.0, p1);
      return r3;
    };
    goto L1(p2);
  L1(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L2() else L3(y);
  L2():
    p5 = prom<V +>{
      seq1 = ldf seq;
      p4 = prom<V +>{
        ncol = ldf ncol;
        p3 = prom<V +>{
          z3 = ld z;
          z4 = force? z3;
          checkMissing(z4);
          return z4;
        };
        r6 = dyn ncol(p3);
        return r6;
      };
      r8 = dyn seq1[, , `length.out`](0.0, 1.0, p4);
      return r8;
    };
    goto L3(p5);
  L3(y_orDefault):
    st y = y_orDefault;
    st z = z;
    zlim_isMissing = missing.0(zlim);
    if zlim_isMissing then L4() else L5(zlim);
  L4():
    p6 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r11):
      return r11;
    L3():
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      c = `is.object`(z6);
      if c then L5() else L6(z6);
    L4():
      r10 = dyn base(<lang `[`(z, is.finite(z))>);
      goto L0(r10);
    L1(dx1):
      range = ldf range in base;
      r16 = dyn range(dx1);
      goto L0(r16);
    L5():
      dr = tryDispatchBuiltin.1("[", z6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(z8):
      sym1 = ldf `is.finite`;
      base1 = ldf `is.finite` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(z11, r13):
      __ = ldf `[` in base;
      r15 = dyn __(z11, r13);
      goto L1(r15);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      is_finite = ldf `is.finite` in base;
      r14 = dyn is_finite(z13);
      goto L2(z8, r14);
    L9():
      r12 = dyn base1(<sym z>);
      goto L2(z8, r12);
    };
    goto L5(p6);
  L5(zlim_orDefault):
    st zlim = zlim_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L6() else L7(xlim);
  L6():
    p7 = prom<V +>{
      sym2 = ldf range;
      base2 = ldf range in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      range1 = ldf range in base;
      r20 = dyn range1(x2);
      goto L0(r20);
    L2():
      r18 = dyn base2(<sym x>);
      goto L0(r18);
    };
    goto L7(p7);
  L7(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L8() else L9(ylim);
  L8():
    p8 = prom<V +>{
      sym3 = ldf range;
      base3 = ldf range in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      range2 = ldf range in base;
      r24 = dyn range2(y2);
      goto L0(r24);
    L2():
      r22 = dyn base3(<sym y>);
      goto L0(r22);
    };
    goto L9(p8);
  L9(ylim_orDefault):
    st ylim = ylim_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L10() else L11(col);
  L10():
    p9 = prom<V +>{
      hcl_colors = ldf `hcl.colors`;
      r26 = dyn hcl_colors[, , rev](12.0, "YlOrRd", TRUE);
      return r26;
    };
    goto L11(p9);
  L11(col_orDefault):
    st col = col_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L12(FALSE) else L12(add);
  L12(add_orDefault):
    st add = add_orDefault;
    xaxs_isMissing = missing.0(xaxs);
    if xaxs_isMissing then L13("i") else L13(xaxs);
  L13(xaxs_orDefault):
    st xaxs = xaxs_orDefault;
    yaxs_isMissing = missing.0(yaxs);
    if yaxs_isMissing then L14("i") else L14(yaxs);
  L14(yaxs_orDefault):
    st yaxs = yaxs_orDefault;
    st xlab = xlab;
    st ylab = ylab;
    st breaks = breaks;
    oldstyle_isMissing = missing.0(oldstyle);
    if oldstyle_isMissing then L15(FALSE) else L15(oldstyle);
  L15(oldstyle_orDefault):
    st oldstyle = oldstyle_orDefault;
    st useRaster = useRaster;
    st `...` = ddd;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L186() else L187();
  L16(r29):
    c1 = `as.logical`(r29);
    if c1 then L188() else L17();
  L186():
    missing = ldf missing in base;
    r30 = dyn missing(<sym z>);
    goto L16(r30);
  L187():
    r28 = dyn base4(<sym z>);
    goto L16(r28);
  L17():
    sym12 = ldf `is.list`;
    base12 = ldf `is.list` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L241() else L242();
  L35():
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L291() else L292();
  L188():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L189() else L190();
  L18(r32):
    r34 = `!`(r32);
    c2 = `as.logical`(r34);
    if c2 then L191() else L19();
  L36(r65):
    c11 = `as.logical`(r65);
    if c11 then L245() else L37();
  L55(r112):
    c20 = `as.logical`(r112);
    if c20 then L57(c20) else L298();
  L189():
    missing1 = ldf missing in base;
    r33 = dyn missing1(<sym x>);
    goto L18(r33);
  L190():
    r31 = dyn base5(<sym x>);
    goto L18(r31);
  L241():
    x21 = ld x;
    check L243() else D15();
  L242():
    r64 = dyn base12(<sym x>);
    goto L36(r64);
  L291():
    sym23 = ldf `is.finite`;
    base23 = ldf `is.finite` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L293() else L294();
  L292():
    r111 = dyn base22(<lang `!`(is.finite(x))>);
    goto L55(r111);
  D15():
    deopt 76 [x21];
  L19():
    stop1 = ldf stop;
    check L238() else D13();
  L34(r61):
    goto L35();
  L37():
    sym16 = ldf missing;
    base16 = ldf missing in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L271() else L272();
  L56(r114):
    r116 = `!`(r114);
    any = ldf any in base;
    r117 = dyn any(r116);
    check L297() else D31();
  L57(c21):
    c32 = `as.logical`(c21);
    if c32 then L307() else L60();
  L191():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L192() else L193();
  L243():
    x22 = force? x21;
    checkMissing(x22);
    is_list1 = ldf `is.list` in base;
    r66 = dyn is_list1(x22);
    check L244() else D16();
  L245():
    deparse1 = ldf deparse1;
    check L246() else D17();
  L293():
    x31 = ld x;
    check L295() else D29();
  L294():
    r113 = dyn base23(<sym x>);
    goto L56(r113);
  L298():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L299() else L300();
  D13():
    deopt 71 [];
  D16():
    deopt 79 [r66];
  D17():
    deopt 81 [];
  D29():
    deopt 149 [x31];
  D31():
    deopt 155 [r117];
  L20(r36):
    c3 = `as.logical`(r36);
    if c3 then L196() else L21();
  L44(r87):
    c16 = `as.logical`(r87);
    if c16 then L273() else L45();
  L58(c25, r119):
    c29 = `as.logical`(r119);
    c30 = `||`(c25, c29);
    goto L57(c30);
  L60():
    goto L61();
  L61():
    sym26 = ldf any;
    base26 = ldf any in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L311() else L312();
  L192():
    x3 = ld x;
    check L194() else D0();
  L193():
    r35 = dyn base6(<sym x>);
    goto L20(r35);
  L238():
    r62 = dyn stop1("no 'z' matrix specified");
    check L239() else D14();
  L244():
    goto L36(r66);
  L246():
    p11 = prom<V +>{
      sym13 = ldf substitute;
      base13 = ldf substitute in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      substitute = ldf substitute in base;
      r69 = dyn substitute(<sym x>);
      goto L0(r69);
    L2():
      r67 = dyn base13(<sym x>);
      goto L0(r67);
    };
    r71 = dyn deparse1(p11);
    check L247() else D18();
  L271():
    missing6 = ldf missing in base;
    r88 = dyn missing6(<sym xlab>);
    goto L44(r88);
  L272():
    r86 = dyn base16(<sym xlab>);
    goto L44(r86);
  L295():
    x32 = force? x31;
    checkMissing(x32);
    is_finite1 = ldf `is.finite` in base;
    r115 = dyn is_finite1(x32);
    check L296() else D30();
  L297():
    goto L55(r117);
  L299():
    sym25 = ldf `is.finite`;
    base25 = ldf `is.finite` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L301() else L302();
  L300():
    r118 = dyn base24(<lang `!`(is.finite(y))>);
    goto L58(c20, r118);
  L307():
    stop2 = ldf stop;
    check L308() else D35();
  D0():
    deopt 9 [x3];
  D14():
    deopt 73 [r62];
  D18():
    deopt 83 [r71];
  D30():
    deopt 152 [r115];
  D35():
    deopt 169 [];
  L21():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L213() else L214();
  L22():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L229() else L230();
  L45():
    goto L49();
  L49():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L281() else L282();
  L59(c28, r121):
    r123 = `!`(r121);
    any1 = ldf any in base;
    r124 = dyn any1(r123);
    check L305() else D34();
  L62(r128):
    c33 = `as.logical`(r128);
    if c33 then L63(c33) else L316();
  L194():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r37 = dyn is_list(x4);
    check L195() else D1();
  L196():
    x5 = ld x;
    check L197() else D2();
  L239():
    goto L34(r62);
  L247():
    st xn = r71;
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L248() else L249();
  L273():
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L274() else L275();
  L296():
    goto L56(r115);
  L301():
    y3 = ld y;
    check L303() else D32();
  L302():
    r120 = dyn base25(<sym y>);
    goto L59(c20, r120);
  L308():
    r125 = dyn stop2("'x' and 'y' values must be finite and non-missing");
    check L309() else D36();
  L311():
    diff = ldf diff;
    check L313() else D37();
  L312():
    r127 = dyn base26(<lang `<=`(diff(x), 0.0)>);
    goto L62(r127);
  D1():
    deopt 12 [r37];
  D2():
    deopt 13 [x5];
  D32():
    deopt 160 [c20, y3];
  D34():
    deopt 166 [c28, r124];
  D36():
    deopt 171 [r125];
  D37():
    deopt 177 [];
  L23(r42):
    c8 = `as.logical`(r42);
    if c8 then L219() else L25();
  L28(r54):
    c9 = `as.logical`(r54);
    if c9 then L231() else L29();
  L38(r73):
    c12 = `as.logical`(r73);
    if c12 then L250() else L39();
  L46(r90):
    c17 = `as.logical`(r90);
    if c17 then L276() else L47();
  L50(r100):
    c18 = `as.logical`(r100);
    if c18 then L283() else L51();
  L63(c34):
    c42 = `as.logical`(c34);
    if c42 then L323() else L65();
  L195():
    goto L20(r37);
  L197():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L199() else L200(x6);
  L213():
    sym8 = ldf dim;
    base8 = ldf dim in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L215() else L216();
  L214():
    r41 = dyn base7(<lang dim(x)>);
    goto L23(r41);
  L229():
    missing2 = ldf missing in base;
    r55 = dyn missing2(<sym xlab>);
    goto L28(r55);
  L230():
    r53 = dyn base10(<sym xlab>);
    goto L28(r53);
  L248():
    missing4 = ldf missing in base;
    r74 = dyn missing4(<sym xlab>);
    goto L38(r74);
  L249():
    r72 = dyn base14(<sym xlab>);
    goto L38(r72);
  L274():
    missing7 = ldf missing in base;
    r91 = dyn missing7(<sym x>);
    goto L46(r91);
  L275():
    r89 = dyn base17(<sym x>);
    goto L46(r89);
  L281():
    missing8 = ldf missing in base;
    r101 = dyn missing8(<sym ylab>);
    goto L50(r101);
  L282():
    r99 = dyn base19(<sym ylab>);
    goto L50(r99);
  L303():
    y4 = force? y3;
    checkMissing(y4);
    is_finite2 = ldf `is.finite` in base;
    r122 = dyn is_finite2(y4);
    check L304() else D33();
  L305():
    goto L58(c28, r124);
  L309():
    goto L61();
  L313():
    p16 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r130 = dyn diff(p16);
    check L314() else D38();
  L316():
    sym27 = ldf any;
    base27 = ldf any in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L317() else L318();
  D33():
    deopt 163 [c20, r122];
  D38():
    deopt 179 [r130];
  L24(r44):
    c7 = `==`(r44, NULL);
    goto L23(c7);
  L25():
    goto L26();
  L26():
    x19 = ld x;
    check L223() else D9();
  L29():
    goto L30();
  L30():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L233() else L234();
  L39():
    goto L40();
  L40():
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L254() else L255();
  L47():
    deparse2 = ldf deparse1;
    check L278() else D25();
  L48(r92):
    st xlab = r92;
    goto L49();
  L51():
    goto L35();
  L64(c38, r134):
    c39 = `as.logical`(r134);
    c40 = `||`(c38, c39);
    goto L63(c40);
  L65():
    goto L66();
  L66():
    sym28 = ldf `is.matrix`;
    base28 = ldf `is.matrix` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L327() else L328();
  L198(dx3):
    st z = dx3;
    x9 = ld x;
    check L202() else D3();
  L199():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L201() else L200(dr2);
  L200(x8):
    r38 = `$`(x8, <sym z>);
    goto L198(r38);
  L215():
    x17 = ld x;
    check L217() else D5();
  L216():
    r43 = dyn base8(<sym x>);
    goto L24(r43);
  L219():
    stop = ldf stop;
    check L220() else D7();
  L231():
    st xlab = "";
    goto L30();
  L250():
    paste0 = ldf paste0;
    check L251() else D19();
  L276():
    goto L48("");
  L283():
    sym20 = ldf missing;
    base20 = ldf missing in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L284() else L285();
  L304():
    goto L59(c20, r122);
  L314():
    r131 = `<=`(r130, 0.0);
    any2 = ldf any in base;
    r132 = dyn any2(r131);
    check L315() else D39();
  L317():
    diff1 = ldf diff;
    check L319() else D40();
  L318():
    r133 = dyn base27(<lang `<=`(diff(y), 0.0)>);
    goto L64(c33, r133);
  L323():
    stop3 = ldf stop;
    check L324() else D43();
  D3():
    deopt 17 [x9];
  D5():
    deopt 28 [x17];
  D7():
    deopt 34 [];
  D9():
    deopt 39 [x19];
  D19():
    deopt 89 [];
  D25():
    deopt 124 [];
  D39():
    deopt 183 [r132];
  D40():
    deopt 187 [c33];
  D43():
    deopt 196 [];
  L31(r58):
    c10 = `as.logical`(r58);
    if c10 then L235() else L32();
  L41(r79):
    c13 = `as.logical`(r79);
    if c13 then L256() else L42();
  L52(r103):
    c19 = `as.logical`(r103);
    if c19 then L286() else L53();
  L67(r142):
    r144 = `!`(r142);
    c43 = `as.logical`(r144);
    if c43 then L331() else L68();
  L201():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L198(dx2);
  L202():
    x10 = force? x9;
    checkMissing(x10);
    c5 = `is.object`(x10);
    if c5 then L204() else L205(x10);
  L217():
    x18 = force? x17;
    checkMissing(x18);
    dim = ldf dim in base;
    r45 = dyn dim(x18);
    check L218() else D6();
  L220():
    r46 = dyn stop("argument must be matrix-like");
    check L221() else D8();
  L223():
    x20 = force? x19;
    checkMissing(x20);
    st z = x20;
    sym9 = ldf `seq.int`;
    base9 = ldf `seq.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L224() else L225();
  L233():
    missing3 = ldf missing in base;
    r59 = dyn missing3(<sym ylab>);
    goto L31(r59);
  L234():
    r57 = dyn base11(<sym ylab>);
    goto L31(r57);
  L251():
    p12 = prom<V +>{
      xn = ld xn;
      xn1 = force? xn;
      checkMissing(xn1);
      return xn1;
    };
    r76 = dyn paste0(p12, "$x");
    check L252() else D20();
  L254():
    missing5 = ldf missing in base;
    r80 = dyn missing5(<sym ylab>);
    goto L41(r80);
  L255():
    r78 = dyn base15(<sym ylab>);
    goto L41(r78);
  L278():
    p14 = prom<V +>{
      sym18 = ldf substitute;
      base18 = ldf substitute in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      substitute1 = ldf substitute in base;
      r95 = dyn substitute1(<sym x>);
      goto L0(r95);
    L2():
      r93 = dyn base18(<sym x>);
      goto L0(r93);
    };
    r97 = dyn deparse2(p14);
    check L279() else D26();
  L284():
    missing9 = ldf missing in base;
    r104 = dyn missing9(<sym y>);
    goto L52(r104);
  L285():
    r102 = dyn base20(<sym y>);
    goto L52(r102);
  L315():
    goto L62(r132);
  L319():
    p17 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r136 = dyn diff1(p17);
    check L320() else D41();
  L324():
    r139 = dyn stop3("increasing 'x' and 'y' values expected");
    check L325() else D44();
  L327():
    z16 = ld z;
    check L329() else D45();
  L328():
    r141 = dyn base28(<sym z>);
    goto L67(r141);
  D6():
    deopt 31 [r45];
  D8():
    deopt 36 [r46];
  D20():
    deopt 92 [r76];
  D26():
    deopt 126 [r97];
  D41():
    deopt 189 [c33, r136];
  D44():
    deopt 198 [r139];
  D45():
    deopt 203 [z16];
  L27(r49):
    st x = r49;
    goto L22();
  L32():
    goto L33(NULL);
  L33(r60):
    goto L34(r60);
  L42():
    goto L43();
  L43():
    x23 = ld x;
    check L260() else D23();
  L53():
    deparse3 = ldf deparse1;
    check L288() else D27();
  L54(r105):
    st ylab = r105;
    goto L35();
  L68():
    goto L69();
  L69():
    _in_ = ldf `%in%`;
    check L335() else D49();
  L203(dx5):
    st y = dx5;
    x13 = ld x;
    check L207() else D4();
  L204():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L206() else L205(dr4);
  L205(x12):
    r39 = `$`(x12, <sym y>);
    goto L203(r39);
  L218():
    goto L24(r45);
  L221():
    goto L26();
  L224():
    nrow1 = ldf nrow;
    check L226() else D10();
  L225():
    r48 = dyn base9[, , `length.out`](0.0, 1.0, <lang nrow(z)>);
    goto L27(r48);
  L235():
    st ylab = "";
    goto L33("");
  L252():
    st xlab = r76;
    goto L40();
  L256():
    paste1 = ldf paste0;
    check L257() else D21();
  L279():
    goto L48(r97);
  L286():
    goto L54("");
  L320():
    r137 = `<=`(r136, 0.0);
    any3 = ldf any in base;
    r138 = dyn any3(r137);
    check L321() else D42();
  L325():
    goto L66();
  L329():
    z17 = force? z16;
    checkMissing(z17);
    is_matrix = ldf `is.matrix` in base;
    r143 = dyn is_matrix(z17);
    check L330() else D46();
  L331():
    stop4 = ldf stop;
    check L332() else D47();
  D4():
    deopt 21 [x13];
  D10():
    deopt 47 [];
  D21():
    deopt 100 [];
  D23():
    deopt 107 [x23];
  D27():
    deopt 139 [];
  D42():
    deopt 193 [c33, r138];
  D46():
    deopt 206 [r143];
  D47():
    deopt 209 [];
  D49():
    deopt 215 [];
  L206():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L203(dx4);
  L207():
    x14 = force? x13;
    checkMissing(x14);
    c6 = `is.object`(x14);
    if c6 then L209() else L210(x14);
  L226():
    p10 = prom<V +>{
      z14 = ld z;
      z15 = force? z14;
      checkMissing(z15);
      return z15;
    };
    r51 = dyn nrow1(p10);
    check L227() else D11();
  L257():
    p13 = prom<V +>{
      xn2 = ld xn;
      xn3 = force? xn2;
      checkMissing(xn3);
      return xn3;
    };
    r82 = dyn paste1(p13, "$y");
    check L258() else D22();
  L260():
    x24 = force? x23;
    checkMissing(x24);
    c14 = `is.object`(x24);
    if c14 then L262() else L263(x24);
  L288():
    p15 = prom<V +>{
      sym21 = ldf substitute;
      base21 = ldf substitute in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      substitute2 = ldf substitute in base;
      r108 = dyn substitute2(<sym y>);
      goto L0(r108);
    L2():
      r106 = dyn base21(<sym y>);
      goto L0(r106);
    };
    r110 = dyn deparse3(p15);
    check L289() else D28();
  L321():
    goto L64(c33, r138);
  L330():
    goto L67(r143);
  L332():
    r145 = dyn stop4("'z' must be a matrix");
    check L333() else D48();
  L335():
    p18 = prom<V +>{
      sym29 = ldf typeof;
      base29 = ldf typeof in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r148):
      return r148;
    L1():
      z18 = ld z;
      z19 = force? z18;
      checkMissing(z19);
      typeof = ldf typeof in base;
      r149 = dyn typeof(z19);
      goto L0(r149);
    L2():
      r147 = dyn base29(<sym z>);
      goto L0(r147);
    };
    p19 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r152):
      return r152;
    L1():
      c44 = ldf c in base;
      r153 = dyn c44("logical", "integer", "double");
      goto L0(r153);
    L2():
      r151 = dyn base30("logical", "integer", "double");
      goto L0(r151);
    };
    r155 = dyn _in_(p18, p19);
    check L336() else D50();
  D11():
    deopt 49 [r51];
  D22():
    deopt 103 [r82];
  D28():
    deopt 141 [r110];
  D48():
    deopt 211 [r145];
  D50():
    deopt 218 [r155];
  L208(dx7):
    st x = dx7;
    goto L22();
  L209():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L211() else L210(dr6);
  L210(x16):
    r40 = `$`(x16, <sym x>);
    goto L208(r40);
  L227():
    seq_int = ldf `seq.int` in base;
    r52 = dyn seq_int(0.0, 1.0, r51);
    check L228() else D12();
  L258():
    st ylab = r82;
    goto L43();
  L261(dx10):
    st y = dx10;
    x27 = ld x;
    check L265() else D24();
  L262():
    dr8 = tryDispatchBuiltin.1("$", x24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L264() else L263(dr8);
  L263(x26):
    r84 = `$`(x26, <sym y>);
    goto L261(r84);
  L289():
    goto L54(r110);
  L333():
    goto L69();
  L336():
    r156 = `!`(r155);
    c45 = `as.logical`(r156);
    if c45 then L337() else L70();
  D12():
    deopt 52 [r52];
  D24():
    deopt 111 [x27];
  L70():
    goto L71();
  L71():
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L341() else L342();
  L211():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L208(dx6);
  L228():
    goto L27(r52);
  L264():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L261(dx9);
  L265():
    x28 = force? x27;
    checkMissing(x28);
    c15 = `is.object`(x28);
    if c15 then L267() else L268(x28);
  L337():
    stop5 = ldf stop;
    check L338() else D51();
  D51():
    deopt 221 [];
  L72(r160):
    r162 = `>`(r160, 1.0);
    c46 = `as.logical`(r162);
    if c46 then L345() else L73(c46);
  L266(dx12):
    st x = dx12;
    goto L35();
  L267():
    dr10 = tryDispatchBuiltin.1("$", x28);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L269() else L268(dr10);
  L268(x30):
    r85 = `$`(x30, <sym x>);
    goto L266(r85);
  L338():
    r157 = dyn stop5("'z' must be numeric or logical");
    check L339() else D52();
  L341():
    x35 = ld x;
    check L343() else D53();
  L342():
    r159 = dyn base31(<sym x>);
    goto L72(r159);
  D52():
    deopt 223 [r157];
  D53():
    deopt 228 [x35];
  L73(c48):
    c55 = `as.logical`(c48);
    if c55 then L353() else L75();
  L269():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L266(dx11);
  L339():
    goto L71();
  L343():
    x36 = force? x35;
    checkMissing(x36);
    length = ldf length in base;
    r161 = dyn length(x36);
    check L344() else D54();
  L345():
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L346() else L347();
  D54():
    deopt 231 [r161];
  L74(c51, r164):
    nrow2 = ldf nrow;
    check L350() else D57();
  L75():
    goto L85();
  L85():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L393() else L394();
  L344():
    goto L72(r161);
  L346():
    x37 = ld x;
    check L348() else D55();
  L347():
    r163 = dyn base32(<sym x>);
    goto L74(c46, r163);
  L353():
    diff2 = ldf diff;
    check L354() else D59();
  D55():
    deopt 236 [c46, x37];
  D57():
    deopt 240 [c51, r164];
  D59():
    deopt 247 [0.5];
  L86(r196):
    r198 = `>`(r196, 1.0);
    c62 = `as.logical`(r198);
    if c62 then L397() else L87(c62);
  L348():
    x38 = force? x37;
    checkMissing(x38);
    length1 = ldf length in base;
    r165 = dyn length1(x38);
    check L349() else D56();
  L350():
    p20 = prom<V +>{
      z20 = ld z;
      z21 = force? z20;
      checkMissing(z21);
      return z21;
    };
    r167 = dyn nrow2(p20);
    check L351() else D58();
  L354():
    p21 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    r170 = dyn diff2(p21);
    check L355() else D60();
  L393():
    y7 = ld y;
    check L395() else D74();
  L394():
    r195 = dyn base37(<sym y>);
    goto L86(r195);
  D56():
    deopt 239 [c46, r165];
  D58():
    deopt 242 [c51, r164, r167];
  D60():
    deopt 249 [0.5, r170];
  D74():
    deopt 303 [y7];
  L87(c64):
    c71 = `as.logical`(c64);
    if c71 then L405() else L89();
  L349():
    goto L74(c46, r165);
  L351():
    r168 = `==`(r164, r167);
    c52 = `as.logical`(r168);
    c53 = `&&`(c51, c52);
    goto L73(c53);
  L355():
    r171 = `*`(0.5, r170);
    st dx = r171;
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L356() else L357();
  L395():
    y8 = force? y7;
    checkMissing(y8);
    length5 = ldf length in base;
    r197 = dyn length5(y8);
    check L396() else D75();
  L397():
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L398() else L399();
  D75():
    deopt 306 [r197];
  L76(r173):
    st x = r173;
    goto L85();
  L88(c67, r200):
    ncol1 = ldf ncol;
    check L402() else D78();
  L89():
    goto L99();
  L99():
    sym43 = ldf missing;
    base43 = ldf missing in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L445() else L446();
  L356():
    x41 = ld x;
    check L358() else D61();
  L357():
    r172 = dyn base33(<lang `-`(`[`(x, 1), `[`(dx, 1))>, <lang `+`(`[`(x, `-`(length(x))), dx)>, <lang `+`(`[`(x, length(x)), `[`(dx, `-`(length(x), 1.0)))>);
    goto L76(r172);
  L396():
    goto L86(r197);
  L398():
    y9 = ld y;
    check L400() else D76();
  L399():
    r199 = dyn base38(<sym y>);
    goto L88(c62, r199);
  L405():
    diff3 = ldf diff;
    check L406() else D80();
  D61():
    deopt 254 [x41];
  D76():
    deopt 311 [c62, y9];
  D78():
    deopt 315 [c67, r200];
  D80():
    deopt 322 [0.5];
  L100(r232):
    c78 = `as.logical`(r232);
    if c78 then L447() else L101();
  L358():
    x42 = force? x41;
    checkMissing(x42);
    c56 = `is.object`(x42);
    if c56 then L359() else L360(x42);
  L400():
    y10 = force? y9;
    checkMissing(y10);
    length6 = ldf length in base;
    r201 = dyn length6(y10);
    check L401() else D77();
  L402():
    p22 = prom<V +>{
      z22 = ld z;
      z23 = force? z22;
      checkMissing(z23);
      return z23;
    };
    r203 = dyn ncol1(p22);
    check L403() else D79();
  L406():
    p23 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    r206 = dyn diff3(p23);
    check L407() else D81();
  L445():
    missing10 = ldf missing in base;
    r233 = dyn missing10(<sym breaks>);
    goto L100(r233);
  L446():
    r231 = dyn base43(<sym breaks>);
    goto L100(r231);
  D77():
    deopt 314 [c62, r201];
  D79():
    deopt 317 [c67, r200, r203];
  D81():
    deopt 324 [0.5, r206];
  L77(dx14):
    dx15 = ld dx;
    check L362() else D62();
  L101():
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L523() else L524();
  L125():
    add1 = ld add;
    check L556() else D143();
  L359():
    dr12 = tryDispatchBuiltin.1("[", x42);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L361() else L360(dr12);
  L360(x44):
    __1 = ldf `[` in base;
    r174 = dyn __1(x44, 1);
    goto L77(r174);
  L401():
    goto L88(c62, r201);
  L403():
    r204 = `==`(r200, r203);
    c68 = `as.logical`(r204);
    c69 = `&&`(c67, c68);
    goto L87(c69);
  L407():
    r207 = `*`(0.5, r206);
    st dy = r207;
    sym39 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L408() else L409();
  L447():
    sym44 = ldf length;
    base44 = ldf length in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L448() else L449();
  D62():
    deopt 258 [dx14, dx15];
  D143():
    deopt 569 [add1];
  L90(r209):
    st y = r209;
    goto L99();
  L102(r235):
    st nc = r235;
    sym45 = ldf missing;
    base45 = ldf missing in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L452() else L453();
  L126(r307):
    sym54 = ldf length;
    base54 = ldf length in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L527() else L528();
  L361():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L77(dx13);
  L362():
    dx16 = force? dx15;
    checkMissing(dx16);
    c57 = `is.object`(dx16);
    if c57 then L363() else L364(dx14, dx16);
  L408():
    y13 = ld y;
    check L410() else D82();
  L409():
    r208 = dyn base39(<lang `-`(`[`(y, 1), `[`(dy, 1))>, <lang `+`(`[`(y, `-`(length(y))), dy)>, <lang `+`(`[`(y, length(y)), `[`(dy, `-`(length(y), 1)))>);
    goto L90(r208);
  L448():
    col1 = ld col;
    check L450() else D95();
  L449():
    r234 = dyn base44(<sym col>);
    goto L102(r234);
  L523():
    breaks1 = ld breaks;
    check L525() else D124();
  L524():
    r306 = dyn base53(<sym breaks>);
    goto L126(r306);
  L556():
    add2 = force? add1;
    checkMissing(add2);
    r338 = `!`(add2);
    c114 = `as.logical`(r338);
    if c114 then L557() else L136();
  D82():
    deopt 329 [y13];
  D95():
    deopt 381 [col1];
  D124():
    deopt 509 [breaks1];
  L78(dx23, dx24):
    r176 = `-`(dx23, dx24);
    x45 = ld x;
    check L366() else D63();
  L103(r238):
    r240 = `!`(r238);
    c79 = `as.logical`(r240);
    if c79 then L454() else L104(c79);
  L127(r312, r313):
    r315 = `+`(r313, 1.0);
    r316 = `!=`(r312, r315);
    c111 = `as.logical`(r316);
    if c111 then L531() else L128();
  L136():
    goto L137();
  L137():
    sym57 = ldf length;
    base57 = ldf length in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L561() else L562();
  L363():
    dr14 = tryDispatchBuiltin.1("[", dx16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L365() else L364(dx14, dr14);
  L364(dx19, dx20):
    __2 = ldf `[` in base;
    r175 = dyn __2(dx20, 1);
    goto L78(dx19, r175);
  L410():
    y14 = force? y13;
    checkMissing(y14);
    c72 = `is.object`(y14);
    if c72 then L411() else L412(y14);
  L450():
    col2 = force? col1;
    checkMissing(col2);
    length10 = ldf length in base;
    r236 = dyn length10(col2);
    check L451() else D96();
  L452():
    missing11 = ldf missing in base;
    r239 = dyn missing11(<sym zlim>);
    goto L103(r239);
  L453():
    r237 = dyn base45(<sym zlim>);
    goto L103(r237);
  L525():
    breaks2 = force? breaks1;
    checkMissing(breaks2);
    length11 = ldf length in base;
    r308 = dyn length11(breaks2);
    check L526() else D125();
  L527():
    col3 = ld col;
    check L529() else D126();
  L528():
    r311 = dyn base54(<sym col>);
    goto L127(r307, r311);
  L557():
    plot = ldf plot;
    check L558() else D144();
  D63():
    deopt 264 [x45];
  D96():
    deopt 384 [r236];
  D125():
    deopt 512 [r308];
  D126():
    deopt 514 [r307, col3];
  D144():
    deopt 573 [];
  L91(dx48):
    dy = ld dy;
    check L414() else D83();
  L104(c81):
    c100 = `as.logical`(c81);
    if c100 then L467() else L108();
  L128():
    goto L129();
  L129():
    sym55 = ldf any;
    base55 = ldf any in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L535() else L536();
  L138(r350):
    r352 = `<=`(r350, 1.0);
    c115 = `as.logical`(r352);
    if c115 then L565() else L139();
  L365():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L78(dx14, dx22);
  L366():
    x46 = force? x45;
    checkMissing(x46);
    c58 = `is.object`(x46);
    if c58 then L367() else L368(x46);
  L411():
    dr22 = tryDispatchBuiltin.1("[", y14);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L413() else L412(dr22);
  L412(y16):
    __6 = ldf `[` in base;
    r210 = dyn __6(y16, 1);
    goto L91(r210);
  L451():
    goto L102(r236);
  L454():
    sym46 = ldf any;
    base46 = ldf any in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L455() else L456();
  L526():
    goto L126(r308);
  L529():
    col4 = force? col3;
    checkMissing(col4);
    length12 = ldf length in base;
    r314 = dyn length12(col4);
    check L530() else D127();
  L531():
    stop7 = ldf stop;
    check L532() else D128();
  L558():
    p31 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p32 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p33 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p34 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p35 = prom<V +>{
      xaxs1 = ld xaxs;
      xaxs2 = force? xaxs1;
      checkMissing(xaxs2);
      return xaxs2;
    };
    p36 = prom<V +>{
      yaxs1 = ld yaxs;
      yaxs2 = force? yaxs1;
      checkMissing(yaxs2);
      return yaxs2;
    };
    p37 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p38 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd1 = ld `...`;
    r347 = dyn plot[, , xlim, ylim, type, xaxs, yaxs, xlab, ylab, `...`](p31, p32, p33, p34, "n", p35, p36, p37, p38, ddd1);
    check L559() else D145();
  L561():
    x65 = ld x;
    check L563() else D146();
  L562():
    r349 = dyn base57(<sym x>);
    goto L138(r349);
  D83():
    deopt 333 [dx48, dy];
  D127():
    deopt 517 [r307, r314];
  D128():
    deopt 522 [];
  D145():
    deopt 591 [r347];
  D146():
    deopt 596 [x65];
  L79(dx26):
    dx27 = ld dx;
    check L374() else D66();
  L105(c84, r242):
    c88 = `as.logical`(r242);
    if c88 then L107(c84, c88) else L462();
  L108():
    goto L109();
  L109():
    diff5 = ldf diff;
    check L471() else D104();
  L130(r320):
    c112 = `as.logical`(r320);
    if c112 then L542() else L132();
  L139():
    goto L141();
  L141():
    sym58 = ldf length;
    base58 = ldf length in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L572() else L573();
  L367():
    dr16 = tryDispatchBuiltin.1("[", x46);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L369() else L368(dr16);
  L368(x48):
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L370() else L371();
  L413():
    dx47 = getTryDispatchBuiltinValue(dr22);
    goto L91(dx47);
  L414():
    dy1 = force? dy;
    checkMissing(dy1);
    c73 = `is.object`(dy1);
    if c73 then L415() else L416(dx48, dy1);
  L455():
    sym47 = ldf `is.finite`;
    base47 = ldf `is.finite` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L457() else L458();
  L456():
    r241 = dyn base46(<lang `!`(is.finite(zlim))>);
    goto L105(c79, r241);
  L467():
    stop6 = ldf stop;
    check L468() else D102();
  L530():
    goto L127(r307, r314);
  L532():
    r317 = dyn stop7("must have one more break than colour");
    check L533() else D129();
  L535():
    sym56 = ldf `is.finite`;
    base56 = ldf `is.finite` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L537() else L538();
  L536():
    r319 = dyn base55(<lang `!`(is.finite(breaks))>);
    goto L130(r319);
  L559():
    goto L137();
  L563():
    x66 = force? x65;
    checkMissing(x66);
    length13 = ldf length in base;
    r351 = dyn length13(x66);
    check L564() else D147();
  L565():
    par = ldf par;
    check L566() else D148();
  D66():
    deopt 273 [dx26, dx27];
  D102():
    deopt 410 [];
  D104():
    deopt 416 [];
  D129():
    deopt 524 [r317];
  D147():
    deopt 599 [r351];
  D148():
    deopt 603 [];
  L80(x51, r178):
    r180 = `-`(<missing>, r178);
    __3 = ldf `[` in base;
    r181 = dyn __3(x51, r180);
    goto L79(r181);
  L92(dx53, dx54):
    r212 = `-`(dx53, dx54);
    y17 = ld y;
    check L418() else D84();
  L106(c87, r244):
    r246 = `!`(r244);
    any4 = ldf any in base;
    r247 = dyn any4(r246);
    check L461() else D99();
  L107(c89, c90):
    c97 = `as.logical`(c90);
    c98 = `&&`(c89, c97);
    goto L104(c98);
  L131(r322):
    r324 = `!`(r322);
    any5 = ldf any in base;
    r325 = dyn any5(r324);
    check L541() else D132();
  L132():
    goto L133();
  L133():
    is_unsorted = ldf `is.unsorted`;
    check L546() else D135();
  L142(r358):
    r360 = `<=`(r358, 1.0);
    c117 = `as.logical`(r360);
    if c117 then L576() else L143();
  L369():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L79(dx25);
  L370():
    x52 = ld x;
    check L372() else D64();
  L371():
    r177 = dyn base34(<sym x>);
    goto L80(x48, r177);
  L374():
    dx28 = force? dx27;
    checkMissing(dx28);
    r182 = `+`(dx26, dx28);
    x54 = ld x;
    check L375() else D67();
  L415():
    dr24 = tryDispatchBuiltin.1("[", dy1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L417() else L416(dx48, dr24);
  L416(dx50, dy3):
    __7 = ldf `[` in base;
    r211 = dyn __7(dy3, 1);
    goto L92(dx50, r211);
  L457():
    zlim1 = ld zlim;
    check L459() else D97();
  L458():
    r243 = dyn base47(<sym zlim>);
    goto L106(c79, r243);
  L462():
    diff4 = ldf diff;
    check L463() else D100();
  L468():
    r251 = dyn stop6("invalid z limits");
    check L469() else D103();
  L471():
    p25 = prom<V +>{
      zlim5 = ld zlim;
      zlim6 = force? zlim5;
      checkMissing(zlim6);
      return zlim6;
    };
    r254 = dyn diff5(p25);
    check L472() else D105();
  L533():
    goto L129();
  L537():
    breaks3 = ld breaks;
    check L539() else D130();
  L538():
    r321 = dyn base56(<sym breaks>);
    goto L131(r321);
  L542():
    stop8 = ldf stop;
    check L543() else D133();
  L564():
    goto L138(r351);
  L566():
    r353 = dyn par("usr");
    check L567() else D149();
  L572():
    y37 = ld y;
    check L574() else D150();
  L573():
    r357 = dyn base58(<sym y>);
    goto L142(r357);
  D64():
    deopt 268 [x48, x52];
  D67():
    deopt 276 [x54];
  D84():
    deopt 339 [y17];
  D97():
    deopt 394 [c79, zlim1];
  D99():
    deopt 400 [c87, r247];
  D100():
    deopt 402 [c84, c88];
  D103():
    deopt 412 [r251];
  D105():
    deopt 418 [r254];
  D130():
    deopt 531 [breaks3];
  D132():
    deopt 537 [r325];
  D133():
    deopt 539 [];
  D135():
    deopt 545 [];
  D149():
    deopt 605 [r353];
  D150():
    deopt 614 [y37];
  L143():
    goto L145();
  L145():
    sym59 = ldf length;
    base59 = ldf length in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L583() else L584();
  L372():
    x53 = force? x52;
    checkMissing(x53);
    length2 = ldf length in base;
    r179 = dyn length2(x53);
    check L373() else D65();
  L375():
    x55 = force? x54;
    checkMissing(x55);
    c59 = `is.object`(x55);
    if c59 then L376() else L377(x55);
  L417():
    dx52 = getTryDispatchBuiltinValue(dr24);
    goto L92(dx48, dx52);
  L418():
    y18 = force? y17;
    checkMissing(y18);
    c74 = `is.object`(y18);
    if c74 then L419() else L420(y18);
  L459():
    zlim2 = force? zlim1;
    checkMissing(zlim2);
    is_finite3 = ldf `is.finite` in base;
    r245 = dyn is_finite3(zlim2);
    check L460() else D98();
  L461():
    goto L105(c87, r247);
  L463():
    p24 = prom<V +>{
      zlim3 = ld zlim;
      zlim4 = force? zlim3;
      checkMissing(zlim4);
      return zlim4;
    };
    r249 = dyn diff4(p24);
    check L464() else D101();
  L469():
    goto L109();
  L472():
    r255 = `==`(r254, 0.0);
    c101 = `as.logical`(r255);
    if c101 then L473() else L110();
  L539():
    breaks4 = force? breaks3;
    checkMissing(breaks4);
    is_finite4 = ldf `is.finite` in base;
    r323 = dyn is_finite4(breaks4);
    check L540() else D131();
  L541():
    goto L130(r325);
  L543():
    r326 = dyn stop8("'breaks' must all be finite");
    check L544() else D134();
  L546():
    p27 = prom<V +>{
      breaks5 = ld breaks;
      breaks6 = force? breaks5;
      checkMissing(breaks6);
      return breaks6;
    };
    r329 = dyn is_unsorted(p27);
    check L547() else D136();
  L567():
    c116 = `is.object`(r353);
    if c116 then L568() else L569(r353);
  L574():
    y38 = force? y37;
    checkMissing(y38);
    length14 = ldf length in base;
    r359 = dyn length14(y38);
    check L575() else D151();
  L576():
    par1 = ldf par;
    check L577() else D152();
  D65():
    deopt 271 [x48, r179];
  D98():
    deopt 397 [c79, r245];
  D101():
    deopt 404 [c84, c88, r249];
  D131():
    deopt 534 [r323];
  D134():
    deopt 541 [r326];
  D136():
    deopt 547 [r329];
  D151():
    deopt 617 [r359];
  D152():
    deopt 621 [];
  L81(dx30):
    dx31 = ld dx;
    check L383() else D70();
  L93(dx56):
    dy4 = ld dy;
    check L426() else D87();
  L110():
    goto L119();
  L119():
    z24 = ld z;
    check L498() else D112();
  L140(dx89):
    st x = dx89;
    goto L141();
  L146(r366):
    nrow3 = ldf nrow;
    check L587() else D156();
  L373():
    goto L80(x48, r179);
  L376():
    dr18 = tryDispatchBuiltin.1("[", x55);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L378() else L377(dr18);
  L377(x57):
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L379() else L380();
  L419():
    dr26 = tryDispatchBuiltin.1("[", y18);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L421() else L420(dr26);
  L420(y20):
    sym40 = ldf length;
    base40 = ldf length in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L422() else L423();
  L460():
    goto L106(c79, r245);
  L464():
    r250 = `<`(r249, 0.0);
    c93 = `as.logical`(r250);
    c94 = `||`(c88, c93);
    goto L107(c84, c94);
  L473():
    zlim7 = ld zlim;
    check L474() else D106();
  L540():
    goto L131(r323);
  L544():
    goto L133();
  L547():
    c113 = `as.logical`(r329);
    if c113 then L548() else L134();
  L568():
    dr42 = tryDispatchBuiltin.1("[", r353);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L570() else L569(dr42);
  L569(r355):
    __15 = ldf `[` in base;
    r356 = dyn __15(r355, <int 1, 2>);
    goto L140(r356);
  L575():
    goto L142(r359);
  L577():
    r361 = dyn par1("usr");
    check L578() else D153();
  L583():
    x67 = ld x;
    check L585() else D154();
  L584():
    r365 = dyn base59(<sym x>);
    goto L146(r365);
  D70():
    deopt 284 [dx30, dx31];
  D87():
    deopt 348 [dx56, dy4];
  D106():
    deopt 421 [zlim7];
  D112():
    deopt 459 [z24];
  D153():
    deopt 623 [r361];
  D154():
    deopt 632 [x67];
  D156():
    deopt 636 [r366];
  L82(x60, r184):
    __4 = ldf `[` in base;
    r186 = dyn __4(x60, r184);
    goto L81(r186);
  L94(y23, r214):
    r216 = `-`(<missing>, r214);
    __8 = ldf `[` in base;
    r217 = dyn __8(y23, r216);
    goto L93(r217);
  L134():
    goto L135();
  L135():
    _bincode = ldf `.bincode`;
    check L554() else D141();
  L378():
    dx29 = getTryDispatchBuiltinValue(dr18);
    goto L81(dx29);
  L379():
    x61 = ld x;
    check L381() else D68();
  L380():
    r183 = dyn base35(<sym x>);
    goto L82(x57, r183);
  L383():
    dx32 = force? dx31;
    checkMissing(dx32);
    c60 = `is.object`(dx32);
    if c60 then L384() else L385(dx30, dx32);
  L421():
    dx55 = getTryDispatchBuiltinValue(dr26);
    goto L93(dx55);
  L422():
    y24 = ld y;
    check L424() else D85();
  L423():
    r213 = dyn base40(<sym y>);
    goto L94(y20, r213);
  L426():
    dy5 = force? dy4;
    checkMissing(dy5);
    r218 = `+`(dx56, dy5);
    y26 = ld y;
    check L427() else D88();
  L474():
    zlim8 = force? zlim7;
    checkMissing(zlim8);
    c102 = `is.object`(zlim8);
    if c102 then L475() else L476(zlim8);
  L498():
    z25 = force? z24;
    checkMissing(z25);
    zlim19 = ld zlim;
    check L499() else D113();
  L548():
    warning = ldf warning;
    check L549() else D137();
  L570():
    dx88 = getTryDispatchBuiltinValue(dr42);
    goto L140(dx88);
  L578():
    c118 = `is.object`(r361);
    if c118 then L579() else L580(r361);
  L585():
    x68 = force? x67;
    checkMissing(x68);
    length15 = ldf length in base;
    r367 = dyn length15(x68);
    check L586() else D155();
  L587():
    p39 = prom<V +>{
      z36 = ld z;
      z37 = force? z36;
      checkMissing(z37);
      return z37;
    };
    r369 = dyn nrow3(p39);
    check L588() else D157();
  D68():
    deopt 280 [x57, x61];
  D85():
    deopt 343 [y20, y24];
  D88():
    deopt 351 [y26];
  D113():
    deopt 460 [z25, zlim19];
  D137():
    deopt 549 [];
  D141():
    deopt 560 [];
  D155():
    deopt 635 [r367];
  D157():
    deopt 638 [r366, r369];
  L83(dx39, dx40):
    r192 = `+`(dx39, dx40);
    c61 = ldf c in base;
    r193 = dyn c61(r176, r182, r192);
    check L391() else D73();
  L111(dx69):
    r257 = `==`(dx69, 0.0);
    c103 = `as.logical`(r257);
    if c103 then L478() else L112();
  L144(dx92):
    st y = dx92;
    goto L145();
  L381():
    x62 = force? x61;
    checkMissing(x62);
    length3 = ldf length in base;
    r185 = dyn length3(x62);
    check L382() else D69();
  L384():
    dr20 = tryDispatchBuiltin.1("[", dx32);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L386() else L385(dx30, dr20);
  L385(dx35, dx36):
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L387() else L388();
  L424():
    y25 = force? y24;
    checkMissing(y25);
    length7 = ldf length in base;
    r215 = dyn length7(y25);
    check L425() else D86();
  L427():
    y27 = force? y26;
    checkMissing(y27);
    c75 = `is.object`(y27);
    if c75 then L428() else L429(y27);
  L475():
    dr32 = tryDispatchBuiltin.1("[", zlim8);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L477() else L476(dr32);
  L476(zlim10):
    __11 = ldf `[` in base;
    r256 = dyn __11(zlim10, 1);
    goto L111(r256);
  L499():
    zlim20 = force? zlim19;
    checkMissing(zlim20);
    c108 = `is.object`(zlim20);
    if c108 then L500() else L501(z25, zlim20);
  L549():
    r330 = dyn warning("unsorted 'breaks' will be sorted before use");
    check L550() else D138();
  L554():
    p29 = prom<V +>{
      z34 = ld z;
      z35 = force? z34;
      checkMissing(z35);
      return z35;
    };
    p30 = prom<V +>{
      breaks9 = ld breaks;
      breaks10 = force? breaks9;
      checkMissing(breaks10);
      return breaks10;
    };
    r336 = dyn _bincode(p29, p30, TRUE, TRUE);
    check L555() else D142();
  L579():
    dr44 = tryDispatchBuiltin.1("[", r361);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L581() else L580(dr44);
  L580(r363):
    __16 = ldf `[` in base;
    r364 = dyn __16(r363, <int 3, 4>);
    goto L144(r364);
  L586():
    goto L146(r367);
  L588():
    r370 = `+`(r369, 1.0);
    r371 = `!=`(r366, r370);
    c119 = `as.logical`(r371);
    if c119 then L147(c119) else L589();
  D69():
    deopt 283 [x57, r185];
  D73():
    deopt 297 [r193];
  D86():
    deopt 346 [y20, r215];
  D138():
    deopt 551 [r330];
  D142():
    deopt 565 [r336];
  L84(dx45, dx46, r188):
    r190 = `-`(r188, 1.0);
    __5 = ldf `[` in base;
    r191 = dyn __5(dx46, r190);
    goto L83(dx45, r191);
  L95(dx58):
    dy6 = ld dy;
    check L435() else D91();
  L112():
    zlim11 = ld zlim;
    check L483() else D108();
  L114(r261):
    st zlim = r261;
    goto L119();
  L120(z29, dx85):
    r281 = `-`(z29, dx85);
    diff6 = ldf diff;
    check L503() else D114();
  L147(c120):
    c128 = `as.logical`(c120);
    if c128 then L597() else L149();
  L382():
    goto L82(x57, r185);
  L386():
    dx38 = getTryDispatchBuiltinValue(dr20);
    goto L83(dx30, dx38);
  L387():
    x63 = ld x;
    check L389() else D71();
  L388():
    r187 = dyn base36(<sym x>);
    goto L84(dx35, dx36, r187);
  L391():
    goto L76(r193);
  L425():
    goto L94(y20, r215);
  L428():
    dr28 = tryDispatchBuiltin.1("[", y27);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L430() else L429(dr28);
  L429(y29):
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L431() else L432();
  L477():
    dx68 = getTryDispatchBuiltinValue(dr32);
    goto L111(dx68);
  L478():
    sym48 = ldf c;
    base48 = ldf c in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L479() else L480();
  L500():
    dr38 = tryDispatchBuiltin.1("[", zlim20);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L502() else L501(z25, dr38);
  L501(z27, zlim22):
    __14 = ldf `[` in base;
    r280 = dyn __14(zlim22, 1);
    goto L120(z27, r280);
  L550():
    sort = ldf sort;
    check L551() else D139();
  L555():
    r337 = `-`(r336, 1);
    st zi = r337;
    goto L125();
  L581():
    dx91 = getTryDispatchBuiltinValue(dr44);
    goto L144(dx91);
  L589():
    sym60 = ldf length;
    base60 = ldf length in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L590() else L591();
  D71():
    deopt 288 [dx35, dx36, x63];
  D91():
    deopt 359 [dx58, dy6];
  D108():
    deopt 435 [zlim11];
  D114():
    deopt 466 [r281];
  D139():
    deopt 553 [];
  L96(y32, r220):
    __9 = ldf `[` in base;
    r222 = dyn __9(y32, r220);
    goto L95(r222);
  L113(r259):
    goto L114(r259);
  L148(c124, r373):
    ncol2 = ldf ncol;
    check L594() else D160();
  L149():
    goto L150();
  L150():
    r381 = clos inner799576941;
    st check_irregular = r381;
    sym61 = ldf missing;
    base61 = ldf missing in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L601() else L602();
  L389():
    x64 = force? x63;
    checkMissing(x64);
    length4 = ldf length in base;
    r189 = dyn length4(x64);
    check L390() else D72();
  L430():
    dx57 = getTryDispatchBuiltinValue(dr28);
    goto L95(dx57);
  L431():
    y33 = ld y;
    check L433() else D89();
  L432():
    r219 = dyn base41(<sym y>);
    goto L96(y29, r219);
  L435():
    dy7 = force? dy6;
    checkMissing(dy7);
    c76 = `is.object`(dy7);
    if c76 then L436() else L437(dx58, dy7);
  L479():
    c104 = ldf c in base;
    r260 = dyn c104(-1.0, 1.0);
    check L481() else D107();
  L480():
    r258 = dyn base48(<lang `-`(1.0)>, 1.0);
    goto L113(r258);
  L483():
    zlim12 = force? zlim11;
    checkMissing(zlim12);
    c105 = `is.object`(zlim12);
    if c105 then L484() else L485(zlim12);
  L502():
    dx84 = getTryDispatchBuiltinValue(dr38);
    goto L120(z25, dx84);
  L503():
    p26 = prom<V +>{
      zlim23 = ld zlim;
      zlim24 = force? zlim23;
      checkMissing(zlim24);
      return zlim24;
    };
    r283 = dyn diff6(p26);
    check L504() else D115();
  L551():
    p28 = prom<V +>{
      breaks7 = ld breaks;
      breaks8 = force? breaks7;
      checkMissing(breaks8);
      return breaks8;
    };
    r332 = dyn sort(p28);
    check L552() else D140();
  L590():
    y39 = ld y;
    check L592() else D158();
  L591():
    r372 = dyn base60(<sym y>);
    goto L148(c119, r372);
  L597():
    stop9 = ldf stop;
    check L598() else D162();
  D72():
    deopt 291 [dx35, dx36, r189];
  D89():
    deopt 355 [y29, y33];
  D107():
    deopt 434 [r260];
  D115():
    deopt 468 [r281, r283];
  D140():
    deopt 555 [r332];
  D158():
    deopt 644 [c119, y39];
  D160():
    deopt 648 [c124, r373];
  D162():
    deopt 656 [];
  L97(dx63, dx64):
    r228 = `+`(dx63, dx64);
    c77 = ldf c in base;
    r229 = dyn c77(r212, r218, r228);
    check L443() else D94();
  L115(dx71):
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L487() else L488();
  L151(r383):
    c129 = `as.logical`(r383);
    if c129 then L603() else L152();
  L390():
    goto L84(dx35, dx36, r189);
  L433():
    y34 = force? y33;
    checkMissing(y34);
    length8 = ldf length in base;
    r221 = dyn length8(y34);
    check L434() else D90();
  L436():
    dr30 = tryDispatchBuiltin.1("[", dy7);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L438() else L437(dx58, dr30);
  L437(dx60, dy9):
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L439() else L440();
  L481():
    goto L113(r260);
  L484():
    dr34 = tryDispatchBuiltin.1("[", zlim12);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L486() else L485(dr34);
  L485(zlim14):
    __12 = ldf `[` in base;
    r262 = dyn __12(zlim14, 1);
    goto L115(r262);
  L504():
    r284 = `/`(r281, r283);
    st z = r284;
    oldstyle1 = ld oldstyle;
    check L505() else D116();
  L552():
    st breaks = r332;
    goto L135();
  L592():
    y40 = force? y39;
    checkMissing(y40);
    length16 = ldf length in base;
    r374 = dyn length16(y40);
    check L593() else D159();
  L594():
    p40 = prom<V +>{
      z38 = ld z;
      z39 = force? z38;
      checkMissing(z39);
      return z39;
    };
    r376 = dyn ncol2(p40);
    check L595() else D161();
  L598():
    r379 = dyn stop9("dimensions of z are not length(x)(-1) times length(y)(-1)");
    check L599() else D163();
  L601():
    missing12 = ldf missing in base;
    r384 = dyn missing12(<sym useRaster>);
    goto L151(r384);
  L602():
    r382 = dyn base61(<sym useRaster>);
    goto L151(r382);
  D90():
    deopt 358 [y29, r221];
  D94():
    deopt 372 [r229];
  D116():
    deopt 471 [oldstyle1];
  D159():
    deopt 647 [c119, r374];
  D161():
    deopt 650 [c124, r373, r376];
  D163():
    deopt 658 [r379];
  L98(dx67, dy12, r224):
    r226 = `-`(r224, 1);
    __10 = ldf `[` in base;
    r227 = dyn __10(dy12, r226);
    goto L97(dx67, r227);
  L116(dx74, r264):
    sym50 = ldf abs;
    base50 = ldf abs in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L490() else L491();
  L152():
    goto L166();
  L166():
    useRaster5 = ld useRaster;
    check L642() else D179();
  L434():
    goto L96(y29, r221);
  L438():
    dx62 = getTryDispatchBuiltinValue(dr30);
    goto L97(dx58, dx62);
  L439():
    y35 = ld y;
    check L441() else D92();
  L440():
    r223 = dyn base42(<sym y>);
    goto L98(dx60, dy9, r223);
  L443():
    goto L90(r229);
  L486():
    dx70 = getTryDispatchBuiltinValue(dr34);
    goto L115(dx70);
  L487():
    c106 = ldf c in base;
    r265 = dyn c106(-0.4, 0.4);
    check L489() else D109();
  L488():
    r263 = dyn base49(<lang `-`(0.4)>, 0.4);
    goto L116(dx71, r263);
  L505():
    oldstyle2 = force? oldstyle1;
    checkMissing(oldstyle2);
    c109 = `as.logical`(oldstyle2);
    if c109 then L506() else L121();
  L593():
    goto L148(c119, r374);
  L595():
    r377 = `+`(r376, 1.0);
    r378 = `!=`(r373, r377);
    c125 = `as.logical`(r378);
    c126 = `||`(c124, c125);
    goto L147(c126);
  L599():
    goto L150();
  L603():
    getOption = ldf getOption;
    check L604() else D164();
  D92():
    deopt 363 [dx60, dy9, y35];
  D109():
    deopt 445 [dx71, r265];
  D164():
    deopt 668 [];
  D179():
    deopt 748 [useRaster5];
  L117(dx77, r269, r270):
    r277 = `*`(r269, r270);
    r278 = `+`(dx77, r277);
    goto L114(r278);
  L121():
    sym52 = ldf floor;
    base52 = ldf floor in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L512() else L513();
  L123(r291):
    st zi = r291;
    l = ld zi;
    c110 = `is.object`(l);
    if c110 then L516() else L517(NA_LGL, l);
  L441():
    y36 = force? y35;
    checkMissing(y36);
    length9 = ldf length in base;
    r225 = dyn length9(y36);
    check L442() else D93();
  L489():
    goto L116(dx71, r265);
  L490():
    zlim15 = ld zlim;
    check L492() else D110();
  L491():
    r268 = dyn base50(<lang `[`(zlim, 1)>);
    goto L117(dx74, r264, r268);
  L506():
    sym51 = ldf floor;
    base51 = ldf floor in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L507() else L508();
  L604():
    r385 = dyn getOption("preferRaster", FALSE);
    check L605() else D165();
  L642():
    useRaster6 = force? useRaster5;
    checkMissing(useRaster6);
    c141 = `as.logical`(useRaster6);
    if c141 then L643() else L167();
  D93():
    deopt 366 [dx60, dy9, r225];
  D110():
    deopt 447 [dx74, r264, zlim15];
  D165():
    deopt 671 [r385];
  L122(r286):
    goto L123(r286);
  L124(r300, dx87):
    st zi = dx87;
    goto L125();
  L167():
    sym76 = ldf `.External.graphics`;
    base76 = ldf `.External.graphics` in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L708() else L709();
  L184():
    sym77 = ldf invisible;
    base77 = ldf invisible in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L716() else L717();
  L442():
    goto L98(dx60, dy9, r225);
  L492():
    zlim16 = force? zlim15;
    checkMissing(zlim16);
    c107 = `is.object`(zlim16);
    if c107 then L493() else L494(dx74, r264, zlim16);
  L507():
    nc = ld nc;
    check L509() else D117();
  L508():
    r285 = dyn base51(<lang `+`(`*`(`(`(`-`(nc, 1.0)), z), 0.5)>);
    goto L122(r285);
  L512():
    nc2 = ld nc;
    check L514() else D119();
  L513():
    r292 = dyn base52(<lang `+`(`*`(`(`(`-`(nc, 1.0E-5)), z), 1.0E-7)>);
    goto L123(r292);
  L516():
    dr40 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L518() else L517(NA_LGL, dr40);
  L517(r298, l2):
    zi = ld zi;
    check L519() else D121();
  L605():
    st useRaster = r385;
    useRaster1 = ld useRaster;
    check L606() else D166();
  L643():
    check_irregular1 = ldf check_irregular;
    check L644() else D180();
  D117():
    deopt 474 [nc];
  D119():
    deopt 484 [nc2];
  D121():
    deopt 497 [r298, l2, NA_LGL, zi];
  D166():
    deopt 673 [useRaster1];
  D180():
    deopt 751 [];
  L118(dx82, r274, dx83):
    abs = ldf abs in base;
    r276 = dyn abs(dx83);
    check L496() else D111();
  L185(r489):
    popenv;
    return r489;
  L493():
    dr36 = tryDispatchBuiltin.1("[", zlim16);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L495() else L494(dx74, r264, dr36);
  L494(dx79, r272, zlim18):
    __13 = ldf `[` in base;
    r275 = dyn __13(zlim18, 1);
    goto L118(dx79, r272, r275);
  L509():
    nc1 = force? nc;
    checkMissing(nc1);
    r287 = `-`(nc1, 1.0);
    z30 = ld z;
    check L510() else D118();
  L514():
    nc3 = force? nc2;
    checkMissing(nc3);
    r293 = `-`(nc3, 1.0E-5);
    z32 = ld z;
    check L515() else D120();
  L518():
    dx86 = getTryDispatchBuiltinValue(dr40);
    goto L124(NA_LGL, dx86);
  L519():
    zi1 = force? zi;
    checkMissing(zi1);
    r301 = `<`(zi1, 0.0);
    zi2 = ld zi;
    check L520() else D122();
  L606():
    useRaster2 = force? useRaster1;
    checkMissing(useRaster2);
    c130 = `as.logical`(useRaster2);
    if c130 then L607() else L153(c130);
  L644():
    p43 = prom<V +>{
      x71 = ld x;
      x72 = force? x71;
      checkMissing(x72);
      return x72;
    };
    p44 = prom<V +>{
      y43 = ld y;
      y44 = force? y43;
      checkMissing(y44);
      return y44;
    };
    r413 = dyn check_irregular1(p43, p44);
    check L645() else D181();
  L708():
    C_image = ld C_image;
    check L710() else D213();
  L709():
    r486 = dyn base76(<sym C_image>, <sym x>, <sym y>, <sym zi>, <sym col>);
    goto L184();
  L716():
    invisible = ldf invisible in base;
    r490 = dyn invisible();
    check L718() else D219();
  L717():
    r488 = dyn base77();
    goto L185(r488);
  D111():
    deopt 453 [dx82, r274, r276];
  D118():
    deopt 477 [r287, z30];
  D120():
    deopt 487 [r293, z32];
  D122():
    deopt 500 [r298, l2, NA_LGL, r301, zi2];
  D181():
    deopt 754 [r413];
  D213():
    deopt 877 [C_image];
  D219():
    deopt 892 [r490];
  L153(c132):
    c136 = `as.logical`(c132);
    if c136 then L611() else L154();
  L495():
    dx81 = getTryDispatchBuiltinValue(dr36);
    goto L118(dx74, r264, dx81);
  L496():
    goto L117(dx82, r274, r276);
  L510():
    z31 = force? z30;
    checkMissing(z31);
    r288 = `*`(r287, z31);
    r289 = `+`(r288, 0.5);
    r290 = floor(r289);
    goto L122(r290);
  L515():
    z33 = force? z32;
    checkMissing(z33);
    r294 = `*`(r293, z33);
    r295 = `+`(r294, 1.0E-7);
    r296 = floor(r295);
    goto L123(r296);
  L520():
    zi3 = force? zi2;
    checkMissing(zi3);
    nc4 = ld nc;
    check L521() else D123();
  L607():
    check_irregular = ldf check_irregular;
    check L608() else D167();
  L645():
    c142 = `as.logical`(r413);
    if c142 then L646() else L168();
  L710():
    C_image1 = force? C_image;
    checkMissing(C_image1);
    x77 = ld x;
    check L711() else D214();
  L718():
    goto L185(r490);
  D123():
    deopt 501 [r298, l2, NA_LGL, r301, zi3, nc4];
  D167():
    deopt 676 [c130];
  D214():
    deopt 879 [x77];
  L154():
    goto L155();
  L155():
    useRaster3 = ld useRaster;
    check L613() else D169();
  L168():
    goto L169();
  L169():
    sym66 = ldf `is.character`;
    base66 = ldf `is.character` in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L650() else L651();
  L521():
    nc5 = force? nc4;
    checkMissing(nc5);
    r302 = `>=`(zi3, nc5);
    r303 = `||`(r301, r302);
    ___ = ldf `[<-` in base;
    r304 = dyn ___(l2, NA_LGL, r303);
    goto L124(r298, r304);
  L608():
    p41 = prom<V +>{
      x69 = ld x;
      x70 = force? x69;
      checkMissing(x70);
      return x70;
    };
    p42 = prom<V +>{
      y41 = ld y;
      y42 = force? y41;
      checkMissing(y42);
      return y42;
    };
    r388 = dyn check_irregular(p41, p42);
    check L609() else D168();
  L611():
    st useRaster = FALSE;
    goto L155();
  L646():
    stop10 = ldf stop;
    check L647() else D182();
  L711():
    x78 = force? x77;
    checkMissing(x78);
    y49 = ld y;
    check L712() else D215();
  D168():
    deopt 679 [c130, r388];
  D169():
    deopt 686 [useRaster3];
  D182():
    deopt 756 [];
  D215():
    deopt 881 [y49];
  L170(r421):
    r422 = `!`(r421);
    c144 = `as.logical`(r422);
    if c144 then L653() else L171();
  L609():
    c133 = `as.logical`(r388);
    c134 = `&&`(c130, c133);
    goto L153(c134);
  L613():
    useRaster4 = force? useRaster3;
    checkMissing(useRaster4);
    c137 = `as.logical`(useRaster4);
    if c137 then L614() else L156();
  L647():
    p46 = prom<V +>{
      gettextf = ldf gettextf;
      p45 = prom<V +>{
        sQuote = ldf sQuote;
        r414 = dyn sQuote("useRaster = TRUE");
        return r414;
      };
      r416 = dyn gettextf("%s can only be used with a regular grid", p45);
      return r416;
    };
    r418 = dyn stop10[, domain](p46, NA_LGL);
    check L648() else D183();
  L650():
    col5 = ld col;
    check L652() else D184();
  L651():
    r420 = dyn base66(<sym col>);
    goto L170(r420);
  L712():
    y50 = force? y49;
    checkMissing(y50);
    zi8 = ld zi;
    check L713() else D216();
  D183():
    deopt 760 [r418];
  D184():
    deopt 764 [col5];
  D216():
    deopt 883 [zi8];
  L156():
    goto L165(NULL);
  L165(r409):
    goto L166();
  L171():
    goto L180();
  L180():
    col17 = ld col;
    check L687() else D201();
  L614():
    st useRaster = FALSE;
    dev_capabilities = ldf `dev.capabilities`;
    check L615() else D170();
  L648():
    goto L169();
  L652():
    col6 = force? col5;
    checkMissing(col6);
    c143 = `is.character`(col6);
    goto L170(c143);
  L653():
    sym67 = ldf `as.integer`;
    base67 = ldf `as.integer` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L654() else L655();
  L713():
    zi9 = force? zi8;
    checkMissing(zi9);
    col21 = ld col;
    check L714() else D217();
  D170():
    deopt 692 [];
  D201():
    deopt 830 [col17];
  D217():
    deopt 885 [col21];
  L172(r424):
    st col = r424;
    sym68 = ldf any;
    base68 = ldf any in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L658() else L659();
  L615():
    r390 = dyn dev_capabilities("rasterImage");
    check L616() else D171();
  L654():
    col7 = ld col;
    check L656() else D185();
  L655():
    r423 = dyn base67(<sym col>);
    goto L172(r423);
  L687():
    col18 = force? col17;
    checkMissing(col18);
    c148 = `is.object`(col18);
    if c148 then L688() else L689(col18);
  L714():
    col22 = force? col21;
    checkMissing(col22);
    _External_graphics = ldf `.External.graphics` in base;
    r487 = dyn _External_graphics(C_image1, x78, y50, zi9, col22);
    check L715() else D218();
  D171():
    deopt 694 [r390];
  D185():
    deopt 770 [col7];
  D218():
    deopt 888 [r487];
  L173(r427):
    c145 = `as.logical`(r427);
    if c145 then L666() else L175();
  L181(dx102):
    st zc = dx102;
    sym71 = ldf dim;
    base71 = ldf dim in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L692() else L693();
  L616():
    c138 = `is.object`(r390);
    if c138 then L618() else L619(r390);
  L656():
    col8 = force? col7;
    checkMissing(col8);
    as_integer = ldf `as.integer` in base;
    r425 = dyn as_integer(col8);
    check L657() else D186();
  L658():
    sym69 = ldf `is.na`;
    base69 = ldf `is.na` in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L660() else L661();
  L659():
    r426 = dyn base68(<lang `&`(`!`(is.na(col)), `<`(col, 0))>);
    goto L173(r426);
  L688():
    dr52 = tryDispatchBuiltin.1("[", col18);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L690() else L689(dr52);
  L689(col20):
    zi6 = ld zi;
    check L691() else D202();
  L715():
    goto L184();
  D186():
    deopt 773 [r425];
  D202():
    deopt 832 [col20, zi6];
  L174(r429):
    r431 = `!`(r429);
    col11 = ld col;
    check L664() else D189();
  L175():
    goto L176();
  L176():
    l3 = ld col;
    c146 = `is.object`(l3);
    if c146 then L670() else L671(NA_INT, l3);
  L182(r454):
    l6 = ld zc;
    dim__ = ldf `dim<-`;
    check L696() else D205();
  L617(dx95):
    st ras = dx95;
    sym62 = ldf identical;
    base62 = ldf identical in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L621() else L622();
  L618():
    dr46 = tryDispatchBuiltin.1("$", r390);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L620() else L619(dr46);
  L619(r392):
    r393 = `$`(r392, <sym rasterImage>);
    goto L617(r393);
  L657():
    goto L172(r425);
  L660():
    col9 = ld col;
    check L662() else D187();
  L661():
    r428 = dyn base69(<sym col>);
    goto L174(r428);
  L666():
    stop11 = ldf stop;
    check L667() else D191();
  L690():
    dx101 = getTryDispatchBuiltinValue(dr52);
    goto L181(dx101);
  L691():
    zi7 = force? zi6;
    checkMissing(zi7);
    r451 = `+`(zi7, 1);
    __19 = ldf `[` in base;
    r452 = dyn __19(col20, r451);
    goto L181(r452);
  L692():
    z40 = ld z;
    check L694() else D203();
  L693():
    r453 = dyn base71(<sym z>);
    goto L182(r453);
  D187():
    deopt 779 [col9];
  D189():
    deopt 783 [r431, col11];
  D191():
    deopt 791 [];
  D203():
    deopt 840 [z40];
  D205():
    deopt 845 [r454, l6, r454];
  L157(r395):
    c139 = `as.logical`(r395);
    if c139 then L625() else L158();
  L177(dx97):
    st col = dx97;
    palette = ldf palette;
    check L674() else D194();
  L620():
    dx94 = getTryDispatchBuiltinValue(dr46);
    goto L617(dx94);
  L621():
    ras = ld ras;
    check L623() else D172();
  L622():
    r394 = dyn base62(<sym ras>, "yes");
    goto L157(r394);
  L662():
    col10 = force? col9;
    checkMissing(col10);
    is_na1 = ldf `is.na` in base;
    r430 = dyn is_na1(col10);
    check L663() else D188();
  L664():
    col12 = force? col11;
    checkMissing(col12);
    r432 = `<`(col12, 0);
    r433 = `&&`(r431, r432);
    any6 = ldf any in base;
    r434 = dyn any6(r433);
    check L665() else D190();
  L667():
    r435 = dyn stop11("integer colors must be non-negative");
    check L668() else D192();
  L670():
    dr48 = tryDispatchBuiltin.0("[<-", l3, NA_INT);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L672() else L671(NA_INT, dr48);
  L671(r438, l5):
    col13 = ld col;
    check L673() else D193();
  L694():
    z41 = force? z40;
    checkMissing(z41);
    dim1 = ldf dim in base;
    r455 = dyn dim1(z41);
    check L695() else D204();
  L696():
    r456 = dyn dim__(l6, NULL, r454);
    check L697() else D206();
  D172():
    deopt 699 [ras];
  D188():
    deopt 782 [r430];
  D190():
    deopt 789 [r434];
  D192():
    deopt 793 [r435];
  D193():
    deopt 799 [r438, l5, NA_INT, col13];
  D194():
    deopt 806 [];
  D204():
    deopt 843 [r455];
  D206():
    deopt 847 [r454, r456];
  L158():
    goto L159();
  L159():
    sym63 = ldf identical;
    base63 = ldf identical in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L627() else L628();
  L623():
    ras1 = force? ras;
    checkMissing(ras1);
    identical = ldf identical in base;
    r396 = dyn identical(ras1, "yes", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L624() else D173();
  L625():
    st useRaster = TRUE;
    goto L159();
  L663():
    goto L174(r430);
  L665():
    goto L173(r434);
  L668():
    goto L176();
  L672():
    dx96 = getTryDispatchBuiltinValue(dr48);
    goto L177(dx96);
  L673():
    col14 = force? col13;
    checkMissing(col14);
    r441 = `<`(col14, 1);
    ___1 = ldf `[<-` in base;
    r442 = dyn ___1(l5, NA_INT, r441);
    goto L177(r442);
  L674():
    r443 = dyn palette();
    check L675() else D195();
  L695():
    goto L182(r455);
  L697():
    st zc = r456;
    t = ldf t;
    check L698() else D207();
  D173():
    deopt 710 [r396];
  D195():
    deopt 807 [r443];
  D207():
    deopt 850 [];
  L160(r399):
    c140 = `as.logical`(r399);
    if c140 then L631() else L161();
  L624():
    goto L157(r396);
  L627():
    ras2 = ld ras;
    check L629() else D174();
  L628():
    r398 = dyn base63(<sym ras>, "non-missing");
    goto L160(r398);
  L675():
    st p = r443;
    p47 = ld p;
    check L676() else D196();
  L698():
    p56 = prom<V +>{
      zc = ld zc;
      zc1 = force? zc;
      checkMissing(zc1);
      return zc1;
    };
    r458 = dyn t(p56);
    check L699() else D208();
  D174():
    deopt 718 [ras2];
  D196():
    deopt 809 [p47];
  D208():
    deopt 852 [r458];
  L161():
    goto L164(NULL);
  L164(r408):
    goto L165(r408);
  L629():
    ras3 = force? ras2;
    checkMissing(ras3);
    identical1 = ldf identical in base;
    r400 = dyn identical1(ras3, "non-missing", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L630() else D175();
  L631():
    sym64 = ldf all;
    base64 = ldf all in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L632() else L633();
  L676():
    p48 = force? p47;
    checkMissing(p48);
    c147 = `is.object`(p48);
    if c147 then L677() else L678(p48);
  L699():
    c149 = `is.object`(r458);
    if c149 then L700() else L701(r458);
  D175():
    deopt 729 [r400];
  L162(r402):
    st useRaster = r402;
    goto L164(r402);
  L178(dx99):
    st col = dx99;
    goto L180();
  L183(dx104):
    st zc = dx104;
    rasterImage = ldf rasterImage;
    check L705() else D211();
  L630():
    goto L160(r400);
  L632():
    sym65 = ldf `is.na`;
    base65 = ldf `is.na` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L634() else L635();
  L633():
    r401 = dyn base64(<lang `!`(is.na(zi))>);
    goto L162(r401);
  L677():
    dr50 = tryDispatchBuiltin.1("[", p48);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L679() else L678(dr50);
  L678(p50):
    col15 = ld col;
    check L680() else D197();
  L700():
    dr54 = tryDispatchBuiltin.1("[", r458);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L702() else L701(dr54);
  L701(r460):
    ncol3 = ldf ncol;
    check L703() else D209();
  D197():
    deopt 812 [p50, col15];
  D209():
    deopt 854 [r460];
  D211():
    deopt 866 [];
  L163(r404):
    r406 = `!`(r404);
    all = ldf all in base;
    r407 = dyn all(r406);
    check L638() else D178();
  L634():
    zi4 = ld zi;
    check L636() else D176();
  L635():
    r403 = dyn base65(<sym zi>);
    goto L163(r403);
  L679():
    dx98 = getTryDispatchBuiltinValue(dr50);
    goto L178(dx98);
  L680():
    col16 = force? col15;
    checkMissing(col16);
    r444 = `-`(col16, 1);
    sym70 = ldf length;
    base70 = ldf length in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L681() else L682();
  L702():
    dx103 = getTryDispatchBuiltinValue(dr54);
    goto L183(dx103);
  L703():
    p57 = prom<V +>{
      zc2 = ld zc;
      zc3 = force? zc2;
      checkMissing(zc3);
      return zc3;
    };
    r462 = dyn ncol3(p57);
    check L704() else D210();
  L705():
    p59 = prom<V +>{
      as_raster = ldf `as.raster`;
      p58 = prom<V +>{
        zc4 = ld zc;
        zc5 = force? zc4;
        checkMissing(zc5);
        return zc5;
      };
      r466 = dyn as_raster(p58);
      return r466;
    };
    p60 = prom<V +>{
      sym72 = ldf min;
      base72 = ldf min in base;
      guard72 = `==`.4(sym72, base72);
      if guard72 then L1() else L2();
    L0(r469):
      return r469;
    L1():
      x73 = ld x;
      x74 = force? x73;
      checkMissing(x74);
      min = ldf min in base;
      r470 = dyn min(x74);
      goto L0(r470);
    L2():
      r468 = dyn base72(<sym x>);
      goto L0(r468);
    };
    p61 = prom<V +>{
      sym73 = ldf min;
      base73 = ldf min in base;
      guard73 = `==`.4(sym73, base73);
      if guard73 then L1() else L2();
    L0(r473):
      return r473;
    L1():
      y45 = ld y;
      y46 = force? y45;
      checkMissing(y46);
      min1 = ldf min in base;
      r474 = dyn min1(y46);
      goto L0(r474);
    L2():
      r472 = dyn base73(<sym y>);
      goto L0(r472);
    };
    p62 = prom<V +>{
      sym74 = ldf max;
      base74 = ldf max in base;
      guard74 = `==`.4(sym74, base74);
      if guard74 then L1() else L2();
    L0(r477):
      return r477;
    L1():
      x75 = ld x;
      x76 = force? x75;
      checkMissing(x76);
      max = ldf max in base;
      r478 = dyn max(x76);
      goto L0(r478);
    L2():
      r476 = dyn base74(<sym x>);
      goto L0(r476);
    };
    p63 = prom<V +>{
      sym75 = ldf max;
      base75 = ldf max in base;
      guard75 = `==`.4(sym75, base75);
      if guard75 then L1() else L2();
    L0(r481):
      return r481;
    L1():
      y47 = ld y;
      y48 = force? y47;
      checkMissing(y48);
      max1 = ldf max in base;
      r482 = dyn max1(y48);
      goto L0(r482);
    L2():
      r480 = dyn base75(<sym y>);
      goto L0(r480);
    };
    r484 = dyn rasterImage[, , , , , interpolate](p59, p60, p61, p62, p63, FALSE);
    check L706() else D212();
  D176():
    deopt 734 [zi4];
  D178():
    deopt 740 [r407];
  D210():
    deopt 856 [r460, r462];
  D212():
    deopt 874 [r484];
  L179(p53, r446):
    __17 = ldf `%%` in base;
    r448 = dyn __17(r444, r446);
    check L685() else D200();
  L636():
    zi5 = force? zi4;
    checkMissing(zi5);
    is_na = ldf `is.na` in base;
    r405 = dyn is_na(zi5);
    check L637() else D177();
  L638():
    goto L162(r407);
  L681():
    p54 = ld p;
    check L683() else D198();
  L682():
    r445 = dyn base70(<sym p>);
    goto L179(p50, r445);
  L704():
    r463 = `:`(r462, 1);
    __20 = ldf `[` in base;
    r464 = dyn __20(r458, r463, <missing>, FALSE);
    goto L183(r464);
  L706():
    goto L184();
  D177():
    deopt 737 [r405];
  D198():
    deopt 818 [p50, p54];
  D200():
    deopt 823 [p53, r448];
  L637():
    goto L163(r405);
  L683():
    p55 = force? p54;
    checkMissing(p55);
    length17 = ldf length in base;
    r447 = dyn length17(p55);
    check L684() else D199();
  L685():
    r449 = `+`(r448, 1);
    __18 = ldf `[` in base;
    r450 = dyn __18(p53, r449);
    goto L178(r450);
  D199():
    deopt 821 [p50, r447];
  L684():
    goto L179(p50, r447);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg diff:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg diff1:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg dx:*, reg dx1:V, reg length:cls, reg r6:V, reg c:L, reg c2:V, reg isTRUE:cls, reg all_equal:cls, reg dx2:*, reg dx3:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg rep:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg r15:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg c11:L, reg r17:V, reg dy:*, reg dy1:V, reg length1:cls, reg r18:V, reg c12:L, reg c15:L, reg c16:V, reg isTRUE1:cls, reg all_equal1:cls, reg dy2:*, reg dy3:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg rep1:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg r27:V, reg c17:L, reg c18:V, reg c21:L, reg c22:V |
    mkenv;
    st x = x;
    st y = y;
    diff = ldf diff;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn diff(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    st dx = r1;
    diff1 = ldf diff;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r3 = dyn diff1(p1);
    check L8() else D3();
  D3():
    deopt 8 [r3];
  L8():
    st dy = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r5):
    c = `as.logical`(r5);
    if c then L13() else L1(c);
  L9():
    dx = ld dx;
    check L11() else D4();
  L10():
    r4 = dyn base(<sym dx>);
    goto L0(r4);
  D4():
    deopt 12 [dx];
  L1(c2):
    c6 = `as.logical`(c2);
    if c6 then L2(c6) else L17();
  L11():
    dx1 = force? dx;
    checkMissing(dx1);
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L12() else D5();
  L13():
    isTRUE = ldf isTRUE;
    check L14() else D6();
  D5():
    deopt 15 [r6];
  D6():
    deopt 17 [c];
  L2(c7):
    popenv;
    return c7;
  L12():
    goto L0(r6);
  L14():
    p4 = prom<V +>{
      all_equal = ldf `all.equal`;
      p2 = prom<V +>{
        dx2 = ld dx;
        dx3 = force? dx2;
        checkMissing(dx3);
        return dx3;
      };
      p3 = prom<V +>{
        sym1 = ldf rep;
        base1 = ldf rep in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        rep = ldf rep in base;
        r10 = dyn rep(<lang `[`(dx, 1.0)>, <lang length(dx)>);
        goto L0(r10);
      L2():
        r8 = dyn base1(<lang `[`(dx, 1.0)>, <lang length(dx)>);
        goto L0(r8);
      };
      r12 = dyn all_equal(p2, p3);
      return r12;
    };
    r14 = dyn isTRUE(p4);
    check L15() else D7();
  L17():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D7():
    deopt 19 [c, r14];
  L3(c11, r17):
    c12 = `as.logical`(r17);
    if c12 then L22() else L4(c11, c12);
  L15():
    r15 = `!`(r14);
    c3 = `as.logical`(r15);
    c4 = `&&`(c, c3);
    goto L1(c4);
  L18():
    dy = ld dy;
    check L20() else D8();
  L19():
    r16 = dyn base2(<sym dy>);
    goto L3(c6, r16);
  D8():
    deopt 24 [c6, dy];
  L4(c15, c16):
    c21 = `as.logical`(c16);
    c22 = `||`(c15, c21);
    goto L2(c22);
  L20():
    dy1 = force? dy;
    checkMissing(dy1);
    length1 = ldf length in base;
    r18 = dyn length1(dy1);
    check L21() else D9();
  L22():
    isTRUE1 = ldf isTRUE;
    check L23() else D10();
  D9():
    deopt 27 [c6, r18];
  D10():
    deopt 29 [c11, c12];
  L21():
    goto L3(c6, r18);
  L23():
    p7 = prom<V +>{
      all_equal1 = ldf `all.equal`;
      p5 = prom<V +>{
        dy2 = ld dy;
        dy3 = force? dy2;
        checkMissing(dy3);
        return dy3;
      };
      p6 = prom<V +>{
        sym3 = ldf rep;
        base3 = ldf rep in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        rep1 = ldf rep in base;
        r22 = dyn rep1(<lang `[`(dy, 1.0)>, <lang length(dy)>);
        goto L0(r22);
      L2():
        r20 = dyn base3(<lang `[`(dy, 1.0)>, <lang length(dy)>);
        goto L0(r20);
      };
      r24 = dyn all_equal1(p5, p6);
      return r24;
    };
    r26 = dyn isTRUE1(p7);
    check L24() else D11();
  D11():
    deopt 31 [c11, c12, r26];
  L24():
    r27 = `!`(r26);
    c17 = `as.logical`(r27);
    c18 = `&&`(c12, c17);
    goto L4(c11, c18);
  }
}