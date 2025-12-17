fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st checkS3methods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg matrix:cls, reg character:cls, reg r:V, reg p:p(V +), reg r2:V, reg character1:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg package1:*, reg package2:V, reg length:cls, reg r10:V, reg r11:V, reg c1:L, reg stop:cls, reg r12:V, reg find_package:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r16:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r18:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p4:p(V +), reg r20:V, reg r21:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg basename:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r28:V, reg r29:V, reg is_base:*, reg is_base1:V, reg r30:V, reg c3:L, reg _load_namespace_quietly:cls, reg package5:*, reg package6:V, reg p8:p(V +), reg dirname:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg asNamespace:cls, reg package7:*, reg package8:V, reg p11:p(V +), reg r38:V, reg is_base2:*, reg is_base3:V, reg r39:V, reg c4:L, reg getNamespaceInfo:cls, reg code_env:*, reg code_env1:V, reg p12:p(V +), reg r41:V, reg getNamespaceExports:cls, reg code_env2:*, reg code_env3:V, reg p13:p(V +), reg r43:V, reg r44:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg missing1:cls, reg r48:V, reg c5:L, reg stop2:cls, reg r49:V, reg dir_exists1:cls, reg dir9:*, reg dir10:V, reg p14:p(V +), reg r52:V, reg r53:V, reg c6:L, reg stop3:cls, reg gettextf1:cls, reg dir11:*, reg dir12:V, reg p15:p(V +), reg r55:V, reg p16:p(V +), reg r57:V, reg file_path_as_absolute:cls, reg dir13:*, reg dir14:V, reg p17:p(V +), reg r60:V, reg file_path1:cls, reg dir15:*, reg dir16:V, reg p18:p(V +), reg r62:V, reg dir_exists2:cls, reg code_dir2:*, reg code_dir3:V, reg p19:p(V +), reg r64:V, reg r65:V, reg c7:L, reg stop4:cls, reg gettextf2:cls, reg dir17:*, reg dir18:V, reg p20:p(V +), reg r67:V, reg p21:p(V +), reg r69:V, reg basename1:cls, reg dir19:*, reg dir20:V, reg p22:p(V +), reg r72:V, reg r73:V, reg new_env:cls, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg p23:p(V +), reg r75:V, reg file_path2:cls, reg dir21:*, reg dir22:V, reg p24:p(V +), reg r77:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p25:p(V +), reg r79:V, reg c8:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p26:p(V +), reg r81:V, reg r82:V, reg character2:cls, reg r83:V, reg _source_assignments_in_code_dir:cls, reg code_dir4:*, reg code_dir5:V, reg p27:p(V +), reg code_env4:*, reg code_env5:V, reg p28:p(V +), reg meta:*, reg meta1:V, reg p29:p(V +), reg r87:V, reg file_path3:cls, reg code_dir6:*, reg code_dir7:V, reg p30:p(V +), reg r89:V, reg file_test1:cls, reg sys_data_file:*, reg sys_data_file1:V, reg p31:p(V +), reg r91:V, reg c9:L, reg load:cls, reg sys_data_file2:*, reg sys_data_file3:V, reg p32:p(V +), reg code_env6:*, reg code_env7:V, reg p33:p(V +), reg r94:V, reg sort:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r96:V, reg r97:V, reg code_env8:*, reg code_env9:V, reg names:cls, reg r98:V, reg p34:p(V +), reg r100:V, reg file_exists:cls, reg file_path4:cls, reg dir23:*, reg dir24:V, reg p35:p(V +), reg r102:V, reg p36:p(V +), reg r104:V, reg c10:L, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r105:V, reg c15:L, reg r106:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg basename2:cls, reg dir25:*, reg dir26:V, reg p37:p(V +), reg r108:V, reg p38:p(V +), reg dirname1:cls, reg dir27:*, reg dir28:V, reg p39:p(V +), reg r111:V, reg p40:p(V +), reg r113:V, reg p41:p(V +), reg identity:*, reg identity1:V, reg p42:p(V +), reg r116:V, reg inherits:cls, reg r117:V, reg r118:V, reg c16:L, reg c17:V, reg c19:L, reg intersect:cls, reg objects_in_code:*, reg objects_in_code1:V, reg p43:p(V +), reg nsInfo:*, reg nsInfo1:V, reg c20:L, reg nsInfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r120:V, reg p44:p(V +), reg r122:V, reg nsInfo4:*, reg nsInfo5:V, reg c21:L, reg nsInfo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r123:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c22:L, reg x:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r124:V, reg i7:I, reg r125:V, reg exports:*, reg exports1:V, reg grep:cls, reg p45:*, reg p46:V, reg p47:p(V +), reg objects_in_code2:*, reg objects_in_code3:V, reg p48:p(V +), reg r128:V, reg c23:cls, reg r129:V, reg unique:cls, reg exports2:*, reg exports3:V, reg p49:p(V +), reg r131:V, reg _get_namespace_S3_methods_db:cls, reg nsInfo8:*, reg nsInfo9:V, reg p50:p(V +), reg r133:V, reg r134:cls, reg r135:cls, reg _make_S3_group_generic_env:cls, reg r136:V, reg _make_S3_primitive_generic_env:cls, reg r137:V, reg r138:cls, reg r139:cls, reg r140:cls, reg r141:cls, reg character3:cls, reg r142:V, reg funs_in_env:cls, reg code_env10:*, reg code_env11:V, reg p51:p(V +), reg r144:V, reg unique1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r145:V, reg r146:V, reg gens_in_env:cls, reg _BaseNamespaceEnv2:*, reg _BaseNamespaceEnv3:V, reg p52:p(V +), reg r148:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r149:V, reg r150:V, reg S3_group_generics_env:*, reg S3_group_generics_env1:V, reg names1:cls, reg r151:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r152:V, reg r153:V, reg S3_primitive_generics_env:*, reg S3_primitive_generics_env1:V, reg names2:cls, reg r154:V, reg _get_internal_S3_generics:cls, reg r155:V, reg c24:cls, reg r156:V, reg p53:p(V +), reg r158:V, reg is_base4:*, reg is_base5:V, reg c25:L, reg generics_in_base:*, reg generics_in_base1:V, reg gens_in_env1:cls, reg code_env12:*, reg code_env13:V, reg p54:p(V +), reg r160:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r161:V, reg r162:V, reg generics_in_code:*, reg generics_in_code1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r163:V, reg r164:V, reg missing2:cls, reg r165:V, reg r166:V, reg c26:L, reg setdiff:cls, reg gens_in_env2:cls, reg parent_env:cls, reg code_env14:*, reg code_env15:V, reg p55:p(V +), reg r168:V, reg p56:p(V +), reg r170:V, reg p57:p(V +), reg functions_in_code:*, reg functions_in_code1:V, reg p58:p(V +), reg r173:V, reg r174:V, reg setdiff1:cls, reg generics_in_base3:*, reg generics_in_base4:V, reg p59:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r176:V, reg r177:V, reg functions_in_code2:*, reg functions_in_code3:V, reg funs_in_env1:cls, reg parent_env1:cls, reg code_env16:*, reg code_env17:V, reg p60:p(V +), reg r179:V, reg p61:p(V +), reg r181:V, reg c27:cls, reg r182:V, reg p62:p(V +), reg r184:V, reg c28:cls, reg r185:V, reg nonS3methods:cls, reg basename3:cls, reg dir29:*, reg dir30:V, reg p63:p(V +), reg r187:V, reg p64:p(V +), reg r189:V, reg lapply:cls, reg generics:*, reg generics1:V, reg p65:p(V +), reg r191:cls, reg p66:p(V +), reg r193:V, reg do_call:cls, reg c29:*, reg c30:V, reg p67:p(V +), reg gnm:*, reg gnm1:V, reg p68:p(V +), reg r196:V, reg gnm2:*, reg gnm3:V, reg c31:L, reg gnm5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg setdiff2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r197:V, reg r198:V, reg gnm6:*, reg gnm7:V, reg names3:cls, reg r199:V, reg p69:p(V +), reg nsm:*, reg nsm1:V, reg p70:p(V +), reg r202:V, reg __:cls, reg r203:V, reg is_base6:*, reg is_base7:V, reg r204:V, reg c32:L, reg sprintf:cls, reg S3_methods_info:*, reg S3_methods_info1:V, reg c33:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r205:V, reg p71:p(V +), reg S3_methods_info4:*, reg S3_methods_info5:V, reg c34:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r207:V, reg p72:p(V +), reg r209:V, reg _in_:cls, reg vapply:cls, reg gnm8:*, reg gnm9:V, reg p73:p(V +), reg __3:*, reg __4:V, reg p74:p(V +), reg r212:V, reg p75:p(V +), reg intersect1:cls, reg generics_in_code2:*, reg generics_in_code3:V, reg p76:p(V +), reg exports4:*, reg exports5:V, reg p77:p(V +), reg r216:V, reg p78:p(V +), reg r218:V, reg setdiff3:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r219:V, reg r220:V, reg gnm10:*, reg gnm11:V, reg names4:cls, reg r221:V, reg c35:L, reg r223:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind:*, reg ind1:V, reg __5:cls, reg r224:V, reg p79:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r226:V, reg r227:V, reg g_c:*, reg g_c1:V, reg nsm2:*, reg nsm3:V, reg c36:cls, reg r228:V, reg p80:p(V +), reg r230:V, reg S3_methods_info8:*, reg S3_methods_info9:V, reg c37:L, reg S3_methods_info11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg _in_1:cls, reg g_c2:*, reg g_c3:V, reg p81:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r232:V, reg r233:V, reg gnm12:*, reg gnm13:V, reg names5:cls, reg r234:V, reg p82:p(V +), reg r236:V, reg r237:V, reg __6:cls, reg r238:V, reg S3_methods_info12:*, reg S3_methods_info13:V, reg c38:L, reg S3_methods_info15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r239:V, reg r240:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r241:V, reg S3_methods_info21:V, reg r242:V, reg S3_methods_info22:*, reg S3_methods_info23:V, reg c39:L, reg S3_methods_info26:V, reg dr16:V, reg dc8:L, reg dx16:V, reg S3_methods_info29:V, reg dx17:V, reg __7:cls, reg r243:V, reg as_character:cls, reg r244:V, reg is_na:cls, reg r245:V, reg __8:cls, reg r246:V, reg NROW:cls, reg S3_methods_info30:*, reg S3_methods_info31:V, reg p83:p(V +), reg r248:V, reg c40:L, reg apply:cls, reg S3_methods_info32:*, reg S3_methods_info33:V, reg p84:p(V +), reg one:*, reg one1:V, reg p85:p(V +), reg r251:V, reg vapply1:cls, reg add:*, reg add1:V, reg p86:p(V +), reg __9:*, reg __10:V, reg p87:p(V +), reg r254:V, reg l1:*, reg names__:cls, reg r255:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r256:V, reg r257:V, reg gnm14:*, reg gnm15:V, reg add2:*, reg add3:V, reg c41:cls, reg r258:V, reg r259:V, reg r261:cls, reg Filter:cls, reg length1:*, reg length2:V, reg p88:p(V +), reg lapply1:cls, reg gnm16:*, reg gnm17:V, reg p89:p(V +), reg r264:cls, reg p90:p(V +), reg r266:V, reg p91:p(V +), reg r268:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r269:V, reg r270:V, reg bad_methods:*, reg bad_methods1:V, reg length3:cls, reg r271:V, reg c42:L, reg c44:V, reg is_base8:*, reg is_base9:V, reg r272:V, reg c45:L, reg c46:V, reg c48:L, reg vapply2:cls, reg bad_methods2:*, reg bad_methods3:V, reg p92:p(V +), reg r274:cls, reg p93:p(V +), reg r276:V, reg _in_2:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r277:V, reg r278:V, reg bad_methods4:*, reg bad_methods5:V, reg names6:cls, reg r279:V, reg p94:p(V +), reg g_c4:*, reg g_c5:V, reg p95:p(V +), reg r282:V, reg r283:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r284:V, reg r285:V, reg i8:*, reg i9:V, reg _in_3:cls, reg gen:*, reg gen1:V, reg p96:p(V +), reg generics_in_base5:*, reg generics_in_base6:V, reg p97:p(V +), reg r288:V, reg r289:V, reg any:cls, reg r290:V, reg c49:L, reg which:cls, reg i10:*, reg i11:V, reg p98:p(V +), reg r292:V, reg intersect2:cls, reg gen2:*, reg gen3:V, reg p99:p(V +), reg generics_in_base7:*, reg generics_in_base8:V, reg p100:p(V +), reg r295:V, reg r296:cls, reg lapply2:cls, reg code_env18:*, reg code_env19:V, reg p101:p(V +), reg _find_calls:*, reg _find_calls1:V, reg p102:p(V +), reg predicate:*, reg predicate1:V, reg p103:p(V +), reg r300:V, reg _in_4:cls, reg gen4:*, reg gen5:V, reg c50:L, reg gen7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg p104:*, reg p105:V, reg __11:cls, reg r301:V, reg p106:p(V +), reg unique2:cls, reg _call_names:cls, reg unlist:cls, reg calls:*, reg calls1:V, reg p107:p(V +), reg r304:V, reg p108:p(V +), reg r306:V, reg p109:p(V +), reg r308:V, reg p110:p(V +), reg r310:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r311:V, reg r312:V, reg used:*, reg used1:V, reg all:cls, reg r313:V, reg r314:V, reg c51:L, reg p111:*, reg p112:V, reg c52:L, reg p114:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg used2:*, reg used3:V, reg r315:V, reg __12:cls, reg r316:V, reg r317:V, reg bad_methods6:*, reg bad_methods7:V, reg c53:L, reg bad_methods9:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg keep:*, reg keep1:V, reg __13:cls, reg r318:V, reg gen8:*, reg gen9:V, reg c54:L, reg gen11:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg keep2:*, reg keep3:V, reg __14:cls, reg r319:V, reg i12:*, reg i13:V, reg c55:L, reg i15:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg keep4:*, reg keep5:V, reg __15:cls, reg r320:V, reg dx28:V, reg _in_5:cls, reg gen12:*, reg gen13:V, reg p115:p(V +), reg generics2:*, reg generics3:V, reg p116:p(V +), reg r323:V, reg r324:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r325:V, reg r326:V, reg i16:*, reg i17:V, reg any1:cls, reg r327:V, reg c56:L, reg c58:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r328:V, reg c61:L, reg r329:V, reg _isMethodsDispatchOn:cls, reg r330:V, reg c62:L, reg c63:V, reg c65:L, reg which1:cls, reg i18:*, reg i19:V, reg p117:p(V +), reg r332:V, reg vapply3:cls, reg gen14:*, reg gen15:V, reg c66:L, reg gen17:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg p118:*, reg p119:V, reg __16:cls, reg r333:V, reg p120:p(V +), reg r335:cls, reg p121:p(V +), reg r337:V, reg r338:V, reg l2:*, reg c67:L, reg r340:V, reg l4:*, reg dr30:V, reg dc15:L, reg dx32:V, reg r342:V, reg dx33:V, reg p122:*, reg p123:V, reg ___:cls, reg r343:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r345:V, reg r346:V, reg i20:*, reg i21:V, reg any2:cls, reg r347:V, reg c68:L, reg c69:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r348:V, reg c73:L, reg r349:V, reg i22:*, reg i23:V, reg any3:cls, reg r350:V, reg c74:L, reg c75:V, reg c77:L, reg _in_6:cls, reg gen18:*, reg gen19:V, reg p124:p(V +), reg generics_in_code4:*, reg generics_in_code5:V, reg p125:p(V +), reg r353:V, reg bad_methods10:*, reg bad_methods11:V, reg c78:L, reg bad_methods13:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg i24:*, reg i25:V, reg i26:*, reg i27:V, reg r354:V, reg __17:cls, reg r355:V, reg bad_methods14:*, reg bad_methods15:V, reg c79:L, reg bad_methods17:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg i28:*, reg i29:V, reg i30:*, reg i31:V, reg r356:V, reg r357:V, reg __18:cls, reg r358:V, reg bad_methods18:*, reg bad_methods19:V, reg c80:L, reg bad_methods21:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg i32:*, reg i33:V, reg __19:cls, reg r359:V, reg bad_methods22:*, reg bad_methods23:V, reg c81:L, reg bad_methods25:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg i34:*, reg i35:V, reg r360:V, reg i36:*, reg i37:V, reg r361:V, reg r362:V, reg __20:cls, reg r363:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r364:V, reg r365:V, reg bad_methods_not_registered_with_generic_in_code:*, reg bad_methods_not_registered_with_generic_in_code1:V, reg length4:cls, reg r366:V, reg c82:L, reg bad_methods_not_registered_with_generic_in_code2:*, reg bad_methods_not_registered_with_generic_in_code3:V, reg l5:*, reg attr__:cls, reg r367:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r368:V, reg r369:V, reg bad_methods_not_registered_with_generic_not_in_code:*, reg bad_methods_not_registered_with_generic_not_in_code1:V, reg length5:cls, reg r370:V, reg c83:L, reg bad_methods_not_registered_with_generic_not_in_code2:*, reg bad_methods_not_registered_with_generic_not_in_code3:V, reg l6:*, reg attr__1:cls, reg r371:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r372:V, reg r373:V, reg bad_methods_registered_for_non_generic:*, reg bad_methods_registered_for_non_generic1:V, reg length6:cls, reg r374:V, reg c84:L, reg bad_methods_registered_for_non_generic2:*, reg bad_methods_registered_for_non_generic3:V, reg l7:*, reg attr__2:cls, reg r375:V, reg bad_methods_registered_for_non_generic4:V, reg bad_methods_registered_for_non_generic5:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r376:V, reg r377:V, reg methods_not_registered_with_exported_generic:*, reg methods_not_registered_with_exported_generic1:V, reg length7:cls, reg r378:V, reg c85:L, reg methods_not_registered_with_exported_generic2:*, reg methods_not_registered_with_exported_generic3:V, reg l8:*, reg attr__3:cls, reg r379:V, reg l9:*, reg class__:cls, reg r380:V, reg bad_methods26:*, reg bad_methods27:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    matrix = ldf matrix;
    check L88() else D0();
  D0():
    deopt 1 [];
  L88():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    r2 = dyn matrix(p, 0, 4);
    check L89() else D1();
  D1():
    deopt 5 [r2];
  L89():
    st S3_methods_info = r2;
    character1 = ldf character;
    check L90() else D2();
  D2():
    deopt 8 [];
  L90():
    r3 = dyn character1();
    check L91() else D3();
  D3():
    deopt 9 [r3];
  L91():
    st exports = r3;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L92() else L93();
  L1(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L94() else L2();
  L92():
    missing = ldf missing in base;
    r6 = dyn missing(<sym package>);
    goto L1(r6);
  L93():
    r4 = dyn base(<sym package>);
    goto L1(r4);
  L2():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L130() else L131();
  L12():
    r134 = clos inner860501261;
    st funs_in_env = r134;
    r135 = clos inner860501261;
    st gens_in_env = r135;
    _make_S3_group_generic_env = ldf `.make_S3_group_generic_env`;
    check L207() else D80();
  L94():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L95() else L96();
  D80():
    deopt 262 [];
  L3(r9):
    r11 = `!=`(r9, 1);
    c1 = `as.logical`(r11);
    if c1 then L99() else L4();
  L13(r47):
    c5 = `as.logical`(r47);
    if c5 then L132() else L14();
  L95():
    package1 = ld package;
    check L97() else D4();
  L96():
    r8 = dyn base1(<sym package>);
    goto L3(r8);
  L130():
    missing1 = ldf missing in base;
    r48 = dyn missing1(<sym dir>);
    goto L13(r48);
  L131():
    r46 = dyn base2(<sym dir>);
    goto L13(r46);
  L207():
    r136 = dyn _make_S3_group_generic_env();
    check L208() else D81();
  D4():
    deopt 17 [package1];
  D81():
    deopt 263 [r136];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L103() else D8();
  L14():
    goto L15();
  L15():
    dir_exists1 = ldf `dir.exists`;
    check L136() else D30();
  L97():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r10 = dyn length(package2);
    check L98() else D5();
  L99():
    stop = ldf stop;
    check L100() else D6();
  L132():
    stop2 = ldf stop;
    check L133() else D28();
  L208():
    st S3_group_generics_env = r136;
    _make_S3_primitive_generic_env = ldf `.make_S3_primitive_generic_env`;
    check L209() else D82();
  D5():
    deopt 20 [r10];
  D6():
    deopt 24 [];
  D8():
    deopt 30 [];
  D28():
    deopt 96 [];
  D30():
    deopt 102 [];
  D82():
    deopt 266 [];
  L98():
    goto L3(r10);
  L100():
    r12 = dyn stop("argument 'package' must be of length 1");
    check L101() else D7();
  L103():
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
    r16 = dyn find_package(p1, p2);
    check L104() else D9();
  L133():
    r49 = dyn stop2("you must specify 'package' or 'dir'");
    check L134() else D29();
  L136():
    p14 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r52 = dyn dir_exists1(p14);
    check L137() else D31();
  L209():
    r137 = dyn _make_S3_primitive_generic_env();
    check L210() else D83();
  D7():
    deopt 26 [r12];
  D9():
    deopt 33 [r16];
  D29():
    deopt 98 [r49];
  D31():
    deopt 104 [r52];
  D83():
    deopt 267 [r137];
  L101():
    goto L5();
  L104():
    st dir = r16;
    file_path = ldf `file.path`;
    check L105() else D10();
  L134():
    goto L15();
  L137():
    r53 = `!`(r52);
    c6 = `as.logical`(r53);
    if c6 then L138() else L16();
  L210():
    st S3_primitive_generics_env = r137;
    r138 = clos inner2286194983;
    st nfg = r138;
    r139 = clos inner1384373858;
    st nff = r139;
    r140 = clos inner3708401697;
    st one = r140;
    r141 = clos inner866770041;
    st gen_dot_cls_matches = r141;
    character3 = ldf character;
    check L211() else D84();
  D10():
    deopt 36 [];
  D84():
    deopt 282 [];
  L16():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L142() else D34();
  L17():
    file_path1 = ldf `file.path`;
    check L144() else D36();
  L105():
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r18 = dyn file_path(p3, "R");
    check L106() else D11();
  L138():
    stop3 = ldf stop;
    check L139() else D32();
  L211():
    r142 = dyn character3();
    check L212() else D85();
  D11():
    deopt 39 [r18];
  D32():
    deopt 107 [];
  D34():
    deopt 113 [];
  D36():
    deopt 118 [];
  D85():
    deopt 283 [r142];
  L106():
    st code_dir = r18;
    dir_exists = ldf `dir.exists`;
    check L107() else D12();
  L139():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r55 = dyn gettextf1("directory '%s' does not exist", p15);
      return r55;
    };
    r57 = dyn stop3[, domain](p16, NA_LGL);
    check L140() else D33();
  L142():
    p17 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r60 = dyn file_path_as_absolute(p17);
    check L143() else D35();
  L144():
    p18 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r62 = dyn file_path1(p18, "R");
    check L145() else D37();
  L212():
    st `g.c` = r142;
    st methods_not_registered_with_exported_generic = r142;
    funs_in_env = ldf funs_in_env;
    check L213() else D86();
  D12():
    deopt 42 [];
  D33():
    deopt 111 [r57];
  D35():
    deopt 115 [r60];
  D37():
    deopt 121 [r62];
  D86():
    deopt 287 [];
  L107():
    p4 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r20 = dyn dir_exists(p4);
    check L108() else D13();
  L140():
    goto L17();
  L143():
    st dir = r60;
    goto L17();
  L145():
    st code_dir = r62;
    dir_exists2 = ldf `dir.exists`;
    check L146() else D38();
  L213():
    p51 = prom<V +>{
      code_env10 = ld code_env;
      code_env11 = force? code_env10;
      checkMissing(code_env11);
      return code_env11;
    };
    r144 = dyn funs_in_env(p51);
    check L214() else D87();
  D13():
    deopt 44 [r20];
  D38():
    deopt 124 [];
  D87():
    deopt 289 [r144];
  L108():
    r21 = `!`(r20);
    c2 = `as.logical`(r21);
    if c2 then L109() else L6();
  L146():
    p19 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r64 = dyn dir_exists2(p19);
    check L147() else D39();
  L214():
    st functions_in_code = r144;
    unique1 = ldf unique;
    check L215() else D88();
  D39():
    deopt 126 [r64];
  D88():
    deopt 292 [];
  L6():
    goto L7();
  L7():
    basename = ldf basename;
    check L113() else D16();
  L109():
    stop1 = ldf stop;
    check L110() else D14();
  L147():
    r65 = `!`(r64);
    c7 = `as.logical`(r65);
    if c7 then L148() else L18();
  L215():
    p53 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r146):
      return r146;
    L3():
      gens_in_env = ldf gens_in_env;
      p52 = prom<V +>{
        _BaseNamespaceEnv2 = ld `.BaseNamespaceEnv`;
        _BaseNamespaceEnv3 = force? _BaseNamespaceEnv2;
        checkMissing(_BaseNamespaceEnv3);
        return _BaseNamespaceEnv3;
      };
      r148 = dyn gens_in_env(p52);
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L4():
      r145 = dyn base6(<lang gens_in_env(.BaseNamespaceEnv)>, <lang names(S3_group_generics_env)>, <lang names(S3_primitive_generics_env)>, <lang .get_internal_S3_generics()>);
      goto L0(r145);
    L1(r150):
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L7() else L8();
    L5():
      S3_group_generics_env = ld S3_group_generics_env;
      S3_group_generics_env1 = force? S3_group_generics_env;
      checkMissing(S3_group_generics_env1);
      names1 = ldf names in base;
      r151 = dyn names1(S3_group_generics_env1);
      goto L1(r151);
    L6():
      r149 = dyn base7(<sym S3_group_generics_env>);
      goto L1(r149);
    L2(r153):
      _get_internal_S3_generics = ldf `.get_internal_S3_generics`;
      r155 = dyn _get_internal_S3_generics();
      c24 = ldf c in base;
      r156 = dyn c24(r148, r150, r153, r155);
      goto L0(r156);
    L7():
      S3_primitive_generics_env = ld S3_primitive_generics_env;
      S3_primitive_generics_env1 = force? S3_primitive_generics_env;
      checkMissing(S3_primitive_generics_env1);
      names2 = ldf names in base;
      r154 = dyn names2(S3_primitive_generics_env1);
      goto L2(r154);
    L8():
      r152 = dyn base8(<sym S3_primitive_generics_env>);
      goto L2(r152);
    };
    r158 = dyn unique1(p53);
    check L216() else D89();
  D14():
    deopt 47 [];
  D16():
    deopt 55 [];
  D89():
    deopt 294 [r158];
  L18():
    goto L19();
  L19():
    basename1 = ldf basename;
    check L152() else D42();
  L110():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r23 = dyn gettextf("directory '%s' does not contain R code", p5);
      return r23;
    };
    r25 = dyn stop1[, domain](p6, NA_LGL);
    check L111() else D15();
  L113():
    p7 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r28 = dyn basename(p7);
    check L114() else D17();
  L148():
    stop4 = ldf stop;
    check L149() else D40();
  L216():
    st generics_in_base = r158;
    is_base4 = ld is_base;
    check L217() else D90();
  D15():
    deopt 51 [r25];
  D17():
    deopt 57 [r28];
  D40():
    deopt 129 [];
  D42():
    deopt 137 [];
  D90():
    deopt 296 [is_base4];
  L111():
    goto L7();
  L114():
    r29 = `==`(r28, "base");
    st is_base = r29;
    is_base = ld is_base;
    check L115() else D18();
  L149():
    p21 = prom<V +>{
      gettextf2 = ldf gettextf;
      p20 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r67 = dyn gettextf2("directory '%s' does not contain R code", p20);
      return r67;
    };
    r69 = dyn stop4[, domain](p21, NA_LGL);
    check L150() else D41();
  L152():
    p22 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r72 = dyn basename1(p22);
    check L153() else D43();
  L217():
    is_base5 = force? is_base4;
    checkMissing(is_base5);
    c25 = `as.logical`(is_base5);
    if c25 then L218() else L30();
  D18():
    deopt 61 [is_base];
  D41():
    deopt 133 [r69];
  D43():
    deopt 139 [r72];
  L30():
    gens_in_env1 = ldf gens_in_env;
    check L221() else D92();
  L31():
    nonS3methods = ldf nonS3methods;
    check L235() else D100();
  L115():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    r30 = `!`(is_base1);
    c3 = `as.logical`(r30);
    if c3 then L116() else L8();
  L150():
    goto L19();
  L153():
    r73 = `==`(r72, "base");
    st is_base = r73;
    new_env = ldf `new.env`;
    check L154() else D44();
  L218():
    generics_in_base = ld generics_in_base;
    check L219() else D91();
  D44():
    deopt 144 [];
  D91():
    deopt 298 [generics_in_base];
  D92():
    deopt 303 [];
  D100():
    deopt 331 [];
  L8():
    goto L9();
  L9():
    asNamespace = ldf asNamespace;
    check L120() else D21();
  L116():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L117() else D19();
  L154():
    p23 = prom<V +>{
      _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
      _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
      checkMissing(_BaseNamespaceEnv1);
      return _BaseNamespaceEnv1;
    };
    r75 = dyn new_env[hash, parent](TRUE, p23);
    check L155() else D45();
  L219():
    generics_in_base1 = force? generics_in_base;
    checkMissing(generics_in_base1);
    st generics_in_code = generics_in_base1;
    st generics = generics_in_base1;
    goto L31();
  L221():
    p54 = prom<V +>{
      code_env12 = ld code_env;
      code_env13 = force? code_env12;
      checkMissing(code_env13);
      return code_env13;
    };
    r160 = dyn gens_in_env1(p54);
    check L222() else D93();
  L235():
    p64 = prom<V +>{
      basename3 = ldf basename;
      p63 = prom<V +>{
        dir29 = ld dir;
        dir30 = force? dir29;
        checkMissing(dir30);
        return dir30;
      };
      r187 = dyn basename3(p63);
      return r187;
    };
    r189 = dyn nonS3methods(p64);
    check L236() else D101();
  D19():
    deopt 65 [];
  D21():
    deopt 72 [];
  D45():
    deopt 149 [r75];
  D93():
    deopt 305 [r160];
  D101():
    deopt 333 [r189];
  L117():
    p8 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p10 = prom<V +>{
      dirname = ldf dirname;
      p9 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r33 = dyn dirname(p9);
      return r33;
    };
    r35 = dyn _load_namespace_quietly(p8, p10);
    check L118() else D20();
  L120():
    p11 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r38 = dyn asNamespace(p11);
    check L121() else D22();
  L155():
    st code_env = r75;
    file_path2 = ldf `file.path`;
    check L156() else D46();
  L222():
    st generics_in_code = r160;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L223() else L224();
  L236():
    st nsm = r189;
    lapply = ldf lapply;
    check L237() else D102();
  D20():
    deopt 68 [r35];
  D22():
    deopt 74 [r38];
  D46():
    deopt 152 [];
  D102():
    deopt 336 [];
  L32(r162):
    st generics = r162;
    goto L31();
  L118():
    goto L9();
  L121():
    st code_env = r38;
    is_base2 = ld is_base;
    check L122() else D23();
  L156():
    p24 = prom<V +>{
      dir21 = ld dir;
      dir22 = force? dir21;
      checkMissing(dir22);
      return dir22;
    };
    r77 = dyn file_path2(p24, "DESCRIPTION");
    check L157() else D47();
  L223():
    generics_in_code = ld generics_in_code;
    check L225() else D94();
  L224():
    r161 = dyn base9(<sym generics_in_code>, <lang if(`!`(missing(package)), setdiff(gens_in_env(parent.env(code_env)), functions_in_code))>, <lang setdiff(generics_in_base, c(functions_in_code, funs_in_env(parent.env(code_env))))>);
    goto L32(r161);
  L237():
    p65 = prom<V +>{
      generics = ld generics;
      generics1 = force? generics;
      checkMissing(generics1);
      return generics1;
    };
    p66 = prom<V +>{
      r191 = clos inner3355313315;
      return r191;
    };
    r193 = dyn lapply(p65, p66);
    check L238() else D103();
  D23():
    deopt 76 [is_base2];
  D47():
    deopt 155 [r77];
  D94():
    deopt 309 [generics_in_code];
  D103():
    deopt 339 [r193];
  L122():
    is_base3 = force? is_base2;
    checkMissing(is_base3);
    r39 = `!`(is_base3);
    c4 = `as.logical`(r39);
    if c4 then L123() else L10();
  L157():
    st dfile = r77;
    file_test = ldf file_test;
    check L158() else D48();
  L225():
    generics_in_code1 = force? generics_in_code;
    checkMissing(generics_in_code1);
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L226() else L227();
  L238():
    st gnm = r193;
    do_call = ldf `do.call`;
    check L239() else D104();
  D48():
    deopt 158 [];
  D104():
    deopt 342 [];
  L10():
    goto L11(NULL);
  L11(r44):
    goto L12();
  L33(r164):
    r166 = `!`(r164);
    c26 = `as.logical`(r166);
    if c26 then L228() else L34();
  L123():
    getNamespaceInfo = ldf getNamespaceInfo;
    check L124() else D24();
  L158():
    p25 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r79 = dyn file_test("-f", p25);
    check L159() else D49();
  L226():
    missing2 = ldf missing in base;
    r165 = dyn missing2(<sym package>);
    goto L33(r165);
  L227():
    r163 = dyn base10(<sym package>);
    goto L33(r163);
  L239():
    p67 = prom<V +>{
      c29 = ld c;
      c30 = force? c29;
      checkMissing(c30);
      return c30;
    };
    p68 = prom<V +>{
      gnm = ld gnm;
      gnm1 = force? gnm;
      checkMissing(gnm1);
      return gnm1;
    };
    r196 = dyn do_call(p67, p68);
    check L240() else D105();
  D24():
    deopt 80 [];
  D49():
    deopt 161 [r79];
  D105():
    deopt 345 [r196];
  L34():
    goto L35(NULL);
  L35(r174):
    setdiff1 = ldf setdiff;
    check L232() else D97();
  L124():
    p12 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r41 = dyn getNamespaceInfo(p12, "S3methods");
    check L125() else D25();
  L159():
    c8 = `as.logical`(r79);
    if c8 then L160() else L20();
  L228():
    setdiff = ldf setdiff;
    check L229() else D95();
  L240():
    st gnm = r196;
    gnm2 = ld gnm;
    check L241() else D106();
  D25():
    deopt 83 [r41];
  D95():
    deopt 316 [];
  D97():
    deopt 323 [];
  D106():
    deopt 347 [gnm2];
  L20():
    character2 = ldf character;
    check L164() else D52();
  L21(r82):
    st meta = r82;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L166() else D54();
  L125():
    st S3_methods_info = r41;
    getNamespaceExports = ldf getNamespaceExports;
    check L126() else D26();
  L160():
    _read_description = ldf `.read_description`;
    check L161() else D50();
  L229():
    p57 = prom<V +>{
      gens_in_env2 = ldf gens_in_env;
      p56 = prom<V +>{
        parent_env = ldf `parent.env`;
        p55 = prom<V +>{
          code_env14 = ld code_env;
          code_env15 = force? code_env14;
          checkMissing(code_env15);
          return code_env15;
        };
        r168 = dyn parent_env(p55);
        return r168;
      };
      r170 = dyn gens_in_env2(p56);
      return r170;
    };
    p58 = prom<V +>{
      functions_in_code = ld functions_in_code;
      functions_in_code1 = force? functions_in_code;
      checkMissing(functions_in_code1);
      return functions_in_code1;
    };
    r173 = dyn setdiff(p57, p58);
    check L230() else D96();
  L232():
    p59 = prom<V +>{
      generics_in_base3 = ld generics_in_base;
      generics_in_base4 = force? generics_in_base3;
      checkMissing(generics_in_base4);
      return generics_in_base4;
    };
    p62 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r177):
      return r177;
    L1():
      functions_in_code2 = ld functions_in_code;
      functions_in_code3 = force? functions_in_code2;
      checkMissing(functions_in_code3);
      funs_in_env1 = ldf funs_in_env;
      p61 = prom<V +>{
        parent_env1 = ldf `parent.env`;
        p60 = prom<V +>{
          code_env16 = ld code_env;
          code_env17 = force? code_env16;
          checkMissing(code_env17);
          return code_env17;
        };
        r179 = dyn parent_env1(p60);
        return r179;
      };
      r181 = dyn funs_in_env1(p61);
      c27 = ldf c in base;
      r182 = dyn c27(functions_in_code3, r181);
      goto L0(r182);
    L2():
      r176 = dyn base11(<sym functions_in_code>, <lang funs_in_env(parent.env(code_env))>);
      goto L0(r176);
    };
    r184 = dyn setdiff1(p59, p62);
    check L233() else D98();
  L241():
    gnm3 = force? gnm2;
    checkMissing(gnm3);
    c31 = `is.object`(gnm3);
    if c31 then L242() else L243(gnm3);
  D26():
    deopt 86 [];
  D50():
    deopt 163 [];
  D52():
    deopt 167 [];
  D54():
    deopt 171 [];
  D96():
    deopt 319 [r173];
  D98():
    deopt 326 [r184];
  L36(dx5):
    st gnm = dx5;
    is_base6 = ld is_base;
    check L247() else D109();
  L126():
    p13 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    r43 = dyn getNamespaceExports(p13);
    check L127() else D27();
  L161():
    p26 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r81 = dyn _read_description(p26);
    check L162() else D51();
  L164():
    r83 = dyn character2();
    check L165() else D53();
  L166():
    p27 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    p28 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    p29 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r87 = dyn _source_assignments_in_code_dir(p27, p28, p29);
    check L167() else D55();
  L230():
    goto L35(r173);
  L233():
    c28 = ldf c in base;
    r185 = dyn c28(generics_in_code1, r174, r184);
    check L234() else D99();
  L242():
    dr4 = tryDispatchBuiltin.1("[", gnm3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L244() else L243(dr4);
  L243(gnm5):
    setdiff2 = ldf setdiff;
    check L245() else D107();
  D27():
    deopt 88 [r43];
  D51():
    deopt 165 [r81];
  D53():
    deopt 168 [r83];
  D55():
    deopt 175 [r87];
  D99():
    deopt 328 [r185];
  D107():
    deopt 350 [gnm5];
  D109():
    deopt 356 [is_base6];
  L127():
    st exports = r43;
    goto L11(r43);
  L162():
    goto L21(r81);
  L165():
    goto L21(r83);
  L167():
    file_path3 = ldf `file.path`;
    check L168() else D56();
  L234():
    goto L32(r185);
  L244():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L36(dx4);
  L245():
    p69 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r198):
      return r198;
    L1():
      gnm6 = ld gnm;
      gnm7 = force? gnm6;
      checkMissing(gnm7);
      names3 = ldf names in base;
      r199 = dyn names3(gnm7);
      goto L0(r199);
    L2():
      r197 = dyn base12(<sym gnm>);
      goto L0(r197);
    };
    p70 = prom<V +>{
      nsm = ld nsm;
      nsm1 = force? nsm;
      checkMissing(nsm1);
      return nsm1;
    };
    r202 = dyn setdiff2(p69, p70);
    check L246() else D108();
  L247():
    is_base7 = force? is_base6;
    checkMissing(is_base7);
    r204 = `!`(is_base7);
    c32 = `as.logical`(r204);
    if c32 then L248() else L37();
  D56():
    deopt 177 [];
  D108():
    deopt 353 [gnm5, r202];
  L37():
    goto L46();
  L46():
    r261 = clos inner483500304;
    st check_args = r261;
    Filter = ldf Filter;
    check L291() else D134();
  L168():
    p30 = prom<V +>{
      code_dir6 = ld code_dir;
      code_dir7 = force? code_dir6;
      checkMissing(code_dir7);
      return code_dir7;
    };
    r89 = dyn file_path3(p30, "sysdata.rda");
    check L169() else D57();
  L246():
    __ = ldf `[` in base;
    r203 = dyn __(gnm5, r202);
    goto L36(r203);
  L248():
    sprintf = ldf sprintf;
    check L249() else D110();
  D57():
    deopt 180 [r89];
  D110():
    deopt 360 [];
  D134():
    deopt 456 [];
  L169():
    st sys_data_file = r89;
    file_test1 = ldf file_test;
    check L170() else D58();
  L249():
    p71 = prom<V +>{
      S3_methods_info = ld S3_methods_info;
      S3_methods_info1 = force? S3_methods_info;
      checkMissing(S3_methods_info1);
      c33 = `is.object`(S3_methods_info1);
      if c33 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", S3_methods_info1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r205 = dyn __1(S3_methods_info1, <missing>, 1);
      goto L0(r205);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p72 = prom<V +>{
      S3_methods_info4 = ld S3_methods_info;
      S3_methods_info5 = force? S3_methods_info4;
      checkMissing(S3_methods_info5);
      c34 = `is.object`(S3_methods_info5);
      if c34 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", S3_methods_info5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r207 = dyn __2(S3_methods_info5, <missing>, 2);
      goto L0(r207);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r209 = dyn sprintf("%s.%s", p71, p72);
    check L250() else D111();
  L291():
    p88 = prom<V +>{
      length1 = ld length;
      length2 = force? length1;
      checkMissing(length2);
      return length2;
    };
    p91 = prom<V +>{
      lapply1 = ldf lapply;
      p89 = prom<V +>{
        gnm16 = ld gnm;
        gnm17 = force? gnm16;
        checkMissing(gnm17);
        return gnm17;
      };
      p90 = prom<V +>{
        r264 = clos inner3708401697;
        return r264;
      };
      r266 = dyn lapply1(p89, p90);
      return r266;
    };
    r268 = dyn Filter(p88, p91);
    check L292() else D135();
  D58():
    deopt 183 [];
  D111():
    deopt 364 [r209];
  D135():
    deopt 459 [r268];
  L170():
    p31 = prom<V +>{
      sys_data_file = ld sys_data_file;
      sys_data_file1 = force? sys_data_file;
      checkMissing(sys_data_file1);
      return sys_data_file1;
    };
    r91 = dyn file_test1("-f", p31);
    check L171() else D59();
  L250():
    st `g.c` = r209;
    _in_ = ldf `%in%`;
    check L251() else D112();
  L292():
    st bad_methods = r268;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L293() else L294();
  D59():
    deopt 186 [r91];
  D112():
    deopt 367 [];
  L47(r270):
    c42 = `as.logical`(r270);
    if c42 then L297() else L48(c42);
  L171():
    c9 = `as.logical`(r91);
    if c9 then L172() else L22();
  L251():
    p75 = prom<V +>{
      vapply = ldf vapply;
      p73 = prom<V +>{
        gnm8 = ld gnm;
        gnm9 = force? gnm8;
        checkMissing(gnm9);
        return gnm9;
      };
      p74 = prom<V +>{
        __3 = ld `[[`;
        __4 = force? __3;
        checkMissing(__4);
        return __4;
      };
      r212 = dyn vapply(p73, p74, "", 1);
      return r212;
    };
    p78 = prom<V +>{
      intersect1 = ldf intersect;
      p76 = prom<V +>{
        generics_in_code2 = ld generics_in_code;
        generics_in_code3 = force? generics_in_code2;
        checkMissing(generics_in_code3);
        return generics_in_code3;
      };
      p77 = prom<V +>{
        exports4 = ld exports;
        exports5 = force? exports4;
        checkMissing(exports5);
        return exports5;
      };
      r216 = dyn intersect1(p76, p77);
      return r216;
    };
    r218 = dyn _in_(p75, p78);
    check L252() else D113();
  L293():
    bad_methods = ld bad_methods;
    check L295() else D136();
  L294():
    r269 = dyn base19(<sym bad_methods>);
    goto L47(r269);
  D113():
    deopt 370 [r218];
  D136():
    deopt 463 [bad_methods];
  L22():
    goto L23();
  L23():
    sort = ldf sort;
    check L176() else D62();
  L48(c44):
    c48 = `as.logical`(c44);
    if c48 then L300() else L49();
  L172():
    load = ldf load;
    check L173() else D60();
  L252():
    st ind = r218;
    setdiff3 = ldf setdiff;
    check L253() else D114();
  L295():
    bad_methods1 = force? bad_methods;
    checkMissing(bad_methods1);
    length3 = ldf length in base;
    r271 = dyn length3(bad_methods1);
    check L296() else D137();
  L297():
    is_base8 = ld is_base;
    check L298() else D138();
  D60():
    deopt 188 [];
  D62():
    deopt 195 [];
  D114():
    deopt 373 [];
  D137():
    deopt 466 [r271];
  D138():
    deopt 467 [c42, is_base8];
  L49():
    goto L84();
  L84():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L433() else L434();
  L173():
    p32 = prom<V +>{
      sys_data_file2 = ld sys_data_file;
      sys_data_file3 = force? sys_data_file2;
      checkMissing(sys_data_file3);
      return sys_data_file3;
    };
    p33 = prom<V +>{
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      return code_env7;
    };
    r94 = dyn load(p32, p33);
    check L174() else D61();
  L176():
    p34 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r97):
      return r97;
    L1():
      code_env8 = ld code_env;
      code_env9 = force? code_env8;
      checkMissing(code_env9);
      names = ldf names in base;
      r98 = dyn names(code_env9);
      goto L0(r98);
    L2():
      r96 = dyn base3(<sym code_env>);
      goto L0(r96);
    };
    r100 = dyn sort(p34);
    check L177() else D63();
  L253():
    p79 = prom<V +>{
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L2() else L3();
    L0(r220):
      c35 = `is.object`(r220);
      if c35 then L4() else L5(r220);
    L2():
      gnm10 = ld gnm;
      gnm11 = force? gnm10;
      checkMissing(gnm11);
      names4 = ldf names in base;
      r221 = dyn names4(gnm11);
      goto L0(r221);
    L3():
      r219 = dyn base13(<sym gnm>);
      goto L0(r219);
    L1(dx11):
      return dx11;
    L4():
      dr10 = tryDispatchBuiltin.1("[", r220);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5(dr10);
    L5(r223):
      ind = ld ind;
      ind1 = force? ind;
      __5 = ldf `[` in base;
      r224 = dyn __5(r223, ind1);
      goto L1(r224);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    };
    p80 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r227):
      return r227;
    L1():
      g_c = ld `g.c`;
      g_c1 = force? g_c;
      checkMissing(g_c1);
      nsm2 = ld nsm;
      nsm3 = force? nsm2;
      checkMissing(nsm3);
      c36 = ldf c in base;
      r228 = dyn c36(g_c1, nsm3);
      goto L0(r228);
    L2():
      r226 = dyn base14(<sym g.c>, <sym nsm>);
      goto L0(r226);
    };
    r230 = dyn setdiff3(p79, p80);
    check L254() else D115();
  L296():
    goto L47(r271);
  L298():
    is_base9 = force? is_base8;
    checkMissing(is_base9);
    r272 = `!`(is_base9);
    c45 = `as.logical`(r272);
    c46 = `&&`(c42, c45);
    goto L48(c46);
  L300():
    vapply2 = ldf vapply;
    check L301() else D139();
  D61():
    deopt 191 [r94];
  D63():
    deopt 197 [r100];
  D115():
    deopt 376 [r230];
  D139():
    deopt 472 [];
  L85(r377):
    c85 = `as.logical`(r377);
    if c85 then L437() else L86();
  L174():
    goto L23();
  L177():
    st objects_in_code = r100;
    file_exists = ldf `file.exists`;
    check L178() else D64();
  L254():
    st methods_not_registered_with_exported_generic = r230;
    S3_methods_info8 = ld S3_methods_info;
    check L255() else D116();
  L301():
    p92 = prom<V +>{
      bad_methods2 = ld bad_methods;
      bad_methods3 = force? bad_methods2;
      checkMissing(bad_methods3);
      return bad_methods3;
    };
    p93 = prom<V +>{
      r274 = clos inner3708401697;
      return r274;
    };
    r276 = dyn vapply2(p92, p93, "");
    check L302() else D140();
  L433():
    methods_not_registered_with_exported_generic = ld methods_not_registered_with_exported_generic;
    check L435() else D207();
  L434():
    r376 = dyn base30(<sym methods_not_registered_with_exported_generic>);
    goto L85(r376);
  D64():
    deopt 200 [];
  D116():
    deopt 378 [S3_methods_info8];
  D140():
    deopt 476 [r276];
  D207():
    deopt 706 [methods_not_registered_with_exported_generic];
  L86():
    goto L87();
  L87():
    l9 = ld bad_methods;
    class__ = ldf `class<-`;
    check L442() else D212();
  L178():
    p36 = prom<V +>{
      file_path4 = ldf `file.path`;
      p35 = prom<V +>{
        dir23 = ld dir;
        dir24 = force? dir23;
        checkMissing(dir24);
        return dir24;
      };
      r102 = dyn file_path4(p35, "NAMESPACE");
      return r102;
    };
    r104 = dyn file_exists(p36);
    check L179() else D65();
  L255():
    S3_methods_info9 = force? S3_methods_info8;
    checkMissing(S3_methods_info9);
    c37 = `is.object`(S3_methods_info9);
    if c37 then L256() else L257(S3_methods_info9);
  L302():
    st gen = r276;
    _in_2 = ldf `%in%`;
    check L303() else D141();
  L435():
    methods_not_registered_with_exported_generic1 = force? methods_not_registered_with_exported_generic;
    checkMissing(methods_not_registered_with_exported_generic1);
    length7 = ldf length in base;
    r378 = dyn length7(methods_not_registered_with_exported_generic1);
    check L436() else D208();
  L437():
    methods_not_registered_with_exported_generic2 = ld methods_not_registered_with_exported_generic;
    check L438() else D209();
  D65():
    deopt 202 [r104];
  D141():
    deopt 479 [];
  D208():
    deopt 709 [r378];
  D209():
    deopt 710 [methods_not_registered_with_exported_generic2];
  D212():
    deopt 723 ["checkS3methods", l9, "checkS3methods"];
  L38(dx13):
    st S3_methods_info = dx13;
    S3_methods_info12 = ld S3_methods_info;
    check L261() else D119();
  L179():
    c10 = `as.logical`(r104);
    if c10 then L180() else L24(c10);
  L256():
    dr12 = tryDispatchBuiltin.1("[", S3_methods_info9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L258() else L257(dr12);
  L257(S3_methods_info11):
    _in_1 = ldf `%in%`;
    check L259() else D117();
  L303():
    p94 = prom<V +>{
      sym20 = ldf names;
      base20 = ldf names in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r278):
      return r278;
    L1():
      bad_methods4 = ld bad_methods;
      bad_methods5 = force? bad_methods4;
      checkMissing(bad_methods5);
      names6 = ldf names in base;
      r279 = dyn names6(bad_methods5);
      goto L0(r279);
    L2():
      r277 = dyn base20(<sym bad_methods>);
      goto L0(r277);
    };
    p95 = prom<V +>{
      g_c4 = ld `g.c`;
      g_c5 = force? g_c4;
      checkMissing(g_c5);
      return g_c5;
    };
    r282 = dyn _in_2(p94, p95);
    check L304() else D142();
  L436():
    goto L85(r378);
  L438():
    methods_not_registered_with_exported_generic3 = force? methods_not_registered_with_exported_generic2;
    checkMissing(methods_not_registered_with_exported_generic3);
    l8 = ld bad_methods;
    attr__3 = ldf `attr<-`;
    check L439() else D210();
  L442():
    r380 = dyn class__(l9, NULL, "checkS3methods");
    check L443() else D213();
  D117():
    deopt 381 [S3_methods_info11];
  D119():
    deopt 392 [S3_methods_info12];
  D142():
    deopt 482 [r282];
  D210():
    deopt 713 [methods_not_registered_with_exported_generic3, l8, methods_not_registered_with_exported_generic3];
  D213():
    deopt 725 ["checkS3methods", r380];
  L24(c12):
    c19 = `as.logical`(c12);
    if c19 then L187() else L26();
  L180():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L181() else L182();
  L258():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L38(dx12);
  L259():
    p81 = prom<V +>{
      g_c2 = ld `g.c`;
      g_c3 = force? g_c2;
      checkMissing(g_c3);
      return g_c3;
    };
    p82 = prom<V +>{
      sym15 = ldf names;
      base15 = ldf names in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r233):
      return r233;
    L1():
      gnm12 = ld gnm;
      gnm13 = force? gnm12;
      checkMissing(gnm13);
      names5 = ldf names in base;
      r234 = dyn names5(gnm13);
      goto L0(r234);
    L2():
      r232 = dyn base15(<sym gnm>);
      goto L0(r232);
    };
    r236 = dyn _in_1(p81, p82);
    check L260() else D118();
  L261():
    S3_methods_info13 = force? S3_methods_info12;
    checkMissing(S3_methods_info13);
    c38 = `is.object`(S3_methods_info13);
    if c38 then L262() else L263(S3_methods_info13);
  L304():
    r283 = `!`(r282);
    st i1 = r283;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L305() else L306();
  L439():
    r379 = dyn attr__3(l8, NULL, "methods_not_registered_with_exported_generic", methods_not_registered_with_exported_generic3);
    check L440() else D211();
  L443():
    st bad_methods = r380;
    bad_methods26 = ld bad_methods;
    check L444() else D214();
  D118():
    deopt 384 [S3_methods_info11, r236];
  D211():
    deopt 716 [methods_not_registered_with_exported_generic3, r379];
  D214():
    deopt 727 [bad_methods26];
  L25(c15, r106):
    r118 = `!`(r106);
    c16 = `as.logical`(r118);
    c17 = `&&`(c15, c16);
    goto L24(c17);
  L26():
    goto L12();
  L39(dx15):
    st S3_methods_info = dx15;
    NROW = ldf NROW;
    check L275() else D123();
  L50(r285):
    c49 = `as.logical`(r285);
    if c49 then L311() else L51();
  L181():
    tryCatch = ldf tryCatch;
    check L183() else D66();
  L182():
    r105 = dyn base4(<lang tryCatch(`<-`(nsInfo, parseNamespaceFile(basename(dir), dirname(dir))), error=identity)>, "error");
    goto L25(c10, r105);
  L187():
    intersect = ldf intersect;
    check L188() else D69();
  L260():
    r237 = `!`(r236);
    __6 = ldf `[` in base;
    r238 = dyn __6(S3_methods_info9, r237, <missing>, FALSE);
    goto L38(r238);
  L262():
    dr14 = tryDispatchBuiltin.1("[", S3_methods_info13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L264() else L263(dr14);
  L263(S3_methods_info15):
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L265() else L266();
  L305():
    i8 = ld i1;
    check L307() else D143();
  L306():
    r284 = dyn base21(<lang `<-`(i3, `&`(i1, `(`(`%in%`(gen, generics_in_base))))>);
    goto L50(r284);
  L440():
    st bad_methods = r379;
    goto L87();
  L444():
    bad_methods27 = force? bad_methods26;
    checkMissing(bad_methods27);
    popenv;
    return bad_methods27;
  D66():
    deopt 206 [c10];
  D69():
    deopt 218 [];
  D123():
    deopt 415 [];
  D143():
    deopt 487 [i8];
  L40(r240):
    __8 = ldf `[` in base;
    r246 = dyn __8(S3_methods_info13, r240, <missing>, FALSE);
    goto L39(r246);
  L51():
    goto L59();
  L59():
    _in_5 = ldf `%in%`;
    check L347() else D165();
  L183():
    p41 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p38 = prom<V +>{
        basename2 = ldf basename;
        p37 = prom<V +>{
          dir25 = ld dir;
          dir26 = force? dir25;
          checkMissing(dir26);
          return dir26;
        };
        r108 = dyn basename2(p37);
        return r108;
      };
      p40 = prom<V +>{
        dirname1 = ldf dirname;
        p39 = prom<V +>{
          dir27 = ld dir;
          dir28 = force? dir27;
          checkMissing(dir28);
          return dir28;
        };
        r111 = dyn dirname1(p39);
        return r111;
      };
      r113 = dyn parseNamespaceFile(p38, p40);
      st nsInfo = r113;
      invisible.0();
      return r113;
    };
    p42 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r116 = dyn tryCatch[, error](p41, p42);
    check L184() else D67();
  L188():
    p43 = prom<V +>{
      objects_in_code = ld objects_in_code;
      objects_in_code1 = force? objects_in_code;
      checkMissing(objects_in_code1);
      return objects_in_code1;
    };
    p44 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      c20 = `is.object`(nsInfo1);
      if c20 then L1() else L2(nsInfo1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", nsInfo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nsInfo3):
      r120 = `$`(nsInfo3, <sym exports>);
      goto L0(r120);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r122 = dyn intersect(p43, p44);
    check L189() else D70();
  L264():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L39(dx14);
  L265():
    sym17 = ldf `as.character`;
    base17 = ldf `as.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L267() else L268();
  L266():
    r239 = dyn base16(<lang as.character(`[`(S3_methods_info, , 4))>);
    goto L40(r239);
  L275():
    p83 = prom<V +>{
      S3_methods_info30 = ld S3_methods_info;
      S3_methods_info31 = force? S3_methods_info30;
      checkMissing(S3_methods_info31);
      return S3_methods_info31;
    };
    r248 = dyn NROW(p83);
    check L276() else D124();
  L307():
    i9 = force? i8;
    checkMissing(i9);
    _in_3 = ldf `%in%`;
    check L308() else D144();
  L311():
    which = ldf which;
    check L312() else D147();
  D67():
    deopt 210 [c10, r116];
  D70():
    deopt 221 [r122];
  D124():
    deopt 417 [r248];
  D144():
    deopt 489 [i9];
  D147():
    deopt 498 [];
  D165():
    deopt 564 [];
  L41(S3_methods_info21, r242):
    is_na = ldf `is.na` in base;
    r245 = dyn is_na(r242);
    check L274() else D122();
  L184():
    inherits = ldf inherits in base;
    r117 = dyn inherits(r116, "error", FALSE);
    check L185() else D68();
  L189():
    st exports = r122;
    nsInfo4 = ld nsInfo;
    check L190() else D71();
  L267():
    S3_methods_info22 = ld S3_methods_info;
    check L269() else D120();
  L268():
    r241 = dyn base17(<lang `[`(S3_methods_info, , 4)>);
    goto L41(S3_methods_info15, r241);
  L276():
    c40 = `as.logical`(r248);
    if c40 then L277() else L43();
  L308():
    p96 = prom<V +>{
      gen = ld gen;
      gen1 = force? gen;
      checkMissing(gen1);
      return gen1;
    };
    p97 = prom<V +>{
      generics_in_base5 = ld generics_in_base;
      generics_in_base6 = force? generics_in_base5;
      checkMissing(generics_in_base6);
      return generics_in_base6;
    };
    r288 = dyn _in_3(p96, p97);
    check L309() else D145();
  L312():
    p98 = prom<V +>{
      i10 = ld i3;
      i11 = force? i10;
      checkMissing(i11);
      return i11;
    };
    r292 = dyn which(p98);
    check L313() else D148();
  L347():
    p115 = prom<V +>{
      gen12 = ld gen;
      gen13 = force? gen12;
      checkMissing(gen13);
      return gen13;
    };
    p116 = prom<V +>{
      generics2 = ld generics;
      generics3 = force? generics2;
      checkMissing(generics3);
      return generics3;
    };
    r323 = dyn _in_5(p115, p116);
    check L348() else D166();
  D68():
    deopt 214 [c10, r117];
  D71():
    deopt 223 [nsInfo4];
  D120():
    deopt 398 [S3_methods_info15, S3_methods_info22];
  D122():
    deopt 407 [S3_methods_info21, r245];
  D145():
    deopt 492 [i9, r288];
  D148():
    deopt 500 [r292];
  D166():
    deopt 567 [r323];
  L43():
    goto L45(NULL);
  L45(r259):
    goto L46();
  L185():
    goto L25(c10, r117);
  L190():
    nsInfo5 = force? nsInfo4;
    checkMissing(nsInfo5);
    c21 = `is.object`(nsInfo5);
    if c21 then L192() else L193(nsInfo5);
  L269():
    S3_methods_info23 = force? S3_methods_info22;
    checkMissing(S3_methods_info23);
    c39 = `is.object`(S3_methods_info23);
    if c39 then L270() else L271(S3_methods_info15);
  L274():
    goto L40(r245);
  L277():
    apply = ldf apply;
    check L278() else D125();
  L309():
    r289 = `&&`(i9, r288);
    st i3 = r289;
    any = ldf any in base;
    r290 = dyn any(r289);
    check L310() else D146();
  L313():
    st p3 = r292;
    intersect2 = ldf intersect;
    check L314() else D149();
  L348():
    r324 = `!`(r323);
    st i2 = r324;
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L349() else L350();
  D125():
    deopt 419 [];
  D146():
    deopt 496 [r290];
  D149():
    deopt 503 [];
  L42(S3_methods_info29, dx17):
    as_character = ldf `as.character` in base;
    r244 = dyn as_character(dx17);
    check L273() else D121();
  L60(r326):
    c56 = `as.logical`(r326);
    if c56 then L353() else L61(c56);
  L191(dx3):
    s = toForSeq(dx3);
    l = length(s);
    i = 0;
    goto L27(i);
  L192():
    dr2 = tryDispatchBuiltin.1("$", nsInfo5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L194() else L193(dr2);
  L193(nsInfo7):
    r123 = `$`(nsInfo7, <sym exportPatterns>);
    goto L191(r123);
  L270():
    dr16 = tryDispatchBuiltin.1("[", S3_methods_info23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L272() else L271(S3_methods_info15);
  L271(S3_methods_info26):
    __7 = ldf `[` in base;
    r243 = dyn __7(S3_methods_info23, <missing>, 4);
    goto L42(S3_methods_info26, r243);
  L278():
    p84 = prom<V +>{
      S3_methods_info32 = ld S3_methods_info;
      S3_methods_info33 = force? S3_methods_info32;
      checkMissing(S3_methods_info33);
      return S3_methods_info33;
    };
    p85 = prom<V +>{
      one = ld one;
      one1 = force? one;
      checkMissing(one1);
      return one1;
    };
    r251 = dyn apply[, , , simplify](p84, 1, p85, FALSE);
    check L279() else D126();
  L310():
    goto L50(r290);
  L314():
    p99 = prom<V +>{
      gen2 = ld gen;
      gen3 = force? gen2;
      checkMissing(gen3);
      return gen3;
    };
    p100 = prom<V +>{
      generics_in_base7 = ld generics_in_base;
      generics_in_base8 = force? generics_in_base7;
      checkMissing(generics_in_base8);
      return generics_in_base8;
    };
    r295 = dyn intersect2(p99, p100);
    check L315() else D150();
  L349():
    i16 = ld i2;
    check L351() else D167();
  L350():
    r325 = dyn base23(<sym i2>);
    goto L60(r325);
  D121():
    deopt 405 [S3_methods_info29, r244];
  D126():
    deopt 425 [r251];
  D150():
    deopt 506 [r295];
  D167():
    deopt 572 [i16];
  L27(i1):
    i2 = `+`.1(i1, 1);
    c22 = `<`.1(l, i2);
    if c22 then L195() else L29();
  L61(c58):
    c65 = `as.logical`(c58);
    if c65 then L358() else L63();
  L194():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L191(dx2);
  L272():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L42(S3_methods_info15, dx16);
  L273():
    goto L41(S3_methods_info29, r244);
  L279():
    st add = r251;
    vapply1 = ldf vapply;
    check L280() else D127();
  L315():
    st gennames = r295;
    r296 = clos inner3708401697;
    st predicate = r296;
    lapply2 = ldf lapply;
    check L316() else D151();
  L351():
    i17 = force? i16;
    checkMissing(i17);
    any1 = ldf any in base;
    r327 = dyn any1(i17);
    check L352() else D168();
  L353():
    sym24 = ldf `.isMethodsDispatchOn`;
    base24 = ldf `.isMethodsDispatchOn` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L354() else L355();
  D127():
    deopt 428 [];
  D151():
    deopt 512 [];
  D168():
    deopt 575 [r327];
  L29():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L196() else L197();
  L62(c61, r329):
    c62 = `as.logical`(r329);
    c63 = `&&`(c61, c62);
    goto L61(c63);
  L63():
    goto L65();
  L65():
    sym25 = ldf any;
    base25 = ldf any in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L368() else L369();
  L195():
    unique = ldf unique;
    check L202() else D76();
  L280():
    p86 = prom<V +>{
      add = ld add;
      add1 = force? add;
      checkMissing(add1);
      return add1;
    };
    p87 = prom<V +>{
      __9 = ld `[[`;
      __10 = force? __9;
      checkMissing(__10);
      return __10;
    };
    r254 = dyn vapply1(p86, p87, "", 3);
    check L281() else D128();
  L316():
    p101 = prom<V +>{
      code_env18 = ld code_env;
      code_env19 = force? code_env18;
      checkMissing(code_env19);
      return code_env19;
    };
    p102 = prom<V +>{
      _find_calls = ld `.find_calls`;
      _find_calls1 = force? _find_calls;
      checkMissing(_find_calls1);
      return _find_calls1;
    };
    p103 = prom<V +>{
      predicate = ld predicate;
      predicate1 = force? predicate;
      checkMissing(predicate1);
      return predicate1;
    };
    r300 = dyn lapply2[, , , recursive](p101, p102, p103, TRUE);
    check L317() else D152();
  L352():
    goto L60(r327);
  L354():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r330 = dyn _isMethodsDispatchOn();
    check L356() else D169();
  L355():
    r328 = dyn base24();
    goto L62(c56, r328);
  L358():
    which1 = ldf which;
    check L359() else D170();
  D76():
    deopt 244 [];
  D128():
    deopt 433 [r254];
  D152():
    deopt 518 [r300];
  D169():
    deopt 579 [c56, r330];
  D170():
    deopt 582 [];
  L28(i7, r125):
    st exports = r125;
    goto L27(i7);
  L66(r346):
    c68 = `as.logical`(r346);
    if c68 then L67(c68) else L372();
  L196():
    exports = ld exports;
    check L198() else D72();
  L197():
    r124 = dyn base5(<sym exports>, <lang grep(p, objects_in_code, value=TRUE)>);
    goto L28(i2, r124);
  L202():
    p49 = prom<V +>{
      exports2 = ld exports;
      exports3 = force? exports2;
      checkMissing(exports3);
      return exports3;
    };
    r131 = dyn unique(p49);
    check L203() else D77();
  L281():
    l1 = ld add;
    names__ = ldf `names<-`;
    check L282() else D129();
  L317():
    st calls = r300;
    _in_4 = ldf `%in%`;
    check L318() else D153();
  L356():
    goto L62(c56, r330);
  L359():
    p117 = prom<V +>{
      i18 = ld i2;
      i19 = force? i18;
      checkMissing(i19);
      return i19;
    };
    r332 = dyn which1(p117);
    check L360() else D171();
  L368():
    i20 = ld i1;
    check L370() else D175();
  L369():
    r345 = dyn base25(<sym i1>);
    goto L66(r345);
  D72():
    deopt 228 [i2, exports];
  D77():
    deopt 246 [r131];
  D129():
    deopt 435 [r254, l1, r254];
  D153():
    deopt 521 [];
  D171():
    deopt 584 [r332];
  D175():
    deopt 602 [i20];
  L67(c69):
    c77 = `as.logical`(c69);
    if c77 then L378() else L69();
  L198():
    exports1 = force? exports;
    checkMissing(exports1);
    grep = ldf grep;
    check L199() else D73();
  L203():
    st exports = r131;
    _get_namespace_S3_methods_db = ldf `.get_namespace_S3_methods_db`;
    check L204() else D78();
  L282():
    r255 = dyn names__(l1, NULL, r254);
    check L283() else D130();
  L318():
    p106 = prom<V +>{
      gen4 = ld gen;
      gen5 = force? gen4;
      checkMissing(gen5);
      c50 = `is.object`(gen5);
      if c50 then L1() else L2(gen5);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", gen5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(gen7):
      p104 = ld p3;
      p105 = force? p104;
      __11 = ldf `[` in base;
      r301 = dyn __11(gen7, p105);
      goto L0(r301);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p110 = prom<V +>{
      unique2 = ldf unique;
      p109 = prom<V +>{
        _call_names = ldf `.call_names`;
        p108 = prom<V +>{
          unlist = ldf unlist;
          p107 = prom<V +>{
            calls = ld calls;
            calls1 = force? calls;
            checkMissing(calls1);
            return calls1;
          };
          r304 = dyn unlist(p107);
          return r304;
        };
        r306 = dyn _call_names(p108);
        return r306;
      };
      r308 = dyn unique2(p109);
      return r308;
    };
    r310 = dyn _in_4(p106, p110);
    check L319() else D154();
  L360():
    st p2 = r332;
    vapply3 = ldf vapply;
    check L361() else D172();
  L370():
    i21 = force? i20;
    checkMissing(i21);
    any2 = ldf any in base;
    r347 = dyn any2(i21);
    check L371() else D176();
  L372():
    sym26 = ldf any;
    base26 = ldf any in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L373() else L374();
  D73():
    deopt 231 [i2];
  D78():
    deopt 249 [];
  D130():
    deopt 437 [r254, r255];
  D154():
    deopt 524 [r310];
  D172():
    deopt 587 [];
  D176():
    deopt 605 [r347];
  L68(c73, r349):
    c74 = `as.logical`(r349);
    c75 = `||`(c73, c74);
    goto L67(c75);
  L69():
    goto L83(NULL);
  L83(bad_methods_registered_for_non_generic5):
    goto L84();
  L199():
    p47 = prom<V +>{
      p45 = ld p;
      p46 = force? p45;
      checkMissing(p46);
      return p46;
    };
    p48 = prom<V +>{
      objects_in_code2 = ld objects_in_code;
      objects_in_code3 = force? objects_in_code2;
      checkMissing(objects_in_code3);
      return objects_in_code3;
    };
    r128 = dyn grep[, , value](p47, p48, TRUE);
    check L200() else D74();
  L204():
    p50 = prom<V +>{
      nsInfo8 = ld nsInfo;
      nsInfo9 = force? nsInfo8;
      checkMissing(nsInfo9);
      return nsInfo9;
    };
    r133 = dyn _get_namespace_S3_methods_db(p50);
    check L205() else D79();
  L283():
    st add = r255;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L284() else L285();
  L319():
    st used = r310;
    sym22 = ldf all;
    base22 = ldf all in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L320() else L321();
  L361():
    p120 = prom<V +>{
      gen14 = ld gen;
      gen15 = force? gen14;
      checkMissing(gen15);
      c66 = `is.object`(gen15);
      if c66 then L1() else L2(gen15);
    L0(dx31):
      return dx31;
    L1():
      dr28 = tryDispatchBuiltin.1("[", gen15);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(gen17):
      p118 = ld p2;
      p119 = force? p118;
      __16 = ldf `[` in base;
      r333 = dyn __16(gen17, p119);
      goto L0(r333);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx30);
    };
    p121 = prom<V +>{
      r335 = clos inner3355313315;
      return r335;
    };
    r337 = dyn vapply3(p120, p121, NA_LGL);
    check L362() else D173();
  L371():
    goto L66(r347);
  L373():
    i22 = ld i2;
    check L375() else D177();
  L374():
    r348 = dyn base26(<sym i2>);
    goto L68(c68, r348);
  L378():
    _in_6 = ldf `%in%`;
    check L379() else D179();
  D74():
    deopt 236 [i2, r128];
  D79():
    deopt 251 [r133];
  D173():
    deopt 591 [r337];
  D177():
    deopt 608 [c68, i22];
  D179():
    deopt 614 [];
  L44(r257):
    st gnm = r257;
    goto L45(r257);
  L52(r312):
    r314 = `!`(r312);
    c51 = `as.logical`(r314);
    if c51 then L324() else L53();
  L200():
    c23 = ldf c in base;
    r129 = dyn c23(exports1, r128);
    check L201() else D75();
  L205():
    st S3_methods_info = r133;
    goto L12();
  L284():
    gnm14 = ld gnm;
    check L286() else D131();
  L285():
    r256 = dyn base18(<sym gnm>, <sym add>);
    goto L44(r256);
  L320():
    used = ld used;
    check L322() else D155();
  L321():
    r311 = dyn base22(<sym used>);
    goto L52(r311);
  L362():
    r338 = `!`(r337);
    l2 = ld i2;
    c67 = `is.object`(l2);
    if c67 then L363() else L364(r338, l2);
  L375():
    i23 = force? i22;
    checkMissing(i23);
    any3 = ldf any in base;
    r350 = dyn any3(i23);
    check L376() else D178();
  L379():
    p124 = prom<V +>{
      gen18 = ld gen;
      gen19 = force? gen18;
      checkMissing(gen19);
      return gen19;
    };
    p125 = prom<V +>{
      generics_in_code4 = ld generics_in_code;
      generics_in_code5 = force? generics_in_code4;
      checkMissing(generics_in_code5);
      return generics_in_code5;
    };
    r353 = dyn _in_6(p124, p125);
    check L380() else D180();
  D75():
    deopt 238 [i2, r129];
  D131():
    deopt 441 [gnm14];
  D155():
    deopt 528 [used];
  D178():
    deopt 611 [c68, r350];
  D180():
    deopt 617 [r353];
  L53():
    goto L58(NULL);
  L58(dx28):
    goto L59();
  L64(r342, dx33):
    st i2 = dx33;
    goto L65();
  L201():
    goto L28(i2, r129);
  L286():
    gnm15 = force? gnm14;
    checkMissing(gnm15);
    add2 = ld add;
    check L287() else D132();
  L322():
    used1 = force? used;
    checkMissing(used1);
    all = ldf all in base;
    r313 = dyn all(used1);
    check L323() else D156();
  L324():
    p111 = ld p3;
    check L325() else D157();
  L363():
    dr30 = tryDispatchBuiltin.0("[<-", l2, r338);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L365() else L364(r338, dr30);
  L364(r340, l4):
    p122 = ld p2;
    check L366() else D174();
  L376():
    goto L68(c68, r350);
  L380():
    st i3 = r353;
    bad_methods10 = ld bad_methods;
    check L381() else D181();
  D132():
    deopt 443 [add2];
  D156():
    deopt 531 [r313];
  D157():
    deopt 533 [p111];
  D174():
    deopt 594 [r340, l4, r338, p122];
  D181():
    deopt 619 [bad_methods10];
  L287():
    add3 = force? add2;
    checkMissing(add3);
    c41 = ldf c in base;
    r258 = dyn c41(gnm15, add3);
    check L288() else D133();
  L323():
    goto L52(r313);
  L325():
    p112 = force? p111;
    checkMissing(p112);
    c52 = `is.object`(p112);
    if c52 then L326() else L327(p112);
  L365():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L64(r338, dx32);
  L366():
    p123 = force? p122;
    ___ = ldf `[<-` in base;
    r343 = dyn ___(l4, r338, p123);
    goto L64(r340, r343);
  L381():
    bad_methods11 = force? bad_methods10;
    checkMissing(bad_methods11);
    c78 = `is.object`(bad_methods11);
    if c78 then L382() else L383(bad_methods11);
  D133():
    deopt 446 [r258];
  L54(dx21):
    r317 = `-`(<missing>, dx21);
    st keep = r317;
    bad_methods6 = ld bad_methods;
    check L330() else D159();
  L70(dx35):
    st bad_methods_not_registered_with_generic_in_code = dx35;
    bad_methods14 = ld bad_methods;
    check L387() else D184();
  L288():
    goto L44(r258);
  L326():
    dr20 = tryDispatchBuiltin.1("[", p112);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L328() else L327(dr20);
  L327(p114):
    used2 = ld used;
    check L329() else D158();
  L382():
    dr32 = tryDispatchBuiltin.1("[", bad_methods11);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L384() else L383(dr32);
  L383(bad_methods13):
    i24 = ld i1;
    check L385() else D182();
  D158():
    deopt 535 [p114, used2];
  D159():
    deopt 541 [bad_methods6];
  D182():
    deopt 621 [bad_methods13, i24];
  D184():
    deopt 627 [bad_methods14];
  L328():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L54(dx20);
  L329():
    used3 = force? used2;
    checkMissing(used3);
    r315 = `!`(used3);
    __12 = ldf `[` in base;
    r316 = dyn __12(p114, r315);
    goto L54(r316);
  L330():
    bad_methods7 = force? bad_methods6;
    checkMissing(bad_methods7);
    c53 = `is.object`(bad_methods7);
    if c53 then L331() else L332(bad_methods7);
  L384():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L70(dx34);
  L385():
    i25 = force? i24;
    checkMissing(i25);
    i26 = ld i3;
    check L386() else D183();
  L387():
    bad_methods15 = force? bad_methods14;
    checkMissing(bad_methods15);
    c79 = `is.object`(bad_methods15);
    if c79 then L388() else L389(bad_methods15);
  D183():
    deopt 622 [bad_methods13, i25, i26];
  L55(dx23):
    st bad_methods = dx23;
    gen8 = ld gen;
    check L335() else D161();
  L71(dx37):
    st bad_methods_not_registered_with_generic_not_in_code = dx37;
    bad_methods18 = ld bad_methods;
    check L393() else D187();
  L331():
    dr22 = tryDispatchBuiltin.1("[", bad_methods7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L333() else L332(dr22);
  L332(bad_methods9):
    keep = ld keep;
    check L334() else D160();
  L386():
    i27 = force? i26;
    checkMissing(i27);
    r354 = `&&`(i25, i27);
    __17 = ldf `[` in base;
    r355 = dyn __17(bad_methods13, r354);
    goto L70(r355);
  L388():
    dr34 = tryDispatchBuiltin.1("[", bad_methods15);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L390() else L389(dr34);
  L389(bad_methods17):
    i28 = ld i1;
    check L391() else D185();
  D160():
    deopt 543 [bad_methods9, keep];
  D161():
    deopt 547 [gen8];
  D185():
    deopt 629 [bad_methods17, i28];
  D187():
    deopt 636 [bad_methods18];
  L333():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L55(dx22);
  L334():
    keep1 = force? keep;
    __13 = ldf `[` in base;
    r318 = dyn __13(bad_methods9, keep1);
    goto L55(r318);
  L335():
    gen9 = force? gen8;
    checkMissing(gen9);
    c54 = `is.object`(gen9);
    if c54 then L336() else L337(gen9);
  L390():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L71(dx36);
  L391():
    i29 = force? i28;
    checkMissing(i29);
    i30 = ld i3;
    check L392() else D186();
  L393():
    bad_methods19 = force? bad_methods18;
    checkMissing(bad_methods19);
    c80 = `is.object`(bad_methods19);
    if c80 then L394() else L395(bad_methods19);
  D186():
    deopt 630 [bad_methods17, i29, i30];
  L56(dx25):
    st gen = dx25;
    i12 = ld i1;
    check L340() else D163();
  L72(dx39):
    st bad_methods_registered_for_non_generic = dx39;
    bad_methods22 = ld bad_methods;
    check L398() else D189();
  L336():
    dr24 = tryDispatchBuiltin.1("[", gen9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L338() else L337(dr24);
  L337(gen11):
    keep2 = ld keep;
    check L339() else D162();
  L392():
    i31 = force? i30;
    checkMissing(i31);
    r356 = `!`(i31);
    r357 = `&&`(i29, r356);
    __18 = ldf `[` in base;
    r358 = dyn __18(bad_methods17, r357);
    goto L71(r358);
  L394():
    dr36 = tryDispatchBuiltin.1("[", bad_methods19);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L396() else L395(dr36);
  L395(bad_methods21):
    i32 = ld i2;
    check L397() else D188();
  D162():
    deopt 549 [gen11, keep2];
  D163():
    deopt 553 [i12];
  D188():
    deopt 638 [bad_methods21, i32];
  D189():
    deopt 642 [bad_methods22];
  L338():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L56(dx24);
  L339():
    keep3 = force? keep2;
    __14 = ldf `[` in base;
    r319 = dyn __14(gen11, keep3);
    goto L56(r319);
  L340():
    i13 = force? i12;
    checkMissing(i13);
    c55 = `is.object`(i13);
    if c55 then L341() else L342(i13);
  L396():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L72(dx38);
  L397():
    i33 = force? i32;
    __19 = ldf `[` in base;
    r359 = dyn __19(bad_methods21, i33);
    goto L72(r359);
  L398():
    bad_methods23 = force? bad_methods22;
    checkMissing(bad_methods23);
    c81 = `is.object`(bad_methods23);
    if c81 then L399() else L400(bad_methods23);
  L57(dx27):
    st i1 = dx27;
    goto L58(dx27);
  L73(dx41):
    st bad_methods = dx41;
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L404() else L405();
  L341():
    dr26 = tryDispatchBuiltin.1("[", i13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L343() else L342(dr26);
  L342(i15):
    keep4 = ld keep;
    check L344() else D164();
  L399():
    dr38 = tryDispatchBuiltin.1("[", bad_methods23);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L401() else L400(dr38);
  L400(bad_methods25):
    i34 = ld i1;
    check L402() else D190();
  D164():
    deopt 555 [i15, keep4];
  D190():
    deopt 644 [bad_methods25, i34];
  L74(r365):
    c82 = `as.logical`(r365);
    if c82 then L408() else L75();
  L343():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L57(dx26);
  L344():
    keep5 = force? keep4;
    __15 = ldf `[` in base;
    r320 = dyn __15(i15, keep5);
    goto L57(r320);
  L401():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L73(dx40);
  L402():
    i35 = force? i34;
    checkMissing(i35);
    r360 = `!`(i35);
    i36 = ld i2;
    check L403() else D191();
  L404():
    bad_methods_not_registered_with_generic_in_code = ld bad_methods_not_registered_with_generic_in_code;
    check L406() else D192();
  L405():
    r364 = dyn base27(<sym bad_methods_not_registered_with_generic_in_code>);
    goto L74(r364);
  D191():
    deopt 646 [bad_methods25, r360, i36];
  D192():
    deopt 654 [bad_methods_not_registered_with_generic_in_code];
  L75():
    goto L76();
  L76():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L413() else L414();
  L403():
    i37 = force? i36;
    checkMissing(i37);
    r361 = `!`(i37);
    r362 = `&&`(r360, r361);
    __20 = ldf `[` in base;
    r363 = dyn __20(bad_methods25, r362);
    goto L73(r363);
  L406():
    bad_methods_not_registered_with_generic_in_code1 = force? bad_methods_not_registered_with_generic_in_code;
    checkMissing(bad_methods_not_registered_with_generic_in_code1);
    length4 = ldf length in base;
    r366 = dyn length4(bad_methods_not_registered_with_generic_in_code1);
    check L407() else D193();
  L408():
    bad_methods_not_registered_with_generic_in_code2 = ld bad_methods_not_registered_with_generic_in_code;
    check L409() else D194();
  D193():
    deopt 657 [r366];
  D194():
    deopt 658 [bad_methods_not_registered_with_generic_in_code2];
  L77(r369):
    c83 = `as.logical`(r369);
    if c83 then L417() else L78();
  L407():
    goto L74(r366);
  L409():
    bad_methods_not_registered_with_generic_in_code3 = force? bad_methods_not_registered_with_generic_in_code2;
    checkMissing(bad_methods_not_registered_with_generic_in_code3);
    l5 = ld bad_methods;
    attr__ = ldf `attr<-`;
    check L410() else D195();
  L413():
    bad_methods_not_registered_with_generic_not_in_code = ld bad_methods_not_registered_with_generic_not_in_code;
    check L415() else D197();
  L414():
    r368 = dyn base28(<sym bad_methods_not_registered_with_generic_not_in_code>);
    goto L77(r368);
  D195():
    deopt 661 [bad_methods_not_registered_with_generic_in_code3, l5, bad_methods_not_registered_with_generic_in_code3];
  D197():
    deopt 670 [bad_methods_not_registered_with_generic_not_in_code];
  L78():
    goto L79();
  L79():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L422() else L423();
  L410():
    r367 = dyn attr__(l5, NULL, "bad_methods_not_registered_with_generic_in_code", bad_methods_not_registered_with_generic_in_code3);
    check L411() else D196();
  L415():
    bad_methods_not_registered_with_generic_not_in_code1 = force? bad_methods_not_registered_with_generic_not_in_code;
    checkMissing(bad_methods_not_registered_with_generic_not_in_code1);
    length5 = ldf length in base;
    r370 = dyn length5(bad_methods_not_registered_with_generic_not_in_code1);
    check L416() else D198();
  L417():
    bad_methods_not_registered_with_generic_not_in_code2 = ld bad_methods_not_registered_with_generic_not_in_code;
    check L418() else D199();
  D196():
    deopt 664 [bad_methods_not_registered_with_generic_in_code3, r367];
  D198():
    deopt 673 [r370];
  D199():
    deopt 674 [bad_methods_not_registered_with_generic_not_in_code2];
  L80(r373):
    c84 = `as.logical`(r373);
    if c84 then L426() else L81();
  L411():
    st bad_methods = r367;
    goto L76();
  L416():
    goto L77(r370);
  L418():
    bad_methods_not_registered_with_generic_not_in_code3 = force? bad_methods_not_registered_with_generic_not_in_code2;
    checkMissing(bad_methods_not_registered_with_generic_not_in_code3);
    l6 = ld bad_methods;
    attr__1 = ldf `attr<-`;
    check L419() else D200();
  L422():
    bad_methods_registered_for_non_generic = ld bad_methods_registered_for_non_generic;
    check L424() else D202();
  L423():
    r372 = dyn base29(<sym bad_methods_registered_for_non_generic>);
    goto L80(r372);
  D200():
    deopt 677 [bad_methods_not_registered_with_generic_not_in_code3, l6, bad_methods_not_registered_with_generic_not_in_code3];
  D202():
    deopt 686 [bad_methods_registered_for_non_generic];
  L81():
    goto L82(NULL);
  L82(bad_methods_registered_for_non_generic4):
    goto L83(bad_methods_registered_for_non_generic4);
  L419():
    r371 = dyn attr__1(l6, NULL, "bad_methods_not_registered_with_generic_not_in_code", bad_methods_not_registered_with_generic_not_in_code3);
    check L420() else D201();
  L424():
    bad_methods_registered_for_non_generic1 = force? bad_methods_registered_for_non_generic;
    checkMissing(bad_methods_registered_for_non_generic1);
    length6 = ldf length in base;
    r374 = dyn length6(bad_methods_registered_for_non_generic1);
    check L425() else D203();
  L426():
    bad_methods_registered_for_non_generic2 = ld bad_methods_registered_for_non_generic;
    check L427() else D204();
  D201():
    deopt 680 [bad_methods_not_registered_with_generic_not_in_code3, r371];
  D203():
    deopt 689 [r374];
  D204():
    deopt 690 [bad_methods_registered_for_non_generic2];
  L420():
    st bad_methods = r371;
    goto L79();
  L425():
    goto L80(r374);
  L427():
    bad_methods_registered_for_non_generic3 = force? bad_methods_registered_for_non_generic2;
    checkMissing(bad_methods_registered_for_non_generic3);
    l7 = ld bad_methods;
    attr__2 = ldf `attr<-`;
    check L428() else D205();
  D205():
    deopt 693 [bad_methods_registered_for_non_generic3, l7, bad_methods_registered_for_non_generic3];
  L428():
    r375 = dyn attr__2(l7, NULL, "bad_methods_registered_for_non_generic", bad_methods_registered_for_non_generic3);
    check L429() else D206();
  D206():
    deopt 696 [bad_methods_registered_for_non_generic3, r375];
  L429():
    st bad_methods = r375;
    goto L82(bad_methods_registered_for_non_generic3);
  }
}
fun inner860501261(env, nms) {
  (reg env:*, reg nms:*) -+> V { var env:*, var nms:*, reg nms_isMissing:L, reg nms_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nms1:*, reg nms2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg env1:*, reg env2:V, reg names:cls, reg r4:V, reg Filter:cls, reg r6:cls, reg p:p(V +), reg nms3:*, reg nms4:V, reg p1:p(V +), reg r9:V |
    mkenv;
    st env = env;
    nms_isMissing = missing.0(nms);
    if nms_isMissing then L0(NULL) else L0(nms);
  L0(nms_orDefault):
    st nms = nms_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L8() else L2();
  L5():
    nms1 = ld nms;
    check L7() else D0();
  L6():
    r = dyn base(<sym nms>);
    goto L1(r);
  D0():
    deopt 1 [nms1];
  L2():
    goto L4();
  L4():
    Filter = ldf Filter;
    check L14() else D3();
  L7():
    nms2 = force? nms1;
    checkMissing(nms2);
    c = `==`(nms2, NULL);
    goto L1(c);
  L8():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D3():
    deopt 14 [];
  L3(r3):
    st nms = r3;
    goto L4();
  L9():
    env1 = ld env;
    check L11() else D1();
  L10():
    r2 = dyn base1(<sym env>);
    goto L3(r2);
  L14():
    p = prom<V +>{
      r6 = clos inner1384373858;
      return r6;
    };
    p1 = prom<V +>{
      nms3 = ld nms;
      nms4 = force? nms3;
      checkMissing(nms4);
      return nms4;
    };
    r9 = dyn Filter(p, p1);
    check L15() else D4();
  D1():
    deopt 6 [env1];
  D4():
    deopt 17 [r9];
  L11():
    env2 = force? env1;
    checkMissing(env2);
    names = ldf names in base;
    r4 = dyn names(env2);
    check L12() else D2();
  L15():
    popenv;
    return r9;
  D2():
    deopt 9 [r4];
  L12():
    goto L3(r4);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env:*, reg env1:V, reg c:L, reg env3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f1:*, reg f2:V, reg __:cls, reg r2:V, reg is_function:cls, reg r3:V |
    mkenv;
    st f = f;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    env = ld env;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[[`(env, f)>);
    goto L0(r);
  D0():
    deopt 2 [env];
  L4():
    env1 = force? env;
    checkMissing(env1);
    c = `is.object`(env1);
    if c then L5() else L6(env1);
  L1(dx1):
    is_function = ldf `is.function` in base;
    r3 = dyn is_function(dx1);
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[[", env1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(env3):
    f1 = ld f;
    check L8() else D1();
  D1():
    deopt 4 [env3, f1];
  D2():
    deopt 8 [r3];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    f2 = force? f1;
    __ = ldf `[[` in base;
    r2 = dyn __(env3, f2);
    goto L1(r2);
  L9():
    goto L0(r3);
  }
}
fun inner2286194983(gname, env) {
  (reg gname:*, reg env:*) -+> V { var gname:*, var env:*, reg get0:cls, reg gname1:*, reg gname2:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg r2:V, reg _in_:cls, reg gname3:*, reg gname4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg S3_group_generics_env:*, reg S3_group_generics_env1:V, reg names:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg gcode:*, reg gcode1:V, reg c1:V, reg c2:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c7:L, reg r12:V, reg gcode2:*, reg gcode3:V, reg get1:cls, reg gname5:*, reg gname6:V, reg p4:p(V +), reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg p5:p(V +), reg r15:V, reg identical:cls, reg r16:V, reg c8:L, reg c9:V, reg c11:L, reg S3_group_generics_env2:*, reg S3_group_generics_env3:V, reg c12:L, reg S3_group_generics_env5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg gname7:*, reg gname8:V, reg __:cls, reg r17:V, reg dx2:V, reg is_primitive:cls, reg gcode4:*, reg gcode5:V, reg p6:p(V +), reg r19:V, reg c13:L, reg S3_primitive_generics_env:*, reg S3_primitive_generics_env1:V, reg c14:L, reg S3_primitive_generics_env3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg gname9:*, reg gname10:V, reg __1:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg gcode6:*, reg gcode7:V, reg c15:V, reg r23:V, reg c16:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg formals:cls, reg gcode8:*, reg gcode9:V, reg p7:p(V +), reg r27:V, reg names1:cls, reg r28:V |
    mkenv;
    st gname = gname;
    st env = env;
    get0 = ldf get0;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      gname1 = ld gname;
      gname2 = force? gname1;
      checkMissing(gname2);
      return gname2;
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r2 = dyn get0[, envir, mode](p, p1, "function");
    check L14() else D1();
  D1():
    deopt 7 [r2];
  L14():
    st gcode = r2;
    _in_ = ldf `%in%`;
    check L15() else D2();
  D2():
    deopt 10 [];
  L15():
    p2 = prom<V +>{
      gname3 = ld gname;
      gname4 = force? gname3;
      checkMissing(gname4);
      return gname4;
    };
    p3 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      S3_group_generics_env = ld S3_group_generics_env;
      S3_group_generics_env1 = force? S3_group_generics_env;
      checkMissing(S3_group_generics_env1);
      names = ldf names in base;
      r6 = dyn names(S3_group_generics_env1);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym S3_group_generics_env>);
      goto L0(r4);
    };
    r8 = dyn _in_(p2, p3);
    check L16() else D3();
  D3():
    deopt 13 [r8];
  L16():
    c = `as.logical`(r8);
    if c then L17() else L0();
  L0():
    is_primitive = ldf `is.primitive`;
    check L37() else D11();
  L7():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L17():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D11():
    deopt 46 [];
  L1(r10):
    c2 = `as.logical`(r10);
    if c2 then L2(c2) else L21();
  L10(r22):
    r23 = `!`(r22);
    c16 = `as.logical`(r23);
    if c16 then L49() else L11();
  L18():
    gcode = ld gcode;
    check L20() else D4();
  L19():
    r9 = dyn base1(<sym gcode>);
    goto L1(r9);
  L37():
    p6 = prom<V +>{
      gcode4 = ld gcode;
      gcode5 = force? gcode4;
      checkMissing(gcode5);
      return gcode5;
    };
    r19 = dyn is_primitive(p6);
    check L38() else D12();
  L46():
    gcode6 = ld gcode;
    check L48() else D15();
  L47():
    r21 = dyn base3(<sym gcode>);
    goto L10(r21);
  D4():
    deopt 15 [gcode];
  D12():
    deopt 48 [r19];
  D15():
    deopt 58 [gcode6];
  L2(c3):
    c11 = `as.logical`(c3);
    if c11 then L29() else L4();
  L11():
    popenv;
    return NULL;
  L20():
    gcode1 = force? gcode;
    checkMissing(gcode1);
    c1 = `==`(gcode1, NULL);
    goto L1(c1);
  L21():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L38():
    c13 = `as.logical`(r19);
    if c13 then L39() else L8();
  L48():
    gcode7 = force? gcode6;
    checkMissing(gcode7);
    c15 = `==`(gcode7, NULL);
    goto L10(c15);
  L49():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L3(c7, r12):
    c8 = `as.logical`(r12);
    c9 = `||`(c7, c8);
    goto L2(c9);
  L4():
    goto L6(NULL);
  L6(dx2):
    goto L7();
  L8():
    goto L7();
  L12(r25):
    popenv;
    return r25;
  L22():
    gcode2 = ld gcode;
    check L24() else D5();
  L23():
    r11 = dyn base2(<sym gcode>, <lang get0(gname, .BaseNamespaceEnv)>);
    goto L3(c2, r11);
  L29():
    S3_group_generics_env2 = ld S3_group_generics_env;
    check L30() else D9();
  L39():
    S3_primitive_generics_env = ld S3_primitive_generics_env;
    check L40() else D13();
  L50():
    formals = ldf formals;
    check L52() else D16();
  L51():
    r24 = dyn base4(<lang formals(gcode)>);
    goto L12(r24);
  D5():
    deopt 20 [c2, gcode2];
  D9():
    deopt 37 [S3_group_generics_env2];
  D13():
    deopt 49 [S3_primitive_generics_env];
  D16():
    deopt 65 [];
  L24():
    gcode3 = force? gcode2;
    checkMissing(gcode3);
    get1 = ldf get0;
    check L25() else D6();
  L30():
    S3_group_generics_env3 = force? S3_group_generics_env2;
    checkMissing(S3_group_generics_env3);
    c12 = `is.object`(S3_group_generics_env3);
    if c12 then L31() else L32(S3_group_generics_env3);
  L40():
    S3_primitive_generics_env1 = force? S3_primitive_generics_env;
    checkMissing(S3_primitive_generics_env1);
    c14 = `is.object`(S3_primitive_generics_env1);
    if c14 then L41() else L42(S3_primitive_generics_env1);
  L52():
    p7 = prom<V +>{
      gcode8 = ld gcode;
      gcode9 = force? gcode8;
      checkMissing(gcode9);
      return gcode9;
    };
    r27 = dyn formals(p7);
    check L53() else D17();
  D6():
    deopt 23 [c2];
  D17():
    deopt 67 [r27];
  L5(dx1):
    st gcode = dx1;
    goto L6(dx1);
  L9(dx5):
    st gcode = dx5;
    goto L7();
  L25():
    p4 = prom<V +>{
      gname5 = ld gname;
      gname6 = force? gname5;
      checkMissing(gname6);
      return gname6;
    };
    p5 = prom<V +>{
      _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
      _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
      checkMissing(_BaseNamespaceEnv1);
      return _BaseNamespaceEnv1;
    };
    r15 = dyn get1(p4, p5);
    check L26() else D7();
  L31():
    dr = tryDispatchBuiltin.1("[[", S3_group_generics_env3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(S3_group_generics_env5):
    gname7 = ld gname;
    check L34() else D10();
  L41():
    dr2 = tryDispatchBuiltin.1("[[", S3_primitive_generics_env1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(S3_primitive_generics_env3):
    gname9 = ld gname;
    check L44() else D14();
  L53():
    names1 = ldf names in base;
    r28 = dyn names1(r27);
    check L54() else D18();
  D7():
    deopt 26 [c2, r15];
  D10():
    deopt 39 [S3_group_generics_env5, gname7];
  D14():
    deopt 51 [S3_primitive_generics_env3, gname9];
  D18():
    deopt 69 [r28];
  L26():
    identical = ldf identical in base;
    r16 = dyn identical(gcode3, r15, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L27() else D8();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L34():
    gname8 = force? gname7;
    __ = ldf `[[` in base;
    r17 = dyn __(S3_group_generics_env5, gname8);
    goto L5(r17);
  L43():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx4);
  L44():
    gname10 = force? gname9;
    __1 = ldf `[[` in base;
    r20 = dyn __1(S3_primitive_generics_env3, gname10);
    goto L9(r20);
  L54():
    goto L12(r28);
  D8():
    deopt 35 [c2, r16];
  L27():
    goto L3(c2, r16);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg nfg:cls, reg gname:*, reg gname1:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r3:V, reg sprintf:cls, reg e5:*, reg e6:V, reg c1:L, reg e8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg p2:p(V +), reg e9:*, reg e10:V, reg c2:L, reg e12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg e13:*, reg e14:V, reg c3:L, reg e16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r11:V, reg c4:L, reg c5:L, reg get0:cls, reg v:*, reg v1:V, reg p4:p(V +), reg code_env2:*, reg code_env3:V, reg p5:p(V +), reg r14:V, reg r15:V, reg v2:*, reg v3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg mcode:*, reg mcode1:V, reg c6:V, reg r18:V, reg c7:L, reg nff:cls, reg mcode2:*, reg mcode3:V, reg p6:p(V +), reg r20:V, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg gname2:*, reg gname3:V, reg gargs:*, reg gargs1:V, reg mname:*, reg mname1:V, reg margs:*, reg margs1:V, reg list:cls, reg r24:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L9() else D0();
  D0():
    deopt 0 [e1];
  L9():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L10() else L11(e2);
  L0(dx1):
    st gname = dx1;
    nfg = ldf nfg;
    check L13() else D1();
  L10():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(e4):
    __ = ldf `[[` in base;
    r = dyn __(e4, 1);
    goto L0(r);
  D1():
    deopt 7 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    p = prom<V +>{
      gname = ld gname;
      gname1 = force? gname;
      checkMissing(gname1);
      return gname1;
    };
    p1 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r3 = dyn nfg(p, p1);
    check L14() else D2();
  D2():
    deopt 10 [r3];
  L14():
    st gargs = r3;
    sprintf = ldf sprintf;
    check L15() else D3();
  D3():
    deopt 13 [];
  L15():
    p2 = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c1 = `is.object`(e6);
      if c1 then L1() else L2(e6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", e6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(e8):
      __1 = ldf `[[` in base;
      r4 = dyn __1(e8, 1);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c2 = `is.object`(e10);
      if c2 then L1() else L2(e10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", e10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(e12):
      __2 = ldf `[[` in base;
      r6 = dyn __2(e12, 2);
      goto L0(r6);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r8 = dyn sprintf("%s.%s", p2, p3);
    check L16() else D4();
  D4():
    deopt 17 [r8];
  L16():
    st mname = r8;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r10):
    c5 = `as.logical`(r10);
    if c5 then L23() else L3();
  L17():
    e13 = ld e;
    check L19() else D5();
  L18():
    r9 = dyn base(<lang `<-`(v, `[[`(e, 3))>);
    goto L1(r9);
  D5():
    deopt 20 [e13];
  L3():
    v2 = ld v;
    check L27() else D8();
  L4(r15):
    st mcode = r15;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L19():
    e14 = force? e13;
    checkMissing(e14);
    c3 = `is.object`(e14);
    if c3 then L20() else L21(e14);
  L23():
    get0 = ldf get0;
    check L24() else D6();
  D6():
    deopt 28 [];
  D8():
    deopt 33 [v2];
  L2(dx7):
    st v = dx7;
    c4 = `is.character`(dx7);
    goto L1(c4);
  L5(r17):
    r18 = `!`(r17);
    c7 = `as.logical`(r18);
    if c7 then L31() else L6();
  L20():
    dr6 = tryDispatchBuiltin.1("[[", e14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L22() else L21(dr6);
  L21(e16):
    __3 = ldf `[[` in base;
    r11 = dyn __3(e16, 3);
    goto L2(r11);
  L24():
    p4 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    p5 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    r14 = dyn get0[, envir](p4, p5);
    check L25() else D7();
  L27():
    v3 = force? v2;
    checkMissing(v3);
    goto L4(v3);
  L28():
    mcode = ld mcode;
    check L30() else D9();
  L29():
    r16 = dyn base1(<sym mcode>);
    goto L5(r16);
  D7():
    deopt 32 [r14];
  D9():
    deopt 37 [mcode];
  L6():
    goto L7(NULL);
  L7(r21):
    st margs = r21;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L22():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L2(dx6);
  L25():
    goto L4(r14);
  L30():
    mcode1 = force? mcode;
    checkMissing(mcode1);
    c6 = `==`(mcode1, NULL);
    goto L5(c6);
  L31():
    nff = ldf nff;
    check L32() else D10();
  D10():
    deopt 42 [];
  L8(r23):
    popenv;
    return r23;
  L32():
    p6 = prom<V +>{
      mcode2 = ld mcode;
      mcode3 = force? mcode2;
      checkMissing(mcode3);
      return mcode3;
    };
    r20 = dyn nff(p6);
    check L33() else D11();
  L35():
    gname2 = ld gname;
    check L37() else D12();
  L36():
    r22 = dyn base2(<sym gname>, <sym gargs>, <sym mname>, <sym margs>);
    goto L8(r22);
  D11():
    deopt 44 [r20];
  D12():
    deopt 50 [gname2];
  L33():
    goto L7(r20);
  L37():
    gname3 = force? gname2;
    checkMissing(gname3);
    gargs = ld gargs;
    check L38() else D13();
  D13():
    deopt 52 [gargs];
  L38():
    gargs1 = force? gargs;
    checkMissing(gargs1);
    mname = ld mname;
    check L39() else D14();
  D14():
    deopt 54 [mname];
  L39():
    mname1 = force? mname;
    checkMissing(mname1);
    margs = ld margs;
    check L40() else D15();
  D15():
    deopt 56 [margs];
  L40():
    margs1 = force? margs;
    checkMissing(margs1);
    list = ldf list in base;
    r24 = dyn list(gname3, gargs1, mname1, margs1);
    check L41() else D16();
  D16():
    deopt 59 [r24];
  L41():
    goto L8(r24);
  }
}
fun inner866770041(g, nms) {
  (reg g:*, reg nms:*) -+> V { var g:*, var nms:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg g1:*, reg g2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg nms1:*, reg nms2:V, reg c1:L, reg nms4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg nms5:*, reg nms6:V, reg p:p(V +), reg paste0:cls, reg g3:*, reg g4:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg __:cls, reg r10:V |
    mkenv;
    st g = g;
    st nms = nms;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!=`(r1, 1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    g1 = ld g;
    check L5() else D0();
  L4():
    r = dyn base(<sym g>);
    goto L0(r);
  D0():
    deopt 2 [g1];
  L1():
    nms1 = ld nms;
    check L11() else D4();
  L5():
    g2 = force? g1;
    checkMissing(g2);
    length = ldf length in base;
    r2 = dyn length(g2);
    check L6() else D1();
  L7():
    character = ldf character;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 11 [nms1];
  L6():
    goto L0(r2);
  L8():
    r4 = dyn character();
    check L9() else D3();
  L11():
    nms2 = force? nms1;
    checkMissing(nms2);
    c1 = `is.object`(nms2);
    if c1 then L12() else L13(nms2);
  D3():
    deopt 10 [r4];
  L2(dx1):
    popenv;
    return dx1;
  L9():
    popenv;
    return r4;
  L12():
    dr = tryDispatchBuiltin.1("[", nms2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(nms4):
    startsWith = ldf startsWith;
    check L15() else D5();
  D5():
    deopt 14 [nms4];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L15():
    p = prom<V +>{
      nms5 = ld nms;
      nms6 = force? nms5;
      checkMissing(nms6);
      return nms6;
    };
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p1 = prom<V +>{
        g3 = ld g;
        g4 = force? g3;
        checkMissing(g4);
        return g4;
      };
      r7 = dyn paste0(p1, ".");
      return r7;
    };
    r9 = dyn startsWith(p, p2);
    check L16() else D6();
  D6():
    deopt 17 [nms4, r9];
  L16():
    __ = ldf `[` in base;
    r10 = dyn __(nms4, r9);
    goto L2(r10);
  }
}
fun inner3355313315(g) {
  (reg g:*) -+> V { var g:*, reg gen_dot_cls_matches:cls, reg g1:*, reg g2:V, reg p:p(V +), reg functions_in_code:*, reg functions_in_code1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg methods:*, reg methods1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg nfg:cls, reg g3:*, reg g4:V, reg p2:p(V +), reg code_env:*, reg code_env1:V, reg p3:p(V +), reg r9:V, reg lapply:cls, reg methods2:*, reg methods3:V, reg p4:p(V +), reg r11:cls, reg p5:p(V +), reg r13:V, reg methods4:*, reg methods5:V, reg l:*, reg names__:cls, reg r14:V, reg entries:*, reg entries1:V |
    mkenv;
    st g = g;
    gen_dot_cls_matches = ldf gen_dot_cls_matches;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      g1 = ld g;
      g2 = force? g1;
      checkMissing(g2);
      return g2;
    };
    p1 = prom<V +>{
      functions_in_code = ld functions_in_code;
      functions_in_code1 = force? functions_in_code;
      checkMissing(functions_in_code1);
      return functions_in_code1;
    };
    r2 = dyn gen_dot_cls_matches(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    st methods = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r4):
    st n = r4;
    r6 = `>`(r4, 0);
    c = `as.logical`(r6);
    if c then L8() else L1();
  L4():
    methods = ld methods;
    check L6() else D2();
  L5():
    r3 = dyn base(<sym methods>);
    goto L0(r3);
  D2():
    deopt 8 [methods];
  L1():
    popenv;
    return NULL;
  L6():
    methods1 = force? methods;
    checkMissing(methods1);
    length = ldf length in base;
    r5 = dyn length(methods1);
    check L7() else D3();
  L8():
    nfg = ldf nfg;
    check L9() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 16 [];
  L7():
    goto L0(r5);
  L9():
    p2 = prom<V +>{
      g3 = ld g;
      g4 = force? g3;
      checkMissing(g4);
      return g4;
    };
    p3 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r9 = dyn nfg(p2, p3);
    check L10() else D5();
  D5():
    deopt 19 [r9];
  L10():
    st gargs = r9;
    lapply = ldf lapply;
    check L11() else D6();
  D6():
    deopt 22 [];
  L11():
    p4 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    p5 = prom<V +>{
      r11 = clos inner2296048169;
      return r11;
    };
    r13 = dyn lapply(p4, p5);
    check L12() else D7();
  D7():
    deopt 25 [r13];
  L12():
    st entries = r13;
    methods4 = ld methods;
    check L13() else D8();
  D8():
    deopt 27 [methods4];
  L13():
    methods5 = force? methods4;
    checkMissing(methods5);
    l = ld entries;
    names__ = ldf `names<-`;
    check L14() else D9();
  D9():
    deopt 30 [methods5, l, methods5];
  L14():
    r14 = dyn names__(l, NULL, methods5);
    check L15() else D10();
  D10():
    deopt 32 [methods5, r14];
  L15():
    st entries = r14;
    entries = ld entries;
    check L16() else D11();
  D11():
    deopt 34 [entries];
  L16():
    entries1 = force? entries;
    checkMissing(entries1);
    popenv;
    return entries1;
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg g:*, reg g1:V, reg gargs:*, reg gargs1:V, reg m1:*, reg m2:V, reg nff:cls, reg code_env:*, reg code_env1:V, reg c:L, reg code_env3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m3:*, reg m4:V, reg __:cls, reg r2:V, reg p:p(V +), reg r4:V, reg list:cls, reg r5:V |
    mkenv;
    st m = m;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    g = ld g;
    check L3() else D0();
  L2():
    r = dyn base(<sym g>, <sym gargs>, <sym m>, <lang nff(`[[`(code_env, m))>);
    goto L0(r);
  D0():
    deopt 2 [g];
  L3():
    g1 = force? g;
    checkMissing(g1);
    gargs = ld gargs;
    check L4() else D1();
  D1():
    deopt 4 [gargs];
  L4():
    gargs1 = force? gargs;
    checkMissing(gargs1);
    m1 = ld m;
    check L5() else D2();
  D2():
    deopt 6 [m1];
  L5():
    m2 = force? m1;
    checkMissing(m2);
    nff = ldf nff;
    check L6() else D3();
  D3():
    deopt 9 [];
  L6():
    p = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      c = `is.object`(code_env1);
      if c then L1() else L2(code_env1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", code_env1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(code_env3):
      m3 = ld m;
      m4 = force? m3;
      __ = ldf `[[` in base;
      r2 = dyn __(code_env3, m4);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn nff(p);
    check L7() else D4();
  D4():
    deopt 11 [r4];
  L7():
    list = ldf list in base;
    r5 = dyn list(g1, gargs1, m2, r4);
    check L8() else D5();
  D5():
    deopt 13 [r5];
  L8():
    goto L0(r5);
  }
}
fun inner483500304(gName, gArgs, mName, mArgs) {
  (reg gName:*, reg gArgs:*, reg mName:*, reg mArgs:*) -+> V { var gName:*, var gArgs:*, var mName:*, var mArgs:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gArgs1:*, reg gArgs2:V, reg c:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg mArgs1:*, reg mArgs2:V, reg c7:V, reg c8:L, reg c9:V, reg c11:L, reg gName1:*, reg gName2:V, reg r6:V, reg c12:L, reg c14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c17:L, reg r8:V, reg mArgs3:*, reg mArgs4:V, reg length:cls, reg r9:V, reg r10:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg mArgs5:*, reg mArgs6:V, reg c24:L, reg c26:L, reg mArgs8:V, reg dr:V, reg dc:L, reg dx:V, reg c28:L, reg dx1:V, reg __:cls, reg r11:V, reg r12:V, reg c29:L, reg c30:V, reg c32:L, reg gName3:*, reg gName4:V, reg r15:V, reg c33:L, reg gArgs3:*, reg gArgs4:V, reg c34:L, reg gArgs6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg gArgs7:*, reg gArgs8:V, reg mArgs9:*, reg mArgs10:V, reg endsWith:cls, reg mName1:*, reg mName2:V, reg p:p(V +), reg r18:V, reg c35:L, reg gArgs9:*, reg gArgs10:V, reg c36:L, reg gArgs12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r19:V, reg r20:V, reg c37:L, reg gArgs13:*, reg gArgs14:V, reg c38:L, reg gArgs16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r21:V, reg mArgs11:*, reg mArgs12:V, reg c39:L, reg mArgs14:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r22:V, reg r23:V, reg c40:L, reg mArgs15:*, reg mArgs16:V, reg c41:L, reg mArgs18:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r24:V, reg dx14:V, reg which:cls, reg gArgs17:*, reg gArgs18:V, reg r25:V, reg p1:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg dotsPos:*, reg dotsPos1:V, reg length1:cls, reg r30:V, reg c42:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg dotsPos2:*, reg dotsPos3:V, reg c43:L, reg dotsPos5:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r33:V, reg r34:V, reg r35:I, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg gArgs19:*, reg gArgs20:V, reg r38:I, reg which1:cls, reg mArgs19:*, reg mArgs20:V, reg r39:V, reg p2:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg dotsPos6:*, reg dotsPos7:V, reg length2:cls, reg r44:V, reg c44:L, reg ipos:*, reg ipos1:V, reg c45:L, reg ipos3:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg ipos6:V, reg r46:V, reg dotsPos8:*, reg dotsPos9:V, reg c46:L, reg ipos8:V, reg dotsPos11:V, reg dr16:V, reg dc8:L, reg dx20:V, reg ipos10:V, reg dx21:V, reg __7:cls, reg r47:V, reg r48:V, reg r49:I, reg __8:cls, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg gArgs21:*, reg gArgs22:V, reg c47:L, reg gArgs24:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg ipos11:*, reg ipos12:V, reg __9:cls, reg r53:V, reg mArgs21:*, reg mArgs22:V, reg c48:L, reg mArgs24:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg ipos13:*, reg ipos14:V, reg __10:cls, reg r54:V, reg identical:cls, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg _in_:cls, reg gArgs25:*, reg gArgs26:V, reg p3:p(V +), reg mArgs25:*, reg mArgs26:V, reg p4:p(V +), reg r60:V, reg all:cls, reg r61:V, reg c49:L, reg c50:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg c54:L, reg r63:V, reg dotsPos12:*, reg dotsPos13:V, reg length3:cls, reg r64:V, reg r65:V, reg c55:L, reg c56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg _in_1:cls, reg mArgs27:*, reg mArgs28:V, reg p5:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg gArgs27:*, reg gArgs28:V, reg c58:cls, reg r71:V, reg p6:p(V +), reg r73:V, reg all1:cls, reg r74:V, reg c59:L, reg c60:V, reg _in_2:cls, reg ogArgs:*, reg ogArgs1:V, reg p7:p(V +), reg r76:V, reg c62:L, reg c63:V, reg posMatchOK:*, reg posMatchOK1:V, reg c65:L, reg c67:V, reg argMatchOK:*, reg argMatchOK1:V, reg c68:L, reg c69:V, reg c71:L, reg c73:V, reg margMatchOK:*, reg margMatchOK1:V, reg c74:L, reg c75:V, reg c77:L, reg _in_3:cls, reg gName5:*, reg gName6:V, reg p8:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r78:V, reg r79:V, reg c78:cls, reg r80:V, reg p9:p(V +), reg r82:V, reg c79:L, reg c81:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg c84:L, reg r84:V, reg ogArgs2:*, reg ogArgs3:V, reg length4:cls, reg r85:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg c87:L, reg r89:V, reg r90:V, reg omArgs:*, reg omArgs1:V, reg length5:cls, reg r91:V, reg r92:V, reg c88:L, reg c89:V, reg c91:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg ogArgs4:*, reg ogArgs5:V, reg omArgs2:*, reg omArgs3:V, reg list:cls, reg r95:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r96:V, reg r97:V, reg gName7:*, reg gName8:V, reg mName3:*, reg mName4:V, reg c92:cls, reg r98:V, reg l:*, reg names__:cls, reg r99:V, reg l1:*, reg l2:V |
    mkenv;
    st gName = gName;
    st gArgs = gArgs;
    st mName = mName;
    st mArgs = mArgs;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L52() else L53();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L55();
  L52():
    gArgs1 = ld gArgs;
    check L54() else D0();
  L53():
    r = dyn base(<sym gArgs>);
    goto L0(r);
  D0():
    deopt 1 [gArgs1];
  L1(c2):
    c11 = `as.logical`(c2);
    if c11 then L60() else L3();
  L54():
    gArgs2 = force? gArgs1;
    checkMissing(gArgs2);
    c = `==`(gArgs2, NULL);
    goto L0(c);
  L55():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L2(c6, r3):
    c8 = `as.logical`(r3);
    c9 = `||`(c6, c8);
    goto L1(c9);
  L3():
    gName1 = ld gName;
    check L63() else D2();
  L56():
    mArgs1 = ld mArgs;
    check L58() else D1();
  L57():
    r2 = dyn base1(<sym mArgs>);
    goto L2(c1, r2);
  L60():
    popenv;
    return NULL;
  D1():
    deopt 5 [c1, mArgs1];
  D2():
    deopt 14 [gName1];
  L58():
    mArgs2 = force? mArgs1;
    checkMissing(mArgs2);
    c7 = `==`(mArgs2, NULL);
    goto L2(c1, c7);
  L63():
    gName2 = force? gName1;
    checkMissing(gName2);
    r6 = `==`(gName2, "round");
    c12 = `as.logical`(r6);
    if c12 then L64() else L5(c12);
  L5(c14):
    c21 = `as.logical`(c14);
    if c21 then L70() else L7(c21);
  L64():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L6(c17, r8):
    r10 = `>=`(r8, 1.0);
    c18 = `as.logical`(r10);
    c19 = `&&`(c17, c18);
    goto L5(c19);
  L7(c23):
    c32 = `as.logical`(c23);
    if c32 then L76() else L9();
  L65():
    mArgs3 = ld mArgs;
    check L67() else D3();
  L66():
    r7 = dyn base2(<sym mArgs>);
    goto L6(c12, r7);
  L70():
    mArgs5 = ld mArgs;
    check L71() else D5();
  D3():
    deopt 20 [c12, mArgs3];
  D5():
    deopt 27 [c21, mArgs5];
  L9():
    gName3 = ld gName;
    check L79() else D6();
  L67():
    mArgs4 = force? mArgs3;
    checkMissing(mArgs4);
    length = ldf length in base;
    r9 = dyn length(mArgs4);
    check L68() else D4();
  L71():
    mArgs6 = force? mArgs5;
    checkMissing(mArgs6);
    c24 = `is.object`(mArgs6);
    if c24 then L72() else L73(c21, mArgs6);
  L76():
    popenv;
    return NULL;
  D4():
    deopt 23 [c12, r9];
  D6():
    deopt 40 [gName3];
  L8(c28, dx1):
    r12 = `==`(dx1, "x");
    c29 = `as.logical`(r12);
    c30 = `&&`(c28, c29);
    goto L7(c30);
  L68():
    goto L6(c12, r9);
  L72():
    dr = tryDispatchBuiltin.1("[[", mArgs6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(c21, dr);
  L73(c26, mArgs8):
    __ = ldf `[[` in base;
    r11 = dyn __(mArgs8, 1.0);
    goto L8(c26, r11);
  L79():
    gName4 = force? gName3;
    checkMissing(gName4);
    r15 = `==`(gName4, "plot");
    c33 = `as.logical`(r15);
    if c33 then L80() else L11();
  L11():
    goto L13();
  L13():
    gArgs7 = ld gArgs;
    check L86() else D8();
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(c21, dx);
  L80():
    gArgs3 = ld gArgs;
    check L81() else D7();
  D7():
    deopt 44 [gArgs3];
  D8():
    deopt 52 [gArgs7];
  L81():
    gArgs4 = force? gArgs3;
    checkMissing(gArgs4);
    c34 = `is.object`(gArgs4);
    if c34 then L82() else L83(gArgs4);
  L86():
    gArgs8 = force? gArgs7;
    checkMissing(gArgs8);
    st ogArgs = gArgs8;
    mArgs9 = ld mArgs;
    check L87() else D9();
  D9():
    deopt 55 [mArgs9];
  L12(dx3):
    st gArgs = dx3;
    goto L13();
  L82():
    dr2 = tryDispatchBuiltin.1("[", gArgs4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L84() else L83(dr2);
  L83(gArgs6):
    __1 = ldf `[` in base;
    r16 = dyn __1(gArgs6, -2);
    goto L12(r16);
  L87():
    mArgs10 = force? mArgs9;
    checkMissing(mArgs10);
    st omArgs = mArgs10;
    endsWith = ldf endsWith;
    check L88() else D10();
  D10():
    deopt 59 [];
  L84():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L88():
    p = prom<V +>{
      mName1 = ld mName;
      mName2 = force? mName1;
      checkMissing(mName2);
      return mName2;
    };
    r18 = dyn endsWith(p, ".formula");
    check L89() else D11();
  D11():
    deopt 62 [r18];
  L89():
    c35 = `as.logical`(r18);
    if c35 then L90() else L14();
  L14():
    goto L23();
  L23():
    which = ldf which;
    check L112() else D16();
  L90():
    gArgs9 = ld gArgs;
    check L91() else D12();
  D12():
    deopt 63 [gArgs9];
  D16():
    deopt 96 [];
  L91():
    gArgs10 = force? gArgs9;
    checkMissing(gArgs10);
    c36 = `is.object`(gArgs10);
    if c36 then L92() else L93(gArgs10);
  L112():
    p1 = prom<V +>{
      gArgs17 = ld gArgs;
      gArgs18 = force? gArgs17;
      checkMissing(gArgs18);
      r25 = `==`(gArgs18, "...");
      return r25;
    };
    r27 = dyn which(p1);
    check L113() else D17();
  D17():
    deopt 98 [r27];
  L15(dx6):
    r20 = `!=`(dx6, "...");
    c37 = `as.logical`(r20);
    if c37 then L95() else L16();
  L92():
    dr4 = tryDispatchBuiltin.1("[", gArgs10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L94() else L93(dr4);
  L93(gArgs12):
    __2 = ldf `[` in base;
    r19 = dyn __2(gArgs12, 1);
    goto L15(r19);
  L113():
    st dotsPos = r27;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L114() else L115();
  L16():
    goto L18();
  L18():
    mArgs11 = ld mArgs;
    check L101() else D14();
  L24(r29):
    c42 = `as.logical`(r29);
    if c42 then L118() else L25();
  L94():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx5);
  L95():
    gArgs13 = ld gArgs;
    check L96() else D13();
  L114():
    dotsPos = ld dotsPos;
    check L116() else D18();
  L115():
    r28 = dyn base3(<sym dotsPos>);
    goto L24(r28);
  D13():
    deopt 70 [gArgs13];
  D14():
    deopt 78 [mArgs11];
  D18():
    deopt 102 [dotsPos];
  L25():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L126() else L127();
  L28(r36):
    st ipos = r36;
    which1 = ldf which;
    check L129() else D22();
  L96():
    gArgs14 = force? gArgs13;
    checkMissing(gArgs14);
    c38 = `is.object`(gArgs14);
    if c38 then L97() else L98(gArgs14);
  L101():
    mArgs12 = force? mArgs11;
    checkMissing(mArgs12);
    c39 = `is.object`(mArgs12);
    if c39 then L102() else L103(mArgs12);
  L116():
    dotsPos1 = force? dotsPos;
    checkMissing(dotsPos1);
    length1 = ldf length in base;
    r30 = dyn length1(dotsPos1);
    check L117() else D19();
  L118():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L119() else L120();
  D19():
    deopt 105 [r30];
  D22():
    deopt 121 [];
  L17(dx8):
    st gArgs = dx8;
    goto L18();
  L19(dx11):
    r23 = `!=`(dx11, "...");
    c40 = `as.logical`(r23);
    if c40 then L105() else L20();
  L26(r32):
    goto L28(r32);
  L97():
    dr6 = tryDispatchBuiltin.1("[", gArgs14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L99() else L98(dr6);
  L98(gArgs16):
    __3 = ldf `[` in base;
    r21 = dyn __3(gArgs16, -1);
    goto L17(r21);
  L102():
    dr8 = tryDispatchBuiltin.1("[", mArgs12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L104() else L103(dr8);
  L103(mArgs14):
    __4 = ldf `[` in base;
    r22 = dyn __4(mArgs14, 1);
    goto L19(r22);
  L117():
    goto L24(r30);
  L119():
    dotsPos2 = ld dotsPos;
    check L121() else D20();
  L120():
    r31 = dyn base4(<lang `-`(`[`(dotsPos, 1), 1)>);
    goto L26(r31);
  L126():
    gArgs19 = ld gArgs;
    check L128() else D21();
  L127():
    r37 = dyn base5(<sym gArgs>);
    goto L28(r37);
  L129():
    p2 = prom<V +>{
      mArgs19 = ld mArgs;
      mArgs20 = force? mArgs19;
      checkMissing(mArgs20);
      r39 = `==`(mArgs20, "...");
      return r39;
    };
    r41 = dyn which1(p2);
    check L130() else D23();
  D20():
    deopt 107 [dotsPos2];
  D21():
    deopt 116 [gArgs19];
  D23():
    deopt 123 [r41];
  L20():
    goto L22(NULL);
  L22(dx14):
    goto L23();
  L99():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx7);
  L104():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L19(dx10);
  L105():
    mArgs15 = ld mArgs;
    check L106() else D15();
  L121():
    dotsPos3 = force? dotsPos2;
    checkMissing(dotsPos3);
    c43 = `is.object`(dotsPos3);
    if c43 then L122() else L123(dotsPos3);
  L128():
    gArgs20 = force? gArgs19;
    checkMissing(gArgs20);
    r38 = seq_along(gArgs20);
    goto L28(r38);
  L130():
    st dotsPos = r41;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L131() else L132();
  D15():
    deopt 85 [mArgs15];
  L27(dx17):
    r34 = `-`(dx17, 1);
    r35 = seq_len(r34);
    goto L26(r35);
  L29(r43):
    c44 = `as.logical`(r43);
    if c44 then L135() else L30();
  L106():
    mArgs16 = force? mArgs15;
    checkMissing(mArgs16);
    c41 = `is.object`(mArgs16);
    if c41 then L107() else L108(mArgs16);
  L122():
    dr12 = tryDispatchBuiltin.1("[", dotsPos3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L124() else L123(dr12);
  L123(dotsPos5):
    __6 = ldf `[` in base;
    r33 = dyn __6(dotsPos5, 1);
    goto L27(r33);
  L131():
    dotsPos6 = ld dotsPos;
    check L133() else D24();
  L132():
    r42 = dyn base6(<sym dotsPos>);
    goto L29(r42);
  D24():
    deopt 127 [dotsPos6];
  L21(dx13):
    st mArgs = dx13;
    goto L22(dx13);
  L30():
    goto L34();
  L34():
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L147() else L148();
  L107():
    dr10 = tryDispatchBuiltin.1("[", mArgs16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L109() else L108(dr10);
  L108(mArgs18):
    __5 = ldf `[` in base;
    r24 = dyn __5(mArgs18, -1);
    goto L21(r24);
  L124():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L27(dx16);
  L133():
    dotsPos7 = force? dotsPos6;
    checkMissing(dotsPos7);
    length2 = ldf length in base;
    r44 = dyn length2(dotsPos7);
    check L134() else D25();
  L135():
    ipos = ld ipos;
    check L136() else D26();
  D25():
    deopt 130 [r44];
  D26():
    deopt 131 [ipos];
  L35(r52):
    st posMatchOK = r52;
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L160() else L161();
  L109():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L21(dx12);
  L134():
    goto L29(r44);
  L136():
    ipos1 = force? ipos;
    checkMissing(ipos1);
    c45 = `is.object`(ipos1);
    if c45 then L137() else L138(ipos1);
  L147():
    gArgs21 = ld gArgs;
    check L149() else D28();
  L148():
    r51 = dyn base8(<lang `[`(gArgs, ipos)>, <lang `[`(mArgs, ipos)>);
    goto L35(r51);
  D28():
    deopt 148 [gArgs21];
  L31(dx19):
    st ipos = dx19;
    goto L34();
  L38(r57):
    c49 = `as.logical`(r57);
    if c49 then L39(c49) else L165();
  L137():
    dr14 = tryDispatchBuiltin.1("[", ipos1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L139() else L138(dr14);
  L138(ipos3):
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L140() else L141();
  L149():
    gArgs22 = force? gArgs21;
    checkMissing(gArgs22);
    c47 = `is.object`(gArgs22);
    if c47 then L150() else L151(gArgs22);
  L160():
    _in_ = ldf `%in%`;
    check L162() else D33();
  L161():
    r56 = dyn base9(<lang `%in%`(gArgs, mArgs)>);
    goto L38(r56);
  D33():
    deopt 171 [];
  L32(ipos6, r46):
    __8 = ldf `[` in base;
    r50 = dyn __8(ipos6, r46);
    goto L31(r50);
  L36(dx24):
    mArgs21 = ld mArgs;
    check L154() else D30();
  L39(c50):
    st argMatchOK = c50;
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L171() else L172();
  L139():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L31(dx18);
  L140():
    dotsPos8 = ld dotsPos;
    check L142() else D27();
  L141():
    r45 = dyn base7(<lang `-`(`[`(dotsPos, 1), 1)>);
    goto L32(ipos3, r45);
  L150():
    dr18 = tryDispatchBuiltin.1("[", gArgs22);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L152() else L151(dr18);
  L151(gArgs24):
    ipos11 = ld ipos;
    check L153() else D29();
  L162():
    p3 = prom<V +>{
      gArgs25 = ld gArgs;
      gArgs26 = force? gArgs25;
      checkMissing(gArgs26);
      return gArgs26;
    };
    p4 = prom<V +>{
      mArgs25 = ld mArgs;
      mArgs26 = force? mArgs25;
      checkMissing(mArgs26);
      return mArgs26;
    };
    r60 = dyn _in_(p3, p4);
    check L163() else D34();
  L165():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L166() else L167();
  D27():
    deopt 134 [ipos3, dotsPos8];
  D29():
    deopt 150 [gArgs24, ipos11];
  D30():
    deopt 153 [mArgs21];
  D34():
    deopt 174 [r60];
  L40(c54, r63):
    r65 = `>`(r63, 0);
    c55 = `as.logical`(r65);
    c56 = `||`(c54, c55);
    goto L39(c56);
  L41(r67):
    c59 = `as.logical`(r67);
    if c59 then L42(c59) else L176();
  L142():
    dotsPos9 = force? dotsPos8;
    checkMissing(dotsPos9);
    c46 = `is.object`(dotsPos9);
    if c46 then L143() else L144(ipos3, dotsPos9);
  L152():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L36(dx23);
  L153():
    ipos12 = force? ipos11;
    __9 = ldf `[` in base;
    r53 = dyn __9(gArgs24, ipos12);
    goto L36(r53);
  L154():
    mArgs22 = force? mArgs21;
    checkMissing(mArgs22);
    c48 = `is.object`(mArgs22);
    if c48 then L155() else L156(mArgs22);
  L163():
    all = ldf all in base;
    r61 = dyn all(r60);
    check L164() else D35();
  L166():
    dotsPos12 = ld dotsPos;
    check L168() else D36();
  L167():
    r62 = dyn base10(<sym dotsPos>);
    goto L40(c49, r62);
  L171():
    _in_1 = ldf `%in%`;
    check L173() else D38();
  L172():
    r66 = dyn base11(<lang `%in%`(mArgs, c("...", gArgs))>);
    goto L41(r66);
  D35():
    deopt 176 [r61];
  D36():
    deopt 179 [c49, dotsPos12];
  D38():
    deopt 190 [];
  L33(ipos10, dx21):
    r48 = `-`(dx21, 1);
    r49 = seq_len(r48);
    goto L32(ipos10, r49);
  L37(dx26):
    identical = ldf identical in base;
    r55 = dyn identical(dx24, dx26, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L159() else D32();
  L42(c60):
    st margMatchOK = c60;
    posMatchOK = ld posMatchOK;
    check L180() else D43();
  L143():
    dr16 = tryDispatchBuiltin.1("[", dotsPos9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L145() else L144(ipos3, dr16);
  L144(ipos8, dotsPos11):
    __7 = ldf `[` in base;
    r47 = dyn __7(dotsPos11, 1);
    goto L33(ipos8, r47);
  L155():
    dr20 = tryDispatchBuiltin.1("[", mArgs22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L157() else L156(dr20);
  L156(mArgs24):
    ipos13 = ld ipos;
    check L158() else D31();
  L164():
    goto L38(r61);
  L168():
    dotsPos13 = force? dotsPos12;
    checkMissing(dotsPos13);
    length3 = ldf length in base;
    r64 = dyn length3(dotsPos13);
    check L169() else D37();
  L173():
    p5 = prom<V +>{
      mArgs27 = ld mArgs;
      mArgs28 = force? mArgs27;
      checkMissing(mArgs28);
      return mArgs28;
    };
    p6 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      gArgs27 = ld gArgs;
      gArgs28 = force? gArgs27;
      checkMissing(gArgs28);
      c58 = ldf c in base;
      r71 = dyn c58("...", gArgs28);
      goto L0(r71);
    L2():
      r69 = dyn base12("...", <sym gArgs>);
      goto L0(r69);
    };
    r73 = dyn _in_1(p5, p6);
    check L174() else D39();
  L176():
    _in_2 = ldf `%in%`;
    check L177() else D41();
  D31():
    deopt 155 [mArgs24, ipos13];
  D32():
    deopt 166 [r55];
  D37():
    deopt 182 [c49, r64];
  D39():
    deopt 193 [r73];
  D41():
    deopt 197 [c59];
  D43():
    deopt 203 [posMatchOK];
  L145():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L33(ipos3, dx20);
  L157():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L37(dx25);
  L158():
    ipos14 = force? ipos13;
    __10 = ldf `[` in base;
    r54 = dyn __10(mArgs24, ipos14);
    goto L37(r54);
  L159():
    goto L35(r55);
  L169():
    goto L40(c49, r64);
  L174():
    all1 = ldf all in base;
    r74 = dyn all1(r73);
    check L175() else D40();
  L177():
    p7 = prom<V +>{
      ogArgs = ld ogArgs;
      ogArgs1 = force? ogArgs;
      checkMissing(ogArgs1);
      return ogArgs1;
    };
    r76 = dyn _in_2("...", p7);
    check L178() else D42();
  L180():
    posMatchOK1 = force? posMatchOK;
    checkMissing(posMatchOK1);
    c65 = `as.logical`(posMatchOK1);
    if c65 then L181() else L43(c65);
  D40():
    deopt 195 [r74];
  D42():
    deopt 200 [c59, r76];
  L43(c67):
    c71 = `as.logical`(c67);
    if c71 then L184() else L44(c71);
  L175():
    goto L41(r74);
  L178():
    c62 = `as.logical`(r76);
    c63 = `||`(c59, c62);
    goto L42(c63);
  L181():
    argMatchOK = ld argMatchOK;
    check L182() else D44();
  D44():
    deopt 205 [c65, argMatchOK];
  L44(c73):
    c77 = `as.logical`(c73);
    if c77 then L187() else L45();
  L182():
    argMatchOK1 = force? argMatchOK;
    checkMissing(argMatchOK1);
    c68 = `as.logical`(argMatchOK1);
    c69 = `&&`(c65, c68);
    goto L43(c69);
  L184():
    margMatchOK = ld margMatchOK;
    check L185() else D45();
  D45():
    deopt 208 [c71, margMatchOK];
  L45():
    _in_3 = ldf `%in%`;
    check L189() else D46();
  L185():
    margMatchOK1 = force? margMatchOK;
    checkMissing(margMatchOK1);
    c74 = `as.logical`(margMatchOK1);
    c75 = `&&`(c71, c74);
    goto L44(c75);
  L187():
    popenv;
    return NULL;
  D46():
    deopt 214 [];
  L189():
    p8 = prom<V +>{
      gName5 = ld gName;
      gName6 = force? gName5;
      checkMissing(gName6);
      return gName6;
    };
    p9 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      c78 = ldf c in base;
      r80 = dyn c78("+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", ">");
      goto L0(r80);
    L2():
      r78 = dyn base13("+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", ">");
      goto L0(r78);
    };
    r82 = dyn _in_3(p8, p9);
    check L190() else D47();
  D47():
    deopt 217 [r82];
  L190():
    c79 = `as.logical`(r82);
    if c79 then L191() else L46(c79);
  L46(c81):
    c91 = `as.logical`(c81);
    if c91 then L201() else L49();
  L191():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L192() else L193();
  L47(c84, r84):
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L196() else L197();
  L49():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L203() else L204();
  L192():
    ogArgs2 = ld ogArgs;
    check L194() else D48();
  L193():
    r83 = dyn base14(<sym ogArgs>);
    goto L47(c79, r83);
  L201():
    popenv;
    return NULL;
  D48():
    deopt 220 [c79, ogArgs2];
  L48(c87, r89, r90):
    r92 = `==`(r89, r90);
    c88 = `as.logical`(r92);
    c89 = `&&`(c87, c88);
    goto L46(c89);
  L50(r94):
    st l = r94;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L208() else L209();
  L194():
    ogArgs3 = force? ogArgs2;
    checkMissing(ogArgs3);
    length4 = ldf length in base;
    r85 = dyn length4(ogArgs3);
    check L195() else D49();
  L196():
    omArgs = ld omArgs;
    check L198() else D50();
  L197():
    r88 = dyn base15(<sym omArgs>);
    goto L48(c84, r84, r88);
  L203():
    ogArgs4 = ld ogArgs;
    check L205() else D52();
  L204():
    r93 = dyn base16(<sym ogArgs>, <sym omArgs>);
    goto L50(r93);
  D49():
    deopt 223 [c79, r85];
  D50():
    deopt 225 [c84, r84, omArgs];
  D52():
    deopt 235 [ogArgs4];
  L51(r97):
    l = ld l;
    names__ = ldf `names<-`;
    check L213() else D58();
  L195():
    goto L47(c79, r85);
  L198():
    omArgs1 = force? omArgs;
    checkMissing(omArgs1);
    length5 = ldf length in base;
    r91 = dyn length5(omArgs1);
    check L199() else D51();
  L205():
    ogArgs5 = force? ogArgs4;
    checkMissing(ogArgs5);
    omArgs2 = ld omArgs;
    check L206() else D53();
  L208():
    gName7 = ld gName;
    check L210() else D55();
  L209():
    r96 = dyn base17(<sym gName>, <sym mName>);
    goto L51(r96);
  D51():
    deopt 228 [c84, r84, r91];
  D53():
    deopt 237 [omArgs2];
  D55():
    deopt 244 [gName7];
  D58():
    deopt 251 [r97, l, r97];
  L199():
    goto L48(c84, r84, r91);
  L206():
    omArgs3 = force? omArgs2;
    checkMissing(omArgs3);
    list = ldf list in base;
    r95 = dyn list(ogArgs5, omArgs3);
    check L207() else D54();
  L210():
    gName8 = force? gName7;
    checkMissing(gName8);
    mName3 = ld mName;
    check L211() else D56();
  L213():
    r99 = dyn names__(l, NULL, r97);
    check L214() else D59();
  D54():
    deopt 240 [r95];
  D56():
    deopt 246 [mName3];
  D59():
    deopt 253 [r97, r99];
  L207():
    goto L50(r95);
  L211():
    mName4 = force? mName3;
    checkMissing(mName4);
    c92 = ldf c in base;
    r98 = dyn c92(gName8, mName4);
    check L212() else D57();
  L214():
    st l = r99;
    l1 = ld l;
    check L215() else D60();
  D57():
    deopt 249 [r98];
  D60():
    deopt 255 [l1];
  L212():
    goto L51(r98);
  L215():
    l2 = force? l1;
    checkMissing(l2);
    popenv;
    return l2;
  }
}