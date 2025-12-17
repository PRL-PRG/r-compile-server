fun main() {
  () -+> V { reg r:cls, reg undoc:cls, reg r1:V |
    mkenv;
    r = clos inner1827804468;
    st undoc = r;
    undoc = ldf undoc;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn undoc("tools");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg dirname:cls, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg package5:*, reg package6:V, reg r15:V, reg Rd_aliases:cls, reg package7:*, reg package8:V, reg p3:p(V +), reg dirdir:*, reg dirdir1:V, reg p4:p(V +), reg r18:V, reg is_base:*, reg is_base1:V, reg r19:V, reg c2:L, reg _load_package_quietly:cls, reg package9:*, reg package10:V, reg p5:p(V +), reg dirdir2:*, reg dirdir3:V, reg p6:p(V +), reg r22:V, reg _package_env:cls, reg package11:*, reg package12:V, reg p7:p(V +), reg r25:V, reg ls:cls, reg code_env:*, reg code_env1:V, reg p8:p(V +), reg r27:V, reg package13:*, reg package14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg missing1:cls, reg r30:V, reg c3:L, reg stop1:cls, reg r31:V, reg basename:cls, reg dir1:*, reg dir2:V, reg p9:p(V +), reg r34:V, reg dirname1:cls, reg dir3:*, reg dir4:V, reg p10:p(V +), reg r36:V, reg dir_exists:cls, reg dir5:*, reg dir6:V, reg p11:p(V +), reg r38:V, reg r39:V, reg c4:L, reg stop2:cls, reg gettextf:cls, reg dir7:*, reg dir8:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg r43:V, reg file_path_as_absolute:cls, reg dir9:*, reg dir10:V, reg p14:p(V +), reg r46:V, reg pkgname:*, reg pkgname1:V, reg r47:V, reg Rd_aliases1:cls, reg dir11:*, reg dir12:V, reg p15:p(V +), reg r49:V, reg new_env:cls, reg r50:V, reg file_path:cls, reg dir13:*, reg dir14:V, reg p16:p(V +), reg r52:V, reg dir_exists1:cls, reg code_dir:*, reg code_dir1:V, reg p17:p(V +), reg r54:V, reg c5:L, reg file_path1:cls, reg dir15:*, reg dir16:V, reg p18:p(V +), reg r56:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p19:p(V +), reg r58:V, reg c6:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p20:p(V +), reg r60:V, reg r61:V, reg character:cls, reg r62:V, reg _source_assignments_in_code_dir:cls, reg code_dir2:*, reg code_dir3:V, reg p21:p(V +), reg code_env2:*, reg code_env3:V, reg p22:p(V +), reg meta:*, reg meta1:V, reg p23:p(V +), reg r66:V, reg file_path2:cls, reg code_dir4:*, reg code_dir5:V, reg p24:p(V +), reg r68:V, reg file_test1:cls, reg sys_data_file:*, reg sys_data_file1:V, reg p25:p(V +), reg r70:V, reg c7:L, reg load:cls, reg sys_data_file2:*, reg sys_data_file3:V, reg p26:p(V +), reg code_env4:*, reg code_env5:V, reg p27:p(V +), reg r73:V, reg r74:V, reg ls1:cls, reg code_env6:*, reg code_env7:V, reg p28:p(V +), reg r77:V, reg file_exists:cls, reg file_path3:cls, reg dir17:*, reg dir18:V, reg p29:p(V +), reg r79:V, reg p30:p(V +), reg r81:V, reg c8:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r82:V, reg c13:L, reg r83:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg pkgname2:*, reg pkgname3:V, reg p31:p(V +), reg dirdir4:*, reg dirdir5:V, reg p32:p(V +), reg r86:V, reg p33:p(V +), reg identity:*, reg identity1:V, reg p34:p(V +), reg r89:V, reg inherits:cls, reg r90:V, reg r91:V, reg c14:L, reg c15:V, reg c17:L, reg intersect:cls, reg code_objs:*, reg code_objs1:V, reg p35:p(V +), reg nsInfo:*, reg nsInfo1:V, reg c18:L, reg nsInfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r93:V, reg p36:p(V +), reg r95:V, reg nsInfo4:*, reg nsInfo5:V, reg c19:L, reg nsInfo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r96:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c20:L, reg x:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r97:V, reg i7:I, reg r98:V, reg OK:*, reg OK1:V, reg grep:cls, reg p37:*, reg p38:V, reg p39:p(V +), reg code_objs2:*, reg code_objs3:V, reg p40:p(V +), reg r101:V, reg c21:cls, reg r102:V, reg unique:cls, reg OK2:*, reg OK3:V, reg p41:p(V +), reg r104:V, reg file_path4:cls, reg dir19:*, reg dir20:V, reg p42:p(V +), reg r106:V, reg dir_exists2:cls, reg data_dir:*, reg data_dir1:V, reg p43:p(V +), reg r108:V, reg c22:L, reg unlist:cls, reg _try_quietly:cls, reg list_data_in_pkg:cls, reg dir21:*, reg dir22:V, reg p44:p(V +), reg r110:V, reg p45:p(V +), reg r112:V, reg p46:p(V +), reg r114:V, reg r115:V, reg character1:cls, reg r116:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r117:V, reg r118:V, reg missing2:cls, reg r119:V, reg r120:V, reg c23:L, reg c25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r121:V, reg c28:L, reg r122:V, reg code_objs4:*, reg code_objs5:V, reg length1:cls, reg r123:V, reg r124:V, reg c29:L, reg c30:V, reg c32:L, reg c34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r125:V, reg c37:L, reg r126:V, reg data_objs:*, reg data_objs1:V, reg length2:cls, reg r127:V, reg r128:V, reg c38:L, reg c39:V, reg c41:L, reg c43:V, reg getOption:cls, reg r129:V, reg c44:L, reg c45:V, reg c47:L, reg message:cls, reg r130:V, reg is_base2:*, reg is_base3:V, reg r132:V, reg c48:L, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r133:V, reg p47:p(V +), reg r135:V, reg r136:V, reg c49:L, reg grep1:cls, reg code_objs6:*, reg code_objs7:V, reg p48:p(V +), reg r138:V, reg _w_o_:cls, reg code_objs8:*, reg code_objs9:V, reg p49:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r141:V, reg r142:V, reg c50:cls, reg r143:V, reg p50:p(V +), reg r145:V, reg code_objs10:*, reg code_objs11:V, reg c51:L, reg code_objs13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg startsWith:cls, reg code_objs14:*, reg code_objs15:V, reg p51:p(V +), reg r147:V, reg startsWith1:cls, reg code_objs16:*, reg code_objs17:V, reg p52:p(V +), reg r149:V, reg r150:V, reg r151:V, reg __:cls, reg r152:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r153:V, reg r154:V, reg _isMethodsDispatchOn:cls, reg r155:V, reg c52:L, reg __1:cls, reg r156:V, reg Filter:cls, reg r157:cls, reg p53:p(V +), reg code_objs18:*, reg code_objs19:V, reg p54:p(V +), reg r160:V, reg setdiff:cls, reg code_objs20:*, reg code_objs21:V, reg p55:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r163:V, reg r164:V, reg c53:cls, reg r165:V, reg p56:p(V +), reg r167:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r169:V, reg r170:V, reg unique1:cls, reg setdiff1:cls, reg code_objs22:*, reg code_objs23:V, reg p57:p(V +), reg all_doc_topics:*, reg all_doc_topics1:V, reg p58:p(V +), reg r173:V, reg p59:p(V +), reg r175:V, reg unique2:cls, reg setdiff2:cls, reg data_objs2:*, reg data_objs3:V, reg p60:p(V +), reg all_doc_topics2:*, reg all_doc_topics3:V, reg p61:p(V +), reg r178:V, reg p62:p(V +), reg r180:V, reg list:cls, reg r181:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r182:V, reg r183:V, reg _isMethodsDispatchOn1:cls, reg r184:V, reg c54:L, reg __2:cls, reg r185:V, reg r186:cls, reg code_env8:*, reg code_env9:V, reg p63:p(V +), reg r188:V, reg S4_classes:*, reg S4_classes1:V, reg c55:L, reg S4_classes3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg _notin_:cls, reg vapply:cls, reg S4_classes4:*, reg S4_classes5:V, reg p64:p(V +), reg ___:cls, reg r190:V, reg p65:p(V +), reg r192:V, reg p66:p(V +), reg all_doc_topics4:*, reg all_doc_topics5:V, reg p67:p(V +), reg r195:V, reg __3:cls, reg r196:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r197:V, reg r198:V, reg undoc_things:*, reg undoc_things1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r199:V, reg r200:V, reg unique3:cls, reg S4_classes6:*, reg S4_classes7:V, reg p68:p(V +), reg r202:V, reg list1:cls, reg r203:V, reg c56:cls, reg r204:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r206:V, reg r207:V, reg _isMethodsDispatchOn2:cls, reg r208:V, reg c57:L, reg r209:cls, reg lapply:cls, reg _get_S4_generics:cls, reg code_env10:*, reg code_env11:V, reg p69:p(V +), reg r211:V, reg p70:p(V +), reg _make_S4_method_siglist:*, reg _make_S4_method_siglist1:V, reg p71:p(V +), reg r214:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r215:V, reg r216:V, reg unlist1:cls, reg S4_methods:*, reg S4_methods1:V, reg p72:p(V +), reg r218:V, reg as_character:cls, reg r219:V, reg S4_methods2:*, reg S4_methods3:V, reg c58:L, reg S4_methods5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg _notin_1:cls, reg vapply1:cls, reg S4_methods6:*, reg S4_methods7:V, reg p73:p(V +), reg ___1:cls, reg r221:V, reg p74:p(V +), reg r223:V, reg p75:p(V +), reg all_doc_topics6:*, reg all_doc_topics7:V, reg p76:p(V +), reg r226:V, reg __4:cls, reg r227:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r228:V, reg r229:V, reg undoc_things2:*, reg undoc_things3:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r230:V, reg r231:V, reg unique4:cls, reg sub:cls, reg S4_methods8:*, reg S4_methods9:V, reg p77:p(V +), reg r233:V, reg p78:p(V +), reg r235:V, reg list2:cls, reg r236:V, reg c59:cls, reg r237:V, reg is_base4:*, reg is_base5:V, reg c60:L, reg as_list:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r239:V, reg r240:V, reg baseenv:cls, reg r241:V, reg p79:p(V +), reg r243:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r244:V, reg r245:V, reg ff:*, reg ff1:V, reg names:cls, reg r246:V, reg c61:L, reg r248:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg vapply2:cls, reg ff2:*, reg ff3:V, reg p80:p(V +), reg is_primitive:*, reg is_primitive1:V, reg p81:p(V +), reg r251:V, reg __5:cls, reg r252:V, reg sort:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r253:V, reg r254:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r255:V, reg r256:V, reg _ArgsEnv:*, reg _ArgsEnv1:V, reg names1:cls, reg r257:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r258:V, reg r259:V, reg _GenericArgsEnv:*, reg _GenericArgsEnv1:V, reg names2:cls, reg r260:V, reg c62:cls, reg r261:V, reg p82:p(V +), reg r263:V, reg setdiff3:cls, reg prototypes:*, reg prototypes1:V, reg p83:p(V +), reg prims:*, reg prims1:V, reg p84:p(V +), reg r266:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r267:V, reg r268:V, reg extras:*, reg extras1:V, reg length3:cls, reg r269:V, reg c63:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r270:V, reg r271:V, reg undoc_things4:*, reg undoc_things5:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r272:V, reg r273:V, reg extras2:*, reg extras3:V, reg list3:cls, reg r274:V, reg c64:cls, reg r275:V, reg setdiff4:cls, reg prims2:*, reg prims3:V, reg p85:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r278:V, reg r279:V, reg langElts:*, reg langElts1:V, reg prototypes2:*, reg prototypes3:V, reg c65:cls, reg r280:V, reg p86:p(V +), reg r282:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r283:V, reg r284:V, reg miss:*, reg miss1:V, reg length4:cls, reg r285:V, reg c66:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r286:V, reg r287:V, reg undoc_things6:*, reg undoc_things7:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r288:V, reg r289:V, reg miss2:*, reg miss3:V, reg list4:cls, reg r290:V, reg c67:cls, reg r291:V, reg r292:V, reg l1:*, reg class__:cls, reg r294:V, reg undoc_things8:*, reg undoc_things9:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L72() else L73();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L74() else L2();
  L72():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L73():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L99() else L100();
  L8():
    file_path4 = ldf `file.path`;
    check L177() else D70();
  L74():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L75() else L76();
  D70():
    deopt 228 [];
  L3(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L79() else L4();
  L9(r29):
    c3 = `as.logical`(r29);
    if c3 then L101() else L10();
  L75():
    package1 = ld package;
    check L77() else D0();
  L76():
    r4 = dyn base1(<sym package>);
    goto L3(r4);
  L99():
    missing1 = ldf missing in base;
    r30 = dyn missing1(<sym dir>);
    goto L9(r30);
  L100():
    r28 = dyn base2(<sym dir>);
    goto L9(r28);
  L177():
    p42 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    r106 = dyn file_path4(p42, "data");
    check L178() else D71();
  D0():
    deopt 6 [package1];
  D71():
    deopt 231 [r106];
  L4():
    goto L5();
  L5():
    dirname = ldf dirname;
    check L83() else D4();
  L10():
    goto L11();
  L11():
    basename = ldf basename;
    check L105() else D19();
  L77():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L78() else D1();
  L79():
    stop = ldf stop;
    check L80() else D2();
  L101():
    stop1 = ldf stop;
    check L102() else D17();
  L178():
    st data_dir = r106;
    dir_exists2 = ldf `dir.exists`;
    check L179() else D72();
  D1():
    deopt 9 [r6];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  D17():
    deopt 65 [];
  D19():
    deopt 71 [];
  D72():
    deopt 234 [];
  L78():
    goto L3(r6);
  L80():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L81() else D3();
  L83():
    p2 = prom<V +>{
      find_package = ldf `find.package`;
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
      st dir = r12;
      invisible.0();
      return r12;
    };
    r14 = dyn dirname(p2);
    check L84() else D5();
  L102():
    r31 = dyn stop1("you must specify 'package' or 'dir'");
    check L103() else D18();
  L105():
    p9 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r34 = dyn basename(p9);
    check L106() else D20();
  L179():
    p43 = prom<V +>{
      data_dir = ld data_dir;
      data_dir1 = force? data_dir;
      checkMissing(data_dir1);
      return data_dir1;
    };
    r108 = dyn dir_exists2(p43);
    check L180() else D73();
  D3():
    deopt 15 [r8];
  D5():
    deopt 21 [r14];
  D18():
    deopt 67 [r31];
  D20():
    deopt 73 [r34];
  D73():
    deopt 236 [r108];
  L81():
    goto L5();
  L84():
    st dirdir = r14;
    package5 = ld package;
    check L85() else D6();
  L103():
    goto L11();
  L106():
    st pkgname = r34;
    dirname1 = ldf dirname;
    check L107() else D21();
  L180():
    c22 = `as.logical`(r108);
    if c22 then L181() else L26();
  D6():
    deopt 23 [package5];
  D21():
    deopt 76 [];
  L26():
    character1 = ldf character;
    check L185() else D76();
  L27(r115):
    st data_objs = r115;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L187() else L188();
  L85():
    package6 = force? package5;
    checkMissing(package6);
    r15 = `==`(package6, "base");
    st is_base = r15;
    Rd_aliases = ldf Rd_aliases;
    check L86() else D7();
  L107():
    p10 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r36 = dyn dirname1(p10);
    check L108() else D22();
  L181():
    unlist = ldf unlist;
    check L182() else D74();
  D7():
    deopt 29 [];
  D22():
    deopt 78 [r36];
  D74():
    deopt 238 [];
  D76():
    deopt 244 [];
  L28(r118):
    r120 = `!`(r118);
    c23 = `as.logical`(r120);
    if c23 then L189() else L29(c23);
  L86():
    p3 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p4 = prom<V +>{
      dirdir = ld dirdir;
      dirdir1 = force? dirdir;
      checkMissing(dirdir1);
      return dirdir1;
    };
    r18 = dyn Rd_aliases[, `lib.loc`](p3, p4);
    check L87() else D8();
  L108():
    st dirdir = r36;
    dir_exists = ldf `dir.exists`;
    check L109() else D23();
  L182():
    p46 = prom<V +>{
      _try_quietly = ldf `.try_quietly`;
      p45 = prom<V +>{
        list_data_in_pkg = ldf list_data_in_pkg;
        p44 = prom<V +>{
          dir21 = ld dir;
          dir22 = force? dir21;
          checkMissing(dir22);
          return dir22;
        };
        r110 = dyn list_data_in_pkg[dir](p44);
        return r110;
      };
      r112 = dyn _try_quietly(p45);
      return r112;
    };
    r114 = dyn unlist[, `use.names`](p46, FALSE);
    check L183() else D75();
  L185():
    r116 = dyn character1();
    check L186() else D77();
  L187():
    missing2 = ldf missing in base;
    r119 = dyn missing2(<sym package>);
    goto L28(r119);
  L188():
    r117 = dyn base5(<sym package>);
    goto L28(r117);
  D8():
    deopt 33 [r18];
  D23():
    deopt 81 [];
  D75():
    deopt 242 [r114];
  D77():
    deopt 245 [r116];
  L29(c25):
    c32 = `as.logical`(c25);
    if c32 then L195() else L31(c32);
  L87():
    st all_doc_topics = r18;
    is_base = ld is_base;
    check L88() else D9();
  L109():
    p11 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r38 = dyn dir_exists(p11);
    check L110() else D24();
  L183():
    goto L27(r114);
  L186():
    goto L27(r116);
  L189():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L190() else L191();
  D9():
    deopt 35 [is_base];
  D24():
    deopt 83 [r38];
  L30(c28, r122):
    r124 = `!`(r122);
    c29 = `as.logical`(r124);
    c30 = `&&`(c28, c29);
    goto L29(c30);
  L31(c34):
    c41 = `as.logical`(c34);
    if c41 then L201() else L33(c41);
  L88():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    r19 = `!`(is_base1);
    c2 = `as.logical`(r19);
    if c2 then L89() else L6();
  L110():
    r39 = `!`(r38);
    c4 = `as.logical`(r39);
    if c4 then L111() else L12();
  L190():
    code_objs4 = ld code_objs;
    check L192() else D78();
  L191():
    r121 = dyn base6(<sym code_objs>);
    goto L30(c23, r121);
  L195():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L196() else L197();
  D78():
    deopt 253 [c23, code_objs4];
  L6():
    goto L7();
  L7():
    _package_env = ldf `.package_env`;
    check L93() else D12();
  L12():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L115() else D27();
  L13():
    pkgname = ld pkgname;
    check L117() else D29();
  L32(c37, r126):
    r128 = `!`(r126);
    c38 = `as.logical`(r128);
    c39 = `&&`(c37, c38);
    goto L31(c39);
  L33(c43):
    c47 = `as.logical`(c43);
    if c47 then L205() else L34();
  L89():
    _load_package_quietly = ldf `.load_package_quietly`;
    check L90() else D10();
  L111():
    stop2 = ldf stop;
    check L112() else D25();
  L192():
    code_objs5 = force? code_objs4;
    checkMissing(code_objs5);
    length1 = ldf length in base;
    r123 = dyn length1(code_objs5);
    check L193() else D79();
  L196():
    data_objs = ld data_objs;
    check L198() else D80();
  L197():
    r125 = dyn base7(<sym data_objs>);
    goto L32(c32, r125);
  L201():
    getOption = ldf getOption;
    check L202() else D82();
  D10():
    deopt 39 [];
  D12():
    deopt 46 [];
  D25():
    deopt 86 [];
  D27():
    deopt 92 [];
  D29():
    deopt 96 [pkgname];
  D79():
    deopt 256 [c23, r123];
  D80():
    deopt 261 [c32, data_objs];
  D82():
    deopt 268 [c41];
  L34():
    goto L35();
  L35():
    is_base2 = ld is_base;
    check L209() else D86();
  L90():
    p5 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    p6 = prom<V +>{
      dirdir2 = ld dirdir;
      dirdir3 = force? dirdir2;
      checkMissing(dirdir3);
      return dirdir3;
    };
    r22 = dyn _load_package_quietly(p5, p6);
    check L91() else D11();
  L93():
    p7 = prom<V +>{
      package11 = ld package;
      package12 = force? package11;
      checkMissing(package12);
      return package12;
    };
    r25 = dyn _package_env(p7);
    check L94() else D13();
  L112():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r41 = dyn gettextf("directory '%s' does not exist", p12);
      return r41;
    };
    r43 = dyn stop2[, domain](p13, NA_LGL);
    check L113() else D26();
  L115():
    p14 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r46 = dyn file_path_as_absolute(p14);
    check L116() else D28();
  L117():
    pkgname1 = force? pkgname;
    checkMissing(pkgname1);
    r47 = `==`(pkgname1, "base");
    st is_base = r47;
    Rd_aliases1 = ldf Rd_aliases;
    check L118() else D30();
  L193():
    goto L30(c23, r123);
  L198():
    data_objs1 = force? data_objs;
    checkMissing(data_objs1);
    length2 = ldf length in base;
    r127 = dyn length2(data_objs1);
    check L199() else D81();
  L202():
    r129 = dyn getOption("verbose");
    check L203() else D83();
  L205():
    message = ldf message;
    check L206() else D84();
  D11():
    deopt 42 [r22];
  D13():
    deopt 48 [r25];
  D26():
    deopt 90 [r43];
  D28():
    deopt 94 [r46];
  D30():
    deopt 102 [];
  D81():
    deopt 264 [c32, r127];
  D83():
    deopt 270 [c41, r129];
  D84():
    deopt 273 [];
  D86():
    deopt 278 [is_base2];
  L91():
    goto L7();
  L94():
    st code_env = r25;
    ls = ldf ls;
    check L95() else D14();
  L113():
    goto L13();
  L116():
    st dir = r46;
    goto L13();
  L118():
    p15 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r49 = dyn Rd_aliases1[dir](p15);
    check L119() else D31();
  L199():
    goto L32(c32, r127);
  L203():
    c44 = `as.logical`(r129);
    c45 = `&&`(c41, c44);
    goto L33(c45);
  L206():
    r130 = dyn message("neither code nor data objects found");
    check L207() else D85();
  L209():
    is_base3 = force? is_base2;
    checkMissing(is_base3);
    r132 = `!`(is_base3);
    c48 = `as.logical`(r132);
    if c48 then L210() else L36();
  D14():
    deopt 51 [];
  D31():
    deopt 105 [r49];
  D85():
    deopt 275 [r130];
  L36():
    goto L43();
  L43():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L239() else L240();
  L95():
    p8 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r27 = dyn ls[envir, `all.names`](p8, TRUE);
    check L96() else D15();
  L119():
    st all_doc_topics = r49;
    new_env = ldf `new.env`;
    check L120() else D32();
  L207():
    goto L35();
  L210():
    config_val_to_logical = ldf config_val_to_logical;
    check L211() else D87();
  D15():
    deopt 56 [r27];
  D32():
    deopt 108 [];
  D87():
    deopt 282 [];
  L44(r170):
    st undoc_things = r170;
    sym12 = ldf `.isMethodsDispatchOn`;
    base12 = ldf `.isMethodsDispatchOn` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L246() else L247();
  L96():
    st code_objs = r27;
    package13 = ld package;
    check L97() else D16();
  L120():
    r50 = dyn new_env[hash](TRUE);
    check L121() else D33();
  L211():
    p47 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r133 = dyn Sys_getenv("_R_CHECK_UNDOC_USE_ALL_NAMES_", "FALSE");
      return r133;
    };
    r135 = dyn config_val_to_logical(p47);
    check L212() else D88();
  L239():
    unique1 = ldf unique;
    check L241() else D105();
  L240():
    r169 = dyn base11[`code objects`, `data sets`](<lang unique(setdiff(code_objs, all_doc_topics))>, <lang unique(setdiff(data_objs, all_doc_topics))>);
    goto L44(r169);
  D16():
    deopt 58 [package13];
  D33():
    deopt 111 [r50];
  D88():
    deopt 284 [r135];
  D105():
    deopt 344 [];
  L45(r183):
    c54 = `as.logical`(r183);
    if c54 then L249() else L46();
  L97():
    package14 = force? package13;
    checkMissing(package14);
    st pkgname = package14;
    goto L8();
  L121():
    st code_env = r50;
    file_path = ldf `file.path`;
    check L122() else D34();
  L212():
    r136 = `!`(r135);
    c49 = `as.logical`(r136);
    if c49 then L213() else L37();
  L241():
    p59 = prom<V +>{
      setdiff1 = ldf setdiff;
      p57 = prom<V +>{
        code_objs22 = ld code_objs;
        code_objs23 = force? code_objs22;
        checkMissing(code_objs23);
        return code_objs23;
      };
      p58 = prom<V +>{
        all_doc_topics = ld all_doc_topics;
        all_doc_topics1 = force? all_doc_topics;
        checkMissing(all_doc_topics1);
        return all_doc_topics1;
      };
      r173 = dyn setdiff1(p57, p58);
      return r173;
    };
    r175 = dyn unique1(p59);
    check L242() else D106();
  L246():
    _isMethodsDispatchOn1 = ldf `.isMethodsDispatchOn` in base;
    r184 = dyn _isMethodsDispatchOn1();
    check L248() else D110();
  L247():
    r182 = dyn base12();
    goto L45(r182);
  D34():
    deopt 114 [];
  D106():
    deopt 346 [r175];
  D110():
    deopt 359 [r184];
  L37():
    _w_o_ = ldf `%w/o%`;
    check L217() else D91();
  L38():
    sym9 = ldf `.isMethodsDispatchOn`;
    base9 = ldf `.isMethodsDispatchOn` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L227() else L228();
  L46():
    goto L50();
  L50():
    sym15 = ldf `.isMethodsDispatchOn`;
    base15 = ldf `.isMethodsDispatchOn` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L269() else L270();
  L122():
    p16 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r52 = dyn file_path(p16, "R");
    check L123() else D35();
  L213():
    grep1 = ldf grep;
    check L214() else D89();
  L242():
    unique2 = ldf unique;
    check L243() else D107();
  L248():
    goto L45(r184);
  L249():
    __2 = ldf `::`;
    check L250() else D111();
  D35():
    deopt 117 [r52];
  D89():
    deopt 287 [];
  D91():
    deopt 295 [];
  D107():
    deopt 349 [];
  D111():
    deopt 361 [];
  L40(r154):
    c52 = `as.logical`(r154);
    if c52 then L230() else L41();
  L51(r207):
    c57 = `as.logical`(r207);
    if c57 then L272() else L52();
  L123():
    st code_dir = r52;
    dir_exists1 = ldf `dir.exists`;
    check L124() else D36();
  L214():
    p48 = prom<V +>{
      code_objs6 = ld code_objs;
      code_objs7 = force? code_objs6;
      checkMissing(code_objs7);
      return code_objs7;
    };
    r138 = dyn grep1[, , value]("^[^.].*", p48, TRUE);
    check L215() else D90();
  L217():
    p49 = prom<V +>{
      code_objs8 = ld code_objs;
      code_objs9 = force? code_objs8;
      checkMissing(code_objs9);
      return code_objs9;
    };
    p50 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r142):
      return r142;
    L1():
      c50 = ldf c in base;
      r143 = dyn c50(".Depends");
      goto L0(r143);
    L2():
      r141 = dyn base8(".Depends");
      goto L0(r141);
    };
    r145 = dyn _w_o_(p49, p50);
    check L218() else D92();
  L227():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r155 = dyn _isMethodsDispatchOn();
    check L229() else D98();
  L228():
    r153 = dyn base9();
    goto L40(r153);
  L243():
    p62 = prom<V +>{
      setdiff2 = ldf setdiff;
      p60 = prom<V +>{
        data_objs2 = ld data_objs;
        data_objs3 = force? data_objs2;
        checkMissing(data_objs3);
        return data_objs3;
      };
      p61 = prom<V +>{
        all_doc_topics2 = ld all_doc_topics;
        all_doc_topics3 = force? all_doc_topics2;
        checkMissing(all_doc_topics3);
        return all_doc_topics3;
      };
      r178 = dyn setdiff2(p60, p61);
      return r178;
    };
    r180 = dyn unique2(p62);
    check L244() else D108();
  L250():
    r185 = dyn __2("methods", "getClasses");
    check L251() else D112();
  L269():
    _isMethodsDispatchOn2 = ldf `.isMethodsDispatchOn` in base;
    r208 = dyn _isMethodsDispatchOn2();
    check L271() else D122();
  L270():
    r206 = dyn base15();
    goto L51(r206);
  D36():
    deopt 120 [];
  D90():
    deopt 292 [r138];
  D92():
    deopt 298 [r145];
  D98():
    deopt 318 [r155];
  D108():
    deopt 351 [r180];
  D112():
    deopt 364 [r185];
  D122():
    deopt 399 [r208];
  L41():
    goto L42();
  L42():
    setdiff = ldf setdiff;
    check L236() else D103();
  L52():
    goto L57();
  L57():
    is_base4 = ld is_base;
    check L296() else D136();
  L124():
    p17 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r54 = dyn dir_exists1(p17);
    check L125() else D37();
  L215():
    st code_objs = r138;
    goto L38();
  L218():
    st code_objs = r145;
    code_objs10 = ld code_objs;
    check L219() else D93();
  L229():
    goto L40(r155);
  L230():
    __1 = ldf `::`;
    check L231() else D99();
  L244():
    list = ldf list in base;
    r181 = dyn list(r175, r180);
    check L245() else D109();
  L251():
    checkFun.0(r185);
    r186 = r185 as cls;
    p63 = prom<V +>{
      code_env8 = ld code_env;
      code_env9 = force? code_env8;
      checkMissing(code_env9);
      return code_env9;
    };
    r188 = dyn r186(p63);
    check L252() else D113();
  L271():
    goto L51(r208);
  L272():
    r209 = clos inner3355313315;
    st `.make_S4_method_siglist` = r209;
    lapply = ldf lapply;
    check L273() else D123();
  D37():
    deopt 122 [r54];
  D93():
    deopt 300 [code_objs10];
  D99():
    deopt 320 [];
  D103():
    deopt 334 [];
  D109():
    deopt 354 [r181];
  D113():
    deopt 367 [r188];
  D123():
    deopt 404 [];
  D136():
    deopt 447 [is_base4];
  L125():
    c5 = `as.logical`(r54);
    if c5 then L126() else L14();
  L219():
    code_objs11 = force? code_objs10;
    checkMissing(code_objs11);
    c51 = `is.object`(code_objs11);
    if c51 then L220() else L221(code_objs11);
  L231():
    r156 = dyn __1("methods", "is");
    check L232() else D100();
  L236():
    p55 = prom<V +>{
      code_objs20 = ld code_objs;
      code_objs21 = force? code_objs20;
      checkMissing(code_objs21);
      return code_objs21;
    };
    p56 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r164):
      return r164;
    L1():
      c53 = ldf c in base;
      r165 = dyn c53("Arith", "Compare", "Complex", "Logic", "Math", "Math2", "Ops", "Summary", "matrixOps");
      goto L0(r165);
    L2():
      r163 = dyn base10("Arith", "Compare", "Complex", "Logic", "Math", "Math2", "Ops", "Summary", "matrixOps");
      goto L0(r163);
    };
    r167 = dyn setdiff(p55, p56);
    check L237() else D104();
  L245():
    goto L44(r181);
  L252():
    st S4_classes = r188;
    S4_classes = ld S4_classes;
    check L253() else D114();
  L273():
    p70 = prom<V +>{
      _get_S4_generics = ldf `.get_S4_generics`;
      p69 = prom<V +>{
        code_env10 = ld code_env;
        code_env11 = force? code_env10;
        checkMissing(code_env11);
        return code_env11;
      };
      r211 = dyn _get_S4_generics(p69);
      return r211;
    };
    p71 = prom<V +>{
      _make_S4_method_siglist = ld `.make_S4_method_siglist`;
      _make_S4_method_siglist1 = force? _make_S4_method_siglist;
      checkMissing(_make_S4_method_siglist1);
      return _make_S4_method_siglist1;
    };
    r214 = dyn lapply(p70, p71);
    check L274() else D124();
  L296():
    is_base5 = force? is_base4;
    checkMissing(is_base5);
    c60 = `as.logical`(is_base5);
    if c60 then L297() else L58();
  D100():
    deopt 323 [r156];
  D104():
    deopt 337 [r167];
  D114():
    deopt 369 [S4_classes];
  D124():
    deopt 407 [r214];
  L14():
    goto L19();
  L19():
    ls1 = ldf ls;
    check L148() else D54();
  L39(dx5):
    st code_objs = dx5;
    goto L38();
  L58():
    goto L71();
  L71():
    l1 = ld undoc_things;
    class__ = ldf `class<-`;
    check L344() else D161();
  L126():
    file_path1 = ldf `file.path`;
    check L127() else D38();
  L220():
    dr4 = tryDispatchBuiltin.1("[", code_objs11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L222() else L221(dr4);
  L221(code_objs13):
    startsWith = ldf startsWith;
    check L223() else D94();
  L232():
    st is = r156;
    Filter = ldf Filter;
    check L233() else D101();
  L237():
    st code_objs = r167;
    goto L43();
  L253():
    S4_classes1 = force? S4_classes;
    checkMissing(S4_classes1);
    c55 = `is.object`(S4_classes1);
    if c55 then L254() else L255(S4_classes1);
  L274():
    st S4_methods = r214;
    sym16 = ldf `as.character`;
    base16 = ldf `as.character` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L275() else L276();
  L297():
    as_list = ldf `as.list`;
    check L298() else D137();
  D38():
    deopt 124 [];
  D54():
    deopt 169 [];
  D94():
    deopt 303 [code_objs13];
  D101():
    deopt 326 [];
  D137():
    deopt 450 [];
  D161():
    deopt 536 ["undoc", l1, "undoc"];
  L47(dx7):
    st S4_classes = dx7;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L259() else L260();
  L53(r216):
    st S4_methods = r216;
    S4_methods2 = ld S4_methods;
    check L280() else D128();
  L127():
    p18 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r56 = dyn file_path1(p18, "DESCRIPTION");
    check L128() else D39();
  L148():
    p28 = prom<V +>{
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      return code_env7;
    };
    r77 = dyn ls1[envir, `all.names`](p28, TRUE);
    check L149() else D55();
  L222():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L39(dx4);
  L223():
    p51 = prom<V +>{
      code_objs14 = ld code_objs;
      code_objs15 = force? code_objs14;
      checkMissing(code_objs15);
      return code_objs15;
    };
    r147 = dyn startsWith(p51, ".__C__");
    check L224() else D95();
  L233():
    p53 = prom<V +>{
      r157 = clos inner1384373858;
      return r157;
    };
    p54 = prom<V +>{
      code_objs18 = ld code_objs;
      code_objs19 = force? code_objs18;
      checkMissing(code_objs19);
      return code_objs19;
    };
    r160 = dyn Filter(p53, p54);
    check L234() else D102();
  L254():
    dr6 = tryDispatchBuiltin.1("[", S4_classes1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L256() else L255(dr6);
  L255(S4_classes3):
    _notin_ = ldf `%notin%`;
    check L257() else D115();
  L275():
    unlist1 = ldf unlist;
    check L277() else D125();
  L276():
    r215 = dyn base16(<lang unlist(S4_methods, use.names=FALSE)>);
    goto L53(r215);
  L298():
    p79 = prom<V +>{
      sym19 = ldf baseenv;
      base19 = ldf baseenv in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r240):
      return r240;
    L1():
      baseenv = ldf baseenv in base;
      r241 = dyn baseenv();
      goto L0(r241);
    L2():
      r239 = dyn base19();
      goto L0(r239);
    };
    r243 = dyn as_list[, `all.names`](p79, TRUE);
    check L299() else D138();
  L344():
    r294 = dyn class__(l1, NULL, "undoc");
    check L345() else D162();
  D39():
    deopt 127 [r56];
  D55():
    deopt 174 [r77];
  D95():
    deopt 306 [code_objs13, r147];
  D102():
    deopt 329 [r160];
  D115():
    deopt 372 [S4_classes3];
  D125():
    deopt 412 [];
  D128():
    deopt 420 [S4_methods2];
  D138():
    deopt 454 [r243];
  D162():
    deopt 538 ["undoc", r294];
  L48(r198):
    st undoc_things = r198;
    goto L50();
  L128():
    st dfile = r56;
    file_test = ldf file_test;
    check L129() else D40();
  L149():
    st code_objs = r77;
    file_exists = ldf `file.exists`;
    check L150() else D56();
  L224():
    startsWith1 = ldf startsWith;
    check L225() else D96();
  L234():
    st code_objs = r160;
    goto L42();
  L256():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L47(dx6);
  L257():
    p66 = prom<V +>{
      vapply = ldf vapply;
      p64 = prom<V +>{
        S4_classes4 = ld S4_classes;
        S4_classes5 = force? S4_classes4;
        checkMissing(S4_classes5);
        return S4_classes5;
      };
      p65 = prom<V +>{
        ___ = ldf `:::`;
        r190 = dyn ___("utils", "topicName");
        return r190;
      };
      r192 = dyn vapply[, , , type, `USE.NAMES`](p64, p65, " ", "class", FALSE);
      return r192;
    };
    p67 = prom<V +>{
      all_doc_topics4 = ld all_doc_topics;
      all_doc_topics5 = force? all_doc_topics4;
      checkMissing(all_doc_topics5);
      return all_doc_topics5;
    };
    r195 = dyn _notin_(p66, p67);
    check L258() else D116();
  L259():
    undoc_things = ld undoc_things;
    check L261() else D117();
  L260():
    r197 = dyn base13(<sym undoc_things>, <lang list(`S4 classes`=unique(S4_classes))>);
    goto L48(r197);
  L277():
    p72 = prom<V +>{
      S4_methods = ld S4_methods;
      S4_methods1 = force? S4_methods;
      checkMissing(S4_methods1);
      return S4_methods1;
    };
    r218 = dyn unlist1[, `use.names`](p72, FALSE);
    check L278() else D126();
  L280():
    S4_methods3 = force? S4_methods2;
    checkMissing(S4_methods3);
    c58 = `is.object`(S4_methods3);
    if c58 then L281() else L282(S4_methods3);
  L299():
    st ff = r243;
    sym20 = ldf names;
    base20 = ldf names in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L300() else L301();
  L345():
    st undoc_things = r294;
    undoc_things8 = ld undoc_things;
    check L346() else D163();
  D40():
    deopt 130 [];
  D56():
    deopt 177 [];
  D96():
    deopt 307 [code_objs13, r147];
  D116():
    deopt 375 [S4_classes3, r195];
  D117():
    deopt 380 [undoc_things];
  D126():
    deopt 416 [r218];
  D163():
    deopt 540 [undoc_things8];
  L54(dx9):
    st S4_methods = dx9;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L286() else L287();
  L59(r245):
    c61 = `is.object`(r245);
    if c61 then L304() else L305(r245);
  L129():
    p19 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r58 = dyn file_test("-f", p19);
    check L130() else D41();
  L150():
    p30 = prom<V +>{
      file_path3 = ldf `file.path`;
      p29 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r79 = dyn file_path3(p29, "NAMESPACE");
      return r79;
    };
    r81 = dyn file_exists(p30);
    check L151() else D57();
  L225():
    p52 = prom<V +>{
      code_objs16 = ld code_objs;
      code_objs17 = force? code_objs16;
      checkMissing(code_objs17);
      return code_objs17;
    };
    r149 = dyn startsWith1(p52, ".__T__");
    check L226() else D97();
  L258():
    __3 = ldf `[` in base;
    r196 = dyn __3(S4_classes3, r195);
    goto L47(r196);
  L261():
    undoc_things1 = force? undoc_things;
    checkMissing(undoc_things1);
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L262() else L263();
  L278():
    as_character = ldf `as.character` in base;
    r219 = dyn as_character(r218);
    check L279() else D127();
  L281():
    dr8 = tryDispatchBuiltin.1("[", S4_methods3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L283() else L282(dr8);
  L282(S4_methods5):
    _notin_1 = ldf `%notin%`;
    check L284() else D129();
  L300():
    ff = ld ff;
    check L302() else D139();
  L301():
    r244 = dyn base20(<sym ff>);
    goto L59(r244);
  L346():
    undoc_things9 = force? undoc_things8;
    checkMissing(undoc_things9);
    popenv;
    return undoc_things9;
  D41():
    deopt 133 [r58];
  D57():
    deopt 179 [r81];
  D97():
    deopt 310 [code_objs13, r147, r149];
  D127():
    deopt 418 [r219];
  D129():
    deopt 423 [S4_methods5];
  D139():
    deopt 458 [ff];
  L49(r200):
    c56 = ldf c in base;
    r204 = dyn c56(undoc_things1, r200);
    check L267() else D121();
  L55(r229):
    st undoc_things = r229;
    goto L57();
  L60(dx11):
    st prims = dx11;
    sort = ldf sort;
    check L309() else D143();
  L130():
    c6 = `as.logical`(r58);
    if c6 then L131() else L15();
  L151():
    c8 = `as.logical`(r81);
    if c8 then L152() else L20(c8);
  L226():
    r150 = `||`(r147, r149);
    r151 = `!`(r150);
    __ = ldf `[` in base;
    r152 = dyn __(code_objs13, r151);
    goto L39(r152);
  L262():
    unique3 = ldf unique;
    check L264() else D118();
  L263():
    r199 = dyn base14[`S4 classes`](<lang unique(S4_classes)>);
    goto L49(r199);
  L279():
    goto L53(r219);
  L283():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L54(dx8);
  L284():
    p75 = prom<V +>{
      vapply1 = ldf vapply;
      p73 = prom<V +>{
        S4_methods6 = ld S4_methods;
        S4_methods7 = force? S4_methods6;
        checkMissing(S4_methods7);
        return S4_methods7;
      };
      p74 = prom<V +>{
        ___1 = ldf `:::`;
        r221 = dyn ___1("utils", "topicName");
        return r221;
      };
      r223 = dyn vapply1[, , , type, `USE.NAMES`](p73, p74, " ", "method", FALSE);
      return r223;
    };
    p76 = prom<V +>{
      all_doc_topics6 = ld all_doc_topics;
      all_doc_topics7 = force? all_doc_topics6;
      checkMissing(all_doc_topics7);
      return all_doc_topics7;
    };
    r226 = dyn _notin_1(p75, p76);
    check L285() else D130();
  L286():
    undoc_things2 = ld undoc_things;
    check L288() else D131();
  L287():
    r228 = dyn base17(<sym undoc_things>, <lang list(`S4 methods`=unique(sub("([^,]*),(.*)", "generic '\\1' and siglist '\\2'", S4_methods)))>);
    goto L55(r228);
  L302():
    ff1 = force? ff;
    checkMissing(ff1);
    names = ldf names in base;
    r246 = dyn names(ff1);
    check L303() else D140();
  L304():
    dr10 = tryDispatchBuiltin.1("[", r245);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L306() else L305(dr10);
  L305(r248):
    vapply2 = ldf vapply;
    check L307() else D141();
  D118():
    deopt 385 [];
  D121():
    deopt 392 [r204];
  D130():
    deopt 426 [S4_methods5, r226];
  D131():
    deopt 431 [undoc_things2];
  D140():
    deopt 461 [r246];
  D141():
    deopt 463 [r248];
  D143():
    deopt 471 [];
  L15():
    character = ldf character;
    check L135() else D44();
  L16(r61):
    st meta = r61;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L137() else D46();
  L20(c10):
    c17 = `as.logical`(c10);
    if c17 then L159() else L22();
  L131():
    _read_description = ldf `.read_description`;
    check L132() else D42();
  L152():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L153() else L154();
  L264():
    p68 = prom<V +>{
      S4_classes6 = ld S4_classes;
      S4_classes7 = force? S4_classes6;
      checkMissing(S4_classes7);
      return S4_classes7;
    };
    r202 = dyn unique3(p68);
    check L265() else D119();
  L267():
    goto L48(r204);
  L285():
    __4 = ldf `[` in base;
    r227 = dyn __4(S4_methods5, r226);
    goto L54(r227);
  L288():
    undoc_things3 = force? undoc_things2;
    checkMissing(undoc_things3);
    sym18 = ldf list;
    base18 = ldf list in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L289() else L290();
  L303():
    goto L59(r246);
  L306():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L60(dx10);
  L307():
    p80 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    p81 = prom<V +>{
      is_primitive = ld `is.primitive`;
      is_primitive1 = force? is_primitive;
      checkMissing(is_primitive1);
      return is_primitive1;
    };
    r251 = dyn vapply2(p80, p81, NA_LGL);
    check L308() else D142();
  L309():
    p82 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L3() else L4();
    L0(r254):
      return r254;
    L3():
      sym22 = ldf names;
      base22 = ldf names in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L5() else L6();
    L4():
      r253 = dyn base21(<lang names(.ArgsEnv)>, <lang names(.GenericArgsEnv)>);
      goto L0(r253);
    L1(r256):
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L7() else L8();
    L5():
      _ArgsEnv = ld `.ArgsEnv`;
      _ArgsEnv1 = force? _ArgsEnv;
      checkMissing(_ArgsEnv1);
      names1 = ldf names in base;
      r257 = dyn names1(_ArgsEnv1);
      goto L1(r257);
    L6():
      r255 = dyn base22(<sym .ArgsEnv>);
      goto L1(r255);
    L2(r259):
      c62 = ldf c in base;
      r261 = dyn c62(r256, r259);
      goto L0(r261);
    L7():
      _GenericArgsEnv = ld `.GenericArgsEnv`;
      _GenericArgsEnv1 = force? _GenericArgsEnv;
      checkMissing(_GenericArgsEnv1);
      names2 = ldf names in base;
      r260 = dyn names2(_GenericArgsEnv1);
      goto L2(r260);
    L8():
      r258 = dyn base23(<sym .GenericArgsEnv>);
      goto L2(r258);
    };
    r263 = dyn sort(p82);
    check L310() else D144();
  D42():
    deopt 135 [];
  D44():
    deopt 139 [];
  D46():
    deopt 143 [];
  D119():
    deopt 387 [r202];
  D142():
    deopt 467 [r248, r251];
  D144():
    deopt 473 [r263];
  L21(c13, r83):
    r91 = `!`(r83);
    c14 = `as.logical`(r91);
    c15 = `&&`(c13, c14);
    goto L20(c15);
  L22():
    goto L8();
  L56(r231):
    c59 = ldf c in base;
    r237 = dyn c59(undoc_things3, r231);
    check L294() else D135();
  L132():
    p20 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r60 = dyn _read_description(p20);
    check L133() else D43();
  L135():
    r62 = dyn character();
    check L136() else D45();
  L137():
    p21 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    p22 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    p23 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r66 = dyn _source_assignments_in_code_dir(p21, p22, p23);
    check L138() else D47();
  L153():
    tryCatch = ldf tryCatch;
    check L155() else D58();
  L154():
    r82 = dyn base3(<lang tryCatch(`<-`(nsInfo, parseNamespaceFile(pkgname, dirdir)), error=identity)>, "error");
    goto L21(c8, r82);
  L159():
    intersect = ldf intersect;
    check L160() else D61();
  L265():
    list1 = ldf list in base;
    r203 = dyn list1(r202);
    check L266() else D120();
  L289():
    unique4 = ldf unique;
    check L291() else D132();
  L290():
    r230 = dyn base18[`S4 methods`](<lang unique(sub("([^,]*),(.*)", "generic '\\1' and siglist '\\2'", S4_methods))>);
    goto L56(r230);
  L308():
    __5 = ldf `[` in base;
    r252 = dyn __5(r248, r251);
    goto L60(r252);
  L310():
    st prototypes = r263;
    setdiff3 = ldf setdiff;
    check L311() else D145();
  D43():
    deopt 137 [r60];
  D45():
    deopt 140 [r62];
  D47():
    deopt 147 [r66];
  D58():
    deopt 183 [c8];
  D61():
    deopt 195 [];
  D120():
    deopt 390 [r203];
  D132():
    deopt 436 [];
  D135():
    deopt 443 [r237];
  D145():
    deopt 476 [];
  L133():
    goto L16(r60);
  L136():
    goto L16(r62);
  L138():
    file_path2 = ldf `file.path`;
    check L139() else D48();
  L155():
    p33 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p31 = prom<V +>{
        pkgname2 = ld pkgname;
        pkgname3 = force? pkgname2;
        checkMissing(pkgname3);
        return pkgname3;
      };
      p32 = prom<V +>{
        dirdir4 = ld dirdir;
        dirdir5 = force? dirdir4;
        checkMissing(dirdir5);
        return dirdir5;
      };
      r86 = dyn parseNamespaceFile(p31, p32);
      st nsInfo = r86;
      invisible.0();
      return r86;
    };
    p34 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r89 = dyn tryCatch[, error](p33, p34);
    check L156() else D59();
  L160():
    p35 = prom<V +>{
      code_objs = ld code_objs;
      code_objs1 = force? code_objs;
      checkMissing(code_objs1);
      return code_objs1;
    };
    p36 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      c18 = `is.object`(nsInfo1);
      if c18 then L1() else L2(nsInfo1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", nsInfo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nsInfo3):
      r93 = `$`(nsInfo3, <sym exports>);
      goto L0(r93);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r95 = dyn intersect(p35, p36);
    check L161() else D62();
  L266():
    goto L49(r203);
  L291():
    p78 = prom<V +>{
      sub = ldf sub;
      p77 = prom<V +>{
        S4_methods8 = ld S4_methods;
        S4_methods9 = force? S4_methods8;
        checkMissing(S4_methods9);
        return S4_methods9;
      };
      r233 = dyn sub("([^,]*),(.*)", "generic '\\1' and siglist '\\2'", p77);
      return r233;
    };
    r235 = dyn unique4(p78);
    check L292() else D133();
  L294():
    goto L55(r237);
  L311():
    p83 = prom<V +>{
      prototypes = ld prototypes;
      prototypes1 = force? prototypes;
      checkMissing(prototypes1);
      return prototypes1;
    };
    p84 = prom<V +>{
      prims = ld prims;
      prims1 = force? prims;
      checkMissing(prims1);
      return prims1;
    };
    r266 = dyn setdiff3(p83, p84);
    check L312() else D146();
  D48():
    deopt 149 [];
  D59():
    deopt 187 [c8, r89];
  D62():
    deopt 198 [r95];
  D133():
    deopt 438 [r235];
  D146():
    deopt 479 [r266];
  L139():
    p24 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    r68 = dyn file_path2(p24, "sysdata.rda");
    check L140() else D49();
  L156():
    inherits = ldf inherits in base;
    r90 = dyn inherits(r89, "error", FALSE);
    check L157() else D60();
  L161():
    st OK = r95;
    nsInfo4 = ld nsInfo;
    check L162() else D63();
  L292():
    list2 = ldf list in base;
    r236 = dyn list2(r235);
    check L293() else D134();
  L312():
    st extras = r266;
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L313() else L314();
  D49():
    deopt 152 [r68];
  D60():
    deopt 191 [c8, r90];
  D63():
    deopt 200 [nsInfo4];
  D134():
    deopt 441 [r236];
  L61(r268):
    c63 = `as.logical`(r268);
    if c63 then L317() else L62();
  L140():
    st sys_data_file = r68;
    file_test1 = ldf file_test;
    check L141() else D50();
  L157():
    goto L21(c8, r90);
  L162():
    nsInfo5 = force? nsInfo4;
    checkMissing(nsInfo5);
    c19 = `is.object`(nsInfo5);
    if c19 then L164() else L165(nsInfo5);
  L293():
    goto L56(r236);
  L313():
    extras = ld extras;
    check L315() else D147();
  L314():
    r267 = dyn base24(<sym extras>);
    goto L61(r267);
  D50():
    deopt 155 [];
  D147():
    deopt 483 [extras];
  L62():
    goto L65();
  L65():
    setdiff4 = ldf setdiff;
    check L327() else D153();
  L141():
    p25 = prom<V +>{
      sys_data_file = ld sys_data_file;
      sys_data_file1 = force? sys_data_file;
      checkMissing(sys_data_file1);
      return sys_data_file1;
    };
    r70 = dyn file_test1("-f", p25);
    check L142() else D51();
  L163(dx3):
    s = toForSeq(dx3);
    l = length(s);
    i = 0;
    goto L23(i);
  L164():
    dr2 = tryDispatchBuiltin.1("$", nsInfo5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L166() else L165(dr2);
  L165(nsInfo7):
    r96 = `$`(nsInfo7, <sym exportPatterns>);
    goto L163(r96);
  L315():
    extras1 = force? extras;
    checkMissing(extras1);
    length3 = ldf length in base;
    r269 = dyn length3(extras1);
    check L316() else D148();
  L317():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L318() else L319();
  D51():
    deopt 158 [r70];
  D148():
    deopt 486 [r269];
  D153():
    deopt 504 [];
  L23(i1):
    i2 = `+`.1(i1, 1);
    c20 = `<`.1(l, i2);
    if c20 then L167() else L25();
  L63(r271):
    st undoc_things = r271;
    goto L65();
  L142():
    c7 = `as.logical`(r70);
    if c7 then L143() else L17();
  L166():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L163(dx2);
  L316():
    goto L61(r269);
  L318():
    undoc_things4 = ld undoc_things;
    check L320() else D149();
  L319():
    r270 = dyn base25(<sym undoc_things>, <lang list(prim_extra=extras)>);
    goto L63(r270);
  L327():
    p85 = prom<V +>{
      prims2 = ld prims;
      prims3 = force? prims2;
      checkMissing(prims3);
      return prims3;
    };
    p86 = prom<V +>{
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r279):
      return r279;
    L1():
      langElts = ld langElts;
      langElts1 = force? langElts;
      checkMissing(langElts1);
      prototypes2 = ld prototypes;
      prototypes3 = force? prototypes2;
      checkMissing(prototypes3);
      c65 = ldf c in base;
      r280 = dyn c65(langElts1, prototypes3);
      goto L0(r280);
    L2():
      r278 = dyn base27(<sym langElts>, <sym prototypes>);
      goto L0(r278);
    };
    r282 = dyn setdiff4(p85, p86);
    check L328() else D154();
  D149():
    deopt 489 [undoc_things4];
  D154():
    deopt 507 [r282];
  L17():
    goto L18(NULL);
  L18(r74):
    goto L19();
  L25():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L168() else L169();
  L143():
    load = ldf load;
    check L144() else D52();
  L167():
    unique = ldf unique;
    check L174() else D68();
  L320():
    undoc_things5 = force? undoc_things4;
    checkMissing(undoc_things5);
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L321() else L322();
  L328():
    st miss = r282;
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L329() else L330();
  D52():
    deopt 160 [];
  D68():
    deopt 221 [];
  L24(i7, r98):
    st OK = r98;
    goto L23(i7);
  L64(r273):
    c64 = ldf c in base;
    r275 = dyn c64(undoc_things5, r273);
    check L325() else D152();
  L66(r284):
    c66 = `as.logical`(r284);
    if c66 then L333() else L67();
  L144():
    p26 = prom<V +>{
      sys_data_file2 = ld sys_data_file;
      sys_data_file3 = force? sys_data_file2;
      checkMissing(sys_data_file3);
      return sys_data_file3;
    };
    p27 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r73 = dyn load(p26, p27);
    check L145() else D53();
  L168():
    OK = ld OK;
    check L170() else D64();
  L169():
    r97 = dyn base4(<sym OK>, <lang grep(p, code_objs, value=TRUE)>);
    goto L24(i2, r97);
  L174():
    p41 = prom<V +>{
      OK2 = ld OK;
      OK3 = force? OK2;
      checkMissing(OK3);
      return OK3;
    };
    r104 = dyn unique(p41);
    check L175() else D69();
  L321():
    extras2 = ld extras;
    check L323() else D150();
  L322():
    r272 = dyn base26[prim_extra](<sym extras>);
    goto L64(r272);
  L329():
    miss = ld miss;
    check L331() else D155();
  L330():
    r283 = dyn base28(<sym miss>);
    goto L66(r283);
  D53():
    deopt 163 [r73];
  D64():
    deopt 205 [i2, OK];
  D69():
    deopt 223 [r104];
  D150():
    deopt 493 [extras2];
  D152():
    deopt 499 [r275];
  D155():
    deopt 511 [miss];
  L67():
    goto L70(NULL);
  L70(r292):
    goto L71();
  L145():
    goto L18(r73);
  L170():
    OK1 = force? OK;
    checkMissing(OK1);
    grep = ldf grep;
    check L171() else D65();
  L175():
    st code_objs = r104;
    goto L8();
  L323():
    extras3 = force? extras2;
    checkMissing(extras3);
    list3 = ldf list in base;
    r274 = dyn list3(extras3);
    check L324() else D151();
  L325():
    goto L63(r275);
  L331():
    miss1 = force? miss;
    checkMissing(miss1);
    length4 = ldf length in base;
    r285 = dyn length4(miss1);
    check L332() else D156();
  L333():
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L334() else L335();
  D65():
    deopt 208 [i2];
  D151():
    deopt 497 [r274];
  D156():
    deopt 514 [r285];
  L68(r287):
    st undoc_things = r287;
    goto L70(r287);
  L171():
    p39 = prom<V +>{
      p37 = ld p;
      p38 = force? p37;
      checkMissing(p38);
      return p38;
    };
    p40 = prom<V +>{
      code_objs2 = ld code_objs;
      code_objs3 = force? code_objs2;
      checkMissing(code_objs3);
      return code_objs3;
    };
    r101 = dyn grep[, , value](p39, p40, TRUE);
    check L172() else D66();
  L324():
    goto L64(r274);
  L332():
    goto L66(r285);
  L334():
    undoc_things6 = ld undoc_things;
    check L336() else D157();
  L335():
    r286 = dyn base29(<sym undoc_things>, <lang list(primitives=miss)>);
    goto L68(r286);
  D66():
    deopt 213 [i2, r101];
  D157():
    deopt 517 [undoc_things6];
  L172():
    c21 = ldf c in base;
    r102 = dyn c21(OK1, r101);
    check L173() else D67();
  L336():
    undoc_things7 = force? undoc_things6;
    checkMissing(undoc_things7);
    sym30 = ldf list;
    base30 = ldf list in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L337() else L338();
  D67():
    deopt 215 [i2, r102];
  L69(r289):
    c67 = ldf c in base;
    r291 = dyn c67(undoc_things7, r289);
    check L341() else D160();
  L173():
    goto L24(i2, r102);
  L337():
    miss2 = ld miss;
    check L339() else D158();
  L338():
    r288 = dyn base30[primitives](<sym miss>);
    goto L69(r288);
  D158():
    deopt 521 [miss2];
  D160():
    deopt 527 [r291];
  L339():
    miss3 = force? miss2;
    checkMissing(miss3);
    list4 = ldf list in base;
    r290 = dyn list4(miss3);
    check L340() else D159();
  L341():
    goto L68(r291);
  D159():
    deopt 525 [r290];
  L340():
    goto L69(r290);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg code_env:*, reg code_env1:V, reg c:L, reg code_env3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f1:*, reg f2:V, reg __:cls, reg r:V, reg suppressMessages:cls, reg is:cls, reg fdef:*, reg fdef1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg c1:L, reg __1:cls, reg r5:V, reg pkgname:*, reg pkgname1:V, reg r6:V |
    mkenv;
    st f = f;
    code_env = ld code_env;
    check L2() else D0();
  D0():
    deopt 0 [code_env];
  L2():
    code_env1 = force? code_env;
    checkMissing(code_env1);
    c = `is.object`(code_env1);
    if c then L3() else L4(code_env1);
  L0(dx1):
    st fdef = dx1;
    suppressMessages = ldf suppressMessages;
    check L7() else D2();
  L3():
    dr = tryDispatchBuiltin.1("[[", code_env1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(code_env3):
    f1 = ld f;
    check L6() else D1();
  D1():
    deopt 2 [code_env3, f1];
  D2():
    deopt 7 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    f2 = force? f1;
    __ = ldf `[[` in base;
    r = dyn __(code_env3, f2);
    goto L0(r);
  L7():
    p1 = prom<V +>{
      is = ldf is;
      p = prom<V +>{
        fdef = ld fdef;
        fdef1 = force? fdef;
        checkMissing(fdef1);
        return fdef1;
      };
      r2 = dyn is(p, "genericFunction");
      return r2;
    };
    r4 = dyn suppressMessages(p1);
    check L8() else D3();
  D3():
    deopt 9 [r4];
  L8():
    c1 = `as.logical`(r4);
    if c1 then L9() else L1();
  L1():
    popenv;
    return TRUE;
  L9():
    __1 = ldf `@` in base;
    r5 = dyn __1(<sym fdef>, <sym package>);
    pkgname = ld pkgname;
    check L10() else D4();
  D4():
    deopt 11 [r5, pkgname];
  L10():
    pkgname1 = force? pkgname;
    checkMissing(pkgname1);
    r6 = `==`(r5, pkgname1);
    popenv;
    return r6;
  }
}
fun inner3355313315(g) {
  (reg g:*) -+> V { var g:*, reg _get_S4_methods_list:cls, reg g1:*, reg g2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r2:V, reg _make_siglist:cls, reg mlist:*, reg mlist1:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sigs:*, reg sigs1:V, reg length:cls, reg r7:V, reg c:L, reg paste0:cls, reg g3:*, reg g4:V, reg p3:p(V +), reg sigs2:*, reg sigs3:V, reg p4:p(V +), reg r10:V, reg character:cls, reg r11:V |
    mkenv;
    st g = g;
    _get_S4_methods_list = ldf `.get_S4_methods_list`;
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
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r2 = dyn _get_S4_methods_list(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    st mlist = r2;
    _make_siglist = ldf `.make_siglist`;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p2 = prom<V +>{
      mlist = ld mlist;
      mlist1 = force? mlist;
      checkMissing(mlist1);
      return mlist1;
    };
    r4 = dyn _make_siglist(p2);
    check L5() else D3();
  D3():
    deopt 9 [r4];
  L5():
    st sigs = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r6):
    c = `as.logical`(r6);
    if c then L10() else L1();
  L6():
    sigs = ld sigs;
    check L8() else D4();
  L7():
    r5 = dyn base(<sym sigs>);
    goto L0(r5);
  D4():
    deopt 13 [sigs];
  L1():
    character = ldf character;
    check L14() else D8();
  L8():
    sigs1 = force? sigs;
    checkMissing(sigs1);
    length = ldf length in base;
    r7 = dyn length(sigs1);
    check L9() else D5();
  L10():
    paste0 = ldf paste0;
    check L11() else D6();
  D5():
    deopt 16 [r7];
  D6():
    deopt 18 [];
  D8():
    deopt 24 [];
  L9():
    goto L0(r7);
  L11():
    p3 = prom<V +>{
      g3 = ld g;
      g4 = force? g3;
      checkMissing(g4);
      return g4;
    };
    p4 = prom<V +>{
      sigs2 = ld sigs;
      sigs3 = force? sigs2;
      checkMissing(sigs3);
      return sigs3;
    };
    r10 = dyn paste0(p3, ",", p4);
    check L12() else D7();
  L14():
    r11 = dyn character();
    check L15() else D9();
  D7():
    deopt 22 [r10];
  D9():
    deopt 25 [r11];
  L12():
    popenv;
    return r10;
  L15():
    popenv;
    return r11;
  }
}