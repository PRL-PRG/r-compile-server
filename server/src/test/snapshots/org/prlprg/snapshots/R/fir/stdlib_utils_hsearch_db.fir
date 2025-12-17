fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2400807520;
    st hsearch_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2400807520(package, `lib.loc`, types, verbose, rebuild, use_UTF8) {
  (reg package:*, reg lib_loc:*, reg types:*, reg verbose:*, reg rebuild:*, reg use_UTF8:*) -+> V { var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var types:*, reg types_isMissing:L, reg types_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var rebuild:*, reg rebuild_isMissing:L, reg rebuild_orDefault:*, var use_UTF8:*, reg use_UTF8_isMissing:L, reg use_UTF8_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg verbose1:*, reg verbose2:V, reg c1:L, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:R, reg r12:V, reg verbose3:*, reg verbose4:V, reg as_integer:cls, reg r13:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg lib_loc1:*, reg lib_loc2:V, reg c3:V, reg c4:L, reg _libPaths:cls, reg r18:V, reg pmatch:cls, reg types1:*, reg types2:V, reg p2:p(V +), reg hsearch_db_types:*, reg hsearch_db_types1:V, reg p3:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg i:*, reg i1:V, reg anyNA:cls, reg r25:V, reg c5:L, reg stop:cls, reg r26:V, reg hsearch_db_types2:*, reg hsearch_db_types3:V, reg c6:L, reg hsearch_db_types5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:*, reg i3:V, reg __:cls, reg r28:V, reg eval:cls, reg _hsearch_db:cls, reg r29:V, reg p4:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg db:*, reg db1:V, reg c7:V, reg c8:L, reg rebuild1:*, reg rebuild2:V, reg r35:V, reg c9:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg lib_loc3:*, reg lib_loc4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg db2:*, reg db3:V, reg attr:cls, reg r40:V, reg identical:cls, reg r41:V, reg r42:V, reg c10:L, reg c11:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg c15:L, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg c18:L, reg r46:V, reg types3:*, reg types4:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg c21:L, reg r48:V, reg db4:*, reg db5:V, reg attr1:cls, reg r49:V, reg match:cls, reg r50:V, reg anyNA1:cls, reg r51:V, reg c22:L, reg c23:V, reg c25:L, reg c26:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg c30:L, reg r53:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg c33:L, reg r55:V, reg db6:*, reg db7:V, reg attr2:cls, reg r56:V, reg file_mtime:cls, reg lib_loc5:*, reg lib_loc6:V, reg c34:L, reg lib_loc8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg file_exists:cls, reg lib_loc9:*, reg lib_loc10:V, reg p5:p(V +), reg r58:V, reg __1:cls, reg r59:V, reg p6:p(V +), reg r61:V, reg r62:V, reg any:cls, reg r63:V, reg c35:L, reg c36:V, reg c38:L, reg c39:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg c43:L, reg r65:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg c46:L, reg r67:V, reg db8:*, reg db9:V, reg attr3:cls, reg r68:V, reg Sys_getlocale:cls, reg r69:V, reg identical1:cls, reg r70:V, reg r71:V, reg c47:L, reg c48:V, reg c50:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg r74:V, reg package1:*, reg package2:V, reg c51:V, reg r75:V, reg c52:L, reg c54:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r76:V, reg c57:L, reg r77:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r78:V, reg c60:L, reg r79:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r80:V, reg c63:L, reg r81:V, reg package3:*, reg package4:V, reg db10:*, reg db11:V, reg c64:L, reg c66:L, reg db13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c68:L, reg dx7:V, reg r82:V, reg c69:L, reg c71:L, reg dr8:V, reg dc4:L, reg dx10:V, reg c73:L, reg dx11:V, reg __2:cls, reg r83:V, reg match1:cls, reg r84:V, reg is_na:cls, reg r85:V, reg any1:cls, reg r86:V, reg c74:L, reg c75:V, reg c77:L, reg r87:V, reg rebuild3:*, reg rebuild4:V, reg c78:L, reg verbose5:*, reg verbose6:V, reg r88:V, reg c79:L, reg message:cls, reg verbose7:*, reg verbose8:V, reg r89:V, reg c80:L, reg p7:p(V +), reg r91:V, reg flush_console:cls, reg r92:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r94:V, reg r95:V, reg types5:*, reg types6:V, reg r96:V, reg any2:cls, reg r97:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r98:V, reg r99:V, reg types7:*, reg types8:V, reg r100:V, reg any3:cls, reg r101:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r102:V, reg r103:V, reg types9:*, reg types10:V, reg r104:V, reg any4:cls, reg r105:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r106:V, reg r107:V, reg package5:*, reg package6:V, reg c81:V, reg r108:V, reg c82:L, reg package7:*, reg package8:V, reg character:cls, reg r110:V, reg character1:cls, reg r111:V, reg lib_loc11:*, reg lib_loc12:V, reg c83:L, reg lib_loc14:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg file_exists1:cls, reg lib_loc15:*, reg lib_loc16:V, reg p8:p(V +), reg r113:V, reg __3:cls, reg r114:V, reg _standard_regexps:cls, reg r115:V, reg c84:L, reg r117:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r118:V, reg lib_loc17:*, reg lib_loc18:V, reg s:V, reg l:I, reg i4:I, reg i5:I, reg i6:I, reg c85:L, reg x:V, reg list_files:cls, reg lib:*, reg lib1:V, reg p9:p(V +), reg r120:V, reg a:*, reg a1:V, reg s1:V, reg l1:I, reg i9:I, reg i10:I, reg i11:I, reg i12:I, reg c86:L, reg x1:V, reg file_path:cls, reg lib2:*, reg lib3:V, reg p10:p(V +), reg nam:*, reg nam1:V, reg p11:p(V +), reg r123:V, reg file_exists2:cls, reg pfile:*, reg pfile1:V, reg p12:p(V +), reg r125:V, reg c87:L, reg readRDS:cls, reg pfile2:*, reg pfile3:V, reg p13:p(V +), reg r127:V, reg c88:L, reg i23:I, reg i24:I, reg r129:V, reg dr14:V, reg dc7:L, reg dx16:V, reg i27:I, reg i28:I, reg dx17:V, reg r130:V, reg c89:L, reg i31:I, reg i32:I, reg dx19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg i35:I, reg i36:I, reg dx21:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r131:V, reg i41:I, reg i42:I, reg dx24:V, reg r132:V, reg c90:cls, reg r133:V, reg __4:cls, reg r134:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r135:V, reg i49:I, reg i50:I, reg r136:V, reg info:*, reg info1:V, reg length:cls, reg r137:V, reg r138:V, reg c91:L, reg i51:I, reg i52:I, reg c92:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r139:V, reg i59:I, reg i60:I, reg c96:L, reg r140:V, reg info2:*, reg info3:V, reg anyNA2:cls, reg r141:V, reg c97:L, reg c98:V, reg c100:L, reg grepl:cls, reg valid_package_version_regexp:*, reg valid_package_version_regexp1:V, reg p14:p(V +), reg info4:*, reg info5:V, reg c101:L, reg info7:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg __5:cls, reg r144:V, reg p15:p(V +), reg r146:V, reg r147:V, reg c102:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r149:V, reg i83:I, reg i84:I, reg r150:V, reg ans:*, reg ans1:V, reg nam2:*, reg nam3:V, reg c103:cls, reg r151:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r152:V, reg i89:I, reg i90:I, reg r153:V, reg paths:*, reg paths1:V, reg file_path1:cls, reg lib4:*, reg lib5:V, reg p16:p(V +), reg nam4:*, reg nam5:V, reg p17:p(V +), reg r156:V, reg c104:cls, reg r157:V, reg duplicated:cls, reg ans2:*, reg ans3:V, reg p18:p(V +), reg r159:V, reg r160:V, reg ans4:*, reg ans5:V, reg c105:L, reg ans7:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg un:*, reg un1:V, reg __6:cls, reg r161:V, reg paths2:*, reg paths3:V, reg c106:L, reg paths5:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg un2:*, reg un3:V, reg __7:cls, reg r162:V, reg ans8:*, reg ans9:V, reg c107:L, reg ans11:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg un4:*, reg un5:V, reg __8:cls, reg r163:V, reg l2:*, reg names__:cls, reg r164:V, reg verbose9:*, reg verbose10:V, reg r165:V, reg c108:L, reg message1:cls, reg r166:V, reg flush_console1:cls, reg r167:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r169:V, reg r170:V, reg package_paths:*, reg package_paths1:V, reg length1:cls, reg r171:V, reg verbose11:*, reg verbose12:V, reg c109:L, reg c111:V, reg WINDOWS:*, reg WINDOWS1:V, reg c112:L, reg c113:V, reg c115:L, reg winProgressBar:cls, reg tot:*, reg tot1:V, reg p19:p(V +), reg r173:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r174:V, reg r175:V, reg on_exit:cls, reg r176:V, reg verbose13:*, reg verbose14:V, reg r178:V, reg c116:L, reg ifelse:cls, reg tot2:*, reg tot3:V, reg r179:V, reg p20:p(V +), reg r181:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r182:V, reg r183:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r184:V, reg r185:V, reg packages_in_hsearch_db:*, reg packages_in_hsearch_db1:V, reg length2:cls, reg r186:V, reg r187:V, reg vector:cls, reg r188:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r189:V, reg r190:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r191:V, reg r192:V, reg packages_in_hsearch_db2:*, reg packages_in_hsearch_db3:V, reg length3:cls, reg r193:V, reg c117:cls, reg r194:V, reg l3:*, reg dim__:cls, reg r195:V, reg ___:cls, reg r196:V, reg r197:cls, reg r198:V, reg packages_in_hsearch_db4:*, reg packages_in_hsearch_db5:V, reg s2:V, reg l4:I, reg i91:I, reg i92:I, reg i93:I, reg c118:L, reg x2:V, reg incr:*, reg incr1:V, reg c119:L, reg i97:I, reg c121:V, reg np:*, reg np1:V, reg incr2:*, reg incr3:V, reg __9:cls, reg r199:V, reg r200:V, reg c122:L, reg c123:V, reg c125:L, reg message2:cls, reg r201:V, reg flush_console2:cls, reg r202:V, reg i101:I, reg np2:*, reg np3:V, reg r204:V, reg verbose15:*, reg verbose16:V, reg c126:L, reg i103:I, reg c128:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c129:L, reg c130:V, reg c132:L, reg setWinProgressBar:cls, reg pb:*, reg pb1:V, reg p21:p(V +), reg np4:*, reg np5:V, reg p22:p(V +), reg r207:V, reg i107:I, reg verbose17:*, reg verbose18:V, reg r209:V, reg c133:L, reg message3:cls, reg p23:*, reg p24:V, reg p25:p(V +), reg np6:*, reg np7:V, reg __10:cls, reg r211:V, reg r212:V, reg p26:p(V +), reg r214:V, reg flush_console3:cls, reg r215:V, reg i110:I, reg sym33:cls, reg base33:cls, reg guard33:L, reg r217:V, reg i113:I, reg r218:V, reg package_paths2:*, reg package_paths3:V, reg c134:V, reg r219:V, reg c135:L, reg package_paths4:*, reg package_paths5:V, reg c136:L, reg i117:I, reg package_paths7:V, reg dr26:V, reg dc13:L, reg dx34:V, reg i119:I, reg dx35:V, reg p27:*, reg p28:V, reg __11:cls, reg r220:V, reg i120:I, reg dx36:V, reg find_package:cls, reg p29:*, reg p30:V, reg p31:p(V +), reg lib_loc19:*, reg lib_loc20:V, reg p32:p(V +), reg r223:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r224:V, reg i123:I, reg r225:V, reg path:*, reg path1:V, reg length4:cls, reg r226:V, reg r227:V, reg c137:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r228:V, reg i128:I, reg r229:V, reg package9:*, reg package10:V, reg c138:V, reg c139:L, reg stop1:cls, reg packageNotFoundError:cls, reg p33:*, reg p34:V, reg p35:p(V +), reg lib_loc21:*, reg lib_loc22:V, reg p36:p(V +), reg sys_call:cls, reg r233:V, reg p37:p(V +), reg r235:V, reg p38:p(V +), reg r237:V, reg i133:I, reg want_type_help:*, reg want_type_help1:V, reg c140:L, reg file_exists3:cls, reg file_path2:cls, reg path2:*, reg path3:V, reg p39:p(V +), reg r240:V, reg p40:p(V +), reg r242:V, reg c141:L, reg readRDS1:cls, reg hs_file:*, reg hs_file1:V, reg p41:p(V +), reg r244:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r245:V, reg i140:I, reg r246:V, reg hDB:*, reg hDB1:V, reg c142:V, reg r247:V, reg c143:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r248:V, reg i145:I, reg r249:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r250:V, reg i148:I, reg r251:V, reg colnames:cls, reg hDB2:*, reg hDB3:V, reg c144:L, reg hDB5:V, reg dr28:V, reg dc14:L, reg dx37:V, reg dx38:V, reg __12:cls, reg r252:V, reg p42:p(V +), reg r254:V, reg match2:cls, reg r255:V, reg is_na1:cls, reg r256:V, reg c145:L, reg cbind:cls, reg hDB6:*, reg hDB7:V, reg c146:L, reg hDB9:V, reg dr30:V, reg dc15:L, reg dx39:V, reg dx40:V, reg __13:cls, reg r257:V, reg p43:p(V +), reg r259:V, reg l5:*, reg c147:L, reg i152:I, reg r261:V, reg l7:*, reg dr32:V, reg dc16:L, reg dx41:V, reg i154:I, reg r263:V, reg dx42:V, reg ____:cls, reg r264:V, reg i155:I, reg sym39:cls, reg base39:cls, reg guard39:L, reg r266:V, reg i158:I, reg r267:V, reg hDB10:*, reg hDB11:V, reg r268:I, reg s3:V, reg l8:I, reg i159:I, reg i160:I, reg i161:I, reg i162:I, reg c148:L, reg x3:V, reg ___1:cls, reg r269:V, reg c149:L, reg i169:I, reg i170:I, reg r271:V, reg dr34:V, reg dc17:L, reg dx43:V, reg i173:I, reg i174:I, reg dx44:V, reg i175:*, reg i176:V, reg __14:cls, reg r272:V, reg l9:*, reg c150:L, reg i179:I, reg i180:I, reg dx47:V, reg l12:*, reg dx48:V, reg l13:*, reg dr36:V, reg dc18:L, reg dx51:V, reg i183:I, reg i184:I, reg dx52:V, reg l15:*, reg dx53:V, reg dx54:V, reg i185:*, reg i186:V, reg __15:cls, reg r273:V, reg colnames__:cls, reg r274:V, reg c151:L, reg i189:I, reg i190:I, reg dx56:V, reg l17:*, reg dr38:V, reg dc19:L, reg dx58:V, reg i193:I, reg i194:I, reg dx60:V, reg i195:*, reg i196:V, reg ____1:cls, reg r275:V, reg i197:I, reg i198:V, reg verbose19:*, reg verbose20:V, reg r276:V, reg c152:L, reg message4:cls, reg gettextf:cls, reg sQuote:cls, reg p44:*, reg p45:V, reg p46:p(V +), reg r278:V, reg p47:p(V +), reg r280:V, reg p48:p(V +), reg r282:V, reg flush_console4:cls, reg r283:V, reg i201:I, reg i202:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r284:V, reg i205:I, reg r285:V, reg package11:*, reg package12:V, reg c153:V, reg r286:V, reg c154:L, reg warning:cls, reg p49:*, reg p50:V, reg p51:p(V +), reg r288:V, reg i208:I, reg sym41:cls, reg base41:cls, reg guard41:L, reg r289:V, reg i212:I, reg r290:V, reg hDB12:*, reg hDB13:V, reg c155:V, reg c156:L, reg hDB14:*, reg hDB15:V, reg i215:I, reg NROW:cls, reg hDB17:*, reg hDB18:V, reg c157:L, reg hDB20:V, reg dr40:V, reg dc20:L, reg dx61:V, reg dx62:V, reg __16:cls, reg r291:V, reg p52:p(V +), reg r293:V, reg cbind1:cls, reg hDB21:*, reg hDB22:V, reg c158:L, reg hDB24:V, reg dr42:V, reg dc21:L, reg dx63:V, reg dx64:V, reg __17:cls, reg r294:V, reg p53:p(V +), reg sym42:cls, reg base42:cls, reg guard42:L, reg r296:V, reg r297:V, reg nh:*, reg nh1:V, reg rep_int:cls, reg r298:V, reg p54:p(V +), reg r300:V, reg l18:*, reg c159:L, reg i217:I, reg r302:V, reg l20:*, reg dr44:V, reg dc22:L, reg dx65:V, reg i219:I, reg dx66:V, reg ____2:cls, reg r305:V, reg nh2:*, reg nh3:V, reg c160:L, reg path4:*, reg path5:V, reg l21:*, reg c161:L, reg i223:I, reg path8:V, reg l24:*, reg path9:V, reg l25:*, reg dr46:V, reg dc23:L, reg dx67:V, reg i225:I, reg path12:V, reg l27:*, reg path13:V, reg dx68:V, reg __18:cls, reg r306:V, reg c162:L, reg i227:I, reg path15:V, reg l29:*, reg dr48:V, reg dc24:L, reg dx71:V, reg i229:I, reg path17:V, reg l31:*, reg dx72:V, reg ___2:cls, reg r307:V, reg c163:L, reg i231:I, reg path19:V, reg l33:*, reg dr50:V, reg dc25:L, reg dx73:V, reg i233:I, reg path21:V, reg dx74:V, reg ____3:cls, reg r308:V, reg i234:I, reg want_type_vignette:*, reg want_type_vignette1:V, reg c164:L, reg merge_vignette_index:cls, reg hDB25:*, reg hDB26:V, reg p55:p(V +), reg path23:*, reg path24:V, reg p56:p(V +), reg p57:*, reg p58:V, reg p59:p(V +), reg r312:V, reg i237:I, reg want_type_demo:*, reg want_type_demo1:V, reg c165:L, reg merge_demo_index:cls, reg hDB27:*, reg hDB28:V, reg p60:p(V +), reg path25:*, reg path26:V, reg p61:p(V +), reg p62:*, reg p63:V, reg p64:p(V +), reg r317:V, reg i240:I, reg hDB29:*, reg hDB30:V, reg l34:*, reg c166:L, reg i242:I, reg hDB32:V, reg l36:*, reg dr52:V, reg dc26:L, reg dx75:V, reg i244:I, reg dx76:V, reg np8:*, reg np9:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r319:V, reg i247:I, reg hDB39:V, reg l39:*, reg hDB40:V, reg np12:V, reg r320:V, reg hDB41:*, reg hDB42:V, reg r321:I, reg ___3:cls, reg r322:V, reg verbose21:*, reg verbose22:V, reg r323:V, reg c167:L, reg message5:cls, reg ifelse1:cls, reg np13:*, reg np14:V, reg __19:cls, reg r324:V, reg r325:V, reg p65:p(V +), reg r327:V, reg p66:p(V +), reg sprintf:cls, reg nrow:cls, reg dbMat:*, reg dbMat1:V, reg p67:p(V +), reg r330:V, reg p68:p(V +), reg ncol:cls, reg dbMat2:*, reg dbMat3:V, reg p69:p(V +), reg r333:V, reg p70:p(V +), reg r335:V, reg p71:p(V +), reg r337:V, reg flush_console5:cls, reg r338:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r340:V, reg r341:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p72:p(V +), reg dbMat4:*, reg dbMat5:V, reg c168:L, reg dr54:V, reg dc27:L, reg dx77:V, reg dx78:V, reg __20:cls, reg r343:V, reg p73:p(V +), reg r345:V, reg do_call1:cls, reg rbind2:*, reg rbind3:V, reg p74:p(V +), reg dbMat8:*, reg dbMat9:V, reg c169:L, reg dr56:V, reg dc28:L, reg dx79:V, reg dx80:V, reg __21:cls, reg r347:V, reg p75:p(V +), reg r349:V, reg do_call2:cls, reg rbind4:*, reg rbind5:V, reg p76:p(V +), reg dbMat12:*, reg dbMat13:V, reg c170:L, reg dr58:V, reg dc29:L, reg dx81:V, reg dx82:V, reg __22:cls, reg r351:V, reg p77:p(V +), reg r353:V, reg do_call3:cls, reg rbind6:*, reg rbind7:V, reg p78:p(V +), reg dbMat16:*, reg dbMat17:V, reg c171:L, reg dr60:V, reg dc30:L, reg dx83:V, reg dx84:V, reg __23:cls, reg r355:V, reg p79:p(V +), reg r357:V, reg list:cls, reg r358:V, reg l40:*, reg c172:L, reg r361:dots, reg l43:*, reg r362:dots, reg l44:*, reg dr62:V, reg dc31:L, reg dx85:V, reg r365:dots, reg l46:*, reg r366:dots, reg dx86:V, reg r367:V, reg rownames__:cls, reg r368:V, reg c173:L, reg r370:dots, reg l48:*, reg dr64:V, reg dc32:L, reg dx87:V, reg dx88:V, reg r373:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r374:V, reg r375:V, reg db14:*, reg db15:V, reg c174:L, reg db17:V, reg dr66:V, reg dc33:L, reg dx89:V, reg dx90:V, reg r376:V, reg c175:V, reg c176:L, reg matrix:cls, reg character2:cls, reg r377:V, reg p80:p(V +), reg sym46:cls, reg base46:cls, reg guard46:L, reg r379:V, reg r380:V, reg ___4:cls, reg r381:V, reg c177:L, reg r383:V, reg dr68:V, reg dc34:L, reg dx91:V, reg dx92:V, reg r384:V, reg list1:cls, reg r385:V, reg p81:p(V +), reg r387:V, reg l49:*, reg c178:L, reg r389:V, reg l51:*, reg dr70:V, reg dc35:L, reg dx93:V, reg r391:V, reg dx94:V, reg r392:V, reg which:cls, reg vapply:cls, reg db18:*, reg db19:V, reg p82:p(V +), reg NROW1:*, reg NROW2:V, reg p83:p(V +), reg r396:V, reg r397:V, reg p84:p(V +), reg r399:V, reg s4:V, reg l52:I, reg i248:I, reg i249:I, reg i250:I, reg c179:L, reg x4:V, reg paste:cls, reg sym47:cls, reg base47:cls, reg guard47:L, reg r400:V, reg r401:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r402:V, reg r403:V, reg packages_in_hsearch_db6:*, reg packages_in_hsearch_db7:V, reg r404:I, reg vapply1:cls, reg dbMat20:*, reg dbMat21:V, reg c180:L, reg dr72:V, reg dc36:L, reg dx95:V, reg dx96:V, reg i253:*, reg i254:V, reg __24:cls, reg r405:V, reg p85:p(V +), reg NROW3:*, reg NROW4:V, reg p86:p(V +), reg r408:V, reg rep_int1:cls, reg r409:V, reg p87:p(V +), reg db20:*, reg db21:V, reg c181:L, reg db23:V, reg dr74:V, reg dc37:L, reg dx97:V, reg dx98:V, reg i255:*, reg i256:V, reg __25:cls, reg r411:V, reg c182:L, reg dr76:V, reg dc38:L, reg dx101:V, reg dx102:V, reg __26:cls, reg r412:V, reg p88:p(V +), reg r414:V, reg l53:*, reg c183:L, reg i258:I, reg r417:V, reg l56:*, reg r418:V, reg l57:*, reg dr78:V, reg dc39:L, reg dx103:V, reg i260:I, reg r421:V, reg l59:*, reg r422:V, reg dx104:V, reg i261:*, reg i262:V, reg __27:cls, reg r423:V, reg c184:L, reg i264:I, reg r425:V, reg l61:*, reg dr80:V, reg dc40:L, reg dx107:V, reg i266:I, reg r427:V, reg l63:*, reg dx108:V, reg ___5:cls, reg r428:V, reg c185:L, reg i268:I, reg r430:V, reg l65:*, reg dr82:V, reg dc41:L, reg dx109:V, reg i270:I, reg dx110:V, reg i271:*, reg i272:V, reg ____4:cls, reg r433:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r434:V, reg r435:V, reg Sys_getlocale1:cls, reg r436:V, reg identical2:cls, reg r437:V, reg r438:V, reg c186:L, reg verbose23:*, reg verbose24:V, reg r439:V, reg c187:L, reg message6:cls, reg r440:V, reg flush_console6:cls, reg r441:V, reg db24:*, reg db25:V, reg c188:L, reg db27:V, reg dr84:V, reg dc42:L, reg dx111:V, reg dx112:V, reg r443:V, reg c189:L, reg dr86:V, reg dc43:L, reg dx115:V, reg dx116:V, reg __28:cls, reg r444:V, reg ifelse2:cls, reg use_UTF9:*, reg use_UTF10:V, reg c190:L, reg c192:V, reg l10n_info:cls, reg r445:V, reg c193:L, reg c195:L, reg r447:V, reg dr88:V, reg dc44:L, reg dx117:V, reg c197:L, reg dx118:V, reg r448:V, reg r449:V, reg c198:L, reg c199:V, reg p89:p(V +), reg r451:V, reg unique:cls, reg encoding:*, reg encoding1:V, reg p90:p(V +), reg r453:V, reg s5:V, reg l66:I, reg i273:I, reg i274:I, reg i275:I, reg c201:L, reg x5:V, reg enc:*, reg enc1:V, reg target:*, reg target1:V, reg r454:V, reg c202:L, reg db28:*, reg db29:V, reg c203:L, reg i283:I, reg db31:V, reg dr90:V, reg dc45:L, reg dx119:V, reg i285:I, reg dx120:V, reg r456:V, reg c204:L, reg i287:I, reg dx122:V, reg dr92:V, reg dc46:L, reg dx123:V, reg i289:I, reg dx124:V, reg encoding2:*, reg encoding3:V, reg enc2:*, reg enc3:V, reg r457:V, reg __29:cls, reg r458:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r459:V, reg i292:I, reg r460:V, reg db32:*, reg db33:V, reg r461:I, reg s6:V, reg l67:I, reg i293:I, reg i294:I, reg i295:I, reg i296:I, reg c205:L, reg x6:V, reg _in_:cls, reg db34:*, reg db35:V, reg c206:L, reg db37:V, reg dr94:V, reg dc47:L, reg dx125:V, reg dx126:V, reg i301:*, reg i302:V, reg __30:cls, reg r462:V, reg c207:L, reg dr96:V, reg dc48:L, reg dx129:V, reg dx130:V, reg __31:cls, reg r463:V, reg p91:p(V +), reg IDs:*, reg IDs1:V, reg p92:p(V +), reg r466:V, reg iconv:cls, reg db38:*, reg db39:V, reg c208:L, reg db41:V, reg dr98:V, reg dc49:L, reg dx131:V, reg dx132:V, reg i303:*, reg i304:V, reg __32:cls, reg r467:V, reg c209:L, reg dr100:V, reg dc50:L, reg dx135:V, reg dx136:V, reg ind:*, reg ind1:V, reg __33:cls, reg r468:V, reg p93:p(V +), reg enc4:*, reg enc5:V, reg p94:p(V +), reg r471:V, reg l68:*, reg c210:L, reg i307:I, reg i308:I, reg r474:V, reg l71:*, reg r475:V, reg l72:*, reg dr102:V, reg dc51:L, reg dx137:V, reg i311:I, reg i312:I, reg r478:V, reg l74:*, reg r479:V, reg dx138:V, reg i313:*, reg i314:V, reg __34:cls, reg r480:V, reg c211:L, reg i317:I, reg i318:I, reg r482:V, reg l76:*, reg dx140:V, reg dr104:V, reg dc52:L, reg dx141:V, reg i321:I, reg i322:I, reg r484:V, reg l78:*, reg dx142:V, reg ind2:*, reg ind3:V, reg ___6:cls, reg r485:V, reg c212:L, reg i325:I, reg i326:I, reg r487:V, reg l80:*, reg dr106:V, reg dc53:L, reg dx143:V, reg i329:I, reg i330:I, reg dx144:V, reg i331:*, reg i332:V, reg ____5:cls, reg r490:V, reg verbose25:*, reg verbose26:V, reg r491:V, reg c213:L, reg message7:cls, reg r492:V, reg flush_console7:cls, reg r493:V, reg r494:V, reg unlist:cls, reg lapply:cls, reg db42:*, reg db43:V, reg p95:p(V +), reg r497:cls, reg p96:p(V +), reg r499:V, reg p97:p(V +), reg r501:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r502:V, reg r503:V, reg bad_IDs:*, reg bad_IDs1:V, reg length5:cls, reg r504:V, reg c214:L, reg sym52:cls, reg base52:cls, reg guard52:L, reg r505:V, reg r506:V, reg db44:*, reg db45:V, reg r507:I, reg s7:V, reg l81:I, reg i333:I, reg i334:I, reg i335:I, reg c215:L, reg x7:V, reg _in_1:cls, reg db46:*, reg db47:V, reg c216:L, reg db49:V, reg dr108:V, reg dc54:L, reg dx145:V, reg dx146:V, reg i338:*, reg i339:V, reg __35:cls, reg r508:V, reg c217:L, reg dr110:V, reg dc55:L, reg dx149:V, reg dx150:V, reg __36:cls, reg r509:V, reg p98:p(V +), reg bad_IDs2:*, reg bad_IDs3:V, reg p99:p(V +), reg r512:V, reg iconv1:cls, reg db50:*, reg db51:V, reg c218:L, reg db53:V, reg dr112:V, reg dc56:L, reg dx151:V, reg dx152:V, reg i340:*, reg i341:V, reg __37:cls, reg r513:V, reg c219:L, reg dr114:V, reg dc57:L, reg dx155:V, reg dx156:V, reg ind4:*, reg ind5:V, reg __38:cls, reg r514:V, reg p100:p(V +), reg r516:V, reg l82:*, reg c220:L, reg i343:I, reg r519:V, reg l85:*, reg r520:V, reg l86:*, reg dr116:V, reg dc58:L, reg dx157:V, reg i345:I, reg r523:V, reg l88:*, reg r524:V, reg dx158:V, reg i346:*, reg i347:V, reg __39:cls, reg r525:V, reg c221:L, reg i349:I, reg r527:V, reg l90:*, reg dx160:V, reg dr118:V, reg dc59:L, reg dx161:V, reg i351:I, reg r529:V, reg l92:*, reg dx162:V, reg ind6:*, reg ind7:V, reg ___7:cls, reg r530:V, reg c222:L, reg i353:I, reg r532:V, reg l94:*, reg dr120:V, reg dc60:L, reg dx163:V, reg i355:I, reg dx164:V, reg i356:*, reg i357:V, reg ____6:cls, reg r535:V, reg unlist1:cls, reg lapply1:cls, reg db54:*, reg db55:V, reg p101:p(V +), reg r537:cls, reg p102:p(V +), reg r539:V, reg p103:p(V +), reg r541:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r543:V, reg r544:V, reg bad_IDs4:*, reg bad_IDs5:V, reg length6:cls, reg r545:V, reg c223:L, reg warning1:cls, reg r546:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r547:V, reg r548:V, reg db56:*, reg db57:V, reg r549:I, reg s8:V, reg l95:I, reg i358:I, reg i359:I, reg i360:I, reg c224:L, reg x8:V, reg _in_2:cls, reg db58:*, reg db59:V, reg c225:L, reg db61:V, reg dr122:V, reg dc61:L, reg dx165:V, reg dx166:V, reg i363:*, reg i364:V, reg __40:cls, reg r550:V, reg c226:L, reg dr124:V, reg dc62:L, reg dx169:V, reg dx170:V, reg __41:cls, reg r551:V, reg p104:p(V +), reg bad_IDs6:*, reg bad_IDs7:V, reg p105:p(V +), reg r554:V, reg db62:*, reg db63:V, reg c227:L, reg i366:I, reg db65:V, reg dr126:V, reg dc63:L, reg dx171:V, reg i368:I, reg dx172:V, reg i369:*, reg i370:V, reg __42:cls, reg r555:V, reg c228:L, reg i372:I, reg dx174:V, reg dr128:V, reg dc64:L, reg dx175:V, reg i374:I, reg dx176:V, reg ind8:*, reg ind9:V, reg r556:V, reg __43:cls, reg r557:V, reg l96:*, reg c229:L, reg i376:I, reg dx178:V, reg l98:*, reg dr130:V, reg dc65:L, reg dx180:V, reg i378:I, reg dx182:V, reg i379:*, reg i380:V, reg ____7:cls, reg r558:V, reg db66:*, reg db67:V, reg c230:L, reg db69:V, reg dr132:V, reg dc66:L, reg dx183:V, reg dx184:V, reg r559:V, reg c231:L, reg dx186:V, reg dr134:V, reg dc67:L, reg dx187:V, reg dx188:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r560:V, reg dx191:V, reg r561:V, reg db70:*, reg db71:V, reg c232:L, reg dx193:V, reg db73:V, reg dr136:V, reg dc68:L, reg dx195:V, reg dx196:V, reg dx197:V, reg r562:V, reg c233:L, reg dx200:V, reg dr138:V, reg dc69:L, reg dx203:V, reg dx204:V, reg dx205:V, reg __44:cls, reg r563:V, reg is_na2:cls, reg r564:V, reg __45:cls, reg r565:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r566:V, reg r567:V, reg bad_IDs8:*, reg bad_IDs9:V, reg length7:cls, reg r568:V, reg c234:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r569:V, reg r570:V, reg db74:*, reg db75:V, reg r571:I, reg s9:V, reg l99:I, reg i382:I, reg i383:I, reg i384:I, reg c235:L, reg x9:V, reg _in_3:cls, reg db76:*, reg db77:V, reg c236:L, reg db79:V, reg dr140:V, reg dc70:L, reg dx206:V, reg dx207:V, reg i387:*, reg i388:V, reg __46:cls, reg r572:V, reg c237:L, reg dr142:V, reg dc71:L, reg dx210:V, reg dx211:V, reg __47:cls, reg r573:V, reg p106:p(V +), reg bad_IDs10:*, reg bad_IDs11:V, reg p107:p(V +), reg r576:V, reg db80:*, reg db81:V, reg c238:L, reg i390:I, reg db83:V, reg dr144:V, reg dc72:L, reg dx212:V, reg i392:I, reg dx213:V, reg i393:*, reg i394:V, reg __48:cls, reg r577:V, reg c239:L, reg i396:I, reg dx215:V, reg dr146:V, reg dc73:L, reg dx216:V, reg i398:I, reg dx217:V, reg ind10:*, reg ind11:V, reg r578:V, reg __49:cls, reg r579:V, reg l100:*, reg c240:L, reg i400:I, reg dx219:V, reg l102:*, reg dr148:V, reg dc74:L, reg dx221:V, reg i402:I, reg dx223:V, reg i403:*, reg i404:V, reg ____8:cls, reg r580:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r581:V, reg r582:V, reg db84:*, reg db85:V, reg c241:L, reg db87:V, reg dr150:V, reg dc75:L, reg dx224:V, reg dx225:V, reg r583:V, reg c242:L, reg dr152:V, reg dc76:L, reg dx228:V, reg dx229:V, reg __50:cls, reg r584:V, reg nzchar:cls, reg r585:V, reg db88:*, reg db89:V, reg c243:L, reg db91:V, reg dr154:V, reg dc77:L, reg dx230:V, reg dx231:V, reg r586:V, reg c244:L, reg dx233:V, reg dr156:V, reg dc78:L, reg dx234:V, reg dx235:V, reg ind12:*, reg ind13:V, reg __51:cls, reg r587:V, reg l103:*, reg c245:L, reg dx237:V, reg l105:*, reg dr158:V, reg dc79:L, reg dx239:V, reg dx241:V, reg r588:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r589:V, reg r590:V, reg db92:*, reg db93:V, reg c246:L, reg db95:V, reg dr160:V, reg dc80:L, reg dx242:V, reg dx243:V, reg r591:V, reg c247:L, reg dr162:V, reg dc81:L, reg dx246:V, reg dx247:V, reg __52:cls, reg r592:V, reg nzchar1:cls, reg r593:V, reg db96:*, reg db97:V, reg c248:L, reg db99:V, reg dr164:V, reg dc82:L, reg dx248:V, reg dx249:V, reg r594:V, reg c249:L, reg dx251:V, reg dr166:V, reg dc83:L, reg dx252:V, reg dx253:V, reg ind14:*, reg ind15:V, reg __53:cls, reg r595:V, reg l106:*, reg c250:L, reg dx255:V, reg l108:*, reg dr168:V, reg dc84:L, reg dx257:V, reg dx259:V, reg r596:V, reg _get_standard_Rd_keywords_with_descriptions:cls, reg r597:V, reg standard:*, reg standard1:V, reg c251:L, reg standard3:V, reg dr170:V, reg dc85:L, reg dx260:V, reg dx261:V, reg r598:V, reg standard4:*, reg standard5:V, reg c252:L, reg standard7:V, reg dr172:V, reg dc86:L, reg dx262:V, reg dx263:V, reg r599:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r600:V, reg r601:V, reg db100:*, reg db101:V, reg c253:L, reg db103:V, reg dr174:V, reg dc87:L, reg dx264:V, reg dx265:V, reg r602:V, reg c254:L, reg dr176:V, reg dc88:L, reg dx268:V, reg dx269:V, reg __54:cls, reg r603:V, reg keywords:*, reg keywords1:V, reg match3:cls, reg r604:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r605:V, reg r606:V, reg pos:*, reg pos1:V, reg is_na3:cls, reg r607:V, reg r608:V, reg keywords2:*, reg keywords3:V, reg c255:L, reg r610:V, reg keywords5:V, reg dr178:V, reg dc89:L, reg dx270:V, reg r612:V, reg dx271:V, reg pos2:*, reg pos3:V, reg __55:cls, reg r613:V, reg r614:V, reg r615:V, reg rbind8:cls, reg db104:*, reg db105:V, reg c256:L, reg db107:V, reg dr180:V, reg dc90:L, reg dx272:V, reg dx273:V, reg r616:V, reg p108:p(V +), reg db108:*, reg db109:V, reg c257:L, reg db111:V, reg dr182:V, reg dc91:L, reg dx274:V, reg dx275:V, reg r618:V, reg c258:L, reg dx277:V, reg dr184:V, reg dc92:L, reg dx278:V, reg dx279:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r619:V, reg r620:V, reg pos4:*, reg pos5:V, reg is_na4:cls, reg r621:V, reg __56:cls, reg r622:V, reg p109:p(V +), reg cbind2:cls, reg concepts:*, reg concepts1:V, reg c259:L, reg concepts3:V, reg dr186:V, reg dc93:L, reg dx283:V, reg dx284:V, reg pos6:*, reg pos7:V, reg c260:L, reg concepts5:V, reg pos9:V, reg dr188:V, reg dc94:L, reg dx285:V, reg concepts7:V, reg dx286:V, reg ind16:*, reg ind17:V, reg __57:cls, reg r624:V, reg __58:cls, reg r625:V, reg p110:p(V +), reg db112:*, reg db113:V, reg c261:L, reg db115:V, reg dr190:V, reg dc95:L, reg dx287:V, reg dx288:V, reg r627:V, reg c262:L, reg dr192:V, reg dc96:L, reg dx291:V, reg dx292:V, reg ind18:*, reg ind19:V, reg __59:cls, reg r628:V, reg p111:p(V +), reg r630:V, reg p112:p(V +), reg r632:V, reg l109:*, reg c263:L, reg r634:V, reg l111:*, reg dr194:V, reg dc97:L, reg dx293:V, reg dx294:V, reg r637:V, reg db116:*, reg db117:V, reg c264:L, reg db119:V, reg dr196:V, reg dc98:L, reg dx295:V, reg dx296:V, reg r638:V, reg c265:L, reg dx298:V, reg dr198:V, reg dc99:L, reg dx299:V, reg dx300:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r639:V, reg r640:V, reg pos10:*, reg pos11:V, reg is_na5:cls, reg r641:V, reg r642:V, reg __60:cls, reg r643:V, reg l112:*, reg c266:L, reg dx305:V, reg l114:*, reg dr200:V, reg dc100:L, reg dx307:V, reg dx309:V, reg r644:V, reg lapply2:cls, reg db120:*, reg db121:V, reg p113:p(V +), reg as_data_frame:*, reg as_data_frame1:V, reg p114:p(V +), reg r647:V, reg verbose27:*, reg verbose28:V, reg r648:V, reg c267:L, reg message8:cls, reg r649:V, reg flush_console8:cls, reg r650:V, reg lib_loc23:*, reg lib_loc24:V, reg l115:*, reg attr__:cls, reg r652:V, reg Sys_time:cls, reg r653:V, reg l116:*, reg attr__1:cls, reg r654:V, reg Sys_getlocale2:cls, reg r655:V, reg l117:*, reg attr__2:cls, reg r656:V, reg unique1:cls, reg sym64:cls, reg base64:cls, reg guard64:L, reg r657:V, reg r658:V, reg types11:*, reg types12:V, reg c268:cls, reg r659:V, reg p115:p(V +), reg r661:V, reg l118:*, reg attr__3:cls, reg r662:V, reg l119:*, reg class__:cls, reg r663:V, reg _hsearch_db1:cls, reg db122:*, reg db123:V, reg p116:p(V +), reg r665:V, reg verbose29:*, reg verbose30:V, reg r666:V, reg c269:L, reg message9:cls, reg r667:V, reg flush_console9:cls, reg r668:V, reg verbose31:*, reg verbose32:V, reg r670:V, reg c270:L, reg message10:cls, reg r671:V, reg WINDOWS4:*, reg WINDOWS5:V, reg c271:L, reg close:cls, reg pb2:*, reg pb3:V, reg p117:p(V +), reg r673:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r674:V, reg r675:V, reg on_exit1:cls, reg r676:V, reg flush_console10:cls, reg r678:V, reg r679:V, reg db124:*, reg db125:V |
    mkenv;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    types_isMissing = missing.0(types);
    if types_isMissing then L2() else L3(types);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("help.search.types");
      return r;
    };
    goto L3(p);
  L3(types_orDefault):
    st types = types_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L4() else L5(verbose);
  L4():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("verbose");
      return r2;
    };
    goto L5(p1);
  L5(verbose_orDefault):
    st verbose = verbose_orDefault;
    rebuild_isMissing = missing.0(rebuild);
    if rebuild_isMissing then L6(FALSE) else L6(rebuild);
  L6(rebuild_orDefault):
    st rebuild = rebuild_orDefault;
    use_UTF8_isMissing = missing.0(use_UTF8);
    if use_UTF8_isMissing then L7(FALSE) else L7(use_UTF8);
  L7(use_UTF8_orDefault):
    st use_UTF8 = use_UTF8_orDefault;
    _Platform = ld `.Platform`;
    check L225() else D0();
  D0():
    deopt 0 [_Platform];
  L225():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L227() else L228(_Platform1);
  L226(dx1):
    r5 = `==`(dx1, "windows");
    st WINDOWS = r5;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L230() else L231();
  L227():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L229() else L228(dr);
  L228(_Platform3):
    r4 = `$`(_Platform3, <sym OS.type>);
    goto L226(r4);
  L8(r7):
    c2 = `as.logical`(r7);
    if c2 then L233() else L9();
  L229():
    dx = getTryDispatchBuiltinValue(dr);
    goto L226(dx);
  L230():
    verbose1 = ld verbose;
    check L232() else D1();
  L231():
    r6 = dyn base(<sym verbose>);
    goto L8(r6);
  D1():
    deopt 7 [verbose1];
  L9():
    goto L11();
  L11():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L239() else L240();
  L232():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c1 = `is.logical`(verbose2);
    goto L8(c1);
  L233():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L234() else L235();
  L10(r11, r12):
    r14 = `*`(r11, r12);
    st verbose = r14;
    goto L11();
  L12(r17):
    c4 = `as.logical`(r17);
    if c4 then L242() else L13();
  L234():
    verbose3 = ld verbose;
    check L236() else D2();
  L235():
    r10 = dyn base1(<sym verbose>);
    goto L10(2.0, r10);
  L239():
    lib_loc1 = ld `lib.loc`;
    check L241() else D4();
  L240():
    r16 = dyn base2(<sym lib.loc>);
    goto L12(r16);
  D2():
    deopt 13 [2.0, verbose3];
  D4():
    deopt 22 [lib_loc1];
  L13():
    goto L14();
  L14():
    pmatch = ldf pmatch;
    check L246() else D7();
  L236():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    as_integer = ldf `as.integer` in base;
    r13 = dyn as_integer(verbose4);
    check L237() else D3();
  L241():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c3 = `==`(lib_loc2, NULL);
    goto L12(c3);
  L242():
    _libPaths = ldf `.libPaths`;
    check L243() else D5();
  D3():
    deopt 16 [2.0, r13];
  D5():
    deopt 26 [];
  D7():
    deopt 32 [];
  L237():
    goto L10(2.0, r13);
  L243():
    r18 = dyn _libPaths();
    check L244() else D6();
  L246():
    p2 = prom<V +>{
      types1 = ld types;
      types2 = force? types1;
      checkMissing(types2);
      return types2;
    };
    p3 = prom<V +>{
      hsearch_db_types = ld hsearch_db_types;
      hsearch_db_types1 = force? hsearch_db_types;
      checkMissing(hsearch_db_types1);
      return hsearch_db_types1;
    };
    r22 = dyn pmatch(p2, p3);
    check L247() else D8();
  D6():
    deopt 27 [r18];
  D8():
    deopt 35 [r22];
  L244():
    st `lib.loc` = r18;
    goto L14();
  L247():
    st i = r22;
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L248() else L249();
  L15(r24):
    c5 = `as.logical`(r24);
    if c5 then L252() else L16();
  L248():
    i = ld i;
    check L250() else D9();
  L249():
    r23 = dyn base3(<sym i>);
    goto L15(r23);
  D9():
    deopt 39 [i];
  L16():
    hsearch_db_types2 = ld hsearch_db_types;
    check L256() else D13();
  L17():
    eval = ldf eval;
    check L261() else D15();
  L250():
    i1 = force? i;
    checkMissing(i1);
    anyNA = ldf anyNA in base;
    r25 = dyn anyNA(i1);
    check L251() else D10();
  L252():
    stop = ldf stop;
    check L253() else D11();
  D10():
    deopt 42 [r25];
  D11():
    deopt 44 [];
  D13():
    deopt 47 [hsearch_db_types2];
  D15():
    deopt 54 [];
  L251():
    goto L15(r25);
  L253():
    r26 = dyn stop("incorrect type specification");
    check L254() else D12();
  L256():
    hsearch_db_types3 = force? hsearch_db_types2;
    checkMissing(hsearch_db_types3);
    c6 = `is.object`(hsearch_db_types3);
    if c6 then L257() else L258(hsearch_db_types3);
  L261():
    p4 = prom<V +>{
      _hsearch_db = ldf `.hsearch_db`;
      r29 = dyn _hsearch_db();
      return r29;
    };
    r31 = dyn eval(p4);
    check L262() else D16();
  D12():
    deopt 46 [r26];
  D16():
    deopt 56 [r31];
  L18(dx3):
    st types = dx3;
    goto L17();
  L254():
    goto L17();
  L257():
    dr2 = tryDispatchBuiltin.1("[", hsearch_db_types3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L259() else L258(dr2);
  L258(hsearch_db_types5):
    i2 = ld i;
    check L260() else D14();
  L262():
    st db = r31;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L263() else L264();
  D14():
    deopt 49 [hsearch_db_types5, i2];
  L19(r33):
    c8 = `as.logical`(r33);
    if c8 then L266() else L20();
  L259():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L260():
    i3 = force? i2;
    __ = ldf `[` in base;
    r28 = dyn __(hsearch_db_types5, i3);
    goto L18(r28);
  L263():
    db = ld db;
    check L265() else D17();
  L264():
    r32 = dyn base4(<sym db>);
    goto L19(r32);
  D17():
    deopt 59 [db];
  L20():
    rebuild1 = ld rebuild;
    check L268() else D18();
  L21():
    rebuild3 = ld rebuild;
    check L341() else D44();
  L265():
    db1 = force? db;
    checkMissing(db1);
    c7 = `==`(db1, NULL);
    goto L19(c7);
  L266():
    st rebuild = TRUE;
    goto L21();
  D18():
    deopt 65 [rebuild1];
  D44():
    deopt 190 [rebuild3];
  L268():
    rebuild2 = force? rebuild1;
    checkMissing(rebuild2);
    r35 = `!`(rebuild2);
    c9 = `as.logical`(r35);
    if c9 then L269() else L22();
  L341():
    rebuild4 = force? rebuild3;
    checkMissing(rebuild4);
    c78 = `as.logical`(rebuild4);
    if c78 then L342() else L45();
  L22():
    goto L21();
  L45():
    goto L224();
  L224():
    db124 = ld db;
    check L1047() else D356();
  L269():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L270() else L271();
  L342():
    verbose5 = ld verbose;
    check L343() else D45();
  D45():
    deopt 192 [verbose5];
  D356():
    deopt 1394 [db124];
  L23(r37):
    r42 = `!`(r37);
    c10 = `as.logical`(r42);
    if c10 then L25(c10) else L278();
  L270():
    lib_loc3 = ld `lib.loc`;
    check L272() else D19();
  L271():
    r36 = dyn base5(<sym lib.loc>, <lang attr(db, "LibPaths")>);
    goto L23(r36);
  L343():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    r88 = `>`(verbose6, 0);
    c79 = `as.logical`(r88);
    if c79 then L344() else L46();
  L1047():
    db125 = force? db124;
    checkMissing(db125);
    popenv;
    return db125;
  D19():
    deopt 70 [lib_loc3];
  L25(c11):
    c25 = `as.logical`(c11);
    if c25 then L29(c25) else L291();
  L46():
    goto L47();
  L47():
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L350() else L351();
  L272():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L273() else L274();
  L278():
    sym7 = ldf anyNA;
    base7 = ldf anyNA in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L279() else L280();
  L344():
    message = ldf message;
    check L345() else D46();
  D46():
    deopt 197 [];
  L24(r39):
    identical = ldf identical in base;
    r41 = dyn identical(lib_loc4, r39, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L277() else D22();
  L26(c15, r44):
    c22 = `as.logical`(r44);
    c23 = `||`(c15, c22);
    goto L25(c23);
  L29(c26):
    c38 = `as.logical`(c26);
    if c38 then L32(c38) else L302();
  L48(r95):
    st want_type_help = r95;
    sym19 = ldf any;
    base19 = ldf any in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L354() else L355();
  L273():
    db2 = ld db;
    check L275() else D20();
  L274():
    r38 = dyn base6(<sym db>, "LibPaths");
    goto L24(r38);
  L279():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L281() else L282();
  L280():
    r43 = dyn base7(<lang match(types, attr(db, "Types"))>);
    goto L26(c10, r43);
  L291():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L292() else L293();
  L345():
    p7 = prom<V +>{
      verbose7 = ld verbose;
      verbose8 = force? verbose7;
      checkMissing(verbose8);
      r89 = `>`(verbose8, 1);
      c80 = `as.logical`(r89);
      if c80 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "...";
    };
    r91 = dyn message[, , , , domain]("Rebuilding the help.search() database", " ", "...", p7, NA_LGL);
    check L346() else D47();
  L350():
    types5 = ld types;
    check L352() else D50();
  L351():
    r94 = dyn base18(<lang `==`(types, "help")>);
    goto L48(r94);
  D20():
    deopt 74 [db2];
  D22():
    deopt 87 [r41];
  D47():
    deopt 204 [r91];
  D50():
    deopt 212 [types5];
  L27(c18, r46):
    anyNA1 = ldf anyNA in base;
    r51 = dyn anyNA1(r46);
    check L289() else D27();
  L30(c30, r53):
    c35 = `as.logical`(r53);
    c36 = `||`(c30, c35);
    goto L29(c36);
  L32(c39):
    c50 = `as.logical`(c39);
    if c50 then L313() else L35();
  L49(r99):
    st want_type_demo = r99;
    sym20 = ldf any;
    base20 = ldf any in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L358() else L359();
  L275():
    db3 = force? db2;
    checkMissing(db3);
    attr = ldf attr in base;
    r40 = dyn attr(db3, "LibPaths");
    check L276() else D21();
  L277():
    goto L23(r41);
  L281():
    types3 = ld types;
    check L283() else D23();
  L282():
    r45 = dyn base8(<sym types>, <lang attr(db, "Types")>);
    goto L27(c10, r45);
  L292():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L294() else L295();
  L293():
    r52 = dyn base10(<lang `<`(attr(db, "mtime"), file.mtime(`[`(lib.loc, file.exists(lib.loc))))>);
    goto L30(c25, r52);
  L302():
    sym12 = ldf identical;
    base12 = ldf identical in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L303() else L304();
  L346():
    flush_console = ldf `flush.console`;
    check L347() else D48();
  L352():
    types6 = force? types5;
    checkMissing(types6);
    r96 = `==`(types6, "help");
    any2 = ldf any in base;
    r97 = dyn any2(r96);
    check L353() else D51();
  L354():
    types7 = ld types;
    check L356() else D52();
  L355():
    r98 = dyn base19(<lang `==`(types, "demo")>);
    goto L49(r98);
  D21():
    deopt 78 [r40];
  D23():
    deopt 93 [c10, types3];
  D27():
    deopt 107 [c18, r51];
  D48():
    deopt 206 [];
  D51():
    deopt 217 [r97];
  D52():
    deopt 221 [types7];
  L31(c33, r55):
    file_mtime = ldf `file.mtime`;
    check L298() else D30();
  L33(c43, r65):
    r71 = `!`(r65);
    c47 = `as.logical`(r71);
    c48 = `||`(c43, c47);
    goto L32(c48);
  L35():
    goto L36();
  L36():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L315() else L316();
  L50(r103):
    st want_type_vignette = r103;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L362() else L363();
  L276():
    goto L24(r40);
  L283():
    types4 = force? types3;
    checkMissing(types4);
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L284() else L285();
  L289():
    goto L26(c18, r51);
  L294():
    db6 = ld db;
    check L296() else D28();
  L295():
    r54 = dyn base11(<sym db>, "mtime");
    goto L31(c25, r54);
  L303():
    sym13 = ldf attr;
    base13 = ldf attr in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L305() else L306();
  L304():
    r64 = dyn base12(<lang attr(db, "ctype")>, <lang Sys.getlocale("LC_CTYPE")>);
    goto L33(c38, r64);
  L313():
    st rebuild = TRUE;
    goto L36();
  L347():
    r92 = dyn flush_console();
    check L348() else D49();
  L353():
    goto L48(r97);
  L356():
    types8 = force? types7;
    checkMissing(types8);
    r100 = `==`(types8, "demo");
    any3 = ldf any in base;
    r101 = dyn any3(r100);
    check L357() else D53();
  L358():
    types9 = ld types;
    check L360() else D54();
  L359():
    r102 = dyn base20(<lang `==`(types, "vignette")>);
    goto L50(r102);
  D28():
    deopt 113 [c25, db6];
  D30():
    deopt 118 [c33, r55];
  D49():
    deopt 207 [r92];
  D53():
    deopt 226 [r101];
  D54():
    deopt 230 [types9];
  L28(c21, r48):
    match = ldf match in base;
    r50 = dyn match(types4, r48, NA_INT, NULL);
    check L288() else D26();
  L34(c46, r67):
    Sys_getlocale = ldf `Sys.getlocale`;
    check L309() else D35();
  L37(r74):
    r75 = `!`(r74);
    c52 = `as.logical`(r75);
    if c52 then L318() else L38(c52);
  L51(r107):
    r108 = `!`(r107);
    c82 = `as.logical`(r108);
    if c82 then L365() else L52();
  L284():
    db4 = ld db;
    check L286() else D24();
  L285():
    r47 = dyn base9(<sym db>, "Types");
    goto L28(c10, r47);
  L296():
    db7 = force? db6;
    checkMissing(db7);
    attr2 = ldf attr in base;
    r56 = dyn attr2(db7, "mtime");
    check L297() else D29();
  L298():
    p6 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      c34 = `is.object`(lib_loc6);
      if c34 then L1() else L2(lib_loc6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", lib_loc6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(lib_loc8):
      file_exists = ldf `file.exists`;
      p5 = prom<V +>{
        lib_loc9 = ld `lib.loc`;
        lib_loc10 = force? lib_loc9;
        checkMissing(lib_loc10);
        return lib_loc10;
      };
      r58 = dyn file_exists(p5);
      __1 = ldf `[` in base;
      r59 = dyn __1(lib_loc8, r58);
      goto L0(r59);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r61 = dyn file_mtime(p6);
    check L299() else D31();
  L305():
    db8 = ld db;
    check L307() else D33();
  L306():
    r66 = dyn base13(<sym db>, "ctype");
    goto L34(c38, r66);
  L315():
    package1 = ld package;
    check L317() else D38();
  L316():
    r73 = dyn base14(<sym package>);
    goto L37(r73);
  L348():
    goto L47();
  L357():
    goto L49(r101);
  L360():
    types10 = force? types9;
    checkMissing(types10);
    r104 = `==`(types10, "vignette");
    any4 = ldf any in base;
    r105 = dyn any4(r104);
    check L361() else D55();
  L362():
    package5 = ld package;
    check L364() else D56();
  L363():
    r106 = dyn base21(<sym package>);
    goto L51(r106);
  D24():
    deopt 97 [c10, db4];
  D26():
    deopt 105 [c21, r50];
  D29():
    deopt 117 [c25, r56];
  D31():
    deopt 120 [c33, r55, r61];
  D33():
    deopt 129 [c38, db8];
  D35():
    deopt 135 [c46];
  D38():
    deopt 155 [package1];
  D55():
    deopt 235 [r105];
  D56():
    deopt 238 [package5];
  L38(c54):
    c77 = `as.logical`(c54);
    if c77 then L338() else L43();
  L52():
    character = ldf character;
    check L368() else D58();
  L53():
    st np = 0;
    verbose9 = ld verbose;
    check L457() else D101();
  L286():
    db5 = force? db4;
    checkMissing(db5);
    attr1 = ldf attr in base;
    r49 = dyn attr1(db5, "Types");
    check L287() else D25();
  L288():
    goto L27(c21, r50);
  L297():
    goto L31(c25, r56);
  L299():
    r62 = `<`(r55, r61);
    any = ldf any in base;
    r63 = dyn any(r62);
    check L300() else D32();
  L307():
    db9 = force? db8;
    checkMissing(db9);
    attr3 = ldf attr in base;
    r68 = dyn attr3(db9, "ctype");
    check L308() else D34();
  L309():
    r69 = dyn Sys_getlocale("LC_CTYPE");
    check L310() else D36();
  L317():
    package2 = force? package1;
    checkMissing(package2);
    c51 = `==`(package2, NULL);
    goto L37(c51);
  L318():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L319() else L320();
  L361():
    goto L50(r105);
  L364():
    package6 = force? package5;
    checkMissing(package6);
    c81 = `==`(package6, NULL);
    goto L51(c81);
  L365():
    package7 = ld package;
    check L366() else D57();
  D25():
    deopt 101 [c10, r49];
  D32():
    deopt 123 [c33, r63];
  D34():
    deopt 133 [c38, r68];
  D36():
    deopt 137 [c46, r69];
  D57():
    deopt 242 [package7];
  D58():
    deopt 249 [];
  D101():
    deopt 398 [verbose9];
  L39(c57, r77):
    c74 = `as.logical`(r77);
    c75 = `&&`(c57, c74);
    goto L38(c75);
  L43():
    goto L44(NULL);
  L44(r87):
    goto L21();
  L287():
    goto L28(c10, r49);
  L300():
    goto L30(c33, r63);
  L308():
    goto L34(c38, r68);
  L310():
    identical1 = ldf identical in base;
    r70 = dyn identical1(r67, r69, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L311() else D37();
  L319():
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L321() else L322();
  L320():
    r76 = dyn base15(<lang is.na(match(package, `[`(`$`(db, Base), , "Package")))>);
    goto L39(c52, r76);
  L338():
    st rebuild = TRUE;
    goto L44(TRUE);
  L366():
    package8 = force? package7;
    checkMissing(package8);
    st packages_in_hsearch_db = package8;
    st package_paths = NULL;
    goto L53();
  L368():
    r110 = dyn character(0);
    check L369() else D59();
  L457():
    verbose10 = force? verbose9;
    checkMissing(verbose10);
    r165 = `>=`(verbose10, 2);
    c108 = `as.logical`(r165);
    if c108 then L458() else L75();
  D37():
    deopt 146 [c46, r70];
  D59():
    deopt 251 [r110];
  L40(c60, r79):
    any1 = ldf any in base;
    r86 = dyn any1(r79);
    check L336() else D43();
  L75():
    goto L76();
  L76():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L464() else L465();
  L311():
    goto L33(c46, r70);
  L321():
    sym17 = ldf match;
    base17 = ldf match in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L323() else L324();
  L322():
    r78 = dyn base16(<lang match(package, `[`(`$`(db, Base), , "Package"))>);
    goto L40(c52, r78);
  L369():
    st ans = r110;
    character1 = ldf character;
    check L370() else D60();
  L458():
    message1 = ldf message;
    check L459() else D102();
  D43():
    deopt 181 [c60, r86];
  D60():
    deopt 254 [];
  D102():
    deopt 403 [];
  L41(c63, r81):
    is_na = ldf `is.na` in base;
    r85 = dyn is_na(r81);
    check L335() else D42();
  L77(r170):
    st tot = r170;
    st incr = 0;
    verbose11 = ld verbose;
    check L468() else D108();
  L323():
    package3 = ld package;
    check L325() else D39();
  L324():
    r80 = dyn base17(<sym package>, <lang `[`(`$`(db, Base), , "Package")>);
    goto L41(c52, r80);
  L336():
    goto L39(c60, r86);
  L370():
    r111 = dyn character1(0);
    check L371() else D61();
  L459():
    r166 = dyn message1[, domain]("Packages {readRDS() sequentially}:", NA_LGL);
    check L460() else D103();
  L464():
    package_paths = ld package_paths;
    check L466() else D106();
  L465():
    r169 = dyn base27(<sym package_paths>);
    goto L77(r169);
  D39():
    deopt 165 [c52, package3];
  D42():
    deopt 179 [c63, r85];
  D61():
    deopt 256 [r111];
  D103():
    deopt 407 [r166];
  D106():
    deopt 415 [package_paths];
  D108():
    deopt 423 [verbose11];
  L325():
    package4 = force? package3;
    checkMissing(package4);
    db10 = ld db;
    check L326() else D40();
  L335():
    goto L40(c63, r85);
  L371():
    st paths = r111;
    lib_loc11 = ld `lib.loc`;
    check L372() else D62();
  L460():
    flush_console1 = ldf `flush.console`;
    check L461() else D104();
  L466():
    package_paths1 = force? package_paths;
    checkMissing(package_paths1);
    length1 = ldf length in base;
    r171 = dyn length1(package_paths1);
    check L467() else D107();
  L468():
    verbose12 = force? verbose11;
    checkMissing(verbose12);
    c109 = `as.logical`(verbose12);
    if c109 then L469() else L78(c109);
  D40():
    deopt 167 [c52, db10];
  D62():
    deopt 258 [lib_loc11];
  D104():
    deopt 409 [];
  D107():
    deopt 418 [r171];
  L78(c111):
    c115 = `as.logical`(c111);
    if c115 then L472() else L79();
  L326():
    db11 = force? db10;
    checkMissing(db11);
    c64 = `is.object`(db11);
    if c64 then L328() else L329(c52, db11);
  L372():
    lib_loc12 = force? lib_loc11;
    checkMissing(lib_loc12);
    c83 = `is.object`(lib_loc12);
    if c83 then L373() else L374(lib_loc12);
  L461():
    r167 = dyn flush_console1();
    check L462() else D105();
  L467():
    goto L77(r171);
  L469():
    WINDOWS = ld WINDOWS;
    check L470() else D109();
  D105():
    deopt 410 [r167];
  D109():
    deopt 425 [c109, WINDOWS];
  L54(dx13):
    st `lib.loc` = dx13;
    _standard_regexps = ldf `.standard_regexps`;
    check L378() else D65();
  L79():
    verbose13 = ld verbose;
    check L478() else D112();
  L81():
    sym29 = ldf vector;
    base29 = ldf vector in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L483() else L484();
  L327(c68, dx7):
    c69 = `is.object`(dx7);
    if c69 then L331() else L332(c68);
  L328():
    dr6 = tryDispatchBuiltin.1("$", db11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L330() else L329(c52, dr6);
  L329(c66, db13):
    r82 = `$`(db13, <sym Base>);
    goto L327(c66, r82);
  L373():
    dr10 = tryDispatchBuiltin.1("[", lib_loc12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L375() else L374(dr10);
  L374(lib_loc14):
    file_exists1 = ldf `file.exists`;
    check L376() else D63();
  L462():
    goto L76();
  L470():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c112 = `as.logical`(WINDOWS1);
    c113 = `&&`(c109, c112);
    goto L78(c113);
  L472():
    winProgressBar = ldf winProgressBar;
    check L473() else D110();
  D63():
    deopt 261 [lib_loc14];
  D65():
    deopt 267 [];
  D110():
    deopt 429 [];
  D112():
    deopt 438 [verbose13];
  L42(c73, dx11):
    match1 = ldf match in base;
    r84 = dyn match1(package4, dx11, NA_INT, NULL);
    check L334() else D41();
  L83(r183):
    st dbMat = r183;
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L490() else L491();
  L330():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L327(c52, dx6);
  L331():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L333() else L332(c68);
  L332(c71):
    __2 = ldf `[` in base;
    r83 = dyn __2(dx7, <missing>, "Package");
    goto L42(c71, r83);
  L375():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L54(dx12);
  L376():
    p8 = prom<V +>{
      lib_loc15 = ld `lib.loc`;
      lib_loc16 = force? lib_loc15;
      checkMissing(lib_loc16);
      return lib_loc16;
    };
    r113 = dyn file_exists1(p8);
    check L377() else D64();
  L378():
    r115 = dyn _standard_regexps();
    check L379() else D66();
  L473():
    p19 = prom<V +>{
      tot = ld tot;
      tot1 = force? tot;
      checkMissing(tot1);
      return tot1;
    };
    r173 = dyn winProgressBar[, max]("R: creating the help.search() DB", p19);
    check L474() else D111();
  L478():
    verbose14 = force? verbose13;
    checkMissing(verbose14);
    r178 = `==`(verbose14, 1);
    c116 = `as.logical`(r178);
    if c116 then L479() else L82();
  L483():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L485() else L486();
  L484():
    r182 = dyn base29("list", <lang `*`(length(packages_in_hsearch_db), 4)>);
    goto L83(r182);
  D41():
    deopt 177 [c73, r84];
  D64():
    deopt 263 [lib_loc14, r113];
  D66():
    deopt 268 [r115];
  D111():
    deopt 433 [r173];
  L82():
    goto L81();
  L84(r185):
    r187 = `*`(r185, 4);
    vector = ldf vector in base;
    r188 = dyn vector("list", r187);
    check L489() else D117();
  L85(r190):
    l3 = ld dbMat;
    dim__ = ldf `dim<-`;
    check L497() else D121();
  L333():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L42(c68, dx10);
  L334():
    goto L41(c73, r84);
  L377():
    __3 = ldf `[` in base;
    r114 = dyn __3(lib_loc14, r113);
    goto L54(r114);
  L379():
    c84 = `is.object`(r115);
    if c84 then L381() else L382(r115);
  L474():
    st pb = r173;
    sym28 = ldf `on.exit`;
    base28 = ldf `on.exit` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L475() else L476();
  L479():
    ifelse = ldf ifelse;
    check L480() else D113();
  L485():
    packages_in_hsearch_db = ld packages_in_hsearch_db;
    check L487() else D115();
  L486():
    r184 = dyn base30(<sym packages_in_hsearch_db>);
    goto L84(r184);
  L490():
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L492() else L493();
  L491():
    r189 = dyn base31(<lang length(packages_in_hsearch_db)>, 4);
    goto L85(r189);
  D113():
    deopt 443 [];
  D115():
    deopt 456 [packages_in_hsearch_db];
  D117():
    deopt 463 [r188];
  D121():
    deopt 477 [r190, l3, r190];
  L80(r175):
    goto L81();
  L86(r192):
    c117 = ldf c in base;
    r194 = dyn c117(r192, 4);
    check L496() else D120();
  L380(dx15):
    st valid_package_version_regexp = dx15;
    lib_loc17 = ld `lib.loc`;
    check L384() else D67();
  L381():
    dr12 = tryDispatchBuiltin.1("$", r115);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L383() else L382(dr12);
  L382(r117):
    r118 = `$`(r117, <sym valid_package_version>);
    goto L380(r118);
  L475():
    on_exit = ldf `on.exit` in base;
    r176 = dyn on_exit(<lang close(pb)>);
    goto L80(r176);
  L476():
    r174 = dyn base28(<lang close(pb)>);
    goto L80(r174);
  L480():
    p20 = prom<V +>{
      tot2 = ld tot;
      tot3 = force? tot2;
      checkMissing(tot3);
      r179 = `>`(tot3, 500);
      return r179;
    };
    r181 = dyn ifelse(p20, 100, 10);
    check L481() else D114();
  L487():
    packages_in_hsearch_db1 = force? packages_in_hsearch_db;
    checkMissing(packages_in_hsearch_db1);
    length2 = ldf length in base;
    r186 = dyn length2(packages_in_hsearch_db1);
    check L488() else D116();
  L489():
    goto L83(r188);
  L492():
    packages_in_hsearch_db2 = ld packages_in_hsearch_db;
    check L494() else D118();
  L493():
    r191 = dyn base32(<sym packages_in_hsearch_db>);
    goto L86(r191);
  L497():
    r195 = dyn dim__(l3, NULL, r190);
    check L498() else D122();
  D67():
    deopt 271 [lib_loc17];
  D114():
    deopt 447 [r181];
  D116():
    deopt 459 [r186];
  D118():
    deopt 469 [packages_in_hsearch_db2];
  D120():
    deopt 475 [r194];
  D122():
    deopt 479 [r190, r195];
  L383():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L380(dx14);
  L384():
    lib_loc18 = force? lib_loc17;
    checkMissing(lib_loc18);
    s = toForSeq(lib_loc18);
    l = length(s);
    i4 = 0;
    goto L55(i4);
  L481():
    st incr = r181;
    goto L81();
  L488():
    goto L84(r186);
  L494():
    packages_in_hsearch_db3 = force? packages_in_hsearch_db2;
    checkMissing(packages_in_hsearch_db3);
    length3 = ldf length in base;
    r193 = dyn length3(packages_in_hsearch_db3);
    check L495() else D119();
  L496():
    goto L85(r194);
  L498():
    st dbMat = r195;
    ___ = ldf `:::`;
    check L499() else D123();
  D119():
    deopt 472 [r193];
  D123():
    deopt 482 [];
  L55(i5):
    i6 = `+`.1(i5, 1);
    c85 = `<`.1(l, i6);
    if c85 then L385() else L71();
  L495():
    goto L86(r193);
  L499():
    r196 = dyn ___("tools", ".build_hsearch_index");
    check L500() else D124();
  D124():
    deopt 485 [r196];
  L71():
    x = `[[`(s, i6, NULL, TRUE);
    st lib = x;
    list_files = ldf `list.files`;
    check L386() else D68();
  L385():
    duplicated = ldf duplicated;
    check L438() else D91();
  L500():
    checkFun.0(r196);
    r197 = r196 as cls;
    r198 = dyn r197(NULL);
    check L501() else D125();
  D68():
    deopt 274 [i6];
  D91():
    deopt 368 [];
  D125():
    deopt 488 [r198];
  L386():
    p9 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r120 = dyn list_files[, `all.files`, `full.names`](p9, FALSE, FALSE);
    check L387() else D69();
  L438():
    p18 = prom<V +>{
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      return ans3;
    };
    r159 = dyn duplicated(p18);
    check L439() else D92();
  L501():
    st hDB0 = r198;
    packages_in_hsearch_db4 = ld packages_in_hsearch_db;
    check L502() else D126();
  D69():
    deopt 280 [i6, r120];
  D92():
    deopt 370 [r159];
  D126():
    deopt 490 [packages_in_hsearch_db4];
  L387():
    st a = r120;
    a = ld a;
    check L388() else D70();
  L439():
    r160 = `!`(r159);
    st un = r160;
    ans4 = ld ans;
    check L440() else D93();
  L502():
    packages_in_hsearch_db5 = force? packages_in_hsearch_db4;
    checkMissing(packages_in_hsearch_db5);
    s2 = toForSeq(packages_in_hsearch_db5);
    l4 = length(s2);
    i91 = 0;
    goto L87(i91);
  D70():
    deopt 282 [i6, a];
  D93():
    deopt 373 [ans4];
  L87(i92):
    i93 = `+`.1(i92, 1);
    c118 = `<`.1(l4, i93);
    if c118 then L503() else L142();
  L388():
    a1 = force? a;
    checkMissing(a1);
    s1 = toForSeq(a1);
    l1 = length(s1);
    i9 = 0;
    goto L56(i6, i9);
  L440():
    ans5 = force? ans4;
    checkMissing(ans5);
    c105 = `is.object`(ans5);
    if c105 then L441() else L442(ans5);
  L56(i10, i11):
    i12 = `+`.1(i11, 1);
    c86 = `<`.1(l1, i12);
    if c86 then L389() else L70();
  L72(dx29):
    st packages_in_hsearch_db = dx29;
    paths2 = ld paths;
    check L445() else D95();
  L142():
    x2 = `[[`(s2, i93, NULL, TRUE);
    st p = x2;
    incr = ld incr;
    check L504() else D127();
  L441():
    dr20 = tryDispatchBuiltin.1("[", ans5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L443() else L442(dr20);
  L442(ans7):
    un = ld un;
    check L444() else D94();
  L503():
    verbose21 = ld verbose;
    check L665() else D200();
  D94():
    deopt 375 [ans7, un];
  D95():
    deopt 379 [paths2];
  D127():
    deopt 492 [i93, incr];
  D200():
    deopt 776 [verbose21];
  L70():
    x1 = `[[`(s1, i12, NULL, TRUE);
    st nam = x1;
    file_path = ldf `file.path`;
    check L390() else D71();
  L389():
    goto L55(i10);
  L443():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L72(dx28);
  L444():
    un1 = force? un;
    __6 = ldf `[` in base;
    r161 = dyn __6(ans7, un1);
    goto L72(r161);
  L445():
    paths3 = force? paths2;
    checkMissing(paths3);
    c106 = `is.object`(paths3);
    if c106 then L446() else L447(paths3);
  L504():
    incr1 = force? incr;
    checkMissing(incr1);
    c119 = `as.logical`(incr1);
    if c119 then L505() else L88(i93, c119);
  L665():
    verbose22 = force? verbose21;
    checkMissing(verbose22);
    r323 = `>=`(verbose22, 2);
    c167 = `as.logical`(r323);
    if c167 then L666() else L143();
  D71():
    deopt 285 [i10, i12];
  L73(dx31):
    st package_paths = dx31;
    ans8 = ld ans;
    check L450() else D97();
  L88(i97, c121):
    c125 = `as.logical`(c121);
    if c125 then L510() else L89();
  L143():
    goto L144();
  L144():
    sym44 = ldf list;
    base44 = ldf list in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L672() else L673();
  L390():
    p10 = prom<V +>{
      lib2 = ld lib;
      lib3 = force? lib2;
      checkMissing(lib3);
      return lib3;
    };
    p11 = prom<V +>{
      nam = ld nam;
      nam1 = force? nam;
      checkMissing(nam1);
      return nam1;
    };
    r123 = dyn file_path(p10, p11, "Meta", "package.rds");
    check L391() else D72();
  L446():
    dr22 = tryDispatchBuiltin.1("[", paths3);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L448() else L447(dr22);
  L447(paths5):
    un2 = ld un;
    check L449() else D96();
  L505():
    np = ld np;
    check L506() else D128();
  L666():
    message5 = ldf message;
    check L667() else D201();
  D72():
    deopt 290 [i10, i12, r123];
  D96():
    deopt 381 [paths5, un2];
  D97():
    deopt 385 [ans8];
  D128():
    deopt 495 [i93, c119, np];
  D201():
    deopt 781 [];
  L89():
    goto L90(i97);
  L90(i101):
    np2 = ld np;
    check L516() else D135();
  L145(r341):
    st db = r341;
    l40 = ld db;
    c172 = `is.object`(l40);
    if c172 then L684() else L685(NULL, l40, NULL, l40);
  L391():
    st pfile = r123;
    file_exists2 = ldf `file.exists`;
    check L392() else D73();
  L448():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L73(dx30);
  L449():
    un3 = force? un2;
    __7 = ldf `[` in base;
    r162 = dyn __7(paths5, un3);
    goto L73(r162);
  L450():
    ans9 = force? ans8;
    checkMissing(ans9);
    c107 = `is.object`(ans9);
    if c107 then L451() else L452(ans9);
  L506():
    np1 = force? np;
    checkMissing(np1);
    incr2 = ld incr;
    check L507() else D129();
  L510():
    message2 = ldf message;
    check L511() else D131();
  L667():
    p66 = prom<V +>{
      ifelse1 = ldf ifelse;
      p65 = prom<V +>{
        np13 = ld np;
        np14 = force? np13;
        checkMissing(np14);
        __19 = ldf `%%` in base;
        r324 = dyn __19(np14, 5);
        r325 = `==`(r324, 0);
        return r325;
      };
      r327 = dyn ifelse1(p65, "\n", "\n\n");
      return r327;
    };
    p71 = prom<V +>{
      sprintf = ldf sprintf;
      p68 = prom<V +>{
        nrow = ldf nrow;
        p67 = prom<V +>{
          dbMat = ld dbMat;
          dbMat1 = force? dbMat;
          checkMissing(dbMat1);
          return dbMat1;
        };
        r330 = dyn nrow(p67);
        return r330;
      };
      p70 = prom<V +>{
        ncol = ldf ncol;
        p69 = prom<V +>{
          dbMat2 = ld dbMat;
          dbMat3 = force? dbMat2;
          checkMissing(dbMat3);
          return dbMat3;
        };
        r333 = dyn ncol(p69);
        return r333;
      };
      r335 = dyn sprintf("Built dbMat[%d,%d]", p68, p70);
      return r335;
    };
    r337 = dyn message5[, , domain](p66, p71, NA_LGL);
    check L668() else D202();
  L672():
    do_call = ldf `do.call`;
    check L674() else D205();
  L673():
    r340 = dyn base44[Base, Aliases, Keywords, Concepts](<lang do.call(rbind, `[`(dbMat, , 1.0))>, <lang do.call(rbind, `[`(dbMat, , 2.0))>, <lang do.call(rbind, `[`(dbMat, , 3.0))>, <lang do.call(rbind, `[`(dbMat, , 4.0))>);
    goto L145(r340);
  D73():
    deopt 293 [i10, i12];
  D129():
    deopt 497 [i93, c119, incr2];
  D131():
    deopt 505 [i97];
  D135():
    deopt 517 [i101, np2];
  D202():
    deopt 786 [r337];
  D205():
    deopt 795 [];
  L74(dx33):
    l2 = ld package_paths;
    names__ = ldf `names<-`;
    check L455() else D99();
  L392():
    p12 = prom<V +>{
      pfile = ld pfile;
      pfile1 = force? pfile;
      checkMissing(pfile1);
      return pfile1;
    };
    r125 = dyn file_exists2(p12);
    check L393() else D74();
  L451():
    dr24 = tryDispatchBuiltin.1("[", ans9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L453() else L452(dr24);
  L452(ans11):
    un4 = ld un;
    check L454() else D98();
  L507():
    incr3 = force? incr2;
    checkMissing(incr3);
    __9 = ldf `%%` in base;
    r199 = dyn __9(np1, incr3);
    check L508() else D130();
  L511():
    r201 = dyn message2[, appendLF, domain](".", FALSE, NA_LGL);
    check L512() else D132();
  L516():
    np3 = force? np2;
    checkMissing(np3);
    r204 = `+`(np3, 1);
    st np = r204;
    verbose15 = ld verbose;
    check L517() else D136();
  L668():
    flush_console5 = ldf `flush.console`;
    check L669() else D203();
  L674():
    p72 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p73 = prom<V +>{
      dbMat4 = ld dbMat;
      dbMat5 = force? dbMat4;
      checkMissing(dbMat5);
      c168 = `is.object`(dbMat5);
      if c168 then L1() else L2();
    L0(dx78):
      return dx78;
    L1():
      dr54 = tryDispatchBuiltin.1("[", dbMat5);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2();
    L2():
      __20 = ldf `[` in base;
      r343 = dyn __20(dbMat5, <missing>, 1.0);
      goto L0(r343);
    L3():
      dx77 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx77);
    };
    r345 = dyn do_call(p72, p73);
    check L675() else D206();
  L683(r365, l46, r366, dx86):
    rownames__ = ldf `rownames<-`;
    check L687() else D214();
  L684():
    dr62 = tryDispatchBuiltin.1("$", l40);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L686() else L685(NULL, l40, NULL, dr62);
  L685(r361, l43, r362, l44):
    r367 = `$`(l44, <sym Base>);
    goto L683(r361, l43, r362, r367);
  D74():
    deopt 295 [i10, i12, r125];
  D98():
    deopt 387 [ans11, un4];
  D99():
    deopt 391 [dx33, l2, dx33];
  D130():
    deopt 500 [i93, c119, r199];
  D132():
    deopt 511 [i97, r201];
  D136():
    deopt 522 [i101, verbose15];
  D203():
    deopt 788 [];
  D206():
    deopt 798 [r345];
  D214():
    deopt 827 [r365, l46, dx86, r366];
  L393():
    c87 = `as.logical`(r125);
    if c87 then L394() else L57();
  L453():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L74(dx32);
  L454():
    un5 = force? un4;
    __8 = ldf `[` in base;
    r163 = dyn __8(ans11, un5);
    goto L74(r163);
  L455():
    r164 = dyn names__(l2, NULL, dx33);
    check L456() else D100();
  L508():
    r200 = `==`(r199, 0);
    c122 = `as.logical`(r200);
    c123 = `&&`(c119, c122);
    goto L88(i93, c123);
  L512():
    flush_console2 = ldf `flush.console`;
    check L513() else D133();
  L517():
    verbose16 = force? verbose15;
    checkMissing(verbose16);
    c126 = `as.logical`(verbose16);
    if c126 then L518() else L91(i101, c126);
  L669():
    r338 = dyn flush_console5();
    check L670() else D204();
  L675():
    do_call1 = ldf `do.call`;
    check L676() else D207();
  L686():
    dx85 = getTryDispatchBuiltinValue(dr62);
    goto L683(NULL, l40, NULL, dx85);
  L687():
    r368 = dyn rownames__(dx86, NULL, r366);
    check L688() else D215();
  D100():
    deopt 393 [dx33, r164];
  D133():
    deopt 513 [i97];
  D204():
    deopt 789 [r338];
  D207():
    deopt 801 [];
  D215():
    deopt 829 [r365, l46, r368];
  L57():
    goto L56(i10, i12);
  L91(i103, c128):
    c132 = `as.logical`(c128);
    if c132 then L521() else L92();
  L394():
    readRDS = ldf readRDS;
    check L395() else D75();
  L456():
    st package_paths = r164;
    goto L53();
  L513():
    r202 = dyn flush_console2();
    check L514() else D134();
  L518():
    WINDOWS2 = ld WINDOWS;
    check L519() else D137();
  L670():
    goto L144();
  L676():
    p74 = prom<V +>{
      rbind2 = ld rbind;
      rbind3 = force? rbind2;
      checkMissing(rbind3);
      return rbind3;
    };
    p75 = prom<V +>{
      dbMat8 = ld dbMat;
      dbMat9 = force? dbMat8;
      checkMissing(dbMat9);
      c169 = `is.object`(dbMat9);
      if c169 then L1() else L2();
    L0(dx80):
      return dx80;
    L1():
      dr56 = tryDispatchBuiltin.1("[", dbMat9);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2();
    L2():
      __21 = ldf `[` in base;
      r347 = dyn __21(dbMat9, <missing>, 2.0);
      goto L0(r347);
    L3():
      dx79 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx79);
    };
    r349 = dyn do_call1(p74, p75);
    check L677() else D208();
  L688():
    c173 = `is.object`(l46);
    if c173 then L690() else L691(r365, l46);
  D75():
    deopt 297 [i10, i12];
  D134():
    deopt 514 [i97, r202];
  D137():
    deopt 524 [i101, c126, WINDOWS2];
  D208():
    deopt 804 [r349];
  L92():
    goto L93(i103);
  L93(i107):
    verbose17 = ld verbose;
    check L525() else D140();
  L395():
    p13 = prom<V +>{
      pfile2 = ld pfile;
      pfile3 = force? pfile2;
      checkMissing(pfile3);
      return pfile3;
    };
    r127 = dyn readRDS(p13);
    check L396() else D76();
  L514():
    goto L90(i97);
  L519():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c129 = `as.logical`(WINDOWS3);
    c130 = `&&`(c126, c129);
    goto L91(i101, c130);
  L521():
    setWinProgressBar = ldf setWinProgressBar;
    check L522() else D138();
  L677():
    do_call2 = ldf `do.call`;
    check L678() else D209();
  L689(dx88):
    st db = dx88;
    sym45 = ldf `is.null`;
    base45 = ldf `is.null` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L693() else L694();
  L690():
    dr64 = tryDispatchBuiltin.0("$<-", l46, r368);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L692() else L691(r365, dr64);
  L691(r370, l48):
    r373 = `$<-`(l48, <sym Base>, r368);
    goto L689(r373);
  D76():
    deopt 299 [i10, i12, r127];
  D138():
    deopt 528 [i103];
  D140():
    deopt 534 [i107, verbose17];
  D209():
    deopt 807 [];
  L146(r375):
    c176 = `as.logical`(r375);
    if c176 then L700() else L147();
  L396():
    c88 = `is.object`(r127);
    if c88 then L398() else L399(i10, i12, r127);
  L522():
    p21 = prom<V +>{
      pb = ld pb;
      pb1 = force? pb;
      checkMissing(pb1);
      return pb1;
    };
    p22 = prom<V +>{
      np4 = ld np;
      np5 = force? np4;
      checkMissing(np5);
      return np5;
    };
    r207 = dyn setWinProgressBar(p21, p22);
    check L523() else D139();
  L525():
    verbose18 = force? verbose17;
    checkMissing(verbose18);
    r209 = `>=`(verbose18, 2);
    c133 = `as.logical`(r209);
    if c133 then L526() else L94();
  L678():
    p76 = prom<V +>{
      rbind4 = ld rbind;
      rbind5 = force? rbind4;
      checkMissing(rbind5);
      return rbind5;
    };
    p77 = prom<V +>{
      dbMat12 = ld dbMat;
      dbMat13 = force? dbMat12;
      checkMissing(dbMat13);
      c170 = `is.object`(dbMat13);
      if c170 then L1() else L2();
    L0(dx82):
      return dx82;
    L1():
      dr58 = tryDispatchBuiltin.1("[", dbMat13);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2();
    L2():
      __22 = ldf `[` in base;
      r351 = dyn __22(dbMat13, <missing>, 3.0);
      goto L0(r351);
    L3():
      dx81 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx81);
    };
    r353 = dyn do_call2(p76, p77);
    check L679() else D210();
  L692():
    dx87 = getTryDispatchBuiltinValue(dr64);
    goto L689(dx87);
  L693():
    db14 = ld db;
    check L695() else D216();
  L694():
    r374 = dyn base45(<lang `$`(db, Concepts)>);
    goto L146(r374);
  D139():
    deopt 531 [i103, r207];
  D210():
    deopt 810 [r353];
  D216():
    deopt 833 [db14];
  L94():
    goto L95(i107);
  L95(i110):
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L532() else L533();
  L147():
    goto L148();
  L148():
    which = ldf which;
    check L708() else D219();
  L397(i27, i28, dx17):
    c89 = `is.object`(dx17);
    if c89 then L401() else L402(i27, i28, dx17);
  L398():
    dr14 = tryDispatchBuiltin.1("$", r127);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L400() else L399(i10, i12, dr14);
  L399(i23, i24, r129):
    r130 = `$`(r129, <sym DESCRIPTION>);
    goto L397(i23, i24, r130);
  L523():
    goto L93(i103);
  L526():
    message3 = ldf message;
    check L527() else D141();
  L679():
    do_call3 = ldf `do.call`;
    check L680() else D211();
  L695():
    db15 = force? db14;
    checkMissing(db15);
    c174 = `is.object`(db15);
    if c174 then L697() else L698(db15);
  L700():
    matrix = ldf matrix;
    check L701() else D217();
  D141():
    deopt 539 [i107];
  D211():
    deopt 813 [];
  D217():
    deopt 838 [];
  D219():
    deopt 851 [];
  L58(i35, i36, dx21):
    st info = dx21;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L409() else L410();
  L96(i113, r218):
    r219 = `!`(r218);
    c135 = `as.logical`(r219);
    if c135 then L535() else L97();
  L400():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L397(i10, i12, dx16);
  L401():
    dr16 = tryDispatchBuiltin.1("[", dx17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L403() else L402(i27, i28, dr16);
  L402(i31, i32, dx19):
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L404() else L405();
  L527():
    p25 = prom<V +>{
      p23 = ld p;
      p24 = force? p23;
      checkMissing(p24);
      return p24;
    };
    p26 = prom<V +>{
      np6 = ld np;
      np7 = force? np6;
      checkMissing(np7);
      __10 = ldf `%%` in base;
      r211 = dyn __10(np7, 5);
      r212 = `==`(r211, 0);
      visible.0();
      return r212;
    };
    r214 = dyn message3[, , appendLF, domain](" ", p25, p26, NA_LGL);
    check L528() else D142();
  L532():
    package_paths2 = ld package_paths;
    check L534() else D145();
  L533():
    r217 = dyn base33(<sym package_paths>);
    goto L96(i110, r217);
  L680():
    p78 = prom<V +>{
      rbind6 = ld rbind;
      rbind7 = force? rbind6;
      checkMissing(rbind7);
      return rbind7;
    };
    p79 = prom<V +>{
      dbMat16 = ld dbMat;
      dbMat17 = force? dbMat16;
      checkMissing(dbMat17);
      c171 = `is.object`(dbMat17);
      if c171 then L1() else L2();
    L0(dx84):
      return dx84;
    L1():
      dr60 = tryDispatchBuiltin.1("[", dbMat17);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2();
    L2():
      __23 = ldf `[` in base;
      r355 = dyn __23(dbMat17, <missing>, 4.0);
      goto L0(r355);
    L3():
      dx83 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx83);
    };
    r357 = dyn do_call3(p78, p79);
    check L681() else D212();
  L696(dx90):
    c175 = `==`(dx90, NULL);
    goto L146(c175);
  L697():
    dr66 = tryDispatchBuiltin.1("$", db15);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L699() else L698(dr66);
  L698(db17):
    r376 = `$`(db17, <sym Concepts>);
    goto L696(r376);
  L701():
    p80 = prom<V +>{
      character2 = ldf character;
      r377 = dyn character2();
      return r377;
    };
    p81 = prom<V +>{
      sym46 = ldf list;
      base46 = ldf list in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L1() else L2();
    L0(r380):
      return r380;
    L1():
      ___4 = ldf `:::`;
      r381 = dyn ___4("tools", "hsearch_index_colnames");
      c177 = `is.object`(r381);
      if c177 then L4() else L5(r381);
    L2():
      r379 = dyn base46(NULL, <lang `$`(`:::`(tools, hsearch_index_colnames), Concepts)>);
      goto L0(r379);
    L3(dx92):
      list1 = ldf list in base;
      r385 = dyn list1(NULL, dx92);
      goto L0(r385);
    L4():
      dr68 = tryDispatchBuiltin.1("$", r381);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L6() else L5(dr68);
    L5(r383):
      r384 = `$`(r383, <sym Concepts>);
      goto L3(r384);
    L6():
      dx91 = getTryDispatchBuiltinValue(dr68);
      goto L3(dx91);
    };
    r387 = dyn matrix[, ncol, dimnames](p80, 3, p81);
    check L702() else D218();
  L708():
    p84 = prom<V +>{
      vapply = ldf vapply;
      p82 = prom<V +>{
        db18 = ld db;
        db19 = force? db18;
        checkMissing(db19);
        return db19;
      };
      p83 = prom<V +>{
        NROW1 = ld NROW;
        NROW2 = force? NROW1;
        checkMissing(NROW2);
        return NROW2;
      };
      r396 = dyn vapply(p82, p83, 0);
      r397 = `>`(r396, 0);
      return r397;
    };
    r399 = dyn which(p84);
    check L709() else D220();
  D142():
    deopt 546 [i107, r214];
  D145():
    deopt 553 [i110, package_paths2];
  D212():
    deopt 816 [r357];
  D218():
    deopt 844 [r387];
  D220():
    deopt 853 [r399];
  L59(i41, i42, dx24, r132):
    __4 = ldf `[` in base;
    r134 = dyn __4(dx24, r132);
    goto L58(i41, i42, r134);
  L61(i49, i50, r136):
    r138 = `!=`(r136, 2);
    c91 = `as.logical`(r138);
    if c91 then L62(i49, i50, c91) else L413();
  L97():
    find_package = ldf `find.package`;
    check L542() else D148();
  L99(i120, dx36):
    st path = dx36;
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L544() else L545();
  L403():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L58(i27, i28, dx20);
  L404():
    c90 = ldf c in base;
    r133 = dyn c90("Package", "Version");
    check L406() else D77();
  L405():
    r131 = dyn base22("Package", "Version");
    goto L59(i31, i32, dx19, r131);
  L409():
    info = ld info;
    check L411() else D78();
  L410():
    r135 = dyn base23(<sym info>);
    goto L61(i35, i36, r135);
  L528():
    flush_console3 = ldf `flush.console`;
    check L529() else D143();
  L534():
    package_paths3 = force? package_paths2;
    checkMissing(package_paths3);
    c134 = `==`(package_paths3, NULL);
    goto L96(i110, c134);
  L535():
    package_paths4 = ld package_paths;
    check L536() else D146();
  L681():
    list = ldf list in base;
    r358 = dyn list(r345, r349, r353, r357);
    check L682() else D213();
  L699():
    dx89 = getTryDispatchBuiltinValue(dr66);
    goto L696(dx89);
  L702():
    l49 = ld db;
    c178 = `is.object`(l49);
    if c178 then L704() else L705(r387, l49);
  L709():
    s4 = toForSeq(r399);
    l52 = length(s4);
    i248 = 0;
    goto L149(i248);
  D77():
    deopt 306 [i31, i32, dx19, r133];
  D78():
    deopt 313 [i35, i36, info];
  D143():
    deopt 548 [i107];
  D146():
    deopt 557 [i113, package_paths4];
  D148():
    deopt 563 [i113];
  D213():
    deopt 819 [r358];
  L62(i51, i52, c92):
    c100 = `as.logical`(c92);
    if c100 then L419() else L64();
  L100(i123, r225):
    r227 = `==`(r225, 0);
    c137 = `as.logical`(r227);
    if c137 then L548() else L101();
  L149(i249):
    i250 = `+`.1(i249, 1);
    c179 = `<`.1(l52, i250);
    if c179 then L710() else L153();
  L406():
    goto L59(i31, i32, dx19, r133);
  L411():
    info1 = force? info;
    checkMissing(info1);
    length = ldf length in base;
    r137 = dyn length(info1);
    check L412() else D79();
  L413():
    sym24 = ldf anyNA;
    base24 = ldf anyNA in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L414() else L415();
  L529():
    r215 = dyn flush_console3();
    check L530() else D144();
  L536():
    package_paths5 = force? package_paths4;
    checkMissing(package_paths5);
    c136 = `is.object`(package_paths5);
    if c136 then L537() else L538(i113, package_paths5);
  L542():
    p31 = prom<V +>{
      p29 = ld p;
      p30 = force? p29;
      checkMissing(p30);
      return p30;
    };
    p32 = prom<V +>{
      lib_loc19 = ld `lib.loc`;
      lib_loc20 = force? lib_loc19;
      checkMissing(lib_loc20);
      return lib_loc20;
    };
    r223 = dyn find_package[, , quiet](p31, p32, TRUE);
    check L543() else D149();
  L544():
    path = ld path;
    check L546() else D150();
  L545():
    r224 = dyn base34(<sym path>);
    goto L100(i120, r224);
  L682():
    goto L145(r358);
  L703(r391, dx94):
    st db = dx94;
    goto L148();
  L704():
    dr70 = tryDispatchBuiltin.0("$<-", l49, r387);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L706() else L705(r387, dr70);
  L705(r389, l51):
    r392 = `$<-`(l51, <sym Concepts>, r387);
    goto L703(r389, r392);
  D79():
    deopt 316 [i35, i36, r137];
  D144():
    deopt 549 [i107, r215];
  D149():
    deopt 568 [i113, r223];
  D150():
    deopt 572 [i120, path];
  L63(i59, i60, c96, r140):
    c97 = `as.logical`(r140);
    c98 = `||`(c96, c97);
    goto L62(i59, i60, c98);
  L64():
    grepl = ldf grepl;
    check L422() else D82();
  L98(i119, dx35):
    goto L99(i119, dx35);
  L101():
    goto L105(i123);
  L105(i133):
    st hDB = NULL;
    want_type_help = ld want_type_help;
    check L558() else D155();
  L153():
    x4 = `[[`(s4, i250, NULL, TRUE);
    st i = x4;
    paste = ldf paste;
    check L711() else D221();
  L412():
    goto L61(i35, i36, r137);
  L414():
    info2 = ld info;
    check L416() else D80();
  L415():
    r139 = dyn base24(<sym info>);
    goto L63(i49, i50, c91, r139);
  L419():
    goto L56(i51, i52);
  L530():
    goto L95(i107);
  L537():
    dr26 = tryDispatchBuiltin.1("[", package_paths5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L539() else L538(i113, dr26);
  L538(i117, package_paths7):
    p27 = ld p;
    check L540() else D147();
  L543():
    goto L99(i113, r223);
  L546():
    path1 = force? path;
    checkMissing(path1);
    length4 = ldf length in base;
    r226 = dyn length4(path1);
    check L547() else D151();
  L548():
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L549() else L550();
  L706():
    dx93 = getTryDispatchBuiltinValue(dr70);
    goto L703(r387, dx93);
  L710():
    sym49 = ldf identical;
    base49 = ldf identical in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L724() else L725();
  D80():
    deopt 321 [i49, i50, c91, info2];
  D82():
    deopt 331 [i51, i52];
  D147():
    deopt 559 [i117, package_paths7, p27];
  D151():
    deopt 575 [i120, r226];
  D155():
    deopt 593 [i133, want_type_help];
  D221():
    deopt 855 [i250];
  L102(i128, r229):
    c139 = `as.logical`(r229);
    if c139 then L552() else L103();
  L154(r435):
    r438 = `!`(r435);
    c186 = `as.logical`(r438);
    if c186 then L729() else L155();
  L416():
    info3 = force? info2;
    checkMissing(info3);
    anyNA2 = ldf anyNA in base;
    r141 = dyn anyNA2(info3);
    check L417() else D81();
  L422():
    p14 = prom<V +>{
      valid_package_version_regexp = ld valid_package_version_regexp;
      valid_package_version_regexp1 = force? valid_package_version_regexp;
      checkMissing(valid_package_version_regexp1);
      return valid_package_version_regexp1;
    };
    p15 = prom<V +>{
      info4 = ld info;
      info5 = force? info4;
      checkMissing(info5);
      c101 = `is.object`(info5);
      if c101 then L1() else L2(info5);
    L0(dx27):
      return dx27;
    L1():
      dr18 = tryDispatchBuiltin.1("[", info5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(info7):
      __5 = ldf `[` in base;
      r144 = dyn __5(info7, "Version");
      goto L0(r144);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx26);
    };
    r146 = dyn grepl(p14, p15);
    check L423() else D83();
  L539():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L98(i113, dx34);
  L540():
    p28 = force? p27;
    __11 = ldf `[` in base;
    r220 = dyn __11(package_paths7, p28);
    goto L98(i117, r220);
  L547():
    goto L100(i120, r226);
  L549():
    package9 = ld package;
    check L551() else D152();
  L550():
    r228 = dyn base35(<sym package>);
    goto L102(i123, r228);
  L558():
    want_type_help1 = force? want_type_help;
    checkMissing(want_type_help1);
    c140 = `as.logical`(want_type_help1);
    if c140 then L559() else L106();
  L711():
    p87 = prom<V +>{
      sym47 = ldf `rep.int`;
      base47 = ldf `rep.int` in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L2() else L3();
    L0(r401):
      return r401;
    L2():
      sym48 = ldf seq_along;
      base48 = ldf seq_along in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L4() else L5();
    L3():
      r400 = dyn base47(<lang seq_along(packages_in_hsearch_db)>, <lang vapply(`[`(dbMat, , i), NROW, 0)>);
      goto L0(r400);
    L1(r403):
      vapply1 = ldf vapply;
      p85 = prom<V +>{
        dbMat20 = ld dbMat;
        dbMat21 = force? dbMat20;
        checkMissing(dbMat21);
        c180 = `is.object`(dbMat21);
        if c180 then L1() else L2();
      L0(dx96):
        return dx96;
      L1():
        dr72 = tryDispatchBuiltin.1("[", dbMat21);
        dc36 = getTryDispatchBuiltinDispatched(dr72);
        if dc36 then L3() else L2();
      L2():
        i253 = ld i;
        i254 = force? i253;
        __24 = ldf `[` in base;
        r405 = dyn __24(dbMat21, <missing>, i254);
        goto L0(r405);
      L3():
        dx95 = getTryDispatchBuiltinValue(dr72);
        goto L0(dx95);
      };
      p86 = prom<V +>{
        NROW3 = ld NROW;
        NROW4 = force? NROW3;
        checkMissing(NROW4);
        return NROW4;
      };
      r408 = dyn vapply1(p85, p86, 0);
      rep_int1 = ldf `rep.int` in base;
      r409 = dyn rep_int1(r403, r408);
      goto L0(r409);
    L4():
      packages_in_hsearch_db6 = ld packages_in_hsearch_db;
      packages_in_hsearch_db7 = force? packages_in_hsearch_db6;
      checkMissing(packages_in_hsearch_db7);
      r404 = seq_along(packages_in_hsearch_db7);
      goto L1(r404);
    L5():
      r402 = dyn base48(<sym packages_in_hsearch_db>);
      goto L1(r402);
    };
    p88 = prom<V +>{
      db20 = ld db;
      db21 = force? db20;
      checkMissing(db21);
      c181 = `is.object`(db21);
      if c181 then L2() else L3(db21);
    L0(dx98):
      c182 = `is.object`(dx98);
      if c182 then L5() else L6();
    L2():
      dr74 = tryDispatchBuiltin.1("[[", db21);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L4() else L3(dr74);
    L3(db23):
      i255 = ld i;
      i256 = force? i255;
      __25 = ldf `[[` in base;
      r411 = dyn __25(db23, i256);
      goto L0(r411);
    L1(dx102):
      return dx102;
    L4():
      dx97 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx97);
    L5():
      dr76 = tryDispatchBuiltin.1("[", dx98);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L7() else L6();
    L6():
      __26 = ldf `[` in base;
      r412 = dyn __26(dx98, <missing>, "ID");
      goto L1(r412);
    L7():
      dx101 = getTryDispatchBuiltinValue(dr76);
      goto L1(dx101);
    };
    r414 = dyn paste[, , sep](p87, p88, "/");
    check L712() else D222();
  L724():
    Sys_getlocale1 = ldf `Sys.getlocale`;
    check L726() else D225();
  L725():
    r434 = dyn base49(<lang Sys.getlocale("LC_CTYPE")>, "C");
    goto L154(r434);
  D81():
    deopt 324 [i49, i50, c91, r141];
  D83():
    deopt 334 [i51, i52, r146];
  D152():
    deopt 579 [i123, package9];
  D222():
    deopt 860 [i250, r414];
  D225():
    deopt 881 [];
  L103():
    stop1 = ldf stop;
    check L555() else D153();
  L106():
    goto L126(i133);
  L126(i208):
    sym41 = ldf `is.null`;
    base41 = ldf `is.null` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L621() else L622();
  L155():
    goto L172();
  L172():
    unlist = ldf unlist;
    check L793() else D256();
  L417():
    goto L63(i49, i50, c91, r141);
  L423():
    r147 = `!`(r146);
    c102 = `as.logical`(r147);
    if c102 then L424() else L66();
  L551():
    package10 = force? package9;
    checkMissing(package10);
    c138 = `==`(package10, NULL);
    goto L102(i123, c138);
  L552():
    goto L87(i128);
  L559():
    file_exists3 = ldf `file.exists`;
    check L560() else D156();
  L712():
    l53 = ld db;
    c183 = `is.object`(l53);
    if c183 then L713() else L714(i250, r414, l53, r414, l53);
  L726():
    r436 = dyn Sys_getlocale1("LC_CTYPE");
    check L727() else D226();
  L729():
    verbose23 = ld verbose;
    check L730() else D228();
  D153():
    deopt 585 [i128];
  D156():
    deopt 596 [i133];
  D226():
    deopt 883 [r436];
  D228():
    deopt 895 [verbose23];
  D256():
    deopt 1005 [];
  L66():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L427() else L428();
  L127(i212, r290):
    c156 = `as.logical`(r290);
    if c156 then L624() else L128();
  L150(i260, r421, l59, r422, dx104):
    c184 = `is.object`(dx104);
    if c184 then L717() else L718(i260, r421, l59);
  L424():
    goto L56(i51, i52);
  L555():
    p38 = prom<V +>{
      packageNotFoundError = ldf packageNotFoundError;
      p35 = prom<V +>{
        p33 = ld p;
        p34 = force? p33;
        checkMissing(p34);
        return p34;
      };
      p36 = prom<V +>{
        lib_loc21 = ld `lib.loc`;
        lib_loc22 = force? lib_loc21;
        checkMissing(lib_loc22);
        return lib_loc22;
      };
      p37 = prom<V +>{
        sys_call = ldf `sys.call`;
        r233 = dyn sys_call();
        return r233;
      };
      r235 = dyn packageNotFoundError(p35, p36, p37);
      return r235;
    };
    r237 = dyn stop1(p38);
    check L556() else D154();
  L560():
    p40 = prom<V +>{
      file_path2 = ldf `file.path`;
      p39 = prom<V +>{
        path2 = ld path;
        path3 = force? path2;
        checkMissing(path3);
        return path3;
      };
      r240 = dyn file_path2(p39, "Meta", "hsearch.rds");
      st hs_file = r240;
      invisible.0();
      return r240;
    };
    r242 = dyn file_exists3(p40);
    check L561() else D157();
  L621():
    hDB12 = ld hDB;
    check L623() else D183();
  L622():
    r289 = dyn base41(<sym hDB>);
    goto L127(i208, r289);
  L713():
    dr78 = tryDispatchBuiltin.1("[[", l53);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L715() else L714(i250, r414, l53, r414, dr78);
  L714(i258, r417, l56, r418, l57):
    i261 = ld i;
    check L716() else D223();
  L727():
    identical2 = ldf identical in base;
    r437 = dyn identical2(r436, "C", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L728() else D227();
  L730():
    verbose24 = force? verbose23;
    checkMissing(verbose24);
    r439 = `>=`(verbose24, 2);
    c187 = `as.logical`(r439);
    if c187 then L731() else L156();
  L793():
    p97 = prom<V +>{
      lapply = ldf lapply;
      p95 = prom<V +>{
        db42 = ld db;
        db43 = force? db42;
        checkMissing(db43);
        return db43;
      };
      p96 = prom<V +>{
        r497 = clos inner883694641;
        return r497;
      };
      r499 = dyn lapply(p95, p96);
      return r499;
    };
    r501 = dyn unlist(p97);
    check L794() else D257();
  D154():
    deopt 587 [i128, r237];
  D157():
    deopt 598 [i133, r242];
  D183():
    deopt 697 [i208, hDB12];
  D223():
    deopt 863 [i258, r417, l56, r418, l57, i261];
  D227():
    deopt 893 [r437];
  D257():
    deopt 1007 [r501];
  L68(i83, i84, r150):
    st ans = r150;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L432() else L433();
  L128():
    goto L129(i212);
  L129(i215):
    NROW = ldf NROW;
    check L627() else D185();
  L151(i266, r427, l63, dx108):
    c185 = `is.object`(l63);
    if c185 then L720() else L721(i266, r427, l63);
  L156():
    goto L157();
  L157():
    db24 = ld db;
    check L737() else D233();
  L427():
    ans = ld ans;
    check L429() else D84();
  L428():
    r149 = dyn base25(<sym ans>, <sym nam>);
    goto L68(i51, i52, r149);
  L556():
    goto L105(i128);
  L561():
    c141 = `as.logical`(r242);
    if c141 then L562() else L107();
  L623():
    hDB13 = force? hDB12;
    checkMissing(hDB13);
    c155 = `==`(hDB13, NULL);
    goto L127(i208, c155);
  L624():
    hDB14 = ld hDB0;
    check L625() else D184();
  L715():
    dx103 = getTryDispatchBuiltinValue(dr78);
    goto L150(i250, r414, l53, r414, dx103);
  L716():
    i262 = force? i261;
    __27 = ldf `[[` in base;
    r423 = dyn __27(l57, i262);
    goto L150(i258, r417, l56, r418, r423);
  L717():
    dr80 = tryDispatchBuiltin.0("[<-", dx104, r422);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L719() else L718(i260, r421, l59);
  L718(i264, r425, l61):
    ___5 = ldf `[<-` in base;
    r428 = dyn ___5(dx104, <missing>, "ID", r422);
    goto L151(i264, r425, l61, r428);
  L728():
    goto L154(r437);
  L731():
    message6 = ldf message;
    check L732() else D229();
  L794():
    st bad_IDs = r501;
    sym51 = ldf length;
    base51 = ldf length in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L795() else L796();
  D84():
    deopt 342 [i51, i52, ans];
  D184():
    deopt 700 [i212, hDB14];
  D185():
    deopt 706 [i215];
  D229():
    deopt 900 [];
  D233():
    deopt 912 [db24];
  L69(i89, i90, r153):
    st paths = r153;
    goto L56(i89, i90);
  L107():
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L613() else L614();
  L123(i201, i202):
    goto L126(i201);
  L152(i270, dx110):
    st db = dx110;
    goto L149(i270);
  L173(r503):
    c214 = `as.logical`(r503);
    if c214 then L799() else L174();
  L429():
    ans1 = force? ans;
    checkMissing(ans1);
    nam2 = ld nam;
    check L430() else D85();
  L432():
    paths = ld paths;
    check L434() else D87();
  L433():
    r152 = dyn base26(<sym paths>, <lang file.path(lib, nam)>);
    goto L69(i83, i84, r152);
  L562():
    readRDS1 = ldf readRDS;
    check L563() else D158();
  L625():
    hDB15 = force? hDB14;
    checkMissing(hDB15);
    st hDB = hDB15;
    goto L129(i212);
  L627():
    p52 = prom<V +>{
      hDB17 = ld hDB;
      hDB18 = force? hDB17;
      checkMissing(hDB18);
      c157 = `is.object`(hDB18);
      if c157 then L1() else L2(hDB18);
    L0(dx62):
      return dx62;
    L1():
      dr40 = tryDispatchBuiltin.1("[[", hDB18);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(hDB20):
      __16 = ldf `[[` in base;
      r291 = dyn __16(hDB20, 1);
      goto L0(r291);
    L3():
      dx61 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx61);
    };
    r293 = dyn NROW(p52);
    check L628() else D186();
  L719():
    dx107 = getTryDispatchBuiltinValue(dr80);
    goto L151(i260, r421, l59, dx107);
  L720():
    dr82 = tryDispatchBuiltin.0("[[<-", l63, dx108);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L722() else L721(i266, r427, dr82);
  L721(i268, r430, l65):
    i271 = ld i;
    check L723() else D224();
  L732():
    r440 = dyn message6[, appendLF, domain]("reencoding ...", FALSE, NA_LGL);
    check L733() else D230();
  L737():
    db25 = force? db24;
    checkMissing(db25);
    c188 = `is.object`(db25);
    if c188 then L739() else L740(db25);
  L795():
    bad_IDs = ld bad_IDs;
    check L797() else D258();
  L796():
    r502 = dyn base51(<sym bad_IDs>);
    goto L173(r502);
  D85():
    deopt 344 [i51, i52, nam2];
  D87():
    deopt 351 [i83, i84, paths];
  D158():
    deopt 600 [i133];
  D186():
    deopt 708 [i215, r293];
  D224():
    deopt 871 [i268, r430, l65, dx108, i271];
  D230():
    deopt 906 [r440];
  D258():
    deopt 1011 [bad_IDs];
  L124(i205, r285):
    r286 = `!`(r285);
    c154 = `as.logical`(r286);
    if c154 then L616() else L125();
  L174():
    goto L181();
  L181():
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L823() else L824();
  L430():
    nam3 = force? nam2;
    checkMissing(nam3);
    c103 = ldf c in base;
    r151 = dyn c103(ans1, nam3);
    check L431() else D86();
  L434():
    paths1 = force? paths;
    checkMissing(paths1);
    file_path1 = ldf `file.path`;
    check L435() else D88();
  L563():
    p41 = prom<V +>{
      hs_file = ld hs_file;
      hs_file1 = force? hs_file;
      checkMissing(hs_file1);
      return hs_file1;
    };
    r244 = dyn readRDS1(p41);
    check L564() else D159();
  L613():
    package11 = ld package;
    check L615() else D180();
  L614():
    r284 = dyn base40(<sym package>);
    goto L124(i133, r284);
  L628():
    st nh = r293;
    cbind1 = ldf cbind;
    check L629() else D187();
  L722():
    dx109 = getTryDispatchBuiltinValue(dr82);
    goto L152(i266, dx109);
  L723():
    i272 = force? i271;
    ____4 = ldf `[[<-` in base;
    r433 = dyn ____4(l65, dx108, i272);
    goto L152(i268, r433);
  L733():
    flush_console6 = ldf `flush.console`;
    check L734() else D231();
  L738(dx112):
    c189 = `is.object`(dx112);
    if c189 then L742() else L743();
  L739():
    dr84 = tryDispatchBuiltin.1("$", db25);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L741() else L740(dr84);
  L740(db27):
    r443 = `$`(db27, <sym Base>);
    goto L738(r443);
  L797():
    bad_IDs1 = force? bad_IDs;
    checkMissing(bad_IDs1);
    length5 = ldf length in base;
    r504 = dyn length5(bad_IDs1);
    check L798() else D259();
  L799():
    sym52 = ldf seq_along;
    base52 = ldf seq_along in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L800() else L801();
  D86():
    deopt 347 [i51, i52, r151];
  D88():
    deopt 354 [i83, i84];
  D159():
    deopt 602 [i133, r244];
  D180():
    deopt 681 [i133, package11];
  D187():
    deopt 711 [i215];
  D231():
    deopt 908 [];
  D259():
    deopt 1014 [r504];
  L125():
    goto L123(i205, NULL);
  L158(dx116):
    st encoding = dx116;
    ifelse2 = ldf ifelse;
    check L745() else D234();
  L175(r506):
    s7 = toForSeq(r506);
    l81 = length(s7);
    i333 = 0;
    goto L176(i333);
  L182(r544):
    c223 = `as.logical`(r544);
    if c223 then L827() else L183();
  L431():
    goto L68(i51, i52, r151);
  L435():
    p16 = prom<V +>{
      lib4 = ld lib;
      lib5 = force? lib4;
      checkMissing(lib5);
      return lib5;
    };
    p17 = prom<V +>{
      nam4 = ld nam;
      nam5 = force? nam4;
      checkMissing(nam5);
      return nam5;
    };
    r156 = dyn file_path1(p16, p17);
    check L436() else D89();
  L564():
    st hDB = r244;
    sym36 = ldf `is.null`;
    base36 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L565() else L566();
  L615():
    package12 = force? package11;
    checkMissing(package12);
    c153 = `==`(package12, NULL);
    goto L124(i133, c153);
  L616():
    warning = ldf warning;
    check L617() else D181();
  L629():
    p53 = prom<V +>{
      hDB21 = ld hDB;
      hDB22 = force? hDB21;
      checkMissing(hDB22);
      c158 = `is.object`(hDB22);
      if c158 then L1() else L2(hDB22);
    L0(dx64):
      return dx64;
    L1():
      dr42 = tryDispatchBuiltin.1("[[", hDB22);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(hDB24):
      __17 = ldf `[[` in base;
      r294 = dyn __17(hDB24, 1);
      goto L0(r294);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx63);
    };
    p54 = prom<V +>{
      sym42 = ldf `rep.int`;
      base42 = ldf `rep.int` in base;
      guard42 = `==`.4(sym42, base42);
      if guard42 then L1() else L2();
    L0(r297):
      return r297;
    L1():
      nh = ld nh;
      nh1 = force? nh;
      checkMissing(nh1);
      rep_int = ldf `rep.int` in base;
      r298 = dyn rep_int("help", nh1);
      goto L0(r298);
    L2():
      r296 = dyn base42("help", <sym nh>);
      goto L0(r296);
    };
    r300 = dyn cbind1[, Type](p53, p54);
    check L630() else D188();
  L734():
    r441 = dyn flush_console6();
    check L735() else D232();
  L741():
    dx111 = getTryDispatchBuiltinValue(dr84);
    goto L738(dx111);
  L742():
    dr86 = tryDispatchBuiltin.1("[", dx112);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L744() else L743();
  L743():
    __28 = ldf `[` in base;
    r444 = dyn __28(dx112, <missing>, "Encoding");
    goto L158(r444);
  L798():
    goto L173(r504);
  L800():
    db44 = ld db;
    check L802() else D260();
  L801():
    r505 = dyn base52(<sym db>);
    goto L175(r505);
  L823():
    bad_IDs4 = ld bad_IDs;
    check L825() else D270();
  L824():
    r543 = dyn base53(<sym bad_IDs>);
    goto L182(r543);
  D89():
    deopt 357 [i83, i84, r156];
  D181():
    deopt 686 [i205];
  D188():
    deopt 715 [i215, r300];
  D232():
    deopt 909 [r441];
  D234():
    deopt 921 [];
  D260():
    deopt 1016 [db44];
  D270():
    deopt 1058 [bad_IDs4];
  L108(i140, r246):
    r247 = `!`(r246);
    c143 = `as.logical`(r247);
    if c143 then L568() else L109();
  L176(i334):
    i335 = `+`.1(i334, 1);
    c215 = `<`.1(l81, i335);
    if c215 then L803() else L180();
  L183():
    goto L190();
  L190():
    db66 = ld db;
    check L850() else D281();
  L436():
    c104 = ldf c in base;
    r157 = dyn c104(paths1, r156);
    check L437() else D90();
  L565():
    hDB = ld hDB;
    check L567() else D160();
  L566():
    r245 = dyn base36(<sym hDB>);
    goto L108(i133, r245);
  L617():
    p51 = prom<V +>{
      p49 = ld p;
      p50 = force? p49;
      checkMissing(p50);
      return p50;
    };
    r288 = dyn warning[, , domain]("no hsearch.rds meta data for package ", p51, NA_LGL);
    check L618() else D182();
  L630():
    l18 = ld hDB;
    c159 = `is.object`(l18);
    if c159 then L631() else L632(i215, r300, l18);
  L735():
    goto L157();
  L744():
    dx115 = getTryDispatchBuiltinValue(dr86);
    goto L158(dx115);
  L745():
    p89 = prom<V +>{
      use_UTF9 = ld use_UTF8;
      use_UTF10 = force? use_UTF9;
      checkMissing(use_UTF10);
      c190 = `as.logical`(use_UTF10);
      if c190 then L1() else L0(c190);
    L0(c192):
      return c192;
    L1():
      l10n_info = ldf l10n_info;
      r445 = dyn l10n_info();
      c193 = `is.object`(r445);
      if c193 then L3() else L4(c190, r445);
    L2(c197, dx118):
      r449 = `!`(dx118);
      c198 = `as.logical`(r449);
      c199 = `&&`(c197, c198);
      goto L0(c199);
    L3():
      dr88 = tryDispatchBuiltin.1("$", r445);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L5() else L4(c190, dr88);
    L4(c195, r447):
      r448 = `$`(r447, <sym `UTF-8`>);
      goto L2(c195, r448);
    L5():
      dx117 = getTryDispatchBuiltinValue(dr88);
      goto L2(c190, dx117);
    };
    r451 = dyn ifelse2(p89, "UTF-8", "");
    check L746() else D235();
  L802():
    db45 = force? db44;
    checkMissing(db45);
    r507 = seq_along(db45);
    goto L175(r507);
  L825():
    bad_IDs5 = force? bad_IDs4;
    checkMissing(bad_IDs5);
    length6 = ldf length in base;
    r545 = dyn length6(bad_IDs5);
    check L826() else D271();
  L827():
    warning1 = ldf warning;
    check L828() else D272();
  D90():
    deopt 359 [i83, i84, r157];
  D160():
    deopt 605 [i133, hDB];
  D182():
    deopt 691 [i205, r288];
  D235():
    deopt 925 [r451];
  D271():
    deopt 1061 [r545];
  D272():
    deopt 1063 [];
  D281():
    deopt 1099 [db66];
  L109():
    verbose19 = ld verbose;
    check L605() else D175();
  L121(i197, i198):
    goto L123(i197, i198);
  L130(i219, dx66):
    st hDB = dx66;
    nh2 = ld nh;
    check L634() else D189();
  L180():
    x7 = `[[`(s7, i335, NULL, TRUE);
    st i = x7;
    _in_1 = ldf `%in%`;
    check L804() else D261();
  L437():
    goto L69(i83, i84, r157);
  L567():
    hDB1 = force? hDB;
    checkMissing(hDB1);
    c142 = `==`(hDB1, NULL);
    goto L108(i133, c142);
  L568():
    sym37 = ldf `is.na`;
    base37 = ldf `is.na` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L569() else L570();
  L618():
    goto L123(i205, r288);
  L631():
    dr44 = tryDispatchBuiltin.0("[[<-", l18, r300);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L633() else L632(i215, r300, dr44);
  L632(i217, r302, l20):
    ____2 = ldf `[[<-` in base;
    r305 = dyn ____2(l20, r300, 1);
    goto L130(i217, r305);
  L746():
    st target = r451;
    unique = ldf unique;
    check L747() else D236();
  L803():
    unlist1 = ldf unlist;
    check L820() else D268();
  L826():
    goto L182(r545);
  L828():
    r546 = dyn warning1("removing all entries with invalid multi-byte character data");
    check L829() else D273();
  L850():
    db67 = force? db66;
    checkMissing(db67);
    c230 = `is.object`(db67);
    if c230 then L852() else L853(db67);
  D175():
    deopt 665 [i140, verbose19];
  D189():
    deopt 721 [i219, nh2];
  D236():
    deopt 928 [];
  D261():
    deopt 1020 [i335];
  D268():
    deopt 1050 [];
  D273():
    deopt 1065 [r546];
  L110(i145, r249):
    c145 = `as.logical`(r249);
    if c145 then L577() else L112();
  L569():
    sym38 = ldf match;
    base38 = ldf match in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L571() else L572();
  L570():
    r248 = dyn base37(<lang match("Encoding", colnames(`[[`(hDB, 1)))>);
    goto L110(i140, r248);
  L605():
    verbose20 = force? verbose19;
    checkMissing(verbose20);
    r276 = `>=`(verbose20, 2);
    c152 = `as.logical`(r276);
    if c152 then L606() else L122();
  L633():
    dx65 = getTryDispatchBuiltinValue(dr44);
    goto L130(i215, dx65);
  L634():
    nh3 = force? nh2;
    checkMissing(nh3);
    c160 = `as.logical`(nh3);
    if c160 then L635() else L131();
  L747():
    p90 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r453 = dyn unique(p90);
    check L748() else D237();
  L804():
    p98 = prom<V +>{
      db46 = ld db;
      db47 = force? db46;
      checkMissing(db47);
      c216 = `is.object`(db47);
      if c216 then L2() else L3(db47);
    L0(dx146):
      c217 = `is.object`(dx146);
      if c217 then L5() else L6();
    L2():
      dr108 = tryDispatchBuiltin.1("[[", db47);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L4() else L3(dr108);
    L3(db49):
      i338 = ld i;
      i339 = force? i338;
      __35 = ldf `[[` in base;
      r508 = dyn __35(db49, i339);
      goto L0(r508);
    L1(dx150):
      return dx150;
    L4():
      dx145 = getTryDispatchBuiltinValue(dr108);
      goto L0(dx145);
    L5():
      dr110 = tryDispatchBuiltin.1("[", dx146);
      dc55 = getTryDispatchBuiltinDispatched(dr110);
      if dc55 then L7() else L6();
    L6():
      __36 = ldf `[` in base;
      r509 = dyn __36(dx146, <missing>, "ID");
      goto L1(r509);
    L7():
      dx149 = getTryDispatchBuiltinValue(dr110);
      goto L1(dx149);
    };
    p99 = prom<V +>{
      bad_IDs2 = ld bad_IDs;
      bad_IDs3 = force? bad_IDs2;
      checkMissing(bad_IDs3);
      return bad_IDs3;
    };
    r512 = dyn _in_1(p98, p99);
    check L805() else D262();
  L820():
    p103 = prom<V +>{
      lapply1 = ldf lapply;
      p101 = prom<V +>{
        db54 = ld db;
        db55 = force? db54;
        checkMissing(db55);
        return db55;
      };
      p102 = prom<V +>{
        r537 = clos inner883694641;
        return r537;
      };
      r539 = dyn lapply1(p101, p102);
      return r539;
    };
    r541 = dyn unlist1(p103);
    check L821() else D269();
  L829():
    sym54 = ldf seq_along;
    base54 = ldf seq_along in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L830() else L831();
  L851(dx184):
    c231 = `is.object`(dx184);
    if c231 then L855() else L856(dx184);
  L852():
    dr132 = tryDispatchBuiltin.1("$", db67);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L854() else L853(dr132);
  L853(db69):
    r559 = `$`(db69, <sym Base>);
    goto L851(r559);
  D237():
    deopt 930 [r453];
  D262():
    deopt 1023 [i335, r512];
  D269():
    deopt 1052 [r541];
  L111(i148, r251):
    is_na1 = ldf `is.na` in base;
    r256 = dyn is_na1(r251);
    check L576() else D164();
  L112():
    goto L114(i145);
  L114(i155):
    sym39 = ldf seq_along;
    base39 = ldf seq_along in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L584() else L585();
  L122():
    goto L121(i140, NULL);
  L131():
    goto L135(i219);
  L135(i234):
    want_type_vignette = ld want_type_vignette;
    check L647() else D191();
  L184(r548):
    s8 = toForSeq(r548);
    l95 = length(s8);
    i358 = 0;
    goto L185(i358);
  L191(dx188):
    st bad_IDs = dx188;
    sym56 = ldf length;
    base56 = ldf length in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L869() else L870();
  L571():
    colnames = ldf colnames;
    check L573() else D161();
  L572():
    r250 = dyn base38("Encoding", <lang colnames(`[[`(hDB, 1))>);
    goto L111(i140, r250);
  L577():
    cbind = ldf cbind;
    check L578() else D165();
  L606():
    message4 = ldf message;
    check L607() else D176();
  L635():
    path4 = ld path;
    check L636() else D190();
  L748():
    s5 = toForSeq(r453);
    l66 = length(s5);
    i273 = 0;
    goto L159(i273);
  L805():
    st ind = r512;
    iconv1 = ldf iconv;
    check L806() else D263();
  L821():
    st bad_IDs = r541;
    goto L181();
  L830():
    db56 = ld db;
    check L832() else D274();
  L831():
    r547 = dyn base54(<sym db>);
    goto L184(r547);
  L854():
    dx183 = getTryDispatchBuiltinValue(dr132);
    goto L851(dx183);
  L855():
    dr134 = tryDispatchBuiltin.1("[", dx184);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L857() else L856(dr134);
  L856(dx186):
    sym55 = ldf `is.na`;
    base55 = ldf `is.na` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L858() else L859();
  D161():
    deopt 615 [i140];
  D164():
    deopt 623 [i148, r256];
  D165():
    deopt 625 [i145];
  D176():
    deopt 670 [i140];
  D190():
    deopt 723 [i219, path4];
  D191():
    deopt 741 [i234, want_type_vignette];
  D263():
    deopt 1026 [i335];
  D274():
    deopt 1067 [db56];
  L115(i158, r267):
    s3 = toForSeq(r267);
    l8 = length(s3);
    i159 = 0;
    goto L116(i158, i159);
  L159(i274):
    i275 = `+`.1(i274, 1);
    c201 = `<`.1(l66, i275);
    if c201 then L749() else L169();
  L185(i359):
    i360 = `+`.1(i359, 1);
    c224 = `<`.1(l95, i360);
    if c224 then L833() else L189();
  L192(dx191, r561):
    __45 = ldf `[` in base;
    r565 = dyn __45(dx191, r561, "ID");
    goto L191(r565);
  L194(r567):
    c234 = `as.logical`(r567);
    if c234 then L873() else L195();
  L573():
    p42 = prom<V +>{
      hDB2 = ld hDB;
      hDB3 = force? hDB2;
      checkMissing(hDB3);
      c144 = `is.object`(hDB3);
      if c144 then L1() else L2(hDB3);
    L0(dx38):
      return dx38;
    L1():
      dr28 = tryDispatchBuiltin.1("[[", hDB3);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(hDB5):
      __12 = ldf `[[` in base;
      r252 = dyn __12(hDB5, 1);
      goto L0(r252);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx37);
    };
    r254 = dyn colnames(p42);
    check L574() else D162();
  L576():
    goto L110(i148, r256);
  L578():
    p43 = prom<V +>{
      hDB6 = ld hDB;
      hDB7 = force? hDB6;
      checkMissing(hDB7);
      c146 = `is.object`(hDB7);
      if c146 then L1() else L2(hDB7);
    L0(dx40):
      return dx40;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", hDB7);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(hDB9):
      __13 = ldf `[[` in base;
      r257 = dyn __13(hDB9, 1);
      goto L0(r257);
    L3():
      dx39 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx39);
    };
    r259 = dyn cbind[, Encoding](p43, "");
    check L579() else D166();
  L584():
    hDB10 = ld hDB;
    check L586() else D167();
  L585():
    r266 = dyn base39(<sym hDB>);
    goto L115(i155, r266);
  L607():
    p48 = prom<V +>{
      gettextf = ldf gettextf;
      p47 = prom<V +>{
        sQuote = ldf sQuote;
        p46 = prom<V +>{
          p44 = ld p;
          p45 = force? p44;
          checkMissing(p45);
          return p45;
        };
        r278 = dyn sQuote(p46);
        return r278;
      };
      r280 = dyn gettextf("package %s has empty hsearch data - strangely", p47);
      return r280;
    };
    r282 = dyn message4[, domain](p48, NA_LGL);
    check L608() else D177();
  L636():
    path5 = force? path4;
    checkMissing(path5);
    l21 = ld hDB;
    c161 = `is.object`(l21);
    if c161 then L637() else L638(i219, path5, l21, path5, l21);
  L647():
    want_type_vignette1 = force? want_type_vignette;
    checkMissing(want_type_vignette1);
    c164 = `as.logical`(want_type_vignette1);
    if c164 then L648() else L136();
  L806():
    p100 = prom<V +>{
      db50 = ld db;
      db51 = force? db50;
      checkMissing(db51);
      c218 = `is.object`(db51);
      if c218 then L2() else L3(db51);
    L0(dx152):
      c219 = `is.object`(dx152);
      if c219 then L5() else L6();
    L2():
      dr112 = tryDispatchBuiltin.1("[[", db51);
      dc56 = getTryDispatchBuiltinDispatched(dr112);
      if dc56 then L4() else L3(dr112);
    L3(db53):
      i340 = ld i;
      i341 = force? i340;
      __37 = ldf `[[` in base;
      r513 = dyn __37(db53, i341);
      goto L0(r513);
    L1(dx156):
      return dx156;
    L4():
      dx151 = getTryDispatchBuiltinValue(dr112);
      goto L0(dx151);
    L5():
      dr114 = tryDispatchBuiltin.1("[", dx152);
      dc57 = getTryDispatchBuiltinDispatched(dr114);
      if dc57 then L7() else L6();
    L6():
      ind4 = ld ind;
      ind5 = force? ind4;
      __38 = ldf `[` in base;
      r514 = dyn __38(dx152, ind5, <missing>);
      goto L1(r514);
    L7():
      dx155 = getTryDispatchBuiltinValue(dr114);
      goto L1(dx155);
    };
    r516 = dyn iconv1(p100, "latin1", "");
    check L807() else D264();
  L832():
    db57 = force? db56;
    checkMissing(db57);
    r549 = seq_along(db57);
    goto L184(r549);
  L857():
    dx187 = getTryDispatchBuiltinValue(dr134);
    goto L191(dx187);
  L858():
    db70 = ld db;
    check L860() else D282();
  L859():
    r560 = dyn base55(<lang `[`(`$`(db, Base), , "Topic")>);
    goto L192(dx186, r560);
  L869():
    bad_IDs8 = ld bad_IDs;
    check L871() else D284();
  L870():
    r566 = dyn base56(<sym bad_IDs>);
    goto L194(r566);
  D162():
    deopt 617 [i140, r254];
  D166():
    deopt 629 [i145, r259];
  D167():
    deopt 638 [i155, hDB10];
  D177():
    deopt 674 [i140, r282];
  D264():
    deopt 1030 [i335, r516];
  D282():
    deopt 1104 [dx186, db70];
  D284():
    deopt 1118 [bad_IDs8];
  L116(i160, i161):
    i162 = `+`.1(i161, 1);
    c148 = `<`.1(l8, i162);
    if c148 then L587() else L120();
  L132(i225, path12, l27, path13, dx68):
    c162 = `is.object`(dx68);
    if c162 then L640() else L641(i225, path12, l27);
  L136():
    goto L137(i234);
  L137(i237):
    want_type_demo = ld want_type_demo;
    check L652() else D194();
  L169():
    x5 = `[[`(s5, i275, NULL, TRUE);
    st enc = x5;
    enc = ld enc;
    check L750() else D238();
  L189():
    x8 = `[[`(s8, i360, NULL, TRUE);
    st i = x8;
    _in_2 = ldf `%in%`;
    check L834() else D275();
  L195():
    goto L202();
  L202():
    sym58 = ldf nzchar;
    base58 = ldf nzchar in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L894() else L895();
  L574():
    match2 = ldf match in base;
    r255 = dyn match2("Encoding", r254, NA_INT, NULL);
    check L575() else D163();
  L579():
    l5 = ld hDB;
    c147 = `is.object`(l5);
    if c147 then L580() else L581(i145, r259, l5);
  L586():
    hDB11 = force? hDB10;
    checkMissing(hDB11);
    r268 = seq_along(hDB11);
    goto L115(i155, r268);
  L608():
    flush_console4 = ldf `flush.console`;
    check L609() else D178();
  L637():
    dr46 = tryDispatchBuiltin.1("[[", l21);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L639() else L638(i219, path5, l21, path5, dr46);
  L638(i223, path8, l24, path9, l25):
    __18 = ldf `[[` in base;
    r306 = dyn __18(l25, 1);
    goto L132(i223, path8, l24, path9, r306);
  L648():
    merge_vignette_index = ldf merge_vignette_index;
    check L649() else D192();
  L749():
    verbose25 = ld verbose;
    check L785() else D251();
  L807():
    l82 = ld db;
    c220 = `is.object`(l82);
    if c220 then L808() else L809(i335, r516, l82, r516, l82);
  L833():
    goto L190();
  L860():
    db71 = force? db70;
    checkMissing(db71);
    c232 = `is.object`(db71);
    if c232 then L862() else L863(dx186, db71);
  L871():
    bad_IDs9 = force? bad_IDs8;
    checkMissing(bad_IDs9);
    length7 = ldf length in base;
    r568 = dyn length7(bad_IDs9);
    check L872() else D285();
  L873():
    sym57 = ldf seq_along;
    base57 = ldf seq_along in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L874() else L875();
  D163():
    deopt 621 [i140, r255];
  D178():
    deopt 676 [i140];
  D192():
    deopt 744 [i234];
  D194():
    deopt 752 [i237, want_type_demo];
  D238():
    deopt 931 [i275, enc];
  D251():
    deopt 986 [verbose25];
  D275():
    deopt 1071 [i360];
  D285():
    deopt 1121 [r568];
  L113(i154, r263, dx42):
    st hDB = dx42;
    goto L114(i154);
  L120():
    x3 = `[[`(s3, i162, NULL, TRUE);
    st i = x3;
    ___1 = ldf `:::`;
    check L588() else D168();
  L133(i229, path17, l31, dx72):
    c163 = `is.object`(l31);
    if c163 then L643() else L644(i229, path17, l31);
  L177(i345, r523, l88, r524, dx158):
    c221 = `is.object`(dx158);
    if c221 then L812() else L813(i345, r523, l88, dx158);
  L196(r570):
    s9 = toForSeq(r570);
    l99 = length(s9);
    i382 = 0;
    goto L197(i382);
  L203(r582):
    st ind = r582;
    db88 = ld db;
    check L905() else D295();
  L575():
    goto L111(i140, r255);
  L580():
    dr32 = tryDispatchBuiltin.0("[[<-", l5, r259);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L582() else L581(i145, r259, dr32);
  L581(i152, r261, l7):
    ____ = ldf `[[<-` in base;
    r264 = dyn ____(l7, r259, 1);
    goto L113(i152, r261, r264);
  L587():
    goto L121(i160, i162);
  L609():
    r283 = dyn flush_console4();
    check L610() else D179();
  L639():
    dx67 = getTryDispatchBuiltinValue(dr46);
    goto L132(i219, path5, l21, path5, dx67);
  L640():
    dr48 = tryDispatchBuiltin.0("[<-", dx68, path13);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L642() else L641(i225, path12, l27);
  L641(i227, path15, l29):
    ___2 = ldf `[<-` in base;
    r307 = dyn ___2(dx68, <missing>, "LibPath", path13);
    goto L133(i227, path15, l29, r307);
  L649():
    p55 = prom<V +>{
      hDB25 = ld hDB;
      hDB26 = force? hDB25;
      checkMissing(hDB26);
      return hDB26;
    };
    p56 = prom<V +>{
      path23 = ld path;
      path24 = force? path23;
      checkMissing(path24);
      return path24;
    };
    p59 = prom<V +>{
      p57 = ld p;
      p58 = force? p57;
      checkMissing(p58);
      return p58;
    };
    r312 = dyn merge_vignette_index(p55, p56, p59);
    check L650() else D193();
  L652():
    want_type_demo1 = force? want_type_demo;
    checkMissing(want_type_demo1);
    c165 = `as.logical`(want_type_demo1);
    if c165 then L653() else L138();
  L750():
    enc1 = force? enc;
    checkMissing(enc1);
    target = ld target;
    check L751() else D239();
  L785():
    verbose26 = force? verbose25;
    checkMissing(verbose26);
    r491 = `>=`(verbose26, 2);
    c213 = `as.logical`(r491);
    if c213 then L786() else L170();
  L808():
    dr116 = tryDispatchBuiltin.1("[[", l82);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L810() else L809(i335, r516, l82, r516, dr116);
  L809(i343, r519, l85, r520, l86):
    i346 = ld i;
    check L811() else D265();
  L834():
    p104 = prom<V +>{
      db58 = ld db;
      db59 = force? db58;
      checkMissing(db59);
      c225 = `is.object`(db59);
      if c225 then L2() else L3(db59);
    L0(dx166):
      c226 = `is.object`(dx166);
      if c226 then L5() else L6();
    L2():
      dr122 = tryDispatchBuiltin.1("[[", db59);
      dc61 = getTryDispatchBuiltinDispatched(dr122);
      if dc61 then L4() else L3(dr122);
    L3(db61):
      i363 = ld i;
      i364 = force? i363;
      __40 = ldf `[[` in base;
      r550 = dyn __40(db61, i364);
      goto L0(r550);
    L1(dx170):
      return dx170;
    L4():
      dx165 = getTryDispatchBuiltinValue(dr122);
      goto L0(dx165);
    L5():
      dr124 = tryDispatchBuiltin.1("[", dx166);
      dc62 = getTryDispatchBuiltinDispatched(dr124);
      if dc62 then L7() else L6();
    L6():
      __41 = ldf `[` in base;
      r551 = dyn __41(dx166, <missing>, "ID");
      goto L1(r551);
    L7():
      dx169 = getTryDispatchBuiltinValue(dr124);
      goto L1(dx169);
    };
    p105 = prom<V +>{
      bad_IDs6 = ld bad_IDs;
      bad_IDs7 = force? bad_IDs6;
      checkMissing(bad_IDs7);
      return bad_IDs7;
    };
    r554 = dyn _in_2(p104, p105);
    check L835() else D276();
  L861(dx196, dx197):
    c233 = `is.object`(dx197);
    if c233 then L865() else L866(dx196);
  L862():
    dr136 = tryDispatchBuiltin.1("$", db71);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L864() else L863(dx186, dr136);
  L863(dx193, db73):
    r562 = `$`(db73, <sym Base>);
    goto L861(dx193, r562);
  L872():
    goto L194(r568);
  L874():
    db74 = ld db;
    check L876() else D286();
  L875():
    r569 = dyn base57(<sym db>);
    goto L196(r569);
  L894():
    db84 = ld db;
    check L896() else D293();
  L895():
    r581 = dyn base58(<lang `[`(`$`(db, Keywords), , "Keyword")>);
    goto L203(r581);
  D168():
    deopt 642 [i160, i162];
  D179():
    deopt 677 [i140, r283];
  D193():
    deopt 748 [i234, r312];
  D239():
    deopt 932 [i275, enc1, target];
  D265():
    deopt 1033 [i343, r519, l85, r520, l86, i346];
  D276():
    deopt 1074 [i360, r554];
  D286():
    deopt 1123 [db74];
  D293():
    deopt 1157 [db84];
  D295():
    deopt 1167 [db88];
  L134(i233, path21, dx74):
    st hDB = dx74;
    goto L135(i233);
  L138():
    goto L139(i237);
  L139(i240):
    hDB29 = ld hDB;
    check L657() else D197();
  L170():
    goto L171(NULL);
  L171(r494):
    goto L172();
  L178(i351, r529, l92, dx162):
    c222 = `is.object`(l92);
    if c222 then L816() else L817(i351, r529, l92);
  L193(dx204, dx205):
    is_na2 = ldf `is.na` in base;
    r564 = dyn is_na2(dx205);
    check L868() else D283();
  L197(i383):
    i384 = `+`.1(i383, 1);
    c235 = `<`.1(l99, i384);
    if c235 then L877() else L201();
  L582():
    dx41 = getTryDispatchBuiltinValue(dr32);
    goto L113(i145, r259, dx41);
  L588():
    r269 = dyn ___1("tools", "hsearch_index_colnames");
    check L589() else D169();
  L610():
    goto L121(i140, r283);
  L642():
    dx71 = getTryDispatchBuiltinValue(dr48);
    goto L133(i225, path12, l27, dx71);
  L643():
    dr50 = tryDispatchBuiltin.0("[[<-", l31, dx72);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L645() else L644(i229, path17, dr50);
  L644(i231, path19, l33):
    ____3 = ldf `[[<-` in base;
    r308 = dyn ____3(l33, dx72, 1);
    goto L134(i231, path19, r308);
  L650():
    st hDB = r312;
    goto L137(i234);
  L653():
    merge_demo_index = ldf merge_demo_index;
    check L654() else D195();
  L751():
    target1 = force? target;
    checkMissing(target1);
    r454 = `!=`(enc1, target1);
    c202 = `as.logical`(r454);
    if c202 then L752() else L160();
  L786():
    message7 = ldf message;
    check L787() else D252();
  L810():
    dx157 = getTryDispatchBuiltinValue(dr116);
    goto L177(i335, r516, l82, r516, dx157);
  L811():
    i347 = force? i346;
    __39 = ldf `[[` in base;
    r525 = dyn __39(l86, i347);
    goto L177(i343, r519, l85, r520, r525);
  L812():
    dr118 = tryDispatchBuiltin.0("[<-", dx158, r524);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L814() else L813(i345, r523, l88, dr118);
  L813(i349, r527, l90, dx160):
    ind6 = ld ind;
    check L815() else D266();
  L835():
    st ind = r554;
    db62 = ld db;
    check L836() else D277();
  L864():
    dx195 = getTryDispatchBuiltinValue(dr136);
    goto L861(dx186, dx195);
  L865():
    dr138 = tryDispatchBuiltin.1("[", dx197);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L867() else L866(dx196);
  L866(dx200):
    __44 = ldf `[` in base;
    r563 = dyn __44(dx197, <missing>, "Topic");
    goto L193(dx200, r563);
  L876():
    db75 = force? db74;
    checkMissing(db75);
    r571 = seq_along(db75);
    goto L196(r571);
  L896():
    db85 = force? db84;
    checkMissing(db85);
    c241 = `is.object`(db85);
    if c241 then L898() else L899(db85);
  L905():
    db89 = force? db88;
    checkMissing(db89);
    c243 = `is.object`(db89);
    if c243 then L907() else L908(db89);
  D169():
    deopt 645 [i160, i162, r269];
  D195():
    deopt 755 [i237];
  D197():
    deopt 763 [i240, hDB29];
  D252():
    deopt 991 [];
  D266():
    deopt 1037 [i349, r527, l90, dx160, r524, ind6];
  D277():
    deopt 1076 [i360, db62];
  D283():
    deopt 1112 [dx204, r564];
  L160():
    db28 = ld db;
    check L755() else D240();
  L179(i355, dx164):
    st db = dx164;
    goto L176(i355);
  L201():
    x9 = `[[`(s9, i384, NULL, TRUE);
    st i = x9;
    _in_3 = ldf `%in%`;
    check L878() else D287();
  L589():
    c149 = `is.object`(r269);
    if c149 then L590() else L591(i160, i162, r269);
  L645():
    dx73 = getTryDispatchBuiltinValue(dr50);
    goto L134(i229, path17, dx73);
  L654():
    p60 = prom<V +>{
      hDB27 = ld hDB;
      hDB28 = force? hDB27;
      checkMissing(hDB28);
      return hDB28;
    };
    p61 = prom<V +>{
      path25 = ld path;
      path26 = force? path25;
      checkMissing(path26);
      return path26;
    };
    p64 = prom<V +>{
      p62 = ld p;
      p63 = force? p62;
      checkMissing(p63);
      return p63;
    };
    r317 = dyn merge_demo_index(p60, p61, p64);
    check L655() else D196();
  L657():
    hDB30 = force? hDB29;
    checkMissing(hDB30);
    l34 = ld dbMat;
    c166 = `is.object`(l34);
    if c166 then L658() else L659(i240, hDB30, l34);
  L752():
    goto L159(i275);
  L787():
    r492 = dyn message7[, , domain](" ", "done", NA_LGL);
    check L788() else D253();
  L814():
    dx161 = getTryDispatchBuiltinValue(dr118);
    goto L178(i345, r523, l88, dx161);
  L815():
    ind7 = force? ind6;
    ___7 = ldf `[<-` in base;
    r530 = dyn ___7(dx158, ind7, <missing>, r524);
    goto L178(i349, r527, l90, r530);
  L816():
    dr120 = tryDispatchBuiltin.0("[[<-", l92, dx162);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L818() else L817(i351, r529, dr120);
  L817(i353, r532, l94):
    i356 = ld i;
    check L819() else D267();
  L836():
    db63 = force? db62;
    checkMissing(db63);
    c227 = `is.object`(db63);
    if c227 then L837() else L838(i360, db63);
  L867():
    dx203 = getTryDispatchBuiltinValue(dr138);
    goto L193(dx196, dx203);
  L868():
    goto L192(dx204, r564);
  L877():
    goto L202();
  L897(dx225):
    c242 = `is.object`(dx225);
    if c242 then L901() else L902();
  L898():
    dr150 = tryDispatchBuiltin.1("$", db85);
    dc75 = getTryDispatchBuiltinDispatched(dr150);
    if dc75 then L900() else L899(dr150);
  L899(db87):
    r583 = `$`(db87, <sym Keywords>);
    goto L897(r583);
  L906(dx231):
    c244 = `is.object`(dx231);
    if c244 then L910() else L911(dx231);
  L907():
    dr154 = tryDispatchBuiltin.1("$", db89);
    dc77 = getTryDispatchBuiltinDispatched(dr154);
    if dc77 then L909() else L908(dr154);
  L908(db91):
    r586 = `$`(db91, <sym Keywords>);
    goto L906(r586);
  D196():
    deopt 759 [i237, r317];
  D240():
    deopt 939 [i275, db28];
  D253():
    deopt 996 [r492];
  D267():
    deopt 1042 [i353, r532, l94, dx162, i356];
  D287():
    deopt 1127 [i384];
  L117(i173, i174, dx44):
    l9 = ld hDB;
    c150 = `is.object`(l9);
    if c150 then L594() else L595(i173, i174, dx44, l9, dx44, l9);
  L140(i244, dx76):
    st dbMat = dx76;
    goto L87(i244);
  L186(i368, dx172):
    c228 = `is.object`(dx172);
    if c228 then L841() else L842(i368, dx172);
  L204(dx229):
    nzchar = ldf nzchar in base;
    r585 = dyn nzchar(dx229);
    check L904() else D294();
  L205(dx235):
    l103 = ld db;
    c245 = `is.object`(l103);
    if c245 then L915() else L916(dx235, l103);
  L590():
    dr34 = tryDispatchBuiltin.1("[[", r269);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L592() else L591(i160, i162, dr34);
  L591(i169, i170, r271):
    i175 = ld i;
    check L593() else D170();
  L655():
    st hDB = r317;
    goto L139(i237);
  L658():
    dr52 = tryDispatchBuiltin.0("[<-", l34, hDB30);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L660() else L659(i240, hDB30, dr52);
  L659(i242, hDB32, l36):
    np8 = ld np;
    check L661() else D198();
  L755():
    db29 = force? db28;
    checkMissing(db29);
    c203 = `is.object`(db29);
    if c203 then L757() else L758(i275, db29);
  L788():
    flush_console7 = ldf `flush.console`;
    check L789() else D254();
  L818():
    dx163 = getTryDispatchBuiltinValue(dr120);
    goto L179(i351, dx163);
  L819():
    i357 = force? i356;
    ____6 = ldf `[[<-` in base;
    r535 = dyn ____6(l94, dx162, i357);
    goto L179(i353, r535);
  L837():
    dr126 = tryDispatchBuiltin.1("[[", db63);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L839() else L838(i360, dr126);
  L838(i366, db65):
    i369 = ld i;
    check L840() else D278();
  L878():
    p106 = prom<V +>{
      db76 = ld db;
      db77 = force? db76;
      checkMissing(db77);
      c236 = `is.object`(db77);
      if c236 then L2() else L3(db77);
    L0(dx207):
      c237 = `is.object`(dx207);
      if c237 then L5() else L6();
    L2():
      dr140 = tryDispatchBuiltin.1("[[", db77);
      dc70 = getTryDispatchBuiltinDispatched(dr140);
      if dc70 then L4() else L3(dr140);
    L3(db79):
      i387 = ld i;
      i388 = force? i387;
      __46 = ldf `[[` in base;
      r572 = dyn __46(db79, i388);
      goto L0(r572);
    L1(dx211):
      return dx211;
    L4():
      dx206 = getTryDispatchBuiltinValue(dr140);
      goto L0(dx206);
    L5():
      dr142 = tryDispatchBuiltin.1("[", dx207);
      dc71 = getTryDispatchBuiltinDispatched(dr142);
      if dc71 then L7() else L6();
    L6():
      __47 = ldf `[` in base;
      r573 = dyn __47(dx207, <missing>, "ID");
      goto L1(r573);
    L7():
      dx210 = getTryDispatchBuiltinValue(dr142);
      goto L1(dx210);
    };
    p107 = prom<V +>{
      bad_IDs10 = ld bad_IDs;
      bad_IDs11 = force? bad_IDs10;
      checkMissing(bad_IDs11);
      return bad_IDs11;
    };
    r576 = dyn _in_3(p106, p107);
    check L879() else D288();
  L900():
    dx224 = getTryDispatchBuiltinValue(dr150);
    goto L897(dx224);
  L901():
    dr152 = tryDispatchBuiltin.1("[", dx225);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L903() else L902();
  L902():
    __50 = ldf `[` in base;
    r584 = dyn __50(dx225, <missing>, "Keyword");
    goto L204(r584);
  L909():
    dx230 = getTryDispatchBuiltinValue(dr154);
    goto L906(dx230);
  L910():
    dr156 = tryDispatchBuiltin.1("[", dx231);
    dc78 = getTryDispatchBuiltinDispatched(dr156);
    if dc78 then L912() else L911(dr156);
  L911(dx233):
    ind12 = ld ind;
    check L913() else D296();
  D170():
    deopt 646 [i169, i170, r271, i175];
  D198():
    deopt 766 [i242, hDB32, l36, hDB30, np8];
  D254():
    deopt 998 [];
  D278():
    deopt 1078 [i366, db65, i369];
  D288():
    deopt 1130 [i384, r576];
  D294():
    deopt 1165 [r585];
  D296():
    deopt 1170 [dx233, ind12];
  L118(i183, i184, dx52, l15, dx53, dx54):
    colnames__ = ldf `colnames<-`;
    check L598() else D172();
  L187(i374, dx176):
    l96 = ld db;
    c229 = `is.object`(l96);
    if c229 then L845() else L846(i374, dx176, l96);
  L592():
    dx43 = getTryDispatchBuiltinValue(dr34);
    goto L117(i160, i162, dx43);
  L593():
    i176 = force? i175;
    __14 = ldf `[[` in base;
    r272 = dyn __14(r271, i176);
    goto L117(i169, i170, r272);
  L594():
    dr36 = tryDispatchBuiltin.1("[[", l9);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L596() else L595(i173, i174, dx44, l9, dx44, dr36);
  L595(i179, i180, dx47, l12, dx48, l13):
    i185 = ld i;
    check L597() else D171();
  L660():
    dx75 = getTryDispatchBuiltinValue(dr52);
    goto L140(i240, dx75);
  L661():
    np9 = force? np8;
    sym43 = ldf seq_along;
    base43 = ldf seq_along in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L662() else L663();
  L756(i285, dx120):
    c204 = `is.object`(dx120);
    if c204 then L760() else L761(i285, dx120);
  L757():
    dr90 = tryDispatchBuiltin.1("$", db29);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L759() else L758(i275, dr90);
  L758(i283, db31):
    r456 = `$`(db31, <sym Base>);
    goto L756(i283, r456);
  L789():
    r493 = dyn flush_console7();
    check L790() else D255();
  L839():
    dx171 = getTryDispatchBuiltinValue(dr126);
    goto L186(i360, dx171);
  L840():
    i370 = force? i369;
    __42 = ldf `[[` in base;
    r555 = dyn __42(db65, i370);
    goto L186(i366, r555);
  L841():
    dr128 = tryDispatchBuiltin.1("[", dx172);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L843() else L842(i368, dr128);
  L842(i372, dx174):
    ind8 = ld ind;
    check L844() else D279();
  L879():
    st ind = r576;
    db80 = ld db;
    check L880() else D289();
  L903():
    dx228 = getTryDispatchBuiltinValue(dr152);
    goto L204(dx228);
  L904():
    goto L203(r585);
  L912():
    dx234 = getTryDispatchBuiltinValue(dr156);
    goto L205(dx234);
  L913():
    ind13 = force? ind12;
    __51 = ldf `[` in base;
    r587 = dyn __51(dx231, ind13, <missing>, FALSE);
    goto L205(r587);
  L914(dx241):
    st db = dx241;
    sym59 = ldf nzchar;
    base59 = ldf nzchar in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L918() else L919();
  L915():
    dr158 = tryDispatchBuiltin.0("$<-", l103, dx235);
    dc79 = getTryDispatchBuiltinDispatched(dr158);
    if dc79 then L917() else L916(dx235, dr158);
  L916(dx237, l105):
    r588 = `$<-`(l105, <sym Keywords>, dx235);
    goto L914(r588);
  D171():
    deopt 651 [i179, i180, dx47, l12, dx48, l13, i185];
  D172():
    deopt 655 [i183, i184, dx52, l15, dx54, dx53];
  D255():
    deopt 999 [r493];
  D279():
    deopt 1081 [i372, dx174, ind8];
  D289():
    deopt 1132 [i384, db80];
  L141(i247, hDB39, l39, hDB40, np12, r320):
    ___3 = ldf `[<-` in base;
    r322 = dyn ___3(l39, hDB40, np12, r320);
    goto L140(i247, r322);
  L162(i289, dx124):
    st IDs = dx124;
    sym50 = ldf seq_along;
    base50 = ldf seq_along in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L765() else L766();
  L188(i378, dx182):
    st db = dx182;
    goto L185(i378);
  L206(r590):
    st ind = r590;
    db96 = ld db;
    check L929() else D299();
  L596():
    dx51 = getTryDispatchBuiltinValue(dr36);
    goto L118(i173, i174, dx44, l9, dx44, dx51);
  L597():
    i186 = force? i185;
    __15 = ldf `[[` in base;
    r273 = dyn __15(l13, i186);
    goto L118(i179, i180, dx47, l12, dx48, r273);
  L598():
    r274 = dyn colnames__(dx54, NULL, dx53);
    check L599() else D173();
  L662():
    hDB41 = ld hDB;
    check L664() else D199();
  L663():
    r319 = dyn base43(<sym hDB>);
    goto L141(i242, hDB32, l36, hDB30, np9, r319);
  L759():
    dx119 = getTryDispatchBuiltinValue(dr90);
    goto L756(i275, dx119);
  L760():
    dr92 = tryDispatchBuiltin.1("[", dx120);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L762() else L761(i285, dr92);
  L761(i287, dx122):
    encoding2 = ld encoding;
    check L763() else D241();
  L790():
    goto L171(r493);
  L843():
    dx175 = getTryDispatchBuiltinValue(dr128);
    goto L187(i368, dx175);
  L844():
    ind9 = force? ind8;
    checkMissing(ind9);
    r556 = `!`(ind9);
    __43 = ldf `[` in base;
    r557 = dyn __43(dx172, r556, <missing>, FALSE);
    goto L187(i372, r557);
  L845():
    dr130 = tryDispatchBuiltin.0("[[<-", l96, dx176);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L847() else L846(i374, dx176, dr130);
  L846(i376, dx178, l98):
    i379 = ld i;
    check L848() else D280();
  L880():
    db81 = force? db80;
    checkMissing(db81);
    c238 = `is.object`(db81);
    if c238 then L881() else L882(i384, db81);
  L917():
    dx239 = getTryDispatchBuiltinValue(dr158);
    goto L914(dx239);
  L918():
    db92 = ld db;
    check L920() else D297();
  L919():
    r589 = dyn base59(<lang `[`(`$`(db, Concepts), , "Concept")>);
    goto L206(r589);
  D173():
    deopt 657 [i183, i184, dx52, l15, r274];
  D199():
    deopt 768 [i242, hDB32, l36, hDB30, np9, hDB41];
  D241():
    deopt 942 [i287, dx122, encoding2];
  D280():
    deopt 1090 [i376, dx178, l98, dx176, i379];
  D297():
    deopt 1182 [db92];
  D299():
    deopt 1192 [db96];
  L163(i292, r460):
    s6 = toForSeq(r460);
    l67 = length(s6);
    i293 = 0;
    goto L164(i292, i293);
  L198(i392, dx213):
    c239 = `is.object`(dx213);
    if c239 then L885() else L886(i392, dx213);
  L599():
    c151 = `is.object`(l15);
    if c151 then L600() else L601(i183, i184, dx52, l15);
  L664():
    hDB42 = force? hDB41;
    checkMissing(hDB42);
    r321 = seq_along(hDB42);
    goto L141(i242, hDB32, l36, hDB30, np9, r321);
  L762():
    dx123 = getTryDispatchBuiltinValue(dr92);
    goto L162(i285, dx123);
  L763():
    encoding3 = force? encoding2;
    checkMissing(encoding3);
    enc2 = ld enc;
    check L764() else D242();
  L765():
    db32 = ld db;
    check L767() else D243();
  L766():
    r459 = dyn base50(<sym db>);
    goto L163(i289, r459);
  L847():
    dx180 = getTryDispatchBuiltinValue(dr130);
    goto L188(i374, dx180);
  L848():
    i380 = force? i379;
    ____7 = ldf `[[<-` in base;
    r558 = dyn ____7(l98, dx176, i380);
    goto L188(i376, r558);
  L881():
    dr144 = tryDispatchBuiltin.1("[[", db81);
    dc72 = getTryDispatchBuiltinDispatched(dr144);
    if dc72 then L883() else L882(i384, dr144);
  L882(i390, db83):
    i393 = ld i;
    check L884() else D290();
  L920():
    db93 = force? db92;
    checkMissing(db93);
    c246 = `is.object`(db93);
    if c246 then L922() else L923(db93);
  L929():
    db97 = force? db96;
    checkMissing(db97);
    c248 = `is.object`(db97);
    if c248 then L931() else L932(db97);
  D242():
    deopt 943 [i287, dx122, encoding3, enc2];
  D243():
    deopt 950 [i289, db32];
  D290():
    deopt 1134 [i390, db83, i393];
  L119(i193, i194, dx60):
    st hDB = dx60;
    goto L116(i193, i194);
  L164(i294, i295):
    i296 = `+`.1(i295, 1);
    c205 = `<`.1(l67, i296);
    if c205 then L768() else L168();
  L199(i398, dx217):
    l100 = ld db;
    c240 = `is.object`(l100);
    if c240 then L889() else L890(i398, dx217, l100);
  L600():
    dr38 = tryDispatchBuiltin.0("[[<-", l15, r274);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L602() else L601(i183, i184, dx52, dr38);
  L601(i189, i190, dx56, l17):
    i195 = ld i;
    check L603() else D174();
  L764():
    enc3 = force? enc2;
    checkMissing(enc3);
    r457 = `==`(encoding3, enc3);
    __29 = ldf `[` in base;
    r458 = dyn __29(dx122, r457, "ID");
    goto L162(i287, r458);
  L767():
    db33 = force? db32;
    checkMissing(db33);
    r461 = seq_along(db33);
    goto L163(i289, r461);
  L883():
    dx212 = getTryDispatchBuiltinValue(dr144);
    goto L198(i384, dx212);
  L884():
    i394 = force? i393;
    __48 = ldf `[[` in base;
    r577 = dyn __48(db83, i394);
    goto L198(i390, r577);
  L885():
    dr146 = tryDispatchBuiltin.1("[", dx213);
    dc73 = getTryDispatchBuiltinDispatched(dr146);
    if dc73 then L887() else L886(i392, dr146);
  L886(i396, dx215):
    ind10 = ld ind;
    check L888() else D291();
  L921(dx243):
    c247 = `is.object`(dx243);
    if c247 then L925() else L926();
  L922():
    dr160 = tryDispatchBuiltin.1("$", db93);
    dc80 = getTryDispatchBuiltinDispatched(dr160);
    if dc80 then L924() else L923(dr160);
  L923(db95):
    r591 = `$`(db95, <sym Concepts>);
    goto L921(r591);
  L930(dx249):
    c249 = `is.object`(dx249);
    if c249 then L934() else L935(dx249);
  L931():
    dr164 = tryDispatchBuiltin.1("$", db97);
    dc82 = getTryDispatchBuiltinDispatched(dr164);
    if dc82 then L933() else L932(dr164);
  L932(db99):
    r594 = `$`(db99, <sym Concepts>);
    goto L930(r594);
  D174():
    deopt 658 [i189, i190, dx56, l17, r274, i195];
  D291():
    deopt 1137 [i396, dx215, ind10];
  L168():
    x6 = `[[`(s6, i296, NULL, TRUE);
    st i = x6;
    _in_ = ldf `%in%`;
    check L769() else D244();
  L200(i402, dx223):
    st db = dx223;
    goto L197(i402);
  L207(dx247):
    nzchar1 = ldf nzchar in base;
    r593 = dyn nzchar1(dx247);
    check L928() else D298();
  L208(dx253):
    l106 = ld db;
    c250 = `is.object`(l106);
    if c250 then L939() else L940(dx253, l106);
  L602():
    dx58 = getTryDispatchBuiltinValue(dr38);
    goto L119(i183, i184, dx58);
  L603():
    i196 = force? i195;
    ____1 = ldf `[[<-` in base;
    r275 = dyn ____1(l17, r274, i196);
    goto L119(i189, i190, r275);
  L768():
    goto L159(i294);
  L887():
    dx216 = getTryDispatchBuiltinValue(dr146);
    goto L199(i392, dx216);
  L888():
    ind11 = force? ind10;
    checkMissing(ind11);
    r578 = `!`(ind11);
    __49 = ldf `[` in base;
    r579 = dyn __49(dx213, r578, <missing>, FALSE);
    goto L199(i396, r579);
  L889():
    dr148 = tryDispatchBuiltin.0("[[<-", l100, dx217);
    dc74 = getTryDispatchBuiltinDispatched(dr148);
    if dc74 then L891() else L890(i398, dx217, dr148);
  L890(i400, dx219, l102):
    i403 = ld i;
    check L892() else D292();
  L924():
    dx242 = getTryDispatchBuiltinValue(dr160);
    goto L921(dx242);
  L925():
    dr162 = tryDispatchBuiltin.1("[", dx243);
    dc81 = getTryDispatchBuiltinDispatched(dr162);
    if dc81 then L927() else L926();
  L926():
    __52 = ldf `[` in base;
    r592 = dyn __52(dx243, <missing>, "Concept");
    goto L207(r592);
  L933():
    dx248 = getTryDispatchBuiltinValue(dr164);
    goto L930(dx248);
  L934():
    dr166 = tryDispatchBuiltin.1("[", dx249);
    dc83 = getTryDispatchBuiltinDispatched(dr166);
    if dc83 then L936() else L935(dr166);
  L935(dx251):
    ind14 = ld ind;
    check L937() else D300();
  D244():
    deopt 954 [i294, i296];
  D292():
    deopt 1146 [i400, dx219, l102, dx217, i403];
  D298():
    deopt 1190 [r593];
  D300():
    deopt 1195 [dx251, ind14];
  L769():
    p91 = prom<V +>{
      db34 = ld db;
      db35 = force? db34;
      checkMissing(db35);
      c206 = `is.object`(db35);
      if c206 then L2() else L3(db35);
    L0(dx126):
      c207 = `is.object`(dx126);
      if c207 then L5() else L6();
    L2():
      dr94 = tryDispatchBuiltin.1("[[", db35);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L4() else L3(dr94);
    L3(db37):
      i301 = ld i;
      i302 = force? i301;
      __30 = ldf `[[` in base;
      r462 = dyn __30(db37, i302);
      goto L0(r462);
    L1(dx130):
      return dx130;
    L4():
      dx125 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx125);
    L5():
      dr96 = tryDispatchBuiltin.1("[", dx126);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L7() else L6();
    L6():
      __31 = ldf `[` in base;
      r463 = dyn __31(dx126, <missing>, "ID");
      goto L1(r463);
    L7():
      dx129 = getTryDispatchBuiltinValue(dr96);
      goto L1(dx129);
    };
    p92 = prom<V +>{
      IDs = ld IDs;
      IDs1 = force? IDs;
      checkMissing(IDs1);
      return IDs1;
    };
    r466 = dyn _in_(p91, p92);
    check L770() else D245();
  L891():
    dx221 = getTryDispatchBuiltinValue(dr148);
    goto L200(i398, dx221);
  L892():
    i404 = force? i403;
    ____8 = ldf `[[<-` in base;
    r580 = dyn ____8(l102, dx217, i404);
    goto L200(i400, r580);
  L927():
    dx246 = getTryDispatchBuiltinValue(dr162);
    goto L207(dx246);
  L928():
    goto L206(r593);
  L936():
    dx252 = getTryDispatchBuiltinValue(dr166);
    goto L208(dx252);
  L937():
    ind15 = force? ind14;
    __53 = ldf `[` in base;
    r595 = dyn __53(dx249, ind15, <missing>, FALSE);
    goto L208(r595);
  L938(dx259):
    st db = dx259;
    _get_standard_Rd_keywords_with_descriptions = ldf `.get_standard_Rd_keywords_with_descriptions`;
    check L942() else D301();
  L939():
    dr168 = tryDispatchBuiltin.0("$<-", l106, dx253);
    dc84 = getTryDispatchBuiltinDispatched(dr168);
    if dc84 then L941() else L940(dx253, dr168);
  L940(dx255, l108):
    r596 = `$<-`(l108, <sym Concepts>, dx253);
    goto L938(r596);
  D245():
    deopt 957 [i294, i296, r466];
  D301():
    deopt 1206 [];
  L770():
    st ind = r466;
    iconv = ldf iconv;
    check L771() else D246();
  L941():
    dx257 = getTryDispatchBuiltinValue(dr168);
    goto L938(dx257);
  L942():
    r597 = dyn _get_standard_Rd_keywords_with_descriptions();
    check L943() else D302();
  D246():
    deopt 960 [i294, i296];
  D302():
    deopt 1207 [r597];
  L771():
    p93 = prom<V +>{
      db38 = ld db;
      db39 = force? db38;
      checkMissing(db39);
      c208 = `is.object`(db39);
      if c208 then L2() else L3(db39);
    L0(dx132):
      c209 = `is.object`(dx132);
      if c209 then L5() else L6();
    L2():
      dr98 = tryDispatchBuiltin.1("[[", db39);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L4() else L3(dr98);
    L3(db41):
      i303 = ld i;
      i304 = force? i303;
      __32 = ldf `[[` in base;
      r467 = dyn __32(db41, i304);
      goto L0(r467);
    L1(dx136):
      return dx136;
    L4():
      dx131 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx131);
    L5():
      dr100 = tryDispatchBuiltin.1("[", dx132);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L7() else L6();
    L6():
      ind = ld ind;
      ind1 = force? ind;
      __33 = ldf `[` in base;
      r468 = dyn __33(dx132, ind1, <missing>);
      goto L1(r468);
    L7():
      dx135 = getTryDispatchBuiltinValue(dr100);
      goto L1(dx135);
    };
    p94 = prom<V +>{
      enc4 = ld enc;
      enc5 = force? enc4;
      checkMissing(enc5);
      return enc5;
    };
    r471 = dyn iconv(p93, p94, "");
    check L772() else D247();
  L943():
    st standard = r597;
    standard = ld standard;
    check L944() else D303();
  D247():
    deopt 964 [i294, i296, r471];
  D303():
    deopt 1209 [standard];
  L772():
    l68 = ld db;
    c210 = `is.object`(l68);
    if c210 then L773() else L774(i294, i296, r471, l68, r471, l68);
  L944():
    standard1 = force? standard;
    checkMissing(standard1);
    c251 = `is.object`(standard1);
    if c251 then L946() else L947(standard1);
  L165(i311, i312, r478, l74, r479, dx138):
    c211 = `is.object`(dx138);
    if c211 then L777() else L778(i311, i312, r478, l74, dx138);
  L773():
    dr102 = tryDispatchBuiltin.1("[[", l68);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L775() else L774(i294, i296, r471, l68, r471, dr102);
  L774(i307, i308, r474, l71, r475, l72):
    i313 = ld i;
    check L776() else D248();
  L945(dx261):
    st keywords = dx261;
    standard4 = ld standard;
    check L949() else D304();
  L946():
    dr170 = tryDispatchBuiltin.1("$", standard1);
    dc85 = getTryDispatchBuiltinDispatched(dr170);
    if dc85 then L948() else L947(dr170);
  L947(standard3):
    r598 = `$`(standard3, <sym Keywords>);
    goto L945(r598);
  D248():
    deopt 967 [i307, i308, r474, l71, r475, l72, i313];
  D304():
    deopt 1213 [standard4];
  L166(i321, i322, r484, l78, dx142):
    c212 = `is.object`(l78);
    if c212 then L781() else L782(i321, i322, r484, l78);
  L775():
    dx137 = getTryDispatchBuiltinValue(dr102);
    goto L165(i294, i296, r471, l68, r471, dx137);
  L776():
    i314 = force? i313;
    __34 = ldf `[[` in base;
    r480 = dyn __34(l72, i314);
    goto L165(i307, i308, r474, l71, r475, r480);
  L777():
    dr104 = tryDispatchBuiltin.0("[<-", dx138, r479);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L779() else L778(i311, i312, r478, l74, dr104);
  L778(i317, i318, r482, l76, dx140):
    ind2 = ld ind;
    check L780() else D249();
  L948():
    dx260 = getTryDispatchBuiltinValue(dr170);
    goto L945(dx260);
  L949():
    standard5 = force? standard4;
    checkMissing(standard5);
    c252 = `is.object`(standard5);
    if c252 then L951() else L952(standard5);
  D249():
    deopt 971 [i317, i318, r482, l76, dx140, r479, ind2];
  L167(i329, i330, dx144):
    st db = dx144;
    goto L164(i329, i330);
  L779():
    dx141 = getTryDispatchBuiltinValue(dr104);
    goto L166(i311, i312, r478, l74, dx141);
  L780():
    ind3 = force? ind2;
    ___6 = ldf `[<-` in base;
    r485 = dyn ___6(dx138, ind3, <missing>, r479);
    goto L166(i317, i318, r482, l76, r485);
  L781():
    dr106 = tryDispatchBuiltin.0("[[<-", l78, dx142);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L783() else L782(i321, i322, r484, dr106);
  L782(i325, i326, r487, l80):
    i331 = ld i;
    check L784() else D250();
  L950(dx263):
    st concepts = dx263;
    sym60 = ldf match;
    base60 = ldf match in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L954() else L955();
  L951():
    dr172 = tryDispatchBuiltin.1("$", standard5);
    dc86 = getTryDispatchBuiltinDispatched(dr172);
    if dc86 then L953() else L952(dr172);
  L952(standard7):
    r599 = `$`(standard7, <sym Descriptions>);
    goto L950(r599);
  D250():
    deopt 976 [i325, i326, r487, l80, dx142, i331];
  L209(r601):
    st pos = r601;
    sym61 = ldf `is.na`;
    base61 = ldf `is.na` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L966() else L967();
  L783():
    dx143 = getTryDispatchBuiltinValue(dr106);
    goto L167(i321, i322, dx143);
  L784():
    i332 = force? i331;
    ____5 = ldf `[[<-` in base;
    r490 = dyn ____5(l80, dx142, i332);
    goto L167(i325, i326, r490);
  L953():
    dx262 = getTryDispatchBuiltinValue(dr172);
    goto L950(dx262);
  L954():
    db100 = ld db;
    check L956() else D305();
  L955():
    r600 = dyn base60(<lang `[`(`$`(db, Keywords), , "Keyword")>, <sym keywords>);
    goto L209(r600);
  D305():
    deopt 1219 [db100];
  L211(r606):
    r608 = `!`(r606);
    keywords2 = ld keywords;
    check L970() else D310();
  L956():
    db101 = force? db100;
    checkMissing(db101);
    c253 = `is.object`(db101);
    if c253 then L958() else L959(db101);
  L966():
    pos = ld pos;
    check L968() else D308();
  L967():
    r605 = dyn base61(<sym pos>);
    goto L211(r605);
  D308():
    deopt 1235 [pos];
  D310():
    deopt 1239 [r608, keywords2];
  L957(dx265):
    c254 = `is.object`(dx265);
    if c254 then L961() else L962();
  L958():
    dr174 = tryDispatchBuiltin.1("$", db101);
    dc87 = getTryDispatchBuiltinDispatched(dr174);
    if dc87 then L960() else L959(dr174);
  L959(db103):
    r602 = `$`(db103, <sym Keywords>);
    goto L957(r602);
  L968():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na3 = ldf `is.na` in base;
    r607 = dyn is_na3(pos1);
    check L969() else D309();
  L970():
    keywords3 = force? keywords2;
    checkMissing(keywords3);
    c255 = `is.object`(keywords3);
    if c255 then L971() else L972(r608, keywords3);
  D309():
    deopt 1238 [r607];
  L210(dx269):
    keywords = ld keywords;
    check L964() else D306();
  L212(r612, dx271):
    r614 = `!=`(dx271, "internal");
    r615 = `&&`(r612, r614);
    st ind = r615;
    rbind8 = ldf rbind;
    check L975() else D312();
  L960():
    dx264 = getTryDispatchBuiltinValue(dr174);
    goto L957(dx264);
  L961():
    dr176 = tryDispatchBuiltin.1("[", dx265);
    dc88 = getTryDispatchBuiltinDispatched(dr176);
    if dc88 then L963() else L962();
  L962():
    __54 = ldf `[` in base;
    r603 = dyn __54(dx265, <missing>, "Keyword");
    goto L210(r603);
  L969():
    goto L211(r607);
  L971():
    dr178 = tryDispatchBuiltin.1("[", keywords3);
    dc89 = getTryDispatchBuiltinDispatched(dr178);
    if dc89 then L973() else L972(r608, dr178);
  L972(r610, keywords5):
    pos2 = ld pos;
    check L974() else D311();
  D306():
    deopt 1226 [keywords];
  D311():
    deopt 1241 [r610, keywords5, pos2];
  D312():
    deopt 1249 [];
  L963():
    dx268 = getTryDispatchBuiltinValue(dr176);
    goto L210(dx268);
  L964():
    keywords1 = force? keywords;
    checkMissing(keywords1);
    match3 = ldf match in base;
    r604 = dyn match3(dx269, keywords1, NA_INT, NULL);
    check L965() else D307();
  L973():
    dx270 = getTryDispatchBuiltinValue(dr178);
    goto L212(r608, dx270);
  L974():
    pos3 = force? pos2;
    __55 = ldf `[` in base;
    r613 = dyn __55(keywords5, pos3);
    goto L212(r610, r613);
  L975():
    p108 = prom<V +>{
      db104 = ld db;
      db105 = force? db104;
      checkMissing(db105);
      c256 = `is.object`(db105);
      if c256 then L1() else L2(db105);
    L0(dx273):
      return dx273;
    L1():
      dr180 = tryDispatchBuiltin.1("$", db105);
      dc90 = getTryDispatchBuiltinDispatched(dr180);
      if dc90 then L3() else L2(dr180);
    L2(db107):
      r616 = `$`(db107, <sym Concepts>);
      goto L0(r616);
    L3():
      dx272 = getTryDispatchBuiltinValue(dr180);
      goto L0(dx272);
    };
    p109 = prom<V +>{
      db108 = ld db;
      db109 = force? db108;
      checkMissing(db109);
      c257 = `is.object`(db109);
      if c257 then L3() else L4(db109);
    L2(dx275):
      c258 = `is.object`(dx275);
      if c258 then L6() else L7(dx275);
    L3():
      dr182 = tryDispatchBuiltin.1("$", db109);
      dc91 = getTryDispatchBuiltinDispatched(dr182);
      if dc91 then L5() else L4(dr182);
    L4(db111):
      r618 = `$`(db111, <sym Keywords>);
      goto L2(r618);
    L0(dx279):
      return dx279;
    L5():
      dx274 = getTryDispatchBuiltinValue(dr182);
      goto L2(dx274);
    L6():
      dr184 = tryDispatchBuiltin.1("[", dx275);
      dc92 = getTryDispatchBuiltinDispatched(dr184);
      if dc92 then L8() else L7(dr184);
    L7(dx277):
      sym62 = ldf `is.na`;
      base62 = ldf `is.na` in base;
      guard62 = `==`.4(sym62, base62);
      if guard62 then L9() else L10();
    L1(r620):
      __56 = ldf `[` in base;
      r622 = dyn __56(dx275, r620, <missing>, FALSE);
      goto L0(r622);
    L8():
      dx278 = getTryDispatchBuiltinValue(dr184);
      goto L0(dx278);
    L9():
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      is_na4 = ldf `is.na` in base;
      r621 = dyn is_na4(pos5);
      goto L1(r621);
    L10():
      r619 = dyn base62(<sym pos>);
      goto L1(r619);
    };
    p112 = prom<V +>{
      cbind2 = ldf cbind;
      p110 = prom<V +>{
        concepts = ld concepts;
        concepts1 = force? concepts;
        checkMissing(concepts1);
        c259 = `is.object`(concepts1);
        if c259 then L2() else L3(concepts1);
      L0(dx284):
        return dx284;
      L2():
        dr186 = tryDispatchBuiltin.1("[", concepts1);
        dc93 = getTryDispatchBuiltinDispatched(dr186);
        if dc93 then L4() else L3(dr186);
      L3(concepts3):
        pos6 = ld pos;
        pos7 = force? pos6;
        checkMissing(pos7);
        c260 = `is.object`(pos7);
        if c260 then L5() else L6(concepts3, pos7);
      L1(concepts7, dx286):
        __58 = ldf `[` in base;
        r625 = dyn __58(concepts7, dx286);
        goto L0(r625);
      L4():
        dx283 = getTryDispatchBuiltinValue(dr186);
        goto L0(dx283);
      L5():
        dr188 = tryDispatchBuiltin.1("[", pos7);
        dc94 = getTryDispatchBuiltinDispatched(dr188);
        if dc94 then L7() else L6(concepts3, dr188);
      L6(concepts5, pos9):
        ind16 = ld ind;
        ind17 = force? ind16;
        __57 = ldf `[` in base;
        r624 = dyn __57(pos9, ind17);
        goto L1(concepts5, r624);
      L7():
        dx285 = getTryDispatchBuiltinValue(dr188);
        goto L1(concepts3, dx285);
      };
      p111 = prom<V +>{
        db112 = ld db;
        db113 = force? db112;
        checkMissing(db113);
        c261 = `is.object`(db113);
        if c261 then L2() else L3(db113);
      L1(dx288):
        c262 = `is.object`(dx288);
        if c262 then L5() else L6();
      L2():
        dr190 = tryDispatchBuiltin.1("$", db113);
        dc95 = getTryDispatchBuiltinDispatched(dr190);
        if dc95 then L4() else L3(dr190);
      L3(db115):
        r627 = `$`(db115, <sym Keywords>);
        goto L1(r627);
      L0(dx292):
        return dx292;
      L4():
        dx287 = getTryDispatchBuiltinValue(dr190);
        goto L1(dx287);
      L5():
        dr192 = tryDispatchBuiltin.1("[", dx288);
        dc96 = getTryDispatchBuiltinDispatched(dr192);
        if dc96 then L7() else L6();
      L6():
        ind18 = ld ind;
        ind19 = force? ind18;
        __59 = ldf `[` in base;
        r628 = dyn __59(dx288, ind19, -1, FALSE);
        goto L0(r628);
      L7():
        dx291 = getTryDispatchBuiltinValue(dr192);
        goto L0(dx291);
      };
      r630 = dyn cbind2(p110, p111);
      return r630;
    };
    r632 = dyn rbind8(p108, p109, p112);
    check L976() else D313();
  D307():
    deopt 1231 [r604];
  D313():
    deopt 1253 [r632];
  L965():
    goto L209(r604);
  L976():
    l109 = ld db;
    c263 = `is.object`(l109);
    if c263 then L978() else L979(r632, l109);
  L977(dx294):
    st db = dx294;
    db116 = ld db;
    check L981() else D314();
  L978():
    dr194 = tryDispatchBuiltin.0("$<-", l109, r632);
    dc97 = getTryDispatchBuiltinDispatched(dr194);
    if dc97 then L980() else L979(r632, dr194);
  L979(r634, l111):
    r637 = `$<-`(l111, <sym Concepts>, r632);
    goto L977(r637);
  D314():
    deopt 1257 [db116];
  L980():
    dx293 = getTryDispatchBuiltinValue(dr194);
    goto L977(dx293);
  L981():
    db117 = force? db116;
    checkMissing(db117);
    c264 = `is.object`(db117);
    if c264 then L983() else L984(db117);
  L982(dx296):
    c265 = `is.object`(dx296);
    if c265 then L986() else L987(dx296);
  L983():
    dr196 = tryDispatchBuiltin.1("$", db117);
    dc98 = getTryDispatchBuiltinDispatched(dr196);
    if dc98 then L985() else L984(dr196);
  L984(db119):
    r638 = `$`(db119, <sym Keywords>);
    goto L982(r638);
  L213(dx300):
    l112 = ld db;
    c266 = `is.object`(l112);
    if c266 then L994() else L995(dx300, l112);
  L985():
    dx295 = getTryDispatchBuiltinValue(dr196);
    goto L982(dx295);
  L986():
    dr198 = tryDispatchBuiltin.1("[", dx296);
    dc99 = getTryDispatchBuiltinDispatched(dr198);
    if dc99 then L988() else L987(dr198);
  L987(dx298):
    sym63 = ldf `is.na`;
    base63 = ldf `is.na` in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L989() else L990();
  L214(r640):
    r642 = `!`(r640);
    __60 = ldf `[` in base;
    r643 = dyn __60(dx296, r642, <missing>, FALSE);
    goto L213(r643);
  L988():
    dx299 = getTryDispatchBuiltinValue(dr198);
    goto L213(dx299);
  L989():
    pos10 = ld pos;
    check L991() else D315();
  L990():
    r639 = dyn base63(<sym pos>);
    goto L214(r639);
  L993(dx309):
    st db = dx309;
    lapply2 = ldf lapply;
    check L997() else D317();
  L994():
    dr200 = tryDispatchBuiltin.0("$<-", l112, dx300);
    dc100 = getTryDispatchBuiltinDispatched(dr200);
    if dc100 then L996() else L995(dx300, dr200);
  L995(dx305, l114):
    r644 = `$<-`(l114, <sym Keywords>, dx300);
    goto L993(r644);
  D315():
    deopt 1262 [dx298, pos10];
  D317():
    deopt 1276 [];
  L991():
    pos11 = force? pos10;
    checkMissing(pos11);
    is_na5 = ldf `is.na` in base;
    r641 = dyn is_na5(pos11);
    check L992() else D316();
  L996():
    dx307 = getTryDispatchBuiltinValue(dr200);
    goto L993(dx307);
  L997():
    p113 = prom<V +>{
      db120 = ld db;
      db121 = force? db120;
      checkMissing(db121);
      return db121;
    };
    p114 = prom<V +>{
      as_data_frame = ld `as.data.frame`;
      as_data_frame1 = force? as_data_frame;
      checkMissing(as_data_frame1);
      return as_data_frame1;
    };
    r647 = dyn lapply2[, , stringsAsFactors, `row.names`](p113, p114, FALSE, NULL);
    check L998() else D318();
  D316():
    deopt 1265 [dx298, r641];
  D318():
    deopt 1283 [r647];
  L992():
    goto L214(r641);
  L998():
    st db = r647;
    verbose27 = ld verbose;
    check L999() else D319();
  D319():
    deopt 1285 [verbose27];
  L999():
    verbose28 = force? verbose27;
    checkMissing(verbose28);
    r648 = `>=`(verbose28, 2);
    c267 = `as.logical`(r648);
    if c267 then L1000() else L215();
  L215():
    goto L216();
  L216():
    lib_loc23 = ld `lib.loc`;
    check L1006() else D324();
  L1000():
    message8 = ldf message;
    check L1001() else D320();
  D320():
    deopt 1290 [];
  D324():
    deopt 1302 [lib_loc23];
  L1001():
    r649 = dyn message8[, appendLF, domain]("saving the database ...", FALSE, NA_LGL);
    check L1002() else D321();
  L1006():
    lib_loc24 = force? lib_loc23;
    checkMissing(lib_loc24);
    l115 = ld db;
    attr__ = ldf `attr<-`;
    check L1007() else D325();
  D321():
    deopt 1296 [r649];
  D325():
    deopt 1305 [lib_loc24, l115, lib_loc24];
  L1002():
    flush_console8 = ldf `flush.console`;
    check L1003() else D322();
  L1007():
    r652 = dyn attr__(l115, NULL, "LibPaths", lib_loc24);
    check L1008() else D326();
  D322():
    deopt 1298 [];
  D326():
    deopt 1308 [lib_loc24, r652];
  L1003():
    r650 = dyn flush_console8();
    check L1004() else D323();
  L1008():
    st db = r652;
    Sys_time = ldf `Sys.time`;
    check L1009() else D327();
  D323():
    deopt 1299 [r650];
  D327():
    deopt 1311 [];
  L1004():
    goto L216();
  L1009():
    r653 = dyn Sys_time();
    check L1010() else D328();
  D328():
    deopt 1312 [r653];
  L1010():
    l116 = ld db;
    attr__1 = ldf `attr<-`;
    check L1011() else D329();
  D329():
    deopt 1314 [r653, l116, r653];
  L1011():
    r654 = dyn attr__1(l116, NULL, "mtime", r653);
    check L1012() else D330();
  D330():
    deopt 1317 [r653, r654];
  L1012():
    st db = r654;
    Sys_getlocale2 = ldf `Sys.getlocale`;
    check L1013() else D331();
  D331():
    deopt 1320 [];
  L1013():
    r655 = dyn Sys_getlocale2("LC_CTYPE");
    check L1014() else D332();
  D332():
    deopt 1322 [r655];
  L1014():
    l117 = ld db;
    attr__2 = ldf `attr<-`;
    check L1015() else D333();
  D333():
    deopt 1324 [r655, l117, r655];
  L1015():
    r656 = dyn attr__2(l117, NULL, "ctype", r655);
    check L1016() else D334();
  D334():
    deopt 1327 [r655, r656];
  L1016():
    st db = r656;
    unique1 = ldf unique;
    check L1017() else D335();
  D335():
    deopt 1330 [];
  L1017():
    p115 = prom<V +>{
      sym64 = ldf c;
      base64 = ldf c in base;
      guard64 = `==`.4(sym64, base64);
      if guard64 then L1() else L2();
    L0(r658):
      return r658;
    L1():
      types11 = ld types;
      types12 = force? types11;
      checkMissing(types12);
      c268 = ldf c in base;
      r659 = dyn c268("help", types12);
      goto L0(r659);
    L2():
      r657 = dyn base64("help", <sym types>);
      goto L0(r657);
    };
    r661 = dyn unique1(p115);
    check L1018() else D336();
  D336():
    deopt 1332 [r661];
  L1018():
    l118 = ld db;
    attr__3 = ldf `attr<-`;
    check L1019() else D337();
  D337():
    deopt 1334 [r661, l118, r661];
  L1019():
    r662 = dyn attr__3(l118, NULL, "Types", r661);
    check L1020() else D338();
  D338():
    deopt 1337 [r661, r662];
  L1020():
    st db = r662;
    l119 = ld db;
    class__ = ldf `class<-`;
    check L1021() else D339();
  D339():
    deopt 1342 ["hsearch_db", l119, "hsearch_db"];
  L1021():
    r663 = dyn class__(l119, NULL, "hsearch_db");
    check L1022() else D340();
  D340():
    deopt 1344 ["hsearch_db", r663];
  L1022():
    st db = r663;
    _hsearch_db1 = ldf `.hsearch_db`;
    check L1023() else D341();
  D341():
    deopt 1347 [];
  L1023():
    p116 = prom<V +>{
      db122 = ld db;
      db123 = force? db122;
      checkMissing(db123);
      return db123;
    };
    r665 = dyn _hsearch_db1(p116);
    check L1024() else D342();
  D342():
    deopt 1349 [r665];
  L1024():
    verbose29 = ld verbose;
    check L1025() else D343();
  D343():
    deopt 1350 [verbose29];
  L1025():
    verbose30 = force? verbose29;
    checkMissing(verbose30);
    r666 = `>=`(verbose30, 2);
    c269 = `as.logical`(r666);
    if c269 then L1026() else L217();
  L217():
    goto L218();
  L218():
    verbose31 = ld verbose;
    check L1032() else D348();
  L1026():
    message9 = ldf message;
    check L1027() else D344();
  D344():
    deopt 1355 [];
  D348():
    deopt 1366 [verbose31];
  L1027():
    r667 = dyn message9[, , domain](" ", "done", NA_LGL);
    check L1028() else D345();
  L1032():
    verbose32 = force? verbose31;
    checkMissing(verbose32);
    r670 = `>`(verbose32, 0);
    c270 = `as.logical`(r670);
    if c270 then L1033() else L219();
  D345():
    deopt 1360 [r667];
  L219():
    goto L223(NULL);
  L223(r679):
    goto L224();
  L1028():
    flush_console9 = ldf `flush.console`;
    check L1029() else D346();
  L1033():
    message10 = ldf message;
    check L1034() else D349();
  D346():
    deopt 1362 [];
  D349():
    deopt 1371 [];
  L1029():
    r668 = dyn flush_console9();
    check L1030() else D347();
  L1034():
    r671 = dyn message10[, domain]("... database rebuilt", NA_LGL);
    check L1035() else D350();
  D347():
    deopt 1363 [r668];
  D350():
    deopt 1375 [r671];
  L1030():
    goto L218();
  L1035():
    WINDOWS4 = ld WINDOWS;
    check L1036() else D351();
  D351():
    deopt 1376 [WINDOWS4];
  L1036():
    WINDOWS5 = force? WINDOWS4;
    checkMissing(WINDOWS5);
    c271 = `as.logical`(WINDOWS5);
    if c271 then L1037() else L220();
  L220():
    goto L222();
  L222():
    flush_console10 = ldf `flush.console`;
    check L1043() else D354();
  L1037():
    close = ldf close;
    check L1038() else D352();
  D352():
    deopt 1379 [];
  D354():
    deopt 1388 [];
  L1038():
    p117 = prom<V +>{
      pb2 = ld pb;
      pb3 = force? pb2;
      checkMissing(pb3);
      return pb3;
    };
    r673 = dyn close(p117);
    check L1039() else D353();
  L1043():
    r678 = dyn flush_console10();
    check L1044() else D355();
  D353():
    deopt 1381 [r673];
  D355():
    deopt 1389 [r678];
  L1039():
    sym65 = ldf `on.exit`;
    base65 = ldf `on.exit` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L1040() else L1041();
  L1044():
    goto L223(r678);
  L221(r675):
    goto L222();
  L1040():
    on_exit1 = ldf `on.exit` in base;
    r676 = dyn on_exit1();
    goto L221(r676);
  L1041():
    r674 = dyn base65();
    goto L221(r674);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg u1:*, reg u2:V, reg c:L, reg u4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg rowSums:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg u5:*, reg u6:V, reg nchar:cls, reg r4:V, reg is_na:cls, reg r5:V, reg p:p(V +), reg r7:V, reg r8:V, reg __:cls, reg r9:V |
    mkenv;
    st u = u;
    u1 = ld u;
    check L1() else D0();
  D0():
    deopt 0 [u1];
  L1():
    u2 = force? u1;
    checkMissing(u2);
    c = `is.object`(u2);
    if c then L2() else L3(u2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", u2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(u4):
    rowSums = ldf rowSums;
    check L5() else D1();
  D1():
    deopt 3 [u4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf nchar;
      base1 = ldf nchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<lang nchar(u, "chars", allowNA=TRUE, keepNA=FALSE)>);
      goto L0(r);
    L1(r3):
      is_na = ldf `is.na` in base;
      r5 = dyn is_na(r3);
      goto L0(r5);
    L4():
      u5 = ld u;
      u6 = force? u5;
      checkMissing(u6);
      nchar = ldf nchar in base;
      r4 = dyn nchar(u6, "chars", TRUE, FALSE);
      goto L1(r4);
    L5():
      r2 = dyn base1[, , allowNA, keepNA](<sym u>, "chars", TRUE, FALSE);
      goto L1(r2);
    };
    r7 = dyn rowSums(p);
    check L6() else D2();
  D2():
    deopt 5 [u4, r7];
  L6():
    r8 = `>`(r7, 0.0);
    __ = ldf `[` in base;
    r9 = dyn __(u4, r8, "ID");
    goto L0(r9);
  }
}