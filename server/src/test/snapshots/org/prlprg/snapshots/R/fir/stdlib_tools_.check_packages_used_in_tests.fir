fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3585625979;
    st `.check_packages_used_in_tests` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3585625979(dir, testdir, `lib.loc`) {
  (reg dir:*, reg testdir:*, reg lib_loc:*) -+> V { var dir:*, var testdir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg file_path_as_absolute:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r9:V, reg file_path:cls, reg dir7:*, reg dir8:V, reg p4:p(V +), reg r11:V, reg _read_description:cls, reg dfile:*, reg dfile1:V, reg p5:p(V +), reg r13:V, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p6:p(V +), reg testdir1:*, reg testdir2:V, reg p7:p(V +), reg r16:V, reg setwd:cls, reg testsrcdir:*, reg testsrcdir1:V, reg p8:p(V +), reg r18:V, reg sym:cls, reg base:cls, reg guard:L, reg r19:V, reg on_exit:cls, reg r21:V, reg list_files:cls, reg r22:V, reg list_files1:cls, reg r23:V, reg testdir3:*, reg testdir4:V, reg r24:V, reg c1:L, reg Sys_getenv:cls, reg r26:V, reg config_val_to_logical:cls, reg use_subdirs:*, reg use_subdirs1:V, reg p9:p(V +), reg r28:V, reg use_subdirs2:*, reg use_subdirs3:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg c3:cls, reg r31:V, reg subdirs:*, reg subdirs1:V, reg c4:L, reg subdirs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dir_exists1:cls, reg subdirs4:*, reg subdirs5:V, reg p10:p(V +), reg r33:V, reg __:cls, reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg subdirs6:*, reg subdirs7:V, reg length:cls, reg r37:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg Rfiles:*, reg Rfiles1:V, reg unlist:cls, reg lapply:cls, reg subdirs8:*, reg subdirs9:V, reg p11:p(V +), reg list_files2:*, reg list_files3:V, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg c6:cls, reg r45:V, reg r46:V, reg _check_packages_used_helper:cls, reg db:*, reg db1:V, reg p14:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg Rinfiles:*, reg Rinfiles1:V, reg Rfiles2:*, reg Rfiles3:V, reg c7:cls, reg r50:V, reg p15:p(V +), reg r52:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg lengths:cls, reg res:*, reg res1:V, reg c8:L, reg res3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r55:V, reg p16:p(V +), reg r57:V, reg any:cls, reg r58:V, reg c9:L, reg _get_standard_repository_URLs:cls, reg r59:V, reg __2:cls, reg r60:V, reg r61:cls, reg repos:*, reg repos1:V, reg p17:p(V +), reg r63:V, reg nrow:cls, reg available:*, reg available1:V, reg p18:p(V +), reg r65:V, reg c10:L, reg lapply1:cls, reg bad:*, reg bad1:V, reg p19:p(V +), reg intersect:*, reg intersect1:V, reg p20:p(V +), reg available2:*, reg available3:V, reg c11:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r68:V, reg p21:p(V +), reg r70:V, reg l:*, reg c12:L, reg r72:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r74:V, reg dx7:V, reg ___:cls, reg r75:V, reg r76:V, reg res4:*, reg res5:V |
    mkenv;
    st dir = dir;
    st testdir = testdir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    dir_exists = ldf `dir.exists`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn dir_exists(p);
    check L20() else D1();
  D1():
    deopt 3 [r1];
  L20():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L21() else L1();
  L1():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L25() else D4();
  L2():
    file_path = ldf `file.path`;
    check L27() else D6();
  L21():
    stop = ldf stop;
    check L22() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  D6():
    deopt 17 [];
  L22():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r4 = dyn gettextf("directory '%s' does not exist", p1);
      return r4;
    };
    r6 = dyn stop[, domain](p2, NA_LGL);
    check L23() else D3();
  L25():
    p3 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r9 = dyn file_path_as_absolute(p3);
    check L26() else D5();
  L27():
    p4 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r11 = dyn file_path(p4, "DESCRIPTION");
    check L28() else D7();
  D3():
    deopt 10 [r6];
  D5():
    deopt 14 [r9];
  D7():
    deopt 20 [r11];
  L23():
    goto L2();
  L26():
    st dir = r9;
    goto L2();
  L28():
    st dfile = r11;
    _read_description = ldf `.read_description`;
    check L29() else D8();
  D8():
    deopt 23 [];
  L29():
    p5 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r13 = dyn _read_description(p5);
    check L30() else D9();
  D9():
    deopt 25 [r13];
  L30():
    st db = r13;
    file_path1 = ldf `file.path`;
    check L31() else D10();
  D10():
    deopt 28 [];
  L31():
    p6 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p7 = prom<V +>{
      testdir1 = ld testdir;
      testdir2 = force? testdir1;
      checkMissing(testdir2);
      return testdir2;
    };
    r16 = dyn file_path1(p6, p7);
    check L32() else D11();
  D11():
    deopt 31 [r16];
  L32():
    st testsrcdir = r16;
    setwd = ldf setwd;
    check L33() else D12();
  D12():
    deopt 34 [];
  L33():
    p8 = prom<V +>{
      testsrcdir = ld testsrcdir;
      testsrcdir1 = force? testsrcdir;
      checkMissing(testsrcdir1);
      return testsrcdir1;
    };
    r18 = dyn setwd(p8);
    check L34() else D13();
  D13():
    deopt 36 [r18];
  L34():
    st od = r18;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L3():
    list_files = ldf `list.files`;
    check L37() else D14();
  L35():
    on_exit = ldf `on.exit` in base;
    r21 = dyn on_exit(<lang setwd(od)>);
    goto L3();
  L36():
    r19 = dyn base(<lang setwd(od)>);
    goto L3();
  D14():
    deopt 42 [];
  L37():
    r22 = dyn list_files[, pattern](".", "\\.Rin$");
    check L38() else D15();
  D15():
    deopt 46 [r22];
  L38():
    st Rinfiles = r22;
    list_files1 = ldf `list.files`;
    check L39() else D16();
  D16():
    deopt 49 [];
  L39():
    r23 = dyn list_files1[, pattern](".", "\\.[rR]$");
    check L40() else D17();
  D17():
    deopt 53 [r23];
  L40():
    st Rfiles = r23;
    testdir3 = ld testdir;
    check L41() else D18();
  D18():
    deopt 55 [testdir3];
  L41():
    testdir4 = force? testdir3;
    checkMissing(testdir4);
    r24 = `!=`(testdir4, "tests");
    c1 = `as.logical`(r24);
    if c1 then L42() else L4();
  L4():
    Sys_getenv = ldf `Sys.getenv`;
    check L44() else D19();
  L5():
    _check_packages_used_helper = ldf `.check_packages_used_helper`;
    check L72() else D34();
  L42():
    st use_subdirs = FALSE;
    goto L5();
  D19():
    deopt 63 [];
  D34():
    deopt 117 [];
  L44():
    r26 = dyn Sys_getenv("_R_CHECK_PACKAGES_USED_IN_TESTS_USE_SUBDIRS_", "FALSE");
    check L45() else D20();
  L72():
    p14 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p15 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      Rinfiles = ld Rinfiles;
      Rinfiles1 = force? Rinfiles;
      checkMissing(Rinfiles1);
      Rfiles2 = ld Rfiles;
      Rfiles3 = force? Rfiles2;
      checkMissing(Rfiles3);
      c7 = ldf c in base;
      r50 = dyn c7(Rinfiles1, Rfiles3);
      goto L0(r50);
    L2():
      r48 = dyn base4(<sym Rinfiles>, <sym Rfiles>);
      goto L0(r48);
    };
    r52 = dyn _check_packages_used_helper(p14, p15);
    check L73() else D35();
  D20():
    deopt 66 [r26];
  D35():
    deopt 120 [r52];
  L45():
    st use_subdirs = r26;
    config_val_to_logical = ldf config_val_to_logical;
    check L46() else D21();
  L73():
    st res = r52;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  D21():
    deopt 69 [];
  L13(r54):
    c9 = `as.logical`(r54);
    if c9 then L79() else L14();
  L46():
    p9 = prom<V +>{
      use_subdirs = ld use_subdirs;
      use_subdirs1 = force? use_subdirs;
      checkMissing(use_subdirs1);
      return use_subdirs1;
    };
    r28 = dyn config_val_to_logical(p9);
    check L47() else D22();
  L74():
    lengths = ldf lengths;
    check L76() else D36();
  L75():
    r53 = dyn base5(<lang lengths(`<-`(bad, `[`(res, `:`(1, 3))))>);
    goto L13(r53);
  D22():
    deopt 71 [r28];
  D36():
    deopt 125 [];
  L14():
    goto L18();
  L18():
    res4 = ld res;
    check L95() else D48();
  L47():
    st use_subdirs = r28;
    use_subdirs2 = ld use_subdirs;
    check L48() else D23();
  L76():
    p16 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c8 = `is.object`(res1);
      if c8 then L1() else L2(res1);
    L0(dx3):
      st bad = dx3;
      invisible.0();
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", res1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(res3):
      __1 = ldf `[` in base;
      r55 = dyn __1(res3, <int 1, 2, 3>);
      goto L0(r55);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r57 = dyn lengths(p16);
    check L77() else D37();
  L79():
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L80() else D39();
  D23():
    deopt 73 [use_subdirs2];
  D37():
    deopt 127 [r57];
  D39():
    deopt 131 [];
  D48():
    deopt 163 [res4];
  L48():
    use_subdirs3 = force? use_subdirs2;
    checkMissing(use_subdirs3);
    c2 = `as.logical`(use_subdirs3);
    if c2 then L49() else L6();
  L77():
    any = ldf any in base;
    r58 = dyn any(r57);
    check L78() else D38();
  L80():
    r59 = dyn _get_standard_repository_URLs();
    check L81() else D40();
  L95():
    res5 = force? res4;
    checkMissing(res5);
    popenv;
    return res5;
  D38():
    deopt 129 [r58];
  D40():
    deopt 132 [r59];
  L6():
    goto L5();
  L49():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L78():
    goto L13(r58);
  L81():
    st repos = r59;
    __2 = ldf `::`;
    check L82() else D41();
  D41():
    deopt 135 [];
  L7(r30):
    st subdirs = r30;
    subdirs = ld subdirs;
    check L53() else D25();
  L50():
    c3 = ldf c in base;
    r31 = dyn c3("testthat", "testit", "unitizer", "RUnit");
    check L52() else D24();
  L51():
    r29 = dyn base1("testthat", "testit", "unitizer", "RUnit");
    goto L7(r29);
  L82():
    r60 = dyn __2("utils", "available.packages");
    check L83() else D42();
  D24():
    deopt 82 [r31];
  D25():
    deopt 84 [subdirs];
  D42():
    deopt 138 [r60];
  L52():
    goto L7(r31);
  L53():
    subdirs1 = force? subdirs;
    checkMissing(subdirs1);
    c4 = `is.object`(subdirs1);
    if c4 then L54() else L55(subdirs1);
  L83():
    checkFun.0(r60);
    r61 = r60 as cls;
    p17 = prom<V +>{
      repos = ld repos;
      repos1 = force? repos;
      checkMissing(repos1);
      return repos1;
    };
    r63 = dyn r61[repos](p17);
    check L84() else D43();
  D43():
    deopt 142 [r63];
  L8(dx1):
    st subdirs = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L54():
    dr = tryDispatchBuiltin.1("[", subdirs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L56() else L55(dr);
  L55(subdirs3):
    dir_exists1 = ldf `dir.exists`;
    check L57() else D26();
  L84():
    st available = r63;
    nrow = ldf nrow;
    check L85() else D44();
  D26():
    deopt 87 [subdirs3];
  D44():
    deopt 145 [];
  L9(r36):
    c5 = `as.logical`(r36);
    if c5 then L63() else L10();
  L56():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L57():
    p10 = prom<V +>{
      subdirs4 = ld subdirs;
      subdirs5 = force? subdirs4;
      checkMissing(subdirs5);
      return subdirs5;
    };
    r33 = dyn dir_exists1(p10);
    check L58() else D27();
  L59():
    subdirs6 = ld subdirs;
    check L61() else D28();
  L60():
    r35 = dyn base2(<sym subdirs>);
    goto L9(r35);
  L85():
    p18 = prom<V +>{
      available = ld available;
      available1 = force? available;
      checkMissing(available1);
      return available1;
    };
    r65 = dyn nrow(p18);
    check L86() else D45();
  D27():
    deopt 89 [subdirs3, r33];
  D28():
    deopt 94 [subdirs6];
  D45():
    deopt 147 [r65];
  L10():
    st use_subdirs = FALSE;
    goto L12(FALSE);
  L12(r46):
    goto L5();
  L58():
    __ = ldf `[` in base;
    r34 = dyn __(subdirs3, r33);
    goto L8(r34);
  L61():
    subdirs7 = force? subdirs6;
    checkMissing(subdirs7);
    length = ldf length in base;
    r37 = dyn length(subdirs7);
    check L62() else D29();
  L63():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L86():
    c10 = `as.logical`(r65);
    if c10 then L87() else L15();
  D29():
    deopt 97 [r37];
  L11(r39):
    st Rfiles = r39;
    goto L12(r39);
  L15():
    goto L17(NULL);
  L17(r76):
    goto L18();
  L62():
    goto L9(r37);
  L64():
    Rfiles = ld Rfiles;
    check L66() else D30();
  L65():
    r38 = dyn base3(<sym Rfiles>, <lang unlist(lapply(subdirs, list.files, pattern="\\.[rR]$", full.names=TRUE), use.names=FALSE)>);
    goto L11(r38);
  L87():
    lapply1 = ldf lapply;
    check L88() else D46();
  D30():
    deopt 100 [Rfiles];
  D46():
    deopt 149 [];
  L66():
    Rfiles1 = force? Rfiles;
    checkMissing(Rfiles1);
    unlist = ldf unlist;
    check L67() else D31();
  L88():
    p19 = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      return bad1;
    };
    p20 = prom<V +>{
      intersect = ld intersect;
      intersect1 = force? intersect;
      checkMissing(intersect1);
      return intersect1;
    };
    p21 = prom<V +>{
      available2 = ld available;
      available3 = force? available2;
      checkMissing(available3);
      c11 = `is.object`(available3);
      if c11 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", available3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r68 = dyn __3(available3, <missing>, "Package");
      goto L0(r68);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r70 = dyn lapply1(p19, p20, p21);
    check L89() else D47();
  D31():
    deopt 103 [];
  D47():
    deopt 153 [r70];
  L67():
    p13 = prom<V +>{
      lapply = ldf lapply;
      p11 = prom<V +>{
        subdirs8 = ld subdirs;
        subdirs9 = force? subdirs8;
        checkMissing(subdirs9);
        return subdirs9;
      };
      p12 = prom<V +>{
        list_files2 = ld `list.files`;
        list_files3 = force? list_files2;
        checkMissing(list_files3);
        return list_files3;
      };
      r42 = dyn lapply[, , pattern, `full.names`](p11, p12, "\\.[rR]$", TRUE);
      return r42;
    };
    r44 = dyn unlist[, `use.names`](p13, FALSE);
    check L68() else D32();
  L89():
    l = ld res;
    c12 = `is.object`(l);
    if c12 then L90() else L91(r70, l);
  D32():
    deopt 107 [r44];
  L16(r74, dx7):
    st res = dx7;
    goto L17(r74);
  L68():
    c6 = ldf c in base;
    r45 = dyn c6(Rfiles1, r44);
    check L69() else D33();
  L90():
    dr6 = tryDispatchBuiltin.0("[<-", l, r70);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L92() else L91(r70, dr6);
  L91(r72, l2):
    ___ = ldf `[<-` in base;
    r75 = dyn ___(l2, r70, <int 1, 2, 3>);
    goto L16(r72, r75);
  D33():
    deopt 109 [r45];
  L69():
    goto L11(r45);
  L92():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(r70, dx6);
  }
}