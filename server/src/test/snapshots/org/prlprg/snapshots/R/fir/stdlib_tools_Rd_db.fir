fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1561323414;
    st Rd_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1561323414(package, dir, `lib.loc`, stages) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg stages:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var stages:*, reg stages_isMissing:L, reg stages_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg package5:*, reg package6:V, reg p3:p(V +), reg r15:V, reg file_test:cls, reg paste0:cls, reg db_file:*, reg db_file1:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg c2:L, reg fetchRdDB:cls, reg db_file2:*, reg db_file3:V, reg p6:p(V +), reg r21:V, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p7:p(V +), reg r23:V, reg file_exists:cls, reg pathfile:*, reg pathfile1:V, reg p8:p(V +), reg r25:V, reg c3:L, reg readRDS:cls, reg pathfile2:*, reg pathfile3:V, reg p9:p(V +), reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg paths:*, reg paths1:V, reg attr:cls, reg r32:V, reg c4:V, reg r33:V, reg c5:L, reg substring:cls, reg paths2:*, reg paths3:V, reg p10:p(V +), reg first:*, reg first1:V, reg p11:p(V +), reg r36:V, reg paths4:*, reg paths5:V, reg l:*, reg names__:cls, reg r38:V, reg paths6:V, reg paths7:V, reg stop1:cls, reg sprintf:cls, reg sQuote:cls, reg package7:*, reg package8:V, reg p12:p(V +), reg r40:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg missing1:cls, reg r47:V, reg c6:L, reg stop2:cls, reg r48:V, reg dir_exists:cls, reg dir5:*, reg dir6:V, reg p15:p(V +), reg r51:V, reg r52:V, reg c7:L, reg stop3:cls, reg gettextf:cls, reg dir7:*, reg dir8:V, reg p16:p(V +), reg r54:V, reg p17:p(V +), reg r56:V, reg file_path_as_absolute:cls, reg dir9:*, reg dir10:V, reg p18:p(V +), reg r59:V, reg file_path2:cls, reg dir11:*, reg dir12:V, reg p19:p(V +), reg r61:V, reg file_path3:cls, reg dir13:*, reg dir14:V, reg p20:p(V +), reg r63:V, reg _build_Rd_db:cls, reg dir15:*, reg dir16:V, reg p21:p(V +), reg stages1:*, reg stages2:V, reg p22:p(V +), reg built_file:*, reg built_file1:V, reg p23:p(V +), reg later_file:*, reg later_file1:V, reg p24:p(V +), reg r68:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r69:V, reg r70:V, reg db:*, reg db1:V, reg length1:cls, reg r71:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r72:V, reg r73:V, reg file_path4:cls, reg dir17:*, reg dir18:V, reg p25:p(V +), reg r75:V, reg nchar:cls, reg r76:V, reg r77:V, reg substring1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r78:V, reg r79:V, reg db2:*, reg db3:V, reg names:cls, reg r80:V, reg p26:p(V +), reg first2:*, reg first3:V, reg p27:p(V +), reg r83:V, reg l1:*, reg names__1:cls, reg r84:V, reg db4:*, reg db5:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    stages_isMissing = missing.0(stages);
    if stages_isMissing then L1("build") else L1(stages);
  L1(stages_orDefault):
    st stages = stages_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L26() else L3();
  L24():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L2(r2);
  L25():
    r = dyn base(<sym package>);
    goto L2(r);
  L3():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L15():
    db4 = ld db;
    check L104() else D50();
  L26():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  D50():
    deopt 174 [db4];
  L4(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L31() else L5();
  L16(r46):
    c6 = `as.logical`(r46);
    if c6 then L71() else L17();
  L27():
    package1 = ld package;
    check L29() else D0();
  L28():
    r4 = dyn base1(<sym package>);
    goto L4(r4);
  L69():
    missing1 = ldf missing in base;
    r47 = dyn missing1(<sym dir>);
    goto L16(r47);
  L70():
    r45 = dyn base4(<sym dir>);
    goto L16(r45);
  L104():
    db5 = force? db4;
    checkMissing(db5);
    popenv;
    return db5;
  D0():
    deopt 6 [package1];
  L5():
    goto L6();
  L6():
    find_package = ldf `find.package`;
    check L35() else D4();
  L17():
    goto L18();
  L18():
    dir_exists = ldf `dir.exists`;
    check L75() else D29();
  L29():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L30() else D1();
  L31():
    stop = ldf stop;
    check L32() else D2();
  L71():
    stop2 = ldf stop;
    check L72() else D27();
  D1():
    deopt 9 [r6];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  D27():
    deopt 95 [];
  D29():
    deopt 101 [];
  L30():
    goto L4(r6);
  L32():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L33() else D3();
  L35():
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
    check L36() else D5();
  L72():
    r48 = dyn stop2("you must specify 'package' or 'dir'");
    check L73() else D28();
  L75():
    p15 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r51 = dyn dir_exists(p15);
    check L76() else D30();
  D3():
    deopt 15 [r8];
  D5():
    deopt 22 [r12];
  D28():
    deopt 97 [r48];
  D30():
    deopt 103 [r51];
  L33():
    goto L6();
  L36():
    st dir = r12;
    file_path = ldf `file.path`;
    check L37() else D6();
  L73():
    goto L18();
  L76():
    r52 = `!`(r51);
    c7 = `as.logical`(r52);
    if c7 then L77() else L19();
  D6():
    deopt 25 [];
  L19():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L81() else D33();
  L20():
    file_path2 = ldf `file.path`;
    check L83() else D35();
  L37():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p3 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r15 = dyn file_path(p2, "help", p3);
    check L38() else D7();
  L77():
    stop3 = ldf stop;
    check L78() else D31();
  D7():
    deopt 29 [r15];
  D31():
    deopt 106 [];
  D33():
    deopt 112 [];
  D35():
    deopt 117 [];
  L38():
    st db_file = r15;
    file_test = ldf file_test;
    check L39() else D8();
  L78():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p16 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r54 = dyn gettextf("directory '%s' does not exist", p16);
      return r54;
    };
    r56 = dyn stop3[, domain](p17, NA_LGL);
    check L79() else D32();
  L81():
    p18 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r59 = dyn file_path_as_absolute(p18);
    check L82() else D34();
  L83():
    p19 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r61 = dyn file_path2(p19, "build", "partial.rdb");
    check L84() else D36();
  D8():
    deopt 32 [];
  D32():
    deopt 110 [r56];
  D34():
    deopt 114 [r59];
  D36():
    deopt 121 [r61];
  L39():
    p5 = prom<V +>{
      paste0 = ldf paste0;
      p4 = prom<V +>{
        db_file = ld db_file;
        db_file1 = force? db_file;
        checkMissing(db_file1);
        return db_file1;
      };
      r17 = dyn paste0(p4, ".rdx");
      return r17;
    };
    r19 = dyn file_test("-f", p5);
    check L40() else D9();
  L79():
    goto L20();
  L82():
    st dir = r59;
    goto L20();
  L84():
    st built_file = r61;
    file_path3 = ldf `file.path`;
    check L85() else D37();
  D9():
    deopt 35 [r19];
  D37():
    deopt 124 [];
  L40():
    c2 = `as.logical`(r19);
    if c2 then L41() else L7();
  L85():
    p20 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r63 = dyn file_path3(p20, "build", "stage23.rdb");
    check L86() else D38();
  D38():
    deopt 128 [r63];
  L7():
    stop1 = ldf stop;
    check L66() else D25();
  L14(paths7):
    goto L15();
  L41():
    fetchRdDB = ldf fetchRdDB;
    check L42() else D10();
  L86():
    st later_file = r63;
    _build_Rd_db = ldf `.build_Rd_db`;
    check L87() else D39();
  D10():
    deopt 37 [];
  D25():
    deopt 86 [];
  D39():
    deopt 131 [];
  L42():
    p6 = prom<V +>{
      db_file2 = ld db_file;
      db_file3 = force? db_file2;
      checkMissing(db_file3);
      return db_file3;
    };
    r21 = dyn fetchRdDB(p6);
    check L43() else D11();
  L66():
    p14 = prom<V +>{
      sprintf = ldf sprintf;
      p13 = prom<V +>{
        sQuote = ldf sQuote;
        p12 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          return package8;
        };
        r40 = dyn sQuote(p12);
        return r40;
      };
      r42 = dyn sprintf("installed help of package %s is corrupt", p13);
      return r42;
    };
    r44 = dyn stop1[, domain](p14, NA_LGL);
    check L67() else D26();
  L87():
    p21 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    p22 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    p23 = prom<V +>{
      built_file = ld built_file;
      built_file1 = force? built_file;
      checkMissing(built_file1);
      return built_file1;
    };
    p24 = prom<V +>{
      later_file = ld later_file;
      later_file1 = force? later_file;
      checkMissing(later_file1);
      return later_file1;
    };
    r68 = dyn _build_Rd_db[, stages, built_file, later_file](p21, p22, p23, p24);
    check L88() else D40();
  D11():
    deopt 39 [r21];
  D26():
    deopt 90 [r44];
  D40():
    deopt 139 [r68];
  L43():
    st db = r21;
    file_path1 = ldf `file.path`;
    check L44() else D12();
  L67():
    goto L14(r44);
  L88():
    st db = r68;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  D12():
    deopt 42 [];
  L21(r70):
    c8 = `as.logical`(r70);
    if c8 then L93() else L22();
  L44():
    p7 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r23 = dyn file_path1(p7, "help", "paths.rds");
    check L45() else D13();
  L89():
    db = ld db;
    check L91() else D41();
  L90():
    r69 = dyn base5(<sym db>);
    goto L21(r69);
  D13():
    deopt 46 [r23];
  D41():
    deopt 143 [db];
  L22():
    goto L15();
  L45():
    st pathfile = r23;
    file_exists = ldf `file.exists`;
    check L46() else D14();
  L91():
    db1 = force? db;
    checkMissing(db1);
    length1 = ldf length in base;
    r71 = dyn length1(db1);
    check L92() else D42();
  L93():
    sym6 = ldf nchar;
    base6 = ldf nchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  D14():
    deopt 49 [];
  D42():
    deopt 146 [r71];
  L23(r73):
    r77 = `+`(r73, 2);
    st first = r77;
    substring1 = ldf substring;
    check L99() else D46();
  L46():
    p8 = prom<V +>{
      pathfile = ld pathfile;
      pathfile1 = force? pathfile;
      checkMissing(pathfile1);
      return pathfile1;
    };
    r25 = dyn file_exists(p8);
    check L47() else D15();
  L92():
    goto L21(r71);
  L94():
    file_path4 = ldf `file.path`;
    check L96() else D43();
  L95():
    r72 = dyn base6(<lang file.path(dir, "man")>);
    goto L23(r72);
  D15():
    deopt 51 [r25];
  D43():
    deopt 150 [];
  D46():
    deopt 163 [];
  L47():
    c3 = `as.logical`(r25);
    if c3 then L48() else L8();
  L96():
    p25 = prom<V +>{
      dir17 = ld dir;
      dir18 = force? dir17;
      checkMissing(dir18);
      return dir18;
    };
    r75 = dyn file_path4(p25, "man");
    check L97() else D44();
  L99():
    p26 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      names = ldf names in base;
      r80 = dyn names(db3);
      goto L0(r80);
    L2():
      r78 = dyn base7(<sym db>);
      goto L0(r78);
    };
    p27 = prom<V +>{
      first2 = ld first;
      first3 = force? first2;
      checkMissing(first3);
      return first3;
    };
    r83 = dyn substring1(p26, p27);
    check L100() else D47();
  D44():
    deopt 153 [r75];
  D47():
    deopt 166 [r83];
  L8():
    goto L13(NULL);
  L13(paths6):
    goto L14(paths6);
  L48():
    readRDS = ldf readRDS;
    check L49() else D16();
  L97():
    nchar = ldf nchar in base;
    r76 = dyn nchar(r75, "chars", FALSE, NA_LGL);
    check L98() else D45();
  L100():
    l1 = ld db;
    names__1 = ldf `names<-`;
    check L101() else D48();
  D16():
    deopt 53 [];
  D45():
    deopt 158 [r76];
  D48():
    deopt 168 [r83, l1, r83];
  L49():
    p9 = prom<V +>{
      pathfile2 = ld pathfile;
      pathfile3 = force? pathfile2;
      checkMissing(pathfile3);
      return pathfile3;
    };
    r27 = dyn readRDS(p9);
    check L50() else D17();
  L98():
    goto L23(r76);
  L101():
    r84 = dyn names__1(l1, NULL, r83);
    check L102() else D49();
  D17():
    deopt 55 [r27];
  D49():
    deopt 170 [r83, r84];
  L50():
    st paths = r27;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L102():
    st db = r84;
    goto L15();
  L9(r29):
    r33 = `!`(r29);
    c5 = `as.logical`(r33);
    if c5 then L57() else L11();
  L51():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L52():
    r28 = dyn base2(<lang `<-`(first, attr(paths, "first"))>);
    goto L9(r28);
  L10(r31):
    st first = r31;
    c4 = `==`(r31, NULL);
    goto L9(c4);
  L11():
    goto L12();
  L12():
    paths4 = ld paths;
    check L61() else D22();
  L53():
    paths = ld paths;
    check L55() else D18();
  L54():
    r30 = dyn base3(<sym paths>, "first");
    goto L10(r30);
  L57():
    substring = ldf substring;
    check L58() else D20();
  D18():
    deopt 60 [paths];
  D20():
    deopt 69 [];
  D22():
    deopt 76 [paths4];
  L55():
    paths1 = force? paths;
    checkMissing(paths1);
    attr = ldf attr in base;
    r32 = dyn attr(paths1, "first");
    check L56() else D19();
  L58():
    p10 = prom<V +>{
      paths2 = ld paths;
      paths3 = force? paths2;
      checkMissing(paths3);
      return paths3;
    };
    p11 = prom<V +>{
      first = ld first;
      first1 = force? first;
      checkMissing(first1);
      return first1;
    };
    r36 = dyn substring(p10, p11);
    check L59() else D21();
  L61():
    paths5 = force? paths4;
    checkMissing(paths5);
    l = ld db;
    names__ = ldf `names<-`;
    check L62() else D23();
  D19():
    deopt 64 [r32];
  D21():
    deopt 72 [r36];
  D23():
    deopt 79 [paths5, l, paths5];
  L56():
    goto L10(r32);
  L59():
    st paths = r36;
    goto L12();
  L62():
    r38 = dyn names__(l, NULL, paths5);
    check L63() else D24();
  D24():
    deopt 81 [paths5, r38];
  L63():
    st db = r38;
    goto L13(paths5);
  }
}