fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2045738975;
    st url_db_from_package_README_md = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2045738975(dir, installed) {
  (reg dir:*, reg installed:*) -+> V { var dir:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg character:cls, reg r:V, reg Filter:cls, reg file_exists:*, reg file_exists1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg installed1:*, reg installed2:V, reg r4:V, reg c:L, reg file_path:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r9:V, reg c1:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg c2:L, reg r14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg rfile:*, reg rfile1:V, reg is_na:cls, reg r18:V, reg r19:V, reg c3:L, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg c8:L, reg r21:V, reg Sys_which:cls, reg r22:V, reg nzchar:cls, reg r23:V, reg c9:L, reg c10:V, reg c12:L, reg _file_path_relative_to_dir:cls, reg rfile2:*, reg rfile3:V, reg p4:p(V +), reg dir5:*, reg dir6:V, reg p5:p(V +), reg r26:V, reg tempfile:cls, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg on_exit:cls, reg r30:V, reg _pandoc_md_for_CRAN:cls, reg rfile4:*, reg rfile5:V, reg p6:p(V +), reg tfile:*, reg tfile1:V, reg p7:p(V +), reg r33:V, reg out:*, reg out1:V, reg c13:L, reg out3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r34:V, reg r35:V, reg c14:L, reg _get_urls_from_HTML_file:cls, reg tfile2:*, reg tfile3:V, reg p8:p(V +), reg r37:V, reg r38:V, reg url_db:cls, reg urls:*, reg urls1:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg path:*, reg path1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg urls2:*, reg urls3:V, reg length:cls, reg r45:V, reg rep_int:cls, reg r46:V, reg p10:p(V +), reg r48:V |
    mkenv;
    st dir = dir;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    character = ldf character;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    r = dyn character();
    check L11() else D1();
  D1():
    deopt 2 [r];
  L11():
    st path = r;
    st urls = r;
    Filter = ldf Filter;
    check L12() else D2();
  D2():
    deopt 6 [];
  L12():
    p = prom<V +>{
      file_exists = ld `file.exists`;
      file_exists1 = force? file_exists;
      checkMissing(file_exists1);
      return file_exists1;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r3):
      return r3;
    L3():
      installed1 = ld installed;
      installed2 = force? installed1;
      checkMissing(installed2);
      r4 = `!`(installed2);
      c = `as.logical`(r4);
      if c then L5() else L1();
    L4():
      r2 = dyn base(<lang if(`!`(installed), file.path(dir, "inst", "README.md"))>, <lang file.path(dir, "README.md")>);
      goto L0(r2);
    L1():
      goto L2(NULL);
    L2(r7):
      file_path1 = ldf `file.path`;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r9 = dyn file_path1(p2, "README.md");
      c1 = ldf c in base;
      r10 = dyn c1(r7, r9);
      goto L0(r10);
    L5():
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r6 = dyn file_path(p1, "inst", "README.md");
      goto L2(r6);
    };
    r12 = dyn Filter(p, p3);
    check L13() else D3();
  D3():
    deopt 9 [r12];
  L13():
    c2 = `is.object`(r12);
    if c2 then L14() else L15(r12);
  L1(dx1):
    st rfile = dx1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L14():
    dr = tryDispatchBuiltin.1("[", r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r14):
    __ = ldf `[` in base;
    r15 = dyn __(r14, 1);
    goto L1(r15);
  L2(r17):
    r19 = `!`(r17);
    c3 = `as.logical`(r19);
    if c3 then L21() else L3(c3);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L17():
    rfile = ld rfile;
    check L19() else D4();
  L18():
    r16 = dyn base1(<sym rfile>);
    goto L2(r16);
  D4():
    deopt 16 [rfile];
  L3(c5):
    c12 = `as.logical`(c5);
    if c12 then L28() else L5();
  L19():
    rfile1 = force? rfile;
    checkMissing(rfile1);
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(rfile1);
    check L20() else D5();
  L21():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  D5():
    deopt 19 [r18];
  L4(c8, r21):
    c9 = `as.logical`(r21);
    c10 = `&&`(c8, c9);
    goto L3(c10);
  L5():
    goto L9();
  L9():
    url_db = ldf url_db;
    check L47() else D18();
  L20():
    goto L2(r18);
  L22():
    Sys_which = ldf `Sys.which`;
    check L24() else D6();
  L23():
    r20 = dyn base2(<lang Sys.which("pandoc")>);
    goto L4(c3, r20);
  L28():
    _file_path_relative_to_dir = ldf `.file_path_relative_to_dir`;
    check L29() else D9();
  D6():
    deopt 24 [c3];
  D9():
    deopt 31 [];
  D18():
    deopt 66 [];
  L24():
    r22 = dyn Sys_which("pandoc");
    check L25() else D7();
  L29():
    p4 = prom<V +>{
      rfile2 = ld rfile;
      rfile3 = force? rfile2;
      checkMissing(rfile3);
      return rfile3;
    };
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r26 = dyn _file_path_relative_to_dir(p4, p5);
    check L30() else D10();
  L47():
    p9 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    p10 = prom<V +>{
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r42):
      return r42;
    L2():
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r41 = dyn base4(<sym path>, <lang length(urls)>);
      goto L0(r41);
    L1(r44):
      rep_int = ldf `rep.int` in base;
      r46 = dyn rep_int(path1, r44);
      goto L0(r46);
    L4():
      urls2 = ld urls;
      urls3 = force? urls2;
      checkMissing(urls3);
      length = ldf length in base;
      r45 = dyn length(urls3);
      goto L1(r45);
    L5():
      r43 = dyn base5(<sym urls>);
      goto L1(r43);
    };
    r48 = dyn url_db(p9, p10);
    check L48() else D19();
  D7():
    deopt 26 [c3, r22];
  D10():
    deopt 34 [r26];
  D19():
    deopt 69 [r48];
  L25():
    nzchar = ldf nzchar in base;
    r23 = dyn nzchar(r22);
    check L26() else D8();
  L30():
    st path = r26;
    tempfile = ldf tempfile;
    check L31() else D11();
  L48():
    popenv;
    return r48;
  D8():
    deopt 28 [c3, r23];
  D11():
    deopt 37 [];
  L26():
    goto L4(c3, r23);
  L31():
    r27 = dyn tempfile[, fileext]("README", ".html");
    check L32() else D12();
  D12():
    deopt 41 [r27];
  L32():
    st tfile = r27;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L6():
    _pandoc_md_for_CRAN = ldf `.pandoc_md_for_CRAN`;
    check L35() else D13();
  L33():
    on_exit = ldf `on.exit` in base;
    r30 = dyn on_exit(<lang unlink(tfile)>);
    goto L6();
  L34():
    r28 = dyn base3(<lang unlink(tfile)>);
    goto L6();
  D13():
    deopt 47 [];
  L35():
    p6 = prom<V +>{
      rfile4 = ld rfile;
      rfile5 = force? rfile4;
      checkMissing(rfile5);
      return rfile5;
    };
    p7 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    r33 = dyn _pandoc_md_for_CRAN(p6, p7);
    check L36() else D14();
  D14():
    deopt 50 [r33];
  L36():
    st out = r33;
    out = ld out;
    check L37() else D15();
  D15():
    deopt 52 [out];
  L37():
    out1 = force? out;
    checkMissing(out1);
    c13 = `is.object`(out1);
    if c13 then L39() else L40(out1);
  L38(dx3):
    r35 = `!`(dx3);
    c14 = `as.logical`(r35);
    if c14 then L42() else L7();
  L39():
    dr2 = tryDispatchBuiltin.1("$", out1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(out3):
    r34 = `$`(out3, <sym status>);
    goto L38(r34);
  L7():
    goto L8(NULL);
  L8(r38):
    goto L9();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L38(dx2);
  L42():
    _get_urls_from_HTML_file = ldf `.get_urls_from_HTML_file`;
    check L43() else D16();
  D16():
    deopt 57 [];
  L43():
    p8 = prom<V +>{
      tfile2 = ld tfile;
      tfile3 = force? tfile2;
      checkMissing(tfile3);
      return tfile3;
    };
    r37 = dyn _get_urls_from_HTML_file(p8);
    check L44() else D17();
  D17():
    deopt 59 [r37];
  L44():
    st urls = r37;
    goto L8(r37);
  }
}