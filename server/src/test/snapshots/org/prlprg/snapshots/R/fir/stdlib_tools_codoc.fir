fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2445727586;
    st codoc = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2445727586(package, dir, `lib.loc`, `use.values`, verbose) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg use_values:*, reg verbose:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `use.values`:*, reg use_values_isMissing:L, reg use_values_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg package1:*, reg package2:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg stop:cls, reg r10:V, reg find_package:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r14:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r16:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p4:p(V +), reg r18:V, reg r19:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg _haveRds:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r26:V, reg r27:V, reg c3:L, reg stop2:cls, reg gettextf1:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg r31:V, reg basename:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg r34:V, reg r35:V, reg dirname:cls, reg dir11:*, reg dir12:V, reg p11:p(V +), reg r37:V, reg is_base:*, reg is_base1:V, reg r38:V, reg c4:L, reg _load_package_quietly:cls, reg package5:*, reg package6:V, reg p12:p(V +), reg dirdir:*, reg dirdir1:V, reg p13:p(V +), reg r41:V, reg _package_env:cls, reg package7:*, reg package8:V, reg p14:p(V +), reg r44:V, reg sort:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r45:V, reg r46:V, reg code_env:*, reg code_env1:V, reg names:cls, reg r47:V, reg p15:p(V +), reg r49:V, reg is_base2:*, reg is_base3:V, reg c5:L, reg objects_in_code:*, reg objects_in_code1:V, reg asNamespace:cls, reg package9:*, reg package10:V, reg p16:p(V +), reg r51:V, reg ns_env:*, reg ns_env1:V, reg c6:L, reg ns_env3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r52:V, reg ls:cls, reg S3Table:*, reg S3Table1:V, reg p17:p(V +), reg r54:V, reg setdiff:cls, reg sort1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r55:V, reg r56:V, reg ns_env4:*, reg ns_env5:V, reg names1:cls, reg r57:V, reg p18:p(V +), reg r59:V, reg p19:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg r62:V, reg c7:cls, reg r63:V, reg p20:p(V +), reg r65:V, reg getNamespaceInfo:cls, reg package11:*, reg package12:V, reg p21:p(V +), reg r67:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg ns_S3_methods_db:*, reg ns_S3_methods_db1:V, reg c8:V, reg c9:L, reg character:cls, reg r70:V, reg r71:V, reg paste:cls, reg ns_S3_methods_db2:*, reg ns_S3_methods_db3:V, reg c10:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r72:V, reg p22:p(V +), reg ns_S3_methods_db6:*, reg ns_S3_methods_db7:V, reg c11:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r74:V, reg p23:p(V +), reg r76:V, reg unique:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r77:V, reg r78:V, reg objects_in_code3:*, reg objects_in_code4:V, reg objects_in_ns:*, reg objects_in_ns1:V, reg ns_S3_methods:*, reg ns_S3_methods1:V, reg c12:cls, reg r79:V, reg p24:p(V +), reg r81:V, reg setdiff1:cls, reg objects_in_ns2:*, reg objects_in_ns3:V, reg p25:p(V +), reg objects_in_code5:*, reg objects_in_code6:V, reg p26:p(V +), reg r84:V, reg package13:*, reg package14:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r85:V, reg r86:V, reg missing1:cls, reg r87:V, reg c13:L, reg stop3:cls, reg r88:V, reg dir_exists1:cls, reg dir13:*, reg dir14:V, reg p27:p(V +), reg r91:V, reg r92:V, reg c14:L, reg stop4:cls, reg gettextf2:cls, reg dir15:*, reg dir16:V, reg p28:p(V +), reg r94:V, reg p29:p(V +), reg r96:V, reg basename1:cls, reg dir17:*, reg dir18:V, reg p30:p(V +), reg r99:V, reg dirname1:cls, reg dir19:*, reg dir20:V, reg p31:p(V +), reg r101:V, reg file_path_as_absolute:cls, reg dir21:*, reg dir22:V, reg p32:p(V +), reg r103:V, reg file_path1:cls, reg dir23:*, reg dir24:V, reg p33:p(V +), reg r105:V, reg dir_exists2:cls, reg code_dir2:*, reg code_dir3:V, reg p34:p(V +), reg r107:V, reg r108:V, reg c15:L, reg stop5:cls, reg gettextf3:cls, reg dir25:*, reg dir26:V, reg p35:p(V +), reg r110:V, reg p36:p(V +), reg r112:V, reg _haveRds1:cls, reg dir27:*, reg dir28:V, reg p37:p(V +), reg r115:V, reg r116:V, reg c16:L, reg stop6:cls, reg gettextf4:cls, reg dir29:*, reg dir30:V, reg p38:p(V +), reg r118:V, reg p39:p(V +), reg r120:V, reg package_name:*, reg package_name1:V, reg r122:V, reg new_env:cls, reg r123:V, reg file_path2:cls, reg dir31:*, reg dir32:V, reg p40:p(V +), reg r125:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p41:p(V +), reg r127:V, reg c17:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p42:p(V +), reg r129:V, reg r130:V, reg character1:cls, reg r131:V, reg _source_assignments_in_code_dir:cls, reg code_dir4:*, reg code_dir5:V, reg p43:p(V +), reg code_env2:*, reg code_env3:V, reg p44:p(V +), reg meta:*, reg meta1:V, reg p45:p(V +), reg r135:V, reg file_path3:cls, reg code_dir6:*, reg code_dir7:V, reg p46:p(V +), reg r137:V, reg file_test1:cls, reg sys_data_file:*, reg sys_data_file1:V, reg p47:p(V +), reg r139:V, reg c18:L, reg load:cls, reg sys_data_file2:*, reg sys_data_file3:V, reg p48:p(V +), reg code_env4:*, reg code_env5:V, reg p49:p(V +), reg r142:V, reg sort2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r144:V, reg r145:V, reg code_env6:*, reg code_env7:V, reg names2:cls, reg r146:V, reg p50:p(V +), reg r148:V, reg objects_in_code7:*, reg objects_in_code8:V, reg file_exists:cls, reg file_path4:cls, reg dir33:*, reg dir34:V, reg p51:p(V +), reg r150:V, reg p52:p(V +), reg r152:V, reg c19:L, reg c21:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r153:V, reg c24:L, reg r154:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg package_name2:*, reg package_name3:V, reg p53:p(V +), reg dirdir2:*, reg dirdir3:V, reg p54:p(V +), reg r157:V, reg p55:p(V +), reg identity:*, reg identity1:V, reg p56:p(V +), reg r160:V, reg inherits:cls, reg r161:V, reg r162:V, reg c25:L, reg c26:V, reg c28:L, reg objects_in_code9:*, reg objects_in_code10:V, reg character2:cls, reg r163:V, reg code_env8:*, reg code_env9:V, reg intersect:cls, reg objects_in_code11:*, reg objects_in_code12:V, reg p57:p(V +), reg nsInfo:*, reg nsInfo1:V, reg c29:L, reg nsInfo3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r165:V, reg p58:p(V +), reg r167:V, reg nsInfo4:*, reg nsInfo5:V, reg c30:L, reg nsInfo7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r168:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r169:V, reg i7:I, reg r170:V, reg OK:*, reg OK1:V, reg grep:cls, reg p59:*, reg p60:V, reg p61:p(V +), reg objects_in_code13:*, reg objects_in_code14:V, reg p62:p(V +), reg r173:V, reg c32:cls, reg r174:V, reg unique1:cls, reg OK2:*, reg OK3:V, reg p63:p(V +), reg r176:V, reg file_path5:cls, reg dir35:*, reg dir36:V, reg p64:p(V +), reg r178:V, reg dir_exists3:cls, reg data_dir:*, reg data_dir1:V, reg p65:p(V +), reg r180:V, reg c33:L, reg _try_quietly:cls, reg list_data_in_pkg:cls, reg dir37:*, reg dir38:V, reg p66:p(V +), reg r182:V, reg p67:p(V +), reg r184:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r185:V, reg r186:V, reg data_sets_in_code_variables:*, reg data_sets_in_code_variables1:V, reg names3:cls, reg r187:V, reg character3:cls, reg r189:V, reg Filter:cls, reg r190:cls, reg p68:p(V +), reg objects_in_code15:*, reg objects_in_code16:V, reg p69:p(V +), reg r193:V, reg is_base4:*, reg is_base5:V, reg c34:L, reg sort3:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r194:V, reg r195:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r196:V, reg r197:V, reg baseenv:cls, reg r198:V, reg names4:cls, reg r199:V, reg p70:p(V +), reg r201:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r202:V, reg r203:V, reg objects_in_code17:*, reg objects_in_code18:V, reg conceptual_base_code:*, reg conceptual_base_code1:V, reg Filter1:cls, reg _is_primitive_in_base:*, reg _is_primitive_in_base1:V, reg p71:p(V +), reg objects_in_base:*, reg objects_in_base1:V, reg p72:p(V +), reg r206:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r207:V, reg r208:V, reg c35:cls, reg r209:V, reg c36:cls, reg r210:V, reg objects_in_code19:*, reg objects_in_code20:V, reg _make_S3_primitive_generic_env:cls, reg code_env10:*, reg code_env11:V, reg p73:p(V +), reg r212:V, reg ls1:cls, reg known_env:*, reg known_env1:V, reg p74:p(V +), reg r214:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r215:V, reg r216:V, reg functions_in_code:*, reg functions_in_code1:V, reg extras:*, reg extras1:V, reg c37:cls, reg r217:V, reg known_env2:*, reg known_env3:V, reg _make_S3_primitive_nongeneric_env:cls, reg code_env12:*, reg code_env13:V, reg p75:p(V +), reg r219:V, reg ls2:cls, reg known_env4:*, reg known_env5:V, reg p76:p(V +), reg r221:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r222:V, reg r223:V, reg functions_in_code2:*, reg functions_in_code3:V, reg extras2:*, reg extras3:V, reg c38:cls, reg r224:V, reg known_env6:*, reg known_env7:V, reg lapply:cls, reg functions_in_code4:*, reg functions_in_code5:V, reg p77:p(V +), reg r226:cls, reg p78:p(V +), reg r228:V, reg functions_in_code6:*, reg functions_in_code7:V, reg l1:*, reg names__:cls, reg r229:V, reg has_namespace:*, reg has_namespace1:V, reg c39:L, reg Filter2:cls, reg r230:cls, reg p79:p(V +), reg objects_in_ns4:*, reg objects_in_ns5:V, reg p80:p(V +), reg r233:V, reg lapply1:cls, reg functions_in_ns:*, reg functions_in_ns1:V, reg p81:p(V +), reg r235:cls, reg p82:p(V +), reg r237:V, reg functions_in_ns2:*, reg functions_in_ns3:V, reg l2:*, reg names__1:cls, reg r238:V, reg lapply2:cls, reg functions_in_S3Table:*, reg functions_in_S3Table1:V, reg p83:p(V +), reg r240:cls, reg p84:p(V +), reg r242:V, reg functions_in_S3Table2:*, reg functions_in_S3Table3:V, reg l3:*, reg names__2:cls, reg r243:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r244:V, reg r245:V, reg function_args_in_code:*, reg function_args_in_code1:V, reg function_args_in_S3Table:*, reg function_args_in_S3Table1:V, reg function_args_in_ns:*, reg function_args_in_ns1:V, reg c40:cls, reg r246:V, reg duplicated:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r247:V, reg r248:V, reg tmp:*, reg tmp1:V, reg names5:cls, reg r249:V, reg p85:p(V +), reg r251:V, reg r252:V, reg tmp2:*, reg tmp3:V, reg c41:L, reg tmp5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg keep:*, reg keep1:V, reg __3:cls, reg r253:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r254:V, reg r255:V, reg function_args_in_code2:*, reg function_args_in_code3:V, reg names6:cls, reg r256:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r258:V, reg r259:V, reg _isMethodsDispatchOn:cls, reg r260:V, reg c42:L, reg isFALSE:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r261:V, reg r262:V, reg Sys_getenv:cls, reg r263:V, reg as_logical:cls, reg r264:V, reg p86:p(V +), reg r266:V, reg r267:V, reg check_S4_methods:*, reg check_S4_methods1:V, reg c43:L, reg __4:cls, reg r268:V, reg r269:cls, reg lapply3:cls, reg _get_S4_generics:cls, reg code_env14:*, reg code_env15:V, reg p87:p(V +), reg r271:V, reg p88:p(V +), reg r273:cls, reg p89:p(V +), reg r275:V, reg r276:V, reg r278:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r279:V, reg r280:V, reg missing2:cls, reg r281:V, reg r282:V, reg c44:L, reg Rd_db:cls, reg package16:*, reg package17:V, reg p90:p(V +), reg dirdir4:*, reg dirdir5:V, reg p91:p(V +), reg r285:V, reg r286:V, reg Rd_db1:cls, reg dir39:*, reg dir40:V, reg p92:p(V +), reg r288:V, reg _Rd_get_names_from_Rd_db:cls, reg db:*, reg db1:V, reg p93:p(V +), reg r290:V, reg _in_:cls, reg db_names:*, reg db_names1:V, reg p94:p(V +), reg paste1:cls, reg package_name4:*, reg package_name5:V, reg p95:p(V +), reg r293:V, reg p96:p(V +), reg r295:V, reg db2:*, reg db3:V, reg c45:L, reg db5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ind:*, reg ind1:V, reg r296:V, reg __5:cls, reg r297:V, reg lapply4:cls, reg db6:*, reg db7:V, reg p97:p(V +), reg _Rd_get_section:*, reg _Rd_get_section1:V, reg p98:p(V +), reg r300:V, reg lapply5:cls, reg db_usages:*, reg db_usages1:V, reg p99:p(V +), reg _parse_usage_as_much_as_possible:*, reg _parse_usage_as_much_as_possible1:V, reg p100:p(V +), reg r303:V, reg vapply:cls, reg db_usages2:*, reg db_usages3:V, reg p101:p(V +), reg r305:cls, reg p102:p(V +), reg r307:V, reg lapply6:cls, reg db_usages4:*, reg db_usages5:V, reg c46:L, reg db_usages7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ind2:*, reg ind3:V, reg __6:cls, reg r308:V, reg p103:p(V +), reg attr:*, reg attr1:V, reg p104:p(V +), reg r311:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r312:V, reg r313:V, reg list:cls, reg r314:V, reg character4:cls, reg r315:V, reg character5:cls, reg r316:V, reg character6:cls, reg r317:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r318:V, reg r319:V, reg list1:cls, reg r320:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r321:V, reg r322:V, reg list2:cls, reg r323:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r324:V, reg r325:V, reg list3:cls, reg r326:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r327:V, reg r328:V, reg objects_in_code_or_namespace:*, reg objects_in_code_or_namespace1:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r329:V, reg r330:V, reg compatibilityEnv:cls, reg r331:V, reg names7:cls, reg r332:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r333:V, reg r334:V, reg missing3:cls, reg r335:V, reg c47:L, reg c49:V, reg str_parse_logic:cls, reg meta2:*, reg meta3:V, reg c50:L, reg meta5:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r336:V, reg p105:p(V +), reg r338:V, reg c51:L, reg c52:V, reg c54:L, reg unlist:cls, reg data_sets_in_code_variables2:*, reg data_sets_in_code_variables3:V, reg p106:p(V +), reg r340:V, reg r341:V, reg is_base6:*, reg is_base7:V, reg c55:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r342:V, reg r343:V, reg c56:cls, reg r344:V, reg r345:V, reg c57:cls, reg r346:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r347:V, reg r348:V, reg db8:*, reg db9:V, reg names8:cls, reg r349:V, reg s1:V, reg l4:I, reg i8:I, reg i9:I, reg i10:I, reg c58:L, reg x1:V, reg db_usages8:*, reg db_usages9:V, reg c59:L, reg i14:I, reg db_usages11:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i16:I, reg dx19:V, reg nm:*, reg nm1:V, reg __8:cls, reg r350:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r351:V, reg i19:I, reg r352:V, reg exprs:*, reg exprs1:V, reg length1:cls, reg r353:V, reg r354:V, reg c60:L, reg vapply1:cls, reg exprs2:*, reg exprs3:V, reg p107:p(V +), reg is_name:*, reg is_name1:V, reg p108:p(V +), reg r358:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r359:V, reg i26:I, reg r360:V, reg ind4:*, reg ind5:V, reg any:cls, reg r361:V, reg c61:L, reg vapply2:cls, reg exprs4:*, reg exprs5:V, reg c62:L, reg exprs7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg ind6:*, reg ind7:V, reg __9:cls, reg r362:V, reg p109:p(V +), reg deparse:*, reg deparse1:V, reg p110:p(V +), reg r365:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r366:V, reg i31:I, reg r367:V, reg variables_in_usages:*, reg variables_in_usages1:V, reg variables:*, reg variables1:V, reg c63:cls, reg r368:V, reg setdiff2:cls, reg variables2:*, reg variables3:V, reg p111:p(V +), reg objects_as_in:*, reg objects_as_in1:V, reg p112:p(V +), reg r371:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r372:V, reg i34:I, reg r373:V, reg variables4:*, reg variables5:V, reg length2:cls, reg r374:V, reg c64:L, reg variables6:*, reg variables7:V, reg l5:*, reg c65:L, reg i38:I, reg variables9:V, reg l7:*, reg dr22:V, reg dc11:L, reg dx22:V, reg i40:I, reg variables11:V, reg dx23:V, reg nm2:*, reg nm3:V, reg ____:cls, reg r375:V, reg i41:I, reg exprs8:*, reg exprs9:V, reg c66:L, reg i43:I, reg exprs11:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i45:I, reg dx25:V, reg ind8:*, reg ind9:V, reg r376:V, reg __10:cls, reg r377:V, reg i46:I, reg exprs12:*, reg exprs13:V, reg c67:L, reg i48:I, reg exprs15:V, reg dr26:V, reg dc13:L, reg dx27:V, reg i50:I, reg dx28:V, reg vapply3:cls, reg exprs16:*, reg exprs17:V, reg p113:p(V +), reg is_call:*, reg is_call1:V, reg p114:p(V +), reg r380:V, reg __11:cls, reg r381:V, reg vapply4:cls, reg exprs18:*, reg exprs19:V, reg p115:p(V +), reg is_data_for_dataset:*, reg is_data_for_dataset1:V, reg p116:p(V +), reg r384:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r385:V, reg i53:I, reg r386:V, reg ind10:*, reg ind11:V, reg any1:cls, reg r387:V, reg c68:L, reg vapply5:cls, reg exprs20:*, reg exprs21:V, reg c69:L, reg exprs23:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg ind12:*, reg ind13:V, reg __12:cls, reg r388:V, reg p117:p(V +), reg r390:cls, reg p118:p(V +), reg r392:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r393:V, reg i58:I, reg r394:V, reg data_sets_in_usages:*, reg data_sets_in_usages1:V, reg data_sets:*, reg data_sets1:V, reg c70:cls, reg r395:V, reg setdiff3:cls, reg data_sets2:*, reg data_sets3:V, reg p119:p(V +), reg data_sets_in_code:*, reg data_sets_in_code1:V, reg p120:p(V +), reg r398:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r399:V, reg i61:I, reg r400:V, reg data_sets4:*, reg data_sets5:V, reg length3:cls, reg r401:V, reg c71:L, reg data_sets6:*, reg data_sets7:V, reg l8:*, reg c72:L, reg i65:I, reg data_sets9:V, reg l10:*, reg dr30:V, reg dc15:L, reg dx31:V, reg i67:I, reg data_sets11:V, reg dx32:V, reg nm4:*, reg nm5:V, reg ____1:cls, reg r402:V, reg i68:I, reg exprs24:*, reg exprs25:V, reg c73:L, reg i70:I, reg exprs27:V, reg dr32:V, reg dc16:L, reg dx33:V, reg i72:I, reg dx34:V, reg ind14:*, reg ind15:V, reg r403:V, reg __13:cls, reg r404:V, reg i73:I, reg vapply6:cls, reg exprs28:*, reg exprs29:V, reg p121:p(V +), reg _is_call_from_replacement_function_usage:*, reg _is_call_from_replacement_function_usage1:V, reg p122:p(V +), reg r407:V, reg exprs30:*, reg exprs31:V, reg c74:L, reg i75:I, reg exprs33:V, reg dr34:V, reg dc17:L, reg dx36:V, reg i77:I, reg dx37:V, reg ind16:*, reg ind17:V, reg __14:cls, reg r408:V, reg exprs34:*, reg exprs35:V, reg c75:L, reg i79:I, reg exprs37:V, reg dr36:V, reg dc18:L, reg dx38:V, reg i81:I, reg dx39:V, reg ind18:*, reg ind19:V, reg r409:V, reg __15:cls, reg r410:V, reg vapply7:cls, reg exprs38:*, reg exprs39:V, reg p123:p(V +), reg r412:cls, reg p124:p(V +), reg r414:V, reg _notin_:cls, reg functions:*, reg functions1:V, reg p125:p(V +), reg sym40:cls, reg base40:cls, reg guard40:L, reg r416:V, reg r417:V, reg c76:cls, reg r418:V, reg p126:p(V +), reg r420:V, reg exprs40:*, reg exprs41:V, reg c77:L, reg i83:I, reg exprs43:V, reg dr38:V, reg dc19:L, reg dx40:V, reg i85:I, reg dx41:V, reg ind20:*, reg ind21:V, reg __16:cls, reg r421:V, reg functions2:*, reg functions3:V, reg c78:L, reg i87:I, reg functions5:V, reg dr40:V, reg dc20:L, reg dx42:V, reg i89:I, reg dx43:V, reg ind22:*, reg ind23:V, reg __17:cls, reg r422:V, reg _transform_S3_method_markup:cls, reg sym41:cls, reg base41:cls, reg guard41:L, reg r423:V, reg r424:V, reg functions6:*, reg functions7:V, reg as_character:cls, reg r425:V, reg p127:p(V +), reg r427:V, reg _in_1:cls, reg functions8:*, reg functions9:V, reg p128:p(V +), reg functions_in_code8:*, reg functions_in_code9:V, reg p129:p(V +), reg r430:V, reg mapply:cls, reg functions10:*, reg functions11:V, reg c79:L, reg functions13:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg ind24:*, reg ind25:V, reg __18:cls, reg r431:V, reg p130:p(V +), reg exprs44:*, reg exprs45:V, reg c80:L, reg exprs47:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg ind26:*, reg ind27:V, reg __19:cls, reg r433:V, reg p131:p(V +), reg r435:cls, reg p132:p(V +), reg r437:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r438:V, reg i92:I, reg r439:V, reg replace_exprs:*, reg replace_exprs1:V, reg length4:cls, reg r440:V, reg c81:L, reg paste2:cls, reg vapply8:cls, reg replace_exprs2:*, reg replace_exprs3:V, reg p133:p(V +), reg r442:cls, reg p134:p(V +), reg r444:V, reg p135:p(V +), reg r446:V, reg _transform_S3_method_markup1:cls, reg replace_funs:*, reg replace_funs1:V, reg p136:p(V +), reg r448:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r449:V, reg i97:I, reg r450:V, reg functions14:*, reg functions15:V, reg replace_funs2:*, reg replace_funs3:V, reg c82:cls, reg r451:V, reg _in_2:cls, reg replace_funs4:*, reg replace_funs5:V, reg p137:p(V +), reg functions_in_code10:*, reg functions_in_code11:V, reg p138:p(V +), reg r454:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r455:V, reg i100:I, reg r456:V, reg ind28:*, reg ind29:V, reg any2:cls, reg r457:V, reg c83:L, reg mapply1:cls, reg replace_funs6:*, reg replace_funs7:V, reg c84:L, reg replace_funs9:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg ind30:*, reg ind31:V, reg __20:cls, reg r458:V, reg p139:p(V +), reg replace_exprs4:*, reg replace_exprs5:V, reg c85:L, reg replace_exprs7:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg ind32:*, reg ind33:V, reg __21:cls, reg r460:V, reg p140:p(V +), reg r462:cls, reg p141:p(V +), reg r464:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r465:V, reg i105:I, reg r466:V, reg bad_functions:*, reg bad_functions1:V, reg bad_replace_funs:*, reg bad_replace_funs1:V, reg c86:cls, reg r467:V, reg i106:I, reg r468:V, reg i107:I, reg do_call:cls, reg c87:*, reg c88:V, reg p142:p(V +), reg bad_functions2:*, reg bad_functions3:V, reg p143:p(V +), reg r472:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r473:V, reg i110:I, reg r474:V, reg bad_functions4:*, reg bad_functions5:V, reg length5:cls, reg r475:V, reg c89:L, reg bad_functions6:*, reg bad_functions7:V, reg l11:*, reg c90:L, reg i114:I, reg bad_functions9:V, reg l13:*, reg dr50:V, reg dc25:L, reg dx52:V, reg i116:I, reg bad_functions11:V, reg dx53:V, reg nm6:*, reg nm7:V, reg ____2:cls, reg r476:V, reg i117:I, reg grepl:cls, reg _S4_method_markup_regexp:*, reg _S4_method_markup_regexp1:V, reg p144:p(V +), reg functions16:*, reg functions17:V, reg p145:p(V +), reg r479:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r480:V, reg i120:I, reg r481:V, reg ind34:*, reg ind35:V, reg any3:cls, reg r482:V, reg c91:L, reg functions18:*, reg functions19:V, reg c92:L, reg i124:I, reg functions21:V, reg dr52:V, reg dc26:L, reg dx54:V, reg i126:I, reg dx55:V, reg ind36:*, reg ind37:V, reg r483:V, reg __22:cls, reg r484:V, reg i127:I, reg setdiff4:cls, reg functions22:*, reg functions23:V, reg p146:p(V +), reg objects_as_in2:*, reg objects_as_in3:V, reg p147:p(V +), reg r487:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r488:V, reg i130:I, reg r489:V, reg bad_functions13:*, reg bad_functions14:V, reg length6:cls, reg r490:V, reg c93:L, reg bad_functions15:*, reg bad_functions16:V, reg l14:*, reg c94:L, reg i134:I, reg bad_functions18:V, reg l16:*, reg dr54:V, reg dc27:L, reg dx57:V, reg i136:I, reg bad_functions20:V, reg dx58:V, reg nm8:*, reg nm9:V, reg ____3:cls, reg r491:V, reg i137:I, reg sym49:cls, reg base49:cls, reg guard49:L, reg r492:V, reg i140:I, reg r493:V, reg functions_in_usages:*, reg functions_in_usages1:V, reg functions24:*, reg functions25:V, reg c95:cls, reg r494:V, reg setdiff5:cls, reg objects_in_code21:*, reg objects_in_code22:V, reg p148:p(V +), reg sym50:cls, reg base50:cls, reg guard50:L, reg r496:V, reg r497:V, reg functions_in_usages2:*, reg functions_in_usages3:V, reg variables_in_usages2:*, reg variables_in_usages3:V, reg c96:cls, reg r498:V, reg p149:p(V +), reg r500:V, reg intersect1:cls, reg functions_in_code12:*, reg functions_in_code13:V, reg p150:p(V +), reg objects_in_code_not_in_usages:*, reg objects_in_code_not_in_usages1:V, reg p151:p(V +), reg r503:V, reg has_namespace2:*, reg has_namespace3:V, reg r504:V, reg c97:L, reg c99:V, reg is_base8:*, reg is_base9:V, reg r505:V, reg c100:L, reg c101:V, reg c103:L, reg character7:cls, reg r506:V, reg r507:V, reg functions_in_code_not_in_usages:*, reg functions_in_code_not_in_usages1:V, reg is_base10:*, reg is_base11:V, reg c104:L, reg setdiff6:cls, reg functions26:*, reg functions27:V, reg p152:p(V +), reg sym51:cls, reg base51:cls, reg guard51:L, reg r509:V, reg r510:V, reg sprintf:cls, reg _S3_methods_table:*, reg _S3_methods_table1:V, reg c105:L, reg dr56:V, reg dc28:L, reg dx59:V, reg dx60:V, reg __23:cls, reg r511:V, reg p153:p(V +), reg _S3_methods_table4:*, reg _S3_methods_table5:V, reg c106:L, reg dr58:V, reg dc29:L, reg dx61:V, reg dx62:V, reg __24:cls, reg r513:V, reg p154:p(V +), reg r515:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r516:V, reg r517:V, reg c107:cls, reg r518:V, reg c108:cls, reg r519:V, reg p155:p(V +), reg r521:V, reg basename2:cls, reg dir41:*, reg dir42:V, reg p156:p(V +), reg r524:V, reg pname:*, reg pname1:V, reg r525:V, reg c109:L, reg _w_o_:cls, reg functions28:*, reg functions29:V, reg p157:p(V +), reg r527:V, reg pname2:*, reg pname3:V, reg r528:V, reg c110:L, reg _w_o_1:cls, reg functions30:*, reg functions31:V, reg p158:p(V +), reg r530:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r531:V, reg r532:V, reg _isMethodsDispatchOn1:cls, reg r533:V, reg c111:L, reg setdiff7:cls, reg functions32:*, reg functions33:V, reg p159:p(V +), reg sym54:cls, reg base54:cls, reg guard54:L, reg r535:V, reg r536:V, reg _get_S4_generics1:cls, reg code_env16:*, reg code_env17:V, reg p160:p(V +), reg r538:V, reg names9:cls, reg r539:V, reg p161:p(V +), reg r541:V, reg r543:cls, reg functions34:*, reg functions35:V, reg c112:L, reg functions37:V, reg dr60:V, reg dc30:L, reg dx63:V, reg vapply9:cls, reg functions38:*, reg functions39:V, reg p162:p(V +), reg is_defunct:*, reg is_defunct1:V, reg p163:p(V +), reg r546:V, reg r547:V, reg __25:cls, reg r548:V, reg has_namespace4:*, reg has_namespace5:V, reg r549:V, reg c113:L, reg character8:cls, reg r550:V, reg r551:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r552:V, reg functions_missing_from_usages:*, reg functions_missing_from_usages1:V, reg setdiff8:cls, reg objects_in_code_not_in_usages2:*, reg objects_in_code_not_in_usages3:V, reg p164:p(V +), reg sym56:cls, reg base56:cls, reg guard56:L, reg r554:V, reg r555:V, reg functions_in_code14:*, reg functions_in_code15:V, reg data_sets_in_code2:*, reg data_sets_in_code3:V, reg c114:cls, reg r556:V, reg p165:p(V +), reg r558:V, reg c115:cls, reg r559:V, reg objects_in_code_not_in_usages4:*, reg objects_in_code_not_in_usages5:V, reg l17:*, reg attr__:cls, reg r560:V, reg functions_in_code_not_in_usages2:*, reg functions_in_code_not_in_usages3:V, reg l18:*, reg attr__1:cls, reg r561:V, reg functions_in_usages_not_in_code:*, reg functions_in_usages_not_in_code1:V, reg l19:*, reg attr__2:cls, reg r562:V, reg function_args_in_code4:*, reg function_args_in_code5:V, reg l20:*, reg attr__3:cls, reg r563:V, reg data_sets_in_usages_not_in_code:*, reg data_sets_in_usages_not_in_code1:V, reg l21:*, reg attr__4:cls, reg r564:V, reg config_val_to_logical:cls, reg Sys_getenv1:cls, reg r565:V, reg p166:p(V +), reg r567:V, reg c116:L, reg variables_in_usages_not_in_code:*, reg variables_in_usages_not_in_code1:V, reg l22:*, reg attr__5:cls, reg r568:V, reg objects_missing_from_usages:*, reg objects_missing_from_usages1:V, reg l23:*, reg attr__6:cls, reg r569:V, reg functions_missing_from_usages2:*, reg functions_missing_from_usages3:V, reg l24:*, reg attr__7:cls, reg r570:V, reg has_namespace6:*, reg has_namespace7:V, reg l25:*, reg attr__8:cls, reg r571:V, reg bad_lines:*, reg bad_lines1:V, reg l26:*, reg attr__9:cls, reg r572:V, reg l27:*, reg class__:cls, reg r573:V, reg bad_doc_objects:*, reg bad_doc_objects1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    use_values_isMissing = missing.0(use_values);
    if use_values_isMissing then L1(NULL) else L1(use_values);
  L1(use_values_orDefault):
    st `use.values` = use_values_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2() else L3(verbose);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L3(p);
  L3(verbose_orDefault):
    st verbose = verbose_orDefault;
    st has_namespace = FALSE;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L142() else L143();
  L4(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L144() else L5();
  L142():
    missing = ldf missing in base;
    r4 = dyn missing(<sym package>);
    goto L4(r4);
  L143():
    r2 = dyn base(<sym package>);
    goto L4(r2);
  L5():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L213() else L214();
  L21():
    file_path5 = ldf `file.path`;
    check L302() else D110();
  L144():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L145() else L146();
  D110():
    deopt 354 [];
  L6(r7):
    r9 = `!=`(r7, 1);
    c1 = `as.logical`(r9);
    if c1 then L149() else L7();
  L22(r86):
    c13 = `as.logical`(r86);
    if c13 then L215() else L23();
  L145():
    package1 = ld package;
    check L147() else D0();
  L146():
    r6 = dyn base1(<sym package>);
    goto L6(r6);
  L213():
    missing1 = ldf missing in base;
    r87 = dyn missing1(<sym dir>);
    goto L22(r87);
  L214():
    r85 = dyn base7(<sym dir>);
    goto L22(r85);
  L302():
    p64 = prom<V +>{
      dir35 = ld dir;
      dir36 = force? dir35;
      checkMissing(dir36);
      return dir36;
    };
    r178 = dyn file_path5(p64, "data");
    check L303() else D111();
  D0():
    deopt 9 [package1];
  D111():
    deopt 357 [r178];
  L7():
    goto L8();
  L8():
    find_package = ldf `find.package`;
    check L153() else D4();
  L23():
    goto L24();
  L24():
    dir_exists1 = ldf `dir.exists`;
    check L219() else D50();
  L147():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r8 = dyn length(package2);
    check L148() else D1();
  L149():
    stop = ldf stop;
    check L150() else D2();
  L215():
    stop3 = ldf stop;
    check L216() else D48();
  L303():
    st data_dir = r178;
    dir_exists3 = ldf `dir.exists`;
    check L304() else D112();
  D1():
    deopt 12 [r8];
  D2():
    deopt 16 [];
  D4():
    deopt 22 [];
  D48():
    deopt 162 [];
  D50():
    deopt 168 [];
  D112():
    deopt 360 [];
  L148():
    goto L6(r8);
  L150():
    r10 = dyn stop("argument 'package' must be of length 1");
    check L151() else D3();
  L153():
    p1 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p2 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r14 = dyn find_package(p1, p2);
    check L154() else D5();
  L216():
    r88 = dyn stop3("you must specify 'package' or 'dir'");
    check L217() else D49();
  L219():
    p27 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r91 = dyn dir_exists1(p27);
    check L220() else D51();
  L304():
    p65 = prom<V +>{
      data_dir = ld data_dir;
      data_dir1 = force? data_dir;
      checkMissing(data_dir1);
      return data_dir1;
    };
    r180 = dyn dir_exists3(p65);
    check L305() else D113();
  D3():
    deopt 18 [r10];
  D5():
    deopt 25 [r14];
  D49():
    deopt 164 [r88];
  D51():
    deopt 170 [r91];
  D113():
    deopt 362 [r180];
  L151():
    goto L8();
  L154():
    st dir = r14;
    file_path = ldf `file.path`;
    check L155() else D6();
  L217():
    goto L24();
  L220():
    r92 = `!`(r91);
    c14 = `as.logical`(r92);
    if c14 then L221() else L25();
  L305():
    c33 = `as.logical`(r180);
    if c33 then L306() else L41();
  D6():
    deopt 28 [];
  L25():
    goto L26();
  L26():
    basename1 = ldf basename;
    check L225() else D54();
  L41():
    character3 = ldf character;
    check L314() else D118();
  L43():
    Filter = ldf Filter;
    check L316() else D120();
  L155():
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r16 = dyn file_path(p3, "R");
    check L156() else D7();
  L221():
    stop4 = ldf stop;
    check L222() else D52();
  L306():
    _try_quietly = ldf `.try_quietly`;
    check L307() else D114();
  D7():
    deopt 31 [r16];
  D52():
    deopt 173 [];
  D54():
    deopt 181 [];
  D114():
    deopt 364 [];
  D118():
    deopt 376 [];
  D120():
    deopt 381 [];
  L156():
    st code_dir = r16;
    dir_exists = ldf `dir.exists`;
    check L157() else D8();
  L222():
    p29 = prom<V +>{
      gettextf2 = ldf gettextf;
      p28 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r94 = dyn gettextf2("directory '%s' does not exist", p28);
      return r94;
    };
    r96 = dyn stop4[, domain](p29, NA_LGL);
    check L223() else D53();
  L225():
    p30 = prom<V +>{
      dir17 = ld dir;
      dir18 = force? dir17;
      checkMissing(dir18);
      return dir18;
    };
    r99 = dyn basename1(p30);
    check L226() else D55();
  L307():
    p67 = prom<V +>{
      list_data_in_pkg = ldf list_data_in_pkg;
      p66 = prom<V +>{
        dir37 = ld dir;
        dir38 = force? dir37;
        checkMissing(dir38);
        return dir38;
      };
      r182 = dyn list_data_in_pkg[dir](p66);
      return r182;
    };
    r184 = dyn _try_quietly(p67);
    check L308() else D115();
  L314():
    r189 = dyn character3();
    check L315() else D119();
  L316():
    p68 = prom<V +>{
      r190 = clos inner1384373858;
      return r190;
    };
    p69 = prom<V +>{
      objects_in_code15 = ld objects_in_code;
      objects_in_code16 = force? objects_in_code15;
      checkMissing(objects_in_code16);
      return objects_in_code16;
    };
    r193 = dyn Filter(p68, p69);
    check L317() else D121();
  D8():
    deopt 34 [];
  D53():
    deopt 177 [r96];
  D55():
    deopt 183 [r99];
  D115():
    deopt 366 [r184];
  D119():
    deopt 377 [r189];
  D121():
    deopt 384 [r193];
  L157():
    p4 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r18 = dyn dir_exists(p4);
    check L158() else D9();
  L223():
    goto L26();
  L226():
    st package_name = r99;
    dirname1 = ldf dirname;
    check L227() else D56();
  L308():
    st data_sets_in_code_variables = r184;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L309() else L310();
  L315():
    st data_sets_in_code_variables = r189;
    st data_sets_in_code = r189;
    goto L43();
  L317():
    st functions_in_code = r193;
    is_base4 = ld is_base;
    check L318() else D122();
  D9():
    deopt 36 [r18];
  D56():
    deopt 186 [];
  D122():
    deopt 386 [is_base4];
  L42(r186):
    st data_sets_in_code = r186;
    goto L43();
  L158():
    r19 = `!`(r18);
    c2 = `as.logical`(r19);
    if c2 then L159() else L9();
  L227():
    p31 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r101 = dyn dirname1(p31);
    check L228() else D57();
  L309():
    data_sets_in_code_variables = ld data_sets_in_code_variables;
    check L311() else D116();
  L310():
    r185 = dyn base11(<sym data_sets_in_code_variables>);
    goto L42(r185);
  L318():
    is_base5 = force? is_base4;
    checkMissing(is_base5);
    c34 = `as.logical`(is_base5);
    if c34 then L319() else L44();
  D57():
    deopt 188 [r101];
  D116():
    deopt 370 [data_sets_in_code_variables];
  L9():
    goto L10();
  L10():
    _haveRds = ldf `.haveRds`;
    check L163() else D12();
  L44():
    goto L49();
  L49():
    lapply = ldf lapply;
    check L354() else D148();
  L159():
    stop1 = ldf stop;
    check L160() else D10();
  L228():
    st dirdir = r101;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L229() else D58();
  L311():
    data_sets_in_code_variables1 = force? data_sets_in_code_variables;
    checkMissing(data_sets_in_code_variables1);
    names3 = ldf names in base;
    r187 = dyn names3(data_sets_in_code_variables1);
    check L312() else D117();
  L319():
    sort3 = ldf sort;
    check L320() else D123();
  D10():
    deopt 39 [];
  D12():
    deopt 47 [];
  D58():
    deopt 191 [];
  D117():
    deopt 373 [r187];
  D123():
    deopt 389 [];
  D148():
    deopt 474 [];
  L160():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r21 = dyn gettextf("directory '%s' does not contain R code", p5);
      return r21;
    };
    r23 = dyn stop1[, domain](p6, NA_LGL);
    check L161() else D11();
  L163():
    p7 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r26 = dyn _haveRds(p7);
    check L164() else D13();
  L229():
    p32 = prom<V +>{
      dir21 = ld dir;
      dir22 = force? dir21;
      checkMissing(dir22);
      return dir22;
    };
    r103 = dyn file_path_as_absolute(p32);
    check L230() else D59();
  L312():
    goto L42(r187);
  L320():
    p70 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r195):
      return r195;
    L2():
      sym13 = ldf baseenv;
      base13 = ldf baseenv in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L3():
      r194 = dyn base12(<lang baseenv()>);
      goto L0(r194);
    L1(r197):
      names4 = ldf names in base;
      r199 = dyn names4(r197);
      goto L0(r199);
    L4():
      baseenv = ldf baseenv in base;
      r198 = dyn baseenv();
      goto L1(r198);
    L5():
      r196 = dyn base13();
      goto L1(r196);
    };
    r201 = dyn sort3(p70);
    check L321() else D124();
  L354():
    p77 = prom<V +>{
      functions_in_code4 = ld functions_in_code;
      functions_in_code5 = force? functions_in_code4;
      checkMissing(functions_in_code5);
      return functions_in_code5;
    };
    p78 = prom<V +>{
      r226 = clos inner1384373858;
      return r226;
    };
    r228 = dyn lapply(p77, p78);
    check L355() else D149();
  D11():
    deopt 43 [r23];
  D13():
    deopt 49 [r26];
  D59():
    deopt 193 [r103];
  D124():
    deopt 391 [r201];
  D149():
    deopt 477 [r228];
  L161():
    goto L10();
  L164():
    r27 = `!`(r26);
    c3 = `as.logical`(r27);
    if c3 then L165() else L11();
  L230():
    st dir = r103;
    file_path1 = ldf `file.path`;
    check L231() else D60();
  L321():
    st objects_in_base = r201;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L322() else L323();
  L355():
    st function_args_in_code = r228;
    functions_in_code6 = ld functions_in_code;
    check L356() else D150();
  D60():
    deopt 196 [];
  D150():
    deopt 479 [functions_in_code6];
  L11():
    goto L12();
  L12():
    basename = ldf basename;
    check L169() else D16();
  L45(r203):
    st objects_in_code = r203;
    objects_in_code19 = ld objects_in_code;
    check L332() else D131();
  L165():
    stop2 = ldf stop;
    check L166() else D14();
  L231():
    p33 = prom<V +>{
      dir23 = ld dir;
      dir24 = force? dir23;
      checkMissing(dir24);
      return dir24;
    };
    r105 = dyn file_path1(p33, "R");
    check L232() else D61();
  L322():
    objects_in_code17 = ld objects_in_code;
    check L324() else D125();
  L323():
    r202 = dyn base14(<sym objects_in_code>, <sym conceptual_base_code>, <lang Filter(.is_primitive_in_base, objects_in_base)>, <lang c(".First.lib", ".Last.lib", ".Random.seed", ".onLoad", ".onAttach", ".onDetach", ".onUnload")>);
    goto L45(r202);
  L356():
    functions_in_code7 = force? functions_in_code6;
    checkMissing(functions_in_code7);
    l1 = ld function_args_in_code;
    names__ = ldf `names<-`;
    check L357() else D151();
  D14():
    deopt 52 [];
  D16():
    deopt 60 [];
  D61():
    deopt 199 [r105];
  D125():
    deopt 395 [objects_in_code17];
  D131():
    deopt 418 [objects_in_code19];
  D151():
    deopt 482 [functions_in_code7, l1, functions_in_code7];
  L166():
    p9 = prom<V +>{
      gettextf1 = ldf gettextf;
      p8 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r29 = dyn gettextf1("directory '%s' does not contain Rd objects", p8);
      return r29;
    };
    r31 = dyn stop2[, domain](p9, NA_LGL);
    check L167() else D15();
  L169():
    p10 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r34 = dyn basename(p10);
    check L170() else D17();
  L232():
    st code_dir = r105;
    dir_exists2 = ldf `dir.exists`;
    check L233() else D62();
  L324():
    objects_in_code18 = force? objects_in_code17;
    checkMissing(objects_in_code18);
    conceptual_base_code = ld conceptual_base_code;
    check L325() else D126();
  L332():
    objects_in_code20 = force? objects_in_code19;
    checkMissing(objects_in_code20);
    st objects_in_code_or_namespace = objects_in_code20;
    _make_S3_primitive_generic_env = ldf `.make_S3_primitive_generic_env`;
    check L333() else D132();
  L357():
    r229 = dyn names__(l1, NULL, functions_in_code7);
    check L358() else D152();
  D15():
    deopt 56 [r31];
  D17():
    deopt 62 [r34];
  D62():
    deopt 202 [];
  D126():
    deopt 397 [conceptual_base_code];
  D132():
    deopt 422 [];
  D152():
    deopt 484 [functions_in_code7, r229];
  L167():
    goto L12();
  L170():
    r35 = `==`(r34, "base");
    st is_base = r35;
    dirname = ldf dirname;
    check L171() else D18();
  L233():
    p34 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r107 = dyn dir_exists2(p34);
    check L234() else D63();
  L325():
    conceptual_base_code1 = force? conceptual_base_code;
    checkMissing(conceptual_base_code1);
    Filter1 = ldf Filter;
    check L326() else D127();
  L333():
    p73 = prom<V +>{
      code_env10 = ld code_env;
      code_env11 = force? code_env10;
      checkMissing(code_env11);
      return code_env11;
    };
    r212 = dyn _make_S3_primitive_generic_env[, fixup](p73, TRUE);
    check L334() else D133();
  L358():
    st function_args_in_code = r229;
    has_namespace = ld has_namespace;
    check L359() else D153();
  D18():
    deopt 67 [];
  D63():
    deopt 204 [r107];
  D127():
    deopt 400 [];
  D133():
    deopt 426 [r212];
  D153():
    deopt 486 [has_namespace];
  L171():
    p11 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r37 = dyn dirname(p11);
    check L172() else D19();
  L234():
    r108 = `!`(r107);
    c15 = `as.logical`(r108);
    if c15 then L235() else L27();
  L326():
    p71 = prom<V +>{
      _is_primitive_in_base = ld `.is_primitive_in_base`;
      _is_primitive_in_base1 = force? _is_primitive_in_base;
      checkMissing(_is_primitive_in_base1);
      return _is_primitive_in_base1;
    };
    p72 = prom<V +>{
      objects_in_base = ld objects_in_base;
      objects_in_base1 = force? objects_in_base;
      checkMissing(objects_in_base1);
      return objects_in_base1;
    };
    r206 = dyn Filter1(p71, p72);
    check L327() else D128();
  L334():
    st known_env = r212;
    ls1 = ldf ls;
    check L335() else D134();
  L359():
    has_namespace1 = force? has_namespace;
    checkMissing(has_namespace1);
    c39 = `as.logical`(has_namespace1);
    if c39 then L360() else L50();
  D19():
    deopt 69 [r37];
  D128():
    deopt 403 [r206];
  D134():
    deopt 429 [];
  L27():
    goto L28();
  L28():
    _haveRds1 = ldf `.haveRds`;
    check L239() else D66();
  L50():
    goto L54();
  L54():
    sym21 = ldf `.isMethodsDispatchOn`;
    base21 = ldf `.isMethodsDispatchOn` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L391() else L392();
  L172():
    st dirdir = r37;
    is_base = ld is_base;
    check L173() else D20();
  L235():
    stop5 = ldf stop;
    check L236() else D64();
  L327():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L328() else L329();
  L335():
    p74 = prom<V +>{
      known_env = ld known_env;
      known_env1 = force? known_env;
      checkMissing(known_env1);
      return known_env1;
    };
    r214 = dyn ls1[, `all.names`](p74, TRUE);
    check L336() else D135();
  L360():
    Filter2 = ldf Filter;
    check L361() else D154();
  D20():
    deopt 71 [is_base];
  D64():
    deopt 207 [];
  D66():
    deopt 215 [];
  D135():
    deopt 433 [r214];
  D154():
    deopt 489 [];
  L46(r208):
    c36 = ldf c in base;
    r210 = dyn c36(objects_in_code18, conceptual_base_code1, r206, r208);
    check L331() else D130();
  L55(r259):
    c42 = `as.logical`(r259);
    if c42 then L394() else L56();
  L173():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    r38 = `!`(is_base1);
    c4 = `as.logical`(r38);
    if c4 then L174() else L13();
  L236():
    p36 = prom<V +>{
      gettextf3 = ldf gettextf;
      p35 = prom<V +>{
        dir25 = ld dir;
        dir26 = force? dir25;
        checkMissing(dir26);
        return dir26;
      };
      r110 = dyn gettextf3("directory '%s' does not contain R code", p35);
      return r110;
    };
    r112 = dyn stop5[, domain](p36, NA_LGL);
    check L237() else D65();
  L239():
    p37 = prom<V +>{
      dir27 = ld dir;
      dir28 = force? dir27;
      checkMissing(dir28);
      return dir28;
    };
    r115 = dyn _haveRds1(p37);
    check L240() else D67();
  L328():
    c35 = ldf c in base;
    r209 = dyn c35(".First.lib", ".Last.lib", ".Random.seed", ".onLoad", ".onAttach", ".onDetach", ".onUnload");
    check L330() else D129();
  L329():
    r207 = dyn base15(".First.lib", ".Last.lib", ".Random.seed", ".onLoad", ".onAttach", ".onDetach", ".onUnload");
    goto L46(r207);
  L336():
    st extras = r214;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L337() else L338();
  L361():
    p79 = prom<V +>{
      r230 = clos inner1384373858;
      return r230;
    };
    p80 = prom<V +>{
      objects_in_ns4 = ld objects_in_ns;
      objects_in_ns5 = force? objects_in_ns4;
      checkMissing(objects_in_ns5);
      return objects_in_ns5;
    };
    r233 = dyn Filter2(p79, p80);
    check L362() else D155();
  L391():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r260 = dyn _isMethodsDispatchOn();
    check L393() else D176();
  L392():
    r258 = dyn base21();
    goto L55(r258);
  D65():
    deopt 211 [r112];
  D67():
    deopt 217 [r115];
  D129():
    deopt 414 [r209];
  D130():
    deopt 416 [r210];
  D155():
    deopt 492 [r233];
  D176():
    deopt 555 [r260];
  L13():
    goto L14();
  L14():
    _package_env = ldf `.package_env`;
    check L178() else D23();
  L47(r216):
    st functions_in_code = r216;
    known_env2 = ld known_env;
    check L342() else D139();
  L56():
    goto L59();
  L59():
    r278 = clos inner1260482719;
    st check_codoc = r278;
    sym23 = ldf missing;
    base23 = ldf missing in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L405() else L406();
  L174():
    _load_package_quietly = ldf `.load_package_quietly`;
    check L175() else D21();
  L237():
    goto L28();
  L240():
    r116 = `!`(r115);
    c16 = `as.logical`(r116);
    if c16 then L241() else L29();
  L330():
    goto L46(r209);
  L331():
    goto L45(r210);
  L337():
    functions_in_code = ld functions_in_code;
    check L339() else D136();
  L338():
    r215 = dyn base16(<sym functions_in_code>, <sym extras>);
    goto L47(r215);
  L362():
    st functions_in_ns = r233;
    lapply1 = ldf lapply;
    check L363() else D156();
  L393():
    goto L55(r260);
  L394():
    isFALSE = ldf isFALSE;
    check L395() else D177();
  D21():
    deopt 75 [];
  D23():
    deopt 82 [];
  D136():
    deopt 437 [functions_in_code];
  D139():
    deopt 444 [known_env2];
  D156():
    deopt 495 [];
  D177():
    deopt 557 [];
  L29():
    goto L30();
  L30():
    package_name = ld package_name;
    check L245() else D70();
  L60(r280):
    r282 = `!`(r280);
    c44 = `as.logical`(r282);
    if c44 then L407() else L61();
  L175():
    p12 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p13 = prom<V +>{
      dirdir = ld dirdir;
      dirdir1 = force? dirdir;
      checkMissing(dirdir1);
      return dirdir1;
    };
    r41 = dyn _load_package_quietly(p12, p13);
    check L176() else D22();
  L178():
    p14 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r44 = dyn _package_env(p14);
    check L179() else D24();
  L241():
    stop6 = ldf stop;
    check L242() else D68();
  L339():
    functions_in_code1 = force? functions_in_code;
    checkMissing(functions_in_code1);
    extras = ld extras;
    check L340() else D137();
  L342():
    known_env3 = force? known_env2;
    checkMissing(known_env3);
    st code_env = known_env3;
    _make_S3_primitive_nongeneric_env = ldf `.make_S3_primitive_nongeneric_env`;
    check L343() else D140();
  L363():
    p81 = prom<V +>{
      functions_in_ns = ld functions_in_ns;
      functions_in_ns1 = force? functions_in_ns;
      checkMissing(functions_in_ns1);
      return functions_in_ns1;
    };
    p82 = prom<V +>{
      r235 = clos inner1384373858;
      return r235;
    };
    r237 = dyn lapply1(p81, p82);
    check L364() else D157();
  L395():
    p86 = prom<V +>{
      sym22 = ldf `as.logical`;
      base22 = ldf `as.logical` in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r262):
      return r262;
    L1():
      Sys_getenv = ldf `Sys.getenv`;
      r263 = dyn Sys_getenv("_R_CHECK_CODOC_S4_METHODS_");
      as_logical = ldf `as.logical` in base;
      r264 = dyn as_logical(r263);
      goto L0(r264);
    L2():
      r261 = dyn base22(<lang Sys.getenv("_R_CHECK_CODOC_S4_METHODS_")>);
      goto L0(r261);
    };
    r266 = dyn isFALSE(p86);
    check L396() else D178();
  L405():
    missing2 = ldf missing in base;
    r281 = dyn missing2(<sym package>);
    goto L60(r281);
  L406():
    r279 = dyn base23(<sym package>);
    goto L60(r279);
  D22():
    deopt 78 [r41];
  D24():
    deopt 84 [r44];
  D68():
    deopt 220 [];
  D70():
    deopt 227 [package_name];
  D137():
    deopt 439 [extras];
  D140():
    deopt 448 [];
  D157():
    deopt 498 [r237];
  D178():
    deopt 559 [r266];
  L61():
    Rd_db1 = ldf Rd_db;
    check L411() else D186();
  L62(r286):
    st db = r286;
    _Rd_get_names_from_Rd_db = ldf `.Rd_get_names_from_Rd_db`;
    check L413() else D188();
  L176():
    goto L14();
  L179():
    st code_env = r44;
    sort = ldf sort;
    check L180() else D25();
  L242():
    p39 = prom<V +>{
      gettextf4 = ldf gettextf;
      p38 = prom<V +>{
        dir29 = ld dir;
        dir30 = force? dir29;
        checkMissing(dir30);
        return dir30;
      };
      r118 = dyn gettextf4("directory '%s' does not contain Rd objects", p38);
      return r118;
    };
    r120 = dyn stop6[, domain](p39, NA_LGL);
    check L243() else D69();
  L245():
    package_name1 = force? package_name;
    checkMissing(package_name1);
    r122 = `==`(package_name1, "base");
    st is_base = r122;
    new_env = ldf `new.env`;
    check L246() else D71();
  L340():
    extras1 = force? extras;
    checkMissing(extras1);
    c37 = ldf c in base;
    r217 = dyn c37(functions_in_code1, extras1);
    check L341() else D138();
  L343():
    p75 = prom<V +>{
      code_env12 = ld code_env;
      code_env13 = force? code_env12;
      checkMissing(code_env13);
      return code_env13;
    };
    r219 = dyn _make_S3_primitive_nongeneric_env(p75);
    check L344() else D141();
  L364():
    st function_args_in_ns = r237;
    functions_in_ns2 = ld functions_in_ns;
    check L365() else D158();
  L396():
    r267 = `!`(r266);
    st check_S4_methods = r267;
    check_S4_methods = ld check_S4_methods;
    check L397() else D179();
  L407():
    Rd_db = ldf Rd_db;
    check L408() else D184();
  D25():
    deopt 87 [];
  D69():
    deopt 224 [r120];
  D71():
    deopt 233 [];
  D138():
    deopt 442 [r217];
  D141():
    deopt 450 [r219];
  D158():
    deopt 500 [functions_in_ns2];
  D179():
    deopt 562 [check_S4_methods];
  D184():
    deopt 590 [];
  D186():
    deopt 596 [];
  D188():
    deopt 602 [];
  L180():
    p15 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      names = ldf names in base;
      r47 = dyn names(code_env1);
      goto L0(r47);
    L2():
      r45 = dyn base2(<sym code_env>);
      goto L0(r45);
    };
    r49 = dyn sort(p15);
    check L181() else D26();
  L243():
    goto L30();
  L246():
    r123 = dyn new_env[hash](TRUE);
    check L247() else D72();
  L341():
    goto L47(r217);
  L344():
    st known_env = r219;
    ls2 = ldf ls;
    check L345() else D142();
  L365():
    functions_in_ns3 = force? functions_in_ns2;
    checkMissing(functions_in_ns3);
    l2 = ld function_args_in_ns;
    names__1 = ldf `names<-`;
    check L366() else D159();
  L397():
    check_S4_methods1 = force? check_S4_methods;
    checkMissing(check_S4_methods1);
    c43 = `as.logical`(check_S4_methods1);
    if c43 then L398() else L57();
  L408():
    p90 = prom<V +>{
      package16 = ld package;
      package17 = force? package16;
      checkMissing(package17);
      return package17;
    };
    p91 = prom<V +>{
      dirdir4 = ld dirdir;
      dirdir5 = force? dirdir4;
      checkMissing(dirdir5);
      return dirdir5;
    };
    r285 = dyn Rd_db[, `lib.loc`](p90, p91);
    check L409() else D185();
  L411():
    p92 = prom<V +>{
      dir39 = ld dir;
      dir40 = force? dir39;
      checkMissing(dir40);
      return dir40;
    };
    r288 = dyn Rd_db1[dir](p92);
    check L412() else D187();
  L413():
    p93 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r290 = dyn _Rd_get_names_from_Rd_db(p93);
    check L414() else D189();
  D26():
    deopt 89 [r49];
  D72():
    deopt 236 [r123];
  D142():
    deopt 453 [];
  D159():
    deopt 503 [functions_in_ns3, l2, functions_in_ns3];
  D185():
    deopt 594 [r285];
  D187():
    deopt 599 [r288];
  D189():
    deopt 604 [r290];
  L57():
    goto L58(NULL);
  L58(r276):
    goto L59();
  L181():
    st objects_in_code = r49;
    is_base2 = ld is_base;
    check L182() else D27();
  L247():
    st code_env = r123;
    file_path2 = ldf `file.path`;
    check L248() else D73();
  L345():
    p76 = prom<V +>{
      known_env4 = ld known_env;
      known_env5 = force? known_env4;
      checkMissing(known_env5);
      return known_env5;
    };
    r221 = dyn ls2[, `all.names`](p76, TRUE);
    check L346() else D143();
  L366():
    r238 = dyn names__1(l2, NULL, functions_in_ns3);
    check L367() else D160();
  L398():
    __4 = ldf `::`;
    check L399() else D180();
  L409():
    goto L62(r285);
  L412():
    goto L62(r288);
  L414():
    st db_names = r290;
    _in_ = ldf `%in%`;
    check L415() else D190();
  D27():
    deopt 91 [is_base2];
  D73():
    deopt 239 [];
  D143():
    deopt 457 [r221];
  D160():
    deopt 505 [functions_in_ns3, r238];
  D180():
    deopt 565 [];
  D190():
    deopt 607 [];
  L182():
    is_base3 = force? is_base2;
    checkMissing(is_base3);
    c5 = `as.logical`(is_base3);
    if c5 then L183() else L15();
  L248():
    p40 = prom<V +>{
      dir31 = ld dir;
      dir32 = force? dir31;
      checkMissing(dir32);
      return dir32;
    };
    r125 = dyn file_path2(p40, "DESCRIPTION");
    check L249() else D74();
  L346():
    st extras = r221;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L347() else L348();
  L367():
    st function_args_in_ns = r238;
    lapply2 = ldf lapply;
    check L368() else D161();
  L399():
    r268 = dyn __4("methods", "unRematchDefinition");
    check L400() else D181();
  L415():
    p94 = prom<V +>{
      db_names = ld db_names;
      db_names1 = force? db_names;
      checkMissing(db_names1);
      return db_names1;
    };
    p96 = prom<V +>{
      paste1 = ldf paste0;
      p95 = prom<V +>{
        package_name4 = ld package_name;
        package_name5 = force? package_name4;
        checkMissing(package_name5);
        return package_name5;
      };
      r293 = dyn paste1(p95, "-defunct");
      return r293;
    };
    r295 = dyn _in_(p94, p96);
    check L416() else D191();
  D74():
    deopt 242 [r125];
  D161():
    deopt 508 [];
  D181():
    deopt 568 [r268];
  D191():
    deopt 610 [r295];
  L15():
    st has_namespace = TRUE;
    asNamespace = ldf asNamespace;
    check L186() else D29();
  L16():
    package13 = ld package;
    check L211() else D47();
  L48(r223):
    st functions_in_code = r223;
    known_env6 = ld known_env;
    check L352() else D147();
  L183():
    objects_in_code = ld objects_in_code;
    check L184() else D28();
  L249():
    st dfile = r125;
    file_test = ldf file_test;
    check L250() else D75();
  L347():
    functions_in_code2 = ld functions_in_code;
    check L349() else D144();
  L348():
    r222 = dyn base17(<sym functions_in_code>, <sym extras>);
    goto L48(r222);
  L368():
    p83 = prom<V +>{
      functions_in_S3Table = ld functions_in_S3Table;
      functions_in_S3Table1 = force? functions_in_S3Table;
      checkMissing(functions_in_S3Table1);
      return functions_in_S3Table1;
    };
    p84 = prom<V +>{
      r240 = clos inner1384373858;
      return r240;
    };
    r242 = dyn lapply2(p83, p84);
    check L369() else D162();
  L400():
    st unRematchDef = r268;
    r269 = clos inner2296048169;
    st get_formals_from_method_definition = r269;
    lapply3 = ldf lapply;
    check L401() else D182();
  L416():
    st ind = r295;
    db2 = ld db;
    check L417() else D192();
  D28():
    deopt 93 [objects_in_code];
  D29():
    deopt 100 [];
  D47():
    deopt 155 [package13];
  D75():
    deopt 245 [];
  D144():
    deopt 461 [functions_in_code2];
  D147():
    deopt 468 [known_env6];
  D162():
    deopt 511 [r242];
  D182():
    deopt 574 [];
  D192():
    deopt 612 [db2];
  L184():
    objects_in_code1 = force? objects_in_code;
    checkMissing(objects_in_code1);
    st objects_in_code_or_namespace = objects_in_code1;
    goto L16();
  L186():
    p16 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r51 = dyn asNamespace(p16);
    check L187() else D30();
  L211():
    package14 = force? package13;
    checkMissing(package14);
    st package_name = package14;
    goto L21();
  L250():
    p41 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r127 = dyn file_test("-f", p41);
    check L251() else D76();
  L349():
    functions_in_code3 = force? functions_in_code2;
    checkMissing(functions_in_code3);
    extras2 = ld extras;
    check L350() else D145();
  L352():
    known_env7 = force? known_env6;
    checkMissing(known_env7);
    st code_env = known_env7;
    goto L49();
  L369():
    st function_args_in_S3Table = r242;
    functions_in_S3Table2 = ld functions_in_S3Table;
    check L370() else D163();
  L401():
    p88 = prom<V +>{
      _get_S4_generics = ldf `.get_S4_generics`;
      p87 = prom<V +>{
        code_env14 = ld code_env;
        code_env15 = force? code_env14;
        checkMissing(code_env15);
        return code_env15;
      };
      r271 = dyn _get_S4_generics(p87);
      return r271;
    };
    p89 = prom<V +>{
      r273 = clos inner1384373858;
      return r273;
    };
    r275 = dyn lapply3(p88, p89);
    check L402() else D183();
  L417():
    db3 = force? db2;
    checkMissing(db3);
    c45 = `is.object`(db3);
    if c45 then L418() else L419(db3);
  D30():
    deopt 102 [r51];
  D76():
    deopt 248 [r127];
  D145():
    deopt 463 [extras2];
  D163():
    deopt 513 [functions_in_S3Table2];
  D183():
    deopt 577 [r275];
  L63(dx13):
    st db = dx13;
    lapply4 = ldf lapply;
    check L422() else D194();
  L187():
    st ns_env = r51;
    ns_env = ld ns_env;
    check L188() else D31();
  L251():
    c17 = `as.logical`(r127);
    if c17 then L252() else L31();
  L350():
    extras3 = force? extras2;
    checkMissing(extras3);
    c38 = ldf c in base;
    r224 = dyn c38(functions_in_code3, extras3);
    check L351() else D146();
  L370():
    functions_in_S3Table3 = force? functions_in_S3Table2;
    checkMissing(functions_in_S3Table3);
    l3 = ld function_args_in_S3Table;
    names__2 = ldf `names<-`;
    check L371() else D164();
  L402():
    goto L58(r275);
  L418():
    dr12 = tryDispatchBuiltin.1("[", db3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L420() else L419(dr12);
  L419(db5):
    ind = ld ind;
    check L421() else D193();
  D31():
    deopt 104 [ns_env];
  D146():
    deopt 466 [r224];
  D164():
    deopt 516 [functions_in_S3Table3, l3, functions_in_S3Table3];
  D193():
    deopt 614 [db5, ind];
  D194():
    deopt 620 [];
  L31():
    character1 = ldf character;
    check L256() else D79();
  L32(r130):
    st meta = r130;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L258() else D81();
  L188():
    ns_env1 = force? ns_env;
    checkMissing(ns_env1);
    c6 = `is.object`(ns_env1);
    if c6 then L189() else L190(ns_env1);
  L252():
    _read_description = ldf `.read_description`;
    check L253() else D77();
  L351():
    goto L48(r224);
  L371():
    r243 = dyn names__2(l3, NULL, functions_in_S3Table3);
    check L372() else D165();
  L420():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L63(dx12);
  L421():
    ind1 = force? ind;
    checkMissing(ind1);
    r296 = `!`(ind1);
    __5 = ldf `[` in base;
    r297 = dyn __5(db5, r296);
    goto L63(r297);
  L422():
    p97 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    p98 = prom<V +>{
      _Rd_get_section = ld `.Rd_get_section`;
      _Rd_get_section1 = force? _Rd_get_section;
      checkMissing(_Rd_get_section1);
      return _Rd_get_section1;
    };
    r300 = dyn lapply4(p97, p98, "usage");
    check L423() else D195();
  D77():
    deopt 250 [];
  D79():
    deopt 254 [];
  D81():
    deopt 258 [];
  D165():
    deopt 518 [functions_in_S3Table3, r243];
  D195():
    deopt 624 [r300];
  L17(dx1):
    st S3Table = dx1;
    ls = ldf ls;
    check L192() else D32();
  L189():
    dr = tryDispatchBuiltin.1("[[", ns_env1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L191() else L190(dr);
  L190(ns_env3):
    __ = ldf `[[` in base;
    r52 = dyn __(ns_env3, ".__S3MethodsTable__.");
    goto L17(r52);
  L253():
    p42 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r129 = dyn _read_description(p42);
    check L254() else D78();
  L256():
    r131 = dyn character1();
    check L257() else D80();
  L258():
    p43 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    p44 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    p45 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r135 = dyn _source_assignments_in_code_dir(p43, p44, p45);
    check L259() else D82();
  L372():
    st function_args_in_S3Table = r243;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L373() else L374();
  L423():
    st db_usages = r300;
    lapply5 = ldf lapply;
    check L424() else D196();
  D32():
    deopt 111 [];
  D78():
    deopt 252 [r129];
  D80():
    deopt 255 [r131];
  D82():
    deopt 262 [r135];
  D196():
    deopt 627 [];
  L51(r245):
    st tmp = r245;
    duplicated = ldf duplicated;
    check L379() else D170();
  L191():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L192():
    p17 = prom<V +>{
      S3Table = ld S3Table;
      S3Table1 = force? S3Table;
      checkMissing(S3Table1);
      return S3Table1;
    };
    r54 = dyn ls[, `all.names`](p17, TRUE);
    check L193() else D33();
  L254():
    goto L32(r129);
  L257():
    goto L32(r131);
  L259():
    file_path3 = ldf `file.path`;
    check L260() else D83();
  L373():
    function_args_in_code = ld function_args_in_code;
    check L375() else D166();
  L374():
    r244 = dyn base18(<sym function_args_in_code>, <sym function_args_in_S3Table>, <sym function_args_in_ns>);
    goto L51(r244);
  L424():
    p99 = prom<V +>{
      db_usages = ld db_usages;
      db_usages1 = force? db_usages;
      checkMissing(db_usages1);
      return db_usages1;
    };
    p100 = prom<V +>{
      _parse_usage_as_much_as_possible = ld `.parse_usage_as_much_as_possible`;
      _parse_usage_as_much_as_possible1 = force? _parse_usage_as_much_as_possible;
      checkMissing(_parse_usage_as_much_as_possible1);
      return _parse_usage_as_much_as_possible1;
    };
    r303 = dyn lapply5(p99, p100);
    check L425() else D197();
  D33():
    deopt 115 [r54];
  D83():
    deopt 264 [];
  D166():
    deopt 522 [function_args_in_code];
  D170():
    deopt 532 [];
  D197():
    deopt 630 [r303];
  L193():
    st functions_in_S3Table = r54;
    setdiff = ldf setdiff;
    check L194() else D34();
  L260():
    p46 = prom<V +>{
      code_dir6 = ld code_dir;
      code_dir7 = force? code_dir6;
      checkMissing(code_dir7);
      return code_dir7;
    };
    r137 = dyn file_path3(p46, "sysdata.rda");
    check L261() else D84();
  L375():
    function_args_in_code1 = force? function_args_in_code;
    checkMissing(function_args_in_code1);
    function_args_in_S3Table = ld function_args_in_S3Table;
    check L376() else D167();
  L379():
    p85 = prom<V +>{
      sym19 = ldf names;
      base19 = ldf names in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r248):
      return r248;
    L1():
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      names5 = ldf names in base;
      r249 = dyn names5(tmp1);
      goto L0(r249);
    L2():
      r247 = dyn base19(<sym tmp>);
      goto L0(r247);
    };
    r251 = dyn duplicated(p85);
    check L380() else D171();
  L425():
    st db_usages = r303;
    vapply = ldf vapply;
    check L426() else D198();
  D34():
    deopt 118 [];
  D84():
    deopt 267 [r137];
  D167():
    deopt 524 [function_args_in_S3Table];
  D171():
    deopt 534 [r251];
  D198():
    deopt 633 [];
  L194():
    p19 = prom<V +>{
      sort1 = ldf sort;
      p18 = prom<V +>{
        sym3 = ldf names;
        base3 = ldf names in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        ns_env4 = ld ns_env;
        ns_env5 = force? ns_env4;
        checkMissing(ns_env5);
        names1 = ldf names in base;
        r57 = dyn names1(ns_env5);
        goto L0(r57);
      L2():
        r55 = dyn base3(<sym ns_env>);
        goto L0(r55);
      };
      r59 = dyn sort1(p18);
      return r59;
    };
    p20 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      c7 = ldf c in base;
      r63 = dyn c7(".__NAMESPACE__.", ".__S3MethodsTable__.");
      goto L0(r63);
    L2():
      r61 = dyn base4(".__NAMESPACE__.", ".__S3MethodsTable__.");
      goto L0(r61);
    };
    r65 = dyn setdiff(p19, p20);
    check L195() else D35();
  L261():
    st sys_data_file = r137;
    file_test1 = ldf file_test;
    check L262() else D85();
  L376():
    function_args_in_S3Table1 = force? function_args_in_S3Table;
    checkMissing(function_args_in_S3Table1);
    function_args_in_ns = ld function_args_in_ns;
    check L377() else D168();
  L380():
    r252 = `!`(r251);
    st keep = r252;
    tmp2 = ld tmp;
    check L381() else D172();
  L426():
    p101 = prom<V +>{
      db_usages2 = ld db_usages;
      db_usages3 = force? db_usages2;
      checkMissing(db_usages3);
      return db_usages3;
    };
    p102 = prom<V +>{
      r305 = clos inner2501545716;
      return r305;
    };
    r307 = dyn vapply[, , , `USE.NAMES`](p101, p102, NA_LGL, FALSE);
    check L427() else D199();
  D35():
    deopt 121 [r65];
  D85():
    deopt 270 [];
  D168():
    deopt 526 [function_args_in_ns];
  D172():
    deopt 537 [tmp2];
  D199():
    deopt 639 [r307];
  L195():
    st objects_in_ns = r65;
    getNamespaceInfo = ldf getNamespaceInfo;
    check L196() else D36();
  L262():
    p47 = prom<V +>{
      sys_data_file = ld sys_data_file;
      sys_data_file1 = force? sys_data_file;
      checkMissing(sys_data_file1);
      return sys_data_file1;
    };
    r139 = dyn file_test1("-f", p47);
    check L263() else D86();
  L377():
    function_args_in_ns1 = force? function_args_in_ns;
    checkMissing(function_args_in_ns1);
    c40 = ldf c in base;
    r246 = dyn c40(function_args_in_code1, function_args_in_S3Table1, function_args_in_ns1);
    check L378() else D169();
  L381():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    c41 = `is.object`(tmp3);
    if c41 then L382() else L383(tmp3);
  L427():
    st ind = r307;
    lapply6 = ldf lapply;
    check L428() else D200();
  D36():
    deopt 124 [];
  D86():
    deopt 273 [r139];
  D169():
    deopt 529 [r246];
  D200():
    deopt 642 [];
  L52(dx11):
    st function_args_in_code = dx11;
    sym20 = ldf names;
    base20 = ldf names in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L386() else L387();
  L196():
    p21 = prom<V +>{
      package11 = ld package;
      package12 = force? package11;
      checkMissing(package12);
      return package12;
    };
    r67 = dyn getNamespaceInfo(p21, "S3methods");
    check L197() else D37();
  L263():
    c18 = `as.logical`(r139);
    if c18 then L264() else L33();
  L378():
    goto L51(r246);
  L382():
    dr10 = tryDispatchBuiltin.1("[", tmp3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L384() else L383(dr10);
  L383(tmp5):
    keep = ld keep;
    check L385() else D173();
  L428():
    p103 = prom<V +>{
      db_usages4 = ld db_usages;
      db_usages5 = force? db_usages4;
      checkMissing(db_usages5);
      c46 = `is.object`(db_usages5);
      if c46 then L1() else L2(db_usages5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", db_usages5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(db_usages7):
      ind2 = ld ind;
      ind3 = force? ind2;
      __6 = ldf `[` in base;
      r308 = dyn __6(db_usages7, ind3);
      goto L0(r308);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p104 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r311 = dyn lapply6(p103, p104, "bad_lines");
    check L429() else D201();
  D37():
    deopt 127 [r67];
  D173():
    deopt 539 [tmp5, keep];
  D201():
    deopt 646 [r311];
  L33():
    goto L34();
  L34():
    sort2 = ldf sort;
    check L268() else D89();
  L53(r255):
    st functions_in_code = r255;
    goto L54();
  L197():
    st ns_S3_methods_db = r67;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L198() else L199();
  L264():
    load = ldf load;
    check L265() else D87();
  L384():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L52(dx10);
  L385():
    keep1 = force? keep;
    __3 = ldf `[` in base;
    r253 = dyn __3(tmp5, keep1);
    goto L52(r253);
  L386():
    function_args_in_code2 = ld function_args_in_code;
    check L388() else D174();
  L387():
    r254 = dyn base20(<sym function_args_in_code>);
    goto L53(r254);
  L429():
    st bad_lines = r311;
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L430() else L431();
  D87():
    deopt 275 [];
  D89():
    deopt 282 [];
  D174():
    deopt 545 [function_args_in_code2];
  L18(r69):
    c9 = `as.logical`(r69);
    if c9 then L201() else L19();
  L64(r313):
    st bad_doc_objects = r313;
    character4 = ldf character;
    check L433() else D203();
  L198():
    ns_S3_methods_db = ld ns_S3_methods_db;
    check L200() else D38();
  L199():
    r68 = dyn base5(<sym ns_S3_methods_db>);
    goto L18(r68);
  L265():
    p48 = prom<V +>{
      sys_data_file2 = ld sys_data_file;
      sys_data_file3 = force? sys_data_file2;
      checkMissing(sys_data_file3);
      return sys_data_file3;
    };
    p49 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r142 = dyn load(p48, p49);
    check L266() else D88();
  L268():
    p50 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r145):
      return r145;
    L1():
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      names2 = ldf names in base;
      r146 = dyn names2(code_env7);
      goto L0(r146);
    L2():
      r144 = dyn base8(<sym code_env>);
      goto L0(r144);
    };
    r148 = dyn sort2(p50);
    check L269() else D90();
  L388():
    function_args_in_code3 = force? function_args_in_code2;
    checkMissing(function_args_in_code3);
    names6 = ldf names in base;
    r256 = dyn names6(function_args_in_code3);
    check L389() else D175();
  L430():
    list = ldf list in base;
    r314 = dyn list();
    check L432() else D202();
  L431():
    r312 = dyn base24();
    goto L64(r312);
  D38():
    deopt 130 [ns_S3_methods_db];
  D88():
    deopt 278 [r142];
  D90():
    deopt 284 [r148];
  D175():
    deopt 548 [r256];
  D202():
    deopt 651 [r314];
  D203():
    deopt 654 [];
  L19():
    paste = ldf paste;
    check L205() else D41();
  L20(r71):
    st ns_S3_methods = r71;
    unique = ldf unique;
    check L207() else D43();
  L200():
    ns_S3_methods_db1 = force? ns_S3_methods_db;
    checkMissing(ns_S3_methods_db1);
    c8 = `==`(ns_S3_methods_db1, NULL);
    goto L18(c8);
  L201():
    character = ldf character;
    check L202() else D39();
  L266():
    goto L34();
  L269():
    st objects_in_code = r148;
    objects_in_code7 = ld objects_in_code;
    check L270() else D91();
  L389():
    goto L53(r256);
  L432():
    goto L64(r314);
  L433():
    r315 = dyn character4();
    check L434() else D204();
  D39():
    deopt 134 [];
  D41():
    deopt 137 [];
  D43():
    deopt 145 [];
  D91():
    deopt 286 [objects_in_code7];
  D204():
    deopt 655 [r315];
  L202():
    r70 = dyn character();
    check L203() else D40();
  L205():
    p22 = prom<V +>{
      ns_S3_methods_db2 = ld ns_S3_methods_db;
      ns_S3_methods_db3 = force? ns_S3_methods_db2;
      checkMissing(ns_S3_methods_db3);
      c10 = `is.object`(ns_S3_methods_db3);
      if c10 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", ns_S3_methods_db3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r72 = dyn __1(ns_S3_methods_db3, <missing>, 1);
      goto L0(r72);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p23 = prom<V +>{
      ns_S3_methods_db6 = ld ns_S3_methods_db;
      ns_S3_methods_db7 = force? ns_S3_methods_db6;
      checkMissing(ns_S3_methods_db7);
      c11 = `is.object`(ns_S3_methods_db7);
      if c11 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", ns_S3_methods_db7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r74 = dyn __2(ns_S3_methods_db7, <missing>, 2);
      goto L0(r74);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r76 = dyn paste[, , sep](p22, p23, ".");
    check L206() else D42();
  L207():
    p24 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      objects_in_code3 = ld objects_in_code;
      objects_in_code4 = force? objects_in_code3;
      checkMissing(objects_in_code4);
      objects_in_ns = ld objects_in_ns;
      objects_in_ns1 = force? objects_in_ns;
      checkMissing(objects_in_ns1);
      ns_S3_methods = ld ns_S3_methods;
      ns_S3_methods1 = force? ns_S3_methods;
      checkMissing(ns_S3_methods1);
      c12 = ldf c in base;
      r79 = dyn c12(objects_in_code4, objects_in_ns1, ns_S3_methods1);
      goto L0(r79);
    L2():
      r77 = dyn base6(<sym objects_in_code>, <sym objects_in_ns>, <sym ns_S3_methods>);
      goto L0(r77);
    };
    r81 = dyn unique(p24);
    check L208() else D44();
  L270():
    objects_in_code8 = force? objects_in_code7;
    checkMissing(objects_in_code8);
    st objects_in_code_or_namespace = objects_in_code8;
    file_exists = ldf `file.exists`;
    check L271() else D92();
  L434():
    st functions_in_usages = r315;
    character5 = ldf character;
    check L435() else D205();
  D40():
    deopt 135 [r70];
  D42():
    deopt 142 [r76];
  D44():
    deopt 147 [r81];
  D92():
    deopt 290 [];
  D205():
    deopt 658 [];
  L203():
    goto L20(r70);
  L206():
    goto L20(r76);
  L208():
    st objects_in_code_or_namespace = r81;
    setdiff1 = ldf setdiff;
    check L209() else D45();
  L271():
    p52 = prom<V +>{
      file_path4 = ldf `file.path`;
      p51 = prom<V +>{
        dir33 = ld dir;
        dir34 = force? dir33;
        checkMissing(dir34);
        return dir34;
      };
      r150 = dyn file_path4(p51, "NAMESPACE");
      return r150;
    };
    r152 = dyn file_exists(p52);
    check L272() else D93();
  L435():
    r316 = dyn character5();
    check L436() else D206();
  D45():
    deopt 150 [];
  D93():
    deopt 292 [r152];
  D206():
    deopt 659 [r316];
  L209():
    p25 = prom<V +>{
      objects_in_ns2 = ld objects_in_ns;
      objects_in_ns3 = force? objects_in_ns2;
      checkMissing(objects_in_ns3);
      return objects_in_ns3;
    };
    p26 = prom<V +>{
      objects_in_code5 = ld objects_in_code;
      objects_in_code6 = force? objects_in_code5;
      checkMissing(objects_in_code6);
      return objects_in_code6;
    };
    r84 = dyn setdiff1(p25, p26);
    check L210() else D46();
  L272():
    c19 = `as.logical`(r152);
    if c19 then L273() else L35(c19);
  L436():
    st variables_in_usages = r316;
    character6 = ldf character;
    check L437() else D207();
  D46():
    deopt 153 [r84];
  D207():
    deopt 662 [];
  L35(c21):
    c28 = `as.logical`(c21);
    if c28 then L280() else L37();
  L210():
    st objects_in_ns = r84;
    goto L16();
  L273():
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L274() else L275();
  L437():
    r317 = dyn character6();
    check L438() else D208();
  D208():
    deopt 663 [r317];
  L36(c24, r154):
    r162 = `!`(r154);
    c25 = `as.logical`(r162);
    c26 = `&&`(c24, c25);
    goto L35(c26);
  L37():
    goto L21();
  L274():
    tryCatch = ldf tryCatch;
    check L276() else D94();
  L275():
    r153 = dyn base9(<lang tryCatch(`<-`(nsInfo, parseNamespaceFile(package_name, dirdir)), error=identity)>, "error");
    goto L36(c19, r153);
  L280():
    st has_namespace = TRUE;
    objects_in_code9 = ld objects_in_code;
    check L281() else D97();
  L438():
    st data_sets_in_usages = r317;
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L439() else L440();
  D94():
    deopt 296 [c19];
  D97():
    deopt 310 [objects_in_code9];
  L65(r319):
    st functions_in_usages_not_in_code = r319;
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L442() else L443();
  L276():
    p55 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p53 = prom<V +>{
        package_name2 = ld package_name;
        package_name3 = force? package_name2;
        checkMissing(package_name3);
        return package_name3;
      };
      p54 = prom<V +>{
        dirdir2 = ld dirdir;
        dirdir3 = force? dirdir2;
        checkMissing(dirdir3);
        return dirdir3;
      };
      r157 = dyn parseNamespaceFile(p53, p54);
      st nsInfo = r157;
      invisible.0();
      return r157;
    };
    p56 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r160 = dyn tryCatch[, error](p55, p56);
    check L277() else D95();
  L281():
    objects_in_code10 = force? objects_in_code9;
    checkMissing(objects_in_code10);
    st objects_in_ns = objects_in_code10;
    character2 = ldf character;
    check L282() else D98();
  L439():
    list1 = ldf list in base;
    r320 = dyn list1();
    check L441() else D209();
  L440():
    r318 = dyn base25();
    goto L65(r318);
  D95():
    deopt 300 [c19, r160];
  D98():
    deopt 314 [];
  D209():
    deopt 668 [r320];
  L66(r322):
    st data_sets_in_usages_not_in_code = r322;
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L445() else L446();
  L277():
    inherits = ldf inherits in base;
    r161 = dyn inherits(r160, "error", FALSE);
    check L278() else D96();
  L282():
    r163 = dyn character2();
    check L283() else D99();
  L441():
    goto L65(r320);
  L442():
    list2 = ldf list in base;
    r323 = dyn list2();
    check L444() else D210();
  L443():
    r321 = dyn base26();
    goto L66(r321);
  D96():
    deopt 304 [c19, r161];
  D99():
    deopt 315 [r163];
  D210():
    deopt 673 [r323];
  L67(r325):
    st variables_in_usages_not_in_code = r325;
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L448() else L449();
  L278():
    goto L36(c19, r161);
  L283():
    st functions_in_S3Table = r163;
    code_env8 = ld code_env;
    check L284() else D100();
  L444():
    goto L66(r323);
  L445():
    list3 = ldf list in base;
    r326 = dyn list3();
    check L447() else D211();
  L446():
    r324 = dyn base27();
    goto L67(r324);
  D100():
    deopt 317 [code_env8];
  D211():
    deopt 678 [r326];
  L68(r328):
    st objects_as_in = r328;
    sym32 = ldf names;
    base32 = ldf names in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L473() else L474();
  L284():
    code_env9 = force? code_env8;
    checkMissing(code_env9);
    st ns_env = code_env9;
    intersect = ldf intersect;
    check L285() else D101();
  L447():
    goto L67(r326);
  L448():
    objects_in_code_or_namespace = ld objects_in_code_or_namespace;
    check L450() else D212();
  L449():
    r327 = dyn base28(<sym objects_in_code_or_namespace>, <lang names(compatibilityEnv())>, <lang if(`&&`(missing(package), str_parse_logic(`[`(meta, "LazyData"), FALSE)), unlist(data_sets_in_code_variables, use.names=FALSE))>, <lang if(is_base, c("NA", "NULL", "Inf", "NaN", "TRUE", "FALSE", ".Autoloaded"))>);
    goto L68(r327);
  D101():
    deopt 321 [];
  D212():
    deopt 682 [objects_in_code_or_namespace];
  L77(r348):
    s1 = toForSeq(r348);
    l4 = length(s1);
    i8 = 0;
    goto L78(i8);
  L285():
    p57 = prom<V +>{
      objects_in_code11 = ld objects_in_code;
      objects_in_code12 = force? objects_in_code11;
      checkMissing(objects_in_code12);
      return objects_in_code12;
    };
    p58 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      c29 = `is.object`(nsInfo1);
      if c29 then L1() else L2(nsInfo1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", nsInfo1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(nsInfo3):
      r165 = `$`(nsInfo3, <sym exports>);
      goto L0(r165);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r167 = dyn intersect(p57, p58);
    check L286() else D102();
  L450():
    objects_in_code_or_namespace1 = force? objects_in_code_or_namespace;
    checkMissing(objects_in_code_or_namespace1);
    sym29 = ldf names;
    base29 = ldf names in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L451() else L452();
  L473():
    db8 = ld db;
    check L475() else D223();
  L474():
    r347 = dyn base32(<sym db>);
    goto L77(r347);
  D102():
    deopt 324 [r167];
  D223():
    deopt 728 [db8];
  L69(r330):
    sym30 = ldf missing;
    base30 = ldf missing in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L456() else L457();
  L78(i9):
    i10 = `+`.1(i9, 1);
    c58 = `<`.1(l4, i10);
    if c58 then L477() else L127();
  L286():
    st OK = r167;
    nsInfo4 = ld nsInfo;
    check L287() else D103();
  L451():
    compatibilityEnv = ldf compatibilityEnv;
    check L453() else D213();
  L452():
    r329 = dyn base29(<lang compatibilityEnv()>);
    goto L69(r329);
  L475():
    db9 = force? db8;
    checkMissing(db9);
    names8 = ldf names in base;
    r349 = dyn names8(db9);
    check L476() else D224();
  D103():
    deopt 326 [nsInfo4];
  D213():
    deopt 687 [];
  D224():
    deopt 731 [r349];
  L70(r334):
    c47 = `as.logical`(r334);
    if c47 then L458() else L71(c47);
  L127():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st nm = x1;
    db_usages8 = ld db_usages;
    check L478() else D225();
  L287():
    nsInfo5 = force? nsInfo4;
    checkMissing(nsInfo5);
    c30 = `is.object`(nsInfo5);
    if c30 then L289() else L290(nsInfo5);
  L453():
    r331 = dyn compatibilityEnv();
    check L454() else D214();
  L456():
    missing3 = ldf missing in base;
    r335 = dyn missing3(<sym package>);
    goto L70(r335);
  L457():
    r333 = dyn base30(<sym package>);
    goto L70(r333);
  L476():
    goto L77(r349);
  L477():
    setdiff5 = ldf setdiff;
    check L668() else D325();
  D214():
    deopt 688 [r331];
  D225():
    deopt 732 [i10, db_usages8];
  D325():
    deopt 1088 [];
  L71(c49):
    c54 = `as.logical`(c49);
    if c54 then L462() else L72();
  L288(dx9):
    s = toForSeq(dx9);
    l = length(s);
    i = 0;
    goto L38(i);
  L289():
    dr8 = tryDispatchBuiltin.1("$", nsInfo5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L291() else L290(dr8);
  L290(nsInfo7):
    r168 = `$`(nsInfo7, <sym exportPatterns>);
    goto L288(r168);
  L454():
    names7 = ldf names in base;
    r332 = dyn names7(r331);
    check L455() else D215();
  L458():
    str_parse_logic = ldf str_parse_logic;
    check L459() else D216();
  L478():
    db_usages9 = force? db_usages8;
    checkMissing(db_usages9);
    c59 = `is.object`(db_usages9);
    if c59 then L479() else L480(i10, db_usages9);
  L668():
    p148 = prom<V +>{
      objects_in_code21 = ld objects_in_code;
      objects_in_code22 = force? objects_in_code21;
      checkMissing(objects_in_code22);
      return objects_in_code22;
    };
    p149 = prom<V +>{
      sym50 = ldf c;
      base50 = ldf c in base;
      guard50 = `==`.4(sym50, base50);
      if guard50 then L1() else L2();
    L0(r497):
      return r497;
    L1():
      functions_in_usages2 = ld functions_in_usages;
      functions_in_usages3 = force? functions_in_usages2;
      checkMissing(functions_in_usages3);
      variables_in_usages2 = ld variables_in_usages;
      variables_in_usages3 = force? variables_in_usages2;
      checkMissing(variables_in_usages3);
      c96 = ldf c in base;
      r498 = dyn c96(functions_in_usages3, variables_in_usages3);
      goto L0(r498);
    L2():
      r496 = dyn base50(<sym functions_in_usages>, <sym variables_in_usages>);
      goto L0(r496);
    };
    r500 = dyn setdiff5(p148, p149);
    check L669() else D326();
  D215():
    deopt 690 [r332];
  D216():
    deopt 695 [c47];
  D326():
    deopt 1091 [r500];
  L38(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l, i2);
    if c31 then L292() else L40();
  L72():
    goto L73(NULL);
  L73(r341):
    is_base6 = ld is_base;
    check L466() else D220();
  L79(i16, dx19):
    st exprs = dx19;
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L483() else L484();
  L291():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L288(dx8);
  L455():
    goto L69(r332);
  L459():
    p105 = prom<V +>{
      meta2 = ld meta;
      meta3 = force? meta2;
      checkMissing(meta3);
      c50 = `is.object`(meta3);
      if c50 then L1() else L2(meta3);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", meta3);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(meta5):
      __7 = ldf `[` in base;
      r336 = dyn __7(meta5, "LazyData");
      goto L0(r336);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r338 = dyn str_parse_logic(p105, FALSE);
    check L460() else D217();
  L462():
    unlist = ldf unlist;
    check L463() else D218();
  L479():
    dr18 = tryDispatchBuiltin.1("[[", db_usages9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L481() else L480(i10, dr18);
  L480(i14, db_usages11):
    nm = ld nm;
    check L482() else D226();
  L669():
    st objects_in_code_not_in_usages = r500;
    intersect1 = ldf intersect;
    check L670() else D327();
  D217():
    deopt 698 [c47, r338];
  D218():
    deopt 701 [];
  D220():
    deopt 708 [is_base6];
  D226():
    deopt 734 [i14, db_usages11, nm];
  D327():
    deopt 1094 [];
  L40():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L293() else L294();
  L80(i19, r352):
    r354 = `!`(r352);
    c60 = `as.logical`(r354);
    if c60 then L487() else L81();
  L292():
    unique1 = ldf unique;
    check L299() else D108();
  L460():
    c51 = `as.logical`(r338);
    c52 = `&&`(c47, c51);
    goto L71(c52);
  L463():
    p106 = prom<V +>{
      data_sets_in_code_variables2 = ld data_sets_in_code_variables;
      data_sets_in_code_variables3 = force? data_sets_in_code_variables2;
      checkMissing(data_sets_in_code_variables3);
      return data_sets_in_code_variables3;
    };
    r340 = dyn unlist[, `use.names`](p106, FALSE);
    check L464() else D219();
  L466():
    is_base7 = force? is_base6;
    checkMissing(is_base7);
    c55 = `as.logical`(is_base7);
    if c55 then L467() else L74();
  L481():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L79(i10, dx18);
  L482():
    nm1 = force? nm;
    __8 = ldf `[[` in base;
    r350 = dyn __8(db_usages11, nm1);
    goto L79(i14, r350);
  L483():
    exprs = ld exprs;
    check L485() else D227();
  L484():
    r351 = dyn base33(<sym exprs>);
    goto L80(i16, r351);
  L670():
    p150 = prom<V +>{
      functions_in_code12 = ld functions_in_code;
      functions_in_code13 = force? functions_in_code12;
      checkMissing(functions_in_code13);
      return functions_in_code13;
    };
    p151 = prom<V +>{
      objects_in_code_not_in_usages = ld objects_in_code_not_in_usages;
      objects_in_code_not_in_usages1 = force? objects_in_code_not_in_usages;
      checkMissing(objects_in_code_not_in_usages1);
      return objects_in_code_not_in_usages1;
    };
    r503 = dyn intersect1(p150, p151);
    check L671() else D328();
  D108():
    deopt 347 [];
  D219():
    deopt 705 [r340];
  D227():
    deopt 740 [i16, exprs];
  D328():
    deopt 1097 [r503];
  L39(i7, r170):
    st OK = r170;
    goto L38(i7);
  L74():
    goto L76(NULL);
  L76(r345):
    c57 = ldf c in base;
    r346 = dyn c57(objects_in_code_or_namespace1, r330, r341, r345);
    check L472() else D222();
  L81():
    vapply1 = ldf vapply;
    check L490() else D229();
  L293():
    OK = ld OK;
    check L295() else D104();
  L294():
    r169 = dyn base10(<sym OK>, <lang grep(p, objects_in_code, value=TRUE)>);
    goto L39(i2, r169);
  L299():
    p63 = prom<V +>{
      OK2 = ld OK;
      OK3 = force? OK2;
      checkMissing(OK3);
      return OK3;
    };
    r176 = dyn unique1(p63);
    check L300() else D109();
  L464():
    goto L73(r340);
  L467():
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L468() else L469();
  L485():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    length1 = ldf length in base;
    r353 = dyn length1(exprs1);
    check L486() else D228();
  L487():
    goto L78(i19);
  L671():
    st functions_in_code_not_in_usages = r503;
    has_namespace2 = ld has_namespace;
    check L672() else D329();
  D104():
    deopt 331 [i2, OK];
  D109():
    deopt 349 [r176];
  D222():
    deopt 724 [r346];
  D228():
    deopt 743 [i16, r353];
  D229():
    deopt 750 [i19];
  D329():
    deopt 1099 [has_namespace2];
  L75(r343):
    goto L76(r343);
  L295():
    OK1 = force? OK;
    checkMissing(OK1);
    grep = ldf grep;
    check L296() else D105();
  L300():
    st objects_in_code = r176;
    goto L21();
  L468():
    c56 = ldf c in base;
    r344 = dyn c56("NA", "NULL", "Inf", "NaN", "TRUE", "FALSE", ".Autoloaded");
    check L470() else D221();
  L469():
    r342 = dyn base31("NA", "NULL", "Inf", "NaN", "TRUE", "FALSE", ".Autoloaded");
    goto L75(r342);
  L472():
    goto L68(r346);
  L486():
    goto L80(i16, r353);
  L490():
    p107 = prom<V +>{
      exprs2 = ld exprs;
      exprs3 = force? exprs2;
      checkMissing(exprs3);
      return exprs3;
    };
    p108 = prom<V +>{
      is_name = ld `is.name`;
      is_name1 = force? is_name;
      checkMissing(is_name1);
      return is_name1;
    };
    r358 = dyn vapply1[, , , `USE.NAMES`](p107, p108, NA_LGL, FALSE);
    check L491() else D230();
  L672():
    has_namespace3 = force? has_namespace2;
    checkMissing(has_namespace3);
    r504 = `!`(has_namespace3);
    c97 = `as.logical`(r504);
    if c97 then L673() else L128(c97);
  D105():
    deopt 334 [i2];
  D221():
    deopt 720 [r344];
  D230():
    deopt 756 [i19, r358];
  L128(c99):
    c103 = `as.logical`(c99);
    if c103 then L676() else L129();
  L296():
    p61 = prom<V +>{
      p59 = ld p;
      p60 = force? p59;
      checkMissing(p60);
      return p60;
    };
    p62 = prom<V +>{
      objects_in_code13 = ld objects_in_code;
      objects_in_code14 = force? objects_in_code13;
      checkMissing(objects_in_code14);
      return objects_in_code14;
    };
    r173 = dyn grep[, , value](p61, p62, TRUE);
    check L297() else D106();
  L470():
    goto L75(r344);
  L491():
    st ind = r358;
    sym34 = ldf any;
    base34 = ldf any in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L492() else L493();
  L673():
    is_base8 = ld is_base;
    check L674() else D330();
  D106():
    deopt 339 [i2, r173];
  D330():
    deopt 1102 [c97, is_base8];
  L83(i26, r360):
    c61 = `as.logical`(r360);
    if c61 then L496() else L84();
  L129():
    functions_in_code_not_in_usages = ld functions_in_code_not_in_usages;
    check L680() else D333();
  L130(r507):
    st functions_missing_from_usages = r507;
    has_namespace4 = ld has_namespace;
    check L711() else D351();
  L297():
    c32 = ldf c in base;
    r174 = dyn c32(OK1, r173);
    check L298() else D107();
  L492():
    ind4 = ld ind;
    check L494() else D231();
  L493():
    r359 = dyn base34(<sym ind>);
    goto L83(i19, r359);
  L674():
    is_base9 = force? is_base8;
    checkMissing(is_base9);
    r505 = `!`(is_base9);
    c100 = `as.logical`(r505);
    c101 = `&&`(c97, c100);
    goto L128(c101);
  L676():
    character7 = ldf character;
    check L677() else D331();
  D107():
    deopt 341 [i2, r174];
  D231():
    deopt 760 [i19, ind4];
  D331():
    deopt 1107 [];
  D333():
    deopt 1109 [functions_in_code_not_in_usages];
  D351():
    deopt 1175 [has_namespace4];
  L84():
    goto L91(i26);
  L91(i46):
    exprs12 = ld exprs;
    check L523() else D246();
  L298():
    goto L39(i2, r174);
  L494():
    ind5 = force? ind4;
    checkMissing(ind5);
    any = ldf any in base;
    r361 = dyn any(ind5);
    check L495() else D232();
  L496():
    vapply2 = ldf vapply;
    check L497() else D233();
  L677():
    r506 = dyn character7();
    check L678() else D332();
  L680():
    functions_in_code_not_in_usages1 = force? functions_in_code_not_in_usages;
    checkMissing(functions_in_code_not_in_usages1);
    st functions = functions_in_code_not_in_usages1;
    is_base10 = ld is_base;
    check L681() else D334();
  L711():
    has_namespace5 = force? has_namespace4;
    checkMissing(has_namespace5);
    r549 = `!`(has_namespace5);
    c113 = `as.logical`(r549);
    if c113 then L712() else L138();
  D232():
    deopt 763 [i19, r361];
  D233():
    deopt 765 [i26];
  D246():
    deopt 810 [i46, exprs12];
  D332():
    deopt 1108 [r506];
  D334():
    deopt 1112 [is_base10];
  L138():
    sym55 = ldf c;
    base55 = ldf c in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L716() else L717();
  L139(r551):
    st objects_missing_from_usages = r551;
    objects_in_code_not_in_usages4 = ld objects_in_code_not_in_usages;
    check L722() else D358();
  L495():
    goto L83(i19, r361);
  L497():
    p109 = prom<V +>{
      exprs4 = ld exprs;
      exprs5 = force? exprs4;
      checkMissing(exprs5);
      c62 = `is.object`(exprs5);
      if c62 then L1() else L2(exprs5);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", exprs5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(exprs7):
      ind6 = ld ind;
      ind7 = force? ind6;
      __9 = ldf `[` in base;
      r362 = dyn __9(exprs7, ind7);
      goto L0(r362);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p110 = prom<V +>{
      deparse = ld deparse;
      deparse1 = force? deparse;
      checkMissing(deparse1);
      return deparse1;
    };
    r365 = dyn vapply2(p109, p110, "");
    check L498() else D234();
  L523():
    exprs13 = force? exprs12;
    checkMissing(exprs13);
    c67 = `is.object`(exprs13);
    if c67 then L524() else L525(i46, exprs13);
  L678():
    goto L130(r506);
  L681():
    is_base11 = force? is_base10;
    checkMissing(is_base11);
    c104 = `as.logical`(is_base11);
    if c104 then L682() else L131();
  L712():
    character8 = ldf character;
    check L713() else D352();
  D234():
    deopt 769 [i26, r365];
  D352():
    deopt 1179 [];
  D358():
    deopt 1193 [objects_in_code_not_in_usages4];
  L92(i50, dx28):
    st exprs = dx28;
    vapply4 = ldf vapply;
    check L529() else D249();
  L131():
    basename2 = ldf basename;
    check L686() else D337();
  L132():
    sym53 = ldf `.isMethodsDispatchOn`;
    base53 = ldf `.isMethodsDispatchOn` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L698() else L699();
  L498():
    st variables = r365;
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L499() else L500();
  L524():
    dr26 = tryDispatchBuiltin.1("[", exprs13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L526() else L525(i46, dr26);
  L525(i48, exprs15):
    vapply3 = ldf vapply;
    check L527() else D247();
  L682():
    setdiff6 = ldf setdiff;
    check L683() else D335();
  L713():
    r550 = dyn character8();
    check L714() else D353();
  L716():
    functions_missing_from_usages = ld functions_missing_from_usages;
    check L718() else D354();
  L717():
    r552 = dyn base55(<sym functions_missing_from_usages>, <lang setdiff(objects_in_code_not_in_usages, c(functions_in_code, data_sets_in_code))>);
    goto L139(r552);
  L722():
    objects_in_code_not_in_usages5 = force? objects_in_code_not_in_usages4;
    checkMissing(objects_in_code_not_in_usages5);
    l17 = ld bad_doc_objects;
    attr__ = ldf `attr<-`;
    check L723() else D359();
  D247():
    deopt 813 [i48, exprs15];
  D249():
    deopt 823 [i50];
  D335():
    deopt 1115 [];
  D337():
    deopt 1121 [];
  D353():
    deopt 1180 [r550];
  D354():
    deopt 1183 [functions_missing_from_usages];
  D359():
    deopt 1196 [objects_in_code_not_in_usages5, l17, objects_in_code_not_in_usages5];
  L85(i31, r367):
    st variables_in_usages = r367;
    setdiff2 = ldf setdiff;
    check L504() else D238();
  L135(r532):
    c111 = `as.logical`(r532);
    if c111 then L701() else L136();
  L499():
    variables_in_usages = ld variables_in_usages;
    check L501() else D235();
  L500():
    r366 = dyn base35(<sym variables_in_usages>, <sym variables>);
    goto L85(i26, r366);
  L526():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L92(i46, dx27);
  L527():
    p113 = prom<V +>{
      exprs16 = ld exprs;
      exprs17 = force? exprs16;
      checkMissing(exprs17);
      return exprs17;
    };
    p114 = prom<V +>{
      is_call = ld `is.call`;
      is_call1 = force? is_call;
      checkMissing(is_call1);
      return is_call1;
    };
    r380 = dyn vapply3[, , , `USE.NAMES`](p113, p114, NA_LGL, FALSE);
    check L528() else D248();
  L529():
    p115 = prom<V +>{
      exprs18 = ld exprs;
      exprs19 = force? exprs18;
      checkMissing(exprs19);
      return exprs19;
    };
    p116 = prom<V +>{
      is_data_for_dataset = ld is_data_for_dataset;
      is_data_for_dataset1 = force? is_data_for_dataset;
      checkMissing(is_data_for_dataset1);
      return is_data_for_dataset1;
    };
    r384 = dyn vapply4[, , , `USE.NAMES`](p115, p116, NA_LGL, FALSE);
    check L530() else D250();
  L683():
    p152 = prom<V +>{
      functions26 = ld functions;
      functions27 = force? functions26;
      checkMissing(functions27);
      return functions27;
    };
    p155 = prom<V +>{
      sym51 = ldf c;
      base51 = ldf c in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L2() else L3();
    L0(r510):
      return r510;
    L2():
      sprintf = ldf sprintf;
      p153 = prom<V +>{
        _S3_methods_table = ld `.S3_methods_table`;
        _S3_methods_table1 = force? _S3_methods_table;
        checkMissing(_S3_methods_table1);
        c105 = `is.object`(_S3_methods_table1);
        if c105 then L1() else L2();
      L0(dx60):
        return dx60;
      L1():
        dr56 = tryDispatchBuiltin.1("[", _S3_methods_table1);
        dc28 = getTryDispatchBuiltinDispatched(dr56);
        if dc28 then L3() else L2();
      L2():
        __23 = ldf `[` in base;
        r511 = dyn __23(_S3_methods_table1, <missing>, 1);
        goto L0(r511);
      L3():
        dx59 = getTryDispatchBuiltinValue(dr56);
        goto L0(dx59);
      };
      p154 = prom<V +>{
        _S3_methods_table4 = ld `.S3_methods_table`;
        _S3_methods_table5 = force? _S3_methods_table4;
        checkMissing(_S3_methods_table5);
        c106 = `is.object`(_S3_methods_table5);
        if c106 then L1() else L2();
      L0(dx62):
        return dx62;
      L1():
        dr58 = tryDispatchBuiltin.1("[", _S3_methods_table5);
        dc29 = getTryDispatchBuiltinDispatched(dr58);
        if dc29 then L3() else L2();
      L2():
        __24 = ldf `[` in base;
        r513 = dyn __24(_S3_methods_table5, <missing>, 2);
        goto L0(r513);
      L3():
        dx61 = getTryDispatchBuiltinValue(dr58);
        goto L0(dx61);
      };
      r515 = dyn sprintf("%s.%s", p153, p154);
      sym52 = ldf c;
      base52 = ldf c in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L4() else L5();
    L3():
      r509 = dyn base51(<lang sprintf("%s.%s", `[`(.S3_methods_table, , 1), `[`(.S3_methods_table, , 2))>, <lang c(".First.sys", ".OptRequireMethods", "+", "-")>);
      goto L0(r509);
    L1(r517):
      c108 = ldf c in base;
      r519 = dyn c108(r515, r517);
      goto L0(r519);
    L4():
      c107 = ldf c in base;
      r518 = dyn c107(".First.sys", ".OptRequireMethods", "+", "-");
      goto L1(r518);
    L5():
      r516 = dyn base52(".First.sys", ".OptRequireMethods", "+", "-");
      goto L1(r516);
    };
    r521 = dyn setdiff6(p152, p155);
    check L684() else D336();
  L686():
    p156 = prom<V +>{
      dir41 = ld dir;
      dir42 = force? dir41;
      checkMissing(dir42);
      return dir42;
    };
    r524 = dyn basename2(p156);
    check L687() else D338();
  L698():
    _isMethodsDispatchOn1 = ldf `.isMethodsDispatchOn` in base;
    r533 = dyn _isMethodsDispatchOn1();
    check L700() else D345();
  L699():
    r531 = dyn base53();
    goto L135(r531);
  L714():
    goto L139(r550);
  L718():
    functions_missing_from_usages1 = force? functions_missing_from_usages;
    checkMissing(functions_missing_from_usages1);
    setdiff8 = ldf setdiff;
    check L719() else D355();
  L723():
    r560 = dyn attr__(l17, NULL, "objects_in_code_not_in_usages", objects_in_code_not_in_usages5);
    check L724() else D360();
  D235():
    deopt 773 [i26, variables_in_usages];
  D238():
    deopt 781 [i31];
  D248():
    deopt 819 [i48, exprs15, r380];
  D250():
    deopt 829 [i50, r384];
  D336():
    deopt 1118 [r521];
  D338():
    deopt 1123 [r524];
  D345():
    deopt 1150 [r533];
  D355():
    deopt 1186 [];
  D360():
    deopt 1199 [objects_in_code_not_in_usages5, r560];
  L136():
    goto L137();
  L137():
    r543 = clos inner1384373858;
    st is_defunct = r543;
    functions34 = ld functions;
    check L705() else D348();
  L501():
    variables_in_usages1 = force? variables_in_usages;
    checkMissing(variables_in_usages1);
    variables = ld variables;
    check L502() else D236();
  L504():
    p111 = prom<V +>{
      variables2 = ld variables;
      variables3 = force? variables2;
      checkMissing(variables3);
      return variables3;
    };
    p112 = prom<V +>{
      objects_as_in = ld objects_as_in;
      objects_as_in1 = force? objects_as_in;
      checkMissing(objects_as_in1);
      return objects_as_in1;
    };
    r371 = dyn setdiff2(p111, p112);
    check L505() else D239();
  L528():
    __11 = ldf `[` in base;
    r381 = dyn __11(exprs15, r380);
    goto L92(i48, r381);
  L530():
    st ind = r384;
    sym37 = ldf any;
    base37 = ldf any in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L531() else L532();
  L684():
    st functions = r521;
    goto L132();
  L687():
    st pname = r524;
    pname = ld pname;
    check L688() else D339();
  L700():
    goto L135(r533);
  L701():
    setdiff7 = ldf setdiff;
    check L702() else D346();
  L719():
    p164 = prom<V +>{
      objects_in_code_not_in_usages2 = ld objects_in_code_not_in_usages;
      objects_in_code_not_in_usages3 = force? objects_in_code_not_in_usages2;
      checkMissing(objects_in_code_not_in_usages3);
      return objects_in_code_not_in_usages3;
    };
    p165 = prom<V +>{
      sym56 = ldf c;
      base56 = ldf c in base;
      guard56 = `==`.4(sym56, base56);
      if guard56 then L1() else L2();
    L0(r555):
      return r555;
    L1():
      functions_in_code14 = ld functions_in_code;
      functions_in_code15 = force? functions_in_code14;
      checkMissing(functions_in_code15);
      data_sets_in_code2 = ld data_sets_in_code;
      data_sets_in_code3 = force? data_sets_in_code2;
      checkMissing(data_sets_in_code3);
      c114 = ldf c in base;
      r556 = dyn c114(functions_in_code15, data_sets_in_code3);
      goto L0(r556);
    L2():
      r554 = dyn base56(<sym functions_in_code>, <sym data_sets_in_code>);
      goto L0(r554);
    };
    r558 = dyn setdiff8(p164, p165);
    check L720() else D356();
  L724():
    st bad_doc_objects = r560;
    functions_in_code_not_in_usages2 = ld functions_in_code_not_in_usages;
    check L725() else D361();
  D236():
    deopt 775 [i26, variables];
  D239():
    deopt 784 [i31, r371];
  D339():
    deopt 1125 [pname];
  D346():
    deopt 1152 [];
  D348():
    deopt 1162 [functions34];
  D356():
    deopt 1189 [r558];
  D361():
    deopt 1201 [functions_in_code_not_in_usages2];
  L93(i53, r386):
    c68 = `as.logical`(r386);
    if c68 then L535() else L94();
  L502():
    variables1 = force? variables;
    checkMissing(variables1);
    c63 = ldf c in base;
    r368 = dyn c63(variables_in_usages1, variables1);
    check L503() else D237();
  L505():
    st variables = r371;
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L506() else L507();
  L531():
    ind10 = ld ind;
    check L533() else D251();
  L532():
    r385 = dyn base37(<sym ind>);
    goto L93(i50, r385);
  L688():
    pname1 = force? pname;
    checkMissing(pname1);
    r525 = `==`(pname1, "utils");
    c109 = `as.logical`(r525);
    if c109 then L689() else L133();
  L702():
    p159 = prom<V +>{
      functions32 = ld functions;
      functions33 = force? functions32;
      checkMissing(functions33);
      return functions33;
    };
    p161 = prom<V +>{
      sym54 = ldf names;
      base54 = ldf names in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L1() else L2();
    L0(r536):
      return r536;
    L1():
      _get_S4_generics1 = ldf `.get_S4_generics`;
      p160 = prom<V +>{
        code_env16 = ld code_env;
        code_env17 = force? code_env16;
        checkMissing(code_env17);
        return code_env17;
      };
      r538 = dyn _get_S4_generics1(p160);
      names9 = ldf names in base;
      r539 = dyn names9(r538);
      goto L0(r539);
    L2():
      r535 = dyn base54(<lang .get_S4_generics(code_env)>);
      goto L0(r535);
    };
    r541 = dyn setdiff7(p159, p161);
    check L703() else D347();
  L705():
    functions35 = force? functions34;
    checkMissing(functions35);
    c112 = `is.object`(functions35);
    if c112 then L706() else L707(functions35);
  L720():
    c115 = ldf c in base;
    r559 = dyn c115(functions_missing_from_usages1, r558);
    check L721() else D357();
  L725():
    functions_in_code_not_in_usages3 = force? functions_in_code_not_in_usages2;
    checkMissing(functions_in_code_not_in_usages3);
    l18 = ld bad_doc_objects;
    attr__1 = ldf `attr<-`;
    check L726() else D362();
  D237():
    deopt 778 [i26, r368];
  D251():
    deopt 833 [i50, ind10];
  D347():
    deopt 1155 [r541];
  D357():
    deopt 1191 [r559];
  D362():
    deopt 1204 [functions_in_code_not_in_usages3, l18, functions_in_code_not_in_usages3];
  L86(i34, r373):
    c64 = `as.logical`(r373);
    if c64 then L510() else L87();
  L94():
    goto L101(i53);
  L101(i73):
    vapply6 = ldf vapply;
    check L562() else D266();
  L133():
    pname2 = ld pname;
    check L693() else D342();
  L503():
    goto L85(i26, r368);
  L506():
    variables4 = ld variables;
    check L508() else D240();
  L507():
    r372 = dyn base36(<sym variables>);
    goto L86(i31, r372);
  L533():
    ind11 = force? ind10;
    checkMissing(ind11);
    any1 = ldf any in base;
    r387 = dyn any1(ind11);
    check L534() else D252();
  L535():
    vapply5 = ldf vapply;
    check L536() else D253();
  L689():
    _w_o_ = ldf `%w/o%`;
    check L690() else D340();
  L703():
    st functions = r541;
    goto L137();
  L706():
    dr60 = tryDispatchBuiltin.1("[", functions35);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L708() else L707(dr60);
  L707(functions37):
    vapply9 = ldf vapply;
    check L709() else D349();
  L721():
    goto L139(r559);
  L726():
    r561 = dyn attr__1(l18, NULL, "functions_in_code_not_in_usages", functions_in_code_not_in_usages3);
    check L727() else D363();
  D240():
    deopt 788 [i31, variables4];
  D252():
    deopt 836 [i50, r387];
  D253():
    deopt 838 [i53];
  D266():
    deopt 884 [i73];
  D340():
    deopt 1130 [];
  D342():
    deopt 1135 [pname2];
  D349():
    deopt 1165 [functions37];
  D363():
    deopt 1207 [functions_in_code_not_in_usages3, r561];
  L87():
    goto L89(i34);
  L89(i41):
    exprs8 = ld exprs;
    check L517() else D244();
  L508():
    variables5 = force? variables4;
    checkMissing(variables5);
    length2 = ldf length in base;
    r374 = dyn length2(variables5);
    check L509() else D241();
  L510():
    variables6 = ld variables;
    check L511() else D242();
  L534():
    goto L93(i50, r387);
  L536():
    p117 = prom<V +>{
      exprs20 = ld exprs;
      exprs21 = force? exprs20;
      checkMissing(exprs21);
      c69 = `is.object`(exprs21);
      if c69 then L1() else L2(exprs21);
    L0(dx30):
      return dx30;
    L1():
      dr28 = tryDispatchBuiltin.1("[", exprs21);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(exprs23):
      ind12 = ld ind;
      ind13 = force? ind12;
      __12 = ldf `[` in base;
      r388 = dyn __12(exprs23, ind13);
      goto L0(r388);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx29);
    };
    p118 = prom<V +>{
      r390 = clos inner3708401697;
      return r390;
    };
    r392 = dyn vapply5(p117, p118, "");
    check L537() else D254();
  L562():
    p121 = prom<V +>{
      exprs28 = ld exprs;
      exprs29 = force? exprs28;
      checkMissing(exprs29);
      return exprs29;
    };
    p122 = prom<V +>{
      _is_call_from_replacement_function_usage = ld `.is_call_from_replacement_function_usage`;
      _is_call_from_replacement_function_usage1 = force? _is_call_from_replacement_function_usage;
      checkMissing(_is_call_from_replacement_function_usage1);
      return _is_call_from_replacement_function_usage1;
    };
    r407 = dyn vapply6[, , , `USE.NAMES`](p121, p122, NA_LGL, FALSE);
    check L563() else D267();
  L690():
    p157 = prom<V +>{
      functions28 = ld functions;
      functions29 = force? functions28;
      checkMissing(functions29);
      return functions29;
    };
    r527 = dyn _w_o_(p157, "?");
    check L691() else D341();
  L693():
    pname3 = force? pname2;
    checkMissing(pname3);
    r528 = `==`(pname3, "grDevices");
    c110 = `as.logical`(r528);
    if c110 then L694() else L134();
  L708():
    dx63 = getTryDispatchBuiltinValue(dr60);
    goto L130(dx63);
  L709():
    p162 = prom<V +>{
      functions38 = ld functions;
      functions39 = force? functions38;
      checkMissing(functions39);
      return functions39;
    };
    p163 = prom<V +>{
      is_defunct = ld is_defunct;
      is_defunct1 = force? is_defunct;
      checkMissing(is_defunct1);
      return is_defunct1;
    };
    r546 = dyn vapply9[, , , `USE.NAMES`](p162, p163, NA_LGL, FALSE);
    check L710() else D350();
  L727():
    st bad_doc_objects = r561;
    functions_in_usages_not_in_code = ld functions_in_usages_not_in_code;
    check L728() else D364();
  D241():
    deopt 791 [i31, r374];
  D242():
    deopt 792 [i34, variables6];
  D244():
    deopt 801 [i41, exprs8];
  D254():
    deopt 842 [i53, r392];
  D267():
    deopt 890 [i73, r407];
  D341():
    deopt 1133 [r527];
  D350():
    deopt 1171 [functions37, r546];
  D364():
    deopt 1209 [functions_in_usages_not_in_code];
  L134():
    goto L132();
  L509():
    goto L86(i31, r374);
  L511():
    variables7 = force? variables6;
    checkMissing(variables7);
    l5 = ld variables_in_usages_not_in_code;
    c65 = `is.object`(l5);
    if c65 then L512() else L513(i34, variables7, l5);
  L517():
    exprs9 = force? exprs8;
    checkMissing(exprs9);
    c66 = `is.object`(exprs9);
    if c66 then L518() else L519(i41, exprs9);
  L537():
    st data_sets = r392;
    sym38 = ldf c;
    base38 = ldf c in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L538() else L539();
  L563():
    st ind = r407;
    exprs30 = ld exprs;
    check L564() else D268();
  L691():
    st functions = r527;
    goto L132();
  L694():
    _w_o_1 = ldf `%w/o%`;
    check L695() else D343();
  L710():
    r547 = `!`(r546);
    __25 = ldf `[` in base;
    r548 = dyn __25(functions37, r547);
    goto L130(r548);
  L728():
    functions_in_usages_not_in_code1 = force? functions_in_usages_not_in_code;
    checkMissing(functions_in_usages_not_in_code1);
    l19 = ld bad_doc_objects;
    attr__2 = ldf `attr<-`;
    check L729() else D365();
  D268():
    deopt 892 [i73, exprs30];
  D343():
    deopt 1140 [];
  D365():
    deopt 1212 [functions_in_usages_not_in_code1, l19, functions_in_usages_not_in_code1];
  L88(i40, variables11, dx23):
    st variables_in_usages_not_in_code = dx23;
    goto L89(i40);
  L90(i45, dx25):
    st exprs = dx25;
    goto L91(i45);
  L95(i58, r394):
    st data_sets_in_usages = r394;
    setdiff3 = ldf setdiff;
    check L543() else D258();
  L512():
    dr22 = tryDispatchBuiltin.0("[[<-", l5, variables7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L514() else L513(i34, variables7, dr22);
  L513(i38, variables9, l7):
    nm2 = ld nm;
    check L515() else D243();
  L518():
    dr24 = tryDispatchBuiltin.1("[", exprs9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L520() else L519(i41, dr24);
  L519(i43, exprs11):
    ind8 = ld ind;
    check L521() else D245();
  L538():
    data_sets_in_usages = ld data_sets_in_usages;
    check L540() else D255();
  L539():
    r393 = dyn base38(<sym data_sets_in_usages>, <sym data_sets>);
    goto L95(i53, r393);
  L564():
    exprs31 = force? exprs30;
    checkMissing(exprs31);
    c74 = `is.object`(exprs31);
    if c74 then L565() else L566(i73, exprs31);
  L695():
    p158 = prom<V +>{
      functions30 = ld functions;
      functions31 = force? functions30;
      checkMissing(functions31);
      return functions31;
    };
    r530 = dyn _w_o_1(p158, "x11");
    check L696() else D344();
  L729():
    r562 = dyn attr__2(l19, NULL, "functions_in_usages_not_in_code", functions_in_usages_not_in_code1);
    check L730() else D366();
  D243():
    deopt 795 [i38, variables9, l7, variables7, nm2];
  D245():
    deopt 803 [i43, exprs11, ind8];
  D255():
    deopt 846 [i53, data_sets_in_usages];
  D258():
    deopt 854 [i58];
  D344():
    deopt 1143 [r530];
  D366():
    deopt 1215 [functions_in_usages_not_in_code1, r562];
  L102(i77, dx37):
    st replace_exprs = dx37;
    exprs34 = ld exprs;
    check L569() else D270();
  L514():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L88(i34, variables7, dx22);
  L515():
    nm3 = force? nm2;
    ____ = ldf `[[<-` in base;
    r375 = dyn ____(l7, variables7, nm3);
    goto L88(i38, variables9, r375);
  L520():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L90(i41, dx24);
  L521():
    ind9 = force? ind8;
    checkMissing(ind9);
    r376 = `!`(ind9);
    __10 = ldf `[` in base;
    r377 = dyn __10(exprs11, r376);
    goto L90(i43, r377);
  L540():
    data_sets_in_usages1 = force? data_sets_in_usages;
    checkMissing(data_sets_in_usages1);
    data_sets = ld data_sets;
    check L541() else D256();
  L543():
    p119 = prom<V +>{
      data_sets2 = ld data_sets;
      data_sets3 = force? data_sets2;
      checkMissing(data_sets3);
      return data_sets3;
    };
    p120 = prom<V +>{
      data_sets_in_code = ld data_sets_in_code;
      data_sets_in_code1 = force? data_sets_in_code;
      checkMissing(data_sets_in_code1);
      return data_sets_in_code1;
    };
    r398 = dyn setdiff3(p119, p120);
    check L544() else D259();
  L565():
    dr34 = tryDispatchBuiltin.1("[", exprs31);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L567() else L566(i73, dr34);
  L566(i75, exprs33):
    ind16 = ld ind;
    check L568() else D269();
  L696():
    st functions = r530;
    goto L132();
  L730():
    st bad_doc_objects = r562;
    function_args_in_code4 = ld function_args_in_code;
    check L731() else D367();
  D256():
    deopt 848 [i53, data_sets];
  D259():
    deopt 857 [i58, r398];
  D269():
    deopt 894 [i75, exprs33, ind16];
  D270():
    deopt 898 [i77, exprs34];
  D367():
    deopt 1217 [function_args_in_code4];
  L541():
    data_sets1 = force? data_sets;
    checkMissing(data_sets1);
    c70 = ldf c in base;
    r395 = dyn c70(data_sets_in_usages1, data_sets1);
    check L542() else D257();
  L544():
    st data_sets = r398;
    sym39 = ldf length;
    base39 = ldf length in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L545() else L546();
  L567():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L102(i73, dx36);
  L568():
    ind17 = force? ind16;
    __14 = ldf `[` in base;
    r408 = dyn __14(exprs33, ind17);
    goto L102(i75, r408);
  L569():
    exprs35 = force? exprs34;
    checkMissing(exprs35);
    c75 = `is.object`(exprs35);
    if c75 then L570() else L571(i77, exprs35);
  L731():
    function_args_in_code5 = force? function_args_in_code4;
    checkMissing(function_args_in_code5);
    l20 = ld bad_doc_objects;
    attr__3 = ldf `attr<-`;
    check L732() else D368();
  D257():
    deopt 851 [i53, r395];
  D368():
    deopt 1220 [function_args_in_code5, l20, function_args_in_code5];
  L96(i61, r400):
    c71 = `as.logical`(r400);
    if c71 then L549() else L97();
  L103(i81, dx39):
    st exprs = dx39;
    vapply7 = ldf vapply;
    check L574() else D272();
  L542():
    goto L95(i53, r395);
  L545():
    data_sets4 = ld data_sets;
    check L547() else D260();
  L546():
    r399 = dyn base39(<sym data_sets>);
    goto L96(i58, r399);
  L570():
    dr36 = tryDispatchBuiltin.1("[", exprs35);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L572() else L571(i77, dr36);
  L571(i79, exprs37):
    ind18 = ld ind;
    check L573() else D271();
  L732():
    r563 = dyn attr__3(l20, NULL, "function_args_in_code", function_args_in_code5);
    check L733() else D369();
  D260():
    deopt 861 [i58, data_sets4];
  D271():
    deopt 900 [i79, exprs37, ind18];
  D272():
    deopt 906 [i81];
  D369():
    deopt 1223 [function_args_in_code5, r563];
  L97():
    goto L99(i61);
  L99(i68):
    exprs24 = ld exprs;
    check L556() else D264();
  L547():
    data_sets5 = force? data_sets4;
    checkMissing(data_sets5);
    length3 = ldf length in base;
    r401 = dyn length3(data_sets5);
    check L548() else D261();
  L549():
    data_sets6 = ld data_sets;
    check L550() else D262();
  L572():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L103(i77, dx38);
  L573():
    ind19 = force? ind18;
    checkMissing(ind19);
    r409 = `!`(ind19);
    __15 = ldf `[` in base;
    r410 = dyn __15(exprs37, r409);
    goto L103(i79, r410);
  L574():
    p123 = prom<V +>{
      exprs38 = ld exprs;
      exprs39 = force? exprs38;
      checkMissing(exprs39);
      return exprs39;
    };
    p124 = prom<V +>{
      r412 = clos inner3708401697;
      return r412;
    };
    r414 = dyn vapply7(p123, p124, "");
    check L575() else D273();
  L733():
    st bad_doc_objects = r563;
    data_sets_in_usages_not_in_code = ld data_sets_in_usages_not_in_code;
    check L734() else D370();
  D261():
    deopt 864 [i58, r401];
  D262():
    deopt 865 [i61, data_sets6];
  D264():
    deopt 874 [i68, exprs24];
  D273():
    deopt 910 [i81, r414];
  D370():
    deopt 1225 [data_sets_in_usages_not_in_code];
  L548():
    goto L96(i58, r401);
  L550():
    data_sets7 = force? data_sets6;
    checkMissing(data_sets7);
    l8 = ld data_sets_in_usages_not_in_code;
    c72 = `is.object`(l8);
    if c72 then L551() else L552(i61, data_sets7, l8);
  L556():
    exprs25 = force? exprs24;
    checkMissing(exprs25);
    c73 = `is.object`(exprs25);
    if c73 then L557() else L558(i68, exprs25);
  L575():
    st functions = r414;
    _notin_ = ldf `%notin%`;
    check L576() else D274();
  L734():
    data_sets_in_usages_not_in_code1 = force? data_sets_in_usages_not_in_code;
    checkMissing(data_sets_in_usages_not_in_code1);
    l21 = ld bad_doc_objects;
    attr__4 = ldf `attr<-`;
    check L735() else D371();
  D274():
    deopt 913 [i81];
  D371():
    deopt 1228 [data_sets_in_usages_not_in_code1, l21, data_sets_in_usages_not_in_code1];
  L98(i67, data_sets11, dx32):
    st data_sets_in_usages_not_in_code = dx32;
    goto L99(i67);
  L100(i72, dx34):
    st exprs = dx34;
    goto L101(i72);
  L551():
    dr30 = tryDispatchBuiltin.0("[[<-", l8, data_sets7);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L553() else L552(i61, data_sets7, dr30);
  L552(i65, data_sets9, l10):
    nm4 = ld nm;
    check L554() else D263();
  L557():
    dr32 = tryDispatchBuiltin.1("[", exprs25);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L559() else L558(i68, dr32);
  L558(i70, exprs27):
    ind14 = ld ind;
    check L560() else D265();
  L576():
    p125 = prom<V +>{
      functions = ld functions;
      functions1 = force? functions;
      checkMissing(functions1);
      return functions1;
    };
    p126 = prom<V +>{
      sym40 = ldf c;
      base40 = ldf c in base;
      guard40 = `==`.4(sym40, base40);
      if guard40 then L1() else L2();
    L0(r417):
      return r417;
    L1():
      c76 = ldf c in base;
      r418 = dyn c76("<-", "=", "+", "-");
      goto L0(r418);
    L2():
      r416 = dyn base40("<-", "=", "+", "-");
      goto L0(r416);
    };
    r420 = dyn _notin_(p125, p126);
    check L577() else D275();
  L735():
    r564 = dyn attr__4(l21, NULL, "data_sets_in_usages_not_in_code", data_sets_in_usages_not_in_code1);
    check L736() else D372();
  D263():
    deopt 868 [i65, data_sets9, l10, data_sets7, nm4];
  D265():
    deopt 876 [i70, exprs27, ind14];
  D275():
    deopt 916 [i81, r420];
  D372():
    deopt 1231 [data_sets_in_usages_not_in_code1, r564];
  L553():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L98(i61, data_sets7, dx31);
  L554():
    nm5 = force? nm4;
    ____1 = ldf `[[<-` in base;
    r402 = dyn ____1(l10, data_sets7, nm5);
    goto L98(i65, data_sets9, r402);
  L559():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L100(i68, dx33);
  L560():
    ind15 = force? ind14;
    checkMissing(ind15);
    r403 = `!`(ind15);
    __13 = ldf `[` in base;
    r404 = dyn __13(exprs27, r403);
    goto L100(i70, r404);
  L577():
    st ind = r420;
    exprs40 = ld exprs;
    check L578() else D276();
  L736():
    st bad_doc_objects = r564;
    config_val_to_logical = ldf config_val_to_logical;
    check L737() else D373();
  D276():
    deopt 918 [i81, exprs40];
  D373():
    deopt 1234 [];
  L578():
    exprs41 = force? exprs40;
    checkMissing(exprs41);
    c77 = `is.object`(exprs41);
    if c77 then L579() else L580(i81, exprs41);
  L737():
    p166 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r565 = dyn Sys_getenv1("_R_CHECK_CODOC_VARIABLES_IN_USAGES_", "FALSE");
      return r565;
    };
    r567 = dyn config_val_to_logical(p166);
    check L738() else D374();
  D374():
    deopt 1236 [r567];
  L104(i85, dx41):
    st exprs = dx41;
    functions2 = ld functions;
    check L583() else D278();
  L579():
    dr38 = tryDispatchBuiltin.1("[", exprs41);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L581() else L580(i81, dr38);
  L580(i83, exprs43):
    ind20 = ld ind;
    check L582() else D277();
  L738():
    c116 = `as.logical`(r567);
    if c116 then L739() else L140();
  D277():
    deopt 920 [i83, exprs43, ind20];
  D278():
    deopt 924 [i85, functions2];
  L140():
    goto L141();
  L141():
    objects_missing_from_usages = ld objects_missing_from_usages;
    check L744() else D378();
  L581():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L104(i81, dx40);
  L582():
    ind21 = force? ind20;
    __16 = ldf `[` in base;
    r421 = dyn __16(exprs43, ind21);
    goto L104(i83, r421);
  L583():
    functions3 = force? functions2;
    checkMissing(functions3);
    c78 = `is.object`(functions3);
    if c78 then L584() else L585(i85, functions3);
  L739():
    variables_in_usages_not_in_code = ld variables_in_usages_not_in_code;
    check L740() else D375();
  D375():
    deopt 1237 [variables_in_usages_not_in_code];
  D378():
    deopt 1247 [objects_missing_from_usages];
  L105(i89, dx43):
    st functions = dx43;
    _transform_S3_method_markup = ldf `.transform_S3_method_markup`;
    check L588() else D280();
  L584():
    dr40 = tryDispatchBuiltin.1("[", functions3);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L586() else L585(i85, dr40);
  L585(i87, functions5):
    ind22 = ld ind;
    check L587() else D279();
  L740():
    variables_in_usages_not_in_code1 = force? variables_in_usages_not_in_code;
    checkMissing(variables_in_usages_not_in_code1);
    l22 = ld bad_doc_objects;
    attr__5 = ldf `attr<-`;
    check L741() else D376();
  L744():
    objects_missing_from_usages1 = force? objects_missing_from_usages;
    checkMissing(objects_missing_from_usages1);
    l23 = ld bad_doc_objects;
    attr__6 = ldf `attr<-`;
    check L745() else D379();
  D279():
    deopt 926 [i87, functions5, ind22];
  D280():
    deopt 931 [i89];
  D376():
    deopt 1240 [variables_in_usages_not_in_code1, l22, variables_in_usages_not_in_code1];
  D379():
    deopt 1250 [objects_missing_from_usages1, l23, objects_missing_from_usages1];
  L586():
    dx42 = getTryDispatchBuiltinValue(dr40);
    goto L105(i85, dx42);
  L587():
    ind23 = force? ind22;
    __17 = ldf `[` in base;
    r422 = dyn __17(functions5, ind23);
    goto L105(i87, r422);
  L588():
    p127 = prom<V +>{
      sym41 = ldf `as.character`;
      base41 = ldf `as.character` in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L1() else L2();
    L0(r424):
      return r424;
    L1():
      functions6 = ld functions;
      functions7 = force? functions6;
      checkMissing(functions7);
      as_character = ldf `as.character` in base;
      r425 = dyn as_character(functions7);
      goto L0(r425);
    L2():
      r423 = dyn base41(<sym functions>);
      goto L0(r423);
    };
    r427 = dyn _transform_S3_method_markup(p127);
    check L589() else D281();
  L741():
    r568 = dyn attr__5(l22, NULL, "variables_in_usages_not_in_code", variables_in_usages_not_in_code1);
    check L742() else D377();
  L745():
    r569 = dyn attr__6(l23, NULL, "objects_missing_from_usages", objects_missing_from_usages1);
    check L746() else D380();
  D281():
    deopt 933 [i89, r427];
  D377():
    deopt 1243 [variables_in_usages_not_in_code1, r568];
  D380():
    deopt 1253 [objects_missing_from_usages1, r569];
  L589():
    st functions = r427;
    _in_1 = ldf `%in%`;
    check L590() else D282();
  L742():
    st bad_doc_objects = r568;
    goto L141();
  L746():
    st bad_doc_objects = r569;
    functions_missing_from_usages2 = ld functions_missing_from_usages;
    check L747() else D381();
  D282():
    deopt 936 [i89];
  D381():
    deopt 1255 [functions_missing_from_usages2];
  L590():
    p128 = prom<V +>{
      functions8 = ld functions;
      functions9 = force? functions8;
      checkMissing(functions9);
      return functions9;
    };
    p129 = prom<V +>{
      functions_in_code8 = ld functions_in_code;
      functions_in_code9 = force? functions_in_code8;
      checkMissing(functions_in_code9);
      return functions_in_code9;
    };
    r430 = dyn _in_1(p128, p129);
    check L591() else D283();
  L747():
    functions_missing_from_usages3 = force? functions_missing_from_usages2;
    checkMissing(functions_missing_from_usages3);
    l24 = ld bad_doc_objects;
    attr__7 = ldf `attr<-`;
    check L748() else D382();
  D283():
    deopt 939 [i89, r430];
  D382():
    deopt 1258 [functions_missing_from_usages3, l24, functions_missing_from_usages3];
  L591():
    st ind = r430;
    mapply = ldf mapply;
    check L592() else D284();
  L748():
    r570 = dyn attr__7(l24, NULL, "functions_missing_from_usages", functions_missing_from_usages3);
    check L749() else D383();
  D284():
    deopt 942 [i89];
  D383():
    deopt 1261 [functions_missing_from_usages3, r570];
  L592():
    p130 = prom<V +>{
      functions10 = ld functions;
      functions11 = force? functions10;
      checkMissing(functions11);
      c79 = `is.object`(functions11);
      if c79 then L1() else L2(functions11);
    L0(dx45):
      return dx45;
    L1():
      dr42 = tryDispatchBuiltin.1("[", functions11);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(functions13):
      ind24 = ld ind;
      ind25 = force? ind24;
      __18 = ldf `[` in base;
      r431 = dyn __18(functions13, ind25);
      goto L0(r431);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx44);
    };
    p131 = prom<V +>{
      exprs44 = ld exprs;
      exprs45 = force? exprs44;
      checkMissing(exprs45);
      c80 = `is.object`(exprs45);
      if c80 then L1() else L2(exprs45);
    L0(dx47):
      return dx47;
    L1():
      dr44 = tryDispatchBuiltin.1("[", exprs45);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(exprs47):
      ind26 = ld ind;
      ind27 = force? ind26;
      __19 = ldf `[` in base;
      r433 = dyn __19(exprs47, ind27);
      goto L0(r433);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx46);
    };
    p132 = prom<V +>{
      r435 = clos inner799576941;
      return r435;
    };
    r437 = dyn mapply[, , FUN, SIMPLIFY](p130, p131, p132, FALSE);
    check L593() else D285();
  L749():
    st bad_doc_objects = r570;
    has_namespace6 = ld has_namespace;
    check L750() else D384();
  D285():
    deopt 949 [i89, r437];
  D384():
    deopt 1263 [has_namespace6];
  L593():
    st bad_functions = r437;
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L594() else L595();
  L750():
    has_namespace7 = force? has_namespace6;
    checkMissing(has_namespace7);
    l25 = ld bad_doc_objects;
    attr__8 = ldf `attr<-`;
    check L751() else D385();
  D385():
    deopt 1266 [has_namespace7, l25, has_namespace7];
  L106(i92, r439):
    c81 = `as.logical`(r439);
    if c81 then L598() else L107();
  L594():
    replace_exprs = ld replace_exprs;
    check L596() else D286();
  L595():
    r438 = dyn base42(<sym replace_exprs>);
    goto L106(i89, r438);
  L751():
    r571 = dyn attr__8(l25, NULL, "has_namespace", has_namespace7);
    check L752() else D386();
  D286():
    deopt 953 [i89, replace_exprs];
  D386():
    deopt 1269 [has_namespace7, r571];
  L107():
    goto L113(i92);
  L113(i107):
    do_call = ldf `do.call`;
    check L624() else D304();
  L596():
    replace_exprs1 = force? replace_exprs;
    checkMissing(replace_exprs1);
    length4 = ldf length in base;
    r440 = dyn length4(replace_exprs1);
    check L597() else D287();
  L598():
    paste2 = ldf paste0;
    check L599() else D288();
  L752():
    st bad_doc_objects = r571;
    bad_lines = ld bad_lines;
    check L753() else D387();
  D287():
    deopt 956 [i89, r440];
  D288():
    deopt 958 [i92];
  D304():
    deopt 1013 [i107];
  D387():
    deopt 1271 [bad_lines];
  L597():
    goto L106(i89, r440);
  L599():
    p135 = prom<V +>{
      vapply8 = ldf vapply;
      p133 = prom<V +>{
        replace_exprs2 = ld replace_exprs;
        replace_exprs3 = force? replace_exprs2;
        checkMissing(replace_exprs3);
        return replace_exprs3;
      };
      p134 = prom<V +>{
        r442 = clos inner3708401697;
        return r442;
      };
      r444 = dyn vapply8(p133, p134, "");
      return r444;
    };
    r446 = dyn paste2(p135, "<-");
    check L600() else D289();
  L624():
    p142 = prom<V +>{
      c87 = ld c;
      c88 = force? c87;
      checkMissing(c88);
      return c88;
    };
    p143 = prom<V +>{
      bad_functions2 = ld bad_functions;
      bad_functions3 = force? bad_functions2;
      checkMissing(bad_functions3);
      return bad_functions3;
    };
    r472 = dyn do_call(p142, p143);
    check L625() else D305();
  L753():
    bad_lines1 = force? bad_lines;
    checkMissing(bad_lines1);
    l26 = ld bad_doc_objects;
    attr__9 = ldf `attr<-`;
    check L754() else D388();
  D289():
    deopt 961 [i92, r446];
  D305():
    deopt 1016 [i107, r472];
  D388():
    deopt 1274 [bad_lines1, l26, bad_lines1];
  L600():
    st replace_funs = r446;
    _transform_S3_method_markup1 = ldf `.transform_S3_method_markup`;
    check L601() else D290();
  L625():
    st bad_functions = r472;
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L626() else L627();
  L754():
    r572 = dyn attr__9(l26, NULL, "bad_lines", bad_lines1);
    check L755() else D389();
  D290():
    deopt 964 [i92];
  D389():
    deopt 1277 [bad_lines1, r572];
  L114(i110, r474):
    c89 = `as.logical`(r474);
    if c89 then L630() else L115();
  L601():
    p136 = prom<V +>{
      replace_funs = ld replace_funs;
      replace_funs1 = force? replace_funs;
      checkMissing(replace_funs1);
      return replace_funs1;
    };
    r448 = dyn _transform_S3_method_markup1(p136);
    check L602() else D291();
  L626():
    bad_functions4 = ld bad_functions;
    check L628() else D306();
  L627():
    r473 = dyn base46(<sym bad_functions>);
    goto L114(i107, r473);
  L755():
    st bad_doc_objects = r572;
    l27 = ld bad_doc_objects;
    class__ = ldf `class<-`;
    check L756() else D390();
  D291():
    deopt 966 [i92, r448];
  D306():
    deopt 1020 [i107, bad_functions4];
  D390():
    deopt 1282 ["codoc", l27, "codoc"];
  L115():
    goto L117(i110);
  L117(i117):
    grepl = ldf grepl;
    check L637() else D310();
  L602():
    st replace_funs = r448;
    sym43 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L603() else L604();
  L628():
    bad_functions5 = force? bad_functions4;
    checkMissing(bad_functions5);
    length5 = ldf length in base;
    r475 = dyn length5(bad_functions5);
    check L629() else D307();
  L630():
    bad_functions6 = ld bad_functions;
    check L631() else D308();
  L756():
    r573 = dyn class__(l27, NULL, "codoc");
    check L757() else D391();
  D307():
    deopt 1023 [i107, r475];
  D308():
    deopt 1024 [i110, bad_functions6];
  D310():
    deopt 1034 [i117];
  D391():
    deopt 1284 ["codoc", r573];
  L108(i97, r450):
    st functions = r450;
    _in_2 = ldf `%in%`;
    check L608() else D295();
  L603():
    functions14 = ld functions;
    check L605() else D292();
  L604():
    r449 = dyn base43(<sym functions>, <sym replace_funs>);
    goto L108(i92, r449);
  L629():
    goto L114(i107, r475);
  L631():
    bad_functions7 = force? bad_functions6;
    checkMissing(bad_functions7);
    l11 = ld bad_doc_objects;
    c90 = `is.object`(l11);
    if c90 then L632() else L633(i110, bad_functions7, l11);
  L637():
    p144 = prom<V +>{
      _S4_method_markup_regexp = ld `.S4_method_markup_regexp`;
      _S4_method_markup_regexp1 = force? _S4_method_markup_regexp;
      checkMissing(_S4_method_markup_regexp1);
      return _S4_method_markup_regexp1;
    };
    p145 = prom<V +>{
      functions16 = ld functions;
      functions17 = force? functions16;
      checkMissing(functions17);
      return functions17;
    };
    r479 = dyn grepl(p144, p145);
    check L638() else D311();
  L757():
    st bad_doc_objects = r573;
    bad_doc_objects = ld bad_doc_objects;
    check L758() else D392();
  D292():
    deopt 970 [i92, functions14];
  D295():
    deopt 978 [i97];
  D311():
    deopt 1037 [i117, r479];
  D392():
    deopt 1286 [bad_doc_objects];
  L116(i116, bad_functions11, dx53):
    st bad_doc_objects = dx53;
    goto L117(i116);
  L605():
    functions15 = force? functions14;
    checkMissing(functions15);
    replace_funs2 = ld replace_funs;
    check L606() else D293();
  L608():
    p137 = prom<V +>{
      replace_funs4 = ld replace_funs;
      replace_funs5 = force? replace_funs4;
      checkMissing(replace_funs5);
      return replace_funs5;
    };
    p138 = prom<V +>{
      functions_in_code10 = ld functions_in_code;
      functions_in_code11 = force? functions_in_code10;
      checkMissing(functions_in_code11);
      return functions_in_code11;
    };
    r454 = dyn _in_2(p137, p138);
    check L609() else D296();
  L632():
    dr50 = tryDispatchBuiltin.0("[[<-", l11, bad_functions7);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L634() else L633(i110, bad_functions7, dr50);
  L633(i114, bad_functions9, l13):
    nm6 = ld nm;
    check L635() else D309();
  L638():
    st ind = r479;
    sym47 = ldf any;
    base47 = ldf any in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L639() else L640();
  L758():
    bad_doc_objects1 = force? bad_doc_objects;
    checkMissing(bad_doc_objects1);
    popenv;
    return bad_doc_objects1;
  D293():
    deopt 972 [i92, replace_funs2];
  D296():
    deopt 981 [i97, r454];
  D309():
    deopt 1027 [i114, bad_functions9, l13, bad_functions7, nm6];
  L118(i120, r481):
    c91 = `as.logical`(r481);
    if c91 then L643() else L119();
  L606():
    replace_funs3 = force? replace_funs2;
    checkMissing(replace_funs3);
    c82 = ldf c in base;
    r451 = dyn c82(functions15, replace_funs3);
    check L607() else D294();
  L609():
    st ind = r454;
    sym44 = ldf any;
    base44 = ldf any in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L610() else L611();
  L634():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L116(i110, bad_functions7, dx52);
  L635():
    nm7 = force? nm6;
    ____2 = ldf `[[<-` in base;
    r476 = dyn ____2(l13, bad_functions7, nm7);
    goto L116(i114, bad_functions9, r476);
  L639():
    ind34 = ld ind;
    check L641() else D312();
  L640():
    r480 = dyn base47(<sym ind>);
    goto L118(i117, r480);
  D294():
    deopt 975 [i92, r451];
  D312():
    deopt 1041 [i117, ind34];
  L109(i100, r456):
    c83 = `as.logical`(r456);
    if c83 then L614() else L110();
  L119():
    goto L121(i120);
  L121(i127):
    setdiff4 = ldf setdiff;
    check L650() else D316();
  L607():
    goto L108(i92, r451);
  L610():
    ind28 = ld ind;
    check L612() else D297();
  L611():
    r455 = dyn base44(<sym ind>);
    goto L109(i97, r455);
  L641():
    ind35 = force? ind34;
    checkMissing(ind35);
    any3 = ldf any in base;
    r482 = dyn any3(ind35);
    check L642() else D313();
  L643():
    functions18 = ld functions;
    check L644() else D314();
  D297():
    deopt 985 [i97, ind28];
  D313():
    deopt 1044 [i117, r482];
  D314():
    deopt 1045 [i120, functions18];
  D316():
    deopt 1055 [i127];
  L110():
    goto L112(i100, NULL);
  L112(i106, r468):
    goto L113(i106);
  L612():
    ind29 = force? ind28;
    checkMissing(ind29);
    any2 = ldf any in base;
    r457 = dyn any2(ind29);
    check L613() else D298();
  L614():
    mapply1 = ldf mapply;
    check L615() else D299();
  L642():
    goto L118(i117, r482);
  L644():
    functions19 = force? functions18;
    checkMissing(functions19);
    c92 = `is.object`(functions19);
    if c92 then L645() else L646(i120, functions19);
  L650():
    p146 = prom<V +>{
      functions22 = ld functions;
      functions23 = force? functions22;
      checkMissing(functions23);
      return functions23;
    };
    p147 = prom<V +>{
      objects_as_in2 = ld objects_as_in;
      objects_as_in3 = force? objects_as_in2;
      checkMissing(objects_as_in3);
      return objects_as_in3;
    };
    r487 = dyn setdiff4(p146, p147);
    check L651() else D317();
  D298():
    deopt 988 [i97, r457];
  D299():
    deopt 990 [i100];
  D317():
    deopt 1058 [i127, r487];
  L120(i126, dx55):
    st functions = dx55;
    goto L121(i126);
  L613():
    goto L109(i97, r457);
  L615():
    p139 = prom<V +>{
      replace_funs6 = ld replace_funs;
      replace_funs7 = force? replace_funs6;
      checkMissing(replace_funs7);
      c84 = `is.object`(replace_funs7);
      if c84 then L1() else L2(replace_funs7);
    L0(dx49):
      return dx49;
    L1():
      dr46 = tryDispatchBuiltin.1("[", replace_funs7);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(replace_funs9):
      ind30 = ld ind;
      ind31 = force? ind30;
      __20 = ldf `[` in base;
      r458 = dyn __20(replace_funs9, ind31);
      goto L0(r458);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx48);
    };
    p140 = prom<V +>{
      replace_exprs4 = ld replace_exprs;
      replace_exprs5 = force? replace_exprs4;
      checkMissing(replace_exprs5);
      c85 = `is.object`(replace_exprs5);
      if c85 then L1() else L2(replace_exprs5);
    L0(dx51):
      return dx51;
    L1():
      dr48 = tryDispatchBuiltin.1("[", replace_exprs5);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(replace_exprs7):
      ind32 = ld ind;
      ind33 = force? ind32;
      __21 = ldf `[` in base;
      r460 = dyn __21(replace_exprs7, ind33);
      goto L0(r460);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx50);
    };
    p141 = prom<V +>{
      r462 = clos inner799576941;
      return r462;
    };
    r464 = dyn mapply1[, , FUN, SIMPLIFY](p139, p140, p141, FALSE);
    check L616() else D300();
  L645():
    dr52 = tryDispatchBuiltin.1("[", functions19);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L647() else L646(i120, dr52);
  L646(i124, functions21):
    ind36 = ld ind;
    check L648() else D315();
  L651():
    st bad_functions = r487;
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L652() else L653();
  D300():
    deopt 997 [i100, r464];
  D315():
    deopt 1047 [i124, functions21, ind36];
  L122(i130, r489):
    c93 = `as.logical`(r489);
    if c93 then L656() else L123();
  L616():
    st bad_replace_funs = r464;
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L617() else L618();
  L647():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L120(i120, dx54);
  L648():
    ind37 = force? ind36;
    checkMissing(ind37);
    r483 = `!`(ind37);
    __22 = ldf `[` in base;
    r484 = dyn __22(functions21, r483);
    goto L120(i124, r484);
  L652():
    bad_functions13 = ld bad_functions;
    check L654() else D318();
  L653():
    r488 = dyn base48(<sym bad_functions>);
    goto L122(i127, r488);
  D318():
    deopt 1062 [i127, bad_functions13];
  L111(i105, r466):
    st bad_functions = r466;
    goto L112(i105, r466);
  L123():
    goto L125(i130);
  L125(i137):
    sym49 = ldf c;
    base49 = ldf c in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L663() else L664();
  L617():
    bad_functions = ld bad_functions;
    check L619() else D301();
  L618():
    r465 = dyn base45(<sym bad_functions>, <sym bad_replace_funs>);
    goto L111(i100, r465);
  L654():
    bad_functions14 = force? bad_functions13;
    checkMissing(bad_functions14);
    length6 = ldf length in base;
    r490 = dyn length6(bad_functions14);
    check L655() else D319();
  L656():
    bad_functions15 = ld bad_functions;
    check L657() else D320();
  D301():
    deopt 1001 [i100, bad_functions];
  D319():
    deopt 1065 [i127, r490];
  D320():
    deopt 1066 [i130, bad_functions15];
  L126(i140, r493):
    st functions_in_usages = r493;
    goto L78(i140);
  L619():
    bad_functions1 = force? bad_functions;
    checkMissing(bad_functions1);
    bad_replace_funs = ld bad_replace_funs;
    check L620() else D302();
  L655():
    goto L122(i127, r490);
  L657():
    bad_functions16 = force? bad_functions15;
    checkMissing(bad_functions16);
    l14 = ld functions_in_usages_not_in_code;
    c94 = `is.object`(l14);
    if c94 then L658() else L659(i130, bad_functions16, l14);
  L663():
    functions_in_usages = ld functions_in_usages;
    check L665() else D322();
  L664():
    r492 = dyn base49(<sym functions_in_usages>, <sym functions>);
    goto L126(i137, r492);
  D302():
    deopt 1003 [i100, bad_replace_funs];
  D322():
    deopt 1077 [i137, functions_in_usages];
  L124(i136, bad_functions20, dx58):
    st functions_in_usages_not_in_code = dx58;
    goto L125(i136);
  L620():
    bad_replace_funs1 = force? bad_replace_funs;
    checkMissing(bad_replace_funs1);
    c86 = ldf c in base;
    r467 = dyn c86(bad_functions1, bad_replace_funs1);
    check L621() else D303();
  L658():
    dr54 = tryDispatchBuiltin.0("[[<-", l14, bad_functions16);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L660() else L659(i130, bad_functions16, dr54);
  L659(i134, bad_functions18, l16):
    nm8 = ld nm;
    check L661() else D321();
  L665():
    functions_in_usages1 = force? functions_in_usages;
    checkMissing(functions_in_usages1);
    functions24 = ld functions;
    check L666() else D323();
  D303():
    deopt 1006 [i100, r467];
  D321():
    deopt 1069 [i134, bad_functions18, l16, bad_functions16, nm8];
  D323():
    deopt 1079 [i137, functions24];
  L621():
    goto L111(i100, r467);
  L660():
    dx57 = getTryDispatchBuiltinValue(dr54);
    goto L124(i130, bad_functions16, dx57);
  L661():
    nm9 = force? nm8;
    ____3 = ldf `[[<-` in base;
    r491 = dyn ____3(l16, bad_functions16, nm9);
    goto L124(i134, bad_functions18, r491);
  L666():
    functions25 = force? functions24;
    checkMissing(functions25);
    c95 = ldf c in base;
    r494 = dyn c95(functions_in_usages1, functions25);
    check L667() else D324();
  D324():
    deopt 1082 [i137, r494];
  L667():
    goto L126(i137, r494);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg get:cls, reg f1:*, reg f2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg f3:*, reg f4:V, reg typeof:cls, reg r5:V, reg r6:V |
    mkenv;
    st f = f;
    get = ldf get;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
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
    check L2() else D1();
  D1():
    deopt 5 [r2];
  L2():
    st f = r2;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r4):
    r6 = `==`(r4, "closure");
    popenv;
    return r6;
  L3():
    f3 = ld f;
    check L5() else D2();
  L4():
    r3 = dyn base(<sym f>);
    goto L0(r3);
  D2():
    deopt 9 [f3];
  L5():
    f4 = force? f3;
    checkMissing(f4);
    typeof = ldf typeof in base;
    r5 = dyn typeof(f4);
    check L6() else D3();
  D3():
    deopt 12 [r5];
  L6():
    goto L0(r5);
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg formals:cls, reg unRematchDef:cls, reg m1:*, reg m2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st m = m;
    formals = ldf formals;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      unRematchDef = ldf unRematchDef;
      p = prom<V +>{
        m1 = ld m;
        m2 = force? m1;
        checkMissing(m2);
        return m2;
      };
      r1 = dyn unRematchDef(p);
      return r1;
    };
    r3 = dyn formals(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1260482719(fName, ffd) {
  (reg fName:*, reg ffd:*) -+> V { var fName:*, var ffd:*, reg function_args_in_code:*, reg function_args_in_code1:V, reg c:L, reg function_args_in_code3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fName1:*, reg fName2:V, reg __:cls, reg r:V, reg isFALSE:cls, reg use_values:*, reg use_values1:V, reg p:p(V +), reg r2:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg ffc:*, reg ffc1:V, reg names:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg ffd1:*, reg ffd2:V, reg names1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ffc2:*, reg ffc3:V, reg ffd3:*, reg ffd4:V, reg identical:cls, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg ffc4:*, reg ffc5:V, reg names2:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg ffd5:*, reg ffd6:V, reg names3:cls, reg r20:V, reg identical1:cls, reg r21:V, reg c2:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg c6:L, reg r23:V, reg ffc6:*, reg ffc7:V, reg as_character:cls, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg c9:L, reg r26:V, reg ffd7:*, reg ffd8:V, reg as_character1:cls, reg r27:V, reg isTRUE:cls, reg use_values2:*, reg use_values3:V, reg p1:p(V +), reg r29:V, reg r30:V, reg c10:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg c15:L, reg r32:V, reg vffd:*, reg vffd1:V, reg nzchar:cls, reg r33:V, reg vffc:*, reg vffc1:V, reg c16:L, reg c18:L, reg vffc3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c20:L, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r34:V, reg vffd2:*, reg vffd3:V, reg c21:L, reg c23:L, reg vffd5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c25:L, reg dx5:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r35:V, reg c26:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg c29:L, reg r37:V, reg vffc4:*, reg vffc5:V, reg vffd6:*, reg vffd7:V, reg identical2:cls, reg r38:V, reg c30:L, reg c31:V, reg ident:*, reg ident1:V, reg r39:V, reg c33:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r40:V, reg r41:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r42:V, reg r43:V, reg fName3:*, reg fName4:V, reg ffc8:*, reg ffc9:V, reg ffd9:*, reg ffd10:V, reg list:cls, reg r44:V, reg list1:cls, reg r45:V |
    mkenv;
    st fName = fName;
    st ffd = ffd;
    function_args_in_code = ld function_args_in_code;
    check L20() else D0();
  D0():
    deopt 0 [function_args_in_code];
  L20():
    function_args_in_code1 = force? function_args_in_code;
    checkMissing(function_args_in_code1);
    c = `is.object`(function_args_in_code1);
    if c then L21() else L22(function_args_in_code1);
  L0(dx1):
    st ffc = dx1;
    isFALSE = ldf isFALSE;
    check L25() else D2();
  L21():
    dr = tryDispatchBuiltin.1("[[", function_args_in_code1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(function_args_in_code3):
    fName1 = ld fName;
    check L24() else D1();
  D1():
    deopt 2 [function_args_in_code3, fName1];
  D2():
    deopt 7 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L24():
    fName2 = force? fName1;
    __ = ldf `[[` in base;
    r = dyn __(function_args_in_code3, fName2);
    goto L0(r);
  L25():
    p = prom<V +>{
      use_values = ld `use.values`;
      use_values1 = force? use_values;
      checkMissing(use_values1);
      return use_values1;
    };
    r2 = dyn isFALSE(p);
    check L26() else D3();
  D3():
    deopt 9 [r2];
  L26():
    c1 = `as.logical`(r2);
    if c1 then L27() else L1();
  L1():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L5(r12):
    st ident = r12;
    ident = ld ident;
    check L86() else D31();
  L27():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  D31():
    deopt 119 [ident];
  L2(r4):
    st ffc = r4;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L6(r14):
    c2 = `as.logical`(r14);
    if c2 then L53() else L5(c2);
  L28():
    ffc = ld ffc;
    check L30() else D4();
  L29():
    r3 = dyn base(<sym ffc>);
    goto L2(r3);
  L42():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L43():
    r13 = dyn base3(<lang names(ffc)>, <lang names(ffd)>);
    goto L6(r13);
  L86():
    ident1 = force? ident;
    checkMissing(ident1);
    r39 = `!`(ident1);
    c33 = `as.logical`(r39);
    if c33 then L87() else L17();
  D4():
    deopt 12 [ffc];
  L3(r7):
    st ffd = r7;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L7(r16):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L17():
    invisible.0();
    popenv;
    return NULL;
  L30():
    ffc1 = force? ffc;
    checkMissing(ffc1);
    names = ldf names in base;
    r5 = dyn names(ffc1);
    check L31() else D5();
  L32():
    ffd1 = ld ffd;
    check L34() else D6();
  L33():
    r6 = dyn base1(<sym ffd>);
    goto L3(r6);
  L44():
    ffc4 = ld ffc;
    check L46() else D11();
  L45():
    r15 = dyn base4(<sym ffc>);
    goto L7(r15);
  L53():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L87():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L88() else L89();
  D5():
    deopt 15 [r5];
  D6():
    deopt 19 [ffd1];
  D11():
    deopt 43 [ffc4];
  L4(r10):
    goto L5(r10);
  L8(r19):
    identical1 = ldf identical in base;
    r21 = dyn identical1(r16, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L52() else D15();
  L9(c6, r23):
    st vffc = r23;
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  L18(r41):
    popenv;
    return r41;
  L31():
    goto L2(r5);
  L34():
    ffd2 = force? ffd1;
    checkMissing(ffd2);
    names1 = ldf names in base;
    r8 = dyn names1(ffd2);
    check L35() else D7();
  L36():
    ffc2 = ld ffc;
    check L38() else D8();
  L37():
    r9 = dyn base2(<sym ffc>, <sym ffd>);
    goto L4(r9);
  L46():
    ffc5 = force? ffc4;
    checkMissing(ffc5);
    names2 = ldf names in base;
    r17 = dyn names2(ffc5);
    check L47() else D12();
  L48():
    ffd5 = ld ffd;
    check L50() else D13();
  L49():
    r18 = dyn base5(<sym ffd>);
    goto L8(r18);
  L54():
    ffc6 = ld ffc;
    check L56() else D16();
  L55():
    r22 = dyn base6(<sym ffc>);
    goto L9(c2, r22);
  L88():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L90() else L91();
  L89():
    r40 = dyn base10(<lang list(name=fName, code=ffc, docs=ffd)>);
    goto L18(r40);
  D7():
    deopt 22 [r8];
  D8():
    deopt 26 [ffc2];
  D12():
    deopt 46 [r17];
  D13():
    deopt 49 [ffd5];
  D15():
    deopt 61 [r21];
  D16():
    deopt 64 [c2, ffc6];
  L10(c9, r26):
    st vffd = r26;
    isTRUE = ldf isTRUE;
    check L62() else D20();
  L19(r43):
    list1 = ldf list in base;
    r45 = dyn list1(r43);
    check L96() else D36();
  L35():
    goto L3(r8);
  L38():
    ffc3 = force? ffc2;
    checkMissing(ffc3);
    ffd3 = ld ffd;
    check L39() else D9();
  L47():
    goto L7(r17);
  L50():
    ffd6 = force? ffd5;
    checkMissing(ffd6);
    names3 = ldf names in base;
    r20 = dyn names3(ffd6);
    check L51() else D14();
  L52():
    goto L6(r21);
  L56():
    ffc7 = force? ffc6;
    checkMissing(ffc7);
    as_character = ldf `as.character` in base;
    r24 = dyn as_character(ffc7);
    check L57() else D17();
  L58():
    ffd7 = ld ffd;
    check L60() else D18();
  L59():
    r25 = dyn base7(<sym ffd>);
    goto L10(c6, r25);
  L90():
    fName3 = ld fName;
    check L92() else D32();
  L91():
    r42 = dyn base11[name, code, docs](<sym fName>, <sym ffc>, <sym ffd>);
    goto L19(r42);
  D9():
    deopt 28 [ffd3];
  D14():
    deopt 52 [r20];
  D17():
    deopt 67 [c2, r24];
  D18():
    deopt 71 [c6, ffd7];
  D20():
    deopt 77 [c9];
  D32():
    deopt 126 [fName3];
  D36():
    deopt 138 [r45];
  L39():
    ffd4 = force? ffd3;
    checkMissing(ffd4);
    identical = ldf identical in base;
    r11 = dyn identical(ffc3, ffd4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L40() else D10();
  L51():
    goto L8(r20);
  L57():
    goto L9(c2, r24);
  L60():
    ffd8 = force? ffd7;
    checkMissing(ffd8);
    as_character1 = ldf `as.character` in base;
    r27 = dyn as_character1(ffd8);
    check L61() else D19();
  L62():
    p1 = prom<V +>{
      use_values2 = ld `use.values`;
      use_values3 = force? use_values2;
      checkMissing(use_values3);
      return use_values3;
    };
    r29 = dyn isTRUE(p1);
    check L63() else D21();
  L92():
    fName4 = force? fName3;
    checkMissing(fName4);
    ffc8 = ld ffc;
    check L93() else D33();
  L96():
    goto L18(r45);
  D10():
    deopt 38 [r11];
  D19():
    deopt 74 [c6, r27];
  D21():
    deopt 79 [c9, r29];
  D33():
    deopt 129 [ffc8];
  L40():
    goto L4(r11);
  L61():
    goto L10(c6, r27);
  L63():
    r30 = `!`(r29);
    c10 = `as.logical`(r30);
    if c10 then L64() else L11();
  L93():
    ffc9 = force? ffc8;
    checkMissing(ffc9);
    ffd9 = ld ffd;
    check L94() else D34();
  D34():
    deopt 132 [ffd9];
  L11():
    goto L15(c9);
  L15(c26):
    sym9 = ldf identical;
    base9 = ldf identical in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L80() else L81();
  L64():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L65() else L66();
  L94():
    ffd10 = force? ffd9;
    checkMissing(ffd10);
    list = ldf list in base;
    r44 = dyn list(fName4, ffc9, ffd10);
    check L95() else D35();
  D35():
    deopt 136 [r44];
  L12(c15, r32):
    st ind = r32;
    vffc = ld vffc;
    check L69() else D24();
  L16(c29, r37):
    c30 = `as.logical`(r37);
    c31 = `&&`(c29, c30);
    goto L5(c31);
  L65():
    vffd = ld vffd;
    check L67() else D22();
  L66():
    r31 = dyn base8(<sym vffd>);
    goto L12(c9, r31);
  L80():
    vffc4 = ld vffc;
    check L82() else D28();
  L81():
    r36 = dyn base9(<sym vffc>, <sym vffd>);
    goto L16(c26, r36);
  L95():
    goto L19(r44);
  D22():
    deopt 83 [c9, vffd];
  D24():
    deopt 88 [c15, vffc];
  D28():
    deopt 104 [c26, vffc4];
  L67():
    vffd1 = force? vffd;
    checkMissing(vffd1);
    nzchar = ldf nzchar in base;
    r33 = dyn nzchar(vffd1);
    check L68() else D23();
  L69():
    vffc1 = force? vffc;
    checkMissing(vffc1);
    c16 = `is.object`(vffc1);
    if c16 then L70() else L71(c15, vffc1);
  L82():
    vffc5 = force? vffc4;
    checkMissing(vffc5);
    vffd6 = ld vffd;
    check L83() else D29();
  D23():
    deopt 86 [c9, r33];
  D29():
    deopt 106 [c26, vffd6];
  L13(c20, dx3):
    st vffc = dx3;
    vffd2 = ld vffd;
    check L74() else D26();
  L68():
    goto L12(c9, r33);
  L70():
    dr2 = tryDispatchBuiltin.1("[", vffc1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L72() else L71(c15, dr2);
  L71(c18, vffc3):
    ind = ld ind;
    check L73() else D25();
  L83():
    vffd7 = force? vffd6;
    checkMissing(vffd7);
    identical2 = ldf identical in base;
    r38 = dyn identical2(vffc5, vffd7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L84() else D30();
  D25():
    deopt 90 [c18, vffc3, ind];
  D26():
    deopt 94 [c20, vffd2];
  D30():
    deopt 116 [c26, r38];
  L72():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(c15, dx2);
  L73():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r34 = dyn __1(vffc3, ind1);
    goto L13(c18, r34);
  L74():
    vffd3 = force? vffd2;
    checkMissing(vffd3);
    c21 = `is.object`(vffd3);
    if c21 then L75() else L76(c20, vffd3);
  L84():
    goto L16(c26, r38);
  L14(c25, dx5):
    st vffd = dx5;
    goto L15(c25);
  L75():
    dr4 = tryDispatchBuiltin.1("[", vffd3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L77() else L76(c20, dr4);
  L76(c23, vffd5):
    ind2 = ld ind;
    check L78() else D27();
  D27():
    deopt 96 [c23, vffd5, ind2];
  L77():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(c20, dx4);
  L78():
    ind3 = force? ind2;
    __2 = ldf `[` in base;
    r35 = dyn __2(vffd5, ind3);
    goto L14(c23, r35);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    r5 = `!`(r1);
    popenv;
    return r5;
  L2():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang attr(x, "bad_lines")>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym x>, "bad_lines");
    goto L1(r2);
  D0():
    deopt 3 [x1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "bad_lines");
    check L7() else D1();
  D1():
    deopt 7 [r4];
  L7():
    goto L1(r4);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg as_character:cls, reg r3:V |
    mkenv;
    st e = e;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    e1 = ld e;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[[`(e, 2)>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L4():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L5() else L6(e2);
  L1(dx1):
    as_character = ldf `as.character` in base;
    r3 = dyn as_character(dx1);
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(e4):
    __ = ldf `[[` in base;
    r2 = dyn __(e4, 2);
    goto L1(r2);
  D1():
    deopt 8 [r3];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    goto L0(r3);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg check_codoc:cls, reg x1:*, reg x2:V, reg p:p(V +), reg as_pairlist:cls, reg as_alist_call:cls, reg y1:*, reg y2:V, reg c:L, reg y4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st x = x;
    st y = y;
    check_codoc = ldf check_codoc;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      as_pairlist = ldf `as.pairlist`;
      p2 = prom<V +>{
        as_alist_call = ldf `as.alist.call`;
        p1 = prom<V +>{
          y1 = ld y;
          y2 = force? y1;
          checkMissing(y2);
          c = `is.object`(y2);
          if c then L1() else L2(y2);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", y2);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(y4):
          __ = ldf `[` in base;
          r1 = dyn __(y4, -1);
          goto L0(r1);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r3 = dyn as_alist_call(p1);
        return r3;
      };
      r5 = dyn as_pairlist(p2);
      return r5;
    };
    r7 = dyn check_codoc(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    popenv;
    return r7;
  }
}