fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.check_Rd_xrefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg unlist:cls, reg _get_standard_package_names:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg __:cls, reg r9:V, reg p:p(V +), reg r11:V, reg base1:*, reg base2:V, reg c2:L, reg base4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg dir_exists:cls, reg file_path:cls, reg _Library:*, reg _Library1:V, reg p1:p(V +), reg base5:*, reg base6:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg __1:cls, reg r17:V, reg lapply:cls, reg base7:*, reg base8:V, reg p4:p(V +), reg Rd_aliases:*, reg Rd_aliases1:V, reg p5:p(V +), reg r20:V, reg sym1:cls, reg base9:cls, reg guard1:L, reg r21:V, reg r22:V, reg missing:cls, reg r23:V, reg r24:V, reg c3:L, reg system_file:cls, reg package1:*, reg package2:V, reg p6:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p7:p(V +), reg r27:V, reg readRDS:cls, reg pfile:*, reg pfile1:V, reg p8:p(V +), reg r29:V, reg _split_description:cls, reg _get_package_metadata:cls, reg dir1:*, reg dir2:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg pkgInfo:*, reg pkgInfo1:V, reg c4:L, reg pkgInfo3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r35:V, reg c5:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r36:V, reg sym2:cls, reg base10:cls, reg guard2:L, reg r37:V, reg r38:V, reg sym3:cls, reg base11:cls, reg guard3:L, reg r39:V, reg r40:V, reg pkgInfo4:*, reg pkgInfo5:V, reg c6:L, reg pkgInfo7:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r41:V, reg names:cls, reg r42:V, reg sym4:cls, reg base12:cls, reg guard4:L, reg r43:V, reg r44:V, reg pkgInfo8:*, reg pkgInfo9:V, reg c7:L, reg pkgInfo11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r45:V, reg names1:cls, reg r46:V, reg c8:cls, reg r47:V, reg setdiff:cls, reg unique:cls, reg deps:*, reg deps1:V, reg p11:p(V +), reg r49:V, reg p12:p(V +), reg base13:*, reg base14:V, reg p13:p(V +), reg r52:V, reg r53:cls, reg sym5:cls, reg base15:cls, reg guard5:L, reg r54:V, reg r55:V, reg aliases:*, reg aliases1:V, reg lapply1:cls, reg pkgs:*, reg pkgs1:V, reg p14:p(V +), reg try_Rd_aliases:*, reg try_Rd_aliases1:V, reg p15:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p16:p(V +), reg r59:V, reg c9:cls, reg r60:V, reg l:*, reg c10:L, reg r62:dots, reg l2:*, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg vapply:cls, reg aliases2:*, reg aliases3:V, reg p17:p(V +), reg inherits:*, reg inherits1:V, reg p18:p(V +), reg r67:V, reg ___:cls, reg r68:V, reg sym6:cls, reg base16:cls, reg guard6:L, reg r69:V, reg r70:V, reg missing1:cls, reg r71:V, reg r72:V, reg c11:L, reg Rd_aliases2:cls, reg package3:*, reg package4:V, reg p19:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p20:p(V +), reg r75:V, reg sym7:cls, reg base17:cls, reg guard7:L, reg r76:V, reg r77:V, reg aliases4:*, reg aliases5:V, reg length:cls, reg r78:V, reg r79:V, reg c12:L, reg structure:cls, reg sym8:cls, reg base18:cls, reg guard8:L, reg r80:V, reg r81:V, reg list:cls, reg r82:V, reg p21:p(V +), reg r84:V, reg sym9:cls, reg base19:cls, reg guard9:L, reg r87:V, reg r88:V, reg aliases6:*, reg aliases7:V, reg sym10:cls, reg base20:cls, reg guard10:L, reg r89:V, reg r90:V, reg aliases8:*, reg aliases9:V, reg list1:cls, reg r91:V, reg c13:cls, reg r92:V, reg _build_Rd_xref_db:cls, reg package5:*, reg package6:V, reg p22:p(V +), reg lib_loc7:*, reg lib_loc8:V, reg p23:p(V +), reg r95:V, reg Rd_aliases3:cls, reg dir3:*, reg dir4:V, reg p24:p(V +), reg r98:V, reg sym11:cls, reg base21:cls, reg guard11:L, reg r99:V, reg r100:V, reg aliases10:*, reg aliases11:V, reg length1:cls, reg r101:V, reg r102:V, reg c14:L, reg structure1:cls, reg sym12:cls, reg base22:cls, reg guard12:L, reg r103:V, reg r104:V, reg list2:cls, reg r105:V, reg p25:p(V +), reg r107:V, reg sym13:cls, reg base23:cls, reg guard13:L, reg r110:V, reg r111:V, reg aliases12:*, reg aliases13:V, reg sym14:cls, reg base24:cls, reg guard14:L, reg r112:V, reg r113:V, reg aliases14:*, reg aliases15:V, reg list3:cls, reg r114:V, reg c15:cls, reg r115:V, reg _build_Rd_xref_db1:cls, reg dir5:*, reg dir6:V, reg p26:p(V +), reg r117:V, reg cbind:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p27:p(V +), reg db:*, reg db1:V, reg p28:p(V +), reg r120:V, reg p29:p(V +), reg sym15:cls, reg base25:cls, reg guard15:L, reg r122:V, reg r123:V, reg sym16:cls, reg base26:cls, reg guard16:L, reg r124:V, reg r125:V, reg db2:*, reg db3:V, reg names2:cls, reg r126:V, reg vapply1:cls, reg db4:*, reg db5:V, reg p30:p(V +), reg NROW:*, reg NROW1:V, reg p31:p(V +), reg r129:V, reg rep_int:cls, reg r130:V, reg p32:p(V +), reg r132:V, reg nrow:cls, reg db6:*, reg db7:V, reg p33:p(V +), reg r134:V, reg r135:V, reg c16:L, reg structure2:cls, reg sym17:cls, reg base27:cls, reg guard17:L, reg r136:V, reg r137:V, reg list4:cls, reg r138:V, reg p34:p(V +), reg r140:V, reg db8:*, reg db9:V, reg c17:L, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __3:cls, reg r143:V, reg startsWith:cls, reg anchor:*, reg anchor1:V, reg p35:p(V +), reg r145:V, reg sym18:cls, reg base28:cls, reg guard18:L, reg r146:V, reg r147:V, reg have_equals:*, reg have_equals1:V, reg any:cls, reg r148:V, reg c18:L, reg cbind1:cls, reg sub:cls, reg anchor2:*, reg anchor3:V, reg c19:L, reg anchor5:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg have_equals2:*, reg have_equals3:V, reg __4:cls, reg r149:V, reg p36:p(V +), reg r151:V, reg p37:p(V +), reg r153:V, reg l3:*, reg c20:L, reg r155:V, reg l5:*, reg dr18:V, reg dc9:L, reg dx20:V, reg r157:V, reg dx21:V, reg have_equals4:*, reg have_equals5:V, reg ___1:cls, reg r158:V, reg cbind2:cls, reg db12:*, reg db13:V, reg p38:p(V +), reg db14:*, reg db15:V, reg c21:L, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __5:cls, reg r161:V, reg p39:p(V +), reg r163:V, reg sym19:cls, reg base29:cls, reg guard19:L, reg r164:V, reg r165:V, reg db18:*, reg db19:V, reg c22:L, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg __6:cls, reg r166:V, reg nzchar:cls, reg r167:V, reg paste0:cls, reg db22:*, reg db23:V, reg c23:L, reg db25:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg have_anchor:*, reg have_anchor1:V, reg __7:cls, reg r168:V, reg p40:p(V +), reg db26:*, reg db27:V, reg c24:L, reg db29:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg have_anchor2:*, reg have_anchor3:V, reg __8:cls, reg r170:V, reg p41:p(V +), reg r172:V, reg l6:*, reg c25:L, reg r174:V, reg l8:*, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg have_anchor4:*, reg have_anchor5:V, reg ___2:cls, reg r177:V, reg _notin_:cls, reg db30:*, reg db31:V, reg c26:L, reg db33:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg have_anchor6:*, reg have_anchor7:V, reg r178:V, reg __9:cls, reg r179:V, reg p42:p(V +), reg unlist1:cls, reg aliases16:*, reg aliases17:V, reg p43:p(V +), reg r182:V, reg p44:p(V +), reg r184:V, reg l9:*, reg c27:L, reg r186:V, reg l11:*, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg have_anchor8:*, reg have_anchor9:V, reg r189:V, reg ___3:cls, reg r190:V, reg grepl:cls, reg anchor6:*, reg anchor7:V, reg p45:p(V +), reg r192:V, reg character:cls, reg r193:V, reg anchor8:*, reg anchor9:V, reg db34:*, reg db35:V, reg c28:L, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg __10:cls, reg r194:V, reg sub1:cls, reg anchor10:*, reg anchor11:V, reg c29:L, reg anchor13:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg have_colon:*, reg have_colon1:V, reg __11:cls, reg r195:V, reg p46:p(V +), reg r197:V, reg l12:*, reg c30:L, reg r199:V, reg l14:*, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg have_colon2:*, reg have_colon3:V, reg ___4:cls, reg r202:V, reg sub2:cls, reg anchor14:*, reg anchor15:V, reg c31:L, reg anchor17:V, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg have_colon4:*, reg have_colon5:V, reg __12:cls, reg r203:V, reg p47:p(V +), reg r205:V, reg l15:*, reg c32:L, reg r207:V, reg l17:*, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg have_colon6:*, reg have_colon7:V, reg ___5:cls, reg r210:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r211:V, reg p48:p(V +), reg r213:V, reg use_aliases_from_CRAN:*, reg use_aliases_from_CRAN1:V, reg c33:L, reg unique1:cls, reg thispkg:*, reg thispkg1:V, reg c34:L, reg thispkg3:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg have_anchor10:*, reg have_anchor11:V, reg __13:cls, reg r215:V, reg p49:p(V +), reg r217:V, reg config_val_to_logical1:cls, reg Sys_getenv1:cls, reg r218:V, reg p50:p(V +), reg r220:V, reg check_anchors:*, reg check_anchors1:V, reg c35:L, reg sym20:cls, reg base30:cls, reg guard20:L, reg r221:V, reg r222:V, reg sym21:cls, reg base31:cls, reg guard21:L, reg r223:V, reg r224:V, reg pkgInfo12:*, reg pkgInfo13:V, reg c36:L, reg pkgInfo15:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg r225:V, reg names3:cls, reg r226:V, reg sym22:cls, reg base32:cls, reg guard22:L, reg r227:V, reg r228:V, reg pkgInfo16:*, reg pkgInfo17:V, reg c37:L, reg pkgInfo19:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg r229:V, reg names4:cls, reg r230:V, reg sym23:cls, reg base33:cls, reg guard23:L, reg r231:V, reg r232:V, reg pkgInfo20:*, reg pkgInfo21:V, reg c38:L, reg pkgInfo23:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg r233:V, reg names5:cls, reg r234:V, reg c39:cls, reg r235:V, reg setdiff1:cls, reg anchors:*, reg anchors1:V, reg p51:p(V +), reg sym24:cls, reg base34:cls, reg guard24:L, reg r237:V, reg r238:V, reg unique2:cls, reg deps2:*, reg deps3:V, reg p52:p(V +), reg r240:V, reg pkgname:*, reg pkgname1:V, reg base35:*, reg base36:V, reg c40:cls, reg r241:V, reg p53:p(V +), reg r243:V, reg sym25:cls, reg base37:cls, reg guard25:L, reg r244:V, reg r245:V, reg undeclared:*, reg undeclared1:V, reg length2:cls, reg r246:V, reg c41:L, reg pkgInfo24:*, reg pkgInfo25:V, reg c42:L, reg pkgInfo27:V, reg dr52:V, reg dc26:L, reg dx54:V, reg dx55:V, reg r247:V, reg _in_:cls, reg sym26:cls, reg base38:cls, reg guard26:L, reg r248:V, reg r249:V, reg DESC:*, reg DESC1:V, reg names6:cls, reg r250:V, reg p54:p(V +), reg r252:V, reg c43:L, reg sym27:cls, reg base39:cls, reg guard27:L, reg r253:V, reg r254:V, reg _split_dependencies:cls, reg DESC2:*, reg DESC3:V, reg c44:L, reg DESC5:V, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg __14:cls, reg r255:V, reg p55:p(V +), reg r257:V, reg names7:cls, reg r258:V, reg setdiff2:cls, reg undeclared2:*, reg undeclared3:V, reg p56:p(V +), reg enh:*, reg enh1:V, reg p57:p(V +), reg r261:V, reg r262:V, reg sym28:cls, reg base40:cls, reg guard28:L, reg r264:V, reg r265:V, reg undeclared4:*, reg undeclared5:V, reg length3:cls, reg r266:V, reg c45:L, reg message:cls, reg sprintf:cls, reg ngettext:cls, reg sym29:cls, reg base41:cls, reg guard29:L, reg r267:V, reg r268:V, reg undeclared6:*, reg undeclared7:V, reg length4:cls, reg r269:V, reg p58:p(V +), reg r271:V, reg p59:p(V +), reg paste1:cls, reg sQuote:cls, reg undeclared8:*, reg undeclared9:V, reg p60:p(V +), reg r274:V, reg p61:p(V +), reg r276:V, reg p62:p(V +), reg r278:V, reg p63:p(V +), reg r280:V, reg r281:V, reg config_val_to_logical2:cls, reg Sys_getenv2:cls, reg r283:V, reg p64:p(V +), reg r285:V, reg mind_suspects:*, reg mind_suspects1:V, reg c46:L, reg cbind3:cls, reg db38:*, reg db39:V, reg p65:p(V +), reg r287:V, reg anchors2:*, reg anchors3:V, reg s:V, reg l18:I, reg i:I, reg i1:I, reg i2:I, reg c47:L, reg x:V, reg sym30:cls, reg base42:cls, reg guard30:L, reg r289:V, reg i7:I, reg r290:V, reg missing2:cls, reg r291:V, reg c48:L, reg i9:I, reg c50:V, reg pkg:*, reg pkg1:V, reg pkgname2:*, reg pkgname3:V, reg r292:V, reg c51:L, reg c52:V, reg c54:L, reg have_anchor12:*, reg have_anchor13:V, reg _in_1:cls, reg thispkg4:*, reg thispkg5:V, reg p66:p(V +), reg pkg2:*, reg pkg3:V, reg p67:p(V +), reg r296:V, reg r297:V, reg system_file1:cls, reg pkg4:*, reg pkg5:V, reg p68:p(V +), reg lib_loc9:*, reg lib_loc10:V, reg p69:p(V +), reg r300:V, reg sym31:cls, reg base43:cls, reg guard31:L, reg r301:V, reg i17:I, reg r302:V, reg top:*, reg top1:V, reg nzchar1:cls, reg r303:V, reg c55:L, reg file_path1:cls, reg top2:*, reg top3:V, reg p70:p(V +), reg r305:V, reg sub3:cls, reg basename:cls, reg readRDS1:cls, reg RdDB:*, reg RdDB1:V, reg p71:p(V +), reg r307:V, reg p72:p(V +), reg r309:V, reg p73:p(V +), reg r311:V, reg _in_2:cls, reg thisfile:*, reg thisfile1:V, reg c56:L, reg thisfile3:V, reg dr56:V, reg dc28:L, reg dx58:V, reg dx59:V, reg this:*, reg this1:V, reg __15:cls, reg r312:V, reg p74:p(V +), reg nm:*, reg nm1:V, reg p75:p(V +), reg r315:V, reg sym32:cls, reg base44:cls, reg guard32:L, reg r316:V, reg i22:I, reg r317:V, reg good:*, reg good1:V, reg r318:V, reg any1:cls, reg r319:V, reg c57:L, reg _in_3:cls, reg pkg6:*, reg pkg7:V, reg p76:p(V +), reg sym33:cls, reg base45:cls, reg guard33:L, reg r321:V, reg r322:V, reg aliases18:*, reg aliases19:V, reg names8:cls, reg r323:V, reg p77:p(V +), reg r325:V, reg c58:L, reg aliases20:*, reg aliases21:V, reg c59:L, reg i28:I, reg aliases23:V, reg dr58:V, reg dc29:L, reg dx60:V, reg i30:I, reg dx61:V, reg pkg8:*, reg pkg9:V, reg __16:cls, reg r326:V, reg i31:I, reg dx62:V, reg Rd_aliases4:cls, reg pkg10:*, reg pkg11:V, reg p78:p(V +), reg lib_loc11:*, reg lib_loc12:V, reg p79:p(V +), reg r329:V, reg good2:*, reg good3:V, reg r330:V, reg _in_4:cls, reg thisfile4:*, reg thisfile5:V, reg c60:L, reg thisfile7:V, reg dr60:V, reg dc30:L, reg dx63:V, reg dx64:V, reg this2:*, reg this3:V, reg __17:cls, reg r331:V, reg p80:p(V +), reg aliases24:*, reg aliases25:V, reg p81:p(V +), reg r334:V, reg r335:V, reg i32:I, reg r336:V, reg good4:*, reg good5:V, reg r337:V, reg suspect:*, reg suspect1:V, reg r338:V, reg r339:V, reg l19:*, reg c61:L, reg i34:I, reg r341:V, reg l21:*, reg dr62:V, reg dc31:L, reg dx65:V, reg i36:I, reg dx66:V, reg this4:*, reg this5:V, reg ___6:cls, reg r344:V, reg mind_suspects2:*, reg mind_suspects3:V, reg c62:L, reg suspect2:*, reg suspect3:V, reg l22:*, reg c63:L, reg i40:I, reg suspect5:V, reg l24:*, reg dr64:V, reg dc32:L, reg dx67:V, reg i42:I, reg suspect7:V, reg dx68:V, reg this6:*, reg this7:V, reg ___7:cls, reg r345:V, reg i43:I, reg suspect8:V, reg i44:I, reg use_aliases_from_CRAN2:*, reg use_aliases_from_CRAN3:V, reg c64:L, reg sym34:cls, reg base46:cls, reg guard34:L, reg r346:V, reg i49:I, reg r347:V, reg aliases_db:*, reg aliases_db1:V, reg c65:V, reg c66:L, reg tried_aliases_db:*, reg tried_aliases_db1:V, reg c67:L, reg sym35:cls, reg base47:cls, reg guard35:L, reg r348:V, reg i56:I, reg r349:V, reg unknown:*, reg unknown1:V, reg pkg12:*, reg pkg13:V, reg c68:cls, reg r350:V, reg tryCatch:cls, reg CRAN_aliases_db:cls, reg r352:V, reg p82:p(V +), reg r354:cls, reg p83:p(V +), reg r356:V, reg sym36:cls, reg base48:cls, reg guard36:L, reg r357:V, reg i61:I, reg r358:V, reg aliases_db2:*, reg aliases_db3:V, reg c69:V, reg c70:L, reg sym37:cls, reg base49:cls, reg guard37:L, reg r359:V, reg i66:I, reg r360:V, reg unknown2:*, reg unknown3:V, reg pkg14:*, reg pkg15:V, reg c71:cls, reg r361:V, reg i69:I, reg aliases_db4:*, reg aliases_db5:V, reg c72:L, reg i71:I, reg aliases_db7:V, reg dr66:V, reg dc33:L, reg dx69:V, reg i73:I, reg dx70:V, reg pkg16:*, reg pkg17:V, reg __18:cls, reg r364:V, reg sym38:cls, reg base50:cls, reg guard38:L, reg r365:V, reg i76:I, reg r366:V, reg aliases26:*, reg aliases27:V, reg c73:V, reg c74:L, reg sym39:cls, reg base51:cls, reg guard39:L, reg r367:V, reg i81:I, reg r368:V, reg unknown4:*, reg unknown5:V, reg pkg18:*, reg pkg19:V, reg c75:cls, reg r369:V, reg sub4:cls, reg basename1:cls, reg sym40:cls, reg base52:cls, reg guard40:L, reg r371:V, reg r372:V, reg aliases28:*, reg aliases29:V, reg names9:cls, reg r373:V, reg p84:p(V +), reg r375:V, reg p85:p(V +), reg r377:V, reg _in_5:cls, reg thisfile8:*, reg thisfile9:V, reg c76:L, reg thisfile11:V, reg dr68:V, reg dc34:L, reg dx71:V, reg dx72:V, reg this8:*, reg this9:V, reg __19:cls, reg r378:V, reg p86:p(V +), reg nm2:*, reg nm3:V, reg p87:p(V +), reg r381:V, reg sym41:cls, reg base53:cls, reg guard41:L, reg r382:V, reg i86:I, reg r383:V, reg good6:*, reg good7:V, reg r384:V, reg any2:cls, reg r385:V, reg c77:L, reg unique3:cls, reg sym42:cls, reg base54:cls, reg guard42:L, reg r386:V, reg r387:V, reg unlist2:cls, reg aliases30:*, reg aliases31:V, reg p88:p(V +), reg r389:V, reg as_character:cls, reg r390:V, reg p89:p(V +), reg r392:V, reg good8:*, reg good9:V, reg r393:V, reg _in_6:cls, reg thisfile12:*, reg thisfile13:V, reg c78:L, reg thisfile15:V, reg dr70:V, reg dc35:L, reg dx73:V, reg dx74:V, reg this10:*, reg this11:V, reg __20:cls, reg r394:V, reg p90:p(V +), reg aliases32:*, reg aliases33:V, reg p91:p(V +), reg r397:V, reg r398:V, reg i89:I, reg r399:V, reg good10:*, reg good11:V, reg r400:V, reg suspect10:*, reg suspect11:V, reg r401:V, reg r402:V, reg l25:*, reg c79:L, reg i91:I, reg r404:V, reg l27:*, reg dr72:V, reg dc36:L, reg dx75:V, reg i93:I, reg dx76:V, reg this12:*, reg this13:V, reg ___8:cls, reg r407:V, reg mind_suspects4:*, reg mind_suspects5:V, reg c80:L, reg suspect12:*, reg suspect13:V, reg l28:*, reg c81:L, reg i97:I, reg suspect15:V, reg l30:*, reg dr74:V, reg dc37:L, reg dx77:V, reg i99:I, reg suspect17:V, reg dx78:V, reg this14:*, reg this15:V, reg ___9:cls, reg r408:V, reg i100:I, reg suspect18:V, reg sym43:cls, reg base55:cls, reg guard43:L, reg r409:V, reg i103:I, reg r410:V, reg unknown6:*, reg unknown7:V, reg pkg20:*, reg pkg21:V, reg c82:cls, reg r411:V, reg unique4:cls, reg unknown8:*, reg unknown9:V, reg p92:p(V +), reg r413:V, reg sym44:cls, reg base56:cls, reg guard44:L, reg r414:V, reg r415:V, reg unknown10:*, reg unknown11:V, reg length5:cls, reg r416:V, reg c83:L, reg _get_standard_repository_URLs:cls, reg r417:V, reg pkgInfo28:*, reg pkgInfo29:V, reg c84:L, reg pkgInfo31:V, reg dr76:V, reg dc38:L, reg dx79:V, reg dx80:V, reg __21:cls, reg r418:V, reg c85:L, reg dx82:V, reg dr78:V, reg dc39:L, reg dx83:V, reg dx84:V, reg __22:cls, reg r419:V, reg sym45:cls, reg base57:cls, reg guard45:L, reg r420:V, reg r421:V, reg aurls:*, reg aurls1:V, reg is_na:cls, reg r422:V, reg r423:V, reg c86:L, reg sym46:cls, reg base58:cls, reg guard46:L, reg r424:V, reg r425:V, reg repos:*, reg repos1:V, reg _read_additional_repositories_field:cls, reg aurls2:*, reg aurls3:V, reg p93:p(V +), reg r427:V, reg c87:cls, reg r428:V, reg try:cls, reg suppressWarnings:cls, reg __23:cls, reg r430:V, reg r431:cls, reg __24:cls, reg r432:V, reg r433:cls, reg repos2:*, reg repos3:V, reg p94:p(V +), reg r435:V, reg p95:p(V +), reg sym47:cls, reg base59:cls, reg guard47:L, reg r437:V, reg r438:V, reg c88:cls, reg r439:V, reg p96:p(V +), reg r441:V, reg c89:L, reg dr80:V, reg dc40:L, reg dx85:V, reg dx86:V, reg __25:cls, reg r444:V, reg p97:p(V +), reg r446:V, reg p98:p(V +), reg r448:V, reg sym48:cls, reg base60:cls, reg guard48:L, reg r449:V, reg r450:V, reg known:*, reg known1:V, reg inherits2:cls, reg r451:V, reg c90:L, reg r452:V, reg _in_7:cls, reg unknown12:*, reg unknown13:V, reg p99:p(V +), reg sym49:cls, reg base61:cls, reg guard49:L, reg r454:V, reg r455:V, reg known2:*, reg known3:V, reg sym50:cls, reg base62:cls, reg guard50:L, reg r456:V, reg r457:V, reg c91:cls, reg r458:V, reg c92:cls, reg r459:V, reg p100:p(V +), reg r461:V, reg sym51:cls, reg base63:cls, reg guard51:L, reg r462:V, reg r463:V, reg miss:*, reg miss1:V, reg any3:cls, reg r464:V, reg c93:L, reg message1:cls, reg sprintf1:cls, reg ngettext1:cls, reg sym52:cls, reg base64:cls, reg guard52:L, reg r465:V, reg r466:V, reg miss2:*, reg miss3:V, reg sum:cls, reg r467:V, reg p101:p(V +), reg r469:V, reg p102:p(V +), reg paste2:cls, reg sQuote1:cls, reg unknown14:*, reg unknown15:V, reg c94:L, reg unknown17:V, reg dr82:V, reg dc41:L, reg dx87:V, reg dx88:V, reg miss4:*, reg miss5:V, reg __26:cls, reg r471:V, reg p103:p(V +), reg r473:V, reg p104:p(V +), reg r475:V, reg p105:p(V +), reg r477:V, reg p106:p(V +), reg r479:V, reg sym53:cls, reg base65:cls, reg guard53:L, reg r481:V, reg r482:V, reg miss6:*, reg miss7:V, reg r483:V, reg any4:cls, reg r484:V, reg c95:L, reg message2:cls, reg sprintf2:cls, reg ngettext2:cls, reg sym54:cls, reg base66:cls, reg guard54:L, reg r485:V, reg r486:V, reg miss8:*, reg miss9:V, reg r487:V, reg sum1:cls, reg r488:V, reg p107:p(V +), reg r490:V, reg p108:p(V +), reg paste3:cls, reg sQuote2:cls, reg unknown18:*, reg unknown19:V, reg c96:L, reg unknown21:V, reg dr84:V, reg dc42:L, reg dx89:V, reg dx90:V, reg miss10:*, reg miss11:V, reg r492:V, reg __27:cls, reg r493:V, reg p109:p(V +), reg r495:V, reg p110:p(V +), reg r497:V, reg p111:p(V +), reg r499:V, reg p112:p(V +), reg r501:V, reg r502:V, reg db40:*, reg db41:V, reg c97:L, reg dr86:V, reg dc43:L, reg dx91:V, reg dx92:V, reg __28:cls, reg r504:V, reg r505:V, reg sym55:cls, reg base67:cls, reg guard55:L, reg r506:V, reg r507:V, reg split:cls, reg db44:*, reg db45:V, reg c98:L, reg db47:V, reg dr88:V, reg dc44:L, reg dx93:V, reg dx94:V, reg bad:*, reg bad1:V, reg __29:cls, reg r508:V, reg p113:p(V +), reg db48:*, reg db49:V, reg c99:L, reg db51:V, reg dr90:V, reg dc45:L, reg dx95:V, reg dx96:V, reg bad2:*, reg bad3:V, reg __30:cls, reg r510:V, reg p114:p(V +), reg r512:V, reg list5:cls, reg r513:V, reg mind_suspects6:*, reg mind_suspects7:V, reg c100:L, reg c102:V, reg sym56:cls, reg base68:cls, reg guard56:L, reg r514:V, reg c105:L, reg r515:V, reg db52:*, reg db53:V, reg c106:L, reg c108:L, reg dr92:V, reg dc46:L, reg dx97:V, reg c110:L, reg dx98:V, reg __31:cls, reg r516:V, reg r517:V, reg any5:cls, reg r518:V, reg c111:L, reg c112:V, reg c114:L, reg sym57:cls, reg base69:cls, reg guard57:L, reg r519:V, reg r520:V, reg out:*, reg out1:V, reg sym58:cls, reg base70:cls, reg guard58:L, reg r521:V, reg r522:V, reg split1:cls, reg db56:*, reg db57:V, reg c115:L, reg db59:V, reg dr94:V, reg dc47:L, reg dx99:V, reg dx100:V, reg ind:*, reg ind1:V, reg __32:cls, reg r523:V, reg p115:p(V +), reg db60:*, reg db61:V, reg c116:L, reg db63:V, reg dr96:V, reg dc48:L, reg dx101:V, reg dx102:V, reg ind2:*, reg ind3:V, reg __33:cls, reg r525:V, reg p116:p(V +), reg r527:V, reg list6:cls, reg r528:V, reg c117:cls, reg r529:V, reg structure3:cls, reg out2:*, reg out3:V, reg p117:p(V +), reg r532:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    unlist = ldf unlist;
    check L127() else D0();
  D0():
    deopt 1 [];
  L127():
    p = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r = dyn _get_standard_package_names();
      c = `is.object`(r);
      if c then L2() else L3(r);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", r);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r2):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(r6, r7):
      __ = ldf `[` in base;
      r9 = dyn __(r6, r7);
      goto L0(r9);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r8 = dyn c1("base", "recommended");
      goto L1(r2, r8);
    L6():
      r5 = dyn base("base", "recommended");
      goto L1(r2, r5);
    };
    r11 = dyn unlist[, `use.names`](p, FALSE);
    check L128() else D1();
  D1():
    deopt 5 [r11];
  L128():
    st base = r11;
    base1 = ld base;
    check L129() else D2();
  D2():
    deopt 7 [base1];
  L129():
    base2 = force? base1;
    checkMissing(base2);
    c2 = `is.object`(base2);
    if c2 then L130() else L131(base2);
  L1(dx3):
    st base = dx3;
    lapply = ldf lapply;
    check L135() else D5();
  L130():
    dr2 = tryDispatchBuiltin.1("[", base2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L132() else L131(dr2);
  L131(base4):
    dir_exists = ldf `dir.exists`;
    check L133() else D3();
  D3():
    deopt 10 [base4];
  D5():
    deopt 16 [];
  L132():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L133():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        _Library = ld `.Library`;
        _Library1 = force? _Library;
        checkMissing(_Library1);
        return _Library1;
      };
      p2 = prom<V +>{
        base5 = ld base;
        base6 = force? base5;
        checkMissing(base6);
        return base6;
      };
      r14 = dyn file_path(p1, p2);
      return r14;
    };
    r16 = dyn dir_exists(p3);
    check L134() else D4();
  L135():
    p4 = prom<V +>{
      base7 = ld base;
      base8 = force? base7;
      checkMissing(base8);
      return base8;
    };
    p5 = prom<V +>{
      Rd_aliases = ld Rd_aliases;
      Rd_aliases1 = force? Rd_aliases;
      checkMissing(Rd_aliases1);
      return Rd_aliases1;
    };
    r20 = dyn lapply[, , `lib.loc`](p4, p5, NULL);
    check L136() else D6();
  D4():
    deopt 12 [base4, r16];
  D6():
    deopt 21 [r20];
  L134():
    __1 = ldf `[` in base;
    r17 = dyn __1(base4, r16);
    goto L1(r17);
  L136():
    st aliases = r20;
    sym1 = ldf missing;
    base9 = ldf missing in base;
    guard1 = `==`.4(sym1, base9);
    if guard1 then L137() else L138();
  L2(r22):
    r24 = `!`(r22);
    c3 = `as.logical`(r24);
    if c3 then L139() else L3();
  L137():
    missing = ldf missing in base;
    r23 = dyn missing(<sym package>);
    goto L2(r23);
  L138():
    r21 = dyn base9(<sym package>);
    goto L2(r21);
  L3():
    _split_description = ldf `.split_description`;
    check L145() else D11();
  L4():
    pkgInfo = ld pkgInfo;
    check L147() else D13();
  L139():
    system_file = ldf `system.file`;
    check L140() else D7();
  D7():
    deopt 28 [];
  D11():
    deopt 43 [];
  D13():
    deopt 47 [pkgInfo];
  L140():
    p6 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p7 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r27 = dyn system_file[, , package, `lib.loc`]("Meta", "package.rds", p6, p7);
    check L141() else D8();
  L145():
    p10 = prom<V +>{
      _get_package_metadata = ldf `.get_package_metadata`;
      p9 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r32 = dyn _get_package_metadata(p9);
      return r32;
    };
    r34 = dyn _split_description(p10);
    check L146() else D12();
  L147():
    pkgInfo1 = force? pkgInfo;
    checkMissing(pkgInfo1);
    c4 = `is.object`(pkgInfo1);
    if c4 then L149() else L150(pkgInfo1);
  D8():
    deopt 35 [r27];
  D12():
    deopt 45 [r34];
  L141():
    st pfile = r27;
    readRDS = ldf readRDS;
    check L142() else D9();
  L146():
    st pkgInfo = r34;
    goto L4();
  L148(dx5):
    c5 = `is.object`(dx5);
    if c5 then L152() else L153(dx5);
  L149():
    dr4 = tryDispatchBuiltin.1("$", pkgInfo1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L151() else L150(dr4);
  L150(pkgInfo3):
    r35 = `$`(pkgInfo3, <sym DESCRIPTION>);
    goto L148(r35);
  D9():
    deopt 38 [];
  L5(dx9):
    st pkgname = dx9;
    sym2 = ldf c;
    base10 = ldf c in base;
    guard2 = `==`.4(sym2, base10);
    if guard2 then L155() else L156();
  L142():
    p8 = prom<V +>{
      pfile = ld pfile;
      pfile1 = force? pfile;
      checkMissing(pfile1);
      return pfile1;
    };
    r29 = dyn readRDS(p8);
    check L143() else D10();
  L151():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L148(dx4);
  L152():
    dr6 = tryDispatchBuiltin.1("[[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L154() else L153(dr6);
  L153(dx7):
    __2 = ldf `[[` in base;
    r36 = dyn __2(dx7, "Package");
    goto L5(r36);
  D10():
    deopt 40 [r29];
  L6(r38):
    st deps = r38;
    setdiff = ldf setdiff;
    check L174() else D19();
  L143():
    st pkgInfo = r29;
    goto L4();
  L154():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx8);
  L155():
    sym3 = ldf names;
    base11 = ldf names in base;
    guard3 = `==`.4(sym3, base11);
    if guard3 then L157() else L158();
  L156():
    r37 = dyn base10(<lang names(`$`(pkgInfo, Depends))>, <lang names(`$`(pkgInfo, Imports))>);
    goto L6(r37);
  D19():
    deopt 74 [];
  L7(r40):
    sym4 = ldf names;
    base12 = ldf names in base;
    guard4 = `==`.4(sym4, base12);
    if guard4 then L165() else L166();
  L157():
    pkgInfo4 = ld pkgInfo;
    check L159() else D14();
  L158():
    r39 = dyn base11(<lang `$`(pkgInfo, Depends)>);
    goto L7(r39);
  L174():
    p12 = prom<V +>{
      unique = ldf unique;
      p11 = prom<V +>{
        deps = ld deps;
        deps1 = force? deps;
        checkMissing(deps1);
        return deps1;
      };
      r49 = dyn unique(p11);
      return r49;
    };
    p13 = prom<V +>{
      base13 = ld base;
      base14 = force? base13;
      checkMissing(base14);
      return base14;
    };
    r52 = dyn setdiff(p12, p13);
    check L175() else D20();
  D14():
    deopt 58 [pkgInfo4];
  D20():
    deopt 77 [r52];
  L8(r44):
    c8 = ldf c in base;
    r47 = dyn c8(r40, r44);
    check L173() else D18();
  L159():
    pkgInfo5 = force? pkgInfo4;
    checkMissing(pkgInfo5);
    c6 = `is.object`(pkgInfo5);
    if c6 then L161() else L162(pkgInfo5);
  L165():
    pkgInfo8 = ld pkgInfo;
    check L167() else D16();
  L166():
    r43 = dyn base12(<lang `$`(pkgInfo, Imports)>);
    goto L8(r43);
  L175():
    st pkgs = r52;
    r53 = clos inner1246119658;
    st try_Rd_aliases = r53;
    sym5 = ldf c;
    base15 = ldf c in base;
    guard5 = `==`.4(sym5, base15);
    if guard5 then L176() else L177();
  D16():
    deopt 65 [pkgInfo8];
  D18():
    deopt 71 [r47];
  L9(r55):
    st aliases = r55;
    l = ld aliases;
    c10 = `is.object`(l);
    if c10 then L182() else L183(NULL, l);
  L160(dx11):
    names = ldf names in base;
    r42 = dyn names(dx11);
    check L164() else D15();
  L161():
    dr8 = tryDispatchBuiltin.1("$", pkgInfo5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L163() else L162(dr8);
  L162(pkgInfo7):
    r41 = `$`(pkgInfo7, <sym Depends>);
    goto L160(r41);
  L167():
    pkgInfo9 = force? pkgInfo8;
    checkMissing(pkgInfo9);
    c7 = `is.object`(pkgInfo9);
    if c7 then L169() else L170(pkgInfo9);
  L173():
    goto L6(r47);
  L176():
    aliases = ld aliases;
    check L178() else D21();
  L177():
    r54 = dyn base15(<sym aliases>, <lang lapply(pkgs, try_Rd_aliases, lib.loc=lib.loc)>);
    goto L9(r54);
  D15():
    deopt 62 [r42];
  D21():
    deopt 84 [aliases];
  L10(dx15):
    st aliases = dx15;
    sym6 = ldf missing;
    base16 = ldf missing in base;
    guard6 = `==`.4(sym6, base16);
    if guard6 then L187() else L188();
  L163():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L160(dx10);
  L164():
    goto L7(r42);
  L168(dx13):
    names1 = ldf names in base;
    r46 = dyn names1(dx13);
    check L172() else D17();
  L169():
    dr10 = tryDispatchBuiltin.1("$", pkgInfo9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L171() else L170(dr10);
  L170(pkgInfo11):
    r45 = `$`(pkgInfo11, <sym Imports>);
    goto L168(r45);
  L178():
    aliases1 = force? aliases;
    checkMissing(aliases1);
    lapply1 = ldf lapply;
    check L179() else D22();
  L182():
    dr12 = tryDispatchBuiltin.0("[<-", l, NULL);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L184() else L183(NULL, dr12);
  L183(r62, l2):
    vapply = ldf vapply;
    check L185() else D25();
  D17():
    deopt 69 [r46];
  D22():
    deopt 87 [];
  D25():
    deopt 100 [r62, l2, NULL];
  L11(r70):
    r72 = `!`(r70);
    c11 = `as.logical`(r72);
    if c11 then L189() else L12();
  L171():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L168(dx12);
  L172():
    goto L8(r46);
  L179():
    p14 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    p15 = prom<V +>{
      try_Rd_aliases = ld try_Rd_aliases;
      try_Rd_aliases1 = force? try_Rd_aliases;
      checkMissing(try_Rd_aliases1);
      return try_Rd_aliases1;
    };
    p16 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    r59 = dyn lapply1[, , `lib.loc`](p14, p15, p16);
    check L180() else D23();
  L184():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx14);
  L185():
    p17 = prom<V +>{
      aliases2 = ld aliases;
      aliases3 = force? aliases2;
      checkMissing(aliases3);
      return aliases3;
    };
    p18 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r67 = dyn vapply[, , , `FUN.VALUE`](p17, p18, "error", NA_LGL);
    check L186() else D26();
  L187():
    missing1 = ldf missing in base;
    r71 = dyn missing1(<sym package>);
    goto L11(r71);
  L188():
    r69 = dyn base16(<sym package>);
    goto L11(r69);
  D23():
    deopt 92 [r59];
  D26():
    deopt 106 [r62, l2, NULL, r67];
  L12():
    Rd_aliases3 = ldf Rd_aliases;
    check L212() else D39();
  L18():
    cbind = ldf cbind;
    check L233() else D51();
  L180():
    c9 = ldf c in base;
    r60 = dyn c9(aliases1, r59);
    check L181() else D24();
  L186():
    ___ = ldf `[<-` in base;
    r68 = dyn ___(l2, NULL, r67);
    goto L10(r68);
  L189():
    Rd_aliases2 = ldf Rd_aliases;
    check L190() else D27();
  D24():
    deopt 94 [r60];
  D27():
    deopt 114 [];
  D39():
    deopt 157 [];
  D51():
    deopt 198 [];
  L181():
    goto L9(r60);
  L190():
    p19 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p20 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    r75 = dyn Rd_aliases2[, `lib.loc`](p19, p20);
    check L191() else D28();
  L212():
    p24 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r98 = dyn Rd_aliases3[dir](p24);
    check L213() else D40();
  L233():
    p29 = prom<V +>{
      do_call = ldf `do.call`;
      p27 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p28 = prom<V +>{
        db = ld db;
        db1 = force? db;
        checkMissing(db1);
        return db1;
      };
      r120 = dyn do_call(p27, p28);
      return r120;
    };
    p32 = prom<V +>{
      sym15 = ldf `rep.int`;
      base25 = ldf `rep.int` in base;
      guard15 = `==`.4(sym15, base25);
      if guard15 then L2() else L3();
    L0(r123):
      return r123;
    L2():
      sym16 = ldf names;
      base26 = ldf names in base;
      guard16 = `==`.4(sym16, base26);
      if guard16 then L4() else L5();
    L3():
      r122 = dyn base25(<lang names(db)>, <lang vapply(db, NROW, 0)>);
      goto L0(r122);
    L1(r125):
      vapply1 = ldf vapply;
      p30 = prom<V +>{
        db4 = ld db;
        db5 = force? db4;
        checkMissing(db5);
        return db5;
      };
      p31 = prom<V +>{
        NROW = ld NROW;
        NROW1 = force? NROW;
        checkMissing(NROW1);
        return NROW1;
      };
      r129 = dyn vapply1(p30, p31, 0);
      rep_int = ldf `rep.int` in base;
      r130 = dyn rep_int(r125, r129);
      goto L0(r130);
    L4():
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      names2 = ldf names in base;
      r126 = dyn names2(db3);
      goto L1(r126);
    L5():
      r124 = dyn base26(<sym db>);
      goto L1(r124);
    };
    r132 = dyn cbind[, File](p29, p32);
    check L234() else D52();
  D28():
    deopt 118 [r75];
  D40():
    deopt 160 [r98];
  D52():
    deopt 202 [r132];
  L191():
    st aliases1 = r75;
    sym7 = ldf length;
    base17 = ldf length in base;
    guard7 = `==`.4(sym7, base17);
    if guard7 then L192() else L193();
  L213():
    st aliases1 = r98;
    sym11 = ldf length;
    base21 = ldf length in base;
    guard11 = `==`.4(sym11, base21);
    if guard11 then L214() else L215();
  L234():
    st db = r132;
    nrow = ldf nrow;
    check L235() else D53();
  D53():
    deopt 205 [];
  L13(r77):
    r79 = `!`(r77);
    c12 = `as.logical`(r79);
    if c12 then L196() else L14();
  L19(r100):
    r102 = `!`(r100);
    c14 = `as.logical`(r102);
    if c14 then L218() else L20();
  L192():
    aliases4 = ld aliases1;
    check L194() else D29();
  L193():
    r76 = dyn base17(<sym aliases1>);
    goto L13(r76);
  L214():
    aliases10 = ld aliases1;
    check L216() else D41();
  L215():
    r99 = dyn base21(<sym aliases1>);
    goto L19(r99);
  L235():
    p33 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r134 = dyn nrow(p33);
    check L236() else D54();
  D29():
    deopt 122 [aliases4];
  D41():
    deopt 164 [aliases10];
  D54():
    deopt 207 [r134];
  L14():
    sym9 = ldf c;
    base19 = ldf c in base;
    guard9 = `==`.4(sym9, base19);
    if guard9 then L201() else L202();
  L20():
    sym13 = ldf c;
    base23 = ldf c in base;
    guard13 = `==`.4(sym13, base23);
    if guard13 then L223() else L224();
  L194():
    aliases5 = force? aliases4;
    checkMissing(aliases5);
    length = ldf length in base;
    r78 = dyn length(aliases5);
    check L195() else D30();
  L196():
    structure = ldf structure;
    check L197() else D31();
  L216():
    aliases11 = force? aliases10;
    checkMissing(aliases11);
    length1 = ldf length in base;
    r101 = dyn length1(aliases11);
    check L217() else D42();
  L218():
    structure1 = ldf structure;
    check L219() else D43();
  L236():
    r135 = `==`(r134, 0);
    c16 = `as.logical`(r135);
    if c16 then L237() else L24();
  D30():
    deopt 125 [r78];
  D31():
    deopt 128 [];
  D42():
    deopt 167 [r101];
  D43():
    deopt 170 [];
  L16(r88):
    st aliases = r88;
    _build_Rd_xref_db = ldf `.build_Rd_xref_db`;
    check L209() else D37();
  L22(r111):
    st aliases = r111;
    _build_Rd_xref_db1 = ldf `.build_Rd_xref_db`;
    check L231() else D49();
  L24():
    db8 = ld db;
    check L242() else D57();
  L195():
    goto L13(r78);
  L197():
    p21 = prom<V +>{
      sym8 = ldf list;
      base18 = ldf list in base;
      guard8 = `==`.4(sym8, base18);
      if guard8 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      list = ldf list in base;
      r82 = dyn list();
      goto L0(r82);
    L2():
      r80 = dyn base18();
      goto L0(r80);
    };
    r84 = dyn structure[, class](p21, "check_Rd_xrefs");
    check L198() else D32();
  L201():
    aliases6 = ld aliases;
    check L203() else D33();
  L202():
    r87 = dyn base19(<sym aliases>, <lang list(aliases1)>);
    goto L16(r87);
  L217():
    goto L19(r101);
  L219():
    p25 = prom<V +>{
      sym12 = ldf list;
      base22 = ldf list in base;
      guard12 = `==`.4(sym12, base22);
      if guard12 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      list2 = ldf list in base;
      r105 = dyn list2();
      goto L0(r105);
    L2():
      r103 = dyn base22();
      goto L0(r103);
    };
    r107 = dyn structure1[, class](p25, "check_Rd_xrefs");
    check L220() else D44();
  L223():
    aliases12 = ld aliases;
    check L225() else D45();
  L224():
    r110 = dyn base23(<sym aliases>, <lang list(aliases1)>);
    goto L22(r110);
  L237():
    structure2 = ldf structure;
    check L238() else D55();
  D32():
    deopt 132 [r84];
  D33():
    deopt 138 [aliases6];
  D37():
    deopt 150 [];
  D44():
    deopt 174 [r107];
  D45():
    deopt 180 [aliases12];
  D49():
    deopt 192 [];
  D55():
    deopt 211 [];
  D57():
    deopt 219 [db8];
  L198():
    popenv;
    return r84;
  L203():
    aliases7 = force? aliases6;
    checkMissing(aliases7);
    sym10 = ldf list;
    base20 = ldf list in base;
    guard10 = `==`.4(sym10, base20);
    if guard10 then L204() else L205();
  L209():
    p22 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p23 = prom<V +>{
      lib_loc7 = ld `lib.loc`;
      lib_loc8 = force? lib_loc7;
      checkMissing(lib_loc8);
      return lib_loc8;
    };
    r95 = dyn _build_Rd_xref_db[, `lib.loc`](p22, p23);
    check L210() else D38();
  L220():
    popenv;
    return r107;
  L225():
    aliases13 = force? aliases12;
    checkMissing(aliases13);
    sym14 = ldf list;
    base24 = ldf list in base;
    guard14 = `==`.4(sym14, base24);
    if guard14 then L226() else L227();
  L231():
    p26 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r117 = dyn _build_Rd_xref_db1[dir](p26);
    check L232() else D50();
  L238():
    p34 = prom<V +>{
      sym17 = ldf list;
      base27 = ldf list in base;
      guard17 = `==`.4(sym17, base27);
      if guard17 then L1() else L2();
    L0(r137):
      return r137;
    L1():
      list4 = ldf list in base;
      r138 = dyn list4();
      goto L0(r138);
    L2():
      r136 = dyn base27();
      goto L0(r136);
    };
    r140 = dyn structure2[, class](p34, "check_Rd_xrefs");
    check L239() else D56();
  L242():
    db9 = force? db8;
    checkMissing(db9);
    c17 = `is.object`(db9);
    if c17 then L243() else L244();
  D38():
    deopt 154 [r95];
  D50():
    deopt 195 [r117];
  D56():
    deopt 215 [r140];
  L17(r90):
    c13 = ldf c in base;
    r92 = dyn c13(aliases7, r90);
    check L208() else D36();
  L23(r113):
    c15 = ldf c in base;
    r115 = dyn c15(aliases13, r113);
    check L230() else D48();
  L26(dx17):
    st anchor = dx17;
    startsWith = ldf startsWith;
    check L246() else D58();
  L204():
    aliases8 = ld aliases1;
    check L206() else D34();
  L205():
    r89 = dyn base20(<sym aliases1>);
    goto L17(r89);
  L210():
    st db = r95;
    goto L18();
  L226():
    aliases14 = ld aliases1;
    check L228() else D46();
  L227():
    r112 = dyn base24(<sym aliases1>);
    goto L23(r112);
  L232():
    st db = r117;
    goto L18();
  L239():
    popenv;
    return r140;
  L243():
    dr14 = tryDispatchBuiltin.1("[", db9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L245() else L244();
  L244():
    __3 = ldf `[` in base;
    r143 = dyn __3(db9, <missing>, 2);
    goto L26(r143);
  D34():
    deopt 142 [aliases8];
  D36():
    deopt 147 [r92];
  D46():
    deopt 184 [aliases14];
  D48():
    deopt 189 [r115];
  D58():
    deopt 227 [];
  L206():
    aliases9 = force? aliases8;
    checkMissing(aliases9);
    list1 = ldf list in base;
    r91 = dyn list1(aliases9);
    check L207() else D35();
  L208():
    goto L16(r92);
  L228():
    aliases15 = force? aliases14;
    checkMissing(aliases15);
    list3 = ldf list in base;
    r114 = dyn list3(aliases15);
    check L229() else D47();
  L230():
    goto L22(r115);
  L245():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L26(dx16);
  L246():
    p35 = prom<V +>{
      anchor = ld anchor;
      anchor1 = force? anchor;
      checkMissing(anchor1);
      return anchor1;
    };
    r145 = dyn startsWith(p35, "=");
    check L247() else D59();
  D35():
    deopt 145 [r91];
  D47():
    deopt 187 [r114];
  D59():
    deopt 230 [r145];
  L207():
    goto L17(r91);
  L229():
    goto L23(r114);
  L247():
    st have_equals = r145;
    sym18 = ldf any;
    base28 = ldf any in base;
    guard18 = `==`.4(sym18, base28);
    if guard18 then L248() else L249();
  L27(r147):
    c18 = `as.logical`(r147);
    if c18 then L252() else L28();
  L248():
    have_equals = ld have_equals;
    check L250() else D60();
  L249():
    r146 = dyn base28(<sym have_equals>);
    goto L27(r146);
  D60():
    deopt 234 [have_equals];
  L28():
    goto L30();
  L30():
    cbind2 = ldf cbind;
    check L260() else D65();
  L250():
    have_equals1 = force? have_equals;
    checkMissing(have_equals1);
    any = ldf any in base;
    r148 = dyn any(have_equals1);
    check L251() else D61();
  L252():
    cbind1 = ldf cbind;
    check L253() else D62();
  D61():
    deopt 237 [r148];
  D62():
    deopt 239 [];
  D65():
    deopt 252 [];
  L251():
    goto L27(r148);
  L253():
    p37 = prom<V +>{
      sub = ldf sub;
      p36 = prom<V +>{
        anchor2 = ld anchor;
        anchor3 = force? anchor2;
        checkMissing(anchor3);
        c19 = `is.object`(anchor3);
        if c19 then L1() else L2(anchor3);
      L0(dx19):
        return dx19;
      L1():
        dr16 = tryDispatchBuiltin.1("[", anchor3);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(anchor5):
        have_equals2 = ld have_equals;
        have_equals3 = force? have_equals2;
        __4 = ldf `[` in base;
        r149 = dyn __4(anchor5, have_equals3);
        goto L0(r149);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx18);
      };
      r151 = dyn sub("^=", "", p36);
      return r151;
    };
    r153 = dyn cbind1(p37, "");
    check L254() else D63();
  L260():
    p38 = prom<V +>{
      db12 = ld db;
      db13 = force? db12;
      checkMissing(db13);
      return db13;
    };
    p39 = prom<V +>{
      db14 = ld db;
      db15 = force? db14;
      checkMissing(db15);
      c21 = `is.object`(db15);
      if c21 then L1() else L2();
    L0(dx23):
      return dx23;
    L1():
      dr20 = tryDispatchBuiltin.1("[", db15);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r161 = dyn __5(db15, <missing>, 1);
      goto L0(r161);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx22);
    };
    r163 = dyn cbind2[, bad, report](p38, FALSE, p39);
    check L261() else D66();
  D63():
    deopt 242 [r153];
  D66():
    deopt 258 [r163];
  L254():
    l3 = ld db;
    c20 = `is.object`(l3);
    if c20 then L255() else L256(r153, l3);
  L261():
    st db = r163;
    sym19 = ldf nzchar;
    base29 = ldf nzchar in base;
    guard19 = `==`.4(sym19, base29);
    if guard19 then L262() else L263();
  L29(r157, dx21):
    st db = dx21;
    goto L30();
  L31(r165):
    st have_anchor = r165;
    paste0 = ldf paste0;
    check L269() else D69();
  L255():
    dr18 = tryDispatchBuiltin.0("[<-", l3, r153);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L257() else L256(r153, dr18);
  L256(r155, l5):
    have_equals4 = ld have_equals;
    check L258() else D64();
  L262():
    db18 = ld db;
    check L264() else D67();
  L263():
    r164 = dyn base29(<lang `<-`(anchor, `[`(db, , 2))>);
    goto L31(r164);
  D64():
    deopt 244 [r155, l5, r153, have_equals4];
  D67():
    deopt 262 [db18];
  D69():
    deopt 273 [];
  L257():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L29(r153, dx20);
  L258():
    have_equals5 = force? have_equals4;
    ___1 = ldf `[<-` in base;
    r158 = dyn ___1(l5, r153, have_equals5, <int 1, 2>);
    goto L29(r155, r158);
  L264():
    db19 = force? db18;
    checkMissing(db19);
    c22 = `is.object`(db19);
    if c22 then L265() else L266();
  L269():
    p40 = prom<V +>{
      db22 = ld db;
      db23 = force? db22;
      checkMissing(db23);
      c23 = `is.object`(db23);
      if c23 then L1() else L2(db23);
    L0(dx27):
      return dx27;
    L1():
      dr24 = tryDispatchBuiltin.1("[", db23);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(db25):
      have_anchor = ld have_anchor;
      have_anchor1 = force? have_anchor;
      __7 = ldf `[` in base;
      r168 = dyn __7(db25, have_anchor1, 2);
      goto L0(r168);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx26);
    };
    p41 = prom<V +>{
      db26 = ld db;
      db27 = force? db26;
      checkMissing(db27);
      c24 = `is.object`(db27);
      if c24 then L1() else L2(db27);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", db27);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(db29):
      have_anchor2 = ld have_anchor;
      have_anchor3 = force? have_anchor2;
      __8 = ldf `[` in base;
      r170 = dyn __8(db29, have_anchor3, 1);
      goto L0(r170);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    r172 = dyn paste0("[", p40, "]{", p41, "}");
    check L270() else D70();
  D70():
    deopt 279 [r172];
  L32(dx25):
    st anchor = dx25;
    nzchar = ldf nzchar in base;
    r167 = dyn nzchar(dx25);
    check L268() else D68();
  L265():
    dr22 = tryDispatchBuiltin.1("[", db19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L267() else L266();
  L266():
    __6 = ldf `[` in base;
    r166 = dyn __6(db19, <missing>, 2);
    goto L32(r166);
  L270():
    l6 = ld db;
    c25 = `is.object`(l6);
    if c25 then L271() else L272(r172, l6);
  D68():
    deopt 270 [r167];
  L33(dx31):
    st db = dx31;
    _notin_ = ldf `%notin%`;
    check L275() else D72();
  L267():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L32(dx24);
  L268():
    goto L31(r167);
  L271():
    dr28 = tryDispatchBuiltin.0("[<-", l6, r172);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L273() else L272(r172, dr28);
  L272(r174, l8):
    have_anchor4 = ld have_anchor;
    check L274() else D71();
  D71():
    deopt 281 [r174, l8, r172, have_anchor4];
  D72():
    deopt 287 [];
  L273():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L33(dx30);
  L274():
    have_anchor5 = force? have_anchor4;
    ___2 = ldf `[<-` in base;
    r177 = dyn ___2(l8, r172, have_anchor5, "report");
    goto L33(r177);
  L275():
    p42 = prom<V +>{
      db30 = ld db;
      db31 = force? db30;
      checkMissing(db31);
      c26 = `is.object`(db31);
      if c26 then L1() else L2(db31);
    L0(dx33):
      return dx33;
    L1():
      dr30 = tryDispatchBuiltin.1("[", db31);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(db33):
      have_anchor6 = ld have_anchor;
      have_anchor7 = force? have_anchor6;
      checkMissing(have_anchor7);
      r178 = `!`(have_anchor7);
      __9 = ldf `[` in base;
      r179 = dyn __9(db33, r178, 1);
      goto L0(r179);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx32);
    };
    p44 = prom<V +>{
      unlist1 = ldf unlist;
      p43 = prom<V +>{
        aliases16 = ld aliases;
        aliases17 = force? aliases16;
        checkMissing(aliases17);
        return aliases17;
      };
      r182 = dyn unlist1(p43);
      return r182;
    };
    r184 = dyn _notin_(p42, p44);
    check L276() else D73();
  D73():
    deopt 290 [r184];
  L276():
    l9 = ld db;
    c27 = `is.object`(l9);
    if c27 then L277() else L278(r184, l9);
  L34(dx35):
    st db = dx35;
    grepl = ldf grepl;
    check L281() else D75();
  L277():
    dr32 = tryDispatchBuiltin.0("[<-", l9, r184);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L279() else L278(r184, dr32);
  L278(r186, l11):
    have_anchor8 = ld have_anchor;
    check L280() else D74();
  D74():
    deopt 292 [r186, l11, r184, have_anchor8];
  D75():
    deopt 299 [];
  L279():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L34(dx34);
  L280():
    have_anchor9 = force? have_anchor8;
    checkMissing(have_anchor9);
    r189 = `!`(have_anchor9);
    ___3 = ldf `[<-` in base;
    r190 = dyn ___3(l11, r184, r189, "bad");
    goto L34(r190);
  L281():
    p45 = prom<V +>{
      anchor6 = ld anchor;
      anchor7 = force? anchor6;
      checkMissing(anchor7);
      return anchor7;
    };
    r192 = dyn grepl[, , fixed](":", p45, TRUE);
    check L282() else D76();
  D76():
    deopt 304 [r192];
  L282():
    st have_colon = r192;
    character = ldf character;
    check L283() else D77();
  D77():
    deopt 307 [];
  L283():
    r193 = dyn character();
    check L284() else D78();
  D78():
    deopt 308 [r193];
  L284():
    st unknown = r193;
    anchor8 = ld anchor;
    check L285() else D79();
  D79():
    deopt 310 [anchor8];
  L285():
    anchor9 = force? anchor8;
    checkMissing(anchor9);
    st thispkg = anchor9;
    db34 = ld db;
    check L286() else D80();
  D80():
    deopt 313 [db34];
  L286():
    db35 = force? db34;
    checkMissing(db35);
    c28 = `is.object`(db35);
    if c28 then L287() else L288();
  L35(dx37):
    st thisfile = dx37;
    sub1 = ldf sub;
    check L290() else D81();
  L287():
    dr34 = tryDispatchBuiltin.1("[", db35);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L289() else L288();
  L288():
    __10 = ldf `[` in base;
    r194 = dyn __10(db35, <missing>, 1);
    goto L35(r194);
  D81():
    deopt 321 [];
  L289():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L35(dx36);
  L290():
    p46 = prom<V +>{
      anchor10 = ld anchor;
      anchor11 = force? anchor10;
      checkMissing(anchor11);
      c29 = `is.object`(anchor11);
      if c29 then L1() else L2(anchor11);
    L0(dx39):
      return dx39;
    L1():
      dr36 = tryDispatchBuiltin.1("[", anchor11);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(anchor13):
      have_colon = ld have_colon;
      have_colon1 = force? have_colon;
      __11 = ldf `[` in base;
      r195 = dyn __11(anchor13, have_colon1);
      goto L0(r195);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx38);
    };
    r197 = dyn sub1("([^:]*):(.*)", "\\1", p46);
    check L291() else D82();
  D82():
    deopt 325 [r197];
  L291():
    l12 = ld thispkg;
    c30 = `is.object`(l12);
    if c30 then L292() else L293(r197, l12);
  L36(dx41):
    st thispkg = dx41;
    sub2 = ldf sub;
    check L296() else D84();
  L292():
    dr38 = tryDispatchBuiltin.0("[<-", l12, r197);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L294() else L293(r197, dr38);
  L293(r199, l14):
    have_colon2 = ld have_colon;
    check L295() else D83();
  D83():
    deopt 327 [r199, l14, r197, have_colon2];
  D84():
    deopt 332 [];
  L294():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L36(dx40);
  L295():
    have_colon3 = force? have_colon2;
    ___4 = ldf `[<-` in base;
    r202 = dyn ___4(l14, r197, have_colon3);
    goto L36(r202);
  L296():
    p47 = prom<V +>{
      anchor14 = ld anchor;
      anchor15 = force? anchor14;
      checkMissing(anchor15);
      c31 = `is.object`(anchor15);
      if c31 then L1() else L2(anchor15);
    L0(dx43):
      return dx43;
    L1():
      dr40 = tryDispatchBuiltin.1("[", anchor15);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(anchor17):
      have_colon4 = ld have_colon;
      have_colon5 = force? have_colon4;
      __12 = ldf `[` in base;
      r203 = dyn __12(anchor17, have_colon5);
      goto L0(r203);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx42);
    };
    r205 = dyn sub2("([^:]*):(.*)", "\\2", p47);
    check L297() else D85();
  D85():
    deopt 336 [r205];
  L297():
    l15 = ld thisfile;
    c32 = `is.object`(l15);
    if c32 then L298() else L299(r205, l15);
  L37(dx45):
    st thisfile = dx45;
    config_val_to_logical = ldf config_val_to_logical;
    check L302() else D87();
  L298():
    dr42 = tryDispatchBuiltin.0("[<-", l15, r205);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L300() else L299(r205, dr42);
  L299(r207, l17):
    have_colon6 = ld have_colon;
    check L301() else D86();
  D86():
    deopt 338 [r207, l17, r205, have_colon6];
  D87():
    deopt 343 [];
  L300():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L37(dx44);
  L301():
    have_colon7 = force? have_colon6;
    ___5 = ldf `[<-` in base;
    r210 = dyn ___5(l17, r205, have_colon7);
    goto L37(r210);
  L302():
    p48 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r211 = dyn Sys_getenv("_R_CHECK_XREFS_USE_ALIASES_FROM_CRAN_", "FALSE");
      return r211;
    };
    r213 = dyn config_val_to_logical(p48);
    check L303() else D88();
  D88():
    deopt 345 [r213];
  L303():
    st use_aliases_from_CRAN = r213;
    use_aliases_from_CRAN = ld use_aliases_from_CRAN;
    check L304() else D89();
  D89():
    deopt 347 [use_aliases_from_CRAN];
  L304():
    use_aliases_from_CRAN1 = force? use_aliases_from_CRAN;
    checkMissing(use_aliases_from_CRAN1);
    c33 = `as.logical`(use_aliases_from_CRAN1);
    if c33 then L305() else L38();
  L38():
    goto L39();
  L39():
    unique1 = ldf unique;
    check L307() else D90();
  L305():
    st aliases_db = NULL;
    st tried_aliases_db = FALSE;
    goto L39();
  D90():
    deopt 358 [];
  L307():
    p49 = prom<V +>{
      thispkg = ld thispkg;
      thispkg1 = force? thispkg;
      checkMissing(thispkg1);
      c34 = `is.object`(thispkg1);
      if c34 then L1() else L2(thispkg1);
    L0(dx47):
      return dx47;
    L1():
      dr44 = tryDispatchBuiltin.1("[", thispkg1);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(thispkg3):
      have_anchor10 = ld have_anchor;
      have_anchor11 = force? have_anchor10;
      __13 = ldf `[` in base;
      r215 = dyn __13(thispkg3, have_anchor11);
      goto L0(r215);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx46);
    };
    r217 = dyn unique1(p49);
    check L308() else D91();
  D91():
    deopt 360 [r217];
  L308():
    st anchors = r217;
    config_val_to_logical1 = ldf config_val_to_logical;
    check L309() else D92();
  D92():
    deopt 363 [];
  L309():
    p50 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r218 = dyn Sys_getenv1("_R_CHECK_XREFS_PKGS_ARE_DECLARED_", "FALSE");
      return r218;
    };
    r220 = dyn config_val_to_logical1(p50);
    check L310() else D93();
  D93():
    deopt 365 [r220];
  L310():
    st check_anchors = r220;
    check_anchors = ld check_anchors;
    check L311() else D94();
  D94():
    deopt 367 [check_anchors];
  L311():
    check_anchors1 = force? check_anchors;
    checkMissing(check_anchors1);
    c35 = `as.logical`(check_anchors1);
    if c35 then L312() else L40();
  L40():
    goto L54();
  L54():
    config_val_to_logical2 = ldf config_val_to_logical;
    check L373() else D118();
  L312():
    sym20 = ldf c;
    base30 = ldf c in base;
    guard20 = `==`.4(sym20, base30);
    if guard20 then L313() else L314();
  D118():
    deopt 452 [];
  L41(r222):
    st deps2 = r222;
    setdiff1 = ldf setdiff;
    check L340() else D102();
  L313():
    sym21 = ldf names;
    base31 = ldf names in base;
    guard21 = `==`.4(sym21, base31);
    if guard21 then L315() else L316();
  L314():
    r221 = dyn base30(<lang names(`$`(pkgInfo, Depends))>, <lang names(`$`(pkgInfo, Imports))>, <lang names(`$`(pkgInfo, Suggests))>);
    goto L41(r221);
  L373():
    p64 = prom<V +>{
      Sys_getenv2 = ldf `Sys.getenv`;
      r283 = dyn Sys_getenv2("_R_CHECK_XREFS_MIND_SUSPECT_ANCHORS_", "FALSE");
      return r283;
    };
    r285 = dyn config_val_to_logical2(p64);
    check L374() else D119();
  D102():
    deopt 396 [];
  D119():
    deopt 454 [r285];
  L42(r224):
    sym22 = ldf names;
    base32 = ldf names in base;
    guard22 = `==`.4(sym22, base32);
    if guard22 then L323() else L324();
  L315():
    pkgInfo12 = ld pkgInfo;
    check L317() else D95();
  L316():
    r223 = dyn base31(<lang `$`(pkgInfo, Depends)>);
    goto L42(r223);
  L340():
    p51 = prom<V +>{
      anchors = ld anchors;
      anchors1 = force? anchors;
      checkMissing(anchors1);
      return anchors1;
    };
    p53 = prom<V +>{
      sym24 = ldf c;
      base34 = ldf c in base;
      guard24 = `==`.4(sym24, base34);
      if guard24 then L1() else L2();
    L0(r238):
      return r238;
    L1():
      unique2 = ldf unique;
      p52 = prom<V +>{
        deps2 = ld deps2;
        deps3 = force? deps2;
        checkMissing(deps3);
        return deps3;
      };
      r240 = dyn unique2(p52);
      pkgname = ld pkgname;
      pkgname1 = force? pkgname;
      checkMissing(pkgname1);
      base35 = ld base;
      base36 = force? base35;
      checkMissing(base36);
      c40 = ldf c in base;
      r241 = dyn c40(r240, pkgname1, base36);
      goto L0(r241);
    L2():
      r237 = dyn base34(<lang unique(deps2)>, <sym pkgname>, <sym base>);
      goto L0(r237);
    };
    r243 = dyn setdiff1(p51, p53);
    check L341() else D103();
  L374():
    st mind_suspects = r285;
    mind_suspects = ld mind_suspects;
    check L375() else D120();
  D95():
    deopt 373 [pkgInfo12];
  D103():
    deopt 399 [r243];
  D120():
    deopt 456 [mind_suspects];
  L43(r228):
    sym23 = ldf names;
    base33 = ldf names in base;
    guard23 = `==`.4(sym23, base33);
    if guard23 then L331() else L332();
  L317():
    pkgInfo13 = force? pkgInfo12;
    checkMissing(pkgInfo13);
    c36 = `is.object`(pkgInfo13);
    if c36 then L319() else L320(pkgInfo13);
  L323():
    pkgInfo16 = ld pkgInfo;
    check L325() else D97();
  L324():
    r227 = dyn base32(<lang `$`(pkgInfo, Imports)>);
    goto L43(r227);
  L341():
    st undeclared = r243;
    sym25 = ldf length;
    base37 = ldf length in base;
    guard25 = `==`.4(sym25, base37);
    if guard25 then L342() else L343();
  L375():
    mind_suspects1 = force? mind_suspects;
    checkMissing(mind_suspects1);
    c46 = `as.logical`(mind_suspects1);
    if c46 then L376() else L55();
  D97():
    deopt 380 [pkgInfo16];
  L44(r232):
    c39 = ldf c in base;
    r235 = dyn c39(r224, r228, r232);
    check L339() else D101();
  L45(r245):
    c41 = `as.logical`(r245);
    if c41 then L346() else L46();
  L55():
    goto L56();
  L56():
    anchors2 = ld anchors;
    check L380() else D123();
  L318(dx49):
    names3 = ldf names in base;
    r226 = dyn names3(dx49);
    check L322() else D96();
  L319():
    dr46 = tryDispatchBuiltin.1("$", pkgInfo13);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L321() else L320(dr46);
  L320(pkgInfo15):
    r225 = `$`(pkgInfo15, <sym Depends>);
    goto L318(r225);
  L325():
    pkgInfo17 = force? pkgInfo16;
    checkMissing(pkgInfo17);
    c37 = `is.object`(pkgInfo17);
    if c37 then L327() else L328(pkgInfo17);
  L331():
    pkgInfo20 = ld pkgInfo;
    check L333() else D99();
  L332():
    r231 = dyn base33(<lang `$`(pkgInfo, Suggests)>);
    goto L44(r231);
  L342():
    undeclared = ld undeclared;
    check L344() else D104();
  L343():
    r244 = dyn base37(<sym undeclared>);
    goto L45(r244);
  L376():
    cbind3 = ldf cbind;
    check L377() else D121();
  D96():
    deopt 377 [r226];
  D99():
    deopt 387 [pkgInfo20];
  D101():
    deopt 393 [r235];
  D104():
    deopt 403 [undeclared];
  D121():
    deopt 459 [];
  D123():
    deopt 467 [anchors2];
  L46():
    goto L50();
  L50():
    sym28 = ldf length;
    base40 = ldf length in base;
    guard28 = `==`.4(sym28, base40);
    if guard28 then L364() else L365();
  L321():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L318(dx48);
  L322():
    goto L42(r226);
  L326(dx51):
    names4 = ldf names in base;
    r230 = dyn names4(dx51);
    check L330() else D98();
  L327():
    dr48 = tryDispatchBuiltin.1("$", pkgInfo17);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L329() else L328(dr48);
  L328(pkgInfo19):
    r229 = `$`(pkgInfo19, <sym Imports>);
    goto L326(r229);
  L333():
    pkgInfo21 = force? pkgInfo20;
    checkMissing(pkgInfo21);
    c38 = `is.object`(pkgInfo21);
    if c38 then L335() else L336(pkgInfo21);
  L339():
    goto L41(r235);
  L344():
    undeclared1 = force? undeclared;
    checkMissing(undeclared1);
    length2 = ldf length in base;
    r246 = dyn length2(undeclared1);
    check L345() else D105();
  L346():
    pkgInfo24 = ld pkgInfo;
    check L347() else D106();
  L377():
    p65 = prom<V +>{
      db38 = ld db;
      db39 = force? db38;
      checkMissing(db39);
      return db39;
    };
    r287 = dyn cbind3[, suspect](p65, FALSE);
    check L378() else D122();
  L380():
    anchors3 = force? anchors2;
    checkMissing(anchors3);
    s = toForSeq(anchors3);
    l18 = length(s);
    i = 0;
    goto L57(i);
  D98():
    deopt 384 [r230];
  D105():
    deopt 406 [r246];
  D106():
    deopt 407 [pkgInfo24];
  D122():
    deopt 463 [r287];
  L51(r265):
    c45 = `as.logical`(r265);
    if c45 then L368() else L52();
  L57(i1):
    i2 = `+`.1(i1, 1);
    c47 = `<`.1(l18, i2);
    if c47 then L381() else L99();
  L329():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L326(dx50);
  L330():
    goto L43(r230);
  L334(dx53):
    names5 = ldf names in base;
    r234 = dyn names5(dx53);
    check L338() else D100();
  L335():
    dr50 = tryDispatchBuiltin.1("$", pkgInfo21);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L337() else L336(dr50);
  L336(pkgInfo23):
    r233 = `$`(pkgInfo23, <sym Suggests>);
    goto L334(r233);
  L345():
    goto L45(r246);
  L347():
    pkgInfo25 = force? pkgInfo24;
    checkMissing(pkgInfo25);
    c42 = `is.object`(pkgInfo25);
    if c42 then L349() else L350(pkgInfo25);
  L364():
    undeclared4 = ld undeclared;
    check L366() else D114();
  L365():
    r264 = dyn base40(<sym undeclared>);
    goto L51(r264);
  L378():
    st db = r287;
    goto L56();
  D100():
    deopt 391 [r234];
  D114():
    deopt 437 [undeclared4];
  L52():
    goto L53(NULL);
  L53(r281):
    goto L54();
  L99():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    sym30 = ldf missing;
    base42 = ldf missing in base;
    guard30 = `==`.4(sym30, base42);
    if guard30 then L382() else L383();
  L337():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L334(dx52);
  L338():
    goto L44(r234);
  L348(dx55):
    st DESC = dx55;
    _in_ = ldf `%in%`;
    check L352() else D107();
  L349():
    dr52 = tryDispatchBuiltin.1("$", pkgInfo25);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L351() else L350(dr52);
  L350(pkgInfo27):
    r247 = `$`(pkgInfo27, <sym DESCRIPTION>);
    goto L348(r247);
  L366():
    undeclared5 = force? undeclared4;
    checkMissing(undeclared5);
    length3 = ldf length in base;
    r266 = dyn length3(undeclared5);
    check L367() else D115();
  L368():
    message = ldf message;
    check L369() else D116();
  L381():
    unique4 = ldf unique;
    check L522() else D194();
  D107():
    deopt 412 [];
  D115():
    deopt 440 [r266];
  D116():
    deopt 442 [];
  D194():
    deopt 728 [];
  L58(i7, r290):
    c48 = `as.logical`(r290);
    if c48 then L384() else L59(i7, c48);
  L351():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L348(dx54);
  L352():
    p54 = prom<V +>{
      sym26 = ldf names;
      base38 = ldf names in base;
      guard26 = `==`.4(sym26, base38);
      if guard26 then L1() else L2();
    L0(r249):
      return r249;
    L1():
      DESC = ld DESC;
      DESC1 = force? DESC;
      checkMissing(DESC1);
      names6 = ldf names in base;
      r250 = dyn names6(DESC1);
      goto L0(r250);
    L2():
      r248 = dyn base38(<sym DESC>);
      goto L0(r248);
    };
    r252 = dyn _in_("Enhances", p54);
    check L353() else D108();
  L367():
    goto L51(r266);
  L369():
    p63 = prom<V +>{
      sprintf = ldf sprintf;
      p59 = prom<V +>{
        ngettext = ldf ngettext;
        p58 = prom<V +>{
          sym29 = ldf length;
          base41 = ldf length in base;
          guard29 = `==`.4(sym29, base41);
          if guard29 then L1() else L2();
        L0(r268):
          return r268;
        L1():
          undeclared6 = ld undeclared;
          undeclared7 = force? undeclared6;
          checkMissing(undeclared7);
          length4 = ldf length in base;
          r269 = dyn length4(undeclared7);
          goto L0(r269);
        L2():
          r267 = dyn base41(<sym undeclared>);
          goto L0(r267);
        };
        r271 = dyn ngettext(p58, "Undeclared package %s in Rd xrefs", "Undeclared packages %s in Rd xrefs");
        return r271;
      };
      p62 = prom<V +>{
        paste1 = ldf paste;
        p61 = prom<V +>{
          sQuote = ldf sQuote;
          p60 = prom<V +>{
            undeclared8 = ld undeclared;
            undeclared9 = force? undeclared8;
            checkMissing(undeclared9);
            return undeclared9;
          };
          r274 = dyn sQuote(p60);
          return r274;
        };
        r276 = dyn paste1[, collapse](p61, ", ");
        return r276;
      };
      r278 = dyn sprintf(p59, p62);
      return r278;
    };
    r280 = dyn message[, domain](p63, NA_LGL);
    check L370() else D117();
  L382():
    missing2 = ldf missing in base;
    r291 = dyn missing2(<sym package>);
    goto L58(i2, r291);
  L383():
    r289 = dyn base42(<sym package>);
    goto L58(i2, r289);
  L522():
    p92 = prom<V +>{
      unknown8 = ld unknown;
      unknown9 = force? unknown8;
      checkMissing(unknown9);
      return unknown9;
    };
    r413 = dyn unique4(p92);
    check L523() else D195();
  D108():
    deopt 415 [r252];
  D117():
    deopt 446 [r280];
  D195():
    deopt 730 [r413];
  L59(i9, c50):
    c54 = `as.logical`(c50);
    if c54 then L388() else L60();
  L353():
    c43 = `as.logical`(r252);
    if c43 then L354() else L47();
  L370():
    goto L53(r280);
  L384():
    pkg = ld pkg;
    check L385() else D124();
  L523():
    st unknown = r413;
    sym44 = ldf length;
    base56 = ldf length in base;
    guard44 = `==`.4(sym44, base56);
    if guard44 then L524() else L525();
  D124():
    deopt 472 [i7, c48, pkg];
  L47():
    goto L49(NULL);
  L49(r262):
    goto L50();
  L60():
    have_anchor12 = ld have_anchor;
    check L391() else D126();
  L100(r415):
    c83 = `as.logical`(r415);
    if c83 then L528() else L101();
  L354():
    sym27 = ldf names;
    base39 = ldf names in base;
    guard27 = `==`.4(sym27, base39);
    if guard27 then L355() else L356();
  L385():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    pkgname2 = ld pkgname;
    check L386() else D125();
  L388():
    goto L57(i9);
  L524():
    unknown10 = ld unknown;
    check L526() else D196();
  L525():
    r414 = dyn base56(<sym unknown>);
    goto L100(r414);
  D125():
    deopt 473 [i7, c48, pkg1, pkgname2];
  D126():
    deopt 481 [i9, have_anchor12];
  D196():
    deopt 734 [unknown10];
  L48(r254):
    st enh = r254;
    setdiff2 = ldf setdiff;
    check L360() else D112();
  L101():
    goto L117();
  L117():
    db40 = ld db;
    check L577() else D221();
  L355():
    _split_dependencies = ldf `.split_dependencies`;
    check L357() else D109();
  L356():
    r253 = dyn base39(<lang .split_dependencies(`[[`(DESC, "Enhances"))>);
    goto L48(r253);
  L386():
    pkgname3 = force? pkgname2;
    checkMissing(pkgname3);
    r292 = `==`(pkg1, pkgname3);
    c51 = `as.logical`(r292);
    c52 = `&&`(c48, c51);
    goto L59(i7, c52);
  L391():
    have_anchor13 = force? have_anchor12;
    checkMissing(have_anchor13);
    _in_1 = ldf `%in%`;
    check L392() else D127();
  L526():
    unknown11 = force? unknown10;
    checkMissing(unknown11);
    length5 = ldf length in base;
    r416 = dyn length5(unknown11);
    check L527() else D197();
  L528():
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L529() else D198();
  D109():
    deopt 419 [];
  D112():
    deopt 426 [];
  D127():
    deopt 483 [i9, have_anchor13];
  D197():
    deopt 737 [r416];
  D198():
    deopt 739 [];
  D221():
    deopt 825 [db40];
  L357():
    p55 = prom<V +>{
      DESC2 = ld DESC;
      DESC3 = force? DESC2;
      checkMissing(DESC3);
      c44 = `is.object`(DESC3);
      if c44 then L1() else L2(DESC3);
    L0(dx57):
      return dx57;
    L1():
      dr54 = tryDispatchBuiltin.1("[[", DESC3);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(DESC5):
      __14 = ldf `[[` in base;
      r255 = dyn __14(DESC5, "Enhances");
      goto L0(r255);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx56);
    };
    r257 = dyn _split_dependencies(p55);
    check L358() else D110();
  L360():
    p56 = prom<V +>{
      undeclared2 = ld undeclared;
      undeclared3 = force? undeclared2;
      checkMissing(undeclared3);
      return undeclared3;
    };
    p57 = prom<V +>{
      enh = ld enh;
      enh1 = force? enh;
      checkMissing(enh1);
      return enh1;
    };
    r261 = dyn setdiff2(p56, p57);
    check L361() else D113();
  L392():
    p66 = prom<V +>{
      thispkg4 = ld thispkg;
      thispkg5 = force? thispkg4;
      checkMissing(thispkg5);
      return thispkg5;
    };
    p67 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r296 = dyn _in_1(p66, p67);
    check L393() else D128();
  L527():
    goto L100(r416);
  L529():
    r417 = dyn _get_standard_repository_URLs[ForXrefs](TRUE);
    check L530() else D199();
  L577():
    db41 = force? db40;
    checkMissing(db41);
    c97 = `is.object`(db41);
    if c97 then L578() else L579();
  D110():
    deopt 421 [r257];
  D113():
    deopt 429 [r261];
  D128():
    deopt 486 [i9, have_anchor13, r296];
  D199():
    deopt 742 [r417];
  L118(dx92):
    r505 = `==`(dx92, "TRUE");
    st bad = r505;
    sym55 = ldf list;
    base67 = ldf list in base;
    guard55 = `==`.4(sym55, base67);
    if guard55 then L581() else L582();
  L358():
    names7 = ldf names in base;
    r258 = dyn names7(r257);
    check L359() else D111();
  L361():
    st undeclared = r261;
    goto L49(r261);
  L393():
    r297 = `&&`(have_anchor13, r296);
    st this = r297;
    system_file1 = ldf `system.file`;
    check L394() else D129();
  L530():
    st repos = r417;
    pkgInfo28 = ld pkgInfo;
    check L531() else D200();
  L578():
    dr86 = tryDispatchBuiltin.1("[", db41);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L580() else L579();
  L579():
    __28 = ldf `[` in base;
    r504 = dyn __28(db41, <missing>, "bad");
    goto L118(r504);
  D111():
    deopt 423 [r258];
  D129():
    deopt 490 [i9];
  D200():
    deopt 744 [pkgInfo28];
  L119(r507):
    st out = r507;
    mind_suspects6 = ld mind_suspects;
    check L586() else D225();
  L359():
    goto L48(r258);
  L394():
    p68 = prom<V +>{
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      checkMissing(pkg5);
      return pkg5;
    };
    p69 = prom<V +>{
      lib_loc9 = ld `lib.loc`;
      lib_loc10 = force? lib_loc9;
      checkMissing(lib_loc10);
      return lib_loc10;
    };
    r300 = dyn system_file1[package, `lib.loc`](p68, p69);
    check L395() else D130();
  L531():
    pkgInfo29 = force? pkgInfo28;
    checkMissing(pkgInfo29);
    c84 = `is.object`(pkgInfo29);
    if c84 then L532() else L533(pkgInfo29);
  L580():
    dx91 = getTryDispatchBuiltinValue(dr86);
    goto L118(dx91);
  L581():
    split = ldf split;
    check L583() else D222();
  L582():
    r506 = dyn base67[bad](<lang split(`[`(db, bad, "report"), `[`(db, bad, "File"))>);
    goto L119(r506);
  D130():
    deopt 495 [i9, r300];
  D222():
    deopt 837 [];
  D225():
    deopt 845 [mind_suspects6];
  L102(dx80):
    c85 = `is.object`(dx80);
    if c85 then L535() else L536(dx80);
  L395():
    st top = r300;
    sym31 = ldf nzchar;
    base43 = ldf nzchar in base;
    guard31 = `==`.4(sym31, base43);
    if guard31 then L396() else L397();
  L532():
    dr76 = tryDispatchBuiltin.1("[[", pkgInfo29);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L534() else L533(dr76);
  L533(pkgInfo31):
    __21 = ldf `[[` in base;
    r418 = dyn __21(pkgInfo31, "DESCRIPTION");
    goto L102(r418);
  L583():
    p113 = prom<V +>{
      db44 = ld db;
      db45 = force? db44;
      checkMissing(db45);
      c98 = `is.object`(db45);
      if c98 then L1() else L2(db45);
    L0(dx94):
      return dx94;
    L1():
      dr88 = tryDispatchBuiltin.1("[", db45);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(db47):
      bad = ld bad;
      bad1 = force? bad;
      __29 = ldf `[` in base;
      r508 = dyn __29(db47, bad1, "report");
      goto L0(r508);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx93);
    };
    p114 = prom<V +>{
      db48 = ld db;
      db49 = force? db48;
      checkMissing(db49);
      c99 = `is.object`(db49);
      if c99 then L1() else L2(db49);
    L0(dx96):
      return dx96;
    L1():
      dr90 = tryDispatchBuiltin.1("[", db49);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(db51):
      bad2 = ld bad;
      bad3 = force? bad2;
      __30 = ldf `[` in base;
      r510 = dyn __30(db51, bad3, "File");
      goto L0(r510);
    L3():
      dx95 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx95);
    };
    r512 = dyn split(p113, p114);
    check L584() else D223();
  L586():
    mind_suspects7 = force? mind_suspects6;
    checkMissing(mind_suspects7);
    c100 = `as.logical`(mind_suspects7);
    if c100 then L587() else L120(c100);
  D223():
    deopt 840 [r512];
  L62(i17, r302):
    c55 = `as.logical`(r302);
    if c55 then L400() else L63();
  L103(dx84):
    st aurls = dx84;
    sym45 = ldf `is.na`;
    base57 = ldf `is.na` in base;
    guard45 = `==`.4(sym45, base57);
    if guard45 then L538() else L539();
  L120(c102):
    c114 = `as.logical`(c102);
    if c114 then L596() else L123();
  L396():
    top = ld top;
    check L398() else D131();
  L397():
    r301 = dyn base43(<sym top>);
    goto L62(i9, r301);
  L534():
    dx79 = getTryDispatchBuiltinValue(dr76);
    goto L102(dx79);
  L535():
    dr78 = tryDispatchBuiltin.1("[", dx80);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L537() else L536(dr78);
  L536(dx82):
    __22 = ldf `[` in base;
    r419 = dyn __22(dx82, "Additional_repositories");
    goto L103(r419);
  L584():
    list5 = ldf list in base;
    r513 = dyn list5(r512);
    check L585() else D224();
  L587():
    sym56 = ldf any;
    base68 = ldf any in base;
    guard56 = `==`.4(sym56, base68);
    if guard56 then L588() else L589();
  D131():
    deopt 499 [i9, top];
  D224():
    deopt 843 [r513];
  L63():
    use_aliases_from_CRAN2 = ld use_aliases_from_CRAN;
    check L442() else D156();
  L74(i44):
    goto L57(i44);
  L104(r421):
    r423 = `!`(r421);
    c86 = `as.logical`(r423);
    if c86 then L542() else L105();
  L121(c105, r515):
    c111 = `as.logical`(r515);
    c112 = `&&`(c105, c111);
    goto L120(c112);
  L123():
    goto L126();
  L126():
    structure3 = ldf structure;
    check L607() else D233();
  L398():
    top1 = force? top;
    checkMissing(top1);
    nzchar1 = ldf nzchar in base;
    r303 = dyn nzchar1(top1);
    check L399() else D132();
  L400():
    file_path1 = ldf `file.path`;
    check L401() else D133();
  L537():
    dx83 = getTryDispatchBuiltinValue(dr78);
    goto L103(dx83);
  L538():
    aurls = ld aurls;
    check L540() else D201();
  L539():
    r420 = dyn base57(<sym aurls>);
    goto L104(r420);
  L585():
    goto L119(r513);
  L588():
    db52 = ld db;
    check L590() else D226();
  L589():
    r514 = dyn base68(<lang `<-`(ind, `==`(`[`(db, , "suspect"), "TRUE"))>);
    goto L121(c100, r514);
  L596():
    sym57 = ldf c;
    base69 = ldf c in base;
    guard57 = `==`.4(sym57, base69);
    if guard57 then L597() else L598();
  D132():
    deopt 502 [i9, r303];
  D133():
    deopt 504 [i17];
  D156():
    deopt 582 [i17, use_aliases_from_CRAN2];
  D201():
    deopt 755 [aurls];
  D226():
    deopt 849 [c100, db52];
  D233():
    deopt 881 [];
  L105():
    goto L107();
  L107():
    try = ldf try;
    check L550() else D207();
  L124(r520):
    st out = r520;
    goto L126();
  L399():
    goto L62(i9, r303);
  L401():
    p70 = prom<V +>{
      top2 = ld top;
      top3 = force? top2;
      checkMissing(top3);
      return top3;
    };
    r305 = dyn file_path1(p70, "help", "paths.rds");
    check L402() else D134();
  L442():
    use_aliases_from_CRAN3 = force? use_aliases_from_CRAN2;
    checkMissing(use_aliases_from_CRAN3);
    c64 = `as.logical`(use_aliases_from_CRAN3);
    if c64 then L443() else L75();
  L540():
    aurls1 = force? aurls;
    checkMissing(aurls1);
    is_na = ldf `is.na` in base;
    r422 = dyn is_na(aurls1);
    check L541() else D202();
  L542():
    sym46 = ldf c;
    base58 = ldf c in base;
    guard46 = `==`.4(sym46, base58);
    if guard46 then L543() else L544();
  L590():
    db53 = force? db52;
    checkMissing(db53);
    c106 = `is.object`(db53);
    if c106 then L591() else L592(c100);
  L597():
    out = ld out;
    check L599() else D228();
  L598():
    r519 = dyn base69(<sym out>, <lang list(suspect=split(`[`(db, ind, "report"), `[`(db, ind, "File")))>);
    goto L124(r519);
  L607():
    p117 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r532 = dyn structure3[, class](p117, "check_Rd_xrefs");
    check L608() else D234();
  D134():
    deopt 508 [i17, r305];
  D202():
    deopt 758 [r422];
  D207():
    deopt 774 [];
  D228():
    deopt 863 [out];
  D234():
    deopt 885 [r532];
  L75():
    sym43 = ldf c;
    base55 = ldf c in base;
    guard43 = `==`.4(sym43, base55);
    if guard43 then L517() else L518();
  L106(r425):
    st repos = r425;
    goto L107();
  L122(c110, dx98):
    r517 = `==`(dx98, "TRUE");
    st ind = r517;
    any5 = ldf any in base;
    r518 = dyn any5(r517);
    check L594() else D227();
  L402():
    st RdDB = r305;
    sub3 = ldf sub;
    check L403() else D135();
  L443():
    sym34 = ldf `is.null`;
    base46 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base46);
    if guard34 then L444() else L445();
  L541():
    goto L104(r422);
  L543():
    repos = ld repos;
    check L545() else D203();
  L544():
    r424 = dyn base58(<sym repos>, <lang .read_additional_repositories_field(aurls)>);
    goto L106(r424);
  L550():
    p98 = prom<V +>{
      suppressWarnings = ldf suppressWarnings;
      p97 = prom<V +>{
        __23 = ldf `::`;
        r430 = dyn __23("utils", "available.packages");
        checkFun.0(r430);
        r431 = r430 as cls;
        p95 = prom<V +>{
          __24 = ldf `::`;
          r432 = dyn __24("utils", "contrib.url");
          checkFun.0(r432);
          r433 = r432 as cls;
          p94 = prom<V +>{
            repos2 = ld repos;
            repos3 = force? repos2;
            checkMissing(repos3);
            return repos3;
          };
          r435 = dyn r433(p94, "source");
          return r435;
        };
        p96 = prom<V +>{
          sym47 = ldf c;
          base59 = ldf c in base;
          guard47 = `==`.4(sym47, base59);
          if guard47 then L1() else L2();
        L0(r438):
          return r438;
        L1():
          c88 = ldf c in base;
          r439 = dyn c88("R_version", "duplicates");
          goto L0(r439);
        L2():
          r437 = dyn base59("R_version", "duplicates");
          goto L0(r437);
        };
        r441 = dyn r431[, filters](p95, p96);
        c89 = `is.object`(r441);
        if c89 then L1() else L2();
      L0(dx86):
        return dx86;
      L1():
        dr80 = tryDispatchBuiltin.1("[", r441);
        dc40 = getTryDispatchBuiltinDispatched(dr80);
        if dc40 then L3() else L2();
      L2():
        __25 = ldf `[` in base;
        r444 = dyn __25(r441, <missing>, "Package");
        goto L0(r444);
      L3():
        dx85 = getTryDispatchBuiltinValue(dr80);
        goto L0(dx85);
      };
      r446 = dyn suppressWarnings(p97);
      return r446;
    };
    r448 = dyn try(p98);
    check L551() else D208();
  L591():
    dr92 = tryDispatchBuiltin.1("[", db53);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L593() else L592(c100);
  L592(c108):
    __31 = ldf `[` in base;
    r516 = dyn __31(db53, <missing>, "suspect");
    goto L122(c108, r516);
  L599():
    out1 = force? out;
    checkMissing(out1);
    sym58 = ldf list;
    base70 = ldf list in base;
    guard58 = `==`.4(sym58, base70);
    if guard58 then L600() else L601();
  L608():
    popenv;
    return r532;
  D135():
    deopt 511 [i17];
  D203():
    deopt 762 [repos];
  D208():
    deopt 776 [r448];
  D227():
    deopt 859 [c110, r518];
  L76(i49, r347):
    c66 = `as.logical`(r347);
    if c66 then L447() else L77();
  L98(i103, r410):
    st unknown = r410;
    goto L74(i103);
  L125(r522):
    c117 = ldf c in base;
    r529 = dyn c117(out1, r522);
    check L605() else D232();
  L403():
    p73 = prom<V +>{
      basename = ldf basename;
      p72 = prom<V +>{
        readRDS1 = ldf readRDS;
        p71 = prom<V +>{
          RdDB = ld RdDB;
          RdDB1 = force? RdDB;
          checkMissing(RdDB1);
          return RdDB1;
        };
        r307 = dyn readRDS1(p71);
        return r307;
      };
      r309 = dyn basename(p72);
      return r309;
    };
    r311 = dyn sub3("\\.[Rr]d", "", p73);
    check L404() else D136();
  L444():
    aliases_db = ld aliases_db;
    check L446() else D157();
  L445():
    r346 = dyn base46(<sym aliases_db>);
    goto L76(i17, r346);
  L517():
    unknown6 = ld unknown;
    check L519() else D191();
  L518():
    r409 = dyn base55(<sym unknown>, <sym pkg>);
    goto L98(i17, r409);
  L545():
    repos1 = force? repos;
    checkMissing(repos1);
    _read_additional_repositories_field = ldf `.read_additional_repositories_field`;
    check L546() else D204();
  L551():
    st known = r448;
    sym48 = ldf inherits;
    base60 = ldf inherits in base;
    guard48 = `==`.4(sym48, base60);
    if guard48 then L552() else L553();
  L593():
    dx97 = getTryDispatchBuiltinValue(dr92);
    goto L122(c100, dx97);
  L594():
    goto L121(c110, r518);
  L600():
    split1 = ldf split;
    check L602() else D229();
  L601():
    r521 = dyn base70[suspect](<lang split(`[`(db, ind, "report"), `[`(db, ind, "File"))>);
    goto L125(r521);
  D136():
    deopt 515 [i17, r311];
  D157():
    deopt 585 [i17, aliases_db];
  D191():
    deopt 717 [i17, unknown6];
  D204():
    deopt 765 [];
  D229():
    deopt 868 [];
  D232():
    deopt 876 [r529];
  L77():
    goto L85(i49);
  L85(i69):
    aliases_db4 = ld aliases_db;
    check L471() else D168();
  L108(r450):
    c90 = `as.logical`(r450);
    if c90 then L556() else L109();
  L404():
    st nm = r311;
    _in_2 = ldf `%in%`;
    check L405() else D137();
  L446():
    aliases_db1 = force? aliases_db;
    checkMissing(aliases_db1);
    c65 = `==`(aliases_db1, NULL);
    goto L76(i17, c65);
  L447():
    tried_aliases_db = ld tried_aliases_db;
    check L448() else D158();
  L519():
    unknown7 = force? unknown6;
    checkMissing(unknown7);
    pkg20 = ld pkg;
    check L520() else D192();
  L546():
    p93 = prom<V +>{
      aurls2 = ld aurls;
      aurls3 = force? aurls2;
      checkMissing(aurls3);
      return aurls3;
    };
    r427 = dyn _read_additional_repositories_field(p93);
    check L547() else D205();
  L552():
    known = ld known;
    check L554() else D209();
  L553():
    r449 = dyn base60(<sym known>, "try-error");
    goto L108(r449);
  L602():
    p115 = prom<V +>{
      db56 = ld db;
      db57 = force? db56;
      checkMissing(db57);
      c115 = `is.object`(db57);
      if c115 then L1() else L2(db57);
    L0(dx100):
      return dx100;
    L1():
      dr94 = tryDispatchBuiltin.1("[", db57);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(db59):
      ind = ld ind;
      ind1 = force? ind;
      __32 = ldf `[` in base;
      r523 = dyn __32(db59, ind1, "report");
      goto L0(r523);
    L3():
      dx99 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx99);
    };
    p116 = prom<V +>{
      db60 = ld db;
      db61 = force? db60;
      checkMissing(db61);
      c116 = `is.object`(db61);
      if c116 then L1() else L2(db61);
    L0(dx102):
      return dx102;
    L1():
      dr96 = tryDispatchBuiltin.1("[", db61);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L3() else L2(dr96);
    L2(db63):
      ind2 = ld ind;
      ind3 = force? ind2;
      __33 = ldf `[` in base;
      r525 = dyn __33(db63, ind3, "File");
      goto L0(r525);
    L3():
      dx101 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx101);
    };
    r527 = dyn split1(p115, p116);
    check L603() else D230();
  L605():
    goto L124(r529);
  D137():
    deopt 518 [i17];
  D158():
    deopt 588 [i49, tried_aliases_db];
  D168():
    deopt 632 [i69, aliases_db4];
  D192():
    deopt 719 [i17, pkg20];
  D205():
    deopt 767 [r427];
  D209():
    deopt 780 [known];
  D230():
    deopt 871 [r527];
  L109():
    _in_7 = ldf `%in%`;
    check L558() else D211();
  L110(r452):
    st miss = r452;
    sym51 = ldf any;
    base63 = ldf any in base;
    guard51 = `==`.4(sym51, base63);
    if guard51 then L560() else L561();
  L405():
    p74 = prom<V +>{
      thisfile = ld thisfile;
      thisfile1 = force? thisfile;
      checkMissing(thisfile1);
      c56 = `is.object`(thisfile1);
      if c56 then L1() else L2(thisfile1);
    L0(dx59):
      return dx59;
    L1():
      dr56 = tryDispatchBuiltin.1("[", thisfile1);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(thisfile3):
      this = ld this;
      this1 = force? this;
      __15 = ldf `[` in base;
      r312 = dyn __15(thisfile3, this1);
      goto L0(r312);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx58);
    };
    p75 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r315 = dyn _in_2(p74, p75);
    check L406() else D138();
  L448():
    tried_aliases_db1 = force? tried_aliases_db;
    checkMissing(tried_aliases_db1);
    c67 = `as.logical`(tried_aliases_db1);
    if c67 then L449() else L78();
  L471():
    aliases_db5 = force? aliases_db4;
    checkMissing(aliases_db5);
    c72 = `is.object`(aliases_db5);
    if c72 then L472() else L473(i69, aliases_db5);
  L520():
    pkg21 = force? pkg20;
    checkMissing(pkg21);
    c82 = ldf c in base;
    r411 = dyn c82(unknown7, pkg21);
    check L521() else D193();
  L547():
    c87 = ldf c in base;
    r428 = dyn c87(repos1, r427);
    check L548() else D206();
  L554():
    known1 = force? known;
    checkMissing(known1);
    inherits2 = ldf inherits in base;
    r451 = dyn inherits2(known1, "try-error", FALSE);
    check L555() else D210();
  L556():
    goto L110(TRUE);
  L603():
    list6 = ldf list in base;
    r528 = dyn list6(r527);
    check L604() else D231();
  D138():
    deopt 521 [i17, r315];
  D193():
    deopt 722 [i17, r411];
  D206():
    deopt 769 [r428];
  D210():
    deopt 785 [r451];
  D211():
    deopt 789 [];
  D231():
    deopt 874 [r528];
  L78():
    st tried_aliases_db = TRUE;
    tryCatch = ldf tryCatch;
    check L457() else D162();
  L86(i73, dx70):
    st aliases = dx70;
    sym38 = ldf `is.null`;
    base50 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base50);
    if guard38 then L476() else L477();
  L111(r463):
    c93 = `as.logical`(r463);
    if c93 then L564() else L112();
  L406():
    st good = r315;
    sym32 = ldf any;
    base44 = ldf any in base;
    guard32 = `==`.4(sym32, base44);
    if guard32 then L407() else L408();
  L449():
    sym35 = ldf c;
    base47 = ldf c in base;
    guard35 = `==`.4(sym35, base47);
    if guard35 then L450() else L451();
  L472():
    dr66 = tryDispatchBuiltin.1("[[", aliases_db5);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L474() else L473(i69, dr66);
  L473(i71, aliases_db7):
    pkg16 = ld pkg;
    check L475() else D169();
  L521():
    goto L98(i17, r411);
  L548():
    goto L106(r428);
  L555():
    goto L108(r451);
  L558():
    p99 = prom<V +>{
      unknown12 = ld unknown;
      unknown13 = force? unknown12;
      checkMissing(unknown13);
      return unknown13;
    };
    p100 = prom<V +>{
      sym49 = ldf c;
      base61 = ldf c in base;
      guard49 = `==`.4(sym49, base61);
      if guard49 then L2() else L3();
    L0(r455):
      return r455;
    L2():
      known2 = ld known;
      known3 = force? known2;
      checkMissing(known3);
      sym50 = ldf c;
      base62 = ldf c in base;
      guard50 = `==`.4(sym50, base62);
      if guard50 then L4() else L5();
    L3():
      r454 = dyn base61(<sym known>, <lang c("GLMMGibbs", "survnnet", "yags")>);
      goto L0(r454);
    L1(r457):
      c92 = ldf c in base;
      r459 = dyn c92(known3, r457);
      goto L0(r459);
    L4():
      c91 = ldf c in base;
      r458 = dyn c91("GLMMGibbs", "survnnet", "yags");
      goto L1(r458);
    L5():
      r456 = dyn base62("GLMMGibbs", "survnnet", "yags");
      goto L1(r456);
    };
    r461 = dyn _in_7(p99, p100);
    check L559() else D212();
  L560():
    miss = ld miss;
    check L562() else D213();
  L561():
    r462 = dyn base63(<sym miss>);
    goto L111(r462);
  L604():
    goto L125(r528);
  D162():
    deopt 607 [i49];
  D169():
    deopt 634 [i71, aliases_db7, pkg16];
  D212():
    deopt 792 [r461];
  D213():
    deopt 796 [miss];
  L64(i22, r317):
    c57 = `as.logical`(r317);
    if c57 then L411() else L65();
  L79(i56, r349):
    st unknown = r349;
    goto L57(i56);
  L87(i76, r366):
    c74 = `as.logical`(r366);
    if c74 then L479() else L88();
  L112():
    goto L113();
  L113():
    sym53 = ldf any;
    base65 = ldf any in base;
    guard53 = `==`.4(sym53, base65);
    if guard53 then L568() else L569();
  L407():
    good = ld good;
    check L409() else D139();
  L408():
    r316 = dyn base44(<lang `!`(good)>);
    goto L64(i17, r316);
  L450():
    unknown = ld unknown;
    check L452() else D159();
  L451():
    r348 = dyn base47(<sym unknown>, <sym pkg>);
    goto L79(i49, r348);
  L457():
    p82 = prom<V +>{
      CRAN_aliases_db = ldf CRAN_aliases_db;
      r352 = dyn CRAN_aliases_db();
      return r352;
    };
    p83 = prom<V +>{
      r354 = clos inner3708401697;
      return r354;
    };
    r356 = dyn tryCatch[, error](p82, p83);
    check L458() else D163();
  L474():
    dx69 = getTryDispatchBuiltinValue(dr66);
    goto L86(i69, dx69);
  L475():
    pkg17 = force? pkg16;
    __18 = ldf `[[` in base;
    r364 = dyn __18(aliases_db7, pkg17);
    goto L86(i71, r364);
  L476():
    aliases26 = ld aliases;
    check L478() else D170();
  L477():
    r365 = dyn base50(<sym aliases>);
    goto L87(i73, r365);
  L559():
    goto L110(r461);
  L562():
    miss1 = force? miss;
    checkMissing(miss1);
    any3 = ldf any in base;
    r464 = dyn any3(miss1);
    check L563() else D214();
  L564():
    message1 = ldf message;
    check L565() else D215();
  D139():
    deopt 525 [i17, good];
  D159():
    deopt 592 [i49, unknown];
  D163():
    deopt 611 [i49, r356];
  D170():
    deopt 639 [i73, aliases26];
  D214():
    deopt 799 [r464];
  D215():
    deopt 801 [];
  L65():
    goto L69(i22, FALSE);
  L69(i32, r336):
    st suspect = r336;
    good4 = ld good;
    check L427() else D150();
  L88():
    sub4 = ldf sub;
    check L487() else D174();
  L114(r482):
    c95 = `as.logical`(r482);
    if c95 then L572() else L115();
  L409():
    good1 = force? good;
    checkMissing(good1);
    r318 = `!`(good1);
    any1 = ldf any in base;
    r319 = dyn any1(r318);
    check L410() else D140();
  L411():
    _in_3 = ldf `%in%`;
    check L412() else D141();
  L452():
    unknown1 = force? unknown;
    checkMissing(unknown1);
    pkg12 = ld pkg;
    check L453() else D160();
  L458():
    st aliases_db = r356;
    sym36 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base48);
    if guard36 then L459() else L460();
  L478():
    aliases27 = force? aliases26;
    checkMissing(aliases27);
    c73 = `==`(aliases27, NULL);
    goto L87(i73, c73);
  L479():
    sym39 = ldf c;
    base51 = ldf c in base;
    guard39 = `==`.4(sym39, base51);
    if guard39 then L480() else L481();
  L563():
    goto L111(r464);
  L565():
    p106 = prom<V +>{
      sprintf1 = ldf sprintf;
      p102 = prom<V +>{
        ngettext1 = ldf ngettext;
        p101 = prom<V +>{
          sym52 = ldf sum;
          base64 = ldf sum in base;
          guard52 = `==`.4(sym52, base64);
          if guard52 then L1() else L2();
        L0(r466):
          return r466;
        L1():
          miss2 = ld miss;
          miss3 = force? miss2;
          checkMissing(miss3);
          sum = ldf sum in base;
          r467 = dyn sum(miss3);
          goto L0(r467);
        L2():
          r465 = dyn base64(<sym miss>);
          goto L0(r465);
        };
        r469 = dyn ngettext1(p101, "Package unavailable to check Rd xrefs: %s", "Packages unavailable to check Rd xrefs: %s");
        return r469;
      };
      p105 = prom<V +>{
        paste2 = ldf paste;
        p104 = prom<V +>{
          sQuote1 = ldf sQuote;
          p103 = prom<V +>{
            unknown14 = ld unknown;
            unknown15 = force? unknown14;
            checkMissing(unknown15);
            c94 = `is.object`(unknown15);
            if c94 then L1() else L2(unknown15);
          L0(dx88):
            return dx88;
          L1():
            dr82 = tryDispatchBuiltin.1("[", unknown15);
            dc41 = getTryDispatchBuiltinDispatched(dr82);
            if dc41 then L3() else L2(dr82);
          L2(unknown17):
            miss4 = ld miss;
            miss5 = force? miss4;
            __26 = ldf `[` in base;
            r471 = dyn __26(unknown17, miss5);
            goto L0(r471);
          L3():
            dx87 = getTryDispatchBuiltinValue(dr82);
            goto L0(dx87);
          };
          r473 = dyn sQuote1(p103);
          return r473;
        };
        r475 = dyn paste2[, collapse](p104, ", ");
        return r475;
      };
      r477 = dyn sprintf1(p102, p105);
      return r477;
    };
    r479 = dyn message1[, domain](p106, NA_LGL);
    check L566() else D216();
  L568():
    miss6 = ld miss;
    check L570() else D217();
  L569():
    r481 = dyn base65(<lang `!`(miss)>);
    goto L114(r481);
  D140():
    deopt 529 [i17, r319];
  D141():
    deopt 531 [i22];
  D150():
    deopt 558 [i32, good4];
  D160():
    deopt 594 [i49, pkg12];
  D174():
    deopt 656 [i76];
  D216():
    deopt 805 [r479];
  D217():
    deopt 810 [miss6];
  L81(i61, r358):
    c70 = `as.logical`(r358);
    if c70 then L462() else L82();
  L89(i81, r368):
    st unknown = r368;
    goto L57(i81);
  L115():
    goto L116(NULL);
  L116(r502):
    goto L117();
  L410():
    goto L64(i17, r319);
  L412():
    p76 = prom<V +>{
      pkg6 = ld pkg;
      pkg7 = force? pkg6;
      checkMissing(pkg7);
      return pkg7;
    };
    p77 = prom<V +>{
      sym33 = ldf names;
      base45 = ldf names in base;
      guard33 = `==`.4(sym33, base45);
      if guard33 then L1() else L2();
    L0(r322):
      return r322;
    L1():
      aliases18 = ld aliases;
      aliases19 = force? aliases18;
      checkMissing(aliases19);
      names8 = ldf names in base;
      r323 = dyn names8(aliases19);
      goto L0(r323);
    L2():
      r321 = dyn base45(<sym aliases>);
      goto L0(r321);
    };
    r325 = dyn _in_3(p76, p77);
    check L413() else D142();
  L427():
    good5 = force? good4;
    checkMissing(good5);
    r337 = `!`(good5);
    suspect = ld suspect;
    check L428() else D151();
  L453():
    pkg13 = force? pkg12;
    checkMissing(pkg13);
    c68 = ldf c in base;
    r350 = dyn c68(unknown1, pkg13);
    check L454() else D161();
  L459():
    aliases_db2 = ld aliases_db;
    check L461() else D164();
  L460():
    r357 = dyn base48(<sym aliases_db>);
    goto L81(i49, r357);
  L480():
    unknown4 = ld unknown;
    check L482() else D171();
  L481():
    r367 = dyn base51(<sym unknown>, <sym pkg>);
    goto L89(i76, r367);
  L487():
    p85 = prom<V +>{
      basename1 = ldf basename;
      p84 = prom<V +>{
        sym40 = ldf names;
        base52 = ldf names in base;
        guard40 = `==`.4(sym40, base52);
        if guard40 then L1() else L2();
      L0(r372):
        return r372;
      L1():
        aliases28 = ld aliases;
        aliases29 = force? aliases28;
        checkMissing(aliases29);
        names9 = ldf names in base;
        r373 = dyn names9(aliases29);
        goto L0(r373);
      L2():
        r371 = dyn base52(<sym aliases>);
        goto L0(r371);
      };
      r375 = dyn basename1(p84);
      return r375;
    };
    r377 = dyn sub4("\\.[Rr]d", "", p85);
    check L488() else D175();
  L566():
    goto L113();
  L570():
    miss7 = force? miss6;
    checkMissing(miss7);
    r483 = `!`(miss7);
    any4 = ldf any in base;
    r484 = dyn any4(r483);
    check L571() else D218();
  L572():
    message2 = ldf message;
    check L573() else D219();
  D142():
    deopt 534 [i22, r325];
  D151():
    deopt 560 [i32, r337, suspect];
  D161():
    deopt 597 [i49, r350];
  D164():
    deopt 614 [i49, aliases_db2];
  D171():
    deopt 644 [i76, unknown4];
  D175():
    deopt 660 [i76, r377];
  D218():
    deopt 814 [r484];
  D219():
    deopt 816 [];
  L82():
    goto L85(i61);
  L413():
    c58 = `as.logical`(r325);
    if c58 then L414() else L66();
  L428():
    suspect1 = force? suspect;
    checkMissing(suspect1);
    r338 = `!`(suspect1);
    r339 = `&&`(r337, r338);
    l19 = ld db;
    c61 = `is.object`(l19);
    if c61 then L429() else L430(i32, r339, l19);
  L454():
    goto L79(i49, r350);
  L461():
    aliases_db3 = force? aliases_db2;
    checkMissing(aliases_db3);
    c69 = `==`(aliases_db3, NULL);
    goto L81(i49, c69);
  L462():
    sym37 = ldf c;
    base49 = ldf c in base;
    guard37 = `==`.4(sym37, base49);
    if guard37 then L463() else L464();
  L482():
    unknown5 = force? unknown4;
    checkMissing(unknown5);
    pkg18 = ld pkg;
    check L483() else D172();
  L488():
    st nm = r377;
    _in_5 = ldf `%in%`;
    check L489() else D176();
  L571():
    goto L114(r484);
  L573():
    p112 = prom<V +>{
      sprintf2 = ldf sprintf;
      p108 = prom<V +>{
        ngettext2 = ldf ngettext;
        p107 = prom<V +>{
          sym54 = ldf sum;
          base66 = ldf sum in base;
          guard54 = `==`.4(sym54, base66);
          if guard54 then L1() else L2();
        L0(r486):
          return r486;
        L1():
          miss8 = ld miss;
          miss9 = force? miss8;
          checkMissing(miss9);
          r487 = `!`(miss9);
          sum1 = ldf sum in base;
          r488 = dyn sum1(r487);
          goto L0(r488);
        L2():
          r485 = dyn base66(<lang `!`(miss)>);
          goto L0(r485);
        };
        r490 = dyn ngettext2(p107, "Unknown package %s in Rd xrefs", "Unknown packages %s in Rd xrefs");
        return r490;
      };
      p111 = prom<V +>{
        paste3 = ldf paste;
        p110 = prom<V +>{
          sQuote2 = ldf sQuote;
          p109 = prom<V +>{
            unknown18 = ld unknown;
            unknown19 = force? unknown18;
            checkMissing(unknown19);
            c96 = `is.object`(unknown19);
            if c96 then L1() else L2(unknown19);
          L0(dx90):
            return dx90;
          L1():
            dr84 = tryDispatchBuiltin.1("[", unknown19);
            dc42 = getTryDispatchBuiltinDispatched(dr84);
            if dc42 then L3() else L2(dr84);
          L2(unknown21):
            miss10 = ld miss;
            miss11 = force? miss10;
            checkMissing(miss11);
            r492 = `!`(miss11);
            __27 = ldf `[` in base;
            r493 = dyn __27(unknown21, r492);
            goto L0(r493);
          L3():
            dx89 = getTryDispatchBuiltinValue(dr84);
            goto L0(dx89);
          };
          r495 = dyn sQuote2(p109);
          return r495;
        };
        r497 = dyn paste3[, collapse](p110, ", ");
        return r497;
      };
      r499 = dyn sprintf2(p108, p111);
      return r499;
    };
    r501 = dyn message2[, domain](p112, NA_LGL);
    check L574() else D220();
  D172():
    deopt 646 [i76, pkg18];
  D176():
    deopt 663 [i76];
  D220():
    deopt 820 [r501];
  L66():
    Rd_aliases4 = ldf Rd_aliases;
    check L421() else D145();
  L68(i31, dx62):
    st aliases1 = dx62;
    good2 = ld good;
    check L423() else D147();
  L70(i36, dx66):
    st db = dx66;
    mind_suspects2 = ld mind_suspects;
    check L433() else D153();
  L83(i66, r360):
    st unknown = r360;
    goto L57(i66);
  L414():
    aliases20 = ld aliases;
    check L415() else D143();
  L429():
    dr62 = tryDispatchBuiltin.0("[<-", l19, r339);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L431() else L430(i32, r339, dr62);
  L430(i34, r341, l21):
    this4 = ld this;
    check L432() else D152();
  L463():
    unknown2 = ld unknown;
    check L465() else D165();
  L464():
    r359 = dyn base49(<sym unknown>, <sym pkg>);
    goto L83(i61, r359);
  L483():
    pkg19 = force? pkg18;
    checkMissing(pkg19);
    c75 = ldf c in base;
    r369 = dyn c75(unknown5, pkg19);
    check L484() else D173();
  L489():
    p86 = prom<V +>{
      thisfile8 = ld thisfile;
      thisfile9 = force? thisfile8;
      checkMissing(thisfile9);
      c76 = `is.object`(thisfile9);
      if c76 then L1() else L2(thisfile9);
    L0(dx72):
      return dx72;
    L1():
      dr68 = tryDispatchBuiltin.1("[", thisfile9);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(thisfile11):
      this8 = ld this;
      this9 = force? this8;
      __19 = ldf `[` in base;
      r378 = dyn __19(thisfile11, this9);
      goto L0(r378);
    L3():
      dx71 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx71);
    };
    p87 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r381 = dyn _in_5(p86, p87);
    check L490() else D177();
  L574():
    goto L116(r501);
  D143():
    deopt 535 [i22, aliases20];
  D145():
    deopt 541 [i22];
  D147():
    deopt 547 [i31, good2];
  D152():
    deopt 565 [i34, r341, l21, r339, this4];
  D153():
    deopt 570 [i36, mind_suspects2];
  D165():
    deopt 619 [i61, unknown2];
  D173():
    deopt 649 [i76, r369];
  D177():
    deopt 666 [i76, r381];
  L415():
    aliases21 = force? aliases20;
    checkMissing(aliases21);
    c59 = `is.object`(aliases21);
    if c59 then L416() else L417(i22, aliases21);
  L421():
    p78 = prom<V +>{
      pkg10 = ld pkg;
      pkg11 = force? pkg10;
      checkMissing(pkg11);
      return pkg11;
    };
    p79 = prom<V +>{
      lib_loc11 = ld `lib.loc`;
      lib_loc12 = force? lib_loc11;
      checkMissing(lib_loc12);
      return lib_loc12;
    };
    r329 = dyn Rd_aliases4[, `lib.loc`](p78, p79);
    check L422() else D146();
  L423():
    good3 = force? good2;
    checkMissing(good3);
    r330 = `!`(good3);
    _in_4 = ldf `%in%`;
    check L424() else D148();
  L431():
    dx65 = getTryDispatchBuiltinValue(dr62);
    goto L70(i32, dx65);
  L432():
    this5 = force? this4;
    ___6 = ldf `[<-` in base;
    r344 = dyn ___6(l21, r339, this5, "bad");
    goto L70(i34, r344);
  L433():
    mind_suspects3 = force? mind_suspects2;
    checkMissing(mind_suspects3);
    c62 = `as.logical`(mind_suspects3);
    if c62 then L434() else L71();
  L465():
    unknown3 = force? unknown2;
    checkMissing(unknown3);
    pkg14 = ld pkg;
    check L466() else D166();
  L484():
    goto L89(i76, r369);
  L490():
    st good = r381;
    sym41 = ldf any;
    base53 = ldf any in base;
    guard41 = `==`.4(sym41, base53);
    if guard41 then L491() else L492();
  D146():
    deopt 545 [i22, r329];
  D148():
    deopt 550 [i31, r330];
  D166():
    deopt 621 [i61, pkg14];
  L67(i30, dx61):
    goto L68(i30, dx61);
  L71():
    goto L73(i36, NULL);
  L73(i43, suspect8):
    goto L74(i43);
  L91(i86, r383):
    c77 = `as.logical`(r383);
    if c77 then L495() else L92();
  L416():
    dr58 = tryDispatchBuiltin.1("[[", aliases21);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L418() else L417(i22, dr58);
  L417(i28, aliases23):
    pkg8 = ld pkg;
    check L419() else D144();
  L422():
    goto L68(i22, r329);
  L424():
    p80 = prom<V +>{
      thisfile4 = ld thisfile;
      thisfile5 = force? thisfile4;
      checkMissing(thisfile5);
      c60 = `is.object`(thisfile5);
      if c60 then L1() else L2(thisfile5);
    L0(dx64):
      return dx64;
    L1():
      dr60 = tryDispatchBuiltin.1("[", thisfile5);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(thisfile7):
      this2 = ld this;
      this3 = force? this2;
      __17 = ldf `[` in base;
      r331 = dyn __17(thisfile7, this3);
      goto L0(r331);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx63);
    };
    p81 = prom<V +>{
      aliases24 = ld aliases1;
      aliases25 = force? aliases24;
      checkMissing(aliases25);
      return aliases25;
    };
    r334 = dyn _in_4(p80, p81);
    check L425() else D149();
  L434():
    suspect2 = ld suspect;
    check L435() else D154();
  L466():
    pkg15 = force? pkg14;
    checkMissing(pkg15);
    c71 = ldf c in base;
    r361 = dyn c71(unknown3, pkg15);
    check L467() else D167();
  L491():
    good6 = ld good;
    check L493() else D178();
  L492():
    r382 = dyn base53(<lang `!`(good)>);
    goto L91(i76, r382);
  D144():
    deopt 537 [i28, aliases23, pkg8];
  D149():
    deopt 553 [i31, r330, r334];
  D154():
    deopt 572 [i36, suspect2];
  D167():
    deopt 624 [i61, r361];
  D178():
    deopt 670 [i76, good6];
  L92():
    goto L93(i86, FALSE);
  L93(i89, r399):
    st suspect = r399;
    good10 = ld good;
    check L502() else D185();
  L418():
    dx60 = getTryDispatchBuiltinValue(dr58);
    goto L67(i22, dx60);
  L419():
    pkg9 = force? pkg8;
    __16 = ldf `[[` in base;
    r326 = dyn __16(aliases23, pkg9);
    goto L67(i28, r326);
  L425():
    r335 = `&&`(r330, r334);
    goto L69(i31, r335);
  L435():
    suspect3 = force? suspect2;
    checkMissing(suspect3);
    l22 = ld db;
    c63 = `is.object`(l22);
    if c63 then L436() else L437(i36, suspect3, l22);
  L467():
    goto L83(i61, r361);
  L493():
    good7 = force? good6;
    checkMissing(good7);
    r384 = `!`(good7);
    any2 = ldf any in base;
    r385 = dyn any2(r384);
    check L494() else D179();
  L495():
    unique3 = ldf unique;
    check L496() else D180();
  D179():
    deopt 674 [i76, r385];
  D180():
    deopt 676 [i86];
  D185():
    deopt 691 [i89, good10];
  L72(i42, suspect7, dx68):
    st db = dx68;
    goto L73(i42, suspect7);
  L436():
    dr64 = tryDispatchBuiltin.0("[<-", l22, suspect3);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L438() else L437(i36, suspect3, dr64);
  L437(i40, suspect5, l24):
    this6 = ld this;
    check L439() else D155();
  L494():
    goto L91(i76, r385);
  L496():
    p89 = prom<V +>{
      sym42 = ldf `as.character`;
      base54 = ldf `as.character` in base;
      guard42 = `==`.4(sym42, base54);
      if guard42 then L1() else L2();
    L0(r387):
      return r387;
    L1():
      unlist2 = ldf unlist;
      p88 = prom<V +>{
        aliases30 = ld aliases;
        aliases31 = force? aliases30;
        checkMissing(aliases31);
        return aliases31;
      };
      r389 = dyn unlist2[, `use.names`](p88, FALSE);
      as_character = ldf `as.character` in base;
      r390 = dyn as_character(r389);
      goto L0(r390);
    L2():
      r386 = dyn base54(<lang unlist(aliases, use.names=FALSE)>);
      goto L0(r386);
    };
    r392 = dyn unique3(p89);
    check L497() else D181();
  L502():
    good11 = force? good10;
    checkMissing(good11);
    r400 = `!`(good11);
    suspect10 = ld suspect;
    check L503() else D186();
  D155():
    deopt 575 [i40, suspect5, l24, suspect3, this6];
  D181():
    deopt 678 [i86, r392];
  D186():
    deopt 693 [i89, r400, suspect10];
  L438():
    dx67 = getTryDispatchBuiltinValue(dr64);
    goto L72(i36, suspect3, dx67);
  L439():
    this7 = force? this6;
    ___7 = ldf `[<-` in base;
    r345 = dyn ___7(l24, suspect3, this7, "suspect");
    goto L72(i40, suspect5, r345);
  L497():
    st aliases1 = r392;
    good8 = ld good;
    check L498() else D182();
  L503():
    suspect11 = force? suspect10;
    checkMissing(suspect11);
    r401 = `!`(suspect11);
    r402 = `&&`(r400, r401);
    l25 = ld db;
    c79 = `is.object`(l25);
    if c79 then L504() else L505(i89, r402, l25);
  D182():
    deopt 680 [i86, good8];
  L94(i93, dx76):
    st db = dx76;
    mind_suspects4 = ld mind_suspects;
    check L508() else D188();
  L498():
    good9 = force? good8;
    checkMissing(good9);
    r393 = `!`(good9);
    _in_6 = ldf `%in%`;
    check L499() else D183();
  L504():
    dr72 = tryDispatchBuiltin.0("[<-", l25, r402);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L506() else L505(i89, r402, dr72);
  L505(i91, r404, l27):
    this12 = ld this;
    check L507() else D187();
  D183():
    deopt 683 [i86, r393];
  D187():
    deopt 698 [i91, r404, l27, r402, this12];
  D188():
    deopt 703 [i93, mind_suspects4];
  L499():
    p90 = prom<V +>{
      thisfile12 = ld thisfile;
      thisfile13 = force? thisfile12;
      checkMissing(thisfile13);
      c78 = `is.object`(thisfile13);
      if c78 then L1() else L2(thisfile13);
    L0(dx74):
      return dx74;
    L1():
      dr70 = tryDispatchBuiltin.1("[", thisfile13);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(thisfile15):
      this10 = ld this;
      this11 = force? this10;
      __20 = ldf `[` in base;
      r394 = dyn __20(thisfile15, this11);
      goto L0(r394);
    L3():
      dx73 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx73);
    };
    p91 = prom<V +>{
      aliases32 = ld aliases1;
      aliases33 = force? aliases32;
      checkMissing(aliases33);
      return aliases33;
    };
    r397 = dyn _in_6(p90, p91);
    check L500() else D184();
  L506():
    dx75 = getTryDispatchBuiltinValue(dr72);
    goto L94(i89, dx75);
  L507():
    this13 = force? this12;
    ___8 = ldf `[<-` in base;
    r407 = dyn ___8(l27, r402, this13, "bad");
    goto L94(i91, r407);
  L508():
    mind_suspects5 = force? mind_suspects4;
    checkMissing(mind_suspects5);
    c80 = `as.logical`(mind_suspects5);
    if c80 then L509() else L95();
  D184():
    deopt 686 [i86, r393, r397];
  L95():
    goto L97(i93, NULL);
  L97(i100, suspect18):
    goto L74(i100);
  L500():
    r398 = `&&`(r393, r397);
    goto L93(i86, r398);
  L509():
    suspect12 = ld suspect;
    check L510() else D189();
  D189():
    deopt 705 [i93, suspect12];
  L510():
    suspect13 = force? suspect12;
    checkMissing(suspect13);
    l28 = ld db;
    c81 = `is.object`(l28);
    if c81 then L511() else L512(i93, suspect13, l28);
  L96(i99, suspect17, dx78):
    st db = dx78;
    goto L97(i99, suspect17);
  L511():
    dr74 = tryDispatchBuiltin.0("[<-", l28, suspect13);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L513() else L512(i93, suspect13, dr74);
  L512(i97, suspect15, l30):
    this14 = ld this;
    check L514() else D190();
  D190():
    deopt 708 [i97, suspect15, l30, suspect13, this14];
  L513():
    dx77 = getTryDispatchBuiltinValue(dr74);
    goto L96(i93, suspect13, dx77);
  L514():
    this15 = force? this14;
    ___9 = ldf `[<-` in base;
    r408 = dyn ___9(l30, suspect13, this15, "suspect");
    goto L96(i97, suspect15, r408);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg tryCatch:cls, reg Rd_aliases:cls, reg ddd1:dots?, reg r:V, reg p:p(V +), reg identity:*, reg identity1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st `...` = ddd;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      Rd_aliases = ldf Rd_aliases;
      ddd1 = ld `...`;
      r = dyn Rd_aliases[`...`](ddd1);
      return r;
    };
    p1 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r3 = dyn tryCatch[, error](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}