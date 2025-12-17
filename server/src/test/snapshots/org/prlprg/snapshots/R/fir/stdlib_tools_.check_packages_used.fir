fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.check_packages_used` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r14:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p3:p(V +), reg r16:V, reg r17:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg basename:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r24:V, reg r25:V, reg c3:L, reg _load_namespace_quietly:cls, reg package5:*, reg package6:V, reg p7:p(V +), reg dirname:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:V, reg asNamespace:cls, reg package7:*, reg package8:V, reg p10:p(V +), reg r33:V, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p11:p(V +), reg r35:V, reg _read_description:cls, reg dfile:*, reg dfile1:V, reg p12:p(V +), reg r37:V, reg file_path2:cls, reg dir11:*, reg dir12:V, reg p13:p(V +), reg r39:V, reg file_exists:cls, reg nsfile:*, reg nsfile1:V, reg p14:p(V +), reg r41:V, reg c4:L, reg readRDS:cls, reg nsfile2:*, reg nsfile3:V, reg p15:p(V +), reg r43:V, reg r44:V, reg file_path3:cls, reg dir13:*, reg dir14:V, reg p16:p(V +), reg r46:V, reg file_exists1:cls, reg nsfile4:*, reg nsfile5:V, reg p17:p(V +), reg r48:V, reg c5:L, reg parseNamespaceFile:cls, reg basename1:cls, reg dir15:*, reg dir16:V, reg p18:p(V +), reg r50:V, reg p19:p(V +), reg dirname1:cls, reg dir17:*, reg dir18:V, reg p20:p(V +), reg r53:V, reg p21:p(V +), reg r55:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r57:V, reg r58:V, reg missing1:cls, reg r59:V, reg r60:V, reg c6:L, reg dir_exists1:cls, reg dir19:*, reg dir20:V, reg p22:p(V +), reg r62:V, reg r63:V, reg c7:L, reg stop2:cls, reg gettextf1:cls, reg dir21:*, reg dir22:V, reg p23:p(V +), reg r65:V, reg p24:p(V +), reg r67:V, reg file_path_as_absolute:cls, reg dir23:*, reg dir24:V, reg p25:p(V +), reg r70:V, reg _get_package_metadata:cls, reg dir25:*, reg dir26:V, reg p26:p(V +), reg r72:V, reg file_path4:cls, reg dir27:*, reg dir28:V, reg p27:p(V +), reg r74:V, reg file_exists2:cls, reg nsfile6:*, reg nsfile7:V, reg p28:p(V +), reg r76:V, reg c8:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r77:V, reg c13:L, reg r78:V, reg tryCatch:cls, reg parseNamespaceFile1:cls, reg basename2:cls, reg dir29:*, reg dir30:V, reg p29:p(V +), reg r80:V, reg p30:p(V +), reg dirname2:cls, reg dir31:*, reg dir32:V, reg p31:p(V +), reg r83:V, reg p32:p(V +), reg r85:V, reg p33:p(V +), reg identity:*, reg identity1:V, reg p34:p(V +), reg r88:V, reg inherits:cls, reg r89:V, reg c14:L, reg c15:V, reg c17:L, reg file_path5:cls, reg dir33:*, reg dir34:V, reg p35:p(V +), reg r92:V, reg dir_exists2:cls, reg code_dir2:*, reg code_dir3:V, reg p36:p(V +), reg r94:V, reg c18:L, reg tempfile:cls, reg r95:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r96:V, reg on_exit:cls, reg r98:V, reg file_create:cls, reg file:*, reg file1:V, reg p37:p(V +), reg r100:V, reg r101:V, reg c19:L, reg stop3:cls, reg file2:*, reg file3:V, reg p38:p(V +), reg r103:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r105:V, reg r106:V, reg _file_append_ensuring_LFs:cls, reg file4:*, reg file5:V, reg p39:p(V +), reg list_files_with_type:cls, reg code_dir4:*, reg code_dir5:V, reg p40:p(V +), reg r109:V, reg p41:p(V +), reg r111:V, reg all:cls, reg r112:V, reg r113:V, reg c20:L, reg stop4:cls, reg r114:V, reg r115:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r117:V, reg r118:V, reg invisible:cls, reg r119:V, reg db:*, reg db1:V, reg c21:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r120:V, reg _get_requires_from_package_db:cls, reg db4:*, reg db5:V, reg p42:p(V +), reg r122:V, reg _get_requires_from_package_db1:cls, reg db6:*, reg db7:V, reg p43:p(V +), reg r124:V, reg _get_requires_from_package_db2:cls, reg db8:*, reg db9:V, reg p44:p(V +), reg r126:V, reg _get_requires_from_package_db3:cls, reg db10:*, reg db11:V, reg p45:p(V +), reg r128:V, reg setdiff:cls, reg _get_standard_package_names:cls, reg r129:V, reg c22:L, reg r131:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r132:V, reg p46:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r134:V, reg r135:V, reg c23:cls, reg r136:V, reg p47:p(V +), reg r138:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r139:V, reg r140:V, reg c24:cls, reg r141:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r142:V, reg r143:V, reg depends:*, reg depends1:V, reg suggests:*, reg suggests1:V, reg enhances:*, reg enhances1:V, reg pkg_name:*, reg pkg_name1:V, reg default_package_names:*, reg default_package_names1:V, reg c25:cls, reg r144:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r145:V, reg r146:V, reg imports:*, reg imports1:V, reg depends2:*, reg depends3:V, reg suggests2:*, reg suggests3:V, reg enhances2:*, reg enhances3:V, reg pkg_name2:*, reg pkg_name3:V, reg standard_package_names:*, reg standard_package_names1:V, reg c26:cls, reg r147:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r148:V, reg r149:V, reg c27:cls, reg r150:V, reg character:cls, reg r151:V, reg character1:cls, reg r152:V, reg r153:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r154:V, reg r155:V, reg missing2:cls, reg r156:V, reg r157:V, reg c28:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r158:V, reg r159:V, reg objects:cls, reg code_env:*, reg code_env1:V, reg p48:p(V +), reg r161:V, reg length1:cls, reg r162:V, reg c29:L, reg lapply:cls, reg ls:cls, reg code_env2:*, reg code_env3:V, reg p49:p(V +), reg r165:V, reg p50:p(V +), reg r167:cls, reg p51:p(V +), reg r169:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r170:V, reg r171:V, reg _isMethodsDispatchOn:cls, reg r172:V, reg c30:L, reg _get_S4_generics:cls, reg code_env4:*, reg code_env5:V, reg p52:p(V +), reg r174:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg _get_S4_methods_list:cls, reg f:*, reg f1:V, reg p53:p(V +), reg code_env6:*, reg code_env7:V, reg p54:p(V +), reg r177:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r178:V, reg i7:I, reg r179:V, reg exprs:*, reg exprs1:V, reg lapply1:cls, reg mlist:*, reg mlist1:V, reg p55:p(V +), reg body:*, reg body1:V, reg p56:p(V +), reg r182:V, reg c32:cls, reg r183:V, reg i8:V, reg db12:*, reg db13:V, reg c33:L, reg db15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r184:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r185:V, reg r186:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r187:V, reg r188:V, reg c34:L, reg c36:V, reg _notin_:cls, reg Sys_getlocale:cls, reg r189:V, reg p57:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r191:V, reg r192:V, reg c37:cls, reg r193:V, reg p58:p(V +), reg r195:V, reg c38:L, reg c39:V, reg c41:L, reg file6:cls, reg file7:*, reg file8:V, reg p59:p(V +), reg enc2:*, reg enc3:V, reg p60:p(V +), reg r198:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r199:V, reg r200:V, reg on_exit1:cls, reg r201:V, reg file9:*, reg file10:V, reg tryCatch1:cls, reg parse:cls, reg con:*, reg con1:V, reg p61:p(V +), reg p62:p(V +), reg r205:V, reg p63:p(V +), reg r207:cls, reg p64:p(V +), reg r209:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r210:V, reg r211:V, reg exprs2:*, reg exprs3:V, reg r212:I, reg s1:V, reg l1:I, reg i10:I, reg i11:I, reg i12:I, reg c42:L, reg x1:V, reg find_bad_exprs:cls, reg exprs4:*, reg exprs5:V, reg c43:L, reg exprs7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i15:*, reg i16:V, reg __2:cls, reg r213:V, reg p65:p(V +), reg r215:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r216:V, reg r217:V, reg ns:*, reg ns1:V, reg length2:cls, reg r218:V, reg c44:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r219:V, reg r220:V, reg ns2:*, reg ns3:V, reg c45:L, reg ns5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r221:V, reg ns6:*, reg ns7:V, reg c46:L, reg ns9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r222:V, reg ns10:*, reg ns11:V, reg c47:L, reg ns13:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r223:V, reg c48:cls, reg r224:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r225:V, reg r226:V, reg imp:*, reg imp1:V, reg length3:cls, reg r227:V, reg c49:L, reg sapply:cls, reg imp2:*, reg imp3:V, reg p66:p(V +), reg r229:cls, reg p67:p(V +), reg r231:V, reg unique:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r232:V, reg r233:V, reg imp4:*, reg imp5:V, reg all_imports:*, reg all_imports1:V, reg c50:cls, reg r234:V, reg p68:p(V +), reg r236:V, reg r237:V, reg character2:cls, reg r239:V, reg setdiff1:cls, reg imports2:*, reg imports3:V, reg p69:p(V +), reg all_imports2:*, reg all_imports3:V, reg p70:p(V +), reg r242:V, reg setdiff2:cls, reg depends4:*, reg depends5:V, reg p71:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r244:V, reg r245:V, reg imp6:*, reg imp7:V, reg default_package_names2:*, reg default_package_names3:V, reg c51:cls, reg r246:V, reg p72:p(V +), reg r248:V, reg uses_methods:*, reg uses_methods1:V, reg c52:L, reg c54:V, reg _notin_1:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r249:V, reg r250:V, reg depends6:*, reg depends7:V, reg imports4:*, reg imports5:V, reg c55:cls, reg r251:V, reg p73:p(V +), reg r253:V, reg c56:L, reg c57:V, reg c59:L, reg gettext:cls, reg r254:V, reg r255:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r256:V, reg r257:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r258:V, reg r259:V, reg c60:cls, reg r260:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r261:V, reg r262:V, reg c61:cls, reg r263:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r264:V, reg r265:V, reg c62:cls, reg r266:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r267:V, reg r268:V, reg c63:cls, reg r269:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r270:V, reg r271:V, reg c64:cls, reg r272:V, reg list:cls, reg r273:V, reg character3:cls, reg r274:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r275:V, reg r276:V, reg imp8:*, reg imp9:V, reg length4:cls, reg r277:V, reg c65:L, reg imp10:*, reg imp11:V, reg l2:*, reg names__:cls, reg r278:V, reg unique1:cls, reg imp12:*, reg imp13:V, reg p74:p(V +), reg r280:V, reg split:cls, reg imp2f:*, reg imp2f1:V, reg p75:p(V +), reg sym33:cls, reg base33:cls, reg guard33:L, reg r282:V, reg r283:V, reg imp2f2:*, reg imp2f3:V, reg names:cls, reg r284:V, reg p76:p(V +), reg r286:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r287:V, reg r288:V, reg imps:*, reg imps1:V, reg names1:cls, reg r289:V, reg s2:V, reg l3:I, reg i17:I, reg i18:I, reg i19:I, reg c66:L, reg x2:V, reg imps2:*, reg imps3:V, reg c67:L, reg i23:I, reg imps5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i25:I, reg dx15:V, reg p77:*, reg p78:V, reg __3:cls, reg r290:V, reg sub:cls, reg this:*, reg this1:V, reg p79:p(V +), reg r292:V, reg sub1:cls, reg this2:*, reg this3:V, reg p80:p(V +), reg r294:V, reg _in_:cls, reg p81:*, reg p82:V, reg p83:p(V +), reg r296:V, reg c68:L, reg setdiff3:cls, reg this4:*, reg this5:V, reg p84:p(V +), reg ls1:cls, reg sym35:cls, reg base35:cls, reg guard35:L, reg r298:V, reg r299:V, reg baseenv:cls, reg r300:V, reg p85:p(V +), reg r302:V, reg p86:p(V +), reg r304:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r305:V, reg i30:I, reg r306:V, reg this6:*, reg this7:V, reg length5:cls, reg r307:V, reg c69:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r308:V, reg i35:I, reg r309:V, reg imp2un:*, reg imp2un1:V, reg paste:cls, reg p87:*, reg p88:V, reg p89:p(V +), reg this8:*, reg this9:V, reg p90:p(V +), reg r312:V, reg c70:cls, reg r313:V, reg i36:I, reg _getNamespace:cls, reg p91:*, reg p92:V, reg p93:p(V +), reg r317:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r318:V, reg i41:I, reg r319:V, reg ns14:*, reg ns15:V, reg c71:V, reg c72:L, reg tryCatch2:cls, reg suppressWarnings:cls, reg suppressMessages:cls, reg loadNamespace:cls, reg p94:*, reg p95:V, reg p96:p(V +), reg r321:V, reg p97:p(V +), reg r323:V, reg p98:p(V +), reg r325:V, reg p99:p(V +), reg r327:cls, reg p100:p(V +), reg r329:V, reg i44:I, reg r330:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r331:V, reg i47:I, reg r332:V, reg value:*, reg value1:V, reg inherits1:cls, reg r333:V, reg r334:V, reg c73:L, reg asNamespace1:cls, reg p101:*, reg p102:V, reg p103:p(V +), reg r336:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r337:V, reg i52:I, reg r338:V, reg ls2:cls, reg _getNamespaceInfo:cls, reg ns16:*, reg ns17:V, reg p104:p(V +), reg r340:V, reg p105:p(V +), reg r342:V, reg ls3:cls, reg _getNamespaceInfo1:cls, reg ns18:*, reg ns19:V, reg p106:p(V +), reg r344:V, reg p107:p(V +), reg r346:V, reg extras:*, reg extras1:V, reg c74:L, reg i54:I, reg extras3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i56:I, reg dx17:V, reg p108:*, reg p109:V, reg __4:cls, reg r347:V, reg c75:cls, reg r348:V, reg setdiff4:cls, reg this10:*, reg this11:V, reg p110:p(V +), reg exps:*, reg exps1:V, reg p111:p(V +), reg r351:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r352:V, reg i59:I, reg r353:V, reg this12:*, reg this13:V, reg length6:cls, reg r354:V, reg c76:L, reg sym42:cls, reg base42:cls, reg guard42:L, reg r355:V, reg i64:I, reg r356:V, reg imp2un2:*, reg imp2un3:V, reg paste1:cls, reg p112:*, reg p113:V, reg p114:p(V +), reg this14:*, reg this15:V, reg p115:p(V +), reg r359:V, reg c77:cls, reg r360:V, reg i65:I, reg r361:V, reg i66:I, reg imp14:*, reg imp15:V, reg l4:*, reg names__1:cls, reg r363:V, reg pkg_name4:*, reg pkg_name5:V, reg r364:V, reg c78:L, reg imp3f:*, reg imp3f1:V, reg c79:L, reg imp3f3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg imp16:*, reg imp17:V, reg r365:V, reg _notin_2:cls, reg imp3f4:*, reg imp3f5:V, reg p116:p(V +), reg sym43:cls, reg base43:cls, reg guard43:L, reg r367:V, reg r368:V, reg c80:cls, reg r369:V, reg p117:p(V +), reg r371:V, reg r372:V, reg __5:cls, reg r373:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r374:V, reg r375:V, reg imp3f6:*, reg imp3f7:V, reg names2:cls, reg r376:V, reg unique2:cls, reg imp18:*, reg imp19:V, reg p118:p(V +), reg r379:V, reg _in_1:cls, reg pkg_name6:*, reg pkg_name7:V, reg p119:p(V +), reg imp20:*, reg imp21:V, reg p120:p(V +), reg r382:V, reg as_vector:cls, reg imp3f8:*, reg imp3f9:V, reg c81:L, reg imp3f11:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r383:V, reg imp3f14:V, reg r384:V, reg imp3f15:*, reg imp3f16:V, reg names3:cls, reg r385:V, reg pkg_name8:*, reg pkg_name9:V, reg r386:V, reg __6:cls, reg r387:V, reg p121:p(V +), reg r389:V, reg setdiff5:cls, reg imp22:*, reg imp23:V, reg p122:p(V +), reg pkg_name10:*, reg pkg_name11:V, reg p123:p(V +), reg r392:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r393:V, reg r394:V, reg imp24:*, reg imp25:V, reg length7:cls, reg r395:V, reg c82:L, reg imp3f17:*, reg imp3f18:V, reg c83:L, reg imp3f20:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg _in_2:cls, reg sym47:cls, reg base47:cls, reg guard47:L, reg r396:V, reg r397:V, reg imp3f21:*, reg imp3f22:V, reg names4:cls, reg r398:V, reg p124:p(V +), reg imp26:*, reg imp27:V, reg p125:p(V +), reg r401:V, reg __7:cls, reg r402:V, reg split1:cls, reg imp3f23:*, reg imp3f24:V, reg p126:p(V +), reg sym48:cls, reg base48:cls, reg guard48:L, reg r404:V, reg r405:V, reg imp3f25:*, reg imp3f26:V, reg names5:cls, reg r406:V, reg p127:p(V +), reg r408:V, reg character4:cls, reg r409:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r410:V, reg r411:V, reg imps6:*, reg imps7:V, reg names6:cls, reg r412:V, reg s3:V, reg l5:I, reg i68:I, reg i69:I, reg i70:I, reg c84:L, reg x3:V, reg imps8:*, reg imps9:V, reg c85:L, reg i74:I, reg imps11:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i76:I, reg dx25:V, reg p128:*, reg p129:V, reg __8:cls, reg r413:V, reg sub2:cls, reg this16:*, reg this17:V, reg p130:p(V +), reg r415:V, reg sub3:cls, reg this18:*, reg this19:V, reg p131:p(V +), reg r417:V, reg _in_3:cls, reg p132:*, reg p133:V, reg p134:p(V +), reg r419:V, reg c86:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r420:V, reg i81:I, reg r421:V, reg imp32:*, reg imp33:V, reg paste2:cls, reg p135:*, reg p136:V, reg p137:p(V +), reg this20:*, reg this21:V, reg p138:p(V +), reg r424:V, reg c87:cls, reg r425:V, reg _getNamespace1:cls, reg p139:*, reg p140:V, reg p141:p(V +), reg r428:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r429:V, reg i86:I, reg r430:V, reg ns20:*, reg ns21:V, reg c88:V, reg c89:L, reg tryCatch3:cls, reg suppressWarnings1:cls, reg suppressMessages1:cls, reg loadNamespace1:cls, reg p142:*, reg p143:V, reg p144:p(V +), reg r432:V, reg p145:p(V +), reg r434:V, reg p146:p(V +), reg r436:V, reg p147:p(V +), reg r438:cls, reg p148:p(V +), reg r440:V, reg i89:I, reg r441:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r442:V, reg i92:I, reg r443:V, reg value2:*, reg value3:V, reg inherits2:cls, reg r444:V, reg c90:L, reg sym53:cls, reg base53:cls, reg guard53:L, reg r445:V, reg i97:I, reg r446:V, reg unknown:*, reg unknown1:V, reg p149:*, reg p150:V, reg c91:cls, reg r447:V, reg i98:I, reg sym54:cls, reg base54:cls, reg guard54:L, reg r449:V, reg i101:I, reg r450:V, reg ls4:cls, reg getNamespaceInfo:cls, reg p151:*, reg p152:V, reg p153:p(V +), reg r452:V, reg p154:p(V +), reg r454:V, reg extras4:*, reg extras5:V, reg c92:L, reg i103:I, reg extras7:V, reg dr26:V, reg dc13:L, reg dx26:V, reg i105:I, reg dx27:V, reg p155:*, reg p156:V, reg __9:cls, reg r455:V, reg c93:cls, reg r456:V, reg _in_4:cls, reg this22:*, reg this23:V, reg p157:p(V +), reg exps2:*, reg exps3:V, reg p158:p(V +), reg r459:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r460:V, reg i108:I, reg r461:V, reg this24:*, reg this25:V, reg any:cls, reg r462:V, reg c94:L, reg sym56:cls, reg base56:cls, reg guard56:L, reg r463:V, reg i113:I, reg r464:V, reg imp34:*, reg imp35:V, reg paste3:cls, reg p159:*, reg p160:V, reg p161:p(V +), reg this26:*, reg this27:V, reg c95:L, reg this29:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg this30:*, reg this31:V, reg __10:cls, reg r466:V, reg p162:p(V +), reg r468:V, reg c96:cls, reg r469:V, reg i114:I, reg sym57:cls, reg base57:cls, reg guard57:L, reg r471:V, reg i117:I, reg r472:V, reg this32:*, reg this33:V, reg r473:V, reg any1:cls, reg r474:V, reg c97:L, reg sym58:cls, reg base58:cls, reg guard58:L, reg r475:V, reg i122:I, reg r476:V, reg imp36:*, reg imp37:V, reg p163:*, reg p164:V, reg c98:cls, reg r477:V, reg this34:*, reg this35:V, reg c99:L, reg i124:I, reg this37:V, reg dr30:V, reg dc15:L, reg dx30:V, reg i126:I, reg dx31:V, reg this38:*, reg this39:V, reg r478:V, reg __11:cls, reg r479:V, reg ls5:cls, reg asNamespace2:cls, reg p165:*, reg p166:V, reg p167:p(V +), reg r481:V, reg p168:p(V +), reg r483:V, reg _in_5:cls, reg this40:*, reg this41:V, reg p169:p(V +), reg pp:*, reg pp1:V, reg p170:p(V +), reg r486:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r487:V, reg i129:I, reg r488:V, reg this42:*, reg this43:V, reg any2:cls, reg r489:V, reg c100:L, reg sym60:cls, reg base60:cls, reg guard60:L, reg r490:V, reg i134:I, reg r491:V, reg imp3f27:*, reg imp3f28:V, reg paste4:cls, reg p171:*, reg p172:V, reg p173:p(V +), reg this44:*, reg this45:V, reg c101:L, reg this47:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg this48:*, reg this49:V, reg __12:cls, reg r493:V, reg p174:p(V +), reg r495:V, reg c102:cls, reg r496:V, reg i135:I, reg sym61:cls, reg base61:cls, reg guard61:L, reg r498:V, reg i138:I, reg r499:V, reg this50:*, reg this51:V, reg r500:V, reg any3:cls, reg r501:V, reg c103:L, reg sym62:cls, reg base62:cls, reg guard62:L, reg r502:V, reg i143:I, reg r503:V, reg imp3ff:*, reg imp3ff1:V, reg paste5:cls, reg p175:*, reg p176:V, reg p177:p(V +), reg this52:*, reg this53:V, reg c104:L, reg this55:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg this56:*, reg this57:V, reg r505:V, reg __13:cls, reg r506:V, reg p178:p(V +), reg r508:V, reg c105:cls, reg r509:V, reg i144:I, reg r510:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r511:V, reg r512:V, reg imp3f29:*, reg imp3f30:V, reg length8:cls, reg r513:V, reg c106:L, reg sapply1:cls, reg strsplit:cls, reg imp3f31:*, reg imp3f32:V, reg p179:p(V +), reg r515:V, reg p180:p(V +), reg r517:cls, reg p181:p(V +), reg r519:V, reg imp3f33:*, reg imp3f34:V, reg c107:L, reg imp3f36:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg maintainers:*, reg maintainers1:V, reg db16:*, reg db17:V, reg c108:L, reg imp3f38:V, reg maintainers3:V, reg db19:V, reg dr38:V, reg dc19:L, reg dx38:V, reg imp3f40:V, reg maintainers5:V, reg dx39:V, reg __14:cls, reg r520:V, reg r521:V, reg __15:cls, reg r522:V, reg dx40:V, reg character5:cls, reg r523:V, reg setdiff6:cls, reg sort:cls, reg unique3:cls, reg imp3ff2:*, reg imp3ff3:V, reg p182:p(V +), reg r525:V, reg p183:p(V +), reg r527:V, reg p184:p(V +), reg r529:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r530:V, reg r531:V, reg unique4:cls, reg bad_exprs:*, reg bad_exprs1:V, reg p185:p(V +), reg r533:V, reg unique5:cls, reg bad_prac:*, reg bad_prac1:V, reg p186:p(V +), reg r535:V, reg unique6:cls, reg bad_imports:*, reg bad_imports1:V, reg p187:p(V +), reg r537:V, reg unique7:cls, reg bad_imps:*, reg bad_imps1:V, reg p188:p(V +), reg r539:V, reg unique8:cls, reg bad_deps:*, reg bad_deps1:V, reg p189:p(V +), reg r541:V, reg bad_imp:*, reg bad_imp1:V, reg depends_not_import:*, reg depends_not_import1:V, reg sort1:cls, reg unique9:cls, reg imp2un4:*, reg imp2un5:V, reg p190:p(V +), reg r543:V, reg p191:p(V +), reg r545:V, reg sort2:cls, reg unique10:cls, reg imp38:*, reg imp39:V, reg p192:p(V +), reg r547:V, reg p193:p(V +), reg r549:V, reg imp40:*, reg imp41:V, reg sort3:cls, reg unique11:cls, reg imp3f41:*, reg imp3f42:V, reg p194:p(V +), reg r551:V, reg p195:p(V +), reg r553:V, reg imp3ff4:*, reg imp3ff5:V, reg imp3self:*, reg imp3self1:V, reg sort4:cls, reg unique12:cls, reg imp3selfcalls:*, reg imp3selfcalls1:V, reg p196:p(V +), reg r555:V, reg p197:p(V +), reg r557:V, reg unknown2:*, reg unknown3:V, reg methods_message:*, reg methods_message1:V, reg list1:cls, reg r558:V, reg l6:*, reg class__:cls, reg r559:V, reg res:*, reg res1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    st ns = NULL;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L144() else L145();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L146() else L2();
  L144():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L145():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L194() else L195();
  L13():
    db = ld db;
    check L250() else D65();
  L146():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L147() else L148();
  D65():
    deopt 214 [db];
  L3(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L151() else L4();
  L14(r58):
    r60 = `!`(r58);
    c6 = `as.logical`(r60);
    if c6 then L196() else L15();
  L147():
    package1 = ld package;
    check L149() else D0();
  L148():
    r4 = dyn base1(<sym package>);
    goto L3(r4);
  L194():
    missing1 = ldf missing in base;
    r59 = dyn missing1(<sym dir>);
    goto L14(r59);
  L195():
    r57 = dyn base2(<sym dir>);
    goto L14(r57);
  L250():
    db1 = force? db;
    checkMissing(db1);
    c21 = `is.object`(db1);
    if c21 then L251() else L252(db1);
  D0():
    deopt 9 [package1];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L155() else D4();
  L15():
    goto L13();
  L31(dx1):
    st pkg_name = dx1;
    _get_requires_from_package_db = ldf `.get_requires_from_package_db`;
    check L254() else D66();
  L149():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L150() else D1();
  L151():
    stop = ldf stop;
    check L152() else D2();
  L196():
    dir_exists1 = ldf `dir.exists`;
    check L197() else D34();
  L251():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L253() else L252(dr);
  L252(db3):
    __ = ldf `[` in base;
    r120 = dyn __(db3, "Package");
    goto L31(r120);
  D1():
    deopt 12 [r6];
  D2():
    deopt 16 [];
  D4():
    deopt 22 [];
  D34():
    deopt 114 [];
  D66():
    deopt 221 [];
  L150():
    goto L3(r6);
  L152():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L153() else D3();
  L155():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r12 = dyn find_package(p, p1);
    check L156() else D5();
  L197():
    p22 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r62 = dyn dir_exists1(p22);
    check L198() else D35();
  L253():
    dx = getTryDispatchBuiltinValue(dr);
    goto L31(dx);
  L254():
    p42 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    r122 = dyn _get_requires_from_package_db(p42, "Depends");
    check L255() else D67();
  D3():
    deopt 18 [r8];
  D5():
    deopt 25 [r12];
  D35():
    deopt 116 [r62];
  D67():
    deopt 224 [r122];
  L153():
    goto L5();
  L156():
    st dir = r12;
    file_path = ldf `file.path`;
    check L157() else D6();
  L198():
    r63 = `!`(r62);
    c7 = `as.logical`(r63);
    if c7 then L199() else L16();
  L255():
    st depends = r122;
    _get_requires_from_package_db1 = ldf `.get_requires_from_package_db`;
    check L256() else D68();
  D6():
    deopt 28 [];
  D68():
    deopt 227 [];
  L16():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L203() else D38();
  L17():
    _get_package_metadata = ldf `.get_package_metadata`;
    check L205() else D40();
  L157():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r14 = dyn file_path(p2, "R");
    check L158() else D7();
  L199():
    stop2 = ldf stop;
    check L200() else D36();
  L256():
    p43 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r124 = dyn _get_requires_from_package_db1(p43, "Imports");
    check L257() else D69();
  D7():
    deopt 31 [r14];
  D36():
    deopt 119 [];
  D38():
    deopt 125 [];
  D40():
    deopt 130 [];
  D69():
    deopt 230 [r124];
  L158():
    st code_dir = r14;
    dir_exists = ldf `dir.exists`;
    check L159() else D8();
  L200():
    p24 = prom<V +>{
      gettextf1 = ldf gettextf;
      p23 = prom<V +>{
        dir21 = ld dir;
        dir22 = force? dir21;
        checkMissing(dir22);
        return dir22;
      };
      r65 = dyn gettextf1("directory '%s' does not exist", p23);
      return r65;
    };
    r67 = dyn stop2[, domain](p24, NA_LGL);
    check L201() else D37();
  L203():
    p25 = prom<V +>{
      dir23 = ld dir;
      dir24 = force? dir23;
      checkMissing(dir24);
      return dir24;
    };
    r70 = dyn file_path_as_absolute(p25);
    check L204() else D39();
  L205():
    p26 = prom<V +>{
      dir25 = ld dir;
      dir26 = force? dir25;
      checkMissing(dir26);
      return dir26;
    };
    r72 = dyn _get_package_metadata(p26);
    check L206() else D41();
  L257():
    st imports0 = r124;
    st imports = r124;
    _get_requires_from_package_db2 = ldf `.get_requires_from_package_db`;
    check L258() else D70();
  D8():
    deopt 34 [];
  D37():
    deopt 123 [r67];
  D39():
    deopt 127 [r70];
  D41():
    deopt 132 [r72];
  D70():
    deopt 234 [];
  L159():
    p3 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r16 = dyn dir_exists(p3);
    check L160() else D9();
  L201():
    goto L17();
  L204():
    st dir = r70;
    goto L17();
  L206():
    st db = r72;
    file_path4 = ldf `file.path`;
    check L207() else D42();
  L258():
    p44 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      return db9;
    };
    r126 = dyn _get_requires_from_package_db2(p44, "Suggests");
    check L259() else D71();
  D9():
    deopt 36 [r16];
  D42():
    deopt 135 [];
  D71():
    deopt 237 [r126];
  L160():
    r17 = `!`(r16);
    c2 = `as.logical`(r17);
    if c2 then L161() else L6();
  L207():
    p27 = prom<V +>{
      dir27 = ld dir;
      dir28 = force? dir27;
      checkMissing(dir28);
      return dir28;
    };
    r74 = dyn file_path4(p27, "NAMESPACE");
    check L208() else D43();
  L259():
    st suggests = r126;
    _get_requires_from_package_db3 = ldf `.get_requires_from_package_db`;
    check L260() else D72();
  D43():
    deopt 138 [r74];
  D72():
    deopt 240 [];
  L6():
    goto L7();
  L7():
    basename = ldf basename;
    check L165() else D12();
  L161():
    stop1 = ldf stop;
    check L162() else D10();
  L208():
    st nsfile = r74;
    file_exists2 = ldf `file.exists`;
    check L209() else D44();
  L260():
    p45 = prom<V +>{
      db10 = ld db;
      db11 = force? db10;
      checkMissing(db11);
      return db11;
    };
    r128 = dyn _get_requires_from_package_db3(p45, "Enhances");
    check L261() else D73();
  D10():
    deopt 39 [];
  D12():
    deopt 47 [];
  D44():
    deopt 141 [];
  D73():
    deopt 243 [r128];
  L162():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r19 = dyn gettextf("directory '%s' does not contain R code", p4);
      return r19;
    };
    r21 = dyn stop1[, domain](p5, NA_LGL);
    check L163() else D11();
  L165():
    p6 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r24 = dyn basename(p6);
    check L166() else D13();
  L209():
    p28 = prom<V +>{
      nsfile6 = ld nsfile;
      nsfile7 = force? nsfile6;
      checkMissing(nsfile7);
      return nsfile7;
    };
    r76 = dyn file_exists2(p28);
    check L210() else D45();
  L261():
    st enhances = r128;
    setdiff = ldf setdiff;
    check L262() else D74();
  D11():
    deopt 43 [r21];
  D13():
    deopt 49 [r24];
  D45():
    deopt 143 [r76];
  D74():
    deopt 246 [];
  L163():
    goto L7();
  L166():
    r25 = `!=`(r24, "base");
    c3 = `as.logical`(r25);
    if c3 then L167() else L8();
  L210():
    c8 = `as.logical`(r76);
    if c8 then L211() else L18(c8);
  L262():
    p46 = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r129 = dyn _get_standard_package_names();
      c22 = `is.object`(r129);
      if c22 then L1() else L2(r129);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r129);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r131):
      r132 = `$`(r131, <sym base>);
      goto L0(r132);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p47 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r135):
      return r135;
    L1():
      c23 = ldf c in base;
      r136 = dyn c23("methods", "stats4");
      goto L0(r136);
    L2():
      r134 = dyn base7("methods", "stats4");
      goto L0(r134);
    };
    r138 = dyn setdiff(p46, p47);
    check L263() else D75();
  D75():
    deopt 249 [r138];
  L8():
    goto L9();
  L9():
    asNamespace = ldf asNamespace;
    check L171() else D16();
  L18(c10):
    c17 = `as.logical`(c10);
    if c17 then L218() else L20();
  L167():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L168() else D14();
  L211():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L212() else L213();
  L263():
    st standard_package_names = r138;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L264() else L265();
  D14():
    deopt 53 [];
  D16():
    deopt 60 [];
  L19(c13, r78):
    c14 = `as.logical`(r78);
    c15 = `&&`(c13, c14);
    goto L18(c15);
  L20():
    goto L21();
  L21():
    file_path5 = ldf `file.path`;
    check L220() else D49();
  L32(r140):
    st default_package_names = r140;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L267() else L268();
  L168():
    p7 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p9 = prom<V +>{
      dirname = ldf dirname;
      p8 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r28 = dyn dirname(p8);
      return r28;
    };
    r30 = dyn _load_namespace_quietly(p7, p9);
    check L169() else D15();
  L171():
    p10 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r33 = dyn asNamespace(p10);
    check L172() else D17();
  L212():
    tryCatch = ldf tryCatch;
    check L214() else D46();
  L213():
    r77 = dyn base3(<lang tryCatch(`<-`(ns, parseNamespaceFile(basename(dir), dirname(dir))), error=identity)>, "error");
    goto L19(c8, r77);
  L218():
    st ns = NULL;
    goto L21();
  L264():
    c24 = ldf c in base;
    r141 = dyn c24("base", "datasets", "grDevices", "graphics", "stats", "utils");
    check L266() else D76();
  L265():
    r139 = dyn base8("base", "datasets", "grDevices", "graphics", "stats", "utils");
    goto L32(r139);
  D15():
    deopt 56 [r30];
  D17():
    deopt 62 [r33];
  D46():
    deopt 147 [c8];
  D49():
    deopt 163 [];
  D76():
    deopt 260 [r141];
  L33(r143):
    st depends_suggests = r143;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L275() else L276();
  L169():
    goto L9();
  L172():
    st code_env = r33;
    file_path1 = ldf `file.path`;
    check L173() else D18();
  L214():
    p33 = prom<V +>{
      parseNamespaceFile1 = ldf parseNamespaceFile;
      p30 = prom<V +>{
        basename2 = ldf basename;
        p29 = prom<V +>{
          dir29 = ld dir;
          dir30 = force? dir29;
          checkMissing(dir30);
          return dir30;
        };
        r80 = dyn basename2(p29);
        return r80;
      };
      p32 = prom<V +>{
        dirname2 = ldf dirname;
        p31 = prom<V +>{
          dir31 = ld dir;
          dir32 = force? dir31;
          checkMissing(dir32);
          return dir32;
        };
        r83 = dyn dirname2(p31);
        return r83;
      };
      r85 = dyn parseNamespaceFile1(p30, p32);
      st ns = r85;
      invisible.0();
      return r85;
    };
    p34 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r88 = dyn tryCatch[, error](p33, p34);
    check L215() else D47();
  L220():
    p35 = prom<V +>{
      dir33 = ld dir;
      dir34 = force? dir33;
      checkMissing(dir34);
      return dir34;
    };
    r92 = dyn file_path5(p35, "R");
    check L221() else D50();
  L266():
    goto L32(r141);
  L267():
    depends = ld depends;
    check L269() else D77();
  L268():
    r142 = dyn base9(<sym depends>, <sym suggests>, <sym enhances>, <sym pkg_name>, <sym default_package_names>);
    goto L33(r142);
  D18():
    deopt 65 [];
  D47():
    deopt 151 [c8, r88];
  D50():
    deopt 166 [r92];
  D77():
    deopt 264 [depends];
  L34(r146):
    st imports = r146;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L284() else L285();
  L173():
    p11 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r35 = dyn file_path1(p11, "DESCRIPTION");
    check L174() else D19();
  L215():
    inherits = ldf inherits in base;
    r89 = dyn inherits(r88, "error", FALSE);
    check L216() else D48();
  L221():
    st code_dir = r92;
    dir_exists2 = ldf `dir.exists`;
    check L222() else D51();
  L269():
    depends1 = force? depends;
    checkMissing(depends1);
    suggests = ld suggests;
    check L270() else D78();
  L275():
    imports = ld imports;
    check L277() else D83();
  L276():
    r145 = dyn base10(<sym imports>, <sym depends>, <sym suggests>, <sym enhances>, <sym pkg_name>, <sym standard_package_names>);
    goto L34(r145);
  D19():
    deopt 68 [r35];
  D48():
    deopt 155 [c8, r89];
  D51():
    deopt 169 [];
  D78():
    deopt 266 [suggests];
  D83():
    deopt 279 [imports];
  L35(r149):
    st common_names = r149;
    character = ldf character;
    check L287() else D91();
  L174():
    st dfile = r35;
    _read_description = ldf `.read_description`;
    check L175() else D20();
  L216():
    goto L19(c8, r89);
  L222():
    p36 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r94 = dyn dir_exists2(p36);
    check L223() else D52();
  L270():
    suggests1 = force? suggests;
    checkMissing(suggests1);
    enhances = ld enhances;
    check L271() else D79();
  L277():
    imports1 = force? imports;
    checkMissing(imports1);
    depends2 = ld depends;
    check L278() else D84();
  L284():
    c27 = ldf c in base;
    r150 = dyn c27("pkg", "pkgName", "package", "pos", "dep_name");
    check L286() else D90();
  L285():
    r148 = dyn base11("pkg", "pkgName", "package", "pos", "dep_name");
    goto L35(r148);
  D20():
    deopt 71 [];
  D52():
    deopt 171 [r94];
  D79():
    deopt 268 [enhances];
  D84():
    deopt 281 [depends2];
  D90():
    deopt 302 [r150];
  D91():
    deopt 305 [];
  L175():
    p12 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r37 = dyn _read_description(p12);
    check L176() else D21();
  L223():
    c18 = `as.logical`(r94);
    if c18 then L224() else L22();
  L271():
    enhances1 = force? enhances;
    checkMissing(enhances1);
    pkg_name = ld pkg_name;
    check L272() else D80();
  L278():
    depends3 = force? depends2;
    checkMissing(depends3);
    suggests2 = ld suggests;
    check L279() else D85();
  L286():
    goto L35(r150);
  L287():
    r151 = dyn character();
    check L288() else D92();
  D21():
    deopt 73 [r37];
  D80():
    deopt 270 [pkg_name];
  D85():
    deopt 283 [suggests2];
  D92():
    deopt 306 [r151];
  L22():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L245() else L246();
  L176():
    st db = r37;
    file_path2 = ldf `file.path`;
    check L177() else D22();
  L224():
    tempfile = ldf tempfile;
    check L225() else D53();
  L272():
    pkg_name1 = force? pkg_name;
    checkMissing(pkg_name1);
    default_package_names = ld default_package_names;
    check L273() else D81();
  L279():
    suggests3 = force? suggests2;
    checkMissing(suggests3);
    enhances2 = ld enhances;
    check L280() else D86();
  L288():
    st bad_prac = r151;
    st bad_imps = r151;
    st bad_deps = r151;
    st bad_exprs = r151;
    character1 = ldf character;
    check L289() else D93();
  D22():
    deopt 76 [];
  D53():
    deopt 173 [];
  D81():
    deopt 272 [default_package_names];
  D86():
    deopt 285 [enhances2];
  D93():
    deopt 312 [];
  L30(r118):
    popenv;
    return r118;
  L177():
    p13 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r39 = dyn file_path2(p13, "Meta", "nsInfo.rds");
    check L178() else D23();
  L225():
    r95 = dyn tempfile();
    check L226() else D54();
  L245():
    invisible = ldf invisible in base;
    r119 = dyn invisible();
    check L247() else D64();
  L246():
    r117 = dyn base6();
    goto L30(r117);
  L273():
    default_package_names1 = force? default_package_names;
    checkMissing(default_package_names1);
    c25 = ldf c in base;
    r144 = dyn c25(depends1, suggests1, enhances1, pkg_name1, default_package_names1);
    check L274() else D82();
  L280():
    enhances3 = force? enhances2;
    checkMissing(enhances3);
    pkg_name2 = ld pkg_name;
    check L281() else D87();
  L289():
    r152 = dyn character1();
    check L290() else D94();
  D23():
    deopt 80 [r39];
  D54():
    deopt 174 [r95];
  D64():
    deopt 210 [r119];
  D82():
    deopt 275 [r144];
  D87():
    deopt 287 [pkg_name2];
  D94():
    deopt 313 [r152];
  L178():
    st nsfile = r39;
    file_exists = ldf `file.exists`;
    check L179() else D24();
  L226():
    st file = r95;
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L227() else L228();
  L247():
    goto L30(r119);
  L274():
    goto L33(r144);
  L281():
    pkg_name3 = force? pkg_name2;
    checkMissing(pkg_name3);
    standard_package_names = ld standard_package_names;
    check L282() else D88();
  L290():
    st imp3f = r152;
    st imp3 = r152;
    st imp2f = r152;
    st imp2 = r152;
    st all_imports = r152;
    st bad_imports = r152;
    st uses_methods = FALSE;
    r153 = clos inner3708401697;
    st find_bad_exprs = r153;
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L291() else L292();
  D24():
    deopt 83 [];
  D88():
    deopt 289 [standard_package_names];
  L23():
    file_create = ldf `file.create`;
    check L229() else D55();
  L36(r155):
    r157 = `!`(r155);
    c28 = `as.logical`(r157);
    if c28 then L293() else L37();
  L179():
    p14 = prom<V +>{
      nsfile = ld nsfile;
      nsfile1 = force? nsfile;
      checkMissing(nsfile1);
      return nsfile1;
    };
    r41 = dyn file_exists(p14);
    check L180() else D25();
  L227():
    on_exit = ldf `on.exit` in base;
    r98 = dyn on_exit(<lang unlink(file)>);
    goto L23();
  L228():
    r96 = dyn base4(<lang unlink(file)>);
    goto L23();
  L282():
    standard_package_names1 = force? standard_package_names;
    checkMissing(standard_package_names1);
    c26 = ldf c in base;
    r147 = dyn c26(imports1, depends3, suggests3, enhances3, pkg_name3, standard_package_names1);
    check L283() else D89();
  L291():
    missing2 = ldf missing in base;
    r156 = dyn missing2(<sym package>);
    goto L36(r156);
  L292():
    r154 = dyn base12(<sym package>);
    goto L36(r154);
  D25():
    deopt 85 [r41];
  D55():
    deopt 180 [];
  D89():
    deopt 292 [r147];
  L37():
    db12 = ld db;
    check L320() else D109();
  L47():
    sym19 = ldf seq_along;
    base19 = ldf seq_along in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L341() else L342();
  L180():
    c4 = `as.logical`(r41);
    if c4 then L181() else L10();
  L229():
    p37 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r100 = dyn file_create(p37);
    check L230() else D56();
  L283():
    goto L34(r147);
  L293():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L294() else L295();
  D56():
    deopt 182 [r100];
  D109():
    deopt 384 [db12];
  L10():
    file_path3 = ldf `file.path`;
    check L185() else D28();
  L11(r44):
    goto L13();
  L38(r159):
    c29 = `as.logical`(r159);
    if c29 then L299() else L39();
  L54(r211):
    s1 = toForSeq(r211);
    l1 = length(s1);
    i10 = 0;
    goto L55(i10);
  L181():
    readRDS = ldf readRDS;
    check L182() else D26();
  L230():
    r101 = `!`(r100);
    c19 = `as.logical`(r101);
    if c19 then L231() else L24();
  L294():
    objects = ldf objects;
    check L296() else D95();
  L295():
    r158 = dyn base13(<lang objects(code_env, all.names=TRUE, pattern="^[.]__[CT]_")>);
    goto L38(r158);
  L320():
    db13 = force? db12;
    checkMissing(db13);
    c33 = `is.object`(db13);
    if c33 then L321() else L322(db13);
  L341():
    exprs2 = ld exprs;
    check L343() else D119();
  L342():
    r210 = dyn base19(<sym exprs>);
    goto L54(r210);
  D26():
    deopt 87 [];
  D28():
    deopt 92 [];
  D95():
    deopt 333 [];
  D119():
    deopt 424 [exprs2];
  L24():
    goto L25();
  L25():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L235() else L236();
  L39():
    goto L40();
  L40():
    lapply = ldf lapply;
    check L301() else D98();
  L48(dx5):
    st enc = dx5;
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L324() else L325();
  L55(i11):
    i12 = `+`.1(i11, 1);
    c42 = `<`.1(l1, i12);
    if c42 then L344() else L56();
  L182():
    p15 = prom<V +>{
      nsfile2 = ld nsfile;
      nsfile3 = force? nsfile2;
      checkMissing(nsfile3);
      return nsfile3;
    };
    r43 = dyn readRDS(p15);
    check L183() else D27();
  L185():
    p16 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r46 = dyn file_path3(p16, "NAMESPACE");
    check L186() else D29();
  L231():
    stop3 = ldf stop;
    check L232() else D57();
  L296():
    p48 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r161 = dyn objects[, `all.names`, pattern](p48, TRUE, "^[.]__[CT]_");
    check L297() else D96();
  L299():
    st uses_methods = TRUE;
    goto L40();
  L321():
    dr4 = tryDispatchBuiltin.1("[", db13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L323() else L322(dr4);
  L322(db15):
    __1 = ldf `[` in base;
    r184 = dyn __1(db15, "Encoding");
    goto L48(r184);
  L343():
    exprs3 = force? exprs2;
    checkMissing(exprs3);
    r212 = seq_along(exprs3);
    goto L54(r212);
  D27():
    deopt 89 [r43];
  D29():
    deopt 95 [r46];
  D57():
    deopt 185 [];
  D96():
    deopt 339 [r161];
  D98():
    deopt 348 [];
  L26(r106):
    r113 = `!`(r106);
    c20 = `as.logical`(r113);
    if c20 then L240() else L27();
  L49(r186):
    r188 = `!`(r186);
    c34 = `as.logical`(r188);
    if c34 then L328() else L50(c34);
  L56():
    x1 = `[[`(s1, i12, NULL, TRUE);
    st i = x1;
    find_bad_exprs = ldf find_bad_exprs;
    check L345() else D120();
  L183():
    st ns = r43;
    goto L11(r43);
  L186():
    st nsfile = r46;
    file_exists1 = ldf `file.exists`;
    check L187() else D30();
  L232():
    p38 = prom<V +>{
      file2 = ld file;
      file3 = force? file2;
      checkMissing(file3);
      return file3;
    };
    r103 = dyn stop3("unable to create ", p38);
    check L233() else D58();
  L235():
    _file_append_ensuring_LFs = ldf `.file_append_ensuring_LFs`;
    check L237() else D59();
  L236():
    r105 = dyn base5(<lang .file_append_ensuring_LFs(file, list_files_with_type(code_dir, "code"))>);
    goto L26(r105);
  L297():
    length1 = ldf length in base;
    r162 = dyn length1(r161);
    check L298() else D97();
  L301():
    p50 = prom<V +>{
      ls = ldf ls;
      p49 = prom<V +>{
        code_env2 = ld code_env;
        code_env3 = force? code_env2;
        checkMissing(code_env3);
        return code_env3;
      };
      r165 = dyn ls[envir, `all.names`](p49, TRUE);
      return r165;
    };
    p51 = prom<V +>{
      r167 = clos inner1384373858;
      return r167;
    };
    r169 = dyn lapply(p50, p51);
    check L302() else D99();
  L323():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L48(dx4);
  L324():
    enc = ld enc;
    check L326() else D110();
  L325():
    r185 = dyn base16(<sym enc>);
    goto L49(r185);
  L344():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L347() else L348();
  D30():
    deopt 98 [];
  D58():
    deopt 188 [r103];
  D59():
    deopt 194 [];
  D97():
    deopt 341 [r162];
  D99():
    deopt 351 [r169];
  D110():
    deopt 392 [enc];
  D120():
    deopt 428 [i12];
  L27():
    goto L28(NULL);
  L28(r115):
    goto L13();
  L50(c36):
    c41 = `as.logical`(c36);
    if c41 then L332() else L51();
  L57(r217):
    c44 = `as.logical`(r217);
    if c44 then L351() else L58();
  L187():
    p17 = prom<V +>{
      nsfile4 = ld nsfile;
      nsfile5 = force? nsfile4;
      checkMissing(nsfile5);
      return nsfile5;
    };
    r48 = dyn file_exists1(p17);
    check L188() else D31();
  L233():
    goto L25();
  L237():
    p39 = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    p41 = prom<V +>{
      list_files_with_type = ldf list_files_with_type;
      p40 = prom<V +>{
        code_dir4 = ld code_dir;
        code_dir5 = force? code_dir4;
        checkMissing(code_dir5);
        return code_dir5;
      };
      r109 = dyn list_files_with_type(p40, "code");
      return r109;
    };
    r111 = dyn _file_append_ensuring_LFs(p39, p41);
    check L238() else D60();
  L240():
    stop4 = ldf stop;
    check L241() else D62();
  L298():
    goto L38(r162);
  L302():
    st exprs = r169;
    sym14 = ldf `.isMethodsDispatchOn`;
    base14 = ldf `.isMethodsDispatchOn` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L303() else L304();
  L326():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r187 = dyn is_na(enc1);
    check L327() else D111();
  L328():
    _notin_ = ldf `%notin%`;
    check L329() else D112();
  L345():
    p65 = prom<V +>{
      exprs4 = ld exprs;
      exprs5 = force? exprs4;
      checkMissing(exprs5);
      c43 = `is.object`(exprs5);
      if c43 then L1() else L2(exprs5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", exprs5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(exprs7):
      i15 = ld i;
      i16 = force? i15;
      __2 = ldf `[[` in base;
      r213 = dyn __2(exprs7, i16);
      goto L0(r213);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r215 = dyn find_bad_exprs(p65);
    check L346() else D121();
  L347():
    ns = ld ns;
    check L349() else D122();
  L348():
    r216 = dyn base20(<sym ns>);
    goto L57(r216);
  D31():
    deopt 100 [r48];
  D60():
    deopt 197 [r111];
  D62():
    deopt 202 [];
  D111():
    deopt 395 [r187];
  D112():
    deopt 398 [c34];
  D121():
    deopt 430 [i12, r215];
  D122():
    deopt 436 [ns];
  L41(r171):
    c30 = `as.logical`(r171);
    if c30 then L306() else L42();
  L51():
    file9 = ld file;
    check L338() else D116();
  L53():
    tryCatch1 = ldf tryCatch;
    check L339() else D117();
  L58():
    character2 = ldf character;
    check L381() else D134();
  L63():
    setdiff1 = ldf setdiff;
    check L383() else D136();
  L188():
    c5 = `as.logical`(r48);
    if c5 then L189() else L12();
  L238():
    all = ldf all in base;
    r112 = dyn all(r111);
    check L239() else D61();
  L241():
    r114 = dyn stop4("unable to write code files");
    check L242() else D63();
  L303():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r172 = dyn _isMethodsDispatchOn();
    check L305() else D100();
  L304():
    r170 = dyn base14();
    goto L41(r170);
  L327():
    goto L49(r187);
  L329():
    p57 = prom<V +>{
      Sys_getlocale = ldf `Sys.getlocale`;
      r189 = dyn Sys_getlocale("LC_CTYPE");
      return r189;
    };
    p58 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r192):
      return r192;
    L1():
      c37 = ldf c in base;
      r193 = dyn c37("C", "POSIX");
      goto L0(r193);
    L2():
      r191 = dyn base17("C", "POSIX");
      goto L0(r191);
    };
    r195 = dyn _notin_(p57, p58);
    check L330() else D113();
  L332():
    file6 = ldf file;
    check L333() else D114();
  L346():
    goto L55(i12);
  L349():
    ns1 = force? ns;
    checkMissing(ns1);
    length2 = ldf length in base;
    r218 = dyn length2(ns1);
    check L350() else D123();
  L351():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L352() else L353();
  D61():
    deopt 199 [r112];
  D63():
    deopt 204 [r114];
  D100():
    deopt 356 [r172];
  D113():
    deopt 401 [c34, r195];
  D114():
    deopt 404 [];
  D116():
    deopt 413 [file9];
  D117():
    deopt 417 [];
  D123():
    deopt 439 [r218];
  D134():
    deopt 474 [];
  D136():
    deopt 478 [];
  L12():
    goto L11(NULL);
  L42():
    goto L46(NULL);
  L46(i8):
    goto L47();
  L59(r220):
    st imp = r220;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L370() else L371();
  L189():
    parseNamespaceFile = ldf parseNamespaceFile;
    check L190() else D32();
  L239():
    goto L26(r112);
  L242():
    goto L28(r114);
  L305():
    goto L41(r172);
  L306():
    _get_S4_generics = ldf `.get_S4_generics`;
    check L307() else D101();
  L330():
    c38 = `as.logical`(r195);
    c39 = `&&`(c34, c38);
    goto L50(c39);
  L333():
    p59 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    p60 = prom<V +>{
      enc2 = ld enc;
      enc3 = force? enc2;
      checkMissing(enc3);
      return enc3;
    };
    r198 = dyn file6[, encoding](p59, p60);
    check L334() else D115();
  L338():
    file10 = force? file9;
    checkMissing(file10);
    st con = file10;
    goto L53();
  L339():
    p63 = prom<V +>{
      parse = ldf parse;
      p61 = prom<V +>{
        con = ld con;
        con1 = force? con;
        checkMissing(con1);
        return con1;
      };
      p62 = prom<V +>{
        return -1;
      };
      r205 = dyn parse[file, n](p61, p62);
      return r205;
    };
    p64 = prom<V +>{
      r207 = clos inner3708401697;
      return r207;
    };
    r209 = dyn tryCatch1[, error](p63, p64);
    check L340() else D118();
  L350():
    goto L57(r218);
  L352():
    ns2 = ld ns;
    check L354() else D124();
  L353():
    r219 = dyn base21(<lang `$`(ns, imports)>, <lang `$`(ns, importClasses)>, <lang `$`(ns, importMethods)>);
    goto L59(r219);
  L381():
    r239 = dyn character2();
    check L382() else D135();
  L383():
    p69 = prom<V +>{
      imports2 = ld imports0;
      imports3 = force? imports2;
      checkMissing(imports3);
      return imports3;
    };
    p70 = prom<V +>{
      all_imports2 = ld all_imports;
      all_imports3 = force? all_imports2;
      checkMissing(all_imports3);
      return all_imports3;
    };
    r242 = dyn setdiff1(p69, p70);
    check L384() else D137();
  D32():
    deopt 102 [];
  D101():
    deopt 358 [];
  D115():
    deopt 408 [r198];
  D118():
    deopt 421 [r209];
  D124():
    deopt 442 [ns2];
  D135():
    deopt 475 [r239];
  D137():
    deopt 481 [r242];
  L60(r226):
    c49 = `as.logical`(r226);
    if c49 then L374() else L61();
  L190():
    p19 = prom<V +>{
      basename1 = ldf basename;
      p18 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r50 = dyn basename1(p18);
      return r50;
    };
    p21 = prom<V +>{
      dirname1 = ldf dirname;
      p20 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r53 = dyn dirname1(p20);
      return r53;
    };
    r55 = dyn parseNamespaceFile(p19, p21);
    check L191() else D33();
  L307():
    p52 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r174 = dyn _get_S4_generics(p52);
    check L308() else D102();
  L334():
    st con = r198;
    sym18 = ldf `on.exit`;
    base18 = ldf `on.exit` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L335() else L336();
  L340():
    st exprs = r209;
    goto L47();
  L354():
    ns3 = force? ns2;
    checkMissing(ns3);
    c45 = `is.object`(ns3);
    if c45 then L356() else L357(ns3);
  L370():
    imp = ld imp;
    check L372() else D128();
  L371():
    r225 = dyn base22(<sym imp>);
    goto L60(r225);
  L382():
    st imp = r239;
    goto L63();
  L384():
    st bad_imp = r242;
    setdiff2 = ldf setdiff;
    check L385() else D138();
  D33():
    deopt 105 [r55];
  D102():
    deopt 360 [r174];
  D128():
    deopt 456 [imp];
  D138():
    deopt 484 [];
  L52(r200):
    goto L53();
  L61():
    goto L62(NULL);
  L62(r237):
    goto L63();
  L191():
    st ns = r55;
    goto L11(r55);
  L308():
    s = toForSeq(r174);
    l = length(s);
    i = 0;
    goto L43(i);
  L335():
    on_exit1 = ldf `on.exit` in base;
    r201 = dyn on_exit1(<lang close(con)>);
    goto L52(r201);
  L336():
    r199 = dyn base18(<lang close(con)>);
    goto L52(r199);
  L355(dx9):
    ns6 = ld ns;
    check L359() else D125();
  L356():
    dr8 = tryDispatchBuiltin.1("$", ns3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L358() else L357(dr8);
  L357(ns5):
    r221 = `$`(ns5, <sym imports>);
    goto L355(r221);
  L372():
    imp1 = force? imp;
    checkMissing(imp1);
    length3 = ldf length in base;
    r227 = dyn length3(imp1);
    check L373() else D129();
  L374():
    sapply = ldf sapply;
    check L375() else D130();
  L385():
    p71 = prom<V +>{
      depends4 = ld depends;
      depends5 = force? depends4;
      checkMissing(depends5);
      return depends5;
    };
    p72 = prom<V +>{
      sym24 = ldf c;
      base24 = ldf c in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r245):
      return r245;
    L1():
      imp6 = ld imp;
      imp7 = force? imp6;
      checkMissing(imp7);
      default_package_names2 = ld default_package_names;
      default_package_names3 = force? default_package_names2;
      checkMissing(default_package_names3);
      c51 = ldf c in base;
      r246 = dyn c51(imp7, default_package_names3);
      goto L0(r246);
    L2():
      r244 = dyn base24(<sym imp>, <sym default_package_names>);
      goto L0(r244);
    };
    r248 = dyn setdiff2(p71, p72);
    check L386() else D139();
  D125():
    deopt 445 [ns6];
  D129():
    deopt 459 [r227];
  D130():
    deopt 461 [];
  D139():
    deopt 487 [r248];
  L43(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l, i2);
    if c31 then L309() else L45();
  L358():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L355(dx8);
  L359():
    ns7 = force? ns6;
    checkMissing(ns7);
    c46 = `is.object`(ns7);
    if c46 then L361() else L362(ns7);
  L373():
    goto L60(r227);
  L375():
    p66 = prom<V +>{
      imp2 = ld imp;
      imp3 = force? imp2;
      checkMissing(imp3);
      return imp3;
    };
    p67 = prom<V +>{
      r229 = clos inner2501545716;
      return r229;
    };
    r231 = dyn sapply(p66, p67);
    check L376() else D131();
  L386():
    st depends_not_import = r248;
    uses_methods = ld uses_methods;
    check L387() else D140();
  D131():
    deopt 464 [r231];
  D140():
    deopt 489 [uses_methods];
  L45():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    _get_S4_methods_list = ldf `.get_S4_methods_list`;
    check L310() else D103();
  L309():
    goto L46(i2);
  L360(dx11):
    ns10 = ld ns;
    check L364() else D126();
  L361():
    dr10 = tryDispatchBuiltin.1("$", ns7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L363() else L362(dr10);
  L362(ns9):
    r222 = `$`(ns9, <sym importClasses>);
    goto L360(r222);
  L376():
    st imp = r231;
    unique = ldf unique;
    check L377() else D132();
  L387():
    uses_methods1 = force? uses_methods;
    checkMissing(uses_methods1);
    c52 = `as.logical`(uses_methods1);
    if c52 then L388() else L64(c52);
  D103():
    deopt 362 [i2];
  D126():
    deopt 448 [ns10];
  D132():
    deopt 467 [];
  L64(c54):
    c59 = `as.logical`(c54);
    if c59 then L392() else L65();
  L310():
    p53 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p54 = prom<V +>{
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      return code_env7;
    };
    r177 = dyn _get_S4_methods_list(p53, p54);
    check L311() else D104();
  L363():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L360(dx10);
  L364():
    ns11 = force? ns10;
    checkMissing(ns11);
    c47 = `is.object`(ns11);
    if c47 then L366() else L367(ns11);
  L377():
    p68 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r233):
      return r233;
    L1():
      imp4 = ld imp;
      imp5 = force? imp4;
      checkMissing(imp5);
      all_imports = ld all_imports;
      all_imports1 = force? all_imports;
      checkMissing(all_imports1);
      c50 = ldf c in base;
      r234 = dyn c50(imp5, all_imports1);
      goto L0(r234);
    L2():
      r232 = dyn base23(<sym imp>, <sym all_imports>);
      goto L0(r232);
    };
    r236 = dyn unique(p68);
    check L378() else D133();
  L388():
    _notin_1 = ldf `%notin%`;
    check L389() else D141();
  D104():
    deopt 365 [i2, r177];
  D133():
    deopt 469 [r236];
  D141():
    deopt 492 [c52];
  L65():
    goto L66("");
  L66(r255):
    st methods_message = r255;
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L396() else L397();
  L311():
    st mlist = r177;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L312() else L313();
  L365(dx13):
    c48 = ldf c in base;
    r224 = dyn c48(dx9, dx11, dx13);
    check L369() else D127();
  L366():
    dr12 = tryDispatchBuiltin.1("$", ns11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L368() else L367(dr12);
  L367(ns13):
    r223 = `$`(ns13, <sym importMethods>);
    goto L365(r223);
  L378():
    st all_imports = r236;
    goto L62(r236);
  L389():
    p73 = prom<V +>{
      sym25 = ldf c;
      base25 = ldf c in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r250):
      return r250;
    L1():
      depends6 = ld depends;
      depends7 = force? depends6;
      checkMissing(depends7);
      imports4 = ld imports;
      imports5 = force? imports4;
      checkMissing(imports5);
      c55 = ldf c in base;
      r251 = dyn c55(depends7, imports5);
      goto L0(r251);
    L2():
      r249 = dyn base25(<sym depends>, <sym imports>);
      goto L0(r249);
    };
    r253 = dyn _notin_1("methods", p73);
    check L390() else D142();
  L392():
    gettext = ldf gettext;
    check L393() else D143();
  D127():
    deopt 452 [r224];
  D142():
    deopt 495 [c52, r253];
  D143():
    deopt 498 [];
  L44(i7, r179):
    st exprs = r179;
    goto L43(i7);
  L67(r257):
    st extras = r257;
    character3 = ldf character;
    check L414() else D151();
  L312():
    exprs = ld exprs;
    check L314() else D105();
  L313():
    r178 = dyn base15(<sym exprs>, <lang lapply(mlist, body)>);
    goto L44(i2, r178);
  L368():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L365(dx12);
  L369():
    goto L59(r224);
  L390():
    c56 = `as.logical`(r253);
    c57 = `&&`(c52, c56);
    goto L64(c57);
  L393():
    r254 = dyn gettext("package 'methods' is used but not declared");
    check L394() else D144();
  L396():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L398() else L399();
  L397():
    r256 = dyn base26[base, grDevices, parallel, utils, RODBC](<lang c("Sys.junction", "shell", "shell.exec")>, <lang c("X11.options", "X11Font", "X11Fonts", "quartz", "quartz.options", "quartz.save", "quartzFont", "quartzFonts", "bringToTop", "msgWindow", "win.graph", "win.metafile", "win.print", "windows", "windows.options", "windowsFont", "windowsFonts")>, <lang c("mccollect", "mcparallel", "mc.reset.stream", "mcaffinity")>, <lang c("nsl", "DLL.version", "Filters", "choose.dir", "choose.files", "getClipboardFormats", "getIdentification", "getWindowsHandle", "getWindowsHandles", "getWindowTitle", "loadRconsole", "readClipboard", "readRegistry", "setStatusBar", "setWindowTitle", "shortPathName", "win.version", "winDialog", "winDialogString", "winMenuAdd", "winMenuAddItem", "winMenuDel", "winMenuDelItem", "winMenuNames", "winMenuItems", "writeClipboard", "zip.unpack", "winProgressBar", "getWinProgressBar", "setWinProgressBar", "setInternet2", "arrangeWindows")>, <lang c("odbcConnectAccess", "odbcConnectAccess2007", "odbcConnectDbase", "odbcConnectExcel", "odbcConnectExcel2007")>);
    goto L67(r256);
  D105():
    deopt 369 [i2, exprs];
  D144():
    deopt 500 [r254];
  D151():
    deopt 596 [];
  L68(r259):
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L401() else L402();
  L314():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    lapply1 = ldf lapply;
    check L315() else D106();
  L394():
    goto L66(r254);
  L398():
    c60 = ldf c in base;
    r260 = dyn c60("Sys.junction", "shell", "shell.exec");
    check L400() else D145();
  L399():
    r258 = dyn base27("Sys.junction", "shell", "shell.exec");
    goto L68(r258);
  L414():
    r274 = dyn character3();
    check L415() else D152();
  D106():
    deopt 372 [i2];
  D145():
    deopt 512 [r260];
  D152():
    deopt 597 [r274];
  L69(r262):
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L404() else L405();
  L315():
    p55 = prom<V +>{
      mlist = ld mlist;
      mlist1 = force? mlist;
      checkMissing(mlist1);
      return mlist1;
    };
    p56 = prom<V +>{
      body = ld body;
      body1 = force? body;
      checkMissing(body1);
      return body1;
    };
    r182 = dyn lapply1(p55, p56);
    check L316() else D107();
  L400():
    goto L68(r260);
  L401():
    c61 = ldf c in base;
    r263 = dyn c61("X11.options", "X11Font", "X11Fonts", "quartz", "quartz.options", "quartz.save", "quartzFont", "quartzFonts", "bringToTop", "msgWindow", "win.graph", "win.metafile", "win.print", "windows", "windows.options", "windowsFont", "windowsFonts");
    check L403() else D146();
  L402():
    r261 = dyn base28("X11.options", "X11Font", "X11Fonts", "quartz", "quartz.options", "quartz.save", "quartzFont", "quartzFonts", "bringToTop", "msgWindow", "win.graph", "win.metafile", "win.print", "windows", "windows.options", "windowsFont", "windowsFonts");
    goto L69(r261);
  L415():
    st imp2un = r274;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L416() else L417();
  D107():
    deopt 375 [i2, r182];
  D146():
    deopt 534 [r263];
  L70(r265):
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L407() else L408();
  L73(r276):
    c65 = `as.logical`(r276);
    if c65 then L420() else L74();
  L316():
    c32 = ldf c in base;
    r183 = dyn c32(exprs1, r182);
    check L317() else D108();
  L403():
    goto L69(r263);
  L404():
    c62 = ldf c in base;
    r266 = dyn c62("mccollect", "mcparallel", "mc.reset.stream", "mcaffinity");
    check L406() else D147();
  L405():
    r264 = dyn base29("mccollect", "mcparallel", "mc.reset.stream", "mcaffinity");
    goto L70(r264);
  L416():
    imp8 = ld imp2;
    check L418() else D153();
  L417():
    r275 = dyn base32(<sym imp2>);
    goto L73(r275);
  D108():
    deopt 377 [i2, r183];
  D147():
    deopt 543 [r266];
  D153():
    deopt 601 [imp8];
  L71(r268):
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L410() else L411();
  L74():
    goto L97();
  L97():
    imp14 = ld imp3;
    check L505() else D204();
  L317():
    goto L44(i2, r183);
  L406():
    goto L70(r266);
  L407():
    c63 = ldf c in base;
    r269 = dyn c63("nsl", "DLL.version", "Filters", "choose.dir", "choose.files", "getClipboardFormats", "getIdentification", "getWindowsHandle", "getWindowsHandles", "getWindowTitle", "loadRconsole", "readClipboard", "readRegistry", "setStatusBar", "setWindowTitle", "shortPathName", "win.version", "winDialog", "winDialogString", "winMenuAdd", "winMenuAddItem", "winMenuDel", "winMenuDelItem", "winMenuNames", "winMenuItems", "writeClipboard", "zip.unpack", "winProgressBar", "getWinProgressBar", "setWinProgressBar", "setInternet2", "arrangeWindows");
    check L409() else D148();
  L408():
    r267 = dyn base30("nsl", "DLL.version", "Filters", "choose.dir", "choose.files", "getClipboardFormats", "getIdentification", "getWindowsHandle", "getWindowsHandles", "getWindowTitle", "loadRconsole", "readClipboard", "readRegistry", "setStatusBar", "setWindowTitle", "shortPathName", "win.version", "winDialog", "winDialogString", "winMenuAdd", "winMenuAddItem", "winMenuDel", "winMenuDelItem", "winMenuNames", "winMenuItems", "writeClipboard", "zip.unpack", "winProgressBar", "getWinProgressBar", "setWinProgressBar", "setInternet2", "arrangeWindows");
    goto L71(r267);
  L418():
    imp9 = force? imp8;
    checkMissing(imp9);
    length4 = ldf length in base;
    r277 = dyn length4(imp9);
    check L419() else D154();
  L420():
    imp10 = ld imp2;
    check L421() else D155();
  D148():
    deopt 580 [r269];
  D154():
    deopt 604 [r277];
  D155():
    deopt 605 [imp10];
  D204():
    deopt 777 [imp14];
  L72(r271):
    list = ldf list in base;
    r273 = dyn list(r259, r262, r265, r268, r271);
    check L413() else D150();
  L409():
    goto L71(r269);
  L410():
    c64 = ldf c in base;
    r272 = dyn c64("odbcConnectAccess", "odbcConnectAccess2007", "odbcConnectDbase", "odbcConnectExcel", "odbcConnectExcel2007");
    check L412() else D149();
  L411():
    r270 = dyn base31("odbcConnectAccess", "odbcConnectAccess2007", "odbcConnectDbase", "odbcConnectExcel", "odbcConnectExcel2007");
    goto L72(r270);
  L419():
    goto L73(r277);
  L421():
    imp11 = force? imp10;
    checkMissing(imp11);
    l2 = ld imp2f;
    names__ = ldf `names<-`;
    check L422() else D156();
  L505():
    imp15 = force? imp14;
    checkMissing(imp15);
    l4 = ld imp3f;
    names__1 = ldf `names<-`;
    check L506() else D205();
  D149():
    deopt 590 [r272];
  D150():
    deopt 593 [r273];
  D156():
    deopt 608 [imp11, l2, imp11];
  D205():
    deopt 780 [imp15, l4, imp15];
  L412():
    goto L72(r272);
  L413():
    goto L67(r273);
  L422():
    r278 = dyn names__(l2, NULL, imp11);
    check L423() else D157();
  L506():
    r363 = dyn names__1(l4, NULL, imp15);
    check L507() else D206();
  D157():
    deopt 610 [imp11, r278];
  D206():
    deopt 782 [imp15, r363];
  L423():
    st imp2f = r278;
    unique1 = ldf unique;
    check L424() else D158();
  L507():
    st imp3f = r363;
    pkg_name4 = ld pkg_name;
    check L508() else D207();
  D158():
    deopt 613 [];
  D207():
    deopt 784 [pkg_name4];
  L424():
    p74 = prom<V +>{
      imp12 = ld imp2;
      imp13 = force? imp12;
      checkMissing(imp13);
      return imp13;
    };
    r280 = dyn unique1(p74);
    check L425() else D159();
  L508():
    pkg_name5 = force? pkg_name4;
    checkMissing(pkg_name5);
    r364 = `==`(pkg_name5, "methods");
    c78 = `as.logical`(r364);
    if c78 then L509() else L98();
  D159():
    deopt 615 [r280];
  L98():
    goto L101();
  L101():
    unique2 = ldf unique;
    check L522() else D214();
  L425():
    st imp2 = r280;
    split = ldf split;
    check L426() else D160();
  L509():
    imp3f = ld imp3f;
    check L510() else D208();
  D160():
    deopt 618 [];
  D208():
    deopt 788 [imp3f];
  D214():
    deopt 811 [];
  L426():
    p75 = prom<V +>{
      imp2f = ld imp2f;
      imp2f1 = force? imp2f;
      checkMissing(imp2f1);
      return imp2f1;
    };
    p76 = prom<V +>{
      sym33 = ldf names;
      base33 = ldf names in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r283):
      return r283;
    L1():
      imp2f2 = ld imp2f;
      imp2f3 = force? imp2f2;
      checkMissing(imp2f3);
      names = ldf names in base;
      r284 = dyn names(imp2f3);
      goto L0(r284);
    L2():
      r282 = dyn base33(<sym imp2f>);
      goto L0(r282);
    };
    r286 = dyn split(p75, p76);
    check L427() else D161();
  L510():
    imp3f1 = force? imp3f;
    checkMissing(imp3f1);
    c79 = `is.object`(imp3f1);
    if c79 then L511() else L512(imp3f1);
  L522():
    p118 = prom<V +>{
      imp18 = ld imp3;
      imp19 = force? imp18;
      checkMissing(imp19);
      return imp19;
    };
    r379 = dyn unique2(p118);
    check L523() else D215();
  D161():
    deopt 621 [r286];
  D215():
    deopt 813 [r379];
  L99(dx19):
    st imp3f = dx19;
    sym44 = ldf names;
    base44 = ldf names in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L517() else L518();
  L427():
    st imps = r286;
    sym34 = ldf names;
    base34 = ldf names in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L428() else L429();
  L511():
    dr18 = tryDispatchBuiltin.1("[", imp3f1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L513() else L512(dr18);
  L512(imp3f3):
    imp16 = ld imp3;
    check L514() else D209();
  L523():
    st imp3 = r379;
    _in_1 = ldf `%in%`;
    check L524() else D216();
  D209():
    deopt 790 [imp3f3, imp16];
  D216():
    deopt 816 [];
  L75(r288):
    s2 = toForSeq(r288);
    l3 = length(s2);
    i17 = 0;
    goto L76(i17);
  L100(r375):
    st imp3 = r375;
    goto L101();
  L428():
    imps = ld imps;
    check L430() else D162();
  L429():
    r287 = dyn base34(<sym imps>);
    goto L75(r287);
  L513():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L99(dx18);
  L514():
    imp17 = force? imp16;
    checkMissing(imp17);
    r365 = `!=`(imp17, "methods");
    _notin_2 = ldf `%notin%`;
    check L515() else D210();
  L517():
    imp3f6 = ld imp3f;
    check L519() else D212();
  L518():
    r374 = dyn base44(<sym imp3f>);
    goto L100(r374);
  L524():
    p119 = prom<V +>{
      pkg_name6 = ld pkg_name;
      pkg_name7 = force? pkg_name6;
      checkMissing(pkg_name7);
      return pkg_name7;
    };
    p120 = prom<V +>{
      imp20 = ld imp3;
      imp21 = force? imp20;
      checkMissing(imp21);
      return imp21;
    };
    r382 = dyn _in_1(p119, p120);
    check L525() else D217();
  D162():
    deopt 625 [imps];
  D210():
    deopt 794 [imp3f3, r365];
  D212():
    deopt 803 [imp3f6];
  D217():
    deopt 819 [r382];
  L76(i18):
    i19 = `+`.1(i18, 1);
    c66 = `<`.1(l3, i19);
    if c66 then L432() else L96();
  L430():
    imps1 = force? imps;
    checkMissing(imps1);
    names1 = ldf names in base;
    r289 = dyn names1(imps1);
    check L431() else D163();
  L515():
    p116 = prom<V +>{
      imp3f4 = ld imp3f;
      imp3f5 = force? imp3f4;
      checkMissing(imp3f5);
      return imp3f5;
    };
    p117 = prom<V +>{
      sym43 = ldf c;
      base43 = ldf c in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L1() else L2();
    L0(r368):
      return r368;
    L1():
      c80 = ldf c in base;
      r369 = dyn c80(".class1", ".missingMethod", ".selectDotsMethod", ".setDummyField", ".InhSlotNames");
      goto L0(r369);
    L2():
      r367 = dyn base43(".class1", ".missingMethod", ".selectDotsMethod", ".setDummyField", ".InhSlotNames");
      goto L0(r367);
    };
    r371 = dyn _notin_2(p116, p117);
    check L516() else D211();
  L519():
    imp3f7 = force? imp3f6;
    checkMissing(imp3f7);
    names2 = ldf names in base;
    r376 = dyn names2(imp3f7);
    check L520() else D213();
  L525():
    st imp3self = r382;
    as_vector = ldf `as.vector`;
    check L526() else D218();
  D163():
    deopt 628 [r289];
  D211():
    deopt 797 [imp3f3, r365, r371];
  D213():
    deopt 806 [r376];
  D218():
    deopt 822 [];
  L96():
    x2 = `[[`(s2, i19, NULL, TRUE);
    st p = x2;
    imps2 = ld imps;
    check L433() else D164();
  L431():
    goto L75(r289);
  L432():
    goto L97();
  L516():
    r372 = `||`(r365, r371);
    __5 = ldf `[` in base;
    r373 = dyn __5(imp3f3, r372);
    goto L99(r373);
  L520():
    goto L100(r376);
  L526():
    p121 = prom<V +>{
      imp3f8 = ld imp3f;
      imp3f9 = force? imp3f8;
      checkMissing(imp3f9);
      c81 = `is.object`(imp3f9);
      if c81 then L2() else L3(imp3f9);
    L0(dx21):
      return dx21;
    L2():
      dr20 = tryDispatchBuiltin.1("[", imp3f9);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(imp3f11):
      sym45 = ldf names;
      base45 = ldf names in base;
      guard45 = `==`.4(sym45, base45);
      if guard45 then L5() else L6();
    L1(imp3f14, r384):
      pkg_name8 = ld pkg_name;
      pkg_name9 = force? pkg_name8;
      checkMissing(pkg_name9);
      r386 = `==`(r384, pkg_name9);
      __6 = ldf `[` in base;
      r387 = dyn __6(imp3f14, r386);
      goto L0(r387);
    L4():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    L5():
      imp3f15 = ld imp3f;
      imp3f16 = force? imp3f15;
      checkMissing(imp3f16);
      names3 = ldf names in base;
      r385 = dyn names3(imp3f16);
      goto L1(imp3f11, r385);
    L6():
      r383 = dyn base45(<sym imp3f>);
      goto L1(imp3f11, r383);
    };
    r389 = dyn as_vector(p121);
    check L527() else D219();
  D164():
    deopt 629 [i19, imps2];
  D219():
    deopt 824 [r389];
  L433():
    imps3 = force? imps2;
    checkMissing(imps3);
    c67 = `is.object`(imps3);
    if c67 then L434() else L435(i19, imps3);
  L527():
    st imp3selfcalls = r389;
    setdiff5 = ldf setdiff;
    check L528() else D220();
  D220():
    deopt 827 [];
  L77(i25, dx15):
    st this = dx15;
    sub = ldf sub;
    check L438() else D166();
  L434():
    dr14 = tryDispatchBuiltin.1("[[", imps3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L436() else L435(i19, dr14);
  L435(i23, imps5):
    p77 = ld p;
    check L437() else D165();
  L528():
    p122 = prom<V +>{
      imp22 = ld imp3;
      imp23 = force? imp22;
      checkMissing(imp23);
      return imp23;
    };
    p123 = prom<V +>{
      pkg_name10 = ld pkg_name;
      pkg_name11 = force? pkg_name10;
      checkMissing(pkg_name11);
      return pkg_name11;
    };
    r392 = dyn setdiff5(p122, p123);
    check L529() else D221();
  D165():
    deopt 631 [i23, imps5, p77];
  D166():
    deopt 636 [i25];
  D221():
    deopt 830 [r392];
  L436():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L77(i19, dx14);
  L437():
    p78 = force? p77;
    __3 = ldf `[[` in base;
    r290 = dyn __3(imps5, p78);
    goto L77(i23, r290);
  L438():
    p79 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    r292 = dyn sub("^\"(.*)\"$", "\\1", p79);
    check L439() else D167();
  L529():
    st imp3 = r392;
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L530() else L531();
  D167():
    deopt 640 [i25, r292];
  L102(r394):
    c82 = `as.logical`(r394);
    if c82 then L534() else L103();
  L439():
    st this = r292;
    sub1 = ldf sub;
    check L440() else D168();
  L530():
    imp24 = ld imp3;
    check L532() else D222();
  L531():
    r393 = dyn base46(<sym imp3>);
    goto L102(r393);
  D168():
    deopt 643 [i25];
  D222():
    deopt 834 [imp24];
  L103():
    character5 = ldf character;
    check L676() else D298();
  L142():
    setdiff6 = ldf setdiff;
    check L678() else D300();
  L440():
    p80 = prom<V +>{
      this2 = ld this;
      this3 = force? this2;
      checkMissing(this3);
      return this3;
    };
    r294 = dyn sub1("^'(.*)'$", "\\1", p80);
    check L441() else D169();
  L532():
    imp25 = force? imp24;
    checkMissing(imp25);
    length7 = ldf length in base;
    r395 = dyn length7(imp25);
    check L533() else D223();
  L534():
    imp3f17 = ld imp3f;
    check L535() else D224();
  D169():
    deopt 647 [i25, r294];
  D223():
    deopt 837 [r395];
  D224():
    deopt 838 [imp3f17];
  D298():
    deopt 1103 [];
  D300():
    deopt 1110 [];
  L441():
    st this = r294;
    _in_ = ldf `%in%`;
    check L442() else D170();
  L533():
    goto L102(r395);
  L535():
    imp3f18 = force? imp3f17;
    checkMissing(imp3f18);
    c83 = `is.object`(imp3f18);
    if c83 then L536() else L537(imp3f18);
  L676():
    r523 = dyn character5();
    check L677() else D299();
  L678():
    p184 = prom<V +>{
      sort = ldf sort;
      p183 = prom<V +>{
        unique3 = ldf unique;
        p182 = prom<V +>{
          imp3ff2 = ld imp3ff;
          imp3ff3 = force? imp3ff2;
          checkMissing(imp3ff3);
          return imp3ff3;
        };
        r525 = dyn unique3(p182);
        return r525;
      };
      r527 = dyn sort(p183);
      return r527;
    };
    r529 = dyn setdiff6(p184, "utils:::unpackPkgZip");
    check L679() else D301();
  D170():
    deopt 650 [i25];
  D299():
    deopt 1104 [r523];
  D301():
    deopt 1113 [r529];
  L104(dx23):
    st imp3f = dx23;
    split1 = ldf split;
    check L541() else D227();
  L442():
    p83 = prom<V +>{
      p81 = ld p;
      p82 = force? p81;
      checkMissing(p82);
      return p82;
    };
    r296 = dyn _in_(p83, "base");
    check L443() else D171();
  L536():
    dr22 = tryDispatchBuiltin.1("[", imp3f18);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L538() else L537(dr22);
  L537(imp3f20):
    _in_2 = ldf `%in%`;
    check L539() else D225();
  L677():
    st unknown = r523;
    st imp3ff = r523;
    st imp3f = r523;
    st imp32 = r523;
    goto L142();
  L679():
    st imp3ff = r529;
    sym64 = ldf list;
    base64 = ldf list in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L680() else L681();
  D171():
    deopt 653 [i25, r296];
  D225():
    deopt 841 [imp3f20];
  D227():
    deopt 848 [];
  L143(r531):
    st res = r531;
    l6 = ld res;
    class__ = ldf `class<-`;
    check L708() else D328();
  L443():
    c68 = `as.logical`(r296);
    if c68 then L444() else L78();
  L538():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L104(dx22);
  L539():
    p124 = prom<V +>{
      sym47 = ldf names;
      base47 = ldf names in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L1() else L2();
    L0(r397):
      return r397;
    L1():
      imp3f21 = ld imp3f;
      imp3f22 = force? imp3f21;
      checkMissing(imp3f22);
      names4 = ldf names in base;
      r398 = dyn names4(imp3f22);
      goto L0(r398);
    L2():
      r396 = dyn base47(<sym imp3f>);
      goto L0(r396);
    };
    p125 = prom<V +>{
      imp26 = ld imp3;
      imp27 = force? imp26;
      checkMissing(imp27);
      return imp27;
    };
    r401 = dyn _in_2(p124, p125);
    check L540() else D226();
  L541():
    p126 = prom<V +>{
      imp3f23 = ld imp3f;
      imp3f24 = force? imp3f23;
      checkMissing(imp3f24);
      return imp3f24;
    };
    p127 = prom<V +>{
      sym48 = ldf names;
      base48 = ldf names in base;
      guard48 = `==`.4(sym48, base48);
      if guard48 then L1() else L2();
    L0(r405):
      return r405;
    L1():
      imp3f25 = ld imp3f;
      imp3f26 = force? imp3f25;
      checkMissing(imp3f26);
      names5 = ldf names in base;
      r406 = dyn names5(imp3f26);
      goto L0(r406);
    L2():
      r404 = dyn base48(<sym imp3f>);
      goto L0(r404);
    };
    r408 = dyn split1(p126, p127);
    check L542() else D228();
  L680():
    unique4 = ldf unique;
    check L682() else D302();
  L681():
    r530 = dyn base64[others, bad_practice, imports, imps, in_depends, unused_imports, depends_not_import, imp2un, imp32, imp3, imp3f, imp3ff, imp3self, imp3selfcalls, imp3unknown, methods_message](<lang unique(bad_exprs)>, <lang unique(bad_prac)>, <lang unique(bad_imports)>, <lang unique(bad_imps)>, <lang unique(bad_deps)>, <sym bad_imp>, <sym depends_not_import>, <lang sort(unique(imp2un))>, <lang sort(unique(imp32))>, <sym imp3>, <lang sort(unique(imp3f))>, <sym imp3ff>, <sym imp3self>, <lang sort(unique(imp3selfcalls))>, <sym unknown>, <sym methods_message>);
    goto L143(r530);
  D226():
    deopt 844 [imp3f20, r401];
  D228():
    deopt 851 [r408];
  D302():
    deopt 1118 [];
  D328():
    deopt 1189 ["check_packages_used", l6, "check_packages_used"];
  L78():
    _getNamespace = ldf `.getNamespace`;
    check L461() else D180();
  L444():
    setdiff3 = ldf setdiff;
    check L445() else D172();
  L540():
    __7 = ldf `[` in base;
    r402 = dyn __7(imp3f20, r401);
    goto L104(r402);
  L542():
    st imps = r408;
    character4 = ldf character;
    check L543() else D229();
  L682():
    p185 = prom<V +>{
      bad_exprs = ld bad_exprs;
      bad_exprs1 = force? bad_exprs;
      checkMissing(bad_exprs1);
      return bad_exprs1;
    };
    r533 = dyn unique4(p185);
    check L683() else D303();
  L708():
    r559 = dyn class__(l6, NULL, "check_packages_used");
    check L709() else D329();
  D172():
    deopt 655 [i25];
  D180():
    deopt 687 [i25];
  D229():
    deopt 854 [];
  D303():
    deopt 1120 [r533];
  D329():
    deopt 1191 ["check_packages_used", r559];
  L445():
    p84 = prom<V +>{
      this4 = ld this;
      this5 = force? this4;
      checkMissing(this5);
      return this5;
    };
    p86 = prom<V +>{
      ls1 = ldf ls;
      p85 = prom<V +>{
        sym35 = ldf baseenv;
        base35 = ldf baseenv in base;
        guard35 = `==`.4(sym35, base35);
        if guard35 then L1() else L2();
      L0(r299):
        return r299;
      L1():
        baseenv = ldf baseenv in base;
        r300 = dyn baseenv();
        goto L0(r300);
      L2():
        r298 = dyn base35();
        goto L0(r298);
      };
      r302 = dyn ls1[, `all.names`](p85, TRUE);
      return r302;
    };
    r304 = dyn setdiff3(p84, p86);
    check L446() else D173();
  L461():
    p93 = prom<V +>{
      p91 = ld p;
      p92 = force? p91;
      checkMissing(p92);
      return p92;
    };
    r317 = dyn _getNamespace(p93);
    check L462() else D181();
  L543():
    r409 = dyn character4();
    check L544() else D230();
  L683():
    unique5 = ldf unique;
    check L684() else D304();
  L709():
    st res = r559;
    res = ld res;
    check L710() else D330();
  D173():
    deopt 658 [i25, r304];
  D181():
    deopt 689 [i25, r317];
  D230():
    deopt 855 [r409];
  D304():
    deopt 1123 [];
  D330():
    deopt 1193 [res];
  L446():
    st this = r304;
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L447() else L448();
  L462():
    st ns = r317;
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L463() else L464();
  L544():
    st unknown = r409;
    st imp3ff = r409;
    st imp3f = r409;
    st imp3 = r409;
    st imp32 = r409;
    sym49 = ldf names;
    base49 = ldf names in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L545() else L546();
  L684():
    p186 = prom<V +>{
      bad_prac = ld bad_prac;
      bad_prac1 = force? bad_prac;
      checkMissing(bad_prac1);
      return bad_prac1;
    };
    r535 = dyn unique5(p186);
    check L685() else D305();
  L710():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D305():
    deopt 1125 [r535];
  L79(i30, r306):
    c69 = `as.logical`(r306);
    if c69 then L451() else L80();
  L84(i41, r319):
    c72 = `as.logical`(r319);
    if c72 then L466() else L85();
  L105(r411):
    s3 = toForSeq(r411);
    l5 = length(s3);
    i68 = 0;
    goto L106(i68);
  L447():
    this6 = ld this;
    check L449() else D174();
  L448():
    r305 = dyn base36(<sym this>);
    goto L79(i25, r305);
  L463():
    ns14 = ld ns;
    check L465() else D182();
  L464():
    r318 = dyn base38(<sym ns>);
    goto L84(i25, r318);
  L545():
    imps6 = ld imps;
    check L547() else D231();
  L546():
    r410 = dyn base49(<sym imps>);
    goto L105(r410);
  L685():
    unique6 = ldf unique;
    check L686() else D306();
  D174():
    deopt 662 [i25, this6];
  D182():
    deopt 692 [i25, ns14];
  D231():
    deopt 863 [imps6];
  D306():
    deopt 1128 [];
  L80():
    goto L82(i30);
  L82(i36):
    goto L76(i36);
  L85():
    goto L86(i41, NULL);
  L86(i44, r330):
    st value = r330;
    sym39 = ldf inherits;
    base39 = ldf inherits in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L470() else L471();
  L106(i69):
    i70 = `+`.1(i69, 1);
    c84 = `<`.1(l5, i70);
    if c84 then L549() else L136();
  L449():
    this7 = force? this6;
    checkMissing(this7);
    length5 = ldf length in base;
    r307 = dyn length5(this7);
    check L450() else D175();
  L451():
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L452() else L453();
  L465():
    ns15 = force? ns14;
    checkMissing(ns15);
    c71 = `==`(ns15, NULL);
    goto L84(i25, c71);
  L466():
    tryCatch2 = ldf tryCatch;
    check L467() else D183();
  L547():
    imps7 = force? imps6;
    checkMissing(imps7);
    names6 = ldf names in base;
    r412 = dyn names6(imps7);
    check L548() else D232();
  L686():
    p187 = prom<V +>{
      bad_imports = ld bad_imports;
      bad_imports1 = force? bad_imports;
      checkMissing(bad_imports1);
      return bad_imports1;
    };
    r537 = dyn unique6(p187);
    check L687() else D307();
  D175():
    deopt 665 [i25, r307];
  D183():
    deopt 696 [i41];
  D232():
    deopt 866 [r412];
  D307():
    deopt 1130 [r537];
  L81(i35, r309):
    st imp2un = r309;
    goto L82(i35);
  L87(i47, r332):
    r334 = `!`(r332);
    c73 = `as.logical`(r334);
    if c73 then L474() else L88();
  L136():
    x3 = `[[`(s3, i70, NULL, TRUE);
    st p = x3;
    imps8 = ld imps;
    check L550() else D233();
  L450():
    goto L79(i25, r307);
  L452():
    imp2un = ld imp2un;
    check L454() else D176();
  L453():
    r308 = dyn base37(<sym imp2un>, <lang paste(p, this, sep="::")>);
    goto L81(i30, r308);
  L467():
    p99 = prom<V +>{
      suppressWarnings = ldf suppressWarnings;
      p98 = prom<V +>{
        suppressMessages = ldf suppressMessages;
        p97 = prom<V +>{
          loadNamespace = ldf loadNamespace;
          p96 = prom<V +>{
            p94 = ld p;
            p95 = force? p94;
            checkMissing(p95);
            return p95;
          };
          r321 = dyn loadNamespace(p96);
          return r321;
        };
        r323 = dyn suppressMessages(p97);
        return r323;
      };
      r325 = dyn suppressWarnings(p98);
      return r325;
    };
    p100 = prom<V +>{
      r327 = clos inner3708401697;
      return r327;
    };
    r329 = dyn tryCatch2[, error](p99, p100);
    check L468() else D184();
  L470():
    value = ld value;
    check L472() else D185();
  L471():
    r331 = dyn base39(<sym value>, "error");
    goto L87(i44, r331);
  L548():
    goto L105(r412);
  L549():
    sym63 = ldf length;
    base63 = ldf length in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L658() else L659();
  L687():
    unique7 = ldf unique;
    check L688() else D308();
  D176():
    deopt 668 [i30, imp2un];
  D184():
    deopt 700 [i41, r329];
  D185():
    deopt 706 [i44, value];
  D233():
    deopt 867 [i70, imps8];
  D308():
    deopt 1133 [];
  L88():
    goto L95(i47);
  L95(i66):
    goto L76(i66);
  L137(r512):
    c106 = `as.logical`(r512);
    if c106 then L662() else L138();
  L454():
    imp2un1 = force? imp2un;
    checkMissing(imp2un1);
    paste = ldf paste;
    check L455() else D177();
  L468():
    goto L86(i41, r329);
  L472():
    value1 = force? value;
    checkMissing(value1);
    inherits1 = ldf inherits in base;
    r333 = dyn inherits1(value1, "error", FALSE);
    check L473() else D186();
  L474():
    asNamespace1 = ldf asNamespace;
    check L475() else D187();
  L550():
    imps9 = force? imps8;
    checkMissing(imps9);
    c85 = `is.object`(imps9);
    if c85 then L551() else L552(i70, imps9);
  L658():
    imp3f29 = ld imp3f;
    check L660() else D291();
  L659():
    r511 = dyn base63(<sym imp3f>);
    goto L137(r511);
  L688():
    p188 = prom<V +>{
      bad_imps = ld bad_imps;
      bad_imps1 = force? bad_imps;
      checkMissing(bad_imps1);
      return bad_imps1;
    };
    r539 = dyn unique7(p188);
    check L689() else D309();
  D177():
    deopt 671 [i30];
  D186():
    deopt 711 [i44, r333];
  D187():
    deopt 714 [i47];
  D291():
    deopt 1079 [imp3f29];
  D309():
    deopt 1135 [r539];
  L107(i76, dx25):
    st this = dx25;
    sub2 = ldf sub;
    check L555() else D235();
  L138():
    goto L141(NULL);
  L141(dx40):
    goto L142();
  L455():
    p89 = prom<V +>{
      p87 = ld p;
      p88 = force? p87;
      checkMissing(p88);
      return p88;
    };
    p90 = prom<V +>{
      this8 = ld this;
      this9 = force? this8;
      checkMissing(this9);
      return this9;
    };
    r312 = dyn paste[, , sep](p89, p90, "::");
    check L456() else D178();
  L473():
    goto L87(i44, r333);
  L475():
    p103 = prom<V +>{
      p101 = ld p;
      p102 = force? p101;
      checkMissing(p102);
      return p102;
    };
    r336 = dyn asNamespace1(p103);
    check L476() else D188();
  L551():
    dr24 = tryDispatchBuiltin.1("[[", imps9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L553() else L552(i70, dr24);
  L552(i74, imps11):
    p128 = ld p;
    check L554() else D234();
  L660():
    imp3f30 = force? imp3f29;
    checkMissing(imp3f30);
    length8 = ldf length in base;
    r513 = dyn length8(imp3f30);
    check L661() else D292();
  L662():
    sapply1 = ldf sapply;
    check L663() else D293();
  L689():
    unique8 = ldf unique;
    check L690() else D310();
  D178():
    deopt 676 [i30, r312];
  D188():
    deopt 716 [i47, r336];
  D234():
    deopt 869 [i74, imps11, p128];
  D235():
    deopt 874 [i76];
  D292():
    deopt 1082 [r513];
  D293():
    deopt 1084 [];
  D310():
    deopt 1138 [];
  L456():
    c70 = ldf c in base;
    r313 = dyn c70(imp2un1, r312);
    check L457() else D179();
  L476():
    st ns = r336;
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L477() else L478();
  L553():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L107(i70, dx24);
  L554():
    p129 = force? p128;
    __8 = ldf `[[` in base;
    r413 = dyn __8(imps11, p129);
    goto L107(i74, r413);
  L555():
    p130 = prom<V +>{
      this16 = ld this;
      this17 = force? this16;
      checkMissing(this17);
      return this17;
    };
    r415 = dyn sub2("^\"(.*)\"$", "\\1", p130);
    check L556() else D236();
  L661():
    goto L137(r513);
  L663():
    p180 = prom<V +>{
      strsplit = ldf strsplit;
      p179 = prom<V +>{
        imp3f31 = ld imp3f;
        imp3f32 = force? imp3f31;
        checkMissing(imp3f32);
        return imp3f32;
      };
      r515 = dyn strsplit[, , fixed](p179, ":::", TRUE);
      return r515;
    };
    p181 = prom<V +>{
      r517 = clos inner3913899244;
      return r517;
    };
    r519 = dyn sapply1(p180, p181);
    check L664() else D294();
  L690():
    p189 = prom<V +>{
      bad_deps = ld bad_deps;
      bad_deps1 = force? bad_deps;
      checkMissing(bad_deps1);
      return bad_deps1;
    };
    r541 = dyn unique8(p189);
    check L691() else D311();
  D179():
    deopt 678 [i30, r313];
  D236():
    deopt 878 [i76, r415];
  D294():
    deopt 1087 [r519];
  D311():
    deopt 1140 [r541];
  L89(i52, r338):
    st exps = r338;
    setdiff4 = ldf setdiff;
    check L489() else D196();
  L457():
    goto L81(i30, r313);
  L477():
    ls2 = ldf ls;
    check L479() else D189();
  L478():
    r337 = dyn base40(<lang ls(envir=.getNamespaceInfo(ns, "exports"), all.names=TRUE)>, <lang ls(envir=.getNamespaceInfo(ns, "lazydata"), all.names=TRUE)>, <lang `[[`(extras, p)>);
    goto L89(i47, r337);
  L556():
    st this = r415;
    sub3 = ldf sub;
    check L557() else D237();
  L664():
    st maintainers = r519;
    imp3f33 = ld imp3f;
    check L665() else D295();
  L691():
    bad_imp = ld bad_imp;
    check L692() else D312();
  D189():
    deopt 721 [i47];
  D196():
    deopt 743 [i52];
  D237():
    deopt 881 [i76];
  D295():
    deopt 1089 [imp3f33];
  D312():
    deopt 1142 [bad_imp];
  L479():
    p105 = prom<V +>{
      _getNamespaceInfo = ldf `.getNamespaceInfo`;
      p104 = prom<V +>{
        ns16 = ld ns;
        ns17 = force? ns16;
        checkMissing(ns17);
        return ns17;
      };
      r340 = dyn _getNamespaceInfo(p104, "exports");
      return r340;
    };
    r342 = dyn ls2[envir, `all.names`](p105, TRUE);
    check L480() else D190();
  L489():
    p110 = prom<V +>{
      this10 = ld this;
      this11 = force? this10;
      checkMissing(this11);
      return this11;
    };
    p111 = prom<V +>{
      exps = ld exps;
      exps1 = force? exps;
      checkMissing(exps1);
      return exps1;
    };
    r351 = dyn setdiff4(p110, p111);
    check L490() else D197();
  L557():
    p131 = prom<V +>{
      this18 = ld this;
      this19 = force? this18;
      checkMissing(this19);
      return this19;
    };
    r417 = dyn sub3("^'(.*)'$", "\\1", p131);
    check L558() else D238();
  L665():
    imp3f34 = force? imp3f33;
    checkMissing(imp3f34);
    c107 = `is.object`(imp3f34);
    if c107 then L666() else L667(imp3f34);
  L692():
    bad_imp1 = force? bad_imp;
    checkMissing(bad_imp1);
    depends_not_import = ld depends_not_import;
    check L693() else D313();
  D190():
    deopt 726 [i47, r342];
  D197():
    deopt 746 [i52, r351];
  D238():
    deopt 885 [i76, r417];
  D313():
    deopt 1145 [depends_not_import];
  L139(dx37):
    st imp3f = dx37;
    goto L141(dx37);
  L480():
    ls3 = ldf ls;
    check L481() else D191();
  L490():
    st this2 = r351;
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L491() else L492();
  L558():
    st this = r417;
    _in_3 = ldf `%in%`;
    check L559() else D239();
  L666():
    dr36 = tryDispatchBuiltin.1("[", imp3f34);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L668() else L667(dr36);
  L667(imp3f36):
    maintainers = ld maintainers;
    check L669() else D296();
  L693():
    depends_not_import1 = force? depends_not_import;
    checkMissing(depends_not_import1);
    sort1 = ldf sort;
    check L694() else D314();
  D191():
    deopt 728 [i47];
  D239():
    deopt 888 [i76];
  D296():
    deopt 1091 [imp3f36, maintainers];
  D314():
    deopt 1149 [];
  L91(i59, r353):
    c76 = `as.logical`(r353);
    if c76 then L495() else L92();
  L481():
    p107 = prom<V +>{
      _getNamespaceInfo1 = ldf `.getNamespaceInfo`;
      p106 = prom<V +>{
        ns18 = ld ns;
        ns19 = force? ns18;
        checkMissing(ns19);
        return ns19;
      };
      r344 = dyn _getNamespaceInfo1(p106, "lazydata");
      return r344;
    };
    r346 = dyn ls3[envir, `all.names`](p107, TRUE);
    check L482() else D192();
  L491():
    this12 = ld this2;
    check L493() else D198();
  L492():
    r352 = dyn base41(<sym this2>);
    goto L91(i52, r352);
  L559():
    p134 = prom<V +>{
      p132 = ld p;
      p133 = force? p132;
      checkMissing(p133);
      return p133;
    };
    r419 = dyn _in_3(p134, "base");
    check L560() else D240();
  L668():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L139(dx36);
  L669():
    maintainers1 = force? maintainers;
    checkMissing(maintainers1);
    db16 = ld db;
    check L670() else D297();
  L694():
    p191 = prom<V +>{
      unique9 = ldf unique;
      p190 = prom<V +>{
        imp2un4 = ld imp2un;
        imp2un5 = force? imp2un4;
        checkMissing(imp2un5);
        return imp2un5;
      };
      r543 = dyn unique9(p190);
      return r543;
    };
    r545 = dyn sort1(p191);
    check L695() else D315();
  D192():
    deopt 733 [i47, r346];
  D198():
    deopt 750 [i52, this12];
  D240():
    deopt 891 [i76, r419];
  D297():
    deopt 1092 [imp3f36, maintainers1, db16];
  D315():
    deopt 1151 [r545];
  L92():
    goto L94(i59, NULL);
  L94(i65, r361):
    goto L95(i65);
  L482():
    extras = ld extras;
    check L483() else D193();
  L493():
    this13 = force? this12;
    checkMissing(this13);
    length6 = ldf length in base;
    r354 = dyn length6(this13);
    check L494() else D199();
  L495():
    sym42 = ldf c;
    base42 = ldf c in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L496() else L497();
  L560():
    c86 = `as.logical`(r419);
    if c86 then L561() else L108();
  L670():
    db17 = force? db16;
    checkMissing(db17);
    c108 = `is.object`(db17);
    if c108 then L671() else L672(imp3f36, maintainers1, db17);
  L695():
    sort2 = ldf sort;
    check L696() else D316();
  D193():
    deopt 734 [i47, extras];
  D199():
    deopt 753 [i52, r354];
  D316():
    deopt 1154 [];
  L93(i64, r356):
    st imp2un = r356;
    goto L94(i64, r356);
  L108():
    _getNamespace1 = ldf `.getNamespace`;
    check L570() else D245();
  L140(imp3f40, maintainers5, dx39):
    r521 = `!=`(maintainers5, dx39);
    __15 = ldf `[` in base;
    r522 = dyn __15(imp3f40, r521);
    goto L139(r522);
  L483():
    extras1 = force? extras;
    checkMissing(extras1);
    c74 = `is.object`(extras1);
    if c74 then L484() else L485(i47, extras1);
  L494():
    goto L91(i52, r354);
  L496():
    imp2un2 = ld imp2un;
    check L498() else D200();
  L497():
    r355 = dyn base42(<sym imp2un>, <lang paste(p, this2, sep="::")>);
    goto L93(i59, r355);
  L561():
    sym50 = ldf c;
    base50 = ldf c in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L562() else L563();
  L671():
    dr38 = tryDispatchBuiltin.1("[", db17);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L673() else L672(imp3f36, maintainers1, dr38);
  L672(imp3f38, maintainers3, db19):
    __14 = ldf `[` in base;
    r520 = dyn __14(db19, "Maintainer");
    goto L140(imp3f38, maintainers3, r520);
  L696():
    p193 = prom<V +>{
      unique10 = ldf unique;
      p192 = prom<V +>{
        imp38 = ld imp32;
        imp39 = force? imp38;
        checkMissing(imp39);
        return imp39;
      };
      r547 = dyn unique10(p192);
      return r547;
    };
    r549 = dyn sort2(p193);
    check L697() else D317();
  D200():
    deopt 756 [i59, imp2un2];
  D245():
    deopt 911 [i76];
  D317():
    deopt 1156 [r549];
  L90(i56, dx17):
    c75 = ldf c in base;
    r348 = dyn c75(r342, r346, dx17);
    check L488() else D195();
  L109(i81, r421):
    st imp32 = r421;
    goto L106(i81);
  L484():
    dr16 = tryDispatchBuiltin.1("[[", extras1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L486() else L485(i47, dr16);
  L485(i54, extras3):
    p108 = ld p;
    check L487() else D194();
  L498():
    imp2un3 = force? imp2un2;
    checkMissing(imp2un3);
    paste1 = ldf paste;
    check L499() else D201();
  L562():
    imp32 = ld imp32;
    check L564() else D241();
  L563():
    r420 = dyn base50(<sym imp32>, <lang paste(p, this, sep=":::")>);
    goto L109(i76, r420);
  L570():
    p141 = prom<V +>{
      p139 = ld p;
      p140 = force? p139;
      checkMissing(p140);
      return p140;
    };
    r428 = dyn _getNamespace1(p141);
    check L571() else D246();
  L673():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L140(imp3f36, maintainers1, dx38);
  L697():
    imp40 = ld imp3;
    check L698() else D318();
  D194():
    deopt 736 [i54, extras3, p108];
  D195():
    deopt 740 [i56, r348];
  D201():
    deopt 759 [i59];
  D241():
    deopt 894 [i76, imp32];
  D246():
    deopt 913 [i76, r428];
  D318():
    deopt 1158 [imp40];
  L486():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L90(i47, dx16);
  L487():
    p109 = force? p108;
    __4 = ldf `[[` in base;
    r347 = dyn __4(extras3, p109);
    goto L90(i54, r347);
  L488():
    goto L89(i56, r348);
  L499():
    p114 = prom<V +>{
      p112 = ld p;
      p113 = force? p112;
      checkMissing(p113);
      return p113;
    };
    p115 = prom<V +>{
      this14 = ld this2;
      this15 = force? this14;
      checkMissing(this15);
      return this15;
    };
    r359 = dyn paste1[, , sep](p114, p115, "::");
    check L500() else D202();
  L564():
    imp33 = force? imp32;
    checkMissing(imp33);
    paste2 = ldf paste;
    check L565() else D242();
  L571():
    st ns = r428;
    sym51 = ldf `is.null`;
    base51 = ldf `is.null` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L572() else L573();
  L698():
    imp41 = force? imp40;
    checkMissing(imp41);
    sort3 = ldf sort;
    check L699() else D319();
  D202():
    deopt 764 [i59, r359];
  D242():
    deopt 897 [i76];
  D319():
    deopt 1162 [];
  L111(i86, r430):
    c89 = `as.logical`(r430);
    if c89 then L575() else L112();
  L500():
    c77 = ldf c in base;
    r360 = dyn c77(imp2un3, r359);
    check L501() else D203();
  L565():
    p137 = prom<V +>{
      p135 = ld p;
      p136 = force? p135;
      checkMissing(p136);
      return p136;
    };
    p138 = prom<V +>{
      this20 = ld this;
      this21 = force? this20;
      checkMissing(this21);
      return this21;
    };
    r424 = dyn paste2[, , sep](p137, p138, ":::");
    check L566() else D243();
  L572():
    ns20 = ld ns;
    check L574() else D247();
  L573():
    r429 = dyn base51(<sym ns>);
    goto L111(i76, r429);
  L699():
    p195 = prom<V +>{
      unique11 = ldf unique;
      p194 = prom<V +>{
        imp3f41 = ld imp3f;
        imp3f42 = force? imp3f41;
        checkMissing(imp3f42);
        return imp3f42;
      };
      r551 = dyn unique11(p194);
      return r551;
    };
    r553 = dyn sort3(p195);
    check L700() else D320();
  D203():
    deopt 766 [i59, r360];
  D243():
    deopt 902 [i76, r424];
  D247():
    deopt 916 [i76, ns20];
  D320():
    deopt 1164 [r553];
  L112():
    goto L113(i86, NULL);
  L113(i89, r441):
    st value = r441;
    sym52 = ldf inherits;
    base52 = ldf inherits in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L579() else L580();
  L501():
    goto L93(i59, r360);
  L566():
    c87 = ldf c in base;
    r425 = dyn c87(imp33, r424);
    check L567() else D244();
  L574():
    ns21 = force? ns20;
    checkMissing(ns21);
    c88 = `==`(ns21, NULL);
    goto L111(i76, c88);
  L575():
    tryCatch3 = ldf tryCatch;
    check L576() else D248();
  L700():
    imp3ff4 = ld imp3ff;
    check L701() else D321();
  D244():
    deopt 904 [i76, r425];
  D248():
    deopt 920 [i86];
  D321():
    deopt 1166 [imp3ff4];
  L114(i92, r443):
    c90 = `as.logical`(r443);
    if c90 then L583() else L115();
  L567():
    goto L109(i76, r425);
  L576():
    p147 = prom<V +>{
      suppressWarnings1 = ldf suppressWarnings;
      p146 = prom<V +>{
        suppressMessages1 = ldf suppressMessages;
        p145 = prom<V +>{
          loadNamespace1 = ldf loadNamespace;
          p144 = prom<V +>{
            p142 = ld p;
            p143 = force? p142;
            checkMissing(p143);
            return p143;
          };
          r432 = dyn loadNamespace1(p144);
          return r432;
        };
        r434 = dyn suppressMessages1(p145);
        return r434;
      };
      r436 = dyn suppressWarnings1(p146);
      return r436;
    };
    p148 = prom<V +>{
      r438 = clos inner3708401697;
      return r438;
    };
    r440 = dyn tryCatch3[, error](p147, p148);
    check L577() else D249();
  L579():
    value2 = ld value;
    check L581() else D250();
  L580():
    r442 = dyn base52(<sym value>, "error");
    goto L114(i89, r442);
  L701():
    imp3ff5 = force? imp3ff4;
    checkMissing(imp3ff5);
    imp3self = ld imp3self;
    check L702() else D322();
  D249():
    deopt 924 [i86, r440];
  D250():
    deopt 930 [i89, value2];
  D322():
    deopt 1169 [imp3self];
  L115():
    sym54 = ldf c;
    base54 = ldf c in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L590() else L591();
  L117(i98):
    goto L106(i98);
  L577():
    goto L113(i86, r440);
  L581():
    value3 = force? value2;
    checkMissing(value3);
    inherits2 = ldf inherits in base;
    r444 = dyn inherits2(value3, "error", FALSE);
    check L582() else D251();
  L583():
    sym53 = ldf c;
    base53 = ldf c in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L584() else L585();
  L702():
    imp3self1 = force? imp3self;
    checkMissing(imp3self1);
    sort4 = ldf sort;
    check L703() else D323();
  D251():
    deopt 935 [i89, r444];
  D323():
    deopt 1173 [];
  L116(i97, r446):
    st unknown = r446;
    goto L117(i97);
  L118(i101, r450):
    st exps = r450;
    _in_4 = ldf `%in%`;
    check L600() else D260();
  L582():
    goto L114(i89, r444);
  L584():
    unknown = ld unknown;
    check L586() else D252();
  L585():
    r445 = dyn base53(<sym unknown>, <sym p>);
    goto L116(i92, r445);
  L590():
    ls4 = ldf ls;
    check L592() else D255();
  L591():
    r449 = dyn base54(<lang ls(envir=getNamespaceInfo(p, "exports"), all.names=TRUE)>, <lang `[[`(extras, p)>);
    goto L118(i92, r449);
  L703():
    p197 = prom<V +>{
      unique12 = ldf unique;
      p196 = prom<V +>{
        imp3selfcalls = ld imp3selfcalls;
        imp3selfcalls1 = force? imp3selfcalls;
        checkMissing(imp3selfcalls1);
        return imp3selfcalls1;
      };
      r555 = dyn unique12(p196);
      return r555;
    };
    r557 = dyn sort4(p197);
    check L704() else D324();
  D252():
    deopt 938 [i92, unknown];
  D255():
    deopt 948 [i92];
  D260():
    deopt 963 [i101];
  D324():
    deopt 1175 [r557];
  L586():
    unknown1 = force? unknown;
    checkMissing(unknown1);
    p149 = ld p;
    check L587() else D253();
  L592():
    p154 = prom<V +>{
      getNamespaceInfo = ldf getNamespaceInfo;
      p153 = prom<V +>{
        p151 = ld p;
        p152 = force? p151;
        checkMissing(p152);
        return p152;
      };
      r452 = dyn getNamespaceInfo(p153, "exports");
      return r452;
    };
    r454 = dyn ls4[envir, `all.names`](p154, TRUE);
    check L593() else D256();
  L600():
    p157 = prom<V +>{
      this22 = ld this;
      this23 = force? this22;
      checkMissing(this23);
      return this23;
    };
    p158 = prom<V +>{
      exps2 = ld exps;
      exps3 = force? exps2;
      checkMissing(exps3);
      return exps3;
    };
    r459 = dyn _in_4(p157, p158);
    check L601() else D261();
  L704():
    unknown2 = ld unknown;
    check L705() else D325();
  D253():
    deopt 940 [i92, p149];
  D256():
    deopt 953 [i92, r454];
  D261():
    deopt 966 [i101, r459];
  D325():
    deopt 1177 [unknown2];
  L587():
    p150 = force? p149;
    checkMissing(p150);
    c91 = ldf c in base;
    r447 = dyn c91(unknown1, p150);
    check L588() else D254();
  L593():
    extras4 = ld extras;
    check L594() else D257();
  L601():
    st this2 = r459;
    sym55 = ldf any;
    base55 = ldf any in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L602() else L603();
  L705():
    unknown3 = force? unknown2;
    checkMissing(unknown3);
    methods_message = ld methods_message;
    check L706() else D326();
  D254():
    deopt 943 [i92, r447];
  D257():
    deopt 954 [i92, extras4];
  D326():
    deopt 1180 [methods_message];
  L120(i108, r461):
    c94 = `as.logical`(r461);
    if c94 then L606() else L121();
  L588():
    goto L116(i92, r447);
  L594():
    extras5 = force? extras4;
    checkMissing(extras5);
    c92 = `is.object`(extras5);
    if c92 then L595() else L596(i92, extras5);
  L602():
    this24 = ld this2;
    check L604() else D262();
  L603():
    r460 = dyn base55(<sym this2>);
    goto L120(i101, r460);
  L706():
    methods_message1 = force? methods_message;
    checkMissing(methods_message1);
    list1 = ldf list in base;
    r558 = dyn list1(r533, r535, r537, r539, r541, bad_imp1, depends_not_import1, r545, r549, imp41, r553, imp3ff5, imp3self1, r557, unknown3, methods_message1);
    check L707() else D327();
  D262():
    deopt 970 [i101, this24];
  D327():
    deopt 1184 [r558];
  L119(i105, dx27):
    c93 = ldf c in base;
    r456 = dyn c93(r454, dx27);
    check L599() else D259();
  L121():
    goto L123(i108);
  L123(i114):
    sym57 = ldf any;
    base57 = ldf any in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L614() else L615();
  L595():
    dr26 = tryDispatchBuiltin.1("[[", extras5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L597() else L596(i92, dr26);
  L596(i103, extras7):
    p155 = ld p;
    check L598() else D258();
  L604():
    this25 = force? this24;
    checkMissing(this25);
    any = ldf any in base;
    r462 = dyn any(this25);
    check L605() else D263();
  L606():
    sym56 = ldf c;
    base56 = ldf c in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L607() else L608();
  L707():
    goto L143(r558);
  D258():
    deopt 956 [i103, extras7, p155];
  D259():
    deopt 960 [i105, r456];
  D263():
    deopt 973 [i101, r462];
  L122(i113, r464):
    st imp32 = r464;
    goto L123(i113);
  L124(i117, r472):
    c97 = `as.logical`(r472);
    if c97 then L618() else L125();
  L597():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L119(i92, dx26);
  L598():
    p156 = force? p155;
    __9 = ldf `[[` in base;
    r455 = dyn __9(extras7, p156);
    goto L119(i103, r455);
  L599():
    goto L118(i105, r456);
  L605():
    goto L120(i101, r462);
  L607():
    imp34 = ld imp32;
    check L609() else D264();
  L608():
    r463 = dyn base56(<sym imp32>, <lang paste(p, `[`(this, this2), sep=":::")>);
    goto L122(i108, r463);
  L614():
    this32 = ld this2;
    check L616() else D268();
  L615():
    r471 = dyn base57(<lang `!`(this2)>);
    goto L124(i114, r471);
  D264():
    deopt 976 [i108, imp34];
  D268():
    deopt 992 [i114, this32];
  L125():
    goto L117(i117);
  L609():
    imp35 = force? imp34;
    checkMissing(imp35);
    paste3 = ldf paste;
    check L610() else D265();
  L616():
    this33 = force? this32;
    checkMissing(this33);
    r473 = `!`(this33);
    any1 = ldf any in base;
    r474 = dyn any1(r473);
    check L617() else D269();
  L618():
    sym58 = ldf c;
    base58 = ldf c in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L619() else L620();
  D265():
    deopt 979 [i108];
  D269():
    deopt 996 [i114, r474];
  L126(i122, r476):
    st imp3 = r476;
    this34 = ld this;
    check L624() else D273();
  L610():
    p161 = prom<V +>{
      p159 = ld p;
      p160 = force? p159;
      checkMissing(p160);
      return p160;
    };
    p162 = prom<V +>{
      this26 = ld this;
      this27 = force? this26;
      checkMissing(this27);
      c95 = `is.object`(this27);
      if c95 then L1() else L2(this27);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[", this27);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(this29):
      this30 = ld this2;
      this31 = force? this30;
      __10 = ldf `[` in base;
      r466 = dyn __10(this29, this31);
      goto L0(r466);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r468 = dyn paste3[, , sep](p161, p162, ":::");
    check L611() else D266();
  L617():
    goto L124(i114, r474);
  L619():
    imp36 = ld imp3;
    check L621() else D270();
  L620():
    r475 = dyn base58(<sym imp3>, <sym p>);
    goto L126(i117, r475);
  D266():
    deopt 984 [i108, r468];
  D270():
    deopt 999 [i117, imp36];
  D273():
    deopt 1006 [i122, this34];
  L611():
    c96 = ldf c in base;
    r469 = dyn c96(imp35, r468);
    check L612() else D267();
  L621():
    imp37 = force? imp36;
    checkMissing(imp37);
    p163 = ld p;
    check L622() else D271();
  L624():
    this35 = force? this34;
    checkMissing(this35);
    c99 = `is.object`(this35);
    if c99 then L625() else L626(i122, this35);
  D267():
    deopt 986 [i108, r469];
  D271():
    deopt 1001 [i117, p163];
  L127(i126, dx31):
    st this = dx31;
    ls5 = ldf ls;
    check L629() else D275();
  L612():
    goto L122(i108, r469);
  L622():
    p164 = force? p163;
    checkMissing(p164);
    c98 = ldf c in base;
    r477 = dyn c98(imp37, p164);
    check L623() else D272();
  L625():
    dr30 = tryDispatchBuiltin.1("[", this35);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L627() else L626(i122, dr30);
  L626(i124, this37):
    this38 = ld this2;
    check L628() else D274();
  D272():
    deopt 1004 [i117, r477];
  D274():
    deopt 1008 [i124, this37, this38];
  D275():
    deopt 1014 [i126];
  L623():
    goto L126(i117, r477);
  L627():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L127(i122, dx30);
  L628():
    this39 = force? this38;
    checkMissing(this39);
    r478 = `!`(this39);
    __11 = ldf `[` in base;
    r479 = dyn __11(this37, r478);
    goto L127(i124, r479);
  L629():
    p168 = prom<V +>{
      asNamespace2 = ldf asNamespace;
      p167 = prom<V +>{
        p165 = ld p;
        p166 = force? p165;
        checkMissing(p166);
        return p166;
      };
      r481 = dyn asNamespace2(p167);
      return r481;
    };
    r483 = dyn ls5[envir, `all.names`](p168, TRUE);
    check L630() else D276();
  D276():
    deopt 1019 [i126, r483];
  L630():
    st pp = r483;
    _in_5 = ldf `%in%`;
    check L631() else D277();
  D277():
    deopt 1022 [i126];
  L631():
    p169 = prom<V +>{
      this40 = ld this;
      this41 = force? this40;
      checkMissing(this41);
      return this41;
    };
    p170 = prom<V +>{
      pp = ld pp;
      pp1 = force? pp;
      checkMissing(pp1);
      return pp1;
    };
    r486 = dyn _in_5(p169, p170);
    check L632() else D278();
  D278():
    deopt 1025 [i126, r486];
  L632():
    st this2 = r486;
    sym59 = ldf any;
    base59 = ldf any in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L633() else L634();
  L128(i129, r488):
    c100 = `as.logical`(r488);
    if c100 then L637() else L129();
  L633():
    this42 = ld this2;
    check L635() else D279();
  L634():
    r487 = dyn base59(<sym this2>);
    goto L128(i126, r487);
  D279():
    deopt 1029 [i126, this42];
  L129():
    goto L131(i129);
  L131(i135):
    sym61 = ldf any;
    base61 = ldf any in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L645() else L646();
  L635():
    this43 = force? this42;
    checkMissing(this43);
    any2 = ldf any in base;
    r489 = dyn any2(this43);
    check L636() else D280();
  L637():
    sym60 = ldf c;
    base60 = ldf c in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L638() else L639();
  D280():
    deopt 1032 [i126, r489];
  L130(i134, r491):
    st imp3f = r491;
    goto L131(i134);
  L132(i138, r499):
    c103 = `as.logical`(r499);
    if c103 then L649() else L133();
  L636():
    goto L128(i126, r489);
  L638():
    imp3f27 = ld imp3f;
    check L640() else D281();
  L639():
    r490 = dyn base60(<sym imp3f>, <lang paste(p, `[`(this, this2), sep=":::")>);
    goto L130(i129, r490);
  L645():
    this50 = ld this2;
    check L647() else D285();
  L646():
    r498 = dyn base61(<lang `!`(this2)>);
    goto L132(i135, r498);
  D281():
    deopt 1035 [i129, imp3f27];
  D285():
    deopt 1051 [i135, this50];
  L133():
    goto L135(i138, NULL);
  L135(i144, r510):
    goto L117(i144);
  L640():
    imp3f28 = force? imp3f27;
    checkMissing(imp3f28);
    paste4 = ldf paste;
    check L641() else D282();
  L647():
    this51 = force? this50;
    checkMissing(this51);
    r500 = `!`(this51);
    any3 = ldf any in base;
    r501 = dyn any3(r500);
    check L648() else D286();
  L649():
    sym62 = ldf c;
    base62 = ldf c in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L650() else L651();
  D282():
    deopt 1038 [i129];
  D286():
    deopt 1055 [i135, r501];
  L134(i143, r503):
    st imp3ff = r503;
    goto L135(i143, r503);
  L641():
    p173 = prom<V +>{
      p171 = ld p;
      p172 = force? p171;
      checkMissing(p172);
      return p172;
    };
    p174 = prom<V +>{
      this44 = ld this;
      this45 = force? this44;
      checkMissing(this45);
      c101 = `is.object`(this45);
      if c101 then L1() else L2(this45);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", this45);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(this47):
      this48 = ld this2;
      this49 = force? this48;
      __12 = ldf `[` in base;
      r493 = dyn __12(this47, this49);
      goto L0(r493);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    r495 = dyn paste4[, , sep](p173, p174, ":::");
    check L642() else D283();
  L648():
    goto L132(i135, r501);
  L650():
    imp3ff = ld imp3ff;
    check L652() else D287();
  L651():
    r502 = dyn base62(<sym imp3ff>, <lang paste(p, `[`(this, `!`(this2)), sep=":::")>);
    goto L134(i138, r502);
  D283():
    deopt 1043 [i129, r495];
  D287():
    deopt 1058 [i138, imp3ff];
  L642():
    c102 = ldf c in base;
    r496 = dyn c102(imp3f28, r495);
    check L643() else D284();
  L652():
    imp3ff1 = force? imp3ff;
    checkMissing(imp3ff1);
    paste5 = ldf paste;
    check L653() else D288();
  D284():
    deopt 1045 [i129, r496];
  D288():
    deopt 1061 [i138];
  L643():
    goto L130(i129, r496);
  L653():
    p177 = prom<V +>{
      p175 = ld p;
      p176 = force? p175;
      checkMissing(p176);
      return p176;
    };
    p178 = prom<V +>{
      this52 = ld this;
      this53 = force? this52;
      checkMissing(this53);
      c104 = `is.object`(this53);
      if c104 then L1() else L2(this53);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("[", this53);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(this55):
      this56 = ld this2;
      this57 = force? this56;
      checkMissing(this57);
      r505 = `!`(this57);
      __13 = ldf `[` in base;
      r506 = dyn __13(this55, r505);
      goto L0(r506);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    r508 = dyn paste5[, , sep](p177, p178, ":::");
    check L654() else D289();
  D289():
    deopt 1066 [i138, r508];
  L654():
    c105 = ldf c in base;
    r509 = dyn c105(imp3ff1, r508);
    check L655() else D290();
  D290():
    deopt 1068 [i138, r509];
  L655():
    goto L134(i138, r509);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg is_expression:cls, reg r5:V, reg c6:L, reg c7:V, reg c9:L, reg deparse:cls, reg e5:*, reg e6:V, reg c10:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg c11:L, reg r10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg _in_:cls, reg Call:*, reg Call1:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c12:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg c13:L, reg _in_1:cls, reg Call2:*, reg Call3:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c14:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg c15:L, reg c17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg c20:L, reg r27:V, reg e9:*, reg e10:V, reg length:cls, reg r28:V, reg r29:V, reg c21:L, reg c22:V, reg c24:L, reg vapply:cls, reg e11:*, reg e12:V, reg p5:p(V +), reg r31:cls, reg p6:p(V +), reg r33:V, reg match_call:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg baseenv:cls, reg r36:V, reg c25:L, reg r38:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg Call4:*, reg Call5:V, reg __2:cls, reg r39:V, reg p7:p(V +), reg e13:*, reg e14:V, reg c26:L, reg e16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg keep:*, reg keep1:V, reg __3:cls, reg r41:V, reg p8:p(V +), reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg mc:*, reg mc1:V, reg c27:L, reg mc3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r46:V, reg c28:V, reg r47:V, reg c29:L, reg _in_2:cls, reg Call6:*, reg Call7:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg c30:cls, reg r51:V, reg p10:p(V +), reg r53:V, reg c31:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg pkg:*, reg pkg1:V, reg class:cls, reg r58:V, reg identical:cls, reg r59:V, reg r60:V, reg c32:L, reg r61:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg r66:V, reg pkg2:*, reg pkg3:V, reg class1:cls, reg r67:V, reg identical1:cls, reg r68:V, reg r69:V, reg c33:L, reg c35:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg c38:L, reg r71:V, reg mc4:*, reg mc5:V, reg c39:L, reg c41:L, reg mc7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c43:L, reg dx11:V, reg r72:V, reg c44:V, reg r73:V, reg c45:L, reg c46:V, reg c48:L, reg c50:V, reg isFALSE:cls, reg co:*, reg co1:V, reg p11:p(V +), reg r75:V, reg r76:V, reg c51:L, reg c52:V, reg c54:L, reg dunno:*, reg dunno1:V, reg r77:V, reg c55:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r78:V, reg r79:V, reg pkg4:*, reg pkg5:V, reg as_character:cls, reg r80:V, reg _in_3:cls, reg Call8:*, reg Call9:V, reg p12:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg r83:V, reg c56:cls, reg r84:V, reg p13:p(V +), reg r86:V, reg c57:L, reg _notin_:cls, reg pkg6:*, reg pkg7:V, reg p14:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg r89:V, reg imports:*, reg imports1:V, reg depends_suggests:*, reg depends_suggests1:V, reg common_names:*, reg common_names1:V, reg c58:cls, reg r90:V, reg p15:p(V +), reg r92:V, reg c59:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg bad_imps:*, reg bad_imps1:V, reg pkg8:*, reg pkg9:V, reg c60:cls, reg r95:V, reg r96:V, reg r97:V, reg _notin_1:cls, reg pkg10:*, reg pkg11:V, reg p16:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r99:V, reg r100:V, reg depends_suggests2:*, reg depends_suggests3:V, reg common_names2:*, reg common_names3:V, reg c61:cls, reg r101:V, reg p17:p(V +), reg r103:V, reg c62:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg bad_exprs:*, reg bad_exprs1:V, reg pkg12:*, reg pkg13:V, reg c63:cls, reg r106:V, reg _in_4:cls, reg pkg14:*, reg pkg15:V, reg p18:p(V +), reg depends:*, reg depends1:V, reg p19:p(V +), reg r110:V, reg c64:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r111:V, reg r112:V, reg bad_deps:*, reg bad_deps1:V, reg pkg16:*, reg pkg17:V, reg c65:cls, reg r113:V, reg pkg18:*, reg pkg19:V, reg pkg_name:*, reg pkg_name1:V, reg r114:V, reg c66:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r115:V, reg r116:V, reg bad_prac:*, reg bad_prac1:V, reg pkg20:*, reg pkg21:V, reg c67:cls, reg r117:V, reg r118:V, reg r119:V, reg _in_5:cls, reg Call10:*, reg Call11:V, reg p20:p(V +), reg r122:V, reg c68:L, reg deparse1:cls, reg e17:*, reg e18:V, reg c69:L, reg e20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r123:V, reg p21:p(V +), reg r125:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r126:V, reg r127:V, reg all_imports:*, reg all_imports1:V, reg pkg22:*, reg pkg23:V, reg c70:cls, reg r128:V, reg _notin_2:cls, reg pkg24:*, reg pkg25:V, reg p22:p(V +), reg imports2:*, reg imports3:V, reg p23:p(V +), reg r131:V, reg c71:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r132:V, reg r133:V, reg bad_imports:*, reg bad_imports1:V, reg pkg26:*, reg pkg27:V, reg c72:cls, reg r134:V, reg r135:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r136:V, reg r137:V, reg imp2:*, reg imp3:V, reg pkg28:*, reg pkg29:V, reg c73:cls, reg r138:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r139:V, reg r140:V, reg imp2f:*, reg imp2f1:V, reg deparse2:cls, reg e21:*, reg e22:V, reg c74:L, reg e24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __5:cls, reg r141:V, reg p24:p(V +), reg r143:V, reg c75:cls, reg r144:V, reg _in_6:cls, reg Call12:*, reg Call13:V, reg p25:p(V +), reg r146:V, reg c76:L, reg deparse3:cls, reg e25:*, reg e26:V, reg c77:L, reg e28:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r147:V, reg p26:p(V +), reg r149:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r150:V, reg r151:V, reg all_imports2:*, reg all_imports3:V, reg pkg30:*, reg pkg31:V, reg c78:cls, reg r152:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r153:V, reg r154:V, reg imp4:*, reg imp5:V, reg pkg32:*, reg pkg33:V, reg c79:cls, reg r155:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r156:V, reg r157:V, reg imp3f:*, reg imp3f1:V, reg deparse4:cls, reg e29:*, reg e30:V, reg c80:L, reg e32:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __7:cls, reg r158:V, reg p27:p(V +), reg r160:V, reg c81:cls, reg r161:V, reg _notin_3:cls, reg pkg34:*, reg pkg35:V, reg p28:p(V +), reg imports4:*, reg imports5:V, reg p29:p(V +), reg r164:V, reg c82:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r165:V, reg r166:V, reg bad_imports2:*, reg bad_imports3:V, reg pkg36:*, reg pkg37:V, reg c83:cls, reg r167:V, reg r168:V, reg _in_7:cls, reg Call14:*, reg Call15:V, reg p30:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r170:V, reg r171:V, reg c84:cls, reg r172:V, reg p31:p(V +), reg r174:V, reg c85:L, reg _in_8:cls, reg Call16:*, reg Call17:V, reg p32:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r176:V, reg r177:V, reg c86:cls, reg r178:V, reg p33:p(V +), reg r180:V, reg c87:L, reg c89:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r181:V, reg c92:L, reg r182:V, reg e33:*, reg e34:V, reg c93:L, reg c95:L, reg e36:V, reg dr20:V, reg dc10:L, reg dx20:V, reg c97:L, reg dx21:V, reg __8:cls, reg r183:V, reg is_call1:cls, reg r184:V, reg c98:L, reg c99:V, reg c101:L, reg c103:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r185:V, reg c106:L, reg r186:V, reg e37:*, reg e38:V, reg c107:L, reg c109:L, reg e40:V, reg dr22:V, reg dc11:L, reg dx22:V, reg c111:L, reg dx23:V, reg __9:cls, reg r187:V, reg c112:L, reg c114:L, reg dx25:V, reg dr24:V, reg dc12:L, reg dx26:V, reg c116:L, reg dx27:V, reg __10:cls, reg r188:V, reg is_call2:cls, reg r189:V, reg c117:L, reg c118:V, reg c120:L, reg c122:V, reg _in_9:cls, reg deparse5:cls, reg e41:*, reg e42:V, reg c123:L, reg e44:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r190:V, reg p34:p(V +), reg r192:V, reg c124:L, reg r194:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg __12:cls, reg r195:V, reg p35:p(V +), reg sym33:cls, reg base33:cls, reg guard33:L, reg r197:V, reg r198:V, reg c125:cls, reg r199:V, reg p36:p(V +), reg r201:V, reg c126:L, reg c127:V, reg c129:L, reg as_name:cls, reg paste0:cls, reg deparse6:cls, reg e45:*, reg e46:V, reg c130:L, reg e48:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __13:cls, reg r202:V, reg p37:p(V +), reg r204:V, reg c131:L, reg r206:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg __14:cls, reg r207:V, reg p38:p(V +), reg r209:V, reg p39:p(V +), reg r211:V, reg l:*, reg c132:L, reg r214:V, reg l3:*, reg r215:V, reg l4:*, reg dr34:V, reg dc17:L, reg dx36:V, reg r218:V, reg l6:*, reg r219:V, reg dx37:V, reg __15:cls, reg r220:V, reg c133:L, reg r223:V, reg l8:*, reg dx40:V, reg r224:V, reg dx41:V, reg dr36:V, reg dc18:L, reg dx43:V, reg r227:V, reg l10:*, reg dx44:V, reg r228:V, reg dx45:V, reg __16:cls, reg r229:V, reg c134:L, reg r231:V, reg l12:*, reg dx48:V, reg dx49:V, reg dr38:V, reg dc19:L, reg dx51:V, reg r233:V, reg l14:*, reg dx52:V, reg dx53:V, reg ____:cls, reg r234:V, reg c135:L, reg r236:V, reg l16:*, reg dx55:V, reg dr40:V, reg dc20:L, reg dx56:V, reg r238:V, reg l18:*, reg dx57:V, reg ____1:cls, reg r239:V, reg c136:L, reg r241:V, reg l20:*, reg dr42:V, reg dc21:L, reg dx58:V, reg r243:V, reg dx59:V, reg ____2:cls, reg r244:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r245:V, reg r246:V, reg e49:*, reg e50:V, reg r247:I, reg s:V, reg l21:I, reg i:I, reg i1:I, reg i2:I, reg c137:L, reg x:V, reg Recall:cls, reg e51:*, reg e52:V, reg c138:L, reg e54:V, reg dr44:V, reg dc22:L, reg dx60:V, reg dx61:V, reg i5:*, reg i6:V, reg __17:cls, reg r248:V, reg p40:p(V +), reg r250:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r251:V, reg r252:V, reg e55:*, reg e56:V, reg is_pairlist:cls, reg r253:V, reg c139:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r254:V, reg r255:V, reg e57:*, reg e58:V, reg r256:I, reg s1:V, reg l22:I, reg i7:I, reg i8:I, reg i9:I, reg c140:L, reg x1:V, reg Recall1:cls, reg e59:*, reg e60:V, reg c141:L, reg e62:V, reg dr46:V, reg dc23:L, reg dx62:V, reg dx63:V, reg i12:*, reg i13:V, reg __18:cls, reg r257:V, reg p41:p(V +), reg r259:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L78() else L79();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L82();
  L78():
    e1 = ld e;
    check L80() else D0();
  L79():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L88() else L3();
  L80():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L81() else D1();
  L82():
    sym1 = ldf `is.expression`;
    base1 = ldf `is.expression` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L83() else L84();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    sym35 = ldf `is.pairlist`;
    base35 = ldf `is.pairlist` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L323() else L324();
  L81():
    goto L0(r2);
  L83():
    e3 = ld e;
    check L85() else D2();
  L84():
    r3 = dyn base1(<sym e>);
    goto L2(c, r3);
  L88():
    deparse = ldf deparse;
    check L89() else D4();
  D2():
    deopt 8 [c, e3];
  D4():
    deopt 14 [];
  L73(r252):
    c139 = `as.logical`(r252);
    if c139 then L327() else L74();
  L85():
    e4 = force? e3;
    checkMissing(e4);
    is_expression = ldf `is.expression` in base;
    r5 = dyn is_expression(e4);
    check L86() else D3();
  L89():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c10 = `is.object`(e6);
      if c10 then L1() else L2(e6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e8):
      __ = ldf `[[` in base;
      r6 = dyn __(e8, 1);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn deparse(p);
    check L90() else D5();
  L323():
    e55 = ld e;
    check L325() else D106();
  L324():
    r251 = dyn base35(<sym e>);
    goto L73(r251);
  D3():
    deopt 11 [c, r5];
  D5():
    deopt 16 [r8];
  D106():
    deopt 407 [e55];
  L74():
    invisible.0();
    popenv;
    return NULL;
  L86():
    goto L2(c, r5);
  L90():
    c11 = `is.object`(r8);
    if c11 then L91() else L92(r8);
  L325():
    e56 = force? e55;
    checkMissing(e56);
    is_pairlist = ldf `is.pairlist` in base;
    r253 = dyn is_pairlist(e56);
    check L326() else D107();
  L327():
    sym36 = ldf seq_along;
    base36 = ldf seq_along in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L328() else L329();
  D107():
    deopt 410 [r253];
  L4(dx3):
    st Call = dx3;
    _in_ = ldf `%in%`;
    check L94() else D6();
  L75(r255):
    s1 = toForSeq(r255);
    l22 = length(s1);
    i7 = 0;
    goto L76(i7);
  L91():
    dr2 = tryDispatchBuiltin.1("[", r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L93() else L92(dr2);
  L92(r10):
    __1 = ldf `[` in base;
    r11 = dyn __1(r10, 1);
    goto L4(r11);
  L326():
    goto L73(r253);
  L328():
    e57 = ld e;
    check L330() else D108();
  L329():
    r254 = dyn base36(<sym e>);
    goto L75(r254);
  D6():
    deopt 22 [];
  D108():
    deopt 412 [e57];
  L76(i8):
    i9 = `+`.1(i8, 1);
    c140 = `<`.1(l22, i9);
    if c140 then L331() else L77();
  L93():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L94():
    p1 = prom<V +>{
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      return Call1;
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c12 = ldf c in base;
      r15 = dyn c12("clusterEvalQ", "parallel::clusterEvalQ");
      goto L0(r15);
    L2():
      r13 = dyn base2("clusterEvalQ", "parallel::clusterEvalQ");
      goto L0(r13);
    };
    r17 = dyn _in_(p1, p2);
    check L95() else D7();
  L330():
    e58 = force? e57;
    checkMissing(e58);
    r256 = seq_along(e58);
    goto L75(r256);
  D7():
    deopt 25 [r17];
  L77():
    x1 = `[[`(s1, i9, NULL, TRUE);
    st i = x1;
    Recall1 = ldf Recall;
    check L332() else D109();
  L95():
    c13 = `as.logical`(r17);
    if c13 then L96() else L5();
  L331():
    invisible.0();
    popenv;
    return i9;
  D109():
    deopt 416 [i9];
  L5():
    _in_1 = ldf `%in%`;
    check L99() else D8();
  L96():
    popenv;
    return NULL;
  L332():
    p41 = prom<V +>{
      e59 = ld e;
      e60 = force? e59;
      checkMissing(e60);
      c141 = `is.object`(e60);
      if c141 then L1() else L2(e60);
    L0(dx63):
      return dx63;
    L1():
      dr46 = tryDispatchBuiltin.1("[[", e60);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(e62):
      i12 = ld i;
      i13 = force? i12;
      __18 = ldf `[[` in base;
      r257 = dyn __18(e62, i13);
      goto L0(r257);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx62);
    };
    r259 = dyn Recall1(p41);
    check L333() else D110();
  D8():
    deopt 32 [];
  D110():
    deopt 418 [i9, r259];
  L99():
    p3 = prom<V +>{
      Call2 = ld Call;
      Call3 = force? Call2;
      checkMissing(Call3);
      return Call3;
    };
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c14 = ldf c in base;
      r23 = dyn c14("library", "require", "loadNamespace", "requireNamespace");
      goto L0(r23);
    L2():
      r21 = dyn base3("library", "require", "loadNamespace", "requireNamespace");
      goto L0(r21);
    };
    r25 = dyn _in_1(p3, p4);
    check L100() else D9();
  L333():
    goto L76(i9);
  D9():
    deopt 35 [r25];
  L100():
    c15 = `as.logical`(r25);
    if c15 then L101() else L7(c15);
  L7(c17):
    c24 = `as.logical`(c17);
    if c24 then L107() else L9();
  L101():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L8(c20, r27):
    r29 = `>=`(r27, 2);
    c21 = `as.logical`(r29);
    c22 = `&&`(c20, c21);
    goto L7(c22);
  L9():
    _in_5 = ldf `%in%`;
    check L204() else D53();
  L40():
    sym34 = ldf seq_along;
    base34 = ldf seq_along in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L316() else L317();
  L102():
    e9 = ld e;
    check L104() else D10();
  L103():
    r26 = dyn base4(<sym e>);
    goto L8(c15, r26);
  L107():
    vapply = ldf vapply;
    check L108() else D12();
  D10():
    deopt 38 [c15, e9];
  D12():
    deopt 46 [];
  D53():
    deopt 216 [];
  L70(r246):
    s = toForSeq(r246);
    l21 = length(s);
    i = 0;
    goto L71(i);
  L104():
    e10 = force? e9;
    checkMissing(e10);
    length = ldf length in base;
    r28 = dyn length(e10);
    check L105() else D11();
  L108():
    p5 = prom<V +>{
      e11 = ld e;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    p6 = prom<V +>{
      r31 = clos inner2501545716;
      return r31;
    };
    r33 = dyn vapply(p5, p6, NA_LGL);
    check L109() else D13();
  L204():
    p20 = prom<V +>{
      Call10 = ld Call;
      Call11 = force? Call10;
      checkMissing(Call11);
      return Call11;
    };
    r122 = dyn _in_5(p20, "::");
    check L205() else D54();
  L316():
    e49 = ld e;
    check L318() else D103();
  L317():
    r245 = dyn base34(<sym e>);
    goto L70(r245);
  D11():
    deopt 41 [c15, r28];
  D13():
    deopt 50 [r33];
  D54():
    deopt 219 [r122];
  D103():
    deopt 394 [e49];
  L71(i1):
    i2 = `+`.1(i1, 1);
    c137 = `<`.1(l21, i2);
    if c137 then L319() else L72();
  L105():
    goto L8(c15, r28);
  L109():
    st keep = r33;
    match_call = ldf `match.call`;
    check L110() else D14();
  L205():
    c68 = `as.logical`(r122);
    if c68 then L206() else L41();
  L318():
    e50 = force? e49;
    checkMissing(e50);
    r247 = seq_along(e50);
    goto L70(r247);
  D14():
    deopt 53 [];
  L41():
    _in_6 = ldf `%in%`;
    check L235() else D72();
  L72():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Recall = ldf Recall;
    check L320() else D104();
  L110():
    p7 = prom<V +>{
      sym5 = ldf baseenv;
      base5 = ldf baseenv in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r35):
      c25 = `is.object`(r35);
      if c25 then L4() else L5(r35);
    L2():
      baseenv = ldf baseenv in base;
      r36 = dyn baseenv();
      goto L0(r36);
    L3():
      r34 = dyn base5();
      goto L0(r34);
    L1(dx5):
      return dx5;
    L4():
      dr4 = tryDispatchBuiltin.1("[[", r35);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(r38):
      Call4 = ld Call;
      Call5 = force? Call4;
      __2 = ldf `[[` in base;
      r39 = dyn __2(r38, Call5);
      goto L1(r39);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    p8 = prom<V +>{
      e13 = ld e;
      e14 = force? e13;
      checkMissing(e14);
      c26 = `is.object`(e14);
      if c26 then L1() else L2(e14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", e14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e16):
      keep = ld keep;
      keep1 = force? keep;
      __3 = ldf `[` in base;
      r41 = dyn __3(e16, keep1);
      goto L0(r41);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r43 = dyn match_call(p7, p8);
    check L111() else D15();
  L206():
    deparse1 = ldf deparse;
    check L207() else D55();
  L319():
    invisible.0();
    popenv;
    return i2;
  D15():
    deopt 56 [r43];
  D55():
    deopt 221 [];
  D72():
    deopt 269 [];
  D104():
    deopt 398 [i2];
  L111():
    st mc = r43;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L112() else L113();
  L207():
    p21 = prom<V +>{
      e17 = ld e;
      e18 = force? e17;
      checkMissing(e18);
      c69 = `is.object`(e18);
      if c69 then L1() else L2(e18);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", e18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(e20):
      __4 = ldf `[[` in base;
      r123 = dyn __4(e20, 2);
      goto L0(r123);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r125 = dyn deparse1(p21);
    check L208() else D56();
  L235():
    p25 = prom<V +>{
      Call12 = ld Call;
      Call13 = force? Call12;
      checkMissing(Call13);
      return Call13;
    };
    r146 = dyn _in_6(p25, ":::");
    check L236() else D73();
  L320():
    p40 = prom<V +>{
      e51 = ld e;
      e52 = force? e51;
      checkMissing(e52);
      c138 = `is.object`(e52);
      if c138 then L1() else L2(e52);
    L0(dx61):
      return dx61;
    L1():
      dr44 = tryDispatchBuiltin.1("[[", e52);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(e54):
      i5 = ld i;
      i6 = force? i5;
      __17 = ldf `[[` in base;
      r248 = dyn __17(e54, i6);
      goto L0(r248);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx60);
    };
    r250 = dyn Recall(p40);
    check L321() else D105();
  D56():
    deopt 223 [r125];
  D73():
    deopt 272 [r146];
  D105():
    deopt 400 [i2, r250];
  L10(r45):
    r47 = `!`(r45);
    c29 = `as.logical`(r47);
    if c29 then L119() else L11();
  L112():
    mc = ld mc;
    check L114() else D16();
  L113():
    r44 = dyn base6(<lang `<-`(pkg, `$`(mc, package))>);
    goto L10(r44);
  L208():
    st pkg = r125;
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L209() else L210();
  L236():
    c76 = `as.logical`(r146);
    if c76 then L237() else L48();
  L321():
    goto L71(i2);
  D16():
    deopt 59 [mc];
  L11():
    goto L39(NULL);
  L39(r119):
    goto L40();
  L42(r127):
    sst all_imports = r127;
    _notin_2 = ldf `%notin%`;
    check L214() else D60();
  L48():
    _in_7 = ldf `%in%`;
    check L266() else D91();
  L114():
    mc1 = force? mc;
    checkMissing(mc1);
    c27 = `is.object`(mc1);
    if c27 then L116() else L117(mc1);
  L119():
    st dunno = FALSE;
    _in_2 = ldf `%in%`;
    check L120() else D17();
  L209():
    all_imports = ld all_imports;
    check L211() else D57();
  L210():
    r126 = dyn base21(<sym all_imports>, <sym pkg>);
    goto L42(r126);
  L237():
    deparse3 = ldf deparse;
    check L238() else D74();
  D17():
    deopt 69 [];
  D57():
    deopt 227 [all_imports];
  D60():
    deopt 235 [];
  D74():
    deopt 274 [];
  D91():
    deopt 324 [];
  L115(dx9):
    st pkg = dx9;
    c28 = `==`(dx9, NULL);
    goto L10(c28);
  L116():
    dr8 = tryDispatchBuiltin.1("$", mc1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L118() else L117(dr8);
  L117(mc3):
    r46 = `$`(mc3, <sym package>);
    goto L115(r46);
  L120():
    p9 = prom<V +>{
      Call6 = ld Call;
      Call7 = force? Call6;
      checkMissing(Call7);
      return Call7;
    };
    p10 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      c30 = ldf c in base;
      r51 = dyn c30("loadNamespace", "requireNamespace");
      goto L0(r51);
    L2():
      r49 = dyn base7("loadNamespace", "requireNamespace");
      goto L0(r49);
    };
    r53 = dyn _in_2(p9, p10);
    check L121() else D18();
  L211():
    all_imports1 = force? all_imports;
    checkMissing(all_imports1);
    pkg22 = ld pkg;
    check L212() else D58();
  L214():
    p22 = prom<V +>{
      pkg24 = ld pkg;
      pkg25 = force? pkg24;
      checkMissing(pkg25);
      return pkg25;
    };
    p23 = prom<V +>{
      imports2 = ld imports;
      imports3 = force? imports2;
      checkMissing(imports3);
      return imports3;
    };
    r131 = dyn _notin_2(p22, p23);
    check L215() else D61();
  L238():
    p26 = prom<V +>{
      e25 = ld e;
      e26 = force? e25;
      checkMissing(e26);
      c77 = `is.object`(e26);
      if c77 then L1() else L2(e26);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", e26);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(e28):
      __6 = ldf `[[` in base;
      r147 = dyn __6(e28, 2);
      goto L0(r147);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r149 = dyn deparse3(p26);
    check L239() else D75();
  L266():
    p30 = prom<V +>{
      Call14 = ld Call;
      Call15 = force? Call14;
      checkMissing(Call15);
      return Call15;
    };
    p31 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r171):
      return r171;
    L1():
      c84 = ldf c in base;
      r172 = dyn c84("setClass", "setMethod");
      goto L0(r172);
    L2():
      r170 = dyn base29("setClass", "setMethod");
      goto L0(r170);
    };
    r174 = dyn _in_7(p30, p31);
    check L267() else D92();
  D18():
    deopt 72 [r53];
  D58():
    deopt 229 [pkg22];
  D61():
    deopt 238 [r131];
  D75():
    deopt 276 [r149];
  D92():
    deopt 327 [r174];
  L118():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L115(dx8);
  L121():
    c31 = `as.logical`(r53);
    if c31 then L122() else L12();
  L212():
    pkg23 = force? pkg22;
    checkMissing(pkg23);
    c70 = ldf c in base;
    r128 = dyn c70(all_imports1, pkg23);
    check L213() else D59();
  L215():
    c71 = `as.logical`(r131);
    if c71 then L216() else L43();
  L239():
    st pkg = r149;
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L240() else L241();
  L267():
    c85 = `as.logical`(r174);
    if c85 then L268() else L55();
  D59():
    deopt 232 [r128];
  L12():
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  L17():
    dunno = ld dunno;
    check L155() else D28();
  L43():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L223() else L224();
  L45(r135):
    goto L40();
  L49(r151):
    sst all_imports = r151;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L245() else L246();
  L55():
    _in_8 = ldf `%in%`;
    check L270() else D93();
  L122():
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L123() else L124();
  L213():
    goto L42(r128);
  L216():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L217() else L218();
  L240():
    all_imports2 = ld all_imports;
    check L242() else D76();
  L241():
    r150 = dyn base25(<sym all_imports>, <sym pkg>);
    goto L49(r150);
  L268():
    sst uses_methods = TRUE;
    goto L40();
  D28():
    deopt 135 [dunno];
  D76():
    deopt 280 [all_imports2];
  D93():
    deopt 332 [];
  L13(r55):
    r60 = `!`(r55);
    c32 = `as.logical`(r60);
    if c32 then L130() else L15();
  L18(r64):
    r69 = `!`(r64);
    c33 = `as.logical`(r69);
    if c33 then L140() else L20(c33);
  L44(r133):
    sst bad_imports = r133;
    goto L45(r133);
  L46(r137):
    sst imp2 = r137;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L228() else L229();
  L50(r154):
    sst imp3 = r154;
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L250() else L251();
  L123():
    sym9 = ldf class;
    base9 = ldf class in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  L124():
    r54 = dyn base8(<lang class(pkg)>, "character");
    goto L13(r54);
  L133():
    sym11 = ldf class;
    base11 = ldf class in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L135() else L136();
  L134():
    r63 = dyn base10(<lang class(pkg)>, "character");
    goto L18(r63);
  L155():
    dunno1 = force? dunno;
    checkMissing(dunno1);
    r77 = `!`(dunno1);
    c55 = `as.logical`(r77);
    if c55 then L156() else L24();
  L217():
    bad_imports = ld bad_imports;
    check L219() else D62();
  L218():
    r132 = dyn base22(<sym bad_imports>, <sym pkg>);
    goto L44(r132);
  L223():
    imp2 = ld imp2;
    check L225() else D65();
  L224():
    r136 = dyn base23(<sym imp2>, <sym pkg>);
    goto L46(r136);
  L242():
    all_imports3 = force? all_imports2;
    checkMissing(all_imports3);
    pkg30 = ld pkg;
    check L243() else D77();
  L245():
    imp4 = ld imp3;
    check L247() else D79();
  L246():
    r153 = dyn base26(<sym imp3>, <sym pkg>);
    goto L50(r153);
  L270():
    p32 = prom<V +>{
      Call16 = ld Call;
      Call17 = force? Call16;
      checkMissing(Call17);
      return Call17;
    };
    p33 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r177):
      return r177;
    L1():
      c86 = ldf c in base;
      r178 = dyn c86("<-", "<<-");
      goto L0(r178);
    L2():
      r176 = dyn base30("<-", "<<-");
      goto L0(r176);
    };
    r180 = dyn _in_8(p32, p33);
    check L271() else D94();
  D62():
    deopt 241 [bad_imports];
  D65():
    deopt 250 [imp2];
  D77():
    deopt 282 [pkg30];
  D79():
    deopt 289 [imp4];
  D94():
    deopt 335 [r180];
  L14(r57):
    identical = ldf identical in base;
    r59 = dyn identical(r57, "character", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L129() else D21();
  L15():
    goto L16(NULL);
  L16(r61):
    goto L17();
  L19(r66):
    identical1 = ldf identical in base;
    r68 = dyn identical1(r66, "character", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L139() else D24();
  L20(c35):
    c48 = `as.logical`(c35);
    if c48 then L149() else L22(c48);
  L24():
    goto L38(NULL);
  L38(r118):
    goto L39(r118);
  L47(r140):
    sst imp2f = r140;
    goto L45(r140);
  L51(r157):
    sst imp3f = r157;
    _notin_3 = ldf `%notin%`;
    check L256() else D86();
  L125():
    pkg = ld pkg;
    check L127() else D19();
  L126():
    r56 = dyn base9(<sym pkg>);
    goto L14(r56);
  L130():
    st dunno = TRUE;
    goto L16(TRUE);
  L135():
    pkg2 = ld pkg;
    check L137() else D22();
  L136():
    r65 = dyn base11(<sym pkg>);
    goto L19(r65);
  L140():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L141() else L142();
  L156():
    sym13 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L157() else L158();
  L219():
    bad_imports1 = force? bad_imports;
    checkMissing(bad_imports1);
    pkg26 = ld pkg;
    check L220() else D63();
  L225():
    imp3 = force? imp2;
    checkMissing(imp3);
    pkg28 = ld pkg;
    check L226() else D66();
  L228():
    imp2f = ld imp2f;
    check L230() else D68();
  L229():
    r139 = dyn base24(<sym imp2f>, <lang deparse(`[[`(e, 3))>);
    goto L47(r139);
  L243():
    pkg31 = force? pkg30;
    checkMissing(pkg31);
    c78 = ldf c in base;
    r152 = dyn c78(all_imports3, pkg31);
    check L244() else D78();
  L247():
    imp5 = force? imp4;
    checkMissing(imp5);
    pkg32 = ld pkg;
    check L248() else D80();
  L250():
    imp3f = ld imp3f;
    check L252() else D82();
  L251():
    r156 = dyn base27(<sym imp3f>, <lang deparse(`[[`(e, 3))>);
    goto L51(r156);
  L271():
    c87 = `as.logical`(r180);
    if c87 then L272() else L56(c87);
  D19():
    deopt 77 [pkg];
  D21():
    deopt 90 [r59];
  D22():
    deopt 101 [pkg2];
  D24():
    deopt 114 [r68];
  D63():
    deopt 243 [pkg26];
  D66():
    deopt 252 [pkg28];
  D68():
    deopt 259 [imp2f];
  D78():
    deopt 285 [r152];
  D80():
    deopt 291 [pkg32];
  D82():
    deopt 298 [imp3f];
  D86():
    deopt 308 [];
  L21(c38, r71):
    r73 = `!`(r71);
    c45 = `as.logical`(r73);
    c46 = `&&`(c38, c45);
    goto L20(c46);
  L22(c50):
    c54 = `as.logical`(c50);
    if c54 then L153() else L23();
  L25(r79):
    st pkg = r79;
    _in_3 = ldf `%in%`;
    check L161() else D31();
  L56(c89):
    c101 = `as.logical`(c89);
    if c101 then L281() else L59(c101);
  L127():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    class = ldf class in base;
    r58 = dyn class(pkg1);
    check L128() else D20();
  L129():
    goto L13(r59);
  L137():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    class1 = ldf class in base;
    r67 = dyn class1(pkg3);
    check L138() else D23();
  L139():
    goto L18(r68);
  L141():
    mc4 = ld mc;
    check L143() else D25();
  L142():
    r70 = dyn base12(<lang `<-`(co, `$`(mc, character.only))>);
    goto L21(c33, r70);
  L149():
    isFALSE = ldf isFALSE;
    check L150() else D26();
  L157():
    pkg4 = ld pkg;
    check L159() else D29();
  L158():
    r78 = dyn base13(<sym pkg>);
    goto L25(r78);
  L220():
    pkg27 = force? pkg26;
    checkMissing(pkg27);
    c72 = ldf c in base;
    r134 = dyn c72(bad_imports1, pkg27);
    check L221() else D64();
  L226():
    pkg29 = force? pkg28;
    checkMissing(pkg29);
    c73 = ldf c in base;
    r138 = dyn c73(imp3, pkg29);
    check L227() else D67();
  L230():
    imp2f1 = force? imp2f;
    checkMissing(imp2f1);
    deparse2 = ldf deparse;
    check L231() else D69();
  L244():
    goto L49(r152);
  L248():
    pkg33 = force? pkg32;
    checkMissing(pkg33);
    c79 = ldf c in base;
    r155 = dyn c79(imp5, pkg33);
    check L249() else D81();
  L252():
    imp3f1 = force? imp3f;
    checkMissing(imp3f1);
    deparse4 = ldf deparse;
    check L253() else D83();
  L256():
    p28 = prom<V +>{
      pkg34 = ld pkg;
      pkg35 = force? pkg34;
      checkMissing(pkg35);
      return pkg35;
    };
    p29 = prom<V +>{
      imports4 = ld imports;
      imports5 = force? imports4;
      checkMissing(imports5);
      return imports5;
    };
    r164 = dyn _notin_3(p28, p29);
    check L257() else D87();
  L272():
    sym31 = ldf `is.call`;
    base31 = ldf `is.call` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L273() else L274();
  D20():
    deopt 80 [r58];
  D23():
    deopt 104 [r67];
  D25():
    deopt 117 [c33, mc4];
  D26():
    deopt 125 [c48];
  D29():
    deopt 140 [pkg4];
  D31():
    deopt 146 [];
  D64():
    deopt 246 [r134];
  D67():
    deopt 255 [r138];
  D69():
    deopt 262 [];
  D81():
    deopt 294 [r155];
  D83():
    deopt 301 [];
  D87():
    deopt 311 [r164];
  L23():
    goto L17();
  L57(c92, r182):
    c98 = `as.logical`(r182);
    c99 = `&&`(c92, c98);
    goto L56(c99);
  L59(c103):
    c120 = `as.logical`(c103);
    if c120 then L293() else L63(c120);
  L128():
    goto L14(r58);
  L138():
    goto L19(r67);
  L143():
    mc5 = force? mc4;
    checkMissing(mc5);
    c39 = `is.object`(mc5);
    if c39 then L145() else L146(c33, mc5);
  L150():
    p11 = prom<V +>{
      co = ld co;
      co1 = force? co;
      checkMissing(co1);
      return co1;
    };
    r75 = dyn isFALSE(p11);
    check L151() else D27();
  L153():
    st dunno = TRUE;
    goto L17();
  L159():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    as_character = ldf `as.character` in base;
    r80 = dyn as_character(pkg5);
    check L160() else D30();
  L161():
    p12 = prom<V +>{
      Call8 = ld Call;
      Call9 = force? Call8;
      checkMissing(Call9);
      return Call9;
    };
    p13 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r83):
      return r83;
    L1():
      c56 = ldf c in base;
      r84 = dyn c56("loadNamespace", "requireNamespace");
      goto L0(r84);
    L2():
      r82 = dyn base14("loadNamespace", "requireNamespace");
      goto L0(r82);
    };
    r86 = dyn _in_3(p12, p13);
    check L162() else D32();
  L221():
    goto L44(r134);
  L227():
    goto L46(r138);
  L231():
    p24 = prom<V +>{
      e21 = ld e;
      e22 = force? e21;
      checkMissing(e22);
      c74 = `is.object`(e22);
      if c74 then L1() else L2(e22);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", e22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(e24):
      __5 = ldf `[[` in base;
      r141 = dyn __5(e24, 3);
      goto L0(r141);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r143 = dyn deparse2(p24);
    check L232() else D70();
  L249():
    goto L50(r155);
  L253():
    p27 = prom<V +>{
      e29 = ld e;
      e30 = force? e29;
      checkMissing(e30);
      c80 = `is.object`(e30);
      if c80 then L1() else L2(e30);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", e30);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(e32):
      __7 = ldf `[[` in base;
      r158 = dyn __7(e32, 3);
      goto L0(r158);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r160 = dyn deparse4(p27);
    check L254() else D84();
  L257():
    c82 = `as.logical`(r164);
    if c82 then L258() else L52();
  L273():
    e33 = ld e;
    check L275() else D95();
  L274():
    r181 = dyn base31(<lang `[[`(e, 2)>);
    goto L57(c87, r181);
  L281():
    sym32 = ldf `is.call`;
    base32 = ldf `is.call` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L282() else L283();
  D27():
    deopt 127 [c48, r75];
  D30():
    deopt 143 [r80];
  D32():
    deopt 149 [r86];
  D70():
    deopt 264 [r143];
  D84():
    deopt 303 [r160];
  D95():
    deopt 338 [c87, e33];
  L52():
    goto L54(NULL);
  L54(r168):
    goto L40();
  L60(c106, r186):
    c117 = `as.logical`(r186);
    c118 = `&&`(c106, c117);
    goto L59(c118);
  L63(c122):
    c129 = `as.logical`(c122);
    if c129 then L297() else L64();
  L144(c43, dx11):
    st co = dx11;
    c44 = `==`(dx11, NULL);
    goto L21(c43, c44);
  L145():
    dr10 = tryDispatchBuiltin.1("$", mc5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L147() else L146(c33, dr10);
  L146(c41, mc7):
    r72 = `$`(mc7, <sym character.only>);
    goto L144(c41, r72);
  L151():
    r76 = `!`(r75);
    c51 = `as.logical`(r76);
    c52 = `&&`(c48, c51);
    goto L22(c52);
  L160():
    goto L25(r80);
  L162():
    c57 = `as.logical`(r86);
    if c57 then L163() else L26();
  L232():
    c75 = ldf c in base;
    r144 = dyn c75(imp2f1, r143);
    check L233() else D71();
  L254():
    c81 = ldf c in base;
    r161 = dyn c81(imp3f1, r160);
    check L255() else D85();
  L258():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L259() else L260();
  L275():
    e34 = force? e33;
    checkMissing(e34);
    c93 = `is.object`(e34);
    if c93 then L276() else L277(c87, e34);
  L282():
    e37 = ld e;
    check L284() else D97();
  L283():
    r185 = dyn base32(<lang `<-`(e21, `[[`(`[[`(e, 2), 1))>);
    goto L60(c101, r185);
  L293():
    _in_9 = ldf `%in%`;
    check L294() else D99();
  D71():
    deopt 266 [r144];
  D85():
    deopt 305 [r161];
  D97():
    deopt 348 [c101, e37];
  D99():
    deopt 361 [c120];
  L26():
    _notin_1 = ldf `%notin%`;
    check L174() else D38();
  L30(r97):
    goto L38(r97);
  L53(r166):
    sst bad_imports = r166;
    goto L54(r166);
  L58(c97, dx21):
    is_call1 = ldf `is.call` in base;
    r184 = dyn is_call1(dx21);
    check L279() else D96();
  L64():
    goto L40();
  L147():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L144(c33, dx10);
  L163():
    _notin_ = ldf `%notin%`;
    check L164() else D33();
  L233():
    goto L47(r144);
  L255():
    goto L51(r161);
  L259():
    bad_imports2 = ld bad_imports;
    check L261() else D88();
  L260():
    r165 = dyn base28(<sym bad_imports>, <sym pkg>);
    goto L53(r165);
  L276():
    dr20 = tryDispatchBuiltin.1("[[", e34);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L278() else L277(c87, dr20);
  L277(c95, e36):
    __8 = ldf `[[` in base;
    r183 = dyn __8(e36, 2);
    goto L58(c95, r183);
  L284():
    e38 = force? e37;
    checkMissing(e38);
    c107 = `is.object`(e38);
    if c107 then L285() else L286(c101, e38);
  L294():
    p35 = prom<V +>{
      deparse5 = ldf deparse;
      p34 = prom<V +>{
        e41 = ld e21;
        e42 = force? e41;
        checkMissing(e42);
        c123 = `is.object`(e42);
        if c123 then L1() else L2(e42);
      L0(dx29):
        return dx29;
      L1():
        dr26 = tryDispatchBuiltin.1("[[", e42);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(e44):
        __11 = ldf `[[` in base;
        r190 = dyn __11(e44, 1);
        goto L0(r190);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx28);
      };
      r192 = dyn deparse5(p34);
      c124 = `is.object`(r192);
      if c124 then L1() else L2(r192);
    L0(dx31):
      return dx31;
    L1():
      dr28 = tryDispatchBuiltin.1("[", r192);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(r194):
      __12 = ldf `[` in base;
      r195 = dyn __12(r194, 1);
      goto L0(r195);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx30);
    };
    p36 = prom<V +>{
      sym33 = ldf c;
      base33 = ldf c in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r198):
      return r198;
    L1():
      c125 = ldf c in base;
      r199 = dyn c125("::", ":::");
      goto L0(r199);
    L2():
      r197 = dyn base33("::", ":::");
      goto L0(r197);
    };
    r201 = dyn _in_9(p35, p36);
    check L295() else D100();
  L297():
    as_name = ldf `as.name`;
    check L298() else D101();
  D33():
    deopt 151 [];
  D38():
    deopt 167 [];
  D88():
    deopt 314 [bad_imports2];
  D96():
    deopt 344 [c97, r184];
  D100():
    deopt 364 [c120, r201];
  D101():
    deopt 367 [];
  L61(c111, dx23):
    c112 = `is.object`(dx23);
    if c112 then L288() else L289(c111, dx23);
  L164():
    p14 = prom<V +>{
      pkg6 = ld pkg;
      pkg7 = force? pkg6;
      checkMissing(pkg7);
      return pkg7;
    };
    p15 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      imports = ld imports;
      imports1 = force? imports;
      checkMissing(imports1);
      depends_suggests = ld depends_suggests;
      depends_suggests1 = force? depends_suggests;
      checkMissing(depends_suggests1);
      common_names = ld common_names;
      common_names1 = force? common_names;
      checkMissing(common_names1);
      c58 = ldf c in base;
      r90 = dyn c58(imports1, depends_suggests1, common_names1);
      goto L0(r90);
    L2():
      r88 = dyn base15(<sym imports>, <sym depends_suggests>, <sym common_names>);
      goto L0(r88);
    };
    r92 = dyn _notin_(p14, p15);
    check L165() else D34();
  L174():
    p16 = prom<V +>{
      pkg10 = ld pkg;
      pkg11 = force? pkg10;
      checkMissing(pkg11);
      return pkg11;
    };
    p17 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r100):
      return r100;
    L1():
      depends_suggests2 = ld depends_suggests;
      depends_suggests3 = force? depends_suggests2;
      checkMissing(depends_suggests3);
      common_names2 = ld common_names;
      common_names3 = force? common_names2;
      checkMissing(common_names3);
      c61 = ldf c in base;
      r101 = dyn c61(depends_suggests3, common_names3);
      goto L0(r101);
    L2():
      r99 = dyn base17(<sym depends_suggests>, <sym common_names>);
      goto L0(r99);
    };
    r103 = dyn _notin_1(p16, p17);
    check L175() else D39();
  L261():
    bad_imports3 = force? bad_imports2;
    checkMissing(bad_imports3);
    pkg36 = ld pkg;
    check L262() else D89();
  L278():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L58(c87, dx20);
  L279():
    goto L57(c97, r184);
  L285():
    dr22 = tryDispatchBuiltin.1("[[", e38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L287() else L286(c101, dr22);
  L286(c109, e40):
    __9 = ldf `[[` in base;
    r187 = dyn __9(e40, 2);
    goto L61(c109, r187);
  L295():
    c126 = `as.logical`(r201);
    c127 = `&&`(c120, c126);
    goto L63(c127);
  L298():
    p39 = prom<V +>{
      paste0 = ldf paste0;
      p38 = prom<V +>{
        deparse6 = ldf deparse;
        p37 = prom<V +>{
          e45 = ld e21;
          e46 = force? e45;
          checkMissing(e46);
          c130 = `is.object`(e46);
          if c130 then L1() else L2(e46);
        L0(dx33):
          return dx33;
        L1():
          dr30 = tryDispatchBuiltin.1("[[", e46);
          dc15 = getTryDispatchBuiltinDispatched(dr30);
          if dc15 then L3() else L2(dr30);
        L2(e48):
          __13 = ldf `[[` in base;
          r202 = dyn __13(e48, 3);
          goto L0(r202);
        L3():
          dx32 = getTryDispatchBuiltinValue(dr30);
          goto L0(dx32);
        };
        r204 = dyn deparse6(p37);
        c131 = `is.object`(r204);
        if c131 then L1() else L2(r204);
      L0(dx35):
        return dx35;
      L1():
        dr32 = tryDispatchBuiltin.1("[", r204);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(r206):
        __14 = ldf `[` in base;
        r207 = dyn __14(r206, 1);
        goto L0(r207);
      L3():
        dx34 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx34);
      };
      r209 = dyn paste0(p38, "<-");
      return r209;
    };
    r211 = dyn as_name(p39);
    check L299() else D102();
  D34():
    deopt 154 [r92];
  D39():
    deopt 170 [r103];
  D89():
    deopt 316 [pkg36];
  D102():
    deopt 369 [r211];
  L62(c116, dx27):
    st e21 = dx27;
    is_call2 = ldf `is.call` in base;
    r189 = dyn is_call2(dx27);
    check L291() else D98();
  L165():
    c59 = `as.logical`(r92);
    if c59 then L166() else L27();
  L175():
    c62 = `as.logical`(r103);
    if c62 then L176() else L31();
  L262():
    pkg37 = force? pkg36;
    checkMissing(pkg37);
    c83 = ldf c in base;
    r167 = dyn c83(bad_imports3, pkg37);
    check L263() else D90();
  L287():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L61(c101, dx22);
  L288():
    dr24 = tryDispatchBuiltin.1("[[", dx23);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L290() else L289(c111, dr24);
  L289(c114, dx25):
    __10 = ldf `[[` in base;
    r188 = dyn __10(dx25, 1);
    goto L62(c114, r188);
  L299():
    l = ld e;
    c132 = `is.object`(l);
    if c132 then L300() else L301(r211, l, r211, l);
  D90():
    deopt 319 [r167];
  D98():
    deopt 358 [c116, r189];
  L27():
    goto L29(NULL);
  L29(r96):
    goto L30(r96);
  L31():
    goto L33();
  L33():
    _in_4 = ldf `%in%`;
    check L183() else D43();
  L65(r218, l6, r219, dx37):
    c133 = `is.object`(dx37);
    if c133 then L303() else L304(r218, l6, dx37, r219, dx37);
  L166():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L167() else L168();
  L176():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L177() else L178();
  L263():
    goto L53(r167);
  L290():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L62(c111, dx26);
  L291():
    goto L60(c116, r189);
  L300():
    dr34 = tryDispatchBuiltin.1("[[", l);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L302() else L301(r211, l, r211, dr34);
  L301(r214, l3, r215, l4):
    __15 = ldf `[[` in base;
    r220 = dyn __15(l4, 2);
    goto L65(r214, l3, r215, r220);
  D43():
    deopt 183 [];
  L28(r94):
    sst bad_imps = r94;
    goto L29(r94);
  L32(r105):
    sst bad_exprs = r105;
    goto L33();
  L66(r227, l10, dx44, r228, dx45):
    c134 = `is.object`(dx45);
    if c134 then L306() else L307(r227, l10, dx44, dx45);
  L167():
    bad_imps = ld bad_imps;
    check L169() else D35();
  L168():
    r93 = dyn base16(<sym bad_imps>, <sym pkg>);
    goto L28(r93);
  L177():
    bad_exprs = ld bad_exprs;
    check L179() else D40();
  L178():
    r104 = dyn base18(<sym bad_exprs>, <sym pkg>);
    goto L32(r104);
  L183():
    p18 = prom<V +>{
      pkg14 = ld pkg;
      pkg15 = force? pkg14;
      checkMissing(pkg15);
      return pkg15;
    };
    p19 = prom<V +>{
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      return depends1;
    };
    r110 = dyn _in_4(p18, p19);
    check L184() else D44();
  L302():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L65(r211, l, r211, dx36);
  L303():
    dr36 = tryDispatchBuiltin.1("[[", dx37);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L305() else L304(r218, l6, dx37, r219, dr36);
  L304(r223, l8, dx40, r224, dx41):
    __16 = ldf `[[` in base;
    r229 = dyn __16(dx41, 1);
    goto L66(r223, l8, dx40, r224, r229);
  D35():
    deopt 157 [bad_imps];
  D40():
    deopt 173 [bad_exprs];
  D44():
    deopt 186 [r110];
  L67(r233, l14, dx52, dx53):
    c135 = `is.object`(dx52);
    if c135 then L309() else L310(r233, l14, dx52);
  L169():
    bad_imps1 = force? bad_imps;
    checkMissing(bad_imps1);
    pkg8 = ld pkg;
    check L170() else D36();
  L179():
    bad_exprs1 = force? bad_exprs;
    checkMissing(bad_exprs1);
    pkg12 = ld pkg;
    check L180() else D41();
  L184():
    c64 = `as.logical`(r110);
    if c64 then L185() else L34();
  L305():
    dx43 = getTryDispatchBuiltinValue(dr36);
    goto L66(r218, l6, dx37, r219, dx43);
  L306():
    dr38 = tryDispatchBuiltin.0("[[<-", dx45, r228);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L308() else L307(r227, l10, dx44, dr38);
  L307(r231, l12, dx48, dx49):
    ____ = ldf `[[<-` in base;
    r234 = dyn ____(dx49, r228, 3);
    goto L67(r231, l12, dx48, r234);
  D36():
    deopt 159 [pkg8];
  D41():
    deopt 175 [pkg12];
  L34():
    pkg18 = ld pkg;
    check L192() else D48();
  L68(r238, l18, dx57):
    c136 = `is.object`(l18);
    if c136 then L312() else L313(r238, l18);
  L170():
    pkg9 = force? pkg8;
    checkMissing(pkg9);
    c60 = ldf c in base;
    r95 = dyn c60(bad_imps1, pkg9);
    check L171() else D37();
  L180():
    pkg13 = force? pkg12;
    checkMissing(pkg13);
    c63 = ldf c in base;
    r106 = dyn c63(bad_exprs1, pkg13);
    check L181() else D42();
  L185():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L186() else L187();
  L308():
    dx51 = getTryDispatchBuiltinValue(dr38);
    goto L67(r227, l10, dx44, dx51);
  L309():
    dr40 = tryDispatchBuiltin.0("[[<-", dx52, dx53);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L311() else L310(r233, l14, dr40);
  L310(r236, l16, dx55):
    ____1 = ldf `[[<-` in base;
    r239 = dyn ____1(dx55, dx53, 1);
    goto L68(r236, l16, r239);
  D37():
    deopt 162 [r95];
  D42():
    deopt 178 [r106];
  D48():
    deopt 196 [pkg18];
  L35(r112):
    sst bad_deps = r112;
    goto L30(r112);
  L69(r243, dx59):
    st e = dx59;
    goto L40();
  L171():
    goto L28(r95);
  L181():
    goto L32(r106);
  L186():
    bad_deps = ld bad_deps;
    check L188() else D45();
  L187():
    r111 = dyn base19(<sym bad_deps>, <sym pkg>);
    goto L35(r111);
  L192():
    pkg19 = force? pkg18;
    checkMissing(pkg19);
    pkg_name = ld pkg_name;
    check L193() else D49();
  L311():
    dx56 = getTryDispatchBuiltinValue(dr40);
    goto L68(r233, l14, dx56);
  L312():
    dr42 = tryDispatchBuiltin.0("[[<-", l18, dx57);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L314() else L313(r238, dr42);
  L313(r241, l20):
    ____2 = ldf `[[<-` in base;
    r244 = dyn ____2(l20, dx57, 2);
    goto L69(r241, r244);
  D45():
    deopt 189 [bad_deps];
  D49():
    deopt 197 [pkg19, pkg_name];
  L188():
    bad_deps1 = force? bad_deps;
    checkMissing(bad_deps1);
    pkg16 = ld pkg;
    check L189() else D46();
  L193():
    pkg_name1 = force? pkg_name;
    checkMissing(pkg_name1);
    r114 = `!=`(pkg19, pkg_name1);
    c66 = `as.logical`(r114);
    if c66 then L194() else L36();
  L314():
    dx58 = getTryDispatchBuiltinValue(dr42);
    goto L69(r238, dx58);
  D46():
    deopt 191 [pkg16];
  L36():
    goto L30(NULL);
  L189():
    pkg17 = force? pkg16;
    checkMissing(pkg17);
    c65 = ldf c in base;
    r113 = dyn c65(bad_deps1, pkg17);
    check L190() else D47();
  L194():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L195() else L196();
  D47():
    deopt 194 [r113];
  L37(r116):
    sst bad_prac = r116;
    goto L30(r116);
  L190():
    goto L35(r113);
  L195():
    bad_prac = ld bad_prac;
    check L197() else D50();
  L196():
    r115 = dyn base20(<sym bad_prac>, <sym pkg>);
    goto L37(r115);
  D50():
    deopt 202 [bad_prac];
  L197():
    bad_prac1 = force? bad_prac;
    checkMissing(bad_prac1);
    pkg20 = ld pkg;
    check L198() else D51();
  D51():
    deopt 204 [pkg20];
  L198():
    pkg21 = force? pkg20;
    checkMissing(pkg21);
    c67 = ldf c in base;
    r117 = dyn c67(bad_prac1, pkg21);
    check L199() else D52();
  D52():
    deopt 207 [r117];
  L199():
    goto L37(r117);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg deparse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg r5:V |
    mkenv;
    st x = x;
    deparse = ldf deparse;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn deparse(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    r5 = `!=`(dx1, "...");
    popenv;
    return r5;
  L3():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, 1);
    goto L0(r4);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg get:cls, reg f1:*, reg f2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg f3:*, reg f4:V, reg typeof:cls, reg r5:V, reg r6:V, reg c:L, reg pairlist:cls, reg formals:cls, reg f5:*, reg f6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg body:cls, reg f7:*, reg f8:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V |
    mkenv;
    st f = f;
    get = ldf get;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p1 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r2 = dyn get[, envir](p, p1);
    check L3() else D1();
  D1():
    deopt 5 [r2];
  L3():
    st f = r2;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r4):
    r6 = `==`(r4, "closure");
    c = `as.logical`(r6);
    if c then L8() else L1();
  L4():
    f3 = ld f;
    check L6() else D2();
  L5():
    r3 = dyn base(<sym f>);
    goto L0(r3);
  D2():
    deopt 9 [f3];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    f4 = force? f3;
    checkMissing(f4);
    typeof = ldf typeof in base;
    r5 = dyn typeof(f4);
    check L7() else D3();
  L8():
    pairlist = ldf pairlist;
    check L9() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [];
  L7():
    goto L0(r5);
  L9():
    p3 = prom<V +>{
      formals = ldf formals;
      p2 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      r8 = dyn formals(p2);
      return r8;
    };
    p5 = prom<V +>{
      body = ldf body;
      p4 = prom<V +>{
        f7 = ld f;
        f8 = force? f7;
        checkMissing(f8);
        return f8;
      };
      r11 = dyn body(p4);
      return r11;
    };
    r13 = dyn pairlist(p3, p5);
    check L10() else D5();
  D5():
    deopt 19 [r13];
  L10():
    popenv;
    return r13;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg system_file:cls, reg p1:*, reg p2:V, reg c:L, reg p4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p5:p(V +), reg r2:V, reg dfile:*, reg dfile1:V, reg r3:V, reg c1:L, reg unname:cls, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p6:p(V +), reg r7:V, reg c2:L, reg r9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg p7:p(V +), reg r12:V |
    mkenv;
    st p = p;
    system_file = ldf `system.file`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p5 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      c = `is.object`(p2);
      if c then L1() else L2(p2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", p2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(p4):
      __ = ldf `[[` in base;
      r = dyn __(p4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn system_file[, package]("DESCRIPTION", p5);
    check L3() else D1();
  D1():
    deopt 5 [r2];
  L3():
    st dfile = r2;
    dfile = ld dfile;
    check L4() else D2();
  D2():
    deopt 7 [dfile];
  L4():
    dfile1 = force? dfile;
    checkMissing(dfile1);
    r3 = `==`(dfile1, "");
    c1 = `as.logical`(r3);
    if c1 then L5() else L0();
  L0():
    unname = ldf unname;
    check L8() else D3();
  L5():
    popenv;
    return "";
  D3():
    deopt 17 [];
  L8():
    p7 = prom<V +>{
      _read_description = ldf `.read_description`;
      p6 = prom<V +>{
        dfile2 = ld dfile;
        dfile3 = force? dfile2;
        checkMissing(dfile3);
        return dfile3;
      };
      r7 = dyn _read_description(p6);
      c2 = `is.object`(r7);
      if c2 then L1() else L2(r7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", r7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r9):
      __1 = ldf `[` in base;
      r10 = dyn __1(r9, "Maintainer");
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r12 = dyn unname(p7);
    check L9() else D4();
  D4():
    deopt 19 [r12];
  L9():
    popenv;
    return r12;
  }
}