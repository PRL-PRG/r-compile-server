fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1138076681;
    st checkDocFiles = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1138076681(package, dir, `lib.loc`, chkInternal) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg chkInternal:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var chkInternal:*, reg chkInternal_isMissing:L, reg chkInternal_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg missing1:cls, reg r16:V, reg c2:L, reg stop1:cls, reg r17:V, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r20:V, reg r21:V, reg c3:L, reg stop2:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg r25:V, reg file_path_as_absolute:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg chkInternal1:*, reg chkInternal2:V, reg c4:V, reg c5:L, reg c6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg c10:L, reg r31:V, reg chkInternal3:*, reg chkInternal4:V, reg c11:L, reg r32:V, reg c12:L, reg c13:V, reg c15:L, reg c16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg c20:L, reg r34:V, reg chkInternal5:*, reg chkInternal6:V, reg length1:cls, reg r35:V, reg r36:V, reg c21:L, reg c22:V, reg c24:L, reg c25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg c29:L, reg r38:V, reg chkInternal7:*, reg chkInternal8:V, reg is_na:cls, reg r39:V, reg c30:L, reg c31:V, reg c33:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg missing2:cls, reg r43:V, reg r44:V, reg c34:L, reg Rd_db:cls, reg package5:*, reg package6:V, reg p6:p(V +), reg dirname:cls, reg dir7:*, reg dir8:V, reg p7:p(V +), reg r47:V, reg p8:p(V +), reg r49:V, reg r50:V, reg Rd_db1:cls, reg dir9:*, reg dir10:V, reg p9:p(V +), reg r52:V, reg lapply:cls, reg db:*, reg db1:V, reg p10:p(V +), reg _Rd_get_metadata:*, reg _Rd_get_metadata1:V, reg p11:p(V +), reg r55:V, reg lapply1:cls, reg db2:*, reg db3:V, reg p12:p(V +), reg _Rd_get_metadata2:*, reg _Rd_get_metadata3:V, reg p13:p(V +), reg r58:V, reg lapply2:cls, reg db4:*, reg db5:V, reg p14:p(V +), reg _Rd_get_section:*, reg _Rd_get_section1:V, reg p15:p(V +), reg r61:V, reg lapply3:cls, reg db_usages:*, reg db_usages1:V, reg p16:p(V +), reg r63:cls, reg p17:p(V +), reg r65:V, reg lapply4:cls, reg db_usages2:*, reg db_usages3:V, reg p18:p(V +), reg _parse_usage_as_much_as_possible:*, reg _parse_usage_as_much_as_possible1:V, reg p19:p(V +), reg r68:V, reg vapply:cls, reg db_usages4:*, reg db_usages5:V, reg p20:p(V +), reg r70:cls, reg p21:p(V +), reg r72:V, reg lapply5:cls, reg db_usages6:*, reg db_usages7:V, reg c35:L, reg db_usages9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r73:V, reg p22:p(V +), reg attr:*, reg attr1:V, reg p23:p(V +), reg r76:V, reg lapply6:cls, reg db6:*, reg db7:V, reg p24:p(V +), reg _Rd_get_argument_names:*, reg _Rd_get_argument_names1:V, reg p25:p(V +), reg r79:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r80:V, reg r81:V, reg list:cls, reg r82:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r83:V, reg r84:V, reg bad_lines:*, reg bad_lines1:V, reg length2:cls, reg r85:V, reg r86:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r87:V, reg r88:V, reg db8:*, reg db9:V, reg names:cls, reg r89:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c36:L, reg x:V, reg db_usages10:*, reg db_usages11:V, reg c37:L, reg i6:I, reg db_usages13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg nm:*, reg nm1:V, reg __1:cls, reg r90:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg i11:I, reg r92:V, reg exprs:*, reg exprs1:V, reg length3:cls, reg r93:V, reg r94:V, reg c38:L, reg _in_:cls, reg db_keywords:*, reg db_keywords1:V, reg c39:L, reg db_keywords3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nm2:*, reg nm3:V, reg __2:cls, reg r96:V, reg p26:p(V +), reg r98:V, reg internal:*, reg internal1:V, reg c40:L, reg i17:I, reg c42:V, reg chkInternal9:*, reg chkInternal10:V, reg r99:V, reg c43:L, reg c44:V, reg c46:L, reg internal2:*, reg internal3:V, reg c47:L, reg i24:I, reg c49:V, reg check_internal_specially:*, reg check_internal_specially1:V, reg c50:L, reg c51:V, reg db_aliases:*, reg db_aliases1:V, reg c53:L, reg i27:I, reg db_aliases3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i29:I, reg dx7:V, reg nm4:*, reg nm5:V, reg __3:cls, reg r101:V, reg db_argument_names:*, reg db_argument_names1:V, reg c54:L, reg i31:I, reg db_argument_names3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i33:I, reg dx9:V, reg nm6:*, reg nm7:V, reg __4:cls, reg r102:V, reg vapply1:cls, reg exprs2:*, reg exprs3:V, reg p27:p(V +), reg r104:cls, reg p28:p(V +), reg r106:V, reg exprs4:*, reg exprs5:V, reg c55:L, reg i35:I, reg exprs7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i37:I, reg dx11:V, reg ind2:*, reg ind3:V, reg __5:cls, reg r107:V, reg vapply2:cls, reg exprs8:*, reg exprs9:V, reg p29:p(V +), reg _is_call_from_replacement_function_usage:*, reg _is_call_from_replacement_function_usage1:V, reg p30:p(V +), reg r110:V, reg exprs10:*, reg exprs11:V, reg c56:L, reg i39:I, reg exprs13:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i41:I, reg dx13:V, reg ind4:*, reg ind5:V, reg __6:cls, reg r111:V, reg exprs14:*, reg exprs15:V, reg c57:L, reg i43:I, reg exprs17:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i45:I, reg dx15:V, reg ind6:*, reg ind7:V, reg r112:V, reg __7:cls, reg r113:V, reg vapply3:cls, reg exprs18:*, reg exprs19:V, reg p31:p(V +), reg r115:cls, reg p32:p(V +), reg r117:V, reg _in_1:cls, reg functions:*, reg functions1:V, reg p33:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r119:V, reg r120:V, reg c58:cls, reg r121:V, reg p34:p(V +), reg r123:V, reg exprs20:*, reg exprs21:V, reg c59:L, reg i47:I, reg exprs23:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i49:I, reg dx17:V, reg ind8:*, reg ind9:V, reg __8:cls, reg r124:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r125:V, reg i52:I, reg r126:V, reg ind10:*, reg ind11:V, reg any:cls, reg r127:V, reg c60:L, reg exprs24:*, reg exprs25:V, reg c61:L, reg i56:I, reg exprs27:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i58:I, reg dx19:V, reg ind12:*, reg ind13:V, reg r128:V, reg __9:cls, reg r129:V, reg functions2:*, reg functions3:V, reg c62:L, reg i60:I, reg functions5:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i62:I, reg dx21:V, reg ind14:*, reg ind15:V, reg r130:V, reg __10:cls, reg r131:V, reg i63:I, reg unlist:cls, reg lapply7:cls, reg exprs28:*, reg exprs29:V, reg p35:p(V +), reg r133:cls, reg p36:p(V +), reg r135:V, reg p37:p(V +), reg r137:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r138:V, reg i66:I, reg r139:V, reg replace_exprs:*, reg replace_exprs1:V, reg length4:cls, reg r140:V, reg c63:L, reg paste0:cls, reg vapply4:cls, reg replace_exprs2:*, reg replace_exprs3:V, reg p38:p(V +), reg r142:cls, reg p39:p(V +), reg r144:V, reg p40:p(V +), reg r146:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r147:V, reg i71:I, reg r148:V, reg functions6:*, reg functions7:V, reg replace_funs:*, reg replace_funs1:V, reg c64:cls, reg r149:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r150:V, reg i74:I, reg r151:V, reg arg_names_in_usage:*, reg arg_names_in_usage1:V, reg unlist1:cls, reg lapply8:cls, reg replace_exprs4:*, reg replace_exprs5:V, reg p41:p(V +), reg r153:cls, reg p42:p(V +), reg r155:V, reg p43:p(V +), reg r157:V, reg c65:cls, reg r158:V, reg i75:I, reg _transform_S3_method_markup:cls, reg functions8:*, reg functions9:V, reg p44:p(V +), reg r161:V, reg _transform_S4_method_markup:cls, reg functions10:*, reg functions11:V, reg p45:p(V +), reg r163:V, reg special:*, reg special1:V, reg c66:L, reg i78:I, reg r164:V, reg setdiff:cls, reg arg_names_in_usage2:*, reg arg_names_in_usage3:V, reg p46:p(V +), reg arg_names_in_arg_list:*, reg arg_names_in_arg_list1:V, reg p47:p(V +), reg r167:V, reg setdiff1:cls, reg arg_names_in_arg_list2:*, reg arg_names_in_arg_list3:V, reg p48:p(V +), reg arg_names_in_usage4:*, reg arg_names_in_usage5:V, reg p49:p(V +), reg r170:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r171:V, reg i81:I, reg r172:V, reg arg_names_in_arg_list_missing_in_usage:*, reg arg_names_in_arg_list_missing_in_usage1:V, reg length5:cls, reg r173:V, reg c67:L, reg db_usage_texts:*, reg db_usage_texts1:V, reg c68:L, reg i85:I, reg db_usage_texts3:V, reg dr22:V, reg dc11:L, reg dx23:V, reg i87:I, reg dx24:V, reg nm8:*, reg nm9:V, reg __11:cls, reg r174:V, reg character:cls, reg r175:V, reg grepl:cls, reg arg_names_in_arg_list_missing_in_usage2:*, reg arg_names_in_arg_list_missing_in_usage3:V, reg p50:p(V +), reg r177:V, reg r178:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r179:V, reg i90:I, reg r180:V, reg bad:*, reg bad1:V, reg any1:cls, reg r181:V, reg c69:L, reg arg_names_in_arg_list_missing_in_usage4:*, reg arg_names_in_arg_list_missing_in_usage5:V, reg c70:L, reg i94:I, reg arg_names_in_arg_list_missing_in_usage7:V, reg dr24:V, reg dc12:L, reg dx25:V, reg i96:I, reg dx26:V, reg bad2:*, reg bad3:V, reg __12:cls, reg r182:V, reg arg_names_in_arg_list_missing_in_usage8:*, reg arg_names_in_arg_list_missing_in_usage9:V, reg c71:L, reg i98:I, reg arg_names_in_arg_list_missing_in_usage11:V, reg dr26:V, reg dc13:L, reg dx27:V, reg i100:I, reg dx28:V, reg bad4:*, reg bad5:V, reg r183:V, reg __13:cls, reg r184:V, reg i101:I, reg vapply5:cls, reg arg_names_in_arg_list_missing_in_usage12:*, reg arg_names_in_arg_list_missing_in_usage13:V, reg p51:p(V +), reg r186:cls, reg p52:p(V +), reg r188:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r189:V, reg i104:I, reg r190:V, reg bad_args:*, reg bad_args1:V, reg arg_names_in_arg_list_missing_in_usage14:*, reg arg_names_in_arg_list_missing_in_usage15:V, reg c72:L, reg i106:I, reg arg_names_in_arg_list_missing_in_usage17:V, reg dr28:V, reg dc14:L, reg dx30:V, reg i108:I, reg dx31:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r191:V, reg i111:I, reg arg_names_in_arg_list_missing_in_usage20:V, reg r192:V, reg bad6:*, reg bad7:V, reg as_logical:cls, reg r193:V, reg __14:cls, reg r194:V, reg c73:cls, reg r195:V, reg i112:I, reg sym21:cls, reg base21:cls, reg guard21:L, reg r197:V, reg i115:I, reg r198:V, reg endsWith:cls, reg aliases:*, reg aliases1:V, reg p53:p(V +), reg r200:V, reg any2:cls, reg r201:V, reg r202:V, reg c74:L, reg sub:cls, reg aliases2:*, reg aliases3:V, reg p54:p(V +), reg r204:V, reg gsub:cls, reg aliases4:*, reg aliases5:V, reg p55:p(V +), reg r206:V, reg setdiff2:cls, reg functions12:*, reg functions13:V, reg p56:p(V +), reg aliases6:*, reg aliases7:V, reg p57:p(V +), reg r209:V, reg i118:I, reg r210:V, reg character1:cls, reg r211:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r212:V, reg i121:I, reg r213:V, reg arg_names_in_usage_missing_in_arg_list:*, reg arg_names_in_usage_missing_in_arg_list1:V, reg length6:cls, reg r214:V, reg c75:L, reg i122:I, reg c76:V, reg anyDuplicated:cls, reg arg_names_in_arg_list4:*, reg arg_names_in_arg_list5:V, reg p58:p(V +), reg r216:V, reg c78:L, reg c79:V, reg c81:L, reg i125:I, reg c82:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r217:V, reg i129:I, reg c86:L, reg r218:V, reg arg_names_in_arg_list_missing_in_usage21:*, reg arg_names_in_arg_list_missing_in_usage22:V, reg length7:cls, reg r219:V, reg c87:L, reg c88:V, reg c90:L, reg i131:I, reg c91:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r220:V, reg i135:I, reg c95:L, reg r221:V, reg functions_not_in_aliases:*, reg functions_not_in_aliases1:V, reg length8:cls, reg r222:V, reg c96:L, reg c97:V, reg c99:L, reg i137:I, reg c100:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r223:V, reg i141:I, reg c104:L, reg r224:V, reg assignments:*, reg assignments1:V, reg length9:cls, reg r225:V, reg c105:L, reg c106:V, reg c108:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r226:V, reg i147:I, reg r227:V, reg arg_names_in_usage_missing_in_arg_list2:*, reg arg_names_in_usage_missing_in_arg_list3:V, reg arg_names_in_arg_list6:*, reg arg_names_in_arg_list7:V, reg c109:L, reg i149:I, reg arg_names_in_arg_list9:V, reg dr30:V, reg dc15:L, reg dx32:V, reg i151:I, reg dx33:V, reg duplicated:cls, reg arg_names_in_arg_list10:*, reg arg_names_in_arg_list11:V, reg p59:p(V +), reg r229:V, reg __15:cls, reg r230:V, reg arg_names_in_arg_list_missing_in_usage23:*, reg arg_names_in_arg_list_missing_in_usage24:V, reg functions_not_in_aliases2:*, reg functions_not_in_aliases3:V, reg assignments2:*, reg assignments3:V, reg list1:cls, reg r231:V, reg l1:*, reg c110:L, reg i153:I, reg r233:V, reg l3:*, reg dr32:V, reg dc16:L, reg dx34:V, reg i155:I, reg dx35:V, reg nm10:*, reg nm11:V, reg ____:cls, reg r236:V, reg special2:*, reg special3:V, reg r237:V, reg c111:L, reg i158:I, reg r238:V, reg i159:I, reg structure:cls, reg bad_doc_objects:*, reg bad_doc_objects1:V, reg p60:p(V +), reg bad_lines2:*, reg bad_lines3:V, reg p61:p(V +), reg all_special:*, reg all_special1:V, reg p62:p(V +), reg r243:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    chkInternal_isMissing = missing.0(chkInternal);
    if chkInternal_isMissing then L1(NULL) else L1(chkInternal);
  L1(chkInternal_orDefault):
    st chkInternal = chkInternal_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L85() else L86();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L87() else L3();
  L85():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L2(r2);
  L86():
    r = dyn base(<sym package>);
    goto L2(r);
  L3():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L99() else L100();
  L7():
    st check_internal_specially = FALSE;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L113() else L114();
  L87():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L88() else L89();
  L4(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L92() else L5();
  L8(r15):
    c2 = `as.logical`(r15);
    if c2 then L101() else L9();
  L12(r29):
    c5 = `as.logical`(r29);
    if c5 then L13(c5) else L116();
  L88():
    package1 = ld package;
    check L90() else D0();
  L89():
    r4 = dyn base1(<sym package>);
    goto L4(r4);
  L99():
    missing1 = ldf missing in base;
    r16 = dyn missing1(<sym dir>);
    goto L8(r16);
  L100():
    r14 = dyn base2(<sym dir>);
    goto L8(r14);
  L113():
    chkInternal1 = ld chkInternal;
    check L115() else D14();
  L114():
    r28 = dyn base3(<sym chkInternal>);
    goto L12(r28);
  D0():
    deopt 6 [package1];
  D14():
    deopt 53 [chkInternal1];
  L5():
    goto L6();
  L6():
    find_package = ldf `find.package`;
    check L96() else D4();
  L9():
    goto L10();
  L10():
    dir_exists = ldf `dir.exists`;
    check L105() else D8();
  L13(c6):
    c15 = `as.logical`(c6);
    if c15 then L15(c15) else L121();
  L90():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L91() else D1();
  L92():
    stop = ldf stop;
    check L93() else D2();
  L101():
    stop1 = ldf stop;
    check L102() else D6();
  L115():
    chkInternal2 = force? chkInternal1;
    checkMissing(chkInternal2);
    c4 = `==`(chkInternal2, NULL);
    goto L12(c4);
  L116():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L117() else L118();
  D1():
    deopt 9 [r6];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  D6():
    deopt 28 [];
  D8():
    deopt 34 [];
  L14(c10, r31):
    r32 = `!`(r31);
    c12 = `as.logical`(r32);
    c13 = `||`(c10, c12);
    goto L13(c13);
  L15(c16):
    c24 = `as.logical`(c16);
    if c24 then L17(c24) else L127();
  L91():
    goto L4(r6);
  L93():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L94() else D3();
  L96():
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
    check L97() else D5();
  L102():
    r17 = dyn stop1("you must specify 'package' or 'dir'");
    check L103() else D7();
  L105():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r20 = dyn dir_exists(p2);
    check L106() else D9();
  L117():
    chkInternal3 = ld chkInternal;
    check L119() else D15();
  L118():
    r30 = dyn base4(<sym chkInternal>);
    goto L14(c5, r30);
  L121():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L122() else L123();
  D3():
    deopt 15 [r8];
  D5():
    deopt 22 [r12];
  D7():
    deopt 30 [r17];
  D9():
    deopt 36 [r20];
  D15():
    deopt 57 [c5, chkInternal3];
  L16(c20, r34):
    r36 = `!=`(r34, 1);
    c21 = `as.logical`(r36);
    c22 = `||`(c20, c21);
    goto L15(c22);
  L17(c25):
    c33 = `as.logical`(c25);
    if c33 then L133() else L19();
  L94():
    goto L6();
  L97():
    st dir = r12;
    goto L7();
  L103():
    goto L10();
  L106():
    r21 = `!`(r20);
    c3 = `as.logical`(r21);
    if c3 then L107() else L11();
  L119():
    chkInternal4 = force? chkInternal3;
    checkMissing(chkInternal4);
    c11 = `is.logical`(chkInternal4);
    goto L14(c5, c11);
  L122():
    chkInternal5 = ld chkInternal;
    check L124() else D16();
  L123():
    r33 = dyn base5(<sym chkInternal>);
    goto L16(c15, r33);
  L127():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L128() else L129();
  D16():
    deopt 64 [c15, chkInternal5];
  L11():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L111() else D12();
  L18(c29, r38):
    c30 = `as.logical`(r38);
    c31 = `||`(c29, c30);
    goto L17(c31);
  L19():
    goto L20();
  L20():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L135() else L136();
  L107():
    stop2 = ldf stop;
    check L108() else D10();
  L124():
    chkInternal6 = force? chkInternal5;
    checkMissing(chkInternal6);
    length1 = ldf length in base;
    r35 = dyn length1(chkInternal6);
    check L125() else D17();
  L128():
    chkInternal7 = ld chkInternal;
    check L130() else D18();
  L129():
    r37 = dyn base6(<sym chkInternal>);
    goto L18(c24, r37);
  L133():
    st check_internal_specially = TRUE;
    st chkInternal = TRUE;
    goto L20();
  D10():
    deopt 39 [];
  D12():
    deopt 45 [];
  D17():
    deopt 67 [c15, r35];
  D18():
    deopt 73 [c24, chkInternal7];
  L21(r42):
    r44 = `!`(r42);
    c34 = `as.logical`(r44);
    if c34 then L137() else L22();
  L108():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r23 = dyn gettextf("directory '%s' does not exist", p3);
      return r23;
    };
    r25 = dyn stop2[, domain](p4, NA_LGL);
    check L109() else D11();
  L111():
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r27 = dyn file_path_as_absolute(p5);
    check L112() else D13();
  L125():
    goto L16(c15, r35);
  L130():
    chkInternal8 = force? chkInternal7;
    checkMissing(chkInternal8);
    is_na = ldf `is.na` in base;
    r39 = dyn is_na(chkInternal8);
    check L131() else D19();
  L135():
    missing2 = ldf missing in base;
    r43 = dyn missing2(<sym package>);
    goto L21(r43);
  L136():
    r41 = dyn base7(<sym package>);
    goto L21(r41);
  D11():
    deopt 43 [r25];
  D13():
    deopt 47 [r27];
  D19():
    deopt 76 [c24, r39];
  L22():
    Rd_db1 = ldf Rd_db;
    check L141() else D22();
  L23(r50):
    st db = r50;
    lapply = ldf lapply;
    check L143() else D24();
  L109():
    goto L7();
  L112():
    st dir = r27;
    goto L7();
  L131():
    goto L18(c24, r39);
  L137():
    Rd_db = ldf Rd_db;
    check L138() else D20();
  D20():
    deopt 89 [];
  D22():
    deopt 95 [];
  D24():
    deopt 101 [];
  L138():
    p6 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p8 = prom<V +>{
      dirname = ldf dirname;
      p7 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r47 = dyn dirname(p7);
      return r47;
    };
    r49 = dyn Rd_db[, `lib.loc`](p6, p8);
    check L139() else D21();
  L141():
    p9 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r52 = dyn Rd_db1[dir](p9);
    check L142() else D23();
  L143():
    p10 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p11 = prom<V +>{
      _Rd_get_metadata = ld `.Rd_get_metadata`;
      _Rd_get_metadata1 = force? _Rd_get_metadata;
      checkMissing(_Rd_get_metadata1);
      return _Rd_get_metadata1;
    };
    r55 = dyn lapply(p10, p11, "alias");
    check L144() else D25();
  D21():
    deopt 93 [r49];
  D23():
    deopt 98 [r52];
  D25():
    deopt 105 [r55];
  L139():
    goto L23(r49);
  L142():
    goto L23(r52);
  L144():
    st db_aliases = r55;
    lapply1 = ldf lapply;
    check L145() else D26();
  D26():
    deopt 108 [];
  L145():
    p12 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    p13 = prom<V +>{
      _Rd_get_metadata2 = ld `.Rd_get_metadata`;
      _Rd_get_metadata3 = force? _Rd_get_metadata2;
      checkMissing(_Rd_get_metadata3);
      return _Rd_get_metadata3;
    };
    r58 = dyn lapply1(p12, p13, "keyword");
    check L146() else D27();
  D27():
    deopt 112 [r58];
  L146():
    st db_keywords = r58;
    lapply2 = ldf lapply;
    check L147() else D28();
  D28():
    deopt 115 [];
  L147():
    p14 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    p15 = prom<V +>{
      _Rd_get_section = ld `.Rd_get_section`;
      _Rd_get_section1 = force? _Rd_get_section;
      checkMissing(_Rd_get_section1);
      return _Rd_get_section1;
    };
    r61 = dyn lapply2(p14, p15, "usage");
    check L148() else D29();
  D29():
    deopt 119 [r61];
  L148():
    st db_usages = r61;
    lapply3 = ldf lapply;
    check L149() else D30();
  D30():
    deopt 122 [];
  L149():
    p16 = prom<V +>{
      db_usages = ld db_usages;
      db_usages1 = force? db_usages;
      checkMissing(db_usages1);
      return db_usages1;
    };
    p17 = prom<V +>{
      r63 = clos inner3708401697;
      return r63;
    };
    r65 = dyn lapply3(p16, p17);
    check L150() else D31();
  D31():
    deopt 125 [r65];
  L150():
    st db_usage_texts = r65;
    lapply4 = ldf lapply;
    check L151() else D32();
  D32():
    deopt 128 [];
  L151():
    p18 = prom<V +>{
      db_usages2 = ld db_usages;
      db_usages3 = force? db_usages2;
      checkMissing(db_usages3);
      return db_usages3;
    };
    p19 = prom<V +>{
      _parse_usage_as_much_as_possible = ld `.parse_usage_as_much_as_possible`;
      _parse_usage_as_much_as_possible1 = force? _parse_usage_as_much_as_possible;
      checkMissing(_parse_usage_as_much_as_possible1);
      return _parse_usage_as_much_as_possible1;
    };
    r68 = dyn lapply4(p18, p19);
    check L152() else D33();
  D33():
    deopt 131 [r68];
  L152():
    st db_usages = r68;
    vapply = ldf vapply;
    check L153() else D34();
  D34():
    deopt 134 [];
  L153():
    p20 = prom<V +>{
      db_usages4 = ld db_usages;
      db_usages5 = force? db_usages4;
      checkMissing(db_usages5);
      return db_usages5;
    };
    p21 = prom<V +>{
      r70 = clos inner2501545716;
      return r70;
    };
    r72 = dyn vapply(p20, p21, NA_LGL);
    check L154() else D35();
  D35():
    deopt 138 [r72];
  L154():
    st ind = r72;
    lapply5 = ldf lapply;
    check L155() else D36();
  D36():
    deopt 141 [];
  L155():
    p22 = prom<V +>{
      db_usages6 = ld db_usages;
      db_usages7 = force? db_usages6;
      checkMissing(db_usages7);
      c35 = `is.object`(db_usages7);
      if c35 then L1() else L2(db_usages7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", db_usages7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db_usages9):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r73 = dyn __(db_usages9, ind1);
      goto L0(r73);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p23 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r76 = dyn lapply5(p22, p23, "bad_lines");
    check L156() else D37();
  D37():
    deopt 145 [r76];
  L156():
    st bad_lines = r76;
    lapply6 = ldf lapply;
    check L157() else D38();
  D38():
    deopt 148 [];
  L157():
    p24 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    p25 = prom<V +>{
      _Rd_get_argument_names = ld `.Rd_get_argument_names`;
      _Rd_get_argument_names1 = force? _Rd_get_argument_names;
      checkMissing(_Rd_get_argument_names1);
      return _Rd_get_argument_names1;
    };
    r79 = dyn lapply6(p24, p25);
    check L158() else D39();
  D39():
    deopt 151 [r79];
  L158():
    st db_argument_names = r79;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L159() else L160();
  L24(r81):
    st bad_doc_objects = r81;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L162() else L163();
  L159():
    list = ldf list in base;
    r82 = dyn list();
    check L161() else D40();
  L160():
    r80 = dyn base8();
    goto L24(r80);
  D40():
    deopt 156 [r82];
  L25(r84):
    r86 = `==`(r84, 0);
    st all_special = r86;
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L166() else L167();
  L161():
    goto L24(r82);
  L162():
    bad_lines = ld bad_lines;
    check L164() else D41();
  L163():
    r83 = dyn base9(<sym bad_lines>);
    goto L25(r83);
  D41():
    deopt 160 [bad_lines];
  L26(r88):
    s = toForSeq(r88);
    l = length(s);
    i = 0;
    goto L27(i);
  L164():
    bad_lines1 = force? bad_lines;
    checkMissing(bad_lines1);
    length2 = ldf length in base;
    r85 = dyn length2(bad_lines1);
    check L165() else D42();
  L166():
    db8 = ld db;
    check L168() else D43();
  L167():
    r87 = dyn base10(<sym db>);
    goto L26(r87);
  D42():
    deopt 163 [r85];
  D43():
    deopt 169 [db8];
  L27(i1):
    i2 = `+`.1(i1, 1);
    c36 = `<`.1(l, i2);
    if c36 then L170() else L84();
  L165():
    goto L25(r85);
  L168():
    db9 = force? db8;
    checkMissing(db9);
    names = ldf names in base;
    r89 = dyn names(db9);
    check L169() else D44();
  D44():
    deopt 172 [r89];
  L84():
    x = `[[`(s, i2, NULL, TRUE);
    st nm = x;
    db_usages10 = ld db_usages;
    check L171() else D45();
  L169():
    goto L26(r89);
  L170():
    structure = ldf structure;
    check L390() else D155();
  D45():
    deopt 173 [i2, db_usages10];
  D155():
    deopt 546 [];
  L171():
    db_usages11 = force? db_usages10;
    checkMissing(db_usages11);
    c37 = `is.object`(db_usages11);
    if c37 then L172() else L173(i2, db_usages11);
  L390():
    p60 = prom<V +>{
      bad_doc_objects = ld bad_doc_objects;
      bad_doc_objects1 = force? bad_doc_objects;
      checkMissing(bad_doc_objects1);
      return bad_doc_objects1;
    };
    p61 = prom<V +>{
      bad_lines2 = ld bad_lines;
      bad_lines3 = force? bad_lines2;
      checkMissing(bad_lines3);
      return bad_lines3;
    };
    p62 = prom<V +>{
      all_special = ld all_special;
      all_special1 = force? all_special;
      checkMissing(all_special1);
      return all_special1;
    };
    r243 = dyn structure[, class, bad_lines, all_special](p60, "checkDocFiles", p61, p62);
    check L391() else D156();
  D156():
    deopt 554 [r243];
  L28(i8, dx3):
    st exprs = dx3;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L176() else L177();
  L172():
    dr2 = tryDispatchBuiltin.1("[[", db_usages11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L174() else L173(i2, dr2);
  L173(i6, db_usages13):
    nm = ld nm;
    check L175() else D46();
  L391():
    popenv;
    return r243;
  D46():
    deopt 175 [i6, db_usages13, nm];
  L29(i11, r92):
    r94 = `!`(r92);
    c38 = `as.logical`(r94);
    if c38 then L180() else L30();
  L174():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(i2, dx2);
  L175():
    nm1 = force? nm;
    __1 = ldf `[[` in base;
    r90 = dyn __1(db_usages13, nm1);
    goto L28(i6, r90);
  L176():
    exprs = ld exprs;
    check L178() else D47();
  L177():
    r91 = dyn base11(<sym exprs>);
    goto L29(i8, r91);
  D47():
    deopt 181 [i8, exprs];
  L30():
    _in_ = ldf `%in%`;
    check L183() else D49();
  L178():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    length3 = ldf length in base;
    r93 = dyn length3(exprs1);
    check L179() else D48();
  L180():
    goto L27(i11);
  D48():
    deopt 184 [i8, r93];
  D49():
    deopt 191 [i11];
  L179():
    goto L29(i8, r93);
  L183():
    p26 = prom<V +>{
      db_keywords = ld db_keywords;
      db_keywords1 = force? db_keywords;
      checkMissing(db_keywords1);
      c39 = `is.object`(db_keywords1);
      if c39 then L1() else L2(db_keywords1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", db_keywords1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(db_keywords3):
      nm2 = ld nm;
      nm3 = force? nm2;
      __2 = ldf `[[` in base;
      r96 = dyn __2(db_keywords3, nm3);
      goto L0(r96);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r98 = dyn _in_("internal", p26);
    check L184() else D50();
  D50():
    deopt 194 [i11, r98];
  L184():
    st internal = r98;
    internal = ld internal;
    check L185() else D51();
  D51():
    deopt 196 [i11, internal];
  L185():
    internal1 = force? internal;
    checkMissing(internal1);
    c40 = `as.logical`(internal1);
    if c40 then L186() else L32(i11, c40);
  L32(i17, c42):
    c46 = `as.logical`(c42);
    if c46 then L189() else L33();
  L186():
    chkInternal9 = ld chkInternal;
    check L187() else D52();
  D52():
    deopt 198 [i11, c40, chkInternal9];
  L33():
    internal2 = ld internal;
    check L192() else D53();
  L187():
    chkInternal10 = force? chkInternal9;
    checkMissing(chkInternal10);
    r99 = `!`(chkInternal10);
    c43 = `as.logical`(r99);
    c44 = `&&`(c40, c43);
    goto L32(i11, c44);
  L189():
    goto L27(i17);
  D53():
    deopt 206 [i17, internal2];
  L192():
    internal3 = force? internal2;
    checkMissing(internal3);
    c47 = `as.logical`(internal3);
    if c47 then L193() else L35(i17, c47);
  L35(i24, c49):
    st special = c49;
    db_aliases = ld db_aliases;
    check L196() else D55();
  L193():
    check_internal_specially = ld check_internal_specially;
    check L194() else D54();
  D54():
    deopt 208 [i17, c47, check_internal_specially];
  D55():
    deopt 212 [i24, db_aliases];
  L194():
    check_internal_specially1 = force? check_internal_specially;
    checkMissing(check_internal_specially1);
    c50 = `as.logical`(check_internal_specially1);
    c51 = `&&`(c47, c50);
    goto L35(i17, c51);
  L196():
    db_aliases1 = force? db_aliases;
    checkMissing(db_aliases1);
    c53 = `is.object`(db_aliases1);
    if c53 then L197() else L198(i24, db_aliases1);
  L36(i29, dx7):
    st aliases = dx7;
    db_argument_names = ld db_argument_names;
    check L201() else D57();
  L197():
    dr6 = tryDispatchBuiltin.1("[[", db_aliases1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L199() else L198(i24, dr6);
  L198(i27, db_aliases3):
    nm4 = ld nm;
    check L200() else D56();
  D56():
    deopt 214 [i27, db_aliases3, nm4];
  D57():
    deopt 218 [i29, db_argument_names];
  L199():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(i24, dx6);
  L200():
    nm5 = force? nm4;
    __3 = ldf `[[` in base;
    r101 = dyn __3(db_aliases3, nm5);
    goto L36(i27, r101);
  L201():
    db_argument_names1 = force? db_argument_names;
    checkMissing(db_argument_names1);
    c54 = `is.object`(db_argument_names1);
    if c54 then L202() else L203(i29, db_argument_names1);
  L37(i33, dx9):
    st arg_names_in_arg_list = dx9;
    vapply1 = ldf vapply;
    check L206() else D59();
  L202():
    dr8 = tryDispatchBuiltin.1("[[", db_argument_names1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L204() else L203(i29, dr8);
  L203(i31, db_argument_names3):
    nm6 = ld nm;
    check L205() else D58();
  D58():
    deopt 220 [i31, db_argument_names3, nm6];
  D59():
    deopt 225 [i33];
  L204():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L37(i29, dx8);
  L205():
    nm7 = force? nm6;
    __4 = ldf `[[` in base;
    r102 = dyn __4(db_argument_names3, nm7);
    goto L37(i31, r102);
  L206():
    p27 = prom<V +>{
      exprs2 = ld exprs;
      exprs3 = force? exprs2;
      checkMissing(exprs3);
      return exprs3;
    };
    p28 = prom<V +>{
      r104 = clos inner3708401697;
      return r104;
    };
    r106 = dyn vapply1[, , , `USE.NAMES`](p27, p28, NA_LGL, FALSE);
    check L207() else D60();
  D60():
    deopt 231 [i33, r106];
  L207():
    st ind = r106;
    exprs4 = ld exprs;
    check L208() else D61();
  D61():
    deopt 233 [i33, exprs4];
  L208():
    exprs5 = force? exprs4;
    checkMissing(exprs5);
    c55 = `is.object`(exprs5);
    if c55 then L209() else L210(i33, exprs5);
  L38(i37, dx11):
    st exprs = dx11;
    vapply2 = ldf vapply;
    check L213() else D63();
  L209():
    dr10 = tryDispatchBuiltin.1("[", exprs5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L211() else L210(i33, dr10);
  L210(i35, exprs7):
    ind2 = ld ind;
    check L212() else D62();
  D62():
    deopt 235 [i35, exprs7, ind2];
  D63():
    deopt 240 [i37];
  L211():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L38(i33, dx10);
  L212():
    ind3 = force? ind2;
    __5 = ldf `[` in base;
    r107 = dyn __5(exprs7, ind3);
    goto L38(i35, r107);
  L213():
    p29 = prom<V +>{
      exprs8 = ld exprs;
      exprs9 = force? exprs8;
      checkMissing(exprs9);
      return exprs9;
    };
    p30 = prom<V +>{
      _is_call_from_replacement_function_usage = ld `.is_call_from_replacement_function_usage`;
      _is_call_from_replacement_function_usage1 = force? _is_call_from_replacement_function_usage;
      checkMissing(_is_call_from_replacement_function_usage1);
      return _is_call_from_replacement_function_usage1;
    };
    r110 = dyn vapply2[, , , `USE.NAMES`](p29, p30, NA_LGL, FALSE);
    check L214() else D64();
  D64():
    deopt 246 [i37, r110];
  L214():
    st ind = r110;
    exprs10 = ld exprs;
    check L215() else D65();
  D65():
    deopt 248 [i37, exprs10];
  L215():
    exprs11 = force? exprs10;
    checkMissing(exprs11);
    c56 = `is.object`(exprs11);
    if c56 then L216() else L217(i37, exprs11);
  L39(i41, dx13):
    st replace_exprs = dx13;
    exprs14 = ld exprs;
    check L220() else D67();
  L216():
    dr12 = tryDispatchBuiltin.1("[", exprs11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L218() else L217(i37, dr12);
  L217(i39, exprs13):
    ind4 = ld ind;
    check L219() else D66();
  D66():
    deopt 250 [i39, exprs13, ind4];
  D67():
    deopt 254 [i41, exprs14];
  L218():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L39(i37, dx12);
  L219():
    ind5 = force? ind4;
    __6 = ldf `[` in base;
    r111 = dyn __6(exprs13, ind5);
    goto L39(i39, r111);
  L220():
    exprs15 = force? exprs14;
    checkMissing(exprs15);
    c57 = `is.object`(exprs15);
    if c57 then L221() else L222(i41, exprs15);
  L40(i45, dx15):
    st exprs = dx15;
    vapply3 = ldf vapply;
    check L225() else D69();
  L221():
    dr14 = tryDispatchBuiltin.1("[", exprs15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L223() else L222(i41, dr14);
  L222(i43, exprs17):
    ind6 = ld ind;
    check L224() else D68();
  D68():
    deopt 256 [i43, exprs17, ind6];
  D69():
    deopt 262 [i45];
  L223():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L40(i41, dx14);
  L224():
    ind7 = force? ind6;
    checkMissing(ind7);
    r112 = `!`(ind7);
    __7 = ldf `[` in base;
    r113 = dyn __7(exprs17, r112);
    goto L40(i43, r113);
  L225():
    p31 = prom<V +>{
      exprs18 = ld exprs;
      exprs19 = force? exprs18;
      checkMissing(exprs19);
      return exprs19;
    };
    p32 = prom<V +>{
      r115 = clos inner3708401697;
      return r115;
    };
    r117 = dyn vapply3(p31, p32, "");
    check L226() else D70();
  D70():
    deopt 266 [i45, r117];
  L226():
    st functions = r117;
    _in_1 = ldf `%in%`;
    check L227() else D71();
  D71():
    deopt 269 [i45];
  L227():
    p33 = prom<V +>{
      functions = ld functions;
      functions1 = force? functions;
      checkMissing(functions1);
      return functions1;
    };
    p34 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      c58 = ldf c in base;
      r121 = dyn c58("<-", "=");
      goto L0(r121);
    L2():
      r119 = dyn base12("<-", "=");
      goto L0(r119);
    };
    r123 = dyn _in_1(p33, p34);
    check L228() else D72();
  D72():
    deopt 272 [i45, r123];
  L228():
    st ind = r123;
    exprs20 = ld exprs;
    check L229() else D73();
  D73():
    deopt 274 [i45, exprs20];
  L229():
    exprs21 = force? exprs20;
    checkMissing(exprs21);
    c59 = `is.object`(exprs21);
    if c59 then L230() else L231(i45, exprs21);
  L41(i49, dx17):
    st assignments = dx17;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L234() else L235();
  L230():
    dr16 = tryDispatchBuiltin.1("[", exprs21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L232() else L231(i45, dr16);
  L231(i47, exprs23):
    ind8 = ld ind;
    check L233() else D74();
  D74():
    deopt 276 [i47, exprs23, ind8];
  L42(i52, r126):
    c60 = `as.logical`(r126);
    if c60 then L238() else L43();
  L232():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L41(i45, dx16);
  L233():
    ind9 = force? ind8;
    __8 = ldf `[` in base;
    r124 = dyn __8(exprs23, ind9);
    goto L41(i47, r124);
  L234():
    ind10 = ld ind;
    check L236() else D75();
  L235():
    r125 = dyn base13(<sym ind>);
    goto L42(i49, r125);
  D75():
    deopt 282 [i49, ind10];
  L43():
    goto L46(i52);
  L46(i63):
    unlist = ldf unlist;
    check L250() else D81();
  L236():
    ind11 = force? ind10;
    checkMissing(ind11);
    any = ldf any in base;
    r127 = dyn any(ind11);
    check L237() else D76();
  L238():
    exprs24 = ld exprs;
    check L239() else D77();
  D76():
    deopt 285 [i49, r127];
  D77():
    deopt 286 [i52, exprs24];
  D81():
    deopt 303 [i63];
  L237():
    goto L42(i49, r127);
  L239():
    exprs25 = force? exprs24;
    checkMissing(exprs25);
    c61 = `is.object`(exprs25);
    if c61 then L240() else L241(i52, exprs25);
  L250():
    p37 = prom<V +>{
      lapply7 = ldf lapply;
      p35 = prom<V +>{
        exprs28 = ld exprs;
        exprs29 = force? exprs28;
        checkMissing(exprs29);
        return exprs29;
      };
      p36 = prom<V +>{
        r133 = clos inner3708401697;
        return r133;
      };
      r135 = dyn lapply7(p35, p36);
      return r135;
    };
    r137 = dyn unlist(p37);
    check L251() else D82();
  D82():
    deopt 305 [i63, r137];
  L44(i58, dx19):
    st exprs = dx19;
    functions2 = ld functions;
    check L244() else D79();
  L240():
    dr18 = tryDispatchBuiltin.1("[", exprs25);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L242() else L241(i52, dr18);
  L241(i56, exprs27):
    ind12 = ld ind;
    check L243() else D78();
  L251():
    st arg_names_in_usage = r137;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L252() else L253();
  D78():
    deopt 288 [i56, exprs27, ind12];
  D79():
    deopt 293 [i58, functions2];
  L47(i66, r139):
    c63 = `as.logical`(r139);
    if c63 then L256() else L48();
  L242():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L44(i52, dx18);
  L243():
    ind13 = force? ind12;
    checkMissing(ind13);
    r128 = `!`(ind13);
    __9 = ldf `[` in base;
    r129 = dyn __9(exprs27, r128);
    goto L44(i56, r129);
  L244():
    functions3 = force? functions2;
    checkMissing(functions3);
    c62 = `is.object`(functions3);
    if c62 then L245() else L246(i58, functions3);
  L252():
    replace_exprs = ld replace_exprs;
    check L254() else D83();
  L253():
    r138 = dyn base14(<sym replace_exprs>);
    goto L47(i63, r138);
  D83():
    deopt 309 [i63, replace_exprs];
  L45(i62, dx21):
    st functions = dx21;
    goto L46(i62);
  L48():
    goto L51(i66);
  L51(i75):
    _transform_S3_method_markup = ldf `.transform_S3_method_markup`;
    check L271() else D94();
  L245():
    dr20 = tryDispatchBuiltin.1("[", functions3);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L247() else L246(i58, dr20);
  L246(i60, functions5):
    ind14 = ld ind;
    check L248() else D80();
  L254():
    replace_exprs1 = force? replace_exprs;
    checkMissing(replace_exprs1);
    length4 = ldf length in base;
    r140 = dyn length4(replace_exprs1);
    check L255() else D84();
  L256():
    paste0 = ldf paste0;
    check L257() else D85();
  D80():
    deopt 295 [i60, functions5, ind14];
  D84():
    deopt 312 [i63, r140];
  D85():
    deopt 314 [i66];
  D94():
    deopt 342 [i75];
  L247():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L45(i58, dx20);
  L248():
    ind15 = force? ind14;
    checkMissing(ind15);
    r130 = `!`(ind15);
    __10 = ldf `[` in base;
    r131 = dyn __10(functions5, r130);
    goto L45(i60, r131);
  L255():
    goto L47(i63, r140);
  L257():
    p40 = prom<V +>{
      vapply4 = ldf vapply;
      p38 = prom<V +>{
        replace_exprs2 = ld replace_exprs;
        replace_exprs3 = force? replace_exprs2;
        checkMissing(replace_exprs3);
        return replace_exprs3;
      };
      p39 = prom<V +>{
        r142 = clos inner3708401697;
        return r142;
      };
      r144 = dyn vapply4(p38, p39, "");
      return r144;
    };
    r146 = dyn paste0(p40, "<-");
    check L258() else D86();
  L271():
    p44 = prom<V +>{
      functions8 = ld functions;
      functions9 = force? functions8;
      checkMissing(functions9);
      return functions9;
    };
    r161 = dyn _transform_S3_method_markup(p44);
    check L272() else D95();
  D86():
    deopt 317 [i66, r146];
  D95():
    deopt 344 [i75, r161];
  L258():
    st replace_funs = r146;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L259() else L260();
  L272():
    st functions = r161;
    _transform_S4_method_markup = ldf `.transform_S4_method_markup`;
    check L273() else D96();
  D96():
    deopt 347 [i75];
  L49(i71, r148):
    st functions = r148;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L264() else L265();
  L259():
    functions6 = ld functions;
    check L261() else D87();
  L260():
    r147 = dyn base15(<sym functions>, <sym replace_funs>);
    goto L49(i66, r147);
  L273():
    p45 = prom<V +>{
      functions10 = ld functions;
      functions11 = force? functions10;
      checkMissing(functions11);
      return functions11;
    };
    r163 = dyn _transform_S4_method_markup(p45);
    check L274() else D97();
  D87():
    deopt 321 [i66, functions6];
  D97():
    deopt 349 [i75, r163];
  L50(i74, r151):
    st arg_names_in_usage = r151;
    goto L51(i74);
  L261():
    functions7 = force? functions6;
    checkMissing(functions7);
    replace_funs = ld replace_funs;
    check L262() else D88();
  L264():
    arg_names_in_usage = ld arg_names_in_usage;
    check L266() else D90();
  L265():
    r150 = dyn base16(<sym arg_names_in_usage>, <lang unlist(lapply(replace_exprs, function((e=), c(.arg_names_from_call(`[`(`[[`(e, 2), `-`(1))), .arg_names_from_call(`[[`(e, 3))), NULL)))>);
    goto L50(i71, r150);
  L274():
    st functions = r163;
    special = ld special;
    check L275() else D98();
  D88():
    deopt 323 [i66, replace_funs];
  D90():
    deopt 330 [i71, arg_names_in_usage];
  D98():
    deopt 351 [i75, special];
  L262():
    replace_funs1 = force? replace_funs;
    checkMissing(replace_funs1);
    c64 = ldf c in base;
    r149 = dyn c64(functions7, replace_funs1);
    check L263() else D89();
  L266():
    arg_names_in_usage1 = force? arg_names_in_usage;
    checkMissing(arg_names_in_usage1);
    unlist1 = ldf unlist;
    check L267() else D91();
  L275():
    special1 = force? special;
    checkMissing(special1);
    c66 = `as.logical`(special1);
    if c66 then L276() else L52();
  D89():
    deopt 326 [i66, r149];
  D91():
    deopt 333 [i71];
  L52():
    setdiff = ldf setdiff;
    check L278() else D99();
  L53(i78, r164):
    st arg_names_in_usage_missing_in_arg_list = r164;
    setdiff1 = ldf setdiff;
    check L280() else D101();
  L263():
    goto L49(i66, r149);
  L267():
    p43 = prom<V +>{
      lapply8 = ldf lapply;
      p41 = prom<V +>{
        replace_exprs4 = ld replace_exprs;
        replace_exprs5 = force? replace_exprs4;
        checkMissing(replace_exprs5);
        return replace_exprs5;
      };
      p42 = prom<V +>{
        r153 = clos inner3708401697;
        return r153;
      };
      r155 = dyn lapply8(p41, p42);
      return r155;
    };
    r157 = dyn unlist1(p43);
    check L268() else D92();
  L276():
    goto L53(i75, NULL);
  D92():
    deopt 335 [i71, r157];
  D99():
    deopt 356 [i75];
  D101():
    deopt 362 [i78];
  L268():
    c65 = ldf c in base;
    r158 = dyn c65(arg_names_in_usage1, r157);
    check L269() else D93();
  L278():
    p46 = prom<V +>{
      arg_names_in_usage2 = ld arg_names_in_usage;
      arg_names_in_usage3 = force? arg_names_in_usage2;
      checkMissing(arg_names_in_usage3);
      return arg_names_in_usage3;
    };
    p47 = prom<V +>{
      arg_names_in_arg_list = ld arg_names_in_arg_list;
      arg_names_in_arg_list1 = force? arg_names_in_arg_list;
      checkMissing(arg_names_in_arg_list1);
      return arg_names_in_arg_list1;
    };
    r167 = dyn setdiff(p46, p47);
    check L279() else D100();
  L280():
    p48 = prom<V +>{
      arg_names_in_arg_list2 = ld arg_names_in_arg_list;
      arg_names_in_arg_list3 = force? arg_names_in_arg_list2;
      checkMissing(arg_names_in_arg_list3);
      return arg_names_in_arg_list3;
    };
    p49 = prom<V +>{
      arg_names_in_usage4 = ld arg_names_in_usage;
      arg_names_in_usage5 = force? arg_names_in_usage4;
      checkMissing(arg_names_in_usage5);
      return arg_names_in_usage5;
    };
    r170 = dyn setdiff1(p48, p49);
    check L281() else D102();
  D93():
    deopt 337 [i71, r158];
  D100():
    deopt 359 [i75, r167];
  D102():
    deopt 365 [i78, r170];
  L269():
    goto L50(i71, r158);
  L279():
    goto L53(i75, r167);
  L281():
    st arg_names_in_arg_list_missing_in_usage = r170;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L282() else L283();
  L54(i81, r172):
    c67 = `as.logical`(r172);
    if c67 then L286() else L55();
  L282():
    arg_names_in_arg_list_missing_in_usage = ld arg_names_in_arg_list_missing_in_usage;
    check L284() else D103();
  L283():
    r171 = dyn base17(<sym arg_names_in_arg_list_missing_in_usage>);
    goto L54(i78, r171);
  D103():
    deopt 369 [i78, arg_names_in_arg_list_missing_in_usage];
  L55():
    goto L65(i81);
  L65(i112):
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L327() else L328();
  L284():
    arg_names_in_arg_list_missing_in_usage1 = force? arg_names_in_arg_list_missing_in_usage;
    checkMissing(arg_names_in_arg_list_missing_in_usage1);
    length5 = ldf length in base;
    r173 = dyn length5(arg_names_in_arg_list_missing_in_usage1);
    check L285() else D104();
  L286():
    db_usage_texts = ld db_usage_texts;
    check L287() else D105();
  D104():
    deopt 372 [i78, r173];
  D105():
    deopt 373 [i81, db_usage_texts];
  L66(i115, r198):
    r202 = `!`(r198);
    c74 = `as.logical`(r202);
    if c74 then L332() else L67();
  L285():
    goto L54(i78, r173);
  L287():
    db_usage_texts1 = force? db_usage_texts;
    checkMissing(db_usage_texts1);
    c68 = `is.object`(db_usage_texts1);
    if c68 then L288() else L289(i81, db_usage_texts1);
  L327():
    endsWith = ldf endsWith;
    check L329() else D124();
  L328():
    r197 = dyn base21(<lang endsWith(aliases, "-deprecated")>);
    goto L66(i112, r197);
  D124():
    deopt 439 [i112];
  L56(i87, dx24):
    st usage_text = dx24;
    character = ldf character;
    check L292() else D107();
  L67():
    character1 = ldf character;
    check L340() else D133();
  L68(i118, r210):
    st functions_not_in_aliases = r210;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L342() else L343();
  L288():
    dr22 = tryDispatchBuiltin.1("[[", db_usage_texts1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L290() else L289(i81, dr22);
  L289(i85, db_usage_texts3):
    nm8 = ld nm;
    check L291() else D106();
  L329():
    p53 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r200 = dyn endsWith(p53, "-deprecated");
    check L330() else D125();
  L332():
    sub = ldf sub;
    check L333() else D127();
  D106():
    deopt 375 [i85, db_usage_texts3, nm8];
  D107():
    deopt 380 [i87];
  D125():
    deopt 442 [i112, r200];
  D127():
    deopt 447 [i115];
  D133():
    deopt 468 [i115];
  L69(i121, r213):
    c75 = `as.logical`(r213);
    if c75 then L70(i121, c75) else L346();
  L290():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L56(i81, dx23);
  L291():
    nm9 = force? nm8;
    __11 = ldf `[[` in base;
    r174 = dyn __11(db_usage_texts3, nm9);
    goto L56(i85, r174);
  L292():
    r175 = dyn character();
    check L293() else D108();
  L330():
    any2 = ldf any in base;
    r201 = dyn any2(r200);
    check L331() else D126();
  L333():
    p54 = prom<V +>{
      aliases2 = ld aliases;
      aliases3 = force? aliases2;
      checkMissing(aliases3);
      return aliases3;
    };
    r204 = dyn sub("([^,]+),(.+)-method$", "\\\\S4method{\\1}{\\2}", p54);
    check L334() else D128();
  L340():
    r211 = dyn character1();
    check L341() else D134();
  L342():
    arg_names_in_usage_missing_in_arg_list = ld arg_names_in_usage_missing_in_arg_list;
    check L344() else D135();
  L343():
    r212 = dyn base22(<sym arg_names_in_usage_missing_in_arg_list>);
    goto L69(i118, r212);
  D108():
    deopt 381 [i87, r175];
  D126():
    deopt 444 [i112, r201];
  D128():
    deopt 451 [i115, r204];
  D134():
    deopt 469 [i115, r211];
  D135():
    deopt 473 [i118, arg_names_in_usage_missing_in_arg_list];
  L70(i122, c76):
    c81 = `as.logical`(c76);
    if c81 then L71(i122, c81) else L350();
  L293():
    st bad_args = r175;
    grepl = ldf grepl;
    check L294() else D109();
  L331():
    goto L66(i112, r201);
  L334():
    st aliases = r204;
    gsub = ldf gsub;
    check L335() else D129();
  L341():
    goto L68(i115, r211);
  L344():
    arg_names_in_usage_missing_in_arg_list1 = force? arg_names_in_usage_missing_in_arg_list;
    checkMissing(arg_names_in_usage_missing_in_arg_list1);
    length6 = ldf length in base;
    r214 = dyn length6(arg_names_in_usage_missing_in_arg_list1);
    check L345() else D136();
  L346():
    anyDuplicated = ldf anyDuplicated;
    check L347() else D137();
  D109():
    deopt 384 [i87];
  D129():
    deopt 454 [i115];
  D136():
    deopt 476 [i118, r214];
  D137():
    deopt 478 [i121, c75];
  L71(i125, c82):
    c90 = `as.logical`(c82);
    if c90 then L73(i125, c90) else L356();
  L294():
    p50 = prom<V +>{
      arg_names_in_arg_list_missing_in_usage2 = ld arg_names_in_arg_list_missing_in_usage;
      arg_names_in_arg_list_missing_in_usage3 = force? arg_names_in_arg_list_missing_in_usage2;
      checkMissing(arg_names_in_arg_list_missing_in_usage3);
      return arg_names_in_arg_list_missing_in_usage3;
    };
    r177 = dyn grepl("^[[:alnum:]._]+$", p50);
    check L295() else D110();
  L335():
    p55 = prom<V +>{
      aliases4 = ld aliases;
      aliases5 = force? aliases4;
      checkMissing(aliases5);
      return aliases5;
    };
    r206 = dyn gsub[, , , fixed]("\\%", "%", p55, TRUE);
    check L336() else D130();
  L345():
    goto L69(i118, r214);
  L347():
    p58 = prom<V +>{
      arg_names_in_arg_list4 = ld arg_names_in_arg_list;
      arg_names_in_arg_list5 = force? arg_names_in_arg_list4;
      checkMissing(arg_names_in_arg_list5);
      return arg_names_in_arg_list5;
    };
    r216 = dyn anyDuplicated(p58);
    check L348() else D138();
  L350():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L351() else L352();
  D110():
    deopt 387 [i87, r177];
  D130():
    deopt 460 [i115, r206];
  D138():
    deopt 480 [i121, c75, r216];
  L72(i129, c86, r218):
    c87 = `as.logical`(r218);
    c88 = `||`(c86, c87);
    goto L71(i129, c88);
  L73(i131, c91):
    c99 = `as.logical`(c91);
    if c99 then L75(i131, c99) else L362();
  L295():
    r178 = `!`(r177);
    st bad = r178;
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L296() else L297();
  L336():
    st aliases = r206;
    setdiff2 = ldf setdiff;
    check L337() else D131();
  L348():
    c78 = `as.logical`(r216);
    c79 = `||`(c75, c78);
    goto L70(i121, c79);
  L351():
    arg_names_in_arg_list_missing_in_usage21 = ld arg_names_in_arg_list_missing_in_usage;
    check L353() else D139();
  L352():
    r217 = dyn base23(<sym arg_names_in_arg_list_missing_in_usage>);
    goto L72(i122, c81, r217);
  L356():
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L357() else L358();
  D131():
    deopt 463 [i115];
  D139():
    deopt 484 [i122, c81, arg_names_in_arg_list_missing_in_usage21];
  L57(i90, r180):
    c69 = `as.logical`(r180);
    if c69 then L300() else L58();
  L74(i135, c95, r221):
    c96 = `as.logical`(r221);
    c97 = `||`(c95, c96);
    goto L73(i135, c97);
  L75(i137, c100):
    c108 = `as.logical`(c100);
    if c108 then L368() else L77();
  L296():
    bad = ld bad;
    check L298() else D111();
  L297():
    r179 = dyn base18(<sym bad>);
    goto L57(i87, r179);
  L337():
    p56 = prom<V +>{
      functions12 = ld functions;
      functions13 = force? functions12;
      checkMissing(functions13);
      return functions13;
    };
    p57 = prom<V +>{
      aliases6 = ld aliases;
      aliases7 = force? aliases6;
      checkMissing(aliases7);
      return aliases7;
    };
    r209 = dyn setdiff2(p56, p57);
    check L338() else D132();
  L353():
    arg_names_in_arg_list_missing_in_usage22 = force? arg_names_in_arg_list_missing_in_usage21;
    checkMissing(arg_names_in_arg_list_missing_in_usage22);
    length7 = ldf length in base;
    r219 = dyn length7(arg_names_in_arg_list_missing_in_usage22);
    check L354() else D140();
  L357():
    functions_not_in_aliases = ld functions_not_in_aliases;
    check L359() else D141();
  L358():
    r220 = dyn base24(<sym functions_not_in_aliases>);
    goto L74(i125, c90, r220);
  L362():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L363() else L364();
  D111():
    deopt 392 [i87, bad];
  D132():
    deopt 466 [i115, r209];
  D140():
    deopt 487 [i122, c81, r219];
  D141():
    deopt 491 [i125, c90, functions_not_in_aliases];
  L58():
    goto L61(i90);
  L61(i101):
    vapply5 = ldf vapply;
    check L312() else D117();
  L76(i141, c104, r224):
    c105 = `as.logical`(r224);
    c106 = `||`(c104, c105);
    goto L75(i141, c106);
  L77():
    goto L83(i137);
  L83(i159):
    goto L27(i159);
  L298():
    bad1 = force? bad;
    checkMissing(bad1);
    any1 = ldf any in base;
    r181 = dyn any1(bad1);
    check L299() else D112();
  L300():
    arg_names_in_arg_list_missing_in_usage4 = ld arg_names_in_arg_list_missing_in_usage;
    check L301() else D113();
  L338():
    goto L68(i115, r209);
  L354():
    goto L72(i122, c81, r219);
  L359():
    functions_not_in_aliases1 = force? functions_not_in_aliases;
    checkMissing(functions_not_in_aliases1);
    length8 = ldf length in base;
    r222 = dyn length8(functions_not_in_aliases1);
    check L360() else D142();
  L363():
    assignments = ld assignments;
    check L365() else D143();
  L364():
    r223 = dyn base25(<sym assignments>);
    goto L76(i131, c99, r223);
  L368():
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L369() else L370();
  D112():
    deopt 395 [i87, r181];
  D113():
    deopt 396 [i90, arg_names_in_arg_list_missing_in_usage4];
  D117():
    deopt 412 [i101];
  D142():
    deopt 494 [i125, c90, r222];
  D143():
    deopt 498 [i131, c99, assignments];
  L78(i147, r227):
    l1 = ld bad_doc_objects;
    c110 = `is.object`(l1);
    if c110 then L382() else L383(i147, r227, l1);
  L299():
    goto L57(i87, r181);
  L301():
    arg_names_in_arg_list_missing_in_usage5 = force? arg_names_in_arg_list_missing_in_usage4;
    checkMissing(arg_names_in_arg_list_missing_in_usage5);
    c70 = `is.object`(arg_names_in_arg_list_missing_in_usage5);
    if c70 then L302() else L303(i90, arg_names_in_arg_list_missing_in_usage5);
  L312():
    p51 = prom<V +>{
      arg_names_in_arg_list_missing_in_usage12 = ld arg_names_in_arg_list_missing_in_usage;
      arg_names_in_arg_list_missing_in_usage13 = force? arg_names_in_arg_list_missing_in_usage12;
      checkMissing(arg_names_in_arg_list_missing_in_usage13);
      return arg_names_in_arg_list_missing_in_usage13;
    };
    p52 = prom<V +>{
      r186 = clos inner2501545716;
      return r186;
    };
    r188 = dyn vapply5(p51, p52, NA_LGL);
    check L313() else D118();
  L360():
    goto L74(i125, c90, r222);
  L365():
    assignments1 = force? assignments;
    checkMissing(assignments1);
    length9 = ldf length in base;
    r225 = dyn length9(assignments1);
    check L366() else D144();
  L369():
    arg_names_in_usage_missing_in_arg_list2 = ld arg_names_in_usage_missing_in_arg_list;
    check L371() else D145();
  L370():
    r226 = dyn base26[missing, duplicated, overdoc, unaliased, assignments](<sym arg_names_in_usage_missing_in_arg_list>, <lang `[`(arg_names_in_arg_list, duplicated(arg_names_in_arg_list))>, <sym arg_names_in_arg_list_missing_in_usage>, <sym functions_not_in_aliases>, <sym assignments>);
    goto L78(i137, r226);
  D118():
    deopt 416 [i101, r188];
  D144():
    deopt 501 [i131, c99, r225];
  D145():
    deopt 505 [i137, arg_names_in_usage_missing_in_arg_list2];
  L59(i96, dx26):
    st bad_args = dx26;
    arg_names_in_arg_list_missing_in_usage8 = ld arg_names_in_arg_list_missing_in_usage;
    check L306() else D115();
  L80(i155, dx35):
    st bad_doc_objects = dx35;
    special2 = ld special;
    check L386() else D154();
  L302():
    dr24 = tryDispatchBuiltin.1("[", arg_names_in_arg_list_missing_in_usage5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L304() else L303(i90, dr24);
  L303(i94, arg_names_in_arg_list_missing_in_usage7):
    bad2 = ld bad;
    check L305() else D114();
  L313():
    st bad = r188;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L314() else L315();
  L366():
    goto L76(i131, c99, r225);
  L371():
    arg_names_in_usage_missing_in_arg_list3 = force? arg_names_in_usage_missing_in_arg_list2;
    checkMissing(arg_names_in_usage_missing_in_arg_list3);
    arg_names_in_arg_list6 = ld arg_names_in_arg_list;
    check L372() else D146();
  L382():
    dr32 = tryDispatchBuiltin.0("[[<-", l1, r227);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L384() else L383(i147, r227, dr32);
  L383(i153, r233, l3):
    nm10 = ld nm;
    check L385() else D153();
  D114():
    deopt 398 [i94, arg_names_in_arg_list_missing_in_usage7, bad2];
  D115():
    deopt 402 [i96, arg_names_in_arg_list_missing_in_usage8];
  D146():
    deopt 508 [i137, arg_names_in_arg_list6];
  D153():
    deopt 528 [i153, r233, l3, r227, nm10];
  D154():
    deopt 532 [i155, special2];
  L62(i104, r190):
    st arg_names_in_arg_list_missing_in_usage = r190;
    goto L65(i104);
  L304():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L59(i90, dx25);
  L305():
    bad3 = force? bad2;
    __12 = ldf `[` in base;
    r182 = dyn __12(arg_names_in_arg_list_missing_in_usage7, bad3);
    goto L59(i94, r182);
  L306():
    arg_names_in_arg_list_missing_in_usage9 = force? arg_names_in_arg_list_missing_in_usage8;
    checkMissing(arg_names_in_arg_list_missing_in_usage9);
    c71 = `is.object`(arg_names_in_arg_list_missing_in_usage9);
    if c71 then L307() else L308(i96, arg_names_in_arg_list_missing_in_usage9);
  L314():
    bad_args = ld bad_args;
    check L316() else D119();
  L315():
    r189 = dyn base19(<sym bad_args>, <lang `[`(arg_names_in_arg_list_missing_in_usage, as.logical(bad))>);
    goto L62(i101, r189);
  L372():
    arg_names_in_arg_list7 = force? arg_names_in_arg_list6;
    checkMissing(arg_names_in_arg_list7);
    c109 = `is.object`(arg_names_in_arg_list7);
    if c109 then L373() else L374(i137, arg_names_in_arg_list7);
  L384():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L80(i147, dx34);
  L385():
    nm11 = force? nm10;
    ____ = ldf `[[<-` in base;
    r236 = dyn ____(l3, r227, nm11);
    goto L80(i153, r236);
  L386():
    special3 = force? special2;
    checkMissing(special3);
    r237 = `!`(special3);
    c111 = `as.logical`(r237);
    if c111 then L387() else L81();
  D119():
    deopt 420 [i101, bad_args];
  L60(i100, dx28):
    st arg_names_in_arg_list_missing_in_usage = dx28;
    goto L61(i100);
  L79(i151, dx33):
    arg_names_in_arg_list_missing_in_usage23 = ld arg_names_in_arg_list_missing_in_usage;
    check L378() else D149();
  L81():
    goto L82(i155, NULL);
  L82(i158, r238):
    goto L83(i158);
  L307():
    dr26 = tryDispatchBuiltin.1("[", arg_names_in_arg_list_missing_in_usage9);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L309() else L308(i96, dr26);
  L308(i98, arg_names_in_arg_list_missing_in_usage11):
    bad4 = ld bad;
    check L310() else D116();
  L316():
    bad_args1 = force? bad_args;
    checkMissing(bad_args1);
    arg_names_in_arg_list_missing_in_usage14 = ld arg_names_in_arg_list_missing_in_usage;
    check L317() else D120();
  L373():
    dr30 = tryDispatchBuiltin.1("[", arg_names_in_arg_list7);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L375() else L374(i137, dr30);
  L374(i149, arg_names_in_arg_list9):
    duplicated = ldf duplicated;
    check L376() else D147();
  L387():
    st all_special = FALSE;
    goto L82(i155, FALSE);
  D116():
    deopt 404 [i98, arg_names_in_arg_list_missing_in_usage11, bad4];
  D120():
    deopt 422 [i101, arg_names_in_arg_list_missing_in_usage14];
  D147():
    deopt 511 [i149, arg_names_in_arg_list9];
  D149():
    deopt 516 [i151, arg_names_in_arg_list_missing_in_usage23];
  L309():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L60(i96, dx27);
  L310():
    bad5 = force? bad4;
    checkMissing(bad5);
    r183 = `!`(bad5);
    __13 = ldf `[` in base;
    r184 = dyn __13(arg_names_in_arg_list_missing_in_usage11, r183);
    goto L60(i98, r184);
  L317():
    arg_names_in_arg_list_missing_in_usage15 = force? arg_names_in_arg_list_missing_in_usage14;
    checkMissing(arg_names_in_arg_list_missing_in_usage15);
    c72 = `is.object`(arg_names_in_arg_list_missing_in_usage15);
    if c72 then L318() else L319(i101, arg_names_in_arg_list_missing_in_usage15);
  L375():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L79(i137, dx32);
  L376():
    p59 = prom<V +>{
      arg_names_in_arg_list10 = ld arg_names_in_arg_list;
      arg_names_in_arg_list11 = force? arg_names_in_arg_list10;
      checkMissing(arg_names_in_arg_list11);
      return arg_names_in_arg_list11;
    };
    r229 = dyn duplicated(p59);
    check L377() else D148();
  L378():
    arg_names_in_arg_list_missing_in_usage24 = force? arg_names_in_arg_list_missing_in_usage23;
    checkMissing(arg_names_in_arg_list_missing_in_usage24);
    functions_not_in_aliases2 = ld functions_not_in_aliases;
    check L379() else D150();
  D148():
    deopt 513 [i149, arg_names_in_arg_list9, r229];
  D150():
    deopt 519 [i151, functions_not_in_aliases2];
  L63(i108, dx31):
    c73 = ldf c in base;
    r195 = dyn c73(bad_args1, dx31);
    check L325() else D123();
  L318():
    dr28 = tryDispatchBuiltin.1("[", arg_names_in_arg_list_missing_in_usage15);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L320() else L319(i101, dr28);
  L319(i106, arg_names_in_arg_list_missing_in_usage17):
    sym20 = ldf `as.logical`;
    base20 = ldf `as.logical` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L321() else L322();
  L377():
    __15 = ldf `[` in base;
    r230 = dyn __15(arg_names_in_arg_list9, r229);
    goto L79(i149, r230);
  L379():
    functions_not_in_aliases3 = force? functions_not_in_aliases2;
    checkMissing(functions_not_in_aliases3);
    assignments2 = ld assignments;
    check L380() else D151();
  D123():
    deopt 432 [i108, r195];
  D151():
    deopt 522 [i151, assignments2];
  L64(i111, arg_names_in_arg_list_missing_in_usage20, r192):
    __14 = ldf `[` in base;
    r194 = dyn __14(arg_names_in_arg_list_missing_in_usage20, r192);
    goto L63(i111, r194);
  L320():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L63(i101, dx30);
  L321():
    bad6 = ld bad;
    check L323() else D121();
  L322():
    r191 = dyn base20(<sym bad>);
    goto L64(i106, arg_names_in_arg_list_missing_in_usage17, r191);
  L325():
    goto L62(i108, r195);
  L380():
    assignments3 = force? assignments2;
    checkMissing(assignments3);
    list1 = ldf list in base;
    r231 = dyn list1(arg_names_in_usage_missing_in_arg_list3, dx33, arg_names_in_arg_list_missing_in_usage24, functions_not_in_aliases3, assignments3);
    check L381() else D152();
  D121():
    deopt 426 [i106, arg_names_in_arg_list_missing_in_usage17, bad6];
  D152():
    deopt 526 [i151, r231];
  L323():
    bad7 = force? bad6;
    checkMissing(bad7);
    as_logical = ldf `as.logical` in base;
    r193 = dyn as_logical(bad7);
    check L324() else D122();
  L381():
    goto L78(i151, r231);
  D122():
    deopt 429 [i106, arg_names_in_arg_list_missing_in_usage17, r193];
  L324():
    goto L64(i106, arg_names_in_arg_list_missing_in_usage17, r193);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg _Rd_deparse:cls, reg _Rd_drop_comments:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    _Rd_deparse = ldf `.Rd_deparse`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _Rd_drop_comments = ldf `.Rd_drop_comments`;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r1 = dyn _Rd_drop_comments(p);
      return r1;
    };
    r3 = dyn _Rd_deparse(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
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