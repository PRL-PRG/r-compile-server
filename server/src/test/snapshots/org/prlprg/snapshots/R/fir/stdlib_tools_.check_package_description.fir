fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3653884559;
    st `.check_package_description` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3653884559(dfile, strict, db) {
  (reg dfile:*, reg strict:*, reg db:*) -+> V { var dfile:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg c:V, reg c1:L, reg file_path_as_absolute:cls, reg dfile1:*, reg dfile2:V, reg p:p(V +), reg r3:V, reg _read_description:cls, reg dfile3:*, reg dfile4:V, reg p1:p(V +), reg r5:V, reg _get_standard_package_names:cls, reg r7:V, reg _standard_regexps:cls, reg r8:V, reg c2:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg _standard_regexps1:cls, reg r12:V, reg c3:L, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg db3:*, reg db4:V, reg c4:L, reg db6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r18:V, reg is_na:cls, reg r19:V, reg r20:V, reg c5:L, reg c7:V, reg priority:*, reg priority1:V, reg r21:V, reg c8:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg list:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg _is_ASCII:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg db7:*, reg db8:V, reg names:cls, reg r29:V, reg p2:p(V +), reg r31:V, reg r32:V, reg any:cls, reg r33:V, reg c11:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg db9:*, reg db10:V, reg names1:cls, reg r36:V, reg c12:L, reg r38:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind:*, reg ind1:V, reg __1:cls, reg r39:V, reg l:*, reg c13:L, reg dx9:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg dx13:V, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg _get_standard_repository_db_fields:cls, reg r43:V, reg c14:cls, reg r44:V, reg intersect:cls, reg ASCII_fields:*, reg ASCII_fields1:V, reg p3:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg db11:*, reg db12:V, reg names2:cls, reg r48:V, reg p4:p(V +), reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg _is_ASCII1:cls, reg db13:*, reg db14:V, reg c15:L, reg db16:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg ASCII_fields2:*, reg ASCII_fields3:V, reg __2:cls, reg r53:V, reg p5:p(V +), reg r55:V, reg r56:V, reg any1:cls, reg r57:V, reg c16:L, reg ASCII_fields4:*, reg ASCII_fields5:V, reg c17:L, reg ASCII_fields7:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r58:V, reg l3:*, reg c18:L, reg dx20:V, reg l5:*, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg dx24:V, reg r59:V, reg _in_:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg r61:V, reg db17:*, reg db18:V, reg names3:cls, reg r62:V, reg p6:p(V +), reg r64:V, reg c19:L, reg db19:*, reg db20:V, reg c20:L, reg db22:V, reg dr16:V, reg dc8:L, reg dx26:V, reg dx27:V, reg __4:cls, reg r65:V, reg _notin_:cls, reg Sys_getlocale:cls, reg r66:V, reg p7:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg c21:cls, reg r70:V, reg p8:p(V +), reg r72:V, reg c22:L, reg iconv:cls, reg db23:*, reg db24:V, reg p9:p(V +), reg encoding:*, reg encoding1:V, reg p10:p(V +), reg r75:V, reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg r79:V, reg _is_ISO_8859:cls, reg db25:*, reg db26:V, reg p11:p(V +), reg r81:V, reg all:cls, reg r82:V, reg r83:V, reg c23:L, reg l6:*, reg c24:L, reg r85:L, reg l8:*, reg dr18:V, reg dc9:L, reg dx28:V, reg r87:L, reg dx29:V, reg r88:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg r90:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg r92:V, reg db27:*, reg db28:V, reg nchar:cls, reg r93:V, reg anyNA:cls, reg r94:V, reg c25:L, reg iconv1:cls, reg db29:*, reg db30:V, reg p12:p(V +), reg r96:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r98:V, reg r99:V, reg db31:*, reg db32:V, reg c26:L, reg db34:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg __5:cls, reg r100:V, reg is_na1:cls, reg r101:V, reg r102:V, reg c27:L, reg c29:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r103:V, reg c32:L, reg r104:V, reg db35:*, reg db36:V, reg c33:L, reg c35:L, reg db38:V, reg dr22:V, reg dc11:L, reg dx32:V, reg c37:L, reg dx33:V, reg __6:cls, reg r105:V, reg is_na2:cls, reg r106:V, reg c38:L, reg c39:L, reg c40:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r107:V, reg c47:L, reg c48:L, reg r108:V, reg db39:*, reg db40:V, reg c49:L, reg c52:L, reg c53:L, reg db42:V, reg dr24:V, reg dc12:L, reg dx34:V, reg c56:L, reg c57:L, reg dx35:V, reg __7:cls, reg r109:V, reg is_na3:cls, reg r110:V, reg c58:L, reg c59:V, reg c62:L, reg c63:V, reg c65:L, reg _check_package_description_authors_at_R_field:cls, reg aar:*, reg aar1:V, reg p13:p(V +), reg r112:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r113:V, reg r114:V, reg db43:*, reg db44:V, reg c66:L, reg db46:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg __8:cls, reg r115:V, reg is_na4:cls, reg r116:V, reg c67:L, reg c69:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r117:V, reg c72:L, reg r118:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r119:V, reg c75:L, reg r120:V, reg res:*, reg res1:V, reg attr:cls, reg r121:V, reg c76:V, reg r122:V, reg c77:L, reg c78:V, reg c80:L, reg s:*, reg s1:V, reg l9:*, reg c81:L, reg s3:V, reg l11:*, reg dr28:V, reg dc14:L, reg dx38:V, reg s5:V, reg dx39:V, reg ___:cls, reg r123:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r124:V, reg r125:V, reg db47:*, reg db48:V, reg c82:L, reg db50:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg __9:cls, reg r126:V, reg is_na5:cls, reg r127:V, reg c83:L, reg c85:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r128:V, reg c88:L, reg r129:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r130:V, reg c91:L, reg r131:V, reg res2:*, reg res3:V, reg attr1:cls, reg r132:V, reg c92:V, reg r133:V, reg c93:L, reg c94:V, reg c96:L, reg s7:*, reg s8:V, reg l12:*, reg c97:L, reg s10:V, reg l14:*, reg dr32:V, reg dc16:L, reg dx42:V, reg s12:V, reg dx43:V, reg ___1:cls, reg r134:V, reg l15:*, reg mostattributes__:cls, reg r135:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r136:V, reg r137:V, reg out:*, reg out1:V, reg res4:*, reg res5:V, reg c98:cls, reg r138:V, reg db51:*, reg db52:V, reg c99:L, reg db54:V, reg dr34:V, reg dc17:L, reg dx44:V, reg dx45:V, reg __10:cls, reg r140:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r141:V, reg r142:V, reg val:*, reg val1:V, reg is_na6:cls, reg r143:V, reg r144:V, reg c100:L, reg character:cls, reg r145:V, reg grepl:cls, reg sprintf:cls, reg valid_package_name_regexp:*, reg valid_package_name_regexp1:V, reg p14:p(V +), reg r147:V, reg p15:p(V +), reg val2:*, reg val3:V, reg p16:p(V +), reg r150:V, reg r151:V, reg c101:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r152:V, reg r153:V, reg tmp:*, reg tmp1:V, reg gettext:cls, reg r154:V, reg c102:cls, reg r155:V, reg is_base_package:*, reg is_base_package1:V, reg r157:V, reg c103:L, reg c105:V, reg _in_1:cls, reg val4:*, reg val5:V, reg p17:p(V +), reg standard_package_names:*, reg standard_package_names1:V, reg c106:L, reg standard_package_names3:V, reg dr36:V, reg dc18:L, reg dx46:V, reg dx47:V, reg r159:V, reg p18:p(V +), reg r161:V, reg c107:L, reg c108:V, reg c110:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r162:V, reg r163:V, reg tmp2:*, reg tmp3:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r164:V, reg r165:V, reg c111:cls, reg r166:V, reg c112:cls, reg r167:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r169:V, reg r170:V, reg tmp4:*, reg tmp5:V, reg length:cls, reg r171:V, reg c113:L, reg tmp6:*, reg tmp7:V, reg l16:*, reg c114:L, reg tmp9:V, reg l18:*, reg dr38:V, reg dc19:L, reg dx48:V, reg tmp11:V, reg dx49:V, reg r172:V, reg tmp12:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r173:V, reg r174:V, reg db55:*, reg db56:V, reg c115:L, reg db58:V, reg dr40:V, reg dc20:L, reg dx50:V, reg dx51:V, reg __11:cls, reg r175:V, reg is_na7:cls, reg r176:V, reg r177:V, reg c116:L, reg c118:V, reg is_base_package2:*, reg is_base_package3:V, reg r178:V, reg c119:L, reg c120:V, reg c122:L, reg c124:V, reg grepl1:cls, reg sprintf1:cls, reg valid_package_version_regexp:*, reg valid_package_version_regexp1:V, reg p19:p(V +), reg r180:V, reg p20:p(V +), reg val6:*, reg val7:V, reg p21:p(V +), reg r183:V, reg r184:V, reg c125:L, reg c126:V, reg c128:L, reg val8:*, reg val9:V, reg l19:*, reg c129:L, reg val11:V, reg l21:*, reg dr42:V, reg dc21:L, reg dx52:V, reg val13:V, reg dx53:V, reg r185:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r186:V, reg r187:V, reg db59:*, reg db60:V, reg c130:L, reg db62:V, reg dr44:V, reg dc22:L, reg dx54:V, reg dx55:V, reg __12:cls, reg r188:V, reg is_na8:cls, reg r189:V, reg r190:V, reg c131:L, reg c133:V, reg grepl2:cls, reg _valid_maintainer_field_regexp:*, reg _valid_maintainer_field_regexp1:V, reg p22:p(V +), reg val15:*, reg val16:V, reg p23:p(V +), reg r193:V, reg r194:V, reg c134:L, reg c135:V, reg c137:L, reg val17:*, reg val18:V, reg l22:*, reg c138:L, reg val20:V, reg l24:*, reg dr46:V, reg dc23:L, reg dx56:V, reg val22:V, reg dx57:V, reg r195:V, reg db63:*, reg db64:V, reg c139:L, reg db66:V, reg dr48:V, reg dc24:L, reg dx58:V, reg dx59:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r196:V, reg db69:V, reg r197:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r198:V, reg db72:V, reg r199:V, reg c140:cls, reg r200:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r201:V, reg db75:V, reg r202:V, reg db76:*, reg db77:V, reg names4:cls, reg r203:V, reg match:cls, reg r204:V, reg __13:cls, reg r205:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r206:V, reg r207:V, reg val24:*, reg val25:V, reg length1:cls, reg r208:V, reg c141:L, reg trimws:cls, reg unlist:cls, reg strsplit:cls, reg val26:*, reg val27:V, reg p24:p(V +), reg r210:V, reg p25:p(V +), reg r212:V, reg p26:p(V +), reg r214:V, reg character1:cls, reg r215:V, reg paste0:cls, reg paste1:cls, reg valid_package_name_regexp2:*, reg valid_package_name_regexp3:V, reg p27:p(V +), reg r217:V, reg p28:p(V +), reg r219:V, reg depends:*, reg depends1:V, reg s14:V, reg l25:I, reg i:I, reg i1:I, reg i2:I, reg c142:L, reg x:V, reg grepl3:cls, reg dep_regexp:*, reg dep_regexp1:V, reg p29:p(V +), reg dep:*, reg dep1:V, reg p30:p(V +), reg r222:V, reg r223:V, reg c143:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r224:V, reg i9:I, reg r225:V, reg bad_dep_entry:*, reg bad_dep_entry1:V, reg dep2:*, reg dep3:V, reg c144:cls, reg r226:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r228:V, reg i14:I, reg r229:V, reg sub:cls, reg dep_regexp2:*, reg dep_regexp3:V, reg p31:p(V +), reg dep4:*, reg dep5:V, reg p32:p(V +), reg r232:V, reg nzchar:cls, reg r233:V, reg c145:L, reg _notin_1:cls, reg sub1:cls, reg dep_regexp4:*, reg dep_regexp5:V, reg p33:p(V +), reg dep6:*, reg dep7:V, reg p34:p(V +), reg r236:V, reg p35:p(V +), reg sym37:cls, reg base37:cls, reg guard37:L, reg r238:V, reg r239:V, reg c146:cls, reg r240:V, reg p36:p(V +), reg r242:V, reg c147:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r243:V, reg i21:I, reg r244:V, reg bad_dep_op:*, reg bad_dep_op1:V, reg dep8:*, reg dep9:V, reg c148:cls, reg r245:V, reg i22:I, reg r246:V, reg grepl4:cls, reg dep10:*, reg dep11:V, reg p37:p(V +), reg r248:V, reg c149:L, reg grepl5:cls, reg sprintf2:cls, reg valid_package_version_regexp2:*, reg valid_package_version_regexp3:V, reg p38:p(V +), reg r250:V, reg p39:p(V +), reg sub2:cls, reg dep_regexp6:*, reg dep_regexp7:V, reg p40:p(V +), reg dep12:*, reg dep13:V, reg p41:p(V +), reg r254:V, reg p42:p(V +), reg r256:V, reg r257:V, reg c150:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r258:V, reg i29:I, reg r259:V, reg bad_dep_version:*, reg bad_dep_version1:V, reg dep14:*, reg dep15:V, reg c151:cls, reg r260:V, reg i30:I, reg r261:V, reg grepl6:cls, reg sprintf3:cls, reg valid_package_version_regexp4:*, reg valid_package_version_regexp5:V, reg p43:p(V +), reg r263:V, reg p44:p(V +), reg sub3:cls, reg dep_regexp8:*, reg dep_regexp9:V, reg p45:p(V +), reg dep16:*, reg dep17:V, reg p46:p(V +), reg r267:V, reg p47:p(V +), reg r269:V, reg r270:V, reg c152:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r271:V, reg i35:I, reg r272:V, reg bad_dep_version2:*, reg bad_dep_version3:V, reg dep18:*, reg dep19:V, reg c153:cls, reg r273:V, reg i36:I, reg sym41:cls, reg base41:cls, reg guard41:L, reg r275:V, reg r276:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r277:V, reg r278:V, reg bad_dep_entry2:*, reg bad_dep_entry3:V, reg bad_dep_op2:*, reg bad_dep_op3:V, reg bad_dep_version4:*, reg bad_dep_version5:V, reg c154:cls, reg r279:V, reg length2:cls, reg r280:V, reg c155:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r281:V, reg r282:V, reg bad_dep_entry4:*, reg bad_dep_entry5:V, reg bad_dep_op4:*, reg bad_dep_op5:V, reg bad_dep_version6:*, reg bad_dep_version7:V, reg list1:cls, reg r283:V, reg l26:*, reg c156:L, reg r285:V, reg l28:*, reg dr50:V, reg dc25:L, reg dx60:V, reg r287:V, reg dx61:V, reg r288:V, reg r289:V, reg strict1:*, reg strict2:V, reg c157:L, reg c159:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r291:V, reg c162:L, reg r292:V, reg db78:*, reg db79:V, reg c163:L, reg c165:L, reg db81:V, reg dr52:V, reg dc26:L, reg dx62:V, reg c167:L, reg dx63:V, reg __14:cls, reg r293:V, reg is_na9:cls, reg r294:V, reg r295:V, reg c168:L, reg c169:V, reg c171:L, reg trimws1:cls, reg unlist1:cls, reg strsplit1:cls, reg val28:*, reg val29:V, reg p48:p(V +), reg r297:V, reg p49:p(V +), reg r299:V, reg p50:p(V +), reg r301:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r302:V, reg r303:V, reg depends2:*, reg depends3:V, reg length3:cls, reg r304:V, reg r305:V, reg c172:L, reg c173:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r306:V, reg c177:L, reg r307:V, reg grepl7:cls, reg depends4:*, reg depends5:V, reg p51:p(V +), reg r309:V, reg all1:cls, reg r310:V, reg r311:V, reg c178:L, reg c179:V, reg c181:L, reg l29:*, reg c182:L, reg r313:L, reg l31:*, reg dr54:V, reg dc27:L, reg dx64:V, reg r315:L, reg dx65:V, reg r316:V, reg r317:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r319:V, reg r320:V, reg db82:*, reg db83:V, reg c183:L, reg db85:V, reg dr56:V, reg dc28:L, reg dx66:V, reg dx67:V, reg __15:cls, reg r321:V, reg is_na10:cls, reg r322:V, reg r323:V, reg c184:L, reg c186:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r324:V, reg c189:L, reg r325:V, reg package_name:*, reg package_name1:V, reg is_na11:cls, reg r326:V, reg r327:V, reg c190:L, reg c191:V, reg c193:L, reg c195:V, reg _in_2:cls, reg tolower:cls, reg val30:*, reg val31:V, reg p52:p(V +), reg r329:V, reg p53:p(V +), reg sym49:cls, reg base49:cls, reg guard49:L, reg r331:V, reg r332:V, reg c196:cls, reg r333:V, reg p54:p(V +), reg r335:V, reg c197:L, reg c198:V, reg c200:L, reg c202:V, reg _notin_2:cls, reg package_name2:*, reg package_name3:V, reg p55:p(V +), reg unlist2:cls, reg standard_package_names4:*, reg standard_package_names5:V, reg p56:p(V +), reg r338:V, reg p57:p(V +), reg r340:V, reg c203:L, reg c204:V, reg c206:L, reg val32:*, reg val33:V, reg l32:*, reg c207:L, reg val35:V, reg l34:*, reg dr58:V, reg dc29:L, reg dx68:V, reg val37:V, reg dx69:V, reg r341:V, reg strict3:*, reg strict4:V, reg c208:L, reg c210:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r342:V, reg c213:L, reg r343:V, reg db86:*, reg db87:V, reg c214:L, reg c216:L, reg db89:V, reg dr60:V, reg dc30:L, reg dx70:V, reg c218:L, reg dx71:V, reg __16:cls, reg r344:V, reg is_na12:cls, reg r345:V, reg r346:V, reg c219:L, reg c220:V, reg c222:L, reg c224:V, reg endsWith:cls, reg val39:*, reg val40:V, reg p58:p(V +), reg r348:V, reg c225:L, reg c226:V, reg c228:L, reg c230:V, reg grepl8:cls, reg trimws2:cls, reg val41:*, reg val42:V, reg p59:p(V +), reg r350:V, reg p60:p(V +), reg r352:V, reg r353:V, reg c231:L, reg c232:V, reg c234:L, reg l35:*, reg c235:L, reg r355:L, reg l37:*, reg dr62:V, reg dc31:L, reg dx72:V, reg r357:L, reg dx73:V, reg r358:V, reg strict5:*, reg strict6:V, reg c236:L, reg c238:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r360:V, reg c241:L, reg r361:V, reg db90:*, reg db91:V, reg c242:L, reg c244:L, reg db93:V, reg dr64:V, reg dc32:L, reg dx74:V, reg c246:L, reg dx75:V, reg __17:cls, reg r362:V, reg is_na13:cls, reg r363:V, reg r364:V, reg c247:L, reg c248:V, reg c250:L, reg c252:V, reg grepl9:cls, reg trimws3:cls, reg val43:*, reg val44:V, reg p61:p(V +), reg r366:V, reg p62:p(V +), reg r368:V, reg r369:V, reg c253:L, reg c254:V, reg c256:L, reg l38:*, reg c257:L, reg r371:L, reg l40:*, reg dr66:V, reg dc33:L, reg dx76:V, reg r373:L, reg dx77:V, reg r374:V, reg l41:*, reg class__:cls, reg r376:V, reg out2:*, reg out3:V |
    mkenv;
    st dfile = dfile;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(FALSE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    db_isMissing = missing.0(db);
    if db_isMissing then L1(NULL) else L1(db);
  L1(db_orDefault):
    st db = db_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L143() else L144();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L146() else L3();
  L143():
    db1 = ld db;
    check L145() else D0();
  L144():
    r = dyn base(<sym db>);
    goto L2(r);
  D0():
    deopt 1 [db1];
  L3():
    goto L4();
  L4():
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L152() else D5();
  L145():
    db2 = force? db1;
    checkMissing(db2);
    c = `==`(db2, NULL);
    goto L2(c);
  L146():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L147() else D1();
  D1():
    deopt 5 [];
  D5():
    deopt 17 [];
  L147():
    p = prom<V +>{
      dfile1 = ld dfile;
      dfile2 = force? dfile1;
      checkMissing(dfile2);
      return dfile2;
    };
    r3 = dyn file_path_as_absolute(p);
    check L148() else D2();
  L152():
    r7 = dyn _get_standard_package_names();
    check L153() else D6();
  D2():
    deopt 7 [r3];
  D6():
    deopt 18 [r7];
  L148():
    st dfile = r3;
    _read_description = ldf `.read_description`;
    check L149() else D3();
  L153():
    st standard_package_names = r7;
    _standard_regexps = ldf `.standard_regexps`;
    check L154() else D7();
  D3():
    deopt 10 [];
  D7():
    deopt 21 [];
  L149():
    p1 = prom<V +>{
      dfile3 = ld dfile;
      dfile4 = force? dfile3;
      checkMissing(dfile4);
      return dfile4;
    };
    r5 = dyn _read_description(p1);
    check L150() else D4();
  L154():
    r8 = dyn _standard_regexps();
    check L155() else D8();
  D4():
    deopt 12 [r5];
  D8():
    deopt 22 [r8];
  L150():
    st db = r5;
    goto L4();
  L155():
    c2 = `is.object`(r8);
    if c2 then L157() else L158(r8);
  L156(dx1):
    st valid_package_name_regexp = dx1;
    _standard_regexps1 = ldf `.standard_regexps`;
    check L160() else D9();
  L157():
    dr = tryDispatchBuiltin.1("$", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L159() else L158(dr);
  L158(r10):
    r11 = `$`(r10, <sym valid_package_name>);
    goto L156(r11);
  D9():
    deopt 26 [];
  L159():
    dx = getTryDispatchBuiltinValue(dr);
    goto L156(dx);
  L160():
    r12 = dyn _standard_regexps1();
    check L161() else D10();
  D10():
    deopt 27 [r12];
  L161():
    c3 = `is.object`(r12);
    if c3 then L163() else L164(r12);
  L162(dx3):
    st valid_package_version_regexp = dx3;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L166() else L167();
  L163():
    dr2 = tryDispatchBuiltin.1("$", r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L165() else L164(dr2);
  L164(r14):
    r15 = `$`(r14, <sym valid_package_version>);
    goto L162(r15);
  L5(r17):
    r20 = `!`(r17);
    c5 = `as.logical`(r20);
    if c5 then L173() else L7(c5);
  L165():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L162(dx2);
  L166():
    db3 = ld db;
    check L168() else D11();
  L167():
    r16 = dyn base1(<lang `<-`(priority, `[`(db, "Priority"))>);
    goto L5(r16);
  D11():
    deopt 32 [db3];
  L7(c7):
    st is_base_package = c7;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L176() else L177();
  L168():
    db4 = force? db3;
    checkMissing(db4);
    c4 = `is.object`(db4);
    if c4 then L169() else L170(db4);
  L173():
    priority = ld priority;
    check L174() else D13();
  D13():
    deopt 41 [c5, priority];
  L6(dx5):
    st priority = dx5;
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(dx5);
    check L172() else D12();
  L8(r23):
    st out = r23;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L179() else L180();
  L169():
    dr4 = tryDispatchBuiltin.1("[", db4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L171() else L170(dr4);
  L170(db6):
    __ = ldf `[` in base;
    r18 = dyn __(db6, "Priority");
    goto L6(r18);
  L174():
    priority1 = force? priority;
    checkMissing(priority1);
    r21 = `==`(priority1, "base");
    c8 = `as.logical`(r21);
    c9 = `&&`(c5, c8);
    goto L7(c9);
  L176():
    list = ldf list in base;
    r24 = dyn list();
    check L178() else D14();
  L177():
    r22 = dyn base2();
    goto L8(r22);
  D12():
    deopt 39 [r19];
  D14():
    deopt 50 [r24];
  L9(r26):
    c11 = `as.logical`(r26);
    if c11 then L184() else L10();
  L171():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L172():
    goto L5(r19);
  L178():
    goto L8(r24);
  L179():
    _is_ASCII = ldf `.is_ASCII`;
    check L181() else D15();
  L180():
    r25 = dyn base3(<lang `<-`(ind, `!`(.is_ASCII(names(db))))>);
    goto L9(r25);
  D15():
    deopt 55 [];
  L10():
    goto L13();
  L13():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L198() else L199();
  L181():
    p2 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      db7 = ld db;
      db8 = force? db7;
      checkMissing(db8);
      names = ldf names in base;
      r29 = dyn names(db8);
      goto L0(r29);
    L2():
      r27 = dyn base4(<sym db>);
      goto L0(r27);
    };
    r31 = dyn _is_ASCII(p2);
    check L182() else D16();
  L184():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L185() else L186();
  D16():
    deopt 57 [r31];
  L11(r35):
    c12 = `is.object`(r35);
    if c12 then L189() else L190(r35);
  L14(r42):
    st ASCII_fields = r42;
    intersect = ldf intersect;
    check L203() else D24();
  L182():
    r32 = `!`(r31);
    st ind = r32;
    any = ldf any in base;
    r33 = dyn any(r32);
    check L183() else D17();
  L185():
    db9 = ld db;
    check L187() else D18();
  L186():
    r34 = dyn base5(<sym db>);
    goto L11(r34);
  L198():
    _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`;
    check L200() else D21();
  L199():
    r41 = dyn base6(<lang .get_standard_repository_db_fields()>, "Encoding", "License");
    goto L14(r41);
  D17():
    deopt 61 [r33];
  D18():
    deopt 64 [db9];
  D21():
    deopt 79 [];
  D24():
    deopt 87 [];
  L12(dx7):
    l = ld out;
    c13 = `is.object`(l);
    if c13 then L194() else L195(dx7, l);
  L183():
    goto L9(r33);
  L187():
    db10 = force? db9;
    checkMissing(db10);
    names1 = ldf names in base;
    r36 = dyn names1(db10);
    check L188() else D19();
  L189():
    dr6 = tryDispatchBuiltin.1("[", r35);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L191() else L190(dr6);
  L190(r38):
    ind = ld ind;
    check L192() else D20();
  L200():
    r43 = dyn _get_standard_repository_db_fields();
    check L201() else D22();
  L203():
    p3 = prom<V +>{
      ASCII_fields = ld ASCII_fields;
      ASCII_fields1 = force? ASCII_fields;
      checkMissing(ASCII_fields1);
      return ASCII_fields1;
    };
    p4 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      db11 = ld db;
      db12 = force? db11;
      checkMissing(db12);
      names2 = ldf names in base;
      r48 = dyn names2(db12);
      goto L0(r48);
    L2():
      r46 = dyn base7(<sym db>);
      goto L0(r46);
    };
    r50 = dyn intersect(p3, p4);
    check L204() else D25();
  D19():
    deopt 67 [r36];
  D20():
    deopt 68 [r38, ind];
  D22():
    deopt 80 [r43];
  D25():
    deopt 90 [r50];
  L188():
    goto L11(r36);
  L191():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L192():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r39 = dyn __1(r38, ind1);
    goto L12(r39);
  L193(dx12, dx13):
    st out = dx13;
    goto L13();
  L194():
    dr8 = tryDispatchBuiltin.0("$<-", l, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L196() else L195(dx7, dr8);
  L195(dx9, l2):
    r40 = `$<-`(l2, <sym fields_with_non_ASCII_tags>, dx7);
    goto L193(dx9, r40);
  L201():
    c14 = ldf c in base;
    r44 = dyn c14(r43, "Encoding", "License");
    check L202() else D23();
  L204():
    st ASCII_fields = r50;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L205() else L206();
  D23():
    deopt 84 [r44];
  L15(r52):
    c16 = `as.logical`(r52);
    if c16 then L210() else L16();
  L196():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L193(dx7, dx11);
  L202():
    goto L14(r44);
  L205():
    _is_ASCII1 = ldf `.is_ASCII`;
    check L207() else D26();
  L206():
    r51 = dyn base8(<lang `<-`(ind, `!`(.is_ASCII(`[`(db, ASCII_fields))))>);
    goto L15(r51);
  D26():
    deopt 95 [];
  L16():
    goto L18();
  L18():
    _in_ = ldf `%in%`;
    check L221() else D31();
  L207():
    p5 = prom<V +>{
      db13 = ld db;
      db14 = force? db13;
      checkMissing(db14);
      c15 = `is.object`(db14);
      if c15 then L1() else L2(db14);
    L0(dx16):
      return dx16;
    L1():
      dr10 = tryDispatchBuiltin.1("[", db14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(db16):
      ASCII_fields2 = ld ASCII_fields;
      ASCII_fields3 = force? ASCII_fields2;
      __2 = ldf `[` in base;
      r53 = dyn __2(db16, ASCII_fields3);
      goto L0(r53);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx15);
    };
    r55 = dyn _is_ASCII1(p5);
    check L208() else D27();
  L210():
    ASCII_fields4 = ld ASCII_fields;
    check L211() else D29();
  D27():
    deopt 97 [r55];
  D29():
    deopt 102 [ASCII_fields4];
  D31():
    deopt 113 [];
  L208():
    r56 = `!`(r55);
    st ind = r56;
    any1 = ldf any in base;
    r57 = dyn any1(r56);
    check L209() else D28();
  L211():
    ASCII_fields5 = force? ASCII_fields4;
    checkMissing(ASCII_fields5);
    c17 = `is.object`(ASCII_fields5);
    if c17 then L212() else L213(ASCII_fields5);
  L221():
    p6 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      db17 = ld db;
      db18 = force? db17;
      checkMissing(db18);
      names3 = ldf names in base;
      r62 = dyn names3(db18);
      goto L0(r62);
    L2():
      r60 = dyn base9(<sym db>);
      goto L0(r60);
    };
    r64 = dyn _in_("Encoding", p6);
    check L222() else D32();
  D28():
    deopt 101 [r57];
  D32():
    deopt 116 [r64];
  L17(dx18):
    l3 = ld out;
    c18 = `is.object`(l3);
    if c18 then L217() else L218(dx18, l3);
  L209():
    goto L15(r57);
  L212():
    dr12 = tryDispatchBuiltin.1("[", ASCII_fields5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L214() else L213(dr12);
  L213(ASCII_fields7):
    ind2 = ld ind;
    check L215() else D30();
  L222():
    c19 = `as.logical`(r64);
    if c19 then L223() else L19();
  D30():
    deopt 104 [ASCII_fields7, ind2];
  L19():
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L235() else L236();
  L23():
    sym12 = ldf anyNA;
    base12 = ldf anyNA in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L246() else L247();
  L214():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L17(dx17);
  L215():
    ind3 = force? ind2;
    __3 = ldf `[` in base;
    r58 = dyn __3(ASCII_fields7, ind3);
    goto L17(r58);
  L216(dx23, dx24):
    st out = dx24;
    goto L18();
  L217():
    dr14 = tryDispatchBuiltin.0("$<-", l3, dx18);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L219() else L218(dx18, dr14);
  L218(dx20, l5):
    r59 = `$<-`(l5, <sym fields_with_non_ASCII_values>, dx18);
    goto L216(dx20, r59);
  L223():
    db19 = ld db;
    check L224() else D33();
  D33():
    deopt 117 [db19];
  L24(r79):
    r83 = `!`(r79);
    c23 = `as.logical`(r83);
    if c23 then L240() else L25();
  L26(r90):
    c25 = `as.logical`(r90);
    if c25 then L253() else L28();
  L219():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L216(dx18, dx22);
  L224():
    db20 = force? db19;
    checkMissing(db20);
    c20 = `is.object`(db20);
    if c20 then L225() else L226(db20);
  L235():
    _is_ISO_8859 = ldf `.is_ISO_8859`;
    check L237() else D38();
  L236():
    r78 = dyn base11(<lang .is_ISO_8859(db)>);
    goto L24(r78);
  L246():
    sym13 = ldf nchar;
    base13 = ldf nchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L248() else L249();
  L247():
    r89 = dyn base12(<lang nchar(db, "c", TRUE)>);
    goto L26(r89);
  D38():
    deopt 141 [];
  L20(dx27):
    st encoding = dx27;
    _notin_ = ldf `%notin%`;
    check L228() else D34();
  L25():
    goto L23();
  L27(r92):
    anyNA = ldf anyNA in base;
    r94 = dyn anyNA(r92);
    check L252() else D43();
  L28():
    goto L29();
  L29():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L257() else L258();
  L225():
    dr16 = tryDispatchBuiltin.1("[", db20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L227() else L226(dr16);
  L226(db22):
    __4 = ldf `[` in base;
    r65 = dyn __4(db22, "Encoding");
    goto L20(r65);
  L237():
    p11 = prom<V +>{
      db25 = ld db;
      db26 = force? db25;
      checkMissing(db26);
      return db26;
    };
    r81 = dyn _is_ISO_8859(p11);
    check L238() else D39();
  L240():
    l6 = ld out;
    c24 = `is.object`(l6);
    if c24 then L242() else L243(TRUE, l6);
  L248():
    db27 = ld db;
    check L250() else D41();
  L249():
    r91 = dyn base13(<sym db>, "c", TRUE);
    goto L27(r91);
  L253():
    iconv1 = ldf iconv;
    check L254() else D44();
  D34():
    deopt 124 [];
  D39():
    deopt 143 [r81];
  D41():
    deopt 158 [db27];
  D43():
    deopt 166 [r94];
  D44():
    deopt 168 [];
  L30(r99):
    r102 = `!`(r99);
    c27 = `as.logical`(r102);
    if c27 then L264() else L32(c27);
  L227():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L20(dx26);
  L228():
    p7 = prom<V +>{
      Sys_getlocale = ldf `Sys.getlocale`;
      r66 = dyn Sys_getlocale("LC_CTYPE");
      return r66;
    };
    p8 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      c21 = ldf c in base;
      r70 = dyn c21("C", "POSIX");
      goto L0(r70);
    L2():
      r68 = dyn base10("C", "POSIX");
      goto L0(r68);
    };
    r72 = dyn _notin_(p7, p8);
    check L229() else D35();
  L238():
    all = ldf all in base;
    r82 = dyn all(r81);
    check L239() else D40();
  L241(r87, dx29):
    st out = dx29;
    goto L23();
  L242():
    dr18 = tryDispatchBuiltin.0("$<-", l6, TRUE);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L244() else L243(TRUE, dr18);
  L243(r85, l8):
    r88 = `$<-`(l8, <sym missing_encoding>, TRUE);
    goto L241(r85, r88);
  L250():
    db28 = force? db27;
    checkMissing(db28);
    nchar = ldf nchar in base;
    r93 = dyn nchar(db28, "c", TRUE, NA_LGL);
    check L251() else D42();
  L252():
    goto L26(r94);
  L254():
    p12 = prom<V +>{
      db29 = ld db;
      db30 = force? db29;
      checkMissing(db30);
      return db30;
    };
    r96 = dyn iconv1(p12, "latin1");
    check L255() else D45();
  L257():
    db31 = ld db;
    check L259() else D46();
  L258():
    r98 = dyn base14(<lang `<-`(aar, `[`(db, "Authors@R"))>);
    goto L30(r98);
  D35():
    deopt 127 [r72];
  D40():
    deopt 145 [r82];
  D42():
    deopt 164 [r93];
  D45():
    deopt 171 [r96];
  D46():
    deopt 177 [db31];
  L32(c29):
    c65 = `as.logical`(c29);
    if c65 then L282() else L38();
  L229():
    c22 = `as.logical`(r72);
    if c22 then L230() else L21();
  L239():
    goto L24(r82);
  L244():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L241(TRUE, dx28);
  L251():
    goto L27(r93);
  L255():
    st db = r96;
    goto L29();
  L259():
    db32 = force? db31;
    checkMissing(db32);
    c26 = `is.object`(db32);
    if c26 then L260() else L261(db32);
  L264():
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L265() else L266();
  L21():
    goto L22(NULL);
  L22(r76):
    goto L23();
  L31(dx31):
    st aar = dx31;
    is_na1 = ldf `is.na` in base;
    r101 = dyn is_na1(dx31);
    check L263() else D47();
  L33(c32, r104):
    c38 = `as.logical`(r104);
    if c38 then L35(c32, c38) else L272();
  L38():
    goto L56();
  L56():
    db51 = ld db;
    check L335() else D69();
  L230():
    iconv = ldf iconv;
    check L231() else D36();
  L260():
    dr20 = tryDispatchBuiltin.1("[", db32);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L262() else L261(dr20);
  L261(db34):
    __5 = ldf `[` in base;
    r100 = dyn __5(db34, "Authors@R");
    goto L31(r100);
  L265():
    db35 = ld db;
    check L267() else D48();
  L266():
    r103 = dyn base15(<lang `[`(db, "Author")>);
    goto L33(c27, r103);
  L282():
    _check_package_description_authors_at_R_field = ldf `.check_package_description_authors_at_R_field`;
    check L283() else D52();
  D36():
    deopt 129 [];
  D47():
    deopt 184 [r101];
  D48():
    deopt 188 [c27, db35];
  D52():
    deopt 207 [];
  D69():
    deopt 289 [db51];
  L35(c39, c40):
    c62 = `as.logical`(c40);
    c63 = `&&`(c39, c62);
    goto L32(c63);
  L231():
    p9 = prom<V +>{
      db23 = ld db;
      db24 = force? db23;
      checkMissing(db24);
      return db24;
    };
    p10 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r75 = dyn iconv[, , sub](p9, p10, "byte");
    check L232() else D37();
  L262():
    dx30 = getTryDispatchBuiltinValue(dr20);
    goto L31(dx30);
  L263():
    goto L30(r101);
  L267():
    db36 = force? db35;
    checkMissing(db36);
    c33 = `is.object`(db36);
    if c33 then L268() else L269(c27, db36);
  L272():
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L273() else L274();
  L283():
    p13 = prom<V +>{
      aar = ld aar;
      aar1 = force? aar;
      checkMissing(aar1);
      return aar1;
    };
    r112 = dyn _check_package_description_authors_at_R_field(p13);
    check L284() else D53();
  L335():
    db52 = force? db51;
    checkMissing(db52);
    c99 = `is.object`(db52);
    if c99 then L336() else L337(db52);
  D37():
    deopt 134 [r75];
  D53():
    deopt 209 [r112];
  L34(c37, dx33):
    is_na2 = ldf `is.na` in base;
    r106 = dyn is_na2(dx33);
    check L271() else D49();
  L36(c47, c48, r108):
    c58 = `as.logical`(r108);
    c59 = `||`(c48, c58);
    goto L35(c47, c59);
  L57(dx45):
    st package_name = dx45;
    st val = dx45;
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L339() else L340();
  L232():
    st db = r75;
    goto L22(r75);
  L268():
    dr22 = tryDispatchBuiltin.1("[", db36);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L270() else L269(c27, dr22);
  L269(c35, db38):
    __6 = ldf `[` in base;
    r105 = dyn __6(db38, "Author");
    goto L34(c35, r105);
  L273():
    db39 = ld db;
    check L275() else D50();
  L274():
    r107 = dyn base16(<lang `[`(db, "Maintainer")>);
    goto L36(c32, c38, r107);
  L284():
    st res = r112;
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L285() else L286();
  L336():
    dr34 = tryDispatchBuiltin.1("[", db52);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L338() else L337(dr34);
  L337(db54):
    __10 = ldf `[` in base;
    r140 = dyn __10(db54, "Package");
    goto L57(r140);
  D49():
    deopt 194 [c37, r106];
  D50():
    deopt 197 [c32, c38, db39];
  L39(r114):
    c67 = `as.logical`(r114);
    if c67 then L292() else L41(c67);
  L58(r142):
    r144 = `!`(r142);
    c100 = `as.logical`(r144);
    if c100 then L343() else L59();
  L270():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L34(c27, dx32);
  L271():
    goto L33(c37, r106);
  L275():
    db40 = force? db39;
    checkMissing(db40);
    c49 = `is.object`(db40);
    if c49 then L276() else L277(c32, c38, db40);
  L285():
    db43 = ld db;
    check L287() else D54();
  L286():
    r113 = dyn base17(<lang `[`(db, "Author")>);
    goto L39(r113);
  L338():
    dx44 = getTryDispatchBuiltinValue(dr34);
    goto L57(dx44);
  L339():
    val = ld val;
    check L341() else D70();
  L340():
    r141 = dyn base24(<sym val>);
    goto L58(r141);
  D54():
    deopt 213 [db43];
  D70():
    deopt 298 [val];
  L37(c56, c57, dx35):
    is_na3 = ldf `is.na` in base;
    r110 = dyn is_na3(dx35);
    check L279() else D51();
  L41(c69):
    c80 = `as.logical`(c69);
    if c80 then L300() else L44();
  L59():
    goto L71();
  L71():
    sym29 = ldf `is.na`;
    base29 = ldf `is.na` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L382() else L383();
  L276():
    dr24 = tryDispatchBuiltin.1("[", db40);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L278() else L277(c32, c38, dr24);
  L277(c52, c53, db42):
    __7 = ldf `[` in base;
    r109 = dyn __7(db42, "Maintainer");
    goto L37(c52, c53, r109);
  L287():
    db44 = force? db43;
    checkMissing(db44);
    c66 = `is.object`(db44);
    if c66 then L288() else L289(db44);
  L292():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L293() else L294();
  L341():
    val1 = force? val;
    checkMissing(val1);
    is_na6 = ldf `is.na` in base;
    r143 = dyn is_na6(val1);
    check L342() else D71();
  L343():
    character = ldf character;
    check L344() else D72();
  D51():
    deopt 203 [c56, c57, r110];
  D71():
    deopt 301 [r143];
  D72():
    deopt 304 [];
  L40(dx37):
    is_na4 = ldf `is.na` in base;
    r116 = dyn is_na4(dx37);
    check L291() else D55();
  L42(c72, r118):
    r122 = `!`(r118);
    c77 = `as.logical`(r122);
    c78 = `&&`(c72, c77);
    goto L41(c78);
  L44():
    goto L46();
  L46():
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L306() else L307();
  L72(r174):
    r177 = `!`(r174);
    c116 = `as.logical`(r177);
    if c116 then L389() else L74(c116);
  L278():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L37(c32, c38, dx34);
  L279():
    goto L36(c56, c57, r110);
  L288():
    dr26 = tryDispatchBuiltin.1("[", db44);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L290() else L289(dr26);
  L289(db46):
    __8 = ldf `[` in base;
    r115 = dyn __8(db46, "Author");
    goto L40(r115);
  L293():
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L295() else L296();
  L294():
    r117 = dyn base18(<lang `<-`(s, attr(res, "Author"))>);
    goto L42(c67, r117);
  L300():
    s = ld s;
    check L301() else D58();
  L342():
    goto L58(r143);
  L344():
    r145 = dyn character();
    check L345() else D73();
  L382():
    db55 = ld db;
    check L384() else D89();
  L383():
    r173 = dyn base29(<lang `<-`(val, `[`(db, "Version"))>);
    goto L72(r173);
  D55():
    deopt 219 [r116];
  D58():
    deopt 232 [s];
  D73():
    deopt 305 [r145];
  D89():
    deopt 367 [db55];
  L43(c75, r120):
    st s = r120;
    c76 = `==`(r120, NULL);
    goto L42(c75, c76);
  L47(r125):
    c83 = `as.logical`(r125);
    if c83 then L313() else L49(c83);
  L74(c118):
    c122 = `as.logical`(c118);
    if c122 then L392() else L75(c122);
  L290():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L40(dx36);
  L291():
    goto L39(r116);
  L295():
    res = ld res;
    check L297() else D56();
  L296():
    r119 = dyn base19(<sym res>, "Author");
    goto L43(c67, r119);
  L301():
    s1 = force? s;
    checkMissing(s1);
    l9 = ld db;
    c81 = `is.object`(l9);
    if c81 then L302() else L303(s1, l9);
  L306():
    db47 = ld db;
    check L308() else D59();
  L307():
    r124 = dyn base20(<lang `[`(db, "Maintainer")>);
    goto L47(r124);
  L345():
    st tmp = r145;
    grepl = ldf grepl;
    check L346() else D74();
  L384():
    db56 = force? db55;
    checkMissing(db56);
    c115 = `is.object`(db56);
    if c115 then L385() else L386(db56);
  L389():
    is_base_package2 = ld is_base_package;
    check L390() else D91();
  D56():
    deopt 223 [c67, res];
  D59():
    deopt 243 [db47];
  D74():
    deopt 308 [];
  D91():
    deopt 376 [c116, is_base_package2];
  L45(s5, dx39):
    st db = dx39;
    goto L46();
  L49(c85):
    c96 = `as.logical`(c85);
    if c96 then L321() else L52();
  L73(dx51):
    st val = dx51;
    is_na7 = ldf `is.na` in base;
    r176 = dyn is_na7(dx51);
    check L388() else D90();
  L75(c124):
    c128 = `as.logical`(c124);
    if c128 then L396() else L76();
  L297():
    res1 = force? res;
    checkMissing(res1);
    attr = ldf attr in base;
    r121 = dyn attr(res1, "Author");
    check L298() else D57();
  L302():
    dr28 = tryDispatchBuiltin.0("[<-", l9, s1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L304() else L303(s1, dr28);
  L303(s3, l11):
    ___ = ldf `[<-` in base;
    r123 = dyn ___(l11, s1, "Author");
    goto L45(s3, r123);
  L308():
    db48 = force? db47;
    checkMissing(db48);
    c82 = `is.object`(db48);
    if c82 then L309() else L310(db48);
  L313():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L314() else L315();
  L346():
    p15 = prom<V +>{
      sprintf = ldf sprintf;
      p14 = prom<V +>{
        valid_package_name_regexp = ld valid_package_name_regexp;
        valid_package_name_regexp1 = force? valid_package_name_regexp;
        checkMissing(valid_package_name_regexp1);
        return valid_package_name_regexp1;
      };
      r147 = dyn sprintf("^(R|%s)$", p14);
      return r147;
    };
    p16 = prom<V +>{
      val2 = ld val;
      val3 = force? val2;
      checkMissing(val3);
      return val3;
    };
    r150 = dyn grepl(p15, p16);
    check L347() else D75();
  L385():
    dr40 = tryDispatchBuiltin.1("[", db56);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L387() else L386(dr40);
  L386(db58):
    __11 = ldf `[` in base;
    r175 = dyn __11(db58, "Version");
    goto L73(r175);
  L390():
    is_base_package3 = force? is_base_package2;
    checkMissing(is_base_package3);
    r178 = `!`(is_base_package3);
    c119 = `as.logical`(r178);
    c120 = `&&`(c116, c119);
    goto L74(c120);
  L392():
    grepl1 = ldf grepl;
    check L393() else D92();
  D57():
    deopt 227 [c67, r121];
  D75():
    deopt 311 [r150];
  D90():
    deopt 374 [r176];
  D92():
    deopt 381 [c122];
  L48(dx41):
    is_na5 = ldf `is.na` in base;
    r127 = dyn is_na5(dx41);
    check L312() else D60();
  L50(c88, r129):
    r133 = `!`(r129);
    c93 = `as.logical`(r133);
    c94 = `&&`(c88, c93);
    goto L49(c94);
  L52():
    goto L54();
  L54():
    l15 = ld res;
    mostattributes__ = ldf `mostattributes<-`;
    check L327() else D64();
  L76():
    goto L77();
  L77():
    sym30 = ldf `is.na`;
    base30 = ldf `is.na` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L403() else L404();
  L298():
    goto L43(c67, r121);
  L304():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L45(s1, dx38);
  L309():
    dr30 = tryDispatchBuiltin.1("[", db48);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L311() else L310(dr30);
  L310(db50):
    __9 = ldf `[` in base;
    r126 = dyn __9(db50, "Maintainer");
    goto L48(r126);
  L314():
    sym22 = ldf attr;
    base22 = ldf attr in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L316() else L317();
  L315():
    r128 = dyn base21(<lang `<-`(s, attr(res, "Maintainer"))>);
    goto L50(c83, r128);
  L321():
    s7 = ld s;
    check L322() else D63();
  L347():
    r151 = `!`(r150);
    c101 = `as.logical`(r151);
    if c101 then L348() else L60();
  L387():
    dx50 = getTryDispatchBuiltinValue(dr40);
    goto L73(dx50);
  L388():
    goto L72(r176);
  L393():
    p20 = prom<V +>{
      sprintf1 = ldf sprintf;
      p19 = prom<V +>{
        valid_package_version_regexp = ld valid_package_version_regexp;
        valid_package_version_regexp1 = force? valid_package_version_regexp;
        checkMissing(valid_package_version_regexp1);
        return valid_package_version_regexp1;
      };
      r180 = dyn sprintf1("^%s$", p19);
      return r180;
    };
    p21 = prom<V +>{
      val6 = ld val;
      val7 = force? val6;
      checkMissing(val7);
      return val7;
    };
    r183 = dyn grepl1(p20, p21);
    check L394() else D93();
  L396():
    val8 = ld val;
    check L397() else D94();
  D60():
    deopt 249 [r127];
  D63():
    deopt 262 [s7];
  D64():
    deopt 274 [NULL, l15, NULL];
  D93():
    deopt 384 [c122, r183];
  D94():
    deopt 387 [val8];
  L51(c91, r131):
    st s = r131;
    c92 = `==`(r131, NULL);
    goto L50(c91, c92);
  L60():
    goto L62();
  L62():
    is_base_package = ld is_base_package;
    check L356() else D80();
  L78(r187):
    r190 = `!`(r187);
    c131 = `as.logical`(r190);
    if c131 then L410() else L80(c131);
  L311():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L48(dx40);
  L312():
    goto L47(r127);
  L316():
    res2 = ld res;
    check L318() else D61();
  L317():
    r130 = dyn base22(<sym res>, "Maintainer");
    goto L51(c83, r130);
  L322():
    s8 = force? s7;
    checkMissing(s8);
    l12 = ld db;
    c97 = `is.object`(l12);
    if c97 then L323() else L324(s8, l12);
  L327():
    r135 = dyn mostattributes__(l15, NULL, NULL);
    check L328() else D65();
  L348():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L349() else L350();
  L394():
    r184 = `!`(r183);
    c125 = `as.logical`(r184);
    c126 = `&&`(c122, c125);
    goto L75(c126);
  L397():
    val9 = force? val8;
    checkMissing(val9);
    l19 = ld out;
    c129 = `is.object`(l19);
    if c129 then L399() else L400(val9, l19);
  L403():
    db59 = ld db;
    check L405() else D95();
  L404():
    r186 = dyn base30(<lang `<-`(val, `[`(db, "Maintainer"))>);
    goto L78(r186);
  D61():
    deopt 253 [c83, res2];
  D65():
    deopt 276 [NULL, r135];
  D80():
    deopt 326 [is_base_package];
  D95():
    deopt 396 [db59];
  L53(s12, dx43):
    st db = dx43;
    goto L54();
  L61(r153):
    st tmp = r153;
    goto L62();
  L80(c133):
    c137 = `as.logical`(c133);
    if c137 then L414() else L81();
  L318():
    res3 = force? res2;
    checkMissing(res3);
    attr1 = ldf attr in base;
    r132 = dyn attr1(res3, "Maintainer");
    check L319() else D62();
  L323():
    dr32 = tryDispatchBuiltin.0("[<-", l12, s8);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L325() else L324(s8, dr32);
  L324(s10, l14):
    ___1 = ldf `[<-` in base;
    r134 = dyn ___1(l14, s8, "Maintainer");
    goto L53(s10, r134);
  L328():
    st res = r135;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L329() else L330();
  L349():
    tmp = ld tmp;
    check L351() else D76();
  L350():
    r152 = dyn base25(<sym tmp>, <lang gettext("Malformed package name")>);
    goto L61(r152);
  L356():
    is_base_package1 = force? is_base_package;
    checkMissing(is_base_package1);
    r157 = `!`(is_base_package1);
    c103 = `as.logical`(r157);
    if c103 then L357() else L63(c103);
  L398(val13, dx53):
    st out = dx53;
    goto L77();
  L399():
    dr42 = tryDispatchBuiltin.0("$<-", l19, val9);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L401() else L400(val9, dr42);
  L400(val11, l21):
    r185 = `$<-`(l21, <sym bad_version>, val9);
    goto L398(val11, r185);
  L405():
    db60 = force? db59;
    checkMissing(db60);
    c130 = `is.object`(db60);
    if c130 then L406() else L407(db60);
  L410():
    grepl2 = ldf grepl;
    check L411() else D97();
  D62():
    deopt 257 [c83, r132];
  D76():
    deopt 315 [tmp];
  D97():
    deopt 406 [c131];
  L55(r137):
    st out = r137;
    goto L56();
  L63(c105):
    c110 = `as.logical`(c105);
    if c110 then L361() else L64();
  L79(dx55):
    st val = dx55;
    is_na8 = ldf `is.na` in base;
    r189 = dyn is_na8(dx55);
    check L409() else D96();
  L81():
    goto L82();
  L82():
    db63 = ld db;
    check L421() else D100();
  L319():
    goto L51(c83, r132);
  L325():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L53(s8, dx42);
  L329():
    out = ld out;
    check L331() else D66();
  L330():
    r136 = dyn base23(<sym out>, <sym res>);
    goto L55(r136);
  L351():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    gettext = ldf gettext;
    check L352() else D77();
  L357():
    _in_1 = ldf `%in%`;
    check L358() else D81();
  L401():
    dx52 = getTryDispatchBuiltinValue(dr42);
    goto L398(val9, dx52);
  L406():
    dr44 = tryDispatchBuiltin.1("[", db60);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L408() else L407(dr44);
  L407(db62):
    __12 = ldf `[` in base;
    r188 = dyn __12(db62, "Maintainer");
    goto L79(r188);
  L411():
    p22 = prom<V +>{
      _valid_maintainer_field_regexp = ld `.valid_maintainer_field_regexp`;
      _valid_maintainer_field_regexp1 = force? _valid_maintainer_field_regexp;
      checkMissing(_valid_maintainer_field_regexp1);
      return _valid_maintainer_field_regexp1;
    };
    p23 = prom<V +>{
      val15 = ld val;
      val16 = force? val15;
      checkMissing(val16);
      return val16;
    };
    r193 = dyn grepl2(p22, p23);
    check L412() else D98();
  L414():
    val17 = ld val;
    check L415() else D99();
  D66():
    deopt 280 [out];
  D77():
    deopt 318 [];
  D81():
    deopt 330 [c103];
  D96():
    deopt 403 [r189];
  D98():
    deopt 409 [c131, r193];
  D99():
    deopt 412 [val17];
  D100():
    deopt 419 [db63];
  L64():
    goto L67();
  L67():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L370() else L371();
  L331():
    out1 = force? out;
    checkMissing(out1);
    res4 = ld res;
    check L332() else D67();
  L352():
    r154 = dyn gettext("Malformed package name");
    check L353() else D78();
  L358():
    p17 = prom<V +>{
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      return val5;
    };
    p18 = prom<V +>{
      standard_package_names = ld standard_package_names;
      standard_package_names1 = force? standard_package_names;
      checkMissing(standard_package_names1);
      c106 = `is.object`(standard_package_names1);
      if c106 then L1() else L2(standard_package_names1);
    L0(dx47):
      return dx47;
    L1():
      dr36 = tryDispatchBuiltin.1("$", standard_package_names1);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(standard_package_names3):
      r159 = `$`(standard_package_names3, <sym base>);
      goto L0(r159);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx46);
    };
    r161 = dyn _in_1(p17, p18);
    check L359() else D82();
  L361():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L362() else L363();
  L408():
    dx54 = getTryDispatchBuiltinValue(dr44);
    goto L79(dx54);
  L409():
    goto L78(r189);
  L412():
    r194 = `!`(r193);
    c134 = `as.logical`(r194);
    c135 = `&&`(c131, c134);
    goto L80(c135);
  L415():
    val18 = force? val17;
    checkMissing(val18);
    l22 = ld out;
    c138 = `is.object`(l22);
    if c138 then L417() else L418(val18, l22);
  L421():
    db64 = force? db63;
    checkMissing(db64);
    c139 = `is.object`(db64);
    if c139 then L422() else L423(db64);
  D67():
    deopt 282 [res4];
  D78():
    deopt 320 [r154];
  D82():
    deopt 333 [c103, r161];
  L65(r163):
    st tmp = r163;
    goto L67();
  L68(r170):
    c113 = `as.logical`(r170);
    if c113 then L374() else L69();
  L83(dx59):
    st val = dx59;
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L435() else L436();
  L332():
    res5 = force? res4;
    checkMissing(res5);
    c98 = ldf c in base;
    r138 = dyn c98(out1, res5);
    check L333() else D68();
  L353():
    c102 = ldf c in base;
    r155 = dyn c102(tmp1, r154);
    check L354() else D79();
  L359():
    c107 = `as.logical`(r161);
    c108 = `&&`(c103, c107);
    goto L63(c108);
  L362():
    tmp2 = ld tmp;
    check L364() else D83();
  L363():
    r162 = dyn base26(<sym tmp>, <lang c("Invalid package name.", "This is the name of a base package.")>);
    goto L65(r162);
  L370():
    tmp4 = ld tmp;
    check L372() else D86();
  L371():
    r169 = dyn base28(<sym tmp>);
    goto L68(r169);
  L416(val22, dx57):
    st out = dx57;
    goto L82();
  L417():
    dr46 = tryDispatchBuiltin.0("$<-", l22, val18);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L419() else L418(val18, dr46);
  L418(val20, l24):
    r195 = `$<-`(l24, <sym bad_maintainer>, val18);
    goto L416(val20, r195);
  L422():
    dr48 = tryDispatchBuiltin.1("[", db64);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L424() else L423(dr48);
  L423(db66):
    sym31 = ldf match;
    base31 = ldf match in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L425() else L426();
  D68():
    deopt 285 [r138];
  D79():
    deopt 322 [r155];
  D83():
    deopt 337 [tmp2];
  D86():
    deopt 352 [tmp4];
  L69():
    goto L70(NULL);
  L70(tmp12):
    goto L71();
  L84(db69, r197):
    __13 = ldf `[` in base;
    r205 = dyn __13(db69, r197);
    goto L83(r205);
  L87(r207):
    c141 = `as.logical`(r207);
    if c141 then L439() else L88();
  L333():
    goto L55(r138);
  L354():
    goto L61(r155);
  L364():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L365() else L366();
  L372():
    tmp5 = force? tmp4;
    checkMissing(tmp5);
    length = ldf length in base;
    r171 = dyn length(tmp5);
    check L373() else D87();
  L374():
    tmp6 = ld tmp;
    check L375() else D88();
  L419():
    dx56 = getTryDispatchBuiltinValue(dr46);
    goto L416(val18, dx56);
  L424():
    dx58 = getTryDispatchBuiltinValue(dr48);
    goto L83(dx58);
  L425():
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L427() else L428();
  L426():
    r196 = dyn base31[, , nomatch](<lang c("Depends", "Suggests", "Imports", "Enhances")>, <lang names(db)>, 0);
    goto L84(db66, r196);
  L435():
    val24 = ld val;
    check L437() else D105();
  L436():
    r206 = dyn base34(<sym val>);
    goto L87(r206);
  D87():
    deopt 355 [r171];
  D88():
    deopt 356 [tmp6];
  D105():
    deopt 445 [val24];
  L66(r165):
    c112 = ldf c in base;
    r167 = dyn c112(tmp3, r165);
    check L368() else D85();
  L85(db72, r199):
    sym33 = ldf names;
    base33 = ldf names in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L430() else L431();
  L88():
    goto L111();
  L111():
    strict1 = ld strict;
    check L518() else D148();
  L365():
    c111 = ldf c in base;
    r166 = dyn c111("Invalid package name.", "This is the name of a base package.");
    check L367() else D84();
  L366():
    r164 = dyn base27("Invalid package name.", "This is the name of a base package.");
    goto L66(r164);
  L373():
    goto L68(r171);
  L375():
    tmp7 = force? tmp6;
    checkMissing(tmp7);
    l16 = ld out;
    c114 = `is.object`(l16);
    if c114 then L377() else L378(tmp7, l16);
  L427():
    c140 = ldf c in base;
    r200 = dyn c140("Depends", "Suggests", "Imports", "Enhances");
    check L429() else D101();
  L428():
    r198 = dyn base32("Depends", "Suggests", "Imports", "Enhances");
    goto L85(db66, r198);
  L437():
    val25 = force? val24;
    checkMissing(val25);
    length1 = ldf length in base;
    r208 = dyn length1(val25);
    check L438() else D106();
  L439():
    trimws = ldf trimws;
    check L440() else D107();
  D84():
    deopt 344 [r166];
  D85():
    deopt 346 [r167];
  D101():
    deopt 430 [db66, r200];
  D106():
    deopt 448 [r208];
  D107():
    deopt 450 [];
  D148():
    deopt 591 [strict1];
  L86(db75, r202):
    match = ldf match in base;
    r204 = dyn match(r199, r202, 0, NULL);
    check L434() else D104();
  L367():
    goto L66(r166);
  L368():
    goto L65(r167);
  L376(tmp11, dx49):
    st out = dx49;
    goto L70(tmp11);
  L377():
    dr38 = tryDispatchBuiltin.0("$<-", l16, tmp7);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L379() else L378(tmp7, dr38);
  L378(tmp9, l18):
    r172 = `$<-`(l18, <sym bad_package>, tmp7);
    goto L376(tmp9, r172);
  L429():
    goto L85(db66, r200);
  L430():
    db76 = ld db;
    check L432() else D102();
  L431():
    r201 = dyn base33(<sym db>);
    goto L86(db72, r201);
  L438():
    goto L87(r208);
  L440():
    p26 = prom<V +>{
      unlist = ldf unlist;
      p25 = prom<V +>{
        strsplit = ldf strsplit;
        p24 = prom<V +>{
          val26 = ld val;
          val27 = force? val26;
          checkMissing(val27);
          return val27;
        };
        r210 = dyn strsplit(p24, ",");
        return r210;
      };
      r212 = dyn unlist(p25);
      return r212;
    };
    r214 = dyn trimws(p26);
    check L441() else D108();
  L518():
    strict2 = force? strict1;
    checkMissing(strict2);
    c157 = `as.logical`(strict2);
    if c157 then L519() else L112(c157);
  D102():
    deopt 433 [db72, db76];
  D104():
    deopt 440 [db75, r204];
  D108():
    deopt 452 [r214];
  L112(c159):
    c171 = `as.logical`(c159);
    if c171 then L528() else L115();
  L379():
    dx48 = getTryDispatchBuiltinValue(dr38);
    goto L376(tmp7, dx48);
  L432():
    db77 = force? db76;
    checkMissing(db77);
    names4 = ldf names in base;
    r203 = dyn names4(db77);
    check L433() else D103();
  L434():
    goto L84(db75, r204);
  L441():
    st depends = r214;
    character1 = ldf character;
    check L442() else D109();
  L519():
    sym44 = ldf `is.na`;
    base44 = ldf `is.na` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L520() else L521();
  D103():
    deopt 436 [db72, r203];
  D109():
    deopt 455 [];
  L113(c162, r292):
    r295 = `!`(r292);
    c168 = `as.logical`(r295);
    c169 = `&&`(c162, c168);
    goto L112(c169);
  L115():
    goto L121();
  L121():
    sym47 = ldf `is.na`;
    base47 = ldf `is.na` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L549() else L550();
  L433():
    goto L86(db72, r203);
  L442():
    r215 = dyn character1();
    check L443() else D110();
  L520():
    db78 = ld db;
    check L522() else D149();
  L521():
    r291 = dyn base44(<lang `<-`(val, `[`(db, "VignetteBuilder"))>);
    goto L113(c157, r291);
  L528():
    trimws1 = ldf trimws;
    check L529() else D151();
  D110():
    deopt 456 [r215];
  D149():
    deopt 595 [c157, db78];
  D151():
    deopt 606 [];
  L122(r320):
    r323 = `!`(r320);
    c184 = `as.logical`(r323);
    if c184 then L556() else L124(c184);
  L443():
    st bad_dep_version = r215;
    st bad_dep_op = r215;
    st bad_dep_entry = r215;
    paste0 = ldf paste0;
    check L444() else D111();
  L522():
    db79 = force? db78;
    checkMissing(db79);
    c163 = `is.object`(db79);
    if c163 then L523() else L524(c157, db79);
  L529():
    p50 = prom<V +>{
      unlist1 = ldf unlist;
      p49 = prom<V +>{
        strsplit1 = ldf strsplit;
        p48 = prom<V +>{
          val28 = ld val;
          val29 = force? val28;
          checkMissing(val29);
          return val29;
        };
        r297 = dyn strsplit1(p48, ",");
        return r297;
      };
      r299 = dyn unlist1(p49);
      return r299;
    };
    r301 = dyn trimws1(p50);
    check L530() else D152();
  L549():
    db82 = ld db;
    check L551() else D158();
  L550():
    r319 = dyn base47(<lang `<-`(val, `[`(db, "Priority"))>);
    goto L122(r319);
  D111():
    deopt 461 [];
  D152():
    deopt 608 [r301];
  D158():
    deopt 640 [db82];
  L114(c167, dx63):
    st val = dx63;
    is_na9 = ldf `is.na` in base;
    r294 = dyn is_na9(dx63);
    check L526() else D150();
  L124(c186):
    c193 = `as.logical`(c186);
    if c193 then L562() else L126(c193);
  L444():
    p28 = prom<V +>{
      paste1 = ldf paste0;
      p27 = prom<V +>{
        valid_package_name_regexp2 = ld valid_package_name_regexp;
        valid_package_name_regexp3 = force? valid_package_name_regexp2;
        checkMissing(valid_package_name_regexp3);
        return valid_package_name_regexp3;
      };
      r217 = dyn paste1("(R|", p27, ")");
      return r217;
    };
    r219 = dyn paste0("^[[:space:]]*", p28, "([[:space:]]*\\(([^) ]+)[[:space:]]+([^) ]+)\\))?", "[[:space:]]*$");
    check L445() else D112();
  L523():
    dr52 = tryDispatchBuiltin.1("[", db79);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L525() else L524(c157, dr52);
  L524(c165, db81):
    __14 = ldf `[` in base;
    r293 = dyn __14(db81, "VignetteBuilder");
    goto L114(c165, r293);
  L530():
    st depends = r301;
    sym45 = ldf length;
    base45 = ldf length in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L531() else L532();
  L551():
    db83 = force? db82;
    checkMissing(db83);
    c183 = `is.object`(db83);
    if c183 then L552() else L553(db83);
  L556():
    sym48 = ldf `is.na`;
    base48 = ldf `is.na` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L557() else L558();
  D112():
    deopt 466 [r219];
  D150():
    deopt 602 [c167, r294];
  L116(r303):
    r305 = `<`(r303, 1);
    c172 = `as.logical`(r305);
    if c172 then L117(c172) else L535();
  L123(dx67):
    st val = dx67;
    is_na10 = ldf `is.na` in base;
    r322 = dyn is_na10(dx67);
    check L555() else D159();
  L125(c189, r325):
    r327 = `!`(r325);
    c190 = `as.logical`(r327);
    c191 = `&&`(c189, c190);
    goto L124(c191);
  L126(c195):
    c200 = `as.logical`(c195);
    if c200 then L566() else L127(c200);
  L445():
    st dep_regexp = r219;
    depends = ld depends;
    check L446() else D113();
  L525():
    dx62 = getTryDispatchBuiltinValue(dr52);
    goto L114(c157, dx62);
  L526():
    goto L113(c167, r294);
  L531():
    depends2 = ld depends;
    check L533() else D153();
  L532():
    r302 = dyn base45(<sym depends>);
    goto L116(r302);
  L552():
    dr56 = tryDispatchBuiltin.1("[", db83);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L554() else L553(dr56);
  L553(db85):
    __15 = ldf `[` in base;
    r321 = dyn __15(db85, "Priority");
    goto L123(r321);
  L557():
    package_name = ld package_name;
    check L559() else D160();
  L558():
    r324 = dyn base48(<sym package_name>);
    goto L125(c184, r324);
  L562():
    _in_2 = ldf `%in%`;
    check L563() else D162();
  D113():
    deopt 468 [depends];
  D153():
    deopt 612 [depends2];
  D159():
    deopt 647 [r322];
  D160():
    deopt 651 [c184, package_name];
  D162():
    deopt 658 [c193];
  L117(c173):
    c181 = `as.logical`(c173);
    if c181 then L542() else L119();
  L127(c202):
    c206 = `as.logical`(c202);
    if c206 then L570() else L128();
  L446():
    depends1 = force? depends;
    checkMissing(depends1);
    s14 = toForSeq(depends1);
    l25 = length(s14);
    i = 0;
    goto L89(i);
  L533():
    depends3 = force? depends2;
    checkMissing(depends3);
    length3 = ldf length in base;
    r304 = dyn length3(depends3);
    check L534() else D154();
  L535():
    sym46 = ldf all;
    base46 = ldf all in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L536() else L537();
  L554():
    dx66 = getTryDispatchBuiltinValue(dr56);
    goto L123(dx66);
  L555():
    goto L122(r322);
  L559():
    package_name1 = force? package_name;
    checkMissing(package_name1);
    is_na11 = ldf `is.na` in base;
    r326 = dyn is_na11(package_name1);
    check L560() else D161();
  L563():
    p53 = prom<V +>{
      tolower = ldf tolower;
      p52 = prom<V +>{
        val30 = ld val;
        val31 = force? val30;
        checkMissing(val31);
        return val31;
      };
      r329 = dyn tolower(p52);
      return r329;
    };
    p54 = prom<V +>{
      sym49 = ldf c;
      base49 = ldf c in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L1() else L2();
    L0(r332):
      return r332;
    L1():
      c196 = ldf c in base;
      r333 = dyn c196("base", "recommended", "defunct-base");
      goto L0(r333);
    L2():
      r331 = dyn base49("base", "recommended", "defunct-base");
      goto L0(r331);
    };
    r335 = dyn _in_2(p53, p54);
    check L564() else D163();
  L566():
    _notin_2 = ldf `%notin%`;
    check L567() else D164();
  D154():
    deopt 615 [r304];
  D161():
    deopt 654 [c184, r326];
  D163():
    deopt 661 [c193, r335];
  D164():
    deopt 664 [c200];
  L89(i1):
    i2 = `+`.1(i1, 1);
    c142 = `<`.1(l25, i2);
    if c142 then L447() else L105();
  L118(c177, r307):
    r311 = `!`(r307);
    c178 = `as.logical`(r311);
    c179 = `||`(c177, c178);
    goto L117(c179);
  L119():
    goto L120(NULL);
  L120(r317):
    goto L121();
  L128():
    goto L129();
  L129():
    strict3 = ld strict;
    check L577() else D167();
  L534():
    goto L116(r304);
  L536():
    grepl7 = ldf grepl;
    check L538() else D155();
  L537():
    r306 = dyn base46(<lang grepl("^[[:alnum:].]*$", depends)>);
    goto L118(c172, r306);
  L542():
    l29 = ld out;
    c182 = `is.object`(l29);
    if c182 then L544() else L545(TRUE, l29);
  L560():
    goto L125(c184, r326);
  L564():
    c197 = `as.logical`(r335);
    c198 = `&&`(c193, c197);
    goto L126(c198);
  L567():
    p55 = prom<V +>{
      package_name2 = ld package_name;
      package_name3 = force? package_name2;
      checkMissing(package_name3);
      return package_name3;
    };
    p57 = prom<V +>{
      unlist2 = ldf unlist;
      p56 = prom<V +>{
        standard_package_names4 = ld standard_package_names;
        standard_package_names5 = force? standard_package_names4;
        checkMissing(standard_package_names5);
        return standard_package_names5;
      };
      r338 = dyn unlist2(p56);
      return r338;
    };
    r340 = dyn _notin_2(p55, p57);
    check L568() else D165();
  L570():
    val32 = ld val;
    check L571() else D166();
  D155():
    deopt 621 [c172];
  D165():
    deopt 667 [c200, r340];
  D166():
    deopt 669 [val32];
  D167():
    deopt 676 [strict3];
  L105():
    x = `[[`(s14, i2, NULL, TRUE);
    st dep = x;
    grepl3 = ldf grepl;
    check L448() else D114();
  L447():
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L496() else L497();
  L538():
    p51 = prom<V +>{
      depends4 = ld depends;
      depends5 = force? depends4;
      checkMissing(depends5);
      return depends5;
    };
    r309 = dyn grepl7("^[[:alnum:].]*$", p51);
    check L539() else D156();
  L543(r315, dx65):
    st out = dx65;
    goto L120(r315);
  L544():
    dr54 = tryDispatchBuiltin.0("$<-", l29, TRUE);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L546() else L545(TRUE, dr54);
  L545(r313, l31):
    r316 = `$<-`(l31, <sym bad_vignettebuilder>, TRUE);
    goto L543(r313, r316);
  L568():
    c203 = `as.logical`(r340);
    c204 = `&&`(c200, c203);
    goto L127(c204);
  L571():
    val33 = force? val32;
    checkMissing(val33);
    l32 = ld out;
    c207 = `is.object`(l32);
    if c207 then L573() else L574(val33, l32);
  L577():
    strict4 = force? strict3;
    checkMissing(strict4);
    c208 = `as.logical`(strict4);
    if c208 then L578() else L130(c208);
  D114():
    deopt 471 [i2];
  D156():
    deopt 624 [c172, r309];
  L106(r276):
    c155 = `as.logical`(r276);
    if c155 then L505() else L108();
  L130(c210):
    c222 = `as.logical`(c210);
    if c222 then L587() else L133(c222);
  L448():
    p29 = prom<V +>{
      dep_regexp = ld dep_regexp;
      dep_regexp1 = force? dep_regexp;
      checkMissing(dep_regexp1);
      return dep_regexp1;
    };
    p30 = prom<V +>{
      dep = ld dep;
      dep1 = force? dep;
      checkMissing(dep1);
      return dep1;
    };
    r222 = dyn grepl3(p29, p30);
    check L449() else D115();
  L496():
    sym42 = ldf c;
    base42 = ldf c in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L498() else L499();
  L497():
    r275 = dyn base41(<lang c(bad_dep_entry, bad_dep_op, bad_dep_version)>);
    goto L106(r275);
  L539():
    all1 = ldf all in base;
    r310 = dyn all1(r309);
    check L540() else D157();
  L546():
    dx64 = getTryDispatchBuiltinValue(dr54);
    goto L543(TRUE, dx64);
  L572(val37, dx69):
    st out = dx69;
    goto L129();
  L573():
    dr58 = tryDispatchBuiltin.0("$<-", l32, val33);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L575() else L574(val33, dr58);
  L574(val35, l34):
    r341 = `$<-`(l34, <sym bad_priority>, val33);
    goto L572(val35, r341);
  L578():
    sym50 = ldf `is.na`;
    base50 = ldf `is.na` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L579() else L580();
  D115():
    deopt 474 [i2, r222];
  D157():
    deopt 626 [c172, r310];
  L107(r278):
    length2 = ldf length in base;
    r280 = dyn length2(r278);
    check L504() else D143();
  L108():
    goto L110(NULL);
  L110(r289):
    goto L111();
  L131(c213, r343):
    r346 = `!`(r343);
    c219 = `as.logical`(r346);
    c220 = `&&`(c213, c219);
    goto L130(c220);
  L133(c224):
    c228 = `as.logical`(c224);
    if c228 then L591() else L134(c228);
  L449():
    r223 = `!`(r222);
    c143 = `as.logical`(r223);
    if c143 then L450() else L90();
  L498():
    bad_dep_entry2 = ld bad_dep_entry;
    check L500() else D139();
  L499():
    r277 = dyn base42(<sym bad_dep_entry>, <sym bad_dep_op>, <sym bad_dep_version>);
    goto L107(r277);
  L505():
    sym43 = ldf list;
    base43 = ldf list in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L506() else L507();
  L540():
    goto L118(c172, r310);
  L575():
    dx68 = getTryDispatchBuiltinValue(dr58);
    goto L572(val33, dx68);
  L579():
    db86 = ld db;
    check L581() else D168();
  L580():
    r342 = dyn base50(<lang `<-`(val, `[`(db, "Title"))>);
    goto L131(c208, r342);
  L587():
    endsWith = ldf endsWith;
    check L588() else D170();
  D139():
    deopt 561 [bad_dep_entry2];
  D143():
    deopt 570 [r280];
  D168():
    deopt 680 [c208, db86];
  D170():
    deopt 691 [c222];
  L90():
    sym36 = ldf nzchar;
    base36 = ldf nzchar in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L458() else L459();
  L109(r282):
    l26 = ld out;
    c156 = `is.object`(l26);
    if c156 then L513() else L514(r282, l26);
  L134(c230):
    c234 = `as.logical`(c230);
    if c234 then L595() else L135();
  L450():
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L451() else L452();
  L500():
    bad_dep_entry3 = force? bad_dep_entry2;
    checkMissing(bad_dep_entry3);
    bad_dep_op2 = ld bad_dep_op;
    check L501() else D140();
  L504():
    goto L106(r280);
  L506():
    bad_dep_entry4 = ld bad_dep_entry;
    check L508() else D144();
  L507():
    r281 = dyn base43[bad_dep_entry, bad_dep_op, bad_dep_version](<sym bad_dep_entry>, <sym bad_dep_op>, <sym bad_dep_version>);
    goto L109(r281);
  L581():
    db87 = force? db86;
    checkMissing(db87);
    c214 = `is.object`(db87);
    if c214 then L582() else L583(c208, db87);
  L588():
    p58 = prom<V +>{
      val39 = ld val;
      val40 = force? val39;
      checkMissing(val40);
      return val40;
    };
    r348 = dyn endsWith(p58, ".");
    check L589() else D171();
  L591():
    grepl8 = ldf grepl;
    check L592() else D172();
  D140():
    deopt 563 [bad_dep_op2];
  D144():
    deopt 573 [bad_dep_entry4];
  D171():
    deopt 694 [c222, r348];
  D172():
    deopt 697 [c228];
  L91(i9, r225):
    st bad_dep_entry = r225;
    goto L89(i9);
  L93(i14, r229):
    c145 = `as.logical`(r229);
    if c145 then L463() else L94();
  L132(c218, dx71):
    st val = dx71;
    is_na12 = ldf `is.na` in base;
    r345 = dyn is_na12(dx71);
    check L585() else D169();
  L135():
    goto L136();
  L136():
    strict5 = ld strict;
    check L601() else D174();
  L451():
    bad_dep_entry = ld bad_dep_entry;
    check L453() else D116();
  L452():
    r224 = dyn base35(<sym bad_dep_entry>, <sym dep>);
    goto L91(i2, r224);
  L458():
    sub = ldf sub;
    check L460() else D119();
  L459():
    r228 = dyn base36(<lang sub(dep_regexp, "\\2", dep)>);
    goto L93(i2, r228);
  L501():
    bad_dep_op3 = force? bad_dep_op2;
    checkMissing(bad_dep_op3);
    bad_dep_version4 = ld bad_dep_version;
    check L502() else D141();
  L508():
    bad_dep_entry5 = force? bad_dep_entry4;
    checkMissing(bad_dep_entry5);
    bad_dep_op4 = ld bad_dep_op;
    check L509() else D145();
  L512(r287, dx61):
    st out = dx61;
    goto L110(r287);
  L513():
    dr50 = tryDispatchBuiltin.0("$<-", l26, r282);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L515() else L514(r282, dr50);
  L514(r285, l28):
    r288 = `$<-`(l28, <sym bad_depends_or_suggests_or_imports>, r282);
    goto L512(r285, r288);
  L582():
    dr60 = tryDispatchBuiltin.1("[", db87);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L584() else L583(c208, dr60);
  L583(c216, db89):
    __16 = ldf `[` in base;
    r344 = dyn __16(db89, "Title");
    goto L132(c216, r344);
  L589():
    c225 = `as.logical`(r348);
    c226 = `&&`(c222, c225);
    goto L133(c226);
  L592():
    p60 = prom<V +>{
      trimws2 = ldf trimws;
      p59 = prom<V +>{
        val41 = ld val;
        val42 = force? val41;
        checkMissing(val42);
        return val42;
      };
      r350 = dyn trimws2(p59);
      return r350;
    };
    r352 = dyn grepl8("[[:space:]][.][.][.]|et[[:space:]]al[.]", p60);
    check L593() else D173();
  L595():
    l35 = ld out;
    c235 = `is.object`(l35);
    if c235 then L597() else L598(TRUE, l35);
  D116():
    deopt 478 [i2, bad_dep_entry];
  D119():
    deopt 492 [i2];
  D141():
    deopt 565 [bad_dep_version4];
  D145():
    deopt 576 [bad_dep_op4];
  D169():
    deopt 687 [c218, r345];
  D173():
    deopt 700 [c228, r352];
  D174():
    deopt 710 [strict5];
  L94():
    goto L104(i14);
  L104(i36):
    goto L89(i36);
  L453():
    bad_dep_entry1 = force? bad_dep_entry;
    checkMissing(bad_dep_entry1);
    dep2 = ld dep;
    check L454() else D117();
  L460():
    p31 = prom<V +>{
      dep_regexp2 = ld dep_regexp;
      dep_regexp3 = force? dep_regexp2;
      checkMissing(dep_regexp3);
      return dep_regexp3;
    };
    p32 = prom<V +>{
      dep4 = ld dep;
      dep5 = force? dep4;
      checkMissing(dep5);
      return dep5;
    };
    r232 = dyn sub(p31, "\\2", p32);
    check L461() else D120();
  L463():
    _notin_1 = ldf `%notin%`;
    check L464() else D122();
  L502():
    bad_dep_version5 = force? bad_dep_version4;
    checkMissing(bad_dep_version5);
    c154 = ldf c in base;
    r279 = dyn c154(bad_dep_entry3, bad_dep_op3, bad_dep_version5);
    check L503() else D142();
  L509():
    bad_dep_op5 = force? bad_dep_op4;
    checkMissing(bad_dep_op5);
    bad_dep_version6 = ld bad_dep_version;
    check L510() else D146();
  L515():
    dx60 = getTryDispatchBuiltinValue(dr50);
    goto L512(r282, dx60);
  L584():
    dx70 = getTryDispatchBuiltinValue(dr60);
    goto L132(c208, dx70);
  L585():
    goto L131(c218, r345);
  L593():
    r353 = `!`(r352);
    c231 = `as.logical`(r353);
    c232 = `&&`(c228, c231);
    goto L134(c232);
  L596(r357, dx73):
    st out = dx73;
    goto L136();
  L597():
    dr62 = tryDispatchBuiltin.0("$<-", l35, TRUE);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L599() else L598(TRUE, dr62);
  L598(r355, l37):
    r358 = `$<-`(l37, <sym bad_Title>, TRUE);
    goto L596(r355, r358);
  L601():
    strict6 = force? strict5;
    checkMissing(strict6);
    c236 = `as.logical`(strict6);
    if c236 then L602() else L137(c236);
  D117():
    deopt 480 [i2, dep2];
  D120():
    deopt 496 [i2, r232];
  D122():
    deopt 500 [i14];
  D142():
    deopt 568 [r279];
  D146():
    deopt 579 [bad_dep_version6];
  L137(c238):
    c250 = `as.logical`(c238);
    if c250 then L611() else L140(c250);
  L454():
    dep3 = force? dep2;
    checkMissing(dep3);
    c144 = ldf c in base;
    r226 = dyn c144(bad_dep_entry1, dep3);
    check L455() else D118();
  L461():
    nzchar = ldf nzchar in base;
    r233 = dyn nzchar(r232);
    check L462() else D121();
  L464():
    p35 = prom<V +>{
      sub1 = ldf sub;
      p33 = prom<V +>{
        dep_regexp4 = ld dep_regexp;
        dep_regexp5 = force? dep_regexp4;
        checkMissing(dep_regexp5);
        return dep_regexp5;
      };
      p34 = prom<V +>{
        dep6 = ld dep;
        dep7 = force? dep6;
        checkMissing(dep7);
        return dep7;
      };
      r236 = dyn sub1(p33, "\\3", p34);
      return r236;
    };
    p36 = prom<V +>{
      sym37 = ldf c;
      base37 = ldf c in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L1() else L2();
    L0(r239):
      return r239;
    L1():
      c146 = ldf c in base;
      r240 = dyn c146("<=", ">=", "<", ">", "==", "!=");
      goto L0(r240);
    L2():
      r238 = dyn base37("<=", ">=", "<", ">", "==", "!=");
      goto L0(r238);
    };
    r242 = dyn _notin_1(p35, p36);
    check L465() else D123();
  L503():
    goto L107(r279);
  L510():
    bad_dep_version7 = force? bad_dep_version6;
    checkMissing(bad_dep_version7);
    list1 = ldf list in base;
    r283 = dyn list1(bad_dep_entry5, bad_dep_op5, bad_dep_version7);
    check L511() else D147();
  L599():
    dx72 = getTryDispatchBuiltinValue(dr62);
    goto L596(TRUE, dx72);
  L602():
    sym51 = ldf `is.na`;
    base51 = ldf `is.na` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L603() else L604();
  D118():
    deopt 483 [i2, r226];
  D121():
    deopt 498 [i2, r233];
  D123():
    deopt 503 [i14, r242];
  D147():
    deopt 583 [r283];
  L138(c241, r361):
    r364 = `!`(r361);
    c247 = `as.logical`(r364);
    c248 = `&&`(c241, c247);
    goto L137(c248);
  L140(c252):
    c256 = `as.logical`(c252);
    if c256 then L615() else L141();
  L455():
    goto L91(i2, r226);
  L462():
    goto L93(i2, r233);
  L465():
    c147 = `as.logical`(r242);
    if c147 then L466() else L95();
  L511():
    goto L109(r283);
  L603():
    db90 = ld db;
    check L605() else D175();
  L604():
    r360 = dyn base51(<lang `<-`(val, `[`(db, "Description"))>);
    goto L138(c236, r360);
  L611():
    grepl9 = ldf grepl;
    check L612() else D177();
  D175():
    deopt 714 [c236, db90];
  D177():
    deopt 725 [c250];
  L95():
    grepl4 = ldf grepl;
    check L473() else D127();
  L97(i22, r246):
    goto L104(i22);
  L141():
    goto L142();
  L142():
    l41 = ld out;
    class__ = ldf `class<-`;
    check L621() else D179();
  L466():
    sym38 = ldf c;
    base38 = ldf c in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L467() else L468();
  L605():
    db91 = force? db90;
    checkMissing(db91);
    c242 = `is.object`(db91);
    if c242 then L606() else L607(c236, db91);
  L612():
    p62 = prom<V +>{
      trimws3 = ldf trimws;
      p61 = prom<V +>{
        val43 = ld val;
        val44 = force? val43;
        checkMissing(val44);
        return val44;
      };
      r366 = dyn trimws3(p61);
      return r366;
    };
    r368 = dyn grepl9("[.!?]['\")]?$", p62);
    check L613() else D178();
  L615():
    l38 = ld out;
    c257 = `is.object`(l38);
    if c257 then L617() else L618(TRUE, l38);
  D127():
    deopt 514 [i14];
  D178():
    deopt 728 [c250, r368];
  D179():
    deopt 741 ["check_package_description", l41, "check_package_description"];
  L96(i21, r244):
    st bad_dep_op = r244;
    goto L97(i21, r244);
  L139(c246, dx75):
    st val = dx75;
    is_na13 = ldf `is.na` in base;
    r363 = dyn is_na13(dx75);
    check L609() else D176();
  L467():
    bad_dep_op = ld bad_dep_op;
    check L469() else D124();
  L468():
    r243 = dyn base38(<sym bad_dep_op>, <sym dep>);
    goto L96(i14, r243);
  L473():
    p37 = prom<V +>{
      dep10 = ld dep;
      dep11 = force? dep10;
      checkMissing(dep11);
      return dep11;
    };
    r248 = dyn grepl4("^[[:space:]]*R", p37);
    check L474() else D128();
  L606():
    dr64 = tryDispatchBuiltin.1("[", db91);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L608() else L607(c236, dr64);
  L607(c244, db93):
    __17 = ldf `[` in base;
    r362 = dyn __17(db93, "Description");
    goto L139(c244, r362);
  L613():
    r369 = `!`(r368);
    c253 = `as.logical`(r369);
    c254 = `&&`(c250, c253);
    goto L140(c254);
  L616(r373, dx77):
    st out = dx77;
    goto L142();
  L617():
    dr66 = tryDispatchBuiltin.0("$<-", l38, TRUE);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L619() else L618(TRUE, dr66);
  L618(r371, l40):
    r374 = `$<-`(l40, <sym bad_Description>, TRUE);
    goto L616(r371, r374);
  L621():
    r376 = dyn class__(l41, NULL, "check_package_description");
    check L622() else D180();
  D124():
    deopt 506 [i14, bad_dep_op];
  D128():
    deopt 517 [i14, r248];
  D176():
    deopt 721 [c246, r363];
  D180():
    deopt 743 ["check_package_description", r376];
  L469():
    bad_dep_op1 = force? bad_dep_op;
    checkMissing(bad_dep_op1);
    dep8 = ld dep;
    check L470() else D125();
  L474():
    c149 = `as.logical`(r248);
    if c149 then L475() else L98();
  L608():
    dx74 = getTryDispatchBuiltinValue(dr64);
    goto L139(c236, dx74);
  L609():
    goto L138(c246, r363);
  L619():
    dx76 = getTryDispatchBuiltinValue(dr66);
    goto L616(TRUE, dx76);
  L622():
    st out = r376;
    out2 = ld out;
    check L623() else D181();
  D125():
    deopt 508 [i14, dep8];
  D181():
    deopt 745 [out2];
  L98():
    grepl6 = ldf grepl;
    check L486() else D134();
  L470():
    dep9 = force? dep8;
    checkMissing(dep9);
    c148 = ldf c in base;
    r245 = dyn c148(bad_dep_op1, dep9);
    check L471() else D126();
  L475():
    grepl5 = ldf grepl;
    check L476() else D129();
  L623():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  D126():
    deopt 511 [i14, r245];
  D129():
    deopt 519 [i14];
  D134():
    deopt 536 [i14];
  L471():
    goto L96(i14, r245);
  L476():
    p39 = prom<V +>{
      sprintf2 = ldf sprintf;
      p38 = prom<V +>{
        valid_package_version_regexp2 = ld valid_package_version_regexp;
        valid_package_version_regexp3 = force? valid_package_version_regexp2;
        checkMissing(valid_package_version_regexp3);
        return valid_package_version_regexp3;
      };
      r250 = dyn sprintf2("^(r[0-9]+|%s)$", p38);
      return r250;
    };
    p42 = prom<V +>{
      sub2 = ldf sub;
      p40 = prom<V +>{
        dep_regexp6 = ld dep_regexp;
        dep_regexp7 = force? dep_regexp6;
        checkMissing(dep_regexp7);
        return dep_regexp7;
      };
      p41 = prom<V +>{
        dep12 = ld dep;
        dep13 = force? dep12;
        checkMissing(dep13);
        return dep13;
      };
      r254 = dyn sub2(p40, "\\4", p41);
      return r254;
    };
    r256 = dyn grepl5(p39, p42);
    check L477() else D130();
  L486():
    p44 = prom<V +>{
      sprintf3 = ldf sprintf;
      p43 = prom<V +>{
        valid_package_version_regexp4 = ld valid_package_version_regexp;
        valid_package_version_regexp5 = force? valid_package_version_regexp4;
        checkMissing(valid_package_version_regexp5);
        return valid_package_version_regexp5;
      };
      r263 = dyn sprintf3("^%s$", p43);
      return r263;
    };
    p47 = prom<V +>{
      sub3 = ldf sub;
      p45 = prom<V +>{
        dep_regexp8 = ld dep_regexp;
        dep_regexp9 = force? dep_regexp8;
        checkMissing(dep_regexp9);
        return dep_regexp9;
      };
      p46 = prom<V +>{
        dep16 = ld dep;
        dep17 = force? dep16;
        checkMissing(dep17);
        return dep17;
      };
      r267 = dyn sub3(p45, "\\4", p46);
      return r267;
    };
    r269 = dyn grepl6(p44, p47);
    check L487() else D135();
  D130():
    deopt 522 [i14, r256];
  D135():
    deopt 539 [i14, r269];
  L477():
    r257 = `!`(r256);
    c150 = `as.logical`(r257);
    if c150 then L478() else L99();
  L487():
    r270 = `!`(r269);
    c152 = `as.logical`(r270);
    if c152 then L488() else L102();
  L99():
    goto L101(i14, NULL);
  L101(i30, r261):
    goto L97(i30, r261);
  L102():
    goto L97(i14, NULL);
  L478():
    sym39 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L479() else L480();
  L488():
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L489() else L490();
  L100(i29, r259):
    st bad_dep_version = r259;
    goto L101(i29, r259);
  L103(i35, r272):
    st bad_dep_version = r272;
    goto L97(i35, r272);
  L479():
    bad_dep_version = ld bad_dep_version;
    check L481() else D131();
  L480():
    r258 = dyn base39(<sym bad_dep_version>, <sym dep>);
    goto L100(i14, r258);
  L489():
    bad_dep_version2 = ld bad_dep_version;
    check L491() else D136();
  L490():
    r271 = dyn base40(<sym bad_dep_version>, <sym dep>);
    goto L103(i14, r271);
  D131():
    deopt 526 [i14, bad_dep_version];
  D136():
    deopt 543 [i14, bad_dep_version2];
  L481():
    bad_dep_version1 = force? bad_dep_version;
    checkMissing(bad_dep_version1);
    dep14 = ld dep;
    check L482() else D132();
  L491():
    bad_dep_version3 = force? bad_dep_version2;
    checkMissing(bad_dep_version3);
    dep18 = ld dep;
    check L492() else D137();
  D132():
    deopt 528 [i14, dep14];
  D137():
    deopt 545 [i14, dep18];
  L482():
    dep15 = force? dep14;
    checkMissing(dep15);
    c151 = ldf c in base;
    r260 = dyn c151(bad_dep_version1, dep15);
    check L483() else D133();
  L492():
    dep19 = force? dep18;
    checkMissing(dep19);
    c153 = ldf c in base;
    r273 = dyn c153(bad_dep_version3, dep19);
    check L493() else D138();
  D133():
    deopt 531 [i14, r260];
  D138():
    deopt 548 [i14, r273];
  L483():
    goto L100(i14, r260);
  L493():
    goto L103(i14, r273);
  }
}