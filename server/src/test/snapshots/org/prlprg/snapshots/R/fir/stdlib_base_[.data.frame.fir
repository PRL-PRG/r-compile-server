fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1821424213;
    st `[.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1821424213(x, i, j, drop) {
  (reg x:*, reg i:*, reg j:*, reg drop:*) -+> V { var x:*, var i:*, var j:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg cols:*, reg cols1:V, reg length:cls, reg r5:V, reg r6:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg missing1:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg nargs:cls, reg r13:V, reg mdrop:*, reg mdrop1:V, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg missing2:cls, reg r18:V, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg _in_:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg sys_call:cls, reg r24:V, reg names:cls, reg r25:V, reg p1:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg c1:cls, reg r29:V, reg p2:p(V +), reg r31:V, reg all:cls, reg r32:V, reg r33:V, reg c2:L, reg c4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg c7:L, reg r35:V, reg x1:*, reg x2:V, reg isS4:cls, reg r36:V, reg r37:V, reg c8:L, reg c9:V, reg c11:L, reg warning:cls, reg r38:V, reg Narg:*, reg Narg1:V, reg r40:V, reg c12:L, reg mdrop2:*, reg mdrop3:V, reg r41:V, reg c13:L, reg warning1:cls, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg missing3:cls, reg r46:V, reg c14:L, reg x3:*, reg x4:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg i1:*, reg i2:V, reg is_matrix:cls, reg r51:V, reg c15:L, reg as_matrix:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r53:V, reg c16:L, reg r55:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg x7:*, reg x8:V, reg names1:cls, reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r62:V, reg r63:V, reg nm:*, reg nm1:V, reg c17:V, reg c18:L, reg character:cls, reg r64:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg r67:V, reg i5:*, reg i6:V, reg c19:L, reg r68:V, reg c20:L, reg c22:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg c25:L, reg r70:V, reg nm2:*, reg nm3:V, reg anyNA:cls, reg r71:V, reg c26:L, reg c27:V, reg c29:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r72:V, reg r73:V, reg x9:*, reg x10:V, reg r74:I, reg l:*, reg names__:cls, reg r75:V, reg l1:*, reg names__1:cls, reg r76:V, reg NextMethod:cls, reg r77:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r78:V, reg r79:V, reg y:*, reg y1:V, reg names2:cls, reg r80:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r81:V, reg r82:V, reg cols2:*, reg cols3:V, reg anyNA1:cls, reg r83:V, reg c30:L, reg stop:cls, reg r84:V, reg nm4:*, reg nm5:V, reg c31:L, reg nm7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg cols4:*, reg cols5:V, reg __1:cls, reg r86:V, reg l2:*, reg names__2:cls, reg r87:V, reg NextMethod1:cls, reg r88:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r89:V, reg r90:V, reg y2:*, reg y3:V, reg names3:cls, reg r91:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r92:V, reg r93:V, reg cols6:*, reg cols7:V, reg c32:V, reg r94:V, reg c33:L, reg c35:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r95:V, reg c38:L, reg r96:V, reg cols8:*, reg cols9:V, reg anyNA2:cls, reg r97:V, reg c39:L, reg c40:V, reg c42:L, reg stop1:cls, reg r98:V, reg anyDuplicated:cls, reg cols10:*, reg cols11:V, reg p4:p(V +), reg r100:V, reg c43:L, reg make_unique:cls, reg cols12:*, reg cols13:V, reg p5:p(V +), reg r102:V, reg l3:*, reg names__3:cls, reg r103:V, reg _row_names_info:cls, reg x11:*, reg x12:V, reg p6:p(V +), reg r106:V, reg l4:*, reg attr__:cls, reg r107:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r108:V, reg r109:V, reg x13:*, reg x14:V, reg oldClass:cls, reg r110:V, reg l5:*, reg attr__1:cls, reg r111:V, reg y4:*, reg y5:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r114:V, reg r115:V, reg missing4:cls, reg r116:V, reg c44:L, reg drop1:*, reg drop2:V, reg c45:L, reg c47:V, reg has_j:*, reg has_j1:V, reg r117:V, reg c48:L, reg c49:V, reg c51:L, reg c53:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r118:V, reg c56:L, reg r119:V, reg x15:*, reg x16:V, reg length1:cls, reg r120:V, reg r121:V, reg c57:L, reg c58:V, reg c60:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r122:V, reg r123:V, reg x17:*, reg x18:V, reg _subset2:cls, reg r124:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r127:V, reg r128:V, reg x19:*, reg x20:V, reg names4:cls, reg r129:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r130:V, reg r131:V, reg nm8:*, reg nm9:V, reg c61:V, reg c62:L, reg character1:cls, reg r132:V, reg has_j2:*, reg has_j3:V, reg c63:L, reg c65:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r134:V, reg c68:L, reg r135:V, reg j1:*, reg j2:V, reg c69:L, reg r136:V, reg c70:L, reg c71:V, reg c73:L, reg c75:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r137:V, reg c78:L, reg r138:V, reg nm10:*, reg nm11:V, reg anyNA3:cls, reg r139:V, reg c79:L, reg c80:V, reg c82:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r140:V, reg r141:V, reg x21:*, reg x22:V, reg r142:I, reg l6:*, reg names__4:cls, reg r143:V, reg l7:*, reg names__5:cls, reg r144:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r145:V, reg r146:V, reg x23:*, reg x24:V, reg j3:*, reg j4:V, reg _subset3:cls, reg r147:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r148:V, reg r149:V, reg y6:*, reg y7:V, reg names5:cls, reg r150:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r151:V, reg r152:V, reg cols14:*, reg cols15:V, reg anyNA4:cls, reg r153:V, reg c83:L, reg stop2:cls, reg r154:V, reg nm12:*, reg nm13:V, reg c84:L, reg nm15:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg cols16:*, reg cols17:V, reg __2:cls, reg r156:V, reg l8:*, reg names__6:cls, reg r157:V, reg has_j4:*, reg has_j5:V, reg c85:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r158:V, reg r159:V, reg x25:*, reg x26:V, reg j5:*, reg j6:V, reg _subset4:cls, reg r160:V, reg r161:V, reg x27:*, reg x28:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r162:V, reg r163:V, reg y8:*, reg y9:V, reg names6:cls, reg r164:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r165:V, reg r166:V, reg cols18:*, reg cols19:V, reg anyNA5:cls, reg r167:V, reg c86:L, reg stop3:cls, reg r168:V, reg drop3:*, reg drop4:V, reg c87:L, reg c89:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r169:V, reg c92:L, reg r170:V, reg y10:*, reg y11:V, reg length2:cls, reg r171:V, reg r172:V, reg c93:L, reg c94:V, reg c96:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r173:V, reg r174:V, reg y12:*, reg y13:V, reg _subset5:cls, reg r175:V, reg anyDuplicated1:cls, reg cols20:*, reg cols21:V, reg p7:p(V +), reg r179:V, reg c97:L, reg make_unique1:cls, reg cols22:*, reg cols23:V, reg p8:p(V +), reg r181:V, reg l9:*, reg names__7:cls, reg r182:V, reg _row_names_info1:cls, reg x29:*, reg x30:V, reg p9:p(V +), reg r185:V, reg drop5:*, reg drop6:V, reg c98:L, reg c100:V, reg mdrop4:*, reg mdrop5:V, reg r186:V, reg c101:L, reg c102:V, reg c104:L, reg c106:V, reg nrow:*, reg nrow1:V, reg r187:V, reg c107:L, reg c108:V, reg c110:L, reg structure:cls, reg y14:*, reg y15:V, reg p10:p(V +), reg r189:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r192:V, reg r193:V, reg x31:*, reg x32:V, reg oldClass1:cls, reg r194:V, reg l10:*, reg attr__2:cls, reg r195:V, reg _row_names_info2:cls, reg x33:*, reg x34:V, reg p11:p(V +), reg r197:V, reg l11:*, reg attr__3:cls, reg r198:V, reg y16:*, reg y17:V, reg x35:*, reg x36:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r200:V, reg r201:V, reg xx:*, reg xx1:V, reg names7:cls, reg r202:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r203:V, reg r204:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r205:V, reg r206:V, reg x37:*, reg x38:V, reg length3:cls, reg r207:V, reg vector:cls, reg r208:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r209:V, reg r210:V, reg xx2:*, reg xx3:V, reg x39:*, reg x40:V, reg copyDFattr:cls, reg r211:V, reg l12:*, reg attr__4:cls, reg r212:V, reg l13:*, reg oldClass__:cls, reg r213:V, reg has_j6:*, reg has_j7:V, reg c111:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r214:V, reg r215:V, reg x41:*, reg x42:V, reg names8:cls, reg r216:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r217:V, reg r218:V, reg nm16:*, reg nm17:V, reg c112:V, reg c113:L, reg character2:cls, reg r219:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r221:V, reg r222:V, reg j7:*, reg j8:V, reg c114:L, reg r223:V, reg c115:L, reg c117:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r224:V, reg c120:L, reg r225:V, reg nm18:*, reg nm19:V, reg anyNA6:cls, reg r226:V, reg c121:L, reg c122:V, reg c124:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r227:V, reg r228:V, reg x43:*, reg x44:V, reg r229:I, reg l14:*, reg names__8:cls, reg r230:V, reg l15:*, reg names__9:cls, reg r231:V, reg x45:*, reg x46:V, reg c125:L, reg x48:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg j9:*, reg j10:V, reg __3:cls, reg r233:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r234:V, reg r235:V, reg x49:*, reg x50:V, reg names9:cls, reg r236:V, reg drop7:*, reg drop8:V, reg c126:L, reg c128:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r237:V, reg c131:L, reg r238:V, reg x51:*, reg x52:V, reg length4:cls, reg r239:V, reg r240:V, reg c132:L, reg c133:V, reg c135:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r241:V, reg r242:V, reg i7:*, reg i8:V, reg c136:L, reg c137:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r243:V, reg r244:V, reg xx4:*, reg xx5:V, reg attr:cls, reg r245:V, reg pmatch:cls, reg i9:*, reg i10:V, reg p12:p(V +), reg rows:*, reg rows1:V, reg p13:p(V +), reg r248:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r250:V, reg r251:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r252:V, reg r253:V, reg xx6:*, reg xx7:V, reg j11:*, reg j12:V, reg _subset6:cls, reg r254:V, reg _subset7:cls, reg r255:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r256:V, reg r257:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r258:V, reg r259:V, reg xj:*, reg xj1:V, reg dim:cls, reg r260:V, reg length5:cls, reg r261:V, reg r262:V, reg c138:L, reg xj2:*, reg xj3:V, reg c139:L, reg xj5:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg i11:*, reg i12:V, reg __4:cls, reg r263:V, reg dx12:V, reg xj6:*, reg xj7:V, reg c140:L, reg xj9:V, reg dr10:V, reg dc5:L, reg dx13:V, reg i13:*, reg i14:V, reg __5:cls, reg r264:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r267:V, reg r268:V, reg cols24:*, reg cols25:V, reg anyNA7:cls, reg r269:V, reg c141:L, reg stop4:cls, reg r270:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r272:V, reg r273:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r274:V, reg r275:V, reg nm20:*, reg nm21:V, reg names10:cls, reg r276:V, reg c142:V, reg r277:V, reg c143:L, reg nm22:*, reg nm23:V, reg c144:L, reg nm25:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg cols26:*, reg cols27:V, reg __6:cls, reg r278:V, reg l16:*, reg names__10:cls, reg r279:V, reg structure1:cls, reg sym59:cls, reg base59:cls, reg guard59:L, reg r280:V, reg r281:V, reg xx8:*, reg xx9:V, reg r282:I, reg p14:p(V +), reg sym60:cls, reg base60:cls, reg guard60:L, reg r284:V, reg r285:V, reg xx10:*, reg xx11:V, reg names11:cls, reg r286:V, reg p15:p(V +), reg r288:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r289:V, reg r290:V, reg nxx:*, reg nxx1:V, reg c145:L, reg nxx3:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg j13:*, reg j14:V, reg __7:cls, reg r291:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r292:V, reg r293:V, reg xx12:*, reg xx13:V, reg r294:I, reg match:cls, reg r295:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r297:V, reg r298:V, reg x53:*, reg x54:V, reg r299:I, reg sym64:cls, reg base64:cls, reg guard64:L, reg r300:V, reg r301:V, reg i15:*, reg i16:V, reg c146:L, reg c147:L, reg sym65:cls, reg base65:cls, reg guard65:L, reg r302:V, reg r303:V, reg xx14:*, reg xx15:V, reg attr1:cls, reg r304:V, reg pmatch1:cls, reg i17:*, reg i18:V, reg p16:p(V +), reg rows2:*, reg rows3:V, reg p17:p(V +), reg r307:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r309:V, reg r310:V, reg x55:*, reg x56:V, reg r311:I, reg s:V, reg l17:I, reg i19:I, reg i20:I, reg i21:I, reg c148:L, reg x57:V, reg xx16:*, reg xx17:V, reg c149:L, reg i25:I, reg xx19:V, reg dr16:V, reg dc8:L, reg dx19:V, reg i27:I, reg dx20:V, reg sxx:*, reg sxx1:V, reg c150:L, reg i29:I, reg xx21:V, reg sxx3:V, reg dr18:V, reg dc9:L, reg dx21:V, reg i31:I, reg xx23:V, reg dx22:V, reg j15:*, reg j16:V, reg __8:cls, reg r312:V, reg __9:cls, reg r313:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r314:V, reg i34:I, reg r315:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r316:V, reg i37:I, reg r317:V, reg xj10:*, reg xj11:V, reg dim1:cls, reg r318:V, reg length6:cls, reg r319:V, reg r320:V, reg c151:L, reg xj12:*, reg xj13:V, reg c152:L, reg i41:I, reg xj15:V, reg dr20:V, reg dc10:L, reg dx23:V, reg i43:I, reg dx24:V, reg i44:*, reg i45:V, reg __10:cls, reg r321:V, reg i46:I, reg dx25:V, reg xj16:*, reg xj17:V, reg c153:L, reg i48:I, reg xj19:V, reg dr22:V, reg dc11:L, reg dx26:V, reg i50:*, reg i51:V, reg __11:cls, reg r322:V, reg l18:*, reg c154:L, reg i53:I, reg dx28:V, reg l20:*, reg dr24:V, reg dc12:L, reg dx30:V, reg i55:I, reg dx32:V, reg j17:*, reg j18:V, reg ____:cls, reg r323:V, reg drop9:*, reg drop10:V, reg c155:L, reg sym69:cls, reg base69:cls, reg guard69:L, reg r324:V, reg r325:V, reg x58:*, reg x59:V, reg length7:cls, reg r326:V, reg n:*, reg n1:V, reg r327:V, reg c156:L, reg x60:*, reg x61:V, reg c157:L, reg x63:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg __12:cls, reg r328:V, reg n2:*, reg n3:V, reg r331:V, reg c158:L, reg x64:*, reg x65:V, reg c159:L, reg x67:V, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg __13:cls, reg r332:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r333:V, reg r334:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r335:V, reg r336:V, reg xj20:*, reg xj21:V, reg dim2:cls, reg r337:V, reg length8:cls, reg r338:V, reg r339:V, reg c160:L, reg sym72:cls, reg base72:cls, reg guard72:L, reg r340:V, reg r341:V, reg xj22:*, reg xj23:V, reg dim3:cls, reg r342:V, reg c161:L, reg r344:V, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg __14:cls, reg r345:V, reg dx39:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r346:V, reg xj24:*, reg xj25:V, reg length9:cls, reg r347:V, reg mdrop6:*, reg mdrop7:V, reg r348:V, reg c162:L, reg c164:V, reg nrow2:*, reg nrow3:V, reg r349:V, reg c165:L, reg c166:V, reg c168:V, reg drop11:*, reg drop12:V, reg r350:V, reg c170:L, reg sym74:cls, reg base74:cls, reg guard74:L, reg r351:V, reg r352:V, reg rows4:*, reg rows5:V, reg c171:V, reg c172:L, reg sym75:cls, reg base75:cls, reg guard75:L, reg r353:V, reg r354:V, reg xx24:*, reg xx25:V, reg attr2:cls, reg r355:V, reg rows6:*, reg rows7:V, reg c173:L, reg rows9:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg i56:*, reg i57:V, reg __15:cls, reg r357:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r358:V, reg r359:V, reg rows10:*, reg rows11:V, reg anyNA8:cls, reg r360:V, reg anyDuplicated2:cls, reg rows12:*, reg rows13:V, reg p18:p(V +), reg r362:V, reg r363:V, reg c174:L, reg dup:*, reg dup1:V, reg r364:V, reg c175:L, reg c177:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r365:V, reg c180:L, reg r366:V, reg rows14:*, reg rows15:V, reg c181:L, reg c182:L, reg c183:V, reg c185:L, reg _in_1:cls, reg rows16:*, reg rows17:V, reg p19:p(V +), reg r368:V, reg ina:*, reg ina1:V, reg c186:L, reg l21:*, reg c187:L, reg r371:S, reg l23:*, reg dr34:V, reg dc17:L, reg dx42:V, reg r373:S, reg dx43:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r378:V, reg r379:S, reg l26:*, reg r380:S, reg r381:V, reg rows18:*, reg rows19:V, reg is_na:cls, reg r382:V, reg ___:cls, reg r383:V, reg dup2:*, reg dup3:V, reg c188:L, reg make_unique2:cls, reg sym79:cls, reg base79:cls, reg guard79:L, reg r385:V, reg r386:V, reg rows20:*, reg rows21:V, reg as_character:cls, reg r387:V, reg p20:p(V +), reg r389:V, reg r390:V, reg has_j8:*, reg has_j9:V, reg c189:L, reg c191:V, reg anyDuplicated3:cls, reg sym80:cls, reg base80:cls, reg guard80:L, reg r392:V, reg r393:V, reg x68:*, reg x69:V, reg names12:cls, reg r394:V, reg p21:p(V +), reg r396:V, reg c192:L, reg c193:V, reg c195:L, reg make_unique3:cls, reg nm26:*, reg nm27:V, reg p22:p(V +), reg r398:V, reg l27:*, reg names__11:cls, reg r399:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r401:V, reg r402:V, reg rows22:*, reg rows23:V, reg c196:V, reg c197:L, reg sym82:cls, reg base82:cls, reg guard82:L, reg r403:V, reg r404:V, reg xx26:*, reg xx27:V, reg attr3:cls, reg r405:V, reg c198:L, reg r407:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg i58:*, reg i59:V, reg __16:cls, reg r408:V, reg rows24:*, reg rows25:V, reg l28:*, reg attr__5:cls, reg r409:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r410:V, reg r411:V, reg xx28:*, reg xx29:V, reg oldClass2:cls, reg r412:V, reg l29:*, reg oldClass__1:cls, reg r413:V, reg x70:*, reg x71:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0() else L1(drop);
  L0():
    p = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r1):
      c = `as.logical`(r1);
      if c then L5() else L1();
    L3():
      missing = ldf missing in base;
      r2 = dyn missing(<sym i>);
      goto L0(r2);
    L4():
      r = dyn base(<sym i>);
      goto L0(r);
    L1():
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L7() else L8();
    L5():
      return TRUE;
    L2(r4):
      r6 = `==`(r4, 1.0);
      return r6;
    L7():
      cols = ld cols;
      cols1 = force? cols;
      checkMissing(cols1);
      length = ldf length in base;
      r5 = dyn length(cols1);
      goto L2(r5);
    L8():
      r3 = dyn base1(<sym cols>);
      goto L2(r3);
    };
    goto L1(p);
  L1(drop_orDefault):
    st drop = drop_orDefault;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L193() else L194();
  L2(r9):
    st mdrop = r9;
    sym3 = ldf nargs;
    base3 = ldf nargs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L195() else L196();
  L193():
    missing1 = ldf missing in base;
    r10 = dyn missing1(<sym drop>);
    goto L2(r10);
  L194():
    r8 = dyn base2(<sym drop>);
    goto L2(r8);
  L3(r12):
    mdrop = ld mdrop;
    check L198() else D1();
  L195():
    nargs = ldf nargs in base;
    r13 = dyn nargs();
    check L197() else D0();
  L196():
    r11 = dyn base3();
    goto L3(r11);
  D0():
    deopt 7 [r13];
  D1():
    deopt 7 [r12, mdrop];
  L197():
    goto L3(r13);
  L198():
    mdrop1 = force? mdrop;
    checkMissing(mdrop1);
    r14 = `!`(mdrop1);
    r15 = `-`(r12, r14);
    st Narg = r15;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L199() else L200();
  L4(r17):
    r19 = `!`(r17);
    st `has.j` = r19;
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L201() else L202();
  L199():
    missing2 = ldf missing in base;
    r18 = dyn missing2(<sym j>);
    goto L4(r18);
  L200():
    r16 = dyn base4(<sym j>);
    goto L4(r16);
  L5(r21):
    r33 = `!`(r21);
    c2 = `as.logical`(r33);
    if c2 then L206() else L6(c2);
  L201():
    _in_ = ldf `%in%`;
    check L203() else D2();
  L202():
    r20 = dyn base5(<lang `%in%`(names(sys.call()), c("", "drop"))>);
    goto L5(r20);
  D2():
    deopt 20 [];
  L6(c4):
    c11 = `as.logical`(c4);
    if c11 then L212() else L8();
  L203():
    p1 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      sys_call = ldf `sys.call`;
      r24 = dyn sys_call();
      names = ldf names in base;
      r25 = dyn names(r24);
      goto L0(r25);
    L2():
      r22 = dyn base6(<lang sys.call()>);
      goto L0(r22);
    };
    p2 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c1 = ldf c in base;
      r29 = dyn c1("", "drop");
      goto L0(r29);
    L2():
      r27 = dyn base7("", "drop");
      goto L0(r27);
    };
    r31 = dyn _in_(p1, p2);
    check L204() else D3();
  L206():
    sym8 = ldf isS4;
    base8 = ldf isS4 in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L207() else L208();
  D3():
    deopt 23 [r31];
  L7(c7, r35):
    r37 = `!`(r35);
    c8 = `as.logical`(r37);
    c9 = `&&`(c7, c8);
    goto L6(c9);
  L8():
    goto L9();
  L9():
    Narg = ld Narg;
    check L216() else D9();
  L204():
    all = ldf all in base;
    r32 = dyn all(r31);
    check L205() else D4();
  L207():
    x1 = ld x;
    check L209() else D5();
  L208():
    r34 = dyn base8(<sym x>);
    goto L7(c2, r34);
  L212():
    warning = ldf warning;
    check L213() else D7();
  D4():
    deopt 25 [r32];
  D5():
    deopt 29 [c2, x1];
  D7():
    deopt 36 [];
  D9():
    deopt 41 [Narg];
  L205():
    goto L5(r32);
  L209():
    x2 = force? x1;
    checkMissing(x2);
    isS4 = ldf isS4 in base;
    r36 = dyn isS4(x2);
    check L210() else D6();
  L213():
    r38 = dyn warning("named arguments other than 'drop' are discouraged");
    check L214() else D8();
  L216():
    Narg1 = force? Narg;
    checkMissing(Narg1);
    r40 = `<`(Narg1, 3);
    c12 = `as.logical`(r40);
    if c12 then L217() else L10();
  D6():
    deopt 32 [c2, r36];
  D8():
    deopt 38 [r38];
  L10():
    sym22 = ldf missing;
    base22 = ldf missing in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L332() else L333();
  L210():
    goto L7(c2, r36);
  L214():
    goto L9();
  L217():
    mdrop2 = ld mdrop;
    check L218() else D10();
  D10():
    deopt 45 [mdrop2];
  L44(r115):
    c44 = `as.logical`(r115);
    if c44 then L334() else L45();
  L218():
    mdrop3 = force? mdrop2;
    checkMissing(mdrop3);
    r41 = `!`(mdrop3);
    c13 = `as.logical`(r41);
    if c13 then L219() else L11();
  L332():
    missing4 = ldf missing in base;
    r116 = dyn missing4(<sym i>);
    goto L44(r116);
  L333():
    r114 = dyn base22(<sym i>);
    goto L44(r114);
  L11():
    goto L12();
  L12():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L223() else L224();
  L45():
    x35 = ld x;
    check L478() else D139();
  L219():
    warning1 = ldf warning;
    check L220() else D11();
  L334():
    drop1 = ld drop;
    check L335() else D68();
  D11():
    deopt 49 [];
  D68():
    deopt 232 [drop1];
  D139():
    deopt 464 [x35];
  L13(r45):
    c14 = `as.logical`(r45);
    if c14 then L225() else L14();
  L220():
    r42 = dyn warning1("'drop' argument will be ignored");
    check L221() else D12();
  L223():
    missing3 = ldf missing in base;
    r46 = dyn missing3(<sym i>);
    goto L13(r46);
  L224():
    r44 = dyn base9(<sym i>);
    goto L13(r44);
  L335():
    drop2 = force? drop1;
    checkMissing(drop2);
    c45 = `as.logical`(drop2);
    if c45 then L336() else L46(c45);
  L478():
    x36 = force? x35;
    checkMissing(x36);
    st xx = x36;
    sym39 = ldf names;
    base39 = ldf names in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L479() else L480();
  D12():
    deopt 51 [r42];
  L14():
    sym10 = ldf `is.matrix`;
    base10 = ldf `is.matrix` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L229() else L230();
  L46(c47):
    c51 = `as.logical`(c47);
    if c51 then L339() else L47(c51);
  L88(r201):
    st cols = r201;
    sym40 = ldf vector;
    base40 = ldf vector in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L483() else L484();
  L221():
    goto L12();
  L225():
    x3 = ld x;
    check L226() else D13();
  L336():
    has_j = ld `has.j`;
    check L337() else D69();
  L479():
    xx = ld xx;
    check L481() else D140();
  L480():
    r200 = dyn base39(<sym xx>);
    goto L88(r200);
  D13():
    deopt 57 [x3];
  D69():
    deopt 234 [c45, has_j];
  D140():
    deopt 469 [xx];
  L16(r50):
    c15 = `as.logical`(r50);
    if c15 then L233() else L17();
  L47(c53):
    c60 = `as.logical`(c53);
    if c60 then L345() else L49();
  L89(r204):
    st x = r204;
    sym42 = ldf `.Internal`;
    base42 = ldf `.Internal` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L490() else L491();
  L226():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L229():
    i1 = ld i;
    check L231() else D14();
  L230():
    r49 = dyn base10(<sym i>);
    goto L16(r49);
  L337():
    has_j1 = force? has_j;
    checkMissing(has_j1);
    r117 = `!`(has_j1);
    c48 = `as.logical`(r117);
    c49 = `&&`(c45, c48);
    goto L46(c49);
  L339():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L340() else L341();
  L481():
    xx1 = force? xx;
    checkMissing(xx1);
    names7 = ldf names in base;
    r202 = dyn names7(xx1);
    check L482() else D141();
  L483():
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L485() else L486();
  L484():
    r203 = dyn base40("list", <lang length(x)>);
    goto L89(r203);
  D14():
    deopt 64 [i1];
  D141():
    deopt 472 [r202];
  L17():
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L242() else L243();
  L48(c56, r119):
    r121 = `==`(r119, 1);
    c57 = `as.logical`(r121);
    c58 = `&&`(c56, c57);
    goto L47(c58);
  L49():
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L352() else L353();
  L90(r206):
    vector = ldf vector in base;
    r208 = dyn vector("list", r206);
    check L489() else D144();
  L91(r210):
    st x = r210;
    l12 = ld x;
    attr__4 = ldf `attr<-`;
    check L495() else D148();
  L231():
    i2 = force? i1;
    checkMissing(i2);
    is_matrix = ldf `is.matrix` in base;
    r51 = dyn is_matrix(i2);
    check L232() else D15();
  L233():
    as_matrix = ldf `as.matrix`;
    check L234() else D16();
  L340():
    x15 = ld x;
    check L342() else D70();
  L341():
    r118 = dyn base23(<sym x>);
    goto L48(c51, r118);
  L345():
    sym24 = ldf `.subset2`;
    base24 = ldf `.subset2` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L346() else L347();
  L482():
    goto L88(r202);
  L485():
    x37 = ld x;
    check L487() else D142();
  L486():
    r205 = dyn base41(<sym x>);
    goto L90(r205);
  L490():
    xx2 = ld xx;
    check L492() else D145();
  L491():
    r209 = dyn base42(<lang copyDFattr(xx, x)>);
    goto L91(r209);
  D15():
    deopt 67 [r51];
  D16():
    deopt 69 [];
  D70():
    deopt 240 [c51, x15];
  D142():
    deopt 479 [x37];
  D144():
    deopt 484 [r208];
  D145():
    deopt 488 [xx2];
  D148():
    deopt 498 [NULL, l12, NULL];
  L20(r60):
    st nm = r60;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L246() else L247();
  L50(r123):
    popenv;
    return r123;
  L52(r128):
    st nm = r128;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L356() else L357();
  L232():
    goto L16(r51);
  L234():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r53 = dyn as_matrix(p3);
    check L235() else D17();
  L242():
    x7 = ld x;
    check L244() else D19();
  L243():
    r59 = dyn base11(<sym x>);
    goto L20(r59);
  L342():
    x16 = force? x15;
    checkMissing(x16);
    length1 = ldf length in base;
    r120 = dyn length1(x16);
    check L343() else D71();
  L346():
    x17 = ld x;
    check L348() else D72();
  L347():
    r122 = dyn base24(<sym x>, 1);
    goto L50(r122);
  L352():
    x19 = ld x;
    check L354() else D74();
  L353():
    r127 = dyn base25(<sym x>);
    goto L52(r127);
  L487():
    x38 = force? x37;
    checkMissing(x38);
    length3 = ldf length in base;
    r207 = dyn length3(x38);
    check L488() else D143();
  L489():
    goto L89(r208);
  L492():
    xx3 = force? xx2;
    checkMissing(xx3);
    x39 = ld x;
    check L493() else D146();
  L495():
    r212 = dyn attr__4(l12, NULL, "row.names", NULL);
    check L496() else D149();
  D17():
    deopt 71 [r53];
  D19():
    deopt 80 [x7];
  D71():
    deopt 243 [c51, r120];
  D72():
    deopt 249 [x17];
  D74():
    deopt 259 [x19];
  D143():
    deopt 482 [r207];
  D146():
    deopt 490 [x39];
  D149():
    deopt 501 [NULL, r212];
  L21(r63):
    c18 = `as.logical`(r63);
    if c18 then L249() else L22();
  L53(r131):
    c62 = `as.logical`(r131);
    if c62 then L359() else L54();
  L235():
    c16 = `is.object`(r53);
    if c16 then L236() else L237(r53);
  L244():
    x8 = force? x7;
    checkMissing(x8);
    names1 = ldf names in base;
    r61 = dyn names1(x8);
    check L245() else D20();
  L246():
    nm = ld nm;
    check L248() else D21();
  L247():
    r62 = dyn base12(<sym nm>);
    goto L21(r62);
  L343():
    goto L48(c51, r120);
  L348():
    x18 = force? x17;
    checkMissing(x18);
    _subset2 = ldf `.subset2` in base;
    r124 = dyn _subset2(x18, 1);
    check L349() else D73();
  L354():
    x20 = force? x19;
    checkMissing(x20);
    names4 = ldf names in base;
    r129 = dyn names4(x20);
    check L355() else D75();
  L356():
    nm8 = ld nm;
    check L358() else D76();
  L357():
    r130 = dyn base26(<sym nm>);
    goto L53(r130);
  L488():
    goto L90(r207);
  L493():
    x40 = force? x39;
    checkMissing(x40);
    copyDFattr = ldf copyDFattr in base;
    r211 = dyn copyDFattr(xx3, x40);
    check L494() else D147();
  L496():
    st x = r212;
    l13 = ld x;
    oldClass__ = ldf `oldClass<-`;
    check L497() else D150();
  D20():
    deopt 83 [r61];
  D21():
    deopt 86 [nm];
  D73():
    deopt 253 [r124];
  D75():
    deopt 262 [r129];
  D76():
    deopt 265 [nm8];
  D147():
    deopt 493 [r211];
  D150():
    deopt 504 [NULL, l13, NULL];
  L18(dx1):
    popenv;
    return dx1;
  L22():
    goto L23();
  L23():
    sym13 = ldf `is.character`;
    base13 = ldf `is.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L253() else L254();
  L54():
    goto L55();
  L55():
    has_j2 = ld `has.j`;
    check L363() else D79();
  L236():
    dr = tryDispatchBuiltin.1("[", r53);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L238() else L237(dr);
  L237(r55):
    i3 = ld i;
    check L239() else D18();
  L245():
    goto L20(r61);
  L248():
    nm1 = force? nm;
    checkMissing(nm1);
    c17 = `==`(nm1, NULL);
    goto L21(c17);
  L249():
    character = ldf character;
    check L250() else D22();
  L349():
    goto L50(r124);
  L355():
    goto L52(r129);
  L358():
    nm9 = force? nm8;
    checkMissing(nm9);
    c61 = `==`(nm9, NULL);
    goto L53(c61);
  L359():
    character1 = ldf character;
    check L360() else D77();
  L494():
    goto L91(r211);
  L497():
    r213 = dyn oldClass__(l13, NULL, NULL);
    check L498() else D151();
  D18():
    deopt 72 [r55, i3];
  D22():
    deopt 90 [];
  D77():
    deopt 269 [];
  D79():
    deopt 274 [has_j2];
  D151():
    deopt 506 [NULL, r213];
  L24(r67):
    r68 = `!`(r67);
    c20 = `as.logical`(r68);
    if c20 then L256() else L25(c20);
  L238():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L239():
    i4 = force? i3;
    __ = ldf `[` in base;
    r56 = dyn __(r55, i4);
    goto L18(r56);
  L250():
    r64 = dyn character();
    check L251() else D23();
  L253():
    i5 = ld i;
    check L255() else D24();
  L254():
    r66 = dyn base13(<sym i>);
    goto L24(r66);
  L360():
    r132 = dyn character1();
    check L361() else D78();
  L363():
    has_j3 = force? has_j2;
    checkMissing(has_j3);
    c63 = `as.logical`(has_j3);
    if c63 then L364() else L56(c63);
  L498():
    st x = r213;
    has_j6 = ld `has.j`;
    check L499() else D152();
  D23():
    deopt 91 [r64];
  D24():
    deopt 96 [i5];
  D78():
    deopt 270 [r132];
  D152():
    deopt 508 [has_j6];
  L25(c22):
    c29 = `as.logical`(c22);
    if c29 then L262() else L27();
  L56(c65):
    c73 = `as.logical`(c65);
    if c73 then L369() else L58(c73);
  L251():
    st nm = r64;
    goto L23();
  L255():
    i6 = force? i5;
    checkMissing(i6);
    c19 = `is.character`(i6);
    goto L24(c19);
  L256():
    sym14 = ldf anyNA;
    base14 = ldf anyNA in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L257() else L258();
  L361():
    st nm = r132;
    goto L55();
  L364():
    sym27 = ldf `is.character`;
    base27 = ldf `is.character` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L365() else L366();
  L499():
    has_j7 = force? has_j6;
    checkMissing(has_j7);
    c111 = `as.logical`(has_j7);
    if c111 then L500() else L92();
  L26(c25, r70):
    c26 = `as.logical`(r70);
    c27 = `&&`(c25, c26);
    goto L25(c27);
  L27():
    NextMethod1 = ldf NextMethod;
    check L292() else D44();
  L34():
    anyDuplicated = ldf anyDuplicated;
    check L311() else D53();
  L57(c68, r135):
    r136 = `!`(r135);
    c70 = `as.logical`(r136);
    c71 = `&&`(c68, c70);
    goto L56(c71);
  L58(c75):
    c82 = `as.logical`(c75);
    if c82 then L375() else L60();
  L92():
    sym63 = ldf seq_along;
    base63 = ldf seq_along in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L624() else L625();
  L131():
    st rows = NULL;
    sym64 = ldf `is.character`;
    base64 = ldf `is.character` in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L627() else L628();
  L257():
    nm2 = ld nm;
    check L259() else D25();
  L258():
    r69 = dyn base14(<sym nm>);
    goto L26(c20, r69);
  L262():
    sym15 = ldf seq_along;
    base15 = ldf seq_along in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L263() else L264();
  L365():
    j1 = ld j;
    check L367() else D80();
  L366():
    r134 = dyn base27(<sym j>);
    goto L57(c63, r134);
  L369():
    sym28 = ldf anyNA;
    base28 = ldf anyNA in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L370() else L371();
  L500():
    sym43 = ldf names;
    base43 = ldf names in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L501() else L502();
  D25():
    deopt 102 [c20, nm2];
  D44():
    deopt 157 [];
  D53():
    deopt 187 [];
  D80():
    deopt 277 [c63, j1];
  L28(r73):
    l = ld x;
    names__ = ldf `names<-`;
    check L266() else D28();
  L59(c78, r138):
    c79 = `as.logical`(r138);
    c80 = `&&`(c78, c79);
    goto L58(c80);
  L60():
    has_j4 = ld `has.j`;
    check L408() else D101();
  L68():
    drop3 = ld drop;
    check L429() else D112();
  L93(r215):
    st nm = r215;
    sym44 = ldf `is.null`;
    base44 = ldf `is.null` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L505() else L506();
  L132(r298):
    st sxx = r298;
    goto L131();
  L133(r301):
    c147 = `as.logical`(r301);
    if c147 then L630() else L134();
  L259():
    nm3 = force? nm2;
    checkMissing(nm3);
    anyNA = ldf anyNA in base;
    r71 = dyn anyNA(nm3);
    check L260() else D26();
  L263():
    x9 = ld x;
    check L265() else D27();
  L264():
    r72 = dyn base15(<sym x>);
    goto L28(r72);
  L292():
    r88 = dyn NextMethod1("[");
    check L293() else D45();
  L311():
    p4 = prom<V +>{
      cols10 = ld cols;
      cols11 = force? cols10;
      checkMissing(cols11);
      return cols11;
    };
    r100 = dyn anyDuplicated(p4);
    check L312() else D54();
  L367():
    j2 = force? j1;
    checkMissing(j2);
    c69 = `is.character`(j2);
    goto L57(c63, c69);
  L370():
    nm10 = ld nm;
    check L372() else D81();
  L371():
    r137 = dyn base28(<sym nm>);
    goto L59(c73, r137);
  L375():
    sym29 = ldf seq_along;
    base29 = ldf seq_along in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L376() else L377();
  L501():
    x41 = ld x;
    check L503() else D153();
  L502():
    r214 = dyn base43(<sym x>);
    goto L93(r214);
  L624():
    x53 = ld x;
    check L626() else D205();
  L625():
    r297 = dyn base63(<sym x>);
    goto L132(r297);
  L627():
    i15 = ld i;
    check L629() else D206();
  L628():
    r300 = dyn base64(<sym i>);
    goto L133(r300);
  D26():
    deopt 105 [c20, r71];
  D27():
    deopt 108 [x9];
  D28():
    deopt 112 [r73, l, r73];
  D45():
    deopt 159 [r88];
  D54():
    deopt 189 [r100];
  D81():
    deopt 284 [c73, nm10];
  D101():
    deopt 342 [has_j4];
  D112():
    deopt 374 [drop3];
  D153():
    deopt 512 [x41];
  D205():
    deopt 702 [x53];
  D206():
    deopt 710 [i15];
  L61(r141):
    l6 = ld x;
    names__4 = ldf `names<-`;
    check L379() else D84();
  L94(r218):
    c113 = `as.logical`(r218);
    if c113 then L508() else L95();
  L134():
    goto L136();
  L136():
    sym66 = ldf seq_along;
    base66 = ldf seq_along in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L638() else L639();
  L260():
    goto L26(c20, r71);
  L265():
    x10 = force? x9;
    checkMissing(x10);
    r74 = seq_along(x10);
    goto L28(r74);
  L266():
    r75 = dyn names__(l, NULL, r73);
    check L267() else D29();
  L293():
    st y = r88;
    sym18 = ldf names;
    base18 = ldf names in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L294() else L295();
  L312():
    c43 = `as.logical`(r100);
    if c43 then L313() else L40();
  L372():
    nm11 = force? nm10;
    checkMissing(nm11);
    anyNA3 = ldf anyNA in base;
    r139 = dyn anyNA3(nm11);
    check L373() else D82();
  L376():
    x21 = ld x;
    check L378() else D83();
  L377():
    r140 = dyn base29(<sym x>);
    goto L61(r140);
  L408():
    has_j5 = force? has_j4;
    checkMissing(has_j5);
    c85 = `as.logical`(has_j5);
    if c85 then L409() else L69();
  L429():
    drop4 = force? drop3;
    checkMissing(drop4);
    c87 = `as.logical`(drop4);
    if c87 then L430() else L75(c87);
  L503():
    x42 = force? x41;
    checkMissing(x42);
    names8 = ldf names in base;
    r216 = dyn names8(x42);
    check L504() else D154();
  L505():
    nm16 = ld nm;
    check L507() else D155();
  L506():
    r217 = dyn base44(<sym nm>);
    goto L94(r217);
  L626():
    x54 = force? x53;
    checkMissing(x54);
    r299 = seq_along(x54);
    goto L132(r299);
  L629():
    i16 = force? i15;
    checkMissing(i16);
    c146 = `is.character`(i16);
    goto L133(c146);
  L630():
    sym65 = ldf attr;
    base65 = ldf attr in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L631() else L632();
  D29():
    deopt 114 [r73, r75];
  D82():
    deopt 287 [c73, r139];
  D83():
    deopt 290 [x21];
  D84():
    deopt 294 [r141, l6, r141];
  D154():
    deopt 515 [r216];
  D155():
    deopt 518 [nm16];
  L35(r90):
    st cols = r90;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L298() else L299();
  L40():
    goto L41();
  L41():
    _row_names_info = ldf `.row_names_info`;
    check L319() else D59();
  L69():
    x27 = ld x;
    check L416() else D105();
  L71(r161):
    st y = r161;
    sym34 = ldf names;
    base34 = ldf names in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L417() else L418();
  L75(c89):
    c96 = `as.logical`(c89);
    if c96 then L436() else L77();
  L95():
    goto L96();
  L96():
    sym45 = ldf `is.character`;
    base45 = ldf `is.character` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L512() else L513();
  L135(r303):
    st rows = r303;
    pmatch1 = ldf pmatch;
    check L635() else D209();
  L137(r310):
    s = toForSeq(r310);
    l17 = length(s);
    i19 = 0;
    goto L138(i19);
  L267():
    st x = r75;
    l1 = ld nm;
    names__1 = ldf `names<-`;
    check L268() else D30();
  L294():
    y2 = ld y;
    check L296() else D46();
  L295():
    r89 = dyn base18(<sym y>);
    goto L35(r89);
  L313():
    make_unique = ldf `make.unique`;
    check L314() else D55();
  L373():
    goto L59(c73, r139);
  L378():
    x22 = force? x21;
    checkMissing(x22);
    r142 = seq_along(x22);
    goto L61(r142);
  L379():
    r143 = dyn names__4(l6, NULL, r141);
    check L380() else D85();
  L409():
    sym33 = ldf `.subset`;
    base33 = ldf `.subset` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L410() else L411();
  L430():
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L431() else L432();
  L504():
    goto L93(r216);
  L507():
    nm17 = force? nm16;
    checkMissing(nm17);
    c112 = `==`(nm17, NULL);
    goto L94(c112);
  L508():
    character2 = ldf character;
    check L509() else D156();
  L631():
    xx14 = ld xx;
    check L633() else D207();
  L632():
    r302 = dyn base65(<sym xx>, "row.names");
    goto L135(r302);
  L638():
    x55 = ld x;
    check L640() else D211();
  L639():
    r309 = dyn base66(<sym x>);
    goto L137(r309);
  D30():
    deopt 117 [r73, l1, r73];
  D46():
    deopt 163 [y2];
  D55():
    deopt 191 [];
  D59():
    deopt 202 [];
  D85():
    deopt 296 [r141, r143];
  D105():
    deopt 352 [x27];
  D156():
    deopt 522 [];
  D207():
    deopt 715 [xx14];
  D209():
    deopt 722 [];
  D211():
    deopt 732 [x55];
  L36(r93):
    r94 = `!`(r93);
    c33 = `as.logical`(r94);
    if c33 then L301() else L37(c33);
  L70(r159):
    goto L71(r159);
  L72(r163):
    st cols = r163;
    sym35 = ldf anyNA;
    base35 = ldf anyNA in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L421() else L422();
  L76(c92, r170):
    r172 = `==`(r170, 1);
    c93 = `as.logical`(r172);
    c94 = `&&`(c92, c93);
    goto L75(c94);
  L77():
    anyDuplicated1 = ldf anyDuplicated;
    check L443() else D117();
  L97(r222):
    r223 = `!`(r222);
    c115 = `as.logical`(r223);
    if c115 then L515() else L98(c115);
  L138(i20):
    i21 = `+`.1(i20, 1);
    c148 = `<`.1(l17, i21);
    if c148 then L641() else L147();
  L268():
    r76 = dyn names__1(l1, NULL, r73);
    check L269() else D31();
  L296():
    y3 = force? y2;
    checkMissing(y3);
    names3 = ldf names in base;
    r91 = dyn names3(y3);
    check L297() else D47();
  L298():
    cols6 = ld cols;
    check L300() else D48();
  L299():
    r92 = dyn base19(<sym cols>);
    goto L36(r92);
  L314():
    p5 = prom<V +>{
      cols12 = ld cols;
      cols13 = force? cols12;
      checkMissing(cols13);
      return cols13;
    };
    r102 = dyn make_unique(p5);
    check L315() else D56();
  L319():
    p6 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r106 = dyn _row_names_info(p6, 0);
    check L320() else D60();
  L380():
    st x = r143;
    l7 = ld nm;
    names__5 = ldf `names<-`;
    check L381() else D86();
  L410():
    x25 = ld x;
    check L412() else D102();
  L411():
    r158 = dyn base33(<sym x>, <sym j>);
    goto L70(r158);
  L416():
    x28 = force? x27;
    checkMissing(x28);
    goto L71(x28);
  L417():
    y8 = ld y;
    check L419() else D106();
  L418():
    r162 = dyn base34(<sym y>);
    goto L72(r162);
  L431():
    y10 = ld y;
    check L433() else D113();
  L432():
    r169 = dyn base36(<sym y>);
    goto L76(c87, r169);
  L436():
    sym37 = ldf `.subset2`;
    base37 = ldf `.subset2` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L437() else L438();
  L509():
    r219 = dyn character2();
    check L510() else D157();
  L512():
    j7 = ld j;
    check L514() else D158();
  L513():
    r221 = dyn base45(<sym j>);
    goto L97(r221);
  L633():
    xx15 = force? xx14;
    checkMissing(xx15);
    attr1 = ldf attr in base;
    r304 = dyn attr1(xx15, "row.names");
    check L634() else D208();
  L635():
    p16 = prom<V +>{
      i17 = ld i;
      i18 = force? i17;
      checkMissing(i18);
      return i18;
    };
    p17 = prom<V +>{
      rows2 = ld rows;
      rows3 = force? rows2;
      checkMissing(rows3);
      return rows3;
    };
    r307 = dyn pmatch1[, , `duplicates.ok`](p16, p17, TRUE);
    check L636() else D210();
  L640():
    x56 = force? x55;
    checkMissing(x56);
    r311 = seq_along(x56);
    goto L137(r311);
  D31():
    deopt 119 [r73, r76];
  D47():
    deopt 166 [r91];
  D48():
    deopt 169 [cols6];
  D56():
    deopt 193 [r102];
  D60():
    deopt 205 [r106];
  D86():
    deopt 299 [r141, l7, r141];
  D102():
    deopt 346 [x25];
  D106():
    deopt 357 [y8];
  D113():
    deopt 378 [c87, y10];
  D117():
    deopt 396 [];
  D157():
    deopt 523 [r219];
  D158():
    deopt 528 [j7];
  D208():
    deopt 719 [r304];
  D210():
    deopt 727 [r307];
  L37(c35):
    c42 = `as.logical`(c35);
    if c42 then L307() else L39();
  L73(r166):
    c86 = `as.logical`(r166);
    if c86 then L425() else L74();
  L78(r174):
    popenv;
    return r174;
  L98(c117):
    c124 = `as.logical`(c117);
    if c124 then L521() else L100();
  L147():
    x57 = `[[`(s, i21, NULL, TRUE);
    st j = x57;
    xx16 = ld xx;
    check L642() else D212();
  L269():
    st nm = r76;
    NextMethod = ldf NextMethod;
    check L270() else D32();
  L297():
    goto L35(r91);
  L300():
    cols7 = force? cols6;
    checkMissing(cols7);
    c32 = `==`(cols7, NULL);
    goto L36(c32);
  L301():
    sym20 = ldf anyNA;
    base20 = ldf anyNA in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L302() else L303();
  L315():
    l3 = ld y;
    names__3 = ldf `names<-`;
    check L316() else D57();
  L320():
    l4 = ld y;
    attr__ = ldf `attr<-`;
    check L321() else D61();
  L381():
    r144 = dyn names__5(l7, NULL, r141);
    check L382() else D87();
  L412():
    x26 = force? x25;
    checkMissing(x26);
    j5 = ld j;
    check L413() else D103();
  L419():
    y9 = force? y8;
    checkMissing(y9);
    names6 = ldf names in base;
    r164 = dyn names6(y9);
    check L420() else D107();
  L421():
    cols18 = ld cols;
    check L423() else D108();
  L422():
    r165 = dyn base35(<sym cols>);
    goto L73(r165);
  L433():
    y11 = force? y10;
    checkMissing(y11);
    length2 = ldf length in base;
    r171 = dyn length2(y11);
    check L434() else D114();
  L437():
    y12 = ld y;
    check L439() else D115();
  L438():
    r173 = dyn base37(<sym y>, 1);
    goto L78(r173);
  L443():
    p7 = prom<V +>{
      cols20 = ld cols;
      cols21 = force? cols20;
      checkMissing(cols21);
      return cols21;
    };
    r179 = dyn anyDuplicated1(p7);
    check L444() else D118();
  L510():
    st nm = r219;
    goto L96();
  L514():
    j8 = force? j7;
    checkMissing(j8);
    c114 = `is.character`(j8);
    goto L97(c114);
  L515():
    sym46 = ldf anyNA;
    base46 = ldf anyNA in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L516() else L517();
  L634():
    goto L135(r304);
  L636():
    st i = r307;
    goto L136();
  L641():
    drop9 = ld drop;
    check L674() else D223();
  D32():
    deopt 122 [];
  D57():
    deopt 195 [r102, l3, r102];
  D61():
    deopt 207 [r106, l4, r106];
  D87():
    deopt 301 [r141, r144];
  D103():
    deopt 348 [j5];
  D107():
    deopt 360 [r164];
  D108():
    deopt 364 [cols18];
  D114():
    deopt 381 [c87, r171];
  D115():
    deopt 387 [y12];
  D118():
    deopt 398 [r179];
  D212():
    deopt 735 [i21, xx16];
  D223():
    deopt 778 [drop9];
  L38(c38, r96):
    c39 = `as.logical`(r96);
    c40 = `&&`(c38, c39);
    goto L37(c40);
  L39():
    goto L34();
  L74():
    goto L68();
  L99(c120, r225):
    c121 = `as.logical`(r225);
    c122 = `&&`(c120, c121);
    goto L98(c122);
  L100():
    goto L102();
  L102():
    x45 = ld x;
    check L530() else D166();
  L270():
    r77 = dyn NextMethod("[");
    check L271() else D33();
  L302():
    cols8 = ld cols;
    check L304() else D49();
  L303():
    r95 = dyn base20(<sym cols>);
    goto L38(c33, r95);
  L307():
    stop1 = ldf stop;
    check L308() else D51();
  L316():
    r103 = dyn names__3(l3, NULL, r102);
    check L317() else D58();
  L321():
    r107 = dyn attr__(l4, NULL, "row.names", r106);
    check L322() else D62();
  L382():
    st nm = r144;
    sym30 = ldf `.subset`;
    base30 = ldf `.subset` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L383() else L384();
  L413():
    j6 = force? j5;
    checkMissing(j6);
    _subset4 = ldf `.subset` in base;
    r160 = dyn _subset4(x26, j6);
    check L414() else D104();
  L420():
    goto L72(r164);
  L423():
    cols19 = force? cols18;
    checkMissing(cols19);
    anyNA5 = ldf anyNA in base;
    r167 = dyn anyNA5(cols19);
    check L424() else D109();
  L425():
    stop3 = ldf stop;
    check L426() else D110();
  L434():
    goto L76(c87, r171);
  L439():
    y13 = force? y12;
    checkMissing(y13);
    _subset5 = ldf `.subset2` in base;
    r175 = dyn _subset5(y13, 1);
    check L440() else D116();
  L444():
    c97 = `as.logical`(r179);
    if c97 then L445() else L80();
  L516():
    nm18 = ld nm;
    check L518() else D159();
  L517():
    r224 = dyn base46(<sym nm>);
    goto L99(c115, r224);
  L521():
    sym47 = ldf seq_along;
    base47 = ldf seq_along in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L522() else L523();
  L642():
    xx17 = force? xx16;
    checkMissing(xx17);
    c149 = `is.object`(xx17);
    if c149 then L643() else L644(i21, xx17);
  L674():
    drop10 = force? drop9;
    checkMissing(drop10);
    c155 = `as.logical`(drop10);
    if c155 then L675() else L148();
  D33():
    deopt 124 [r77];
  D49():
    deopt 175 [c33, cols8];
  D51():
    deopt 181 [];
  D58():
    deopt 197 [r102, r103];
  D62():
    deopt 210 [r106, r107];
  D104():
    deopt 351 [r160];
  D109():
    deopt 367 [r167];
  D110():
    deopt 369 [];
  D116():
    deopt 391 [r175];
  D159():
    deopt 534 [c115, nm18];
  D166():
    deopt 555 [x45];
  L62(r146):
    st y = r146;
    sym31 = ldf names;
    base31 = ldf names in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L388() else L389();
  L80():
    goto L81();
  L81():
    _row_names_info1 = ldf `.row_names_info`;
    check L451() else D123();
  L101(r228):
    l14 = ld x;
    names__8 = ldf `names<-`;
    check L525() else D162();
  L139(i27, dx20):
    st xj = dx20;
    sym67 = ldf length;
    base67 = ldf length in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L651() else L652();
  L148():
    goto L163();
  L163():
    drop11 = ld drop;
    check L720() else D239();
  L271():
    st y = r77;
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L272() else L273();
  L304():
    cols9 = force? cols8;
    checkMissing(cols9);
    anyNA2 = ldf anyNA in base;
    r97 = dyn anyNA2(cols9);
    check L305() else D50();
  L308():
    r98 = dyn stop1("undefined columns selected");
    check L309() else D52();
  L317():
    st y = r103;
    goto L41();
  L322():
    st y = r107;
    sym21 = ldf oldClass;
    base21 = ldf oldClass in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L323() else L324();
  L383():
    x23 = ld x;
    check L385() else D88();
  L384():
    r145 = dyn base30(<sym x>, <sym j>);
    goto L62(r145);
  L414():
    goto L70(r160);
  L424():
    goto L73(r167);
  L426():
    r168 = dyn stop3("undefined columns selected");
    check L427() else D111();
  L440():
    goto L78(r175);
  L445():
    make_unique1 = ldf `make.unique`;
    check L446() else D119();
  L518():
    nm19 = force? nm18;
    checkMissing(nm19);
    anyNA6 = ldf anyNA in base;
    r226 = dyn anyNA6(nm19);
    check L519() else D160();
  L522():
    x43 = ld x;
    check L524() else D161();
  L523():
    r227 = dyn base47(<sym x>);
    goto L101(r227);
  L530():
    x46 = force? x45;
    checkMissing(x46);
    c125 = `is.object`(x46);
    if c125 then L531() else L532(x46);
  L643():
    dr16 = tryDispatchBuiltin.1("[[", xx17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L645() else L644(i21, dr16);
  L644(i25, xx19):
    sxx = ld sxx;
    check L646() else D213();
  L675():
    sym69 = ldf length;
    base69 = ldf length in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L676() else L677();
  D50():
    deopt 178 [c33, r97];
  D52():
    deopt 183 [r98];
  D88():
    deopt 305 [x23];
  D111():
    deopt 371 [r168];
  D119():
    deopt 400 [];
  D123():
    deopt 411 [];
  D160():
    deopt 537 [c115, r226];
  D161():
    deopt 540 [x43];
  D162():
    deopt 544 [r228, l14, r228];
  D213():
    deopt 737 [i25, xx19, sxx];
  D239():
    deopt 851 [drop11];
  L29(r79):
    st cols = r79;
    sym17 = ldf anyNA;
    base17 = ldf anyNA in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L276() else L277();
  L42(r109):
    l5 = ld y;
    attr__1 = ldf `attr<-`;
    check L327() else D65();
  L63(r149):
    st cols = r149;
    sym32 = ldf anyNA;
    base32 = ldf anyNA in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L392() else L393();
  L103(dx9):
    st x = dx9;
    sym48 = ldf names;
    base48 = ldf names in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L535() else L536();
  L141(i34, r315):
    r320 = `!=`(r315, 2);
    c151 = `as.logical`(r320);
    if c151 then L658() else L143();
  L149(r325):
    st n = r325;
    n = ld n;
    check L680() else D226();
  L272():
    y = ld y;
    check L274() else D34();
  L273():
    r78 = dyn base16(<sym y>);
    goto L29(r78);
  L305():
    goto L38(c33, r97);
  L309():
    goto L34();
  L323():
    x13 = ld x;
    check L325() else D63();
  L324():
    r108 = dyn base21(<sym x>);
    goto L42(r108);
  L385():
    x24 = force? x23;
    checkMissing(x24);
    j3 = ld j;
    check L386() else D89();
  L388():
    y6 = ld y;
    check L390() else D91();
  L389():
    r148 = dyn base31(<sym y>);
    goto L63(r148);
  L427():
    goto L68();
  L446():
    p8 = prom<V +>{
      cols22 = ld cols;
      cols23 = force? cols22;
      checkMissing(cols23);
      return cols23;
    };
    r181 = dyn make_unique1(p8);
    check L447() else D120();
  L451():
    p9 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r185 = dyn _row_names_info1(p9, 2);
    check L452() else D124();
  L519():
    goto L99(c115, r226);
  L524():
    x44 = force? x43;
    checkMissing(x44);
    r229 = seq_along(x44);
    goto L101(r229);
  L525():
    r230 = dyn names__8(l14, NULL, r228);
    check L526() else D163();
  L531():
    dr6 = tryDispatchBuiltin.1("[", x46);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L533() else L532(dr6);
  L532(x48):
    j9 = ld j;
    check L534() else D167();
  L645():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L139(i21, dx19);
  L646():
    sxx1 = force? sxx;
    checkMissing(sxx1);
    c150 = `is.object`(sxx1);
    if c150 then L647() else L648(i25, xx19, sxx1);
  L651():
    sym68 = ldf dim;
    base68 = ldf dim in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L653() else L654();
  L652():
    r314 = dyn base67(<lang dim(xj)>);
    goto L141(i27, r314);
  L676():
    x58 = ld x;
    check L678() else D224();
  L677():
    r324 = dyn base69(<sym x>);
    goto L149(r324);
  L720():
    drop12 = force? drop11;
    checkMissing(drop12);
    r350 = `!`(drop12);
    c170 = `as.logical`(r350);
    if c170 then L721() else L164();
  D34():
    deopt 128 [y];
  D63():
    deopt 214 [x13];
  D65():
    deopt 219 [r109, l5, r109];
  D89():
    deopt 307 [j3];
  D91():
    deopt 314 [y6];
  D120():
    deopt 402 [r181];
  D124():
    deopt 414 [r185];
  D163():
    deopt 546 [r228, r230];
  D167():
    deopt 557 [x48, j9];
  D224():
    deopt 782 [x58];
  D226():
    deopt 787 [n];
  L30(r82):
    c30 = `as.logical`(r82);
    if c30 then L280() else L31();
  L64(r152):
    c83 = `as.logical`(r152);
    if c83 then L396() else L65();
  L104(r235):
    st cols = r235;
    drop7 = ld drop;
    check L539() else D170();
  L140(i31, xx23, dx22):
    __9 = ldf `[[` in base;
    r313 = dyn __9(xx23, dx22);
    goto L139(i31, r313);
  L142(i37, r317):
    length6 = ldf length in base;
    r319 = dyn length6(r317);
    check L657() else D217();
  L143():
    xj16 = ld xj;
    check L665() else D220();
  L145(i46, dx25):
    l18 = ld x;
    c154 = `is.object`(l18);
    if c154 then L670() else L671(i46, dx25, l18);
  L164():
    goto L192();
  L192():
    x70 = ld x;
    check L803() else D277();
  L274():
    y1 = force? y;
    checkMissing(y1);
    names2 = ldf names in base;
    r80 = dyn names2(y1);
    check L275() else D35();
  L276():
    cols2 = ld cols;
    check L278() else D36();
  L277():
    r81 = dyn base17(<sym cols>);
    goto L30(r81);
  L325():
    x14 = force? x13;
    checkMissing(x14);
    oldClass = ldf oldClass in base;
    r110 = dyn oldClass(x14);
    check L326() else D64();
  L327():
    r111 = dyn attr__1(l5, NULL, "class", r109);
    check L328() else D66();
  L386():
    j4 = force? j3;
    checkMissing(j4);
    _subset3 = ldf `.subset` in base;
    r147 = dyn _subset3(x24, j4);
    check L387() else D90();
  L390():
    y7 = force? y6;
    checkMissing(y7);
    names5 = ldf names in base;
    r150 = dyn names5(y7);
    check L391() else D92();
  L392():
    cols14 = ld cols;
    check L394() else D93();
  L393():
    r151 = dyn base32(<sym cols>);
    goto L64(r151);
  L447():
    l9 = ld y;
    names__7 = ldf `names<-`;
    check L448() else D121();
  L452():
    st nrow = r185;
    drop5 = ld drop;
    check L453() else D125();
  L526():
    st x = r230;
    l15 = ld nm;
    names__9 = ldf `names<-`;
    check L527() else D164();
  L533():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L103(dx8);
  L534():
    j10 = force? j9;
    __3 = ldf `[` in base;
    r233 = dyn __3(x48, j10);
    goto L103(r233);
  L535():
    x49 = ld x;
    check L537() else D168();
  L536():
    r234 = dyn base48(<sym x>);
    goto L104(r234);
  L647():
    dr18 = tryDispatchBuiltin.1("[", sxx1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L649() else L648(i25, xx19, dr18);
  L648(i29, xx21, sxx3):
    j15 = ld j;
    check L650() else D214();
  L653():
    xj10 = ld xj;
    check L655() else D215();
  L654():
    r316 = dyn base68(<sym xj>);
    goto L142(i27, r316);
  L658():
    xj12 = ld xj;
    check L659() else D218();
  L678():
    x59 = force? x58;
    checkMissing(x59);
    length7 = ldf length in base;
    r326 = dyn length7(x59);
    check L679() else D225();
  L680():
    n1 = force? n;
    checkMissing(n1);
    r327 = `==`(n1, 1);
    c156 = `as.logical`(r327);
    if c156 then L681() else L150();
  L721():
    sym74 = ldf `is.null`;
    base74 = ldf `is.null` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L722() else L723();
  D35():
    deopt 131 [r80];
  D36():
    deopt 135 [cols2];
  D64():
    deopt 217 [r110];
  D66():
    deopt 222 [r109, r111];
  D90():
    deopt 310 [r147];
  D92():
    deopt 317 [r150];
  D93():
    deopt 321 [cols14];
  D121():
    deopt 404 [r181, l9, r181];
  D125():
    deopt 416 [drop5];
  D164():
    deopt 549 [r228, l15, r228];
  D168():
    deopt 563 [x49];
  D170():
    deopt 568 [drop7];
  D214():
    deopt 739 [i29, xx21, sxx3, j15];
  D215():
    deopt 748 [i27, xj10];
  D217():
    deopt 753 [i37, r319];
  D218():
    deopt 756 [i34, xj12];
  D220():
    deopt 761 [i34, xj16];
  D225():
    deopt 785 [r326];
  D277():
    deopt 984 [x70];
  L31():
    goto L32();
  L32():
    nm4 = ld nm;
    check L284() else D40();
  L65():
    goto L66();
  L66():
    nm12 = ld nm;
    check L400() else D97();
  L146(i55, dx32):
    st x = dx32;
    goto L138(i55);
  L150():
    n2 = ld n;
    check L688() else D228();
  L165(r352):
    c172 = `as.logical`(r352);
    if c172 then L725() else L166();
  L275():
    goto L29(r80);
  L278():
    cols3 = force? cols2;
    checkMissing(cols3);
    anyNA1 = ldf anyNA in base;
    r83 = dyn anyNA1(cols3);
    check L279() else D37();
  L280():
    stop = ldf stop;
    check L281() else D38();
  L326():
    goto L42(r110);
  L328():
    st y = r111;
    y4 = ld y;
    check L329() else D67();
  L387():
    goto L62(r147);
  L391():
    goto L63(r150);
  L394():
    cols15 = force? cols14;
    checkMissing(cols15);
    anyNA4 = ldf anyNA in base;
    r153 = dyn anyNA4(cols15);
    check L395() else D94();
  L396():
    stop2 = ldf stop;
    check L397() else D95();
  L448():
    r182 = dyn names__7(l9, NULL, r181);
    check L449() else D122();
  L453():
    drop6 = force? drop5;
    checkMissing(drop6);
    c98 = `as.logical`(drop6);
    if c98 then L454() else L82(c98);
  L527():
    r231 = dyn names__9(l15, NULL, r228);
    check L528() else D165();
  L537():
    x50 = force? x49;
    checkMissing(x50);
    names9 = ldf names in base;
    r236 = dyn names9(x50);
    check L538() else D169();
  L539():
    drop8 = force? drop7;
    checkMissing(drop8);
    c126 = `as.logical`(drop8);
    if c126 then L540() else L105(c126);
  L649():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L140(i25, xx19, dx21);
  L650():
    j16 = force? j15;
    __8 = ldf `[` in base;
    r312 = dyn __8(sxx3, j16);
    goto L140(i29, xx21, r312);
  L655():
    xj11 = force? xj10;
    checkMissing(xj11);
    dim1 = ldf dim in base;
    r318 = dyn dim1(xj11);
    check L656() else D216();
  L657():
    goto L141(i37, r319);
  L659():
    xj13 = force? xj12;
    checkMissing(xj13);
    c152 = `is.object`(xj13);
    if c152 then L660() else L661(i34, xj13);
  L665():
    xj17 = force? xj16;
    checkMissing(xj17);
    c153 = `is.object`(xj17);
    if c153 then L666() else L667(i34, xj17);
  L670():
    dr24 = tryDispatchBuiltin.0("[[<-", l18, dx25);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L672() else L671(i46, dx25, dr24);
  L671(i53, dx28, l20):
    j17 = ld j;
    check L673() else D222();
  L679():
    goto L149(r326);
  L681():
    x60 = ld x;
    check L682() else D227();
  L722():
    rows4 = ld rows;
    check L724() else D240();
  L723():
    r351 = dyn base74(<sym rows>);
    goto L165(r351);
  L803():
    x71 = force? x70;
    checkMissing(x71);
    popenv;
    return x71;
  D37():
    deopt 138 [r83];
  D38():
    deopt 140 [];
  D40():
    deopt 145 [nm4];
  D67():
    deopt 224 [y4];
  D94():
    deopt 324 [r153];
  D95():
    deopt 326 [];
  D97():
    deopt 331 [nm12];
  D122():
    deopt 406 [r181, r182];
  D165():
    deopt 551 [r228, r231];
  D169():
    deopt 566 [r236];
  D216():
    deopt 751 [i27, r318];
  D222():
    deopt 771 [i53, dx28, l20, dx25, j17];
  D227():
    deopt 791 [x60];
  D228():
    deopt 799 [n2];
  D240():
    deopt 855 [rows4];
  L82(c100):
    c104 = `as.logical`(c100);
    if c104 then L457() else L83(c104);
  L105(c128):
    c135 = `as.logical`(c128);
    if c135 then L546() else L107();
  L144(i43, dx24):
    goto L145(i43, dx24);
  L166():
    goto L168();
  L168():
    rows6 = ld rows;
    check L731() else D243();
  L279():
    goto L30(r83);
  L281():
    r84 = dyn stop("undefined columns selected");
    check L282() else D39();
  L284():
    nm5 = force? nm4;
    checkMissing(nm5);
    c31 = `is.object`(nm5);
    if c31 then L285() else L286(nm5);
  L329():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  L395():
    goto L64(r153);
  L397():
    r154 = dyn stop2("undefined columns selected");
    check L398() else D96();
  L400():
    nm13 = force? nm12;
    checkMissing(nm13);
    c84 = `is.object`(nm13);
    if c84 then L401() else L402(nm13);
  L449():
    st y = r182;
    goto L81();
  L454():
    mdrop4 = ld mdrop;
    check L455() else D126();
  L528():
    st nm = r231;
    goto L102();
  L538():
    goto L104(r236);
  L540():
    sym49 = ldf length;
    base49 = ldf length in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L541() else L542();
  L656():
    goto L142(i27, r318);
  L660():
    dr20 = tryDispatchBuiltin.1("[", xj13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L662() else L661(i34, dr20);
  L661(i41, xj15):
    i44 = ld i;
    check L663() else D219();
  L666():
    dr22 = tryDispatchBuiltin.1("[", xj17);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L668() else L667(i34, dr22);
  L667(i48, xj19):
    i50 = ld i;
    check L669() else D221();
  L672():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L146(i46, dx30);
  L673():
    j18 = force? j17;
    ____ = ldf `[[<-` in base;
    r323 = dyn ____(l20, dx25, j18);
    goto L146(i53, r323);
  L682():
    x61 = force? x60;
    checkMissing(x61);
    c157 = `is.object`(x61);
    if c157 then L683() else L684(x61);
  L688():
    n3 = force? n2;
    checkMissing(n3);
    r331 = `>`(n3, 1);
    c158 = `as.logical`(r331);
    if c158 then L689() else L153();
  L724():
    rows5 = force? rows4;
    checkMissing(rows5);
    c171 = `==`(rows5, NULL);
    goto L165(c171);
  L725():
    sym75 = ldf attr;
    base75 = ldf attr in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L726() else L727();
  D39():
    deopt 142 [r84];
  D96():
    deopt 328 [r154];
  D126():
    deopt 418 [c98, mdrop4];
  D219():
    deopt 758 [i41, xj15, i44];
  D221():
    deopt 763 [i48, xj19, i50];
  D243():
    deopt 868 [rows6];
  L33(dx3):
    l2 = ld y;
    names__2 = ldf `names<-`;
    check L289() else D42();
  L67(dx6):
    l8 = ld y;
    names__6 = ldf `names<-`;
    check L405() else D99();
  L83(c106):
    c110 = `as.logical`(c106);
    if c110 then L460() else L84();
  L106(c131, r238):
    r240 = `==`(r238, 1);
    c132 = `as.logical`(r240);
    c133 = `&&`(c131, c132);
    goto L105(c133);
  L107():
    sym56 = ldf anyNA;
    base56 = ldf anyNA in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L587() else L588();
  L151(dx34):
    popenv;
    return dx34;
  L153():
    st drop = FALSE;
    goto L162(FALSE);
  L162(c168):
    goto L163();
  L167(r354):
    st rows = r354;
    goto L168();
  L282():
    goto L32();
  L285():
    dr2 = tryDispatchBuiltin.1("[", nm5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L287() else L286(dr2);
  L286(nm7):
    cols4 = ld cols;
    check L288() else D41();
  L398():
    goto L66();
  L401():
    dr4 = tryDispatchBuiltin.1("[", nm13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L403() else L402(dr4);
  L402(nm15):
    cols16 = ld cols;
    check L404() else D98();
  L455():
    mdrop5 = force? mdrop4;
    checkMissing(mdrop5);
    r186 = `!`(mdrop5);
    c101 = `as.logical`(r186);
    c102 = `&&`(c98, c101);
    goto L82(c102);
  L457():
    nrow = ld nrow;
    check L458() else D127();
  L541():
    x51 = ld x;
    check L543() else D171();
  L542():
    r237 = dyn base49(<sym x>);
    goto L106(c126, r237);
  L546():
    sym50 = ldf `is.character`;
    base50 = ldf `is.character` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L547() else L548();
  L662():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L144(i34, dx23);
  L663():
    i45 = force? i44;
    __10 = ldf `[` in base;
    r321 = dyn __10(xj15, i45);
    goto L144(i41, r321);
  L668():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L145(i34, dx26);
  L669():
    i51 = force? i50;
    __11 = ldf `[` in base;
    r322 = dyn __11(xj17, i51, <missing>, FALSE);
    goto L145(i48, r322);
  L683():
    dr26 = tryDispatchBuiltin.1("[[", x61);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L685() else L684(dr26);
  L684(x63):
    __12 = ldf `[[` in base;
    r328 = dyn __12(x63, 1);
    goto L151(r328);
  L689():
    x64 = ld x;
    check L690() else D229();
  L726():
    xx24 = ld xx;
    check L728() else D241();
  L727():
    r353 = dyn base75(<sym xx>, "row.names");
    goto L167(r353);
  L731():
    rows7 = force? rows6;
    checkMissing(rows7);
    c173 = `is.object`(rows7);
    if c173 then L732() else L733(rows7);
  D41():
    deopt 147 [nm7, cols4];
  D42():
    deopt 151 [dx3, l2, dx3];
  D98():
    deopt 333 [nm15, cols16];
  D99():
    deopt 337 [dx6, l8, dx6];
  D127():
    deopt 422 [c104, nrow];
  D171():
    deopt 572 [c126, x51];
  D229():
    deopt 803 [x64];
  D241():
    deopt 860 [xx24];
  L84():
    sym38 = ldf oldClass;
    base38 = ldf oldClass in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L465() else L466();
  L108(r242):
    c137 = `as.logical`(r242);
    if c137 then L550() else L109();
  L120(r268):
    c141 = `as.logical`(r268);
    if c141 then L591() else L121();
  L169(dx41):
    st rows = dx41;
    sym76 = ldf anyNA;
    base76 = ldf anyNA in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L736() else L737();
  L287():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L288():
    cols5 = force? cols4;
    __1 = ldf `[` in base;
    r86 = dyn __1(nm7, cols5);
    goto L33(r86);
  L289():
    r87 = dyn names__2(l2, NULL, dx3);
    check L290() else D43();
  L403():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L67(dx5);
  L404():
    cols17 = force? cols16;
    __2 = ldf `[` in base;
    r156 = dyn __2(nm15, cols17);
    goto L67(r156);
  L405():
    r157 = dyn names__6(l8, NULL, dx6);
    check L406() else D100();
  L458():
    nrow1 = force? nrow;
    checkMissing(nrow1);
    r187 = `==`(nrow1, 1);
    c107 = `as.logical`(r187);
    c108 = `&&`(c104, c107);
    goto L83(c108);
  L460():
    structure = ldf structure;
    check L461() else D128();
  L543():
    x52 = force? x51;
    checkMissing(x52);
    length4 = ldf length in base;
    r239 = dyn length4(x52);
    check L544() else D172();
  L547():
    i7 = ld i;
    check L549() else D173();
  L548():
    r241 = dyn base50(<sym i>);
    goto L108(r241);
  L587():
    cols24 = ld cols;
    check L589() else D189();
  L588():
    r267 = dyn base56(<sym cols>);
    goto L120(r267);
  L685():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L151(dx33);
  L690():
    x65 = force? x64;
    checkMissing(x65);
    c159 = `is.object`(x65);
    if c159 then L691() else L692(x65);
  L728():
    xx25 = force? xx24;
    checkMissing(xx25);
    attr2 = ldf attr in base;
    r355 = dyn attr2(xx25, "row.names");
    check L729() else D242();
  L732():
    dr32 = tryDispatchBuiltin.1("[", rows7);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L734() else L733(dr32);
  L733(rows9):
    i56 = ld i;
    check L735() else D244();
  D43():
    deopt 153 [dx3, r87];
  D100():
    deopt 339 [dx6, r157];
  D128():
    deopt 428 [];
  D172():
    deopt 575 [c126, r239];
  D173():
    deopt 580 [i7];
  D189():
    deopt 646 [cols24];
  D242():
    deopt 864 [r355];
  D244():
    deopt 870 [rows9, i56];
  L86(r193):
    l10 = ld y;
    attr__2 = ldf `attr<-`;
    check L469() else D132();
  L109():
    goto L111();
  L111():
    sym52 = ldf `.subset2`;
    base52 = ldf `.subset2` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L558() else L559();
  L121():
    goto L122();
  L122():
    sym57 = ldf `is.null`;
    base57 = ldf `is.null` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L595() else L596();
  L154(dx36):
    st xj = dx36;
    sym70 = ldf length;
    base70 = ldf length in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L694() else L695();
  L170(r359):
    st ina = r359;
    anyDuplicated2 = ldf anyDuplicated;
    check L740() else D247();
  L290():
    st y = r87;
    st cols = dx3;
    goto L34();
  L406():
    st y = r157;
    st cols = dx6;
    goto L68();
  L461():
    p10 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      return y15;
    };
    r189 = dyn structure[, class, `row.names`](p10, NULL, NULL);
    check L462() else D129();
  L465():
    x31 = ld x;
    check L467() else D130();
  L466():
    r192 = dyn base38(<sym x>);
    goto L86(r192);
  L544():
    goto L106(c126, r239);
  L549():
    i8 = force? i7;
    checkMissing(i8);
    c136 = `is.character`(i8);
    goto L108(c136);
  L550():
    sym51 = ldf attr;
    base51 = ldf attr in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L551() else L552();
  L589():
    cols25 = force? cols24;
    checkMissing(cols25);
    anyNA7 = ldf anyNA in base;
    r269 = dyn anyNA7(cols25);
    check L590() else D190();
  L591():
    stop4 = ldf stop;
    check L592() else D191();
  L691():
    dr28 = tryDispatchBuiltin.1("[[", x65);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L693() else L692(dr28);
  L692(x67):
    __13 = ldf `[[` in base;
    r332 = dyn __13(x67, 1);
    goto L154(r332);
  L729():
    goto L167(r355);
  L734():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L169(dx40);
  L735():
    i57 = force? i56;
    __15 = ldf `[` in base;
    r357 = dyn __15(rows9, i57);
    goto L169(r357);
  L736():
    rows10 = ld rows;
    check L738() else D245();
  L737():
    r358 = dyn base76(<sym rows>);
    goto L170(r358);
  D129():
    deopt 434 [r189];
  D130():
    deopt 438 [x31];
  D132():
    deopt 443 [r193, l10, r193];
  D190():
    deopt 649 [r269];
  D191():
    deopt 651 [];
  D245():
    deopt 876 [rows10];
  D247():
    deopt 881 [r359];
  L110(r244):
    st rows = r244;
    pmatch = ldf pmatch;
    check L555() else D176();
  L112(r251):
    st xj = r251;
    sym54 = ldf length;
    base54 = ldf length in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L566() else L567();
  L123(r273):
    r277 = `!`(r273);
    c143 = `as.logical`(r277);
    if c143 then L601() else L125();
  L155(r334):
    r339 = `==`(r334, 2);
    c160 = `as.logical`(r339);
    if c160 then L701() else L157();
  L462():
    popenv;
    return r189;
  L467():
    x32 = force? x31;
    checkMissing(x32);
    oldClass1 = ldf oldClass in base;
    r194 = dyn oldClass1(x32);
    check L468() else D131();
  L469():
    r195 = dyn attr__2(l10, NULL, "class", r193);
    check L470() else D133();
  L551():
    xx4 = ld xx;
    check L553() else D174();
  L552():
    r243 = dyn base51(<sym xx>, "row.names");
    goto L110(r243);
  L558():
    sym53 = ldf `.subset`;
    base53 = ldf `.subset` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L560() else L561();
  L559():
    r250 = dyn base52(<lang .subset(xx, j)>, 1);
    goto L112(r250);
  L590():
    goto L120(r269);
  L592():
    r270 = dyn stop4("undefined columns selected");
    check L593() else D192();
  L595():
    sym58 = ldf names;
    base58 = ldf names in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L597() else L598();
  L596():
    r272 = dyn base57(<lang names(nm)>);
    goto L123(r272);
  L693():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L154(dx35);
  L694():
    sym71 = ldf dim;
    base71 = ldf dim in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L696() else L697();
  L695():
    r333 = dyn base70(<lang dim(xj)>);
    goto L155(r333);
  L738():
    rows11 = force? rows10;
    checkMissing(rows11);
    anyNA8 = ldf anyNA in base;
    r360 = dyn anyNA8(rows11);
    check L739() else D246();
  L740():
    p18 = prom<V +>{
      rows12 = ld rows;
      rows13 = force? rows12;
      checkMissing(rows13);
      return rows13;
    };
    r362 = dyn anyDuplicated2(p18);
    check L741() else D248();
  D131():
    deopt 441 [r194];
  D133():
    deopt 446 [r193, r195];
  D174():
    deopt 585 [xx4];
  D176():
    deopt 592 [];
  D192():
    deopt 653 [r270];
  D246():
    deopt 879 [r360];
  D248():
    deopt 883 [r359, r362];
  L113(r253):
    _subset7 = ldf `.subset2` in base;
    r255 = dyn _subset7(r253, 1);
    check L565() else D181();
  L114(r257):
    r262 = `!=`(r257, 2);
    c138 = `as.logical`(r262);
    if c138 then L573() else L116();
  L124(r275):
    c142 = `==`(r275, NULL);
    goto L123(c142);
  L125():
    goto L127();
  L127():
    structure1 = ldf structure;
    check L610() else D199();
  L156(r336):
    length8 = ldf length in base;
    r338 = dyn length8(r336);
    check L700() else D232();
  L157():
    sym73 = ldf length;
    base73 = ldf length in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L710() else L711();
  L160(dx39):
    st nrow = dx39;
    mdrop6 = ld mdrop;
    check L714() else D237();
  L468():
    goto L86(r194);
  L470():
    st y = r195;
    _row_names_info2 = ldf `.row_names_info`;
    check L471() else D134();
  L553():
    xx5 = force? xx4;
    checkMissing(xx5);
    attr = ldf attr in base;
    r245 = dyn attr(xx5, "row.names");
    check L554() else D175();
  L555():
    p12 = prom<V +>{
      i9 = ld i;
      i10 = force? i9;
      checkMissing(i10);
      return i10;
    };
    p13 = prom<V +>{
      rows = ld rows;
      rows1 = force? rows;
      checkMissing(rows1);
      return rows1;
    };
    r248 = dyn pmatch[, , `duplicates.ok`](p12, p13, TRUE);
    check L556() else D177();
  L560():
    xx6 = ld xx;
    check L562() else D178();
  L561():
    r252 = dyn base53(<sym xx>, <sym j>);
    goto L113(r252);
  L566():
    sym55 = ldf dim;
    base55 = ldf dim in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L568() else L569();
  L567():
    r256 = dyn base54(<lang dim(xj)>);
    goto L114(r256);
  L593():
    goto L122();
  L597():
    nm20 = ld nm;
    check L599() else D193();
  L598():
    r274 = dyn base58(<sym nm>);
    goto L124(r274);
  L601():
    nm22 = ld nm;
    check L602() else D195();
  L696():
    xj20 = ld xj;
    check L698() else D230();
  L697():
    r335 = dyn base71(<sym xj>);
    goto L156(r335);
  L701():
    sym72 = ldf dim;
    base72 = ldf dim in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L702() else L703();
  L739():
    goto L170(r360);
  L741():
    st dup = r362;
    r363 = `||`(r359, r362);
    c174 = `as.logical`(r363);
    if c174 then L742() else L171();
  D134():
    deopt 449 [];
  D175():
    deopt 589 [r245];
  D177():
    deopt 597 [r248];
  D178():
    deopt 605 [xx6];
  D181():
    deopt 613 [r255];
  D193():
    deopt 659 [nm20];
  D195():
    deopt 665 [nm22];
  D199():
    deopt 679 [];
  D230():
    deopt 813 [xj20];
  D232():
    deopt 818 [r338];
  D237():
    deopt 837 [mdrop6];
  L115(r259):
    length5 = ldf length in base;
    r261 = dyn length5(r259);
    check L572() else D184();
  L116():
    xj6 = ld xj;
    check L580() else D187();
  L118(dx12):
    popenv;
    return dx12;
  L158(r341):
    c161 = `is.object`(r341);
    if c161 then L706() else L707(r341);
  L171():
    goto L182();
  L182():
    has_j8 = ld `has.j`;
    check L769() else D259();
  L471():
    p11 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r197 = dyn _row_names_info2(p11, 0);
    check L472() else D135();
  L554():
    goto L110(r245);
  L556():
    st i = r248;
    goto L111();
  L562():
    xx7 = force? xx6;
    checkMissing(xx7);
    j11 = ld j;
    check L563() else D179();
  L565():
    goto L112(r255);
  L568():
    xj = ld xj;
    check L570() else D182();
  L569():
    r258 = dyn base55(<sym xj>);
    goto L115(r258);
  L573():
    xj2 = ld xj;
    check L574() else D185();
  L599():
    nm21 = force? nm20;
    checkMissing(nm21);
    names10 = ldf names in base;
    r276 = dyn names10(nm21);
    check L600() else D194();
  L602():
    nm23 = force? nm22;
    checkMissing(nm23);
    c144 = `is.object`(nm23);
    if c144 then L603() else L604(nm23);
  L610():
    p14 = prom<V +>{
      sym59 = ldf seq_along;
      base59 = ldf seq_along in base;
      guard59 = `==`.4(sym59, base59);
      if guard59 then L1() else L2();
    L0(r281):
      return r281;
    L1():
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      r282 = seq_along(xx9);
      goto L0(r282);
    L2():
      r280 = dyn base59(<sym xx>);
      goto L0(r280);
    };
    p15 = prom<V +>{
      sym60 = ldf names;
      base60 = ldf names in base;
      guard60 = `==`.4(sym60, base60);
      if guard60 then L1() else L2();
    L0(r285):
      return r285;
    L1():
      xx10 = ld xx;
      xx11 = force? xx10;
      checkMissing(xx11);
      names11 = ldf names in base;
      r286 = dyn names11(xx11);
      goto L0(r286);
    L2():
      r284 = dyn base60(<sym xx>);
      goto L0(r284);
    };
    r288 = dyn structure1[, names](p14, p15);
    check L611() else D200();
  L698():
    xj21 = force? xj20;
    checkMissing(xj21);
    dim2 = ldf dim in base;
    r337 = dyn dim2(xj21);
    check L699() else D231();
  L700():
    goto L155(r338);
  L702():
    xj22 = ld xj;
    check L704() else D233();
  L703():
    r340 = dyn base72(<sym xj>);
    goto L158(r340);
  L710():
    xj24 = ld xj;
    check L712() else D235();
  L711():
    r346 = dyn base73(<sym xj>);
    goto L160(r346);
  L714():
    mdrop7 = force? mdrop6;
    checkMissing(mdrop7);
    r348 = `!`(mdrop7);
    c162 = `as.logical`(r348);
    if c162 then L715() else L161(c162);
  L742():
    dup = ld dup;
    check L743() else D249();
  D135():
    deopt 452 [r197];
  D179():
    deopt 607 [j11];
  D182():
    deopt 619 [xj];
  D184():
    deopt 624 [r261];
  D185():
    deopt 627 [xj2];
  D187():
    deopt 632 [xj6];
  D194():
    deopt 662 [r276];
  D200():
    deopt 683 [r288];
  D231():
    deopt 816 [r337];
  D233():
    deopt 823 [xj22];
  D235():
    deopt 832 [xj24];
  D249():
    deopt 886 [dup];
  D259():
    deopt 928 [has_j8];
  L126(dx15):
    l16 = ld x;
    names__10 = ldf `names<-`;
    check L607() else D197();
  L159(dx38):
    goto L160(dx38);
  L161(c164):
    st drop = c164;
    goto L162(c164);
  L472():
    l11 = ld y;
    attr__3 = ldf `attr<-`;
    check L473() else D136();
  L563():
    j12 = force? j11;
    checkMissing(j12);
    _subset6 = ldf `.subset` in base;
    r254 = dyn _subset6(xx7, j12);
    check L564() else D180();
  L570():
    xj1 = force? xj;
    checkMissing(xj1);
    dim = ldf dim in base;
    r260 = dyn dim(xj1);
    check L571() else D183();
  L572():
    goto L114(r261);
  L574():
    xj3 = force? xj2;
    checkMissing(xj3);
    c139 = `is.object`(xj3);
    if c139 then L575() else L576(xj3);
  L580():
    xj7 = force? xj6;
    checkMissing(xj7);
    c140 = `is.object`(xj7);
    if c140 then L581() else L582(xj7);
  L600():
    goto L124(r276);
  L603():
    dr12 = tryDispatchBuiltin.1("[", nm23);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L605() else L604(dr12);
  L604(nm25):
    cols26 = ld cols;
    check L606() else D196();
  L611():
    st nxx = r288;
    sym61 = ldf match;
    base61 = ldf match in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L612() else L613();
  L699():
    goto L156(r337);
  L704():
    xj23 = force? xj22;
    checkMissing(xj23);
    dim3 = ldf dim in base;
    r342 = dyn dim3(xj23);
    check L705() else D234();
  L706():
    dr30 = tryDispatchBuiltin.1("[", r341);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L708() else L707(dr30);
  L707(r344):
    __14 = ldf `[` in base;
    r345 = dyn __14(r344, 1);
    goto L159(r345);
  L712():
    xj25 = force? xj24;
    checkMissing(xj25);
    length9 = ldf length in base;
    r347 = dyn length9(xj25);
    check L713() else D236();
  L715():
    nrow2 = ld nrow;
    check L716() else D238();
  L743():
    dup1 = force? dup;
    checkMissing(dup1);
    r364 = `!`(dup1);
    c175 = `as.logical`(r364);
    if c175 then L744() else L172(c175);
  L769():
    has_j9 = force? has_j8;
    checkMissing(has_j9);
    c189 = `as.logical`(has_j9);
    if c189 then L770() else L183(c189);
  D136():
    deopt 454 [r197, l11, r197];
  D180():
    deopt 610 [r254];
  D183():
    deopt 622 [r260];
  D196():
    deopt 667 [nm25, cols26];
  D197():
    deopt 671 [dx15, l16, dx15];
  D234():
    deopt 826 [r342];
  D236():
    deopt 835 [r347];
  D238():
    deopt 840 [c162, nrow2];
  L117(dx11):
    goto L118(dx11);
  L128(r290):
    st sxx = r290;
    goto L131();
  L172(c177):
    c185 = `as.logical`(c177);
    if c185 then L749() else L174();
  L183(c191):
    c195 = `as.logical`(c191);
    if c195 then L774() else L184();
  L473():
    r198 = dyn attr__3(l11, NULL, "row.names", r197);
    check L474() else D137();
  L564():
    goto L113(r254);
  L571():
    goto L115(r260);
  L575():
    dr8 = tryDispatchBuiltin.1("[", xj3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L577() else L576(dr8);
  L576(xj5):
    i11 = ld i;
    check L578() else D186();
  L581():
    dr10 = tryDispatchBuiltin.1("[", xj7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L583() else L582(dr10);
  L582(xj9):
    i13 = ld i;
    check L584() else D188();
  L605():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L126(dx14);
  L606():
    cols27 = force? cols26;
    __6 = ldf `[` in base;
    r278 = dyn __6(nm25, cols27);
    goto L126(r278);
  L607():
    r279 = dyn names__10(l16, NULL, dx15);
    check L608() else D198();
  L612():
    nxx = ld nxx;
    check L614() else D201();
  L613():
    r289 = dyn base61(<lang `[`(nxx, j)>, <lang seq_along(xx)>);
    goto L128(r289);
  L705():
    goto L158(r342);
  L708():
    dx37 = getTryDispatchBuiltinValue(dr30);
    goto L159(dx37);
  L713():
    goto L160(r347);
  L716():
    nrow3 = force? nrow2;
    checkMissing(nrow3);
    r349 = `==`(nrow3, 1);
    c165 = `as.logical`(r349);
    c166 = `&&`(c162, c165);
    goto L161(c166);
  L744():
    sym77 = ldf `is.character`;
    base77 = ldf `is.character` in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L745() else L746();
  L770():
    anyDuplicated3 = ldf anyDuplicated;
    check L771() else D260();
  D137():
    deopt 457 [r197, r198];
  D186():
    deopt 629 [xj5, i11];
  D188():
    deopt 634 [xj9, i13];
  D198():
    deopt 673 [dx15, r279];
  D201():
    deopt 687 [nxx];
  D260():
    deopt 931 [c189];
  L173(c180, r366):
    c182 = `as.logical`(r366);
    c183 = `&&`(c180, c182);
    goto L172(c183);
  L174():
    goto L175();
  L175():
    ina = ld ina;
    check L753() else D253();
  L184():
    goto L185();
  L185():
    sym81 = ldf `is.null`;
    base81 = ldf `is.null` in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L780() else L781();
  L474():
    st y = r198;
    y16 = ld y;
    check L475() else D138();
  L577():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L117(dx10);
  L578():
    i12 = force? i11;
    __4 = ldf `[` in base;
    r263 = dyn __4(xj5, i12);
    goto L117(r263);
  L583():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L118(dx13);
  L584():
    i14 = force? i13;
    __5 = ldf `[` in base;
    r264 = dyn __5(xj7, i14, <missing>, FALSE);
    goto L118(r264);
  L608():
    st x = r279;
    st cols = dx15;
    goto L127();
  L614():
    nxx1 = force? nxx;
    checkMissing(nxx1);
    c145 = `is.object`(nxx1);
    if c145 then L615() else L616(nxx1);
  L745():
    rows14 = ld rows;
    check L747() else D250();
  L746():
    r365 = dyn base77(<sym rows>);
    goto L173(c175, r365);
  L749():
    _in_1 = ldf `%in%`;
    check L750() else D251();
  L771():
    p21 = prom<V +>{
      sym80 = ldf names;
      base80 = ldf names in base;
      guard80 = `==`.4(sym80, base80);
      if guard80 then L1() else L2();
    L0(r393):
      st nm = r393;
      invisible.0();
      return r393;
    L1():
      x68 = ld x;
      x69 = force? x68;
      checkMissing(x69);
      names12 = ldf names in base;
      r394 = dyn names12(x69);
      goto L0(r394);
    L2():
      r392 = dyn base80(<sym x>);
      goto L0(r392);
    };
    r396 = dyn anyDuplicated3(p21);
    check L772() else D261();
  L774():
    make_unique3 = ldf `make.unique`;
    check L775() else D262();
  D138():
    deopt 459 [y16];
  D250():
    deopt 890 [c175, rows14];
  D251():
    deopt 895 [];
  D253():
    deopt 902 [ina];
  D261():
    deopt 933 [c189, r396];
  D262():
    deopt 936 [];
  L129(dx18):
    sym62 = ldf seq_along;
    base62 = ldf seq_along in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L619() else L620();
  L186(r402):
    c197 = `as.logical`(r402);
    if c197 then L783() else L187();
  L475():
    y17 = force? y16;
    checkMissing(y17);
    popenv;
    return y17;
  L615():
    dr14 = tryDispatchBuiltin.1("[", nxx1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L617() else L616(dr14);
  L616(nxx3):
    j13 = ld j;
    check L618() else D202();
  L747():
    rows15 = force? rows14;
    checkMissing(rows15);
    c181 = `is.character`(rows15);
    goto L173(c175, c181);
  L750():
    p19 = prom<V +>{
      rows16 = ld rows;
      rows17 = force? rows16;
      checkMissing(rows17);
      return rows17;
    };
    r368 = dyn _in_1("NA", p19);
    check L751() else D252();
  L753():
    ina1 = force? ina;
    checkMissing(ina1);
    c186 = `as.logical`(ina1);
    if c186 then L754() else L176();
  L772():
    c192 = `as.logical`(r396);
    c193 = `&&`(c189, c192);
    goto L183(c193);
  L775():
    p22 = prom<V +>{
      nm26 = ld nm;
      nm27 = force? nm26;
      checkMissing(nm27);
      return nm27;
    };
    r398 = dyn make_unique3(p22);
    check L776() else D263();
  L780():
    rows22 = ld rows;
    check L782() else D266();
  L781():
    r401 = dyn base81(<sym rows>);
    goto L186(r401);
  D202():
    deopt 689 [nxx3, j13];
  D252():
    deopt 898 [r368];
  D263():
    deopt 938 [r398];
  D266():
    deopt 947 [rows22];
  L130(r293):
    match = ldf match in base;
    r295 = dyn match(dx18, r293, NA_INT, NULL);
    check L622() else D204();
  L176():
    goto L179();
  L179():
    dup2 = ld dup;
    check L763() else D256();
  L187():
    goto L190();
  L190():
    rows24 = ld rows;
    check L793() else D270();
  L617():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L129(dx17);
  L618():
    j14 = force? j13;
    __7 = ldf `[` in base;
    r291 = dyn __7(nxx3, j14);
    goto L129(r291);
  L619():
    xx12 = ld xx;
    check L621() else D203();
  L620():
    r292 = dyn base62(<sym xx>);
    goto L130(r292);
  L751():
    st dup = r368;
    goto L175();
  L754():
    l21 = ld rows;
    c187 = `is.object`(l21);
    if c187 then L755() else L756("NA", l21);
  L776():
    l27 = ld x;
    names__11 = ldf `names<-`;
    check L777() else D264();
  L782():
    rows23 = force? rows22;
    checkMissing(rows23);
    c196 = `==`(rows23, NULL);
    goto L186(c196);
  L783():
    sym82 = ldf attr;
    base82 = ldf attr in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L784() else L785();
  D203():
    deopt 693 [xx12];
  D204():
    deopt 699 [r295];
  D256():
    deopt 917 [dup2];
  D264():
    deopt 940 [r398, l27, r398];
  D270():
    deopt 963 [rows24];
  L177(r373, dx43):
    st rows = dx43;
    goto L179();
  L188(r404):
    c198 = `is.object`(r404);
    if c198 then L788() else L789(r404);
  L621():
    xx13 = force? xx12;
    checkMissing(xx13);
    r294 = seq_along(xx13);
    goto L130(r294);
  L622():
    goto L128(r295);
  L755():
    dr34 = tryDispatchBuiltin.0("[<-", l21, "NA");
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L757() else L756("NA", dr34);
  L756(r371, l23):
    sym78 = ldf `is.na`;
    base78 = ldf `is.na` in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L758() else L759();
  L763():
    dup3 = force? dup2;
    checkMissing(dup3);
    c188 = `as.logical`(dup3);
    if c188 then L764() else L180();
  L777():
    r399 = dyn names__11(l27, NULL, r398);
    check L778() else D265();
  L784():
    xx26 = ld xx;
    check L786() else D267();
  L785():
    r403 = dyn base82(<sym xx>, "row.names");
    goto L188(r403);
  L793():
    rows25 = force? rows24;
    checkMissing(rows25);
    l28 = ld x;
    attr__5 = ldf `attr<-`;
    check L794() else D271();
  D265():
    deopt 942 [r398, r399];
  D267():
    deopt 952 [xx26];
  D271():
    deopt 966 [rows25, l28, rows25];
  L178(r379, l26, r380, r381):
    ___ = ldf `[<-` in base;
    r383 = dyn ___(l26, r380, r381);
    goto L177(r379, r383);
  L180():
    goto L181(NULL);
  L181(r390):
    goto L182();
  L189(dx45):
    st rows = dx45;
    goto L190();
  L757():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L177("NA", dx42);
  L758():
    rows18 = ld rows;
    check L760() else D254();
  L759():
    r378 = dyn base78(<sym rows>);
    goto L178(r371, l23, "NA", r378);
  L764():
    make_unique2 = ldf `make.unique`;
    check L765() else D257();
  L778():
    st x = r399;
    goto L185();
  L786():
    xx27 = force? xx26;
    checkMissing(xx27);
    attr3 = ldf attr in base;
    r405 = dyn attr3(xx27, "row.names");
    check L787() else D268();
  L788():
    dr36 = tryDispatchBuiltin.1("[", r404);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L790() else L789(dr36);
  L789(r407):
    i58 = ld i;
    check L791() else D269();
  L794():
    r409 = dyn attr__5(l28, NULL, "row.names", rows25);
    check L795() else D272();
  D254():
    deopt 909 [r371, l23, "NA", rows18];
  D257():
    deopt 920 [];
  D268():
    deopt 956 [r405];
  D269():
    deopt 957 [r407, i58];
  D272():
    deopt 969 [rows25, r409];
  L760():
    rows19 = force? rows18;
    checkMissing(rows19);
    is_na = ldf `is.na` in base;
    r382 = dyn is_na(rows19);
    check L761() else D255();
  L765():
    p20 = prom<V +>{
      sym79 = ldf `as.character`;
      base79 = ldf `as.character` in base;
      guard79 = `==`.4(sym79, base79);
      if guard79 then L1() else L2();
    L0(r386):
      return r386;
    L1():
      rows20 = ld rows;
      rows21 = force? rows20;
      checkMissing(rows21);
      as_character = ldf `as.character` in base;
      r387 = dyn as_character(rows21);
      goto L0(r387);
    L2():
      r385 = dyn base79(<sym rows>);
      goto L0(r385);
    };
    r389 = dyn make_unique2(p20);
    check L766() else D258();
  L787():
    goto L188(r405);
  L790():
    dx44 = getTryDispatchBuiltinValue(dr36);
    goto L189(dx44);
  L791():
    i59 = force? i58;
    __16 = ldf `[` in base;
    r408 = dyn __16(r407, i59);
    goto L189(r408);
  L795():
    st x = r409;
    sym83 = ldf oldClass;
    base83 = ldf oldClass in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L796() else L797();
  D255():
    deopt 912 [r371, l23, "NA", r382];
  D258():
    deopt 922 [r389];
  L191(r411):
    l29 = ld x;
    oldClass__1 = ldf `oldClass<-`;
    check L800() else D275();
  L761():
    goto L178(r371, l23, "NA", r382);
  L766():
    st rows = r389;
    goto L181(r389);
  L796():
    xx28 = ld xx;
    check L798() else D273();
  L797():
    r410 = dyn base83(<sym xx>);
    goto L191(r410);
  D273():
    deopt 973 [xx28];
  D275():
    deopt 978 [r411, l29, r411];
  L798():
    xx29 = force? xx28;
    checkMissing(xx29);
    oldClass2 = ldf oldClass in base;
    r412 = dyn oldClass2(xx29);
    check L799() else D274();
  L800():
    r413 = dyn oldClass__1(l29, NULL, r411);
    check L801() else D276();
  D274():
    deopt 976 [r412];
  D276():
    deopt 980 [r411, r413];
  L799():
    goto L191(r412);
  L801():
    st x = r413;
    goto L192();
  }
}