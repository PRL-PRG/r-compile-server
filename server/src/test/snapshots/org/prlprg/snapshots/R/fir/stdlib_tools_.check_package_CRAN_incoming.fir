fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3861632997;
    st `.check_package_CRAN_incoming` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3861632997(dir, localOnly, pkgSize) {
  (reg dir:*, reg localOnly:*, reg pkgSize:*) -+> V { var dir:*, var localOnly:*, reg localOnly_isMissing:L, reg localOnly_orDefault:*, var pkgSize:*, reg pkgSize_isMissing:L, reg pkgSize_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg l:*, reg class__:cls, reg r3:V, reg _get_package_metadata:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r5:V, reg analyze_license:cls, reg meta:*, reg meta1:V, reg c:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg lic_info:*, reg lic_info1:V, reg c1:L, reg lic_info3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg lic_info4:*, reg lic_info5:V, reg c2:L, reg lic_info7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg length:cls, reg r13:V, reg c3:L, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg c8:L, reg r15:V, reg extensions:*, reg extensions1:V, reg c9:L, reg c11:L, reg extensions3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c13:L, reg dx7:V, reg r16:V, reg length1:cls, reg r17:V, reg r18:V, reg c14:L, reg c15:L, reg c16:V, reg _license_component_is_for_stub_and_ok:cls, reg components:*, reg components1:V, reg p2:p(V +), reg dir3:*, reg dir4:V, reg p3:p(V +), reg r21:V, reg r22:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg c28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg c31:L, reg r24:V, reg extensions4:*, reg extensions5:V, reg c32:L, reg c34:L, reg extensions7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c36:L, reg dx9:V, reg r25:V, reg any:cls, reg r26:V, reg c37:L, reg c38:V, reg c40:L, reg extensions8:*, reg extensions9:V, reg c41:L, reg extensions11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r27:V, reg c42:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg ind:*, reg ind1:V, reg __1:cls, reg r28:V, reg l1:*, reg c43:L, reg dx17:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx19:V, reg dx21:V, reg r29:V, reg Filter:cls, reg length2:*, reg length3:V, reg p4:p(V +), reg lapply:cls, reg lic_info8:*, reg lic_info9:V, reg c44:L, reg lic_info11:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r31:V, reg p5:p(V +), reg r33:cls, reg p6:p(V +), reg r35:V, reg p7:p(V +), reg r37:V, reg l4:*, reg c45:L, reg r39:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx24:V, reg r41:V, reg dx25:V, reg r42:V, reg meta4:*, reg meta5:V, reg c46:L, reg meta7:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg __2:cls, reg r44:V, reg l7:*, reg c47:L, reg dx29:V, reg l9:*, reg dr22:V, reg dc11:L, reg dx31:V, reg dx33:V, reg r45:V, reg gsub:cls, reg as_vector:cls, reg out:*, reg out1:V, reg c48:L, reg out3:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg r46:V, reg p8:p(V +), reg r48:V, reg p9:p(V +), reg r50:V, reg sub:cls, reg sub1:cls, reg display:*, reg display1:V, reg p10:p(V +), reg r52:V, reg p11:p(V +), reg r54:V, reg grepl:cls, reg display2:*, reg display3:V, reg p12:p(V +), reg r56:V, reg c49:L, reg c51:V, reg grepl1:cls, reg display4:*, reg display5:V, reg p13:p(V +), reg r58:V, reg r59:V, reg c52:L, reg c53:V, reg c55:L, reg l10:*, reg c56:L, reg r61:L, reg l12:*, reg dr26:V, reg dc13:L, reg dx36:V, reg r63:L, reg dx37:V, reg r64:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r66:V, reg r67:V, reg display6:*, reg display7:V, reg nzchar:cls, reg r68:V, reg r69:V, reg c57:L, reg l13:*, reg c58:L, reg r71:L, reg l15:*, reg dr28:V, reg dc14:L, reg dx38:V, reg r73:L, reg dx39:V, reg r74:V, reg r76:cls, reg gsub1:cls, reg meta8:*, reg meta9:V, reg c59:L, reg meta11:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg __3:cls, reg r77:V, reg p14:p(V +), reg r79:V, reg maintainer:*, reg maintainer1:V, reg r80:V, reg c60:L, reg c62:V, reg check_maintainer_address:cls, reg maintainer2:*, reg maintainer3:V, reg p15:p(V +), reg r82:V, reg r83:V, reg c63:L, reg c64:V, reg c66:L, reg l16:*, reg c67:L, reg r85:L, reg l18:*, reg dr32:V, reg dc16:L, reg dx42:V, reg r87:L, reg dx43:V, reg r88:V, reg meta12:*, reg meta13:V, reg c68:L, reg meta15:V, reg dr34:V, reg dc17:L, reg dx44:V, reg dx45:V, reg __4:cls, reg r90:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r91:V, reg r92:V, reg ver:*, reg ver1:V, reg is_na:cls, reg r93:V, reg c69:L, reg stop:cls, reg r94:V, reg grepl2:cls, reg ver2:*, reg ver3:V, reg p16:p(V +), reg r97:V, reg c70:L, reg ver4:*, reg ver5:V, reg l19:*, reg c71:L, reg ver7:V, reg l21:*, reg dr36:V, reg dc18:L, reg dx46:V, reg ver9:V, reg dx47:V, reg r98:V, reg ver11:*, reg ver12:V, reg r99:V, reg c72:L, reg c74:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r100:V, reg c77:L, reg r101:V, reg meta16:*, reg meta17:V, reg c78:L, reg c80:L, reg meta19:V, reg dr38:V, reg dc19:L, reg dx48:V, reg c82:L, reg dx49:V, reg __5:cls, reg r102:V, reg is_na1:cls, reg r103:V, reg r104:V, reg c83:L, reg c84:V, reg c86:L, reg c88:V, reg meta20:*, reg meta21:V, reg c89:L, reg c91:L, reg meta23:V, reg dr40:V, reg dc20:L, reg dx50:V, reg c93:L, reg dx51:V, reg __6:cls, reg r105:V, reg r106:V, reg c94:L, reg c95:V, reg c97:L, reg format:cls, reg getRversion:cls, reg r107:V, reg p17:p(V +), reg r109:V, reg l22:*, reg c98:L, reg r111:V, reg l24:*, reg dr42:V, reg dc21:L, reg dx52:V, reg r113:V, reg dx53:V, reg ___:cls, reg r114:V, reg unlist:cls, reg package_version:cls, reg ver13:*, reg ver14:V, reg p18:p(V +), reg r117:V, reg p19:p(V +), reg r119:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r120:V, reg r121:V, reg unlisted_version:*, reg unlisted_version1:V, reg r122:V, reg unlisted_version2:*, reg unlisted_version3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r125:V, reg r126:V, reg unlisted_version6:V, reg r127:V, reg format1:cls, reg Sys_Date:cls, reg r128:V, reg p20:p(V +), reg r130:V, reg as_integer:cls, reg r131:V, reg r132:V, reg r133:V, reg any1:cls, reg r134:V, reg c99:L, reg c101:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r135:V, reg p21:p(V +), reg r137:V, reg r138:V, reg c102:L, reg c103:V, reg c105:L, reg ver15:*, reg ver16:V, reg l25:*, reg c106:L, reg ver18:V, reg l27:*, reg dr44:V, reg dc22:L, reg dx54:V, reg ver20:V, reg dx55:V, reg r139:V, reg r140:cls, reg meta24:*, reg meta25:V, reg c107:L, reg meta27:V, reg dr46:V, reg dc23:L, reg dx56:V, reg dx57:V, reg __7:cls, reg r141:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r142:V, reg r143:V, reg language:*, reg language1:V, reg is_na2:cls, reg r144:V, reg c108:L, reg c109:V, reg language2:*, reg language3:V, reg r145:V, reg c111:L, reg c112:V, reg c114:L, reg c115:V, reg startsWith:cls, reg language4:*, reg language5:V, reg p22:p(V +), reg r147:V, reg c117:L, reg c118:V, reg c120:L, reg c122:V, reg config_val_to_logical1:cls, reg Sys_getenv1:cls, reg r148:V, reg p23:p(V +), reg r150:V, reg c123:L, reg c124:V, reg c126:L, reg tryCatch:cls, reg _aspell_package_description_for_CRAN:cls, reg dir5:*, reg dir6:V, reg p24:p(V +), reg r152:V, reg p25:p(V +), reg identity:*, reg identity1:V, reg p26:p(V +), reg r155:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r156:V, reg r157:V, reg a:*, reg a1:V, reg inherits:cls, reg r158:V, reg c127:L, reg conditionMessage:cls, reg a2:*, reg a3:V, reg p27:p(V +), reg r160:V, reg l28:*, reg c128:L, reg r162:V, reg l30:*, reg dr48:V, reg dc24:L, reg dx58:V, reg r164:V, reg dx59:V, reg r165:V, reg r166:V, reg NROW:cls, reg a4:*, reg a5:V, reg p28:p(V +), reg r168:V, reg c129:L, reg a6:*, reg a7:V, reg l31:*, reg c130:L, reg a9:V, reg l33:*, reg dr50:V, reg dc25:L, reg dx60:V, reg a11:V, reg dx61:V, reg r169:V, reg r171:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r172:V, reg r173:V, reg meta28:*, reg meta29:V, reg names:cls, reg r174:V, reg _get_standard_DESCRIPTION_fields:cls, reg r175:V, reg nms:*, reg nms1:V, reg c131:L, reg nms3:V, reg dr52:V, reg dc26:L, reg dx62:V, reg dx63:V, reg _notin_:cls, reg nms4:*, reg nms5:V, reg p29:p(V +), reg stdNms:*, reg stdNms1:V, reg p30:p(V +), reg r178:V, reg grepl3:cls, reg paste0:cls, reg paste1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r179:V, reg r180:V, reg c132:cls, reg r181:V, reg p31:p(V +), reg r183:V, reg p32:p(V +), reg r185:V, reg p33:p(V +), reg nms6:*, reg nms7:V, reg p34:p(V +), reg r188:V, reg r189:V, reg r190:V, reg __8:cls, reg r191:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r192:V, reg r193:V, reg nms8:*, reg nms9:V, reg length4:cls, reg r194:V, reg c133:L, reg c135:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r195:V, reg c138:L, reg r196:V, reg nms10:*, reg nms11:V, reg c139:L, reg c141:L, reg nms13:V, reg dr54:V, reg dc27:L, reg dx64:V, reg c143:L, reg dx65:V, reg _notin_1:cls, reg nms14:*, reg nms15:V, reg p35:p(V +), reg paste2:cls, reg stdNms2:*, reg stdNms3:V, reg p36:p(V +), reg r199:V, reg p37:p(V +), reg r201:V, reg __9:cls, reg r202:V, reg length5:cls, reg r203:V, reg c144:L, reg c145:V, reg c147:L, reg nms16:*, reg nms17:V, reg l34:*, reg c148:L, reg nms19:V, reg l36:*, reg dr56:V, reg dc28:L, reg dx66:V, reg nms21:V, reg dx67:V, reg r204:V, reg character:cls, reg r205:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r206:V, reg r207:V, reg c149:cls, reg r208:V, reg s:V, reg l37:I, reg i:I, reg i1:I, reg i2:I, reg c150:L, reg x:V, reg strsplit:cls, reg meta30:*, reg meta31:V, reg c151:L, reg meta33:V, reg dr58:V, reg dc29:L, reg dx68:V, reg dx69:V, reg field:*, reg field1:V, reg __10:cls, reg r209:V, reg p38:p(V +), reg r211:V, reg c152:L, reg i6:I, reg r213:V, reg dr60:V, reg dc30:L, reg dx70:V, reg i8:I, reg dx71:V, reg __11:cls, reg r214:V, reg grep:cls, reg p39:*, reg p40:V, reg p41:p(V +), reg r216:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r217:V, reg i11:I, reg r218:V, reg uses:*, reg uses1:V, reg p42:*, reg p43:V, reg c153:cls, reg r219:V, reg grep1:cls, reg p44:*, reg p45:V, reg p46:p(V +), reg r221:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r222:V, reg i14:I, reg r223:V, reg BUGS:*, reg BUGS1:V, reg p47:*, reg p48:V, reg c154:cls, reg r224:V, reg grep2:cls, reg p49:*, reg p50:V, reg p51:p(V +), reg r226:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r227:V, reg i17:I, reg r228:V, reg ACM:*, reg ACM1:V, reg p52:*, reg p53:V, reg c155:cls, reg r229:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r230:V, reg r231:V, reg uses2:*, reg uses3:V, reg length6:cls, reg r232:V, reg c156:L, reg sort:cls, reg unique:cls, reg gsub2:cls, reg uses4:*, reg uses5:V, reg p54:p(V +), reg r234:V, reg p55:p(V +), reg r236:V, reg p56:p(V +), reg r238:V, reg l38:*, reg c157:L, reg r240:V, reg l40:*, reg dr62:V, reg dc31:L, reg dx72:V, reg r242:V, reg dx73:V, reg r243:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r245:V, reg r246:V, reg BUGS2:*, reg BUGS3:V, reg length7:cls, reg r247:V, reg c158:L, reg sort1:cls, reg unique1:cls, reg gsub3:cls, reg BUGS4:*, reg BUGS5:V, reg p57:p(V +), reg r249:V, reg p58:p(V +), reg r251:V, reg p59:p(V +), reg r253:V, reg l41:*, reg c159:L, reg r255:V, reg l43:*, reg dr64:V, reg dc32:L, reg dx74:V, reg r257:V, reg dx75:V, reg r258:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r260:V, reg r261:V, reg ACM2:*, reg ACM3:V, reg length8:cls, reg r262:V, reg c160:L, reg sort2:cls, reg unique2:cls, reg gsub4:cls, reg ACM4:*, reg ACM5:V, reg p60:p(V +), reg r264:V, reg p61:p(V +), reg r266:V, reg p62:p(V +), reg r268:V, reg l44:*, reg c161:L, reg r270:V, reg l46:*, reg dr66:V, reg dc33:L, reg dx76:V, reg r272:V, reg dx77:V, reg r273:V, reg character1:cls, reg r275:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r276:V, reg r277:V, reg meta34:*, reg meta35:V, reg c162:L, reg meta37:V, reg dr68:V, reg dc34:L, reg dx78:V, reg dx79:V, reg __12:cls, reg r278:V, reg is_na3:cls, reg r279:V, reg r280:V, reg c163:L, reg file_exists:cls, reg file_path:cls, reg dir7:*, reg dir8:V, reg p63:p(V +), reg r282:V, reg p64:p(V +), reg r284:V, reg r285:V, reg c164:L, reg l47:*, reg c165:L, reg r287:L, reg l49:*, reg dr70:V, reg dc35:L, reg dx80:V, reg r289:L, reg dx81:V, reg r290:V, reg r291:V, reg readRDS:cls, reg vds:*, reg vds1:V, reg p65:p(V +), reg r293:V, reg c166:L, reg dr72:V, reg dc36:L, reg dx82:V, reg dx83:V, reg __13:cls, reg r296:V, reg tryCatch1:cls, reg _build_Rd_db:cls, reg dir9:*, reg dir10:V, reg p66:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r299:V, reg r300:V, reg c167:cls, reg r301:V, reg p67:p(V +), reg r303:V, reg p68:p(V +), reg identity2:*, reg identity3:V, reg p69:p(V +), reg r306:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r307:V, reg r308:V, reg Rdb:*, reg Rdb1:V, reg inherits1:cls, reg r309:V, reg c168:L, reg conditionMessage1:cls, reg Rdb2:*, reg Rdb3:V, reg p70:p(V +), reg r311:V, reg l50:*, reg c169:L, reg r313:V, reg l52:*, reg dr74:V, reg dc37:L, reg dx84:V, reg r315:V, reg dx85:V, reg r316:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r318:V, reg r319:V, reg Rdb4:*, reg Rdb5:V, reg length9:cls, reg r320:V, reg c170:L, reg substring:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r321:V, reg r322:V, reg Rdb6:*, reg Rdb7:V, reg names1:cls, reg r323:V, reg p71:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r325:V, reg r326:V, reg file_path1:cls, reg dir11:*, reg dir12:V, reg p72:p(V +), reg r328:V, reg nchar:cls, reg r329:V, reg r330:V, reg p73:p(V +), reg r332:V, reg l53:*, reg names__:cls, reg r333:V, reg Rdb8:*, reg Rdb9:V, reg which:cls, reg vapply:cls, reg Rdb10:*, reg Rdb11:V, reg p74:p(V +), reg r335:cls, reg p75:p(V +), reg r337:V, reg p76:p(V +), reg r339:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r340:V, reg r341:V, reg containsBuildSexprs:*, reg containsBuildSexprs1:V, reg length10:cls, reg r342:V, reg c171:L, reg file_path2:cls, reg dir13:*, reg dir14:V, reg p77:p(V +), reg r344:V, reg file_exists1:cls, reg built_file:*, reg built_file1:V, reg p78:p(V +), reg r346:V, reg r347:V, reg c172:L, reg l54:*, reg c173:L, reg r349:L, reg l56:*, reg dr76:V, reg dc38:L, reg dx86:V, reg r351:L, reg dx87:V, reg r352:V, reg r353:V, reg readRDS1:cls, reg built_file2:*, reg built_file3:V, reg p79:p(V +), reg r355:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r356:V, reg r357:V, reg basename:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r358:V, reg r359:V, reg Rdb12:*, reg Rdb13:V, reg names2:cls, reg r360:V, reg p80:p(V +), reg r362:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r363:V, reg r364:V, reg built:*, reg built1:V, reg names3:cls, reg r365:V, reg match:cls, reg r366:V, reg built2:*, reg built3:V, reg c174:L, reg built5:V, reg dr78:V, reg dc39:L, reg dx88:V, reg dx89:V, reg pos:*, reg pos1:V, reg __14:cls, reg r367:V, reg l57:*, reg c175:L, reg dx91:V, reg l59:*, reg dr80:V, reg dc40:L, reg dx93:V, reg dx94:V, reg dx95:V, reg pos2:*, reg pos3:V, reg r368:V, reg ___1:cls, reg r369:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r371:V, reg r372:V, reg vapply1:cls, reg Rdb14:*, reg Rdb15:V, reg p81:p(V +), reg r374:cls, reg p82:p(V +), reg r376:V, reg any2:cls, reg r377:V, reg containsLaterSexprs:*, reg containsLaterSexprs1:V, reg c176:L, reg c178:V, reg file_exists2:cls, reg file_path3:cls, reg dir15:*, reg dir16:V, reg p83:p(V +), reg r379:V, reg p84:p(V +), reg r381:V, reg r382:V, reg c179:L, reg c180:V, reg c182:L, reg l60:*, reg c183:L, reg r384:L, reg l62:*, reg dr82:V, reg dc41:L, reg dx96:V, reg r386:L, reg dx97:V, reg r387:V, reg containsLaterSexprs2:*, reg containsLaterSexprs3:V, reg c184:L, reg c186:V, reg config_val_to_logical2:cls, reg Sys_getenv2:cls, reg r389:V, reg p85:p(V +), reg r391:V, reg c187:L, reg c188:V, reg c190:L, reg c192:V, reg file_exists3:cls, reg file_path4:cls, reg dir17:*, reg dir18:V, reg p86:p(V +), reg paste3:cls, reg meta38:*, reg meta39:V, reg c193:L, reg meta41:V, reg dr84:V, reg dc42:L, reg dx98:V, reg dx99:V, reg __15:cls, reg r393:V, reg p87:p(V +), reg r395:V, reg p88:p(V +), reg r397:V, reg p89:p(V +), reg r399:V, reg r400:V, reg c194:L, reg c195:V, reg c197:L, reg l63:*, reg c198:L, reg r402:L, reg l65:*, reg dr86:V, reg dc43:L, reg dx100:V, reg r404:L, reg dx101:V, reg r405:V, reg r407:cls, reg lapply1:cls, reg Rdb16:*, reg Rdb17:V, reg p90:p(V +), reg r409:cls, reg p91:p(V +), reg r411:V, reg Filter1:cls, reg length11:*, reg length12:V, reg p92:p(V +), reg bad:*, reg bad1:V, reg p93:p(V +), reg r414:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r415:V, reg r416:V, reg bad2:*, reg bad3:V, reg length13:cls, reg r417:V, reg c199:L, reg _fmt:cls, reg bad4:*, reg bad5:V, reg p94:p(V +), reg r419:V, reg l66:*, reg c200:L, reg r421:V, reg l68:*, reg dr88:V, reg dc44:L, reg dx102:V, reg r423:V, reg dx103:V, reg r424:V, reg lapply2:cls, reg Rdb18:*, reg Rdb19:V, reg p95:p(V +), reg r427:cls, reg p96:p(V +), reg r429:V, reg Filter2:cls, reg length14:*, reg length15:V, reg p97:p(V +), reg bad6:*, reg bad7:V, reg p98:p(V +), reg r432:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r433:V, reg r434:V, reg bad8:*, reg bad9:V, reg length16:cls, reg r435:V, reg c201:L, reg _fmt1:cls, reg bad10:*, reg bad11:V, reg p99:p(V +), reg r437:V, reg l69:*, reg c202:L, reg r439:V, reg l71:*, reg dr90:V, reg dc45:L, reg dx104:V, reg r441:V, reg dx105:V, reg r442:V, reg r444:cls, reg lapply3:cls, reg Rdb20:*, reg Rdb21:V, reg p100:p(V +), reg r446:cls, reg p101:p(V +), reg r448:V, reg Filter3:cls, reg length17:*, reg length18:V, reg p102:p(V +), reg bad12:*, reg bad13:V, reg p103:p(V +), reg r451:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r452:V, reg r453:V, reg bad14:*, reg bad15:V, reg length19:cls, reg r454:V, reg c203:L, reg _fmt2:cls, reg bad16:*, reg bad17:V, reg p104:p(V +), reg r456:V, reg l72:*, reg c204:L, reg r458:V, reg l74:*, reg dr92:V, reg dc46:L, reg dx106:V, reg r460:V, reg dx107:V, reg r461:V, reg r462:V, reg file_path5:cls, reg dir19:*, reg dir20:V, reg p105:p(V +), reg r464:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r465:V, reg r466:V, reg vds2:*, reg vds3:V, reg length20:cls, reg r467:V, reg c205:L, reg setdiff:cls, reg list_files:cls, reg file_path6:cls, reg dir21:*, reg dir22:V, reg p106:p(V +), reg r469:V, reg p107:p(V +), reg r471:V, reg p108:p(V +), reg list_files1:cls, reg vign_dir:*, reg vign_dir1:V, reg p109:p(V +), reg r474:V, reg p110:p(V +), reg r476:V, reg intersect:cls, reg vds4:*, reg vds5:V, reg p111:p(V +), reg sources:*, reg sources1:V, reg p112:p(V +), reg r479:V, reg vignetteEngine:cls, reg r481:V, reg c206:L, reg r483:V, reg dr94:V, reg dc47:L, reg dx108:V, reg dx109:V, reg r484:V, reg setdiff1:cls, reg list_files2:cls, reg file_path7:cls, reg dir23:*, reg dir24:V, reg p113:p(V +), reg r486:V, reg p114:p(V +), reg pattern:*, reg pattern1:V, reg p115:p(V +), reg r489:V, reg p116:p(V +), reg list_files3:cls, reg vign_dir2:*, reg vign_dir3:V, reg p117:p(V +), reg pattern2:*, reg pattern3:V, reg p118:p(V +), reg r493:V, reg p119:p(V +), reg r495:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r496:V, reg r497:V, reg sources2:*, reg sources3:V, reg length21:cls, reg r498:V, reg c207:L, reg dir_exists:cls, reg vign_dir4:*, reg vign_dir5:V, reg p120:p(V +), reg r500:V, reg l75:*, reg c208:L, reg r502:V, reg l77:*, reg dr96:V, reg dc48:L, reg dx110:V, reg dx111:V, reg r505:V, reg sources4:*, reg sources5:V, reg l78:*, reg c209:L, reg sources7:V, reg l80:*, reg dr98:V, reg dc49:L, reg dx112:V, reg sources9:V, reg dx113:V, reg r506:V, reg foss:*, reg foss1:V, reg c210:L, reg c212:V, reg dir_exists1:cls, reg file_path8:cls, reg dir25:*, reg dir26:V, reg p121:p(V +), reg r508:V, reg p122:p(V +), reg r510:V, reg r511:V, reg c213:L, reg c214:V, reg c216:L, reg list_files4:cls, reg file_path9:cls, reg dir27:*, reg dir28:V, reg p123:p(V +), reg r513:V, reg p124:p(V +), reg r515:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r516:V, reg r517:V, reg allfiles:*, reg allfiles1:V, reg list_files5:cls, reg file_path10:cls, reg dir29:*, reg dir30:V, reg p125:p(V +), reg r519:V, reg p126:p(V +), reg r521:V, reg c217:cls, reg r522:V, reg grep3:cls, reg allfiles2:*, reg allfiles3:V, reg p127:p(V +), reg r524:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r525:V, reg r526:V, reg javafiles:*, reg javafiles1:V, reg length22:cls, reg r527:V, reg c218:L, reg javafiles2:*, reg javafiles3:V, reg l81:*, reg c219:L, reg javafiles5:V, reg l83:*, reg dr100:V, reg dc50:L, reg dx114:V, reg javafiles7:V, reg dx115:V, reg r528:V, reg javafiles8:V, reg list_files6:cls, reg file_path11:cls, reg dir31:*, reg dir32:V, reg p128:p(V +), reg r530:V, reg p129:p(V +), reg r532:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r533:V, reg r534:V, reg dotjava:*, reg dotjava1:V, reg list_files7:cls, reg file_path12:cls, reg dir33:*, reg dir34:V, reg p130:p(V +), reg r536:V, reg p131:p(V +), reg r538:V, reg c220:cls, reg r539:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r540:V, reg r541:V, reg dotjava2:*, reg dotjava3:V, reg length23:cls, reg r542:V, reg c221:L, reg dotjava4:*, reg dotjava5:V, reg l84:*, reg c222:L, reg dotjava7:V, reg l86:*, reg dr102:V, reg dc51:L, reg dx116:V, reg dotjava9:V, reg dx117:V, reg r543:V, reg r544:cls, reg file_exists4:cls, reg file_path13:cls, reg dir35:*, reg dir36:V, reg p132:p(V +), reg r546:V, reg p133:p(V +), reg r548:V, reg c223:L, reg _check_citation_for_CRAN:cls, reg cfile:*, reg cfile1:V, reg p134:p(V +), reg meta42:*, reg meta43:V, reg p135:p(V +), reg r551:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r552:V, reg r553:V, reg cinfo:*, reg cinfo1:V, reg length24:cls, reg r554:V, reg c224:L, reg cinfo2:*, reg cinfo3:V, reg l87:*, reg c225:L, reg cinfo5:V, reg l89:*, reg dr104:V, reg dc52:L, reg dx118:V, reg cinfo7:V, reg dx119:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r555:V, reg cinfo12:V, reg l92:*, reg cinfo13:V, reg r556:V, reg cinfo14:*, reg cinfo15:V, reg names4:cls, reg r557:V, reg ___2:cls, reg r558:V, reg cinfo16:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r559:V, reg r560:V, reg meta44:*, reg meta45:V, reg c226:L, reg meta47:V, reg dr106:V, reg dc53:L, reg dx120:V, reg dx121:V, reg __16:cls, reg r561:V, reg is_na4:cls, reg r562:V, reg r563:V, reg c227:L, reg c229:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r564:V, reg c232:L, reg r565:V, reg tryCatch2:cls, reg str2expression:cls, reg aar:*, reg aar1:V, reg p136:p(V +), reg r567:V, reg p137:p(V +), reg identity4:*, reg identity5:V, reg p138:p(V +), reg r570:V, reg inherits2:cls, reg r571:V, reg r572:V, reg c233:L, reg c234:V, reg c236:L, reg sym46:cls, reg base46:cls, reg guard46:L, reg r573:V, reg r574:V, reg aar2:*, reg aar3:V, reg length25:cls, reg r575:V, reg r576:V, reg c237:L, reg c238:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r577:V, reg c242:L, reg r578:V, reg aar4:*, reg aar5:V, reg c243:L, reg c245:L, reg aar7:V, reg dr108:V, reg dc54:L, reg dx122:V, reg c247:L, reg dx123:V, reg __17:cls, reg r579:V, reg is_call:cls, reg r580:V, reg r581:V, reg c248:L, reg c249:V, reg bad18:*, reg bad19:V, reg r582:V, reg c251:L, reg sym48:cls, reg base48:cls, reg guard48:L, reg r583:V, reg r584:V, reg aar8:*, reg aar9:V, reg c252:L, reg aar11:V, reg dr110:V, reg dc55:L, reg dx124:V, reg dx125:V, reg __18:cls, reg r585:V, reg as_character:cls, reg r586:V, reg cname:*, reg cname1:V, reg r587:V, reg c253:L, reg c255:V, reg cname2:*, reg cname3:V, reg r588:V, reg c256:L, reg c257:L, reg c258:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r589:V, reg c265:L, reg c266:L, reg r590:V, reg vapply2:cls, reg aar12:*, reg aar13:V, reg c267:L, reg aar15:V, reg dr112:V, reg dc56:L, reg dx126:V, reg dx127:V, reg __19:cls, reg r591:V, reg p139:p(V +), reg r593:cls, reg p140:p(V +), reg r595:V, reg all:cls, reg r596:V, reg r597:V, reg c268:L, reg c269:V, reg c272:L, reg c273:V, reg bad20:*, reg bad21:V, reg c276:L, reg aar16:*, reg aar17:V, reg l93:*, reg c277:L, reg aar19:V, reg l95:*, reg dr114:V, reg dc57:L, reg dx128:V, reg aar21:V, reg dx129:V, reg r598:V, reg aar22:V, reg meta48:*, reg meta49:V, reg c278:L, reg meta51:V, reg dr116:V, reg dc58:L, reg dx130:V, reg dx131:V, reg __20:cls, reg r599:V, reg tryCatch3:cls, reg _eval_with_capture:cls, reg ___3:cls, reg r600:V, reg r601:cls, reg aar23:*, reg aar24:V, reg p141:p(V +), reg r603:V, reg p142:p(V +), reg r605:V, reg p143:p(V +), reg identity6:*, reg identity7:V, reg p144:p(V +), reg r608:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r609:V, reg r610:V, reg aut:*, reg aut1:V, reg inherits3:cls, reg r611:V, reg r612:V, reg c279:L, reg c281:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r613:V, reg c284:L, reg r614:V, reg aut2:*, reg aut3:V, reg c285:L, reg c287:L, reg aut5:V, reg dr118:V, reg dc59:L, reg dx132:V, reg c289:L, reg dx133:V, reg r615:V, reg length26:cls, reg r616:V, reg c290:L, reg c291:V, reg c293:L, reg msg:*, reg msg1:V, reg l96:*, reg c294:L, reg msg3:V, reg l98:*, reg dr120:V, reg dc60:L, reg dx134:V, reg msg5:V, reg dx135:V, reg r617:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r618:V, reg r619:V, reg meta52:*, reg meta53:V, reg c295:L, reg meta55:V, reg dr122:V, reg dc61:L, reg dx136:V, reg dx137:V, reg __21:cls, reg r620:V, reg is_na5:cls, reg r621:V, reg c296:L, reg ___4:cls, reg r622:V, reg r623:cls, reg meta56:*, reg meta57:V, reg c297:L, reg meta59:V, reg dr124:V, reg dc62:L, reg dx138:V, reg dx139:V, reg __22:cls, reg r624:V, reg p145:p(V +), reg maintainer4:*, reg maintainer5:V, reg p146:p(V +), reg r627:V, reg format2:cls, reg aar26:*, reg aar27:V, reg p147:p(V +), reg r629:V, reg paste4:cls, reg sym53:cls, reg base53:cls, reg guard53:L, reg r630:V, reg r631:V, reg paste5:cls, reg sym54:cls, reg base54:cls, reg guard54:L, reg r632:V, reg r633:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r634:V, reg r635:V, reg strrep:cls, reg r636:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r637:V, reg r638:V, reg aar28:*, reg aar29:V, reg length27:cls, reg r639:V, reg r640:V, reg rep_int:cls, reg r641:V, reg c298:cls, reg r642:V, reg p148:p(V +), reg aar30:*, reg aar31:V, reg p149:p(V +), reg r645:V, reg c299:cls, reg r646:V, reg p150:p(V +), reg r648:V, reg l99:*, reg c300:L, reg r650:V, reg l101:*, reg dr126:V, reg dc63:L, reg dx140:V, reg r652:V, reg dx141:V, reg r653:V, reg trimws:cls, reg as_vector1:cls, reg meta60:*, reg meta61:V, reg c301:L, reg meta63:V, reg dr128:V, reg dc64:L, reg dx142:V, reg dx143:V, reg __23:cls, reg r655:V, reg p151:p(V +), reg r657:V, reg p152:p(V +), reg r659:V, reg grepl4:cls, reg auth:*, reg auth1:V, reg p153:p(V +), reg r661:V, reg c302:L, reg l102:*, reg c303:L, reg r663:L, reg l104:*, reg dr130:V, reg dc65:L, reg dx144:V, reg r665:L, reg dx145:V, reg r666:V, reg grepl5:cls, reg auth2:*, reg auth3:V, reg p154:p(V +), reg r669:V, reg c304:L, reg auth4:*, reg auth5:V, reg l105:*, reg c305:L, reg auth7:V, reg l107:*, reg dr132:V, reg dc66:L, reg dx146:V, reg auth9:V, reg dx147:V, reg r670:V, reg trimws1:cls, reg as_vector2:cls, reg meta64:*, reg meta65:V, reg c306:L, reg meta67:V, reg dr134:V, reg dc67:L, reg dx148:V, reg dx149:V, reg __24:cls, reg r671:V, reg p155:p(V +), reg r673:V, reg p156:p(V +), reg r675:V, reg gsub5:cls, reg title:*, reg title1:V, reg p157:p(V +), reg r677:V, reg meta68:*, reg meta69:V, reg c307:L, reg meta71:V, reg dr136:V, reg dc68:L, reg dx150:V, reg dx151:V, reg __25:cls, reg r678:V, reg tolower:cls, reg title2:*, reg title3:V, reg p158:p(V +), reg r680:V, reg tolower1:cls, reg package:*, reg package1:V, reg p159:p(V +), reg r682:V, reg r683:V, reg c308:L, reg l108:*, reg c309:L, reg r685:L, reg l110:*, reg dr138:V, reg dc69:L, reg dx152:V, reg r687:L, reg dx153:V, reg r688:V, reg grepl6:cls, reg paste6:cls, reg gsub6:cls, reg package2:*, reg package3:V, reg p160:p(V +), reg r691:V, reg p161:p(V +), reg r693:V, reg p162:p(V +), reg title4:*, reg title5:V, reg p163:p(V +), reg r696:V, reg c310:L, reg l111:*, reg c311:L, reg r698:L, reg l113:*, reg dr140:V, reg dc70:L, reg dx154:V, reg r700:L, reg dx155:V, reg r701:V, reg meta72:*, reg meta73:V, reg c312:L, reg meta75:V, reg dr142:V, reg dc71:L, reg dx156:V, reg dx157:V, reg __26:cls, reg r703:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r704:V, reg r705:V, reg language6:*, reg language7:V, reg is_na6:cls, reg r706:V, reg c313:L, reg c314:V, reg language8:*, reg language9:V, reg r707:V, reg c316:L, reg c317:V, reg c319:L, reg c320:V, reg startsWith1:cls, reg language10:*, reg language11:V, reg p164:p(V +), reg r709:V, reg c322:L, reg c323:V, reg c325:L, reg toTitleCase:cls, reg title6:*, reg title7:V, reg p165:p(V +), reg r711:V, reg gregexpr:cls, reg p166:*, reg p167:V, reg p168:p(V +), reg title8:*, reg title9:V, reg p169:p(V +), reg r714:V, reg regmatches:cls, reg title10:*, reg title11:V, reg p170:p(V +), reg m:*, reg m1:V, reg p171:p(V +), reg r717:V, reg l114:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p172:p(V +), reg r719:V, reg title12:*, reg title13:V, reg title14:*, reg title15:V, reg r720:V, reg c326:L, reg sym58:cls, reg base58:cls, reg guard58:L, reg r721:V, reg r722:V, reg title16:*, reg title17:V, reg title18:*, reg title19:V, reg c327:cls, reg r723:V, reg l115:*, reg c328:L, reg r725:V, reg l117:*, reg dr144:V, reg dc72:L, reg dx158:V, reg r727:V, reg dx159:V, reg r728:V, reg r729:V, reg trimws2:cls, reg as_vector3:cls, reg meta76:*, reg meta77:V, reg c329:L, reg meta79:V, reg dr146:V, reg dc73:L, reg dx160:V, reg dx161:V, reg __27:cls, reg r730:V, reg p173:p(V +), reg r732:V, reg p174:p(V +), reg r734:V, reg gsub7:cls, reg descr:*, reg descr1:V, reg p175:p(V +), reg r736:V, reg meta80:*, reg meta81:V, reg c330:L, reg meta83:V, reg dr148:V, reg dc74:L, reg dx162:V, reg dx163:V, reg __28:cls, reg r737:V, reg grepl7:cls, reg paste7:cls, reg package4:*, reg package5:V, reg p176:p(V +), reg r739:V, reg p177:p(V +), reg descr2:*, reg descr3:V, reg p178:p(V +), reg r742:V, reg c331:L, reg l118:*, reg c332:L, reg r744:L, reg l120:*, reg dr150:V, reg dc75:L, reg dx164:V, reg r746:L, reg dx165:V, reg r747:V, reg grepl8:cls, reg descr4:*, reg descr5:V, reg p179:p(V +), reg r750:V, reg c333:L, reg l121:*, reg c334:L, reg r752:L, reg l123:*, reg dr152:V, reg dc76:L, reg dx166:V, reg r754:L, reg dx167:V, reg r755:V, reg isTRUE:cls, reg out4:*, reg out5:V, reg c335:L, reg out7:V, reg dr154:V, reg dc77:L, reg dx168:V, reg dx169:V, reg r757:V, reg p180:p(V +), reg r759:V, reg r760:V, reg c336:L, reg c338:V, reg grepl9:cls, reg descr6:*, reg descr7:V, reg p181:p(V +), reg r762:V, reg r763:V, reg c339:L, reg c340:V, reg c342:L, reg l124:*, reg c343:L, reg r765:L, reg l126:*, reg dr156:V, reg dc78:L, reg dx170:V, reg r767:L, reg dx171:V, reg r768:V, reg strwrap:cls, reg descr8:*, reg descr9:V, reg p182:p(V +), reg r771:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r772:V, reg r773:V, reg grepl10:cls, reg descr10:*, reg descr11:V, reg p183:p(V +), reg r775:V, reg any3:cls, reg r776:V, reg c344:L, reg descr12:*, reg descr13:V, reg c345:L, reg descr15:V, reg dr158:V, reg dc79:L, reg dx172:V, reg dx173:V, reg ind2:*, reg ind3:V, reg __29:cls, reg r777:V, reg l127:*, reg c346:L, reg dx175:V, reg l129:*, reg dr160:V, reg dc80:L, reg dx177:V, reg dx178:V, reg dx179:V, reg r778:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r779:V, reg r780:V, reg grepl11:cls, reg paste8:cls, reg sym61:cls, reg base61:cls, reg guard61:L, reg r781:V, reg r782:V, reg c347:cls, reg r783:V, reg p184:p(V +), reg r785:V, reg p185:p(V +), reg descr16:*, reg descr17:V, reg p186:p(V +), reg r788:V, reg any4:cls, reg r789:V, reg c348:L, reg descr18:*, reg descr19:V, reg c349:L, reg descr21:V, reg dr162:V, reg dc81:L, reg dx181:V, reg dx182:V, reg ind4:*, reg ind5:V, reg __30:cls, reg r790:V, reg l130:*, reg c350:L, reg dx184:V, reg l132:*, reg dr164:V, reg dc82:L, reg dx186:V, reg dx187:V, reg dx188:V, reg r791:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r792:V, reg r793:V, reg grepl12:cls, reg descr22:*, reg descr23:V, reg p187:p(V +), reg r795:V, reg any5:cls, reg r796:V, reg c351:L, reg descr24:*, reg descr25:V, reg c352:L, reg descr27:V, reg dr166:V, reg dc83:L, reg dx190:V, reg dx191:V, reg ind6:*, reg ind7:V, reg __31:cls, reg r797:V, reg l133:*, reg c353:L, reg dx193:V, reg l135:*, reg dr168:V, reg dc84:L, reg dx195:V, reg dx196:V, reg dx197:V, reg r798:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r799:V, reg r800:V, reg grepl13:cls, reg paste9:cls, reg sym64:cls, reg base64:cls, reg guard64:L, reg r801:V, reg r802:V, reg c354:cls, reg r803:V, reg p188:p(V +), reg r805:V, reg p189:p(V +), reg descr28:*, reg descr29:V, reg p190:p(V +), reg r808:V, reg any6:cls, reg r809:V, reg c355:L, reg descr30:*, reg descr31:V, reg c356:L, reg descr33:V, reg dr170:V, reg dc85:L, reg dx198:V, reg dx199:V, reg ind8:*, reg ind9:V, reg __32:cls, reg r810:V, reg l136:*, reg c357:L, reg dx201:V, reg l138:*, reg dr172:V, reg dc86:L, reg dx203:V, reg dx204:V, reg dx205:V, reg r811:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r812:V, reg r813:V, reg meta84:*, reg meta85:V, reg c358:L, reg meta87:V, reg dr174:V, reg dc87:L, reg dx207:V, reg dx208:V, reg __33:cls, reg r814:V, reg is_na7:cls, reg r815:V, reg r816:V, reg c359:L, reg c361:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r817:V, reg c364:L, reg r818:V, reg _bad_DESCRIPTION_URL_field_parts:cls, reg v:*, reg v1:V, reg p191:p(V +), reg r820:V, reg length28:cls, reg r821:V, reg c365:L, reg c366:V, reg c368:L, reg z:*, reg z1:V, reg l139:*, reg c369:L, reg z3:V, reg l141:*, reg dr176:V, reg dc88:L, reg dx209:V, reg z5:V, reg dx210:V, reg r822:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r823:V, reg r824:V, reg meta88:*, reg meta89:V, reg c370:L, reg meta91:V, reg dr178:V, reg dc89:L, reg dx211:V, reg dx212:V, reg __34:cls, reg r825:V, reg is_na8:cls, reg r826:V, reg r827:V, reg c371:L, reg parse_URI_reference:cls, reg v2:*, reg v3:V, reg p192:p(V +), reg r829:V, reg endsWith:cls, reg tolower2:cls, reg z7:*, reg z8:V, reg c372:L, reg z10:V, reg dr180:V, reg dc90:L, reg dx213:V, reg dx214:V, reg r830:V, reg p193:p(V +), reg r832:V, reg p194:p(V +), reg r834:V, reg c373:L, reg c374:V, reg endsWith1:cls, reg tolower3:cls, reg z11:*, reg z12:V, reg c376:L, reg z14:V, reg dr182:V, reg dc91:L, reg dx215:V, reg dx216:V, reg r835:V, reg p195:p(V +), reg r837:V, reg p196:p(V +), reg r839:V, reg c377:L, reg c378:V, reg c380:L, reg c382:V, reg basename1:cls, reg z15:*, reg z16:V, reg c383:L, reg z18:V, reg dr184:V, reg dc92:L, reg dx217:V, reg dx218:V, reg r840:V, reg p197:p(V +), reg r842:V, reg r843:V, reg c384:L, reg c385:V, reg c387:L, reg sprintf:cls, reg sub2:cls, reg v4:*, reg v5:V, reg p198:p(V +), reg r845:V, reg p199:p(V +), reg r847:V, reg paste10:cls, reg sym68:cls, reg base68:cls, reg guard68:L, reg r848:V, reg r849:V, reg sprintf1:cls, reg v6:*, reg v7:V, reg p200:p(V +), reg r851:V, reg sprintf2:cls, reg w:*, reg w1:V, reg p201:p(V +), reg r853:V, reg c388:cls, reg r854:V, reg p202:p(V +), reg r856:V, reg l142:*, reg c389:L, reg r858:V, reg l144:*, reg dr186:V, reg dc93:L, reg dx219:V, reg r860:V, reg dx220:V, reg r861:V, reg r862:V, reg config_val_to_logical3:cls, reg Sys_getenv3:cls, reg r864:V, reg p203:p(V +), reg r866:V, reg trimws3:cls, reg as_vector4:cls, reg meta92:*, reg meta93:V, reg c390:L, reg meta95:V, reg dr188:V, reg dc94:L, reg dx221:V, reg dx222:V, reg __35:cls, reg r867:V, reg p204:p(V +), reg r869:V, reg p205:p(V +), reg r871:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r872:V, reg r873:V, reg date:*, reg date1:V, reg is_na9:cls, reg r874:V, reg r875:V, reg c391:L, reg strptime:cls, reg date2:*, reg date3:V, reg p206:p(V +), reg r877:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r878:V, reg r879:V, reg dd:*, reg dd1:V, reg is_na10:cls, reg r880:V, reg c392:L, reg l145:*, reg c393:L, reg r882:L, reg l147:*, reg dr190:V, reg dc95:L, reg dx223:V, reg r884:L, reg dx224:V, reg r885:V, reg r886:V, reg skip_dates:*, reg skip_dates1:V, reg r887:V, reg c394:L, reg c396:V, reg as_Date:cls, reg dd2:*, reg dd3:V, reg p207:p(V +), reg r889:V, reg Sys_Date1:cls, reg r890:V, reg r891:V, reg r892:V, reg c397:L, reg c398:V, reg c400:L, reg l148:*, reg c401:L, reg r894:L, reg l150:*, reg dr192:V, reg dc96:L, reg dx225:V, reg r896:L, reg dx226:V, reg r897:V, reg trimws4:cls, reg as_vector5:cls, reg meta96:*, reg meta97:V, reg c402:L, reg meta99:V, reg dr194:V, reg dc97:L, reg dx227:V, reg dx228:V, reg __36:cls, reg r899:V, reg p208:p(V +), reg r901:V, reg p209:p(V +), reg r903:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r904:V, reg r905:V, reg ptime:*, reg ptime1:V, reg is_na11:cls, reg r906:V, reg c403:L, reg l151:*, reg c404:L, reg r908:S, reg l153:*, reg dr196:V, reg dc98:L, reg dx229:V, reg r910:S, reg dx230:V, reg r911:V, reg strptime1:cls, reg ptime2:*, reg ptime3:V, reg p210:p(V +), reg r914:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r915:V, reg r916:V, reg ts:*, reg ts1:V, reg is_na12:cls, reg r917:V, reg c405:L, reg l154:*, reg c406:L, reg r919:S, reg l156:*, reg dr198:V, reg dc99:L, reg dx231:V, reg r921:S, reg dx232:V, reg r922:V, reg skip_dates2:*, reg skip_dates3:V, reg r923:V, reg c407:L, reg c409:V, reg as_Date1:cls, reg ts2:*, reg ts3:V, reg p211:p(V +), reg r925:V, reg Sys_Date2:cls, reg r926:V, reg r927:V, reg r928:V, reg c410:L, reg c411:V, reg c413:L, reg l157:*, reg c414:L, reg r930:S, reg l159:*, reg dr200:V, reg dc100:L, reg dx233:V, reg r932:S, reg dx234:V, reg r933:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r934:V, reg r935:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r936:V, reg r937:V, reg tolower4:cls, reg meta100:*, reg meta101:V, reg c415:L, reg meta103:V, reg dr202:V, reg dc101:L, reg dx235:V, reg dx236:V, reg __37:cls, reg r938:V, reg p212:p(V +), reg r940:V, reg is_na13:cls, reg r941:V, reg r942:V, reg c416:L, reg c418:V, reg startsWith2:cls, reg x1:*, reg x2:V, reg p213:p(V +), reg r944:V, reg c419:L, reg c420:V, reg c422:L, reg x3:*, reg x4:V, reg x5:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r945:V, reg r946:V, reg meta104:*, reg meta105:V, reg c423:L, reg meta107:V, reg dr204:V, reg dc102:L, reg dx237:V, reg dx238:V, reg __38:cls, reg r947:V, reg is_na14:cls, reg r948:V, reg r949:V, reg c424:L, reg c426:V, reg x6:*, reg x7:V, reg r950:V, reg c427:L, reg c428:V, reg c430:L, reg x8:*, reg x9:V, reg x10:V, reg sym76:cls, reg base76:cls, reg guard76:L, reg r951:V, reg r952:V, reg meta108:*, reg meta109:V, reg c431:L, reg meta111:V, reg dr206:V, reg dc103:L, reg dx239:V, reg dx240:V, reg __39:cls, reg r953:V, reg is_na15:cls, reg r954:V, reg r955:V, reg c432:L, reg c434:V, reg startsWith3:cls, reg x11:*, reg x12:V, reg p214:p(V +), reg r957:V, reg c435:L, reg c436:L, reg c437:V, reg startsWith4:cls, reg x13:*, reg x14:V, reg p215:p(V +), reg r959:V, reg c440:L, reg c441:V, reg c444:L, reg c445:V, reg c447:L, reg x15:*, reg x16:V, reg x17:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r960:V, reg r961:V, reg tolower5:cls, reg meta112:*, reg meta113:V, reg c448:L, reg meta115:V, reg dr208:V, reg dc104:L, reg dx241:V, reg dx242:V, reg __40:cls, reg r962:V, reg p216:p(V +), reg r964:V, reg is_na16:cls, reg r965:V, reg r966:V, reg c449:L, reg c451:V, reg startsWith5:cls, reg x18:*, reg x19:V, reg p217:p(V +), reg r968:V, reg c452:L, reg c453:L, reg c454:V, reg startsWith6:cls, reg x20:*, reg x21:V, reg p218:p(V +), reg r970:V, reg c457:L, reg c458:V, reg c461:L, reg c462:V, reg c464:L, reg x22:*, reg x23:V, reg x24:V, reg c465:cls, reg r971:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r972:V, reg r973:V, reg placeholders:*, reg placeholders1:V, reg length29:cls, reg r974:V, reg c466:L, reg placeholders2:*, reg placeholders3:V, reg l160:*, reg c467:L, reg placeholders5:V, reg l162:*, reg dr210:V, reg dc105:L, reg dx243:V, reg placeholders7:V, reg dx244:V, reg r975:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r976:V, reg r977:V, reg meta116:*, reg meta117:V, reg c468:L, reg meta119:V, reg dr212:V, reg dc106:L, reg dx245:V, reg dx246:V, reg __41:cls, reg r978:V, reg is_na17:cls, reg r979:V, reg r980:V, reg c469:L, reg c471:V, reg enc:*, reg enc1:V, reg r981:V, reg c472:L, reg c473:V, reg c475:L, reg enc2:*, reg enc3:V, reg l163:*, reg c476:L, reg enc5:V, reg l165:*, reg dr214:V, reg dc107:L, reg dx247:V, reg enc7:V, reg dx248:V, reg r982:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r983:V, reg r984:V, reg meta120:*, reg meta121:V, reg c477:L, reg meta123:V, reg dr216:V, reg dc108:L, reg dx249:V, reg dx250:V, reg __42:cls, reg r985:V, reg is_na18:cls, reg r986:V, reg c478:L, reg r987:cls, reg sym81:cls, reg base81:cls, reg guard81:L, reg r988:V, reg r989:V, reg file_path14:cls, reg dir37:*, reg dir38:V, reg p219:p(V +), reg r991:V, reg file_path15:cls, reg dir39:*, reg dir40:V, reg p220:p(V +), reg r993:V, reg c479:cls, reg r994:V, reg code_files:*, reg code_files1:V, reg c480:L, reg code_files3:V, reg dr218:V, reg dc109:L, reg dx251:V, reg dx252:V, reg file_exists5:cls, reg code_files4:*, reg code_files5:V, reg p221:p(V +), reg r996:V, reg __43:cls, reg r997:V, reg dir_exists2:cls, reg file_path16:cls, reg dir41:*, reg dir42:V, reg p222:p(V +), reg r999:V, reg p223:p(V +), reg r1001:V, reg c481:L, reg sym82:cls, reg base82:cls, reg guard82:L, reg r1002:V, reg r1003:V, reg c482:cls, reg r1004:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r1005:V, reg r1006:V, reg code_files6:*, reg code_files7:V, reg list_files_with_type:cls, reg file_path17:cls, reg dir43:*, reg dir44:V, reg p224:p(V +), reg r1008:V, reg p225:p(V +), reg OS_subdirs:*, reg OS_subdirs1:V, reg p226:p(V +), reg r1011:V, reg c483:cls, reg r1012:V, reg file_path_relative_to:cls, reg code_files8:*, reg code_files9:V, reg p227:p(V +), reg dir45:*, reg dir46:V, reg p228:p(V +), reg r1016:V, reg l166:*, reg names__1:cls, reg r1017:V, reg Filter4:cls, reg length30:*, reg length31:V, reg p229:p(V +), reg lapply4:cls, reg code_files10:*, reg code_files11:V, reg p230:p(V +), reg find_non_ASCII_lines:*, reg find_non_ASCII_lines1:V, reg p231:p(V +), reg r1021:V, reg p232:p(V +), reg r1023:V, reg sym84:cls, reg base84:cls, reg guard84:L, reg r1024:V, reg r1025:V, reg lines:*, reg lines1:V, reg length32:cls, reg r1026:V, reg c484:L, reg lines2:*, reg lines3:V, reg l167:*, reg c485:L, reg lines5:V, reg l169:*, reg dr220:V, reg dc110:L, reg dx253:V, reg lines7:V, reg dx254:V, reg r1027:V, reg lines8:V, reg file_exists6:cls, reg file_path18:cls, reg dir47:*, reg dir48:V, reg p233:p(V +), reg paste11:cls, reg basename2:cls, reg dir49:*, reg dir50:V, reg p234:p(V +), reg r1030:V, reg p235:p(V +), reg r1032:V, reg p236:p(V +), reg r1034:V, reg p237:p(V +), reg r1036:V, reg c486:L, reg parse:cls, reg fp:*, reg fp1:V, reg p238:p(V +), reg r1038:V, reg r1039:cls, reg sym85:cls, reg base85:cls, reg guard85:L, reg r1040:V, reg r1041:V, reg vapply3:cls, reg exprs:*, reg exprs1:V, reg p239:p(V +), reg tst:*, reg tst1:V, reg p240:p(V +), reg r1044:V, reg any7:cls, reg r1045:V, reg c487:L, reg basename3:cls, reg fp2:*, reg fp3:V, reg p241:p(V +), reg r1047:V, reg l170:*, reg c488:L, reg r1049:V, reg l172:*, reg dr222:V, reg dc111:L, reg dx255:V, reg r1051:V, reg dx256:V, reg r1052:V, reg r1053:V, reg sym86:cls, reg base86:cls, reg guard86:L, reg r1055:V, reg r1056:V, reg sym87:cls, reg base87:cls, reg guard87:L, reg r1057:V, reg r1058:V, reg pkgSize1:*, reg pkgSize2:V, reg as_numeric:cls, reg r1059:V, reg is_na19:cls, reg r1060:V, reg r1061:V, reg c489:L, reg c491:V, reg size:*, reg size1:V, reg sym88:cls, reg base88:cls, reg guard88:L, reg r1062:V, reg c494:L, reg size4:V, reg r1063:V, reg Sys_getenv4:cls, reg r1064:V, reg as_numeric1:cls, reg r1065:V, reg r1066:V, reg c495:L, reg c496:V, reg c498:L, reg size5:*, reg size6:V, reg l173:*, reg c499:L, reg size8:V, reg l175:*, reg dr224:V, reg dc112:L, reg dx257:V, reg size10:V, reg dx258:V, reg r1067:V, reg localOnly1:*, reg localOnly2:V, reg r1068:V, reg c500:L, reg c502:V, reg config_val_to_logical4:cls, reg Sys_getenv5:cls, reg r1069:V, reg p242:p(V +), reg r1071:V, reg r1072:V, reg c503:L, reg c504:V, reg config_val_to_logical5:cls, reg Sys_getenv6:cls, reg r1073:V, reg p243:p(V +), reg r1075:V, reg capabilities:cls, reg r1076:V, reg r1077:V, reg c506:L, reg c508:V, reg remote:*, reg remote1:V, reg c509:L, reg c510:V, reg c512:L, reg l176:*, reg c513:L, reg r1079:L, reg l178:*, reg dr226:V, reg dc113:L, reg dx259:V, reg r1081:L, reg dx260:V, reg r1082:V, reg sym89:cls, reg base89:cls, reg guard89:L, reg r1084:V, reg r1085:V, reg out8:*, reg out9:V, reg c514:L, reg out11:V, reg dr228:V, reg dc114:L, reg dx261:V, reg dx262:V, reg r1086:V, reg c515:V, reg c516:L, reg url_db_from_package_sources:cls, reg dir51:*, reg dir52:V, reg p244:p(V +), reg r1088:V, reg tryCatch4:cls, reg check_url_db:cls, reg udb:*, reg udb1:V, reg p245:p(V +), reg remote2:*, reg remote3:V, reg p246:p(V +), reg check_urls_in_parallel:*, reg check_urls_in_parallel1:V, reg p247:p(V +), reg r1092:V, reg p248:p(V +), reg identity8:*, reg identity9:V, reg p249:p(V +), reg r1095:V, reg sym90:cls, reg base90:cls, reg guard90:L, reg r1096:V, reg r1097:V, reg bad22:*, reg bad23:V, reg inherits4:cls, reg r1098:V, reg c517:L, reg bad24:*, reg bad25:V, reg l179:*, reg c518:L, reg bad27:V, reg l181:*, reg dr230:V, reg dc115:L, reg dx263:V, reg bad29:V, reg dx264:V, reg r1099:V, reg NROW1:cls, reg bad31:*, reg bad32:V, reg p250:p(V +), reg r1101:V, reg c519:L, reg sym91:cls, reg base91:cls, reg guard91:L, reg r1102:V, reg r1103:V, reg prefix:*, reg prefix1:V, reg nchar1:cls, reg r1104:V, reg substring1:cls, reg tolower6:cls, reg bad33:*, reg bad34:V, reg c520:L, reg bad36:V, reg dr232:V, reg dc116:L, reg dx265:V, reg dx266:V, reg r1105:V, reg p251:p(V +), reg r1107:V, reg p252:p(V +), reg ncp:*, reg ncp1:V, reg p253:p(V +), reg r1110:V, reg prefix2:*, reg prefix3:V, reg r1111:V, reg substring2:cls, reg bad37:*, reg bad38:V, reg c521:L, reg bad40:V, reg dr234:V, reg dc117:L, reg dx267:V, reg dx268:V, reg r1112:V, reg p254:p(V +), reg ncp2:*, reg ncp3:V, reg r1114:V, reg p255:p(V +), reg r1116:V, reg package6:*, reg package7:V, reg r1117:V, reg r1118:V, reg sym92:cls, reg base92:cls, reg guard92:L, reg r1119:V, reg r1120:V, reg ind10:*, reg ind11:V, reg any8:cls, reg r1121:V, reg c522:L, reg bad41:*, reg bad42:V, reg c523:L, reg bad44:V, reg dr236:V, reg dc118:L, reg dx269:V, reg dx270:V, reg ind12:*, reg ind13:V, reg r1122:V, reg __44:cls, reg r1123:V, reg sym93:cls, reg base93:cls, reg guard93:L, reg r1124:V, reg r1125:V, reg prefix4:*, reg prefix5:V, reg nchar2:cls, reg r1126:V, reg substring3:cls, reg tolower7:cls, reg bad45:*, reg bad46:V, reg c524:L, reg bad48:V, reg dr238:V, reg dc119:L, reg dx272:V, reg dx273:V, reg r1127:V, reg p256:p(V +), reg r1129:V, reg p257:p(V +), reg ncp4:*, reg ncp5:V, reg p258:p(V +), reg r1132:V, reg prefix6:*, reg prefix7:V, reg r1133:V, reg substring4:cls, reg bad49:*, reg bad50:V, reg c525:L, reg bad52:V, reg dr240:V, reg dc120:L, reg dx274:V, reg dx275:V, reg r1134:V, reg p259:p(V +), reg ncp6:*, reg ncp7:V, reg r1136:V, reg p260:p(V +), reg r1138:V, reg package8:*, reg package9:V, reg r1139:V, reg r1140:V, reg sym94:cls, reg base94:cls, reg guard94:L, reg r1141:V, reg r1142:V, reg ind14:*, reg ind15:V, reg any9:cls, reg r1143:V, reg c526:L, reg l182:*, reg c527:L, reg r1145:S, reg l184:*, reg dr242:V, reg dc121:L, reg dx276:V, reg r1147:S, reg dx277:V, reg ind16:*, reg ind17:V, reg sym95:cls, reg base95:cls, reg guard95:L, reg r1152:V, reg r1153:S, reg l187:*, reg r1154:S, reg ind20:V, reg r1155:V, reg c528:cls, reg r1156:V, reg ___5:cls, reg r1157:V, reg NROW2:cls, reg bad53:*, reg bad54:V, reg p261:p(V +), reg r1160:V, reg c529:L, reg bad55:*, reg bad56:V, reg l188:*, reg c530:L, reg bad58:V, reg l190:*, reg dr244:V, reg dc122:L, reg dx278:V, reg bad60:V, reg dx279:V, reg r1161:V, reg bad61:V, reg config_val_to_logical6:cls, reg Sys_getenv7:cls, reg r1162:V, reg p262:p(V +), reg r1164:V, reg c531:L, reg udb2:*, reg udb3:V, reg c532:L, reg udb5:V, reg dr246:V, reg dc123:L, reg dx280:V, reg dx281:V, reg r1165:V, reg parse_URI_reference1:cls, reg urls:*, reg urls1:V, reg p263:p(V +), reg r1167:V, reg _in_:cls, reg parts:*, reg parts1:V, reg c533:L, reg dr248:V, reg dc124:L, reg dx282:V, reg dx283:V, reg __45:cls, reg r1168:V, reg p264:p(V +), reg sym96:cls, reg base96:cls, reg guard96:L, reg r1170:V, reg r1171:V, reg c534:cls, reg r1172:V, reg p265:p(V +), reg r1174:V, reg parts4:*, reg parts5:V, reg c535:L, reg parts7:V, reg dr250:V, reg dc125:L, reg dx284:V, reg dx285:V, reg ind21:*, reg ind22:V, reg __46:cls, reg r1175:V, reg udb6:*, reg udb7:V, reg c536:L, reg udb9:V, reg dr252:V, reg dc126:L, reg dx286:V, reg dx287:V, reg ind23:*, reg ind24:V, reg __47:cls, reg r1176:V, reg sym97:cls, reg base97:cls, reg guard97:L, reg r1177:V, reg r1178:V, reg startsWith7:cls, reg fpaths0:*, reg fpaths1:V, reg p266:p(V +), reg r1180:V, reg grepl14:cls, reg parents:*, reg parents1:V, reg p267:p(V +), reg r1182:V, reg r1183:V, reg any10:cls, reg r1184:V, reg c537:L, reg sym98:cls, reg base98:cls, reg guard98:L, reg r1185:V, reg r1186:V, reg sym99:cls, reg base99:cls, reg guard99:L, reg r1187:V, reg r1188:V, reg ind25:*, reg ind26:V, reg sum:cls, reg r1189:V, reg rep_int1:cls, reg r1190:V, reg fpaths2:*, reg fpaths3:V, reg c538:L, reg fpaths5:V, reg dr254:V, reg dc127:L, reg dx288:V, reg dx289:V, reg ind27:*, reg ind28:V, reg __48:cls, reg r1191:V, reg sym100:cls, reg base100:cls, reg guard100:L, reg r1192:V, reg r1193:V, reg which1:cls, reg startsWith8:cls, reg bar:*, reg bar1:V, reg p268:p(V +), reg r1195:V, reg p269:p(V +), reg r1197:V, reg length33:cls, reg r1198:V, reg c539:L, reg dirname:cls, reg foo:*, reg foo1:V, reg c540:L, reg foo3:V, reg dr256:V, reg dc128:L, reg dx290:V, reg dx291:V, reg pos4:*, reg pos5:V, reg __49:cls, reg r1199:V, reg p270:p(V +), reg r1201:V, reg l191:*, reg c541:L, reg r1203:V, reg l193:*, reg dr258:V, reg dc129:L, reg dx292:V, reg dx293:V, reg pos6:*, reg pos7:V, reg ___6:cls, reg r1206:V, reg substring5:cls, reg bar2:*, reg bar3:V, reg c542:L, reg bar5:V, reg dr260:V, reg dc130:L, reg dx294:V, reg dx295:V, reg pos8:*, reg pos9:V, reg __50:cls, reg r1207:V, reg p271:p(V +), reg r1209:V, reg l194:*, reg c543:L, reg r1211:V, reg l196:*, reg dr262:V, reg dc131:L, reg dx296:V, reg dx297:V, reg pos10:*, reg pos11:V, reg ___7:cls, reg r1214:V, reg foo4:*, reg foo5:V, reg l197:*, reg c544:L, reg foo7:V, reg l199:*, reg dr264:V, reg dc132:L, reg dx298:V, reg foo9:V, reg dx299:V, reg ind29:*, reg ind30:V, reg ___8:cls, reg r1215:V, reg l200:*, reg c545:L, reg r1217:S, reg l202:*, reg dr266:V, reg dc133:L, reg dx300:V, reg dx301:V, reg grepl15:cls, reg fpaths6:*, reg fpaths7:V, reg p272:p(V +), reg r1221:V, reg ___9:cls, reg r1222:V, reg l203:*, reg c546:L, reg r1224:S, reg l205:*, reg dr268:V, reg dc134:L, reg dx302:V, reg dx303:V, reg fpaths8:*, reg fpaths9:V, reg r1227:V, reg startsWith9:cls, reg parents2:*, reg parents3:V, reg p273:p(V +), reg r1229:V, reg r1230:V, reg ___10:cls, reg r1231:V, reg dirname1:cls, reg parents4:*, reg parents5:V, reg p274:p(V +), reg r1233:V, reg which2:cls, reg file_exists7:cls, reg file_path19:cls, reg ifelse:cls, reg sym101:cls, reg base101:cls, reg guard101:L, reg r1234:V, reg r1235:V, reg ppaths:*, reg ppaths1:V, reg nzchar1:cls, reg r1236:V, reg p275:p(V +), reg file_path20:cls, reg dir53:*, reg dir54:V, reg p276:p(V +), reg ppaths2:*, reg ppaths3:V, reg p277:p(V +), reg r1240:V, reg p278:p(V +), reg dir55:*, reg dir56:V, reg p279:p(V +), reg r1243:V, reg p280:p(V +), reg fpaths10:*, reg fpaths11:V, reg p281:p(V +), reg r1246:V, reg p282:p(V +), reg r1248:V, reg r1249:V, reg p283:p(V +), reg r1251:V, reg sym102:cls, reg base102:cls, reg guard102:L, reg r1252:V, reg r1253:V, reg pos12:*, reg pos13:V, reg length34:cls, reg r1254:V, reg c547:L, reg cbind:cls, reg fpaths12:*, reg fpaths13:V, reg c548:L, reg fpaths15:V, reg dr270:V, reg dc135:L, reg dx304:V, reg dx305:V, reg pos14:*, reg pos15:V, reg __51:cls, reg r1255:V, reg p284:p(V +), reg parents6:*, reg parents7:V, reg c549:L, reg parents9:V, reg dr272:V, reg dc136:L, reg dx306:V, reg dx307:V, reg pos16:*, reg pos17:V, reg __52:cls, reg r1257:V, reg p285:p(V +), reg r1259:V, reg l206:*, reg c550:L, reg r1261:V, reg l208:*, reg dr274:V, reg dc137:L, reg dx308:V, reg r1263:V, reg dx309:V, reg r1264:V, reg r1265:V, reg remote4:*, reg remote5:V, reg c551:L, reg meta124:*, reg meta125:V, reg c552:L, reg meta127:V, reg dr276:V, reg dc138:L, reg dx310:V, reg dx311:V, reg __53:cls, reg r1267:V, reg _gregexec_at_pos:cls, reg pat:*, reg pat1:V, reg p286:p(V +), reg dsc:*, reg dsc1:V, reg p287:p(V +), reg gregexpr1:cls, reg pat2:*, reg pat3:V, reg p288:p(V +), reg dsc2:*, reg dsc3:V, reg p289:p(V +), reg r1272:V, reg p290:p(V +), reg r1274:V, reg sym103:cls, reg base103:cls, reg guard103:L, reg r1275:V, reg r1276:V, reg ids:*, reg ids1:V, reg length35:cls, reg r1277:V, reg c553:L, reg doi_db:cls, reg paste12:cls, reg ini:*, reg ini1:V, reg p291:p(V +), reg ids2:*, reg ids3:V, reg p292:p(V +), reg r1280:V, reg p293:p(V +), reg sym104:cls, reg base104:cls, reg guard104:L, reg r1282:V, reg r1283:V, reg sym105:cls, reg base105:cls, reg guard105:L, reg r1284:V, reg r1285:V, reg ids4:*, reg ids5:V, reg length36:cls, reg r1286:V, reg rep_int2:cls, reg r1287:V, reg p294:p(V +), reg r1289:V, reg tryCatch5:cls, reg check_doi_db:cls, reg ddb:*, reg ddb1:V, reg p295:p(V +), reg check_urls_in_parallel2:*, reg check_urls_in_parallel3:V, reg p296:p(V +), reg r1292:V, reg p297:p(V +), reg identity10:*, reg identity11:V, reg p298:p(V +), reg r1295:V, reg sym106:cls, reg base106:cls, reg guard106:L, reg r1296:V, reg r1297:V, reg bad62:*, reg bad63:V, reg inherits5:cls, reg r1298:V, reg r1299:V, reg c554:L, reg c556:V, reg sym107:cls, reg base107:cls, reg guard107:L, reg r1300:V, reg c559:L, reg r1301:V, reg bad64:*, reg bad65:V, reg length37:cls, reg r1302:V, reg c560:L, reg c561:V, reg c563:L, reg substring6:cls, reg bad66:*, reg bad67:V, reg c564:L, reg bad69:V, reg dr278:V, reg dc139:L, reg dx312:V, reg dx313:V, reg r1303:V, reg p299:p(V +), reg sym108:cls, reg base108:cls, reg guard108:L, reg r1305:V, reg r1306:V, reg ini2:*, reg ini3:V, reg nchar3:cls, reg r1307:V, reg r1308:V, reg p300:p(V +), reg r1310:V, reg l209:*, reg c565:L, reg r1312:V, reg l211:*, reg dr280:V, reg dc140:L, reg dx314:V, reg r1314:V, reg dx315:V, reg r1315:V, reg r1316:V, reg _ORCID_iD_db_from_package_sources:cls, reg dir57:*, reg dir58:V, reg p301:p(V +), reg r1319:V, reg NROW3:cls, reg odb:*, reg odb1:V, reg p302:p(V +), reg r1321:V, reg c566:L, reg grepl16:cls, reg _ORCID_iD_variants_regexp:*, reg _ORCID_iD_variants_regexp1:V, reg p303:p(V +), reg odb2:*, reg odb3:V, reg c567:L, reg dr282:V, reg dc141:L, reg dx316:V, reg dx317:V, reg __54:cls, reg r1323:V, reg p304:p(V +), reg r1325:V, reg odb6:*, reg odb7:V, reg c568:L, reg odb9:V, reg dr284:V, reg dc142:L, reg dx318:V, reg dx319:V, reg ind31:*, reg ind32:V, reg __55:cls, reg r1326:V, reg NROW4:cls, reg odb10:*, reg odb11:V, reg p305:p(V +), reg r1328:V, reg c569:L, reg c571:V, reg requireNamespace:cls, reg r1329:V, reg c572:L, reg c573:V, reg c575:L, reg _ORCID_iD_canonicalize:cls, reg odb12:*, reg odb13:V, reg c576:L, reg dr286:V, reg dc143:L, reg dx321:V, reg dx322:V, reg __56:cls, reg r1330:V, reg p306:p(V +), reg r1332:V, reg which3:cls, reg _ORCID_iD_is_alive:cls, reg ids6:*, reg ids7:V, reg p307:p(V +), reg r1334:V, reg r1335:V, reg p308:p(V +), reg r1337:V, reg sym109:cls, reg base109:cls, reg guard109:L, reg r1338:V, reg r1339:V, reg pos18:*, reg pos19:V, reg length38:cls, reg r1340:V, reg c577:L, reg odb16:*, reg odb17:V, reg c578:L, reg odb19:V, reg dr288:V, reg dc144:L, reg dx323:V, reg dx324:V, reg pos20:*, reg pos21:V, reg __57:cls, reg r1341:V, reg l212:*, reg c579:L, reg dx326:V, reg l214:*, reg dr290:V, reg dc145:L, reg dx328:V, reg dx329:V, reg dx330:V, reg r1342:V, reg dx331:V, reg dx332:V, reg dx333:V, reg localOnly3:*, reg localOnly4:V, reg c580:L, reg out12:*, reg out13:V, reg _get_standard_repository_URLs:cls, reg r1345:V, reg foss2:*, reg foss3:V, reg c581:L, reg __58:cls, reg r1346:V, reg r1347:cls, reg __59:cls, reg r1348:V, reg r1349:cls, reg urls2:*, reg urls3:V, reg p309:p(V +), reg r1351:V, reg p310:p(V +), reg sym110:cls, reg base110:cls, reg guard110:L, reg r1353:V, reg r1354:V, reg c582:cls, reg r1355:V, reg p311:p(V +), reg r1357:V, reg meta128:*, reg meta129:V, reg c583:L, reg meta131:V, reg dr292:V, reg dc146:L, reg dx334:V, reg dx335:V, reg __60:cls, reg r1358:V, reg sym111:cls, reg base111:cls, reg guard111:L, reg r1359:V, reg r1360:V, reg c584:cls, reg r1361:V, reg _in_1:cls, reg package10:*, reg package11:V, reg p312:p(V +), reg rownames:cls, reg available:*, reg available1:V, reg p313:p(V +), reg r1364:V, reg p314:p(V +), reg r1366:V, reg c585:L, reg meta132:*, reg meta133:V, reg c586:L, reg meta135:V, reg dr294:V, reg dc147:L, reg dx336:V, reg dx337:V, reg depends:*, reg depends1:V, reg __61:cls, reg r1367:V, reg l215:*, reg c587:L, reg dx339:V, reg l217:*, reg dr296:V, reg dc148:L, reg dx341:V, reg dx342:V, reg dx343:V, reg package12:*, reg package13:V, reg depends2:*, reg depends3:V, reg ___11:cls, reg r1368:V, reg rbind:cls, reg meta136:*, reg meta137:V, reg c588:L, reg meta139:V, reg dr298:V, reg dc149:L, reg dx345:V, reg dx346:V, reg colnames:cls, reg available2:*, reg available3:V, reg p315:p(V +), reg r1370:V, reg __62:cls, reg r1371:V, reg p316:p(V +), reg r1373:V, reg package14:*, reg package15:V, reg l218:*, reg rownames__:cls, reg r1374:V, reg rbind1:cls, reg available4:*, reg available5:V, reg p317:p(V +), reg entry:*, reg entry1:V, reg p318:p(V +), reg r1377:V, reg analyze_licenses:cls, reg available6:*, reg available7:V, reg c589:L, reg dr300:V, reg dc150:L, reg dx347:V, reg dx348:V, reg __63:cls, reg r1378:V, reg p319:p(V +), reg available10:*, reg available11:V, reg p320:p(V +), reg r1381:V, reg unlist1:cls, reg package_dependencies:cls, reg package16:*, reg package17:V, reg p321:p(V +), reg available12:*, reg available13:V, reg p322:p(V +), reg r1384:V, reg p323:p(V +), reg r1386:V, reg ldb:*, reg ldb1:V, reg c590:L, reg ldb3:V, reg dr302:V, reg dc151:L, reg dx349:V, reg dx350:V, reg r1387:V, reg rownames1:cls, reg available14:*, reg available15:V, reg p324:p(V +), reg r1389:V, reg c591:L, reg r1391:V, reg dr304:V, reg dc152:L, reg dx351:V, reg dx352:V, reg sym112:cls, reg base112:cls, reg guard112:L, reg r1394:V, reg r1395:V, reg r1396:V, reg ru:*, reg ru1:V, reg is_na20:cls, reg r1397:V, reg r1398:V, reg ru2:*, reg ru3:V, reg r1399:V, reg __64:cls, reg r1400:V, reg rownames2:cls, reg available16:*, reg available17:V, reg p325:p(V +), reg r1402:V, reg c592:L, reg r1404:V, reg dr306:V, reg dc153:L, reg dx353:V, reg dx354:V, reg sym113:cls, reg base113:cls, reg guard113:L, reg r1407:V, reg r1408:V, reg r1409:V, reg ru4:*, reg ru5:V, reg is_na21:cls, reg r1410:V, reg __65:cls, reg r1411:V, reg intersect1:cls, reg depends4:*, reg depends5:V, reg p326:p(V +), reg pnames_restricts_use_TRUE:*, reg pnames_restricts_use_TRUE1:V, reg p327:p(V +), reg r1414:V, reg sym114:cls, reg base114:cls, reg guard114:L, reg r1415:V, reg r1416:V, reg bad70:*, reg bad71:V, reg length39:cls, reg r1417:V, reg c593:L, reg bad72:*, reg bad73:V, reg l219:*, reg c594:L, reg bad75:V, reg l221:*, reg dr308:V, reg dc154:L, reg dx355:V, reg bad77:V, reg dx356:V, reg r1418:V, reg intersect2:cls, reg depends6:*, reg depends7:V, reg p328:p(V +), reg pnames_restricts_use_NA:*, reg pnames_restricts_use_NA1:V, reg p329:p(V +), reg r1421:V, reg sym115:cls, reg base115:cls, reg guard115:L, reg r1422:V, reg r1423:V, reg bad79:*, reg bad80:V, reg length40:cls, reg r1424:V, reg c595:L, reg bad81:*, reg bad82:V, reg l222:*, reg c596:L, reg bad84:V, reg l224:*, reg dr310:V, reg dc155:L, reg dx357:V, reg bad86:V, reg dx358:V, reg r1425:V, reg parse_description_field:cls, reg meta140:*, reg meta141:V, reg p330:p(V +), reg r1427:V, reg bv:*, reg bv1:V, reg r1428:V, reg c597:L, reg l225:*, reg c598:L, reg r1430:L, reg l227:*, reg dr312:V, reg dc156:L, reg dx359:V, reg r1432:L, reg dx360:V, reg r1433:V, reg r1434:V, reg r1436:cls, reg tryCatch6:cls, reg lapply5:cls, reg urls4:*, reg urls5:V, reg p331:p(V +), reg _repository_db:*, reg _repository_db1:V, reg p332:p(V +), reg r1439:V, reg p333:p(V +), reg identity12:*, reg identity13:V, reg p334:p(V +), reg r1442:V, reg sym116:cls, reg base116:cls, reg guard116:L, reg r1443:V, reg r1444:V, reg db:*, reg db1:V, reg inherits6:cls, reg r1445:V, reg c599:L, reg message:cls, reg r1446:V, reg out14:*, reg out15:V, reg do_call:cls, reg rbind2:*, reg rbind3:V, reg p335:p(V +), reg db2:*, reg db3:V, reg p336:p(V +), reg r1451:V, reg urls6:*, reg urls7:V, reg c600:L, reg urls9:V, reg dr314:V, reg dc157:L, reg dx361:V, reg dx362:V, reg __66:cls, reg r1452:V, reg url:cls, reg sprintf3:cls, reg CRAN:*, reg CRAN1:V, reg p337:p(V +), reg r1454:V, reg p338:p(V +), reg r1456:V, reg read_dcf:cls, reg con:*, reg con1:V, reg p339:p(V +), reg r1458:V, reg close:cls, reg con2:*, reg con3:V, reg p340:p(V +), reg r1460:V, reg odb20:*, reg odb21:V, reg c601:L, reg odb23:V, reg dr316:V, reg dc158:L, reg dx363:V, reg dx364:V, reg odb24:*, reg odb25:V, reg c602:L, reg odb28:V, reg dr318:V, reg dc159:L, reg dx365:V, reg odb31:V, reg dx366:V, reg __67:cls, reg r1461:V, reg meta142:*, reg meta143:V, reg c603:L, reg odb33:V, reg dx368:V, reg meta145:V, reg dr320:V, reg dc160:L, reg dx370:V, reg dx371:V, reg dx372:V, reg __68:cls, reg r1462:V, reg r1463:V, reg __69:cls, reg r1464:V, reg entry2:*, reg entry3:V, reg c604:L, reg entry5:V, reg dr322:V, reg dc161:L, reg dx373:V, reg dx374:V, reg sym117:cls, reg base117:cls, reg guard117:L, reg r1465:V, reg entry8:V, reg r1466:V, reg entry9:*, reg entry10:V, reg is_na22:cls, reg r1467:V, reg r1468:V, reg _notin_2:cls, reg sym118:cls, reg base118:cls, reg guard118:L, reg r1469:V, reg r1470:V, reg entry11:*, reg entry12:V, reg names5:cls, reg r1471:V, reg p341:p(V +), reg sym119:cls, reg base119:cls, reg guard119:L, reg r1473:V, reg r1474:V, reg c605:cls, reg r1475:V, reg p342:p(V +), reg r1477:V, reg r1478:V, reg __70:cls, reg r1479:V, reg sym120:cls, reg base120:cls, reg guard120:L, reg r1480:V, reg r1481:V, reg entry13:*, reg entry14:V, reg length41:cls, reg r1482:V, reg c606:L, reg sym121:cls, reg base121:cls, reg guard121:L, reg r1483:V, reg r1484:V, reg lic_info12:*, reg lic_info13:V, reg c607:L, reg lic_info15:V, reg dr324:V, reg dc162:L, reg dx375:V, reg dx376:V, reg r1485:V, reg is_na23:cls, reg r1486:V, reg r1487:V, reg c608:L, reg c610:V, reg sym122:cls, reg base122:cls, reg guard122:L, reg r1488:V, reg c613:L, reg r1489:V, reg entry15:*, reg entry16:V, reg c614:L, reg c616:L, reg entry18:V, reg dr326:V, reg dc163:L, reg dx377:V, reg c618:L, reg dx378:V, reg __71:cls, reg r1490:V, reg is_na24:cls, reg r1491:V, reg r1492:V, reg c619:L, reg c620:V, reg c622:L, reg c624:V, reg lif:*, reg lif1:V, reg r1493:V, reg iif:*, reg iif1:V, reg r1494:V, reg c625:L, reg c626:V, reg c628:L, reg lif2:*, reg lif3:V, reg l228:*, reg c629:L, reg lif5:V, reg l230:*, reg dr328:V, reg dc164:L, reg dx379:V, reg lif7:V, reg dx380:V, reg r1495:V, reg sym123:cls, reg base123:cls, reg guard123:L, reg r1496:V, reg r1497:V, reg lic_info16:*, reg lic_info17:V, reg c630:L, reg lic_info19:V, reg dr330:V, reg dc165:L, reg dx381:V, reg dx382:V, reg r1498:V, reg is_na25:cls, reg r1499:V, reg r1500:V, reg c631:L, reg c633:V, reg sym124:cls, reg base124:cls, reg guard124:L, reg r1501:V, reg c636:L, reg r1502:V, reg entry19:*, reg entry20:V, reg c637:L, reg c639:L, reg entry22:V, reg dr332:V, reg dc166:L, reg dx383:V, reg c641:L, reg dx384:V, reg __72:cls, reg r1503:V, reg is_na26:cls, reg r1504:V, reg r1505:V, reg c642:L, reg c643:V, reg c645:L, reg c647:V, reg lru:*, reg lru1:V, reg r1506:V, reg iru:*, reg iru1:V, reg r1507:V, reg c648:L, reg c649:V, reg c651:L, reg lru2:*, reg lru3:V, reg l231:*, reg c652:L, reg lru5:V, reg l233:*, reg dr334:V, reg dc167:L, reg dx385:V, reg lru7:V, reg dx386:V, reg r1508:V, reg r1509:cls, reg sym125:cls, reg base125:cls, reg guard125:L, reg r1510:V, reg r1511:V, reg entry23:*, reg entry24:V, reg names6:cls, reg r1512:V, reg fmt:cls, reg sprintf4:cls, reg nms23:*, reg nms24:V, reg p343:p(V +), reg entry25:*, reg entry26:V, reg p344:p(V +), reg r1515:V, reg p345:p(V +), reg r1517:V, reg nms25:*, reg nms26:V, reg l234:*, reg names__2:cls, reg r1518:V, reg entry27:*, reg entry28:V, reg l235:*, reg c653:L, reg entry30:V, reg l237:*, reg dr336:V, reg dc168:L, reg dx387:V, reg dx388:V, reg r1519:V, reg intersect3:cls, reg sym126:cls, reg base126:cls, reg guard126:L, reg r1520:V, reg r1521:V, reg meta146:*, reg meta147:V, reg names7:cls, reg r1522:V, reg p346:p(V +), reg nms27:*, reg nms28:V, reg p347:p(V +), reg r1525:V, reg sym127:cls, reg base127:cls, reg guard127:L, reg r1526:V, reg r1527:V, reg fields:*, reg fields1:V, reg length42:cls, reg r1528:V, reg c654:L, reg unlist2:cls, reg Map:cls, reg identical:*, reg identical1:V, reg p348:p(V +), reg fmt1:cls, reg sprintf5:cls, reg fields2:*, reg fields3:V, reg p349:p(V +), reg meta148:*, reg meta149:V, reg c655:L, reg meta151:V, reg dr338:V, reg dc169:L, reg dx389:V, reg dx390:V, reg fields4:*, reg fields5:V, reg __73:cls, reg r1531:V, reg p350:p(V +), reg r1533:V, reg p351:p(V +), reg r1535:V, reg p352:p(V +), reg entry33:*, reg entry34:V, reg c656:L, reg entry36:V, reg dr340:V, reg dc170:L, reg dx391:V, reg dx392:V, reg fields6:*, reg fields7:V, reg __74:cls, reg r1537:V, reg p353:p(V +), reg r1539:V, reg p354:p(V +), reg r1541:V, reg r1542:V, reg sym128:cls, reg base128:cls, reg guard128:L, reg r1543:V, reg r1544:V, reg ind33:*, reg ind34:V, reg any11:cls, reg r1545:V, reg c657:L, reg fields8:*, reg fields9:V, reg c658:L, reg fields11:V, reg dr342:V, reg dc171:L, reg dx393:V, reg dx394:V, reg ind35:*, reg ind36:V, reg __75:cls, reg r1546:V, reg l238:*, reg c659:L, reg dx396:V, reg l240:*, reg dr344:V, reg dc172:L, reg dx398:V, reg dx399:V, reg dx400:V, reg r1547:V, reg dx401:V, reg dx402:V, reg CRAN_archive_db:cls, reg r1548:V, reg sym129:cls, reg base129:cls, reg guard129:L, reg r1549:V, reg r1550:V, reg archive_db:*, reg archive_db1:V, reg names8:cls, reg r1551:V, reg meta152:*, reg meta153:V, reg c660:L, reg meta155:V, reg dr346:V, reg dc173:L, reg dx404:V, reg dx405:V, reg __76:cls, reg r1552:V, reg db4:*, reg db5:V, reg c661:L, reg dr348:V, reg dc174:L, reg dx406:V, reg dx407:V, reg __77:cls, reg r1553:V, reg _notin_3:cls, reg package18:*, reg package19:V, reg p355:p(V +), reg packages:*, reg packages1:V, reg p356:p(V +), reg r1556:V, reg c662:L, reg l241:*, reg c663:L, reg r1558:L, reg l243:*, reg dr350:V, reg dc175:L, reg dx408:V, reg r1560:L, reg dx409:V, reg r1561:V, reg character2:cls, reg r1563:V, reg which4:cls, reg tolower8:cls, reg packages2:*, reg packages3:V, reg p357:p(V +), reg r1565:V, reg tolower9:cls, reg package20:*, reg package21:V, reg p358:p(V +), reg r1567:V, reg r1568:V, reg packages4:*, reg packages5:V, reg package22:*, reg package23:V, reg r1569:V, reg r1570:V, reg p359:p(V +), reg r1572:V, reg sym130:cls, reg base130:cls, reg guard130:L, reg r1573:V, reg r1574:V, reg pos22:*, reg pos23:V, reg length43:cls, reg r1575:V, reg c664:L, reg sprintf6:cls, reg packages6:*, reg packages7:V, reg c665:L, reg packages9:V, reg dr352:V, reg dc176:L, reg dx410:V, reg dx411:V, reg pos24:*, reg pos25:V, reg __78:cls, reg r1576:V, reg p360:p(V +), reg db8:*, reg db9:V, reg c666:L, reg db11:V, reg dr354:V, reg dc177:L, reg dx412:V, reg dx413:V, reg pos26:*, reg pos27:V, reg __79:cls, reg r1578:V, reg p361:p(V +), reg r1580:V, reg sym131:cls, reg base131:cls, reg guard131:L, reg r1582:V, reg r1583:V, reg packages_in_CRAN_archive:*, reg packages_in_CRAN_archive1:V, reg length44:cls, reg r1584:V, reg c667:L, reg which5:cls, reg tolower10:cls, reg packages_in_CRAN_archive2:*, reg packages_in_CRAN_archive3:V, reg p362:p(V +), reg r1586:V, reg tolower11:cls, reg package24:*, reg package25:V, reg p363:p(V +), reg r1588:V, reg r1589:V, reg packages_in_CRAN_archive4:*, reg packages_in_CRAN_archive5:V, reg package26:*, reg package27:V, reg r1590:V, reg r1591:V, reg p364:p(V +), reg r1593:V, reg sym132:cls, reg base132:cls, reg guard132:L, reg r1594:V, reg r1595:V, reg pos28:*, reg pos29:V, reg length45:cls, reg r1596:V, reg c668:L, reg sym133:cls, reg base133:cls, reg guard133:L, reg r1597:V, reg r1598:V, reg clashes:*, reg clashes1:V, reg sprintf7:cls, reg packages_in_CRAN_archive6:*, reg packages_in_CRAN_archive7:V, reg c669:L, reg packages_in_CRAN_archive9:V, reg dr356:V, reg dc178:L, reg dx414:V, reg dx415:V, reg pos30:*, reg pos31:V, reg __80:cls, reg r1599:V, reg p365:p(V +), reg r1601:V, reg c670:cls, reg r1602:V, reg r1603:V, reg sym134:cls, reg base134:cls, reg guard134:L, reg r1605:V, reg r1606:V, reg clashes2:*, reg clashes3:V, reg length46:cls, reg r1607:V, reg c671:L, reg sym135:cls, reg base135:cls, reg guard135:L, reg r1608:V, reg r1609:V, reg package28:*, reg package29:V, reg clashes4:*, reg clashes5:V, reg list1:cls, reg r1610:V, reg l244:*, reg c672:L, reg r1612:V, reg l246:*, reg dr358:V, reg dc179:L, reg dx416:V, reg r1614:V, reg dx417:V, reg r1615:V, reg db12:*, reg db13:V, reg c673:L, reg db15:V, reg dr360:V, reg dc180:L, reg dx418:V, reg dx419:V, reg packages10:*, reg packages11:V, reg package30:*, reg package31:V, reg r1617:V, reg db16:*, reg db17:V, reg c674:L, reg db20:V, reg r1619:V, reg dr362:V, reg dc181:L, reg dx420:V, reg db23:V, reg r1621:V, reg dx421:V, reg __81:cls, reg r1622:V, reg CRAN2:*, reg CRAN3:V, reg r1623:V, reg r1624:V, reg __82:cls, reg r1625:V, reg sym136:cls, reg base136:cls, reg guard136:L, reg r1626:V, reg r1627:V, reg repositories:*, reg repositories1:V, reg length47:cls, reg r1628:V, reg c675:L, reg repositories2:*, reg repositories3:V, reg l247:*, reg c676:L, reg repositories5:V, reg l249:*, reg dr364:V, reg dc182:L, reg dx422:V, reg repositories7:V, reg dx423:V, reg r1629:V, reg setdiff2:cls, reg unique3:cls, reg sym137:cls, reg base137:cls, reg guard137:L, reg r1630:V, reg r1631:V, reg _extract_dependency_package_names:cls, reg meta156:*, reg meta157:V, reg c677:L, reg meta159:V, reg dr366:V, reg dc183:L, reg dx424:V, reg dx425:V, reg __83:cls, reg r1632:V, reg p366:p(V +), reg r1634:V, reg _extract_dependency_package_names1:cls, reg meta160:*, reg meta161:V, reg c678:L, reg meta163:V, reg dr368:V, reg dc184:L, reg dx426:V, reg dx427:V, reg __84:cls, reg r1635:V, reg p367:p(V +), reg r1637:V, reg _extract_dependency_package_names2:cls, reg meta164:*, reg meta165:V, reg c679:L, reg meta167:V, reg dr370:V, reg dc185:L, reg dx428:V, reg dx429:V, reg __85:cls, reg r1638:V, reg p368:p(V +), reg r1640:V, reg c680:cls, reg r1641:V, reg p369:p(V +), reg r1643:V, reg p370:p(V +), reg sym138:cls, reg base138:cls, reg guard138:L, reg r1645:V, reg r1646:V, reg _get_standard_package_names:cls, reg r1647:V, reg c681:L, reg r1649:V, reg dr372:V, reg dc186:L, reg dx430:V, reg dx431:V, reg r1650:V, reg db24:*, reg db25:V, reg c682:L, reg dr374:V, reg dc187:L, reg dx432:V, reg dx433:V, reg __86:cls, reg r1651:V, reg c683:cls, reg r1652:V, reg p371:p(V +), reg r1654:V, reg sym139:cls, reg base139:cls, reg guard139:L, reg r1655:V, reg r1656:V, reg strong_dependencies:*, reg strong_dependencies1:V, reg length48:cls, reg r1657:V, reg c684:L, reg strong_dependencies2:*, reg strong_dependencies3:V, reg l250:*, reg c685:L, reg strong_dependencies5:V, reg l252:*, reg dr376:V, reg dc188:L, reg dx434:V, reg strong_dependencies7:V, reg dx435:V, reg r1658:V, reg setdiff3:cls, reg unique4:cls, reg sym140:cls, reg base140:cls, reg guard140:L, reg r1659:V, reg r1660:V, reg _extract_dependency_package_names3:cls, reg meta168:*, reg meta169:V, reg c686:L, reg meta171:V, reg dr378:V, reg dc189:L, reg dx436:V, reg dx437:V, reg __87:cls, reg r1661:V, reg p372:p(V +), reg r1663:V, reg _extract_dependency_package_names4:cls, reg meta172:*, reg meta173:V, reg c687:L, reg meta175:V, reg dr380:V, reg dc190:L, reg dx438:V, reg dx439:V, reg __88:cls, reg r1664:V, reg p373:p(V +), reg r1666:V, reg c688:cls, reg r1667:V, reg p374:p(V +), reg r1669:V, reg p375:p(V +), reg sym141:cls, reg base141:cls, reg guard141:L, reg r1671:V, reg r1672:V, reg _get_standard_package_names1:cls, reg r1673:V, reg c689:L, reg r1675:V, reg dr382:V, reg dc191:L, reg dx440:V, reg dx441:V, reg r1676:V, reg db28:*, reg db29:V, reg c690:L, reg dr384:V, reg dc192:L, reg dx442:V, reg dx443:V, reg __89:cls, reg r1677:V, reg c691:cls, reg r1678:V, reg p376:p(V +), reg r1680:V, reg sym142:cls, reg base142:cls, reg guard142:L, reg r1681:V, reg r1682:V, reg suggests_or_enhances:*, reg suggests_or_enhances1:V, reg length49:cls, reg r1683:V, reg c692:L, reg suggests_or_enhances2:*, reg suggests_or_enhances3:V, reg l253:*, reg c693:L, reg suggests_or_enhances5:V, reg l255:*, reg dr386:V, reg dc193:L, reg dx444:V, reg suggests_or_enhances7:V, reg dx445:V, reg r1684:V, reg sym143:cls, reg base143:cls, reg guard143:L, reg r1685:V, reg r1686:V, reg meta176:*, reg meta177:V, reg c694:L, reg meta179:V, reg dr388:V, reg dc194:L, reg dx446:V, reg dx447:V, reg __90:cls, reg r1687:V, reg is_na27:cls, reg r1688:V, reg r1689:V, reg c695:L, reg _read_additional_repositories_field:cls, reg aurls:*, reg aurls1:V, reg p377:p(V +), reg r1691:V, reg tryCatch7:cls, reg lapply6:cls, reg aurls2:*, reg aurls3:V, reg p378:p(V +), reg r1693:cls, reg p379:p(V +), reg r1695:V, reg p380:p(V +), reg identity14:*, reg identity15:V, reg p381:p(V +), reg r1698:V, reg sym144:cls, reg base144:cls, reg guard144:L, reg r1699:V, reg r1700:V, reg adb:*, reg adb1:V, reg inherits7:cls, reg r1701:V, reg c696:L, reg conditionMessage2:cls, reg adb2:*, reg adb3:V, reg p382:p(V +), reg r1703:V, reg l256:*, reg c697:L, reg r1705:V, reg l258:*, reg dr390:V, reg dc195:L, reg dx448:V, reg r1707:V, reg dx449:V, reg r1708:V, reg r1709:V, reg vapply4:cls, reg adb4:*, reg adb5:V, reg p383:p(V +), reg NROW5:*, reg NROW6:V, reg p384:p(V +), reg r1712:V, reg r1713:V, reg sym145:cls, reg base145:cls, reg guard145:L, reg r1714:V, reg r1715:V, reg ind37:*, reg ind38:V, reg any12:cls, reg r1716:V, reg c698:L, reg aurls4:*, reg aurls5:V, reg c699:L, reg aurls7:V, reg dr392:V, reg dc196:L, reg dx450:V, reg dx451:V, reg ind39:*, reg ind40:V, reg __91:cls, reg r1717:V, reg l259:*, reg c700:L, reg dx453:V, reg l261:*, reg dr394:V, reg dc197:L, reg dx455:V, reg dx456:V, reg dx457:V, reg r1718:V, reg do_call1:cls, reg rbind4:*, reg rbind5:V, reg p385:p(V +), reg adb6:*, reg adb7:V, reg p386:p(V +), reg r1721:V, reg ___12:cls, reg r1722:V, reg c701:L, reg r1724:V, reg dr396:V, reg dc198:L, reg dx459:V, reg dx460:V, reg r1725:V, reg dx461:cls, reg adb8:*, reg adb9:V, reg p387:p(V +), reg r1727:V, reg unique5:cls, reg sym146:cls, reg base146:cls, reg guard146:L, reg r1728:V, reg r1729:V, reg strong_dependencies9:*, reg strong_dependencies10:V, reg suggests_or_enhances9:*, reg suggests_or_enhances10:V, reg c702:cls, reg r1730:V, reg p388:p(V +), reg r1732:V, reg sym147:cls, reg base147:cls, reg guard147:L, reg r1733:V, reg r1734:V, reg dependencies:*, reg dependencies1:V, reg rownames3:cls, reg adb10:*, reg adb11:V, reg p389:p(V +), reg r1736:V, reg match1:cls, reg r1737:V, reg pos32:*, reg pos33:V, reg r1738:V, reg matrix:cls, reg character3:cls, reg r1739:V, reg p390:p(V +), reg r1741:V, reg sym148:cls, reg base148:cls, reg guard148:L, reg r1742:V, reg r1743:V, reg ind41:*, reg ind42:V, reg any13:cls, reg r1744:V, reg c703:L, reg rbind6:cls, reg tab:*, reg tab1:V, reg p391:p(V +), reg cbind1:cls, reg dependencies2:*, reg dependencies3:V, reg c704:L, reg dependencies5:V, reg dr398:V, reg dc199:L, reg dx462:V, reg dx463:V, reg ind43:*, reg ind44:V, reg __92:cls, reg r1746:V, reg p392:p(V +), reg adb12:*, reg adb13:V, reg c705:L, reg adb15:V, reg dr400:V, reg dc200:L, reg dx464:V, reg dx465:V, reg pos34:*, reg pos35:V, reg c706:L, reg adb17:V, reg pos37:V, reg dr402:V, reg dc201:L, reg dx466:V, reg adb19:V, reg dx467:V, reg ind45:*, reg ind46:V, reg __93:cls, reg r1748:V, reg __94:cls, reg r1749:V, reg p393:p(V +), reg r1751:V, reg p394:p(V +), reg r1753:V, reg ind47:*, reg ind48:V, reg r1755:V, reg sym149:cls, reg base149:cls, reg guard149:L, reg r1756:V, reg r1757:V, reg ind49:*, reg ind50:V, reg any14:cls, reg r1758:V, reg c707:L, reg rbind7:cls, reg tab2:*, reg tab3:V, reg p395:p(V +), reg cbind2:cls, reg dependencies6:*, reg dependencies7:V, reg c708:L, reg dependencies9:V, reg dr404:V, reg dc202:L, reg dx468:V, reg dx469:V, reg ind51:*, reg ind52:V, reg __95:cls, reg r1760:V, reg p396:p(V +), reg r1762:V, reg p397:p(V +), reg r1764:V, reg character4:cls, reg r1766:V, reg aurls8:*, reg aurls9:V, reg s1:V, reg l262:I, reg i18:I, reg i19:I, reg i20:I, reg c709:L, reg x25:V, reg __96:cls, reg r1767:V, reg r1768:cls, reg u:*, reg u1:V, reg p398:p(V +), reg r1770:V, reg startsWith10:cls, reg tab4:*, reg tab5:V, reg c710:L, reg dr406:V, reg dc203:L, reg dx470:V, reg dx471:V, reg __97:cls, reg r1771:V, reg p399:p(V +), reg cu:*, reg cu1:V, reg p400:p(V +), reg r1774:V, reg sym150:cls, reg base150:cls, reg guard150:L, reg r1775:V, reg i25:I, reg r1776:V, reg ind53:*, reg ind54:V, reg any15:cls, reg r1777:V, reg c711:L, reg u2:*, reg u3:V, reg l263:*, reg c712:L, reg i29:I, reg u5:V, reg l265:*, reg dr408:V, reg dc204:L, reg dx472:V, reg i31:I, reg u7:V, reg dx473:V, reg ind55:*, reg ind56:V, reg ___13:cls, reg r1778:V, reg i32:I, reg sym151:cls, reg base151:cls, reg guard151:L, reg r1779:V, reg i35:I, reg r1780:V, reg unused:*, reg unused1:V, reg u9:*, reg u10:V, reg c713:cls, reg r1781:V, reg sym152:cls, reg base152:cls, reg guard152:L, reg r1782:V, reg r1783:V, reg unused2:*, reg unused3:V, reg length50:cls, reg r1784:V, reg c714:L, reg rbind8:cls, reg tab8:*, reg tab9:V, reg p401:p(V +), reg cbind3:cls, reg unused4:*, reg unused5:V, reg p402:p(V +), reg r1787:V, reg p403:p(V +), reg r1789:V, reg l266:*, reg dimnames__:cls, reg r1791:V, reg tab10:*, reg tab11:V, reg l267:*, reg c715:L, reg tab13:V, reg l269:*, reg dr410:V, reg dc205:L, reg dx474:V, reg tab15:V, reg dx475:V, reg r1792:V, reg capabilities1:cls, reg r1794:V, reg c716:L, reg c718:V, reg config_val_to_logical7:cls, reg Sys_getenv8:cls, reg r1795:V, reg p404:p(V +), reg r1797:V, reg r1798:V, reg c719:L, reg c720:V, reg c722:L, reg tryCatch8:cls, reg check_doi_db1:cls, reg doi_db_from_package_sources:cls, reg dir59:*, reg dir60:V, reg p405:p(V +), reg r1800:V, reg p406:p(V +), reg check_urls_in_parallel4:*, reg check_urls_in_parallel5:V, reg p407:p(V +), reg r1803:V, reg p408:p(V +), reg identity16:*, reg identity17:V, reg p409:p(V +), reg r1806:V, reg sym153:cls, reg base153:cls, reg guard153:L, reg r1807:V, reg r1808:V, reg bad88:*, reg bad89:V, reg inherits8:cls, reg r1809:V, reg c723:L, reg c724:V, reg NROW7:cls, reg bad90:*, reg bad91:V, reg p410:p(V +), reg r1811:V, reg c726:L, reg c727:V, reg c729:L, reg bad92:*, reg bad93:V, reg l270:*, reg c730:L, reg bad95:V, reg l272:*, reg dr412:V, reg dc206:L, reg dx476:V, reg bad97:V, reg dx477:V, reg r1812:V, reg bad98:V, reg db32:*, reg db33:V, reg c731:L, reg db35:V, reg dr414:V, reg dc207:L, reg dx478:V, reg dx479:V, reg packages12:*, reg packages13:V, reg package32:*, reg package33:V, reg r1813:V, reg db36:*, reg db37:V, reg c732:L, reg db40:V, reg r1815:V, reg dr416:V, reg dc208:L, reg dx480:V, reg db43:V, reg r1817:V, reg dx481:V, reg __98:cls, reg r1818:V, reg CRAN4:*, reg CRAN5:V, reg r1819:V, reg r1820:V, reg sym154:cls, reg base154:cls, reg guard154:L, reg r1823:V, reg r1824:V, reg r1825:V, reg db47:*, reg db48:V, reg c733:L, reg db51:V, reg r1827:V, reg dr418:V, reg dc209:L, reg dx482:V, reg db54:V, reg r1829:V, reg dx483:V, reg __99:cls, reg r1830:V, reg is_na28:cls, reg r1831:V, reg r1832:V, reg __100:cls, reg r1833:V, reg NROW8:cls, reg db55:*, reg db56:V, reg p411:p(V +), reg r1835:V, reg r1836:V, reg c734:L, reg _in_2:cls, reg package34:*, reg package35:V, reg p412:p(V +), reg packages_in_CRAN_archive10:*, reg packages_in_CRAN_archive11:V, reg p413:p(V +), reg r1839:V, reg c735:L, reg l273:*, reg c736:L, reg r1841:L, reg l275:*, reg dr420:V, reg dc210:L, reg dx484:V, reg dx485:V, reg r1844:V, reg package_version1:cls, reg meta180:*, reg meta181:V, reg c737:L, reg meta183:V, reg dr422:V, reg dc211:L, reg dx486:V, reg dx487:V, reg __101:cls, reg r1845:V, reg p414:p(V +), reg r1847:V, reg sub3:cls, reg basename4:cls, reg rownames4:cls, reg archive_db2:*, reg archive_db3:V, reg c738:L, reg archive_db5:V, reg dr424:V, reg dc212:L, reg dx488:V, reg dx489:V, reg package36:*, reg package37:V, reg __102:cls, reg r1848:V, reg p415:p(V +), reg r1850:V, reg p416:p(V +), reg r1852:V, reg p417:p(V +), reg r1854:V, reg sym155:cls, reg base155:cls, reg guard155:L, reg r1855:V, reg r1856:V, reg package_version2:cls, reg v_a:*, reg v_a1:V, reg p418:p(V +), reg r1858:V, reg max:cls, reg r1859:V, reg v_m:*, reg v_m1:V, reg v_a2:*, reg v_a3:V, reg r1860:V, reg c739:L, reg sym156:cls, reg base156:cls, reg guard156:L, reg r1861:V, reg r1862:V, reg v_m2:*, reg v_m3:V, reg v_a4:*, reg v_a5:V, reg list2:cls, reg r1863:V, reg l276:*, reg c740:L, reg r1865:V, reg l278:*, reg dr426:V, reg dc213:L, reg dx490:V, reg r1867:V, reg dx491:V, reg r1868:V, reg r1869:V, reg foss4:*, reg foss5:V, reg r1871:V, reg c741:L, reg meta184:*, reg meta185:V, reg c742:L, reg meta187:V, reg dr428:V, reg dc214:L, reg dx492:V, reg dx493:V, reg __103:cls, reg r1872:V, reg l279:*, reg c743:L, reg dx495:V, reg l281:*, reg dr430:V, reg dc215:L, reg dx497:V, reg dx498:V, reg dx499:V, reg r1873:V, reg out16:*, reg out17:V, reg package_version3:cls, reg meta188:*, reg meta189:V, reg c744:L, reg meta191:V, reg dr432:V, reg dc216:L, reg dx501:V, reg dx502:V, reg __104:cls, reg r1876:V, reg p419:p(V +), reg r1878:V, reg sym157:cls, reg base157:cls, reg guard157:L, reg r1879:V, reg r1880:V, reg package_version4:cls, reg db57:*, reg db58:V, reg c745:L, reg dr434:V, reg dc217:L, reg dx503:V, reg dx504:V, reg __105:cls, reg r1881:V, reg p420:p(V +), reg r1883:V, reg max1:cls, reg r1884:V, reg v_m4:*, reg v_m5:V, reg v_d:*, reg v_d1:V, reg r1885:V, reg c746:L, reg c748:V, reg config_val_to_logical8:cls, reg Sys_getenv9:cls, reg r1886:V, reg p421:p(V +), reg r1888:V, reg r1889:V, reg c749:L, reg c750:V, reg c752:L, reg sym158:cls, reg base158:cls, reg guard158:L, reg r1890:V, reg r1891:V, reg v_m6:*, reg v_m7:V, reg v_d2:*, reg v_d3:V, reg list3:cls, reg r1892:V, reg l282:*, reg c753:L, reg r1894:V, reg l284:*, reg dr436:V, reg dc218:L, reg dx505:V, reg r1896:V, reg dx506:V, reg r1897:V, reg v_m8:*, reg v_m9:V, reg c754:L, reg v_m11:V, reg dr438:V, reg dc219:L, reg dx507:V, reg dx508:V, reg r1899:V, reg v_d4:*, reg v_d5:V, reg c755:L, reg dx510:V, reg v_d7:V, reg dr440:V, reg dc220:L, reg dx512:V, reg dx513:V, reg dx514:V, reg r1900:V, reg r1901:V, reg c756:L, reg c758:V, reg v_m12:*, reg v_m13:V, reg c759:L, reg c761:L, reg v_m15:V, reg dr442:V, reg dc221:L, reg dx515:V, reg c763:L, reg dx516:V, reg r1902:V, reg v_d8:*, reg v_d9:V, reg c764:L, reg c766:L, reg dx518:V, reg v_d11:V, reg dr444:V, reg dc222:L, reg dx520:V, reg c768:L, reg dx521:V, reg dx522:V, reg r1903:V, reg r1904:V, reg r1905:V, reg c769:L, reg c770:V, reg c772:L, reg sym159:cls, reg base159:cls, reg guard159:L, reg r1906:V, reg r1907:V, reg v_m16:*, reg v_m17:V, reg v_d12:*, reg v_d13:V, reg list4:cls, reg r1908:V, reg l285:*, reg c773:L, reg r1910:V, reg l287:*, reg dr446:V, reg dc223:L, reg dx523:V, reg r1912:V, reg dx524:V, reg r1913:V, reg CRAN_current_db:cls, reg r1915:V, reg sym160:cls, reg base160:cls, reg guard160:L, reg r1916:V, reg r1917:V, reg current_db:*, reg current_db1:V, reg c774:L, reg current_db3:V, reg dr448:V, reg dc224:L, reg dx525:V, reg dx526:V, reg sym161:cls, reg base161:cls, reg guard161:L, reg r1918:V, reg current_db6:V, reg r1919:V, reg package38:*, reg package39:V, reg sub4:cls, reg rownames5:cls, reg current_db7:*, reg current_db8:V, reg p422:p(V +), reg r1921:V, reg p423:p(V +), reg r1923:V, reg match2:cls, reg r1924:V, reg __106:cls, reg r1925:V, reg archive_db6:*, reg archive_db7:V, reg c775:L, reg archive_db9:V, reg dr450:V, reg dc225:L, reg dx527:V, reg dx528:V, reg package40:*, reg package41:V, reg __107:cls, reg r1926:V, reg c776:L, reg dx530:V, reg dr452:V, reg dc226:L, reg dx531:V, reg dx532:V, reg r1927:V, reg c777:cls, reg r1928:V, reg sym162:cls, reg base162:cls, reg guard162:L, reg r1929:V, reg r1930:V, reg mtimes:*, reg mtimes1:V, reg length51:cls, reg r1931:V, reg c778:L, reg Sys_Date3:cls, reg r1932:V, reg as_Date2:cls, reg sort3:cls, reg mtimes2:*, reg mtimes3:V, reg p424:p(V +), reg r1934:V, reg p425:p(V +), reg r1936:V, reg r1937:V, reg sym163:cls, reg base163:cls, reg guard163:L, reg r1938:V, reg r1939:V, reg deltas:*, reg deltas1:V, reg c779:L, reg deltas3:V, reg dr454:V, reg dc227:L, reg dx533:V, reg dx534:V, reg __108:cls, reg r1940:V, reg as_numeric2:cls, reg r1941:V, reg recency:*, reg recency1:V, reg r1942:V, reg c780:L, reg recency2:*, reg recency3:V, reg l288:*, reg c781:L, reg recency5:V, reg l290:*, reg dr456:V, reg dc228:L, reg dx535:V, reg recency7:V, reg dx536:V, reg r1943:V, reg sym164:cls, reg base164:cls, reg guard164:L, reg r1944:V, reg r1945:V, reg deltas4:*, reg deltas5:V, reg r1946:V, reg sum1:cls, reg r1947:V, reg frequency:*, reg frequency1:V, reg r1948:V, reg c782:L, reg frequency2:*, reg frequency3:V, reg l291:*, reg c783:L, reg frequency5:V, reg l293:*, reg dr458:V, reg dc229:L, reg dx537:V, reg frequency7:V, reg dx538:V, reg r1949:V, reg frequency8:V, reg tryCatch9:cls, reg CRAN_package_db:cls, reg r1950:V, reg p426:p(V +), reg identity18:*, reg identity19:V, reg p427:p(V +), reg r1953:V, reg sym165:cls, reg base165:cls, reg guard165:L, reg r1954:V, reg r1955:V, reg db61:*, reg db62:V, reg inherits9:cls, reg r1956:V, reg c784:L, reg out18:*, reg out19:V, reg db63:*, reg db64:V, reg c785:L, reg db66:V, reg dr460:V, reg dc230:L, reg dx539:V, reg dx540:V, reg db67:*, reg db68:V, reg c786:L, reg db71:V, reg dr462:V, reg dc231:L, reg dx541:V, reg db74:V, reg dx542:V, reg __109:cls, reg r1959:V, reg package42:*, reg package43:V, reg r1960:V, reg __110:cls, reg r1961:V, reg unlist3:cls, reg meta192:*, reg meta193:V, reg c787:L, reg dr464:V, reg dc232:L, reg dx543:V, reg dx544:V, reg __111:cls, reg r1962:V, reg p428:p(V +), reg r1964:V, reg as_vector6:cls, reg meta196:*, reg meta197:V, reg c788:L, reg meta199:V, reg dr466:V, reg dc233:L, reg dx545:V, reg dx546:V, reg __112:cls, reg r1965:V, reg p429:p(V +), reg r1967:V, reg meta200:*, reg meta201:V, reg c789:L, reg meta203:V, reg dr468:V, reg dc234:L, reg dx547:V, reg dx548:V, reg __113:cls, reg r1968:V, reg gsub8:cls, reg m_m:*, reg m_m1:V, reg p430:p(V +), reg r1970:V, reg gsub9:cls, reg m_d:*, reg m_d1:V, reg p431:p(V +), reg r1972:V, reg sym166:cls, reg base166:cls, reg guard166:L, reg r1973:V, reg r1974:V, reg m_m_1:*, reg m_m_2:V, reg m_d_1:*, reg m_d_2:V, reg r1975:V, reg all1:cls, reg r1976:V, reg r1977:V, reg c790:L, reg Encoding:cls, reg m_m2:*, reg m_m3:V, reg p432:p(V +), reg r1979:V, reg r1980:V, reg c791:L, reg iconv:cls, reg m_m4:*, reg m_m5:V, reg p433:p(V +), reg r1982:V, reg sym167:cls, reg base167:cls, reg guard167:L, reg r1984:V, reg r1985:V, reg m_m6:*, reg m_m7:V, reg m_d2:*, reg m_d3:V, reg list5:cls, reg r1986:V, reg l294:*, reg c792:L, reg r1988:V, reg l296:*, reg dr470:V, reg dc235:L, reg dx549:V, reg r1990:V, reg dx550:V, reg r1991:V, reg meta204:*, reg meta205:V, reg c793:L, reg meta207:V, reg dr472:V, reg dc236:L, reg dx551:V, reg dx552:V, reg __114:cls, reg r1993:V, reg foss6:*, reg foss7:V, reg r1994:V, reg c794:L, reg c796:V, reg analyze_license1:cls, reg l_d:*, reg l_d1:V, reg p434:p(V +), reg r1996:V, reg c797:L, reg c799:L, reg r1998:V, reg dr474:V, reg dc237:L, reg dx553:V, reg c801:L, reg dx554:V, reg r1999:V, reg c802:L, reg c803:V, reg c805:L, reg sym168:cls, reg base168:cls, reg guard168:L, reg r2000:V, reg r2001:V, reg meta208:*, reg meta209:V, reg c806:L, reg meta211:V, reg dr476:V, reg dc238:L, reg dx555:V, reg dx556:V, reg __115:cls, reg r2002:V, reg l_d2:*, reg l_d3:V, reg list6:cls, reg r2003:V, reg l297:*, reg c807:L, reg r2005:V, reg l299:*, reg dr478:V, reg dc239:L, reg dx557:V, reg r2007:V, reg dx558:V, reg r2008:V, reg config_val_to_logical9:cls, reg Sys_getenv10:cls, reg r2010:V, reg p435:p(V +), reg r2012:V, reg c808:L, reg meta212:*, reg meta213:V, reg c809:L, reg meta215:V, reg dr480:V, reg dc240:L, reg dx559:V, reg dx560:V, reg __116:cls, reg r2013:V, reg sym169:cls, reg base169:cls, reg guard169:L, reg r2014:V, reg r2015:V, reg SysReq:*, reg SysReq1:V, reg is_na29:cls, reg r2016:V, reg r2017:V, reg c810:L, reg c812:V, reg grepl17:cls, reg SysReq2:*, reg SysReq3:V, reg p436:p(V +), reg r2019:V, reg c813:L, reg c814:V, reg c816:L, reg l300:*, reg c817:L, reg r2021:L, reg l302:*, reg dr482:V, reg dc241:L, reg dx561:V, reg r2023:L, reg dx562:V, reg r2024:V, reg r2025:V, reg sym170:cls, reg base170:cls, reg guard170:L, reg r2027:V, reg r2028:V, reg tryCatch10:cls, reg format3:cls, reg as_Date3:cls, reg meta216:*, reg meta217:V, reg c818:L, reg meta219:V, reg dr484:V, reg dc242:L, reg dx563:V, reg dx564:V, reg __117:cls, reg r2029:V, reg p437:p(V +), reg r2031:V, reg p438:p(V +), reg r2033:V, reg p439:p(V +), reg identity20:*, reg identity21:V, reg p440:p(V +), reg r2036:V, reg inherits10:cls, reg r2037:V, reg r2038:V, reg c819:L, reg NROW9:cls, reg out20:*, reg out21:V, reg c820:L, reg out23:V, reg dr486:V, reg dc243:L, reg dx565:V, reg dx566:V, reg r2039:V, reg p441:p(V +), reg r2041:V, reg c821:L, reg c823:V, reg config_val_to_logical10:cls, reg Sys_getenv11:cls, reg r2042:V, reg p442:p(V +), reg r2044:V, reg c824:L, reg c825:V, reg c827:L, reg c829:V, reg year:*, reg year1:V, reg sym171:cls, reg base171:cls, reg guard171:L, reg r2045:V, reg c832:L, reg year4:V, reg r2046:V, reg Sys_getenv12:cls, reg r2047:V, reg as_numeric3:cls, reg r2048:V, reg r2049:V, reg c833:L, reg c834:V, reg c836:L, reg _aspell_package_description_for_CRAN1:cls, reg meta220:*, reg meta221:V, reg p443:p(V +), reg r2051:V, reg a12:*, reg a13:V, reg c837:L, reg a15:V, reg dr488:V, reg dc244:L, reg dx567:V, reg dx568:V, reg _notin_4:cls, reg a16:*, reg a17:V, reg c838:L, reg a19:V, reg dr490:V, reg dc245:L, reg dx569:V, reg dx570:V, reg r2052:V, reg p444:p(V +), reg a20:*, reg a21:V, reg c839:L, reg a23:V, reg dr492:V, reg dc246:L, reg dx571:V, reg dx572:V, reg r2054:V, reg p445:p(V +), reg r2056:V, reg __118:cls, reg r2057:V, reg l303:*, reg c840:L, reg dx574:V, reg l305:*, reg dr494:V, reg dc247:L, reg dx576:V, reg dx577:V, reg dx578:V, reg r2058:V, reg NROW10:cls, reg out24:*, reg out25:V, reg c841:L, reg out27:V, reg dr496:V, reg dc248:L, reg dx580:V, reg dx581:V, reg r2059:V, reg p446:p(V +), reg r2061:V, reg c842:L, reg c844:V, reg config_val_to_logical11:cls, reg Sys_getenv13:cls, reg r2062:V, reg p447:p(V +), reg r2064:V, reg c845:L, reg c846:V, reg c848:L, reg c850:V, reg year5:*, reg year6:V, reg sym172:cls, reg base172:cls, reg guard172:L, reg r2065:V, reg c853:L, reg year9:V, reg r2066:V, reg Sys_getenv14:cls, reg r2067:V, reg as_numeric4:cls, reg r2068:V, reg r2069:V, reg c854:L, reg c855:V, reg c857:L, reg c859:V, reg meta222:*, reg meta223:V, reg c860:L, reg c862:L, reg meta225:V, reg dr498:V, reg dc249:L, reg dx582:V, reg c864:L, reg dx583:V, reg __119:cls, reg r2070:V, reg meta226:*, reg meta227:V, reg c865:L, reg c867:L, reg dx585:V, reg meta229:V, reg dr500:V, reg dc250:L, reg dx587:V, reg c869:L, reg dx588:V, reg dx589:V, reg __120:cls, reg r2071:V, reg r2072:V, reg c870:L, reg c871:V, reg c873:L, reg l306:*, reg c874:L, reg r2074:dots, reg l308:*, reg dr502:V, reg dc251:L, reg dx590:V, reg r2076:dots, reg dx591:V, reg r2077:V, reg NROW11:cls, reg out28:*, reg out29:V, reg c875:L, reg out31:V, reg dr504:V, reg dc252:L, reg dx592:V, reg dx593:V, reg r2079:V, reg p448:p(V +), reg r2081:V, reg c876:L, reg c878:V, reg config_val_to_logical12:cls, reg Sys_getenv15:cls, reg r2082:V, reg p449:p(V +), reg r2084:V, reg c879:L, reg c880:V, reg c882:L, reg c884:V, reg year10:*, reg year11:V, reg sym173:cls, reg base173:cls, reg guard173:L, reg r2085:V, reg c887:L, reg year14:V, reg r2086:V, reg Sys_getenv16:cls, reg r2087:V, reg as_numeric5:cls, reg r2088:V, reg r2089:V, reg c888:L, reg c889:V, reg c891:L, reg c893:V, reg meta230:*, reg meta231:V, reg c894:L, reg c896:L, reg meta233:V, reg dr506:V, reg dc253:L, reg dx594:V, reg c898:L, reg dx595:V, reg __121:cls, reg r2090:V, reg meta234:*, reg meta235:V, reg c899:L, reg c901:L, reg dx597:V, reg meta237:V, reg dr508:V, reg dc254:L, reg dx599:V, reg c903:L, reg dx600:V, reg dx601:V, reg __122:cls, reg r2091:V, reg r2092:V, reg c904:L, reg c905:V, reg c907:L, reg l309:*, reg c908:L, reg r2094:dots, reg l311:*, reg dr510:V, reg dc255:L, reg dx602:V, reg r2096:dots, reg dx603:V, reg r2097:V, reg NROW12:cls, reg out32:*, reg out33:V, reg c909:L, reg out35:V, reg dr512:V, reg dc256:L, reg dx604:V, reg dx605:V, reg r2099:V, reg p450:p(V +), reg r2101:V, reg c910:L, reg c912:V, reg config_val_to_logical13:cls, reg Sys_getenv17:cls, reg r2102:V, reg p451:p(V +), reg r2104:V, reg c913:L, reg c914:V, reg c916:L, reg c918:V, reg year15:*, reg year16:V, reg sym174:cls, reg base174:cls, reg guard174:L, reg r2105:V, reg c921:L, reg year19:V, reg r2106:V, reg Sys_getenv18:cls, reg r2107:V, reg as_numeric6:cls, reg r2108:V, reg r2109:V, reg c922:L, reg c923:V, reg c925:L, reg trimws5:cls, reg as_vector7:cls, reg meta238:*, reg meta239:V, reg c926:L, reg meta241:V, reg dr514:V, reg dc257:L, reg dx606:V, reg dx607:V, reg __123:cls, reg r2110:V, reg p452:p(V +), reg r2112:V, reg p453:p(V +), reg r2114:V, reg gsub10:cls, reg descr34:*, reg descr35:V, reg p454:p(V +), reg r2116:V, reg grepl18:cls, reg paste13:cls, reg package44:*, reg package45:V, reg p455:p(V +), reg r2118:V, reg p456:p(V +), reg descr36:*, reg descr37:V, reg p457:p(V +), reg r2121:V, reg c927:L, reg c928:V, reg grepl19:cls, reg descr38:*, reg descr39:V, reg p458:p(V +), reg r2123:V, reg c930:L, reg c931:V, reg c933:L, reg l312:*, reg c934:L, reg r2125:dots, reg l314:*, reg dr516:V, reg dc258:L, reg dx608:V, reg r2127:dots, reg dx609:V, reg r2128:V, reg r2129:dots, reg NROW13:cls, reg out36:*, reg out37:V, reg c935:L, reg out39:V, reg dr518:V, reg dc259:L, reg dx610:V, reg dx611:V, reg r2131:V, reg p459:p(V +), reg r2133:V, reg c936:L, reg c938:V, reg config_val_to_logical14:cls, reg Sys_getenv19:cls, reg r2134:V, reg p460:p(V +), reg r2136:V, reg c939:L, reg c940:V, reg c942:L, reg c944:V, reg year20:*, reg year21:V, reg sym175:cls, reg base175:cls, reg guard175:L, reg r2137:V, reg c947:L, reg year24:V, reg r2138:V, reg Sys_getenv20:cls, reg r2139:V, reg as_numeric7:cls, reg r2140:V, reg r2141:V, reg c948:L, reg c949:V, reg c951:L, reg meta242:*, reg meta243:V, reg c952:L, reg meta245:V, reg dr520:V, reg dc260:L, reg dx612:V, reg dx613:V, reg __124:cls, reg r2142:V, reg sym176:cls, reg base176:cls, reg guard176:L, reg r2143:V, reg r2144:V, reg SysReq4:*, reg SysReq5:V, reg is_na30:cls, reg r2145:V, reg r2146:V, reg c953:L, reg c955:V, reg grepl20:cls, reg SysReq6:*, reg SysReq7:V, reg p461:p(V +), reg r2148:V, reg c956:L, reg c957:V, reg c959:L, reg l315:*, reg c960:L, reg r2150:dots, reg l317:*, reg dr522:V, reg dc261:L, reg dx614:V, reg r2152:dots, reg dx615:V, reg r2153:V, reg r2154:dots, reg r2155:dots, reg out40:*, reg out41:V |
    mkenv;
    st dir = dir;
    localOnly_isMissing = missing.0(localOnly);
    if localOnly_isMissing then L0(FALSE) else L0(localOnly);
  L0(localOnly_orDefault):
    st localOnly = localOnly_orDefault;
    pkgSize_isMissing = missing.0(pkgSize);
    if pkgSize_isMissing then L1(NA_LGL) else L1(pkgSize);
  L1(pkgSize_orDefault):
    st pkgSize = pkgSize_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L580() else L581();
  L2(r1):
    st out = r1;
    l = ld out;
    class__ = ldf `class<-`;
    check L583() else D1();
  L580():
    list = ldf list in base;
    r2 = dyn list();
    check L582() else D0();
  L581():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 8 ["check_package_CRAN_incoming", l, "check_package_CRAN_incoming"];
  L582():
    goto L2(r2);
  L583():
    r3 = dyn class__(l, NULL, "check_package_CRAN_incoming");
    check L584() else D2();
  D2():
    deopt 10 ["check_package_CRAN_incoming", r3];
  L584():
    st out = r3;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L585() else D3();
  D3():
    deopt 13 [];
  L585():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r5 = dyn _get_package_metadata(p, FALSE);
    check L586() else D4();
  D4():
    deopt 16 [r5];
  L586():
    st meta = r5;
    analyze_license = ldf analyze_license;
    check L587() else D5();
  D5():
    deopt 19 [];
  L587():
    p1 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      c = `is.object`(meta1);
      if c then L1() else L2(meta1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", meta1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(meta3):
      __ = ldf `[` in base;
      r6 = dyn __(meta3, "License");
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn analyze_license(p1);
    check L588() else D6();
  D6():
    deopt 21 [r8];
  L588():
    st lic_info = r8;
    lic_info = ld lic_info;
    check L589() else D7();
  D7():
    deopt 23 [lic_info];
  L589():
    lic_info1 = force? lic_info;
    checkMissing(lic_info1);
    c1 = `is.object`(lic_info1);
    if c1 then L591() else L592(lic_info1);
  L590(dx3):
    st foss = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L594() else L595();
  L591():
    dr2 = tryDispatchBuiltin.1("$", lic_info1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L593() else L592(dr2);
  L592(lic_info3):
    r9 = `$`(lic_info3, <sym is_verified>);
    goto L590(r9);
  L3(r11):
    c3 = `as.logical`(r11);
    if c3 then L602() else L4(c3);
  L593():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L590(dx2);
  L594():
    lic_info4 = ld lic_info;
    check L596() else D8();
  L595():
    r10 = dyn base1(<lang `<-`(extensions, `$`(lic_info, extensions))>);
    goto L3(r10);
  D8():
    deopt 29 [lic_info4];
  L4(c5):
    c26 = `as.logical`(c5);
    if c26 then L616() else L7(c26);
  L596():
    lic_info5 = force? lic_info4;
    checkMissing(lic_info5);
    c2 = `is.object`(lic_info5);
    if c2 then L598() else L599(lic_info5);
  L602():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L603() else L604();
  L5(c8, r15):
    r18 = `!=`(r15, 1);
    c14 = `as.logical`(r18);
    if c14 then L6(c8, c14) else L611();
  L7(c28):
    c40 = `as.logical`(c28);
    if c40 then L626() else L9();
  L597(dx5):
    st extensions = dx5;
    length = ldf length in base;
    r13 = dyn length(dx5);
    check L601() else D9();
  L598():
    dr4 = tryDispatchBuiltin.1("$", lic_info5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L600() else L599(dr4);
  L599(lic_info7):
    r12 = `$`(lic_info7, <sym extensions>);
    goto L597(r12);
  L603():
    extensions = ld extensions;
    check L605() else D10();
  L604():
    r14 = dyn base2(<lang `<-`(components, `$`(extensions, components))>);
    goto L5(c3, r14);
  L616():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L617() else L618();
  D9():
    deopt 34 [r13];
  D10():
    deopt 37 [c3, extensions];
  L6(c15, c16):
    c23 = `as.logical`(c16);
    c24 = `&&`(c15, c23);
    goto L4(c24);
  L8(c31, r24):
    c37 = `as.logical`(r24);
    c38 = `&&`(c31, c37);
    goto L7(c38);
  L9():
    goto L11();
  L11():
    meta4 = ld meta;
    check L647() else D20();
  L600():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L597(dx4);
  L601():
    goto L3(r13);
  L605():
    extensions1 = force? extensions;
    checkMissing(extensions1);
    c9 = `is.object`(extensions1);
    if c9 then L607() else L608(c3, extensions1);
  L611():
    _license_component_is_for_stub_and_ok = ldf `.license_component_is_for_stub_and_ok`;
    check L612() else D12();
  L617():
    extensions4 = ld extensions;
    check L619() else D14();
  L618():
    r23 = dyn base3(<lang `<-`(ind, `$`(extensions, extensible))>);
    goto L8(c26, r23);
  L626():
    extensions8 = ld extensions;
    check L627() else D16();
  D12():
    deopt 46 [c8, c14];
  D14():
    deopt 56 [c26, extensions4];
  D16():
    deopt 63 [extensions8];
  D20():
    deopt 82 [meta4];
  L606(c13, dx7):
    st components = dx7;
    length1 = ldf length in base;
    r17 = dyn length1(dx7);
    check L610() else D11();
  L607():
    dr6 = tryDispatchBuiltin.1("$", extensions1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L609() else L608(c3, dr6);
  L608(c11, extensions3):
    r16 = `$`(extensions3, <sym components>);
    goto L606(c11, r16);
  L612():
    p2 = prom<V +>{
      components = ld components;
      components1 = force? components;
      checkMissing(components1);
      return components1;
    };
    p3 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r21 = dyn _license_component_is_for_stub_and_ok(p2, p3);
    check L613() else D13();
  L619():
    extensions5 = force? extensions4;
    checkMissing(extensions5);
    c32 = `is.object`(extensions5);
    if c32 then L621() else L622(c26, extensions5);
  L627():
    extensions9 = force? extensions8;
    checkMissing(extensions9);
    c41 = `is.object`(extensions9);
    if c41 then L629() else L630(extensions9);
  L647():
    meta5 = force? meta4;
    checkMissing(meta5);
    c46 = `is.object`(meta5);
    if c46 then L648() else L649(meta5);
  D11():
    deopt 42 [c13, r17];
  D13():
    deopt 49 [c8, c14, r21];
  L12(dx27):
    l7 = ld out;
    c47 = `is.object`(l7);
    if c47 then L652() else L653(dx27, l7);
  L609():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L606(c3, dx6);
  L610():
    goto L5(c13, r17);
  L613():
    r22 = `!=`(r21, 0);
    c19 = `as.logical`(r22);
    c20 = `||`(c14, c19);
    goto L6(c8, c20);
  L620(c36, dx9):
    st ind = dx9;
    any = ldf any in base;
    r26 = dyn any(dx9);
    check L624() else D15();
  L621():
    dr8 = tryDispatchBuiltin.1("$", extensions5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L623() else L622(c26, dr8);
  L622(c34, extensions7):
    r25 = `$`(extensions7, <sym extensible>);
    goto L620(c34, r25);
  L628(dx11):
    c42 = `is.object`(dx11);
    if c42 then L632() else L633(dx11);
  L629():
    dr10 = tryDispatchBuiltin.1("$", extensions9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L631() else L630(dr10);
  L630(extensions11):
    r27 = `$`(extensions11, <sym components>);
    goto L628(r27);
  L648():
    dr20 = tryDispatchBuiltin.1("[", meta5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L650() else L649(dr20);
  L649(meta7):
    __2 = ldf `[` in base;
    r44 = dyn __2(meta7, "Maintainer");
    goto L12(r44);
  D15():
    deopt 61 [c36, r26];
  L10(dx15):
    l1 = ld out;
    c43 = `is.object`(l1);
    if c43 then L637() else L638(dx15, l1);
  L623():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L620(c26, dx8);
  L624():
    goto L8(c36, r26);
  L631():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L628(dx10);
  L632():
    dr12 = tryDispatchBuiltin.1("[", dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L634() else L633(dr12);
  L633(dx13):
    ind = ld ind;
    check L635() else D17();
  L650():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L12(dx26);
  L651(dx33):
    st out = dx33;
    gsub = ldf gsub;
    check L655() else D21();
  L652():
    dr22 = tryDispatchBuiltin.0("$<-", l7, dx27);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L654() else L653(dx27, dr22);
  L653(dx29, l9):
    r45 = `$<-`(l9, <sym Maintainer>, dx27);
    goto L651(r45);
  D17():
    deopt 66 [dx13, ind];
  D21():
    deopt 91 [];
  L634():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx14);
  L635():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r28 = dyn __1(dx13, ind1);
    goto L10(r28);
  L636(dx21):
    st out = dx21;
    Filter = ldf Filter;
    check L640() else D18();
  L637():
    dr14 = tryDispatchBuiltin.0("$<-", l1, dx15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L639() else L638(dx15, dr14);
  L638(dx17, l3):
    r29 = `$<-`(l3, <sym extensions>, dx15);
    goto L636(r29);
  L654():
    dx31 = getTryDispatchBuiltinValue(dr22);
    goto L651(dx31);
  L655():
    p9 = prom<V +>{
      as_vector = ldf `as.vector`;
      p8 = prom<V +>{
        out = ld out;
        out1 = force? out;
        checkMissing(out1);
        c48 = `is.object`(out1);
        if c48 then L1() else L2(out1);
      L0(dx35):
        return dx35;
      L1():
        dr24 = tryDispatchBuiltin.1("$", out1);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(out3):
        r46 = `$`(out3, <sym Maintainer>);
        goto L0(r46);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx34);
      };
      r48 = dyn as_vector(p8);
      return r48;
    };
    r50 = dyn gsub("<.*", "", p9);
    check L656() else D22();
  D18():
    deopt 73 [];
  D22():
    deopt 95 [r50];
  L639():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L636(dx19);
  L640():
    p4 = prom<V +>{
      length2 = ld length;
      length3 = force? length2;
      checkMissing(length3);
      return length3;
    };
    p7 = prom<V +>{
      lapply = ldf lapply;
      p5 = prom<V +>{
        lic_info8 = ld lic_info;
        lic_info9 = force? lic_info8;
        checkMissing(lic_info9);
        c44 = `is.object`(lic_info9);
        if c44 then L1() else L2(lic_info9);
      L0(dx23):
        return dx23;
      L1():
        dr16 = tryDispatchBuiltin.1("$", lic_info9);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(lic_info11):
        r31 = `$`(lic_info11, <sym pointers>);
        goto L0(r31);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx22);
      };
      p6 = prom<V +>{
        r33 = clos inner3913899244;
        return r33;
      };
      r35 = dyn lapply(p5, p6);
      return r35;
    };
    r37 = dyn Filter(p4, p7);
    check L641() else D19();
  L656():
    st display = r50;
    sub = ldf sub;
    check L657() else D23();
  D19():
    deopt 76 [r37];
  D23():
    deopt 98 [];
  L641():
    l4 = ld out;
    c45 = `is.object`(l4);
    if c45 then L643() else L644(r37, l4);
  L657():
    p11 = prom<V +>{
      sub1 = ldf sub;
      p10 = prom<V +>{
        display = ld display;
        display1 = force? display;
        checkMissing(display1);
        return display1;
      };
      r52 = dyn sub1[, , , useBytes]("^[[:space:]]+", "", p10, TRUE);
      return r52;
    };
    r54 = dyn sub[, , , useBytes]("[[:space:]]+$", "", p11, TRUE);
    check L658() else D24();
  D24():
    deopt 104 [r54];
  L642(r41, dx25):
    st out = dx25;
    goto L11();
  L643():
    dr18 = tryDispatchBuiltin.0("$<-", l4, r37);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L645() else L644(r37, dr18);
  L644(r39, l6):
    r42 = `$<-`(l6, <sym pointers>, r37);
    goto L642(r39, r42);
  L658():
    st display = r54;
    grepl = ldf grepl;
    check L659() else D25();
  D25():
    deopt 107 [];
  L645():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L642(r37, dx24);
  L659():
    p12 = prom<V +>{
      display2 = ld display;
      display3 = force? display2;
      checkMissing(display3);
      return display3;
    };
    r56 = dyn grepl[, , useBytes]("[,]", p12, TRUE);
    check L660() else D26();
  D26():
    deopt 112 [r56];
  L660():
    c49 = `as.logical`(r56);
    if c49 then L661() else L13(c49);
  L13(c51):
    c55 = `as.logical`(c51);
    if c55 then L665() else L14();
  L661():
    grepl1 = ldf grepl;
    check L662() else D27();
  D27():
    deopt 114 [c49];
  L14():
    goto L15();
  L15():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L671() else L672();
  L662():
    p13 = prom<V +>{
      display4 = ld display;
      display5 = force? display4;
      checkMissing(display5);
      return display5;
    };
    r58 = dyn grepl1[, , useBytes]("^\".*\"$", p13, TRUE);
    check L663() else D28();
  L665():
    l10 = ld out;
    c56 = `is.object`(l10);
    if c56 then L667() else L668(TRUE, l10);
  D28():
    deopt 119 [c49, r58];
  L16(r67):
    r69 = `!`(r67);
    c57 = `as.logical`(r69);
    if c57 then L675() else L17();
  L663():
    r59 = `!`(r58);
    c52 = `as.logical`(r59);
    c53 = `&&`(c49, c52);
    goto L13(c53);
  L666(r63, dx37):
    st out = dx37;
    goto L15();
  L667():
    dr26 = tryDispatchBuiltin.0("$<-", l10, TRUE);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L669() else L668(TRUE, dr26);
  L668(r61, l12):
    r64 = `$<-`(l12, <sym Maintainer_needs_quotes>, TRUE);
    goto L666(r61, r64);
  L671():
    display6 = ld display;
    check L673() else D29();
  L672():
    r66 = dyn base4(<sym display>);
    goto L16(r66);
  D29():
    deopt 131 [display6];
  L17():
    goto L18();
  L18():
    r76 = clos inner1236783023;
    st check_maintainer_address = r76;
    gsub1 = ldf gsub;
    check L681() else D31();
  L669():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L666(TRUE, dx36);
  L673():
    display7 = force? display6;
    checkMissing(display7);
    nzchar = ldf nzchar in base;
    r68 = dyn nzchar(display7);
    check L674() else D30();
  L675():
    l13 = ld out;
    c58 = `is.object`(l13);
    if c58 then L677() else L678(TRUE, l13);
  D30():
    deopt 134 [r68];
  D31():
    deopt 147 [];
  L674():
    goto L16(r68);
  L676(r73, dx39):
    st out = dx39;
    goto L18();
  L677():
    dr28 = tryDispatchBuiltin.0("$<-", l13, TRUE);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L679() else L678(TRUE, dr28);
  L678(r71, l15):
    r74 = `$<-`(l15, <sym empty_Maintainer_name>, TRUE);
    goto L676(r71, r74);
  L681():
    p14 = prom<V +>{
      meta8 = ld meta;
      meta9 = force? meta8;
      checkMissing(meta9);
      c59 = `is.object`(meta9);
      if c59 then L1() else L2(meta9);
    L0(dx41):
      return dx41;
    L1():
      dr30 = tryDispatchBuiltin.1("[", meta9);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(meta11):
      __3 = ldf `[` in base;
      r77 = dyn __3(meta11, "Maintainer");
      goto L0(r77);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx40);
    };
    r79 = dyn gsub1[, , , fixed]("\n", " ", p14, TRUE);
    check L682() else D32();
  D32():
    deopt 153 [r79];
  L679():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L676(TRUE, dx38);
  L682():
    st maintainer = r79;
    maintainer = ld maintainer;
    check L683() else D33();
  D33():
    deopt 155 [maintainer];
  L683():
    maintainer1 = force? maintainer;
    checkMissing(maintainer1);
    r80 = `!=`(maintainer1, "ORPHANED");
    c60 = `as.logical`(r80);
    if c60 then L684() else L19(c60);
  L19(c62):
    c66 = `as.logical`(c62);
    if c66 then L688() else L20();
  L684():
    check_maintainer_address = ldf check_maintainer_address;
    check L685() else D34();
  D34():
    deopt 160 [c60];
  L20():
    goto L21();
  L21():
    meta12 = ld meta;
    check L694() else D36();
  L685():
    p15 = prom<V +>{
      maintainer2 = ld maintainer;
      maintainer3 = force? maintainer2;
      checkMissing(maintainer3);
      return maintainer3;
    };
    r82 = dyn check_maintainer_address(p15);
    check L686() else D35();
  L688():
    l16 = ld out;
    c67 = `is.object`(l16);
    if c67 then L690() else L691(TRUE, l16);
  D35():
    deopt 162 [c60, r82];
  D36():
    deopt 172 [meta12];
  L686():
    r83 = `!`(r82);
    c63 = `as.logical`(r83);
    c64 = `&&`(c60, c63);
    goto L19(c64);
  L689(r87, dx43):
    st out = dx43;
    goto L21();
  L690():
    dr32 = tryDispatchBuiltin.0("$<-", l16, TRUE);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L692() else L691(TRUE, dr32);
  L691(r85, l18):
    r88 = `$<-`(l18, <sym Maintainer_invalid_or_multi_person>, TRUE);
    goto L689(r85, r88);
  L694():
    meta13 = force? meta12;
    checkMissing(meta13);
    c68 = `is.object`(meta13);
    if c68 then L695() else L696(meta13);
  L22(dx45):
    st ver = dx45;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L698() else L699();
  L692():
    dx42 = getTryDispatchBuiltinValue(dr32);
    goto L689(TRUE, dx42);
  L695():
    dr34 = tryDispatchBuiltin.1("[", meta13);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L697() else L696(dr34);
  L696(meta15):
    __4 = ldf `[` in base;
    r90 = dyn __4(meta15, "Version");
    goto L22(r90);
  L23(r92):
    c69 = `as.logical`(r92);
    if c69 then L702() else L24();
  L697():
    dx44 = getTryDispatchBuiltinValue(dr34);
    goto L22(dx44);
  L698():
    ver = ld ver;
    check L700() else D37();
  L699():
    r91 = dyn base5(<sym ver>);
    goto L23(r91);
  D37():
    deopt 180 [ver];
  L24():
    goto L25();
  L25():
    grepl2 = ldf grepl;
    check L706() else D41();
  L700():
    ver1 = force? ver;
    checkMissing(ver1);
    is_na = ldf `is.na` in base;
    r93 = dyn is_na(ver1);
    check L701() else D38();
  L702():
    stop = ldf stop;
    check L703() else D39();
  D38():
    deopt 183 [r93];
  D39():
    deopt 185 [];
  D41():
    deopt 193 [];
  L701():
    goto L23(r93);
  L703():
    r94 = dyn stop[, `call.`]("Package has no 'Version' field", FALSE);
    check L704() else D40();
  L706():
    p16 = prom<V +>{
      ver2 = ld ver;
      ver3 = force? ver2;
      checkMissing(ver3);
      return ver3;
    };
    r97 = dyn grepl2("(^|[.-])0[0-9]+", p16);
    check L707() else D42();
  D40():
    deopt 189 [r94];
  D42():
    deopt 196 [r97];
  L704():
    goto L25();
  L707():
    c70 = `as.logical`(r97);
    if c70 then L708() else L26();
  L26():
    goto L27();
  L27():
    ver11 = ld ver;
    check L715() else D44();
  L708():
    ver4 = ld ver;
    check L709() else D43();
  D43():
    deopt 197 [ver4];
  D44():
    deopt 204 [ver11];
  L709():
    ver5 = force? ver4;
    checkMissing(ver5);
    l19 = ld out;
    c71 = `is.object`(l19);
    if c71 then L711() else L712(ver5, l19);
  L715():
    ver12 = force? ver11;
    checkMissing(ver12);
    r99 = `==`(ver12, "@VERSION@");
    c72 = `as.logical`(r99);
    if c72 then L716() else L28(c72);
  L28(c74):
    c86 = `as.logical`(c74);
    if c86 then L725() else L31(c86);
  L710(ver9, dx47):
    st out = dx47;
    goto L27();
  L711():
    dr36 = tryDispatchBuiltin.0("$<-", l19, ver5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L713() else L712(ver5, dr36);
  L712(ver7, l21):
    r98 = `$<-`(l21, <sym version_with_leading_zeroes>, ver5);
    goto L710(ver7, r98);
  L716():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L717() else L718();
  L29(c77, r101):
    r104 = `!`(r101);
    c83 = `as.logical`(r104);
    c84 = `&&`(c77, c83);
    goto L28(c84);
  L31(c88):
    c97 = `as.logical`(c88);
    if c97 then L731() else L33();
  L713():
    dx46 = getTryDispatchBuiltinValue(dr36);
    goto L710(ver5, dx46);
  L717():
    meta16 = ld meta;
    check L719() else D45();
  L718():
    r100 = dyn base6(<lang `[`(meta, "Priority")>);
    goto L29(c72, r100);
  L725():
    meta20 = ld meta;
    check L726() else D47();
  D45():
    deopt 210 [c72, meta16];
  D47():
    deopt 219 [c86, meta20];
  L33():
    goto L35();
  L35():
    unlist = ldf unlist;
    check L738() else D50();
  L719():
    meta17 = force? meta16;
    checkMissing(meta17);
    c78 = `is.object`(meta17);
    if c78 then L720() else L721(c72, meta17);
  L726():
    meta21 = force? meta20;
    checkMissing(meta21);
    c89 = `is.object`(meta21);
    if c89 then L727() else L728(c86, meta21);
  L731():
    format = ldf format;
    check L732() else D48();
  D48():
    deopt 228 [];
  D50():
    deopt 240 [];
  L30(c82, dx49):
    is_na1 = ldf `is.na` in base;
    r103 = dyn is_na1(dx49);
    check L723() else D46();
  L32(c93, dx51):
    r106 = `==`(dx51, "base");
    c94 = `as.logical`(r106);
    c95 = `&&`(c93, c94);
    goto L31(c95);
  L720():
    dr38 = tryDispatchBuiltin.1("[", meta17);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L722() else L721(c72, dr38);
  L721(c80, meta19):
    __5 = ldf `[` in base;
    r102 = dyn __5(meta19, "Priority");
    goto L30(c80, r102);
  L727():
    dr40 = tryDispatchBuiltin.1("[", meta21);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L729() else L728(c86, dr40);
  L728(c91, meta23):
    __6 = ldf `[` in base;
    r105 = dyn __6(meta23, "Priority");
    goto L32(c91, r105);
  L732():
    p17 = prom<V +>{
      getRversion = ldf getRversion;
      r107 = dyn getRversion();
      return r107;
    };
    r109 = dyn format(p17);
    check L733() else D49();
  L738():
    p19 = prom<V +>{
      package_version = ldf package_version;
      p18 = prom<V +>{
        ver13 = ld ver;
        ver14 = force? ver13;
        checkMissing(ver14);
        return ver14;
      };
      r117 = dyn package_version(p18);
      return r117;
    };
    r119 = dyn unlist(p19);
    check L739() else D51();
  D46():
    deopt 216 [c82, r103];
  D49():
    deopt 230 [r109];
  D51():
    deopt 242 [r119];
  L722():
    dx48 = getTryDispatchBuiltinValue(dr38);
    goto L30(c72, dx48);
  L723():
    goto L29(c82, r103);
  L729():
    dx50 = getTryDispatchBuiltinValue(dr40);
    goto L32(c86, dx50);
  L733():
    l22 = ld meta;
    c98 = `is.object`(l22);
    if c98 then L734() else L735(r109, l22);
  L739():
    st unlisted_version = r119;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L740() else L741();
  L34(r113, dx53):
    st meta = dx53;
    st ver = r113;
    goto L35();
  L36(r121):
    c99 = `as.logical`(r121);
    if c99 then L750() else L38(c99);
  L734():
    dr42 = tryDispatchBuiltin.0("[<-", l22, r109);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L736() else L735(r109, dr42);
  L735(r111, l24):
    ___ = ldf `[<-` in base;
    r114 = dyn ___(l24, r109, "Version");
    goto L34(r111, r114);
  L740():
    unlisted_version = ld unlisted_version;
    check L742() else D52();
  L741():
    r120 = dyn base7(<lang `&`(`>=`(unlisted_version, 1234.0), `!=`(unlisted_version, as.integer(format(Sys.Date(), "%Y"))))>);
    goto L36(r120);
  D52():
    deopt 246 [unlisted_version];
  L38(c101):
    c105 = `as.logical`(c101);
    if c105 then L754() else L39();
  L736():
    dx52 = getTryDispatchBuiltinValue(dr42);
    goto L34(r109, dx52);
  L742():
    unlisted_version1 = force? unlisted_version;
    checkMissing(unlisted_version1);
    r122 = `>=`(unlisted_version1, 1234.0);
    unlisted_version2 = ld unlisted_version;
    check L743() else D53();
  L750():
    config_val_to_logical = ldf config_val_to_logical;
    check L751() else D58();
  D53():
    deopt 249 [r122, unlisted_version2];
  D58():
    deopt 264 [c99];
  L39():
    goto L40();
  L40():
    r140 = clos inner1777898462;
    st `.aspell_package_description_for_CRAN` = r140;
    meta24 = ld meta;
    check L761() else D61();
  L743():
    unlisted_version3 = force? unlisted_version2;
    checkMissing(unlisted_version3);
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L744() else L745();
  L751():
    p21 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r135 = dyn Sys_getenv("_R_CHECK_CRAN_INCOMING_SKIP_LARGE_VERSION_", "FALSE");
      return r135;
    };
    r137 = dyn config_val_to_logical(p21);
    check L752() else D59();
  L754():
    ver15 = ld ver;
    check L755() else D60();
  D59():
    deopt 266 [c99, r137];
  D60():
    deopt 269 [ver15];
  D61():
    deopt 279 [meta24];
  L37(r126, unlisted_version6, r127):
    r132 = `!=`(unlisted_version6, r127);
    r133 = `&&`(r126, r132);
    any1 = ldf any in base;
    r134 = dyn any1(r133);
    check L749() else D57();
  L744():
    format1 = ldf format;
    check L746() else D54();
  L745():
    r125 = dyn base8(<lang format(Sys.Date(), "%Y")>);
    goto L37(r122, unlisted_version3, r125);
  L752():
    r138 = `!`(r137);
    c102 = `as.logical`(r138);
    c103 = `&&`(c99, c102);
    goto L38(c103);
  L755():
    ver16 = force? ver15;
    checkMissing(ver16);
    l25 = ld out;
    c106 = `is.object`(l25);
    if c106 then L757() else L758(ver16, l25);
  L761():
    meta25 = force? meta24;
    checkMissing(meta25);
    c107 = `is.object`(meta25);
    if c107 then L762() else L763(meta25);
  D54():
    deopt 253 [r122, unlisted_version3];
  D57():
    deopt 262 [r134];
  L41(dx57):
    st language = dx57;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L765() else L766();
  L746():
    p20 = prom<V +>{
      Sys_Date = ldf `Sys.Date`;
      r128 = dyn Sys_Date();
      return r128;
    };
    r130 = dyn format1(p20, "%Y");
    check L747() else D55();
  L749():
    goto L36(r134);
  L756(ver20, dx55):
    st out = dx55;
    goto L40();
  L757():
    dr44 = tryDispatchBuiltin.0("$<-", l25, ver16);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L759() else L758(ver16, dr44);
  L758(ver18, l27):
    r139 = `$<-`(l27, <sym version_with_large_components>, ver16);
    goto L756(ver18, r139);
  L762():
    dr46 = tryDispatchBuiltin.1("[", meta25);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L764() else L763(dr46);
  L763(meta27):
    __7 = ldf `[` in base;
    r141 = dyn __7(meta27, "Language");
    goto L41(r141);
  D55():
    deopt 256 [r122, unlisted_version3, r130];
  L42(r143):
    c108 = `as.logical`(r143);
    if c108 then L43(c108) else L769();
  L747():
    as_integer = ldf `as.integer` in base;
    r131 = dyn as_integer(r130);
    check L748() else D56();
  L759():
    dx54 = getTryDispatchBuiltinValue(dr44);
    goto L756(ver16, dx54);
  L764():
    dx56 = getTryDispatchBuiltinValue(dr46);
    goto L41(dx56);
  L765():
    language = ld language;
    check L767() else D62();
  L766():
    r142 = dyn base9(<sym language>);
    goto L42(r142);
  D56():
    deopt 258 [r122, unlisted_version3, r131];
  D62():
    deopt 287 [language];
  L43(c109):
    c114 = `as.logical`(c109);
    if c114 then L44(c114) else L772();
  L748():
    goto L37(r122, unlisted_version3, r131);
  L767():
    language1 = force? language;
    checkMissing(language1);
    is_na2 = ldf `is.na` in base;
    r144 = dyn is_na2(language1);
    check L768() else D63();
  L769():
    language2 = ld language;
    check L770() else D64();
  D63():
    deopt 290 [r144];
  D64():
    deopt 291 [c108, language2];
  L44(c115):
    c120 = `as.logical`(c115);
    if c120 then L776() else L45(c120);
  L768():
    goto L42(r144);
  L770():
    language3 = force? language2;
    checkMissing(language3);
    r145 = `==`(language3, "en");
    c111 = `as.logical`(r145);
    c112 = `||`(c108, c111);
    goto L43(c112);
  L772():
    startsWith = ldf startsWith;
    check L773() else D65();
  D65():
    deopt 297 [c114];
  L45(c122):
    c126 = `as.logical`(c122);
    if c126 then L780() else L46();
  L773():
    p22 = prom<V +>{
      language4 = ld language;
      language5 = force? language4;
      checkMissing(language5);
      return language5;
    };
    r147 = dyn startsWith(p22, "en-");
    check L774() else D66();
  L776():
    config_val_to_logical1 = ldf config_val_to_logical;
    check L777() else D67();
  D66():
    deopt 300 [c114, r147];
  D67():
    deopt 303 [c120];
  L46():
    goto L51();
  L51():
    r171 = clos inner3964289976;
    st parse_description_field = r171;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L805() else L806();
  L774():
    c117 = `as.logical`(r147);
    c118 = `||`(c114, c117);
    goto L44(c118);
  L777():
    p23 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r148 = dyn Sys_getenv1("_R_CHECK_CRAN_INCOMING_USE_ASPELL_", "FALSE");
      return r148;
    };
    r150 = dyn config_val_to_logical1(p23);
    check L778() else D68();
  L780():
    tryCatch = ldf tryCatch;
    check L781() else D69();
  D68():
    deopt 305 [c120, r150];
  D69():
    deopt 308 [];
  L52(r173):
    st nms = r173;
    _get_standard_DESCRIPTION_fields = ldf `.get_standard_DESCRIPTION_fields`;
    check L809() else D80();
  L778():
    c123 = `as.logical`(r150);
    c124 = `&&`(c120, c123);
    goto L45(c124);
  L781():
    p25 = prom<V +>{
      _aspell_package_description_for_CRAN = ldf `.aspell_package_description_for_CRAN`;
      p24 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r152 = dyn _aspell_package_description_for_CRAN(p24);
      return r152;
    };
    p26 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r155 = dyn tryCatch[, error](p25, p26);
    check L782() else D70();
  L805():
    meta28 = ld meta;
    check L807() else D78();
  L806():
    r172 = dyn base11(<sym meta>);
    goto L52(r172);
  D70():
    deopt 312 [r155];
  D78():
    deopt 347 [meta28];
  D80():
    deopt 353 [];
  L782():
    st a = r155;
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L783() else L784();
  L807():
    meta29 = force? meta28;
    checkMissing(meta29);
    names = ldf names in base;
    r174 = dyn names(meta29);
    check L808() else D79();
  L809():
    r175 = dyn _get_standard_DESCRIPTION_fields();
    check L810() else D81();
  D79():
    deopt 350 [r174];
  D81():
    deopt 354 [r175];
  L47(r157):
    c127 = `as.logical`(r157);
    if c127 then L787() else L48();
  L783():
    a = ld a;
    check L785() else D71();
  L784():
    r156 = dyn base10(<sym a>, "error");
    goto L47(r156);
  L808():
    goto L52(r174);
  L810():
    st stdNms = r175;
    nms = ld nms;
    check L811() else D82();
  D71():
    deopt 316 [a];
  D82():
    deopt 356 [nms];
  L48():
    NROW = ldf NROW;
    check L795() else D75();
  L49(r166):
    goto L51();
  L785():
    a1 = force? a;
    checkMissing(a1);
    inherits = ldf inherits in base;
    r158 = dyn inherits(a1, "error", FALSE);
    check L786() else D72();
  L787():
    conditionMessage = ldf conditionMessage;
    check L788() else D73();
  L811():
    nms1 = force? nms;
    checkMissing(nms1);
    c131 = `is.object`(nms1);
    if c131 then L812() else L813(nms1);
  D72():
    deopt 321 [r158];
  D73():
    deopt 323 [];
  D75():
    deopt 330 [];
  L53(dx63):
    st nms = dx63;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L819() else L820();
  L786():
    goto L47(r158);
  L788():
    p27 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    r160 = dyn conditionMessage(p27);
    check L789() else D74();
  L795():
    p28 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    r168 = dyn NROW(p28);
    check L796() else D76();
  L812():
    dr52 = tryDispatchBuiltin.1("[", nms1);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L814() else L813(dr52);
  L813(nms3):
    _notin_ = ldf `%notin%`;
    check L815() else D83();
  D74():
    deopt 325 [r160];
  D76():
    deopt 332 [r168];
  D83():
    deopt 359 [nms3];
  L54(r193):
    c133 = `as.logical`(r193);
    if c133 then L823() else L55(c133);
  L789():
    l28 = ld out;
    c128 = `is.object`(l28);
    if c128 then L791() else L792(r160, l28);
  L796():
    c129 = `as.logical`(r168);
    if c129 then L797() else L50();
  L814():
    dx62 = getTryDispatchBuiltinValue(dr52);
    goto L53(dx62);
  L815():
    p29 = prom<V +>{
      nms4 = ld nms;
      nms5 = force? nms4;
      checkMissing(nms5);
      return nms5;
    };
    p30 = prom<V +>{
      stdNms = ld stdNms;
      stdNms1 = force? stdNms;
      checkMissing(stdNms1);
      return stdNms1;
    };
    r178 = dyn _notin_(p29, p30);
    check L816() else D84();
  L819():
    nms8 = ld nms;
    check L821() else D87();
  L820():
    r192 = dyn base13(<sym nms>);
    goto L54(r192);
  D84():
    deopt 362 [nms3, r178];
  D87():
    deopt 373 [nms8];
  L50():
    goto L49(NULL);
  L55(c135):
    c147 = `as.logical`(c135);
    if c147 then L834() else L58();
  L790(r164, dx59):
    st out = dx59;
    goto L49(r164);
  L791():
    dr48 = tryDispatchBuiltin.0("$<-", l28, r160);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L793() else L792(r160, dr48);
  L792(r162, l30):
    r165 = `$<-`(l30, <sym aspell_package_description_error>, r160);
    goto L790(r162, r165);
  L797():
    a6 = ld a;
    check L798() else D77();
  L816():
    grepl3 = ldf grepl;
    check L817() else D85();
  L821():
    nms9 = force? nms8;
    checkMissing(nms9);
    length4 = ldf length in base;
    r194 = dyn length4(nms9);
    check L822() else D88();
  L823():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L824() else L825();
  D77():
    deopt 333 [a6];
  D85():
    deopt 363 [nms3, r178];
  D88():
    deopt 376 [r194];
  L56(c138, r196):
    c144 = `as.logical`(r196);
    c145 = `&&`(c138, c144);
    goto L55(c145);
  L58():
    goto L59();
  L59():
    character = ldf character;
    check L841() else D94();
  L793():
    dx58 = getTryDispatchBuiltinValue(dr48);
    goto L790(r160, dx58);
  L798():
    a7 = force? a6;
    checkMissing(a7);
    l31 = ld out;
    c130 = `is.object`(l31);
    if c130 then L800() else L801(a7, l31);
  L817():
    p33 = prom<V +>{
      paste0 = ldf paste0;
      p32 = prom<V +>{
        paste1 = ldf paste;
        p31 = prom<V +>{
          sym12 = ldf c;
          base12 = ldf c in base;
          guard12 = `==`.4(sym12, base12);
          if guard12 then L1() else L2();
        L0(r180):
          return r180;
        L1():
          c132 = ldf c in base;
          r181 = dyn c132("X-CRAN", "X-schema.org", "Repository/R-Forge", "VCS/", "Config/");
          goto L0(r181);
        L2():
          r179 = dyn base12("X-CRAN", "X-schema.org", "Repository/R-Forge", "VCS/", "Config/");
          goto L0(r179);
        };
        r183 = dyn paste1[, collapse](p31, "|");
        return r183;
      };
      r185 = dyn paste0("^(", p32, ")");
      return r185;
    };
    p34 = prom<V +>{
      nms6 = ld nms;
      nms7 = force? nms6;
      checkMissing(nms7);
      return nms7;
    };
    r188 = dyn grepl3(p33, p34);
    check L818() else D86();
  L822():
    goto L54(r194);
  L824():
    nms10 = ld nms;
    check L826() else D89();
  L825():
    r195 = dyn base14(<lang `<-`(nms, `[`(nms, `%notin%`(nms, paste0(stdNms, "Note"))))>);
    goto L56(c133, r195);
  L834():
    nms16 = ld nms;
    check L835() else D93();
  D86():
    deopt 366 [nms3, r178, r188];
  D89():
    deopt 379 [c133, nms10];
  D93():
    deopt 391 [nms16];
  D94():
    deopt 399 [];
  L799(a11, dx61):
    st out = dx61;
    goto L49(a11);
  L800():
    dr50 = tryDispatchBuiltin.0("$<-", l31, a7);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L802() else L801(a7, dr50);
  L801(a9, l33):
    r169 = `$<-`(l33, <sym spelling>, a7);
    goto L799(a9, r169);
  L818():
    r189 = `!`(r188);
    r190 = `&&`(r178, r189);
    __8 = ldf `[` in base;
    r191 = dyn __8(nms3, r190);
    goto L53(r191);
  L826():
    nms11 = force? nms10;
    checkMissing(nms11);
    c139 = `is.object`(nms11);
    if c139 then L827() else L828(c133, nms11);
  L835():
    nms17 = force? nms16;
    checkMissing(nms17);
    l34 = ld out;
    c148 = `is.object`(l34);
    if c148 then L837() else L838(nms17, l34);
  L841():
    r205 = dyn character();
    check L842() else D95();
  D95():
    deopt 400 [r205];
  L57(c143, dx65):
    st nms = dx65;
    length5 = ldf length in base;
    r203 = dyn length5(dx65);
    check L832() else D92();
  L802():
    dx60 = getTryDispatchBuiltinValue(dr50);
    goto L799(a7, dx60);
  L827():
    dr54 = tryDispatchBuiltin.1("[", nms11);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L829() else L828(c133, dr54);
  L828(c141, nms13):
    _notin_1 = ldf `%notin%`;
    check L830() else D90();
  L836(nms21, dx67):
    st out = dx67;
    goto L59();
  L837():
    dr56 = tryDispatchBuiltin.0("$<-", l34, nms17);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L839() else L838(nms17, dr56);
  L838(nms19, l36):
    r204 = `$<-`(l36, <sym fields>, nms17);
    goto L836(nms19, r204);
  L842():
    st ACM = r205;
    st BUGS = r205;
    st uses = r205;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L843() else L844();
  D90():
    deopt 382 [c141, nms13];
  D92():
    deopt 389 [c143, r203];
  L60(r207):
    s = toForSeq(r207);
    l37 = length(s);
    i = 0;
    goto L61(i);
  L829():
    dx64 = getTryDispatchBuiltinValue(dr54);
    goto L57(c133, dx64);
  L830():
    p35 = prom<V +>{
      nms14 = ld nms;
      nms15 = force? nms14;
      checkMissing(nms15);
      return nms15;
    };
    p37 = prom<V +>{
      paste2 = ldf paste0;
      p36 = prom<V +>{
        stdNms2 = ld stdNms;
        stdNms3 = force? stdNms2;
        checkMissing(stdNms3);
        return stdNms3;
      };
      r199 = dyn paste2(p36, "Note");
      return r199;
    };
    r201 = dyn _notin_1(p35, p37);
    check L831() else D91();
  L832():
    goto L56(c143, r203);
  L839():
    dx66 = getTryDispatchBuiltinValue(dr56);
    goto L836(nms17, dx66);
  L843():
    c149 = ldf c in base;
    r208 = dyn c149("Depends", "Imports", "Suggests");
    check L845() else D96();
  L844():
    r206 = dyn base15("Depends", "Imports", "Suggests");
    goto L60(r206);
  D91():
    deopt 385 [c141, nms13, r201];
  D96():
    deopt 410 [r208];
  L61(i1):
    i2 = `+`.1(i1, 1);
    c150 = `<`.1(l37, i2);
    if c150 then L846() else L66();
  L831():
    __9 = ldf `[` in base;
    r202 = dyn __9(nms13, r201);
    goto L57(c141, r202);
  L845():
    goto L60(r208);
  L66():
    x = `[[`(s, i2, NULL, TRUE);
    st field = x;
    strsplit = ldf strsplit;
    check L847() else D97();
  L846():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L873() else L874();
  D97():
    deopt 412 [i2];
  L67(r231):
    c156 = `as.logical`(r231);
    if c156 then L877() else L68();
  L847():
    p38 = prom<V +>{
      meta30 = ld meta;
      meta31 = force? meta30;
      checkMissing(meta31);
      c151 = `is.object`(meta31);
      if c151 then L1() else L2(meta31);
    L0(dx69):
      return dx69;
    L1():
      dr58 = tryDispatchBuiltin.1("[", meta31);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(meta33):
      field = ld field;
      field1 = force? field;
      __10 = ldf `[` in base;
      r209 = dyn __10(meta33, field1);
      goto L0(r209);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx68);
    };
    r211 = dyn strsplit(p38, " *, *");
    check L848() else D98();
  L873():
    uses2 = ld uses;
    check L875() else D114();
  L874():
    r230 = dyn base19(<sym uses>);
    goto L67(r230);
  D98():
    deopt 415 [i2, r211];
  D114():
    deopt 476 [uses2];
  L68():
    goto L69();
  L69():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L885() else L886();
  L848():
    c152 = `is.object`(r211);
    if c152 then L849() else L850(i2, r211);
  L875():
    uses3 = force? uses2;
    checkMissing(uses3);
    length6 = ldf length in base;
    r232 = dyn length6(uses3);
    check L876() else D115();
  L877():
    sort = ldf sort;
    check L878() else D116();
  D115():
    deopt 479 [r232];
  D116():
    deopt 481 [];
  L62(i8, dx71):
    st p = dx71;
    grep = ldf grep;
    check L852() else D99();
  L70(r246):
    c158 = `as.logical`(r246);
    if c158 then L889() else L71();
  L849():
    dr60 = tryDispatchBuiltin.1("[[", r211);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L851() else L850(i2, dr60);
  L850(i6, r213):
    __11 = ldf `[[` in base;
    r214 = dyn __11(r213, 1);
    goto L62(i6, r214);
  L876():
    goto L67(r232);
  L878():
    p56 = prom<V +>{
      unique = ldf unique;
      p55 = prom<V +>{
        gsub2 = ldf gsub;
        p54 = prom<V +>{
          uses4 = ld uses;
          uses5 = force? uses4;
          checkMissing(uses5);
          return uses5;
        };
        r234 = dyn gsub2("[[:space:]]+", " ", p54);
        return r234;
      };
      r236 = dyn unique(p55);
      return r236;
    };
    r238 = dyn sort(p56);
    check L879() else D117();
  L885():
    BUGS2 = ld BUGS;
    check L887() else D118();
  L886():
    r245 = dyn base20(<sym BUGS>);
    goto L70(r245);
  D99():
    deopt 421 [i8];
  D117():
    deopt 483 [r238];
  D118():
    deopt 491 [BUGS2];
  L71():
    goto L72();
  L72():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L897() else L898();
  L851():
    dx70 = getTryDispatchBuiltinValue(dr60);
    goto L62(i2, dx70);
  L852():
    p41 = prom<V +>{
      p39 = ld p;
      p40 = force? p39;
      checkMissing(p40);
      return p40;
    };
    r216 = dyn grep[, , value]("^(multicore|snow|doSNOW)( |\\(|$)", p41, TRUE);
    check L853() else D100();
  L879():
    l38 = ld out;
    c157 = `is.object`(l38);
    if c157 then L881() else L882(r238, l38);
  L887():
    BUGS3 = force? BUGS2;
    checkMissing(BUGS3);
    length7 = ldf length in base;
    r247 = dyn length7(BUGS3);
    check L888() else D119();
  L889():
    sort1 = ldf sort;
    check L890() else D120();
  D100():
    deopt 426 [i8, r216];
  D119():
    deopt 494 [r247];
  D120():
    deopt 496 [];
  L73(r261):
    c160 = `as.logical`(r261);
    if c160 then L901() else L74();
  L853():
    st p2 = r216;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L854() else L855();
  L880(r242, dx73):
    st out = dx73;
    goto L69();
  L881():
    dr62 = tryDispatchBuiltin.0("$<-", l38, r238);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L883() else L882(r238, dr62);
  L882(r240, l40):
    r243 = `$<-`(l40, <sym uses>, r238);
    goto L880(r240, r243);
  L888():
    goto L70(r247);
  L890():
    p59 = prom<V +>{
      unique1 = ldf unique;
      p58 = prom<V +>{
        gsub3 = ldf gsub;
        p57 = prom<V +>{
          BUGS4 = ld BUGS;
          BUGS5 = force? BUGS4;
          checkMissing(BUGS5);
          return BUGS5;
        };
        r249 = dyn gsub3("[[:space:]]+", " ", p57);
        return r249;
      };
      r251 = dyn unique1(p58);
      return r251;
    };
    r253 = dyn sort1(p59);
    check L891() else D121();
  L897():
    ACM2 = ld ACM;
    check L899() else D122();
  L898():
    r260 = dyn base21(<sym ACM>);
    goto L73(r260);
  D121():
    deopt 498 [r253];
  D122():
    deopt 506 [ACM2];
  L63(i11, r218):
    st uses = r218;
    grep1 = ldf grep;
    check L859() else D104();
  L74():
    goto L75();
  L75():
    character1 = ldf character;
    check L909() else D126();
  L854():
    uses = ld uses;
    check L856() else D101();
  L855():
    r217 = dyn base16(<sym uses>, <sym p2>);
    goto L63(i8, r217);
  L883():
    dx72 = getTryDispatchBuiltinValue(dr62);
    goto L880(r238, dx72);
  L891():
    l41 = ld out;
    c159 = `is.object`(l41);
    if c159 then L893() else L894(r253, l41);
  L899():
    ACM3 = force? ACM2;
    checkMissing(ACM3);
    length8 = ldf length in base;
    r262 = dyn length8(ACM3);
    check L900() else D123();
  L901():
    sort2 = ldf sort;
    check L902() else D124();
  D101():
    deopt 430 [i8, uses];
  D104():
    deopt 438 [i11];
  D123():
    deopt 509 [r262];
  D124():
    deopt 511 [];
  D126():
    deopt 520 [];
  L856():
    uses1 = force? uses;
    checkMissing(uses1);
    p42 = ld p2;
    check L857() else D102();
  L859():
    p46 = prom<V +>{
      p44 = ld p;
      p45 = force? p44;
      checkMissing(p45);
      return p45;
    };
    r221 = dyn grep1[, , value]("^(BRugs|R2OpenBUGS|mzR|xcms|MSnbase)( |\\(|$)", p46, TRUE);
    check L860() else D105();
  L892(r257, dx75):
    st out = dx75;
    goto L72();
  L893():
    dr64 = tryDispatchBuiltin.0("$<-", l41, r253);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L895() else L894(r253, dr64);
  L894(r255, l43):
    r258 = `$<-`(l43, <sym BUGS>, r253);
    goto L892(r255, r258);
  L900():
    goto L73(r262);
  L902():
    p62 = prom<V +>{
      unique2 = ldf unique;
      p61 = prom<V +>{
        gsub4 = ldf gsub;
        p60 = prom<V +>{
          ACM4 = ld ACM;
          ACM5 = force? ACM4;
          checkMissing(ACM5);
          return ACM5;
        };
        r264 = dyn gsub4("[[:space:]]+", " ", p60);
        return r264;
      };
      r266 = dyn unique2(p61);
      return r266;
    };
    r268 = dyn sort2(p62);
    check L903() else D125();
  L909():
    r275 = dyn character1();
    check L910() else D127();
  D102():
    deopt 432 [i8, p42];
  D105():
    deopt 443 [i11, r221];
  D125():
    deopt 513 [r268];
  D127():
    deopt 521 [r275];
  L857():
    p43 = force? p42;
    checkMissing(p43);
    c153 = ldf c in base;
    r219 = dyn c153(uses1, p43);
    check L858() else D103();
  L860():
    st p2 = r221;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L861() else L862();
  L895():
    dx74 = getTryDispatchBuiltinValue(dr64);
    goto L892(r253, dx74);
  L903():
    l44 = ld out;
    c161 = `is.object`(l44);
    if c161 then L905() else L906(r268, l44);
  L910():
    st vds = r275;
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L911() else L912();
  D103():
    deopt 435 [i8, r219];
  L64(i14, r223):
    st BUGS = r223;
    grep2 = ldf grep;
    check L866() else D109();
  L76(r277):
    r280 = `!`(r277);
    c163 = `as.logical`(r280);
    if c163 then L918() else L78();
  L858():
    goto L63(i8, r219);
  L861():
    BUGS = ld BUGS;
    check L863() else D106();
  L862():
    r222 = dyn base17(<sym BUGS>, <sym p2>);
    goto L64(i11, r222);
  L904(r272, dx77):
    st out = dx77;
    goto L75();
  L905():
    dr66 = tryDispatchBuiltin.0("$<-", l44, r268);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L907() else L906(r268, dr66);
  L906(r270, l46):
    r273 = `$<-`(l46, <sym ACM>, r268);
    goto L904(r270, r273);
  L911():
    meta34 = ld meta;
    check L913() else D128();
  L912():
    r276 = dyn base22(<lang `[`(meta, "VignetteBuilder")>);
    goto L76(r276);
  D106():
    deopt 447 [i11, BUGS];
  D109():
    deopt 455 [i14];
  D128():
    deopt 525 [meta34];
  L78():
    goto L82();
  L82():
    tryCatch1 = ldf tryCatch;
    check L933() else D134();
  L863():
    BUGS1 = force? BUGS;
    checkMissing(BUGS1);
    p47 = ld p2;
    check L864() else D107();
  L866():
    p51 = prom<V +>{
      p49 = ld p;
      p50 = force? p49;
      checkMissing(p50);
      return p50;
    };
    r226 = dyn grep2[, , value]("^(Akima|tripack)( |\\(|$)", p51, TRUE);
    check L867() else D110();
  L907():
    dx76 = getTryDispatchBuiltinValue(dr66);
    goto L904(r268, dx76);
  L913():
    meta35 = force? meta34;
    checkMissing(meta35);
    c162 = `is.object`(meta35);
    if c162 then L914() else L915(meta35);
  L918():
    file_exists = ldf `file.exists`;
    check L919() else D130();
  D107():
    deopt 449 [i11, p47];
  D110():
    deopt 460 [i14, r226];
  D130():
    deopt 534 [];
  D134():
    deopt 555 [];
  L77(dx79):
    is_na3 = ldf `is.na` in base;
    r279 = dyn is_na3(dx79);
    check L917() else D129();
  L864():
    p48 = force? p47;
    checkMissing(p48);
    c154 = ldf c in base;
    r224 = dyn c154(BUGS1, p48);
    check L865() else D108();
  L867():
    st p2 = r226;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L868() else L869();
  L914():
    dr68 = tryDispatchBuiltin.1("[", meta35);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L916() else L915(dr68);
  L915(meta37):
    __12 = ldf `[` in base;
    r278 = dyn __12(meta37, "VignetteBuilder");
    goto L77(r278);
  L919():
    p64 = prom<V +>{
      file_path = ldf `file.path`;
      p63 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r282 = dyn file_path(p63, "build", "vignette.rds");
      st vds = r282;
      invisible.0();
      return r282;
    };
    r284 = dyn file_exists(p64);
    check L920() else D131();
  L933():
    p68 = prom<V +>{
      _build_Rd_db = ldf `.build_Rd_db`;
      p66 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      p67 = prom<V +>{
        sym23 = ldf c;
        base23 = ldf c in base;
        guard23 = `==`.4(sym23, base23);
        if guard23 then L1() else L2();
      L0(r300):
        return r300;
      L1():
        c167 = ldf c in base;
        r301 = dyn c167("unix", "windows");
        goto L0(r301);
      L2():
        r299 = dyn base23("unix", "windows");
        goto L0(r299);
      };
      r303 = dyn _build_Rd_db[, stages, os, step](p66, NULL, p67, 2.0);
      return r303;
    };
    p69 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    r306 = dyn tryCatch1[, error](p68, p69);
    check L934() else D135();
  D108():
    deopt 452 [i11, r224];
  D129():
    deopt 531 [r279];
  D131():
    deopt 536 [r284];
  D135():
    deopt 559 [r306];
  L65(i17, r228):
    st ACM = r228;
    goto L61(i17);
  L865():
    goto L64(i11, r224);
  L868():
    ACM = ld ACM;
    check L870() else D111();
  L869():
    r227 = dyn base18(<sym ACM>, <sym p2>);
    goto L65(i14, r227);
  L916():
    dx78 = getTryDispatchBuiltinValue(dr68);
    goto L77(dx78);
  L917():
    goto L76(r279);
  L920():
    r285 = `!`(r284);
    c164 = `as.logical`(r285);
    if c164 then L921() else L79();
  L934():
    st Rdb = r306;
    sym24 = ldf inherits;
    base24 = ldf inherits in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L935() else L936();
  D111():
    deopt 464 [i14, ACM];
  L79():
    readRDS = ldf readRDS;
    check L927() else D132();
  L80(r291):
    goto L82();
  L83(r308):
    c168 = `as.logical`(r308);
    if c168 then L939() else L84();
  L870():
    ACM1 = force? ACM;
    checkMissing(ACM1);
    p52 = ld p2;
    check L871() else D112();
  L921():
    l47 = ld out;
    c165 = `is.object`(l47);
    if c165 then L923() else L924(TRUE, l47);
  L935():
    Rdb = ld Rdb;
    check L937() else D136();
  L936():
    r307 = dyn base24(<sym Rdb>, "error");
    goto L83(r307);
  D112():
    deopt 466 [i14, p52];
  D132():
    deopt 544 [];
  D136():
    deopt 563 [Rdb];
  L84():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L947() else L948();
  L85():
    file_path5 = ldf `file.path`;
    check L1075() else D200();
  L871():
    p53 = force? p52;
    checkMissing(p53);
    c155 = ldf c in base;
    r229 = dyn c155(ACM1, p53);
    check L872() else D113();
  L922(r289, dx81):
    st out = dx81;
    goto L80(r289);
  L923():
    dr70 = tryDispatchBuiltin.0("$<-", l47, TRUE);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L925() else L924(TRUE, dr70);
  L924(r287, l49):
    r290 = `$<-`(l49, <sym missing_vignette_index>, TRUE);
    goto L922(r287, r290);
  L927():
    p65 = prom<V +>{
      vds = ld vds;
      vds1 = force? vds;
      checkMissing(vds1);
      return vds1;
    };
    r293 = dyn readRDS(p65);
    check L928() else D133();
  L937():
    Rdb1 = force? Rdb;
    checkMissing(Rdb1);
    inherits1 = ldf inherits in base;
    r309 = dyn inherits1(Rdb1, "error", FALSE);
    check L938() else D137();
  L939():
    conditionMessage1 = ldf conditionMessage;
    check L940() else D138();
  D113():
    deopt 469 [i14, r229];
  D133():
    deopt 546 [r293];
  D137():
    deopt 568 [r309];
  D138():
    deopt 570 [];
  D200():
    deopt 795 [];
  L86(r319):
    c170 = `as.logical`(r319);
    if c170 then L951() else L87();
  L872():
    goto L65(i14, r229);
  L925():
    dx80 = getTryDispatchBuiltinValue(dr70);
    goto L922(TRUE, dx80);
  L928():
    c166 = `is.object`(r293);
    if c166 then L929() else L930();
  L938():
    goto L83(r309);
  L940():
    p70 = prom<V +>{
      Rdb2 = ld Rdb;
      Rdb3 = force? Rdb2;
      checkMissing(Rdb3);
      return Rdb3;
    };
    r311 = dyn conditionMessage1(p70);
    check L941() else D139();
  L947():
    Rdb4 = ld Rdb;
    check L949() else D140();
  L948():
    r318 = dyn base25(<sym Rdb>);
    goto L86(r318);
  L1075():
    p105 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r464 = dyn file_path5(p105, "vignettes");
    check L1076() else D201();
  D139():
    deopt 572 [r311];
  D140():
    deopt 578 [Rdb4];
  D201():
    deopt 798 [r464];
  L81(dx83):
    st vds = dx83;
    goto L80(dx83);
  L87():
    goto L85();
  L929():
    dr72 = tryDispatchBuiltin.1("[", r293);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L931() else L930();
  L930():
    __13 = ldf `[` in base;
    r296 = dyn __13(r293, <missing>, "File");
    goto L81(r296);
  L941():
    l50 = ld out;
    c169 = `is.object`(l50);
    if c169 then L943() else L944(r311, l50);
  L949():
    Rdb5 = force? Rdb4;
    checkMissing(Rdb5);
    length9 = ldf length in base;
    r320 = dyn length9(Rdb5);
    check L950() else D141();
  L951():
    substring = ldf substring;
    check L952() else D142();
  L1076():
    st vign_dir = r464;
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L1077() else L1078();
  D141():
    deopt 581 [r320];
  D142():
    deopt 583 [];
  L114(r466):
    c205 = `as.logical`(r466);
    if c205 then L1081() else L115();
  L931():
    dx82 = getTryDispatchBuiltinValue(dr72);
    goto L81(dx82);
  L942(r315, dx85):
    st out = dx85;
    goto L85();
  L943():
    dr74 = tryDispatchBuiltin.0("$<-", l50, r311);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L945() else L944(r311, dr74);
  L944(r313, l52):
    r316 = `$<-`(l52, <sym Rd_db_build_error>, r311);
    goto L942(r313, r316);
  L950():
    goto L86(r320);
  L952():
    p71 = prom<V +>{
      sym26 = ldf names;
      base26 = ldf names in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r322):
      return r322;
    L1():
      Rdb6 = ld Rdb;
      Rdb7 = force? Rdb6;
      checkMissing(Rdb7);
      names1 = ldf names in base;
      r323 = dyn names1(Rdb7);
      goto L0(r323);
    L2():
      r321 = dyn base26(<sym Rdb>);
      goto L0(r321);
    };
    p73 = prom<V +>{
      sym27 = ldf nchar;
      base27 = ldf nchar in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r326):
      r330 = `+`(r326, 2);
      return r330;
    L1():
      file_path1 = ldf `file.path`;
      p72 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r328 = dyn file_path1(p72, "man");
      nchar = ldf nchar in base;
      r329 = dyn nchar(r328, "chars", FALSE, NA_LGL);
      goto L0(r329);
    L2():
      r325 = dyn base27(<lang file.path(dir, "man")>);
      goto L0(r325);
    };
    r332 = dyn substring(p71, p73);
    check L953() else D143();
  L1077():
    vds2 = ld vds;
    check L1079() else D202();
  L1078():
    r465 = dyn base36(<sym vds>);
    goto L114(r465);
  D143():
    deopt 586 [r332];
  D202():
    deopt 802 [vds2];
  L115():
    vignetteEngine = ldf vignetteEngine;
    check L1087() else D208();
  L116():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L1095() else L1096();
  L945():
    dx84 = getTryDispatchBuiltinValue(dr74);
    goto L942(r311, dx84);
  L953():
    l53 = ld Rdb;
    names__ = ldf `names<-`;
    check L954() else D144();
  L1079():
    vds3 = force? vds2;
    checkMissing(vds3);
    length20 = ldf length in base;
    r467 = dyn length20(vds3);
    check L1080() else D203();
  L1081():
    setdiff = ldf setdiff;
    check L1082() else D204();
  D144():
    deopt 588 [r332, l53, r332];
  D203():
    deopt 805 [r467];
  D204():
    deopt 807 [];
  D208():
    deopt 819 [];
  L117(r497):
    c207 = `as.logical`(r497);
    if c207 then L1099() else L118();
  L954():
    r333 = dyn names__(l53, NULL, r332);
    check L955() else D145();
  L1080():
    goto L114(r467);
  L1082():
    p108 = prom<V +>{
      list_files = ldf `list.files`;
      p107 = prom<V +>{
        file_path6 = ldf `file.path`;
        p106 = prom<V +>{
          dir21 = ld dir;
          dir22 = force? dir21;
          checkMissing(dir22);
          return dir22;
        };
        r469 = dyn file_path6(p106, "inst", "doc");
        return r469;
      };
      r471 = dyn list_files(p107);
      return r471;
    };
    p110 = prom<V +>{
      list_files1 = ldf `list.files`;
      p109 = prom<V +>{
        vign_dir = ld vign_dir;
        vign_dir1 = force? vign_dir;
        checkMissing(vign_dir1);
        return vign_dir1;
      };
      r474 = dyn list_files1(p109);
      return r474;
    };
    r476 = dyn setdiff(p108, p110);
    check L1083() else D205();
  L1087():
    r481 = dyn vignetteEngine("Sweave");
    check L1088() else D209();
  L1095():
    sources2 = ld sources;
    check L1097() else D212();
  L1096():
    r496 = dyn base37(<sym sources>);
    goto L117(r496);
  D145():
    deopt 590 [r332, r333];
  D205():
    deopt 810 [r476];
  D209():
    deopt 821 [r481];
  D212():
    deopt 832 [sources2];
  L118():
    goto L119();
  L119():
    foss = ld foss;
    check L1112() else D217();
  L955():
    st Rdb = r333;
    Rdb8 = ld Rdb;
    check L956() else D146();
  L1083():
    st sources = r476;
    intersect = ldf intersect;
    check L1084() else D206();
  L1088():
    c206 = `is.object`(r481);
    if c206 then L1090() else L1091(r481);
  L1097():
    sources3 = force? sources2;
    checkMissing(sources3);
    length21 = ldf length in base;
    r498 = dyn length21(sources3);
    check L1098() else D213();
  L1099():
    dir_exists = ldf `dir.exists`;
    check L1100() else D214();
  D146():
    deopt 592 [Rdb8];
  D206():
    deopt 813 [];
  D213():
    deopt 835 [r498];
  D214():
    deopt 837 [];
  D217():
    deopt 850 [foss];
  L956():
    Rdb9 = force? Rdb8;
    checkMissing(Rdb9);
    st Rdb0 = Rdb9;
    which = ldf which;
    check L957() else D147();
  L1084():
    p111 = prom<V +>{
      vds4 = ld vds;
      vds5 = force? vds4;
      checkMissing(vds5);
      return vds5;
    };
    p112 = prom<V +>{
      sources = ld sources;
      sources1 = force? sources;
      checkMissing(sources1);
      return sources1;
    };
    r479 = dyn intersect(p111, p112);
    check L1085() else D207();
  L1089(dx109):
    st pattern = dx109;
    setdiff1 = ldf setdiff;
    check L1093() else D210();
  L1090():
    dr94 = tryDispatchBuiltin.1("$", r481);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L1092() else L1091(dr94);
  L1091(r483):
    r484 = `$`(r483, <sym pattern>);
    goto L1089(r484);
  L1098():
    goto L117(r498);
  L1100():
    p120 = prom<V +>{
      vign_dir4 = ld vign_dir;
      vign_dir5 = force? vign_dir4;
      checkMissing(vign_dir5);
      return vign_dir5;
    };
    r500 = dyn dir_exists(p120);
    check L1101() else D215();
  L1112():
    foss1 = force? foss;
    checkMissing(foss1);
    c210 = `as.logical`(foss1);
    if c210 then L1113() else L120(c210);
  D147():
    deopt 596 [];
  D207():
    deopt 816 [r479];
  D210():
    deopt 825 [];
  D215():
    deopt 839 [r500];
  L120(c212):
    c216 = `as.logical`(c212);
    if c216 then L1117() else L121();
  L957():
    p76 = prom<V +>{
      vapply = ldf vapply;
      p74 = prom<V +>{
        Rdb10 = ld Rdb;
        Rdb11 = force? Rdb10;
        checkMissing(Rdb11);
        return Rdb11;
      };
      p75 = prom<V +>{
        r335 = clos inner1432497010;
        return r335;
      };
      r337 = dyn vapply(p74, p75, NA_LGL);
      return r337;
    };
    r339 = dyn which(p76);
    check L958() else D148();
  L1085():
    st sources = r479;
    goto L116();
  L1092():
    dx108 = getTryDispatchBuiltinValue(dr94);
    goto L1089(dx108);
  L1093():
    p116 = prom<V +>{
      list_files2 = ldf `list.files`;
      p114 = prom<V +>{
        file_path7 = ldf `file.path`;
        p113 = prom<V +>{
          dir23 = ld dir;
          dir24 = force? dir23;
          checkMissing(dir24);
          return dir24;
        };
        r486 = dyn file_path7(p113, "inst", "doc");
        return r486;
      };
      p115 = prom<V +>{
        pattern = ld pattern;
        pattern1 = force? pattern;
        checkMissing(pattern1);
        return pattern1;
      };
      r489 = dyn list_files2[, pattern](p114, p115);
      return r489;
    };
    p119 = prom<V +>{
      list_files3 = ldf `list.files`;
      p117 = prom<V +>{
        vign_dir2 = ld vign_dir;
        vign_dir3 = force? vign_dir2;
        checkMissing(vign_dir3);
        return vign_dir3;
      };
      p118 = prom<V +>{
        pattern2 = ld pattern;
        pattern3 = force? pattern2;
        checkMissing(pattern3);
        return pattern3;
      };
      r493 = dyn list_files3[, pattern](p117, p118);
      return r493;
    };
    r495 = dyn setdiff1(p116, p119);
    check L1094() else D211();
  L1101():
    l75 = ld out;
    c208 = `is.object`(l75);
    if c208 then L1103() else L1104(r500, l75);
  L1113():
    dir_exists1 = ldf `dir.exists`;
    check L1114() else D218();
  D148():
    deopt 598 [r339];
  D211():
    deopt 828 [r495];
  D218():
    deopt 853 [c210];
  L121():
    goto L126();
  L126():
    list_files6 = ldf `list.files`;
    check L1140() else D231();
  L958():
    st containsBuildSexprs = r339;
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L959() else L960();
  L1094():
    st sources = r495;
    goto L116();
  L1102(dx111):
    st out = dx111;
    sources4 = ld sources;
    check L1106() else D216();
  L1103():
    dr96 = tryDispatchBuiltin.0("$<-", l75, r500);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L1105() else L1104(r500, dr96);
  L1104(r502, l77):
    r505 = `$<-`(l77, <sym have_vignettes_dir>, r500);
    goto L1102(r505);
  L1114():
    p122 = prom<V +>{
      file_path8 = ldf `file.path`;
      p121 = prom<V +>{
        dir25 = ld dir;
        dir26 = force? dir25;
        checkMissing(dir26);
        return dir26;
      };
      r508 = dyn file_path8(p121, "java");
      return r508;
    };
    r510 = dyn dir_exists1(p122);
    check L1115() else D219();
  L1117():
    list_files4 = ldf `list.files`;
    check L1118() else D220();
  D216():
    deopt 843 [sources4];
  D219():
    deopt 855 [c210, r510];
  D220():
    deopt 859 [];
  D231():
    deopt 904 [];
  L88(r341):
    c171 = `as.logical`(r341);
    if c171 then L963() else L89();
  L959():
    containsBuildSexprs = ld containsBuildSexprs;
    check L961() else D149();
  L960():
    r340 = dyn base28(<sym containsBuildSexprs>);
    goto L88(r340);
  L1105():
    dx110 = getTryDispatchBuiltinValue(dr96);
    goto L1102(dx110);
  L1106():
    sources5 = force? sources4;
    checkMissing(sources5);
    l78 = ld out;
    c209 = `is.object`(l78);
    if c209 then L1108() else L1109(sources5, l78);
  L1115():
    r511 = `!`(r510);
    c213 = `as.logical`(r511);
    c214 = `&&`(c210, c213);
    goto L120(c214);
  L1118():
    p124 = prom<V +>{
      file_path9 = ldf `file.path`;
      p123 = prom<V +>{
        dir27 = ld dir;
        dir28 = force? dir27;
        checkMissing(dir28);
        return dir28;
      };
      r513 = dyn file_path9(p123, "inst");
      return r513;
    };
    r515 = dyn list_files4[, `full.names`, recursive](p124, TRUE, TRUE);
    check L1119() else D221();
  L1140():
    p129 = prom<V +>{
      file_path11 = ldf `file.path`;
      p128 = prom<V +>{
        dir31 = ld dir;
        dir32 = force? dir31;
        checkMissing(dir32);
        return dir32;
      };
      r530 = dyn file_path11(p128, "inst");
      return r530;
    };
    r532 = dyn list_files6[, pattern, `full.names`, recursive](p129, ".*[.]java$", TRUE, TRUE);
    check L1141() else D232();
  D149():
    deopt 602 [containsBuildSexprs];
  D221():
    deopt 865 [r515];
  D232():
    deopt 912 [r532];
  L89():
    goto L96();
  L96():
    sym32 = ldf any;
    base32 = ldf any in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L995() else L996();
  L961():
    containsBuildSexprs1 = force? containsBuildSexprs;
    checkMissing(containsBuildSexprs1);
    length10 = ldf length in base;
    r342 = dyn length10(containsBuildSexprs1);
    check L962() else D150();
  L963():
    file_path2 = ldf `file.path`;
    check L964() else D151();
  L1107(sources9, dx113):
    st out = dx113;
    goto L119();
  L1108():
    dr98 = tryDispatchBuiltin.0("$<-", l78, sources5);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L1110() else L1109(sources5, dr98);
  L1109(sources7, l80):
    r506 = `$<-`(l80, <sym vignette_sources_only_in_inst_doc>, sources5);
    goto L1107(sources7, r506);
  L1119():
    st allfiles = r515;
    sym38 = ldf c;
    base38 = ldf c in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L1120() else L1121();
  L1141():
    st dotjava = r532;
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L1142() else L1143();
  D150():
    deopt 605 [r342];
  D151():
    deopt 607 [];
  L97(r372):
    st containsLaterSexprs = r372;
    containsLaterSexprs = ld containsLaterSexprs;
    check L1000() else D168();
  L122(r517):
    st allfiles = r517;
    grep3 = ldf grep;
    check L1126() else D226();
  L127(r534):
    st dotjava = r534;
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L1148() else L1149();
  L962():
    goto L88(r342);
  L964():
    p77 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r344 = dyn file_path2(p77, "build", "partial.rdb");
    check L965() else D152();
  L995():
    vapply1 = ldf vapply;
    check L997() else D165();
  L996():
    r371 = dyn base32(<lang vapply(Rdb, function((Rd=), any(`[`(.Rd_get_Sexpr_build_time_info(Rd), "later")), NULL), NA_LGL)>);
    goto L97(r371);
  L1110():
    dx112 = getTryDispatchBuiltinValue(dr98);
    goto L1107(sources5, dx112);
  L1120():
    allfiles = ld allfiles;
    check L1122() else D222();
  L1121():
    r516 = dyn base38(<sym allfiles>, <lang list.files(file.path(dir, "exec"), full.names=TRUE)>);
    goto L122(r516);
  L1142():
    dotjava = ld dotjava;
    check L1144() else D233();
  L1143():
    r533 = dyn base40(<sym dotjava>, <lang list.files(file.path(dir, "exec"), pattern=".*[.]java$", full.names=TRUE)>);
    goto L127(r533);
  D152():
    deopt 611 [r344];
  D165():
    deopt 662 [];
  D168():
    deopt 670 [containsLaterSexprs];
  D222():
    deopt 869 [allfiles];
  D226():
    deopt 881 [];
  D233():
    deopt 916 [dotjava];
  L128(r541):
    c221 = `as.logical`(r541);
    if c221 then L1152() else L129();
  L965():
    st built_file = r344;
    file_exists1 = ldf `file.exists`;
    check L966() else D153();
  L997():
    p81 = prom<V +>{
      Rdb14 = ld Rdb;
      Rdb15 = force? Rdb14;
      checkMissing(Rdb15);
      return Rdb15;
    };
    p82 = prom<V +>{
      r374 = clos inner1432497010;
      return r374;
    };
    r376 = dyn vapply1(p81, p82, NA_LGL);
    check L998() else D166();
  L1000():
    containsLaterSexprs1 = force? containsLaterSexprs;
    checkMissing(containsLaterSexprs1);
    c176 = `as.logical`(containsLaterSexprs1);
    if c176 then L1001() else L98(c176);
  L1122():
    allfiles1 = force? allfiles;
    checkMissing(allfiles1);
    list_files5 = ldf `list.files`;
    check L1123() else D223();
  L1126():
    p127 = prom<V +>{
      allfiles2 = ld allfiles;
      allfiles3 = force? allfiles2;
      checkMissing(allfiles3);
      return allfiles3;
    };
    r524 = dyn grep3[, , value](".*[.](class|jar)$", p127, TRUE);
    check L1127() else D227();
  L1144():
    dotjava1 = force? dotjava;
    checkMissing(dotjava1);
    list_files7 = ldf `list.files`;
    check L1145() else D234();
  L1148():
    dotjava2 = ld dotjava;
    check L1150() else D237();
  L1149():
    r540 = dyn base41(<sym dotjava>);
    goto L128(r540);
  D153():
    deopt 614 [];
  D166():
    deopt 666 [r376];
  D223():
    deopt 872 [];
  D227():
    deopt 886 [r524];
  D234():
    deopt 919 [];
  D237():
    deopt 931 [dotjava2];
  L98(c178):
    c182 = `as.logical`(c178);
    if c182 then L1005() else L99();
  L129():
    goto L130();
  L130():
    r544 = clos inner2843998100;
    st `.check_citation_for_CRAN` = r544;
    file_exists4 = ldf `file.exists`;
    check L1159() else D240();
  L966():
    p78 = prom<V +>{
      built_file = ld built_file;
      built_file1 = force? built_file;
      checkMissing(built_file1);
      return built_file1;
    };
    r346 = dyn file_exists1(p78);
    check L967() else D154();
  L998():
    any2 = ldf any in base;
    r377 = dyn any2(r376);
    check L999() else D167();
  L1001():
    file_exists2 = ldf `file.exists`;
    check L1002() else D169();
  L1123():
    p126 = prom<V +>{
      file_path10 = ldf `file.path`;
      p125 = prom<V +>{
        dir29 = ld dir;
        dir30 = force? dir29;
        checkMissing(dir30);
        return dir30;
      };
      r519 = dyn file_path10(p125, "exec");
      return r519;
    };
    r521 = dyn list_files5[, `full.names`](p126, TRUE);
    check L1124() else D224();
  L1127():
    st javafiles = r524;
    sym39 = ldf length;
    base39 = ldf length in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L1128() else L1129();
  L1145():
    p131 = prom<V +>{
      file_path12 = ldf `file.path`;
      p130 = prom<V +>{
        dir33 = ld dir;
        dir34 = force? dir33;
        checkMissing(dir34);
        return dir34;
      };
      r536 = dyn file_path12(p130, "exec");
      return r536;
    };
    r538 = dyn list_files7[, pattern, `full.names`](p131, ".*[.]java$", TRUE);
    check L1146() else D235();
  L1150():
    dotjava3 = force? dotjava2;
    checkMissing(dotjava3);
    length23 = ldf length in base;
    r542 = dyn length23(dotjava3);
    check L1151() else D238();
  L1152():
    dotjava4 = ld dotjava;
    check L1153() else D239();
  D154():
    deopt 616 [r346];
  D167():
    deopt 668 [r377];
  D169():
    deopt 673 [c176];
  D224():
    deopt 876 [r521];
  D235():
    deopt 925 [r538];
  D238():
    deopt 934 [r542];
  D239():
    deopt 935 [dotjava4];
  D240():
    deopt 946 [];
  L99():
    goto L100();
  L100():
    containsLaterSexprs2 = ld containsLaterSexprs;
    check L1011() else D171();
  L123(r526):
    c218 = `as.logical`(r526);
    if c218 then L1132() else L124();
  L967():
    r347 = `!`(r346);
    c172 = `as.logical`(r347);
    if c172 then L968() else L90();
  L999():
    goto L97(r377);
  L1002():
    p84 = prom<V +>{
      file_path3 = ldf `file.path`;
      p83 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r379 = dyn file_path3(p83, "build", "stage23.rdb");
      return r379;
    };
    r381 = dyn file_exists2(p84);
    check L1003() else D170();
  L1005():
    l60 = ld out;
    c183 = `is.object`(l60);
    if c183 then L1007() else L1008(TRUE, l60);
  L1124():
    c217 = ldf c in base;
    r522 = dyn c217(allfiles1, r521);
    check L1125() else D225();
  L1128():
    javafiles = ld javafiles;
    check L1130() else D228();
  L1129():
    r525 = dyn base39(<sym javafiles>);
    goto L123(r525);
  L1146():
    c220 = ldf c in base;
    r539 = dyn c220(dotjava1, r538);
    check L1147() else D236();
  L1151():
    goto L128(r542);
  L1153():
    dotjava5 = force? dotjava4;
    checkMissing(dotjava5);
    l84 = ld out;
    c222 = `is.object`(l84);
    if c222 then L1155() else L1156(dotjava5, l84);
  L1159():
    p133 = prom<V +>{
      file_path13 = ldf `file.path`;
      p132 = prom<V +>{
        dir35 = ld dir;
        dir36 = force? dir35;
        checkMissing(dir36);
        return dir36;
      };
      r546 = dyn file_path13(p132, "inst", "CITATION");
      st cfile = r546;
      invisible.0();
      return r546;
    };
    r548 = dyn file_exists4(p133);
    check L1160() else D241();
  D170():
    deopt 675 [c176, r381];
  D171():
    deopt 685 [containsLaterSexprs2];
  D225():
    deopt 878 [r522];
  D228():
    deopt 890 [javafiles];
  D236():
    deopt 927 [r539];
  D241():
    deopt 948 [r548];
  L90():
    readRDS1 = ldf readRDS;
    check L974() else D155();
  L91(r353):
    goto L96();
  L124():
    goto L125(NULL);
  L125(javafiles8):
    goto L126();
  L968():
    l54 = ld out;
    c173 = `is.object`(l54);
    if c173 then L970() else L971(TRUE, l54);
  L1003():
    r382 = `!`(r381);
    c179 = `as.logical`(r382);
    c180 = `&&`(c176, c179);
    goto L98(c180);
  L1006(r386, dx97):
    st out = dx97;
    goto L100();
  L1007():
    dr82 = tryDispatchBuiltin.0("$<-", l60, TRUE);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L1009() else L1008(TRUE, dr82);
  L1008(r384, l62):
    r387 = `$<-`(l62, <sym missing_stage23_rdb>, TRUE);
    goto L1006(r384, r387);
  L1011():
    containsLaterSexprs3 = force? containsLaterSexprs2;
    checkMissing(containsLaterSexprs3);
    c184 = `as.logical`(containsLaterSexprs3);
    if c184 then L1012() else L101(c184);
  L1125():
    goto L122(r522);
  L1130():
    javafiles1 = force? javafiles;
    checkMissing(javafiles1);
    length22 = ldf length in base;
    r527 = dyn length22(javafiles1);
    check L1131() else D229();
  L1132():
    javafiles2 = ld javafiles;
    check L1133() else D230();
  L1147():
    goto L127(r539);
  L1154(dotjava9, dx117):
    st out = dx117;
    goto L130();
  L1155():
    dr102 = tryDispatchBuiltin.0("$<-", l84, dotjava5);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L1157() else L1156(dotjava5, dr102);
  L1156(dotjava7, l86):
    r543 = `$<-`(l86, <sym dotjava>, dotjava5);
    goto L1154(dotjava7, r543);
  L1160():
    c223 = `as.logical`(r548);
    if c223 then L1161() else L131();
  D155():
    deopt 624 [];
  D229():
    deopt 893 [r527];
  D230():
    deopt 894 [javafiles2];
  L101(c186):
    c190 = `as.logical`(c186);
    if c190 then L1016() else L102(c190);
  L131():
    goto L137();
  L137():
    sym44 = ldf `is.na`;
    base44 = ldf `is.na` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L1179() else L1180();
  L969(r351, dx87):
    st out = dx87;
    goto L91(r351);
  L970():
    dr76 = tryDispatchBuiltin.0("$<-", l54, TRUE);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L972() else L971(TRUE, dr76);
  L971(r349, l56):
    r352 = `$<-`(l56, <sym missing_partial_rdb>, TRUE);
    goto L969(r349, r352);
  L974():
    p79 = prom<V +>{
      built_file2 = ld built_file;
      built_file3 = force? built_file2;
      checkMissing(built_file3);
      return built_file3;
    };
    r355 = dyn readRDS1(p79);
    check L975() else D156();
  L1009():
    dx96 = getTryDispatchBuiltinValue(dr82);
    goto L1006(TRUE, dx96);
  L1012():
    config_val_to_logical2 = ldf config_val_to_logical;
    check L1013() else D172();
  L1131():
    goto L123(r527);
  L1133():
    javafiles3 = force? javafiles2;
    checkMissing(javafiles3);
    l81 = ld out;
    c219 = `is.object`(l81);
    if c219 then L1135() else L1136(javafiles3, l81);
  L1157():
    dx116 = getTryDispatchBuiltinValue(dr102);
    goto L1154(dotjava5, dx116);
  L1161():
    _check_citation_for_CRAN = ldf `.check_citation_for_CRAN`;
    check L1162() else D242();
  D156():
    deopt 626 [r355];
  D172():
    deopt 688 [c184];
  D242():
    deopt 950 [];
  L102(c192):
    c197 = `as.logical`(c192);
    if c197 then L1020() else L103();
  L138(r560):
    r563 = `!`(r560);
    c227 = `as.logical`(r563);
    if c227 then L1186() else L140(c227);
  L972():
    dx86 = getTryDispatchBuiltinValue(dr76);
    goto L969(TRUE, dx86);
  L975():
    st built = r355;
    sym29 = ldf match;
    base29 = ldf match in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L976() else L977();
  L1013():
    p85 = prom<V +>{
      Sys_getenv2 = ldf `Sys.getenv`;
      r389 = dyn Sys_getenv2("_R_CHECK_NOTE_MISSING_MANUAL_PDF", "FALSE");
      return r389;
    };
    r391 = dyn config_val_to_logical2(p85);
    check L1014() else D173();
  L1016():
    file_exists3 = ldf `file.exists`;
    check L1017() else D174();
  L1134(javafiles7, dx115):
    st out = dx115;
    goto L125(javafiles7);
  L1135():
    dr100 = tryDispatchBuiltin.0("$<-", l81, javafiles3);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L1137() else L1136(javafiles3, dr100);
  L1136(javafiles5, l83):
    r528 = `$<-`(l83, <sym javafiles>, javafiles3);
    goto L1134(javafiles5, r528);
  L1162():
    p134 = prom<V +>{
      cfile = ld cfile;
      cfile1 = force? cfile;
      checkMissing(cfile1);
      return cfile1;
    };
    p135 = prom<V +>{
      meta42 = ld meta;
      meta43 = force? meta42;
      checkMissing(meta43);
      return meta43;
    };
    r551 = dyn _check_citation_for_CRAN(p134, p135);
    check L1163() else D243();
  L1179():
    meta44 = ld meta;
    check L1181() else D249();
  L1180():
    r559 = dyn base44(<lang `<-`(aar, `[`(meta, "Authors@R"))>);
    goto L138(r559);
  D173():
    deopt 690 [c184, r391];
  D174():
    deopt 693 [c190];
  D243():
    deopt 953 [r551];
  D249():
    deopt 978 [meta44];
  L92(r357):
    st pos = r357;
    built2 = ld built;
    check L985() else D162();
  L103():
    goto L104();
  L104():
    r407 = clos inner2501545716;
    st `.fmt` = r407;
    lapply1 = ldf lapply;
    check L1026() else D176();
  L140(c229):
    c236 = `as.logical`(c229);
    if c236 then L1193() else L142();
  L976():
    basename = ldf basename;
    check L978() else D157();
  L977():
    r356 = dyn base29(<lang basename(names(Rdb))>, <lang names(built)>, 0);
    goto L92(r356);
  L1014():
    c187 = `as.logical`(r391);
    c188 = `&&`(c184, c187);
    goto L101(c188);
  L1017():
    p89 = prom<V +>{
      file_path4 = ldf `file.path`;
      p86 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      p88 = prom<V +>{
        paste3 = ldf paste0;
        p87 = prom<V +>{
          meta38 = ld meta;
          meta39 = force? meta38;
          checkMissing(meta39);
          c193 = `is.object`(meta39);
          if c193 then L1() else L2(meta39);
        L0(dx99):
          return dx99;
        L1():
          dr84 = tryDispatchBuiltin.1("[[", meta39);
          dc42 = getTryDispatchBuiltinDispatched(dr84);
          if dc42 then L3() else L2(dr84);
        L2(meta41):
          __15 = ldf `[[` in base;
          r393 = dyn __15(meta41, "Package");
          goto L0(r393);
        L3():
          dx98 = getTryDispatchBuiltinValue(dr84);
          goto L0(dx98);
        };
        r395 = dyn paste3(p87, ".pdf");
        return r395;
      };
      r397 = dyn file_path4(p86, "build", p88);
      return r397;
    };
    r399 = dyn file_exists3(p89);
    check L1018() else D175();
  L1020():
    l63 = ld out;
    c198 = `is.object`(l63);
    if c198 then L1022() else L1023(TRUE, l63);
  L1137():
    dx114 = getTryDispatchBuiltinValue(dr100);
    goto L1134(javafiles3, dx114);
  L1163():
    st cinfo = r551;
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L1164() else L1165();
  L1181():
    meta45 = force? meta44;
    checkMissing(meta45);
    c226 = `is.object`(meta45);
    if c226 then L1182() else L1183(meta45);
  L1186():
    sym45 = ldf inherits;
    base45 = ldf inherits in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L1187() else L1188();
  D157():
    deopt 631 [];
  D162():
    deopt 645 [built2];
  D175():
    deopt 695 [c190, r399];
  D176():
    deopt 709 [];
  L132(r553):
    c224 = `as.logical`(r553);
    if c224 then L1168() else L133();
  L139(dx121):
    st aar = dx121;
    is_na4 = ldf `is.na` in base;
    r562 = dyn is_na4(dx121);
    check L1185() else D250();
  L141(c232, r565):
    r572 = `!`(r565);
    c233 = `as.logical`(r572);
    c234 = `&&`(c232, c233);
    goto L140(c234);
  L142():
    goto L161();
  L161():
    sym52 = ldf `is.na`;
    base52 = ldf `is.na` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L1264() else L1265();
  L978():
    p80 = prom<V +>{
      sym30 = ldf names;
      base30 = ldf names in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r359):
      return r359;
    L1():
      Rdb12 = ld Rdb;
      Rdb13 = force? Rdb12;
      checkMissing(Rdb13);
      names2 = ldf names in base;
      r360 = dyn names2(Rdb13);
      goto L0(r360);
    L2():
      r358 = dyn base30(<sym Rdb>);
      goto L0(r358);
    };
    r362 = dyn basename(p80);
    check L979() else D158();
  L985():
    built3 = force? built2;
    checkMissing(built3);
    c174 = `is.object`(built3);
    if c174 then L986() else L987(built3);
  L1018():
    r400 = `!`(r399);
    c194 = `as.logical`(r400);
    c195 = `&&`(c190, c194);
    goto L102(c195);
  L1021(r404, dx101):
    st out = dx101;
    goto L104();
  L1022():
    dr86 = tryDispatchBuiltin.0("$<-", l63, TRUE);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L1024() else L1023(TRUE, dr86);
  L1023(r402, l65):
    r405 = `$<-`(l65, <sym missing_manual_pdf>, TRUE);
    goto L1021(r402, r405);
  L1026():
    p90 = prom<V +>{
      Rdb16 = ld Rdb;
      Rdb17 = force? Rdb16;
      checkMissing(Rdb17);
      return Rdb17;
    };
    p91 = prom<V +>{
      r409 = clos inner1432497010;
      return r409;
    };
    r411 = dyn lapply1(p90, p91);
    check L1027() else D177();
  L1164():
    cinfo = ld cinfo;
    check L1166() else D244();
  L1165():
    r552 = dyn base42(<sym cinfo>);
    goto L132(r552);
  L1182():
    dr106 = tryDispatchBuiltin.1("[", meta45);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L1184() else L1183(dr106);
  L1183(meta47):
    __16 = ldf `[` in base;
    r561 = dyn __16(meta47, "Authors@R");
    goto L139(r561);
  L1187():
    tryCatch2 = ldf tryCatch;
    check L1189() else D251();
  L1188():
    r564 = dyn base45(<lang `<-`(aar, tryCatch(str2expression(aar), error=identity))>, "error");
    goto L141(c227, r564);
  L1193():
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L1194() else L1195();
  D158():
    deopt 633 [r362];
  D177():
    deopt 712 [r411];
  D244():
    deopt 957 [cinfo];
  D250():
    deopt 985 [r562];
  D251():
    deopt 990 [c227];
  L94(dx89):
    l57 = ld Rdb;
    c175 = `is.object`(l57);
    if c175 then L990() else L991(dx89, l57);
  L133():
    goto L136(NULL);
  L136(cinfo16):
    goto L137();
  L143(r574):
    r576 = `!=`(r574, 1);
    c237 = `as.logical`(r576);
    if c237 then L144(c237) else L1198();
  L162(r619):
    c296 = `as.logical`(r619);
    if c296 then L1271() else L164();
  L979():
    sym31 = ldf names;
    base31 = ldf names in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L980() else L981();
  L986():
    dr78 = tryDispatchBuiltin.1("[", built3);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L988() else L987(dr78);
  L987(built5):
    pos = ld pos;
    check L989() else D163();
  L1024():
    dx100 = getTryDispatchBuiltinValue(dr86);
    goto L1021(TRUE, dx100);
  L1027():
    st bad = r411;
    Filter1 = ldf Filter;
    check L1028() else D178();
  L1166():
    cinfo1 = force? cinfo;
    checkMissing(cinfo1);
    length24 = ldf length in base;
    r554 = dyn length24(cinfo1);
    check L1167() else D245();
  L1168():
    cinfo2 = ld cinfo;
    check L1169() else D246();
  L1184():
    dx120 = getTryDispatchBuiltinValue(dr106);
    goto L139(dx120);
  L1185():
    goto L138(r562);
  L1189():
    p137 = prom<V +>{
      str2expression = ldf str2expression;
      p136 = prom<V +>{
        aar = ld aar;
        aar1 = force? aar;
        checkMissing(aar1);
        return aar1;
      };
      r567 = dyn str2expression(p136);
      return r567;
    };
    p138 = prom<V +>{
      identity4 = ld identity;
      identity5 = force? identity4;
      checkMissing(identity5);
      return identity5;
    };
    r570 = dyn tryCatch2[, error](p137, p138);
    check L1190() else D252();
  L1194():
    aar2 = ld aar;
    check L1196() else D254();
  L1195():
    r573 = dyn base46(<sym aar>);
    goto L143(r573);
  L1264():
    meta52 = ld meta;
    check L1266() else D276();
  L1265():
    r618 = dyn base52(<lang `[`(meta, "Authors@R")>);
    goto L162(r618);
  D163():
    deopt 647 [built5, pos];
  D178():
    deopt 715 [];
  D245():
    deopt 960 [r554];
  D246():
    deopt 961 [cinfo2];
  D252():
    deopt 994 [c227, r570];
  D254():
    deopt 1004 [aar2];
  D276():
    deopt 1109 [meta52];
  L93(r364):
    match = ldf match in base;
    r366 = dyn match(r362, r364, 0, NULL);
    check L984() else D161();
  L95(dx94, dx95):
    st Rdb = dx95;
    goto L91(dx94);
  L144(c238):
    st bad = c238;
    bad18 = ld bad;
    check L1207() else D258();
  L164():
    goto L165();
  L165():
    trimws = ldf trimws;
    check L1284() else D285();
  L980():
    built = ld built;
    check L982() else D159();
  L981():
    r363 = dyn base31(<sym built>);
    goto L93(r363);
  L988():
    dx88 = getTryDispatchBuiltinValue(dr78);
    goto L94(dx88);
  L989():
    pos1 = force? pos;
    __14 = ldf `[` in base;
    r367 = dyn __14(built5, pos1);
    goto L94(r367);
  L990():
    dr80 = tryDispatchBuiltin.0("[<-", l57, dx89);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L992() else L991(dx89, dr80);
  L991(dx91, l59):
    pos2 = ld pos;
    check L993() else D164();
  L1028():
    p92 = prom<V +>{
      length11 = ld length;
      length12 = force? length11;
      checkMissing(length12);
      return length12;
    };
    p93 = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      return bad1;
    };
    r414 = dyn Filter1(p92, p93);
    check L1029() else D179();
  L1167():
    goto L132(r554);
  L1169():
    cinfo3 = force? cinfo2;
    checkMissing(cinfo3);
    l87 = ld out;
    c225 = `is.object`(l87);
    if c225 then L1170() else L1171(cinfo3, l87);
  L1190():
    st aar = r570;
    inherits2 = ldf inherits in base;
    r571 = dyn inherits2(r570, "error", FALSE);
    check L1191() else D253();
  L1196():
    aar3 = force? aar2;
    checkMissing(aar3);
    length25 = ldf length in base;
    r575 = dyn length25(aar3);
    check L1197() else D255();
  L1198():
    sym47 = ldf `is.call`;
    base47 = ldf `is.call` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L1199() else L1200();
  L1266():
    meta53 = force? meta52;
    checkMissing(meta53);
    c295 = `is.object`(meta53);
    if c295 then L1267() else L1268(meta53);
  L1271():
    ___4 = ldf `:::`;
    check L1272() else D278();
  D159():
    deopt 636 [built];
  D161():
    deopt 643 [r366];
  D164():
    deopt 651 [dx91, l59, dx89, pos2];
  D179():
    deopt 718 [r414];
  D253():
    deopt 999 [c227, r571];
  D255():
    deopt 1007 [r575];
  D258():
    deopt 1023 [bad18];
  D278():
    deopt 1117 [];
  D285():
    deopt 1145 [];
  L134(cinfo7, dx119):
    st out = dx119;
    goto L136(cinfo7);
  L145(c242, r578):
    r581 = `!`(r578);
    c248 = `as.logical`(r581);
    c249 = `||`(c242, c248);
    goto L144(c249);
  L163(dx137):
    is_na5 = ldf `is.na` in base;
    r621 = dyn is_na5(dx137);
    check L1270() else D277();
  L982():
    built1 = force? built;
    checkMissing(built1);
    names3 = ldf names in base;
    r365 = dyn names3(built1);
    check L983() else D160();
  L984():
    goto L92(r366);
  L992():
    dx93 = getTryDispatchBuiltinValue(dr80);
    goto L95(dx89, dx93);
  L993():
    pos3 = force? pos2;
    checkMissing(pos3);
    r368 = `>`(pos3, 0);
    ___1 = ldf `[<-` in base;
    r369 = dyn ___1(l59, dx89, r368);
    goto L95(dx91, r369);
  L1029():
    st bad = r414;
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L1030() else L1031();
  L1170():
    dr104 = tryDispatchBuiltin.0("[<-", l87, cinfo3);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L1172() else L1171(cinfo3, dr104);
  L1171(cinfo5, l89):
    sym43 = ldf names;
    base43 = ldf names in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L1173() else L1174();
  L1191():
    goto L141(c227, r571);
  L1197():
    goto L143(r575);
  L1199():
    aar4 = ld aar;
    check L1201() else D256();
  L1200():
    r577 = dyn base47(<lang `<-`(aar, `[[`(aar, 1))>);
    goto L145(c237, r577);
  L1207():
    bad19 = force? bad18;
    checkMissing(bad19);
    r582 = `!`(bad19);
    c251 = `as.logical`(r582);
    if c251 then L1208() else L147();
  L1267():
    dr122 = tryDispatchBuiltin.1("[", meta53);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L1269() else L1268(dr122);
  L1268(meta55):
    __21 = ldf `[` in base;
    r620 = dyn __21(meta55, "Authors@R");
    goto L163(r620);
  L1272():
    r622 = dyn ___4("utils", ".authors_at_R_field_from_author_and_maintainer");
    check L1273() else D279();
  L1284():
    p152 = prom<V +>{
      as_vector1 = ldf `as.vector`;
      p151 = prom<V +>{
        meta60 = ld meta;
        meta61 = force? meta60;
        checkMissing(meta61);
        c301 = `is.object`(meta61);
        if c301 then L1() else L2(meta61);
      L0(dx143):
        return dx143;
      L1():
        dr128 = tryDispatchBuiltin.1("[", meta61);
        dc64 = getTryDispatchBuiltinDispatched(dr128);
        if dc64 then L3() else L2(dr128);
      L2(meta63):
        __23 = ldf `[` in base;
        r655 = dyn __23(meta63, "Author");
        goto L0(r655);
      L3():
        dx142 = getTryDispatchBuiltinValue(dr128);
        goto L0(dx142);
      };
      r657 = dyn as_vector1(p151);
      return r657;
    };
    r659 = dyn trimws(p152);
    check L1285() else D286();
  D160():
    deopt 639 [r365];
  D256():
    deopt 1012 [c237, aar4];
  D277():
    deopt 1115 [r621];
  D279():
    deopt 1120 [r622];
  D286():
    deopt 1147 [r659];
  L105(r416):
    c199 = `as.logical`(r416);
    if c199 then L1034() else L106();
  L135(cinfo12, l92, cinfo13, r556):
    ___2 = ldf `[<-` in base;
    r558 = dyn ___2(l92, cinfo13, r556);
    goto L134(cinfo12, r558);
  L147():
    goto L153();
  L153():
    bad20 = ld bad;
    check L1228() else D266();
  L983():
    goto L93(r365);
  L1030():
    bad2 = ld bad;
    check L1032() else D180();
  L1031():
    r415 = dyn base33(<sym bad>);
    goto L105(r415);
  L1172():
    dx118 = getTryDispatchBuiltinValue(dr104);
    goto L134(cinfo3, dx118);
  L1173():
    cinfo14 = ld cinfo;
    check L1175() else D247();
  L1174():
    r555 = dyn base43(<sym cinfo>);
    goto L135(cinfo5, l89, cinfo3, r555);
  L1201():
    aar5 = force? aar4;
    checkMissing(aar5);
    c243 = `is.object`(aar5);
    if c243 then L1202() else L1203(c237, aar5);
  L1208():
    sym48 = ldf `as.character`;
    base48 = ldf `as.character` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L1209() else L1210();
  L1269():
    dx136 = getTryDispatchBuiltinValue(dr122);
    goto L163(dx136);
  L1270():
    goto L162(r621);
  L1273():
    checkFun.0(r622);
    r623 = r622 as cls;
    p145 = prom<V +>{
      meta56 = ld meta;
      meta57 = force? meta56;
      checkMissing(meta57);
      c297 = `is.object`(meta57);
      if c297 then L1() else L2(meta57);
    L0(dx139):
      return dx139;
    L1():
      dr124 = tryDispatchBuiltin.1("[", meta57);
      dc62 = getTryDispatchBuiltinDispatched(dr124);
      if dc62 then L3() else L2(dr124);
    L2(meta59):
      __22 = ldf `[` in base;
      r624 = dyn __22(meta59, "Author");
      goto L0(r624);
    L3():
      dx138 = getTryDispatchBuiltinValue(dr124);
      goto L0(dx138);
    };
    p146 = prom<V +>{
      maintainer4 = ld maintainer;
      maintainer5 = force? maintainer4;
      checkMissing(maintainer5);
      return maintainer5;
    };
    r627 = dyn r623(p145, p146);
    check L1274() else D280();
  L1285():
    st auth = r659;
    grepl4 = ldf grepl;
    check L1286() else D287();
  D180():
    deopt 722 [bad2];
  D247():
    deopt 966 [cinfo5, l89, cinfo3, cinfo14];
  D266():
    deopt 1060 [bad20];
  D280():
    deopt 1124 [r627];
  D287():
    deopt 1150 [];
  L106():
    goto L107();
  L107():
    lapply2 = ldf lapply;
    check L1042() else D184();
  L146(c247, dx123):
    st aar = dx123;
    is_call = ldf `is.call` in base;
    r580 = dyn is_call(dx123);
    check L1205() else D257();
  L148(r584):
    st cname = r584;
    cname = ld cname;
    check L1216() else D261();
  L1032():
    bad3 = force? bad2;
    checkMissing(bad3);
    length13 = ldf length in base;
    r417 = dyn length13(bad3);
    check L1033() else D181();
  L1034():
    _fmt = ldf `.fmt`;
    check L1035() else D182();
  L1175():
    cinfo15 = force? cinfo14;
    checkMissing(cinfo15);
    names4 = ldf names in base;
    r557 = dyn names4(cinfo15);
    check L1176() else D248();
  L1202():
    dr108 = tryDispatchBuiltin.1("[[", aar5);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L1204() else L1203(c237, dr108);
  L1203(c245, aar7):
    __17 = ldf `[[` in base;
    r579 = dyn __17(aar7, 1);
    goto L146(c245, r579);
  L1209():
    aar8 = ld aar;
    check L1211() else D259();
  L1210():
    r583 = dyn base48(<lang `[[`(aar, 1)>);
    goto L148(r583);
  L1228():
    bad21 = force? bad20;
    checkMissing(bad21);
    c276 = `as.logical`(bad21);
    if c276 then L1229() else L154();
  L1274():
    st aar = r627;
    format2 = ldf format;
    check L1275() else D281();
  L1286():
    p153 = prom<V +>{
      auth = ld auth;
      auth1 = force? auth;
      checkMissing(auth1);
      return auth1;
    };
    r661 = dyn grepl4("^Author *:", p153);
    check L1287() else D288();
  D181():
    deopt 725 [r417];
  D182():
    deopt 727 [];
  D184():
    deopt 736 [];
  D248():
    deopt 969 [cinfo5, l89, cinfo3, r557];
  D257():
    deopt 1019 [c247, r580];
  D259():
    deopt 1028 [aar8];
  D261():
    deopt 1036 [cname];
  D281():
    deopt 1127 [];
  D288():
    deopt 1153 [r661];
  L154():
    meta48 = ld meta;
    check L1236() else D268();
  L155(aar22):
    goto L161();
  L1033():
    goto L105(r417);
  L1035():
    p94 = prom<V +>{
      bad4 = ld bad;
      bad5 = force? bad4;
      checkMissing(bad5);
      return bad5;
    };
    r419 = dyn _fmt(p94);
    check L1036() else D183();
  L1042():
    p95 = prom<V +>{
      Rdb18 = ld Rdb;
      Rdb19 = force? Rdb18;
      checkMissing(Rdb19);
      return Rdb19;
    };
    p96 = prom<V +>{
      r427 = clos inner1432497010;
      return r427;
    };
    r429 = dyn lapply2(p95, p96);
    check L1043() else D185();
  L1176():
    goto L135(cinfo5, l89, cinfo3, r557);
  L1204():
    dx122 = getTryDispatchBuiltinValue(dr108);
    goto L146(c237, dx122);
  L1205():
    goto L145(c247, r580);
  L1211():
    aar9 = force? aar8;
    checkMissing(aar9);
    c252 = `is.object`(aar9);
    if c252 then L1212() else L1213(aar9);
  L1216():
    cname1 = force? cname;
    checkMissing(cname1);
    r587 = `!=`(cname1, "person");
    c253 = `as.logical`(r587);
    if c253 then L1217() else L150(c253);
  L1229():
    aar16 = ld aar;
    check L1230() else D267();
  L1275():
    p147 = prom<V +>{
      aar26 = ld aar;
      aar27 = force? aar26;
      checkMissing(aar27);
      return aar27;
    };
    r629 = dyn format2[, style](p147, "R");
    check L1276() else D282();
  L1287():
    c302 = `as.logical`(r661);
    if c302 then L1288() else L166();
  D183():
    deopt 729 [r419];
  D185():
    deopt 739 [r429];
  D267():
    deopt 1062 [aar16];
  D268():
    deopt 1067 [meta48];
  D282():
    deopt 1131 [r629];
  L149(dx125):
    as_character = ldf `as.character` in base;
    r586 = dyn as_character(dx125);
    check L1215() else D260();
  L150(c255):
    st bad = c255;
    goto L153();
  L166():
    goto L167();
  L167():
    grepl5 = ldf grepl;
    check L1294() else D289();
  L1036():
    l66 = ld out;
    c200 = `is.object`(l66);
    if c200 then L1038() else L1039(r419, l66);
  L1043():
    st bad = r429;
    Filter2 = ldf Filter;
    check L1044() else D186();
  L1212():
    dr110 = tryDispatchBuiltin.1("[[", aar9);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L1214() else L1213(dr110);
  L1213(aar11):
    __18 = ldf `[[` in base;
    r585 = dyn __18(aar11, 1);
    goto L149(r585);
  L1217():
    cname2 = ld cname;
    check L1218() else D262();
  L1230():
    aar17 = force? aar16;
    checkMissing(aar17);
    l93 = ld out;
    c277 = `is.object`(l93);
    if c277 then L1232() else L1233(aar17, l93);
  L1236():
    meta49 = force? meta48;
    checkMissing(meta49);
    c278 = `is.object`(meta49);
    if c278 then L1237() else L1238(meta49);
  L1276():
    st aar = r629;
    paste4 = ldf paste;
    check L1277() else D283();
  L1288():
    l102 = ld out;
    c303 = `is.object`(l102);
    if c303 then L1290() else L1291(TRUE, l102);
  D186():
    deopt 742 [];
  D260():
    deopt 1034 [r586];
  D262():
    deopt 1040 [c253, cname2];
  D283():
    deopt 1134 [];
  D289():
    deopt 1162 [];
  L156(dx131):
    st aar = dx131;
    tryCatch3 = ldf tryCatch;
    check L1240() else D269();
  L1037(r423, dx103):
    st out = dx103;
    goto L107();
  L1038():
    dr88 = tryDispatchBuiltin.0("$<-", l66, r419);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L1040() else L1039(r419, dr88);
  L1039(r421, l68):
    r424 = `$<-`(l68, <sym Rd_keywords_or_concepts_with_Rd_markup>, r419);
    goto L1037(r421, r424);
  L1044():
    p97 = prom<V +>{
      length14 = ld length;
      length15 = force? length14;
      checkMissing(length15);
      return length15;
    };
    p98 = prom<V +>{
      bad6 = ld bad;
      bad7 = force? bad6;
      checkMissing(bad7);
      return bad7;
    };
    r432 = dyn Filter2(p97, p98);
    check L1045() else D187();
  L1214():
    dx124 = getTryDispatchBuiltinValue(dr110);
    goto L149(dx124);
  L1215():
    goto L148(r586);
  L1218():
    cname3 = force? cname2;
    checkMissing(cname3);
    r588 = `!=`(cname3, "c");
    c256 = `as.logical`(r588);
    if c256 then L151(c253, c256) else L1219();
  L1231(aar21, dx129):
    st out = dx129;
    goto L155(aar21);
  L1232():
    dr114 = tryDispatchBuiltin.0("$<-", l93, aar17);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L1234() else L1233(aar17, dr114);
  L1233(aar19, l95):
    r598 = `$<-`(l95, <sym authors_at_R_calls>, aar17);
    goto L1231(aar19, r598);
  L1237():
    dr116 = tryDispatchBuiltin.1("[", meta49);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L1239() else L1238(dr116);
  L1238(meta51):
    __20 = ldf `[` in base;
    r599 = dyn __20(meta51, "Authors@R");
    goto L156(r599);
  L1277():
    p150 = prom<V +>{
      sym53 = ldf c;
      base53 = ldf c in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r631):
      return r631;
    L1():
      paste5 = ldf paste;
      p148 = prom<V +>{
        sym54 = ldf c;
        base54 = ldf c in base;
        guard54 = `==`.4(sym54, base54);
        if guard54 then L3() else L4();
      L0(r633):
        return r633;
      L3():
        sym55 = ldf `rep.int`;
        base55 = ldf `rep.int` in base;
        guard55 = `==`.4(sym55, base55);
        if guard55 then L5() else L6();
      L4():
        r632 = dyn base54("  Authors@R:", <lang rep.int(strrep(" ", 12), `-`(length(aar), 1))>);
        goto L0(r632);
      L1(r635):
        c298 = ldf c in base;
        r642 = dyn c298("  Authors@R:", r635);
        goto L0(r642);
      L5():
        strrep = ldf strrep;
        r636 = dyn strrep(" ", 12);
        sym56 = ldf length;
        base56 = ldf length in base;
        guard56 = `==`.4(sym56, base56);
        if guard56 then L7() else L8();
      L6():
        r634 = dyn base55(<lang strrep(" ", 12)>, <lang `-`(length(aar), 1)>);
        goto L1(r634);
      L2(r638):
        r640 = `-`(r638, 1);
        rep_int = ldf `rep.int` in base;
        r641 = dyn rep_int(r636, r640);
        goto L1(r641);
      L7():
        aar28 = ld aar;
        aar29 = force? aar28;
        checkMissing(aar29);
        length27 = ldf length in base;
        r639 = dyn length27(aar29);
        goto L2(r639);
      L8():
        r637 = dyn base56(<sym aar>);
        goto L2(r637);
      };
      p149 = prom<V +>{
        aar30 = ld aar;
        aar31 = force? aar30;
        checkMissing(aar31);
        return aar31;
      };
      r645 = dyn paste5(p148, p149);
      c299 = ldf c in base;
      r646 = dyn c299("No Authors@R field in DESCRIPTION.", "Please add one, modifying", r645, "as necessary.");
      goto L0(r646);
    L2():
      r630 = dyn base53("No Authors@R field in DESCRIPTION.", "Please add one, modifying", <lang paste(c("  Authors@R:", rep.int(strrep(" ", 12), `-`(length(aar), 1))), aar)>, "as necessary.");
      goto L0(r630);
    };
    r648 = dyn paste4[, collapse](p150, "\n");
    check L1278() else D284();
  L1289(r665, dx145):
    st out = dx145;
    goto L167();
  L1290():
    dr130 = tryDispatchBuiltin.0("$<-", l102, TRUE);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L1292() else L1291(TRUE, dr130);
  L1291(r663, l104):
    r666 = `$<-`(l104, <sym author_starts_with_Author>, TRUE);
    goto L1289(r663, r666);
  L1294():
    p154 = prom<V +>{
      auth2 = ld auth;
      auth3 = force? auth2;
      checkMissing(auth3);
      return auth3;
    };
    r669 = dyn grepl5("^(Authors@R *:|person *\\(|c *\\()", p154);
    check L1295() else D290();
  D187():
    deopt 745 [r432];
  D269():
    deopt 1074 [];
  D284():
    deopt 1138 [r648];
  D290():
    deopt 1165 [r669];
  L151(c257, c258):
    c272 = `as.logical`(c258);
    c273 = `&&`(c257, c272);
    goto L150(c273);
  L1040():
    dx102 = getTryDispatchBuiltinValue(dr88);
    goto L1037(r419, dx102);
  L1045():
    st bad = r432;
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L1046() else L1047();
  L1219():
    sym49 = ldf all;
    base49 = ldf all in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L1220() else L1221();
  L1234():
    dx128 = getTryDispatchBuiltinValue(dr114);
    goto L1231(aar17, dx128);
  L1239():
    dx130 = getTryDispatchBuiltinValue(dr116);
    goto L156(dx130);
  L1240():
    p143 = prom<V +>{
      _eval_with_capture = ldf `.eval_with_capture`;
      p142 = prom<V +>{
        ___3 = ldf `:::`;
        r600 = dyn ___3("utils", ".read_authors_at_R_field");
        checkFun.0(r600);
        r601 = r600 as cls;
        p141 = prom<V +>{
          aar23 = ld aar;
          aar24 = force? aar23;
          checkMissing(aar24);
          return aar24;
        };
        r603 = dyn r601(p141);
        return r603;
      };
      r605 = dyn _eval_with_capture(p142);
      return r605;
    };
    p144 = prom<V +>{
      identity6 = ld identity;
      identity7 = force? identity6;
      checkMissing(identity7);
      return identity7;
    };
    r608 = dyn tryCatch3[, error](p143, p144);
    check L1241() else D270();
  L1278():
    l99 = ld out;
    c300 = `is.object`(l99);
    if c300 then L1280() else L1281(r648, l99);
  L1292():
    dx144 = getTryDispatchBuiltinValue(dr130);
    goto L1289(TRUE, dx144);
  L1295():
    c304 = `as.logical`(r669);
    if c304 then L1296() else L168();
  D270():
    deopt 1078 [r608];
  L108(r434):
    c201 = `as.logical`(r434);
    if c201 then L1050() else L109();
  L152(c265, c266, r590):
    r597 = `!`(r590);
    c268 = `as.logical`(r597);
    c269 = `||`(c266, c268);
    goto L151(c265, c269);
  L168():
    goto L169();
  L169():
    trimws1 = ldf trimws;
    check L1303() else D292();
  L1046():
    bad8 = ld bad;
    check L1048() else D188();
  L1047():
    r433 = dyn base34(<sym bad>);
    goto L108(r433);
  L1220():
    vapply2 = ldf vapply;
    check L1222() else D263();
  L1221():
    r589 = dyn base49(<lang vapply(`[`(aar, `-`(1)), function((e=), {
          `(`(`&&`(`&&`(is.call(e), is.name(`<-`(x, `[[`(e, 1)))), `(`(`==`(as.character(x), "person"))))
        }, NULL), FALSE)>);
    goto L152(c253, c256, r589);
  L1241():
    st aut = r608;
    sym50 = ldf inherits;
    base50 = ldf inherits in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L1242() else L1243();
  L1279(r652, dx141):
    st out = dx141;
    goto L165();
  L1280():
    dr126 = tryDispatchBuiltin.0("$<-", l99, r648);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L1282() else L1281(r648, dr126);
  L1281(r650, l101):
    r653 = `$<-`(l101, <sym authors_at_R_missing>, r648);
    goto L1279(r650, r653);
  L1296():
    auth4 = ld auth;
    check L1297() else D291();
  D188():
    deopt 749 [bad8];
  D263():
    deopt 1047 [c253, c256];
  D291():
    deopt 1166 [auth4];
  D292():
    deopt 1174 [];
  L109():
    goto L110();
  L110():
    r444 = clos inner2501545716;
    st `.fmt` = r444;
    lapply3 = ldf lapply;
    check L1058() else D192();
  L157(r610):
    r612 = `!`(r610);
    c279 = `as.logical`(r612);
    if c279 then L1246() else L158(c279);
  L1048():
    bad9 = force? bad8;
    checkMissing(bad9);
    length16 = ldf length in base;
    r435 = dyn length16(bad9);
    check L1049() else D189();
  L1050():
    _fmt1 = ldf `.fmt`;
    check L1051() else D190();
  L1222():
    p139 = prom<V +>{
      aar12 = ld aar;
      aar13 = force? aar12;
      checkMissing(aar13);
      c267 = `is.object`(aar13);
      if c267 then L1() else L2(aar13);
    L0(dx127):
      return dx127;
    L1():
      dr112 = tryDispatchBuiltin.1("[", aar13);
      dc56 = getTryDispatchBuiltinDispatched(dr112);
      if dc56 then L3() else L2(dr112);
    L2(aar15):
      __19 = ldf `[` in base;
      r591 = dyn __19(aar15, -1);
      goto L0(r591);
    L3():
      dx126 = getTryDispatchBuiltinValue(dr112);
      goto L0(dx126);
    };
    p140 = prom<V +>{
      r593 = clos inner3708401697;
      return r593;
    };
    r595 = dyn vapply2(p139, p140, FALSE);
    check L1223() else D264();
  L1242():
    aut = ld aut;
    check L1244() else D271();
  L1243():
    r609 = dyn base50(<sym aut>, "error");
    goto L157(r609);
  L1282():
    dx140 = getTryDispatchBuiltinValue(dr126);
    goto L1279(r648, dx140);
  L1297():
    auth5 = force? auth4;
    checkMissing(auth5);
    l105 = ld out;
    c305 = `is.object`(l105);
    if c305 then L1299() else L1300(auth5, l105);
  L1303():
    p156 = prom<V +>{
      as_vector2 = ldf `as.vector`;
      p155 = prom<V +>{
        meta64 = ld meta;
        meta65 = force? meta64;
        checkMissing(meta65);
        c306 = `is.object`(meta65);
        if c306 then L1() else L2(meta65);
      L0(dx149):
        return dx149;
      L1():
        dr134 = tryDispatchBuiltin.1("[", meta65);
        dc67 = getTryDispatchBuiltinDispatched(dr134);
        if dc67 then L3() else L2(dr134);
      L2(meta67):
        __24 = ldf `[` in base;
        r671 = dyn __24(meta67, "Title");
        goto L0(r671);
      L3():
        dx148 = getTryDispatchBuiltinValue(dr134);
        goto L0(dx148);
      };
      r673 = dyn as_vector2(p155);
      return r673;
    };
    r675 = dyn trimws1(p156);
    check L1304() else D293();
  D189():
    deopt 752 [r435];
  D190():
    deopt 754 [];
  D192():
    deopt 766 [];
  D264():
    deopt 1051 [c253, c256, r595];
  D271():
    deopt 1082 [aut];
  D293():
    deopt 1176 [r675];
  L158(c281):
    c293 = `as.logical`(c281);
    if c293 then L1256() else L160();
  L1049():
    goto L108(r435);
  L1051():
    p99 = prom<V +>{
      bad10 = ld bad;
      bad11 = force? bad10;
      checkMissing(bad11);
      return bad11;
    };
    r437 = dyn _fmt1(p99);
    check L1052() else D191();
  L1058():
    p100 = prom<V +>{
      Rdb20 = ld Rdb0;
      Rdb21 = force? Rdb20;
      checkMissing(Rdb21);
      return Rdb21;
    };
    p101 = prom<V +>{
      r446 = clos inner1432497010;
      return r446;
    };
    r448 = dyn lapply3(p100, p101);
    check L1059() else D193();
  L1223():
    all = ldf all in base;
    r596 = dyn all(r595);
    check L1224() else D265();
  L1244():
    aut1 = force? aut;
    checkMissing(aut1);
    inherits3 = ldf inherits in base;
    r611 = dyn inherits3(aut1, "error", FALSE);
    check L1245() else D272();
  L1246():
    sym51 = ldf length;
    base51 = ldf length in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L1247() else L1248();
  L1298(auth9, dx147):
    st out = dx147;
    goto L169();
  L1299():
    dr132 = tryDispatchBuiltin.0("$<-", l105, auth5);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L1301() else L1300(auth5, dr132);
  L1300(auth7, l107):
    r670 = `$<-`(l107, <sym author_should_be_authors_at_R>, auth5);
    goto L1298(auth7, r670);
  L1304():
    st title = r675;
    gsub5 = ldf gsub;
    check L1305() else D294();
  D191():
    deopt 756 [r437];
  D193():
    deopt 769 [r448];
  D265():
    deopt 1053 [c253, c256, r596];
  D272():
    deopt 1087 [r611];
  D294():
    deopt 1179 [];
  L159(c284, r614):
    c290 = `as.logical`(r614);
    c291 = `&&`(c284, c290);
    goto L158(c291);
  L160():
    goto L155(NULL);
  L1052():
    l69 = ld out;
    c202 = `is.object`(l69);
    if c202 then L1054() else L1055(r437, l69);
  L1059():
    st bad = r448;
    Filter3 = ldf Filter;
    check L1060() else D194();
  L1224():
    goto L152(c253, c256, r596);
  L1245():
    goto L157(r611);
  L1247():
    aut2 = ld aut;
    check L1249() else D273();
  L1248():
    r613 = dyn base51(<lang `<-`(msg, `$`(aut, message))>);
    goto L159(c279, r613);
  L1256():
    msg = ld msg;
    check L1257() else D275();
  L1301():
    dx146 = getTryDispatchBuiltinValue(dr132);
    goto L1298(auth5, dx146);
  L1305():
    p157 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    r677 = dyn gsub5("[\n\t]", " ", p157);
    check L1306() else D295();
  D194():
    deopt 772 [];
  D273():
    deopt 1091 [c279, aut2];
  D275():
    deopt 1098 [msg];
  D295():
    deopt 1183 [r677];
  L1053(r441, dx105):
    st out = dx105;
    goto L110();
  L1054():
    dr90 = tryDispatchBuiltin.0("$<-", l69, r437);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L1056() else L1055(r437, dr90);
  L1055(r439, l71):
    r442 = `$<-`(l71, <sym Rd_keywords_or_concepts_more_than_one>, r437);
    goto L1053(r439, r442);
  L1060():
    p102 = prom<V +>{
      length17 = ld length;
      length18 = force? length17;
      checkMissing(length18);
      return length18;
    };
    p103 = prom<V +>{
      bad12 = ld bad;
      bad13 = force? bad12;
      checkMissing(bad13);
      return bad13;
    };
    r451 = dyn Filter3(p102, p103);
    check L1061() else D195();
  L1249():
    aut3 = force? aut2;
    checkMissing(aut3);
    c285 = `is.object`(aut3);
    if c285 then L1251() else L1252(c279, aut3);
  L1257():
    msg1 = force? msg;
    checkMissing(msg1);
    l96 = ld out;
    c294 = `is.object`(l96);
    if c294 then L1259() else L1260(msg1, l96);
  L1306():
    st title = r677;
    meta68 = ld meta;
    check L1307() else D296();
  D195():
    deopt 775 [r451];
  D296():
    deopt 1185 [meta68];
  L1056():
    dx104 = getTryDispatchBuiltinValue(dr90);
    goto L1053(r437, dx104);
  L1061():
    st bad = r451;
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L1062() else L1063();
  L1250(c289, dx133):
    st msg = dx133;
    length26 = ldf length in base;
    r616 = dyn length26(dx133);
    check L1254() else D274();
  L1251():
    dr118 = tryDispatchBuiltin.1("$", aut3);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L1253() else L1252(c279, dr118);
  L1252(c287, aut5):
    r615 = `$`(aut5, <sym message>);
    goto L1250(c287, r615);
  L1258(msg5, dx135):
    st out = dx135;
    goto L155(msg5);
  L1259():
    dr120 = tryDispatchBuiltin.0("$<-", l96, msg1);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L1261() else L1260(msg1, dr120);
  L1260(msg3, l98):
    r617 = `$<-`(l98, <sym authors_at_R_message>, msg1);
    goto L1258(msg3, r617);
  L1307():
    meta69 = force? meta68;
    checkMissing(meta69);
    c307 = `is.object`(meta69);
    if c307 then L1308() else L1309(meta69);
  D274():
    deopt 1096 [c289, r616];
  L111(r453):
    c203 = `as.logical`(r453);
    if c203 then L1066() else L112();
  L170(dx151):
    st package = dx151;
    tolower = ldf tolower;
    check L1311() else D297();
  L1062():
    bad14 = ld bad;
    check L1064() else D196();
  L1063():
    r452 = dyn base35(<sym bad>);
    goto L111(r452);
  L1253():
    dx132 = getTryDispatchBuiltinValue(dr118);
    goto L1250(c279, dx132);
  L1254():
    goto L159(c289, r616);
  L1261():
    dx134 = getTryDispatchBuiltinValue(dr120);
    goto L1258(msg1, dx134);
  L1308():
    dr136 = tryDispatchBuiltin.1("[", meta69);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L1310() else L1309(dr136);
  L1309(meta71):
    __25 = ldf `[` in base;
    r678 = dyn __25(meta71, "Package");
    goto L170(r678);
  D196():
    deopt 779 [bad14];
  D297():
    deopt 1192 [];
  L112():
    goto L113(NULL);
  L113(r462):
    goto L85();
  L1064():
    bad15 = force? bad14;
    checkMissing(bad15);
    length19 = ldf length in base;
    r454 = dyn length19(bad15);
    check L1065() else D197();
  L1066():
    _fmt2 = ldf `.fmt`;
    check L1067() else D198();
  L1310():
    dx150 = getTryDispatchBuiltinValue(dr136);
    goto L170(dx150);
  L1311():
    p158 = prom<V +>{
      title2 = ld title;
      title3 = force? title2;
      checkMissing(title3);
      return title3;
    };
    r680 = dyn tolower(p158);
    check L1312() else D298();
  D197():
    deopt 782 [r454];
  D198():
    deopt 784 [];
  D298():
    deopt 1194 [r680];
  L1065():
    goto L111(r454);
  L1067():
    p104 = prom<V +>{
      bad16 = ld bad;
      bad17 = force? bad16;
      checkMissing(bad17);
      return bad17;
    };
    r456 = dyn _fmt2(p104);
    check L1068() else D199();
  L1312():
    tolower1 = ldf tolower;
    check L1313() else D299();
  D199():
    deopt 786 [r456];
  D299():
    deopt 1195 [r680];
  L1068():
    l72 = ld out;
    c204 = `is.object`(l72);
    if c204 then L1070() else L1071(r456, l72);
  L1313():
    p159 = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      return package1;
    };
    r682 = dyn tolower1(p159);
    check L1314() else D300();
  D300():
    deopt 1197 [r680, r682];
  L1069(r460, dx107):
    st out = dx107;
    goto L113(r460);
  L1070():
    dr92 = tryDispatchBuiltin.0("$<-", l72, r456);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L1072() else L1071(r456, dr92);
  L1071(r458, l74):
    r461 = `$<-`(l74, <sym Rd_URLs_which_should_use_doi>, r456);
    goto L1069(r458, r461);
  L1314():
    r683 = `==`(r680, r682);
    c308 = `as.logical`(r683);
    if c308 then L1315() else L171();
  L171():
    grepl6 = ldf grepl;
    check L1321() else D301();
  L172():
    trimws2 = ldf trimws;
    check L1367() else D322();
  L1072():
    dx106 = getTryDispatchBuiltinValue(dr92);
    goto L1069(r456, dx106);
  L1315():
    l108 = ld out;
    c309 = `is.object`(l108);
    if c309 then L1317() else L1318(TRUE, l108);
  D301():
    deopt 1205 [];
  D322():
    deopt 1288 [];
  L1316(r687, dx153):
    st out = dx153;
    goto L172();
  L1317():
    dr138 = tryDispatchBuiltin.0("$<-", l108, TRUE);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L1319() else L1318(TRUE, dr138);
  L1318(r685, l110):
    r688 = `$<-`(l110, <sym title_is_name>, TRUE);
    goto L1316(r685, r688);
  L1321():
    p162 = prom<V +>{
      paste6 = ldf paste0;
      p161 = prom<V +>{
        gsub6 = ldf gsub;
        p160 = prom<V +>{
          package2 = ld package;
          package3 = force? package2;
          checkMissing(package3);
          return package3;
        };
        r691 = dyn gsub6[, , , fixed](".", "[.]", p160, TRUE);
        return r691;
      };
      r693 = dyn paste6("^", p161, "[ :]");
      return r693;
    };
    p163 = prom<V +>{
      title4 = ld title;
      title5 = force? title4;
      checkMissing(title5);
      return title5;
    };
    r696 = dyn grepl6[, , `ignore.case`](p162, p163, TRUE);
    check L1322() else D302();
  L1367():
    p174 = prom<V +>{
      as_vector3 = ldf `as.vector`;
      p173 = prom<V +>{
        meta76 = ld meta;
        meta77 = force? meta76;
        checkMissing(meta77);
        c329 = `is.object`(meta77);
        if c329 then L1() else L2(meta77);
      L0(dx161):
        return dx161;
      L1():
        dr146 = tryDispatchBuiltin.1("[", meta77);
        dc73 = getTryDispatchBuiltinDispatched(dr146);
        if dc73 then L3() else L2(dr146);
      L2(meta79):
        __27 = ldf `[` in base;
        r730 = dyn __27(meta79, "Description");
        goto L0(r730);
      L3():
        dx160 = getTryDispatchBuiltinValue(dr146);
        goto L0(dx160);
      };
      r732 = dyn as_vector3(p173);
      return r732;
    };
    r734 = dyn trimws2(p174);
    check L1368() else D323();
  D302():
    deopt 1210 [r696];
  D323():
    deopt 1290 [r734];
  L1319():
    dx152 = getTryDispatchBuiltinValue(dr138);
    goto L1316(TRUE, dx152);
  L1322():
    c310 = `as.logical`(r696);
    if c310 then L1323() else L173();
  L1368():
    st descr = r734;
    gsub7 = ldf gsub;
    check L1369() else D324();
  D324():
    deopt 1293 [];
  L173():
    goto L174();
  L174():
    meta72 = ld meta;
    check L1329() else D303();
  L1323():
    l111 = ld out;
    c311 = `is.object`(l111);
    if c311 then L1325() else L1326(TRUE, l111);
  L1369():
    p175 = prom<V +>{
      descr = ld descr;
      descr1 = force? descr;
      checkMissing(descr1);
      return descr1;
    };
    r736 = dyn gsub7("[\n\t]", " ", p175);
    check L1370() else D325();
  D303():
    deopt 1218 [meta72];
  D325():
    deopt 1297 [r736];
  L1324(r700, dx155):
    st out = dx155;
    goto L174();
  L1325():
    dr140 = tryDispatchBuiltin.0("$<-", l111, TRUE);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L1327() else L1326(TRUE, dr140);
  L1326(r698, l113):
    r701 = `$<-`(l113, <sym title_includes_name>, TRUE);
    goto L1324(r698, r701);
  L1329():
    meta73 = force? meta72;
    checkMissing(meta73);
    c312 = `is.object`(meta73);
    if c312 then L1330() else L1331(meta73);
  L1370():
    st descr = r736;
    meta80 = ld meta;
    check L1371() else D326();
  D326():
    deopt 1299 [meta80];
  L175(dx157):
    st language = dx157;
    sym57 = ldf `is.na`;
    base57 = ldf `is.na` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L1333() else L1334();
  L1327():
    dx154 = getTryDispatchBuiltinValue(dr140);
    goto L1324(TRUE, dx154);
  L1330():
    dr142 = tryDispatchBuiltin.1("[", meta73);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L1332() else L1331(dr142);
  L1331(meta75):
    __26 = ldf `[` in base;
    r703 = dyn __26(meta75, "Language");
    goto L175(r703);
  L1371():
    meta81 = force? meta80;
    checkMissing(meta81);
    c330 = `is.object`(meta81);
    if c330 then L1372() else L1373(meta81);
  L176(r705):
    c313 = `as.logical`(r705);
    if c313 then L177(c313) else L1337();
  L183(dx163):
    st package = dx163;
    grepl7 = ldf grepl;
    check L1375() else D327();
  L1332():
    dx156 = getTryDispatchBuiltinValue(dr142);
    goto L175(dx156);
  L1333():
    language6 = ld language;
    check L1335() else D304();
  L1334():
    r704 = dyn base57(<sym language>);
    goto L176(r704);
  L1372():
    dr148 = tryDispatchBuiltin.1("[", meta81);
    dc74 = getTryDispatchBuiltinDispatched(dr148);
    if dc74 then L1374() else L1373(dr148);
  L1373(meta83):
    __28 = ldf `[` in base;
    r737 = dyn __28(meta83, "Package");
    goto L183(r737);
  D304():
    deopt 1226 [language6];
  D327():
    deopt 1306 [];
  L177(c314):
    c319 = `as.logical`(c314);
    if c319 then L178(c319) else L1340();
  L1335():
    language7 = force? language6;
    checkMissing(language7);
    is_na6 = ldf `is.na` in base;
    r706 = dyn is_na6(language7);
    check L1336() else D305();
  L1337():
    language8 = ld language;
    check L1338() else D306();
  L1374():
    dx162 = getTryDispatchBuiltinValue(dr148);
    goto L183(dx162);
  L1375():
    p177 = prom<V +>{
      paste7 = ldf paste0;
      p176 = prom<V +>{
        package4 = ld package;
        package5 = force? package4;
        checkMissing(package5);
        return package5;
      };
      r739 = dyn paste7("^['\"]?", p176);
      return r739;
    };
    p178 = prom<V +>{
      descr2 = ld descr;
      descr3 = force? descr2;
      checkMissing(descr3);
      return descr3;
    };
    r742 = dyn grepl7[, `ignore.case`, ](p177, TRUE, p178);
    check L1376() else D328();
  D305():
    deopt 1229 [r706];
  D306():
    deopt 1230 [c313, language8];
  D328():
    deopt 1311 [r742];
  L178(c320):
    c325 = `as.logical`(c320);
    if c325 then L1344() else L179();
  L1336():
    goto L176(r706);
  L1338():
    language9 = force? language8;
    checkMissing(language9);
    r707 = `==`(language9, "en");
    c316 = `as.logical`(r707);
    c317 = `||`(c313, c316);
    goto L177(c317);
  L1340():
    startsWith1 = ldf startsWith;
    check L1341() else D307();
  L1376():
    c331 = `as.logical`(r742);
    if c331 then L1377() else L184();
  D307():
    deopt 1236 [c319];
  L179():
    goto L172();
  L184():
    goto L185();
  L185():
    grepl8 = ldf grepl;
    check L1383() else D329();
  L1341():
    p164 = prom<V +>{
      language10 = ld language;
      language11 = force? language10;
      checkMissing(language11);
      return language11;
    };
    r709 = dyn startsWith1(p164, "en-");
    check L1342() else D308();
  L1344():
    toTitleCase = ldf toTitleCase;
    check L1345() else D309();
  L1377():
    l118 = ld out;
    c332 = `is.object`(l118);
    if c332 then L1379() else L1380(TRUE, l118);
  D308():
    deopt 1239 [c319, r709];
  D309():
    deopt 1242 [];
  D329():
    deopt 1320 [];
  L1342():
    c322 = `as.logical`(r709);
    c323 = `||`(c319, c322);
    goto L178(c323);
  L1345():
    p165 = prom<V +>{
      title6 = ld title;
      title7 = force? title6;
      checkMissing(title7);
      return title7;
    };
    r711 = dyn toTitleCase(p165);
    check L1346() else D310();
  L1378(r746, dx165):
    st out = dx165;
    goto L185();
  L1379():
    dr150 = tryDispatchBuiltin.0("$<-", l118, TRUE);
    dc75 = getTryDispatchBuiltinDispatched(dr150);
    if dc75 then L1381() else L1380(TRUE, dr150);
  L1380(r744, l120):
    r747 = `$<-`(l120, <sym descr_bad_start>, TRUE);
    goto L1378(r744, r747);
  L1383():
    p179 = prom<V +>{
      descr4 = ld descr;
      descr5 = force? descr4;
      checkMissing(descr5);
      return descr5;
    };
    r750 = dyn grepl8("^(The|This|A|In this|In the) package", p179);
    check L1384() else D330();
  D310():
    deopt 1244 [r711];
  D330():
    deopt 1323 [r750];
  L1346():
    st title2 = r711;
    st p = "(^|(?<=[ \t[:punct:]]))'[^']*'($|(?=[ \t[:punct:]]))";
    gregexpr = ldf gregexpr;
    check L1347() else D311();
  L1381():
    dx164 = getTryDispatchBuiltinValue(dr150);
    goto L1378(TRUE, dx164);
  L1384():
    c333 = `as.logical`(r750);
    if c333 then L1385() else L186();
  D311():
    deopt 1250 [];
  L186():
    goto L187();
  L187():
    isTRUE = ldf isTRUE;
    check L1391() else D331();
  L1347():
    p168 = prom<V +>{
      p166 = ld p;
      p167 = force? p166;
      checkMissing(p167);
      return p167;
    };
    p169 = prom<V +>{
      title8 = ld title;
      title9 = force? title8;
      checkMissing(title9);
      return title9;
    };
    r714 = dyn gregexpr[, , perl](p168, p169, TRUE);
    check L1348() else D312();
  L1385():
    l121 = ld out;
    c334 = `is.object`(l121);
    if c334 then L1387() else L1388(TRUE, l121);
  D312():
    deopt 1255 [r714];
  D331():
    deopt 1332 [];
  L1348():
    st m = r714;
    regmatches = ldf regmatches;
    check L1349() else D313();
  L1386(r754, dx167):
    st out = dx167;
    goto L187();
  L1387():
    dr152 = tryDispatchBuiltin.0("$<-", l121, TRUE);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L1389() else L1388(TRUE, dr152);
  L1388(r752, l123):
    r755 = `$<-`(l123, <sym descr_bad_start>, TRUE);
    goto L1386(r752, r755);
  L1391():
    p180 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      c335 = `is.object`(out5);
      if c335 then L1() else L2(out5);
    L0(dx169):
      return dx169;
    L1():
      dr154 = tryDispatchBuiltin.1("$", out5);
      dc77 = getTryDispatchBuiltinDispatched(dr154);
      if dc77 then L3() else L2(dr154);
    L2(out7):
      r757 = `$`(out7, <sym descr_bad_start>);
      goto L0(r757);
    L3():
      dx168 = getTryDispatchBuiltinValue(dr154);
      goto L0(dx168);
    };
    r759 = dyn isTRUE(p180);
    check L1392() else D332();
  D313():
    deopt 1258 [];
  D332():
    deopt 1334 [r759];
  L1349():
    p170 = prom<V +>{
      title10 = ld title;
      title11 = force? title10;
      checkMissing(title11);
      return title11;
    };
    p171 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r717 = dyn regmatches(p170, p171);
    check L1350() else D314();
  L1389():
    dx166 = getTryDispatchBuiltinValue(dr152);
    goto L1386(TRUE, dx166);
  L1392():
    r760 = `!`(r759);
    c336 = `as.logical`(r760);
    if c336 then L1393() else L188(c336);
  D314():
    deopt 1261 [r717];
  L188(c338):
    c342 = `as.logical`(c338);
    if c342 then L1397() else L189();
  L1350():
    l114 = ld title2;
    regmatches__ = ldf `regmatches<-`;
    check L1351() else D315();
  L1393():
    grepl9 = ldf grepl;
    check L1394() else D333();
  D315():
    deopt 1263 [r717, l114, r717];
  D333():
    deopt 1337 [c336];
  L189():
    goto L190();
  L190():
    strwrap = ldf strwrap;
    check L1403() else D335();
  L1351():
    p172 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r719 = dyn regmatches__(l114, NULL, p172, r717);
    check L1352() else D316();
  L1394():
    p181 = prom<V +>{
      descr6 = ld descr;
      descr7 = force? descr6;
      checkMissing(descr7);
      return descr7;
    };
    r762 = dyn grepl9("^['\"]?[[:upper:]]", p181);
    check L1395() else D334();
  L1397():
    l124 = ld out;
    c343 = `is.object`(l124);
    if c343 then L1399() else L1400(TRUE, l124);
  D316():
    deopt 1266 [r717, r719];
  D334():
    deopt 1340 [c336, r762];
  D335():
    deopt 1351 [];
  L1352():
    st title2 = r719;
    title12 = ld title;
    check L1353() else D317();
  L1395():
    r763 = `!`(r762);
    c339 = `as.logical`(r763);
    c340 = `&&`(c336, c339);
    goto L188(c340);
  L1398(r767, dx171):
    st out = dx171;
    goto L190();
  L1399():
    dr156 = tryDispatchBuiltin.0("$<-", l124, TRUE);
    dc78 = getTryDispatchBuiltinDispatched(dr156);
    if dc78 then L1401() else L1400(TRUE, dr156);
  L1400(r765, l126):
    r768 = `$<-`(l126, <sym descr_bad_initial>, TRUE);
    goto L1398(r765, r768);
  L1403():
    p182 = prom<V +>{
      descr8 = ld descr;
      descr9 = force? descr8;
      checkMissing(descr9);
      return descr9;
    };
    r771 = dyn strwrap(p182);
    check L1404() else D336();
  D317():
    deopt 1268 [title12];
  D336():
    deopt 1353 [r771];
  L1353():
    title13 = force? title12;
    checkMissing(title13);
    title14 = ld title2;
    check L1354() else D318();
  L1401():
    dx170 = getTryDispatchBuiltinValue(dr156);
    goto L1398(TRUE, dx170);
  L1404():
    st descr = r771;
    sym59 = ldf any;
    base59 = ldf any in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L1405() else L1406();
  D318():
    deopt 1269 [title13, title14];
  L191(r773):
    c344 = `as.logical`(r773);
    if c344 then L1410() else L192();
  L1354():
    title15 = force? title14;
    checkMissing(title15);
    r720 = `!=`(title13, title15);
    c326 = `as.logical`(r720);
    if c326 then L1355() else L180();
  L1405():
    grepl10 = ldf grepl;
    check L1407() else D337();
  L1406():
    r772 = dyn base59(<lang `<-`(ind, grepl("(^|[^<])https?://", descr))>);
    goto L191(r772);
  D337():
    deopt 1358 [];
  L180():
    goto L182(NULL);
  L182(r729):
    goto L172();
  L192():
    goto L194();
  L194():
    sym60 = ldf any;
    base60 = ldf any in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L1421() else L1422();
  L1355():
    sym58 = ldf c;
    base58 = ldf c in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L1356() else L1357();
  L1407():
    p183 = prom<V +>{
      descr10 = ld descr;
      descr11 = force? descr10;
      checkMissing(descr11);
      return descr11;
    };
    r775 = dyn grepl10("(^|[^<])https?://", p183);
    check L1408() else D338();
  L1410():
    descr12 = ld descr;
    check L1411() else D340();
  D338():
    deopt 1361 [r775];
  D340():
    deopt 1365 [descr12];
  L181(r722):
    l115 = ld out;
    c328 = `is.object`(l115);
    if c328 then L1362() else L1363(r722, l115);
  L195(r780):
    c348 = `as.logical`(r780);
    if c348 then L1426() else L196();
  L1356():
    title16 = ld title;
    check L1358() else D319();
  L1357():
    r721 = dyn base58(<sym title>, <sym title2>);
    goto L181(r721);
  L1408():
    st ind = r775;
    any3 = ldf any in base;
    r776 = dyn any3(r775);
    check L1409() else D339();
  L1411():
    descr13 = force? descr12;
    checkMissing(descr13);
    c345 = `is.object`(descr13);
    if c345 then L1412() else L1413(descr13);
  L1421():
    grepl11 = ldf grepl;
    check L1423() else D342();
  L1422():
    r779 = dyn base60(<lang `<-`(ind, grepl(paste(c("https?:.*doi.org/", "(^|[^<])doi:", "<doi[^:]", "<10[.]"), collapse="|"), descr, ignore.case=TRUE))>);
    goto L195(r779);
  D319():
    deopt 1274 [title16];
  D339():
    deopt 1364 [r776];
  D342():
    deopt 1378 [];
  L193(dx173):
    l127 = ld out;
    c346 = `is.object`(l127);
    if c346 then L1417() else L1418(dx173, l127);
  L196():
    sym62 = ldf any;
    base62 = ldf any in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L1437() else L1438();
  L198():
    sym63 = ldf any;
    base63 = ldf any in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L1453() else L1454();
  L1358():
    title17 = force? title16;
    checkMissing(title17);
    title18 = ld title2;
    check L1359() else D320();
  L1361(r727, dx159):
    st out = dx159;
    goto L182(r727);
  L1362():
    dr144 = tryDispatchBuiltin.0("$<-", l115, r722);
    dc72 = getTryDispatchBuiltinDispatched(dr144);
    if dc72 then L1364() else L1363(r722, dr144);
  L1363(r725, l117):
    r728 = `$<-`(l117, <sym title_case>, r722);
    goto L1361(r725, r728);
  L1409():
    goto L191(r776);
  L1412():
    dr158 = tryDispatchBuiltin.1("[", descr13);
    dc79 = getTryDispatchBuiltinDispatched(dr158);
    if dc79 then L1414() else L1413(dr158);
  L1413(descr15):
    ind2 = ld ind;
    check L1415() else D341();
  L1423():
    p185 = prom<V +>{
      paste8 = ldf paste;
      p184 = prom<V +>{
        sym61 = ldf c;
        base61 = ldf c in base;
        guard61 = `==`.4(sym61, base61);
        if guard61 then L1() else L2();
      L0(r782):
        return r782;
      L1():
        c347 = ldf c in base;
        r783 = dyn c347("https?:.*doi.org/", "(^|[^<])doi:", "<doi[^:]", "<10[.]");
        goto L0(r783);
      L2():
        r781 = dyn base61("https?:.*doi.org/", "(^|[^<])doi:", "<doi[^:]", "<10[.]");
        goto L0(r781);
      };
      r785 = dyn paste8[, collapse](p184, "|");
      return r785;
    };
    p186 = prom<V +>{
      descr16 = ld descr;
      descr17 = force? descr16;
      checkMissing(descr17);
      return descr17;
    };
    r788 = dyn grepl11[, , `ignore.case`](p185, p186, TRUE);
    check L1424() else D343();
  L1426():
    descr18 = ld descr;
    check L1427() else D345();
  D320():
    deopt 1276 [title18];
  D341():
    deopt 1367 [descr15, ind2];
  D343():
    deopt 1383 [r788];
  D345():
    deopt 1387 [descr18];
  L199(r793):
    c351 = `as.logical`(r793);
    if c351 then L1442() else L200();
  L202(r800):
    c355 = `as.logical`(r800);
    if c355 then L1458() else L203();
  L1359():
    title19 = force? title18;
    checkMissing(title19);
    c327 = ldf c in base;
    r723 = dyn c327(title17, title19);
    check L1360() else D321();
  L1364():
    dx158 = getTryDispatchBuiltinValue(dr144);
    goto L1361(r722, dx158);
  L1414():
    dx172 = getTryDispatchBuiltinValue(dr158);
    goto L193(dx172);
  L1415():
    ind3 = force? ind2;
    __29 = ldf `[` in base;
    r777 = dyn __29(descr15, ind3);
    goto L193(r777);
  L1416(dx178, dx179):
    st out = dx179;
    goto L194();
  L1417():
    dr160 = tryDispatchBuiltin.0("$<-", l127, dx173);
    dc80 = getTryDispatchBuiltinDispatched(dr160);
    if dc80 then L1419() else L1418(dx173, dr160);
  L1418(dx175, l129):
    r778 = `$<-`(l129, <sym descr_bad_URLs>, dx173);
    goto L1416(dx175, r778);
  L1424():
    st ind = r788;
    any4 = ldf any in base;
    r789 = dyn any4(r788);
    check L1425() else D344();
  L1427():
    descr19 = force? descr18;
    checkMissing(descr19);
    c349 = `is.object`(descr19);
    if c349 then L1428() else L1429(descr19);
  L1437():
    grepl12 = ldf grepl;
    check L1439() else D347();
  L1438():
    r792 = dyn base62(<lang `<-`(ind, grepl("<https?:.*/10\\.\\d{4,}/.*?>", descr, ignore.case=TRUE))>);
    goto L199(r792);
  L1453():
    grepl13 = ldf grepl;
    check L1455() else D352();
  L1454():
    r799 = dyn base63(<lang `<-`(ind, grepl(paste(c("<(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?>", "https?://arxiv.org", "(^|[^<])arxiv:", "<arxiv[^:]"), collapse="|"), descr, ignore.case=TRUE))>);
    goto L202(r799);
  D321():
    deopt 1279 [r723];
  D344():
    deopt 1386 [r789];
  D347():
    deopt 1398 [];
  D352():
    deopt 1420 [];
  L197(dx182):
    l130 = ld out;
    c350 = `is.object`(l130);
    if c350 then L1433() else L1434(dx182, l130);
  L200():
    goto L198();
  L203():
    goto L205();
  L205():
    sym65 = ldf `is.na`;
    base65 = ldf `is.na` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L1469() else L1470();
  L1360():
    goto L181(r723);
  L1419():
    dx177 = getTryDispatchBuiltinValue(dr160);
    goto L1416(dx173, dx177);
  L1425():
    goto L195(r789);
  L1428():
    dr162 = tryDispatchBuiltin.1("[", descr19);
    dc81 = getTryDispatchBuiltinDispatched(dr162);
    if dc81 then L1430() else L1429(dr162);
  L1429(descr21):
    ind4 = ld ind;
    check L1431() else D346();
  L1439():
    p187 = prom<V +>{
      descr22 = ld descr;
      descr23 = force? descr22;
      checkMissing(descr23);
      return descr23;
    };
    r795 = dyn grepl12[, , `ignore.case`]("<https?:.*/10\\.\\d{4,}/.*?>", p187, TRUE);
    check L1440() else D348();
  L1442():
    descr24 = ld descr;
    check L1443() else D350();
  L1455():
    p189 = prom<V +>{
      paste9 = ldf paste;
      p188 = prom<V +>{
        sym64 = ldf c;
        base64 = ldf c in base;
        guard64 = `==`.4(sym64, base64);
        if guard64 then L1() else L2();
      L0(r802):
        return r802;
      L1():
        c354 = ldf c in base;
        r803 = dyn c354("<(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?>", "https?://arxiv.org", "(^|[^<])arxiv:", "<arxiv[^:]");
        goto L0(r803);
      L2():
        r801 = dyn base64("<(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?>", "https?://arxiv.org", "(^|[^<])arxiv:", "<arxiv[^:]");
        goto L0(r801);
      };
      r805 = dyn paste9[, collapse](p188, "|");
      return r805;
    };
    p190 = prom<V +>{
      descr28 = ld descr;
      descr29 = force? descr28;
      checkMissing(descr29);
      return descr29;
    };
    r808 = dyn grepl13[, , `ignore.case`](p189, p190, TRUE);
    check L1456() else D353();
  L1458():
    descr30 = ld descr;
    check L1459() else D355();
  D346():
    deopt 1389 [descr21, ind4];
  D348():
    deopt 1403 [r795];
  D350():
    deopt 1407 [descr24];
  D353():
    deopt 1425 [r808];
  D355():
    deopt 1429 [descr30];
  L206(r813):
    r816 = `!`(r813);
    c359 = `as.logical`(r816);
    if c359 then L1476() else L208(c359);
  L1430():
    dx181 = getTryDispatchBuiltinValue(dr162);
    goto L197(dx181);
  L1431():
    ind5 = force? ind4;
    __30 = ldf `[` in base;
    r790 = dyn __30(descr21, ind5);
    goto L197(r790);
  L1432(dx187, dx188):
    st out = dx188;
    goto L198();
  L1433():
    dr164 = tryDispatchBuiltin.0("$<-", l130, dx182);
    dc82 = getTryDispatchBuiltinDispatched(dr164);
    if dc82 then L1435() else L1434(dx182, dr164);
  L1434(dx184, l132):
    r791 = `$<-`(l132, <sym descr_bad_DOIs>, dx182);
    goto L1432(dx184, r791);
  L1440():
    st ind = r795;
    any5 = ldf any in base;
    r796 = dyn any5(r795);
    check L1441() else D349();
  L1443():
    descr25 = force? descr24;
    checkMissing(descr25);
    c352 = `is.object`(descr25);
    if c352 then L1444() else L1445(descr25);
  L1456():
    st ind = r808;
    any6 = ldf any in base;
    r809 = dyn any6(r808);
    check L1457() else D354();
  L1459():
    descr31 = force? descr30;
    checkMissing(descr31);
    c356 = `is.object`(descr31);
    if c356 then L1460() else L1461(descr31);
  L1469():
    meta84 = ld meta;
    check L1471() else D357();
  L1470():
    r812 = dyn base65(<lang `<-`(v, `[`(meta, "URL"))>);
    goto L206(r812);
  D349():
    deopt 1406 [r796];
  D354():
    deopt 1428 [r809];
  D357():
    deopt 1441 [meta84];
  L201(dx191):
    l133 = ld out;
    c353 = `is.object`(l133);
    if c353 then L1449() else L1450(dx191, l133);
  L204(dx199):
    l136 = ld out;
    c357 = `is.object`(l136);
    if c357 then L1465() else L1466(dx199, l136);
  L208(c361):
    c368 = `as.logical`(c361);
    if c368 then L1483() else L210();
  L1435():
    dx186 = getTryDispatchBuiltinValue(dr164);
    goto L1432(dx182, dx186);
  L1441():
    goto L199(r796);
  L1444():
    dr166 = tryDispatchBuiltin.1("[", descr25);
    dc83 = getTryDispatchBuiltinDispatched(dr166);
    if dc83 then L1446() else L1445(dr166);
  L1445(descr27):
    ind6 = ld ind;
    check L1447() else D351();
  L1457():
    goto L202(r809);
  L1460():
    dr170 = tryDispatchBuiltin.1("[", descr31);
    dc85 = getTryDispatchBuiltinDispatched(dr170);
    if dc85 then L1462() else L1461(dr170);
  L1461(descr33):
    ind8 = ld ind;
    check L1463() else D356();
  L1471():
    meta85 = force? meta84;
    checkMissing(meta85);
    c358 = `is.object`(meta85);
    if c358 then L1472() else L1473(meta85);
  L1476():
    sym66 = ldf length;
    base66 = ldf length in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L1477() else L1478();
  D351():
    deopt 1409 [descr27, ind6];
  D356():
    deopt 1431 [descr33, ind8];
  L207(dx208):
    st v = dx208;
    is_na7 = ldf `is.na` in base;
    r815 = dyn is_na7(dx208);
    check L1475() else D358();
  L209(c364, r818):
    c365 = `as.logical`(r818);
    c366 = `&&`(c364, c365);
    goto L208(c366);
  L210():
    goto L211();
  L211():
    sym67 = ldf `is.na`;
    base67 = ldf `is.na` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L1490() else L1491();
  L1446():
    dx190 = getTryDispatchBuiltinValue(dr166);
    goto L201(dx190);
  L1447():
    ind7 = force? ind6;
    __31 = ldf `[` in base;
    r797 = dyn __31(descr27, ind7);
    goto L201(r797);
  L1448(dx196, dx197):
    st out = dx197;
    goto L198();
  L1449():
    dr168 = tryDispatchBuiltin.0("$<-", l133, dx191);
    dc84 = getTryDispatchBuiltinDispatched(dr168);
    if dc84 then L1451() else L1450(dx191, dr168);
  L1450(dx193, l135):
    r798 = `$<-`(l135, <sym descr_replace_by_DOI>, dx191);
    goto L1448(dx193, r798);
  L1462():
    dx198 = getTryDispatchBuiltinValue(dr170);
    goto L204(dx198);
  L1463():
    ind9 = force? ind8;
    __32 = ldf `[` in base;
    r810 = dyn __32(descr33, ind9);
    goto L204(r810);
  L1464(dx204, dx205):
    st out = dx205;
    goto L205();
  L1465():
    dr172 = tryDispatchBuiltin.0("$<-", l136, dx199);
    dc86 = getTryDispatchBuiltinDispatched(dr172);
    if dc86 then L1467() else L1466(dx199, dr172);
  L1466(dx201, l138):
    r811 = `$<-`(l138, <sym descr_bad_arXiv_ids>, dx199);
    goto L1464(dx201, r811);
  L1472():
    dr174 = tryDispatchBuiltin.1("[", meta85);
    dc87 = getTryDispatchBuiltinDispatched(dr174);
    if dc87 then L1474() else L1473(dr174);
  L1473(meta87):
    __33 = ldf `[` in base;
    r814 = dyn __33(meta87, "URL");
    goto L207(r814);
  L1477():
    _bad_DESCRIPTION_URL_field_parts = ldf `.bad_DESCRIPTION_URL_field_parts`;
    check L1479() else D359();
  L1478():
    r817 = dyn base66(<lang `<-`(z, .bad_DESCRIPTION_URL_field_parts(v))>);
    goto L209(c359, r817);
  L1483():
    z = ld z;
    check L1484() else D362();
  D358():
    deopt 1448 [r815];
  D359():
    deopt 1453 [c359];
  D362():
    deopt 1460 [z];
  L212(r824):
    r827 = `!`(r824);
    c371 = `as.logical`(r827);
    if c371 then L1497() else L214();
  L1451():
    dx195 = getTryDispatchBuiltinValue(dr168);
    goto L1448(dx191, dx195);
  L1467():
    dx203 = getTryDispatchBuiltinValue(dr172);
    goto L1464(dx199, dx203);
  L1474():
    dx207 = getTryDispatchBuiltinValue(dr174);
    goto L207(dx207);
  L1475():
    goto L206(r815);
  L1479():
    p191 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    r820 = dyn _bad_DESCRIPTION_URL_field_parts(p191);
    check L1480() else D360();
  L1484():
    z1 = force? z;
    checkMissing(z1);
    l139 = ld out;
    c369 = `is.object`(l139);
    if c369 then L1486() else L1487(z1, l139);
  L1490():
    meta88 = ld meta;
    check L1492() else D363();
  L1491():
    r823 = dyn base67(<lang `<-`(v, `[`(meta, "BugReports"))>);
    goto L212(r823);
  D360():
    deopt 1455 [c359, r820];
  D363():
    deopt 1469 [meta88];
  L214():
    goto L219();
  L219():
    config_val_to_logical3 = ldf config_val_to_logical;
    check L1521() else D377();
  L1480():
    st z = r820;
    length28 = ldf length in base;
    r821 = dyn length28(r820);
    check L1481() else D361();
  L1485(z5, dx210):
    st out = dx210;
    goto L211();
  L1486():
    dr176 = tryDispatchBuiltin.0("$<-", l139, z1);
    dc88 = getTryDispatchBuiltinDispatched(dr176);
    if dc88 then L1488() else L1487(z1, dr176);
  L1487(z3, l141):
    r822 = `$<-`(l141, <sym url_field_parts>, z1);
    goto L1485(z3, r822);
  L1492():
    meta89 = force? meta88;
    checkMissing(meta89);
    c370 = `is.object`(meta89);
    if c370 then L1493() else L1494(meta89);
  L1497():
    parse_URI_reference = ldf parse_URI_reference;
    check L1498() else D365();
  D361():
    deopt 1458 [c359, r821];
  D365():
    deopt 1479 [];
  D377():
    deopt 1521 [];
  L213(dx212):
    st v = dx212;
    is_na8 = ldf `is.na` in base;
    r826 = dyn is_na8(dx212);
    check L1496() else D364();
  L1481():
    goto L209(c359, r821);
  L1488():
    dx209 = getTryDispatchBuiltinValue(dr176);
    goto L1485(z1, dx209);
  L1493():
    dr178 = tryDispatchBuiltin.1("[", meta89);
    dc89 = getTryDispatchBuiltinDispatched(dr178);
    if dc89 then L1495() else L1494(dr178);
  L1494(meta91):
    __34 = ldf `[` in base;
    r825 = dyn __34(meta91, "BugReports");
    goto L213(r825);
  L1498():
    p192 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    r829 = dyn parse_URI_reference(p192);
    check L1499() else D366();
  L1521():
    p203 = prom<V +>{
      Sys_getenv3 = ldf `Sys.getenv`;
      r864 = dyn Sys_getenv3("_R_CHECK_CRAN_INCOMING_SKIP_DATES_", "FALSE");
      return r864;
    };
    r866 = dyn config_val_to_logical3(p203);
    check L1522() else D378();
  D364():
    deopt 1476 [r826];
  D366():
    deopt 1481 [r829];
  D378():
    deopt 1523 [r866];
  L1495():
    dx211 = getTryDispatchBuiltinValue(dr178);
    goto L213(dx211);
  L1496():
    goto L212(r826);
  L1499():
    st z = r829;
    endsWith = ldf endsWith;
    check L1500() else D367();
  L1522():
    st skip_dates = r866;
    trimws3 = ldf trimws;
    check L1523() else D379();
  D367():
    deopt 1484 [];
  D379():
    deopt 1526 [];
  L1500():
    p194 = prom<V +>{
      tolower2 = ldf tolower;
      p193 = prom<V +>{
        z7 = ld z;
        z8 = force? z7;
        checkMissing(z8);
        c372 = `is.object`(z8);
        if c372 then L1() else L2(z8);
      L0(dx214):
        return dx214;
      L1():
        dr180 = tryDispatchBuiltin.1("$", z8);
        dc90 = getTryDispatchBuiltinDispatched(dr180);
        if dc90 then L3() else L2(dr180);
      L2(z10):
        r830 = `$`(z10, <sym authority>);
        goto L0(r830);
      L3():
        dx213 = getTryDispatchBuiltinValue(dr180);
        goto L0(dx213);
      };
      r832 = dyn tolower2(p193);
      return r832;
    };
    r834 = dyn endsWith(p194, "github.com");
    check L1501() else D368();
  L1523():
    p205 = prom<V +>{
      as_vector4 = ldf `as.vector`;
      p204 = prom<V +>{
        meta92 = ld meta;
        meta93 = force? meta92;
        checkMissing(meta93);
        c390 = `is.object`(meta93);
        if c390 then L1() else L2(meta93);
      L0(dx222):
        return dx222;
      L1():
        dr188 = tryDispatchBuiltin.1("[", meta93);
        dc94 = getTryDispatchBuiltinDispatched(dr188);
        if dc94 then L3() else L2(dr188);
      L2(meta95):
        __35 = ldf `[` in base;
        r867 = dyn __35(meta95, "Date");
        goto L0(r867);
      L3():
        dx221 = getTryDispatchBuiltinValue(dr188);
        goto L0(dx221);
      };
      r869 = dyn as_vector4(p204);
      return r869;
    };
    r871 = dyn trimws3(p205);
    check L1524() else D380();
  D368():
    deopt 1487 [r834];
  D380():
    deopt 1528 [r871];
  L1501():
    c373 = `as.logical`(r834);
    if c373 then L215(c373) else L1502();
  L1524():
    st date = r871;
    sym69 = ldf `is.na`;
    base69 = ldf `is.na` in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L1525() else L1526();
  L215(c374):
    c380 = `as.logical`(c374);
    if c380 then L1506() else L216(c380);
  L220(r873):
    r875 = `!`(r873);
    c391 = `as.logical`(r875);
    if c391 then L1529() else L221();
  L1502():
    endsWith1 = ldf endsWith;
    check L1503() else D369();
  L1525():
    date = ld date;
    check L1527() else D381();
  L1526():
    r872 = dyn base69(<sym date>);
    goto L220(r872);
  D369():
    deopt 1489 [c373];
  D381():
    deopt 1532 [date];
  L216(c382):
    c387 = `as.logical`(c382);
    if c387 then L1510() else L217();
  L221():
    goto L227();
  L227():
    trimws4 = ldf trimws;
    check L1556() else D392();
  L1503():
    p196 = prom<V +>{
      tolower3 = ldf tolower;
      p195 = prom<V +>{
        z11 = ld z;
        z12 = force? z11;
        checkMissing(z12);
        c376 = `is.object`(z12);
        if c376 then L1() else L2(z12);
      L0(dx216):
        return dx216;
      L1():
        dr182 = tryDispatchBuiltin.1("$", z12);
        dc91 = getTryDispatchBuiltinDispatched(dr182);
        if dc91 then L3() else L2(dr182);
      L2(z14):
        r835 = `$`(z14, <sym authority>);
        goto L0(r835);
      L3():
        dx215 = getTryDispatchBuiltinValue(dr182);
        goto L0(dx215);
      };
      r837 = dyn tolower3(p195);
      return r837;
    };
    r839 = dyn endsWith1(p196, "gitlab.com");
    check L1504() else D370();
  L1506():
    basename1 = ldf basename;
    check L1507() else D371();
  L1527():
    date1 = force? date;
    checkMissing(date1);
    is_na9 = ldf `is.na` in base;
    r874 = dyn is_na9(date1);
    check L1528() else D382();
  L1529():
    strptime = ldf strptime;
    check L1530() else D383();
  D370():
    deopt 1492 [c373, r839];
  D371():
    deopt 1495 [c380];
  D382():
    deopt 1535 [r874];
  D383():
    deopt 1538 [];
  D392():
    deopt 1579 [];
  L217():
    goto L218(NULL);
  L218(r862):
    goto L219();
  L1504():
    c377 = `as.logical`(r839);
    c378 = `||`(c373, c377);
    goto L215(c378);
  L1507():
    p197 = prom<V +>{
      z15 = ld z;
      z16 = force? z15;
      checkMissing(z16);
      c383 = `is.object`(z16);
      if c383 then L1() else L2(z16);
    L0(dx218):
      return dx218;
    L1():
      dr184 = tryDispatchBuiltin.1("$", z16);
      dc92 = getTryDispatchBuiltinDispatched(dr184);
      if dc92 then L3() else L2(dr184);
    L2(z18):
      r840 = `$`(z18, <sym path>);
      goto L0(r840);
    L3():
      dx217 = getTryDispatchBuiltinValue(dr184);
      goto L0(dx217);
    };
    r842 = dyn basename1(p197);
    check L1508() else D372();
  L1510():
    sprintf = ldf sprintf;
    check L1511() else D373();
  L1528():
    goto L220(r874);
  L1530():
    p206 = prom<V +>{
      date2 = ld date;
      date3 = force? date2;
      checkMissing(date3);
      return date3;
    };
    r877 = dyn strptime[, , tz](p206, "%Y-%m-%d", "GMT");
    check L1531() else D384();
  L1556():
    p209 = prom<V +>{
      as_vector5 = ldf `as.vector`;
      p208 = prom<V +>{
        meta96 = ld meta;
        meta97 = force? meta96;
        checkMissing(meta97);
        c402 = `is.object`(meta97);
        if c402 then L1() else L2(meta97);
      L0(dx228):
        return dx228;
      L1():
        dr194 = tryDispatchBuiltin.1("[", meta97);
        dc97 = getTryDispatchBuiltinDispatched(dr194);
        if dc97 then L3() else L2(dr194);
      L2(meta99):
        __36 = ldf `[` in base;
        r899 = dyn __36(meta99, "Packaged");
        goto L0(r899);
      L3():
        dx227 = getTryDispatchBuiltinValue(dr194);
        goto L0(dx227);
      };
      r901 = dyn as_vector5(p208);
      return r901;
    };
    r903 = dyn trimws4(p209);
    check L1557() else D393();
  D372():
    deopt 1497 [c380, r842];
  D373():
    deopt 1502 [];
  D384():
    deopt 1543 [r877];
  D393():
    deopt 1581 [r903];
  L1508():
    r843 = `!=`(r842, "issues");
    c384 = `as.logical`(r843);
    c385 = `&&`(c380, c384);
    goto L216(c385);
  L1511():
    p199 = prom<V +>{
      sub2 = ldf sub;
      p198 = prom<V +>{
        v4 = ld v;
        v5 = force? v4;
        checkMissing(v5);
        return v5;
      };
      r845 = dyn sub2("/$", "", p198);
      return r845;
    };
    r847 = dyn sprintf("%s/issues", p199);
    check L1512() else D374();
  L1531():
    st dd = r877;
    sym70 = ldf `is.na`;
    base70 = ldf `is.na` in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L1532() else L1533();
  L1557():
    st ptime = r903;
    sym71 = ldf `is.na`;
    base71 = ldf `is.na` in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L1558() else L1559();
  D374():
    deopt 1505 [r847];
  L222(r879):
    c392 = `as.logical`(r879);
    if c392 then L1536() else L223();
  L228(r905):
    c403 = `as.logical`(r905);
    if c403 then L1562() else L229();
  L1512():
    st w = r847;
    paste10 = ldf paste;
    check L1513() else D375();
  L1532():
    dd = ld dd;
    check L1534() else D385();
  L1533():
    r878 = dyn base70(<sym dd>);
    goto L222(r878);
  L1558():
    ptime = ld ptime;
    check L1560() else D394();
  L1559():
    r904 = dyn base71(<sym ptime>);
    goto L228(r904);
  D375():
    deopt 1508 [];
  D385():
    deopt 1547 [dd];
  D394():
    deopt 1585 [ptime];
  L223():
    skip_dates = ld skip_dates;
    check L1542() else D387();
  L224(r886):
    goto L227();
  L229():
    strptime1 = ldf strptime;
    check L1568() else D396();
  L230():
    sym73 = ldf c;
    base73 = ldf c in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L1593() else L1594();
  L1513():
    p202 = prom<V +>{
      sym68 = ldf c;
      base68 = ldf c in base;
      guard68 = `==`.4(sym68, base68);
      if guard68 then L1() else L2();
    L0(r849):
      return r849;
    L1():
      sprintf1 = ldf sprintf;
      p200 = prom<V +>{
        v6 = ld v;
        v7 = force? v6;
        checkMissing(v7);
        return v7;
      };
      r851 = dyn sprintf1("  %s", p200);
      sprintf2 = ldf sprintf;
      p201 = prom<V +>{
        w = ld w;
        w1 = force? w;
        checkMissing(w1);
        return w1;
      };
      r853 = dyn sprintf2("  %s", p201);
      c388 = ldf c in base;
      r854 = dyn c388("The BugReports field in DESCRIPTION has", r851, "which should likely be", r853, "instead.");
      goto L0(r854);
    L2():
      r848 = dyn base68("The BugReports field in DESCRIPTION has", <lang sprintf("  %s", v)>, "which should likely be", <lang sprintf("  %s", w)>, "instead.");
      goto L0(r848);
    };
    r856 = dyn paste10[, collapse](p202, "\n");
    check L1514() else D376();
  L1534():
    dd1 = force? dd;
    checkMissing(dd1);
    is_na10 = ldf `is.na` in base;
    r880 = dyn is_na10(dd1);
    check L1535() else D386();
  L1536():
    l145 = ld out;
    c393 = `is.object`(l145);
    if c393 then L1538() else L1539(TRUE, l145);
  L1560():
    ptime1 = force? ptime;
    checkMissing(ptime1);
    is_na11 = ldf `is.na` in base;
    r906 = dyn is_na11(ptime1);
    check L1561() else D395();
  L1562():
    l151 = ld out;
    c404 = `is.object`(l151);
    if c404 then L1564() else L1565("The build time stamp is missing.", l151);
  D376():
    deopt 1512 [r856];
  D386():
    deopt 1550 [r880];
  D387():
    deopt 1556 [skip_dates];
  D395():
    deopt 1588 [r906];
  D396():
    deopt 1595 [];
  L235(r935):
    st placeholders = r935;
    sym78 = ldf length;
    base78 = ldf length in base;
    guard78 = `==`.4(sym78, base78);
    if guard78 then L1655() else L1656();
  L1514():
    l142 = ld out;
    c389 = `is.object`(l142);
    if c389 then L1516() else L1517(r856, l142);
  L1535():
    goto L222(r880);
  L1537(r884, dx224):
    st out = dx224;
    goto L224(r884);
  L1538():
    dr190 = tryDispatchBuiltin.0("$<-", l145, TRUE);
    dc95 = getTryDispatchBuiltinDispatched(dr190);
    if dc95 then L1540() else L1539(TRUE, dr190);
  L1539(r882, l147):
    r885 = `$<-`(l147, <sym bad_date>, TRUE);
    goto L1537(r882, r885);
  L1542():
    skip_dates1 = force? skip_dates;
    checkMissing(skip_dates1);
    r887 = `!`(skip_dates1);
    c394 = `as.logical`(r887);
    if c394 then L1543() else L225(c394);
  L1561():
    goto L228(r906);
  L1563(r910, dx230):
    st out = dx230;
    goto L230();
  L1564():
    dr196 = tryDispatchBuiltin.0("$<-", l151, "The build time stamp is missing.");
    dc98 = getTryDispatchBuiltinDispatched(dr196);
    if dc98 then L1566() else L1565("The build time stamp is missing.", dr196);
  L1565(r908, l153):
    r911 = `$<-`(l153, <sym build_time_stamp_msg>, "The build time stamp is missing.");
    goto L1563(r908, r911);
  L1568():
    p210 = prom<V +>{
      ptime2 = ld ptime;
      ptime3 = force? ptime2;
      checkMissing(ptime3);
      return ptime3;
    };
    r914 = dyn strptime1[, , tz](p210, "%Y-%m-%d", "GMT");
    check L1569() else D397();
  L1593():
    sym74 = ldf `is.na`;
    base74 = ldf `is.na` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L1595() else L1596();
  L1594():
    r934 = dyn base73(<lang if(`&&`(`!`(is.na(`<-`(x, tolower(`[`(meta, "Title"))))), startsWith(x, "what the package does")), x)>, <lang if(`&&`(`!`(is.na(`<-`(x, `[`(meta, "Author")))), `(`(`==`(x, "Who wrote it"))), x)>, <lang if(`&&`(`!`(is.na(`<-`(x, `[`(meta, "Maintainer")))), `(`(`||`(startsWith(x, "Who to complain to"), startsWith(x, "The package maintainer")))), x)>, <lang if(`&&`(`!`(is.na(`<-`(x, tolower(`[`(meta, "Description"))))), `(`(`||`(startsWith(x, "what the package does"), startsWith(x, "more about what it does")))), x)>);
    goto L235(r934);
  D397():
    deopt 1600 [r914];
  L225(c396):
    c400 = `as.logical`(c396);
    if c400 then L1549() else L226();
  L236(r937):
    r942 = `!`(r937);
    c416 = `as.logical`(r942);
    if c416 then L1600() else L237(c416);
  L256(r973):
    c466 = `as.logical`(r973);
    if c466 then L1659() else L257();
  L1515(r860, dx220):
    st out = dx220;
    goto L218(r860);
  L1516():
    dr186 = tryDispatchBuiltin.0("$<-", l142, r856);
    dc93 = getTryDispatchBuiltinDispatched(dr186);
    if dc93 then L1518() else L1517(r856, dr186);
  L1517(r858, l144):
    r861 = `$<-`(l144, <sym bugreports>, r856);
    goto L1515(r858, r861);
  L1540():
    dx223 = getTryDispatchBuiltinValue(dr190);
    goto L1537(TRUE, dx223);
  L1543():
    as_Date = ldf `as.Date`;
    check L1544() else D388();
  L1566():
    dx229 = getTryDispatchBuiltinValue(dr196);
    goto L1563("The build time stamp is missing.", dx229);
  L1569():
    st ts = r914;
    sym72 = ldf `is.na`;
    base72 = ldf `is.na` in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L1570() else L1571();
  L1595():
    tolower4 = ldf tolower;
    check L1597() else D405();
  L1596():
    r936 = dyn base74(<lang `<-`(x, tolower(`[`(meta, "Title")))>);
    goto L236(r936);
  L1655():
    placeholders = ld placeholders;
    check L1657() else D431();
  L1656():
    r972 = dyn base78(<sym placeholders>);
    goto L256(r972);
  D388():
    deopt 1560 [c394];
  D405():
    deopt 1638 [];
  D431():
    deopt 1733 [placeholders];
  L226():
    goto L224(NULL);
  L231(r916):
    c405 = `as.logical`(r916);
    if c405 then L1574() else L232();
  L237(c418):
    c422 = `as.logical`(c418);
    if c422 then L1604() else L238();
  L257():
    goto L258();
  L258():
    sym79 = ldf `is.na`;
    base79 = ldf `is.na` in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L1666() else L1667();
  L1518():
    dx219 = getTryDispatchBuiltinValue(dr186);
    goto L1515(r856, dx219);
  L1544():
    p207 = prom<V +>{
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      return dd3;
    };
    r889 = dyn as_Date(p207);
    check L1545() else D389();
  L1549():
    l148 = ld out;
    c401 = `is.object`(l148);
    if c401 then L1551() else L1552(TRUE, l148);
  L1570():
    ts = ld ts;
    check L1572() else D398();
  L1571():
    r915 = dyn base72(<sym ts>);
    goto L231(r915);
  L1597():
    p212 = prom<V +>{
      meta100 = ld meta;
      meta101 = force? meta100;
      checkMissing(meta101);
      c415 = `is.object`(meta101);
      if c415 then L1() else L2(meta101);
    L0(dx236):
      return dx236;
    L1():
      dr202 = tryDispatchBuiltin.1("[", meta101);
      dc101 = getTryDispatchBuiltinDispatched(dr202);
      if dc101 then L3() else L2(dr202);
    L2(meta103):
      __37 = ldf `[` in base;
      r938 = dyn __37(meta103, "Title");
      goto L0(r938);
    L3():
      dx235 = getTryDispatchBuiltinValue(dr202);
      goto L0(dx235);
    };
    r940 = dyn tolower4(p212);
    check L1598() else D406();
  L1600():
    startsWith2 = ldf startsWith;
    check L1601() else D408();
  L1657():
    placeholders1 = force? placeholders;
    checkMissing(placeholders1);
    length29 = ldf length in base;
    r974 = dyn length29(placeholders1);
    check L1658() else D432();
  L1659():
    placeholders2 = ld placeholders;
    check L1660() else D433();
  D389():
    deopt 1562 [c394, r889];
  D398():
    deopt 1604 [ts];
  D406():
    deopt 1640 [r940];
  D408():
    deopt 1646 [c416];
  D432():
    deopt 1736 [r974];
  D433():
    deopt 1737 [placeholders2];
  L232():
    skip_dates2 = ld skip_dates;
    check L1580() else D400();
  L238():
    goto L239(NULL);
  L239(x5):
    sym75 = ldf `is.na`;
    base75 = ldf `is.na` in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L1607() else L1608();
  L259(r977):
    r980 = `!`(r977);
    c469 = `as.logical`(r980);
    if c469 then L1673() else L261(c469);
  L1545():
    Sys_Date1 = ldf `Sys.Date`;
    check L1546() else D390();
  L1550(r896, dx226):
    st out = dx226;
    goto L224(r896);
  L1551():
    dr192 = tryDispatchBuiltin.0("$<-", l148, TRUE);
    dc96 = getTryDispatchBuiltinDispatched(dr192);
    if dc96 then L1553() else L1552(TRUE, dr192);
  L1552(r894, l150):
    r897 = `$<-`(l150, <sym old_date>, TRUE);
    goto L1550(r894, r897);
  L1572():
    ts1 = force? ts;
    checkMissing(ts1);
    is_na12 = ldf `is.na` in base;
    r917 = dyn is_na12(ts1);
    check L1573() else D399();
  L1574():
    l154 = ld out;
    c406 = `is.object`(l154);
    if c406 then L1576() else L1577("The build time stamp has invalid/outdated format.", l154);
  L1598():
    st x = r940;
    is_na13 = ldf `is.na` in base;
    r941 = dyn is_na13(r940);
    check L1599() else D407();
  L1601():
    p213 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r944 = dyn startsWith2(p213, "what the package does");
    check L1602() else D409();
  L1604():
    x3 = ld x;
    check L1605() else D410();
  L1658():
    goto L256(r974);
  L1660():
    placeholders3 = force? placeholders2;
    checkMissing(placeholders3);
    l160 = ld out;
    c467 = `is.object`(l160);
    if c467 then L1662() else L1663(placeholders3, l160);
  L1666():
    meta116 = ld meta;
    check L1668() else D434();
  L1667():
    r976 = dyn base79(<lang `<-`(enc, `[`(meta, "Encoding"))>);
    goto L259(r976);
  D390():
    deopt 1563 [c394, r889];
  D399():
    deopt 1607 [r917];
  D400():
    deopt 1613 [skip_dates2];
  D407():
    deopt 1643 [r941];
  D409():
    deopt 1649 [c416, r944];
  D410():
    deopt 1651 [x3];
  D434():
    deopt 1746 [meta116];
  L240(r946):
    r949 = `!`(r946);
    c424 = `as.logical`(r949);
    if c424 then L1614() else L242(c424);
  L261(c471):
    c475 = `as.logical`(c471);
    if c475 then L1676() else L262();
  L1546():
    r890 = dyn Sys_Date1();
    check L1547() else D391();
  L1553():
    dx225 = getTryDispatchBuiltinValue(dr192);
    goto L1550(TRUE, dx225);
  L1573():
    goto L231(r917);
  L1575(r921, dx232):
    st out = dx232;
    goto L230();
  L1576():
    dr198 = tryDispatchBuiltin.0("$<-", l154, "The build time stamp has invalid/outdated format.");
    dc99 = getTryDispatchBuiltinDispatched(dr198);
    if dc99 then L1578() else L1577("The build time stamp has invalid/outdated format.", dr198);
  L1577(r919, l156):
    r922 = `$<-`(l156, <sym build_time_stamp_msg>, "The build time stamp has invalid/outdated format.");
    goto L1575(r919, r922);
  L1580():
    skip_dates3 = force? skip_dates2;
    checkMissing(skip_dates3);
    r923 = `!`(skip_dates3);
    c407 = `as.logical`(r923);
    if c407 then L1581() else L233(c407);
  L1599():
    goto L236(r941);
  L1602():
    c419 = `as.logical`(r944);
    c420 = `&&`(c416, c419);
    goto L237(c420);
  L1605():
    x4 = force? x3;
    checkMissing(x4);
    goto L239(x4);
  L1607():
    meta104 = ld meta;
    check L1609() else D411();
  L1608():
    r945 = dyn base75(<lang `<-`(x, `[`(meta, "Author"))>);
    goto L240(r945);
  L1661(placeholders7, dx244):
    st out = dx244;
    goto L258();
  L1662():
    dr210 = tryDispatchBuiltin.0("$<-", l160, placeholders3);
    dc105 = getTryDispatchBuiltinDispatched(dr210);
    if dc105 then L1664() else L1663(placeholders3, dr210);
  L1663(placeholders5, l162):
    r975 = `$<-`(l162, <sym placeholders>, placeholders3);
    goto L1661(placeholders5, r975);
  L1668():
    meta117 = force? meta116;
    checkMissing(meta117);
    c468 = `is.object`(meta117);
    if c468 then L1669() else L1670(meta117);
  L1673():
    enc = ld enc;
    check L1674() else D436();
  D391():
    deopt 1564 [c394, r889, r890];
  D411():
    deopt 1657 [meta104];
  D436():
    deopt 1755 [c469, enc];
  L233(c409):
    c413 = `as.logical`(c409);
    if c413 then L1587() else L234();
  L242(c426):
    c430 = `as.logical`(c426);
    if c430 then L1617() else L243();
  L260(dx246):
    st enc = dx246;
    is_na17 = ldf `is.na` in base;
    r979 = dyn is_na17(dx246);
    check L1672() else D435();
  L262():
    goto L263();
  L263():
    sym80 = ldf `is.na`;
    base80 = ldf `is.na` in base;
    guard80 = `==`.4(sym80, base80);
    if guard80 then L1683() else L1684();
  L1547():
    r891 = `-`(r890, 31.0);
    r892 = `<`(r889, r891);
    c397 = `as.logical`(r892);
    c398 = `&&`(c394, c397);
    goto L225(c398);
  L1578():
    dx231 = getTryDispatchBuiltinValue(dr198);
    goto L1575("The build time stamp has invalid/outdated format.", dx231);
  L1581():
    as_Date1 = ldf `as.Date`;
    check L1582() else D401();
  L1609():
    meta105 = force? meta104;
    checkMissing(meta105);
    c423 = `is.object`(meta105);
    if c423 then L1610() else L1611(meta105);
  L1614():
    x6 = ld x;
    check L1615() else D413();
  L1664():
    dx243 = getTryDispatchBuiltinValue(dr210);
    goto L1661(placeholders3, dx243);
  L1669():
    dr212 = tryDispatchBuiltin.1("[", meta117);
    dc106 = getTryDispatchBuiltinDispatched(dr212);
    if dc106 then L1671() else L1670(dr212);
  L1670(meta119):
    __41 = ldf `[` in base;
    r978 = dyn __41(meta119, "Encoding");
    goto L260(r978);
  L1674():
    enc1 = force? enc;
    checkMissing(enc1);
    r981 = `!=`(enc1, "UTF-8");
    c472 = `as.logical`(r981);
    c473 = `&&`(c469, c472);
    goto L261(c473);
  L1676():
    enc2 = ld enc;
    check L1677() else D437();
  D401():
    deopt 1617 [c407];
  D413():
    deopt 1666 [c424, x6];
  D435():
    deopt 1753 [r979];
  D437():
    deopt 1760 [enc2];
  L234():
    goto L230();
  L241(dx238):
    st x = dx238;
    is_na14 = ldf `is.na` in base;
    r948 = dyn is_na14(dx238);
    check L1613() else D412();
  L243():
    goto L244(NULL);
  L244(x10):
    sym76 = ldf `is.na`;
    base76 = ldf `is.na` in base;
    guard76 = `==`.4(sym76, base76);
    if guard76 then L1620() else L1621();
  L264(r984):
    c478 = `as.logical`(r984);
    if c478 then L1690() else L266();
  L1582():
    p211 = prom<V +>{
      ts2 = ld ts;
      ts3 = force? ts2;
      checkMissing(ts3);
      return ts3;
    };
    r925 = dyn as_Date1(p211);
    check L1583() else D402();
  L1587():
    l157 = ld out;
    c414 = `is.object`(l157);
    if c414 then L1589() else L1590("This build time stamp is over a month old.", l157);
  L1610():
    dr204 = tryDispatchBuiltin.1("[", meta105);
    dc102 = getTryDispatchBuiltinDispatched(dr204);
    if dc102 then L1612() else L1611(dr204);
  L1611(meta107):
    __38 = ldf `[` in base;
    r947 = dyn __38(meta107, "Author");
    goto L241(r947);
  L1615():
    x7 = force? x6;
    checkMissing(x7);
    r950 = `==`(x7, "Who wrote it");
    c427 = `as.logical`(r950);
    c428 = `&&`(c424, c427);
    goto L242(c428);
  L1617():
    x8 = ld x;
    check L1618() else D414();
  L1671():
    dx245 = getTryDispatchBuiltinValue(dr212);
    goto L260(dx245);
  L1672():
    goto L259(r979);
  L1677():
    enc3 = force? enc2;
    checkMissing(enc3);
    l163 = ld out;
    c476 = `is.object`(l163);
    if c476 then L1679() else L1680(enc3, l163);
  L1683():
    meta120 = ld meta;
    check L1685() else D438();
  L1684():
    r983 = dyn base80(<lang `[`(meta, "Encoding")>);
    goto L264(r983);
  D402():
    deopt 1619 [c407, r925];
  D412():
    deopt 1664 [r948];
  D414():
    deopt 1671 [x8];
  D438():
    deopt 1769 [meta120];
  L245(r952):
    r955 = `!`(r952);
    c432 = `as.logical`(r955);
    if c432 then L1627() else L247(c432);
  L266():
    goto L276();
  L276():
    file_exists6 = ldf `file.exists`;
    check L1735() else D464();
  L1583():
    Sys_Date2 = ldf `Sys.Date`;
    check L1584() else D403();
  L1588(r932, dx234):
    st out = dx234;
    goto L230();
  L1589():
    dr200 = tryDispatchBuiltin.0("$<-", l157, "This build time stamp is over a month old.");
    dc100 = getTryDispatchBuiltinDispatched(dr200);
    if dc100 then L1591() else L1590("This build time stamp is over a month old.", dr200);
  L1590(r930, l159):
    r933 = `$<-`(l159, <sym build_time_stamp_msg>, "This build time stamp is over a month old.");
    goto L1588(r930, r933);
  L1612():
    dx237 = getTryDispatchBuiltinValue(dr204);
    goto L241(dx237);
  L1613():
    goto L240(r948);
  L1618():
    x9 = force? x8;
    checkMissing(x9);
    goto L244(x9);
  L1620():
    meta108 = ld meta;
    check L1622() else D415();
  L1621():
    r951 = dyn base76(<lang `<-`(x, `[`(meta, "Maintainer"))>);
    goto L245(r951);
  L1678(enc7, dx248):
    st out = dx248;
    goto L263();
  L1679():
    dr214 = tryDispatchBuiltin.0("$<-", l163, enc3);
    dc107 = getTryDispatchBuiltinDispatched(dr214);
    if dc107 then L1681() else L1680(enc3, dr214);
  L1680(enc5, l165):
    r982 = `$<-`(l165, <sym encoding>, enc3);
    goto L1678(enc5, r982);
  L1685():
    meta121 = force? meta120;
    checkMissing(meta121);
    c477 = `is.object`(meta121);
    if c477 then L1686() else L1687(meta121);
  L1690():
    r987 = clos inner1384373858;
    st find_non_ASCII_lines = r987;
    sym81 = ldf c;
    base81 = ldf c in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L1691() else L1692();
  D403():
    deopt 1620 [c407, r925];
  D415():
    deopt 1677 [meta108];
  D464():
    deopt 1864 [];
  L247(c434):
    c447 = `as.logical`(c434);
    if c447 then L1635() else L249();
  L265(dx250):
    is_na18 = ldf `is.na` in base;
    r986 = dyn is_na18(dx250);
    check L1689() else D439();
  L267(r989):
    st code_files = r989;
    code_files = ld code_files;
    check L1698() else D445();
  L1584():
    r926 = dyn Sys_Date2();
    check L1585() else D404();
  L1591():
    dx233 = getTryDispatchBuiltinValue(dr200);
    goto L1588("This build time stamp is over a month old.", dx233);
  L1622():
    meta109 = force? meta108;
    checkMissing(meta109);
    c431 = `is.object`(meta109);
    if c431 then L1623() else L1624(meta109);
  L1627():
    startsWith3 = ldf startsWith;
    check L1628() else D417();
  L1681():
    dx247 = getTryDispatchBuiltinValue(dr214);
    goto L1678(enc3, dx247);
  L1686():
    dr216 = tryDispatchBuiltin.1("[", meta121);
    dc108 = getTryDispatchBuiltinDispatched(dr216);
    if dc108 then L1688() else L1687(dr216);
  L1687(meta123):
    __42 = ldf `[` in base;
    r985 = dyn __42(meta123, "Encoding");
    goto L265(r985);
  L1691():
    file_path14 = ldf `file.path`;
    check L1693() else D440();
  L1692():
    r988 = dyn base81(<lang file.path(dir, "NAMESPACE")>, <lang file.path(dir, "inst", "CITATION")>);
    goto L267(r988);
  L1735():
    p237 = prom<V +>{
      file_path18 = ldf `file.path`;
      p233 = prom<V +>{
        dir47 = ld dir;
        dir48 = force? dir47;
        checkMissing(dir48);
        return dir48;
      };
      p236 = prom<V +>{
        paste11 = ldf paste0;
        p235 = prom<V +>{
          basename2 = ldf basename;
          p234 = prom<V +>{
            dir49 = ld dir;
            dir50 = force? dir49;
            checkMissing(dir50);
            return dir50;
          };
          r1030 = dyn basename2(p234);
          return r1030;
        };
        r1032 = dyn paste11(p235, "-internal.R");
        return r1032;
      };
      r1034 = dyn file_path18(p233, "R", p236);
      st fp = r1034;
      invisible.0();
      return r1034;
    };
    r1036 = dyn file_exists6(p237);
    check L1736() else D465();
  D404():
    deopt 1621 [c407, r925, r926];
  D417():
    deopt 1687 [c432];
  D439():
    deopt 1775 [r986];
  D440():
    deopt 1782 [];
  D445():
    deopt 1795 [code_files];
  D465():
    deopt 1866 [r1036];
  L246(dx240):
    st x = dx240;
    is_na15 = ldf `is.na` in base;
    r954 = dyn is_na15(dx240);
    check L1626() else D416();
  L249():
    goto L250(NULL);
  L250(x17):
    sym77 = ldf `is.na`;
    base77 = ldf `is.na` in base;
    guard77 = `==`.4(sym77, base77);
    if guard77 then L1638() else L1639();
  L1585():
    r927 = `-`(r926, 31.0);
    r928 = `<`(r925, r927);
    c410 = `as.logical`(r928);
    c411 = `&&`(c407, c410);
    goto L233(c411);
  L1623():
    dr206 = tryDispatchBuiltin.1("[", meta109);
    dc103 = getTryDispatchBuiltinDispatched(dr206);
    if dc103 then L1625() else L1624(dr206);
  L1624(meta111):
    __39 = ldf `[` in base;
    r953 = dyn __39(meta111, "Maintainer");
    goto L246(r953);
  L1628():
    p214 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r957 = dyn startsWith3(p214, "Who to complain to");
    check L1629() else D418();
  L1635():
    x15 = ld x;
    check L1636() else D421();
  L1688():
    dx249 = getTryDispatchBuiltinValue(dr216);
    goto L265(dx249);
  L1689():
    goto L264(r986);
  L1693():
    p219 = prom<V +>{
      dir37 = ld dir;
      dir38 = force? dir37;
      checkMissing(dir38);
      return dir38;
    };
    r991 = dyn file_path14(p219, "NAMESPACE");
    check L1694() else D441();
  L1698():
    code_files1 = force? code_files;
    checkMissing(code_files1);
    c480 = `is.object`(code_files1);
    if c480 then L1699() else L1700(code_files1);
  L1736():
    c486 = `as.logical`(r1036);
    if c486 then L1737() else L277();
  D416():
    deopt 1684 [r954];
  D418():
    deopt 1690 [c432, r957];
  D421():
    deopt 1698 [x15];
  D441():
    deopt 1785 [r991];
  L251(r961):
    r966 = `!`(r961);
    c449 = `as.logical`(r966);
    if c449 then L1643() else L252(c449);
  L268(dx252):
    st code_files = dx252;
    dir_exists2 = ldf `dir.exists`;
    check L1704() else D448();
  L277():
    goto L281();
  L281():
    sym86 = ldf `is.na`;
    base86 = ldf `is.na` in base;
    guard86 = `==`.4(sym86, base86);
    if guard86 then L1754() else L1755();
  L1625():
    dx239 = getTryDispatchBuiltinValue(dr206);
    goto L246(dx239);
  L1626():
    goto L245(r954);
  L1629():
    c435 = `as.logical`(r957);
    if c435 then L248(c432, c435) else L1630();
  L1636():
    x16 = force? x15;
    checkMissing(x16);
    goto L250(x16);
  L1638():
    tolower5 = ldf tolower;
    check L1640() else D422();
  L1639():
    r960 = dyn base77(<lang `<-`(x, tolower(`[`(meta, "Description")))>);
    goto L251(r960);
  L1694():
    file_path15 = ldf `file.path`;
    check L1695() else D442();
  L1699():
    dr218 = tryDispatchBuiltin.1("[", code_files1);
    dc109 = getTryDispatchBuiltinDispatched(dr218);
    if dc109 then L1701() else L1700(dr218);
  L1700(code_files3):
    file_exists5 = ldf `file.exists`;
    check L1702() else D446();
  L1737():
    parse = ldf parse;
    check L1738() else D466();
  D422():
    deopt 1705 [];
  D442():
    deopt 1787 [];
  D446():
    deopt 1798 [code_files3];
  D448():
    deopt 1804 [];
  D466():
    deopt 1868 [];
  L248(c436, c437):
    c444 = `as.logical`(c437);
    c445 = `&&`(c436, c444);
    goto L247(c445);
  L252(c451):
    c464 = `as.logical`(c451);
    if c464 then L1651() else L254();
  L282(r1056):
    r1061 = `!`(r1056);
    c489 = `as.logical`(r1061);
    if c489 then L1761() else L284(c489);
  L1630():
    startsWith4 = ldf startsWith;
    check L1631() else D419();
  L1640():
    p216 = prom<V +>{
      meta112 = ld meta;
      meta113 = force? meta112;
      checkMissing(meta113);
      c448 = `is.object`(meta113);
      if c448 then L1() else L2(meta113);
    L0(dx242):
      return dx242;
    L1():
      dr208 = tryDispatchBuiltin.1("[", meta113);
      dc104 = getTryDispatchBuiltinDispatched(dr208);
      if dc104 then L3() else L2(dr208);
    L2(meta115):
      __40 = ldf `[` in base;
      r962 = dyn __40(meta115, "Description");
      goto L0(r962);
    L3():
      dx241 = getTryDispatchBuiltinValue(dr208);
      goto L0(dx241);
    };
    r964 = dyn tolower5(p216);
    check L1641() else D423();
  L1643():
    startsWith5 = ldf startsWith;
    check L1644() else D425();
  L1695():
    p220 = prom<V +>{
      dir39 = ld dir;
      dir40 = force? dir39;
      checkMissing(dir40);
      return dir40;
    };
    r993 = dyn file_path15(p220, "inst", "CITATION");
    check L1696() else D443();
  L1701():
    dx251 = getTryDispatchBuiltinValue(dr218);
    goto L268(dx251);
  L1702():
    p221 = prom<V +>{
      code_files4 = ld code_files;
      code_files5 = force? code_files4;
      checkMissing(code_files5);
      return code_files5;
    };
    r996 = dyn file_exists5(p221);
    check L1703() else D447();
  L1704():
    p223 = prom<V +>{
      file_path16 = ldf `file.path`;
      p222 = prom<V +>{
        dir41 = ld dir;
        dir42 = force? dir41;
        checkMissing(dir42);
        return dir42;
      };
      r999 = dyn file_path16(p222, "R");
      return r999;
    };
    r1001 = dyn dir_exists2(p223);
    check L1705() else D449();
  L1738():
    p238 = prom<V +>{
      fp = ld fp;
      fp1 = force? fp;
      checkMissing(fp1);
      return fp1;
    };
    r1038 = dyn parse(p238);
    check L1739() else D467();
  L1754():
    sym87 = ldf `as.numeric`;
    base87 = ldf `as.numeric` in base;
    guard87 = `==`.4(sym87, base87);
    if guard87 then L1756() else L1757();
  L1755():
    r1055 = dyn base86(<lang `<-`(size, as.numeric(pkgSize))>);
    goto L282(r1055);
  D419():
    deopt 1692 [c432, c435];
  D423():
    deopt 1707 [r964];
  D425():
    deopt 1713 [c449];
  D443():
    deopt 1791 [r993];
  D447():
    deopt 1800 [code_files3, r996];
  D449():
    deopt 1806 [r1001];
  D467():
    deopt 1870 [r1038];
  L254():
    goto L255(NULL);
  L255(x24):
    c465 = ldf c in base;
    r971 = dyn c465(x5, x10, x17, x24);
    check L1654() else D430();
  L283(r1058):
    st size = r1058;
    is_na19 = ldf `is.na` in base;
    r1060 = dyn is_na19(r1058);
    check L1760() else D475();
  L284(c491):
    c498 = `as.logical`(c491);
    if c498 then L1769() else L286();
  L1631():
    p215 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r959 = dyn startsWith4(p215, "The package maintainer");
    check L1632() else D420();
  L1641():
    st x = r964;
    is_na16 = ldf `is.na` in base;
    r965 = dyn is_na16(r964);
    check L1642() else D424();
  L1644():
    p217 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r968 = dyn startsWith5(p217, "what the package does");
    check L1645() else D426();
  L1651():
    x22 = ld x;
    check L1652() else D429();
  L1696():
    c479 = ldf c in base;
    r994 = dyn c479(r991, r993);
    check L1697() else D444();
  L1703():
    __43 = ldf `[` in base;
    r997 = dyn __43(code_files3, r996);
    goto L268(r997);
  L1705():
    c481 = `as.logical`(r1001);
    if c481 then L1706() else L269();
  L1739():
    st exprs = r1038;
    r1039 = clos inner3708401697;
    st tst = r1039;
    sym85 = ldf any;
    base85 = ldf any in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L1740() else L1741();
  L1756():
    pkgSize1 = ld pkgSize;
    check L1758() else D473();
  L1757():
    r1057 = dyn base87(<sym pkgSize>);
    goto L283(r1057);
  L1761():
    size = ld size;
    check L1762() else D476();
  D420():
    deopt 1695 [c432, c435, r959];
  D424():
    deopt 1710 [r965];
  D426():
    deopt 1716 [c449, r968];
  D429():
    deopt 1724 [x22];
  D430():
    deopt 1729 [r971];
  D444():
    deopt 1793 [r994];
  D473():
    deopt 1900 [pkgSize1];
  D475():
    deopt 1906 [r1060];
  D476():
    deopt 1908 [c489, size];
  L269():
    goto L272();
  L272():
    file_path_relative_to = ldf file_path_relative_to;
    check L1717() else D455();
  L278(r1041):
    c487 = `as.logical`(r1041);
    if c487 then L1745() else L279();
  L286():
    goto L287();
  L287():
    localOnly1 = ld localOnly;
    check L1776() else D481();
  L1632():
    c440 = `as.logical`(r959);
    c441 = `||`(c435, c440);
    goto L248(c432, c441);
  L1642():
    goto L251(r965);
  L1645():
    c452 = `as.logical`(r968);
    if c452 then L253(c449, c452) else L1646();
  L1652():
    x23 = force? x22;
    checkMissing(x23);
    goto L255(x23);
  L1654():
    goto L235(r971);
  L1697():
    goto L267(r994);
  L1706():
    sym82 = ldf c;
    base82 = ldf c in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L1707() else L1708();
  L1740():
    vapply3 = ldf vapply;
    check L1742() else D468();
  L1741():
    r1040 = dyn base85(<lang vapply(exprs, tst, NA_LGL)>);
    goto L278(r1040);
  L1758():
    pkgSize2 = force? pkgSize1;
    checkMissing(pkgSize2);
    as_numeric = ldf `as.numeric` in base;
    r1059 = dyn as_numeric(pkgSize2);
    check L1759() else D474();
  L1760():
    goto L282(r1060);
  L1762():
    size1 = force? size;
    checkMissing(size1);
    sym88 = ldf `as.numeric`;
    base88 = ldf `as.numeric` in base;
    guard88 = `==`.4(sym88, base88);
    if guard88 then L1763() else L1764();
  L1769():
    size5 = ld size;
    check L1770() else D480();
  D455():
    deopt 1831 [];
  D468():
    deopt 1878 [];
  D474():
    deopt 1903 [r1059];
  D480():
    deopt 1921 [size5];
  D481():
    deopt 1928 [localOnly1];
  L253(c453, c454):
    c461 = `as.logical`(c454);
    c462 = `&&`(c453, c461);
    goto L252(c462);
  L270(r1003):
    st OS_subdirs = r1003;
    sym83 = ldf c;
    base83 = ldf c in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L1710() else L1711();
  L279():
    goto L280(NULL);
  L280(r1053):
    goto L281();
  L285(c494, size4, r1063):
    r1066 = `>`(size4, r1063);
    c495 = `as.logical`(r1066);
    c496 = `&&`(c494, c495);
    goto L284(c496);
  L1646():
    startsWith6 = ldf startsWith;
    check L1647() else D427();
  L1707():
    c482 = ldf c in base;
    r1004 = dyn c482("unix", "windows");
    check L1709() else D450();
  L1708():
    r1002 = dyn base82("unix", "windows");
    goto L270(r1002);
  L1717():
    p227 = prom<V +>{
      code_files8 = ld code_files;
      code_files9 = force? code_files8;
      checkMissing(code_files9);
      return code_files9;
    };
    p228 = prom<V +>{
      dir45 = ld dir;
      dir46 = force? dir45;
      checkMissing(dir46);
      return dir46;
    };
    r1016 = dyn file_path_relative_to[, , parent](p227, p228, FALSE);
    check L1718() else D456();
  L1742():
    p239 = prom<V +>{
      exprs = ld exprs;
      exprs1 = force? exprs;
      checkMissing(exprs1);
      return exprs1;
    };
    p240 = prom<V +>{
      tst = ld tst;
      tst1 = force? tst;
      checkMissing(tst1);
      return tst1;
    };
    r1044 = dyn vapply3(p239, p240, NA_LGL);
    check L1743() else D469();
  L1745():
    basename3 = ldf basename;
    check L1746() else D471();
  L1759():
    goto L283(r1059);
  L1763():
    Sys_getenv4 = ldf `Sys.getenv`;
    check L1765() else D477();
  L1764():
    r1062 = dyn base88(<lang Sys.getenv("_R_CHECK_CRAN_INCOMING_TARBALL_THRESHOLD_", unset="5e6")>);
    goto L285(c489, size1, r1062);
  L1770():
    size6 = force? size5;
    checkMissing(size6);
    l173 = ld out;
    c499 = `is.object`(l173);
    if c499 then L1772() else L1773(size6, l173);
  L1776():
    localOnly2 = force? localOnly1;
    checkMissing(localOnly2);
    r1068 = `!`(localOnly2);
    c500 = `as.logical`(r1068);
    if c500 then L1777() else L288(c500);
  D427():
    deopt 1718 [c449, c452];
  D450():
    deopt 1812 [r1004];
  D456():
    deopt 1836 [r1016];
  D469():
    deopt 1882 [r1044];
  D471():
    deopt 1886 [];
  D477():
    deopt 1912 [c489, size1];
  L271(r1006):
    st code_files = r1006;
    goto L272();
  L288(c502):
    st remote = c502;
    config_val_to_logical5 = ldf config_val_to_logical;
    check L1781() else D484();
  L1647():
    p218 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    r970 = dyn startsWith6(p218, "more about what it does");
    check L1648() else D428();
  L1709():
    goto L270(r1004);
  L1710():
    code_files6 = ld code_files;
    check L1712() else D451();
  L1711():
    r1005 = dyn base83(<sym code_files>, <lang list_files_with_type(file.path(dir, "R"), "code", OS_subdirs=OS_subdirs)>);
    goto L271(r1005);
  L1718():
    l166 = ld code_files;
    names__1 = ldf `names<-`;
    check L1719() else D457();
  L1743():
    any7 = ldf any in base;
    r1045 = dyn any7(r1044);
    check L1744() else D470();
  L1746():
    p241 = prom<V +>{
      fp2 = ld fp;
      fp3 = force? fp2;
      checkMissing(fp3);
      return fp3;
    };
    r1047 = dyn basename3(p241);
    check L1747() else D472();
  L1765():
    r1064 = dyn Sys_getenv4[, unset]("_R_CHECK_CRAN_INCOMING_TARBALL_THRESHOLD_", "5e6");
    check L1766() else D478();
  L1771(size10, dx258):
    st out = dx258;
    goto L287();
  L1772():
    dr224 = tryDispatchBuiltin.0("$<-", l173, size6);
    dc112 = getTryDispatchBuiltinDispatched(dr224);
    if dc112 then L1774() else L1773(size6, dr224);
  L1773(size8, l175):
    r1067 = `$<-`(l175, <sym size_of_tarball>, size6);
    goto L1771(size8, r1067);
  L1777():
    config_val_to_logical4 = ldf config_val_to_logical;
    check L1778() else D482();
  D428():
    deopt 1721 [c449, c452, r970];
  D451():
    deopt 1816 [code_files6];
  D457():
    deopt 1838 [r1016, l166, r1016];
  D470():
    deopt 1884 [r1045];
  D472():
    deopt 1888 [r1047];
  D478():
    deopt 1916 [c489, size1, r1064];
  D482():
    deopt 1932 [c500];
  D484():
    deopt 1939 [];
  L1648():
    c457 = `as.logical`(r970);
    c458 = `||`(c452, c457);
    goto L253(c449, c458);
  L1712():
    code_files7 = force? code_files6;
    checkMissing(code_files7);
    list_files_with_type = ldf list_files_with_type;
    check L1713() else D452();
  L1719():
    r1017 = dyn names__1(l166, NULL, r1016);
    check L1720() else D458();
  L1744():
    goto L278(r1045);
  L1747():
    l170 = ld out;
    c488 = `is.object`(l170);
    if c488 then L1749() else L1750(r1047, l170);
  L1766():
    as_numeric1 = ldf `as.numeric` in base;
    r1065 = dyn as_numeric1(r1064);
    check L1767() else D479();
  L1774():
    dx257 = getTryDispatchBuiltinValue(dr224);
    goto L1771(size6, dx257);
  L1778():
    p242 = prom<V +>{
      Sys_getenv5 = ldf `Sys.getenv`;
      r1069 = dyn Sys_getenv5("_R_CHECK_CRAN_INCOMING_SKIP_URL_CHECKS_IF_REMOTE_", "FALSE");
      return r1069;
    };
    r1071 = dyn config_val_to_logical4(p242);
    check L1779() else D483();
  L1781():
    p243 = prom<V +>{
      Sys_getenv6 = ldf `Sys.getenv`;
      r1073 = dyn Sys_getenv6("_R_CHECK_CRAN_INCOMING_CHECK_URLS_IN_PARALLEL_", "FALSE");
      return r1073;
    };
    r1075 = dyn config_val_to_logical5(p243);
    check L1782() else D485();
  D452():
    deopt 1819 [];
  D458():
    deopt 1840 [r1016, r1017];
  D479():
    deopt 1918 [c489, size1, r1065];
  D483():
    deopt 1934 [c500, r1071];
  D485():
    deopt 1941 [r1075];
  L1713():
    p225 = prom<V +>{
      file_path17 = ldf `file.path`;
      p224 = prom<V +>{
        dir43 = ld dir;
        dir44 = force? dir43;
        checkMissing(dir44);
        return dir44;
      };
      r1008 = dyn file_path17(p224, "R");
      return r1008;
    };
    p226 = prom<V +>{
      OS_subdirs = ld OS_subdirs;
      OS_subdirs1 = force? OS_subdirs;
      checkMissing(OS_subdirs1);
      return OS_subdirs1;
    };
    r1011 = dyn list_files_with_type[, , OS_subdirs](p225, "code", p226);
    check L1714() else D453();
  L1720():
    st code_files = r1017;
    Filter4 = ldf Filter;
    check L1721() else D459();
  L1748(r1051, dx256):
    st out = dx256;
    goto L280(r1051);
  L1749():
    dr222 = tryDispatchBuiltin.0("$<-", l170, r1047);
    dc111 = getTryDispatchBuiltinDispatched(dr222);
    if dc111 then L1751() else L1750(r1047, dr222);
  L1750(r1049, l172):
    r1052 = `$<-`(l172, <sym R_files_set_random_seed>, r1047);
    goto L1748(r1049, r1052);
  L1767():
    goto L285(c489, size1, r1065);
  L1779():
    r1072 = `!`(r1071);
    c503 = `as.logical`(r1072);
    c504 = `&&`(c500, c503);
    goto L288(c504);
  L1782():
    st check_urls_in_parallel = r1075;
    capabilities = ldf capabilities;
    check L1783() else D486();
  D453():
    deopt 1824 [r1011];
  D459():
    deopt 1843 [];
  D486():
    deopt 1944 [];
  L1714():
    c483 = ldf c in base;
    r1012 = dyn c483(code_files7, r1011);
    check L1715() else D454();
  L1721():
    p229 = prom<V +>{
      length30 = ld length;
      length31 = force? length30;
      checkMissing(length31);
      return length31;
    };
    p232 = prom<V +>{
      lapply4 = ldf lapply;
      p230 = prom<V +>{
        code_files10 = ld code_files;
        code_files11 = force? code_files10;
        checkMissing(code_files11);
        return code_files11;
      };
      p231 = prom<V +>{
        find_non_ASCII_lines = ld find_non_ASCII_lines;
        find_non_ASCII_lines1 = force? find_non_ASCII_lines;
        checkMissing(find_non_ASCII_lines1);
        return find_non_ASCII_lines1;
      };
      r1021 = dyn lapply4(p230, p231);
      return r1021;
    };
    r1023 = dyn Filter4(p229, p232);
    check L1722() else D460();
  L1751():
    dx255 = getTryDispatchBuiltinValue(dr222);
    goto L1748(r1047, dx255);
  L1783():
    r1076 = dyn capabilities("libcurl");
    check L1784() else D487();
  D454():
    deopt 1826 [r1012];
  D460():
    deopt 1846 [r1023];
  D487():
    deopt 1946 [r1076];
  L1715():
    goto L271(r1012);
  L1722():
    st lines = r1023;
    sym84 = ldf length;
    base84 = ldf length in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L1723() else L1724();
  L1784():
    r1077 = `!`(r1076);
    c506 = `as.logical`(r1077);
    if c506 then L1785() else L289(c506);
  L273(r1025):
    c484 = `as.logical`(r1025);
    if c484 then L1727() else L274();
  L289(c508):
    c512 = `as.logical`(c508);
    if c512 then L1788() else L290();
  L1723():
    lines = ld lines;
    check L1725() else D461();
  L1724():
    r1024 = dyn base84(<sym lines>);
    goto L273(r1024);
  L1785():
    remote = ld remote;
    check L1786() else D488();
  D461():
    deopt 1850 [lines];
  D488():
    deopt 1948 [c506, remote];
  L274():
    goto L275(NULL);
  L275(lines8):
    goto L276();
  L290():
    sym89 = ldf `is.null`;
    base89 = ldf `is.null` in base;
    guard89 = `==`.4(sym89, base89);
    if guard89 then L1794() else L1795();
  L291():
    localOnly3 = ld localOnly;
    check L2047() else D607();
  L1725():
    lines1 = force? lines;
    checkMissing(lines1);
    length32 = ldf length in base;
    r1026 = dyn length32(lines1);
    check L1726() else D462();
  L1727():
    lines2 = ld lines;
    check L1728() else D463();
  L1786():
    remote1 = force? remote;
    checkMissing(remote1);
    c509 = `as.logical`(remote1);
    c510 = `&&`(c506, c509);
    goto L289(c510);
  L1788():
    l176 = ld out;
    c513 = `is.object`(l176);
    if c513 then L1790() else L1791(TRUE, l176);
  D462():
    deopt 1853 [r1026];
  D463():
    deopt 1854 [lines2];
  D607():
    deopt 2400 [localOnly3];
  L292(r1085):
    c516 = `as.logical`(r1085);
    if c516 then L1801() else L293();
  L1726():
    goto L273(r1026);
  L1728():
    lines3 = force? lines2;
    checkMissing(lines3);
    l167 = ld out;
    c485 = `is.object`(l167);
    if c485 then L1730() else L1731(lines3, l167);
  L1789(r1081, dx260):
    st out = dx260;
    goto L291();
  L1790():
    dr226 = tryDispatchBuiltin.0("$<-", l176, TRUE);
    dc113 = getTryDispatchBuiltinDispatched(dr226);
    if dc113 then L1792() else L1791(TRUE, dr226);
  L1791(r1079, l178):
    r1082 = `$<-`(l178, <sym no_url_checks>, TRUE);
    goto L1789(r1079, r1082);
  L1794():
    out8 = ld out;
    check L1796() else D489();
  L1795():
    r1084 = dyn base89(<lang `$`(out, Rd_db_build_error)>);
    goto L292(r1084);
  L2047():
    localOnly4 = force? localOnly3;
    checkMissing(localOnly4);
    c580 = `as.logical`(localOnly4);
    if c580 then L2048() else L353();
  D489():
    deopt 1957 [out8];
  L293():
    goto L291();
  L353():
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L2052() else D609();
  L1729(lines7, dx254):
    st out = dx254;
    goto L275(lines7);
  L1730():
    dr220 = tryDispatchBuiltin.0("$<-", l167, lines3);
    dc110 = getTryDispatchBuiltinDispatched(dr220);
    if dc110 then L1732() else L1731(lines3, dr220);
  L1731(lines5, l169):
    r1027 = `$<-`(l169, <sym R_files_non_ASCII>, lines3);
    goto L1729(lines5, r1027);
  L1792():
    dx259 = getTryDispatchBuiltinValue(dr226);
    goto L1789(TRUE, dx259);
  L1796():
    out9 = force? out8;
    checkMissing(out9);
    c514 = `is.object`(out9);
    if c514 then L1798() else L1799(out9);
  L1801():
    url_db_from_package_sources = ldf url_db_from_package_sources;
    check L1802() else D490();
  L2048():
    out12 = ld out;
    check L2049() else D608();
  D490():
    deopt 1962 [];
  D608():
    deopt 2402 [out12];
  D609():
    deopt 2408 [];
  L1732():
    dx253 = getTryDispatchBuiltinValue(dr220);
    goto L1729(lines3, dx253);
  L1797(dx262):
    c515 = `==`(dx262, NULL);
    goto L292(c515);
  L1798():
    dr228 = tryDispatchBuiltin.1("$", out9);
    dc114 = getTryDispatchBuiltinDispatched(dr228);
    if dc114 then L1800() else L1799(dr228);
  L1799(out11):
    r1086 = `$`(out11, <sym Rd_db_build_error>);
    goto L1797(r1086);
  L1802():
    p244 = prom<V +>{
      dir51 = ld dir;
      dir52 = force? dir51;
      checkMissing(dir52);
      return dir52;
    };
    r1088 = dyn url_db_from_package_sources(p244);
    check L1803() else D491();
  L2049():
    out13 = force? out12;
    checkMissing(out13);
    popenv;
    return out13;
  L2052():
    r1345 = dyn _get_standard_repository_URLs();
    check L2053() else D610();
  D491():
    deopt 1964 [r1088];
  D610():
    deopt 2409 [r1345];
  L1800():
    dx261 = getTryDispatchBuiltinValue(dr228);
    goto L1797(dx261);
  L1803():
    st udb = r1088;
    tryCatch4 = ldf tryCatch;
    check L1804() else D492();
  L2053():
    st urls = r1345;
    foss2 = ld foss;
    check L2054() else D611();
  D492():
    deopt 1967 [];
  D611():
    deopt 2411 [foss2];
  L1804():
    p248 = prom<V +>{
      check_url_db = ldf check_url_db;
      p245 = prom<V +>{
        udb = ld udb;
        udb1 = force? udb;
        checkMissing(udb1);
        return udb1;
      };
      p246 = prom<V +>{
        remote2 = ld remote;
        remote3 = force? remote2;
        checkMissing(remote3);
        return remote3;
      };
      p247 = prom<V +>{
        check_urls_in_parallel = ld check_urls_in_parallel;
        check_urls_in_parallel1 = force? check_urls_in_parallel;
        checkMissing(check_urls_in_parallel1);
        return check_urls_in_parallel1;
      };
      r1092 = dyn check_url_db[, remote, parallel](p245, p246, p247);
      return r1092;
    };
    p249 = prom<V +>{
      identity8 = ld identity;
      identity9 = force? identity8;
      checkMissing(identity9);
      return identity9;
    };
    r1095 = dyn tryCatch4[, error](p248, p249);
    check L1805() else D493();
  L2054():
    foss3 = force? foss2;
    checkMissing(foss3);
    c581 = `as.logical`(foss3);
    if c581 then L2055() else L355();
  D493():
    deopt 1971 [r1095];
  L355():
    goto L374();
  L374():
    r1436 = clos inner883694641;
    st `.repository_db` = r1436;
    tryCatch6 = ldf tryCatch;
    check L2151() else D657();
  L1805():
    st bad = r1095;
    sym90 = ldf inherits;
    base90 = ldf inherits in base;
    guard90 = `==`.4(sym90, base90);
    if guard90 then L1806() else L1807();
  L2055():
    __58 = ldf `::`;
    check L2056() else D612();
  D612():
    deopt 2414 [];
  D657():
    deopt 2575 [];
  L294(r1097):
    c517 = `as.logical`(r1097);
    if c517 then L1810() else L295();
  L1806():
    bad22 = ld bad;
    check L1808() else D494();
  L1807():
    r1096 = dyn base90(<sym bad>, "error");
    goto L294(r1096);
  L2056():
    r1346 = dyn __58("utils", "available.packages");
    check L2057() else D613();
  L2151():
    p333 = prom<V +>{
      lapply5 = ldf lapply;
      p331 = prom<V +>{
        urls4 = ld urls;
        urls5 = force? urls4;
        checkMissing(urls5);
        return urls5;
      };
      p332 = prom<V +>{
        _repository_db = ld `.repository_db`;
        _repository_db1 = force? _repository_db;
        checkMissing(_repository_db1);
        return _repository_db1;
      };
      r1439 = dyn lapply5(p331, p332);
      return r1439;
    };
    p334 = prom<V +>{
      identity12 = ld identity;
      identity13 = force? identity12;
      checkMissing(identity13);
      return identity13;
    };
    r1442 = dyn tryCatch6[, error](p333, p334);
    check L2152() else D658();
  D494():
    deopt 1975 [bad22];
  D613():
    deopt 2417 [r1346];
  D658():
    deopt 2579 [r1442];
  L295():
    NROW1 = ldf NROW;
    check L1817() else D497();
  L296():
    config_val_to_logical6 = ldf config_val_to_logical;
    check L1874() else D526();
  L1808():
    bad23 = force? bad22;
    checkMissing(bad23);
    inherits4 = ldf inherits in base;
    r1098 = dyn inherits4(bad23, "error", FALSE);
    check L1809() else D495();
  L1810():
    bad24 = ld bad;
    check L1811() else D496();
  L2057():
    checkFun.0(r1346);
    r1347 = r1346 as cls;
    p310 = prom<V +>{
      __59 = ldf `::`;
      r1348 = dyn __59("utils", "contrib.url");
      checkFun.0(r1348);
      r1349 = r1348 as cls;
      p309 = prom<V +>{
        urls2 = ld urls;
        urls3 = force? urls2;
        checkMissing(urls3);
        return urls3;
      };
      r1351 = dyn r1349(p309, "source");
      return r1351;
    };
    p311 = prom<V +>{
      sym110 = ldf c;
      base110 = ldf c in base;
      guard110 = `==`.4(sym110, base110);
      if guard110 then L1() else L2();
    L0(r1354):
      return r1354;
    L1():
      c582 = ldf c in base;
      r1355 = dyn c582("R_version", "duplicates");
      goto L0(r1355);
    L2():
      r1353 = dyn base110("R_version", "duplicates");
      goto L0(r1353);
    };
    r1357 = dyn r1347[, filters](p310, p311);
    check L2058() else D614();
  L2152():
    st db = r1442;
    sym116 = ldf inherits;
    base116 = ldf inherits in base;
    guard116 = `==`.4(sym116, base116);
    if guard116 then L2153() else L2154();
  D495():
    deopt 1980 [r1098];
  D496():
    deopt 1981 [bad24];
  D497():
    deopt 1987 [];
  D526():
    deopt 2099 [];
  D614():
    deopt 2422 [r1357];
  L375(r1444):
    c599 = `as.logical`(r1444);
    if c599 then L2157() else L376();
  L1809():
    goto L294(r1098);
  L1811():
    bad25 = force? bad24;
    checkMissing(bad25);
    l179 = ld out;
    c518 = `is.object`(l179);
    if c518 then L1813() else L1814(bad25, l179);
  L1817():
    p250 = prom<V +>{
      bad31 = ld bad;
      bad32 = force? bad31;
      checkMissing(bad32);
      return bad32;
    };
    r1101 = dyn NROW1(p250);
    check L1818() else D498();
  L1874():
    p262 = prom<V +>{
      Sys_getenv7 = ldf `Sys.getenv`;
      r1162 = dyn Sys_getenv7("_R_CHECK_CRAN_INCOMING_CHECK_FILE_URIS_", "FALSE");
      return r1162;
    };
    r1164 = dyn config_val_to_logical6(p262);
    check L1875() else D527();
  L2058():
    st available = r1357;
    meta128 = ld meta;
    check L2059() else D615();
  L2153():
    db = ld db;
    check L2155() else D659();
  L2154():
    r1443 = dyn base116(<sym db>, "error");
    goto L375(r1443);
  D498():
    deopt 1989 [r1101];
  D527():
    deopt 2101 [r1164];
  D615():
    deopt 2424 [meta128];
  D659():
    deopt 2583 [db];
  L376():
    do_call = ldf `do.call`;
    check L2163() else D664();
  L1812(bad29, dx264):
    st out = dx264;
    goto L296();
  L1813():
    dr230 = tryDispatchBuiltin.0("$<-", l179, bad25);
    dc115 = getTryDispatchBuiltinDispatched(dr230);
    if dc115 then L1815() else L1814(bad25, dr230);
  L1814(bad27, l181):
    r1099 = `$<-`(l181, <sym bad_urls>, bad25);
    goto L1812(bad27, r1099);
  L1818():
    c519 = `as.logical`(r1101);
    if c519 then L1819() else L297();
  L1875():
    c531 = `as.logical`(r1164);
    if c531 then L1876() else L311();
  L2059():
    meta129 = force? meta128;
    checkMissing(meta129);
    c583 = `is.object`(meta129);
    if c583 then L2060() else L2061(meta129);
  L2155():
    db1 = force? db;
    checkMissing(db1);
    inherits6 = ldf inherits in base;
    r1445 = dyn inherits6(db1, "error", FALSE);
    check L2156() else D660();
  L2157():
    message = ldf message;
    check L2158() else D661();
  D660():
    deopt 2588 [r1445];
  D661():
    deopt 2590 [];
  D664():
    deopt 2599 [];
  L297():
    goto L296();
  L311():
    goto L331();
  L331():
    remote4 = ld remote;
    check L1969() else D571();
  L356(dx335):
    st package = dx335;
    sym111 = ldf c;
    base111 = ldf c in base;
    guard111 = `==`.4(sym111, base111);
    if guard111 then L2063() else L2064();
  L1815():
    dx263 = getTryDispatchBuiltinValue(dr230);
    goto L1812(bad25, dx263);
  L1819():
    st prefix = "https://cran.r-project.org/package=";
    sym91 = ldf nchar;
    base91 = ldf nchar in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L1820() else L1821();
  L1876():
    udb2 = ld udb;
    check L1877() else D528();
  L2060():
    dr292 = tryDispatchBuiltin.1("[", meta129);
    dc146 = getTryDispatchBuiltinDispatched(dr292);
    if dc146 then L2062() else L2061(dr292);
  L2061(meta131):
    __60 = ldf `[` in base;
    r1358 = dyn __60(meta131, "Package");
    goto L356(r1358);
  L2156():
    goto L375(r1445);
  L2158():
    r1446 = dyn message("NB: need Internet access to use CRAN incoming checks");
    check L2159() else D662();
  L2163():
    p335 = prom<V +>{
      rbind2 = ld rbind;
      rbind3 = force? rbind2;
      checkMissing(rbind3);
      return rbind3;
    };
    p336 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    r1451 = dyn do_call(p335, p336);
    check L2164() else D665();
  D528():
    deopt 2102 [udb2];
  D571():
    deopt 2257 [remote4];
  D662():
    deopt 2592 [r1446];
  D665():
    deopt 2602 [r1451];
  L298(r1103):
    st ncp = r1103;
    substring1 = ldf substring;
    check L1824() else D501();
  L357(r1360):
    st depends = r1360;
    _in_1 = ldf `%in%`;
    check L2066() else D617();
  L1820():
    prefix = ld prefix;
    check L1822() else D499();
  L1821():
    r1102 = dyn base91(<sym prefix>);
    goto L298(r1102);
  L1877():
    udb3 = force? udb2;
    checkMissing(udb3);
    c532 = `is.object`(udb3);
    if c532 then L1879() else L1880(udb3);
  L1969():
    remote5 = force? remote4;
    checkMissing(remote5);
    c551 = `as.logical`(remote5);
    if c551 then L1970() else L332();
  L2062():
    dx334 = getTryDispatchBuiltinValue(dr292);
    goto L356(dx334);
  L2063():
    c584 = ldf c in base;
    r1361 = dyn c584("Depends", "Imports", "LinkingTo");
    check L2065() else D616();
  L2064():
    r1359 = dyn base111("Depends", "Imports", "LinkingTo");
    goto L357(r1359);
  L2159():
    out14 = ld out;
    check L2160() else D663();
  L2164():
    st db = r1451;
    urls6 = ld urls;
    check L2165() else D666();
  D499():
    deopt 1995 [prefix];
  D501():
    deopt 2004 [];
  D616():
    deopt 2436 [r1361];
  D617():
    deopt 2439 [];
  D663():
    deopt 2593 [out14];
  D666():
    deopt 2604 [urls6];
  L332():
    goto L352(NULL);
  L352(dx333):
    goto L291();
  L1822():
    prefix1 = force? prefix;
    checkMissing(prefix1);
    nchar1 = ldf nchar in base;
    r1104 = dyn nchar1(prefix1, "chars", FALSE, NA_LGL);
    check L1823() else D500();
  L1824():
    p252 = prom<V +>{
      tolower6 = ldf tolower;
      p251 = prom<V +>{
        bad33 = ld bad;
        bad34 = force? bad33;
        checkMissing(bad34);
        c520 = `is.object`(bad34);
        if c520 then L1() else L2(bad34);
      L0(dx266):
        return dx266;
      L1():
        dr232 = tryDispatchBuiltin.1("$", bad34);
        dc116 = getTryDispatchBuiltinDispatched(dr232);
        if dc116 then L3() else L2(dr232);
      L2(bad36):
        r1105 = `$`(bad36, <sym URL>);
        goto L0(r1105);
      L3():
        dx265 = getTryDispatchBuiltinValue(dr232);
        goto L0(dx265);
      };
      r1107 = dyn tolower6(p251);
      return r1107;
    };
    p253 = prom<V +>{
      ncp = ld ncp;
      ncp1 = force? ncp;
      checkMissing(ncp1);
      return ncp1;
    };
    r1110 = dyn substring1(p252, 1, p253);
    check L1825() else D502();
  L1878(dx281):
    st urls = dx281;
    parse_URI_reference1 = ldf parse_URI_reference;
    check L1882() else D529();
  L1879():
    dr246 = tryDispatchBuiltin.1("$", udb3);
    dc123 = getTryDispatchBuiltinDispatched(dr246);
    if dc123 then L1881() else L1880(dr246);
  L1880(udb5):
    r1165 = `$`(udb5, <sym URL>);
    goto L1878(r1165);
  L1970():
    st pat = "<(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?>";
    meta124 = ld meta;
    check L1971() else D572();
  L2065():
    goto L357(r1361);
  L2066():
    p312 = prom<V +>{
      package10 = ld package;
      package11 = force? package10;
      checkMissing(package11);
      return package11;
    };
    p314 = prom<V +>{
      rownames = ldf rownames;
      p313 = prom<V +>{
        available = ld available;
        available1 = force? available;
        checkMissing(available1);
        return available1;
      };
      r1364 = dyn rownames(p313);
      return r1364;
    };
    r1366 = dyn _in_1(p312, p314);
    check L2067() else D618();
  L2160():
    out15 = force? out14;
    checkMissing(out15);
    popenv;
    return out15;
  L2165():
    urls7 = force? urls6;
    checkMissing(urls7);
    c600 = `is.object`(urls7);
    if c600 then L2166() else L2167(urls7);
  D500():
    deopt 2001 [r1104];
  D502():
    deopt 2008 [r1110];
  D529():
    deopt 2107 [];
  D572():
    deopt 2262 [meta124];
  D618():
    deopt 2442 [r1366];
  L378(dx362):
    st CRAN = dx362;
    url = ldf url;
    check L2169() else D667();
  L1823():
    goto L298(r1104);
  L1825():
    prefix2 = ld prefix;
    check L1826() else D503();
  L1881():
    dx280 = getTryDispatchBuiltinValue(dr246);
    goto L1878(dx280);
  L1882():
    p263 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    r1167 = dyn parse_URI_reference1(p263);
    check L1883() else D530();
  L1971():
    meta125 = force? meta124;
    checkMissing(meta125);
    c552 = `is.object`(meta125);
    if c552 then L1972() else L1973(meta125);
  L2067():
    c585 = `as.logical`(r1366);
    if c585 then L2068() else L358();
  L2166():
    dr314 = tryDispatchBuiltin.1("[", urls7);
    dc157 = getTryDispatchBuiltinDispatched(dr314);
    if dc157 then L2168() else L2167(dr314);
  L2167(urls9):
    __66 = ldf `[` in base;
    r1452 = dyn __66(urls9, 1);
    goto L378(r1452);
  D503():
    deopt 2008 [r1110, prefix2];
  D530():
    deopt 2109 [r1167];
  D667():
    deopt 2611 [];
  L333(dx311):
    st dsc = dx311;
    _gregexec_at_pos = ldf `.gregexec_at_pos`;
    check L1975() else D573();
  L358():
    rbind = ldf rbind;
    check L2080() else D623();
  L361():
    analyze_licenses = ldf analyze_licenses;
    check L2087() else D630();
  L1826():
    prefix3 = force? prefix2;
    checkMissing(prefix3);
    r1111 = `==`(r1110, prefix3);
    substring2 = ldf substring;
    check L1827() else D504();
  L1883():
    st parts = r1167;
    _in_ = ldf `%in%`;
    check L1884() else D531();
  L1972():
    dr276 = tryDispatchBuiltin.1("[", meta125);
    dc138 = getTryDispatchBuiltinDispatched(dr276);
    if dc138 then L1974() else L1973(dr276);
  L1973(meta127):
    __53 = ldf `[` in base;
    r1267 = dyn __53(meta127, "Description");
    goto L333(r1267);
  L2068():
    meta132 = ld meta;
    check L2069() else D619();
  L2168():
    dx361 = getTryDispatchBuiltinValue(dr314);
    goto L378(dx361);
  L2169():
    p338 = prom<V +>{
      sprintf3 = ldf sprintf;
      p337 = prom<V +>{
        CRAN = ld CRAN;
        CRAN1 = force? CRAN;
        checkMissing(CRAN1);
        return CRAN1;
      };
      r1454 = dyn sprintf3("%s/src/contrib/PACKAGES.in", p337);
      return r1454;
    };
    r1456 = dyn url(p338);
    check L2170() else D668();
  D504():
    deopt 2011 [r1111];
  D531():
    deopt 2112 [];
  D573():
    deopt 2269 [];
  D619():
    deopt 2443 [meta132];
  D623():
    deopt 2455 [];
  D630():
    deopt 2473 [];
  D668():
    deopt 2613 [r1456];
  L1827():
    p254 = prom<V +>{
      bad37 = ld bad;
      bad38 = force? bad37;
      checkMissing(bad38);
      c521 = `is.object`(bad38);
      if c521 then L1() else L2(bad38);
    L0(dx268):
      return dx268;
    L1():
      dr234 = tryDispatchBuiltin.1("$", bad38);
      dc117 = getTryDispatchBuiltinDispatched(dr234);
      if dc117 then L3() else L2(dr234);
    L2(bad40):
      r1112 = `$`(bad40, <sym URL>);
      goto L0(r1112);
    L3():
      dx267 = getTryDispatchBuiltinValue(dr234);
      goto L0(dx267);
    };
    p255 = prom<V +>{
      ncp2 = ld ncp;
      ncp3 = force? ncp2;
      checkMissing(ncp3);
      r1114 = `+`(ncp3, 1);
      return r1114;
    };
    r1116 = dyn substring2(p254, p255);
    check L1828() else D505();
  L1884():
    p264 = prom<V +>{
      parts = ld parts;
      parts1 = force? parts;
      checkMissing(parts1);
      c533 = `is.object`(parts1);
      if c533 then L1() else L2();
    L0(dx283):
      return dx283;
    L1():
      dr248 = tryDispatchBuiltin.1("[", parts1);
      dc124 = getTryDispatchBuiltinDispatched(dr248);
      if dc124 then L3() else L2();
    L2():
      __45 = ldf `[` in base;
      r1168 = dyn __45(parts1, <missing>, "scheme");
      goto L0(r1168);
    L3():
      dx282 = getTryDispatchBuiltinValue(dr248);
      goto L0(dx282);
    };
    p265 = prom<V +>{
      sym96 = ldf c;
      base96 = ldf c in base;
      guard96 = `==`.4(sym96, base96);
      if guard96 then L1() else L2();
    L0(r1171):
      return r1171;
    L1():
      c534 = ldf c in base;
      r1172 = dyn c534("", "file");
      goto L0(r1172);
    L2():
      r1170 = dyn base96("", "file");
      goto L0(r1170);
    };
    r1174 = dyn _in_(p264, p265);
    check L1885() else D532();
  L1974():
    dx310 = getTryDispatchBuiltinValue(dr276);
    goto L333(dx310);
  L1975():
    p286 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    p287 = prom<V +>{
      dsc = ld dsc;
      dsc1 = force? dsc;
      checkMissing(dsc1);
      return dsc1;
    };
    p290 = prom<V +>{
      gregexpr1 = ldf gregexpr;
      p288 = prom<V +>{
        pat2 = ld pat;
        pat3 = force? pat2;
        checkMissing(pat3);
        return pat3;
      };
      p289 = prom<V +>{
        dsc2 = ld dsc;
        dsc3 = force? dsc2;
        checkMissing(dsc3);
        return dsc3;
      };
      r1272 = dyn gregexpr1(p288, p289);
      return r1272;
    };
    r1274 = dyn _gregexec_at_pos(p286, p287, p290, 3);
    check L1976() else D574();
  L2069():
    meta133 = force? meta132;
    checkMissing(meta133);
    c586 = `is.object`(meta133);
    if c586 then L2070() else L2071(meta133);
  L2080():
    p316 = prom<V +>{
      meta136 = ld meta;
      meta137 = force? meta136;
      checkMissing(meta137);
      c588 = `is.object`(meta137);
      if c588 then L1() else L2(meta137);
    L0(dx346):
      return dx346;
    L1():
      dr298 = tryDispatchBuiltin.1("[", meta137);
      dc149 = getTryDispatchBuiltinDispatched(dr298);
      if dc149 then L3() else L2(dr298);
    L2(meta139):
      colnames = ldf colnames;
      p315 = prom<V +>{
        available2 = ld available;
        available3 = force? available2;
        checkMissing(available3);
        return available3;
      };
      r1370 = dyn colnames(p315);
      __62 = ldf `[` in base;
      r1371 = dyn __62(meta139, r1370);
      goto L0(r1371);
    L3():
      dx345 = getTryDispatchBuiltinValue(dr298);
      goto L0(dx345);
    };
    r1373 = dyn rbind(p316);
    check L2081() else D624();
  L2087():
    p319 = prom<V +>{
      available6 = ld available;
      available7 = force? available6;
      checkMissing(available7);
      c589 = `is.object`(available7);
      if c589 then L1() else L2();
    L0(dx348):
      return dx348;
    L1():
      dr300 = tryDispatchBuiltin.1("[", available7);
      dc150 = getTryDispatchBuiltinDispatched(dr300);
      if dc150 then L3() else L2();
    L2():
      __63 = ldf `[` in base;
      r1378 = dyn __63(available7, <missing>, "License");
      goto L0(r1378);
    L3():
      dx347 = getTryDispatchBuiltinValue(dr300);
      goto L0(dx347);
    };
    p320 = prom<V +>{
      available10 = ld available;
      available11 = force? available10;
      checkMissing(available11);
      return available11;
    };
    r1381 = dyn analyze_licenses(p319, p320);
    check L2088() else D631();
  L2170():
    st con = r1456;
    read_dcf = ldf `read.dcf`;
    check L2171() else D669();
  D505():
    deopt 2014 [r1111, r1116];
  D532():
    deopt 2115 [r1174];
  D574():
    deopt 2274 [r1274];
  D624():
    deopt 2457 [r1373];
  D631():
    deopt 2476 [r1381];
  D669():
    deopt 2616 [];
  L359(dx337):
    l215 = ld available;
    c587 = `is.object`(l215);
    if c587 then L2074() else L2075(dx337, l215);
  L1828():
    package6 = ld package;
    check L1829() else D506();
  L1885():
    st ind = r1174;
    parts4 = ld parts;
    check L1886() else D533();
  L1976():
    st ids = r1274;
    sym103 = ldf length;
    base103 = ldf length in base;
    guard103 = `==`.4(sym103, base103);
    if guard103 then L1977() else L1978();
  L2070():
    dr294 = tryDispatchBuiltin.1("[", meta133);
    dc147 = getTryDispatchBuiltinDispatched(dr294);
    if dc147 then L2072() else L2071(dr294);
  L2071(meta135):
    depends = ld depends;
    check L2073() else D620();
  L2081():
    st entry = r1373;
    package14 = ld package;
    check L2082() else D625();
  L2088():
    st ldb = r1381;
    unlist1 = ldf unlist;
    check L2089() else D632();
  L2171():
    p339 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r1458 = dyn read_dcf(p339);
    check L2172() else D670();
  D506():
    deopt 2014 [r1111, r1116, package6];
  D533():
    deopt 2117 [parts4];
  D620():
    deopt 2445 [meta135, depends];
  D625():
    deopt 2459 [package14];
  D632():
    deopt 2479 [];
  D670():
    deopt 2618 [r1458];
  L334(r1276):
    c553 = `as.logical`(r1276);
    if c553 then L1981() else L335();
  L360(dx342, dx343):
    st available = dx343;
    goto L361();
  L1829():
    package7 = force? package6;
    checkMissing(package7);
    r1117 = `==`(r1116, package7);
    r1118 = `&&`(r1111, r1117);
    st ind = r1118;
    sym92 = ldf any;
    base92 = ldf any in base;
    guard92 = `==`.4(sym92, base92);
    if guard92 then L1830() else L1831();
  L1886():
    parts5 = force? parts4;
    checkMissing(parts5);
    c535 = `is.object`(parts5);
    if c535 then L1887() else L1888(parts5);
  L1977():
    ids = ld ids;
    check L1979() else D575();
  L1978():
    r1275 = dyn base103(<sym ids>);
    goto L334(r1275);
  L2072():
    dx336 = getTryDispatchBuiltinValue(dr294);
    goto L359(dx336);
  L2073():
    depends1 = force? depends;
    __61 = ldf `[` in base;
    r1367 = dyn __61(meta135, depends1);
    goto L359(r1367);
  L2074():
    dr296 = tryDispatchBuiltin.0("[<-", l215, dx337);
    dc148 = getTryDispatchBuiltinDispatched(dr296);
    if dc148 then L2076() else L2075(dx337, dr296);
  L2075(dx339, l217):
    package12 = ld package;
    check L2077() else D621();
  L2082():
    package15 = force? package14;
    checkMissing(package15);
    l218 = ld entry;
    rownames__ = ldf `rownames<-`;
    check L2083() else D626();
  L2089():
    p323 = prom<V +>{
      package_dependencies = ldf package_dependencies;
      p321 = prom<V +>{
        package16 = ld package;
        package17 = force? package16;
        checkMissing(package17);
        return package17;
      };
      p322 = prom<V +>{
        available12 = ld available;
        available13 = force? available12;
        checkMissing(available13);
        return available13;
      };
      r1384 = dyn package_dependencies[, , recursive](p321, p322, TRUE);
      return r1384;
    };
    r1386 = dyn unlist1(p323);
    check L2090() else D633();
  L2172():
    st odb = r1458;
    close = ldf close;
    check L2173() else D671();
  D575():
    deopt 2278 [ids];
  D621():
    deopt 2449 [dx339, l217, dx337, package12];
  D626():
    deopt 2462 [package15, l218, package15];
  D633():
    deopt 2481 [r1386];
  D671():
    deopt 2621 [];
  L299(r1120):
    c522 = `as.logical`(r1120);
    if c522 then L1834() else L300();
  L312(dx285):
    st fpaths0 = dx285;
    st fpaths1 = dx285;
    udb6 = ld udb;
    check L1891() else D535();
  L335():
    goto L341();
  L341():
    _ORCID_iD_db_from_package_sources = ldf `.ORCID_iD_db_from_package_sources`;
    check L2005() else D587();
  L1830():
    ind10 = ld ind;
    check L1832() else D507();
  L1831():
    r1119 = dyn base92(<sym ind>);
    goto L299(r1119);
  L1887():
    dr250 = tryDispatchBuiltin.1("[", parts5);
    dc125 = getTryDispatchBuiltinDispatched(dr250);
    if dc125 then L1889() else L1888(dr250);
  L1888(parts7):
    ind21 = ld ind;
    check L1890() else D534();
  L1979():
    ids1 = force? ids;
    checkMissing(ids1);
    length35 = ldf length in base;
    r1277 = dyn length35(ids1);
    check L1980() else D576();
  L1981():
    st ini = "10.48550/arXiv.";
    doi_db = ldf doi_db;
    check L1982() else D577();
  L2076():
    dx341 = getTryDispatchBuiltinValue(dr296);
    goto L360(dx337, dx341);
  L2077():
    package13 = force? package12;
    depends2 = ld depends;
    check L2078() else D622();
  L2083():
    r1374 = dyn rownames__(l218, NULL, package15);
    check L2084() else D627();
  L2090():
    st depends = r1386;
    ldb = ld ldb;
    check L2091() else D634();
  L2173():
    p340 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r1460 = dyn close(p340);
    check L2174() else D672();
  D507():
    deopt 2021 [ind10];
  D534():
    deopt 2119 [parts7, ind21];
  D535():
    deopt 2125 [udb6];
  D576():
    deopt 2281 [r1277];
  D577():
    deopt 2286 [];
  D587():
    deopt 2327 [];
  D622():
    deopt 2450 [dx339, l217, dx337, package13, depends2];
  D627():
    deopt 2464 [package15, r1374];
  D634():
    deopt 2483 [ldb];
  D672():
    deopt 2623 [r1460];
  L300():
    goto L302();
  L302():
    st prefix = "http://cran.r-project.org/package=";
    sym93 = ldf nchar;
    base93 = ldf nchar in base;
    guard93 = `==`.4(sym93, base93);
    if guard93 then L1841() else L1842();
  L1832():
    ind11 = force? ind10;
    checkMissing(ind11);
    any8 = ldf any in base;
    r1121 = dyn any8(ind11);
    check L1833() else D508();
  L1834():
    bad41 = ld bad;
    check L1835() else D509();
  L1889():
    dx284 = getTryDispatchBuiltinValue(dr250);
    goto L312(dx284);
  L1890():
    ind22 = force? ind21;
    __46 = ldf `[` in base;
    r1175 = dyn __46(parts7, ind22, "path");
    goto L312(r1175);
  L1891():
    udb7 = force? udb6;
    checkMissing(udb7);
    c536 = `is.object`(udb7);
    if c536 then L1892() else L1893(udb7);
  L1980():
    goto L334(r1277);
  L1982():
    p293 = prom<V +>{
      paste12 = ldf paste0;
      p291 = prom<V +>{
        ini = ld ini;
        ini1 = force? ini;
        checkMissing(ini1);
        return ini1;
      };
      p292 = prom<V +>{
        ids2 = ld ids;
        ids3 = force? ids2;
        checkMissing(ids3);
        return ids3;
      };
      r1280 = dyn paste12(p291, p292);
      return r1280;
    };
    p294 = prom<V +>{
      sym104 = ldf `rep.int`;
      base104 = ldf `rep.int` in base;
      guard104 = `==`.4(sym104, base104);
      if guard104 then L2() else L3();
    L0(r1283):
      return r1283;
    L2():
      sym105 = ldf length;
      base105 = ldf length in base;
      guard105 = `==`.4(sym105, base105);
      if guard105 then L4() else L5();
    L3():
      r1282 = dyn base104("DESCRIPTION", <lang length(ids)>);
      goto L0(r1282);
    L1(r1285):
      rep_int2 = ldf `rep.int` in base;
      r1287 = dyn rep_int2("DESCRIPTION", r1285);
      goto L0(r1287);
    L4():
      ids4 = ld ids;
      ids5 = force? ids4;
      checkMissing(ids5);
      length36 = ldf length in base;
      r1286 = dyn length36(ids5);
      goto L1(r1286);
    L5():
      r1284 = dyn base105(<sym ids>);
      goto L1(r1284);
    };
    r1289 = dyn doi_db(p293, p294);
    check L1983() else D578();
  L2005():
    p301 = prom<V +>{
      dir57 = ld dir;
      dir58 = force? dir57;
      checkMissing(dir58);
      return dir58;
    };
    r1319 = dyn _ORCID_iD_db_from_package_sources(p301);
    check L2006() else D588();
  L2078():
    depends3 = force? depends2;
    ___11 = ldf `[<-` in base;
    r1368 = dyn ___11(l217, dx337, package13, depends3);
    goto L360(dx339, r1368);
  L2084():
    st entry = r1374;
    rbind1 = ldf rbind;
    check L2085() else D628();
  L2091():
    ldb1 = force? ldb;
    checkMissing(ldb1);
    c590 = `is.object`(ldb1);
    if c590 then L2093() else L2094(ldb1);
  L2174():
    odb20 = ld odb;
    check L2175() else D673();
  D508():
    deopt 2024 [r1121];
  D509():
    deopt 2025 [bad41];
  D578():
    deopt 2289 [r1289];
  D588():
    deopt 2329 [r1319];
  D628():
    deopt 2467 [];
  D673():
    deopt 2624 [odb20];
  L303(r1125):
    st ncp = r1125;
    substring3 = ldf substring;
    check L1845() else D513();
  L313(dx287):
    st parents = dx287;
    sym97 = ldf any;
    base97 = ldf any in base;
    guard97 = `==`.4(sym97, base97);
    if guard97 then L1896() else L1897();
  L1833():
    goto L299(r1121);
  L1835():
    bad42 = force? bad41;
    checkMissing(bad42);
    c523 = `is.object`(bad42);
    if c523 then L1836() else L1837(bad42);
  L1841():
    prefix4 = ld prefix;
    check L1843() else D511();
  L1842():
    r1124 = dyn base93(<sym prefix>);
    goto L303(r1124);
  L1892():
    dr252 = tryDispatchBuiltin.1("[", udb7);
    dc126 = getTryDispatchBuiltinDispatched(dr252);
    if dc126 then L1894() else L1893(dr252);
  L1893(udb9):
    ind23 = ld ind;
    check L1895() else D536();
  L1983():
    st ddb = r1289;
    tryCatch5 = ldf tryCatch;
    check L1984() else D579();
  L2006():
    st odb = r1319;
    NROW3 = ldf NROW;
    check L2007() else D589();
  L2085():
    p317 = prom<V +>{
      available4 = ld available;
      available5 = force? available4;
      checkMissing(available5);
      return available5;
    };
    p318 = prom<V +>{
      entry = ld entry;
      entry1 = force? entry;
      checkMissing(entry1);
      return entry1;
    };
    r1377 = dyn rbind1(p317, p318);
    check L2086() else D629();
  L2092(dx350):
    st ru = dx350;
    rownames1 = ldf rownames;
    check L2096() else D635();
  L2093():
    dr302 = tryDispatchBuiltin.1("$", ldb1);
    dc151 = getTryDispatchBuiltinDispatched(dr302);
    if dc151 then L2095() else L2094(dr302);
  L2094(ldb3):
    r1387 = `$`(ldb3, <sym restricts_use>);
    goto L2092(r1387);
  L2175():
    odb21 = force? odb20;
    checkMissing(odb21);
    c601 = `is.object`(odb21);
    if c601 then L2176() else L2177(odb21);
  D511():
    deopt 2041 [prefix4];
  D513():
    deopt 2050 [];
  D536():
    deopt 2127 [udb9, ind23];
  D579():
    deopt 2292 [];
  D589():
    deopt 2332 [];
  D629():
    deopt 2470 [r1377];
  D635():
    deopt 2488 [];
  L301(dx270):
    st bad = dx270;
    goto L302();
  L314(r1178):
    c537 = `as.logical`(r1178);
    if c537 then L1903() else L315();
  L379(dx364):
    st entry = dx364;
    entry2 = ld entry;
    check L2187() else D676();
  L1836():
    dr236 = tryDispatchBuiltin.1("[", bad42);
    dc118 = getTryDispatchBuiltinDispatched(dr236);
    if dc118 then L1838() else L1837(dr236);
  L1837(bad44):
    ind12 = ld ind;
    check L1839() else D510();
  L1843():
    prefix5 = force? prefix4;
    checkMissing(prefix5);
    nchar2 = ldf nchar in base;
    r1126 = dyn nchar2(prefix5, "chars", FALSE, NA_LGL);
    check L1844() else D512();
  L1845():
    p257 = prom<V +>{
      tolower7 = ldf tolower;
      p256 = prom<V +>{
        bad45 = ld bad;
        bad46 = force? bad45;
        checkMissing(bad46);
        c524 = `is.object`(bad46);
        if c524 then L1() else L2(bad46);
      L0(dx273):
        return dx273;
      L1():
        dr238 = tryDispatchBuiltin.1("$", bad46);
        dc119 = getTryDispatchBuiltinDispatched(dr238);
        if dc119 then L3() else L2(dr238);
      L2(bad48):
        r1127 = `$`(bad48, <sym URL>);
        goto L0(r1127);
      L3():
        dx272 = getTryDispatchBuiltinValue(dr238);
        goto L0(dx272);
      };
      r1129 = dyn tolower7(p256);
      return r1129;
    };
    p258 = prom<V +>{
      ncp4 = ld ncp;
      ncp5 = force? ncp4;
      checkMissing(ncp5);
      return ncp5;
    };
    r1132 = dyn substring3(p257, 1, p258);
    check L1846() else D514();
  L1894():
    dx286 = getTryDispatchBuiltinValue(dr252);
    goto L313(dx286);
  L1895():
    ind24 = force? ind23;
    __47 = ldf `[` in base;
    r1176 = dyn __47(udb9, ind24, "Parent");
    goto L313(r1176);
  L1896():
    startsWith7 = ldf startsWith;
    check L1898() else D537();
  L1897():
    r1177 = dyn base97(<lang `<-`(ind, `(`(`&`(startsWith(fpaths0, "../"), grepl("^(inst/doc|man|demo)", parents))))>);
    goto L314(r1177);
  L1984():
    p297 = prom<V +>{
      check_doi_db = ldf check_doi_db;
      p295 = prom<V +>{
        ddb = ld ddb;
        ddb1 = force? ddb;
        checkMissing(ddb1);
        return ddb1;
      };
      p296 = prom<V +>{
        check_urls_in_parallel2 = ld check_urls_in_parallel;
        check_urls_in_parallel3 = force? check_urls_in_parallel2;
        checkMissing(check_urls_in_parallel3);
        return check_urls_in_parallel3;
      };
      r1292 = dyn check_doi_db[, parallel](p295, p296);
      return r1292;
    };
    p298 = prom<V +>{
      identity10 = ld identity;
      identity11 = force? identity10;
      checkMissing(identity11);
      return identity11;
    };
    r1295 = dyn tryCatch5[, error](p297, p298);
    check L1985() else D580();
  L2007():
    p302 = prom<V +>{
      odb = ld odb;
      odb1 = force? odb;
      checkMissing(odb1);
      return odb1;
    };
    r1321 = dyn NROW3(p302);
    check L2008() else D590();
  L2086():
    st available = r1377;
    goto L361();
  L2095():
    dx349 = getTryDispatchBuiltinValue(dr302);
    goto L2092(dx349);
  L2096():
    p324 = prom<V +>{
      available14 = ld available;
      available15 = force? available14;
      checkMissing(available15);
      return available15;
    };
    r1389 = dyn rownames1(p324);
    check L2097() else D636();
  L2176():
    dr316 = tryDispatchBuiltin.1("[", odb21);
    dc158 = getTryDispatchBuiltinDispatched(dr316);
    if dc158 then L2178() else L2177(dr316);
  L2177(odb23):
    odb24 = ld odb;
    check L2179() else D674();
  D510():
    deopt 2027 [bad44, ind12];
  D512():
    deopt 2047 [r1126];
  D514():
    deopt 2054 [r1132];
  D537():
    deopt 2135 [];
  D580():
    deopt 2296 [r1295];
  D590():
    deopt 2334 [r1321];
  D636():
    deopt 2490 [r1389];
  D674():
    deopt 2626 [odb23, odb24];
  D676():
    deopt 2641 [entry2];
  L315():
    goto L325();
  L325():
    l200 = ld fpaths1;
    c545 = `is.object`(l200);
    if c545 then L1941() else L1942("", l200);
  L1838():
    dx269 = getTryDispatchBuiltinValue(dr236);
    goto L301(dx269);
  L1839():
    ind13 = force? ind12;
    checkMissing(ind13);
    r1122 = `!`(ind13);
    __44 = ldf `[` in base;
    r1123 = dyn __44(bad42, r1122, <missing>);
    goto L301(r1123);
  L1844():
    goto L303(r1126);
  L1846():
    prefix6 = ld prefix;
    check L1847() else D515();
  L1898():
    p266 = prom<V +>{
      fpaths0 = ld fpaths0;
      fpaths1 = force? fpaths0;
      checkMissing(fpaths1);
      return fpaths1;
    };
    r1180 = dyn startsWith7(p266, "../");
    check L1899() else D538();
  L1903():
    sym98 = ldf `rep.int`;
    base98 = ldf `rep.int` in base;
    guard98 = `==`.4(sym98, base98);
    if guard98 then L1904() else L1905();
  L1985():
    st bad = r1295;
    sym106 = ldf inherits;
    base106 = ldf inherits in base;
    guard106 = `==`.4(sym106, base106);
    if guard106 then L1986() else L1987();
  L2008():
    c566 = `as.logical`(r1321);
    if c566 then L2009() else L342();
  L2097():
    c591 = `is.object`(r1389);
    if c591 then L2098() else L2099(r1389);
  L2178():
    dx363 = getTryDispatchBuiltinValue(dr316);
    goto L379(dx363);
  L2179():
    odb25 = force? odb24;
    checkMissing(odb25);
    c602 = `is.object`(odb25);
    if c602 then L2180() else L2181(odb23);
  L2187():
    entry3 = force? entry2;
    checkMissing(entry3);
    c604 = `is.object`(entry3);
    if c604 then L2188() else L2189(entry3);
  D515():
    deopt 2054 [r1132, prefix6];
  D538():
    deopt 2138 [r1180];
  L316(r1186):
    st foo = r1186;
    fpaths2 = ld fpaths0;
    check L1911() else D545();
  L326(dx301):
    st fpaths1 = dx301;
    l203 = ld fpaths1;
    c546 = `is.object`(l203);
    if c546 then L1946() else L1947("", l203);
  L336(r1297):
    r1299 = `!`(r1297);
    c554 = `as.logical`(r1299);
    if c554 then L1990() else L337(c554);
  L342():
    goto L344();
  L344():
    NROW4 = ldf NROW;
    check L2018() else D595();
  L362(dx352):
    st pnames_restricts_use_TRUE = dx352;
    rownames2 = ldf rownames;
    check L2106() else D640();
  L380(odb31, dx366):
    meta142 = ld meta;
    check L2183() else D675();
  L382(dx374):
    st entry = dx374;
    sym120 = ldf length;
    base120 = ldf length in base;
    guard120 = `==`.4(sym120, base120);
    if guard120 then L2197() else L2198();
  L1847():
    prefix7 = force? prefix6;
    checkMissing(prefix7);
    r1133 = `==`(r1132, prefix7);
    substring4 = ldf substring;
    check L1848() else D516();
  L1899():
    grepl14 = ldf grepl;
    check L1900() else D539();
  L1904():
    sym99 = ldf sum;
    base99 = ldf sum in base;
    guard99 = `==`.4(sym99, base99);
    if guard99 then L1906() else L1907();
  L1905():
    r1185 = dyn base98("/library/<pkg>/<sub>", <lang sum(ind)>);
    goto L316(r1185);
  L1941():
    dr266 = tryDispatchBuiltin.0("[<-", l200, "");
    dc133 = getTryDispatchBuiltinDispatched(dr266);
    if dc133 then L1943() else L1942("", dr266);
  L1942(r1217, l202):
    grepl15 = ldf grepl;
    check L1944() else D558();
  L1986():
    bad62 = ld bad;
    check L1988() else D581();
  L1987():
    r1296 = dyn base106(<sym bad>, "error");
    goto L336(r1296);
  L2009():
    grepl16 = ldf grepl;
    check L2010() else D591();
  L2098():
    dr304 = tryDispatchBuiltin.1("[", r1389);
    dc152 = getTryDispatchBuiltinDispatched(dr304);
    if dc152 then L2100() else L2099(dr304);
  L2099(r1391):
    sym112 = ldf `is.na`;
    base112 = ldf `is.na` in base;
    guard112 = `==`.4(sym112, base112);
    if guard112 then L2101() else L2102();
  L2180():
    dr318 = tryDispatchBuiltin.1("[", odb25);
    dc159 = getTryDispatchBuiltinDispatched(dr318);
    if dc159 then L2182() else L2181(odb23);
  L2181(odb28):
    __67 = ldf `[` in base;
    r1461 = dyn __67(odb25, <missing>, "Package");
    goto L380(odb28, r1461);
  L2188():
    dr322 = tryDispatchBuiltin.1("[", entry3);
    dc161 = getTryDispatchBuiltinDispatched(dr322);
    if dc161 then L2190() else L2189(dr322);
  L2189(entry5):
    sym117 = ldf `is.na`;
    base117 = ldf `is.na` in base;
    guard117 = `==`.4(sym117, base117);
    if guard117 then L2191() else L2192();
  D516():
    deopt 2057 [r1133];
  D539():
    deopt 2139 [r1180];
  D545():
    deopt 2159 [fpaths2];
  D558():
    deopt 2209 [r1217, l202, ""];
  D581():
    deopt 2300 [bad62];
  D591():
    deopt 2336 [];
  D595():
    deopt 2354 [];
  D640():
    deopt 2503 [];
  D675():
    deopt 2631 [odb31, dx366, meta142];
  L317(r1188):
    rep_int1 = ldf `rep.int` in base;
    r1190 = dyn rep_int1("/library/<pkg>/<sub>", r1188);
    check L1910() else D544();
  L327(dx303):
    st fpaths1 = dx303;
    dirname1 = ldf dirname;
    check L1952() else D563();
  L337(c556):
    c563 = `as.logical`(c556);
    if c563 then L1996() else L339();
  L363(r1395, r1396):
    r1398 = `!`(r1396);
    ru2 = ld ru;
    check L2105() else D639();
  L383(entry8, r1466):
    r1468 = `!`(r1466);
    _notin_2 = ldf `%notin%`;
    check L2195() else D679();
  L384(r1481):
    c606 = `as.logical`(r1481);
    if c606 then L2201() else L385();
  L1848():
    p259 = prom<V +>{
      bad49 = ld bad;
      bad50 = force? bad49;
      checkMissing(bad50);
      c525 = `is.object`(bad50);
      if c525 then L1() else L2(bad50);
    L0(dx275):
      return dx275;
    L1():
      dr240 = tryDispatchBuiltin.1("$", bad50);
      dc120 = getTryDispatchBuiltinDispatched(dr240);
      if dc120 then L3() else L2(dr240);
    L2(bad52):
      r1134 = `$`(bad52, <sym URL>);
      goto L0(r1134);
    L3():
      dx274 = getTryDispatchBuiltinValue(dr240);
      goto L0(dx274);
    };
    p260 = prom<V +>{
      ncp6 = ld ncp;
      ncp7 = force? ncp6;
      checkMissing(ncp7);
      r1136 = `+`(ncp7, 1);
      return r1136;
    };
    r1138 = dyn substring4(p259, p260);
    check L1849() else D517();
  L1900():
    p267 = prom<V +>{
      parents = ld parents;
      parents1 = force? parents;
      checkMissing(parents1);
      return parents1;
    };
    r1182 = dyn grepl14("^(inst/doc|man|demo)", p267);
    check L1901() else D540();
  L1906():
    ind25 = ld ind;
    check L1908() else D542();
  L1907():
    r1187 = dyn base99(<sym ind>);
    goto L317(r1187);
  L1911():
    fpaths3 = force? fpaths2;
    checkMissing(fpaths3);
    c538 = `is.object`(fpaths3);
    if c538 then L1912() else L1913(fpaths3);
  L1943():
    dx300 = getTryDispatchBuiltinValue(dr266);
    goto L326(dx300);
  L1944():
    p272 = prom<V +>{
      fpaths6 = ld fpaths1;
      fpaths7 = force? fpaths6;
      checkMissing(fpaths7);
      return fpaths7;
    };
    r1221 = dyn grepl15("^(/doc/html|/demo|/library)", p272);
    check L1945() else D559();
  L1946():
    dr268 = tryDispatchBuiltin.0("[<-", l203, "");
    dc134 = getTryDispatchBuiltinDispatched(dr268);
    if dc134 then L1948() else L1947("", dr268);
  L1947(r1224, l205):
    fpaths8 = ld fpaths1;
    check L1949() else D560();
  L1988():
    bad63 = force? bad62;
    checkMissing(bad63);
    inherits5 = ldf inherits in base;
    r1298 = dyn inherits5(bad63, "error", FALSE);
    check L1989() else D582();
  L1990():
    sym107 = ldf length;
    base107 = ldf length in base;
    guard107 = `==`.4(sym107, base107);
    if guard107 then L1991() else L1992();
  L2010():
    p303 = prom<V +>{
      _ORCID_iD_variants_regexp = ld `.ORCID_iD_variants_regexp`;
      _ORCID_iD_variants_regexp1 = force? _ORCID_iD_variants_regexp;
      checkMissing(_ORCID_iD_variants_regexp1);
      return _ORCID_iD_variants_regexp1;
    };
    p304 = prom<V +>{
      odb2 = ld odb;
      odb3 = force? odb2;
      checkMissing(odb3);
      c567 = `is.object`(odb3);
      if c567 then L1() else L2();
    L0(dx317):
      return dx317;
    L1():
      dr282 = tryDispatchBuiltin.1("[", odb3);
      dc141 = getTryDispatchBuiltinDispatched(dr282);
      if dc141 then L3() else L2();
    L2():
      __54 = ldf `[` in base;
      r1323 = dyn __54(odb3, <missing>, 1);
      goto L0(r1323);
    L3():
      dx316 = getTryDispatchBuiltinValue(dr282);
      goto L0(dx316);
    };
    r1325 = dyn grepl16(p303, p304);
    check L2011() else D592();
  L2018():
    p305 = prom<V +>{
      odb10 = ld odb;
      odb11 = force? odb10;
      checkMissing(odb11);
      return odb11;
    };
    r1328 = dyn NROW4(p305);
    check L2019() else D596();
  L2100():
    dx351 = getTryDispatchBuiltinValue(dr304);
    goto L362(dx351);
  L2101():
    ru = ld ru;
    check L2103() else D637();
  L2102():
    r1394 = dyn base112(<sym ru>);
    goto L363(r1391, r1394);
  L2106():
    p325 = prom<V +>{
      available16 = ld available;
      available17 = force? available16;
      checkMissing(available17);
      return available17;
    };
    r1402 = dyn rownames2(p325);
    check L2107() else D641();
  L2182():
    dx365 = getTryDispatchBuiltinValue(dr318);
    goto L380(odb23, dx365);
  L2183():
    meta143 = force? meta142;
    checkMissing(meta143);
    c603 = `is.object`(meta143);
    if c603 then L2184() else L2185(odb31, dx366, meta143);
  L2190():
    dx373 = getTryDispatchBuiltinValue(dr322);
    goto L382(dx373);
  L2191():
    entry9 = ld entry;
    check L2193() else D677();
  L2192():
    r1465 = dyn base117(<sym entry>);
    goto L383(entry5, r1465);
  L2197():
    entry13 = ld entry;
    check L2199() else D681();
  L2198():
    r1480 = dyn base120(<sym entry>);
    goto L384(r1480);
  D517():
    deopt 2060 [r1133, r1138];
  D540():
    deopt 2142 [r1180, r1182];
  D542():
    deopt 2152 [ind25];
  D544():
    deopt 2157 [r1190];
  D559():
    deopt 2212 [r1217, l202, "", r1221];
  D560():
    deopt 2218 [r1224, l205, "", fpaths8];
  D563():
    deopt 2230 [];
  D582():
    deopt 2305 [r1298];
  D592():
    deopt 2339 [r1325];
  D596():
    deopt 2356 [r1328];
  D637():
    deopt 2493 [r1391, ru];
  D639():
    deopt 2497 [r1395, r1398, ru2];
  D641():
    deopt 2505 [r1402];
  D677():
    deopt 2645 [entry5, entry9];
  D679():
    deopt 2650 [entry8, r1468];
  D681():
    deopt 2659 [entry13];
  L318(dx289):
    st bar = dx289;
    goto L323();
  L338(c559, r1301):
    c560 = `as.logical`(r1301);
    c561 = `&&`(c559, c560);
    goto L337(c561);
  L339():
    goto L340(NULL);
  L340(r1316):
    goto L341();
  L381(dx371, dx372):
    r1463 = `==`(dx371, dx372);
    __69 = ldf `[` in base;
    r1464 = dyn __69(odb21, r1463, <missing>);
    goto L379(r1464);
  L385():
    goto L408();
  L408():
    CRAN_archive_db = ldf CRAN_archive_db;
    check L2298() else D715();
  L1849():
    package8 = ld package;
    check L1850() else D518();
  L1901():
    r1183 = `&&`(r1180, r1182);
    st ind = r1183;
    any10 = ldf any in base;
    r1184 = dyn any10(r1183);
    check L1902() else D541();
  L1908():
    ind26 = force? ind25;
    checkMissing(ind26);
    sum = ldf sum in base;
    r1189 = dyn sum(ind26);
    check L1909() else D543();
  L1910():
    goto L316(r1190);
  L1912():
    dr254 = tryDispatchBuiltin.1("[", fpaths3);
    dc127 = getTryDispatchBuiltinDispatched(dr254);
    if dc127 then L1914() else L1913(dr254);
  L1913(fpaths5):
    ind27 = ld ind;
    check L1915() else D546();
  L1945():
    ___9 = ldf `[<-` in base;
    r1222 = dyn ___9(l202, "", r1221);
    goto L326(r1222);
  L1948():
    dx302 = getTryDispatchBuiltinValue(dr268);
    goto L327(dx302);
  L1949():
    fpaths9 = force? fpaths8;
    checkMissing(fpaths9);
    r1227 = `==`(fpaths9, "index.html");
    startsWith9 = ldf startsWith;
    check L1950() else D561();
  L1952():
    p274 = prom<V +>{
      parents4 = ld parents;
      parents5 = force? parents4;
      checkMissing(parents5);
      return parents5;
    };
    r1233 = dyn dirname1(p274);
    check L1953() else D564();
  L1989():
    goto L336(r1298);
  L1991():
    bad64 = ld bad;
    check L1993() else D583();
  L1992():
    r1300 = dyn base107(<sym bad>);
    goto L338(c554, r1300);
  L1996():
    substring6 = ldf substring;
    check L1997() else D585();
  L2011():
    st ind = r1325;
    odb6 = ld odb;
    check L2012() else D593();
  L2019():
    c569 = `as.logical`(r1328);
    if c569 then L2020() else L345(c569);
  L2103():
    ru1 = force? ru;
    checkMissing(ru1);
    is_na20 = ldf `is.na` in base;
    r1397 = dyn is_na20(ru1);
    check L2104() else D638();
  L2105():
    ru3 = force? ru2;
    checkMissing(ru3);
    r1399 = `&&`(r1398, ru3);
    __64 = ldf `[` in base;
    r1400 = dyn __64(r1395, r1399);
    goto L362(r1400);
  L2107():
    c592 = `is.object`(r1402);
    if c592 then L2108() else L2109(r1402);
  L2184():
    dr320 = tryDispatchBuiltin.1("[", meta143);
    dc160 = getTryDispatchBuiltinDispatched(dr320);
    if dc160 then L2186() else L2185(odb31, dx366, dr320);
  L2185(odb33, dx368, meta145):
    __68 = ldf `[` in base;
    r1462 = dyn __68(meta145, "Package");
    goto L381(dx368, r1462);
  L2193():
    entry10 = force? entry9;
    checkMissing(entry10);
    is_na22 = ldf `is.na` in base;
    r1467 = dyn is_na22(entry10);
    check L2194() else D678();
  L2195():
    p341 = prom<V +>{
      sym118 = ldf names;
      base118 = ldf names in base;
      guard118 = `==`.4(sym118, base118);
      if guard118 then L1() else L2();
    L0(r1470):
      return r1470;
    L1():
      entry11 = ld entry;
      entry12 = force? entry11;
      checkMissing(entry12);
      names5 = ldf names in base;
      r1471 = dyn names5(entry12);
      goto L0(r1471);
    L2():
      r1469 = dyn base118(<sym entry>);
      goto L0(r1469);
    };
    p342 = prom<V +>{
      sym119 = ldf c;
      base119 = ldf c in base;
      guard119 = `==`.4(sym119, base119);
      if guard119 then L1() else L2();
    L0(r1474):
      return r1474;
    L1():
      c605 = ldf c in base;
      r1475 = dyn c605("Package", "X-CRAN-History");
      goto L0(r1475);
    L2():
      r1473 = dyn base119("Package", "X-CRAN-History");
      goto L0(r1473);
    };
    r1477 = dyn _notin_2(p341, p342);
    check L2196() else D680();
  L2199():
    entry14 = force? entry13;
    checkMissing(entry14);
    length41 = ldf length in base;
    r1482 = dyn length41(entry14);
    check L2200() else D682();
  L2201():
    sym121 = ldf `is.na`;
    base121 = ldf `is.na` in base;
    guard121 = `==`.4(sym121, base121);
    if guard121 then L2202() else L2203();
  D518():
    deopt 2060 [r1133, r1138, package8];
  D541():
    deopt 2146 [r1184];
  D543():
    deopt 2155 [r1189];
  D546():
    deopt 2161 [fpaths5, ind27];
  D561():
    deopt 2222 [r1224, l205, "", r1227];
  D564():
    deopt 2232 [r1233];
  D583():
    deopt 2309 [c554, bad64];
  D585():
    deopt 2315 [];
  D593():
    deopt 2341 [odb6];
  D638():
    deopt 2496 [r1391, r1397];
  D678():
    deopt 2648 [entry5, r1467];
  D680():
    deopt 2653 [entry8, r1468, r1477];
  D682():
    deopt 2662 [r1482];
  D715():
    deopt 2799 [];
  L323():
    sym100 = ldf length;
    base100 = ldf length in base;
    guard100 = `==`.4(sym100, base100);
    if guard100 then L1916() else L1917();
  L345(c571):
    c575 = `as.logical`(c571);
    if c575 then L2024() else L346();
  L364(dx354):
    st pnames_restricts_use_NA = dx354;
    intersect1 = ldf intersect;
    check L2115() else D644();
  L386(r1484):
    r1487 = `!`(r1484);
    c608 = `as.logical`(r1487);
    if c608 then L2210() else L387(c608);
  L1850():
    package9 = force? package8;
    checkMissing(package9);
    r1139 = `==`(r1138, package9);
    r1140 = `&&`(r1133, r1139);
    st ind = r1140;
    sym94 = ldf any;
    base94 = ldf any in base;
    guard94 = `==`.4(sym94, base94);
    if guard94 then L1851() else L1852();
  L1902():
    goto L314(r1184);
  L1909():
    goto L317(r1189);
  L1914():
    dx288 = getTryDispatchBuiltinValue(dr254);
    goto L318(dx288);
  L1915():
    ind28 = force? ind27;
    __48 = ldf `[` in base;
    r1191 = dyn __48(fpaths5, ind28);
    goto L318(r1191);
  L1950():
    p273 = prom<V +>{
      parents2 = ld parents;
      parents3 = force? parents2;
      checkMissing(parents3);
      return parents3;
    };
    r1229 = dyn startsWith9(p273, "inst/doc");
    check L1951() else D562();
  L1953():
    st ppaths = r1233;
    which2 = ldf which;
    check L1954() else D565();
  L1993():
    bad65 = force? bad64;
    checkMissing(bad65);
    length37 = ldf length in base;
    r1302 = dyn length37(bad65);
    check L1994() else D584();
  L1997():
    p299 = prom<V +>{
      bad66 = ld bad;
      bad67 = force? bad66;
      checkMissing(bad67);
      c564 = `is.object`(bad67);
      if c564 then L1() else L2(bad67);
    L0(dx313):
      return dx313;
    L1():
      dr278 = tryDispatchBuiltin.1("$", bad67);
      dc139 = getTryDispatchBuiltinDispatched(dr278);
      if dc139 then L3() else L2(dr278);
    L2(bad69):
      r1303 = `$`(bad69, <sym DOI>);
      goto L0(r1303);
    L3():
      dx312 = getTryDispatchBuiltinValue(dr278);
      goto L0(dx312);
    };
    p300 = prom<V +>{
      sym108 = ldf nchar;
      base108 = ldf nchar in base;
      guard108 = `==`.4(sym108, base108);
      if guard108 then L1() else L2();
    L0(r1306):
      r1308 = `+`(r1306, 1);
      return r1308;
    L1():
      ini2 = ld ini;
      ini3 = force? ini2;
      checkMissing(ini3);
      nchar3 = ldf nchar in base;
      r1307 = dyn nchar3(ini3, "chars", FALSE, NA_LGL);
      goto L0(r1307);
    L2():
      r1305 = dyn base108(<sym ini>);
      goto L0(r1305);
    };
    r1310 = dyn substring6(p299, p300);
    check L1998() else D586();
  L2012():
    odb7 = force? odb6;
    checkMissing(odb7);
    c568 = `is.object`(odb7);
    if c568 then L2013() else L2014(odb7);
  L2020():
    requireNamespace = ldf requireNamespace;
    check L2021() else D597();
  L2104():
    goto L363(r1391, r1397);
  L2108():
    dr306 = tryDispatchBuiltin.1("[", r1402);
    dc153 = getTryDispatchBuiltinDispatched(dr306);
    if dc153 then L2110() else L2109(dr306);
  L2109(r1404):
    sym113 = ldf `is.na`;
    base113 = ldf `is.na` in base;
    guard113 = `==`.4(sym113, base113);
    if guard113 then L2111() else L2112();
  L2186():
    dx370 = getTryDispatchBuiltinValue(dr320);
    goto L381(dx366, dx370);
  L2194():
    goto L383(entry5, r1467);
  L2196():
    r1478 = `&&`(r1468, r1477);
    __70 = ldf `[` in base;
    r1479 = dyn __70(entry8, r1478);
    goto L382(r1479);
  L2200():
    goto L384(r1482);
  L2202():
    lic_info12 = ld lic_info;
    check L2204() else D683();
  L2203():
    r1483 = dyn base121(<lang `<-`(iif, `$`(lic_info, is_FOSS))>);
    goto L386(r1483);
  L2298():
    r1548 = dyn CRAN_archive_db();
    check L2299() else D716();
  D562():
    deopt 2225 [r1224, l205, "", r1227, r1229];
  D565():
    deopt 2235 [];
  D584():
    deopt 2312 [c554, r1302];
  D586():
    deopt 2318 [r1310];
  D597():
    deopt 2358 [c569];
  D644():
    deopt 2515 [];
  D683():
    deopt 2665 [lic_info12];
  D716():
    deopt 2800 [r1548];
  L304(r1142):
    c526 = `as.logical`(r1142);
    if c526 then L1855() else L305();
  L319(r1193):
    c539 = `as.logical`(r1193);
    if c539 then L1921() else L320();
  L343(dx319):
    st odb = dx319;
    goto L344();
  L346():
    goto L351(NULL);
  L351(dx332):
    goto L352(dx332);
  L365(r1408, r1409):
    __65 = ldf `[` in base;
    r1411 = dyn __65(r1408, r1409);
    goto L364(r1411);
  L387(c610):
    c622 = `as.logical`(c610);
    if c622 then L2219() else L390(c622);
  L1851():
    ind14 = ld ind;
    check L1853() else D519();
  L1852():
    r1141 = dyn base94(<sym ind>);
    goto L304(r1141);
  L1916():
    which1 = ldf which;
    check L1918() else D547();
  L1917():
    r1192 = dyn base100(<lang `<-`(pos, which(startsWith(bar, "../")))>);
    goto L319(r1192);
  L1951():
    r1230 = `&&`(r1227, r1229);
    ___10 = ldf `[<-` in base;
    r1231 = dyn ___10(l205, "", r1230);
    goto L327(r1231);
  L1954():
    p283 = prom<V +>{
      file_exists7 = ldf `file.exists`;
      p282 = prom<V +>{
        file_path19 = ldf `file.path`;
        p280 = prom<V +>{
          ifelse = ldf ifelse;
          p275 = prom<V +>{
            sym101 = ldf nzchar;
            base101 = ldf nzchar in base;
            guard101 = `==`.4(sym101, base101);
            if guard101 then L1() else L2();
          L0(r1235):
            return r1235;
          L1():
            ppaths = ld ppaths;
            ppaths1 = force? ppaths;
            checkMissing(ppaths1);
            nzchar1 = ldf nzchar in base;
            r1236 = dyn nzchar1(ppaths1);
            goto L0(r1236);
          L2():
            r1234 = dyn base101(<sym ppaths>);
            goto L0(r1234);
          };
          p278 = prom<V +>{
            file_path20 = ldf `file.path`;
            p276 = prom<V +>{
              dir53 = ld dir;
              dir54 = force? dir53;
              checkMissing(dir54);
              return dir54;
            };
            p277 = prom<V +>{
              ppaths2 = ld ppaths;
              ppaths3 = force? ppaths2;
              checkMissing(ppaths3);
              return ppaths3;
            };
            r1240 = dyn file_path20(p276, p277);
            return r1240;
          };
          p279 = prom<V +>{
            dir55 = ld dir;
            dir56 = force? dir55;
            checkMissing(dir56);
            return dir56;
          };
          r1243 = dyn ifelse(p275, p278, p279);
          return r1243;
        };
        p281 = prom<V +>{
          fpaths10 = ld fpaths1;
          fpaths11 = force? fpaths10;
          checkMissing(fpaths11);
          return fpaths11;
        };
        r1246 = dyn file_path19(p280, p281);
        return r1246;
      };
      r1248 = dyn file_exists7(p282);
      r1249 = `!`(r1248);
      return r1249;
    };
    r1251 = dyn which2(p283);
    check L1955() else D566();
  L1994():
    goto L338(c554, r1302);
  L1998():
    l209 = ld out;
    c565 = `is.object`(l209);
    if c565 then L2000() else L2001(r1310, l209);
  L2013():
    dr284 = tryDispatchBuiltin.1("[", odb7);
    dc142 = getTryDispatchBuiltinDispatched(dr284);
    if dc142 then L2015() else L2014(dr284);
  L2014(odb9):
    ind31 = ld ind;
    check L2016() else D594();
  L2021():
    r1329 = dyn requireNamespace[, quietly]("curl", TRUE);
    check L2022() else D598();
  L2024():
    _ORCID_iD_canonicalize = ldf `.ORCID_iD_canonicalize`;
    check L2025() else D599();
  L2110():
    dx353 = getTryDispatchBuiltinValue(dr306);
    goto L364(dx353);
  L2111():
    ru4 = ld ru;
    check L2113() else D642();
  L2112():
    r1407 = dyn base113(<sym ru>);
    goto L365(r1404, r1407);
  L2115():
    p326 = prom<V +>{
      depends4 = ld depends;
      depends5 = force? depends4;
      checkMissing(depends5);
      return depends5;
    };
    p327 = prom<V +>{
      pnames_restricts_use_TRUE = ld pnames_restricts_use_TRUE;
      pnames_restricts_use_TRUE1 = force? pnames_restricts_use_TRUE;
      checkMissing(pnames_restricts_use_TRUE1);
      return pnames_restricts_use_TRUE1;
    };
    r1414 = dyn intersect1(p326, p327);
    check L2116() else D645();
  L2204():
    lic_info13 = force? lic_info12;
    checkMissing(lic_info13);
    c607 = `is.object`(lic_info13);
    if c607 then L2206() else L2207(lic_info13);
  L2210():
    sym122 = ldf `is.na`;
    base122 = ldf `is.na` in base;
    guard122 = `==`.4(sym122, base122);
    if guard122 then L2211() else L2212();
  L2299():
    st archive_db = r1548;
    sym129 = ldf names;
    base129 = ldf names in base;
    guard129 = `==`.4(sym129, base129);
    if guard129 then L2300() else L2301();
  D519():
    deopt 2067 [ind14];
  D547():
    deopt 2168 [];
  D566():
    deopt 2237 [r1251];
  D594():
    deopt 2343 [odb9, ind31];
  D598():
    deopt 2362 [c569, r1329];
  D599():
    deopt 2365 [];
  D642():
    deopt 2508 [r1404, ru4];
  D645():
    deopt 2518 [r1414];
  L305():
    goto L308();
  L308():
    NROW2 = ldf NROW;
    check L1864() else D523();
  L320():
    foo4 = ld foo;
    check L1935() else D556();
  L388(c613, r1489):
    r1492 = `!`(r1489);
    c619 = `as.logical`(r1492);
    c620 = `&&`(c613, c619);
    goto L387(c620);
  L390(c624):
    c628 = `as.logical`(c624);
    if c628 then L2223() else L391();
  L409(r1550):
    st packages_in_CRAN_archive = r1550;
    meta152 = ld meta;
    check L2304() else D719();
  L1853():
    ind15 = force? ind14;
    checkMissing(ind15);
    any9 = ldf any in base;
    r1143 = dyn any9(ind15);
    check L1854() else D520();
  L1855():
    l182 = ld bad;
    c527 = `is.object`(l182);
    if c527 then L1856() else L1857("", l182);
  L1918():
    p269 = prom<V +>{
      startsWith8 = ldf startsWith;
      p268 = prom<V +>{
        bar = ld bar;
        bar1 = force? bar;
        checkMissing(bar1);
        return bar1;
      };
      r1195 = dyn startsWith8(p268, "../");
      return r1195;
    };
    r1197 = dyn which1(p269);
    check L1919() else D548();
  L1921():
    dirname = ldf dirname;
    check L1922() else D550();
  L1955():
    st pos = r1251;
    sym102 = ldf length;
    base102 = ldf length in base;
    guard102 = `==`.4(sym102, base102);
    if guard102 then L1956() else L1957();
  L1999(r1314, dx315):
    st out = dx315;
    goto L340(r1314);
  L2000():
    dr280 = tryDispatchBuiltin.0("$<-", l209, r1310);
    dc140 = getTryDispatchBuiltinDispatched(dr280);
    if dc140 then L2002() else L2001(r1310, dr280);
  L2001(r1312, l211):
    r1315 = `$<-`(l211, <sym bad_arXiv_ids>, r1310);
    goto L1999(r1312, r1315);
  L2015():
    dx318 = getTryDispatchBuiltinValue(dr284);
    goto L343(dx318);
  L2016():
    ind32 = force? ind31;
    __55 = ldf `[` in base;
    r1326 = dyn __55(odb7, ind32, <missing>, FALSE);
    goto L343(r1326);
  L2022():
    c572 = `as.logical`(r1329);
    c573 = `&&`(c569, c572);
    goto L345(c573);
  L2025():
    p306 = prom<V +>{
      odb12 = ld odb;
      odb13 = force? odb12;
      checkMissing(odb13);
      c576 = `is.object`(odb13);
      if c576 then L1() else L2();
    L0(dx322):
      return dx322;
    L1():
      dr286 = tryDispatchBuiltin.1("[", odb13);
      dc143 = getTryDispatchBuiltinDispatched(dr286);
      if dc143 then L3() else L2();
    L2():
      __56 = ldf `[` in base;
      r1330 = dyn __56(odb13, <missing>, 1);
      goto L0(r1330);
    L3():
      dx321 = getTryDispatchBuiltinValue(dr286);
      goto L0(dx321);
    };
    r1332 = dyn _ORCID_iD_canonicalize(p306);
    check L2026() else D600();
  L2113():
    ru5 = force? ru4;
    checkMissing(ru5);
    is_na21 = ldf `is.na` in base;
    r1410 = dyn is_na21(ru5);
    check L2114() else D643();
  L2116():
    st bad = r1414;
    sym114 = ldf length;
    base114 = ldf length in base;
    guard114 = `==`.4(sym114, base114);
    if guard114 then L2117() else L2118();
  L2205(dx376):
    st iif = dx376;
    is_na23 = ldf `is.na` in base;
    r1486 = dyn is_na23(dx376);
    check L2209() else D684();
  L2206():
    dr324 = tryDispatchBuiltin.1("$", lic_info13);
    dc162 = getTryDispatchBuiltinDispatched(dr324);
    if dc162 then L2208() else L2207(dr324);
  L2207(lic_info15):
    r1485 = `$`(lic_info15, <sym is_FOSS>);
    goto L2205(r1485);
  L2211():
    entry15 = ld entry;
    check L2213() else D685();
  L2212():
    r1488 = dyn base122(<lang `<-`(lif, `[`(entry, "License_is_FOSS"))>);
    goto L388(c608, r1488);
  L2219():
    lif = ld lif;
    check L2220() else D687();
  L2300():
    archive_db = ld archive_db;
    check L2302() else D717();
  L2301():
    r1549 = dyn base129(<sym archive_db>);
    goto L409(r1549);
  D520():
    deopt 2070 [r1143];
  D523():
    deopt 2086 [];
  D548():
    deopt 2170 [r1197];
  D550():
    deopt 2175 [];
  D556():
    deopt 2196 [foo4];
  D600():
    deopt 2367 [r1332];
  D643():
    deopt 2511 [r1404, r1410];
  D684():
    deopt 2670 [r1486];
  D685():
    deopt 2674 [c608, entry15];
  D687():
    deopt 2684 [c622, lif];
  D717():
    deopt 2804 [archive_db];
  D719():
    deopt 2809 [meta152];
  L306(r1147, dx277):
    st bad = dx277;
    goto L308();
  L328(r1253):
    c547 = `as.logical`(r1253);
    if c547 then L1960() else L329();
  L366(r1416):
    c593 = `as.logical`(r1416);
    if c593 then L2121() else L367();
  L391():
    goto L392();
  L392():
    sym123 = ldf `is.na`;
    base123 = ldf `is.na` in base;
    guard123 = `==`.4(sym123, base123);
    if guard123 then L2230() else L2231();
  L1854():
    goto L304(r1143);
  L1856():
    dr242 = tryDispatchBuiltin.0("[<-", l182, "");
    dc121 = getTryDispatchBuiltinDispatched(dr242);
    if dc121 then L1858() else L1857("", dr242);
  L1857(r1145, l184):
    ind16 = ld ind;
    check L1859() else D521();
  L1864():
    p261 = prom<V +>{
      bad53 = ld bad;
      bad54 = force? bad53;
      checkMissing(bad54);
      return bad54;
    };
    r1160 = dyn NROW2(p261);
    check L1865() else D524();
  L1919():
    st pos = r1197;
    length33 = ldf length in base;
    r1198 = dyn length33(r1197);
    check L1920() else D549();
  L1922():
    p270 = prom<V +>{
      foo = ld foo;
      foo1 = force? foo;
      checkMissing(foo1);
      c540 = `is.object`(foo1);
      if c540 then L1() else L2(foo1);
    L0(dx291):
      return dx291;
    L1():
      dr256 = tryDispatchBuiltin.1("[", foo1);
      dc128 = getTryDispatchBuiltinDispatched(dr256);
      if dc128 then L3() else L2(dr256);
    L2(foo3):
      pos4 = ld pos;
      pos5 = force? pos4;
      __49 = ldf `[` in base;
      r1199 = dyn __49(foo3, pos5);
      goto L0(r1199);
    L3():
      dx290 = getTryDispatchBuiltinValue(dr256);
      goto L0(dx290);
    };
    r1201 = dyn dirname(p270);
    check L1923() else D551();
  L1935():
    foo5 = force? foo4;
    checkMissing(foo5);
    l197 = ld fpaths1;
    c544 = `is.object`(l197);
    if c544 then L1936() else L1937(foo5, l197);
  L1956():
    pos12 = ld pos;
    check L1958() else D567();
  L1957():
    r1252 = dyn base102(<sym pos>);
    goto L328(r1252);
  L2002():
    dx314 = getTryDispatchBuiltinValue(dr280);
    goto L1999(r1310, dx314);
  L2026():
    st ids = r1332;
    which3 = ldf which;
    check L2027() else D601();
  L2114():
    goto L365(r1404, r1410);
  L2117():
    bad70 = ld bad;
    check L2119() else D646();
  L2118():
    r1415 = dyn base114(<sym bad>);
    goto L366(r1415);
  L2208():
    dx375 = getTryDispatchBuiltinValue(dr324);
    goto L2205(dx375);
  L2209():
    goto L386(r1486);
  L2213():
    entry16 = force? entry15;
    checkMissing(entry16);
    c614 = `is.object`(entry16);
    if c614 then L2214() else L2215(c608, entry16);
  L2220():
    lif1 = force? lif;
    checkMissing(lif1);
    r1493 = `==`(lif1, "yes");
    iif = ld iif;
    check L2221() else D688();
  L2223():
    lif2 = ld lif;
    check L2224() else D689();
  L2302():
    archive_db1 = force? archive_db;
    checkMissing(archive_db1);
    names8 = ldf names in base;
    r1551 = dyn names8(archive_db1);
    check L2303() else D718();
  L2304():
    meta153 = force? meta152;
    checkMissing(meta153);
    c660 = `is.object`(meta153);
    if c660 then L2305() else L2306(meta153);
  D521():
    deopt 2074 [r1145, l184, "", ind16];
  D524():
    deopt 2088 [r1160];
  D549():
    deopt 2173 [r1198];
  D551():
    deopt 2177 [r1201];
  D567():
    deopt 2241 [pos12];
  D601():
    deopt 2370 [];
  D646():
    deopt 2522 [bad70];
  D688():
    deopt 2687 [c622, r1493, iif];
  D689():
    deopt 2691 [lif2];
  D718():
    deopt 2807 [r1551];
  L324(foo9, dx299):
    st fpaths1 = dx299;
    goto L325();
  L329():
    goto L330(NULL);
  L330(r1265):
    goto L331();
  L367():
    goto L368();
  L368():
    intersect2 = ldf intersect;
    check L2128() else D649();
  L389(c618, dx378):
    st lif = dx378;
    is_na24 = ldf `is.na` in base;
    r1491 = dyn is_na24(dx378);
    check L2217() else D686();
  L393(r1497):
    r1500 = `!`(r1497);
    c631 = `as.logical`(r1500);
    if c631 then L2238() else L394(c631);
  L410(dx405):
    st package = dx405;
    db4 = ld db;
    check L2308() else D720();
  L1858():
    dx276 = getTryDispatchBuiltinValue(dr242);
    goto L306("", dx276);
  L1859():
    ind17 = force? ind16;
    sym95 = ldf c;
    base95 = ldf c in base;
    guard95 = `==`.4(sym95, base95);
    if guard95 then L1860() else L1861();
  L1865():
    c529 = `as.logical`(r1160);
    if c529 then L1866() else L309();
  L1920():
    goto L319(r1198);
  L1923():
    l191 = ld foo;
    c541 = `is.object`(l191);
    if c541 then L1924() else L1925(r1201, l191);
  L1936():
    dr264 = tryDispatchBuiltin.0("[<-", l197, foo5);
    dc132 = getTryDispatchBuiltinDispatched(dr264);
    if dc132 then L1938() else L1937(foo5, dr264);
  L1937(foo7, l199):
    ind29 = ld ind;
    check L1939() else D557();
  L1958():
    pos13 = force? pos12;
    checkMissing(pos13);
    length34 = ldf length in base;
    r1254 = dyn length34(pos13);
    check L1959() else D568();
  L1960():
    cbind = ldf cbind;
    check L1961() else D569();
  L2027():
    p308 = prom<V +>{
      _ORCID_iD_is_alive = ldf `.ORCID_iD_is_alive`;
      p307 = prom<V +>{
        ids6 = ld ids;
        ids7 = force? ids6;
        checkMissing(ids7);
        return ids7;
      };
      r1334 = dyn _ORCID_iD_is_alive(p307);
      r1335 = `!`(r1334);
      return r1335;
    };
    r1337 = dyn which3(p308);
    check L2028() else D602();
  L2119():
    bad71 = force? bad70;
    checkMissing(bad71);
    length39 = ldf length in base;
    r1417 = dyn length39(bad71);
    check L2120() else D647();
  L2121():
    bad72 = ld bad;
    check L2122() else D648();
  L2214():
    dr326 = tryDispatchBuiltin.1("[", entry16);
    dc163 = getTryDispatchBuiltinDispatched(dr326);
    if dc163 then L2216() else L2215(c608, dr326);
  L2215(c616, entry18):
    __71 = ldf `[` in base;
    r1490 = dyn __71(entry18, "License_is_FOSS");
    goto L389(c616, r1490);
  L2221():
    iif1 = force? iif;
    checkMissing(iif1);
    r1494 = `!=`(r1493, iif1);
    c625 = `as.logical`(r1494);
    c626 = `&&`(c622, c625);
    goto L390(c626);
  L2224():
    lif3 = force? lif2;
    checkMissing(lif3);
    l228 = ld out;
    c629 = `is.object`(l228);
    if c629 then L2226() else L2227(lif3, l228);
  L2230():
    lic_info16 = ld lic_info;
    check L2232() else D690();
  L2231():
    r1496 = dyn base123(<lang `<-`(iru, `$`(lic_info, restricts_use))>);
    goto L393(r1496);
  L2303():
    goto L409(r1551);
  L2305():
    dr346 = tryDispatchBuiltin.1("[", meta153);
    dc173 = getTryDispatchBuiltinDispatched(dr346);
    if dc173 then L2307() else L2306(dr346);
  L2306(meta155):
    __76 = ldf `[` in base;
    r1552 = dyn __76(meta155, "Package");
    goto L410(r1552);
  D557():
    deopt 2199 [foo7, l199, foo5, ind29];
  D568():
    deopt 2244 [r1254];
  D569():
    deopt 2246 [];
  D602():
    deopt 2372 [r1337];
  D647():
    deopt 2525 [r1417];
  D648():
    deopt 2526 [bad72];
  D649():
    deopt 2534 [];
  D686():
    deopt 2681 [c618, r1491];
  D690():
    deopt 2700 [lic_info16];
  D720():
    deopt 2815 [db4];
  L307(r1153, l187, r1154, ind20, r1155):
    ___5 = ldf `[<-` in base;
    r1157 = dyn ___5(l187, r1154, ind20, r1155);
    goto L306(r1153, r1157);
  L309():
    goto L310(NULL);
  L310(bad61):
    goto L296();
  L321(dx293):
    st foo = dx293;
    substring5 = ldf substring;
    check L1928() else D553();
  L394(c633):
    c645 = `as.logical`(c633);
    if c645 then L2247() else L397(c645);
  L1860():
    c528 = ldf c in base;
    r1156 = dyn c528("Status", "Message");
    check L1862() else D522();
  L1861():
    r1152 = dyn base95("Status", "Message");
    goto L307(r1145, l184, "", ind17, r1152);
  L1866():
    bad55 = ld bad;
    check L1867() else D525();
  L1924():
    dr258 = tryDispatchBuiltin.0("[<-", l191, r1201);
    dc129 = getTryDispatchBuiltinDispatched(dr258);
    if dc129 then L1926() else L1925(r1201, dr258);
  L1925(r1203, l193):
    pos6 = ld pos;
    check L1927() else D552();
  L1938():
    dx298 = getTryDispatchBuiltinValue(dr264);
    goto L324(foo5, dx298);
  L1939():
    ind30 = force? ind29;
    ___8 = ldf `[<-` in base;
    r1215 = dyn ___8(l199, foo5, ind30);
    goto L324(foo7, r1215);
  L1959():
    goto L328(r1254);
  L1961():
    p284 = prom<V +>{
      fpaths12 = ld fpaths0;
      fpaths13 = force? fpaths12;
      checkMissing(fpaths13);
      c548 = `is.object`(fpaths13);
      if c548 then L1() else L2(fpaths13);
    L0(dx305):
      return dx305;
    L1():
      dr270 = tryDispatchBuiltin.1("[", fpaths13);
      dc135 = getTryDispatchBuiltinDispatched(dr270);
      if dc135 then L3() else L2(dr270);
    L2(fpaths15):
      pos14 = ld pos;
      pos15 = force? pos14;
      __51 = ldf `[` in base;
      r1255 = dyn __51(fpaths15, pos15);
      goto L0(r1255);
    L3():
      dx304 = getTryDispatchBuiltinValue(dr270);
      goto L0(dx304);
    };
    p285 = prom<V +>{
      parents6 = ld parents;
      parents7 = force? parents6;
      checkMissing(parents7);
      c549 = `is.object`(parents7);
      if c549 then L1() else L2(parents7);
    L0(dx307):
      return dx307;
    L1():
      dr272 = tryDispatchBuiltin.1("[", parents7);
      dc136 = getTryDispatchBuiltinDispatched(dr272);
      if dc136 then L3() else L2(dr272);
    L2(parents9):
      pos16 = ld pos;
      pos17 = force? pos16;
      __52 = ldf `[` in base;
      r1257 = dyn __52(parents9, pos17);
      goto L0(r1257);
    L3():
      dx306 = getTryDispatchBuiltinValue(dr272);
      goto L0(dx306);
    };
    r1259 = dyn cbind(p284, p285);
    check L1962() else D570();
  L2028():
    st pos = r1337;
    sym109 = ldf length;
    base109 = ldf length in base;
    guard109 = `==`.4(sym109, base109);
    if guard109 then L2029() else L2030();
  L2120():
    goto L366(r1417);
  L2122():
    bad73 = force? bad72;
    checkMissing(bad73);
    l219 = ld out;
    c594 = `is.object`(l219);
    if c594 then L2124() else L2125(bad73, l219);
  L2128():
    p328 = prom<V +>{
      depends6 = ld depends;
      depends7 = force? depends6;
      checkMissing(depends7);
      return depends7;
    };
    p329 = prom<V +>{
      pnames_restricts_use_NA = ld pnames_restricts_use_NA;
      pnames_restricts_use_NA1 = force? pnames_restricts_use_NA;
      checkMissing(pnames_restricts_use_NA1);
      return pnames_restricts_use_NA1;
    };
    r1421 = dyn intersect2(p328, p329);
    check L2129() else D650();
  L2216():
    dx377 = getTryDispatchBuiltinValue(dr326);
    goto L389(c608, dx377);
  L2217():
    goto L388(c618, r1491);
  L2225(lif7, dx380):
    st out = dx380;
    goto L392();
  L2226():
    dr328 = tryDispatchBuiltin.0("$<-", l228, lif3);
    dc164 = getTryDispatchBuiltinDispatched(dr328);
    if dc164 then L2228() else L2227(lif3, dr328);
  L2227(lif5, l230):
    r1495 = `$<-`(l230, <sym conflict_in_license_is_FOSS>, lif3);
    goto L2225(lif5, r1495);
  L2232():
    lic_info17 = force? lic_info16;
    checkMissing(lic_info17);
    c630 = `is.object`(lic_info17);
    if c630 then L2234() else L2235(lic_info17);
  L2238():
    sym124 = ldf `is.na`;
    base124 = ldf `is.na` in base;
    guard124 = `==`.4(sym124, base124);
    if guard124 then L2239() else L2240();
  L2307():
    dx404 = getTryDispatchBuiltinValue(dr346);
    goto L410(dx404);
  L2308():
    db5 = force? db4;
    checkMissing(db5);
    c661 = `is.object`(db5);
    if c661 then L2309() else L2310();
  D522():
    deopt 2080 [r1145, l184, "", ind17, r1156];
  D525():
    deopt 2089 [bad55];
  D552():
    deopt 2179 [r1203, l193, r1201, pos6];
  D553():
    deopt 2184 [];
  D570():
    deopt 2249 [r1259];
  D650():
    deopt 2537 [r1421];
  L347(r1339):
    c577 = `as.logical`(r1339);
    if c577 then L2033() else L348();
  L395(c636, r1502):
    r1505 = `!`(r1502);
    c642 = `as.logical`(r1505);
    c643 = `&&`(c636, c642);
    goto L394(c643);
  L397(c647):
    c651 = `as.logical`(c647);
    if c651 then L2251() else L398();
  L411(dx407):
    st packages = dx407;
    _notin_3 = ldf `%notin%`;
    check L2312() else D721();
  L1862():
    goto L307(r1145, l184, "", ind17, r1156);
  L1867():
    bad56 = force? bad55;
    checkMissing(bad56);
    l188 = ld out;
    c530 = `is.object`(l188);
    if c530 then L1869() else L1870(bad56, l188);
  L1926():
    dx292 = getTryDispatchBuiltinValue(dr258);
    goto L321(dx292);
  L1927():
    pos7 = force? pos6;
    ___6 = ldf `[<-` in base;
    r1206 = dyn ___6(l193, r1201, pos7);
    goto L321(r1206);
  L1928():
    p271 = prom<V +>{
      bar2 = ld bar;
      bar3 = force? bar2;
      checkMissing(bar3);
      c542 = `is.object`(bar3);
      if c542 then L1() else L2(bar3);
    L0(dx295):
      return dx295;
    L1():
      dr260 = tryDispatchBuiltin.1("[", bar3);
      dc130 = getTryDispatchBuiltinDispatched(dr260);
      if dc130 then L3() else L2(dr260);
    L2(bar5):
      pos8 = ld pos;
      pos9 = force? pos8;
      __50 = ldf `[` in base;
      r1207 = dyn __50(bar5, pos9);
      goto L0(r1207);
    L3():
      dx294 = getTryDispatchBuiltinValue(dr260);
      goto L0(dx294);
    };
    r1209 = dyn substring5(p271, 4);
    check L1929() else D554();
  L1962():
    l206 = ld out;
    c550 = `is.object`(l206);
    if c550 then L1964() else L1965(r1259, l206);
  L2029():
    pos18 = ld pos;
    check L2031() else D603();
  L2030():
    r1338 = dyn base109(<sym pos>);
    goto L347(r1338);
  L2123(bad77, dx356):
    st out = dx356;
    goto L368();
  L2124():
    dr308 = tryDispatchBuiltin.0("$<-", l219, bad73);
    dc154 = getTryDispatchBuiltinDispatched(dr308);
    if dc154 then L2126() else L2125(bad73, dr308);
  L2125(bad75, l221):
    r1418 = `$<-`(l221, <sym depends_with_restricts_use_TRUE>, bad73);
    goto L2123(bad75, r1418);
  L2129():
    st bad = r1421;
    sym115 = ldf length;
    base115 = ldf length in base;
    guard115 = `==`.4(sym115, base115);
    if guard115 then L2130() else L2131();
  L2228():
    dx379 = getTryDispatchBuiltinValue(dr328);
    goto L2225(lif3, dx379);
  L2233(dx382):
    st iru = dx382;
    is_na25 = ldf `is.na` in base;
    r1499 = dyn is_na25(dx382);
    check L2237() else D691();
  L2234():
    dr330 = tryDispatchBuiltin.1("$", lic_info17);
    dc165 = getTryDispatchBuiltinDispatched(dr330);
    if dc165 then L2236() else L2235(dr330);
  L2235(lic_info19):
    r1498 = `$`(lic_info19, <sym restricts_use>);
    goto L2233(r1498);
  L2239():
    entry19 = ld entry;
    check L2241() else D692();
  L2240():
    r1501 = dyn base124(<lang `<-`(lru, `[`(entry, "License_restricts_use"))>);
    goto L395(c631, r1501);
  L2247():
    lru = ld lru;
    check L2248() else D694();
  L2309():
    dr348 = tryDispatchBuiltin.1("[", db5);
    dc174 = getTryDispatchBuiltinDispatched(dr348);
    if dc174 then L2311() else L2310();
  L2310():
    __77 = ldf `[` in base;
    r1553 = dyn __77(db5, <missing>, "Package");
    goto L411(r1553);
  D554():
    deopt 2187 [r1209];
  D603():
    deopt 2376 [pos18];
  D691():
    deopt 2705 [r1499];
  D692():
    deopt 2709 [c631, entry19];
  D694():
    deopt 2719 [c645, lru];
  D721():
    deopt 2823 [];
  L348():
    goto L350(NULL);
  L350(dx331):
    goto L351(dx331);
  L369(r1423):
    c595 = `as.logical`(r1423);
    if c595 then L2134() else L370();
  L398():
    goto L399();
  L399():
    r1509 = clos inner1236783023;
    st fmt = r1509;
    sym125 = ldf names;
    base125 = ldf names in base;
    guard125 = `==`.4(sym125, base125);
    if guard125 then L2258() else L2259();
  L1868(bad60, dx279):
    st out = dx279;
    goto L310(bad60);
  L1869():
    dr244 = tryDispatchBuiltin.0("$<-", l188, bad56);
    dc122 = getTryDispatchBuiltinDispatched(dr244);
    if dc122 then L1871() else L1870(bad56, dr244);
  L1870(bad58, l190):
    r1161 = `$<-`(l190, <sym bad_urls>, bad56);
    goto L1868(bad58, r1161);
  L1929():
    l194 = ld bar;
    c543 = `is.object`(l194);
    if c543 then L1930() else L1931(r1209, l194);
  L1963(r1263, dx309):
    st out = dx309;
    goto L330(r1263);
  L1964():
    dr274 = tryDispatchBuiltin.0("$<-", l206, r1259);
    dc137 = getTryDispatchBuiltinDispatched(dr274);
    if dc137 then L1966() else L1965(r1259, dr274);
  L1965(r1261, l208):
    r1264 = `$<-`(l208, <sym bad_file_URIs>, r1259);
    goto L1963(r1261, r1264);
  L2031():
    pos19 = force? pos18;
    checkMissing(pos19);
    length38 = ldf length in base;
    r1340 = dyn length38(pos19);
    check L2032() else D604();
  L2033():
    odb16 = ld odb;
    check L2034() else D605();
  L2126():
    dx355 = getTryDispatchBuiltinValue(dr308);
    goto L2123(bad73, dx355);
  L2130():
    bad79 = ld bad;
    check L2132() else D651();
  L2131():
    r1422 = dyn base115(<sym bad>);
    goto L369(r1422);
  L2236():
    dx381 = getTryDispatchBuiltinValue(dr330);
    goto L2233(dx381);
  L2237():
    goto L393(r1499);
  L2241():
    entry20 = force? entry19;
    checkMissing(entry20);
    c637 = `is.object`(entry20);
    if c637 then L2242() else L2243(c631, entry20);
  L2248():
    lru1 = force? lru;
    checkMissing(lru1);
    r1506 = `==`(lru1, "yes");
    iru = ld iru;
    check L2249() else D695();
  L2251():
    lru2 = ld lru;
    check L2252() else D696();
  L2311():
    dx406 = getTryDispatchBuiltinValue(dr348);
    goto L411(dx406);
  L2312():
    p355 = prom<V +>{
      package18 = ld package;
      package19 = force? package18;
      checkMissing(package19);
      return package19;
    };
    p356 = prom<V +>{
      packages = ld packages;
      packages1 = force? packages;
      checkMissing(packages1);
      return packages1;
    };
    r1556 = dyn _notin_3(p355, p356);
    check L2313() else D722();
  D604():
    deopt 2379 [r1340];
  D605():
    deopt 2380 [odb16];
  D651():
    deopt 2541 [bad79];
  D695():
    deopt 2722 [c645, r1506, iru];
  D696():
    deopt 2726 [lru2];
  D722():
    deopt 2826 [r1556];
  L322(dx297):
    st bar = dx297;
    goto L323();
  L370():
    goto L371();
  L371():
    parse_description_field = ldf parse_description_field;
    check L2141() else D654();
  L396(c641, dx384):
    st lru = dx384;
    is_na26 = ldf `is.na` in base;
    r1504 = dyn is_na26(dx384);
    check L2245() else D693();
  L400(r1511):
    st nms = r1511;
    fmt = ldf fmt;
    check L2262() else D699();
  L1871():
    dx278 = getTryDispatchBuiltinValue(dr244);
    goto L1868(bad56, dx278);
  L1930():
    dr262 = tryDispatchBuiltin.0("[<-", l194, r1209);
    dc131 = getTryDispatchBuiltinDispatched(dr262);
    if dc131 then L1932() else L1931(r1209, dr262);
  L1931(r1211, l196):
    pos10 = ld pos;
    check L1933() else D555();
  L1966():
    dx308 = getTryDispatchBuiltinValue(dr274);
    goto L1963(r1259, dx308);
  L2032():
    goto L347(r1340);
  L2034():
    odb17 = force? odb16;
    checkMissing(odb17);
    c578 = `is.object`(odb17);
    if c578 then L2035() else L2036(odb17);
  L2132():
    bad80 = force? bad79;
    checkMissing(bad80);
    length40 = ldf length in base;
    r1424 = dyn length40(bad80);
    check L2133() else D652();
  L2134():
    bad81 = ld bad;
    check L2135() else D653();
  L2242():
    dr332 = tryDispatchBuiltin.1("[", entry20);
    dc166 = getTryDispatchBuiltinDispatched(dr332);
    if dc166 then L2244() else L2243(c631, dr332);
  L2243(c639, entry22):
    __72 = ldf `[` in base;
    r1503 = dyn __72(entry22, "License_restricts_use");
    goto L396(c639, r1503);
  L2249():
    iru1 = force? iru;
    checkMissing(iru1);
    r1507 = `!=`(r1506, iru1);
    c648 = `as.logical`(r1507);
    c649 = `&&`(c645, c648);
    goto L397(c649);
  L2252():
    lru3 = force? lru2;
    checkMissing(lru3);
    l231 = ld out;
    c652 = `is.object`(l231);
    if c652 then L2254() else L2255(lru3, l231);
  L2258():
    entry23 = ld entry;
    check L2260() else D697();
  L2259():
    r1510 = dyn base125(<sym entry>);
    goto L400(r1510);
  L2313():
    c662 = `as.logical`(r1556);
    if c662 then L2314() else L412();
  D555():
    deopt 2189 [r1211, l196, r1209, pos10];
  D652():
    deopt 2544 [r1424];
  D653():
    deopt 2545 [bad81];
  D654():
    deopt 2553 [];
  D693():
    deopt 2716 [c641, r1504];
  D697():
    deopt 2738 [entry23];
  D699():
    deopt 2744 [];
  L349(dx324):
    l212 = ld out;
    c579 = `is.object`(l212);
    if c579 then L2040() else L2041(dx324, l212);
  L412():
    goto L413();
  L413():
    character2 = ldf character;
    check L2320() else D723();
  L1932():
    dx296 = getTryDispatchBuiltinValue(dr262);
    goto L322(dx296);
  L1933():
    pos11 = force? pos10;
    ___7 = ldf `[<-` in base;
    r1214 = dyn ___7(l196, r1209, pos11);
    goto L322(r1214);
  L2035():
    dr288 = tryDispatchBuiltin.1("[", odb17);
    dc144 = getTryDispatchBuiltinDispatched(dr288);
    if dc144 then L2037() else L2036(dr288);
  L2036(odb19):
    pos20 = ld pos;
    check L2038() else D606();
  L2133():
    goto L369(r1424);
  L2135():
    bad82 = force? bad81;
    checkMissing(bad82);
    l222 = ld out;
    c596 = `is.object`(l222);
    if c596 then L2137() else L2138(bad82, l222);
  L2141():
    p330 = prom<V +>{
      meta140 = ld meta;
      meta141 = force? meta140;
      checkMissing(meta141);
      return meta141;
    };
    r1427 = dyn parse_description_field(p330, "BuildVignettes", TRUE);
    check L2142() else D655();
  L2244():
    dx383 = getTryDispatchBuiltinValue(dr332);
    goto L396(c631, dx383);
  L2245():
    goto L395(c641, r1504);
  L2253(lru7, dx386):
    st out = dx386;
    goto L399();
  L2254():
    dr334 = tryDispatchBuiltin.0("$<-", l231, lru3);
    dc167 = getTryDispatchBuiltinDispatched(dr334);
    if dc167 then L2256() else L2255(lru3, dr334);
  L2255(lru5, l233):
    r1508 = `$<-`(l233, <sym conflict_in_license_restricts_use>, lru3);
    goto L2253(lru5, r1508);
  L2260():
    entry24 = force? entry23;
    checkMissing(entry24);
    names6 = ldf names in base;
    r1512 = dyn names6(entry24);
    check L2261() else D698();
  L2262():
    p345 = prom<V +>{
      sprintf4 = ldf sprintf;
      p343 = prom<V +>{
        nms23 = ld nms;
        nms24 = force? nms23;
        checkMissing(nms24);
        return nms24;
      };
      p344 = prom<V +>{
        entry25 = ld entry;
        entry26 = force? entry25;
        checkMissing(entry26);
        return entry26;
      };
      r1515 = dyn sprintf4("  %s: %s", p343, p344);
      return r1515;
    };
    r1517 = dyn fmt(p345);
    check L2263() else D700();
  L2314():
    l241 = ld out;
    c663 = `is.object`(l241);
    if c663 then L2316() else L2317(TRUE, l241);
  D606():
    deopt 2382 [odb19, pos20];
  D655():
    deopt 2557 [r1427];
  D698():
    deopt 2741 [r1512];
  D700():
    deopt 2746 [r1517];
  D723():
    deopt 2835 [];
  L2037():
    dx323 = getTryDispatchBuiltinValue(dr288);
    goto L349(dx323);
  L2038():
    pos21 = force? pos20;
    __57 = ldf `[` in base;
    r1341 = dyn __57(odb17, pos21, <missing>, FALSE);
    goto L349(r1341);
  L2039(dx329, dx330):
    st out = dx330;
    goto L350(dx329);
  L2040():
    dr290 = tryDispatchBuiltin.0("$<-", l212, dx324);
    dc145 = getTryDispatchBuiltinDispatched(dr290);
    if dc145 then L2042() else L2041(dx324, dr290);
  L2041(dx326, l214):
    r1342 = `$<-`(l214, <sym bad_ORCID_iDs>, dx324);
    goto L2039(dx326, r1342);
  L2136(bad86, dx358):
    st out = dx358;
    goto L371();
  L2137():
    dr310 = tryDispatchBuiltin.0("$<-", l222, bad82);
    dc155 = getTryDispatchBuiltinDispatched(dr310);
    if dc155 then L2139() else L2138(bad82, dr310);
  L2138(bad84, l224):
    r1425 = `$<-`(l224, <sym depends_with_restricts_use_NA>, bad82);
    goto L2136(bad84, r1425);
  L2142():
    st bv = r1427;
    bv = ld bv;
    check L2143() else D656();
  L2256():
    dx385 = getTryDispatchBuiltinValue(dr334);
    goto L2253(lru3, dx385);
  L2261():
    goto L400(r1512);
  L2263():
    st entry = r1517;
    nms25 = ld nms;
    check L2264() else D701();
  L2315(r1560, dx409):
    st out = dx409;
    goto L413();
  L2316():
    dr350 = tryDispatchBuiltin.0("$<-", l241, TRUE);
    dc175 = getTryDispatchBuiltinDispatched(dr350);
    if dc175 then L2318() else L2317(TRUE, dr350);
  L2317(r1558, l243):
    r1561 = `$<-`(l243, <sym new_submission>, TRUE);
    goto L2315(r1558, r1561);
  L2320():
    r1563 = dyn character2();
    check L2321() else D724();
  D656():
    deopt 2559 [bv];
  D701():
    deopt 2748 [nms25];
  D724():
    deopt 2836 [r1563];
  L2042():
    dx328 = getTryDispatchBuiltinValue(dr290);
    goto L2039(dx324, dx328);
  L2139():
    dx357 = getTryDispatchBuiltinValue(dr310);
    goto L2136(bad82, dx357);
  L2143():
    bv1 = force? bv;
    checkMissing(bv1);
    r1428 = `!`(bv1);
    c597 = `as.logical`(r1428);
    if c597 then L2144() else L372();
  L2264():
    nms26 = force? nms25;
    checkMissing(nms26);
    l234 = ld entry;
    names__2 = ldf `names<-`;
    check L2265() else D702();
  L2318():
    dx408 = getTryDispatchBuiltinValue(dr350);
    goto L2315(TRUE, dx408);
  L2321():
    st clashes = r1563;
    which4 = ldf which;
    check L2322() else D725();
  D702():
    deopt 2751 [nms26, l234, nms26];
  D725():
    deopt 2839 [];
  L372():
    goto L373(NULL);
  L373(r1434):
    goto L374();
  L2144():
    l225 = ld out;
    c598 = `is.object`(l225);
    if c598 then L2146() else L2147(TRUE, l225);
  L2265():
    r1518 = dyn names__2(l234, NULL, nms26);
    check L2266() else D703();
  L2322():
    p359 = prom<V +>{
      tolower8 = ldf tolower;
      p357 = prom<V +>{
        packages2 = ld packages;
        packages3 = force? packages2;
        checkMissing(packages3);
        return packages3;
      };
      r1565 = dyn tolower8(p357);
      tolower9 = ldf tolower;
      p358 = prom<V +>{
        package20 = ld package;
        package21 = force? package20;
        checkMissing(package21);
        return package21;
      };
      r1567 = dyn tolower9(p358);
      r1568 = `==`(r1565, r1567);
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      package22 = ld package;
      package23 = force? package22;
      checkMissing(package23);
      r1569 = `!=`(packages5, package23);
      r1570 = `&&`(r1568, r1569);
      return r1570;
    };
    r1572 = dyn which4(p359);
    check L2323() else D726();
  D703():
    deopt 2753 [nms26, r1518];
  D726():
    deopt 2841 [r1572];
  L2145(r1432, dx360):
    st out = dx360;
    goto L373(r1432);
  L2146():
    dr312 = tryDispatchBuiltin.0("$<-", l225, TRUE);
    dc156 = getTryDispatchBuiltinDispatched(dr312);
    if dc156 then L2148() else L2147(TRUE, dr312);
  L2147(r1430, l227):
    r1433 = `$<-`(l227, <sym foss_with_BuildVignettes>, TRUE);
    goto L2145(r1430, r1433);
  L2266():
    st entry = r1518;
    entry27 = ld entry;
    check L2267() else D704();
  L2323():
    st pos = r1572;
    sym130 = ldf length;
    base130 = ldf length in base;
    guard130 = `==`.4(sym130, base130);
    if guard130 then L2324() else L2325();
  D704():
    deopt 2755 [entry27];
  L414(r1574):
    c664 = `as.logical`(r1574);
    if c664 then L2328() else L415();
  L2148():
    dx359 = getTryDispatchBuiltinValue(dr312);
    goto L2145(TRUE, dx359);
  L2267():
    entry28 = force? entry27;
    checkMissing(entry28);
    l235 = ld out;
    c653 = `is.object`(l235);
    if c653 then L2269() else L2270(entry28, l235);
  L2324():
    pos22 = ld pos;
    check L2326() else D727();
  L2325():
    r1573 = dyn base130(<sym pos>);
    goto L414(r1573);
  D727():
    deopt 2845 [pos22];
  L415():
    goto L416();
  L416():
    sym131 = ldf length;
    base131 = ldf length in base;
    guard131 = `==`.4(sym131, base131);
    if guard131 then L2332() else L2333();
  L2268(dx388):
    st out = dx388;
    intersect3 = ldf intersect;
    check L2272() else D705();
  L2269():
    dr336 = tryDispatchBuiltin.0("$<-", l235, entry28);
    dc168 = getTryDispatchBuiltinDispatched(dr336);
    if dc168 then L2271() else L2270(entry28, dr336);
  L2270(entry30, l237):
    r1519 = `$<-`(l237, <sym overrides>, entry28);
    goto L2268(r1519);
  L2326():
    pos23 = force? pos22;
    checkMissing(pos23);
    length43 = ldf length in base;
    r1575 = dyn length43(pos23);
    check L2327() else D728();
  L2328():
    sprintf6 = ldf sprintf;
    check L2329() else D729();
  D705():
    deopt 2761 [];
  D728():
    deopt 2848 [r1575];
  D729():
    deopt 2850 [];
  L417(r1583):
    c667 = `as.logical`(r1583);
    if c667 then L2336() else L418();
  L2271():
    dx387 = getTryDispatchBuiltinValue(dr336);
    goto L2268(dx387);
  L2272():
    p346 = prom<V +>{
      sym126 = ldf names;
      base126 = ldf names in base;
      guard126 = `==`.4(sym126, base126);
      if guard126 then L1() else L2();
    L0(r1521):
      return r1521;
    L1():
      meta146 = ld meta;
      meta147 = force? meta146;
      checkMissing(meta147);
      names7 = ldf names in base;
      r1522 = dyn names7(meta147);
      goto L0(r1522);
    L2():
      r1520 = dyn base126(<sym meta>);
      goto L0(r1520);
    };
    p347 = prom<V +>{
      nms27 = ld nms;
      nms28 = force? nms27;
      checkMissing(nms28);
      return nms28;
    };
    r1525 = dyn intersect3(p346, p347);
    check L2273() else D706();
  L2327():
    goto L414(r1575);
  L2329():
    p360 = prom<V +>{
      packages6 = ld packages;
      packages7 = force? packages6;
      checkMissing(packages7);
      c665 = `is.object`(packages7);
      if c665 then L1() else L2(packages7);
    L0(dx411):
      return dx411;
    L1():
      dr352 = tryDispatchBuiltin.1("[", packages7);
      dc176 = getTryDispatchBuiltinDispatched(dr352);
      if dc176 then L3() else L2(dr352);
    L2(packages9):
      pos24 = ld pos;
      pos25 = force? pos24;
      __78 = ldf `[` in base;
      r1576 = dyn __78(packages9, pos25);
      goto L0(r1576);
    L3():
      dx410 = getTryDispatchBuiltinValue(dr352);
      goto L0(dx410);
    };
    p361 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      c666 = `is.object`(db9);
      if c666 then L1() else L2(db9);
    L0(dx413):
      return dx413;
    L1():
      dr354 = tryDispatchBuiltin.1("[", db9);
      dc177 = getTryDispatchBuiltinDispatched(dr354);
      if dc177 then L3() else L2(dr354);
    L2(db11):
      pos26 = ld pos;
      pos27 = force? pos26;
      __79 = ldf `[` in base;
      r1578 = dyn __79(db11, pos27, "Repository");
      goto L0(r1578);
    L3():
      dx412 = getTryDispatchBuiltinValue(dr354);
      goto L0(dx412);
    };
    r1580 = dyn sprintf6("%s [%s]", p360, p361);
    check L2330() else D730();
  L2332():
    packages_in_CRAN_archive = ld packages_in_CRAN_archive;
    check L2334() else D731();
  L2333():
    r1582 = dyn base131(<sym packages_in_CRAN_archive>);
    goto L417(r1582);
  D706():
    deopt 2764 [r1525];
  D730():
    deopt 2854 [r1580];
  D731():
    deopt 2860 [packages_in_CRAN_archive];
  L418():
    goto L423();
  L423():
    sym134 = ldf length;
    base134 = ldf length in base;
    guard134 = `==`.4(sym134, base134);
    if guard134 then L2352() else L2353();
  L2273():
    st fields = r1525;
    sym127 = ldf length;
    base127 = ldf length in base;
    guard127 = `==`.4(sym127, base127);
    if guard127 then L2274() else L2275();
  L2330():
    st clashes = r1580;
    goto L416();
  L2334():
    packages_in_CRAN_archive1 = force? packages_in_CRAN_archive;
    checkMissing(packages_in_CRAN_archive1);
    length44 = ldf length in base;
    r1584 = dyn length44(packages_in_CRAN_archive1);
    check L2335() else D732();
  L2336():
    which5 = ldf which;
    check L2337() else D733();
  D732():
    deopt 2863 [r1584];
  D733():
    deopt 2865 [];
  L401(r1527):
    c654 = `as.logical`(r1527);
    if c654 then L2278() else L402();
  L424(r1606):
    c671 = `as.logical`(r1606);
    if c671 then L2356() else L425();
  L2274():
    fields = ld fields;
    check L2276() else D707();
  L2275():
    r1526 = dyn base127(<sym fields>);
    goto L401(r1526);
  L2335():
    goto L417(r1584);
  L2337():
    p364 = prom<V +>{
      tolower10 = ldf tolower;
      p362 = prom<V +>{
        packages_in_CRAN_archive2 = ld packages_in_CRAN_archive;
        packages_in_CRAN_archive3 = force? packages_in_CRAN_archive2;
        checkMissing(packages_in_CRAN_archive3);
        return packages_in_CRAN_archive3;
      };
      r1586 = dyn tolower10(p362);
      tolower11 = ldf tolower;
      p363 = prom<V +>{
        package24 = ld package;
        package25 = force? package24;
        checkMissing(package25);
        return package25;
      };
      r1588 = dyn tolower11(p363);
      r1589 = `==`(r1586, r1588);
      packages_in_CRAN_archive4 = ld packages_in_CRAN_archive;
      packages_in_CRAN_archive5 = force? packages_in_CRAN_archive4;
      checkMissing(packages_in_CRAN_archive5);
      package26 = ld package;
      package27 = force? package26;
      checkMissing(package27);
      r1590 = `!=`(packages_in_CRAN_archive5, package27);
      r1591 = `&&`(r1589, r1590);
      return r1591;
    };
    r1593 = dyn which5(p364);
    check L2338() else D734();
  L2352():
    clashes2 = ld clashes;
    check L2354() else D741();
  L2353():
    r1605 = dyn base134(<sym clashes>);
    goto L424(r1605);
  D707():
    deopt 2768 [fields];
  D734():
    deopt 2867 [r1593];
  D741():
    deopt 2893 [clashes2];
  L402():
    goto L407(NULL);
  L407(dx402):
    goto L408();
  L425():
    goto L427();
  L427():
    db12 = ld db;
    check L2367() else D746();
  L2276():
    fields1 = force? fields;
    checkMissing(fields1);
    length42 = ldf length in base;
    r1528 = dyn length42(fields1);
    check L2277() else D708();
  L2278():
    unlist2 = ldf unlist;
    check L2279() else D709();
  L2338():
    st pos = r1593;
    sym132 = ldf length;
    base132 = ldf length in base;
    guard132 = `==`.4(sym132, base132);
    if guard132 then L2339() else L2340();
  L2354():
    clashes3 = force? clashes2;
    checkMissing(clashes3);
    length46 = ldf length in base;
    r1607 = dyn length46(clashes3);
    check L2355() else D742();
  L2356():
    sym135 = ldf list;
    base135 = ldf list in base;
    guard135 = `==`.4(sym135, base135);
    if guard135 then L2357() else L2358();
  D708():
    deopt 2771 [r1528];
  D709():
    deopt 2773 [];
  D742():
    deopt 2896 [r1607];
  D746():
    deopt 2910 [db12];
  L419(r1595):
    c668 = `as.logical`(r1595);
    if c668 then L2343() else L420();
  L426(r1609):
    l244 = ld out;
    c672 = `is.object`(l244);
    if c672 then L2363() else L2364(r1609, l244);
  L2277():
    goto L401(r1528);
  L2279():
    p354 = prom<V +>{
      Map = ldf Map;
      p348 = prom<V +>{
        identical = ld identical;
        identical1 = force? identical;
        checkMissing(identical1);
        return identical1;
      };
      p352 = prom<V +>{
        fmt1 = ldf fmt;
        p351 = prom<V +>{
          sprintf5 = ldf sprintf;
          p349 = prom<V +>{
            fields2 = ld fields;
            fields3 = force? fields2;
            checkMissing(fields3);
            return fields3;
          };
          p350 = prom<V +>{
            meta148 = ld meta;
            meta149 = force? meta148;
            checkMissing(meta149);
            c655 = `is.object`(meta149);
            if c655 then L1() else L2(meta149);
          L0(dx390):
            return dx390;
          L1():
            dr338 = tryDispatchBuiltin.1("[", meta149);
            dc169 = getTryDispatchBuiltinDispatched(dr338);
            if dc169 then L3() else L2(dr338);
          L2(meta151):
            fields4 = ld fields;
            fields5 = force? fields4;
            __73 = ldf `[` in base;
            r1531 = dyn __73(meta151, fields5);
            goto L0(r1531);
          L3():
            dx389 = getTryDispatchBuiltinValue(dr338);
            goto L0(dx389);
          };
          r1533 = dyn sprintf5("  %s: %s", p349, p350);
          return r1533;
        };
        r1535 = dyn fmt1(p351);
        return r1535;
      };
      p353 = prom<V +>{
        entry33 = ld entry;
        entry34 = force? entry33;
        checkMissing(entry34);
        c656 = `is.object`(entry34);
        if c656 then L1() else L2(entry34);
      L0(dx392):
        return dx392;
      L1():
        dr340 = tryDispatchBuiltin.1("[", entry34);
        dc170 = getTryDispatchBuiltinDispatched(dr340);
        if dc170 then L3() else L2(dr340);
      L2(entry36):
        fields6 = ld fields;
        fields7 = force? fields6;
        __74 = ldf `[` in base;
        r1537 = dyn __74(entry36, fields7);
        goto L0(r1537);
      L3():
        dx391 = getTryDispatchBuiltinValue(dr340);
        goto L0(dx391);
      };
      r1539 = dyn Map(p348, p352, p353);
      return r1539;
    };
    r1541 = dyn unlist2(p354);
    check L2280() else D710();
  L2339():
    pos28 = ld pos;
    check L2341() else D735();
  L2340():
    r1594 = dyn base132(<sym pos>);
    goto L419(r1594);
  L2355():
    goto L424(r1607);
  L2357():
    package28 = ld package;
    check L2359() else D743();
  L2358():
    r1608 = dyn base135(<sym package>, <sym clashes>);
    goto L426(r1608);
  L2367():
    db13 = force? db12;
    checkMissing(db13);
    c673 = `is.object`(db13);
    if c673 then L2368() else L2369(db13);
  D710():
    deopt 2775 [r1541];
  D735():
    deopt 2871 [pos28];
  D743():
    deopt 2899 [package28];
  L420():
    goto L422(NULL);
  L422(r1603):
    goto L423();
  L428(dx419):
    st repositories = dx419;
    sym136 = ldf length;
    base136 = ldf length in base;
    guard136 = `==`.4(sym136, base136);
    if guard136 then L2378() else L2379();
  L2280():
    r1542 = `!`(r1541);
    st ind = r1542;
    sym128 = ldf any;
    base128 = ldf any in base;
    guard128 = `==`.4(sym128, base128);
    if guard128 then L2281() else L2282();
  L2341():
    pos29 = force? pos28;
    checkMissing(pos29);
    length45 = ldf length in base;
    r1596 = dyn length45(pos29);
    check L2342() else D736();
  L2343():
    sym133 = ldf c;
    base133 = ldf c in base;
    guard133 = `==`.4(sym133, base133);
    if guard133 then L2344() else L2345();
  L2359():
    package29 = force? package28;
    checkMissing(package29);
    clashes4 = ld clashes;
    check L2360() else D744();
  L2362(r1614, dx417):
    st out = dx417;
    goto L427();
  L2363():
    dr358 = tryDispatchBuiltin.0("$<-", l244, r1609);
    dc179 = getTryDispatchBuiltinDispatched(dr358);
    if dc179 then L2365() else L2364(r1609, dr358);
  L2364(r1612, l246):
    r1615 = `$<-`(l246, <sym bad_package>, r1609);
    goto L2362(r1612, r1615);
  L2368():
    dr360 = tryDispatchBuiltin.1("[", db13);
    dc180 = getTryDispatchBuiltinDispatched(dr360);
    if dc180 then L2370() else L2369(dr360);
  L2369(db15):
    packages10 = ld packages;
    check L2371() else D747();
  D736():
    deopt 2874 [r1596];
  D744():
    deopt 2901 [clashes4];
  D747():
    deopt 2912 [db15, packages10];
  L403(r1544):
    c657 = `as.logical`(r1544);
    if c657 then L2285() else L404();
  L421(r1598):
    st clashes = r1598;
    goto L422(r1598);
  L430(r1627):
    c675 = `as.logical`(r1627);
    if c675 then L2382() else L431();
  L2281():
    ind33 = ld ind;
    check L2283() else D711();
  L2282():
    r1543 = dyn base128(<sym ind>);
    goto L403(r1543);
  L2342():
    goto L419(r1596);
  L2344():
    clashes = ld clashes;
    check L2346() else D737();
  L2345():
    r1597 = dyn base133(<sym clashes>, <lang sprintf("%s [CRAN archive]", `[`(packages_in_CRAN_archive, pos))>);
    goto L421(r1597);
  L2360():
    clashes5 = force? clashes4;
    checkMissing(clashes5);
    list1 = ldf list in base;
    r1610 = dyn list1(package29, clashes5);
    check L2361() else D745();
  L2365():
    dx416 = getTryDispatchBuiltinValue(dr358);
    goto L2362(r1609, dx416);
  L2370():
    dx418 = getTryDispatchBuiltinValue(dr360);
    goto L428(dx418);
  L2371():
    packages11 = force? packages10;
    checkMissing(packages11);
    package30 = ld package;
    check L2372() else D748();
  L2378():
    repositories = ld repositories;
    check L2380() else D751();
  L2379():
    r1626 = dyn base136(<sym repositories>);
    goto L430(r1626);
  D711():
    deopt 2780 [ind33];
  D737():
    deopt 2877 [clashes];
  D745():
    deopt 2904 [r1610];
  D748():
    deopt 2913 [db15, packages11, package30];
  D751():
    deopt 2929 [repositories];
  L404():
    goto L406(NULL);
  L406(dx401):
    goto L407(dx401);
  L431():
    goto L432();
  L432():
    setdiff2 = ldf setdiff;
    check L2389() else D754();
  L2283():
    ind34 = force? ind33;
    checkMissing(ind34);
    any11 = ldf any in base;
    r1545 = dyn any11(ind34);
    check L2284() else D712();
  L2285():
    fields8 = ld fields;
    check L2286() else D713();
  L2346():
    clashes1 = force? clashes;
    checkMissing(clashes1);
    sprintf7 = ldf sprintf;
    check L2347() else D738();
  L2361():
    goto L426(r1610);
  L2372():
    package31 = force? package30;
    checkMissing(package31);
    r1617 = `==`(packages11, package31);
    db16 = ld db;
    check L2373() else D749();
  L2380():
    repositories1 = force? repositories;
    checkMissing(repositories1);
    length47 = ldf length in base;
    r1628 = dyn length47(repositories1);
    check L2381() else D752();
  L2382():
    repositories2 = ld repositories;
    check L2383() else D753();
  D712():
    deopt 2783 [r1545];
  D713():
    deopt 2784 [fields8];
  D738():
    deopt 2880 [];
  D749():
    deopt 2915 [db15, r1617, db16];
  D752():
    deopt 2932 [r1628];
  D753():
    deopt 2933 [repositories2];
  D754():
    deopt 2941 [];
  L2284():
    goto L403(r1545);
  L2286():
    fields9 = force? fields8;
    checkMissing(fields9);
    c658 = `is.object`(fields9);
    if c658 then L2287() else L2288(fields9);
  L2347():
    p365 = prom<V +>{
      packages_in_CRAN_archive6 = ld packages_in_CRAN_archive;
      packages_in_CRAN_archive7 = force? packages_in_CRAN_archive6;
      checkMissing(packages_in_CRAN_archive7);
      c669 = `is.object`(packages_in_CRAN_archive7);
      if c669 then L1() else L2(packages_in_CRAN_archive7);
    L0(dx415):
      return dx415;
    L1():
      dr356 = tryDispatchBuiltin.1("[", packages_in_CRAN_archive7);
      dc178 = getTryDispatchBuiltinDispatched(dr356);
      if dc178 then L3() else L2(dr356);
    L2(packages_in_CRAN_archive9):
      pos30 = ld pos;
      pos31 = force? pos30;
      __80 = ldf `[` in base;
      r1599 = dyn __80(packages_in_CRAN_archive9, pos31);
      goto L0(r1599);
    L3():
      dx414 = getTryDispatchBuiltinValue(dr356);
      goto L0(dx414);
    };
    r1601 = dyn sprintf7("%s [CRAN archive]", p365);
    check L2348() else D739();
  L2373():
    db17 = force? db16;
    checkMissing(db17);
    c674 = `is.object`(db17);
    if c674 then L2374() else L2375(db15, r1617);
  L2381():
    goto L430(r1628);
  L2383():
    repositories3 = force? repositories2;
    checkMissing(repositories3);
    l247 = ld out;
    c676 = `is.object`(l247);
    if c676 then L2385() else L2386(repositories3, l247);
  L2389():
    p370 = prom<V +>{
      unique3 = ldf unique;
      p369 = prom<V +>{
        sym137 = ldf c;
        base137 = ldf c in base;
        guard137 = `==`.4(sym137, base137);
        if guard137 then L1() else L2();
      L0(r1631):
        return r1631;
      L1():
        _extract_dependency_package_names = ldf `.extract_dependency_package_names`;
        p366 = prom<V +>{
          meta156 = ld meta;
          meta157 = force? meta156;
          checkMissing(meta157);
          c677 = `is.object`(meta157);
          if c677 then L1() else L2(meta157);
        L0(dx425):
          return dx425;
        L1():
          dr366 = tryDispatchBuiltin.1("[", meta157);
          dc183 = getTryDispatchBuiltinDispatched(dr366);
          if dc183 then L3() else L2(dr366);
        L2(meta159):
          __83 = ldf `[` in base;
          r1632 = dyn __83(meta159, "Depends");
          goto L0(r1632);
        L3():
          dx424 = getTryDispatchBuiltinValue(dr366);
          goto L0(dx424);
        };
        r1634 = dyn _extract_dependency_package_names(p366);
        _extract_dependency_package_names1 = ldf `.extract_dependency_package_names`;
        p367 = prom<V +>{
          meta160 = ld meta;
          meta161 = force? meta160;
          checkMissing(meta161);
          c678 = `is.object`(meta161);
          if c678 then L1() else L2(meta161);
        L0(dx427):
          return dx427;
        L1():
          dr368 = tryDispatchBuiltin.1("[", meta161);
          dc184 = getTryDispatchBuiltinDispatched(dr368);
          if dc184 then L3() else L2(dr368);
        L2(meta163):
          __84 = ldf `[` in base;
          r1635 = dyn __84(meta163, "Imports");
          goto L0(r1635);
        L3():
          dx426 = getTryDispatchBuiltinValue(dr368);
          goto L0(dx426);
        };
        r1637 = dyn _extract_dependency_package_names1(p367);
        _extract_dependency_package_names2 = ldf `.extract_dependency_package_names`;
        p368 = prom<V +>{
          meta164 = ld meta;
          meta165 = force? meta164;
          checkMissing(meta165);
          c679 = `is.object`(meta165);
          if c679 then L1() else L2(meta165);
        L0(dx429):
          return dx429;
        L1():
          dr370 = tryDispatchBuiltin.1("[", meta165);
          dc185 = getTryDispatchBuiltinDispatched(dr370);
          if dc185 then L3() else L2(dr370);
        L2(meta167):
          __85 = ldf `[` in base;
          r1638 = dyn __85(meta167, "LinkingTo");
          goto L0(r1638);
        L3():
          dx428 = getTryDispatchBuiltinValue(dr370);
          goto L0(dx428);
        };
        r1640 = dyn _extract_dependency_package_names2(p368);
        c680 = ldf c in base;
        r1641 = dyn c680(r1634, r1637, r1640);
        goto L0(r1641);
      L2():
        r1630 = dyn base137(<lang .extract_dependency_package_names(`[`(meta, "Depends"))>, <lang .extract_dependency_package_names(`[`(meta, "Imports"))>, <lang .extract_dependency_package_names(`[`(meta, "LinkingTo"))>);
        goto L0(r1630);
      };
      r1643 = dyn unique3(p369);
      return r1643;
    };
    p371 = prom<V +>{
      sym138 = ldf c;
      base138 = ldf c in base;
      guard138 = `==`.4(sym138, base138);
      if guard138 then L2() else L3();
    L0(r1646):
      return r1646;
    L2():
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r1647 = dyn _get_standard_package_names();
      c681 = `is.object`(r1647);
      if c681 then L5() else L6(r1647);
    L3():
      r1645 = dyn base138(<lang `$`(.get_standard_package_names(), base)>, <lang `[`(db, , "Package")>);
      goto L0(r1645);
    L4(dx431):
      db24 = ld db;
      db25 = force? db24;
      checkMissing(db25);
      c682 = `is.object`(db25);
      if c682 then L8() else L9();
    L5():
      dr372 = tryDispatchBuiltin.1("$", r1647);
      dc186 = getTryDispatchBuiltinDispatched(dr372);
      if dc186 then L7() else L6(dr372);
    L6(r1649):
      r1650 = `$`(r1649, <sym base>);
      goto L4(r1650);
    L1(dx433):
      c683 = ldf c in base;
      r1652 = dyn c683(dx431, dx433);
      goto L0(r1652);
    L7():
      dx430 = getTryDispatchBuiltinValue(dr372);
      goto L4(dx430);
    L8():
      dr374 = tryDispatchBuiltin.1("[", db25);
      dc187 = getTryDispatchBuiltinDispatched(dr374);
      if dc187 then L10() else L9();
    L9():
      __86 = ldf `[` in base;
      r1651 = dyn __86(db25, <missing>, "Package");
      goto L1(r1651);
    L10():
      dx432 = getTryDispatchBuiltinValue(dr374);
      goto L1(dx432);
    };
    r1654 = dyn setdiff2(p370, p371);
    check L2390() else D755();
  D739():
    deopt 2883 [r1601];
  D755():
    deopt 2944 [r1654];
  L405(dx394):
    l238 = ld out;
    c659 = `is.object`(l238);
    if c659 then L2292() else L2293(dx394, l238);
  L429(db23, r1621, dx421):
    CRAN2 = ld CRAN;
    check L2377() else D750();
  L2287():
    dr342 = tryDispatchBuiltin.1("[", fields9);
    dc171 = getTryDispatchBuiltinDispatched(dr342);
    if dc171 then L2289() else L2288(dr342);
  L2288(fields11):
    ind35 = ld ind;
    check L2290() else D714();
  L2348():
    c670 = ldf c in base;
    r1602 = dyn c670(clashes1, r1601);
    check L2349() else D740();
  L2374():
    dr362 = tryDispatchBuiltin.1("[", db17);
    dc181 = getTryDispatchBuiltinDispatched(dr362);
    if dc181 then L2376() else L2375(db15, r1617);
  L2375(db20, r1619):
    __81 = ldf `[` in base;
    r1622 = dyn __81(db17, <missing>, "Repository");
    goto L429(db20, r1619, r1622);
  L2384(repositories7, dx423):
    st out = dx423;
    goto L432();
  L2385():
    dr364 = tryDispatchBuiltin.0("$<-", l247, repositories3);
    dc182 = getTryDispatchBuiltinDispatched(dr364);
    if dc182 then L2387() else L2386(repositories3, dr364);
  L2386(repositories5, l249):
    r1629 = `$<-`(l249, <sym repositories>, repositories3);
    goto L2384(repositories5, r1629);
  L2390():
    st strong_dependencies = r1654;
    sym139 = ldf length;
    base139 = ldf length in base;
    guard139 = `==`.4(sym139, base139);
    if guard139 then L2391() else L2392();
  D714():
    deopt 2786 [fields11, ind35];
  D740():
    deopt 2885 [r1602];
  D750():
    deopt 2920 [db23, r1621, dx421, CRAN2];
  L433(r1656):
    c684 = `as.logical`(r1656);
    if c684 then L2395() else L434();
  L2289():
    dx393 = getTryDispatchBuiltinValue(dr342);
    goto L405(dx393);
  L2290():
    ind36 = force? ind35;
    __75 = ldf `[` in base;
    r1546 = dyn __75(fields11, ind36);
    goto L405(r1546);
  L2291(dx399, dx400):
    st out = dx400;
    goto L406(dx399);
  L2292():
    dr344 = tryDispatchBuiltin.0("$<-", l238, dx394);
    dc172 = getTryDispatchBuiltinDispatched(dr344);
    if dc172 then L2294() else L2293(dx394, dr344);
  L2293(dx396, l240):
    r1547 = `$<-`(l240, <sym conflicts>, dx394);
    goto L2291(dx396, r1547);
  L2349():
    goto L421(r1602);
  L2376():
    dx420 = getTryDispatchBuiltinValue(dr362);
    goto L429(db15, r1617, dx420);
  L2377():
    CRAN3 = force? CRAN2;
    checkMissing(CRAN3);
    r1623 = `!=`(dx421, CRAN3);
    r1624 = `&&`(r1621, r1623);
    __82 = ldf `[` in base;
    r1625 = dyn __82(db23, r1624, "Repository");
    goto L428(r1625);
  L2387():
    dx422 = getTryDispatchBuiltinValue(dr364);
    goto L2384(repositories3, dx422);
  L2391():
    strong_dependencies = ld strong_dependencies;
    check L2393() else D756();
  L2392():
    r1655 = dyn base139(<sym strong_dependencies>);
    goto L433(r1655);
  D756():
    deopt 2948 [strong_dependencies];
  L434():
    goto L435();
  L435():
    setdiff3 = ldf setdiff;
    check L2402() else D759();
  L2294():
    dx398 = getTryDispatchBuiltinValue(dr344);
    goto L2291(dx394, dx398);
  L2393():
    strong_dependencies1 = force? strong_dependencies;
    checkMissing(strong_dependencies1);
    length48 = ldf length in base;
    r1657 = dyn length48(strong_dependencies1);
    check L2394() else D757();
  L2395():
    strong_dependencies2 = ld strong_dependencies;
    check L2396() else D758();
  D757():
    deopt 2951 [r1657];
  D758():
    deopt 2952 [strong_dependencies2];
  D759():
    deopt 2960 [];
  L2394():
    goto L433(r1657);
  L2396():
    strong_dependencies3 = force? strong_dependencies2;
    checkMissing(strong_dependencies3);
    l250 = ld out;
    c685 = `is.object`(l250);
    if c685 then L2398() else L2399(strong_dependencies3, l250);
  L2402():
    p375 = prom<V +>{
      unique4 = ldf unique;
      p374 = prom<V +>{
        sym140 = ldf c;
        base140 = ldf c in base;
        guard140 = `==`.4(sym140, base140);
        if guard140 then L1() else L2();
      L0(r1660):
        return r1660;
      L1():
        _extract_dependency_package_names3 = ldf `.extract_dependency_package_names`;
        p372 = prom<V +>{
          meta168 = ld meta;
          meta169 = force? meta168;
          checkMissing(meta169);
          c686 = `is.object`(meta169);
          if c686 then L1() else L2(meta169);
        L0(dx437):
          return dx437;
        L1():
          dr378 = tryDispatchBuiltin.1("[", meta169);
          dc189 = getTryDispatchBuiltinDispatched(dr378);
          if dc189 then L3() else L2(dr378);
        L2(meta171):
          __87 = ldf `[` in base;
          r1661 = dyn __87(meta171, "Suggests");
          goto L0(r1661);
        L3():
          dx436 = getTryDispatchBuiltinValue(dr378);
          goto L0(dx436);
        };
        r1663 = dyn _extract_dependency_package_names3(p372);
        _extract_dependency_package_names4 = ldf `.extract_dependency_package_names`;
        p373 = prom<V +>{
          meta172 = ld meta;
          meta173 = force? meta172;
          checkMissing(meta173);
          c687 = `is.object`(meta173);
          if c687 then L1() else L2(meta173);
        L0(dx439):
          return dx439;
        L1():
          dr380 = tryDispatchBuiltin.1("[", meta173);
          dc190 = getTryDispatchBuiltinDispatched(dr380);
          if dc190 then L3() else L2(dr380);
        L2(meta175):
          __88 = ldf `[` in base;
          r1664 = dyn __88(meta175, "Enhances");
          goto L0(r1664);
        L3():
          dx438 = getTryDispatchBuiltinValue(dr380);
          goto L0(dx438);
        };
        r1666 = dyn _extract_dependency_package_names4(p373);
        c688 = ldf c in base;
        r1667 = dyn c688(r1663, r1666);
        goto L0(r1667);
      L2():
        r1659 = dyn base140(<lang .extract_dependency_package_names(`[`(meta, "Suggests"))>, <lang .extract_dependency_package_names(`[`(meta, "Enhances"))>);
        goto L0(r1659);
      };
      r1669 = dyn unique4(p374);
      return r1669;
    };
    p376 = prom<V +>{
      sym141 = ldf c;
      base141 = ldf c in base;
      guard141 = `==`.4(sym141, base141);
      if guard141 then L2() else L3();
    L0(r1672):
      return r1672;
    L2():
      _get_standard_package_names1 = ldf `.get_standard_package_names`;
      r1673 = dyn _get_standard_package_names1();
      c689 = `is.object`(r1673);
      if c689 then L5() else L6(r1673);
    L3():
      r1671 = dyn base141(<lang `$`(.get_standard_package_names(), base)>, <lang `[`(db, , "Package")>);
      goto L0(r1671);
    L4(dx441):
      db28 = ld db;
      db29 = force? db28;
      checkMissing(db29);
      c690 = `is.object`(db29);
      if c690 then L8() else L9();
    L5():
      dr382 = tryDispatchBuiltin.1("$", r1673);
      dc191 = getTryDispatchBuiltinDispatched(dr382);
      if dc191 then L7() else L6(dr382);
    L6(r1675):
      r1676 = `$`(r1675, <sym base>);
      goto L4(r1676);
    L1(dx443):
      c691 = ldf c in base;
      r1678 = dyn c691(dx441, dx443);
      goto L0(r1678);
    L7():
      dx440 = getTryDispatchBuiltinValue(dr382);
      goto L4(dx440);
    L8():
      dr384 = tryDispatchBuiltin.1("[", db29);
      dc192 = getTryDispatchBuiltinDispatched(dr384);
      if dc192 then L10() else L9();
    L9():
      __89 = ldf `[` in base;
      r1677 = dyn __89(db29, <missing>, "Package");
      goto L1(r1677);
    L10():
      dx442 = getTryDispatchBuiltinValue(dr384);
      goto L1(dx442);
    };
    r1680 = dyn setdiff3(p375, p376);
    check L2403() else D760();
  D760():
    deopt 2963 [r1680];
  L2397(strong_dependencies7, dx435):
    st out = dx435;
    goto L435();
  L2398():
    dr376 = tryDispatchBuiltin.0("$<-", l250, strong_dependencies3);
    dc188 = getTryDispatchBuiltinDispatched(dr376);
    if dc188 then L2400() else L2399(strong_dependencies3, dr376);
  L2399(strong_dependencies5, l252):
    r1658 = `$<-`(l252, <sym strong_dependencies_not_in_mainstream_repositories>, strong_dependencies3);
    goto L2397(strong_dependencies5, r1658);
  L2403():
    st suggests_or_enhances = r1680;
    sym142 = ldf length;
    base142 = ldf length in base;
    guard142 = `==`.4(sym142, base142);
    if guard142 then L2404() else L2405();
  L436(r1682):
    c692 = `as.logical`(r1682);
    if c692 then L2408() else L437();
  L2400():
    dx434 = getTryDispatchBuiltinValue(dr376);
    goto L2397(strong_dependencies3, dx434);
  L2404():
    suggests_or_enhances = ld suggests_or_enhances;
    check L2406() else D761();
  L2405():
    r1681 = dyn base142(<sym suggests_or_enhances>);
    goto L436(r1681);
  D761():
    deopt 2967 [suggests_or_enhances];
  L437():
    goto L438();
  L438():
    sym143 = ldf `is.na`;
    base143 = ldf `is.na` in base;
    guard143 = `==`.4(sym143, base143);
    if guard143 then L2415() else L2416();
  L2406():
    suggests_or_enhances1 = force? suggests_or_enhances;
    checkMissing(suggests_or_enhances1);
    length49 = ldf length in base;
    r1683 = dyn length49(suggests_or_enhances1);
    check L2407() else D762();
  L2408():
    suggests_or_enhances2 = ld suggests_or_enhances;
    check L2409() else D763();
  D762():
    deopt 2970 [r1683];
  D763():
    deopt 2971 [suggests_or_enhances2];
  L439(r1686):
    r1689 = `!`(r1686);
    c695 = `as.logical`(r1689);
    if c695 then L2422() else L441();
  L2407():
    goto L436(r1683);
  L2409():
    suggests_or_enhances3 = force? suggests_or_enhances2;
    checkMissing(suggests_or_enhances3);
    l253 = ld out;
    c693 = `is.object`(l253);
    if c693 then L2411() else L2412(suggests_or_enhances3, l253);
  L2415():
    meta176 = ld meta;
    check L2417() else D764();
  L2416():
    r1685 = dyn base143(<lang `<-`(aurls, `[`(meta, "Additional_repositories"))>);
    goto L439(r1685);
  D764():
    deopt 2980 [meta176];
  L441():
    goto L466();
  L466():
    capabilities1 = ldf capabilities;
    check L2534() else D825();
  L2410(suggests_or_enhances7, dx445):
    st out = dx445;
    goto L438();
  L2411():
    dr386 = tryDispatchBuiltin.0("$<-", l253, suggests_or_enhances3);
    dc193 = getTryDispatchBuiltinDispatched(dr386);
    if dc193 then L2413() else L2412(suggests_or_enhances3, dr386);
  L2412(suggests_or_enhances5, l255):
    r1684 = `$<-`(l255, <sym suggests_or_enhances_not_in_mainstream_repositories>, suggests_or_enhances3);
    goto L2410(suggests_or_enhances5, r1684);
  L2417():
    meta177 = force? meta176;
    checkMissing(meta177);
    c694 = `is.object`(meta177);
    if c694 then L2418() else L2419(meta177);
  L2422():
    _read_additional_repositories_field = ldf `.read_additional_repositories_field`;
    check L2423() else D766();
  D766():
    deopt 2990 [];
  D825():
    deopt 3198 [];
  L440(dx447):
    st aurls = dx447;
    is_na27 = ldf `is.na` in base;
    r1688 = dyn is_na27(dx447);
    check L2421() else D765();
  L2413():
    dx444 = getTryDispatchBuiltinValue(dr386);
    goto L2410(suggests_or_enhances3, dx444);
  L2418():
    dr388 = tryDispatchBuiltin.1("[", meta177);
    dc194 = getTryDispatchBuiltinDispatched(dr388);
    if dc194 then L2420() else L2419(dr388);
  L2419(meta179):
    __90 = ldf `[` in base;
    r1687 = dyn __90(meta179, "Additional_repositories");
    goto L440(r1687);
  L2423():
    p377 = prom<V +>{
      aurls = ld aurls;
      aurls1 = force? aurls;
      checkMissing(aurls1);
      return aurls1;
    };
    r1691 = dyn _read_additional_repositories_field(p377);
    check L2424() else D767();
  L2534():
    r1794 = dyn capabilities1("libcurl");
    check L2535() else D826();
  D765():
    deopt 2987 [r1688];
  D767():
    deopt 2992 [r1691];
  D826():
    deopt 3200 [r1794];
  L2420():
    dx446 = getTryDispatchBuiltinValue(dr388);
    goto L440(dx446);
  L2421():
    goto L439(r1688);
  L2424():
    st aurls = r1691;
    tryCatch7 = ldf tryCatch;
    check L2425() else D768();
  L2535():
    c716 = `as.logical`(r1794);
    if c716 then L2536() else L467(c716);
  D768():
    deopt 2995 [];
  L467(c718):
    c722 = `as.logical`(c718);
    if c722 then L2540() else L468();
  L2425():
    p380 = prom<V +>{
      lapply6 = ldf lapply;
      p378 = prom<V +>{
        aurls2 = ld aurls;
        aurls3 = force? aurls2;
        checkMissing(aurls3);
        return aurls3;
      };
      p379 = prom<V +>{
        r1693 = clos inner883694641;
        return r1693;
      };
      r1695 = dyn lapply6(p378, p379);
      return r1695;
    };
    p381 = prom<V +>{
      identity14 = ld identity;
      identity15 = force? identity14;
      checkMissing(identity15);
      return identity15;
    };
    r1698 = dyn tryCatch7[, error](p380, p381);
    check L2426() else D769();
  L2536():
    config_val_to_logical7 = ldf config_val_to_logical;
    check L2537() else D827();
  D769():
    deopt 2999 [r1698];
  D827():
    deopt 3202 [c716];
  L468():
    goto L473();
  L473():
    db32 = ld db;
    check L2559() else D836();
  L2426():
    st adb = r1698;
    sym144 = ldf inherits;
    base144 = ldf inherits in base;
    guard144 = `==`.4(sym144, base144);
    if guard144 then L2427() else L2428();
  L2537():
    p404 = prom<V +>{
      Sys_getenv8 = ldf `Sys.getenv`;
      r1795 = dyn Sys_getenv8("_R_CHECK_CRAN_INCOMING_SKIP_DOI_CHECKS_", "FALSE");
      return r1795;
    };
    r1797 = dyn config_val_to_logical7(p404);
    check L2538() else D828();
  L2540():
    tryCatch8 = ldf tryCatch;
    check L2541() else D829();
  D828():
    deopt 3204 [c716, r1797];
  D829():
    deopt 3208 [];
  D836():
    deopt 3236 [db32];
  L442(r1700):
    c696 = `as.logical`(r1700);
    if c696 then L2431() else L443();
  L2427():
    adb = ld adb;
    check L2429() else D770();
  L2428():
    r1699 = dyn base144(<sym adb>, "error");
    goto L442(r1699);
  L2538():
    r1798 = `!`(r1797);
    c719 = `as.logical`(r1798);
    c720 = `&&`(c716, c719);
    goto L467(c720);
  L2541():
    p408 = prom<V +>{
      check_doi_db1 = ldf check_doi_db;
      p406 = prom<V +>{
        doi_db_from_package_sources = ldf doi_db_from_package_sources;
        p405 = prom<V +>{
          dir59 = ld dir;
          dir60 = force? dir59;
          checkMissing(dir60);
          return dir60;
        };
        r1800 = dyn doi_db_from_package_sources[, Rd](p405, TRUE);
        return r1800;
      };
      p407 = prom<V +>{
        check_urls_in_parallel4 = ld check_urls_in_parallel;
        check_urls_in_parallel5 = force? check_urls_in_parallel4;
        checkMissing(check_urls_in_parallel5);
        return check_urls_in_parallel5;
      };
      r1803 = dyn check_doi_db1[, parallel](p406, p407);
      return r1803;
    };
    p409 = prom<V +>{
      identity16 = ld identity;
      identity17 = force? identity16;
      checkMissing(identity17);
      return identity17;
    };
    r1806 = dyn tryCatch8[, error](p408, p409);
    check L2542() else D830();
  L2559():
    db33 = force? db32;
    checkMissing(db33);
    c731 = `is.object`(db33);
    if c731 then L2560() else L2561(db33);
  D770():
    deopt 3003 [adb];
  D830():
    deopt 3212 [r1806];
  L443():
    vapply4 = ldf vapply;
    check L2439() else D774();
  L444(r1709):
    goto L466();
  L474(dx479):
    st db = dx479;
    NROW8 = ldf NROW;
    check L2577() else D843();
  L2429():
    adb1 = force? adb;
    checkMissing(adb1);
    inherits7 = ldf inherits in base;
    r1701 = dyn inherits7(adb1, "error", FALSE);
    check L2430() else D771();
  L2431():
    conditionMessage2 = ldf conditionMessage;
    check L2432() else D772();
  L2542():
    st bad = r1806;
    sym153 = ldf inherits;
    base153 = ldf inherits in base;
    guard153 = `==`.4(sym153, base153);
    if guard153 then L2543() else L2544();
  L2560():
    dr414 = tryDispatchBuiltin.1("[", db33);
    dc207 = getTryDispatchBuiltinDispatched(dr414);
    if dc207 then L2562() else L2561(dr414);
  L2561(db35):
    packages12 = ld packages;
    check L2563() else D837();
  D771():
    deopt 3008 [r1701];
  D772():
    deopt 3010 [];
  D774():
    deopt 3017 [];
  D837():
    deopt 3238 [db35, packages12];
  D843():
    deopt 3267 [];
  L469(r1808):
    c723 = `as.logical`(r1808);
    if c723 then L470(c723) else L2547();
  L2430():
    goto L442(r1701);
  L2432():
    p382 = prom<V +>{
      adb2 = ld adb;
      adb3 = force? adb2;
      checkMissing(adb3);
      return adb3;
    };
    r1703 = dyn conditionMessage2(p382);
    check L2433() else D773();
  L2439():
    p383 = prom<V +>{
      adb4 = ld adb;
      adb5 = force? adb4;
      checkMissing(adb5);
      return adb5;
    };
    p384 = prom<V +>{
      NROW5 = ld NROW;
      NROW6 = force? NROW5;
      checkMissing(NROW6);
      return NROW6;
    };
    r1712 = dyn vapply4(p383, p384, 0);
    check L2440() else D775();
  L2543():
    bad88 = ld bad;
    check L2545() else D831();
  L2544():
    r1807 = dyn base153(<sym bad>, "error");
    goto L469(r1807);
  L2562():
    dx478 = getTryDispatchBuiltinValue(dr414);
    goto L474(dx478);
  L2563():
    packages13 = force? packages12;
    checkMissing(packages13);
    package32 = ld package;
    check L2564() else D838();
  L2577():
    p411 = prom<V +>{
      db55 = ld db;
      db56 = force? db55;
      checkMissing(db56);
      return db56;
    };
    r1835 = dyn NROW8(p411);
    check L2578() else D844();
  D773():
    deopt 3012 [r1703];
  D775():
    deopt 3021 [r1712];
  D831():
    deopt 3216 [bad88];
  D838():
    deopt 3239 [db35, packages13, package32];
  D844():
    deopt 3269 [r1835];
  L470(c724):
    c729 = `as.logical`(c724);
    if c729 then L2551() else L471();
  L2433():
    l256 = ld out;
    c697 = `is.object`(l256);
    if c697 then L2435() else L2436(r1703, l256);
  L2440():
    r1713 = `==`(r1712, 0);
    st ind = r1713;
    sym145 = ldf any;
    base145 = ldf any in base;
    guard145 = `==`.4(sym145, base145);
    if guard145 then L2441() else L2442();
  L2545():
    bad89 = force? bad88;
    checkMissing(bad89);
    inherits8 = ldf inherits in base;
    r1809 = dyn inherits8(bad89, "error", FALSE);
    check L2546() else D832();
  L2547():
    NROW7 = ldf NROW;
    check L2548() else D833();
  L2564():
    package33 = force? package32;
    checkMissing(package33);
    r1813 = `==`(packages13, package33);
    db36 = ld db;
    check L2565() else D839();
  L2578():
    r1836 = `!`(r1835);
    c734 = `as.logical`(r1836);
    if c734 then L2579() else L478();
  D832():
    deopt 3221 [r1809];
  D833():
    deopt 3223 [c723];
  D839():
    deopt 3241 [db35, r1813, db36];
  L445(r1715):
    c698 = `as.logical`(r1715);
    if c698 then L2445() else L446();
  L471():
    goto L472(NULL);
  L472(bad98):
    goto L473();
  L478():
    package_version3 = ldf package_version;
    check L2624() else D862();
  L2434(r1707, dx449):
    st out = dx449;
    goto L444(r1707);
  L2435():
    dr390 = tryDispatchBuiltin.0("$<-", l256, r1703);
    dc195 = getTryDispatchBuiltinDispatched(dr390);
    if dc195 then L2437() else L2436(r1703, dr390);
  L2436(r1705, l258):
    r1708 = `$<-`(l258, <sym additional_repositories_analysis_failed_with>, r1703);
    goto L2434(r1705, r1708);
  L2441():
    ind37 = ld ind;
    check L2443() else D776();
  L2442():
    r1714 = dyn base145(<sym ind>);
    goto L445(r1714);
  L2546():
    goto L469(r1809);
  L2548():
    p410 = prom<V +>{
      bad90 = ld bad;
      bad91 = force? bad90;
      checkMissing(bad91);
      return bad91;
    };
    r1811 = dyn NROW7(p410);
    check L2549() else D834();
  L2551():
    bad92 = ld bad;
    check L2552() else D835();
  L2565():
    db37 = force? db36;
    checkMissing(db37);
    c732 = `is.object`(db37);
    if c732 then L2566() else L2567(db35, r1813);
  L2579():
    _in_2 = ldf `%in%`;
    check L2580() else D845();
  D776():
    deopt 3027 [ind37];
  D834():
    deopt 3225 [c723, r1811];
  D835():
    deopt 3227 [bad92];
  D845():
    deopt 3272 [];
  D862():
    deopt 3344 [];
  L446():
    goto L448();
  L448():
    do_call1 = ldf `do.call`;
    check L2456() else D780();
  L475(db43, r1817, dx481):
    CRAN4 = ld CRAN;
    check L2569() else D840();
  L2437():
    dx448 = getTryDispatchBuiltinValue(dr390);
    goto L2434(r1703, dx448);
  L2443():
    ind38 = force? ind37;
    checkMissing(ind38);
    any12 = ldf any in base;
    r1716 = dyn any12(ind38);
    check L2444() else D777();
  L2445():
    aurls4 = ld aurls;
    check L2446() else D778();
  L2549():
    c726 = `as.logical`(r1811);
    c727 = `||`(c723, c726);
    goto L470(c727);
  L2552():
    bad93 = force? bad92;
    checkMissing(bad93);
    l270 = ld out;
    c730 = `is.object`(l270);
    if c730 then L2554() else L2555(bad93, l270);
  L2566():
    dr416 = tryDispatchBuiltin.1("[", db37);
    dc208 = getTryDispatchBuiltinDispatched(dr416);
    if dc208 then L2568() else L2567(db35, r1813);
  L2567(db40, r1815):
    __98 = ldf `[` in base;
    r1818 = dyn __98(db37, <missing>, "Repository");
    goto L475(db40, r1815, r1818);
  L2580():
    p412 = prom<V +>{
      package34 = ld package;
      package35 = force? package34;
      checkMissing(package35);
      return package35;
    };
    p413 = prom<V +>{
      packages_in_CRAN_archive10 = ld packages_in_CRAN_archive;
      packages_in_CRAN_archive11 = force? packages_in_CRAN_archive10;
      checkMissing(packages_in_CRAN_archive11);
      return packages_in_CRAN_archive11;
    };
    r1839 = dyn _in_2(p412, p413);
    check L2581() else D846();
  L2624():
    p419 = prom<V +>{
      meta188 = ld meta;
      meta189 = force? meta188;
      checkMissing(meta189);
      c744 = `is.object`(meta189);
      if c744 then L1() else L2(meta189);
    L0(dx502):
      return dx502;
    L1():
      dr432 = tryDispatchBuiltin.1("[", meta189);
      dc216 = getTryDispatchBuiltinDispatched(dr432);
      if dc216 then L3() else L2(dr432);
    L2(meta191):
      __104 = ldf `[` in base;
      r1876 = dyn __104(meta191, "Version");
      goto L0(r1876);
    L3():
      dx501 = getTryDispatchBuiltinValue(dr432);
      goto L0(dx501);
    };
    r1878 = dyn package_version3(p419);
    check L2625() else D863();
  D777():
    deopt 3030 [r1716];
  D778():
    deopt 3031 [aurls4];
  D780():
    deopt 3042 [];
  D840():
    deopt 3246 [db43, r1817, dx481, CRAN4];
  D846():
    deopt 3275 [r1839];
  D863():
    deopt 3346 [r1878];
  L2444():
    goto L445(r1716);
  L2446():
    aurls5 = force? aurls4;
    checkMissing(aurls5);
    c699 = `is.object`(aurls5);
    if c699 then L2447() else L2448(aurls5);
  L2456():
    p385 = prom<V +>{
      rbind4 = ld rbind;
      rbind5 = force? rbind4;
      checkMissing(rbind5);
      return rbind5;
    };
    p386 = prom<V +>{
      adb6 = ld adb;
      adb7 = force? adb6;
      checkMissing(adb7);
      return adb7;
    };
    r1721 = dyn do_call1(p385, p386);
    check L2457() else D781();
  L2553(bad97, dx477):
    st out = dx477;
    goto L472(bad97);
  L2554():
    dr412 = tryDispatchBuiltin.0("$<-", l270, bad93);
    dc206 = getTryDispatchBuiltinDispatched(dr412);
    if dc206 then L2556() else L2555(bad93, dr412);
  L2555(bad95, l272):
    r1812 = `$<-`(l272, <sym bad_dois>, bad93);
    goto L2553(bad95, r1812);
  L2568():
    dx480 = getTryDispatchBuiltinValue(dr416);
    goto L475(db35, r1813, dx480);
  L2569():
    CRAN5 = force? CRAN4;
    checkMissing(CRAN5);
    r1819 = `==`(dx481, CRAN5);
    r1820 = `&&`(r1817, r1819);
    sym154 = ldf `is.na`;
    base154 = ldf `is.na` in base;
    guard154 = `==`.4(sym154, base154);
    if guard154 then L2570() else L2571();
  L2581():
    c735 = `as.logical`(r1839);
    if c735 then L2582() else L479();
  L2625():
    st v_m = r1878;
    sym157 = ldf max;
    base157 = ldf max in base;
    guard157 = `==`.4(sym157, base157);
    if guard157 then L2626() else L2627();
  D781():
    deopt 3045 [r1721];
  L447(dx451):
    l259 = ld out;
    c700 = `is.object`(l259);
    if c700 then L2452() else L2453(dx451, l259);
  L476(r1824, r1825):
    r1832 = `&&`(r1824, r1825);
    __100 = ldf `[` in base;
    r1833 = dyn __100(db33, r1832, <missing>, FALSE);
    goto L474(r1833);
  L479():
    goto L484();
  L484():
    foss4 = ld foss;
    check L2610() else D859();
  L489(r1880):
    st v_d = r1880;
    v_m4 = ld v_m;
    check L2631() else D867();
  L2447():
    dr392 = tryDispatchBuiltin.1("[", aurls5);
    dc196 = getTryDispatchBuiltinDispatched(dr392);
    if dc196 then L2449() else L2448(dr392);
  L2448(aurls7):
    ind39 = ld ind;
    check L2450() else D779();
  L2457():
    st adb = r1721;
    ___12 = ldf `:::`;
    check L2458() else D782();
  L2556():
    dx476 = getTryDispatchBuiltinValue(dr412);
    goto L2553(bad93, dx476);
  L2570():
    db47 = ld db;
    check L2572() else D841();
  L2571():
    r1823 = dyn base154(<lang `[`(db, , "Path")>);
    goto L476(r1820, r1823);
  L2582():
    l273 = ld out;
    c736 = `is.object`(l273);
    if c736 then L2584() else L2585(TRUE, l273);
  L2626():
    package_version4 = ldf package_version;
    check L2628() else D864();
  L2627():
    r1879 = dyn base157(<lang package_version(`[`(db, , "Version"))>);
    goto L489(r1879);
  D779():
    deopt 3033 [aurls7, ind39];
  D782():
    deopt 3048 [];
  D841():
    deopt 3251 [db43, r1820, db47];
  D859():
    deopt 3325 [foss4];
  D864():
    deopt 3351 [];
  D867():
    deopt 3357 [v_m4];
  L2449():
    dx450 = getTryDispatchBuiltinValue(dr392);
    goto L447(dx450);
  L2450():
    ind40 = force? ind39;
    __91 = ldf `[` in base;
    r1717 = dyn __91(aurls7, ind40);
    goto L447(r1717);
  L2451(dx456, dx457):
    st out = dx457;
    goto L448();
  L2452():
    dr394 = tryDispatchBuiltin.0("$<-", l259, dx451);
    dc197 = getTryDispatchBuiltinDispatched(dr394);
    if dc197 then L2454() else L2453(dx451, dr394);
  L2453(dx453, l261):
    r1718 = `$<-`(l261, <sym additional_repositories_with_no_packages>, dx451);
    goto L2451(dx453, r1718);
  L2458():
    r1722 = dyn ___12("utils", "available_packages_filters_db");
    check L2459() else D783();
  L2572():
    db48 = force? db47;
    checkMissing(db48);
    c733 = `is.object`(db48);
    if c733 then L2573() else L2574(db43, r1820);
  L2583(dx485):
    st out = dx485;
    package_version1 = ldf package_version;
    check L2587() else D847();
  L2584():
    dr420 = tryDispatchBuiltin.0("$<-", l273, TRUE);
    dc210 = getTryDispatchBuiltinDispatched(dr420);
    if dc210 then L2586() else L2585(TRUE, dr420);
  L2585(r1841, l275):
    r1844 = `$<-`(l275, <sym CRAN_archive>, TRUE);
    goto L2583(r1844);
  L2610():
    foss5 = force? foss4;
    checkMissing(foss5);
    r1871 = `!`(foss5);
    c741 = `as.logical`(r1871);
    if c741 then L2611() else L485();
  L2628():
    p420 = prom<V +>{
      db57 = ld db;
      db58 = force? db57;
      checkMissing(db58);
      c745 = `is.object`(db58);
      if c745 then L1() else L2();
    L0(dx504):
      return dx504;
    L1():
      dr434 = tryDispatchBuiltin.1("[", db58);
      dc217 = getTryDispatchBuiltinDispatched(dr434);
      if dc217 then L3() else L2();
    L2():
      __105 = ldf `[` in base;
      r1881 = dyn __105(db58, <missing>, "Version");
      goto L0(r1881);
    L3():
      dx503 = getTryDispatchBuiltinValue(dr434);
      goto L0(dx503);
    };
    r1883 = dyn package_version4(p420);
    check L2629() else D865();
  L2631():
    v_m5 = force? v_m4;
    checkMissing(v_m5);
    v_d = ld v_d;
    check L2632() else D868();
  D783():
    deopt 3051 [r1722];
  D847():
    deopt 3282 [];
  D865():
    deopt 3353 [r1883];
  D868():
    deopt 3358 [v_m5, v_d];
  L477(db54, r1829, dx483):
    is_na28 = ldf `is.na` in base;
    r1831 = dyn is_na28(dx483);
    check L2576() else D842();
  L485():
    goto L487();
  L487():
    out16 = ld out;
    check L2621() else D861();
  L2454():
    dx455 = getTryDispatchBuiltinValue(dr394);
    goto L2451(dx451, dx455);
  L2459():
    c701 = `is.object`(r1722);
    if c701 then L2461() else L2462(r1722);
  L2573():
    dr418 = tryDispatchBuiltin.1("[", db48);
    dc209 = getTryDispatchBuiltinDispatched(dr418);
    if dc209 then L2575() else L2574(db43, r1820);
  L2574(db51, r1827):
    __99 = ldf `[` in base;
    r1830 = dyn __99(db48, <missing>, "Path");
    goto L477(db51, r1827, r1830);
  L2586():
    dx484 = getTryDispatchBuiltinValue(dr420);
    goto L2583(dx484);
  L2587():
    p414 = prom<V +>{
      meta180 = ld meta;
      meta181 = force? meta180;
      checkMissing(meta181);
      c737 = `is.object`(meta181);
      if c737 then L1() else L2(meta181);
    L0(dx487):
      return dx487;
    L1():
      dr422 = tryDispatchBuiltin.1("[", meta181);
      dc211 = getTryDispatchBuiltinDispatched(dr422);
      if dc211 then L3() else L2(dr422);
    L2(meta183):
      __101 = ldf `[` in base;
      r1845 = dyn __101(meta183, "Version");
      goto L0(r1845);
    L3():
      dx486 = getTryDispatchBuiltinValue(dr422);
      goto L0(dx486);
    };
    r1847 = dyn package_version1(p414);
    check L2588() else D848();
  L2611():
    meta184 = ld meta;
    check L2612() else D860();
  L2629():
    max1 = ldf max in base;
    r1884 = dyn max1(r1883);
    check L2630() else D866();
  L2632():
    v_d1 = force? v_d;
    checkMissing(v_d1);
    r1885 = `<=`(v_m5, v_d1);
    c746 = `as.logical`(r1885);
    if c746 then L2633() else L490(c746);
  D842():
    deopt 3258 [db54, r1829, r1831];
  D848():
    deopt 3284 [r1847];
  D860():
    deopt 3328 [meta184];
  D861():
    deopt 3338 [out16];
  D866():
    deopt 3355 [r1884];
  L490(c748):
    c752 = `as.logical`(c748);
    if c752 then L2637() else L491();
  L2460(dx460):
    checkFun.0(dx460);
    dx461 = dx460 as cls;
    p387 = prom<V +>{
      adb8 = ld adb;
      adb9 = force? adb8;
      checkMissing(adb9);
      return adb9;
    };
    r1727 = dyn dx461(p387);
    check L2464() else D784();
  L2461():
    dr396 = tryDispatchBuiltin.1("$", r1722);
    dc198 = getTryDispatchBuiltinDispatched(dr396);
    if dc198 then L2463() else L2462(dr396);
  L2462(r1724):
    r1725 = `$`(r1724, <sym duplicates>);
    goto L2460(r1725);
  L2575():
    dx482 = getTryDispatchBuiltinValue(dr418);
    goto L477(db43, r1820, dx482);
  L2576():
    goto L476(r1829, r1831);
  L2588():
    st v_m = r1847;
    sub3 = ldf sub;
    check L2589() else D849();
  L2612():
    meta185 = force? meta184;
    checkMissing(meta185);
    c742 = `is.object`(meta185);
    if c742 then L2613() else L2614(meta185);
  L2621():
    out17 = force? out16;
    checkMissing(out17);
    popenv;
    return out17;
  L2630():
    goto L489(r1884);
  L2633():
    config_val_to_logical8 = ldf config_val_to_logical;
    check L2634() else D869();
  D784():
    deopt 3055 [r1727];
  D849():
    deopt 3287 [];
  D869():
    deopt 3362 [c746];
  L486(dx493):
    l279 = ld out;
    c743 = `is.object`(l279);
    if c743 then L2617() else L2618(dx493, l279);
  L491():
    goto L493();
  L493():
    v_m8 = ld v_m;
    check L2648() else D874();
  L2463():
    dx459 = getTryDispatchBuiltinValue(dr396);
    goto L2460(dx459);
  L2464():
    st adb = r1727;
    unique5 = ldf unique;
    check L2465() else D785();
  L2589():
    p417 = prom<V +>{
      basename4 = ldf basename;
      p416 = prom<V +>{
        rownames4 = ldf rownames;
        p415 = prom<V +>{
          archive_db2 = ld archive_db;
          archive_db3 = force? archive_db2;
          checkMissing(archive_db3);
          c738 = `is.object`(archive_db3);
          if c738 then L1() else L2(archive_db3);
        L0(dx489):
          return dx489;
        L1():
          dr424 = tryDispatchBuiltin.1("[[", archive_db3);
          dc212 = getTryDispatchBuiltinDispatched(dr424);
          if dc212 then L3() else L2(dr424);
        L2(archive_db5):
          package36 = ld package;
          package37 = force? package36;
          __102 = ldf `[[` in base;
          r1848 = dyn __102(archive_db5, package37);
          goto L0(r1848);
        L3():
          dx488 = getTryDispatchBuiltinValue(dr424);
          goto L0(dx488);
        };
        r1850 = dyn rownames4(p415);
        return r1850;
      };
      r1852 = dyn basename4(p416);
      return r1852;
    };
    r1854 = dyn sub3("^.*_(.*)\\.tar.gz$", "\\1", p417);
    check L2590() else D850();
  L2613():
    dr428 = tryDispatchBuiltin.1("[", meta185);
    dc214 = getTryDispatchBuiltinDispatched(dr428);
    if dc214 then L2615() else L2614(dr428);
  L2614(meta187):
    __103 = ldf `[` in base;
    r1872 = dyn __103(meta187, "License");
    goto L486(r1872);
  L2634():
    p421 = prom<V +>{
      Sys_getenv9 = ldf `Sys.getenv`;
      r1886 = dyn Sys_getenv9("_R_CHECK_CRAN_INCOMING_SKIP_VERSIONS_", "FALSE");
      return r1886;
    };
    r1888 = dyn config_val_to_logical8(p421);
    check L2635() else D870();
  L2637():
    sym158 = ldf list;
    base158 = ldf list in base;
    guard158 = `==`.4(sym158, base158);
    if guard158 then L2638() else L2639();
  D785():
    deopt 3058 [];
  D850():
    deopt 3291 [r1854];
  D870():
    deopt 3364 [c746, r1888];
  D874():
    deopt 3380 [v_m8];
  L492(r1891):
    l282 = ld out;
    c753 = `is.object`(l282);
    if c753 then L2644() else L2645(r1891, l282);
  L2465():
    p388 = prom<V +>{
      sym146 = ldf c;
      base146 = ldf c in base;
      guard146 = `==`.4(sym146, base146);
      if guard146 then L1() else L2();
    L0(r1729):
      return r1729;
    L1():
      strong_dependencies9 = ld strong_dependencies;
      strong_dependencies10 = force? strong_dependencies9;
      checkMissing(strong_dependencies10);
      suggests_or_enhances9 = ld suggests_or_enhances;
      suggests_or_enhances10 = force? suggests_or_enhances9;
      checkMissing(suggests_or_enhances10);
      c702 = ldf c in base;
      r1730 = dyn c702(strong_dependencies10, suggests_or_enhances10);
      goto L0(r1730);
    L2():
      r1728 = dyn base146(<sym strong_dependencies>, <sym suggests_or_enhances>);
      goto L0(r1728);
    };
    r1732 = dyn unique5(p388);
    check L2466() else D786();
  L2590():
    st v_a = r1854;
    sym155 = ldf max;
    base155 = ldf max in base;
    guard155 = `==`.4(sym155, base155);
    if guard155 then L2591() else L2592();
  L2615():
    dx492 = getTryDispatchBuiltinValue(dr428);
    goto L486(dx492);
  L2616(dx498, dx499):
    st out = dx499;
    goto L487();
  L2617():
    dr430 = tryDispatchBuiltin.0("$<-", l279, dx493);
    dc215 = getTryDispatchBuiltinDispatched(dr430);
    if dc215 then L2619() else L2618(dx493, dr430);
  L2618(dx495, l281):
    r1873 = `$<-`(l281, <sym bad_license>, dx493);
    goto L2616(dx495, r1873);
  L2635():
    r1889 = `!`(r1888);
    c749 = `as.logical`(r1889);
    c750 = `&&`(c746, c749);
    goto L490(c750);
  L2638():
    v_m6 = ld v_m;
    check L2640() else D871();
  L2639():
    r1890 = dyn base158(<sym v_m>, <sym v_d>);
    goto L492(r1890);
  L2648():
    v_m9 = force? v_m8;
    checkMissing(v_m9);
    c754 = `is.object`(v_m9);
    if c754 then L2650() else L2651(v_m9);
  D786():
    deopt 3060 [r1732];
  D871():
    deopt 3369 [v_m6];
  L480(r1856):
    st v_a = r1856;
    v_m = ld v_m;
    check L2596() else D854();
  L2466():
    st dependencies = r1732;
    sym147 = ldf match;
    base147 = ldf match in base;
    guard147 = `==`.4(sym147, base147);
    if guard147 then L2467() else L2468();
  L2591():
    package_version2 = ldf package_version;
    check L2593() else D851();
  L2592():
    r1855 = dyn base155[, `na.rm`](<lang package_version(v_a, strict=FALSE)>, TRUE);
    goto L480(r1855);
  L2619():
    dx497 = getTryDispatchBuiltinValue(dr430);
    goto L2616(dx493, dx497);
  L2640():
    v_m7 = force? v_m6;
    checkMissing(v_m7);
    v_d2 = ld v_d;
    check L2641() else D872();
  L2643(r1896, dx506):
    st out = dx506;
    goto L493();
  L2644():
    dr436 = tryDispatchBuiltin.0("$<-", l282, r1891);
    dc218 = getTryDispatchBuiltinDispatched(dr436);
    if dc218 then L2646() else L2645(r1891, dr436);
  L2645(r1894, l284):
    r1897 = `$<-`(l284, <sym bad_version>, r1891);
    goto L2643(r1894, r1897);
  L2649(dx508):
    v_d4 = ld v_d;
    check L2653() else D875();
  L2650():
    dr438 = tryDispatchBuiltin.1("$", v_m9);
    dc219 = getTryDispatchBuiltinDispatched(dr438);
    if dc219 then L2652() else L2651(dr438);
  L2651(v_m11):
    r1899 = `$`(v_m11, <sym major>);
    goto L2649(r1899);
  D851():
    deopt 3296 [];
  D854():
    deopt 3306 [v_m];
  D872():
    deopt 3371 [v_d2];
  D875():
    deopt 3382 [dx508, v_d4];
  L449(r1734):
    st pos = r1734;
    pos32 = ld pos;
    check L2473() else D791();
  L2467():
    dependencies = ld dependencies;
    check L2469() else D787();
  L2468():
    r1733 = dyn base147[, , nomatch](<sym dependencies>, <lang rownames(adb)>, 0);
    goto L449(r1733);
  L2593():
    p418 = prom<V +>{
      v_a = ld v_a;
      v_a1 = force? v_a;
      checkMissing(v_a1);
      return v_a1;
    };
    r1858 = dyn package_version2[, strict](p418, FALSE);
    check L2594() else D852();
  L2596():
    v_m1 = force? v_m;
    checkMissing(v_m1);
    v_a2 = ld v_a;
    check L2597() else D855();
  L2641():
    v_d3 = force? v_d2;
    checkMissing(v_d3);
    list3 = ldf list in base;
    r1892 = dyn list3(v_m7, v_d3);
    check L2642() else D873();
  L2646():
    dx505 = getTryDispatchBuiltinValue(dr436);
    goto L2643(r1891, dx505);
  L2652():
    dx507 = getTryDispatchBuiltinValue(dr438);
    goto L2649(dx507);
  L2653():
    v_d5 = force? v_d4;
    checkMissing(v_d5);
    c755 = `is.object`(v_d5);
    if c755 then L2655() else L2656(dx508, v_d5);
  D787():
    deopt 3064 [dependencies];
  D791():
    deopt 3075 [pos32];
  D852():
    deopt 3300 [r1858];
  D855():
    deopt 3307 [v_m1, v_a2];
  D873():
    deopt 3374 [r1892];
  L2469():
    dependencies1 = force? dependencies;
    checkMissing(dependencies1);
    rownames3 = ldf rownames;
    check L2470() else D788();
  L2473():
    pos33 = force? pos32;
    checkMissing(pos33);
    r1738 = `>`(pos33, 0);
    st ind = r1738;
    matrix = ldf matrix;
    check L2474() else D792();
  L2594():
    max = ldf max in base;
    r1859 = dyn max(r1858, TRUE);
    check L2595() else D853();
  L2597():
    v_a3 = force? v_a2;
    checkMissing(v_a3);
    r1860 = `<=`(v_m1, v_a3);
    c739 = `as.logical`(r1860);
    if c739 then L2598() else L481();
  L2642():
    goto L492(r1892);
  L2654(dx513, dx514):
    r1901 = `==`(dx513, dx514);
    c756 = `as.logical`(r1901);
    if c756 then L2658() else L494(c756);
  L2655():
    dr440 = tryDispatchBuiltin.1("$", v_d5);
    dc220 = getTryDispatchBuiltinDispatched(dr440);
    if dc220 then L2657() else L2656(dx508, dr440);
  L2656(dx510, v_d7):
    r1900 = `$`(v_d7, <sym major>);
    goto L2654(dx510, r1900);
  D788():
    deopt 3067 [];
  D792():
    deopt 3081 [];
  D853():
    deopt 3304 [r1859];
  L481():
    goto L483(NULL);
  L483(r1869):
    goto L484();
  L494(c758):
    c772 = `as.logical`(c758);
    if c772 then L2670() else L495();
  L2470():
    p389 = prom<V +>{
      adb10 = ld adb;
      adb11 = force? adb10;
      checkMissing(adb11);
      return adb11;
    };
    r1736 = dyn rownames3(p389);
    check L2471() else D789();
  L2474():
    p390 = prom<V +>{
      character3 = ldf character;
      r1739 = dyn character3();
      return r1739;
    };
    r1741 = dyn matrix[, nrow, ncol](p390, 0, 3);
    check L2475() else D793();
  L2595():
    goto L480(r1859);
  L2598():
    sym156 = ldf list;
    base156 = ldf list in base;
    guard156 = `==`.4(sym156, base156);
    if guard156 then L2599() else L2600();
  L2657():
    dx512 = getTryDispatchBuiltinValue(dr440);
    goto L2654(dx508, dx512);
  L2658():
    v_m12 = ld v_m;
    check L2659() else D876();
  D789():
    deopt 3069 [r1736];
  D793():
    deopt 3087 [r1741];
  D876():
    deopt 3386 [c756, v_m12];
  L482(r1862):
    l276 = ld out;
    c740 = `is.object`(l276);
    if c740 then L2605() else L2606(r1862, l276);
  L495():
    goto L497();
  L497():
    CRAN_current_db = ldf CRAN_current_db;
    check L2681() else D881();
  L2471():
    match1 = ldf match in base;
    r1737 = dyn match1(dependencies1, r1736, 0, NULL);
    check L2472() else D790();
  L2475():
    st tab = r1741;
    sym148 = ldf any;
    base148 = ldf any in base;
    guard148 = `==`.4(sym148, base148);
    if guard148 then L2476() else L2477();
  L2599():
    v_m2 = ld v_m;
    check L2601() else D856();
  L2600():
    r1861 = dyn base156(<sym v_m>, <sym v_a>);
    goto L482(r1861);
  L2659():
    v_m13 = force? v_m12;
    checkMissing(v_m13);
    c759 = `is.object`(v_m13);
    if c759 then L2661() else L2662(c756, v_m13);
  L2670():
    sym159 = ldf list;
    base159 = ldf list in base;
    guard159 = `==`.4(sym159, base159);
    if guard159 then L2671() else L2672();
  D790():
    deopt 3073 [r1737];
  D856():
    deopt 3312 [v_m2];
  D881():
    deopt 3409 [];
  L450(r1743):
    c703 = `as.logical`(r1743);
    if c703 then L2480() else L451();
  L496(r1907):
    l285 = ld out;
    c773 = `is.object`(l285);
    if c773 then L2677() else L2678(r1907, l285);
  L2472():
    goto L449(r1737);
  L2476():
    ind41 = ld ind;
    check L2478() else D794();
  L2477():
    r1742 = dyn base148(<sym ind>);
    goto L450(r1742);
  L2601():
    v_m3 = force? v_m2;
    checkMissing(v_m3);
    v_a4 = ld v_a;
    check L2602() else D857();
  L2604(r1867, dx491):
    st out = dx491;
    goto L483(r1867);
  L2605():
    dr426 = tryDispatchBuiltin.0("$<-", l276, r1862);
    dc213 = getTryDispatchBuiltinDispatched(dr426);
    if dc213 then L2607() else L2606(r1862, dr426);
  L2606(r1865, l278):
    r1868 = `$<-`(l278, <sym bad_version>, r1862);
    goto L2604(r1865, r1868);
  L2660(c763, dx516):
    v_d8 = ld v_d;
    check L2664() else D877();
  L2661():
    dr442 = tryDispatchBuiltin.1("$", v_m13);
    dc221 = getTryDispatchBuiltinDispatched(dr442);
    if dc221 then L2663() else L2662(c756, dr442);
  L2662(c761, v_m15):
    r1902 = `$`(v_m15, <sym minor>);
    goto L2660(c761, r1902);
  L2671():
    v_m16 = ld v_m;
    check L2673() else D878();
  L2672():
    r1906 = dyn base159(<sym v_m>, <sym v_d>);
    goto L496(r1906);
  L2681():
    r1915 = dyn CRAN_current_db();
    check L2682() else D882();
  D794():
    deopt 3091 [ind41];
  D857():
    deopt 3314 [v_a4];
  D877():
    deopt 3388 [c763, dx516, v_d8];
  D878():
    deopt 3397 [v_m16];
  D882():
    deopt 3410 [r1915];
  L451():
    goto L452();
  L452():
    ind47 = ld ind;
    check L2484() else D798();
  L2478():
    ind42 = force? ind41;
    checkMissing(ind42);
    any13 = ldf any in base;
    r1744 = dyn any13(ind42);
    check L2479() else D795();
  L2480():
    rbind6 = ldf rbind;
    check L2481() else D796();
  L2602():
    v_a5 = force? v_a4;
    checkMissing(v_a5);
    list2 = ldf list in base;
    r1863 = dyn list2(v_m3, v_a5);
    check L2603() else D858();
  L2607():
    dx490 = getTryDispatchBuiltinValue(dr426);
    goto L2604(r1862, dx490);
  L2663():
    dx515 = getTryDispatchBuiltinValue(dr442);
    goto L2660(c756, dx515);
  L2664():
    v_d9 = force? v_d8;
    checkMissing(v_d9);
    c764 = `is.object`(v_d9);
    if c764 then L2666() else L2667(c763, dx516, v_d9);
  L2673():
    v_m17 = force? v_m16;
    checkMissing(v_m17);
    v_d12 = ld v_d;
    check L2674() else D879();
  L2676(r1912, dx524):
    st out = dx524;
    goto L497();
  L2677():
    dr446 = tryDispatchBuiltin.0("$<-", l285, r1907);
    dc223 = getTryDispatchBuiltinDispatched(dr446);
    if dc223 then L2679() else L2678(r1907, dr446);
  L2678(r1910, l287):
    r1913 = `$<-`(l287, <sym version_with_jump_in_minor>, r1907);
    goto L2676(r1910, r1913);
  L2682():
    st current_db = r1915;
    sym160 = ldf c;
    base160 = ldf c in base;
    guard160 = `==`.4(sym160, base160);
    if guard160 then L2683() else L2684();
  D795():
    deopt 3094 [r1744];
  D796():
    deopt 3096 [];
  D798():
    deopt 3103 [ind47];
  D858():
    deopt 3317 [r1863];
  D879():
    deopt 3399 [v_d12];
  L498(r1917):
    st mtimes = r1917;
    sym162 = ldf length;
    base162 = ldf length in base;
    guard162 = `==`.4(sym162, base162);
    if guard162 then L2705() else L2706();
  L2479():
    goto L450(r1744);
  L2481():
    p391 = prom<V +>{
      tab = ld tab;
      tab1 = force? tab;
      checkMissing(tab1);
      return tab1;
    };
    p394 = prom<V +>{
      cbind1 = ldf cbind;
      p392 = prom<V +>{
        dependencies2 = ld dependencies;
        dependencies3 = force? dependencies2;
        checkMissing(dependencies3);
        c704 = `is.object`(dependencies3);
        if c704 then L1() else L2(dependencies3);
      L0(dx463):
        return dx463;
      L1():
        dr398 = tryDispatchBuiltin.1("[", dependencies3);
        dc199 = getTryDispatchBuiltinDispatched(dr398);
        if dc199 then L3() else L2(dr398);
      L2(dependencies5):
        ind43 = ld ind;
        ind44 = force? ind43;
        __92 = ldf `[` in base;
        r1746 = dyn __92(dependencies5, ind44);
        goto L0(r1746);
      L3():
        dx462 = getTryDispatchBuiltinValue(dr398);
        goto L0(dx462);
      };
      p393 = prom<V +>{
        adb12 = ld adb;
        adb13 = force? adb12;
        checkMissing(adb13);
        c705 = `is.object`(adb13);
        if c705 then L2() else L3(adb13);
      L0(dx465):
        return dx465;
      L2():
        dr400 = tryDispatchBuiltin.1("[", adb13);
        dc200 = getTryDispatchBuiltinDispatched(dr400);
        if dc200 then L4() else L3(dr400);
      L3(adb15):
        pos34 = ld pos;
        pos35 = force? pos34;
        checkMissing(pos35);
        c706 = `is.object`(pos35);
        if c706 then L5() else L6(adb15, pos35);
      L1(adb19, dx467):
        __94 = ldf `[` in base;
        r1749 = dyn __94(adb19, dx467, "Repository");
        goto L0(r1749);
      L4():
        dx464 = getTryDispatchBuiltinValue(dr400);
        goto L0(dx464);
      L5():
        dr402 = tryDispatchBuiltin.1("[", pos35);
        dc201 = getTryDispatchBuiltinDispatched(dr402);
        if dc201 then L7() else L6(adb15, dr402);
      L6(adb17, pos37):
        ind45 = ld ind;
        ind46 = force? ind45;
        __93 = ldf `[` in base;
        r1748 = dyn __93(pos37, ind46);
        goto L1(adb17, r1748);
      L7():
        dx466 = getTryDispatchBuiltinValue(dr402);
        goto L1(adb15, dx466);
      };
      r1751 = dyn cbind1(p392, "yes", p393);
      return r1751;
    };
    r1753 = dyn rbind6(p391, p394);
    check L2482() else D797();
  L2484():
    ind48 = force? ind47;
    checkMissing(ind48);
    r1755 = `!`(ind48);
    st ind = r1755;
    sym149 = ldf any;
    base149 = ldf any in base;
    guard149 = `==`.4(sym149, base149);
    if guard149 then L2485() else L2486();
  L2603():
    goto L482(r1863);
  L2665(c768, dx521, dx522):
    r1904 = `+`(dx522, 10.0);
    r1905 = `>=`(dx521, r1904);
    c769 = `as.logical`(r1905);
    c770 = `&&`(c768, c769);
    goto L494(c770);
  L2666():
    dr444 = tryDispatchBuiltin.1("$", v_d9);
    dc222 = getTryDispatchBuiltinDispatched(dr444);
    if dc222 then L2668() else L2667(c763, dx516, dr444);
  L2667(c766, dx518, v_d11):
    r1903 = `$`(v_d11, <sym minor>);
    goto L2665(c766, dx518, r1903);
  L2674():
    v_d13 = force? v_d12;
    checkMissing(v_d13);
    list4 = ldf list in base;
    r1908 = dyn list4(v_m17, v_d13);
    check L2675() else D880();
  L2679():
    dx523 = getTryDispatchBuiltinValue(dr446);
    goto L2676(r1907, dx523);
  L2683():
    current_db = ld current_db;
    check L2685() else D883();
  L2684():
    r1916 = dyn base160(<lang `[`(current_db, match(package, sub("_.*", "", rownames(current_db)), nomatch=0), "mtime")>, <lang `$`(`[[`(archive_db, package), mtime)>);
    goto L498(r1916);
  D797():
    deopt 3099 [r1753];
  D880():
    deopt 3402 [r1908];
  D883():
    deopt 3414 [current_db];
  L453(r1757):
    c707 = `as.logical`(r1757);
    if c707 then L2489() else L454();
  L502(r1930):
    c778 = `as.logical`(r1930);
    if c778 then L2709() else L503();
  L2482():
    st tab = r1753;
    goto L452();
  L2485():
    ind49 = ld ind;
    check L2487() else D799();
  L2486():
    r1756 = dyn base149(<sym ind>);
    goto L453(r1756);
  L2668():
    dx520 = getTryDispatchBuiltinValue(dr444);
    goto L2665(c763, dx516, dx520);
  L2675():
    goto L496(r1908);
  L2685():
    current_db1 = force? current_db;
    checkMissing(current_db1);
    c774 = `is.object`(current_db1);
    if c774 then L2686() else L2687(current_db1);
  L2705():
    mtimes = ld mtimes;
    check L2707() else D891();
  L2706():
    r1929 = dyn base162(<sym mtimes>);
    goto L502(r1929);
  D799():
    deopt 3109 [ind49];
  D891():
    deopt 3443 [mtimes];
  L454():
    goto L455();
  L455():
    character4 = ldf character;
    check L2493() else D803();
  L499(dx526):
    archive_db6 = ld archive_db;
    check L2695() else D888();
  L503():
    goto L511();
  L511():
    tryCatch9 = ldf tryCatch;
    check L2742() else D905();
  L2487():
    ind50 = force? ind49;
    checkMissing(ind50);
    any14 = ldf any in base;
    r1758 = dyn any14(ind50);
    check L2488() else D800();
  L2489():
    rbind7 = ldf rbind;
    check L2490() else D801();
  L2686():
    dr448 = tryDispatchBuiltin.1("[", current_db1);
    dc224 = getTryDispatchBuiltinDispatched(dr448);
    if dc224 then L2688() else L2687(dr448);
  L2687(current_db3):
    sym161 = ldf match;
    base161 = ldf match in base;
    guard161 = `==`.4(sym161, base161);
    if guard161 then L2689() else L2690();
  L2707():
    mtimes1 = force? mtimes;
    checkMissing(mtimes1);
    length51 = ldf length in base;
    r1931 = dyn length51(mtimes1);
    check L2708() else D892();
  L2709():
    Sys_Date3 = ldf `Sys.Date`;
    check L2710() else D893();
  D800():
    deopt 3112 [r1758];
  D801():
    deopt 3114 [];
  D803():
    deopt 3122 [];
  D888():
    deopt 3432 [archive_db6];
  D892():
    deopt 3446 [r1931];
  D893():
    deopt 3448 [];
  D905():
    deopt 3499 [];
  L500(current_db6, r1919):
    __106 = ldf `[` in base;
    r1925 = dyn __106(current_db6, r1919, "mtime");
    goto L499(r1925);
  L2488():
    goto L453(r1758);
  L2490():
    p395 = prom<V +>{
      tab2 = ld tab;
      tab3 = force? tab2;
      checkMissing(tab3);
      return tab3;
    };
    p397 = prom<V +>{
      cbind2 = ldf cbind;
      p396 = prom<V +>{
        dependencies6 = ld dependencies;
        dependencies7 = force? dependencies6;
        checkMissing(dependencies7);
        c708 = `is.object`(dependencies7);
        if c708 then L1() else L2(dependencies7);
      L0(dx469):
        return dx469;
      L1():
        dr404 = tryDispatchBuiltin.1("[", dependencies7);
        dc202 = getTryDispatchBuiltinDispatched(dr404);
        if dc202 then L3() else L2(dr404);
      L2(dependencies9):
        ind51 = ld ind;
        ind52 = force? ind51;
        __95 = ldf `[` in base;
        r1760 = dyn __95(dependencies9, ind52);
        goto L0(r1760);
      L3():
        dx468 = getTryDispatchBuiltinValue(dr404);
        goto L0(dx468);
      };
      r1762 = dyn cbind2(p396, "no", "?");
      return r1762;
    };
    r1764 = dyn rbind7(p395, p397);
    check L2491() else D802();
  L2493():
    r1766 = dyn character4();
    check L2494() else D804();
  L2688():
    dx525 = getTryDispatchBuiltinValue(dr448);
    goto L499(dx525);
  L2689():
    package38 = ld package;
    check L2691() else D884();
  L2690():
    r1918 = dyn base161[, , nomatch](<sym package>, <lang sub("_.*", "", rownames(current_db))>, 0);
    goto L500(current_db3, r1918);
  L2695():
    archive_db7 = force? archive_db6;
    checkMissing(archive_db7);
    c775 = `is.object`(archive_db7);
    if c775 then L2696() else L2697(archive_db7);
  L2708():
    goto L502(r1931);
  L2710():
    r1932 = dyn Sys_Date3();
    check L2711() else D894();
  L2742():
    p426 = prom<V +>{
      CRAN_package_db = ldf CRAN_package_db;
      r1950 = dyn CRAN_package_db();
      return r1950;
    };
    p427 = prom<V +>{
      identity18 = ld identity;
      identity19 = force? identity18;
      checkMissing(identity19);
      return identity19;
    };
    r1953 = dyn tryCatch9[, error](p426, p427);
    check L2743() else D906();
  D802():
    deopt 3117 [r1764];
  D804():
    deopt 3123 [r1766];
  D884():
    deopt 3418 [current_db3, package38];
  D894():
    deopt 3449 [r1932];
  D906():
    deopt 3503 [r1953];
  L501(dx528):
    c776 = `is.object`(dx528);
    if c776 then L2701() else L2702(dx528);
  L2491():
    st tab = r1764;
    goto L455();
  L2494():
    st unused = r1766;
    aurls8 = ld aurls;
    check L2495() else D805();
  L2691():
    package39 = force? package38;
    checkMissing(package39);
    sub4 = ldf sub;
    check L2692() else D885();
  L2696():
    dr450 = tryDispatchBuiltin.1("[[", archive_db7);
    dc225 = getTryDispatchBuiltinDispatched(dr450);
    if dc225 then L2698() else L2697(dr450);
  L2697(archive_db9):
    package40 = ld package;
    check L2699() else D889();
  L2711():
    as_Date2 = ldf `as.Date`;
    check L2712() else D895();
  L2743():
    st db = r1953;
    sym165 = ldf inherits;
    base165 = ldf inherits in base;
    guard165 = `==`.4(sym165, base165);
    if guard165 then L2744() else L2745();
  D805():
    deopt 3125 [aurls8];
  D885():
    deopt 3421 [current_db3];
  D889():
    deopt 3434 [archive_db9, package40];
  D895():
    deopt 3450 [r1932];
  L512(r1955):
    c784 = `as.logical`(r1955);
    if c784 then L2748() else L513();
  L2495():
    aurls9 = force? aurls8;
    checkMissing(aurls9);
    s1 = toForSeq(aurls9);
    l262 = length(s1);
    i18 = 0;
    goto L456(i18);
  L2692():
    p423 = prom<V +>{
      rownames5 = ldf rownames;
      p422 = prom<V +>{
        current_db7 = ld current_db;
        current_db8 = force? current_db7;
        checkMissing(current_db8);
        return current_db8;
      };
      r1921 = dyn rownames5(p422);
      return r1921;
    };
    r1923 = dyn sub4("_.*", "", p423);
    check L2693() else D886();
  L2698():
    dx527 = getTryDispatchBuiltinValue(dr450);
    goto L501(dx527);
  L2699():
    package41 = force? package40;
    __107 = ldf `[[` in base;
    r1926 = dyn __107(archive_db9, package41);
    goto L501(r1926);
  L2700(dx532):
    c777 = ldf c in base;
    r1928 = dyn c777(dx526, dx532);
    check L2704() else D890();
  L2701():
    dr452 = tryDispatchBuiltin.1("$", dx528);
    dc226 = getTryDispatchBuiltinDispatched(dr452);
    if dc226 then L2703() else L2702(dr452);
  L2702(dx530):
    r1927 = `$`(dx530, <sym mtime>);
    goto L2700(r1927);
  L2712():
    p425 = prom<V +>{
      sort3 = ldf sort;
      p424 = prom<V +>{
        mtimes2 = ld mtimes;
        mtimes3 = force? mtimes2;
        checkMissing(mtimes3);
        return mtimes3;
      };
      r1934 = dyn sort3[, decreasing](p424, TRUE);
      return r1934;
    };
    r1936 = dyn as_Date2(p425);
    check L2713() else D896();
  L2744():
    db61 = ld db;
    check L2746() else D907();
  L2745():
    r1954 = dyn base165(<sym db>, "error");
    goto L512(r1954);
  D886():
    deopt 3425 [current_db3, r1923];
  D890():
    deopt 3439 [r1928];
  D896():
    deopt 3452 [r1932, r1936];
  D907():
    deopt 3507 [db61];
  L456(i19):
    i20 = `+`.1(i19, 1);
    c709 = `<`.1(l262, i20);
    if c709 then L2496() else L462();
  L513():
    db63 = ld db;
    check L2752() else D910();
  L2693():
    match2 = ldf match in base;
    r1924 = dyn match2(package39, r1923, 0, NULL);
    check L2694() else D887();
  L2703():
    dx531 = getTryDispatchBuiltinValue(dr452);
    goto L2700(dx531);
  L2704():
    goto L498(r1928);
  L2713():
    r1937 = `-`(r1932, r1936);
    st deltas = r1937;
    sym163 = ldf `as.numeric`;
    base163 = ldf `as.numeric` in base;
    guard163 = `==`.4(sym163, base163);
    if guard163 then L2714() else L2715();
  L2746():
    db62 = force? db61;
    checkMissing(db62);
    inherits9 = ldf inherits in base;
    r1956 = dyn inherits9(db62, "error", FALSE);
    check L2747() else D908();
  L2748():
    out18 = ld out;
    check L2749() else D909();
  D887():
    deopt 3429 [current_db3, r1924];
  D908():
    deopt 3512 [r1956];
  D909():
    deopt 3513 [out18];
  D910():
    deopt 3518 [db63];
  L462():
    x25 = `[[`(s1, i20, NULL, TRUE);
    st u = x25;
    __96 = ldf `::`;
    check L2497() else D806();
  L504(r1939):
    st recency = r1939;
    recency = ld recency;
    check L2721() else D899();
  L2496():
    sym152 = ldf length;
    base152 = ldf length in base;
    guard152 = `==`.4(sym152, base152);
    if guard152 then L2518() else L2519();
  L2694():
    goto L500(current_db3, r1924);
  L2714():
    deltas = ld deltas;
    check L2716() else D897();
  L2715():
    r1938 = dyn base163(<lang `[`(deltas, 1)>);
    goto L504(r1938);
  L2747():
    goto L512(r1956);
  L2749():
    out19 = force? out18;
    checkMissing(out19);
    popenv;
    return out19;
  L2752():
    db64 = force? db63;
    checkMissing(db64);
    c785 = `is.object`(db64);
    if c785 then L2753() else L2754(db64);
  D806():
    deopt 3128 [i20];
  D897():
    deopt 3457 [deltas];
  D899():
    deopt 3465 [recency];
  L463(r1783):
    c714 = `as.logical`(r1783);
    if c714 then L2522() else L464();
  L515(dx540):
    st meta1 = dx540;
    unlist3 = ldf unlist;
    check L2761() else D913();
  L2497():
    r1767 = dyn __96("utils", "contrib.url");
    check L2498() else D807();
  L2518():
    unused2 = ld unused;
    check L2520() else D818();
  L2519():
    r1782 = dyn base152(<sym unused>);
    goto L463(r1782);
  L2716():
    deltas1 = force? deltas;
    checkMissing(deltas1);
    c779 = `is.object`(deltas1);
    if c779 then L2717() else L2718(deltas1);
  L2721():
    recency1 = force? recency;
    checkMissing(recency1);
    r1942 = `<`(recency1, 7.0);
    c780 = `as.logical`(r1942);
    if c780 then L2722() else L506();
  L2753():
    dr460 = tryDispatchBuiltin.1("[", db64);
    dc230 = getTryDispatchBuiltinDispatched(dr460);
    if dc230 then L2755() else L2754(dr460);
  L2754(db66):
    db67 = ld db;
    check L2756() else D911();
  D807():
    deopt 3131 [i20, r1767];
  D818():
    deopt 3171 [unused2];
  D911():
    deopt 3520 [db66, db67];
  D913():
    deopt 3533 [];
  L464():
    goto L465();
  L465():
    l266 = ld tab;
    dimnames__ = ldf `dimnames<-`;
    check L2526() else D822();
  L505(dx534):
    as_numeric2 = ldf `as.numeric` in base;
    r1941 = dyn as_numeric2(dx534);
    check L2720() else D898();
  L506():
    goto L507();
  L507():
    sym164 = ldf sum;
    base164 = ldf sum in base;
    guard164 = `==`.4(sym164, base164);
    if guard164 then L2729() else L2730();
  L2498():
    checkFun.0(r1767);
    r1768 = r1767 as cls;
    p398 = prom<V +>{
      u = ld u;
      u1 = force? u;
      checkMissing(u1);
      return u1;
    };
    r1770 = dyn r1768(p398, "source");
    check L2499() else D808();
  L2520():
    unused3 = force? unused2;
    checkMissing(unused3);
    length50 = ldf length in base;
    r1784 = dyn length50(unused3);
    check L2521() else D819();
  L2522():
    rbind8 = ldf rbind;
    check L2523() else D820();
  L2717():
    dr454 = tryDispatchBuiltin.1("[", deltas1);
    dc227 = getTryDispatchBuiltinDispatched(dr454);
    if dc227 then L2719() else L2718(dr454);
  L2718(deltas3):
    __108 = ldf `[` in base;
    r1940 = dyn __108(deltas3, 1);
    goto L505(r1940);
  L2722():
    recency2 = ld recency;
    check L2723() else D900();
  L2755():
    dx539 = getTryDispatchBuiltinValue(dr460);
    goto L515(dx539);
  L2756():
    db68 = force? db67;
    checkMissing(db68);
    c786 = `is.object`(db68);
    if c786 then L2757() else L2758(db66);
  L2761():
    p428 = prom<V +>{
      meta192 = ld meta1;
      meta193 = force? meta192;
      checkMissing(meta193);
      c787 = `is.object`(meta193);
      if c787 then L1() else L2();
    L0(dx544):
      return dx544;
    L1():
      dr464 = tryDispatchBuiltin.1("[", meta193);
      dc232 = getTryDispatchBuiltinDispatched(dr464);
      if dc232 then L3() else L2();
    L2():
      __111 = ldf `[` in base;
      r1962 = dyn __111(meta193, 1, <missing>);
      goto L0(r1962);
    L3():
      dx543 = getTryDispatchBuiltinValue(dr464);
      goto L0(dx543);
    };
    r1964 = dyn unlist3(p428);
    check L2762() else D914();
  D808():
    deopt 3135 [i20, r1770];
  D819():
    deopt 3174 [r1784];
  D820():
    deopt 3176 [];
  D822():
    deopt 3186 [NULL, l266, NULL];
  D898():
    deopt 3463 [r1941];
  D900():
    deopt 3469 [recency2];
  D914():
    deopt 3535 [r1964];
  L508(r1945):
    st frequency = r1945;
    frequency = ld frequency;
    check L2733() else D903();
  L516(db74, dx542):
    package42 = ld package;
    check L2760() else D912();
  L2499():
    st cu = r1770;
    startsWith10 = ldf startsWith;
    check L2500() else D809();
  L2521():
    goto L463(r1784);
  L2523():
    p401 = prom<V +>{
      tab8 = ld tab;
      tab9 = force? tab8;
      checkMissing(tab9);
      return tab9;
    };
    p403 = prom<V +>{
      cbind3 = ldf cbind;
      p402 = prom<V +>{
        unused4 = ld unused;
        unused5 = force? unused4;
        checkMissing(unused5);
        return unused5;
      };
      r1787 = dyn cbind3("?", "?", p402);
      return r1787;
    };
    r1789 = dyn rbind8(p401, p403);
    check L2524() else D821();
  L2526():
    r1791 = dyn dimnames__(l266, NULL, NULL);
    check L2527() else D823();
  L2719():
    dx533 = getTryDispatchBuiltinValue(dr454);
    goto L505(dx533);
  L2720():
    goto L504(r1941);
  L2723():
    recency3 = force? recency2;
    checkMissing(recency3);
    l288 = ld out;
    c781 = `is.object`(l288);
    if c781 then L2725() else L2726(recency3, l288);
  L2729():
    deltas4 = ld deltas;
    check L2731() else D901();
  L2730():
    r1944 = dyn base164(<lang `<=`(deltas, 180.0)>);
    goto L508(r1944);
  L2757():
    dr462 = tryDispatchBuiltin.1("[", db68);
    dc231 = getTryDispatchBuiltinDispatched(dr462);
    if dc231 then L2759() else L2758(db66);
  L2758(db71):
    __109 = ldf `[` in base;
    r1959 = dyn __109(db68, <missing>, "Package");
    goto L516(db71, r1959);
  L2762():
    st meta0 = r1964;
    as_vector6 = ldf `as.vector`;
    check L2763() else D915();
  D809():
    deopt 3138 [i20];
  D821():
    deopt 3179 [r1789];
  D823():
    deopt 3188 [NULL, r1791];
  D901():
    deopt 3478 [deltas4];
  D903():
    deopt 3485 [frequency];
  D912():
    deopt 3525 [db74, dx542, package42];
  D915():
    deopt 3538 [];
  L2500():
    p399 = prom<V +>{
      tab4 = ld tab;
      tab5 = force? tab4;
      checkMissing(tab5);
      c710 = `is.object`(tab5);
      if c710 then L1() else L2();
    L0(dx471):
      return dx471;
    L1():
      dr406 = tryDispatchBuiltin.1("[", tab5);
      dc203 = getTryDispatchBuiltinDispatched(dr406);
      if dc203 then L3() else L2();
    L2():
      __97 = ldf `[` in base;
      r1771 = dyn __97(tab5, <missing>, 3);
      goto L0(r1771);
    L3():
      dx470 = getTryDispatchBuiltinValue(dr406);
      goto L0(dx470);
    };
    p400 = prom<V +>{
      cu = ld cu;
      cu1 = force? cu;
      checkMissing(cu1);
      return cu1;
    };
    r1774 = dyn startsWith10(p399, p400);
    check L2501() else D810();
  L2524():
    st tab = r1789;
    goto L465();
  L2527():
    st tab = r1791;
    tab10 = ld tab;
    check L2528() else D824();
  L2724(recency7, dx536):
    st out = dx536;
    goto L507();
  L2725():
    dr456 = tryDispatchBuiltin.0("$<-", l288, recency3);
    dc228 = getTryDispatchBuiltinDispatched(dr456);
    if dc228 then L2727() else L2726(recency3, dr456);
  L2726(recency5, l290):
    r1943 = `$<-`(l290, <sym recency>, recency3);
    goto L2724(recency5, r1943);
  L2731():
    deltas5 = force? deltas4;
    checkMissing(deltas5);
    r1946 = `<=`(deltas5, 180.0);
    sum1 = ldf sum in base;
    r1947 = dyn sum1(r1946);
    check L2732() else D902();
  L2733():
    frequency1 = force? frequency;
    checkMissing(frequency1);
    r1948 = `>`(frequency1, 6.0);
    c782 = `as.logical`(r1948);
    if c782 then L2734() else L509();
  L2759():
    dx541 = getTryDispatchBuiltinValue(dr462);
    goto L516(db66, dx541);
  L2760():
    package43 = force? package42;
    checkMissing(package43);
    r1960 = `==`(dx542, package43);
    __110 = ldf `[` in base;
    r1961 = dyn __110(db64, r1960, <missing>);
    goto L515(r1961);
  L2763():
    p429 = prom<V +>{
      meta196 = ld meta;
      meta197 = force? meta196;
      checkMissing(meta197);
      c788 = `is.object`(meta197);
      if c788 then L1() else L2(meta197);
    L0(dx546):
      return dx546;
    L1():
      dr466 = tryDispatchBuiltin.1("[", meta197);
      dc233 = getTryDispatchBuiltinDispatched(dr466);
      if dc233 then L3() else L2(dr466);
    L2(meta199):
      __112 = ldf `[` in base;
      r1965 = dyn __112(meta199, "Maintainer");
      goto L0(r1965);
    L3():
      dx545 = getTryDispatchBuiltinValue(dr466);
      goto L0(dx545);
    };
    r1967 = dyn as_vector6(p429);
    check L2764() else D916();
  D810():
    deopt 3141 [i20, r1774];
  D824():
    deopt 3190 [tab10];
  D902():
    deopt 3483 [r1947];
  D916():
    deopt 3540 [r1967];
  L509():
    goto L510(NULL);
  L510(frequency8):
    goto L511();
  L2501():
    st ind = r1774;
    sym150 = ldf any;
    base150 = ldf any in base;
    guard150 = `==`.4(sym150, base150);
    if guard150 then L2502() else L2503();
  L2528():
    tab11 = force? tab10;
    checkMissing(tab11);
    l267 = ld out;
    c715 = `is.object`(l267);
    if c715 then L2530() else L2531(tab11, l267);
  L2727():
    dx535 = getTryDispatchBuiltinValue(dr456);
    goto L2724(recency3, dx535);
  L2732():
    goto L508(r1947);
  L2734():
    frequency2 = ld frequency;
    check L2735() else D904();
  L2764():
    st m_m = r1967;
    meta200 = ld meta0;
    check L2765() else D917();
  D904():
    deopt 3489 [frequency2];
  D917():
    deopt 3542 [meta200];
  L457(i25, r1776):
    c711 = `as.logical`(r1776);
    if c711 then L2506() else L458();
  L2502():
    ind53 = ld ind;
    check L2504() else D811();
  L2503():
    r1775 = dyn base150(<sym ind>);
    goto L457(i20, r1775);
  L2529(tab15, dx475):
    st out = dx475;
    goto L444(tab15);
  L2530():
    dr410 = tryDispatchBuiltin.0("$<-", l267, tab11);
    dc205 = getTryDispatchBuiltinDispatched(dr410);
    if dc205 then L2532() else L2531(tab11, dr410);
  L2531(tab13, l269):
    r1792 = `$<-`(l269, <sym additional_repositories_analysis_results>, tab11);
    goto L2529(tab13, r1792);
  L2735():
    frequency3 = force? frequency2;
    checkMissing(frequency3);
    l291 = ld out;
    c783 = `is.object`(l291);
    if c783 then L2737() else L2738(frequency3, l291);
  L2765():
    meta201 = force? meta200;
    checkMissing(meta201);
    c789 = `is.object`(meta201);
    if c789 then L2766() else L2767(meta201);
  D811():
    deopt 3145 [i20, ind53];
  L458():
    sym151 = ldf c;
    base151 = ldf c in base;
    guard151 = `==`.4(sym151, base151);
    if guard151 then L2513() else L2514();
  L460(i32):
    goto L456(i32);
  L517(dx548):
    st m_d = dx548;
    gsub8 = ldf gsub;
    check L2769() else D918();
  L2504():
    ind54 = force? ind53;
    checkMissing(ind54);
    any15 = ldf any in base;
    r1777 = dyn any15(ind54);
    check L2505() else D812();
  L2506():
    u2 = ld u;
    check L2507() else D813();
  L2532():
    dx474 = getTryDispatchBuiltinValue(dr410);
    goto L2529(tab11, dx474);
  L2736(frequency7, dx538):
    st out = dx538;
    goto L510(frequency7);
  L2737():
    dr458 = tryDispatchBuiltin.0("$<-", l291, frequency3);
    dc229 = getTryDispatchBuiltinDispatched(dr458);
    if dc229 then L2739() else L2738(frequency3, dr458);
  L2738(frequency5, l293):
    r1949 = `$<-`(l293, <sym frequency>, frequency3);
    goto L2736(frequency5, r1949);
  L2766():
    dr468 = tryDispatchBuiltin.1("[", meta201);
    dc234 = getTryDispatchBuiltinDispatched(dr468);
    if dc234 then L2768() else L2767(dr468);
  L2767(meta203):
    __113 = ldf `[` in base;
    r1968 = dyn __113(meta203, "Maintainer");
    goto L517(r1968);
  D812():
    deopt 3148 [i20, r1777];
  D813():
    deopt 3149 [i25, u2];
  D918():
    deopt 3549 [];
  L461(i35, r1780):
    st unused = r1780;
    goto L460(i35);
  L2505():
    goto L457(i20, r1777);
  L2507():
    u3 = force? u2;
    checkMissing(u3);
    l263 = ld tab;
    c712 = `is.object`(l263);
    if c712 then L2508() else L2509(i25, u3, l263);
  L2513():
    unused = ld unused;
    check L2515() else D815();
  L2514():
    r1779 = dyn base151(<sym unused>, <sym u>);
    goto L461(i25, r1779);
  L2739():
    dx537 = getTryDispatchBuiltinValue(dr458);
    goto L2736(frequency3, dx537);
  L2768():
    dx547 = getTryDispatchBuiltinValue(dr468);
    goto L517(dx547);
  L2769():
    p430 = prom<V +>{
      m_m = ld m_m;
      m_m1 = force? m_m;
      checkMissing(m_m1);
      return m_m1;
    };
    r1970 = dyn gsub8("[[:space:]]+", " ", p430);
    check L2770() else D919();
  D815():
    deopt 3159 [i25, unused];
  D919():
    deopt 3553 [r1970];
  L459(i31, u7, dx473):
    st tab = dx473;
    goto L460(i31);
  L2508():
    dr408 = tryDispatchBuiltin.0("[<-", l263, u3);
    dc204 = getTryDispatchBuiltinDispatched(dr408);
    if dc204 then L2510() else L2509(i25, u3, dr408);
  L2509(i29, u5, l265):
    ind55 = ld ind;
    check L2511() else D814();
  L2515():
    unused1 = force? unused;
    checkMissing(unused1);
    u9 = ld u;
    check L2516() else D816();
  L2770():
    st m_m_1 = r1970;
    gsub9 = ldf gsub;
    check L2771() else D920();
  D814():
    deopt 3152 [i29, u5, l265, u3, ind55];
  D816():
    deopt 3161 [i25, u9];
  D920():
    deopt 3556 [];
  L2510():
    dx472 = getTryDispatchBuiltinValue(dr408);
    goto L459(i25, u3, dx472);
  L2511():
    ind56 = force? ind55;
    ___13 = ldf `[<-` in base;
    r1778 = dyn ___13(l265, u3, ind56, 3);
    goto L459(i29, u5, r1778);
  L2516():
    u10 = force? u9;
    checkMissing(u10);
    c713 = ldf c in base;
    r1781 = dyn c713(unused1, u10);
    check L2517() else D817();
  L2771():
    p431 = prom<V +>{
      m_d = ld m_d;
      m_d1 = force? m_d;
      checkMissing(m_d1);
      return m_d1;
    };
    r1972 = dyn gsub9("[[:space:]]+", " ", p431);
    check L2772() else D921();
  D817():
    deopt 3164 [i25, r1781];
  D921():
    deopt 3560 [r1972];
  L2517():
    goto L461(i25, r1781);
  L2772():
    st m_d_1 = r1972;
    sym166 = ldf all;
    base166 = ldf all in base;
    guard166 = `==`.4(sym166, base166);
    if guard166 then L2773() else L2774();
  L518(r1974):
    r1977 = `!`(r1974);
    c790 = `as.logical`(r1977);
    if c790 then L2778() else L519();
  L2773():
    m_m_1 = ld m_m_1;
    check L2775() else D922();
  L2774():
    r1973 = dyn base166(<lang `==`(m_m_1, m_d_1)>);
    goto L518(r1973);
  D922():
    deopt 3564 [m_m_1];
  L519():
    goto L523();
  L523():
    meta204 = ld meta0;
    check L2795() else D932();
  L2775():
    m_m_2 = force? m_m_1;
    checkMissing(m_m_2);
    m_d_1 = ld m_d_1;
    check L2776() else D923();
  L2778():
    Encoding = ldf Encoding;
    check L2779() else D925();
  D923():
    deopt 3565 [m_m_2, m_d_1];
  D925():
    deopt 3572 [];
  D932():
    deopt 3598 [meta204];
  L2776():
    m_d_2 = force? m_d_1;
    checkMissing(m_d_2);
    r1975 = `==`(m_m_2, m_d_2);
    all1 = ldf all in base;
    r1976 = dyn all1(r1975);
    check L2777() else D924();
  L2779():
    p432 = prom<V +>{
      m_m2 = ld m_m;
      m_m3 = force? m_m2;
      checkMissing(m_m3);
      return m_m3;
    };
    r1979 = dyn Encoding(p432);
    check L2780() else D926();
  L2795():
    meta205 = force? meta204;
    checkMissing(meta205);
    c793 = `is.object`(meta205);
    if c793 then L2796() else L2797(meta205);
  D924():
    deopt 3569 [r1976];
  D926():
    deopt 3574 [r1979];
  L524(dx552):
    st l_d = dx552;
    foss6 = ld foss;
    check L2799() else D933();
  L2777():
    goto L518(r1976);
  L2780():
    r1980 = `==`(r1979, "latin1");
    c791 = `as.logical`(r1980);
    if c791 then L2781() else L520();
  L2796():
    dr472 = tryDispatchBuiltin.1("[", meta205);
    dc236 = getTryDispatchBuiltinDispatched(dr472);
    if dc236 then L2798() else L2797(dr472);
  L2797(meta207):
    __114 = ldf `[` in base;
    r1993 = dyn __114(meta207, "License");
    goto L524(r1993);
  D933():
    deopt 3604 [foss6];
  L520():
    goto L521();
  L521():
    sym167 = ldf list;
    base167 = ldf list in base;
    guard167 = `==`.4(sym167, base167);
    if guard167 then L2785() else L2786();
  L2781():
    iconv = ldf iconv;
    check L2782() else D927();
  L2798():
    dx551 = getTryDispatchBuiltinValue(dr472);
    goto L524(dx551);
  L2799():
    foss7 = force? foss6;
    checkMissing(foss7);
    r1994 = `!`(foss7);
    c794 = `as.logical`(r1994);
    if c794 then L2800() else L525(c794);
  D927():
    deopt 3578 [];
  L522(r1985):
    l294 = ld out;
    c792 = `is.object`(l294);
    if c792 then L2791() else L2792(r1985, l294);
  L525(c796):
    c805 = `as.logical`(c796);
    if c805 then L2808() else L526();
  L2782():
    p433 = prom<V +>{
      m_m4 = ld m_m;
      m_m5 = force? m_m4;
      checkMissing(m_m5);
      return m_m5;
    };
    r1982 = dyn iconv(p433, "latin1");
    check L2783() else D928();
  L2785():
    m_m6 = ld m_m;
    check L2787() else D929();
  L2786():
    r1984 = dyn base167(<sym m_m>, <sym m_d>);
    goto L522(r1984);
  L2800():
    analyze_license1 = ldf analyze_license;
    check L2801() else D934();
  D928():
    deopt 3581 [r1982];
  D929():
    deopt 3587 [m_m6];
  D934():
    deopt 3608 [c794];
  L526():
    goto L529();
  L529():
    config_val_to_logical9 = ldf config_val_to_logical;
    check L2822() else D939();
  L2783():
    st m_m = r1982;
    goto L521();
  L2787():
    m_m7 = force? m_m6;
    checkMissing(m_m7);
    m_d2 = ld m_d;
    check L2788() else D930();
  L2790(r1990, dx550):
    st out = dx550;
    goto L523();
  L2791():
    dr470 = tryDispatchBuiltin.0("$<-", l294, r1985);
    dc235 = getTryDispatchBuiltinDispatched(dr470);
    if dc235 then L2793() else L2792(r1985, dr470);
  L2792(r1988, l296):
    r1991 = `$<-`(l296, <sym new_maintainer>, r1985);
    goto L2790(r1988, r1991);
  L2801():
    p434 = prom<V +>{
      l_d = ld l_d;
      l_d1 = force? l_d;
      checkMissing(l_d1);
      return l_d1;
    };
    r1996 = dyn analyze_license1(p434);
    check L2802() else D935();
  L2808():
    sym168 = ldf list;
    base168 = ldf list in base;
    guard168 = `==`.4(sym168, base168);
    if guard168 then L2809() else L2810();
  D930():
    deopt 3589 [m_d2];
  D935():
    deopt 3610 [c794, r1996];
  D939():
    deopt 3630 [];
  L527(r2001):
    l297 = ld out;
    c807 = `is.object`(l297);
    if c807 then L2818() else L2819(r2001, l297);
  L2788():
    m_d3 = force? m_d2;
    checkMissing(m_d3);
    list5 = ldf list in base;
    r1986 = dyn list5(m_m7, m_d3);
    check L2789() else D931();
  L2793():
    dx549 = getTryDispatchBuiltinValue(dr470);
    goto L2790(r1985, dx549);
  L2802():
    c797 = `is.object`(r1996);
    if c797 then L2804() else L2805(c794, r1996);
  L2809():
    meta208 = ld meta;
    check L2811() else D936();
  L2810():
    r2000 = dyn base168(<lang `[`(meta, "License")>, <sym l_d>);
    goto L527(r2000);
  L2822():
    p435 = prom<V +>{
      Sys_getenv10 = ldf `Sys.getenv`;
      r2010 = dyn Sys_getenv10("_R_CHECK_CRAN_INCOMING_NOTE_GNU_MAKE_", "FALSE");
      return r2010;
    };
    r2012 = dyn config_val_to_logical9(p435);
    check L2823() else D940();
  D931():
    deopt 3592 [r1986];
  D936():
    deopt 3615 [meta208];
  D940():
    deopt 3632 [r2012];
  L2789():
    goto L522(r1986);
  L2803(c801, dx554):
    c802 = `as.logical`(dx554);
    c803 = `&&`(c801, c802);
    goto L525(c803);
  L2804():
    dr474 = tryDispatchBuiltin.1("$", r1996);
    dc237 = getTryDispatchBuiltinDispatched(dr474);
    if dc237 then L2806() else L2805(c794, dr474);
  L2805(c799, r1998):
    r1999 = `$`(r1998, <sym is_verified>);
    goto L2803(c799, r1999);
  L2811():
    meta209 = force? meta208;
    checkMissing(meta209);
    c806 = `is.object`(meta209);
    if c806 then L2812() else L2813(meta209);
  L2817(r2007, dx558):
    st out = dx558;
    goto L529();
  L2818():
    dr478 = tryDispatchBuiltin.0("$<-", l297, r2001);
    dc239 = getTryDispatchBuiltinDispatched(dr478);
    if dc239 then L2820() else L2819(r2001, dr478);
  L2819(r2005, l299):
    r2008 = `$<-`(l299, <sym new_license>, r2001);
    goto L2817(r2005, r2008);
  L2823():
    c808 = `as.logical`(r2012);
    if c808 then L2824() else L530();
  L528(dx556):
    l_d2 = ld l_d;
    check L2815() else D937();
  L530():
    goto L536();
  L536():
    sym170 = ldf inherits;
    base170 = ldf inherits in base;
    guard170 = `==`.4(sym170, base170);
    if guard170 then L2844() else L2845();
  L2806():
    dx553 = getTryDispatchBuiltinValue(dr474);
    goto L2803(c794, dx553);
  L2812():
    dr476 = tryDispatchBuiltin.1("[", meta209);
    dc238 = getTryDispatchBuiltinDispatched(dr476);
    if dc238 then L2814() else L2813(dr476);
  L2813(meta211):
    __115 = ldf `[` in base;
    r2002 = dyn __115(meta211, "License");
    goto L528(r2002);
  L2820():
    dx557 = getTryDispatchBuiltinValue(dr478);
    goto L2817(r2001, dx557);
  L2824():
    meta212 = ld meta;
    check L2825() else D941();
  D937():
    deopt 3620 [l_d2];
  D941():
    deopt 3633 [meta212];
  L537(r2028):
    r2038 = `!`(r2028);
    c819 = `as.logical`(r2038);
    if c819 then L2849() else L538();
  L2814():
    dx555 = getTryDispatchBuiltinValue(dr476);
    goto L528(dx555);
  L2815():
    l_d3 = force? l_d2;
    checkMissing(l_d3);
    list6 = ldf list in base;
    r2003 = dyn list6(dx556, l_d3);
    check L2816() else D938();
  L2825():
    meta213 = force? meta212;
    checkMissing(meta213);
    c809 = `is.object`(meta213);
    if c809 then L2826() else L2827(meta213);
  L2844():
    tryCatch10 = ldf tryCatch;
    check L2846() else D946();
  L2845():
    r2027 = dyn base170(<lang `<-`(year, tryCatch(format(as.Date(`[`(meta0, "Published")), "%Y"), error=identity))>, "error");
    goto L537(r2027);
  D938():
    deopt 3623 [r2003];
  D946():
    deopt 3664 [];
  L531(dx560):
    st SysReq = dx560;
    sym169 = ldf `is.na`;
    base169 = ldf `is.na` in base;
    guard169 = `==`.4(sym169, base169);
    if guard169 then L2829() else L2830();
  L538():
    goto L579();
  L579():
    out40 = ld out;
    check L3005() else D1011();
  L2816():
    goto L527(r2003);
  L2826():
    dr480 = tryDispatchBuiltin.1("[", meta213);
    dc240 = getTryDispatchBuiltinDispatched(dr480);
    if dc240 then L2828() else L2827(dr480);
  L2827(meta215):
    __116 = ldf `[` in base;
    r2013 = dyn __116(meta215, "SystemRequirements");
    goto L531(r2013);
  L2846():
    p439 = prom<V +>{
      format3 = ldf format;
      p438 = prom<V +>{
        as_Date3 = ldf `as.Date`;
        p437 = prom<V +>{
          meta216 = ld meta0;
          meta217 = force? meta216;
          checkMissing(meta217);
          c818 = `is.object`(meta217);
          if c818 then L1() else L2(meta217);
        L0(dx564):
          return dx564;
        L1():
          dr484 = tryDispatchBuiltin.1("[", meta217);
          dc242 = getTryDispatchBuiltinDispatched(dr484);
          if dc242 then L3() else L2(dr484);
        L2(meta219):
          __117 = ldf `[` in base;
          r2029 = dyn __117(meta219, "Published");
          goto L0(r2029);
        L3():
          dx563 = getTryDispatchBuiltinValue(dr484);
          goto L0(dx563);
        };
        r2031 = dyn as_Date3(p437);
        return r2031;
      };
      r2033 = dyn format3(p438, "%Y");
      return r2033;
    };
    p440 = prom<V +>{
      identity20 = ld identity;
      identity21 = force? identity20;
      checkMissing(identity21);
      return identity21;
    };
    r2036 = dyn tryCatch10[, error](p439, p440);
    check L2847() else D947();
  L2849():
    NROW9 = ldf NROW;
    check L2850() else D949();
  D947():
    deopt 3668 [r2036];
  D949():
    deopt 3676 [];
  D1011():
    deopt 3901 [out40];
  L532(r2015):
    r2017 = `!`(r2015);
    c810 = `as.logical`(r2017);
    if c810 then L2833() else L533(c810);
  L2828():
    dx559 = getTryDispatchBuiltinValue(dr480);
    goto L531(dx559);
  L2829():
    SysReq = ld SysReq;
    check L2831() else D942();
  L2830():
    r2014 = dyn base169(<sym SysReq>);
    goto L532(r2014);
  L2847():
    st year = r2036;
    inherits10 = ldf inherits in base;
    r2037 = dyn inherits10(r2036, "error", FALSE);
    check L2848() else D948();
  L2850():
    p441 = prom<V +>{
      out20 = ld out;
      out21 = force? out20;
      checkMissing(out21);
      c820 = `is.object`(out21);
      if c820 then L1() else L2(out21);
    L0(dx566):
      st a = dx566;
      invisible.0();
      return dx566;
    L1():
      dr486 = tryDispatchBuiltin.1("$", out21);
      dc243 = getTryDispatchBuiltinDispatched(dr486);
      if dc243 then L3() else L2(dr486);
    L2(out23):
      r2039 = `$`(out23, <sym spelling>);
      goto L0(r2039);
    L3():
      dx565 = getTryDispatchBuiltinValue(dr486);
      goto L0(dx565);
    };
    r2041 = dyn NROW9(p441);
    check L2851() else D950();
  L3005():
    out41 = force? out40;
    checkMissing(out41);
    popenv;
    return out41;
  D942():
    deopt 3641 [SysReq];
  D948():
    deopt 3673 [r2037];
  D950():
    deopt 3678 [r2041];
  L533(c812):
    c816 = `as.logical`(c812);
    if c816 then L2837() else L534();
  L2831():
    SysReq1 = force? SysReq;
    checkMissing(SysReq1);
    is_na29 = ldf `is.na` in base;
    r2016 = dyn is_na29(SysReq1);
    check L2832() else D943();
  L2833():
    grepl17 = ldf grepl;
    check L2834() else D944();
  L2848():
    goto L537(r2037);
  L2851():
    c821 = `as.logical`(r2041);
    if c821 then L2852() else L539(c821);
  D943():
    deopt 3644 [r2016];
  D944():
    deopt 3647 [c810];
  L534():
    goto L535(NULL);
  L535(r2025):
    goto L536();
  L539(c823):
    c827 = `as.logical`(c823);
    if c827 then L2856() else L540(c827);
  L2832():
    goto L532(r2016);
  L2834():
    p436 = prom<V +>{
      SysReq2 = ld SysReq;
      SysReq3 = force? SysReq2;
      checkMissing(SysReq3);
      return SysReq3;
    };
    r2019 = dyn grepl17("GNU [Mm]ake", p436);
    check L2835() else D945();
  L2837():
    l300 = ld out;
    c817 = `is.object`(l300);
    if c817 then L2839() else L2840(TRUE, l300);
  L2852():
    config_val_to_logical10 = ldf config_val_to_logical;
    check L2853() else D951();
  D945():
    deopt 3650 [c810, r2019];
  D951():
    deopt 3680 [c821];
  L540(c829):
    c836 = `as.logical`(c829);
    if c836 then L2864() else L542();
  L2835():
    c813 = `as.logical`(r2019);
    c814 = `&&`(c810, c813);
    goto L533(c814);
  L2838(r2023, dx562):
    st out = dx562;
    goto L535(r2023);
  L2839():
    dr482 = tryDispatchBuiltin.0("$<-", l300, TRUE);
    dc241 = getTryDispatchBuiltinDispatched(dr482);
    if dc241 then L2841() else L2840(TRUE, dr482);
  L2840(r2021, l302):
    r2024 = `$<-`(l302, <sym GNUmake>, TRUE);
    goto L2838(r2021, r2024);
  L2853():
    p442 = prom<V +>{
      Sys_getenv11 = ldf `Sys.getenv`;
      r2042 = dyn Sys_getenv11("_R_CHECK_CRAN_INCOMING_ASPELL_RECHECK_MAYBE_", "TRUE");
      return r2042;
    };
    r2044 = dyn config_val_to_logical10(p442);
    check L2854() else D952();
  L2856():
    year = ld year;
    check L2857() else D953();
  D952():
    deopt 3682 [c821, r2044];
  D953():
    deopt 3684 [c827, year];
  L542():
    goto L544();
  L544():
    NROW10 = ldf NROW;
    check L2878() else D962();
  L2841():
    dx561 = getTryDispatchBuiltinValue(dr482);
    goto L2838(TRUE, dx561);
  L2854():
    c824 = `as.logical`(r2044);
    c825 = `&&`(c821, c824);
    goto L539(c825);
  L2857():
    year1 = force? year;
    checkMissing(year1);
    sym171 = ldf `as.numeric`;
    base171 = ldf `as.numeric` in base;
    guard171 = `==`.4(sym171, base171);
    if guard171 then L2858() else L2859();
  L2864():
    _aspell_package_description_for_CRAN1 = ldf `.aspell_package_description_for_CRAN`;
    check L2865() else D957();
  D957():
    deopt 3697 [];
  D962():
    deopt 3718 [];
  L541(c832, year4, r2046):
    r2049 = `>=`(year4, r2046);
    c833 = `as.logical`(r2049);
    c834 = `&&`(c832, c833);
    goto L540(c834);
  L2858():
    Sys_getenv12 = ldf `Sys.getenv`;
    check L2860() else D954();
  L2859():
    r2045 = dyn base171(<lang Sys.getenv("_R_CHECK_CRAN_INCOMING_ASPELL_RECHECK_START_", "2013")>);
    goto L541(c827, year1, r2045);
  L2865():
    p443 = prom<V +>{
      meta220 = ld meta0;
      meta221 = force? meta220;
      checkMissing(meta221);
      return meta221;
    };
    r2051 = dyn _aspell_package_description_for_CRAN1[meta](p443);
    check L2866() else D958();
  L2878():
    p446 = prom<V +>{
      out24 = ld out;
      out25 = force? out24;
      checkMissing(out25);
      c841 = `is.object`(out25);
      if c841 then L1() else L2(out25);
    L0(dx581):
      return dx581;
    L1():
      dr496 = tryDispatchBuiltin.1("$", out25);
      dc248 = getTryDispatchBuiltinDispatched(dr496);
      if dc248 then L3() else L2(dr496);
    L2(out27):
      r2059 = `$`(out27, <sym title_includes_name>);
      goto L0(r2059);
    L3():
      dx580 = getTryDispatchBuiltinValue(dr496);
      goto L0(dx580);
    };
    r2061 = dyn NROW10(p446);
    check L2879() else D963();
  D954():
    deopt 3688 [c827, year1];
  D958():
    deopt 3700 [r2051];
  D963():
    deopt 3720 [r2061];
  L2860():
    r2047 = dyn Sys_getenv12("_R_CHECK_CRAN_INCOMING_ASPELL_RECHECK_START_", "2013");
    check L2861() else D955();
  L2866():
    st a0 = r2051;
    a12 = ld a;
    check L2867() else D959();
  L2879():
    c842 = `as.logical`(r2061);
    if c842 then L2880() else L545(c842);
  D955():
    deopt 3691 [c827, year1, r2047];
  D959():
    deopt 3702 [a12];
  L545(c844):
    c848 = `as.logical`(c844);
    if c848 then L2884() else L546(c848);
  L2861():
    as_numeric3 = ldf `as.numeric` in base;
    r2048 = dyn as_numeric3(r2047);
    check L2862() else D956();
  L2867():
    a13 = force? a12;
    checkMissing(a13);
    c837 = `is.object`(a13);
    if c837 then L2868() else L2869(a13);
  L2880():
    config_val_to_logical11 = ldf config_val_to_logical;
    check L2881() else D964();
  D956():
    deopt 3693 [c827, year1, r2048];
  D964():
    deopt 3722 [c842];
  L543(dx568):
    l303 = ld out;
    c840 = `is.object`(l303);
    if c840 then L2874() else L2875(dx568, l303);
  L546(c850):
    c857 = `as.logical`(c850);
    if c857 then L2892() else L548(c857);
  L2862():
    goto L541(c827, year1, r2048);
  L2868():
    dr488 = tryDispatchBuiltin.1("[", a13);
    dc244 = getTryDispatchBuiltinDispatched(dr488);
    if dc244 then L2870() else L2869(dr488);
  L2869(a15):
    _notin_4 = ldf `%notin%`;
    check L2871() else D960();
  L2881():
    p447 = prom<V +>{
      Sys_getenv13 = ldf `Sys.getenv`;
      r2062 = dyn Sys_getenv13("_R_CHECK_CRAN_INCOMING_TITLE_INCLUDES_NAME_RECHECK_MAYBE_", "TRUE");
      return r2062;
    };
    r2064 = dyn config_val_to_logical11(p447);
    check L2882() else D965();
  L2884():
    year5 = ld year;
    check L2885() else D966();
  D960():
    deopt 3705 [a15];
  D965():
    deopt 3724 [c842, r2064];
  D966():
    deopt 3726 [c848, year5];
  L548(c859):
    c873 = `as.logical`(c859);
    if c873 then L2902() else L551();
  L2870():
    dx567 = getTryDispatchBuiltinValue(dr488);
    goto L543(dx567);
  L2871():
    p444 = prom<V +>{
      a16 = ld a;
      a17 = force? a16;
      checkMissing(a17);
      c838 = `is.object`(a17);
      if c838 then L1() else L2(a17);
    L0(dx570):
      return dx570;
    L1():
      dr490 = tryDispatchBuiltin.1("$", a17);
      dc245 = getTryDispatchBuiltinDispatched(dr490);
      if dc245 then L3() else L2(dr490);
    L2(a19):
      r2052 = `$`(a19, <sym Original>);
      goto L0(r2052);
    L3():
      dx569 = getTryDispatchBuiltinValue(dr490);
      goto L0(dx569);
    };
    p445 = prom<V +>{
      a20 = ld a0;
      a21 = force? a20;
      checkMissing(a21);
      c839 = `is.object`(a21);
      if c839 then L1() else L2(a21);
    L0(dx572):
      return dx572;
    L1():
      dr492 = tryDispatchBuiltin.1("$", a21);
      dc246 = getTryDispatchBuiltinDispatched(dr492);
      if dc246 then L3() else L2(dr492);
    L2(a23):
      r2054 = `$`(a23, <sym Original>);
      goto L0(r2054);
    L3():
      dx571 = getTryDispatchBuiltinValue(dr492);
      goto L0(dx571);
    };
    r2056 = dyn _notin_4(p444, p445);
    check L2872() else D961();
  L2873(dx577, dx578):
    st out = dx578;
    goto L544();
  L2874():
    dr494 = tryDispatchBuiltin.0("$<-", l303, dx568);
    dc247 = getTryDispatchBuiltinDispatched(dr494);
    if dc247 then L2876() else L2875(dx568, dr494);
  L2875(dx574, l305):
    r2058 = `$<-`(l305, <sym spelling>, dx568);
    goto L2873(dx574, r2058);
  L2882():
    c845 = `as.logical`(r2064);
    c846 = `&&`(c842, c845);
    goto L545(c846);
  L2885():
    year6 = force? year5;
    checkMissing(year6);
    sym172 = ldf `as.numeric`;
    base172 = ldf `as.numeric` in base;
    guard172 = `==`.4(sym172, base172);
    if guard172 then L2886() else L2887();
  L2892():
    meta222 = ld meta0;
    check L2893() else D970();
  D961():
    deopt 3708 [a15, r2056];
  D970():
    deopt 3738 [c857, meta222];
  L547(c853, year9, r2066):
    r2069 = `>=`(year9, r2066);
    c854 = `as.logical`(r2069);
    c855 = `&&`(c853, c854);
    goto L546(c855);
  L551():
    goto L552();
  L552():
    NROW11 = ldf NROW;
    check L2908() else D972();
  L2872():
    __118 = ldf `[` in base;
    r2057 = dyn __118(a13, r2056, <missing>);
    goto L543(r2057);
  L2876():
    dx576 = getTryDispatchBuiltinValue(dr494);
    goto L2873(dx568, dx576);
  L2886():
    Sys_getenv14 = ldf `Sys.getenv`;
    check L2888() else D967();
  L2887():
    r2065 = dyn base172(<lang Sys.getenv("_R_CHECK_CRAN_INCOMING_TITLE_INCLUDES_NAME_RECHECK_START_", "2016")>);
    goto L547(c848, year6, r2065);
  L2893():
    meta223 = force? meta222;
    checkMissing(meta223);
    c860 = `is.object`(meta223);
    if c860 then L2894() else L2895(c857, meta223);
  L2902():
    l306 = ld out;
    c874 = `is.object`(l306);
    if c874 then L2904() else L2905(NULL, l306);
  D967():
    deopt 3730 [c848, year6];
  D972():
    deopt 3757 [];
  L549(c864, dx583):
    meta226 = ld meta;
    check L2897() else D971();
  L2888():
    r2067 = dyn Sys_getenv14("_R_CHECK_CRAN_INCOMING_TITLE_INCLUDES_NAME_RECHECK_START_", "2016");
    check L2889() else D968();
  L2894():
    dr498 = tryDispatchBuiltin.1("[", meta223);
    dc249 = getTryDispatchBuiltinDispatched(dr498);
    if dc249 then L2896() else L2895(c857, dr498);
  L2895(c862, meta225):
    __119 = ldf `[` in base;
    r2070 = dyn __119(meta225, "Title");
    goto L549(c862, r2070);
  L2903(r2076, dx591):
    st out = dx591;
    goto L552();
  L2904():
    dr502 = tryDispatchBuiltin.0("$<-", l306, NULL);
    dc251 = getTryDispatchBuiltinDispatched(dr502);
    if dc251 then L2906() else L2905(NULL, dr502);
  L2905(r2074, l308):
    r2077 = `$<-`(l308, <sym title_includes_name>, NULL);
    goto L2903(r2074, r2077);
  L2908():
    p448 = prom<V +>{
      out28 = ld out;
      out29 = force? out28;
      checkMissing(out29);
      c875 = `is.object`(out29);
      if c875 then L1() else L2(out29);
    L0(dx593):
      return dx593;
    L1():
      dr504 = tryDispatchBuiltin.1("$", out29);
      dc252 = getTryDispatchBuiltinDispatched(dr504);
      if dc252 then L3() else L2(dr504);
    L2(out31):
      r2079 = `$`(out31, <sym title_case>);
      goto L0(r2079);
    L3():
      dx592 = getTryDispatchBuiltinValue(dr504);
      goto L0(dx592);
    };
    r2081 = dyn NROW11(p448);
    check L2909() else D973();
  D968():
    deopt 3733 [c848, year6, r2067];
  D971():
    deopt 3742 [c864, dx583, meta226];
  D973():
    deopt 3759 [r2081];
  L2889():
    as_numeric4 = ldf `as.numeric` in base;
    r2068 = dyn as_numeric4(r2067);
    check L2890() else D969();
  L2896():
    dx582 = getTryDispatchBuiltinValue(dr498);
    goto L549(c857, dx582);
  L2897():
    meta227 = force? meta226;
    checkMissing(meta227);
    c865 = `is.object`(meta227);
    if c865 then L2898() else L2899(c864, dx583, meta227);
  L2906():
    dx590 = getTryDispatchBuiltinValue(dr502);
    goto L2903(NULL, dx590);
  L2909():
    c876 = `as.logical`(r2081);
    if c876 then L2910() else L553(c876);
  D969():
    deopt 3735 [c848, year6, r2068];
  L550(c869, dx588, dx589):
    r2072 = `==`(dx588, dx589);
    c870 = `as.logical`(r2072);
    c871 = `&&`(c869, c870);
    goto L548(c871);
  L553(c878):
    c882 = `as.logical`(c878);
    if c882 then L2914() else L554(c882);
  L2890():
    goto L547(c848, year6, r2068);
  L2898():
    dr500 = tryDispatchBuiltin.1("[", meta227);
    dc250 = getTryDispatchBuiltinDispatched(dr500);
    if dc250 then L2900() else L2899(c864, dx583, dr500);
  L2899(c867, dx585, meta229):
    __120 = ldf `[` in base;
    r2071 = dyn __120(meta229, "Title");
    goto L550(c867, dx585, r2071);
  L2910():
    config_val_to_logical12 = ldf config_val_to_logical;
    check L2911() else D974();
  D974():
    deopt 3761 [c876];
  L554(c884):
    c891 = `as.logical`(c884);
    if c891 then L2922() else L556(c891);
  L2900():
    dx587 = getTryDispatchBuiltinValue(dr500);
    goto L550(c864, dx583, dx587);
  L2911():
    p449 = prom<V +>{
      Sys_getenv15 = ldf `Sys.getenv`;
      r2082 = dyn Sys_getenv15("_R_CHECK_CRAN_INCOMING_TITLE_CASE_RECHECK_MAYBE_", "TRUE");
      return r2082;
    };
    r2084 = dyn config_val_to_logical12(p449);
    check L2912() else D975();
  L2914():
    year10 = ld year;
    check L2915() else D976();
  D975():
    deopt 3763 [c876, r2084];
  D976():
    deopt 3765 [c882, year10];
  L556(c893):
    c907 = `as.logical`(c893);
    if c907 then L2932() else L559();
  L2912():
    c879 = `as.logical`(r2084);
    c880 = `&&`(c876, c879);
    goto L553(c880);
  L2915():
    year11 = force? year10;
    checkMissing(year11);
    sym173 = ldf `as.numeric`;
    base173 = ldf `as.numeric` in base;
    guard173 = `==`.4(sym173, base173);
    if guard173 then L2916() else L2917();
  L2922():
    meta230 = ld meta0;
    check L2923() else D980();
  D980():
    deopt 3777 [c891, meta230];
  L555(c887, year14, r2086):
    r2089 = `>=`(year14, r2086);
    c888 = `as.logical`(r2089);
    c889 = `&&`(c887, c888);
    goto L554(c889);
  L559():
    goto L560();
  L560():
    NROW12 = ldf NROW;
    check L2938() else D982();
  L2916():
    Sys_getenv16 = ldf `Sys.getenv`;
    check L2918() else D977();
  L2917():
    r2085 = dyn base173(<lang Sys.getenv("_R_CHECK_CRAN_INCOMING_TITLE_CASE_RECHECK_START_", "2016")>);
    goto L555(c882, year11, r2085);
  L2923():
    meta231 = force? meta230;
    checkMissing(meta231);
    c894 = `is.object`(meta231);
    if c894 then L2924() else L2925(c891, meta231);
  L2932():
    l309 = ld out;
    c908 = `is.object`(l309);
    if c908 then L2934() else L2935(NULL, l309);
  D977():
    deopt 3769 [c882, year11];
  D982():
    deopt 3796 [];
  L557(c898, dx595):
    meta234 = ld meta;
    check L2927() else D981();
  L2918():
    r2087 = dyn Sys_getenv16("_R_CHECK_CRAN_INCOMING_TITLE_CASE_RECHECK_START_", "2016");
    check L2919() else D978();
  L2924():
    dr506 = tryDispatchBuiltin.1("[", meta231);
    dc253 = getTryDispatchBuiltinDispatched(dr506);
    if dc253 then L2926() else L2925(c891, dr506);
  L2925(c896, meta233):
    __121 = ldf `[` in base;
    r2090 = dyn __121(meta233, "Title");
    goto L557(c896, r2090);
  L2933(r2096, dx603):
    st out = dx603;
    goto L560();
  L2934():
    dr510 = tryDispatchBuiltin.0("$<-", l309, NULL);
    dc255 = getTryDispatchBuiltinDispatched(dr510);
    if dc255 then L2936() else L2935(NULL, dr510);
  L2935(r2094, l311):
    r2097 = `$<-`(l311, <sym title_case>, NULL);
    goto L2933(r2094, r2097);
  L2938():
    p450 = prom<V +>{
      out32 = ld out;
      out33 = force? out32;
      checkMissing(out33);
      c909 = `is.object`(out33);
      if c909 then L1() else L2(out33);
    L0(dx605):
      return dx605;
    L1():
      dr512 = tryDispatchBuiltin.1("$", out33);
      dc256 = getTryDispatchBuiltinDispatched(dr512);
      if dc256 then L3() else L2(dr512);
    L2(out35):
      r2099 = `$`(out35, <sym descr_bad_start>);
      goto L0(r2099);
    L3():
      dx604 = getTryDispatchBuiltinValue(dr512);
      goto L0(dx604);
    };
    r2101 = dyn NROW12(p450);
    check L2939() else D983();
  D978():
    deopt 3772 [c882, year11, r2087];
  D981():
    deopt 3781 [c898, dx595, meta234];
  D983():
    deopt 3798 [r2101];
  L2919():
    as_numeric5 = ldf `as.numeric` in base;
    r2088 = dyn as_numeric5(r2087);
    check L2920() else D979();
  L2926():
    dx594 = getTryDispatchBuiltinValue(dr506);
    goto L557(c891, dx594);
  L2927():
    meta235 = force? meta234;
    checkMissing(meta235);
    c899 = `is.object`(meta235);
    if c899 then L2928() else L2929(c898, dx595, meta235);
  L2936():
    dx602 = getTryDispatchBuiltinValue(dr510);
    goto L2933(NULL, dx602);
  L2939():
    c910 = `as.logical`(r2101);
    if c910 then L2940() else L561(c910);
  D979():
    deopt 3774 [c882, year11, r2088];
  L558(c903, dx600, dx601):
    r2092 = `==`(dx600, dx601);
    c904 = `as.logical`(r2092);
    c905 = `&&`(c903, c904);
    goto L556(c905);
  L561(c912):
    c916 = `as.logical`(c912);
    if c916 then L2944() else L562(c916);
  L2920():
    goto L555(c882, year11, r2088);
  L2928():
    dr508 = tryDispatchBuiltin.1("[", meta235);
    dc254 = getTryDispatchBuiltinDispatched(dr508);
    if dc254 then L2930() else L2929(c898, dx595, dr508);
  L2929(c901, dx597, meta237):
    __122 = ldf `[` in base;
    r2091 = dyn __122(meta237, "Title");
    goto L558(c901, dx597, r2091);
  L2940():
    config_val_to_logical13 = ldf config_val_to_logical;
    check L2941() else D984();
  D984():
    deopt 3800 [c910];
  L562(c918):
    c925 = `as.logical`(c918);
    if c925 then L2952() else L564();
  L2930():
    dx599 = getTryDispatchBuiltinValue(dr508);
    goto L558(c898, dx595, dx599);
  L2941():
    p451 = prom<V +>{
      Sys_getenv17 = ldf `Sys.getenv`;
      r2102 = dyn Sys_getenv17("_R_CHECK_CRAN_INCOMING_DESCR_BAD_START_RECHECK_MAYBE_", "TRUE");
      return r2102;
    };
    r2104 = dyn config_val_to_logical13(p451);
    check L2942() else D985();
  L2944():
    year15 = ld year;
    check L2945() else D986();
  D985():
    deopt 3802 [c910, r2104];
  D986():
    deopt 3804 [c916, year15];
  L564():
    goto L568();
  L568():
    NROW13 = ldf NROW;
    check L2970() else D998();
  L2942():
    c913 = `as.logical`(r2104);
    c914 = `&&`(c910, c913);
    goto L561(c914);
  L2945():
    year16 = force? year15;
    checkMissing(year16);
    sym174 = ldf `as.numeric`;
    base174 = ldf `as.numeric` in base;
    guard174 = `==`.4(sym174, base174);
    if guard174 then L2946() else L2947();
  L2952():
    trimws5 = ldf trimws;
    check L2953() else D990();
  D990():
    deopt 3817 [];
  D998():
    deopt 3851 [];
  L563(c921, year19, r2106):
    r2109 = `>=`(year19, r2106);
    c922 = `as.logical`(r2109);
    c923 = `&&`(c921, c922);
    goto L562(c923);
  L2946():
    Sys_getenv18 = ldf `Sys.getenv`;
    check L2948() else D987();
  L2947():
    r2105 = dyn base174(<lang Sys.getenv("_R_CHECK_CRAN_INCOMING_DESCR_BAD_START_RECHECK_START_", "2016")>);
    goto L563(c916, year16, r2105);
  L2953():
    p453 = prom<V +>{
      as_vector7 = ldf `as.vector`;
      p452 = prom<V +>{
        meta238 = ld meta0;
        meta239 = force? meta238;
        checkMissing(meta239);
        c926 = `is.object`(meta239);
        if c926 then L1() else L2(meta239);
      L0(dx607):
        return dx607;
      L1():
        dr514 = tryDispatchBuiltin.1("[", meta239);
        dc257 = getTryDispatchBuiltinDispatched(dr514);
        if dc257 then L3() else L2(dr514);
      L2(meta241):
        __123 = ldf `[` in base;
        r2110 = dyn __123(meta241, "Description");
        goto L0(r2110);
      L3():
        dx606 = getTryDispatchBuiltinValue(dr514);
        goto L0(dx606);
      };
      r2112 = dyn as_vector7(p452);
      return r2112;
    };
    r2114 = dyn trimws5(p453);
    check L2954() else D991();
  L2970():
    p459 = prom<V +>{
      out36 = ld out;
      out37 = force? out36;
      checkMissing(out37);
      c935 = `is.object`(out37);
      if c935 then L1() else L2(out37);
    L0(dx611):
      return dx611;
    L1():
      dr518 = tryDispatchBuiltin.1("$", out37);
      dc259 = getTryDispatchBuiltinDispatched(dr518);
      if dc259 then L3() else L2(dr518);
    L2(out39):
      r2131 = `$`(out39, <sym GNUmake>);
      goto L0(r2131);
    L3():
      dx610 = getTryDispatchBuiltinValue(dr518);
      goto L0(dx610);
    };
    r2133 = dyn NROW13(p459);
    check L2971() else D999();
  D987():
    deopt 3808 [c916, year16];
  D991():
    deopt 3819 [r2114];
  D999():
    deopt 3853 [r2133];
  L2948():
    r2107 = dyn Sys_getenv18("_R_CHECK_CRAN_INCOMING_DESCR_BAD_START_RECHECK_START_", "2016");
    check L2949() else D988();
  L2954():
    st descr0 = r2114;
    gsub10 = ldf gsub;
    check L2955() else D992();
  L2971():
    c936 = `as.logical`(r2133);
    if c936 then L2972() else L569(c936);
  D988():
    deopt 3811 [c916, year16, r2107];
  D992():
    deopt 3822 [];
  L569(c938):
    c942 = `as.logical`(c938);
    if c942 then L2976() else L570(c942);
  L2949():
    as_numeric6 = ldf `as.numeric` in base;
    r2108 = dyn as_numeric6(r2107);
    check L2950() else D989();
  L2955():
    p454 = prom<V +>{
      descr34 = ld descr0;
      descr35 = force? descr34;
      checkMissing(descr35);
      return descr35;
    };
    r2116 = dyn gsub10("[\n\t]", " ", p454);
    check L2956() else D993();
  L2972():
    config_val_to_logical14 = ldf config_val_to_logical;
    check L2973() else D1000();
  D989():
    deopt 3813 [c916, year16, r2108];
  D993():
    deopt 3826 [r2116];
  D1000():
    deopt 3855 [c936];
  L570(c944):
    c951 = `as.logical`(c944);
    if c951 then L2984() else L572();
  L2950():
    goto L563(c916, year16, r2108);
  L2956():
    st descr0 = r2116;
    grepl18 = ldf grepl;
    check L2957() else D994();
  L2973():
    p460 = prom<V +>{
      Sys_getenv19 = ldf `Sys.getenv`;
      r2134 = dyn Sys_getenv19("_R_CHECK_CRAN_INCOMING_GNU_MAKE_RECHECK_MAYBE_", "TRUE");
      return r2134;
    };
    r2136 = dyn config_val_to_logical14(p460);
    check L2974() else D1001();
  L2976():
    year20 = ld year;
    check L2977() else D1002();
  D994():
    deopt 3829 [];
  D1001():
    deopt 3857 [c936, r2136];
  D1002():
    deopt 3859 [c942, year20];
  L572():
    goto L578(NULL);
  L578(r2155):
    goto L579();
  L2957():
    p456 = prom<V +>{
      paste13 = ldf paste0;
      p455 = prom<V +>{
        package44 = ld package;
        package45 = force? package44;
        checkMissing(package45);
        return package45;
      };
      r2118 = dyn paste13("^['\"]?", p455);
      return r2118;
    };
    p457 = prom<V +>{
      descr36 = ld descr0;
      descr37 = force? descr36;
      checkMissing(descr37);
      return descr37;
    };
    r2121 = dyn grepl18[, `ignore.case`, ](p456, TRUE, p457);
    check L2958() else D995();
  L2974():
    c939 = `as.logical`(r2136);
    c940 = `&&`(c936, c939);
    goto L569(c940);
  L2977():
    year21 = force? year20;
    checkMissing(year21);
    sym175 = ldf `as.numeric`;
    base175 = ldf `as.numeric` in base;
    guard175 = `==`.4(sym175, base175);
    if guard175 then L2978() else L2979();
  L2984():
    meta242 = ld meta0;
    check L2985() else D1006();
  D995():
    deopt 3834 [r2121];
  D1006():
    deopt 3871 [meta242];
  L571(c947, year24, r2138):
    r2141 = `>=`(year24, r2138);
    c948 = `as.logical`(r2141);
    c949 = `&&`(c947, c948);
    goto L570(c949);
  L2958():
    c927 = `as.logical`(r2121);
    if c927 then L565(c927) else L2959();
  L2978():
    Sys_getenv20 = ldf `Sys.getenv`;
    check L2980() else D1003();
  L2979():
    r2137 = dyn base175(<lang Sys.getenv("_R_CHECK_CRAN_INCOMING_GNU_MAKE_RECHECK_START_", "2015")>);
    goto L571(c942, year21, r2137);
  L2985():
    meta243 = force? meta242;
    checkMissing(meta243);
    c952 = `is.object`(meta243);
    if c952 then L2986() else L2987(meta243);
  D1003():
    deopt 3863 [c942, year21];
  L565(c928):
    c933 = `as.logical`(c928);
    if c933 then L2963() else L566();
  L573(dx613):
    st SysReq0 = dx613;
    sym176 = ldf `is.na`;
    base176 = ldf `is.na` in base;
    guard176 = `==`.4(sym176, base176);
    if guard176 then L2989() else L2990();
  L2959():
    grepl19 = ldf grepl;
    check L2960() else D996();
  L2980():
    r2139 = dyn Sys_getenv20("_R_CHECK_CRAN_INCOMING_GNU_MAKE_RECHECK_START_", "2015");
    check L2981() else D1004();
  L2986():
    dr520 = tryDispatchBuiltin.1("[", meta243);
    dc260 = getTryDispatchBuiltinDispatched(dr520);
    if dc260 then L2988() else L2987(dr520);
  L2987(meta245):
    __124 = ldf `[` in base;
    r2142 = dyn __124(meta245, "SystemRequirements");
    goto L573(r2142);
  D996():
    deopt 3836 [c927];
  D1004():
    deopt 3866 [c942, year21, r2139];
  L566():
    goto L567(NULL);
  L567(r2129):
    goto L568();
  L574(r2144):
    r2146 = `!`(r2144);
    c953 = `as.logical`(r2146);
    if c953 then L2993() else L575(c953);
  L2960():
    p458 = prom<V +>{
      descr38 = ld descr0;
      descr39 = force? descr38;
      checkMissing(descr39);
      return descr39;
    };
    r2123 = dyn grepl19("^(The|This|A|In this|In the) package", p458);
    check L2961() else D997();
  L2963():
    l312 = ld out;
    c934 = `is.object`(l312);
    if c934 then L2965() else L2966(NULL, l312);
  L2981():
    as_numeric7 = ldf `as.numeric` in base;
    r2140 = dyn as_numeric7(r2139);
    check L2982() else D1005();
  L2988():
    dx612 = getTryDispatchBuiltinValue(dr520);
    goto L573(dx612);
  L2989():
    SysReq4 = ld SysReq0;
    check L2991() else D1007();
  L2990():
    r2143 = dyn base176(<sym SysReq0>);
    goto L574(r2143);
  D997():
    deopt 3839 [c927, r2123];
  D1005():
    deopt 3868 [c942, year21, r2140];
  D1007():
    deopt 3879 [SysReq4];
  L575(c955):
    c959 = `as.logical`(c955);
    if c959 then L2997() else L576();
  L2961():
    c930 = `as.logical`(r2123);
    c931 = `||`(c927, c930);
    goto L565(c931);
  L2964(r2127, dx609):
    st out = dx609;
    goto L567(r2127);
  L2965():
    dr516 = tryDispatchBuiltin.0("$<-", l312, NULL);
    dc258 = getTryDispatchBuiltinDispatched(dr516);
    if dc258 then L2967() else L2966(NULL, dr516);
  L2966(r2125, l314):
    r2128 = `$<-`(l314, <sym descr_bad_start>, NULL);
    goto L2964(r2125, r2128);
  L2982():
    goto L571(c942, year21, r2140);
  L2991():
    SysReq5 = force? SysReq4;
    checkMissing(SysReq5);
    is_na30 = ldf `is.na` in base;
    r2145 = dyn is_na30(SysReq5);
    check L2992() else D1008();
  L2993():
    grepl20 = ldf grepl;
    check L2994() else D1009();
  D1008():
    deopt 3882 [r2145];
  D1009():
    deopt 3885 [c953];
  L576():
    goto L577(NULL);
  L577(r2154):
    goto L578(r2154);
  L2967():
    dx608 = getTryDispatchBuiltinValue(dr516);
    goto L2964(NULL, dx608);
  L2992():
    goto L574(r2145);
  L2994():
    p461 = prom<V +>{
      SysReq6 = ld SysReq0;
      SysReq7 = force? SysReq6;
      checkMissing(SysReq7);
      return SysReq7;
    };
    r2148 = dyn grepl20("GNU [Mm]ake", p461);
    check L2995() else D1010();
  L2997():
    l315 = ld out;
    c960 = `is.object`(l315);
    if c960 then L2999() else L3000(NULL, l315);
  D1010():
    deopt 3888 [c953, r2148];
  L2995():
    c956 = `as.logical`(r2148);
    c957 = `&&`(c953, c956);
    goto L575(c957);
  L2998(r2152, dx615):
    st out = dx615;
    goto L577(r2152);
  L2999():
    dr522 = tryDispatchBuiltin.0("$<-", l315, NULL);
    dc261 = getTryDispatchBuiltinDispatched(dr522);
    if dc261 then L3001() else L3000(NULL, dr522);
  L3000(r2150, l317):
    r2153 = `$<-`(l317, <sym GNUmake>, NULL);
    goto L2998(r2150, r2153);
  L3001():
    dx614 = getTryDispatchBuiltinValue(dr522);
    goto L2998(NULL, dx614);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg file_path:cls, reg dir:*, reg dir1:V, reg p1:p(V +), reg p2:*, reg p3:V, reg p4:p(V +), reg r2:V, reg file_test:cls, reg fp:*, reg fp1:V, reg p5:p(V +), reg r4:V, reg c:L, reg readLines:cls, reg fp2:*, reg fp3:V, reg p6:p(V +), reg r6:V, reg grep:cls, reg lines:*, reg lines1:V, reg p7:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg p8:*, reg p9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg pos:*, reg pos1:V, reg length:cls, reg r13:V, reg c1:L, reg lines2:*, reg lines3:V, reg c2:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg lines8:V, reg r15:V, reg pos2:*, reg pos3:V, reg c3:L, reg lines10:V, reg pos5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg lines12:V, reg dx3:V, reg __:cls, reg r16:V, reg pos6:*, reg pos7:V, reg c4:L, reg lines14:V, reg pos9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg lines16:V, reg dx5:V, reg len:*, reg len1:V, reg __1:cls, reg r17:V, reg seq_int:cls, reg r18:V, reg __2:cls, reg r19:V, reg dx6:V, reg c5:cls, reg r20:V |
    mkenv;
    st p = p;
    file_path = ldf `file.path`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    p4 = prom<V +>{
      p2 = ld p;
      p3 = force? p2;
      checkMissing(p3);
      return p3;
    };
    r2 = dyn file_path(p1, p4);
    check L10() else D1();
  D1():
    deopt 4 [r2];
  L10():
    st fp = r2;
    file_test = ldf file_test;
    check L11() else D2();
  D2():
    deopt 7 [];
  L11():
    p5 = prom<V +>{
      fp = ld fp;
      fp1 = force? fp;
      checkMissing(fp1);
      return fp1;
    };
    r4 = dyn file_test("-f", p5);
    check L12() else D3();
  D3():
    deopt 10 [r4];
  L12():
    c = `as.logical`(r4);
    if c then L13() else L0();
  L0():
    popenv;
    return NULL;
  L13():
    readLines = ldf readLines;
    check L14() else D4();
  D4():
    deopt 12 [];
  L14():
    p6 = prom<V +>{
      fp2 = ld fp;
      fp3 = force? fp2;
      checkMissing(fp3);
      return fp3;
    };
    r6 = dyn readLines[, warn](p6, FALSE);
    check L15() else D5();
  D5():
    deopt 16 [r6];
  L15():
    st lines = r6;
    grep = ldf grep;
    check L16() else D6();
  D6():
    deopt 19 [];
  L16():
    p7 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r8 = dyn grep[, , useBytes]("[^[:blank:]]", p7, TRUE);
    check L17() else D7();
  D7():
    deopt 24 [r8];
  L17():
    st pos = r8;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r10):
    popenv;
    return r10;
  L18():
    p8 = ld p;
    check L20() else D8();
  L19():
    r9 = dyn base(<sym p>, <lang if(`<-`(len, length(pos)), {
        `[`(lines, seq.int(from=`[`(pos, 1), to=`[`(pos, len)))
      })>);
    goto L1(r9);
  D8():
    deopt 28 [p8];
  L20():
    p9 = force? p8;
    checkMissing(p9);
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L2(r12):
    st len = r12;
    c1 = `as.logical`(r12);
    if c1 then L25() else L3();
  L21():
    pos = ld pos;
    check L23() else D9();
  L22():
    r11 = dyn base1(<sym pos>);
    goto L2(r11);
  D9():
    deopt 32 [pos];
  L3():
    goto L8(NULL);
  L8(dx6):
    c5 = ldf c in base;
    r20 = dyn c5(p9, dx6);
    check L43() else D16();
  L23():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r13 = dyn length(pos1);
    check L24() else D10();
  L25():
    lines2 = ld lines;
    check L26() else D11();
  D10():
    deopt 35 [r13];
  D11():
    deopt 37 [lines2];
  D16():
    deopt 59 [r20];
  L24():
    goto L2(r13);
  L26():
    lines3 = force? lines2;
    checkMissing(lines3);
    c2 = `is.object`(lines3);
    if c2 then L27() else L28(lines3);
  L43():
    goto L1(r20);
  L4(dx1):
    goto L8(dx1);
  L27():
    dr = tryDispatchBuiltin.1("[", lines3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(lines5):
    sym2 = ldf `seq.int`;
    base2 = ldf `seq.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L5(lines8, r15):
    __2 = ldf `[` in base;
    r19 = dyn __2(lines8, r15);
    goto L4(r19);
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L30():
    pos2 = ld pos;
    check L32() else D12();
  L31():
    r14 = dyn base2[from, to](<lang `[`(pos, 1)>, <lang `[`(pos, len)>);
    goto L5(lines5, r14);
  D12():
    deopt 41 [lines5, pos2];
  L32():
    pos3 = force? pos2;
    checkMissing(pos3);
    c3 = `is.object`(pos3);
    if c3 then L33() else L34(lines5, pos3);
  L6(lines12, dx3):
    pos6 = ld pos;
    check L36() else D13();
  L33():
    dr2 = tryDispatchBuiltin.1("[", pos3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(lines5, dr2);
  L34(lines10, pos5):
    __ = ldf `[` in base;
    r16 = dyn __(pos5, 1);
    goto L6(lines10, r16);
  D13():
    deopt 47 [lines12, pos6];
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(lines5, dx2);
  L36():
    pos7 = force? pos6;
    checkMissing(pos7);
    c4 = `is.object`(pos7);
    if c4 then L37() else L38(lines12, pos7);
  L7(lines16, dx5):
    seq_int = ldf `seq.int` in base;
    r18 = dyn seq_int(dx3, dx5);
    check L41() else D15();
  L37():
    dr4 = tryDispatchBuiltin.1("[", pos7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L39() else L38(lines12, dr4);
  L38(lines14, pos9):
    len = ld len;
    check L40() else D14();
  D14():
    deopt 49 [lines14, pos9, len];
  D15():
    deopt 54 [lines16, r18];
  L39():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(lines12, dx4);
  L40():
    len1 = force? len;
    __1 = ldf `[` in base;
    r17 = dyn __1(pos9, len1);
    goto L7(lines14, r17);
  L41():
    goto L5(lines16, r18);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg paste0:cls, reg r:V, reg unlist:cls, reg regmatches:cls, reg s1:*, reg s2:V, reg p:p(V +), reg regexec:cls, reg re:*, reg re1:V, reg p1:p(V +), reg s3:*, reg s4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg s5:*, reg s6:V, reg length:cls, reg r11:V, reg c:L, reg c2:V, reg s7:*, reg s8:V, reg c3:L, reg c5:L, reg s10:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg __:cls, reg r12:V, reg r13:V, reg c8:L, reg c9:V |
    mkenv;
    st s = s;
    paste0 = ldf paste0;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn paste0("^", "[[:space:]]*", "([^<]*|\"([^\"]|\\\\\")*\")", "[[:space:]]*", "(<[^>]+>)", "[[:space:]]*", "(.*)", "[[:space:]]*", "$");
    check L4() else D1();
  D1():
    deopt 11 [r];
  L4():
    st re = r;
    unlist = ldf unlist;
    check L5() else D2();
  D2():
    deopt 14 [];
  L5():
    p4 = prom<V +>{
      regmatches = ldf regmatches;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      p3 = prom<V +>{
        regexec = ldf regexec;
        p1 = prom<V +>{
          re = ld re;
          re1 = force? re;
          checkMissing(re1);
          return re1;
        };
        p2 = prom<V +>{
          s3 = ld s;
          s4 = force? s3;
          checkMissing(s4);
          return s4;
        };
        r4 = dyn regexec(p1, p2);
        return r4;
      };
      r6 = dyn regmatches(p, p3);
      return r6;
    };
    r8 = dyn unlist(p4);
    check L6() else D3();
  D3():
    deopt 16 [r8];
  L6():
    st s = r8;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r10):
    c = `as.logical`(r10);
    if c then L11() else L1(c);
  L7():
    s5 = ld s;
    check L9() else D4();
  L8():
    r9 = dyn base(<sym s>);
    goto L0(r9);
  D4():
    deopt 20 [s5];
  L1(c2):
    popenv;
    return c2;
  L9():
    s6 = force? s5;
    checkMissing(s6);
    length = ldf length in base;
    r11 = dyn length(s6);
    check L10() else D5();
  L11():
    s7 = ld s;
    check L12() else D6();
  D5():
    deopt 23 [r11];
  D6():
    deopt 24 [c, s7];
  L10():
    goto L0(r11);
  L12():
    s8 = force? s7;
    checkMissing(s8);
    c3 = `is.object`(s8);
    if c3 then L13() else L14(c, s8);
  L2(c7, dx1):
    r13 = `==`(dx1, "");
    c8 = `as.logical`(r13);
    c9 = `&&`(c7, c8);
    goto L1(c9);
  L13():
    dr = tryDispatchBuiltin.1("[", s8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(c, dr);
  L14(c5, s10):
    __ = ldf `[` in base;
    r12 = dyn __(s10, 5);
    goto L2(c5, r12);
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(c, dx);
  }
}
fun inner1777898462(dir, meta) {
  (reg dir:*, reg meta:*) -+> V { var dir:*, var meta:*, reg meta_isMissing:L, reg meta_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg meta1:*, reg meta2:V, reg c:V, reg r2:V, reg c1:L, reg dir_create:cls, reg tempfile:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg on_exit:cls, reg r8:V, reg _write_description:cls, reg meta3:*, reg meta4:V, reg p1:p(V +), reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg list:cls, reg r20:V, reg ___:cls, reg r21:V, reg r22:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg ignore:*, reg ignore1:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg p6:p(V +), reg r29:V |
    mkenv;
    st dir = dir;
    meta_isMissing = missing.0(meta);
    if meta_isMissing then L0(NULL) else L0(meta);
  L0(meta_orDefault):
    st meta = meta_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L10() else L2();
  L7():
    meta1 = ld meta;
    check L9() else D0();
  L8():
    r = dyn base(<sym meta>);
    goto L1(r);
  D0():
    deopt 1 [meta1];
  L2():
    goto L4();
  L4():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L9():
    meta2 = force? meta1;
    checkMissing(meta2);
    c = `==`(meta2, NULL);
    goto L1(c);
  L10():
    dir_create = ldf `dir.create`;
    check L11() else D1();
  D1():
    deopt 6 [];
  L5(r16):
    st ignore = r16;
    ___ = ldf `:::`;
    check L24() else D7();
  L11():
    p = prom<V +>{
      tempfile = ldf tempfile;
      r3 = dyn tempfile[pattern]("aspell");
      st dir = r3;
      invisible.0();
      return r3;
    };
    r5 = dyn dir_create(p);
    check L12() else D2();
  L18():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L19():
    r15 = dyn base2[, perl](<lang c("(?<=[ \t[:punct:]])'[^']*'(?=[ \t[:punct:]])", "(?<=[ \t[:punct:]])([[:alnum:]]+::)?[[:alnum:]_.]*\\(\\)(?=[ \t[:punct:]])", "(?<=[<])(https?://|DOI:|doi:|arXiv:)[^>]+(?=[>])")>, TRUE);
    goto L5(r15);
  D2():
    deopt 8 [r5];
  D7():
    deopt 34 [];
  L6(r18):
    list = ldf list in base;
    r20 = dyn list(r18, TRUE);
    check L23() else D6();
  L12():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L20():
    c2 = ldf c in base;
    r19 = dyn c2("(?<=[ \t[:punct:]])'[^']*'(?=[ \t[:punct:]])", "(?<=[ \t[:punct:]])([[:alnum:]]+::)?[[:alnum:]_.]*\\(\\)(?=[ \t[:punct:]])", "(?<=[<])(https?://|DOI:|doi:|arXiv:)[^>]+(?=[>])");
    check L22() else D5();
  L21():
    r17 = dyn base3("(?<=[ \t[:punct:]])'[^']*'(?=[ \t[:punct:]])", "(?<=[ \t[:punct:]])([[:alnum:]]+::)?[[:alnum:]_.]*\\(\\)(?=[ \t[:punct:]])", "(?<=[<])(https?://|DOI:|doi:|arXiv:)[^>]+(?=[>])");
    goto L6(r17);
  L24():
    r21 = dyn ___("utils", "aspell_package_description");
    check L25() else D8();
  D5():
    deopt 27 [r19];
  D6():
    deopt 31 [r20];
  D8():
    deopt 37 [r21];
  L3():
    _write_description = ldf `.write_description`;
    check L15() else D3();
  L13():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang unlink(dir, recursive=TRUE)>);
    goto L3();
  L14():
    r6 = dyn base1(<lang unlink(dir, recursive=TRUE)>);
    goto L3();
  L22():
    goto L6(r19);
  L23():
    goto L5(r20);
  L25():
    checkFun.0(r21);
    r22 = r21 as cls;
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p5 = prom<V +>{
      ignore = ld ignore;
      ignore1 = force? ignore;
      checkMissing(ignore1);
      return ignore1;
    };
    p6 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c3 = ldf c in base;
      r27 = dyn c3("--master=en_US", "--add-extra-dicts=en_GB");
      goto L0(r27);
    L2():
      r25 = dyn base4("--master=en_US", "--add-extra-dicts=en_GB");
      goto L0(r25);
    };
    r29 = dyn r22[, ignore, control, program, dictionaries](p4, p5, p6, "aspell", "en_stats");
    check L26() else D9();
  D3():
    deopt 13 [];
  D9():
    deopt 48 [r29];
  L15():
    p1 = prom<V +>{
      meta3 = ld meta;
      meta4 = force? meta3;
      checkMissing(meta4);
      return meta4;
    };
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r11 = dyn file_path(p2, "DESCRIPTION");
      return r11;
    };
    r13 = dyn _write_description(p1, p3);
    check L16() else D4();
  L26():
    popenv;
    return r29;
  D4():
    deopt 16 [r13];
  L16():
    goto L4();
  }
}
fun inner3964289976(desc, field, default) {
  (reg desc:*, reg field:*, reg default:*) -+> V { var desc:*, var field:*, var default:*, reg str_parse_logic:cls, reg desc1:*, reg desc2:V, reg c:L, reg desc4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg field1:*, reg field2:V, reg __:cls, reg r:V, reg p:p(V +), reg default1:*, reg default2:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st desc = desc;
    st field = field;
    st default = default;
    str_parse_logic = ldf str_parse_logic;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      desc1 = ld desc;
      desc2 = force? desc1;
      checkMissing(desc2);
      c = `is.object`(desc2);
      if c then L1() else L2(desc2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", desc2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(desc4):
      field1 = ld field;
      field2 = force? field1;
      __ = ldf `[` in base;
      r = dyn __(desc4, field2);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      default1 = ld default;
      default2 = force? default1;
      checkMissing(default2);
      return default2;
    };
    r3 = dyn str_parse_logic[, default](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1432497010(Rd) {
  (reg Rd:*) -+> V { var Rd:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getDynamicFlags:cls, reg Rd1:*, reg Rd2:V, reg p:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg any:cls, reg r7:V |
    mkenv;
    st Rd = Rd;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    getDynamicFlags = ldf getDynamicFlags;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[`(getDynamicFlags(Rd), "build")>);
    goto L0(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      Rd1 = ld Rd;
      Rd2 = force? Rd1;
      checkMissing(Rd2);
      return Rd2;
    };
    r3 = dyn getDynamicFlags(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    c = `is.object`(r3);
    if c then L6() else L7(r3);
  L1(dx1):
    any = ldf any in base;
    r7 = dyn any(dx1);
    check L9() else D2();
  L6():
    dr = tryDispatchBuiltin.1("[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r5):
    __ = ldf `[` in base;
    r6 = dyn __(r5, "build");
    goto L1(r6);
  D2():
    deopt 10 [r7];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    goto L0(r7);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg Map:cls, reg r:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg names:cls, reg r4:V, reg p1:p(V +), reg x3:*, reg x4:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st x = x;
    Map = ldf Map;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      r = clos inner70248491;
      return r;
    };
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r4 = dyn names(x2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn Map(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner70248491(f, e) {
  (reg f:*, reg e:*) -+> V { var f:*, var e:*, reg vapply:cls, reg e1:*, reg e2:V, reg p:p(V +), reg _Rd_deparse:*, reg _Rd_deparse1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg paste0:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg paste1:cls, reg gsub:cls, reg ifelse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg e3:*, reg e4:V, reg nchar:cls, reg r11:V, reg r12:V, reg p4:p(V +), reg e5:*, reg e6:V, reg p5:p(V +), reg paste2:cls, reg substr:cls, reg e7:*, reg e8:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg p10:p(V +), reg r24:V, reg c:cls, reg r25:V |
    mkenv;
    st f = f;
    st e = e;
    vapply = ldf vapply;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p1 = prom<V +>{
      _Rd_deparse = ld `.Rd_deparse`;
      _Rd_deparse1 = force? _Rd_deparse;
      checkMissing(_Rd_deparse1);
      return _Rd_deparse1;
    };
    r2 = dyn vapply(p, p1, "");
    check L2() else D1();
  D1():
    deopt 5 [r2];
  L2():
    st e = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r4):
    popenv;
    return r4;
  L3():
    paste0 = ldf paste0;
    check L5() else D2();
  L4():
    r3 = dyn base(<lang paste0("  File ", sQuote(f), ":")>, <lang paste0("    ", gsub("\n", "\n      ", ifelse(`<`(nchar(e), 50), e, paste(substr(e, 1, 50), "[TRUNCATED]"))))>);
    goto L0(r3);
  D2():
    deopt 10 [];
  L5():
    p3 = prom<V +>{
      sQuote = ldf sQuote;
      p2 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r6 = dyn sQuote(p2);
      return r6;
    };
    r8 = dyn paste0("  File ", p3, ":");
    check L6() else D3();
  D3():
    deopt 14 [r8];
  L6():
    paste1 = ldf paste0;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p10 = prom<V +>{
      gsub = ldf gsub;
      p9 = prom<V +>{
        ifelse = ldf ifelse;
        p4 = prom<V +>{
          sym1 = ldf nchar;
          base1 = ldf nchar in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r10):
          r12 = `<`(r10, 50);
          return r12;
        L1():
          e3 = ld e;
          e4 = force? e3;
          checkMissing(e4);
          nchar = ldf nchar in base;
          r11 = dyn nchar(e4, "chars", FALSE, NA_LGL);
          goto L0(r11);
        L2():
          r9 = dyn base1(<sym e>);
          goto L0(r9);
        };
        p5 = prom<V +>{
          e5 = ld e;
          e6 = force? e5;
          checkMissing(e6);
          return e6;
        };
        p8 = prom<V +>{
          paste2 = ldf paste;
          p7 = prom<V +>{
            substr = ldf substr;
            p6 = prom<V +>{
              e7 = ld e;
              e8 = force? e7;
              checkMissing(e8);
              return e8;
            };
            r16 = dyn substr(p6, 1, 50);
            return r16;
          };
          r18 = dyn paste2(p7, "[TRUNCATED]");
          return r18;
        };
        r20 = dyn ifelse(p4, p5, p8);
        return r20;
      };
      r22 = dyn gsub("\n", "\n      ", p9);
      return r22;
    };
    r24 = dyn paste1("    ", p10);
    check L8() else D5();
  D5():
    deopt 19 [r24];
  L8():
    c = ldf c in base;
    r25 = dyn c(r8, r24);
    check L9() else D6();
  D6():
    deopt 21 [r25];
  L9():
    goto L0(r25);
  }
}
fun inner2843998100(cfile, meta) {
  (reg cfile:*, reg meta:*) -+> V { var cfile:*, var meta:*, reg _libPaths:cls, reg r:V, reg _libPaths1:cls, reg character:cls, reg r1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg on_exit:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg list:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg system_file:cls, reg meta1:*, reg meta2:V, reg c:L, reg meta4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg nzchar:cls, reg r15:V, reg installed:*, reg installed1:V, reg c1:L, reg _parse_code_file:cls, reg cfile1:*, reg cfile2:V, reg p2:p(V +), reg meta5:*, reg meta6:V, reg c2:L, reg meta8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg vapply:cls, reg ccalls:*, reg ccalls1:V, reg p4:p(V +), reg r21:cls, reg p5:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg ind:*, reg ind1:V, reg any:cls, reg r26:V, reg c3:L, reg ccalls2:*, reg ccalls3:V, reg c4:L, reg ccalls5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg r27:V, reg __2:cls, reg r28:V, reg _find_calls:cls, reg ccalls6:*, reg ccalls7:V, reg p6:p(V +), reg r30:V, reg intersect:cls, reg unique:cls, reg _call_names:cls, reg ccalls8:*, reg ccalls9:V, reg p7:p(V +), reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg c5:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg cnames:*, reg cnames1:V, reg length:cls, reg r43:V, reg c6:L, reg cnames2:*, reg cnames3:V, reg l:*, reg c7:L, reg cnames5:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx7:V, reg cnames7:V, reg dx8:V, reg r44:V, reg cnames8:V, reg character1:cls, reg r45:V, reg withCallingHandlers:cls, reg tryCatch:cls, reg __3:cls, reg r46:V, reg r47:cls, reg cfile3:*, reg cfile4:V, reg p11:p(V +), reg meta9:*, reg meta10:V, reg p12:p(V +), reg r50:V, reg p13:p(V +), reg identity:*, reg identity1:V, reg p14:p(V +), reg r53:V, reg p15:p(V +), reg r55:cls, reg p16:p(V +), reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg cinfo:*, reg cinfo1:V, reg inherits:cls, reg r60:V, reg c8:L, reg installed2:*, reg installed3:V, reg c9:L, reg conditionMessage:cls, reg cinfo2:*, reg cinfo3:V, reg p17:p(V +), reg r62:V, reg l3:*, reg c10:L, reg r64:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r66:V, reg dx10:V, reg r67:V, reg conditionMessage1:cls, reg cinfo4:*, reg cinfo5:V, reg p18:p(V +), reg r70:V, reg l6:*, reg c11:L, reg r72:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx11:V, reg r74:V, reg dx12:V, reg r75:V, reg out:*, reg out1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r78:V, reg r79:V, reg _warnings:*, reg _warnings1:V, reg length1:cls, reg r80:V, reg c12:L, reg unique1:cls, reg _warnings2:*, reg _warnings3:V, reg p19:p(V +), reg r82:V, reg l9:*, reg c13:L, reg r84:V, reg l11:*, reg dr12:V, reg dc6:L, reg dx13:V, reg r86:V, reg dx14:V, reg r87:V, reg tryCatch1:cls, reg format:cls, reg cinfo6:*, reg cinfo7:V, reg p20:p(V +), reg r90:V, reg p21:p(V +), reg identity2:*, reg identity3:V, reg p22:p(V +), reg identity4:*, reg identity5:V, reg p23:p(V +), reg r94:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r95:V, reg r96:V, reg cfmt:*, reg cfmt1:V, reg inherits1:cls, reg r97:V, reg c14:L, reg conditionMessage2:cls, reg cfmt2:*, reg cfmt3:V, reg p24:p(V +), reg r99:V, reg l12:*, reg c15:L, reg r101:V, reg l14:*, reg dr14:V, reg dc7:L, reg dx15:V, reg r103:V, reg dx16:V, reg r104:V, reg installed4:*, reg installed5:V, reg r106:V, reg c16:L, reg _find_calls1:cls, reg _parse_code_file1:cls, reg cfile5:*, reg cfile6:V, reg p25:p(V +), reg meta11:*, reg meta12:V, reg c17:L, reg meta14:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __4:cls, reg r108:V, reg p26:p(V +), reg r110:V, reg p27:p(V +), reg r112:V, reg _call_names1:cls, reg ccalls10:*, reg ccalls11:V, reg p28:p(V +), reg r115:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r116:V, reg r117:V, reg _in_:cls, reg cnames10:*, reg cnames11:V, reg p29:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r119:V, reg r120:V, reg c18:cls, reg r121:V, reg p30:p(V +), reg r123:V, reg any1:cls, reg r124:V, reg c19:L, reg l15:*, reg c20:L, reg r126:L, reg l17:*, reg dr18:V, reg dc9:L, reg dx19:V, reg r128:L, reg dx20:V, reg r129:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r131:V, reg r132:V, reg cnames12:*, reg cnames13:V, reg r133:V, reg any2:cls, reg r134:V, reg c21:L, reg l18:*, reg c22:L, reg r136:L, reg l20:*, reg dr20:V, reg dc10:L, reg dx21:V, reg r138:L, reg dx22:V, reg r139:V, reg out2:*, reg out3:V |
    mkenv;
    st cfile = cfile;
    st meta = meta;
    _libPaths = ldf `.libPaths`;
    check L31() else D0();
  D0():
    deopt 1 [];
  L31():
    r = dyn _libPaths();
    check L32() else D1();
  D1():
    deopt 2 [r];
  L32():
    st libpaths = r;
    _libPaths1 = ldf `.libPaths`;
    check L33() else D2();
  D2():
    deopt 5 [];
  L33():
    p = prom<V +>{
      character = ldf character;
      r1 = dyn character();
      return r1;
    };
    r3 = dyn _libPaths1(p);
    check L34() else D3();
  D3():
    deopt 7 [r3];
  L34():
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L0():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L35():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang .libPaths(libpaths)>);
    goto L0();
  L36():
    r4 = dyn base(<lang .libPaths(libpaths)>);
    goto L0();
  L1(r8):
    st out = r8;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L37():
    list = ldf list in base;
    r9 = dyn list();
    check L39() else D4();
  L38():
    r7 = dyn base1();
    goto L1(r7);
  D4():
    deopt 14 [r9];
  L2(r11):
    st installed = r11;
    installed = ld installed;
    check L45() else D8();
  L39():
    goto L1(r9);
  L40():
    system_file = ldf `system.file`;
    check L42() else D5();
  L41():
    r10 = dyn base2(<lang system.file(package=`[`(meta, "Package"))>);
    goto L2(r10);
  D5():
    deopt 19 [];
  D8():
    deopt 26 [installed];
  L42():
    p1 = prom<V +>{
      meta1 = ld meta;
      meta2 = force? meta1;
      checkMissing(meta2);
      c = `is.object`(meta2);
      if c then L1() else L2(meta2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", meta2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(meta4):
      __ = ldf `[` in base;
      r12 = dyn __(meta4, "Package");
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn system_file[package](p1);
    check L43() else D6();
  L45():
    installed1 = force? installed;
    checkMissing(installed1);
    c1 = `as.logical`(installed1);
    if c1 then L46() else L3();
  D6():
    deopt 22 [r14];
  L3():
    goto L11();
  L11():
    character1 = ldf character;
    check L78() else D24();
  L43():
    nzchar = ldf nzchar in base;
    r15 = dyn nzchar(r14);
    check L44() else D7();
  L46():
    _parse_code_file = ldf `.parse_code_file`;
    check L47() else D9();
  D7():
    deopt 24 [r15];
  D9():
    deopt 29 [];
  D24():
    deopt 85 [];
  L44():
    goto L2(r15);
  L47():
    p2 = prom<V +>{
      cfile1 = ld cfile;
      cfile2 = force? cfile1;
      checkMissing(cfile2);
      return cfile2;
    };
    p3 = prom<V +>{
      meta5 = ld meta;
      meta6 = force? meta5;
      checkMissing(meta6);
      c2 = `is.object`(meta6);
      if c2 then L1() else L2(meta6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", meta6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(meta8):
      __1 = ldf `[` in base;
      r17 = dyn __1(meta8, "Encoding");
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r19 = dyn _parse_code_file(p2, p3);
    check L48() else D10();
  L78():
    r45 = dyn character1();
    check L79() else D25();
  D10():
    deopt 32 [r19];
  D25():
    deopt 86 [r45];
  L48():
    st ccalls = r19;
    vapply = ldf vapply;
    check L49() else D11();
  L79():
    st `.warnings` = r45;
    withCallingHandlers = ldf withCallingHandlers;
    check L80() else D26();
  D11():
    deopt 35 [];
  D26():
    deopt 89 [];
  L49():
    p4 = prom<V +>{
      ccalls = ld ccalls;
      ccalls1 = force? ccalls;
      checkMissing(ccalls1);
      return ccalls1;
    };
    p5 = prom<V +>{
      r21 = clos inner3708401697;
      return r21;
    };
    r23 = dyn vapply(p4, p5, NA_LGL);
    check L50() else D12();
  L80():
    p15 = prom<V +>{
      tryCatch = ldf tryCatch;
      p13 = prom<V +>{
        __3 = ldf `::`;
        r46 = dyn __3("utils", "readCitationFile");
        checkFun.0(r46);
        r47 = r46 as cls;
        p11 = prom<V +>{
          cfile3 = ld cfile;
          cfile4 = force? cfile3;
          checkMissing(cfile4);
          return cfile4;
        };
        p12 = prom<V +>{
          meta9 = ld meta;
          meta10 = force? meta9;
          checkMissing(meta10);
          return meta10;
        };
        r50 = dyn r47(p11, p12);
        return r50;
      };
      p14 = prom<V +>{
        identity = ld identity;
        identity1 = force? identity;
        checkMissing(identity1);
        return identity1;
      };
      r53 = dyn tryCatch[, error](p13, p14);
      return r53;
    };
    p16 = prom<V +>{
      r55 = clos inner3708401697;
      return r55;
    };
    r57 = dyn withCallingHandlers[, warning](p15, p16);
    check L81() else D27();
  D12():
    deopt 39 [r23];
  D27():
    deopt 93 [r57];
  L50():
    st ind = r23;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L81():
    st cinfo = r57;
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L4(r25):
    c3 = `as.logical`(r25);
    if c3 then L55() else L5();
  L12(r59):
    c8 = `as.logical`(r59);
    if c8 then L86() else L13();
  L51():
    ind = ld ind;
    check L53() else D13();
  L52():
    r24 = dyn base3(<sym ind>);
    goto L4(r24);
  L82():
    cinfo = ld cinfo;
    check L84() else D28();
  L83():
    r58 = dyn base6(<sym cinfo>, "error");
    goto L12(r58);
  D13():
    deopt 43 [ind];
  D28():
    deopt 97 [cinfo];
  L5():
    goto L7();
  L7():
    _find_calls = ldf `.find_calls`;
    check L62() else D17();
  L13():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L53():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r26 = dyn any(ind1);
    check L54() else D14();
  L55():
    ccalls2 = ld ccalls;
    check L56() else D15();
  L84():
    cinfo1 = force? cinfo;
    checkMissing(cinfo1);
    inherits = ldf inherits in base;
    r60 = dyn inherits(cinfo1, "error", FALSE);
    check L85() else D29();
  L86():
    installed2 = ld installed;
    check L87() else D30();
  D14():
    deopt 46 [r26];
  D15():
    deopt 47 [ccalls2];
  D17():
    deopt 57 [];
  D29():
    deopt 102 [r60];
  D30():
    deopt 103 [installed2];
  L17(r79):
    c12 = `as.logical`(r79);
    if c12 then L109() else L18();
  L54():
    goto L4(r26);
  L56():
    ccalls3 = force? ccalls2;
    checkMissing(ccalls3);
    c4 = `is.object`(ccalls3);
    if c4 then L57() else L58(ccalls3);
  L62():
    p6 = prom<V +>{
      ccalls6 = ld ccalls;
      ccalls7 = force? ccalls6;
      checkMissing(ccalls7);
      return ccalls7;
    };
    r30 = dyn _find_calls[, recursive](p6, TRUE);
    check L63() else D18();
  L85():
    goto L12(r60);
  L87():
    installed3 = force? installed2;
    checkMissing(installed3);
    c9 = `as.logical`(installed3);
    if c9 then L88() else L14();
  L105():
    _warnings = ld `.warnings`;
    check L107() else D36();
  L106():
    r78 = dyn base7(<sym .warnings>);
    goto L17(r78);
  D18():
    deopt 61 [r30];
  D36():
    deopt 126 [_warnings];
  L6(dx5):
    st ccalls = dx5;
    goto L7();
  L14():
    conditionMessage1 = ldf conditionMessage;
    check L96() else D33();
  L15():
    out = ld out;
    check L102() else D35();
  L18():
    goto L19();
  L19():
    tryCatch1 = ldf tryCatch;
    check L117() else D40();
  L57():
    dr4 = tryDispatchBuiltin.1("[", ccalls3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L59() else L58(dr4);
  L58(ccalls5):
    ind2 = ld ind;
    check L60() else D16();
  L63():
    st ccalls = r30;
    intersect = ldf intersect;
    check L64() else D19();
  L88():
    conditionMessage = ldf conditionMessage;
    check L89() else D31();
  L107():
    _warnings1 = force? _warnings;
    checkMissing(_warnings1);
    length1 = ldf length in base;
    r80 = dyn length1(_warnings1);
    check L108() else D37();
  L109():
    unique1 = ldf unique;
    check L110() else D38();
  D16():
    deopt 49 [ccalls5, ind2];
  D19():
    deopt 64 [];
  D31():
    deopt 106 [];
  D33():
    deopt 113 [];
  D35():
    deopt 119 [out];
  D37():
    deopt 129 [r80];
  D38():
    deopt 131 [];
  D40():
    deopt 140 [];
  L59():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L60():
    ind3 = force? ind2;
    checkMissing(ind3);
    r27 = `!`(ind3);
    __2 = ldf `[` in base;
    r28 = dyn __2(ccalls5, r27);
    goto L6(r28);
  L64():
    p9 = prom<V +>{
      unique = ldf unique;
      p8 = prom<V +>{
        _call_names = ldf `.call_names`;
        p7 = prom<V +>{
          ccalls8 = ld ccalls;
          ccalls9 = force? ccalls8;
          checkMissing(ccalls9);
          return ccalls9;
        };
        r32 = dyn _call_names(p7);
        return r32;
      };
      r34 = dyn unique(p8);
      return r34;
    };
    p10 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c5 = ldf c in base;
      r38 = dyn c5("packageDescription", "library", "require");
      goto L0(r38);
    L2():
      r36 = dyn base4("packageDescription", "library", "require");
      goto L0(r36);
    };
    r40 = dyn intersect(p9, p10);
    check L65() else D20();
  L89():
    p17 = prom<V +>{
      cinfo2 = ld cinfo;
      cinfo3 = force? cinfo2;
      checkMissing(cinfo3);
      return cinfo3;
    };
    r62 = dyn conditionMessage(p17);
    check L90() else D32();
  L96():
    p18 = prom<V +>{
      cinfo4 = ld cinfo;
      cinfo5 = force? cinfo4;
      checkMissing(cinfo5);
      return cinfo5;
    };
    r70 = dyn conditionMessage1(p18);
    check L97() else D34();
  L102():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  L108():
    goto L17(r80);
  L110():
    p19 = prom<V +>{
      _warnings2 = ld `.warnings`;
      _warnings3 = force? _warnings2;
      checkMissing(_warnings3);
      return _warnings3;
    };
    r82 = dyn unique1(p19);
    check L111() else D39();
  L117():
    p21 = prom<V +>{
      format = ldf format;
      p20 = prom<V +>{
        cinfo6 = ld cinfo;
        cinfo7 = force? cinfo6;
        checkMissing(cinfo7);
        return cinfo7;
      };
      r90 = dyn format[, style](p20, "text");
      return r90;
    };
    p22 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    p23 = prom<V +>{
      identity4 = ld identity;
      identity5 = force? identity4;
      checkMissing(identity5);
      return identity5;
    };
    r94 = dyn tryCatch1[, warning, error](p21, p22, p23);
    check L118() else D41();
  D20():
    deopt 67 [r40];
  D32():
    deopt 108 [r62];
  D34():
    deopt 115 [r70];
  D39():
    deopt 133 [r82];
  D41():
    deopt 146 [r94];
  L65():
    st cnames = r40;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L90():
    l3 = ld out;
    c10 = `is.object`(l3);
    if c10 then L92() else L93(r62, l3);
  L97():
    l6 = ld out;
    c11 = `is.object`(l6);
    if c11 then L99() else L100(r70, l6);
  L111():
    l9 = ld out;
    c13 = `is.object`(l9);
    if c13 then L113() else L114(r82, l9);
  L118():
    st cfmt = r94;
    sym8 = ldf inherits;
    base8 = ldf inherits in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L119() else L120();
  L8(r42):
    c6 = `as.logical`(r42);
    if c6 then L70() else L9();
  L20(r96):
    c14 = `as.logical`(r96);
    if c14 then L123() else L21();
  L66():
    cnames = ld cnames;
    check L68() else D21();
  L67():
    r41 = dyn base5(<sym cnames>);
    goto L8(r41);
  L91(r66, dx10):
    st out = dx10;
    goto L15();
  L92():
    dr8 = tryDispatchBuiltin.0("$<-", l3, r62);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L94() else L93(r62, dr8);
  L93(r64, l5):
    r67 = `$<-`(l5, <sym citation_error_reading_if_installed>, r62);
    goto L91(r64, r67);
  L98(r74, dx12):
    st out = dx12;
    goto L15();
  L99():
    dr10 = tryDispatchBuiltin.0("$<-", l6, r70);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L101() else L100(r70, dr10);
  L100(r72, l8):
    r75 = `$<-`(l8, <sym citation_error_reading_if_not_installed>, r70);
    goto L98(r72, r75);
  L112(r86, dx14):
    st out = dx14;
    goto L19();
  L113():
    dr12 = tryDispatchBuiltin.0("$<-", l9, r82);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L115() else L114(r82, dr12);
  L114(r84, l11):
    r87 = `$<-`(l11, <sym citation_trouble_when_reading>, r82);
    goto L112(r84, r87);
  L119():
    cfmt = ld cfmt;
    check L121() else D42();
  L120():
    r95 = dyn base8(<sym cfmt>, "condition");
    goto L20(r95);
  D21():
    deopt 71 [cnames];
  D42():
    deopt 150 [cfmt];
  L9():
    goto L10(NULL);
  L10(cnames8):
    goto L11();
  L21():
    goto L22();
  L22():
    installed4 = ld installed;
    check L131() else D46();
  L68():
    cnames1 = force? cnames;
    checkMissing(cnames1);
    length = ldf length in base;
    r43 = dyn length(cnames1);
    check L69() else D22();
  L70():
    cnames2 = ld cnames;
    check L71() else D23();
  L94():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L91(r62, dx9);
  L101():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L98(r70, dx11);
  L115():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L112(r82, dx13);
  L121():
    cfmt1 = force? cfmt;
    checkMissing(cfmt1);
    inherits1 = ldf inherits in base;
    r97 = dyn inherits1(cfmt1, "condition", FALSE);
    check L122() else D43();
  L123():
    conditionMessage2 = ldf conditionMessage;
    check L124() else D44();
  D22():
    deopt 74 [r43];
  D23():
    deopt 75 [cnames2];
  D43():
    deopt 155 [r97];
  D44():
    deopt 157 [];
  D46():
    deopt 165 [installed4];
  L69():
    goto L8(r43);
  L71():
    cnames3 = force? cnames2;
    checkMissing(cnames3);
    l = ld out;
    c7 = `is.object`(l);
    if c7 then L73() else L74(cnames3, l);
  L122():
    goto L20(r97);
  L124():
    p24 = prom<V +>{
      cfmt2 = ld cfmt;
      cfmt3 = force? cfmt2;
      checkMissing(cfmt3);
      return cfmt3;
    };
    r99 = dyn conditionMessage2(p24);
    check L125() else D45();
  L131():
    installed5 = force? installed4;
    checkMissing(installed5);
    r106 = `!`(installed5);
    c16 = `as.logical`(r106);
    if c16 then L132() else L23();
  D45():
    deopt 159 [r99];
  L23():
    goto L24();
  L24():
    _call_names1 = ldf `.call_names`;
    check L136() else D49();
  L72(cnames7, dx8):
    st out = dx8;
    goto L10(cnames7);
  L73():
    dr6 = tryDispatchBuiltin.0("$<-", l, cnames3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(cnames3, dr6);
  L74(cnames5, l2):
    r44 = `$<-`(l2, <sym citation_calls>, cnames3);
    goto L72(cnames5, r44);
  L125():
    l12 = ld out;
    c15 = `is.object`(l12);
    if c15 then L127() else L128(r99, l12);
  L132():
    _find_calls1 = ldf `.find_calls`;
    check L133() else D47();
  D47():
    deopt 169 [];
  D49():
    deopt 178 [];
  L75():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L72(cnames3, dx7);
  L126(r103, dx16):
    st out = dx16;
    goto L22();
  L127():
    dr14 = tryDispatchBuiltin.0("$<-", l12, r99);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L129() else L128(r99, dr14);
  L128(r101, l14):
    r104 = `$<-`(l14, <sym citation_problem_when_formatting>, r99);
    goto L126(r101, r104);
  L133():
    p27 = prom<V +>{
      _parse_code_file1 = ldf `.parse_code_file`;
      p25 = prom<V +>{
        cfile5 = ld cfile;
        cfile6 = force? cfile5;
        checkMissing(cfile6);
        return cfile6;
      };
      p26 = prom<V +>{
        meta11 = ld meta;
        meta12 = force? meta11;
        checkMissing(meta12);
        c17 = `is.object`(meta12);
        if c17 then L1() else L2(meta12);
      L0(dx18):
        return dx18;
      L1():
        dr16 = tryDispatchBuiltin.1("[", meta12);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(meta14):
        __4 = ldf `[` in base;
        r108 = dyn __4(meta14, "Encoding");
        goto L0(r108);
      L3():
        dx17 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx17);
      };
      r110 = dyn _parse_code_file1(p25, p26);
      return r110;
    };
    r112 = dyn _find_calls1[, recursive](p27, TRUE);
    check L134() else D48();
  L136():
    p28 = prom<V +>{
      ccalls10 = ld ccalls;
      ccalls11 = force? ccalls10;
      checkMissing(ccalls11);
      return ccalls11;
    };
    r115 = dyn _call_names1(p28);
    check L137() else D50();
  D48():
    deopt 173 [r112];
  D50():
    deopt 180 [r115];
  L129():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L126(r99, dx15);
  L134():
    st ccalls = r112;
    goto L24();
  L137():
    st cnames = r115;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L138() else L139();
  L25(r117):
    c19 = `as.logical`(r117);
    if c19 then L143() else L26();
  L138():
    _in_ = ldf `%in%`;
    check L140() else D51();
  L139():
    r116 = dyn base9(<lang `%in%`(cnames, c("personList", "as.personList"))>);
    goto L25(r116);
  D51():
    deopt 185 [];
  L26():
    goto L27();
  L27():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L149() else L150();
  L140():
    p29 = prom<V +>{
      cnames10 = ld cnames;
      cnames11 = force? cnames10;
      checkMissing(cnames11);
      return cnames11;
    };
    p30 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      c18 = ldf c in base;
      r121 = dyn c18("personList", "as.personList");
      goto L0(r121);
    L2():
      r119 = dyn base10("personList", "as.personList");
      goto L0(r119);
    };
    r123 = dyn _in_(p29, p30);
    check L141() else D52();
  L143():
    l15 = ld out;
    c20 = `is.object`(l15);
    if c20 then L145() else L146(TRUE, l15);
  D52():
    deopt 188 [r123];
  L28(r132):
    c21 = `as.logical`(r132);
    if c21 then L153() else L29();
  L141():
    any1 = ldf any in base;
    r124 = dyn any1(r123);
    check L142() else D53();
  L144(r128, dx20):
    st out = dx20;
    goto L27();
  L145():
    dr18 = tryDispatchBuiltin.0("$<-", l15, TRUE);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L147() else L146(TRUE, dr18);
  L146(r126, l17):
    r129 = `$<-`(l17, <sym citation_has_calls_to_personList_et_al>, TRUE);
    goto L144(r126, r129);
  L149():
    cnames12 = ld cnames;
    check L151() else D54();
  L150():
    r131 = dyn base11(<lang `==`(cnames, "citEntry")>);
    goto L28(r131);
  D53():
    deopt 190 [r124];
  D54():
    deopt 200 [cnames12];
  L29():
    goto L30();
  L30():
    out2 = ld out;
    check L159() else D56();
  L142():
    goto L25(r124);
  L147():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L144(TRUE, dx19);
  L151():
    cnames13 = force? cnames12;
    checkMissing(cnames13);
    r133 = `==`(cnames13, "citEntry");
    any2 = ldf any in base;
    r134 = dyn any2(r133);
    check L152() else D55();
  L153():
    l18 = ld out;
    c22 = `is.object`(l18);
    if c22 then L155() else L156(TRUE, l18);
  D55():
    deopt 205 [r134];
  D56():
    deopt 213 [out2];
  L152():
    goto L28(r134);
  L154(r138, dx22):
    st out = dx22;
    goto L30();
  L155():
    dr20 = tryDispatchBuiltin.0("$<-", l18, TRUE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L157() else L156(TRUE, dr20);
  L156(r136, l20):
    r139 = `$<-`(l20, <sym citation_has_calls_to_citEntry>, TRUE);
    goto L154(r136, r139);
  L159():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  L157():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L154(TRUE, dx21);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c14:L, reg r8:V, reg deparse:cls, reg e5:*, reg e6:V, reg c15:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p:p(V +), reg r11:V, reg identical:cls, reg r12:V, reg c16:L, reg c17:V, reg c19:L, reg c21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c24:L, reg r14:V, reg deparse1:cls, reg e9:*, reg e10:V, reg c25:L, reg e12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg identical1:cls, reg r18:V, reg c26:L, reg c27:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1(c);
  L7():
    e1 = ld e;
    check L9() else D0();
  L8():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L17() else L3(c9);
  L9():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L10() else D1();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    r6 = `==`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3(c11):
    c19 = `as.logical`(c11);
    if c19 then L24() else L5(c19);
  L10():
    goto L0(r2);
  L12():
    e3 = ld e;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym e>);
    goto L2(c, r3);
  L17():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D2():
    deopt 8 [c, e3];
  L4(c14, r8):
    c16 = `as.logical`(r8);
    c17 = `&&`(c14, c16);
    goto L3(c17);
  L5(c21):
    popenv;
    return c21;
  L14():
    e4 = force? e3;
    checkMissing(e4);
    length = ldf length in base;
    r5 = dyn length(e4);
    check L15() else D3();
  L18():
    deparse = ldf deparse;
    check L20() else D4();
  L19():
    r7 = dyn base2(<lang deparse(`[[`(e, 1))>, "if");
    goto L4(c9, r7);
  L24():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D3():
    deopt 11 [c, r5];
  D4():
    deopt 18 [c9];
  L6(c24, r14):
    c26 = `as.logical`(r14);
    c27 = `&&`(c24, c26);
    goto L5(c27);
  L15():
    goto L2(c, r5);
  L20():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c15 = `is.object`(e6);
      if c15 then L1() else L2(e6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e8):
      __ = ldf `[[` in base;
      r9 = dyn __(e8, 1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn deparse(p);
    check L21() else D5();
  L25():
    deparse1 = ldf deparse;
    check L27() else D7();
  L26():
    r13 = dyn base3(<lang deparse(`[[`(e, 2))>, "!exists(\"meta\") || is.null(meta)");
    goto L6(c19, r13);
  D5():
    deopt 20 [c9, r11];
  D7():
    deopt 35 [c19];
  L21():
    identical = ldf identical in base;
    r12 = dyn identical(r11, "if", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L22() else D6();
  L27():
    p1 = prom<V +>{
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c25 = `is.object`(e10);
      if c25 then L1() else L2(e10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", e10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(e12):
      __1 = ldf `[[` in base;
      r15 = dyn __1(e12, 2);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn deparse1(p1);
    check L28() else D8();
  D6():
    deopt 30 [c9, r12];
  D8():
    deopt 37 [c19, r17];
  L22():
    goto L4(c9, r12);
  L28():
    identical1 = ldf identical in base;
    r18 = dyn identical1(r17, "!exists(\"meta\") || is.null(meta)", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L29() else D9();
  D9():
    deopt 47 [c19, r18];
  L29():
    goto L6(c19, r18);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg readLines:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg iconv:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg asc:*, reg asc1:V, reg is_na:cls, reg r6:V, reg asc2:*, reg asc3:V, reg x2:*, reg x3:V, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg ind:*, reg ind1:V, reg any:cls, reg r11:V, reg c:L, reg paste0:cls, reg which:cls, reg ind2:*, reg ind3:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg iconv1:cls, reg x4:*, reg x5:V, reg c1:L, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind4:*, reg ind5:V, reg __:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg character:cls, reg r20:V |
    mkenv;
    st f = f;
    readLines = ldf readLines;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn readLines[, warn](p, FALSE);
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st x = r1;
    iconv = ldf iconv;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r3 = dyn iconv(p1, "latin1", "ASCII");
    check L6() else D3();
  D3():
    deopt 12 [r3];
  L6():
    st asc = r3;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r5):
    asc2 = ld asc;
    check L11() else D6();
  L7():
    asc = ld asc;
    check L9() else D4();
  L8():
    r4 = dyn base(<sym asc>);
    goto L0(r4);
  D4():
    deopt 16 [asc];
  D6():
    deopt 19 [r5, asc2];
  L9():
    asc1 = force? asc;
    checkMissing(asc1);
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(asc1);
    check L10() else D5();
  L11():
    asc3 = force? asc2;
    checkMissing(asc3);
    x2 = ld x;
    check L12() else D7();
  D5():
    deopt 19 [r6];
  D7():
    deopt 20 [r5, asc3, x2];
  L10():
    goto L0(r6);
  L12():
    x3 = force? x2;
    checkMissing(x3);
    r7 = `!=`(asc3, x3);
    r8 = `||`(r5, r7);
    st ind = r8;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L1(r10):
    c = `as.logical`(r10);
    if c then L17() else L2();
  L13():
    ind = ld ind;
    check L15() else D8();
  L14():
    r9 = dyn base1(<sym ind>);
    goto L1(r9);
  D8():
    deopt 27 [ind];
  L2():
    character = ldf character;
    check L21() else D12();
  L15():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r11 = dyn any(ind1);
    check L16() else D9();
  L17():
    paste0 = ldf paste0;
    check L18() else D10();
  D9():
    deopt 30 [r11];
  D10():
    deopt 32 [];
  D12():
    deopt 38 [];
  L16():
    goto L1(r11);
  L18():
    p3 = prom<V +>{
      which = ldf which;
      p2 = prom<V +>{
        ind2 = ld ind;
        ind3 = force? ind2;
        checkMissing(ind3);
        return ind3;
      };
      r13 = dyn which(p2);
      return r13;
    };
    p5 = prom<V +>{
      iconv1 = ldf iconv;
      p4 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        c1 = `is.object`(x5);
        if c1 then L1() else L2(x5);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", x5);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x7):
        ind4 = ld ind;
        ind5 = force? ind4;
        __ = ldf `[` in base;
        r15 = dyn __(x7, ind5);
        goto L0(r15);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r17 = dyn iconv1[, , , sub](p4, "latin1", "ASCII", "byte");
      return r17;
    };
    r19 = dyn paste0(p3, ": ", p5);
    check L19() else D11();
  L21():
    r20 = dyn character();
    check L22() else D13();
  D11():
    deopt 36 [r19];
  D13():
    deopt 39 [r20];
  L19():
    popenv;
    return r19;
  L22():
    popenv;
    return r20;
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg gzcon:cls, reg url:cls, reg sprintf:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg on_exit:cls, reg r8:V, reg cbind:cls, reg read_dcf:cls, reg con:*, reg con1:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg _get_standard_repository_db_fields:cls, reg r12:V, reg c:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg u3:*, reg u4:V, reg p6:p(V +), reg r18:V |
    mkenv;
    st u = u;
    gzcon = ldf gzcon;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      url = ldf url;
      p1 = prom<V +>{
        sprintf = ldf sprintf;
        p = prom<V +>{
          u1 = ld u;
          u2 = force? u1;
          checkMissing(u2);
          return u2;
        };
        r1 = dyn sprintf("%s/src/contrib/PACKAGES.gz", p);
        return r1;
      };
      r3 = dyn url(p1, "rb");
      return r3;
    };
    r5 = dyn gzcon(p2);
    check L2() else D1();
  D1():
    deopt 3 [r5];
  L2():
    st con = r5;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    cbind = ldf cbind;
    check L5() else D2();
  L3():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang close(con)>);
    goto L0();
  L4():
    r6 = dyn base(<lang close(con)>);
    goto L0();
  D2():
    deopt 9 [];
  L5():
    p5 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p3 = prom<V +>{
        con = ld con;
        con1 = force? con;
        checkMissing(con1);
        return con1;
      };
      p4 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`;
        r12 = dyn _get_standard_repository_db_fields();
        c = ldf c in base;
        r13 = dyn c(r12, "Path");
        goto L0(r13);
      L2():
        r10 = dyn base1(<lang .get_standard_repository_db_fields()>, "Path");
        goto L0(r10);
      };
      r15 = dyn read_dcf(p3, p4);
      return r15;
    };
    p6 = prom<V +>{
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      return u4;
    };
    r18 = dyn cbind[, Repository](p5, p6);
    check L6() else D3();
  D3():
    deopt 13 [r18];
  L6():
    popenv;
    return r18;
  }
}