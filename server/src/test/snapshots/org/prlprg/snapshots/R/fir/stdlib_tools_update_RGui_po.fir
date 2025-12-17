fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3734064159;
    st update_RGui_po = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3734064159(srcdir, pot_make, mo_make, mergeOpts) {
  (reg srcdir:*, reg pot_make:*, reg mo_make:*, reg mergeOpts:*) -+> V { var srcdir:*, var pot_make:*, reg pot_make_isMissing:L, reg pot_make_orDefault:*, var mo_make:*, reg mo_make_isMissing:L, reg mo_make_orDefault:*, var mergeOpts:*, reg mergeOpts_isMissing:L, reg mergeOpts_orDefault:*, reg r:cls, reg getwd:cls, reg r1:V, reg Sys_getlocale:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg on_exit:cls, reg r5:V, reg Sys_setlocale:cls, reg r6:V, reg setwd:cls, reg srcdir1:*, reg srcdir2:V, reg p:p(V +), reg r8:V, reg pot_make1:*, reg pot_make2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg file_path:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg file_path1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c2:cls, reg r18:V, reg p2:p(V +), reg r20:V, reg c3:cls, reg r21:V, reg tempfile:cls, reg r22:V, reg sprintf:cls, reg shQuote:cls, reg ofile:*, reg ofile1:V, reg p3:p(V +), reg r24:V, reg p4:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg cmd:*, reg cmd1:V, reg paste0:cls, reg getRversion:cls, reg r29:V, reg p5:p(V +), reg r31:V, reg c4:cls, reg r32:V, reg paste1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg cmd2:*, reg cmd3:V, reg cfiles:*, reg cfiles1:V, reg c5:cls, reg r35:V, reg p6:p(V +), reg r37:V, reg system:cls, reg cmd4:*, reg cmd5:V, reg p7:p(V +), reg r39:V, reg r40:V, reg c6:L, reg stop:cls, reg r41:V, reg same:cls, reg potfile:*, reg potfile1:V, reg p8:p(V +), reg ofile2:*, reg ofile3:V, reg p9:p(V +), reg r45:V, reg r46:V, reg c7:L, reg file_copy:cls, reg ofile4:*, reg ofile5:V, reg p10:p(V +), reg potfile2:*, reg potfile3:V, reg p11:p(V +), reg r49:V, reg r50:V, reg dir:cls, reg r52:V, reg pofiles:*, reg pofiles1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg sub:cls, reg basename:cls, reg f:*, reg f1:V, reg p12:p(V +), reg r54:V, reg p13:p(V +), reg r56:V, reg sub1:cls, reg basename1:cls, reg f2:*, reg f3:V, reg p14:p(V +), reg r58:V, reg p15:p(V +), reg r60:V, reg message:cls, reg lang2:*, reg lang3:V, reg p16:p(V +), reg r62:V, reg paste2:cls, reg mergeOpts1:*, reg mergeOpts2:V, reg p17:p(V +), reg f4:*, reg f5:V, reg p18:p(V +), reg potfile4:*, reg potfile5:V, reg p19:p(V +), reg r66:V, reg system1:cls, reg cmd6:*, reg cmd7:V, reg p20:p(V +), reg r68:V, reg r69:V, reg c9:L, reg warning:cls, reg r70:V, reg checkPoFile:cls, reg f6:*, reg f7:V, reg p21:p(V +), reg r73:V, reg nrow:cls, reg res:*, reg res1:V, reg p22:p(V +), reg r75:V, reg c10:L, reg print:cls, reg res2:*, reg res3:V, reg p23:p(V +), reg r77:V, reg mo_make1:*, reg mo_make2:V, reg r79:V, reg c11:L, reg file_path2:cls, reg lang4:*, reg lang5:V, reg p24:p(V +), reg r82:V, reg dir_create:cls, reg dest:*, reg dest1:V, reg p25:p(V +), reg r84:V, reg file_path3:cls, reg dest2:*, reg dest3:V, reg p26:p(V +), reg r86:V, reg file_test:cls, reg f8:*, reg f9:V, reg p27:p(V +), reg dest4:*, reg dest5:V, reg p28:p(V +), reg r89:V, reg c12:L, reg paste3:cls, reg dest6:*, reg dest7:V, reg p29:p(V +), reg f10:*, reg f11:V, reg p30:p(V +), reg r93:V, reg system2:cls, reg cmd8:*, reg cmd9:V, reg p31:p(V +), reg r95:V, reg r96:V, reg c13:L, reg warning1:cls, reg sprintf1:cls, reg basename2:cls, reg f12:*, reg f13:V, reg p32:p(V +), reg r98:V, reg p33:p(V +), reg r100:V, reg p34:p(V +), reg r102:V, reg i23:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r104:V, reg r105:V, reg invisible:cls, reg r106:V |
    mkenv;
    st srcdir = srcdir;
    pot_make_isMissing = missing.0(pot_make);
    if pot_make_isMissing then L0(TRUE) else L0(pot_make);
  L0(pot_make_orDefault):
    st pot_make = pot_make_orDefault;
    mo_make_isMissing = missing.0(mo_make);
    if mo_make_isMissing then L1(TRUE) else L1(mo_make);
  L1(mo_make_orDefault):
    st mo_make = mo_make_orDefault;
    mergeOpts_isMissing = missing.0(mergeOpts);
    if mergeOpts_isMissing then L2("") else L2(mergeOpts);
  L2(mergeOpts_orDefault):
    st mergeOpts = mergeOpts_orDefault;
    r = clos inner3950065357;
    st same = r;
    getwd = ldf getwd;
    check L25() else D0();
  D0():
    deopt 4 [];
  L25():
    r1 = dyn getwd();
    check L26() else D1();
  D1():
    deopt 5 [r1];
  L26():
    st pwd = r1;
    Sys_getlocale = ldf `Sys.getlocale`;
    check L27() else D2();
  D2():
    deopt 8 [];
  L27():
    r2 = dyn Sys_getlocale("LC_COLLATE");
    check L28() else D3();
  D3():
    deopt 10 [r2];
  L28():
    st coll = r2;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L3():
    Sys_setlocale = ldf `Sys.setlocale`;
    check L31() else D4();
  L29():
    on_exit = ldf `on.exit` in base;
    r5 = dyn on_exit(<lang {
      Sys.setlocale("LC_COLLATE", coll);
      setwd(pwd)
    }>);
    goto L3();
  L30():
    r3 = dyn base(<lang {
      Sys.setlocale("LC_COLLATE", coll);
      setwd(pwd)
    }>);
    goto L3();
  D4():
    deopt 16 [];
  L31():
    r6 = dyn Sys_setlocale("LC_COLLATE", "C");
    check L32() else D5();
  D5():
    deopt 19 [r6];
  L32():
    setwd = ldf setwd;
    check L33() else D6();
  D6():
    deopt 21 [];
  L33():
    p = prom<V +>{
      srcdir1 = ld srcdir;
      srcdir2 = force? srcdir1;
      checkMissing(srcdir2);
      return srcdir2;
    };
    r8 = dyn setwd(p);
    check L34() else D7();
  D7():
    deopt 23 [r8];
  L34():
    st potfile = "src/library/base/po/RGui.pot";
    pot_make1 = ld pot_make;
    check L35() else D8();
  D8():
    deopt 27 [pot_make1];
  L35():
    pot_make2 = force? pot_make1;
    checkMissing(pot_make2);
    c = `as.logical`(pot_make2);
    if c then L36() else L4();
  L4():
    goto L11();
  L11():
    dir = ldf dir;
    check L69() else D32();
  L36():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  D32():
    deopt 112 [];
  L5(r10):
    st cfiles = r10;
    tempfile = ldf tempfile;
    check L44() else D14();
  L37():
    file_path = ldf `file.path`;
    check L39() else D9();
  L38():
    r9 = dyn base1(<lang file.path("src/gnuwin32", c("console.c", "editor.c", "extra.c", "pager.c", "preferences.c", "rui.c", "system.c"))>, <lang file.path("src/extra/graphapp", c("clipboard.c", "dialogs.c", "gmenus.c", "metafile.c", "printer.c"))>, "src/library/utils/src/windows/dataentry.c", "src/library/utils/src/windows/widgets.c", "src/library/grDevices/src/devWindows.c");
    goto L5(r9);
  L69():
    r52 = dyn dir[, pattern, `full.names`]("src/library/base/po", "^RGui-.*[.]po$", TRUE);
    check L70() else D33();
  D9():
    deopt 32 [];
  D14():
    deopt 48 [];
  D33():
    deopt 118 [r52];
  L39():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c1 = ldf c in base;
      r13 = dyn c1("console.c", "editor.c", "extra.c", "pager.c", "preferences.c", "rui.c", "system.c");
      goto L0(r13);
    L2():
      r11 = dyn base2("console.c", "editor.c", "extra.c", "pager.c", "preferences.c", "rui.c", "system.c");
      goto L0(r11);
    };
    r15 = dyn file_path("src/gnuwin32", p1);
    check L40() else D10();
  L44():
    r22 = dyn tempfile();
    check L45() else D15();
  L70():
    st pofiles = r52;
    pofiles = ld pofiles;
    check L71() else D34();
  D10():
    deopt 35 [r15];
  D15():
    deopt 49 [r22];
  D34():
    deopt 120 [pofiles];
  L40():
    file_path1 = ldf `file.path`;
    check L41() else D11();
  L45():
    st ofile = r22;
    sprintf = ldf sprintf;
    check L46() else D16();
  L71():
    pofiles1 = force? pofiles;
    checkMissing(pofiles1);
    s = toForSeq(pofiles1);
    l = length(s);
    i = 0;
    goto L12(i);
  D11():
    deopt 37 [];
  D16():
    deopt 52 [];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L72() else L23();
  L41():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c2 = ldf c in base;
      r18 = dyn c2("clipboard.c", "dialogs.c", "gmenus.c", "metafile.c", "printer.c");
      goto L0(r18);
    L2():
      r16 = dyn base3("clipboard.c", "dialogs.c", "gmenus.c", "metafile.c", "printer.c");
      goto L0(r16);
    };
    r20 = dyn file_path1("src/extra/graphapp", p2);
    check L42() else D12();
  L46():
    p4 = prom<V +>{
      shQuote = ldf shQuote;
      p3 = prom<V +>{
        ofile = ld ofile;
        ofile1 = force? ofile;
        checkMissing(ofile1);
        return ofile1;
      };
      r24 = dyn shQuote(p3);
      return r24;
    };
    r26 = dyn sprintf("xgettext --keyword --keyword=G_ --keyword=GN_ -o %s", p4);
    check L47() else D17();
  D12():
    deopt 40 [r20];
  D17():
    deopt 55 [r26];
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    sub = ldf sub;
    check L73() else D35();
  L42():
    c3 = ldf c in base;
    r21 = dyn c3(r15, r20, "src/library/utils/src/windows/dataentry.c", "src/library/utils/src/windows/widgets.c", "src/library/grDevices/src/devWindows.c");
    check L43() else D13();
  L47():
    st cmd = r26;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L72():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  D13():
    deopt 45 [r21];
  D35():
    deopt 123 [i2];
  L6(r28):
    st cmd = r28;
    paste1 = ldf paste;
    check L54() else D22();
  L24(r105):
    popenv;
    return r105;
  L43():
    goto L5(r21);
  L48():
    cmd = ld cmd;
    check L50() else D18();
  L49():
    r27 = dyn base4(<sym cmd>, "--package-name=R", <lang paste0("--package-version=", getRversion())>, "--add-comments=TRANSLATORS:", "--copyright-holder=\"The R Core Team\"", "--msgid-bugs-address=\"bugs.r-project.org\"");
    goto L6(r27);
  L73():
    p13 = prom<V +>{
      basename = ldf basename;
      p12 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r54 = dyn basename(p12);
      return r54;
    };
    r56 = dyn sub("^RGui-(.*)[.]po$", "\\1", p13);
    check L74() else D36();
  L120():
    invisible = ldf invisible in base;
    r106 = dyn invisible();
    check L122() else D68();
  L121():
    r104 = dyn base6();
    goto L24(r104);
  D18():
    deopt 59 [cmd];
  D22():
    deopt 74 [];
  D36():
    deopt 127 [i2, r56];
  D68():
    deopt 251 [r106];
  L50():
    cmd1 = force? cmd;
    checkMissing(cmd1);
    paste0 = ldf paste0;
    check L51() else D19();
  L54():
    p6 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      cmd2 = ld cmd;
      cmd3 = force? cmd2;
      checkMissing(cmd3);
      cfiles = ld cfiles;
      cfiles1 = force? cfiles;
      checkMissing(cfiles1);
      c5 = ldf c in base;
      r35 = dyn c5(cmd3, cfiles1);
      goto L0(r35);
    L2():
      r33 = dyn base5(<sym cmd>, <sym cfiles>);
      goto L0(r33);
    };
    r37 = dyn paste1[, collapse](p6, " ");
    check L55() else D23();
  L74():
    st lang = r56;
    sub1 = ldf sub;
    check L75() else D37();
  L122():
    goto L24(r106);
  D19():
    deopt 63 [];
  D23():
    deopt 78 [r37];
  D37():
    deopt 130 [i2];
  L51():
    p5 = prom<V +>{
      getRversion = ldf getRversion;
      r29 = dyn getRversion();
      return r29;
    };
    r31 = dyn paste0("--package-version=", p5);
    check L52() else D20();
  L55():
    st cmd = r37;
    system = ldf system;
    check L56() else D24();
  L75():
    p15 = prom<V +>{
      basename1 = ldf basename;
      p14 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r58 = dyn basename1(p14);
      return r58;
    };
    r60 = dyn sub1("[.]po", "", p15);
    check L76() else D38();
  D20():
    deopt 66 [r31];
  D24():
    deopt 81 [];
  D38():
    deopt 134 [i2, r60];
  L52():
    c4 = ldf c in base;
    r32 = dyn c4(cmd1, "--package-name=R", r31, "--add-comments=TRANSLATORS:", "--copyright-holder=\"The R Core Team\"", "--msgid-bugs-address=\"bugs.r-project.org\"");
    check L53() else D21();
  L56():
    p7 = prom<V +>{
      cmd4 = ld cmd;
      cmd5 = force? cmd4;
      checkMissing(cmd5);
      return cmd5;
    };
    r39 = dyn system(p7);
    check L57() else D25();
  L76():
    st lang2 = r60;
    message = ldf message;
    check L77() else D39();
  D21():
    deopt 71 [r32];
  D25():
    deopt 83 [r39];
  D39():
    deopt 137 [i2];
  L53():
    goto L6(r32);
  L57():
    r40 = `!=`(r39, 0);
    c6 = `as.logical`(r40);
    if c6 then L58() else L7();
  L77():
    p16 = prom<V +>{
      lang2 = ld lang2;
      lang3 = force? lang2;
      checkMissing(lang3);
      return lang3;
    };
    r62 = dyn message[, , , appendLF, domain]("  ", p16, ":", FALSE, NA_LGL);
    check L78() else D40();
  D40():
    deopt 145 [i2, r62];
  L7():
    goto L8();
  L8():
    same = ldf same;
    check L62() else D28();
  L58():
    stop = ldf stop;
    check L59() else D26();
  L78():
    paste2 = ldf paste;
    check L79() else D41();
  D26():
    deopt 87 [];
  D28():
    deopt 95 [];
  D41():
    deopt 147 [i2];
  L59():
    r41 = dyn stop[, domain]("running xgettext failed", NA_LGL);
    check L60() else D27();
  L62():
    p8 = prom<V +>{
      potfile = ld potfile;
      potfile1 = force? potfile;
      checkMissing(potfile1);
      return potfile1;
    };
    p9 = prom<V +>{
      ofile2 = ld ofile;
      ofile3 = force? ofile2;
      checkMissing(ofile3);
      return ofile3;
    };
    r45 = dyn same(p8, p9);
    check L63() else D29();
  L79():
    p17 = prom<V +>{
      mergeOpts1 = ld mergeOpts;
      mergeOpts2 = force? mergeOpts1;
      checkMissing(mergeOpts2);
      return mergeOpts2;
    };
    p18 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p19 = prom<V +>{
      potfile4 = ld potfile;
      potfile5 = force? potfile4;
      checkMissing(potfile5);
      return potfile5;
    };
    r66 = dyn paste2("msgmerge --update", p17, p18, p19);
    check L80() else D42();
  D27():
    deopt 91 [r41];
  D29():
    deopt 98 [r45];
  D42():
    deopt 152 [i2, r66];
  L60():
    goto L8();
  L63():
    r46 = `!`(r45);
    c7 = `as.logical`(r46);
    if c7 then L64() else L9();
  L80():
    st cmd = r66;
    system1 = ldf system;
    check L81() else D43();
  D43():
    deopt 155 [i2];
  L9():
    goto L10(NULL);
  L10(r50):
    goto L11();
  L64():
    file_copy = ldf `file.copy`;
    check L65() else D30();
  L81():
    p20 = prom<V +>{
      cmd6 = ld cmd;
      cmd7 = force? cmd6;
      checkMissing(cmd7);
      return cmd7;
    };
    r68 = dyn system1(p20);
    check L82() else D44();
  D30():
    deopt 101 [];
  D44():
    deopt 157 [i2, r68];
  L65():
    p10 = prom<V +>{
      ofile4 = ld ofile;
      ofile5 = force? ofile4;
      checkMissing(ofile5);
      return ofile5;
    };
    p11 = prom<V +>{
      potfile2 = ld potfile;
      potfile3 = force? potfile2;
      checkMissing(potfile3);
      return potfile3;
    };
    r49 = dyn file_copy[, , overwrite](p10, p11, TRUE);
    check L66() else D31();
  L82():
    r69 = `!=`(r68, 0);
    c9 = `as.logical`(r69);
    if c9 then L83() else L13();
  D31():
    deopt 106 [r49];
  L13():
    checkPoFile = ldf checkPoFile;
    check L88() else D47();
  L66():
    goto L10(r49);
  L83():
    warning = ldf warning;
    check L84() else D45();
  D45():
    deopt 161 [i2];
  D47():
    deopt 171 [i2];
  L84():
    r70 = dyn warning[, domain]("running msgmerge failed", NA_LGL);
    check L85() else D46();
  L88():
    p21 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r73 = dyn checkPoFile(p21, FALSE);
    check L89() else D48();
  D46():
    deopt 165 [i2, r70];
  D48():
    deopt 174 [i2, r73];
  L85():
    goto L12(i2);
  L89():
    st res = r73;
    nrow = ldf nrow;
    check L90() else D49();
  D49():
    deopt 177 [i2];
  L90():
    p22 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r75 = dyn nrow(p22);
    check L91() else D50();
  D50():
    deopt 179 [i2, r75];
  L91():
    c10 = `as.logical`(r75);
    if c10 then L92() else L15();
  L15():
    mo_make1 = ld mo_make;
    check L97() else D53();
  L92():
    print = ldf print;
    check L93() else D51();
  D51():
    deopt 181 [i2];
  D53():
    deopt 188 [i2, mo_make1];
  L93():
    p23 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    r77 = dyn print(p23);
    check L94() else D52();
  L97():
    mo_make2 = force? mo_make1;
    checkMissing(mo_make2);
    r79 = `!`(mo_make2);
    c11 = `as.logical`(r79);
    if c11 then L98() else L17();
  D52():
    deopt 183 [i2, r77];
  L17():
    file_path2 = ldf `file.path`;
    check L101() else D54();
  L94():
    goto L12(i2);
  L98():
    goto L12(i2);
  D54():
    deopt 196 [i2];
  L101():
    p24 = prom<V +>{
      lang4 = ld lang;
      lang5 = force? lang4;
      checkMissing(lang5);
      return lang5;
    };
    r82 = dyn file_path2("src/library/translations/inst", p24, "LC_MESSAGES");
    check L102() else D55();
  D55():
    deopt 200 [i2, r82];
  L102():
    st dest = r82;
    dir_create = ldf `dir.create`;
    check L103() else D56();
  D56():
    deopt 203 [i2];
  L103():
    p25 = prom<V +>{
      dest = ld dest;
      dest1 = force? dest;
      checkMissing(dest1);
      return dest1;
    };
    r84 = dyn dir_create(p25, FALSE, TRUE);
    check L104() else D57();
  D57():
    deopt 207 [i2, r84];
  L104():
    file_path3 = ldf `file.path`;
    check L105() else D58();
  D58():
    deopt 209 [i2];
  L105():
    p26 = prom<V +>{
      dest2 = ld dest;
      dest3 = force? dest2;
      checkMissing(dest3);
      return dest3;
    };
    r86 = dyn file_path3(p26, "RGui.mo");
    check L106() else D59();
  D59():
    deopt 212 [i2, r86];
  L106():
    st dest = r86;
    file_test = ldf file_test;
    check L107() else D60();
  D60():
    deopt 215 [i2];
  L107():
    p27 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p28 = prom<V +>{
      dest4 = ld dest;
      dest5 = force? dest4;
      checkMissing(dest5);
      return dest5;
    };
    r89 = dyn file_test("-ot", p27, p28);
    check L108() else D61();
  D61():
    deopt 219 [i2, r89];
  L108():
    c12 = `as.logical`(r89);
    if c12 then L109() else L19();
  L19():
    paste3 = ldf paste;
    check L112() else D62();
  L109():
    goto L12(i2);
  D62():
    deopt 225 [i2];
  L112():
    p29 = prom<V +>{
      dest6 = ld dest;
      dest7 = force? dest6;
      checkMissing(dest7);
      return dest7;
    };
    p30 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    r93 = dyn paste3("msgfmt -c --statistics -o", p29, p30);
    check L113() else D63();
  D63():
    deopt 229 [i2, r93];
  L113():
    st cmd = r93;
    system2 = ldf system;
    check L114() else D64();
  D64():
    deopt 232 [i2];
  L114():
    p31 = prom<V +>{
      cmd8 = ld cmd;
      cmd9 = force? cmd8;
      checkMissing(cmd9);
      return cmd9;
    };
    r95 = dyn system2(p31);
    check L115() else D65();
  D65():
    deopt 234 [i2, r95];
  L115():
    r96 = `!=`(r95, 0);
    c13 = `as.logical`(r96);
    if c13 then L116() else L21();
  L21():
    goto L22(i2);
  L22(i23):
    goto L12(i23);
  L116():
    warning1 = ldf warning;
    check L117() else D66();
  D66():
    deopt 238 [i2];
  L117():
    p34 = prom<V +>{
      sprintf1 = ldf sprintf;
      p33 = prom<V +>{
        basename2 = ldf basename;
        p32 = prom<V +>{
          f12 = ld f;
          f13 = force? f12;
          checkMissing(f13);
          return f13;
        };
        r98 = dyn basename2(p32);
        return r98;
      };
      r100 = dyn sprintf1("running msgfmt on %s failed", p33);
      return r100;
    };
    r102 = dyn warning1[, domain](p34, NA_LGL);
    check L118() else D67();
  D67():
    deopt 242 [i2, r102];
  L118():
    goto L22(i2);
  }
}
fun inner3950065357(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg readLines:cls, reg a1:*, reg a2:V, reg p:p(V +), reg r1:V, reg readLines1:cls, reg b1:*, reg b2:V, reg p1:p(V +), reg r3:V, reg filtergrep:cls, reg tmpa:*, reg tmpa1:V, reg p2:p(V +), reg r5:V, reg filtergrep1:cls, reg tmpb:*, reg tmpb1:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg tmpa2:*, reg tmpa3:V, reg tmpb2:*, reg tmpb3:V, reg identical:cls, reg r10:V |
    mkenv;
    st a = a;
    st b = b;
    readLines = ldf readLines;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    r1 = dyn readLines(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st tmpa = r1;
    readLines1 = ldf readLines;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      b1 = ld b;
      b2 = force? b1;
      checkMissing(b2);
      return b2;
    };
    r3 = dyn readLines1(p1);
    check L4() else D3();
  D3():
    deopt 8 [r3];
  L4():
    st tmpb = r3;
    filtergrep = ldf filtergrep;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    p2 = prom<V +>{
      tmpa = ld tmpa;
      tmpa1 = force? tmpa;
      checkMissing(tmpa1);
      return tmpa1;
    };
    r5 = dyn filtergrep("^\"POT-Creation-Date:", p2);
    check L6() else D5();
  D5():
    deopt 14 [r5];
  L6():
    st tmpa = r5;
    filtergrep1 = ldf filtergrep;
    check L7() else D6();
  D6():
    deopt 17 [];
  L7():
    p3 = prom<V +>{
      tmpb = ld tmpb;
      tmpb1 = force? tmpb;
      checkMissing(tmpb1);
      return tmpb1;
    };
    r7 = dyn filtergrep1("^\"POT-Creation-Date:", p3);
    check L8() else D7();
  D7():
    deopt 20 [r7];
  L8():
    st tmpb = r7;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r9):
    popenv;
    return r9;
  L9():
    tmpa2 = ld tmpa;
    check L11() else D8();
  L10():
    r8 = dyn base(<sym tmpa>, <sym tmpb>);
    goto L0(r8);
  D8():
    deopt 24 [tmpa2];
  L11():
    tmpa3 = force? tmpa2;
    checkMissing(tmpa3);
    tmpb2 = ld tmpb;
    check L12() else D9();
  D9():
    deopt 26 [tmpb2];
  L12():
    tmpb3 = force? tmpb2;
    checkMissing(tmpb3);
    identical = ldf identical in base;
    r10 = dyn identical(tmpa3, tmpb3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L13() else D10();
  D10():
    deopt 36 [r10];
  L13():
    goto L0(r10);
  }
}