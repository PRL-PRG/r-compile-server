fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3737382516;
    st build_license_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3737382516(dir, unpacked) {
  (reg dir:*, reg unpacked:*) -+> V { var dir:*, var unpacked:*, reg unpacked_isMissing:L, reg unpacked_orDefault:*, reg getOption:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c1:L, reg c3:V, reg substr:cls, reg CRAN:*, reg CRAN1:V, reg p:p(V +), reg r8:V, reg r9:V, reg c4:L, reg c5:V, reg c7:L, reg file_path:cls, reg substring:cls, reg CRAN2:*, reg CRAN3:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg c8:cls, reg r17:V, reg _build_repository_package_db:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg fields:*, reg fields1:V, reg p4:p(V +), reg unpacked1:*, reg unpacked2:V, reg p5:p(V +), reg r21:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p6:p(V +), reg db:*, reg db1:V, reg p7:p(V +), reg r24:V, reg data_frame:cls, reg db2:*, reg db3:V, reg c9:L, reg db5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg fields2:*, reg fields3:V, reg c10:cls, reg r27:V, reg __1:cls, reg r28:V, reg p8:p(V +), reg r30:V |
    mkenv;
    st dir = dir;
    unpacked_isMissing = missing.0(unpacked);
    if unpacked_isMissing then L0(FALSE) else L0(unpacked);
  L0(unpacked_orDefault):
    st unpacked = unpacked_orDefault;
    getOption = ldf getOption;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn getOption("repos");
    check L8() else D1();
  D1():
    deopt 3 [r];
  L8():
    c = `is.object`(r);
    if c then L9() else L10(r);
  L1(dx1):
    st CRAN = dx1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L9():
    dr = tryDispatchBuiltin.1("[", r);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(r2):
    __ = ldf `[` in base;
    r3 = dyn __(r2, "CRAN");
    goto L1(r3);
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L14() else L3(c1);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    missing = ldf missing in base;
    r6 = dyn missing(<sym dir>);
    goto L2(r6);
  L13():
    r4 = dyn base(<sym dir>);
    goto L2(r4);
  L3(c3):
    c7 = `as.logical`(c3);
    if c7 then L18() else L4();
  L14():
    substr = ldf substr;
    check L15() else D2();
  D2():
    deopt 12 [c1];
  L4():
    goto L5();
  L5():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L15():
    p = prom<V +>{
      CRAN = ld CRAN;
      CRAN1 = force? CRAN;
      checkMissing(CRAN1);
      return CRAN1;
    };
    r8 = dyn substr(p, 1, 7);
    check L16() else D3();
  L18():
    file_path = ldf `file.path`;
    check L19() else D4();
  D3():
    deopt 16 [c1, r8];
  D4():
    deopt 21 [];
  L6(r16):
    st fields = r16;
    _build_repository_package_db = ldf `.build_repository_package_db`;
    check L25() else D7();
  L16():
    r9 = `==`(r8, "file://");
    c4 = `as.logical`(r9);
    c5 = `&&`(c1, c4);
    goto L3(c5);
  L19():
    p2 = prom<V +>{
      substring = ldf substring;
      p1 = prom<V +>{
        CRAN2 = ld CRAN;
        CRAN3 = force? CRAN2;
        checkMissing(CRAN3);
        return CRAN3;
      };
      r11 = dyn substring(p1, 8);
      return r11;
    };
    r13 = dyn file_path(p2, "src", "contrib");
    check L20() else D5();
  L22():
    c8 = ldf c in base;
    r17 = dyn c8("License", "License_is_FOSS", "License_restricts_use", "Maintainer");
    check L24() else D6();
  L23():
    r15 = dyn base1("License", "License_is_FOSS", "License_restricts_use", "Maintainer");
    goto L6(r15);
  D5():
    deopt 25 [r13];
  D6():
    deopt 36 [r17];
  D7():
    deopt 39 [];
  L20():
    st dir = r13;
    goto L5();
  L24():
    goto L6(r17);
  L25():
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p4 = prom<V +>{
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      return fields1;
    };
    p5 = prom<V +>{
      unpacked1 = ld unpacked;
      unpacked2 = force? unpacked1;
      checkMissing(unpacked2);
      return unpacked2;
    };
    r21 = dyn _build_repository_package_db[, , unpacked](p3, p4, p5);
    check L26() else D8();
  D8():
    deopt 44 [r21];
  L26():
    st db = r21;
    do_call = ldf `do.call`;
    check L27() else D9();
  D9():
    deopt 47 [];
  L27():
    p6 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p7 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r24 = dyn do_call(p6, p7);
    check L28() else D10();
  D10():
    deopt 50 [r24];
  L28():
    st db = r24;
    data_frame = ldf `data.frame`;
    check L29() else D11();
  D11():
    deopt 53 [];
  L29():
    p8 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      c9 = `is.object`(db3);
      if c9 then L2() else L3(db3);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", db3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(db5):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L1(r26):
      __1 = ldf `[` in base;
      r28 = dyn __1(db3, <missing>, r26);
      goto L0(r28);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      fields2 = ld fields;
      fields3 = force? fields2;
      checkMissing(fields3);
      c10 = ldf c in base;
      r27 = dyn c10("Package", "Version", fields3);
      goto L1(r27);
    L6():
      r25 = dyn base2("Package", "Version", <sym fields>);
      goto L1(r25);
    };
    r30 = dyn data_frame[, stringsAsFactors](p8, FALSE);
    check L30() else D12();
  D12():
    deopt 57 [r30];
  L30():
    popenv;
    return r30;
  }
}