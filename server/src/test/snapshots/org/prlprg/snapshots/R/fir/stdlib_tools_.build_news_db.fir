fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner537273303;
    st `.build_news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner537273303(package, `lib.loc`, format, reader) {
  (reg package:*, reg lib_loc:*, reg format:*, reg reader:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var reader:*, reg reader_isMissing:L, reg reader_orDefault:*, reg system_file:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r2:V, reg file_path:cls, reg dir:*, reg dir1:V, reg p2:p(V +), reg r4:V, reg file_test:cls, reg nfile:*, reg nfile1:V, reg p3:p(V +), reg r6:V, reg c:L, reg _build_news_db_from_package_NEWS_Rd:cls, reg nfile2:*, reg nfile3:V, reg p4:p(V +), reg r8:V, reg file_path1:cls, reg dir2:*, reg dir3:V, reg p5:p(V +), reg r12:V, reg file_test1:cls, reg nfile4:*, reg nfile5:V, reg p6:p(V +), reg r14:V, reg c1:L, reg _build_news_db_from_package_NEWS_md:cls, reg nfile6:*, reg nfile7:V, reg p7:p(V +), reg r16:V, reg file_path2:cls, reg dir4:*, reg dir5:V, reg p8:p(V +), reg r20:V, reg file_test2:cls, reg nfile8:*, reg nfile9:V, reg p9:p(V +), reg r22:V, reg r23:V, reg c2:L, reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg r25:V, reg invisible:cls, reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg format1:*, reg format2:V, reg c3:V, reg r31:V, reg c4:L, reg _NotYetUsed:cls, reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg reader1:*, reg reader2:V, reg c5:V, reg r36:V, reg c6:L, reg _NotYetUsed1:cls, reg r37:V, reg _news_reader_default:*, reg _news_reader_default1:V, reg reader3:cls, reg nfile10:*, reg nfile11:V, reg p10:p(V +), reg r40:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    format_isMissing = missing.0(format);
    if format_isMissing then L1(NULL) else L1(format);
  L1(format_orDefault):
    st format = format_orDefault;
    reader_isMissing = missing.0(reader);
    if reader_isMissing then L2(NULL) else L2(reader);
  L2(reader_orDefault):
    st reader = reader_orDefault;
    system_file = ldf `system.file`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
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
    r2 = dyn system_file[package, `lib.loc`](p, p1);
    check L17() else D1();
  D1():
    deopt 6 [r2];
  L17():
    st dir = r2;
    file_path = ldf `file.path`;
    check L18() else D2();
  D2():
    deopt 9 [];
  L18():
    p2 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    r4 = dyn file_path(p2, "NEWS.Rd");
    check L19() else D3();
  D3():
    deopt 12 [r4];
  L19():
    st nfile = r4;
    file_test = ldf file_test;
    check L20() else D4();
  D4():
    deopt 15 [];
  L20():
    p3 = prom<V +>{
      nfile = ld nfile;
      nfile1 = force? nfile;
      checkMissing(nfile1);
      return nfile1;
    };
    r6 = dyn file_test("-f", p3);
    check L21() else D5();
  D5():
    deopt 18 [r6];
  L21():
    c = `as.logical`(r6);
    if c then L22() else L3();
  L3():
    file_path1 = ldf `file.path`;
    check L27() else D8();
  L22():
    _build_news_db_from_package_NEWS_Rd = ldf `.build_news_db_from_package_NEWS_Rd`;
    check L23() else D6();
  D6():
    deopt 20 [];
  D8():
    deopt 27 [];
  L23():
    p4 = prom<V +>{
      nfile2 = ld nfile;
      nfile3 = force? nfile2;
      checkMissing(nfile3);
      return nfile3;
    };
    r8 = dyn _build_news_db_from_package_NEWS_Rd(p4);
    check L24() else D7();
  L27():
    p5 = prom<V +>{
      dir2 = ld dir;
      dir3 = force? dir2;
      checkMissing(dir3);
      return dir3;
    };
    r12 = dyn file_path1(p5, "NEWS.md");
    check L28() else D9();
  D7():
    deopt 22 [r8];
  D9():
    deopt 30 [r12];
  L24():
    popenv;
    return r8;
  L28():
    st nfile = r12;
    file_test1 = ldf file_test;
    check L29() else D10();
  D10():
    deopt 33 [];
  L29():
    p6 = prom<V +>{
      nfile4 = ld nfile;
      nfile5 = force? nfile4;
      checkMissing(nfile5);
      return nfile5;
    };
    r14 = dyn file_test1("-f", p6);
    check L30() else D11();
  D11():
    deopt 36 [r14];
  L30():
    c1 = `as.logical`(r14);
    if c1 then L31() else L5();
  L5():
    file_path2 = ldf `file.path`;
    check L36() else D14();
  L31():
    _build_news_db_from_package_NEWS_md = ldf `.build_news_db_from_package_NEWS_md`;
    check L32() else D12();
  D12():
    deopt 38 [];
  D14():
    deopt 45 [];
  L32():
    p7 = prom<V +>{
      nfile6 = ld nfile;
      nfile7 = force? nfile6;
      checkMissing(nfile7);
      return nfile7;
    };
    r16 = dyn _build_news_db_from_package_NEWS_md(p7);
    check L33() else D13();
  L36():
    p8 = prom<V +>{
      dir4 = ld dir;
      dir5 = force? dir4;
      checkMissing(dir5);
      return dir5;
    };
    r20 = dyn file_path2(p8, "NEWS");
    check L37() else D15();
  D13():
    deopt 40 [r16];
  D15():
    deopt 48 [r20];
  L33():
    popenv;
    return r16;
  L37():
    st nfile = r20;
    file_test2 = ldf file_test;
    check L38() else D16();
  D16():
    deopt 51 [];
  L38():
    p9 = prom<V +>{
      nfile8 = ld nfile;
      nfile9 = force? nfile8;
      checkMissing(nfile9);
      return nfile9;
    };
    r22 = dyn file_test2("-f", p9);
    check L39() else D17();
  D17():
    deopt 54 [r22];
  L39():
    r23 = `!`(r22);
    c2 = `as.logical`(r23);
    if c2 then L40() else L7();
  L7():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L40():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L8(r25):
    popenv;
    return r25;
  L10(r30):
    r31 = `!`(r30);
    c4 = `as.logical`(r31);
    if c4 then L49() else L11();
  L41():
    invisible = ldf invisible in base;
    r26 = dyn invisible();
    check L43() else D18();
  L42():
    r24 = dyn base();
    goto L8(r24);
  L46():
    format1 = ld format;
    check L48() else D19();
  L47():
    r29 = dyn base1(<sym format>);
    goto L10(r29);
  D18():
    deopt 59 [r26];
  D19():
    deopt 64 [format1];
  L11():
    goto L12();
  L12():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L53() else L54();
  L43():
    goto L8(r26);
  L48():
    format2 = force? format1;
    checkMissing(format2);
    c3 = `==`(format2, NULL);
    goto L10(c3);
  L49():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L50() else D20();
  D20():
    deopt 69 [];
  L13(r35):
    r36 = `!`(r35);
    c6 = `as.logical`(r36);
    if c6 then L56() else L14();
  L50():
    r32 = dyn _NotYetUsed("format", FALSE);
    check L51() else D21();
  L53():
    reader1 = ld reader;
    check L55() else D22();
  L54():
    r34 = dyn base2(<sym reader>);
    goto L13(r34);
  D21():
    deopt 72 [r32];
  D22():
    deopt 76 [reader1];
  L14():
    goto L15();
  L15():
    _news_reader_default = ld `.news_reader_default`;
    check L60() else D25();
  L51():
    goto L12();
  L55():
    reader2 = force? reader1;
    checkMissing(reader2);
    c5 = `==`(reader2, NULL);
    goto L13(c5);
  L56():
    _NotYetUsed1 = ldf `.NotYetUsed`;
    check L57() else D23();
  D23():
    deopt 81 [];
  D25():
    deopt 87 [_news_reader_default];
  L57():
    r37 = dyn _NotYetUsed1("reader", FALSE);
    check L58() else D24();
  L60():
    _news_reader_default1 = force? _news_reader_default;
    checkMissing(_news_reader_default1);
    st reader = _news_reader_default1;
    reader3 = ldf reader;
    check L61() else D26();
  D24():
    deopt 84 [r37];
  D26():
    deopt 91 [];
  L58():
    goto L15();
  L61():
    p10 = prom<V +>{
      nfile10 = ld nfile;
      nfile11 = force? nfile10;
      checkMissing(nfile11);
      return nfile11;
    };
    r40 = dyn reader3(p10);
    check L62() else D27();
  D27():
    deopt 93 [r40];
  L62():
    popenv;
    return r40;
  }
}