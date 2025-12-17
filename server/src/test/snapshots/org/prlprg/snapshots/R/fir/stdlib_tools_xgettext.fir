fun main() {
  () -+> V { reg r:cls, reg tempdir:cls, reg r1:V, reg file_path:cls, reg tmpPkg:*, reg tmpPkg1:V, reg p:p(V +), reg r3:V, reg dir_create:cls, reg tmpRDir:*, reg tmpRDir1:V, reg p1:p(V +), reg r5:V, reg paste:cls, reg r6:V, reg writeLines:cls, reg fnChar:*, reg fnChar1:V, reg p2:p(V +), reg file_path1:cls, reg tmpRDir2:*, reg tmpRDir3:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg xgettext:cls, reg tmpPkg2:*, reg tmpPkg3:V, reg p5:p(V +), reg r13:V, reg c:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r16:V, reg xgettext1:cls, reg tmpPkg4:*, reg tmpPkg5:V, reg p6:p(V +), reg r18:V, reg c1:L, reg r20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg __1:cls, reg r21:V, reg unlink:cls, reg tmpRDir4:*, reg tmpRDir5:V, reg p7:p(V +), reg r23:V |
    mkenv;
    r = clos inner773228348;
    st xgettext = r;
    tempdir = ldf tempdir;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn tempdir();
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    st tmpPkg = r1;
    file_path = ldf `file.path`;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p = prom<V +>{
      tmpPkg = ld tmpPkg;
      tmpPkg1 = force? tmpPkg;
      checkMissing(tmpPkg1);
      return tmpPkg1;
    };
    r3 = dyn file_path(p, "R");
    check L5() else D3();
  D3():
    deopt 11 [r3];
  L5():
    st tmpRDir = r3;
    dir_create = ldf `dir.create`;
    check L6() else D4();
  D4():
    deopt 14 [];
  L6():
    p1 = prom<V +>{
      tmpRDir = ld tmpRDir;
      tmpRDir1 = force? tmpRDir;
      checkMissing(tmpRDir1);
      return tmpRDir1;
    };
    r5 = dyn dir_create[, showWarnings](p1, FALSE);
    check L7() else D5();
  D5():
    deopt 18 [r5];
  L7():
    paste = ldf paste;
    check L8() else D6();
  D6():
    deopt 20 [];
  L8():
    r6 = dyn paste[sep, , , , , , , , , , , , , , , , , , , ]("\n", "foo <- function(x) {", "  if (x < -1)  stop('too small')", "  # messages unduplicated (not so for ngettext)", "  if (x < -.5) stop('too small')", "  if (x < 0) {", "    warning(", "      'sqrt(x) is', sqrt(as.complex(x)),", "      ', which may be too small'", "    )", "  }", "  # calls with domain=NA are skipped", "  if (x == 0) cat(gettext('x is 0!\n', domain=NA))", "  # gettext strings may be ignored due to 'outer' domain=NA", "  if (x > 10) warning('x is ', gettextf('%.2f', x), domain=NA)", "  # using a custom condition class", "  if (x == 42)", "    stop(errorCondition(gettext('needs Deep Thought'), class='myError'))", "  x", "}");
    check L9() else D7();
  D7():
    deopt 42 [r6];
  L9():
    st fnChar = r6;
    writeLines = ldf writeLines;
    check L10() else D8();
  D8():
    deopt 45 [];
  L10():
    p2 = prom<V +>{
      fnChar = ld fnChar;
      fnChar1 = force? fnChar;
      checkMissing(fnChar1);
      return fnChar1;
    };
    p4 = prom<V +>{
      file_path1 = ldf `file.path`;
      p3 = prom<V +>{
        tmpRDir2 = ld tmpRDir;
        tmpRDir3 = force? tmpRDir2;
        checkMissing(tmpRDir3);
        return tmpRDir3;
      };
      r9 = dyn file_path1(p3, "foo.R");
      return r9;
    };
    r11 = dyn writeLines[, con](p2, p4);
    check L11() else D9();
  D9():
    deopt 49 [r11];
  L11():
    xgettext = ldf xgettext;
    check L12() else D10();
  D10():
    deopt 51 [];
  L12():
    p5 = prom<V +>{
      tmpPkg2 = ld tmpPkg;
      tmpPkg3 = force? tmpPkg2;
      checkMissing(tmpPkg3);
      return tmpPkg3;
    };
    r13 = dyn xgettext[, asCall](p5, TRUE);
    check L13() else D11();
  D11():
    deopt 55 [r13];
  L13():
    c = `is.object`(r13);
    if c then L14() else L15(r13);
  L0():
    xgettext1 = ldf xgettext;
    check L17() else D12();
  L14():
    dr = tryDispatchBuiltin.1("[[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r15):
    __ = ldf `[[` in base;
    r16 = dyn __(r15, 1.0);
    goto L0();
  D12():
    deopt 60 [];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0();
  L17():
    p6 = prom<V +>{
      tmpPkg4 = ld tmpPkg;
      tmpPkg5 = force? tmpPkg4;
      checkMissing(tmpPkg5);
      return tmpPkg5;
    };
    r18 = dyn xgettext1[, asCall](p6, FALSE);
    check L18() else D13();
  D13():
    deopt 64 [r18];
  L18():
    c1 = `is.object`(r18);
    if c1 then L19() else L20(r18);
  L1():
    unlink = ldf unlink;
    check L22() else D14();
  L19():
    dr2 = tryDispatchBuiltin.1("[[", r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(r20):
    __1 = ldf `[[` in base;
    r21 = dyn __1(r20, 1.0);
    goto L1();
  D14():
    deopt 69 [];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1();
  L22():
    p7 = prom<V +>{
      tmpRDir4 = ld tmpRDir;
      tmpRDir5 = force? tmpRDir4;
      checkMissing(tmpRDir5);
      return tmpRDir5;
    };
    r23 = dyn unlink[, recursive](p7, TRUE);
    check L23() else D15();
  D15():
    deopt 73 [r23];
  L23():
    popenv;
    return r23;
  }
}
fun inner773228348(dir, verbose, asCall) {
  (reg dir:*, reg verbose:*, reg asCall:*) -+> V { var dir:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var asCall:*, reg asCall_isMissing:L, reg asCall_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg basename:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg file_path:cls, reg dir5:*, reg dir6:V, reg p2:p(V +), reg r5:V, reg _make_file_exts:cls, reg r6:V, reg list_files_with_exts:cls, reg dir7:*, reg dir8:V, reg p3:p(V +), reg exts:*, reg exts1:V, reg p4:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p5:p(V +), reg d:*, reg d1:V, reg p6:p(V +), reg r15:V, reg dir_exists:cls, reg OSdir:*, reg OSdir1:V, reg p7:p(V +), reg r17:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg i9:I, reg r19:V, reg R_files:*, reg R_files1:V, reg list_files_with_exts1:cls, reg OSdir2:*, reg OSdir3:V, reg p8:p(V +), reg exts2:*, reg exts3:V, reg p9:p(V +), reg r22:V, reg c3:cls, reg r23:V, reg i10:I, reg bn:*, reg bn1:V, reg r25:V, reg c4:L, reg file_path2:cls, reg dir11:*, reg dir12:V, reg p10:p(V +), reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg R_files2:*, reg R_files3:V, reg list_files_with_exts2:cls, reg shdir:*, reg shdir1:V, reg p11:p(V +), reg exts4:*, reg exts5:V, reg p12:p(V +), reg r32:V, reg c5:cls, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg R_files4:*, reg R_files5:V, reg length:cls, reg r39:V, reg vector:cls, reg r40:V, reg R_files6:*, reg R_files7:V, reg l1:*, reg names__:cls, reg r41:V, reg r42:cls, reg R_files8:*, reg R_files9:V, reg s1:V, reg l2:I, reg i11:I, reg i12:I, reg i13:I, reg c6:L, reg x1:V, reg verbose1:*, reg verbose2:V, reg c7:L, reg message:cls, reg gettextf:cls, reg f:*, reg f1:V, reg p13:p(V +), reg r44:V, reg p14:p(V +), reg r46:V, reg i18:I, reg character:cls, reg r48:V, reg parse:cls, reg f2:*, reg f3:V, reg p15:p(V +), reg r50:V, reg s2:V, reg l3:I, reg i19:I, reg i20:I, reg i21:I, reg i22:I, reg c8:L, reg x2:V, reg find_strings:cls, reg e:*, reg e1:V, reg p16:p(V +), reg r52:V, reg sub:cls, reg strings:*, reg strings1:V, reg p17:p(V +), reg r54:V, reg sub1:cls, reg strings2:*, reg strings3:V, reg p18:p(V +), reg r56:V, reg structure:cls, reg unique:cls, reg strings4:*, reg strings5:V, reg p19:p(V +), reg r58:V, reg p20:p(V +), reg r60:V, reg l4:*, reg c9:L, reg i28:I, reg r62:V, reg l6:*, reg dr:V, reg dc:L, reg dx:V, reg i30:I, reg dx1:V, reg f4:*, reg f5:V, reg ____:cls, reg r65:V, reg out:*, reg out1:V, reg c10:L, reg out3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lengths:cls, reg out4:*, reg out5:V, reg p21:p(V +), reg r67:V, reg r68:V, reg __:cls, reg r69:V |
    mkenv;
    st dir = dir;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    asCall_isMissing = missing.0(asCall);
    if asCall_isMissing then L1(TRUE) else L1(asCall);
  L1(asCall_orDefault):
    st asCall = asCall_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L22() else D1();
  D1():
    deopt 3 [r1];
  L22():
    st dir = r1;
    basename = ldf basename;
    check L23() else D2();
  D2():
    deopt 6 [];
  L23():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn basename(p1);
    check L24() else D3();
  D3():
    deopt 8 [r3];
  L24():
    st bn = r3;
    file_path = ldf `file.path`;
    check L25() else D4();
  D4():
    deopt 11 [];
  L25():
    p2 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r5 = dyn file_path(p2, "R");
    check L26() else D5();
  D5():
    deopt 14 [r5];
  L26():
    st dir = r5;
    _make_file_exts = ldf `.make_file_exts`;
    check L27() else D6();
  D6():
    deopt 17 [];
  L27():
    r6 = dyn _make_file_exts("code");
    check L28() else D7();
  D7():
    deopt 19 [r6];
  L28():
    st exts = r6;
    list_files_with_exts = ldf list_files_with_exts;
    check L29() else D8();
  D8():
    deopt 22 [];
  L29():
    p3 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p4 = prom<V +>{
      exts = ld exts;
      exts1 = force? exts;
      checkMissing(exts1);
      return exts1;
    };
    r9 = dyn list_files_with_exts(p3, p4);
    check L30() else D9();
  D9():
    deopt 25 [r9];
  L30():
    st R_files = r9;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L2(r11):
    s = toForSeq(r11);
    l = length(s);
    i = 0;
    goto L3(i);
  L31():
    c = ldf c in base;
    r12 = dyn c("unix", "windows");
    check L33() else D10();
  L32():
    r10 = dyn base("unix", "windows");
    goto L2(r10);
  D10():
    deopt 32 [r12];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L34() else L7();
  L33():
    goto L2(r12);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st d = x;
    file_path1 = ldf `file.path`;
    check L35() else D11();
  L34():
    bn = ld bn;
    check L47() else D19();
  D11():
    deopt 34 [i2];
  D19():
    deopt 60 [bn];
  L35():
    p5 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p6 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r15 = dyn file_path1(p5, p6);
    check L36() else D12();
  L47():
    bn1 = force? bn;
    checkMissing(bn1);
    r25 = `==`(bn1, "base");
    c4 = `as.logical`(r25);
    if c4 then L48() else L8();
  D12():
    deopt 37 [i2, r15];
  L8():
    goto L10();
  L10():
    sym3 = ldf vector;
    base3 = ldf vector in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L36():
    st OSdir = r15;
    dir_exists = ldf `dir.exists`;
    check L37() else D13();
  L48():
    file_path2 = ldf `file.path`;
    check L49() else D20();
  D13():
    deopt 40 [i2];
  D20():
    deopt 65 [];
  L11(r36):
    st out = r36;
    R_files6 = ld R_files;
    check L65() else D29();
  L37():
    p7 = prom<V +>{
      OSdir = ld OSdir;
      OSdir1 = force? OSdir;
      checkMissing(OSdir1);
      return OSdir1;
    };
    r17 = dyn dir_exists(p7);
    check L38() else D14();
  L49():
    p10 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r27 = dyn file_path2(p10, "../../../../share/R");
    check L50() else D21();
  L58():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L59():
    r35 = dyn base3[, length]("list", <lang length(R_files)>);
    goto L11(r35);
  D14():
    deopt 42 [i2, r17];
  D21():
    deopt 68 [r27];
  D29():
    deopt 96 [R_files6];
  L12(r38):
    vector = ldf vector in base;
    r40 = dyn vector("list", r38);
    check L64() else D28();
  L38():
    c2 = `as.logical`(r17);
    if c2 then L39() else L4();
  L50():
    st shdir = r27;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L60():
    R_files4 = ld R_files;
    check L62() else D26();
  L61():
    r37 = dyn base4(<sym R_files>);
    goto L12(r37);
  L65():
    R_files7 = force? R_files6;
    checkMissing(R_files7);
    l1 = ld out;
    names__ = ldf `names<-`;
    check L66() else D30();
  D26():
    deopt 89 [R_files4];
  D28():
    deopt 94 [r40];
  D30():
    deopt 99 [R_files7, l1, R_files7];
  L4():
    goto L6(i2);
  L6(i10):
    goto L3(i10);
  L9(r29):
    st R_files = r29;
    goto L10();
  L39():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L51():
    R_files2 = ld R_files;
    check L53() else D22();
  L52():
    r28 = dyn base2(<sym R_files>, <lang list_files_with_exts(shdir, exts)>);
    goto L9(r28);
  L62():
    R_files5 = force? R_files4;
    checkMissing(R_files5);
    length = ldf length in base;
    r39 = dyn length(R_files5);
    check L63() else D27();
  L64():
    goto L11(r40);
  L66():
    r41 = dyn names__(l1, NULL, R_files7);
    check L67() else D31();
  D22():
    deopt 72 [R_files2];
  D27():
    deopt 92 [r39];
  D31():
    deopt 101 [R_files7, r41];
  L5(i9, r19):
    st R_files = r19;
    goto L6(i9);
  L40():
    R_files = ld R_files;
    check L42() else D15();
  L41():
    r18 = dyn base1(<sym R_files>, <lang list_files_with_exts(OSdir, exts)>);
    goto L5(i2, r18);
  L53():
    R_files3 = force? R_files2;
    checkMissing(R_files3);
    list_files_with_exts2 = ldf list_files_with_exts;
    check L54() else D23();
  L63():
    goto L12(r39);
  L67():
    st out = r41;
    r42 = clos inner3708401697;
    st find_strings = r42;
    R_files8 = ld R_files;
    check L68() else D32();
  D15():
    deopt 45 [i2, R_files];
  D23():
    deopt 75 [];
  D32():
    deopt 106 [R_files8];
  L42():
    R_files1 = force? R_files;
    checkMissing(R_files1);
    list_files_with_exts1 = ldf list_files_with_exts;
    check L43() else D16();
  L54():
    p11 = prom<V +>{
      shdir = ld shdir;
      shdir1 = force? shdir;
      checkMissing(shdir1);
      return shdir1;
    };
    p12 = prom<V +>{
      exts4 = ld exts;
      exts5 = force? exts4;
      checkMissing(exts5);
      return exts5;
    };
    r32 = dyn list_files_with_exts2(p11, p12);
    check L55() else D24();
  L68():
    R_files9 = force? R_files8;
    checkMissing(R_files9);
    s1 = toForSeq(R_files9);
    l2 = length(s1);
    i11 = 0;
    goto L13(i11);
  D16():
    deopt 48 [i2];
  D24():
    deopt 78 [r32];
  L13(i12):
    i13 = `+`.1(i12, 1);
    c6 = `<`.1(l2, i13);
    if c6 then L69() else L19();
  L43():
    p8 = prom<V +>{
      OSdir2 = ld OSdir;
      OSdir3 = force? OSdir2;
      checkMissing(OSdir3);
      return OSdir3;
    };
    p9 = prom<V +>{
      exts2 = ld exts;
      exts3 = force? exts2;
      checkMissing(exts3);
      return exts3;
    };
    r22 = dyn list_files_with_exts1(p8, p9);
    check L44() else D17();
  L55():
    c5 = ldf c in base;
    r33 = dyn c5(R_files3, r32);
    check L56() else D25();
  D17():
    deopt 51 [i2, r22];
  D25():
    deopt 80 [r33];
  L19():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st f = x1;
    verbose1 = ld verbose;
    check L70() else D33();
  L44():
    c3 = ldf c in base;
    r23 = dyn c3(R_files1, r22);
    check L45() else D18();
  L56():
    goto L9(r33);
  L69():
    out = ld out;
    check L92() else D49();
  D18():
    deopt 53 [i2, r23];
  D33():
    deopt 108 [i13, verbose1];
  D49():
    deopt 162 [out];
  L45():
    goto L5(i2, r23);
  L70():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c7 = `as.logical`(verbose2);
    if c7 then L71() else L14();
  L92():
    out1 = force? out;
    checkMissing(out1);
    c10 = `is.object`(out1);
    if c10 then L93() else L94(out1);
  L14():
    goto L15(i13);
  L15(i18):
    character = ldf character;
    check L75() else D36();
  L20(dx3):
    popenv;
    return dx3;
  L71():
    message = ldf message;
    check L72() else D34();
  L93():
    dr2 = tryDispatchBuiltin.1("[", out1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L95() else L94(dr2);
  L94(out3):
    lengths = ldf lengths;
    check L96() else D50();
  D34():
    deopt 111 [i13];
  D36():
    deopt 119 [i18];
  D50():
    deopt 165 [out3];
  L72():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r44 = dyn gettextf("parsing '%s'", p13);
      return r44;
    };
    r46 = dyn message[, domain](p14, NA_LGL);
    check L73() else D35();
  L75():
    r48 = dyn character();
    check L76() else D37();
  L95():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L96():
    p21 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r67 = dyn lengths(p21);
    check L97() else D51();
  D35():
    deopt 115 [i13, r46];
  D37():
    deopt 120 [i18, r48];
  D51():
    deopt 167 [out3, r67];
  L73():
    goto L15(i13);
  L76():
    st strings = r48;
    parse = ldf parse;
    check L77() else D38();
  L97():
    r68 = `>`(r67, 0);
    __ = ldf `[` in base;
    r69 = dyn __(out3, r68);
    goto L20(r69);
  D38():
    deopt 123 [i18];
  L77():
    p15 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r50 = dyn parse[file](p15);
    check L78() else D39();
  D39():
    deopt 126 [i18, r50];
  L78():
    s2 = toForSeq(r50);
    l3 = length(s2);
    i19 = 0;
    goto L16(i18, i19);
  L16(i20, i21):
    i22 = `+`.1(i21, 1);
    c8 = `<`.1(l3, i22);
    if c8 then L79() else L17();
  L17():
    x2 = `[[`(s2, i22, NULL, TRUE);
    st e = x2;
    find_strings = ldf find_strings;
    check L80() else D40();
  L79():
    sub = ldf sub;
    check L82() else D42();
  D40():
    deopt 128 [i20, i22];
  D42():
    deopt 135 [i20];
  L80():
    p16 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r52 = dyn find_strings(p16);
    check L81() else D41();
  L82():
    p17 = prom<V +>{
      strings = ld strings;
      strings1 = force? strings;
      checkMissing(strings1);
      return strings1;
    };
    r54 = dyn sub("^[ \t\n]*", "", p17);
    check L83() else D43();
  D41():
    deopt 130 [i20, i22, r52];
  D43():
    deopt 139 [i20, r54];
  L81():
    goto L16(i20, i22);
  L83():
    st strings = r54;
    sub1 = ldf sub;
    check L84() else D44();
  D44():
    deopt 142 [i20];
  L84():
    p18 = prom<V +>{
      strings2 = ld strings;
      strings3 = force? strings2;
      checkMissing(strings3);
      return strings3;
    };
    r56 = dyn sub1("[ \t\n]*$", "", p18);
    check L85() else D45();
  D45():
    deopt 146 [i20, r56];
  L85():
    st strings = r56;
    structure = ldf structure;
    check L86() else D46();
  D46():
    deopt 149 [i20];
  L86():
    p20 = prom<V +>{
      unique = ldf unique;
      p19 = prom<V +>{
        strings4 = ld strings;
        strings5 = force? strings4;
        checkMissing(strings5);
        return strings5;
      };
      r58 = dyn unique(p19);
      return r58;
    };
    r60 = dyn structure[, class](p20, "xgettext");
    check L87() else D47();
  D47():
    deopt 153 [i20, r60];
  L87():
    l4 = ld out;
    c9 = `is.object`(l4);
    if c9 then L88() else L89(i20, r60, l4);
  L18(i30, dx1):
    st out = dx1;
    goto L13(i30);
  L88():
    dr = tryDispatchBuiltin.0("[[<-", l4, r60);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L90() else L89(i20, r60, dr);
  L89(i28, r62, l6):
    f4 = ld f;
    check L91() else D48();
  D48():
    deopt 155 [i28, r62, l6, r60, f4];
  L90():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(i20, dx);
  L91():
    f5 = force? f4;
    ____ = ldf `[[<-` in base;
    r65 = dyn ____(l6, r60, f5);
    goto L18(i28, r65);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg e1:*, reg e2:V, reg is_call:cls, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg e3:*, reg e4:V, reg c6:L, reg c8:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r6:V, reg c11:L, reg c12:L, reg c13:V, reg c15:L, reg c17:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg e7:*, reg e8:V, reg c18:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg as_character:cls, reg r10:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg c19:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg c20:L, reg c21:V, reg c23:L, reg e11:*, reg e12:V, reg c24:L, reg e14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg domain:*, reg domain1:V, reg c25:V, reg r20:V, reg c26:L, reg c28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg c31:L, reg r22:V, reg domain2:*, reg domain3:V, reg c32:L, reg r23:V, reg c33:L, reg c34:V, reg c36:L, reg c38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg c41:L, reg r25:V, reg domain4:*, reg domain5:V, reg is_na:cls, reg r26:V, reg c42:L, reg c43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r29:V, reg r30:V, reg e15:*, reg e16:V, reg names:cls, reg r31:V, reg c45:V, reg r32:V, reg c46:L, reg e17:*, reg e18:V, reg c47:L, reg e20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg _notin_:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg e21:*, reg e22:V, reg names1:cls, reg r35:V, reg p2:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r37:V, reg r38:V, reg c48:cls, reg r39:V, reg p3:p(V +), reg r41:V, reg __3:cls, reg r42:V, reg asCall:*, reg asCall1:V, reg c49:L, reg suppress:*, reg suppress1:V, reg r43:V, reg c50:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r44:V, reg r45:V, reg strings:*, reg strings1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r46:V, reg r47:V, reg e23:*, reg e24:V, reg as_character1:cls, reg r48:V, reg c51:L, reg r50:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __4:cls, reg r51:V, reg c52:cls, reg r52:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r53:V, reg r54:V, reg e25:*, reg e26:V, reg c53:L, reg e28:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r55:V, reg as_character2:cls, reg r56:V, reg r57:V, reg c54:L, reg match_call:cls, reg gettextf:*, reg gettextf1:V, reg p4:p(V +), reg e29:*, reg e30:V, reg p5:p(V +), reg r60:V, reg e31:*, reg e32:V, reg c55:L, reg e34:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __6:cls, reg r61:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r62:V, reg r63:V, reg e35:*, reg e36:V, reg r64:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c56:L, reg x:V, reg find_strings2:cls, reg e37:*, reg e38:V, reg c57:L, reg e40:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg i5:*, reg i6:V, reg __7:cls, reg r65:V, reg p6:p(V +), reg suppress2:*, reg suppress3:V, reg p7:p(V +), reg r68:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r69:V, reg r70:V, reg e41:*, reg e42:V, reg is_recursive:cls, reg r71:V, reg c58:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r72:V, reg r73:V, reg e43:*, reg e44:V, reg r74:I, reg s1:V, reg l1:I, reg i7:I, reg i8:I, reg i9:I, reg c59:L, reg x1:V, reg Recall:cls, reg e45:*, reg e46:V, reg c60:L, reg e48:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg i12:*, reg i13:V, reg __8:cls, reg r75:V, reg p8:p(V +), reg r77:V |
    mkenv;
    st e = e;
    r = clos inner2044402890;
    st find_strings2 = r;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L0(r2):
    c = `as.logical`(r2);
    if c then L39() else L1(c);
  L35():
    e1 = ld e;
    check L37() else D0();
  L36():
    r1 = dyn base(<sym e>);
    goto L0(r1);
  D0():
    deopt 5 [e1];
  L1(c2):
    c15 = `as.logical`(c2);
    if c15 then L47() else L4(c15);
  L37():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r3 = dyn is_call(e2);
    check L38() else D1();
  L39():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  D1():
    deopt 8 [r3];
  L2(c5, r5):
    c12 = `as.logical`(r5);
    c13 = `&&`(c5, c12);
    goto L1(c13);
  L4(c17):
    c23 = `as.logical`(c17);
    if c23 then L51() else L5();
  L38():
    goto L0(r3);
  L40():
    e3 = ld e;
    check L42() else D2();
  L41():
    r4 = dyn base1(<lang `[[`(e, 1)>);
    goto L2(c, r4);
  L47():
    _in_ = ldf `%in%`;
    check L48() else D3();
  D2():
    deopt 10 [c, e3];
  D3():
    deopt 18 [c15];
  L5():
    sym15 = ldf `is.recursive`;
    base15 = ldf `is.recursive` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L123() else L124();
  L42():
    e4 = force? e3;
    checkMissing(e4);
    c6 = `is.object`(e4);
    if c6 then L43() else L44(c, e4);
  L48():
    p = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r8):
      return r8;
    L2():
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      c18 = `is.object`(e8);
      if c18 then L4() else L5(e8);
    L3():
      r7 = dyn base2(<lang `[[`(e, 1)>);
      goto L0(r7);
    L1(dx3):
      as_character = ldf `as.character` in base;
      r10 = dyn as_character(dx3);
      goto L0(r10);
    L4():
      dr2 = tryDispatchBuiltin.1("[[", e8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(e10):
      __1 = ldf `[[` in base;
      r9 = dyn __1(e10, 1);
      goto L1(r9);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c19 = ldf c in base;
      r14 = dyn c19("warning", "stop", "message", "packageStartupMessage", "gettext", "gettextf");
      goto L0(r14);
    L2():
      r12 = dyn base3("warning", "stop", "message", "packageStartupMessage", "gettext", "gettextf");
      goto L0(r12);
    };
    r16 = dyn _in_(p, p1);
    check L49() else D4();
  L51():
    e11 = ld e;
    check L52() else D5();
  D4():
    deopt 21 [c15, r16];
  D5():
    deopt 23 [e11];
  L3(c10, dx1):
    c11 = `is.symbol`(dx1);
    goto L2(c10, c11);
  L30(r70):
    c58 = `as.logical`(r70);
    if c58 then L127() else L31();
  L43():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(c, dr);
  L44(c8, e6):
    __ = ldf `[[` in base;
    r6 = dyn __(e6, 1);
    goto L3(c8, r6);
  L49():
    c20 = `as.logical`(r16);
    c21 = `&&`(c15, c20);
    goto L4(c21);
  L52():
    e12 = force? e11;
    checkMissing(e12);
    c24 = `is.object`(e12);
    if c24 then L53() else L54(e12);
  L123():
    e41 = ld e;
    check L125() else D29();
  L124():
    r69 = dyn base15(<sym e>);
    goto L30(r69);
  D29():
    deopt 133 [e41];
  L6(dx5):
    st domain = dx5;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L31():
    invisible.0();
    popenv;
    return NULL;
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(c, dx);
  L53():
    dr4 = tryDispatchBuiltin.1("[[", e12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(dr4);
  L54(e14):
    __2 = ldf `[[` in base;
    r17 = dyn __2(e14, "domain");
    goto L6(r17);
  L125():
    e42 = force? e41;
    checkMissing(e42);
    is_recursive = ldf `is.recursive` in base;
    r71 = dyn is_recursive(e42);
    check L126() else D30();
  L127():
    sym16 = ldf seq_along;
    base16 = ldf seq_along in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L128() else L129();
  D30():
    deopt 136 [r71];
  L7(r19):
    r20 = `!`(r19);
    c26 = `as.logical`(r20);
    if c26 then L59() else L8(c26);
  L32(r73):
    s1 = toForSeq(r73);
    l1 = length(s1);
    i7 = 0;
    goto L33(i7);
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L56():
    domain = ld domain;
    check L58() else D6();
  L57():
    r18 = dyn base4(<sym domain>);
    goto L7(r18);
  L126():
    goto L30(r71);
  L128():
    e43 = ld e;
    check L130() else D31();
  L129():
    r72 = dyn base16(<sym e>);
    goto L32(r72);
  D6():
    deopt 30 [domain];
  D31():
    deopt 138 [e43];
  L8(c28):
    c36 = `as.logical`(c28);
    if c36 then L64() else L10(c36);
  L33(i8):
    i9 = `+`.1(i8, 1);
    c59 = `<`.1(l1, i9);
    if c59 then L131() else L34();
  L58():
    domain1 = force? domain;
    checkMissing(domain1);
    c25 = `==`(domain1, NULL);
    goto L7(c25);
  L59():
    sym5 = ldf `is.name`;
    base5 = ldf `is.name` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L130():
    e44 = force? e43;
    checkMissing(e44);
    r74 = seq_along(e44);
    goto L32(r74);
  L9(c31, r22):
    r23 = `!`(r22);
    c33 = `as.logical`(r23);
    c34 = `&&`(c31, c33);
    goto L8(c34);
  L10(c38):
    st suppress = c38;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L34():
    x1 = `[[`(s1, i9, NULL, TRUE);
    st i = x1;
    Recall = ldf Recall;
    check L132() else D32();
  L60():
    domain2 = ld domain;
    check L62() else D7();
  L61():
    r21 = dyn base5(<sym domain>);
    goto L9(c26, r21);
  L64():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L131():
    invisible.0();
    popenv;
    return i9;
  D7():
    deopt 35 [c26, domain2];
  D32():
    deopt 142 [i9];
  L11(c41, r25):
    c42 = `as.logical`(r25);
    c43 = `&&`(c41, c42);
    goto L10(c43);
  L12(r28):
    r32 = `!`(r28);
    c46 = `as.logical`(r32);
    if c46 then L76() else L14();
  L62():
    domain3 = force? domain2;
    checkMissing(domain3);
    c32 = `is.symbol`(domain3);
    goto L9(c26, c32);
  L65():
    domain4 = ld domain;
    check L67() else D8();
  L66():
    r24 = dyn base6(<sym domain>);
    goto L11(c36, r24);
  L70():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  L71():
    r27 = dyn base7(<lang names(e)>);
    goto L12(r27);
  L132():
    p8 = prom<V +>{
      e45 = ld e;
      e46 = force? e45;
      checkMissing(e46);
      c60 = `is.object`(e46);
      if c60 then L1() else L2(e46);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", e46);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(e48):
      i12 = ld i;
      i13 = force? i12;
      __8 = ldf `[[` in base;
      r75 = dyn __8(e48, i13);
      goto L0(r75);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    r77 = dyn Recall(p8);
    check L133() else D33();
  D8():
    deopt 42 [c36, domain4];
  D33():
    deopt 144 [i9, r77];
  L13(r30):
    c45 = `==`(r30, NULL);
    goto L12(c45);
  L14():
    goto L16();
  L16():
    asCall = ld asCall;
    check L84() else D15();
  L67():
    domain5 = force? domain4;
    checkMissing(domain5);
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(domain5);
    check L68() else D9();
  L72():
    e15 = ld e;
    check L74() else D10();
  L73():
    r29 = dyn base8(<sym e>);
    goto L13(r29);
  L76():
    e17 = ld e;
    check L77() else D12();
  L133():
    goto L33(i9);
  D9():
    deopt 45 [c36, r26];
  D10():
    deopt 51 [e15];
  D12():
    deopt 57 [e17];
  D15():
    deopt 68 [asCall];
  L68():
    goto L11(c36, r26);
  L74():
    e16 = force? e15;
    checkMissing(e16);
    names = ldf names in base;
    r31 = dyn names(e16);
    check L75() else D11();
  L77():
    e18 = force? e17;
    checkMissing(e18);
    c47 = `is.object`(e18);
    if c47 then L78() else L79(e18);
  L84():
    asCall1 = force? asCall;
    checkMissing(asCall1);
    c49 = `as.logical`(asCall1);
    if c49 then L85() else L17();
  D11():
    deopt 54 [r31];
  L15(dx7):
    st e = dx7;
    goto L16();
  L17():
    sym13 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L101() else L102();
  L75():
    goto L13(r31);
  L78():
    dr6 = tryDispatchBuiltin.1("[", e18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79(dr6);
  L79(e20):
    _notin_ = ldf `%notin%`;
    check L81() else D13();
  L85():
    suppress = ld suppress;
    check L86() else D16();
  D13():
    deopt 60 [e20];
  D16():
    deopt 70 [suppress];
  L22(r54):
    r57 = `==`(r54, "gettextf");
    c54 = `as.logical`(r57);
    if c54 then L108() else L24();
  L80():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L81():
    p2 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      e21 = ld e;
      e22 = force? e21;
      checkMissing(e22);
      names1 = ldf names in base;
      r35 = dyn names1(e22);
      goto L0(r35);
    L2():
      r33 = dyn base9(<sym e>);
      goto L0(r33);
    };
    p3 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      c48 = ldf c in base;
      r39 = dyn c48("call.", "immediate.", "domain");
      goto L0(r39);
    L2():
      r37 = dyn base10("call.", "immediate.", "domain");
      goto L0(r37);
    };
    r41 = dyn _notin_(p2, p3);
    check L82() else D14();
  L86():
    suppress1 = force? suppress;
    checkMissing(suppress1);
    r43 = `!`(suppress1);
    c50 = `as.logical`(r43);
    if c50 then L87() else L18();
  L101():
    e25 = ld e;
    check L103() else D21();
  L102():
    r53 = dyn base13(<lang `[[`(e, 1)>);
    goto L22(r53);
  D14():
    deopt 63 [e20, r41];
  D21():
    deopt 95 [e25];
  L18():
    invisible.0();
    popenv;
    return NULL;
  L24():
    goto L26();
  L26():
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L116() else L117();
  L82():
    __3 = ldf `[` in base;
    r42 = dyn __3(e20, r41);
    goto L15(r42);
  L87():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L88() else L89();
  L103():
    e26 = force? e25;
    checkMissing(e26);
    c53 = `is.object`(e26);
    if c53 then L104() else L105(e26);
  L108():
    match_call = ldf `match.call`;
    check L109() else D23();
  D23():
    deopt 105 [];
  L19(r45):
    sst strings = r45;
    invisible.0();
    popenv;
    return r45;
  L23(dx12):
    as_character2 = ldf `as.character` in base;
    r56 = dyn as_character2(dx12);
    check L107() else D22();
  L27(r63):
    s = toForSeq(r63);
    l = length(s);
    i = 0;
    goto L28(i);
  L88():
    strings = ld strings;
    check L90() else D17();
  L89():
    r44 = dyn base11(<sym strings>, <lang `[`(as.character(e), `-`(1))>);
    goto L19(r44);
  L104():
    dr10 = tryDispatchBuiltin.1("[[", e26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L106() else L105(dr10);
  L105(e28):
    __5 = ldf `[[` in base;
    r55 = dyn __5(e28, 1);
    goto L23(r55);
  L109():
    p4 = prom<V +>{
      gettextf = ld gettextf;
      gettextf1 = force? gettextf;
      checkMissing(gettextf1);
      return gettextf1;
    };
    p5 = prom<V +>{
      e29 = ld e;
      e30 = force? e29;
      checkMissing(e30);
      return e30;
    };
    r60 = dyn match_call(p4, p5);
    check L110() else D24();
  L116():
    e35 = ld e;
    check L118() else D26();
  L117():
    r62 = dyn base14(<sym e>);
    goto L27(r62);
  D17():
    deopt 75 [strings];
  D22():
    deopt 101 [r56];
  D24():
    deopt 108 [r60];
  D26():
    deopt 119 [e35];
  L28(i1):
    i2 = `+`.1(i1, 1);
    c56 = `<`.1(l, i2);
    if c56 then L119() else L29();
  L90():
    strings1 = force? strings;
    checkMissing(strings1);
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L91() else L92();
  L106():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L23(dx11);
  L107():
    goto L22(r56);
  L110():
    st e = r60;
    e31 = ld e;
    check L111() else D25();
  L118():
    e36 = force? e35;
    checkMissing(e36);
    r64 = seq_along(e36);
    goto L27(r64);
  D25():
    deopt 110 [e31];
  L20(r47):
    c51 = `is.object`(r47);
    if c51 then L95() else L96(r47);
  L29():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    find_strings2 = ldf find_strings2;
    check L120() else D27();
  L91():
    e23 = ld e;
    check L93() else D18();
  L92():
    r46 = dyn base12(<sym e>);
    goto L20(r46);
  L111():
    e32 = force? e31;
    checkMissing(e32);
    c55 = `is.object`(e32);
    if c55 then L112() else L113(e32);
  L119():
    invisible.0();
    popenv;
    return i2;
  D18():
    deopt 79 [e23];
  D27():
    deopt 123 [i2];
  L21(dx10):
    c52 = ldf c in base;
    r52 = dyn c52(strings1, dx10);
    check L98() else D20();
  L25(dx14):
    st e = dx14;
    goto L26();
  L93():
    e24 = force? e23;
    checkMissing(e24);
    as_character1 = ldf `as.character` in base;
    r48 = dyn as_character1(e24);
    check L94() else D19();
  L95():
    dr8 = tryDispatchBuiltin.1("[", r47);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L97() else L96(dr8);
  L96(r50):
    __4 = ldf `[` in base;
    r51 = dyn __4(r50, -1);
    goto L21(r51);
  L112():
    dr12 = tryDispatchBuiltin.1("[", e32);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L114() else L113(dr12);
  L113(e34):
    __6 = ldf `[` in base;
    r61 = dyn __6(e34, "fmt");
    goto L25(r61);
  L120():
    p6 = prom<V +>{
      e37 = ld e;
      e38 = force? e37;
      checkMissing(e38);
      c57 = `is.object`(e38);
      if c57 then L1() else L2(e38);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", e38);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(e40):
      i5 = ld i;
      i6 = force? i5;
      __7 = ldf `[[` in base;
      r65 = dyn __7(e40, i6);
      goto L0(r65);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    p7 = prom<V +>{
      suppress2 = ld suppress;
      suppress3 = force? suppress2;
      checkMissing(suppress3);
      return suppress3;
    };
    r68 = dyn find_strings2(p6, p7);
    check L121() else D28();
  D19():
    deopt 82 [r48];
  D20():
    deopt 87 [r52];
  D28():
    deopt 126 [i2, r68];
  L94():
    goto L20(r48);
  L97():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx9);
  L98():
    goto L19(r52);
  L114():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L25(dx13);
  L121():
    goto L28(i2);
  }
}
fun inner2044402890(e, suppress) {
  (reg e:*, reg suppress:*) -+> V { var e:*, var suppress:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg c1:L, reg suppress1:*, reg suppress2:V, reg r2:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg strings:*, reg strings1:V, reg e3:*, reg e4:V, reg c3:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg e5:*, reg e6:V, reg is_call:cls, reg r8:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg e7:*, reg e8:V, reg c5:L, reg e10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg c6:L, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg e11:*, reg e12:V, reg c8:L, reg e14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg as_character:cls, reg r15:V, reg _in_:cls, reg fname:*, reg fname1:V, reg p:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg c9:cls, reg r19:V, reg p1:p(V +), reg r21:V, reg c10:L, reg match_call:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg baseenv:cls, reg r24:V, reg c11:L, reg r26:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg fname2:*, reg fname3:V, reg __2:cls, reg r27:V, reg p2:p(V +), reg e15:*, reg e16:V, reg p3:p(V +), reg r30:V, reg e17:*, reg e18:V, reg c12:L, reg e20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r31:V, reg dx8:V, reg _in_1:cls, reg fname4:*, reg fname5:V, reg p4:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg c13:cls, reg r35:V, reg p5:p(V +), reg r37:V, reg c14:L, reg e21:*, reg e22:V, reg c15:L, reg e24:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __4:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg domain:*, reg domain1:V, reg c16:V, reg r41:V, reg c17:L, reg c19:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg c22:L, reg r43:V, reg domain2:*, reg domain3:V, reg c23:L, reg r44:V, reg c24:L, reg c25:V, reg c27:L, reg c29:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg c32:L, reg r46:V, reg domain4:*, reg domain5:V, reg is_na:cls, reg r47:V, reg c33:L, reg c34:V, reg fname6:*, reg fname7:V, reg r48:V, reg c36:L, reg match_call1:cls, reg gettextf:*, reg gettextf1:V, reg p6:p(V +), reg e25:*, reg e26:V, reg p7:p(V +), reg r51:V, reg e27:*, reg e28:V, reg c37:L, reg e30:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r52:V, reg dx13:V, reg fname8:*, reg fname9:V, reg r53:V, reg c38:L, reg c40:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg c43:L, reg r55:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg c46:L, reg r57:V, reg e31:*, reg e32:V, reg names:cls, reg r58:V, reg c47:V, reg r59:V, reg c48:L, reg c49:V, reg c51:L, reg e33:*, reg e34:V, reg c52:L, reg e36:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r60:V, reg e39:V, reg r61:V, reg e40:*, reg e41:V, reg names1:cls, reg r62:V, reg r63:V, reg r64:V, reg __6:cls, reg r65:V, reg fname10:*, reg fname11:V, reg r66:V, reg c53:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg r69:V, reg e42:*, reg e43:V, reg r70:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c54:L, reg x:V, reg find_strings2:cls, reg e44:*, reg e45:V, reg c55:L, reg e47:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg i5:*, reg i6:V, reg __7:cls, reg r71:V, reg p8:p(V +), reg suppress3:*, reg suppress4:V, reg p9:p(V +), reg r74:V |
    mkenv;
    st e = e;
    st suppress = suppress;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L38() else L1();
  L35():
    e1 = ld e;
    check L37() else D0();
  L36():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 1 [e1];
  L1():
    sym2 = ldf `is.call`;
    base2 = ldf `is.call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L37():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.character`(e2);
    goto L0(c);
  L38():
    suppress1 = ld suppress;
    check L39() else D1();
  D1():
    deopt 4 [suppress1];
  L4(r7):
    c4 = `as.logical`(r7);
    if c4 then L52() else L5();
  L39():
    suppress2 = force? suppress1;
    checkMissing(suppress2);
    r2 = `!`(suppress2);
    c2 = `as.logical`(r2);
    if c2 then L40() else L2();
  L48():
    e5 = ld e;
    check L50() else D5();
  L49():
    r6 = dyn base2(<sym e>);
    goto L4(r6);
  D5():
    deopt 22 [e5];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L5():
    invisible.0();
    popenv;
    return NULL;
  L40():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L50():
    e6 = force? e5;
    checkMissing(e6);
    is_call = ldf `is.call` in base;
    r8 = dyn is_call(e6);
    check L51() else D6();
  L52():
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  D6():
    deopt 25 [r8];
  L3(r4):
    sst strings = r4;
    invisible.0();
    popenv;
    return r4;
  L6(r10):
    c7 = `as.logical`(r10);
    if c7 then L59() else L8();
  L41():
    strings = ld strings;
    check L43() else D2();
  L42():
    r3 = dyn base1(<sym strings>, <sym e>);
    goto L3(r3);
  L51():
    goto L4(r8);
  L53():
    e7 = ld e;
    check L55() else D7();
  L54():
    r9 = dyn base3(<lang `[[`(e, 1)>);
    goto L6(r9);
  D2():
    deopt 9 [strings];
  D7():
    deopt 27 [e7];
  L8():
    goto L31();
  L31():
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L132() else L133();
  L43():
    strings1 = force? strings;
    checkMissing(strings1);
    e3 = ld e;
    check L44() else D3();
  L55():
    e8 = force? e7;
    checkMissing(e8);
    c5 = `is.object`(e8);
    if c5 then L56() else L57(e8);
  L59():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  D3():
    deopt 11 [e3];
  L7(dx1):
    c6 = `is.symbol`(dx1);
    goto L6(c6);
  L9(r13):
    st fname = r13;
    _in_ = ldf `%in%`;
    check L67() else D10();
  L32(r69):
    s = toForSeq(r69);
    l = length(s);
    i = 0;
    goto L33(i);
  L44():
    e4 = force? e3;
    checkMissing(e4);
    c3 = ldf c in base;
    r5 = dyn c3(strings1, e4);
    check L45() else D4();
  L56():
    dr = tryDispatchBuiltin.1("[[", e8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L58() else L57(dr);
  L57(e10):
    __ = ldf `[[` in base;
    r11 = dyn __(e10, 1);
    goto L7(r11);
  L60():
    e11 = ld e;
    check L62() else D8();
  L61():
    r12 = dyn base4(<lang `[[`(e, 1)>);
    goto L9(r12);
  L132():
    e42 = ld e;
    check L134() else D33();
  L133():
    r68 = dyn base14(<sym e>);
    goto L32(r68);
  D4():
    deopt 14 [r5];
  D8():
    deopt 35 [e11];
  D10():
    deopt 44 [];
  D33():
    deopt 147 [e42];
  L33(i1):
    i2 = `+`.1(i1, 1);
    c54 = `<`.1(l, i2);
    if c54 then L135() else L34();
  L45():
    goto L3(r5);
  L58():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L62():
    e12 = force? e11;
    checkMissing(e12);
    c8 = `is.object`(e12);
    if c8 then L63() else L64(e12);
  L67():
    p = prom<V +>{
      fname = ld fname;
      fname1 = force? fname;
      checkMissing(fname1);
      return fname1;
    };
    p1 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c9 = ldf c in base;
      r19 = dyn c9("warningCondition", "errorCondition");
      goto L0(r19);
    L2():
      r17 = dyn base5("warningCondition", "errorCondition");
      goto L0(r17);
    };
    r21 = dyn _in_(p, p1);
    check L68() else D11();
  L134():
    e43 = force? e42;
    checkMissing(e43);
    r70 = seq_along(e43);
    goto L32(r70);
  D11():
    deopt 47 [r21];
  L10(dx3):
    as_character = ldf `as.character` in base;
    r15 = dyn as_character(dx3);
    check L66() else D9();
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    find_strings2 = ldf find_strings2;
    check L136() else D34();
  L63():
    dr2 = tryDispatchBuiltin.1("[[", e12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(dr2);
  L64(e14):
    __1 = ldf `[[` in base;
    r14 = dyn __1(e14, 1);
    goto L10(r14);
  L68():
    c10 = `as.logical`(r21);
    if c10 then L69() else L11();
  L135():
    invisible.0();
    popenv;
    return i2;
  D9():
    deopt 41 [r15];
  D34():
    deopt 151 [i2];
  L11():
    _in_1 = ldf `%in%`;
    check L77() else D15();
  L13(dx8):
    goto L31();
  L65():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L66():
    goto L9(r15);
  L69():
    match_call = ldf `match.call`;
    check L70() else D12();
  L136():
    p8 = prom<V +>{
      e44 = ld e;
      e45 = force? e44;
      checkMissing(e45);
      c55 = `is.object`(e45);
      if c55 then L1() else L2(e45);
    L0(dx18):
      return dx18;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", e45);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(e47):
      i5 = ld i;
      i6 = force? i5;
      __7 = ldf `[[` in base;
      r71 = dyn __7(e47, i6);
      goto L0(r71);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx17);
    };
    p9 = prom<V +>{
      suppress3 = ld suppress;
      suppress4 = force? suppress3;
      checkMissing(suppress4);
      return suppress4;
    };
    r74 = dyn find_strings2(p8, p9);
    check L137() else D35();
  D12():
    deopt 49 [];
  D15():
    deopt 61 [];
  D35():
    deopt 154 [i2, r74];
  L70():
    p2 = prom<V +>{
      sym6 = ldf baseenv;
      base6 = ldf baseenv in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r23):
      c11 = `is.object`(r23);
      if c11 then L4() else L5(r23);
    L2():
      baseenv = ldf baseenv in base;
      r24 = dyn baseenv();
      goto L0(r24);
    L3():
      r22 = dyn base6();
      goto L0(r22);
    L1(dx5):
      return dx5;
    L4():
      dr4 = tryDispatchBuiltin.1("[[", r23);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(r26):
      fname2 = ld fname;
      fname3 = force? fname2;
      __2 = ldf `[[` in base;
      r27 = dyn __2(r26, fname3);
      goto L1(r27);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    p3 = prom<V +>{
      e15 = ld e;
      e16 = force? e15;
      checkMissing(e16);
      return e16;
    };
    r30 = dyn match_call(p2, p3);
    check L71() else D13();
  L77():
    p4 = prom<V +>{
      fname4 = ld fname;
      fname5 = force? fname4;
      checkMissing(fname5);
      return fname5;
    };
    p5 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c13 = ldf c in base;
      r35 = dyn c13("gettext", "gettextf");
      goto L0(r35);
    L2():
      r33 = dyn base7("gettext", "gettextf");
      goto L0(r33);
    };
    r37 = dyn _in_1(p4, p5);
    check L78() else D16();
  L137():
    goto L33(i2);
  D13():
    deopt 52 [r30];
  D16():
    deopt 64 [r37];
  L71():
    st e = r30;
    e17 = ld e;
    check L72() else D14();
  L78():
    c14 = `as.logical`(r37);
    if c14 then L79() else L14();
  D14():
    deopt 54 [e17];
  L14():
    fname10 = ld fname;
    check L127() else D32();
  L72():
    e18 = force? e17;
    checkMissing(e18);
    c12 = `is.object`(e18);
    if c12 then L73() else L74(e18);
  L79():
    e21 = ld e;
    check L80() else D17();
  D17():
    deopt 65 [e21];
  D32():
    deopt 135 [fname10];
  L12(dx7):
    st e = dx7;
    goto L13(dx7);
  L73():
    dr6 = tryDispatchBuiltin.1("[", e18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(dr6);
  L74(e20):
    __3 = ldf `[` in base;
    r31 = dyn __3(e20, "message");
    goto L12(r31);
  L80():
    e22 = force? e21;
    checkMissing(e22);
    c15 = `is.object`(e22);
    if c15 then L81() else L82(e22);
  L127():
    fname11 = force? fname10;
    checkMissing(fname11);
    r66 = `==`(fname11, "ngettext");
    c53 = `as.logical`(r66);
    if c53 then L128() else L30();
  L15(dx10):
    st domain = dx10;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L30():
    goto L13(NULL);
  L75():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L81():
    dr8 = tryDispatchBuiltin.1("[[", e22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L83() else L82(dr8);
  L82(e24):
    __4 = ldf `[[` in base;
    r38 = dyn __4(e24, "domain");
    goto L15(r38);
  L128():
    popenv;
    return NULL;
  L16(r40):
    r41 = `!`(r40);
    c17 = `as.logical`(r41);
    if c17 then L87() else L17(c17);
  L83():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx9);
  L84():
    domain = ld domain;
    check L86() else D18();
  L85():
    r39 = dyn base8(<sym domain>);
    goto L16(r39);
  D18():
    deopt 72 [domain];
  L17(c19):
    c27 = `as.logical`(c19);
    if c27 then L92() else L19(c27);
  L86():
    domain1 = force? domain;
    checkMissing(domain1);
    c16 = `==`(domain1, NULL);
    goto L16(c16);
  L87():
    sym9 = ldf `is.name`;
    base9 = ldf `is.name` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L88() else L89();
  L18(c22, r43):
    r44 = `!`(r43);
    c24 = `as.logical`(r44);
    c25 = `&&`(c22, c24);
    goto L17(c25);
  L19(c29):
    st suppress = c29;
    fname6 = ld fname;
    check L98() else D22();
  L88():
    domain2 = ld domain;
    check L90() else D19();
  L89():
    r42 = dyn base9(<sym domain>);
    goto L18(c17, r42);
  L92():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L93() else L94();
  D19():
    deopt 77 [c17, domain2];
  D22():
    deopt 90 [fname6];
  L20(c32, r46):
    c33 = `as.logical`(r46);
    c34 = `&&`(c32, c33);
    goto L19(c34);
  L90():
    domain3 = force? domain2;
    checkMissing(domain3);
    c23 = `is.symbol`(domain3);
    goto L18(c17, c23);
  L93():
    domain4 = ld domain;
    check L95() else D20();
  L94():
    r45 = dyn base10(<sym domain>);
    goto L20(c27, r45);
  L98():
    fname7 = force? fname6;
    checkMissing(fname7);
    r48 = `==`(fname7, "gettextf");
    c36 = `as.logical`(r48);
    if c36 then L99() else L21();
  D20():
    deopt 84 [c27, domain4];
  L21():
    fname8 = ld fname;
    check L107() else D26();
  L23(dx13):
    goto L13(dx13);
  L95():
    domain5 = force? domain4;
    checkMissing(domain5);
    is_na = ldf `is.na` in base;
    r47 = dyn is_na(domain5);
    check L96() else D21();
  L99():
    match_call1 = ldf `match.call`;
    check L100() else D23();
  D21():
    deopt 87 [c27, r47];
  D23():
    deopt 95 [];
  D26():
    deopt 106 [fname8];
  L96():
    goto L20(c27, r47);
  L100():
    p6 = prom<V +>{
      gettextf = ld gettextf;
      gettextf1 = force? gettextf;
      checkMissing(gettextf1);
      return gettextf1;
    };
    p7 = prom<V +>{
      e25 = ld e;
      e26 = force? e25;
      checkMissing(e26);
      return e26;
    };
    r51 = dyn match_call1(p6, p7);
    check L101() else D24();
  L107():
    fname9 = force? fname8;
    checkMissing(fname9);
    r53 = `==`(fname9, "gettext");
    c38 = `as.logical`(r53);
    if c38 then L108() else L24(c38);
  D24():
    deopt 98 [r51];
  L24(c40):
    c51 = `as.logical`(c40);
    if c51 then L116() else L27();
  L101():
    st e = r51;
    e27 = ld e;
    check L102() else D25();
  L108():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L109() else L110();
  D25():
    deopt 100 [e27];
  L25(c43, r55):
    r59 = `!`(r55);
    c48 = `as.logical`(r59);
    c49 = `&&`(c43, c48);
    goto L24(c49);
  L27():
    goto L23(NULL);
  L102():
    e28 = force? e27;
    checkMissing(e28);
    c37 = `is.object`(e28);
    if c37 then L103() else L104(e28);
  L109():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L111() else L112();
  L110():
    r54 = dyn base11(<lang names(e)>);
    goto L25(c38, r54);
  L116():
    e33 = ld e;
    check L117() else D29();
  D29():
    deopt 120 [e33];
  L22(dx12):
    st e = dx12;
    goto L23(dx12);
  L26(c46, r57):
    c47 = `==`(r57, NULL);
    goto L25(c46, c47);
  L103():
    dr10 = tryDispatchBuiltin.1("[", e28);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L105() else L104(dr10);
  L104(e30):
    __5 = ldf `[` in base;
    r52 = dyn __5(e30, "fmt");
    goto L22(r52);
  L111():
    e31 = ld e;
    check L113() else D27();
  L112():
    r56 = dyn base12(<sym e>);
    goto L26(c38, r56);
  L117():
    e34 = force? e33;
    checkMissing(e34);
    c52 = `is.object`(e34);
    if c52 then L118() else L119(e34);
  D27():
    deopt 113 [c38, e31];
  L28(dx15):
    st e = dx15;
    goto L23(dx15);
  L105():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L22(dx11);
  L113():
    e32 = force? e31;
    checkMissing(e32);
    names = ldf names in base;
    r58 = dyn names(e32);
    check L114() else D28();
  L118():
    dr12 = tryDispatchBuiltin.1("[", e34);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L120() else L119(dr12);
  L119(e36):
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L121() else L122();
  D28():
    deopt 116 [c38, r58];
  L29(e39, r61):
    r63 = `==`(r61, "domain");
    r64 = `!`(r63);
    __6 = ldf `[` in base;
    r65 = dyn __6(e39, r64);
    goto L28(r65);
  L114():
    goto L26(c38, r58);
  L120():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L28(dx14);
  L121():
    e40 = ld e;
    check L123() else D30();
  L122():
    r60 = dyn base13(<sym e>);
    goto L29(e36, r60);
  D30():
    deopt 124 [e36, e40];
  L123():
    e41 = force? e40;
    checkMissing(e41);
    names1 = ldf names in base;
    r62 = dyn names1(e41);
    check L124() else D31();
  D31():
    deopt 127 [e36, r62];
  L124():
    goto L29(e36, r62);
  }
}