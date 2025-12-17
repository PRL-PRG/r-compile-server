fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2278510070;
    st loadNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2278510070(package, `lib.loc`, `keep.source`, partial, versionCheck, `keep.parse.data`) {
  (reg package:*, reg lib_loc:*, reg keep_source:*, reg partial:*, reg versionCheck:*, reg keep_parse_data:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var partial:*, reg partial_isMissing:L, reg partial_orDefault:*, var versionCheck:*, reg versionCheck_isMissing:L, reg versionCheck_orDefault:*, var `keep.parse.data`:*, reg keep_parse_data_isMissing:L, reg keep_parse_data_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg attr:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg package3:*, reg package4:V, reg as_character:cls, reg r9:V, reg c:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg dynGet:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg package5:*, reg package6:V, reg loading:*, reg loading1:V, reg match:cls, reg r16:V, reg c1:L, reg stop:cls, reg sQuote:cls, reg package7:*, reg package8:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg paste:cls, reg sQuote1:cls, reg loading2:*, reg loading3:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg package9:*, reg package10:V, reg loading4:*, reg loading5:V, reg c2:cls, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg package11:*, reg package12:V, reg getRegisteredNamespace:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg ns:*, reg ns1:V, reg c3:V, reg r35:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg versionCheck1:*, reg versionCheck2:V, reg c5:L, reg versionCheck4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r38:V, reg c6:V, reg r39:V, reg c7:L, reg c9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg c12:L, reg r41:V, reg versionCheck5:*, reg versionCheck6:V, reg c13:L, reg c15:L, reg versionCheck8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c17:L, reg dx5:V, reg __2:cls, reg r42:V, reg c18:V, reg r43:V, reg c19:L, reg c20:V, reg c22:L, reg getNamespaceVersion:cls, reg ns2:*, reg ns3:V, reg p7:p(V +), reg r45:V, reg do_call:cls, reg zop:*, reg zop1:V, reg p8:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg as_numeric_version:cls, reg current:*, reg current1:V, reg p9:p(V +), reg r50:V, reg zversion:*, reg zversion1:V, reg list:cls, reg r51:V, reg p10:p(V +), reg r53:V, reg r54:V, reg c23:L, reg stop1:cls, reg gettextf:cls, reg sQuote2:cls, reg package13:*, reg package14:V, reg p11:p(V +), reg r56:V, reg p12:p(V +), reg current2:*, reg current3:V, reg p13:p(V +), reg zop2:*, reg zop3:V, reg p14:p(V +), reg zversion2:*, reg zversion3:V, reg p15:p(V +), reg r61:V, reg p16:p(V +), reg r63:V, reg r64:V, reg ns4:*, reg ns5:V, reg Sys_getenv:cls, reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg msg:*, reg msg1:V, reg nzchar:cls, reg r69:V, reg c24:L, reg _in_:cls, reg package15:*, reg package16:V, reg p17:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg c25:cls, reg r73:V, reg p18:p(V +), reg r75:V, reg c26:L, reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r77:V, reg r78:V, reg msg2:*, reg msg3:V, reg as_integer:cls, reg r79:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r80:V, reg r81:V, reg lev:*, reg lev1:V, reg is_na:cls, reg r82:V, reg c27:L, reg lev2:*, reg lev3:V, reg r84:V, reg c28:L, reg message:cls, reg dQuote:cls, reg package17:*, reg package18:V, reg p19:p(V +), reg r86:V, reg p20:p(V +), reg r88:V, reg r90:cls, reg r91:cls, reg r92:cls, reg r93:cls, reg r94:cls, reg r95:cls, reg r96:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg libpath:*, reg libpath1:V, reg lib_loc1:*, reg lib_loc2:V, reg c29:cls, reg r99:V, reg find_package:cls, reg package19:*, reg package20:V, reg p21:p(V +), reg fp_lib_loc:*, reg fp_lib_loc1:V, reg p22:p(V +), reg r102:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r103:V, reg r104:V, reg pkgpath:*, reg pkgpath1:V, reg length:cls, reg r105:V, reg r106:V, reg c30:L, reg packageNotFoundError:cls, reg package21:*, reg package22:V, reg p23:p(V +), reg fp_lib_loc2:*, reg fp_lib_loc3:V, reg p24:p(V +), reg sys_call:cls, reg r109:V, reg p25:p(V +), reg r111:V, reg withRestarts:cls, reg stop2:cls, reg cond:*, reg cond1:V, reg p26:p(V +), reg r113:V, reg p27:p(V +), reg r115:cls, reg p28:p(V +), reg r117:V, reg find_package1:cls, reg package23:*, reg package24:V, reg p29:p(V +), reg fp_lib_loc4:*, reg fp_lib_loc5:V, reg p30:p(V +), reg r120:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r121:V, reg r122:V, reg pkgpath2:*, reg pkgpath3:V, reg length1:cls, reg r123:V, reg r124:V, reg c31:L, reg stop3:cls, reg cond2:*, reg cond3:V, reg p31:p(V +), reg r126:V, reg r127:V, reg bindTranslations:cls, reg package25:*, reg package26:V, reg p32:p(V +), reg pkgpath4:*, reg pkgpath5:V, reg p33:p(V +), reg r131:V, reg dirname:cls, reg pkgpath6:*, reg pkgpath7:V, reg p34:p(V +), reg r133:V, reg basename:cls, reg pkgpath8:*, reg pkgpath9:V, reg p35:p(V +), reg r135:V, reg packageHasNamespace:cls, reg package27:*, reg package28:V, reg p36:p(V +), reg package_lib:*, reg package_lib1:V, reg p37:p(V +), reg r138:V, reg r139:V, reg c32:L, reg r140:cls, reg stop4:cls, reg hasNoNamespaceError:cls, reg package29:*, reg package30:V, reg p38:p(V +), reg package_lib2:*, reg package_lib3:V, reg p39:p(V +), reg r143:V, reg p40:p(V +), reg r145:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r147:V, reg r148:V, reg c33:cls, reg r149:V, reg file_path:cls, reg pkgpath10:*, reg pkgpath11:V, reg p41:p(V +), reg r151:V, reg file_exists:cls, reg nsInfoFilePath:*, reg nsInfoFilePath1:V, reg p42:p(V +), reg r153:V, reg c34:L, reg readRDS:cls, reg nsInfoFilePath2:*, reg nsInfoFilePath3:V, reg p43:p(V +), reg r155:V, reg r156:V, reg parseNamespaceFile:cls, reg package31:*, reg package32:V, reg p44:p(V +), reg package_lib4:*, reg package_lib5:V, reg p45:p(V +), reg r159:V, reg file_path1:cls, reg pkgpath12:*, reg pkgpath13:V, reg p46:p(V +), reg r161:V, reg file_exists1:cls, reg pkgInfoFP:*, reg pkgInfoFP1:V, reg p47:p(V +), reg r163:V, reg c35:L, reg readRDS1:cls, reg pkgInfoFP2:*, reg pkgInfoFP3:V, reg p48:p(V +), reg r165:V, reg pkgInfo:*, reg pkgInfo1:V, reg c36:L, reg pkgInfo3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r166:V, reg c37:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r167:V, reg pkgInfo4:*, reg pkgInfo5:V, reg c38:L, reg pkgInfo7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r168:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r169:V, reg r170:V, reg pkgInfo8:*, reg pkgInfo9:V, reg c39:L, reg pkgInfo11:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r171:V, reg c40:V, reg c41:L, reg stop5:cls, reg gettextf1:cls, reg sQuote3:cls, reg package33:*, reg package34:V, reg p49:p(V +), reg r173:V, reg p50:p(V +), reg r175:V, reg p51:p(V +), reg r177:V, reg as_numeric_version1:cls, reg built:*, reg built1:V, reg c42:L, reg built3:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r179:V, reg p52:p(V +), reg r181:V, reg R_version_built_under:*, reg R_version_built_under1:V, reg r182:V, reg c43:L, reg stop6:cls, reg gettextf2:cls, reg sQuote4:cls, reg package35:*, reg package36:V, reg p53:p(V +), reg r184:V, reg p54:p(V +), reg r186:V, reg p55:p(V +), reg r188:V, reg _in_1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r190:V, reg r191:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r192:V, reg r193:V, reg pkgInfo12:*, reg pkgInfo13:V, reg c44:L, reg pkgInfo15:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r194:V, reg names:cls, reg r195:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r196:V, reg r197:V, reg vI:*, reg vI1:V, reg names1:cls, reg r198:V, reg c45:cls, reg r199:V, reg p56:p(V +), reg r201:V, reg dependsMethods:*, reg dependsMethods1:V, reg c46:L, reg loadNamespace:cls, reg r202:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r204:V, reg r205:V, reg versionCheck9:*, reg versionCheck10:V, reg c47:L, reg versionCheck12:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg __4:cls, reg r206:V, reg c48:V, reg r207:V, reg c49:L, reg c51:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r208:V, reg c54:L, reg r209:V, reg versionCheck13:*, reg versionCheck14:V, reg c55:L, reg c57:L, reg versionCheck16:V, reg dr20:V, reg dc10:L, reg dx22:V, reg c59:L, reg dx23:V, reg __5:cls, reg r210:V, reg c60:V, reg r211:V, reg c61:L, reg c62:V, reg c64:L, reg c66:V, reg do_call1:cls, reg zop4:*, reg zop5:V, reg p57:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r213:V, reg r214:V, reg as_numeric_version2:cls, reg version:*, reg version1:V, reg p58:p(V +), reg r216:V, reg zversion4:*, reg zversion5:V, reg list1:cls, reg r217:V, reg p59:p(V +), reg r219:V, reg r220:V, reg c67:L, reg c68:V, reg c70:L, reg stop7:cls, reg gettextf3:cls, reg sQuote5:cls, reg package37:*, reg package38:V, reg p60:p(V +), reg r222:V, reg p61:p(V +), reg version2:*, reg version3:V, reg p62:p(V +), reg zop6:*, reg zop7:V, reg p63:p(V +), reg zversion6:*, reg zversion7:V, reg p64:p(V +), reg r227:V, reg p65:p(V +), reg r229:V, reg r230:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r232:V, reg r233:V, reg package39:*, reg package40:V, reg iniStdPkgs:*, reg iniStdPkgs1:V, reg r234:V, reg any:cls, reg r235:V, reg r236:V, reg c71:L, reg warning:cls, reg gettextf4:cls, reg sQuote6:cls, reg package41:*, reg package42:V, reg p66:p(V +), reg r238:V, reg p67:p(V +), reg r240:V, reg p68:p(V +), reg r242:V, reg r244:cls, reg _in_2:cls, reg package43:*, reg package44:V, reg p69:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r246:V, reg r247:V, reg iniStdPkgs2:*, reg iniStdPkgs3:V, reg c72:cls, reg r248:V, reg p70:p(V +), reg r250:V, reg r251:V, reg c73:L, reg c75:V, reg isTRUE:cls, reg getOption2:cls, reg r252:V, reg p71:p(V +), reg r254:V, reg c76:L, reg c77:V, reg c79:L, reg checkLicense:cls, reg package45:*, reg package46:V, reg p72:p(V +), reg pkgInfo16:*, reg pkgInfo17:V, reg p73:p(V +), reg pkgpath14:*, reg pkgpath15:V, reg p74:p(V +), reg r258:V, reg dir_exists:cls, reg file_path2:cls, reg pkgpath16:*, reg pkgpath17:V, reg p75:p(V +), reg r261:V, reg p76:p(V +), reg r263:V, reg c80:L, reg file_path3:cls, reg pkgpath18:*, reg pkgpath19:V, reg p77:p(V +), reg r265:V, reg file_exists2:cls, reg ffile:*, reg ffile1:V, reg p78:p(V +), reg r267:V, reg c81:L, reg readRDS2:cls, reg ffile2:*, reg ffile3:V, reg p79:p(V +), reg r269:V, reg r270:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r271:V, reg r272:V, reg pkgInfo18:*, reg pkgInfo19:V, reg c82:L, reg pkgInfo21:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r273:V, reg c83:L, reg dx27:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg __6:cls, reg r274:V, reg as_character1:cls, reg r275:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r276:V, reg r277:V, reg needsComp:*, reg needsComp1:V, reg identical:cls, reg r278:V, reg c84:L, reg c85:V, reg file_exists3:cls, reg file_path4:cls, reg pkgpath20:*, reg pkgpath21:V, reg p80:p(V +), reg r280:V, reg p81:p(V +), reg r282:V, reg c87:L, reg c88:V, reg c90:L, reg features:*, reg features1:V, reg c91:L, reg features3:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg r283:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r284:V, reg r285:V, reg internalsID:*, reg internalsID1:V, reg c92:V, reg c93:L, reg internalsID2:*, reg internalsID3:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r287:V, reg internalsID6:V, reg r288:V, reg internalsID7:cls, reg r289:V, reg r290:V, reg c94:L, reg stop8:cls, reg gettextf5:cls, reg sQuote7:cls, reg package47:*, reg package48:V, reg p82:p(V +), reg r292:V, reg p83:p(V +), reg r294:V, reg p84:p(V +), reg r296:V, reg r297:V, reg r298:V, reg makeNamespace:cls, reg package49:*, reg package50:V, reg p85:p(V +), reg version4:*, reg version5:V, reg p86:p(V +), reg package_lib6:*, reg package_lib7:V, reg p87:p(V +), reg r303:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r304:V, reg on_exit:cls, reg r306:V, reg lev4:*, reg lev5:V, reg r307:V, reg c95:L, reg message1:cls, reg dQuote1:cls, reg package51:*, reg package52:V, reg p88:p(V +), reg r309:V, reg p89:p(V +), reg r311:V, reg nsInfo:*, reg nsInfo1:V, reg c96:L, reg nsInfo3:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r313:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c97:L, reg x:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r314:V, reg i7:I, reg r315:V, reg i8:*, reg i9:V, reg c98:L, reg c99:L, reg namespaceImport:cls, reg ns6:*, reg ns7:V, reg p90:p(V +), reg loadNamespace1:cls, reg i12:*, reg i13:V, reg p91:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r318:V, reg r319:V, reg lib_loc3:*, reg lib_loc4:V, reg _libPaths:cls, reg r320:V, reg c100:cls, reg r321:V, reg p92:p(V +), reg vI2:*, reg vI3:V, reg c101:L, reg vI5:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg i14:*, reg i15:V, reg __7:cls, reg r323:V, reg p93:p(V +), reg r325:V, reg p94:p(V +), reg package53:*, reg package54:V, reg p95:p(V +), reg r328:V, reg i16:I, reg sym33:cls, reg base33:cls, reg guard33:L, reg r330:V, reg i19:I, reg r331:V, reg i20:*, reg i21:V, reg c102:L, reg i24:I, reg i25:V, reg dr32:V, reg dc16:L, reg dx36:V, reg i27:I, reg dx37:V, reg r332:V, reg c103:V, reg r333:V, reg c104:L, reg namespaceImport1:cls, reg ns8:*, reg ns9:V, reg p96:p(V +), reg loadNamespace2:cls, reg i30:*, reg i31:V, reg c105:L, reg i33:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg __8:cls, reg r335:V, reg p97:p(V +), reg sym34:cls, reg base34:cls, reg guard34:L, reg r337:V, reg r338:V, reg lib_loc5:*, reg lib_loc6:V, reg _libPaths1:cls, reg r339:V, reg c106:cls, reg r340:V, reg p98:p(V +), reg vI6:*, reg vI7:V, reg c107:L, reg vI9:V, reg dr36:V, reg dc18:L, reg dx40:V, reg dx41:V, reg j:*, reg j1:V, reg __9:cls, reg r342:V, reg p99:p(V +), reg r344:V, reg p100:p(V +), reg package55:*, reg package56:V, reg p101:p(V +), reg i34:*, reg i35:V, reg c108:L, reg i37:V, reg dr38:V, reg dc19:L, reg dx42:V, reg dx43:V, reg r347:V, reg p102:p(V +), reg r349:V, reg namespaceImportFrom:cls, reg ns10:*, reg ns11:V, reg p103:p(V +), reg loadNamespace3:cls, reg i38:*, reg i39:V, reg c109:L, reg i41:V, reg dr40:V, reg dc20:L, reg dx44:V, reg dx45:V, reg __10:cls, reg r351:V, reg p104:p(V +), reg sym35:cls, reg base35:cls, reg guard35:L, reg r353:V, reg r354:V, reg lib_loc7:*, reg lib_loc8:V, reg _libPaths2:cls, reg r355:V, reg c110:cls, reg r356:V, reg p105:p(V +), reg vI10:*, reg vI11:V, reg c111:L, reg vI13:V, reg dr42:V, reg dc21:L, reg dx46:V, reg dx47:V, reg j2:*, reg j3:V, reg __11:cls, reg r358:V, reg p106:p(V +), reg r360:V, reg p107:p(V +), reg i42:*, reg i43:V, reg c112:L, reg i45:V, reg dr44:V, reg dc22:L, reg dx48:V, reg dx49:V, reg __12:cls, reg r362:V, reg p108:p(V +), reg package57:*, reg package58:V, reg p109:p(V +), reg r365:V, reg nsInfo4:*, reg nsInfo5:V, reg c113:L, reg nsInfo7:V, reg dr46:V, reg dc23:L, reg dx50:V, reg dx51:V, reg r366:V, reg s1:V, reg l1:I, reg i46:I, reg i47:I, reg i48:I, reg c114:L, reg x1:V, reg namespaceImportClasses:cls, reg ns12:*, reg ns13:V, reg p110:p(V +), reg loadNamespace4:cls, reg imp:*, reg imp1:V, reg c115:L, reg imp3:V, reg dr48:V, reg dc24:L, reg dx52:V, reg dx53:V, reg __13:cls, reg r368:V, reg p111:p(V +), reg sym36:cls, reg base36:cls, reg guard36:L, reg r370:V, reg r371:V, reg lib_loc9:*, reg lib_loc10:V, reg _libPaths3:cls, reg r372:V, reg c116:cls, reg r373:V, reg p112:p(V +), reg vI14:*, reg vI15:V, reg c117:L, reg vI17:V, reg dr50:V, reg dc25:L, reg dx54:V, reg dx55:V, reg j4:*, reg j5:V, reg __14:cls, reg r375:V, reg p113:p(V +), reg r377:V, reg p114:p(V +), reg imp4:*, reg imp5:V, reg c118:L, reg imp7:V, reg dr52:V, reg dc26:L, reg dx56:V, reg dx57:V, reg __15:cls, reg r379:V, reg p115:p(V +), reg package59:*, reg package60:V, reg p116:p(V +), reg r382:V, reg nsInfo8:*, reg nsInfo9:V, reg c119:L, reg nsInfo11:V, reg dr54:V, reg dc27:L, reg dx58:V, reg dx59:V, reg r383:V, reg s2:V, reg l2:I, reg i51:I, reg i52:I, reg i53:I, reg c120:L, reg x2:V, reg namespaceImportMethods:cls, reg ns14:*, reg ns15:V, reg p117:p(V +), reg loadNamespace5:cls, reg imp8:*, reg imp9:V, reg c121:L, reg imp11:V, reg dr56:V, reg dc28:L, reg dx60:V, reg dx61:V, reg __16:cls, reg r385:V, reg p118:p(V +), reg sym37:cls, reg base37:cls, reg guard37:L, reg r387:V, reg r388:V, reg lib_loc11:*, reg lib_loc12:V, reg _libPaths4:cls, reg r389:V, reg c122:cls, reg r390:V, reg p119:p(V +), reg vI18:*, reg vI19:V, reg c123:L, reg vI21:V, reg dr58:V, reg dc29:L, reg dx62:V, reg dx63:V, reg j6:*, reg j7:V, reg __17:cls, reg r392:V, reg p120:p(V +), reg r394:V, reg p121:p(V +), reg imp12:*, reg imp13:V, reg c124:L, reg imp15:V, reg dr60:V, reg dc30:L, reg dx64:V, reg dx65:V, reg __18:cls, reg r396:V, reg p122:p(V +), reg package61:*, reg package62:V, reg p123:p(V +), reg r399:V, reg lev6:*, reg lev7:V, reg r400:V, reg c125:L, reg message2:cls, reg dQuote2:cls, reg package63:*, reg package64:V, reg p124:p(V +), reg r402:V, reg p125:p(V +), reg r404:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r406:V, reg r407:V, reg package_lib8:*, reg package_lib9:V, reg package65:*, reg package66:V, reg list2:cls, reg r408:V, reg asNamespace:cls, reg ns16:*, reg ns17:V, reg p126:p(V +), reg r410:V, reg package67:*, reg package68:V, reg l3:*, reg c126:L, reg package70:V, reg l5:*, reg dr62:V, reg dc31:L, reg dx66:V, reg dx67:V, reg r411:V, reg strsplit:cls, reg package73:*, reg package74:V, reg p127:p(V +), reg r413:V, reg c127:L, reg r415:V, reg dr64:V, reg dc32:L, reg dx68:V, reg dx69:V, reg __19:cls, reg r416:V, reg c128:L, reg dx71:V, reg dr66:V, reg dc33:L, reg dx72:V, reg dx73:V, reg __20:cls, reg r417:V, reg file_path5:cls, reg pkgpath22:*, reg pkgpath23:V, reg p128:p(V +), reg codename:*, reg codename1:V, reg p129:p(V +), reg r420:V, reg file_exists4:cls, reg codeFile:*, reg codeFile1:V, reg p130:p(V +), reg r422:V, reg c129:L, reg lev8:*, reg lev9:V, reg r423:V, reg c130:L, reg message3:cls, reg dQuote3:cls, reg package75:*, reg package76:V, reg p131:p(V +), reg r425:V, reg p132:p(V +), reg r427:V, reg options:cls, reg r429:V, reg try:cls, reg sys_source:cls, reg codeFile2:*, reg codeFile3:V, reg p133:p(V +), reg env:*, reg env1:V, reg p134:p(V +), reg keep_source1:*, reg keep_source2:V, reg p135:p(V +), reg keep_parse_data1:*, reg keep_parse_data2:V, reg p136:p(V +), reg r434:V, reg p137:p(V +), reg r436:V, reg options1:cls, reg save_enc:*, reg save_enc1:V, reg p138:p(V +), reg r438:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r439:V, reg r440:V, reg res:*, reg res1:V, reg inherits:cls, reg r441:V, reg c131:L, reg stop9:cls, reg gettextf6:cls, reg sQuote8:cls, reg package77:*, reg package78:V, reg p139:p(V +), reg r443:V, reg p140:p(V +), reg r445:V, reg p141:p(V +), reg r447:V, reg lev10:*, reg lev11:V, reg r449:V, reg c132:L, reg message4:cls, reg dQuote4:cls, reg package79:*, reg package80:V, reg p142:p(V +), reg r451:V, reg p143:p(V +), reg r453:V, reg r454:V, reg partial1:*, reg partial2:V, reg c133:L, reg ns18:*, reg ns19:V, reg file_path6:cls, reg pkgpath24:*, reg pkgpath25:V, reg p144:p(V +), reg r459:V, reg file_exists5:cls, reg paste1:cls, reg dbbase:*, reg dbbase1:V, reg p145:p(V +), reg r461:V, reg p146:p(V +), reg r463:V, reg c134:L, reg lev12:*, reg lev13:V, reg r464:V, reg c135:L, reg message5:cls, reg dQuote5:cls, reg package81:*, reg package82:V, reg p147:p(V +), reg r466:V, reg p148:p(V +), reg r468:V, reg lazyLoad:cls, reg dbbase2:*, reg dbbase3:V, reg p149:p(V +), reg env2:*, reg env3:V, reg p150:p(V +), reg r472:V, reg file_path7:cls, reg pkgpath26:*, reg pkgpath27:V, reg p151:p(V +), reg r475:V, reg file_exists6:cls, reg paste2:cls, reg dbbase4:*, reg dbbase5:V, reg p152:p(V +), reg r477:V, reg p153:p(V +), reg r479:V, reg c136:L, reg lev14:*, reg lev15:V, reg r480:V, reg c137:L, reg message6:cls, reg dQuote6:cls, reg package83:*, reg package84:V, reg p154:p(V +), reg r482:V, reg p155:p(V +), reg r484:V, reg lazyLoad1:cls, reg dbbase6:*, reg dbbase7:V, reg p156:p(V +), reg _getNamespaceInfo:cls, reg env4:*, reg env5:V, reg p157:p(V +), reg r488:V, reg p158:p(V +), reg r490:V, reg lev16:*, reg lev17:V, reg r492:V, reg c138:L, reg message7:cls, reg dQuote7:cls, reg package85:*, reg package86:V, reg p159:p(V +), reg r494:V, reg p160:p(V +), reg r496:V, reg registerS3methods:cls, reg nsInfo12:*, reg nsInfo13:V, reg c139:L, reg nsInfo15:V, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg r498:V, reg p161:p(V +), reg package87:*, reg package88:V, reg p162:p(V +), reg env6:*, reg env7:V, reg p163:p(V +), reg r502:V, reg lev18:*, reg lev19:V, reg r503:V, reg c140:L, reg message8:cls, reg dQuote8:cls, reg package89:*, reg package90:V, reg p164:p(V +), reg r505:V, reg p165:p(V +), reg r507:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r509:V, reg r510:V, reg list3:cls, reg r511:V, reg nsInfo16:*, reg nsInfo17:V, reg c141:L, reg nsInfo19:V, reg dr70:V, reg dc35:L, reg dx76:V, reg dx77:V, reg r512:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r513:V, reg r514:V, reg list4:cls, reg r515:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r516:V, reg r517:V, reg dynLibs:*, reg dynLibs1:V, reg r518:I, reg s3:V, reg l6:I, reg i56:I, reg i57:I, reg i58:I, reg c142:L, reg x3:V, reg dynLibs2:*, reg dynLibs3:V, reg c143:L, reg i62:I, reg dynLibs5:V, reg dr72:V, reg dc36:L, reg dx78:V, reg i64:I, reg dx79:V, reg i65:*, reg i66:V, reg __21:cls, reg r519:V, reg library_dynam:cls, reg lib:*, reg lib1:V, reg p166:p(V +), reg package91:*, reg package92:V, reg p167:p(V +), reg package_lib10:*, reg package_lib11:V, reg p168:p(V +), reg r523:V, reg l7:*, reg c144:L, reg i68:I, reg r525:V, reg l9:*, reg dr74:V, reg dc37:L, reg dx80:V, reg i70:I, reg dx81:V, reg lib2:*, reg lib3:V, reg ____:cls, reg r528:V, reg assignNativeRoutines:cls, reg dlls:*, reg dlls1:V, reg c145:L, reg dlls3:V, reg dr76:V, reg dc38:L, reg dx82:V, reg dx83:V, reg lib4:*, reg lib5:V, reg __22:cls, reg r529:V, reg p169:p(V +), reg lib6:*, reg lib7:V, reg p170:p(V +), reg env8:*, reg env9:V, reg p171:p(V +), reg nsInfo20:*, reg nsInfo21:V, reg c146:L, reg nsInfo23:V, reg dr78:V, reg dc39:L, reg dx84:V, reg dx85:V, reg r533:V, reg c147:L, reg dx87:V, reg dr80:V, reg dc40:L, reg dx88:V, reg dx89:V, reg lib8:*, reg lib9:V, reg __23:cls, reg r534:V, reg p172:p(V +), reg r536:V, reg routines:*, reg routines1:V, reg l10:*, reg c148:L, reg i72:I, reg routines3:V, reg l12:*, reg dr82:V, reg dc41:L, reg dx90:V, reg i74:I, reg dx91:V, reg lib10:*, reg lib11:V, reg ____1:cls, reg r537:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r538:V, reg i77:I, reg r539:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r540:V, reg i80:I, reg r541:V, reg nsInfo24:*, reg nsInfo25:V, reg c149:L, reg i82:I, reg nsInfo27:V, reg dr84:V, reg dc42:L, reg dx92:V, reg i84:I, reg dx93:V, reg r542:V, reg names2:cls, reg r543:V, reg c150:V, reg r544:V, reg c151:L, reg i86:I, reg c153:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r545:V, reg i89:I, reg c156:L, reg r546:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r547:V, reg i92:I, reg c159:L, reg r548:V, reg nsInfo28:*, reg nsInfo29:V, reg c160:L, reg i94:I, reg c162:L, reg nsInfo31:V, reg dr86:V, reg dc43:L, reg dx94:V, reg i96:I, reg c164:L, reg dx95:V, reg r549:V, reg names3:cls, reg r550:V, reg c165:L, reg i98:I, reg c167:L, reg r552:V, reg dr88:V, reg dc44:L, reg dx96:V, reg i100:I, reg c169:L, reg dx97:V, reg i101:*, reg i102:V, reg __24:cls, reg r553:V, reg nzchar1:cls, reg r554:V, reg c170:L, reg c171:V, reg c173:L, reg dlls4:*, reg dlls5:V, reg c174:L, reg i107:I, reg dlls7:V, reg dr90:V, reg dc45:L, reg dx98:V, reg i109:I, reg dx99:V, reg lib12:*, reg lib13:V, reg __25:cls, reg r555:V, reg l13:*, reg c175:L, reg i111:I, reg dx101:V, reg l15:*, reg dr92:V, reg dc46:L, reg dx103:V, reg i113:I, reg dx104:V, reg dx105:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r556:V, reg i116:I, reg dx110:V, reg l18:*, reg dx111:V, reg r557:V, reg nsInfo32:*, reg nsInfo33:V, reg c176:L, reg i118:I, reg dx114:V, reg l20:*, reg dx115:V, reg nsInfo35:V, reg dr94:V, reg dc47:L, reg dx118:V, reg i120:I, reg dx119:V, reg l22:*, reg dx120:V, reg dx121:V, reg r558:V, reg names4:cls, reg r559:V, reg c177:L, reg i122:I, reg dx124:V, reg l24:*, reg dx125:V, reg r561:V, reg dr96:V, reg dc48:L, reg dx128:V, reg i124:I, reg dx129:V, reg l26:*, reg dx130:V, reg dx131:V, reg i125:*, reg i126:V, reg __26:cls, reg r562:V, reg ____2:cls, reg r563:V, reg i127:I, reg setNamespaceInfo:cls, reg env10:*, reg env11:V, reg p173:p(V +), reg dlls8:*, reg dlls9:V, reg p174:p(V +), reg r566:V, reg addNamespaceDynLibs:cls, reg env12:*, reg env13:V, reg p175:p(V +), reg nsInfo36:*, reg nsInfo37:V, reg c178:L, reg nsInfo39:V, reg dr98:V, reg dc49:L, reg dx133:V, reg dx134:V, reg r568:V, reg p176:p(V +), reg r570:V, reg setNamespaceInfo1:cls, reg env14:*, reg env15:V, reg p177:p(V +), reg nativeRoutines:*, reg nativeRoutines1:V, reg p178:p(V +), reg r573:V, reg Sys_setenv:cls, reg package93:*, reg package94:V, reg p179:p(V +), reg r575:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r576:V, reg on_exit1:cls, reg r578:V, reg lev20:*, reg lev21:V, reg r579:V, reg c179:L, reg message9:cls, reg dQuote9:cls, reg package95:*, reg package96:V, reg p180:p(V +), reg r581:V, reg p181:p(V +), reg r583:V, reg runHook:cls, reg env16:*, reg env17:V, reg p182:p(V +), reg package_lib12:*, reg package_lib13:V, reg p183:p(V +), reg package97:*, reg package98:V, reg p184:p(V +), reg r588:V, reg lev22:*, reg lev23:V, reg r589:V, reg c180:L, reg message10:cls, reg dQuote10:cls, reg package99:*, reg package100:V, reg p185:p(V +), reg r591:V, reg p186:p(V +), reg r593:V, reg nsInfo40:*, reg nsInfo41:V, reg c181:L, reg nsInfo43:V, reg dr100:V, reg dc50:L, reg dx135:V, reg dx136:V, reg r595:V, reg nsInfo44:*, reg nsInfo45:V, reg c182:L, reg nsInfo47:V, reg dr102:V, reg dc51:L, reg dx137:V, reg dx138:V, reg r596:V, reg s4:V, reg l27:I, reg i128:I, reg i129:I, reg i130:I, reg c183:L, reg x4:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r597:V, reg i135:I, reg r598:V, reg ls:cls, reg env18:*, reg env19:V, reg p187:p(V +), reg p188:*, reg p189:V, reg p190:p(V +), reg r601:V, reg exports:*, reg exports1:V, reg c184:cls, reg r602:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r603:V, reg r604:V, reg _isMethodsDispatchOn:cls, reg r605:V, reg c185:L, reg c187:V, reg ___:cls, reg r606:V, reg r607:cls, reg ns20:*, reg ns21:V, reg p191:p(V +), reg r609:V, reg r610:V, reg c188:L, reg c189:V, reg c191:L, reg c193:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r611:V, reg c196:L, reg r612:V, reg lengths:cls, reg nsInfo48:*, reg nsInfo49:V, reg c197:L, reg nsInfo51:V, reg dr104:V, reg dc52:L, reg dx139:V, reg dx140:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r613:V, reg nsInfo54:V, reg r614:V, reg c198:cls, reg r615:V, reg __27:cls, reg r616:V, reg p192:p(V +), reg r618:V, reg any1:cls, reg r619:V, reg c199:L, reg c200:V, reg c202:L, reg c204:V, reg _in_3:cls, reg Sys_getenv1:cls, reg r620:V, reg p193:p(V +), reg sym53:cls, reg base53:cls, reg guard53:L, reg r622:V, reg r623:V, reg package101:*, reg package102:V, reg c205:cls, reg r624:V, reg p194:p(V +), reg r626:V, reg c206:L, reg c207:V, reg c209:L, reg warning1:cls, reg gettextf7:cls, reg sQuote9:cls, reg package103:*, reg package104:V, reg p195:p(V +), reg r628:V, reg p196:p(V +), reg r630:V, reg p197:p(V +), reg r632:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r634:V, reg r635:V, reg _isMethodsDispatchOn1:cls, reg r636:V, reg c210:L, reg c212:V, reg hasS4m:*, reg hasS4m1:V, reg c213:L, reg c214:V, reg c216:L, reg c218:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r637:V, reg c221:L, reg r638:V, reg package105:*, reg package106:V, reg identical1:cls, reg r639:V, reg r640:V, reg c222:L, reg c223:V, reg c225:L, reg lev24:*, reg lev25:V, reg r641:V, reg c226:L, reg c227:V, reg lev26:*, reg lev27:V, reg r642:V, reg c229:L, reg c230:V, reg c232:L, reg message11:cls, reg dQuote11:cls, reg package107:*, reg package108:V, reg p198:p(V +), reg r644:V, reg p199:p(V +), reg r646:V, reg lev28:*, reg lev29:V, reg r648:V, reg c233:L, reg message12:cls, reg r649:V, reg __28:cls, reg r651:V, reg r652:cls, reg ns22:*, reg ns23:V, reg p200:p(V +), reg ns24:*, reg ns25:V, reg p201:p(V +), reg r655:V, reg lev30:*, reg lev31:V, reg r656:V, reg c234:L, reg message13:cls, reg r657:V, reg nsInfo55:*, reg nsInfo56:V, reg c235:L, reg nsInfo58:V, reg dr106:V, reg dc53:L, reg dx141:V, reg dx142:V, reg r659:V, reg s5:V, reg l28:I, reg i136:I, reg i137:I, reg i138:I, reg c236:L, reg x5:V, reg ls1:cls, reg ns26:*, reg ns27:V, reg p202:p(V +), reg p203:*, reg p204:V, reg p205:p(V +), reg r662:V, reg _in_4:cls, reg expp:*, reg expp1:V, reg p206:p(V +), reg exports2:*, reg exports3:V, reg p207:p(V +), reg r665:V, reg r666:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r667:V, reg i143:I, reg r668:V, reg newEx:*, reg newEx1:V, reg any2:cls, reg r669:V, reg c237:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r670:V, reg i148:I, reg r671:V, reg expp2:*, reg expp3:V, reg c238:L, reg i150:I, reg expp5:V, reg dr108:V, reg dc54:L, reg dx143:V, reg i152:I, reg dx144:V, reg newEx2:*, reg newEx3:V, reg __29:cls, reg r672:V, reg exports4:*, reg exports5:V, reg c239:cls, reg r673:V, reg i153:I, reg nsInfo59:*, reg nsInfo60:V, reg c240:L, reg nsInfo62:V, reg dr110:V, reg dc55:L, reg dx145:V, reg dx146:V, reg r675:V, reg lev32:*, reg lev33:V, reg r676:V, reg c241:L, reg message14:cls, reg r677:V, reg character:cls, reg r679:V, reg __30:cls, reg r680:V, reg r681:cls, reg ns28:*, reg ns29:V, reg p208:p(V +), reg r683:V, reg nsInfo63:*, reg nsInfo64:V, reg c242:L, reg nsInfo66:V, reg dr112:V, reg dc56:L, reg dx147:V, reg dx148:V, reg r684:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r685:V, reg r686:V, reg classPatterns:*, reg classPatterns1:V, reg length2:cls, reg r687:V, reg r688:V, reg c243:L, reg nsInfo67:*, reg nsInfo68:V, reg c244:L, reg nsInfo70:V, reg dr114:V, reg dc57:L, reg dx149:V, reg dx150:V, reg r689:V, reg unique:cls, reg unlist:cls, reg lapply:cls, reg classPatterns2:*, reg classPatterns3:V, reg p209:p(V +), reg grep:*, reg grep1:V, reg p210:p(V +), reg aClasses:*, reg aClasses1:V, reg p211:p(V +), reg r693:V, reg p212:p(V +), reg r695:V, reg p213:p(V +), reg r697:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r698:V, reg r699:V, reg pClasses:*, reg pClasses1:V, reg length3:cls, reg r700:V, reg c245:L, reg vapply:cls, reg pClasses2:*, reg pClasses3:V, reg p214:p(V +), reg __31:cls, reg r702:V, reg p215:p(V +), reg ns30:*, reg ns31:V, reg p216:p(V +), reg r705:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r706:V, reg r707:V, reg good:*, reg good1:V, reg any3:cls, reg r708:V, reg r709:V, reg c246:L, reg c248:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r710:V, reg c251:L, reg r711:V, reg nsInfo71:*, reg nsInfo72:V, reg c252:L, reg c254:L, reg nsInfo74:V, reg dr116:V, reg dc58:L, reg dx152:V, reg c256:L, reg dx153:V, reg r712:V, reg length4:cls, reg r713:V, reg c257:L, reg c258:V, reg c260:L, reg warning2:cls, reg gettextf8:cls, reg sQuote10:cls, reg package109:*, reg package110:V, reg p217:p(V +), reg r715:V, reg p218:p(V +), reg r717:V, reg p219:p(V +), reg r719:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r721:V, reg r722:V, reg expClasses:*, reg expClasses1:V, reg pClasses4:*, reg pClasses5:V, reg c261:L, reg pClasses7:V, reg dr118:V, reg dc59:L, reg dx154:V, reg dx155:V, reg good2:*, reg good3:V, reg __32:cls, reg r723:V, reg c262:cls, reg r724:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r726:V, reg r727:V, reg expClasses2:*, reg expClasses3:V, reg length5:cls, reg r728:V, reg c263:L, reg vapply1:cls, reg expClasses4:*, reg expClasses5:V, reg p220:p(V +), reg __33:cls, reg r730:V, reg p221:p(V +), reg ns32:*, reg ns33:V, reg p222:p(V +), reg r733:V, reg r734:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r735:V, reg r736:V, reg missingClasses:*, reg missingClasses1:V, reg any4:cls, reg r737:V, reg c264:L, reg stop10:cls, reg gettextf9:cls, reg sQuote11:cls, reg package111:*, reg package112:V, reg p223:p(V +), reg r739:V, reg p224:p(V +), reg paste3:cls, reg expClasses6:*, reg expClasses7:V, reg c265:L, reg expClasses9:V, reg dr120:V, reg dc60:L, reg dx156:V, reg dx157:V, reg missingClasses2:*, reg missingClasses3:V, reg __34:cls, reg r741:V, reg p225:p(V +), reg r743:V, reg p226:p(V +), reg r745:V, reg p227:p(V +), reg r747:V, reg paste4:cls, reg __35:cls, reg r749:V, reg r750:cls, reg r751:V, reg p228:p(V +), reg expClasses10:*, reg expClasses11:V, reg p229:p(V +), reg r754:V, reg unique1:cls, reg sym65:cls, reg base65:cls, reg guard65:L, reg r756:V, reg r757:V, reg ___1:cls, reg r758:V, reg r759:cls, reg ns34:*, reg ns35:V, reg p230:p(V +), reg r761:V, reg ___2:cls, reg r762:V, reg r763:cls, reg parent_env:cls, reg ns36:*, reg ns37:V, reg p231:p(V +), reg r765:V, reg p232:p(V +), reg r767:V, reg c266:cls, reg r768:V, reg p233:p(V +), reg r770:V, reg nsInfo75:*, reg nsInfo76:V, reg c267:L, reg nsInfo78:V, reg dr122:V, reg dc61:L, reg dx158:V, reg dx159:V, reg r771:V, reg expMethods:*, reg expMethods1:V, reg c268:L, reg expMethods3:V, reg dr124:V, reg dc62:L, reg dx160:V, reg dx161:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r772:V, reg expMethods6:V, reg r773:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r774:V, reg expMethods9:V, reg r775:V, reg expMethods10:*, reg expMethods11:V, reg exports6:*, reg exports7:V, reg match1:cls, reg r776:V, reg is_na1:cls, reg r777:V, reg __36:cls, reg r778:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r779:V, reg r780:V, reg addGenerics:*, reg addGenerics1:V, reg length6:cls, reg r781:V, reg c269:L, reg vapply2:cls, reg addGenerics2:*, reg addGenerics3:V, reg p234:p(V +), reg r783:cls, reg p235:p(V +), reg r785:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r786:V, reg r787:V, reg nowhere:*, reg nowhere1:V, reg any5:cls, reg r788:V, reg c270:L, reg warning3:cls, reg gettextf10:cls, reg sQuote12:cls, reg package113:*, reg package114:V, reg p236:p(V +), reg r790:V, reg p237:p(V +), reg paste5:cls, reg sQuote13:cls, reg sort:cls, reg unique2:cls, reg addGenerics4:*, reg addGenerics5:V, reg c271:L, reg addGenerics7:V, reg dr126:V, reg dc63:L, reg dx162:V, reg dx163:V, reg nowhere2:*, reg nowhere3:V, reg __37:cls, reg r792:V, reg p238:p(V +), reg r794:V, reg p239:p(V +), reg r796:V, reg p240:p(V +), reg r798:V, reg p241:p(V +), reg r800:V, reg p242:p(V +), reg r802:V, reg p243:p(V +), reg r804:V, reg addGenerics8:*, reg addGenerics9:V, reg c272:L, reg addGenerics11:V, reg dr128:V, reg dc64:L, reg dx164:V, reg dx165:V, reg nowhere4:*, reg nowhere5:V, reg r805:V, reg __38:cls, reg r806:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r807:V, reg r808:V, reg addGenerics12:*, reg addGenerics13:V, reg length7:cls, reg r809:V, reg c273:L, reg addGenerics14:*, reg addGenerics15:V, reg c274:L, reg addGenerics17:V, reg dr130:V, reg dc65:L, reg dx167:V, reg dx168:V, reg vapply3:cls, reg addGenerics18:*, reg addGenerics19:V, reg p244:p(V +), reg r811:cls, reg p245:p(V +), reg r813:V, reg __39:cls, reg r814:V, reg vapply4:cls, reg addGenerics20:*, reg addGenerics21:V, reg p246:p(V +), reg ___3:cls, reg r816:V, reg p247:p(V +), reg ns38:*, reg ns39:V, reg p248:p(V +), reg r819:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r820:V, reg r821:V, reg ok:*, reg ok1:V, reg all:cls, reg r822:V, reg r823:V, reg c275:L, reg sort1:cls, reg unique3:cls, reg addGenerics22:*, reg addGenerics23:V, reg c276:L, reg addGenerics25:V, reg dr132:V, reg dc66:L, reg dx169:V, reg dx170:V, reg ok2:*, reg ok3:V, reg r824:V, reg __40:cls, reg r825:V, reg p249:p(V +), reg r827:V, reg p250:p(V +), reg r829:V, reg ngettext:cls, reg sym72:cls, reg base72:cls, reg guard72:L, reg r830:V, reg r831:V, reg bad:*, reg bad1:V, reg length8:cls, reg r832:V, reg p251:p(V +), reg r834:V, reg stop11:cls, reg sprintf:cls, reg msg4:*, reg msg5:V, reg p252:p(V +), reg sQuote14:cls, reg package115:*, reg package116:V, reg p253:p(V +), reg r837:V, reg p254:p(V +), reg paste6:cls, reg sQuote15:cls, reg bad2:*, reg bad3:V, reg p255:p(V +), reg r840:V, reg p256:p(V +), reg r842:V, reg p257:p(V +), reg r844:V, reg p258:p(V +), reg r846:V, reg r847:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r848:V, reg r849:V, reg ok4:*, reg ok5:V, reg r850:V, reg any6:cls, reg r851:V, reg c277:L, reg addGenerics26:*, reg addGenerics27:V, reg c278:L, reg addGenerics29:V, reg dr134:V, reg dc67:L, reg dx171:V, reg dx172:V, reg ok6:*, reg ok7:V, reg r852:V, reg __41:cls, reg r853:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r855:V, reg r856:V, reg exports8:*, reg exports9:V, reg addGenerics30:*, reg addGenerics31:V, reg c279:cls, reg r857:V, reg character1:cls, reg r859:V, reg sym75:cls, reg base75:cls, reg guard75:L, reg r860:V, reg r861:V, reg allGenerics:*, reg allGenerics1:V, reg length9:cls, reg r862:V, reg c280:L, reg unique4:cls, reg sym76:cls, reg base76:cls, reg guard76:L, reg r863:V, reg r864:V, reg expMethods12:*, reg expMethods13:V, reg exports10:*, reg exports11:V, reg c281:L, reg exports13:V, reg dr136:V, reg dc68:L, reg dx173:V, reg dx174:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r865:V, reg exports16:V, reg r866:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r867:V, reg exports19:V, reg r868:V, reg exports20:*, reg exports21:V, reg allGenerics2:*, reg allGenerics3:V, reg match2:cls, reg r869:V, reg is_na2:cls, reg r870:V, reg r871:V, reg __42:cls, reg r872:V, reg c282:cls, reg r873:V, reg p259:p(V +), reg r875:V, reg _in_5:cls, reg expMethods14:*, reg expMethods15:V, reg p260:p(V +), reg allGenerics4:*, reg allGenerics5:V, reg p261:p(V +), reg r878:V, reg r879:V, reg sym79:cls, reg base79:cls, reg guard79:L, reg r880:V, reg r881:V, reg missingMethods:*, reg missingMethods1:V, reg any7:cls, reg r882:V, reg c283:L, reg stop12:cls, reg gettextf11:cls, reg sQuote16:cls, reg package117:*, reg package118:V, reg p262:p(V +), reg r884:V, reg p263:p(V +), reg paste7:cls, reg expMethods16:*, reg expMethods17:V, reg c284:L, reg expMethods19:V, reg dr138:V, reg dc69:L, reg dx175:V, reg dx176:V, reg missingMethods2:*, reg missingMethods3:V, reg __43:cls, reg r886:V, reg p264:p(V +), reg r888:V, reg p265:p(V +), reg r890:V, reg p266:p(V +), reg r892:V, reg ___4:cls, reg r894:V, reg r895:cls, reg r896:V, reg unique5:cls, reg sym80:cls, reg base80:cls, reg guard80:L, reg r897:V, reg r898:V, reg ___5:cls, reg r899:V, reg r900:cls, reg ns40:*, reg ns41:V, reg p267:p(V +), reg tPrefix:*, reg tPrefix1:V, reg p268:p(V +), reg r903:V, reg ___6:cls, reg r904:V, reg r905:cls, reg parent_env1:cls, reg ns42:*, reg ns43:V, reg p269:p(V +), reg r907:V, reg p270:p(V +), reg tPrefix2:*, reg tPrefix3:V, reg p271:p(V +), reg r910:V, reg c285:cls, reg r911:V, reg p272:p(V +), reg r913:V, reg _in_6:cls, reg exports22:*, reg exports23:V, reg p273:p(V +), reg allGenerics6:*, reg allGenerics7:V, reg p274:p(V +), reg r916:V, reg _in_7:cls, reg exports24:*, reg exports25:V, reg p275:p(V +), reg expMethods20:*, reg expMethods21:V, reg p276:p(V +), reg r919:V, reg r920:V, reg r921:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r922:V, reg r923:V, reg needMethods:*, reg needMethods1:V, reg any8:cls, reg r924:V, reg c286:L, reg sym82:cls, reg base82:cls, reg guard82:L, reg r925:V, reg r926:V, reg expMethods22:*, reg expMethods23:V, reg exports26:*, reg exports27:V, reg c287:L, reg exports29:V, reg dr140:V, reg dc70:L, reg dx177:V, reg dx178:V, reg needMethods2:*, reg needMethods3:V, reg __44:cls, reg r927:V, reg c288:cls, reg r928:V, reg allGenerics8:*, reg allGenerics9:V, reg c289:L, reg allGenerics11:V, reg dr142:V, reg dc71:L, reg dx179:V, reg dx180:V, reg _in_8:cls, reg allGenerics12:*, reg allGenerics13:V, reg p277:p(V +), reg expMethods24:*, reg expMethods25:V, reg p278:p(V +), reg r932:V, reg r933:V, reg __45:cls, reg r934:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r935:V, reg r936:V, reg pm:*, reg pm1:V, reg length10:cls, reg r937:V, reg c290:L, reg vapply5:cls, reg pm2:*, reg pm3:V, reg p279:p(V +), reg r939:cls, reg p280:p(V +), reg logical:cls, reg r941:V, reg p281:p(V +), reg r943:V, reg sym84:cls, reg base84:cls, reg guard84:L, reg r944:V, reg r945:V, reg expMethods26:*, reg expMethods27:V, reg pm4:*, reg pm5:V, reg c291:L, reg pm7:V, reg dr144:V, reg dc72:L, reg dx181:V, reg dx182:V, reg prim:*, reg prim1:V, reg __46:cls, reg r946:V, reg c292:cls, reg r947:V, reg sym85:cls, reg base85:cls, reg guard85:L, reg r949:V, reg r950:V, reg expMethods28:*, reg expMethods29:V, reg r951:I, reg s6:V, reg l29:I, reg i154:I, reg i155:I, reg i156:I, reg c293:L, reg x6:V, reg expMethods30:*, reg expMethods31:V, reg c294:L, reg i160:I, reg expMethods33:V, reg dr146:V, reg dc73:L, reg dx183:V, reg i162:I, reg dx184:V, reg i163:*, reg i164:V, reg __47:cls, reg r952:V, reg lev34:*, reg lev35:V, reg r953:V, reg c295:L, reg message15:cls, reg sQuote17:cls, reg mi:*, reg mi1:V, reg p282:p(V +), reg r955:V, reg p283:p(V +), reg r957:V, reg i167:I, reg _in_9:cls, reg mi2:*, reg mi3:V, reg p284:p(V +), reg exports30:*, reg exports31:V, reg p285:p(V +), reg r961:V, reg r962:V, reg c296:L, reg i169:I, reg c298:V, reg exists:cls, reg mi4:*, reg mi5:V, reg p286:p(V +), reg ns44:*, reg ns45:V, reg p287:p(V +), reg r965:V, reg c299:L, reg c300:V, reg c302:L, reg sym86:cls, reg base86:cls, reg guard86:L, reg r966:V, reg i175:I, reg r967:V, reg exports32:*, reg exports33:V, reg mi6:*, reg mi7:V, reg c303:cls, reg r968:V, reg i176:I, reg paste8:cls, reg tPrefix4:*, reg tPrefix5:V, reg p288:p(V +), reg mi8:*, reg mi9:V, reg p289:p(V +), reg r972:V, reg grep2:cls, reg pattern:*, reg pattern1:V, reg p290:p(V +), reg allMethodTables:*, reg allMethodTables1:V, reg p291:p(V +), reg r975:V, reg sym87:cls, reg base87:cls, reg guard87:L, reg r976:V, reg i179:I, reg r977:V, reg ii:*, reg ii1:V, reg length11:cls, reg r978:V, reg c304:L, reg sym88:cls, reg base88:cls, reg guard88:L, reg r979:V, reg i184:I, reg r980:V, reg ii2:*, reg ii3:V, reg length12:cls, reg r981:V, reg r982:V, reg c305:L, reg warning4:cls, reg gettextf12:cls, reg sQuote18:cls, reg mi10:*, reg mi11:V, reg p292:p(V +), reg r984:V, reg p293:p(V +), reg r986:V, reg p294:p(V +), reg r988:V, reg ii4:*, reg ii5:V, reg c306:L, reg i188:I, reg ii7:V, reg dr148:V, reg dc74:L, reg dx185:V, reg i190:I, reg dx186:V, reg __48:cls, reg r989:V, reg i191:I, reg allMethodTables2:*, reg allMethodTables3:V, reg c307:L, reg i193:I, reg allMethodTables5:V, reg dr150:V, reg dc75:L, reg dx188:V, reg i195:I, reg dx189:V, reg ii8:*, reg ii9:V, reg __49:cls, reg r990:V, reg l30:*, reg c308:L, reg i197:I, reg dx191:V, reg l32:*, reg dr152:V, reg dc76:L, reg dx193:V, reg i199:I, reg dx194:V, reg dx195:V, reg i200:*, reg i201:V, reg ____3:cls, reg r991:V, reg i202:I, reg warning5:cls, reg gettextf13:cls, reg sQuote19:cls, reg mi12:*, reg mi13:V, reg p295:p(V +), reg r993:V, reg p296:p(V +), reg r995:V, reg p297:p(V +), reg r997:V, reg sym89:cls, reg base89:cls, reg guard89:L, reg r998:V, reg r999:V, reg expMethods34:*, reg expMethods35:V, reg length13:cls, reg r1000:V, reg c309:L, reg stop13:cls, reg gettextf14:cls, reg sQuote20:cls, reg package119:*, reg package120:V, reg p298:p(V +), reg r1002:V, reg p299:p(V +), reg paste9:cls, reg expMethods36:*, reg expMethods37:V, reg p300:p(V +), reg r1005:V, reg p301:p(V +), reg r1007:V, reg p302:p(V +), reg r1009:V, reg unique6:cls, reg sym90:cls, reg base90:cls, reg guard90:L, reg r1010:V, reg r1011:V, reg exports34:*, reg exports35:V, reg expClasses12:*, reg expClasses13:V, reg expTables:*, reg expTables1:V, reg c310:cls, reg r1012:V, reg p303:p(V +), reg r1014:V, reg lev36:*, reg lev37:V, reg r1015:V, reg c311:L, reg c312:V, reg lev38:*, reg lev39:V, reg r1016:V, reg c314:L, reg c315:V, reg c317:L, reg message16:cls, reg dQuote12:cls, reg package121:*, reg package122:V, reg p304:p(V +), reg r1018:V, reg p305:p(V +), reg r1020:V, reg r1021:V, reg sym91:cls, reg base91:cls, reg guard91:L, reg r1023:V, reg r1024:V, reg exports36:*, reg exports37:V, reg length14:cls, reg r1025:V, reg c318:L, reg sym92:cls, reg base92:cls, reg guard92:L, reg r1026:V, reg r1027:V, reg c319:cls, reg r1028:V, reg exports38:*, reg exports39:V, reg c320:L, reg exports41:V, reg dr154:V, reg dc77:L, reg dx197:V, reg dx198:V, reg _in_10:cls, reg exports42:*, reg exports43:V, reg p306:p(V +), reg stoplist:*, reg stoplist1:V, reg p307:p(V +), reg r1031:V, reg r1032:V, reg __50:cls, reg r1033:V, reg lev40:*, reg lev41:V, reg r1034:V, reg c321:L, reg message17:cls, reg dQuote13:cls, reg package123:*, reg package124:V, reg p308:p(V +), reg r1036:V, reg p309:p(V +), reg r1038:V, reg namespaceExport:cls, reg ns46:*, reg ns47:V, reg p310:p(V +), reg exports44:*, reg exports45:V, reg p311:p(V +), reg r1042:V, reg lev42:*, reg lev43:V, reg r1043:V, reg c322:L, reg message18:cls, reg dQuote14:cls, reg package125:*, reg package126:V, reg p312:p(V +), reg r1045:V, reg p313:p(V +), reg r1047:V, reg sealNamespace:cls, reg ns48:*, reg ns49:V, reg p314:p(V +), reg r1050:V, reg runUserHook:cls, reg package127:*, reg package128:V, reg p315:p(V +), reg pkgpath28:*, reg pkgpath29:V, reg p316:p(V +), reg r1053:V, reg sym93:cls, reg base93:cls, reg guard93:L, reg r1054:V, reg on_exit2:cls, reg r1056:V, reg lev44:*, reg lev45:V, reg r1057:V, reg c323:L, reg message19:cls, reg dQuote15:cls, reg package129:*, reg package130:V, reg p317:p(V +), reg r1059:V, reg p318:p(V +), reg r1061:V, reg Sys_unsetenv:cls, reg r1063:V, reg ns50:*, reg ns51:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L1() else L2(keep_source);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("keep.source.pkgs");
      return r;
    };
    goto L2(p);
  L2(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    partial_isMissing = missing.0(partial);
    if partial_isMissing then L3(FALSE) else L3(partial);
  L3(partial_orDefault):
    st partial = partial_orDefault;
    versionCheck_isMissing = missing.0(versionCheck);
    if versionCheck_isMissing then L4(NULL) else L4(versionCheck);
  L4(versionCheck_orDefault):
    st versionCheck = versionCheck_orDefault;
    keep_parse_data_isMissing = missing.0(keep_parse_data);
    if keep_parse_data_isMissing then L5() else L6(keep_parse_data);
  L5():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("keep.parse.data.pkgs");
      return r2;
    };
    goto L6(p1);
  L6(keep_parse_data_orDefault):
    st `keep.parse.data` = keep_parse_data_orDefault;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L280() else L281();
  L7(r5):
    st libpath = r5;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L284() else L285();
  L280():
    package1 = ld package;
    check L282() else D0();
  L281():
    r4 = dyn base(<sym package>, "LibPath");
    goto L7(r4);
  D0():
    deopt 2 [package1];
  L8(r8):
    c = `is.object`(r8);
    if c then L288() else L289(r8);
  L282():
    package2 = force? package1;
    checkMissing(package2);
    attr = ldf attr in base;
    r6 = dyn attr(package2, "LibPath");
    check L283() else D1();
  L284():
    package3 = ld package;
    check L286() else D2();
  L285():
    r7 = dyn base1(<sym package>);
    goto L8(r7);
  D1():
    deopt 6 [r6];
  D2():
    deopt 10 [package3];
  L9(dx1):
    st package = dx1;
    dynGet = ldf dynGet;
    check L291() else D4();
  L283():
    goto L7(r6);
  L286():
    package4 = force? package3;
    checkMissing(package4);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(package4);
    check L287() else D3();
  L288():
    dr = tryDispatchBuiltin.1("[[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L290() else L289(dr);
  L289(r11):
    __ = ldf `[[` in base;
    r12 = dyn __(r11, 1);
    goto L9(r12);
  D3():
    deopt 13 [r9];
  D4():
    deopt 19 [];
  L287():
    goto L8(r9);
  L290():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L291():
    r13 = dyn dynGet("__NameSpacesLoading__", NULL);
    check L292() else D5();
  D5():
    deopt 22 [r13];
  L292():
    st loading = r13;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L293() else L294();
  L10(r15):
    c1 = `as.logical`(r15);
    if c1 then L298() else L11();
  L293():
    package5 = ld package;
    check L295() else D6();
  L294():
    r14 = dyn base2(<sym package>, <sym loading>, 0);
    goto L10(r14);
  D6():
    deopt 26 [package5];
  L11():
    goto L12();
  L12():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L302() else L303();
  L295():
    package6 = force? package5;
    checkMissing(package6);
    loading = ld loading;
    check L296() else D7();
  L298():
    stop = ldf stop;
    check L299() else D9();
  D7():
    deopt 28 [loading];
  D9():
    deopt 35 [];
  L13(r28):
    st __NameSpacesLoading__ = r28;
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L307() else L308();
  L296():
    loading1 = force? loading;
    checkMissing(loading1);
    match = ldf match in base;
    r16 = dyn match(package6, loading1, 0, NULL);
    check L297() else D8();
  L299():
    p3 = prom<V +>{
      sQuote = ldf sQuote;
      p2 = prom<V +>{
        package7 = ld package;
        package8 = force? package7;
        checkMissing(package8);
        return package8;
      };
      r18 = dyn sQuote(p2);
      return r18;
    };
    p6 = prom<V +>{
      paste = ldf paste;
      p5 = prom<V +>{
        sQuote1 = ldf sQuote;
        p4 = prom<V +>{
          loading2 = ld loading;
          loading3 = force? loading2;
          checkMissing(loading3);
          return loading3;
        };
        r21 = dyn sQuote1(p4);
        return r21;
      };
      r23 = dyn paste[, collapse](p5, ", ");
      return r23;
    };
    r25 = dyn stop[, , , , domain]("cyclic namespace dependency detected when loading ", p3, ", already loading ", p6, NA_LGL);
    check L300() else D10();
  L302():
    package9 = ld package;
    check L304() else D11();
  L303():
    r27 = dyn base3(<sym package>, <sym loading>);
    goto L13(r27);
  D8():
    deopt 33 [r16];
  D10():
    deopt 42 [r25];
  D11():
    deopt 47 [package9];
  L14(r31):
    st ns = r31;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L311() else L312();
  L297():
    goto L10(r16);
  L300():
    goto L12();
  L304():
    package10 = force? package9;
    checkMissing(package10);
    loading4 = ld loading;
    check L305() else D12();
  L307():
    package11 = ld package;
    check L309() else D14();
  L308():
    r30 = dyn base4(<lang getRegisteredNamespace(package)>);
    goto L14(r30);
  D12():
    deopt 49 [loading4];
  D14():
    deopt 56 [package11];
  L15(r34):
    r35 = `!`(r34);
    c4 = `as.logical`(r35);
    if c4 then L314() else L16();
  L305():
    loading5 = force? loading4;
    checkMissing(loading5);
    c2 = ldf c in base;
    r29 = dyn c2(package10, loading5);
    check L306() else D13();
  L309():
    package12 = force? package11;
    checkMissing(package12);
    getRegisteredNamespace = ldf getRegisteredNamespace in base;
    r32 = dyn getRegisteredNamespace(package12);
    check L310() else D15();
  L311():
    ns = ld ns;
    check L313() else D16();
  L312():
    r33 = dyn base5(<sym ns>);
    goto L15(r33);
  D13():
    deopt 52 [r29];
  D15():
    deopt 59 [r32];
  D16():
    deopt 62 [ns];
  L16():
    st lev = 0;
    Sys_getenv = ldf `Sys.getenv`;
    check L341() else D26();
  L306():
    goto L13(r29);
  L310():
    goto L14(r32);
  L313():
    ns1 = force? ns;
    checkMissing(ns1);
    c3 = `==`(ns1, NULL);
    goto L15(c3);
  L314():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L315() else L316();
  D26():
    deopt 112 [];
  L17(r37):
    r39 = `!`(r37);
    c7 = `as.logical`(r39);
    if c7 then L321() else L19(c7);
  L315():
    versionCheck1 = ld versionCheck;
    check L317() else D17();
  L316():
    r36 = dyn base6(<lang `<-`(zop, `[[`(versionCheck, "op"))>);
    goto L17(r36);
  L341():
    r66 = dyn Sys_getenv("_R_TRACE_LOADNAMESPACE_", "");
    check L342() else D27();
  D17():
    deopt 67 [versionCheck1];
  D27():
    deopt 115 [r66];
  L19(c9):
    c22 = `as.logical`(c9);
    if c22 then L329() else L22();
  L317():
    versionCheck2 = force? versionCheck1;
    checkMissing(versionCheck2);
    c5 = `is.object`(versionCheck2);
    if c5 then L318() else L319(versionCheck2);
  L321():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L322() else L323();
  L342():
    st msg = r66;
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L343() else L344();
  L18(dx3):
    st zop = dx3;
    c6 = `==`(dx3, NULL);
    goto L17(c6);
  L20(c12, r41):
    r43 = `!`(r41);
    c19 = `as.logical`(r43);
    c20 = `&&`(c12, c19);
    goto L19(c20);
  L22():
    goto L25();
  L25():
    ns4 = ld ns;
    check L339() else D25();
  L26(r68):
    c24 = `as.logical`(r68);
    if c24 then L347() else L27();
  L318():
    dr2 = tryDispatchBuiltin.1("[[", versionCheck2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L320() else L319(dr2);
  L319(versionCheck4):
    __1 = ldf `[[` in base;
    r38 = dyn __1(versionCheck4, "op");
    goto L18(r38);
  L322():
    versionCheck5 = ld versionCheck;
    check L324() else D18();
  L323():
    r40 = dyn base7(<lang `<-`(zversion, `[[`(versionCheck, "version"))>);
    goto L20(c7, r40);
  L329():
    getNamespaceVersion = ldf getNamespaceVersion;
    check L330() else D19();
  L343():
    msg = ld msg;
    check L345() else D28();
  L344():
    r67 = dyn base9(<sym msg>);
    goto L26(r67);
  D18():
    deopt 76 [c7, versionCheck5];
  D19():
    deopt 86 [];
  D25():
    deopt 106 [ns4];
  D28():
    deopt 119 [msg];
  L27():
    goto L33();
  L33():
    lev2 = ld lev;
    check L363() else D36();
  L320():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L324():
    versionCheck6 = force? versionCheck5;
    checkMissing(versionCheck6);
    c13 = `is.object`(versionCheck6);
    if c13 then L325() else L326(c7, versionCheck6);
  L330():
    p7 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r45 = dyn getNamespaceVersion(p7);
    check L331() else D20();
  L339():
    ns5 = force? ns4;
    checkMissing(ns5);
    popenv;
    return ns5;
  L345():
    msg1 = force? msg;
    checkMissing(msg1);
    nzchar = ldf nzchar in base;
    r69 = dyn nzchar(msg1);
    check L346() else D29();
  L347():
    _in_ = ldf `%in%`;
    check L348() else D30();
  D20():
    deopt 88 [r45];
  D29():
    deopt 122 [r69];
  D30():
    deopt 124 [];
  D36():
    deopt 151 [lev2];
  L21(c17, dx5):
    st zversion = dx5;
    c18 = `==`(dx5, NULL);
    goto L20(c17, c18);
  L325():
    dr4 = tryDispatchBuiltin.1("[[", versionCheck6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L327() else L326(c7, dr4);
  L326(c15, versionCheck8):
    __2 = ldf `[[` in base;
    r42 = dyn __2(versionCheck8, "version");
    goto L21(c15, r42);
  L331():
    st current = r45;
    do_call = ldf `do.call`;
    check L332() else D21();
  L346():
    goto L26(r69);
  L348():
    p17 = prom<V +>{
      package15 = ld package;
      package16 = force? package15;
      checkMissing(package16);
      return package16;
    };
    p18 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      c25 = ldf c in base;
      r73 = dyn c25("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel");
      goto L0(r73);
    L2():
      r71 = dyn base10("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel");
      goto L0(r71);
    };
    r75 = dyn _in_(p17, p18);
    check L349() else D31();
  L363():
    lev3 = force? lev2;
    checkMissing(lev3);
    r84 = `>`(lev3, 0);
    c28 = `as.logical`(r84);
    if c28 then L364() else L34();
  D21():
    deopt 91 [];
  D31():
    deopt 127 [r75];
  L34():
    goto L35();
  L35():
    r90 = clos inner3600167054;
    st runHook = r90;
    r91 = clos inner2865193510;
    st runUserHook = r91;
    r92 = clos inner3061699934;
    st makeNamespace = r92;
    r93 = clos inner2310282661;
    st sealNamespace = r93;
    r94 = clos inner482767441;
    st addNamespaceDynLibs = r94;
    r95 = clos inner2865193510;
    st bindTranslations = r95;
    r96 = clos inner3893419458;
    st assignNativeRoutines = r96;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L368() else L369();
  L327():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(c7, dx4);
  L332():
    p8 = prom<V +>{
      zop = ld zop;
      zop1 = force? zop;
      checkMissing(zop1);
      return zop1;
    };
    p10 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      as_numeric_version = ldf `as.numeric_version`;
      p9 = prom<V +>{
        current = ld current;
        current1 = force? current;
        checkMissing(current1);
        return current1;
      };
      r50 = dyn as_numeric_version(p9);
      zversion = ld zversion;
      zversion1 = force? zversion;
      checkMissing(zversion1);
      list = ldf list in base;
      r51 = dyn list(r50, zversion1);
      goto L0(r51);
    L2():
      r47 = dyn base8(<lang as.numeric_version(current)>, <sym zversion>);
      goto L0(r47);
    };
    r53 = dyn do_call(p8, p10);
    check L333() else D22();
  L349():
    c26 = `as.logical`(r75);
    if c26 then L350() else L28();
  L364():
    message = ldf message;
    check L365() else D37();
  D22():
    deopt 94 [r53];
  D37():
    deopt 156 [];
  L28():
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L352() else L353();
  L29(r76):
    goto L33();
  L36(r98):
    st `fp.lib.loc` = r98;
    find_package = ldf `find.package`;
    check L373() else D42();
  L333():
    r54 = `!`(r53);
    c23 = `as.logical`(r54);
    if c23 then L334() else L23();
  L350():
    st lev = 0;
    goto L29(0);
  L365():
    p20 = prom<V +>{
      dQuote = ldf dQuote;
      p19 = prom<V +>{
        package17 = ld package;
        package18 = force? package17;
        checkMissing(package18);
        return package18;
      };
      r86 = dyn dQuote(p19);
      return r86;
    };
    r88 = dyn message("- loading ", p20);
    check L366() else D38();
  L368():
    libpath = ld libpath;
    check L370() else D39();
  L369():
    r97 = dyn base13(<sym libpath>, <sym lib.loc>);
    goto L36(r97);
  D38():
    deopt 159 [r88];
  D39():
    deopt 185 [libpath];
  D42():
    deopt 193 [];
  L23():
    goto L24(NULL);
  L24(r64):
    goto L25();
  L30(r78):
    st lev = r78;
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L356() else L357();
  L334():
    stop1 = ldf stop;
    check L335() else D23();
  L352():
    msg2 = ld msg;
    check L354() else D32();
  L353():
    r77 = dyn base11(<sym msg>);
    goto L30(r77);
  L366():
    goto L35();
  L370():
    libpath1 = force? libpath;
    checkMissing(libpath1);
    lib_loc1 = ld `lib.loc`;
    check L371() else D40();
  L373():
    p21 = prom<V +>{
      package19 = ld package;
      package20 = force? package19;
      checkMissing(package20);
      return package20;
    };
    p22 = prom<V +>{
      fp_lib_loc = ld `fp.lib.loc`;
      fp_lib_loc1 = force? fp_lib_loc;
      checkMissing(fp_lib_loc1);
      return fp_lib_loc1;
    };
    r102 = dyn find_package[, , quiet](p21, p22, TRUE);
    check L374() else D43();
  D23():
    deopt 97 [];
  D32():
    deopt 133 [msg2];
  D40():
    deopt 187 [lib_loc1];
  D43():
    deopt 198 [r102];
  L31(r81):
    c27 = `as.logical`(r81);
    if c27 then L360() else L32();
  L335():
    p16 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sQuote2 = ldf sQuote;
        p11 = prom<V +>{
          package13 = ld package;
          package14 = force? package13;
          checkMissing(package14);
          return package14;
        };
        r56 = dyn sQuote2(p11);
        return r56;
      };
      p13 = prom<V +>{
        current2 = ld current;
        current3 = force? current2;
        checkMissing(current3);
        return current3;
      };
      p14 = prom<V +>{
        zop2 = ld zop;
        zop3 = force? zop2;
        checkMissing(zop3);
        return zop3;
      };
      p15 = prom<V +>{
        zversion2 = ld zversion;
        zversion3 = force? zversion2;
        checkMissing(zversion3);
        return zversion3;
      };
      r61 = dyn gettextf("namespace %s %s is already loaded, but %s %s is required", p12, p13, p14, p15);
      return r61;
    };
    r63 = dyn stop1[, domain](p16, NA_LGL);
    check L336() else D24();
  L354():
    msg3 = force? msg2;
    checkMissing(msg3);
    as_integer = ldf `as.integer` in base;
    r79 = dyn as_integer(msg3);
    check L355() else D33();
  L356():
    lev = ld lev;
    check L358() else D34();
  L357():
    r80 = dyn base12(<sym lev>);
    goto L31(r80);
  L371():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c29 = ldf c in base;
    r99 = dyn c29(libpath1, lib_loc2);
    check L372() else D41();
  L374():
    st pkgpath = r102;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L375() else L376();
  D24():
    deopt 101 [r63];
  D33():
    deopt 136 [r79];
  D34():
    deopt 140 [lev];
  D41():
    deopt 190 [r99];
  L32():
    goto L29(NULL);
  L37(r104):
    r106 = `==`(r104, 0);
    c30 = `as.logical`(r106);
    if c30 then L379() else L38();
  L336():
    goto L24(r63);
  L355():
    goto L30(r79);
  L358():
    lev1 = force? lev;
    checkMissing(lev1);
    is_na = ldf `is.na` in base;
    r82 = dyn is_na(lev1);
    check L359() else D35();
  L360():
    st lev = 0;
    goto L29(0);
  L372():
    goto L36(r99);
  L375():
    pkgpath = ld pkgpath;
    check L377() else D44();
  L376():
    r103 = dyn base14(<sym pkgpath>);
    goto L37(r103);
  D35():
    deopt 143 [r82];
  D44():
    deopt 202 [pkgpath];
  L38():
    goto L42();
  L42():
    bindTranslations = ldf bindTranslations;
    check L395() else D56();
  L359():
    goto L31(r82);
  L377():
    pkgpath1 = force? pkgpath;
    checkMissing(pkgpath1);
    length = ldf length in base;
    r105 = dyn length(pkgpath1);
    check L378() else D45();
  L379():
    packageNotFoundError = ldf packageNotFoundError;
    check L380() else D46();
  D45():
    deopt 205 [r105];
  D46():
    deopt 209 [];
  D56():
    deopt 246 [];
  L378():
    goto L37(r105);
  L380():
    p23 = prom<V +>{
      package21 = ld package;
      package22 = force? package21;
      checkMissing(package22);
      return package22;
    };
    p24 = prom<V +>{
      fp_lib_loc2 = ld `fp.lib.loc`;
      fp_lib_loc3 = force? fp_lib_loc2;
      checkMissing(fp_lib_loc3);
      return fp_lib_loc3;
    };
    p25 = prom<V +>{
      sys_call = ldf `sys.call`;
      r109 = dyn sys_call();
      return r109;
    };
    r111 = dyn packageNotFoundError(p23, p24, p25);
    check L381() else D47();
  L395():
    p32 = prom<V +>{
      package25 = ld package;
      package26 = force? package25;
      checkMissing(package26);
      return package26;
    };
    p33 = prom<V +>{
      pkgpath4 = ld pkgpath;
      pkgpath5 = force? pkgpath4;
      checkMissing(pkgpath5);
      return pkgpath5;
    };
    r131 = dyn bindTranslations(p32, p33);
    check L396() else D57();
  D47():
    deopt 213 [r111];
  D57():
    deopt 249 [r131];
  L381():
    st cond = r111;
    withRestarts = ldf withRestarts;
    check L382() else D48();
  L396():
    dirname = ldf dirname;
    check L397() else D58();
  D48():
    deopt 216 [];
  D58():
    deopt 251 [];
  L382():
    p27 = prom<V +>{
      stop2 = ldf stop;
      p26 = prom<V +>{
        cond = ld cond;
        cond1 = force? cond;
        checkMissing(cond1);
        return cond1;
      };
      r113 = dyn stop2(p26);
      return r113;
    };
    p28 = prom<V +>{
      r115 = clos inner2708337952;
      return r115;
    };
    r117 = dyn withRestarts[, retry_loadNamespace](p27, p28);
    check L383() else D49();
  L397():
    p34 = prom<V +>{
      pkgpath6 = ld pkgpath;
      pkgpath7 = force? pkgpath6;
      checkMissing(pkgpath7);
      return pkgpath7;
    };
    r133 = dyn dirname(p34);
    check L398() else D59();
  D49():
    deopt 220 [r117];
  D59():
    deopt 253 [r133];
  L383():
    find_package1 = ldf `find.package`;
    check L384() else D50();
  L398():
    st `package.lib` = r133;
    basename = ldf basename;
    check L399() else D60();
  D50():
    deopt 222 [];
  D60():
    deopt 256 [];
  L384():
    p29 = prom<V +>{
      package23 = ld package;
      package24 = force? package23;
      checkMissing(package24);
      return package24;
    };
    p30 = prom<V +>{
      fp_lib_loc4 = ld `fp.lib.loc`;
      fp_lib_loc5 = force? fp_lib_loc4;
      checkMissing(fp_lib_loc5);
      return fp_lib_loc5;
    };
    r120 = dyn find_package1[, , quiet](p29, p30, TRUE);
    check L385() else D51();
  L399():
    p35 = prom<V +>{
      pkgpath8 = ld pkgpath;
      pkgpath9 = force? pkgpath8;
      checkMissing(pkgpath9);
      return pkgpath9;
    };
    r135 = dyn basename(p35);
    check L400() else D61();
  D51():
    deopt 227 [r120];
  D61():
    deopt 258 [r135];
  L385():
    st pkgpath = r120;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L386() else L387();
  L400():
    st package = r135;
    packageHasNamespace = ldf packageHasNamespace;
    check L401() else D62();
  D62():
    deopt 261 [];
  L39(r122):
    r124 = `==`(r122, 0);
    c31 = `as.logical`(r124);
    if c31 then L390() else L40();
  L386():
    pkgpath2 = ld pkgpath;
    check L388() else D52();
  L387():
    r121 = dyn base15(<sym pkgpath>);
    goto L39(r121);
  L401():
    p36 = prom<V +>{
      package27 = ld package;
      package28 = force? package27;
      checkMissing(package28);
      return package28;
    };
    p37 = prom<V +>{
      package_lib = ld `package.lib`;
      package_lib1 = force? package_lib;
      checkMissing(package_lib1);
      return package_lib1;
    };
    r138 = dyn packageHasNamespace(p36, p37);
    check L402() else D63();
  D52():
    deopt 231 [pkgpath2];
  D63():
    deopt 264 [r138];
  L40():
    goto L41(NULL);
  L41(r127):
    goto L42();
  L388():
    pkgpath3 = force? pkgpath2;
    checkMissing(pkgpath3);
    length1 = ldf length in base;
    r123 = dyn length1(pkgpath3);
    check L389() else D53();
  L390():
    stop3 = ldf stop;
    check L391() else D54();
  L402():
    r139 = `!`(r138);
    c32 = `as.logical`(r139);
    if c32 then L403() else L43();
  D53():
    deopt 234 [r123];
  D54():
    deopt 238 [];
  L43():
    goto L44();
  L44():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L407() else L408();
  L389():
    goto L39(r123);
  L391():
    p31 = prom<V +>{
      cond2 = ld cond;
      cond3 = force? cond2;
      checkMissing(cond3);
      return cond3;
    };
    r126 = dyn stop3(p31);
    check L392() else D55();
  L403():
    r140 = clos inner3498896939;
    st hasNoNamespaceError = r140;
    stop4 = ldf stop;
    check L404() else D64();
  D55():
    deopt 240 [r126];
  D64():
    deopt 270 [];
  L45(r148):
    st iniStdPkgs = r148;
    file_path = ldf `file.path`;
    check L410() else D67();
  L392():
    goto L41(r126);
  L404():
    p40 = prom<V +>{
      hasNoNamespaceError = ldf hasNoNamespaceError;
      p38 = prom<V +>{
        package29 = ld package;
        package30 = force? package29;
        checkMissing(package30);
        return package30;
      };
      p39 = prom<V +>{
        package_lib2 = ld `package.lib`;
        package_lib3 = force? package_lib2;
        checkMissing(package_lib3);
        return package_lib3;
      };
      r143 = dyn hasNoNamespaceError(p38, p39);
      return r143;
    };
    r145 = dyn stop4(p40);
    check L405() else D65();
  L407():
    c33 = ldf c in base;
    r149 = dyn c33("methods", "stats", "stats4", "tools", "utils");
    check L409() else D66();
  L408():
    r147 = dyn base16("methods", "stats", "stats4", "tools", "utils");
    goto L45(r147);
  D65():
    deopt 272 [r145];
  D66():
    deopt 283 [r149];
  D67():
    deopt 286 [];
  L405():
    goto L44();
  L409():
    goto L45(r149);
  L410():
    p41 = prom<V +>{
      pkgpath10 = ld pkgpath;
      pkgpath11 = force? pkgpath10;
      checkMissing(pkgpath11);
      return pkgpath11;
    };
    r151 = dyn file_path(p41, "Meta", "nsInfo.rds");
    check L411() else D68();
  D68():
    deopt 290 [r151];
  L411():
    st nsInfoFilePath = r151;
    file_exists = ldf `file.exists`;
    check L412() else D69();
  D69():
    deopt 293 [];
  L412():
    p42 = prom<V +>{
      nsInfoFilePath = ld nsInfoFilePath;
      nsInfoFilePath1 = force? nsInfoFilePath;
      checkMissing(nsInfoFilePath1);
      return nsInfoFilePath1;
    };
    r153 = dyn file_exists(p42);
    check L413() else D70();
  D70():
    deopt 295 [r153];
  L413():
    c34 = `as.logical`(r153);
    if c34 then L414() else L46();
  L46():
    parseNamespaceFile = ldf parseNamespaceFile;
    check L418() else D73();
  L47(r156):
    st nsInfo = r156;
    file_path1 = ldf `file.path`;
    check L420() else D75();
  L414():
    readRDS = ldf readRDS;
    check L415() else D71();
  D71():
    deopt 297 [];
  D73():
    deopt 301 [];
  D75():
    deopt 309 [];
  L415():
    p43 = prom<V +>{
      nsInfoFilePath2 = ld nsInfoFilePath;
      nsInfoFilePath3 = force? nsInfoFilePath2;
      checkMissing(nsInfoFilePath3);
      return nsInfoFilePath3;
    };
    r155 = dyn readRDS(p43);
    check L416() else D72();
  L418():
    p44 = prom<V +>{
      package31 = ld package;
      package32 = force? package31;
      checkMissing(package32);
      return package32;
    };
    p45 = prom<V +>{
      package_lib4 = ld `package.lib`;
      package_lib5 = force? package_lib4;
      checkMissing(package_lib5);
      return package_lib5;
    };
    r159 = dyn parseNamespaceFile[, , mustExist](p44, p45, FALSE);
    check L419() else D74();
  L420():
    p46 = prom<V +>{
      pkgpath12 = ld pkgpath;
      pkgpath13 = force? pkgpath12;
      checkMissing(pkgpath13);
      return pkgpath13;
    };
    r161 = dyn file_path1(p46, "Meta", "package.rds");
    check L421() else D76();
  D72():
    deopt 299 [r155];
  D74():
    deopt 306 [r159];
  D76():
    deopt 313 [r161];
  L416():
    goto L47(r155);
  L419():
    goto L47(r159);
  L421():
    st pkgInfoFP = r161;
    file_exists1 = ldf `file.exists`;
    check L422() else D77();
  D77():
    deopt 316 [];
  L422():
    p47 = prom<V +>{
      pkgInfoFP = ld pkgInfoFP;
      pkgInfoFP1 = force? pkgInfoFP;
      checkMissing(pkgInfoFP1);
      return pkgInfoFP1;
    };
    r163 = dyn file_exists1(p47);
    check L423() else D78();
  D78():
    deopt 318 [r163];
  L423():
    c35 = `as.logical`(r163);
    if c35 then L424() else L48();
  L48():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L488() else L489();
  L65():
    r244 = clos inner1411584319;
    st checkLicense = r244;
    _in_2 = ldf `%in%`;
    check L497() else D107();
  L424():
    readRDS1 = ldf readRDS;
    check L425() else D79();
  D79():
    deopt 320 [];
  D107():
    deopt 442 [];
  L66(r233):
    r236 = `!`(r233);
    c71 = `as.logical`(r236);
    if c71 then L493() else L67();
  L425():
    p48 = prom<V +>{
      pkgInfoFP2 = ld pkgInfoFP;
      pkgInfoFP3 = force? pkgInfoFP2;
      checkMissing(pkgInfoFP3);
      return pkgInfoFP3;
    };
    r165 = dyn readRDS1(p48);
    check L426() else D80();
  L488():
    package39 = ld package;
    check L490() else D102();
  L489():
    r232 = dyn base24(<lang `==`(package, iniStdPkgs)>);
    goto L66(r232);
  L497():
    p69 = prom<V +>{
      package43 = ld package;
      package44 = force? package43;
      checkMissing(package44);
      return package44;
    };
    p70 = prom<V +>{
      sym25 = ldf c;
      base25 = ldf c in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r247):
      return r247;
    L1():
      iniStdPkgs2 = ld iniStdPkgs;
      iniStdPkgs3 = force? iniStdPkgs2;
      checkMissing(iniStdPkgs3);
      c72 = ldf c in base;
      r248 = dyn c72("datasets", "grDevices", "graphics", iniStdPkgs3);
      goto L0(r248);
    L2():
      r246 = dyn base25("datasets", "grDevices", "graphics", <sym iniStdPkgs>);
      goto L0(r246);
    };
    r250 = dyn _in_2(p69, p70);
    check L498() else D108();
  D80():
    deopt 322 [r165];
  D102():
    deopt 420 [package39];
  D108():
    deopt 445 [r250];
  L67():
    goto L68();
  L68():
    st vI = NULL;
    goto L65();
  L426():
    st pkgInfo = r165;
    pkgInfo = ld pkgInfo;
    check L427() else D81();
  L490():
    package40 = force? package39;
    checkMissing(package40);
    iniStdPkgs = ld iniStdPkgs;
    check L491() else D103();
  L493():
    warning = ldf warning;
    check L494() else D105();
  L498():
    r251 = `!`(r250);
    c73 = `as.logical`(r251);
    if c73 then L499() else L69(c73);
  D81():
    deopt 324 [pkgInfo];
  D103():
    deopt 421 [package40, iniStdPkgs];
  D105():
    deopt 428 [];
  L69(c75):
    c79 = `as.logical`(c75);
    if c79 then L503() else L70();
  L427():
    pkgInfo1 = force? pkgInfo;
    checkMissing(pkgInfo1);
    c36 = `is.object`(pkgInfo1);
    if c36 then L429() else L430(pkgInfo1);
  L491():
    iniStdPkgs1 = force? iniStdPkgs;
    checkMissing(iniStdPkgs1);
    r234 = `==`(package40, iniStdPkgs1);
    any = ldf any in base;
    r235 = dyn any(r234);
    check L492() else D104();
  L494():
    p68 = prom<V +>{
      gettextf4 = ldf gettextf;
      p67 = prom<V +>{
        sQuote6 = ldf sQuote;
        p66 = prom<V +>{
          package41 = ld package;
          package42 = force? package41;
          checkMissing(package42);
          return package42;
        };
        r238 = dyn sQuote6(p66);
        return r238;
      };
      r240 = dyn gettextf4("package %s has no 'package.rds' in Meta/", p67);
      return r240;
    };
    r242 = dyn warning[, domain](p68, NA_LGL);
    check L495() else D106();
  L499():
    isTRUE = ldf isTRUE;
    check L500() else D109();
  D104():
    deopt 425 [r235];
  D106():
    deopt 432 [r242];
  D109():
    deopt 448 [c73];
  L70():
    goto L71();
  L71():
    dir_exists = ldf `dir.exists`;
    check L507() else D113();
  L428(dx7):
    c37 = `is.object`(dx7);
    if c37 then L432() else L433(dx7);
  L429():
    dr6 = tryDispatchBuiltin.1("$", pkgInfo1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L431() else L430(dr6);
  L430(pkgInfo3):
    r166 = `$`(pkgInfo3, <sym DESCRIPTION>);
    goto L428(r166);
  L492():
    goto L66(r235);
  L495():
    goto L68();
  L500():
    p71 = prom<V +>{
      getOption2 = ldf getOption;
      r252 = dyn getOption2("checkPackageLicense", FALSE);
      return r252;
    };
    r254 = dyn isTRUE(p71);
    check L501() else D110();
  L503():
    checkLicense = ldf checkLicense;
    check L504() else D111();
  D110():
    deopt 450 [c73, r254];
  D111():
    deopt 453 [];
  D113():
    deopt 461 [];
  L49(dx11):
    st version = dx11;
    pkgInfo4 = ld pkgInfo;
    check L435() else D82();
  L431():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L428(dx6);
  L432():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L434() else L433(dr8);
  L433(dx9):
    __3 = ldf `[` in base;
    r167 = dyn __3(dx9, "Version");
    goto L49(r167);
  L501():
    c76 = `as.logical`(r254);
    c77 = `&&`(c73, c76);
    goto L69(c77);
  L504():
    p72 = prom<V +>{
      package45 = ld package;
      package46 = force? package45;
      checkMissing(package46);
      return package46;
    };
    p73 = prom<V +>{
      pkgInfo16 = ld pkgInfo;
      pkgInfo17 = force? pkgInfo16;
      checkMissing(pkgInfo17);
      return pkgInfo17;
    };
    p74 = prom<V +>{
      pkgpath14 = ld pkgpath;
      pkgpath15 = force? pkgpath14;
      checkMissing(pkgpath15);
      return pkgpath15;
    };
    r258 = dyn checkLicense(p72, p73, p74);
    check L505() else D112();
  L507():
    p76 = prom<V +>{
      file_path2 = ldf `file.path`;
      p75 = prom<V +>{
        pkgpath16 = ld pkgpath;
        pkgpath17 = force? pkgpath16;
        checkMissing(pkgpath17);
        return pkgpath17;
      };
      r261 = dyn file_path2(p75, "Meta");
      return r261;
    };
    r263 = dyn dir_exists(p76);
    check L508() else D114();
  D82():
    deopt 331 [pkgInfo4];
  D112():
    deopt 457 [r258];
  D114():
    deopt 463 [r263];
  L434():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L49(dx10);
  L435():
    pkgInfo5 = force? pkgInfo4;
    checkMissing(pkgInfo5);
    c38 = `is.object`(pkgInfo5);
    if c38 then L437() else L438(pkgInfo5);
  L505():
    goto L71();
  L508():
    c80 = `as.logical`(r263);
    if c80 then L509() else L72();
  L72():
    goto L87();
  L87():
    makeNamespace = ldf makeNamespace;
    check L558() else D133();
  L436(dx13):
    st vI = dx13;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L440() else L441();
  L437():
    dr10 = tryDispatchBuiltin.1("$", pkgInfo5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L439() else L438(dr10);
  L438(pkgInfo7):
    r168 = `$`(pkgInfo7, <sym Imports>);
    goto L436(r168);
  L509():
    file_path3 = ldf `file.path`;
    check L510() else D115();
  D115():
    deopt 465 [];
  D133():
    deopt 546 [];
  L50(r170):
    c41 = `as.logical`(r170);
    if c41 then L447() else L51();
  L439():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L436(dx12);
  L440():
    pkgInfo8 = ld pkgInfo;
    check L442() else D83();
  L441():
    r169 = dyn base17(<lang `<-`(built, `$`(pkgInfo, Built))>);
    goto L50(r169);
  L510():
    p77 = prom<V +>{
      pkgpath18 = ld pkgpath;
      pkgpath19 = force? pkgpath18;
      checkMissing(pkgpath19);
      return pkgpath19;
    };
    r265 = dyn file_path3(p77, "Meta", "features.rds");
    check L511() else D116();
  L558():
    p85 = prom<V +>{
      package49 = ld package;
      package50 = force? package49;
      checkMissing(package50);
      return package50;
    };
    p86 = prom<V +>{
      version4 = ld version;
      version5 = force? version4;
      checkMissing(version5);
      return version5;
    };
    p87 = prom<V +>{
      package_lib6 = ld `package.lib`;
      package_lib7 = force? package_lib6;
      checkMissing(package_lib7);
      return package_lib7;
    };
    r303 = dyn makeNamespace[, version, lib](p85, p86, p87);
    check L559() else D134();
  D83():
    deopt 336 [pkgInfo8];
  D116():
    deopt 469 [r265];
  D134():
    deopt 552 [r303];
  L51():
    goto L52();
  L52():
    as_numeric_version1 = ldf `as.numeric_version`;
    check L451() else D86();
  L442():
    pkgInfo9 = force? pkgInfo8;
    checkMissing(pkgInfo9);
    c39 = `is.object`(pkgInfo9);
    if c39 then L444() else L445(pkgInfo9);
  L447():
    stop5 = ldf stop;
    check L448() else D84();
  L511():
    st ffile = r265;
    file_exists2 = ldf `file.exists`;
    check L512() else D117();
  L559():
    st ns = r303;
    sym30 = ldf `on.exit`;
    base30 = ldf `on.exit` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L560() else L561();
  D84():
    deopt 342 [];
  D86():
    deopt 352 [];
  D117():
    deopt 472 [];
  L88():
    lev4 = ld lev;
    check L562() else D135();
  L443(dx15):
    st built = dx15;
    c40 = `==`(dx15, NULL);
    goto L50(c40);
  L444():
    dr12 = tryDispatchBuiltin.1("$", pkgInfo9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L446() else L445(dr12);
  L445(pkgInfo11):
    r171 = `$`(pkgInfo11, <sym Built>);
    goto L443(r171);
  L448():
    p51 = prom<V +>{
      gettextf1 = ldf gettextf;
      p50 = prom<V +>{
        sQuote3 = ldf sQuote;
        p49 = prom<V +>{
          package33 = ld package;
          package34 = force? package33;
          checkMissing(package34);
          return package34;
        };
        r173 = dyn sQuote3(p49);
        return r173;
      };
      r175 = dyn gettextf1("package %s has not been installed properly\n", p50);
      return r175;
    };
    r177 = dyn stop5[, `call.`, domain](p51, FALSE, NA_LGL);
    check L449() else D85();
  L451():
    p52 = prom<V +>{
      built = ld built;
      built1 = force? built;
      checkMissing(built1);
      c42 = `is.object`(built1);
      if c42 then L1() else L2(built1);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("$", built1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(built3):
      r179 = `$`(built3, <sym R>);
      goto L0(r179);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r181 = dyn as_numeric_version1(p52);
    check L452() else D87();
  L512():
    p78 = prom<V +>{
      ffile = ld ffile;
      ffile1 = force? ffile;
      checkMissing(ffile1);
      return ffile1;
    };
    r267 = dyn file_exists2(p78);
    check L513() else D118();
  L560():
    on_exit = ldf `on.exit` in base;
    r306 = dyn on_exit(<lang .Internal(unregisterNamespace(package))>);
    goto L88();
  L561():
    r304 = dyn base30(<lang .Internal(unregisterNamespace(package))>);
    goto L88();
  D85():
    deopt 348 [r177];
  D87():
    deopt 354 [r181];
  D118():
    deopt 474 [r267];
  D135():
    deopt 557 [lev4];
  L446():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L443(dx14);
  L449():
    goto L52();
  L452():
    st R_version_built_under = r181;
    R_version_built_under = ld R_version_built_under;
    check L453() else D88();
  L513():
    c81 = `as.logical`(r267);
    if c81 then L514() else L73();
  L562():
    lev5 = force? lev4;
    checkMissing(lev5);
    r307 = `>`(lev5, 1);
    c95 = `as.logical`(r307);
    if c95 then L563() else L89();
  D88():
    deopt 356 [R_version_built_under];
  L73():
    goto L74(NULL);
  L74(r270):
    st features = r270;
    sym26 = ldf `as.character`;
    base26 = ldf `as.character` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L518() else L519();
  L89():
    goto L90();
  L90():
    nsInfo = ld nsInfo;
    check L567() else D138();
  L453():
    R_version_built_under1 = force? R_version_built_under;
    checkMissing(R_version_built_under1);
    r182 = `<`(R_version_built_under1, "4.0.0");
    c43 = `as.logical`(r182);
    if c43 then L454() else L53();
  L514():
    readRDS2 = ldf readRDS;
    check L515() else D119();
  L563():
    message1 = ldf message;
    check L564() else D136();
  D119():
    deopt 476 [];
  D136():
    deopt 562 [];
  D138():
    deopt 568 [nsInfo];
  L53():
    goto L54();
  L54():
    _in_1 = ldf `%in%`;
    check L458() else D91();
  L75(r272):
    st needsComp = r272;
    sym27 = ldf identical;
    base27 = ldf identical in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L529() else L530();
  L454():
    stop6 = ldf stop;
    check L455() else D89();
  L515():
    p79 = prom<V +>{
      ffile2 = ld ffile;
      ffile3 = force? ffile2;
      checkMissing(ffile3);
      return ffile3;
    };
    r269 = dyn readRDS2(p79);
    check L516() else D120();
  L518():
    pkgInfo18 = ld pkgInfo;
    check L520() else D121();
  L519():
    r271 = dyn base26(<lang `[`(`$`(pkgInfo, DESCRIPTION), "NeedsCompilation")>);
    goto L75(r271);
  L564():
    p89 = prom<V +>{
      dQuote1 = ldf dQuote;
      p88 = prom<V +>{
        package51 = ld package;
        package52 = force? package51;
        checkMissing(package52);
        return package52;
      };
      r309 = dyn dQuote1(p88);
      return r309;
    };
    r311 = dyn message1("-- processing imports for ", p89);
    check L565() else D137();
  L567():
    nsInfo1 = force? nsInfo;
    checkMissing(nsInfo1);
    c96 = `is.object`(nsInfo1);
    if c96 then L569() else L570(nsInfo1);
  D89():
    deopt 361 [];
  D91():
    deopt 371 [];
  D120():
    deopt 478 [r269];
  D121():
    deopt 484 [pkgInfo18];
  D137():
    deopt 565 [r311];
  L77(r277):
    c84 = `as.logical`(r277);
    if c84 then L78(c84) else L533();
  L455():
    p55 = prom<V +>{
      gettextf2 = ldf gettextf;
      p54 = prom<V +>{
        sQuote4 = ldf sQuote;
        p53 = prom<V +>{
          package35 = ld package;
          package36 = force? package35;
          checkMissing(package36);
          return package36;
        };
        r184 = dyn sQuote4(p53);
        return r184;
      };
      r186 = dyn gettextf2("package %s was installed before R 4.0.0: please re-install it", p54);
      return r186;
    };
    r188 = dyn stop6[, `call.`, domain](p55, FALSE, NA_LGL);
    check L456() else D90();
  L458():
    p56 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L3() else L4();
    L0(r191):
      return r191;
    L3():
      sym19 = ldf names;
      base19 = ldf names in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L5() else L6();
    L4():
      r190 = dyn base18(<lang names(`$`(pkgInfo, Depends))>, <lang names(vI)>);
      goto L0(r190);
    L1(r193):
      sym20 = ldf names;
      base20 = ldf names in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L11() else L12();
    L5():
      pkgInfo12 = ld pkgInfo;
      pkgInfo13 = force? pkgInfo12;
      checkMissing(pkgInfo13);
      c44 = `is.object`(pkgInfo13);
      if c44 then L8() else L9(pkgInfo13);
    L6():
      r192 = dyn base19(<lang `$`(pkgInfo, Depends)>);
      goto L1(r192);
    L2(r197):
      c45 = ldf c in base;
      r199 = dyn c45(r193, r197);
      goto L0(r199);
    L7(dx19):
      names = ldf names in base;
      r195 = dyn names(dx19);
      goto L1(r195);
    L8():
      dr16 = tryDispatchBuiltin.1("$", pkgInfo13);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L10() else L9(dr16);
    L9(pkgInfo15):
      r194 = `$`(pkgInfo15, <sym Depends>);
      goto L7(r194);
    L11():
      vI = ld vI;
      vI1 = force? vI;
      checkMissing(vI1);
      names1 = ldf names in base;
      r198 = dyn names1(vI1);
      goto L2(r198);
    L12():
      r196 = dyn base20(<sym vI>);
      goto L2(r196);
    L10():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L7(dx18);
    };
    r201 = dyn _in_1("methods", p56);
    check L459() else D92();
  L516():
    goto L74(r269);
  L520():
    pkgInfo19 = force? pkgInfo18;
    checkMissing(pkgInfo19);
    c82 = `is.object`(pkgInfo19);
    if c82 then L522() else L523(pkgInfo19);
  L529():
    needsComp = ld needsComp;
    check L531() else D123();
  L530():
    r276 = dyn base27(<sym needsComp>, "yes");
    goto L77(r276);
  L565():
    goto L90();
  L568(dx33):
    s = toForSeq(dx33);
    l = length(s);
    i = 0;
    goto L91(i);
  L569():
    dr28 = tryDispatchBuiltin.1("$", nsInfo1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L571() else L570(dr28);
  L570(nsInfo3):
    r313 = `$`(nsInfo3, <sym imports>);
    goto L568(r313);
  D90():
    deopt 367 [r188];
  D92():
    deopt 374 [r201];
  D123():
    deopt 495 [needsComp];
  L78(c85):
    c90 = `as.logical`(c85);
    if c90 then L537() else L79();
  L91(i1):
    i2 = `+`.1(i1, 1);
    c97 = `<`.1(l, i2);
    if c97 then L572() else L97();
  L456():
    goto L54();
  L459():
    st dependsMethods = r201;
    dependsMethods = ld dependsMethods;
    check L460() else D93();
  L521(dx25):
    c83 = `is.object`(dx25);
    if c83 then L525() else L526(dx25);
  L522():
    dr22 = tryDispatchBuiltin.1("$", pkgInfo19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L524() else L523(dr22);
  L523(pkgInfo21):
    r273 = `$`(pkgInfo21, <sym DESCRIPTION>);
    goto L521(r273);
  L531():
    needsComp1 = force? needsComp;
    checkMissing(needsComp1);
    identical = ldf identical in base;
    r278 = dyn identical(needsComp1, "yes", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L532() else D124();
  L533():
    file_exists3 = ldf `file.exists`;
    check L534() else D125();
  L571():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L568(dx32);
  D93():
    deopt 376 [dependsMethods];
  D124():
    deopt 506 [r278];
  D125():
    deopt 508 [c84];
  L76(dx29):
    as_character1 = ldf `as.character` in base;
    r275 = dyn as_character1(dx29);
    check L528() else D122();
  L79():
    goto L86(NULL);
  L86(r298):
    goto L87();
  L97():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym31 = ldf `is.character`;
    base31 = ldf `is.character` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L573() else L574();
  L460():
    dependsMethods1 = force? dependsMethods;
    checkMissing(dependsMethods1);
    c46 = `as.logical`(dependsMethods1);
    if c46 then L461() else L55();
  L524():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L521(dx24);
  L525():
    dr24 = tryDispatchBuiltin.1("[", dx25);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L527() else L526(dr24);
  L526(dx27):
    __6 = ldf `[` in base;
    r274 = dyn __6(dx27, "NeedsCompilation");
    goto L76(r274);
  L532():
    goto L77(r278);
  L534():
    p81 = prom<V +>{
      file_path4 = ldf `file.path`;
      p80 = prom<V +>{
        pkgpath20 = ld pkgpath;
        pkgpath21 = force? pkgpath20;
        checkMissing(pkgpath21);
        return pkgpath21;
      };
      r280 = dyn file_path4(p80, "libs");
      return r280;
    };
    r282 = dyn file_exists3(p81);
    check L535() else D126();
  L537():
    features = ld features;
    check L538() else D127();
  L572():
    nsInfo4 = ld nsInfo;
    check L593() else D147();
  D122():
    deopt 491 [r275];
  D126():
    deopt 510 [c84, r282];
  D127():
    deopt 512 [features];
  D147():
    deopt 608 [nsInfo4];
  L55():
    goto L56();
  L56():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L465() else L466();
  L92(i7, r315):
    c99 = `as.logical`(r315);
    if c99 then L576() else L93();
  L461():
    loadNamespace = ldf loadNamespace;
    check L462() else D94();
  L527():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L76(dx28);
  L528():
    goto L75(r275);
  L535():
    c87 = `as.logical`(r282);
    c88 = `||`(c84, c87);
    goto L78(c88);
  L538():
    features1 = force? features;
    checkMissing(features1);
    c91 = `is.object`(features1);
    if c91 then L540() else L541(features1);
  L573():
    i8 = ld i;
    check L575() else D139();
  L574():
    r314 = dyn base31(<sym i>);
    goto L92(i2, r314);
  L593():
    nsInfo5 = force? nsInfo4;
    checkMissing(nsInfo5);
    c113 = `is.object`(nsInfo5);
    if c113 then L595() else L596(nsInfo5);
  D94():
    deopt 379 [];
  D139():
    deopt 572 [i2, i8];
  L57(r205):
    r207 = `!`(r205);
    c49 = `as.logical`(r207);
    if c49 then L471() else L59(c49);
  L93():
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L580() else L581();
  L94(i16):
    goto L91(i16);
  L462():
    r202 = dyn loadNamespace("methods");
    check L463() else D95();
  L465():
    versionCheck9 = ld versionCheck;
    check L467() else D96();
  L466():
    r204 = dyn base21(<lang `<-`(zop, `[[`(versionCheck, "op"))>);
    goto L57(r204);
  L539(dx31):
    st internalsID = dx31;
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L543() else L544();
  L540():
    dr26 = tryDispatchBuiltin.1("$", features1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L542() else L541(dr26);
  L541(features3):
    r283 = `$`(features3, <sym internalsID>);
    goto L539(r283);
  L575():
    i9 = force? i8;
    checkMissing(i9);
    c98 = `is.character`(i9);
    goto L92(i2, c98);
  L576():
    namespaceImport = ldf namespaceImport;
    check L577() else D140();
  L594(dx51):
    s1 = toForSeq(dx51);
    l1 = length(s1);
    i46 = 0;
    goto L98(i46);
  L595():
    dr46 = tryDispatchBuiltin.1("$", nsInfo5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L597() else L596(dr46);
  L596(nsInfo7):
    r366 = `$`(nsInfo7, <sym importClasses>);
    goto L594(r366);
  D95():
    deopt 381 [r202];
  D96():
    deopt 385 [versionCheck9];
  D140():
    deopt 576 [i7];
  L59(c51):
    c64 = `as.logical`(c51);
    if c64 then L479() else L62(c64);
  L80(r285):
    c93 = `as.logical`(r285);
    if c93 then L546() else L81();
  L95(i19, r331):
    r333 = `!`(r331);
    c104 = `as.logical`(r333);
    if c104 then L587() else L96();
  L98(i47):
    i48 = `+`.1(i47, 1);
    c114 = `<`.1(l1, i48);
    if c114 then L598() else L99();
  L463():
    goto L56();
  L467():
    versionCheck10 = force? versionCheck9;
    checkMissing(versionCheck10);
    c47 = `is.object`(versionCheck10);
    if c47 then L468() else L469(versionCheck10);
  L471():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L472() else L473();
  L542():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L539(dx30);
  L543():
    internalsID = ld internalsID;
    check L545() else D128();
  L544():
    r284 = dyn base28(<sym internalsID>);
    goto L80(r284);
  L577():
    p90 = prom<V +>{
      ns6 = ld ns;
      ns7 = force? ns6;
      checkMissing(ns7);
      return ns7;
    };
    p94 = prom<V +>{
      loadNamespace1 = ldf loadNamespace;
      p91 = prom<V +>{
        i12 = ld i;
        i13 = force? i12;
        checkMissing(i13);
        return i13;
      };
      p92 = prom<V +>{
        sym32 = ldf c;
        base32 = ldf c in base;
        guard32 = `==`.4(sym32, base32);
        if guard32 then L1() else L2();
      L0(r319):
        return r319;
      L1():
        lib_loc3 = ld `lib.loc`;
        lib_loc4 = force? lib_loc3;
        checkMissing(lib_loc4);
        _libPaths = ldf `.libPaths`;
        r320 = dyn _libPaths();
        c100 = ldf c in base;
        r321 = dyn c100(lib_loc4, r320);
        goto L0(r321);
      L2():
        r318 = dyn base32(<sym lib.loc>, <lang .libPaths()>);
        goto L0(r318);
      };
      p93 = prom<V +>{
        vI2 = ld vI;
        vI3 = force? vI2;
        checkMissing(vI3);
        c101 = `is.object`(vI3);
        if c101 then L1() else L2(vI3);
      L0(dx35):
        return dx35;
      L1():
        dr30 = tryDispatchBuiltin.1("[[", vI3);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(vI5):
        i14 = ld i;
        i15 = force? i14;
        __7 = ldf `[[` in base;
        r323 = dyn __7(vI5, i15);
        goto L0(r323);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx34);
      };
      r325 = dyn loadNamespace1[, , versionCheck](p91, p92, p93);
      return r325;
    };
    p95 = prom<V +>{
      package53 = ld package;
      package54 = force? package53;
      checkMissing(package54);
      return package54;
    };
    r328 = dyn namespaceImport[, , from](p90, p94, p95);
    check L578() else D141();
  L580():
    i20 = ld i;
    check L582() else D142();
  L581():
    r330 = dyn base33(<lang `$`(i, except)>);
    goto L95(i7, r330);
  L597():
    dx50 = getTryDispatchBuiltinValue(dr46);
    goto L594(dx50);
  D128():
    deopt 517 [internalsID];
  D141():
    deopt 581 [i7, r328];
  D142():
    deopt 583 [i7, i20];
  L58(dx21):
    st zop = dx21;
    c48 = `==`(dx21, NULL);
    goto L57(c48);
  L60(c54, r209):
    r211 = `!`(r209);
    c61 = `as.logical`(r211);
    c62 = `&&`(c54, c61);
    goto L59(c62);
  L62(c66):
    c70 = `as.logical`(c66);
    if c70 then L483() else L63();
  L81():
    goto L82();
  L82():
    internalsID2 = ld internalsID;
    check L548() else D129();
  L96():
    namespaceImportFrom = ldf namespaceImportFrom;
    check L591() else D145();
  L99():
    x1 = `[[`(s1, i48, NULL, TRUE);
    st imp = x1;
    namespaceImportClasses = ldf namespaceImportClasses;
    check L599() else D148();
  L468():
    dr18 = tryDispatchBuiltin.1("[[", versionCheck10);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L470() else L469(dr18);
  L469(versionCheck12):
    __4 = ldf `[[` in base;
    r206 = dyn __4(versionCheck12, "op");
    goto L58(r206);
  L472():
    versionCheck13 = ld versionCheck;
    check L474() else D97();
  L473():
    r208 = dyn base22(<lang `<-`(zversion, `[[`(versionCheck, "version"))>);
    goto L60(c49, r208);
  L479():
    do_call1 = ldf `do.call`;
    check L480() else D98();
  L545():
    internalsID1 = force? internalsID;
    checkMissing(internalsID1);
    c92 = `==`(internalsID1, NULL);
    goto L80(c92);
  L546():
    st internalsID = "0310d4b8-ccb1-4bb8-ba94-d36a55f60262";
    goto L82();
  L578():
    goto L94(i7);
  L582():
    i21 = force? i20;
    checkMissing(i21);
    c102 = `is.object`(i21);
    if c102 then L584() else L585(i7, i21);
  L587():
    namespaceImport1 = ldf namespaceImport;
    check L588() else D143();
  L598():
    nsInfo8 = ld nsInfo;
    check L601() else D150();
  D97():
    deopt 394 [c49, versionCheck13];
  D98():
    deopt 404 [c64];
  D129():
    deopt 525 [internalsID2];
  D143():
    deopt 589 [i19];
  D145():
    deopt 598 [i19];
  D148():
    deopt 612 [i48];
  D150():
    deopt 622 [nsInfo8];
  L63():
    goto L64(NULL);
  L64(r230):
    goto L65();
  L470():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L58(dx20);
  L474():
    versionCheck14 = force? versionCheck13;
    checkMissing(versionCheck14);
    c55 = `is.object`(versionCheck14);
    if c55 then L475() else L476(c49, versionCheck14);
  L480():
    p57 = prom<V +>{
      zop4 = ld zop;
      zop5 = force? zop4;
      checkMissing(zop5);
      return zop5;
    };
    p59 = prom<V +>{
      sym23 = ldf list;
      base23 = ldf list in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r214):
      return r214;
    L1():
      as_numeric_version2 = ldf `as.numeric_version`;
      p58 = prom<V +>{
        version = ld version;
        version1 = force? version;
        checkMissing(version1);
        return version1;
      };
      r216 = dyn as_numeric_version2(p58);
      zversion4 = ld zversion;
      zversion5 = force? zversion4;
      checkMissing(zversion5);
      list1 = ldf list in base;
      r217 = dyn list1(r216, zversion5);
      goto L0(r217);
    L2():
      r213 = dyn base23(<lang as.numeric_version(version)>, <sym zversion>);
      goto L0(r213);
    };
    r219 = dyn do_call1(p57, p59);
    check L481() else D99();
  L483():
    stop7 = ldf stop;
    check L484() else D100();
  L548():
    internalsID3 = force? internalsID2;
    checkMissing(internalsID3);
    sym29 = ldf `.Internal`;
    base29 = ldf `.Internal` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L549() else L550();
  L583(i27, dx37):
    c103 = `==`(dx37, NULL);
    goto L95(i27, c103);
  L584():
    dr32 = tryDispatchBuiltin.1("$", i21);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L586() else L585(i7, dr32);
  L585(i24, i25):
    r332 = `$`(i25, <sym except>);
    goto L583(i24, r332);
  L588():
    p96 = prom<V +>{
      ns8 = ld ns;
      ns9 = force? ns8;
      checkMissing(ns9);
      return ns9;
    };
    p100 = prom<V +>{
      loadNamespace2 = ldf loadNamespace;
      p97 = prom<V +>{
        i30 = ld i;
        i31 = force? i30;
        checkMissing(i31);
        c105 = `is.object`(i31);
        if c105 then L1() else L2(i31);
      L0(dx39):
        st j = dx39;
        invisible.0();
        return dx39;
      L1():
        dr34 = tryDispatchBuiltin.1("[[", i31);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L3() else L2(dr34);
      L2(i33):
        __8 = ldf `[[` in base;
        r335 = dyn __8(i33, 1);
        goto L0(r335);
      L3():
        dx38 = getTryDispatchBuiltinValue(dr34);
        goto L0(dx38);
      };
      p98 = prom<V +>{
        sym34 = ldf c;
        base34 = ldf c in base;
        guard34 = `==`.4(sym34, base34);
        if guard34 then L1() else L2();
      L0(r338):
        return r338;
      L1():
        lib_loc5 = ld `lib.loc`;
        lib_loc6 = force? lib_loc5;
        checkMissing(lib_loc6);
        _libPaths1 = ldf `.libPaths`;
        r339 = dyn _libPaths1();
        c106 = ldf c in base;
        r340 = dyn c106(lib_loc6, r339);
        goto L0(r340);
      L2():
        r337 = dyn base34(<sym lib.loc>, <lang .libPaths()>);
        goto L0(r337);
      };
      p99 = prom<V +>{
        vI6 = ld vI;
        vI7 = force? vI6;
        checkMissing(vI7);
        c107 = `is.object`(vI7);
        if c107 then L1() else L2(vI7);
      L0(dx41):
        return dx41;
      L1():
        dr36 = tryDispatchBuiltin.1("[[", vI7);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L3() else L2(dr36);
      L2(vI9):
        j = ld j;
        j1 = force? j;
        __9 = ldf `[[` in base;
        r342 = dyn __9(vI9, j1);
        goto L0(r342);
      L3():
        dx40 = getTryDispatchBuiltinValue(dr36);
        goto L0(dx40);
      };
      r344 = dyn loadNamespace2[, , versionCheck](p97, p98, p99);
      return r344;
    };
    p101 = prom<V +>{
      package55 = ld package;
      package56 = force? package55;
      checkMissing(package56);
      return package56;
    };
    p102 = prom<V +>{
      i34 = ld i;
      i35 = force? i34;
      checkMissing(i35);
      c108 = `is.object`(i35);
      if c108 then L1() else L2(i35);
    L0(dx43):
      return dx43;
    L1():
      dr38 = tryDispatchBuiltin.1("$", i35);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(i37):
      r347 = `$`(i37, <sym except>);
      goto L0(r347);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx42);
    };
    r349 = dyn namespaceImport1[, , from, except](p96, p100, p101, p102);
    check L589() else D144();
  L591():
    p103 = prom<V +>{
      ns10 = ld ns;
      ns11 = force? ns10;
      checkMissing(ns11);
      return ns11;
    };
    p107 = prom<V +>{
      loadNamespace3 = ldf loadNamespace;
      p104 = prom<V +>{
        i38 = ld i;
        i39 = force? i38;
        checkMissing(i39);
        c109 = `is.object`(i39);
        if c109 then L1() else L2(i39);
      L0(dx45):
        st j = dx45;
        invisible.0();
        return dx45;
      L1():
        dr40 = tryDispatchBuiltin.1("[[", i39);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L3() else L2(dr40);
      L2(i41):
        __10 = ldf `[[` in base;
        r351 = dyn __10(i41, 1);
        goto L0(r351);
      L3():
        dx44 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx44);
      };
      p105 = prom<V +>{
        sym35 = ldf c;
        base35 = ldf c in base;
        guard35 = `==`.4(sym35, base35);
        if guard35 then L1() else L2();
      L0(r354):
        return r354;
      L1():
        lib_loc7 = ld `lib.loc`;
        lib_loc8 = force? lib_loc7;
        checkMissing(lib_loc8);
        _libPaths2 = ldf `.libPaths`;
        r355 = dyn _libPaths2();
        c110 = ldf c in base;
        r356 = dyn c110(lib_loc8, r355);
        goto L0(r356);
      L2():
        r353 = dyn base35(<sym lib.loc>, <lang .libPaths()>);
        goto L0(r353);
      };
      p106 = prom<V +>{
        vI10 = ld vI;
        vI11 = force? vI10;
        checkMissing(vI11);
        c111 = `is.object`(vI11);
        if c111 then L1() else L2(vI11);
      L0(dx47):
        return dx47;
      L1():
        dr42 = tryDispatchBuiltin.1("[[", vI11);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L3() else L2(dr42);
      L2(vI13):
        j2 = ld j;
        j3 = force? j2;
        __11 = ldf `[[` in base;
        r358 = dyn __11(vI13, j3);
        goto L0(r358);
      L3():
        dx46 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx46);
      };
      r360 = dyn loadNamespace3[, , versionCheck](p104, p105, p106);
      return r360;
    };
    p108 = prom<V +>{
      i42 = ld i;
      i43 = force? i42;
      checkMissing(i43);
      c112 = `is.object`(i43);
      if c112 then L1() else L2(i43);
    L0(dx49):
      return dx49;
    L1():
      dr44 = tryDispatchBuiltin.1("[[", i43);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(i45):
      __12 = ldf `[[` in base;
      r362 = dyn __12(i45, 2);
      goto L0(r362);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx48);
    };
    p109 = prom<V +>{
      package57 = ld package;
      package58 = force? package57;
      checkMissing(package58);
      return package58;
    };
    r365 = dyn namespaceImportFrom[, , , from](p103, p107, p108, p109);
    check L592() else D146();
  L599():
    p110 = prom<V +>{
      ns12 = ld ns;
      ns13 = force? ns12;
      checkMissing(ns13);
      return ns13;
    };
    p114 = prom<V +>{
      loadNamespace4 = ldf loadNamespace;
      p111 = prom<V +>{
        imp = ld imp;
        imp1 = force? imp;
        checkMissing(imp1);
        c115 = `is.object`(imp1);
        if c115 then L1() else L2(imp1);
      L0(dx53):
        st j = dx53;
        invisible.0();
        return dx53;
      L1():
        dr48 = tryDispatchBuiltin.1("[[", imp1);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L3() else L2(dr48);
      L2(imp3):
        __13 = ldf `[[` in base;
        r368 = dyn __13(imp3, 1);
        goto L0(r368);
      L3():
        dx52 = getTryDispatchBuiltinValue(dr48);
        goto L0(dx52);
      };
      p112 = prom<V +>{
        sym36 = ldf c;
        base36 = ldf c in base;
        guard36 = `==`.4(sym36, base36);
        if guard36 then L1() else L2();
      L0(r371):
        return r371;
      L1():
        lib_loc9 = ld `lib.loc`;
        lib_loc10 = force? lib_loc9;
        checkMissing(lib_loc10);
        _libPaths3 = ldf `.libPaths`;
        r372 = dyn _libPaths3();
        c116 = ldf c in base;
        r373 = dyn c116(lib_loc10, r372);
        goto L0(r373);
      L2():
        r370 = dyn base36(<sym lib.loc>, <lang .libPaths()>);
        goto L0(r370);
      };
      p113 = prom<V +>{
        vI14 = ld vI;
        vI15 = force? vI14;
        checkMissing(vI15);
        c117 = `is.object`(vI15);
        if c117 then L1() else L2(vI15);
      L0(dx55):
        return dx55;
      L1():
        dr50 = tryDispatchBuiltin.1("[[", vI15);
        dc25 = getTryDispatchBuiltinDispatched(dr50);
        if dc25 then L3() else L2(dr50);
      L2(vI17):
        j4 = ld j;
        j5 = force? j4;
        __14 = ldf `[[` in base;
        r375 = dyn __14(vI17, j5);
        goto L0(r375);
      L3():
        dx54 = getTryDispatchBuiltinValue(dr50);
        goto L0(dx54);
      };
      r377 = dyn loadNamespace4[, , versionCheck](p111, p112, p113);
      return r377;
    };
    p115 = prom<V +>{
      imp4 = ld imp;
      imp5 = force? imp4;
      checkMissing(imp5);
      c118 = `is.object`(imp5);
      if c118 then L1() else L2(imp5);
    L0(dx57):
      return dx57;
    L1():
      dr52 = tryDispatchBuiltin.1("[[", imp5);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(imp7):
      __15 = ldf `[[` in base;
      r379 = dyn __15(imp7, 2);
      goto L0(r379);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx56);
    };
    p116 = prom<V +>{
      package59 = ld package;
      package60 = force? package59;
      checkMissing(package60);
      return package60;
    };
    r382 = dyn namespaceImportClasses[, , , from](p110, p114, p115, p116);
    check L600() else D149();
  L601():
    nsInfo9 = force? nsInfo8;
    checkMissing(nsInfo9);
    c119 = `is.object`(nsInfo9);
    if c119 then L603() else L604(nsInfo9);
  D99():
    deopt 407 [c64, r219];
  D100():
    deopt 411 [];
  D144():
    deopt 596 [i19, r349];
  D146():
    deopt 604 [i19, r365];
  D149():
    deopt 618 [i48, r382];
  L61(c59, dx23):
    st zversion = dx23;
    c60 = `==`(dx23, NULL);
    goto L60(c59, c60);
  L83(internalsID6, r288):
    r290 = `!=`(internalsID6, r288);
    c94 = `as.logical`(r290);
    if c94 then L552() else L84();
  L475():
    dr20 = tryDispatchBuiltin.1("[[", versionCheck14);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L477() else L476(c49, dr20);
  L476(c57, versionCheck16):
    __5 = ldf `[[` in base;
    r210 = dyn __5(versionCheck16, "version");
    goto L61(c57, r210);
  L481():
    r220 = `!`(r219);
    c67 = `as.logical`(r220);
    c68 = `&&`(c64, c67);
    goto L62(c68);
  L484():
    p65 = prom<V +>{
      gettextf3 = ldf gettextf;
      p61 = prom<V +>{
        sQuote5 = ldf sQuote;
        p60 = prom<V +>{
          package37 = ld package;
          package38 = force? package37;
          checkMissing(package38);
          return package38;
        };
        r222 = dyn sQuote5(p60);
        return r222;
      };
      p62 = prom<V +>{
        version2 = ld version;
        version3 = force? version2;
        checkMissing(version3);
        return version3;
      };
      p63 = prom<V +>{
        zop6 = ld zop;
        zop7 = force? zop6;
        checkMissing(zop7);
        return zop7;
      };
      p64 = prom<V +>{
        zversion6 = ld zversion;
        zversion7 = force? zversion6;
        checkMissing(zversion7);
        return zversion7;
      };
      r227 = dyn gettextf3("namespace %s %s is being loaded, but %s %s is required", p61, p62, p63, p64);
      return r227;
    };
    r229 = dyn stop7[, domain](p65, NA_LGL);
    check L485() else D101();
  L549():
    internalsID7 = ldf internalsID in base;
    r289 = dyn internalsID7();
    check L551() else D130();
  L550():
    r287 = dyn base29(<lang internalsID()>);
    goto L83(internalsID3, r287);
  L586():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L583(i7, dx36);
  L589():
    goto L94(i19);
  L592():
    goto L94(i19);
  L600():
    goto L98(i48);
  L602(dx59):
    s2 = toForSeq(dx59);
    l2 = length(s2);
    i51 = 0;
    goto L100(i51);
  L603():
    dr54 = tryDispatchBuiltin.1("$", nsInfo9);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L605() else L604(dr54);
  L604(nsInfo11):
    r383 = `$`(nsInfo11, <sym importMethods>);
    goto L602(r383);
  D101():
    deopt 415 [r229];
  D130():
    deopt 529 [internalsID3, r289];
  L84():
    goto L85(NULL);
  L85(r297):
    goto L86(r297);
  L100(i52):
    i53 = `+`.1(i52, 1);
    c120 = `<`.1(l2, i53);
    if c120 then L606() else L101();
  L477():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L61(c49, dx22);
  L485():
    goto L64(r229);
  L551():
    goto L83(internalsID3, r289);
  L552():
    stop8 = ldf stop;
    check L553() else D131();
  L605():
    dx58 = getTryDispatchBuiltinValue(dr54);
    goto L602(dx58);
  D131():
    deopt 532 [];
  L101():
    x2 = `[[`(s2, i53, NULL, TRUE);
    st imp = x2;
    namespaceImportMethods = ldf namespaceImportMethods;
    check L607() else D151();
  L553():
    p84 = prom<V +>{
      gettextf5 = ldf gettextf;
      p83 = prom<V +>{
        sQuote7 = ldf sQuote;
        p82 = prom<V +>{
          package47 = ld package;
          package48 = force? package47;
          checkMissing(package48);
          return package48;
        };
        r292 = dyn sQuote7(p82);
        return r292;
      };
      r294 = dyn gettextf5("package %s was installed by an R version with different internals; it needs to be reinstalled for use with this R version", p83);
      return r294;
    };
    r296 = dyn stop8[, `call.`, domain](p84, FALSE, NA_LGL);
    check L554() else D132();
  L606():
    lev6 = ld lev;
    check L609() else D153();
  D132():
    deopt 538 [r296];
  D151():
    deopt 626 [i53];
  D153():
    deopt 636 [lev6];
  L554():
    goto L85(r296);
  L607():
    p117 = prom<V +>{
      ns14 = ld ns;
      ns15 = force? ns14;
      checkMissing(ns15);
      return ns15;
    };
    p121 = prom<V +>{
      loadNamespace5 = ldf loadNamespace;
      p118 = prom<V +>{
        imp8 = ld imp;
        imp9 = force? imp8;
        checkMissing(imp9);
        c121 = `is.object`(imp9);
        if c121 then L1() else L2(imp9);
      L0(dx61):
        st j = dx61;
        invisible.0();
        return dx61;
      L1():
        dr56 = tryDispatchBuiltin.1("[[", imp9);
        dc28 = getTryDispatchBuiltinDispatched(dr56);
        if dc28 then L3() else L2(dr56);
      L2(imp11):
        __16 = ldf `[[` in base;
        r385 = dyn __16(imp11, 1);
        goto L0(r385);
      L3():
        dx60 = getTryDispatchBuiltinValue(dr56);
        goto L0(dx60);
      };
      p119 = prom<V +>{
        sym37 = ldf c;
        base37 = ldf c in base;
        guard37 = `==`.4(sym37, base37);
        if guard37 then L1() else L2();
      L0(r388):
        return r388;
      L1():
        lib_loc11 = ld `lib.loc`;
        lib_loc12 = force? lib_loc11;
        checkMissing(lib_loc12);
        _libPaths4 = ldf `.libPaths`;
        r389 = dyn _libPaths4();
        c122 = ldf c in base;
        r390 = dyn c122(lib_loc12, r389);
        goto L0(r390);
      L2():
        r387 = dyn base37(<sym lib.loc>, <lang .libPaths()>);
        goto L0(r387);
      };
      p120 = prom<V +>{
        vI18 = ld vI;
        vI19 = force? vI18;
        checkMissing(vI19);
        c123 = `is.object`(vI19);
        if c123 then L1() else L2(vI19);
      L0(dx63):
        return dx63;
      L1():
        dr58 = tryDispatchBuiltin.1("[[", vI19);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L3() else L2(dr58);
      L2(vI21):
        j6 = ld j;
        j7 = force? j6;
        __17 = ldf `[[` in base;
        r392 = dyn __17(vI21, j7);
        goto L0(r392);
      L3():
        dx62 = getTryDispatchBuiltinValue(dr58);
        goto L0(dx62);
      };
      r394 = dyn loadNamespace5[, , versionCheck](p118, p119, p120);
      return r394;
    };
    p122 = prom<V +>{
      imp12 = ld imp;
      imp13 = force? imp12;
      checkMissing(imp13);
      c124 = `is.object`(imp13);
      if c124 then L1() else L2(imp13);
    L0(dx65):
      return dx65;
    L1():
      dr60 = tryDispatchBuiltin.1("[[", imp13);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(imp15):
      __18 = ldf `[[` in base;
      r396 = dyn __18(imp15, 2);
      goto L0(r396);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx64);
    };
    p123 = prom<V +>{
      package61 = ld package;
      package62 = force? package61;
      checkMissing(package62);
      return package62;
    };
    r399 = dyn namespaceImportMethods[, , , from](p117, p121, p122, p123);
    check L608() else D152();
  L609():
    lev7 = force? lev6;
    checkMissing(lev7);
    r400 = `>`(lev7, 1);
    c125 = `as.logical`(r400);
    if c125 then L610() else L102();
  D152():
    deopt 632 [i53, r399];
  L102():
    goto L103();
  L103():
    sym38 = ldf list;
    base38 = ldf list in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L614() else L615();
  L608():
    goto L100(i53);
  L610():
    message2 = ldf message;
    check L611() else D154();
  D154():
    deopt 641 [];
  L104(r407):
    st __LoadingNamespaceInfo__ = r407;
    asNamespace = ldf asNamespace;
    check L619() else D159();
  L611():
    p125 = prom<V +>{
      dQuote2 = ldf dQuote;
      p124 = prom<V +>{
        package63 = ld package;
        package64 = force? package63;
        checkMissing(package64);
        return package64;
      };
      r402 = dyn dQuote2(p124);
      return r402;
    };
    r404 = dyn message2("-- done processing imports for ", p125);
    check L612() else D155();
  L614():
    package_lib8 = ld `package.lib`;
    check L616() else D156();
  L615():
    r406 = dyn base38[libname, pkgname](<sym package.lib>, <sym package>);
    goto L104(r406);
  D155():
    deopt 644 [r404];
  D156():
    deopt 649 [package_lib8];
  D159():
    deopt 659 [];
  L612():
    goto L103();
  L616():
    package_lib9 = force? package_lib8;
    checkMissing(package_lib9);
    package65 = ld package;
    check L617() else D157();
  L619():
    p126 = prom<V +>{
      ns16 = ld ns;
      ns17 = force? ns16;
      checkMissing(ns17);
      return ns17;
    };
    r410 = dyn asNamespace(p126);
    check L620() else D160();
  D157():
    deopt 652 [package65];
  D160():
    deopt 661 [r410];
  L617():
    package66 = force? package65;
    checkMissing(package66);
    list2 = ldf list in base;
    r408 = dyn list2(package_lib9, package66);
    check L618() else D158();
  L620():
    st env = r410;
    package67 = ld package;
    check L621() else D161();
  D158():
    deopt 656 [r408];
  D161():
    deopt 663 [package67];
  L618():
    goto L104(r408);
  L621():
    package68 = force? package67;
    checkMissing(package68);
    l3 = ld env;
    c126 = `is.object`(l3);
    if c126 then L623() else L624(package68, l3);
  L622(dx67):
    st env = dx67;
    strsplit = ldf strsplit;
    check L626() else D162();
  L623():
    dr62 = tryDispatchBuiltin.0("$<-", l3, package68);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L625() else L624(package68, dr62);
  L624(package70, l5):
    r411 = `$<-`(l5, <sym .packageName>, package68);
    goto L622(r411);
  D162():
    deopt 669 [];
  L625():
    dx66 = getTryDispatchBuiltinValue(dr62);
    goto L622(dx66);
  L626():
    p127 = prom<V +>{
      package73 = ld package;
      package74 = force? package73;
      checkMissing(package74);
      return package74;
    };
    r413 = dyn strsplit[, , fixed](p127, "_", TRUE);
    check L627() else D163();
  D163():
    deopt 674 [r413];
  L627():
    c127 = `is.object`(r413);
    if c127 then L628() else L629(r413);
  L105(dx69):
    c128 = `is.object`(dx69);
    if c128 then L631() else L632(dx69);
  L628():
    dr64 = tryDispatchBuiltin.1("[[", r413);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L630() else L629(dr64);
  L629(r415):
    __19 = ldf `[[` in base;
    r416 = dyn __19(r415, 1);
    goto L105(r416);
  L106(dx73):
    st codename = dx73;
    file_path5 = ldf `file.path`;
    check L634() else D164();
  L630():
    dx68 = getTryDispatchBuiltinValue(dr64);
    goto L105(dx68);
  L631():
    dr66 = tryDispatchBuiltin.1("[", dx69);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L633() else L632(dr66);
  L632(dx71):
    __20 = ldf `[` in base;
    r417 = dyn __20(dx71, 1);
    goto L106(r417);
  D164():
    deopt 683 [];
  L633():
    dx72 = getTryDispatchBuiltinValue(dr66);
    goto L106(dx72);
  L634():
    p128 = prom<V +>{
      pkgpath22 = ld pkgpath;
      pkgpath23 = force? pkgpath22;
      checkMissing(pkgpath23);
      return pkgpath23;
    };
    p129 = prom<V +>{
      codename = ld codename;
      codename1 = force? codename;
      checkMissing(codename1);
      return codename1;
    };
    r420 = dyn file_path5(p128, "R", p129);
    check L635() else D165();
  D165():
    deopt 687 [r420];
  L635():
    st codeFile = r420;
    file_exists4 = ldf `file.exists`;
    check L636() else D166();
  D166():
    deopt 690 [];
  L636():
    p130 = prom<V +>{
      codeFile = ld codeFile;
      codeFile1 = force? codeFile;
      checkMissing(codeFile1);
      return codeFile1;
    };
    r422 = dyn file_exists4(p130);
    check L637() else D167();
  D167():
    deopt 692 [r422];
  L637():
    c129 = `as.logical`(r422);
    if c129 then L638() else L107();
  L107():
    goto L115();
  L115():
    partial1 = ld partial;
    check L664() else D184();
  L638():
    lev8 = ld lev;
    check L639() else D168();
  D168():
    deopt 693 [lev8];
  D184():
    deopt 750 [partial1];
  L639():
    lev9 = force? lev8;
    checkMissing(lev9);
    r423 = `>`(lev9, 1);
    c130 = `as.logical`(r423);
    if c130 then L640() else L108();
  L664():
    partial2 = force? partial1;
    checkMissing(partial2);
    c133 = `as.logical`(partial2);
    if c133 then L665() else L116();
  L108():
    goto L109();
  L109():
    options = ldf options;
    check L644() else D171();
  L116():
    file_path6 = ldf `file.path`;
    check L669() else D186();
  L640():
    message3 = ldf message;
    check L641() else D169();
  L665():
    ns18 = ld ns;
    check L666() else D185();
  D169():
    deopt 698 [];
  D171():
    deopt 705 [];
  D185():
    deopt 752 [ns18];
  D186():
    deopt 758 [];
  L641():
    p132 = prom<V +>{
      dQuote3 = ldf dQuote;
      p131 = prom<V +>{
        package75 = ld package;
        package76 = force? package75;
        checkMissing(package76);
        return package76;
      };
      r425 = dyn dQuote3(p131);
      return r425;
    };
    r427 = dyn message3("-- loading code for ", p132);
    check L642() else D170();
  L644():
    r429 = dyn options[encoding]("native.enc");
    check L645() else D172();
  L666():
    ns19 = force? ns18;
    checkMissing(ns19);
    popenv;
    return ns19;
  L669():
    p144 = prom<V +>{
      pkgpath24 = ld pkgpath;
      pkgpath25 = force? pkgpath24;
      checkMissing(pkgpath25);
      return pkgpath25;
    };
    r459 = dyn file_path6(p144, "R", "sysdata");
    check L670() else D187();
  D170():
    deopt 701 [r427];
  D172():
    deopt 708 [r429];
  D187():
    deopt 762 [r459];
  L642():
    goto L109();
  L645():
    st `save.enc` = r429;
    try = ldf try;
    check L646() else D173();
  L670():
    st dbbase = r459;
    file_exists5 = ldf `file.exists`;
    check L671() else D188();
  D173():
    deopt 711 [];
  D188():
    deopt 765 [];
  L646():
    p137 = prom<V +>{
      sys_source = ldf `sys.source`;
      p133 = prom<V +>{
        codeFile2 = ld codeFile;
        codeFile3 = force? codeFile2;
        checkMissing(codeFile3);
        return codeFile3;
      };
      p134 = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      p135 = prom<V +>{
        keep_source1 = ld `keep.source`;
        keep_source2 = force? keep_source1;
        checkMissing(keep_source2);
        return keep_source2;
      };
      p136 = prom<V +>{
        keep_parse_data1 = ld `keep.parse.data`;
        keep_parse_data2 = force? keep_parse_data1;
        checkMissing(keep_parse_data2);
        return keep_parse_data2;
      };
      r434 = dyn sys_source[, , `keep.source`, `keep.parse.data`](p133, p134, p135, p136);
      return r434;
    };
    r436 = dyn try(p137);
    check L647() else D174();
  L671():
    p146 = prom<V +>{
      paste1 = ldf paste0;
      p145 = prom<V +>{
        dbbase = ld dbbase;
        dbbase1 = force? dbbase;
        checkMissing(dbbase1);
        return dbbase1;
      };
      r461 = dyn paste1(p145, ".rdb");
      return r461;
    };
    r463 = dyn file_exists5(p146);
    check L672() else D189();
  D174():
    deopt 713 [r436];
  D189():
    deopt 767 [r463];
  L647():
    st res = r436;
    options1 = ldf options;
    check L648() else D175();
  L672():
    c134 = `as.logical`(r463);
    if c134 then L673() else L118();
  D175():
    deopt 716 [];
  L118():
    goto L121();
  L121():
    file_path7 = ldf `file.path`;
    check L682() else D195();
  L648():
    p138 = prom<V +>{
      save_enc = ld `save.enc`;
      save_enc1 = force? save_enc;
      checkMissing(save_enc1);
      return save_enc1;
    };
    r438 = dyn options1(p138);
    check L649() else D176();
  L673():
    lev12 = ld lev;
    check L674() else D190();
  D176():
    deopt 718 [r438];
  D190():
    deopt 768 [lev12];
  D195():
    deopt 787 [];
  L649():
    sym39 = ldf inherits;
    base39 = ldf inherits in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L650() else L651();
  L674():
    lev13 = force? lev12;
    checkMissing(lev13);
    r464 = `>`(lev13, 1);
    c135 = `as.logical`(r464);
    if c135 then L675() else L119();
  L682():
    p151 = prom<V +>{
      pkgpath26 = ld pkgpath;
      pkgpath27 = force? pkgpath26;
      checkMissing(pkgpath27);
      return pkgpath27;
    };
    r475 = dyn file_path7(p151, "data", "Rdata");
    check L683() else D196();
  D196():
    deopt 791 [r475];
  L110(r440):
    c131 = `as.logical`(r440);
    if c131 then L654() else L111();
  L119():
    goto L120();
  L120():
    lazyLoad = ldf lazyLoad;
    check L679() else D193();
  L650():
    res = ld res;
    check L652() else D177();
  L651():
    r439 = dyn base39(<sym res>, "try-error");
    goto L110(r439);
  L675():
    message5 = ldf message;
    check L676() else D191();
  L683():
    st dbbase = r475;
    file_exists6 = ldf `file.exists`;
    check L684() else D197();
  D177():
    deopt 721 [res];
  D191():
    deopt 773 [];
  D193():
    deopt 780 [];
  D197():
    deopt 794 [];
  L111():
    goto L112();
  L112():
    lev10 = ld lev;
    check L658() else D181();
  L652():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r441 = dyn inherits(res1, "try-error", FALSE);
    check L653() else D178();
  L654():
    stop9 = ldf stop;
    check L655() else D179();
  L676():
    p148 = prom<V +>{
      dQuote5 = ldf dQuote;
      p147 = prom<V +>{
        package81 = ld package;
        package82 = force? package81;
        checkMissing(package82);
        return package82;
      };
      r466 = dyn dQuote5(p147);
      return r466;
    };
    r468 = dyn message5("-- loading sysdata for ", p148);
    check L677() else D192();
  L679():
    p149 = prom<V +>{
      dbbase2 = ld dbbase;
      dbbase3 = force? dbbase2;
      checkMissing(dbbase3);
      return dbbase3;
    };
    p150 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r472 = dyn lazyLoad(p149, p150);
    check L680() else D194();
  L684():
    p153 = prom<V +>{
      paste2 = ldf paste0;
      p152 = prom<V +>{
        dbbase4 = ld dbbase;
        dbbase5 = force? dbbase4;
        checkMissing(dbbase5);
        return dbbase5;
      };
      r477 = dyn paste2(p152, ".rdb");
      return r477;
    };
    r479 = dyn file_exists6(p153);
    check L685() else D198();
  D178():
    deopt 726 [r441];
  D179():
    deopt 728 [];
  D181():
    deopt 737 [lev10];
  D192():
    deopt 776 [r468];
  D194():
    deopt 783 [r472];
  D198():
    deopt 796 [r479];
  L653():
    goto L110(r441);
  L655():
    p141 = prom<V +>{
      gettextf6 = ldf gettextf;
      p140 = prom<V +>{
        sQuote8 = ldf sQuote;
        p139 = prom<V +>{
          package77 = ld package;
          package78 = force? package77;
          checkMissing(package78);
          return package78;
        };
        r443 = dyn sQuote8(p139);
        return r443;
      };
      r445 = dyn gettextf6("unable to load R code in package %s", p140);
      return r445;
    };
    r447 = dyn stop9[, `call.`, domain](p141, FALSE, NA_LGL);
    check L656() else D180();
  L658():
    lev11 = force? lev10;
    checkMissing(lev11);
    r449 = `>`(lev11, 1);
    c132 = `as.logical`(r449);
    if c132 then L659() else L113();
  L677():
    goto L120();
  L680():
    goto L121();
  L685():
    c136 = `as.logical`(r479);
    if c136 then L686() else L122();
  D180():
    deopt 734 [r447];
  L113():
    goto L114(NULL);
  L114(r454):
    goto L115();
  L122():
    goto L125();
  L125():
    lev16 = ld lev;
    check L695() else D204();
  L656():
    goto L112();
  L659():
    message4 = ldf message;
    check L660() else D182();
  L686():
    lev14 = ld lev;
    check L687() else D199();
  D182():
    deopt 742 [];
  D199():
    deopt 797 [lev14];
  D204():
    deopt 815 [lev16];
  L660():
    p143 = prom<V +>{
      dQuote4 = ldf dQuote;
      p142 = prom<V +>{
        package79 = ld package;
        package80 = force? package79;
        checkMissing(package80);
        return package80;
      };
      r451 = dyn dQuote4(p142);
      return r451;
    };
    r453 = dyn message4("-- loading code for ", p143);
    check L661() else D183();
  L687():
    lev15 = force? lev14;
    checkMissing(lev15);
    r480 = `>`(lev15, 1);
    c137 = `as.logical`(r480);
    if c137 then L688() else L123();
  L695():
    lev17 = force? lev16;
    checkMissing(lev17);
    r492 = `>`(lev17, 1);
    c138 = `as.logical`(r492);
    if c138 then L696() else L126();
  D183():
    deopt 745 [r453];
  L123():
    goto L124();
  L124():
    lazyLoad1 = ldf lazyLoad;
    check L692() else D202();
  L126():
    goto L127();
  L127():
    registerS3methods = ldf registerS3methods;
    check L700() else D207();
  L661():
    goto L114(r453);
  L688():
    message6 = ldf message;
    check L689() else D200();
  L696():
    message7 = ldf message;
    check L697() else D205();
  D200():
    deopt 802 [];
  D202():
    deopt 809 [];
  D205():
    deopt 820 [];
  D207():
    deopt 827 [];
  L689():
    p155 = prom<V +>{
      dQuote6 = ldf dQuote;
      p154 = prom<V +>{
        package83 = ld package;
        package84 = force? package83;
        checkMissing(package84);
        return package84;
      };
      r482 = dyn dQuote6(p154);
      return r482;
    };
    r484 = dyn message6("-- loading lazydata for ", p155);
    check L690() else D201();
  L692():
    p156 = prom<V +>{
      dbbase6 = ld dbbase;
      dbbase7 = force? dbbase6;
      checkMissing(dbbase7);
      return dbbase7;
    };
    p158 = prom<V +>{
      _getNamespaceInfo = ldf `.getNamespaceInfo`;
      p157 = prom<V +>{
        env4 = ld env;
        env5 = force? env4;
        checkMissing(env5);
        return env5;
      };
      r488 = dyn _getNamespaceInfo(p157, "lazydata");
      return r488;
    };
    r490 = dyn lazyLoad1(p156, p158);
    check L693() else D203();
  L697():
    p160 = prom<V +>{
      dQuote7 = ldf dQuote;
      p159 = prom<V +>{
        package85 = ld package;
        package86 = force? package85;
        checkMissing(package86);
        return package86;
      };
      r494 = dyn dQuote7(p159);
      return r494;
    };
    r496 = dyn message7("-- registerS3methods for ", p160);
    check L698() else D206();
  L700():
    p161 = prom<V +>{
      nsInfo12 = ld nsInfo;
      nsInfo13 = force? nsInfo12;
      checkMissing(nsInfo13);
      c139 = `is.object`(nsInfo13);
      if c139 then L1() else L2(nsInfo13);
    L0(dx75):
      return dx75;
    L1():
      dr68 = tryDispatchBuiltin.1("$", nsInfo13);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(nsInfo15):
      r498 = `$`(nsInfo15, <sym S3methods>);
      goto L0(r498);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx74);
    };
    p162 = prom<V +>{
      package87 = ld package;
      package88 = force? package87;
      checkMissing(package88);
      return package88;
    };
    p163 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r502 = dyn registerS3methods(p161, p162, p163);
    check L701() else D208();
  D201():
    deopt 805 [r484];
  D203():
    deopt 812 [r490];
  D206():
    deopt 823 [r496];
  D208():
    deopt 831 [r502];
  L690():
    goto L124();
  L693():
    goto L125();
  L698():
    goto L127();
  L701():
    lev18 = ld lev;
    check L702() else D209();
  D209():
    deopt 832 [lev18];
  L702():
    lev19 = force? lev18;
    checkMissing(lev19);
    r503 = `>`(lev19, 1);
    c140 = `as.logical`(r503);
    if c140 then L703() else L128();
  L128():
    goto L129();
  L129():
    sym40 = ldf list;
    base40 = ldf list in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L707() else L708();
  L703():
    message8 = ldf message;
    check L704() else D210();
  D210():
    deopt 837 [];
  L130(r510):
    st dlls = r510;
    nsInfo16 = ld nsInfo;
    check L710() else D213();
  L704():
    p165 = prom<V +>{
      dQuote8 = ldf dQuote;
      p164 = prom<V +>{
        package89 = ld package;
        package90 = force? package89;
        checkMissing(package90);
        return package90;
      };
      r505 = dyn dQuote8(p164);
      return r505;
    };
    r507 = dyn message8("-- done registerS3methods for ", p165);
    check L705() else D211();
  L707():
    list3 = ldf list in base;
    r511 = dyn list3();
    check L709() else D212();
  L708():
    r509 = dyn base40();
    goto L130(r509);
  D211():
    deopt 840 [r507];
  D212():
    deopt 846 [r511];
  D213():
    deopt 848 [nsInfo16];
  L705():
    goto L129();
  L709():
    goto L130(r511);
  L710():
    nsInfo17 = force? nsInfo16;
    checkMissing(nsInfo17);
    c141 = `is.object`(nsInfo17);
    if c141 then L712() else L713(nsInfo17);
  L711(dx77):
    st dynLibs = dx77;
    sym41 = ldf list;
    base41 = ldf list in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L715() else L716();
  L712():
    dr70 = tryDispatchBuiltin.1("$", nsInfo17);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L714() else L713(dr70);
  L713(nsInfo19):
    r512 = `$`(nsInfo19, <sym dynlibs>);
    goto L711(r512);
  L131(r514):
    st nativeRoutines = r514;
    sym42 = ldf seq_along;
    base42 = ldf seq_along in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L718() else L719();
  L714():
    dx76 = getTryDispatchBuiltinValue(dr70);
    goto L711(dx76);
  L715():
    list4 = ldf list in base;
    r515 = dyn list4();
    check L717() else D214();
  L716():
    r513 = dyn base41();
    goto L131(r513);
  D214():
    deopt 855 [r515];
  L132(r517):
    s3 = toForSeq(r517);
    l6 = length(s3);
    i56 = 0;
    goto L133(i56);
  L717():
    goto L131(r515);
  L718():
    dynLibs = ld dynLibs;
    check L720() else D215();
  L719():
    r516 = dyn base42(<sym dynLibs>);
    goto L132(r516);
  D215():
    deopt 858 [dynLibs];
  L133(i57):
    i58 = `+`.1(i57, 1);
    c142 = `<`.1(l6, i58);
    if c142 then L721() else L149();
  L720():
    dynLibs1 = force? dynLibs;
    checkMissing(dynLibs1);
    r518 = seq_along(dynLibs1);
    goto L132(r518);
  L149():
    x3 = `[[`(s3, i58, NULL, TRUE);
    st i = x3;
    dynLibs2 = ld dynLibs;
    check L722() else D216();
  L721():
    addNamespaceDynLibs = ldf addNamespaceDynLibs;
    check L791() else D238();
  D216():
    deopt 861 [i58, dynLibs2];
  D238():
    deopt 948 [];
  L722():
    dynLibs3 = force? dynLibs2;
    checkMissing(dynLibs3);
    c143 = `is.object`(dynLibs3);
    if c143 then L723() else L724(i58, dynLibs3);
  L791():
    p175 = prom<V +>{
      env12 = ld env;
      env13 = force? env12;
      checkMissing(env13);
      return env13;
    };
    p176 = prom<V +>{
      nsInfo36 = ld nsInfo;
      nsInfo37 = force? nsInfo36;
      checkMissing(nsInfo37);
      c178 = `is.object`(nsInfo37);
      if c178 then L1() else L2(nsInfo37);
    L0(dx134):
      return dx134;
    L1():
      dr98 = tryDispatchBuiltin.1("$", nsInfo37);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(nsInfo39):
      r568 = `$`(nsInfo39, <sym dynlibs>);
      goto L0(r568);
    L3():
      dx133 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx133);
    };
    r570 = dyn addNamespaceDynLibs(p175, p176);
    check L792() else D239();
  D239():
    deopt 951 [r570];
  L134(i64, dx79):
    st lib = dx79;
    library_dynam = ldf `library.dynam`;
    check L727() else D218();
  L723():
    dr72 = tryDispatchBuiltin.1("[", dynLibs3);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L725() else L724(i58, dr72);
  L724(i62, dynLibs5):
    i65 = ld i;
    check L726() else D217();
  L792():
    setNamespaceInfo1 = ldf setNamespaceInfo;
    check L793() else D240();
  D217():
    deopt 863 [i62, dynLibs5, i65];
  D218():
    deopt 868 [i64];
  D240():
    deopt 953 [];
  L725():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L134(i58, dx78);
  L726():
    i66 = force? i65;
    __21 = ldf `[` in base;
    r519 = dyn __21(dynLibs5, i66);
    goto L134(i62, r519);
  L727():
    p166 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    p167 = prom<V +>{
      package91 = ld package;
      package92 = force? package91;
      checkMissing(package92);
      return package92;
    };
    p168 = prom<V +>{
      package_lib10 = ld `package.lib`;
      package_lib11 = force? package_lib10;
      checkMissing(package_lib11);
      return package_lib11;
    };
    r523 = dyn library_dynam(p166, p167, p168);
    check L728() else D219();
  L793():
    p177 = prom<V +>{
      env14 = ld env;
      env15 = force? env14;
      checkMissing(env15);
      return env15;
    };
    p178 = prom<V +>{
      nativeRoutines = ld nativeRoutines;
      nativeRoutines1 = force? nativeRoutines;
      checkMissing(nativeRoutines1);
      return nativeRoutines1;
    };
    r573 = dyn setNamespaceInfo1(p177, "nativeRoutines", p178);
    check L794() else D241();
  D219():
    deopt 872 [i64, r523];
  D241():
    deopt 957 [r573];
  L728():
    l7 = ld dlls;
    c144 = `is.object`(l7);
    if c144 then L729() else L730(i64, r523, l7);
  L794():
    Sys_setenv = ldf `Sys.setenv`;
    check L795() else D242();
  D242():
    deopt 959 [];
  L135(i70, dx81):
    st dlls = dx81;
    assignNativeRoutines = ldf assignNativeRoutines;
    check L733() else D221();
  L729():
    dr74 = tryDispatchBuiltin.0("[[<-", l7, r523);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L731() else L730(i64, r523, dr74);
  L730(i68, r525, l9):
    lib2 = ld lib;
    check L732() else D220();
  L795():
    p179 = prom<V +>{
      package93 = ld package;
      package94 = force? package93;
      checkMissing(package94);
      return package94;
    };
    r575 = dyn Sys_setenv[_R_NS_LOAD_](p179);
    check L796() else D243();
  D220():
    deopt 874 [i68, r525, l9, r523, lib2];
  D221():
    deopt 879 [i70];
  D243():
    deopt 962 [r575];
  L731():
    dx80 = getTryDispatchBuiltinValue(dr74);
    goto L135(i64, dx80);
  L732():
    lib3 = force? lib2;
    ____ = ldf `[[<-` in base;
    r528 = dyn ____(l9, r523, lib3);
    goto L135(i68, r528);
  L733():
    p169 = prom<V +>{
      dlls = ld dlls;
      dlls1 = force? dlls;
      checkMissing(dlls1);
      c145 = `is.object`(dlls1);
      if c145 then L1() else L2(dlls1);
    L0(dx83):
      return dx83;
    L1():
      dr76 = tryDispatchBuiltin.1("[[", dlls1);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(dlls3):
      lib4 = ld lib;
      lib5 = force? lib4;
      __22 = ldf `[[` in base;
      r529 = dyn __22(dlls3, lib5);
      goto L0(r529);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx82);
    };
    p170 = prom<V +>{
      lib6 = ld lib;
      lib7 = force? lib6;
      checkMissing(lib7);
      return lib7;
    };
    p171 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    p172 = prom<V +>{
      nsInfo20 = ld nsInfo;
      nsInfo21 = force? nsInfo20;
      checkMissing(nsInfo21);
      c146 = `is.object`(nsInfo21);
      if c146 then L2() else L3(nsInfo21);
    L1(dx85):
      c147 = `is.object`(dx85);
      if c147 then L5() else L6(dx85);
    L2():
      dr78 = tryDispatchBuiltin.1("$", nsInfo21);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L4() else L3(dr78);
    L3(nsInfo23):
      r533 = `$`(nsInfo23, <sym nativeRoutines>);
      goto L1(r533);
    L0(dx89):
      return dx89;
    L4():
      dx84 = getTryDispatchBuiltinValue(dr78);
      goto L1(dx84);
    L5():
      dr80 = tryDispatchBuiltin.1("[[", dx85);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L7() else L6(dr80);
    L6(dx87):
      lib8 = ld lib;
      lib9 = force? lib8;
      __23 = ldf `[[` in base;
      r534 = dyn __23(dx87, lib9);
      goto L0(r534);
    L7():
      dx88 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx88);
    };
    r536 = dyn assignNativeRoutines(p169, p170, p171, p172);
    check L734() else D222();
  L796():
    sym48 = ldf `on.exit`;
    base48 = ldf `on.exit` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L797() else L798();
  D222():
    deopt 884 [i70, r536];
  L150():
    lev20 = ld lev;
    check L799() else D244();
  L734():
    st routines = r536;
    routines = ld routines;
    check L735() else D223();
  L797():
    on_exit1 = ldf `on.exit` in base;
    r578 = dyn on_exit1(<lang Sys.unsetenv("_R_NS_LOAD_")>, TRUE);
    goto L150();
  L798():
    r576 = dyn base48[, add](<lang Sys.unsetenv("_R_NS_LOAD_")>, TRUE);
    goto L150();
  D223():
    deopt 886 [i70, routines];
  D244():
    deopt 966 [lev20];
  L735():
    routines1 = force? routines;
    checkMissing(routines1);
    l10 = ld nativeRoutines;
    c148 = `is.object`(l10);
    if c148 then L736() else L737(i70, routines1, l10);
  L799():
    lev21 = force? lev20;
    checkMissing(lev21);
    r579 = `>`(lev21, 1);
    c179 = `as.logical`(r579);
    if c179 then L800() else L151();
  L136(i74, dx91):
    st nativeRoutines = dx91;
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L740() else L741();
  L151():
    goto L152();
  L152():
    runHook = ldf runHook;
    check L804() else D247();
  L736():
    dr82 = tryDispatchBuiltin.0("[[<-", l10, routines1);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L738() else L737(i70, routines1, dr82);
  L737(i72, routines3, l12):
    lib10 = ld lib;
    check L739() else D224();
  L800():
    message9 = ldf message;
    check L801() else D245();
  D224():
    deopt 889 [i72, routines3, l12, routines1, lib10];
  D245():
    deopt 971 [];
  D247():
    deopt 978 [];
  L137(i77, r539):
    r544 = `!`(r539);
    c151 = `as.logical`(r544);
    if c151 then L750() else L139(i77, c151);
  L738():
    dx90 = getTryDispatchBuiltinValue(dr82);
    goto L136(i70, dx90);
  L739():
    lib11 = force? lib10;
    ____1 = ldf `[[<-` in base;
    r537 = dyn ____1(l12, routines1, lib11);
    goto L136(i72, r537);
  L740():
    sym44 = ldf names;
    base44 = ldf names in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L742() else L743();
  L741():
    r538 = dyn base43(<lang names(`$`(nsInfo, dynlibs))>);
    goto L137(i74, r538);
  L801():
    p181 = prom<V +>{
      dQuote9 = ldf dQuote;
      p180 = prom<V +>{
        package95 = ld package;
        package96 = force? package95;
        checkMissing(package96);
        return package96;
      };
      r581 = dyn dQuote9(p180);
      return r581;
    };
    r583 = dyn message9("-- running .onLoad for ", p181);
    check L802() else D246();
  L804():
    p182 = prom<V +>{
      env16 = ld env;
      env17 = force? env16;
      checkMissing(env17);
      return env17;
    };
    p183 = prom<V +>{
      package_lib12 = ld `package.lib`;
      package_lib13 = force? package_lib12;
      checkMissing(package_lib13);
      return package_lib13;
    };
    p184 = prom<V +>{
      package97 = ld package;
      package98 = force? package97;
      checkMissing(package98);
      return package98;
    };
    r588 = dyn runHook(".onLoad", p182, p183, p184);
    check L805() else D248();
  D246():
    deopt 974 [r583];
  D248():
    deopt 983 [r588];
  L138(i80, r541):
    c150 = `==`(r541, NULL);
    goto L137(i80, c150);
  L139(i86, c153):
    c173 = `as.logical`(c153);
    if c173 then L767() else L143();
  L742():
    nsInfo24 = ld nsInfo;
    check L744() else D225();
  L743():
    r540 = dyn base44(<lang `$`(nsInfo, dynlibs)>);
    goto L138(i74, r540);
  L750():
    sym45 = ldf nzchar;
    base45 = ldf nzchar in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L751() else L752();
  L802():
    goto L152();
  L805():
    lev22 = ld lev;
    check L806() else D249();
  D225():
    deopt 896 [i74, nsInfo24];
  D249():
    deopt 984 [lev22];
  L140(i89, c156, r546):
    c170 = `as.logical`(r546);
    c171 = `&&`(c156, c170);
    goto L139(i89, c171);
  L143():
    goto L148(i86);
  L148(i127):
    setNamespaceInfo = ldf setNamespaceInfo;
    check L789() else D236();
  L744():
    nsInfo25 = force? nsInfo24;
    checkMissing(nsInfo25);
    c149 = `is.object`(nsInfo25);
    if c149 then L746() else L747(i74, nsInfo25);
  L751():
    sym46 = ldf names;
    base46 = ldf names in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L753() else L754();
  L752():
    r545 = dyn base45(<lang `[`(names(`$`(nsInfo, dynlibs)), i)>);
    goto L140(i77, c151, r545);
  L767():
    dlls4 = ld dlls;
    check L768() else D231();
  L806():
    lev23 = force? lev22;
    checkMissing(lev23);
    r589 = `>`(lev23, 1);
    c180 = `as.logical`(r589);
    if c180 then L807() else L153();
  D231():
    deopt 918 [i86, dlls4];
  D236():
    deopt 939 [i127];
  L141(i92, c159, r548):
    c165 = `is.object`(r548);
    if c165 then L761() else L762(i92, c159, r548);
  L153():
    goto L154();
  L154():
    nsInfo40 = ld nsInfo;
    check L811() else D252();
  L745(i84, dx93):
    names2 = ldf names in base;
    r543 = dyn names2(dx93);
    check L749() else D226();
  L746():
    dr84 = tryDispatchBuiltin.1("$", nsInfo25);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L748() else L747(i74, dr84);
  L747(i82, nsInfo27):
    r542 = `$`(nsInfo27, <sym dynlibs>);
    goto L745(i82, r542);
  L753():
    nsInfo28 = ld nsInfo;
    check L755() else D227();
  L754():
    r547 = dyn base46(<lang `$`(nsInfo, dynlibs)>);
    goto L141(i77, c151, r547);
  L768():
    dlls5 = force? dlls4;
    checkMissing(dlls5);
    c174 = `is.object`(dlls5);
    if c174 then L769() else L770(i86, dlls5);
  L789():
    p173 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    p174 = prom<V +>{
      dlls8 = ld dlls;
      dlls9 = force? dlls8;
      checkMissing(dlls9);
      return dlls9;
    };
    r566 = dyn setNamespaceInfo(p173, "DLLs", p174);
    check L790() else D237();
  L807():
    message10 = ldf message;
    check L808() else D250();
  D226():
    deopt 900 [i84, r543];
  D227():
    deopt 907 [i77, c151, nsInfo28];
  D237():
    deopt 943 [i127, r566];
  D250():
    deopt 989 [];
  D252():
    deopt 995 [nsInfo40];
  L142(i100, c169, dx97):
    nzchar1 = ldf nzchar in base;
    r554 = dyn nzchar1(dx97);
    check L765() else D230();
  L144(i109, dx99):
    l13 = ld env;
    c175 = `is.object`(l13);
    if c175 then L773() else L774(i109, dx99, l13);
  L748():
    dx92 = getTryDispatchBuiltinValue(dr84);
    goto L745(i74, dx92);
  L749():
    goto L138(i84, r543);
  L755():
    nsInfo29 = force? nsInfo28;
    checkMissing(nsInfo29);
    c160 = `is.object`(nsInfo29);
    if c160 then L757() else L758(i77, c151, nsInfo29);
  L761():
    dr88 = tryDispatchBuiltin.1("[", r548);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L763() else L762(i92, c159, dr88);
  L762(i98, c167, r552):
    i101 = ld i;
    check L764() else D229();
  L769():
    dr90 = tryDispatchBuiltin.1("[[", dlls5);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L771() else L770(i86, dr90);
  L770(i107, dlls7):
    lib12 = ld lib;
    check L772() else D232();
  L790():
    goto L133(i127);
  L808():
    p186 = prom<V +>{
      dQuote10 = ldf dQuote;
      p185 = prom<V +>{
        package99 = ld package;
        package100 = force? package99;
        checkMissing(package100);
        return package100;
      };
      r591 = dyn dQuote10(p185);
      return r591;
    };
    r593 = dyn message10("-- done running .onLoad for ", p186);
    check L809() else D251();
  L811():
    nsInfo41 = force? nsInfo40;
    checkMissing(nsInfo41);
    c181 = `is.object`(nsInfo41);
    if c181 then L813() else L814(nsInfo41);
  D229():
    deopt 912 [i98, c167, r552, i101];
  D230():
    deopt 916 [i100, c169, r554];
  D232():
    deopt 920 [i107, dlls7, lib12];
  D251():
    deopt 992 [r593];
  L145(i113, dx104, dx105):
    st env = dx105;
    goto L148(i113);
  L756(i96, c164, dx95):
    names3 = ldf names in base;
    r550 = dyn names3(dx95);
    check L760() else D228();
  L757():
    dr86 = tryDispatchBuiltin.1("$", nsInfo29);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L759() else L758(i77, c151, dr86);
  L758(i94, c162, nsInfo31):
    r549 = `$`(nsInfo31, <sym dynlibs>);
    goto L756(i94, c162, r549);
  L763():
    dx96 = getTryDispatchBuiltinValue(dr88);
    goto L142(i92, c159, dx96);
  L764():
    i102 = force? i101;
    __24 = ldf `[` in base;
    r553 = dyn __24(r552, i102);
    goto L142(i98, c167, r553);
  L765():
    goto L140(i100, c169, r554);
  L771():
    dx98 = getTryDispatchBuiltinValue(dr90);
    goto L144(i86, dx98);
  L772():
    lib13 = force? lib12;
    __25 = ldf `[[` in base;
    r555 = dyn __25(dlls7, lib13);
    goto L144(i107, r555);
  L773():
    dr92 = tryDispatchBuiltin.0("[[<-", l13, dx99);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L775() else L774(i109, dx99, dr92);
  L774(i111, dx101, l15):
    sym47 = ldf names;
    base47 = ldf names in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L776() else L777();
  L809():
    goto L154();
  L812(dx136):
    st exports = dx136;
    nsInfo44 = ld nsInfo;
    check L816() else D253();
  L813():
    dr100 = tryDispatchBuiltin.1("$", nsInfo41);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L815() else L814(dr100);
  L814(nsInfo43):
    r595 = `$`(nsInfo43, <sym exports>);
    goto L812(r595);
  D228():
    deopt 911 [i96, c164, r550];
  D253():
    deopt 999 [nsInfo44];
  L146(i116, dx110, l18, dx111, r557):
    c177 = `is.object`(r557);
    if c177 then L784() else L785(i116, dx110, l18, dx111, r557);
  L759():
    dx94 = getTryDispatchBuiltinValue(dr86);
    goto L756(i77, c151, dx94);
  L760():
    goto L141(i96, c164, r550);
  L775():
    dx103 = getTryDispatchBuiltinValue(dr92);
    goto L145(i109, dx99, dx103);
  L776():
    nsInfo32 = ld nsInfo;
    check L778() else D233();
  L777():
    r556 = dyn base47(<lang `$`(nsInfo, dynlibs)>);
    goto L146(i111, dx101, l15, dx99, r556);
  L815():
    dx135 = getTryDispatchBuiltinValue(dr100);
    goto L812(dx135);
  L816():
    nsInfo45 = force? nsInfo44;
    checkMissing(nsInfo45);
    c182 = `is.object`(nsInfo45);
    if c182 then L818() else L819(nsInfo45);
  D233():
    deopt 926 [i111, dx101, l15, dx99, nsInfo32];
  L147(i124, dx129, l26, dx130, dx131):
    ____2 = ldf `[[<-` in base;
    r563 = dyn ____2(l26, dx130, dx131);
    goto L145(i124, dx129, r563);
  L778():
    nsInfo33 = force? nsInfo32;
    checkMissing(nsInfo33);
    c176 = `is.object`(nsInfo33);
    if c176 then L780() else L781(i111, dx101, l15, dx99, nsInfo33);
  L784():
    dr96 = tryDispatchBuiltin.1("[", r557);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L786() else L785(i116, dx110, l18, dx111, dr96);
  L785(i122, dx124, l24, dx125, r561):
    i125 = ld i;
    check L787() else D235();
  L817(dx138):
    s4 = toForSeq(dx138);
    l27 = length(s4);
    i128 = 0;
    goto L155(i128);
  L818():
    dr102 = tryDispatchBuiltin.1("$", nsInfo45);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L820() else L819(dr102);
  L819(nsInfo47):
    r596 = `$`(nsInfo47, <sym exportPatterns>);
    goto L817(r596);
  D235():
    deopt 931 [i122, dx124, l24, dx125, r561, i125];
  L155(i129):
    i130 = `+`.1(i129, 1);
    c183 = `<`.1(l27, i130);
    if c183 then L821() else L157();
  L779(i120, dx119, l22, dx120, dx121):
    names4 = ldf names in base;
    r559 = dyn names4(dx121);
    check L783() else D234();
  L780():
    dr94 = tryDispatchBuiltin.1("$", nsInfo33);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L782() else L781(i111, dx101, l15, dx99, dr94);
  L781(i118, dx114, l20, dx115, nsInfo35):
    r558 = `$`(nsInfo35, <sym dynlibs>);
    goto L779(i118, dx114, l20, dx115, r558);
  L786():
    dx128 = getTryDispatchBuiltinValue(dr96);
    goto L147(i116, dx110, l18, dx111, dx128);
  L787():
    i126 = force? i125;
    __26 = ldf `[` in base;
    r562 = dyn __26(r561, i126);
    goto L147(i122, dx124, l24, dx125, r562);
  L820():
    dx137 = getTryDispatchBuiltinValue(dr102);
    goto L817(dx137);
  D234():
    deopt 930 [i120, dx119, l22, dx120, r559];
  L157():
    x4 = `[[`(s4, i130, NULL, TRUE);
    st p = x4;
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L822() else L823();
  L782():
    dx118 = getTryDispatchBuiltinValue(dr94);
    goto L779(i111, dx101, l15, dx99, dx118);
  L783():
    goto L146(i120, dx119, l22, dx120, r559);
  L821():
    sym50 = ldf `.isMethodsDispatchOn`;
    base50 = ldf `.isMethodsDispatchOn` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L828() else L829();
  L156(i135, r598):
    st exports = r598;
    goto L155(i135);
  L158(r604):
    c185 = `as.logical`(r604);
    if c185 then L831() else L159(c185);
  L822():
    ls = ldf ls;
    check L824() else D254();
  L823():
    r597 = dyn base49(<lang ls(env, pattern=p, all.names=TRUE)>, <sym exports>);
    goto L156(i130, r597);
  L828():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r605 = dyn _isMethodsDispatchOn();
    check L830() else D258();
  L829():
    r603 = dyn base50();
    goto L158(r603);
  D254():
    deopt 1005 [i130];
  D258():
    deopt 1023 [r605];
  L159(c187):
    c191 = `as.logical`(c187);
    if c191 then L836() else L160(c191);
  L824():
    p187 = prom<V +>{
      env18 = ld env;
      env19 = force? env18;
      checkMissing(env19);
      return env19;
    };
    p190 = prom<V +>{
      p188 = ld p;
      p189 = force? p188;
      checkMissing(p189);
      return p189;
    };
    r601 = dyn ls[, pattern, `all.names`](p187, p190, TRUE);
    check L825() else D255();
  L830():
    goto L158(r605);
  L831():
    ___ = ldf `:::`;
    check L832() else D259();
  D255():
    deopt 1011 [i130, r601];
  D259():
    deopt 1025 [c185];
  L160(c193):
    c202 = `as.logical`(c193);
    if c202 then L843() else L162(c202);
  L825():
    exports = ld exports;
    check L826() else D256();
  L832():
    r606 = dyn ___("methods", ".hasS4MetaData");
    check L833() else D260();
  L836():
    sym51 = ldf any;
    base51 = ldf any in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L837() else L838();
  D256():
    deopt 1012 [i130, exports];
  D260():
    deopt 1028 [c185, r606];
  L161(c196, r612):
    c199 = `as.logical`(r612);
    c200 = `&&`(c196, c199);
    goto L160(c200);
  L162(c204):
    c209 = `as.logical`(c204);
    if c209 then L847() else L163();
  L826():
    exports1 = force? exports;
    checkMissing(exports1);
    c184 = ldf c in base;
    r602 = dyn c184(r601, exports1);
    check L827() else D257();
  L833():
    checkFun.0(r606);
    r607 = r606 as cls;
    p191 = prom<V +>{
      ns20 = ld ns;
      ns21 = force? ns20;
      checkMissing(ns21);
      return ns21;
    };
    r609 = dyn r607(p191);
    check L834() else D261();
  L837():
    lengths = ldf lengths;
    check L839() else D262();
  L838():
    r611 = dyn base51(<lang lengths(`[`(nsInfo, c("exportClasses", "exportMethods", "exportClassPatterns")))>);
    goto L161(c191, r611);
  L843():
    _in_3 = ldf `%in%`;
    check L844() else D265();
  D257():
    deopt 1015 [i130, r602];
  D261():
    deopt 1031 [c185, r609];
  D262():
    deopt 1038 [c191];
  D265():
    deopt 1045 [c202];
  L163():
    goto L164();
  L164():
    sym54 = ldf `.isMethodsDispatchOn`;
    base54 = ldf `.isMethodsDispatchOn` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L851() else L852();
  L827():
    goto L156(i130, r602);
  L834():
    st hasS4m = r609;
    r610 = `!`(r609);
    c188 = `as.logical`(r610);
    c189 = `&&`(c185, c188);
    goto L159(c189);
  L839():
    p192 = prom<V +>{
      nsInfo48 = ld nsInfo;
      nsInfo49 = force? nsInfo48;
      checkMissing(nsInfo49);
      c197 = `is.object`(nsInfo49);
      if c197 then L2() else L3(nsInfo49);
    L0(dx140):
      return dx140;
    L2():
      dr104 = tryDispatchBuiltin.1("[", nsInfo49);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L4() else L3(dr104);
    L3(nsInfo51):
      sym52 = ldf c;
      base52 = ldf c in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L5() else L6();
    L1(nsInfo54, r614):
      __27 = ldf `[` in base;
      r616 = dyn __27(nsInfo54, r614);
      goto L0(r616);
    L4():
      dx139 = getTryDispatchBuiltinValue(dr104);
      goto L0(dx139);
    L5():
      c198 = ldf c in base;
      r615 = dyn c198("exportClasses", "exportMethods", "exportClassPatterns");
      goto L1(nsInfo51, r615);
    L6():
      r613 = dyn base52("exportClasses", "exportMethods", "exportClassPatterns");
      goto L1(nsInfo51, r613);
    };
    r618 = dyn lengths(p192);
    check L840() else D263();
  L844():
    p193 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r620 = dyn Sys_getenv1("_R_LOAD_CHECK_S4_EXPORTS_");
      return r620;
    };
    p194 = prom<V +>{
      sym53 = ldf c;
      base53 = ldf c in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r623):
      return r623;
    L1():
      package101 = ld package;
      package102 = force? package101;
      checkMissing(package102);
      c205 = ldf c in base;
      r624 = dyn c205(package102, "all");
      goto L0(r624);
    L2():
      r622 = dyn base53(<sym package>, "all");
      goto L0(r622);
    };
    r626 = dyn _in_3(p193, p194);
    check L845() else D266();
  L847():
    warning1 = ldf warning;
    check L848() else D267();
  D263():
    deopt 1040 [c191, r618];
  D266():
    deopt 1048 [c202, r626];
  D267():
    deopt 1051 [];
  L165(r635):
    c210 = `as.logical`(r635);
    if c210 then L854() else L166(c210);
  L840():
    any1 = ldf any in base;
    r619 = dyn any1(r618);
    check L841() else D264();
  L845():
    c206 = `as.logical`(r626);
    c207 = `&&`(c202, c206);
    goto L162(c207);
  L848():
    p197 = prom<V +>{
      gettextf7 = ldf gettextf;
      p196 = prom<V +>{
        sQuote9 = ldf sQuote;
        p195 = prom<V +>{
          package103 = ld package;
          package104 = force? package103;
          checkMissing(package104);
          return package104;
        };
        r628 = dyn sQuote9(p195);
        return r628;
      };
      r630 = dyn gettextf7("S4 exports specified in 'NAMESPACE' but not defined in package %s", p196);
      return r630;
    };
    r632 = dyn warning1[, `call.`, domain](p197, FALSE, NA_LGL);
    check L849() else D268();
  L851():
    _isMethodsDispatchOn1 = ldf `.isMethodsDispatchOn` in base;
    r636 = dyn _isMethodsDispatchOn1();
    check L853() else D269();
  L852():
    r634 = dyn base54();
    goto L165(r634);
  D264():
    deopt 1042 [c191, r619];
  D268():
    deopt 1057 [r632];
  D269():
    deopt 1063 [r636];
  L166(c212):
    c216 = `as.logical`(c212);
    if c216 then L857() else L167(c216);
  L841():
    goto L161(c191, r619);
  L849():
    goto L164();
  L853():
    goto L165(r636);
  L854():
    hasS4m = ld hasS4m;
    check L855() else D270();
  D270():
    deopt 1064 [c210, hasS4m];
  L167(c218):
    c225 = `as.logical`(c218);
    if c225 then L863() else L169();
  L855():
    hasS4m1 = force? hasS4m;
    checkMissing(hasS4m1);
    c213 = `as.logical`(hasS4m1);
    c214 = `&&`(c210, c213);
    goto L166(c214);
  L857():
    sym55 = ldf identical;
    base55 = ldf identical in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L858() else L859();
  L168(c221, r638):
    r640 = `!`(r638);
    c222 = `as.logical`(r640);
    c223 = `&&`(c221, c222);
    goto L167(c223);
  L169():
    goto L267();
  L267():
    sym91 = ldf length;
    base91 = ldf length in base;
    guard91 = `==`.4(sym91, base91);
    if guard91 then L1224() else L1225();
  L858():
    package105 = ld package;
    check L860() else D271();
  L859():
    r637 = dyn base55(<sym package>, "methods");
    goto L168(c216, r637);
  L863():
    lev24 = ld lev;
    check L864() else D273();
  D271():
    deopt 1069 [c216, package105];
  D273():
    deopt 1083 [lev24];
  L268(r1024):
    c318 = `as.logical`(r1024);
    if c318 then L1228() else L269();
  L860():
    package106 = force? package105;
    checkMissing(package106);
    identical1 = ldf identical in base;
    r639 = dyn identical1(package106, "methods", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L861() else D272();
  L864():
    lev25 = force? lev24;
    checkMissing(lev25);
    r641 = `>`(lev25, 1);
    c226 = `as.logical`(r641);
    if c226 then L170(c226) else L865();
  L1224():
    exports36 = ld exports;
    check L1226() else D453();
  L1225():
    r1023 = dyn base91(<sym exports>);
    goto L268(r1023);
  D272():
    deopt 1080 [c216, r639];
  D453():
    deopt 1731 [exports36];
  L170(c227):
    c232 = `as.logical`(c227);
    if c232 then L868() else L171();
  L269():
    goto L272();
  L272():
    lev40 = ld lev;
    check L1239() else D459();
  L861():
    goto L168(c216, r639);
  L865():
    lev26 = ld lev;
    check L866() else D274();
  L1226():
    exports37 = force? exports36;
    checkMissing(exports37);
    length14 = ldf length in base;
    r1025 = dyn length14(exports37);
    check L1227() else D454();
  L1228():
    sym92 = ldf c;
    base92 = ldf c in base;
    guard92 = `==`.4(sym92, base92);
    if guard92 then L1229() else L1230();
  D274():
    deopt 1087 [c226, lev26];
  D454():
    deopt 1734 [r1025];
  D459():
    deopt 1762 [lev40];
  L171():
    goto L172();
  L172():
    lev28 = ld lev;
    check L872() else D277();
  L270(r1027):
    st stoplist = r1027;
    exports38 = ld exports;
    check L1232() else D456();
  L866():
    lev27 = force? lev26;
    checkMissing(lev27);
    r642 = `==`(lev27, -5.0);
    c229 = `as.logical`(r642);
    c230 = `||`(c226, c229);
    goto L170(c230);
  L868():
    message11 = ldf message;
    check L869() else D275();
  L1227():
    goto L268(r1025);
  L1229():
    c319 = ldf c in base;
    r1028 = dyn c319(".__NAMESPACE__.", ".__S3MethodsTable__.", ".packageName", ".First.lib", ".onLoad", ".onAttach", ".conflicts.OK", ".noGenerics", ".__global__", ".__suppressForeign__");
    check L1231() else D455();
  L1230():
    r1026 = dyn base92(".__NAMESPACE__.", ".__S3MethodsTable__.", ".packageName", ".First.lib", ".onLoad", ".onAttach", ".conflicts.OK", ".noGenerics", ".__global__", ".__suppressForeign__");
    goto L270(r1026);
  L1239():
    lev41 = force? lev40;
    checkMissing(lev41);
    r1034 = `>`(lev41, 2);
    c321 = `as.logical`(r1034);
    if c321 then L1240() else L273();
  D275():
    deopt 1093 [];
  D277():
    deopt 1099 [lev28];
  D455():
    deopt 1748 [r1028];
  D456():
    deopt 1750 [exports38];
  L273():
    goto L274();
  L274():
    namespaceExport = ldf namespaceExport;
    check L1244() else D462();
  L869():
    p199 = prom<V +>{
      dQuote11 = ldf dQuote;
      p198 = prom<V +>{
        package107 = ld package;
        package108 = force? package107;
        checkMissing(package108);
        return package108;
      };
      r644 = dyn dQuote11(p198);
      return r644;
    };
    r646 = dyn message11("-- processing S4 stuff for ", p199);
    check L870() else D276();
  L872():
    lev29 = force? lev28;
    checkMissing(lev29);
    r648 = `>`(lev29, 2);
    c233 = `as.logical`(r648);
    if c233 then L873() else L173();
  L1231():
    goto L270(r1028);
  L1232():
    exports39 = force? exports38;
    checkMissing(exports39);
    c320 = `is.object`(exports39);
    if c320 then L1233() else L1234(exports39);
  L1240():
    message17 = ldf message;
    check L1241() else D460();
  D276():
    deopt 1096 [r646];
  D460():
    deopt 1767 [];
  D462():
    deopt 1774 [];
  L173():
    goto L174();
  L174():
    __28 = ldf `::`;
    check L877() else D280();
  L271(dx198):
    st exports = dx198;
    goto L272();
  L870():
    goto L172();
  L873():
    message12 = ldf message;
    check L874() else D278();
  L1233():
    dr154 = tryDispatchBuiltin.1("[", exports39);
    dc77 = getTryDispatchBuiltinDispatched(dr154);
    if dc77 then L1235() else L1234(dr154);
  L1234(exports41):
    _in_10 = ldf `%in%`;
    check L1236() else D457();
  L1241():
    p309 = prom<V +>{
      dQuote13 = ldf dQuote;
      p308 = prom<V +>{
        package123 = ld package;
        package124 = force? package123;
        checkMissing(package124);
        return package124;
      };
      r1036 = dyn dQuote13(p308);
      return r1036;
    };
    r1038 = dyn message17("--- processing exports for ", p309);
    check L1242() else D461();
  L1244():
    p310 = prom<V +>{
      ns46 = ld ns;
      ns47 = force? ns46;
      checkMissing(ns47);
      return ns47;
    };
    p311 = prom<V +>{
      exports44 = ld exports;
      exports45 = force? exports44;
      checkMissing(exports45);
      return exports45;
    };
    r1042 = dyn namespaceExport(p310, p311);
    check L1245() else D463();
  D278():
    deopt 1104 [];
  D280():
    deopt 1110 [];
  D457():
    deopt 1753 [exports41];
  D461():
    deopt 1770 [r1038];
  D463():
    deopt 1777 [r1042];
  L874():
    r649 = dyn message12("--- caching metadata");
    check L875() else D279();
  L877():
    r651 = dyn __28("methods", "cacheMetaData");
    check L878() else D281();
  L1235():
    dx197 = getTryDispatchBuiltinValue(dr154);
    goto L271(dx197);
  L1236():
    p306 = prom<V +>{
      exports42 = ld exports;
      exports43 = force? exports42;
      checkMissing(exports43);
      return exports43;
    };
    p307 = prom<V +>{
      stoplist = ld stoplist;
      stoplist1 = force? stoplist;
      checkMissing(stoplist1);
      return stoplist1;
    };
    r1031 = dyn _in_10(p306, p307);
    check L1237() else D458();
  L1242():
    goto L274();
  L1245():
    lev42 = ld lev;
    check L1246() else D464();
  D279():
    deopt 1106 [r649];
  D281():
    deopt 1113 [r651];
  D458():
    deopt 1756 [exports41, r1031];
  D464():
    deopt 1778 [lev42];
  L875():
    goto L174();
  L878():
    checkFun.0(r651);
    r652 = r651 as cls;
    p200 = prom<V +>{
      ns22 = ld ns;
      ns23 = force? ns22;
      checkMissing(ns23);
      return ns23;
    };
    p201 = prom<V +>{
      ns24 = ld ns;
      ns25 = force? ns24;
      checkMissing(ns25);
      return ns25;
    };
    r655 = dyn r652(p200, TRUE, p201);
    check L879() else D282();
  L1237():
    r1032 = `!`(r1031);
    __50 = ldf `[` in base;
    r1033 = dyn __50(exports41, r1032);
    goto L271(r1033);
  L1246():
    lev43 = force? lev42;
    checkMissing(lev43);
    r1043 = `>`(lev43, 2);
    c322 = `as.logical`(r1043);
    if c322 then L1247() else L275();
  D282():
    deopt 1118 [r655];
  L275():
    goto L276();
  L276():
    sealNamespace = ldf sealNamespace;
    check L1251() else D467();
  L879():
    lev30 = ld lev;
    check L880() else D283();
  L1247():
    message18 = ldf message;
    check L1248() else D465();
  D283():
    deopt 1119 [lev30];
  D465():
    deopt 1783 [];
  D467():
    deopt 1790 [];
  L880():
    lev31 = force? lev30;
    checkMissing(lev31);
    r656 = `>`(lev31, 2);
    c234 = `as.logical`(r656);
    if c234 then L881() else L175();
  L1248():
    p313 = prom<V +>{
      dQuote14 = ldf dQuote;
      p312 = prom<V +>{
        package125 = ld package;
        package126 = force? package125;
        checkMissing(package126);
        return package126;
      };
      r1045 = dyn dQuote14(p312);
      return r1045;
    };
    r1047 = dyn message18("--- sealing exports for ", p313);
    check L1249() else D466();
  L1251():
    p314 = prom<V +>{
      ns48 = ld ns;
      ns49 = force? ns48;
      checkMissing(ns49);
      return ns49;
    };
    r1050 = dyn sealNamespace(p314);
    check L1252() else D468();
  D466():
    deopt 1786 [r1047];
  D468():
    deopt 1792 [r1050];
  L175():
    goto L176();
  L176():
    nsInfo55 = ld nsInfo;
    check L885() else D286();
  L881():
    message13 = ldf message;
    check L882() else D284();
  L1249():
    goto L276();
  L1252():
    runUserHook = ldf runUserHook;
    check L1253() else D469();
  D284():
    deopt 1124 [];
  D286():
    deopt 1129 [nsInfo55];
  D469():
    deopt 1794 [];
  L882():
    r657 = dyn message13("--- done caching metadata");
    check L883() else D285();
  L885():
    nsInfo56 = force? nsInfo55;
    checkMissing(nsInfo56);
    c235 = `is.object`(nsInfo56);
    if c235 then L887() else L888(nsInfo56);
  L1253():
    p315 = prom<V +>{
      package127 = ld package;
      package128 = force? package127;
      checkMissing(package128);
      return package128;
    };
    p316 = prom<V +>{
      pkgpath28 = ld pkgpath;
      pkgpath29 = force? pkgpath28;
      checkMissing(pkgpath29);
      return pkgpath29;
    };
    r1053 = dyn runUserHook(p315, p316);
    check L1254() else D470();
  D285():
    deopt 1126 [r657];
  D470():
    deopt 1797 [r1053];
  L883():
    goto L176();
  L886(dx142):
    s5 = toForSeq(dx142);
    l28 = length(s5);
    i136 = 0;
    goto L177(i136);
  L887():
    dr106 = tryDispatchBuiltin.1("$", nsInfo56);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L889() else L888(dr106);
  L888(nsInfo58):
    r659 = `$`(nsInfo58, <sym exportPatterns>);
    goto L886(r659);
  L1254():
    sym93 = ldf `on.exit`;
    base93 = ldf `on.exit` in base;
    guard93 = `==`.4(sym93, base93);
    if guard93 then L1255() else L1256();
  L177(i137):
    i138 = `+`.1(i137, 1);
    c236 = `<`.1(l28, i138);
    if c236 then L890() else L183();
  L277():
    lev44 = ld lev;
    check L1257() else D471();
  L889():
    dx141 = getTryDispatchBuiltinValue(dr106);
    goto L886(dx141);
  L1255():
    on_exit2 = ldf `on.exit` in base;
    r1056 = dyn on_exit2();
    goto L277();
  L1256():
    r1054 = dyn base93();
    goto L277();
  D471():
    deopt 1801 [lev44];
  L183():
    x5 = `[[`(s5, i138, NULL, TRUE);
    st p = x5;
    ls1 = ldf ls;
    check L891() else D287();
  L890():
    nsInfo59 = ld nsInfo;
    check L910() else D297();
  L1257():
    lev45 = force? lev44;
    checkMissing(lev45);
    r1057 = `>`(lev45, 0);
    c323 = `as.logical`(r1057);
    if c323 then L1258() else L278();
  D287():
    deopt 1133 [i138];
  D297():
    deopt 1171 [nsInfo59];
  L278():
    goto L279();
  L279():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L1262() else D474();
  L891():
    p202 = prom<V +>{
      ns26 = ld ns;
      ns27 = force? ns26;
      checkMissing(ns27);
      return ns27;
    };
    p205 = prom<V +>{
      p203 = ld p;
      p204 = force? p203;
      checkMissing(p204);
      return p204;
    };
    r662 = dyn ls1[, pattern, `all.names`](p202, p205, TRUE);
    check L892() else D288();
  L910():
    nsInfo60 = force? nsInfo59;
    checkMissing(nsInfo60);
    c240 = `is.object`(nsInfo60);
    if c240 then L912() else L913(nsInfo60);
  L1258():
    message19 = ldf message;
    check L1259() else D472();
  D288():
    deopt 1139 [i138, r662];
  D472():
    deopt 1806 [];
  D474():
    deopt 1813 [];
  L892():
    st expp = r662;
    _in_4 = ldf `%in%`;
    check L893() else D289();
  L911(dx146):
    st expClasses = dx146;
    lev32 = ld lev;
    check L915() else D298();
  L912():
    dr110 = tryDispatchBuiltin.1("$", nsInfo60);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L914() else L913(dr110);
  L913(nsInfo62):
    r675 = `$`(nsInfo62, <sym exportClasses>);
    goto L911(r675);
  L1259():
    p318 = prom<V +>{
      dQuote15 = ldf dQuote;
      p317 = prom<V +>{
        package129 = ld package;
        package130 = force? package129;
        checkMissing(package130);
        return package130;
      };
      r1059 = dyn dQuote15(p317);
      return r1059;
    };
    r1061 = dyn message19("- done loading ", p318);
    check L1260() else D473();
  L1262():
    r1063 = dyn Sys_unsetenv("_R_NS_LOAD_");
    check L1263() else D475();
  D289():
    deopt 1142 [i138];
  D298():
    deopt 1175 [lev32];
  D473():
    deopt 1809 [r1061];
  D475():
    deopt 1815 [r1063];
  L893():
    p206 = prom<V +>{
      expp = ld expp;
      expp1 = force? expp;
      checkMissing(expp1);
      return expp1;
    };
    p207 = prom<V +>{
      exports2 = ld exports;
      exports3 = force? exports2;
      checkMissing(exports3);
      return exports3;
    };
    r665 = dyn _in_4(p206, p207);
    check L894() else D290();
  L914():
    dx145 = getTryDispatchBuiltinValue(dr110);
    goto L911(dx145);
  L915():
    lev33 = force? lev32;
    checkMissing(lev33);
    r676 = `>`(lev33, 2);
    c241 = `as.logical`(r676);
    if c241 then L916() else L184();
  L1260():
    goto L279();
  L1263():
    ns50 = ld ns;
    check L1264() else D476();
  D290():
    deopt 1145 [i138, r665];
  D476():
    deopt 1816 [ns50];
  L184():
    goto L185();
  L185():
    character = ldf character;
    check L920() else D301();
  L894():
    r666 = `!`(r665);
    st newEx = r666;
    sym56 = ldf any;
    base56 = ldf any in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L895() else L896();
  L916():
    message14 = ldf message;
    check L917() else D299();
  L1264():
    ns51 = force? ns50;
    checkMissing(ns51);
    popenv;
    return ns51;
  D299():
    deopt 1180 [];
  D301():
    deopt 1186 [];
  L178(i143, r668):
    c237 = `as.logical`(r668);
    if c237 then L899() else L179();
  L895():
    newEx = ld newEx;
    check L897() else D291();
  L896():
    r667 = dyn base56(<sym newEx>);
    goto L178(i138, r667);
  L917():
    r677 = dyn message14("--- processing classes");
    check L918() else D300();
  L920():
    r679 = dyn character();
    check L921() else D302();
  D291():
    deopt 1150 [i138, newEx];
  D300():
    deopt 1182 [r677];
  D302():
    deopt 1187 [r679];
  L179():
    goto L182(i143);
  L182(i153):
    goto L177(i153);
  L897():
    newEx1 = force? newEx;
    checkMissing(newEx1);
    any2 = ldf any in base;
    r669 = dyn any2(newEx1);
    check L898() else D292();
  L899():
    sym57 = ldf c;
    base57 = ldf c in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L900() else L901();
  L918():
    goto L185();
  L921():
    st pClasses = r679;
    __30 = ldf `::`;
    check L922() else D303();
  D292():
    deopt 1153 [i138, r669];
  D303():
    deopt 1190 [];
  L180(i148, r671):
    st exports = r671;
    goto L182(i148);
  L898():
    goto L178(i138, r669);
  L900():
    expp2 = ld expp;
    check L902() else D293();
  L901():
    r670 = dyn base57(<lang `[`(expp, newEx)>, <sym exports>);
    goto L180(i143, r670);
  L922():
    r680 = dyn __30("methods", "getClasses");
    check L923() else D304();
  D293():
    deopt 1156 [i143, expp2];
  D304():
    deopt 1193 [r680];
  L902():
    expp3 = force? expp2;
    checkMissing(expp3);
    c238 = `is.object`(expp3);
    if c238 then L903() else L904(i143, expp3);
  L923():
    checkFun.0(r680);
    r681 = r680 as cls;
    p208 = prom<V +>{
      ns28 = ld ns;
      ns29 = force? ns28;
      checkMissing(ns29);
      return ns29;
    };
    r683 = dyn r681(p208);
    check L924() else D305();
  D305():
    deopt 1196 [r683];
  L181(i152, dx144):
    exports4 = ld exports;
    check L907() else D295();
  L903():
    dr108 = tryDispatchBuiltin.1("[", expp3);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L905() else L904(i143, dr108);
  L904(i150, expp5):
    newEx2 = ld newEx;
    check L906() else D294();
  L924():
    st aClasses = r683;
    nsInfo63 = ld nsInfo;
    check L925() else D306();
  D294():
    deopt 1158 [i150, expp5, newEx2];
  D295():
    deopt 1161 [i152, exports4];
  D306():
    deopt 1198 [nsInfo63];
  L905():
    dx143 = getTryDispatchBuiltinValue(dr108);
    goto L181(i143, dx143);
  L906():
    newEx3 = force? newEx2;
    __29 = ldf `[` in base;
    r672 = dyn __29(expp5, newEx3);
    goto L181(i150, r672);
  L907():
    exports5 = force? exports4;
    checkMissing(exports5);
    c239 = ldf c in base;
    r673 = dyn c239(dx144, exports5);
    check L908() else D296();
  L925():
    nsInfo64 = force? nsInfo63;
    checkMissing(nsInfo64);
    c242 = `is.object`(nsInfo64);
    if c242 then L927() else L928(nsInfo64);
  D296():
    deopt 1164 [i152, r673];
  L908():
    goto L180(i152, r673);
  L926(dx148):
    st classPatterns = dx148;
    sym58 = ldf length;
    base58 = ldf length in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L930() else L931();
  L927():
    dr112 = tryDispatchBuiltin.1("$", nsInfo64);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L929() else L928(dr112);
  L928(nsInfo66):
    r684 = `$`(nsInfo66, <sym exportClassPatterns>);
    goto L926(r684);
  L186(r686):
    r688 = `!`(r686);
    c243 = `as.logical`(r688);
    if c243 then L934() else L187();
  L929():
    dx147 = getTryDispatchBuiltinValue(dr112);
    goto L926(dx147);
  L930():
    classPatterns = ld classPatterns;
    check L932() else D307();
  L931():
    r685 = dyn base58(<sym classPatterns>);
    goto L186(r685);
  D307():
    deopt 1204 [classPatterns];
  L187():
    goto L188();
  L188():
    unique = ldf unique;
    check L941() else D310();
  L932():
    classPatterns1 = force? classPatterns;
    checkMissing(classPatterns1);
    length2 = ldf length in base;
    r687 = dyn length2(classPatterns1);
    check L933() else D308();
  L934():
    nsInfo67 = ld nsInfo;
    check L935() else D309();
  D308():
    deopt 1207 [r687];
  D309():
    deopt 1209 [nsInfo67];
  D310():
    deopt 1216 [];
  L933():
    goto L186(r687);
  L935():
    nsInfo68 = force? nsInfo67;
    checkMissing(nsInfo68);
    c244 = `is.object`(nsInfo68);
    if c244 then L937() else L938(nsInfo68);
  L941():
    p213 = prom<V +>{
      unlist = ldf unlist;
      p212 = prom<V +>{
        lapply = ldf lapply;
        p209 = prom<V +>{
          classPatterns2 = ld classPatterns;
          classPatterns3 = force? classPatterns2;
          checkMissing(classPatterns3);
          return classPatterns3;
        };
        p210 = prom<V +>{
          grep = ld grep;
          grep1 = force? grep;
          checkMissing(grep1);
          return grep1;
        };
        p211 = prom<V +>{
          aClasses = ld aClasses;
          aClasses1 = force? aClasses;
          checkMissing(aClasses1);
          return aClasses1;
        };
        r693 = dyn lapply[, , , value](p209, p210, p211, TRUE);
        return r693;
      };
      r695 = dyn unlist(p212);
      return r695;
    };
    r697 = dyn unique(p213);
    check L942() else D311();
  D311():
    deopt 1218 [r697];
  L936(dx150):
    st classPatterns = dx150;
    goto L188();
  L937():
    dr114 = tryDispatchBuiltin.1("$", nsInfo68);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L939() else L938(dr114);
  L938(nsInfo70):
    r689 = `$`(nsInfo70, <sym exportPatterns>);
    goto L936(r689);
  L942():
    st pClasses = r697;
    sym59 = ldf length;
    base59 = ldf length in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L943() else L944();
  L189(r699):
    c245 = `as.logical`(r699);
    if c245 then L947() else L190();
  L939():
    dx149 = getTryDispatchBuiltinValue(dr114);
    goto L936(dx149);
  L943():
    pClasses = ld pClasses;
    check L945() else D312();
  L944():
    r698 = dyn base59(<sym pClasses>);
    goto L189(r698);
  D312():
    deopt 1222 [pClasses];
  L190():
    goto L198();
  L198():
    sym63 = ldf length;
    base63 = ldf length in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L978() else L979();
  L945():
    pClasses1 = force? pClasses;
    checkMissing(pClasses1);
    length3 = ldf length in base;
    r700 = dyn length3(pClasses1);
    check L946() else D313();
  L947():
    vapply = ldf vapply;
    check L948() else D314();
  D313():
    deopt 1225 [r700];
  D314():
    deopt 1227 [];
  L199(r727):
    c263 = `as.logical`(r727);
    if c263 then L982() else L200();
  L946():
    goto L189(r700);
  L948():
    p214 = prom<V +>{
      pClasses2 = ld pClasses;
      pClasses3 = force? pClasses2;
      checkMissing(pClasses3);
      return pClasses3;
    };
    p215 = prom<V +>{
      __31 = ldf `::`;
      r702 = dyn __31("methods", "isClass");
      return r702;
    };
    p216 = prom<V +>{
      ns30 = ld ns;
      ns31 = force? ns30;
      checkMissing(ns31);
      return ns31;
    };
    r705 = dyn vapply[, , , where](p214, p215, NA_LGL, p216);
    check L949() else D315();
  L978():
    expClasses2 = ld expClasses;
    check L980() else D326();
  L979():
    r726 = dyn base63(<sym expClasses>);
    goto L199(r726);
  D315():
    deopt 1233 [r705];
  D326():
    deopt 1276 [expClasses2];
  L200():
    goto L204();
  L204():
    unique1 = ldf unique;
    check L996() else D336();
  L949():
    st good = r705;
    sym60 = ldf any;
    base60 = ldf any in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L950() else L951();
  L980():
    expClasses3 = force? expClasses2;
    checkMissing(expClasses3);
    length5 = ldf length in base;
    r728 = dyn length5(expClasses3);
    check L981() else D327();
  L982():
    vapply1 = ldf vapply;
    check L983() else D328();
  D327():
    deopt 1279 [r728];
  D328():
    deopt 1281 [];
  D336():
    deopt 1313 [];
  L191(r707):
    r709 = `!`(r707);
    c246 = `as.logical`(r709);
    if c246 then L954() else L192(c246);
  L950():
    good = ld good;
    check L952() else D316();
  L951():
    r706 = dyn base60(<sym good>);
    goto L191(r706);
  L981():
    goto L199(r728);
  L983():
    p220 = prom<V +>{
      expClasses4 = ld expClasses;
      expClasses5 = force? expClasses4;
      checkMissing(expClasses5);
      return expClasses5;
    };
    p221 = prom<V +>{
      __33 = ldf `::`;
      r730 = dyn __33("methods", "isClass");
      return r730;
    };
    p222 = prom<V +>{
      ns32 = ld ns;
      ns33 = force? ns32;
      checkMissing(ns33);
      return ns33;
    };
    r733 = dyn vapply1[, , , where](p220, p221, NA_LGL, p222);
    check L984() else D329();
  L996():
    p233 = prom<V +>{
      sym65 = ldf c;
      base65 = ldf c in base;
      guard65 = `==`.4(sym65, base65);
      if guard65 then L1() else L2();
    L0(r757):
      return r757;
    L1():
      ___1 = ldf `:::`;
      r758 = dyn ___1("methods", ".getGenerics");
      checkFun.0(r758);
      r759 = r758 as cls;
      p230 = prom<V +>{
        ns34 = ld ns;
        ns35 = force? ns34;
        checkMissing(ns35);
        return ns35;
      };
      r761 = dyn r759(p230);
      ___2 = ldf `:::`;
      r762 = dyn ___2("methods", ".getGenerics");
      checkFun.0(r762);
      r763 = r762 as cls;
      p232 = prom<V +>{
        parent_env = ldf `parent.env`;
        p231 = prom<V +>{
          ns36 = ld ns;
          ns37 = force? ns36;
          checkMissing(ns37);
          return ns37;
        };
        r765 = dyn parent_env(p231);
        return r765;
      };
      r767 = dyn r763(p232);
      c266 = ldf c in base;
      r768 = dyn c266(r761, r767);
      goto L0(r768);
    L2():
      r756 = dyn base65(<lang `:::`(methods, .getGenerics)(ns)>, <lang `:::`(methods, .getGenerics)(parent.env(ns))>);
      goto L0(r756);
    };
    r770 = dyn unique1(p233);
    check L997() else D337();
  D316():
    deopt 1237 [good];
  D329():
    deopt 1287 [r733];
  D337():
    deopt 1315 [r770];
  L192(c248):
    c260 = `as.logical`(c248);
    if c260 then L964() else L194();
  L952():
    good1 = force? good;
    checkMissing(good1);
    any3 = ldf any in base;
    r708 = dyn any3(good1);
    check L953() else D317();
  L954():
    sym61 = ldf length;
    base61 = ldf length in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L955() else L956();
  L984():
    r734 = `!`(r733);
    st missingClasses = r734;
    sym64 = ldf any;
    base64 = ldf any in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L985() else L986();
  L997():
    st allGenerics = r770;
    nsInfo75 = ld nsInfo;
    check L998() else D338();
  D317():
    deopt 1240 [r708];
  D338():
    deopt 1317 [nsInfo75];
  L193(c251, r711):
    c257 = `as.logical`(r711);
    c258 = `&&`(c251, c257);
    goto L192(c258);
  L194():
    goto L195();
  L195():
    sym62 = ldf c;
    base62 = ldf c in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L968() else L969();
  L201(r736):
    c264 = `as.logical`(r736);
    if c264 then L989() else L202();
  L953():
    goto L191(r708);
  L955():
    nsInfo71 = ld nsInfo;
    check L957() else D318();
  L956():
    r710 = dyn base61(<lang `$`(nsInfo, exportClassPatterns)>);
    goto L193(c246, r710);
  L964():
    warning2 = ldf warning;
    check L965() else D320();
  L985():
    missingClasses = ld missingClasses;
    check L987() else D330();
  L986():
    r735 = dyn base64(<sym missingClasses>);
    goto L201(r735);
  L998():
    nsInfo76 = force? nsInfo75;
    checkMissing(nsInfo76);
    c267 = `is.object`(nsInfo76);
    if c267 then L1000() else L1001(nsInfo76);
  D318():
    deopt 1244 [c246, nsInfo71];
  D320():
    deopt 1251 [];
  D330():
    deopt 1292 [missingClasses];
  L196(r722):
    st expClasses = r722;
    goto L198();
  L202():
    goto L203();
  L203():
    paste4 = ldf paste0;
    check L993() else D334();
  L957():
    nsInfo72 = force? nsInfo71;
    checkMissing(nsInfo72);
    c252 = `is.object`(nsInfo72);
    if c252 then L959() else L960(c246, nsInfo72);
  L965():
    p219 = prom<V +>{
      gettextf8 = ldf gettextf;
      p218 = prom<V +>{
        sQuote10 = ldf sQuote;
        p217 = prom<V +>{
          package109 = ld package;
          package110 = force? package109;
          checkMissing(package110);
          return package110;
        };
        r715 = dyn sQuote10(p217);
        return r715;
      };
      r717 = dyn gettextf8("'exportClassPattern' specified in 'NAMESPACE' but no matching classes in package %s", p218);
      return r717;
    };
    r719 = dyn warning2[, `call.`, domain](p219, FALSE, NA_LGL);
    check L966() else D321();
  L968():
    expClasses = ld expClasses;
    check L970() else D322();
  L969():
    r721 = dyn base62(<sym expClasses>, <lang `[`(pClasses, good)>);
    goto L196(r721);
  L987():
    missingClasses1 = force? missingClasses;
    checkMissing(missingClasses1);
    any4 = ldf any in base;
    r737 = dyn any4(missingClasses1);
    check L988() else D331();
  L989():
    stop10 = ldf stop;
    check L990() else D332();
  L999(dx159):
    st expMethods = dx159;
    expMethods = ld expMethods;
    check L1003() else D339();
  L1000():
    dr122 = tryDispatchBuiltin.1("$", nsInfo76);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L1002() else L1001(dr122);
  L1001(nsInfo78):
    r771 = `$`(nsInfo78, <sym exportMethods>);
    goto L999(r771);
  D321():
    deopt 1257 [r719];
  D322():
    deopt 1262 [expClasses];
  D331():
    deopt 1295 [r737];
  D332():
    deopt 1297 [];
  D334():
    deopt 1305 [];
  D339():
    deopt 1321 [expMethods];
  L958(c256, dx153):
    length4 = ldf length in base;
    r713 = dyn length4(dx153);
    check L962() else D319();
  L959():
    dr116 = tryDispatchBuiltin.1("$", nsInfo72);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L961() else L960(c246, dr116);
  L960(c254, nsInfo74):
    r712 = `$`(nsInfo74, <sym exportClassPatterns>);
    goto L958(c254, r712);
  L966():
    goto L195();
  L970():
    expClasses1 = force? expClasses;
    checkMissing(expClasses1);
    pClasses4 = ld pClasses;
    check L971() else D323();
  L988():
    goto L201(r737);
  L990():
    p227 = prom<V +>{
      gettextf9 = ldf gettextf;
      p224 = prom<V +>{
        sQuote11 = ldf sQuote;
        p223 = prom<V +>{
          package111 = ld package;
          package112 = force? package111;
          checkMissing(package112);
          return package112;
        };
        r739 = dyn sQuote11(p223);
        return r739;
      };
      p226 = prom<V +>{
        paste3 = ldf paste;
        p225 = prom<V +>{
          expClasses6 = ld expClasses;
          expClasses7 = force? expClasses6;
          checkMissing(expClasses7);
          c265 = `is.object`(expClasses7);
          if c265 then L1() else L2(expClasses7);
        L0(dx157):
          return dx157;
        L1():
          dr120 = tryDispatchBuiltin.1("[", expClasses7);
          dc60 = getTryDispatchBuiltinDispatched(dr120);
          if dc60 then L3() else L2(dr120);
        L2(expClasses9):
          missingClasses2 = ld missingClasses;
          missingClasses3 = force? missingClasses2;
          __34 = ldf `[` in base;
          r741 = dyn __34(expClasses9, missingClasses3);
          goto L0(r741);
        L3():
          dx156 = getTryDispatchBuiltinValue(dr120);
          goto L0(dx156);
        };
        r743 = dyn paste3[, collapse](p225, ", ");
        return r743;
      };
      r745 = dyn gettextf9("in package %s classes %s were specified for export but not defined", p224, p226);
      return r745;
    };
    r747 = dyn stop10[, domain](p227, NA_LGL);
    check L991() else D333();
  L993():
    p228 = prom<V +>{
      __35 = ldf `::`;
      r749 = dyn __35("methods", "classMetaName");
      checkFun.0(r749);
      r750 = r749 as cls;
      r751 = dyn r750("");
      return r751;
    };
    p229 = prom<V +>{
      expClasses10 = ld expClasses;
      expClasses11 = force? expClasses10;
      checkMissing(expClasses11);
      return expClasses11;
    };
    r754 = dyn paste4(p228, p229);
    check L994() else D335();
  L1002():
    dx158 = getTryDispatchBuiltinValue(dr122);
    goto L999(dx158);
  L1003():
    expMethods1 = force? expMethods;
    checkMissing(expMethods1);
    c268 = `is.object`(expMethods1);
    if c268 then L1004() else L1005(expMethods1);
  D319():
    deopt 1248 [c256, r713];
  D323():
    deopt 1264 [pClasses4];
  D333():
    deopt 1301 [r747];
  D335():
    deopt 1308 [r754];
  L205(dx161):
    st addGenerics = dx161;
    sym68 = ldf length;
    base68 = ldf length in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L1015() else L1016();
  L961():
    dx152 = getTryDispatchBuiltinValue(dr116);
    goto L958(c246, dx152);
  L962():
    goto L193(c256, r713);
  L971():
    pClasses5 = force? pClasses4;
    checkMissing(pClasses5);
    c261 = `is.object`(pClasses5);
    if c261 then L972() else L973(pClasses5);
  L991():
    goto L203();
  L994():
    st expClasses = r754;
    goto L204();
  L1004():
    dr124 = tryDispatchBuiltin.1("[", expMethods1);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L1006() else L1005(dr124);
  L1005(expMethods3):
    sym66 = ldf `is.na`;
    base66 = ldf `is.na` in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L1007() else L1008();
  L197(dx155):
    c262 = ldf c in base;
    r724 = dyn c262(expClasses1, dx155);
    check L976() else D325();
  L206(expMethods6, r773):
    __36 = ldf `[` in base;
    r778 = dyn __36(expMethods6, r773);
    goto L205(r778);
  L208(r780):
    c269 = `as.logical`(r780);
    if c269 then L1019() else L209();
  L972():
    dr118 = tryDispatchBuiltin.1("[", pClasses5);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L974() else L973(dr118);
  L973(pClasses7):
    good2 = ld good;
    check L975() else D324();
  L1006():
    dx160 = getTryDispatchBuiltinValue(dr124);
    goto L205(dx160);
  L1007():
    sym67 = ldf match;
    base67 = ldf match in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L1009() else L1010();
  L1008():
    r772 = dyn base66(<lang match(expMethods, exports)>);
    goto L206(expMethods3, r772);
  L1015():
    addGenerics = ld addGenerics;
    check L1017() else D344();
  L1016():
    r779 = dyn base68(<sym addGenerics>);
    goto L208(r779);
  D324():
    deopt 1266 [pClasses7, good2];
  D325():
    deopt 1270 [r724];
  D344():
    deopt 1341 [addGenerics];
  L207(expMethods9, r775):
    is_na1 = ldf `is.na` in base;
    r777 = dyn is_na1(r775);
    check L1014() else D343();
  L209():
    goto L225();
  L225():
    character1 = ldf character;
    check L1078() else D376();
  L974():
    dx154 = getTryDispatchBuiltinValue(dr118);
    goto L197(dx154);
  L975():
    good3 = force? good2;
    __32 = ldf `[` in base;
    r723 = dyn __32(pClasses7, good3);
    goto L197(r723);
  L976():
    goto L196(r724);
  L1009():
    expMethods10 = ld expMethods;
    check L1011() else D340();
  L1010():
    r774 = dyn base67(<sym expMethods>, <sym exports>);
    goto L207(expMethods3, r774);
  L1017():
    addGenerics1 = force? addGenerics;
    checkMissing(addGenerics1);
    length6 = ldf length in base;
    r781 = dyn length6(addGenerics1);
    check L1018() else D345();
  L1019():
    vapply2 = ldf vapply;
    check L1020() else D346();
  D340():
    deopt 1327 [expMethods3, expMethods10];
  D343():
    deopt 1336 [expMethods9, r777];
  D345():
    deopt 1344 [r781];
  D346():
    deopt 1346 [];
  D376():
    deopt 1460 [];
  L1011():
    expMethods11 = force? expMethods10;
    checkMissing(expMethods11);
    exports6 = ld exports;
    check L1012() else D341();
  L1014():
    goto L206(expMethods9, r777);
  L1018():
    goto L208(r781);
  L1020():
    p234 = prom<V +>{
      addGenerics2 = ld addGenerics;
      addGenerics3 = force? addGenerics2;
      checkMissing(addGenerics3);
      return addGenerics3;
    };
    p235 = prom<V +>{
      r783 = clos inner2203017188;
      return r783;
    };
    r785 = dyn vapply2[, , , `USE.NAMES`](p234, p235, NA_LGL, FALSE);
    check L1021() else D347();
  L1078():
    r859 = dyn character1();
    check L1079() else D377();
  D341():
    deopt 1329 [expMethods3, exports6];
  D347():
    deopt 1352 [r785];
  D377():
    deopt 1461 [r859];
  L1012():
    exports7 = force? exports6;
    checkMissing(exports7);
    match1 = ldf match in base;
    r776 = dyn match1(expMethods11, exports7, NA_INT, NULL);
    check L1013() else D342();
  L1021():
    st nowhere = r785;
    sym69 = ldf any;
    base69 = ldf any in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L1022() else L1023();
  L1079():
    st expTables = r859;
    sym75 = ldf length;
    base75 = ldf length in base;
    guard75 = `==`.4(sym75, base75);
    if guard75 then L1080() else L1081();
  D342():
    deopt 1334 [expMethods3, r776];
  L210(r787):
    c270 = `as.logical`(r787);
    if c270 then L1026() else L211();
  L226(r861):
    c280 = `as.logical`(r861);
    if c280 then L1084() else L227();
  L1013():
    goto L207(expMethods3, r776);
  L1022():
    nowhere = ld nowhere;
    check L1024() else D348();
  L1023():
    r786 = dyn base69(<sym nowhere>);
    goto L210(r786);
  L1080():
    allGenerics = ld allGenerics;
    check L1082() else D378();
  L1081():
    r860 = dyn base75(<sym allGenerics>);
    goto L226(r860);
  D348():
    deopt 1356 [nowhere];
  D378():
    deopt 1465 [allGenerics];
  L211():
    goto L213();
  L213():
    sym70 = ldf length;
    base70 = ldf length in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L1035() else L1036();
  L227():
    sym89 = ldf length;
    base89 = ldf length in base;
    guard89 = `==`.4(sym89, base89);
    if guard89 then L1205() else L1206();
  L261():
    unique6 = ldf unique;
    check L1213() else D447();
  L1024():
    nowhere1 = force? nowhere;
    checkMissing(nowhere1);
    any5 = ldf any in base;
    r788 = dyn any5(nowhere1);
    check L1025() else D349();
  L1026():
    warning3 = ldf warning;
    check L1027() else D350();
  L1082():
    allGenerics1 = force? allGenerics;
    checkMissing(allGenerics1);
    length9 = ldf length in base;
    r862 = dyn length9(allGenerics1);
    check L1083() else D379();
  L1084():
    unique4 = ldf unique;
    check L1085() else D380();
  D349():
    deopt 1359 [r788];
  D350():
    deopt 1361 [];
  D379():
    deopt 1468 [r862];
  D380():
    deopt 1470 [];
  D447():
    deopt 1707 [];
  L214(r808):
    c273 = `as.logical`(r808);
    if c273 then L1039() else L215();
  L262(r999):
    c309 = `as.logical`(r999);
    if c309 then L1209() else L263();
  L1025():
    goto L210(r788);
  L1027():
    p243 = prom<V +>{
      gettextf10 = ldf gettextf;
      p237 = prom<V +>{
        sQuote12 = ldf sQuote;
        p236 = prom<V +>{
          package113 = ld package;
          package114 = force? package113;
          checkMissing(package114);
          return package114;
        };
        r790 = dyn sQuote12(p236);
        return r790;
      };
      p242 = prom<V +>{
        paste5 = ldf paste;
        p241 = prom<V +>{
          sQuote13 = ldf sQuote;
          p240 = prom<V +>{
            sort = ldf sort;
            p239 = prom<V +>{
              unique2 = ldf unique;
              p238 = prom<V +>{
                addGenerics4 = ld addGenerics;
                addGenerics5 = force? addGenerics4;
                checkMissing(addGenerics5);
                c271 = `is.object`(addGenerics5);
                if c271 then L1() else L2(addGenerics5);
              L0(dx163):
                return dx163;
              L1():
                dr126 = tryDispatchBuiltin.1("[", addGenerics5);
                dc63 = getTryDispatchBuiltinDispatched(dr126);
                if dc63 then L3() else L2(dr126);
              L2(addGenerics7):
                nowhere2 = ld nowhere;
                nowhere3 = force? nowhere2;
                __37 = ldf `[` in base;
                r792 = dyn __37(addGenerics7, nowhere3);
                goto L0(r792);
              L3():
                dx162 = getTryDispatchBuiltinValue(dr126);
                goto L0(dx162);
              };
              r794 = dyn unique2(p238);
              return r794;
            };
            r796 = dyn sort(p239);
            return r796;
          };
          r798 = dyn sQuote13(p240);
          return r798;
        };
        r800 = dyn paste5[, collapse](p241, ", ");
        return r800;
      };
      r802 = dyn gettextf10("no function found corresponding to methods exports from %s for: %s", p237, p242);
      return r802;
    };
    r804 = dyn warning3[, domain, `call.`](p243, NA_LGL, FALSE);
    check L1028() else D351();
  L1035():
    addGenerics12 = ld addGenerics;
    check L1037() else D354();
  L1036():
    r807 = dyn base70(<sym addGenerics>);
    goto L214(r807);
  L1083():
    goto L226(r862);
  L1085():
    p259 = prom<V +>{
      sym76 = ldf c;
      base76 = ldf c in base;
      guard76 = `==`.4(sym76, base76);
      if guard76 then L4() else L5();
    L0(r864):
      return r864;
    L4():
      expMethods12 = ld expMethods;
      expMethods13 = force? expMethods12;
      checkMissing(expMethods13);
      exports10 = ld exports;
      exports11 = force? exports10;
      checkMissing(exports11);
      c281 = `is.object`(exports11);
      if c281 then L6() else L7(exports11);
    L5():
      r863 = dyn base76(<sym expMethods>, <lang `[`(exports, `!`(is.na(match(exports, allGenerics))))>);
      goto L0(r863);
    L1(dx174):
      c282 = ldf c in base;
      r873 = dyn c282(expMethods13, dx174);
      goto L0(r873);
    L6():
      dr136 = tryDispatchBuiltin.1("[", exports11);
      dc68 = getTryDispatchBuiltinDispatched(dr136);
      if dc68 then L8() else L7(dr136);
    L7(exports13):
      sym77 = ldf `is.na`;
      base77 = ldf `is.na` in base;
      guard77 = `==`.4(sym77, base77);
      if guard77 then L9() else L10();
    L2(exports16, r866):
      r871 = `!`(r866);
      __42 = ldf `[` in base;
      r872 = dyn __42(exports16, r871);
      goto L1(r872);
    L8():
      dx173 = getTryDispatchBuiltinValue(dr136);
      goto L1(dx173);
    L9():
      sym78 = ldf match;
      base78 = ldf match in base;
      guard78 = `==`.4(sym78, base78);
      if guard78 then L11() else L12();
    L10():
      r865 = dyn base77(<lang match(exports, allGenerics)>);
      goto L2(exports13, r865);
    L3(exports19, r868):
      is_na2 = ldf `is.na` in base;
      r870 = dyn is_na2(r868);
      goto L2(exports19, r870);
    L11():
      exports20 = ld exports;
      exports21 = force? exports20;
      checkMissing(exports21);
      allGenerics2 = ld allGenerics;
      allGenerics3 = force? allGenerics2;
      checkMissing(allGenerics3);
      match2 = ldf match in base;
      r869 = dyn match2(exports21, allGenerics3, NA_INT, NULL);
      goto L3(exports13, r869);
    L12():
      r867 = dyn base78(<sym exports>, <sym allGenerics>);
      goto L3(exports13, r867);
    };
    r875 = dyn unique4(p259);
    check L1086() else D381();
  L1205():
    expMethods34 = ld expMethods;
    check L1207() else D443();
  L1206():
    r998 = dyn base89(<sym expMethods>);
    goto L262(r998);
  L1213():
    p303 = prom<V +>{
      sym90 = ldf c;
      base90 = ldf c in base;
      guard90 = `==`.4(sym90, base90);
      if guard90 then L1() else L2();
    L0(r1011):
      return r1011;
    L1():
      exports34 = ld exports;
      exports35 = force? exports34;
      checkMissing(exports35);
      expClasses12 = ld expClasses;
      expClasses13 = force? expClasses12;
      checkMissing(expClasses13);
      expTables = ld expTables;
      expTables1 = force? expTables;
      checkMissing(expTables1);
      c310 = ldf c in base;
      r1012 = dyn c310(exports35, expClasses13, expTables1);
      goto L0(r1012);
    L2():
      r1010 = dyn base90(<sym exports>, <sym expClasses>, <sym expTables>);
      goto L0(r1010);
    };
    r1014 = dyn unique6(p303);
    check L1214() else D448();
  D351():
    deopt 1367 [r804];
  D354():
    deopt 1379 [addGenerics12];
  D381():
    deopt 1472 [r875];
  D443():
    deopt 1694 [expMethods34];
  D448():
    deopt 1709 [r1014];
  L215():
    goto L223();
  L223():
    sym74 = ldf c;
    base74 = ldf c in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L1072() else L1073();
  L263():
    goto L261();
  L1028():
    addGenerics8 = ld addGenerics;
    check L1029() else D352();
  L1037():
    addGenerics13 = force? addGenerics12;
    checkMissing(addGenerics13);
    length7 = ldf length in base;
    r809 = dyn length7(addGenerics13);
    check L1038() else D355();
  L1039():
    addGenerics14 = ld addGenerics;
    check L1040() else D356();
  L1086():
    st expMethods = r875;
    _in_5 = ldf `%in%`;
    check L1087() else D382();
  L1207():
    expMethods35 = force? expMethods34;
    checkMissing(expMethods35);
    length13 = ldf length in base;
    r1000 = dyn length13(expMethods35);
    check L1208() else D444();
  L1209():
    stop13 = ldf stop;
    check L1210() else D445();
  L1214():
    st exports = r1014;
    lev36 = ld lev;
    check L1215() else D449();
  D352():
    deopt 1368 [addGenerics8];
  D355():
    deopt 1382 [r809];
  D356():
    deopt 1383 [addGenerics14];
  D382():
    deopt 1475 [];
  D444():
    deopt 1697 [r1000];
  D445():
    deopt 1699 [];
  D449():
    deopt 1711 [lev36];
  L224(r856):
    st exports = r856;
    goto L225();
  L1029():
    addGenerics9 = force? addGenerics8;
    checkMissing(addGenerics9);
    c272 = `is.object`(addGenerics9);
    if c272 then L1030() else L1031(addGenerics9);
  L1038():
    goto L214(r809);
  L1040():
    addGenerics15 = force? addGenerics14;
    checkMissing(addGenerics15);
    c274 = `is.object`(addGenerics15);
    if c274 then L1041() else L1042(addGenerics15);
  L1072():
    exports8 = ld exports;
    check L1074() else D373();
  L1073():
    r855 = dyn base74(<sym exports>, <sym addGenerics>);
    goto L224(r855);
  L1087():
    p260 = prom<V +>{
      expMethods14 = ld expMethods;
      expMethods15 = force? expMethods14;
      checkMissing(expMethods15);
      return expMethods15;
    };
    p261 = prom<V +>{
      allGenerics4 = ld allGenerics;
      allGenerics5 = force? allGenerics4;
      checkMissing(allGenerics5);
      return allGenerics5;
    };
    r878 = dyn _in_5(p260, p261);
    check L1088() else D383();
  L1208():
    goto L262(r1000);
  L1210():
    p302 = prom<V +>{
      gettextf14 = ldf gettextf;
      p299 = prom<V +>{
        sQuote20 = ldf sQuote;
        p298 = prom<V +>{
          package119 = ld package;
          package120 = force? package119;
          checkMissing(package120);
          return package120;
        };
        r1002 = dyn sQuote20(p298);
        return r1002;
      };
      p301 = prom<V +>{
        paste9 = ldf paste;
        p300 = prom<V +>{
          expMethods36 = ld expMethods;
          expMethods37 = force? expMethods36;
          checkMissing(expMethods37);
          return expMethods37;
        };
        r1005 = dyn paste9[, collapse](p300, ", ");
        return r1005;
      };
      r1007 = dyn gettextf14("in package %s methods %s were specified for export but not defined", p299, p301);
      return r1007;
    };
    r1009 = dyn stop13[, domain](p302, NA_LGL);
    check L1211() else D446();
  L1215():
    lev37 = force? lev36;
    checkMissing(lev37);
    r1015 = `>`(lev37, 1);
    c311 = `as.logical`(r1015);
    if c311 then L264(c311) else L1216();
  D373():
    deopt 1450 [exports8];
  D383():
    deopt 1478 [r878];
  D446():
    deopt 1703 [r1009];
  L212(dx165):
    st addGenerics = dx165;
    goto L213();
  L216(dx168):
    st addGenerics = dx168;
    vapply4 = ldf vapply;
    check L1046() else D359();
  L264(c312):
    c317 = `as.logical`(c312);
    if c317 then L1219() else L265();
  L1030():
    dr128 = tryDispatchBuiltin.1("[", addGenerics9);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L1032() else L1031(dr128);
  L1031(addGenerics11):
    nowhere4 = ld nowhere;
    check L1033() else D353();
  L1041():
    dr130 = tryDispatchBuiltin.1("[", addGenerics15);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L1043() else L1042(dr130);
  L1042(addGenerics17):
    vapply3 = ldf vapply;
    check L1044() else D357();
  L1074():
    exports9 = force? exports8;
    checkMissing(exports9);
    addGenerics30 = ld addGenerics;
    check L1075() else D374();
  L1088():
    r879 = `!`(r878);
    st missingMethods = r879;
    sym79 = ldf any;
    base79 = ldf any in base;
    guard79 = `==`.4(sym79, base79);
    if guard79 then L1089() else L1090();
  L1211():
    goto L261();
  L1216():
    lev38 = ld lev;
    check L1217() else D450();
  D353():
    deopt 1370 [addGenerics11, nowhere4];
  D357():
    deopt 1386 [addGenerics17];
  D359():
    deopt 1394 [];
  D374():
    deopt 1452 [addGenerics30];
  D450():
    deopt 1715 [c311, lev38];
  L228(r881):
    c283 = `as.logical`(r881);
    if c283 then L1093() else L229();
  L265():
    goto L266(NULL);
  L266(r1021):
    goto L267();
  L1032():
    dx164 = getTryDispatchBuiltinValue(dr128);
    goto L212(dx164);
  L1033():
    nowhere5 = force? nowhere4;
    checkMissing(nowhere5);
    r805 = `!`(nowhere5);
    __38 = ldf `[` in base;
    r806 = dyn __38(addGenerics11, r805);
    goto L212(r806);
  L1043():
    dx167 = getTryDispatchBuiltinValue(dr130);
    goto L216(dx167);
  L1044():
    p244 = prom<V +>{
      addGenerics18 = ld addGenerics;
      addGenerics19 = force? addGenerics18;
      checkMissing(addGenerics19);
      return addGenerics19;
    };
    p245 = prom<V +>{
      r811 = clos inner2203017188;
      return r811;
    };
    r813 = dyn vapply3(p244, p245, NA_LGL);
    check L1045() else D358();
  L1046():
    p246 = prom<V +>{
      addGenerics20 = ld addGenerics;
      addGenerics21 = force? addGenerics20;
      checkMissing(addGenerics21);
      return addGenerics21;
    };
    p247 = prom<V +>{
      ___3 = ldf `:::`;
      r816 = dyn ___3("methods", ".findsGeneric");
      return r816;
    };
    p248 = prom<V +>{
      ns38 = ld ns;
      ns39 = force? ns38;
      checkMissing(ns39);
      return ns39;
    };
    r819 = dyn vapply4(p246, p247, 1, p248);
    check L1047() else D360();
  L1075():
    addGenerics31 = force? addGenerics30;
    checkMissing(addGenerics31);
    c279 = ldf c in base;
    r857 = dyn c279(exports9, addGenerics31);
    check L1076() else D375();
  L1089():
    missingMethods = ld missingMethods;
    check L1091() else D384();
  L1090():
    r880 = dyn base79(<sym missingMethods>);
    goto L228(r880);
  L1217():
    lev39 = force? lev38;
    checkMissing(lev39);
    r1016 = `==`(lev39, -5.0);
    c314 = `as.logical`(r1016);
    c315 = `||`(c311, c314);
    goto L264(c315);
  L1219():
    message16 = ldf message;
    check L1220() else D451();
  D358():
    deopt 1390 [addGenerics17, r813];
  D360():
    deopt 1399 [r819];
  D375():
    deopt 1455 [r857];
  D384():
    deopt 1483 [missingMethods];
  D451():
    deopt 1721 [];
  L229():
    goto L230();
  L230():
    ___4 = ldf `:::`;
    check L1097() else D388();
  L1045():
    __39 = ldf `[` in base;
    r814 = dyn __39(addGenerics17, r813);
    goto L216(r814);
  L1047():
    st ok = r819;
    sym71 = ldf all;
    base71 = ldf all in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L1048() else L1049();
  L1076():
    goto L224(r857);
  L1091():
    missingMethods1 = force? missingMethods;
    checkMissing(missingMethods1);
    any7 = ldf any in base;
    r882 = dyn any7(missingMethods1);
    check L1092() else D385();
  L1093():
    stop12 = ldf stop;
    check L1094() else D386();
  L1220():
    p305 = prom<V +>{
      dQuote12 = ldf dQuote;
      p304 = prom<V +>{
        package121 = ld package;
        package122 = force? package121;
        checkMissing(package122);
        return package122;
      };
      r1018 = dyn dQuote12(p304);
      return r1018;
    };
    r1020 = dyn message16("-- done processing S4 stuff for ", p305);
    check L1221() else D452();
  D385():
    deopt 1486 [r882];
  D386():
    deopt 1488 [];
  D388():
    deopt 1496 [];
  D452():
    deopt 1724 [r1020];
  L217(r821):
    r823 = `!`(r821);
    c275 = `as.logical`(r823);
    if c275 then L1052() else L218();
  L1048():
    ok = ld ok;
    check L1050() else D361();
  L1049():
    r820 = dyn base71(<sym ok>);
    goto L217(r820);
  L1092():
    goto L228(r882);
  L1094():
    p266 = prom<V +>{
      gettextf11 = ldf gettextf;
      p263 = prom<V +>{
        sQuote16 = ldf sQuote;
        p262 = prom<V +>{
          package117 = ld package;
          package118 = force? package117;
          checkMissing(package118);
          return package118;
        };
        r884 = dyn sQuote16(p262);
        return r884;
      };
      p265 = prom<V +>{
        paste7 = ldf paste;
        p264 = prom<V +>{
          expMethods16 = ld expMethods;
          expMethods17 = force? expMethods16;
          checkMissing(expMethods17);
          c284 = `is.object`(expMethods17);
          if c284 then L1() else L2(expMethods17);
        L0(dx176):
          return dx176;
        L1():
          dr138 = tryDispatchBuiltin.1("[", expMethods17);
          dc69 = getTryDispatchBuiltinDispatched(dr138);
          if dc69 then L3() else L2(dr138);
        L2(expMethods19):
          missingMethods2 = ld missingMethods;
          missingMethods3 = force? missingMethods2;
          __43 = ldf `[` in base;
          r886 = dyn __43(expMethods19, missingMethods3);
          goto L0(r886);
        L3():
          dx175 = getTryDispatchBuiltinValue(dr138);
          goto L0(dx175);
        };
        r888 = dyn paste7[, collapse](p264, ", ");
        return r888;
      };
      r890 = dyn gettextf11("in %s methods for export not found: %s", p263, p265);
      return r890;
    };
    r892 = dyn stop12[, domain](p266, NA_LGL);
    check L1095() else D387();
  L1097():
    r894 = dyn ___4("methods", ".TableMetaPrefix");
    check L1098() else D389();
  L1221():
    goto L266(r1020);
  D361():
    deopt 1403 [ok];
  D387():
    deopt 1492 [r892];
  D389():
    deopt 1499 [r894];
  L218():
    sym73 = ldf any;
    base73 = ldf any in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L1060() else L1061();
  L219(r847):
    goto L223();
  L1050():
    ok1 = force? ok;
    checkMissing(ok1);
    all = ldf all in base;
    r822 = dyn all(ok1);
    check L1051() else D362();
  L1052():
    sort1 = ldf sort;
    check L1053() else D363();
  L1095():
    goto L230();
  L1098():
    checkFun.0(r894);
    r895 = r894 as cls;
    r896 = dyn r895();
    check L1099() else D390();
  D362():
    deopt 1406 [r822];
  D363():
    deopt 1409 [];
  D390():
    deopt 1501 [r896];
  L220(r849):
    c277 = `as.logical`(r849);
    if c277 then L1064() else L221();
  L1051():
    goto L217(r822);
  L1053():
    p250 = prom<V +>{
      unique3 = ldf unique;
      p249 = prom<V +>{
        addGenerics22 = ld addGenerics;
        addGenerics23 = force? addGenerics22;
        checkMissing(addGenerics23);
        c276 = `is.object`(addGenerics23);
        if c276 then L1() else L2(addGenerics23);
      L0(dx170):
        return dx170;
      L1():
        dr132 = tryDispatchBuiltin.1("[", addGenerics23);
        dc66 = getTryDispatchBuiltinDispatched(dr132);
        if dc66 then L3() else L2(dr132);
      L2(addGenerics25):
        ok2 = ld ok;
        ok3 = force? ok2;
        checkMissing(ok3);
        r824 = `!`(ok3);
        __40 = ldf `[` in base;
        r825 = dyn __40(addGenerics25, r824);
        goto L0(r825);
      L3():
        dx169 = getTryDispatchBuiltinValue(dr132);
        goto L0(dx169);
      };
      r827 = dyn unique3(p249);
      return r827;
    };
    r829 = dyn sort1(p250);
    check L1054() else D364();
  L1060():
    ok4 = ld ok;
    check L1062() else D369();
  L1061():
    r848 = dyn base73(<lang `>`(ok, 1)>);
    goto L220(r848);
  L1099():
    st tPrefix = r896;
    unique5 = ldf unique;
    check L1100() else D391();
  D364():
    deopt 1411 [r829];
  D369():
    deopt 1430 [ok4];
  D391():
    deopt 1504 [];
  L221():
    goto L219(NULL);
  L1054():
    st bad = r829;
    ngettext = ldf ngettext;
    check L1055() else D365();
  L1062():
    ok5 = force? ok4;
    checkMissing(ok5);
    r850 = `>`(ok5, 1);
    any6 = ldf any in base;
    r851 = dyn any6(r850);
    check L1063() else D370();
  L1064():
    addGenerics26 = ld addGenerics;
    check L1065() else D371();
  L1100():
    p272 = prom<V +>{
      sym80 = ldf c;
      base80 = ldf c in base;
      guard80 = `==`.4(sym80, base80);
      if guard80 then L1() else L2();
    L0(r898):
      return r898;
    L1():
      ___5 = ldf `:::`;
      r899 = dyn ___5("methods", ".getGenerics");
      checkFun.0(r899);
      r900 = r899 as cls;
      p267 = prom<V +>{
        ns40 = ld ns;
        ns41 = force? ns40;
        checkMissing(ns41);
        return ns41;
      };
      p268 = prom<V +>{
        tPrefix = ld tPrefix;
        tPrefix1 = force? tPrefix;
        checkMissing(tPrefix1);
        return tPrefix1;
      };
      r903 = dyn r900(p267, p268);
      ___6 = ldf `:::`;
      r904 = dyn ___6("methods", ".getGenerics");
      checkFun.0(r904);
      r905 = r904 as cls;
      p270 = prom<V +>{
        parent_env1 = ldf `parent.env`;
        p269 = prom<V +>{
          ns42 = ld ns;
          ns43 = force? ns42;
          checkMissing(ns43);
          return ns43;
        };
        r907 = dyn parent_env1(p269);
        return r907;
      };
      p271 = prom<V +>{
        tPrefix2 = ld tPrefix;
        tPrefix3 = force? tPrefix2;
        checkMissing(tPrefix3);
        return tPrefix3;
      };
      r910 = dyn r905(p270, p271);
      c285 = ldf c in base;
      r911 = dyn c285(r903, r910);
      goto L0(r911);
    L2():
      r897 = dyn base80(<lang `:::`(methods, .getGenerics)(ns, tPrefix)>, <lang `:::`(methods, .getGenerics)(parent.env(ns), tPrefix)>);
      goto L0(r897);
    };
    r913 = dyn unique5(p272);
    check L1101() else D392();
  D365():
    deopt 1414 [];
  D370():
    deopt 1435 [r851];
  D371():
    deopt 1436 [addGenerics26];
  D392():
    deopt 1506 [r913];
  L1055():
    p251 = prom<V +>{
      sym72 = ldf length;
      base72 = ldf length in base;
      guard72 = `==`.4(sym72, base72);
      if guard72 then L1() else L2();
    L0(r831):
      return r831;
    L1():
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      length8 = ldf length in base;
      r832 = dyn length8(bad1);
      goto L0(r832);
    L2():
      r830 = dyn base72(<sym bad>);
      goto L0(r830);
    };
    r834 = dyn ngettext(p251, "Function found when exporting methods from the namespace %s which is not S4 generic: %s", "Functions found when exporting methods from the namespace %s which are not S4 generic: %s");
    check L1056() else D366();
  L1063():
    goto L220(r851);
  L1065():
    addGenerics27 = force? addGenerics26;
    checkMissing(addGenerics27);
    c278 = `is.object`(addGenerics27);
    if c278 then L1066() else L1067(addGenerics27);
  L1101():
    st allMethodTables = r913;
    _in_6 = ldf `%in%`;
    check L1102() else D393();
  D366():
    deopt 1418 [r834];
  D393():
    deopt 1509 [];
  L222(dx172):
    st addGenerics = dx172;
    goto L219(dx172);
  L1056():
    st msg = r834;
    stop11 = ldf stop;
    check L1057() else D367();
  L1066():
    dr134 = tryDispatchBuiltin.1("[", addGenerics27);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L1068() else L1067(dr134);
  L1067(addGenerics29):
    ok6 = ld ok;
    check L1069() else D372();
  L1102():
    p273 = prom<V +>{
      exports22 = ld exports;
      exports23 = force? exports22;
      checkMissing(exports23);
      return exports23;
    };
    p274 = prom<V +>{
      allGenerics6 = ld allGenerics;
      allGenerics7 = force? allGenerics6;
      checkMissing(allGenerics7);
      return allGenerics7;
    };
    r916 = dyn _in_6(p273, p274);
    check L1103() else D394();
  D367():
    deopt 1421 [];
  D372():
    deopt 1438 [addGenerics29, ok6];
  D394():
    deopt 1512 [r916];
  L1057():
    p258 = prom<V +>{
      sprintf = ldf sprintf;
      p252 = prom<V +>{
        msg4 = ld msg;
        msg5 = force? msg4;
        checkMissing(msg5);
        return msg5;
      };
      p254 = prom<V +>{
        sQuote14 = ldf sQuote;
        p253 = prom<V +>{
          package115 = ld package;
          package116 = force? package115;
          checkMissing(package116);
          return package116;
        };
        r837 = dyn sQuote14(p253);
        return r837;
      };
      p257 = prom<V +>{
        paste6 = ldf paste;
        p256 = prom<V +>{
          sQuote15 = ldf sQuote;
          p255 = prom<V +>{
            bad2 = ld bad;
            bad3 = force? bad2;
            checkMissing(bad3);
            return bad3;
          };
          r840 = dyn sQuote15(p255);
          return r840;
        };
        r842 = dyn paste6[, collapse](p256, ", ");
        return r842;
      };
      r844 = dyn sprintf(p252, p254, p257);
      return r844;
    };
    r846 = dyn stop11[, domain, `call.`](p258, NA_LGL, FALSE);
    check L1058() else D368();
  L1068():
    dx171 = getTryDispatchBuiltinValue(dr134);
    goto L222(dx171);
  L1069():
    ok7 = force? ok6;
    checkMissing(ok7);
    r852 = `<`(ok7, 2);
    __41 = ldf `[` in base;
    r853 = dyn __41(addGenerics29, r852);
    goto L222(r853);
  L1103():
    _in_7 = ldf `%in%`;
    check L1104() else D395();
  D368():
    deopt 1427 [r846];
  D395():
    deopt 1513 [r916];
  L1058():
    goto L219(r846);
  L1104():
    p275 = prom<V +>{
      exports24 = ld exports;
      exports25 = force? exports24;
      checkMissing(exports25);
      return exports25;
    };
    p276 = prom<V +>{
      expMethods20 = ld expMethods;
      expMethods21 = force? expMethods20;
      checkMissing(expMethods21);
      return expMethods21;
    };
    r919 = dyn _in_7(p275, p276);
    check L1105() else D396();
  D396():
    deopt 1516 [r916, r919];
  L1105():
    r920 = `!`(r919);
    r921 = `&&`(r916, r920);
    st needMethods = r921;
    sym81 = ldf any;
    base81 = ldf any in base;
    guard81 = `==`.4(sym81, base81);
    if guard81 then L1106() else L1107();
  L231(r923):
    c286 = `as.logical`(r923);
    if c286 then L1110() else L232();
  L1106():
    needMethods = ld needMethods;
    check L1108() else D397();
  L1107():
    r922 = dyn base81(<sym needMethods>);
    goto L231(r922);
  D397():
    deopt 1522 [needMethods];
  L232():
    goto L235();
  L235():
    allGenerics8 = ld allGenerics;
    check L1121() else D403();
  L1108():
    needMethods1 = force? needMethods;
    checkMissing(needMethods1);
    any8 = ldf any in base;
    r924 = dyn any8(needMethods1);
    check L1109() else D398();
  L1110():
    sym82 = ldf c;
    base82 = ldf c in base;
    guard82 = `==`.4(sym82, base82);
    if guard82 then L1111() else L1112();
  D398():
    deopt 1525 [r924];
  D403():
    deopt 1540 [allGenerics8];
  L233(r926):
    st expMethods = r926;
    goto L235();
  L1109():
    goto L231(r924);
  L1111():
    expMethods22 = ld expMethods;
    check L1113() else D399();
  L1112():
    r925 = dyn base82(<sym expMethods>, <lang `[`(exports, needMethods)>);
    goto L233(r925);
  L1121():
    allGenerics9 = force? allGenerics8;
    checkMissing(allGenerics9);
    c289 = `is.object`(allGenerics9);
    if c289 then L1122() else L1123(allGenerics9);
  D399():
    deopt 1528 [expMethods22];
  L236(dx180):
    st pm = dx180;
    sym83 = ldf length;
    base83 = ldf length in base;
    guard83 = `==`.4(sym83, base83);
    if guard83 then L1127() else L1128();
  L1113():
    expMethods23 = force? expMethods22;
    checkMissing(expMethods23);
    exports26 = ld exports;
    check L1114() else D400();
  L1122():
    dr142 = tryDispatchBuiltin.1("[", allGenerics9);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L1124() else L1123(dr142);
  L1123(allGenerics11):
    _in_8 = ldf `%in%`;
    check L1125() else D404();
  D400():
    deopt 1530 [exports26];
  D404():
    deopt 1543 [allGenerics11];
  L237(r936):
    c290 = `as.logical`(r936);
    if c290 then L1131() else L238();
  L1114():
    exports27 = force? exports26;
    checkMissing(exports27);
    c287 = `is.object`(exports27);
    if c287 then L1115() else L1116(exports27);
  L1124():
    dx179 = getTryDispatchBuiltinValue(dr142);
    goto L236(dx179);
  L1125():
    p277 = prom<V +>{
      allGenerics12 = ld allGenerics;
      allGenerics13 = force? allGenerics12;
      checkMissing(allGenerics13);
      return allGenerics13;
    };
    p278 = prom<V +>{
      expMethods24 = ld expMethods;
      expMethods25 = force? expMethods24;
      checkMissing(expMethods25);
      return expMethods25;
    };
    r932 = dyn _in_8(p277, p278);
    check L1126() else D405();
  L1127():
    pm = ld pm;
    check L1129() else D406();
  L1128():
    r935 = dyn base83(<sym pm>);
    goto L237(r935);
  D405():
    deopt 1546 [allGenerics11, r932];
  D406():
    deopt 1552 [pm];
  L234(dx178):
    c288 = ldf c in base;
    r928 = dyn c288(expMethods23, dx178);
    check L1119() else D402();
  L238():
    goto L241();
  L241():
    sym85 = ldf seq_along;
    base85 = ldf seq_along in base;
    guard85 = `==`.4(sym85, base85);
    if guard85 then L1144() else L1145();
  L1115():
    dr140 = tryDispatchBuiltin.1("[", exports27);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L1117() else L1116(dr140);
  L1116(exports29):
    needMethods2 = ld needMethods;
    check L1118() else D401();
  L1126():
    r933 = `!`(r932);
    __45 = ldf `[` in base;
    r934 = dyn __45(allGenerics11, r933);
    goto L236(r934);
  L1129():
    pm1 = force? pm;
    checkMissing(pm1);
    length10 = ldf length in base;
    r937 = dyn length10(pm1);
    check L1130() else D407();
  L1131():
    vapply5 = ldf vapply;
    check L1132() else D408();
  D401():
    deopt 1532 [exports29, needMethods2];
  D402():
    deopt 1536 [r928];
  D407():
    deopt 1555 [r937];
  D408():
    deopt 1557 [];
  L242(r950):
    s6 = toForSeq(r950);
    l29 = length(s6);
    i154 = 0;
    goto L243(i154);
  L1117():
    dx177 = getTryDispatchBuiltinValue(dr140);
    goto L234(dx177);
  L1118():
    needMethods3 = force? needMethods2;
    __44 = ldf `[` in base;
    r927 = dyn __44(exports29, needMethods3);
    goto L234(r927);
  L1119():
    goto L233(r928);
  L1130():
    goto L237(r937);
  L1132():
    p279 = prom<V +>{
      pm2 = ld pm;
      pm3 = force? pm2;
      checkMissing(pm3);
      return pm3;
    };
    p280 = prom<V +>{
      r939 = clos inner2009375240;
      return r939;
    };
    p281 = prom<V +>{
      logical = ldf logical;
      r941 = dyn logical(1);
      return r941;
    };
    r943 = dyn vapply5(p279, p280, p281);
    check L1133() else D409();
  L1144():
    expMethods28 = ld expMethods;
    check L1146() else D414();
  L1145():
    r949 = dyn base85(<sym expMethods>);
    goto L242(r949);
  D409():
    deopt 1561 [r943];
  D414():
    deopt 1578 [expMethods28];
  L243(i155):
    i156 = `+`.1(i155, 1);
    c293 = `<`.1(l29, i156);
    if c293 then L1147() else L260();
  L1133():
    st prim = r943;
    sym84 = ldf c;
    base84 = ldf c in base;
    guard84 = `==`.4(sym84, base84);
    if guard84 then L1134() else L1135();
  L1146():
    expMethods29 = force? expMethods28;
    checkMissing(expMethods29);
    r951 = seq_along(expMethods29);
    goto L242(r951);
  L239(r945):
    st expMethods = r945;
    goto L241();
  L260():
    x6 = `[[`(s6, i156, NULL, TRUE);
    st i = x6;
    expMethods30 = ld expMethods;
    check L1148() else D415();
  L1134():
    expMethods26 = ld expMethods;
    check L1136() else D410();
  L1135():
    r944 = dyn base84(<sym expMethods>, <lang `[`(pm, prim)>);
    goto L239(r944);
  L1147():
    goto L261();
  D410():
    deopt 1565 [expMethods26];
  D415():
    deopt 1581 [i156, expMethods30];
  L1136():
    expMethods27 = force? expMethods26;
    checkMissing(expMethods27);
    pm4 = ld pm;
    check L1137() else D411();
  L1148():
    expMethods31 = force? expMethods30;
    checkMissing(expMethods31);
    c294 = `is.object`(expMethods31);
    if c294 then L1149() else L1150(i156, expMethods31);
  D411():
    deopt 1567 [pm4];
  L244(i162, dx184):
    st mi = dx184;
    lev34 = ld lev;
    check L1153() else D417();
  L1137():
    pm5 = force? pm4;
    checkMissing(pm5);
    c291 = `is.object`(pm5);
    if c291 then L1138() else L1139(pm5);
  L1149():
    dr146 = tryDispatchBuiltin.1("[[", expMethods31);
    dc73 = getTryDispatchBuiltinDispatched(dr146);
    if dc73 then L1151() else L1150(i156, dr146);
  L1150(i160, expMethods33):
    i163 = ld i;
    check L1152() else D416();
  D416():
    deopt 1583 [i160, expMethods33, i163];
  D417():
    deopt 1587 [i162, lev34];
  L240(dx182):
    c292 = ldf c in base;
    r947 = dyn c292(expMethods27, dx182);
    check L1142() else D413();
  L1138():
    dr144 = tryDispatchBuiltin.1("[", pm5);
    dc72 = getTryDispatchBuiltinDispatched(dr144);
    if dc72 then L1140() else L1139(dr144);
  L1139(pm7):
    prim = ld prim;
    check L1141() else D412();
  L1151():
    dx183 = getTryDispatchBuiltinValue(dr146);
    goto L244(i156, dx183);
  L1152():
    i164 = force? i163;
    __47 = ldf `[[` in base;
    r952 = dyn __47(expMethods33, i164);
    goto L244(i160, r952);
  L1153():
    lev35 = force? lev34;
    checkMissing(lev35);
    r953 = `>`(lev35, 3);
    c295 = `as.logical`(r953);
    if c295 then L1154() else L245();
  D412():
    deopt 1569 [pm7, prim];
  D413():
    deopt 1573 [r947];
  L245():
    goto L246(i162);
  L246(i167):
    _in_9 = ldf `%in%`;
    check L1158() else D420();
  L1140():
    dx181 = getTryDispatchBuiltinValue(dr144);
    goto L240(dx181);
  L1141():
    prim1 = force? prim;
    __46 = ldf `[` in base;
    r946 = dyn __46(pm7, prim1);
    goto L240(r946);
  L1142():
    goto L239(r947);
  L1154():
    message15 = ldf message;
    check L1155() else D418();
  D418():
    deopt 1592 [i162];
  D420():
    deopt 1599 [i167];
  L1155():
    p283 = prom<V +>{
      sQuote17 = ldf sQuote;
      p282 = prom<V +>{
        mi = ld mi;
        mi1 = force? mi;
        checkMissing(mi1);
        return mi1;
      };
      r955 = dyn sQuote17(p282);
      return r955;
    };
    r957 = dyn message15("---- export method ", p283);
    check L1156() else D419();
  L1158():
    p284 = prom<V +>{
      mi2 = ld mi;
      mi3 = force? mi2;
      checkMissing(mi3);
      return mi3;
    };
    p285 = prom<V +>{
      exports30 = ld exports;
      exports31 = force? exports30;
      checkMissing(exports31);
      return exports31;
    };
    r961 = dyn _in_9(p284, p285);
    check L1159() else D421();
  D419():
    deopt 1595 [i162, r957];
  D421():
    deopt 1602 [i167, r961];
  L1156():
    goto L246(i162);
  L1159():
    r962 = `!`(r961);
    c296 = `as.logical`(r962);
    if c296 then L1160() else L247(i167, c296);
  L247(i169, c298):
    c302 = `as.logical`(c298);
    if c302 then L1164() else L248();
  L1160():
    exists = ldf exists;
    check L1161() else D422();
  D422():
    deopt 1605 [i167, c296];
  L248():
    goto L250(i169);
  L250(i176):
    paste8 = ldf paste0;
    check L1171() else D427();
  L1161():
    p286 = prom<V +>{
      mi4 = ld mi;
      mi5 = force? mi4;
      checkMissing(mi5);
      return mi5;
    };
    p287 = prom<V +>{
      ns44 = ld ns;
      ns45 = force? ns44;
      checkMissing(ns45);
      return ns45;
    };
    r965 = dyn exists[, envir, mode, inherits](p286, p287, "function", FALSE);
    check L1162() else D423();
  L1164():
    sym86 = ldf c;
    base86 = ldf c in base;
    guard86 = `==`.4(sym86, base86);
    if guard86 then L1165() else L1166();
  D423():
    deopt 1613 [i167, c296, r965];
  D427():
    deopt 1627 [i176];
  L249(i175, r967):
    st exports = r967;
    goto L250(i175);
  L1162():
    c299 = `as.logical`(r965);
    c300 = `&&`(c296, c299);
    goto L247(i167, c300);
  L1165():
    exports32 = ld exports;
    check L1167() else D424();
  L1166():
    r966 = dyn base86(<sym exports>, <sym mi>);
    goto L249(i169, r966);
  L1171():
    p288 = prom<V +>{
      tPrefix4 = ld tPrefix;
      tPrefix5 = force? tPrefix4;
      checkMissing(tPrefix5);
      return tPrefix5;
    };
    p289 = prom<V +>{
      mi8 = ld mi;
      mi9 = force? mi8;
      checkMissing(mi9);
      return mi9;
    };
    r972 = dyn paste8(p288, p289, ":");
    check L1172() else D428();
  D424():
    deopt 1617 [i169, exports32];
  D428():
    deopt 1631 [i176, r972];
  L1167():
    exports33 = force? exports32;
    checkMissing(exports33);
    mi6 = ld mi;
    check L1168() else D425();
  L1172():
    st pattern = r972;
    grep2 = ldf grep;
    check L1173() else D429();
  D425():
    deopt 1619 [i169, mi6];
  D429():
    deopt 1634 [i176];
  L1168():
    mi7 = force? mi6;
    checkMissing(mi7);
    c303 = ldf c in base;
    r968 = dyn c303(exports33, mi7);
    check L1169() else D426();
  L1173():
    p290 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p291 = prom<V +>{
      allMethodTables = ld allMethodTables;
      allMethodTables1 = force? allMethodTables;
      checkMissing(allMethodTables1);
      return allMethodTables1;
    };
    r975 = dyn grep2[, , fixed](p290, p291, TRUE);
    check L1174() else D430();
  D426():
    deopt 1622 [i169, r968];
  D430():
    deopt 1639 [i176, r975];
  L1169():
    goto L249(i169, r968);
  L1174():
    st ii = r975;
    sym87 = ldf length;
    base87 = ldf length in base;
    guard87 = `==`.4(sym87, base87);
    if guard87 then L1175() else L1176();
  L251(i179, r977):
    c304 = `as.logical`(r977);
    if c304 then L1179() else L252();
  L1175():
    ii = ld ii;
    check L1177() else D431();
  L1176():
    r976 = dyn base87(<sym ii>);
    goto L251(i176, r976);
  D431():
    deopt 1643 [i176, ii];
  L252():
    warning5 = ldf warning;
    check L1202() else D441();
  L259(i202):
    goto L243(i202);
  L1177():
    ii1 = force? ii;
    checkMissing(ii1);
    length11 = ldf length in base;
    r978 = dyn length11(ii1);
    check L1178() else D432();
  L1179():
    sym88 = ldf length;
    base88 = ldf length in base;
    guard88 = `==`.4(sym88, base88);
    if guard88 then L1180() else L1181();
  D432():
    deopt 1646 [i176, r978];
  D441():
    deopt 1682 [i179];
  L253(i184, r980):
    r982 = `>`(r980, 1);
    c305 = `as.logical`(r982);
    if c305 then L1184() else L254();
  L1178():
    goto L251(i176, r978);
  L1180():
    ii2 = ld ii;
    check L1182() else D433();
  L1181():
    r979 = dyn base88(<sym ii>);
    goto L253(i179, r979);
  L1202():
    p297 = prom<V +>{
      gettextf13 = ldf gettextf;
      p296 = prom<V +>{
        sQuote19 = ldf sQuote;
        p295 = prom<V +>{
          mi12 = ld mi;
          mi13 = force? mi12;
          checkMissing(mi13);
          return mi13;
        };
        r993 = dyn sQuote19(p295);
        return r993;
      };
      r995 = dyn gettextf13("failed to find metadata object for %s", p296);
      return r995;
    };
    r997 = dyn warning5[, `call.`, domain](p297, FALSE, NA_LGL);
    check L1203() else D442();
  D433():
    deopt 1649 [i179, ii2];
  D442():
    deopt 1688 [i179, r997];
  L254():
    goto L256(i184);
  L256(i191):
    allMethodTables2 = ld allMethodTables;
    check L1192() else D438();
  L1182():
    ii3 = force? ii2;
    checkMissing(ii3);
    length12 = ldf length in base;
    r981 = dyn length12(ii3);
    check L1183() else D434();
  L1184():
    warning4 = ldf warning;
    check L1185() else D435();
  L1203():
    goto L259(i179);
  D434():
    deopt 1652 [i179, r981];
  D435():
    deopt 1656 [i184];
  D438():
    deopt 1671 [i191, allMethodTables2];
  L1183():
    goto L253(i179, r981);
  L1185():
    p294 = prom<V +>{
      gettextf12 = ldf gettextf;
      p293 = prom<V +>{
        sQuote18 = ldf sQuote;
        p292 = prom<V +>{
          mi10 = ld mi;
          mi11 = force? mi10;
          checkMissing(mi11);
          return mi11;
        };
        r984 = dyn sQuote18(p292);
        return r984;
      };
      r986 = dyn gettextf12("multiple methods tables found for %s", p293);
      return r986;
    };
    r988 = dyn warning4[, `call.`, domain](p294, FALSE, NA_LGL);
    check L1186() else D436();
  L1192():
    allMethodTables3 = force? allMethodTables2;
    checkMissing(allMethodTables3);
    c307 = `is.object`(allMethodTables3);
    if c307 then L1193() else L1194(i191, allMethodTables3);
  D436():
    deopt 1662 [i184, r988];
  L257(i195, dx189):
    l30 = ld expTables;
    c308 = `is.object`(l30);
    if c308 then L1197() else L1198(i195, dx189, l30);
  L1186():
    ii4 = ld ii;
    check L1187() else D437();
  L1193():
    dr150 = tryDispatchBuiltin.1("[", allMethodTables3);
    dc75 = getTryDispatchBuiltinDispatched(dr150);
    if dc75 then L1195() else L1194(i191, dr150);
  L1194(i193, allMethodTables5):
    ii8 = ld ii;
    check L1196() else D439();
  D437():
    deopt 1663 [i184, ii4];
  D439():
    deopt 1673 [i193, allMethodTables5, ii8];
  L258(i199, dx194, dx195):
    st expTables = dx195;
    goto L259(i199);
  L1187():
    ii5 = force? ii4;
    checkMissing(ii5);
    c306 = `is.object`(ii5);
    if c306 then L1188() else L1189(i184, ii5);
  L1195():
    dx188 = getTryDispatchBuiltinValue(dr150);
    goto L257(i191, dx188);
  L1196():
    ii9 = force? ii8;
    __49 = ldf `[` in base;
    r990 = dyn __49(allMethodTables5, ii9);
    goto L257(i193, r990);
  L1197():
    dr152 = tryDispatchBuiltin.0("[[<-", l30, dx189);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L1199() else L1198(i195, dx189, dr152);
  L1198(i197, dx191, l32):
    i200 = ld i;
    check L1200() else D440();
  D440():
    deopt 1677 [i197, dx191, l32, dx189, i200];
  L255(i190, dx186):
    st ii = dx186;
    goto L256(i190);
  L1188():
    dr148 = tryDispatchBuiltin.1("[", ii5);
    dc74 = getTryDispatchBuiltinDispatched(dr148);
    if dc74 then L1190() else L1189(i184, dr148);
  L1189(i188, ii7):
    __48 = ldf `[` in base;
    r989 = dyn __48(ii7, 1);
    goto L255(i188, r989);
  L1199():
    dx193 = getTryDispatchBuiltinValue(dr152);
    goto L258(i195, dx189, dx193);
  L1200():
    i201 = force? i200;
    ____3 = ldf `[[<-` in base;
    r991 = dyn ____3(l32, dx189, i201);
    goto L258(i197, dx191, r991);
  L1190():
    dx185 = getTryDispatchBuiltinValue(dr148);
    goto L255(i184, dx185);
  }
}
fun inner3600167054(hookname, env, libname, pkgname) {
  (reg hookname:*, reg env:*, reg libname:*, reg pkgname:*) -+> V { var hookname:*, var env:*, var libname:*, var pkgname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg c:L, reg env4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg hookname1:*, reg hookname2:V, reg __:cls, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg tryCatch:cls, reg fun:cls, reg libname1:*, reg libname2:V, reg p:p(V +), reg pkgname1:*, reg pkgname2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg identity:*, reg identity1:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg res:*, reg res1:V, reg inherits:cls, reg r12:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg hookname3:*, reg hookname4:V, reg p4:p(V +), reg pkgname3:*, reg pkgname4:V, reg p5:p(V +), reg deparse:cls, reg conditionCall:cls, reg res2:*, reg res3:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg c4:L, reg r20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r21:V, reg p8:p(V +), reg conditionMessage:cls, reg res4:*, reg res5:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg r28:V |
    mkenv;
    st hookname = hookname;
    st env = env;
    st libname = libname;
    st pkgname = pkgname;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L12() else L2();
  L5():
    env1 = ld env;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(fun, `[[`(env, hookname))>);
    goto L0(r);
  D0():
    deopt 1 [env1];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L7():
    env2 = force? env1;
    checkMissing(env2);
    c = `is.object`(env2);
    if c then L8() else L9(env2);
  L12():
    tryCatch = ldf tryCatch;
    check L13() else D2();
  D2():
    deopt 10 [];
  L1(dx1):
    st fun = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L8():
    dr = tryDispatchBuiltin.1("[[", env2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(env4):
    hookname1 = ld hookname;
    check L11() else D1();
  L13():
    p2 = prom<V +>{
      fun = ldf fun;
      p = prom<V +>{
        libname1 = ld libname;
        libname2 = force? libname1;
        checkMissing(libname2);
        return libname2;
      };
      p1 = prom<V +>{
        pkgname1 = ld pkgname;
        pkgname2 = force? pkgname1;
        checkMissing(pkgname2);
        return pkgname2;
      };
      r6 = dyn fun(p, p1);
      return r6;
    };
    p3 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r9 = dyn tryCatch[, error](p2, p3);
    check L14() else D3();
  D1():
    deopt 3 [env4, hookname1];
  D3():
    deopt 14 [r9];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    hookname2 = force? hookname1;
    __ = ldf `[[` in base;
    r2 = dyn __(env4, hookname2);
    goto L1(r2);
  L14():
    st res = r9;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r11):
    c3 = `as.logical`(r11);
    if c3 then L19() else L4();
  L15():
    res = ld res;
    check L17() else D4();
  L16():
    r10 = dyn base1(<sym res>, "error");
    goto L3(r10);
  D4():
    deopt 18 [res];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L17():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r12 = dyn inherits(res1, "error", FALSE);
    check L18() else D5();
  L19():
    stop = ldf stop;
    check L20() else D6();
  D5():
    deopt 23 [r12];
  D6():
    deopt 25 [];
  L18():
    goto L3(r12);
  L20():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        hookname3 = ld hookname;
        hookname4 = force? hookname3;
        checkMissing(hookname4);
        return hookname4;
      };
      p5 = prom<V +>{
        pkgname3 = ld pkgname;
        pkgname4 = force? pkgname3;
        checkMissing(pkgname4);
        return pkgname4;
      };
      p8 = prom<V +>{
        deparse = ldf deparse;
        p7 = prom<V +>{
          conditionCall = ldf conditionCall;
          p6 = prom<V +>{
            res2 = ld res;
            res3 = force? res2;
            checkMissing(res3);
            return res3;
          };
          r16 = dyn conditionCall(p6);
          return r16;
        };
        r18 = dyn deparse(p7);
        c4 = `is.object`(r18);
        if c4 then L1() else L2(r18);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", r18);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r20):
        __1 = ldf `[` in base;
        r21 = dyn __1(r20, 1);
        goto L0(r21);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p10 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p9 = prom<V +>{
          res4 = ld res;
          res5 = force? res4;
          checkMissing(res5);
          return res5;
        };
        r24 = dyn conditionMessage(p9);
        return r24;
      };
      r26 = dyn gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", p4, "loadNamespace", p5, p8, p10);
      return r26;
    };
    r28 = dyn stop[, `call.`, domain](p11, FALSE, NA_LGL);
    check L21() else D7();
  D7():
    deopt 31 [r28];
  L21():
    popenv;
    return r28;
  }
}
fun inner2865193510(pkgname, pkgpath) {
  (reg pkgname:*, reg pkgpath:*) -+> V { var pkgname:*, var pkgpath:*, reg getHook:cls, reg packageEvent:cls, reg pkgname1:*, reg pkgname2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg hooks:*, reg hooks1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg try:cls, reg fun:cls, reg pkgname3:*, reg pkgname4:V, reg p2:p(V +), reg pkgpath1:*, reg pkgpath2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st pkgname = pkgname;
    st pkgpath = pkgpath;
    getHook = ldf getHook;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      packageEvent = ldf packageEvent;
      p = prom<V +>{
        pkgname1 = ld pkgname;
        pkgname2 = force? pkgname1;
        checkMissing(pkgname2);
        return pkgname2;
      };
      r1 = dyn packageEvent(p, "onLoad");
      return r1;
    };
    r3 = dyn getHook(p1);
    check L3() else D1();
  D1():
    deopt 3 [r3];
  L3():
    st hooks = r3;
    hooks = ld hooks;
    check L4() else D2();
  D2():
    deopt 5 [hooks];
  L4():
    hooks1 = force? hooks;
    checkMissing(hooks1);
    s = toForSeq(hooks1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L5() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st fun = x;
    try = ldf try;
    check L6() else D3();
  L5():
    invisible.0();
    popenv;
    return i2;
  D3():
    deopt 8 [i2];
  L6():
    p4 = prom<V +>{
      fun = ldf fun;
      p2 = prom<V +>{
        pkgname3 = ld pkgname;
        pkgname4 = force? pkgname3;
        checkMissing(pkgname4);
        return pkgname4;
      };
      p3 = prom<V +>{
        pkgpath1 = ld pkgpath;
        pkgpath2 = force? pkgpath1;
        checkMissing(pkgpath2);
        return pkgpath2;
      };
      r6 = dyn fun(p2, p3);
      return r6;
    };
    r8 = dyn try(p4);
    check L7() else D4();
  D4():
    deopt 10 [i2, r8];
  L7():
    goto L0(i2);
  }
}
fun inner3061699934(name, version, lib) {
  (reg name:*, reg version:*, reg lib:*) -+> V { var name:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var lib:*, reg lib_isMissing:L, reg lib_orDefault:*, reg new_env:cls, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg p:p(V +), reg r1:V, reg paste0:cls, reg name1:*, reg name2:V, reg p1:p(V +), reg r3:V, reg l:*, reg attr__:cls, reg r4:V, reg new_env1:cls, reg impenv:*, reg impenv1:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg as_name:cls, reg name3:*, reg name4:V, reg p3:p(V +), reg r10:V, reg as_character:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg version1:*, reg version2:V, reg as_character1:cls, reg r14:V, reg new_env2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg baseenv:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg info:*, reg info1:V, reg l1:*, reg c:L, reg info3:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg name5:*, reg name6:V, reg version3:*, reg version4:V, reg c1:cls, reg r23:V, reg l4:*, reg c2:L, reg r25:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg setNamespaceInfo:cls, reg env:*, reg env1:V, reg p5:p(V +), reg new_env3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg baseenv1:cls, reg r32:V, reg p6:p(V +), reg r34:V, reg p7:p(V +), reg r36:V, reg new_env4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg baseenv2:cls, reg r39:V, reg p8:p(V +), reg r41:V, reg paste1:cls, reg name7:*, reg name8:V, reg p9:p(V +), reg r43:V, reg l7:*, reg attr__1:cls, reg r44:V, reg setNamespaceInfo1:cls, reg env2:*, reg env3:V, reg p10:p(V +), reg dimpenv:*, reg dimpenv1:V, reg p11:p(V +), reg r47:V, reg setNamespaceInfo2:cls, reg env4:*, reg env5:V, reg p12:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg list:cls, reg r51:V, reg p13:p(V +), reg r53:V, reg setNamespaceInfo3:cls, reg env6:*, reg env7:V, reg p14:p(V +), reg normalizePath:cls, reg file_path:cls, reg lib1:*, reg lib2:V, reg p15:p(V +), reg name9:*, reg name10:V, reg p16:p(V +), reg r57:V, reg p17:p(V +), reg r59:V, reg p18:p(V +), reg r61:V, reg setNamespaceInfo4:cls, reg env8:*, reg env9:V, reg p19:p(V +), reg r63:V, reg setNamespaceInfo5:cls, reg env10:*, reg env11:V, reg p20:p(V +), reg matrix:cls, reg r65:V, reg p21:p(V +), reg r67:V, reg new_env5:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg r69:V, reg baseenv3:cls, reg r70:V, reg p22:p(V +), reg r72:V, reg l8:*, reg c3:L, reg r74:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg name11:*, reg name12:V, reg env12:*, reg env13:V, reg registerNamespace:cls, reg r80:V, reg env14:*, reg env15:V |
    mkenv;
    st name = name;
    version_isMissing = missing.0(version);
    if version_isMissing then L0(NULL) else L0(version);
  L0(version_orDefault):
    st version = version_orDefault;
    lib_isMissing = missing.0(lib);
    if lib_isMissing then L1(NULL) else L1(lib);
  L1(lib_orDefault):
    st lib = lib_orDefault;
    new_env = ldf `new.env`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
      _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
      checkMissing(_BaseNamespaceEnv1);
      return _BaseNamespaceEnv1;
    };
    r1 = dyn new_env[parent, hash](p, TRUE);
    check L7() else D1();
  D1():
    deopt 6 [r1];
  L7():
    st impenv = r1;
    paste0 = ldf paste0;
    check L8() else D2();
  D2():
    deopt 9 [];
  L8():
    p1 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r3 = dyn paste0("imports:", p1);
    check L9() else D3();
  D3():
    deopt 12 [r3];
  L9():
    l = ld impenv;
    attr__ = ldf `attr<-`;
    check L10() else D4();
  D4():
    deopt 14 [r3, l, r3];
  L10():
    r4 = dyn attr__(l, NULL, "name", r3);
    check L11() else D5();
  D5():
    deopt 17 [r3, r4];
  L11():
    st impenv = r4;
    new_env1 = ldf `new.env`;
    check L12() else D6();
  D6():
    deopt 20 [];
  L12():
    p2 = prom<V +>{
      impenv = ld impenv;
      impenv1 = force? impenv;
      checkMissing(impenv1);
      return impenv1;
    };
    r6 = dyn new_env1[parent, hash](p2, TRUE);
    check L13() else D7();
  D7():
    deopt 25 [r6];
  L13():
    st env = r6;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(r8):
    st name = r8;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L14():
    as_name = ldf `as.name`;
    check L16() else D8();
  L15():
    r7 = dyn base(<lang as.name(name)>);
    goto L2(r7);
  D8():
    deopt 30 [];
  L3(r13):
    st version = r13;
    new_env2 = ldf `new.env`;
    check L23() else D13();
  L16():
    p3 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    r10 = dyn as_name(p3);
    check L17() else D9();
  L19():
    version1 = ld version;
    check L21() else D11();
  L20():
    r12 = dyn base1(<sym version>);
    goto L3(r12);
  D9():
    deopt 32 [r10];
  D11():
    deopt 38 [version1];
  D13():
    deopt 44 [];
  L17():
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(r10);
    check L18() else D10();
  L21():
    version2 = force? version1;
    checkMissing(version2);
    as_character1 = ldf `as.character` in base;
    r14 = dyn as_character1(version2);
    check L22() else D12();
  L23():
    p4 = prom<V +>{
      sym2 = ldf baseenv;
      base2 = ldf baseenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      baseenv = ldf baseenv in base;
      r17 = dyn baseenv();
      goto L0(r17);
    L2():
      r15 = dyn base2();
      goto L0(r15);
    };
    r19 = dyn new_env2[hash, parent](TRUE, p4);
    check L24() else D14();
  D10():
    deopt 34 [r11];
  D12():
    deopt 41 [r14];
  D14():
    deopt 49 [r19];
  L18():
    goto L2(r11);
  L22():
    goto L3(r14);
  L24():
    st info = r19;
    info = ld info;
    check L25() else D15();
  D15():
    deopt 51 [info];
  L25():
    info1 = force? info;
    checkMissing(info1);
    l1 = ld env;
    c = `is.object`(l1);
    if c then L27() else L28(info1, l1);
  L26(dx1):
    st env = dx1;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L27():
    dr = tryDispatchBuiltin.0("$<-", l1, info1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(info1, dr);
  L28(info3, l3):
    r20 = `$<-`(l3, <sym .__NAMESPACE__.>, info1);
    goto L26(r20);
  L4(r22):
    l4 = ld info;
    c2 = `is.object`(l4);
    if c2 then L36() else L37(r22, l4);
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L30():
    name5 = ld name;
    check L32() else D16();
  L31():
    r21 = dyn base3[name, version](<sym name>, <sym version>);
    goto L4(r21);
  D16():
    deopt 58 [name5];
  L32():
    name6 = force? name5;
    checkMissing(name6);
    version3 = ld version;
    check L33() else D17();
  L35(dx3):
    st info = dx3;
    setNamespaceInfo = ldf setNamespaceInfo;
    check L39() else D19();
  L36():
    dr2 = tryDispatchBuiltin.0("$<-", l4, r22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(r22, dr2);
  L37(r25, l6):
    r28 = `$<-`(l6, <sym spec>, r22);
    goto L35(r28);
  D17():
    deopt 61 [version3];
  D19():
    deopt 70 [];
  L33():
    version4 = force? version3;
    checkMissing(version4);
    c1 = ldf c in base;
    r23 = dyn c1(name6, version4);
    check L34() else D18();
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(dx2);
  L39():
    p5 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p7 = prom<V +>{
      new_env3 = ldf `new.env`;
      p6 = prom<V +>{
        sym4 = ldf baseenv;
        base4 = ldf baseenv in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r31):
        return r31;
      L1():
        baseenv1 = ldf baseenv in base;
        r32 = dyn baseenv1();
        goto L0(r32);
      L2():
        r30 = dyn base4();
        goto L0(r30);
      };
      r34 = dyn new_env3[hash, parent](TRUE, p6);
      return r34;
    };
    r36 = dyn setNamespaceInfo(p5, "exports", p7);
    check L40() else D20();
  D18():
    deopt 65 [r23];
  D20():
    deopt 74 [r36];
  L34():
    goto L4(r23);
  L40():
    new_env4 = ldf `new.env`;
    check L41() else D21();
  D21():
    deopt 76 [];
  L41():
    p8 = prom<V +>{
      sym5 = ldf baseenv;
      base5 = ldf baseenv in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      baseenv2 = ldf baseenv in base;
      r39 = dyn baseenv2();
      goto L0(r39);
    L2():
      r37 = dyn base5();
      goto L0(r37);
    };
    r41 = dyn new_env4[parent, hash](p8, TRUE);
    check L42() else D22();
  D22():
    deopt 81 [r41];
  L42():
    st dimpenv = r41;
    paste1 = ldf paste0;
    check L43() else D23();
  D23():
    deopt 84 [];
  L43():
    p9 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    r43 = dyn paste1("lazydata:", p9);
    check L44() else D24();
  D24():
    deopt 87 [r43];
  L44():
    l7 = ld dimpenv;
    attr__1 = ldf `attr<-`;
    check L45() else D25();
  D25():
    deopt 89 [r43, l7, r43];
  L45():
    r44 = dyn attr__1(l7, NULL, "name", r43);
    check L46() else D26();
  D26():
    deopt 92 [r43, r44];
  L46():
    st dimpenv = r44;
    setNamespaceInfo1 = ldf setNamespaceInfo;
    check L47() else D27();
  D27():
    deopt 95 [];
  L47():
    p10 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    p11 = prom<V +>{
      dimpenv = ld dimpenv;
      dimpenv1 = force? dimpenv;
      checkMissing(dimpenv1);
      return dimpenv1;
    };
    r47 = dyn setNamespaceInfo1(p10, "lazydata", p11);
    check L48() else D28();
  D28():
    deopt 99 [r47];
  L48():
    setNamespaceInfo2 = ldf setNamespaceInfo;
    check L49() else D29();
  D29():
    deopt 101 [];
  L49():
    p12 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    p13 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      list = ldf list in base;
      r51 = dyn list(TRUE);
      goto L0(r51);
    L2():
      r49 = dyn base6[base](TRUE);
      goto L0(r49);
    };
    r53 = dyn setNamespaceInfo2(p12, "imports", p13);
    check L50() else D30();
  D30():
    deopt 105 [r53];
  L50():
    setNamespaceInfo3 = ldf setNamespaceInfo;
    check L51() else D31();
  D31():
    deopt 107 [];
  L51():
    p14 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    p18 = prom<V +>{
      normalizePath = ldf normalizePath;
      p17 = prom<V +>{
        file_path = ldf `file.path`;
        p15 = prom<V +>{
          lib1 = ld lib;
          lib2 = force? lib1;
          checkMissing(lib2);
          return lib2;
        };
        p16 = prom<V +>{
          name9 = ld name;
          name10 = force? name9;
          checkMissing(name10);
          return name10;
        };
        r57 = dyn file_path(p15, p16);
        return r57;
      };
      r59 = dyn normalizePath(p17, "/", TRUE);
      return r59;
    };
    r61 = dyn setNamespaceInfo3(p14, "path", p18);
    check L52() else D32();
  D32():
    deopt 111 [r61];
  L52():
    setNamespaceInfo4 = ldf setNamespaceInfo;
    check L53() else D33();
  D33():
    deopt 113 [];
  L53():
    p19 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r63 = dyn setNamespaceInfo4(p19, "dynlibs", NULL);
    check L54() else D34();
  D34():
    deopt 117 [r63];
  L54():
    setNamespaceInfo5 = ldf setNamespaceInfo;
    check L55() else D35();
  D35():
    deopt 119 [];
  L55():
    p20 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    p21 = prom<V +>{
      matrix = ldf matrix;
      r65 = dyn matrix(NA_STR, 0, 4);
      return r65;
    };
    r67 = dyn setNamespaceInfo5(p20, "S3methods", p21);
    check L56() else D36();
  D36():
    deopt 123 [r67];
  L56():
    new_env5 = ldf `new.env`;
    check L57() else D37();
  D37():
    deopt 125 [];
  L57():
    p22 = prom<V +>{
      sym7 = ldf baseenv;
      base7 = ldf baseenv in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      baseenv3 = ldf baseenv in base;
      r70 = dyn baseenv3();
      goto L0(r70);
    L2():
      r68 = dyn base7();
      goto L0(r68);
    };
    r72 = dyn new_env5[hash, parent](TRUE, p22);
    check L58() else D38();
  D38():
    deopt 130 [r72];
  L58():
    l8 = ld env;
    c3 = `is.object`(l8);
    if c3 then L60() else L61(r72, l8);
  L59(dx5):
    st env = dx5;
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L63() else L64();
  L60():
    dr4 = tryDispatchBuiltin.0("$<-", l8, r72);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(r72, dr4);
  L61(r74, l10):
    r77 = `$<-`(l10, <sym .__S3MethodsTable__.>, r72);
    goto L59(r77);
  L5():
    env14 = ld env;
    check L68() else D42();
  L62():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L59(dx4);
  L63():
    name11 = ld name;
    check L65() else D39();
  L64():
    r78 = dyn base8(<lang registerNamespace(name, env)>);
    goto L5();
  D39():
    deopt 136 [name11];
  D42():
    deopt 142 [env14];
  L65():
    name12 = force? name11;
    checkMissing(name12);
    env12 = ld env;
    check L66() else D40();
  L68():
    env15 = force? env14;
    checkMissing(env15);
    popenv;
    return env15;
  D40():
    deopt 138 [env12];
  L66():
    env13 = force? env12;
    checkMissing(env13);
    registerNamespace = ldf registerNamespace in base;
    r80 = dyn registerNamespace(name12, env13);
    check L67() else D41();
  D41():
    deopt 141 [r80];
  L67():
    goto L5();
  }
}
fun inner2310282661(ns) {
  (reg ns:*) -+> V { var ns:*, reg r:cls, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r2:V, reg namespaceIsSealed:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r4:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg getNamespaceName:cls, reg ns5:*, reg ns6:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg lockEnvironment:cls, reg ns7:*, reg ns8:V, reg p6:p(V +), reg r15:V, reg lockEnvironment1:cls, reg parent_env:cls, reg ns9:*, reg ns10:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V |
    mkenv;
    st ns = ns;
    r = clos inner2310282661;
    st namespaceIsSealed = r;
    asNamespace = ldf asNamespace;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r2 = dyn asNamespace[, `base.OK`](p, FALSE);
    check L3() else D1();
  D1():
    deopt 8 [r2];
  L3():
    st ns = r2;
    namespaceIsSealed = ldf namespaceIsSealed;
    check L4() else D2();
  D2():
    deopt 11 [];
  L4():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r4 = dyn namespaceIsSealed(p1);
    check L5() else D3();
  D3():
    deopt 13 [r4];
  L5():
    c = `as.logical`(r4);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    lockEnvironment = ldf lockEnvironment;
    check L10() else D6();
  L6():
    stop = ldf stop;
    check L7() else D4();
  D4():
    deopt 15 [];
  D6():
    deopt 25 [];
  L7():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          getNamespaceName = ldf getNamespaceName;
          p2 = prom<V +>{
            ns5 = ld ns;
            ns6 = force? ns5;
            checkMissing(ns6);
            return ns6;
          };
          r6 = dyn getNamespaceName(p2);
          return r6;
        };
        r8 = dyn sQuote(p3);
        return r8;
      };
      r10 = dyn gettextf("namespace %s is already sealed in 'loadNamespace'", p4);
      return r10;
    };
    r12 = dyn stop[, `call.`, domain](p5, FALSE, NA_LGL);
    check L8() else D5();
  L10():
    p6 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r15 = dyn lockEnvironment(p6, TRUE);
    check L11() else D7();
  D5():
    deopt 21 [r12];
  D7():
    deopt 28 [r15];
  L8():
    goto L1();
  L11():
    lockEnvironment1 = ldf lockEnvironment;
    check L12() else D8();
  D8():
    deopt 30 [];
  L12():
    p8 = prom<V +>{
      parent_env = ldf `parent.env`;
      p7 = prom<V +>{
        ns9 = ld ns;
        ns10 = force? ns9;
        checkMissing(ns10);
        return ns10;
      };
      r17 = dyn parent_env(p7);
      return r17;
    };
    r19 = dyn lockEnvironment1(p8, TRUE);
    check L13() else D9();
  D9():
    deopt 33 [r19];
  L13():
    popenv;
    return r19;
  }
}
fun inner482767441(ns, newlibs) {
  (reg ns:*, reg newlibs:*) -+> V { var ns:*, var newlibs:*, reg _getNamespaceInfo:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg setNamespaceInfo:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg dynlibs:*, reg dynlibs1:V, reg newlibs1:*, reg newlibs2:V, reg c:cls, reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st ns = ns;
    st newlibs = newlibs;
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn _getNamespaceInfo(p, "dynlibs");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    st dynlibs = r1;
    setNamespaceInfo = ldf setNamespaceInfo;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      dynlibs = ld dynlibs;
      dynlibs1 = force? dynlibs;
      checkMissing(dynlibs1);
      newlibs1 = ld newlibs;
      newlibs2 = force? newlibs1;
      checkMissing(newlibs2);
      c = ldf c in base;
      r5 = dyn c(dynlibs1, newlibs2);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym dynlibs>, <sym newlibs>);
      goto L0(r3);
    };
    r7 = dyn setNamespaceInfo(p1, "dynlibs", p2);
    check L3() else D3();
  D3():
    deopt 11 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun inner3893419458(dll, lib, env, nativeRoutines) {
  (reg dll:*, reg lib:*, reg env:*, reg nativeRoutines:*) -+> V { var dll:*, var lib:*, var env:*, var nativeRoutines:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nativeRoutines1:*, reg nativeRoutines2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg character1:cls, reg r7:V, reg character2:cls, reg r8:V, reg nativeRoutines3:*, reg nativeRoutines4:V, reg c1:L, reg nativeRoutines6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg c2:L, reg nativeRoutines7:*, reg nativeRoutines8:V, reg c3:L, reg nativeRoutines10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg getDLLRegisteredRoutines_DLLInfo:cls, reg dll1:*, reg dll2:V, reg p:p(V +), reg r12:V, reg lapply:cls, reg routines:*, reg routines1:V, reg p1:p(V +), reg r14:cls, reg p2:p(V +), reg r16:V, reg nativeRoutines11:*, reg nativeRoutines12:V, reg c4:L, reg nativeRoutines14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg symNames:*, reg symNames1:V, reg length1:cls, reg r21:V, reg c5:L, reg getNativeSymbolInfo:cls, reg symNames2:*, reg symNames3:V, reg p3:p(V +), reg dll3:*, reg dll4:V, reg p4:p(V +), reg r24:V, reg lapply1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg symNames4:*, reg symNames5:V, reg r27:I, reg p5:p(V +), reg r29:cls, reg p6:p(V +), reg r31:V, reg varnames:*, reg varnames1:V, reg l:*, reg names__:cls, reg r33:V, reg symnames:*, reg symnames1:V |
    mkenv;
    st dll = dll;
    st lib = lib;
    st env = env;
    st nativeRoutines = nativeRoutines;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L12() else L1();
  L8():
    nativeRoutines1 = ld nativeRoutines;
    check L10() else D0();
  L9():
    r = dyn base(<sym nativeRoutines>);
    goto L0(r);
  D0():
    deopt 2 [nativeRoutines1];
  L1():
    character1 = ldf character;
    check L17() else D4();
  L10():
    nativeRoutines2 = force? nativeRoutines1;
    checkMissing(nativeRoutines2);
    length = ldf length in base;
    r2 = dyn length(nativeRoutines2);
    check L11() else D1();
  L12():
    character = ldf character;
    check L13() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L11():
    goto L0(r2);
  L13():
    r4 = dyn character();
    check L14() else D3();
  L17():
    r7 = dyn character1();
    check L18() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 16 [r7];
  L14():
    popenv;
    return r4;
  L18():
    st varnames = r7;
    character2 = ldf character;
    check L19() else D6();
  D6():
    deopt 19 [];
  L19():
    r8 = dyn character2();
    check L20() else D7();
  D7():
    deopt 20 [r8];
  L20():
    st symnames = r8;
    nativeRoutines3 = ld nativeRoutines;
    check L21() else D8();
  D8():
    deopt 22 [nativeRoutines3];
  L21():
    nativeRoutines4 = force? nativeRoutines3;
    checkMissing(nativeRoutines4);
    c1 = `is.object`(nativeRoutines4);
    if c1 then L23() else L24(nativeRoutines4);
  L22(dx1):
    c2 = `as.logical`(dx1);
    if c2 then L26() else L3();
  L23():
    dr = tryDispatchBuiltin.1("$", nativeRoutines4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(nativeRoutines6):
    r9 = `$`(nativeRoutines6, <sym useRegistration>);
    goto L22(r9);
  L3():
    goto L4();
  L4():
    nativeRoutines11 = ld nativeRoutines;
    check L37() else D14();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L26():
    nativeRoutines7 = ld nativeRoutines;
    check L27() else D9();
  D9():
    deopt 25 [nativeRoutines7];
  D14():
    deopt 43 [nativeRoutines11];
  L27():
    nativeRoutines8 = force? nativeRoutines7;
    checkMissing(nativeRoutines8);
    c3 = `is.object`(nativeRoutines8);
    if c3 then L29() else L30(nativeRoutines8);
  L37():
    nativeRoutines12 = force? nativeRoutines11;
    checkMissing(nativeRoutines12);
    c4 = `is.object`(nativeRoutines12);
    if c4 then L39() else L40(nativeRoutines12);
  L28(dx3):
    st fixes = dx3;
    getDLLRegisteredRoutines_DLLInfo = ldf `getDLLRegisteredRoutines.DLLInfo`;
    check L32() else D10();
  L29():
    dr2 = tryDispatchBuiltin.1("$", nativeRoutines8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(nativeRoutines10):
    r10 = `$`(nativeRoutines10, <sym registrationFixes>);
    goto L28(r10);
  L38(dx5):
    st symNames = dx5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L39():
    dr4 = tryDispatchBuiltin.1("$", nativeRoutines12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(nativeRoutines14):
    r18 = `$`(nativeRoutines14, <sym symbolNames>);
    goto L38(r18);
  D10():
    deopt 30 [];
  L5(r20):
    c5 = `as.logical`(r20);
    if c5 then L46() else L6();
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L32():
    p = prom<V +>{
      dll1 = ld dll;
      dll2 = force? dll1;
      checkMissing(dll2);
      return dll2;
    };
    r12 = dyn getDLLRegisteredRoutines_DLLInfo[, addNames](p, FALSE);
    check L33() else D11();
  L41():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx4);
  L42():
    symNames = ld symNames;
    check L44() else D15();
  L43():
    r19 = dyn base1(<sym symNames>);
    goto L5(r19);
  D11():
    deopt 34 [r12];
  D15():
    deopt 49 [symNames];
  L6():
    goto L7();
  L7():
    varnames = ld varnames;
    check L52() else D21();
  L33():
    st routines = r12;
    lapply = ldf lapply;
    check L34() else D12();
  L44():
    symNames1 = force? symNames;
    checkMissing(symNames1);
    length1 = ldf length in base;
    r21 = dyn length1(symNames1);
    check L45() else D16();
  L46():
    getNativeSymbolInfo = ldf getNativeSymbolInfo;
    check L47() else D17();
  D12():
    deopt 37 [];
  D16():
    deopt 52 [r21];
  D17():
    deopt 54 [];
  D21():
    deopt 70 [varnames];
  L34():
    p1 = prom<V +>{
      routines = ld routines;
      routines1 = force? routines;
      checkMissing(routines1);
      return routines1;
    };
    p2 = prom<V +>{
      r14 = clos inner657253850;
      return r14;
    };
    r16 = dyn lapply(p1, p2);
    check L35() else D13();
  L45():
    goto L5(r21);
  L47():
    p3 = prom<V +>{
      symNames2 = ld symNames;
      symNames3 = force? symNames2;
      checkMissing(symNames3);
      return symNames3;
    };
    p4 = prom<V +>{
      dll3 = ld dll;
      dll4 = force? dll3;
      checkMissing(dll4);
      return dll4;
    };
    r24 = dyn getNativeSymbolInfo[, , unlist, withRegistrationInfo](p3, p4, FALSE, TRUE);
    check L48() else D18();
  L52():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    l = ld symnames;
    names__ = ldf `names<-`;
    check L53() else D22();
  D13():
    deopt 40 [r16];
  D18():
    deopt 61 [r24];
  D22():
    deopt 73 [varnames1, l, varnames1];
  L35():
    goto L4();
  L48():
    st symbols = r24;
    lapply1 = ldf lapply;
    check L49() else D19();
  L53():
    r33 = dyn names__(l, NULL, varnames1);
    check L54() else D23();
  D19():
    deopt 64 [];
  D23():
    deopt 75 [varnames1, r33];
  L49():
    p5 = prom<V +>{
      sym2 = ldf seq_along;
      base2 = ldf seq_along in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      symNames4 = ld symNames;
      symNames5 = force? symNames4;
      checkMissing(symNames5);
      r27 = seq_along(symNames5);
      goto L0(r27);
    L2():
      r25 = dyn base2(<sym symNames>);
      goto L0(r25);
    };
    p6 = prom<V +>{
      r29 = clos inner3002224933;
      return r29;
    };
    r31 = dyn lapply1(p5, p6);
    check L50() else D20();
  L54():
    st symnames = r33;
    symnames = ld symnames;
    check L55() else D24();
  D20():
    deopt 67 [r31];
  D24():
    deopt 77 [symnames];
  L50():
    goto L7();
  L55():
    symnames1 = force? symnames;
    checkMissing(symnames1);
    popenv;
    return symnames1;
  }
}
fun inner657253850(type) {
  (reg type:*) -+> V { var type:*, reg lapply:cls, reg type1:*, reg type2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st type = type;
    lapply = ldf lapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p1 = prom<V +>{
      r1 = clos inner29990787;
      return r1;
    };
    r3 = dyn lapply(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner29990787(sym) {
  (reg sym:*) -+> V { var sym:*, reg paste0:cls, reg fixes:*, reg fixes1:V, reg c:L, reg fixes3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg sym1:*, reg sym2:V, reg c1:L, reg sym4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg fixes4:*, reg fixes5:V, reg c2:L, reg fixes7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg exists:cls, reg varName:*, reg varName1:V, reg p3:p(V +), reg env:*, reg env1:V, reg p4:p(V +), reg r9:V, reg c3:L, reg warning:cls, reg gettextf:cls, reg sym5:*, reg sym6:V, reg c4:L, reg sym8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r10:V, reg p5:p(V +), reg varName2:*, reg varName3:V, reg p6:p(V +), reg varName4:*, reg varName5:V, reg p7:p(V +), reg sQuote:cls, reg package:*, reg package1:V, reg p8:p(V +), reg r15:V, reg p9:p(V +), reg r17:V, reg p10:p(V +), reg r19:V, reg sym9:*, reg sym10:V, reg l:*, reg c5:L, reg sym12:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg varName6:*, reg varName7:V, reg ____:cls, reg r20:V, reg sym15:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg varnames:*, reg varnames1:V, reg varName8:*, reg varName9:V, reg c6:cls, reg r23:V, reg sym16:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg symnames:*, reg symnames1:V, reg sym17:*, reg sym18:V, reg c7:L, reg sym20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r26:V, reg c8:cls, reg r27:V |
    mkenv;
    st sym = sym;
    paste0 = ldf paste0;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      fixes = ld fixes;
      fixes1 = force? fixes;
      checkMissing(fixes1);
      c = `is.object`(fixes1);
      if c then L1() else L2(fixes1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", fixes1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(fixes3):
      __ = ldf `[` in base;
      r = dyn __(fixes3, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      sym1 = ld sym;
      sym2 = force? sym1;
      checkMissing(sym2);
      c1 = `is.object`(sym2);
      if c1 then L1() else L2(sym2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", sym2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(sym4):
      r2 = `$`(sym4, <sym name>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      fixes4 = ld fixes;
      fixes5 = force? fixes4;
      checkMissing(fixes5);
      c2 = `is.object`(fixes5);
      if c2 then L1() else L2(fixes5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", fixes5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(fixes7):
      __1 = ldf `[` in base;
      r4 = dyn __1(fixes7, 2);
      goto L0(r4);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r6 = dyn paste0(p, p1, p2);
    check L5() else D1();
  D1():
    deopt 5 [r6];
  L5():
    st varName = r6;
    exists = ldf exists;
    check L6() else D2();
  D2():
    deopt 8 [];
  L6():
    p3 = prom<V +>{
      varName = ld varName;
      varName1 = force? varName;
      checkMissing(varName1);
      return varName1;
    };
    p4 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r9 = dyn exists[, envir, inherits](p3, p4, FALSE);
    check L7() else D3();
  D3():
    deopt 14 [r9];
  L7():
    c3 = `as.logical`(r9);
    if c3 then L8() else L0();
  L0():
    sym9 = ld sym;
    check L12() else D6();
  L8():
    warning = ldf warning;
    check L9() else D4();
  D4():
    deopt 16 [];
  D6():
    deopt 23 [sym9];
  L9():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sym5 = ld sym;
        sym6 = force? sym5;
        checkMissing(sym6);
        c4 = `is.object`(sym6);
        if c4 then L1() else L2(sym6);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", sym6);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(sym8):
        r10 = `$`(sym8, <sym name>);
        goto L0(r10);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p6 = prom<V +>{
        varName2 = ld varName;
        varName3 = force? varName2;
        checkMissing(varName3);
        return varName3;
      };
      p7 = prom<V +>{
        varName4 = ld varName;
        varName5 = force? varName4;
        checkMissing(varName5);
        return varName5;
      };
      p9 = prom<V +>{
        sQuote = ldf sQuote;
        p8 = prom<V +>{
          package = ld package;
          package1 = force? package;
          checkMissing(package1);
          return package1;
        };
        r15 = dyn sQuote(p8);
        return r15;
      };
      r17 = dyn gettextf("failed to assign RegisteredNativeSymbol for %s to %s since %s is already defined in the %s namespace", p5, p6, p7, p9);
      return r17;
    };
    r19 = dyn warning[, domain, `call.`](p10, NA_LGL, FALSE);
    check L10() else D5();
  L12():
    sym10 = force? sym9;
    checkMissing(sym10);
    l = ld env;
    c5 = `is.object`(l);
    if c5 then L13() else L14(sym10, l);
  D5():
    deopt 22 [r19];
  L1(dx9):
    st env = dx9;
    sym15 = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym15, base);
    if guard then L17() else L18();
  L10():
    popenv;
    return r19;
  L13():
    dr8 = tryDispatchBuiltin.0("[[<-", l, sym10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L15() else L14(sym10, dr8);
  L14(sym12, l2):
    varName6 = ld varName;
    check L16() else D7();
  D7():
    deopt 26 [sym12, l2, sym10, varName6];
  L2(r22):
    sst varnames = r22;
    sym16 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym16, base1);
    if guard1 then L22() else L23();
  L15():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L1(dx8);
  L16():
    varName7 = force? varName6;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l2, sym10, varName7);
    goto L1(r20);
  L17():
    varnames = ld varnames;
    check L19() else D8();
  L18():
    r21 = dyn base(<sym varnames>, <sym varName>);
    goto L2(r21);
  D8():
    deopt 32 [varnames];
  L3(r25):
    sst symnames = r25;
    invisible.0();
    popenv;
    return r25;
  L19():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    varName8 = ld varName;
    check L20() else D9();
  L22():
    symnames = ld symnames;
    check L24() else D11();
  L23():
    r24 = dyn base1(<sym symnames>, <lang `$`(sym, name)>);
    goto L3(r24);
  D9():
    deopt 34 [varName8];
  D11():
    deopt 41 [symnames];
  L20():
    varName9 = force? varName8;
    checkMissing(varName9);
    c6 = ldf c in base;
    r23 = dyn c6(varnames1, varName9);
    check L21() else D10();
  L24():
    symnames1 = force? symnames;
    checkMissing(symnames1);
    sym17 = ld sym;
    check L25() else D12();
  D10():
    deopt 37 [r23];
  D12():
    deopt 43 [sym17];
  L21():
    goto L2(r23);
  L25():
    sym18 = force? sym17;
    checkMissing(sym18);
    c7 = `is.object`(sym18);
    if c7 then L27() else L28(sym18);
  L26(dx11):
    c8 = ldf c in base;
    r27 = dyn c8(symnames1, dx11);
    check L30() else D13();
  L27():
    dr10 = tryDispatchBuiltin.1("$", sym18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L29() else L28(dr10);
  L28(sym20):
    r26 = `$`(sym20, <sym name>);
    goto L26(r26);
  D13():
    deopt 47 [r27];
  L29():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx10);
  L30():
    goto L3(r27);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg symNames:*, reg symNames1:V, reg names:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r5:V, reg symNames2:*, reg symNames3:V, reg c1:L, reg symNames5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r6:V, reg exists:cls, reg varName:*, reg varName1:V, reg p:p(V +), reg env:*, reg env1:V, reg p1:p(V +), reg r9:V, reg c2:L, reg origVarName:*, reg origVarName1:V, reg varName2:*, reg varName3:V, reg r10:V, reg c3:L, reg warning:cls, reg gettextf:cls, reg origVarName2:*, reg origVarName3:V, reg p2:p(V +), reg varName4:*, reg varName5:V, reg p3:p(V +), reg varName6:*, reg varName7:V, reg p4:p(V +), reg sQuote:cls, reg package:*, reg package1:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg warning1:cls, reg gettextf1:cls, reg origVarName4:*, reg origVarName5:V, reg p8:p(V +), reg varName8:*, reg varName9:V, reg p9:p(V +), reg sQuote1:cls, reg package2:*, reg package3:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg r25:V, reg p12:p(V +), reg r27:V, reg assign:cls, reg varName10:*, reg varName11:V, reg p13:p(V +), reg symbols:*, reg symbols1:V, reg c4:L, reg symbols3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg origVarName6:*, reg origVarName7:V, reg __2:cls, reg r29:V, reg p14:p(V +), reg env2:*, reg env3:V, reg p15:p(V +), reg r32:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg varnames:*, reg varnames1:V, reg varName12:*, reg varName13:V, reg c5:cls, reg r35:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg symnames:*, reg symnames1:V, reg origVarName8:*, reg origVarName9:V, reg c6:cls, reg r38:V |
    mkenv;
    st i = i;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `is.object`(r1);
    if c then L11() else L12(r1);
  L7():
    symNames = ld symNames;
    check L9() else D0();
  L8():
    r = dyn base(<sym symNames>);
    goto L0(r);
  D0():
    deopt 2 [symNames];
  L1(dx1):
    st varName = dx1;
    symNames2 = ld symNames;
    check L15() else D3();
  L9():
    symNames1 = force? symNames;
    checkMissing(symNames1);
    names = ldf names in base;
    r2 = dyn names(symNames1);
    check L10() else D1();
  L11():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(r4):
    i1 = ld i;
    check L14() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [r4, i1];
  D3():
    deopt 10 [symNames2];
  L10():
    goto L0(r2);
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L14():
    i2 = force? i1;
    __ = ldf `[` in base;
    r5 = dyn __(r4, i2);
    goto L1(r5);
  L15():
    symNames3 = force? symNames2;
    checkMissing(symNames3);
    c1 = `is.object`(symNames3);
    if c1 then L16() else L17(symNames3);
  L2(dx3):
    st origVarName = dx3;
    exists = ldf exists;
    check L20() else D5();
  L16():
    dr2 = tryDispatchBuiltin.1("[", symNames3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(symNames5):
    i3 = ld i;
    check L19() else D4();
  D4():
    deopt 12 [symNames5, i3];
  D5():
    deopt 17 [];
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L19():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r6 = dyn __1(symNames5, i4);
    goto L2(r6);
  L20():
    p = prom<V +>{
      varName = ld varName;
      varName1 = force? varName;
      checkMissing(varName1);
      return varName1;
    };
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r9 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L21() else D6();
  D6():
    deopt 23 [r9];
  L21():
    c2 = `as.logical`(r9);
    if c2 then L22() else L3();
  L3():
    assign = ldf assign;
    check L32() else D13();
  L22():
    origVarName = ld origVarName;
    check L23() else D7();
  D7():
    deopt 24 [origVarName];
  D13():
    deopt 45 [];
  L23():
    origVarName1 = force? origVarName;
    checkMissing(origVarName1);
    varName2 = ld varName;
    check L24() else D8();
  L32():
    p13 = prom<V +>{
      varName10 = ld varName;
      varName11 = force? varName10;
      checkMissing(varName11);
      return varName11;
    };
    p14 = prom<V +>{
      symbols = ld symbols;
      symbols1 = force? symbols;
      checkMissing(symbols1);
      c4 = `is.object`(symbols1);
      if c4 then L1() else L2(symbols1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", symbols1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(symbols3):
      origVarName6 = ld origVarName;
      origVarName7 = force? origVarName6;
      __2 = ldf `[[` in base;
      r29 = dyn __2(symbols3, origVarName7);
      goto L0(r29);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p15 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r32 = dyn assign[, , envir](p13, p14, p15);
    check L33() else D14();
  D8():
    deopt 25 [origVarName1, varName2];
  D14():
    deopt 50 [r32];
  L24():
    varName3 = force? varName2;
    checkMissing(varName3);
    r10 = `!=`(origVarName1, varName3);
    c3 = `as.logical`(r10);
    if c3 then L25() else L4();
  L33():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L4():
    warning1 = ldf warning;
    check L29() else D11();
  L5(r34):
    sst varnames = r34;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L25():
    warning = ldf warning;
    check L26() else D9();
  L34():
    varnames = ld varnames;
    check L36() else D15();
  L35():
    r33 = dyn base1(<sym varnames>, <sym varName>);
    goto L5(r33);
  D9():
    deopt 29 [];
  D11():
    deopt 37 [];
  D15():
    deopt 53 [varnames];
  L6(r37):
    sst symnames = r37;
    invisible.0();
    popenv;
    return r37;
  L26():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        origVarName2 = ld origVarName;
        origVarName3 = force? origVarName2;
        checkMissing(origVarName3);
        return origVarName3;
      };
      p3 = prom<V +>{
        varName4 = ld varName;
        varName5 = force? varName4;
        checkMissing(varName5);
        return varName5;
      };
      p4 = prom<V +>{
        varName6 = ld varName;
        varName7 = force? varName6;
        checkMissing(varName7);
        return varName7;
      };
      p6 = prom<V +>{
        sQuote = ldf sQuote;
        p5 = prom<V +>{
          package = ld package;
          package1 = force? package;
          checkMissing(package1);
          return package1;
        };
        r15 = dyn sQuote(p5);
        return r15;
      };
      r17 = dyn gettextf("failed to assign NativeSymbolInfo for %s to %s since %s is already defined in the %s namespace", p2, p3, p4, p6);
      return r17;
    };
    r19 = dyn warning[, domain, `call.`](p7, NA_LGL, FALSE);
    check L27() else D10();
  L29():
    p12 = prom<V +>{
      gettextf1 = ldf gettextf;
      p8 = prom<V +>{
        origVarName4 = ld origVarName;
        origVarName5 = force? origVarName4;
        checkMissing(origVarName5);
        return origVarName5;
      };
      p9 = prom<V +>{
        varName8 = ld varName;
        varName9 = force? varName8;
        checkMissing(varName9);
        return varName9;
      };
      p11 = prom<V +>{
        sQuote1 = ldf sQuote;
        p10 = prom<V +>{
          package2 = ld package;
          package3 = force? package2;
          checkMissing(package3);
          return package3;
        };
        r23 = dyn sQuote1(p10);
        return r23;
      };
      r25 = dyn gettextf1("failed to assign NativeSymbolInfo for %s since %s is already defined in the %s namespace", p8, p9, p11);
      return r25;
    };
    r27 = dyn warning1[, domain, `call.`](p12, NA_LGL, FALSE);
    check L30() else D12();
  L36():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    varName12 = ld varName;
    check L37() else D16();
  L39():
    symnames = ld symnames;
    check L41() else D18();
  L40():
    r36 = dyn base2(<sym symnames>, <sym origVarName>);
    goto L6(r36);
  D10():
    deopt 35 [r19];
  D12():
    deopt 43 [r27];
  D16():
    deopt 55 [varName12];
  D18():
    deopt 62 [symnames];
  L27():
    popenv;
    return r19;
  L30():
    popenv;
    return r27;
  L37():
    varName13 = force? varName12;
    checkMissing(varName13);
    c5 = ldf c in base;
    r35 = dyn c5(varnames1, varName13);
    check L38() else D17();
  L41():
    symnames1 = force? symnames;
    checkMissing(symnames1);
    origVarName8 = ld origVarName;
    check L42() else D19();
  D17():
    deopt 58 [r35];
  D19():
    deopt 64 [origVarName8];
  L38():
    goto L5(r35);
  L42():
    origVarName9 = force? origVarName8;
    checkMissing(origVarName9);
    c6 = ldf c in base;
    r38 = dyn c6(symnames1, origVarName9);
    check L43() else D20();
  D20():
    deopt 67 [r38];
  L43():
    goto L6(r38);
  }
}
fun inner2708337952() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}
fun inner3498896939(package, `package.lib`, call) {
  (reg package:*, reg package_lib:*, reg call:*) -+> V { var package:*, var `package.lib`:*, var call:*, reg call_isMissing:L, reg call_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg gettextf:cls, reg sQuote:cls, reg package1:*, reg package2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg msg:*, reg msg1:V, reg package3:*, reg package4:V, reg package_lib1:*, reg package_lib2:V, reg call1:*, reg call2:V, reg list:cls, reg r9:V, reg p2:p(V +), reg class:*, reg class1:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st package = package;
    st `package.lib` = package_lib;
    call_isMissing = missing.0(call);
    if call_isMissing then L0(NULL) else L0(call);
  L0(call_orDefault):
    st call = call_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    st class = r1;
    gettextf = ldf gettextf;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r2 = dyn c("hasNoNamespaceError", "error", "condition");
    check L4() else D0();
  L3():
    r = dyn base("hasNoNamespaceError", "error", "condition");
    goto L1(r);
  D0():
    deopt 6 [r2];
  D1():
    deopt 9 [];
  L4():
    goto L1(r2);
  L5():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        return package2;
      };
      r4 = dyn sQuote(p);
      return r4;
    };
    r6 = dyn gettextf("package %s does not have a namespace", p1);
    check L6() else D2();
  D2():
    deopt 12 [r6];
  L6():
    st msg = r6;
    structure = ldf structure;
    check L7() else D3();
  D3():
    deopt 15 [];
  L7():
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      package_lib1 = ld `package.lib`;
      package_lib2 = force? package_lib1;
      checkMissing(package_lib2);
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      list = ldf list in base;
      r9 = dyn list(msg1, package4, package_lib2, call2);
      goto L0(r9);
    L2():
      r7 = dyn base1[message, package, `package.lib`, call](<sym msg>, <sym package>, <sym package.lib>, <sym call>);
      goto L0(r7);
    };
    p3 = prom<V +>{
      class = ld class;
      class1 = force? class;
      checkMissing(class1);
      return class1;
    };
    r12 = dyn structure[, class](p2, p3);
    check L8() else D4();
  D4():
    deopt 19 [r12];
  L8():
    popenv;
    return r12;
  }
}
fun inner1411584319(pkg, pkgInfo, pkgPath) {
  (reg pkg:*, reg pkgInfo:*, reg pkgPath:*) -+> V { var pkg:*, var pkgInfo:*, var pkgPath:*, reg ___:cls, reg r:V, reg r1:cls, reg pkgInfo1:*, reg pkgInfo2:V, reg c:L, reg pkgInfo4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r3:V, reg p:p(V +), reg r5:V, reg L:*, reg L1:V, reg c2:L, reg L3:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r6:V, reg r7:V, reg c3:L, reg c5:V, reg L4:*, reg L5:V, reg c6:L, reg c8:L, reg L7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg c10:L, reg dx9:V, reg r8:V, reg r9:V, reg c11:L, reg c12:V, reg c14:L, reg path_expand:cls, reg file_path:cls, reg R_home:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg file_exists:cls, reg site_file:*, reg site_file1:V, reg p3:p(V +), reg r16:V, reg c15:L, reg c17:V, reg _in_:cls, reg pkg1:*, reg pkg2:V, reg p4:p(V +), reg readLines:cls, reg site_file2:*, reg site_file3:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg c18:L, reg c19:V, reg c21:L, reg path_expand1:cls, reg r24:V, reg file_exists1:cls, reg personal_file:*, reg personal_file1:V, reg p7:p(V +), reg r26:V, reg c22:L, reg readLines1:cls, reg personal_file2:*, reg personal_file3:V, reg p8:p(V +), reg r28:V, reg _in_1:cls, reg pkg3:*, reg pkg4:V, reg p9:p(V +), reg agreed:*, reg agreed1:V, reg p10:p(V +), reg r31:V, reg c23:L, reg character:cls, reg r35:V, reg sym:cls, reg base:cls, reg guard:L, reg r36:V, reg r37:V, reg interactive:cls, reg r38:V, reg r39:V, reg c24:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg pkg5:*, reg pkg6:V, reg p11:p(V +), reg r41:V, reg p12:p(V +), reg r43:V, reg p13:p(V +), reg r45:V, reg file_path1:cls, reg pkgpath:*, reg pkgpath1:V, reg p14:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r48:V, reg r49:V, reg c25:cls, reg r50:V, reg p15:p(V +), reg r52:V, reg lfiles:*, reg lfiles1:V, reg c26:L, reg lfiles3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg file_exists2:cls, reg lfiles4:*, reg lfiles5:V, reg p16:p(V +), reg r54:V, reg __1:cls, reg r55:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r56:V, reg r57:V, reg lfiles6:*, reg lfiles7:V, reg length:cls, reg r58:V, reg c27:L, reg message:cls, reg gettextf1:cls, reg sQuote1:cls, reg pkg7:*, reg pkg8:V, reg p17:p(V +), reg r60:V, reg p18:p(V +), reg r62:V, reg p19:p(V +), reg r64:V, reg readline:cls, reg r65:V, reg pkgInfo5:*, reg pkgInfo6:V, reg c28:L, reg pkgInfo8:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r66:V, reg c29:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __2:cls, reg r67:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r68:V, reg r69:V, reg encoding:*, reg encoding1:V, reg is_na:cls, reg r70:V, reg c30:L, reg encoding2:*, reg encoding3:V, reg r72:V, reg c31:L, reg file_show:cls, reg lfiles8:*, reg lfiles9:V, reg c32:L, reg lfiles11:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __3:cls, reg r74:V, reg p20:p(V +), reg encoding4:*, reg encoding5:V, reg p21:p(V +), reg r77:V, reg message1:cls, reg gettextf2:cls, reg paste:cls, reg r79:V, reg p22:p(V +), reg sQuote2:cls, reg pkg9:*, reg pkg10:V, reg p23:p(V +), reg r82:V, reg p24:p(V +), reg pkgInfo9:*, reg pkgInfo10:V, reg c33:L, reg pkgInfo12:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r84:V, reg c34:L, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg __4:cls, reg r85:V, reg p25:p(V +), reg r87:V, reg p26:p(V +), reg r89:V, reg __5:cls, reg r90:V, reg r91:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r92:V, reg r93:V, reg c35:cls, reg r94:V, reg p27:p(V +), reg paste1:cls, reg sQuote3:cls, reg pkg11:*, reg pkg12:V, reg p28:p(V +), reg r97:V, reg p29:p(V +), reg r99:V, reg p30:p(V +), reg r101:V, reg choice:*, reg choice1:V, reg r102:V, reg c36:L, reg stop1:cls, reg gettextf3:cls, reg sQuote4:cls, reg package:*, reg package1:V, reg p31:p(V +), reg r104:V, reg p32:p(V +), reg r106:V, reg p33:p(V +), reg r108:V, reg dir_create:cls, reg dirname:cls, reg personal_file4:*, reg personal_file5:V, reg p34:p(V +), reg r111:V, reg p35:p(V +), reg r113:V, reg writeLines:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r114:V, reg r115:V, reg agreed2:*, reg agreed3:V, reg pkg13:*, reg pkg14:V, reg c37:cls, reg r116:V, reg p36:p(V +), reg personal_file6:*, reg personal_file7:V, reg p37:p(V +), reg r119:V |
    mkenv;
    st pkg = pkg;
    st pkgInfo = pkgInfo;
    st pkgPath = pkgPath;
    ___ = ldf `:::`;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    r = dyn ___("tools", "analyze_license");
    check L25() else D1();
  D1():
    deopt 4 [r];
  L25():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      pkgInfo1 = ld pkgInfo;
      pkgInfo2 = force? pkgInfo1;
      checkMissing(pkgInfo2);
      c = `is.object`(pkgInfo2);
      if c then L2() else L3(pkgInfo2);
    L1(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", pkgInfo2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(pkgInfo4):
      r2 = `$`(pkgInfo4, <sym DESCRIPTION>);
      goto L1(r2);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __ = ldf `[` in base;
      r3 = dyn __(dx3, "License");
      goto L0(r3);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    r5 = dyn r1(p);
    check L26() else D2();
  D2():
    deopt 7 [r5];
  L26():
    st L = r5;
    L = ld L;
    check L27() else D3();
  D3():
    deopt 9 [L];
  L27():
    L1 = force? L;
    checkMissing(L1);
    c2 = `is.object`(L1);
    if c2 then L29() else L30(L1);
  L28(dx7):
    r7 = `!`(dx7);
    c3 = `as.logical`(r7);
    if c3 then L32() else L0(c3);
  L29():
    dr4 = tryDispatchBuiltin.1("$", L1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(dr4);
  L30(L3):
    r6 = `$`(L3, <sym is_empty>);
    goto L28(r6);
  L0(c5):
    c14 = `as.logical`(c5);
    if c14 then L39() else L1();
  L31():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx6);
  L32():
    L4 = ld L;
    check L33() else D4();
  D4():
    deopt 13 [c3, L4];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L33():
    L5 = force? L4;
    checkMissing(L5);
    c6 = `is.object`(L5);
    if c6 then L35() else L36(c3, L5);
  L39():
    path_expand = ldf `path.expand`;
    check L40() else D5();
  D5():
    deopt 19 [];
  L34(c10, dx9):
    r9 = `!`(dx9);
    c11 = `as.logical`(r9);
    c12 = `&&`(c10, c11);
    goto L0(c12);
  L35():
    dr6 = tryDispatchBuiltin.1("$", L5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L37() else L36(c3, dr6);
  L36(c8, L7):
    r8 = `$`(L7, <sym is_verified>);
    goto L34(c8, r8);
  L40():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        R_home = ldf `R.home`;
        r10 = dyn R_home("etc");
        return r10;
      };
      r12 = dyn file_path(p1, "licensed.site");
      return r12;
    };
    r14 = dyn path_expand(p2);
    check L41() else D6();
  D6():
    deopt 21 [r14];
  L37():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L34(c3, dx8);
  L41():
    st site_file = r14;
    file_exists = ldf `file.exists`;
    check L42() else D7();
  D7():
    deopt 24 [];
  L42():
    p3 = prom<V +>{
      site_file = ld site_file;
      site_file1 = force? site_file;
      checkMissing(site_file1);
      return site_file1;
    };
    r16 = dyn file_exists(p3);
    check L43() else D8();
  D8():
    deopt 26 [r16];
  L43():
    c15 = `as.logical`(r16);
    if c15 then L44() else L2(c15);
  L2(c17):
    c21 = `as.logical`(c17);
    if c21 then L48() else L3();
  L44():
    _in_ = ldf `%in%`;
    check L45() else D9();
  D9():
    deopt 28 [c15];
  L3():
    path_expand1 = ldf `path.expand`;
    check L51() else D11();
  L45():
    p4 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p6 = prom<V +>{
      readLines = ldf readLines;
      p5 = prom<V +>{
        site_file2 = ld site_file;
        site_file3 = force? site_file2;
        checkMissing(site_file3);
        return site_file3;
      };
      r19 = dyn readLines(p5);
      return r19;
    };
    r21 = dyn _in_(p4, p6);
    check L46() else D10();
  L48():
    popenv;
    return NULL;
  D10():
    deopt 31 [c15, r21];
  D11():
    deopt 39 [];
  L46():
    c18 = `as.logical`(r21);
    c19 = `&&`(c15, c18);
    goto L2(c19);
  L51():
    r24 = dyn path_expand1("~/.R/licensed");
    check L52() else D12();
  D12():
    deopt 41 [r24];
  L52():
    st personal_file = r24;
    file_exists1 = ldf `file.exists`;
    check L53() else D13();
  D13():
    deopt 44 [];
  L53():
    p7 = prom<V +>{
      personal_file = ld personal_file;
      personal_file1 = force? personal_file;
      checkMissing(personal_file1);
      return personal_file1;
    };
    r26 = dyn file_exists1(p7);
    check L54() else D14();
  D14():
    deopt 46 [r26];
  L54():
    c22 = `as.logical`(r26);
    if c22 then L55() else L5();
  L5():
    character = ldf character;
    check L64() else D19();
  L8():
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L55():
    readLines1 = ldf readLines;
    check L56() else D15();
  D15():
    deopt 48 [];
  D19():
    deopt 63 [];
  L9(r37):
    r39 = `!`(r37);
    c24 = `as.logical`(r39);
    if c24 then L69() else L10();
  L56():
    p8 = prom<V +>{
      personal_file2 = ld personal_file;
      personal_file3 = force? personal_file2;
      checkMissing(personal_file3);
      return personal_file3;
    };
    r28 = dyn readLines1(p8);
    check L57() else D16();
  L64():
    r35 = dyn character();
    check L65() else D20();
  L66():
    interactive = ldf interactive in base;
    r38 = dyn interactive();
    check L68() else D21();
  L67():
    r36 = dyn base();
    goto L9(r36);
  D16():
    deopt 50 [r28];
  D20():
    deopt 64 [r35];
  D21():
    deopt 69 [r38];
  L10():
    goto L11();
  L11():
    file_path1 = ldf `file.path`;
    check L73() else D24();
  L57():
    st agreed = r28;
    _in_1 = ldf `%in%`;
    check L58() else D17();
  L65():
    st agreed = r35;
    goto L8();
  L68():
    goto L9(r38);
  L69():
    stop = ldf stop;
    check L70() else D22();
  D17():
    deopt 53 [];
  D22():
    deopt 72 [];
  D24():
    deopt 80 [];
  L58():
    p9 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p10 = prom<V +>{
      agreed = ld agreed;
      agreed1 = force? agreed;
      checkMissing(agreed1);
      return agreed1;
    };
    r31 = dyn _in_1(p9, p10);
    check L59() else D18();
  L70():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        p11 = prom<V +>{
          pkg5 = ld pkg;
          pkg6 = force? pkg5;
          checkMissing(pkg6);
          return pkg6;
        };
        r41 = dyn sQuote(p11);
        return r41;
      };
      r43 = dyn gettextf("package %s has a license that you need to accept in an interactive session", p12);
      return r43;
    };
    r45 = dyn stop[, domain](p13, NA_LGL);
    check L71() else D23();
  L73():
    p14 = prom<V +>{
      pkgpath = ld pkgpath;
      pkgpath1 = force? pkgpath;
      checkMissing(pkgpath1);
      return pkgpath1;
    };
    p15 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      c25 = ldf c in base;
      r50 = dyn c25("LICENSE", "LICENCE");
      goto L0(r50);
    L2():
      r48 = dyn base1("LICENSE", "LICENCE");
      goto L0(r48);
    };
    r52 = dyn file_path1(p14, p15);
    check L74() else D25();
  D18():
    deopt 56 [r31];
  D23():
    deopt 76 [r45];
  D25():
    deopt 83 [r52];
  L59():
    c23 = `as.logical`(r31);
    if c23 then L60() else L6();
  L71():
    goto L11();
  L74():
    st lfiles = r52;
    lfiles = ld lfiles;
    check L75() else D26();
  D26():
    deopt 85 [lfiles];
  L6():
    goto L8();
  L60():
    popenv;
    return NULL;
  L75():
    lfiles1 = force? lfiles;
    checkMissing(lfiles1);
    c26 = `is.object`(lfiles1);
    if c26 then L76() else L77(lfiles1);
  L12(dx11):
    st lfiles = dx11;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L81() else L82();
  L76():
    dr8 = tryDispatchBuiltin.1("[", lfiles1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L78() else L77(dr8);
  L77(lfiles3):
    file_exists2 = ldf `file.exists`;
    check L79() else D27();
  D27():
    deopt 88 [lfiles3];
  L13(r57):
    c27 = `as.logical`(r57);
    if c27 then L85() else L14();
  L78():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx10);
  L79():
    p16 = prom<V +>{
      lfiles4 = ld lfiles;
      lfiles5 = force? lfiles4;
      checkMissing(lfiles5);
      return lfiles5;
    };
    r54 = dyn file_exists2(p16);
    check L80() else D28();
  L81():
    lfiles6 = ld lfiles;
    check L83() else D29();
  L82():
    r56 = dyn base2(<sym lfiles>);
    goto L13(r56);
  D28():
    deopt 90 [lfiles3, r54];
  D29():
    deopt 95 [lfiles6];
  L14():
    message1 = ldf message;
    check L110() else D41();
  L21():
    __5 = ldf `::`;
    check L112() else D43();
  L80():
    __1 = ldf `[` in base;
    r55 = dyn __1(lfiles3, r54);
    goto L12(r55);
  L83():
    lfiles7 = force? lfiles6;
    checkMissing(lfiles7);
    length = ldf length in base;
    r58 = dyn length(lfiles7);
    check L84() else D30();
  L85():
    message = ldf message;
    check L86() else D31();
  D30():
    deopt 98 [r58];
  D31():
    deopt 100 [];
  D41():
    deopt 143 [];
  D43():
    deopt 149 [];
  L84():
    goto L13(r58);
  L86():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p18 = prom<V +>{
        sQuote1 = ldf sQuote;
        p17 = prom<V +>{
          pkg7 = ld pkg;
          pkg8 = force? pkg7;
          checkMissing(pkg8);
          return pkg8;
        };
        r60 = dyn sQuote1(p17);
        return r60;
      };
      r62 = dyn gettextf1("package %s has a license that you need to accept after viewing", p18);
      return r62;
    };
    r64 = dyn message[, domain](p19, NA_LGL);
    check L87() else D32();
  L110():
    p26 = prom<V +>{
      gettextf2 = ldf gettextf;
      p22 = prom<V +>{
        paste = ldf paste;
        r79 = dyn paste[, , , sep]("package %s has a license that you need to accept:", "according to the DESCRIPTION file it is", "%s", "\n");
        return r79;
      };
      p24 = prom<V +>{
        sQuote2 = ldf sQuote;
        p23 = prom<V +>{
          pkg9 = ld pkg;
          pkg10 = force? pkg9;
          checkMissing(pkg10);
          return pkg10;
        };
        r82 = dyn sQuote2(p23);
        return r82;
      };
      p25 = prom<V +>{
        pkgInfo9 = ld pkgInfo;
        pkgInfo10 = force? pkgInfo9;
        checkMissing(pkgInfo10);
        c33 = `is.object`(pkgInfo10);
        if c33 then L2() else L3(pkgInfo10);
      L1(dx21):
        c34 = `is.object`(dx21);
        if c34 then L5() else L6(dx21);
      L2():
        dr16 = tryDispatchBuiltin.1("$", pkgInfo10);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L4() else L3(dr16);
      L3(pkgInfo12):
        r84 = `$`(pkgInfo12, <sym DESCRIPTION>);
        goto L1(r84);
      L0(dx25):
        return dx25;
      L4():
        dx20 = getTryDispatchBuiltinValue(dr16);
        goto L1(dx20);
      L5():
        dr18 = tryDispatchBuiltin.1("[", dx21);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L7() else L6(dr18);
      L6(dx23):
        __4 = ldf `[` in base;
        r85 = dyn __4(dx23, "License");
        goto L0(r85);
      L7():
        dx24 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx24);
      };
      r87 = dyn gettextf2(p22, p24, p25);
      return r87;
    };
    r89 = dyn message1[, domain](p26, NA_LGL);
    check L111() else D42();
  L112():
    r90 = dyn __5("utils", "menu");
    check L113() else D44();
  D32():
    deopt 104 [r64];
  D42():
    deopt 147 [r89];
  D44():
    deopt 152 [r90];
  L87():
    readline = ldf readline;
    check L88() else D33();
  L111():
    goto L21();
  L113():
    checkFun.0(r90);
    r91 = r90 as cls;
    p27 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r93):
      return r93;
    L1():
      c35 = ldf c in base;
      r94 = dyn c35("accept", "decline");
      goto L0(r94);
    L2():
      r92 = dyn base4("accept", "decline");
      goto L0(r92);
    };
    p30 = prom<V +>{
      paste1 = ldf paste;
      p29 = prom<V +>{
        sQuote3 = ldf sQuote;
        p28 = prom<V +>{
          pkg11 = ld pkg;
          pkg12 = force? pkg11;
          checkMissing(pkg12);
          return pkg12;
        };
        r97 = dyn sQuote3(p28);
        return r97;
      };
      r99 = dyn paste1("License for", p29);
      return r99;
    };
    r101 = dyn r91[, title](p27, p30);
    check L114() else D45();
  D33():
    deopt 106 [];
  D45():
    deopt 157 [r101];
  L88():
    r65 = dyn readline("press RETURN to view license");
    check L89() else D34();
  L114():
    st choice = r101;
    choice = ld choice;
    check L115() else D46();
  D34():
    deopt 108 [r65];
  D46():
    deopt 159 [choice];
  L89():
    pkgInfo5 = ld pkgInfo;
    check L90() else D35();
  L115():
    choice1 = force? choice;
    checkMissing(choice1);
    r102 = `!=`(choice1, 1.0);
    c36 = `as.logical`(r102);
    if c36 then L116() else L22();
  D35():
    deopt 109 [pkgInfo5];
  L22():
    goto L23();
  L23():
    dir_create = ldf `dir.create`;
    check L120() else D49();
  L90():
    pkgInfo6 = force? pkgInfo5;
    checkMissing(pkgInfo6);
    c28 = `is.object`(pkgInfo6);
    if c28 then L92() else L93(pkgInfo6);
  L116():
    stop1 = ldf stop;
    check L117() else D47();
  D47():
    deopt 164 [];
  D49():
    deopt 174 [];
  L91(dx13):
    c29 = `is.object`(dx13);
    if c29 then L95() else L96(dx13);
  L92():
    dr10 = tryDispatchBuiltin.1("$", pkgInfo6);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L94() else L93(dr10);
  L93(pkgInfo8):
    r66 = `$`(pkgInfo8, <sym DESCRIPTION>);
    goto L91(r66);
  L117():
    p33 = prom<V +>{
      gettextf3 = ldf gettextf;
      p32 = prom<V +>{
        sQuote4 = ldf sQuote;
        p31 = prom<V +>{
          package = ld package;
          package1 = force? package;
          checkMissing(package1);
          return package1;
        };
        r104 = dyn sQuote4(p31);
        return r104;
      };
      r106 = dyn gettextf3("license for package %s not accepted", p32);
      return r106;
    };
    r108 = dyn stop1[, domain, `call.`](p33, NA_LGL, FALSE);
    check L118() else D48();
  L120():
    p35 = prom<V +>{
      dirname = ldf dirname;
      p34 = prom<V +>{
        personal_file4 = ld personal_file;
        personal_file5 = force? personal_file4;
        checkMissing(personal_file5);
        return personal_file5;
      };
      r111 = dyn dirname(p34);
      return r111;
    };
    r113 = dyn dir_create[, showWarnings](p35, FALSE);
    check L121() else D50();
  D48():
    deopt 170 [r108];
  D50():
    deopt 178 [r113];
  L15(dx17):
    st encoding = dx17;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  L94():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L91(dx12);
  L95():
    dr12 = tryDispatchBuiltin.1("[", dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L97() else L96(dr12);
  L96(dx15):
    __2 = ldf `[` in base;
    r67 = dyn __2(dx15, "Encoding");
    goto L15(r67);
  L118():
    goto L23();
  L121():
    writeLines = ldf writeLines;
    check L122() else D51();
  D51():
    deopt 180 [];
  L16(r69):
    c30 = `as.logical`(r69);
    if c30 then L102() else L17();
  L97():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L15(dx16);
  L98():
    encoding = ld encoding;
    check L100() else D36();
  L99():
    r68 = dyn base3(<sym encoding>);
    goto L16(r68);
  L122():
    p36 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r115):
      return r115;
    L1():
      agreed2 = ld agreed;
      agreed3 = force? agreed2;
      checkMissing(agreed3);
      pkg13 = ld pkg;
      pkg14 = force? pkg13;
      checkMissing(pkg14);
      c37 = ldf c in base;
      r116 = dyn c37(agreed3, pkg14);
      goto L0(r116);
    L2():
      r114 = dyn base5(<sym agreed>, <sym pkg>);
      goto L0(r114);
    };
    p37 = prom<V +>{
      personal_file6 = ld personal_file;
      personal_file7 = force? personal_file6;
      checkMissing(personal_file7);
      return personal_file7;
    };
    r119 = dyn writeLines(p36, p37);
    check L123() else D52();
  D36():
    deopt 118 [encoding];
  D52():
    deopt 183 [r119];
  L17():
    goto L18();
  L18():
    encoding2 = ld encoding;
    check L104() else D38();
  L100():
    encoding1 = force? encoding;
    checkMissing(encoding1);
    is_na = ldf `is.na` in base;
    r70 = dyn is_na(encoding1);
    check L101() else D37();
  L102():
    st encoding = "";
    goto L18();
  L123():
    popenv;
    return r119;
  D37():
    deopt 121 [r70];
  D38():
    deopt 127 [encoding2];
  L101():
    goto L16(r70);
  L104():
    encoding3 = force? encoding2;
    checkMissing(encoding3);
    r72 = `==`(encoding3, "latin1");
    c31 = `as.logical`(r72);
    if c31 then L105() else L19();
  L19():
    goto L20();
  L20():
    file_show = ldf `file.show`;
    check L107() else D39();
  L105():
    st encoding = "cp1252";
    goto L20();
  D39():
    deopt 137 [];
  L107():
    p20 = prom<V +>{
      lfiles8 = ld lfiles;
      lfiles9 = force? lfiles8;
      checkMissing(lfiles9);
      c32 = `is.object`(lfiles9);
      if c32 then L1() else L2(lfiles9);
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("[", lfiles9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(lfiles11):
      __3 = ldf `[` in base;
      r74 = dyn __3(lfiles11, 1);
      goto L0(r74);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    p21 = prom<V +>{
      encoding4 = ld encoding;
      encoding5 = force? encoding4;
      checkMissing(encoding5);
      return encoding5;
    };
    r77 = dyn file_show[, encoding](p20, p21);
    check L108() else D40();
  D40():
    deopt 141 [r77];
  L108():
    goto L21();
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg exists:cls, reg what1:*, reg what2:V, reg p:p(V +), reg ns:*, reg ns1:V, reg p1:p(V +), reg r2:V, reg r3:V |
    mkenv;
    st what = what;
    exists = ldf exists;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p1 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r2 = dyn exists[, mode, envir](p, "function", p1);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    r3 = `!`(r2);
    popenv;
    return r3;
  }
}
fun inner2009375240(pmi) {
  (reg pmi:*) -+> V { var pmi:*, reg __:cls, reg r:V, reg r1:cls, reg pmi1:*, reg pmi2:V, reg p:p(V +), reg ns:*, reg ns1:V, reg p1:p(V +), reg r4:V, reg is_primitive:cls, reg f:*, reg f1:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st pmi = pmi;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("methods", "getFunction");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      pmi1 = ld pmi;
      pmi2 = force? pmi1;
      checkMissing(pmi2);
      return pmi2;
    };
    p1 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r4 = dyn r1(p, FALSE, FALSE, p1);
    check L2() else D2();
  D2():
    deopt 10 [r4];
  L2():
    st f = r4;
    is_primitive = ldf `is.primitive`;
    check L3() else D3();
  D3():
    deopt 13 [];
  L3():
    p2 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r6 = dyn is_primitive(p2);
    check L4() else D4();
  D4():
    deopt 15 [r6];
  L4():
    popenv;
    return r6;
  }
}