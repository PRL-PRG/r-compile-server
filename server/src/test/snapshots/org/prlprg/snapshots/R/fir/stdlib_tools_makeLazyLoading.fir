fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2476270712;
    st makeLazyLoading = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2476270712(package, `lib.loc`, compress, `keep.source`, `keep.parse.data`, `set.install.dir`) {
  (reg package:*, reg lib_loc:*, reg compress:*, reg keep_source:*, reg keep_parse_data:*, reg set_install_dir:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `keep.parse.data`:*, reg keep_parse_data_isMissing:L, reg keep_parse_data_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var `set.install.dir`:*, reg set_install_dir_isMissing:L, reg set_install_dir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg compress1:*, reg compress2:V, reg c:L, reg r6:V, reg c1:L, reg c3:V, reg _notin_:cls, reg compress3:*, reg compress4:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg c4:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg gettextf:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg getOption2:cls, reg r17:V, reg r18:V, reg c9:L, reg options:cls, reg r19:V, reg r21:cls, reg package1:*, reg package2:V, reg r22:V, reg c10:L, reg stop1:cls, reg r23:V, reg file_path:cls, reg R_home:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg findpack:cls, reg package3:*, reg package4:V, reg p6:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p7:p(V +), reg r30:V, reg file_path1:cls, reg pkgpath:*, reg pkgpath1:V, reg p8:p(V +), reg package5:*, reg package6:V, reg p9:p(V +), reg r33:V, reg file_exists:cls, reg codeFile:*, reg codeFile1:V, reg p10:p(V +), reg r35:V, reg r36:V, reg c11:L, reg warning:cls, reg r37:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg r39:V, reg invisible:cls, reg r40:V, reg file_size:cls, reg codeFile2:*, reg codeFile3:V, reg p11:p(V +), reg r44:V, reg file_size1:cls, reg loaderFile:*, reg loaderFile1:V, reg p12:p(V +), reg r46:V, reg r47:V, reg c12:L, reg warning1:cls, reg r48:V, reg code2LazyLoadDB:cls, reg package7:*, reg package8:V, reg p13:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p14:p(V +), reg keep_source1:*, reg keep_source2:V, reg p15:p(V +), reg keep_parse_data1:*, reg keep_parse_data2:V, reg p16:p(V +), reg compress5:*, reg compress6:V, reg p17:p(V +), reg set_install_dir1:*, reg set_install_dir2:V, reg p18:p(V +), reg r56:V, reg file_copy:cls, reg loaderFile2:*, reg loaderFile3:V, reg p19:p(V +), reg codeFile4:*, reg codeFile5:V, reg p20:p(V +), reg r59:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r60:V, reg r61:V, reg invisible1:cls, reg r62:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L1(TRUE) else L1(compress);
  L1(compress_orDefault):
    st compress = compress_orDefault;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L2() else L3(keep_source);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("keep.source.pkgs");
      return r;
    };
    goto L3(p);
  L3(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    keep_parse_data_isMissing = missing.0(keep_parse_data);
    if keep_parse_data_isMissing then L4() else L5(keep_parse_data);
  L4():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("keep.parse.data.pkgs");
      return r2;
    };
    goto L5(p1);
  L5(keep_parse_data_orDefault):
    st `keep.parse.data` = keep_parse_data_orDefault;
    set_install_dir_isMissing = missing.0(set_install_dir);
    if set_install_dir_isMissing then L6(NULL) else L6(set_install_dir);
  L6(set_install_dir_orDefault):
    st `set.install.dir` = set_install_dir_orDefault;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L7(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L24() else L8(c1);
  L21():
    compress1 = ld compress;
    check L23() else D0();
  L22():
    r4 = dyn base(<sym compress>);
    goto L7(r4);
  D0():
    deopt 1 [compress1];
  L8(c3):
    c8 = `as.logical`(c3);
    if c8 then L28() else L9();
  L23():
    compress2 = force? compress1;
    checkMissing(compress2);
    c = `is.logical`(compress2);
    goto L7(c);
  L24():
    _notin_ = ldf `%notin%`;
    check L25() else D1();
  D1():
    deopt 6 [c1];
  L9():
    goto L10();
  L10():
    getOption2 = ldf getOption;
    check L32() else D5();
  L25():
    p2 = prom<V +>{
      compress3 = ld compress;
      compress4 = force? compress3;
      checkMissing(compress4);
      return compress4;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c4 = ldf c in base;
      r10 = dyn c4(2.0, 3.0);
      goto L0(r10);
    L2():
      r8 = dyn base1(2.0, 3.0);
      goto L0(r8);
    };
    r12 = dyn _notin_(p2, p3);
    check L26() else D2();
  L28():
    stop = ldf stop;
    check L29() else D3();
  D2():
    deopt 9 [c1, r12];
  D3():
    deopt 12 [];
  D5():
    deopt 20 [];
  L26():
    c5 = `as.logical`(r12);
    c6 = `&&`(c1, c5);
    goto L8(c6);
  L29():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      r13 = dyn gettextf("invalid value for '%s' : %s", "compress", "should be FALSE, TRUE, 2 or 3");
      return r13;
    };
    r15 = dyn stop[, domain](p4, NA_LGL);
    check L30() else D4();
  L32():
    r17 = dyn getOption2("warn");
    check L33() else D6();
  D4():
    deopt 16 [r15];
  D6():
    deopt 22 [r17];
  L30():
    goto L10();
  L33():
    r18 = `!`(r17);
    c9 = `as.logical`(r18);
    if c9 then L34() else L11();
  L11():
    goto L12();
  L12():
    r21 = clos inner2500306237;
    st findpack = r21;
    package1 = ld package;
    check L38() else D9();
  L34():
    options = ldf options;
    check L35() else D7();
  D7():
    deopt 25 [];
  D9():
    deopt 34 [package1];
  L35():
    r19 = dyn options[warn](1);
    check L36() else D8();
  L38():
    package2 = force? package1;
    checkMissing(package2);
    r22 = `==`(package2, "base");
    c10 = `as.logical`(r22);
    if c10 then L39() else L13();
  D8():
    deopt 28 [r19];
  L13():
    goto L14();
  L14():
    file_path = ldf `file.path`;
    check L43() else D12();
  L36():
    goto L12();
  L39():
    stop1 = ldf stop;
    check L40() else D10();
  D10():
    deopt 39 [];
  D12():
    deopt 45 [];
  L40():
    r23 = dyn stop1("this cannot be used for package 'base'");
    check L41() else D11();
  L43():
    p5 = prom<V +>{
      R_home = ldf `R.home`;
      r25 = dyn R_home("share");
      return r25;
    };
    r27 = dyn file_path(p5, "R", "nspackloader.R");
    check L44() else D13();
  D11():
    deopt 41 [r23];
  D13():
    deopt 49 [r27];
  L41():
    goto L14();
  L44():
    st loaderFile = r27;
    findpack = ldf findpack;
    check L45() else D14();
  D14():
    deopt 52 [];
  L45():
    p6 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p7 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r30 = dyn findpack(p6, p7);
    check L46() else D15();
  D15():
    deopt 55 [r30];
  L46():
    st pkgpath = r30;
    file_path1 = ldf `file.path`;
    check L47() else D16();
  D16():
    deopt 58 [];
  L47():
    p8 = prom<V +>{
      pkgpath = ld pkgpath;
      pkgpath1 = force? pkgpath;
      checkMissing(pkgpath1);
      return pkgpath1;
    };
    p9 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r33 = dyn file_path1(p8, "R", p9);
    check L48() else D17();
  D17():
    deopt 62 [r33];
  L48():
    st codeFile = r33;
    file_exists = ldf `file.exists`;
    check L49() else D18();
  D18():
    deopt 65 [];
  L49():
    p10 = prom<V +>{
      codeFile = ld codeFile;
      codeFile1 = force? codeFile;
      checkMissing(codeFile1);
      return codeFile1;
    };
    r35 = dyn file_exists(p10);
    check L50() else D19();
  D19():
    deopt 67 [r35];
  L50():
    r36 = `!`(r35);
    c11 = `as.logical`(r36);
    if c11 then L51() else L15();
  L15():
    file_size = ldf `file.size`;
    check L59() else D23();
  L51():
    warning = ldf warning;
    check L52() else D20();
  D20():
    deopt 70 [];
  D23():
    deopt 81 [];
  L52():
    r37 = dyn warning("package contains no R code");
    check L53() else D21();
  L59():
    p11 = prom<V +>{
      codeFile2 = ld codeFile;
      codeFile3 = force? codeFile2;
      checkMissing(codeFile3);
      return codeFile3;
    };
    r44 = dyn file_size(p11);
    check L60() else D24();
  D21():
    deopt 72 [r37];
  D24():
    deopt 83 [r44];
  L53():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L60():
    file_size1 = ldf `file.size`;
    check L61() else D25();
  D25():
    deopt 84 [r44];
  L16(r39):
    popenv;
    return r39;
  L54():
    invisible = ldf invisible in base;
    r40 = dyn invisible();
    check L56() else D22();
  L55():
    r38 = dyn base2();
    goto L16(r38);
  L61():
    p12 = prom<V +>{
      loaderFile = ld loaderFile;
      loaderFile1 = force? loaderFile;
      checkMissing(loaderFile1);
      return loaderFile1;
    };
    r46 = dyn file_size1(p12);
    check L62() else D26();
  D22():
    deopt 76 [r40];
  D26():
    deopt 86 [r44, r46];
  L56():
    goto L16(r40);
  L62():
    r47 = `==`(r44, r46);
    c12 = `as.logical`(r47);
    if c12 then L63() else L18();
  L18():
    code2LazyLoadDB = ldf code2LazyLoadDB;
    check L67() else D29();
  L19():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L63():
    warning1 = ldf warning;
    check L64() else D27();
  D27():
    deopt 89 [];
  D29():
    deopt 93 [];
  L20(r61):
    popenv;
    return r61;
  L64():
    r48 = dyn warning1("package seems to be using lazy loading already");
    check L65() else D28();
  L67():
    p13 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p14 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p15 = prom<V +>{
      keep_source1 = ld `keep.source`;
      keep_source2 = force? keep_source1;
      checkMissing(keep_source2);
      return keep_source2;
    };
    p16 = prom<V +>{
      keep_parse_data1 = ld `keep.parse.data`;
      keep_parse_data2 = force? keep_parse_data1;
      checkMissing(keep_parse_data2);
      return keep_parse_data2;
    };
    p17 = prom<V +>{
      compress5 = ld compress;
      compress6 = force? compress5;
      checkMissing(compress6);
      return compress6;
    };
    p18 = prom<V +>{
      set_install_dir1 = ld `set.install.dir`;
      set_install_dir2 = force? set_install_dir1;
      checkMissing(set_install_dir2);
      return set_install_dir2;
    };
    r56 = dyn code2LazyLoadDB[, `lib.loc`, `keep.source`, `keep.parse.data`, compress, `set.install.dir`](p13, p14, p15, p16, p17, p18);
    check L68() else D30();
  L71():
    invisible1 = ldf invisible in base;
    r62 = dyn invisible1();
    check L73() else D33();
  L72():
    r60 = dyn base3();
    goto L20(r60);
  D28():
    deopt 91 [r48];
  D30():
    deopt 105 [r56];
  D33():
    deopt 115 [r62];
  L65():
    goto L19();
  L68():
    file_copy = ldf `file.copy`;
    check L69() else D31();
  L73():
    goto L20(r62);
  D31():
    deopt 107 [];
  L69():
    p19 = prom<V +>{
      loaderFile2 = ld loaderFile;
      loaderFile3 = force? loaderFile2;
      checkMissing(loaderFile3);
      return loaderFile3;
    };
    p20 = prom<V +>{
      codeFile4 = ld codeFile;
      codeFile5 = force? codeFile4;
      checkMissing(codeFile5);
      return codeFile5;
    };
    r59 = dyn file_copy(p19, p20, TRUE);
    check L70() else D32();
  D32():
    deopt 111 [r59];
  L70():
    goto L19();
  }
}
fun inner2500306237(package, `lib.loc`) {
  (reg package:*, reg lib_loc:*) -+> V { var package:*, var `lib.loc`:*, reg find_package:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg pkgpath:*, reg pkgpath1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg packageNotFoundError:cls, reg package3:*, reg package4:V, reg p2:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p3:p(V +), reg sys_call:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg pkgpath2:*, reg pkgpath3:V |
    mkenv;
    st package = package;
    st `lib.loc` = lib_loc;
    find_package = ldf `find.package`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r2 = dyn find_package[, , quiet](p, p1, TRUE);
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    st pkgpath = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L9() else L1();
  L5():
    pkgpath = ld pkgpath;
    check L7() else D2();
  L6():
    r3 = dyn base(<sym pkgpath>);
    goto L0(r3);
  D2():
    deopt 10 [pkgpath];
  L1():
    goto L2();
  L2():
    pkgpath2 = ld pkgpath;
    check L13() else D6();
  L7():
    pkgpath1 = force? pkgpath;
    checkMissing(pkgpath1);
    length = ldf length in base;
    r5 = dyn length(pkgpath1);
    check L8() else D3();
  L9():
    stop = ldf stop;
    check L10() else D4();
  D3():
    deopt 13 [r5];
  D4():
    deopt 16 [];
  D6():
    deopt 21 [pkgpath2];
  L8():
    goto L0(r5);
  L10():
    p5 = prom<V +>{
      packageNotFoundError = ldf packageNotFoundError;
      p2 = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      p3 = prom<V +>{
        lib_loc3 = ld `lib.loc`;
        lib_loc4 = force? lib_loc3;
        checkMissing(lib_loc4);
        return lib_loc4;
      };
      p4 = prom<V +>{
        sys_call = ldf `sys.call`;
        r9 = dyn sys_call();
        return r9;
      };
      r11 = dyn packageNotFoundError(p2, p3, p4);
      return r11;
    };
    r13 = dyn stop(p5);
    check L11() else D5();
  L13():
    pkgpath3 = force? pkgpath2;
    checkMissing(pkgpath3);
    popenv;
    return pkgpath3;
  D5():
    deopt 18 [r13];
  L11():
    goto L2();
  }
}