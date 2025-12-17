fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3536295563;
    st `rbind.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3536295563(`...`, `deparse.level`, `make.row.names`, stringsAsFactors, `factor.exclude`) {
  (reg ddd:dots, reg deparse_level:*, reg make_row_names:*, reg stringsAsFactors:*, reg factor_exclude:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, var `make.row.names`:*, reg make_row_names_isMissing:L, reg make_row_names_orDefault:*, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, var `factor.exclude`:*, reg factor_exclude_isMissing:L, reg factor_exclude_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:dots?, reg r3:V, reg allargs:*, reg allargs1:V, reg c:L, reg allargs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lengths:cls, reg allargs4:*, reg allargs5:V, reg p:p(V +), reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg allargs6:*, reg allargs7:V, reg length:cls, reg r10:V, reg c1:L, reg vapply:cls, reg allargs8:*, reg allargs9:V, reg p1:p(V +), reg r12:cls, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg nr:*, reg nr1:V, reg r17:V, reg any:cls, reg r18:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg n0:*, reg n1:V, reg all:cls, reg r21:V, reg c3:L, reg allargs10:*, reg allargs11:V, reg c4:L, reg allargs13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r22:V, reg allargs14:*, reg allargs15:V, reg c5:L, reg allargs17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n2:*, reg n3:V, reg r25:V, reg __2:cls, reg r26:V, reg dx6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg allargs18:*, reg allargs19:V, reg length1:cls, reg r29:V, reg n4:*, reg n5:V, reg r30:V, reg c6:L, reg list2DF:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg allargs20:*, reg allargs21:V, reg names:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg nms:*, reg nms1:V, reg c7:V, reg c8:L, reg character:cls, reg n6:*, reg n7:V, reg p3:p(V +), reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg n8:*, reg n9:V, reg vector:cls, reg r44:V, reg make_row_names1:*, reg make_row_names2:V, reg c9:L, reg rows:*, reg rows1:V, reg r45:cls, reg isTRUE:cls, reg factor_exclude1:*, reg factor_exclude2:V, reg p4:p(V +), reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg list1:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg n10:*, reg n11:V, reg r54:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg allargs22:*, reg allargs23:V, reg c11:L, reg i6:I, reg allargs25:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i8:I, reg dx9:V, reg i9:*, reg i10:V, reg __3:cls, reg r55:V, reg nms2:*, reg nms3:V, reg c12:L, reg i12:I, reg nms5:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i14:I, reg dx11:V, reg i15:*, reg i16:V, reg __4:cls, reg r56:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg i19:I, reg r58:V, reg xi:*, reg xi1:V, reg is_matrix:cls, reg r59:V, reg c13:L, reg as_data_frame:cls, reg xi2:*, reg xi3:V, reg p5:p(V +), reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg p6:p(V +), reg r62:V, reg l1:*, reg c14:L, reg i23:I, reg r64:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx12:V, reg i25:I, reg r66:V, reg dx13:V, reg i26:*, reg i27:V, reg ____:cls, reg r67:V, reg i28:I, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg i31:I, reg r70:V, reg xi4:*, reg xi5:V, reg inherits:cls, reg r71:V, reg c15:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r72:V, reg i36:I, reg r73:V, reg cl:*, reg cl1:V, reg c16:V, reg c17:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg i41:I, reg r75:V, reg xi6:*, reg xi7:V, reg oldClass:cls, reg r76:V, reg i42:I, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg i45:I, reg r79:V, reg xi8:*, reg xi9:V, reg attr:cls, reg r80:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg i48:I, reg r82:V, reg ri:*, reg ri1:V, reg length2:cls, reg r83:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r84:V, reg i51:I, reg r85:V, reg clabs:*, reg clabs1:V, reg c18:V, reg c19:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r86:V, reg i56:I, reg r87:V, reg xi10:*, reg xi11:V, reg names1:cls, reg r88:V, reg i57:I, reg sym18:cls, reg base18:cls, reg guard18:L, reg r90:V, reg i60:I, reg r91:V, reg xi12:*, reg xi13:V, reg length3:cls, reg r92:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r95:V, reg i63:I, reg r96:V, reg r97:V, reg clabs2:*, reg clabs3:V, reg length4:cls, reg r98:V, reg r99:V, reg c20:L, reg stop:cls, reg r100:V, reg i66:I, reg match_names:cls, reg clabs4:*, reg clabs5:V, reg p7:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r103:V, reg r104:V, reg xi14:*, reg xi15:V, reg names2:cls, reg r105:V, reg p8:p(V +), reg r107:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r108:V, reg i69:I, reg r109:V, reg pi:*, reg pi1:V, reg c21:V, reg r110:V, reg c22:L, reg pi2:*, reg pi3:V, reg l4:*, reg c23:L, reg i73:I, reg pi5:V, reg l6:*, reg dr12:V, reg dc6:L, reg dx14:V, reg i75:I, reg pi7:V, reg dx15:V, reg i76:*, reg i77:V, reg ____1:cls, reg r111:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r112:V, reg i80:I, reg r113:V, reg nrow:*, reg nrow1:V, reg r114:V, reg ni:*, reg ni1:V, reg seq_int:cls, reg r115:V, reg l7:*, reg c24:L, reg i82:I, reg r117:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx16:V, reg i84:I, reg dx17:V, reg i85:*, reg i86:V, reg ____2:cls, reg r120:V, reg make_row_names3:*, reg make_row_names4:V, reg c25:L, reg Make_row_names:cls, reg nmi:*, reg nmi1:V, reg p9:p(V +), reg ri2:*, reg ri3:V, reg p10:p(V +), reg ni2:*, reg ni3:V, reg p11:p(V +), reg nrow2:*, reg nrow3:V, reg p12:p(V +), reg r125:V, reg l10:*, reg c26:L, reg i90:I, reg r127:V, reg l12:*, reg dr16:V, reg dc8:L, reg dx18:V, reg i92:I, reg r129:V, reg dx19:V, reg i93:*, reg i94:V, reg ____3:cls, reg r130:V, reg i95:I, reg nrow4:*, reg nrow5:V, reg ni4:*, reg ni5:V, reg r132:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r133:V, reg i98:I, reg r134:V, reg value:*, reg value1:V, reg c27:V, reg c28:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r135:V, reg i103:I, reg r136:V, reg xi16:*, reg xi17:V, reg unclass:cls, reg r137:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r138:V, reg i106:I, reg r139:V, reg value2:*, reg value3:V, reg length5:cls, reg r140:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r141:V, reg i109:I, reg r142:V, reg nvar:*, reg nvar1:V, reg vector1:cls, reg r143:V, reg logical:cls, reg nvar2:*, reg nvar3:V, reg p13:p(V +), reg r145:V, reg smartX:*, reg smartX1:V, reg c29:L, reg ordCol:*, reg ordCol1:V, reg i112:I, reg sym27:cls, reg base27:cls, reg guard27:L, reg r146:V, reg i115:I, reg r147:V, reg nvar4:*, reg nvar5:V, reg r148:I, reg s1:V, reg l13:I, reg i116:I, reg i117:I, reg i118:I, reg i119:I, reg c30:L, reg x1:V, reg value4:*, reg value5:V, reg c31:L, reg i126:I, reg i127:I, reg value7:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i130:I, reg i131:I, reg dx21:V, reg j:*, reg j1:V, reg __5:cls, reg r149:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r150:V, reg i136:I, reg i137:I, reg r151:V, reg levels:cls, reg xj:*, reg xj1:V, reg p14:p(V +), reg r153:V, reg c32:V, reg r154:V, reg c33:L, reg lj:*, reg lj1:V, reg l14:*, reg c34:L, reg i144:I, reg i145:I, reg lj3:V, reg l16:*, reg dr20:V, reg dc10:L, reg dx22:V, reg i148:I, reg i149:I, reg dx23:V, reg j2:*, reg j3:V, reg ____4:cls, reg r155:V, reg i150:I, reg i151:I, reg r156:V, reg is_factor:cls, reg xj2:*, reg xj3:V, reg p15:p(V +), reg r158:V, reg l17:*, reg c35:L, reg i154:I, reg i155:I, reg r160:V, reg l19:*, reg dr22:V, reg dc11:L, reg dx24:V, reg i158:I, reg i159:I, reg dx25:V, reg j4:*, reg j5:V, reg ___:cls, reg r163:V, reg fac:*, reg fac1:V, reg c36:L, reg is_ordered:cls, reg xj4:*, reg xj5:V, reg p16:p(V +), reg r165:V, reg l20:*, reg c37:L, reg i166:I, reg i167:I, reg r167:V, reg l22:*, reg dr24:V, reg dc12:L, reg dx26:V, reg i170:I, reg i171:I, reg dx27:V, reg j6:*, reg j7:V, reg ___1:cls, reg r170:V, reg smartX2:*, reg smartX3:V, reg c38:L, reg i174:I, reg i175:I, reg c40:V, reg NA_lev:*, reg NA_lev1:V, reg c41:L, reg i178:I, reg i179:I, reg c43:L, reg NA_lev3:V, reg dr26:V, reg dc13:L, reg dx28:V, reg i182:I, reg i183:I, reg c45:L, reg dx29:V, reg j8:*, reg j9:V, reg __6:cls, reg r171:V, reg r172:V, reg c46:L, reg c47:V, reg c49:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r173:V, reg i194:I, reg i195:I, reg r174:V, reg lj6:*, reg lj7:V, reg anyNA:cls, reg r175:V, reg l23:*, reg c50:L, reg i198:I, reg i199:I, reg r177:V, reg l25:*, reg dr28:V, reg dc14:L, reg dx30:V, reg i202:I, reg i203:I, reg r179:V, reg dx31:V, reg j10:*, reg j11:V, reg ___2:cls, reg r180:V, reg i204:I, reg i205:I, reg r181:V, reg i206:I, reg i207:I, reg sym30:cls, reg base30:cls, reg guard30:L, reg r183:V, reg i212:I, reg i213:I, reg r184:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r185:V, reg i218:I, reg i219:I, reg r186:V, reg xj6:*, reg xj7:V, reg dim:cls, reg r187:V, reg length6:cls, reg r188:V, reg r189:V, reg l26:*, reg c51:L, reg i222:I, reg i223:I, reg r191:V, reg l28:*, reg dr30:V, reg dc15:L, reg dx32:V, reg i226:I, reg i227:I, reg dx33:V, reg j12:*, reg j13:V, reg ___3:cls, reg r194:V, reg i228:I, reg i229:I, reg sym32:cls, reg base32:cls, reg guard32:L, reg r195:V, reg i232:I, reg r196:V, reg nvar6:*, reg nvar7:V, reg r197:I, reg s2:V, reg l29:I, reg i233:I, reg i234:I, reg i235:I, reg i236:I, reg c52:L, reg x2:V, reg xi18:*, reg xi19:V, reg c53:L, reg i243:I, reg i244:I, reg xi21:V, reg dr32:V, reg dc16:L, reg dx34:V, reg i247:I, reg i248:I, reg dx35:V, reg j14:*, reg j15:V, reg __7:cls, reg r198:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r199:V, reg i253:I, reg i254:I, reg r200:V, reg pi8:*, reg pi9:V, reg c54:V, reg c55:L, reg i255:I, reg i256:I, reg c56:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r201:V, reg i263:I, reg i264:I, reg c60:L, reg r202:V, reg pi10:*, reg pi11:V, reg c61:L, reg i267:I, reg i268:I, reg c63:L, reg pi13:V, reg dr34:V, reg dc17:L, reg dx36:V, reg i271:I, reg i272:I, reg c65:L, reg dx37:V, reg j16:*, reg j17:V, reg __8:cls, reg r203:V, reg is_na:cls, reg r204:V, reg c66:L, reg c67:V, reg c69:L, reg j18:*, reg j19:V, reg i279:I, reg i280:I, reg facCol:*, reg facCol1:V, reg c70:L, reg i283:I, reg i284:I, reg facCol3:V, reg dr36:V, reg dc18:L, reg dx38:V, reg i287:I, reg i288:I, reg dx39:V, reg jj:*, reg jj1:V, reg __9:cls, reg r205:V, reg c71:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r206:V, reg i297:I, reg i298:I, reg r207:V, reg levels1:cls, reg xij:*, reg xij1:V, reg p17:p(V +), reg r209:V, reg length7:cls, reg r210:V, reg c72:L, reg unique:cls, reg sym36:cls, reg base36:cls, reg guard36:L, reg r211:V, reg r212:V, reg all_levs:*, reg all_levs1:V, reg c73:L, reg all_levs3:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg jj2:*, reg jj3:V, reg __10:cls, reg r213:V, reg lij:*, reg lij1:V, reg c74:cls, reg r214:V, reg p18:p(V +), reg r216:V, reg l30:*, reg c75:L, reg i305:I, reg i306:I, reg r218:V, reg l32:*, reg dr40:V, reg dc20:L, reg dx42:V, reg i309:I, reg i310:I, reg dx43:V, reg jj4:*, reg jj5:V, reg ____5:cls, reg r221:V, reg ordCol3:*, reg ordCol4:V, reg c76:L, reg i313:I, reg i314:I, reg ordCol6:V, reg dr42:V, reg dc21:L, reg dx44:V, reg i317:I, reg i318:I, reg dx45:V, reg jj6:*, reg jj7:V, reg __11:cls, reg r222:V, reg c77:L, reg is_ordered1:cls, reg xij2:*, reg xij3:V, reg p19:p(V +), reg r224:V, reg l33:*, reg c78:L, reg i325:I, reg i326:I, reg r226:V, reg l35:*, reg dr44:V, reg dc22:L, reg dx46:V, reg i329:I, reg i330:I, reg r228:V, reg dx47:V, reg jj8:*, reg jj9:V, reg ___4:cls, reg r229:V, reg i331:I, reg i332:I, reg smartX4:*, reg smartX5:V, reg c79:L, reg i335:I, reg i336:I, reg c81:V, reg NA_lev4:*, reg NA_lev5:V, reg c82:L, reg i339:I, reg i340:I, reg c84:L, reg NA_lev7:V, reg dr46:V, reg dc23:L, reg dx48:V, reg i343:I, reg i344:I, reg c86:L, reg dx49:V, reg jj10:*, reg jj11:V, reg __12:cls, reg r231:V, reg r232:V, reg c87:L, reg c88:V, reg c90:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r233:V, reg i355:I, reg i356:I, reg r234:V, reg lij2:*, reg lij3:V, reg anyNA1:cls, reg r235:V, reg l36:*, reg c91:L, reg i359:I, reg i360:I, reg r237:V, reg l38:*, reg dr48:V, reg dc24:L, reg dx50:V, reg i363:I, reg i364:I, reg r239:V, reg dx51:V, reg jj12:*, reg jj13:V, reg ___5:cls, reg r240:V, reg i365:I, reg i366:I, reg r241:V, reg i367:I, reg i368:I, reg r242:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r243:V, reg i373:I, reg i374:I, reg r244:V, reg xij4:*, reg xij5:V, reg c92:L, reg c93:L, reg unique1:cls, reg sym39:cls, reg base39:cls, reg guard39:L, reg r245:V, reg r246:V, reg all_levs4:*, reg all_levs5:V, reg c94:L, reg all_levs7:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg jj14:*, reg jj15:V, reg __13:cls, reg r247:V, reg xij6:*, reg xij7:V, reg c95:cls, reg r248:V, reg p20:p(V +), reg r250:V, reg l39:*, reg c96:L, reg i381:I, reg i382:I, reg r252:V, reg l41:*, reg dr52:V, reg dc26:L, reg dx54:V, reg i385:I, reg i386:I, reg r254:V, reg dx55:V, reg jj16:*, reg jj17:V, reg ____6:cls, reg r255:V, reg i387:I, reg i388:I, reg i389:I, reg sym40:cls, reg base40:cls, reg guard40:L, reg r257:V, reg i393:I, reg r258:V, reg xi22:*, reg xi23:V, reg is_list:cls, reg r259:V, reg c97:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r260:V, reg i398:I, reg r261:V, reg lengths1:cls, reg xi24:*, reg xi25:V, reg p21:p(V +), reg r263:V, reg range:cls, reg r264:V, reg ni6:*, reg ni7:V, reg c98:L, reg i400:I, reg ni9:V, reg dr54:V, reg dc27:L, reg dx56:V, reg i402:I, reg dx57:V, reg __14:cls, reg r265:V, reg ni10:*, reg ni11:V, reg c99:L, reg i404:I, reg dx59:V, reg ni13:V, reg dr56:V, reg dc28:L, reg dx61:V, reg i406:I, reg dx62:V, reg dx63:V, reg __15:cls, reg r266:V, reg r267:V, reg c100:L, reg ni14:*, reg ni15:V, reg c101:L, reg i410:I, reg ni17:V, reg dr58:V, reg dc29:L, reg dx64:V, reg i412:I, reg dx65:V, reg __16:cls, reg r268:V, reg i413:I, reg stop1:cls, reg r269:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r270:V, reg i416:I, reg r271:V, reg ni18:*, reg ni19:V, reg r272:I, reg sym43:cls, reg base43:cls, reg guard43:L, reg r273:V, reg i419:I, reg r274:V, reg nrow6:*, reg nrow7:V, reg r275:V, reg ni20:*, reg ni21:V, reg seq_int1:cls, reg r276:V, reg l42:*, reg c102:L, reg i421:I, reg r278:V, reg l44:*, reg dr60:V, reg dc30:L, reg dx67:V, reg i423:I, reg dx68:V, reg i424:*, reg i425:V, reg ____7:cls, reg r281:V, reg make_row_names5:*, reg make_row_names6:V, reg c103:L, reg Make_row_names1:cls, reg nmi2:*, reg nmi3:V, reg p22:p(V +), reg ri4:*, reg ri5:V, reg p23:p(V +), reg ni22:*, reg ni23:V, reg p24:p(V +), reg nrow8:*, reg nrow9:V, reg p25:p(V +), reg r286:V, reg l45:*, reg c104:L, reg i429:I, reg r288:V, reg l47:*, reg dr62:V, reg dc31:L, reg dx69:V, reg i431:I, reg r290:V, reg dx70:V, reg i432:*, reg i433:V, reg ____8:cls, reg r291:V, reg i434:I, reg nrow10:*, reg nrow11:V, reg ni24:*, reg ni25:V, reg r293:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r294:V, reg i437:I, reg r295:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r296:V, reg i440:I, reg r297:V, reg xi26:*, reg xi27:V, reg names3:cls, reg r298:V, reg length8:cls, reg r299:V, reg r300:V, reg c105:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r301:V, reg i445:I, reg r302:V, reg clabs6:*, reg clabs7:V, reg c106:V, reg c107:L, reg nmi4:*, reg nmi5:V, reg i448:I, reg nmi6:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r303:V, reg i451:I, reg r304:V, reg xi28:*, reg xi29:V, reg length9:cls, reg r305:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r308:V, reg i454:I, reg r309:V, reg r310:V, reg clabs8:*, reg clabs9:V, reg length10:cls, reg r311:V, reg r312:V, reg c108:L, reg stop2:cls, reg r313:V, reg i457:I, reg match_names1:cls, reg clabs10:*, reg clabs11:V, reg p26:p(V +), reg nmi7:*, reg nmi8:V, reg p27:p(V +), reg r317:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r318:V, reg i460:I, reg r319:V, reg pi14:*, reg pi15:V, reg c109:V, reg r320:V, reg c110:L, reg pi16:*, reg pi17:V, reg l48:*, reg c111:L, reg i464:I, reg pi19:V, reg l50:*, reg dr64:V, reg dc32:L, reg dx71:V, reg i466:I, reg pi21:V, reg dx72:V, reg i467:*, reg i468:V, reg ____9:cls, reg r321:V, reg i469:I, reg nmi9:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r322:V, reg i472:I, reg r323:V, reg xi30:*, reg xi31:V, reg length11:cls, reg r324:V, reg c112:L, reg nrow12:*, reg nrow13:V, reg r325:V, reg l51:*, reg c113:L, reg i476:I, reg r327:V, reg l53:*, reg dr66:V, reg dc33:L, reg dx73:V, reg i478:I, reg dx74:V, reg i479:*, reg i480:V, reg ____10:cls, reg r330:V, reg make_row_names7:*, reg make_row_names8:V, reg c114:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r331:V, reg i485:I, reg r332:V, reg nmi10:*, reg nmi11:V, reg nzchar:cls, reg r333:V, reg c115:L, reg nmi12:*, reg nmi13:V, reg i488:I, reg nmi14:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r334:V, reg nrow14:*, reg nrow15:V, reg as_integer:cls, reg r335:V, reg l54:*, reg c116:L, reg i492:I, reg nmi16:V, reg l56:*, reg dr68:V, reg dc34:L, reg dx75:V, reg i494:I, reg nmi18:V, reg dx76:V, reg i495:*, reg i496:V, reg ____11:cls, reg r336:V, reg i497:I, reg nmi19:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r337:V, reg r338:V, reg clabs12:*, reg clabs13:V, reg length12:cls, reg r339:V, reg nvar8:*, reg nvar9:V, reg r340:V, reg c117:L, reg sym54:cls, reg base54:cls, reg guard54:L, reg r341:V, reg r342:V, reg lengths2:cls, reg allargs26:*, reg allargs27:V, reg p28:p(V +), reg r344:V, reg max:cls, reg r345:V, reg nvar10:*, reg nvar11:V, reg r347:V, reg c118:L, reg list2DF1:cls, reg r348:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r351:V, reg r352:V, reg nvar12:*, reg nvar13:V, reg r353:I, reg sym56:cls, reg base56:cls, reg guard56:L, reg r354:V, reg r355:V, reg value8:*, reg value9:V, reg c119:V, reg c120:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r356:V, reg r357:V, reg list2:cls, reg r358:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r359:V, reg r360:V, reg logical1:cls, reg nrow16:*, reg nrow17:V, reg p29:p(V +), reg r362:V, reg list3:cls, reg r363:V, reg l57:*, reg c121:L, reg r365:V, reg l59:*, reg dr70:V, reg dc35:L, reg dx77:V, reg dx78:V, reg pseq:*, reg pseq1:V, reg ___6:cls, reg r368:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r369:V, reg r370:V, reg nvar14:*, reg nvar15:V, reg vector2:cls, reg r371:V, reg logical2:cls, reg nvar16:*, reg nvar17:V, reg p30:p(V +), reg r373:V, reg smartX6:*, reg smartX7:V, reg c122:L, reg ordCol7:*, reg ordCol8:V, reg ordCol9:V, reg clabs14:*, reg clabs15:V, reg l60:*, reg names__:cls, reg r374:V, reg pseq2:*, reg pseq3:V, reg s3:V, reg l61:I, reg i498:I, reg i499:I, reg i500:I, reg c123:L, reg x3:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r375:V, reg i505:I, reg r376:V, reg all_levs8:*, reg all_levs9:V, reg c124:L, reg i507:I, reg all_levs11:V, reg dr72:V, reg dc36:L, reg dx79:V, reg i509:I, reg dx80:V, reg j21:*, reg j22:V, reg __17:cls, reg r377:V, reg length13:cls, reg r378:V, reg c125:L, reg factor:cls, reg as_vector:cls, reg value10:*, reg value11:V, reg c126:L, reg value13:V, reg dr74:V, reg dc37:L, reg dx81:V, reg dx82:V, reg j23:*, reg j24:V, reg __18:cls, reg r379:V, reg p31:p(V +), reg r381:V, reg p32:p(V +), reg lij4:*, reg lij5:V, reg p33:p(V +), reg smartX8:*, reg smartX9:V, reg c127:L, reg NA_lev8:*, reg NA_lev9:V, reg c128:L, reg NA_lev11:V, reg dr76:V, reg dc38:L, reg dx83:V, reg dx84:V, reg j25:*, reg j26:V, reg __19:cls, reg r384:V, reg r385:V, reg c129:L, reg factor_exclude3:*, reg factor_exclude4:V, reg p34:p(V +), reg ordCol11:*, reg ordCol12:V, reg c130:L, reg ordCol14:V, reg dr78:V, reg dc39:L, reg dx85:V, reg dx86:V, reg j27:*, reg j28:V, reg __20:cls, reg r387:V, reg p35:p(V +), reg r389:V, reg l62:*, reg c131:L, reg i513:I, reg r391:V, reg l64:*, reg dr80:V, reg dc40:L, reg dx87:V, reg i515:I, reg r393:V, reg dx88:V, reg j29:*, reg j30:V, reg ____12:cls, reg r394:V, reg i516:I, reg sym61:cls, reg base61:cls, reg guard61:L, reg r396:V, reg r397:V, reg has_dim:*, reg has_dim1:V, reg any1:cls, reg r398:V, reg c132:L, reg pseq4:*, reg pseq5:V, reg c133:L, reg pseq7:V, reg dr82:V, reg dc41:L, reg dx89:V, reg dx90:V, reg has_dim2:*, reg has_dim3:V, reg __21:cls, reg r399:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r400:V, reg r401:V, reg vapply1:cls, reg jdim:*, reg jdim1:V, reg p36:p(V +), reg r403:cls, reg p37:p(V +), reg r405:V, reg all1:cls, reg r406:V, reg r407:V, reg c134:L, reg sym63:cls, reg base63:cls, reg guard63:L, reg r408:V, reg r409:V, reg unlist:cls, reg rows2:*, reg rows3:V, reg p38:p(V +), reg r411:V, reg max1:cls, reg r412:V, reg jdim2:*, reg jdim3:V, reg c135:L, reg jdim5:V, reg dr84:V, reg dc42:L, reg dx91:V, reg dx92:V, reg df:*, reg df1:V, reg r413:V, reg __22:cls, reg r414:V, reg s4:V, reg l65:I, reg i517:I, reg i518:I, reg i519:I, reg c136:L, reg x4:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r415:V, reg i524:I, reg r416:V, reg value14:*, reg value15:V, reg c137:L, reg i526:I, reg value17:V, reg dr86:V, reg dc43:L, reg dx93:V, reg i528:I, reg dx94:V, reg j31:*, reg j32:V, reg __23:cls, reg r417:V, reg dimnames:cls, reg r418:V, reg dn:*, reg dn1:V, reg c138:L, reg i530:I, reg dn3:V, reg dr88:V, reg dc44:L, reg dx95:V, reg i532:I, reg dx96:V, reg __24:cls, reg r419:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r420:V, reg i535:I, reg r421:V, reg rn:*, reg rn1:V, reg length14:cls, reg r422:V, reg r423:V, reg c139:L, reg rmax:*, reg rmax1:V, reg l66:*, reg length__:cls, reg r424:V, reg i538:I, reg sym66:cls, reg base66:cls, reg guard66:L, reg r425:V, reg i541:I, reg r426:V, reg vj:*, reg vj1:V, reg dim1:cls, reg r427:V, reg c140:L, reg i543:I, reg r429:V, reg dr90:V, reg dc45:L, reg dx97:V, reg i545:I, reg dx98:V, reg __25:cls, reg r430:V, reg rmax3:*, reg rmax4:V, reg pj:*, reg pj1:V, reg r431:V, reg l67:*, reg length__1:cls, reg r432:V, reg array:cls, reg vj2:*, reg vj3:V, reg p39:p(V +), reg sym67:cls, reg base67:cls, reg guard67:L, reg r434:V, reg r435:V, reg rmax5:*, reg rmax6:V, reg pj2:*, reg pj3:V, reg c141:cls, reg r436:V, reg p40:p(V +), reg sym68:cls, reg base68:cls, reg guard68:L, reg r438:V, reg r439:V, reg rn2:*, reg rn3:V, reg dn4:*, reg dn5:V, reg c142:L, reg dn7:V, reg dr92:V, reg dc46:L, reg dx99:V, reg dx100:V, reg __26:cls, reg r440:V, reg list4:cls, reg r441:V, reg p41:p(V +), reg r443:V, reg l68:*, reg c143:L, reg i547:I, reg r445:V, reg l70:*, reg dr94:V, reg dc47:L, reg dx101:V, reg i549:I, reg dx102:V, reg j33:*, reg j34:V, reg ____13:cls, reg r448:V, reg i550:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r449:V, reg r450:V, reg n12:*, reg n13:V, reg r451:I, reg s5:V, reg l71:I, reg i552:I, reg i553:I, reg i554:I, reg c144:L, reg x5:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r452:V, reg i559:I, reg r453:V, reg allargs28:*, reg allargs29:V, reg c145:L, reg i561:I, reg allargs31:V, reg dr96:V, reg dc48:L, reg dx103:V, reg i563:I, reg dx104:V, reg i564:*, reg i565:V, reg __27:cls, reg r454:V, reg unclass1:cls, reg r455:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r456:V, reg i568:I, reg r457:V, reg xi32:*, reg xi33:V, reg is_list1:cls, reg r458:V, reg r459:V, reg c146:L, reg sym72:cls, reg base72:cls, reg guard72:L, reg r460:V, reg i573:I, reg r461:V, reg xi34:*, reg xi35:V, reg length15:cls, reg r462:V, reg nvar18:*, reg nvar19:V, reg r463:V, reg c147:L, reg ni26:*, reg ni27:V, reg c148:L, reg i577:I, reg c150:V, reg nvar20:*, reg nvar21:V, reg ni28:*, reg ni29:V, reg __28:cls, reg r464:V, reg r465:V, reg c151:L, reg c152:V, reg c154:L, reg warning:cls, reg gettextf:cls, reg nvar22:*, reg nvar23:V, reg p42:p(V +), reg ni30:*, reg ni31:V, reg p43:p(V +), reg i581:*, reg i582:V, reg p44:p(V +), reg r469:V, reg p45:p(V +), reg r471:V, reg i583:I, reg sym73:cls, reg base73:cls, reg guard73:L, reg r473:V, reg i586:I, reg r474:V, reg xi36:*, reg xi37:V, reg nvar24:*, reg nvar25:V, reg rep_len:cls, reg r475:V, reg i587:I, reg r476:V, reg i588:I, reg rows4:*, reg rows5:V, reg c155:L, reg i590:I, reg rows7:V, reg dr98:V, reg dc49:L, reg dx105:V, reg i592:I, reg dx106:V, reg i593:*, reg i594:V, reg __29:cls, reg r478:V, reg perm:*, reg perm1:V, reg c156:L, reg i596:I, reg perm3:V, reg dr100:V, reg dc50:L, reg dx107:V, reg i598:I, reg dx108:V, reg i599:*, reg i600:V, reg __30:cls, reg r479:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r480:V, reg i603:I, reg r481:V, reg pi22:*, reg pi23:V, reg c157:V, reg c158:L, reg pseq8:*, reg pseq9:V, reg i606:I, reg pseq11:*, reg pseq12:V, reg s6:V, reg l72:I, reg i607:I, reg i608:I, reg i609:I, reg i610:I, reg c159:L, reg x6:V, reg pi24:*, reg pi25:V, reg c160:L, reg i617:I, reg i618:I, reg pi27:V, reg dr102:V, reg dc51:L, reg dx109:V, reg i621:I, reg i622:I, reg dx110:V, reg j35:*, reg j36:V, reg __31:cls, reg r482:V, reg xi38:*, reg xi39:V, reg c161:L, reg i625:I, reg i626:I, reg xi41:V, reg dr104:V, reg dc52:L, reg dx111:V, reg i629:I, reg i630:I, reg dx112:V, reg j37:*, reg j38:V, reg __32:cls, reg r483:V, reg has_dim4:*, reg has_dim5:V, reg c162:L, reg i633:I, reg i634:I, reg has_dim7:V, reg dr106:V, reg dc53:L, reg dx113:V, reg i637:I, reg i638:I, reg dx114:V, reg jj18:*, reg jj19:V, reg __33:cls, reg r484:V, reg c163:L, reg xij8:*, reg xij9:V, reg l73:*, reg c164:L, reg i645:I, reg i646:I, reg xij12:V, reg l76:*, reg xij13:V, reg l77:*, reg dr108:V, reg dc54:L, reg dx115:V, reg i649:I, reg i650:I, reg xij16:V, reg l79:*, reg xij17:V, reg dx116:V, reg jj20:*, reg jj21:V, reg __34:cls, reg r485:V, reg c165:L, reg i653:I, reg i654:I, reg xij19:V, reg l81:*, reg dx118:V, reg dr110:V, reg dc55:L, reg dx119:V, reg i657:I, reg i658:I, reg xij21:V, reg l83:*, reg dx120:V, reg ri6:*, reg ri7:V, reg ___7:cls, reg r486:V, reg c166:L, reg i661:I, reg i662:I, reg xij23:V, reg l85:*, reg dr112:V, reg dc56:L, reg dx121:V, reg i665:I, reg i666:I, reg dx122:V, reg jj22:*, reg jj23:V, reg ____14:cls, reg r487:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r488:V, reg i671:I, reg i672:I, reg r489:V, reg rownames:cls, reg xij26:*, reg xij27:V, reg p46:p(V +), reg r491:V, reg c167:V, reg r492:V, reg c168:L, reg i675:I, reg i676:I, reg c170:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r493:V, reg i681:I, reg i682:I, reg c173:L, reg r494:V, reg xij28:*, reg xij29:V, reg inherits1:cls, reg r495:V, reg c174:L, reg i685:I, reg i686:I, reg c177:L, reg c178:V, reg _row_names_info:cls, reg xij30:*, reg xij31:V, reg p47:p(V +), reg r497:V, reg r498:V, reg c179:L, reg c180:V, reg r499:V, reg c183:L, reg c184:V, reg c186:L, reg r500:*, reg r501:V, reg l86:*, reg c187:L, reg i697:I, reg i698:I, reg r504:V, reg l89:*, reg r505:V, reg l90:*, reg dr114:V, reg dc57:L, reg dx123:V, reg i701:I, reg i702:I, reg r508:V, reg l92:*, reg r509:V, reg dx124:V, reg jj24:*, reg jj25:V, reg __35:cls, reg r510:V, reg rownames1:cls, reg r511:V, reg c188:L, reg i705:I, reg i706:I, reg r514:V, reg l94:*, reg dx126:V, reg r515:V, reg dr116:V, reg dc58:L, reg dx128:V, reg i709:I, reg i710:I, reg r517:V, reg l96:*, reg dx129:V, reg dx130:V, reg ri8:*, reg ri9:V, reg ___8:cls, reg r518:V, reg rownames__:cls, reg r519:V, reg c189:L, reg i713:I, reg i714:I, reg r521:V, reg l98:*, reg dr118:V, reg dc59:L, reg dx131:V, reg i717:I, reg i718:I, reg r523:V, reg dx132:V, reg jj26:*, reg jj27:V, reg ____15:cls, reg r524:V, reg i719:I, reg i720:I, reg r525:V, reg i721:I, reg i722:I, reg is_factor1:cls, reg xij32:*, reg xij33:V, reg p48:p(V +), reg r528:V, reg c190:L, reg as_vector1:cls, reg xij34:*, reg xij35:V, reg p49:p(V +), reg r530:V, reg i727:I, reg i728:I, reg r531:V, reg xij36:*, reg xij37:V, reg l99:*, reg c191:L, reg i731:I, reg i732:I, reg r534:V, reg l102:*, reg r535:V, reg l103:*, reg dr120:V, reg dc60:L, reg dx133:V, reg i735:I, reg i736:I, reg r538:V, reg l105:*, reg r539:V, reg dx134:V, reg jj28:*, reg jj29:V, reg __36:cls, reg r540:V, reg c192:L, reg i739:I, reg i740:I, reg r542:V, reg l107:*, reg dx136:V, reg dr122:V, reg dc61:L, reg dx137:V, reg i743:I, reg i744:I, reg r544:V, reg l109:*, reg dx138:V, reg ri10:*, reg ri11:V, reg ___9:cls, reg r545:V, reg c193:L, reg i747:I, reg i748:I, reg r547:V, reg l111:*, reg dr124:V, reg dc62:L, reg dx139:V, reg i751:I, reg i752:I, reg dx140:V, reg jj30:*, reg jj31:V, reg ____16:cls, reg r550:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r551:V, reg i757:I, reg i758:I, reg r552:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r553:V, reg i763:I, reg i764:I, reg r554:V, reg xij38:*, reg xij39:V, reg names4:cls, reg r555:V, reg c194:V, reg r556:V, reg c195:L, reg nm:*, reg nm1:V, reg l112:*, reg c196:L, reg i771:I, reg i772:I, reg nm4:V, reg l115:*, reg nm5:V, reg l116:*, reg dr126:V, reg dc63:L, reg dx141:V, reg i775:I, reg i776:I, reg nm8:V, reg l118:*, reg nm9:V, reg dx142:V, reg jj32:*, reg jj33:V, reg __37:cls, reg r557:V, reg names5:cls, reg r558:V, reg c197:L, reg i779:I, reg i780:I, reg nm11:V, reg l120:*, reg dx144:V, reg r560:V, reg dr128:V, reg dc64:L, reg dx146:V, reg i783:I, reg i784:I, reg nm13:V, reg l122:*, reg dx147:V, reg dx148:V, reg ri12:*, reg ri13:V, reg ___10:cls, reg r561:V, reg names__1:cls, reg r562:V, reg c198:L, reg i787:I, reg i788:I, reg nm15:V, reg l124:*, reg dr130:V, reg dc65:L, reg dx149:V, reg i791:I, reg i792:I, reg nm17:V, reg dx150:V, reg jj34:*, reg jj35:V, reg ____17:cls, reg r563:V, reg make_row_names9:*, reg make_row_names10:V, reg c199:L, reg c201:V, reg autoRnms:*, reg autoRnms1:V, reg r564:V, reg c202:L, reg c203:V, reg c205:L, reg unlist1:cls, reg rlabs:*, reg rlabs1:V, reg p50:p(V +), reg r566:V, reg anyDuplicated:cls, reg rlabs2:*, reg rlabs3:V, reg p51:p(V +), reg r568:V, reg c206:L, reg make_unique:cls, reg sym79:cls, reg base79:cls, reg guard79:L, reg r569:V, reg r570:V, reg rlabs4:*, reg rlabs5:V, reg as_character:cls, reg r571:V, reg p52:p(V +), reg r573:V, reg r574:V, reg rlabs6:*, reg rlabs7:V, reg r575:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r576:V, reg r577:V, reg cl2:*, reg cl3:V, reg c207:V, reg c208:L, reg as_data_frame1:cls, reg value18:*, reg value19:V, reg p53:p(V +), reg rlabs8:*, reg rlabs9:V, reg p54:p(V +), reg stringsAsFactors3:*, reg stringsAsFactors4:V, reg p55:p(V +), reg r581:V, reg structure:cls, reg value20:*, reg value21:V, reg p56:p(V +), reg cl4:*, reg cl5:V, reg p57:p(V +), reg ____18:cls, reg rlabs10:*, reg rlabs11:V, reg p58:p(V +), reg _set_row_names:cls, reg nrow18:*, reg nrow19:V, reg p59:p(V +), reg r586:V, reg p60:p(V +), reg r588:V, reg p61:p(V +), reg r590:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    make_row_names_isMissing = missing.0(make_row_names);
    if make_row_names_isMissing then L1(TRUE) else L1(make_row_names);
  L1(make_row_names_orDefault):
    st `make.row.names` = make_row_names_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L2(FALSE) else L2(stringsAsFactors);
  L2(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    factor_exclude_isMissing = missing.0(factor_exclude);
    if factor_exclude_isMissing then L3(TRUE) else L3(factor_exclude);
  L3(factor_exclude_orDefault):
    st `factor.exclude` = factor_exclude_orDefault;
    r = clos inner1810711213;
    st `match.names` = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L258() else L259();
  L4(r2):
    st allargs = r2;
    allargs = ld allargs;
    check L262() else D2();
  L258():
    list = ldf list;
    check L260() else D0();
  L259():
    r1 = dyn base(<sym ...>);
    goto L4(r1);
  D0():
    deopt 5 [];
  D2():
    deopt 9 [allargs];
  L260():
    ddd1 = ld `...`;
    r3 = dyn list[`...`](ddd1);
    check L261() else D1();
  L262():
    allargs1 = force? allargs;
    checkMissing(allargs1);
    c = `is.object`(allargs1);
    if c then L263() else L264(allargs1);
  D1():
    deopt 7 [r3];
  L5(dx1):
    st allargs = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L268() else L269();
  L261():
    goto L4(r3);
  L263():
    dr = tryDispatchBuiltin.1("[", allargs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L265() else L264(dr);
  L264(allargs3):
    lengths = ldf lengths;
    check L266() else D3();
  D3():
    deopt 12 [allargs3];
  L6(r9):
    c1 = `as.logical`(r9);
    if c1 then L272() else L7();
  L265():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L266():
    p = prom<V +>{
      allargs4 = ld allargs;
      allargs5 = force? allargs4;
      checkMissing(allargs5);
      return allargs5;
    };
    r5 = dyn lengths(p);
    check L267() else D4();
  L268():
    allargs6 = ld allargs;
    check L270() else D5();
  L269():
    r8 = dyn base1(<sym allargs>);
    goto L6(r8);
  D4():
    deopt 14 [allargs3, r5];
  D5():
    deopt 21 [allargs6];
  L7():
    goto L16();
  L16():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L298() else L299();
  L267():
    r6 = `>`(r5, 0);
    __ = ldf `[` in base;
    r7 = dyn __(allargs3, r6);
    goto L5(r7);
  L270():
    allargs7 = force? allargs6;
    checkMissing(allargs7);
    length = ldf length in base;
    r10 = dyn length(allargs7);
    check L271() else D6();
  L272():
    vapply = ldf vapply;
    check L273() else D7();
  D6():
    deopt 24 [r10];
  D7():
    deopt 26 [];
  L17(r28):
    st n = r28;
    n4 = ld n;
    check L302() else D18();
  L271():
    goto L6(r10);
  L273():
    p1 = prom<V +>{
      allargs8 = ld allargs;
      allargs9 = force? allargs8;
      checkMissing(allargs9);
      return allargs9;
    };
    p2 = prom<V +>{
      r12 = clos inner2501545716;
      return r12;
    };
    r14 = dyn vapply(p1, p2, 1);
    check L274() else D8();
  L298():
    allargs18 = ld allargs;
    check L300() else D16();
  L299():
    r27 = dyn base4(<sym allargs>);
    goto L17(r27);
  D8():
    deopt 30 [r14];
  D16():
    deopt 68 [allargs18];
  D18():
    deopt 73 [n4];
  L274():
    st nr = r14;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L275() else L276();
  L300():
    allargs19 = force? allargs18;
    checkMissing(allargs19);
    length1 = ldf length in base;
    r29 = dyn length1(allargs19);
    check L301() else D17();
  L302():
    n5 = force? n4;
    checkMissing(n5);
    r30 = `==`(n5, 0);
    c6 = `as.logical`(r30);
    if c6 then L303() else L18();
  D17():
    deopt 71 [r29];
  L8(r16):
    c2 = `as.logical`(r16);
    if c2 then L279() else L9();
  L18():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L308() else L309();
  L275():
    nr = ld nr;
    check L277() else D9();
  L276():
    r15 = dyn base2(<lang `<-`(n0, `==`(nr, 0))>);
    goto L8(r15);
  L301():
    goto L17(r29);
  L303():
    list2DF = ldf list2DF;
    check L304() else D19();
  D9():
    deopt 34 [nr];
  D19():
    deopt 78 [];
  L9():
    goto L15(NULL);
  L15(dx6):
    goto L16();
  L20(r35):
    st nms = r35;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L312() else L313();
  L277():
    nr1 = force? nr;
    checkMissing(nr1);
    r17 = `==`(nr1, 0);
    st n0 = r17;
    any = ldf any in base;
    r18 = dyn any(r17);
    check L278() else D10();
  L279():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L280() else L281();
  L304():
    r31 = dyn list2DF();
    check L305() else D20();
  L308():
    allargs20 = ld allargs;
    check L310() else D21();
  L309():
    r34 = dyn base5(<sym allargs>);
    goto L20(r34);
  D10():
    deopt 40 [r18];
  D20():
    deopt 79 [r31];
  D21():
    deopt 85 [allargs20];
  L10(r20):
    c3 = `as.logical`(r20);
    if c3 then L284() else L11();
  L21(r38):
    c8 = `as.logical`(r38);
    if c8 then L315() else L22();
  L278():
    goto L8(r18);
  L280():
    n0 = ld n0;
    check L282() else D11();
  L281():
    r19 = dyn base3(<sym n0>);
    goto L10(r19);
  L305():
    popenv;
    return r31;
  L310():
    allargs21 = force? allargs20;
    checkMissing(allargs21);
    names = ldf names in base;
    r36 = dyn names(allargs21);
    check L311() else D22();
  L312():
    nms = ld nms;
    check L314() else D23();
  L313():
    r37 = dyn base6(<sym nms>);
    goto L21(r37);
  D11():
    deopt 43 [n0];
  D22():
    deopt 88 [r36];
  D23():
    deopt 91 [nms];
  L11():
    allargs14 = ld allargs;
    check L291() else D14();
  L22():
    goto L23();
  L23():
    st cl = NULL;
    sym7 = ldf vector;
    base7 = ldf vector in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L319() else L320();
  L282():
    n1 = force? n0;
    checkMissing(n1);
    all = ldf all in base;
    r21 = dyn all(n1);
    check L283() else D12();
  L284():
    allargs10 = ld allargs;
    check L285() else D13();
  L311():
    goto L20(r36);
  L314():
    nms1 = force? nms;
    checkMissing(nms1);
    c7 = `==`(nms1, NULL);
    goto L21(c7);
  L315():
    character = ldf character;
    check L316() else D24();
  D12():
    deopt 46 [r21];
  D13():
    deopt 47 [allargs10];
  D14():
    deopt 55 [allargs14];
  D24():
    deopt 95 [];
  L24(r43):
    st rows = r43;
    st perm = r43;
    make_row_names1 = ld `make.row.names`;
    check L323() else D28();
  L283():
    goto L10(r21);
  L285():
    allargs11 = force? allargs10;
    checkMissing(allargs11);
    c4 = `is.object`(allargs11);
    if c4 then L286() else L287(allargs11);
  L291():
    allargs15 = force? allargs14;
    checkMissing(allargs15);
    c5 = `is.object`(allargs15);
    if c5 then L292() else L293(allargs15);
  L316():
    p3 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    r40 = dyn character(p3);
    check L317() else D25();
  L319():
    n8 = ld n;
    check L321() else D26();
  L320():
    r42 = dyn base7("list", <sym n>);
    goto L24(r42);
  D25():
    deopt 97 [r40];
  D26():
    deopt 107 [n8];
  D28():
    deopt 113 [make_row_names1];
  L12(dx3):
    popenv;
    return dx3;
  L14(dx5):
    st allargs = dx5;
    goto L15(dx5);
  L286():
    dr2 = tryDispatchBuiltin.1("[[", allargs11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L288() else L287(dr2);
  L287(allargs13):
    __1 = ldf `[[` in base;
    r22 = dyn __1(allargs13, 1);
    goto L12(r22);
  L292():
    dr4 = tryDispatchBuiltin.1("[", allargs15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L294() else L293(dr4);
  L293(allargs17):
    n2 = ld n0;
    check L295() else D15();
  L317():
    st nms = r40;
    goto L23();
  L321():
    n9 = force? n8;
    checkMissing(n9);
    vector = ldf vector in base;
    r44 = dyn vector("list", n9);
    check L322() else D27();
  L323():
    make_row_names2 = force? make_row_names1;
    checkMissing(make_row_names2);
    c9 = `as.logical`(make_row_names2);
    if c9 then L324() else L25();
  D15():
    deopt 57 [allargs17, n2];
  D27():
    deopt 110 [r44];
  L25():
    goto L26();
  L26():
    isTRUE = ldf isTRUE;
    check L327() else D30();
  L288():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L294():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L295():
    n3 = force? n2;
    checkMissing(n3);
    r25 = `!`(n3);
    __2 = ldf `[` in base;
    r26 = dyn __2(allargs17, r25);
    goto L14(r26);
  L322():
    goto L24(r44);
  L324():
    rows = ld rows;
    check L325() else D29();
  D29():
    deopt 115 [rows];
  D30():
    deopt 127 [];
  L325():
    rows1 = force? rows;
    checkMissing(rows1);
    st rlabs = rows1;
    st autoRnms = TRUE;
    r45 = clos inner1670334592;
    st `Make.row.names` = r45;
    goto L26();
  L327():
    p4 = prom<V +>{
      factor_exclude1 = ld `factor.exclude`;
      factor_exclude2 = force? factor_exclude1;
      checkMissing(factor_exclude2);
      return factor_exclude2;
    };
    r48 = dyn isTRUE(p4);
    check L328() else D31();
  D31():
    deopt 129 [r48];
  L328():
    st smartX = r48;
    st nrow = 0;
    st clabs = NULL;
    st value = NULL;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L329() else L330();
  L27(r50):
    st `all.levs` = r50;
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L332() else L333();
  L329():
    list1 = ldf list in base;
    r51 = dyn list1();
    check L331() else D32();
  L330():
    r49 = dyn base8();
    goto L27(r49);
  D32():
    deopt 141 [r51];
  L28(r53):
    s = toForSeq(r53);
    l = length(s);
    i = 0;
    goto L29(i);
  L331():
    goto L27(r51);
  L332():
    n10 = ld n;
    check L334() else D33();
  L333():
    r52 = dyn base9(<sym n>);
    goto L28(r52);
  D33():
    deopt 144 [n10];
  L29(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L335() else L157();
  L334():
    n11 = force? n10;
    checkMissing(n11);
    r54 = seq_len(n11);
    goto L28(r54);
  L157():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    allargs22 = ld allargs;
    check L336() else D34();
  L335():
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L726() else L727();
  D34():
    deopt 147 [i2, allargs22];
  L158(r338):
    st nvar = r338;
    nvar8 = ld nvar;
    check L730() else D192();
  L336():
    allargs23 = force? allargs22;
    checkMissing(allargs23);
    c11 = `is.object`(allargs23);
    if c11 then L337() else L338(i2, allargs23);
  L726():
    clabs12 = ld clabs;
    check L728() else D190();
  L727():
    r337 = dyn base53(<sym clabs>);
    goto L158(r337);
  D190():
    deopt 729 [clabs12];
  D192():
    deopt 734 [nvar8];
  L30(i8, dx9):
    st xi = dx9;
    nms2 = ld nms;
    check L341() else D36();
  L337():
    dr6 = tryDispatchBuiltin.1("[[", allargs23);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L339() else L338(i2, dr6);
  L338(i6, allargs25):
    i9 = ld i;
    check L340() else D35();
  L728():
    clabs13 = force? clabs12;
    checkMissing(clabs13);
    length12 = ldf length in base;
    r339 = dyn length12(clabs13);
    check L729() else D191();
  L730():
    nvar9 = force? nvar8;
    checkMissing(nvar9);
    r340 = `==`(nvar9, 0);
    c117 = `as.logical`(r340);
    if c117 then L731() else L159();
  D35():
    deopt 149 [i6, allargs25, i9];
  D36():
    deopt 153 [i8, nms2];
  D191():
    deopt 732 [r339];
  L159():
    goto L161();
  L161():
    nvar10 = ld nvar;
    check L738() else D196();
  L339():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L30(i2, dx8);
  L340():
    i10 = force? i9;
    __3 = ldf `[[` in base;
    r55 = dyn __3(allargs25, i10);
    goto L30(i6, r55);
  L341():
    nms3 = force? nms2;
    checkMissing(nms3);
    c12 = `is.object`(nms3);
    if c12 then L342() else L343(i8, nms3);
  L729():
    goto L158(r339);
  L731():
    sym54 = ldf max;
    base54 = ldf max in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L732() else L733();
  D196():
    deopt 749 [nvar10];
  L31(i14, dx11):
    st nmi = dx11;
    sym10 = ldf `is.matrix`;
    base10 = ldf `is.matrix` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L346() else L347();
  L160(r342):
    st nvar = r342;
    goto L161();
  L342():
    dr8 = tryDispatchBuiltin.1("[", nms3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L344() else L343(i8, dr8);
  L343(i12, nms5):
    i15 = ld i;
    check L345() else D37();
  L732():
    lengths2 = ldf lengths;
    check L734() else D193();
  L733():
    r341 = dyn base54(<lang lengths(allargs)>);
    goto L160(r341);
  L738():
    nvar11 = force? nvar10;
    checkMissing(nvar11);
    r347 = `==`(nvar11, 0);
    c118 = `as.logical`(r347);
    if c118 then L739() else L162();
  D37():
    deopt 155 [i12, nms5, i15];
  D193():
    deopt 741 [];
  L32(i19, r58):
    c13 = `as.logical`(r58);
    if c13 then L350() else L33();
  L162():
    sym55 = ldf seq_len;
    base55 = ldf seq_len in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L744() else L745();
  L344():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L31(i8, dx10);
  L345():
    i16 = force? i15;
    __4 = ldf `[` in base;
    r56 = dyn __4(nms5, i16);
    goto L31(i12, r56);
  L346():
    xi = ld xi;
    check L348() else D38();
  L347():
    r57 = dyn base10(<sym xi>);
    goto L32(i14, r57);
  L734():
    p28 = prom<V +>{
      allargs26 = ld allargs;
      allargs27 = force? allargs26;
      checkMissing(allargs27);
      return allargs27;
    };
    r344 = dyn lengths2(p28);
    check L735() else D194();
  L739():
    list2DF1 = ldf list2DF;
    check L740() else D197();
  D38():
    deopt 161 [i14, xi];
  D194():
    deopt 743 [r344];
  D197():
    deopt 754 [];
  L33():
    goto L35(i19);
  L35(i28):
    sym11 = ldf inherits;
    base11 = ldf inherits in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L358() else L359();
  L164(r352):
    st pseq = r352;
    sym56 = ldf `is.null`;
    base56 = ldf `is.null` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L747() else L748();
  L348():
    xi1 = force? xi;
    checkMissing(xi1);
    is_matrix = ldf `is.matrix` in base;
    r59 = dyn is_matrix(xi1);
    check L349() else D39();
  L350():
    as_data_frame = ldf `as.data.frame`;
    check L351() else D40();
  L735():
    max = ldf max in base;
    r345 = dyn max(r344);
    check L736() else D195();
  L740():
    r348 = dyn list2DF1();
    check L741() else D198();
  L744():
    nvar12 = ld nvar;
    check L746() else D199();
  L745():
    r351 = dyn base55(<sym nvar>);
    goto L164(r351);
  D39():
    deopt 164 [i14, r59];
  D40():
    deopt 166 [i19];
  D195():
    deopt 745 [r345];
  D198():
    deopt 755 [r348];
  D199():
    deopt 760 [nvar12];
  L36(i31, r70):
    c15 = `as.logical`(r70);
    if c15 then L362() else L37();
  L165(r355):
    c120 = `as.logical`(r355);
    if c120 then L750() else L166();
  L349():
    goto L32(i14, r59);
  L351():
    p5 = prom<V +>{
      xi2 = ld xi;
      xi3 = force? xi2;
      checkMissing(xi3);
      return xi3;
    };
    p6 = prom<V +>{
      stringsAsFactors1 = ld stringsAsFactors;
      stringsAsFactors2 = force? stringsAsFactors1;
      checkMissing(stringsAsFactors2);
      return stringsAsFactors2;
    };
    r62 = dyn as_data_frame[, stringsAsFactors](p5, p6);
    check L352() else D41();
  L358():
    xi4 = ld xi;
    check L360() else D43();
  L359():
    r69 = dyn base11(<sym xi>, "data.frame");
    goto L36(i28, r69);
  L736():
    goto L160(r345);
  L741():
    popenv;
    return r348;
  L746():
    nvar13 = force? nvar12;
    checkMissing(nvar13);
    r353 = seq_len(nvar13);
    goto L164(r353);
  L747():
    value8 = ld value;
    check L749() else D200();
  L748():
    r354 = dyn base56(<sym value>);
    goto L165(r354);
  D41():
    deopt 170 [i19, r62];
  D43():
    deopt 181 [i28, xi4];
  D200():
    deopt 765 [value8];
  L37():
    sym40 = ldf `is.list`;
    base40 = ldf `is.list` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L608() else L609();
  L119(i389):
    goto L29(i389);
  L166():
    goto L173();
  L173():
    clabs14 = ld clabs;
    check L774() else D212();
  L352():
    st xi = r62;
    l1 = ld allargs;
    c14 = `is.object`(l1);
    if c14 then L353() else L354(i19, r62, l1);
  L360():
    xi5 = force? xi4;
    checkMissing(xi5);
    inherits = ldf inherits in base;
    r71 = dyn inherits(xi5, "data.frame", FALSE);
    check L361() else D44();
  L362():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L363() else L364();
  L749():
    value9 = force? value8;
    checkMissing(value9);
    c119 = `==`(value9, NULL);
    goto L165(c119);
  L750():
    sym57 = ldf list;
    base57 = ldf list in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L751() else L752();
  D44():
    deopt 186 [i28, r71];
  D212():
    deopt 810 [clabs14];
  L34(i25, r66, dx13):
    st allargs = dx13;
    goto L35(i25);
  L38(i36, r73):
    c17 = `as.logical`(r73);
    if c17 then L366() else L39();
  L120(i393, r258):
    c97 = `as.logical`(r258);
    if c97 then L612() else L121();
  L167(r357):
    st value = r357;
    sym58 = ldf list;
    base58 = ldf list in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L754() else L755();
  L353():
    dr10 = tryDispatchBuiltin.0("[[<-", l1, r62);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L355() else L354(i19, r62, dr10);
  L354(i23, r64, l3):
    i26 = ld i;
    check L356() else D42();
  L361():
    goto L36(i28, r71);
  L363():
    cl = ld cl;
    check L365() else D45();
  L364():
    r72 = dyn base12(<sym cl>);
    goto L38(i31, r72);
  L608():
    xi22 = ld xi;
    check L610() else D142();
  L609():
    r257 = dyn base40(<sym xi>);
    goto L120(i31, r257);
  L751():
    list2 = ldf list in base;
    r358 = dyn list2();
    check L753() else D201();
  L752():
    r356 = dyn base57();
    goto L167(r356);
  L774():
    clabs15 = force? clabs14;
    checkMissing(clabs15);
    l60 = ld value;
    names__ = ldf `names<-`;
    check L775() else D213();
  D42():
    deopt 173 [i23, r64, l3, r62, i26];
  D45():
    deopt 188 [i31, cl];
  D142():
    deopt 547 [i31, xi22];
  D201():
    deopt 771 [r358];
  D213():
    deopt 813 [clabs15, l60, clabs15];
  L39():
    goto L41(i36);
  L41(i42):
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L372() else L373();
  L121():
    sym50 = ldf length;
    base50 = ldf length in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L697() else L698();
  L168(r360):
    l57 = ld value;
    c121 = `is.object`(l57);
    if c121 then L759() else L760(r360, l57);
  L355():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L34(i19, r62, dx12);
  L356():
    i27 = force? i26;
    ____ = ldf `[[<-` in base;
    r67 = dyn ____(l3, r62, i27);
    goto L34(i23, r64, r67);
  L365():
    cl1 = force? cl;
    checkMissing(cl1);
    c16 = `==`(cl1, NULL);
    goto L38(i31, c16);
  L366():
    sym13 = ldf oldClass;
    base13 = ldf oldClass in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L367() else L368();
  L610():
    xi23 = force? xi22;
    checkMissing(xi23);
    is_list = ldf `is.list` in base;
    r259 = dyn is_list(xi23);
    check L611() else D143();
  L612():
    sym41 = ldf range;
    base41 = ldf range in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L613() else L614();
  L753():
    goto L167(r358);
  L754():
    logical1 = ldf logical;
    check L756() else D202();
  L755():
    r359 = dyn base58(<lang logical(nrow)>);
    goto L168(r359);
  L775():
    r374 = dyn names__(l60, NULL, clabs15);
    check L776() else D214();
  D143():
    deopt 550 [i31, r259];
  D202():
    deopt 776 [];
  D214():
    deopt 815 [clabs15, r374];
  L40(i41, r75):
    st cl = r75;
    goto L41(i41);
  L42(i45, r79):
    st ri = r79;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L376() else L377();
  L122(i398, r261):
    st ni = r261;
    ni6 = ld ni;
    check L618() else D147();
  L148(i472, r323):
    c112 = `as.logical`(r323);
    if c112 then L701() else L149();
  L169(dx78):
    st value = dx78;
    sym59 = ldf vector;
    base59 = ldf vector in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L763() else L764();
  L367():
    xi6 = ld xi;
    check L369() else D46();
  L368():
    r74 = dyn base13(<sym xi>);
    goto L40(i36, r74);
  L372():
    xi8 = ld xi;
    check L374() else D48();
  L373():
    r78 = dyn base14(<sym xi>, "row.names");
    goto L42(i42, r78);
  L611():
    goto L120(i31, r259);
  L613():
    lengths1 = ldf lengths;
    check L615() else D144();
  L614():
    r260 = dyn base41(<lang lengths(xi)>);
    goto L122(i393, r260);
  L697():
    xi30 = ld xi;
    check L699() else D179();
  L698():
    r322 = dyn base50(<sym xi>);
    goto L148(i393, r322);
  L756():
    p29 = prom<V +>{
      nrow16 = ld nrow;
      nrow17 = force? nrow16;
      checkMissing(nrow17);
      return nrow17;
    };
    r362 = dyn logical1(p29);
    check L757() else D203();
  L759():
    dr70 = tryDispatchBuiltin.0("[<-", l57, r360);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L761() else L760(r360, dr70);
  L760(r365, l59):
    pseq = ld pseq;
    check L762() else D205();
  L776():
    st value = r374;
    pseq2 = ld pseq;
    check L777() else D215();
  D46():
    deopt 193 [i36, xi6];
  D48():
    deopt 202 [i42, xi8];
  D144():
    deopt 554 [i393];
  D147():
    deopt 560 [i398, ni6];
  D179():
    deopt 685 [i393, xi30];
  D203():
    deopt 778 [r362];
  D205():
    deopt 782 [r365, l59, r360, pseq];
  D215():
    deopt 817 [pseq2];
  L43(i48, r82):
    st ni = r82;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L380() else L381();
  L149():
    goto L119(i472);
  L170(r370):
    st `all.levs` = r370;
    logical2 = ldf logical;
    check L767() else D208();
  L369():
    xi7 = force? xi6;
    checkMissing(xi7);
    oldClass = ldf oldClass in base;
    r76 = dyn oldClass(xi7);
    check L370() else D47();
  L374():
    xi9 = force? xi8;
    checkMissing(xi9);
    attr = ldf attr in base;
    r80 = dyn attr(xi9, "row.names");
    check L375() else D49();
  L376():
    ri = ld ri;
    check L378() else D50();
  L377():
    r81 = dyn base15(<sym ri>);
    goto L43(i45, r81);
  L615():
    p21 = prom<V +>{
      xi24 = ld xi;
      xi25 = force? xi24;
      checkMissing(xi25);
      return xi25;
    };
    r263 = dyn lengths1(p21);
    check L616() else D145();
  L618():
    ni7 = force? ni6;
    checkMissing(ni7);
    c98 = `is.object`(ni7);
    if c98 then L619() else L620(i398, ni7);
  L699():
    xi31 = force? xi30;
    checkMissing(xi31);
    length11 = ldf length in base;
    r324 = dyn length11(xi31);
    check L700() else D180();
  L701():
    nrow12 = ld nrow;
    check L702() else D181();
  L757():
    list3 = ldf list in base;
    r363 = dyn list3(r362);
    check L758() else D204();
  L761():
    dx77 = getTryDispatchBuiltinValue(dr70);
    goto L169(dx77);
  L762():
    pseq1 = force? pseq;
    ___6 = ldf `[<-` in base;
    r368 = dyn ___6(l59, r360, pseq1);
    goto L169(r368);
  L763():
    nvar14 = ld nvar;
    check L765() else D206();
  L764():
    r369 = dyn base59("list", <sym nvar>);
    goto L170(r369);
  L777():
    pseq3 = force? pseq2;
    checkMissing(pseq3);
    s3 = toForSeq(pseq3);
    l61 = length(s3);
    i498 = 0;
    goto L174(i498);
  D47():
    deopt 196 [i36, r76];
  D49():
    deopt 206 [i42, r80];
  D50():
    deopt 210 [i45, ri];
  D145():
    deopt 556 [i393, r263];
  D180():
    deopt 688 [i393, r324];
  D181():
    deopt 689 [i472, nrow12];
  D204():
    deopt 780 [r363];
  D206():
    deopt 789 [nvar14];
  D208():
    deopt 795 [];
  L44(i51, r85):
    c19 = `as.logical`(r85);
    if c19 then L383() else L45();
  L123(i402, dx57):
    ni10 = ld ni;
    check L622() else D148();
  L174(i499):
    i500 = `+`.1(i499, 1);
    c123 = `<`.1(l61, i500);
    if c123 then L778() else L180();
  L370():
    goto L40(i36, r76);
  L375():
    goto L42(i42, r80);
  L378():
    ri1 = force? ri;
    checkMissing(ri1);
    length2 = ldf length in base;
    r83 = dyn length2(ri1);
    check L379() else D51();
  L380():
    clabs = ld clabs;
    check L382() else D52();
  L381():
    r84 = dyn base16(<sym clabs>);
    goto L44(i48, r84);
  L616():
    range = ldf range in base;
    r264 = dyn range(r263);
    check L617() else D146();
  L619():
    dr54 = tryDispatchBuiltin.1("[", ni7);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L621() else L620(i398, dr54);
  L620(i400, ni9):
    __14 = ldf `[` in base;
    r265 = dyn __14(ni9, 1);
    goto L123(i400, r265);
  L700():
    goto L148(i393, r324);
  L702():
    nrow13 = force? nrow12;
    checkMissing(nrow13);
    r325 = `+`(nrow13, 1);
    st nrow = r325;
    l51 = ld rows;
    c113 = `is.object`(l51);
    if c113 then L703() else L704(i472, r325, l51);
  L758():
    goto L168(r363);
  L765():
    nvar15 = force? nvar14;
    checkMissing(nvar15);
    vector2 = ldf vector in base;
    r371 = dyn vector2("list", nvar15);
    check L766() else D207();
  L767():
    p30 = prom<V +>{
      nvar16 = ld nvar;
      nvar17 = force? nvar16;
      checkMissing(nvar17);
      return nvar17;
    };
    r373 = dyn logical2(p30);
    check L768() else D209();
  D51():
    deopt 213 [i45, r83];
  D52():
    deopt 216 [i48, clabs];
  D146():
    deopt 558 [i393, r264];
  D148():
    deopt 564 [i402, dx57, ni10];
  D207():
    deopt 792 [r371];
  D209():
    deopt 797 [r373];
  L45():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L389() else L390();
  L47(i57):
    sym22 = ldf `seq.int`;
    base22 = ldf `seq.int` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L413() else L414();
  L150(i478, dx74):
    st rows = dx74;
    make_row_names7 = ld `make.row.names`;
    check L707() else D183();
  L180():
    x3 = `[[`(s3, i500, NULL, TRUE);
    st j = x3;
    sym60 = ldf length;
    base60 = ldf length in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L779() else L780();
  L379():
    goto L43(i45, r83);
  L382():
    clabs1 = force? clabs;
    checkMissing(clabs1);
    c18 = `==`(clabs1, NULL);
    goto L44(i48, c18);
  L383():
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L384() else L385();
  L617():
    goto L122(i393, r264);
  L621():
    dx56 = getTryDispatchBuiltinValue(dr54);
    goto L123(i398, dx56);
  L622():
    ni11 = force? ni10;
    checkMissing(ni11);
    c99 = `is.object`(ni11);
    if c99 then L623() else L624(i402, dx57, ni11);
  L703():
    dr66 = tryDispatchBuiltin.0("[[<-", l51, r325);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L705() else L704(i472, r325, dr66);
  L704(i476, r327, l53):
    i479 = ld i;
    check L706() else D182();
  L766():
    goto L170(r371);
  L768():
    st ordCol = r373;
    st facCol = r373;
    st `has.dim` = r373;
    smartX6 = ld smartX;
    check L769() else D210();
  L778():
    sym61 = ldf any;
    base61 = ldf any in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L795() else L796();
  D182():
    deopt 695 [i476, r327, l53, r325, i479];
  D183():
    deopt 699 [i478, make_row_names7];
  D210():
    deopt 801 [smartX6];
  L46(i56, r87):
    st clabs = r87;
    goto L47(i56);
  L48(i60, r91):
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L393() else L394();
  L55(i80, r113):
    l7 = ld rows;
    c24 = `is.object`(l7);
    if c24 then L418() else L419(i80, r113, l7);
  L124(i406, dx62, dx63):
    r267 = `==`(dx62, dx63);
    c100 = `as.logical`(r267);
    if c100 then L626() else L125();
  L175(i505, r376):
    c125 = `as.logical`(r376);
    if c125 then L787() else L177();
  L181(r397):
    c132 = `as.logical`(r397);
    if c132 then L799() else L182();
  L384():
    xi10 = ld xi;
    check L386() else D53();
  L385():
    r86 = dyn base17(<sym xi>);
    goto L46(i51, r86);
  L389():
    xi12 = ld xi;
    check L391() else D55();
  L390():
    r90 = dyn base18(<sym xi>);
    goto L48(i51, r90);
  L413():
    nrow = ld nrow;
    check L415() else D66();
  L414():
    r112 = dyn base22[from, `length.out`](<lang `+`(nrow, 1)>, <sym ni>);
    goto L55(i57, r112);
  L623():
    dr56 = tryDispatchBuiltin.1("[", ni11);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L625() else L624(i402, dx57, dr56);
  L624(i404, dx59, ni13):
    __15 = ldf `[` in base;
    r266 = dyn __15(ni13, 2);
    goto L124(i404, dx59, r266);
  L705():
    dx73 = getTryDispatchBuiltinValue(dr66);
    goto L150(i472, dx73);
  L706():
    i480 = force? i479;
    ____10 = ldf `[[<-` in base;
    r330 = dyn ____10(l53, r325, i480);
    goto L150(i476, r330);
  L707():
    make_row_names8 = force? make_row_names7;
    checkMissing(make_row_names8);
    c114 = `as.logical`(make_row_names8);
    if c114 then L708() else L151();
  L769():
    smartX7 = force? smartX6;
    checkMissing(smartX7);
    c122 = `as.logical`(smartX7);
    if c122 then L770() else L171();
  L779():
    all_levs8 = ld `all.levs`;
    check L781() else D216();
  L780():
    r375 = dyn base60(<lang `<-`(lij, `[[`(all.levs, j))>);
    goto L175(i500, r375);
  L795():
    has_dim = ld `has.dim`;
    check L797() else D222();
  L796():
    r396 = dyn base61(<sym has.dim>);
    goto L181(r396);
  D53():
    deopt 221 [i51, xi10];
  D55():
    deopt 228 [i51, xi12];
  D66():
    deopt 266 [i57, nrow];
  D216():
    deopt 821 [i500, all_levs8];
  D222():
    deopt 851 [has_dim];
  L49(i63, r96, r97):
    r99 = `!=`(r96, r97);
    c20 = `as.logical`(r99);
    if c20 then L397() else L50();
  L56(i84, dx17):
    st rows = dx17;
    make_row_names3 = ld `make.row.names`;
    check L422() else D70();
  L125():
    stop1 = ldf stop;
    check L632() else D150();
  L127(i413):
    sym42 = ldf seq_len;
    base42 = ldf seq_len in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L634() else L635();
  L151():
    goto L156(i478, NULL);
  L156(i497, nmi19):
    goto L119(i497);
  L171():
    goto L172(NULL);
  L172(ordCol9):
    goto L173();
  L177():
    goto L179(i505);
  L179(i516):
    goto L174(i516);
  L182():
    goto L200();
  L200():
    sym69 = ldf seq_len;
    base69 = ldf seq_len in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L862() else L863();
  L386():
    xi11 = force? xi10;
    checkMissing(xi11);
    names1 = ldf names in base;
    r88 = dyn names1(xi11);
    check L387() else D54();
  L391():
    xi13 = force? xi12;
    checkMissing(xi13);
    length3 = ldf length in base;
    r92 = dyn length3(xi13);
    check L392() else D56();
  L393():
    clabs2 = ld clabs;
    check L395() else D57();
  L394():
    r95 = dyn base19(<sym clabs>);
    goto L49(i60, r91, r95);
  L415():
    nrow1 = force? nrow;
    checkMissing(nrow1);
    r114 = `+`(nrow1, 1);
    ni = ld ni;
    check L416() else D67();
  L418():
    dr14 = tryDispatchBuiltin.0("[[<-", l7, r113);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L420() else L419(i80, r113, dr14);
  L419(i82, r117, l9):
    i85 = ld i;
    check L421() else D69();
  L625():
    dx61 = getTryDispatchBuiltinValue(dr56);
    goto L124(i402, dx57, dx61);
  L626():
    ni14 = ld ni;
    check L627() else D149();
  L708():
    sym51 = ldf nzchar;
    base51 = ldf nzchar in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L709() else L710();
  L770():
    ordCol7 = ld ordCol;
    check L771() else D211();
  L781():
    all_levs9 = force? all_levs8;
    checkMissing(all_levs9);
    c124 = `is.object`(all_levs9);
    if c124 then L782() else L783(i500, all_levs9);
  L787():
    factor = ldf factor;
    check L788() else D219();
  L797():
    has_dim1 = force? has_dim;
    checkMissing(has_dim1);
    any1 = ldf any in base;
    r398 = dyn any1(has_dim1);
    check L798() else D223();
  L799():
    pseq4 = ld pseq;
    check L800() else D224();
  D54():
    deopt 224 [i51, r88];
  D56():
    deopt 231 [i51, r92];
  D57():
    deopt 233 [i60, r91, clabs2];
  D67():
    deopt 271 [i57, ni];
  D69():
    deopt 277 [i82, r117, l9, r113, i85];
  D70():
    deopt 281 [i84, make_row_names3];
  D149():
    deopt 570 [i406, ni14];
  D150():
    deopt 577 [i406];
  D211():
    deopt 803 [ordCol7];
  D219():
    deopt 830 [i505];
  D223():
    deopt 854 [r398];
  D224():
    deopt 855 [pseq4];
  L50():
    goto L51(i63);
  L51(i66):
    match_names = ldf `match.names`;
    check L401() else D61();
  L128(i416, r271):
    st ri = r271;
    sym43 = ldf `seq.int`;
    base43 = ldf `seq.int` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L637() else L638();
  L152(i485, r332):
    c115 = `as.logical`(r332);
    if c115 then L713() else L153();
  L176(i509, dx80):
    st lij = dx80;
    length13 = ldf length in base;
    r378 = dyn length13(dx80);
    check L786() else D218();
  L201(r450):
    s5 = toForSeq(r450);
    l71 = length(s5);
    i552 = 0;
    goto L202(i552);
  L387():
    goto L46(i51, r88);
  L392():
    goto L48(i51, r92);
  L395():
    clabs3 = force? clabs2;
    checkMissing(clabs3);
    length4 = ldf length in base;
    r98 = dyn length4(clabs3);
    check L396() else D58();
  L397():
    stop = ldf stop;
    check L398() else D59();
  L416():
    ni1 = force? ni;
    checkMissing(ni1);
    seq_int = ldf `seq.int` in base;
    r115 = dyn seq_int(r114, ni1);
    check L417() else D68();
  L420():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L56(i80, dx16);
  L421():
    i86 = force? i85;
    ____2 = ldf `[[<-` in base;
    r120 = dyn ____2(l9, r113, i86);
    goto L56(i82, r120);
  L422():
    make_row_names4 = force? make_row_names3;
    checkMissing(make_row_names4);
    c25 = `as.logical`(make_row_names4);
    if c25 then L423() else L57();
  L627():
    ni15 = force? ni14;
    checkMissing(ni15);
    c101 = `is.object`(ni15);
    if c101 then L628() else L629(i406, ni15);
  L632():
    r269 = dyn stop1("invalid list argument: all variables should have the same length");
    check L633() else D151();
  L634():
    ni18 = ld ni;
    check L636() else D152();
  L635():
    r270 = dyn base42(<sym ni>);
    goto L128(i413, r270);
  L709():
    nmi10 = ld nmi;
    check L711() else D184();
  L710():
    r331 = dyn base51(<sym nmi>);
    goto L152(i478, r331);
  L771():
    ordCol8 = force? ordCol7;
    checkMissing(ordCol8);
    st `NA.lev` = ordCol8;
    goto L172(ordCol8);
  L782():
    dr72 = tryDispatchBuiltin.1("[[", all_levs9);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L784() else L783(i500, dr72);
  L783(i507, all_levs11):
    j21 = ld j;
    check L785() else D217();
  L788():
    p32 = prom<V +>{
      as_vector = ldf `as.vector`;
      p31 = prom<V +>{
        value10 = ld value;
        value11 = force? value10;
        checkMissing(value11);
        c126 = `is.object`(value11);
        if c126 then L1() else L2(value11);
      L0(dx82):
        return dx82;
      L1():
        dr74 = tryDispatchBuiltin.1("[[", value11);
        dc37 = getTryDispatchBuiltinDispatched(dr74);
        if dc37 then L3() else L2(dr74);
      L2(value13):
        j23 = ld j;
        j24 = force? j23;
        __18 = ldf `[[` in base;
        r379 = dyn __18(value13, j24);
        goto L0(r379);
      L3():
        dx81 = getTryDispatchBuiltinValue(dr74);
        goto L0(dx81);
      };
      r381 = dyn as_vector(p31);
      return r381;
    };
    p33 = prom<V +>{
      lij4 = ld lij;
      lij5 = force? lij4;
      checkMissing(lij5);
      return lij5;
    };
    p34 = prom<V +>{
      smartX8 = ld smartX;
      smartX9 = force? smartX8;
      checkMissing(smartX9);
      c127 = `as.logical`(smartX9);
      if c127 then L3() else L0();
    L0():
      factor_exclude3 = ld `factor.exclude`;
      factor_exclude4 = force? factor_exclude3;
      checkMissing(factor_exclude4);
      return factor_exclude4;
    L3():
      NA_lev8 = ld `NA.lev`;
      NA_lev9 = force? NA_lev8;
      checkMissing(NA_lev9);
      c128 = `is.object`(NA_lev9);
      if c128 then L4() else L5(NA_lev9);
    L1(dx84):
      r385 = `!`(dx84);
      c129 = `as.logical`(r385);
      if c129 then L7() else L2();
    L4():
      dr76 = tryDispatchBuiltin.1("[", NA_lev9);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L6() else L5(dr76);
    L5(NA_lev11):
      j25 = ld j;
      j26 = force? j25;
      __19 = ldf `[` in base;
      r384 = dyn __19(NA_lev11, j26);
      goto L1(r384);
    L2():
      invisible.0();
      return NULL;
    L6():
      dx83 = getTryDispatchBuiltinValue(dr76);
      goto L1(dx83);
    L7():
      return NA_LGL;
    };
    p35 = prom<V +>{
      ordCol11 = ld ordCol;
      ordCol12 = force? ordCol11;
      checkMissing(ordCol12);
      c130 = `is.object`(ordCol12);
      if c130 then L1() else L2(ordCol12);
    L0(dx86):
      return dx86;
    L1():
      dr78 = tryDispatchBuiltin.1("[", ordCol12);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L3() else L2(dr78);
    L2(ordCol14):
      j27 = ld j;
      j28 = force? j27;
      __20 = ldf `[` in base;
      r387 = dyn __20(ordCol14, j28);
      goto L0(r387);
    L3():
      dx85 = getTryDispatchBuiltinValue(dr78);
      goto L0(dx85);
    };
    r389 = dyn factor[, levels, exclude, ordered](p32, p33, p34, p35);
    check L789() else D220();
  L798():
    goto L181(r398);
  L800():
    pseq5 = force? pseq4;
    checkMissing(pseq5);
    c133 = `is.object`(pseq5);
    if c133 then L801() else L802(pseq5);
  L862():
    n12 = ld n;
    check L864() else D252();
  L863():
    r449 = dyn base69(<sym n>);
    goto L201(r449);
  D58():
    deopt 236 [i60, r91, r98];
  D59():
    deopt 239 [i63];
  D61():
    deopt 245 [i66];
  D68():
    deopt 275 [i57, r115];
  D151():
    deopt 579 [i406, r269];
  D152():
    deopt 581 [i413, ni18];
  D184():
    deopt 703 [i478, nmi10];
  D217():
    deopt 823 [i507, all_levs11, j21];
  D218():
    deopt 828 [i509, r378];
  D220():
    deopt 838 [i505, r389];
  D252():
    deopt 960 [n12];
  L57():
    goto L59(i84);
  L59(i95):
    nrow4 = ld nrow;
    check L431() else D74();
  L126(i412, dx65):
    st ni = dx65;
    goto L127(i412);
  L129(i419, r274):
    l42 = ld rows;
    c102 = `is.object`(l42);
    if c102 then L642() else L643(i419, r274, l42);
  L153():
    sym52 = ldf `as.integer`;
    base52 = ldf `as.integer` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L716() else L717();
  L154(i488, nmi14):
    l54 = ld rlabs;
    c116 = `is.object`(l54);
    if c116 then L720() else L721(i488, nmi14, l54);
  L183(dx90):
    st jdim = dx90;
    sym62 = ldf all;
    base62 = ldf all in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L805() else L806();
  L202(i553):
    i554 = `+`.1(i553, 1);
    c144 = `<`.1(l71, i554);
    if c144 then L865() else L250();
  L396():
    goto L49(i60, r91, r98);
  L398():
    r100 = dyn stop("numbers of columns of arguments do not match");
    check L399() else D60();
  L401():
    p7 = prom<V +>{
      clabs4 = ld clabs;
      clabs5 = force? clabs4;
      checkMissing(clabs5);
      return clabs5;
    };
    p8 = prom<V +>{
      sym20 = ldf names;
      base20 = ldf names in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      xi14 = ld xi;
      xi15 = force? xi14;
      checkMissing(xi15);
      names2 = ldf names in base;
      r105 = dyn names2(xi15);
      goto L0(r105);
    L2():
      r103 = dyn base20(<sym xi>);
      goto L0(r103);
    };
    r107 = dyn match_names(p7, p8);
    check L402() else D62();
  L417():
    goto L55(i57, r115);
  L423():
    Make_row_names = ldf `Make.row.names`;
    check L424() else D71();
  L628():
    dr58 = tryDispatchBuiltin.1("[", ni15);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L630() else L629(i406, dr58);
  L629(i410, ni17):
    __16 = ldf `[` in base;
    r268 = dyn __16(ni17, 1);
    goto L126(i410, r268);
  L633():
    goto L127(i406);
  L636():
    ni19 = force? ni18;
    checkMissing(ni19);
    r272 = seq_len(ni19);
    goto L128(i413, r272);
  L637():
    nrow6 = ld nrow;
    check L639() else D153();
  L638():
    r273 = dyn base43[from, `length.out`](<lang `+`(nrow, 1)>, <sym ni>);
    goto L129(i416, r273);
  L711():
    nmi11 = force? nmi10;
    checkMissing(nmi11);
    nzchar = ldf nzchar in base;
    r333 = dyn nzchar(nmi11);
    check L712() else D185();
  L713():
    nmi12 = ld nmi;
    check L714() else D186();
  L784():
    dx79 = getTryDispatchBuiltinValue(dr72);
    goto L176(i500, dx79);
  L785():
    j22 = force? j21;
    __17 = ldf `[[` in base;
    r377 = dyn __17(all_levs11, j22);
    goto L176(i507, r377);
  L786():
    goto L175(i509, r378);
  L789():
    l62 = ld value;
    c131 = `is.object`(l62);
    if c131 then L790() else L791(i505, r389, l62);
  L801():
    dr82 = tryDispatchBuiltin.1("[", pseq5);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L803() else L802(dr82);
  L802(pseq7):
    has_dim2 = ld `has.dim`;
    check L804() else D225();
  L864():
    n13 = force? n12;
    checkMissing(n13);
    r451 = seq_len(n13);
    goto L201(r451);
  D60():
    deopt 241 [i63, r100];
  D62():
    deopt 248 [i66, r107];
  D71():
    deopt 284 [i84];
  D74():
    deopt 297 [i95, nrow4];
  D153():
    deopt 587 [i416, nrow6];
  D185():
    deopt 706 [i478, r333];
  D186():
    deopt 707 [i485, nmi12];
  D225():
    deopt 857 [pseq7, has_dim2];
  L130(i423, dx68):
    st rows = dx68;
    make_row_names5 = ld `make.row.names`;
    check L646() else D157();
  L155(i494, nmi18, dx76):
    st rlabs = dx76;
    goto L156(i494, nmi18);
  L178(i515, r393, dx88):
    st value = dx88;
    goto L179(i515);
  L184(r401):
    r407 = `!`(r401);
    c134 = `as.logical`(r407);
    if c134 then L810() else L185();
  L250():
    x5 = `[[`(s5, i554, NULL, TRUE);
    st i = x5;
    sym70 = ldf unclass;
    base70 = ldf unclass in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L866() else L867();
  L399():
    goto L51(i63);
  L402():
    st pi = r107;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L403() else L404();
  L424():
    p9 = prom<V +>{
      nmi = ld nmi;
      nmi1 = force? nmi;
      checkMissing(nmi1);
      return nmi1;
    };
    p10 = prom<V +>{
      ri2 = ld ri;
      ri3 = force? ri2;
      checkMissing(ri3);
      return ri3;
    };
    p11 = prom<V +>{
      ni2 = ld ni;
      ni3 = force? ni2;
      checkMissing(ni3);
      return ni3;
    };
    p12 = prom<V +>{
      nrow2 = ld nrow;
      nrow3 = force? nrow2;
      checkMissing(nrow3);
      return nrow3;
    };
    r125 = dyn Make_row_names(p9, p10, p11, p12);
    check L425() else D72();
  L431():
    nrow5 = force? nrow4;
    checkMissing(nrow5);
    ni4 = ld ni;
    check L432() else D75();
  L630():
    dx64 = getTryDispatchBuiltinValue(dr58);
    goto L126(i406, dx64);
  L639():
    nrow7 = force? nrow6;
    checkMissing(nrow7);
    r275 = `+`(nrow7, 1);
    ni20 = ld ni;
    check L640() else D154();
  L642():
    dr60 = tryDispatchBuiltin.0("[[<-", l42, r274);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L644() else L643(i419, r274, dr60);
  L643(i421, r278, l44):
    i424 = ld i;
    check L645() else D156();
  L712():
    goto L152(i478, r333);
  L714():
    nmi13 = force? nmi12;
    checkMissing(nmi13);
    goto L154(i485, nmi13);
  L716():
    nrow14 = ld nrow;
    check L718() else D187();
  L717():
    r334 = dyn base52(<sym nrow>);
    goto L154(i485, r334);
  L720():
    dr68 = tryDispatchBuiltin.0("[[<-", l54, nmi14);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L722() else L721(i488, nmi14, dr68);
  L721(i492, nmi16, l56):
    i495 = ld i;
    check L723() else D189();
  L790():
    dr80 = tryDispatchBuiltin.0("[[<-", l62, r389);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L792() else L791(i505, r389, dr80);
  L791(i513, r391, l64):
    j29 = ld j;
    check L793() else D221();
  L803():
    dx89 = getTryDispatchBuiltinValue(dr82);
    goto L183(dx89);
  L804():
    has_dim3 = force? has_dim2;
    __21 = ldf `[` in base;
    r399 = dyn __21(pseq7, has_dim3);
    goto L183(r399);
  L805():
    vapply1 = ldf vapply;
    check L807() else D226();
  L806():
    r400 = dyn base62(<lang `<-`(df, vapply(jdim, function((j=), inherits(`[[`(value, j), "data.frame"), NULL), NA_LGL))>);
    goto L184(r400);
  L865():
    make_row_names9 = ld `make.row.names`;
    check L1027() else D319();
  D72():
    deopt 289 [i84, r125];
  D75():
    deopt 298 [i95, nrow5, ni4];
  D154():
    deopt 592 [i416, ni20];
  D156():
    deopt 598 [i421, r278, l44, r274, i424];
  D157():
    deopt 602 [i423, make_row_names5];
  D187():
    deopt 711 [i485, nrow14];
  D189():
    deopt 716 [i492, nmi16, l56, nmi14, i495];
  D221():
    deopt 840 [i513, r391, l64, r389, j29];
  D226():
    deopt 864 [];
  D319():
    deopt 1191 [make_row_names9];
  L52(i69, r109):
    r110 = `!`(r109);
    c22 = `as.logical`(r110);
    if c22 then L406() else L53();
  L185():
    goto L199(NULL);
  L199(i550):
    goto L200();
  L203(i559, r453):
    st xi = r453;
    sym71 = ldf `is.list`;
    base71 = ldf `is.list` in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L874() else L875();
  L403():
    pi = ld pi;
    check L405() else D63();
  L404():
    r108 = dyn base21(<sym pi>);
    goto L52(i66, r108);
  L425():
    l10 = ld rlabs;
    c26 = `is.object`(l10);
    if c26 then L426() else L427(i84, r125, l10);
  L432():
    ni5 = force? ni4;
    checkMissing(ni5);
    r132 = `+`(nrow5, ni5);
    st nrow = r132;
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L433() else L434();
  L640():
    ni21 = force? ni20;
    checkMissing(ni21);
    seq_int1 = ldf `seq.int` in base;
    r276 = dyn seq_int1(r275, ni21);
    check L641() else D155();
  L644():
    dx67 = getTryDispatchBuiltinValue(dr60);
    goto L130(i419, dx67);
  L645():
    i425 = force? i424;
    ____7 = ldf `[[<-` in base;
    r281 = dyn ____7(l44, r274, i425);
    goto L130(i421, r281);
  L646():
    make_row_names6 = force? make_row_names5;
    checkMissing(make_row_names6);
    c103 = `as.logical`(make_row_names6);
    if c103 then L647() else L131();
  L718():
    nrow15 = force? nrow14;
    checkMissing(nrow15);
    as_integer = ldf `as.integer` in base;
    r335 = dyn as_integer(nrow15);
    check L719() else D188();
  L722():
    dx75 = getTryDispatchBuiltinValue(dr68);
    goto L155(i488, nmi14, dx75);
  L723():
    i496 = force? i495;
    ____11 = ldf `[[<-` in base;
    r336 = dyn ____11(l56, nmi14, i496);
    goto L155(i492, nmi16, r336);
  L792():
    dx87 = getTryDispatchBuiltinValue(dr80);
    goto L178(i505, r389, dx87);
  L793():
    j30 = force? j29;
    ____12 = ldf `[[<-` in base;
    r394 = dyn ____12(l64, r389, j30);
    goto L178(i513, r391, r394);
  L807():
    p36 = prom<V +>{
      jdim = ld jdim;
      jdim1 = force? jdim;
      checkMissing(jdim1);
      return jdim1;
    };
    p37 = prom<V +>{
      r403 = clos inner678197094;
      return r403;
    };
    r405 = dyn vapply1(p36, p37, NA_LGL);
    check L808() else D227();
  L810():
    sym63 = ldf max;
    base63 = ldf max in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L811() else L812();
  L866():
    allargs28 = ld allargs;
    check L868() else D253();
  L867():
    r452 = dyn base70(<lang `[[`(allargs, i)>);
    goto L203(i554, r452);
  L1027():
    make_row_names10 = force? make_row_names9;
    checkMissing(make_row_names10);
    c199 = `as.logical`(make_row_names10);
    if c199 then L1028() else L251(c199);
  D63():
    deopt 251 [i66, pi];
  D155():
    deopt 596 [i416, r276];
  D188():
    deopt 714 [i485, r335];
  D227():
    deopt 868 [r405];
  D253():
    deopt 965 [i554, allargs28];
  L53():
    goto L47(i69);
  L58(i92, r129, dx19):
    st rlabs = dx19;
    goto L59(i92);
  L60(i98, r134):
    c28 = `as.logical`(r134);
    if c28 then L436() else L61();
  L131():
    goto L133(i423);
  L133(i434):
    nrow10 = ld nrow;
    check L655() else D161();
  L186(r409):
    st rmax = r409;
    jdim2 = ld jdim;
    check L816() else D232();
  L205(i568, r457):
    r459 = `!`(r457);
    c146 = `as.logical`(r459);
    if c146 then L878() else L206();
  L251(c201):
    c205 = `as.logical`(c201);
    if c205 then L1031() else L252();
  L405():
    pi1 = force? pi;
    checkMissing(pi1);
    c21 = `==`(pi1, NULL);
    goto L52(i66, c21);
  L406():
    pi2 = ld pi;
    check L407() else D64();
  L426():
    dr16 = tryDispatchBuiltin.0("[[<-", l10, r125);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L428() else L427(i84, r125, dr16);
  L427(i90, r127, l12):
    i93 = ld i;
    check L429() else D73();
  L433():
    value = ld value;
    check L435() else D76();
  L434():
    r133 = dyn base23(<sym value>);
    goto L60(i95, r133);
  L641():
    goto L129(i416, r276);
  L647():
    Make_row_names1 = ldf `Make.row.names`;
    check L648() else D158();
  L719():
    goto L154(i485, r335);
  L808():
    st df = r405;
    all1 = ldf all in base;
    r406 = dyn all1(r405);
    check L809() else D228();
  L811():
    unlist = ldf unlist;
    check L813() else D229();
  L812():
    r408 = dyn base63(<lang unlist(rows)>);
    goto L186(r408);
  L868():
    allargs29 = force? allargs28;
    checkMissing(allargs29);
    c145 = `is.object`(allargs29);
    if c145 then L869() else L870(i554, allargs29);
  L874():
    xi32 = ld xi;
    check L876() else D256();
  L875():
    r456 = dyn base71(<sym xi>);
    goto L205(i559, r456);
  L1028():
    autoRnms = ld autoRnms;
    check L1029() else D320();
  D64():
    deopt 255 [i69, pi2];
  D73():
    deopt 291 [i90, r127, l12, r125, i93];
  D76():
    deopt 303 [i95, value];
  D158():
    deopt 605 [i423];
  D161():
    deopt 618 [i434, nrow10];
  D228():
    deopt 871 [r406];
  D229():
    deopt 876 [];
  D232():
    deopt 882 [jdim2];
  D256():
    deopt 975 [i559, xi32];
  D320():
    deopt 1193 [c199, autoRnms];
  L61():
    sym32 = ldf seq_len;
    base32 = ldf seq_len in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L520() else L521();
  L88(i228, i229):
    goto L119(i228);
  L204(i563, dx104):
    unclass1 = ldf unclass in base;
    r455 = dyn unclass1(dx104);
    check L873() else D255();
  L206():
    goto L214(i568);
  L214(i588):
    rows4 = ld rows;
    check L902() else D270();
  L252():
    goto L255(NULL);
  L255(r575):
    st rlabs = r575;
    sym80 = ldf `is.null`;
    base80 = ldf `is.null` in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L1042() else L1043();
  L407():
    pi3 = force? pi2;
    checkMissing(pi3);
    l4 = ld perm;
    c23 = `is.object`(l4);
    if c23 then L408() else L409(i69, pi3, l4);
  L428():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L58(i84, r125, dx18);
  L429():
    i94 = force? i93;
    ____3 = ldf `[[<-` in base;
    r130 = dyn ____3(l12, r125, i94);
    goto L58(i90, r127, r130);
  L435():
    value1 = force? value;
    checkMissing(value1);
    c27 = `==`(value1, NULL);
    goto L60(i95, c27);
  L436():
    sym24 = ldf unclass;
    base24 = ldf unclass in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L437() else L438();
  L648():
    p22 = prom<V +>{
      nmi2 = ld nmi;
      nmi3 = force? nmi2;
      checkMissing(nmi3);
      return nmi3;
    };
    p23 = prom<V +>{
      ri4 = ld ri;
      ri5 = force? ri4;
      checkMissing(ri5);
      return ri5;
    };
    p24 = prom<V +>{
      ni22 = ld ni;
      ni23 = force? ni22;
      checkMissing(ni23);
      return ni23;
    };
    p25 = prom<V +>{
      nrow8 = ld nrow;
      nrow9 = force? nrow8;
      checkMissing(nrow9);
      return nrow9;
    };
    r286 = dyn Make_row_names1(p22, p23, p24, p25);
    check L649() else D159();
  L655():
    nrow11 = force? nrow10;
    checkMissing(nrow11);
    ni24 = ld ni;
    check L656() else D162();
  L809():
    goto L184(r406);
  L813():
    p38 = prom<V +>{
      rows2 = ld rows;
      rows3 = force? rows2;
      checkMissing(rows3);
      return rows3;
    };
    r411 = dyn unlist(p38);
    check L814() else D230();
  L816():
    jdim3 = force? jdim2;
    checkMissing(jdim3);
    c135 = `is.object`(jdim3);
    if c135 then L817() else L818(jdim3);
  L869():
    dr96 = tryDispatchBuiltin.1("[[", allargs29);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L871() else L870(i554, dr96);
  L870(i561, allargs31):
    i564 = ld i;
    check L872() else D254();
  L876():
    xi33 = force? xi32;
    checkMissing(xi33);
    is_list1 = ldf `is.list` in base;
    r458 = dyn is_list1(xi33);
    check L877() else D257();
  L878():
    sym72 = ldf length;
    base72 = ldf length in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L879() else L880();
  L1029():
    autoRnms1 = force? autoRnms;
    checkMissing(autoRnms1);
    r564 = `!`(autoRnms1);
    c202 = `as.logical`(r564);
    c203 = `&&`(c199, c202);
    goto L251(c203);
  L1031():
    unlist1 = ldf unlist;
    check L1032() else D321();
  D159():
    deopt 610 [i423, r286];
  D162():
    deopt 619 [i434, nrow11, ni24];
  D230():
    deopt 878 [r411];
  D254():
    deopt 967 [i561, allargs31, i564];
  D255():
    deopt 971 [i563, r455];
  D257():
    deopt 978 [i559, r458];
  D270():
    deopt 1022 [i588, rows4];
  D321():
    deopt 1198 [];
  L54(i75, pi7, dx15):
    st perm = dx15;
    goto L47(i75);
  L62(i103, r136):
    st value = r136;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L441() else L442();
  L89(i232, r196):
    s2 = toForSeq(r196);
    l29 = length(s2);
    i233 = 0;
    goto L90(i232, i233);
  L187(dx92):
    s4 = toForSeq(dx92);
    l65 = length(s4);
    i517 = 0;
    goto L188(i517);
  L207(i573, r461):
    st ni = r461;
    nvar18 = ld nvar;
    check L883() else D260();
  L256(r577):
    c208 = `as.logical`(r577);
    if c208 then L1045() else L257();
  L408():
    dr12 = tryDispatchBuiltin.0("[[<-", l4, pi3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L410() else L409(i69, pi3, dr12);
  L409(i73, pi5, l6):
    i76 = ld i;
    check L411() else D65();
  L437():
    xi16 = ld xi;
    check L439() else D77();
  L438():
    r135 = dyn base24(<sym xi>);
    goto L62(i98, r135);
  L520():
    nvar6 = ld nvar;
    check L522() else D111();
  L521():
    r195 = dyn base32(<sym nvar>);
    goto L89(i98, r195);
  L649():
    l45 = ld rlabs;
    c104 = `is.object`(l45);
    if c104 then L650() else L651(i423, r286, l45);
  L656():
    ni25 = force? ni24;
    checkMissing(ni25);
    r293 = `+`(nrow11, ni25);
    st nrow = r293;
    sym44 = ldf length;
    base44 = ldf length in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L657() else L658();
  L814():
    max1 = ldf max in base;
    r412 = dyn max1(r411);
    check L815() else D231();
  L817():
    dr84 = tryDispatchBuiltin.1("[", jdim3);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L819() else L818(dr84);
  L818(jdim5):
    df = ld df;
    check L820() else D233();
  L871():
    dx103 = getTryDispatchBuiltinValue(dr96);
    goto L204(i554, dx103);
  L872():
    i565 = force? i564;
    __27 = ldf `[[` in base;
    r454 = dyn __27(allargs31, i565);
    goto L204(i561, r454);
  L873():
    goto L203(i563, r455);
  L877():
    goto L205(i559, r458);
  L879():
    xi34 = ld xi;
    check L881() else D258();
  L880():
    r460 = dyn base72(<sym xi>);
    goto L207(i568, r460);
  L902():
    rows5 = force? rows4;
    checkMissing(rows5);
    c155 = `is.object`(rows5);
    if c155 then L903() else L904(i588, rows5);
  L1032():
    p50 = prom<V +>{
      rlabs = ld rlabs;
      rlabs1 = force? rlabs;
      checkMissing(rlabs1);
      return rlabs1;
    };
    r566 = dyn unlist1(p50);
    check L1033() else D322();
  L1042():
    cl2 = ld cl;
    check L1044() else D328();
  L1043():
    r576 = dyn base80(<sym cl>);
    goto L256(r576);
  D65():
    deopt 258 [i73, pi5, l6, pi3, i76];
  D77():
    deopt 308 [i98, xi16];
  D111():
    deopt 435 [i98, nvar6];
  D231():
    deopt 880 [r412];
  D233():
    deopt 884 [jdim5, df];
  D258():
    deopt 982 [i568, xi34];
  D260():
    deopt 986 [i573, r461, nvar18];
  D322():
    deopt 1200 [r566];
  D328():
    deopt 1218 [cl2];
  L63(i106, r139):
    st nvar = r139;
    sym26 = ldf vector;
    base26 = ldf vector in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L445() else L446();
  L90(i234, i235):
    i236 = `+`.1(i235, 1);
    c52 = `<`.1(l29, i236);
    if c52 then L523() else L118();
  L132(i431, r290, dx70):
    st rlabs = dx70;
    goto L133(i431);
  L134(i437, r295):
    r300 = `>`(r295, 0);
    c105 = `as.logical`(r300);
    if c105 then L664() else L136();
  L188(i518):
    i519 = `+`.1(i518, 1);
    c136 = `<`.1(l65, i519);
    if c136 then L821() else L198();
  L215(i592, dx106):
    st ri = dx106;
    perm = ld perm;
    check L907() else D272();
  L257():
    structure = ldf structure;
    check L1049() else D331();
  L410():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L54(i69, pi3, dx14);
  L411():
    i77 = force? i76;
    ____1 = ldf `[[<-` in base;
    r111 = dyn ____1(l6, pi3, i77);
    goto L54(i73, pi5, r111);
  L439():
    xi17 = force? xi16;
    checkMissing(xi17);
    unclass = ldf unclass in base;
    r137 = dyn unclass(xi17);
    check L440() else D78();
  L441():
    value2 = ld value;
    check L443() else D79();
  L442():
    r138 = dyn base25(<sym value>);
    goto L63(i103, r138);
  L522():
    nvar7 = force? nvar6;
    checkMissing(nvar7);
    r197 = seq_len(nvar7);
    goto L89(i98, r197);
  L650():
    dr62 = tryDispatchBuiltin.0("[[<-", l45, r286);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L652() else L651(i423, r286, dr62);
  L651(i429, r288, l47):
    i432 = ld i;
    check L653() else D160();
  L657():
    sym45 = ldf names;
    base45 = ldf names in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L659() else L660();
  L658():
    r294 = dyn base44(<lang `<-`(nmi, names(xi))>);
    goto L134(i434, r294);
  L815():
    goto L186(r412);
  L819():
    dx91 = getTryDispatchBuiltinValue(dr84);
    goto L187(dx91);
  L820():
    df1 = force? df;
    checkMissing(df1);
    r413 = `!`(df1);
    __22 = ldf `[` in base;
    r414 = dyn __22(jdim5, r413);
    goto L187(r414);
  L881():
    xi35 = force? xi34;
    checkMissing(xi35);
    length15 = ldf length in base;
    r462 = dyn length15(xi35);
    check L882() else D259();
  L883():
    nvar19 = force? nvar18;
    checkMissing(nvar19);
    r463 = `!=`(r461, nvar19);
    c147 = `as.logical`(r463);
    if c147 then L884() else L208();
  L903():
    dr98 = tryDispatchBuiltin.1("[[", rows5);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L905() else L904(i588, dr98);
  L904(i590, rows7):
    i593 = ld i;
    check L906() else D271();
  L1033():
    st rlabs = r566;
    anyDuplicated = ldf anyDuplicated;
    check L1034() else D323();
  L1044():
    cl3 = force? cl2;
    checkMissing(cl3);
    c207 = `==`(cl3, NULL);
    goto L256(c207);
  L1045():
    as_data_frame1 = ldf `as.data.frame`;
    check L1046() else D329();
  D78():
    deopt 311 [i98, r137];
  D79():
    deopt 315 [i103, value2];
  D160():
    deopt 612 [i429, r288, l47, r286, i432];
  D259():
    deopt 985 [i568, r462];
  D271():
    deopt 1024 [i590, rows7, i593];
  D272():
    deopt 1028 [i592, perm];
  D323():
    deopt 1203 [];
  D329():
    deopt 1222 [];
  D331():
    deopt 1232 [];
  L64(i109, r142):
    st `all.levs` = r142;
    logical = ldf logical;
    check L449() else D83();
  L118():
    x2 = `[[`(s2, i236, NULL, TRUE);
    st j = x2;
    xi18 = ld xi;
    check L524() else D112();
  L135(i440, r297):
    st nmi = r297;
    length8 = ldf length in base;
    r299 = dyn length8(r297);
    check L663() else D165();
  L136():
    goto L147(i437, NULL);
  L147(i469, nmi9):
    goto L119(i469);
  L198():
    x4 = `[[`(s4, i519, NULL, TRUE);
    st j = x4;
    sym64 = ldf dimnames;
    base64 = ldf dimnames in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L822() else L823();
  L208():
    goto L213(i573, NULL);
  L213(i587, r476):
    goto L214(i587);
  L440():
    goto L62(i98, r137);
  L443():
    value3 = force? value2;
    checkMissing(value3);
    length5 = ldf length in base;
    r140 = dyn length5(value3);
    check L444() else D80();
  L445():
    nvar = ld nvar;
    check L447() else D81();
  L446():
    r141 = dyn base26("list", <sym nvar>);
    goto L64(i106, r141);
  L523():
    goto L88(i234, i236);
  L652():
    dx69 = getTryDispatchBuiltinValue(dr62);
    goto L132(i423, r286, dx69);
  L653():
    i433 = force? i432;
    ____8 = ldf `[[<-` in base;
    r291 = dyn ____8(l47, r286, i433);
    goto L132(i429, r288, r291);
  L659():
    xi26 = ld xi;
    check L661() else D163();
  L660():
    r296 = dyn base45(<sym xi>);
    goto L135(i434, r296);
  L664():
    sym46 = ldf `is.null`;
    base46 = ldf `is.null` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L665() else L666();
  L821():
    goto L199(i519);
  L882():
    goto L207(i568, r462);
  L884():
    ni26 = ld ni;
    check L885() else D261();
  L905():
    dx105 = getTryDispatchBuiltinValue(dr98);
    goto L215(i588, dx105);
  L906():
    i594 = force? i593;
    __29 = ldf `[[` in base;
    r478 = dyn __29(rows7, i594);
    goto L215(i590, r478);
  L907():
    perm1 = force? perm;
    checkMissing(perm1);
    c156 = `is.object`(perm1);
    if c156 then L908() else L909(i592, perm1);
  L1034():
    p51 = prom<V +>{
      rlabs2 = ld rlabs;
      rlabs3 = force? rlabs2;
      checkMissing(rlabs3);
      return rlabs3;
    };
    r568 = dyn anyDuplicated(p51);
    check L1035() else D324();
  L1046():
    p53 = prom<V +>{
      value18 = ld value;
      value19 = force? value18;
      checkMissing(value19);
      return value19;
    };
    p54 = prom<V +>{
      rlabs8 = ld rlabs;
      rlabs9 = force? rlabs8;
      checkMissing(rlabs9);
      return rlabs9;
    };
    p55 = prom<V +>{
      stringsAsFactors3 = ld stringsAsFactors;
      stringsAsFactors4 = force? stringsAsFactors3;
      checkMissing(stringsAsFactors4);
      return stringsAsFactors4;
    };
    r581 = dyn as_data_frame1[, `row.names`, `fix.empty.names`, stringsAsFactors](p53, p54, TRUE, p55);
    check L1047() else D330();
  L1049():
    p56 = prom<V +>{
      value20 = ld value;
      value21 = force? value20;
      checkMissing(value21);
      return value21;
    };
    p57 = prom<V +>{
      cl4 = ld cl;
      cl5 = force? cl4;
      checkMissing(cl5);
      return cl5;
    };
    p61 = prom<V +>{
      ____18 = ldf `%||%`;
      p58 = prom<V +>{
        rlabs10 = ld rlabs;
        rlabs11 = force? rlabs10;
        checkMissing(rlabs11);
        return rlabs11;
      };
      p60 = prom<V +>{
        _set_row_names = ldf `.set_row_names`;
        p59 = prom<V +>{
          nrow18 = ld nrow;
          nrow19 = force? nrow18;
          checkMissing(nrow19);
          return nrow19;
        };
        r586 = dyn _set_row_names(p59);
        return r586;
      };
      r588 = dyn ____18(p58, p60);
      return r588;
    };
    r590 = dyn structure[, class, `row.names`](p56, p57, p61);
    check L1050() else D332();
  D80():
    deopt 318 [i103, r140];
  D81():
    deopt 323 [i106, nvar];
  D83():
    deopt 329 [i109];
  D112():
    deopt 438 [i234, i236, xi18];
  D163():
    deopt 627 [i434, xi26];
  D165():
    deopt 633 [i440, r299];
  D261():
    deopt 989 [i573, ni26];
  D324():
    deopt 1205 [r568];
  D330():
    deopt 1230 [r581];
  D332():
    deopt 1238 [r590];
  L137(i445, r302):
    c107 = `as.logical`(r302);
    if c107 then L668() else L138();
  L189(i524, r416):
    st dn = r416;
    dn = ld dn;
    check L830() else D237();
  L216(i598, dx108):
    st pi = dx108;
    sym74 = ldf `is.null`;
    base74 = ldf `is.null` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L912() else L913();
  L444():
    goto L63(i103, r140);
  L447():
    nvar1 = force? nvar;
    checkMissing(nvar1);
    vector1 = ldf vector in base;
    r143 = dyn vector1("list", nvar1);
    check L448() else D82();
  L449():
    p13 = prom<V +>{
      nvar2 = ld nvar;
      nvar3 = force? nvar2;
      checkMissing(nvar3);
      return nvar3;
    };
    r145 = dyn logical(p13);
    check L450() else D84();
  L524():
    xi19 = force? xi18;
    checkMissing(xi19);
    c53 = `is.object`(xi19);
    if c53 then L525() else L526(i234, i236, xi19);
  L661():
    xi27 = force? xi26;
    checkMissing(xi27);
    names3 = ldf names in base;
    r298 = dyn names3(xi27);
    check L662() else D164();
  L663():
    goto L134(i440, r299);
  L665():
    clabs6 = ld clabs;
    check L667() else D166();
  L666():
    r301 = dyn base46(<sym clabs>);
    goto L137(i437, r301);
  L822():
    value14 = ld value;
    check L824() else D234();
  L823():
    r415 = dyn base64(<lang `<-`(vj, `[[`(value, j))>);
    goto L189(i519, r415);
  L885():
    ni27 = force? ni26;
    checkMissing(ni27);
    c148 = `as.logical`(ni27);
    if c148 then L886() else L209(i573, c148);
  L908():
    dr100 = tryDispatchBuiltin.1("[[", perm1);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L910() else L909(i592, dr100);
  L909(i596, perm3):
    i599 = ld i;
    check L911() else D273();
  L1035():
    c206 = `as.logical`(r568);
    if c206 then L1036() else L253();
  L1047():
    popenv;
    return r581;
  L1050():
    popenv;
    return r590;
  D82():
    deopt 326 [i106, r143];
  D84():
    deopt 331 [i109, r145];
  D164():
    deopt 630 [i434, r298];
  D166():
    deopt 637 [i437, clabs6];
  D234():
    deopt 890 [i519, value14];
  D237():
    deopt 899 [i524, dn];
  D273():
    deopt 1030 [i596, perm3, i599];
  L91(i247, i248, dx35):
    st xij = dx35;
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L529() else L530();
  L138():
    sym47 = ldf length;
    base47 = ldf length in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L671() else L672();
  L139(i448, nmi6):
    goto L147(i448, nmi6);
  L209(i577, c150):
    c154 = `as.logical`(c150);
    if c154 then L891() else L210();
  L217(i603, r481):
    c158 = `as.logical`(r481);
    if c158 then L915() else L218();
  L253():
    rlabs6 = ld rlabs;
    check L1040() else D327();
  L254(r574):
    goto L255(r574);
  L448():
    goto L64(i106, r143);
  L450():
    st ordCol = r145;
    st facCol = r145;
    st `has.dim` = r145;
    smartX = ld smartX;
    check L451() else D85();
  L525():
    dr32 = tryDispatchBuiltin.1("[[", xi19);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L527() else L526(i234, i236, dr32);
  L526(i243, i244, xi21):
    j14 = ld j;
    check L528() else D113();
  L662():
    goto L135(i434, r298);
  L667():
    clabs7 = force? clabs6;
    checkMissing(clabs7);
    c106 = `==`(clabs7, NULL);
    goto L137(i437, c106);
  L668():
    nmi4 = ld nmi;
    check L669() else D167();
  L824():
    value15 = force? value14;
    checkMissing(value15);
    c137 = `is.object`(value15);
    if c137 then L825() else L826(i519, value15);
  L830():
    dn1 = force? dn;
    checkMissing(dn1);
    c138 = `is.object`(dn1);
    if c138 then L831() else L832(i524, dn1);
  L886():
    nvar20 = ld nvar;
    check L887() else D262();
  L910():
    dx107 = getTryDispatchBuiltinValue(dr100);
    goto L216(i592, dx107);
  L911():
    i600 = force? i599;
    __30 = ldf `[[` in base;
    r479 = dyn __30(perm3, i600);
    goto L216(i596, r479);
  L912():
    pi22 = ld pi;
    check L914() else D274();
  L913():
    r480 = dyn base74(<sym pi>);
    goto L217(i598, r480);
  L1036():
    make_unique = ldf `make.unique`;
    check L1037() else D325();
  D85():
    deopt 335 [i109, smartX];
  D113():
    deopt 440 [i243, i244, xi21, j14];
  D167():
    deopt 640 [i445, nmi4];
  D262():
    deopt 992 [i573, c148, nvar20];
  D274():
    deopt 1035 [i598, pi22];
  D325():
    deopt 1207 [];
  D327():
    deopt 1212 [rlabs6];
  L92(i253, i254, r200):
    c55 = `as.logical`(r200);
    if c55 then L93(i253, i254, c55) else L532();
  L140(i451, r304):
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L675() else L676();
  L190(i528, dx94):
    st vj = dx94;
    dimnames = ldf dimnames in base;
    r418 = dyn dimnames(dx94);
    check L829() else D236();
  L191(i532, dx96):
    st rn = dx96;
    sym65 = ldf length;
    base65 = ldf length in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L834() else L835();
  L210():
    goto L211(i577);
  L211(i583):
    sym73 = ldf rep_len;
    base73 = ldf rep_len in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L895() else L896();
  L218():
    goto L219(i603);
  L219(i606):
    pseq11 = ld pseq;
    check L918() else D276();
  L451():
    smartX1 = force? smartX;
    checkMissing(smartX1);
    c29 = `as.logical`(smartX1);
    if c29 then L452() else L65();
  L527():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L91(i234, i236, dx34);
  L528():
    j15 = force? j14;
    __7 = ldf `[[` in base;
    r198 = dyn __7(xi21, j15);
    goto L91(i243, i244, r198);
  L529():
    pi8 = ld pi;
    check L531() else D114();
  L530():
    r199 = dyn base33(<sym pi>);
    goto L92(i247, i248, r199);
  L669():
    nmi5 = force? nmi4;
    checkMissing(nmi5);
    st clabs = nmi5;
    goto L139(i445, nmi5);
  L671():
    xi28 = ld xi;
    check L673() else D168();
  L672():
    r303 = dyn base47(<sym xi>);
    goto L140(i445, r303);
  L825():
    dr86 = tryDispatchBuiltin.1("[[", value15);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L827() else L826(i519, dr86);
  L826(i526, value17):
    j31 = ld j;
    check L828() else D235();
  L831():
    dr88 = tryDispatchBuiltin.1("[[", dn1);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L833() else L832(i524, dr88);
  L832(i530, dn3):
    __24 = ldf `[[` in base;
    r419 = dyn __24(dn3, 1);
    goto L191(i530, r419);
  L887():
    nvar21 = force? nvar20;
    checkMissing(nvar21);
    ni28 = ld ni;
    check L888() else D263();
  L891():
    warning = ldf warning;
    check L892() else D265();
  L914():
    pi23 = force? pi22;
    checkMissing(pi23);
    c157 = `==`(pi23, NULL);
    goto L217(i598, c157);
  L915():
    pseq8 = ld pseq;
    check L916() else D275();
  L1037():
    p52 = prom<V +>{
      sym79 = ldf `as.character`;
      base79 = ldf `as.character` in base;
      guard79 = `==`.4(sym79, base79);
      if guard79 then L1() else L2();
    L0(r570):
      return r570;
    L1():
      rlabs4 = ld rlabs;
      rlabs5 = force? rlabs4;
      checkMissing(rlabs5);
      as_character = ldf `as.character` in base;
      r571 = dyn as_character(rlabs5);
      goto L0(r571);
    L2():
      r569 = dyn base79(<sym rlabs>);
      goto L0(r569);
    };
    r573 = dyn make_unique[, sep](p52, "");
    check L1038() else D326();
  L1040():
    rlabs7 = force? rlabs6;
    checkMissing(rlabs7);
    goto L254(rlabs7);
  D114():
    deopt 445 [i247, i248, pi8];
  D168():
    deopt 645 [i445, xi28];
  D235():
    deopt 892 [i526, value17, j31];
  D236():
    deopt 897 [i528, r418];
  D263():
    deopt 994 [i573, c148, ni28];
  D265():
    deopt 1002 [i577];
  D275():
    deopt 1038 [i603, pseq8];
  D276():
    deopt 1043 [i606, pseq11];
  D326():
    deopt 1211 [r573];
  L65():
    goto L66(i109);
  L66(i112):
    sym27 = ldf seq_len;
    base27 = ldf seq_len in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L455() else L456();
  L93(i255, i256, c56):
    c69 = `as.logical`(c56);
    if c69 then L542() else L96();
  L141(i454, r309, r310):
    r312 = `!=`(r309, r310);
    c108 = `as.logical`(r312);
    if c108 then L679() else L142();
  L192(i535, r421):
    r423 = `>`(r421, 0);
    c139 = `as.logical`(r423);
    if c139 then L838() else L193();
  L212(i586, r474):
    st xi = r474;
    goto L213(i586, r474);
  L452():
    ordCol = ld ordCol;
    check L453() else D86();
  L531():
    pi9 = force? pi8;
    checkMissing(pi9);
    c54 = `==`(pi9, NULL);
    goto L92(i247, i248, c54);
  L532():
    sym34 = ldf `is.na`;
    base34 = ldf `is.na` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L533() else L534();
  L673():
    xi29 = force? xi28;
    checkMissing(xi29);
    length9 = ldf length in base;
    r305 = dyn length9(xi29);
    check L674() else D169();
  L675():
    clabs8 = ld clabs;
    check L677() else D170();
  L676():
    r308 = dyn base48(<sym clabs>);
    goto L141(i451, r304, r308);
  L827():
    dx93 = getTryDispatchBuiltinValue(dr86);
    goto L190(i519, dx93);
  L828():
    j32 = force? j31;
    __23 = ldf `[[` in base;
    r417 = dyn __23(value17, j32);
    goto L190(i526, r417);
  L829():
    goto L189(i528, r418);
  L833():
    dx95 = getTryDispatchBuiltinValue(dr88);
    goto L191(i524, dx95);
  L834():
    rn = ld rn;
    check L836() else D238();
  L835():
    r420 = dyn base65(<sym rn>);
    goto L192(i532, r420);
  L888():
    ni29 = force? ni28;
    checkMissing(ni29);
    __28 = ldf `%%` in base;
    r464 = dyn __28(nvar21, ni29);
    check L889() else D264();
  L892():
    p45 = prom<V +>{
      gettextf = ldf gettextf;
      p42 = prom<V +>{
        nvar22 = ld nvar;
        nvar23 = force? nvar22;
        checkMissing(nvar23);
        return nvar23;
      };
      p43 = prom<V +>{
        ni30 = ld ni;
        ni31 = force? ni30;
        checkMissing(ni31);
        return ni31;
      };
      p44 = prom<V +>{
        i581 = ld i;
        i582 = force? i581;
        checkMissing(i582);
        return i582;
      };
      r469 = dyn gettextf("number of columns of result, %d, is not a multiple of vector length %d of arg %d", p42, p43, p44);
      return r469;
    };
    r471 = dyn warning[, domain](p45, NA_LGL);
    check L893() else D266();
  L895():
    xi36 = ld xi;
    check L897() else D267();
  L896():
    r473 = dyn base73(<sym xi>, <sym nvar>);
    goto L212(i583, r473);
  L916():
    pseq9 = force? pseq8;
    checkMissing(pseq9);
    st pi = pseq9;
    goto L219(i603);
  L918():
    pseq12 = force? pseq11;
    checkMissing(pseq12);
    s6 = toForSeq(pseq12);
    l72 = length(s6);
    i607 = 0;
    goto L220(i606, i607);
  L1038():
    goto L254(r573);
  D86():
    deopt 337 [i109, ordCol];
  D169():
    deopt 648 [i445, r305];
  D170():
    deopt 650 [i451, r304, clabs8];
  D238():
    deopt 907 [i532, rn];
  D264():
    deopt 997 [i573, c148, r464];
  D266():
    deopt 1006 [i577, r471];
  D267():
    deopt 1011 [i583, xi36];
  L67(i115, r147):
    s1 = toForSeq(r147);
    l13 = length(s1);
    i116 = 0;
    goto L68(i115, i116);
  L94(i263, i264, c60, r202):
    c66 = `as.logical`(r202);
    c67 = `||`(c60, c66);
    goto L93(i263, i264, c67);
  L96():
    goto L97(i255, i256);
  L97(i279, i280):
    facCol = ld facCol;
    check L545() else D119();
  L142():
    goto L143(i454);
  L143(i457):
    match_names1 = ldf `match.names`;
    check L683() else D174();
  L193():
    goto L194(i535);
  L194(i538):
    sym66 = ldf dim;
    base66 = ldf dim in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L843() else L844();
  L220(i608, i609):
    i610 = `+`.1(i609, 1);
    c159 = `<`.1(l72, i610);
    if c159 then L919() else L249();
  L453():
    ordCol1 = force? ordCol;
    checkMissing(ordCol1);
    st `NA.lev` = ordCol1;
    goto L66(i109);
  L455():
    nvar4 = ld nvar;
    check L457() else D87();
  L456():
    r146 = dyn base27(<sym nvar>);
    goto L67(i112, r146);
  L533():
    pi10 = ld pi;
    check L535() else D115();
  L534():
    r201 = dyn base34(<lang `<-`(jj, `[[`(pi, j))>);
    goto L94(i253, i254, c55, r201);
  L542():
    j18 = ld j;
    check L543() else D118();
  L674():
    goto L140(i445, r305);
  L677():
    clabs9 = force? clabs8;
    checkMissing(clabs9);
    length10 = ldf length in base;
    r311 = dyn length10(clabs9);
    check L678() else D171();
  L679():
    stop2 = ldf stop;
    check L680() else D172();
  L836():
    rn1 = force? rn;
    checkMissing(rn1);
    length14 = ldf length in base;
    r422 = dyn length14(rn1);
    check L837() else D239();
  L838():
    rmax = ld rmax;
    check L839() else D240();
  L889():
    r465 = `!=`(r464, 0.0);
    c151 = `as.logical`(r465);
    c152 = `&&`(c148, c151);
    goto L209(i573, c152);
  L893():
    goto L211(i577);
  L897():
    xi37 = force? xi36;
    checkMissing(xi37);
    nvar24 = ld nvar;
    check L898() else D268();
  D87():
    deopt 343 [i112, nvar4];
  D115():
    deopt 450 [i253, i254, c55, pi10];
  D118():
    deopt 459 [i255, i256, j18];
  D119():
    deopt 464 [i279, i280, facCol];
  D171():
    deopt 653 [i451, r304, r311];
  D172():
    deopt 656 [i454];
  D174():
    deopt 662 [i457];
  D239():
    deopt 910 [i532, r422];
  D240():
    deopt 913 [i535, rmax];
  D268():
    deopt 1013 [i583, nvar24];
  L68(i117, i118):
    i119 = `+`.1(i118, 1);
    c30 = `<`.1(l13, i119);
    if c30 then L458() else L87();
  L195(i541, r426):
    c140 = `is.object`(r426);
    if c140 then L847() else L848(i541, r426);
  L249():
    x6 = `[[`(s6, i610, NULL, TRUE);
    st j = x6;
    pi24 = ld pi;
    check L920() else D277();
  L457():
    nvar5 = force? nvar4;
    checkMissing(nvar5);
    r148 = seq_len(nvar5);
    goto L67(i112, r148);
  L535():
    pi11 = force? pi10;
    checkMissing(pi11);
    c61 = `is.object`(pi11);
    if c61 then L536() else L537(i253, i254, c55, pi11);
  L543():
    j19 = force? j18;
    checkMissing(j19);
    st jj = j19;
    goto L97(i255, i256);
  L545():
    facCol1 = force? facCol;
    checkMissing(facCol1);
    c70 = `is.object`(facCol1);
    if c70 then L546() else L547(i279, i280, facCol1);
  L678():
    goto L141(i451, r304, r311);
  L680():
    r313 = dyn stop2("numbers of columns of arguments do not match");
    check L681() else D173();
  L683():
    p26 = prom<V +>{
      clabs10 = ld clabs;
      clabs11 = force? clabs10;
      checkMissing(clabs11);
      return clabs11;
    };
    p27 = prom<V +>{
      nmi7 = ld nmi;
      nmi8 = force? nmi7;
      checkMissing(nmi8);
      return nmi8;
    };
    r317 = dyn match_names1(p26, p27);
    check L684() else D175();
  L837():
    goto L192(i532, r422);
  L839():
    rmax1 = force? rmax;
    checkMissing(rmax1);
    l66 = ld rn;
    length__ = ldf `length<-`;
    check L840() else D241();
  L843():
    vj = ld vj;
    check L845() else D243();
  L844():
    r425 = dyn base66(<sym vj>);
    goto L195(i538, r425);
  L898():
    nvar25 = force? nvar24;
    checkMissing(nvar25);
    rep_len = ldf rep_len in base;
    r475 = dyn rep_len(xi37, nvar25);
    check L899() else D269();
  L919():
    goto L202(i608);
  D173():
    deopt 658 [i454, r313];
  D175():
    deopt 665 [i457, r317];
  D241():
    deopt 916 [i535, rmax1, l66, rmax1];
  D243():
    deopt 924 [i538, vj];
  D269():
    deopt 1016 [i583, r475];
  D277():
    deopt 1045 [i608, i610, pi24];
  L87():
    x1 = `[[`(s1, i119, NULL, TRUE);
    st j = x1;
    value4 = ld value;
    check L459() else D88();
  L95(i271, i272, c65, dx37):
    st jj = dx37;
    is_na = ldf `is.na` in base;
    r204 = dyn is_na(dx37);
    check L540() else D117();
  L98(i287, i288, dx39):
    c71 = `as.logical`(dx39);
    if c71 then L550() else L99();
  L196(i545, dx98):
    st pj = dx98;
    rmax3 = ld rmax;
    check L850() else D245();
  L458():
    goto L88(i117, i119);
  L536():
    dr34 = tryDispatchBuiltin.1("[[", pi11);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L538() else L537(i253, i254, c55, dr34);
  L537(i267, i268, c63, pi13):
    j16 = ld j;
    check L539() else D116();
  L546():
    dr36 = tryDispatchBuiltin.1("[", facCol1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L548() else L547(i279, i280, dr36);
  L547(i283, i284, facCol3):
    jj = ld jj;
    check L549() else D120();
  L681():
    goto L143(i454);
  L684():
    st pi = r317;
    sym49 = ldf `is.null`;
    base49 = ldf `is.null` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L685() else L686();
  L840():
    r424 = dyn length__(l66, NULL, rmax1);
    check L841() else D242();
  L845():
    vj1 = force? vj;
    checkMissing(vj1);
    dim1 = ldf dim in base;
    r427 = dyn dim1(vj1);
    check L846() else D244();
  L847():
    dr90 = tryDispatchBuiltin.1("[", r426);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L849() else L848(i541, dr90);
  L848(i543, r429):
    __25 = ldf `[` in base;
    r430 = dyn __25(r429, 2);
    goto L196(i543, r430);
  L899():
    goto L212(i583, r475);
  L920():
    pi25 = force? pi24;
    checkMissing(pi25);
    c160 = `is.object`(pi25);
    if c160 then L921() else L922(i608, i610, pi25);
  D88():
    deopt 346 [i117, i119, value4];
  D116():
    deopt 452 [i267, i268, c63, pi13, j16];
  D117():
    deopt 457 [i271, i272, c65, r204];
  D120():
    deopt 466 [i283, i284, facCol3, jj];
  D242():
    deopt 918 [i535, rmax1, r424];
  D244():
    deopt 927 [i538, r427];
  D245():
    deopt 932 [i545, rmax3];
  L99():
    goto L117(i287, i288);
  L117(i387, i388):
    goto L90(i387, i388);
  L144(i460, r319):
    r320 = `!`(r319);
    c110 = `as.logical`(r320);
    if c110 then L688() else L145();
  L221(i621, i622, dx110):
    st jj = dx110;
    xi38 = ld xi;
    check L925() else D279();
  L459():
    value5 = force? value4;
    checkMissing(value5);
    c31 = `is.object`(value5);
    if c31 then L460() else L461(i117, i119, value5);
  L538():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L95(i253, i254, c55, dx36);
  L539():
    j17 = force? j16;
    __8 = ldf `[[` in base;
    r203 = dyn __8(pi13, j17);
    goto L95(i267, i268, c63, r203);
  L540():
    goto L94(i271, i272, c65, r204);
  L548():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L98(i279, i280, dx38);
  L549():
    jj1 = force? jj;
    __9 = ldf `[` in base;
    r205 = dyn __9(facCol3, jj1);
    goto L98(i283, i284, r205);
  L550():
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L551() else L552();
  L685():
    pi14 = ld pi;
    check L687() else D176();
  L686():
    r318 = dyn base49(<sym pi>);
    goto L144(i457, r318);
  L841():
    st rn = r424;
    goto L194(i535);
  L846():
    goto L195(i538, r427);
  L849():
    dx97 = getTryDispatchBuiltinValue(dr90);
    goto L196(i541, dx97);
  L850():
    rmax4 = force? rmax3;
    checkMissing(rmax4);
    pj = ld pj;
    check L851() else D246();
  L921():
    dr102 = tryDispatchBuiltin.1("[", pi25);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L923() else L922(i608, i610, dr102);
  L922(i617, i618, pi27):
    j35 = ld j;
    check L924() else D278();
  D176():
    deopt 668 [i457, pi14];
  D246():
    deopt 933 [i545, rmax4, pj];
  D278():
    deopt 1047 [i617, i618, pi27, j35];
  D279():
    deopt 1051 [i621, i622, xi38];
  L69(i130, i131, dx21):
    st xj = dx21;
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L464() else L465();
  L100(i297, i298, r207):
    c72 = `as.logical`(r207);
    if c72 then L556() else L101();
  L145():
    goto L139(i460, NULL);
  L460():
    dr18 = tryDispatchBuiltin.1("[[", value5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L462() else L461(i117, i119, dr18);
  L461(i126, i127, value7):
    j = ld j;
    check L463() else D89();
  L551():
    levels1 = ldf levels;
    check L553() else D121();
  L552():
    r206 = dyn base35(<lang `<-`(lij, levels(xij))>);
    goto L100(i287, i288, r206);
  L687():
    pi15 = force? pi14;
    checkMissing(pi15);
    c109 = `==`(pi15, NULL);
    goto L144(i457, c109);
  L688():
    pi16 = ld pi;
    check L689() else D177();
  L851():
    pj1 = force? pj;
    checkMissing(pj1);
    r431 = `*`(rmax4, pj1);
    l67 = ld vj;
    length__1 = ldf `length<-`;
    check L852() else D247();
  L923():
    dx109 = getTryDispatchBuiltinValue(dr102);
    goto L221(i608, i610, dx109);
  L924():
    j36 = force? j35;
    __31 = ldf `[` in base;
    r482 = dyn __31(pi27, j36);
    goto L221(i617, i618, r482);
  L925():
    xi39 = force? xi38;
    checkMissing(xi39);
    c161 = `is.object`(xi39);
    if c161 then L926() else L927(i621, i622, xi39);
  D89():
    deopt 348 [i126, i127, value7, j];
  D121():
    deopt 472 [i287, i288];
  D177():
    deopt 672 [i460, pi16];
  D247():
    deopt 937 [i545, r431, l67, r431];
  L70(i136, i137, r151):
    r154 = `!`(r151);
    c33 = `as.logical`(r154);
    if c33 then L468() else L71();
  L101():
    sym38 = ldf `is.character`;
    base38 = ldf `is.character` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L595() else L596();
  L113(i367, i368, r242):
    goto L117(i367, i368);
  L222(i629, i630, dx112):
    st xij = dx112;
    has_dim4 = ld `has.dim`;
    check L930() else D281();
  L462():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L69(i117, i119, dx20);
  L463():
    j1 = force? j;
    __5 = ldf `[[` in base;
    r149 = dyn __5(value7, j1);
    goto L69(i126, i127, r149);
  L464():
    levels = ldf levels;
    check L466() else D90();
  L465():
    r150 = dyn base28(<lang `<-`(lj, levels(xj))>);
    goto L70(i130, i131, r150);
  L553():
    p17 = prom<V +>{
      xij = ld xij;
      xij1 = force? xij;
      checkMissing(xij1);
      return xij1;
    };
    r209 = dyn levels1(p17);
    check L554() else D122();
  L556():
    unique = ldf unique;
    check L557() else D124();
  L689():
    pi17 = force? pi16;
    checkMissing(pi17);
    l48 = ld perm;
    c111 = `is.object`(l48);
    if c111 then L690() else L691(i460, pi17, l48);
  L852():
    r432 = dyn length__1(l67, NULL, r431);
    check L853() else D248();
  L926():
    dr104 = tryDispatchBuiltin.1("[[", xi39);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L928() else L927(i621, i622, dr104);
  L927(i625, i626, xi41):
    j37 = ld j;
    check L929() else D280();
  D90():
    deopt 354 [i130, i131];
  D122():
    deopt 474 [i287, i288, r209];
  D124():
    deopt 479 [i297, i298];
  D248():
    deopt 939 [i545, r431, r432];
  D280():
    deopt 1053 [i625, i626, xi41, j37];
  D281():
    deopt 1057 [i629, i630, has_dim4];
  L71():
    is_factor = ldf `is.factor`;
    check L475() else D94();
  L73(i150, i151, r156):
    st fac = r156;
    l17 = ld facCol;
    c35 = `is.object`(l17);
    if c35 then L477() else L478(i150, i151, r156, l17);
  L114(i373, i374, r244):
    c93 = `as.logical`(r244);
    if c93 then L598() else L115();
  L146(i466, pi21, dx72):
    st perm = dx72;
    goto L139(i466, pi21);
  L466():
    p14 = prom<V +>{
      xj = ld xj;
      xj1 = force? xj;
      checkMissing(xj1);
      return xj1;
    };
    r153 = dyn levels(p14);
    check L467() else D91();
  L468():
    lj = ld lj;
    check L469() else D92();
  L554():
    st lij = r209;
    length7 = ldf length in base;
    r210 = dyn length7(r209);
    check L555() else D123();
  L557():
    p18 = prom<V +>{
      sym36 = ldf c;
      base36 = ldf c in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L2() else L3();
    L0(r212):
      return r212;
    L2():
      all_levs = ld `all.levs`;
      all_levs1 = force? all_levs;
      checkMissing(all_levs1);
      c73 = `is.object`(all_levs1);
      if c73 then L4() else L5(all_levs1);
    L3():
      r211 = dyn base36(<lang `[[`(all.levs, jj)>, <sym lij>);
      goto L0(r211);
    L1(dx41):
      lij = ld lij;
      lij1 = force? lij;
      checkMissing(lij1);
      c74 = ldf c in base;
      r214 = dyn c74(dx41, lij1);
      goto L0(r214);
    L4():
      dr38 = tryDispatchBuiltin.1("[[", all_levs1);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L6() else L5(dr38);
    L5(all_levs3):
      jj2 = ld jj;
      jj3 = force? jj2;
      __10 = ldf `[[` in base;
      r213 = dyn __10(all_levs3, jj3);
      goto L1(r213);
    L6():
      dx40 = getTryDispatchBuiltinValue(dr38);
      goto L1(dx40);
    };
    r216 = dyn unique(p18);
    check L558() else D125();
  L595():
    xij4 = ld xij;
    check L597() else D138();
  L596():
    r243 = dyn base38(<sym xij>);
    goto L114(i297, i298, r243);
  L690():
    dr64 = tryDispatchBuiltin.0("[[<-", l48, pi17);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L692() else L691(i460, pi17, dr64);
  L691(i464, pi19, l50):
    i467 = ld i;
    check L693() else D178();
  L853():
    st vj = r432;
    array = ldf array;
    check L854() else D249();
  L928():
    dx111 = getTryDispatchBuiltinValue(dr104);
    goto L222(i621, i622, dx111);
  L929():
    j38 = force? j37;
    __32 = ldf `[[` in base;
    r483 = dyn __32(xi41, j38);
    goto L222(i625, i626, r483);
  L930():
    has_dim5 = force? has_dim4;
    checkMissing(has_dim5);
    c162 = `is.object`(has_dim5);
    if c162 then L931() else L932(i629, i630, has_dim5);
  D91():
    deopt 356 [i130, i131, r153];
  D92():
    deopt 360 [i136, i137, lj];
  D94():
    deopt 370 [i136, i137];
  D123():
    deopt 477 [i287, i288, r210];
  D125():
    deopt 481 [i297, i298, r216];
  D138():
    deopt 526 [i297, i298, xij4];
  D178():
    deopt 675 [i464, pi19, l50, pi17, i467];
  D249():
    deopt 942 [i545];
  L74(i158, i159, dx25):
    st facCol = dx25;
    fac = ld fac;
    check L481() else D97();
  L115():
    goto L113(i373, i374, NULL);
  L223(i637, i638, dx114):
    c163 = `as.logical`(dx114);
    if c163 then L935() else L224();
  L467():
    st lj = r153;
    c32 = `==`(r153, NULL);
    goto L70(i130, i131, c32);
  L469():
    lj1 = force? lj;
    checkMissing(lj1);
    l14 = ld `all.levs`;
    c34 = `is.object`(l14);
    if c34 then L470() else L471(i136, i137, lj1, l14);
  L475():
    p15 = prom<V +>{
      xj2 = ld xj;
      xj3 = force? xj2;
      checkMissing(xj3);
      return xj3;
    };
    r158 = dyn is_factor(p15);
    check L476() else D95();
  L477():
    dr22 = tryDispatchBuiltin.0("[<-", l17, r156);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L479() else L478(i150, i151, r156, dr22);
  L478(i154, i155, r160, l19):
    j4 = ld j;
    check L480() else D96();
  L555():
    goto L100(i287, i288, r210);
  L558():
    l30 = ld `all.levs`;
    c75 = `is.object`(l30);
    if c75 then L559() else L560(i297, i298, r216, l30);
  L597():
    xij5 = force? xij4;
    checkMissing(xij5);
    c92 = `is.character`(xij5);
    goto L114(i297, i298, c92);
  L598():
    unique1 = ldf unique;
    check L599() else D139();
  L692():
    dx71 = getTryDispatchBuiltinValue(dr64);
    goto L146(i460, pi17, dx71);
  L693():
    i468 = force? i467;
    ____9 = ldf `[[<-` in base;
    r321 = dyn ____9(l50, pi17, i468);
    goto L146(i464, pi19, r321);
  L854():
    p39 = prom<V +>{
      vj2 = ld vj;
      vj3 = force? vj2;
      checkMissing(vj3);
      return vj3;
    };
    p40 = prom<V +>{
      sym67 = ldf c;
      base67 = ldf c in base;
      guard67 = `==`.4(sym67, base67);
      if guard67 then L1() else L2();
    L0(r435):
      return r435;
    L1():
      rmax5 = ld rmax;
      rmax6 = force? rmax5;
      checkMissing(rmax6);
      pj2 = ld pj;
      pj3 = force? pj2;
      checkMissing(pj3);
      c141 = ldf c in base;
      r436 = dyn c141(rmax6, pj3);
      goto L0(r436);
    L2():
      r434 = dyn base67(<sym rmax>, <sym pj>);
      goto L0(r434);
    };
    p41 = prom<V +>{
      sym68 = ldf list;
      base68 = ldf list in base;
      guard68 = `==`.4(sym68, base68);
      if guard68 then L2() else L3();
    L0(r439):
      return r439;
    L2():
      rn2 = ld rn;
      rn3 = force? rn2;
      checkMissing(rn3);
      dn4 = ld dn;
      dn5 = force? dn4;
      checkMissing(dn5);
      c142 = `is.object`(dn5);
      if c142 then L4() else L5(dn5);
    L3():
      r438 = dyn base68(<sym rn>, <lang `[[`(dn, 2)>);
      goto L0(r438);
    L1(dx100):
      list4 = ldf list in base;
      r441 = dyn list4(rn3, dx100);
      goto L0(r441);
    L4():
      dr92 = tryDispatchBuiltin.1("[[", dn5);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L6() else L5(dr92);
    L5(dn7):
      __26 = ldf `[[` in base;
      r440 = dyn __26(dn7, 2);
      goto L1(r440);
    L6():
      dx99 = getTryDispatchBuiltinValue(dr92);
      goto L1(dx99);
    };
    r443 = dyn array(p39, p40, p41);
    check L855() else D250();
  L931():
    dr106 = tryDispatchBuiltin.1("[", has_dim5);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L933() else L932(i629, i630, dr106);
  L932(i633, i634, has_dim7):
    jj18 = ld jj;
    check L934() else D282();
  D95():
    deopt 372 [i136, i137, r158];
  D96():
    deopt 375 [i154, i155, r160, l19, r156, j4];
  D97():
    deopt 379 [i158, i159, fac];
  D139():
    deopt 530 [i373, i374];
  D250():
    deopt 946 [i545, r443];
  D282():
    deopt 1059 [i633, i634, has_dim7, jj18];
  L72(i148, i149, dx23):
    st `all.levs` = dx23;
    goto L73(i148, i149, TRUE);
  L102(i309, i310, dx43):
    st `all.levs` = dx43;
    ordCol3 = ld ordCol;
    check L563() else D127();
  L224():
    is_factor1 = ldf `is.factor`;
    check L983() else D301();
  L237(i721, i722):
    goto L220(i721, i722);
  L470():
    dr20 = tryDispatchBuiltin.0("[[<-", l14, lj1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L472() else L471(i136, i137, lj1, dr20);
  L471(i144, i145, lj3, l16):
    j2 = ld j;
    check L473() else D93();
  L476():
    goto L73(i136, i137, r158);
  L479():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L74(i150, i151, dx24);
  L480():
    j5 = force? j4;
    ___ = ldf `[<-` in base;
    r163 = dyn ___(l19, r156, j5);
    goto L74(i154, i155, r163);
  L481():
    fac1 = force? fac;
    checkMissing(fac1);
    c36 = `as.logical`(fac1);
    if c36 then L482() else L75();
  L559():
    dr40 = tryDispatchBuiltin.0("[[<-", l30, r216);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L561() else L560(i297, i298, r216, dr40);
  L560(i305, i306, r218, l32):
    jj4 = ld jj;
    check L562() else D126();
  L599():
    p20 = prom<V +>{
      sym39 = ldf c;
      base39 = ldf c in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L2() else L3();
    L0(r246):
      return r246;
    L2():
      all_levs4 = ld `all.levs`;
      all_levs5 = force? all_levs4;
      checkMissing(all_levs5);
      c94 = `is.object`(all_levs5);
      if c94 then L4() else L5(all_levs5);
    L3():
      r245 = dyn base39(<lang `[[`(all.levs, jj)>, <sym xij>);
      goto L0(r245);
    L1(dx53):
      xij6 = ld xij;
      xij7 = force? xij6;
      checkMissing(xij7);
      c95 = ldf c in base;
      r248 = dyn c95(dx53, xij7);
      goto L0(r248);
    L4():
      dr50 = tryDispatchBuiltin.1("[[", all_levs5);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L6() else L5(dr50);
    L5(all_levs7):
      jj14 = ld jj;
      jj15 = force? jj14;
      __13 = ldf `[[` in base;
      r247 = dyn __13(all_levs7, jj15);
      goto L1(r247);
    L6():
      dx52 = getTryDispatchBuiltinValue(dr50);
      goto L1(dx52);
    };
    r250 = dyn unique1(p20);
    check L600() else D140();
  L855():
    l68 = ld value;
    c143 = `is.object`(l68);
    if c143 then L856() else L857(i545, r443, l68);
  L933():
    dx113 = getTryDispatchBuiltinValue(dr106);
    goto L223(i629, i630, dx113);
  L934():
    jj19 = force? jj18;
    __33 = ldf `[` in base;
    r484 = dyn __33(has_dim7, jj19);
    goto L223(i633, i634, r484);
  L935():
    xij8 = ld xij;
    check L936() else D283();
  D93():
    deopt 363 [i144, i145, lj3, l16, lj1, j2];
  D126():
    deopt 483 [i305, i306, r218, l32, r216, jj4];
  D127():
    deopt 487 [i309, i310, ordCol3];
  D140():
    deopt 532 [i373, i374, r250];
  D283():
    deopt 1062 [i637, i638, xij8];
  D301():
    deopt 1129 [i637, i638];
  L75():
    goto L83(i158, i159);
  L83(i206, i207):
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L508() else L509();
  L197(i549, dx102):
    st value = dx102;
    goto L188(i549);
  L472():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L72(i136, i137, dx22);
  L473():
    j3 = force? j2;
    ____4 = ldf `[[<-` in base;
    r155 = dyn ____4(l16, lj1, j3);
    goto L72(i144, i145, r155);
  L482():
    is_ordered = ldf `is.ordered`;
    check L483() else D98();
  L561():
    dx42 = getTryDispatchBuiltinValue(dr40);
    goto L102(i297, i298, dx42);
  L562():
    jj5 = force? jj4;
    ____5 = ldf `[[<-` in base;
    r221 = dyn ____5(l32, r216, jj5);
    goto L102(i305, i306, r221);
  L563():
    ordCol4 = force? ordCol3;
    checkMissing(ordCol4);
    c76 = `is.object`(ordCol4);
    if c76 then L564() else L565(i309, i310, ordCol4);
  L600():
    l39 = ld `all.levs`;
    c96 = `is.object`(l39);
    if c96 then L601() else L602(i373, i374, r250, l39);
  L856():
    dr94 = tryDispatchBuiltin.0("[[<-", l68, r443);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L858() else L857(i545, r443, dr94);
  L857(i547, r445, l70):
    j33 = ld j;
    check L859() else D251();
  L936():
    xij9 = force? xij8;
    checkMissing(xij9);
    l73 = ld value;
    c164 = `is.object`(l73);
    if c164 then L937() else L938(i637, i638, xij9, l73, xij9, l73);
  L983():
    p48 = prom<V +>{
      xij32 = ld xij;
      xij33 = force? xij32;
      checkMissing(xij33);
      return xij33;
    };
    r528 = dyn is_factor1(p48);
    check L984() else D302();
  D98():
    deopt 382 [i158, i159];
  D251():
    deopt 948 [i547, r445, l70, r443, j33];
  D302():
    deopt 1131 [i637, i638, r528];
  L84(i212, i213, r184):
    r189 = `==`(r184, 2);
    l26 = ld `has.dim`;
    c51 = `is.object`(l26);
    if c51 then L515() else L516(i212, i213, r189, l26);
  L103(i317, i318, dx45):
    c77 = `as.logical`(dx45);
    if c77 then L568() else L104();
  L116(i385, i386, r254, dx55):
    st `all.levs` = dx55;
    goto L113(i385, i386, r254);
  L225(i649, i650, xij16, l79, xij17, dx116):
    c165 = `is.object`(dx116);
    if c165 then L941() else L942(i649, i650, xij16, l79, dx116);
  L483():
    p16 = prom<V +>{
      xj4 = ld xj;
      xj5 = force? xj4;
      checkMissing(xj5);
      return xj5;
    };
    r165 = dyn is_ordered(p16);
    check L484() else D99();
  L508():
    sym31 = ldf dim;
    base31 = ldf dim in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L510() else L511();
  L509():
    r183 = dyn base30(<lang dim(xj)>);
    goto L84(i206, i207, r183);
  L564():
    dr42 = tryDispatchBuiltin.1("[", ordCol4);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L566() else L565(i309, i310, dr42);
  L565(i313, i314, ordCol6):
    jj6 = ld jj;
    check L567() else D128();
  L601():
    dr52 = tryDispatchBuiltin.0("[[<-", l39, r250);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L603() else L602(i373, i374, r250, dr52);
  L602(i381, i382, r252, l41):
    jj16 = ld jj;
    check L604() else D141();
  L858():
    dx101 = getTryDispatchBuiltinValue(dr94);
    goto L197(i545, dx101);
  L859():
    j34 = force? j33;
    ____13 = ldf `[[<-` in base;
    r448 = dyn ____13(l70, r443, j34);
    goto L197(i547, r448);
  L937():
    dr108 = tryDispatchBuiltin.1("[[", l73);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L939() else L938(i637, i638, xij9, l73, xij9, dr108);
  L938(i645, i646, xij12, l76, xij13, l77):
    jj20 = ld jj;
    check L940() else D284();
  L984():
    c190 = `as.logical`(r528);
    if c190 then L985() else L238();
  D99():
    deopt 384 [i158, i159, r165];
  D128():
    deopt 489 [i313, i314, ordCol6, jj6];
  D141():
    deopt 534 [i381, i382, r252, l41, r250, jj16];
  D284():
    deopt 1066 [i645, i646, xij12, l76, xij13, l77, jj20];
  L85(i218, i219, r186):
    length6 = ldf length in base;
    r188 = dyn length6(r186);
    check L514() else D109();
  L86(i226, i227, dx33):
    st `has.dim` = dx33;
    goto L68(i226, i227);
  L104():
    goto L106(i317, i318);
  L106(i331, i332):
    smartX4 = ld smartX;
    check L576() else D132();
  L226(i657, i658, xij21, l83, dx120):
    c166 = `is.object`(l83);
    if c166 then L945() else L946(i657, i658, xij21, l83);
  L238():
    xij36 = ld xij;
    check L989() else D305();
  L239(i727, i728, r531):
    l99 = ld value;
    c191 = `is.object`(l99);
    if c191 then L990() else L991(i727, i728, r531, l99, r531, l99);
  L484():
    l20 = ld ordCol;
    c37 = `is.object`(l20);
    if c37 then L485() else L486(i158, i159, r165, l20);
  L510():
    xj6 = ld xj;
    check L512() else D107();
  L511():
    r185 = dyn base31(<sym xj>);
    goto L85(i206, i207, r185);
  L515():
    dr30 = tryDispatchBuiltin.0("[<-", l26, r189);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L517() else L516(i212, i213, r189, dr30);
  L516(i222, i223, r191, l28):
    j12 = ld j;
    check L518() else D110();
  L566():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L103(i309, i310, dx44);
  L567():
    jj7 = force? jj6;
    __11 = ldf `[` in base;
    r222 = dyn __11(ordCol6, jj7);
    goto L103(i313, i314, r222);
  L568():
    is_ordered1 = ldf `is.ordered`;
    check L569() else D129();
  L603():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L116(i373, i374, r250, dx54);
  L604():
    jj17 = force? jj16;
    ____6 = ldf `[[<-` in base;
    r255 = dyn ____6(l41, r250, jj17);
    goto L116(i381, i382, r252, r255);
  L939():
    dx115 = getTryDispatchBuiltinValue(dr108);
    goto L225(i637, i638, xij9, l73, xij9, dx115);
  L940():
    jj21 = force? jj20;
    __34 = ldf `[[` in base;
    r485 = dyn __34(l77, jj21);
    goto L225(i645, i646, xij12, l76, xij13, r485);
  L941():
    dr110 = tryDispatchBuiltin.0("[<-", dx116, xij17);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L943() else L942(i649, i650, xij16, l79, dr110);
  L942(i653, i654, xij19, l81, dx118):
    ri6 = ld ri;
    check L944() else D285();
  L985():
    as_vector1 = ldf `as.vector`;
    check L986() else D303();
  D107():
    deopt 418 [i206, i207, xj6];
  D109():
    deopt 423 [i218, i219, r188];
  D110():
    deopt 427 [i222, i223, r191, l28, r189, j12];
  D129():
    deopt 493 [i317, i318];
  D132():
    deopt 503 [i331, i332, smartX4];
  D285():
    deopt 1070 [i653, i654, xij19, l81, dx118, xij17, ri6];
  D303():
    deopt 1133 [i637, i638];
  D305():
    deopt 1136 [i637, i638, xij36];
  L76(i170, i171, dx27):
    st ordCol = dx27;
    smartX2 = ld smartX;
    check L489() else D101();
  L227(i665, i666, dx122):
    st value = dx122;
    sym75 = ldf `is.null`;
    base75 = ldf `is.null` in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L949() else L950();
  L240(i735, i736, r538, l105, r539, dx134):
    c192 = `is.object`(dx134);
    if c192 then L994() else L995(i735, i736, r538, l105, dx134);
  L485():
    dr24 = tryDispatchBuiltin.0("[<-", l20, r165);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L487() else L486(i158, i159, r165, dr24);
  L486(i166, i167, r167, l22):
    j6 = ld j;
    check L488() else D100();
  L512():
    xj7 = force? xj6;
    checkMissing(xj7);
    dim = ldf dim in base;
    r187 = dyn dim(xj7);
    check L513() else D108();
  L514():
    goto L84(i218, i219, r188);
  L517():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L86(i212, i213, dx32);
  L518():
    j13 = force? j12;
    ___3 = ldf `[<-` in base;
    r194 = dyn ___3(l28, r189, j13);
    goto L86(i222, i223, r194);
  L569():
    p19 = prom<V +>{
      xij2 = ld xij;
      xij3 = force? xij2;
      checkMissing(xij3);
      return xij3;
    };
    r224 = dyn is_ordered1(p19);
    check L570() else D130();
  L576():
    smartX5 = force? smartX4;
    checkMissing(smartX5);
    c79 = `as.logical`(smartX5);
    if c79 then L577() else L107(i331, i332, c79);
  L943():
    dx119 = getTryDispatchBuiltinValue(dr110);
    goto L226(i649, i650, xij16, l79, dx119);
  L944():
    ri7 = force? ri6;
    ___7 = ldf `[<-` in base;
    r486 = dyn ___7(dx116, ri7, <missing>, xij17);
    goto L226(i653, i654, xij19, l81, r486);
  L945():
    dr112 = tryDispatchBuiltin.0("[[<-", l83, dx120);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L947() else L946(i657, i658, xij21, dr112);
  L946(i661, i662, xij23, l85):
    jj22 = ld jj;
    check L948() else D286();
  L986():
    p49 = prom<V +>{
      xij34 = ld xij;
      xij35 = force? xij34;
      checkMissing(xij35);
      return xij35;
    };
    r530 = dyn as_vector1(p49);
    check L987() else D304();
  L989():
    xij37 = force? xij36;
    checkMissing(xij37);
    goto L239(i637, i638, xij37);
  L990():
    dr120 = tryDispatchBuiltin.1("[[", l99);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L992() else L991(i727, i728, r531, l99, r531, dr120);
  L991(i731, i732, r534, l102, r535, l103):
    jj28 = ld jj;
    check L993() else D306();
  D100():
    deopt 386 [i166, i167, r167, l22, r165, j6];
  D101():
    deopt 390 [i170, i171, smartX2];
  D108():
    deopt 421 [i206, i207, r187];
  D130():
    deopt 495 [i317, i318, r224];
  D286():
    deopt 1075 [i661, i662, xij23, l85, dx120, jj22];
  D304():
    deopt 1135 [i637, i638, r530];
  D306():
    deopt 1140 [i731, i732, r534, l102, r535, l103, jj28];
  L107(i335, i336, c81):
    c90 = `as.logical`(c81);
    if c90 then L584() else L109();
  L228(i671, i672, r489):
    r492 = `!`(r489);
    c168 = `as.logical`(r492);
    if c168 then L953() else L229(i671, i672, c168);
  L241(i743, i744, r544, l109, dx138):
    c193 = `is.object`(l109);
    if c193 then L998() else L999(i743, i744, r544, l109);
  L487():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L76(i158, i159, dx26);
  L488():
    j7 = force? j6;
    ___1 = ldf `[<-` in base;
    r170 = dyn ___1(l22, r165, j7);
    goto L76(i166, i167, r170);
  L489():
    smartX3 = force? smartX2;
    checkMissing(smartX3);
    c38 = `as.logical`(smartX3);
    if c38 then L490() else L77(i170, i171, c38);
  L513():
    goto L85(i206, i207, r187);
  L570():
    l33 = ld ordCol;
    c78 = `is.object`(l33);
    if c78 then L571() else L572(i317, i318, r224, l33);
  L577():
    NA_lev4 = ld `NA.lev`;
    check L578() else D133();
  L947():
    dx121 = getTryDispatchBuiltinValue(dr112);
    goto L227(i657, i658, dx121);
  L948():
    jj23 = force? jj22;
    ____14 = ldf `[[<-` in base;
    r487 = dyn ____14(l85, dx120, jj23);
    goto L227(i661, i662, r487);
  L949():
    rownames = ldf rownames;
    check L951() else D287();
  L950():
    r488 = dyn base75(<lang `<-`(r, rownames(xij))>);
    goto L228(i665, i666, r488);
  L987():
    goto L239(i637, i638, r530);
  L992():
    dx133 = getTryDispatchBuiltinValue(dr120);
    goto L240(i727, i728, r531, l99, r531, dx133);
  L993():
    jj29 = force? jj28;
    __36 = ldf `[[` in base;
    r540 = dyn __36(l103, jj29);
    goto L240(i731, i732, r534, l102, r535, r540);
  L994():
    dr122 = tryDispatchBuiltin.0("[<-", dx134, r539);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L996() else L995(i735, i736, r538, l105, dr122);
  L995(i739, i740, r542, l107, dx136):
    ri10 = ld ri;
    check L997() else D307();
  D133():
    deopt 505 [i331, i332, c79, NA_lev4];
  D287():
    deopt 1081 [i665, i666];
  D307():
    deopt 1144 [i739, i740, r542, l107, dx136, r539, ri10];
  L77(i174, i175, c40):
    c49 = `as.logical`(c40);
    if c49 then L497() else L79();
  L105(i329, i330, r228, dx47):
    st ordCol = dx47;
    goto L106(i329, i330);
  L109():
    goto L112(i335, i336, NULL);
  L112(i365, i366, r241):
    goto L113(i365, i366, r241);
  L229(i675, i676, c170):
    c186 = `as.logical`(c170);
    if c186 then L963() else L232();
  L242(i751, i752, dx140):
    st value = dx140;
    sym77 = ldf `is.null`;
    base77 = ldf `is.null` in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L1002() else L1003();
  L490():
    NA_lev = ld `NA.lev`;
    check L491() else D102();
  L571():
    dr44 = tryDispatchBuiltin.0("[<-", l33, r224);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L573() else L572(i317, i318, r224, dr44);
  L572(i325, i326, r226, l35):
    jj8 = ld jj;
    check L574() else D131();
  L578():
    NA_lev5 = force? NA_lev4;
    checkMissing(NA_lev5);
    c82 = `is.object`(NA_lev5);
    if c82 then L579() else L580(i331, i332, c79, NA_lev5);
  L584():
    sym37 = ldf anyNA;
    base37 = ldf anyNA in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L585() else L586();
  L951():
    p46 = prom<V +>{
      xij26 = ld xij;
      xij27 = force? xij26;
      checkMissing(xij27);
      return xij27;
    };
    r491 = dyn rownames(p46);
    check L952() else D288();
  L953():
    sym76 = ldf inherits;
    base76 = ldf inherits in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L954() else L955();
  L996():
    dx137 = getTryDispatchBuiltinValue(dr122);
    goto L241(i735, i736, r538, l105, dx137);
  L997():
    ri11 = force? ri10;
    ___9 = ldf `[<-` in base;
    r545 = dyn ___9(dx136, r539, ri11);
    goto L241(i739, i740, r542, l107, r545);
  L998():
    dr124 = tryDispatchBuiltin.0("[[<-", l109, dx138);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L1000() else L999(i743, i744, r544, dr124);
  L999(i747, i748, r547, l111):
    jj30 = ld jj;
    check L1001() else D308();
  D102():
    deopt 392 [i170, i171, c38, NA_lev];
  D131():
    deopt 497 [i325, i326, r226, l35, r224, jj8];
  D288():
    deopt 1083 [i665, i666, r491];
  D308():
    deopt 1147 [i747, i748, r547, l111, dx138, jj30];
  L79():
    goto L82(i174, i175, NULL);
  L82(i204, i205, r181):
    goto L83(i204, i205);
  L108(i343, i344, c86, dx49):
    r232 = `!`(dx49);
    c87 = `as.logical`(r232);
    c88 = `&&`(c86, c87);
    goto L107(i343, i344, c88);
  L110(i355, i356, r234):
    l36 = ld `NA.lev`;
    c91 = `is.object`(l36);
    if c91 then L589() else L590(i355, i356, r234, l36);
  L230(i681, i682, c173, r494):
    c174 = `as.logical`(r494);
    if c174 then L958() else L231(i681, i682, c173, c174);
  L232():
    goto L236(i675, i676, NULL);
  L236(i719, i720, r525):
    goto L237(i719, i720);
  L243(i757, i758, r552):
    r556 = `!`(r552);
    c195 = `as.logical`(r556);
    if c195 then L1008() else L245();
  L491():
    NA_lev1 = force? NA_lev;
    checkMissing(NA_lev1);
    c41 = `is.object`(NA_lev1);
    if c41 then L492() else L493(i170, i171, c38, NA_lev1);
  L497():
    sym29 = ldf anyNA;
    base29 = ldf anyNA in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L498() else L499();
  L573():
    dx46 = getTryDispatchBuiltinValue(dr44);
    goto L105(i317, i318, r224, dx46);
  L574():
    jj9 = force? jj8;
    ___4 = ldf `[<-` in base;
    r229 = dyn ___4(l35, r224, jj9);
    goto L105(i325, i326, r226, r229);
  L579():
    dr46 = tryDispatchBuiltin.1("[", NA_lev5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L581() else L580(i331, i332, c79, dr46);
  L580(i339, i340, c84, NA_lev7):
    jj10 = ld jj;
    check L582() else D134();
  L585():
    lij2 = ld lij;
    check L587() else D135();
  L586():
    r233 = dyn base37(<sym lij>);
    goto L110(i335, i336, r233);
  L952():
    st r = r491;
    c167 = `==`(r491, NULL);
    goto L228(i665, i666, c167);
  L954():
    xij28 = ld xij;
    check L956() else D289();
  L955():
    r493 = dyn base76(<sym xij>, "data.frame");
    goto L230(i671, i672, c168, r493);
  L963():
    r500 = ld r;
    check L964() else D293();
  L1000():
    dx139 = getTryDispatchBuiltinValue(dr124);
    goto L242(i743, i744, dx139);
  L1001():
    jj31 = force? jj30;
    ____16 = ldf `[[<-` in base;
    r550 = dyn ____16(l111, dx138, jj31);
    goto L242(i747, i748, r550);
  L1002():
    sym78 = ldf names;
    base78 = ldf names in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L1004() else L1005();
  L1003():
    r551 = dyn base77(<lang `<-`(nm, names(xij))>);
    goto L243(i751, i752, r551);
  D134():
    deopt 507 [i339, i340, c84, NA_lev7, jj10];
  D135():
    deopt 514 [i335, i336, lij2];
  D289():
    deopt 1089 [i671, i672, c168, xij28];
  D293():
    deopt 1104 [i675, i676, r500];
  L78(i182, i183, c45, dx29):
    r172 = `!`(dx29);
    c46 = `as.logical`(r172);
    c47 = `&&`(c45, c46);
    goto L77(i182, i183, c47);
  L80(i194, i195, r174):
    l23 = ld `NA.lev`;
    c50 = `is.object`(l23);
    if c50 then L502() else L503(i194, i195, r174, l23);
  L111(i363, i364, r239, dx51):
    st `NA.lev` = dx51;
    goto L112(i363, i364, r239);
  L231(i685, i686, c177, c178):
    r499 = `!`(c178);
    c183 = `as.logical`(r499);
    c184 = `&&`(c177, c183);
    goto L229(i685, i686, c184);
  L244(i763, i764, r554):
    st nm = r554;
    c194 = `==`(r554, NULL);
    goto L243(i763, i764, c194);
  L245():
    goto L237(i757, i758);
  L492():
    dr26 = tryDispatchBuiltin.1("[", NA_lev1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L494() else L493(i170, i171, c38, dr26);
  L493(i178, i179, c43, NA_lev3):
    j8 = ld j;
    check L495() else D103();
  L498():
    lj6 = ld lj;
    check L500() else D104();
  L499():
    r173 = dyn base29(<sym lj>);
    goto L80(i174, i175, r173);
  L581():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L108(i331, i332, c79, dx48);
  L582():
    jj11 = force? jj10;
    __12 = ldf `[` in base;
    r231 = dyn __12(NA_lev7, jj11);
    goto L108(i339, i340, c84, r231);
  L587():
    lij3 = force? lij2;
    checkMissing(lij3);
    anyNA1 = ldf anyNA in base;
    r235 = dyn anyNA1(lij3);
    check L588() else D136();
  L589():
    dr48 = tryDispatchBuiltin.0("[<-", l36, r234);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L591() else L590(i355, i356, r234, dr48);
  L590(i359, i360, r237, l38):
    jj12 = ld jj;
    check L592() else D137();
  L956():
    xij29 = force? xij28;
    checkMissing(xij29);
    inherits1 = ldf inherits in base;
    r495 = dyn inherits1(xij29, "data.frame", FALSE);
    check L957() else D290();
  L958():
    _row_names_info = ldf `.row_names_info`;
    check L959() else D291();
  L964():
    r501 = force? r500;
    checkMissing(r501);
    l86 = ld value;
    c187 = `is.object`(l86);
    if c187 then L965() else L966(i675, i676, r501, l86, r501, l86);
  L1004():
    xij38 = ld xij;
    check L1006() else D309();
  L1005():
    r553 = dyn base78(<sym xij>);
    goto L244(i751, i752, r553);
  L1008():
    nm = ld nm;
    check L1009() else D311();
  D103():
    deopt 394 [i178, i179, c43, NA_lev3, j8];
  D104():
    deopt 401 [i174, i175, lj6];
  D136():
    deopt 517 [i335, i336, r235];
  D137():
    deopt 519 [i359, i360, r237, l38, r234, jj12];
  D290():
    deopt 1094 [i671, i672, c168, r495];
  D291():
    deopt 1096 [i681, i682, c173, c174];
  D309():
    deopt 1154 [i751, i752, xij38];
  D311():
    deopt 1161 [i757, i758, nm];
  L81(i202, i203, r179, dx31):
    st `NA.lev` = dx31;
    goto L82(i202, i203, r179);
  L233(i701, i702, r508, l92, r509, dx124):
    rownames1 = ldf rownames;
    check L969() else D295();
  L494():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L78(i170, i171, c38, dx28);
  L495():
    j9 = force? j8;
    __6 = ldf `[` in base;
    r171 = dyn __6(NA_lev3, j9);
    goto L78(i178, i179, c43, r171);
  L500():
    lj7 = force? lj6;
    checkMissing(lj7);
    anyNA = ldf anyNA in base;
    r175 = dyn anyNA(lj7);
    check L501() else D105();
  L502():
    dr28 = tryDispatchBuiltin.0("[<-", l23, r174);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L504() else L503(i194, i195, r174, dr28);
  L503(i198, i199, r177, l25):
    j10 = ld j;
    check L505() else D106();
  L588():
    goto L110(i335, i336, r235);
  L591():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L111(i355, i356, r234, dx50);
  L592():
    jj13 = force? jj12;
    ___5 = ldf `[<-` in base;
    r240 = dyn ___5(l38, r234, jj13);
    goto L111(i359, i360, r237, r240);
  L957():
    goto L230(i671, i672, c168, r495);
  L959():
    p47 = prom<V +>{
      xij30 = ld xij;
      xij31 = force? xij30;
      checkMissing(xij31);
      return xij31;
    };
    r497 = dyn _row_names_info(p47);
    check L960() else D292();
  L965():
    dr114 = tryDispatchBuiltin.1("[[", l86);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L967() else L966(i675, i676, r501, l86, r501, dr114);
  L966(i697, i698, r504, l89, r505, l90):
    jj24 = ld jj;
    check L968() else D294();
  L1006():
    xij39 = force? xij38;
    checkMissing(xij39);
    names4 = ldf names in base;
    r555 = dyn names4(xij39);
    check L1007() else D310();
  L1009():
    nm1 = force? nm;
    checkMissing(nm1);
    l112 = ld value;
    c196 = `is.object`(l112);
    if c196 then L1010() else L1011(i757, i758, nm1, l112, nm1, l112);
  D105():
    deopt 404 [i174, i175, r175];
  D106():
    deopt 406 [i198, i199, r177, l25, r174, j10];
  D292():
    deopt 1098 [i681, i682, c173, c174, r497];
  D294():
    deopt 1108 [i697, i698, r504, l89, r505, l90, jj24];
  D295():
    deopt 1112 [i701, i702, r508, l92, dx124, r509];
  D310():
    deopt 1157 [i751, i752, r555];
  L246(i775, i776, nm8, l118, nm9, dx142):
    names5 = ldf names;
    check L1014() else D313();
  L501():
    goto L80(i174, i175, r175);
  L504():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L81(i194, i195, r174, dx30);
  L505():
    j11 = force? j10;
    ___2 = ldf `[<-` in base;
    r180 = dyn ___2(l25, r174, j11);
    goto L81(i198, i199, r177, r180);
  L960():
    r498 = `<=`(r497, 0.0);
    c179 = `as.logical`(r498);
    c180 = `&&`(c174, c179);
    goto L231(i681, i682, c173, c180);
  L967():
    dx123 = getTryDispatchBuiltinValue(dr114);
    goto L233(i675, i676, r501, l86, r501, dx123);
  L968():
    jj25 = force? jj24;
    __35 = ldf `[[` in base;
    r510 = dyn __35(l90, jj25);
    goto L233(i697, i698, r504, l89, r505, r510);
  L969():
    r511 = dyn rownames1(r509, NULL);
    check L970() else D296();
  L1007():
    goto L244(i751, i752, r555);
  L1010():
    dr126 = tryDispatchBuiltin.1("[[", l112);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L1012() else L1011(i757, i758, nm1, l112, nm1, dr126);
  L1011(i771, i772, nm4, l115, nm5, l116):
    jj32 = ld jj;
    check L1013() else D312();
  D296():
    deopt 1114 [i701, i702, r508, l92, dx124, r509, r511];
  D312():
    deopt 1165 [i771, i772, nm4, l115, nm5, l116, jj32];
  D313():
    deopt 1169 [i775, i776, nm8, l118, dx142, nm9];
  L970():
    c188 = `is.object`(r511);
    if c188 then L971() else L972(i701, i702, r508, l92, dx124, r511);
  L1012():
    dx141 = getTryDispatchBuiltinValue(dr126);
    goto L246(i757, i758, nm1, l112, nm1, dx141);
  L1013():
    jj33 = force? jj32;
    __37 = ldf `[[` in base;
    r557 = dyn __37(l116, jj33);
    goto L246(i771, i772, nm4, l115, nm5, r557);
  L1014():
    r558 = dyn names5(nm9, NULL);
    check L1015() else D314();
  D314():
    deopt 1171 [i775, i776, nm8, l118, dx142, nm9, r558];
  L234(i709, i710, r517, l96, dx129, dx130):
    rownames__ = ldf `rownames<-`;
    check L975() else D298();
  L971():
    dr116 = tryDispatchBuiltin.0("[<-", r511, r509);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L973() else L972(i701, i702, r508, l92, dx124, dr116);
  L972(i705, i706, r514, l94, dx126, r515):
    ri8 = ld ri;
    check L974() else D297();
  L1015():
    c197 = `is.object`(r558);
    if c197 then L1016() else L1017(i775, i776, nm8, l118, dx142, r558);
  D297():
    deopt 1116 [i705, i706, r514, l94, dx126, r515, r509, ri8];
  D298():
    deopt 1119 [i709, i710, r517, l96, dx129, dx130];
  L247(i783, i784, nm13, l122, dx147, dx148):
    names__1 = ldf `names<-`;
    check L1020() else D316();
  L973():
    dx128 = getTryDispatchBuiltinValue(dr116);
    goto L234(i701, i702, r508, l92, dx124, dx128);
  L974():
    ri9 = force? ri8;
    ___8 = ldf `[<-` in base;
    r518 = dyn ___8(r515, r509, ri9);
    goto L234(i705, i706, r514, l94, dx126, r518);
  L975():
    r519 = dyn rownames__(dx129, NULL, dx130);
    check L976() else D299();
  L1016():
    dr128 = tryDispatchBuiltin.0("[<-", r558, nm9);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L1018() else L1017(i775, i776, nm8, l118, dx142, dr128);
  L1017(i779, i780, nm11, l120, dx144, r560):
    ri12 = ld ri;
    check L1019() else D315();
  D299():
    deopt 1121 [i709, i710, r517, l96, r519];
  D315():
    deopt 1173 [i779, i780, nm11, l120, dx144, r560, nm9, ri12];
  D316():
    deopt 1176 [i783, i784, nm13, l122, dx147, dx148];
  L976():
    c189 = `is.object`(l96);
    if c189 then L977() else L978(i709, i710, r517, l96);
  L1018():
    dx146 = getTryDispatchBuiltinValue(dr128);
    goto L247(i775, i776, nm8, l118, dx142, dx146);
  L1019():
    ri13 = force? ri12;
    ___10 = ldf `[<-` in base;
    r561 = dyn ___10(r560, nm9, ri13);
    goto L247(i779, i780, nm11, l120, dx144, r561);
  L1020():
    r562 = dyn names__1(dx147, NULL, dx148);
    check L1021() else D317();
  D317():
    deopt 1178 [i783, i784, nm13, l122, r562];
  L235(i717, i718, r523, dx132):
    st value = dx132;
    goto L236(i717, i718, r523);
  L977():
    dr118 = tryDispatchBuiltin.0("[[<-", l96, r519);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L979() else L978(i709, i710, r517, dr118);
  L978(i713, i714, r521, l98):
    jj26 = ld jj;
    check L980() else D300();
  L1021():
    c198 = `is.object`(l122);
    if c198 then L1022() else L1023(i783, i784, nm13, l122);
  D300():
    deopt 1122 [i713, i714, r521, l98, r519, jj26];
  L248(i791, i792, nm17, dx150):
    st value = dx150;
    goto L237(i791, i792);
  L979():
    dx131 = getTryDispatchBuiltinValue(dr118);
    goto L235(i709, i710, r517, dx131);
  L980():
    jj27 = force? jj26;
    ____15 = ldf `[[<-` in base;
    r524 = dyn ____15(l98, r519, jj27);
    goto L235(i713, i714, r521, r524);
  L1022():
    dr130 = tryDispatchBuiltin.0("[[<-", l122, r562);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L1024() else L1023(i783, i784, nm13, dr130);
  L1023(i787, i788, nm15, l124):
    jj34 = ld jj;
    check L1025() else D318();
  D318():
    deopt 1179 [i787, i788, nm15, l124, r562, jj34];
  L1024():
    dx149 = getTryDispatchBuiltinValue(dr130);
    goto L248(i783, i784, nm13, dx149);
  L1025():
    jj35 = force? jj34;
    ____17 = ldf `[[<-` in base;
    r563 = dyn ____17(l124, r562, jj35);
    goto L248(i787, i788, nm15, r563);
  }
}
fun inner1810711213(clabs, nmi) {
  (reg clabs:*, reg nmi:*) -+> V { var clabs:*, var nmi:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg clabs1:*, reg clabs2:V, reg nmi1:*, reg nmi2:V, reg identical:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg nmi3:*, reg nmi4:V, reg length:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg r10:V, reg clabs3:*, reg clabs4:V, reg length1:cls, reg r11:V, reg r12:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c6:L, reg r14:V, reg _in_:cls, reg nmi5:*, reg nmi6:V, reg p:p(V +), reg clabs5:*, reg clabs6:V, reg p1:p(V +), reg r17:V, reg all:cls, reg r18:V, reg c7:L, reg c8:V, reg c10:L, reg pmatch:cls, reg nmi7:*, reg nmi8:V, reg p2:p(V +), reg clabs7:*, reg clabs8:V, reg p3:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg m:*, reg m1:V, reg r24:V, reg any:cls, reg r25:V, reg c11:L, reg stop:cls, reg r26:V, reg m2:*, reg m3:V, reg stop1:cls, reg r28:V |
    mkenv;
    st clabs = clabs;
    st nmi = nmi;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `as.logical`(r1);
    if c then L15() else L1();
  L10():
    clabs1 = ld clabs;
    check L12() else D0();
  L11():
    r = dyn base(<sym clabs>, <sym nmi>);
    goto L0(r);
  D0():
    deopt 2 [clabs1];
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L12():
    clabs2 = force? clabs1;
    checkMissing(clabs2);
    nmi1 = ld nmi;
    check L13() else D1();
  L15():
    popenv;
    return NULL;
  D1():
    deopt 4 [nmi1];
  L2(r4):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L13():
    nmi2 = force? nmi1;
    checkMissing(nmi2);
    identical = ldf identical in base;
    r2 = dyn identical(clabs2, nmi2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L14() else D2();
  L17():
    nmi3 = ld nmi;
    check L19() else D3();
  L18():
    r3 = dyn base1(<sym nmi>);
    goto L2(r3);
  D2():
    deopt 14 [r2];
  D3():
    deopt 19 [nmi3];
  L3(r9, r10):
    r12 = `==`(r9, r10);
    c1 = `as.logical`(r12);
    if c1 then L25() else L4(c1);
  L14():
    goto L0(r2);
  L19():
    nmi4 = force? nmi3;
    checkMissing(nmi4);
    length = ldf length in base;
    r5 = dyn length(nmi4);
    check L20() else D4();
  L21():
    clabs3 = ld clabs;
    check L23() else D5();
  L22():
    r8 = dyn base2(<sym clabs>);
    goto L3(r4, r8);
  D4():
    deopt 22 [r5];
  D5():
    deopt 24 [r4, clabs3];
  L4(c3):
    c10 = `as.logical`(c3);
    if c10 then L32() else L6();
  L20():
    goto L2(r5);
  L23():
    clabs4 = force? clabs3;
    checkMissing(clabs4);
    length1 = ldf length in base;
    r11 = dyn length1(clabs4);
    check L24() else D6();
  L25():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  D6():
    deopt 27 [r4, r11];
  L5(c6, r14):
    c7 = `as.logical`(r14);
    c8 = `&&`(c6, c7);
    goto L4(c8);
  L6():
    stop1 = ldf stop;
    check L45() else D17();
  L24():
    goto L3(r4, r11);
  L26():
    _in_ = ldf `%in%`;
    check L28() else D7();
  L27():
    r13 = dyn base3(<lang `%in%`(nmi, clabs)>);
    goto L5(c1, r13);
  L32():
    pmatch = ldf pmatch;
    check L33() else D10();
  D7():
    deopt 32 [c1];
  D10():
    deopt 40 [];
  D17():
    deopt 63 [];
  L28():
    p = prom<V +>{
      nmi5 = ld nmi;
      nmi6 = force? nmi5;
      checkMissing(nmi6);
      return nmi6;
    };
    p1 = prom<V +>{
      clabs5 = ld clabs;
      clabs6 = force? clabs5;
      checkMissing(clabs6);
      return clabs6;
    };
    r17 = dyn _in_(p, p1);
    check L29() else D8();
  L33():
    p2 = prom<V +>{
      nmi7 = ld nmi;
      nmi8 = force? nmi7;
      checkMissing(nmi8);
      return nmi8;
    };
    p3 = prom<V +>{
      clabs7 = ld clabs;
      clabs8 = force? clabs7;
      checkMissing(clabs8);
      return clabs8;
    };
    r21 = dyn pmatch(p2, p3, 0);
    check L34() else D11();
  L45():
    r28 = dyn stop1("names do not match previous names");
    check L46() else D18();
  D8():
    deopt 35 [c1, r17];
  D11():
    deopt 44 [r21];
  D18():
    deopt 65 [r28];
  L29():
    all = ldf all in base;
    r18 = dyn all(r17);
    check L30() else D9();
  L34():
    st m = r21;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L46():
    popenv;
    return r28;
  D9():
    deopt 37 [c1, r18];
  L7(r23):
    c11 = `as.logical`(r23);
    if c11 then L39() else L8();
  L30():
    goto L5(c1, r18);
  L35():
    m = ld m;
    check L37() else D12();
  L36():
    r22 = dyn base4(<lang `==`(m, 0)>);
    goto L7(r22);
  D12():
    deopt 48 [m];
  L8():
    goto L9();
  L9():
    m2 = ld m;
    check L43() else D16();
  L37():
    m1 = force? m;
    checkMissing(m1);
    r24 = `==`(m1, 0);
    any = ldf any in base;
    r25 = dyn any(r24);
    check L38() else D13();
  L39():
    stop = ldf stop;
    check L40() else D14();
  D13():
    deopt 53 [r25];
  D14():
    deopt 55 [];
  D16():
    deopt 60 [m2];
  L38():
    goto L7(r25);
  L40():
    r26 = dyn stop("names do not match previous names");
    check L41() else D15();
  L43():
    m3 = force? m2;
    checkMissing(m3);
    popenv;
    return m3;
  D15():
    deopt 57 [r26];
  L41():
    goto L9();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg _row_names_info:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg is_list:cls, reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg length:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x11:*, reg x12:V, reg length1:cls, reg r13:V |
    mkenv;
    st x = x;
    is_data_frame = ldf `is.data.frame`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    c = `as.logical`(r1);
    if c then L8() else L0();
  L0():
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L8():
    _row_names_info = ldf `.row_names_info`;
    check L9() else D2();
  D2():
    deopt 5 [];
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L16() else L2();
  L9():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn _row_names_info(p1, 2);
    check L10() else D3();
  L12():
    x5 = ld x;
    check L14() else D4();
  L13():
    r4 = dyn base(<sym x>);
    goto L1(r4);
  D3():
    deopt 8 [r3];
  D4():
    deopt 11 [x5];
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L10():
    popenv;
    return r3;
  L14():
    x6 = force? x5;
    checkMissing(x6);
    is_list = ldf `is.list` in base;
    r6 = dyn is_list(x6);
    check L15() else D5();
  L16():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  D5():
    deopt 14 [r6];
  L3(r8):
    popenv;
    return r8;
  L5(r12):
    popenv;
    return r12;
  L15():
    goto L1(r6);
  L17():
    x7 = ld x;
    check L19() else D6();
  L18():
    r7 = dyn base1(<lang `[[`(x, 1)>);
    goto L3(r7);
  L25():
    x11 = ld x;
    check L27() else D8();
  L26():
    r11 = dyn base2(<sym x>);
    goto L5(r11);
  D6():
    deopt 17 [x7];
  D8():
    deopt 26 [x11];
  L19():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.object`(x8);
    if c2 then L20() else L21(x8);
  L27():
    x12 = force? x11;
    checkMissing(x12);
    length1 = ldf length in base;
    r13 = dyn length1(x12);
    check L28() else D9();
  D9():
    deopt 29 [r13];
  L4(dx1):
    length = ldf length in base;
    r10 = dyn length(dx1);
    check L23() else D7();
  L20():
    dr = tryDispatchBuiltin.1("[[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(x10):
    __ = ldf `[[` in base;
    r9 = dyn __(x10, 1);
    goto L4(r9);
  L28():
    goto L5(r13);
  D7():
    deopt 23 [r10];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L23():
    goto L3(r10);
  }
}
fun inner1670334592(nmi, ri, ni, nrow) {
  (reg nmi:*, reg ri:*, reg ni:*, reg nrow:*) -+> V { var nmi:*, var ri:*, var ni:*, var nrow:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nmi1:*, reg nmi2:V, reg nzchar:cls, reg r2:V, reg c:L, reg autoRnms:*, reg autoRnms1:V, reg c1:L, reg ni1:*, reg ni2:V, reg r4:V, reg c2:L, reg character:cls, reg r5:V, reg ni3:*, reg ni4:V, reg r6:V, reg c3:L, reg paste:cls, reg nmi3:*, reg nmi4:V, reg p:p(V +), reg ri1:*, reg ri2:V, reg p1:p(V +), reg r9:V, reg nmi5:*, reg nmi6:V, reg autoRnms2:*, reg autoRnms3:V, reg c4:L, reg c6:V, reg nrow1:*, reg nrow2:V, reg r10:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg c15:L, reg r12:V, reg ri3:*, reg ri4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg c18:L, reg r14:V, reg ni5:*, reg ni6:V, reg r15:I, reg identical:cls, reg r16:V, reg c19:L, reg c20:V, reg c22:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg nrow3:*, reg nrow4:V, reg r21:V, reg ni7:*, reg ni8:V, reg seq_int:cls, reg r22:V, reg as_integer:cls, reg r23:V, reg autoRnms4:*, reg autoRnms5:V, reg c23:L, reg c25:V, reg nrow5:*, reg nrow6:V, reg r24:V, reg c26:L, reg c27:L, reg c28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c35:L, reg c36:L, reg r26:V, reg ri5:*, reg ri6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg c41:L, reg c42:L, reg r28:V, reg ni9:*, reg ni10:V, reg r29:I, reg identical1:cls, reg r30:V, reg r31:V, reg c43:L, reg c44:V, reg c47:L, reg c48:V, reg c50:L, reg ri7:*, reg ri8:V |
    mkenv;
    st nmi = nmi;
    st ri = ri;
    st ni = ni;
    st nrow = nrow;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    c = `as.logical`(r1);
    if c then L23() else L1();
  L19():
    nmi1 = ld nmi;
    check L21() else D0();
  L20():
    r = dyn base(<sym nmi>);
    goto L0(r);
  D0():
    deopt 2 [nmi1];
  L1():
    autoRnms2 = ld autoRnms;
    check L39() else D10();
  L21():
    nmi2 = force? nmi1;
    checkMissing(nmi2);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(nmi2);
    check L22() else D1();
  L23():
    autoRnms = ld autoRnms;
    check L24() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [autoRnms];
  D10():
    deopt 33 [autoRnms2];
  L22():
    goto L0(r2);
  L24():
    autoRnms1 = force? autoRnms;
    checkMissing(autoRnms1);
    c1 = `as.logical`(autoRnms1);
    if c1 then L25() else L2();
  L39():
    autoRnms3 = force? autoRnms2;
    checkMissing(autoRnms3);
    c4 = `as.logical`(autoRnms3);
    if c4 then L40() else L6(c4);
  L2():
    goto L3();
  L3():
    ni1 = ld ni;
    check L27() else D3();
  L6(c6):
    c10 = `as.logical`(c6);
    if c10 then L43() else L7(c10);
  L25():
    sst autoRnms = FALSE;
    goto L3();
  L40():
    nrow1 = ld nrow;
    check L41() else D11();
  D3():
    deopt 13 [ni1];
  D11():
    deopt 35 [c4, nrow1];
  L7(c12):
    c22 = `as.logical`(c12);
    if c22 then L52() else L10();
  L27():
    ni2 = force? ni1;
    checkMissing(ni2);
    r4 = `==`(ni2, 0);
    c2 = `as.logical`(r4);
    if c2 then L28() else L4();
  L41():
    nrow2 = force? nrow1;
    checkMissing(nrow2);
    r10 = `>`(nrow2, 0);
    c7 = `as.logical`(r10);
    c8 = `&&`(c4, c7);
    goto L6(c8);
  L43():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L4():
    ni3 = ld ni;
    check L32() else D6();
  L8(c15, r12):
    c19 = `as.logical`(r12);
    c20 = `&&`(c15, c19);
    goto L7(c20);
  L10():
    autoRnms4 = ld autoRnms;
    check L62() else D19();
  L28():
    character = ldf character;
    check L29() else D4();
  L44():
    ri3 = ld ri;
    check L46() else D12();
  L45():
    r11 = dyn base1(<sym ri>, <lang seq_len(ni)>);
    goto L8(c10, r11);
  L52():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  D4():
    deopt 18 [];
  D6():
    deopt 20 [ni3];
  D12():
    deopt 42 [c10, ri3];
  D19():
    deopt 74 [autoRnms4];
  L11(r18):
    popenv;
    return r18;
  L29():
    r5 = dyn character();
    check L30() else D5();
  L32():
    ni4 = force? ni3;
    checkMissing(ni4);
    r6 = `>`(ni4, 1);
    c3 = `as.logical`(r6);
    if c3 then L33() else L5();
  L46():
    ri4 = force? ri3;
    checkMissing(ri4);
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L53():
    sym4 = ldf `seq.int`;
    base4 = ldf `seq.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L54():
    r17 = dyn base3(<lang seq.int(from=`+`(nrow, 1), length.out=ni)>);
    goto L11(r17);
  L62():
    autoRnms5 = force? autoRnms4;
    checkMissing(autoRnms5);
    c23 = `as.logical`(autoRnms5);
    if c23 then L63() else L13(c23);
  D5():
    deopt 19 [r5];
  L5():
    nmi5 = ld nmi;
    check L37() else D9();
  L9(c18, r14):
    identical = ldf identical in base;
    r16 = dyn identical(ri4, r14, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L50() else D14();
  L12(r20):
    as_integer = ldf `as.integer` in base;
    r23 = dyn as_integer(r20);
    check L60() else D18();
  L13(c25):
    c50 = `as.logical`(c25);
    if c50 then L75() else L17();
  L30():
    popenv;
    return r5;
  L33():
    paste = ldf paste;
    check L34() else D7();
  L47():
    ni5 = ld ni;
    check L49() else D13();
  L48():
    r13 = dyn base2(<sym ni>);
    goto L9(c10, r13);
  L55():
    nrow3 = ld nrow;
    check L57() else D15();
  L56():
    r19 = dyn base4[from, `length.out`](<lang `+`(nrow, 1)>, <sym ni>);
    goto L12(r19);
  L63():
    nrow5 = ld nrow;
    check L64() else D20();
  D7():
    deopt 25 [];
  D9():
    deopt 31 [nmi5];
  D13():
    deopt 45 [c10, ni5];
  D14():
    deopt 56 [c18, r16];
  D15():
    deopt 62 [nrow3];
  D18():
    deopt 73 [r23];
  D20():
    deopt 76 [c23, nrow5];
  L17():
    goto L18();
  L18():
    ri7 = ld ri;
    check L77() else D24();
  L34():
    p = prom<V +>{
      nmi3 = ld nmi;
      nmi4 = force? nmi3;
      checkMissing(nmi4);
      return nmi4;
    };
    p1 = prom<V +>{
      ri1 = ld ri;
      ri2 = force? ri1;
      checkMissing(ri2);
      return ri2;
    };
    r9 = dyn paste[, , sep](p, p1, ".");
    check L35() else D8();
  L37():
    nmi6 = force? nmi5;
    checkMissing(nmi6);
    popenv;
    return nmi6;
  L49():
    ni6 = force? ni5;
    checkMissing(ni6);
    r15 = seq_len(ni6);
    goto L9(c10, r15);
  L50():
    goto L8(c18, r16);
  L57():
    nrow4 = force? nrow3;
    checkMissing(nrow4);
    r21 = `+`(nrow4, 1);
    ni7 = ld ni;
    check L58() else D16();
  L60():
    goto L11(r23);
  L64():
    nrow6 = force? nrow5;
    checkMissing(nrow6);
    r24 = `>`(nrow6, 0);
    c26 = `as.logical`(r24);
    if c26 then L14(c23, c26) else L65();
  L75():
    sst autoRnms = FALSE;
    goto L18();
  D8():
    deopt 30 [r9];
  D16():
    deopt 67 [ni7];
  D24():
    deopt 105 [ri7];
  L14(c27, c28):
    c47 = `as.logical`(c28);
    c48 = `&&`(c27, c47);
    goto L13(c48);
  L35():
    popenv;
    return r9;
  L58():
    ni8 = force? ni7;
    checkMissing(ni8);
    seq_int = ldf `seq.int` in base;
    r22 = dyn seq_int(r21, ni8);
    check L59() else D17();
  L65():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L77():
    ri8 = force? ri7;
    checkMissing(ri8);
    popenv;
    return ri8;
  D17():
    deopt 71 [r22];
  L15(c35, c36, r26):
    r31 = `!`(r26);
    c43 = `as.logical`(r31);
    c44 = `||`(c36, c43);
    goto L14(c35, c44);
  L59():
    goto L12(r22);
  L66():
    ri5 = ld ri;
    check L68() else D21();
  L67():
    r25 = dyn base5(<sym ri>, <lang seq_len(ni)>);
    goto L15(c23, c26, r25);
  D21():
    deopt 82 [c23, c26, ri5];
  L68():
    ri6 = force? ri5;
    checkMissing(ri6);
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L16(c41, c42, r28):
    identical1 = ldf identical in base;
    r30 = dyn identical1(ri6, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L72() else D23();
  L69():
    ni9 = ld ni;
    check L71() else D22();
  L70():
    r27 = dyn base6(<sym ni>);
    goto L16(c23, c26, r27);
  D22():
    deopt 85 [c23, c26, ni9];
  D23():
    deopt 96 [c41, c42, r30];
  L71():
    ni10 = force? ni9;
    checkMissing(ni10);
    r29 = seq_len(ni10);
    goto L16(c23, c26, r29);
  L72():
    goto L15(c41, c42, r30);
  }
}
fun inner678197094(j) {
  (reg j:*) -+> V { var j:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value:*, reg value1:V, reg c:L, reg value3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg j1:*, reg j2:V, reg __:cls, reg r2:V, reg inherits:cls, reg r3:V |
    mkenv;
    st j = j;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    value = ld value;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[[`(value, j)>, "data.frame");
    goto L0(r);
  D0():
    deopt 2 [value];
  L4():
    value1 = force? value;
    checkMissing(value1);
    c = `is.object`(value1);
    if c then L5() else L6(value1);
  L1(dx1):
    inherits = ldf inherits in base;
    r3 = dyn inherits(dx1, "data.frame", FALSE);
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[[", value1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(value3):
    j1 = ld j;
    check L8() else D1();
  D1():
    deopt 4 [value3, j1];
  D2():
    deopt 10 [r3];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    j2 = force? j1;
    __ = ldf `[[` in base;
    r2 = dyn __(value3, j2);
    goto L1(r2);
  L9():
    goto L0(r3);
  }
}