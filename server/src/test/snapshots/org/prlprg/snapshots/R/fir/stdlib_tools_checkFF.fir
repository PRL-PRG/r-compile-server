fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4087042002;
    st checkFF = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4087042002(package, dir, file, `lib.loc`, registration, check_DUP, verbose) {
  (reg package:*, reg dir:*, reg file:*, reg lib_loc:*, reg registration:*, reg check_DUP:*, reg verbose:*) -+> V { var package:*, var dir:*, var file:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var registration:*, reg registration_isMissing:L, reg registration_orDefault:*, var check_DUP:*, reg check_DUP_isMissing:L, reg check_DUP_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg Sys_getenv:cls, reg r4:V, reg nzchar:cls, reg r5:V, reg r6:V, reg r7:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing:cls, reg r10:V, reg r11:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg package1:*, reg package2:V, reg length:cls, reg r14:V, reg r15:V, reg c1:L, reg stop:cls, reg r16:V, reg find_package:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r20:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r22:V, reg _read_description:cls, reg dfile:*, reg dfile1:V, reg p4:p(V +), reg r24:V, reg basename:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg r26:V, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r28:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p7:p(V +), reg r30:V, reg r31:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r33:V, reg p9:p(V +), reg r35:V, reg basename1:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg r38:V, reg r39:V, reg c3:L, reg _load_namespace_quietly:cls, reg package5:*, reg package6:V, reg p11:p(V +), reg dirname:cls, reg dir11:*, reg dir12:V, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg asNamespace:cls, reg package7:*, reg package8:V, reg p14:p(V +), reg r46:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r47:V, reg r48:V, reg get0:cls, reg code_env:*, reg code_env1:V, reg c4:L, reg code_env3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r49:V, reg p15:p(V +), reg r51:V, reg c5:V, reg r52:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg DLLs:*, reg DLLs1:V, reg length1:cls, reg r55:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg DLLs2:*, reg DLLs3:V, reg length2:cls, reg r59:V, reg c8:L, reg c10:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg c13:L, reg r61:V, reg DLLs4:*, reg DLLs5:V, reg c14:L, reg c16:L, reg DLLs7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c18:L, reg dx3:V, reg __:cls, reg r62:V, reg inherits:cls, reg r63:V, reg c19:L, reg c20:V, reg c22:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg DLLs8:*, reg DLLs9:V, reg c23:L, reg DLLs11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r66:V, reg unclass:cls, reg r67:V, reg c24:L, reg r69:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r70:V, reg registration1:*, reg registration2:V, reg c25:L, reg getDLLRegisteredRoutines:cls, reg DLLs12:*, reg DLLs13:V, reg c26:L, reg DLLs15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r71:V, reg p16:p(V +), reg r73:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg lengths:cls, reg reg:*, reg reg1:V, reg p17:p(V +), reg r77:V, reg sum:cls, reg r78:V, reg r79:V, reg r80:V, reg r81:V, reg r82:V, reg _package_env:cls, reg package9:*, reg package10:V, reg p18:p(V +), reg r85:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r87:V, reg r88:V, reg missing1:cls, reg r89:V, reg r90:V, reg c27:L, reg dir_exists1:cls, reg dir13:*, reg dir14:V, reg p19:p(V +), reg r92:V, reg r93:V, reg c28:L, reg stop2:cls, reg gettextf1:cls, reg dir15:*, reg dir16:V, reg p20:p(V +), reg r95:V, reg p21:p(V +), reg r97:V, reg file_path_as_absolute:cls, reg dir17:*, reg dir18:V, reg p22:p(V +), reg r100:V, reg basename2:cls, reg dir19:*, reg dir20:V, reg p23:p(V +), reg r102:V, reg file_path2:cls, reg dir21:*, reg dir22:V, reg p24:p(V +), reg r104:V, reg file_exists:cls, reg dfile2:*, reg dfile3:V, reg p25:p(V +), reg r106:V, reg c29:L, reg _read_description1:cls, reg dfile4:*, reg dfile5:V, reg p26:p(V +), reg r108:V, reg db:*, reg db1:V, reg c30:L, reg db3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r109:V, reg pkg:*, reg pkg1:V, reg r110:V, reg c31:L, reg file_exists1:cls, reg file_path3:cls, reg dir23:*, reg dir24:V, reg p27:p(V +), reg r113:V, reg p28:p(V +), reg r115:V, reg c32:L, reg c34:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r116:V, reg c37:L, reg r117:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg basename3:cls, reg dir25:*, reg dir26:V, reg p29:p(V +), reg r119:V, reg p30:p(V +), reg dirname1:cls, reg dir27:*, reg dir28:V, reg p31:p(V +), reg r122:V, reg p32:p(V +), reg r124:V, reg p33:p(V +), reg identity:*, reg identity1:V, reg p34:p(V +), reg r127:V, reg inherits1:cls, reg r128:V, reg r129:V, reg c38:L, reg c39:V, reg c41:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r130:V, reg r131:V, reg nm:*, reg nm1:V, reg c42:L, reg nm3:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r132:V, reg length3:cls, reg r133:V, reg r134:V, reg file_path4:cls, reg dir29:*, reg dir30:V, reg p35:p(V +), reg r137:V, reg dir_exists2:cls, reg code_dir2:*, reg code_dir3:V, reg p36:p(V +), reg r139:V, reg r140:V, reg c43:L, reg stop3:cls, reg gettextf2:cls, reg dir31:*, reg dir32:V, reg p37:p(V +), reg r142:V, reg p38:p(V +), reg r144:V, reg tempfile:cls, reg r146:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r147:V, reg on_exit:cls, reg r149:V, reg file_create:cls, reg file1:*, reg file2:V, reg p39:p(V +), reg r151:V, reg r152:V, reg c44:L, reg stop4:cls, reg file3:*, reg file4:V, reg p40:p(V +), reg r154:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r156:V, reg r157:V, reg _file_append_ensuring_LFs:cls, reg file5:*, reg file6:V, reg p41:p(V +), reg list_files_with_type:cls, reg code_dir4:*, reg code_dir5:V, reg p42:p(V +), reg r160:V, reg p43:p(V +), reg r162:V, reg all:cls, reg r163:V, reg r164:V, reg c45:L, reg stop5:cls, reg r165:V, reg r166:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r167:V, reg r168:V, reg missing2:cls, reg r169:V, reg r170:V, reg c46:L, reg stop6:cls, reg r171:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r172:V, reg r173:V, reg missing3:cls, reg r174:V, reg c47:L, reg c49:V, reg file_test:cls, reg file7:*, reg file8:V, reg p44:p(V +), reg r176:V, reg r177:V, reg c50:L, reg c51:V, reg c53:L, reg stop7:cls, reg gettextf3:cls, reg file9:*, reg file10:V, reg p45:p(V +), reg r179:V, reg p46:p(V +), reg r181:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r183:V, reg r184:V, reg list:cls, reg r185:V, reg character:cls, reg r186:V, reg character1:cls, reg r187:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r188:V, reg r189:V, reg list1:cls, reg r190:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r191:V, reg r192:V, reg c54:cls, reg r193:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r194:V, reg r195:V, reg missing4:cls, reg r196:V, reg r197:V, reg c55:L, reg vapply:cls, reg FF_funs:*, reg FF_funs1:V, reg p47:p(V +), reg r199:cls, reg p48:p(V +), reg r201:V, reg FF_funs2:*, reg FF_funs3:V, reg c56:L, reg FF_funs5:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg is_FF_fun_from_base:*, reg is_FF_fun_from_base1:V, reg __4:cls, reg r202:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r203:V, reg r204:V, reg FF_funs6:*, reg FF_funs7:V, reg sprintf:cls, reg FF_fun_names:*, reg FF_fun_names1:V, reg p49:p(V +), reg r206:V, reg c57:cls, reg r207:V, reg r208:cls, reg r209:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r210:V, reg r211:V, reg missing5:cls, reg r212:V, reg r213:V, reg c58:L, reg r214:cls, reg lapply:cls, reg ls:cls, reg code_env4:*, reg code_env5:V, reg p50:p(V +), reg r216:V, reg p51:p(V +), reg r218:cls, reg p52:p(V +), reg r220:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r221:V, reg r222:V, reg _isMethodsDispatchOn:cls, reg r223:V, reg c59:L, reg _get_S4_generics:cls, reg code_env6:*, reg code_env7:V, reg p53:p(V +), reg r225:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c60:L, reg x:V, reg _get_S4_methods_list:cls, reg f:*, reg f1:V, reg p54:p(V +), reg code_env8:*, reg code_env9:V, reg p55:p(V +), reg r228:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r229:V, reg i7:I, reg r230:V, reg exprs:*, reg exprs1:V, reg lapply1:cls, reg mlist:*, reg mlist1:V, reg p56:p(V +), reg body:*, reg body1:V, reg p57:p(V +), reg r233:V, reg c61:cls, reg r234:V, reg _get_ref_classes:cls, reg code_env10:*, reg code_env11:V, reg p58:p(V +), reg r236:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r237:V, reg r238:V, reg refs:*, reg refs1:V, reg length4:cls, reg r239:V, reg c62:L, reg lapply2:cls, reg unlist:cls, reg refs2:*, reg refs3:V, reg p59:p(V +), reg r241:V, reg p60:p(V +), reg checkFFmy:*, reg checkFFmy1:V, reg p61:p(V +), reg r244:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r245:V, reg r246:V, reg exprs2:*, reg exprs3:V, reg exprs4:*, reg exprs5:V, reg c63:cls, reg r247:V, reg r248:V, reg r249:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r251:V, reg r252:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r253:V, reg r254:V, reg c64:L, reg c66:V, reg _notin_:cls, reg Sys_getlocale:cls, reg r255:V, reg p62:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r257:V, reg r258:V, reg c67:cls, reg r259:V, reg p63:p(V +), reg r261:V, reg c68:L, reg c69:V, reg c71:L, reg file11:cls, reg file12:*, reg file13:V, reg p64:p(V +), reg enc2:*, reg enc3:V, reg p65:p(V +), reg r264:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r265:V, reg r266:V, reg on_exit1:cls, reg r267:V, reg file14:*, reg file15:V, reg tryCatch1:cls, reg parse:cls, reg con:*, reg con1:V, reg p66:p(V +), reg p67:p(V +), reg r271:V, reg p68:p(V +), reg r273:cls, reg p69:p(V +), reg r275:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r276:V, reg r277:V, reg exprs6:*, reg exprs7:V, reg r278:I, reg s1:V, reg l1:I, reg i8:I, reg i9:I, reg i10:I, reg c72:L, reg x1:V, reg character2:cls, reg r279:V, reg find_bad_exprs:cls, reg exprs8:*, reg exprs9:V, reg c73:L, reg exprs11:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg i13:*, reg i14:V, reg __5:cls, reg r280:V, reg p70:p(V +), reg r282:V, reg wrong_pkg:*, reg wrong_pkg1:V, reg l2:*, reg attr__:cls, reg r283:V, reg bad_pkg:*, reg bad_pkg1:V, reg l3:*, reg attr__1:cls, reg r284:V, reg empty_exprs:*, reg empty_exprs1:V, reg l4:*, reg attr__2:cls, reg r285:V, reg other_problem:*, reg other_problem1:V, reg l5:*, reg attr__3:cls, reg r286:V, reg other_desc:*, reg other_desc1:V, reg l6:*, reg attr__4:cls, reg r287:V, reg check_DUP1:*, reg check_DUP2:V, reg c74:L, reg dup_false:*, reg dup_false1:V, reg l7:*, reg attr__5:cls, reg r288:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r289:V, reg r290:V, reg bad_pkg2:*, reg bad_pkg3:V, reg length5:cls, reg r291:V, reg c75:L, reg _get_standard_package_names:cls, reg r292:V, reg c76:L, reg r294:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r295:V, reg _w_o_:cls, reg bad_pkg4:*, reg bad_pkg5:V, reg p71:p(V +), reg bases:*, reg bases1:V, reg p72:p(V +), reg r298:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r299:V, reg r300:V, reg bad:*, reg bad1:V, reg length6:cls, reg r301:V, reg c77:L, reg _get_requires_from_package_db:cls, reg db4:*, reg db5:V, reg p73:p(V +), reg r303:V, reg _get_requires_from_package_db1:cls, reg db6:*, reg db7:V, reg p74:p(V +), reg r305:V, reg _get_requires_from_package_db2:cls, reg db8:*, reg db9:V, reg p75:p(V +), reg r307:V, reg _get_requires_from_package_db3:cls, reg db10:*, reg db11:V, reg p76:p(V +), reg r309:V, reg _w_o_1:cls, reg bad2:*, reg bad3:V, reg p77:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r311:V, reg r312:V, reg depends:*, reg depends1:V, reg imports:*, reg imports1:V, reg suggests:*, reg suggests1:V, reg enhances:*, reg enhances1:V, reg c78:cls, reg r313:V, reg p78:p(V +), reg r315:V, reg bad4:*, reg bad5:V, reg l8:*, reg attr__6:cls, reg r316:V, reg bad6:V, reg l9:*, reg class__:cls, reg r317:V, reg verbose1:*, reg verbose2:V, reg c79:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r318:V, reg r319:V, reg bad_exprs:*, reg bad_exprs1:V, reg invisible:cls, reg r320:V, reg bad_exprs2:*, reg bad_exprs3:V |
    mkenv;
    st package = package;
    st dir = dir;
    st file = file;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    registration_isMissing = missing.0(registration);
    if registration_isMissing then L1(FALSE) else L1(registration);
  L1(registration_orDefault):
    st registration = registration_orDefault;
    check_DUP_isMissing = missing.0(check_DUP);
    if check_DUP_isMissing then L2(FALSE) else L2(check_DUP);
  L2(check_DUP_orDefault):
    st check_DUP = check_DUP_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3() else L4(verbose);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L4(p);
  L4(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L100() else L101();
  L5(r3):
    r6 = `!`(r3);
    st allow_suppress = r6;
    r7 = clos inner3708401697;
    st suppressCheck = r7;
    st has_namespace = FALSE;
    st is_installed = FALSE;
    st is_installed_msg = FALSE;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L105() else L106();
  L100():
    Sys_getenv = ldf `Sys.getenv`;
    check L102() else D0();
  L101():
    r2 = dyn base(<lang Sys.getenv("_R_CHECK_FF_AS_CRAN_")>);
    goto L5(r2);
  D0():
    deopt 3 [];
  L6(r9):
    r11 = `!`(r9);
    c = `as.logical`(r11);
    if c then L107() else L7();
  L102():
    r4 = dyn Sys_getenv("_R_CHECK_FF_AS_CRAN_");
    check L103() else D1();
  L105():
    missing = ldf missing in base;
    r10 = dyn missing(<sym package>);
    goto L6(r10);
  L106():
    r8 = dyn base1(<sym package>);
    goto L6(r8);
  D1():
    deopt 5 [r4];
  L7():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L191() else L192();
  L32():
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L272() else L273();
  L103():
    nzchar = ldf nzchar in base;
    r5 = dyn nzchar(r4);
    check L104() else D2();
  L107():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L108() else L109();
  D2():
    deopt 7 [r5];
  L8(r13):
    r15 = `!=`(r13, 1);
    c1 = `as.logical`(r15);
    if c1 then L112() else L9();
  L33(r88):
    r90 = `!`(r88);
    c27 = `as.logical`(r90);
    if c27 then L193() else L34();
  L57(r173):
    c47 = `as.logical`(r173);
    if c47 then L274() else L58(c47);
  L104():
    goto L5(r5);
  L108():
    package1 = ld package;
    check L110() else D3();
  L109():
    r12 = dyn base2(<sym package>);
    goto L8(r12);
  L191():
    missing1 = ldf missing in base;
    r89 = dyn missing1(<sym dir>);
    goto L33(r89);
  L192():
    r87 = dyn base9(<sym dir>);
    goto L33(r87);
  L272():
    missing3 = ldf missing in base;
    r174 = dyn missing3(<sym package>);
    goto L57(r174);
  L273():
    r172 = dyn base15(<sym package>);
    goto L57(r172);
  D3():
    deopt 26 [package1];
  L9():
    goto L10();
  L10():
    find_package = ldf `find.package`;
    check L116() else D7();
  L34():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L266() else L267();
  L58(c49):
    c53 = `as.logical`(c49);
    if c53 then L278() else L59();
  L110():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r14 = dyn length(package2);
    check L111() else D4();
  L112():
    stop = ldf stop;
    check L113() else D5();
  L193():
    st have_registration = FALSE;
    dir_exists1 = ldf `dir.exists`;
    check L194() else D45();
  L274():
    file_test = ldf file_test;
    check L275() else D87();
  D4():
    deopt 29 [r14];
  D5():
    deopt 33 [];
  D7():
    deopt 39 [];
  D45():
    deopt 193 [];
  D87():
    deopt 356 [c47];
  L55(r168):
    r170 = `!`(r168);
    c46 = `as.logical`(r170);
    if c46 then L268() else L56();
  L59():
    goto L60();
  L60():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L282() else L283();
  L111():
    goto L8(r14);
  L113():
    r16 = dyn stop("argument 'package' must be of length 1");
    check L114() else D6();
  L116():
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
    r20 = dyn find_package(p1, p2);
    check L117() else D8();
  L194():
    p19 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r92 = dyn dir_exists1(p19);
    check L195() else D46();
  L266():
    missing2 = ldf missing in base;
    r169 = dyn missing2(<sym file>);
    goto L55(r169);
  L267():
    r167 = dyn base14(<sym file>);
    goto L55(r167);
  L275():
    p44 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r176 = dyn file_test("-f", p44);
    check L276() else D88();
  L278():
    stop7 = ldf stop;
    check L279() else D89();
  D6():
    deopt 35 [r16];
  D8():
    deopt 42 [r20];
  D46():
    deopt 195 [r92];
  D88():
    deopt 359 [c47, r176];
  D89():
    deopt 363 [];
  L56():
    stop6 = ldf stop;
    check L270() else D85();
  L61(r184):
    st other_problem = r184;
    st wrong_pkg = r184;
    st empty_exprs = r184;
    st bad_exprs = r184;
    character = ldf character;
    check L285() else D92();
  L114():
    goto L10();
  L117():
    st dir = r20;
    file_path = ldf `file.path`;
    check L118() else D9();
  L195():
    r93 = `!`(r92);
    c28 = `as.logical`(r93);
    if c28 then L196() else L35();
  L268():
    st enc = NA_LGL;
    st pkg = NA_LGL;
    goto L32();
  L276():
    r177 = `!`(r176);
    c50 = `as.logical`(r177);
    c51 = `&&`(c47, c50);
    goto L58(c51);
  L279():
    p46 = prom<V +>{
      gettextf3 = ldf gettextf;
      p45 = prom<V +>{
        file9 = ld file;
        file10 = force? file9;
        checkMissing(file10);
        return file10;
      };
      r179 = dyn gettextf3("file '%s' does not exist", p45);
      return r179;
    };
    r181 = dyn stop7[, domain](p46, NA_LGL);
    check L280() else D90();
  L282():
    list = ldf list in base;
    r185 = dyn list();
    check L284() else D91();
  L283():
    r183 = dyn base16();
    goto L61(r183);
  D9():
    deopt 45 [];
  D85():
    deopt 349 [];
  D90():
    deopt 367 [r181];
  D91():
    deopt 373 [r185];
  D92():
    deopt 379 [];
  L35():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L200() else D49();
  L36():
    basename2 = ldf basename;
    check L202() else D51();
  L118():
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r22 = dyn file_path(p3, "DESCRIPTION");
    check L119() else D10();
  L196():
    stop2 = ldf stop;
    check L197() else D47();
  L270():
    r171 = dyn stop6("you must specify 'package', 'dir' or 'file'");
    check L271() else D86();
  L280():
    goto L60();
  L284():
    goto L61(r185);
  L285():
    r186 = dyn character();
    check L286() else D93();
  D10():
    deopt 48 [r22];
  D47():
    deopt 198 [];
  D49():
    deopt 204 [];
  D51():
    deopt 209 [];
  D86():
    deopt 351 [r171];
  D93():
    deopt 380 [r186];
  L119():
    st dfile = r22;
    _read_description = ldf `.read_description`;
    check L120() else D11();
  L197():
    p21 = prom<V +>{
      gettextf1 = ldf gettextf;
      p20 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r95 = dyn gettextf1("directory '%s' does not exist", p20);
      return r95;
    };
    r97 = dyn stop2[, domain](p21, NA_LGL);
    check L198() else D48();
  L200():
    p22 = prom<V +>{
      dir17 = ld dir;
      dir18 = force? dir17;
      checkMissing(dir18);
      return dir18;
    };
    r100 = dyn file_path_as_absolute(p22);
    check L201() else D50();
  L202():
    p23 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r102 = dyn basename2(p23);
    check L203() else D52();
  L271():
    goto L32();
  L286():
    st other_desc = r186;
    character1 = ldf character;
    check L287() else D94();
  D11():
    deopt 51 [];
  D48():
    deopt 202 [r97];
  D50():
    deopt 206 [r100];
  D52():
    deopt 211 [r102];
  D94():
    deopt 383 [];
  L120():
    p4 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r24 = dyn _read_description(p4);
    check L121() else D12();
  L198():
    goto L36();
  L201():
    st dir = r100;
    goto L36();
  L203():
    st pkgDLL = r102;
    st pkg = r102;
    file_path2 = ldf `file.path`;
    check L204() else D53();
  L287():
    r187 = dyn character1();
    check L288() else D95();
  D12():
    deopt 53 [r24];
  D53():
    deopt 215 [];
  D95():
    deopt 384 [r187];
  L121():
    st db = r24;
    basename = ldf basename;
    check L122() else D13();
  L204():
    p24 = prom<V +>{
      dir21 = ld dir;
      dir22 = force? dir21;
      checkMissing(dir22);
      return dir22;
    };
    r104 = dyn file_path2(p24, "DESCRIPTION");
    check L205() else D54();
  L288():
    st bad_pkg = r187;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L289() else L290();
  D13():
    deopt 56 [];
  D54():
    deopt 218 [r104];
  L62(r189):
    st dup_false = r189;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L292() else L293();
  L122():
    p5 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r26 = dyn basename(p5);
    check L123() else D14();
  L205():
    st dfile = r104;
    st enc = NA_LGL;
    st db = NULL;
    file_exists = ldf `file.exists`;
    check L206() else D55();
  L289():
    list1 = ldf list in base;
    r190 = dyn list1();
    check L291() else D96();
  L290():
    r188 = dyn base17();
    goto L62(r188);
  D14():
    deopt 58 [r26];
  D55():
    deopt 227 [];
  D96():
    deopt 389 [r190];
  L63(r192):
    st FF_fun_names = r192;
    st FF_funs = r192;
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L295() else L296();
  L123():
    st pkgDLL = r26;
    st pkg = r26;
    file_path1 = ldf `file.path`;
    check L124() else D15();
  L206():
    p25 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r106 = dyn file_exists(p25);
    check L207() else D56();
  L291():
    goto L62(r190);
  L292():
    c54 = ldf c in base;
    r193 = dyn c54(".C", ".Fortran", ".Call", ".External", ".Call.graphics", ".External.graphics");
    check L294() else D97();
  L293():
    r191 = dyn base18(".C", ".Fortran", ".Call", ".External", ".Call.graphics", ".External.graphics");
    goto L63(r191);
  D15():
    deopt 62 [];
  D56():
    deopt 229 [r106];
  D97():
    deopt 400 [r193];
  L64(r195):
    r197 = `!`(r195);
    c55 = `as.logical`(r197);
    if c55 then L297() else L65();
  L124():
    p6 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r28 = dyn file_path1(p6, "R");
    check L125() else D16();
  L207():
    c29 = `as.logical`(r106);
    if c29 then L208() else L37();
  L294():
    goto L63(r193);
  L295():
    missing4 = ldf missing in base;
    r196 = dyn missing4(<sym package>);
    goto L64(r196);
  L296():
    r194 = dyn base19(<sym package>);
    goto L64(r194);
  D16():
    deopt 65 [r28];
  L37():
    goto L39();
  L39():
    pkg = ld pkg;
    check L216() else D60();
  L65():
    goto L67();
  L67():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L306() else L307();
  L125():
    st code_dir = r28;
    dir_exists = ldf `dir.exists`;
    check L126() else D17();
  L208():
    _read_description1 = ldf `.read_description`;
    check L209() else D57();
  L297():
    vapply = ldf vapply;
    check L298() else D98();
  D17():
    deopt 68 [];
  D57():
    deopt 231 [];
  D60():
    deopt 243 [pkg];
  D98():
    deopt 408 [];
  L68(r204):
    st FF_funs = r204;
    r208 = clos inner3220806625;
    st check_registration = r208;
    r209 = clos inner3708401697;
    st find_bad_exprs = r209;
    sym21 = ldf missing;
    base21 = ldf missing in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L312() else L313();
  L126():
    p7 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r30 = dyn dir_exists(p7);
    check L127() else D18();
  L209():
    p26 = prom<V +>{
      dfile4 = ld dfile;
      dfile5 = force? dfile4;
      checkMissing(dfile5);
      return dfile5;
    };
    r108 = dyn _read_description1(p26);
    check L210() else D58();
  L216():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    r110 = `==`(pkg1, "base");
    c31 = `as.logical`(r110);
    if c31 then L217() else L40();
  L298():
    p47 = prom<V +>{
      FF_funs = ld FF_funs;
      FF_funs1 = force? FF_funs;
      checkMissing(FF_funs1);
      return FF_funs1;
    };
    p48 = prom<V +>{
      r199 = clos inner1384373858;
      return r199;
    };
    r201 = dyn vapply(p47, p48, NA_LGL);
    check L299() else D99();
  L306():
    FF_funs6 = ld FF_funs;
    check L308() else D102();
  L307():
    r203 = dyn base20(<sym FF_funs>, <lang sprintf("base::%s", FF_fun_names)>);
    goto L68(r203);
  D18():
    deopt 70 [r30];
  D58():
    deopt 233 [r108];
  D99():
    deopt 412 [r201];
  D102():
    deopt 424 [FF_funs6];
  L40():
    goto L41();
  L41():
    file_exists1 = ldf `file.exists`;
    check L219() else D61();
  L69(r211):
    r213 = `!`(r211);
    c58 = `as.logical`(r213);
    if c58 then L314() else L70();
  L127():
    r31 = `!`(r30);
    c2 = `as.logical`(r31);
    if c2 then L128() else L11();
  L210():
    st db = r108;
    db = ld db;
    check L211() else D59();
  L217():
    st has_namespace = TRUE;
    goto L41();
  L299():
    st is_FF_fun_from_base = r201;
    FF_funs2 = ld FF_funs;
    check L300() else D100();
  L308():
    FF_funs7 = force? FF_funs6;
    checkMissing(FF_funs7);
    sprintf = ldf sprintf;
    check L309() else D103();
  L312():
    missing5 = ldf missing in base;
    r212 = dyn missing5(<sym package>);
    goto L69(r212);
  L313():
    r210 = dyn base21(<sym package>);
    goto L69(r210);
  D59():
    deopt 235 [db];
  D61():
    deopt 253 [];
  D100():
    deopt 414 [FF_funs2];
  D103():
    deopt 427 [];
  L11():
    goto L12();
  L12():
    st have_registration = FALSE;
    basename1 = ldf basename;
    check L132() else D21();
  L70():
    sym26 = ldf `is.na`;
    base26 = ldf `is.na` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L349() else L350();
  L81():
    sym29 = ldf seq_along;
    base29 = ldf seq_along in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L366() else L367();
  L128():
    stop1 = ldf stop;
    check L129() else D19();
  L211():
    db1 = force? db;
    checkMissing(db1);
    c30 = `is.object`(db1);
    if c30 then L212() else L213(db1);
  L219():
    p28 = prom<V +>{
      file_path3 = ldf `file.path`;
      p27 = prom<V +>{
        dir23 = ld dir;
        dir24 = force? dir23;
        checkMissing(dir24);
        return dir24;
      };
      r113 = dyn file_path3(p27, "NAMESPACE");
      return r113;
    };
    r115 = dyn file_exists1(p28);
    check L220() else D62();
  L300():
    FF_funs3 = force? FF_funs2;
    checkMissing(FF_funs3);
    c56 = `is.object`(FF_funs3);
    if c56 then L301() else L302(FF_funs3);
  L309():
    p49 = prom<V +>{
      FF_fun_names = ld FF_fun_names;
      FF_fun_names1 = force? FF_fun_names;
      checkMissing(FF_fun_names1);
      return FF_fun_names1;
    };
    r206 = dyn sprintf("base::%s", p49);
    check L310() else D104();
  L314():
    r214 = clos inner1384373858;
    st checkFFmy = r214;
    lapply = ldf lapply;
    check L315() else D106();
  D19():
    deopt 73 [];
  D21():
    deopt 84 [];
  D62():
    deopt 255 [r115];
  D104():
    deopt 430 [r206];
  D106():
    deopt 448 [];
  L38(dx11):
    st enc = dx11;
    goto L39();
  L66(dx16):
    st FF_funs = dx16;
    goto L67();
  L82(r252):
    r254 = `!`(r252);
    c64 = `as.logical`(r254);
    if c64 then L353() else L83(c64);
  L87(r277):
    s1 = toForSeq(r277);
    l1 = length(s1);
    i8 = 0;
    goto L88(i8);
  L129():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r33 = dyn gettextf("directory '%s' does not contain R code", p8);
      return r33;
    };
    r35 = dyn stop1[, domain](p9, NA_LGL);
    check L130() else D20();
  L132():
    p10 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r38 = dyn basename1(p10);
    check L133() else D22();
  L212():
    dr10 = tryDispatchBuiltin.1("[", db1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L214() else L213(dr10);
  L213(db3):
    __3 = ldf `[` in base;
    r109 = dyn __3(db3, "Encoding");
    goto L38(r109);
  L220():
    c32 = `as.logical`(r115);
    if c32 then L221() else L42(c32);
  L301():
    dr14 = tryDispatchBuiltin.1("[", FF_funs3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L303() else L302(dr14);
  L302(FF_funs5):
    is_FF_fun_from_base = ld is_FF_fun_from_base;
    check L304() else D101();
  L310():
    c57 = ldf c in base;
    r207 = dyn c57(FF_funs7, r206);
    check L311() else D105();
  L315():
    p51 = prom<V +>{
      ls = ldf ls;
      p50 = prom<V +>{
        code_env4 = ld code_env;
        code_env5 = force? code_env4;
        checkMissing(code_env5);
        return code_env5;
      };
      r216 = dyn ls[envir, `all.names`](p50, TRUE);
      return r216;
    };
    p52 = prom<V +>{
      r218 = clos inner1384373858;
      return r218;
    };
    r220 = dyn lapply(p51, p52);
    check L316() else D107();
  L349():
    enc = ld enc;
    check L351() else D126();
  L350():
    r251 = dyn base26(<sym enc>);
    goto L82(r251);
  L366():
    exprs6 = ld exprs;
    check L368() else D135();
  L367():
    r276 = dyn base29(<sym exprs>);
    goto L87(r276);
  D20():
    deopt 77 [r35];
  D22():
    deopt 86 [r38];
  D101():
    deopt 416 [FF_funs5, is_FF_fun_from_base];
  D105():
    deopt 432 [r207];
  D107():
    deopt 451 [r220];
  D126():
    deopt 514 [enc];
  D135():
    deopt 546 [exprs6];
  L42(c34):
    c41 = `as.logical`(c34);
    if c41 then L228() else L44();
  L83(c66):
    c71 = `as.logical`(c66);
    if c71 then L357() else L84();
  L88(i9):
    i10 = `+`.1(i9, 1);
    c72 = `<`.1(l1, i10);
    if c72 then L369() else L89();
  L130():
    goto L12();
  L133():
    r39 = `!=`(r38, "base");
    c3 = `as.logical`(r39);
    if c3 then L134() else L13();
  L214():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L38(dx10);
  L221():
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L222() else L223();
  L303():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L66(dx15);
  L304():
    is_FF_fun_from_base1 = force? is_FF_fun_from_base;
    __4 = ldf `[` in base;
    r202 = dyn __4(FF_funs5, is_FF_fun_from_base1);
    goto L66(r202);
  L311():
    goto L68(r207);
  L316():
    st exprs = r220;
    sym22 = ldf `.isMethodsDispatchOn`;
    base22 = ldf `.isMethodsDispatchOn` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L317() else L318();
  L351():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r253 = dyn is_na(enc1);
    check L352() else D127();
  L353():
    _notin_ = ldf `%notin%`;
    check L354() else D128();
  L368():
    exprs7 = force? exprs6;
    checkMissing(exprs7);
    r278 = seq_along(exprs7);
    goto L87(r278);
  D127():
    deopt 517 [r253];
  D128():
    deopt 520 [c64];
  L13():
    st have_registration = TRUE;
    st has_namespace = TRUE;
    _package_env = ldf `.package_env`;
    check L188() else D43();
  L31():
    st is_installed = TRUE;
    goto L32();
  L43(c37, r117):
    r129 = `!`(r117);
    c38 = `as.logical`(r129);
    c39 = `&&`(c37, c38);
    goto L42(c39);
  L44():
    goto L46();
  L46():
    file_path4 = ldf `file.path`;
    check L238() else D68();
  L71(r222):
    c59 = `as.logical`(r222);
    if c59 then L320() else L72();
  L84():
    file14 = ld file;
    check L363() else D132();
  L86():
    tryCatch1 = ldf tryCatch;
    check L364() else D133();
  L89():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st i = x1;
    character2 = ldf character;
    check L370() else D136();
  L134():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L135() else D23();
  L222():
    tryCatch = ldf tryCatch;
    check L224() else D63();
  L223():
    r116 = dyn base10(<lang tryCatch(`<-`(nm, parseNamespaceFile(basename(dir), dirname(dir))), error=identity)>, "error");
    goto L43(c32, r116);
  L228():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L229() else L230();
  L317():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r223 = dyn _isMethodsDispatchOn();
    check L319() else D108();
  L318():
    r221 = dyn base22();
    goto L71(r221);
  L352():
    goto L82(r253);
  L354():
    p62 = prom<V +>{
      Sys_getlocale = ldf `Sys.getlocale`;
      r255 = dyn Sys_getlocale("LC_CTYPE");
      return r255;
    };
    p63 = prom<V +>{
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r258):
      return r258;
    L1():
      c67 = ldf c in base;
      r259 = dyn c67("C", "POSIX");
      goto L0(r259);
    L2():
      r257 = dyn base27("C", "POSIX");
      goto L0(r257);
    };
    r261 = dyn _notin_(p62, p63);
    check L355() else D129();
  L357():
    file11 = ldf file;
    check L358() else D130();
  L369():
    wrong_pkg = ld wrong_pkg;
    check L374() else D140();
  D23():
    deopt 90 [];
  D43():
    deopt 178 [];
  D63():
    deopt 259 [c32];
  D68():
    deopt 283 [];
  D108():
    deopt 456 [r223];
  D129():
    deopt 523 [c64, r261];
  D130():
    deopt 526 [];
  D132():
    deopt 535 [file14];
  D133():
    deopt 539 [];
  D136():
    deopt 550 [i10];
  D140():
    deopt 560 [wrong_pkg];
  L45(r131):
    r134 = `>`(r131, 0);
    st has_namespace = r134;
    goto L46();
  L72():
    goto L80(NULL);
  L80(r249):
    goto L81();
  L135():
    p11 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p13 = prom<V +>{
      dirname = ldf dirname;
      p12 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r42 = dyn dirname(p12);
      return r42;
    };
    r44 = dyn _load_namespace_quietly(p11, p13);
    check L136() else D24();
  L188():
    p18 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r85 = dyn _package_env(p18);
    check L189() else D44();
  L224():
    p33 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p30 = prom<V +>{
        basename3 = ldf basename;
        p29 = prom<V +>{
          dir25 = ld dir;
          dir26 = force? dir25;
          checkMissing(dir26);
          return dir26;
        };
        r119 = dyn basename3(p29);
        return r119;
      };
      p32 = prom<V +>{
        dirname1 = ldf dirname;
        p31 = prom<V +>{
          dir27 = ld dir;
          dir28 = force? dir27;
          checkMissing(dir28);
          return dir28;
        };
        r122 = dyn dirname1(p31);
        return r122;
      };
      r124 = dyn parseNamespaceFile(p30, p32);
      st nm = r124;
      invisible.0();
      return r124;
    };
    p34 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r127 = dyn tryCatch[, error](p33, p34);
    check L225() else D64();
  L229():
    nm = ld nm;
    check L231() else D66();
  L230():
    r130 = dyn base11(<lang `$`(nm, dynlibs)>);
    goto L45(r130);
  L238():
    p35 = prom<V +>{
      dir29 = ld dir;
      dir30 = force? dir29;
      checkMissing(dir30);
      return dir30;
    };
    r137 = dyn file_path4(p35, "R");
    check L239() else D69();
  L319():
    goto L71(r223);
  L320():
    _get_S4_generics = ldf `.get_S4_generics`;
    check L321() else D109();
  L355():
    c68 = `as.logical`(r261);
    c69 = `&&`(c64, c68);
    goto L83(c69);
  L358():
    p64 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    p65 = prom<V +>{
      enc2 = ld enc;
      enc3 = force? enc2;
      checkMissing(enc3);
      return enc3;
    };
    r264 = dyn file11[, encoding](p64, p65);
    check L359() else D131();
  L363():
    file15 = force? file14;
    checkMissing(file15);
    st con = file15;
    goto L86();
  L364():
    p68 = prom<V +>{
      parse = ldf parse;
      p66 = prom<V +>{
        con = ld con;
        con1 = force? con;
        checkMissing(con1);
        return con1;
      };
      p67 = prom<V +>{
        return -1;
      };
      r271 = dyn parse[file, n](p66, p67);
      return r271;
    };
    p69 = prom<V +>{
      r273 = clos inner3708401697;
      return r273;
    };
    r275 = dyn tryCatch1[, error](p68, p69);
    check L365() else D134();
  L370():
    r279 = dyn character2();
    check L371() else D137();
  L374():
    wrong_pkg1 = force? wrong_pkg;
    checkMissing(wrong_pkg1);
    l2 = ld bad_exprs;
    attr__ = ldf `attr<-`;
    check L375() else D141();
  D24():
    deopt 93 [r44];
  D44():
    deopt 180 [r85];
  D64():
    deopt 263 [c32, r127];
  D66():
    deopt 272 [nm];
  D69():
    deopt 286 [r137];
  D109():
    deopt 458 [];
  D131():
    deopt 530 [r264];
  D134():
    deopt 543 [r275];
  D137():
    deopt 551 [i10, r279];
  D141():
    deopt 563 [wrong_pkg1, l2, wrong_pkg1];
  L136():
    asNamespace = ldf asNamespace;
    check L137() else D25();
  L189():
    st code_env = r85;
    goto L31();
  L225():
    inherits1 = ldf inherits in base;
    r128 = dyn inherits1(r127, "error", FALSE);
    check L226() else D65();
  L231():
    nm1 = force? nm;
    checkMissing(nm1);
    c42 = `is.object`(nm1);
    if c42 then L233() else L234(nm1);
  L239():
    st code_dir = r137;
    dir_exists2 = ldf `dir.exists`;
    check L240() else D70();
  L321():
    p53 = prom<V +>{
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      return code_env7;
    };
    r225 = dyn _get_S4_generics(p53);
    check L322() else D110();
  L359():
    st con = r264;
    sym28 = ldf `on.exit`;
    base28 = ldf `on.exit` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L360() else L361();
  L365():
    st exprs = r275;
    goto L81();
  L371():
    st fr = r279;
    find_bad_exprs = ldf find_bad_exprs;
    check L372() else D138();
  L375():
    r283 = dyn attr__(l2, NULL, "wrong_pkg", wrong_pkg1);
    check L376() else D142();
  D25():
    deopt 95 [];
  D65():
    deopt 267 [c32, r128];
  D70():
    deopt 289 [];
  D110():
    deopt 460 [r225];
  D138():
    deopt 554 [i10];
  D142():
    deopt 566 [wrong_pkg1, r283];
  L85(r266):
    goto L86();
  L137():
    p14 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r46 = dyn asNamespace(p14);
    check L138() else D26();
  L226():
    goto L43(c32, r128);
  L232(dx14):
    length3 = ldf length in base;
    r133 = dyn length3(dx14);
    check L236() else D67();
  L233():
    dr12 = tryDispatchBuiltin.1("$", nm1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L235() else L234(dr12);
  L234(nm3):
    r132 = `$`(nm3, <sym dynlibs>);
    goto L232(r132);
  L240():
    p36 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r139 = dyn dir_exists2(p36);
    check L241() else D71();
  L322():
    s = toForSeq(r225);
    l = length(s);
    i = 0;
    goto L73(i);
  L360():
    on_exit1 = ldf `on.exit` in base;
    r267 = dyn on_exit1(<lang close(con)>);
    goto L85(r267);
  L361():
    r265 = dyn base28(<lang close(con)>);
    goto L85(r265);
  L372():
    p70 = prom<V +>{
      exprs8 = ld exprs;
      exprs9 = force? exprs8;
      checkMissing(exprs9);
      c73 = `is.object`(exprs9);
      if c73 then L1() else L2(exprs9);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", exprs9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(exprs11):
      i13 = ld i;
      i14 = force? i13;
      __5 = ldf `[[` in base;
      r280 = dyn __5(exprs11, i14);
      goto L0(r280);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    r282 = dyn find_bad_exprs(p70);
    check L373() else D139();
  L376():
    st bad_exprs = r283;
    bad_pkg = ld bad_pkg;
    check L377() else D143();
  D26():
    deopt 97 [r46];
  D67():
    deopt 276 [r133];
  D71():
    deopt 291 [r139];
  D139():
    deopt 556 [i10, r282];
  D143():
    deopt 568 [bad_pkg];
  L73(i1):
    i2 = `+`.1(i1, 1);
    c60 = `<`.1(l, i2);
    if c60 then L323() else L75();
  L138():
    st code_env = r46;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L139() else L140();
  L235():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L232(dx13);
  L236():
    goto L45(r133);
  L241():
    r140 = `!`(r139);
    c43 = `as.logical`(r140);
    if c43 then L242() else L47();
  L373():
    goto L88(i10);
  L377():
    bad_pkg1 = force? bad_pkg;
    checkMissing(bad_pkg1);
    l3 = ld bad_exprs;
    attr__1 = ldf `attr<-`;
    check L378() else D144();
  D144():
    deopt 571 [bad_pkg1, l3, bad_pkg1];
  L14(r48):
    r52 = `!`(r48);
    c6 = `as.logical`(r52);
    if c6 then L143() else L15();
  L47():
    goto L48();
  L48():
    tempfile = ldf tempfile;
    check L246() else D74();
  L75():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    _get_S4_methods_list = ldf `.get_S4_methods_list`;
    check L324() else D111();
  L139():
    get0 = ldf get0;
    check L141() else D27();
  L140():
    r47 = dyn base3(<lang `<-`(DLLs, get0("DLLs", envir=`$`(code_env, .__NAMESPACE__.)))>);
    goto L14(r47);
  L242():
    stop3 = ldf stop;
    check L243() else D72();
  L323():
    _get_ref_classes = ldf `.get_ref_classes`;
    check L332() else D117();
  L378():
    r284 = dyn attr__1(l3, NULL, "bad_pkg", bad_pkg1);
    check L379() else D145();
  D27():
    deopt 101 [];
  D72():
    deopt 294 [];
  D74():
    deopt 302 [];
  D111():
    deopt 462 [i2];
  D117():
    deopt 483 [];
  D145():
    deopt 574 [bad_pkg1, r284];
  L15():
    goto L30(NULL);
  L30(r82):
    goto L31();
  L141():
    p15 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      c4 = `is.object`(code_env1);
      if c4 then L1() else L2(code_env1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", code_env1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(code_env3):
      r49 = `$`(code_env3, <sym .__NAMESPACE__.>);
      goto L0(r49);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r51 = dyn get0[, envir]("DLLs", p15);
    check L142() else D28();
  L143():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L144() else L145();
  L243():
    p38 = prom<V +>{
      gettextf2 = ldf gettextf;
      p37 = prom<V +>{
        dir31 = ld dir;
        dir32 = force? dir31;
        checkMissing(dir32);
        return dir32;
      };
      r142 = dyn gettextf2("directory '%s' does not contain R code", p37);
      return r142;
    };
    r144 = dyn stop3[, domain](p38, NA_LGL);
    check L244() else D73();
  L246():
    r146 = dyn tempfile();
    check L247() else D75();
  L324():
    p54 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p55 = prom<V +>{
      code_env8 = ld code_env;
      code_env9 = force? code_env8;
      checkMissing(code_env9);
      return code_env9;
    };
    r228 = dyn _get_S4_methods_list(p54, p55);
    check L325() else D112();
  L332():
    p58 = prom<V +>{
      code_env10 = ld code_env;
      code_env11 = force? code_env10;
      checkMissing(code_env11);
      return code_env11;
    };
    r236 = dyn _get_ref_classes(p58);
    check L333() else D118();
  L379():
    st bad_exprs = r284;
    empty_exprs = ld empty_exprs;
    check L380() else D146();
  D28():
    deopt 105 [r51];
  D73():
    deopt 298 [r144];
  D75():
    deopt 303 [r146];
  D112():
    deopt 465 [i2, r228];
  D118():
    deopt 485 [r236];
  D146():
    deopt 576 [empty_exprs];
  L16(r54):
    c7 = `as.logical`(r54);
    if c7 then L148() else L17();
  L142():
    st DLLs = r51;
    c5 = `==`(r51, NULL);
    goto L14(c5);
  L144():
    DLLs = ld DLLs;
    check L146() else D29();
  L145():
    r53 = dyn base4(<sym DLLs>);
    goto L16(r53);
  L244():
    goto L48();
  L247():
    st file = r146;
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L248() else L249();
  L325():
    st mlist = r228;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L326() else L327();
  L333():
    st refs = r236;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L334() else L335();
  L380():
    empty_exprs1 = force? empty_exprs;
    checkMissing(empty_exprs1);
    l4 = ld bad_exprs;
    attr__2 = ldf `attr<-`;
    check L381() else D147();
  D29():
    deopt 111 [DLLs];
  D147():
    deopt 579 [empty_exprs1, l4, empty_exprs1];
  L17():
    goto L18();
  L18():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L150() else L151();
  L49():
    file_create = ldf `file.create`;
    check L250() else D76();
  L74(i7, r230):
    st exprs = r230;
    goto L73(i7);
  L76(r238):
    c62 = `as.logical`(r238);
    if c62 then L338() else L77();
  L146():
    DLLs1 = force? DLLs;
    checkMissing(DLLs1);
    length1 = ldf length in base;
    r55 = dyn length1(DLLs1);
    check L147() else D30();
  L148():
    st has_namespace = TRUE;
    goto L18();
  L248():
    on_exit = ldf `on.exit` in base;
    r149 = dyn on_exit(<lang unlink(file)>);
    goto L49();
  L249():
    r147 = dyn base12(<lang unlink(file)>);
    goto L49();
  L326():
    exprs = ld exprs;
    check L328() else D113();
  L327():
    r229 = dyn base23(<sym exprs>, <lang lapply(mlist, body)>);
    goto L74(i2, r229);
  L334():
    refs = ld refs;
    check L336() else D119();
  L335():
    r237 = dyn base24(<sym refs>);
    goto L76(r237);
  L381():
    r285 = dyn attr__2(l4, NULL, "empty", empty_exprs1);
    check L382() else D148();
  D30():
    deopt 114 [r55];
  D76():
    deopt 309 [];
  D113():
    deopt 469 [i2, exprs];
  D119():
    deopt 489 [refs];
  D148():
    deopt 582 [empty_exprs1, r285];
  L19(r58):
    c8 = `as.logical`(r58);
    if c8 then L154() else L20(c8);
  L77():
    goto L79(NULL);
  L79(r248):
    goto L80(r248);
  L147():
    goto L16(r55);
  L150():
    DLLs2 = ld DLLs;
    check L152() else D31();
  L151():
    r57 = dyn base5(<sym DLLs>);
    goto L19(r57);
  L250():
    p39 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r151 = dyn file_create(p39);
    check L251() else D77();
  L328():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    lapply1 = ldf lapply;
    check L329() else D114();
  L336():
    refs1 = force? refs;
    checkMissing(refs1);
    length4 = ldf length in base;
    r239 = dyn length4(refs1);
    check L337() else D120();
  L338():
    lapply2 = ldf lapply;
    check L339() else D121();
  L382():
    st bad_exprs = r285;
    other_problem = ld other_problem;
    check L383() else D149();
  D31():
    deopt 122 [DLLs2];
  D77():
    deopt 311 [r151];
  D114():
    deopt 472 [i2];
  D120():
    deopt 492 [r239];
  D121():
    deopt 494 [];
  D149():
    deopt 584 [other_problem];
  L20(c10):
    c22 = `as.logical`(c10);
    if c22 then L163() else L23();
  L152():
    DLLs3 = force? DLLs2;
    checkMissing(DLLs3);
    length2 = ldf length in base;
    r59 = dyn length2(DLLs3);
    check L153() else D32();
  L154():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L155() else L156();
  L251():
    r152 = `!`(r151);
    c44 = `as.logical`(r152);
    if c44 then L252() else L50();
  L329():
    p56 = prom<V +>{
      mlist = ld mlist;
      mlist1 = force? mlist;
      checkMissing(mlist1);
      return mlist1;
    };
    p57 = prom<V +>{
      body = ld body;
      body1 = force? body;
      checkMissing(body1);
      return body1;
    };
    r233 = dyn lapply1(p56, p57);
    check L330() else D115();
  L337():
    goto L76(r239);
  L339():
    p60 = prom<V +>{
      unlist = ldf unlist;
      p59 = prom<V +>{
        refs2 = ld refs;
        refs3 = force? refs2;
        checkMissing(refs3);
        return refs3;
      };
      r241 = dyn unlist(p59, FALSE);
      return r241;
    };
    p61 = prom<V +>{
      checkFFmy = ld checkFFmy;
      checkFFmy1 = force? checkFFmy;
      checkMissing(checkFFmy1);
      return checkFFmy1;
    };
    r244 = dyn lapply2(p60, p61);
    check L340() else D122();
  L383():
    other_problem1 = force? other_problem;
    checkMissing(other_problem1);
    l5 = ld bad_exprs;
    attr__3 = ldf `attr<-`;
    check L384() else D150();
  D32():
    deopt 125 [r59];
  D115():
    deopt 475 [i2, r233];
  D122():
    deopt 497 [r244];
  D150():
    deopt 587 [other_problem1, l5, other_problem1];
  L21(c13, r61):
    c19 = `as.logical`(r61);
    c20 = `&&`(c13, c19);
    goto L20(c20);
  L23():
    goto L29(NULL);
  L29(r81):
    goto L30(r81);
  L50():
    goto L51();
  L51():
    sym13 = ldf all;
    base13 = ldf all in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L256() else L257();
  L153():
    goto L19(r59);
  L155():
    DLLs4 = ld DLLs;
    check L157() else D33();
  L156():
    r60 = dyn base6(<lang `[[`(DLLs, 1)>, "DLLInfo");
    goto L21(c8, r60);
  L163():
    sym7 = ldf unclass;
    base7 = ldf unclass in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L164() else L165();
  L252():
    stop4 = ldf stop;
    check L253() else D78();
  L330():
    c61 = ldf c in base;
    r234 = dyn c61(exprs1, r233);
    check L331() else D116();
  L340():
    st exprs2 = r244;
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L341() else L342();
  L384():
    r286 = dyn attr__3(l5, NULL, "other_problem", other_problem1);
    check L385() else D151();
  D33():
    deopt 128 [c8, DLLs4];
  D78():
    deopt 314 [];
  D116():
    deopt 477 [i2, r234];
  D151():
    deopt 590 [other_problem1, r286];
  L24(r65):
    c24 = `is.object`(r65);
    if c24 then L172() else L173(r65);
  L52(r157):
    r164 = `!`(r157);
    c45 = `as.logical`(r164);
    if c45 then L261() else L53();
  L78(r246):
    st exprs = r246;
    goto L79(r246);
  L157():
    DLLs5 = force? DLLs4;
    checkMissing(DLLs5);
    c14 = `is.object`(DLLs5);
    if c14 then L158() else L159(c8, DLLs5);
  L164():
    DLLs8 = ld DLLs;
    check L166() else D35();
  L165():
    r64 = dyn base7(<lang `[[`(DLLs, 1)>);
    goto L24(r64);
  L253():
    p40 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r154 = dyn stop4[, , domain]("unable to create ", p40, NA_LGL);
    check L254() else D79();
  L256():
    _file_append_ensuring_LFs = ldf `.file_append_ensuring_LFs`;
    check L258() else D80();
  L257():
    r156 = dyn base13(<lang .file_append_ensuring_LFs(file, list_files_with_type(code_dir, "code"))>);
    goto L52(r156);
  L331():
    goto L74(i2, r234);
  L341():
    exprs2 = ld exprs;
    check L343() else D123();
  L342():
    r245 = dyn base25(<sym exprs>, <sym exprs2>);
    goto L78(r245);
  L385():
    st bad_exprs = r286;
    other_desc = ld other_desc;
    check L386() else D152();
  D35():
    deopt 140 [DLLs8];
  D79():
    deopt 319 [r154];
  D80():
    deopt 325 [];
  D123():
    deopt 501 [exprs2];
  D152():
    deopt 592 [other_desc];
  L22(c18, dx3):
    inherits = ldf inherits in base;
    r63 = dyn inherits(dx3, "DLLInfo", FALSE);
    check L161() else D34();
  L53():
    goto L54(NULL);
  L54(r166):
    goto L32();
  L158():
    dr2 = tryDispatchBuiltin.1("[[", DLLs5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L160() else L159(c8, dr2);
  L159(c16, DLLs7):
    __ = ldf `[[` in base;
    r62 = dyn __(DLLs7, 1);
    goto L22(c16, r62);
  L166():
    DLLs9 = force? DLLs8;
    checkMissing(DLLs9);
    c23 = `is.object`(DLLs9);
    if c23 then L167() else L168(DLLs9);
  L171(dx7):
    st pkgDLL = dx7;
    registration1 = ld registration;
    check L175() else D37();
  L172():
    dr6 = tryDispatchBuiltin.1("$", r65);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L174() else L173(dr6);
  L173(r69):
    r70 = `$`(r69, <sym name>);
    goto L171(r70);
  L254():
    goto L51();
  L258():
    p41 = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    p43 = prom<V +>{
      list_files_with_type = ldf list_files_with_type;
      p42 = prom<V +>{
        code_dir4 = ld code_dir;
        code_dir5 = force? code_dir4;
        checkMissing(code_dir5);
        return code_dir5;
      };
      r160 = dyn list_files_with_type(p42, "code");
      return r160;
    };
    r162 = dyn _file_append_ensuring_LFs(p41, p43);
    check L259() else D81();
  L261():
    stop5 = ldf stop;
    check L262() else D83();
  L343():
    exprs3 = force? exprs2;
    checkMissing(exprs3);
    exprs4 = ld exprs2;
    check L344() else D124();
  L386():
    other_desc1 = force? other_desc;
    checkMissing(other_desc1);
    l6 = ld bad_exprs;
    attr__4 = ldf `attr<-`;
    check L387() else D153();
  D34():
    deopt 136 [c18, r63];
  D37():
    deopt 149 [registration1];
  D81():
    deopt 328 [r162];
  D83():
    deopt 333 [];
  D124():
    deopt 503 [exprs4];
  D153():
    deopt 595 [other_desc1, l6, other_desc1];
  L25(dx5):
    unclass = ldf unclass in base;
    r67 = dyn unclass(dx5);
    check L170() else D36();
  L160():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(c8, dx2);
  L161():
    goto L21(c18, r63);
  L167():
    dr4 = tryDispatchBuiltin.1("[[", DLLs9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L169() else L168(dr4);
  L168(DLLs11):
    __1 = ldf `[[` in base;
    r66 = dyn __1(DLLs11, 1);
    goto L25(r66);
  L174():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L171(dx6);
  L175():
    registration2 = force? registration1;
    checkMissing(registration2);
    c25 = `as.logical`(registration2);
    if c25 then L176() else L26();
  L259():
    all = ldf all in base;
    r163 = dyn all(r162);
    check L260() else D82();
  L262():
    r165 = dyn stop5[, domain]("unable to write code files", NA_LGL);
    check L263() else D84();
  L344():
    exprs5 = force? exprs4;
    checkMissing(exprs5);
    c63 = ldf c in base;
    r247 = dyn c63(exprs3, exprs5);
    check L345() else D125();
  L387():
    r287 = dyn attr__4(l6, NULL, "other_desc", other_desc1);
    check L388() else D154();
  D36():
    deopt 146 [r67];
  D82():
    deopt 330 [r163];
  D84():
    deopt 337 [r165];
  D125():
    deopt 506 [r247];
  D154():
    deopt 598 [other_desc1, r287];
  L26():
    goto L28(NULL);
  L28(r80):
    goto L29(r80);
  L169():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(dx4);
  L170():
    goto L24(r67);
  L176():
    getDLLRegisteredRoutines = ldf getDLLRegisteredRoutines;
    check L177() else D38();
  L260():
    goto L52(r163);
  L263():
    goto L54(r165);
  L345():
    goto L78(r247);
  L388():
    st bad_exprs = r287;
    check_DUP1 = ld check_DUP;
    check L389() else D155();
  D38():
    deopt 152 [];
  D155():
    deopt 600 [check_DUP1];
  L177():
    p16 = prom<V +>{
      DLLs12 = ld DLLs;
      DLLs13 = force? DLLs12;
      checkMissing(DLLs13);
      c26 = `is.object`(DLLs13);
      if c26 then L1() else L2(DLLs13);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", DLLs13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(DLLs15):
      __2 = ldf `[[` in base;
      r71 = dyn __2(DLLs15, 1);
      goto L0(r71);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r73 = dyn getDLLRegisteredRoutines(p16);
    check L178() else D39();
  L389():
    check_DUP2 = force? check_DUP1;
    checkMissing(check_DUP2);
    c74 = `as.logical`(check_DUP2);
    if c74 then L390() else L90();
  D39():
    deopt 154 [r73];
  L90():
    goto L91();
  L91():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L395() else L396();
  L178():
    st reg = r73;
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L179() else L180();
  L390():
    dup_false = ld dup_false;
    check L391() else D156();
  D156():
    deopt 602 [dup_false];
  L27(r75):
    r79 = `>`(r75, 0);
    st have_registration = r79;
    goto L28(r79);
  L92(r290):
    c75 = `as.logical`(r290);
    if c75 then L399() else L93();
  L179():
    lengths = ldf lengths;
    check L181() else D40();
  L180():
    r74 = dyn base8(<lang lengths(reg)>);
    goto L27(r74);
  L391():
    dup_false1 = force? dup_false;
    checkMissing(dup_false1);
    l7 = ld bad_exprs;
    attr__5 = ldf `attr<-`;
    check L392() else D157();
  L395():
    bad_pkg2 = ld bad_pkg;
    check L397() else D159();
  L396():
    r289 = dyn base30(<sym bad_pkg>);
    goto L92(r289);
  D40():
    deopt 159 [];
  D157():
    deopt 605 [dup_false1, l7, dup_false1];
  D159():
    deopt 614 [bad_pkg2];
  L93():
    goto L97();
  L97():
    l9 = ld bad_exprs;
    class__ = ldf `class<-`;
    check L428() else D180();
  L181():
    p17 = prom<V +>{
      reg = ld reg;
      reg1 = force? reg;
      checkMissing(reg1);
      return reg1;
    };
    r77 = dyn lengths(p17);
    check L182() else D41();
  L392():
    r288 = dyn attr__5(l7, NULL, "dup_false", dup_false1);
    check L393() else D158();
  L397():
    bad_pkg3 = force? bad_pkg2;
    checkMissing(bad_pkg3);
    length5 = ldf length in base;
    r291 = dyn length5(bad_pkg3);
    check L398() else D160();
  L399():
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L400() else D161();
  D41():
    deopt 161 [r77];
  D158():
    deopt 608 [dup_false1, r288];
  D160():
    deopt 617 [r291];
  D161():
    deopt 619 [];
  D180():
    deopt 680 ["checkFF", l9, "checkFF"];
  L182():
    sum = ldf sum in base;
    r78 = dyn sum(r77);
    check L183() else D42();
  L393():
    st bad_exprs = r288;
    goto L91();
  L398():
    goto L92(r291);
  L400():
    r292 = dyn _get_standard_package_names();
    check L401() else D162();
  L428():
    r317 = dyn class__(l9, NULL, "checkFF");
    check L429() else D181();
  D42():
    deopt 163 [r78];
  D162():
    deopt 620 [r292];
  D181():
    deopt 682 ["checkFF", r317];
  L183():
    goto L27(r78);
  L401():
    c76 = `is.object`(r292);
    if c76 then L403() else L404(r292);
  L429():
    st bad_exprs = r317;
    verbose1 = ld verbose;
    check L430() else D182();
  D182():
    deopt 684 [verbose1];
  L402(dx21):
    st bases = dx21;
    _w_o_ = ldf `%w/o%`;
    check L406() else D163();
  L403():
    dr18 = tryDispatchBuiltin.1("$", r292);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L405() else L404(dr18);
  L404(r294):
    r295 = `$`(r294, <sym base>);
    goto L402(r295);
  L430():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c79 = `as.logical`(verbose2);
    if c79 then L431() else L98();
  D163():
    deopt 624 [];
  L98():
    bad_exprs2 = ld bad_exprs;
    check L437() else D185();
  L405():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L402(dx20);
  L406():
    p71 = prom<V +>{
      bad_pkg4 = ld bad_pkg;
      bad_pkg5 = force? bad_pkg4;
      checkMissing(bad_pkg5);
      return bad_pkg5;
    };
    p72 = prom<V +>{
      bases = ld bases;
      bases1 = force? bases;
      checkMissing(bases1);
      return bases1;
    };
    r298 = dyn _w_o_(p71, p72);
    check L407() else D164();
  L431():
    sym33 = ldf invisible;
    base33 = ldf invisible in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L432() else L433();
  D164():
    deopt 627 [r298];
  D185():
    deopt 692 [bad_exprs2];
  L99(r319):
    popenv;
    return r319;
  L407():
    st bad = r298;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L408() else L409();
  L432():
    bad_exprs = ld bad_exprs;
    check L434() else D183();
  L433():
    r318 = dyn base33(<sym bad_exprs>);
    goto L99(r318);
  L437():
    bad_exprs3 = force? bad_exprs2;
    checkMissing(bad_exprs3);
    popenv;
    return bad_exprs3;
  D183():
    deopt 688 [bad_exprs];
  L94(r300):
    c77 = `as.logical`(r300);
    if c77 then L412() else L95();
  L408():
    bad = ld bad;
    check L410() else D165();
  L409():
    r299 = dyn base31(<sym bad>);
    goto L94(r299);
  L434():
    bad_exprs1 = force? bad_exprs;
    checkMissing(bad_exprs1);
    invisible = ldf invisible in base;
    r320 = dyn invisible(bad_exprs1);
    check L435() else D184();
  D165():
    deopt 631 [bad];
  D184():
    deopt 691 [r320];
  L95():
    goto L96(NULL);
  L96(bad6):
    goto L97();
  L410():
    bad1 = force? bad;
    checkMissing(bad1);
    length6 = ldf length in base;
    r301 = dyn length6(bad1);
    check L411() else D166();
  L412():
    _get_requires_from_package_db = ldf `.get_requires_from_package_db`;
    check L413() else D167();
  L435():
    goto L99(r320);
  D166():
    deopt 634 [r301];
  D167():
    deopt 636 [];
  L411():
    goto L94(r301);
  L413():
    p73 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    r303 = dyn _get_requires_from_package_db(p73, "Depends");
    check L414() else D168();
  D168():
    deopt 639 [r303];
  L414():
    st depends = r303;
    _get_requires_from_package_db1 = ldf `.get_requires_from_package_db`;
    check L415() else D169();
  D169():
    deopt 642 [];
  L415():
    p74 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r305 = dyn _get_requires_from_package_db1(p74, "Imports");
    check L416() else D170();
  D170():
    deopt 645 [r305];
  L416():
    st imports = r305;
    _get_requires_from_package_db2 = ldf `.get_requires_from_package_db`;
    check L417() else D171();
  D171():
    deopt 648 [];
  L417():
    p75 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      return db9;
    };
    r307 = dyn _get_requires_from_package_db2(p75, "Suggests");
    check L418() else D172();
  D172():
    deopt 651 [r307];
  L418():
    st suggests = r307;
    _get_requires_from_package_db3 = ldf `.get_requires_from_package_db`;
    check L419() else D173();
  D173():
    deopt 654 [];
  L419():
    p76 = prom<V +>{
      db10 = ld db;
      db11 = force? db10;
      checkMissing(db11);
      return db11;
    };
    r309 = dyn _get_requires_from_package_db3(p76, "Enhances");
    check L420() else D174();
  D174():
    deopt 657 [r309];
  L420():
    st enhances = r309;
    _w_o_1 = ldf `%w/o%`;
    check L421() else D175();
  D175():
    deopt 660 [];
  L421():
    p77 = prom<V +>{
      bad2 = ld bad;
      bad3 = force? bad2;
      checkMissing(bad3);
      return bad3;
    };
    p78 = prom<V +>{
      sym32 = ldf c;
      base32 = ldf c in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L1() else L2();
    L0(r312):
      return r312;
    L1():
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      imports = ld imports;
      imports1 = force? imports;
      checkMissing(imports1);
      suggests = ld suggests;
      suggests1 = force? suggests;
      checkMissing(suggests1);
      enhances = ld enhances;
      enhances1 = force? enhances;
      checkMissing(enhances1);
      c78 = ldf c in base;
      r313 = dyn c78(depends1, imports1, suggests1, enhances1);
      goto L0(r313);
    L2():
      r311 = dyn base32(<sym depends>, <sym imports>, <sym suggests>, <sym enhances>);
      goto L0(r311);
    };
    r315 = dyn _w_o_1(p77, p78);
    check L422() else D176();
  D176():
    deopt 663 [r315];
  L422():
    st bad = r315;
    bad4 = ld bad;
    check L423() else D177();
  D177():
    deopt 665 [bad4];
  L423():
    bad5 = force? bad4;
    checkMissing(bad5);
    l8 = ld bad_exprs;
    attr__6 = ldf `attr<-`;
    check L424() else D178();
  D178():
    deopt 668 [bad5, l8, bad5];
  L424():
    r316 = dyn attr__6(l8, NULL, "undeclared", bad5);
    check L425() else D179();
  D179():
    deopt 671 [bad5, r316];
  L425():
    st bad_exprs = r316;
    goto L96(bad5);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg allow_suppress:*, reg allow_suppress1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg c5:L, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg r3:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c14:L, reg r5:V, reg e3:*, reg e4:V, reg is_call:cls, reg r6:V, reg c15:L, reg c16:V, reg c18:L, reg c20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c23:L, reg r8:V, reg e5:*, reg e6:V, reg c24:L, reg c26:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg c28:L, reg dx1:V, reg __:cls, reg r9:V, reg c29:L, reg c30:L, reg c31:V, reg c33:L, reg c35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c38:L, reg r11:V, reg e9:*, reg e10:V, reg c39:L, reg c41:L, reg e12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c43:L, reg dx3:V, reg __1:cls, reg r12:V, reg as_character:cls, reg r13:V, reg r14:V, reg c44:L, reg c45:V |
    mkenv;
    st e = e;
    allow_suppress = ld allow_suppress;
    check L10() else D0();
  D0():
    deopt 0 [allow_suppress];
  L10():
    allow_suppress1 = force? allow_suppress;
    checkMissing(allow_suppress1);
    c = `as.logical`(allow_suppress1);
    if c then L11() else L0(c);
  L0(c2):
    c9 = `as.logical`(c2);
    if c9 then L17() else L2(c9);
  L11():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(c5, r1):
    r3 = `==`(r1, 2);
    c6 = `as.logical`(r3);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L2(c11):
    c18 = `as.logical`(c11);
    if c18 then L23() else L4(c18);
  L12():
    e1 = ld e;
    check L14() else D1();
  L13():
    r = dyn base(<sym e>);
    goto L1(c, r);
  L17():
    sym1 = ldf `is.call`;
    base1 = ldf `is.call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D1():
    deopt 4 [c, e1];
  L3(c14, r5):
    c15 = `as.logical`(r5);
    c16 = `&&`(c14, c15);
    goto L2(c16);
  L4(c20):
    c33 = `as.logical`(c20);
    if c33 then L31() else L7(c33);
  L14():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L15() else D2();
  L18():
    e3 = ld e;
    check L20() else D3();
  L19():
    r4 = dyn base1(<sym e>);
    goto L3(c9, r4);
  L23():
    sym2 = ldf `is.symbol`;
    base2 = ldf `is.symbol` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D2():
    deopt 7 [c, r2];
  D3():
    deopt 13 [c9, e3];
  L5(c23, r8):
    c30 = `as.logical`(r8);
    c31 = `&&`(c23, c30);
    goto L4(c31);
  L7(c35):
    popenv;
    return c35;
  L15():
    goto L1(c, r2);
  L20():
    e4 = force? e3;
    checkMissing(e4);
    is_call = ldf `is.call` in base;
    r6 = dyn is_call(e4);
    check L21() else D4();
  L24():
    e5 = ld e;
    check L26() else D5();
  L25():
    r7 = dyn base2(<lang `[[`(e, 1)>);
    goto L5(c18, r7);
  L31():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D4():
    deopt 16 [c9, r6];
  D5():
    deopt 19 [c18, e5];
  L8(c38, r11):
    r14 = `==`(r11, "dontCheck");
    c44 = `as.logical`(r14);
    c45 = `&&`(c38, c44);
    goto L7(c45);
  L21():
    goto L3(c9, r6);
  L26():
    e6 = force? e5;
    checkMissing(e6);
    c24 = `is.object`(e6);
    if c24 then L27() else L28(c18, e6);
  L32():
    e9 = ld e;
    check L34() else D6();
  L33():
    r10 = dyn base3(<lang `[[`(e, 1)>);
    goto L8(c33, r10);
  D6():
    deopt 28 [c33, e9];
  L6(c28, dx1):
    c29 = `is.symbol`(dx1);
    goto L5(c28, c29);
  L27():
    dr = tryDispatchBuiltin.1("[[", e6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(c18, dr);
  L28(c26, e8):
    __ = ldf `[[` in base;
    r9 = dyn __(e8, 1);
    goto L6(c26, r9);
  L34():
    e10 = force? e9;
    checkMissing(e10);
    c39 = `is.object`(e10);
    if c39 then L35() else L36(c33, e10);
  L9(c43, dx3):
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(dx3);
    check L38() else D7();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(c18, dx);
  L35():
    dr2 = tryDispatchBuiltin.1("[[", e10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(c33, dr2);
  L36(c41, e12):
    __1 = ldf `[[` in base;
    r12 = dyn __1(e12, 1);
    goto L9(c41, r12);
  D7():
    deopt 34 [c43, r13];
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(c33, dx2);
  L38():
    goto L8(c43, r13);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg _find_owner_env:cls, reg f1:*, reg f2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg e:*, reg e1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg baseenv:cls, reg r7:V, reg identical:cls, reg r8:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c5:L, reg r10:V, reg e2:*, reg e3:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg identical1:cls, reg r11:V, reg c6:L, reg c7:V |
    mkenv;
    st f = f;
    _find_owner_env = ldf `.find_owner_env`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
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
    r2 = dyn _find_owner_env(p, p1);
    check L5() else D1();
  D1():
    deopt 4 [r2];
  L5():
    st e = r2;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r4):
    c = `as.logical`(r4);
    if c then L2(c) else L13();
  L6():
    e = ld e;
    check L8() else D2();
  L7():
    r3 = dyn base(<sym e>, <lang baseenv()>);
    goto L0(r3);
  D2():
    deopt 8 [e];
  L2(c1):
    visible.0();
    popenv;
    return c1;
  L8():
    e1 = force? e;
    checkMissing(e1);
    sym1 = ldf baseenv;
    base1 = ldf baseenv in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L13():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L1(r6):
    identical = ldf identical in base;
    r8 = dyn identical(e1, r6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L12() else D4();
  L3(c5, r10):
    c6 = `as.logical`(r10);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L9():
    baseenv = ldf baseenv in base;
    r7 = dyn baseenv();
    check L11() else D3();
  L10():
    r5 = dyn base1();
    goto L1(r5);
  L14():
    e2 = ld e;
    check L16() else D5();
  L15():
    r9 = dyn base2(<sym e>, <sym .BaseNamespaceEnv>);
    goto L3(c, r9);
  D3():
    deopt 13 [r7];
  D4():
    deopt 22 [r8];
  D5():
    deopt 25 [c, e2];
  L11():
    goto L1(r7);
  L12():
    goto L0(r8);
  L16():
    e3 = force? e2;
    checkMissing(e3);
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L17() else D6();
  D6():
    deopt 27 [c, _BaseNamespaceEnv];
  L17():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    identical1 = ldf identical in base;
    r11 = dyn identical1(e3, _BaseNamespaceEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L18() else D7();
  D7():
    deopt 37 [c, r11];
  L18():
    goto L3(c, r11);
  }
}
fun inner3220806625(e, fr) {
  (reg e:*, reg fr:*) -+> V { var e:*, var fr:*, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg deparse:cls, reg sym:*, reg sym1:V, reg p:p(V +), reg r2:V, reg name:*, reg name1:V, reg r3:V, reg c1:L, reg sym2:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg sym3:*, reg sym4:V, reg c2:L, reg c3:L, reg have_registration:*, reg have_registration1:V, reg r8:V, reg c4:L, reg sym5:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg e5:*, reg e6:V, reg c5:L, reg e8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r13:V, reg as_character:cls, reg r14:V, reg reg:*, reg reg1:V, reg c6:L, reg reg3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg FF_fun:*, reg FF_fun1:V, reg __2:cls, reg r15:V, reg c7:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg sym6:*, reg sym7:V, reg __3:cls, reg r16:V, reg sym8:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg sym9:*, reg sym10:V, reg c8:V, reg c9:L, reg is_installed:*, reg is_installed1:V, reg r22:V, reg c10:L, reg is_installed_msg:*, reg is_installed_msg1:V, reg r23:V, reg c11:L, reg sym11:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg other_problem:*, reg other_problem1:V, reg e9:*, reg e10:V, reg c12:cls, reg r26:V, reg sym12:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg other_desc:*, reg other_desc1:V, reg c13:cls, reg r29:V, reg sym13:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg sym14:*, reg sym15:V, reg c14:L, reg c15:L, reg exists:cls, reg name2:*, reg name3:V, reg p1:p(V +), reg code_env:*, reg code_env1:V, reg p2:p(V +), reg r37:V, reg r38:V, reg c16:L, reg allow_suppress:*, reg allow_suppress1:V, reg c17:L, reg c19:V, reg _in_:cls, reg name4:*, reg name5:V, reg p3:p(V +), reg __4:cls, reg r40:V, reg r41:cls, reg package:*, reg package1:V, reg p4:p(V +), reg r43:V, reg p5:p(V +), reg r45:V, reg c20:L, reg c21:V, reg c23:L, reg have_registration2:*, reg have_registration3:V, reg c24:L, reg _in_1:cls, reg name6:*, reg name7:V, reg p6:p(V +), reg fr1:*, reg fr2:V, reg p7:p(V +), reg r50:V, reg c25:L, reg sym16:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg other_problem2:*, reg other_problem3:V, reg e11:*, reg e12:V, reg c26:cls, reg r53:V, reg sym17:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg other_desc2:*, reg other_desc3:V, reg sprintf:cls, reg sQuote:cls, reg name8:*, reg name9:V, reg p8:p(V +), reg r57:V, reg p9:p(V +), reg r59:V, reg c27:cls, reg r60:V, reg r61:V, reg sym18:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg other_problem4:*, reg other_problem5:V, reg e13:*, reg e14:V, reg c28:cls, reg r64:V, reg sym19:cls, reg base9:cls, reg guard9:L, reg r65:V, reg r66:V, reg other_desc4:*, reg other_desc5:V, reg sprintf1:cls, reg sQuote1:cls, reg name10:*, reg name11:V, reg p10:p(V +), reg r68:V, reg p11:p(V +), reg r70:V, reg c29:cls, reg r71:V, reg suppressCheck:cls, reg sym20:*, reg sym21:V, reg p12:p(V +), reg r77:V, reg c30:L, reg tryCatch:cls, reg eval:cls, reg sym22:*, reg sym23:V, reg p13:p(V +), reg code_env2:*, reg code_env3:V, reg p14:p(V +), reg r81:V, reg p15:p(V +), reg r83:cls, reg p16:p(V +), reg r85:V, reg sym24:cls, reg base10:cls, reg guard10:L, reg r86:V, reg r87:V, reg sym25:*, reg sym26:V, reg inherits:cls, reg r88:V, reg c31:L, reg have_registration4:*, reg have_registration5:V, reg c32:L, reg c33:V, reg allow_suppress2:*, reg allow_suppress3:V, reg r89:V, reg c35:L, reg c36:V, reg c38:L, reg sym27:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg other_problem6:*, reg other_problem7:V, reg e15:*, reg e16:V, reg c39:cls, reg r92:V, reg sym28:cls, reg base12:cls, reg guard12:L, reg r93:V, reg r94:V, reg other_desc6:*, reg other_desc7:V, reg sprintf2:cls, reg sQuote2:cls, reg name12:*, reg name13:V, reg p17:p(V +), reg r96:V, reg p18:p(V +), reg sQuote3:cls, reg sym29:*, reg sym30:V, reg c40:L, reg sym32:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r98:V, reg p19:p(V +), reg r100:V, reg p20:p(V +), reg r102:V, reg c41:cls, reg r103:V, reg sym33:cls, reg base13:cls, reg guard13:L, reg r107:V, reg r108:V, reg e17:*, reg e18:V, reg c42:L, reg e20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r109:V, reg as_character1:cls, reg r110:V, reg sym34:cls, reg base14:cls, reg guard14:L, reg r111:V, reg r112:V, reg sym35:*, reg sym36:V, reg c43:L, reg c44:L, reg have_registration6:*, reg have_registration7:V, reg r113:V, reg c45:L, reg reg4:*, reg reg5:V, reg c46:L, reg reg7:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg FF_fun2:*, reg FF_fun3:V, reg __6:cls, reg r116:V, reg c47:L, reg dx17:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg sym37:*, reg sym38:V, reg __7:cls, reg r117:V, reg sym39:cls, reg base15:cls, reg guard15:L, reg r118:V, reg r119:V, reg sym40:*, reg sym41:V, reg c48:V, reg c49:L, reg sym42:cls, reg base16:cls, reg guard16:L, reg r123:V, reg r124:V, reg sym43:*, reg sym44:V, reg inherits1:cls, reg r125:V, reg c50:L, reg c51:V, reg sym45:cls, reg base17:cls, reg guard17:L, reg r126:V, reg c55:L, reg r127:V, reg sym46:*, reg sym47:V, reg inherits2:cls, reg r128:V, reg c56:L, reg c57:V, reg c59:L, reg sym48:cls, reg base18:cls, reg guard18:L, reg r131:V, reg r132:V, reg sym49:*, reg sym50:V, reg inherits3:cls, reg r133:V, reg r134:V, reg c60:L, reg sym51:cls, reg base19:cls, reg guard19:L, reg r135:V, reg r136:V, reg other_problem8:*, reg other_problem9:V, reg e21:*, reg e22:V, reg c61:cls, reg r137:V, reg sym52:cls, reg base20:cls, reg guard20:L, reg r138:V, reg r139:V, reg other_desc8:*, reg other_desc9:V, reg sprintf3:cls, reg sQuote4:cls, reg name14:*, reg name15:V, reg p21:p(V +), reg r141:V, reg p22:p(V +), reg sym53:cls, reg base21:cls, reg guard21:L, reg r143:V, reg r144:V, reg sym54:*, reg sym55:V, reg class:cls, reg r145:V, reg p23:p(V +), reg r147:V, reg c62:cls, reg r148:V, reg sym56:cls, reg base22:cls, reg guard22:L, reg r151:V, reg r152:V, reg sym57:*, reg sym58:V, reg c63:L, reg sym60:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r153:V, reg unclass:cls, reg r154:V, reg c64:L, reg r156:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r157:V, reg sym61:cls, reg base23:cls, reg guard23:L, reg r158:V, reg r159:V, reg parg:*, reg parg1:V, reg length:cls, reg r160:V, reg r161:V, reg c65:L, reg c67:V, reg _notin_:cls, reg parg2:*, reg parg3:V, reg p24:p(V +), reg sym62:cls, reg base24:cls, reg guard24:L, reg r163:V, reg r164:V, reg pkgDLL:*, reg pkgDLL1:V, reg c68:cls, reg r165:V, reg p25:p(V +), reg r167:V, reg c69:L, reg c70:V, reg c72:L, reg sym63:cls, reg base25:cls, reg guard25:L, reg r168:V, reg r169:V, reg wrong_pkg:*, reg wrong_pkg1:V, reg e23:*, reg e24:V, reg c73:cls, reg r170:V, reg sym64:cls, reg base26:cls, reg guard26:L, reg r171:V, reg r172:V, reg bad_pkg:*, reg bad_pkg1:V, reg parg4:*, reg parg5:V, reg c74:cls, reg r173:V, reg sym65:*, reg sym66:V, reg c75:L, reg sym68:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r175:V, reg sym69:cls, reg base27:cls, reg guard27:L, reg r176:V, reg r177:V, reg numparms:*, reg numparms1:V, reg length1:cls, reg r178:V, reg c76:L, reg c78:V, reg numparms2:*, reg numparms3:V, reg r179:V, reg c79:L, reg c80:V, reg c82:L, reg sym70:cls, reg base28:cls, reg guard28:L, reg r180:V, reg r181:V, reg sym71:cls, reg base29:cls, reg guard29:L, reg r182:V, reg r183:V, reg e25:*, reg e26:V, reg as_character2:cls, reg r184:V, reg r185:V, reg any:cls, reg r186:V, reg c83:L, reg sym72:cls, reg base30:cls, reg guard30:L, reg r187:V, reg r188:V, reg other_problem10:*, reg other_problem11:V, reg e27:*, reg e28:V, reg c84:cls, reg r189:V, reg sym73:cls, reg base31:cls, reg guard31:L, reg r190:V, reg r191:V, reg other_desc10:*, reg other_desc11:V, reg sprintf4:cls, reg numparms4:*, reg numparms5:V, reg p26:p(V +), reg numparms6:*, reg numparms7:V, reg r193:V, reg c85:L, reg p27:p(V +), reg r195:V, reg c86:cls, reg r196:V, reg r197:V, reg sym74:cls, reg base32:cls, reg guard32:L, reg r198:V, reg r199:V, reg e29:*, reg e30:V, reg length2:cls, reg r200:V, reg r201:V, reg _in_2:cls, reg sym75:cls, reg base33:cls, reg guard33:L, reg r202:V, reg r203:V, reg e31:*, reg e32:V, reg names:cls, reg r204:V, reg p28:p(V +), reg r206:V, reg c87:L, reg callparms:*, reg callparms1:V, reg r207:V, reg _in_3:cls, reg FF_fun4:*, reg FF_fun5:V, reg p29:p(V +), reg sym76:cls, reg base34:cls, reg guard34:L, reg r210:V, reg r211:V, reg c88:cls, reg r212:V, reg p30:p(V +), reg r214:V, reg c89:L, reg callparms2:*, reg callparms3:V, reg sym77:cls, reg base35:cls, reg guard35:L, reg r215:V, reg callparms6:V, reg r216:V, reg intersect:cls, reg sym78:cls, reg base36:cls, reg guard36:L, reg r217:V, reg r218:V, reg e33:*, reg e34:V, reg names1:cls, reg r219:V, reg p31:p(V +), reg sym79:cls, reg base37:cls, reg guard37:L, reg r221:V, reg r222:V, reg c90:cls, reg r223:V, reg p32:p(V +), reg r225:V, reg length3:cls, reg r226:V, reg r227:V, reg sym80:cls, reg base38:cls, reg guard38:L, reg r229:V, reg r230:V, reg numparms8:*, reg numparms9:V, reg c91:V, reg r231:V, reg c92:L, reg c94:V, reg numparms10:*, reg numparms11:V, reg r232:V, reg c95:L, reg c96:V, reg c98:L, reg c100:V, reg numparms12:*, reg numparms13:V, reg callparms7:*, reg callparms8:V, reg r233:V, reg c101:L, reg c102:V, reg c104:L, reg sym81:cls, reg base39:cls, reg guard39:L, reg r234:V, reg r235:V, reg other_problem12:*, reg other_problem13:V, reg e35:*, reg e36:V, reg c105:cls, reg r236:V, reg sym82:cls, reg base40:cls, reg guard40:L, reg r237:V, reg r238:V, reg other_desc12:*, reg other_desc13:V, reg sprintf5:cls, reg sQuote5:cls, reg name16:*, reg name17:V, reg p33:p(V +), reg r240:V, reg p34:p(V +), reg callparms9:*, reg callparms10:V, reg p35:p(V +), reg callparms11:*, reg callparms12:V, reg r243:V, reg c106:L, reg p36:p(V +), reg numparms14:*, reg numparms15:V, reg p37:p(V +), reg r246:V, reg c107:cls, reg r247:V, reg sym83:cls, reg base41:cls, reg guard41:L, reg r250:V, reg r251:V, reg sym84:*, reg sym85:V, reg inherits4:cls, reg r252:V, reg c108:L, reg c110:V, reg _notin_1:cls, reg FF_fun6:*, reg FF_fun7:V, reg p38:p(V +), reg sym86:cls, reg base42:cls, reg guard42:L, reg r254:V, reg r255:V, reg c111:cls, reg r256:V, reg p39:p(V +), reg r258:V, reg c112:L, reg c113:V, reg c115:L, reg sym87:cls, reg base43:cls, reg guard43:L, reg r259:V, reg r260:V, reg other_problem14:*, reg other_problem15:V, reg e37:*, reg e38:V, reg c116:cls, reg r261:V, reg sym88:cls, reg base44:cls, reg guard44:L, reg r262:V, reg r263:V, reg other_desc14:*, reg other_desc15:V, reg sprintf6:cls, reg sQuote6:cls, reg name18:*, reg name19:V, reg p40:p(V +), reg r265:V, reg p41:p(V +), reg FF_fun8:*, reg FF_fun9:V, reg p42:p(V +), reg r268:V, reg c117:cls, reg r269:V, reg sym89:cls, reg base45:cls, reg guard45:L, reg r272:V, reg r273:V, reg sym90:*, reg sym91:V, reg inherits5:cls, reg r274:V, reg c118:L, reg c120:V, reg _in_4:cls, reg FF_fun10:*, reg FF_fun11:V, reg p43:p(V +), reg sym92:cls, reg base46:cls, reg guard46:L, reg r276:V, reg r277:V, reg c121:cls, reg r278:V, reg p44:p(V +), reg r280:V, reg r281:V, reg c122:L, reg c123:V, reg c125:L, reg sym93:cls, reg base47:cls, reg guard47:L, reg r282:V, reg r283:V, reg other_problem16:*, reg other_problem17:V, reg e39:*, reg e40:V, reg c126:cls, reg r284:V, reg sym94:cls, reg base48:cls, reg guard48:L, reg r285:V, reg r286:V, reg other_desc16:*, reg other_desc17:V, reg sprintf7:cls, reg sQuote7:cls, reg name20:*, reg name21:V, reg p45:p(V +), reg r288:V, reg p46:p(V +), reg FF_fun12:*, reg FF_fun13:V, reg p47:p(V +), reg r291:V, reg c127:cls, reg r292:V |
    mkenv;
    st e = e;
    st fr = fr;
    e1 = ld e;
    check L109() else D0();
  D0():
    deopt 0 [e1];
  L109():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L110() else L111(e2);
  L0(dx1):
    st sym = dx1;
    deparse = ldf deparse;
    check L113() else D1();
  L110():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L112() else L111(dr);
  L111(e4):
    __ = ldf `[[` in base;
    r = dyn __(e4, 2);
    goto L0(r);
  D1():
    deopt 7 [];
  L112():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L113():
    p = prom<V +>{
      sym = ld sym;
      sym1 = force? sym;
      checkMissing(sym1);
      return sym1;
    };
    r2 = dyn deparse[, nlines](p, 1);
    check L114() else D2();
  D2():
    deopt 11 [r2];
  L114():
    st name = r2;
    name = ld name;
    check L115() else D3();
  D3():
    deopt 13 [name];
  L115():
    name1 = force? name;
    checkMissing(name1);
    r3 = `==`(name1, "...");
    c1 = `as.logical`(r3);
    if c1 then L116() else L1();
  L1():
    sym2 = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym2, base);
    if guard then L119() else L120();
  L116():
    popenv;
    return "SYMBOL OK";
  L3(r7):
    c3 = `as.logical`(r7);
    if c3 then L122() else L4();
  L119():
    sym3 = ld sym;
    check L121() else D4();
  L120():
    r6 = dyn base(<sym sym>);
    goto L3(r6);
  D4():
    deopt 23 [sym3];
  L4():
    goto L14();
  L14():
    is_installed = ld is_installed;
    check L150() else D12();
  L121():
    sym4 = force? sym3;
    checkMissing(sym4);
    c2 = `is.character`(sym4);
    goto L3(c2);
  L122():
    have_registration = ld have_registration;
    check L123() else D5();
  D5():
    deopt 26 [have_registration];
  D12():
    deopt 64 [is_installed];
  L123():
    have_registration1 = force? have_registration;
    checkMissing(have_registration1);
    r8 = `!`(have_registration1);
    c4 = `as.logical`(r8);
    if c4 then L124() else L5();
  L150():
    is_installed1 = force? is_installed;
    checkMissing(is_installed1);
    r22 = `!`(is_installed1);
    c10 = `as.logical`(r22);
    if c10 then L151() else L15();
  L5():
    sym5 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym5, base1);
    if guard1 then L127() else L128();
  L15():
    sym13 = ldf `is.symbol`;
    base5 = ldf `is.symbol` in base;
    guard5 = `==`.4(sym13, base5);
    if guard5 then L166() else L167();
  L124():
    popenv;
    return "SYMBOL OK";
  L151():
    is_installed_msg = ld is_installed_msg;
    check L152() else D13();
  D13():
    deopt 67 [is_installed_msg];
  L7(r12):
    st FF_fun = r12;
    reg = ld reg;
    check L134() else D8();
  L21(r34):
    c15 = `as.logical`(r34);
    if c15 then L169() else L22();
  L127():
    e5 = ld e;
    check L129() else D6();
  L128():
    r11 = dyn base1(<lang `[[`(e, 1)>);
    goto L7(r11);
  L152():
    is_installed_msg1 = force? is_installed_msg;
    checkMissing(is_installed_msg1);
    r23 = `!`(is_installed_msg1);
    c11 = `as.logical`(r23);
    if c11 then L153() else L16();
  L166():
    sym14 = ld sym;
    check L168() else D19();
  L167():
    r33 = dyn base5(<sym sym>);
    goto L21(r33);
  D6():
    deopt 36 [e5];
  D8():
    deopt 44 [reg];
  D19():
    deopt 98 [sym14];
  L16():
    goto L19();
  L19():
    popenv;
    return "OTHER";
  L22():
    suppressCheck = ldf suppressCheck;
    check L213() else D42();
  L36():
    tryCatch = ldf tryCatch;
    check L218() else D44();
  L129():
    e6 = force? e5;
    checkMissing(e6);
    c5 = `is.object`(e6);
    if c5 then L130() else L131(e6);
  L134():
    reg1 = force? reg;
    checkMissing(reg1);
    c6 = `is.object`(reg1);
    if c6 then L135() else L136(reg1);
  L153():
    sym11 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym11, base3);
    if guard3 then L154() else L155();
  L168():
    sym15 = force? sym14;
    checkMissing(sym15);
    c14 = `is.symbol`(sym15);
    goto L21(c14);
  L169():
    exists = ldf exists;
    check L170() else D20();
  D20():
    deopt 102 [];
  D42():
    deopt 179 [];
  D44():
    deopt 188 [];
  L8(dx3):
    as_character = ldf `as.character` in base;
    r14 = dyn as_character(dx3);
    check L133() else D7();
  L9(dx5):
    c7 = `is.object`(dx5);
    if c7 then L139() else L140(dx5);
  L17(r25):
    sst other_problem = r25;
    sym12 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym12, base4);
    if guard4 then L159() else L160();
  L130():
    dr2 = tryDispatchBuiltin.1("[[", e6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L132() else L131(dr2);
  L131(e8):
    __1 = ldf `[[` in base;
    r13 = dyn __1(e8, 1);
    goto L8(r13);
  L135():
    dr4 = tryDispatchBuiltin.1("[[", reg1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L137() else L136(dr4);
  L136(reg3):
    FF_fun = ld FF_fun;
    check L138() else D9();
  L154():
    other_problem = ld other_problem;
    check L156() else D14();
  L155():
    r24 = dyn base3(<sym other_problem>, <sym e>);
    goto L17(r24);
  L170():
    p1 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    p2 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r37 = dyn exists[, , inherits](p1, p2, FALSE);
    check L171() else D21();
  L213():
    p12 = prom<V +>{
      sym20 = ld sym;
      sym21 = force? sym20;
      checkMissing(sym21);
      return sym21;
    };
    r77 = dyn suppressCheck(p12);
    check L214() else D43();
  L218():
    p15 = prom<V +>{
      eval = ldf eval;
      p13 = prom<V +>{
        sym22 = ld sym;
        sym23 = force? sym22;
        checkMissing(sym23);
        return sym23;
      };
      p14 = prom<V +>{
        code_env2 = ld code_env;
        code_env3 = force? code_env2;
        checkMissing(code_env3);
        return code_env3;
      };
      r81 = dyn eval(p13, p14);
      return r81;
    };
    p16 = prom<V +>{
      r83 = clos inner3708401697;
      return r83;
    };
    r85 = dyn tryCatch[, error](p15, p16);
    check L219() else D45();
  D7():
    deopt 42 [r14];
  D9():
    deopt 46 [reg3, FF_fun];
  D14():
    deopt 72 [other_problem];
  D21():
    deopt 107 [r37];
  D43():
    deopt 181 [r77];
  D45():
    deopt 192 [r85];
  L10(dx9):
    st sym = dx9;
    sym8 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym8, base2);
    if guard2 then L143() else L144();
  L18(r28):
    sst other_desc = r28;
    sst is_installed_msg = TRUE;
    goto L19();
  L132():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L133():
    goto L7(r14);
  L137():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L138():
    FF_fun1 = force? FF_fun;
    __2 = ldf `[[` in base;
    r15 = dyn __2(reg3, FF_fun1);
    goto L9(r15);
  L139():
    dr6 = tryDispatchBuiltin.1("[[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L141() else L140(dr6);
  L140(dx7):
    sym6 = ld sym;
    check L142() else D10();
  L156():
    other_problem1 = force? other_problem;
    checkMissing(other_problem1);
    e9 = ld e;
    check L157() else D15();
  L159():
    other_desc = ld other_desc;
    check L161() else D17();
  L160():
    r27 = dyn base4(<sym other_desc>, "foreign function registration not tested, as package was not installed");
    goto L18(r27);
  L171():
    r38 = `!`(r37);
    c16 = `as.logical`(r38);
    if c16 then L172() else L23();
  L214():
    c30 = `as.logical`(r77);
    if c30 then L215() else L37();
  L219():
    st sym = r85;
    sym24 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym24, base10);
    if guard10 then L220() else L221();
  D10():
    deopt 49 [dx7, sym6];
  D15():
    deopt 74 [e9];
  D17():
    deopt 81 [other_desc];
  L11(r18):
    c9 = `as.logical`(r18);
    if c9 then L146() else L12();
  L23():
    goto L36();
  L37():
    goto L36();
  L38(r87):
    c31 = `as.logical`(r87);
    if c31 then L224() else L39();
  L141():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx8);
  L142():
    sym7 = force? sym6;
    __3 = ldf `[[` in base;
    r16 = dyn __3(dx7, sym7);
    goto L10(r16);
  L143():
    sym9 = ld sym;
    check L145() else D11();
  L144():
    r17 = dyn base2(<sym sym>);
    goto L11(r17);
  L157():
    e10 = force? e9;
    checkMissing(e10);
    c12 = ldf c in base;
    r26 = dyn c12(other_problem1, e10);
    check L158() else D16();
  L161():
    other_desc1 = force? other_desc;
    checkMissing(other_desc1);
    c13 = ldf c in base;
    r29 = dyn c13(other_desc1, "foreign function registration not tested, as package was not installed");
    check L162() else D18();
  L172():
    allow_suppress = ld allow_suppress;
    check L173() else D22();
  L215():
    popenv;
    return "SKIPPED";
  L220():
    sym25 = ld sym;
    check L222() else D46();
  L221():
    r86 = dyn base10(<sym sym>, "error");
    goto L38(r86);
  D11():
    deopt 54 [sym9];
  D16():
    deopt 77 [r26];
  D18():
    deopt 85 [r29];
  D22():
    deopt 109 [allow_suppress];
  D46():
    deopt 196 [sym25];
  L12():
    goto L14();
  L39():
    sym33 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym33, base13);
    if guard13 then L244() else L245();
  L145():
    sym10 = force? sym9;
    checkMissing(sym10);
    c8 = `==`(sym10, NULL);
    goto L11(c8);
  L146():
    popenv;
    return "SYMBOL OK";
  L158():
    goto L17(r26);
  L162():
    goto L18(r29);
  L173():
    allow_suppress1 = force? allow_suppress;
    checkMissing(allow_suppress1);
    c17 = `as.logical`(allow_suppress1);
    if c17 then L174() else L24(c17);
  L222():
    sym26 = force? sym25;
    checkMissing(sym26);
    inherits = ldf inherits in base;
    r88 = dyn inherits(sym26, "error", FALSE);
    check L223() else D47();
  L224():
    have_registration4 = ld have_registration;
    check L225() else D48();
  D47():
    deopt 201 [r88];
  D48():
    deopt 202 [have_registration4];
  L24(c19):
    c23 = `as.logical`(c19);
    if c23 then L178() else L25();
  L46(r108):
    st FF_fun = r108;
    sym34 = ldf `is.character`;
    base14 = ldf `is.character` in base;
    guard14 = `==`.4(sym34, base14);
    if guard14 then L251() else L252();
  L174():
    _in_ = ldf `%in%`;
    check L175() else D23();
  L223():
    goto L38(r88);
  L225():
    have_registration5 = force? have_registration4;
    checkMissing(have_registration5);
    c32 = `as.logical`(have_registration5);
    if c32 then L40(c32) else L226();
  L244():
    e17 = ld e;
    check L246() else D57();
  L245():
    r107 = dyn base13(<lang `[[`(e, 1)>);
    goto L46(r107);
  D23():
    deopt 112 [c17];
  D57():
    deopt 239 [e17];
  L25():
    have_registration2 = ld have_registration;
    check L181() else D25();
  L40(c33):
    c38 = `as.logical`(c33);
    if c38 then L229() else L41();
  L48(r112):
    c44 = `as.logical`(r112);
    if c44 then L254() else L49();
  L175():
    p3 = prom<V +>{
      name4 = ld name;
      name5 = force? name4;
      checkMissing(name5);
      return name5;
    };
    p5 = prom<V +>{
      __4 = ldf `::`;
      r40 = dyn __4("utils", "suppressForeignCheck");
      checkFun.0(r40);
      r41 = r40 as cls;
      p4 = prom<V +>{
        package = ld package;
        package1 = force? package;
        checkMissing(package1);
        return package1;
      };
      r43 = dyn r41(<missing>, p4);
      return r43;
    };
    r45 = dyn _in_(p3, p5);
    check L176() else D24();
  L178():
    popenv;
    return "SYMBOL OK";
  L226():
    allow_suppress2 = ld allow_suppress;
    check L227() else D49();
  L246():
    e18 = force? e17;
    checkMissing(e18);
    c42 = `is.object`(e18);
    if c42 then L247() else L248(e18);
  L251():
    sym35 = ld sym;
    check L253() else D59();
  L252():
    r111 = dyn base14(<sym sym>);
    goto L48(r111);
  D24():
    deopt 115 [c17, r45];
  D25():
    deopt 122 [have_registration2];
  D49():
    deopt 204 [c32, allow_suppress2];
  D59():
    deopt 248 [sym35];
  L41():
    goto L44();
  L44():
    popenv;
    return "OTHER";
  L47(dx13):
    as_character1 = ldf `as.character` in base;
    r110 = dyn as_character1(dx13);
    check L250() else D58();
  L49():
    goto L57();
  L57():
    sym42 = ldf inherits;
    base16 = ldf inherits in base;
    guard16 = `==`.4(sym42, base16);
    if guard16 then L275() else L276();
  L176():
    c20 = `as.logical`(r45);
    c21 = `&&`(c17, c20);
    goto L24(c21);
  L181():
    have_registration3 = force? have_registration2;
    checkMissing(have_registration3);
    c24 = `as.logical`(have_registration3);
    if c24 then L182() else L27();
  L227():
    allow_suppress3 = force? allow_suppress2;
    checkMissing(allow_suppress3);
    r89 = `!`(allow_suppress3);
    c35 = `as.logical`(r89);
    c36 = `||`(c32, c35);
    goto L40(c36);
  L229():
    sym27 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym27, base11);
    if guard11 then L230() else L231();
  L247():
    dr10 = tryDispatchBuiltin.1("[[", e18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L249() else L248(dr10);
  L248(e20):
    __5 = ldf `[[` in base;
    r109 = dyn __5(e20, 1);
    goto L47(r109);
  L253():
    sym36 = force? sym35;
    checkMissing(sym36);
    c43 = `is.character`(sym36);
    goto L48(c43);
  L254():
    have_registration6 = ld have_registration;
    check L255() else D60();
  D58():
    deopt 245 [r110];
  D60():
    deopt 251 [have_registration6];
  L27():
    goto L34();
  L34():
    popenv;
    return "OTHER";
  L42(r91):
    sst other_problem = r91;
    sym28 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym28, base12);
    if guard12 then L235() else L236();
  L58(r124):
    c50 = `as.logical`(r124);
    if c50 then L59(c50) else L279();
  L182():
    _in_1 = ldf `%in%`;
    check L183() else D26();
  L230():
    other_problem6 = ld other_problem;
    check L232() else D50();
  L231():
    r90 = dyn base11(<sym other_problem>, <sym e>);
    goto L42(r90);
  L249():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L47(dx12);
  L250():
    goto L46(r110);
  L255():
    have_registration7 = force? have_registration6;
    checkMissing(have_registration7);
    r113 = `!`(have_registration7);
    c45 = `as.logical`(r113);
    if c45 then L256() else L50();
  L275():
    sym43 = ld sym;
    check L277() else D65();
  L276():
    r123 = dyn base16(<sym sym>, "RegisteredNativeSymbol");
    goto L58(r123);
  D26():
    deopt 125 [];
  D50():
    deopt 210 [other_problem6];
  D65():
    deopt 281 [sym43];
  L43(r94):
    sst other_desc = r94;
    goto L44();
  L50():
    reg4 = ld reg;
    check L259() else D61();
  L59(c51):
    c59 = `as.logical`(c51);
    if c59 then L285() else L61();
  L183():
    p6 = prom<V +>{
      name6 = ld name;
      name7 = force? name6;
      checkMissing(name7);
      return name7;
    };
    p7 = prom<V +>{
      fr1 = ld fr;
      fr2 = force? fr1;
      checkMissing(fr2);
      return fr2;
    };
    r50 = dyn _in_1(p6, p7);
    check L184() else D27();
  L232():
    other_problem7 = force? other_problem6;
    checkMissing(other_problem7);
    e15 = ld e;
    check L233() else D51();
  L235():
    other_desc6 = ld other_desc;
    check L237() else D53();
  L236():
    r93 = dyn base12(<sym other_desc>, <lang sprintf("Evaluating %s during check gives error\n%s", sQuote(name), sQuote(`$`(sym, message)))>);
    goto L43(r93);
  L256():
    popenv;
    return "SYMBOL OK";
  L277():
    sym44 = force? sym43;
    checkMissing(sym44);
    inherits1 = ldf inherits in base;
    r125 = dyn inherits1(sym44, "RegisteredNativeSymbol", FALSE);
    check L278() else D66();
  L279():
    sym45 = ldf inherits;
    base17 = ldf inherits in base;
    guard17 = `==`.4(sym45, base17);
    if guard17 then L280() else L281();
  D27():
    deopt 128 [r50];
  D51():
    deopt 212 [e15];
  D53():
    deopt 219 [other_desc6];
  D61():
    deopt 259 [reg4];
  D66():
    deopt 286 [r125];
  L60(c55, r127):
    c56 = `as.logical`(r127);
    c57 = `||`(c55, c56);
    goto L59(c57);
  L61():
    sym48 = ldf inherits;
    base18 = ldf inherits in base;
    guard18 = `==`.4(sym48, base18);
    if guard18 then L288() else L289();
  L184():
    c25 = `as.logical`(r50);
    if c25 then L185() else L28();
  L233():
    e16 = force? e15;
    checkMissing(e16);
    c39 = ldf c in base;
    r92 = dyn c39(other_problem7, e16);
    check L234() else D52();
  L237():
    other_desc7 = force? other_desc6;
    checkMissing(other_desc7);
    sprintf2 = ldf sprintf;
    check L238() else D54();
  L259():
    reg5 = force? reg4;
    checkMissing(reg5);
    c46 = `is.object`(reg5);
    if c46 then L260() else L261(reg5);
  L278():
    goto L58(r125);
  L280():
    sym46 = ld sym;
    check L282() else D67();
  L281():
    r126 = dyn base17(<sym sym>, "NativeSymbol");
    goto L60(c50, r126);
  L285():
    popenv;
    return "SYMBOL OK";
  D52():
    deopt 215 [r92];
  D54():
    deopt 222 [];
  D67():
    deopt 289 [c50, sym46];
  L28():
    sym18 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym18, base8);
    if guard8 then L198() else L199();
  L31(r61):
    goto L34();
  L52(dx15):
    c47 = `is.object`(dx15);
    if c47 then L264() else L265(dx15);
  L63(r132):
    r134 = `!`(r132);
    c60 = `as.logical`(r134);
    if c60 then L292() else L64();
  L185():
    sym16 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym16, base6);
    if guard6 then L186() else L187();
  L234():
    goto L42(r92);
  L238():
    p18 = prom<V +>{
      sQuote2 = ldf sQuote;
      p17 = prom<V +>{
        name12 = ld name;
        name13 = force? name12;
        checkMissing(name13);
        return name13;
      };
      r96 = dyn sQuote2(p17);
      return r96;
    };
    p20 = prom<V +>{
      sQuote3 = ldf sQuote;
      p19 = prom<V +>{
        sym29 = ld sym;
        sym30 = force? sym29;
        checkMissing(sym30);
        c40 = `is.object`(sym30);
        if c40 then L1() else L2(sym30);
      L0(dx11):
        return dx11;
      L1():
        dr8 = tryDispatchBuiltin.1("$", sym30);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(sym32):
        r98 = `$`(sym32, <sym message>);
        goto L0(r98);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx10);
      };
      r100 = dyn sQuote3(p19);
      return r100;
    };
    r102 = dyn sprintf2("Evaluating %s during check gives error\n%s", p18, p20);
    check L239() else D55();
  L260():
    dr12 = tryDispatchBuiltin.1("[[", reg5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L262() else L261(dr12);
  L261(reg7):
    FF_fun2 = ld FF_fun;
    check L263() else D62();
  L282():
    sym47 = force? sym46;
    checkMissing(sym47);
    inherits2 = ldf inherits in base;
    r128 = dyn inherits2(sym47, "NativeSymbol", FALSE);
    check L283() else D68();
  L288():
    sym49 = ld sym;
    check L290() else D69();
  L289():
    r131 = dyn base18(<sym sym>, "NativeSymbolInfo");
    goto L63(r131);
  D55():
    deopt 226 [r102];
  D62():
    deopt 261 [reg7, FF_fun2];
  D68():
    deopt 294 [c50, r128];
  D69():
    deopt 303 [sym49];
  L29(r52):
    sst other_problem = r52;
    sym17 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym17, base7);
    if guard7 then L191() else L192();
  L32(r63):
    sst other_problem = r63;
    sym19 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym19, base9);
    if guard9 then L203() else L204();
  L53(dx19):
    st sym = dx19;
    sym39 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym39, base15);
    if guard15 then L268() else L269();
  L64():
    sym56 = ldf unclass;
    base22 = ldf unclass in base;
    guard22 = `==`.4(sym56, base22);
    if guard22 then L306() else L307();
  L186():
    other_problem2 = ld other_problem;
    check L188() else D28();
  L187():
    r51 = dyn base6(<sym other_problem>, <sym e>);
    goto L29(r51);
  L198():
    other_problem4 = ld other_problem;
    check L200() else D35();
  L199():
    r62 = dyn base8(<sym other_problem>, <sym e>);
    goto L32(r62);
  L239():
    c41 = ldf c in base;
    r103 = dyn c41(other_desc7, r102);
    check L240() else D56();
  L262():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L52(dx14);
  L263():
    FF_fun3 = force? FF_fun2;
    __6 = ldf `[[` in base;
    r116 = dyn __6(reg7, FF_fun3);
    goto L52(r116);
  L264():
    dr14 = tryDispatchBuiltin.1("[[", dx15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L266() else L265(dr14);
  L265(dx17):
    sym37 = ld sym;
    check L267() else D63();
  L283():
    goto L60(c50, r128);
  L290():
    sym50 = force? sym49;
    checkMissing(sym50);
    inherits3 = ldf inherits in base;
    r133 = dyn inherits3(sym50, "NativeSymbolInfo", FALSE);
    check L291() else D70();
  L292():
    sym51 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym51, base19);
    if guard19 then L293() else L294();
  D28():
    deopt 131 [other_problem2];
  D35():
    deopt 152 [other_problem4];
  D56():
    deopt 228 [r103];
  D63():
    deopt 264 [dx17, sym37];
  D70():
    deopt 308 [r133];
  L30(r55):
    sst other_desc = r55;
    goto L31(r55);
  L33(r66):
    sst other_desc = r66;
    goto L31(r66);
  L54(r119):
    c49 = `as.logical`(r119);
    if c49 then L271() else L55();
  L65(r136):
    sst other_problem = r136;
    sym52 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym52, base20);
    if guard20 then L298() else L299();
  L68(r152):
    c64 = `is.object`(r152);
    if c64 then L315() else L316(r152);
  L188():
    other_problem3 = force? other_problem2;
    checkMissing(other_problem3);
    e11 = ld e;
    check L189() else D29();
  L191():
    other_desc2 = ld other_desc;
    check L193() else D31();
  L192():
    r54 = dyn base7(<sym other_desc>, <lang sprintf("symbol %s in the local frame", sQuote(name))>);
    goto L30(r54);
  L200():
    other_problem5 = force? other_problem4;
    checkMissing(other_problem5);
    e13 = ld e;
    check L201() else D36();
  L203():
    other_desc4 = ld other_desc;
    check L205() else D38();
  L204():
    r65 = dyn base9(<sym other_desc>, <lang sprintf("symbol %s not in namespace", sQuote(name))>);
    goto L33(r65);
  L240():
    goto L43(r103);
  L266():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L53(dx18);
  L267():
    sym38 = force? sym37;
    __7 = ldf `[[` in base;
    r117 = dyn __7(dx17, sym38);
    goto L53(r117);
  L268():
    sym40 = ld sym;
    check L270() else D64();
  L269():
    r118 = dyn base15(<sym sym>);
    goto L54(r118);
  L291():
    goto L63(r133);
  L293():
    other_problem8 = ld other_problem;
    check L295() else D71();
  L294():
    r135 = dyn base19(<sym other_problem>, <sym e>);
    goto L65(r135);
  L306():
    sym57 = ld sym;
    check L308() else D78();
  L307():
    r151 = dyn base22(<lang `$`(sym, dll)>);
    goto L68(r151);
  D29():
    deopt 133 [e11];
  D31():
    deopt 140 [other_desc2];
  D36():
    deopt 154 [e13];
  D38():
    deopt 161 [other_desc4];
  D64():
    deopt 269 [sym40];
  D71():
    deopt 312 [other_problem8];
  D78():
    deopt 339 [sym57];
  L55():
    goto L57();
  L66(r139):
    sst other_desc = r139;
    popenv;
    return "OTHER";
  L189():
    e12 = force? e11;
    checkMissing(e12);
    c26 = ldf c in base;
    r53 = dyn c26(other_problem3, e12);
    check L190() else D30();
  L193():
    other_desc3 = force? other_desc2;
    checkMissing(other_desc3);
    sprintf = ldf sprintf;
    check L194() else D32();
  L201():
    e14 = force? e13;
    checkMissing(e14);
    c28 = ldf c in base;
    r64 = dyn c28(other_problem5, e14);
    check L202() else D37();
  L205():
    other_desc5 = force? other_desc4;
    checkMissing(other_desc5);
    sprintf1 = ldf sprintf;
    check L206() else D39();
  L270():
    sym41 = force? sym40;
    checkMissing(sym41);
    c48 = `==`(sym41, NULL);
    goto L54(c48);
  L271():
    popenv;
    return "SYMBOL OK";
  L295():
    other_problem9 = force? other_problem8;
    checkMissing(other_problem9);
    e21 = ld e;
    check L296() else D72();
  L298():
    other_desc8 = ld other_desc;
    check L300() else D74();
  L299():
    r138 = dyn base20(<sym other_desc>, <lang sprintf("%s is of class \"%s\"", sQuote(name), class(sym))>);
    goto L66(r138);
  L308():
    sym58 = force? sym57;
    checkMissing(sym58);
    c63 = `is.object`(sym58);
    if c63 then L310() else L311(sym58);
  L314(dx23):
    st parg = dx23;
    sym61 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym61, base23);
    if guard23 then L318() else L319();
  L315():
    dr18 = tryDispatchBuiltin.1("$", r152);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L317() else L316(dr18);
  L316(r156):
    r157 = `$`(r156, <sym name>);
    goto L314(r157);
  D30():
    deopt 136 [r53];
  D32():
    deopt 143 [];
  D37():
    deopt 157 [r64];
  D39():
    deopt 164 [];
  D72():
    deopt 314 [e21];
  D74():
    deopt 321 [other_desc8];
  L69(r159):
    r161 = `==`(r159, 1);
    c65 = `as.logical`(r161);
    if c65 then L322() else L70(c65);
  L190():
    goto L29(r53);
  L194():
    p9 = prom<V +>{
      sQuote = ldf sQuote;
      p8 = prom<V +>{
        name8 = ld name;
        name9 = force? name8;
        checkMissing(name9);
        return name9;
      };
      r57 = dyn sQuote(p8);
      return r57;
    };
    r59 = dyn sprintf("symbol %s in the local frame", p9);
    check L195() else D33();
  L202():
    goto L32(r64);
  L206():
    p11 = prom<V +>{
      sQuote1 = ldf sQuote;
      p10 = prom<V +>{
        name10 = ld name;
        name11 = force? name10;
        checkMissing(name11);
        return name11;
      };
      r68 = dyn sQuote1(p10);
      return r68;
    };
    r70 = dyn sprintf1("symbol %s not in namespace", p11);
    check L207() else D40();
  L296():
    e22 = force? e21;
    checkMissing(e22);
    c61 = ldf c in base;
    r137 = dyn c61(other_problem9, e22);
    check L297() else D73();
  L300():
    other_desc9 = force? other_desc8;
    checkMissing(other_desc9);
    sprintf3 = ldf sprintf;
    check L301() else D75();
  L309(dx21):
    unclass = ldf unclass in base;
    r154 = dyn unclass(dx21);
    check L313() else D79();
  L310():
    dr16 = tryDispatchBuiltin.1("$", sym58);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L312() else L311(dr16);
  L311(sym60):
    r153 = `$`(sym60, <sym dll>);
    goto L309(r153);
  L317():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L314(dx22);
  L318():
    parg = ld parg;
    check L320() else D80();
  L319():
    r158 = dyn base23(<sym parg>);
    goto L69(r158);
  D33():
    deopt 146 [r59];
  D40():
    deopt 167 [r70];
  D73():
    deopt 317 [r137];
  D75():
    deopt 324 [];
  D79():
    deopt 343 [r154];
  D80():
    deopt 348 [parg];
  L70(c67):
    c72 = `as.logical`(c67);
    if c72 then L326() else L71();
  L195():
    c27 = ldf c in base;
    r60 = dyn c27(other_desc3, r59);
    check L196() else D34();
  L207():
    c29 = ldf c in base;
    r71 = dyn c29(other_desc5, r70);
    check L208() else D41();
  L297():
    goto L65(r137);
  L301():
    p22 = prom<V +>{
      sQuote4 = ldf sQuote;
      p21 = prom<V +>{
        name14 = ld name;
        name15 = force? name14;
        checkMissing(name15);
        return name15;
      };
      r141 = dyn sQuote4(p21);
      return r141;
    };
    p23 = prom<V +>{
      sym53 = ldf class;
      base21 = ldf class in base;
      guard21 = `==`.4(sym53, base21);
      if guard21 then L1() else L2();
    L0(r144):
      return r144;
    L1():
      sym54 = ld sym;
      sym55 = force? sym54;
      checkMissing(sym55);
      class = ldf class in base;
      r145 = dyn class(sym55);
      goto L0(r145);
    L2():
      r143 = dyn base21(<sym sym>);
      goto L0(r143);
    };
    r147 = dyn sprintf3("%s is of class \"%s\"", p22, p23);
    check L302() else D76();
  L312():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L309(dx20);
  L313():
    goto L68(r154);
  L320():
    parg1 = force? parg;
    checkMissing(parg1);
    length = ldf length in base;
    r160 = dyn length(parg1);
    check L321() else D81();
  L322():
    _notin_ = ldf `%notin%`;
    check L323() else D82();
  D34():
    deopt 148 [r60];
  D41():
    deopt 169 [r71];
  D76():
    deopt 328 [r147];
  D81():
    deopt 351 [r160];
  D82():
    deopt 355 [c65];
  L71():
    goto L74();
  L74():
    sym65 = ld sym;
    check L338() else D90();
  L196():
    goto L30(r60);
  L208():
    goto L33(r71);
  L302():
    c62 = ldf c in base;
    r148 = dyn c62(other_desc9, r147);
    check L303() else D77();
  L321():
    goto L69(r160);
  L323():
    p24 = prom<V +>{
      parg2 = ld parg;
      parg3 = force? parg2;
      checkMissing(parg3);
      return parg3;
    };
    p25 = prom<V +>{
      sym62 = ldf c;
      base24 = ldf c in base;
      guard24 = `==`.4(sym62, base24);
      if guard24 then L1() else L2();
    L0(r164):
      return r164;
    L1():
      pkgDLL = ld pkgDLL;
      pkgDLL1 = force? pkgDLL;
      checkMissing(pkgDLL1);
      c68 = ldf c in base;
      r165 = dyn c68("Rcpp", pkgDLL1);
      goto L0(r165);
    L2():
      r163 = dyn base24("Rcpp", <sym pkgDLL>);
      goto L0(r163);
    };
    r167 = dyn _notin_(p24, p25);
    check L324() else D83();
  L326():
    sym63 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym63, base25);
    if guard25 then L327() else L328();
  D77():
    deopt 330 [r148];
  D83():
    deopt 358 [c65, r167];
  D90():
    deopt 380 [sym65];
  L72(r169):
    sst wrong_pkg = r169;
    sym64 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym64, base26);
    if guard26 then L332() else L333();
  L303():
    goto L66(r148);
  L324():
    c69 = `as.logical`(r167);
    c70 = `&&`(c65, c69);
    goto L70(c70);
  L327():
    wrong_pkg = ld wrong_pkg;
    check L329() else D84();
  L328():
    r168 = dyn base25(<sym wrong_pkg>, <sym e>);
    goto L72(r168);
  L338():
    sym66 = force? sym65;
    checkMissing(sym66);
    c75 = `is.object`(sym66);
    if c75 then L340() else L341(sym66);
  D84():
    deopt 362 [wrong_pkg];
  L73(r172):
    sst bad_pkg = r172;
    goto L74();
  L329():
    wrong_pkg1 = force? wrong_pkg;
    checkMissing(wrong_pkg1);
    e23 = ld e;
    check L330() else D85();
  L332():
    bad_pkg = ld bad_pkg;
    check L334() else D87();
  L333():
    r171 = dyn base26(<sym bad_pkg>, <sym parg>);
    goto L73(r171);
  L339(dx25):
    st numparms = dx25;
    sym69 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym69, base27);
    if guard27 then L343() else L344();
  L340():
    dr20 = tryDispatchBuiltin.1("$", sym66);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L342() else L341(dr20);
  L341(sym68):
    r175 = `$`(sym68, <sym numParameters>);
    goto L339(r175);
  D85():
    deopt 364 [e23];
  D87():
    deopt 371 [bad_pkg];
  L75(r177):
    c76 = `as.logical`(r177);
    if c76 then L347() else L76(c76);
  L330():
    e24 = force? e23;
    checkMissing(e24);
    c73 = ldf c in base;
    r170 = dyn c73(wrong_pkg1, e24);
    check L331() else D86();
  L334():
    bad_pkg1 = force? bad_pkg;
    checkMissing(bad_pkg1);
    parg4 = ld parg;
    check L335() else D88();
  L342():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L339(dx24);
  L343():
    numparms = ld numparms;
    check L345() else D91();
  L344():
    r176 = dyn base27(<sym numparms>);
    goto L75(r176);
  D86():
    deopt 367 [r170];
  D88():
    deopt 373 [parg4];
  D91():
    deopt 386 [numparms];
  L76(c78):
    c82 = `as.logical`(c78);
    if c82 then L350() else L77();
  L331():
    goto L72(r170);
  L335():
    parg5 = force? parg4;
    checkMissing(parg5);
    c74 = ldf c in base;
    r173 = dyn c74(bad_pkg1, parg5);
    check L336() else D89();
  L345():
    numparms1 = force? numparms;
    checkMissing(numparms1);
    length1 = ldf length in base;
    r178 = dyn length1(numparms1);
    check L346() else D92();
  L347():
    numparms2 = ld numparms;
    check L348() else D93();
  D89():
    deopt 376 [r173];
  D92():
    deopt 389 [r178];
  D93():
    deopt 390 [c76, numparms2];
  L77():
    goto L96();
  L96():
    sym83 = ldf inherits;
    base41 = ldf inherits in base;
    guard41 = `==`.4(sym83, base41);
    if guard41 then L415() else L416();
  L336():
    goto L73(r173);
  L346():
    goto L75(r178);
  L348():
    numparms3 = force? numparms2;
    checkMissing(numparms3);
    r179 = `>=`(numparms3, 0.0);
    c79 = `as.logical`(r179);
    c80 = `&&`(c76, c79);
    goto L76(c80);
  L350():
    sym70 = ldf any;
    base28 = ldf any in base;
    guard28 = `==`.4(sym70, base28);
    if guard28 then L351() else L352();
  L78(r181):
    c83 = `as.logical`(r181);
    if c83 then L358() else L80();
  L97(r251):
    c108 = `as.logical`(r251);
    if c108 then L419() else L98(c108);
  L351():
    sym71 = ldf `as.character`;
    base29 = ldf `as.character` in base;
    guard29 = `==`.4(sym71, base29);
    if guard29 then L353() else L354();
  L352():
    r180 = dyn base28(<lang `==`(as.character(e), "...")>);
    goto L78(r180);
  L415():
    sym84 = ld sym;
    check L417() else D126();
  L416():
    r250 = dyn base41(<sym sym>, "CallRoutine");
    goto L97(r250);
  D126():
    deopt 517 [sym84];
  L79(r183):
    r185 = `==`(r183, "...");
    any = ldf any in base;
    r186 = dyn any(r185);
    check L357() else D96();
  L80():
    sym74 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym74, base32);
    if guard32 then L371() else L372();
  L83(r197):
    goto L96();
  L98(c110):
    c115 = `as.logical`(c110);
    if c115 then L423() else L99();
  L353():
    e25 = ld e;
    check L355() else D94();
  L354():
    r182 = dyn base29(<sym e>);
    goto L79(r182);
  L358():
    sym72 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym72, base30);
    if guard30 then L359() else L360();
  L417():
    sym85 = force? sym84;
    checkMissing(sym85);
    inherits4 = ldf inherits in base;
    r252 = dyn inherits4(sym85, "CallRoutine", FALSE);
    check L418() else D127();
  L419():
    _notin_1 = ldf `%notin%`;
    check L420() else D128();
  D94():
    deopt 399 [e25];
  D96():
    deopt 406 [r186];
  D127():
    deopt 522 [r252];
  D128():
    deopt 524 [c108];
  L81(r188):
    sst other_problem = r188;
    sym73 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym73, base31);
    if guard31 then L364() else L365();
  L84(r199):
    r201 = `-`(r199, 2);
    st callparms = r201;
    _in_2 = ldf `%in%`;
    check L375() else D106();
  L99():
    sym89 = ldf inherits;
    base45 = ldf inherits in base;
    guard45 = `==`.4(sym89, base45);
    if guard45 then L437() else L438();
  L355():
    e26 = force? e25;
    checkMissing(e26);
    as_character2 = ldf `as.character` in base;
    r184 = dyn as_character2(e26);
    check L356() else D95();
  L357():
    goto L78(r186);
  L359():
    other_problem10 = ld other_problem;
    check L361() else D97();
  L360():
    r187 = dyn base30(<sym other_problem>, <sym e>);
    goto L81(r187);
  L371():
    e29 = ld e;
    check L373() else D104();
  L372():
    r198 = dyn base32(<sym e>);
    goto L84(r198);
  L418():
    goto L97(r252);
  L420():
    p38 = prom<V +>{
      FF_fun6 = ld FF_fun;
      FF_fun7 = force? FF_fun6;
      checkMissing(FF_fun7);
      return FF_fun7;
    };
    p39 = prom<V +>{
      sym86 = ldf c;
      base42 = ldf c in base;
      guard42 = `==`.4(sym86, base42);
      if guard42 then L1() else L2();
    L0(r255):
      return r255;
    L1():
      c111 = ldf c in base;
      r256 = dyn c111(".Call", ".Call.graphics");
      goto L0(r256);
    L2():
      r254 = dyn base42(".Call", ".Call.graphics");
      goto L0(r254);
    };
    r258 = dyn _notin_1(p38, p39);
    check L421() else D129();
  L423():
    sym87 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym87, base43);
    if guard43 then L424() else L425();
  D95():
    deopt 402 [r184];
  D97():
    deopt 409 [other_problem10];
  D104():
    deopt 431 [e29];
  D106():
    deopt 439 [];
  D129():
    deopt 527 [c108, r258];
  L82(r191):
    sst other_desc = r191;
    goto L83(r191);
  L100(r260):
    sst other_problem = r260;
    sym88 = ldf c;
    base44 = ldf c in base;
    guard44 = `==`.4(sym88, base44);
    if guard44 then L429() else L430();
  L103(r273):
    c118 = `as.logical`(r273);
    if c118 then L441() else L104(c118);
  L356():
    goto L79(r184);
  L361():
    other_problem11 = force? other_problem10;
    checkMissing(other_problem11);
    e27 = ld e;
    check L362() else D98();
  L364():
    other_desc10 = ld other_desc;
    check L366() else D100();
  L365():
    r190 = dyn base31(<sym other_desc>, <lang sprintf("call includes ..., expected %d %s", numparms, if(`>`(numparms, 1), "parameters", "parameter"))>);
    goto L82(r190);
  L373():
    e30 = force? e29;
    checkMissing(e30);
    length2 = ldf length in base;
    r200 = dyn length2(e30);
    check L374() else D105();
  L375():
    p28 = prom<V +>{
      sym75 = ldf names;
      base33 = ldf names in base;
      guard33 = `==`.4(sym75, base33);
      if guard33 then L1() else L2();
    L0(r203):
      return r203;
    L1():
      e31 = ld e;
      e32 = force? e31;
      checkMissing(e32);
      names = ldf names in base;
      r204 = dyn names(e32);
      goto L0(r204);
    L2():
      r202 = dyn base33(<sym e>);
      goto L0(r202);
    };
    r206 = dyn _in_2("PACKAGE", p28);
    check L376() else D107();
  L421():
    c112 = `as.logical`(r258);
    c113 = `&&`(c108, c112);
    goto L98(c113);
  L424():
    other_problem14 = ld other_problem;
    check L426() else D130();
  L425():
    r259 = dyn base43(<sym other_problem>, <sym e>);
    goto L100(r259);
  L437():
    sym90 = ld sym;
    check L439() else D137();
  L438():
    r272 = dyn base45(<sym sym>, "ExternalRoutine");
    goto L103(r272);
  D98():
    deopt 411 [e27];
  D100():
    deopt 418 [other_desc10];
  D105():
    deopt 434 [r200];
  D107():
    deopt 442 [r206];
  D130():
    deopt 531 [other_problem14];
  D137():
    deopt 559 [sym90];
  L101(r263):
    sst other_desc = r263;
    popenv;
    return "OTHER";
  L104(c120):
    c125 = `as.logical`(c120);
    if c125 then L445() else L105();
  L362():
    e28 = force? e27;
    checkMissing(e28);
    c84 = ldf c in base;
    r189 = dyn c84(other_problem11, e28);
    check L363() else D99();
  L366():
    other_desc11 = force? other_desc10;
    checkMissing(other_desc11);
    sprintf4 = ldf sprintf;
    check L367() else D101();
  L374():
    goto L84(r200);
  L376():
    c87 = `as.logical`(r206);
    if c87 then L377() else L85();
  L426():
    other_problem15 = force? other_problem14;
    checkMissing(other_problem15);
    e37 = ld e;
    check L427() else D131();
  L429():
    other_desc14 = ld other_desc;
    check L431() else D133();
  L430():
    r262 = dyn base44(<sym other_desc>, <lang sprintf("%s registered as %s, but called with %s", sQuote(name), ".Call", FF_fun)>);
    goto L101(r262);
  L439():
    sym91 = force? sym90;
    checkMissing(sym91);
    inherits5 = ldf inherits in base;
    r274 = dyn inherits5(sym91, "ExternalRoutine", FALSE);
    check L440() else D138();
  L441():
    _in_4 = ldf `%in%`;
    check L442() else D139();
  D99():
    deopt 414 [r189];
  D101():
    deopt 421 [];
  D131():
    deopt 533 [e37];
  D133():
    deopt 540 [other_desc14];
  D138():
    deopt 564 [r274];
  D139():
    deopt 566 [c118];
  L85():
    goto L86();
  L86():
    _in_3 = ldf `%in%`;
    check L380() else D109();
  L105():
    popenv;
    return "SYMBOL OK";
  L363():
    goto L81(r189);
  L367():
    p26 = prom<V +>{
      numparms4 = ld numparms;
      numparms5 = force? numparms4;
      checkMissing(numparms5);
      return numparms5;
    };
    p27 = prom<V +>{
      numparms6 = ld numparms;
      numparms7 = force? numparms6;
      checkMissing(numparms7);
      r193 = `>`(numparms7, 1);
      c85 = `as.logical`(r193);
      if c85 then L1() else L0();
    L0():
      return "parameter";
    L1():
      return "parameters";
    };
    r195 = dyn sprintf4("call includes ..., expected %d %s", p26, p27);
    check L368() else D102();
  L377():
    callparms = ld callparms;
    check L378() else D108();
  L427():
    e38 = force? e37;
    checkMissing(e38);
    c116 = ldf c in base;
    r261 = dyn c116(other_problem15, e38);
    check L428() else D132();
  L431():
    other_desc15 = force? other_desc14;
    checkMissing(other_desc15);
    sprintf6 = ldf sprintf;
    check L432() else D134();
  L440():
    goto L103(r274);
  L442():
    p43 = prom<V +>{
      FF_fun10 = ld FF_fun;
      FF_fun11 = force? FF_fun10;
      checkMissing(FF_fun11);
      return FF_fun11;
    };
    p44 = prom<V +>{
      sym92 = ldf c;
      base46 = ldf c in base;
      guard46 = `==`.4(sym92, base46);
      if guard46 then L1() else L2();
    L0(r277):
      return r277;
    L1():
      c121 = ldf c in base;
      r278 = dyn c121(".External", ".External.graphics");
      goto L0(r278);
    L2():
      r276 = dyn base46(".External", ".External.graphics");
      goto L0(r276);
    };
    r280 = dyn _in_4(p43, p44);
    check L443() else D140();
  L445():
    sym93 = ldf c;
    base47 = ldf c in base;
    guard47 = `==`.4(sym93, base47);
    if guard47 then L446() else L447();
  D102():
    deopt 425 [r195];
  D108():
    deopt 443 [callparms];
  D109():
    deopt 451 [];
  D132():
    deopt 536 [r261];
  D134():
    deopt 543 [];
  D140():
    deopt 569 [c118, r280];
  L106(r283):
    sst other_problem = r283;
    sym94 = ldf c;
    base48 = ldf c in base;
    guard48 = `==`.4(sym94, base48);
    if guard48 then L451() else L452();
  L368():
    c86 = ldf c in base;
    r196 = dyn c86(other_desc11, r195);
    check L369() else D103();
  L378():
    callparms1 = force? callparms;
    checkMissing(callparms1);
    r207 = `-`(callparms1, 1);
    st callparms = r207;
    goto L86();
  L380():
    p29 = prom<V +>{
      FF_fun4 = ld FF_fun;
      FF_fun5 = force? FF_fun4;
      checkMissing(FF_fun5);
      return FF_fun5;
    };
    p30 = prom<V +>{
      sym76 = ldf c;
      base34 = ldf c in base;
      guard34 = `==`.4(sym76, base34);
      if guard34 then L1() else L2();
    L0(r211):
      return r211;
    L1():
      c88 = ldf c in base;
      r212 = dyn c88(".C", ".Fortran");
      goto L0(r212);
    L2():
      r210 = dyn base34(".C", ".Fortran");
      goto L0(r210);
    };
    r214 = dyn _in_3(p29, p30);
    check L381() else D110();
  L428():
    goto L100(r261);
  L432():
    p41 = prom<V +>{
      sQuote6 = ldf sQuote;
      p40 = prom<V +>{
        name18 = ld name;
        name19 = force? name18;
        checkMissing(name19);
        return name19;
      };
      r265 = dyn sQuote6(p40);
      return r265;
    };
    p42 = prom<V +>{
      FF_fun8 = ld FF_fun;
      FF_fun9 = force? FF_fun8;
      checkMissing(FF_fun9);
      return FF_fun9;
    };
    r268 = dyn sprintf6("%s registered as %s, but called with %s", p41, ".Call", p42);
    check L433() else D135();
  L443():
    r281 = `!`(r280);
    c122 = `as.logical`(r281);
    c123 = `&&`(c118, c122);
    goto L104(c123);
  L446():
    other_problem16 = ld other_problem;
    check L448() else D141();
  L447():
    r282 = dyn base47(<sym other_problem>, <sym e>);
    goto L106(r282);
  D103():
    deopt 427 [r196];
  D110():
    deopt 454 [r214];
  D135():
    deopt 548 [r268];
  D141():
    deopt 574 [other_problem16];
  L107(r286):
    sst other_desc = r286;
    popenv;
    return "OTHER";
  L369():
    goto L82(r196);
  L381():
    c89 = `as.logical`(r214);
    if c89 then L382() else L87();
  L433():
    c117 = ldf c in base;
    r269 = dyn c117(other_desc15, r268);
    check L434() else D136();
  L448():
    other_problem17 = force? other_problem16;
    checkMissing(other_problem17);
    e39 = ld e;
    check L449() else D142();
  L451():
    other_desc16 = ld other_desc;
    check L453() else D144();
  L452():
    r285 = dyn base48(<sym other_desc>, <lang sprintf("%s registered as %s, but called with %s", sQuote(name), ".External", FF_fun)>);
    goto L107(r285);
  D136():
    deopt 550 [r269];
  D142():
    deopt 576 [e39];
  D144():
    deopt 583 [other_desc16];
  L87():
    goto L89();
  L89():
    sym80 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym80, base38);
    if guard38 then L390() else L391();
  L382():
    callparms2 = ld callparms;
    check L383() else D111();
  L434():
    goto L101(r269);
  L449():
    e40 = force? e39;
    checkMissing(e40);
    c126 = ldf c in base;
    r284 = dyn c126(other_problem17, e40);
    check L450() else D143();
  L453():
    other_desc17 = force? other_desc16;
    checkMissing(other_desc17);
    sprintf7 = ldf sprintf;
    check L454() else D145();
  D111():
    deopt 455 [callparms2];
  D143():
    deopt 579 [r284];
  D145():
    deopt 586 [];
  L90(r230):
    r231 = `!`(r230);
    c92 = `as.logical`(r231);
    if c92 then L393() else L91(c92);
  L383():
    callparms3 = force? callparms2;
    checkMissing(callparms3);
    sym77 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym77, base35);
    if guard35 then L384() else L385();
  L390():
    numparms8 = ld numparms;
    check L392() else D115();
  L391():
    r229 = dyn base38(<sym numparms>);
    goto L90(r229);
  L450():
    goto L106(r284);
  L454():
    p46 = prom<V +>{
      sQuote7 = ldf sQuote;
      p45 = prom<V +>{
        name20 = ld name;
        name21 = force? name20;
        checkMissing(name21);
        return name21;
      };
      r288 = dyn sQuote7(p45);
      return r288;
    };
    p47 = prom<V +>{
      FF_fun12 = ld FF_fun;
      FF_fun13 = force? FF_fun12;
      checkMissing(FF_fun13);
      return FF_fun13;
    };
    r291 = dyn sprintf7("%s registered as %s, but called with %s", p46, ".External", p47);
    check L455() else D146();
  D115():
    deopt 470 [numparms8];
  D146():
    deopt 591 [r291];
  L88(callparms6, r216):
    r227 = `-`(callparms6, r216);
    st callparms = r227;
    goto L89();
  L91(c94):
    c98 = `as.logical`(c94);
    if c98 then L396() else L92(c98);
  L384():
    intersect = ldf intersect;
    check L386() else D112();
  L385():
    r215 = dyn base35(<lang intersect(names(e), c("NAOK", "DUP", "ENCODING"))>);
    goto L88(callparms3, r215);
  L392():
    numparms9 = force? numparms8;
    checkMissing(numparms9);
    c91 = `==`(numparms9, NULL);
    goto L90(c91);
  L393():
    numparms10 = ld numparms;
    check L394() else D116();
  L455():
    c127 = ldf c in base;
    r292 = dyn c127(other_desc17, r291);
    check L456() else D147();
  D112():
    deopt 459 [callparms3];
  D116():
    deopt 474 [c92, numparms10];
  D147():
    deopt 593 [r292];
  L92(c100):
    c104 = `as.logical`(c100);
    if c104 then L400() else L93();
  L386():
    p31 = prom<V +>{
      sym78 = ldf names;
      base36 = ldf names in base;
      guard36 = `==`.4(sym78, base36);
      if guard36 then L1() else L2();
    L0(r218):
      return r218;
    L1():
      e33 = ld e;
      e34 = force? e33;
      checkMissing(e34);
      names1 = ldf names in base;
      r219 = dyn names1(e34);
      goto L0(r219);
    L2():
      r217 = dyn base36(<sym e>);
      goto L0(r217);
    };
    p32 = prom<V +>{
      sym79 = ldf c;
      base37 = ldf c in base;
      guard37 = `==`.4(sym79, base37);
      if guard37 then L1() else L2();
    L0(r222):
      return r222;
    L1():
      c90 = ldf c in base;
      r223 = dyn c90("NAOK", "DUP", "ENCODING");
      goto L0(r223);
    L2():
      r221 = dyn base37("NAOK", "DUP", "ENCODING");
      goto L0(r221);
    };
    r225 = dyn intersect(p31, p32);
    check L387() else D113();
  L394():
    numparms11 = force? numparms10;
    checkMissing(numparms11);
    r232 = `>=`(numparms11, 0);
    c95 = `as.logical`(r232);
    c96 = `&&`(c92, c95);
    goto L91(c96);
  L396():
    numparms12 = ld numparms;
    check L397() else D117();
  L456():
    goto L107(r292);
  D113():
    deopt 462 [callparms3, r225];
  D117():
    deopt 479 [c98, numparms12];
  L93():
    goto L83(NULL);
  L387():
    length3 = ldf length in base;
    r226 = dyn length3(r225);
    check L388() else D114();
  L397():
    numparms13 = force? numparms12;
    checkMissing(numparms13);
    callparms7 = ld callparms;
    check L398() else D118();
  L400():
    sym81 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym81, base39);
    if guard39 then L401() else L402();
  D114():
    deopt 464 [callparms3, r226];
  D118():
    deopt 480 [c98, numparms13, callparms7];
  L94(r235):
    sst other_problem = r235;
    sym82 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym82, base40);
    if guard40 then L406() else L407();
  L388():
    goto L88(callparms3, r226);
  L398():
    callparms8 = force? callparms7;
    checkMissing(callparms8);
    r233 = `!=`(numparms13, callparms8);
    c101 = `as.logical`(r233);
    c102 = `&&`(c98, c101);
    goto L92(c102);
  L401():
    other_problem12 = ld other_problem;
    check L403() else D119();
  L402():
    r234 = dyn base39(<sym other_problem>, <sym e>);
    goto L94(r234);
  D119():
    deopt 486 [other_problem12];
  L95(r238):
    sst other_desc = r238;
    popenv;
    return "OTHER";
  L403():
    other_problem13 = force? other_problem12;
    checkMissing(other_problem13);
    e35 = ld e;
    check L404() else D120();
  L406():
    other_desc12 = ld other_desc;
    check L408() else D122();
  L407():
    r237 = dyn base40(<sym other_desc>, <lang sprintf("call to %s with %d %s, expected %d", sQuote(name), callparms, if(`>`(callparms, 1), "parameters", "parameter"), numparms)>);
    goto L95(r237);
  D120():
    deopt 488 [e35];
  D122():
    deopt 495 [other_desc12];
  L404():
    e36 = force? e35;
    checkMissing(e36);
    c105 = ldf c in base;
    r236 = dyn c105(other_problem13, e36);
    check L405() else D121();
  L408():
    other_desc13 = force? other_desc12;
    checkMissing(other_desc13);
    sprintf5 = ldf sprintf;
    check L409() else D123();
  D121():
    deopt 491 [r236];
  D123():
    deopt 498 [];
  L405():
    goto L94(r236);
  L409():
    p34 = prom<V +>{
      sQuote5 = ldf sQuote;
      p33 = prom<V +>{
        name16 = ld name;
        name17 = force? name16;
        checkMissing(name17);
        return name17;
      };
      r240 = dyn sQuote5(p33);
      return r240;
    };
    p35 = prom<V +>{
      callparms9 = ld callparms;
      callparms10 = force? callparms9;
      checkMissing(callparms10);
      return callparms10;
    };
    p36 = prom<V +>{
      callparms11 = ld callparms;
      callparms12 = force? callparms11;
      checkMissing(callparms12);
      r243 = `>`(callparms12, 1);
      c106 = `as.logical`(r243);
      if c106 then L1() else L0();
    L0():
      return "parameter";
    L1():
      return "parameters";
    };
    p37 = prom<V +>{
      numparms14 = ld numparms;
      numparms15 = force? numparms14;
      checkMissing(numparms15);
      return numparms15;
    };
    r246 = dyn sprintf5("call to %s with %d %s, expected %d", p34, p35, p36, p37);
    check L410() else D124();
  D124():
    deopt 504 [r246];
  L410():
    c107 = ldf c in base;
    r247 = dyn c107(other_desc13, r246);
    check L411() else D125();
  D125():
    deopt 506 [r247];
  L411():
    goto L95(r247);
  }
}