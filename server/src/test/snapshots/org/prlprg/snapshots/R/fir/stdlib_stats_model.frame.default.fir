fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner315197056;
    st `model.frame.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner315197056(formula, data, subset, `na.action`, `drop.unused.levels`, xlev, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg drop_unused_levels:*, reg xlev:*, reg ddd:dots) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var subset:*, reg subset_isMissing:L, reg subset_orDefault:*, var `na.action`:*, var `drop.unused.levels`:*, reg drop_unused_levels_isMissing:L, reg drop_unused_levels_orDefault:*, var xlev:*, reg xlev_isMissing:L, reg xlev_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg is_data_frame:cls, reg data1:*, reg data2:V, reg p:p(V +), reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg c8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c11:L, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c14:L, reg r9:V, reg substitute:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c17:L, reg r12:V, reg quote:cls, reg r13:V, reg identical:cls, reg r14:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg nrow:cls, reg data3:*, reg data4:V, reg p1:p(V +), reg r16:V, reg r17:V, reg c24:L, reg c25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg missing1:cls, reg r20:V, reg r21:V, reg c27:L, reg c29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg c32:L, reg r23:V, reg nargs:cls, reg r24:V, reg r25:V, reg c33:L, reg c34:V, reg c36:L, reg c38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg c41:L, reg r27:V, reg formula1:*, reg formula2:V, reg is_list:cls, reg r28:V, reg c42:L, reg c43:V, reg c45:L, reg c47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg c50:L, reg r30:V, reg formula3:*, reg formula4:V, reg c51:L, reg c53:L, reg formula6:V, reg dr:V, reg dc:L, reg dx:V, reg c55:L, reg dx1:V, reg r31:V, reg c56:V, reg r32:V, reg c57:L, reg c58:V, reg c60:L, reg m:*, reg m1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg missing2:cls, reg r37:V, reg r38:V, reg c61:L, reg c63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r39:V, reg c66:L, reg r40:V, reg nargs1:cls, reg r41:V, reg r42:V, reg c67:L, reg c68:V, reg c70:L, reg c72:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg c75:L, reg r44:V, reg formula7:*, reg formula8:V, reg is_list1:cls, reg r45:V, reg c76:L, reg c77:V, reg c79:L, reg c81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r46:V, reg c84:L, reg r47:V, reg _in_:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r48:V, reg r49:V, reg c85:cls, reg r50:V, reg p2:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r52:V, reg r53:V, reg formula9:*, reg formula10:V, reg names:cls, reg r54:V, reg p3:p(V +), reg r56:V, reg all:cls, reg r57:V, reg c86:L, reg c87:V, reg c89:L, reg formula11:*, reg formula12:V, reg c90:L, reg formula14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r58:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r59:V, reg r60:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r61:V, reg r62:V, reg c91:cls, reg r63:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r64:V, reg r65:V, reg fcall:*, reg fcall1:V, reg names1:cls, reg r66:V, reg match:cls, reg r67:V, reg fcall2:*, reg fcall3:V, reg c92:L, reg fcall5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r68:V, reg fcall8:V, reg r69:V, reg m2:*, reg m3:V, reg c93:cls, reg r70:V, reg __:cls, reg r71:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r72:V, reg r73:V, reg quote1:cls, reg r74:V, reg l:*, reg c94:L, reg r76:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r79:V, reg ____1:cls, reg environment:cls, reg formula15:*, reg formula16:V, reg c95:L, reg formula18:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r80:V, reg p4:p(V +), reg r82:V, reg p5:p(V +), reg parent_frame:cls, reg r84:V, reg p6:p(V +), reg r86:V, reg eval:cls, reg fcall9:*, reg fcall10:V, reg p7:p(V +), reg env:*, reg env1:V, reg p8:p(V +), reg r89:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r92:V, reg r93:V, reg missing3:cls, reg r94:V, reg c96:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r95:V, reg r96:V, reg missing4:cls, reg r97:V, reg r98:V, reg c97:L, reg c99:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r99:V, reg c102:L, reg r100:V, reg data5:*, reg data6:V, reg inherits:cls, reg r101:V, reg c103:L, reg c104:V, reg c106:L, reg c108:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r102:V, reg c111:L, reg r103:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r104:V, reg c114:L, reg r105:V, reg data7:*, reg data8:V, reg attr:cls, reg r106:V, reg length:cls, reg r107:V, reg c115:L, reg c116:V, reg c118:L, reg data9:*, reg data10:V, reg as_formula:cls, reg data11:*, reg data12:V, reg p9:p(V +), reg r111:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r113:V, reg r114:V, reg missing5:cls, reg r115:V, reg c119:L, reg c121:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r116:V, reg c124:L, reg r117:V, reg formula19:*, reg formula20:V, reg inherits1:cls, reg r118:V, reg c125:L, reg c126:V, reg c128:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r119:V, reg r120:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r121:V, reg r122:V, reg formula21:*, reg formula22:V, reg attr1:cls, reg r123:V, reg length1:cls, reg r124:V, reg c129:L, reg formula23:*, reg formula24:V, reg formula25:*, reg formula26:V, reg as_formula1:cls, reg data13:*, reg data14:V, reg p10:p(V +), reg r128:V, reg as_formula2:cls, reg formula27:*, reg formula28:V, reg p11:p(V +), reg r130:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r131:V, reg r132:V, reg missing6:cls, reg r133:V, reg c130:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r134:V, reg r135:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r136:V, reg r137:V, reg data15:*, reg data16:V, reg attr2:cls, reg r138:V, reg c131:V, reg r139:V, reg c132:L, reg c134:V, reg mode:cls, reg naa:*, reg naa1:V, reg p12:p(V +), reg r141:V, reg r142:V, reg c135:L, reg c136:V, reg c138:L, reg naa2:*, reg naa3:V, reg naa4:V, reg ____2:cls, reg getOption:cls, reg r143:V, reg p13:p(V +), reg na_fail:*, reg na_fail1:V, reg p14:p(V +), reg r146:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r147:V, reg r148:V, reg missing7:cls, reg r149:V, reg c139:L, reg environment1:cls, reg formula29:*, reg formula30:V, reg p15:p(V +), reg r151:V, reg is_data_frame1:cls, reg data17:*, reg data18:V, reg p16:p(V +), reg r154:V, reg r155:V, reg c140:L, reg c142:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r156:V, reg c145:L, reg r157:V, reg data19:*, reg data20:V, reg is_environment:cls, reg r158:V, reg r159:V, reg c146:L, reg c147:V, reg c149:L, reg c151:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r160:V, reg c154:L, reg r161:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r162:V, reg c157:L, reg r163:V, reg data21:*, reg data22:V, reg attr3:cls, reg r164:V, reg c158:V, reg r165:V, reg c159:L, reg c160:V, reg c162:L, reg as_data_frame:cls, reg data23:*, reg data24:V, reg p17:p(V +), reg r167:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r168:V, reg r169:V, reg data25:*, reg data26:V, reg is_array:cls, reg r170:V, reg c163:L, reg stop:cls, reg r171:V, reg is_data_frame2:cls, reg data27:*, reg data28:V, reg p18:p(V +), reg r173:V, reg r174:V, reg c164:L, reg c166:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r175:V, reg c169:L, reg r176:V, reg data29:*, reg data30:V, reg is_environment1:cls, reg r177:V, reg r178:V, reg c170:L, reg c171:V, reg c173:L, reg c175:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r179:V, reg c178:L, reg r180:V, reg data31:*, reg data32:V, reg is_list2:cls, reg r181:V, reg r182:V, reg c179:L, reg c180:V, reg c182:L, reg c184:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r183:V, reg c187:L, reg r184:V, reg data33:*, reg data34:V, reg c188:V, reg r185:V, reg c189:L, reg c190:V, reg c192:L, reg stop1:cls, reg r186:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r188:V, reg r189:V, reg formula31:*, reg formula32:V, reg inherits2:cls, reg r190:V, reg r191:V, reg c193:L, reg terms:cls, reg formula33:*, reg formula34:V, reg p19:p(V +), reg data35:*, reg data36:V, reg p20:p(V +), reg r194:V, reg environment2:cls, reg formula35:*, reg formula36:V, reg p21:p(V +), reg r197:V, reg _row_names_info:cls, reg data37:*, reg data38:V, reg p22:p(V +), reg r199:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r200:V, reg r201:V, reg formula37:*, reg formula38:V, reg attr4:cls, reg r202:V, reg ____3:cls, reg sym41:cls, reg base41:cls, reg guard41:L, reg r203:V, reg r204:V, reg formula39:*, reg formula40:V, reg attr5:cls, reg r205:V, reg p23:p(V +), reg vars:*, reg vars1:V, reg p24:p(V +), reg r208:V, reg vapply:cls, reg vars2:*, reg vars3:V, reg p25:p(V +), reg deparse2:*, reg deparse3:V, reg p26:p(V +), reg r211:V, reg c194:L, reg r213:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r214:V, reg eval1:cls, reg predvars:*, reg predvars1:V, reg p27:p(V +), reg data39:*, reg data40:V, reg p28:p(V +), reg env2:*, reg env3:V, reg p29:p(V +), reg r218:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r219:V, reg r220:V, reg formula41:*, reg formula42:V, reg attr6:cls, reg r221:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r222:V, reg r223:V, reg rownames:*, reg rownames1:V, reg c195:V, reg c196:L, reg c198:V, reg resp:*, reg resp1:V, reg r224:V, reg c199:L, reg c200:V, reg c202:L, reg variables:*, reg variables1:V, reg c203:L, reg variables3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg resp2:*, reg resp3:V, reg __2:cls, reg r225:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r226:V, reg r227:V, reg lhs:*, reg lhs1:V, reg is_matrix:cls, reg r228:V, reg c204:L, reg rownames2:cls, reg lhs2:*, reg lhs3:V, reg p30:p(V +), reg r230:V, reg r231:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r232:V, reg lhs4:*, reg lhs5:V, reg names2:cls, reg r233:V, reg possible_newdata:*, reg possible_newdata1:V, reg c205:L, reg c207:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r235:V, reg c210:L, reg r236:V, reg variables4:*, reg variables5:V, reg length2:cls, reg r237:V, reg c211:L, reg c212:V, reg c214:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r238:V, reg r239:V, reg sapply:cls, reg variables6:*, reg variables7:V, reg p31:p(V +), reg NROW:*, reg NROW1:V, reg p32:p(V +), reg r242:V, reg max:cls, reg r243:V, reg nr2:*, reg nr3:V, reg nr4:*, reg nr5:V, reg r244:V, reg c215:L, reg warning:cls, reg sprintf:cls, reg paste0:cls, reg ngettext:cls, reg nr6:*, reg nr7:V, reg p33:p(V +), reg r246:V, reg p34:p(V +), reg ngettext1:cls, reg nr8:*, reg nr9:V, reg p35:p(V +), reg r249:V, reg p36:p(V +), reg r251:V, reg p37:p(V +), reg nr10:*, reg nr11:V, reg p38:p(V +), reg nr12:*, reg nr13:V, reg p39:p(V +), reg r255:V, reg p40:p(V +), reg r257:V, reg r258:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r260:V, reg r261:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r262:V, reg r263:V, reg formula43:*, reg formula44:V, reg attr7:cls, reg r264:V, reg c216:V, reg c217:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r265:V, reg r266:V, reg varnames:*, reg varnames1:V, reg r267:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c218:L, reg x:V, reg makepredictcall:cls, reg variables8:*, reg variables9:V, reg c219:L, reg variables11:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i5:*, reg i6:V, reg __3:cls, reg r268:V, reg p41:p(V +), reg vars4:*, reg vars5:V, reg c220:L, reg vars7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg i7:*, reg i8:V, reg r270:V, reg __4:cls, reg r271:V, reg p42:p(V +), reg r273:V, reg l4:*, reg c221:L, reg i10:I, reg r275:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i12:I, reg dx19:V, reg i13:*, reg i14:V, reg r278:V, reg ____4:cls, reg r279:V, reg predvars2:*, reg predvars3:V, reg l7:*, reg attr__:cls, reg r280:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r281:V, reg r282:V, reg substitute1:cls, reg r283:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r284:V, reg r285:V, reg extras:*, reg extras1:V, reg c222:L, reg extras3:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __5:cls, reg r286:V, reg names3:cls, reg r287:V, reg eval2:cls, reg extras4:*, reg extras5:V, reg p43:p(V +), reg data41:*, reg data42:V, reg p44:p(V +), reg env4:*, reg env5:V, reg p45:p(V +), reg r291:V, reg eval3:cls, reg sym53:cls, reg base53:cls, reg guard53:L, reg r292:V, reg r293:V, reg substitute2:cls, reg r294:V, reg p46:p(V +), reg data43:*, reg data44:V, reg p47:p(V +), reg env6:*, reg env7:V, reg p48:p(V +), reg r298:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r299:V, reg r300:V, reg C_modelframe:*, reg C_modelframe1:V, reg formula45:*, reg formula46:V, reg rownames3:*, reg rownames4:V, reg variables12:*, reg variables13:V, reg varnames2:*, reg varnames3:V, reg extras6:*, reg extras7:V, reg extranames:*, reg extranames1:V, reg subset1:*, reg subset2:V, reg na_action1:*, reg na_action2:V, reg _External2:cls, reg r301:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r302:V, reg r303:V, reg xlev1:*, reg xlev2:V, reg length3:cls, reg r304:V, reg c223:L, reg sym56:cls, reg base56:cls, reg guard56:L, reg r305:V, reg r306:V, reg xlev3:*, reg xlev4:V, reg names4:cls, reg r307:V, reg s1:V, reg l8:I, reg i15:I, reg i16:I, reg i17:I, reg c224:L, reg x1:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r308:V, reg i22:I, reg r309:V, reg xlev5:*, reg xlev6:V, reg c225:L, reg i24:I, reg xlev8:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i26:I, reg dx23:V, reg nm:*, reg nm1:V, reg __6:cls, reg r310:V, reg c226:V, reg r311:V, reg c227:L, reg data45:*, reg data46:V, reg c228:L, reg i30:I, reg data48:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i32:I, reg dx25:V, reg nm2:*, reg nm3:V, reg __7:cls, reg r312:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r313:V, reg i35:I, reg r314:V, reg xi:*, reg xi1:V, reg c229:L, reg c230:L, reg as_factor:cls, reg xi2:*, reg xi3:V, reg p49:p(V +), reg r316:V, reg i38:I, reg is_factor:cls, reg xi4:*, reg xi5:V, reg p50:p(V +), reg r319:V, reg r320:V, reg c231:L, reg i39:I, reg c232:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r321:V, reg i43:I, reg c236:L, reg r322:V, reg levels:cls, reg xi6:*, reg xi7:V, reg p51:p(V +), reg r324:V, reg c237:V, reg c238:L, reg c239:V, reg c241:L, reg warning1:cls, reg gettextf:cls, reg nm4:*, reg nm5:V, reg p52:p(V +), reg r326:V, reg p53:p(V +), reg r328:V, reg i47:I, reg r329:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r330:V, reg i50:I, reg r331:V, reg xi8:*, reg xi9:V, reg attr8:cls, reg r332:V, reg xi10:*, reg xi11:V, reg c242:L, reg i52:I, reg dr26:V, reg dc13:L, reg dx26:V, reg i54:I, reg dx27:V, reg __8:cls, reg r333:V, reg levels1:cls, reg xi14:*, reg xi15:V, reg p54:p(V +), reg r335:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r336:V, reg i57:I, reg r337:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r338:V, reg i60:I, reg r339:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r340:V, reg i63:I, reg r341:V, reg nxl:*, reg nxl1:V, reg xl:*, reg xl1:V, reg match1:cls, reg r342:V, reg is_na:cls, reg r343:V, reg any:cls, reg r344:V, reg c243:L, reg stop2:cls, reg sprintf1:cls, reg ngettext2:cls, reg sym64:cls, reg base64:cls, reg guard64:L, reg r345:V, reg r346:V, reg m4:*, reg m5:V, reg length4:cls, reg r347:V, reg p55:p(V +), reg r349:V, reg p56:p(V +), reg nm6:*, reg nm7:V, reg p57:p(V +), reg paste1:cls, reg nxl2:*, reg nxl3:V, reg c244:L, reg nxl5:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg m6:*, reg m7:V, reg __9:cls, reg r352:V, reg p58:p(V +), reg r354:V, reg p59:p(V +), reg r356:V, reg p60:p(V +), reg r358:V, reg i66:I, reg factor:cls, reg xi16:*, reg xi17:V, reg p61:p(V +), reg xl2:*, reg xl3:V, reg p62:p(V +), reg r362:V, reg l9:*, reg c245:L, reg i68:I, reg r364:V, reg l11:*, reg dr30:V, reg dc15:L, reg dx30:V, reg i70:I, reg dx31:V, reg nm8:*, reg nm9:V, reg ____5:cls, reg r367:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r368:V, reg i73:I, reg r369:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r370:V, reg i76:I, reg r371:V, reg data49:*, reg data50:V, reg c246:L, reg i78:I, reg data52:V, reg dr32:V, reg dc16:L, reg dx32:V, reg i80:I, reg dx33:V, reg nm10:*, reg nm11:V, reg __10:cls, reg r372:V, reg attr9:cls, reg r373:V, reg ctr:*, reg ctr1:V, reg identical1:cls, reg r374:V, reg r375:V, reg c247:L, reg warning2:cls, reg gettextf1:cls, reg nm12:*, reg nm13:V, reg p63:p(V +), reg r377:V, reg p64:p(V +), reg r379:V, reg i83:I, reg drop_unused_levels1:*, reg drop_unused_levels2:V, reg c248:L, reg sym67:cls, reg base67:cls, reg guard67:L, reg r381:V, reg r382:V, reg data53:*, reg data54:V, reg names5:cls, reg r383:V, reg s2:V, reg l12:I, reg i85:I, reg i86:I, reg i87:I, reg c249:L, reg x2:V, reg data55:*, reg data56:V, reg c250:L, reg i91:I, reg data58:V, reg dr34:V, reg dc17:L, reg dx34:V, reg i93:I, reg dx35:V, reg nm14:*, reg nm15:V, reg __11:cls, reg r384:V, reg is_factor1:cls, reg x3:*, reg x4:V, reg p65:p(V +), reg r386:V, reg c251:L, reg i95:I, reg c253:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r387:V, reg i98:I, reg c256:L, reg r388:V, reg unique:cls, reg x5:*, reg x6:V, reg c257:L, reg x8:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r389:V, reg x11:V, reg r390:V, reg x12:*, reg x13:V, reg is_na1:cls, reg r391:V, reg r392:V, reg __12:cls, reg r393:V, reg p66:p(V +), reg r395:V, reg length5:cls, reg r396:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r399:V, reg i101:I, reg c260:L, reg r400:V, reg r401:V, reg levels2:cls, reg x14:*, reg x15:V, reg p67:p(V +), reg r403:V, reg length6:cls, reg r404:V, reg r405:V, reg c261:L, reg c262:V, reg c264:L, reg sym71:cls, reg base71:cls, reg guard71:L, reg r406:V, reg i107:I, reg r407:V, reg x16:*, reg x17:V, reg attr10:cls, reg r408:V, reg x18:*, reg x19:V, reg c265:L, reg i109:I, reg dr38:V, reg dc19:L, reg dx38:V, reg i111:I, reg dx39:V, reg __13:cls, reg r409:V, reg l13:*, reg c266:L, reg i113:I, reg dx41:V, reg l15:*, reg dr40:V, reg dc20:L, reg dx43:V, reg i115:I, reg dx45:V, reg nm16:*, reg nm17:V, reg ____6:cls, reg r410:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r411:V, reg i118:I, reg r412:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r413:V, reg i121:I, reg r414:V, reg data59:*, reg data60:V, reg c267:L, reg i123:I, reg data62:V, reg dr42:V, reg dc21:L, reg dx46:V, reg i125:I, reg dx47:V, reg nm18:*, reg nm19:V, reg __14:cls, reg r415:V, reg attr11:cls, reg r416:V, reg ctr2:*, reg ctr3:V, reg identical2:cls, reg r417:V, reg r418:V, reg c268:L, reg warning3:cls, reg gettextf2:cls, reg nm20:*, reg nm21:V, reg p68:p(V +), reg r420:V, reg p69:p(V +), reg r422:V, reg i128:I, reg r423:V, reg i129:I, reg vapply1:cls, reg data63:*, reg data64:V, reg p70:p(V +), reg _MFclass:*, reg _MFclass1:V, reg p71:p(V +), reg r427:V, reg l16:*, reg attr__1:cls, reg r428:V, reg formula47:*, reg formula48:V, reg l17:*, reg attr__2:cls, reg r429:V, reg data65:*, reg data66:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    subset_isMissing = missing.0(subset);
    if subset_isMissing then L1(NULL) else L1(subset);
  L1(subset_orDefault):
    st subset = subset_orDefault;
    st `na.action` = na_action;
    drop_unused_levels_isMissing = missing.0(drop_unused_levels);
    if drop_unused_levels_isMissing then L2(FALSE) else L2(drop_unused_levels);
  L2(drop_unused_levels_orDefault):
    st `drop.unused.levels` = drop_unused_levels_orDefault;
    xlev_isMissing = missing.0(xlev);
    if xlev_isMissing then L3(NULL) else L3(xlev);
  L3(xlev_orDefault):
    st xlev = xlev_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L163() else L164();
  L4(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L165() else L5(c);
  L163():
    missing = ldf missing in base;
    r2 = dyn missing(<sym data>);
    goto L4(r2);
  L164():
    r = dyn base(<sym data>);
    goto L4(r);
  L5(c2):
    c6 = `as.logical`(c2);
    if c6 then L169() else L6(c6);
  L165():
    is_data_frame = ldf `is.data.frame`;
    check L166() else D0();
  D0():
    deopt 5 [c];
  L6(c8):
    c21 = `as.logical`(c8);
    if c21 then L178() else L10(c21);
  L166():
    p = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r5 = dyn is_data_frame(p);
    check L167() else D1();
  L169():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L170() else L171();
  D1():
    deopt 7 [c, r5];
  L7(c11, r7):
    c18 = `as.logical`(r7);
    c19 = `&&`(c11, c18);
    goto L6(c19);
  L10(c23):
    st possible_newdata = c23;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L182() else L183();
  L167():
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L5(c4);
  L170():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L172() else L173();
  L171():
    r6 = dyn base1(<lang substitute(data)>, <lang quote(newdata)>);
    goto L7(c6, r6);
  L178():
    nrow = ldf nrow;
    check L179() else D3();
  D3():
    deopt 28 [c21];
  L8(c14, r9):
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L174() else L175();
  L11(r19):
    r21 = `!`(r19);
    c27 = `as.logical`(r21);
    if c27 then L184() else L12(c27);
  L172():
    substitute = ldf substitute in base;
    r10 = dyn substitute(<sym data>);
    goto L8(c6, r10);
  L173():
    r8 = dyn base2(<sym data>);
    goto L8(c6, r8);
  L179():
    p1 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r16 = dyn nrow(p1);
    check L180() else D4();
  L182():
    missing1 = ldf missing in base;
    r20 = dyn missing1(<sym formula>);
    goto L11(r20);
  L183():
    r18 = dyn base4(<sym formula>);
    goto L11(r18);
  D4():
    deopt 30 [c21, r16];
  L9(c17, r12):
    identical = ldf identical in base;
    r14 = dyn identical(r9, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L176() else D2();
  L12(c29):
    c36 = `as.logical`(c29);
    if c36 then L189() else L14(c36);
  L174():
    quote = ldf quote in base;
    r13 = dyn quote(<sym newdata>);
    goto L9(c14, r13);
  L175():
    r11 = dyn base3(<sym newdata>);
    goto L9(c14, r11);
  L180():
    st nr = r16;
    r17 = `>`(r16, 0.0);
    c24 = `as.logical`(r17);
    c25 = `&&`(c21, c24);
    goto L10(c25);
  L184():
    sym5 = ldf nargs;
    base5 = ldf nargs in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L185() else L186();
  D2():
    deopt 25 [c17, r14];
  L13(c32, r23):
    r25 = `==`(r23, 1.0);
    c33 = `as.logical`(r25);
    c34 = `&&`(c32, c33);
    goto L12(c34);
  L14(c38):
    c45 = `as.logical`(c38);
    if c45 then L195() else L16(c45);
  L176():
    goto L7(c17, r14);
  L185():
    nargs = ldf nargs in base;
    r24 = dyn nargs();
    check L187() else D5();
  L186():
    r22 = dyn base5();
    goto L13(c27, r22);
  L189():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L190() else L191();
  D5():
    deopt 43 [c27, r24];
  L15(c41, r27):
    c42 = `as.logical`(r27);
    c43 = `&&`(c41, c42);
    goto L14(c43);
  L16(c47):
    c60 = `as.logical`(c47);
    if c60 then L204() else L18();
  L187():
    goto L13(c27, r24);
  L190():
    formula1 = ld formula;
    check L192() else D6();
  L191():
    r26 = dyn base6(<sym formula>);
    goto L15(c36, r26);
  L195():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L196() else L197();
  D6():
    deopt 49 [c36, formula1];
  L17(c50, r30):
    r32 = `!`(r30);
    c57 = `as.logical`(r32);
    c58 = `&&`(c50, c57);
    goto L16(c58);
  L18():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L208() else L209();
  L192():
    formula2 = force? formula1;
    checkMissing(formula2);
    is_list = ldf `is.list` in base;
    r28 = dyn is_list(formula2);
    check L193() else D7();
  L196():
    formula3 = ld formula;
    check L198() else D8();
  L197():
    r29 = dyn base7(<lang `<-`(m, `$`(formula, model))>);
    goto L17(c45, r29);
  L204():
    m = ld m;
    check L205() else D9();
  D7():
    deopt 52 [c36, r28];
  D8():
    deopt 55 [c45, formula3];
  D9():
    deopt 62 [m];
  L20(r36):
    r38 = `!`(r36);
    c61 = `as.logical`(r38);
    if c61 then L210() else L21(c61);
  L193():
    goto L15(c36, r28);
  L198():
    formula4 = force? formula3;
    checkMissing(formula4);
    c51 = `is.object`(formula4);
    if c51 then L200() else L201(c45, formula4);
  L205():
    m1 = force? m;
    checkMissing(m1);
    popenv;
    return m1;
  L208():
    missing2 = ldf missing in base;
    r37 = dyn missing2(<sym formula>);
    goto L20(r37);
  L209():
    r35 = dyn base8(<sym formula>);
    goto L20(r35);
  L21(c63):
    c70 = `as.logical`(c63);
    if c70 then L215() else L23(c70);
  L199(c55, dx1):
    st m = dx1;
    c56 = `==`(dx1, NULL);
    goto L17(c55, c56);
  L200():
    dr = tryDispatchBuiltin.1("$", formula4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L202() else L201(c45, dr);
  L201(c53, formula6):
    r31 = `$`(formula6, <sym model>);
    goto L199(c53, r31);
  L210():
    sym9 = ldf nargs;
    base9 = ldf nargs in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L211() else L212();
  L22(c66, r40):
    r42 = `==`(r40, 1.0);
    c67 = `as.logical`(r42);
    c68 = `&&`(c66, c67);
    goto L21(c68);
  L23(c72):
    c79 = `as.logical`(c72);
    if c79 then L221() else L25(c79);
  L202():
    dx = getTryDispatchBuiltinValue(dr);
    goto L199(c45, dx);
  L211():
    nargs1 = ldf nargs in base;
    r41 = dyn nargs1();
    check L213() else D10();
  L212():
    r39 = dyn base9();
    goto L22(c61, r39);
  L215():
    sym10 = ldf `is.list`;
    base10 = ldf `is.list` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L216() else L217();
  D10():
    deopt 74 [c61, r41];
  L24(c75, r44):
    c76 = `as.logical`(r44);
    c77 = `&&`(c75, c76);
    goto L23(c77);
  L25(c81):
    c89 = `as.logical`(c81);
    if c89 then L228() else L27();
  L213():
    goto L22(c61, r41);
  L216():
    formula7 = ld formula;
    check L218() else D11();
  L217():
    r43 = dyn base10(<sym formula>);
    goto L24(c70, r43);
  L221():
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L222() else L223();
  D11():
    deopt 80 [c70, formula7];
  L26(c84, r47):
    c86 = `as.logical`(r47);
    c87 = `&&`(c84, c86);
    goto L25(c87);
  L27():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L263() else L264();
  L218():
    formula8 = force? formula7;
    checkMissing(formula8);
    is_list1 = ldf `is.list` in base;
    r45 = dyn is_list1(formula8);
    check L219() else D12();
  L222():
    _in_ = ldf `%in%`;
    check L224() else D13();
  L223():
    r46 = dyn base11(<lang `%in%`(c("terms", "call"), names(formula))>);
    goto L26(c79, r46);
  L228():
    formula11 = ld formula;
    check L229() else D16();
  D12():
    deopt 83 [c70, r45];
  D13():
    deopt 88 [c79];
  D16():
    deopt 95 [formula11];
  L36(r93):
    c96 = `as.logical`(r93);
    if c96 then L265() else L37();
  L219():
    goto L24(c70, r45);
  L224():
    p2 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      c85 = ldf c in base;
      r50 = dyn c85("terms", "call");
      goto L0(r50);
    L2():
      r48 = dyn base12("terms", "call");
      goto L0(r48);
    };
    p3 = prom<V +>{
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      formula9 = ld formula;
      formula10 = force? formula9;
      checkMissing(formula10);
      names = ldf names in base;
      r54 = dyn names(formula10);
      goto L0(r54);
    L2():
      r52 = dyn base13(<sym formula>);
      goto L0(r52);
    };
    r56 = dyn _in_(p2, p3);
    check L225() else D14();
  L229():
    formula12 = force? formula11;
    checkMissing(formula12);
    c90 = `is.object`(formula12);
    if c90 then L231() else L232(formula12);
  L263():
    missing3 = ldf missing in base;
    r94 = dyn missing3(<sym formula>);
    goto L36(r94);
  L264():
    r92 = dyn base19(<sym formula>);
    goto L36(r92);
  D14():
    deopt 91 [c79, r56];
  L37():
    sym24 = ldf missing;
    base24 = ldf missing in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L290() else L291();
  L46():
    sym28 = ldf missing;
    base28 = ldf missing in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L316() else L317();
  L225():
    all = ldf all in base;
    r57 = dyn all(r56);
    check L226() else D15();
  L230(dx3):
    st fcall = dx3;
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L234() else L235();
  L231():
    dr2 = tryDispatchBuiltin.1("$", formula12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L233() else L232(dr2);
  L232(formula14):
    r58 = `$`(formula14, <sym call>);
    goto L230(r58);
  L265():
    sym20 = ldf missing;
    base20 = ldf missing in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L266() else L267();
  D15():
    deopt 93 [c79, r57];
  L28(r60):
    st m = r60;
    fcall2 = ld fcall;
    check L244() else D21();
  L38(r96):
    r98 = `!`(r96);
    c97 = `as.logical`(r98);
    if c97 then L268() else L39(c97);
  L47(r114):
    c119 = `as.logical`(r114);
    if c119 then L292() else L48(c119);
  L55(r132):
    c130 = `as.logical`(r132);
    if c130 then L318() else L56();
  L226():
    goto L26(c79, r57);
  L233():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L230(dx2);
  L234():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L236() else L237();
  L235():
    r59 = dyn base14(<lang c("formula", "data", "subset", "weights", "na.action")>, <lang names(fcall)>, 0.0);
    goto L28(r59);
  L266():
    missing4 = ldf missing in base;
    r97 = dyn missing4(<sym data>);
    goto L38(r97);
  L267():
    r95 = dyn base20(<sym data>);
    goto L38(r95);
  L290():
    missing5 = ldf missing in base;
    r115 = dyn missing5(<sym data>);
    goto L47(r115);
  L291():
    r113 = dyn base24(<sym data>);
    goto L47(r113);
  L316():
    missing6 = ldf missing in base;
    r133 = dyn missing6(<sym na.action>);
    goto L55(r133);
  L317():
    r131 = dyn base28(<sym na.action>);
    goto L55(r131);
  D21():
    deopt 121 [fcall2];
  L29(r62):
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L239() else L240();
  L39(c99):
    c106 = `as.logical`(c99);
    if c106 then L274() else L41(c106);
  L48(c121):
    c128 = `as.logical`(c121);
    if c128 then L298() else L50();
  L56():
    goto L62();
  L62():
    sym31 = ldf missing;
    base31 = ldf missing in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L335() else L336();
  L236():
    c91 = ldf c in base;
    r63 = dyn c91("formula", "data", "subset", "weights", "na.action");
    check L238() else D17();
  L237():
    r61 = dyn base15("formula", "data", "subset", "weights", "na.action");
    goto L29(r61);
  L244():
    fcall3 = force? fcall2;
    checkMissing(fcall3);
    c92 = `is.object`(fcall3);
    if c92 then L245() else L246(fcall3);
  L268():
    sym21 = ldf inherits;
    base21 = ldf inherits in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L269() else L270();
  L292():
    sym25 = ldf inherits;
    base25 = ldf inherits in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L293() else L294();
  L318():
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L319() else L320();
  D17():
    deopt 109 [r63];
  L30(r65):
    match = ldf match in base;
    r67 = dyn match(r62, r65, 0.0, NULL);
    check L243() else D20();
  L31(dx5):
    st fcall = dx5;
    sym18 = ldf quote;
    base18 = ldf quote in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L252() else L253();
  L40(c102, r100):
    c103 = `as.logical`(r100);
    c104 = `&&`(c102, c103);
    goto L39(c104);
  L41(c108):
    c118 = `as.logical`(c108);
    if c118 then L283() else L44();
  L49(c124, r117):
    c125 = `as.logical`(r117);
    c126 = `&&`(c124, c125);
    goto L48(c126);
  L50():
    as_formula2 = ldf `as.formula`;
    check L314() else D45();
  L57(r135):
    r139 = `!`(r135);
    c132 = `as.logical`(r139);
    if c132 then L325() else L59(c132);
  L63(r148):
    c139 = `as.logical`(r148);
    if c139 then L337() else L64();
  L238():
    goto L29(r63);
  L239():
    fcall = ld fcall;
    check L241() else D18();
  L240():
    r64 = dyn base16(<sym fcall>);
    goto L30(r64);
  L245():
    dr4 = tryDispatchBuiltin.1("[", fcall3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L247() else L246(dr4);
  L246(fcall5):
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L248() else L249();
  L269():
    data5 = ld data;
    check L271() else D28();
  L270():
    r99 = dyn base21(<sym data>, "data.frame");
    goto L40(c97, r99);
  L274():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L275() else L276();
  L293():
    formula19 = ld formula;
    check L295() else D36();
  L294():
    r116 = dyn base25(<sym formula>, "data.frame");
    goto L49(c119, r116);
  L298():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L299() else L300();
  L319():
    sym30 = ldf attr;
    base30 = ldf attr in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L321() else L322();
  L320():
    r134 = dyn base29(<lang `<-`(naa, attr(data, "na.action"))>);
    goto L57(r134);
  L335():
    missing7 = ldf missing in base;
    r149 = dyn missing7(<sym data>);
    goto L63(r149);
  L336():
    r147 = dyn base31(<sym data>);
    goto L63(r147);
  D18():
    deopt 112 [fcall];
  D20():
    deopt 119 [r67];
  D28():
    deopt 163 [c97, data5];
  D36():
    deopt 197 [c119, formula19];
  D45():
    deopt 229 [];
  L32(fcall8, r69):
    __ = ldf `[` in base;
    r71 = dyn __(fcall8, r69);
    goto L31(r71);
  L33(r73):
    l = ld fcall;
    c94 = `is.object`(l);
    if c94 then L254() else L255(r73, l);
  L42(c111, r103):
    c115 = `as.logical`(r103);
    c116 = `&&`(c111, c115);
    goto L41(c116);
  L44():
    as_formula = ldf `as.formula`;
    check L287() else D34();
  L51(r120):
    c129 = `as.logical`(r120);
    if c129 then L306() else L53();
  L58(r137):
    st naa = r137;
    c131 = `==`(r137, NULL);
    goto L57(c131);
  L59(c134):
    c138 = `as.logical`(c134);
    if c138 then L329() else L60();
  L64():
    is_data_frame1 = ldf `is.data.frame`;
    check L341() else D56();
  L65():
    is_data_frame2 = ldf `is.data.frame`;
    check L369() else D68();
  L241():
    fcall1 = force? fcall;
    checkMissing(fcall1);
    names1 = ldf names in base;
    r66 = dyn names1(fcall1);
    check L242() else D19();
  L243():
    goto L28(r67);
  L247():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L248():
    m2 = ld m;
    check L250() else D22();
  L249():
    r68 = dyn base17(1.0, <sym m>);
    goto L32(fcall5, r68);
  L252():
    quote1 = ldf quote in base;
    r74 = dyn quote1(<lang `::`(stats, model.frame)>);
    goto L33(r74);
  L253():
    r72 = dyn base18(<lang `::`(stats, model.frame)>);
    goto L33(r72);
  L271():
    data6 = force? data5;
    checkMissing(data6);
    inherits = ldf inherits in base;
    r101 = dyn inherits(data6, "data.frame", FALSE);
    check L272() else D29();
  L275():
    sym23 = ldf attr;
    base23 = ldf attr in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L277() else L278();
  L276():
    r102 = dyn base22(<lang attr(data, "terms")>);
    goto L42(c106, r102);
  L283():
    data9 = ld data;
    check L284() else D33();
  L295():
    formula20 = force? formula19;
    checkMissing(formula20);
    inherits1 = ldf inherits in base;
    r118 = dyn inherits1(formula20, "data.frame", FALSE);
    check L296() else D37();
  L299():
    sym27 = ldf attr;
    base27 = ldf attr in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L301() else L302();
  L300():
    r119 = dyn base26(<lang attr(formula, "terms")>);
    goto L51(r119);
  L314():
    p11 = prom<V +>{
      formula27 = ld formula;
      formula28 = force? formula27;
      checkMissing(formula28);
      return formula28;
    };
    r130 = dyn as_formula2(p11);
    check L315() else D46();
  L321():
    data15 = ld data;
    check L323() else D47();
  L322():
    r136 = dyn base30(<sym data>, "na.action");
    goto L58(r136);
  L325():
    mode = ldf mode;
    check L326() else D49();
  L337():
    environment1 = ldf environment;
    check L338() else D54();
  D19():
    deopt 115 [r66];
  D22():
    deopt 126 [fcall5, m2];
  D29():
    deopt 168 [c97, r101];
  D33():
    deopt 182 [data9];
  D34():
    deopt 188 [];
  D37():
    deopt 202 [c119, r118];
  D46():
    deopt 231 [r130];
  D47():
    deopt 239 [data15];
  D49():
    deopt 248 [c132];
  D54():
    deopt 268 [];
  D56():
    deopt 273 [];
  D68():
    deopt 314 [];
  L34(dx7):
    st fcall = dx7;
    ____1 = ldf `%||%`;
    check L257() else D24();
  L43(c114, r105):
    length = ldf length in base;
    r107 = dyn length(r105);
    check L281() else D32();
  L52(r122):
    length1 = ldf length in base;
    r124 = dyn length1(r122);
    check L305() else D40();
  L53():
    formula25 = ld formula;
    check L310() else D42();
  L60():
    ____2 = ldf `%||%`;
    check L332() else D52();
  L61(naa4):
    st `na.action` = naa4;
    goto L62();
  L242():
    goto L30(r66);
  L250():
    m3 = force? m2;
    checkMissing(m3);
    c93 = ldf c in base;
    r70 = dyn c93(1.0, m3);
    check L251() else D23();
  L254():
    dr6 = tryDispatchBuiltin.0("[[<-", l, r73);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L256() else L255(r73, dr6);
  L255(r76, l2):
    ____ = ldf `[[<-` in base;
    r79 = dyn ____(l2, r73, 1);
    goto L34(r79);
  L272():
    goto L40(c97, r101);
  L277():
    data7 = ld data;
    check L279() else D30();
  L278():
    r104 = dyn base23(<sym data>, "terms");
    goto L43(c106, r104);
  L284():
    data10 = force? data9;
    checkMissing(data10);
    popenv;
    return data10;
  L287():
    p9 = prom<V +>{
      data11 = ld data;
      data12 = force? data11;
      checkMissing(data12);
      return data12;
    };
    r111 = dyn as_formula(p9);
    check L288() else D35();
  L296():
    goto L49(c119, r118);
  L301():
    formula21 = ld formula;
    check L303() else D38();
  L302():
    r121 = dyn base27(<sym formula>, "terms");
    goto L52(r121);
  L306():
    formula23 = ld formula;
    check L307() else D41();
  L315():
    st formula = r130;
    goto L46();
  L323():
    data16 = force? data15;
    checkMissing(data16);
    attr2 = ldf attr in base;
    r138 = dyn attr2(data16, "na.action");
    check L324() else D48();
  L326():
    p12 = prom<V +>{
      naa = ld naa;
      naa1 = force? naa;
      checkMissing(naa1);
      return naa1;
    };
    r141 = dyn mode(p12);
    check L327() else D50();
  L329():
    naa2 = ld naa;
    check L330() else D51();
  L338():
    p15 = prom<V +>{
      formula29 = ld formula;
      formula30 = force? formula29;
      checkMissing(formula30);
      return formula30;
    };
    r151 = dyn environment1(p15);
    check L339() else D55();
  L341():
    p16 = prom<V +>{
      data17 = ld data;
      data18 = force? data17;
      checkMissing(data18);
      return data18;
    };
    r154 = dyn is_data_frame1(p16);
    check L342() else D57();
  L369():
    p18 = prom<V +>{
      data27 = ld data;
      data28 = force? data27;
      checkMissing(data28);
      return data28;
    };
    r173 = dyn is_data_frame2(p18);
    check L370() else D69();
  D23():
    deopt 129 [fcall5, r70];
  D24():
    deopt 141 [];
  D30():
    deopt 174 [c106, data7];
  D32():
    deopt 180 [c114, r107];
  D35():
    deopt 190 [r111];
  D38():
    deopt 208 [formula21];
  D40():
    deopt 214 [r124];
  D41():
    deopt 215 [formula23];
  D42():
    deopt 220 [formula25];
  D48():
    deopt 243 [r138];
  D50():
    deopt 250 [c132, r141];
  D51():
    deopt 254 [naa2];
  D52():
    deopt 257 [];
  D55():
    deopt 270 [r151];
  D57():
    deopt 275 [r154];
  D69():
    deopt 316 [r173];
  L251():
    goto L32(fcall5, r70);
  L256():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx6);
  L257():
    p5 = prom<V +>{
      environment = ldf environment;
      p4 = prom<V +>{
        formula15 = ld formula;
        formula16 = force? formula15;
        checkMissing(formula16);
        c95 = `is.object`(formula16);
        if c95 then L1() else L2(formula16);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", formula16);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(formula18):
        r80 = `$`(formula18, <sym terms>);
        goto L0(r80);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r82 = dyn environment(p4);
      return r82;
    };
    p6 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r84 = dyn parent_frame();
      return r84;
    };
    r86 = dyn ____1(p5, p6);
    check L258() else D25();
  L279():
    data8 = force? data7;
    checkMissing(data8);
    attr = ldf attr in base;
    r106 = dyn attr(data8, "terms");
    check L280() else D31();
  L281():
    goto L42(c114, r107);
  L288():
    st formula = r111;
    goto L46();
  L303():
    formula22 = force? formula21;
    checkMissing(formula22);
    attr1 = ldf attr in base;
    r123 = dyn attr1(formula22, "terms");
    check L304() else D39();
  L305():
    goto L51(r124);
  L307():
    formula24 = force? formula23;
    checkMissing(formula24);
    popenv;
    return formula24;
  L310():
    formula26 = force? formula25;
    checkMissing(formula26);
    st data = formula26;
    as_formula1 = ldf `as.formula`;
    check L311() else D43();
  L324():
    goto L58(r138);
  L327():
    r142 = `!=`(r141, "numeric");
    c135 = `as.logical`(r142);
    c136 = `&&`(c132, c135);
    goto L59(c136);
  L330():
    naa3 = force? naa2;
    checkMissing(naa3);
    goto L61(naa3);
  L332():
    p13 = prom<V +>{
      getOption = ldf getOption;
      r143 = dyn getOption("na.action");
      return r143;
    };
    p14 = prom<V +>{
      na_fail = ld `na.fail`;
      na_fail1 = force? na_fail;
      checkMissing(na_fail1);
      return na_fail1;
    };
    r146 = dyn ____2(p13, p14);
    check L333() else D53();
  L339():
    st data = r151;
    goto L65();
  L342():
    r155 = `!`(r154);
    c140 = `as.logical`(r155);
    if c140 then L343() else L66(c140);
  L370():
    r174 = `!`(r173);
    c164 = `as.logical`(r174);
    if c164 then L371() else L74(c164);
  D25():
    deopt 144 [r86];
  D31():
    deopt 178 [c106, r106];
  D39():
    deopt 212 [r123];
  D43():
    deopt 224 [];
  D53():
    deopt 260 [r146];
  L66(c142):
    c149 = `as.logical`(c142);
    if c149 then L349() else L68(c149);
  L74(c166):
    c173 = `as.logical`(c166);
    if c173 then L377() else L76(c173);
  L258():
    st env = r86;
    eval = ldf eval;
    check L259() else D26();
  L280():
    goto L43(c106, r106);
  L304():
    goto L52(r123);
  L311():
    p10 = prom<V +>{
      data13 = ld data;
      data14 = force? data13;
      checkMissing(data14);
      return data14;
    };
    r128 = dyn as_formula1(p10);
    check L312() else D44();
  L333():
    goto L61(r146);
  L343():
    sym32 = ldf `is.environment`;
    base32 = ldf `is.environment` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L344() else L345();
  L371():
    sym36 = ldf `is.environment`;
    base36 = ldf `is.environment` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L372() else L373();
  D26():
    deopt 147 [];
  D44():
    deopt 226 [r128];
  L67(c145, r157):
    r159 = `!`(r157);
    c146 = `as.logical`(r159);
    c147 = `&&`(c145, c146);
    goto L66(c147);
  L68(c151):
    c162 = `as.logical`(c151);
    if c162 then L357() else L71();
  L75(c169, r176):
    r178 = `!`(r176);
    c170 = `as.logical`(r178);
    c171 = `&&`(c169, c170);
    goto L74(c171);
  L76(c175):
    c182 = `as.logical`(c175);
    if c182 then L383() else L78(c182);
  L259():
    p7 = prom<V +>{
      fcall9 = ld fcall;
      fcall10 = force? fcall9;
      checkMissing(fcall10);
      return fcall10;
    };
    p8 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r89 = dyn eval(p7, p8);
    check L260() else D27();
  L312():
    st formula = r128;
    goto L46();
  L344():
    data19 = ld data;
    check L346() else D58();
  L345():
    r156 = dyn base32(<sym data>);
    goto L67(c140, r156);
  L349():
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L350() else L351();
  L372():
    data29 = ld data;
    check L374() else D70();
  L373():
    r175 = dyn base36(<sym data>);
    goto L75(c164, r175);
  L377():
    sym37 = ldf `is.list`;
    base37 = ldf `is.list` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L378() else L379();
  D27():
    deopt 150 [r89];
  D58():
    deopt 279 [c140, data19];
  D70():
    deopt 320 [c164, data29];
  L69(c154, r161):
    r165 = `!`(r161);
    c159 = `as.logical`(r165);
    c160 = `&&`(c154, c159);
    goto L68(c160);
  L71():
    sym35 = ldf `is.array`;
    base35 = ldf `is.array` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L361() else L362();
  L77(c178, r180):
    r182 = `!`(r180);
    c179 = `as.logical`(r182);
    c180 = `&&`(c178, c179);
    goto L76(c180);
  L78(c184):
    c192 = `as.logical`(c184);
    if c192 then L388() else L80();
  L260():
    popenv;
    return r89;
  L346():
    data20 = force? data19;
    checkMissing(data20);
    is_environment = ldf `is.environment` in base;
    r158 = dyn is_environment(data20);
    check L347() else D59();
  L350():
    sym34 = ldf attr;
    base34 = ldf attr in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L352() else L353();
  L351():
    r160 = dyn base33(<lang attr(data, "class")>);
    goto L69(c149, r160);
  L357():
    as_data_frame = ldf `as.data.frame`;
    check L358() else D62();
  L374():
    data30 = force? data29;
    checkMissing(data30);
    is_environment1 = ldf `is.environment` in base;
    r177 = dyn is_environment1(data30);
    check L375() else D71();
  L378():
    data31 = ld data;
    check L380() else D72();
  L379():
    r179 = dyn base37(<sym data>);
    goto L77(c173, r179);
  L383():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L384() else L385();
  D59():
    deopt 282 [c140, r158];
  D62():
    deopt 297 [];
  D71():
    deopt 323 [c164, r177];
  D72():
    deopt 328 [c173, data31];
  L70(c157, r163):
    c158 = `==`(r163, NULL);
    goto L69(c157, c158);
  L72(r169):
    c163 = `as.logical`(r169);
    if c163 then L365() else L73();
  L79(c187, r184):
    r185 = `!`(r184);
    c189 = `as.logical`(r185);
    c190 = `&&`(c187, c189);
    goto L78(c190);
  L80():
    goto L81();
  L81():
    sym39 = ldf inherits;
    base39 = ldf inherits in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L392() else L393();
  L347():
    goto L67(c140, r158);
  L352():
    data21 = ld data;
    check L354() else D60();
  L353():
    r162 = dyn base34(<sym data>, "class");
    goto L70(c149, r162);
  L358():
    p17 = prom<V +>{
      data23 = ld data;
      data24 = force? data23;
      checkMissing(data24);
      return data24;
    };
    r167 = dyn as_data_frame(p17);
    check L359() else D63();
  L361():
    data25 = ld data;
    check L363() else D64();
  L362():
    r168 = dyn base35(<sym data>);
    goto L72(r168);
  L375():
    goto L75(c164, r177);
  L380():
    data32 = force? data31;
    checkMissing(data32);
    is_list2 = ldf `is.list` in base;
    r181 = dyn is_list2(data32);
    check L381() else D73();
  L384():
    data33 = ld data;
    check L386() else D74();
  L385():
    r183 = dyn base38(<sym data>);
    goto L79(c182, r183);
  L388():
    stop1 = ldf stop;
    check L389() else D75();
  D60():
    deopt 288 [c149, data21];
  D63():
    deopt 299 [r167];
  D64():
    deopt 303 [data25];
  D73():
    deopt 331 [c173, r181];
  D74():
    deopt 335 [c182, data33];
  D75():
    deopt 341 [];
  L73():
    goto L65();
  L82(r189):
    r191 = `!`(r189);
    c193 = `as.logical`(r191);
    if c193 then L396() else L83();
  L354():
    data22 = force? data21;
    checkMissing(data22);
    attr3 = ldf attr in base;
    r164 = dyn attr3(data22, "class");
    check L355() else D61();
  L359():
    st data = r167;
    goto L65();
  L363():
    data26 = force? data25;
    checkMissing(data26);
    is_array = ldf `is.array` in base;
    r170 = dyn is_array(data26);
    check L364() else D65();
  L365():
    stop = ldf stop;
    check L366() else D66();
  L381():
    goto L77(c173, r181);
  L386():
    data34 = force? data33;
    checkMissing(data34);
    c188 = `==`(data34, NULL);
    goto L79(c182, c188);
  L389():
    r186 = dyn stop1("'data' must be a data.frame, environment, or list");
    check L390() else D76();
  L392():
    formula31 = ld formula;
    check L394() else D77();
  L393():
    r188 = dyn base39(<sym formula>, "terms");
    goto L82(r188);
  D61():
    deopt 292 [c149, r164];
  D65():
    deopt 306 [r170];
  D66():
    deopt 308 [];
  D76():
    deopt 343 [r186];
  D77():
    deopt 348 [formula31];
  L83():
    goto L84();
  L84():
    environment2 = ldf environment;
    check L400() else D81();
  L355():
    goto L70(c149, r164);
  L364():
    goto L72(r170);
  L366():
    r171 = dyn stop("'data' must be a data.frame, not a matrix or an array");
    check L367() else D67();
  L390():
    goto L81();
  L394():
    formula32 = force? formula31;
    checkMissing(formula32);
    inherits2 = ldf inherits in base;
    r190 = dyn inherits2(formula32, "terms", FALSE);
    check L395() else D78();
  L396():
    terms = ldf terms;
    check L397() else D79();
  D67():
    deopt 310 [r171];
  D78():
    deopt 353 [r190];
  D79():
    deopt 356 [];
  D81():
    deopt 365 [];
  L367():
    goto L65();
  L395():
    goto L82(r190);
  L397():
    p19 = prom<V +>{
      formula33 = ld formula;
      formula34 = force? formula33;
      checkMissing(formula34);
      return formula34;
    };
    p20 = prom<V +>{
      data35 = ld data;
      data36 = force? data35;
      checkMissing(data36);
      return data36;
    };
    r194 = dyn terms[, data](p19, p20);
    check L398() else D80();
  L400():
    p21 = prom<V +>{
      formula35 = ld formula;
      formula36 = force? formula35;
      checkMissing(formula36);
      return formula36;
    };
    r197 = dyn environment2(p21);
    check L401() else D82();
  D80():
    deopt 360 [r194];
  D82():
    deopt 367 [r197];
  L398():
    st formula = r194;
    goto L84();
  L401():
    st env = r197;
    _row_names_info = ldf `.row_names_info`;
    check L402() else D83();
  D83():
    deopt 370 [];
  L402():
    p22 = prom<V +>{
      data37 = ld data;
      data38 = force? data37;
      checkMissing(data38);
      return data38;
    };
    r199 = dyn _row_names_info(p22, 0);
    check L403() else D84();
  D84():
    deopt 373 [r199];
  L403():
    st rownames = r199;
    sym40 = ldf attr;
    base40 = ldf attr in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L404() else L405();
  L85(r201):
    st vars = r201;
    ____3 = ldf `%||%`;
    check L408() else D87();
  L404():
    formula37 = ld formula;
    check L406() else D85();
  L405():
    r200 = dyn base40(<sym formula>, "variables");
    goto L85(r200);
  D85():
    deopt 377 [formula37];
  D87():
    deopt 384 [];
  L406():
    formula38 = force? formula37;
    checkMissing(formula38);
    attr4 = ldf attr in base;
    r202 = dyn attr4(formula38, "variables");
    check L407() else D86();
  L408():
    p23 = prom<V +>{
      sym41 = ldf attr;
      base41 = ldf attr in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L1() else L2();
    L0(r204):
      return r204;
    L1():
      formula39 = ld formula;
      formula40 = force? formula39;
      checkMissing(formula40);
      attr5 = ldf attr in base;
      r205 = dyn attr5(formula40, "predvars");
      goto L0(r205);
    L2():
      r203 = dyn base41(<sym formula>, "predvars");
      goto L0(r203);
    };
    p24 = prom<V +>{
      vars = ld vars;
      vars1 = force? vars;
      checkMissing(vars1);
      return vars1;
    };
    r208 = dyn ____3(p23, p24);
    check L409() else D88();
  D86():
    deopt 381 [r202];
  D88():
    deopt 387 [r208];
  L407():
    goto L85(r202);
  L409():
    st predvars = r208;
    vapply = ldf vapply;
    check L410() else D89();
  D89():
    deopt 390 [];
  L410():
    p25 = prom<V +>{
      vars2 = ld vars;
      vars3 = force? vars2;
      checkMissing(vars3);
      return vars3;
    };
    p26 = prom<V +>{
      deparse2 = ld deparse2;
      deparse3 = force? deparse2;
      checkMissing(deparse3);
      return deparse3;
    };
    r211 = dyn vapply(p25, p26, " ");
    check L411() else D90();
  D90():
    deopt 394 [r211];
  L411():
    c194 = `is.object`(r211);
    if c194 then L412() else L413(r211);
  L86(dx11):
    st varnames = dx11;
    eval1 = ldf eval;
    check L415() else D91();
  L412():
    dr10 = tryDispatchBuiltin.1("[", r211);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L414() else L413(dr10);
  L413(r213):
    __1 = ldf `[` in base;
    r214 = dyn __1(r213, -1);
    goto L86(r214);
  D91():
    deopt 400 [];
  L414():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L86(dx10);
  L415():
    p27 = prom<V +>{
      predvars = ld predvars;
      predvars1 = force? predvars;
      checkMissing(predvars1);
      return predvars1;
    };
    p28 = prom<V +>{
      data39 = ld data;
      data40 = force? data39;
      checkMissing(data40);
      return data40;
    };
    p29 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r218 = dyn eval1(p27, p28, p29);
    check L416() else D92();
  D92():
    deopt 404 [r218];
  L416():
    st variables = r218;
    sym42 = ldf attr;
    base42 = ldf attr in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L417() else L418();
  L87(r220):
    st resp = r220;
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L421() else L422();
  L417():
    formula41 = ld formula;
    check L419() else D93();
  L418():
    r219 = dyn base42(<sym formula>, "response");
    goto L87(r219);
  D93():
    deopt 408 [formula41];
  L88(r223):
    c196 = `as.logical`(r223);
    if c196 then L424() else L89(c196);
  L419():
    formula42 = force? formula41;
    checkMissing(formula42);
    attr6 = ldf attr in base;
    r221 = dyn attr6(formula42, "response");
    check L420() else D94();
  L421():
    rownames = ld rownames;
    check L423() else D95();
  L422():
    r222 = dyn base43(<sym rownames>);
    goto L88(r222);
  D94():
    deopt 412 [r221];
  D95():
    deopt 415 [rownames];
  L89(c198):
    c202 = `as.logical`(c198);
    if c202 then L427() else L90();
  L420():
    goto L87(r221);
  L423():
    rownames1 = force? rownames;
    checkMissing(rownames1);
    c195 = `==`(rownames1, NULL);
    goto L88(c195);
  L424():
    resp = ld resp;
    check L425() else D96();
  D96():
    deopt 418 [c196, resp];
  L90():
    goto L95();
  L95():
    possible_newdata = ld possible_newdata;
    check L446() else D105();
  L425():
    resp1 = force? resp;
    checkMissing(resp1);
    r224 = `>`(resp1, 0);
    c199 = `as.logical`(r224);
    c200 = `&&`(c196, c199);
    goto L89(c200);
  L427():
    variables = ld variables;
    check L428() else D97();
  D97():
    deopt 423 [variables];
  D105():
    deopt 448 [possible_newdata];
  L428():
    variables1 = force? variables;
    checkMissing(variables1);
    c203 = `is.object`(variables1);
    if c203 then L429() else L430(variables1);
  L446():
    possible_newdata1 = force? possible_newdata;
    checkMissing(possible_newdata1);
    c205 = `as.logical`(possible_newdata1);
    if c205 then L447() else L96(c205);
  L91(dx13):
    st lhs = dx13;
    sym44 = ldf `is.matrix`;
    base44 = ldf `is.matrix` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L433() else L434();
  L96(c207):
    c214 = `as.logical`(c207);
    if c214 then L453() else L98();
  L429():
    dr12 = tryDispatchBuiltin.1("[[", variables1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L431() else L430(dr12);
  L430(variables3):
    resp2 = ld resp;
    check L432() else D98();
  L447():
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L448() else L449();
  D98():
    deopt 425 [variables3, resp2];
  L92(r227):
    c204 = `as.logical`(r227);
    if c204 then L437() else L93();
  L97(c210, r236):
    c211 = `as.logical`(r236);
    c212 = `&&`(c210, c211);
    goto L96(c212);
  L98():
    goto L102();
  L102():
    sym48 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L466() else L467();
  L431():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L91(dx12);
  L432():
    resp3 = force? resp2;
    __2 = ldf `[[` in base;
    r225 = dyn __2(variables3, resp3);
    goto L91(r225);
  L433():
    lhs = ld lhs;
    check L435() else D99();
  L434():
    r226 = dyn base44(<sym lhs>);
    goto L92(r226);
  L448():
    variables4 = ld variables;
    check L450() else D106();
  L449():
    r235 = dyn base46(<sym variables>);
    goto L97(c205, r235);
  L453():
    sym47 = ldf max;
    base47 = ldf max in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L454() else L455();
  D99():
    deopt 431 [lhs];
  D106():
    deopt 452 [c205, variables4];
  L93():
    sym45 = ldf names;
    base45 = ldf names in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L441() else L442();
  L94(r231):
    st rownames = r231;
    goto L95();
  L99(r239):
    st nr2 = r239;
    nr2 = ld nr2;
    check L459() else D111();
  L103(r261):
    c217 = `as.logical`(r261);
    if c217 then L472() else L105();
  L435():
    lhs1 = force? lhs;
    checkMissing(lhs1);
    is_matrix = ldf `is.matrix` in base;
    r228 = dyn is_matrix(lhs1);
    check L436() else D100();
  L437():
    rownames2 = ldf rownames;
    check L438() else D101();
  L450():
    variables5 = force? variables4;
    checkMissing(variables5);
    length2 = ldf length in base;
    r237 = dyn length2(variables5);
    check L451() else D107();
  L454():
    sapply = ldf sapply;
    check L456() else D108();
  L455():
    r238 = dyn base47(<lang sapply(variables, NROW)>);
    goto L99(r238);
  L466():
    sym49 = ldf attr;
    base49 = ldf attr in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L468() else L469();
  L467():
    r260 = dyn base48(<lang attr(formula, "predvars")>);
    goto L103(r260);
  D100():
    deopt 434 [r228];
  D101():
    deopt 436 [];
  D107():
    deopt 455 [c205, r237];
  D108():
    deopt 460 [];
  D111():
    deopt 467 [nr2];
  L104(r263):
    c216 = `==`(r263, NULL);
    goto L103(c216);
  L105():
    goto L110();
  L110():
    sym51 = ldf substitute;
    base51 = ldf substitute in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L487() else L488();
  L436():
    goto L92(r228);
  L438():
    p30 = prom<V +>{
      lhs2 = ld lhs;
      lhs3 = force? lhs2;
      checkMissing(lhs3);
      return lhs3;
    };
    r230 = dyn rownames2(p30);
    check L439() else D102();
  L441():
    lhs4 = ld lhs;
    check L443() else D103();
  L442():
    r232 = dyn base45(<sym lhs>);
    goto L94(r232);
  L451():
    goto L97(c205, r237);
  L456():
    p31 = prom<V +>{
      variables6 = ld variables;
      variables7 = force? variables6;
      checkMissing(variables7);
      return variables7;
    };
    p32 = prom<V +>{
      NROW = ld NROW;
      NROW1 = force? NROW;
      checkMissing(NROW1);
      return NROW1;
    };
    r242 = dyn sapply(p31, p32);
    check L457() else D109();
  L459():
    nr3 = force? nr2;
    checkMissing(nr3);
    nr4 = ld nr;
    check L460() else D112();
  L468():
    formula43 = ld formula;
    check L470() else D115();
  L469():
    r262 = dyn base49(<sym formula>, "predvars");
    goto L104(r262);
  L472():
    sym50 = ldf seq_along;
    base50 = ldf seq_along in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L473() else L474();
  D102():
    deopt 438 [r230];
  D103():
    deopt 441 [lhs4];
  D109():
    deopt 463 [r242];
  D112():
    deopt 468 [nr3, nr4];
  D115():
    deopt 486 [formula43];
  L106(r266):
    s = toForSeq(r266);
    l3 = length(s);
    i = 0;
    goto L107(i);
  L111(r282):
    st extras = r282;
    sym52 = ldf names;
    base52 = ldf names in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L489() else L490();
  L439():
    goto L94(r230);
  L443():
    lhs5 = force? lhs4;
    checkMissing(lhs5);
    names2 = ldf names in base;
    r233 = dyn names2(lhs5);
    check L444() else D104();
  L457():
    max = ldf max in base;
    r243 = dyn max(r242);
    check L458() else D110();
  L460():
    nr5 = force? nr4;
    checkMissing(nr5);
    r244 = `!=`(nr3, nr5);
    c215 = `as.logical`(r244);
    if c215 then L461() else L100();
  L470():
    formula44 = force? formula43;
    checkMissing(formula44);
    attr7 = ldf attr in base;
    r264 = dyn attr7(formula44, "predvars");
    check L471() else D116();
  L473():
    varnames = ld varnames;
    check L475() else D117();
  L474():
    r265 = dyn base50(<sym varnames>);
    goto L106(r265);
  L487():
    substitute1 = ldf substitute in base;
    r283 = dyn substitute1(<lang list(...)>);
    goto L111(r283);
  L488():
    r281 = dyn base51(<lang list(...)>);
    goto L111(r281);
  D104():
    deopt 444 [r233];
  D110():
    deopt 465 [r243];
  D116():
    deopt 490 [r264];
  D117():
    deopt 493 [varnames];
  L100():
    goto L101(NULL);
  L101(r258):
    goto L102();
  L107(i1):
    i2 = `+`.1(i1, 1);
    c218 = `<`.1(l3, i2);
    if c218 then L476() else L109();
  L112(r285):
    st extranames = r285;
    eval2 = ldf eval;
    check L496() else D126();
  L444():
    goto L94(r233);
  L458():
    goto L99(r243);
  L461():
    warning = ldf warning;
    check L462() else D113();
  L471():
    goto L104(r264);
  L475():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    r267 = seq_along(varnames1);
    goto L106(r267);
  L489():
    extras = ld extras;
    check L491() else D124();
  L490():
    r284 = dyn base52(<lang `[`(extras, `-`(1))>);
    goto L112(r284);
  D113():
    deopt 472 [];
  D124():
    deopt 527 [extras];
  D126():
    deopt 536 [];
  L109():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    makepredictcall = ldf makepredictcall;
    check L477() else D118();
  L462():
    p40 = prom<V +>{
      sprintf = ldf sprintf;
      p37 = prom<V +>{
        paste0 = ldf paste0;
        p34 = prom<V +>{
          ngettext = ldf ngettext;
          p33 = prom<V +>{
            nr6 = ld nr;
            nr7 = force? nr6;
            checkMissing(nr7);
            return nr7;
          };
          r246 = dyn ngettext(p33, "'newdata' had %d row", "'newdata' had %d rows");
          return r246;
        };
        p36 = prom<V +>{
          ngettext1 = ldf ngettext;
          p35 = prom<V +>{
            nr8 = ld nr2;
            nr9 = force? nr8;
            checkMissing(nr9);
            return nr9;
          };
          r249 = dyn ngettext1(p35, "but variable found had %d row", "but variables found have %d rows");
          return r249;
        };
        r251 = dyn paste0(p34, " ", p36);
        return r251;
      };
      p38 = prom<V +>{
        nr10 = ld nr;
        nr11 = force? nr10;
        checkMissing(nr11);
        return nr11;
      };
      p39 = prom<V +>{
        nr12 = ld nr2;
        nr13 = force? nr12;
        checkMissing(nr13);
        return nr13;
      };
      r255 = dyn sprintf(p37, p38, p39);
      return r255;
    };
    r257 = dyn warning[, `call.`, domain](p40, FALSE, NA_LGL);
    check L463() else D114();
  L476():
    predvars2 = ld predvars;
    check L483() else D121();
  L491():
    extras1 = force? extras;
    checkMissing(extras1);
    c222 = `is.object`(extras1);
    if c222 then L492() else L493(extras1);
  L496():
    p43 = prom<V +>{
      extras4 = ld extras;
      extras5 = force? extras4;
      checkMissing(extras5);
      return extras5;
    };
    p44 = prom<V +>{
      data41 = ld data;
      data42 = force? data41;
      checkMissing(data42);
      return data42;
    };
    p45 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r291 = dyn eval2(p43, p44, p45);
    check L497() else D127();
  D114():
    deopt 478 [r257];
  D118():
    deopt 497 [i2];
  D121():
    deopt 511 [predvars2];
  D127():
    deopt 540 [r291];
  L113(dx21):
    names3 = ldf names in base;
    r287 = dyn names3(dx21);
    check L495() else D125();
  L463():
    goto L101(r257);
  L477():
    p41 = prom<V +>{
      variables8 = ld variables;
      variables9 = force? variables8;
      checkMissing(variables9);
      c219 = `is.object`(variables9);
      if c219 then L1() else L2(variables9);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", variables9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(variables11):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r268 = dyn __3(variables11, i6);
      goto L0(r268);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p42 = prom<V +>{
      vars4 = ld vars;
      vars5 = force? vars4;
      checkMissing(vars5);
      c220 = `is.object`(vars5);
      if c220 then L1() else L2(vars5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", vars5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(vars7):
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      r270 = `+`(i8, 1);
      __4 = ldf `[[` in base;
      r271 = dyn __4(vars7, r270);
      goto L0(r271);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r273 = dyn makepredictcall(p41, p42);
    check L478() else D119();
  L483():
    predvars3 = force? predvars2;
    checkMissing(predvars3);
    l7 = ld formula;
    attr__ = ldf `attr<-`;
    check L484() else D122();
  L492():
    dr20 = tryDispatchBuiltin.1("[", extras1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L494() else L493(dr20);
  L493(extras3):
    __5 = ldf `[` in base;
    r286 = dyn __5(extras3, -1);
    goto L113(r286);
  L497():
    st extras = r291;
    eval3 = ldf eval;
    check L498() else D128();
  D119():
    deopt 500 [i2, r273];
  D122():
    deopt 514 [predvars3, l7, predvars3];
  D125():
    deopt 533 [r287];
  D128():
    deopt 543 [];
  L478():
    l4 = ld predvars;
    c221 = `is.object`(l4);
    if c221 then L479() else L480(i2, r273, l4);
  L484():
    r280 = dyn attr__(l7, NULL, "predvars", predvars3);
    check L485() else D123();
  L494():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L113(dx20);
  L495():
    goto L112(r287);
  L498():
    p46 = prom<V +>{
      sym53 = ldf substitute;
      base53 = ldf substitute in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r293):
      return r293;
    L1():
      substitute2 = ldf substitute in base;
      r294 = dyn substitute2(<sym subset>);
      goto L0(r294);
    L2():
      r292 = dyn base53(<sym subset>);
      goto L0(r292);
    };
    p47 = prom<V +>{
      data43 = ld data;
      data44 = force? data43;
      checkMissing(data44);
      return data44;
    };
    p48 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r298 = dyn eval3(p46, p47, p48);
    check L499() else D129();
  D123():
    deopt 517 [predvars3, r280];
  D129():
    deopt 547 [r298];
  L108(i12, dx19):
    st predvars = dx19;
    goto L107(i12);
  L479():
    dr18 = tryDispatchBuiltin.0("[[<-", l4, r273);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L481() else L480(i2, r273, dr18);
  L480(i10, r275, l6):
    i13 = ld i;
    check L482() else D120();
  L485():
    st formula = r280;
    goto L110();
  L499():
    st subset = r298;
    sym54 = ldf `.External2`;
    base54 = ldf `.External2` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L500() else L501();
  D120():
    deopt 502 [i10, r275, l6, r273, i13];
  L114(r300):
    st data = r300;
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L512() else L513();
  L481():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L108(i2, dx18);
  L482():
    i14 = force? i13;
    checkMissing(i14);
    r278 = `+`(i14, 1);
    ____4 = ldf `[[<-` in base;
    r279 = dyn ____4(l6, r273, r278);
    goto L108(i10, r279);
  L500():
    C_modelframe = ld C_modelframe;
    check L502() else D130();
  L501():
    r299 = dyn base54(<sym C_modelframe>, <sym formula>, <sym rownames>, <sym variables>, <sym varnames>, <sym extras>, <sym extranames>, <sym subset>, <sym na.action>);
    goto L114(r299);
  D130():
    deopt 551 [C_modelframe];
  L115(r303):
    c223 = `as.logical`(r303);
    if c223 then L516() else L116();
  L502():
    C_modelframe1 = force? C_modelframe;
    checkMissing(C_modelframe1);
    formula45 = ld formula;
    check L503() else D131();
  L512():
    xlev1 = ld xlev;
    check L514() else D140();
  L513():
    r302 = dyn base55(<sym xlev>);
    goto L115(r302);
  D131():
    deopt 553 [formula45];
  D140():
    deopt 574 [xlev1];
  L116():
    drop_unused_levels1 = ld `drop.unused.levels`;
    check L603() else D179();
  L144():
    vapply1 = ldf vapply;
    check L660() else D203();
  L503():
    formula46 = force? formula45;
    checkMissing(formula46);
    rownames3 = ld rownames;
    check L504() else D132();
  L514():
    xlev2 = force? xlev1;
    checkMissing(xlev2);
    length3 = ldf length in base;
    r304 = dyn length3(xlev2);
    check L515() else D141();
  L516():
    sym56 = ldf names;
    base56 = ldf names in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L517() else L518();
  D132():
    deopt 555 [rownames3];
  D141():
    deopt 577 [r304];
  D179():
    deopt 729 [drop_unused_levels1];
  D203():
    deopt 826 [];
  L117(r306):
    s1 = toForSeq(r306);
    l8 = length(s1);
    i15 = 0;
    goto L118(i15);
  L504():
    rownames4 = force? rownames3;
    checkMissing(rownames4);
    variables12 = ld variables;
    check L505() else D133();
  L515():
    goto L115(r304);
  L517():
    xlev3 = ld xlev;
    check L519() else D142();
  L518():
    r305 = dyn base56(<sym xlev>);
    goto L117(r305);
  L603():
    drop_unused_levels2 = force? drop_unused_levels1;
    checkMissing(drop_unused_levels2);
    c248 = `as.logical`(drop_unused_levels2);
    if c248 then L604() else L145();
  L660():
    p70 = prom<V +>{
      data63 = ld data;
      data64 = force? data63;
      checkMissing(data64);
      return data64;
    };
    p71 = prom<V +>{
      _MFclass = ld `.MFclass`;
      _MFclass1 = force? _MFclass;
      checkMissing(_MFclass1);
      return _MFclass1;
    };
    r427 = dyn vapply1(p70, p71, "");
    check L661() else D204();
  D133():
    deopt 557 [variables12];
  D142():
    deopt 580 [xlev3];
  D204():
    deopt 830 [r427];
  L118(i16):
    i17 = `+`.1(i16, 1);
    c224 = `<`.1(l8, i17);
    if c224 then L521() else L143();
  L145():
    goto L144();
  L505():
    variables13 = force? variables12;
    checkMissing(variables13);
    varnames2 = ld varnames;
    check L506() else D134();
  L519():
    xlev4 = force? xlev3;
    checkMissing(xlev4);
    names4 = ldf names in base;
    r307 = dyn names4(xlev4);
    check L520() else D143();
  L604():
    sym67 = ldf names;
    base67 = ldf names in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L605() else L606();
  L661():
    l16 = ld formula;
    attr__1 = ldf `attr<-`;
    check L662() else D205();
  D134():
    deopt 559 [varnames2];
  D143():
    deopt 583 [r307];
  D205():
    deopt 832 [r427, l16, r427];
  L143():
    x1 = `[[`(s1, i17, NULL, TRUE);
    st nm = x1;
    sym57 = ldf `is.null`;
    base57 = ldf `is.null` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L522() else L523();
  L146(r382):
    s2 = toForSeq(r382);
    l12 = length(s2);
    i85 = 0;
    goto L147(i85);
  L506():
    varnames3 = force? varnames2;
    checkMissing(varnames3);
    extras6 = ld extras;
    check L507() else D135();
  L520():
    goto L117(r307);
  L521():
    goto L144();
  L605():
    data53 = ld data;
    check L607() else D180();
  L606():
    r381 = dyn base67(<sym data>);
    goto L146(r381);
  L662():
    r428 = dyn attr__1(l16, NULL, "dataClasses", r427);
    check L663() else D206();
  D135():
    deopt 561 [extras6];
  D180():
    deopt 733 [data53];
  D206():
    deopt 835 [r427, r428];
  L119(i22, r309):
    r311 = `!`(r309);
    c227 = `as.logical`(r311);
    if c227 then L529() else L121();
  L147(i86):
    i87 = `+`.1(i86, 1);
    c249 = `<`.1(l12, i87);
    if c249 then L609() else L162();
  L507():
    extras7 = force? extras6;
    checkMissing(extras7);
    extranames = ld extranames;
    check L508() else D136();
  L522():
    xlev5 = ld xlev;
    check L524() else D144();
  L523():
    r308 = dyn base57(<lang `<-`(xl, `[[`(xlev, nm))>);
    goto L119(i17, r308);
  L607():
    data54 = force? data53;
    checkMissing(data54);
    names5 = ldf names in base;
    r383 = dyn names5(data54);
    check L608() else D181();
  L663():
    st formula = r428;
    formula47 = ld formula;
    check L664() else D207();
  D136():
    deopt 563 [extranames];
  D144():
    deopt 585 [i17, xlev5];
  D181():
    deopt 736 [r383];
  D207():
    deopt 837 [formula47];
  L121():
    goto L142(i22);
  L142(i83):
    goto L118(i83);
  L162():
    x2 = `[[`(s2, i87, NULL, TRUE);
    st nm = x2;
    data55 = ld data;
    check L610() else D182();
  L508():
    extranames1 = force? extranames;
    checkMissing(extranames1);
    subset1 = ld subset;
    check L509() else D137();
  L524():
    xlev6 = force? xlev5;
    checkMissing(xlev6);
    c225 = `is.object`(xlev6);
    if c225 then L525() else L526(i17, xlev6);
  L529():
    data45 = ld data;
    check L530() else D146();
  L608():
    goto L146(r383);
  L609():
    goto L144();
  L664():
    formula48 = force? formula47;
    checkMissing(formula48);
    l17 = ld data;
    attr__2 = ldf `attr<-`;
    check L665() else D208();
  D137():
    deopt 565 [subset1];
  D146():
    deopt 593 [i22, data45];
  D182():
    deopt 737 [i87, data55];
  D208():
    deopt 840 [formula48, l17, formula48];
  L120(i26, dx23):
    st xl = dx23;
    c226 = `==`(dx23, NULL);
    goto L119(i26, c226);
  L509():
    subset2 = force? subset1;
    checkMissing(subset2);
    na_action1 = ld `na.action`;
    check L510() else D138();
  L525():
    dr22 = tryDispatchBuiltin.1("[[", xlev6);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L527() else L526(i17, dr22);
  L526(i24, xlev8):
    nm = ld nm;
    check L528() else D145();
  L530():
    data46 = force? data45;
    checkMissing(data46);
    c228 = `is.object`(data46);
    if c228 then L531() else L532(i22, data46);
  L610():
    data56 = force? data55;
    checkMissing(data56);
    c250 = `is.object`(data56);
    if c250 then L611() else L612(i87, data56);
  L665():
    r429 = dyn attr__2(l17, NULL, "terms", formula48);
    check L666() else D209();
  D138():
    deopt 567 [na_action1];
  D145():
    deopt 587 [i24, xlev8, nm];
  D209():
    deopt 843 [formula48, r429];
  L122(i32, dx25):
    st xi = dx25;
    sym58 = ldf `is.character`;
    base58 = ldf `is.character` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L535() else L536();
  L148(i93, dx35):
    st x = dx35;
    is_factor1 = ldf `is.factor`;
    check L615() else D184();
  L510():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    _External2 = ldf `.External2` in base;
    r301 = dyn _External2(C_modelframe1, formula46, rownames4, variables13, varnames3, extras7, extranames1, subset2, na_action2);
    check L511() else D139();
  L527():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L120(i17, dx22);
  L528():
    nm1 = force? nm;
    __6 = ldf `[[` in base;
    r310 = dyn __6(xlev8, nm1);
    goto L120(i24, r310);
  L531():
    dr24 = tryDispatchBuiltin.1("[[", data46);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L533() else L532(i22, dr24);
  L532(i30, data48):
    nm2 = ld nm;
    check L534() else D147();
  L611():
    dr34 = tryDispatchBuiltin.1("[[", data56);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L613() else L612(i87, dr34);
  L612(i91, data58):
    nm14 = ld nm;
    check L614() else D183();
  L666():
    st data = r429;
    data65 = ld data;
    check L667() else D210();
  D139():
    deopt 570 [r301];
  D147():
    deopt 595 [i30, data48, nm2];
  D183():
    deopt 739 [i91, data58, nm14];
  D184():
    deopt 744 [i93];
  D210():
    deopt 845 [data65];
  L123(i35, r314):
    c230 = `as.logical`(r314);
    if c230 then L538() else L124();
  L511():
    goto L114(r301);
  L533():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L122(i22, dx24);
  L534():
    nm3 = force? nm2;
    __7 = ldf `[[` in base;
    r312 = dyn __7(data48, nm3);
    goto L122(i30, r312);
  L535():
    xi = ld xi;
    check L537() else D148();
  L536():
    r313 = dyn base58(<sym xi>);
    goto L123(i32, r313);
  L613():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L148(i87, dx34);
  L614():
    nm15 = force? nm14;
    __11 = ldf `[[` in base;
    r384 = dyn __11(data58, nm15);
    goto L148(i91, r384);
  L615():
    p65 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r386 = dyn is_factor1(p65);
    check L616() else D185();
  L667():
    data66 = force? data65;
    checkMissing(data66);
    popenv;
    return data66;
  D148():
    deopt 600 [i32, xi];
  D185():
    deopt 746 [i93, r386];
  L124():
    goto L125(i35);
  L125(i38):
    is_factor = ldf `is.factor`;
    check L542() else D151();
  L537():
    xi1 = force? xi;
    checkMissing(xi1);
    c229 = `is.character`(xi1);
    goto L123(i32, c229);
  L538():
    as_factor = ldf `as.factor`;
    check L539() else D149();
  L616():
    c251 = `as.logical`(r386);
    if c251 then L617() else L149(i93, c251);
  D149():
    deopt 604 [i35];
  D151():
    deopt 611 [i38];
  L149(i95, c253):
    c264 = `as.logical`(c253);
    if c264 then L629() else L152();
  L539():
    p49 = prom<V +>{
      xi2 = ld xi;
      xi3 = force? xi2;
      checkMissing(xi3);
      return xi3;
    };
    r316 = dyn as_factor(p49);
    check L540() else D150();
  L542():
    p50 = prom<V +>{
      xi4 = ld xi;
      xi5 = force? xi4;
      checkMissing(xi5);
      return xi5;
    };
    r319 = dyn is_factor(p50);
    check L543() else D152();
  L617():
    sym68 = ldf length;
    base68 = ldf length in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L618() else L619();
  D150():
    deopt 606 [i35, r316];
  D152():
    deopt 613 [i38, r319];
  L150(i98, c256, r388):
    sym70 = ldf length;
    base70 = ldf length in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L623() else L624();
  L152():
    goto L161(i95);
  L161(i129):
    goto L147(i129);
  L540():
    st xi = r316;
    goto L125(i35);
  L543():
    r320 = `!`(r319);
    c231 = `as.logical`(r320);
    if c231 then L126(i38, c231) else L544();
  L618():
    unique = ldf unique;
    check L620() else D186();
  L619():
    r387 = dyn base68(<lang unique(`[`(x, `!`(is.na(x))))>);
    goto L150(i93, c251, r387);
  L629():
    sym71 = ldf attr;
    base71 = ldf attr in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L630() else L631();
  D186():
    deopt 750 [i93, c251];
  L126(i39, c232):
    c241 = `as.logical`(c232);
    if c241 then L550() else L128();
  L151(i101, c260, r400, r401):
    r405 = `<`(r400, r401);
    c261 = `as.logical`(r405);
    c262 = `&&`(c260, c261);
    goto L149(i101, c262);
  L153(i107, r407):
    st ctr = r407;
    x18 = ld x;
    check L634() else D194();
  L544():
    sym59 = ldf `is.null`;
    base59 = ldf `is.null` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L545() else L546();
  L620():
    p66 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c257 = `is.object`(x6);
      if c257 then L2() else L3(x6);
    L0(dx37):
      return dx37;
    L2():
      dr36 = tryDispatchBuiltin.1("[", x6);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L4() else L3(dr36);
    L3(x8):
      sym69 = ldf `is.na`;
      base69 = ldf `is.na` in base;
      guard69 = `==`.4(sym69, base69);
      if guard69 then L5() else L6();
    L1(x11, r390):
      r392 = `!`(r390);
      __12 = ldf `[` in base;
      r393 = dyn __12(x11, r392);
      goto L0(r393);
    L4():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    L5():
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      is_na1 = ldf `is.na` in base;
      r391 = dyn is_na1(x13);
      goto L1(x8, r391);
    L6():
      r389 = dyn base69(<sym x>);
      goto L1(x8, r389);
    };
    r395 = dyn unique(p66);
    check L621() else D187();
  L623():
    levels2 = ldf levels;
    check L625() else D189();
  L624():
    r399 = dyn base70(<lang levels(x)>);
    goto L151(i98, c256, r388, r399);
  L630():
    x16 = ld x;
    check L632() else D192();
  L631():
    r406 = dyn base71(<sym x>, "contrasts");
    goto L153(i95, r406);
  D187():
    deopt 752 [i93, c251, r395];
  D189():
    deopt 757 [i98, c256, r388];
  D192():
    deopt 766 [i95, x16];
  D194():
    deopt 772 [i107, x18];
  L127(i43, c236, r322):
    c238 = `as.logical`(r322);
    c239 = `||`(c236, c238);
    goto L126(i43, c239);
  L128():
    sym60 = ldf attr;
    base60 = ldf attr in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L554() else L555();
  L129(i47, r329):
    goto L142(i47);
  L545():
    levels = ldf levels;
    check L547() else D153();
  L546():
    r321 = dyn base59(<lang `<-`(nxl, levels(xi))>);
    goto L127(i38, c231, r321);
  L550():
    warning1 = ldf warning;
    check L551() else D155();
  L621():
    length5 = ldf length in base;
    r396 = dyn length5(r395);
    check L622() else D188();
  L625():
    p67 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r403 = dyn levels2(p67);
    check L626() else D190();
  L632():
    x17 = force? x16;
    checkMissing(x17);
    attr10 = ldf attr in base;
    r408 = dyn attr10(x17, "contrasts");
    check L633() else D193();
  L634():
    x19 = force? x18;
    checkMissing(x19);
    c265 = `is.object`(x19);
    if c265 then L635() else L636(i107);
  D153():
    deopt 617 [i38, c231];
  D155():
    deopt 624 [i39];
  D188():
    deopt 754 [i93, c251, r396];
  D190():
    deopt 759 [i98, c256, r388, r403];
  D193():
    deopt 770 [i95, r408];
  L130(i50, r331):
    st ctr = r331;
    xi10 = ld xi;
    check L558() else D159();
  L154(i111, dx39):
    l13 = ld data;
    c266 = `is.object`(l13);
    if c266 then L638() else L639(i111, dx39, l13);
  L547():
    p51 = prom<V +>{
      xi6 = ld xi;
      xi7 = force? xi6;
      checkMissing(xi7);
      return xi7;
    };
    r324 = dyn levels(p51);
    check L548() else D154();
  L551():
    p53 = prom<V +>{
      gettextf = ldf gettextf;
      p52 = prom<V +>{
        nm4 = ld nm;
        nm5 = force? nm4;
        checkMissing(nm5);
        return nm5;
      };
      r326 = dyn gettextf("variable '%s' is not a factor", p52);
      return r326;
    };
    r328 = dyn warning1[, domain](p53, NA_LGL);
    check L552() else D156();
  L554():
    xi8 = ld xi;
    check L556() else D157();
  L555():
    r330 = dyn base60(<sym xi>, "contrasts");
    goto L130(i39, r330);
  L622():
    goto L150(i93, c251, r396);
  L626():
    length6 = ldf length in base;
    r404 = dyn length6(r403);
    check L627() else D191();
  L633():
    goto L153(i95, r408);
  L635():
    dr38 = tryDispatchBuiltin.1("[", x19);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L637() else L636(i107);
  L636(i109):
    __13 = ldf `[` in base;
    r409 = dyn __13(x19, <missing>, TRUE);
    goto L154(i109, r409);
  D154():
    deopt 619 [i38, c231, r324];
  D156():
    deopt 628 [i39, r328];
  D157():
    deopt 631 [i39, xi8];
  D159():
    deopt 637 [i50, xi10];
  D191():
    deopt 761 [i98, c256, r388, r404];
  L155(i115, dx45):
    st data = dx45;
    sym72 = ldf identical;
    base72 = ldf identical in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L642() else L643();
  L548():
    st nxl = r324;
    c237 = `==`(r324, NULL);
    goto L127(i38, c231, c237);
  L552():
    goto L129(i39, r328);
  L556():
    xi9 = force? xi8;
    checkMissing(xi9);
    attr8 = ldf attr in base;
    r332 = dyn attr8(xi9, "contrasts");
    check L557() else D158();
  L558():
    xi11 = force? xi10;
    checkMissing(xi11);
    c242 = `is.object`(xi11);
    if c242 then L559() else L560(i50);
  L627():
    goto L151(i98, c256, r388, r404);
  L637():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L154(i107, dx38);
  L638():
    dr40 = tryDispatchBuiltin.0("[[<-", l13, dx39);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L640() else L639(i111, dx39, dr40);
  L639(i113, dx41, l15):
    nm16 = ld nm;
    check L641() else D195();
  D158():
    deopt 635 [i39, r332];
  D195():
    deopt 780 [i113, dx41, l15, dx39, nm16];
  L131(i54, dx27):
    st xi = dx27;
    levels1 = ldf levels;
    check L562() else D160();
  L156(i118, r412):
    r418 = `!`(r412);
    c268 = `as.logical`(r418);
    if c268 then L654() else L159();
  L557():
    goto L130(i39, r332);
  L559():
    dr26 = tryDispatchBuiltin.1("[", xi11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L561() else L560(i50);
  L560(i52):
    __8 = ldf `[` in base;
    r333 = dyn __8(xi11, <missing>, TRUE);
    goto L131(i52, r333);
  L640():
    dx43 = getTryDispatchBuiltinValue(dr40);
    goto L155(i111, dx43);
  L641():
    nm17 = force? nm16;
    ____6 = ldf `[[<-` in base;
    r410 = dyn ____6(l15, dx39, nm17);
    goto L155(i113, r410);
  L642():
    sym73 = ldf attr;
    base73 = ldf attr in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L644() else L645();
  L643():
    r411 = dyn base72(<lang attr(`[[`(data, nm), "contrasts")>, <sym ctr>);
    goto L156(i115, r411);
  D160():
    deopt 646 [i54];
  L157(i121, r414):
    ctr2 = ld ctr;
    check L652() else D199();
  L159():
    goto L160(i118, NULL);
  L160(i128, r423):
    goto L161(i128);
  L561():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L131(i50, dx26);
  L562():
    p54 = prom<V +>{
      xi14 = ld xi;
      xi15 = force? xi14;
      checkMissing(xi15);
      return xi15;
    };
    r335 = dyn levels1(p54);
    check L563() else D161();
  L644():
    data59 = ld data;
    check L646() else D196();
  L645():
    r413 = dyn base73(<lang `[[`(data, nm)>, "contrasts");
    goto L157(i115, r413);
  L654():
    warning3 = ldf warning;
    check L655() else D201();
  D161():
    deopt 648 [i54, r335];
  D196():
    deopt 788 [i115, data59];
  D199():
    deopt 796 [i121, ctr2];
  D201():
    deopt 809 [i118];
  L563():
    st nxl = r335;
    sym61 = ldf any;
    base61 = ldf any in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L564() else L565();
  L646():
    data60 = force? data59;
    checkMissing(data60);
    c267 = `is.object`(data60);
    if c267 then L647() else L648(i115, data60);
  L652():
    ctr3 = force? ctr2;
    checkMissing(ctr3);
    identical2 = ldf identical in base;
    r417 = dyn identical2(r414, ctr3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L653() else D200();
  L655():
    p69 = prom<V +>{
      gettextf2 = ldf gettextf;
      p68 = prom<V +>{
        nm20 = ld nm;
        nm21 = force? nm20;
        checkMissing(nm21);
        return nm21;
      };
      r420 = dyn gettextf2("contrasts dropped from factor %s due to missing levels", p68);
      return r420;
    };
    r422 = dyn warning3[, domain, `call.`](p69, NA_LGL, FALSE);
    check L656() else D202();
  D200():
    deopt 806 [i121, r417];
  D202():
    deopt 815 [i118, r422];
  L132(i57, r337):
    c243 = `as.logical`(r337);
    if c243 then L575() else L135();
  L158(i125, dx47):
    attr11 = ldf attr in base;
    r416 = dyn attr11(dx47, "contrasts");
    check L651() else D198();
  L564():
    sym62 = ldf `is.na`;
    base62 = ldf `is.na` in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L566() else L567();
  L565():
    r336 = dyn base61(<lang `<-`(m, is.na(match(nxl, xl)))>);
    goto L132(i54, r336);
  L647():
    dr42 = tryDispatchBuiltin.1("[[", data60);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L649() else L648(i115, dr42);
  L648(i123, data62):
    nm18 = ld nm;
    check L650() else D197();
  L653():
    goto L156(i121, r417);
  L656():
    goto L160(i118, r422);
  D197():
    deopt 790 [i123, data62, nm18];
  D198():
    deopt 795 [i125, r416];
  L133(i60, r339):
    st m = r339;
    any = ldf any in base;
    r344 = dyn any(r339);
    check L574() else D166();
  L135():
    goto L136(i57);
  L136(i66):
    factor = ldf factor;
    check L579() else D169();
  L566():
    sym63 = ldf match;
    base63 = ldf match in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L568() else L569();
  L567():
    r338 = dyn base62(<lang match(nxl, xl)>);
    goto L133(i54, r338);
  L575():
    stop2 = ldf stop;
    check L576() else D167();
  L649():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L158(i115, dx46);
  L650():
    nm19 = force? nm18;
    __14 = ldf `[[` in base;
    r415 = dyn __14(data62, nm19);
    goto L158(i123, r415);
  L651():
    goto L157(i125, r416);
  D166():
    deopt 668 [i60, r344];
  D167():
    deopt 670 [i57];
  D169():
    deopt 678 [i66];
  L134(i63, r341):
    is_na = ldf `is.na` in base;
    r343 = dyn is_na(r341);
    check L573() else D165();
  L568():
    nxl = ld nxl;
    check L570() else D162();
  L569():
    r340 = dyn base63(<sym nxl>, <sym xl>);
    goto L134(i54, r340);
  L574():
    goto L132(i60, r344);
  L576():
    p60 = prom<V +>{
      sprintf1 = ldf sprintf;
      p56 = prom<V +>{
        ngettext2 = ldf ngettext;
        p55 = prom<V +>{
          sym64 = ldf length;
          base64 = ldf length in base;
          guard64 = `==`.4(sym64, base64);
          if guard64 then L1() else L2();
        L0(r346):
          return r346;
        L1():
          m4 = ld m;
          m5 = force? m4;
          checkMissing(m5);
          length4 = ldf length in base;
          r347 = dyn length4(m5);
          goto L0(r347);
        L2():
          r345 = dyn base64(<sym m>);
          goto L0(r345);
        };
        r349 = dyn ngettext2(p55, "factor %s has new level %s", "factor %s has new levels %s");
        return r349;
      };
      p57 = prom<V +>{
        nm6 = ld nm;
        nm7 = force? nm6;
        checkMissing(nm7);
        return nm7;
      };
      p59 = prom<V +>{
        paste1 = ldf paste;
        p58 = prom<V +>{
          nxl2 = ld nxl;
          nxl3 = force? nxl2;
          checkMissing(nxl3);
          c244 = `is.object`(nxl3);
          if c244 then L1() else L2(nxl3);
        L0(dx29):
          return dx29;
        L1():
          dr28 = tryDispatchBuiltin.1("[", nxl3);
          dc14 = getTryDispatchBuiltinDispatched(dr28);
          if dc14 then L3() else L2(dr28);
        L2(nxl5):
          m6 = ld m;
          m7 = force? m6;
          __9 = ldf `[` in base;
          r352 = dyn __9(nxl5, m7);
          goto L0(r352);
        L3():
          dx28 = getTryDispatchBuiltinValue(dr28);
          goto L0(dx28);
        };
        r354 = dyn paste1[, collapse](p58, ", ");
        return r354;
      };
      r356 = dyn sprintf1(p56, p57, p59);
      return r356;
    };
    r358 = dyn stop2[, domain](p60, NA_LGL);
    check L577() else D168();
  L579():
    p61 = prom<V +>{
      xi16 = ld xi;
      xi17 = force? xi16;
      checkMissing(xi17);
      return xi17;
    };
    p62 = prom<V +>{
      xl2 = ld xl;
      xl3 = force? xl2;
      checkMissing(xl3);
      return xl3;
    };
    r362 = dyn factor[, levels, exclude](p61, p62, NULL);
    check L580() else D170();
  D162():
    deopt 656 [i54, nxl];
  D165():
    deopt 665 [i63, r343];
  D168():
    deopt 674 [i57, r358];
  D170():
    deopt 684 [i66, r362];
  L570():
    nxl1 = force? nxl;
    checkMissing(nxl1);
    xl = ld xl;
    check L571() else D163();
  L573():
    goto L133(i63, r343);
  L577():
    goto L136(i57);
  L580():
    l9 = ld data;
    c245 = `is.object`(l9);
    if c245 then L581() else L582(i66, r362, l9);
  D163():
    deopt 658 [i54, xl];
  L137(i70, dx31):
    st data = dx31;
    sym65 = ldf identical;
    base65 = ldf identical in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L585() else L586();
  L571():
    xl1 = force? xl;
    checkMissing(xl1);
    match1 = ldf match in base;
    r342 = dyn match1(nxl1, xl1, NA_INT, NULL);
    check L572() else D164();
  L581():
    dr30 = tryDispatchBuiltin.0("[[<-", l9, r362);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L583() else L582(i66, r362, dr30);
  L582(i68, r364, l11):
    nm8 = ld nm;
    check L584() else D171();
  D164():
    deopt 663 [i54, r342];
  D171():
    deopt 686 [i68, r364, l11, r362, nm8];
  L138(i73, r369):
    r375 = `!`(r369);
    c247 = `as.logical`(r375);
    if c247 then L597() else L141();
  L572():
    goto L134(i54, r342);
  L583():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L137(i66, dx30);
  L584():
    nm9 = force? nm8;
    ____5 = ldf `[[<-` in base;
    r367 = dyn ____5(l11, r362, nm9);
    goto L137(i68, r367);
  L585():
    sym66 = ldf attr;
    base66 = ldf attr in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L587() else L588();
  L586():
    r368 = dyn base65(<lang attr(`[[`(data, nm), "contrasts")>, <sym ctr>);
    goto L138(i70, r368);
  L139(i76, r371):
    ctr = ld ctr;
    check L595() else D175();
  L141():
    goto L129(i73, NULL);
  L587():
    data49 = ld data;
    check L589() else D172();
  L588():
    r370 = dyn base66(<lang `[[`(data, nm)>, "contrasts");
    goto L139(i70, r370);
  L597():
    warning2 = ldf warning;
    check L598() else D177();
  D172():
    deopt 694 [i70, data49];
  D175():
    deopt 702 [i76, ctr];
  D177():
    deopt 715 [i73];
  L589():
    data50 = force? data49;
    checkMissing(data50);
    c246 = `is.object`(data50);
    if c246 then L590() else L591(i70, data50);
  L595():
    ctr1 = force? ctr;
    checkMissing(ctr1);
    identical1 = ldf identical in base;
    r374 = dyn identical1(r371, ctr1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L596() else D176();
  L598():
    p64 = prom<V +>{
      gettextf1 = ldf gettextf;
      p63 = prom<V +>{
        nm12 = ld nm;
        nm13 = force? nm12;
        checkMissing(nm13);
        return nm13;
      };
      r377 = dyn gettextf1("contrasts dropped from factor %s", p63);
      return r377;
    };
    r379 = dyn warning2[, `call.`, domain](p64, FALSE, NA_LGL);
    check L599() else D178();
  D176():
    deopt 712 [i76, r374];
  D178():
    deopt 721 [i73, r379];
  L140(i80, dx33):
    attr9 = ldf attr in base;
    r373 = dyn attr9(dx33, "contrasts");
    check L594() else D174();
  L590():
    dr32 = tryDispatchBuiltin.1("[[", data50);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L592() else L591(i70, dr32);
  L591(i78, data52):
    nm10 = ld nm;
    check L593() else D173();
  L596():
    goto L138(i76, r374);
  L599():
    goto L129(i73, r379);
  D173():
    deopt 696 [i78, data52, nm10];
  D174():
    deopt 701 [i80, r373];
  L592():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L140(i70, dx32);
  L593():
    nm11 = force? nm10;
    __10 = ldf `[[` in base;
    r372 = dyn __10(data52, nm11);
    goto L140(i78, r372);
  L594():
    goto L139(i80, r373);
  }
}