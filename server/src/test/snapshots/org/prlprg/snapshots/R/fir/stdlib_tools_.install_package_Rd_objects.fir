fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2906302208;
    st `.install_package_Rd_objects` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2906302208(dir, outDir, encoding) {
  (reg dir:*, reg outDir:*, reg encoding:*) -+> V { var dir:*, var outDir:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg dir_exists:cls, reg mandir:*, reg mandir1:V, reg p2:p(V +), reg r5:V, reg r6:V, reg c:L, reg character:cls, reg r7:V, reg r8:V, reg list_files_with_type:cls, reg mandir2:*, reg mandir3:V, reg p3:p(V +), reg r10:V, reg file_path1:cls, reg outDir1:*, reg outDir2:V, reg p4:p(V +), reg r12:V, reg dir_create:cls, reg manOutDir:*, reg manOutDir1:V, reg p5:p(V +), reg r14:V, reg file_path2:cls, reg manOutDir2:*, reg manOutDir3:V, reg p6:p(V +), reg paste0:cls, reg basename:cls, reg outDir3:*, reg outDir4:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg r21:V, reg file_path3:cls, reg dir5:*, reg dir6:V, reg p10:p(V +), reg r23:V, reg list_files:cls, reg file_path4:cls, reg dir7:*, reg dir8:V, reg p11:p(V +), reg r25:V, reg p12:p(V +), reg r27:V, reg sym:cls, reg base:cls, reg guard:L, reg r28:V, reg r29:V, reg macro_files:*, reg macro_files1:V, reg length:cls, reg r30:V, reg c1:L, reg file_path5:cls, reg manOutDir4:*, reg manOutDir5:V, reg p13:p(V +), reg r32:V, reg dir_create1:cls, reg macroDir:*, reg macroDir1:V, reg p14:p(V +), reg r34:V, reg file_copy:cls, reg macro_files2:*, reg macro_files3:V, reg p15:p(V +), reg macroDir2:*, reg macroDir3:V, reg p16:p(V +), reg r37:V, reg file_path6:cls, reg manOutDir6:*, reg manOutDir7:V, reg p17:p(V +), reg r40:V, reg file_test:cls, reg db_file:*, reg db_file1:V, reg p18:p(V +), reg r42:V, reg r43:V, reg c2:L, reg c3:V, reg file_exists:cls, reg pathsFile:*, reg pathsFile1:V, reg p19:p(V +), reg r45:V, reg r46:V, reg c5:L, reg c6:V, reg c8:L, reg c9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r47:V, reg c13:L, reg r48:V, reg sort:cls, reg manfiles:*, reg manfiles1:V, reg p20:p(V +), reg r50:V, reg sort1:cls, reg readRDS:cls, reg pathsFile2:*, reg pathsFile3:V, reg p21:p(V +), reg r52:V, reg p22:p(V +), reg r54:V, reg identical:cls, reg r55:V, reg r56:V, reg c14:L, reg c15:V, reg c17:L, reg c18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r57:V, reg c22:L, reg r58:V, reg file_test1:cls, reg db_file2:*, reg db_file3:V, reg p23:p(V +), reg manfiles2:*, reg manfiles3:V, reg p24:p(V +), reg r61:V, reg all:cls, reg r62:V, reg r63:V, reg c23:L, reg c24:V, reg c26:L, reg _build_Rd_db:cls, reg dir9:*, reg dir10:V, reg p25:p(V +), reg manfiles4:*, reg manfiles5:V, reg p26:p(V +), reg db_file4:*, reg db_file5:V, reg p27:p(V +), reg encoding1:*, reg encoding2:V, reg p28:p(V +), reg built_file:*, reg built_file1:V, reg p29:p(V +), reg r69:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r70:V, reg r71:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r72:V, reg r73:V, reg db:*, reg db1:V, reg names:cls, reg r74:V, reg as_character:cls, reg r75:V, reg saveRDS:cls, reg structure:cls, reg nm:*, reg nm1:V, reg p30:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r77:V, reg r78:V, reg file_path7:cls, reg mandir4:*, reg mandir5:V, reg p31:p(V +), reg r80:V, reg nchar:cls, reg r81:V, reg r82:V, reg p32:p(V +), reg r84:V, reg p33:p(V +), reg pathsFile4:*, reg pathsFile5:V, reg p34:p(V +), reg r87:V, reg sub:cls, reg basename1:cls, reg nm2:*, reg nm3:V, reg p35:p(V +), reg r89:V, reg p36:p(V +), reg r91:V, reg l:*, reg names__:cls, reg r92:V, reg makeLazyLoadDB:cls, reg db2:*, reg db3:V, reg p37:p(V +), reg file_path8:cls, reg manOutDir8:*, reg manOutDir9:V, reg p38:p(V +), reg basename2:cls, reg outDir5:*, reg outDir6:V, reg p39:p(V +), reg r96:V, reg p40:p(V +), reg r98:V, reg p41:p(V +), reg r100:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r102:V, reg r103:V, reg invisible:cls, reg r104:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L17() else D1();
  D1():
    deopt 3 [r1];
  L17():
    st dir = r1;
    file_path = ldf `file.path`;
    check L18() else D2();
  D2():
    deopt 6 [];
  L18():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "man");
    check L19() else D3();
  D3():
    deopt 9 [r3];
  L19():
    st mandir = r3;
    dir_exists = ldf `dir.exists`;
    check L20() else D4();
  D4():
    deopt 12 [];
  L20():
    p2 = prom<V +>{
      mandir = ld mandir;
      mandir1 = force? mandir;
      checkMissing(mandir1);
      return mandir1;
    };
    r5 = dyn dir_exists(p2);
    check L21() else D5();
  D5():
    deopt 14 [r5];
  L21():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L22() else L1();
  L1():
    list_files_with_type = ldf list_files_with_type;
    check L26() else D8();
  L2(r8):
    st manfiles = r8;
    file_path1 = ldf `file.path`;
    check L28() else D10();
  L22():
    character = ldf character;
    check L23() else D6();
  D6():
    deopt 17 [];
  D8():
    deopt 20 [];
  D10():
    deopt 26 [];
  L23():
    r7 = dyn character();
    check L24() else D7();
  L26():
    p3 = prom<V +>{
      mandir2 = ld mandir;
      mandir3 = force? mandir2;
      checkMissing(mandir3);
      return mandir3;
    };
    r10 = dyn list_files_with_type(p3, "docs");
    check L27() else D9();
  L28():
    p4 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r12 = dyn file_path1(p4, "help");
    check L29() else D11();
  D7():
    deopt 18 [r7];
  D9():
    deopt 23 [r10];
  D11():
    deopt 29 [r12];
  L24():
    goto L2(r7);
  L27():
    goto L2(r10);
  L29():
    st manOutDir = r12;
    dir_create = ldf `dir.create`;
    check L30() else D12();
  D12():
    deopt 32 [];
  L30():
    p5 = prom<V +>{
      manOutDir = ld manOutDir;
      manOutDir1 = force? manOutDir;
      checkMissing(manOutDir1);
      return manOutDir1;
    };
    r14 = dyn dir_create(p5, FALSE);
    check L31() else D13();
  D13():
    deopt 35 [r14];
  L31():
    file_path2 = ldf `file.path`;
    check L32() else D14();
  D14():
    deopt 37 [];
  L32():
    p6 = prom<V +>{
      manOutDir2 = ld manOutDir;
      manOutDir3 = force? manOutDir2;
      checkMissing(manOutDir3);
      return manOutDir3;
    };
    p9 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        basename = ldf basename;
        p7 = prom<V +>{
          outDir3 = ld outDir;
          outDir4 = force? outDir3;
          checkMissing(outDir4);
          return outDir4;
        };
        r17 = dyn basename(p7);
        return r17;
      };
      r19 = dyn paste0(p8, ".rdx");
      return r19;
    };
    r21 = dyn file_path2(p6, p9);
    check L33() else D15();
  D15():
    deopt 40 [r21];
  L33():
    st db_file = r21;
    file_path3 = ldf `file.path`;
    check L34() else D16();
  D16():
    deopt 43 [];
  L34():
    p10 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r23 = dyn file_path3(p10, "build", "partial.rdb");
    check L35() else D17();
  D17():
    deopt 47 [r23];
  L35():
    st built_file = r23;
    list_files = ldf `list.files`;
    check L36() else D18();
  D18():
    deopt 50 [];
  L36():
    p12 = prom<V +>{
      file_path4 = ldf `file.path`;
      p11 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r25 = dyn file_path4(p11, "man", "macros");
      return r25;
    };
    r27 = dyn list_files[, pattern, `full.names`](p12, "\\.Rd$", TRUE);
    check L37() else D19();
  D19():
    deopt 56 [r27];
  L37():
    st macro_files = r27;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L3(r29):
    c1 = `as.logical`(r29);
    if c1 then L42() else L4();
  L38():
    macro_files = ld macro_files;
    check L40() else D20();
  L39():
    r28 = dyn base(<sym macro_files>);
    goto L3(r28);
  D20():
    deopt 60 [macro_files];
  L4():
    goto L5();
  L5():
    file_path6 = ldf `file.path`;
    check L50() else D28();
  L40():
    macro_files1 = force? macro_files;
    checkMissing(macro_files1);
    length = ldf length in base;
    r30 = dyn length(macro_files1);
    check L41() else D21();
  L42():
    file_path5 = ldf `file.path`;
    check L43() else D22();
  D21():
    deopt 63 [r30];
  D22():
    deopt 65 [];
  D28():
    deopt 85 [];
  L41():
    goto L3(r30);
  L43():
    p13 = prom<V +>{
      manOutDir4 = ld manOutDir;
      manOutDir5 = force? manOutDir4;
      checkMissing(manOutDir5);
      return manOutDir5;
    };
    r32 = dyn file_path5(p13, "macros");
    check L44() else D23();
  L50():
    p17 = prom<V +>{
      manOutDir6 = ld manOutDir;
      manOutDir7 = force? manOutDir6;
      checkMissing(manOutDir7);
      return manOutDir7;
    };
    r40 = dyn file_path6(p17, "paths.rds");
    check L51() else D29();
  D23():
    deopt 68 [r32];
  D29():
    deopt 88 [r40];
  L44():
    st macroDir = r32;
    dir_create1 = ldf `dir.create`;
    check L45() else D24();
  L51():
    st pathsFile = r40;
    file_test = ldf file_test;
    check L52() else D30();
  D24():
    deopt 71 [];
  D30():
    deopt 91 [];
  L45():
    p14 = prom<V +>{
      macroDir = ld macroDir;
      macroDir1 = force? macroDir;
      checkMissing(macroDir1);
      return macroDir1;
    };
    r34 = dyn dir_create1(p14, FALSE);
    check L46() else D25();
  L52():
    p18 = prom<V +>{
      db_file = ld db_file;
      db_file1 = force? db_file;
      checkMissing(db_file1);
      return db_file1;
    };
    r42 = dyn file_test("-f", p18);
    check L53() else D31();
  D25():
    deopt 74 [r34];
  D31():
    deopt 94 [r42];
  L46():
    file_copy = ldf `file.copy`;
    check L47() else D26();
  L53():
    r43 = `!`(r42);
    c2 = `as.logical`(r43);
    if c2 then L6(c2) else L54();
  D26():
    deopt 76 [];
  L6(c3):
    c8 = `as.logical`(c3);
    if c8 then L7(c8) else L58();
  L47():
    p15 = prom<V +>{
      macro_files2 = ld macro_files;
      macro_files3 = force? macro_files2;
      checkMissing(macro_files3);
      return macro_files3;
    };
    p16 = prom<V +>{
      macroDir2 = ld macroDir;
      macroDir3 = force? macroDir2;
      checkMissing(macroDir3);
      return macroDir3;
    };
    r37 = dyn file_copy[, , overwrite](p15, p16, TRUE);
    check L48() else D27();
  L54():
    file_exists = ldf `file.exists`;
    check L55() else D32();
  D27():
    deopt 81 [r37];
  D32():
    deopt 97 [c2];
  L7(c9):
    c17 = `as.logical`(c9);
    if c17 then L9(c17) else L67();
  L48():
    goto L5();
  L55():
    p19 = prom<V +>{
      pathsFile = ld pathsFile;
      pathsFile1 = force? pathsFile;
      checkMissing(pathsFile1);
      return pathsFile1;
    };
    r45 = dyn file_exists(p19);
    check L56() else D33();
  L58():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  D33():
    deopt 99 [c2, r45];
  L8(c13, r48):
    r56 = `!`(r48);
    c14 = `as.logical`(r56);
    c15 = `||`(c13, c14);
    goto L7(c15);
  L9(c18):
    c26 = `as.logical`(c18);
    if c26 then L74() else L11();
  L56():
    r46 = `!`(r45);
    c5 = `as.logical`(r46);
    c6 = `||`(c2, c5);
    goto L6(c6);
  L59():
    sort = ldf sort;
    check L61() else D34();
  L60():
    r47 = dyn base1(<lang sort(manfiles)>, <lang sort(readRDS(pathsFile))>);
    goto L8(c8, r47);
  L67():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  D34():
    deopt 105 [c8];
  L10(c22, r58):
    r63 = `!`(r58);
    c23 = `as.logical`(r63);
    c24 = `||`(c22, c23);
    goto L9(c24);
  L11():
    goto L14();
  L14():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L93() else L94();
  L61():
    p20 = prom<V +>{
      manfiles = ld manfiles;
      manfiles1 = force? manfiles;
      checkMissing(manfiles1);
      return manfiles1;
    };
    r50 = dyn sort(p20);
    check L62() else D35();
  L68():
    file_test1 = ldf file_test;
    check L70() else D39();
  L69():
    r57 = dyn base2(<lang file_test("-nt", db_file, manfiles)>);
    goto L10(c17, r57);
  L74():
    _build_Rd_db = ldf `.build_Rd_db`;
    check L75() else D42();
  D35():
    deopt 107 [c8, r50];
  D39():
    deopt 126 [c17];
  D42():
    deopt 136 [];
  L15(r103):
    popenv;
    return r103;
  L62():
    sort1 = ldf sort;
    check L63() else D36();
  L70():
    p23 = prom<V +>{
      db_file2 = ld db_file;
      db_file3 = force? db_file2;
      checkMissing(db_file3);
      return db_file3;
    };
    p24 = prom<V +>{
      manfiles2 = ld manfiles;
      manfiles3 = force? manfiles2;
      checkMissing(manfiles3);
      return manfiles3;
    };
    r61 = dyn file_test1("-nt", p23, p24);
    check L71() else D40();
  L75():
    p25 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p26 = prom<V +>{
      manfiles4 = ld manfiles;
      manfiles5 = force? manfiles4;
      checkMissing(manfiles5);
      return manfiles5;
    };
    p27 = prom<V +>{
      db_file4 = ld db_file;
      db_file5 = force? db_file4;
      checkMissing(db_file5);
      return db_file5;
    };
    p28 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p29 = prom<V +>{
      built_file = ld built_file;
      built_file1 = force? built_file;
      checkMissing(built_file1);
      return built_file1;
    };
    r69 = dyn _build_Rd_db[, , db_file, encoding, built_file](p25, p26, p27, p28, p29);
    check L76() else D43();
  L93():
    invisible = ldf invisible in base;
    r104 = dyn invisible();
    check L95() else D55();
  L94():
    r102 = dyn base6();
    goto L15(r102);
  D36():
    deopt 109 [c8];
  D40():
    deopt 130 [c17, r61];
  D43():
    deopt 145 [r69];
  D55():
    deopt 184 [r104];
  L63():
    p22 = prom<V +>{
      readRDS = ldf readRDS;
      p21 = prom<V +>{
        pathsFile2 = ld pathsFile;
        pathsFile3 = force? pathsFile2;
        checkMissing(pathsFile3);
        return pathsFile3;
      };
      r52 = dyn readRDS(p21);
      return r52;
    };
    r54 = dyn sort1(p22);
    check L64() else D37();
  L71():
    all = ldf all in base;
    r62 = dyn all(r61);
    check L72() else D41();
  L76():
    st db = r69;
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L77() else L78();
  L95():
    goto L15(r104);
  D37():
    deopt 111 [c8, r54];
  D41():
    deopt 132 [c17, r62];
  L12(r71):
    st nm = r71;
    saveRDS = ldf saveRDS;
    check L84() else D47();
  L64():
    identical = ldf identical in base;
    r55 = dyn identical(r50, r54, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L65() else D38();
  L72():
    goto L10(c17, r62);
  L77():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L79() else L80();
  L78():
    r70 = dyn base3(<lang names(db)>);
    goto L12(r70);
  D38():
    deopt 120 [c8, r55];
  D47():
    deopt 159 [];
  L13(r73):
    as_character = ldf `as.character` in base;
    r75 = dyn as_character(r73);
    check L83() else D46();
  L65():
    goto L8(c8, r55);
  L79():
    db = ld db;
    check L81() else D44();
  L80():
    r72 = dyn base4(<sym db>);
    goto L13(r72);
  L84():
    p33 = prom<V +>{
      structure = ldf structure;
      p30 = prom<V +>{
        nm = ld nm;
        nm1 = force? nm;
        checkMissing(nm1);
        return nm1;
      };
      p32 = prom<V +>{
        sym5 = ldf nchar;
        base5 = ldf nchar in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r78):
        r82 = `+`(r78, 2);
        return r82;
      L1():
        file_path7 = ldf `file.path`;
        p31 = prom<V +>{
          mandir4 = ld mandir;
          mandir5 = force? mandir4;
          checkMissing(mandir5);
          return mandir5;
        };
        r80 = dyn file_path7(p31);
        nchar = ldf nchar in base;
        r81 = dyn nchar(r80, "chars", FALSE, NA_LGL);
        goto L0(r81);
      L2():
        r77 = dyn base5(<lang file.path(mandir)>);
        goto L0(r77);
      };
      r84 = dyn structure[, first](p30, p32);
      return r84;
    };
    p34 = prom<V +>{
      pathsFile4 = ld pathsFile;
      pathsFile5 = force? pathsFile4;
      checkMissing(pathsFile5);
      return pathsFile5;
    };
    r87 = dyn saveRDS(p33, p34);
    check L85() else D48();
  D44():
    deopt 151 [db];
  D46():
    deopt 156 [r75];
  D48():
    deopt 162 [r87];
  L81():
    db1 = force? db;
    checkMissing(db1);
    names = ldf names in base;
    r74 = dyn names(db1);
    check L82() else D45();
  L83():
    goto L12(r75);
  L85():
    sub = ldf sub;
    check L86() else D49();
  D45():
    deopt 154 [r74];
  D49():
    deopt 164 [];
  L82():
    goto L13(r74);
  L86():
    p36 = prom<V +>{
      basename1 = ldf basename;
      p35 = prom<V +>{
        nm2 = ld nm;
        nm3 = force? nm2;
        checkMissing(nm3);
        return nm3;
      };
      r89 = dyn basename1(p35);
      return r89;
    };
    r91 = dyn sub("\\.[Rr]d$", "", p36);
    check L87() else D50();
  D50():
    deopt 168 [r91];
  L87():
    l = ld db;
    names__ = ldf `names<-`;
    check L88() else D51();
  D51():
    deopt 170 [r91, l, r91];
  L88():
    r92 = dyn names__(l, NULL, r91);
    check L89() else D52();
  D52():
    deopt 172 [r91, r92];
  L89():
    st db = r92;
    makeLazyLoadDB = ldf makeLazyLoadDB;
    check L90() else D53();
  D53():
    deopt 175 [];
  L90():
    p37 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    p41 = prom<V +>{
      file_path8 = ldf `file.path`;
      p38 = prom<V +>{
        manOutDir8 = ld manOutDir;
        manOutDir9 = force? manOutDir8;
        checkMissing(manOutDir9);
        return manOutDir9;
      };
      p40 = prom<V +>{
        basename2 = ldf basename;
        p39 = prom<V +>{
          outDir5 = ld outDir;
          outDir6 = force? outDir5;
          checkMissing(outDir6);
          return outDir6;
        };
        r96 = dyn basename2(p39);
        return r96;
      };
      r98 = dyn file_path8(p38, p40);
      return r98;
    };
    r100 = dyn makeLazyLoadDB(p37, p41);
    check L91() else D54();
  D54():
    deopt 178 [r100];
  L91():
    goto L14();
  }
}