fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3777555817;
    st `.convert_package_rdfiles` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3777555817(package, dir, `lib.loc`, `...`, stages, xLinks) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg ddd:dots, reg stages:*, reg xLinks:*) -+> V { var package:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `...`:dots?, var stages:*, reg stages_isMissing:L, reg stages_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var xLinks:*, reg xLinks_isMissing:L, reg xLinks_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), reg r6:cls, reg r7:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing:cls, reg r10:V, reg r11:V, reg c1:L, reg c3:V, reg isTRUE:cls, reg isPkgTarball:cls, reg package1:*, reg package2:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg c4:L, reg c5:V, reg c7:L, reg isURL:cls, reg package3:*, reg package4:V, reg p4:p(V +), reg r17:V, reg c8:L, reg tempfile:cls, reg r18:V, reg dir_create:cls, reg destdir:*, reg destdir1:V, reg p5:p(V +), reg r20:V, reg r21:V, reg c9:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg destdir2:*, reg destdir3:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg r27:V, reg __:cls, reg r29:V, reg r30:cls, reg package5:*, reg package6:V, reg p9:p(V +), reg file_path:cls, reg destdir4:*, reg destdir5:V, reg p10:p(V +), reg basename:cls, reg package7:*, reg package8:V, reg p11:p(V +), reg r34:V, reg p12:p(V +), reg r36:V, reg p13:p(V +), reg r38:V, reg file_path1:cls, reg destdir6:*, reg destdir7:V, reg p14:p(V +), reg basename1:cls, reg package9:*, reg package10:V, reg p15:p(V +), reg r41:V, reg p16:p(V +), reg r43:V, reg tempfile1:cls, reg r45:V, reg dir_create1:cls, reg tmpDir:*, reg tmpDir1:V, reg p17:p(V +), reg r47:V, reg r48:V, reg c10:L, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg tmpDir2:*, reg tmpDir3:V, reg p18:p(V +), reg r50:V, reg p19:p(V +), reg r52:V, reg p20:p(V +), reg r54:V, reg __1:cls, reg r56:V, reg r57:cls, reg package11:*, reg package12:V, reg p21:p(V +), reg tmpDir4:*, reg tmpDir5:V, reg p22:p(V +), reg r60:V, reg list_dirs:cls, reg tmpDir6:*, reg tmpDir7:V, reg p23:p(V +), reg r62:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r63:V, reg r64:V, reg pkgdir:*, reg pkgdir1:V, reg length:cls, reg r65:V, reg r66:V, reg c11:L, reg stop2:cls, reg gettextf2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r67:V, reg r68:V, reg pkgdir2:*, reg pkgdir3:V, reg length1:cls, reg r69:V, reg p24:p(V +), reg r71:V, reg p25:p(V +), reg r73:V, reg Rd_db:cls, reg pkgdir4:*, reg pkgdir5:V, reg p26:p(V +), reg stages1:*, reg stages2:V, reg p27:p(V +), reg r77:V, reg r78:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r79:V, reg r80:V, reg dir1:*, reg dir2:V, reg c12:V, reg c13:L, reg find_package:cls, reg package13:*, reg package14:V, reg p28:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p29:p(V +), reg r83:V, reg r84:V, reg dir3:*, reg dir4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r85:V, reg r86:V, reg dir5:*, reg dir6:V, reg c14:V, reg c15:L, reg Rd_db1:cls, reg package15:*, reg package16:V, reg p30:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p31:p(V +), reg stages3:*, reg stages4:V, reg p32:p(V +), reg r90:V, reg Rd_db2:cls, reg dir7:*, reg dir8:V, reg p33:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p34:p(V +), reg stages5:*, reg stages6:V, reg p35:p(V +), reg r94:V, reg _build_links_index:cls, reg Rd_contents:cls, reg db:*, reg db1:V, reg p36:p(V +), reg r96:V, reg p37:p(V +), reg basename2:cls, reg pkgdir6:*, reg pkgdir7:V, reg p38:p(V +), reg r99:V, reg p39:p(V +), reg r101:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r102:V, reg r103:V, reg Links0:*, reg Links1:V, reg findHTMLlinks:cls, reg pkgdir8:*, reg pkgdir9:V, reg p40:p(V +), reg r105:V, reg c16:cls, reg r106:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r107:V, reg r108:V, reg xLinks1:*, reg xLinks2:V, reg length2:cls, reg r109:V, reg c17:L, reg xLinks3:*, reg xLinks4:V, reg xLinks5:V, reg findHTMLlinks1:cls, reg r110:V, reg r111:cls, reg structure:cls, reg lapply:cls, reg db2:*, reg db3:V, reg p41:p(V +), reg rd2lines:*, reg rd2lines1:V, reg p42:p(V +), reg ddd1:dots?, reg r114:V, reg p43:p(V +), reg file_path2:cls, reg pkgdir10:*, reg pkgdir11:V, reg p44:p(V +), reg r117:V, reg p45:p(V +), reg r119:V |
    mkenv;
    st package = package;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(NULL) else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    st `...` = ddd;
    stages_isMissing = missing.0(stages);
    if stages_isMissing then L2() else L3(stages);
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
      r2 = dyn c("build", "later", "install", "render");
      goto L0(r2);
    L2():
      r = dyn base("build", "later", "install", "render");
      goto L0(r);
    };
    goto L3(p);
  L3(stages_orDefault):
    st stages = stages_orDefault;
    xLinks_isMissing = missing.0(xLinks);
    if xLinks_isMissing then L4() else L5(xLinks);
  L4():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character(0.0);
      return r4;
    };
    goto L5(p1);
  L5(xLinks_orDefault):
    st xLinks = xLinks_orDefault;
    r6 = clos inner2501545716;
    st isPkgTarball = r6;
    r7 = clos inner2501545716;
    st isURL = r7;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L6(r9):
    r11 = `!`(r9);
    c1 = `as.logical`(r11);
    if c1 then L30() else L7(c1);
  L28():
    missing = ldf missing in base;
    r10 = dyn missing(<sym package>);
    goto L6(r10);
  L29():
    r8 = dyn base1(<sym package>);
    goto L6(r8);
  L7(c3):
    c7 = `as.logical`(c3);
    if c7 then L34() else L8();
  L30():
    isTRUE = ldf isTRUE;
    check L31() else D0();
  D0():
    deopt 11 [c1];
  L8():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L18(r78):
    st db = r78;
    _build_links_index = ldf `.build_links_index`;
    check L93() else D41();
  L31():
    p3 = prom<V +>{
      isPkgTarball = ldf isPkgTarball;
      p2 = prom<V +>{
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        return package2;
      };
      r13 = dyn isPkgTarball(p2);
      return r13;
    };
    r15 = dyn isTRUE(p3);
    check L32() else D1();
  L34():
    isURL = ldf isURL;
    check L35() else D2();
  D1():
    deopt 13 [c1, r15];
  D2():
    deopt 16 [];
  D41():
    deopt 141 [];
  L19(r80):
    c13 = `as.logical`(r80);
    if c13 then L79() else L20();
  L32():
    c4 = `as.logical`(r15);
    c5 = `&&`(c1, c4);
    goto L7(c5);
  L35():
    p4 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r17 = dyn isURL(p4);
    check L36() else D3();
  L76():
    dir1 = ld dir;
    check L78() else D32();
  L77():
    r79 = dyn base4(<sym dir>);
    goto L19(r79);
  L93():
    p37 = prom<V +>{
      Rd_contents = ldf Rd_contents;
      p36 = prom<V +>{
        db = ld db;
        db1 = force? db;
        checkMissing(db1);
        return db1;
      };
      r96 = dyn Rd_contents(p36);
      return r96;
    };
    p39 = prom<V +>{
      basename2 = ldf basename;
      p38 = prom<V +>{
        pkgdir6 = ld pkgdir;
        pkgdir7 = force? pkgdir6;
        checkMissing(pkgdir7);
        return pkgdir7;
      };
      r99 = dyn basename2(p38);
      return r99;
    };
    r101 = dyn _build_links_index(p37, p39);
    check L94() else D42();
  D3():
    deopt 18 [r17];
  D32():
    deopt 108 [dir1];
  D42():
    deopt 144 [r101];
  L20():
    dir3 = ld dir;
    check L83() else D35();
  L21(r84):
    st pkgdir = r84;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L84() else L85();
  L36():
    c8 = `as.logical`(r17);
    if c8 then L37() else L9();
  L78():
    dir2 = force? dir1;
    checkMissing(dir2);
    c12 = `==`(dir2, NULL);
    goto L19(c12);
  L79():
    find_package = ldf `find.package`;
    check L80() else D33();
  L94():
    st Links0 = r101;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  D33():
    deopt 112 [];
  D35():
    deopt 116 [dir3];
  L9():
    goto L12();
  L12():
    tempfile1 = ldf tempfile;
    check L52() else D15();
  L22(r86):
    c15 = `as.logical`(r86);
    if c15 then L87() else L23();
  L24(r103):
    st Links = r103;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L101() else L102();
  L37():
    tempfile = ldf tempfile;
    check L38() else D4();
  L80():
    p28 = prom<V +>{
      package13 = ld package;
      package14 = force? package13;
      checkMissing(package14);
      return package14;
    };
    p29 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r83 = dyn find_package(p28, p29);
    check L81() else D34();
  L83():
    dir4 = force? dir3;
    checkMissing(dir4);
    goto L21(dir4);
  L84():
    dir5 = ld dir;
    check L86() else D36();
  L85():
    r85 = dyn base5(<sym dir>);
    goto L22(r85);
  L95():
    Links0 = ld Links0;
    check L97() else D43();
  L96():
    r102 = dyn base6(<sym Links0>, <lang findHTMLlinks(pkgdir, level=1.0)>);
    goto L24(r102);
  D4():
    deopt 20 [];
  D15():
    deopt 54 [];
  D34():
    deopt 115 [r83];
  D36():
    deopt 120 [dir5];
  D43():
    deopt 148 [Links0];
  L23():
    Rd_db2 = ldf Rd_db;
    check L91() else D39();
  L25(r108):
    c17 = `as.logical`(r108);
    if c17 then L105() else L26();
  L38():
    r18 = dyn tempfile("dir");
    check L39() else D5();
  L52():
    r45 = dyn tempfile1("pkg");
    check L53() else D16();
  L81():
    goto L21(r83);
  L86():
    dir6 = force? dir5;
    checkMissing(dir6);
    c14 = `==`(dir6, NULL);
    goto L22(c14);
  L87():
    Rd_db1 = ldf Rd_db;
    check L88() else D37();
  L97():
    Links1 = force? Links0;
    checkMissing(Links1);
    findHTMLlinks = ldf findHTMLlinks;
    check L98() else D44();
  L101():
    xLinks1 = ld xLinks;
    check L103() else D47();
  L102():
    r107 = dyn base7(<sym xLinks>);
    goto L25(r107);
  D5():
    deopt 22 [r18];
  D16():
    deopt 56 [r45];
  D37():
    deopt 124 [];
  D39():
    deopt 132 [];
  D44():
    deopt 151 [];
  D47():
    deopt 161 [xLinks1];
  L26():
    findHTMLlinks1 = ldf findHTMLlinks;
    check L108() else D50();
  L27(xLinks5):
    st Links2 = xLinks5;
    r111 = clos inner3640129892;
    st rd2lines = r111;
    structure = ldf structure;
    check L110() else D52();
  L39():
    st destdir = r18;
    dir_create = ldf `dir.create`;
    check L40() else D6();
  L53():
    st tmpDir = r45;
    dir_create1 = ldf `dir.create`;
    check L54() else D17();
  L88():
    p30 = prom<V +>{
      package15 = ld package;
      package16 = force? package15;
      checkMissing(package16);
      return package16;
    };
    p31 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p32 = prom<V +>{
      stages3 = ld stages;
      stages4 = force? stages3;
      checkMissing(stages4);
      return stages4;
    };
    r90 = dyn Rd_db1[, , , stages](p30, <missing>, p31, p32);
    check L89() else D38();
  L91():
    p33 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p34 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    p35 = prom<V +>{
      stages5 = ld stages;
      stages6 = force? stages5;
      checkMissing(stages6);
      return stages6;
    };
    r94 = dyn Rd_db2[, , , stages](<missing>, p33, p34, p35);
    check L92() else D40();
  L98():
    p40 = prom<V +>{
      pkgdir8 = ld pkgdir;
      pkgdir9 = force? pkgdir8;
      checkMissing(pkgdir9);
      return pkgdir9;
    };
    r105 = dyn findHTMLlinks[, level](p40, 1.0);
    check L99() else D45();
  L103():
    xLinks2 = force? xLinks1;
    checkMissing(xLinks2);
    length2 = ldf length in base;
    r109 = dyn length2(xLinks2);
    check L104() else D48();
  L105():
    xLinks3 = ld xLinks;
    check L106() else D49();
  D6():
    deopt 25 [];
  D17():
    deopt 59 [];
  D38():
    deopt 130 [r90];
  D40():
    deopt 138 [r94];
  D45():
    deopt 155 [r105];
  D48():
    deopt 164 [r109];
  D49():
    deopt 165 [xLinks3];
  D50():
    deopt 168 [];
  D52():
    deopt 177 [];
  L40():
    p5 = prom<V +>{
      destdir = ld destdir;
      destdir1 = force? destdir;
      checkMissing(destdir1);
      return destdir1;
    };
    r20 = dyn dir_create(p5);
    check L41() else D7();
  L54():
    p17 = prom<V +>{
      tmpDir = ld tmpDir;
      tmpDir1 = force? tmpDir;
      checkMissing(tmpDir1);
      return tmpDir1;
    };
    r47 = dyn dir_create1(p17);
    check L55() else D18();
  L89():
    goto L18(r90);
  L92():
    goto L18(r94);
  L99():
    c16 = ldf c in base;
    r106 = dyn c16(Links1, r105);
    check L100() else D46();
  L104():
    goto L25(r109);
  L106():
    xLinks4 = force? xLinks3;
    checkMissing(xLinks4);
    goto L27(xLinks4);
  L108():
    r110 = dyn findHTMLlinks1[level](2.0);
    check L109() else D51();
  L110():
    p43 = prom<V +>{
      lapply = ldf lapply;
      p41 = prom<V +>{
        db2 = ld db;
        db3 = force? db2;
        checkMissing(db3);
        return db3;
      };
      p42 = prom<V +>{
        rd2lines = ld rd2lines;
        rd2lines1 = force? rd2lines;
        checkMissing(rd2lines1);
        return rd2lines1;
      };
      ddd1 = ld `...`;
      r114 = dyn lapply[, , standalone, `...`](p41, p42, FALSE, ddd1);
      return r114;
    };
    p45 = prom<V +>{
      file_path2 = ldf `file.path`;
      p44 = prom<V +>{
        pkgdir10 = ld pkgdir;
        pkgdir11 = force? pkgdir10;
        checkMissing(pkgdir11);
        return pkgdir11;
      };
      r117 = dyn file_path2(p44, "DESCRIPTION");
      return r117;
    };
    r119 = dyn structure[, descfile](p43, p45);
    check L111() else D53();
  D7():
    deopt 27 [r20];
  D18():
    deopt 61 [r47];
  D46():
    deopt 157 [r106];
  D51():
    deopt 171 [r110];
  D53():
    deopt 181 [r119];
  L41():
    r21 = `!`(r20);
    c9 = `as.logical`(r21);
    if c9 then L42() else L10();
  L55():
    r48 = `!`(r47);
    c10 = `as.logical`(r48);
    if c10 then L56() else L13();
  L100():
    goto L24(r106);
  L109():
    goto L27(r110);
  L111():
    popenv;
    return r119;
  L10():
    goto L11();
  L11():
    __ = ldf `::`;
    check L46() else D10();
  L13():
    goto L14();
  L14():
    __1 = ldf `::`;
    check L60() else D21();
  L42():
    stop = ldf stop;
    check L43() else D8();
  L56():
    stop1 = ldf stop;
    check L57() else D19();
  D8():
    deopt 30 [];
  D10():
    deopt 36 [];
  D19():
    deopt 64 [];
  D21():
    deopt 70 [];
  L43():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          destdir2 = ld destdir;
          destdir3 = force? destdir2;
          checkMissing(destdir3);
          return destdir3;
        };
        r23 = dyn sQuote(p6);
        return r23;
      };
      r25 = dyn gettextf("unable to create temporary directory %s", p7);
      return r25;
    };
    r27 = dyn stop(p8);
    check L44() else D9();
  L46():
    r29 = dyn __("utils", "download.file");
    check L47() else D11();
  L57():
    p20 = prom<V +>{
      gettextf1 = ldf gettextf;
      p19 = prom<V +>{
        sQuote1 = ldf sQuote;
        p18 = prom<V +>{
          tmpDir2 = ld tmpDir;
          tmpDir3 = force? tmpDir2;
          checkMissing(tmpDir3);
          return tmpDir3;
        };
        r50 = dyn sQuote1(p18);
        return r50;
      };
      r52 = dyn gettextf1("unable to create temporary directory %s", p19);
      return r52;
    };
    r54 = dyn stop1(p20);
    check L58() else D20();
  L60():
    r56 = dyn __1("utils", "untar");
    check L61() else D22();
  D9():
    deopt 32 [r27];
  D11():
    deopt 39 [r29];
  D20():
    deopt 66 [r54];
  D22():
    deopt 73 [r56];
  L44():
    goto L11();
  L47():
    checkFun.0(r29);
    r30 = r29 as cls;
    p9 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p13 = prom<V +>{
      file_path = ldf `file.path`;
      p10 = prom<V +>{
        destdir4 = ld destdir;
        destdir5 = force? destdir4;
        checkMissing(destdir5);
        return destdir5;
      };
      p12 = prom<V +>{
        basename = ldf basename;
        p11 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          return package8;
        };
        r34 = dyn basename(p11);
        return r34;
      };
      r36 = dyn file_path(p10, p12);
      return r36;
    };
    r38 = dyn r30[, destfile](p9, p13);
    check L48() else D12();
  L58():
    goto L14();
  L61():
    checkFun.0(r56);
    r57 = r56 as cls;
    p21 = prom<V +>{
      package11 = ld package;
      package12 = force? package11;
      checkMissing(package12);
      return package12;
    };
    p22 = prom<V +>{
      tmpDir4 = ld tmpDir;
      tmpDir5 = force? tmpDir4;
      checkMissing(tmpDir5);
      return tmpDir5;
    };
    r60 = dyn r57[, exdir](p21, p22);
    check L62() else D23();
  D12():
    deopt 44 [r38];
  D23():
    deopt 78 [r60];
  L48():
    file_path1 = ldf `file.path`;
    check L49() else D13();
  L62():
    list_dirs = ldf `list.dirs`;
    check L63() else D24();
  D13():
    deopt 46 [];
  D24():
    deopt 80 [];
  L49():
    p14 = prom<V +>{
      destdir6 = ld destdir;
      destdir7 = force? destdir6;
      checkMissing(destdir7);
      return destdir7;
    };
    p16 = prom<V +>{
      basename1 = ldf basename;
      p15 = prom<V +>{
        package9 = ld package;
        package10 = force? package9;
        checkMissing(package10);
        return package10;
      };
      r41 = dyn basename1(p15);
      return r41;
    };
    r43 = dyn file_path1(p14, p16);
    check L50() else D14();
  L63():
    p23 = prom<V +>{
      tmpDir6 = ld tmpDir;
      tmpDir7 = force? tmpDir6;
      checkMissing(tmpDir7);
      return tmpDir7;
    };
    r62 = dyn list_dirs[, recursive](p23, FALSE);
    check L64() else D25();
  D14():
    deopt 49 [r43];
  D25():
    deopt 84 [r62];
  L50():
    st package = r43;
    goto L12();
  L64():
    st pkgdir = r62;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L15(r64):
    r66 = `!=`(r64, 1.0);
    c11 = `as.logical`(r66);
    if c11 then L69() else L16();
  L65():
    pkgdir = ld pkgdir;
    check L67() else D26();
  L66():
    r63 = dyn base2(<sym pkgdir>);
    goto L15(r63);
  D26():
    deopt 88 [pkgdir];
  L16():
    goto L17();
  L17():
    Rd_db = ldf Rd_db;
    check L73() else D30();
  L67():
    pkgdir1 = force? pkgdir;
    checkMissing(pkgdir1);
    length = ldf length in base;
    r65 = dyn length(pkgdir1);
    check L68() else D27();
  L69():
    stop2 = ldf stop;
    check L70() else D28();
  D27():
    deopt 91 [r65];
  D28():
    deopt 95 [];
  D30():
    deopt 101 [];
  L68():
    goto L15(r65);
  L70():
    p25 = prom<V +>{
      gettextf2 = ldf gettextf;
      p24 = prom<V +>{
        sym3 = ldf length;
        base3 = ldf length in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r68):
        return r68;
      L1():
        pkgdir2 = ld pkgdir;
        pkgdir3 = force? pkgdir2;
        checkMissing(pkgdir3);
        length1 = ldf length in base;
        r69 = dyn length1(pkgdir3);
        goto L0(r69);
      L2():
        r67 = dyn base3(<sym pkgdir>);
        goto L0(r67);
      };
      r71 = dyn gettextf2("expected one package directory, found %d.", p24);
      return r71;
    };
    r73 = dyn stop2(p25);
    check L71() else D29();
  L73():
    p26 = prom<V +>{
      pkgdir4 = ld pkgdir;
      pkgdir5 = force? pkgdir4;
      checkMissing(pkgdir5);
      return pkgdir5;
    };
    p27 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    r77 = dyn Rd_db[dir, stages](p26, p27);
    check L74() else D31();
  D29():
    deopt 97 [r73];
  D31():
    deopt 106 [r77];
  L71():
    goto L17();
  L74():
    goto L18(r77);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg endsWith:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg c8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c11:L, reg r7:V, reg strsplit:cls, reg basename:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg c12:L, reg c14:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg c16:L, reg dx1:V, reg __:cls, reg r14:V, reg length1:cls, reg r15:V, reg r16:V, reg c17:L, reg c18:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L9() else L1(c);
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    c6 = `as.logical`(c2);
    if c6 then L13() else L2(c6);
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L8() else D1();
  L9():
    endsWith = ldf endsWith;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [c];
  L2(c8):
    popenv;
    return c8;
  L8():
    goto L0(r2);
  L10():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn endsWith(p, "tar.gz");
    check L11() else D3();
  L13():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D3():
    deopt 12 [c, r5];
  L3(c11, r7):
    r16 = `==`(r7, 2);
    c17 = `as.logical`(r16);
    c18 = `&&`(c11, c17);
    goto L2(c18);
  L11():
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L1(c4);
  L14():
    strsplit = ldf strsplit;
    check L16() else D4();
  L15():
    r6 = dyn base1(<lang `[[`(strsplit(basename(x), "_", fixed=TRUE), 1.0)>);
    goto L3(c6, r6);
  D4():
    deopt 17 [c6];
  L16():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r9 = dyn basename(p1);
      return r9;
    };
    r11 = dyn strsplit[, , fixed](p2, "_", TRUE);
    check L17() else D5();
  D5():
    deopt 22 [c6, r11];
  L17():
    c12 = `is.object`(r11);
    if c12 then L18() else L19(c6, r11);
  L4(c16, dx1):
    length1 = ldf length in base;
    r15 = dyn length1(dx1);
    check L21() else D6();
  L18():
    dr = tryDispatchBuiltin.1("[[", r11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(c6, dr);
  L19(c14, r13):
    __ = ldf `[[` in base;
    r14 = dyn __(r13, 1.0);
    goto L4(c14, r14);
  D6():
    deopt 27 [c16, r15];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c6, dx);
  L21():
    goto L3(c16, r15);
  }
}
fun inner3640129892(Rd, `...`) {
  (reg Rd:*, reg ddd:dots) -+> V { var Rd:*, var `...`:dots?, reg __:cls, reg r:V, reg r1:cls, reg Rd2HTML:cls, reg Rd1:*, reg Rd2:V, reg p:p(V +), reg pkgdir:*, reg pkgdir1:V, reg p1:p(V +), reg Links:*, reg Links1:V, reg p2:p(V +), reg Links2:*, reg Links3:V, reg p3:p(V +), reg ddd1:dots?, reg r6:V, reg p4:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg outlines:*, reg outlines1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg h:*, reg h1:V, reg attr:cls, reg r13:V, reg list:cls, reg r14:V |
    mkenv;
    st Rd = Rd;
    st `...` = ddd;
    __ = ldf `::`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn __("utils", "capture.output");
    check L3() else D1();
  D1():
    deopt 4 [r];
  L3():
    checkFun.0(r);
    r1 = r as cls;
    p4 = prom<V +>{
      Rd2HTML = ldf Rd2HTML;
      p = prom<V +>{
        Rd1 = ld Rd;
        Rd2 = force? Rd1;
        checkMissing(Rd2);
        return Rd2;
      };
      p1 = prom<V +>{
        pkgdir = ld pkgdir;
        pkgdir1 = force? pkgdir;
        checkMissing(pkgdir1);
        return pkgdir1;
      };
      p2 = prom<V +>{
        Links = ld Links;
        Links1 = force? Links;
        checkMissing(Links1);
        return Links1;
      };
      p3 = prom<V +>{
        Links2 = ld Links2;
        Links3 = force? Links2;
        checkMissing(Links3);
        return Links3;
      };
      ddd1 = ld `...`;
      r6 = dyn Rd2HTML[, out, package, Links, Links2, `...`](p, "", p1, p2, p3, ddd1);
      st h = r6;
      invisible.0();
      return r6;
    };
    r8 = dyn r1(p4);
    check L4() else D2();
  D2():
    deopt 7 [r8];
  L4():
    st outlines = r8;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r10):
    popenv;
    return r10;
  L5():
    outlines = ld outlines;
    check L7() else D3();
  L6():
    r9 = dyn base[outlines, info](<sym outlines>, <lang attr(h, "info")>);
    goto L0(r9);
  D3():
    deopt 11 [outlines];
  L7():
    outlines1 = force? outlines;
    checkMissing(outlines1);
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r12):
    list = ldf list in base;
    r14 = dyn list(outlines1, r12);
    check L12() else D6();
  L8():
    h = ld h;
    check L10() else D4();
  L9():
    r11 = dyn base1(<sym h>, "info");
    goto L1(r11);
  D4():
    deopt 16 [h];
  D6():
    deopt 23 [r14];
  L10():
    h1 = force? h;
    checkMissing(h1);
    attr = ldf attr in base;
    r13 = dyn attr(h1, "info");
    check L11() else D5();
  L12():
    goto L0(r14);
  D5():
    deopt 20 [r13];
  L11():
    goto L1(r13);
  }
}