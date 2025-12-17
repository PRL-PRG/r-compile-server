fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1456378811;
    st `.createExdotR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1456378811(pkg, pkgdir, silent, use_gct, addTiming, `...`, commentDontrun, commentDonttest, installed) {
  (reg pkg:*, reg pkgdir:*, reg silent:*, reg use_gct:*, reg addTiming:*, reg ddd:dots, reg commentDontrun:*, reg commentDonttest:*, reg installed:*) -+> V { var pkg:*, var pkgdir:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var use_gct:*, reg use_gct_isMissing:L, reg use_gct_orDefault:*, var addTiming:*, reg addTiming_isMissing:L, reg addTiming_orDefault:*, var `...`:dots?, var commentDontrun:*, reg commentDontrun_isMissing:L, reg commentDontrun_orDefault:*, var commentDonttest:*, reg commentDonttest_isMissing:L, reg commentDonttest_orDefault:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg paste0:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V, reg installed1:*, reg installed2:V, reg c:L, reg Rd_db:cls, reg basename:cls, reg pkgdir1:*, reg pkgdir2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg dirname:cls, reg pkgdir3:*, reg pkgdir4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg r9:V, reg Rd_db1:cls, reg pkgdir5:*, reg pkgdir6:V, reg p5:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg db:*, reg db1:V, reg length:cls, reg r14:V, reg r15:V, reg c1:L, reg message:cls, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg invisible:cls, reg r19:V, reg silent1:*, reg silent2:V, reg r22:V, reg c2:L, reg message1:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg db2:*, reg db3:V, reg names:cls, reg r27:V, reg pkg3:*, reg pkg4:V, reg r28:V, reg c3:L, reg files:*, reg files1:V, reg c4:L, reg files3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grepl:cls, reg files4:*, reg files5:V, reg p6:p(V +), reg r30:V, reg r31:V, reg __:cls, reg r32:V, reg tempfile:cls, reg r33:V, reg dir_create:cls, reg filedir:*, reg filedir1:V, reg p7:p(V +), reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg on_exit:cls, reg r38:V, reg files6:*, reg files7:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg sub:cls, reg basename1:cls, reg f:*, reg f1:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg Rd2ex:cls, reg db4:*, reg db5:V, reg c6:L, reg db7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg f2:*, reg f3:V, reg __1:cls, reg r43:V, reg p10:p(V +), reg file_path:cls, reg filedir2:*, reg filedir3:V, reg p11:p(V +), reg paste1:cls, reg nm:*, reg nm1:V, reg p12:p(V +), reg r47:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg commentDontrun1:*, reg commentDontrun2:V, reg p15:p(V +), reg commentDonttest1:*, reg commentDonttest2:V, reg p16:p(V +), reg r53:V, reg cnt:*, reg cnt1:V, reg r54:V, reg silent3:*, reg silent4:V, reg r55:V, reg c7:L, reg i6:I, reg c9:V, reg cnt2:*, reg cnt3:V, reg __2:cls, reg r56:V, reg r57:V, reg c10:L, reg c11:V, reg c13:L, reg message2:cls, reg r58:V, reg i10:I, reg silent5:*, reg silent6:V, reg r60:V, reg c14:L, reg message3:cls, reg r61:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r63:V, reg r64:V, reg Sys_glob:cls, reg file_path1:cls, reg filedir4:*, reg filedir5:V, reg p17:p(V +), reg r66:V, reg p18:p(V +), reg r68:V, reg length1:cls, reg r69:V, reg nof:*, reg nof1:V, reg r70:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg r72:V, reg invisible1:cls, reg r73:V, reg massageExamples:cls, reg pkg5:*, reg pkg6:V, reg p19:p(V +), reg filedir6:*, reg filedir7:V, reg p20:p(V +), reg Rfile:*, reg Rfile1:V, reg p21:p(V +), reg use_gct1:*, reg use_gct2:V, reg p22:p(V +), reg addTiming1:*, reg addTiming2:V, reg p23:p(V +), reg commentDonttest3:*, reg commentDonttest4:V, reg p24:p(V +), reg ddd1:dots?, reg r82:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r83:V, reg r84:V, reg Rfile2:*, reg Rfile3:V, reg invisible2:cls, reg r85:V |
    mkenv;
    st pkg = pkg;
    st pkgdir = pkgdir;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L0(FALSE) else L0(silent);
  L0(silent_orDefault):
    st silent = silent_orDefault;
    use_gct_isMissing = missing.0(use_gct);
    if use_gct_isMissing then L1(FALSE) else L1(use_gct);
  L1(use_gct_orDefault):
    st use_gct = use_gct_orDefault;
    addTiming_isMissing = missing.0(addTiming);
    if addTiming_isMissing then L2(FALSE) else L2(addTiming);
  L2(addTiming_orDefault):
    st addTiming = addTiming_orDefault;
    st `...` = ddd;
    commentDontrun_isMissing = missing.0(commentDontrun);
    if commentDontrun_isMissing then L3(TRUE) else L3(commentDontrun);
  L3(commentDontrun_orDefault):
    st commentDontrun = commentDontrun_orDefault;
    commentDonttest_isMissing = missing.0(commentDonttest);
    if commentDonttest_isMissing then L4(TRUE) else L4(commentDonttest);
  L4(commentDonttest_orDefault):
    st commentDonttest = commentDonttest_orDefault;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L5(TRUE) else L5(installed);
  L5(installed_orDefault):
    st installed = installed_orDefault;
    paste0 = ldf paste0;
    check L31() else D0();
  D0():
    deopt 1 [];
  L31():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r1 = dyn paste0(p, "-Ex.R");
    check L32() else D1();
  D1():
    deopt 4 [r1];
  L32():
    st Rfile = r1;
    installed1 = ld installed;
    check L33() else D2();
  D2():
    deopt 6 [installed1];
  L33():
    installed2 = force? installed1;
    checkMissing(installed2);
    c = `as.logical`(installed2);
    if c then L34() else L6();
  L6():
    Rd_db1 = ldf Rd_db;
    check L38() else D5();
  L7(r9):
    st db = r9;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L34():
    Rd_db = ldf Rd_db;
    check L35() else D3();
  D3():
    deopt 9 [];
  D5():
    deopt 15 [];
  L8(r13):
    r15 = `!`(r13);
    c1 = `as.logical`(r15);
    if c1 then L44() else L9();
  L35():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        pkgdir1 = ld pkgdir;
        pkgdir2 = force? pkgdir1;
        checkMissing(pkgdir2);
        return pkgdir2;
      };
      r3 = dyn basename(p1);
      return r3;
    };
    p4 = prom<V +>{
      dirname = ldf dirname;
      p3 = prom<V +>{
        pkgdir3 = ld pkgdir;
        pkgdir4 = force? pkgdir3;
        checkMissing(pkgdir4);
        return pkgdir4;
      };
      r6 = dyn dirname(p3);
      return r6;
    };
    r8 = dyn Rd_db[, `lib.loc`](p2, p4);
    check L36() else D4();
  L38():
    p5 = prom<V +>{
      pkgdir5 = ld pkgdir;
      pkgdir6 = force? pkgdir5;
      checkMissing(pkgdir6);
      return pkgdir6;
    };
    r11 = dyn Rd_db1[dir](p5);
    check L39() else D6();
  L40():
    db = ld db;
    check L42() else D7();
  L41():
    r12 = dyn base(<sym db>);
    goto L8(r12);
  D4():
    deopt 13 [r8];
  D6():
    deopt 18 [r11];
  D7():
    deopt 22 [db];
  L9():
    silent1 = ld silent;
    check L52() else D12();
  L36():
    goto L7(r8);
  L39():
    goto L7(r11);
  L42():
    db1 = force? db;
    checkMissing(db1);
    length = ldf length in base;
    r14 = dyn length(db1);
    check L43() else D8();
  L44():
    message = ldf message;
    check L45() else D9();
  D8():
    deopt 25 [r14];
  D9():
    deopt 28 [];
  D12():
    deopt 39 [silent1];
  L43():
    goto L8(r14);
  L45():
    r16 = dyn message("no parsed files found");
    check L46() else D10();
  L52():
    silent2 = force? silent1;
    checkMissing(silent2);
    r22 = `!`(silent2);
    c2 = `as.logical`(r22);
    if c2 then L53() else L12();
  D10():
    deopt 30 [r16];
  L12():
    goto L13();
  L13():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L46():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L53():
    message1 = ldf message;
    check L54() else D13();
  D13():
    deopt 43 [];
  L10(r18):
    popenv;
    return r18;
  L14(r26):
    st files = r26;
    pkg3 = ld pkg;
    check L61() else D17();
  L47():
    invisible = ldf invisible in base;
    r19 = dyn invisible(NULL);
    check L49() else D11();
  L48():
    r17 = dyn base1(NULL);
    goto L10(r17);
  L54():
    r23 = dyn message1[, appendLF, domain]("  Extracting from parsed Rd's ", FALSE, NA_LGL);
    check L55() else D14();
  L57():
    db2 = ld db;
    check L59() else D15();
  L58():
    r25 = dyn base2(<sym db>);
    goto L14(r25);
  D11():
    deopt 35 [r19];
  D14():
    deopt 49 [r23];
  D15():
    deopt 54 [db2];
  D17():
    deopt 59 [pkg3];
  L49():
    goto L10(r19);
  L55():
    goto L13();
  L59():
    db3 = force? db2;
    checkMissing(db3);
    names = ldf names in base;
    r27 = dyn names(db3);
    check L60() else D16();
  L61():
    pkg4 = force? pkg3;
    checkMissing(pkg4);
    r28 = `==`(pkg4, "grDevices");
    c3 = `as.logical`(r28);
    if c3 then L62() else L15();
  D16():
    deopt 57 [r27];
  L15():
    goto L17();
  L17():
    tempfile = ldf tempfile;
    check L70() else D21();
  L60():
    goto L14(r27);
  L62():
    files = ld files;
    check L63() else D18();
  D18():
    deopt 63 [files];
  D21():
    deopt 76 [];
  L63():
    files1 = force? files;
    checkMissing(files1);
    c4 = `is.object`(files1);
    if c4 then L64() else L65(files1);
  L70():
    r33 = dyn tempfile();
    check L71() else D22();
  D22():
    deopt 77 [r33];
  L16(dx1):
    st files = dx1;
    goto L17();
  L64():
    dr = tryDispatchBuiltin.1("[", files1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L66() else L65(dr);
  L65(files3):
    grepl = ldf grepl;
    check L67() else D19();
  L71():
    st filedir = r33;
    dir_create = ldf `dir.create`;
    check L72() else D23();
  D19():
    deopt 66 [files3];
  D23():
    deopt 80 [];
  L66():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L67():
    p6 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r30 = dyn grepl("^(unix|windows)/", p6);
    check L68() else D20();
  L72():
    p7 = prom<V +>{
      filedir = ld filedir;
      filedir1 = force? filedir;
      checkMissing(filedir1);
      return filedir1;
    };
    r35 = dyn dir_create(p7);
    check L73() else D24();
  D20():
    deopt 69 [files3, r30];
  D24():
    deopt 82 [r35];
  L68():
    r31 = `!`(r30);
    __ = ldf `[` in base;
    r32 = dyn __(files3, r31);
    goto L16(r32);
  L73():
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L18():
    st cnt = 0;
    files6 = ld files;
    check L76() else D25();
  L74():
    on_exit = ldf `on.exit` in base;
    r38 = dyn on_exit(<lang unlink(filedir, recursive=TRUE)>);
    goto L18();
  L75():
    r36 = dyn base3(<lang unlink(filedir, recursive=TRUE)>);
    goto L18();
  D25():
    deopt 89 [files6];
  L76():
    files7 = force? files6;
    checkMissing(files7);
    s = toForSeq(files7);
    l = length(s);
    i = 0;
    goto L19(i);
  L19(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L77() else L23();
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    sub = ldf sub;
    check L78() else D26();
  L77():
    silent5 = ld silent;
    check L92() else D36();
  D26():
    deopt 92 [i2];
  D36():
    deopt 139 [silent5];
  L78():
    p9 = prom<V +>{
      basename1 = ldf basename;
      p8 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r40 = dyn basename1(p8);
      return r40;
    };
    r42 = dyn sub("\\.[Rr]d$", "", p9);
    check L79() else D27();
  L92():
    silent6 = force? silent5;
    checkMissing(silent6);
    r60 = `!`(silent6);
    c14 = `as.logical`(r60);
    if c14 then L93() else L24();
  D27():
    deopt 96 [i2, r42];
  L24():
    goto L25();
  L25():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L97() else L98();
  L79():
    st nm = r42;
    Rd2ex = ldf Rd2ex;
    check L80() else D28();
  L93():
    message3 = ldf message;
    check L94() else D37();
  D28():
    deopt 99 [i2];
  D37():
    deopt 143 [];
  L26(r64):
    st nof = r64;
    nof = ld nof;
    check L102() else D42();
  L80():
    p10 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      c6 = `is.object`(db5);
      if c6 then L1() else L2(db5);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", db5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(db7):
      f2 = ld f;
      f3 = force? f2;
      __1 = ldf `[[` in base;
      r43 = dyn __1(db7, f3);
      goto L0(r43);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    p14 = prom<V +>{
      file_path = ldf `file.path`;
      p11 = prom<V +>{
        filedir2 = ld filedir;
        filedir3 = force? filedir2;
        checkMissing(filedir3);
        return filedir3;
      };
      p13 = prom<V +>{
        paste1 = ldf paste0;
        p12 = prom<V +>{
          nm = ld nm;
          nm1 = force? nm;
          checkMissing(nm1);
          return nm1;
        };
        r47 = dyn paste1(p12, ".R");
        return r47;
      };
      r49 = dyn file_path(p11, p13);
      return r49;
    };
    p15 = prom<V +>{
      commentDontrun1 = ld commentDontrun;
      commentDontrun2 = force? commentDontrun1;
      checkMissing(commentDontrun2);
      return commentDontrun2;
    };
    p16 = prom<V +>{
      commentDonttest1 = ld commentDonttest;
      commentDonttest2 = force? commentDonttest1;
      checkMissing(commentDonttest2);
      return commentDonttest2;
    };
    r53 = dyn Rd2ex[, , defines, commentDontrun, commentDonttest](p10, p14, NULL, p15, p16);
    check L81() else D29();
  L94():
    r61 = dyn message3();
    check L95() else D38();
  L97():
    Sys_glob = ldf `Sys.glob`;
    check L99() else D39();
  L98():
    r63 = dyn base4(<lang Sys.glob(file.path(filedir, "*.R"))>);
    goto L26(r63);
  D29():
    deopt 108 [i2, r53];
  D38():
    deopt 144 [r61];
  D39():
    deopt 150 [];
  D42():
    deopt 156 [nof];
  L81():
    cnt = ld cnt;
    check L82() else D30();
  L95():
    goto L25();
  L99():
    p18 = prom<V +>{
      file_path1 = ldf `file.path`;
      p17 = prom<V +>{
        filedir4 = ld filedir;
        filedir5 = force? filedir4;
        checkMissing(filedir5);
        return filedir5;
      };
      r66 = dyn file_path1(p17, "*.R");
      return r66;
    };
    r68 = dyn Sys_glob(p18);
    check L100() else D40();
  L102():
    nof1 = force? nof;
    checkMissing(nof1);
    r70 = `!`(nof1);
    c15 = `as.logical`(r70);
    if c15 then L103() else L27();
  D30():
    deopt 109 [i2, cnt];
  D40():
    deopt 152 [r68];
  L27():
    massageExamples = ldf massageExamples;
    check L109() else D44();
  L82():
    cnt1 = force? cnt;
    checkMissing(cnt1);
    r54 = `+`(cnt1, 1);
    st cnt = r54;
    silent3 = ld silent;
    check L83() else D31();
  L100():
    length1 = ldf length in base;
    r69 = dyn length1(r68);
    check L101() else D41();
  L103():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  D31():
    deopt 114 [i2, silent3];
  D41():
    deopt 154 [r69];
  D44():
    deopt 168 [];
  L28(r72):
    popenv;
    return r72;
  L83():
    silent4 = force? silent3;
    checkMissing(silent4);
    r55 = `!`(silent4);
    c7 = `as.logical`(r55);
    if c7 then L84() else L20(i2, c7);
  L101():
    goto L26(r69);
  L104():
    invisible1 = ldf invisible in base;
    r73 = dyn invisible1(NULL);
    check L106() else D43();
  L105():
    r71 = dyn base5(NULL);
    goto L28(r71);
  L109():
    p19 = prom<V +>{
      pkg5 = ld pkg;
      pkg6 = force? pkg5;
      checkMissing(pkg6);
      return pkg6;
    };
    p20 = prom<V +>{
      filedir6 = ld filedir;
      filedir7 = force? filedir6;
      checkMissing(filedir7);
      return filedir7;
    };
    p21 = prom<V +>{
      Rfile = ld Rfile;
      Rfile1 = force? Rfile;
      checkMissing(Rfile1);
      return Rfile1;
    };
    p22 = prom<V +>{
      use_gct1 = ld use_gct;
      use_gct2 = force? use_gct1;
      checkMissing(use_gct2);
      return use_gct2;
    };
    p23 = prom<V +>{
      addTiming1 = ld addTiming;
      addTiming2 = force? addTiming1;
      checkMissing(addTiming2);
      return addTiming2;
    };
    p24 = prom<V +>{
      commentDonttest3 = ld commentDonttest;
      commentDonttest4 = force? commentDonttest3;
      checkMissing(commentDonttest4);
      return commentDonttest4;
    };
    ddd1 = ld `...`;
    r82 = dyn massageExamples[, , , , , commentDonttest, `...`](p19, p20, p21, p22, p23, p24, ddd1);
    check L110() else D45();
  D43():
    deopt 163 [r73];
  D45():
    deopt 177 [r82];
  L20(i6, c9):
    c13 = `as.logical`(c9);
    if c13 then L88() else L21();
  L84():
    cnt2 = ld cnt;
    check L85() else D32();
  L106():
    goto L28(r73);
  L110():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L111() else L112();
  D32():
    deopt 118 [i2, c7, cnt2];
  L21():
    goto L22(i6);
  L22(i10):
    goto L19(i10);
  L30(r84):
    popenv;
    return r84;
  L85():
    cnt3 = force? cnt2;
    checkMissing(cnt3);
    __2 = ldf `%%` in base;
    r56 = dyn __2(cnt3, 10);
    check L86() else D33();
  L88():
    message2 = ldf message;
    check L89() else D34();
  L111():
    Rfile2 = ld Rfile;
    check L113() else D46();
  L112():
    r83 = dyn base6(<sym Rfile>);
    goto L30(r83);
  D33():
    deopt 122 [i2, c7, r56];
  D34():
    deopt 127 [i6];
  D46():
    deopt 180 [Rfile2];
  L86():
    r57 = `==`(r56, 0);
    c10 = `as.logical`(r57);
    c11 = `&&`(c7, c10);
    goto L20(i2, c11);
  L89():
    r58 = dyn message2[, appendLF, domain](".", FALSE, NA_LGL);
    check L90() else D35();
  L113():
    Rfile3 = force? Rfile2;
    checkMissing(Rfile3);
    invisible2 = ldf invisible in base;
    r85 = dyn invisible2(Rfile3);
    check L114() else D47();
  D35():
    deopt 133 [i6, r58];
  D47():
    deopt 183 [r85];
  L90():
    goto L22(i6);
  L114():
    goto L30(r85);
  }
}