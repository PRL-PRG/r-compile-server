fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3199063347;
    st `.build_repository_package_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3199063347(dir, fields, type, verbose, unpacked, validate) {
  (reg dir:*, reg fields:*, reg type:*, reg verbose:*, reg unpacked:*, reg validate:*) -+> V { var dir:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r4:V, reg p1:p(V +), var unpacked:*, reg unpacked_isMissing:L, reg unpacked_orDefault:*, var validate:*, reg validate_isMissing:L, reg validate_orDefault:*, reg unpacked1:*, reg unpacked2:V, reg c1:L, reg _build_repository_package_db_from_source_dirs:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg fields1:*, reg fields2:V, reg p3:p(V +), reg verbose1:*, reg verbose2:V, reg p4:p(V +), reg validate1:*, reg validate2:V, reg p5:p(V +), reg r10:V, reg _get_pkg_file_pattern:cls, reg type1:*, reg type2:V, reg p6:p(V +), reg r14:V, reg list_files:cls, reg dir3:*, reg dir4:V, reg p7:p(V +), reg package_pattern:*, reg package_pattern1:V, reg p8:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg files:*, reg files1:V, reg length:cls, reg r20:V, reg r21:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg list:cls, reg r24:V, reg match_arg:cls, reg type3:*, reg type4:V, reg p9:p(V +), reg r28:V, reg _process_package_files_for_repository_db:cls, reg files2:*, reg files3:V, reg p10:p(V +), reg type5:*, reg type6:V, reg p11:p(V +), reg fields3:*, reg fields4:V, reg p12:p(V +), reg verbose3:*, reg verbose4:V, reg p13:p(V +), reg validate3:*, reg validate4:V, reg p14:p(V +), reg r34:V, reg db:*, reg db1:V |
    mkenv;
    st dir = dir;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L0(NULL) else L0(fields);
  L0(fields_orDefault):
    st fields = fields_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1() else L2(type);
  L1():
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
    goto L2(p);
  L2(type_orDefault):
    st type = type_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3() else L4(verbose);
  L3():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("verbose");
      return r4;
    };
    goto L4(p1);
  L4(verbose_orDefault):
    st verbose = verbose_orDefault;
    unpacked_isMissing = missing.0(unpacked);
    if unpacked_isMissing then L5(FALSE) else L5(unpacked);
  L5(unpacked_orDefault):
    st unpacked = unpacked_orDefault;
    validate_isMissing = missing.0(validate);
    if validate_isMissing then L6(FALSE) else L6(validate);
  L6(validate_orDefault):
    st validate = validate_orDefault;
    unpacked1 = ld unpacked;
    check L13() else D0();
  D0():
    deopt 0 [unpacked1];
  L13():
    unpacked2 = force? unpacked1;
    checkMissing(unpacked2);
    c1 = `as.logical`(unpacked2);
    if c1 then L14() else L7();
  L7():
    _get_pkg_file_pattern = ldf `.get_pkg_file_pattern`;
    check L19() else D3();
  L14():
    _build_repository_package_db_from_source_dirs = ldf `.build_repository_package_db_from_source_dirs`;
    check L15() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 13 [];
  L15():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p3 = prom<V +>{
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      return fields2;
    };
    p4 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    p5 = prom<V +>{
      validate1 = ld validate;
      validate2 = force? validate1;
      checkMissing(validate2);
      return validate2;
    };
    r10 = dyn _build_repository_package_db_from_source_dirs(p2, p3, p4, p5);
    check L16() else D2();
  L19():
    p6 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r14 = dyn _get_pkg_file_pattern(p6);
    check L20() else D4();
  D2():
    deopt 8 [r10];
  D4():
    deopt 15 [r14];
  L16():
    popenv;
    return r10;
  L20():
    st package_pattern = r14;
    list_files = ldf `list.files`;
    check L21() else D5();
  D5():
    deopt 18 [];
  L21():
    p7 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p8 = prom<V +>{
      package_pattern = ld package_pattern;
      package_pattern1 = force? package_pattern;
      checkMissing(package_pattern1);
      return package_pattern1;
    };
    r17 = dyn list_files[, pattern, `full.names`](p7, p8, TRUE);
    check L22() else D6();
  D6():
    deopt 24 [r17];
  L22():
    st files = r17;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L9(r19):
    r21 = `!`(r19);
    c2 = `as.logical`(r21);
    if c2 then L27() else L10();
  L23():
    files = ld files;
    check L25() else D7();
  L24():
    r18 = dyn base1(<sym files>);
    goto L9(r18);
  D7():
    deopt 28 [files];
  L10():
    match_arg = ldf `match.arg`;
    check L33() else D10();
  L25():
    files1 = force? files;
    checkMissing(files1);
    length = ldf length in base;
    r20 = dyn length(files1);
    check L26() else D8();
  L27():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  D8():
    deopt 31 [r20];
  D10():
    deopt 41 [];
  L11(r23):
    popenv;
    return r23;
  L26():
    goto L9(r20);
  L28():
    list = ldf list in base;
    r24 = dyn list();
    check L30() else D9();
  L29():
    r22 = dyn base2();
    goto L11(r22);
  L33():
    p9 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    r28 = dyn match_arg(p9);
    check L34() else D11();
  D9():
    deopt 36 [r24];
  D11():
    deopt 43 [r28];
  L30():
    goto L11(r24);
  L34():
    st type = r28;
    _process_package_files_for_repository_db = ldf `.process_package_files_for_repository_db`;
    check L35() else D12();
  D12():
    deopt 46 [];
  L35():
    p10 = prom<V +>{
      files2 = ld files;
      files3 = force? files2;
      checkMissing(files3);
      return files3;
    };
    p11 = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    p12 = prom<V +>{
      fields3 = ld fields;
      fields4 = force? fields3;
      checkMissing(fields4);
      return fields4;
    };
    p13 = prom<V +>{
      verbose3 = ld verbose;
      verbose4 = force? verbose3;
      checkMissing(verbose4);
      return verbose4;
    };
    p14 = prom<V +>{
      validate3 = ld validate;
      validate4 = force? validate3;
      checkMissing(validate4);
      return validate4;
    };
    r34 = dyn _process_package_files_for_repository_db(p10, p11, p12, p13, p14);
    check L36() else D13();
  D13():
    deopt 52 [r34];
  L36():
    st db = r34;
    db = ld db;
    check L37() else D14();
  D14():
    deopt 54 [db];
  L37():
    db1 = force? db;
    checkMissing(db1);
    popenv;
    return db1;
  }
}