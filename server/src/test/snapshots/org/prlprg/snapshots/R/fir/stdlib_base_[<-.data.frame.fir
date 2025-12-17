fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650999460;
    st `[<-.data.frame` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner650999460(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sys_call:cls, reg r4:V, reg names:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg all:cls, reg r12:V, reg r13:V, reg c1:L, reg warning:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg nargs:cls, reg r18:V, reg nA:*, reg nA1:V, reg r19:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg missing:cls, reg r22:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg missing1:cls, reg r26:V, reg r27:V, reg nA2:*, reg nA3:V, reg r29:V, reg c3:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg value1:*, reg value2:V, reg is_atomic:cls, reg r32:V, reg c4:L, reg c6:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg c9:L, reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg c12:L, reg r36:V, reg value3:*, reg value4:V, reg names1:cls, reg r37:V, reg c13:V, reg r38:V, reg c14:L, reg c15:V, reg c17:L, reg l:*, reg names__:cls, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg missing2:cls, reg r43:V, reg c18:L, reg c20:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r44:V, reg c23:L, reg r45:V, reg missing3:cls, reg r46:V, reg c24:L, reg c25:V, reg c27:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r47:V, reg r48:V, reg value5:*, reg value6:V, reg c28:V, reg c29:L, reg x1:*, reg x2:V, reg c30:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg logical:cls, reg r49:V, reg __:cls, reg r50:V, reg r53:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r54:V, reg r55:V, reg i1:*, reg i2:V, reg is_numeric:cls, reg r56:V, reg c31:L, reg c33:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r57:V, reg c36:L, reg r58:V, reg i3:*, reg i4:V, reg is_matrix:cls, reg r59:V, reg c37:L, reg c38:V, reg c40:L, reg c42:V, reg ncol:cls, reg i5:*, reg i6:V, reg p2:p(V +), reg r61:V, reg r62:V, reg c43:L, reg c44:V, reg c46:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r63:V, reg r64:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r65:V, reg r66:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r67:V, reg r68:V, reg x5:*, reg x6:V, reg dim:cls, reg r69:V, reg prod:cls, reg r70:V, reg rep_int:cls, reg r71:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r72:V, reg r73:V, reg x7:*, reg x8:V, reg dim1:cls, reg r74:V, reg l1:*, reg dim__:cls, reg r75:V, reg tryCatch:cls, reg l2:*, reg c47:L, reg r77:L, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r79:L, reg dx3:V, reg i7:*, reg i8:V, reg ___:cls, reg r80:V, reg p3:p(V +), reg r82:cls, reg p4:p(V +), reg r84:V, reg order:cls, reg i9:*, reg i10:V, reg c48:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r85:V, reg p5:p(V +), reg i13:*, reg i14:V, reg c49:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r87:V, reg p6:p(V +), reg r89:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r90:V, reg r91:V, reg value7:*, reg value8:V, reg length:cls, reg r92:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r93:V, reg r94:V, reg o:*, reg o1:V, reg length1:cls, reg r95:V, reg N:*, reg N1:V, reg __3:cls, reg r96:V, reg r97:V, reg c50:L, reg warning1:cls, reg r98:V, reg N2:*, reg N3:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r100:V, reg N6:V, reg r101:V, reg o2:*, reg o3:V, reg length2:cls, reg r102:V, reg r103:V, reg c51:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r104:V, reg r105:V, reg rep:cls, reg r106:V, reg value9:*, reg value10:V, reg c52:L, reg value12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg o4:*, reg o5:V, reg __4:cls, reg r108:V, reg index:*, reg index1:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r109:V, reg r110:V, reg i17:*, reg i18:V, reg c53:L, reg c54:L, reg c56:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r111:V, reg c59:L, reg r112:V, reg i19:*, reg i20:V, reg is_matrix1:cls, reg r113:V, reg c60:L, reg c61:V, reg c63:L, reg c65:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r114:V, reg c68:L, reg r115:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r116:V, reg c71:L, reg r117:V, reg i21:*, reg i22:V, reg dim2:cls, reg r118:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r121:V, reg c74:L, reg r122:V, reg r123:V, reg x9:*, reg x10:V, reg dim3:cls, reg r124:V, reg r125:V, reg all1:cls, reg r126:V, reg c75:L, reg c76:V, reg c78:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r127:V, reg r128:V, reg i23:*, reg i24:V, reg sum:cls, reg r129:V, reg nreplace:*, reg nreplace1:V, reg r130:V, reg c79:L, reg x11:*, reg x12:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r133:V, reg r134:V, reg value13:*, reg value14:V, reg length3:cls, reg r135:V, reg N7:*, reg N8:V, reg r136:V, reg c80:L, reg c82:V, reg N9:*, reg N10:V, reg nreplace2:*, reg nreplace3:V, reg r137:V, reg c83:L, reg c84:V, reg c86:L, reg c88:V, reg nreplace4:*, reg nreplace5:V, reg N11:*, reg N12:V, reg __5:cls, reg r138:V, reg r139:V, reg c89:L, reg c90:V, reg c92:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r140:V, reg r141:V, reg rep1:cls, reg r142:V, reg N13:*, reg N14:V, reg r144:V, reg c93:L, reg c95:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r145:V, reg c98:L, reg r146:V, reg value15:*, reg value16:V, reg length4:cls, reg r147:V, reg nreplace6:*, reg nreplace7:V, reg r148:V, reg c99:L, reg c100:V, reg c102:L, reg stop:cls, reg r149:V, reg nrow:cls, reg x13:*, reg x14:V, reg p7:p(V +), reg r152:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r153:V, reg r154:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r155:V, reg r156:V, reg i25:*, reg i26:V, reg dim4:cls, reg r157:V, reg c103:L, reg r159:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __6:cls, reg r160:V, reg r161:I, reg s:V, reg l5:I, reg i27:I, reg i28:I, reg i29:I, reg c104:L, reg x15:V, reg i32:*, reg i33:V, reg c105:L, reg i36:I, reg i37:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i39:I, reg dx13:V, reg v:*, reg v1:V, reg __7:cls, reg r162:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r163:V, reg i42:I, reg r164:V, reg thisvar:*, reg thisvar1:V, reg sum1:cls, reg r165:V, reg nv:*, reg nv1:V, reg c106:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r166:V, reg i47:I, reg r167:V, reg x16:*, reg x17:V, reg c107:L, reg i49:I, reg x19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i51:I, reg dx15:V, reg v2:*, reg v3:V, reg __8:cls, reg r168:V, reg is_matrix2:cls, reg r169:V, reg c108:L, reg N15:*, reg N16:V, reg r170:V, reg c109:L, reg value17:*, reg value18:V, reg c110:L, reg i57:I, reg value20:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i59:I, reg dx17:V, reg n:*, reg n1:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r171:V, reg i62:I, reg value23:V, reg n4:V, reg r172:V, reg nv2:*, reg nv3:V, reg r173:I, reg r174:V, reg __9:cls, reg r175:V, reg i63:I, reg dx18:V, reg value24:*, reg value25:V, reg l6:*, reg c111:L, reg i65:I, reg dx21:V, reg l9:*, reg dx22:V, reg l10:*, reg dr18:V, reg dc9:L, reg dx25:V, reg i67:I, reg dx26:V, reg l12:*, reg dx27:V, reg dx28:V, reg v4:*, reg v5:V, reg __10:cls, reg r176:V, reg c112:L, reg i69:I, reg dx31:V, reg l14:*, reg dx32:V, reg dr20:V, reg dc10:L, reg dx34:V, reg i71:I, reg dx35:V, reg l16:*, reg dx36:V, reg thisvar2:*, reg thisvar3:V, reg ___1:cls, reg r177:V, reg c113:L, reg i73:I, reg dx38:V, reg l18:*, reg dr22:V, reg dc11:L, reg dx40:V, reg i75:I, reg dx41:V, reg dx42:V, reg v6:*, reg v7:V, reg ____:cls, reg r178:V, reg i76:I, reg dx43:V, reg N17:*, reg N18:V, reg r179:V, reg c114:L, reg value26:*, reg value27:V, reg c115:L, reg i80:I, reg value29:V, reg dr24:V, reg dc12:L, reg dx44:V, reg i82:I, reg dx45:V, reg n5:*, reg n6:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r180:V, reg i85:I, reg value32:V, reg n9:V, reg r181:V, reg nv4:*, reg nv5:V, reg r182:I, reg r183:V, reg __11:cls, reg r184:V, reg i86:I, reg dx46:V, reg value33:*, reg value34:V, reg l19:*, reg c116:L, reg i88:I, reg dx49:V, reg l22:*, reg dx50:V, reg l23:*, reg dr26:V, reg dc13:L, reg dx53:V, reg i90:I, reg dx54:V, reg l25:*, reg dx55:V, reg dx56:V, reg v8:*, reg v9:V, reg __12:cls, reg r185:V, reg c117:L, reg i92:I, reg dx59:V, reg l27:*, reg dx60:V, reg dr28:V, reg dc14:L, reg dx62:V, reg i94:I, reg dx63:V, reg l29:*, reg dx64:V, reg thisvar4:*, reg thisvar5:V, reg ___2:cls, reg r186:V, reg c118:L, reg i96:I, reg dx66:V, reg l31:*, reg dr30:V, reg dc15:L, reg dx68:V, reg i98:I, reg dx69:V, reg dx70:V, reg v10:*, reg v11:V, reg ____1:cls, reg r187:V, reg i99:I, reg n10:*, reg n11:V, reg nv6:*, reg nv7:V, reg r188:V, reg x20:*, reg x21:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r191:V, reg r192:V, reg i100:*, reg i101:V, reg is_matrix3:cls, reg r193:V, reg c119:L, reg stop1:cls, reg r194:V, reg i102:*, reg i103:V, reg stop2:cls, reg r196:V, reg has_j:*, reg has_j1:V, reg c120:L, reg c122:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r197:V, reg c125:L, reg r198:V, reg j1:*, reg j2:V, reg length5:cls, reg r199:V, reg r200:V, reg c126:L, reg c127:V, reg c129:L, reg c130:V, reg has_i:*, reg has_i1:V, reg c132:L, reg c135:L, reg c136:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r201:V, reg c141:L, reg c142:L, reg r202:V, reg i104:*, reg i105:V, reg length6:cls, reg r203:V, reg r204:V, reg c143:L, reg c144:V, reg c147:L, reg c150:L, reg c151:V, reg has_j2:*, reg has_j3:V, reg r205:V, reg c152:L, reg c153:V, reg c156:L, reg c157:V, reg c159:L, reg x22:*, reg x23:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r208:V, reg r209:V, reg x24:*, reg x25:V, reg oldClass:cls, reg r210:V, reg l32:*, reg class__:cls, reg r211:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r212:V, reg r213:V, reg x26:*, reg x27:V, reg length7:cls, reg r214:V, reg _row_names_info:cls, reg x28:*, reg x29:V, reg p8:p(V +), reg r216:V, reg has_i2:*, reg has_i3:V, reg c160:L, reg c162:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r217:V, reg c165:L, reg r218:V, reg i106:*, reg i107:V, reg length8:cls, reg r219:V, reg c166:L, reg c167:V, reg c169:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r220:V, reg r221:V, reg i108:*, reg i109:V, reg anyNA:cls, reg r222:V, reg c170:L, reg stop3:cls, reg r223:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r225:V, reg r226:V, reg i110:*, reg i111:V, reg c171:L, reg c172:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r227:V, reg r228:V, reg x30:*, reg x31:V, reg attr:cls, reg r229:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r230:V, reg r231:V, reg i112:*, reg i113:V, reg rows:*, reg rows1:V, reg match:cls, reg r232:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r233:V, reg r234:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r235:V, reg r236:V, reg ii:*, reg ii1:V, reg is_na:cls, reg r237:V, reg sum2:cls, reg r238:V, reg nextra:*, reg nextra1:V, reg r239:V, reg c173:L, reg sym49:cls, reg base49:cls, reg guard49:L, reg r240:V, reg r241:V, reg nrows:*, reg nrows1:V, reg r242:V, reg nextra2:*, reg nextra3:V, reg seq_int:cls, reg r243:V, reg l33:*, reg c174:L, reg r245:V, reg l35:*, reg dr32:V, reg dc16:L, reg dx72:V, reg dx73:V, reg new_rows:*, reg new_rows1:V, reg ___3:cls, reg r248:V, reg i114:*, reg i115:V, reg c175:L, reg i117:V, reg dr34:V, reg dc17:L, reg dx74:V, reg dx75:V, reg new_rows2:*, reg new_rows3:V, reg __13:cls, reg r249:V, reg ii2:*, reg ii3:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r250:V, reg r251:V, reg i118:*, reg i119:V, reg c176:L, reg r252:V, reg c177:L, reg c179:V, reg char_i:*, reg char_i1:V, reg c180:L, reg c183:L, reg c184:V, reg nextra4:*, reg nextra5:V, reg c185:L, reg c186:V, reg c189:L, reg c190:L, reg c191:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r253:V, reg c198:L, reg c199:L, reg r254:V, reg i120:*, reg i121:V, reg r255:V, reg all2:cls, reg r256:V, reg c200:L, reg c204:L, reg c205:L, reg c206:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r257:V, reg c213:L, reg c214:L, reg c215:L, reg r258:V, reg i122:*, reg i123:V, reg max:cls, reg r259:V, reg nrows2:*, reg nrows3:V, reg r260:V, reg c216:L, reg c217:V, reg c221:L, reg c222:V, reg c225:L, reg c226:V, reg c228:L, reg sym53:cls, reg base53:cls, reg guard53:L, reg r261:V, reg r262:V, reg rows2:*, reg rows3:V, reg c229:V, reg c230:L, reg sym54:cls, reg base54:cls, reg guard54:L, reg r263:V, reg r264:V, reg x32:*, reg x33:V, reg attr1:cls, reg r265:V, reg char_i2:*, reg char_i3:V, reg r267:V, reg c231:L, reg nrows4:*, reg nrows5:V, reg r268:V, reg nn:*, reg nn1:V, reg r269:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r270:V, reg r271:V, reg value35:*, reg value36:V, reg inherits:cls, reg r272:V, reg c232:L, reg c234:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r273:V, reg c237:L, reg r274:V, reg value37:*, reg value38:V, reg dim5:cls, reg r275:V, reg c238:L, reg c240:L, reg r277:V, reg dr36:V, reg dc18:L, reg dx77:V, reg c242:L, reg dx78:V, reg __14:cls, reg r278:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r279:V, reg c245:L, reg dx81:V, reg r280:V, reg nrr:*, reg nrr1:V, reg length9:cls, reg r281:V, reg r282:V, reg c246:L, reg c247:V, reg c249:L, reg sym58:cls, reg base58:cls, reg guard58:L, reg r283:V, reg r284:V, reg value39:*, reg value40:V, reg attr2:cls, reg r285:V, reg c250:L, reg r287:V, reg dr38:V, reg dc19:L, reg dx82:V, reg dx83:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r290:V, reg r291:V, reg r292:V, reg nrr2:*, reg nrr3:V, reg r293:I, reg __15:cls, reg r294:V, reg duplicated:cls, reg new_rows4:*, reg new_rows5:V, reg p9:p(V +), reg r296:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r299:V, reg r300:V, reg r301:V, reg new_rows6:*, reg new_rows7:V, reg rows4:*, reg rows5:V, reg match1:cls, reg r302:V, reg r303:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r304:V, reg r305:V, reg repl:*, reg repl1:V, reg any:cls, reg r306:V, reg c251:L, reg nrr4:*, reg nrr5:V, reg c252:L, reg nrr7:V, reg dr40:V, reg dc20:L, reg dx84:V, reg dx85:V, reg repl2:*, reg repl3:V, reg __16:cls, reg r307:V, reg l36:*, reg c253:L, reg dx87:V, reg l38:*, reg dr42:V, reg dc21:L, reg dx89:V, reg dx90:V, reg dx91:V, reg repl4:*, reg repl5:V, reg ___4:cls, reg r308:V, reg dx92:V, reg dx93:V, reg nrr8:*, reg nrr9:V, reg xpdrows_data_frame:cls, reg x34:*, reg x35:V, reg p10:p(V +), reg rows6:*, reg rows7:V, reg p11:p(V +), reg new_rows8:*, reg new_rows9:V, reg p12:p(V +), reg r312:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r313:V, reg r314:V, reg x36:*, reg x37:V, reg attr3:cls, reg r315:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r316:V, reg r317:V, reg rows8:*, reg rows9:V, reg length10:cls, reg r318:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r320:V, reg r321:V, reg nrows6:*, reg nrows7:V, reg r322:I, reg c254:L, reg r324:V, reg dr44:V, reg dc22:L, reg dx95:V, reg dx96:V, reg i124:*, reg i125:V, reg __17:cls, reg r325:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r326:V, reg r327:V, reg iseq:*, reg iseq1:V, reg anyNA1:cls, reg r328:V, reg c255:L, reg stop4:cls, reg r329:V, reg r330:V, reg has_j4:*, reg has_j5:V, reg c256:L, reg sym66:cls, reg base66:cls, reg guard66:L, reg r332:V, reg r333:V, reg j3:*, reg j4:V, reg anyNA2:cls, reg r334:V, reg c257:L, reg stop5:cls, reg r335:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r337:V, reg r338:V, reg j5:*, reg j6:V, reg c258:L, reg c259:L, reg _in_1:cls, reg j7:*, reg j8:V, reg p13:p(V +), reg r340:V, reg c260:L, reg stop6:cls, reg r341:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r343:V, reg r344:V, reg j9:*, reg j10:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r345:V, reg r346:V, reg x38:*, reg x39:V, reg names2:cls, reg r347:V, reg match2:cls, reg r348:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r349:V, reg r350:V, reg jseq:*, reg jseq1:V, reg anyNA3:cls, reg r351:V, reg c261:L, reg sym71:cls, reg base71:cls, reg guard71:L, reg r352:V, reg r353:V, reg jseq2:*, reg jseq3:V, reg is_na1:cls, reg r354:V, reg nvars:*, reg nvars1:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r355:V, reg nvars4:V, reg r356:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r357:V, reg nvars7:V, reg r358:V, reg n12:*, reg n13:V, reg sum3:cls, reg r359:V, reg r360:I, reg r361:V, reg l39:*, reg c262:L, reg r363:V, reg l41:*, reg dr46:V, reg dc23:L, reg dx97:V, reg dx98:V, reg n14:*, reg n15:V, reg ___5:cls, reg r366:V, reg j11:*, reg j12:V, reg c263:L, reg j14:V, reg dr48:V, reg dc24:L, reg dx99:V, reg dx100:V, reg n16:*, reg n17:V, reg __18:cls, reg r367:V, reg dx101:V, reg dx102:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r368:V, reg r369:V, reg j15:*, reg j16:V, reg c264:L, reg c265:L, reg c266:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r370:V, reg c270:L, reg r371:V, reg j17:*, reg j18:V, reg min:cls, reg r372:V, reg r373:V, reg c271:L, reg c272:V, reg c274:L, reg sym76:cls, reg base76:cls, reg guard76:L, reg r374:V, reg r375:V, reg x40:*, reg x41:V, reg r376:I, reg c275:L, reg r378:V, reg dr50:V, reg dc25:L, reg dx103:V, reg dx104:V, reg j19:*, reg j20:V, reg __19:cls, reg r379:V, reg j21:*, reg j22:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r380:V, reg r381:V, reg jseq4:*, reg jseq5:V, reg max1:cls, reg r382:V, reg nvars8:*, reg nvars9:V, reg r383:V, reg c276:L, reg paste0:cls, reg sym78:cls, reg base78:cls, reg guard78:L, reg r384:V, reg r385:V, reg nvars10:*, reg nvars11:V, reg r386:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r387:V, reg r388:V, reg jseq6:*, reg jseq7:V, reg max2:cls, reg r389:V, reg seq_int1:cls, reg r390:V, reg p14:p(V +), reg r392:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r393:V, reg r394:V, reg new_cols:*, reg new_cols1:V, reg length11:cls, reg r395:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r398:V, reg r399:V, reg r400:V, reg jseq8:*, reg jseq9:V, reg nvars12:*, reg nvars13:V, reg r401:V, reg sum4:cls, reg r402:V, reg r403:V, reg c277:L, reg stop7:cls, reg r404:V, reg sym82:cls, reg base82:cls, reg guard82:L, reg r406:V, reg r407:V, reg value41:*, reg value42:V, reg is_list:cls, reg r408:V, reg c278:L, reg c280:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r409:V, reg c283:L, reg r410:V, reg sym84:cls, reg base84:cls, reg guard84:L, reg r411:V, reg c286:L, reg r412:V, reg value43:*, reg value44:V, reg names3:cls, reg r413:V, reg c287:V, reg r414:V, reg c288:L, reg c289:V, reg c291:L, reg sym85:cls, reg base85:cls, reg guard85:L, reg r415:V, reg r416:V, reg jseq10:*, reg jseq11:V, reg length12:cls, reg r417:V, reg sym86:cls, reg base86:cls, reg guard86:L, reg r418:V, reg r419:V, reg vnm:*, reg vnm1:V, reg length13:cls, reg r420:V, reg p15:*, reg p16:V, reg r421:V, reg c292:L, reg sym87:cls, reg base87:cls, reg guard87:L, reg r422:V, reg r423:V, reg vnm2:*, reg vnm3:V, reg p17:*, reg p18:V, reg rep_len:cls, reg r424:V, reg vnm4:*, reg vnm5:V, reg c293:L, reg vnm7:V, reg dr52:V, reg dc26:L, reg dx105:V, reg dx106:V, reg jseq12:*, reg jseq13:V, reg nvars14:*, reg nvars15:V, reg r426:V, reg __20:cls, reg r427:V, reg dx107:V, reg sym88:cls, reg base88:cls, reg guard88:L, reg r428:V, reg r429:V, reg x42:*, reg x43:V, reg r430:I, reg has_i4:*, reg has_i5:V, reg c294:L, reg c296:V, reg sym89:cls, reg base89:cls, reg guard89:L, reg r431:V, reg c299:L, reg r432:V, reg iseq2:*, reg iseq3:V, reg length14:cls, reg r433:V, reg r434:V, reg c300:L, reg c301:V, reg c303:L, reg c305:V, reg sym90:cls, reg base90:cls, reg guard90:L, reg r435:V, reg c308:L, reg r436:V, reg jseq14:*, reg jseq15:V, reg r437:V, reg jseq16:*, reg jseq17:V, reg nvars16:*, reg nvars17:V, reg r438:V, reg r439:V, reg all3:cls, reg r440:V, reg c309:L, reg c310:V, reg c312:L, reg sym91:cls, reg base91:cls, reg guard91:L, reg r441:V, reg r442:V, reg x44:*, reg x45:V, reg cl:*, reg cl1:V, reg class__1:cls, reg r443:V, reg anyDuplicated:cls, reg jseq18:*, reg jseq19:V, reg p19:p(V +), reg r447:V, reg c313:L, reg stop8:cls, reg r448:V, reg sym92:cls, reg base92:cls, reg guard92:L, reg r450:V, reg r451:V, reg iseq4:*, reg iseq5:V, reg length15:cls, reg r452:V, reg n18:*, reg n19:V, reg r453:V, reg c314:L, reg nrows8:*, reg nrows9:V, reg sym93:cls, reg base93:cls, reg guard93:L, reg r454:V, reg r455:V, reg jseq20:*, reg jseq21:V, reg length16:cls, reg r456:V, reg sym94:cls, reg base94:cls, reg guard94:L, reg r457:V, reg r458:V, reg value45:*, reg value46:V, reg c315:V, reg c316:L, reg sym95:cls, reg base95:cls, reg guard95:L, reg r459:V, reg r460:V, reg list:cls, reg r461:V, reg sym96:cls, reg base96:cls, reg guard96:L, reg r463:V, reg r464:V, reg value47:*, reg value48:V, reg length17:cls, reg r465:V, reg sym97:cls, reg base97:cls, reg guard97:L, reg r466:V, reg r467:V, reg value49:*, reg value50:V, reg is_list1:cls, reg r468:V, reg r469:V, reg c317:L, reg p20:*, reg p21:V, reg r470:V, reg c318:L, reg NROW:cls, reg value51:*, reg value52:V, reg p22:p(V +), reg r472:V, reg N19:*, reg N20:V, reg n20:*, reg n21:V, reg r473:V, reg c319:L, reg stop9:cls, reg sprintf:cls, reg ngettext:cls, reg N21:*, reg N22:V, reg p23:p(V +), reg r475:V, reg p24:p(V +), reg N23:*, reg N24:V, reg p25:p(V +), reg n22:*, reg n23:V, reg p26:p(V +), reg r479:V, reg p27:p(V +), reg r481:V, reg N25:*, reg N26:V, reg n24:*, reg n25:V, reg r483:V, reg c320:L, reg c322:V, reg N27:*, reg N28:V, reg r484:V, reg c323:L, reg c324:V, reg c326:L, reg n26:*, reg n27:V, reg N29:*, reg N30:V, reg __21:cls, reg r485:V, reg r486:V, reg c327:L, reg c329:V, reg sym98:cls, reg base98:cls, reg guard98:L, reg r487:V, reg c332:L, reg r488:V, reg sym99:cls, reg base99:cls, reg guard99:L, reg r489:V, reg c335:L, reg r490:V, reg value53:*, reg value54:V, reg dim6:cls, reg r491:V, reg length18:cls, reg r492:V, reg r493:V, reg c336:L, reg c337:V, reg c339:L, reg sym100:cls, reg base100:cls, reg guard100:L, reg r494:V, reg r495:V, reg rep2:cls, reg r496:V, reg r497:V, reg stop10:cls, reg sprintf1:cls, reg ngettext1:cls, reg N31:*, reg N32:V, reg p28:p(V +), reg r499:V, reg p29:p(V +), reg N33:*, reg N34:V, reg p30:p(V +), reg nrows11:*, reg nrows12:V, reg p31:p(V +), reg r503:V, reg p32:p(V +), reg r505:V, reg sym101:cls, reg base101:cls, reg guard101:L, reg r507:V, reg r508:V, reg sym102:cls, reg base102:cls, reg guard102:L, reg r509:V, reg r510:V, reg value55:*, reg value56:V, reg names4:cls, reg r511:V, reg c340:V, reg r512:V, reg c341:L, reg l42:*, reg names__1:cls, reg r513:V, reg sym103:cls, reg base103:cls, reg guard103:L, reg r515:V, reg r516:V, reg value57:*, reg value58:V, reg list1:cls, reg r517:V, reg m:*, reg m1:V, reg n28:*, reg n29:V, reg p33:*, reg p34:V, reg r519:V, reg r520:V, reg c342:L, reg c344:V, reg m2:*, reg m3:V, reg r521:V, reg c345:L, reg c346:L, reg c347:V, reg n30:*, reg n31:V, reg p35:*, reg p36:V, reg r522:V, reg m4:*, reg m5:V, reg __22:cls, reg r523:V, reg c350:L, reg c351:V, reg c354:L, reg c355:V, reg c357:L, reg stop11:cls, reg sprintf2:cls, reg ngettext2:cls, reg m6:*, reg m7:V, reg p37:p(V +), reg r525:V, reg p38:p(V +), reg m8:*, reg m9:V, reg p39:p(V +), reg n32:*, reg n33:V, reg p40:*, reg p41:V, reg r528:V, reg p42:p(V +), reg r530:V, reg p43:p(V +), reg r532:V, reg matrix:cls, reg value59:*, reg value60:V, reg p44:p(V +), reg n34:*, reg n35:V, reg p45:p(V +), reg p46:*, reg p47:V, reg p48:p(V +), reg r537:V, reg split:cls, reg sym104:cls, reg base104:cls, reg guard104:L, reg r538:V, reg r539:V, reg value61:*, reg value62:V, reg c358:cls, reg r540:V, reg p49:p(V +), reg col:cls, reg value63:*, reg value64:V, reg p50:p(V +), reg r543:V, reg p51:p(V +), reg r545:V, reg sym105:cls, reg base105:cls, reg guard105:L, reg r546:V, reg r547:V, reg n36:*, reg n37:V, reg p52:*, reg p53:V, reg c359:cls, reg r548:V, reg sym106:cls, reg base106:cls, reg guard106:L, reg r550:V, reg r551:V, reg value65:*, reg value66:V, reg unclass:cls, reg r552:V, reg vapply:cls, reg value67:*, reg value68:V, reg p54:p(V +), reg NROW1:*, reg NROW2:V, reg p55:p(V +), reg r555:V, reg sym107:cls, reg base107:cls, reg guard107:L, reg r556:V, reg r557:V, reg lens:*, reg lens1:V, reg r558:I, reg s1:V, reg l43:I, reg i126:I, reg i127:I, reg i128:I, reg c360:L, reg x46:V, reg lens2:*, reg lens3:V, reg c361:L, reg i132:I, reg lens5:V, reg dr54:V, reg dc27:L, reg dx109:V, reg i134:I, reg dx110:V, reg k:*, reg k1:V, reg __23:cls, reg r559:V, reg n38:*, reg n39:V, reg N35:*, reg N36:V, reg r560:V, reg c362:L, reg i136:I, reg c364:V, reg sym108:cls, reg base108:cls, reg guard108:L, reg r561:V, reg i139:I, reg c367:L, reg r562:V, reg sym109:cls, reg base109:cls, reg guard109:L, reg r563:V, reg i142:I, reg c370:L, reg r564:V, reg value69:*, reg value70:V, reg c371:L, reg i144:I, reg c373:L, reg value72:V, reg dr56:V, reg dc28:L, reg dx111:V, reg i146:I, reg c375:L, reg dx112:V, reg k2:*, reg k3:V, reg __24:cls, reg r565:V, reg dim7:cls, reg r566:V, reg length19:cls, reg r567:V, reg r568:V, reg c376:L, reg c377:V, reg c379:L, reg stop12:cls, reg sprintf3:cls, reg ngettext3:cls, reg N37:*, reg N38:V, reg p56:p(V +), reg r570:V, reg p57:p(V +), reg k4:*, reg k5:V, reg p58:p(V +), reg N39:*, reg N40:V, reg p59:p(V +), reg n40:*, reg n41:V, reg p60:p(V +), reg r575:V, reg p61:p(V +), reg r577:V, reg i150:I, reg N41:*, reg N42:V, reg r579:V, reg c380:L, reg i152:I, reg c382:V, reg N43:*, reg N44:V, reg n42:*, reg n43:V, reg r580:V, reg c383:L, reg c384:V, reg c386:L, reg i155:I, reg c388:V, reg n44:*, reg n45:V, reg N45:*, reg N46:V, reg __25:cls, reg r581:V, reg c389:L, reg c390:V, reg c392:L, reg stop13:cls, reg sprintf4:cls, reg ngettext4:cls, reg N47:*, reg N48:V, reg p62:p(V +), reg r583:V, reg p63:p(V +), reg k6:*, reg k7:V, reg p64:p(V +), reg N49:*, reg N50:V, reg p65:p(V +), reg n46:*, reg n47:V, reg p66:p(V +), reg r588:V, reg p67:p(V +), reg r590:V, reg i159:I, reg N51:*, reg N52:V, reg r592:V, reg c393:L, reg i161:I, reg c395:V, reg N53:*, reg N54:V, reg n48:*, reg n49:V, reg r593:V, reg c396:L, reg c397:V, reg c399:L, reg sym110:cls, reg base110:cls, reg guard110:L, reg r594:V, reg i167:I, reg r595:V, reg rep3:cls, reg r596:V, reg l44:*, reg c400:L, reg i169:I, reg r598:V, reg l46:*, reg dr58:V, reg dc29:L, reg dx113:V, reg i171:I, reg r600:V, reg dx114:V, reg k8:*, reg k9:V, reg ____2:cls, reg r601:V, reg i172:I, reg N55:*, reg N56:V, reg n50:*, reg n51:V, reg r603:V, reg c401:L, reg warning2:cls, reg sprintf5:cls, reg ngettext5:cls, reg N57:*, reg N58:V, reg p68:p(V +), reg r605:V, reg p69:p(V +), reg k10:*, reg k11:V, reg p70:p(V +), reg N59:*, reg N60:V, reg p71:p(V +), reg n52:*, reg n53:V, reg p72:p(V +), reg r610:V, reg p73:p(V +), reg r612:V, reg value73:*, reg value74:V, reg c402:L, reg i176:I, reg value76:V, reg dr60:V, reg dc30:L, reg dx115:V, reg i178:I, reg dx116:V, reg k12:*, reg k13:V, reg __26:cls, reg r613:V, reg c403:L, reg i180:I, reg dx118:V, reg dr62:V, reg dc31:L, reg dx119:V, reg i182:I, reg dx120:V, reg sym111:cls, reg base111:cls, reg guard111:L, reg r614:V, reg i185:I, reg dx123:V, reg r615:V, reg n54:*, reg n55:V, reg r616:I, reg __27:cls, reg r617:V, reg l47:*, reg c404:L, reg i187:I, reg dx125:V, reg l49:*, reg dr64:V, reg dc32:L, reg dx127:V, reg i189:I, reg dx128:V, reg dx129:V, reg k14:*, reg k15:V, reg ____3:cls, reg r618:V, reg i190:I, reg sym112:cls, reg base112:cls, reg guard112:L, reg r619:V, reg r620:V, reg n56:*, reg n57:V, reg sym113:cls, reg base113:cls, reg guard113:L, reg r621:V, reg r622:V, reg value77:*, reg value78:V, reg length20:cls, reg r623:V, reg c405:cls, reg r624:V, reg dimv:*, reg dimv1:V, reg c406:L, reg dimv3:V, reg dr66:V, reg dc33:L, reg dx131:V, reg dx132:V, reg __28:cls, reg r625:V, reg nrowv:*, reg nrowv1:V, reg n58:*, reg n59:V, reg r626:V, reg c407:L, reg c409:V, reg nrowv2:*, reg nrowv3:V, reg r627:V, reg c410:L, reg c411:V, reg c413:L, reg n60:*, reg n61:V, reg nrowv4:*, reg nrowv5:V, reg __29:cls, reg r628:V, reg r629:V, reg c414:L, reg value79:*, reg value80:V, reg c415:L, reg value82:V, reg dr68:V, reg dc34:L, reg dx133:V, reg dx134:V, reg sym114:cls, reg base114:cls, reg guard114:L, reg r630:V, reg r631:V, reg sym115:cls, reg base115:cls, reg guard115:L, reg r632:V, reg value88:V, reg r633:V, reg nrowv6:*, reg nrowv7:V, reg r634:I, reg n62:*, reg n63:V, reg rep_len1:cls, reg r635:V, reg __30:cls, reg r636:V, reg dx135:V, reg stop14:cls, reg sprintf6:cls, reg ngettext6:cls, reg nrowv8:*, reg nrowv9:V, reg p74:p(V +), reg r638:V, reg p75:p(V +), reg nrowv10:*, reg nrowv11:V, reg p76:p(V +), reg n64:*, reg n65:V, reg p77:p(V +), reg r642:V, reg p78:p(V +), reg r644:V, reg nrowv12:*, reg nrowv13:V, reg n66:*, reg n67:V, reg r645:V, reg c416:L, reg warning3:cls, reg sprintf7:cls, reg ngettext7:cls, reg nrowv14:*, reg nrowv15:V, reg p79:p(V +), reg r647:V, reg p80:p(V +), reg nrowv16:*, reg nrowv17:V, reg p81:p(V +), reg n68:*, reg n69:V, reg p82:p(V +), reg r651:V, reg p83:p(V +), reg r653:V, reg dimv4:*, reg dimv5:V, reg c417:L, reg dimv7:V, reg dr70:V, reg dc35:L, reg dx137:V, reg dx138:V, reg __31:cls, reg r654:V, reg sym116:cls, reg base116:cls, reg guard116:L, reg r655:V, reg r656:V, reg p84:*, reg p85:V, reg r657:I, reg ncolv:*, reg ncolv1:V, reg p86:*, reg p87:V, reg r658:V, reg c418:L, reg sym117:cls, reg base117:cls, reg guard117:L, reg r659:V, reg r660:V, reg sym118:cls, reg base118:cls, reg guard118:L, reg r661:V, reg r662:V, reg ncolv2:*, reg ncolv3:V, reg r663:I, reg p88:*, reg p89:V, reg rep_len2:cls, reg r664:V, reg p90:*, reg p91:V, reg r666:V, reg c419:L, reg c421:V, reg ncolv4:*, reg ncolv5:V, reg p92:*, reg p93:V, reg r667:V, reg c422:L, reg c423:V, reg c425:L, reg warning4:cls, reg sprintf8:cls, reg ngettext8:cls, reg ncolv6:*, reg ncolv7:V, reg p94:p(V +), reg r669:V, reg p95:p(V +), reg ncolv8:*, reg ncolv9:V, reg p96:p(V +), reg p97:*, reg p98:V, reg p99:p(V +), reg r673:V, reg p100:p(V +), reg r675:V, reg new_cols2:*, reg new_cols3:V, reg c426:L, reg new_cols5:V, reg dr72:V, reg dc36:L, reg dx139:V, reg dx140:V, reg sym119:cls, reg base119:cls, reg guard119:L, reg r676:V, reg new_cols8:V, reg r677:V, reg p101:*, reg p102:V, reg r678:I, reg __32:cls, reg r679:V, reg sym120:cls, reg base120:cls, reg guard120:L, reg r680:V, reg r681:V, reg new_cols9:*, reg new_cols10:V, reg length21:cls, reg r682:V, reg c427:L, reg sym121:cls, reg base121:cls, reg guard121:L, reg r683:V, reg r684:V, reg x47:*, reg x48:V, reg names5:cls, reg r685:V, reg _row_names_info1:cls, reg x49:*, reg x50:V, reg p103:p(V +), reg r687:V, reg sym122:cls, reg base122:cls, reg guard122:L, reg r688:V, reg r689:V, reg x51:*, reg x52:V, reg attributes:cls, reg r690:V, reg l50:*, reg c428:L, reg r692:dots, reg l52:*, reg dr74:V, reg dc37:L, reg dx141:V, reg dx142:V, reg ___6:cls, reg r695:V, reg sym123:cls, reg base123:cls, reg guard123:L, reg r696:V, reg r697:V, reg x53:*, reg x54:V, reg sym124:cls, reg base124:cls, reg guard124:L, reg r698:V, reg r699:V, reg sym125:cls, reg base125:cls, reg guard125:L, reg r700:V, reg r701:V, reg new_cols11:*, reg new_cols12:V, reg length22:cls, reg r702:V, reg vector:cls, reg r703:V, reg c429:cls, reg r704:V, reg a:*, reg a1:V, reg l53:*, reg attributes__:cls, reg r705:V, reg sym126:cls, reg base126:cls, reg guard126:L, reg r706:V, reg r707:V, reg nm:*, reg nm1:V, reg new_cols13:*, reg new_cols14:V, reg c430:cls, reg r708:V, reg l54:*, reg names__2:cls, reg r709:V, reg rows10:*, reg rows11:V, reg l55:*, reg attr__:cls, reg r710:V, reg has_i6:*, reg has_i7:V, reg c431:L, reg sym127:cls, reg base127:cls, reg guard127:L, reg r711:V, reg r712:V, reg p104:*, reg p105:V, reg r713:I, reg s2:V, reg l56:I, reg i191:I, reg i192:I, reg i193:I, reg c432:L, reg x55:V, reg jseq22:*, reg jseq23:V, reg c433:L, reg i197:I, reg jseq25:V, reg dr76:V, reg dc38:L, reg dx143:V, reg i199:I, reg dx144:V, reg jjj:*, reg jjj1:V, reg __33:cls, reg r714:V, reg value89:*, reg value90:V, reg c434:L, reg i201:I, reg value92:V, reg dr78:V, reg dc39:L, reg dx145:V, reg i203:I, reg dx146:V, reg jvseq:*, reg jvseq1:V, reg c435:L, reg i205:I, reg value94:V, reg jvseq3:V, reg dr80:V, reg dc40:L, reg dx147:V, reg i207:I, reg value96:V, reg dx148:V, reg jjj2:*, reg jjj3:V, reg __34:cls, reg r715:V, reg __35:cls, reg r716:V, reg jj:*, reg jj1:V, reg nvars18:*, reg nvars19:V, reg r717:V, reg c436:L, reg sym128:cls, reg base128:cls, reg guard128:L, reg r718:V, reg i212:I, reg r719:V, reg sym129:cls, reg base129:cls, reg guard129:L, reg r720:V, reg i215:I, reg r721:V, reg x56:*, reg x57:V, reg c437:L, reg i217:I, reg x59:V, reg dr82:V, reg dc41:L, reg dx149:V, reg i219:I, reg dx150:V, reg jj2:*, reg jj3:V, reg __36:cls, reg r722:V, reg dim8:cls, reg r723:V, reg length23:cls, reg r724:V, reg r725:V, reg c438:L, reg vjj:*, reg vjj1:V, reg l57:*, reg c439:L, reg i223:I, reg vjj4:V, reg l60:*, reg vjj5:V, reg l61:*, reg dr84:V, reg dc42:L, reg dx151:V, reg i225:I, reg vjj8:V, reg l63:*, reg vjj9:V, reg dx152:V, reg jj4:*, reg jj5:V, reg __37:cls, reg r726:V, reg c440:L, reg i227:I, reg vjj11:V, reg l65:*, reg dx154:V, reg dr86:V, reg dc43:L, reg dx155:V, reg i229:I, reg vjj13:V, reg l67:*, reg dx156:V, reg iseq6:*, reg iseq7:V, reg ___7:cls, reg r727:V, reg c441:L, reg i231:I, reg vjj15:V, reg l69:*, reg dr88:V, reg dc44:L, reg dx157:V, reg i233:I, reg vjj17:V, reg dx158:V, reg jj6:*, reg jj7:V, reg ____4:cls, reg r728:V, reg i234:I, reg vjj18:V, reg vjj19:*, reg vjj20:V, reg l70:*, reg c442:L, reg i236:I, reg vjj23:V, reg l73:*, reg vjj24:V, reg l74:*, reg dr90:V, reg dc45:L, reg dx159:V, reg i238:I, reg vjj27:V, reg l76:*, reg vjj28:V, reg dx160:V, reg jj8:*, reg jj9:V, reg __38:cls, reg r729:V, reg c443:L, reg i240:I, reg vjj30:V, reg l78:*, reg dx162:V, reg dr92:V, reg dc46:L, reg dx163:V, reg i242:I, reg vjj32:V, reg l80:*, reg dx164:V, reg iseq8:*, reg iseq9:V, reg ___8:cls, reg r730:V, reg c444:L, reg i244:I, reg vjj34:V, reg l82:*, reg dr94:V, reg dc47:L, reg dx165:V, reg i246:I, reg vjj36:V, reg dx166:V, reg jj10:*, reg jj11:V, reg ____5:cls, reg r731:V, reg i247:I, reg vjj38:*, reg vjj39:V, reg c445:L, reg i249:I, reg vjj41:V, reg dr96:V, reg dc48:L, reg dx167:V, reg i251:I, reg dx168:V, reg __39:cls, reg r732:V, reg l83:*, reg c446:L, reg i253:I, reg dx170:V, reg l85:*, reg dr98:V, reg dc49:L, reg dx172:V, reg i255:I, reg dx174:V, reg jj12:*, reg jj13:V, reg ____6:cls, reg r733:V, reg sym130:cls, reg base130:cls, reg guard130:L, reg r734:V, reg i258:I, reg r735:V, reg sym131:cls, reg base131:cls, reg guard131:L, reg r736:V, reg i261:I, reg r737:V, reg vjj42:*, reg vjj43:V, reg dim9:cls, reg r738:V, reg length24:cls, reg r739:V, reg r740:V, reg c447:L, reg nrows13:*, reg nrows14:V, reg ncol1:cls, reg vjj44:*, reg vjj45:V, reg p106:p(V +), reg r742:V, reg r743:V, reg l86:*, reg c448:L, reg i265:I, reg r746:V, reg l89:*, reg r747:V, reg l90:*, reg dr100:V, reg dc50:L, reg dx175:V, reg i267:I, reg r750:V, reg l92:*, reg r751:V, reg dx176:V, reg jj14:*, reg jj15:V, reg __40:cls, reg r752:V, reg length__:cls, reg r753:V, reg c449:L, reg i269:I, reg r755:V, reg l94:*, reg dr102:V, reg dc51:L, reg dx177:V, reg i271:I, reg dx178:V, reg jj16:*, reg jj17:V, reg ____7:cls, reg r758:V, reg sym132:cls, reg base132:cls, reg guard132:L, reg r759:V, reg i274:I, reg r760:V, reg nrows15:*, reg nrows16:V, reg ncol2:cls, reg vjj46:*, reg vjj47:V, reg p107:p(V +), reg r762:V, reg c450:cls, reg r763:V, reg l95:*, reg c451:L, reg i276:I, reg r766:V, reg l98:*, reg r767:V, reg l99:*, reg dr104:V, reg dc52:L, reg dx179:V, reg i278:I, reg r770:V, reg l101:*, reg r771:V, reg dx180:V, reg jj18:*, reg jj19:V, reg __41:cls, reg r772:V, reg dim__1:cls, reg r773:V, reg c452:L, reg i280:I, reg r775:V, reg l103:*, reg dr106:V, reg dc53:L, reg dx181:V, reg i282:I, reg dx182:V, reg jj20:*, reg jj21:V, reg ____8:cls, reg r778:V, reg vjj48:*, reg vjj49:V, reg l104:*, reg c453:L, reg i284:I, reg vjj52:V, reg l107:*, reg vjj53:V, reg l108:*, reg dr108:V, reg dc54:L, reg dx183:V, reg i286:I, reg vjj56:V, reg l110:*, reg vjj57:V, reg dx184:V, reg jj22:*, reg jj23:V, reg __42:cls, reg r779:V, reg c454:L, reg i288:I, reg vjj59:V, reg l112:*, reg dx186:V, reg dr110:V, reg dc55:L, reg dx187:V, reg i290:I, reg vjj61:V, reg l114:*, reg dx188:V, reg iseq10:*, reg iseq11:V, reg ___9:cls, reg r780:V, reg c455:L, reg i292:I, reg vjj63:V, reg l116:*, reg dr112:V, reg dc56:L, reg dx189:V, reg i294:I, reg vjj65:V, reg dx190:V, reg jj24:*, reg jj25:V, reg ____9:cls, reg r781:V, reg nrows17:*, reg nrows18:V, reg l117:*, reg c456:L, reg i296:I, reg nrows21:V, reg l120:*, reg nrows22:V, reg l121:*, reg dr114:V, reg dc57:L, reg dx191:V, reg i298:I, reg nrows25:V, reg l123:*, reg nrows26:V, reg dx192:V, reg jj26:*, reg jj27:V, reg __43:cls, reg r782:V, reg length__1:cls, reg r783:V, reg c457:L, reg i300:I, reg nrows28:V, reg l125:*, reg dr116:V, reg dc58:L, reg dx193:V, reg i302:I, reg dx194:V, reg jj28:*, reg jj29:V, reg ____10:cls, reg r784:V, reg vjj66:*, reg vjj67:V, reg l126:*, reg c458:L, reg i304:I, reg vjj70:V, reg l129:*, reg vjj71:V, reg l130:*, reg dr118:V, reg dc59:L, reg dx195:V, reg i306:I, reg vjj74:V, reg l132:*, reg vjj75:V, reg dx196:V, reg jj30:*, reg jj31:V, reg __44:cls, reg r785:V, reg c459:L, reg i308:I, reg vjj77:V, reg l134:*, reg dx198:V, reg dr120:V, reg dc60:L, reg dx199:V, reg i310:I, reg vjj79:V, reg l136:*, reg dx200:V, reg iseq12:*, reg iseq13:V, reg ___10:cls, reg r786:V, reg c460:L, reg i312:I, reg vjj81:V, reg l138:*, reg dr122:V, reg dc61:L, reg dx201:V, reg i314:I, reg vjj83:V, reg dx202:V, reg jj32:*, reg jj33:V, reg ____11:cls, reg r787:V, reg p108:*, reg p109:V, reg r788:V, reg c461:L, reg order1:cls, reg jseq26:*, reg jseq27:V, reg p110:p(V +), reg r790:V, reg c462:L, reg r792:V, reg dr124:V, reg dc62:L, reg dx203:V, reg dx204:V, reg p111:*, reg p112:V, reg r793:V, reg __45:cls, reg r794:V, reg s3:V, reg l139:I, reg i316:I, reg i317:I, reg i318:I, reg c463:L, reg x60:V, reg jseq28:*, reg jseq29:V, reg c464:L, reg i322:I, reg jseq31:V, reg dr126:V, reg dc63:L, reg dx205:V, reg i324:I, reg dx206:V, reg jjj4:*, reg jjj5:V, reg __46:cls, reg r795:V, reg value97:*, reg value98:V, reg c465:L, reg i326:I, reg value100:V, reg dr128:V, reg dc64:L, reg dx207:V, reg i328:I, reg dx208:V, reg jvseq4:*, reg jvseq5:V, reg c466:L, reg i330:I, reg value102:V, reg jvseq7:V, reg dr130:V, reg dc65:L, reg dx209:V, reg i332:I, reg value104:V, reg dx210:V, reg jjj6:*, reg jjj7:V, reg __47:cls, reg r796:V, reg __48:cls, reg r797:V, reg sym133:cls, reg base133:cls, reg guard133:L, reg r798:V, reg i335:I, reg r799:V, reg v12:*, reg v13:V, reg c467:V, reg r800:V, reg c468:L, reg i337:I, reg c470:V, reg nrows31:*, reg nrows32:V, reg r801:V, reg c471:L, reg c472:V, reg c474:L, reg i340:I, reg c476:V, reg sym134:cls, reg base134:cls, reg guard134:L, reg r802:V, reg i343:I, reg c479:L, reg r803:V, reg v14:*, reg v15:V, reg length25:cls, reg r804:V, reg r805:V, reg c480:L, reg c481:V, reg c483:L, reg nrows33:*, reg nrows34:V, reg l140:*, reg length__2:cls, reg r806:V, reg i347:I, reg v16:*, reg v17:V, reg l141:*, reg c484:L, reg i349:I, reg v19:V, reg l143:*, reg dr132:V, reg dc66:L, reg dx211:V, reg i351:I, reg dx212:V, reg jj34:*, reg jj35:V, reg ____12:cls, reg r807:V, reg sym135:cls, reg base135:cls, reg guard135:L, reg r808:V, reg i354:I, reg r809:V, reg v22:*, reg v23:V, reg c485:V, reg r810:V, reg c486:L, reg i356:I, reg c488:V, reg sym136:cls, reg base136:cls, reg guard136:L, reg r811:V, reg i359:I, reg c491:L, reg r812:V, reg x61:*, reg x62:V, reg c492:L, reg i361:I, reg c494:L, reg x64:V, reg dr134:V, reg dc67:L, reg dx213:V, reg i363:I, reg c496:L, reg dx214:V, reg jj36:*, reg jj37:V, reg __49:cls, reg r813:V, reg is_atomic1:cls, reg r814:V, reg c497:L, reg c498:V, reg c500:L, reg i366:I, reg c502:V, reg sym137:cls, reg base137:cls, reg guard137:L, reg r815:V, reg i369:I, reg c505:L, reg r816:V, reg sym138:cls, reg base138:cls, reg guard138:L, reg r817:V, reg i372:I, reg c508:L, reg r818:V, reg x65:*, reg x66:V, reg c509:L, reg i374:I, reg c511:L, reg x68:V, reg dr136:V, reg dc68:L, reg dx215:V, reg i376:I, reg c513:L, reg dx216:V, reg jj38:*, reg jj39:V, reg __50:cls, reg r819:V, reg names6:cls, reg r820:V, reg c514:V, reg r821:V, reg c515:L, reg c516:V, reg c518:L, reg l144:*, reg c519:L, reg i381:I, reg r824:dots, reg l147:*, reg r825:dots, reg l148:*, reg dr138:V, reg dc69:L, reg dx217:V, reg i383:I, reg r828:dots, reg l150:*, reg r829:dots, reg dx218:V, reg jj40:*, reg jj41:V, reg __51:cls, reg r830:V, reg names__3:cls, reg r831:V, reg c520:L, reg i385:I, reg r833:dots, reg l152:*, reg dr140:V, reg dc70:L, reg dx219:V, reg i387:I, reg r835:dots, reg dx220:V, reg jj42:*, reg jj43:V, reg ____13:cls, reg r836:V, reg i388:I, reg sym139:cls, reg base139:cls, reg guard139:L, reg r838:V, reg r839:V, reg new_cols15:*, reg new_cols16:V, reg length26:cls, reg r840:V, reg r841:V, reg c521:L, reg sym140:cls, reg base140:cls, reg guard140:L, reg r842:V, reg r843:V, reg x69:*, reg x70:V, reg names7:cls, reg r844:V, reg anyDuplicated1:cls, reg new_cols17:*, reg new_cols18:V, reg p113:p(V +), reg r846:V, reg c522:L, reg make_unique:cls, reg new_cols19:*, reg new_cols20:V, reg p114:p(V +), reg r848:V, reg l153:*, reg names__4:cls, reg r849:V, reg r850:V, reg cl2:*, reg cl3:V, reg l154:*, reg class__2:cls, reg r852:V, reg x71:*, reg x72:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L380() else L381();
  L0(r1):
    r13 = `!`(r1);
    c1 = `as.logical`(r13);
    if c1 then L385() else L1();
  L380():
    _in_ = ldf `%in%`;
    check L382() else D0();
  L381():
    r = dyn base(<lang `%in%`(names(sys.call()), c("", "value"))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    goto L2();
  L2():
    sym3 = ldf nargs;
    base3 = ldf nargs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L389() else L390();
  L382():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      sys_call = ldf `sys.call`;
      r4 = dyn sys_call();
      names = ldf names in base;
      r5 = dyn names(r4);
      goto L0(r5);
    L2():
      r2 = dyn base1(<lang sys.call()>);
      goto L0(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c("", "value");
      goto L0(r9);
    L2():
      r7 = dyn base2("", "value");
      goto L0(r7);
    };
    r11 = dyn _in_(p, p1);
    check L383() else D1();
  L385():
    warning = ldf warning;
    check L386() else D3();
  D1():
    deopt 6 [r11];
  D3():
    deopt 11 [];
  L3(r17):
    st nA = r17;
    nA = ld nA;
    check L392() else D6();
  L383():
    all = ldf all in base;
    r12 = dyn all(r11);
    check L384() else D2();
  L386():
    r14 = dyn warning("named arguments are discouraged");
    check L387() else D4();
  L389():
    nargs = ldf nargs in base;
    r18 = dyn nargs();
    check L391() else D5();
  L390():
    r16 = dyn base3();
    goto L3(r16);
  D2():
    deopt 8 [r12];
  D4():
    deopt 13 [r14];
  D5():
    deopt 19 [r18];
  D6():
    deopt 21 [nA];
  L384():
    goto L0(r12);
  L387():
    goto L2();
  L391():
    goto L3(r18);
  L392():
    nA1 = force? nA;
    checkMissing(nA1);
    r19 = `==`(nA1, 4);
    c2 = `as.logical`(r19);
    if c2 then L393() else L4();
  L4():
    nA2 = ld nA;
    check L399() else D7();
  L7():
    has_j = ld `has.j`;
    check L663() else D114();
  L393():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L394() else L395();
  D7():
    deopt 35 [nA2];
  D114():
    deopt 448 [has_j];
  L5(r21):
    r23 = `!`(r21);
    st `has.i` = r23;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L396() else L397();
  L394():
    missing = ldf missing in base;
    r22 = dyn missing(<sym i>);
    goto L5(r22);
  L395():
    r20 = dyn base4(<sym i>);
    goto L5(r20);
  L399():
    nA3 = force? nA2;
    checkMissing(nA3);
    r29 = `==`(nA3, 3);
    c3 = `as.logical`(r29);
    if c3 then L400() else L8();
  L663():
    has_j1 = force? has_j;
    checkMissing(has_j1);
    c120 = `as.logical`(has_j1);
    if c120 then L664() else L95(c120);
  L6(r25):
    r27 = `!`(r25);
    st `has.j` = r27;
    goto L7();
  L8():
    stop2 = ldf stop;
    check L661() else D112();
  L95(c122):
    c129 = `as.logical`(c122);
    if c129 then L97(c129) else L670();
  L396():
    missing1 = ldf missing in base;
    r26 = dyn missing1(<sym j>);
    goto L6(r26);
  L397():
    r24 = dyn base5(<sym j>);
    goto L6(r24);
  L400():
    sym6 = ldf `is.atomic`;
    base6 = ldf `is.atomic` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L401() else L402();
  L664():
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L665() else L666();
  D112():
    deopt 445 [];
  L9(r31):
    c4 = `as.logical`(r31);
    if c4 then L405() else L10(c4);
  L96(c125, r198):
    r200 = `!`(r198);
    c126 = `as.logical`(r200);
    c127 = `&&`(c125, c126);
    goto L95(c127);
  L97(c130):
    c159 = `as.logical`(c130);
    if c159 then L682() else L101();
  L401():
    value1 = ld value;
    check L403() else D8();
  L402():
    r30 = dyn base6(<sym value>);
    goto L9(r30);
  L661():
    r196 = dyn stop2("need 0, 1, or 2 subscripts");
    check L662() else D113();
  L665():
    j1 = ld j;
    check L667() else D115();
  L666():
    r197 = dyn base38(<sym j>);
    goto L96(c120, r197);
  L670():
    has_i = ld `has.i`;
    check L671() else D117();
  D8():
    deopt 41 [value1];
  D113():
    deopt 447 [r196];
  D115():
    deopt 452 [c120, j1];
  D117():
    deopt 458 [c129, has_i];
  L10(c6):
    c17 = `as.logical`(c6);
    if c17 then L413() else L13();
  L101():
    sym40 = ldf oldClass;
    base40 = ldf oldClass in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L686() else L687();
  L403():
    value2 = force? value1;
    checkMissing(value2);
    is_atomic = ldf `is.atomic` in base;
    r32 = dyn is_atomic(value2);
    check L404() else D9();
  L405():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L406() else L407();
  L662():
    goto L7();
  L667():
    j2 = force? j1;
    checkMissing(j2);
    length5 = ldf length in base;
    r199 = dyn length5(j2);
    check L668() else D116();
  L671():
    has_i1 = force? has_i;
    checkMissing(has_i1);
    c132 = `as.logical`(has_i1);
    if c132 then L672() else L98(c129, c132);
  L682():
    x22 = ld x;
    check L683() else D121();
  D9():
    deopt 44 [r32];
  D116():
    deopt 455 [c120, r199];
  D121():
    deopt 473 [x22];
  L11(c9, r34):
    r38 = `!`(r34);
    c14 = `as.logical`(r38);
    c15 = `&&`(c9, c14);
    goto L10(c15);
  L13():
    goto L14();
  L14():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L417() else L418();
  L98(c135, c136):
    c147 = `as.logical`(c136);
    if c147 then L678() else L100(c135, c147);
  L103(r209):
    st cl = r209;
    l32 = ld x;
    class__ = ldf `class<-`;
    check L690() else D124();
  L404():
    goto L9(r32);
  L406():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L408() else L409();
  L407():
    r33 = dyn base7(<lang names(value)>);
    goto L11(c4, r33);
  L413():
    l = ld value;
    names__ = ldf `names<-`;
    check L414() else D12();
  L668():
    goto L96(c120, r199);
  L672():
    sym39 = ldf length;
    base39 = ldf length in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L673() else L674();
  L683():
    x23 = force? x22;
    checkMissing(x23);
    popenv;
    return x23;
  L686():
    x24 = ld x;
    check L688() else D122();
  L687():
    r208 = dyn base40(<sym x>);
    goto L103(r208);
  D12():
    deopt 58 [NULL, l, NULL];
  D122():
    deopt 480 [x24];
  D124():
    deopt 488 [NULL, l32, NULL];
  L12(c12, r36):
    c13 = `==`(r36, NULL);
    goto L11(c12, c13);
  L15(r42):
    c18 = `as.logical`(r42);
    if c18 then L419() else L16(c18);
  L99(c141, c142, r202):
    r204 = `!`(r202);
    c143 = `as.logical`(r204);
    c144 = `&&`(c142, c143);
    goto L98(c141, c144);
  L100(c150, c151):
    c156 = `as.logical`(c151);
    c157 = `||`(c150, c156);
    goto L97(c157);
  L408():
    value3 = ld value;
    check L410() else D10();
  L409():
    r35 = dyn base8(<sym value>);
    goto L12(c4, r35);
  L414():
    r39 = dyn names__(l, NULL, NULL);
    check L415() else D13();
  L417():
    missing2 = ldf missing in base;
    r43 = dyn missing2(<sym i>);
    goto L15(r43);
  L418():
    r41 = dyn base9(<sym i>);
    goto L15(r41);
  L673():
    i104 = ld i;
    check L675() else D118();
  L674():
    r201 = dyn base39(<sym i>);
    goto L99(c129, c132, r201);
  L678():
    has_j2 = ld `has.j`;
    check L679() else D120();
  L688():
    x25 = force? x24;
    checkMissing(x25);
    oldClass = ldf oldClass in base;
    r210 = dyn oldClass(x25);
    check L689() else D123();
  L690():
    r211 = dyn class__(l32, NULL, NULL);
    check L691() else D125();
  D10():
    deopt 48 [c4, value3];
  D13():
    deopt 60 [NULL, r39];
  D118():
    deopt 462 [c129, c132, i104];
  D120():
    deopt 468 [c135, c147, has_j2];
  D123():
    deopt 483 [r210];
  D125():
    deopt 490 [NULL, r211];
  L16(c20):
    c27 = `as.logical`(c20);
    if c27 then L423() else L18();
  L410():
    value4 = force? value3;
    checkMissing(value4);
    names1 = ldf names in base;
    r37 = dyn names1(value4);
    check L411() else D11();
  L415():
    st value = r39;
    goto L14();
  L419():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L420() else L421();
  L675():
    i105 = force? i104;
    checkMissing(i105);
    length6 = ldf length in base;
    r203 = dyn length6(i105);
    check L676() else D119();
  L679():
    has_j3 = force? has_j2;
    checkMissing(has_j3);
    r205 = `!`(has_j3);
    c152 = `as.logical`(r205);
    c153 = `&&`(c147, c152);
    goto L100(c135, c153);
  L689():
    goto L103(r210);
  L691():
    st x = r211;
    st `new.cols` = NULL;
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L692() else L693();
  D11():
    deopt 51 [c4, r37];
  D119():
    deopt 465 [c129, c132, r203];
  L17(c23, r45):
    c24 = `as.logical`(r45);
    c25 = `&&`(c23, c24);
    goto L16(c25);
  L18():
    sym12 = ldf `is.numeric`;
    base12 = ldf `is.numeric` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L437() else L438();
  L23(r53):
    goto L7();
  L104(r213):
    st nvars = r213;
    _row_names_info = ldf `.row_names_info`;
    check L696() else D128();
  L411():
    goto L12(c4, r37);
  L420():
    missing3 = ldf missing in base;
    r46 = dyn missing3(<sym j>);
    goto L17(c18, r46);
  L421():
    r44 = dyn base10(<sym j>);
    goto L17(c18, r44);
  L423():
    st j = NULL;
    st i = NULL;
    st `has.j` = FALSE;
    st `has.i` = FALSE;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L424() else L425();
  L676():
    goto L99(c129, c132, r203);
  L692():
    x26 = ld x;
    check L694() else D126();
  L693():
    r212 = dyn base41(<sym x>);
    goto L104(r212);
  D126():
    deopt 497 [x26];
  D128():
    deopt 503 [];
  L19(r48):
    c29 = `as.logical`(r48);
    if c29 then L427() else L20();
  L24(r55):
    c31 = `as.logical`(r55);
    if c31 then L441() else L25(c31);
  L424():
    value5 = ld value;
    check L426() else D14();
  L425():
    r47 = dyn base11(<sym value>);
    goto L19(r47);
  L437():
    i1 = ld i;
    check L439() else D18();
  L438():
    r54 = dyn base12(<sym i>);
    goto L24(r54);
  L694():
    x27 = force? x26;
    checkMissing(x27);
    length7 = ldf length in base;
    r214 = dyn length7(x27);
    check L695() else D127();
  L696():
    p8 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    r216 = dyn _row_names_info(p8, 2);
    check L697() else D129();
  D14():
    deopt 80 [value5];
  D18():
    deopt 94 [i1];
  D127():
    deopt 500 [r214];
  D129():
    deopt 506 [r216];
  L20():
    goto L23(NULL);
  L25(c33):
    c40 = `as.logical`(c33);
    if c40 then L447() else L27(c40);
  L426():
    value6 = force? value5;
    checkMissing(value6);
    c28 = `==`(value6, NULL);
    goto L19(c28);
  L427():
    x1 = ld x;
    check L428() else D15();
  L439():
    i2 = force? i1;
    checkMissing(i2);
    is_numeric = ldf `is.numeric` in base;
    r56 = dyn is_numeric(i2);
    check L440() else D19();
  L441():
    sym13 = ldf `is.matrix`;
    base13 = ldf `is.matrix` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L442() else L443();
  L695():
    goto L104(r214);
  L697():
    st nrows = r216;
    has_i2 = ld `has.i`;
    check L698() else D130();
  D15():
    deopt 83 [x1];
  D19():
    deopt 97 [r56];
  D130():
    deopt 508 [has_i2];
  L26(c36, r58):
    c37 = `as.logical`(r58);
    c38 = `&&`(c36, c37);
    goto L25(c38);
  L27(c42):
    c46 = `as.logical`(c42);
    if c46 then L451() else L28();
  L428():
    x2 = force? x1;
    checkMissing(x2);
    c30 = `is.object`(x2);
    if c30 then L429() else L430(x2);
  L440():
    goto L24(r56);
  L442():
    i3 = ld i;
    check L444() else D20();
  L443():
    r57 = dyn base13(<sym i>);
    goto L26(c31, r57);
  L447():
    ncol = ldf ncol;
    check L448() else D22();
  L698():
    has_i3 = force? has_i2;
    checkMissing(has_i3);
    c160 = `as.logical`(has_i3);
    if c160 then L699() else L105(c160);
  D20():
    deopt 100 [c31, i3];
  D22():
    deopt 106 [c40];
  L21(dx1):
    popenv;
    return dx1;
  L28():
    goto L42();
  L42():
    sym22 = ldf `is.logical`;
    base22 = ldf `is.logical` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L502() else L503();
  L105(c162):
    c169 = `as.logical`(c162);
    if c169 then L705() else L107();
  L429():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L431() else L430(dr);
  L430(x4):
    logical = ldf logical;
    check L432() else D16();
  L444():
    i4 = force? i3;
    checkMissing(i4);
    is_matrix = ldf `is.matrix` in base;
    r59 = dyn is_matrix(i4);
    check L445() else D21();
  L448():
    p2 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r61 = dyn ncol(p2);
    check L449() else D23();
  L451():
    sym14 = ldf `rep.int`;
    base14 = ldf `rep.int` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L452() else L453();
  L699():
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L700() else L701();
  D16():
    deopt 86 [x4];
  D21():
    deopt 103 [c31, r59];
  D23():
    deopt 108 [c40, r61];
  L29(r64):
    st index = r64;
    sym17 = ldf dim;
    base17 = ldf dim in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L462() else L463();
  L43(r110):
    c54 = `as.logical`(r110);
    if c54 then L505() else L44(c54);
  L106(c165, r218):
    c166 = `as.logical`(r218);
    c167 = `&&`(c165, c166);
    goto L105(c167);
  L107():
    st iseq = NULL;
    goto L161();
  L161():
    has_j4 = ld `has.j`;
    check L869() else D200();
  L431():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L432():
    r49 = dyn logical();
    check L433() else D17();
  L445():
    goto L26(c31, r59);
  L449():
    r62 = `==`(r61, 2.0);
    c43 = `as.logical`(r62);
    c44 = `&&`(c40, c43);
    goto L27(c44);
  L452():
    sym15 = ldf prod;
    base15 = ldf prod in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L454() else L455();
  L453():
    r63 = dyn base14(FALSE, <lang prod(dim(x))>);
    goto L29(r63);
  L502():
    i17 = ld i;
    check L504() else D50();
  L503():
    r109 = dyn base22(<sym i>);
    goto L43(r109);
  L700():
    i106 = ld i;
    check L702() else D131();
  L701():
    r217 = dyn base42(<sym i>);
    goto L106(c160, r217);
  L705():
    st rows = NULL;
    sym43 = ldf anyNA;
    base43 = ldf anyNA in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L706() else L707();
  D17():
    deopt 87 [x4, r49];
  D50():
    deopt 203 [i17];
  D131():
    deopt 512 [c160, i106];
  D200():
    deopt 778 [has_j4];
  L30(r66):
    rep_int = ldf `rep.int` in base;
    r71 = dyn rep_int(FALSE, r66);
    check L461() else D27();
  L32(r73):
    l1 = ld index;
    dim__ = ldf `dim<-`;
    check L466() else D30();
  L44(c56):
    c63 = `as.logical`(c56);
    if c63 then L511() else L46(c63);
  L108(r221):
    c170 = `as.logical`(r221);
    if c170 then L710() else L109();
  L433():
    __ = ldf `[` in base;
    r50 = dyn __(x4, r49);
    goto L21(r50);
  L454():
    sym16 = ldf dim;
    base16 = ldf dim in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L456() else L457();
  L455():
    r65 = dyn base15(<lang dim(x)>);
    goto L30(r65);
  L462():
    x7 = ld x;
    check L464() else D28();
  L463():
    r72 = dyn base17(<sym x>);
    goto L32(r72);
  L504():
    i18 = force? i17;
    checkMissing(i18);
    c53 = `is.logical`(i18);
    goto L43(c53);
  L505():
    sym23 = ldf `is.matrix`;
    base23 = ldf `is.matrix` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L506() else L507();
  L702():
    i107 = force? i106;
    checkMissing(i107);
    length8 = ldf length in base;
    r219 = dyn length8(i107);
    check L703() else D132();
  L706():
    i108 = ld i;
    check L708() else D133();
  L707():
    r220 = dyn base43(<sym i>);
    goto L108(r220);
  L869():
    has_j5 = force? has_j4;
    checkMissing(has_j5);
    c256 = `as.logical`(has_j5);
    if c256 then L870() else L162();
  D27():
    deopt 126 [r71];
  D28():
    deopt 130 [x7];
  D30():
    deopt 135 [r73, l1, r73];
  D132():
    deopt 515 [c160, r219];
  D133():
    deopt 522 [i108];
  L31(r68):
    prod = ldf prod in base;
    r70 = dyn prod(r68);
    check L460() else D26();
  L45(c59, r112):
    c60 = `as.logical`(r112);
    c61 = `&&`(c59, c60);
    goto L44(c61);
  L46(c65):
    c78 = `as.logical`(c65);
    if c78 then L524() else L50();
  L109():
    goto L110();
  L110():
    sym44 = ldf `is.character`;
    base44 = ldf `is.character` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L714() else L715();
  L162():
    sym88 = ldf seq_along;
    base88 = ldf seq_along in base;
    guard88 = `==`.4(sym88, base88);
    if guard88 then L1002() else L1003();
  L205():
    has_i4 = ld `has.i`;
    check L1005() else D258();
  L456():
    x5 = ld x;
    check L458() else D24();
  L457():
    r67 = dyn base16(<sym x>);
    goto L31(r67);
  L461():
    goto L29(r71);
  L464():
    x8 = force? x7;
    checkMissing(x8);
    dim1 = ldf dim in base;
    r74 = dyn dim1(x8);
    check L465() else D29();
  L466():
    r75 = dyn dim__(l1, NULL, r73);
    check L467() else D31();
  L506():
    i19 = ld i;
    check L508() else D51();
  L507():
    r111 = dyn base23(<sym i>);
    goto L45(c54, r111);
  L511():
    sym24 = ldf all;
    base24 = ldf all in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L512() else L513();
  L703():
    goto L106(c160, r219);
  L708():
    i109 = force? i108;
    checkMissing(i109);
    anyNA = ldf anyNA in base;
    r222 = dyn anyNA(i109);
    check L709() else D134();
  L710():
    stop3 = ldf stop;
    check L711() else D135();
  L870():
    sym66 = ldf anyNA;
    base66 = ldf anyNA in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L871() else L872();
  D24():
    deopt 119 [x5];
  D26():
    deopt 124 [r70];
  D29():
    deopt 133 [r74];
  D31():
    deopt 137 [r73, r75];
  D51():
    deopt 208 [c54, i19];
  D134():
    deopt 525 [r222];
  D135():
    deopt 527 [];
  D258():
    deopt 976 [has_i4];
  L47(c68, r115):
    c75 = `as.logical`(r115);
    c76 = `&&`(c68, c75);
    goto L46(c76);
  L50():
    sym37 = ldf `is.matrix`;
    base37 = ldf `is.matrix` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L651() else L652();
  L111(r226):
    st `char.i` = r226;
    c172 = `as.logical`(r226);
    if c172 then L717() else L112();
  L163(r333):
    c257 = `as.logical`(r333);
    if c257 then L875() else L164();
  L206(r429):
    st jseq = r429;
    goto L205();
  L458():
    x6 = force? x5;
    checkMissing(x6);
    dim = ldf dim in base;
    r69 = dyn dim(x6);
    check L459() else D25();
  L460():
    goto L30(r70);
  L465():
    goto L32(r74);
  L467():
    st index = r75;
    tryCatch = ldf tryCatch;
    check L468() else D32();
  L508():
    i20 = force? i19;
    checkMissing(i20);
    is_matrix1 = ldf `is.matrix` in base;
    r113 = dyn is_matrix1(i20);
    check L509() else D52();
  L512():
    sym25 = ldf dim;
    base25 = ldf dim in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L514() else L515();
  L513():
    r114 = dyn base24(<lang `==`(dim(i), dim(x))>);
    goto L47(c63, r114);
  L524():
    sym27 = ldf sum;
    base27 = ldf sum in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L525() else L526();
  L709():
    goto L108(r222);
  L711():
    r223 = dyn stop3("missing values are not allowed in subscripted assignments of data frames");
    check L712() else D136();
  L714():
    i110 = ld i;
    check L716() else D137();
  L715():
    r225 = dyn base44(<sym i>);
    goto L111(r225);
  L871():
    j3 = ld j;
    check L873() else D201();
  L872():
    r332 = dyn base66(<sym j>);
    goto L163(r332);
  L1002():
    x42 = ld x;
    check L1004() else D257();
  L1003():
    r428 = dyn base88(<sym x>);
    goto L206(r428);
  L1005():
    has_i5 = force? has_i4;
    checkMissing(has_i5);
    c294 = `as.logical`(has_i5);
    if c294 then L1006() else L207(c294);
  D25():
    deopt 122 [r69];
  D32():
    deopt 140 [];
  D52():
    deopt 211 [c54, r113];
  D136():
    deopt 529 [r223];
  D137():
    deopt 533 [i110];
  D201():
    deopt 782 [j3];
  D257():
    deopt 972 [x42];
  L48(c71, r117):
    sym26 = ldf dim;
    base26 = ldf dim in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L518() else L519();
  L51(r128):
    st nreplace = r128;
    nreplace = ld nreplace;
    check L529() else D60();
  L92(r192):
    c119 = `as.logical`(r192);
    if c119 then L655() else L93();
  L112():
    goto L122();
  L122():
    sym50 = ldf `is.logical`;
    base50 = ldf `is.logical` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L753() else L754();
  L164():
    goto L165();
  L165():
    sym67 = ldf `is.character`;
    base67 = ldf `is.character` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L879() else L880();
  L207(c296):
    c303 = `as.logical`(c296);
    if c303 then L1012() else L209(c303);
  L459():
    goto L31(r69);
  L468():
    p3 = prom<V +>{
      l2 = ld index;
      c47 = `is.object`(l2);
      if c47 then L1() else L2(TRUE, l2);
    L0(r79, dx3):
      st index = dx3;
      setInvisible.0();
      return r79;
    L1():
      dr2 = tryDispatchBuiltin.0("[<-", l2, TRUE);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(TRUE, dr2);
    L2(r77, l4):
      i7 = ld i;
      i8 = force? i7;
      ___ = ldf `[<-` in base;
      r80 = dyn ___(l4, TRUE, i8);
      goto L0(r77, r80);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(TRUE, dx2);
    };
    p4 = prom<V +>{
      r82 = clos inner3708401697;
      return r82;
    };
    r84 = dyn tryCatch[, error](p3, p4);
    check L469() else D33();
  L509():
    goto L45(c54, r113);
  L514():
    i21 = ld i;
    check L516() else D53();
  L515():
    r116 = dyn base25(<sym i>);
    goto L48(c63, r116);
  L525():
    i23 = ld i;
    check L527() else D58();
  L526():
    r127 = dyn base27[, `na.rm`](<sym i>, TRUE);
    goto L51(r127);
  L651():
    i100 = ld i;
    check L653() else D107();
  L652():
    r191 = dyn base37(<sym i>);
    goto L92(r191);
  L712():
    goto L110();
  L716():
    i111 = force? i110;
    checkMissing(i111);
    c171 = `is.character`(i111);
    goto L111(c171);
  L717():
    sym45 = ldf attr;
    base45 = ldf attr in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L718() else L719();
  L873():
    j4 = force? j3;
    checkMissing(j4);
    anyNA2 = ldf anyNA in base;
    r334 = dyn anyNA2(j4);
    check L874() else D202();
  L875():
    stop5 = ldf stop;
    check L876() else D203();
  L1004():
    x43 = force? x42;
    checkMissing(x43);
    r430 = seq_along(x43);
    goto L206(r430);
  L1006():
    sym89 = ldf length;
    base89 = ldf length in base;
    guard89 = `==`.4(sym89, base89);
    if guard89 then L1007() else L1008();
  D33():
    deopt 144 [r84];
  D53():
    deopt 217 [c63, i21];
  D58():
    deopt 232 [i23];
  D60():
    deopt 239 [nreplace];
  D107():
    deopt 422 [i100];
  D202():
    deopt 785 [r334];
  D203():
    deopt 787 [];
  L49(c74, r122, r123):
    r125 = `==`(r122, r123);
    all1 = ldf all in base;
    r126 = dyn all1(r125);
    check L522() else D57();
  L93():
    goto L94();
  L94():
    i102 = ld i;
    check L659() else D111();
  L113(r228):
    st rows = r228;
    sym46 = ldf match;
    base46 = ldf match in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L722() else L723();
  L123(r251):
    r252 = `!`(r251);
    c177 = `as.logical`(r252);
    if c177 then L756() else L124(c177);
  L166(r338):
    c259 = `as.logical`(r338);
    if c259 then L882() else L167();
  L208(c299, r432):
    r434 = `!`(r432);
    c300 = `as.logical`(r434);
    c301 = `&&`(c299, c300);
    goto L207(c301);
  L209(c305):
    c312 = `as.logical`(c305);
    if c312 then L1020() else L211();
  L469():
    order = ldf order;
    check L470() else D34();
  L516():
    i22 = force? i21;
    checkMissing(i22);
    dim2 = ldf dim in base;
    r118 = dyn dim2(i22);
    check L517() else D54();
  L518():
    x9 = ld x;
    check L520() else D55();
  L519():
    r121 = dyn base26(<sym x>);
    goto L49(c71, r117, r121);
  L527():
    i24 = force? i23;
    checkMissing(i24);
    sum = ldf sum in base;
    r129 = dyn sum(i24, TRUE);
    check L528() else D59();
  L529():
    nreplace1 = force? nreplace;
    checkMissing(nreplace1);
    r130 = `!`(nreplace1);
    c79 = `as.logical`(r130);
    if c79 then L530() else L52();
  L653():
    i101 = force? i100;
    checkMissing(i101);
    is_matrix3 = ldf `is.matrix` in base;
    r193 = dyn is_matrix3(i101);
    check L654() else D108();
  L655():
    stop1 = ldf stop;
    check L656() else D109();
  L718():
    x30 = ld x;
    check L720() else D138();
  L719():
    r227 = dyn base45(<sym x>, "row.names");
    goto L113(r227);
  L753():
    i118 = ld i;
    check L755() else D154();
  L754():
    r250 = dyn base50(<sym i>);
    goto L123(r250);
  L874():
    goto L163(r334);
  L876():
    r335 = dyn stop5("missing values are not allowed in subscripted assignments of data frames");
    check L877() else D204();
  L879():
    j5 = ld j;
    check L881() else D205();
  L880():
    r337 = dyn base67(<sym j>);
    goto L166(r337);
  L1007():
    iseq2 = ld iseq;
    check L1009() else D259();
  L1008():
    r431 = dyn base89(<sym iseq>);
    goto L208(c294, r431);
  L1012():
    sym90 = ldf all;
    base90 = ldf all in base;
    guard90 = `==`.4(sym90, base90);
    if guard90 then L1013() else L1014();
  D34():
    deopt 146 [];
  D54():
    deopt 220 [c63, r118];
  D55():
    deopt 222 [c71, r117, x9];
  D57():
    deopt 228 [c74, r126];
  D59():
    deopt 237 [r129];
  D108():
    deopt 425 [r193];
  D109():
    deopt 427 [];
  D111():
    deopt 432 [i102];
  D138():
    deopt 539 [x30];
  D154():
    deopt 603 [i118];
  D204():
    deopt 789 [r335];
  D205():
    deopt 793 [j5];
  D259():
    deopt 980 [c294, iseq2];
  L52():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L534() else L535();
  L114(r231):
    st ii = r231;
    sym47 = ldf sum;
    base47 = ldf sum in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L727() else L728();
  L124(c179):
    c228 = `as.logical`(c179);
    if c228 then L775() else L130();
  L167():
    sym74 = ldf `is.logical`;
    base74 = ldf `is.logical` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L924() else L925();
  L180(dx102):
    goto L205();
  L210(c308, r436):
    c309 = `as.logical`(r436);
    c310 = `&&`(c308, c309);
    goto L209(c310);
  L211():
    anyDuplicated = ldf anyDuplicated;
    check L1028() else D268();
  L470():
    p5 = prom<V +>{
      i9 = ld i;
      i10 = force? i9;
      checkMissing(i10);
      c48 = `is.object`(i10);
      if c48 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", i10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r85 = dyn __1(i10, <missing>, 2.0);
      goto L0(r85);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      c49 = `is.object`(i14);
      if c49 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", i14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r87 = dyn __2(i14, <missing>, 1.0);
      goto L0(r87);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r89 = dyn order(p5, p6);
    check L471() else D35();
  L517():
    goto L48(c63, r118);
  L520():
    x10 = force? x9;
    checkMissing(x10);
    dim3 = ldf dim in base;
    r124 = dyn dim3(x10);
    check L521() else D56();
  L522():
    goto L47(c74, r126);
  L528():
    goto L51(r129);
  L530():
    x11 = ld x;
    check L531() else D61();
  L654():
    goto L92(r193);
  L656():
    r194 = dyn stop1("unsupported matrix index in replacement");
    check L657() else D110();
  L659():
    i103 = force? i102;
    checkMissing(i103);
    st j = i103;
    st i = NULL;
    st `has.i` = FALSE;
    st `has.j` = TRUE;
    goto L23(TRUE);
  L720():
    x31 = force? x30;
    checkMissing(x31);
    attr = ldf attr in base;
    r229 = dyn attr(x31, "row.names");
    check L721() else D139();
  L722():
    i112 = ld i;
    check L724() else D140();
  L723():
    r230 = dyn base46(<sym i>, <sym rows>);
    goto L114(r230);
  L755():
    i119 = force? i118;
    checkMissing(i119);
    c176 = `is.logical`(i119);
    goto L123(c176);
  L756():
    char_i = ld `char.i`;
    check L757() else D155();
  L877():
    goto L165();
  L881():
    j6 = force? j5;
    checkMissing(j6);
    c258 = `is.character`(j6);
    goto L166(c258);
  L882():
    _in_1 = ldf `%in%`;
    check L883() else D206();
  L1009():
    iseq3 = force? iseq2;
    checkMissing(iseq3);
    length14 = ldf length in base;
    r433 = dyn length14(iseq3);
    check L1010() else D260();
  L1013():
    jseq14 = ld jseq;
    check L1015() else D261();
  L1014():
    r435 = dyn base90(<lang `&`(`<=`(1, jseq), `<=`(jseq, nvars))>);
    goto L210(c303, r435);
  L1020():
    sym91 = ldf `class<-`;
    base91 = ldf `class<-` in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L1021() else L1022();
  D35():
    deopt 149 [r89];
  D56():
    deopt 225 [c71, r117, r124];
  D61():
    deopt 242 [x11];
  D110():
    deopt 429 [r194];
  D139():
    deopt 543 [r229];
  D140():
    deopt 547 [i112];
  D155():
    deopt 607 [c177, char_i];
  D206():
    deopt 797 [];
  D260():
    deopt 983 [c294, r433];
  D261():
    deopt 989 [c303, 1, jseq14];
  D268():
    deopt 1011 [];
  L54(r134):
    st N = r134;
    N7 = ld N;
    check L538() else D64();
  L115(r234):
    st nextra = r234;
    nextra = ld nextra;
    check L734() else D146();
  L130():
    goto L155();
  L155():
    sym64 = ldf seq_len;
    base64 = ldf seq_len in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L853() else L854();
  L181(r369):
    c265 = `as.logical`(r369);
    if c265 then L182(c265) else L927();
  L212(r442):
    popenv;
    return r442;
  L471():
    st o = r89;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L472() else L473();
  L521():
    goto L49(c71, r117, r124);
  L531():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  L534():
    value13 = ld value;
    check L536() else D62();
  L535():
    r133 = dyn base28(<sym value>);
    goto L54(r133);
  L657():
    goto L94();
  L721():
    goto L113(r229);
  L724():
    i113 = force? i112;
    checkMissing(i113);
    rows = ld rows;
    check L725() else D141();
  L727():
    sym48 = ldf `is.na`;
    base48 = ldf `is.na` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L729() else L730();
  L728():
    r233 = dyn base47(<lang `<-`(new.rows, is.na(ii))>);
    goto L115(r233);
  L757():
    char_i1 = force? char_i;
    checkMissing(char_i1);
    c180 = `as.logical`(char_i1);
    if c180 then L758() else L125(c177, c180);
  L775():
    sym53 = ldf `is.null`;
    base53 = ldf `is.null` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L776() else L777();
  L883():
    p13 = prom<V +>{
      j7 = ld j;
      j8 = force? j7;
      checkMissing(j8);
      return j8;
    };
    r340 = dyn _in_1("", p13);
    check L884() else D207();
  L924():
    j15 = ld j;
    check L926() else D224();
  L925():
    r368 = dyn base74(<sym j>);
    goto L181(r368);
  L1010():
    goto L208(c294, r433);
  L1015():
    jseq15 = force? jseq14;
    checkMissing(jseq15);
    r437 = `<=`(1, jseq15);
    jseq16 = ld jseq;
    check L1016() else D262();
  L1021():
    x44 = ld x;
    check L1023() else D265();
  L1022():
    r441 = dyn base91(<sym x>, <sym cl>);
    goto L212(r441);
  L1028():
    p19 = prom<V +>{
      jseq18 = ld jseq;
      jseq19 = force? jseq18;
      checkMissing(jseq19);
      return jseq19;
    };
    r447 = dyn anyDuplicated(p19);
    check L1029() else D269();
  D62():
    deopt 249 [value13];
  D64():
    deopt 254 [N7];
  D141():
    deopt 549 [rows];
  D146():
    deopt 568 [nextra];
  D207():
    deopt 800 [r340];
  D224():
    deopt 859 [j15];
  D262():
    deopt 991 [c303, r437, jseq16];
  D265():
    deopt 1001 [x44];
  D269():
    deopt 1013 [r447];
  L33(r91):
    st N = r91;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L476() else L477();
  L116(r236):
    st `new.rows` = r236;
    sum2 = ldf sum in base;
    r238 = dyn sum2(r236);
    check L733() else D145();
  L125(c183, c184):
    c189 = `as.logical`(c184);
    if c189 then L126(c183, c189) else L761();
  L131(r262):
    c230 = `as.logical`(r262);
    if c230 then L779() else L132();
  L156(r321):
    c254 = `is.object`(r321);
    if c254 then L856() else L857(r321);
  L182(c266):
    c274 = `as.logical`(c266);
    if c274 then L933() else L184();
  L472():
    value7 = ld value;
    check L474() else D36();
  L473():
    r90 = dyn base18(<sym value>);
    goto L33(r90);
  L536():
    value14 = force? value13;
    checkMissing(value14);
    length3 = ldf length in base;
    r135 = dyn length3(value14);
    check L537() else D63();
  L538():
    N8 = force? N7;
    checkMissing(N8);
    r136 = `>`(N8, 1);
    c80 = `as.logical`(r136);
    if c80 then L539() else L55(c80);
  L725():
    rows1 = force? rows;
    checkMissing(rows1);
    match = ldf match in base;
    r232 = dyn match(i113, rows1, NA_INT, NULL);
    check L726() else D142();
  L729():
    ii = ld ii;
    check L731() else D143();
  L730():
    r235 = dyn base48(<sym ii>);
    goto L116(r235);
  L734():
    nextra1 = force? nextra;
    checkMissing(nextra1);
    r239 = `>`(nextra1, 0);
    c173 = `as.logical`(r239);
    if c173 then L735() else L117();
  L758():
    nextra4 = ld nextra;
    check L759() else D156();
  L776():
    rows2 = ld rows;
    check L778() else D162();
  L777():
    r261 = dyn base53(<sym rows>);
    goto L131(r261);
  L853():
    nrows6 = ld nrows;
    check L855() else D194();
  L854():
    r320 = dyn base64(<sym nrows>);
    goto L156(r320);
  L884():
    c260 = `as.logical`(r340);
    if c260 then L885() else L168();
  L926():
    j16 = force? j15;
    checkMissing(j16);
    c264 = `is.logical`(j16);
    goto L181(c264);
  L927():
    sym75 = ldf min;
    base75 = ldf min in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L928() else L929();
  L1016():
    jseq17 = force? jseq16;
    checkMissing(jseq17);
    nvars16 = ld nvars;
    check L1017() else D263();
  L1023():
    x45 = force? x44;
    checkMissing(x45);
    cl = ld cl;
    check L1024() else D266();
  L1029():
    c313 = `as.logical`(r447);
    if c313 then L1030() else L214();
  D36():
    deopt 153 [value7];
  D63():
    deopt 252 [r135];
  D142():
    deopt 554 [r232];
  D143():
    deopt 560 [ii];
  D145():
    deopt 566 [r238];
  D156():
    deopt 609 [c177, c180, nextra4];
  D162():
    deopt 633 [rows2];
  D194():
    deopt 756 [nrows6];
  D263():
    deopt 992 [c303, r437, jseq17, nvars16];
  D266():
    deopt 1003 [cl];
  L34(r94):
    N = ld N;
    check L480() else D40();
  L55(c82):
    c86 = `as.logical`(c82);
    if c86 then L543() else L56(c86);
  L117():
    goto L121();
  L121():
    ii2 = ld ii;
    check L751() else D153();
  L126(c190, c191):
    c225 = `as.logical`(c191);
    c226 = `&&`(c190, c225);
    goto L124(c226);
  L132():
    goto L134();
  L134():
    char_i2 = ld `char.i`;
    check L785() else D165();
  L157(dx96):
    st iseq = dx96;
    sym65 = ldf anyNA;
    base65 = ldf anyNA in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L860() else L861();
  L168():
    goto L169();
  L169():
    sym68 = ldf match;
    base68 = ldf match in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L889() else L890();
  L183(c270, r371):
    r373 = `<`(r371, 0);
    c271 = `as.logical`(r373);
    c272 = `||`(c270, c271);
    goto L182(c272);
  L184():
    j21 = ld j;
    check L942() else D229();
  L214():
    goto L215();
  L215():
    sym92 = ldf length;
    base92 = ldf length in base;
    guard92 = `==`.4(sym92, base92);
    if guard92 then L1034() else L1035();
  L474():
    value8 = force? value7;
    checkMissing(value8);
    length = ldf length in base;
    r92 = dyn length(value8);
    check L475() else D37();
  L476():
    o = ld o;
    check L478() else D38();
  L477():
    r93 = dyn base19(<sym o>);
    goto L34(r93);
  L537():
    goto L54(r135);
  L539():
    N9 = ld N;
    check L540() else D65();
  L726():
    goto L114(r232);
  L731():
    ii1 = force? ii;
    checkMissing(ii1);
    is_na = ldf `is.na` in base;
    r237 = dyn is_na(ii1);
    check L732() else D144();
  L733():
    goto L115(r238);
  L735():
    sym49 = ldf `seq.int`;
    base49 = ldf `seq.int` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L736() else L737();
  L759():
    nextra5 = force? nextra4;
    checkMissing(nextra5);
    c185 = `as.logical`(nextra5);
    c186 = `&&`(c180, c185);
    goto L125(c177, c186);
  L761():
    sym51 = ldf all;
    base51 = ldf all in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L762() else L763();
  L778():
    rows3 = force? rows2;
    checkMissing(rows3);
    c229 = `==`(rows3, NULL);
    goto L131(c229);
  L779():
    sym54 = ldf attr;
    base54 = ldf attr in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L780() else L781();
  L855():
    nrows7 = force? nrows6;
    checkMissing(nrows7);
    r322 = seq_len(nrows7);
    goto L156(r322);
  L856():
    dr44 = tryDispatchBuiltin.1("[", r321);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L858() else L857(dr44);
  L857(r324):
    i124 = ld i;
    check L859() else D195();
  L885():
    stop6 = ldf stop;
    check L886() else D208();
  L928():
    j17 = ld j;
    check L930() else D225();
  L929():
    r370 = dyn base75(<sym j>);
    goto L183(c265, r370);
  L933():
    sym76 = ldf seq_along;
    base76 = ldf seq_along in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L934() else L935();
  L1017():
    nvars17 = force? nvars16;
    checkMissing(nvars17);
    r438 = `<=`(jseq17, nvars17);
    r439 = `&&`(r437, r438);
    all3 = ldf all in base;
    r440 = dyn all3(r439);
    check L1018() else D264();
  L1024():
    cl1 = force? cl;
    checkMissing(cl1);
    class__1 = ldf `class<-` in base;
    r443 = dyn class__1(x45, cl1);
    check L1025() else D267();
  L1030():
    stop8 = ldf stop;
    check L1031() else D270();
  D37():
    deopt 156 [r92];
  D38():
    deopt 161 [o];
  D40():
    deopt 165 [N];
  D65():
    deopt 258 [c80, N9];
  D144():
    deopt 563 [r237];
  D153():
    deopt 597 [ii2];
  D165():
    deopt 646 [char_i2];
  D195():
    deopt 759 [r324, i124];
  D208():
    deopt 802 [];
  D225():
    deopt 864 [c265, j17];
  D229():
    deopt 879 [j21];
  D264():
    deopt 997 [c303, r440];
  D267():
    deopt 1006 [r443];
  D270():
    deopt 1015 [];
  L56(c88):
    c92 = `as.logical`(c88);
    if c92 then L548() else L57();
  L118(r241):
    l33 = ld ii;
    c174 = `is.object`(l33);
    if c174 then L741() else L742(r241, l33);
  L127(c198, c199, r254):
    c200 = `as.logical`(r254);
    if c200 then L766() else L128(c198, c199, c200);
  L133(r264):
    st rows = r264;
    goto L134();
  L158(r327):
    c255 = `as.logical`(r327);
    if c255 then L864() else L159();
  L170(r344):
    st jseq = r344;
    sym70 = ldf anyNA;
    base70 = ldf anyNA in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L897() else L898();
  L185(r375):
    c275 = `is.object`(r375);
    if c275 then L937() else L938(r375);
  L216(r451):
    st n = r451;
    n18 = ld n;
    check L1038() else D274();
  L475():
    goto L33(r92);
  L478():
    o1 = force? o;
    checkMissing(o1);
    length1 = ldf length in base;
    r95 = dyn length1(o1);
    check L479() else D39();
  L480():
    N1 = force? N;
    checkMissing(N1);
    __3 = ldf `%%` in base;
    r96 = dyn __3(r94, N1);
    check L481() else D41();
  L540():
    N10 = force? N9;
    checkMissing(N10);
    nreplace2 = ld nreplace;
    check L541() else D66();
  L543():
    nreplace4 = ld nreplace;
    check L544() else D67();
  L732():
    goto L116(r237);
  L736():
    nrows = ld nrows;
    check L738() else D147();
  L737():
    r240 = dyn base49[from, `length.out`](<lang `+`(nrows, 1)>, <sym nextra>);
    goto L118(r240);
  L751():
    ii3 = force? ii2;
    checkMissing(ii3);
    st i = ii3;
    goto L122();
  L762():
    i120 = ld i;
    check L764() else D157();
  L763():
    r253 = dyn base51(<lang `>=`(i, 0)>);
    goto L127(c183, c189, r253);
  L780():
    x32 = ld x;
    check L782() else D163();
  L781():
    r263 = dyn base54(<sym x>, "row.names");
    goto L133(r263);
  L785():
    char_i3 = force? char_i2;
    checkMissing(char_i3);
    r267 = `!`(char_i3);
    c231 = `as.logical`(r267);
    if c231 then L786() else L135();
  L858():
    dx95 = getTryDispatchBuiltinValue(dr44);
    goto L157(dx95);
  L859():
    i125 = force? i124;
    __17 = ldf `[` in base;
    r325 = dyn __17(r324, i125);
    goto L157(r325);
  L860():
    iseq = ld iseq;
    check L862() else D196();
  L861():
    r326 = dyn base65(<sym iseq>);
    goto L158(r326);
  L886():
    r341 = dyn stop6("column name \"\" cannot match any column");
    check L887() else D209();
  L889():
    j9 = ld j;
    check L891() else D210();
  L890():
    r343 = dyn base68(<sym j>, <lang names(x)>);
    goto L170(r343);
  L930():
    j18 = force? j17;
    checkMissing(j18);
    min = ldf min in base;
    r372 = dyn min(j18);
    check L931() else D226();
  L934():
    x40 = ld x;
    check L936() else D227();
  L935():
    r374 = dyn base76(<sym x>);
    goto L185(r374);
  L942():
    j22 = force? j21;
    checkMissing(j22);
    st jseq = j22;
    sym77 = ldf max;
    base77 = ldf max in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L943() else L944();
  L1018():
    goto L210(c303, r440);
  L1025():
    goto L212(r443);
  L1031():
    r448 = dyn stop8("duplicate subscripts for columns");
    check L1032() else D271();
  L1034():
    iseq4 = ld iseq;
    check L1036() else D272();
  L1035():
    r450 = dyn base92(<sym iseq>);
    goto L216(r450);
  D39():
    deopt 164 [r95];
  D41():
    deopt 168 [r96];
  D66():
    deopt 259 [c80, N10, nreplace2];
  D67():
    deopt 264 [c86, nreplace4];
  D147():
    deopt 574 [nrows];
  D157():
    deopt 614 [c183, c189, i120];
  D163():
    deopt 638 [x32];
  D196():
    deopt 765 [iseq];
  D209():
    deopt 804 [r341];
  D210():
    deopt 809 [j9];
  D226():
    deopt 867 [c265, r372];
  D227():
    deopt 872 [x40];
  D271():
    deopt 1017 [r448];
  D272():
    deopt 1022 [iseq4];
  D274():
    deopt 1027 [n18];
  L57():
    goto L59();
  L59():
    N13 = ld N;
    check L552() else D70();
  L119(dx73):
    st ii = dx73;
    i114 = ld i;
    check L745() else D151();
  L128(c204, c205, c206):
    c221 = `as.logical`(c206);
    c222 = `||`(c205, c221);
    goto L126(c204, c222);
  L135():
    goto L152();
  L152():
    xpdrows_data_frame = ldf `xpdrows.data.frame`;
    check L842() else D188();
  L159():
    goto L160(NULL);
  L160(r330):
    goto L161();
  L172(r350):
    c261 = `as.logical`(r350);
    if c261 then L901() else L173();
  L186(dx104):
    st jseq = dx104;
    goto L180(dx104);
  L187(r381):
    nvars8 = ld nvars;
    check L947() else D232();
  L479():
    goto L34(r95);
  L481():
    r97 = `!=`(r96, 0);
    c50 = `as.logical`(r97);
    if c50 then L482() else L35();
  L541():
    nreplace3 = force? nreplace2;
    checkMissing(nreplace3);
    r137 = `<`(N10, nreplace3);
    c83 = `as.logical`(r137);
    c84 = `&&`(c80, c83);
    goto L55(c84);
  L544():
    nreplace5 = force? nreplace4;
    checkMissing(nreplace5);
    N11 = ld N;
    check L545() else D68();
  L548():
    sym29 = ldf rep;
    base29 = ldf rep in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L549() else L550();
  L738():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r242 = `+`(nrows1, 1);
    nextra2 = ld nextra;
    check L739() else D148();
  L741():
    dr32 = tryDispatchBuiltin.0("[<-", l33, r241);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L743() else L742(r241, dr32);
  L742(r245, l35):
    new_rows = ld `new.rows`;
    check L744() else D150();
  L764():
    i121 = force? i120;
    checkMissing(i121);
    r255 = `>=`(i121, 0);
    all2 = ldf all in base;
    r256 = dyn all2(r255);
    check L765() else D158();
  L766():
    sym52 = ldf max;
    base52 = ldf max in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L767() else L768();
  L782():
    x33 = force? x32;
    checkMissing(x33);
    attr1 = ldf attr in base;
    r265 = dyn attr1(x33, "row.names");
    check L783() else D164();
  L786():
    nrows4 = ld nrows;
    check L787() else D166();
  L862():
    iseq1 = force? iseq;
    checkMissing(iseq1);
    anyNA1 = ldf anyNA in base;
    r328 = dyn anyNA1(iseq1);
    check L863() else D197();
  L864():
    stop4 = ldf stop;
    check L865() else D198();
  L887():
    goto L169();
  L891():
    j10 = force? j9;
    checkMissing(j10);
    sym69 = ldf names;
    base69 = ldf names in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L892() else L893();
  L897():
    jseq = ld jseq;
    check L899() else D214();
  L898():
    r349 = dyn base70(<sym jseq>);
    goto L172(r349);
  L931():
    goto L183(c265, r372);
  L936():
    x41 = force? x40;
    checkMissing(x41);
    r376 = seq_along(x41);
    goto L185(r376);
  L937():
    dr50 = tryDispatchBuiltin.1("[", r375);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L939() else L938(dr50);
  L938(r378):
    j19 = ld j;
    check L940() else D228();
  L943():
    jseq4 = ld jseq;
    check L945() else D230();
  L944():
    r380 = dyn base77(<sym jseq>);
    goto L187(r380);
  L1032():
    goto L215();
  L1036():
    iseq5 = force? iseq4;
    checkMissing(iseq5);
    length15 = ldf length in base;
    r452 = dyn length15(iseq5);
    check L1037() else D273();
  L1038():
    n19 = force? n18;
    checkMissing(n19);
    r453 = `==`(n19, 0);
    c314 = `as.logical`(r453);
    if c314 then L1039() else L217();
  D68():
    deopt 266 [c86, N11];
  D70():
    deopt 279 [N13];
  D148():
    deopt 579 [nextra2];
  D150():
    deopt 585 [r245, l35, r241, new_rows];
  D151():
    deopt 589 [i114];
  D158():
    deopt 619 [c183, c189, r256];
  D164():
    deopt 642 [r265];
  D166():
    deopt 649 [nrows4];
  D188():
    deopt 732 [];
  D197():
    deopt 768 [r328];
  D198():
    deopt 770 [];
  D214():
    deopt 824 [jseq];
  D228():
    deopt 875 [r378, j19];
  D230():
    deopt 884 [jseq4];
  D232():
    deopt 887 [r381, nvars8];
  D273():
    deopt 1025 [r452];
  L35():
    goto L36();
  L36():
    N2 = ld N;
    check L486() else D44();
  L58(r141):
    st value = r141;
    goto L59();
  L129(c213, c214, c215, r258):
    st nn = r258;
    nrows2 = ld nrows;
    check L771() else D161();
  L171(r346):
    match2 = ldf match in base;
    r348 = dyn match2(j10, r346, NA_INT, NULL);
    check L896() else D213();
  L173():
    goto L179(NULL);
  L179(dx101):
    goto L180(dx101);
  L217():
    goto L218();
  L218():
    sym93 = ldf length;
    base93 = ldf length in base;
    guard93 = `==`.4(sym93, base93);
    if guard93 then L1042() else L1043();
  L482():
    warning1 = ldf warning;
    check L483() else D42();
  L545():
    N12 = force? N11;
    checkMissing(N12);
    __5 = ldf `%%` in base;
    r138 = dyn __5(nreplace5, N12);
    check L546() else D69();
  L549():
    rep1 = ldf rep in base;
    r142 = dyn rep1(<sym value>, <sym nreplace>);
    goto L58(r142);
  L550():
    r140 = dyn base29[, `length.out`](<sym value>, <sym nreplace>);
    goto L58(r140);
  L552():
    N14 = force? N13;
    checkMissing(N14);
    r144 = `>`(N14, 1);
    c93 = `as.logical`(r144);
    if c93 then L553() else L60(c93);
  L739():
    nextra3 = force? nextra2;
    checkMissing(nextra3);
    seq_int = ldf `seq.int` in base;
    r243 = dyn seq_int(r242, nextra3);
    check L740() else D149();
  L743():
    dx72 = getTryDispatchBuiltinValue(dr32);
    goto L119(dx72);
  L744():
    new_rows1 = force? new_rows;
    ___3 = ldf `[<-` in base;
    r248 = dyn ___3(l35, r241, new_rows1);
    goto L119(r248);
  L745():
    i115 = force? i114;
    checkMissing(i115);
    c175 = `is.object`(i115);
    if c175 then L746() else L747(i115);
  L765():
    goto L127(c183, c189, r256);
  L767():
    i122 = ld i;
    check L769() else D159();
  L768():
    r257 = dyn base52(<sym i>);
    goto L129(c198, c199, c200, r257);
  L783():
    goto L133(r265);
  L787():
    nrows5 = force? nrows4;
    checkMissing(nrows5);
    r268 = `+`(nrows5, 1);
    nn = ld nn;
    check L788() else D167();
  L842():
    p10 = prom<V +>{
      x34 = ld x;
      x35 = force? x34;
      checkMissing(x35);
      return x35;
    };
    p11 = prom<V +>{
      rows6 = ld rows;
      rows7 = force? rows6;
      checkMissing(rows7);
      return rows7;
    };
    p12 = prom<V +>{
      new_rows8 = ld `new.rows`;
      new_rows9 = force? new_rows8;
      checkMissing(new_rows9);
      return new_rows9;
    };
    r312 = dyn xpdrows_data_frame(p10, p11, p12);
    check L843() else D189();
  L863():
    goto L158(r328);
  L865():
    r329 = dyn stop4("non-existent rows not allowed");
    check L866() else D199();
  L892():
    x38 = ld x;
    check L894() else D211();
  L893():
    r345 = dyn base69(<sym x>);
    goto L171(r345);
  L899():
    jseq1 = force? jseq;
    checkMissing(jseq1);
    anyNA3 = ldf anyNA in base;
    r351 = dyn anyNA3(jseq1);
    check L900() else D215();
  L901():
    sym71 = ldf `is.na`;
    base71 = ldf `is.na` in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L902() else L903();
  L939():
    dx103 = getTryDispatchBuiltinValue(dr50);
    goto L186(dx103);
  L940():
    j20 = force? j19;
    __19 = ldf `[` in base;
    r379 = dyn __19(r378, j20);
    goto L186(r379);
  L945():
    jseq5 = force? jseq4;
    checkMissing(jseq5);
    max1 = ldf max in base;
    r382 = dyn max1(jseq5);
    check L946() else D231();
  L947():
    nvars9 = force? nvars8;
    checkMissing(nvars9);
    r383 = `>`(r381, nvars9);
    c276 = `as.logical`(r383);
    if c276 then L948() else L188();
  L1037():
    goto L216(r452);
  L1039():
    nrows8 = ld nrows;
    check L1040() else D275();
  D42():
    deopt 172 [];
  D44():
    deopt 177 [N2];
  D69():
    deopt 269 [c86, r138];
  D149():
    deopt 583 [r243];
  D159():
    deopt 622 [c198, c199, c200, i122];
  D161():
    deopt 626 [c213, c214, c215, r258, nrows2];
  D167():
    deopt 652 [r268, nn];
  D189():
    deopt 736 [r312];
  D199():
    deopt 772 [r329];
  D211():
    deopt 813 [x38];
  D213():
    deopt 820 [r348];
  D215():
    deopt 827 [r351];
  D231():
    deopt 887 [r382];
  D275():
    deopt 1031 [nrows8];
  L60(c95):
    c102 = `as.logical`(c95);
    if c102 then L560() else L62();
  L120(dx75):
    st `new.rows` = dx75;
    goto L121();
  L174(r353):
    st n = r353;
    nvars = ld nvars;
    check L906() else D218();
  L188():
    goto L180(NULL);
  L219(r455):
    st p = r455;
    sym94 = ldf `is.null`;
    base94 = ldf `is.null` in base;
    guard94 = `==`.4(sym94, base94);
    if guard94 then L1046() else L1047();
  L483():
    r98 = dyn warning1("number of items to replace is not a multiple of replacement length");
    check L484() else D43();
  L486():
    N3 = force? N2;
    checkMissing(N3);
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L487() else L488();
  L546():
    r139 = `==`(r138, 0);
    c89 = `as.logical`(r139);
    c90 = `&&`(c86, c89);
    goto L56(c90);
  L553():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L554() else L555();
  L740():
    goto L118(r243);
  L746():
    dr34 = tryDispatchBuiltin.1("[", i115);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L748() else L747(dr34);
  L747(i117):
    new_rows2 = ld `new.rows`;
    check L749() else D152();
  L769():
    i123 = force? i122;
    checkMissing(i123);
    max = ldf max in base;
    r259 = dyn max(i123);
    check L770() else D160();
  L771():
    nrows3 = force? nrows2;
    checkMissing(nrows3);
    r260 = `>`(r258, nrows3);
    c216 = `as.logical`(r260);
    c217 = `&&`(c215, c216);
    goto L128(c213, c214, c217);
  L788():
    nn1 = force? nn;
    checkMissing(nn1);
    r269 = `:`(r268, nn1);
    st nrr = r269;
    sym55 = ldf inherits;
    base55 = ldf inherits in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L789() else L790();
  L843():
    st x = r312;
    sym62 = ldf attr;
    base62 = ldf attr in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L844() else L845();
  L866():
    goto L160(r329);
  L894():
    x39 = force? x38;
    checkMissing(x39);
    names2 = ldf names in base;
    r347 = dyn names2(x39);
    check L895() else D212();
  L896():
    goto L170(r348);
  L900():
    goto L172(r351);
  L902():
    jseq2 = ld jseq;
    check L904() else D216();
  L903():
    r352 = dyn base71(<sym jseq>);
    goto L174(r352);
  L946():
    goto L187(r382);
  L948():
    paste0 = ldf paste0;
    check L949() else D233();
  L1040():
    nrows9 = force? nrows8;
    checkMissing(nrows9);
    st n = nrows9;
    goto L218();
  L1042():
    jseq20 = ld jseq;
    check L1044() else D276();
  L1043():
    r454 = dyn base93(<sym jseq>);
    goto L219(r454);
  D43():
    deopt 174 [r98];
  D152():
    deopt 591 [i117, new_rows2];
  D160():
    deopt 625 [c198, c199, c200, r259];
  D212():
    deopt 816 [r347];
  D216():
    deopt 830 [jseq2];
  D218():
    deopt 835 [nvars];
  D233():
    deopt 891 [];
  D276():
    deopt 1038 [jseq20];
  L37(N6, r101):
    r103 = `<`(N6, r101);
    c51 = `as.logical`(r103);
    if c51 then L491() else L38();
  L61(c98, r146):
    nreplace6 = ld nreplace;
    check L558() else D73();
  L62():
    goto L63();
  L63():
    st n = 0;
    nrow = ldf nrow;
    check L564() else D76();
  L136(r271):
    c232 = `as.logical`(r271);
    if c232 then L793() else L137(c232);
  L153(r314):
    st rows = r314;
    sym63 = ldf length;
    base63 = ldf length in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L848() else L849();
  L220(r458):
    c316 = `as.logical`(r458);
    if c316 then L1049() else L221();
  L484():
    goto L36();
  L487():
    o2 = ld o;
    check L489() else D45();
  L488():
    r100 = dyn base20(<sym o>);
    goto L37(N3, r100);
  L554():
    value15 = ld value;
    check L556() else D71();
  L555():
    r145 = dyn base30(<sym value>);
    goto L61(c93, r145);
  L560():
    stop = ldf stop;
    check L561() else D74();
  L748():
    dx74 = getTryDispatchBuiltinValue(dr34);
    goto L120(dx74);
  L749():
    new_rows3 = force? new_rows2;
    __13 = ldf `[` in base;
    r249 = dyn __13(i117, new_rows3);
    goto L120(r249);
  L770():
    goto L129(c198, c199, c200, r259);
  L789():
    value35 = ld value;
    check L791() else D168();
  L790():
    r270 = dyn base55(<sym value>, "data.frame");
    goto L136(r270);
  L844():
    x36 = ld x;
    check L846() else D190();
  L845():
    r313 = dyn base62(<sym x>, "row.names");
    goto L153(r313);
  L895():
    goto L171(r347);
  L904():
    jseq3 = force? jseq2;
    checkMissing(jseq3);
    is_na1 = ldf `is.na` in base;
    r354 = dyn is_na1(jseq3);
    check L905() else D217();
  L906():
    nvars1 = force? nvars;
    checkMissing(nvars1);
    sym72 = ldf seq_len;
    base72 = ldf seq_len in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L907() else L908();
  L949():
    p14 = prom<V +>{
      sym78 = ldf `seq.int`;
      base78 = ldf `seq.int` in base;
      guard78 = `==`.4(sym78, base78);
      if guard78 then L2() else L3();
    L0(r385):
      return r385;
    L2():
      nvars10 = ld nvars;
      nvars11 = force? nvars10;
      checkMissing(nvars11);
      r386 = `+`(nvars11, 1);
      sym79 = ldf max;
      base79 = ldf max in base;
      guard79 = `==`.4(sym79, base79);
      if guard79 then L4() else L5();
    L3():
      r384 = dyn base78[from, to](<lang `+`(nvars, 1)>, <lang max(jseq)>);
      goto L0(r384);
    L1(r388):
      seq_int1 = ldf `seq.int` in base;
      r390 = dyn seq_int1(r386, r388);
      goto L0(r390);
    L4():
      jseq6 = ld jseq;
      jseq7 = force? jseq6;
      checkMissing(jseq7);
      max2 = ldf max in base;
      r389 = dyn max2(jseq7);
      goto L1(r389);
    L5():
      r387 = dyn base79(<sym jseq>);
      goto L1(r387);
    };
    r392 = dyn paste0("V", p14);
    check L950() else D234();
  L1044():
    jseq21 = force? jseq20;
    checkMissing(jseq21);
    length16 = ldf length in base;
    r456 = dyn length16(jseq21);
    check L1045() else D277();
  L1046():
    value45 = ld value;
    check L1048() else D278();
  L1047():
    r457 = dyn base94(<sym value>);
    goto L220(r457);
  D45():
    deopt 180 [N3, o2];
  D71():
    deopt 285 [c93, value15];
  D73():
    deopt 288 [c98, r146, nreplace6];
  D74():
    deopt 293 [];
  D76():
    deopt 302 [];
  D168():
    deopt 658 [value35];
  D190():
    deopt 740 [x36];
  D217():
    deopt 833 [r354];
  D234():
    deopt 894 [r392];
  D277():
    deopt 1041 [r456];
  D278():
    deopt 1044 [value45];
  L38():
    goto L40();
  L40():
    value9 = ld value;
    check L495() else D47();
  L137(c234):
    c249 = `as.logical`(c234);
    if c249 then L806() else L141();
  L154(r317):
    st nrows = r317;
    goto L155();
  L175(nvars4, r356):
    r361 = `+`(nvars4, r356);
    l39 = ld jseq;
    c262 = `is.object`(l39);
    if c262 then L913() else L914(r361, l39);
  L221():
    goto L223();
  L223():
    sym96 = ldf length;
    base96 = ldf length in base;
    guard96 = `==`.4(sym96, base96);
    if guard96 then L1054() else L1055();
  L489():
    o3 = force? o2;
    checkMissing(o3);
    length2 = ldf length in base;
    r102 = dyn length2(o3);
    check L490() else D46();
  L491():
    sym21 = ldf rep;
    base21 = ldf rep in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L492() else L493();
  L556():
    value16 = force? value15;
    checkMissing(value16);
    length4 = ldf length in base;
    r147 = dyn length4(value16);
    check L557() else D72();
  L558():
    nreplace7 = force? nreplace6;
    checkMissing(nreplace7);
    r148 = `!=`(r146, nreplace7);
    c99 = `as.logical`(r148);
    c100 = `&&`(c98, c99);
    goto L60(c100);
  L561():
    r149 = dyn stop("'value' is the wrong length");
    check L562() else D75();
  L564():
    p7 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r152 = dyn nrow(p7);
    check L565() else D77();
  L791():
    value36 = force? value35;
    checkMissing(value36);
    inherits = ldf inherits in base;
    r272 = dyn inherits(value36, "data.frame", FALSE);
    check L792() else D169();
  L793():
    sym56 = ldf dim;
    base56 = ldf dim in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L794() else L795();
  L846():
    x37 = force? x36;
    checkMissing(x37);
    attr3 = ldf attr in base;
    r315 = dyn attr3(x37, "row.names");
    check L847() else D191();
  L848():
    rows8 = ld rows;
    check L850() else D192();
  L849():
    r316 = dyn base63(<sym rows>);
    goto L154(r316);
  L905():
    goto L174(r354);
  L907():
    sym73 = ldf sum;
    base73 = ldf sum in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L909() else L910();
  L908():
    r355 = dyn base72(<lang sum(n)>);
    goto L175(nvars1, r355);
  L950():
    st `new.cols` = r392;
    sym80 = ldf length;
    base80 = ldf length in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L951() else L952();
  L1045():
    goto L219(r456);
  L1048():
    value46 = force? value45;
    checkMissing(value46);
    c315 = `==`(value46, NULL);
    goto L220(c315);
  L1049():
    sym95 = ldf list;
    base95 = ldf list in base;
    guard95 = `==`.4(sym95, base95);
    if guard95 then L1050() else L1051();
  D46():
    deopt 183 [N3, r102];
  D47():
    deopt 191 [value9];
  D72():
    deopt 288 [c93, r147];
  D75():
    deopt 295 [r149];
  D77():
    deopt 304 [r152];
  D169():
    deopt 663 [r272];
  D191():
    deopt 744 [r315];
  D192():
    deopt 748 [rows8];
  L39(r105):
    st value = r105;
    goto L40();
  L138(c237, r274):
    c238 = `is.object`(r274);
    if c238 then L798() else L799(c237, r274);
  L141():
    nrr8 = ld nrr;
    check L840() else D187();
  L151(dx93):
    goto L152();
  L176(nvars7, r358):
    r360 = seq_len(r358);
    goto L175(nvars7, r360);
  L177(dx98):
    st jseq = dx98;
    j11 = ld j;
    check L917() else D222();
  L189(r394):
    sym81 = ldf sum;
    base81 = ldf sum in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L955() else L956();
  L222(r460):
    st value = r460;
    goto L223();
  L224(r464):
    st m = r464;
    sym97 = ldf `is.list`;
    base97 = ldf `is.list` in base;
    guard97 = `==`.4(sym97, base97);
    if guard97 then L1058() else L1059();
  L490():
    goto L37(N3, r102);
  L492():
    rep = ldf rep in base;
    r106 = dyn rep(<sym value>, <lang length(o)>);
    goto L39(r106);
  L493():
    r104 = dyn base21[, `length.out`](<sym value>, <lang length(o)>);
    goto L39(r104);
  L495():
    value10 = force? value9;
    checkMissing(value10);
    c52 = `is.object`(value10);
    if c52 then L496() else L497(value10);
  L557():
    goto L61(c93, r147);
  L562():
    goto L63();
  L565():
    st nv = r152;
    sym31 = ldf seq_len;
    base31 = ldf seq_len in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L566() else L567();
  L792():
    goto L136(r272);
  L794():
    value37 = ld value;
    check L796() else D170();
  L795():
    r273 = dyn base56(<sym value>);
    goto L138(c232, r273);
  L806():
    sym58 = ldf attr;
    base58 = ldf attr in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L807() else L808();
  L847():
    goto L153(r315);
  L850():
    rows9 = force? rows8;
    checkMissing(rows9);
    length10 = ldf length in base;
    r318 = dyn length10(rows9);
    check L851() else D193();
  L909():
    n12 = ld n;
    check L911() else D219();
  L910():
    r357 = dyn base73(<sym n>);
    goto L176(nvars1, r357);
  L913():
    dr46 = tryDispatchBuiltin.0("[<-", l39, r361);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L915() else L914(r361, dr46);
  L914(r363, l41):
    n14 = ld n;
    check L916() else D221();
  L951():
    new_cols = ld `new.cols`;
    check L953() else D235();
  L952():
    r393 = dyn base80(<sym new.cols>);
    goto L189(r393);
  L1050():
    list = ldf list in base;
    r461 = dyn list(NULL);
    check L1052() else D279();
  L1051():
    r459 = dyn base95(NULL);
    goto L222(r459);
  L1054():
    value47 = ld value;
    check L1056() else D280();
  L1055():
    r463 = dyn base96(<sym value>);
    goto L224(r463);
  D170():
    deopt 666 [c232, value37];
  D187():
    deopt 726 [nrr8];
  D193():
    deopt 751 [r318];
  D219():
    deopt 839 [nvars1, n12];
  D221():
    deopt 846 [r363, l41, r361, n14];
  D222():
    deopt 850 [j11];
  D235():
    deopt 898 [new_cols];
  D279():
    deopt 1051 [r461];
  D280():
    deopt 1057 [value47];
  L41(dx9):
    st value = dx9;
    index = ld index;
    check L500() else D49();
  L64(r154):
    s = toForSeq(r154);
    l5 = length(s);
    i27 = 0;
    goto L67(i27);
  L139(c242, dx78):
    sym57 = ldf length;
    base57 = ldf length in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L801() else L802();
  L142(r284):
    c250 = `is.object`(r284);
    if c250 then L811() else L812(r284);
  L190(r399, r400):
    r403 = `!=`(r399, r400);
    c277 = `as.logical`(r403);
    if c277 then L960() else L191();
  L225(r467):
    r469 = `!`(r467);
    c317 = `as.logical`(r469);
    if c317 then L1062() else L226();
  L496():
    dr8 = tryDispatchBuiltin.1("[", value10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L498() else L497(dr8);
  L497(value12):
    o4 = ld o;
    check L499() else D48();
  L566():
    sym32 = ldf dim;
    base32 = ldf dim in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L568() else L569();
  L567():
    r153 = dyn base31(<lang `[`(dim(i), 2)>);
    goto L64(r153);
  L796():
    value38 = force? value37;
    checkMissing(value38);
    dim5 = ldf dim in base;
    r275 = dyn dim5(value38);
    check L797() else D171();
  L798():
    dr36 = tryDispatchBuiltin.1("[", r274);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L800() else L799(c237, dr36);
  L799(c240, r277):
    __14 = ldf `[` in base;
    r278 = dyn __14(r277, 1);
    goto L139(c240, r278);
  L807():
    value39 = ld value;
    check L809() else D174();
  L808():
    r283 = dyn base58(<sym value>, "row.names");
    goto L142(r283);
  L840():
    nrr9 = force? nrr8;
    checkMissing(nrr9);
    st `new.rows` = nrr9;
    goto L151(nrr9);
  L851():
    goto L154(r318);
  L911():
    n13 = force? n12;
    checkMissing(n13);
    sum3 = ldf sum in base;
    r359 = dyn sum3(n13);
    check L912() else D220();
  L915():
    dx97 = getTryDispatchBuiltinValue(dr46);
    goto L177(dx97);
  L916():
    n15 = force? n14;
    ___5 = ldf `[<-` in base;
    r366 = dyn ___5(l41, r361, n15);
    goto L177(r366);
  L917():
    j12 = force? j11;
    checkMissing(j12);
    c263 = `is.object`(j12);
    if c263 then L918() else L919(j12);
  L953():
    new_cols1 = force? new_cols;
    checkMissing(new_cols1);
    length11 = ldf length in base;
    r395 = dyn length11(new_cols1);
    check L954() else D236();
  L955():
    jseq8 = ld jseq;
    check L957() else D237();
  L956():
    r398 = dyn base81(<lang `>`(jseq, nvars)>);
    goto L190(r394, r398);
  L1052():
    goto L222(r461);
  L1056():
    value48 = force? value47;
    checkMissing(value48);
    length17 = ldf length in base;
    r465 = dyn length17(value48);
    check L1057() else D281();
  L1058():
    value49 = ld value;
    check L1060() else D282();
  L1059():
    r466 = dyn base97(<sym value>);
    goto L225(r466);
  D48():
    deopt 193 [value12, o4];
  D49():
    deopt 197 [index];
  D171():
    deopt 669 [c232, r275];
  D174():
    deopt 682 [value39];
  D220():
    deopt 842 [nvars1, r359];
  D236():
    deopt 901 [r395];
  D237():
    deopt 903 [r394, jseq8];
  D281():
    deopt 1060 [r465];
  D282():
    deopt 1064 [value49];
  L65(r156):
    c103 = `is.object`(r156);
    if c103 then L572() else L573(r156);
  L67(i28):
    i29 = `+`.1(i28, 1);
    c104 = `<`.1(l5, i29);
    if c104 then L575() else L90();
  L140(c245, dx81, r280):
    r282 = `>=`(dx81, r280);
    c246 = `as.logical`(r282);
    c247 = `&&`(c245, c246);
    goto L137(c247);
  L143(dx83):
    st `new.rows` = dx83;
    duplicated = ldf duplicated;
    check L817() else D177();
  L178(dx100):
    st `new.cols` = dx100;
    goto L179(dx100);
  L191():
    goto L192();
  L192():
    sym82 = ldf `is.list`;
    base82 = ldf `is.list` in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L964() else L965();
  L226():
    sym106 = ldf unclass;
    base106 = ldf unclass in base;
    guard106 = `==`.4(sym106, base106);
    if guard106 then L1139() else L1140();
  L250():
    dimv = ld dimv;
    check L1229() else D364();
  L498():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L41(dx8);
  L499():
    o5 = force? o4;
    __4 = ldf `[` in base;
    r108 = dyn __4(value12, o5);
    goto L41(r108);
  L500():
    index1 = force? index;
    checkMissing(index1);
    st i = index1;
    goto L42();
  L568():
    i25 = ld i;
    check L570() else D78();
  L569():
    r155 = dyn base32(<sym i>);
    goto L65(r155);
  L797():
    goto L138(c232, r275);
  L800():
    dx77 = getTryDispatchBuiltinValue(dr36);
    goto L139(c237, dx77);
  L801():
    nrr = ld nrr;
    check L803() else D172();
  L802():
    r279 = dyn base57(<sym nrr>);
    goto L140(c242, dx78, r279);
  L809():
    value40 = force? value39;
    checkMissing(value40);
    attr2 = ldf attr in base;
    r285 = dyn attr2(value40, "row.names");
    check L810() else D175();
  L811():
    dr38 = tryDispatchBuiltin.1("[", r284);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L813() else L812(dr38);
  L812(r287):
    sym59 = ldf seq_along;
    base59 = ldf seq_along in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L814() else L815();
  L912():
    goto L176(nvars1, r359);
  L918():
    dr48 = tryDispatchBuiltin.1("[", j12);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L920() else L919(dr48);
  L919(j14):
    n16 = ld n;
    check L921() else D223();
  L954():
    goto L189(r395);
  L957():
    jseq9 = force? jseq8;
    checkMissing(jseq9);
    nvars12 = ld nvars;
    check L958() else D238();
  L960():
    stop7 = ldf stop;
    check L961() else D240();
  L1057():
    goto L224(r465);
  L1060():
    value50 = force? value49;
    checkMissing(value50);
    is_list1 = ldf `is.list` in base;
    r468 = dyn is_list1(value50);
    check L1061() else D283();
  L1062():
    p20 = ld p;
    check L1063() else D284();
  D78():
    deopt 309 [i25];
  D172():
    deopt 674 [c242, dx78, nrr];
  D175():
    deopt 686 [r285];
  D177():
    deopt 694 [];
  D223():
    deopt 852 [j14, n16];
  D238():
    deopt 904 [r394, jseq9, nvars12];
  D240():
    deopt 911 [];
  D283():
    deopt 1067 [r468];
  D284():
    deopt 1069 [p20];
  D364():
    deopt 1348 [dimv];
  L66(dx11):
    r161 = seq_len(dx11);
    goto L64(r161);
  L90():
    x15 = `[[`(s, i29, NULL, TRUE);
    st v = x15;
    i32 = ld i;
    check L576() else D80();
  L144(r291, r292):
    __15 = ldf `[` in base;
    r294 = dyn __15(r291, r292);
    goto L143(r294);
  L193(r407):
    c278 = `as.logical`(r407);
    if c278 then L968() else L194(c278);
  L251(r551):
    st value = r551;
    vapply = ldf vapply;
    check L1143() else D327();
  L570():
    i26 = force? i25;
    checkMissing(i26);
    dim4 = ldf dim in base;
    r157 = dyn dim4(i26);
    check L571() else D79();
  L572():
    dr10 = tryDispatchBuiltin.1("[", r156);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L574() else L573(dr10);
  L573(r159):
    __6 = ldf `[` in base;
    r160 = dyn __6(r159, 2);
    goto L66(r160);
  L575():
    x20 = ld x;
    check L648() else D106();
  L803():
    nrr1 = force? nrr;
    checkMissing(nrr1);
    length9 = ldf length in base;
    r281 = dyn length9(nrr1);
    check L804() else D173();
  L810():
    goto L142(r285);
  L813():
    dx82 = getTryDispatchBuiltinValue(dr38);
    goto L143(dx82);
  L814():
    nrr2 = ld nrr;
    check L816() else D176();
  L815():
    r290 = dyn base59(<sym nrr>);
    goto L144(r287, r290);
  L817():
    p9 = prom<V +>{
      new_rows4 = ld `new.rows`;
      new_rows5 = force? new_rows4;
      checkMissing(new_rows5);
      return new_rows5;
    };
    r296 = dyn duplicated(p9);
    check L818() else D178();
  L920():
    dx99 = getTryDispatchBuiltinValue(dr48);
    goto L178(dx99);
  L921():
    n17 = force? n16;
    __18 = ldf `[` in base;
    r367 = dyn __18(j14, n17);
    goto L178(r367);
  L958():
    nvars13 = force? nvars12;
    checkMissing(nvars13);
    r401 = `>`(jseq9, nvars13);
    sum4 = ldf sum in base;
    r402 = dyn sum4(r401);
    check L959() else D239();
  L961():
    r404 = dyn stop7("new columns would leave holes after existing columns");
    check L962() else D241();
  L964():
    value41 = ld value;
    check L966() else D242();
  L965():
    r406 = dyn base82(<sym value>);
    goto L193(r406);
  L1061():
    goto L225(r468);
  L1063():
    p21 = force? p20;
    checkMissing(p21);
    r470 = `==`(p21, 1);
    c318 = `as.logical`(r470);
    if c318 then L1064() else L227();
  L1139():
    value65 = ld value;
    check L1141() else D325();
  L1140():
    r550 = dyn base106(<sym value>);
    goto L251(r550);
  L1229():
    dimv1 = force? dimv;
    checkMissing(dimv1);
    c406 = `is.object`(dimv1);
    if c406 then L1230() else L1231(dimv1);
  D79():
    deopt 312 [r157];
  D80():
    deopt 317 [i29, i32];
  D106():
    deopt 415 [x20];
  D173():
    deopt 677 [c242, dx78, r281];
  D176():
    deopt 688 [r287, nrr2];
  D178():
    deopt 696 [r296];
  D239():
    deopt 908 [r394, r402];
  D241():
    deopt 913 [r404];
  D242():
    deopt 918 [value41];
  D325():
    deopt 1211 [value65];
  D327():
    deopt 1217 [];
  L194(c280):
    c291 = `as.logical`(c280);
    if c291 then L976() else L197();
  L227():
    m = ld m;
    check L1113() else D308();
  L244():
    sym105 = ldf c;
    base105 = ldf c in base;
    guard105 = `==`.4(sym105, base105);
    if guard105 then L1133() else L1134();
  L279(dx132):
    st nrowv = dx132;
    nrowv = ld nrowv;
    check L1233() else D365();
  L571():
    goto L65(r157);
  L574():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L66(dx10);
  L576():
    i33 = force? i32;
    checkMissing(i33);
    c105 = `is.object`(i33);
    if c105 then L577() else L578(i29, i33);
  L648():
    x21 = force? x20;
    checkMissing(x21);
    popenv;
    return x21;
  L804():
    goto L140(c242, dx78, r281);
  L816():
    nrr3 = force? nrr2;
    checkMissing(nrr3);
    r293 = seq_along(nrr3);
    goto L144(r287, r293);
  L818():
    sym60 = ldf match;
    base60 = ldf match in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L819() else L820();
  L959():
    goto L190(r394, r402);
  L962():
    goto L192();
  L966():
    value42 = force? value41;
    checkMissing(value42);
    is_list = ldf `is.list` in base;
    r408 = dyn is_list(value42);
    check L967() else D243();
  L968():
    sym83 = ldf `is.null`;
    base83 = ldf `is.null` in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L969() else L970();
  L1064():
    NROW = ldf NROW;
    check L1065() else D285();
  L1141():
    value66 = force? value65;
    checkMissing(value66);
    unclass = ldf unclass in base;
    r552 = dyn unclass(value66);
    check L1142() else D326();
  L1143():
    p54 = prom<V +>{
      value67 = ld value;
      value68 = force? value67;
      checkMissing(value68);
      return value68;
    };
    p55 = prom<V +>{
      NROW1 = ld NROW;
      NROW2 = force? NROW1;
      checkMissing(NROW2);
      return NROW2;
    };
    r555 = dyn vapply(p54, p55, 1);
    check L1144() else D328();
  L1230():
    dr66 = tryDispatchBuiltin.1("[", dimv1);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L1232() else L1231(dr66);
  L1231(dimv3):
    __28 = ldf `[` in base;
    r625 = dyn __28(dimv3, 1);
    goto L279(r625);
  D243():
    deopt 921 [r408];
  D285():
    deopt 1074 [];
  D308():
    deopt 1158 [m];
  D326():
    deopt 1214 [r552];
  D328():
    deopt 1221 [r555];
  D365():
    deopt 1354 [nrowv];
  L68(i39, dx13):
    st thisvar = dx13;
    sym33 = ldf sum;
    base33 = ldf sum in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L581() else L582();
  L145(r300, r301):
    r303 = `||`(r300, r301);
    st repl = r303;
    sym61 = ldf any;
    base61 = ldf any in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L824() else L825();
  L195(c283, r410):
    r414 = `!`(r410);
    c288 = `as.logical`(r414);
    c289 = `&&`(c283, c288);
    goto L194(c289);
  L197():
    goto L204(NULL);
  L204(dx107):
    goto L180(dx107);
  L249(r547):
    st dimv = r547;
    goto L250();
  L577():
    dr12 = tryDispatchBuiltin.1("[", i33);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L579() else L578(i29, dr12);
  L578(i36, i37):
    v = ld v;
    check L580() else D81();
  L819():
    new_rows6 = ld `new.rows`;
    check L821() else D179();
  L820():
    r299 = dyn base60(<sym new.rows>, <sym rows>, 0);
    goto L145(r296, r299);
  L967():
    goto L193(r408);
  L969():
    sym84 = ldf names;
    base84 = ldf names in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L971() else L972();
  L970():
    r409 = dyn base83(<lang `<-`(vnm, names(value))>);
    goto L195(c278, r409);
  L976():
    sym85 = ldf length;
    base85 = ldf length in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L977() else L978();
  L1065():
    p22 = prom<V +>{
      value51 = ld value;
      value52 = force? value51;
      checkMissing(value52);
      return value52;
    };
    r472 = dyn NROW(p22);
    check L1066() else D286();
  L1113():
    m1 = force? m;
    checkMissing(m1);
    n28 = ld n;
    check L1114() else D309();
  L1133():
    n36 = ld n;
    check L1135() else D322();
  L1134():
    r546 = dyn base105(<sym n>, <sym p>);
    goto L249(r546);
  L1142():
    goto L251(r552);
  L1144():
    st lens = r555;
    sym107 = ldf seq_along;
    base107 = ldf seq_along in base;
    guard107 = `==`.4(sym107, base107);
    if guard107 then L1145() else L1146();
  L1232():
    dx131 = getTryDispatchBuiltinValue(dr66);
    goto L279(dx131);
  L1233():
    nrowv1 = force? nrowv;
    checkMissing(nrowv1);
    n58 = ld n;
    check L1234() else D366();
  D81():
    deopt 320 [i36, i37, v];
  D179():
    deopt 698 [r296, new_rows6];
  D286():
    deopt 1076 [r472];
  D309():
    deopt 1159 [m1, n28];
  D322():
    deopt 1202 [n36];
  D366():
    deopt 1355 [nrowv1, n58];
  L69(i42, r164):
    st nv = r164;
    nv = ld nv;
    check L585() else D84();
  L146(r305):
    c251 = `as.logical`(r305);
    if c251 then L828() else L147();
  L196(c286, r412):
    st vnm = r412;
    c287 = `==`(r412, NULL);
    goto L195(c286, c287);
  L198(r416):
    st p = r416;
    sym86 = ldf length;
    base86 = ldf length in base;
    guard86 = `==`.4(sym86, base86);
    if guard86 then L981() else L982();
  L252(r557):
    s1 = toForSeq(r557);
    l43 = length(s1);
    i126 = 0;
    goto L253(i126);
  L579():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L68(i29, dx12);
  L580():
    v1 = force? v;
    __7 = ldf `[` in base;
    r162 = dyn __7(i33, <missing>, v1, TRUE);
    goto L68(i36, r162);
  L581():
    thisvar = ld thisvar;
    check L583() else D82();
  L582():
    r163 = dyn base33[, `na.rm`](<sym thisvar>, TRUE);
    goto L69(i39, r163);
  L821():
    new_rows7 = force? new_rows6;
    checkMissing(new_rows7);
    rows4 = ld rows;
    check L822() else D180();
  L824():
    repl = ld repl;
    check L826() else D182();
  L825():
    r304 = dyn base61(<sym repl>);
    goto L146(r304);
  L971():
    value43 = ld value;
    check L973() else D244();
  L972():
    r411 = dyn base84(<sym value>);
    goto L196(c278, r411);
  L977():
    jseq10 = ld jseq;
    check L979() else D246();
  L978():
    r415 = dyn base85(<sym jseq>);
    goto L198(r415);
  L1066():
    st N = r472;
    N19 = ld N;
    check L1067() else D287();
  L1114():
    n29 = force? n28;
    checkMissing(n29);
    p33 = ld p;
    check L1115() else D310();
  L1135():
    n37 = force? n36;
    checkMissing(n37);
    p52 = ld p;
    check L1136() else D323();
  L1145():
    lens = ld lens;
    check L1147() else D329();
  L1146():
    r556 = dyn base107(<sym lens>);
    goto L252(r556);
  L1234():
    n59 = force? n58;
    checkMissing(n59);
    r626 = `<`(nrowv1, n59);
    c407 = `as.logical`(r626);
    if c407 then L1235() else L280(c407);
  D82():
    deopt 329 [i39, thisvar];
  D84():
    deopt 336 [i42, nv];
  D180():
    deopt 700 [r296, rows4];
  D182():
    deopt 710 [repl];
  D244():
    deopt 925 [c278, value43];
  D246():
    deopt 935 [jseq10];
  D287():
    deopt 1078 [N19];
  D310():
    deopt 1160 [m1, n29, p33];
  D323():
    deopt 1204 [p52];
  D329():
    deopt 1224 [lens];
  L147():
    goto L150(NULL);
  L150(dx92):
    goto L151(dx92);
  L199(r419):
    p15 = ld p;
    check L985() else D250();
  L253(i127):
    i128 = `+`.1(i127, 1);
    c360 = `<`.1(l43, i128);
    if c360 then L1148() else L276();
  L280(c409):
    c413 = `as.logical`(c409);
    if c413 then L1238() else L281();
  L583():
    thisvar1 = force? thisvar;
    checkMissing(thisvar1);
    sum1 = ldf sum in base;
    r165 = dyn sum1(thisvar1, TRUE);
    check L584() else D83();
  L585():
    nv1 = force? nv;
    checkMissing(nv1);
    c106 = `as.logical`(nv1);
    if c106 then L586() else L70();
  L822():
    rows5 = force? rows4;
    checkMissing(rows5);
    match1 = ldf match in base;
    r302 = dyn match1(new_rows7, rows5, 0, NULL);
    check L823() else D181();
  L826():
    repl1 = force? repl;
    checkMissing(repl1);
    any = ldf any in base;
    r306 = dyn any(repl1);
    check L827() else D183();
  L828():
    nrr4 = ld nrr;
    check L829() else D184();
  L973():
    value44 = force? value43;
    checkMissing(value44);
    names3 = ldf names in base;
    r413 = dyn names3(value44);
    check L974() else D245();
  L979():
    jseq11 = force? jseq10;
    checkMissing(jseq11);
    length12 = ldf length in base;
    r417 = dyn length12(jseq11);
    check L980() else D247();
  L981():
    vnm = ld vnm;
    check L983() else D248();
  L982():
    r418 = dyn base86(<sym vnm>);
    goto L199(r418);
  L1067():
    N20 = force? N19;
    checkMissing(N20);
    n20 = ld n;
    check L1068() else D288();
  L1115():
    p34 = force? p33;
    checkMissing(p34);
    r519 = `*`(n29, p34);
    r520 = `<`(m1, r519);
    c342 = `as.logical`(r520);
    if c342 then L1116() else L245(c342);
  L1136():
    p53 = force? p52;
    checkMissing(p53);
    c359 = ldf c in base;
    r548 = dyn c359(n37, p53);
    check L1137() else D324();
  L1147():
    lens1 = force? lens;
    checkMissing(lens1);
    r558 = seq_along(lens1);
    goto L252(r558);
  L1235():
    nrowv2 = ld nrowv;
    check L1236() else D367();
  D83():
    deopt 334 [i39, r165];
  D181():
    deopt 705 [r296, r302];
  D183():
    deopt 713 [r306];
  D184():
    deopt 714 [nrr4];
  D245():
    deopt 928 [c278, r413];
  D247():
    deopt 938 [r417];
  D248():
    deopt 942 [vnm];
  D250():
    deopt 945 [r419, p15];
  D288():
    deopt 1079 [N20, n20];
  D324():
    deopt 1207 [r548];
  D367():
    deopt 1358 [c407, nrowv2];
  L70():
    goto L89(i42);
  L89(i99):
    n10 = ld n;
    check L646() else D104();
  L245(c344):
    c357 = `as.logical`(c344);
    if c357 then L1125() else L247();
  L276():
    x46 = `[[`(s1, i128, NULL, TRUE);
    st k = x46;
    lens2 = ld lens;
    check L1149() else D330();
  L281():
    nrowv12 = ld nrowv;
    check L1258() else D377();
  L287():
    dimv4 = ld dimv;
    check L1264() else D381();
  L584():
    goto L69(i39, r165);
  L586():
    sym34 = ldf `is.matrix`;
    base34 = ldf `is.matrix` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L587() else L588();
  L823():
    goto L145(r296, r302);
  L827():
    goto L146(r306);
  L829():
    nrr5 = force? nrr4;
    checkMissing(nrr5);
    c252 = `is.object`(nrr5);
    if c252 then L830() else L831(nrr5);
  L974():
    goto L196(c278, r413);
  L980():
    goto L198(r417);
  L983():
    vnm1 = force? vnm;
    checkMissing(vnm1);
    length13 = ldf length in base;
    r420 = dyn length13(vnm1);
    check L984() else D249();
  L985():
    p16 = force? p15;
    checkMissing(p16);
    r421 = `<`(r419, p16);
    c292 = `as.logical`(r421);
    if c292 then L986() else L200();
  L1068():
    n21 = force? n20;
    checkMissing(n21);
    r473 = `>`(N20, n21);
    c319 = `as.logical`(r473);
    if c319 then L1069() else L228();
  L1116():
    m2 = ld m;
    check L1117() else D311();
  L1137():
    goto L249(r548);
  L1148():
    sym112 = ldf c;
    base112 = ldf c in base;
    guard112 = `==`.4(sym112, base112);
    if guard112 then L1221() else L1222();
  L1236():
    nrowv3 = force? nrowv2;
    checkMissing(nrowv3);
    r627 = `>`(nrowv3, 0);
    c410 = `as.logical`(r627);
    c411 = `&&`(c407, c410);
    goto L280(c411);
  L1238():
    n60 = ld n;
    check L1239() else D368();
  D104():
    deopt 407 [i99, n10];
  D249():
    deopt 945 [r420];
  D311():
    deopt 1164 [c342, m2];
  D330():
    deopt 1227 [i128, lens2];
  D368():
    deopt 1364 [n60];
  D377():
    deopt 1396 [nrowv12];
  D381():
    deopt 1408 [dimv4];
  L71(i47, r167):
    c108 = `as.logical`(r167);
    if c108 then L595() else L73();
  L148(dx85):
    l36 = ld `new.rows`;
    c253 = `is.object`(l36);
    if c253 then L834() else L835(dx85, l36);
  L200():
    goto L202();
  L202():
    vnm4 = ld vnm;
    check L993() else D254();
  L228():
    goto L229();
  L229():
    N25 = ld N;
    check L1073() else D291();
  L247():
    goto L248();
  L248():
    matrix = ldf matrix;
    check L1129() else D318();
  L277(r620):
    st dimv = r620;
    goto L250();
  L587():
    x16 = ld x;
    check L589() else D85();
  L588():
    r166 = dyn base34(<lang `[[`(x, v)>);
    goto L71(i42, r166);
  L646():
    n11 = force? n10;
    checkMissing(n11);
    nv6 = ld nv;
    check L647() else D105();
  L830():
    dr40 = tryDispatchBuiltin.1("[", nrr5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L832() else L831(dr40);
  L831(nrr7):
    repl2 = ld repl;
    check L833() else D185();
  L984():
    goto L199(r420);
  L986():
    sym87 = ldf rep_len;
    base87 = ldf rep_len in base;
    guard87 = `==`.4(sym87, base87);
    if guard87 then L987() else L988();
  L1069():
    stop9 = ldf stop;
    check L1070() else D289();
  L1117():
    m3 = force? m2;
    checkMissing(m3);
    r521 = `==`(m3, 0);
    c345 = `as.logical`(r521);
    if c345 then L246(c342, c345) else L1118();
  L1125():
    stop11 = ldf stop;
    check L1126() else D316();
  L1149():
    lens3 = force? lens2;
    checkMissing(lens3);
    c361 = `is.object`(lens3);
    if c361 then L1150() else L1151(i128, lens3);
  L1221():
    n56 = ld n;
    check L1223() else D360();
  L1222():
    r619 = dyn base112(<sym n>, <lang length(value)>);
    goto L277(r619);
  L1239():
    n61 = force? n60;
    checkMissing(n61);
    nrowv4 = ld nrowv;
    check L1240() else D369();
  L1258():
    nrowv13 = force? nrowv12;
    checkMissing(nrowv13);
    n66 = ld n;
    check L1259() else D378();
  L1264():
    dimv5 = force? dimv4;
    checkMissing(dimv5);
    c417 = `is.object`(dimv5);
    if c417 then L1265() else L1266(dimv5);
  D85():
    deopt 340 [i42, x16];
  D105():
    deopt 408 [i99, n11, nv6];
  D185():
    deopt 716 [nrr7, repl2];
  D254():
    deopt 959 [vnm4];
  D289():
    deopt 1083 [];
  D291():
    deopt 1090 [N25];
  D316():
    deopt 1180 [];
  D318():
    deopt 1188 [];
  D360():
    deopt 1337 [n56];
  D369():
    deopt 1366 [nrowv4];
  D378():
    deopt 1397 [nrowv13, n66];
  L73():
    N17 = ld N;
    check L621() else D96();
  L81(i76, dx43):
    goto L89(i76);
  L149(dx90, dx91):
    st `new.rows` = dx91;
    goto L150(dx90);
  L201(r423):
    st vnm = r423;
    goto L202();
  L246(c346, c347):
    c354 = `as.logical`(c347);
    c355 = `&&`(c346, c354);
    goto L245(c355);
  L254(i134, dx110):
    st N = dx110;
    n38 = ld n;
    check L1154() else D332();
  L289(dx138):
    st ncolv = dx138;
    sym116 = ldf seq_len;
    base116 = ldf seq_len in base;
    guard116 = `==`.4(sym116, base116);
    if guard116 then L1268() else L1269();
  L589():
    x17 = force? x16;
    checkMissing(x17);
    c107 = `is.object`(x17);
    if c107 then L590() else L591(i42, x17);
  L595():
    N15 = ld N;
    check L596() else D88();
  L647():
    nv7 = force? nv6;
    checkMissing(nv7);
    r188 = `+`(n11, nv7);
    st n = r188;
    goto L67(i99);
  L832():
    dx84 = getTryDispatchBuiltinValue(dr40);
    goto L148(dx84);
  L833():
    repl3 = force? repl2;
    __16 = ldf `[` in base;
    r307 = dyn __16(nrr7, repl3);
    goto L148(r307);
  L834():
    dr42 = tryDispatchBuiltin.0("[<-", l36, dx85);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L836() else L835(dx85, dr42);
  L835(dx87, l38):
    repl4 = ld repl;
    check L837() else D186();
  L987():
    vnm2 = ld vnm;
    check L989() else D251();
  L988():
    r422 = dyn base87(<sym vnm>, <sym p>);
    goto L201(r422);
  L993():
    vnm5 = force? vnm4;
    checkMissing(vnm5);
    c293 = `is.object`(vnm5);
    if c293 then L994() else L995(vnm5);
  L1070():
    p27 = prom<V +>{
      sprintf = ldf sprintf;
      p24 = prom<V +>{
        ngettext = ldf ngettext;
        p23 = prom<V +>{
          N21 = ld N;
          N22 = force? N21;
          checkMissing(N22);
          return N22;
        };
        r475 = dyn ngettext(p23, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
        return r475;
      };
      p25 = prom<V +>{
        N23 = ld N;
        N24 = force? N23;
        checkMissing(N24);
        return N24;
      };
      p26 = prom<V +>{
        n22 = ld n;
        n23 = force? n22;
        checkMissing(n23);
        return n23;
      };
      r479 = dyn sprintf(p24, p25, p26);
      return r479;
    };
    r481 = dyn stop9[, domain](p27, NA_LGL);
    check L1071() else D290();
  L1073():
    N26 = force? N25;
    checkMissing(N26);
    n24 = ld n;
    check L1074() else D292();
  L1118():
    n30 = ld n;
    check L1119() else D312();
  L1126():
    p43 = prom<V +>{
      sprintf2 = ldf sprintf;
      p38 = prom<V +>{
        ngettext2 = ldf ngettext;
        p37 = prom<V +>{
          m6 = ld m;
          m7 = force? m6;
          checkMissing(m7);
          return m7;
        };
        r525 = dyn ngettext2(p37, "replacement has %d item, need %d", "replacement has %d items, need %d");
        return r525;
      };
      p39 = prom<V +>{
        m8 = ld m;
        m9 = force? m8;
        checkMissing(m9);
        return m9;
      };
      p42 = prom<V +>{
        n32 = ld n;
        n33 = force? n32;
        checkMissing(n33);
        p40 = ld p;
        p41 = force? p40;
        checkMissing(p41);
        r528 = `*`(n33, p41);
        return r528;
      };
      r530 = dyn sprintf2(p38, p39, p42);
      return r530;
    };
    r532 = dyn stop11[, domain](p43, NA_LGL);
    check L1127() else D317();
  L1129():
    p44 = prom<V +>{
      value59 = ld value;
      value60 = force? value59;
      checkMissing(value60);
      return value60;
    };
    p45 = prom<V +>{
      n34 = ld n;
      n35 = force? n34;
      checkMissing(n35);
      return n35;
    };
    p48 = prom<V +>{
      p46 = ld p;
      p47 = force? p46;
      checkMissing(p47);
      return p47;
    };
    r537 = dyn matrix(p44, p45, p48);
    check L1130() else D319();
  L1150():
    dr54 = tryDispatchBuiltin.1("[", lens3);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L1152() else L1151(i128, dr54);
  L1151(i132, lens5):
    k = ld k;
    check L1153() else D331();
  L1223():
    n57 = force? n56;
    checkMissing(n57);
    sym113 = ldf length;
    base113 = ldf length in base;
    guard113 = `==`.4(sym113, base113);
    if guard113 then L1224() else L1225();
  L1240():
    nrowv5 = force? nrowv4;
    checkMissing(nrowv5);
    __29 = ldf `%%` in base;
    r628 = dyn __29(n61, nrowv5);
    check L1241() else D370();
  L1259():
    n67 = force? n66;
    checkMissing(n67);
    r645 = `>`(nrowv13, n67);
    c416 = `as.logical`(r645);
    if c416 then L1260() else L288();
  L1265():
    dr70 = tryDispatchBuiltin.1("[", dimv5);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L1267() else L1266(dr70);
  L1266(dimv7):
    __31 = ldf `[` in base;
    r654 = dyn __31(dimv7, 2);
    goto L289(r654);
  D88():
    deopt 347 [i47, N15];
  D96():
    deopt 377 [i47, N17];
  D186():
    deopt 720 [dx87, l38, dx85, repl4];
  D251():
    deopt 950 [vnm2];
  D290():
    deopt 1087 [r481];
  D292():
    deopt 1091 [N26, n24];
  D312():
    deopt 1169 [c342, c345, n30];
  D317():
    deopt 1184 [r532];
  D319():
    deopt 1192 [r537];
  D331():
    deopt 1229 [i132, lens5, k];
  D332():
    deopt 1233 [i134, n38];
  D370():
    deopt 1369 [r628];
  L72(i51, dx15):
    is_matrix2 = ldf `is.matrix` in base;
    r169 = dyn is_matrix2(dx15);
    check L594() else D87();
  L203(dx106):
    st `new.cols` = dx106;
    goto L204(dx106);
  L278(r622):
    c405 = ldf c in base;
    r624 = dyn c405(n57, r622);
    check L1228() else D363();
  L288():
    goto L287();
  L290(r656):
    st jvseq = r656;
    ncolv = ld ncolv;
    check L1271() else D383();
  L590():
    dr14 = tryDispatchBuiltin.1("[[", x17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L592() else L591(i42, dr14);
  L591(i49, x19):
    v2 = ld v;
    check L593() else D86();
  L596():
    N16 = force? N15;
    checkMissing(N16);
    r170 = `>`(N16, 1);
    c109 = `as.logical`(r170);
    if c109 then L597() else L74();
  L621():
    N18 = force? N17;
    checkMissing(N18);
    r179 = `>`(N18, 1);
    c114 = `as.logical`(r179);
    if c114 then L622() else L82();
  L836():
    dx89 = getTryDispatchBuiltinValue(dr42);
    goto L149(dx85, dx89);
  L837():
    repl5 = force? repl4;
    ___4 = ldf `[<-` in base;
    r308 = dyn ___4(l38, dx85, repl5);
    goto L149(dx87, r308);
  L989():
    vnm3 = force? vnm2;
    checkMissing(vnm3);
    p17 = ld p;
    check L990() else D252();
  L994():
    dr52 = tryDispatchBuiltin.1("[", vnm5);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L996() else L995(dr52);
  L995(vnm7):
    jseq12 = ld jseq;
    check L997() else D255();
  L1071():
    goto L229();
  L1074():
    n25 = force? n24;
    checkMissing(n25);
    r483 = `<`(N26, n25);
    c320 = `as.logical`(r483);
    if c320 then L1075() else L230(c320);
  L1119():
    n31 = force? n30;
    checkMissing(n31);
    p35 = ld p;
    check L1120() else D313();
  L1127():
    goto L248();
  L1130():
    st value = r537;
    split = ldf split;
    check L1131() else D320();
  L1152():
    dx109 = getTryDispatchBuiltinValue(dr54);
    goto L254(i128, dx109);
  L1153():
    k1 = force? k;
    __23 = ldf `[` in base;
    r559 = dyn __23(lens5, k1);
    goto L254(i132, r559);
  L1154():
    n39 = force? n38;
    checkMissing(n39);
    N35 = ld N;
    check L1155() else D333();
  L1224():
    value77 = ld value;
    check L1226() else D361();
  L1225():
    r621 = dyn base113(<sym value>);
    goto L278(r621);
  L1241():
    r629 = `==`(r628, 0);
    c414 = `as.logical`(r629);
    if c414 then L1242() else L282();
  L1260():
    warning3 = ldf warning;
    check L1261() else D379();
  L1267():
    dx137 = getTryDispatchBuiltinValue(dr70);
    goto L289(dx137);
  L1268():
    p84 = ld p;
    check L1270() else D382();
  L1269():
    r655 = dyn base116(<sym p>);
    goto L290(r655);
  D86():
    deopt 342 [i49, x19, v2];
  D87():
    deopt 346 [i51, r169];
  D252():
    deopt 952 [p17];
  D255():
    deopt 961 [vnm7, jseq12];
  D313():
    deopt 1170 [c342, c345, n31, p35];
  D320():
    deopt 1195 [];
  D333():
    deopt 1234 [i134, n39, N35];
  D361():
    deopt 1341 [value77];
  D363():
    deopt 1346 [r624];
  D379():
    deopt 1401 [];
  D382():
    deopt 1415 [p84];
  D383():
    deopt 1419 [ncolv];
  L74():
    value24 = ld value;
    check L607() else D92();
  L77(i63, dx18):
    l6 = ld x;
    c111 = `is.object`(l6);
    if c111 then L608() else L609(i63, dx18, l6, dx18, l6);
  L82():
    value33 = ld value;
    check L632() else D100();
  L85(i86, dx46):
    l19 = ld x;
    c116 = `is.object`(l19);
    if c116 then L633() else L634(i86, dx46, l19, dx46, l19);
  L230(c322):
    c326 = `as.logical`(c322);
    if c326 then L1078() else L231();
  L282():
    stop14 = ldf stop;
    check L1255() else D375();
  L286(dx135):
    goto L287();
  L592():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L72(i42, dx14);
  L593():
    v3 = force? v2;
    __8 = ldf `[[` in base;
    r168 = dyn __8(x19, v3);
    goto L72(i49, r168);
  L594():
    goto L71(i51, r169);
  L597():
    value17 = ld value;
    check L598() else D89();
  L622():
    value26 = ld value;
    check L623() else D97();
  L990():
    p18 = force? p17;
    checkMissing(p18);
    rep_len = ldf rep_len in base;
    r424 = dyn rep_len(vnm3, p18);
    check L991() else D253();
  L996():
    dx105 = getTryDispatchBuiltinValue(dr52);
    goto L203(dx105);
  L997():
    jseq13 = force? jseq12;
    checkMissing(jseq13);
    nvars14 = ld nvars;
    check L998() else D256();
  L1075():
    N27 = ld N;
    check L1076() else D293();
  L1120():
    p36 = force? p35;
    checkMissing(p36);
    r522 = `*`(n31, p36);
    m4 = ld m;
    check L1121() else D314();
  L1131():
    p49 = prom<V +>{
      sym104 = ldf c;
      base104 = ldf c in base;
      guard104 = `==`.4(sym104, base104);
      if guard104 then L1() else L2();
    L0(r539):
      return r539;
    L1():
      value61 = ld value;
      value62 = force? value61;
      checkMissing(value62);
      c358 = ldf c in base;
      r540 = dyn c358(value62);
      goto L0(r540);
    L2():
      r538 = dyn base104(<sym value>);
      goto L0(r538);
    };
    p51 = prom<V +>{
      col = ldf col;
      p50 = prom<V +>{
        value63 = ld value;
        value64 = force? value63;
        checkMissing(value64);
        return value64;
      };
      r543 = dyn col(p50);
      return r543;
    };
    r545 = dyn split(p49, p51);
    check L1132() else D321();
  L1155():
    N36 = force? N35;
    checkMissing(N36);
    r560 = `!=`(n39, N36);
    c362 = `as.logical`(r560);
    if c362 then L1156() else L255(i134, c362);
  L1226():
    value78 = force? value77;
    checkMissing(value78);
    length20 = ldf length in base;
    r623 = dyn length20(value78);
    check L1227() else D362();
  L1228():
    goto L277(r624);
  L1242():
    value79 = ld value;
    check L1243() else D371();
  L1261():
    p83 = prom<V +>{
      sprintf7 = ldf sprintf;
      p80 = prom<V +>{
        ngettext7 = ldf ngettext;
        p79 = prom<V +>{
          nrowv14 = ld nrowv;
          nrowv15 = force? nrowv14;
          checkMissing(nrowv15);
          return nrowv15;
        };
        r647 = dyn ngettext7(p79, "replacement data has %d row to replace %d rows", "replacement data has %d rows to replace %d rows");
        return r647;
      };
      p81 = prom<V +>{
        nrowv16 = ld nrowv;
        nrowv17 = force? nrowv16;
        checkMissing(nrowv17);
        return nrowv17;
      };
      p82 = prom<V +>{
        n68 = ld n;
        n69 = force? n68;
        checkMissing(n69);
        return n69;
      };
      r651 = dyn sprintf7(p80, p81, p82);
      return r651;
    };
    r653 = dyn warning3[, domain](p83, NA_LGL);
    check L1262() else D380();
  L1270():
    p85 = force? p84;
    checkMissing(p85);
    r657 = seq_len(p85);
    goto L290(r657);
  L1271():
    ncolv1 = force? ncolv;
    checkMissing(ncolv1);
    p86 = ld p;
    check L1272() else D384();
  D89():
    deopt 351 [i47, value17];
  D92():
    deopt 360 [i47, value24];
  D97():
    deopt 381 [i47, value26];
  D100():
    deopt 390 [i47, value33];
  D253():
    deopt 955 [r424];
  D256():
    deopt 962 [vnm7, jseq13, nvars14];
  D293():
    deopt 1094 [c320, N27];
  D314():
    deopt 1173 [c342, c345, m4];
  D321():
    deopt 1198 [r545];
  D362():
    deopt 1344 [r623];
  D371():
    deopt 1372 [value79];
  D375():
    deopt 1391 [];
  D380():
    deopt 1405 [r653];
  D384():
    deopt 1420 [ncolv1, p86];
  L78(i67, dx26, l12, dx27, dx28):
    c112 = `is.object`(dx28);
    if c112 then L612() else L613(i67, dx26, l12, dx28);
  L86(i90, dx54, l25, dx55, dx56):
    c117 = `is.object`(dx56);
    if c117 then L637() else L638(i90, dx54, l25, dx56);
  L231():
    goto L238();
  L238():
    sym101 = ldf `is.null`;
    base101 = ldf `is.null` in base;
    guard101 = `==`.4(sym101, base101);
    if guard101 then L1098() else L1099();
  L255(i136, c364):
    c379 = `as.logical`(c364);
    if c379 then L1169() else L259();
  L598():
    value18 = force? value17;
    checkMissing(value18);
    c110 = `is.object`(value18);
    if c110 then L599() else L600(i47, value18);
  L607():
    value25 = force? value24;
    checkMissing(value25);
    goto L77(i47, value25);
  L608():
    dr18 = tryDispatchBuiltin.1("[[", l6);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L610() else L609(i63, dx18, l6, dx18, dr18);
  L609(i65, dx21, l9, dx22, l10):
    v4 = ld v;
    check L611() else D93();
  L623():
    value27 = force? value26;
    checkMissing(value27);
    c115 = `is.object`(value27);
    if c115 then L624() else L625(i47, value27);
  L632():
    value34 = force? value33;
    checkMissing(value34);
    goto L85(i47, value34);
  L633():
    dr26 = tryDispatchBuiltin.1("[[", l19);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L635() else L634(i86, dx46, l19, dx46, dr26);
  L634(i88, dx49, l22, dx50, l23):
    v8 = ld v;
    check L636() else D101();
  L991():
    goto L201(r424);
  L998():
    nvars15 = force? nvars14;
    checkMissing(nvars15);
    r426 = `>`(jseq13, nvars15);
    __20 = ldf `[` in base;
    r427 = dyn __20(vnm7, r426);
    goto L203(r427);
  L1076():
    N28 = force? N27;
    checkMissing(N28);
    r484 = `>`(N28, 0);
    c323 = `as.logical`(r484);
    c324 = `&&`(c320, c323);
    goto L230(c324);
  L1078():
    n26 = ld n;
    check L1079() else D294();
  L1121():
    m5 = force? m4;
    checkMissing(m5);
    __22 = ldf `%%` in base;
    r523 = dyn __22(r522, m5);
    check L1122() else D315();
  L1132():
    st value = r545;
    goto L244();
  L1156():
    sym108 = ldf length;
    base108 = ldf length in base;
    guard108 = `==`.4(sym108, base108);
    if guard108 then L1157() else L1158();
  L1227():
    goto L278(r623);
  L1243():
    value80 = force? value79;
    checkMissing(value80);
    c415 = `is.object`(value80);
    if c415 then L1244() else L1245(value80);
  L1255():
    p78 = prom<V +>{
      sprintf6 = ldf sprintf;
      p75 = prom<V +>{
        ngettext6 = ldf ngettext;
        p74 = prom<V +>{
          nrowv8 = ld nrowv;
          nrowv9 = force? nrowv8;
          checkMissing(nrowv9);
          return nrowv9;
        };
        r638 = dyn ngettext6(p74, "%d row in value to replace %d rows", "%d rows in value to replace %d rows");
        return r638;
      };
      p76 = prom<V +>{
        nrowv10 = ld nrowv;
        nrowv11 = force? nrowv10;
        checkMissing(nrowv11);
        return nrowv11;
      };
      p77 = prom<V +>{
        n64 = ld n;
        n65 = force? n64;
        checkMissing(n65);
        return n65;
      };
      r642 = dyn sprintf6(p75, p76, p77);
      return r642;
    };
    r644 = dyn stop14[, domain](p78, NA_LGL);
    check L1256() else D376();
  L1262():
    goto L287();
  L1272():
    p87 = force? p86;
    checkMissing(p87);
    r658 = `<`(ncolv1, p87);
    c418 = `as.logical`(r658);
    if c418 then L1273() else L291();
  D93():
    deopt 364 [i65, dx21, l9, dx22, l10, v4];
  D101():
    deopt 394 [i88, dx49, l22, dx50, l23, v8];
  D294():
    deopt 1100 [n26];
  D315():
    deopt 1176 [c342, c345, r523];
  D376():
    deopt 1395 [r644];
  L75(i59, dx17):
    goto L77(i59, dx17);
  L79(i71, dx35, l16, dx36):
    c113 = `is.object`(l16);
    if c113 then L616() else L617(i71, dx35, l16);
  L83(i82, dx45):
    goto L85(i82, dx45);
  L87(i94, dx63, l29, dx64):
    c118 = `is.object`(l29);
    if c118 then L641() else L642(i94, dx63, l29);
  L239(r508):
    r512 = `!`(r508);
    c341 = `as.logical`(r512);
    if c341 then L1104() else L241();
  L256(i139, c367, r562):
    r568 = `==`(r562, 2);
    c376 = `as.logical`(r568);
    c377 = `&&`(c367, c376);
    goto L255(i139, c377);
  L259():
    goto L260(i136);
  L260(i150):
    N41 = ld N;
    check L1173() else D340();
  L283(dx134):
    st value = dx134;
    goto L286(dx134);
  L291():
    p90 = ld p;
    check L1282() else D388();
  L294():
    sym120 = ldf length;
    base120 = ldf length in base;
    guard120 = `==`.4(sym120, base120);
    if guard120 then L1298() else L1299();
  L599():
    dr16 = tryDispatchBuiltin.1("[", value18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L601() else L600(i47, dr16);
  L600(i57, value20):
    n = ld n;
    check L602() else D90();
  L610():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L78(i63, dx18, l6, dx18, dx25);
  L611():
    v5 = force? v4;
    __10 = ldf `[[` in base;
    r176 = dyn __10(l10, v5);
    goto L78(i65, dx21, l9, dx22, r176);
  L612():
    dr20 = tryDispatchBuiltin.0("[<-", dx28, dx27);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L614() else L613(i67, dx26, l12, dr20);
  L613(i69, dx31, l14, dx32):
    thisvar2 = ld thisvar;
    check L615() else D94();
  L624():
    dr24 = tryDispatchBuiltin.1("[", value27);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L626() else L625(i47, dr24);
  L625(i80, value29):
    n5 = ld n;
    check L627() else D98();
  L635():
    dx53 = getTryDispatchBuiltinValue(dr26);
    goto L86(i86, dx46, l19, dx46, dx53);
  L636():
    v9 = force? v8;
    __12 = ldf `[[` in base;
    r185 = dyn __12(l23, v9);
    goto L86(i88, dx49, l22, dx50, r185);
  L637():
    dr28 = tryDispatchBuiltin.0("[<-", dx56, dx55);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L639() else L638(i90, dx54, l25, dr28);
  L638(i92, dx59, l27, dx60):
    thisvar4 = ld thisvar;
    check L640() else D102();
  L1079():
    n27 = force? n26;
    checkMissing(n27);
    N29 = ld N;
    check L1080() else D295();
  L1098():
    sym102 = ldf names;
    base102 = ldf names in base;
    guard102 = `==`.4(sym102, base102);
    if guard102 then L1100() else L1101();
  L1099():
    r507 = dyn base101(<lang names(value)>);
    goto L239(r507);
  L1122():
    c350 = `as.logical`(r523);
    c351 = `||`(c345, c350);
    goto L246(c342, c351);
  L1157():
    sym109 = ldf dim;
    base109 = ldf dim in base;
    guard109 = `==`.4(sym109, base109);
    if guard109 then L1159() else L1160();
  L1158():
    r561 = dyn base108(<lang dim(`[[`(value, k))>);
    goto L256(i134, c362, r561);
  L1169():
    stop12 = ldf stop;
    check L1170() else D338();
  L1244():
    dr68 = tryDispatchBuiltin.1("[", value80);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L1246() else L1245(dr68);
  L1245(value82):
    sym114 = ldf rep_len;
    base114 = ldf rep_len in base;
    guard114 = `==`.4(sym114, base114);
    if guard114 then L1247() else L1248();
  L1256():
    goto L286(r644);
  L1273():
    sym117 = ldf rep_len;
    base117 = ldf rep_len in base;
    guard117 = `==`.4(sym117, base117);
    if guard117 then L1274() else L1275();
  D90():
    deopt 353 [i57, value20, n];
  D94():
    deopt 368 [i69, dx31, l14, dx32, dx27, thisvar2];
  D98():
    deopt 383 [i80, value29, n5];
  D102():
    deopt 398 [i92, dx59, l27, dx60, dx55, thisvar4];
  D295():
    deopt 1102 [N29];
  D338():
    deopt 1254 [i136];
  D340():
    deopt 1261 [i150, N41];
  D388():
    deopt 1434 [p90];
  L80(i75, dx41, dx42):
    st x = dx42;
    goto L81(i75, dx41);
  L88(i98, dx69, dx70):
    st x = dx70;
    goto L81(i98, dx69);
  L240(r510):
    c340 = `==`(r510, NULL);
    goto L239(c340);
  L241():
    goto L242();
  L242():
    sym103 = ldf list;
    base103 = ldf list in base;
    guard103 = `==`.4(sym103, base103);
    if guard103 then L1108() else L1109();
  L257(i142, c370, r564):
    length19 = ldf length in base;
    r567 = dyn length19(r564);
    check L1167() else D337();
  L284(r631):
    __30 = ldf `[` in base;
    r636 = dyn __30(value80, r631, <missing>, FALSE);
    goto L283(r636);
  L292(r660):
    st jvseq = r660;
    goto L294();
  L299(r681):
    c427 = `as.logical`(r681);
    if c427 then L1302() else L300();
  L601():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L75(i47, dx16);
  L602():
    n1 = force? n;
    checkMissing(n1);
    sym35 = ldf seq_len;
    base35 = ldf seq_len in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L603() else L604();
  L614():
    dx34 = getTryDispatchBuiltinValue(dr20);
    goto L79(i67, dx26, l12, dx34);
  L615():
    thisvar3 = force? thisvar2;
    ___1 = ldf `[<-` in base;
    r177 = dyn ___1(dx28, thisvar3, <missing>, dx27);
    goto L79(i69, dx31, l14, r177);
  L616():
    dr22 = tryDispatchBuiltin.0("[[<-", l16, dx36);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L618() else L617(i71, dx35, dr22);
  L617(i73, dx38, l18):
    v6 = ld v;
    check L619() else D95();
  L626():
    dx44 = getTryDispatchBuiltinValue(dr24);
    goto L83(i47, dx44);
  L627():
    n6 = force? n5;
    checkMissing(n6);
    sym36 = ldf seq_len;
    base36 = ldf seq_len in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L628() else L629();
  L639():
    dx62 = getTryDispatchBuiltinValue(dr28);
    goto L87(i90, dx54, l25, dx62);
  L640():
    thisvar5 = force? thisvar4;
    ___2 = ldf `[<-` in base;
    r186 = dyn ___2(dx60, dx55, thisvar5);
    goto L87(i92, dx59, l27, r186);
  L641():
    dr30 = tryDispatchBuiltin.0("[[<-", l29, dx64);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L643() else L642(i94, dx63, dr30);
  L642(i96, dx66, l31):
    v10 = ld v;
    check L644() else D103();
  L1080():
    N30 = force? N29;
    checkMissing(N30);
    __21 = ldf `%%` in base;
    r485 = dyn __21(n27, N30);
    check L1081() else D296();
  L1100():
    value55 = ld value;
    check L1102() else D302();
  L1101():
    r509 = dyn base102(<sym value>);
    goto L240(r509);
  L1104():
    l42 = ld value;
    names__1 = ldf `names<-`;
    check L1105() else D304();
  L1159():
    value69 = ld value;
    check L1161() else D334();
  L1160():
    r563 = dyn base109(<lang `[[`(value, k)>);
    goto L257(i134, c362, r563);
  L1170():
    p61 = prom<V +>{
      sprintf3 = ldf sprintf;
      p57 = prom<V +>{
        ngettext3 = ldf ngettext;
        p56 = prom<V +>{
          N37 = ld N;
          N38 = force? N37;
          checkMissing(N38);
          return N38;
        };
        r570 = dyn ngettext3(p56, "replacement element %d is a matrix/data frame of %d row, need %d", "replacement element %d is a matrix/data frame of %d rows, need %d");
        return r570;
      };
      p58 = prom<V +>{
        k4 = ld k;
        k5 = force? k4;
        checkMissing(k5);
        return k5;
      };
      p59 = prom<V +>{
        N39 = ld N;
        N40 = force? N39;
        checkMissing(N40);
        return N40;
      };
      p60 = prom<V +>{
        n40 = ld n;
        n41 = force? n40;
        checkMissing(n41);
        return n41;
      };
      r575 = dyn sprintf3(p57, p58, p59, p60);
      return r575;
    };
    r577 = dyn stop12[, domain](p61, NA_LGL);
    check L1171() else D339();
  L1173():
    N42 = force? N41;
    checkMissing(N42);
    r579 = `>`(N42, 0);
    c380 = `as.logical`(r579);
    if c380 then L1174() else L261(i150, c380);
  L1246():
    dx133 = getTryDispatchBuiltinValue(dr68);
    goto L283(dx133);
  L1247():
    sym115 = ldf seq_len;
    base115 = ldf seq_len in base;
    guard115 = `==`.4(sym115, base115);
    if guard115 then L1249() else L1250();
  L1248():
    r630 = dyn base114(<lang seq_len(nrowv)>, <sym n>);
    goto L284(r630);
  L1274():
    sym118 = ldf seq_len;
    base118 = ldf seq_len in base;
    guard118 = `==`.4(sym118, base118);
    if guard118 then L1276() else L1277();
  L1275():
    r659 = dyn base117(<lang seq_len(ncolv)>, <sym p>);
    goto L292(r659);
  L1282():
    p91 = force? p90;
    checkMissing(p91);
    r666 = `!=`(p91, 0);
    c419 = `as.logical`(r666);
    if c419 then L1283() else L295(c419);
  L1298():
    new_cols9 = ld `new.cols`;
    check L1300() else D395();
  L1299():
    r680 = dyn base120(<sym new.cols>);
    goto L299(r680);
  D95():
    deopt 373 [i73, dx38, l18, dx36, v6];
  D103():
    deopt 401 [i96, dx66, l31, dx64, v10];
  D296():
    deopt 1105 [r485];
  D302():
    deopt 1136 [value55];
  D304():
    deopt 1145 [NULL, l42, NULL];
  D334():
    deopt 1241 [i134, c362, value69];
  D337():
    deopt 1249 [i142, c370, r567];
  D339():
    deopt 1258 [i136, r577];
  D395():
    deopt 1461 [new_cols9];
  L76(i62, value23, n4, r172):
    r174 = `+`(n4, r172);
    __9 = ldf `[` in base;
    r175 = dyn __9(value23, r174);
    goto L75(i62, r175);
  L84(i85, value32, n9, r181):
    r183 = `+`(n9, r181);
    __11 = ldf `[` in base;
    r184 = dyn __11(value32, r183);
    goto L83(i85, r184);
  L243(r516):
    st value = r516;
    goto L244();
  L261(i152, c382):
    c386 = `as.logical`(c382);
    if c386 then L1178() else L262(i152, c386);
  L285(value88, r633):
    n62 = ld n;
    check L1252() else D373();
  L293(r662):
    p88 = ld p;
    check L1279() else D386();
  L295(c421):
    c425 = `as.logical`(c421);
    if c425 then L1287() else L296();
  L300():
    goto L308();
  L308():
    has_i6 = ld `has.i`;
    check L1341() else D419();
  L603():
    nv2 = ld nv;
    check L605() else D91();
  L604():
    r171 = dyn base35(<sym nv>);
    goto L76(i57, value20, n1, r171);
  L618():
    dx40 = getTryDispatchBuiltinValue(dr22);
    goto L80(i71, dx35, dx40);
  L619():
    v7 = force? v6;
    ____ = ldf `[[<-` in base;
    r178 = dyn ____(l18, dx36, v7);
    goto L80(i73, dx38, r178);
  L628():
    nv4 = ld nv;
    check L630() else D99();
  L629():
    r180 = dyn base36(<sym nv>);
    goto L84(i80, value29, n6, r180);
  L643():
    dx68 = getTryDispatchBuiltinValue(dr30);
    goto L88(i94, dx63, dx68);
  L644():
    v11 = force? v10;
    ____1 = ldf `[[<-` in base;
    r187 = dyn ____1(l31, dx64, v11);
    goto L88(i96, dx66, r187);
  L1081():
    r486 = `==`(r485, 0);
    c327 = `as.logical`(r486);
    if c327 then L1082() else L232(c327);
  L1102():
    value56 = force? value55;
    checkMissing(value56);
    names4 = ldf names in base;
    r511 = dyn names4(value56);
    check L1103() else D303();
  L1105():
    r513 = dyn names__1(l42, NULL, NULL);
    check L1106() else D305();
  L1108():
    value57 = ld value;
    check L1110() else D306();
  L1109():
    r515 = dyn base103(<sym value>);
    goto L243(r515);
  L1161():
    value70 = force? value69;
    checkMissing(value70);
    c371 = `is.object`(value70);
    if c371 then L1162() else L1163(i134, c362, value70);
  L1167():
    goto L256(i142, c370, r567);
  L1171():
    goto L260(i136);
  L1174():
    N43 = ld N;
    check L1175() else D341();
  L1249():
    nrowv6 = ld nrowv;
    check L1251() else D372();
  L1250():
    r632 = dyn base115(<sym nrowv>);
    goto L285(value82, r632);
  L1276():
    ncolv2 = ld ncolv;
    check L1278() else D385();
  L1277():
    r661 = dyn base118(<sym ncolv>);
    goto L293(r661);
  L1283():
    ncolv4 = ld ncolv;
    check L1284() else D389();
  L1300():
    new_cols10 = force? new_cols9;
    checkMissing(new_cols10);
    length21 = ldf length in base;
    r682 = dyn length21(new_cols10);
    check L1301() else D396();
  L1302():
    sym121 = ldf names;
    base121 = ldf names in base;
    guard121 = `==`.4(sym121, base121);
    if guard121 then L1303() else L1304();
  D91():
    deopt 355 [i57, value20, n1, nv2];
  D99():
    deopt 385 [i80, value29, n6, nv4];
  D303():
    deopt 1139 [r511];
  D305():
    deopt 1147 [NULL, r513];
  D306():
    deopt 1153 [value57];
  D341():
    deopt 1265 [i150, c380, N43];
  D372():
    deopt 1377 [value82, nrowv6];
  D373():
    deopt 1380 [value88, n62];
  D385():
    deopt 1426 [ncolv2];
  D386():
    deopt 1429 [p88];
  D389():
    deopt 1438 [c419, ncolv4];
  D396():
    deopt 1464 [r682];
  D419():
    deopt 1540 [has_i6];
  L232(c329):
    c339 = `as.logical`(c329);
    if c339 then L1091() else L235();
  L258(i146, c375, dx112):
    dim7 = ldf dim in base;
    r566 = dyn dim7(dx112);
    check L1166() else D336();
  L262(i155, c388):
    c392 = `as.logical`(c388);
    if c392 then L1183() else L263();
  L296():
    goto L294();
  L301(r684):
    st nm = r684;
    _row_names_info1 = ldf `.row_names_info`;
    check L1307() else D399();
  L605():
    nv3 = force? nv2;
    checkMissing(nv3);
    r173 = seq_len(nv3);
    goto L76(i57, value20, n1, r173);
  L630():
    nv5 = force? nv4;
    checkMissing(nv5);
    r182 = seq_len(nv5);
    goto L84(i80, value29, n6, r182);
  L1082():
    sym98 = ldf length;
    base98 = ldf length in base;
    guard98 = `==`.4(sym98, base98);
    if guard98 then L1083() else L1084();
  L1103():
    goto L240(r511);
  L1106():
    st value = r513;
    goto L242();
  L1110():
    value58 = force? value57;
    checkMissing(value58);
    list1 = ldf list in base;
    r517 = dyn list1(value58);
    check L1111() else D307();
  L1162():
    dr56 = tryDispatchBuiltin.1("[[", value70);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L1164() else L1163(i134, c362, dr56);
  L1163(i144, c373, value72):
    k2 = ld k;
    check L1165() else D335();
  L1175():
    N44 = force? N43;
    checkMissing(N44);
    n42 = ld n;
    check L1176() else D342();
  L1178():
    n44 = ld n;
    check L1179() else D343();
  L1251():
    nrowv7 = force? nrowv6;
    checkMissing(nrowv7);
    r634 = seq_len(nrowv7);
    goto L285(value82, r634);
  L1252():
    n63 = force? n62;
    checkMissing(n63);
    rep_len1 = ldf rep_len in base;
    r635 = dyn rep_len1(r633, n63);
    check L1253() else D374();
  L1278():
    ncolv3 = force? ncolv2;
    checkMissing(ncolv3);
    r663 = seq_len(ncolv3);
    goto L293(r663);
  L1279():
    p89 = force? p88;
    checkMissing(p89);
    rep_len2 = ldf rep_len in base;
    r664 = dyn rep_len2(r662, p89);
    check L1280() else D387();
  L1284():
    ncolv5 = force? ncolv4;
    checkMissing(ncolv5);
    p92 = ld p;
    check L1285() else D390();
  L1287():
    warning4 = ldf warning;
    check L1288() else D391();
  L1301():
    goto L299(r682);
  L1303():
    x47 = ld x;
    check L1305() else D397();
  L1304():
    r683 = dyn base121(<sym x>);
    goto L301(r683);
  L1341():
    has_i7 = force? has_i6;
    checkMissing(has_i7);
    c431 = `as.logical`(has_i7);
    if c431 then L1342() else L309();
  D307():
    deopt 1156 [r517];
  D335():
    deopt 1243 [i144, c373, value72, k2];
  D336():
    deopt 1247 [i146, c375, r566];
  D342():
    deopt 1266 [i150, c380, N44, n42];
  D343():
    deopt 1271 [i152, c386, n44];
  D374():
    deopt 1383 [value88, r635];
  D387():
    deopt 1432 [r664];
  D390():
    deopt 1439 [c419, ncolv5, p92];
  D391():
    deopt 1444 [];
  D397():
    deopt 1467 [x47];
  D399():
    deopt 1473 [];
  L233(c332, r488):
    r493 = `<=`(r488, 1);
    c336 = `as.logical`(r493);
    c337 = `&&`(c332, c336);
    goto L232(c337);
  L235():
    stop10 = ldf stop;
    check L1095() else D300();
  L237(r497):
    goto L238();
  L263():
    goto L264(i155);
  L264(i159):
    N51 = ld N;
    check L1187() else D348();
  L309():
    p108 = ld p;
    check L1488() else D473();
  L347():
    sym139 = ldf length;
    base139 = ldf length in base;
    guard139 = `==`.4(sym139, base139);
    if guard139 then L1571() else L1572();
  L1083():
    sym99 = ldf dim;
    base99 = ldf dim in base;
    guard99 = `==`.4(sym99, base99);
    if guard99 then L1085() else L1086();
  L1084():
    r487 = dyn base98(<lang dim(value)>);
    goto L233(c327, r487);
  L1091():
    sym100 = ldf rep;
    base100 = ldf rep in base;
    guard100 = `==`.4(sym100, base100);
    if guard100 then L1092() else L1093();
  L1111():
    goto L243(r517);
  L1164():
    dx111 = getTryDispatchBuiltinValue(dr56);
    goto L258(i134, c362, dx111);
  L1165():
    k3 = force? k2;
    __24 = ldf `[[` in base;
    r565 = dyn __24(value72, k3);
    goto L258(i144, c373, r565);
  L1166():
    goto L257(i146, c375, r566);
  L1176():
    n43 = force? n42;
    checkMissing(n43);
    r580 = `<`(N44, n43);
    c383 = `as.logical`(r580);
    c384 = `&&`(c380, c383);
    goto L261(i150, c384);
  L1179():
    n45 = force? n44;
    checkMissing(n45);
    N45 = ld N;
    check L1180() else D344();
  L1183():
    stop13 = ldf stop;
    check L1184() else D346();
  L1253():
    goto L284(r635);
  L1280():
    goto L292(r664);
  L1285():
    p93 = force? p92;
    checkMissing(p93);
    r667 = `>`(ncolv5, p93);
    c422 = `as.logical`(r667);
    c423 = `&&`(c419, c422);
    goto L295(c423);
  L1288():
    p100 = prom<V +>{
      sprintf8 = ldf sprintf;
      p95 = prom<V +>{
        ngettext8 = ldf ngettext;
        p94 = prom<V +>{
          ncolv6 = ld ncolv;
          ncolv7 = force? ncolv6;
          checkMissing(ncolv7);
          return ncolv7;
        };
        r669 = dyn ngettext8(p94, "provided %d variable to replace %d variables", "provided %d variables to replace %d variables");
        return r669;
      };
      p96 = prom<V +>{
        ncolv8 = ld ncolv;
        ncolv9 = force? ncolv8;
        checkMissing(ncolv9);
        return ncolv9;
      };
      p99 = prom<V +>{
        p97 = ld p;
        p98 = force? p97;
        checkMissing(p98);
        return p98;
      };
      r673 = dyn sprintf8(p95, p96, p99);
      return r673;
    };
    r675 = dyn warning4[, domain](p100, NA_LGL);
    check L1289() else D392();
  L1305():
    x48 = force? x47;
    checkMissing(x48);
    names5 = ldf names in base;
    r685 = dyn names5(x48);
    check L1306() else D398();
  L1307():
    p103 = prom<V +>{
      x49 = ld x;
      x50 = force? x49;
      checkMissing(x50);
      return x50;
    };
    r687 = dyn _row_names_info1(p103, 0);
    check L1308() else D400();
  L1342():
    sym127 = ldf seq_len;
    base127 = ldf seq_len in base;
    guard127 = `==`.4(sym127, base127);
    if guard127 then L1343() else L1344();
  D300():
    deopt 1126 [];
  D344():
    deopt 1273 [i152, c386, N45];
  D346():
    deopt 1279 [i155];
  D348():
    deopt 1286 [i159, N51];
  D392():
    deopt 1448 [r675];
  D398():
    deopt 1470 [r685];
  D400():
    deopt 1476 [r687];
  D473():
    deopt 1726 [p108];
  L234(c335, r490):
    length18 = ldf length in base;
    r492 = dyn length18(r490);
    check L1089() else D299();
  L236(r495):
    st value = r495;
    goto L237(r495);
  L310(r712):
    s2 = toForSeq(r712);
    l56 = length(s2);
    i191 = 0;
    goto L311(i191);
  L374(r839):
    r841 = `>`(r839, 0);
    c521 = `as.logical`(r841);
    if c521 then L1575() else L375();
  L1085():
    value53 = ld value;
    check L1087() else D297();
  L1086():
    r489 = dyn base99(<sym value>);
    goto L234(c327, r489);
  L1092():
    rep2 = ldf rep in base;
    r496 = dyn rep2(<sym value>, <sym n>);
    goto L236(r496);
  L1093():
    r494 = dyn base100[, `length.out`](<sym value>, <sym n>);
    goto L236(r494);
  L1095():
    p32 = prom<V +>{
      sprintf1 = ldf sprintf;
      p29 = prom<V +>{
        ngettext1 = ldf ngettext;
        p28 = prom<V +>{
          N31 = ld N;
          N32 = force? N31;
          checkMissing(N32);
          return N32;
        };
        r499 = dyn ngettext1(p28, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
        return r499;
      };
      p30 = prom<V +>{
        N33 = ld N;
        N34 = force? N33;
        checkMissing(N34);
        return N34;
      };
      p31 = prom<V +>{
        nrows11 = ld nrows;
        nrows12 = force? nrows11;
        checkMissing(nrows12);
        return nrows12;
      };
      r503 = dyn sprintf1(p29, p30, p31);
      return r503;
    };
    r505 = dyn stop10[, domain](p32, NA_LGL);
    check L1096() else D301();
  L1180():
    N46 = force? N45;
    checkMissing(N46);
    __25 = ldf `%%` in base;
    r581 = dyn __25(n45, N46);
    check L1181() else D345();
  L1184():
    p67 = prom<V +>{
      sprintf4 = ldf sprintf;
      p63 = prom<V +>{
        ngettext4 = ldf ngettext;
        p62 = prom<V +>{
          N47 = ld N;
          N48 = force? N47;
          checkMissing(N48);
          return N48;
        };
        r583 = dyn ngettext4(p62, "replacement element %d has %d row, need %d", "replacement element %d has %d rows, need %d");
        return r583;
      };
      p64 = prom<V +>{
        k6 = ld k;
        k7 = force? k6;
        checkMissing(k7);
        return k7;
      };
      p65 = prom<V +>{
        N49 = ld N;
        N50 = force? N49;
        checkMissing(N50);
        return N50;
      };
      p66 = prom<V +>{
        n46 = ld n;
        n47 = force? n46;
        checkMissing(n47);
        return n47;
      };
      r588 = dyn sprintf4(p63, p64, p65, p66);
      return r588;
    };
    r590 = dyn stop13[, domain](p67, NA_LGL);
    check L1185() else D347();
  L1187():
    N52 = force? N51;
    checkMissing(N52);
    r592 = `>`(N52, 0);
    c393 = `as.logical`(r592);
    if c393 then L1188() else L265(i159, c393);
  L1289():
    new_cols2 = ld `new.cols`;
    check L1290() else D393();
  L1306():
    goto L301(r685);
  L1308():
    st rows = r687;
    sym122 = ldf attributes;
    base122 = ldf attributes in base;
    guard122 = `==`.4(sym122, base122);
    if guard122 then L1309() else L1310();
  L1343():
    p104 = ld p;
    check L1345() else D420();
  L1344():
    r711 = dyn base127(<sym p>);
    goto L310(r711);
  L1488():
    p109 = force? p108;
    checkMissing(p109);
    r788 = `>`(p109, 0);
    c461 = `as.logical`(r788);
    if c461 then L1489() else L348();
  L1571():
    new_cols15 = ld `new.cols`;
    check L1573() else D502();
  L1572():
    r838 = dyn base139(<sym new.cols>);
    goto L374(r838);
  D297():
    deopt 1112 [c327, value53];
  D299():
    deopt 1117 [c335, r492];
  D301():
    deopt 1130 [r505];
  D345():
    deopt 1276 [i152, c386, r581];
  D347():
    deopt 1283 [i155, r590];
  D393():
    deopt 1449 [new_cols2];
  D420():
    deopt 1543 [p104];
  D502():
    deopt 1840 [new_cols15];
  L265(i161, c395):
    c399 = `as.logical`(c395);
    if c399 then L1192() else L266();
  L302(r689):
    st a = r689;
    l50 = ld a;
    c428 = `is.object`(l50);
    if c428 then L1313() else L1314(NULL, l50);
  L311(i192):
    i193 = `+`.1(i192, 1);
    c432 = `<`.1(l56, i193);
    if c432 then L1346() else L346();
  L348():
    goto L347();
  L375():
    goto L379();
  L379():
    cl2 = ld cl;
    check L1589() else D512();
  L1087():
    value54 = force? value53;
    checkMissing(value54);
    dim6 = ldf dim in base;
    r491 = dyn dim6(value54);
    check L1088() else D298();
  L1089():
    goto L233(c335, r492);
  L1096():
    goto L237(r505);
  L1181():
    c389 = `as.logical`(r581);
    c390 = `&&`(c386, c389);
    goto L262(i152, c390);
  L1185():
    goto L264(i155);
  L1188():
    N53 = ld N;
    check L1189() else D349();
  L1290():
    new_cols3 = force? new_cols2;
    checkMissing(new_cols3);
    c426 = `is.object`(new_cols3);
    if c426 then L1291() else L1292(new_cols3);
  L1309():
    x51 = ld x;
    check L1311() else D401();
  L1310():
    r688 = dyn base122(<sym x>);
    goto L302(r688);
  L1345():
    p105 = force? p104;
    checkMissing(p105);
    r713 = seq_len(p105);
    goto L310(r713);
  L1489():
    order1 = ldf order;
    check L1490() else D474();
  L1573():
    new_cols16 = force? new_cols15;
    checkMissing(new_cols16);
    length26 = ldf length in base;
    r840 = dyn length26(new_cols16);
    check L1574() else D503();
  L1575():
    sym140 = ldf names;
    base140 = ldf names in base;
    guard140 = `==`.4(sym140, base140);
    if guard140 then L1576() else L1577();
  D298():
    deopt 1115 [c327, r491];
  D349():
    deopt 1290 [i159, c393, N53];
  D401():
    deopt 1480 [x51];
  D474():
    deopt 1731 [];
  D503():
    deopt 1843 [r840];
  D512():
    deopt 1870 [cl2];
  L266():
    goto L269(i161);
  L269(i172):
    N55 = ld N;
    check L1200() else D352();
  L297(dx140):
    st `new.cols` = dx140;
    goto L294();
  L303(dx142):
    st a = dx142;
    sym123 = ldf c;
    base123 = ldf c in base;
    guard123 = `==`.4(sym123, base123);
    if guard123 then L1316() else L1317();
  L346():
    x55 = `[[`(s2, i193, NULL, TRUE);
    st jjj = x55;
    jseq22 = ld jseq;
    check L1347() else D421();
  L376(r843):
    st `new.cols` = r843;
    anyDuplicated1 = ldf anyDuplicated;
    check L1580() else D506();
  L1088():
    goto L234(c327, r491);
  L1189():
    N54 = force? N53;
    checkMissing(N54);
    n48 = ld n;
    check L1190() else D350();
  L1192():
    sym110 = ldf rep;
    base110 = ldf rep in base;
    guard110 = `==`.4(sym110, base110);
    if guard110 then L1193() else L1194();
  L1291():
    dr72 = tryDispatchBuiltin.1("[", new_cols3);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L1293() else L1292(dr72);
  L1292(new_cols5):
    sym119 = ldf seq_len;
    base119 = ldf seq_len in base;
    guard119 = `==`.4(sym119, base119);
    if guard119 then L1294() else L1295();
  L1311():
    x52 = force? x51;
    checkMissing(x52);
    attributes = ldf attributes in base;
    r690 = dyn attributes(x52);
    check L1312() else D402();
  L1313():
    dr74 = tryDispatchBuiltin.0("[<-", l50, NULL);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L1315() else L1314(NULL, dr74);
  L1314(r692, l52):
    ___6 = ldf `[<-` in base;
    r695 = dyn ___6(l52, NULL, "names");
    goto L303(r695);
  L1346():
    goto L347();
  L1490():
    p110 = prom<V +>{
      jseq26 = ld jseq;
      jseq27 = force? jseq26;
      checkMissing(jseq27);
      return jseq27;
    };
    r790 = dyn order1(p110);
    check L1491() else D475();
  L1574():
    goto L374(r840);
  L1576():
    x69 = ld x;
    check L1578() else D504();
  L1577():
    r842 = dyn base140(<sym x>);
    goto L376(r842);
  L1589():
    cl3 = force? cl2;
    checkMissing(cl3);
    l154 = ld x;
    class__2 = ldf `class<-`;
    check L1590() else D513();
  D350():
    deopt 1291 [i159, c393, N54, n48];
  D352():
    deopt 1305 [i172, N55];
  D402():
    deopt 1483 [r690];
  D421():
    deopt 1546 [i193, jseq22];
  D475():
    deopt 1733 [r790];
  D504():
    deopt 1848 [x69];
  D506():
    deopt 1854 [];
  D513():
    deopt 1873 [cl3, l154, cl3];
  L267(i167, r595):
    l44 = ld value;
    c400 = `is.object`(l44);
    if c400 then L1195() else L1196(i167, r595, l44);
  L298(new_cols8, r677):
    __32 = ldf `[` in base;
    r679 = dyn __32(new_cols8, r677);
    goto L297(r679);
  L304(r697):
    st x = r697;
    a = ld a;
    check L1327() else D408();
  L1190():
    n49 = force? n48;
    checkMissing(n49);
    r593 = `<`(N54, n49);
    c396 = `as.logical`(r593);
    c397 = `&&`(c393, c396);
    goto L265(i159, c397);
  L1193():
    rep3 = ldf rep in base;
    r596 = dyn rep3(<lang `[[`(value, k)>, <sym n>);
    goto L267(i161, r596);
  L1194():
    r594 = dyn base110[, `length.out`](<lang `[[`(value, k)>, <sym n>);
    goto L267(i161, r594);
  L1200():
    N56 = force? N55;
    checkMissing(N56);
    n50 = ld n;
    check L1201() else D353();
  L1293():
    dx139 = getTryDispatchBuiltinValue(dr72);
    goto L297(dx139);
  L1294():
    p101 = ld p;
    check L1296() else D394();
  L1295():
    r676 = dyn base119(<sym p>);
    goto L298(new_cols5, r676);
  L1312():
    goto L302(r690);
  L1315():
    dx141 = getTryDispatchBuiltinValue(dr74);
    goto L303(dx141);
  L1316():
    x53 = ld x;
    check L1318() else D403();
  L1317():
    r696 = dyn base123(<sym x>, <lang vector("list", length(new.cols))>);
    goto L304(r696);
  L1347():
    jseq23 = force? jseq22;
    checkMissing(jseq23);
    c433 = `is.object`(jseq23);
    if c433 then L1348() else L1349(i193, jseq23);
  L1491():
    c462 = `is.object`(r790);
    if c462 then L1492() else L1493(r790);
  L1578():
    x70 = force? x69;
    checkMissing(x70);
    names7 = ldf names in base;
    r844 = dyn names7(x70);
    check L1579() else D505();
  L1580():
    p113 = prom<V +>{
      new_cols17 = ld `new.cols`;
      new_cols18 = force? new_cols17;
      checkMissing(new_cols18);
      return new_cols18;
    };
    r846 = dyn anyDuplicated1(p113);
    check L1581() else D507();
  L1590():
    r852 = dyn class__2(l154, NULL, cl3);
    check L1591() else D514();
  D353():
    deopt 1306 [i172, N56, n50];
  D394():
    deopt 1452 [new_cols5, p101];
  D403():
    deopt 1494 [x53];
  D408():
    deopt 1510 [a];
  D505():
    deopt 1851 [r844];
  D507():
    deopt 1856 [r846];
  D514():
    deopt 1875 [cl3, r852];
  L268(i171, r600, dx114):
    st value = dx114;
    goto L269(i171);
  L312(i199, dx144):
    st jj = dx144;
    value89 = ld value;
    check L1352() else D423();
  L349(dx204):
    s3 = toForSeq(dx204);
    l139 = length(s3);
    i316 = 0;
    goto L350(i316);
  L1195():
    dr58 = tryDispatchBuiltin.0("[[<-", l44, r595);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L1197() else L1196(i167, r595, dr58);
  L1196(i169, r598, l46):
    k8 = ld k;
    check L1198() else D351();
  L1201():
    n51 = force? n50;
    checkMissing(n51);
    r603 = `>`(N56, n51);
    c401 = `as.logical`(r603);
    if c401 then L1202() else L270();
  L1296():
    p102 = force? p101;
    checkMissing(p102);
    r678 = seq_len(p102);
    goto L298(new_cols5, r678);
  L1318():
    x54 = force? x53;
    checkMissing(x54);
    sym124 = ldf vector;
    base124 = ldf vector in base;
    guard124 = `==`.4(sym124, base124);
    if guard124 then L1319() else L1320();
  L1327():
    a1 = force? a;
    checkMissing(a1);
    l53 = ld x;
    attributes__ = ldf `attributes<-`;
    check L1328() else D409();
  L1348():
    dr76 = tryDispatchBuiltin.1("[", jseq23);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L1350() else L1349(i193, dr76);
  L1349(i197, jseq25):
    jjj = ld jjj;
    check L1351() else D422();
  L1492():
    dr124 = tryDispatchBuiltin.1("[", r790);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L1494() else L1493(dr124);
  L1493(r792):
    p111 = ld p;
    check L1495() else D476();
  L1579():
    goto L376(r844);
  L1581():
    c522 = `as.logical`(r846);
    if c522 then L1582() else L377();
  L1591():
    st x = r852;
    x71 = ld x;
    check L1592() else D515();
  D351():
    deopt 1299 [i169, r598, l46, r595, k8];
  D409():
    deopt 1513 [a1, l53, a1];
  D422():
    deopt 1548 [i197, jseq25, jjj];
  D423():
    deopt 1552 [i199, value89];
  D476():
    deopt 1734 [r792, p111];
  D515():
    deopt 1877 [x71];
  L270():
    goto L275(i172);
  L275(i190):
    goto L253(i190);
  L305(r699):
    c429 = ldf c in base;
    r704 = dyn c429(x54, r699);
    check L1326() else D407();
  L350(i317):
    i318 = `+`.1(i317, 1);
    c463 = `<`.1(l139, i318);
    if c463 then L1496() else L373();
  L377():
    goto L378(NULL);
  L378(r850):
    goto L379();
  L1197():
    dx113 = getTryDispatchBuiltinValue(dr58);
    goto L268(i167, r595, dx113);
  L1198():
    k9 = force? k8;
    ____2 = ldf `[[<-` in base;
    r601 = dyn ____2(l46, r595, k9);
    goto L268(i169, r598, r601);
  L1202():
    warning2 = ldf warning;
    check L1203() else D354();
  L1319():
    sym125 = ldf length;
    base125 = ldf length in base;
    guard125 = `==`.4(sym125, base125);
    if guard125 then L1321() else L1322();
  L1320():
    r698 = dyn base124("list", <lang length(new.cols)>);
    goto L305(r698);
  L1328():
    r705 = dyn attributes__(l53, NULL, a1);
    check L1329() else D410();
  L1350():
    dx143 = getTryDispatchBuiltinValue(dr76);
    goto L312(i193, dx143);
  L1351():
    jjj1 = force? jjj;
    __33 = ldf `[` in base;
    r714 = dyn __33(jseq25, jjj1);
    goto L312(i197, r714);
  L1352():
    value90 = force? value89;
    checkMissing(value90);
    c434 = `is.object`(value90);
    if c434 then L1353() else L1354(i199, value90);
  L1494():
    dx203 = getTryDispatchBuiltinValue(dr124);
    goto L349(dx203);
  L1495():
    p112 = force? p111;
    checkMissing(p112);
    r793 = `:`(p112, 1);
    __45 = ldf `[` in base;
    r794 = dyn __45(r792, r793);
    goto L349(r794);
  L1582():
    make_unique = ldf `make.unique`;
    check L1583() else D508();
  L1592():
    x72 = force? x71;
    checkMissing(x72);
    popenv;
    return x72;
  D354():
    deopt 1310 [i172];
  D407():
    deopt 1508 [r704];
  D410():
    deopt 1515 [a1, r705];
  D508():
    deopt 1858 [];
  L306(r701):
    vector = ldf vector in base;
    r703 = dyn vector("list", r701);
    check L1325() else D406();
  L313(i203, dx146):
    st vjj = dx146;
    jj = ld jj;
    check L1361() else D426();
  L373():
    x60 = `[[`(s3, i318, NULL, TRUE);
    st jjj = x60;
    jseq28 = ld jseq;
    check L1497() else D477();
  L1203():
    p73 = prom<V +>{
      sprintf5 = ldf sprintf;
      p69 = prom<V +>{
        ngettext5 = ldf ngettext;
        p68 = prom<V +>{
          N57 = ld N;
          N58 = force? N57;
          checkMissing(N58);
          return N58;
        };
        r605 = dyn ngettext5(p68, "replacement element %d has %d row to replace %d rows", "replacement element %d has %d rows to replace %d rows");
        return r605;
      };
      p70 = prom<V +>{
        k10 = ld k;
        k11 = force? k10;
        checkMissing(k11);
        return k11;
      };
      p71 = prom<V +>{
        N59 = ld N;
        N60 = force? N59;
        checkMissing(N60);
        return N60;
      };
      p72 = prom<V +>{
        n52 = ld n;
        n53 = force? n52;
        checkMissing(n53);
        return n53;
      };
      r610 = dyn sprintf5(p69, p70, p71, p72);
      return r610;
    };
    r612 = dyn warning2[, domain](p73, NA_LGL);
    check L1204() else D355();
  L1321():
    new_cols11 = ld `new.cols`;
    check L1323() else D404();
  L1322():
    r700 = dyn base125(<sym new.cols>);
    goto L306(r700);
  L1326():
    goto L304(r704);
  L1329():
    st x = r705;
    sym126 = ldf c;
    base126 = ldf c in base;
    guard126 = `==`.4(sym126, base126);
    if guard126 then L1330() else L1331();
  L1353():
    dr78 = tryDispatchBuiltin.1("[[", value90);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L1355() else L1354(i199, dr78);
  L1354(i201, value92):
    jvseq = ld jvseq;
    check L1356() else D424();
  L1496():
    goto L347();
  L1583():
    p114 = prom<V +>{
      new_cols19 = ld `new.cols`;
      new_cols20 = force? new_cols19;
      checkMissing(new_cols20);
      return new_cols20;
    };
    r848 = dyn make_unique(p114);
    check L1584() else D509();
  D355():
    deopt 1314 [i172, r612];
  D404():
    deopt 1501 [new_cols11];
  D406():
    deopt 1506 [r703];
  D424():
    deopt 1554 [i201, value92, jvseq];
  D426():
    deopt 1561 [i203, jj];
  D477():
    deopt 1739 [i318, jseq28];
  D509():
    deopt 1860 [r848];
  L307(r707):
    l54 = ld x;
    names__2 = ldf `names<-`;
    check L1335() else D414();
  L1204():
    value73 = ld value;
    check L1205() else D356();
  L1323():
    new_cols12 = force? new_cols11;
    checkMissing(new_cols12);
    length22 = ldf length in base;
    r702 = dyn length22(new_cols12);
    check L1324() else D405();
  L1325():
    goto L305(r703);
  L1330():
    nm = ld nm;
    check L1332() else D411();
  L1331():
    r706 = dyn base126(<sym nm>, <sym new.cols>);
    goto L307(r706);
  L1355():
    dx145 = getTryDispatchBuiltinValue(dr78);
    goto L313(i199, dx145);
  L1356():
    jvseq1 = force? jvseq;
    checkMissing(jvseq1);
    c435 = `is.object`(jvseq1);
    if c435 then L1357() else L1358(i201, value92, jvseq1);
  L1361():
    jj1 = force? jj;
    checkMissing(jj1);
    nvars18 = ld nvars;
    check L1362() else D427();
  L1497():
    jseq29 = force? jseq28;
    checkMissing(jseq29);
    c464 = `is.object`(jseq29);
    if c464 then L1498() else L1499(i318, jseq29);
  L1584():
    l153 = ld x;
    names__4 = ldf `names<-`;
    check L1585() else D510();
  D356():
    deopt 1315 [i172, value73];
  D405():
    deopt 1504 [r702];
  D411():
    deopt 1519 [nm];
  D414():
    deopt 1526 [r707, l54, r707];
  D427():
    deopt 1562 [i203, jj1, nvars18];
  D510():
    deopt 1862 [r848, l153, r848];
  L314(i207, value96, dx148):
    __35 = ldf `[[` in base;
    r716 = dyn __35(value96, dx148);
    goto L313(i207, r716);
  L351(i324, dx206):
    st jj = dx206;
    value97 = ld value;
    check L1502() else D479();
  L1205():
    value74 = force? value73;
    checkMissing(value74);
    c402 = `is.object`(value74);
    if c402 then L1206() else L1207(i172, value74);
  L1324():
    goto L306(r702);
  L1332():
    nm1 = force? nm;
    checkMissing(nm1);
    new_cols13 = ld `new.cols`;
    check L1333() else D412();
  L1335():
    r709 = dyn names__2(l54, NULL, r707);
    check L1336() else D415();
  L1357():
    dr80 = tryDispatchBuiltin.1("[[", jvseq1);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L1359() else L1358(i201, value92, dr80);
  L1358(i205, value94, jvseq3):
    jjj2 = ld jjj;
    check L1360() else D425();
  L1362():
    nvars19 = force? nvars18;
    checkMissing(nvars19);
    r717 = `<=`(jj1, nvars19);
    c436 = `as.logical`(r717);
    if c436 then L1363() else L315();
  L1498():
    dr126 = tryDispatchBuiltin.1("[", jseq29);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L1500() else L1499(i318, dr126);
  L1499(i322, jseq31):
    jjj4 = ld jjj;
    check L1501() else D478();
  L1585():
    r849 = dyn names__4(l153, NULL, r848);
    check L1586() else D511();
  D412():
    deopt 1521 [new_cols13];
  D415():
    deopt 1528 [r707, r709];
  D425():
    deopt 1556 [i205, value94, jvseq3, jjj2];
  D478():
    deopt 1741 [i322, jseq31, jjj4];
  D479():
    deopt 1745 [i324, value97];
  D511():
    deopt 1864 [r848, r849];
  L271(i178, dx116):
    c403 = `is.object`(dx116);
    if c403 then L1210() else L1211(i178, dx116);
  L315():
    vjj38 = ld vjj;
    check L1404() else D440();
  L327(i247):
    goto L311(i247);
  L1206():
    dr60 = tryDispatchBuiltin.1("[[", value74);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L1208() else L1207(i172, dr60);
  L1207(i176, value76):
    k12 = ld k;
    check L1209() else D357();
  L1333():
    new_cols14 = force? new_cols13;
    checkMissing(new_cols14);
    c430 = ldf c in base;
    r708 = dyn c430(nm1, new_cols14);
    check L1334() else D413();
  L1336():
    st x = r709;
    rows10 = ld rows;
    check L1337() else D416();
  L1359():
    dx147 = getTryDispatchBuiltinValue(dr80);
    goto L314(i201, value92, dx147);
  L1360():
    jjj3 = force? jjj2;
    __34 = ldf `[[` in base;
    r715 = dyn __34(jvseq3, jjj3);
    goto L314(i205, value94, r715);
  L1363():
    sym128 = ldf length;
    base128 = ldf length in base;
    guard128 = `==`.4(sym128, base128);
    if guard128 then L1364() else L1365();
  L1500():
    dx205 = getTryDispatchBuiltinValue(dr126);
    goto L351(i318, dx205);
  L1501():
    jjj5 = force? jjj4;
    __46 = ldf `[` in base;
    r795 = dyn __46(jseq31, jjj5);
    goto L351(i322, r795);
  L1502():
    value98 = force? value97;
    checkMissing(value98);
    c465 = `is.object`(value98);
    if c465 then L1503() else L1504(i324, value98);
  L1586():
    st x = r849;
    goto L378(r848);
  D357():
    deopt 1317 [i176, value76, k12];
  D413():
    deopt 1524 [r708];
  D416():
    deopt 1530 [rows10];
  D440():
    deopt 1612 [i203, vjj38];
  L272(i182, dx120):
    l47 = ld value;
    c404 = `is.object`(l47);
    if c404 then L1216() else L1217(i182, dx120, l47);
  L316(i212, r719):
    r725 = `!=`(r719, 2);
    c438 = `as.logical`(r725);
    if c438 then L1375() else L319();
  L352(i328, dx208):
    st v = dx208;
    sym133 = ldf `is.null`;
    base133 = ldf `is.null` in base;
    guard133 = `==`.4(sym133, base133);
    if guard133 then L1511() else L1512();
  L1208():
    dx115 = getTryDispatchBuiltinValue(dr60);
    goto L271(i172, dx115);
  L1209():
    k13 = force? k12;
    __26 = ldf `[[` in base;
    r613 = dyn __26(value76, k13);
    goto L271(i176, r613);
  L1210():
    dr62 = tryDispatchBuiltin.1("[", dx116);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L1212() else L1211(i178, dr62);
  L1211(i180, dx118):
    sym111 = ldf seq_len;
    base111 = ldf seq_len in base;
    guard111 = `==`.4(sym111, base111);
    if guard111 then L1213() else L1214();
  L1334():
    goto L307(r708);
  L1337():
    rows11 = force? rows10;
    checkMissing(rows11);
    l55 = ld x;
    attr__ = ldf `attr<-`;
    check L1338() else D417();
  L1364():
    sym129 = ldf dim;
    base129 = ldf dim in base;
    guard129 = `==`.4(sym129, base129);
    if guard129 then L1366() else L1367();
  L1365():
    r718 = dyn base128(<lang dim(`[[`(x, jj))>);
    goto L316(i203, r718);
  L1404():
    vjj39 = force? vjj38;
    checkMissing(vjj39);
    c445 = `is.object`(vjj39);
    if c445 then L1405() else L1406(i203, vjj39);
  L1503():
    dr128 = tryDispatchBuiltin.1("[[", value98);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L1505() else L1504(i324, dr128);
  L1504(i326, value100):
    jvseq4 = ld jvseq;
    check L1506() else D480();
  D417():
    deopt 1533 [rows11, l55, rows11];
  D480():
    deopt 1747 [i326, value100, jvseq4];
  L273(i185, dx123, r615):
    __27 = ldf `[` in base;
    r617 = dyn __27(dx123, r615);
    goto L272(i185, r617);
  L274(i189, dx128, dx129):
    st value = dx129;
    goto L275(i189);
  L317(i215, r721):
    length23 = ldf length in base;
    r724 = dyn length23(r721);
    check L1374() else D431();
  L319():
    vjj19 = ld vjj;
    check L1390() else D436();
  L323(i234, vjj18):
    goto L327(i234);
  L328(i251, dx168):
    l83 = ld x;
    c446 = `is.object`(l83);
    if c446 then L1408() else L1409(i251, dx168, l83);
  L354(i335, r799):
    r800 = `!`(r799);
    c468 = `as.logical`(r800);
    if c468 then L1514() else L355(i335, c468);
  L1212():
    dx119 = getTryDispatchBuiltinValue(dr62);
    goto L272(i178, dx119);
  L1213():
    n54 = ld n;
    check L1215() else D358();
  L1214():
    r614 = dyn base111(<sym n>);
    goto L273(i180, dx118, r614);
  L1216():
    dr64 = tryDispatchBuiltin.0("[[<-", l47, dx120);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L1218() else L1217(i182, dx120, dr64);
  L1217(i187, dx125, l49):
    k14 = ld k;
    check L1219() else D359();
  L1338():
    r710 = dyn attr__(l55, NULL, "row.names", rows11);
    check L1339() else D418();
  L1366():
    x56 = ld x;
    check L1368() else D428();
  L1367():
    r720 = dyn base129(<lang `[[`(x, jj)>);
    goto L317(i203, r720);
  L1375():
    vjj = ld vjj;
    check L1376() else D432();
  L1405():
    dr96 = tryDispatchBuiltin.1("[", vjj39);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L1407() else L1406(i203, dr96);
  L1406(i249, vjj41):
    __39 = ldf `[` in base;
    r732 = dyn __39(vjj41, FALSE);
    goto L328(i249, r732);
  L1505():
    dx207 = getTryDispatchBuiltinValue(dr128);
    goto L352(i324, dx207);
  L1506():
    jvseq5 = force? jvseq4;
    checkMissing(jvseq5);
    c466 = `is.object`(jvseq5);
    if c466 then L1507() else L1508(i326, value100, jvseq5);
  L1511():
    v12 = ld v;
    check L1513() else D482();
  L1512():
    r798 = dyn base133(<sym v>);
    goto L354(i328, r798);
  D358():
    deopt 1321 [i180, dx118, n54];
  D359():
    deopt 1326 [i187, dx125, l49, dx120, k14];
  D418():
    deopt 1536 [rows11, r710];
  D428():
    deopt 1569 [i203, x56];
  D431():
    deopt 1577 [i215, r724];
  D432():
    deopt 1580 [i212, vjj];
  D436():
    deopt 1595 [i212, vjj19];
  D482():
    deopt 1755 [i328, v12];
  L329(i255, dx174):
    st x = dx174;
    sym130 = ldf length;
    base130 = ldf length in base;
    guard130 = `==`.4(sym130, base130);
    if guard130 then L1412() else L1413();
  L353(i332, value104, dx210):
    __48 = ldf `[[` in base;
    r797 = dyn __48(value104, dx210);
    goto L352(i332, r797);
  L355(i337, c470):
    c474 = `as.logical`(c470);
    if c474 then L1517() else L356(i337, c474);
  L1215():
    n55 = force? n54;
    checkMissing(n55);
    r616 = seq_len(n55);
    goto L273(i180, dx118, r616);
  L1218():
    dx127 = getTryDispatchBuiltinValue(dr64);
    goto L274(i182, dx120, dx127);
  L1219():
    k15 = force? k14;
    ____3 = ldf `[[<-` in base;
    r618 = dyn ____3(l49, dx120, k15);
    goto L274(i187, dx125, r618);
  L1339():
    st x = r710;
    goto L308();
  L1368():
    x57 = force? x56;
    checkMissing(x57);
    c437 = `is.object`(x57);
    if c437 then L1369() else L1370(i203, x57);
  L1374():
    goto L316(i215, r724);
  L1376():
    vjj1 = force? vjj;
    checkMissing(vjj1);
    l57 = ld x;
    c439 = `is.object`(l57);
    if c439 then L1377() else L1378(i212, vjj1, l57, vjj1, l57);
  L1390():
    vjj20 = force? vjj19;
    checkMissing(vjj20);
    l70 = ld x;
    c442 = `is.object`(l70);
    if c442 then L1391() else L1392(i212, vjj20, l70, vjj20, l70);
  L1407():
    dx167 = getTryDispatchBuiltinValue(dr96);
    goto L328(i203, dx167);
  L1408():
    dr98 = tryDispatchBuiltin.0("[[<-", l83, dx168);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L1410() else L1409(i251, dx168, dr98);
  L1409(i253, dx170, l85):
    jj12 = ld jj;
    check L1411() else D441();
  L1507():
    dr130 = tryDispatchBuiltin.1("[[", jvseq5);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L1509() else L1508(i326, value100, dr130);
  L1508(i330, value102, jvseq7):
    jjj6 = ld jjj;
    check L1510() else D481();
  L1513():
    v13 = force? v12;
    checkMissing(v13);
    c467 = `==`(v13, NULL);
    goto L354(i328, c467);
  L1514():
    nrows31 = ld nrows;
    check L1515() else D483();
  D441():
    deopt 1618 [i253, dx170, l85, dx168, jj12];
  D481():
    deopt 1749 [i330, value102, jvseq7, jjj6];
  D483():
    deopt 1759 [i335, c468, nrows31];
  L318(i219, dx150):
    dim8 = ldf dim in base;
    r723 = dyn dim8(dx150);
    check L1373() else D430();
  L320(i225, vjj8, l63, vjj9, dx152):
    c440 = `is.object`(dx152);
    if c440 then L1381() else L1382(i225, vjj8, l63, dx152);
  L324(i238, vjj27, l76, vjj28, dx160):
    c443 = `is.object`(dx160);
    if c443 then L1395() else L1396(i238, vjj27, l76, dx160);
  L330(i258, r735):
    r740 = `==`(r735, 2);
    c447 = `as.logical`(r740);
    if c447 then L1419() else L332();
  L356(i340, c476):
    c483 = `as.logical`(c476);
    if c483 then L1523() else L358();
  L1369():
    dr82 = tryDispatchBuiltin.1("[[", x57);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L1371() else L1370(i203, dr82);
  L1370(i217, x59):
    jj2 = ld jj;
    check L1372() else D429();
  L1377():
    dr84 = tryDispatchBuiltin.1("[[", l57);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L1379() else L1378(i212, vjj1, l57, vjj1, dr84);
  L1378(i223, vjj4, l60, vjj5, l61):
    jj4 = ld jj;
    check L1380() else D433();
  L1391():
    dr90 = tryDispatchBuiltin.1("[[", l70);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L1393() else L1392(i212, vjj20, l70, vjj20, dr90);
  L1392(i236, vjj23, l73, vjj24, l74):
    jj8 = ld jj;
    check L1394() else D437();
  L1410():
    dx172 = getTryDispatchBuiltinValue(dr98);
    goto L329(i251, dx172);
  L1411():
    jj13 = force? jj12;
    ____6 = ldf `[[<-` in base;
    r733 = dyn ____6(l85, dx168, jj13);
    goto L329(i253, r733);
  L1412():
    sym131 = ldf dim;
    base131 = ldf dim in base;
    guard131 = `==`.4(sym131, base131);
    if guard131 then L1414() else L1415();
  L1413():
    r734 = dyn base130(<lang dim(vjj)>);
    goto L330(i255, r734);
  L1509():
    dx209 = getTryDispatchBuiltinValue(dr130);
    goto L353(i326, value100, dx209);
  L1510():
    jjj7 = force? jjj6;
    __47 = ldf `[[` in base;
    r796 = dyn __47(jvseq7, jjj7);
    goto L353(i330, value102, r796);
  L1515():
    nrows32 = force? nrows31;
    checkMissing(nrows32);
    r801 = `>`(nrows32, 0);
    c471 = `as.logical`(r801);
    c472 = `&&`(c468, c471);
    goto L355(i335, c472);
  L1517():
    sym134 = ldf length;
    base134 = ldf length in base;
    guard134 = `==`.4(sym134, base134);
    if guard134 then L1518() else L1519();
  D429():
    deopt 1571 [i217, x59, jj2];
  D430():
    deopt 1575 [i219, r723];
  D433():
    deopt 1584 [i223, vjj4, l60, vjj5, l61, jj4];
  D437():
    deopt 1599 [i236, vjj23, l73, vjj24, l74, jj8];
  L321(i229, vjj13, l67, dx156):
    c441 = `is.object`(l67);
    if c441 then L1385() else L1386(i229, vjj13, l67);
  L325(i242, vjj32, l80, dx164):
    c444 = `is.object`(l80);
    if c444 then L1399() else L1400(i242, vjj32, l80);
  L331(i261, r737):
    length24 = ldf length in base;
    r739 = dyn length24(r737);
    check L1418() else D444();
  L332():
    nrows17 = ld nrows;
    check L1463() else D464();
  L357(i343, c479, r803):
    r805 = `!`(r803);
    c480 = `as.logical`(r805);
    c481 = `&&`(c479, c480);
    goto L356(i343, c481);
  L358():
    goto L359(i340);
  L359(i347):
    v16 = ld v;
    check L1528() else D489();
  L1371():
    dx149 = getTryDispatchBuiltinValue(dr82);
    goto L318(i203, dx149);
  L1372():
    jj3 = force? jj2;
    __36 = ldf `[[` in base;
    r722 = dyn __36(x59, jj3);
    goto L318(i217, r722);
  L1373():
    goto L317(i219, r723);
  L1379():
    dx151 = getTryDispatchBuiltinValue(dr84);
    goto L320(i212, vjj1, l57, vjj1, dx151);
  L1380():
    jj5 = force? jj4;
    __37 = ldf `[[` in base;
    r726 = dyn __37(l61, jj5);
    goto L320(i223, vjj4, l60, vjj5, r726);
  L1381():
    dr86 = tryDispatchBuiltin.0("[<-", dx152, vjj9);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L1383() else L1382(i225, vjj8, l63, dr86);
  L1382(i227, vjj11, l65, dx154):
    iseq6 = ld iseq;
    check L1384() else D434();
  L1393():
    dx159 = getTryDispatchBuiltinValue(dr90);
    goto L324(i212, vjj20, l70, vjj20, dx159);
  L1394():
    jj9 = force? jj8;
    __38 = ldf `[[` in base;
    r729 = dyn __38(l74, jj9);
    goto L324(i236, vjj23, l73, vjj24, r729);
  L1395():
    dr92 = tryDispatchBuiltin.0("[<-", dx160, vjj28);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L1397() else L1396(i238, vjj27, l76, dr92);
  L1396(i240, vjj30, l78, dx162):
    iseq8 = ld iseq;
    check L1398() else D438();
  L1414():
    vjj42 = ld vjj;
    check L1416() else D442();
  L1415():
    r736 = dyn base131(<sym vjj>);
    goto L331(i255, r736);
  L1419():
    nrows13 = ld nrows;
    check L1420() else D445();
  L1518():
    v14 = ld v;
    check L1520() else D484();
  L1519():
    r802 = dyn base134(<sym v>);
    goto L357(i337, c474, r802);
  L1523():
    nrows33 = ld nrows;
    check L1524() else D486();
  D434():
    deopt 1588 [i227, vjj11, l65, dx154, vjj9, iseq6];
  D438():
    deopt 1603 [i240, vjj30, l78, dx162, vjj28, iseq8];
  D442():
    deopt 1626 [i255, vjj42];
  D444():
    deopt 1631 [i261, r739];
  D445():
    deopt 1634 [i258, nrows13];
  D464():
    deopt 1693 [i258, nrows17];
  D484():
    deopt 1766 [i337, c474, v14];
  D486():
    deopt 1772 [i340, nrows33];
  D489():
    deopt 1781 [i347, v16];
  L322(i233, vjj17, dx158):
    st x = dx158;
    goto L323(i233, vjj17);
  L326(i246, vjj36, dx166):
    st x = dx166;
    goto L323(i246, vjj36);
  L1383():
    dx155 = getTryDispatchBuiltinValue(dr86);
    goto L321(i225, vjj8, l63, dx155);
  L1384():
    iseq7 = force? iseq6;
    ___7 = ldf `[<-` in base;
    r727 = dyn ___7(dx154, vjj9, iseq7);
    goto L321(i227, vjj11, l65, r727);
  L1385():
    dr88 = tryDispatchBuiltin.0("[[<-", l67, dx156);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L1387() else L1386(i229, vjj13, dr88);
  L1386(i231, vjj15, l69):
    jj6 = ld jj;
    check L1388() else D435();
  L1397():
    dx163 = getTryDispatchBuiltinValue(dr92);
    goto L325(i238, vjj27, l76, dx163);
  L1398():
    iseq9 = force? iseq8;
    ___8 = ldf `[<-` in base;
    r730 = dyn ___8(dx160, iseq9, <missing>, vjj28);
    goto L325(i240, vjj30, l78, r730);
  L1399():
    dr94 = tryDispatchBuiltin.0("[[<-", l80, dx164);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L1401() else L1400(i242, vjj32, dr94);
  L1400(i244, vjj34, l82):
    jj10 = ld jj;
    check L1402() else D439();
  L1416():
    vjj43 = force? vjj42;
    checkMissing(vjj43);
    dim9 = ldf dim in base;
    r738 = dyn dim9(vjj43);
    check L1417() else D443();
  L1418():
    goto L330(i261, r739);
  L1420():
    nrows14 = force? nrows13;
    checkMissing(nrows14);
    ncol1 = ldf ncol;
    check L1421() else D446();
  L1463():
    nrows18 = force? nrows17;
    checkMissing(nrows18);
    l117 = ld x;
    c456 = `is.object`(l117);
    if c456 then L1464() else L1465(i258, nrows18, l117, nrows18, l117);
  L1520():
    v15 = force? v14;
    checkMissing(v15);
    length25 = ldf length in base;
    r804 = dyn length25(v15);
    check L1521() else D485();
  L1524():
    nrows34 = force? nrows33;
    checkMissing(nrows34);
    l140 = ld v;
    length__2 = ldf `length<-`;
    check L1525() else D487();
  L1528():
    v17 = force? v16;
    checkMissing(v17);
    l141 = ld x;
    c484 = `is.object`(l141);
    if c484 then L1529() else L1530(i347, v17, l141);
  D435():
    deopt 1591 [i231, vjj15, l69, dx156, jj6];
  D439():
    deopt 1608 [i244, vjj34, l82, dx164, jj10];
  D443():
    deopt 1629 [i255, r738];
  D446():
    deopt 1636 [i258, nrows14];
  D485():
    deopt 1769 [i337, c474, r804];
  D487():
    deopt 1775 [i340, nrows34, l140, nrows34];
  L341(i298, nrows25, l123, nrows26, dx192):
    length__1 = ldf `length<-`;
    check L1468() else D466();
  L360(i351, dx212):
    st x = dx212;
    sym135 = ldf `is.null`;
    base135 = ldf `is.null` in base;
    guard135 = `==`.4(sym135, base135);
    if guard135 then L1533() else L1534();
  L1387():
    dx157 = getTryDispatchBuiltinValue(dr88);
    goto L322(i229, vjj13, dx157);
  L1388():
    jj7 = force? jj6;
    ____4 = ldf `[[<-` in base;
    r728 = dyn ____4(l69, dx156, jj7);
    goto L322(i231, vjj15, r728);
  L1401():
    dx165 = getTryDispatchBuiltinValue(dr94);
    goto L326(i242, vjj32, dx165);
  L1402():
    jj11 = force? jj10;
    ____5 = ldf `[[<-` in base;
    r731 = dyn ____5(l82, dx164, jj11);
    goto L326(i244, vjj34, r731);
  L1417():
    goto L331(i255, r738);
  L1421():
    p106 = prom<V +>{
      vjj44 = ld vjj;
      vjj45 = force? vjj44;
      checkMissing(vjj45);
      return vjj45;
    };
    r742 = dyn ncol1(p106);
    check L1422() else D447();
  L1464():
    dr114 = tryDispatchBuiltin.1("[[", l117);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L1466() else L1465(i258, nrows18, l117, nrows18, dr114);
  L1465(i296, nrows21, l120, nrows22, l121):
    jj26 = ld jj;
    check L1467() else D465();
  L1521():
    goto L357(i337, c474, r804);
  L1525():
    r806 = dyn length__2(l140, NULL, nrows34);
    check L1526() else D488();
  L1529():
    dr132 = tryDispatchBuiltin.0("[[<-", l141, v17);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L1531() else L1530(i347, v17, dr132);
  L1530(i349, v19, l143):
    jj34 = ld jj;
    check L1532() else D490();
  D447():
    deopt 1638 [i258, nrows14, r742];
  D465():
    deopt 1697 [i296, nrows21, l120, nrows22, l121, jj26];
  D466():
    deopt 1701 [i298, nrows25, l123, dx192, nrows26];
  D488():
    deopt 1777 [i340, nrows34, r806];
  D490():
    deopt 1784 [i349, v19, l143, v17, jj34];
  L361(i354, r809):
    r810 = `!`(r809);
    c486 = `as.logical`(r810);
    if c486 then L1536() else L362(i354, c486);
  L1422():
    r743 = `*`(nrows14, r742);
    l86 = ld x;
    c448 = `is.object`(l86);
    if c448 then L1423() else L1424(i258, r743, l86, r743, l86);
  L1466():
    dx191 = getTryDispatchBuiltinValue(dr114);
    goto L341(i258, nrows18, l117, nrows18, dx191);
  L1467():
    jj27 = force? jj26;
    __43 = ldf `[[` in base;
    r782 = dyn __43(l121, jj27);
    goto L341(i296, nrows21, l120, nrows22, r782);
  L1468():
    r783 = dyn length__1(dx192, NULL, nrows26);
    check L1469() else D467();
  L1526():
    st v = r806;
    goto L359(i340);
  L1531():
    dx211 = getTryDispatchBuiltinValue(dr132);
    goto L360(i347, dx211);
  L1532():
    jj35 = force? jj34;
    ____12 = ldf `[[<-` in base;
    r807 = dyn ____12(l143, v17, jj35);
    goto L360(i349, r807);
  L1533():
    v22 = ld v;
    check L1535() else D491();
  L1534():
    r808 = dyn base135(<sym v>);
    goto L361(i351, r808);
  D467():
    deopt 1703 [i298, nrows25, l123, r783];
  D491():
    deopt 1789 [i351, v22];
  L333(i267, r750, l92, r751, dx176):
    length__ = ldf `length<-`;
    check L1427() else D449();
  L362(i356, c488):
    c500 = `as.logical`(c488);
    if c500 then L1546() else L365(i356, c500);
  L1423():
    dr100 = tryDispatchBuiltin.1("[[", l86);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L1425() else L1424(i258, r743, l86, r743, dr100);
  L1424(i265, r746, l89, r747, l90):
    jj14 = ld jj;
    check L1426() else D448();
  L1469():
    c457 = `is.object`(l123);
    if c457 then L1470() else L1471(i298, nrows25, l123);
  L1535():
    v23 = force? v22;
    checkMissing(v23);
    c485 = `==`(v23, NULL);
    goto L361(i351, c485);
  L1536():
    sym136 = ldf `is.atomic`;
    base136 = ldf `is.atomic` in base;
    guard136 = `==`.4(sym136, base136);
    if guard136 then L1537() else L1538();
  D448():
    deopt 1642 [i265, r746, l89, r747, l90, jj14];
  D449():
    deopt 1646 [i267, r750, l92, dx176, r751];
  L342(i302, dx194):
    st x = dx194;
    vjj66 = ld vjj;
    check L1474() else D469();
  L363(i359, c491, r812):
    c497 = `as.logical`(r812);
    c498 = `&&`(c491, c497);
    goto L362(i359, c498);
  L365(i366, c502):
    c518 = `as.logical`(c502);
    if c518 then L1558() else L369();
  L1425():
    dx175 = getTryDispatchBuiltinValue(dr100);
    goto L333(i258, r743, l86, r743, dx175);
  L1426():
    jj15 = force? jj14;
    __40 = ldf `[[` in base;
    r752 = dyn __40(l90, jj15);
    goto L333(i265, r746, l89, r747, r752);
  L1427():
    r753 = dyn length__(dx176, NULL, r751);
    check L1428() else D450();
  L1470():
    dr116 = tryDispatchBuiltin.0("[[<-", l123, r783);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L1472() else L1471(i298, nrows25, dr116);
  L1471(i300, nrows28, l125):
    jj28 = ld jj;
    check L1473() else D468();
  L1537():
    x61 = ld x;
    check L1539() else D492();
  L1538():
    r811 = dyn base136(<lang `[[`(x, jj)>);
    goto L363(i354, c486, r811);
  L1546():
    sym137 = ldf `is.null`;
    base137 = ldf `is.null` in base;
    guard137 = `==`.4(sym137, base137);
    if guard137 then L1547() else L1548();
  D450():
    deopt 1648 [i267, r750, l92, r753];
  D468():
    deopt 1704 [i300, nrows28, l125, r783, jj28];
  D469():
    deopt 1708 [i302, vjj66];
  D492():
    deopt 1795 [i354, c486, x61];
  L366(i369, c505, r816):
    r821 = `!`(r816);
    c515 = `as.logical`(r821);
    c516 = `&&`(c505, c515);
    goto L365(i369, c516);
  L369():
    goto L372(i366);
  L372(i388):
    goto L350(i388);
  L1428():
    c449 = `is.object`(l92);
    if c449 then L1429() else L1430(i267, r750, l92);
  L1472():
    dx193 = getTryDispatchBuiltinValue(dr116);
    goto L342(i298, dx193);
  L1473():
    jj29 = force? jj28;
    ____10 = ldf `[[<-` in base;
    r784 = dyn ____10(l125, r783, jj29);
    goto L342(i300, r784);
  L1474():
    vjj67 = force? vjj66;
    checkMissing(vjj67);
    l126 = ld x;
    c458 = `is.object`(l126);
    if c458 then L1475() else L1476(i302, vjj67, l126, vjj67, l126);
  L1539():
    x62 = force? x61;
    checkMissing(x62);
    c492 = `is.object`(x62);
    if c492 then L1540() else L1541(i354, c486, x62);
  L1547():
    sym138 = ldf names;
    base138 = ldf names in base;
    guard138 = `==`.4(sym138, base138);
    if guard138 then L1549() else L1550();
  L1548():
    r815 = dyn base137(<lang names(`[[`(x, jj))>);
    goto L366(i356, c500, r815);
  L1558():
    l144 = ld x;
    c519 = `is.object`(l144);
    if c519 then L1559() else L1560(i366, NULL, l144, NULL, l144);
  L334(i271, dx178):
    st x = dx178;
    sym132 = ldf c;
    base132 = ldf c in base;
    guard132 = `==`.4(sym132, base132);
    if guard132 then L1433() else L1434();
  L343(i306, vjj74, l132, vjj75, dx196):
    c459 = `is.object`(dx196);
    if c459 then L1479() else L1480(i306, vjj74, l132, dx196);
  L364(i363, c496, dx214):
    is_atomic1 = ldf `is.atomic` in base;
    r814 = dyn is_atomic1(dx214);
    check L1544() else D494();
  L367(i372, c508, r818):
    c514 = `==`(r818, NULL);
    goto L366(i372, c508, c514);
  L370(i383, r828, l150, r829, dx218):
    names__3 = ldf `names<-`;
    check L1563() else D499();
  L1429():
    dr102 = tryDispatchBuiltin.0("[[<-", l92, r753);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L1431() else L1430(i267, r750, dr102);
  L1430(i269, r755, l94):
    jj16 = ld jj;
    check L1432() else D451();
  L1475():
    dr118 = tryDispatchBuiltin.1("[[", l126);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L1477() else L1476(i302, vjj67, l126, vjj67, dr118);
  L1476(i304, vjj70, l129, vjj71, l130):
    jj30 = ld jj;
    check L1478() else D470();
  L1540():
    dr134 = tryDispatchBuiltin.1("[[", x62);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L1542() else L1541(i354, c486, dr134);
  L1541(i361, c494, x64):
    jj36 = ld jj;
    check L1543() else D493();
  L1549():
    x65 = ld x;
    check L1551() else D495();
  L1550():
    r817 = dyn base138(<lang `[[`(x, jj)>);
    goto L367(i356, c500, r817);
  L1559():
    dr138 = tryDispatchBuiltin.1("[[", l144);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L1561() else L1560(i366, NULL, l144, NULL, dr138);
  L1560(i381, r824, l147, r825, l148):
    jj40 = ld jj;
    check L1562() else D498();
  D451():
    deopt 1649 [i269, r755, l94, r753, jj16];
  D470():
    deopt 1712 [i304, vjj70, l129, vjj71, l130, jj30];
  D493():
    deopt 1797 [i361, c494, x64, jj36];
  D494():
    deopt 1801 [i363, c496, r814];
  D495():
    deopt 1806 [i356, c500, x65];
  D498():
    deopt 1820 [i381, r824, l147, r825, l148, jj40];
  D499():
    deopt 1824 [i383, r828, l150, dx218, r829];
  L335(i274, r760):
    l95 = ld x;
    c451 = `is.object`(l95);
    if c451 then L1439() else L1440(i274, r760, l95, r760, l95);
  L344(i310, vjj79, l136, dx200):
    c460 = `is.object`(l136);
    if c460 then L1483() else L1484(i310, vjj79, l136);
  L1431():
    dx177 = getTryDispatchBuiltinValue(dr102);
    goto L334(i267, dx177);
  L1432():
    jj17 = force? jj16;
    ____7 = ldf `[[<-` in base;
    r758 = dyn ____7(l94, r753, jj17);
    goto L334(i269, r758);
  L1433():
    nrows15 = ld nrows;
    check L1435() else D452();
  L1434():
    r759 = dyn base132(<sym nrows>, <lang ncol(vjj)>);
    goto L335(i271, r759);
  L1477():
    dx195 = getTryDispatchBuiltinValue(dr118);
    goto L343(i302, vjj67, l126, vjj67, dx195);
  L1478():
    jj31 = force? jj30;
    __44 = ldf `[[` in base;
    r785 = dyn __44(l130, jj31);
    goto L343(i304, vjj70, l129, vjj71, r785);
  L1479():
    dr120 = tryDispatchBuiltin.0("[<-", dx196, vjj75);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L1481() else L1480(i306, vjj74, l132, dr120);
  L1480(i308, vjj77, l134, dx198):
    iseq12 = ld iseq;
    check L1482() else D471();
  L1542():
    dx213 = getTryDispatchBuiltinValue(dr134);
    goto L364(i354, c486, dx213);
  L1543():
    jj37 = force? jj36;
    __49 = ldf `[[` in base;
    r813 = dyn __49(x64, jj37);
    goto L364(i361, c494, r813);
  L1544():
    goto L363(i363, c496, r814);
  L1551():
    x66 = force? x65;
    checkMissing(x66);
    c509 = `is.object`(x66);
    if c509 then L1552() else L1553(i356, c500, x66);
  L1561():
    dx217 = getTryDispatchBuiltinValue(dr138);
    goto L370(i366, NULL, l144, NULL, dx217);
  L1562():
    jj41 = force? jj40;
    __51 = ldf `[[` in base;
    r830 = dyn __51(l148, jj41);
    goto L370(i381, r824, l147, r825, r830);
  L1563():
    r831 = dyn names__3(dx218, NULL, r829);
    check L1564() else D500();
  D452():
    deopt 1655 [i271, nrows15];
  D471():
    deopt 1716 [i308, vjj77, l134, dx198, vjj75, iseq12];
  D500():
    deopt 1826 [i383, r828, l150, r831];
  L336(i278, r770, l101, r771, dx180):
    dim__1 = ldf `dim<-`;
    check L1443() else D457();
  L345(i314, vjj83, dx202):
    st x = dx202;
    goto L327(i314);
  L368(i376, c513, dx216):
    names6 = ldf names in base;
    r820 = dyn names6(dx216);
    check L1556() else D497();
  L1435():
    nrows16 = force? nrows15;
    checkMissing(nrows16);
    ncol2 = ldf ncol;
    check L1436() else D453();
  L1439():
    dr104 = tryDispatchBuiltin.1("[[", l95);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L1441() else L1440(i274, r760, l95, r760, dr104);
  L1440(i276, r766, l98, r767, l99):
    jj18 = ld jj;
    check L1442() else D456();
  L1481():
    dx199 = getTryDispatchBuiltinValue(dr120);
    goto L344(i306, vjj74, l132, dx199);
  L1482():
    iseq13 = force? iseq12;
    ___10 = ldf `[<-` in base;
    r786 = dyn ___10(dx198, vjj75, iseq13);
    goto L344(i308, vjj77, l134, r786);
  L1483():
    dr122 = tryDispatchBuiltin.0("[[<-", l136, dx200);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L1485() else L1484(i310, vjj79, dr122);
  L1484(i312, vjj81, l138):
    jj32 = ld jj;
    check L1486() else D472();
  L1552():
    dr136 = tryDispatchBuiltin.1("[[", x66);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L1554() else L1553(i356, c500, dr136);
  L1553(i374, c511, x68):
    jj38 = ld jj;
    check L1555() else D496();
  L1564():
    c520 = `is.object`(l150);
    if c520 then L1565() else L1566(i383, r828, l150);
  D453():
    deopt 1658 [i271];
  D456():
    deopt 1665 [i276, r766, l98, r767, l99, jj18];
  D457():
    deopt 1669 [i278, r770, l101, dx180, r771];
  D472():
    deopt 1719 [i312, vjj81, l138, dx200, jj32];
  D496():
    deopt 1808 [i374, c511, x68, jj38];
  D497():
    deopt 1812 [i376, c513, r820];
  L371(i387, r835, dx220):
    st x = dx220;
    goto L372(i387);
  L1436():
    p107 = prom<V +>{
      vjj46 = ld vjj;
      vjj47 = force? vjj46;
      checkMissing(vjj47);
      return vjj47;
    };
    r762 = dyn ncol2(p107);
    check L1437() else D454();
  L1441():
    dx179 = getTryDispatchBuiltinValue(dr104);
    goto L336(i274, r760, l95, r760, dx179);
  L1442():
    jj19 = force? jj18;
    __41 = ldf `[[` in base;
    r772 = dyn __41(l99, jj19);
    goto L336(i276, r766, l98, r767, r772);
  L1443():
    r773 = dyn dim__1(dx180, NULL, r771);
    check L1444() else D458();
  L1485():
    dx201 = getTryDispatchBuiltinValue(dr122);
    goto L345(i310, vjj79, dx201);
  L1486():
    jj33 = force? jj32;
    ____11 = ldf `[[<-` in base;
    r787 = dyn ____11(l138, dx200, jj33);
    goto L345(i312, vjj81, r787);
  L1554():
    dx215 = getTryDispatchBuiltinValue(dr136);
    goto L368(i356, c500, dx215);
  L1555():
    jj39 = force? jj38;
    __50 = ldf `[[` in base;
    r819 = dyn __50(x68, jj39);
    goto L368(i374, c511, r819);
  L1556():
    goto L367(i376, c513, r820);
  L1565():
    dr140 = tryDispatchBuiltin.0("[[<-", l150, r831);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L1567() else L1566(i383, r828, dr140);
  L1566(i385, r833, l152):
    jj42 = ld jj;
    check L1568() else D501();
  D454():
    deopt 1660 [i271, r762];
  D458():
    deopt 1671 [i278, r770, l101, r773];
  D501():
    deopt 1827 [i385, r833, l152, r831, jj42];
  L1437():
    c450 = ldf c in base;
    r763 = dyn c450(nrows16, r762);
    check L1438() else D455();
  L1444():
    c452 = `is.object`(l101);
    if c452 then L1445() else L1446(i278, r770, l101);
  L1567():
    dx219 = getTryDispatchBuiltinValue(dr140);
    goto L371(i383, r828, dx219);
  L1568():
    jj43 = force? jj42;
    ____13 = ldf `[[<-` in base;
    r836 = dyn ____13(l152, r831, jj43);
    goto L371(i385, r833, r836);
  D455():
    deopt 1662 [i271, r763];
  L337(i282, dx182):
    st x = dx182;
    vjj48 = ld vjj;
    check L1449() else D460();
  L1438():
    goto L335(i271, r763);
  L1445():
    dr106 = tryDispatchBuiltin.0("[[<-", l101, r773);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L1447() else L1446(i278, r770, dr106);
  L1446(i280, r775, l103):
    jj20 = ld jj;
    check L1448() else D459();
  D459():
    deopt 1672 [i280, r775, l103, r773, jj20];
  D460():
    deopt 1676 [i282, vjj48];
  L1447():
    dx181 = getTryDispatchBuiltinValue(dr106);
    goto L337(i278, dx181);
  L1448():
    jj21 = force? jj20;
    ____8 = ldf `[[<-` in base;
    r778 = dyn ____8(l103, r773, jj21);
    goto L337(i280, r778);
  L1449():
    vjj49 = force? vjj48;
    checkMissing(vjj49);
    l104 = ld x;
    c453 = `is.object`(l104);
    if c453 then L1450() else L1451(i282, vjj49, l104, vjj49, l104);
  L338(i286, vjj56, l110, vjj57, dx184):
    c454 = `is.object`(dx184);
    if c454 then L1454() else L1455(i286, vjj56, l110, dx184);
  L1450():
    dr108 = tryDispatchBuiltin.1("[[", l104);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L1452() else L1451(i282, vjj49, l104, vjj49, dr108);
  L1451(i284, vjj52, l107, vjj53, l108):
    jj22 = ld jj;
    check L1453() else D461();
  D461():
    deopt 1680 [i284, vjj52, l107, vjj53, l108, jj22];
  L339(i290, vjj61, l114, dx188):
    c455 = `is.object`(l114);
    if c455 then L1458() else L1459(i290, vjj61, l114);
  L1452():
    dx183 = getTryDispatchBuiltinValue(dr108);
    goto L338(i282, vjj49, l104, vjj49, dx183);
  L1453():
    jj23 = force? jj22;
    __42 = ldf `[[` in base;
    r779 = dyn __42(l108, jj23);
    goto L338(i284, vjj52, l107, vjj53, r779);
  L1454():
    dr110 = tryDispatchBuiltin.0("[<-", dx184, vjj57);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L1456() else L1455(i286, vjj56, l110, dr110);
  L1455(i288, vjj59, l112, dx186):
    iseq10 = ld iseq;
    check L1457() else D462();
  D462():
    deopt 1684 [i288, vjj59, l112, dx186, vjj57, iseq10];
  L340(i294, vjj65, dx190):
    st x = dx190;
    goto L327(i294);
  L1456():
    dx187 = getTryDispatchBuiltinValue(dr110);
    goto L339(i286, vjj56, l110, dx187);
  L1457():
    iseq11 = force? iseq10;
    ___9 = ldf `[<-` in base;
    r780 = dyn ___9(dx184, iseq11, <missing>, vjj57);
    goto L339(i288, vjj59, l112, r780);
  L1458():
    dr112 = tryDispatchBuiltin.0("[[<-", l114, dx188);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L1460() else L1459(i290, vjj61, dr112);
  L1459(i292, vjj63, l116):
    jj24 = ld jj;
    check L1461() else D463();
  D463():
    deopt 1689 [i292, vjj63, l116, dx188, jj24];
  L1460():
    dx189 = getTryDispatchBuiltinValue(dr112);
    goto L340(i290, vjj61, dx189);
  L1461():
    jj25 = force? jj24;
    ____9 = ldf `[[<-` in base;
    r781 = dyn ____9(l116, dx188, jj25);
    goto L340(i292, vjj63, r781);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg stop:cls, reg conditionMessage:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r1 = dyn conditionMessage(p);
      return r1;
    };
    r3 = dyn stop[, `call.`](p1, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}