fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2799228952;
    st url_db_from_PDF_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2799228952(dir, recursive, files, verbose) {
  (reg dir:*, reg recursive:*, reg files:*, reg verbose:*) -+> V { var dir:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var files:*, reg files_isMissing:L, reg files_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg files1:*, reg files2:V, reg c:V, reg c1:L, reg list_files:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg recursive1:*, reg recursive2:V, reg p1:p(V +), reg r5:V, reg lapply:cls, reg files3:*, reg files4:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg r10:V, reg files5:*, reg files6:V, reg l:*, reg names__:cls, reg r11:V, reg Filter:cls, reg length:*, reg length1:V, reg p4:p(V +), reg urls:*, reg urls1:V, reg p5:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg urls2:*, reg urls3:V, reg length2:cls, reg r17:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg _file_path_relative_to_dir:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg urls4:*, reg urls5:V, reg names:cls, reg r22:V, reg p6:p(V +), reg dir3:*, reg dir4:V, reg p7:p(V +), reg r25:V, reg lengths:cls, reg urls6:*, reg urls7:V, reg p8:p(V +), reg r27:V, reg rep_int:cls, reg r28:V, reg unlist:cls, reg urls8:*, reg urls9:V, reg p9:p(V +), reg r30:V, reg url_db:cls, reg urls10:*, reg urls11:V, reg p10:p(V +), reg parents:*, reg parents1:V, reg p11:p(V +), reg r34:V |
    mkenv;
    st dir = dir;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    files_isMissing = missing.0(files);
    if files_isMissing then L1(NULL) else L1(files);
  L1(files_orDefault):
    st files = files_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2(FALSE) else L2(verbose);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
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
    st parents = r;
    st urls = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L3(r2):
    c1 = `as.logical`(r2);
    if c1 then L15() else L4();
  L12():
    files1 = ld files;
    check L14() else D2();
  L13():
    r1 = dyn base(<sym files>);
    goto L3(r1);
  D2():
    deopt 6 [files1];
  L4():
    goto L5();
  L5():
    lapply = ldf lapply;
    check L19() else D5();
  L14():
    files2 = force? files1;
    checkMissing(files2);
    c = `==`(files2, NULL);
    goto L3(c);
  L15():
    list_files = ldf `list.files`;
    check L16() else D3();
  D3():
    deopt 10 [];
  D5():
    deopt 23 [];
  L16():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r5 = dyn list_files[, pattern, `full.names`, recursive](p, "[.]pdf$", TRUE, p1);
    check L17() else D4();
  L19():
    p2 = prom<V +>{
      files3 = ld files;
      files4 = force? files3;
      checkMissing(files4);
      return files4;
    };
    p3 = prom<V +>{
      r8 = clos inner1384373858;
      return r8;
    };
    r10 = dyn lapply(p2, p3);
    check L20() else D6();
  D4():
    deopt 18 [r5];
  D6():
    deopt 26 [r10];
  L17():
    st files = r5;
    goto L5();
  L20():
    st urls = r10;
    files5 = ld files;
    check L21() else D7();
  D7():
    deopt 28 [files5];
  L21():
    files6 = force? files5;
    checkMissing(files6);
    l = ld urls;
    names__ = ldf `names<-`;
    check L22() else D8();
  D8():
    deopt 31 [files6, l, files6];
  L22():
    r11 = dyn names__(l, NULL, files6);
    check L23() else D9();
  D9():
    deopt 33 [files6, r11];
  L23():
    st urls = r11;
    Filter = ldf Filter;
    check L24() else D10();
  D10():
    deopt 36 [];
  L24():
    p4 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p5 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    r14 = dyn Filter(p4, p5);
    check L25() else D11();
  D11():
    deopt 39 [r14];
  L25():
    st urls = r14;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L6(r16):
    c2 = `as.logical`(r16);
    if c2 then L30() else L7();
  L26():
    urls2 = ld urls;
    check L28() else D12();
  L27():
    r15 = dyn base1(<sym urls>);
    goto L6(r15);
  D12():
    deopt 43 [urls2];
  L7():
    goto L9();
  L9():
    url_db = ldf url_db;
    check L41() else D21();
  L28():
    urls3 = force? urls2;
    checkMissing(urls3);
    length2 = ldf length in base;
    r17 = dyn length2(urls3);
    check L29() else D13();
  L30():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D13():
    deopt 46 [r17];
  D21():
    deopt 71 [];
  L8(r19):
    st parents = r19;
    unlist = ldf unlist;
    check L38() else D19();
  L29():
    goto L6(r17);
  L31():
    _file_path_relative_to_dir = ldf `.file_path_relative_to_dir`;
    check L33() else D14();
  L32():
    r18 = dyn base2(<lang .file_path_relative_to_dir(names(urls), dir)>, <lang lengths(urls)>);
    goto L8(r18);
  L41():
    p10 = prom<V +>{
      urls10 = ld urls;
      urls11 = force? urls10;
      checkMissing(urls11);
      return urls11;
    };
    p11 = prom<V +>{
      parents = ld parents;
      parents1 = force? parents;
      checkMissing(parents1);
      return parents1;
    };
    r34 = dyn url_db(p10, p11);
    check L42() else D22();
  D14():
    deopt 50 [];
  D19():
    deopt 62 [];
  D22():
    deopt 74 [r34];
  L33():
    p6 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      urls4 = ld urls;
      urls5 = force? urls4;
      checkMissing(urls5);
      names = ldf names in base;
      r22 = dyn names(urls5);
      goto L0(r22);
    L2():
      r20 = dyn base3(<sym urls>);
      goto L0(r20);
    };
    p7 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r25 = dyn _file_path_relative_to_dir(p6, p7);
    check L34() else D15();
  L38():
    p9 = prom<V +>{
      urls8 = ld urls;
      urls9 = force? urls8;
      checkMissing(urls9);
      return urls9;
    };
    r30 = dyn unlist[, `use.names`](p9, FALSE);
    check L39() else D20();
  L42():
    popenv;
    return r34;
  D15():
    deopt 53 [r25];
  D20():
    deopt 66 [r30];
  L34():
    lengths = ldf lengths;
    check L35() else D16();
  L39():
    st urls = r30;
    goto L9();
  D16():
    deopt 55 [];
  L35():
    p8 = prom<V +>{
      urls6 = ld urls;
      urls7 = force? urls6;
      checkMissing(urls7);
      return urls7;
    };
    r27 = dyn lengths(p8);
    check L36() else D17();
  D17():
    deopt 57 [r27];
  L36():
    rep_int = ldf `rep.int` in base;
    r28 = dyn rep_int(r25, r27);
    check L37() else D18();
  D18():
    deopt 59 [r28];
  L37():
    goto L8(r28);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg _file_path_relative_to_dir:cls, reg f1:*, reg f2:V, reg p:p(V +), reg dir:*, reg dir1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg _get_urls_from_PDF_file:cls, reg f3:*, reg f4:V, reg p4:p(V +), reg r9:V |
    mkenv;
    st f = f;
    verbose = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose];
  L2():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    _get_urls_from_PDF_file = ldf `.get_urls_from_PDF_file`;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p3 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        _file_path_relative_to_dir = ldf `.file_path_relative_to_dir`;
        p = prom<V +>{
          f1 = ld f;
          f2 = force? f1;
          checkMissing(f2);
          return f2;
        };
        p1 = prom<V +>{
          dir = ld dir;
          dir1 = force? dir;
          checkMissing(dir1);
          return dir1;
        };
        r2 = dyn _file_path_relative_to_dir(p, p1);
        return r2;
      };
      r4 = dyn sprintf("processing %s", p2);
      return r4;
    };
    r6 = dyn message(p3);
    check L5() else D2();
  L7():
    p4 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r9 = dyn _get_urls_from_PDF_file(p4);
    check L8() else D4();
  D2():
    deopt 5 [r6];
  D4():
    deopt 11 [r9];
  L5():
    goto L1();
  L8():
    popenv;
    return r9;
  }
}