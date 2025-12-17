fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4030159945;
    st tidy_validate_package_Rd_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4030159945(package, dir, `lib.loc`, auto, verbose) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg auto:*, reg verbose:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var auto:*, reg auto_isMissing:L, reg auto_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interactive:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c:L, reg tidy_validate_package_Rd_files_from_dir:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg auto1:*, reg auto2:V, reg p2:p(V +), reg verbose1:*, reg verbose2:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg package1:*, reg package2:V, reg length:cls, reg r16:V, reg r17:V, reg c1:L, reg r20:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p4:p(V +), reg lapply:cls, reg package3:*, reg package4:V, reg p5:p(V +), reg one:*, reg one1:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    auto_isMissing = missing.0(auto);
    if auto_isMissing then L1(NA_LGL) else L1(auto);
  L1(auto_orDefault):
    st auto = auto_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2() else L3(verbose);
  L2():
    p = prom<V +>{
      sym = ldf interactive;
      base = ldf interactive in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      interactive = ldf interactive in base;
      r2 = dyn interactive();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L3(p);
  L3(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L4(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L12() else L5();
  L10():
    missing = ldf missing in base;
    r6 = dyn missing(<sym dir>);
    goto L4(r6);
  L11():
    r4 = dyn base1(<sym dir>);
    goto L4(r4);
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L12():
    tidy_validate_package_Rd_files_from_dir = ldf tidy_validate_package_Rd_files_from_dir;
    check L13() else D0();
  D0():
    deopt 5 [];
  L7(r15):
    r17 = `!`(r15);
    c1 = `as.logical`(r17);
    if c1 then L21() else L8();
  L13():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      auto1 = ld auto;
      auto2 = force? auto1;
      checkMissing(auto2);
      return auto2;
    };
    p3 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    r11 = dyn tidy_validate_package_Rd_files_from_dir(p1, p2, p3);
    check L14() else D1();
  L17():
    package1 = ld package;
    check L19() else D2();
  L18():
    r14 = dyn base2(<sym package>);
    goto L7(r14);
  D1():
    deopt 9 [r11];
  D2():
    deopt 15 [package1];
  L8():
    st n = 3;
    r20 = clos inner3913899244;
    st one = r20;
    do_call = ldf `do.call`;
    check L24() else D4();
  L14():
    popenv;
    return r11;
  L19():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r16 = dyn length(package2);
    check L20() else D3();
  L21():
    popenv;
    return NULL;
  D3():
    deopt 18 [r16];
  D4():
    deopt 32 [];
  L20():
    goto L7(r16);
  L24():
    p4 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p7 = prom<V +>{
      lapply = ldf lapply;
      p5 = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      p6 = prom<V +>{
        one = ld one;
        one1 = force? one;
        checkMissing(one1);
        return one1;
      };
      r24 = dyn lapply(p5, p6);
      return r24;
    };
    r26 = dyn do_call(p4, p7);
    check L25() else D5();
  D5():
    deopt 35 [r26];
  L25():
    popenv;
    return r26;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg p4:p(V +), reg r3:V, reg Rd_db:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg lib_loc:*, reg lib_loc1:V, reg p8:p(V +), reg r7:V, reg sub:cls, reg basename:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg db:*, reg db1:V, reg names:cls, reg r10:V, reg p9:p(V +), reg r12:V, reg p10:p(V +), reg r14:V, reg lapply:cls, reg files:*, reg files1:V, reg p11:p(V +), reg r16:cls, reg p12:p(V +), reg r18:V, reg tidy_validate_db:cls, reg results:*, reg results1:V, reg p13:p(V +), reg sprintf1:cls, reg p14:*, reg p15:V, reg p16:p(V +), reg files2:*, reg files3:V, reg p17:p(V +), reg r22:V, reg p18:p(V +), reg r24:V |
    mkenv;
    st p = p;
    verbose = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose];
  L2():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    Rd_db = ldf Rd_db;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        return p2;
      };
      r1 = dyn sprintf("* Package: %s", p3);
      return r1;
    };
    r3 = dyn message(p4);
    check L5() else D2();
  L7():
    p7 = prom<V +>{
      p5 = ld p;
      p6 = force? p5;
      checkMissing(p6);
      return p6;
    };
    p8 = prom<V +>{
      lib_loc = ld `lib.loc`;
      lib_loc1 = force? lib_loc;
      checkMissing(lib_loc1);
      return lib_loc1;
    };
    r7 = dyn Rd_db[, `lib.loc`](p7, p8);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 13 [r7];
  L5():
    goto L1();
  L8():
    st db = r7;
    sub = ldf sub;
    check L9() else D5();
  D5():
    deopt 16 [];
  L9():
    p10 = prom<V +>{
      basename = ldf basename;
      p9 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r9):
        return r9;
      L1():
        db = ld db;
        db1 = force? db;
        checkMissing(db1);
        names = ldf names in base;
        r10 = dyn names(db1);
        goto L0(r10);
      L2():
        r8 = dyn base(<sym db>);
        goto L0(r8);
      };
      r12 = dyn basename(p9);
      return r12;
    };
    r14 = dyn sub("[Rr]d$", "html", p10);
    check L10() else D6();
  D6():
    deopt 20 [r14];
  L10():
    st files = r14;
    lapply = ldf lapply;
    check L11() else D7();
  D7():
    deopt 23 [];
  L11():
    p11 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p12 = prom<V +>{
      r16 = clos inner1384373858;
      return r16;
    };
    r18 = dyn lapply(p11, p12);
    check L12() else D8();
  D8():
    deopt 26 [r18];
  L12():
    st results = r18;
    tidy_validate_db = ldf tidy_validate_db;
    check L13() else D9();
  D9():
    deopt 29 [];
  L13():
    p13 = prom<V +>{
      results = ld results;
      results1 = force? results;
      checkMissing(results1);
      return results1;
    };
    p18 = prom<V +>{
      sprintf1 = ldf sprintf;
      p16 = prom<V +>{
        p14 = ld p;
        p15 = force? p14;
        checkMissing(p15);
        return p15;
      };
      p17 = prom<V +>{
        files2 = ld files;
        files3 = force? files2;
        checkMissing(files3);
        return files3;
      };
      r22 = dyn sprintf1("%s/%s", p16, p17);
      return r22;
    };
    r24 = dyn tidy_validate_db(p13, p18);
    check L14() else D10();
  D10():
    deopt 32 [r24];
  L14():
    popenv;
    return r24;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sprintf1:cls, reg p2:*, reg p3:V, reg p4:p(V +), reg f3:*, reg f4:V, reg p5:p(V +), reg r7:V, reg tryCatch:cls, reg tidy_validate_R_httpd_path:cls, reg path:*, reg path1:V, reg p6:p(V +), reg r9:V, reg p7:p(V +), reg identity:*, reg identity1:V, reg p8:p(V +), reg r12:V |
    mkenv;
    st f = f;
    verbose = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose];
  L2():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    sprintf1 = ldf sprintf;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r1 = dyn sprintf("Processing %s ...", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L5() else D2();
  L7():
    p4 = prom<V +>{
      p2 = ld p;
      p3 = force? p2;
      checkMissing(p3);
      return p3;
    };
    p5 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r7 = dyn sprintf1("/library/%s/html/%s", p4, p5);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 13 [r7];
  L5():
    goto L1();
  L8():
    st path = r7;
    tryCatch = ldf tryCatch;
    check L9() else D5();
  D5():
    deopt 16 [];
  L9():
    p7 = prom<V +>{
      tidy_validate_R_httpd_path = ldf tidy_validate_R_httpd_path;
      p6 = prom<V +>{
        path = ld path;
        path1 = force? path;
        checkMissing(path1);
        return path1;
      };
      r9 = dyn tidy_validate_R_httpd_path(p6);
      return r9;
    };
    p8 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r12 = dyn tryCatch[, error](p7, p8);
    check L10() else D6();
  D6():
    deopt 20 [r12];
  L10():
    popenv;
    return r12;
  }
}