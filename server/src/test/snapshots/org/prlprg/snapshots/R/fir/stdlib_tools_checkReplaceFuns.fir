fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st checkReplaceFuns = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r14:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p3:p(V +), reg r16:V, reg r17:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg basename:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r24:V, reg r25:V, reg is_base:*, reg is_base1:V, reg r26:V, reg c3:L, reg _load_namespace_quietly:cls, reg package5:*, reg package6:V, reg p7:p(V +), reg dirname:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg r31:V, reg asNamespace:cls, reg package7:*, reg package8:V, reg p10:p(V +), reg r34:V, reg is_base2:*, reg is_base3:V, reg r35:V, reg c4:L, reg _getNamespaceInfo:cls, reg code_env:*, reg code_env1:V, reg p11:p(V +), reg r37:V, reg r38:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg missing1:cls, reg r42:V, reg c5:L, reg stop2:cls, reg r43:V, reg dir_exists1:cls, reg dir9:*, reg dir10:V, reg p12:p(V +), reg r46:V, reg r47:V, reg c6:L, reg stop3:cls, reg gettextf1:cls, reg dir11:*, reg dir12:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg r51:V, reg file_path_as_absolute:cls, reg dir13:*, reg dir14:V, reg p15:p(V +), reg r54:V, reg file_path1:cls, reg dir15:*, reg dir16:V, reg p16:p(V +), reg r56:V, reg dir_exists2:cls, reg code_dir2:*, reg code_dir3:V, reg p17:p(V +), reg r58:V, reg r59:V, reg c7:L, reg stop4:cls, reg gettextf2:cls, reg dir17:*, reg dir18:V, reg p18:p(V +), reg r61:V, reg p19:p(V +), reg r63:V, reg basename1:cls, reg dir19:*, reg dir20:V, reg p20:p(V +), reg r66:V, reg r67:V, reg new_env:cls, reg r68:V, reg file_path2:cls, reg dir21:*, reg dir22:V, reg p21:p(V +), reg r70:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p22:p(V +), reg r72:V, reg c8:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p23:p(V +), reg r74:V, reg r75:V, reg character:cls, reg r76:V, reg _source_assignments_in_code_dir:cls, reg code_dir4:*, reg code_dir5:V, reg p24:p(V +), reg code_env2:*, reg code_env3:V, reg p25:p(V +), reg meta:*, reg meta1:V, reg p26:p(V +), reg r80:V, reg file_path3:cls, reg code_dir6:*, reg code_dir7:V, reg p27:p(V +), reg r82:V, reg file_test1:cls, reg sys_data_file:*, reg sys_data_file1:V, reg p28:p(V +), reg r84:V, reg c9:L, reg load:cls, reg sys_data_file2:*, reg sys_data_file3:V, reg p29:p(V +), reg code_env4:*, reg code_env5:V, reg p30:p(V +), reg r87:V, reg file_exists:cls, reg file_path4:cls, reg dir23:*, reg dir24:V, reg p31:p(V +), reg r90:V, reg p32:p(V +), reg r92:V, reg c10:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r93:V, reg c15:L, reg r94:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg basename2:cls, reg dir25:*, reg dir26:V, reg p33:p(V +), reg r96:V, reg p34:p(V +), reg dirname1:cls, reg dir27:*, reg dir28:V, reg p35:p(V +), reg r99:V, reg p36:p(V +), reg r101:V, reg p37:p(V +), reg identity:*, reg identity1:V, reg p38:p(V +), reg r104:V, reg inherits:cls, reg r105:V, reg r106:V, reg c16:L, reg c17:V, reg c19:L, reg _get_namespace_S3_methods_db:cls, reg nsInfo:*, reg nsInfo1:V, reg p39:p(V +), reg r108:V, reg sort:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r109:V, reg r110:V, reg code_env6:*, reg code_env7:V, reg names:cls, reg r111:V, reg p40:p(V +), reg r113:V, reg character1:cls, reg r114:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r115:V, reg r116:V, reg ns_S3_methods_db:*, reg ns_S3_methods_db1:V, reg c20:V, reg r117:V, reg c21:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r118:V, reg r119:V, reg ns_S3_methods_db2:*, reg ns_S3_methods_db3:V, reg c22:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r120:V, reg as_character:cls, reg r121:V, reg ns_S3_methods_db6:*, reg ns_S3_methods_db7:V, reg c23:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r122:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r123:V, reg r124:V, reg ns_S3_methods:*, reg ns_S3_methods1:V, reg c24:L, reg r125:V, reg c25:L, reg vapply:cls, reg ns_S3_methods2:*, reg ns_S3_methods3:V, reg p41:p(V +), reg is_character:*, reg is_character1:V, reg p42:p(V +), reg r128:V, reg l:*, reg c26:L, reg r130:S, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind:*, reg ind1:V, reg r133:V, reg ___:cls, reg r134:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r135:V, reg r136:V, reg ns_S3_methods4:*, reg ns_S3_methods5:V, reg as_character1:cls, reg r137:V, reg ns_S3_methods6:*, reg ns_S3_methods7:V, reg c27:L, reg ns_S3_methods9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg endsWith:cls, reg ns_S3_generics:*, reg ns_S3_generics1:V, reg p43:p(V +), reg r140:V, reg __2:cls, reg r141:V, reg setdiff:cls, reg objects_in_code:*, reg objects_in_code1:V, reg p44:p(V +), reg ns_S3_methods10:*, reg ns_S3_methods11:V, reg p45:p(V +), reg r144:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r146:V, reg r147:V, reg replace_funs:*, reg replace_funs1:V, reg grep:cls, reg objects_in_code2:*, reg objects_in_code3:V, reg p46:p(V +), reg r149:V, reg c28:cls, reg r150:V, reg replace_funs2:*, reg replace_funs3:V, reg c29:L, reg replace_funs5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg startsWith:cls, reg replace_funs6:*, reg replace_funs7:V, reg p47:p(V +), reg r152:V, reg endsWith1:cls, reg replace_funs8:*, reg replace_funs9:V, reg p48:p(V +), reg r154:V, reg r155:V, reg r156:V, reg __3:cls, reg r157:V, reg r158:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r159:V, reg r160:V, reg replace_funs10:*, reg replace_funs11:V, reg length1:cls, reg r161:V, reg c30:L, reg Filter:cls, reg r162:cls, reg p49:p(V +), reg replace_funs12:*, reg replace_funs13:V, reg p50:p(V +), reg r165:V, reg r166:V, reg character2:cls, reg r167:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r168:V, reg r169:V, reg _isMethodsDispatchOn:cls, reg r170:V, reg c31:L, reg _get_S4_generics:cls, reg code_env8:*, reg code_env9:V, reg p51:p(V +), reg r172:V, reg S4_generics:*, reg S4_generics1:V, reg c32:L, reg S4_generics3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg endsWith2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r173:V, reg r174:V, reg S4_generics4:*, reg S4_generics5:V, reg names1:cls, reg r175:V, reg p52:p(V +), reg r177:V, reg __4:cls, reg r178:V, reg lapply:cls, reg S4_generics6:*, reg S4_generics7:V, reg p53:p(V +), reg r180:cls, reg p54:p(V +), reg r182:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r183:V, reg r184:V, reg bad_replace_funs:*, reg bad_replace_funs1:V, reg unlist:cls, reg bad_S4_replace_methods:*, reg bad_S4_replace_methods1:V, reg p55:p(V +), reg r186:V, reg c33:cls, reg r187:V, reg l3:*, reg class__:cls, reg r189:V, reg bad_replace_funs2:*, reg bad_replace_funs3:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    st ns_S3_methods_db = NULL;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L49() else L50();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L51() else L2();
  L49():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L50():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L85() else L86();
  L12():
    sort = ldf sort;
    check L144() else D63();
  L51():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L52() else L53();
  D63():
    deopt 205 [];
  L3(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L56() else L4();
  L13(r41):
    c5 = `as.logical`(r41);
    if c5 then L87() else L14();
  L52():
    package1 = ld package;
    check L54() else D0();
  L53():
    r4 = dyn base1(<sym package>);
    goto L3(r4);
  L85():
    missing1 = ldf missing in base;
    r42 = dyn missing1(<sym dir>);
    goto L13(r42);
  L86():
    r40 = dyn base2(<sym dir>);
    goto L13(r40);
  L144():
    p40 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r110):
      return r110;
    L1():
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      names = ldf names in base;
      r111 = dyn names(code_env7);
      goto L0(r111);
    L2():
      r109 = dyn base4(<sym code_env>);
      goto L0(r109);
    };
    r113 = dyn sort(p40);
    check L145() else D64();
  D0():
    deopt 9 [package1];
  D64():
    deopt 207 [r113];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L60() else D4();
  L14():
    goto L15();
  L15():
    dir_exists1 = ldf `dir.exists`;
    check L91() else D24();
  L54():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L55() else D1();
  L56():
    stop = ldf stop;
    check L57() else D2();
  L87():
    stop2 = ldf stop;
    check L88() else D22();
  L145():
    st objects_in_code = r113;
    character1 = ldf character;
    check L146() else D65();
  D1():
    deopt 12 [r6];
  D2():
    deopt 16 [];
  D4():
    deopt 22 [];
  D22():
    deopt 83 [];
  D24():
    deopt 89 [];
  D65():
    deopt 210 [];
  L55():
    goto L3(r6);
  L57():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L58() else D3();
  L60():
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
    check L61() else D5();
  L88():
    r43 = dyn stop2("you must specify 'package' or 'dir'");
    check L89() else D23();
  L91():
    p12 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r46 = dyn dir_exists1(p12);
    check L92() else D25();
  L146():
    r114 = dyn character1();
    check L147() else D66();
  D3():
    deopt 18 [r8];
  D5():
    deopt 25 [r12];
  D23():
    deopt 85 [r43];
  D25():
    deopt 91 [r46];
  D66():
    deopt 211 [r114];
  L58():
    goto L5();
  L61():
    st dir = r12;
    file_path = ldf `file.path`;
    check L62() else D6();
  L89():
    goto L15();
  L92():
    r47 = `!`(r46);
    c6 = `as.logical`(r47);
    if c6 then L93() else L16();
  L147():
    st replace_funs = r114;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L148() else L149();
  D6():
    deopt 28 [];
  L16():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L97() else D28();
  L17():
    file_path1 = ldf `file.path`;
    check L99() else D30();
  L27(r116):
    r117 = `!`(r116);
    c21 = `as.logical`(r117);
    if c21 then L151() else L28();
  L62():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r14 = dyn file_path(p2, "R");
    check L63() else D7();
  L93():
    stop3 = ldf stop;
    check L94() else D26();
  L148():
    ns_S3_methods_db = ld ns_S3_methods_db;
    check L150() else D67();
  L149():
    r115 = dyn base5(<sym ns_S3_methods_db>);
    goto L27(r115);
  D7():
    deopt 31 [r14];
  D26():
    deopt 94 [];
  D28():
    deopt 100 [];
  D30():
    deopt 105 [];
  D67():
    deopt 214 [ns_S3_methods_db];
  L28():
    goto L38();
  L38():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L187() else L188();
  L63():
    st code_dir = r14;
    dir_exists = ldf `dir.exists`;
    check L64() else D8();
  L94():
    p14 = prom<V +>{
      gettextf1 = ldf gettextf;
      p13 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r49 = dyn gettextf1("directory '%s' does not exist", p13);
      return r49;
    };
    r51 = dyn stop3[, domain](p14, NA_LGL);
    check L95() else D27();
  L97():
    p15 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r54 = dyn file_path_as_absolute(p15);
    check L98() else D29();
  L99():
    p16 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r56 = dyn file_path1(p16, "R");
    check L100() else D31();
  L150():
    ns_S3_methods_db1 = force? ns_S3_methods_db;
    checkMissing(ns_S3_methods_db1);
    c20 = `==`(ns_S3_methods_db1, NULL);
    goto L27(c20);
  L151():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L152() else L153();
  D8():
    deopt 34 [];
  D27():
    deopt 98 [r51];
  D29():
    deopt 102 [r54];
  D31():
    deopt 108 [r56];
  L29(r119):
    st ns_S3_generics = r119;
    ns_S3_methods_db6 = ld ns_S3_methods_db;
    check L159() else D70();
  L39(r147):
    st replace_funs = r147;
    replace_funs2 = ld replace_funs;
    check L193() else D86();
  L64():
    p3 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r16 = dyn dir_exists(p3);
    check L65() else D9();
  L95():
    goto L17();
  L98():
    st dir = r54;
    goto L17();
  L100():
    st code_dir = r56;
    dir_exists2 = ldf `dir.exists`;
    check L101() else D32();
  L152():
    ns_S3_methods_db2 = ld ns_S3_methods_db;
    check L154() else D68();
  L153():
    r118 = dyn base6(<lang `[`(ns_S3_methods_db, , 1)>);
    goto L29(r118);
  L187():
    replace_funs = ld replace_funs;
    check L189() else D82();
  L188():
    r146 = dyn base9(<sym replace_funs>, <lang grep("<-", objects_in_code, value=TRUE)>);
    goto L39(r146);
  D9():
    deopt 36 [r16];
  D32():
    deopt 111 [];
  D68():
    deopt 220 [ns_S3_methods_db2];
  D70():
    deopt 229 [ns_S3_methods_db6];
  D82():
    deopt 284 [replace_funs];
  D86():
    deopt 296 [replace_funs2];
  L65():
    r17 = `!`(r16);
    c2 = `as.logical`(r17);
    if c2 then L66() else L6();
  L101():
    p17 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r58 = dyn dir_exists2(p17);
    check L102() else D33();
  L154():
    ns_S3_methods_db3 = force? ns_S3_methods_db2;
    checkMissing(ns_S3_methods_db3);
    c22 = `is.object`(ns_S3_methods_db3);
    if c22 then L155() else L156();
  L159():
    ns_S3_methods_db7 = force? ns_S3_methods_db6;
    checkMissing(ns_S3_methods_db7);
    c23 = `is.object`(ns_S3_methods_db7);
    if c23 then L160() else L161();
  L189():
    replace_funs1 = force? replace_funs;
    checkMissing(replace_funs1);
    grep = ldf grep;
    check L190() else D83();
  L193():
    replace_funs3 = force? replace_funs2;
    checkMissing(replace_funs3);
    c29 = `is.object`(replace_funs3);
    if c29 then L194() else L195(replace_funs3);
  D33():
    deopt 113 [r58];
  D83():
    deopt 287 [];
  L6():
    goto L7();
  L7():
    basename = ldf basename;
    check L70() else D12();
  L30(dx1):
    as_character = ldf `as.character` in base;
    r121 = dyn as_character(dx1);
    check L158() else D69();
  L31(dx3):
    st ns_S3_methods = dx3;
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L163() else L164();
  L40(dx9):
    st replace_funs = dx9;
    r158 = clos inner1384373858;
    st `.check_last_formal_arg` = r158;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L201() else L202();
  L66():
    stop1 = ldf stop;
    check L67() else D10();
  L102():
    r59 = `!`(r58);
    c7 = `as.logical`(r59);
    if c7 then L103() else L18();
  L155():
    dr = tryDispatchBuiltin.1("[", ns_S3_methods_db3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L157() else L156();
  L156():
    __ = ldf `[` in base;
    r120 = dyn __(ns_S3_methods_db3, <missing>, 1);
    goto L30(r120);
  L160():
    dr2 = tryDispatchBuiltin.1("[", ns_S3_methods_db7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L162() else L161();
  L161():
    __1 = ldf `[` in base;
    r122 = dyn __1(ns_S3_methods_db7, <missing>, 3);
    goto L31(r122);
  L190():
    p46 = prom<V +>{
      objects_in_code2 = ld objects_in_code;
      objects_in_code3 = force? objects_in_code2;
      checkMissing(objects_in_code3);
      return objects_in_code3;
    };
    r149 = dyn grep[, , value]("<-", p46, TRUE);
    check L191() else D84();
  L194():
    dr8 = tryDispatchBuiltin.1("[", replace_funs3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L196() else L195(dr8);
  L195(replace_funs5):
    startsWith = ldf startsWith;
    check L197() else D87();
  D10():
    deopt 39 [];
  D12():
    deopt 47 [];
  D69():
    deopt 227 [r121];
  D84():
    deopt 292 [r149];
  D87():
    deopt 299 [replace_funs5];
  L18():
    goto L19();
  L19():
    basename1 = ldf basename;
    check L107() else D36();
  L32(r124):
    r125 = `!`(r124);
    c25 = `as.logical`(r125);
    if c25 then L166() else L33();
  L41(r160):
    c30 = `as.logical`(r160);
    if c30 then L205() else L42();
  L67():
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
    check L68() else D11();
  L70():
    p6 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r24 = dyn basename(p6);
    check L71() else D13();
  L103():
    stop4 = ldf stop;
    check L104() else D34();
  L157():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L158():
    goto L29(r121);
  L162():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L163():
    ns_S3_methods = ld ns_S3_methods;
    check L165() else D71();
  L164():
    r123 = dyn base7(<sym ns_S3_methods>);
    goto L32(r123);
  L191():
    c28 = ldf c in base;
    r150 = dyn c28(replace_funs1, r149);
    check L192() else D85();
  L196():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L40(dx8);
  L197():
    p47 = prom<V +>{
      replace_funs6 = ld replace_funs;
      replace_funs7 = force? replace_funs6;
      checkMissing(replace_funs7);
      return replace_funs7;
    };
    r152 = dyn startsWith(p47, "%");
    check L198() else D88();
  L201():
    replace_funs10 = ld replace_funs;
    check L203() else D91();
  L202():
    r159 = dyn base10(<sym replace_funs>);
    goto L41(r159);
  D11():
    deopt 43 [r21];
  D13():
    deopt 49 [r24];
  D34():
    deopt 116 [];
  D36():
    deopt 124 [];
  D71():
    deopt 237 [ns_S3_methods];
  D85():
    deopt 294 [r150];
  D88():
    deopt 302 [replace_funs5, r152];
  D91():
    deopt 316 [replace_funs10];
  L33():
    goto L36();
  L36():
    ns_S3_methods6 = ld ns_S3_methods;
    check L178() else D77();
  L42():
    character2 = ldf character;
    check L209() else D95();
  L43(r166):
    st bad_replace_funs = r166;
    sym11 = ldf `.isMethodsDispatchOn`;
    base11 = ldf `.isMethodsDispatchOn` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L211() else L212();
  L68():
    goto L7();
  L71():
    r25 = `==`(r24, "base");
    st is_base = r25;
    is_base = ld is_base;
    check L72() else D14();
  L104():
    p19 = prom<V +>{
      gettextf2 = ldf gettextf;
      p18 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r61 = dyn gettextf2("directory '%s' does not contain R code", p18);
      return r61;
    };
    r63 = dyn stop4[, domain](p19, NA_LGL);
    check L105() else D35();
  L107():
    p20 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r66 = dyn basename1(p20);
    check L108() else D37();
  L165():
    ns_S3_methods1 = force? ns_S3_methods;
    checkMissing(ns_S3_methods1);
    c24 = `is.character`(ns_S3_methods1);
    goto L32(c24);
  L166():
    vapply = ldf vapply;
    check L167() else D72();
  L192():
    goto L39(r150);
  L198():
    endsWith1 = ldf endsWith;
    check L199() else D89();
  L203():
    replace_funs11 = force? replace_funs10;
    checkMissing(replace_funs11);
    length1 = ldf length in base;
    r161 = dyn length1(replace_funs11);
    check L204() else D92();
  L205():
    Filter = ldf Filter;
    check L206() else D93();
  D14():
    deopt 53 [is_base];
  D35():
    deopt 120 [r63];
  D37():
    deopt 126 [r66];
  D72():
    deopt 242 [];
  D77():
    deopt 265 [ns_S3_methods6];
  D89():
    deopt 303 [replace_funs5, r152];
  D92():
    deopt 319 [r161];
  D93():
    deopt 321 [];
  D95():
    deopt 326 [];
  L44(r169):
    c31 = `as.logical`(r169);
    if c31 then L214() else L45();
  L72():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    r26 = `!`(is_base1);
    c3 = `as.logical`(r26);
    if c3 then L73() else L8();
  L105():
    goto L19();
  L108():
    r67 = `==`(r66, "base");
    st is_base = r67;
    new_env = ldf `new.env`;
    check L109() else D38();
  L167():
    p41 = prom<V +>{
      ns_S3_methods2 = ld ns_S3_methods;
      ns_S3_methods3 = force? ns_S3_methods2;
      checkMissing(ns_S3_methods3);
      return ns_S3_methods3;
    };
    p42 = prom<V +>{
      is_character = ld `is.character`;
      is_character1 = force? is_character;
      checkMissing(is_character1);
      return is_character1;
    };
    r128 = dyn vapply(p41, p42, NA_LGL);
    check L168() else D73();
  L178():
    ns_S3_methods7 = force? ns_S3_methods6;
    checkMissing(ns_S3_methods7);
    c27 = `is.object`(ns_S3_methods7);
    if c27 then L179() else L180(ns_S3_methods7);
  L199():
    p48 = prom<V +>{
      replace_funs8 = ld replace_funs;
      replace_funs9 = force? replace_funs8;
      checkMissing(replace_funs9);
      return replace_funs9;
    };
    r154 = dyn endsWith1(p48, "%");
    check L200() else D90();
  L204():
    goto L41(r161);
  L206():
    p49 = prom<V +>{
      r162 = clos inner1384373858;
      return r162;
    };
    p50 = prom<V +>{
      replace_funs12 = ld replace_funs;
      replace_funs13 = force? replace_funs12;
      checkMissing(replace_funs13);
      return replace_funs13;
    };
    r165 = dyn Filter(p49, p50);
    check L207() else D94();
  L209():
    r167 = dyn character2();
    check L210() else D96();
  L211():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r170 = dyn _isMethodsDispatchOn();
    check L213() else D97();
  L212():
    r168 = dyn base11();
    goto L44(r168);
  D38():
    deopt 131 [];
  D73():
    deopt 246 [r128];
  D90():
    deopt 306 [replace_funs5, r152, r154];
  D94():
    deopt 324 [r165];
  D96():
    deopt 327 [r167];
  D97():
    deopt 332 [r170];
  L8():
    goto L9();
  L9():
    asNamespace = ldf asNamespace;
    check L77() else D17();
  L37(dx7):
    st replace_funs = dx7;
    setdiff = ldf setdiff;
    check L184() else D80();
  L45():
    goto L48();
  L48():
    l3 = ld bad_replace_funs;
    class__ = ldf `class<-`;
    check L232() else D109();
  L73():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L74() else D15();
  L109():
    r68 = dyn new_env[hash](TRUE);
    check L110() else D39();
  L168():
    st ind = r128;
    l = ld ns_S3_methods;
    c26 = `is.object`(l);
    if c26 then L169() else L170("", l);
  L179():
    dr6 = tryDispatchBuiltin.1("[", ns_S3_methods7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L181() else L180(dr6);
  L180(ns_S3_methods9):
    endsWith = ldf endsWith;
    check L182() else D78();
  L200():
    r155 = `&&`(r152, r154);
    r156 = `!`(r155);
    __3 = ldf `[` in base;
    r157 = dyn __3(replace_funs5, r156);
    goto L40(r157);
  L207():
    goto L43(r165);
  L210():
    goto L43(r167);
  L213():
    goto L44(r170);
  L214():
    _get_S4_generics = ldf `.get_S4_generics`;
    check L215() else D98();
  D15():
    deopt 57 [];
  D17():
    deopt 64 [];
  D39():
    deopt 134 [r68];
  D78():
    deopt 268 [ns_S3_methods9];
  D80():
    deopt 275 [];
  D98():
    deopt 334 [];
  D109():
    deopt 371 ["checkReplaceFuns", l3, "checkReplaceFuns"];
  L34(dx5):
    st ns_S3_methods = dx5;
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L173() else L174();
  L74():
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
      r29 = dyn dirname(p8);
      return r29;
    };
    r31 = dyn _load_namespace_quietly(p7, p9);
    check L75() else D16();
  L77():
    p10 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r34 = dyn asNamespace(p10);
    check L78() else D18();
  L110():
    st code_env = r68;
    file_path2 = ldf `file.path`;
    check L111() else D40();
  L169():
    dr4 = tryDispatchBuiltin.0("[<-", l, "");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L171() else L170("", dr4);
  L170(r130, l2):
    ind = ld ind;
    check L172() else D74();
  L181():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L37(dx6);
  L182():
    p43 = prom<V +>{
      ns_S3_generics = ld ns_S3_generics;
      ns_S3_generics1 = force? ns_S3_generics;
      checkMissing(ns_S3_generics1);
      return ns_S3_generics1;
    };
    r140 = dyn endsWith(p43, "<-");
    check L183() else D79();
  L184():
    p44 = prom<V +>{
      objects_in_code = ld objects_in_code;
      objects_in_code1 = force? objects_in_code;
      checkMissing(objects_in_code1);
      return objects_in_code1;
    };
    p45 = prom<V +>{
      ns_S3_methods10 = ld ns_S3_methods;
      ns_S3_methods11 = force? ns_S3_methods10;
      checkMissing(ns_S3_methods11);
      return ns_S3_methods11;
    };
    r144 = dyn setdiff(p44, p45);
    check L185() else D81();
  L215():
    p51 = prom<V +>{
      code_env8 = ld code_env;
      code_env9 = force? code_env8;
      checkMissing(code_env9);
      return code_env9;
    };
    r172 = dyn _get_S4_generics(p51);
    check L216() else D99();
  L232():
    r189 = dyn class__(l3, NULL, "checkReplaceFuns");
    check L233() else D110();
  D16():
    deopt 60 [r31];
  D18():
    deopt 66 [r34];
  D40():
    deopt 137 [];
  D74():
    deopt 251 [r130, l2, "", ind];
  D79():
    deopt 271 [ns_S3_methods9, r140];
  D81():
    deopt 278 [r144];
  D99():
    deopt 336 [r172];
  D110():
    deopt 373 ["checkReplaceFuns", r189];
  L35(r136):
    st ns_S3_methods = r136;
    goto L36();
  L75():
    goto L9();
  L78():
    st code_env = r34;
    is_base2 = ld is_base;
    check L79() else D19();
  L111():
    p21 = prom<V +>{
      dir21 = ld dir;
      dir22 = force? dir21;
      checkMissing(dir22);
      return dir22;
    };
    r70 = dyn file_path2(p21, "DESCRIPTION");
    check L112() else D41();
  L171():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L34(dx4);
  L172():
    ind1 = force? ind;
    checkMissing(ind1);
    r133 = `!`(ind1);
    ___ = ldf `[<-` in base;
    r134 = dyn ___(l2, "", r133);
    goto L34(r134);
  L173():
    ns_S3_methods4 = ld ns_S3_methods;
    check L175() else D75();
  L174():
    r135 = dyn base8(<sym ns_S3_methods>);
    goto L35(r135);
  L183():
    __2 = ldf `[` in base;
    r141 = dyn __2(ns_S3_methods9, r140);
    goto L37(r141);
  L185():
    st objects_in_code = r144;
    goto L38();
  L216():
    st S4_generics = r172;
    S4_generics = ld S4_generics;
    check L217() else D100();
  L233():
    st bad_replace_funs = r189;
    bad_replace_funs2 = ld bad_replace_funs;
    check L234() else D111();
  D19():
    deopt 68 [is_base2];
  D41():
    deopt 140 [r70];
  D75():
    deopt 258 [ns_S3_methods4];
  D100():
    deopt 338 [S4_generics];
  D111():
    deopt 375 [bad_replace_funs2];
  L79():
    is_base3 = force? is_base2;
    checkMissing(is_base3);
    r35 = `!`(is_base3);
    c4 = `as.logical`(r35);
    if c4 then L80() else L10();
  L112():
    st dfile = r70;
    file_test = ldf file_test;
    check L113() else D42();
  L175():
    ns_S3_methods5 = force? ns_S3_methods4;
    checkMissing(ns_S3_methods5);
    as_character1 = ldf `as.character` in base;
    r137 = dyn as_character1(ns_S3_methods5);
    check L176() else D76();
  L217():
    S4_generics1 = force? S4_generics;
    checkMissing(S4_generics1);
    c32 = `is.object`(S4_generics1);
    if c32 then L218() else L219(S4_generics1);
  L234():
    bad_replace_funs3 = force? bad_replace_funs2;
    checkMissing(bad_replace_funs3);
    popenv;
    return bad_replace_funs3;
  D42():
    deopt 143 [];
  D76():
    deopt 261 [r137];
  L10():
    goto L11(NULL);
  L11(r38):
    goto L12();
  L46(dx11):
    st S4_generics = dx11;
    lapply = ldf lapply;
    check L223() else D103();
  L80():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L81() else D20();
  L113():
    p22 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r72 = dyn file_test("-f", p22);
    check L114() else D43();
  L176():
    goto L35(r137);
  L218():
    dr10 = tryDispatchBuiltin.1("[", S4_generics1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L220() else L219(dr10);
  L219(S4_generics3):
    endsWith2 = ldf endsWith;
    check L221() else D101();
  D20():
    deopt 72 [];
  D43():
    deopt 146 [r72];
  D101():
    deopt 341 [S4_generics3];
  D103():
    deopt 348 [];
  L81():
    p11 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r37 = dyn _getNamespaceInfo(p11, "S3methods");
    check L82() else D21();
  L114():
    c8 = `as.logical`(r72);
    if c8 then L115() else L20();
  L220():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L46(dx10);
  L221():
    p52 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r174):
      return r174;
    L1():
      S4_generics4 = ld S4_generics;
      S4_generics5 = force? S4_generics4;
      checkMissing(S4_generics5);
      names1 = ldf names in base;
      r175 = dyn names1(S4_generics5);
      goto L0(r175);
    L2():
      r173 = dyn base12(<sym S4_generics>);
      goto L0(r173);
    };
    r177 = dyn endsWith2(p52, "<-");
    check L222() else D102();
  L223():
    p53 = prom<V +>{
      S4_generics6 = ld S4_generics;
      S4_generics7 = force? S4_generics6;
      checkMissing(S4_generics7);
      return S4_generics7;
    };
    p54 = prom<V +>{
      r180 = clos inner1384373858;
      return r180;
    };
    r182 = dyn lapply(p53, p54);
    check L224() else D104();
  D21():
    deopt 75 [r37];
  D102():
    deopt 344 [S4_generics3, r177];
  D104():
    deopt 351 [r182];
  L20():
    character = ldf character;
    check L119() else D46();
  L21(r75):
    st meta = r75;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L121() else D48();
  L82():
    st ns_S3_methods_db = r37;
    goto L11(r37);
  L115():
    _read_description = ldf `.read_description`;
    check L116() else D44();
  L222():
    __4 = ldf `[` in base;
    r178 = dyn __4(S4_generics3, r177);
    goto L46(r178);
  L224():
    st bad_S4_replace_methods = r182;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L225() else L226();
  D44():
    deopt 148 [];
  D46():
    deopt 152 [];
  D48():
    deopt 156 [];
  L47(r184):
    st bad_replace_funs = r184;
    goto L48();
  L116():
    p23 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r74 = dyn _read_description(p23);
    check L117() else D45();
  L119():
    r76 = dyn character();
    check L120() else D47();
  L121():
    p24 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    p25 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    p26 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r80 = dyn _source_assignments_in_code_dir(p24, p25, p26);
    check L122() else D49();
  L225():
    bad_replace_funs = ld bad_replace_funs;
    check L227() else D105();
  L226():
    r183 = dyn base13(<sym bad_replace_funs>, <lang unlist(bad_S4_replace_methods, use.names=FALSE)>);
    goto L47(r183);
  D45():
    deopt 150 [r74];
  D47():
    deopt 153 [r76];
  D49():
    deopt 160 [r80];
  D105():
    deopt 355 [bad_replace_funs];
  L117():
    goto L21(r74);
  L120():
    goto L21(r76);
  L122():
    file_path3 = ldf `file.path`;
    check L123() else D50();
  L227():
    bad_replace_funs1 = force? bad_replace_funs;
    checkMissing(bad_replace_funs1);
    unlist = ldf unlist;
    check L228() else D106();
  D50():
    deopt 162 [];
  D106():
    deopt 358 [];
  L123():
    p27 = prom<V +>{
      code_dir6 = ld code_dir;
      code_dir7 = force? code_dir6;
      checkMissing(code_dir7);
      return code_dir7;
    };
    r82 = dyn file_path3(p27, "sysdata.rda");
    check L124() else D51();
  L228():
    p55 = prom<V +>{
      bad_S4_replace_methods = ld bad_S4_replace_methods;
      bad_S4_replace_methods1 = force? bad_S4_replace_methods;
      checkMissing(bad_S4_replace_methods1);
      return bad_S4_replace_methods1;
    };
    r186 = dyn unlist[, `use.names`](p55, FALSE);
    check L229() else D107();
  D51():
    deopt 165 [r82];
  D107():
    deopt 362 [r186];
  L124():
    st sys_data_file = r82;
    file_test1 = ldf file_test;
    check L125() else D52();
  L229():
    c33 = ldf c in base;
    r187 = dyn c33(bad_replace_funs1, r186);
    check L230() else D108();
  D52():
    deopt 168 [];
  D108():
    deopt 364 [r187];
  L125():
    p28 = prom<V +>{
      sys_data_file = ld sys_data_file;
      sys_data_file1 = force? sys_data_file;
      checkMissing(sys_data_file1);
      return sys_data_file1;
    };
    r84 = dyn file_test1("-f", p28);
    check L126() else D53();
  L230():
    goto L47(r187);
  D53():
    deopt 171 [r84];
  L126():
    c9 = `as.logical`(r84);
    if c9 then L127() else L22();
  L22():
    goto L23();
  L23():
    file_exists = ldf `file.exists`;
    check L131() else D56();
  L127():
    load = ldf load;
    check L128() else D54();
  D54():
    deopt 173 [];
  D56():
    deopt 180 [];
  L128():
    p29 = prom<V +>{
      sys_data_file2 = ld sys_data_file;
      sys_data_file3 = force? sys_data_file2;
      checkMissing(sys_data_file3);
      return sys_data_file3;
    };
    p30 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r87 = dyn load(p29, p30);
    check L129() else D55();
  L131():
    p32 = prom<V +>{
      file_path4 = ldf `file.path`;
      p31 = prom<V +>{
        dir23 = ld dir;
        dir24 = force? dir23;
        checkMissing(dir24);
        return dir24;
      };
      r90 = dyn file_path4(p31, "NAMESPACE");
      return r90;
    };
    r92 = dyn file_exists(p32);
    check L132() else D57();
  D55():
    deopt 176 [r87];
  D57():
    deopt 182 [r92];
  L129():
    goto L23();
  L132():
    c10 = `as.logical`(r92);
    if c10 then L133() else L24(c10);
  L24(c12):
    c19 = `as.logical`(c12);
    if c19 then L140() else L26();
  L133():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L134() else L135();
  L25(c15, r94):
    r106 = `!`(r94);
    c16 = `as.logical`(r106);
    c17 = `&&`(c15, c16);
    goto L24(c17);
  L26():
    goto L12();
  L134():
    tryCatch = ldf tryCatch;
    check L136() else D58();
  L135():
    r93 = dyn base3(<lang tryCatch(`<-`(nsInfo, parseNamespaceFile(basename(dir), dirname(dir))), error=identity)>, "error");
    goto L25(c10, r93);
  L140():
    _get_namespace_S3_methods_db = ldf `.get_namespace_S3_methods_db`;
    check L141() else D61();
  D58():
    deopt 186 [c10];
  D61():
    deopt 198 [];
  L136():
    p37 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p34 = prom<V +>{
        basename2 = ldf basename;
        p33 = prom<V +>{
          dir25 = ld dir;
          dir26 = force? dir25;
          checkMissing(dir26);
          return dir26;
        };
        r96 = dyn basename2(p33);
        return r96;
      };
      p36 = prom<V +>{
        dirname1 = ldf dirname;
        p35 = prom<V +>{
          dir27 = ld dir;
          dir28 = force? dir27;
          checkMissing(dir28);
          return dir28;
        };
        r99 = dyn dirname1(p35);
        return r99;
      };
      r101 = dyn parseNamespaceFile(p34, p36);
      st nsInfo = r101;
      invisible.0();
      return r101;
    };
    p38 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r104 = dyn tryCatch[, error](p37, p38);
    check L137() else D59();
  L141():
    p39 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      return nsInfo1;
    };
    r108 = dyn _get_namespace_S3_methods_db(p39);
    check L142() else D62();
  D59():
    deopt 190 [c10, r104];
  D62():
    deopt 200 [r108];
  L137():
    inherits = ldf inherits in base;
    r105 = dyn inherits(r104, "error", FALSE);
    check L138() else D60();
  L142():
    st ns_S3_methods_db = r108;
    goto L12();
  D60():
    deopt 194 [c10, r105];
  L138():
    goto L25(c10, r105);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg formals:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg names:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg arg_names:*, reg arg_names1:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg arg_names2:*, reg arg_names3:V, reg c1:L, reg arg_names5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg arg_names8:V, reg r12:V, reg arg_names9:*, reg arg_names10:V, reg length1:cls, reg r13:V, reg __:cls, reg r14:V, reg identical:cls, reg r15:V |
    mkenv;
    st f = f;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st arg_names = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L6():
    formals = ldf formals;
    check L8() else D0();
  L7():
    r = dyn base(<lang formals(f)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L15() else L2();
  L8():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r3 = dyn formals(p);
    check L9() else D1();
  L11():
    arg_names = ld arg_names;
    check L13() else D3();
  L12():
    r5 = dyn base1(<sym arg_names>);
    goto L1(r5);
  D1():
    deopt 5 [r3];
  D3():
    deopt 11 [arg_names];
  L2():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L9():
    names = ldf names in base;
    r4 = dyn names(r3);
    check L10() else D2();
  L13():
    arg_names1 = force? arg_names;
    checkMissing(arg_names1);
    length = ldf length in base;
    r7 = dyn length(arg_names1);
    check L14() else D4();
  L15():
    popenv;
    return TRUE;
  D2():
    deopt 7 [r4];
  D4():
    deopt 14 [r7];
  L3(r10):
    popenv;
    return r10;
  L10():
    goto L0(r4);
  L14():
    goto L1(r7);
  L17():
    arg_names2 = ld arg_names;
    check L19() else D5();
  L18():
    r9 = dyn base2(<lang `[`(arg_names, length(arg_names))>, "value");
    goto L3(r9);
  D5():
    deopt 20 [arg_names2];
  L19():
    arg_names3 = force? arg_names2;
    checkMissing(arg_names3);
    c1 = `is.object`(arg_names3);
    if c1 then L20() else L21(arg_names3);
  L4(dx1):
    identical = ldf identical in base;
    r15 = dyn identical(dx1, "value", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L27() else D8();
  L20():
    dr = tryDispatchBuiltin.1("[", arg_names3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(arg_names5):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  D8():
    deopt 38 [r15];
  L5(arg_names8, r12):
    __ = ldf `[` in base;
    r14 = dyn __(arg_names8, r12);
    goto L4(r14);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L23():
    arg_names9 = ld arg_names;
    check L25() else D6();
  L24():
    r11 = dyn base3(<sym arg_names>);
    goto L5(arg_names5, r11);
  L27():
    goto L3(r15);
  D6():
    deopt 24 [arg_names5, arg_names9];
  L25():
    arg_names10 = force? arg_names9;
    checkMissing(arg_names10);
    length1 = ldf length in base;
    r13 = dyn length1(arg_names10);
    check L26() else D7();
  D7():
    deopt 27 [arg_names5, r13];
  L26():
    goto L5(arg_names5, r13);
  }
}