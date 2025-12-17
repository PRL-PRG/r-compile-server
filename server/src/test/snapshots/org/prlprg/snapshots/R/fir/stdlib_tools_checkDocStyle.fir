fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st checkDocStyle = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r14:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p3:p(V +), reg r16:V, reg c2:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p4:p(V +), reg r18:V, reg r19:V, reg character:cls, reg r20:V, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg r22:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p6:p(V +), reg r24:V, reg r25:V, reg c3:L, reg stop1:cls, reg gettextf:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg r29:V, reg _haveRds:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg r32:V, reg r33:V, reg c4:L, reg stop2:cls, reg gettextf1:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg r37:V, reg package5:*, reg package6:V, reg package_name:*, reg package_name1:V, reg r39:V, reg is_base:*, reg is_base1:V, reg r40:V, reg c5:L, reg _load_namespace_quietly:cls, reg package7:*, reg package8:V, reg p12:p(V +), reg dirname:cls, reg dir11:*, reg dir12:V, reg p13:p(V +), reg r43:V, reg p14:p(V +), reg r45:V, reg asNamespace:cls, reg package9:*, reg package10:V, reg p15:p(V +), reg r48:V, reg sort:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r49:V, reg r50:V, reg code_env:*, reg code_env1:V, reg names:cls, reg r51:V, reg p16:p(V +), reg r53:V, reg is_base2:*, reg is_base3:V, reg r54:V, reg c6:L, reg getNamespaceInfo:cls, reg package11:*, reg package12:V, reg p17:p(V +), reg r56:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r57:V, reg r58:V, reg ns_S3_methods_db:*, reg ns_S3_methods_db1:V, reg c7:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r59:V, reg as_character:cls, reg r60:V, reg ns_S3_methods_db4:*, reg ns_S3_methods_db5:V, reg c8:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r61:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r62:V, reg r63:V, reg ns_S3_methods:*, reg ns_S3_methods1:V, reg c9:L, reg r64:V, reg c10:L, reg vapply:cls, reg ns_S3_methods2:*, reg ns_S3_methods3:V, reg p18:p(V +), reg is_character:*, reg is_character1:V, reg p19:p(V +), reg r67:V, reg l:*, reg c11:L, reg r69:S, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind:*, reg ind1:V, reg r72:V, reg ___:cls, reg r73:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r74:V, reg r75:V, reg ns_S3_methods4:*, reg ns_S3_methods5:V, reg as_character1:cls, reg r76:V, reg r77:V, reg r78:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r80:V, reg r81:V, reg missing1:cls, reg r82:V, reg c12:L, reg stop3:cls, reg r83:V, reg basename:cls, reg dir13:*, reg dir14:V, reg p20:p(V +), reg r86:V, reg dir_exists1:cls, reg dir15:*, reg dir16:V, reg p21:p(V +), reg r88:V, reg r89:V, reg c13:L, reg stop4:cls, reg gettextf2:cls, reg dir17:*, reg dir18:V, reg p22:p(V +), reg r91:V, reg p23:p(V +), reg r93:V, reg file_path_as_absolute:cls, reg dir19:*, reg dir20:V, reg p24:p(V +), reg r96:V, reg file_path2:cls, reg dir21:*, reg dir22:V, reg p25:p(V +), reg r98:V, reg dir_exists2:cls, reg code_dir2:*, reg code_dir3:V, reg p26:p(V +), reg r100:V, reg r101:V, reg c14:L, reg stop5:cls, reg gettextf3:cls, reg dir23:*, reg dir24:V, reg p27:p(V +), reg r103:V, reg p28:p(V +), reg r105:V, reg _haveRds1:cls, reg dir25:*, reg dir26:V, reg p29:p(V +), reg r108:V, reg r109:V, reg c15:L, reg stop6:cls, reg gettextf4:cls, reg dir27:*, reg dir28:V, reg p30:p(V +), reg r111:V, reg p31:p(V +), reg r113:V, reg package_name2:*, reg package_name3:V, reg r115:V, reg new_env:cls, reg r116:V, reg file_path3:cls, reg dir29:*, reg dir30:V, reg p32:p(V +), reg r118:V, reg file_test1:cls, reg dfile4:*, reg dfile5:V, reg p33:p(V +), reg r120:V, reg c16:L, reg _read_description1:cls, reg dfile6:*, reg dfile7:V, reg p34:p(V +), reg r122:V, reg r123:V, reg character1:cls, reg r124:V, reg _source_assignments_in_code_dir:cls, reg code_dir4:*, reg code_dir5:V, reg p35:p(V +), reg code_env2:*, reg code_env3:V, reg p36:p(V +), reg meta:*, reg meta1:V, reg p37:p(V +), reg r128:V, reg file_path4:cls, reg code_dir6:*, reg code_dir7:V, reg p38:p(V +), reg r130:V, reg file_test2:cls, reg sys_data_file:*, reg sys_data_file1:V, reg p39:p(V +), reg r132:V, reg c17:L, reg load:cls, reg sys_data_file2:*, reg sys_data_file3:V, reg p40:p(V +), reg code_env4:*, reg code_env5:V, reg p41:p(V +), reg r135:V, reg sort1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r137:V, reg r138:V, reg code_env6:*, reg code_env7:V, reg names1:cls, reg r139:V, reg p42:p(V +), reg r141:V, reg file_exists:cls, reg file_path5:cls, reg dir31:*, reg dir32:V, reg p43:p(V +), reg r143:V, reg p44:p(V +), reg r145:V, reg c18:L, reg c20:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r146:V, reg c23:L, reg r147:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg package_name4:*, reg package_name5:V, reg p45:p(V +), reg dirname1:cls, reg dir33:*, reg dir34:V, reg p46:p(V +), reg r150:V, reg p47:p(V +), reg r152:V, reg p48:p(V +), reg identity:*, reg identity1:V, reg p49:p(V +), reg r155:V, reg inherits:cls, reg r156:V, reg r157:V, reg c24:L, reg c25:V, reg c27:L, reg intersect:cls, reg objects_in_code:*, reg objects_in_code1:V, reg p50:p(V +), reg nsInfo:*, reg nsInfo1:V, reg c28:L, reg nsInfo3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r159:V, reg p51:p(V +), reg r161:V, reg nsInfo4:*, reg nsInfo5:V, reg c29:L, reg nsInfo7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r162:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c30:L, reg x:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r163:V, reg i7:I, reg r164:V, reg OK:*, reg OK1:V, reg grep:cls, reg p52:*, reg p53:V, reg p54:p(V +), reg objects_in_code2:*, reg objects_in_code3:V, reg p55:p(V +), reg r167:V, reg c31:cls, reg r168:V, reg unique:cls, reg OK2:*, reg OK3:V, reg p56:p(V +), reg r170:V, reg _get_namespace_S3_methods_db:cls, reg nsInfo8:*, reg nsInfo9:V, reg p57:p(V +), reg r172:V, reg ns_S3_methods_db8:*, reg ns_S3_methods_db9:V, reg c32:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r173:V, reg ns_S3_methods_db12:*, reg ns_S3_methods_db13:V, reg c33:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r174:V, reg Filter:cls, reg r175:cls, reg p58:p(V +), reg objects_in_code4:*, reg objects_in_code5:V, reg p59:p(V +), reg r178:V, reg _get_S3_generics_in_base:cls, reg r179:V, reg is_base4:*, reg is_base5:V, reg r180:V, reg c34:L, reg unique1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r181:V, reg r182:V, reg Filter1:cls, reg r183:cls, reg p60:p(V +), reg functions_in_code:*, reg functions_in_code1:V, reg p61:p(V +), reg r186:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r187:V, reg r188:V, reg missing2:cls, reg r189:V, reg r190:V, reg c35:L, reg _get_S3_generics_in_env:cls, reg parent_env:cls, reg code_env8:*, reg code_env9:V, reg p62:p(V +), reg r192:V, reg p63:p(V +), reg r194:V, reg r195:V, reg all_S3_generics:*, reg all_S3_generics1:V, reg c36:cls, reg r196:V, reg p64:p(V +), reg r198:V, reg _make_S3_group_generic_env:cls, reg code_env10:*, reg code_env11:V, reg p65:p(V +), reg r201:V, reg nonS3methods:cls, reg package_name6:*, reg package_name7:V, reg p66:p(V +), reg r203:V, reg Map:cls, reg r204:cls, reg p67:p(V +), reg all_S3_generics2:*, reg all_S3_generics3:V, reg p68:p(V +), reg r207:V, reg unlist:cls, reg methods_in_package:*, reg methods_in_package1:V, reg p69:p(V +), reg r209:V, reg package_name8:*, reg package_name9:V, reg r210:V, reg c37:L, reg setdiff:cls, reg all_methods_in_package:*, reg all_methods_in_package1:V, reg p70:p(V +), reg functions_in_code2:*, reg functions_in_code3:V, reg p71:p(V +), reg r213:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r215:V, reg r216:V, reg missing3:cls, reg r217:V, reg r218:V, reg c38:L, reg Rd_db:cls, reg package13:*, reg package14:V, reg p72:p(V +), reg dirname2:cls, reg dir35:*, reg dir36:V, reg p73:p(V +), reg r221:V, reg p74:p(V +), reg r223:V, reg r224:V, reg Rd_db1:cls, reg dir37:*, reg dir38:V, reg p75:p(V +), reg r226:V, reg _Rd_get_names_from_Rd_db:cls, reg db:*, reg db1:V, reg p76:p(V +), reg r228:V, reg _in_:cls, reg db_names:*, reg db_names1:V, reg p77:p(V +), reg paste:cls, reg package_name10:*, reg package_name11:V, reg p78:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r231:V, reg r232:V, reg c39:cls, reg r233:V, reg p79:p(V +), reg r235:V, reg p80:p(V +), reg r237:V, reg db2:*, reg db3:V, reg c40:L, reg db5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ind2:*, reg ind3:V, reg r238:V, reg __4:cls, reg r239:V, reg lapply:cls, reg db6:*, reg db7:V, reg p81:p(V +), reg r241:cls, reg p82:p(V +), reg r243:V, reg vapply1:cls, reg db_usages:*, reg db_usages1:V, reg p83:p(V +), reg r245:cls, reg p84:p(V +), reg r247:V, reg lapply1:cls, reg db_usages2:*, reg db_usages3:V, reg c41:L, reg db_usages5:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg ind4:*, reg ind5:V, reg __5:cls, reg r248:V, reg p85:p(V +), reg attr:*, reg attr1:V, reg p86:p(V +), reg r251:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r252:V, reg r253:V, reg list:cls, reg r254:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r255:V, reg r256:V, reg db8:*, reg db9:V, reg names2:cls, reg r257:V, reg s1:V, reg l4:I, reg i8:I, reg i9:I, reg i10:I, reg c42:L, reg x1:V, reg db_usages6:*, reg db_usages7:V, reg c43:L, reg i14:I, reg db_usages9:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i16:I, reg dx19:V, reg nm:*, reg nm1:V, reg __6:cls, reg r258:V, reg exprs:*, reg exprs1:V, reg c44:L, reg i18:I, reg exprs3:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i20:I, reg dx21:V, reg lengths:cls, reg exprs4:*, reg exprs5:V, reg p87:p(V +), reg r260:V, reg r261:V, reg __7:cls, reg r262:V, reg vapply2:cls, reg exprs6:*, reg exprs7:V, reg p88:p(V +), reg r264:cls, reg p89:p(V +), reg r266:V, reg vapply3:cls, reg exprs8:*, reg exprs9:V, reg p90:p(V +), reg _is_call_from_replacement_function_usage:*, reg _is_call_from_replacement_function_usage1:V, reg p91:p(V +), reg r269:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r270:V, reg i23:I, reg r271:V, reg ind6:*, reg ind7:V, reg any:cls, reg r272:V, reg c45:L, reg paste1:cls, reg vapply4:cls, reg exprs10:*, reg exprs11:V, reg c46:L, reg exprs13:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg ind8:*, reg ind9:V, reg __8:cls, reg r273:V, reg p92:p(V +), reg r275:cls, reg p93:p(V +), reg r277:V, reg p94:p(V +), reg r279:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r280:V, reg i28:I, reg r281:V, reg functions:*, reg functions1:V, reg replace_funs:*, reg replace_funs1:V, reg c47:cls, reg r282:V, reg i29:I, reg intersect1:cls, reg functions2:*, reg functions3:V, reg p95:p(V +), reg all_methods_in_package2:*, reg all_methods_in_package3:V, reg p96:p(V +), reg r286:V, reg _transform_S3_method_markup:cls, reg functions4:*, reg functions5:V, reg p97:p(V +), reg r288:V, reg Map1:cls, reg r289:cls, reg p98:p(V +), reg intersect2:cls, reg functions6:*, reg functions7:V, reg p99:p(V +), reg all_S3_generics4:*, reg all_S3_generics5:V, reg p100:p(V +), reg r293:V, reg p101:p(V +), reg r295:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r296:V, reg i32:I, reg r297:V, reg methods_with_generic:*, reg methods_with_generic1:V, reg length1:cls, reg r298:V, reg c48:L, reg i33:I, reg c49:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r299:V, reg i37:I, reg c53:L, reg r300:V, reg methods_with_full_name:*, reg methods_with_full_name1:V, reg length2:cls, reg r301:V, reg c54:L, reg c55:V, reg c57:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r302:V, reg i43:I, reg r303:V, reg methods_with_generic2:*, reg methods_with_generic3:V, reg methods_with_full_name2:*, reg methods_with_full_name3:V, reg list1:cls, reg r304:V, reg l5:*, reg c58:L, reg i45:I, reg r306:V, reg l7:*, reg dr24:V, reg dc12:L, reg dx24:V, reg i47:I, reg r308:V, reg dx25:V, reg nm2:*, reg nm3:V, reg ____:cls, reg r309:V, reg i48:I, reg bad_lines:*, reg bad_lines1:V, reg l8:*, reg attr__:cls, reg r311:V, reg l9:*, reg class__:cls, reg r312:V, reg bad_doc_objects:*, reg bad_doc_objects1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    st has_namespace = FALSE;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L71() else L72();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L73() else L2();
  L71():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L72():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L151() else L152();
  L24():
    Filter = ldf Filter;
    check L243() else D104();
  L73():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L74() else L75();
  D104():
    deopt 362 [];
  L3(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L78() else L4();
  L25(r81):
    c12 = `as.logical`(r81);
    if c12 then L153() else L26();
  L74():
    package1 = ld package;
    check L76() else D0();
  L75():
    r4 = dyn base1(<sym package>);
    goto L3(r4);
  L151():
    missing1 = ldf missing in base;
    r82 = dyn missing1(<sym dir>);
    goto L25(r82);
  L152():
    r80 = dyn base6(<sym dir>);
    goto L25(r80);
  L243():
    p58 = prom<V +>{
      r175 = clos inner1384373858;
      return r175;
    };
    p59 = prom<V +>{
      objects_in_code4 = ld objects_in_code;
      objects_in_code5 = force? objects_in_code4;
      checkMissing(objects_in_code5);
      return objects_in_code5;
    };
    r178 = dyn Filter(p58, p59);
    check L244() else D105();
  D0():
    deopt 9 [package1];
  D105():
    deopt 365 [r178];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L82() else D4();
  L26():
    goto L27();
  L27():
    basename = ldf basename;
    check L157() else D47();
  L76():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L77() else D1();
  L78():
    stop = ldf stop;
    check L79() else D2();
  L153():
    stop3 = ldf stop;
    check L154() else D45();
  L244():
    st functions_in_code = r178;
    _get_S3_generics_in_base = ldf `.get_S3_generics_in_base`;
    check L245() else D106();
  D1():
    deopt 12 [r6];
  D2():
    deopt 16 [];
  D4():
    deopt 22 [];
  D45():
    deopt 171 [];
  D47():
    deopt 177 [];
  D106():
    deopt 368 [];
  L77():
    goto L3(r6);
  L79():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L80() else D3();
  L82():
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
    check L83() else D5();
  L154():
    r83 = dyn stop3("you must specify 'package' or 'dir'");
    check L155() else D46();
  L157():
    p20 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r86 = dyn basename(p20);
    check L158() else D48();
  L245():
    r179 = dyn _get_S3_generics_in_base();
    check L246() else D107();
  D3():
    deopt 18 [r8];
  D5():
    deopt 25 [r12];
  D46():
    deopt 173 [r83];
  D48():
    deopt 179 [r86];
  D107():
    deopt 369 [r179];
  L80():
    goto L5();
  L83():
    st dir = r12;
    file_path = ldf `file.path`;
    check L84() else D6();
  L155():
    goto L27();
  L158():
    st package_name = r86;
    dir_exists1 = ldf `dir.exists`;
    check L159() else D49();
  L246():
    st all_S3_generics = r179;
    is_base4 = ld is_base;
    check L247() else D108();
  D6():
    deopt 28 [];
  D49():
    deopt 182 [];
  D108():
    deopt 371 [is_base4];
  L84():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r14 = dyn file_path(p2, "DESCRIPTION");
    check L85() else D7();
  L159():
    p21 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r88 = dyn dir_exists1(p21);
    check L160() else D50();
  L247():
    is_base5 = force? is_base4;
    checkMissing(is_base5);
    r180 = `!`(is_base5);
    c34 = `as.logical`(r180);
    if c34 then L248() else L46();
  D7():
    deopt 31 [r14];
  D50():
    deopt 184 [r88];
  L46():
    goto L47();
  L47():
    _make_S3_group_generic_env = ldf `.make_S3_group_generic_env`;
    check L252() else D111();
  L85():
    st dfile = r14;
    file_test = ldf file_test;
    check L86() else D8();
  L160():
    r89 = `!`(r88);
    c13 = `as.logical`(r89);
    if c13 then L161() else L28();
  L248():
    unique1 = ldf unique;
    check L249() else D109();
  D8():
    deopt 34 [];
  D109():
    deopt 375 [];
  D111():
    deopt 382 [];
  L28():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L165() else D53();
  L29():
    file_path2 = ldf `file.path`;
    check L167() else D55();
  L86():
    p3 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r16 = dyn file_test("-f", p3);
    check L87() else D9();
  L161():
    stop4 = ldf stop;
    check L162() else D51();
  L249():
    p64 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L0(r182):
      return r182;
    L4():
      Filter1 = ldf Filter;
      p60 = prom<V +>{
        r183 = clos inner1384373858;
        return r183;
      };
      p61 = prom<V +>{
        functions_in_code = ld functions_in_code;
        functions_in_code1 = force? functions_in_code;
        checkMissing(functions_in_code1);
        return functions_in_code1;
      };
      r186 = dyn Filter1(p60, p61);
      sym11 = ldf missing;
      base11 = ldf missing in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L6() else L7();
    L5():
      r181 = dyn base10(<lang Filter(function((f=), .is_S3_generic(f, envir=code_env), NULL), functions_in_code)>, <lang if(`!`(missing(package)), .get_S3_generics_in_env(parent.env(code_env)))>, <sym all_S3_generics>);
      goto L0(r181);
    L1(r188):
      r190 = `!`(r188);
      c35 = `as.logical`(r190);
      if c35 then L8() else L2();
    L6():
      missing2 = ldf missing in base;
      r189 = dyn missing2(<sym package>);
      goto L1(r189);
    L7():
      r187 = dyn base11(<sym package>);
      goto L1(r187);
    L2():
      goto L3(NULL);
    L3(r195):
      all_S3_generics = ld all_S3_generics;
      all_S3_generics1 = force? all_S3_generics;
      checkMissing(all_S3_generics1);
      c36 = ldf c in base;
      r196 = dyn c36(r186, r195, all_S3_generics1);
      goto L0(r196);
    L8():
      _get_S3_generics_in_env = ldf `.get_S3_generics_in_env`;
      p63 = prom<V +>{
        parent_env = ldf `parent.env`;
        p62 = prom<V +>{
          code_env8 = ld code_env;
          code_env9 = force? code_env8;
          checkMissing(code_env9);
          return code_env9;
        };
        r192 = dyn parent_env(p62);
        return r192;
      };
      r194 = dyn _get_S3_generics_in_env(p63);
      goto L3(r194);
    };
    r198 = dyn unique1(p64);
    check L250() else D110();
  L252():
    p65 = prom<V +>{
      code_env10 = ld code_env;
      code_env11 = force? code_env10;
      checkMissing(code_env11);
      return code_env11;
    };
    r201 = dyn _make_S3_group_generic_env[parent](p65);
    check L253() else D112();
  D9():
    deopt 37 [r16];
  D51():
    deopt 187 [];
  D53():
    deopt 193 [];
  D55():
    deopt 198 [];
  D110():
    deopt 377 [r198];
  D112():
    deopt 385 [r201];
  L87():
    c2 = `as.logical`(r16);
    if c2 then L88() else L6();
  L162():
    p23 = prom<V +>{
      gettextf2 = ldf gettextf;
      p22 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r91 = dyn gettextf2("directory '%s' does not exist", p22);
      return r91;
    };
    r93 = dyn stop4[, domain](p23, NA_LGL);
    check L163() else D52();
  L165():
    p24 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r96 = dyn file_path_as_absolute(p24);
    check L166() else D54();
  L167():
    p25 = prom<V +>{
      dir21 = ld dir;
      dir22 = force? dir21;
      checkMissing(dir22);
      return dir22;
    };
    r98 = dyn file_path2(p25, "R");
    check L168() else D56();
  L250():
    st all_S3_generics = r198;
    goto L47();
  L253():
    st code_env = r201;
    nonS3methods = ldf nonS3methods;
    check L254() else D113();
  D52():
    deopt 191 [r93];
  D54():
    deopt 195 [r96];
  D56():
    deopt 201 [r98];
  D113():
    deopt 388 [];
  L6():
    character = ldf character;
    check L92() else D12();
  L7(r19):
    st meta = r19;
    file_path1 = ldf `file.path`;
    check L94() else D14();
  L88():
    _read_description = ldf `.read_description`;
    check L89() else D10();
  L163():
    goto L29();
  L166():
    st dir = r96;
    goto L29();
  L168():
    st code_dir = r98;
    dir_exists2 = ldf `dir.exists`;
    check L169() else D57();
  L254():
    p66 = prom<V +>{
      package_name6 = ld package_name;
      package_name7 = force? package_name6;
      checkMissing(package_name7);
      return package_name7;
    };
    r203 = dyn nonS3methods(p66);
    check L255() else D114();
  D10():
    deopt 39 [];
  D12():
    deopt 43 [];
  D14():
    deopt 47 [];
  D57():
    deopt 204 [];
  D114():
    deopt 390 [r203];
  L89():
    p4 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r18 = dyn _read_description(p4);
    check L90() else D11();
  L92():
    r20 = dyn character();
    check L93() else D13();
  L94():
    p5 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r22 = dyn file_path1(p5, "R");
    check L95() else D15();
  L169():
    p26 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r100 = dyn dir_exists2(p26);
    check L170() else D58();
  L255():
    st methods_stop_list = r203;
    Map = ldf Map;
    check L256() else D115();
  D11():
    deopt 41 [r18];
  D13():
    deopt 44 [r20];
  D15():
    deopt 50 [r22];
  D58():
    deopt 206 [r100];
  D115():
    deopt 393 [];
  L90():
    goto L7(r18);
  L93():
    goto L7(r20);
  L95():
    st code_dir = r22;
    dir_exists = ldf `dir.exists`;
    check L96() else D16();
  L170():
    r101 = `!`(r100);
    c14 = `as.logical`(r101);
    if c14 then L171() else L30();
  L256():
    p67 = prom<V +>{
      r204 = clos inner3355313315;
      return r204;
    };
    p68 = prom<V +>{
      all_S3_generics2 = ld all_S3_generics;
      all_S3_generics3 = force? all_S3_generics2;
      checkMissing(all_S3_generics3);
      return all_S3_generics3;
    };
    r207 = dyn Map(p67, p68);
    check L257() else D116();
  D16():
    deopt 53 [];
  D116():
    deopt 396 [r207];
  L30():
    goto L31();
  L31():
    _haveRds1 = ldf `.haveRds`;
    check L175() else D61();
  L96():
    p6 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r24 = dyn dir_exists(p6);
    check L97() else D17();
  L171():
    stop5 = ldf stop;
    check L172() else D59();
  L257():
    st methods_in_package = r207;
    unlist = ldf unlist;
    check L258() else D117();
  D17():
    deopt 55 [r24];
  D59():
    deopt 209 [];
  D61():
    deopt 217 [];
  D117():
    deopt 399 [];
  L97():
    r25 = `!`(r24);
    c3 = `as.logical`(r25);
    if c3 then L98() else L8();
  L172():
    p28 = prom<V +>{
      gettextf3 = ldf gettextf;
      p27 = prom<V +>{
        dir23 = ld dir;
        dir24 = force? dir23;
        checkMissing(dir24);
        return dir24;
      };
      r103 = dyn gettextf3("directory '%s' does not contain R code", p27);
      return r103;
    };
    r105 = dyn stop5[, domain](p28, NA_LGL);
    check L173() else D60();
  L175():
    p29 = prom<V +>{
      dir25 = ld dir;
      dir26 = force? dir25;
      checkMissing(dir26);
      return dir26;
    };
    r108 = dyn _haveRds1(p29);
    check L176() else D62();
  L258():
    p69 = prom<V +>{
      methods_in_package = ld methods_in_package;
      methods_in_package1 = force? methods_in_package;
      checkMissing(methods_in_package1);
      return methods_in_package1;
    };
    r209 = dyn unlist(p69);
    check L259() else D118();
  D60():
    deopt 213 [r105];
  D62():
    deopt 219 [r108];
  D118():
    deopt 401 [r209];
  L8():
    goto L9();
  L9():
    _haveRds = ldf `.haveRds`;
    check L102() else D20();
  L98():
    stop1 = ldf stop;
    check L99() else D18();
  L173():
    goto L31();
  L176():
    r109 = `!`(r108);
    c15 = `as.logical`(r109);
    if c15 then L177() else L32();
  L259():
    st all_methods_in_package = r209;
    package_name8 = ld package_name;
    check L260() else D119();
  D18():
    deopt 58 [];
  D20():
    deopt 66 [];
  D119():
    deopt 403 [package_name8];
  L32():
    goto L33();
  L33():
    package_name2 = ld package_name;
    check L181() else D65();
  L99():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r27 = dyn gettextf("directory '%s' does not contain R code", p7);
      return r27;
    };
    r29 = dyn stop1[, domain](p8, NA_LGL);
    check L100() else D19();
  L102():
    p9 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r32 = dyn _haveRds(p9);
    check L103() else D21();
  L177():
    stop6 = ldf stop;
    check L178() else D63();
  L260():
    package_name9 = force? package_name8;
    checkMissing(package_name9);
    r210 = `==`(package_name9, "cluster");
    c37 = `as.logical`(r210);
    if c37 then L261() else L48();
  D19():
    deopt 62 [r29];
  D21():
    deopt 68 [r32];
  D63():
    deopt 222 [];
  D65():
    deopt 229 [package_name2];
  L48():
    goto L49();
  L49():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L265() else L266();
  L100():
    goto L9();
  L103():
    r33 = `!`(r32);
    c4 = `as.logical`(r33);
    if c4 then L104() else L10();
  L178():
    p31 = prom<V +>{
      gettextf4 = ldf gettextf;
      p30 = prom<V +>{
        dir27 = ld dir;
        dir28 = force? dir27;
        checkMissing(dir28);
        return dir28;
      };
      r111 = dyn gettextf4("directory '%s' does not contain Rd objects", p30);
      return r111;
    };
    r113 = dyn stop6[, domain](p31, NA_LGL);
    check L179() else D64();
  L181():
    package_name3 = force? package_name2;
    checkMissing(package_name3);
    r115 = `==`(package_name3, "base");
    st is_base = r115;
    new_env = ldf `new.env`;
    check L182() else D66();
  L261():
    setdiff = ldf setdiff;
    check L262() else D120();
  D64():
    deopt 226 [r113];
  D66():
    deopt 235 [];
  D120():
    deopt 408 [];
  L10():
    goto L11();
  L11():
    package5 = ld package;
    check L108() else D24();
  L50(r216):
    r218 = `!`(r216);
    c38 = `as.logical`(r218);
    if c38 then L267() else L51();
  L104():
    stop2 = ldf stop;
    check L105() else D22();
  L179():
    goto L33();
  L182():
    r116 = dyn new_env[hash](TRUE);
    check L183() else D67();
  L262():
    p70 = prom<V +>{
      all_methods_in_package = ld all_methods_in_package;
      all_methods_in_package1 = force? all_methods_in_package;
      checkMissing(all_methods_in_package1);
      return all_methods_in_package1;
    };
    p71 = prom<V +>{
      functions_in_code2 = ld functions_in_code;
      functions_in_code3 = force? functions_in_code2;
      checkMissing(functions_in_code3);
      return functions_in_code3;
    };
    r213 = dyn setdiff(p70, p71);
    check L263() else D121();
  L265():
    missing3 = ldf missing in base;
    r217 = dyn missing3(<sym package>);
    goto L50(r217);
  L266():
    r215 = dyn base12(<sym package>);
    goto L50(r215);
  D22():
    deopt 71 [];
  D24():
    deopt 78 [package5];
  D67():
    deopt 238 [r116];
  D121():
    deopt 411 [r213];
  L51():
    Rd_db1 = ldf Rd_db;
    check L271() else D124();
  L52(r224):
    st db = r224;
    _Rd_get_names_from_Rd_db = ldf `.Rd_get_names_from_Rd_db`;
    check L273() else D126();
  L105():
    p11 = prom<V +>{
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r35 = dyn gettextf1("directory '%s' does not contain Rd objects", p10);
      return r35;
    };
    r37 = dyn stop2[, domain](p11, NA_LGL);
    check L106() else D23();
  L108():
    package6 = force? package5;
    checkMissing(package6);
    st package_name = package6;
    package_name = ld package_name;
    check L109() else D25();
  L183():
    st code_env = r116;
    file_path3 = ldf `file.path`;
    check L184() else D68();
  L263():
    st all_methods_in_package = r213;
    goto L49();
  L267():
    Rd_db = ldf Rd_db;
    check L268() else D122();
  D23():
    deopt 75 [r37];
  D25():
    deopt 81 [package_name];
  D68():
    deopt 241 [];
  D122():
    deopt 420 [];
  D124():
    deopt 426 [];
  D126():
    deopt 432 [];
  L106():
    goto L11();
  L109():
    package_name1 = force? package_name;
    checkMissing(package_name1);
    r39 = `==`(package_name1, "base");
    st is_base = r39;
    is_base = ld is_base;
    check L110() else D26();
  L184():
    p32 = prom<V +>{
      dir29 = ld dir;
      dir30 = force? dir29;
      checkMissing(dir30);
      return dir30;
    };
    r118 = dyn file_path3(p32, "DESCRIPTION");
    check L185() else D69();
  L268():
    p72 = prom<V +>{
      package13 = ld package;
      package14 = force? package13;
      checkMissing(package14);
      return package14;
    };
    p74 = prom<V +>{
      dirname2 = ldf dirname;
      p73 = prom<V +>{
        dir35 = ld dir;
        dir36 = force? dir35;
        checkMissing(dir36);
        return dir36;
      };
      r221 = dyn dirname2(p73);
      return r221;
    };
    r223 = dyn Rd_db[, `lib.loc`](p72, p74);
    check L269() else D123();
  L271():
    p75 = prom<V +>{
      dir37 = ld dir;
      dir38 = force? dir37;
      checkMissing(dir38);
      return dir38;
    };
    r226 = dyn Rd_db1[dir](p75);
    check L272() else D125();
  L273():
    p76 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r228 = dyn _Rd_get_names_from_Rd_db(p76);
    check L274() else D127();
  D26():
    deopt 86 [is_base];
  D69():
    deopt 244 [r118];
  D123():
    deopt 424 [r223];
  D125():
    deopt 429 [r226];
  D127():
    deopt 434 [r228];
  L110():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    r40 = `!`(is_base1);
    c5 = `as.logical`(r40);
    if c5 then L111() else L12();
  L185():
    st dfile = r118;
    file_test1 = ldf file_test;
    check L186() else D70();
  L269():
    goto L52(r223);
  L272():
    goto L52(r226);
  L274():
    st db_names = r228;
    _in_ = ldf `%in%`;
    check L275() else D128();
  D70():
    deopt 247 [];
  D128():
    deopt 437 [];
  L12():
    goto L13();
  L13():
    asNamespace = ldf asNamespace;
    check L115() else D29();
  L111():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L112() else D27();
  L186():
    p33 = prom<V +>{
      dfile4 = ld dfile;
      dfile5 = force? dfile4;
      checkMissing(dfile5);
      return dfile5;
    };
    r120 = dyn file_test1("-f", p33);
    check L187() else D71();
  L275():
    p77 = prom<V +>{
      db_names = ld db_names;
      db_names1 = force? db_names;
      checkMissing(db_names1);
      return db_names1;
    };
    p80 = prom<V +>{
      paste = ldf paste;
      p78 = prom<V +>{
        package_name10 = ld package_name;
        package_name11 = force? package_name10;
        checkMissing(package_name11);
        return package_name11;
      };
      p79 = prom<V +>{
        sym13 = ldf c;
        base13 = ldf c in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r232):
        return r232;
      L1():
        c39 = ldf c in base;
        r233 = dyn c39("deprecated", "defunct");
        goto L0(r233);
      L2():
        r231 = dyn base13("deprecated", "defunct");
        goto L0(r231);
      };
      r235 = dyn paste[, , sep](p78, p79, "-");
      return r235;
    };
    r237 = dyn _in_(p77, p80);
    check L276() else D129();
  D27():
    deopt 90 [];
  D29():
    deopt 97 [];
  D71():
    deopt 250 [r120];
  D129():
    deopt 440 [r237];
  L112():
    p12 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p14 = prom<V +>{
      dirname = ldf dirname;
      p13 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r43 = dyn dirname(p13);
      return r43;
    };
    r45 = dyn _load_namespace_quietly(p12, p14);
    check L113() else D28();
  L115():
    p15 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r48 = dyn asNamespace(p15);
    check L116() else D30();
  L187():
    c16 = `as.logical`(r120);
    if c16 then L188() else L34();
  L276():
    st ind = r237;
    db2 = ld db;
    check L277() else D130();
  D28():
    deopt 93 [r45];
  D30():
    deopt 99 [r48];
  D130():
    deopt 442 [db2];
  L34():
    character1 = ldf character;
    check L192() else D74();
  L35(r123):
    st meta = r123;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L194() else D76();
  L113():
    goto L13();
  L116():
    st code_env = r48;
    sort = ldf sort;
    check L117() else D31();
  L188():
    _read_description1 = ldf `.read_description`;
    check L189() else D72();
  L277():
    db3 = force? db2;
    checkMissing(db3);
    c40 = `is.object`(db3);
    if c40 then L278() else L279(db3);
  D31():
    deopt 102 [];
  D72():
    deopt 252 [];
  D74():
    deopt 256 [];
  D76():
    deopt 260 [];
  L53(dx15):
    st db = dx15;
    lapply = ldf lapply;
    check L282() else D132();
  L117():
    p16 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      names = ldf names in base;
      r51 = dyn names(code_env1);
      goto L0(r51);
    L2():
      r49 = dyn base2(<sym code_env>);
      goto L0(r49);
    };
    r53 = dyn sort(p16);
    check L118() else D32();
  L189():
    p34 = prom<V +>{
      dfile6 = ld dfile;
      dfile7 = force? dfile6;
      checkMissing(dfile7);
      return dfile7;
    };
    r122 = dyn _read_description1(p34);
    check L190() else D73();
  L192():
    r124 = dyn character1();
    check L193() else D75();
  L194():
    p35 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    p36 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    p37 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r128 = dyn _source_assignments_in_code_dir(p35, p36, p37);
    check L195() else D77();
  L278():
    dr14 = tryDispatchBuiltin.1("[", db3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L280() else L279(dr14);
  L279(db5):
    ind2 = ld ind;
    check L281() else D131();
  D32():
    deopt 104 [r53];
  D73():
    deopt 254 [r122];
  D75():
    deopt 257 [r124];
  D77():
    deopt 264 [r128];
  D131():
    deopt 444 [db5, ind2];
  D132():
    deopt 450 [];
  L118():
    st objects_in_code = r53;
    is_base2 = ld is_base;
    check L119() else D33();
  L190():
    goto L35(r122);
  L193():
    goto L35(r124);
  L195():
    file_path4 = ldf `file.path`;
    check L196() else D78();
  L280():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L53(dx14);
  L281():
    ind3 = force? ind2;
    checkMissing(ind3);
    r238 = `!`(ind3);
    __4 = ldf `[` in base;
    r239 = dyn __4(db5, r238);
    goto L53(r239);
  L282():
    p81 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    p82 = prom<V +>{
      r241 = clos inner1432497010;
      return r241;
    };
    r243 = dyn lapply(p81, p82);
    check L283() else D133();
  D33():
    deopt 106 [is_base2];
  D78():
    deopt 266 [];
  D133():
    deopt 453 [r243];
  L119():
    is_base3 = force? is_base2;
    checkMissing(is_base3);
    r54 = `!`(is_base3);
    c6 = `as.logical`(r54);
    if c6 then L120() else L14();
  L196():
    p38 = prom<V +>{
      code_dir6 = ld code_dir;
      code_dir7 = force? code_dir6;
      checkMissing(code_dir7);
      return code_dir7;
    };
    r130 = dyn file_path4(p38, "sysdata.rda");
    check L197() else D79();
  L283():
    st db_usages = r243;
    vapply1 = ldf vapply;
    check L284() else D134();
  D79():
    deopt 269 [r130];
  D134():
    deopt 456 [];
  L14():
    goto L23(NULL);
  L23(r78):
    goto L24();
  L120():
    st has_namespace = TRUE;
    getNamespaceInfo = ldf getNamespaceInfo;
    check L121() else D34();
  L197():
    st sys_data_file = r130;
    file_test2 = ldf file_test;
    check L198() else D80();
  L284():
    p83 = prom<V +>{
      db_usages = ld db_usages;
      db_usages1 = force? db_usages;
      checkMissing(db_usages1);
      return db_usages1;
    };
    p84 = prom<V +>{
      r245 = clos inner2501545716;
      return r245;
    };
    r247 = dyn vapply1(p83, p84, NA_LGL);
    check L285() else D135();
  D34():
    deopt 113 [];
  D80():
    deopt 272 [];
  D135():
    deopt 460 [r247];
  L121():
    p17 = prom<V +>{
      package11 = ld package;
      package12 = force? package11;
      checkMissing(package12);
      return package12;
    };
    r56 = dyn getNamespaceInfo(p17, "S3methods");
    check L122() else D35();
  L198():
    p39 = prom<V +>{
      sys_data_file = ld sys_data_file;
      sys_data_file1 = force? sys_data_file;
      checkMissing(sys_data_file1);
      return sys_data_file1;
    };
    r132 = dyn file_test2("-f", p39);
    check L199() else D81();
  L285():
    st ind = r247;
    lapply1 = ldf lapply;
    check L286() else D136();
  D35():
    deopt 116 [r56];
  D81():
    deopt 275 [r132];
  D136():
    deopt 463 [];
  L122():
    st ns_S3_methods_db = r56;
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L123() else L124();
  L199():
    c17 = `as.logical`(r132);
    if c17 then L200() else L36();
  L286():
    p85 = prom<V +>{
      db_usages2 = ld db_usages;
      db_usages3 = force? db_usages2;
      checkMissing(db_usages3);
      c41 = `is.object`(db_usages3);
      if c41 then L1() else L2(db_usages3);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", db_usages3);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(db_usages5):
      ind4 = ld ind;
      ind5 = force? ind4;
      __5 = ldf `[` in base;
      r248 = dyn __5(db_usages5, ind5);
      goto L0(r248);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p86 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r251 = dyn lapply1(p85, p86, "bad_lines");
    check L287() else D137();
  D137():
    deopt 467 [r251];
  L15(r58):
    st ns_S3_generics = r58;
    ns_S3_methods_db4 = ld ns_S3_methods_db;
    check L130() else D38();
  L36():
    goto L37();
  L37():
    sort1 = ldf sort;
    check L204() else D84();
  L123():
    ns_S3_methods_db = ld ns_S3_methods_db;
    check L125() else D36();
  L124():
    r57 = dyn base3(<lang `[`(ns_S3_methods_db, , 1)>);
    goto L15(r57);
  L200():
    load = ldf load;
    check L201() else D82();
  L287():
    st bad_lines = r251;
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L288() else L289();
  D36():
    deopt 120 [ns_S3_methods_db];
  D38():
    deopt 129 [ns_S3_methods_db4];
  D82():
    deopt 277 [];
  D84():
    deopt 284 [];
  L54(r253):
    st bad_doc_objects = r253;
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L291() else L292();
  L125():
    ns_S3_methods_db1 = force? ns_S3_methods_db;
    checkMissing(ns_S3_methods_db1);
    c7 = `is.object`(ns_S3_methods_db1);
    if c7 then L126() else L127();
  L130():
    ns_S3_methods_db5 = force? ns_S3_methods_db4;
    checkMissing(ns_S3_methods_db5);
    c8 = `is.object`(ns_S3_methods_db5);
    if c8 then L131() else L132();
  L201():
    p40 = prom<V +>{
      sys_data_file2 = ld sys_data_file;
      sys_data_file3 = force? sys_data_file2;
      checkMissing(sys_data_file3);
      return sys_data_file3;
    };
    p41 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r135 = dyn load(p40, p41);
    check L202() else D83();
  L204():
    p42 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r138):
      return r138;
    L1():
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      names1 = ldf names in base;
      r139 = dyn names1(code_env7);
      goto L0(r139);
    L2():
      r137 = dyn base7(<sym code_env>);
      goto L0(r137);
    };
    r141 = dyn sort1(p42);
    check L205() else D85();
  L288():
    list = ldf list in base;
    r254 = dyn list();
    check L290() else D138();
  L289():
    r252 = dyn base14();
    goto L54(r252);
  D83():
    deopt 280 [r135];
  D85():
    deopt 286 [r141];
  D138():
    deopt 472 [r254];
  L16(dx1):
    as_character = ldf `as.character` in base;
    r60 = dyn as_character(dx1);
    check L129() else D37();
  L17(dx3):
    st ns_S3_methods = dx3;
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L134() else L135();
  L55(r256):
    s1 = toForSeq(r256);
    l4 = length(s1);
    i8 = 0;
    goto L56(i8);
  L126():
    dr = tryDispatchBuiltin.1("[", ns_S3_methods_db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L128() else L127();
  L127():
    __ = ldf `[` in base;
    r59 = dyn __(ns_S3_methods_db1, <missing>, 1);
    goto L16(r59);
  L131():
    dr2 = tryDispatchBuiltin.1("[", ns_S3_methods_db5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L133() else L132();
  L132():
    __1 = ldf `[` in base;
    r61 = dyn __1(ns_S3_methods_db5, <missing>, 3);
    goto L17(r61);
  L202():
    goto L37();
  L205():
    st objects_in_code = r141;
    file_exists = ldf `file.exists`;
    check L206() else D86();
  L290():
    goto L54(r254);
  L291():
    db8 = ld db;
    check L293() else D139();
  L292():
    r255 = dyn base15(<sym db>);
    goto L55(r255);
  D37():
    deopt 127 [r60];
  D86():
    deopt 289 [];
  D139():
    deopt 476 [db8];
  L18(r63):
    r64 = `!`(r63);
    c10 = `as.logical`(r64);
    if c10 then L137() else L19();
  L56(i9):
    i10 = `+`.1(i9, 1);
    c42 = `<`.1(l4, i10);
    if c42 then L295() else L70();
  L128():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L129():
    goto L15(r60);
  L133():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L134():
    ns_S3_methods = ld ns_S3_methods;
    check L136() else D39();
  L135():
    r62 = dyn base4(<sym ns_S3_methods>);
    goto L18(r62);
  L206():
    p44 = prom<V +>{
      file_path5 = ldf `file.path`;
      p43 = prom<V +>{
        dir31 = ld dir;
        dir32 = force? dir31;
        checkMissing(dir32);
        return dir32;
      };
      r143 = dyn file_path5(p43, "NAMESPACE");
      return r143;
    };
    r145 = dyn file_exists(p44);
    check L207() else D87();
  L293():
    db9 = force? db8;
    checkMissing(db9);
    names2 = ldf names in base;
    r257 = dyn names2(db9);
    check L294() else D140();
  D39():
    deopt 137 [ns_S3_methods];
  D87():
    deopt 291 [r145];
  D140():
    deopt 479 [r257];
  L19():
    goto L22(NULL);
  L22(r77):
    goto L23(r77);
  L70():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st nm = x1;
    db_usages6 = ld db_usages;
    check L296() else D141();
  L136():
    ns_S3_methods1 = force? ns_S3_methods;
    checkMissing(ns_S3_methods1);
    c9 = `is.character`(ns_S3_methods1);
    goto L18(c9);
  L137():
    vapply = ldf vapply;
    check L138() else D40();
  L207():
    c18 = `as.logical`(r145);
    if c18 then L208() else L38(c18);
  L294():
    goto L55(r257);
  L295():
    bad_lines = ld bad_lines;
    check L351() else D171();
  D40():
    deopt 142 [];
  D141():
    deopt 480 [i10, db_usages6];
  D171():
    deopt 583 [bad_lines];
  L38(c20):
    c27 = `as.logical`(c20);
    if c27 then L215() else L40();
  L138():
    p18 = prom<V +>{
      ns_S3_methods2 = ld ns_S3_methods;
      ns_S3_methods3 = force? ns_S3_methods2;
      checkMissing(ns_S3_methods3);
      return ns_S3_methods3;
    };
    p19 = prom<V +>{
      is_character = ld `is.character`;
      is_character1 = force? is_character;
      checkMissing(is_character1);
      return is_character1;
    };
    r67 = dyn vapply(p18, p19, NA_LGL);
    check L139() else D41();
  L208():
    sym8 = ldf inherits;
    base8 = ldf inherits in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L209() else L210();
  L296():
    db_usages7 = force? db_usages6;
    checkMissing(db_usages7);
    c43 = `is.object`(db_usages7);
    if c43 then L297() else L298(i10, db_usages7);
  L351():
    bad_lines1 = force? bad_lines;
    checkMissing(bad_lines1);
    l8 = ld bad_doc_objects;
    attr__ = ldf `attr<-`;
    check L352() else D172();
  D41():
    deopt 146 [r67];
  D172():
    deopt 586 [bad_lines1, l8, bad_lines1];
  L39(c23, r147):
    r157 = `!`(r147);
    c24 = `as.logical`(r157);
    c25 = `&&`(c23, c24);
    goto L38(c25);
  L40():
    goto L24();
  L57(i16, dx19):
    st exprs = dx19;
    exprs = ld exprs;
    check L301() else D143();
  L139():
    st ind = r67;
    l = ld ns_S3_methods;
    c11 = `is.object`(l);
    if c11 then L140() else L141("", l);
  L209():
    tryCatch = ldf tryCatch;
    check L211() else D88();
  L210():
    r146 = dyn base8(<lang tryCatch(`<-`(nsInfo, parseNamespaceFile(package_name, dirname(dir))), error=identity)>, "error");
    goto L39(c18, r146);
  L215():
    st has_namespace = TRUE;
    intersect = ldf intersect;
    check L216() else D91();
  L297():
    dr18 = tryDispatchBuiltin.1("[[", db_usages7);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L299() else L298(i10, dr18);
  L298(i14, db_usages9):
    nm = ld nm;
    check L300() else D142();
  L352():
    r311 = dyn attr__(l8, NULL, "bad_lines", bad_lines1);
    check L353() else D173();
  D88():
    deopt 295 [c18];
  D91():
    deopt 310 [];
  D142():
    deopt 482 [i14, db_usages9, nm];
  D143():
    deopt 486 [i16, exprs];
  D173():
    deopt 589 [bad_lines1, r311];
  L20(dx5):
    st ns_S3_methods = dx5;
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L144() else L145();
  L140():
    dr4 = tryDispatchBuiltin.0("[<-", l, "");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L142() else L141("", dr4);
  L141(r69, l2):
    ind = ld ind;
    check L143() else D42();
  L211():
    p48 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p45 = prom<V +>{
        package_name4 = ld package_name;
        package_name5 = force? package_name4;
        checkMissing(package_name5);
        return package_name5;
      };
      p47 = prom<V +>{
        dirname1 = ldf dirname;
        p46 = prom<V +>{
          dir33 = ld dir;
          dir34 = force? dir33;
          checkMissing(dir34);
          return dir34;
        };
        r150 = dyn dirname1(p46);
        return r150;
      };
      r152 = dyn parseNamespaceFile(p45, p47);
      st nsInfo = r152;
      invisible.0();
      return r152;
    };
    p49 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r155 = dyn tryCatch[, error](p48, p49);
    check L212() else D89();
  L216():
    p50 = prom<V +>{
      objects_in_code = ld objects_in_code;
      objects_in_code1 = force? objects_in_code;
      checkMissing(objects_in_code1);
      return objects_in_code1;
    };
    p51 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      c28 = `is.object`(nsInfo1);
      if c28 then L1() else L2(nsInfo1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", nsInfo1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(nsInfo3):
      r159 = `$`(nsInfo3, <sym exports>);
      goto L0(r159);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r161 = dyn intersect(p50, p51);
    check L217() else D92();
  L299():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L57(i10, dx18);
  L300():
    nm1 = force? nm;
    __6 = ldf `[[` in base;
    r258 = dyn __6(db_usages9, nm1);
    goto L57(i14, r258);
  L301():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    c44 = `is.object`(exprs1);
    if c44 then L302() else L303(i16, exprs1);
  L353():
    st bad_doc_objects = r311;
    l9 = ld bad_doc_objects;
    class__ = ldf `class<-`;
    check L354() else D174();
  D42():
    deopt 151 [r69, l2, "", ind];
  D89():
    deopt 299 [c18, r155];
  D92():
    deopt 313 [r161];
  D174():
    deopt 594 ["checkDocStyle", l9, "checkDocStyle"];
  L21(r75):
    st ns_S3_methods = r75;
    goto L22(r75);
  L58(i20, dx21):
    st exprs = dx21;
    vapply2 = ldf vapply;
    check L307() else D146();
  L142():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx4);
  L143():
    ind1 = force? ind;
    checkMissing(ind1);
    r72 = `!`(ind1);
    ___ = ldf `[<-` in base;
    r73 = dyn ___(l2, "", r72);
    goto L20(r73);
  L144():
    ns_S3_methods4 = ld ns_S3_methods;
    check L146() else D43();
  L145():
    r74 = dyn base5(<sym ns_S3_methods>);
    goto L21(r74);
  L212():
    inherits = ldf inherits in base;
    r156 = dyn inherits(r155, "error", FALSE);
    check L213() else D90();
  L217():
    st OK = r161;
    nsInfo4 = ld nsInfo;
    check L218() else D93();
  L302():
    dr20 = tryDispatchBuiltin.1("[", exprs1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L304() else L303(i16, dr20);
  L303(i18, exprs3):
    lengths = ldf lengths;
    check L305() else D144();
  L354():
    r312 = dyn class__(l9, NULL, "checkDocStyle");
    check L355() else D175();
  D43():
    deopt 158 [ns_S3_methods4];
  D90():
    deopt 303 [c18, r156];
  D93():
    deopt 315 [nsInfo4];
  D144():
    deopt 489 [i18, exprs3];
  D146():
    deopt 497 [i20];
  D175():
    deopt 596 ["checkDocStyle", r312];
  L146():
    ns_S3_methods5 = force? ns_S3_methods4;
    checkMissing(ns_S3_methods5);
    as_character1 = ldf `as.character` in base;
    r76 = dyn as_character1(ns_S3_methods5);
    check L147() else D44();
  L213():
    goto L39(c18, r156);
  L218():
    nsInfo5 = force? nsInfo4;
    checkMissing(nsInfo5);
    c29 = `is.object`(nsInfo5);
    if c29 then L220() else L221(nsInfo5);
  L304():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L58(i16, dx20);
  L305():
    p87 = prom<V +>{
      exprs4 = ld exprs;
      exprs5 = force? exprs4;
      checkMissing(exprs5);
      return exprs5;
    };
    r260 = dyn lengths(p87);
    check L306() else D145();
  L307():
    p88 = prom<V +>{
      exprs6 = ld exprs;
      exprs7 = force? exprs6;
      checkMissing(exprs7);
      return exprs7;
    };
    p89 = prom<V +>{
      r264 = clos inner3708401697;
      return r264;
    };
    r266 = dyn vapply2(p88, p89, "");
    check L308() else D147();
  L355():
    st bad_doc_objects = r312;
    bad_doc_objects = ld bad_doc_objects;
    check L356() else D176();
  D44():
    deopt 161 [r76];
  D145():
    deopt 491 [i18, exprs3, r260];
  D147():
    deopt 501 [i20, r266];
  D176():
    deopt 598 [bad_doc_objects];
  L147():
    goto L21(r76);
  L219(dx9):
    s = toForSeq(dx9);
    l3 = length(s);
    i = 0;
    goto L41(i);
  L220():
    dr8 = tryDispatchBuiltin.1("$", nsInfo5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L222() else L221(dr8);
  L221(nsInfo7):
    r162 = `$`(nsInfo7, <sym exportPatterns>);
    goto L219(r162);
  L306():
    r261 = `>`(r260, 1);
    __7 = ldf `[` in base;
    r262 = dyn __7(exprs3, r261);
    goto L58(i18, r262);
  L308():
    st functions = r266;
    vapply3 = ldf vapply;
    check L309() else D148();
  L356():
    bad_doc_objects1 = force? bad_doc_objects;
    checkMissing(bad_doc_objects1);
    popenv;
    return bad_doc_objects1;
  D148():
    deopt 504 [i20];
  L41(i1):
    i2 = `+`.1(i1, 1);
    c30 = `<`.1(l3, i2);
    if c30 then L223() else L43();
  L222():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L219(dx8);
  L309():
    p90 = prom<V +>{
      exprs8 = ld exprs;
      exprs9 = force? exprs8;
      checkMissing(exprs9);
      return exprs9;
    };
    p91 = prom<V +>{
      _is_call_from_replacement_function_usage = ld `.is_call_from_replacement_function_usage`;
      _is_call_from_replacement_function_usage1 = force? _is_call_from_replacement_function_usage;
      checkMissing(_is_call_from_replacement_function_usage1);
      return _is_call_from_replacement_function_usage1;
    };
    r269 = dyn vapply3(p90, p91, NA_LGL);
    check L310() else D149();
  D149():
    deopt 508 [i20, r269];
  L43():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L224() else L225();
  L223():
    unique = ldf unique;
    check L230() else D98();
  L310():
    st ind = r269;
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L311() else L312();
  D98():
    deopt 336 [];
  L42(i7, r164):
    st OK = r164;
    goto L41(i7);
  L59(i23, r271):
    c45 = `as.logical`(r271);
    if c45 then L315() else L60();
  L224():
    OK = ld OK;
    check L226() else D94();
  L225():
    r163 = dyn base9(<sym OK>, <lang grep(p, objects_in_code, value=TRUE)>);
    goto L42(i2, r163);
  L230():
    p56 = prom<V +>{
      OK2 = ld OK;
      OK3 = force? OK2;
      checkMissing(OK3);
      return OK3;
    };
    r170 = dyn unique(p56);
    check L231() else D99();
  L311():
    ind6 = ld ind;
    check L313() else D150();
  L312():
    r270 = dyn base16(<sym ind>);
    goto L59(i20, r270);
  D94():
    deopt 320 [i2, OK];
  D99():
    deopt 338 [r170];
  D150():
    deopt 512 [i20, ind6];
  L60():
    goto L62(i23);
  L62(i29):
    intersect1 = ldf intersect;
    check L324() else D157();
  L226():
    OK1 = force? OK;
    checkMissing(OK1);
    grep = ldf grep;
    check L227() else D95();
  L231():
    st objects_in_code = r170;
    _get_namespace_S3_methods_db = ldf `.get_namespace_S3_methods_db`;
    check L232() else D100();
  L313():
    ind7 = force? ind6;
    checkMissing(ind7);
    any = ldf any in base;
    r272 = dyn any(ind7);
    check L314() else D151();
  L315():
    paste1 = ldf paste0;
    check L316() else D152();
  D95():
    deopt 323 [i2];
  D100():
    deopt 341 [];
  D151():
    deopt 515 [i20, r272];
  D152():
    deopt 517 [i23];
  D157():
    deopt 534 [i29];
  L227():
    p54 = prom<V +>{
      p52 = ld p;
      p53 = force? p52;
      checkMissing(p53);
      return p53;
    };
    p55 = prom<V +>{
      objects_in_code2 = ld objects_in_code;
      objects_in_code3 = force? objects_in_code2;
      checkMissing(objects_in_code3);
      return objects_in_code3;
    };
    r167 = dyn grep[, , value](p54, p55, TRUE);
    check L228() else D96();
  L232():
    p57 = prom<V +>{
      nsInfo8 = ld nsInfo;
      nsInfo9 = force? nsInfo8;
      checkMissing(nsInfo9);
      return nsInfo9;
    };
    r172 = dyn _get_namespace_S3_methods_db(p57);
    check L233() else D101();
  L314():
    goto L59(i20, r272);
  L316():
    p94 = prom<V +>{
      vapply4 = ldf vapply;
      p92 = prom<V +>{
        exprs10 = ld exprs;
        exprs11 = force? exprs10;
        checkMissing(exprs11);
        c46 = `is.object`(exprs11);
        if c46 then L1() else L2(exprs11);
      L0(dx23):
        return dx23;
      L1():
        dr22 = tryDispatchBuiltin.1("[", exprs11);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L3() else L2(dr22);
      L2(exprs13):
        ind8 = ld ind;
        ind9 = force? ind8;
        __8 = ldf `[` in base;
        r273 = dyn __8(exprs13, ind9);
        goto L0(r273);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx22);
      };
      p93 = prom<V +>{
        r275 = clos inner3708401697;
        return r275;
      };
      r277 = dyn vapply4(p92, p93, "");
      return r277;
    };
    r279 = dyn paste1(p94, "<-");
    check L317() else D153();
  L324():
    p95 = prom<V +>{
      functions2 = ld functions;
      functions3 = force? functions2;
      checkMissing(functions3);
      return functions3;
    };
    p96 = prom<V +>{
      all_methods_in_package2 = ld all_methods_in_package;
      all_methods_in_package3 = force? all_methods_in_package2;
      checkMissing(all_methods_in_package3);
      return all_methods_in_package3;
    };
    r286 = dyn intersect1(p95, p96);
    check L325() else D158();
  D96():
    deopt 328 [i2, r167];
  D101():
    deopt 343 [r172];
  D153():
    deopt 520 [i23, r279];
  D158():
    deopt 537 [i29, r286];
  L228():
    c31 = ldf c in base;
    r168 = dyn c31(OK1, r167);
    check L229() else D97();
  L233():
    st ns_S3_methods_db = r172;
    ns_S3_methods_db8 = ld ns_S3_methods_db;
    check L234() else D102();
  L317():
    st replace_funs = r279;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L318() else L319();
  L325():
    st methods_with_full_name = r286;
    _transform_S3_method_markup = ldf `.transform_S3_method_markup`;
    check L326() else D159();
  D97():
    deopt 330 [i2, r168];
  D102():
    deopt 345 [ns_S3_methods_db8];
  D159():
    deopt 540 [i29];
  L61(i28, r281):
    st functions = r281;
    goto L62(i28);
  L229():
    goto L42(i2, r168);
  L234():
    ns_S3_methods_db9 = force? ns_S3_methods_db8;
    checkMissing(ns_S3_methods_db9);
    c32 = `is.object`(ns_S3_methods_db9);
    if c32 then L235() else L236();
  L318():
    functions = ld functions;
    check L320() else D154();
  L319():
    r280 = dyn base17(<sym functions>, <sym replace_funs>);
    goto L61(i23, r280);
  L326():
    p97 = prom<V +>{
      functions4 = ld functions;
      functions5 = force? functions4;
      checkMissing(functions5);
      return functions5;
    };
    r288 = dyn _transform_S3_method_markup(p97);
    check L327() else D160();
  D154():
    deopt 524 [i23, functions];
  D160():
    deopt 542 [i29, r288];
  L44(dx11):
    st ns_S3_generics = dx11;
    ns_S3_methods_db12 = ld ns_S3_methods_db;
    check L238() else D103();
  L235():
    dr10 = tryDispatchBuiltin.1("[", ns_S3_methods_db9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L237() else L236();
  L236():
    __2 = ldf `[` in base;
    r173 = dyn __2(ns_S3_methods_db9, <missing>, 1);
    goto L44(r173);
  L320():
    functions1 = force? functions;
    checkMissing(functions1);
    replace_funs = ld replace_funs;
    check L321() else D155();
  L327():
    st functions = r288;
    Map1 = ldf Map;
    check L328() else D161();
  D103():
    deopt 352 [ns_S3_methods_db12];
  D155():
    deopt 526 [i23, replace_funs];
  D161():
    deopt 545 [i29];
  L237():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L44(dx10);
  L238():
    ns_S3_methods_db13 = force? ns_S3_methods_db12;
    checkMissing(ns_S3_methods_db13);
    c33 = `is.object`(ns_S3_methods_db13);
    if c33 then L239() else L240();
  L321():
    replace_funs1 = force? replace_funs;
    checkMissing(replace_funs1);
    c47 = ldf c in base;
    r282 = dyn c47(functions1, replace_funs1);
    check L322() else D156();
  L328():
    p98 = prom<V +>{
      r289 = clos inner3355313315;
      return r289;
    };
    p101 = prom<V +>{
      intersect2 = ldf intersect;
      p99 = prom<V +>{
        functions6 = ld functions;
        functions7 = force? functions6;
        checkMissing(functions7);
        return functions7;
      };
      p100 = prom<V +>{
        all_S3_generics4 = ld all_S3_generics;
        all_S3_generics5 = force? all_S3_generics4;
        checkMissing(all_S3_generics5);
        return all_S3_generics5;
      };
      r293 = dyn intersect2(p99, p100);
      return r293;
    };
    r295 = dyn Map1(p98, p101);
    check L329() else D162();
  D156():
    deopt 529 [i23, r282];
  D162():
    deopt 548 [i29, r295];
  L45(dx13):
    st ns_S3_methods = dx13;
    goto L24();
  L239():
    dr12 = tryDispatchBuiltin.1("[", ns_S3_methods_db13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L241() else L240();
  L240():
    __3 = ldf `[` in base;
    r174 = dyn __3(ns_S3_methods_db13, <missing>, 3);
    goto L45(r174);
  L322():
    goto L61(i23, r282);
  L329():
    st methods_with_generic = r295;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L330() else L331();
  L63(i32, r297):
    c48 = `as.logical`(r297);
    if c48 then L64(i32, c48) else L334();
  L241():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L45(dx12);
  L330():
    methods_with_generic = ld methods_with_generic;
    check L332() else D163();
  L331():
    r296 = dyn base18(<sym methods_with_generic>);
    goto L63(i29, r296);
  D163():
    deopt 552 [i29, methods_with_generic];
  L64(i33, c49):
    c57 = `as.logical`(c49);
    if c57 then L340() else L66();
  L332():
    methods_with_generic1 = force? methods_with_generic;
    checkMissing(methods_with_generic1);
    length1 = ldf length in base;
    r298 = dyn length1(methods_with_generic1);
    check L333() else D164();
  L334():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L335() else L336();
  D164():
    deopt 555 [i29, r298];
  L65(i37, c53, r300):
    c54 = `as.logical`(r300);
    c55 = `||`(c53, c54);
    goto L64(i37, c55);
  L66():
    goto L69(i33);
  L69(i48):
    goto L56(i48);
  L333():
    goto L63(i29, r298);
  L335():
    methods_with_full_name = ld methods_with_full_name;
    check L337() else D165();
  L336():
    r299 = dyn base19(<sym methods_with_full_name>);
    goto L65(i32, c48, r299);
  L340():
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L341() else L342();
  D165():
    deopt 558 [i32, c48, methods_with_full_name];
  L67(i43, r303):
    l5 = ld bad_doc_objects;
    c58 = `is.object`(l5);
    if c58 then L346() else L347(i43, r303, l5);
  L337():
    methods_with_full_name1 = force? methods_with_full_name;
    checkMissing(methods_with_full_name1);
    length2 = ldf length in base;
    r301 = dyn length2(methods_with_full_name1);
    check L338() else D166();
  L341():
    methods_with_generic2 = ld methods_with_generic;
    check L343() else D167();
  L342():
    r302 = dyn base20[withGeneric, withFullName](<sym methods_with_generic>, <sym methods_with_full_name>);
    goto L67(i33, r302);
  D166():
    deopt 561 [i32, c48, r301];
  D167():
    deopt 565 [i33, methods_with_generic2];
  L68(i47, r308, dx25):
    st bad_doc_objects = dx25;
    goto L69(i47);
  L338():
    goto L65(i32, c48, r301);
  L343():
    methods_with_generic3 = force? methods_with_generic2;
    checkMissing(methods_with_generic3);
    methods_with_full_name2 = ld methods_with_full_name;
    check L344() else D168();
  L346():
    dr24 = tryDispatchBuiltin.0("[[<-", l5, r303);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L348() else L347(i43, r303, dr24);
  L347(i45, r306, l7):
    nm2 = ld nm;
    check L349() else D170();
  D168():
    deopt 568 [i33, methods_with_full_name2];
  D170():
    deopt 574 [i45, r306, l7, r303, nm2];
  L344():
    methods_with_full_name3 = force? methods_with_full_name2;
    checkMissing(methods_with_full_name3);
    list1 = ldf list in base;
    r304 = dyn list1(methods_with_generic3, methods_with_full_name3);
    check L345() else D169();
  L348():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L68(i43, r303, dx24);
  L349():
    nm3 = force? nm2;
    ____ = ldf `[[<-` in base;
    r309 = dyn ____(l7, r303, nm3);
    goto L68(i45, r306, r309);
  D169():
    deopt 572 [i33, r304];
  L345():
    goto L67(i33, r304);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg get:cls, reg f1:*, reg f2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r4:V, reg is_function:cls, reg r5:V |
    mkenv;
    st f = f;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    get = ldf get;
    check L3() else D0();
  L2():
    r = dyn base(<lang get(f, envir=code_env)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
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
    r4 = dyn get[, envir](p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r4];
  L4():
    is_function = ldf `is.function` in base;
    r5 = dyn is_function(r4);
    check L5() else D2();
  D2():
    deopt 9 [r5];
  L5():
    goto L0(r5);
  }
}
fun inner3355313315(g) {
  (reg g:*) -+> V { var g:*, reg exists:cls, reg g1:*, reg g2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg paste0:cls, reg g3:*, reg g4:V, reg p2:p(V +), reg r8:V, reg functions_in_code:*, reg functions_in_code1:V, reg c1:L, reg functions_in_code3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg functions_in_code4:*, reg functions_in_code5:V, reg p3:p(V +), reg name:*, reg name1:V, reg p4:p(V +), reg r11:V, reg __:cls, reg r12:V, reg setdiff:cls, reg methods:*, reg methods1:V, reg p5:p(V +), reg methods_stop_list:*, reg methods_stop_list1:V, reg p6:p(V +), reg r15:V, reg has_namespace:*, reg has_namespace1:V, reg c2:L, reg ns_S3_methods:*, reg ns_S3_methods1:V, reg c3:L, reg ns_S3_methods3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ns_S3_generics:*, reg ns_S3_generics1:V, reg g5:*, reg g6:V, reg r16:V, reg __1:cls, reg r17:V, reg startsWith1:cls, reg methods2:*, reg methods3:V, reg p7:p(V +), reg name2:*, reg name3:V, reg p8:p(V +), reg r20:V, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg methods4:*, reg methods5:V, reg methods6:*, reg methods7:V, reg c4:L, reg methods9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg OK:*, reg OK1:V, reg __2:cls, reg r23:V, reg c5:cls, reg r24:V, reg methods10:*, reg methods11:V |
    mkenv;
    st g = g;
    exists = ldf exists;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      g1 = ld g;
      g2 = force? g1;
      checkMissing(g2);
      return g2;
    };
    p1 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r2 = dyn exists[, envir](p, p1);
    check L9() else D1();
  D1():
    deopt 5 [r2];
  L9():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L10() else L0();
  L0():
    paste0 = ldf paste0;
    check L15() else D4();
  L10():
    character = ldf character;
    check L11() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L11():
    r4 = dyn character();
    check L12() else D3();
  L15():
    p2 = prom<V +>{
      g3 = ld g;
      g4 = force? g3;
      checkMissing(g4);
      return g4;
    };
    r8 = dyn paste0(p2, ".");
    check L16() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 17 [r8];
  L12():
    popenv;
    return r4;
  L16():
    st name = r8;
    functions_in_code = ld functions_in_code;
    check L17() else D6();
  D6():
    deopt 19 [functions_in_code];
  L17():
    functions_in_code1 = force? functions_in_code;
    checkMissing(functions_in_code1);
    c1 = `is.object`(functions_in_code1);
    if c1 then L18() else L19(functions_in_code1);
  L2(dx1):
    st methods = dx1;
    setdiff = ldf setdiff;
    check L23() else D9();
  L18():
    dr = tryDispatchBuiltin.1("[", functions_in_code1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(functions_in_code3):
    startsWith = ldf startsWith;
    check L21() else D7();
  D7():
    deopt 22 [functions_in_code3];
  D9():
    deopt 29 [];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L21():
    p3 = prom<V +>{
      functions_in_code4 = ld functions_in_code;
      functions_in_code5 = force? functions_in_code4;
      checkMissing(functions_in_code5);
      return functions_in_code5;
    };
    p4 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    r11 = dyn startsWith(p3, p4);
    check L22() else D8();
  L23():
    p5 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    p6 = prom<V +>{
      methods_stop_list = ld methods_stop_list;
      methods_stop_list1 = force? methods_stop_list;
      checkMissing(methods_stop_list1);
      return methods_stop_list1;
    };
    r15 = dyn setdiff(p5, p6);
    check L24() else D10();
  D8():
    deopt 25 [functions_in_code3, r11];
  D10():
    deopt 32 [r15];
  L22():
    __ = ldf `[` in base;
    r12 = dyn __(functions_in_code3, r11);
    goto L2(r12);
  L24():
    st methods = r15;
    has_namespace = ld has_namespace;
    check L25() else D11();
  D11():
    deopt 34 [has_namespace];
  L25():
    has_namespace1 = force? has_namespace;
    checkMissing(has_namespace1);
    c2 = `as.logical`(has_namespace1);
    if c2 then L26() else L3();
  L3():
    goto L7();
  L7():
    methods10 = ld methods;
    check L45() else D21();
  L26():
    ns_S3_methods = ld ns_S3_methods;
    check L27() else D12();
  D12():
    deopt 36 [ns_S3_methods];
  D21():
    deopt 64 [methods10];
  L27():
    ns_S3_methods1 = force? ns_S3_methods;
    checkMissing(ns_S3_methods1);
    c3 = `is.object`(ns_S3_methods1);
    if c3 then L28() else L29(ns_S3_methods1);
  L45():
    methods11 = force? methods10;
    checkMissing(methods11);
    popenv;
    return methods11;
  L4(dx3):
    st methods2 = dx3;
    startsWith1 = ldf startsWith;
    check L33() else D15();
  L28():
    dr2 = tryDispatchBuiltin.1("[", ns_S3_methods1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(dr2);
  L29(ns_S3_methods3):
    ns_S3_generics = ld ns_S3_generics;
    check L31() else D13();
  D13():
    deopt 38 [ns_S3_methods3, ns_S3_generics];
  D15():
    deopt 45 [];
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L31():
    ns_S3_generics1 = force? ns_S3_generics;
    checkMissing(ns_S3_generics1);
    g5 = ld g;
    check L32() else D14();
  L33():
    p7 = prom<V +>{
      methods2 = ld methods2;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    p8 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    r20 = dyn startsWith1(p7, p8);
    check L34() else D16();
  D14():
    deopt 39 [ns_S3_methods3, ns_S3_generics1, g5];
  D16():
    deopt 48 [r20];
  L32():
    g6 = force? g5;
    checkMissing(g6);
    r16 = `==`(ns_S3_generics1, g6);
    __1 = ldf `[` in base;
    r17 = dyn __1(ns_S3_methods3, r16);
    goto L4(r17);
  L34():
    st OK = r20;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L5(r22):
    st methods = r22;
    goto L7();
  L35():
    methods4 = ld methods;
    check L37() else D17();
  L36():
    r21 = dyn base(<sym methods>, <lang `[`(methods2, OK)>);
    goto L5(r21);
  D17():
    deopt 52 [methods4];
  L37():
    methods5 = force? methods4;
    checkMissing(methods5);
    methods6 = ld methods2;
    check L38() else D18();
  D18():
    deopt 54 [methods6];
  L38():
    methods7 = force? methods6;
    checkMissing(methods7);
    c4 = `is.object`(methods7);
    if c4 then L39() else L40(methods7);
  L6(dx5):
    c5 = ldf c in base;
    r24 = dyn c5(methods5, dx5);
    check L43() else D20();
  L39():
    dr4 = tryDispatchBuiltin.1("[", methods7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(methods9):
    OK = ld OK;
    check L42() else D19();
  D19():
    deopt 56 [methods9, OK];
  D20():
    deopt 60 [r24];
  L41():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L42():
    OK1 = force? OK;
    __2 = ldf `[` in base;
    r23 = dyn __2(methods9, OK1);
    goto L6(r23);
  L43():
    goto L5(r24);
  }
}
fun inner1432497010(Rd) {
  (reg Rd:*) -+> V { var Rd:*, reg _Rd_get_section:cls, reg Rd1:*, reg Rd2:V, reg p:p(V +), reg r1:V, reg _parse_usage_as_much_as_possible:cls, reg Rd3:*, reg Rd4:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st Rd = Rd;
    _Rd_get_section = ldf `.Rd_get_section`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      Rd1 = ld Rd;
      Rd2 = force? Rd1;
      checkMissing(Rd2);
      return Rd2;
    };
    r1 = dyn _Rd_get_section(p, "usage");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    st Rd = r1;
    _parse_usage_as_much_as_possible = ldf `.parse_usage_as_much_as_possible`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p1 = prom<V +>{
      Rd3 = ld Rd;
      Rd4 = force? Rd3;
      checkMissing(Rd4);
      return Rd4;
    };
    r3 = dyn _parse_usage_as_much_as_possible(p1);
    check L3() else D3();
  D3():
    deopt 9 [r3];
  L3():
    popenv;
    return r3;
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
    r = dyn base(<lang `[[`(e, 1)>);
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
    r2 = dyn __(e4, 1);
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