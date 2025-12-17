fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.check_Rd_metadata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg r8:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg package1:*, reg package2:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg stop:cls, reg r13:V, reg find_package:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r17:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r19:V, reg file_test:cls, reg rds:*, reg rds1:V, reg p4:p(V +), reg r21:V, reg c2:L, reg readRDS:cls, reg rds2:*, reg rds3:V, reg p5:p(V +), reg r23:V, reg r24:V, reg r25:V, reg _get_package_metadata:cls, reg dir3:*, reg dir4:V, reg p6:p(V +), reg r27:V, reg c3:L, reg r29:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r30:V, reg Rd_contents:cls, reg Rd_db:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r32:V, reg p8:p(V +), reg r34:V, reg NROW:cls, reg meta:*, reg meta1:V, reg p9:p(V +), reg r36:V, reg r37:V, reg c4:L, reg out:*, reg out1:V, reg meta2:*, reg meta3:V, reg c5:L, reg meta5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r40:V, reg meta6:*, reg meta7:V, reg c6:L, reg meta9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r41:V, reg meta10:*, reg meta11:V, reg c7:L, reg meta13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r42:V, reg meta14:*, reg meta15:V, reg c8:L, reg meta17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r43:V, reg split:cls, reg files:*, reg files1:V, reg p10:p(V +), reg names:*, reg names1:V, reg p11:p(V +), reg r46:V, reg files_grouped_by_names:*, reg files_grouped_by_names1:V, reg c9:L, reg files_grouped_by_names3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg lengths:cls, reg files_grouped_by_names4:*, reg files_grouped_by_names5:V, reg p12:p(V +), reg r48:V, reg r49:V, reg __1:cls, reg r50:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r51:V, reg r52:V, reg files_with_duplicated_names:*, reg files_with_duplicated_names1:V, reg length1:cls, reg r53:V, reg c10:L, reg files_with_duplicated_names2:*, reg files_with_duplicated_names3:V, reg l:*, reg c11:L, reg files_with_duplicated_names5:V, reg l2:*, reg dr12:V, reg dc6:L, reg dx12:V, reg files_with_duplicated_names7:V, reg dx13:V, reg r54:V, reg lengths1:cls, reg aliases:*, reg aliases1:V, reg p13:p(V +), reg r56:V, reg split1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg r58:V, reg files2:*, reg files3:V, reg nAliases:*, reg nAliases1:V, reg rep_int:cls, reg r59:V, reg p14:p(V +), reg unlist:cls, reg aliases2:*, reg aliases3:V, reg p15:p(V +), reg r62:V, reg p16:p(V +), reg r64:V, reg files_grouped_by_aliases:*, reg files_grouped_by_aliases1:V, reg c12:L, reg files_grouped_by_aliases3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg lengths2:cls, reg files_grouped_by_aliases4:*, reg files_grouped_by_aliases5:V, reg p17:p(V +), reg r66:V, reg r67:V, reg __2:cls, reg r68:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r69:V, reg r70:V, reg files_with_duplicated_aliases:*, reg files_with_duplicated_aliases1:V, reg length2:cls, reg r71:V, reg c13:L, reg files_with_duplicated_aliases2:*, reg files_with_duplicated_aliases3:V, reg l3:*, reg c14:L, reg files_with_duplicated_aliases5:V, reg l5:*, reg dr16:V, reg dc8:L, reg dx16:V, reg files_with_duplicated_aliases7:V, reg dx17:V, reg r72:V, reg files4:*, reg files5:V, reg c15:L, reg files7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg nAliases2:*, reg nAliases3:V, reg r73:V, reg __3:cls, reg r74:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r75:V, reg r76:V, reg files_without_aliases:*, reg files_without_aliases1:V, reg length3:cls, reg r77:V, reg c16:L, reg files_without_aliases2:*, reg files_without_aliases3:V, reg l6:*, reg c17:L, reg files_without_aliases5:V, reg l8:*, reg dr20:V, reg dc10:L, reg dx20:V, reg files_without_aliases7:V, reg dx21:V, reg r78:V, reg unlist1:cls, reg aliases4:*, reg aliases5:V, reg p18:p(V +), reg r80:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r81:V, reg r82:V, reg files8:*, reg files9:V, reg nAliases4:*, reg nAliases5:V, reg rep_int1:cls, reg r83:V, reg l9:*, reg names__:cls, reg r84:V, reg aliases6:*, reg aliases7:V, reg c18:L, reg aliases9:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg endsWith:cls, reg aliases10:*, reg aliases11:V, reg p19:p(V +), reg r86:V, reg __4:cls, reg r87:V, reg sprintf:cls, reg package5:*, reg package6:V, reg p20:p(V +), reg r89:V, reg _in_:cls, reg the_package_alias:*, reg the_package_alias1:V, reg p21:p(V +), reg all_package_aliases:*, reg all_package_aliases1:V, reg p22:p(V +), reg r92:V, reg c19:L, reg all_package_aliases2:*, reg all_package_aliases3:V, reg c20:L, reg all_package_aliases5:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg tolower:cls, reg all_package_aliases6:*, reg all_package_aliases7:V, reg p23:p(V +), reg r94:V, reg tolower1:cls, reg the_package_alias2:*, reg the_package_alias3:V, reg p24:p(V +), reg r96:V, reg r97:V, reg __5:cls, reg r98:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r99:V, reg r100:V, reg all_package_aliases8:*, reg all_package_aliases9:V, reg length4:cls, reg r101:V, reg c21:L, reg split2:cls, reg all_package_aliases10:*, reg all_package_aliases11:V, reg p25:p(V +), reg names2:cls, reg all_package_aliases12:*, reg all_package_aliases13:V, reg p26:p(V +), reg r104:V, reg p27:p(V +), reg r106:V, reg l10:*, reg c22:L, reg r108:V, reg l12:*, reg dr26:V, reg dc13:L, reg dx27:V, reg r110:V, reg dx28:V, reg r111:V, reg out2:*, reg out3:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    structure = ldf structure;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    r4 = dyn structure[, class](p, "check_Rd_metadata");
    check L33() else D1();
  D1():
    deopt 5 [r4];
  L33():
    st out = r4;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L1(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L36() else L2();
  L34():
    missing = ldf missing in base;
    r7 = dyn missing(<sym package>);
    goto L1(r7);
  L35():
    r5 = dyn base1(<sym package>);
    goto L1(r5);
  L2():
    _get_package_metadata = ldf `.get_package_metadata`;
    check L56() else D14();
  L8(r25):
    st meta = r25;
    NROW = ldf NROW;
    check L63() else D18();
  L36():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  D14():
    deopt 50 [];
  D18():
    deopt 63 [];
  L3(r10):
    r12 = `!=`(r10, 1);
    c1 = `as.logical`(r12);
    if c1 then L41() else L4();
  L37():
    package1 = ld package;
    check L39() else D2();
  L38():
    r9 = dyn base2(<sym package>);
    goto L3(r9);
  L56():
    p6 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r27 = dyn _get_package_metadata(p6);
    check L57() else D15();
  L63():
    p9 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r36 = dyn NROW(p9);
    check L64() else D19();
  D2():
    deopt 13 [package1];
  D15():
    deopt 52 [r27];
  D19():
    deopt 65 [r36];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L45() else D6();
  L39():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r11 = dyn length(package2);
    check L40() else D3();
  L41():
    stop = ldf stop;
    check L42() else D4();
  L57():
    c3 = `is.object`(r27);
    if c3 then L58() else L59(r27);
  L64():
    r37 = `==`(r36, 0);
    c4 = `as.logical`(r37);
    if c4 then L65() else L10();
  D3():
    deopt 16 [r11];
  D4():
    deopt 20 [];
  D6():
    deopt 26 [];
  L9(dx1):
    st package = dx1;
    Rd_contents = ldf Rd_contents;
    check L61() else D16();
  L10():
    meta2 = ld meta;
    check L69() else D21();
  L40():
    goto L3(r11);
  L42():
    r13 = dyn stop("argument 'package' must be of length 1");
    check L43() else D5();
  L45():
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
    r17 = dyn find_package(p1, p2);
    check L46() else D7();
  L58():
    dr = tryDispatchBuiltin.1("[", r27);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(r29):
    __ = ldf `[` in base;
    r30 = dyn __(r29, "Package");
    goto L9(r30);
  L65():
    out = ld out;
    check L66() else D20();
  D5():
    deopt 22 [r13];
  D7():
    deopt 29 [r17];
  D16():
    deopt 58 [];
  D20():
    deopt 68 [out];
  D21():
    deopt 73 [meta2];
  L43():
    goto L5();
  L46():
    st dir = r17;
    file_path = ldf `file.path`;
    check L47() else D8();
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L61():
    p8 = prom<V +>{
      Rd_db = ldf Rd_db;
      p7 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r32 = dyn Rd_db[dir](p7);
      return r32;
    };
    r34 = dyn Rd_contents(p8);
    check L62() else D17();
  L66():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  L69():
    meta3 = force? meta2;
    checkMissing(meta3);
    c5 = `is.object`(meta3);
    if c5 then L71() else L72(meta3);
  D8():
    deopt 32 [];
  D17():
    deopt 60 [r34];
  L47():
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r19 = dyn file_path(p3, "Meta", "Rd.rds");
    check L48() else D9();
  L62():
    goto L8(r34);
  L70(dx3):
    st files = dx3;
    meta6 = ld meta;
    check L74() else D22();
  L71():
    dr2 = tryDispatchBuiltin.1("$", meta3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(meta5):
    r40 = `$`(meta5, <sym File>);
    goto L70(r40);
  D9():
    deopt 36 [r19];
  D22():
    deopt 77 [meta6];
  L48():
    st rds = r19;
    file_test = ldf file_test;
    check L49() else D10();
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L70(dx2);
  L74():
    meta7 = force? meta6;
    checkMissing(meta7);
    c6 = `is.object`(meta7);
    if c6 then L76() else L77(meta7);
  D10():
    deopt 39 [];
  L49():
    p4 = prom<V +>{
      rds = ld rds;
      rds1 = force? rds;
      checkMissing(rds1);
      return rds1;
    };
    r21 = dyn file_test("-f", p4);
    check L50() else D11();
  L75(dx5):
    st names = dx5;
    meta10 = ld meta;
    check L79() else D23();
  L76():
    dr4 = tryDispatchBuiltin.1("$", meta7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L78() else L77(dr4);
  L77(meta9):
    r41 = `$`(meta9, <sym Name>);
    goto L75(r41);
  D11():
    deopt 42 [r21];
  D23():
    deopt 81 [meta10];
  L50():
    c2 = `as.logical`(r21);
    if c2 then L51() else L6();
  L78():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L75(dx4);
  L79():
    meta11 = force? meta10;
    checkMissing(meta11);
    c7 = `is.object`(meta11);
    if c7 then L81() else L82(meta11);
  L6():
    goto L7(NULL);
  L7(r24):
    goto L8(r24);
  L51():
    readRDS = ldf readRDS;
    check L52() else D12();
  L80(dx7):
    st aliases = dx7;
    meta14 = ld meta;
    check L84() else D24();
  L81():
    dr6 = tryDispatchBuiltin.1("$", meta11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(dr6);
  L82(meta13):
    r42 = `$`(meta13, <sym Aliases>);
    goto L80(r42);
  D12():
    deopt 44 [];
  D24():
    deopt 85 [meta14];
  L52():
    p5 = prom<V +>{
      rds2 = ld rds;
      rds3 = force? rds2;
      checkMissing(rds3);
      return rds3;
    };
    r23 = dyn readRDS(p5);
    check L53() else D13();
  L83():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L80(dx6);
  L84():
    meta15 = force? meta14;
    checkMissing(meta15);
    c8 = `is.object`(meta15);
    if c8 then L86() else L87(meta15);
  D13():
    deopt 46 [r23];
  L53():
    goto L7(r23);
  L85(dx9):
    st doctypes = dx9;
    split = ldf split;
    check L89() else D25();
  L86():
    dr8 = tryDispatchBuiltin.1("$", meta15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L88() else L87(dr8);
  L87(meta17):
    r43 = `$`(meta17, <sym Type>);
    goto L85(r43);
  D25():
    deopt 90 [];
  L88():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L85(dx8);
  L89():
    p10 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p11 = prom<V +>{
      names = ld names;
      names1 = force? names;
      checkMissing(names1);
      return names1;
    };
    r46 = dyn split(p10, p11);
    check L90() else D26();
  D26():
    deopt 93 [r46];
  L90():
    st files_grouped_by_names = r46;
    files_grouped_by_names = ld files_grouped_by_names;
    check L91() else D27();
  D27():
    deopt 95 [files_grouped_by_names];
  L91():
    files_grouped_by_names1 = force? files_grouped_by_names;
    checkMissing(files_grouped_by_names1);
    c9 = `is.object`(files_grouped_by_names1);
    if c9 then L92() else L93(files_grouped_by_names1);
  L12(dx11):
    st files_with_duplicated_names = dx11;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L97() else L98();
  L92():
    dr10 = tryDispatchBuiltin.1("[", files_grouped_by_names1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L94() else L93(dr10);
  L93(files_grouped_by_names3):
    lengths = ldf lengths;
    check L95() else D28();
  D28():
    deopt 98 [files_grouped_by_names3];
  L13(r52):
    c10 = `as.logical`(r52);
    if c10 then L101() else L14();
  L94():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx10);
  L95():
    p12 = prom<V +>{
      files_grouped_by_names4 = ld files_grouped_by_names;
      files_grouped_by_names5 = force? files_grouped_by_names4;
      checkMissing(files_grouped_by_names5);
      return files_grouped_by_names5;
    };
    r48 = dyn lengths(p12);
    check L96() else D29();
  L97():
    files_with_duplicated_names = ld files_with_duplicated_names;
    check L99() else D30();
  L98():
    r51 = dyn base3(<sym files_with_duplicated_names>);
    goto L13(r51);
  D29():
    deopt 100 [files_grouped_by_names3, r48];
  D30():
    deopt 107 [files_with_duplicated_names];
  L14():
    goto L15();
  L15():
    lengths1 = ldf lengths;
    check L108() else D33();
  L96():
    r49 = `>`(r48, 1);
    __1 = ldf `[` in base;
    r50 = dyn __1(files_grouped_by_names3, r49);
    goto L12(r50);
  L99():
    files_with_duplicated_names1 = force? files_with_duplicated_names;
    checkMissing(files_with_duplicated_names1);
    length1 = ldf length in base;
    r53 = dyn length1(files_with_duplicated_names1);
    check L100() else D31();
  L101():
    files_with_duplicated_names2 = ld files_with_duplicated_names;
    check L102() else D32();
  D31():
    deopt 110 [r53];
  D32():
    deopt 111 [files_with_duplicated_names2];
  D33():
    deopt 119 [];
  L100():
    goto L13(r53);
  L102():
    files_with_duplicated_names3 = force? files_with_duplicated_names2;
    checkMissing(files_with_duplicated_names3);
    l = ld out;
    c11 = `is.object`(l);
    if c11 then L104() else L105(files_with_duplicated_names3, l);
  L108():
    p13 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r56 = dyn lengths1(p13);
    check L109() else D34();
  D34():
    deopt 121 [r56];
  L103(files_with_duplicated_names7, dx13):
    st out = dx13;
    goto L15();
  L104():
    dr12 = tryDispatchBuiltin.0("$<-", l, files_with_duplicated_names3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L106() else L105(files_with_duplicated_names3, dr12);
  L105(files_with_duplicated_names5, l2):
    r54 = `$<-`(l2, <sym files_with_duplicated_names>, files_with_duplicated_names3);
    goto L103(files_with_duplicated_names5, r54);
  L109():
    st nAliases = r56;
    split1 = ldf split;
    check L110() else D35();
  D35():
    deopt 124 [];
  L106():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L103(files_with_duplicated_names3, dx12);
  L110():
    p14 = prom<V +>{
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r58):
      return r58;
    L1():
      files2 = ld files;
      files3 = force? files2;
      checkMissing(files3);
      nAliases = ld nAliases;
      nAliases1 = force? nAliases;
      checkMissing(nAliases1);
      rep_int = ldf `rep.int` in base;
      r59 = dyn rep_int(files3, nAliases1);
      goto L0(r59);
    L2():
      r57 = dyn base4(<sym files>, <sym nAliases>);
      goto L0(r57);
    };
    p16 = prom<V +>{
      unlist = ldf unlist;
      p15 = prom<V +>{
        aliases2 = ld aliases;
        aliases3 = force? aliases2;
        checkMissing(aliases3);
        return aliases3;
      };
      r62 = dyn unlist[, `use.names`](p15, FALSE);
      return r62;
    };
    r64 = dyn split1(p14, p16);
    check L111() else D36();
  D36():
    deopt 127 [r64];
  L111():
    st files_grouped_by_aliases = r64;
    files_grouped_by_aliases = ld files_grouped_by_aliases;
    check L112() else D37();
  D37():
    deopt 129 [files_grouped_by_aliases];
  L112():
    files_grouped_by_aliases1 = force? files_grouped_by_aliases;
    checkMissing(files_grouped_by_aliases1);
    c12 = `is.object`(files_grouped_by_aliases1);
    if c12 then L113() else L114(files_grouped_by_aliases1);
  L16(dx15):
    st files_with_duplicated_aliases = dx15;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L118() else L119();
  L113():
    dr14 = tryDispatchBuiltin.1("[", files_grouped_by_aliases1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L115() else L114(dr14);
  L114(files_grouped_by_aliases3):
    lengths2 = ldf lengths;
    check L116() else D38();
  D38():
    deopt 132 [files_grouped_by_aliases3];
  L17(r70):
    c13 = `as.logical`(r70);
    if c13 then L122() else L18();
  L115():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx14);
  L116():
    p17 = prom<V +>{
      files_grouped_by_aliases4 = ld files_grouped_by_aliases;
      files_grouped_by_aliases5 = force? files_grouped_by_aliases4;
      checkMissing(files_grouped_by_aliases5);
      return files_grouped_by_aliases5;
    };
    r66 = dyn lengths2(p17);
    check L117() else D39();
  L118():
    files_with_duplicated_aliases = ld files_with_duplicated_aliases;
    check L120() else D40();
  L119():
    r69 = dyn base5(<sym files_with_duplicated_aliases>);
    goto L17(r69);
  D39():
    deopt 134 [files_grouped_by_aliases3, r66];
  D40():
    deopt 141 [files_with_duplicated_aliases];
  L18():
    goto L19();
  L19():
    files4 = ld files;
    check L129() else D43();
  L117():
    r67 = `>`(r66, 1);
    __2 = ldf `[` in base;
    r68 = dyn __2(files_grouped_by_aliases3, r67);
    goto L16(r68);
  L120():
    files_with_duplicated_aliases1 = force? files_with_duplicated_aliases;
    checkMissing(files_with_duplicated_aliases1);
    length2 = ldf length in base;
    r71 = dyn length2(files_with_duplicated_aliases1);
    check L121() else D41();
  L122():
    files_with_duplicated_aliases2 = ld files_with_duplicated_aliases;
    check L123() else D42();
  D41():
    deopt 144 [r71];
  D42():
    deopt 145 [files_with_duplicated_aliases2];
  D43():
    deopt 152 [files4];
  L121():
    goto L17(r71);
  L123():
    files_with_duplicated_aliases3 = force? files_with_duplicated_aliases2;
    checkMissing(files_with_duplicated_aliases3);
    l3 = ld out;
    c14 = `is.object`(l3);
    if c14 then L125() else L126(files_with_duplicated_aliases3, l3);
  L129():
    files5 = force? files4;
    checkMissing(files5);
    c15 = `is.object`(files5);
    if c15 then L130() else L131(files5);
  L20(dx19):
    st files_without_aliases = dx19;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L134() else L135();
  L124(files_with_duplicated_aliases7, dx17):
    st out = dx17;
    goto L19();
  L125():
    dr16 = tryDispatchBuiltin.0("$<-", l3, files_with_duplicated_aliases3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L127() else L126(files_with_duplicated_aliases3, dr16);
  L126(files_with_duplicated_aliases5, l5):
    r72 = `$<-`(l5, <sym files_with_duplicated_aliases>, files_with_duplicated_aliases3);
    goto L124(files_with_duplicated_aliases5, r72);
  L130():
    dr18 = tryDispatchBuiltin.1("[", files5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L132() else L131(dr18);
  L131(files7):
    nAliases2 = ld nAliases;
    check L133() else D44();
  D44():
    deopt 154 [files7, nAliases2];
  L21(r76):
    c16 = `as.logical`(r76);
    if c16 then L138() else L22();
  L127():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L124(files_with_duplicated_aliases3, dx16);
  L132():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L20(dx18);
  L133():
    nAliases3 = force? nAliases2;
    checkMissing(nAliases3);
    r73 = `==`(nAliases3, 0);
    __3 = ldf `[` in base;
    r74 = dyn __3(files7, r73);
    goto L20(r74);
  L134():
    files_without_aliases = ld files_without_aliases;
    check L136() else D45();
  L135():
    r75 = dyn base6(<sym files_without_aliases>);
    goto L21(r75);
  D45():
    deopt 162 [files_without_aliases];
  L22():
    goto L23();
  L23():
    unlist1 = ldf unlist;
    check L145() else D48();
  L136():
    files_without_aliases1 = force? files_without_aliases;
    checkMissing(files_without_aliases1);
    length3 = ldf length in base;
    r77 = dyn length3(files_without_aliases1);
    check L137() else D46();
  L138():
    files_without_aliases2 = ld files_without_aliases;
    check L139() else D47();
  D46():
    deopt 165 [r77];
  D47():
    deopt 166 [files_without_aliases2];
  D48():
    deopt 174 [];
  L137():
    goto L21(r77);
  L139():
    files_without_aliases3 = force? files_without_aliases2;
    checkMissing(files_without_aliases3);
    l6 = ld out;
    c17 = `is.object`(l6);
    if c17 then L141() else L142(files_without_aliases3, l6);
  L145():
    p18 = prom<V +>{
      aliases4 = ld aliases;
      aliases5 = force? aliases4;
      checkMissing(aliases5);
      return aliases5;
    };
    r80 = dyn unlist1(p18);
    check L146() else D49();
  D49():
    deopt 176 [r80];
  L140(files_without_aliases7, dx21):
    st out = dx21;
    goto L23();
  L141():
    dr20 = tryDispatchBuiltin.0("$<-", l6, files_without_aliases3);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L143() else L142(files_without_aliases3, dr20);
  L142(files_without_aliases5, l8):
    r78 = `$<-`(l8, <sym files_without_aliases>, files_without_aliases3);
    goto L140(files_without_aliases5, r78);
  L146():
    st aliases = r80;
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L147() else L148();
  L24(r82):
    l9 = ld aliases;
    names__ = ldf `names<-`;
    check L152() else D53();
  L143():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L140(files_without_aliases3, dx20);
  L147():
    files8 = ld files;
    check L149() else D50();
  L148():
    r81 = dyn base7(<sym files>, <sym nAliases>);
    goto L24(r81);
  D50():
    deopt 180 [files8];
  D53():
    deopt 187 [r82, l9, r82];
  L149():
    files9 = force? files8;
    checkMissing(files9);
    nAliases4 = ld nAliases;
    check L150() else D51();
  L152():
    r84 = dyn names__(l9, NULL, r82);
    check L153() else D54();
  D51():
    deopt 182 [nAliases4];
  D54():
    deopt 189 [r82, r84];
  L150():
    nAliases5 = force? nAliases4;
    checkMissing(nAliases5);
    rep_int1 = ldf `rep.int` in base;
    r83 = dyn rep_int1(files9, nAliases5);
    check L151() else D52();
  L153():
    st aliases = r84;
    aliases6 = ld aliases;
    check L154() else D55();
  D52():
    deopt 185 [r83];
  D55():
    deopt 191 [aliases6];
  L151():
    goto L24(r83);
  L154():
    aliases7 = force? aliases6;
    checkMissing(aliases7);
    c18 = `is.object`(aliases7);
    if c18 then L155() else L156(aliases7);
  L25(dx23):
    st all_package_aliases = dx23;
    sprintf = ldf sprintf;
    check L160() else D58();
  L155():
    dr22 = tryDispatchBuiltin.1("[", aliases7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L157() else L156(dr22);
  L156(aliases9):
    endsWith = ldf endsWith;
    check L158() else D56();
  D56():
    deopt 194 [aliases9];
  D58():
    deopt 201 [];
  L157():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L25(dx22);
  L158():
    p19 = prom<V +>{
      aliases10 = ld aliases;
      aliases11 = force? aliases10;
      checkMissing(aliases11);
      return aliases11;
    };
    r86 = dyn endsWith(p19, "-package");
    check L159() else D57();
  L160():
    p20 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r89 = dyn sprintf("%s-package", p20);
    check L161() else D59();
  D57():
    deopt 197 [aliases9, r86];
  D59():
    deopt 204 [r89];
  L159():
    __4 = ldf `[` in base;
    r87 = dyn __4(aliases9, r86);
    goto L25(r87);
  L161():
    st the_package_alias = r89;
    _in_ = ldf `%in%`;
    check L162() else D60();
  D60():
    deopt 207 [];
  L162():
    p21 = prom<V +>{
      the_package_alias = ld the_package_alias;
      the_package_alias1 = force? the_package_alias;
      checkMissing(the_package_alias1);
      return the_package_alias1;
    };
    p22 = prom<V +>{
      all_package_aliases = ld all_package_aliases;
      all_package_aliases1 = force? all_package_aliases;
      checkMissing(all_package_aliases1);
      return all_package_aliases1;
    };
    r92 = dyn _in_(p21, p22);
    check L163() else D61();
  D61():
    deopt 210 [r92];
  L163():
    c19 = `as.logical`(r92);
    if c19 then L164() else L26();
  L26():
    goto L28();
  L28():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L174() else L175();
  L164():
    all_package_aliases2 = ld all_package_aliases;
    check L165() else D62();
  D62():
    deopt 211 [all_package_aliases2];
  L29(r100):
    c21 = `as.logical`(r100);
    if c21 then L178() else L30();
  L165():
    all_package_aliases3 = force? all_package_aliases2;
    checkMissing(all_package_aliases3);
    c20 = `is.object`(all_package_aliases3);
    if c20 then L166() else L167(all_package_aliases3);
  L174():
    all_package_aliases8 = ld all_package_aliases;
    check L176() else D67();
  L175():
    r99 = dyn base8(<sym all_package_aliases>);
    goto L29(r99);
  D67():
    deopt 227 [all_package_aliases8];
  L27(dx25):
    st all_package_aliases = dx25;
    goto L28();
  L30():
    goto L31();
  L31():
    out2 = ld out;
    check L186() else D71();
  L166():
    dr24 = tryDispatchBuiltin.1("[", all_package_aliases3);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L168() else L167(dr24);
  L167(all_package_aliases5):
    tolower = ldf tolower;
    check L169() else D63();
  L176():
    all_package_aliases9 = force? all_package_aliases8;
    checkMissing(all_package_aliases9);
    length4 = ldf length in base;
    r101 = dyn length4(all_package_aliases9);
    check L177() else D68();
  L178():
    split2 = ldf split;
    check L179() else D69();
  D63():
    deopt 214 [all_package_aliases5];
  D68():
    deopt 230 [r101];
  D69():
    deopt 232 [];
  D71():
    deopt 241 [out2];
  L168():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L27(dx24);
  L169():
    p23 = prom<V +>{
      all_package_aliases6 = ld all_package_aliases;
      all_package_aliases7 = force? all_package_aliases6;
      checkMissing(all_package_aliases7);
      return all_package_aliases7;
    };
    r94 = dyn tolower(p23);
    check L170() else D64();
  L177():
    goto L29(r101);
  L179():
    p25 = prom<V +>{
      all_package_aliases10 = ld all_package_aliases;
      all_package_aliases11 = force? all_package_aliases10;
      checkMissing(all_package_aliases11);
      return all_package_aliases11;
    };
    p27 = prom<V +>{
      names2 = ldf names;
      p26 = prom<V +>{
        all_package_aliases12 = ld all_package_aliases;
        all_package_aliases13 = force? all_package_aliases12;
        checkMissing(all_package_aliases13);
        return all_package_aliases13;
      };
      r104 = dyn names2(p26);
      return r104;
    };
    r106 = dyn split2(p25, p27);
    check L180() else D70();
  L186():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  D64():
    deopt 216 [all_package_aliases5, r94];
  D70():
    deopt 235 [r106];
  L170():
    tolower1 = ldf tolower;
    check L171() else D65();
  L180():
    l10 = ld out;
    c22 = `is.object`(l10);
    if c22 then L182() else L183(r106, l10);
  D65():
    deopt 217 [all_package_aliases5, r94];
  L171():
    p24 = prom<V +>{
      the_package_alias2 = ld the_package_alias;
      the_package_alias3 = force? the_package_alias2;
      checkMissing(the_package_alias3);
      return the_package_alias3;
    };
    r96 = dyn tolower1(p24);
    check L172() else D66();
  L181(r110, dx28):
    st out = dx28;
    goto L31();
  L182():
    dr26 = tryDispatchBuiltin.0("$<-", l10, r106);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L184() else L183(r106, dr26);
  L183(r108, l12):
    r111 = `$<-`(l12, <sym files_with_bad_package_aliases>, r106);
    goto L181(r108, r111);
  D66():
    deopt 219 [all_package_aliases5, r94, r96];
  L172():
    r97 = `!=`(r94, r96);
    __5 = ldf `[` in base;
    r98 = dyn __5(all_package_aliases5, r97);
    goto L27(r98);
  L184():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L181(r106, dx27);
  }
}