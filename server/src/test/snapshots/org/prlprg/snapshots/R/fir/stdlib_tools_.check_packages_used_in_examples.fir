fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.check_packages_used_in_examples` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r14:V, reg _read_description:cls, reg dfile:*, reg dfile1:V, reg p3:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg missing1:cls, reg r20:V, reg r21:V, reg c2:L, reg dir_exists:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r23:V, reg r24:V, reg c3:L, reg stop1:cls, reg gettextf:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg file_path_as_absolute:cls, reg dir7:*, reg dir8:V, reg p7:p(V +), reg r31:V, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p8:p(V +), reg r33:V, reg _read_description1:cls, reg dfile2:*, reg dfile3:V, reg p9:p(V +), reg r35:V, reg db:*, reg db1:V, reg c4:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r36:V, reg _createExdotR:cls, reg pkg_name:*, reg pkg_name1:V, reg p10:p(V +), reg dir11:*, reg dir12:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg missing2:cls, reg r41:V, reg r42:V, reg p12:p(V +), reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg file:*, reg file1:V, reg c5:V, reg c6:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg invisible:cls, reg r49:V, reg db4:*, reg db5:V, reg c7:L, reg db7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r55:V, reg r56:V, reg c8:L, reg c10:V, reg _notin_:cls, reg Sys_getlocale:cls, reg r57:V, reg p13:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg c11:cls, reg r61:V, reg p14:p(V +), reg r63:V, reg c12:L, reg c13:V, reg c15:L, reg iconv:cls, reg readLines:cls, reg file2:*, reg file3:V, reg p15:p(V +), reg r65:V, reg p16:p(V +), reg r67:V, reg textConnection:cls, reg lines:*, reg lines1:V, reg p17:p(V +), reg r69:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg on_exit:cls, reg r72:V, reg file4:*, reg file5:V, reg _check_packages_used_helper:cls, reg db8:*, reg db9:V, reg p18:p(V +), reg con:*, reg con1:V, reg p19:p(V +), reg r76:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L24() else L2();
  L22():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L23():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L6():
    db = ld db;
    check L56() else D20();
  L24():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D20():
    deopt 68 [db];
  L3(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L29() else L4();
  L7(r19):
    r21 = `!`(r19);
    c2 = `as.logical`(r21);
    if c2 then L42() else L8();
  L25():
    package1 = ld package;
    check L27() else D0();
  L26():
    r4 = dyn base1(<sym package>);
    goto L3(r4);
  L40():
    missing1 = ldf missing in base;
    r20 = dyn missing1(<sym dir>);
    goto L7(r20);
  L41():
    r18 = dyn base2(<sym dir>);
    goto L7(r18);
  L56():
    db1 = force? db;
    checkMissing(db1);
    c4 = `is.object`(db1);
    if c4 then L57() else L58(db1);
  D0():
    deopt 6 [package1];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L33() else D4();
  L8():
    goto L6();
  L11(dx1):
    st pkg_name = dx1;
    _createExdotR = ldf `.createExdotR`;
    check L60() else D21();
  L27():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L28() else D1();
  L29():
    stop = ldf stop;
    check L30() else D2();
  L42():
    dir_exists = ldf `dir.exists`;
    check L43() else D10();
  L57():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L59() else L58(dr);
  L58(db3):
    __ = ldf `[` in base;
    r36 = dyn __(db3, "Package");
    goto L11(r36);
  D1():
    deopt 9 [r6];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  D10():
    deopt 40 [];
  D21():
    deopt 75 [];
  L28():
    goto L3(r6);
  L30():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L31() else D3();
  L33():
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
    check L34() else D5();
  L43():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r23 = dyn dir_exists(p4);
    check L44() else D11();
  L59():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L60():
    p10 = prom<V +>{
      pkg_name = ld pkg_name;
      pkg_name1 = force? pkg_name;
      checkMissing(pkg_name1);
      return pkg_name1;
    };
    p11 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    p12 = prom<V +>{
      sym3 = ldf missing;
      base3 = ldf missing in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r40):
      r42 = `!`(r40);
      return r42;
    L1():
      missing2 = ldf missing in base;
      r41 = dyn missing2(<sym package>);
      goto L0(r41);
    L2():
      r39 = dyn base3(<sym package>);
      goto L0(r39);
    };
    r44 = dyn _createExdotR[, , silent, commentDonttest, installed](p10, p11, TRUE, FALSE, p12);
    check L61() else D22();
  D3():
    deopt 15 [r8];
  D5():
    deopt 22 [r12];
  D11():
    deopt 42 [r23];
  D22():
    deopt 84 [r44];
  L31():
    goto L5();
  L34():
    st dir = r12;
    file_path = ldf `file.path`;
    check L35() else D6();
  L44():
    r24 = `!`(r23);
    c3 = `as.logical`(r24);
    if c3 then L45() else L9();
  L61():
    st file = r44;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  D6():
    deopt 25 [];
  L9():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L49() else D14();
  L10():
    file_path1 = ldf `file.path`;
    check L51() else D16();
  L12(r46):
    c6 = `as.logical`(r46);
    if c6 then L65() else L13();
  L35():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r14 = dyn file_path(p2, "DESCRIPTION");
    check L36() else D7();
  L45():
    stop1 = ldf stop;
    check L46() else D12();
  L62():
    file = ld file;
    check L64() else D23();
  L63():
    r45 = dyn base4(<sym file>);
    goto L12(r45);
  D7():
    deopt 28 [r14];
  D12():
    deopt 45 [];
  D14():
    deopt 51 [];
  D16():
    deopt 56 [];
  D23():
    deopt 87 [file];
  L13():
    db4 = ld db;
    check L71() else D25();
  L36():
    st dfile = r14;
    _read_description = ldf `.read_description`;
    check L37() else D8();
  L46():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r26 = dyn gettextf("directory '%s' does not exist", p5);
      return r26;
    };
    r28 = dyn stop1[, domain](p6, NA_LGL);
    check L47() else D13();
  L49():
    p7 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r31 = dyn file_path_as_absolute(p7);
    check L50() else D15();
  L51():
    p8 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r33 = dyn file_path1(p8, "DESCRIPTION");
    check L52() else D17();
  L64():
    file1 = force? file;
    checkMissing(file1);
    c5 = `==`(file1, NULL);
    goto L12(c5);
  L65():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  D8():
    deopt 31 [];
  D13():
    deopt 49 [r28];
  D15():
    deopt 53 [r31];
  D17():
    deopt 59 [r33];
  D25():
    deopt 98 [db4];
  L14(r48):
    popenv;
    return r48;
  L37():
    p3 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r16 = dyn _read_description(p3);
    check L38() else D9();
  L47():
    goto L10();
  L50():
    st dir = r31;
    goto L10();
  L52():
    st dfile = r33;
    _read_description1 = ldf `.read_description`;
    check L53() else D18();
  L66():
    invisible = ldf invisible in base;
    r49 = dyn invisible(NULL);
    check L68() else D24();
  L67():
    r47 = dyn base5(NULL);
    goto L14(r47);
  L71():
    db5 = force? db4;
    checkMissing(db5);
    c7 = `is.object`(db5);
    if c7 then L72() else L73(db5);
  D9():
    deopt 33 [r16];
  D18():
    deopt 62 [];
  D24():
    deopt 94 [r49];
  L16(dx3):
    st enc = dx3;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L75() else L76();
  L38():
    st db = r16;
    goto L6();
  L53():
    p9 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r35 = dyn _read_description1(p9);
    check L54() else D19();
  L68():
    goto L14(r49);
  L72():
    dr2 = tryDispatchBuiltin.1("[", db5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L74() else L73(dr2);
  L73(db7):
    __1 = ldf `[` in base;
    r52 = dyn __1(db7, "Encoding");
    goto L16(r52);
  D19():
    deopt 64 [r35];
  L17(r54):
    r56 = `!`(r54);
    c8 = `as.logical`(r56);
    if c8 then L79() else L18(c8);
  L54():
    st db = r35;
    goto L6();
  L74():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L75():
    enc = ld enc;
    check L77() else D26();
  L76():
    r53 = dyn base6(<sym enc>);
    goto L17(r53);
  D26():
    deopt 106 [enc];
  L18(c10):
    c15 = `as.logical`(c10);
    if c15 then L83() else L19();
  L77():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r55 = dyn is_na(enc1);
    check L78() else D27();
  L79():
    _notin_ = ldf `%notin%`;
    check L80() else D28();
  D27():
    deopt 109 [r55];
  D28():
    deopt 112 [c8];
  L19():
    file4 = ld file;
    check L91() else D34();
  L21():
    _check_packages_used_helper = ldf `.check_packages_used_helper`;
    check L92() else D35();
  L78():
    goto L17(r55);
  L80():
    p13 = prom<V +>{
      Sys_getlocale = ldf `Sys.getlocale`;
      r57 = dyn Sys_getlocale("LC_CTYPE");
      return r57;
    };
    p14 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      c11 = ldf c in base;
      r61 = dyn c11("C", "POSIX");
      goto L0(r61);
    L2():
      r59 = dyn base7("C", "POSIX");
      goto L0(r59);
    };
    r63 = dyn _notin_(p13, p14);
    check L81() else D29();
  L83():
    iconv = ldf iconv;
    check L84() else D30();
  D29():
    deopt 115 [c8, r63];
  D30():
    deopt 118 [];
  D34():
    deopt 136 [file4];
  D35():
    deopt 140 [];
  L81():
    c12 = `as.logical`(r63);
    c13 = `&&`(c8, c12);
    goto L18(c13);
  L84():
    p16 = prom<V +>{
      readLines = ldf readLines;
      p15 = prom<V +>{
        file2 = ld file;
        file3 = force? file2;
        checkMissing(file3);
        return file3;
      };
      r65 = dyn readLines[, warn](p15, FALSE);
      return r65;
    };
    r67 = dyn iconv[, from, to, sub](p16, "UTF-8", "", "byte");
    check L85() else D31();
  L91():
    file5 = force? file4;
    checkMissing(file5);
    st con = file5;
    goto L21();
  L92():
    p18 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      return db9;
    };
    p19 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r76 = dyn _check_packages_used_helper(p18, p19);
    check L93() else D36();
  D31():
    deopt 126 [r67];
  D36():
    deopt 143 [r76];
  L85():
    st lines = r67;
    textConnection = ldf textConnection;
    check L86() else D32();
  L93():
    popenv;
    return r76;
  D32():
    deopt 129 [];
  L86():
    p17 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r69 = dyn textConnection(p17);
    check L87() else D33();
  D33():
    deopt 131 [r69];
  L87():
    st con = r69;
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L20(r71):
    goto L21();
  L88():
    on_exit = ldf `on.exit` in base;
    r72 = dyn on_exit(<lang close(con)>, TRUE);
    goto L20(r72);
  L89():
    r70 = dyn base8[, add](<lang close(con)>, TRUE);
    goto L20(r70);
  }
}