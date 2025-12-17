fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3237681848;
    st code2LazyLoadDB = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3237681848(package, `lib.loc`, `keep.source`, `keep.parse.data`, compress, `set.install.dir`) {
  (reg package:*, reg lib_loc:*, reg keep_source:*, reg keep_parse_data:*, reg compress:*, reg set_install_dir:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `keep.parse.data`:*, reg keep_parse_data_isMissing:L, reg keep_parse_data_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, var `set.install.dir`:*, reg set_install_dir_isMissing:L, reg set_install_dir_orDefault:*, reg find_package:cls, reg package1:*, reg package2:V, reg p2:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg pkgpath:*, reg pkgpath1:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg stop:cls, reg packageNotFoundError:cls, reg package3:*, reg package4:V, reg p4:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p5:p(V +), reg sys_call:cls, reg r13:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V, reg file_path:cls, reg pkgpath2:*, reg pkgpath3:V, reg p8:p(V +), reg package5:*, reg package6:V, reg p9:p(V +), reg r21:V, reg packageHasNamespace:cls, reg package7:*, reg package8:V, reg p10:p(V +), reg dirname:cls, reg pkgpath4:*, reg pkgpath5:V, reg p11:p(V +), reg r24:V, reg p12:p(V +), reg r26:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg _getNamespace:cls, reg as_name:cls, reg package9:*, reg package10:V, reg p13:p(V +), reg r30:V, reg p14:p(V +), reg r32:V, reg c2:V, reg r33:V, reg c3:L, reg stop1:cls, reg r34:V, reg suppressPackageStartupMessages:cls, reg loadNamespace:cls, reg package11:*, reg package12:V, reg p15:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p16:p(V +), reg keep_source1:*, reg keep_source2:V, reg p17:p(V +), reg keep_parse_data1:*, reg keep_parse_data2:V, reg p18:p(V +), reg r40:V, reg p19:p(V +), reg r42:V, reg makeLazyLoadDB:cls, reg ns:*, reg ns1:V, reg p20:p(V +), reg dbbase:*, reg dbbase1:V, reg p21:p(V +), reg compress1:*, reg compress2:V, reg p22:p(V +), reg set_install_dir1:*, reg set_install_dir2:V, reg p23:p(V +), reg r47:V, reg stop2:cls, reg r48:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L1() else L2(keep_source);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("keep.source.pkgs");
      return r;
    };
    goto L2(p);
  L2(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    keep_parse_data_isMissing = missing.0(keep_parse_data);
    if keep_parse_data_isMissing then L3() else L4(keep_parse_data);
  L3():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("keep.parse.data.pkgs");
      return r2;
    };
    goto L4(p1);
  L4(keep_parse_data_orDefault):
    st `keep.parse.data` = keep_parse_data_orDefault;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L5(TRUE) else L5(compress);
  L5(compress_orDefault):
    st compress = compress_orDefault;
    set_install_dir_isMissing = missing.0(set_install_dir);
    if set_install_dir_isMissing then L6(NULL) else L6(set_install_dir);
  L6(set_install_dir_orDefault):
    st `set.install.dir` = set_install_dir_orDefault;
    find_package = ldf `find.package`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p2 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p3 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r6 = dyn find_package[, , quiet](p2, p3, TRUE);
    check L15() else D1();
  D1():
    deopt 6 [r6];
  L15():
    st pkgpath = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L7(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L20() else L8();
  L16():
    pkgpath = ld pkgpath;
    check L18() else D2();
  L17():
    r7 = dyn base(<sym pkgpath>);
    goto L7(r7);
  D2():
    deopt 10 [pkgpath];
  L8():
    goto L9();
  L9():
    file_path = ldf `file.path`;
    check L24() else D6();
  L18():
    pkgpath1 = force? pkgpath;
    checkMissing(pkgpath1);
    length = ldf length in base;
    r9 = dyn length(pkgpath1);
    check L19() else D3();
  L20():
    stop = ldf stop;
    check L21() else D4();
  D3():
    deopt 13 [r9];
  D4():
    deopt 16 [];
  D6():
    deopt 22 [];
  L19():
    goto L7(r9);
  L21():
    p7 = prom<V +>{
      packageNotFoundError = ldf packageNotFoundError;
      p4 = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      p5 = prom<V +>{
        lib_loc3 = ld `lib.loc`;
        lib_loc4 = force? lib_loc3;
        checkMissing(lib_loc4);
        return lib_loc4;
      };
      p6 = prom<V +>{
        sys_call = ldf `sys.call`;
        r13 = dyn sys_call();
        return r13;
      };
      r15 = dyn packageNotFoundError(p4, p5, p6);
      return r15;
    };
    r17 = dyn stop(p7);
    check L22() else D5();
  L24():
    p8 = prom<V +>{
      pkgpath2 = ld pkgpath;
      pkgpath3 = force? pkgpath2;
      checkMissing(pkgpath3);
      return pkgpath3;
    };
    p9 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r21 = dyn file_path(p8, "R", p9);
    check L25() else D7();
  D5():
    deopt 18 [r17];
  D7():
    deopt 26 [r21];
  L22():
    goto L9();
  L25():
    st dbbase = r21;
    packageHasNamespace = ldf packageHasNamespace;
    check L26() else D8();
  D8():
    deopt 29 [];
  L26():
    p10 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p12 = prom<V +>{
      dirname = ldf dirname;
      p11 = prom<V +>{
        pkgpath4 = ld pkgpath;
        pkgpath5 = force? pkgpath4;
        checkMissing(pkgpath5);
        return pkgpath5;
      };
      r24 = dyn dirname(p11);
      return r24;
    };
    r26 = dyn packageHasNamespace(p10, p12);
    check L27() else D9();
  D9():
    deopt 32 [r26];
  L27():
    c1 = `as.logical`(r26);
    if c1 then L28() else L10();
  L10():
    stop2 = ldf stop;
    check L42() else D18();
  L28():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  D18():
    deopt 61 [];
  L11(r28):
    r33 = `!`(r28);
    c3 = `as.logical`(r33);
    if c3 then L33() else L12();
  L29():
    _getNamespace = ldf `.getNamespace`;
    check L31() else D10();
  L30():
    r27 = dyn base1(<lang .getNamespace(as.name(package))>);
    goto L11(r27);
  L42():
    r48 = dyn stop2("all packages should have a NAMESPACE");
    check L43() else D19();
  D10():
    deopt 35 [];
  D19():
    deopt 63 [r48];
  L12():
    goto L13();
  L13():
    suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
    check L37() else D14();
  L31():
    p14 = prom<V +>{
      as_name = ldf `as.name`;
      p13 = prom<V +>{
        package9 = ld package;
        package10 = force? package9;
        checkMissing(package10);
        return package10;
      };
      r30 = dyn as_name(p13);
      return r30;
    };
    r32 = dyn _getNamespace(p14);
    check L32() else D11();
  L33():
    stop1 = ldf stop;
    check L34() else D12();
  L43():
    popenv;
    return r48;
  D11():
    deopt 37 [r32];
  D12():
    deopt 41 [];
  D14():
    deopt 47 [];
  L32():
    c2 = `==`(r32, NULL);
    goto L11(c2);
  L34():
    r34 = dyn stop1("namespace must not be already loaded");
    check L35() else D13();
  L37():
    p19 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      p15 = prom<V +>{
        package11 = ld package;
        package12 = force? package11;
        checkMissing(package12);
        return package12;
      };
      p16 = prom<V +>{
        lib_loc5 = ld `lib.loc`;
        lib_loc6 = force? lib_loc5;
        checkMissing(lib_loc6);
        return lib_loc6;
      };
      p17 = prom<V +>{
        keep_source1 = ld `keep.source`;
        keep_source2 = force? keep_source1;
        checkMissing(keep_source2);
        return keep_source2;
      };
      p18 = prom<V +>{
        keep_parse_data1 = ld `keep.parse.data`;
        keep_parse_data2 = force? keep_parse_data1;
        checkMissing(keep_parse_data2);
        return keep_parse_data2;
      };
      r40 = dyn loadNamespace[package, `lib.loc`, `keep.source`, `keep.parse.data`, partial](p15, p16, p17, p18, TRUE);
      return r40;
    };
    r42 = dyn suppressPackageStartupMessages(p19);
    check L38() else D15();
  D13():
    deopt 43 [r34];
  D15():
    deopt 49 [r42];
  L35():
    goto L13();
  L38():
    st ns = r42;
    makeLazyLoadDB = ldf makeLazyLoadDB;
    check L39() else D16();
  D16():
    deopt 52 [];
  L39():
    p20 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    p21 = prom<V +>{
      dbbase = ld dbbase;
      dbbase1 = force? dbbase;
      checkMissing(dbbase1);
      return dbbase1;
    };
    p22 = prom<V +>{
      compress1 = ld compress;
      compress2 = force? compress1;
      checkMissing(compress2);
      return compress2;
    };
    p23 = prom<V +>{
      set_install_dir1 = ld `set.install.dir`;
      set_install_dir2 = force? set_install_dir1;
      checkMissing(set_install_dir2);
      return set_install_dir2;
    };
    r47 = dyn makeLazyLoadDB[, , compress, `set.install.dir`](p20, p21, p22, p23);
    check L40() else D17();
  D17():
    deopt 59 [r47];
  L40():
    popenv;
    return r47;
  }
}