fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203552840;
    st write_PACKAGES = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203552840(dir, fields, type, verbose, unpacked, subdirs, latestOnly, addFiles, rds_compress, validate) {
  (reg dir:*, reg fields:*, reg type:*, reg verbose:*, reg unpacked:*, reg subdirs:*, reg latestOnly:*, reg addFiles:*, reg rds_compress:*, reg validate:*) -+> V { var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var unpacked:*, reg unpacked_isMissing:L, reg unpacked_orDefault:*, var subdirs:*, reg subdirs_isMissing:L, reg subdirs_orDefault:*, var latestOnly:*, reg latestOnly_isMissing:L, reg latestOnly_orDefault:*, var addFiles:*, reg addFiles_isMissing:L, reg addFiles_orDefault:*, var rds_compress:*, reg rds_compress_isMissing:L, reg rds_compress_orDefault:*, var validate:*, reg validate_isMissing:L, reg validate_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c1:L, reg c3:V, reg _Platform:*, reg _Platform1:V, reg c4:L, reg c6:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg c8:L, reg dx1:V, reg r7:V, reg r8:V, reg c9:L, reg c10:V, reg c12:L, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg subdirs1:*, reg subdirs2:V, reg c13:L, reg c14:L, reg c16:V, reg subdirs3:*, reg subdirs4:V, reg c17:L, reg c18:V, reg c20:L, reg setwd:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r15:V, reg list_dirs:cls, reg r16:V, reg setwd1:cls, reg owd:*, reg owd1:V, reg p3:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg paths:*, reg paths1:V, reg c21:L, reg paths3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg paths4:*, reg paths5:V, reg r21:V, reg __:cls, reg r22:V, reg c22:cls, reg r23:V, reg sub:cls, reg paths6:*, reg paths7:V, reg p4:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg subdirs5:*, reg subdirs6:V, reg c23:L, reg c24:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg subdirs7:*, reg subdirs8:V, reg c25:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg paths8:*, reg paths9:V, reg identical:cls, reg r34:V, reg r35:V, reg paths10:*, reg paths11:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c26:L, reg x:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg i7:I, reg r37:V, reg path:*, reg path1:V, reg nzchar:cls, reg r38:V, reg c27:L, reg file_path:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg path2:*, reg path3:V, reg p6:p(V +), reg r41:V, reg i10:I, reg r42:V, reg dir5:*, reg dir6:V, reg _build_repository_package_db:cls, reg this:*, reg this1:V, reg p7:p(V +), reg fields1:*, reg fields2:V, reg p8:p(V +), reg type3:*, reg type4:V, reg p9:p(V +), reg verbose1:*, reg verbose2:V, reg p10:p(V +), reg unpacked1:*, reg unpacked2:V, reg p11:p(V +), reg validate1:*, reg validate2:V, reg p12:p(V +), reg r49:V, reg _process_repository_package_db_to_matrix:cls, reg desc:*, reg desc1:V, reg p13:p(V +), reg path4:*, reg path5:V, reg p14:p(V +), reg addFiles1:*, reg addFiles2:V, reg p15:p(V +), reg addPaths:*, reg addPaths1:V, reg p16:p(V +), reg latestOnly1:*, reg latestOnly2:V, reg p17:p(V +), reg r55:V, reg NROW:cls, reg desc2:*, reg desc3:V, reg p18:p(V +), reg r57:V, reg c28:L, reg rbind:cls, reg db:*, reg db1:V, reg p19:p(V +), reg desc4:*, reg desc5:V, reg p20:p(V +), reg r60:V, reg i13:I, reg _write_repository_package_db:cls, reg db2:*, reg db3:V, reg p21:p(V +), reg dir7:*, reg dir8:V, reg p22:p(V +), reg rds_compress1:*, reg rds_compress2:V, reg p23:p(V +), reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg np:*, reg np1:V, reg invisible:cls, reg r68:V |
    mkenv;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(".") else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L1(NULL) else L1(fields);
  L1(fields_orDefault):
    st fields = fields_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L2() else L3(type);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("source", "mac.binary", "win.binary");
      goto L0(r2);
    L2():
      r = dyn base("source", "mac.binary", "win.binary");
      goto L0(r);
    };
    goto L3(p);
  L3(type_orDefault):
    st type = type_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L4(FALSE) else L4(verbose);
  L4(verbose_orDefault):
    st verbose = verbose_orDefault;
    unpacked_isMissing = missing.0(unpacked);
    if unpacked_isMissing then L5(FALSE) else L5(unpacked);
  L5(unpacked_orDefault):
    st unpacked = unpacked_orDefault;
    subdirs_isMissing = missing.0(subdirs);
    if subdirs_isMissing then L6(FALSE) else L6(subdirs);
  L6(subdirs_orDefault):
    st subdirs = subdirs_orDefault;
    latestOnly_isMissing = missing.0(latestOnly);
    if latestOnly_isMissing then L7(TRUE) else L7(latestOnly);
  L7(latestOnly_orDefault):
    st latestOnly = latestOnly_orDefault;
    addFiles_isMissing = missing.0(addFiles);
    if addFiles_isMissing then L8(FALSE) else L8(addFiles);
  L8(addFiles_orDefault):
    st addFiles = addFiles_orDefault;
    rds_compress_isMissing = missing.0(rds_compress);
    if rds_compress_isMissing then L9("xz") else L9(rds_compress);
  L9(rds_compress_orDefault):
    st rds_compress = rds_compress_orDefault;
    validate_isMissing = missing.0(validate);
    if validate_isMissing then L10(FALSE) else L10(validate);
  L10(validate_orDefault):
    st validate = validate_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L11(r5):
    c1 = `as.logical`(r5);
    if c1 then L35() else L12(c1);
  L33():
    missing = ldf missing in base;
    r6 = dyn missing(<sym type>);
    goto L11(r6);
  L34():
    r4 = dyn base1(<sym type>);
    goto L11(r4);
  L12(c3):
    c12 = `as.logical`(c3);
    if c12 then L42() else L13();
  L35():
    _Platform = ld `.Platform`;
    check L36() else D0();
  D0():
    deopt 3 [c1, _Platform];
  L13():
    goto L14();
  L14():
    match_arg = ldf `match.arg`;
    check L44() else D1();
  L36():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c4 = `is.object`(_Platform1);
    if c4 then L38() else L39(c1, _Platform1);
  L42():
    st type = "win.binary";
    goto L14();
  D1():
    deopt 15 [];
  L37(c8, dx1):
    r8 = `==`(dx1, "windows");
    c9 = `as.logical`(r8);
    c10 = `&&`(c8, c9);
    goto L12(c10);
  L38():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(c1, dr);
  L39(c6, _Platform3):
    r7 = `$`(_Platform3, <sym OS.type>);
    goto L37(c6, r7);
  L44():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r11 = dyn match_arg(p1);
    check L45() else D2();
  D2():
    deopt 17 [r11];
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L37(c1, dx);
  L45():
    st type = r11;
    st paths = "";
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L15(r13):
    c14 = `as.logical`(r13);
    if c14 then L49() else L16(c14);
  L46():
    subdirs1 = ld subdirs;
    check L48() else D3();
  L47():
    r12 = dyn base2(<sym subdirs>);
    goto L15(r12);
  D3():
    deopt 23 [subdirs1];
  L16(c16):
    c20 = `as.logical`(c16);
    if c20 then L52() else L17();
  L48():
    subdirs2 = force? subdirs1;
    checkMissing(subdirs2);
    c13 = `is.logical`(subdirs2);
    goto L15(c13);
  L49():
    subdirs3 = ld subdirs;
    check L50() else D4();
  D4():
    deopt 26 [c14, subdirs3];
  L17():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L20():
    st db = NULL;
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  L50():
    subdirs4 = force? subdirs3;
    checkMissing(subdirs4);
    c17 = `as.logical`(subdirs4);
    c18 = `&&`(c14, c17);
    goto L16(c18);
  L52():
    setwd = ldf setwd;
    check L53() else D5();
  D5():
    deopt 30 [];
  L21(r28):
    c24 = `as.logical`(r28);
    if c24 then L73() else L22();
  L24(r33):
    r35 = `!`(r33);
    st addPaths = r35;
    paths10 = ld paths;
    check L83() else D21();
  L53():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r15 = dyn setwd(p2);
    check L54() else D6();
  L70():
    subdirs5 = ld subdirs;
    check L72() else D16();
  L71():
    r27 = dyn base4(<sym subdirs>);
    goto L21(r27);
  L79():
    paths8 = ld paths;
    check L81() else D19();
  L80():
    r32 = dyn base6(<sym paths>, "");
    goto L24(r32);
  D6():
    deopt 32 [r15];
  D16():
    deopt 64 [subdirs5];
  D19():
    deopt 82 [paths8];
  D21():
    deopt 96 [paths10];
  L22():
    goto L20();
  L54():
    st owd = r15;
    list_dirs = ldf `list.dirs`;
    check L55() else D7();
  L72():
    subdirs6 = force? subdirs5;
    checkMissing(subdirs6);
    c23 = `is.character`(subdirs6);
    goto L21(c23);
  L73():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L81():
    paths9 = force? paths8;
    checkMissing(paths9);
    identical = ldf identical in base;
    r34 = dyn identical(paths9, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L82() else D20();
  L83():
    paths11 = force? paths10;
    checkMissing(paths11);
    s = toForSeq(paths11);
    l = length(s);
    i = 0;
    goto L25(i);
  D7():
    deopt 35 [];
  D20():
    deopt 93 [r34];
  L23(r30):
    st paths = r30;
    goto L20();
  L25(i1):
    i2 = `+`.1(i1, 1);
    c26 = `<`.1(l, i2);
    if c26 then L84() else L31();
  L55():
    r16 = dyn list_dirs(".");
    check L56() else D8();
  L74():
    subdirs7 = ld subdirs;
    check L76() else D17();
  L75():
    r29 = dyn base5("", <sym subdirs>);
    goto L23(r29);
  L82():
    goto L24(r34);
  D8():
    deopt 37 [r16];
  D17():
    deopt 70 [subdirs7];
  L31():
    x = `[[`(s, i2, NULL, TRUE);
    st path = x;
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  L56():
    st paths = r16;
    setwd1 = ldf setwd;
    check L57() else D9();
  L76():
    subdirs8 = force? subdirs7;
    checkMissing(subdirs8);
    c25 = ldf c in base;
    r31 = dyn c25("", subdirs8);
    check L77() else D18();
  L84():
    _write_repository_package_db = ldf `.write_repository_package_db`;
    check L104() else D35();
  D9():
    deopt 40 [];
  D18():
    deopt 73 [r31];
  D35():
    deopt 147 [];
  L26(i7, r37):
    c27 = `as.logical`(r37);
    if c27 then L89() else L27();
  L57():
    p3 = prom<V +>{
      owd = ld owd;
      owd1 = force? owd;
      checkMissing(owd1);
      return owd1;
    };
    r18 = dyn setwd1(p3);
    check L58() else D10();
  L77():
    goto L23(r31);
  L85():
    path = ld path;
    check L87() else D22();
  L86():
    r36 = dyn base7(<sym path>);
    goto L26(i2, r36);
  L104():
    p21 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    p22 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p23 = prom<V +>{
      rds_compress1 = ld rds_compress;
      rds_compress2 = force? rds_compress1;
      checkMissing(rds_compress2);
      return rds_compress2;
    };
    r65 = dyn _write_repository_package_db(p21, p22, p23);
    check L105() else D36();
  D10():
    deopt 42 [r18];
  D22():
    deopt 100 [i2, path];
  D36():
    deopt 151 [r65];
  L27():
    dir5 = ld dir;
    check L93() else D26();
  L28(i10, r42):
    st this = r42;
    _build_repository_package_db = ldf `.build_repository_package_db`;
    check L94() else D27();
  L58():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L87():
    path1 = force? path;
    checkMissing(path1);
    nzchar = ldf nzchar in base;
    r38 = dyn nzchar(path1);
    check L88() else D23();
  L89():
    file_path = ldf `file.path`;
    check L90() else D24();
  L105():
    st np = r65;
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L106() else L107();
  D23():
    deopt 103 [i2, r38];
  D24():
    deopt 105 [i7];
  D26():
    deopt 109 [i7, dir5];
  D27():
    deopt 113 [i10];
  L18(r20):
    st paths = r20;
    sub = ldf sub;
    check L67() else D14();
  L32(r67):
    popenv;
    return r67;
  L59():
    paths = ld paths;
    check L61() else D11();
  L60():
    r19 = dyn base3("", <lang `[`(paths, `!=`(paths, "."))>);
    goto L18(r19);
  L88():
    goto L26(i2, r38);
  L90():
    p5 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p6 = prom<V +>{
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      return path3;
    };
    r41 = dyn file_path(p5, p6);
    check L91() else D25();
  L93():
    dir6 = force? dir5;
    checkMissing(dir6);
    goto L28(i7, dir6);
  L94():
    p7 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    p8 = prom<V +>{
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      return fields2;
    };
    p9 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p10 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    p11 = prom<V +>{
      unpacked1 = ld unpacked;
      unpacked2 = force? unpacked1;
      checkMissing(unpacked2);
      return unpacked2;
    };
    p12 = prom<V +>{
      validate1 = ld validate;
      validate2 = force? validate1;
      checkMissing(validate2);
      return validate2;
    };
    r49 = dyn _build_repository_package_db(p7, p8, p9, p10, p11, p12);
    check L95() else D28();
  L106():
    np = ld np;
    check L108() else D37();
  L107():
    r66 = dyn base8(<sym np>);
    goto L32(r66);
  D11():
    deopt 46 [paths];
  D14():
    deopt 57 [];
  D25():
    deopt 108 [i7, r41];
  D28():
    deopt 120 [i10, r49];
  D37():
    deopt 155 [np];
  L61():
    paths1 = force? paths;
    checkMissing(paths1);
    c21 = `is.object`(paths1);
    if c21 then L62() else L63(paths1);
  L67():
    p4 = prom<V +>{
      paths6 = ld paths;
      paths7 = force? paths6;
      checkMissing(paths7);
      return paths7;
    };
    r25 = dyn sub("^[.]/", "", p4);
    check L68() else D15();
  L91():
    goto L28(i7, r41);
  L95():
    st desc = r49;
    _process_repository_package_db_to_matrix = ldf `.process_repository_package_db_to_matrix`;
    check L96() else D29();
  L108():
    np1 = force? np;
    checkMissing(np1);
    invisible = ldf invisible in base;
    r68 = dyn invisible(np1);
    check L109() else D38();
  D15():
    deopt 61 [r25];
  D29():
    deopt 123 [i10];
  D38():
    deopt 158 [r68];
  L19(dx3):
    c22 = ldf c in base;
    r23 = dyn c22("", dx3);
    check L66() else D13();
  L62():
    dr2 = tryDispatchBuiltin.1("[", paths1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(dr2);
  L63(paths3):
    paths4 = ld paths;
    check L65() else D12();
  L68():
    st paths = r25;
    goto L20();
  L96():
    p13 = prom<V +>{
      desc = ld desc;
      desc1 = force? desc;
      checkMissing(desc1);
      return desc1;
    };
    p14 = prom<V +>{
      path4 = ld path;
      path5 = force? path4;
      checkMissing(path5);
      return path5;
    };
    p15 = prom<V +>{
      addFiles1 = ld addFiles;
      addFiles2 = force? addFiles1;
      checkMissing(addFiles2);
      return addFiles2;
    };
    p16 = prom<V +>{
      addPaths = ld addPaths;
      addPaths1 = force? addPaths;
      checkMissing(addPaths1);
      return addPaths1;
    };
    p17 = prom<V +>{
      latestOnly1 = ld latestOnly;
      latestOnly2 = force? latestOnly1;
      checkMissing(latestOnly2);
      return latestOnly2;
    };
    r55 = dyn _process_repository_package_db_to_matrix(p13, p14, p15, p16, p17);
    check L97() else D30();
  L109():
    goto L32(r68);
  D12():
    deopt 48 [paths3, paths4];
  D13():
    deopt 54 [r23];
  D30():
    deopt 129 [i10, r55];
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L65():
    paths5 = force? paths4;
    checkMissing(paths5);
    r21 = `!=`(paths5, ".");
    __ = ldf `[` in base;
    r22 = dyn __(paths3, r21);
    goto L19(r22);
  L66():
    goto L18(r23);
  L97():
    st desc = r55;
    NROW = ldf NROW;
    check L98() else D31();
  D31():
    deopt 132 [i10];
  L98():
    p18 = prom<V +>{
      desc2 = ld desc;
      desc3 = force? desc2;
      checkMissing(desc3);
      return desc3;
    };
    r57 = dyn NROW(p18);
    check L99() else D32();
  D32():
    deopt 134 [i10, r57];
  L99():
    c28 = `as.logical`(r57);
    if c28 then L100() else L29();
  L29():
    goto L30(i10);
  L30(i13):
    goto L25(i13);
  L100():
    rbind = ldf rbind;
    check L101() else D33();
  D33():
    deopt 136 [i10];
  L101():
    p19 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p20 = prom<V +>{
      desc4 = ld desc;
      desc5 = force? desc4;
      checkMissing(desc5);
      return desc5;
    };
    r60 = dyn rbind(p19, p20);
    check L102() else D34();
  D34():
    deopt 139 [i10, r60];
  L102():
    st db = r60;
    goto L30(i10);
  }
}