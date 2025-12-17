fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1968871651;
    st rtags = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1968871651(path, pattern, recursive, src, `keep.re`, ofile, append, verbose, type) {
  (reg path:*, reg pattern:*, reg recursive:*, reg src:*, reg keep_re:*, reg ofile:*, reg append:*, reg verbose:*, reg type:*) -+> V { var path:*, reg path_isMissing:L, reg path_orDefault:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var src:*, reg src_isMissing:L, reg src_orDefault:*, reg list_files:cls, reg path1:*, reg path2:V, reg p:p(V +), reg pattern1:*, reg pattern2:V, reg p1:p(V +), reg recursive1:*, reg recursive2:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), var `keep.re`:*, reg keep_re_isMissing:L, reg keep_re_orDefault:*, var ofile:*, reg ofile_isMissing:L, reg ofile_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r5:V, reg p4:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p5:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p6:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg ofile1:*, reg ofile2:V, reg nzchar:cls, reg r15:V, reg c1:L, reg c3:V, reg append1:*, reg append2:V, reg r16:V, reg c4:L, reg c5:V, reg c7:L, reg file_create:cls, reg ofile3:*, reg ofile4:V, reg p7:p(V +), reg r18:V, reg r19:V, reg c8:L, reg stop:cls, reg gettextf:cls, reg ofile5:*, reg ofile6:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg r24:V, reg type3:*, reg type4:V, reg r26:V, reg c9:L, reg write_ctags:*, reg write_ctags1:V, reg write_ctags2:V, reg write_etags:*, reg write_etags1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg missing:cls, reg r29:V, reg r30:V, reg c10:L, reg grep:cls, reg keep_re1:*, reg keep_re2:V, reg p10:p(V +), reg src1:*, reg src2:V, reg p11:p(V +), reg r33:V, reg src3:*, reg src4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x:V, reg verbose1:*, reg verbose2:V, reg c12:L, reg message:cls, reg gettextf1:cls, reg s1:*, reg s2:V, reg p12:p(V +), reg r36:V, reg p13:p(V +), reg r38:V, reg i7:I, reg tryCatch:cls, reg rtags_file:cls, reg s3:*, reg s4:V, reg p14:p(V +), reg ofile7:*, reg ofile8:V, reg p15:p(V +), reg write_fun:*, reg write_fun1:V, reg p16:p(V +), reg r43:V, reg p17:p(V +), reg r45:cls, reg p18:p(V +), reg r47:V, reg type5:*, reg type6:V, reg r48:V, reg c13:L, reg c15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg c18:L, reg r50:V, reg ofile9:*, reg ofile10:V, reg nzchar1:cls, reg r51:V, reg c19:L, reg c20:V, reg c22:L, reg readLines:cls, reg ofile11:*, reg ofile12:V, reg p19:p(V +), reg r53:V, reg writeLines:cls, reg sort:cls, reg tagLines:*, reg tagLines1:V, reg p20:p(V +), reg r55:V, reg p21:p(V +), reg ofile13:*, reg ofile14:V, reg p22:p(V +), reg r58:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r60:V, reg r61:V, reg invisible:cls, reg r62:V |
    mkenv;
    path_isMissing = missing.0(path);
    if path_isMissing then L0(".") else L0(path);
  L0(path_orDefault):
    st path = path_orDefault;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L1("\\.[RrSs]$") else L1(pattern);
  L1(pattern_orDefault):
    st pattern = pattern_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L2(FALSE) else L2(recursive);
  L2(recursive_orDefault):
    st recursive = recursive_orDefault;
    src_isMissing = missing.0(src);
    if src_isMissing then L3() else L4(src);
  L3():
    p3 = prom<V +>{
      list_files = ldf `list.files`;
      p = prom<V +>{
        path1 = ld path;
        path2 = force? path1;
        checkMissing(path2);
        return path2;
      };
      p1 = prom<V +>{
        pattern1 = ld pattern;
        pattern2 = force? pattern1;
        checkMissing(pattern2);
        return pattern2;
      };
      p2 = prom<V +>{
        recursive1 = ld recursive;
        recursive2 = force? recursive1;
        checkMissing(recursive2);
        return recursive2;
      };
      r3 = dyn list_files[path, pattern, `full.names`, recursive](p, p1, TRUE, p2);
      return r3;
    };
    goto L4(p3);
  L4(src_orDefault):
    st src = src_orDefault;
    keep_re_isMissing = missing.0(keep_re);
    if keep_re_isMissing then L5(NULL) else L5(keep_re);
  L5(keep_re_orDefault):
    st `keep.re` = keep_re_orDefault;
    ofile_isMissing = missing.0(ofile);
    if ofile_isMissing then L6("") else L6(ofile);
  L6(ofile_orDefault):
    st ofile = ofile_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L7(FALSE) else L7(append);
  L7(append_orDefault):
    st append = append_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L8() else L9(verbose);
  L8():
    p4 = prom<V +>{
      getOption = ldf getOption;
      r5 = dyn getOption("verbose");
      return r5;
    };
    goto L9(p4);
  L9(verbose_orDefault):
    st verbose = verbose_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L10() else L11(type);
  L10():
    p5 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c("etags", "ctags");
      goto L0(r9);
    L2():
      r7 = dyn base("etags", "ctags");
      goto L0(r7);
    };
    goto L11(p5);
  L11(type_orDefault):
    st type = type_orDefault;
    match_arg = ldf `match.arg`;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p6 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r12 = dyn match_arg(p6);
    check L33() else D1();
  D1():
    deopt 3 [r12];
  L33():
    st type = r12;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L12(r14):
    c1 = `as.logical`(r14);
    if c1 then L38() else L13(c1);
  L34():
    ofile1 = ld ofile;
    check L36() else D2();
  L35():
    r13 = dyn base1(<sym ofile>);
    goto L12(r13);
  D2():
    deopt 7 [ofile1];
  L13(c3):
    c7 = `as.logical`(c3);
    if c7 then L41() else L14();
  L36():
    ofile2 = force? ofile1;
    checkMissing(ofile2);
    nzchar = ldf nzchar in base;
    r15 = dyn nzchar(ofile2);
    check L37() else D3();
  L38():
    append1 = ld append;
    check L39() else D4();
  D3():
    deopt 10 [r15];
  D4():
    deopt 11 [c1, append1];
  L14():
    goto L17();
  L17():
    type3 = ld type;
    check L49() else D9();
  L37():
    goto L12(r15);
  L39():
    append2 = force? append1;
    checkMissing(append2);
    r16 = `!`(append2);
    c4 = `as.logical`(r16);
    c5 = `&&`(c1, c4);
    goto L13(c5);
  L41():
    file_create = ldf `file.create`;
    check L42() else D5();
  D5():
    deopt 16 [];
  D9():
    deopt 32 [type3];
  L42():
    p7 = prom<V +>{
      ofile3 = ld ofile;
      ofile4 = force? ofile3;
      checkMissing(ofile4);
      return ofile4;
    };
    r18 = dyn file_create[, showWarnings](p7, FALSE);
    check L43() else D6();
  L49():
    type4 = force? type3;
    checkMissing(type4);
    r26 = `==`(type4, "ctags");
    c9 = `as.logical`(r26);
    if c9 then L50() else L18();
  D6():
    deopt 20 [r18];
  L18():
    write_etags = ld `write.etags`;
    check L53() else D11();
  L19(write_ctags2):
    st `write.fun` = write_ctags2;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L43():
    r19 = `!`(r18);
    c8 = `as.logical`(r19);
    if c8 then L44() else L15();
  L50():
    write_ctags = ld `write.ctags`;
    check L51() else D10();
  D10():
    deopt 36 [write_ctags];
  D11():
    deopt 38 [write_etags];
  L15():
    goto L16(NULL);
  L16(r24):
    goto L17();
  L20(r28):
    r30 = `!`(r28);
    c10 = `as.logical`(r30);
    if c10 then L56() else L21();
  L44():
    stop = ldf stop;
    check L45() else D7();
  L51():
    write_ctags1 = force? write_ctags;
    checkMissing(write_ctags1);
    goto L19(write_ctags1);
  L53():
    write_etags1 = force? write_etags;
    checkMissing(write_etags1);
    goto L19(write_etags1);
  L54():
    missing = ldf missing in base;
    r29 = dyn missing(<sym keep.re>);
    goto L20(r29);
  L55():
    r27 = dyn base2(<sym keep.re>);
    goto L20(r27);
  D7():
    deopt 23 [];
  L21():
    goto L22();
  L22():
    src3 = ld src;
    check L60() else D14();
  L45():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        ofile5 = ld ofile;
        ofile6 = force? ofile5;
        checkMissing(ofile6);
        return ofile6;
      };
      r21 = dyn gettextf("Could not create file %s, aborting", p8);
      return r21;
    };
    r23 = dyn stop[, domain](p9, NA_LGL);
    check L46() else D8();
  L56():
    grep = ldf grep;
    check L57() else D12();
  D8():
    deopt 27 [r23];
  D12():
    deopt 46 [];
  D14():
    deopt 55 [src3];
  L46():
    goto L16(r23);
  L57():
    p10 = prom<V +>{
      keep_re1 = ld `keep.re`;
      keep_re2 = force? keep_re1;
      checkMissing(keep_re2);
      return keep_re2;
    };
    p11 = prom<V +>{
      src1 = ld src;
      src2 = force? src1;
      checkMissing(src2);
      return src2;
    };
    r33 = dyn grep[, , value](p10, p11, TRUE);
    check L58() else D13();
  L60():
    src4 = force? src3;
    checkMissing(src4);
    s = toForSeq(src4);
    l = length(s);
    i = 0;
    goto L23(i);
  D13():
    deopt 51 [r33];
  L23(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L61() else L26();
  L58():
    st src = r33;
    goto L22();
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st s = x;
    verbose1 = ld verbose;
    check L62() else D15();
  L61():
    type5 = ld type;
    check L69() else D20();
  D15():
    deopt 57 [i2, verbose1];
  D20():
    deopt 76 [type5];
  L62():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c12 = `as.logical`(verbose2);
    if c12 then L63() else L24();
  L69():
    type6 = force? type5;
    checkMissing(type6);
    r48 = `==`(type6, "ctags");
    c13 = `as.logical`(r48);
    if c13 then L70() else L27(c13);
  L24():
    goto L25(i2);
  L25(i7):
    tryCatch = ldf tryCatch;
    check L67() else D18();
  L27(c15):
    c22 = `as.logical`(c15);
    if c22 then L76() else L29();
  L63():
    message = ldf message;
    check L64() else D16();
  L70():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  D16():
    deopt 60 [i2];
  D18():
    deopt 68 [i7];
  L28(c18, r50):
    c19 = `as.logical`(r50);
    c20 = `&&`(c18, c19);
    goto L27(c20);
  L29():
    goto L30();
  L30():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L64():
    p13 = prom<V +>{
      gettextf1 = ldf gettextf;
      p12 = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r36 = dyn gettextf1("Processing file %s", p12);
      return r36;
    };
    r38 = dyn message[, domain](p13, NA_LGL);
    check L65() else D17();
  L67():
    p17 = prom<V +>{
      rtags_file = ldf `rtags.file`;
      p14 = prom<V +>{
        s3 = ld s;
        s4 = force? s3;
        checkMissing(s4);
        return s4;
      };
      p15 = prom<V +>{
        ofile7 = ld ofile;
        ofile8 = force? ofile7;
        checkMissing(ofile8);
        return ofile8;
      };
      p16 = prom<V +>{
        write_fun = ld `write.fun`;
        write_fun1 = force? write_fun;
        checkMissing(write_fun1);
        return write_fun1;
      };
      r43 = dyn rtags_file[, ofile, append, `write.fun`](p14, p15, TRUE, p16);
      return r43;
    };
    p18 = prom<V +>{
      r45 = clos inner3708401697;
      return r45;
    };
    r47 = dyn tryCatch[, error](p17, p18);
    check L68() else D19();
  L71():
    ofile9 = ld ofile;
    check L73() else D21();
  L72():
    r49 = dyn base3(<sym ofile>);
    goto L28(c13, r49);
  L76():
    readLines = ldf readLines;
    check L77() else D23();
  D17():
    deopt 64 [i2, r38];
  D19():
    deopt 72 [i7, r47];
  D21():
    deopt 82 [c13, ofile9];
  D23():
    deopt 88 [];
  L31(r61):
    popenv;
    return r61;
  L65():
    goto L25(i2);
  L68():
    goto L23(i7);
  L73():
    ofile10 = force? ofile9;
    checkMissing(ofile10);
    nzchar1 = ldf nzchar in base;
    r51 = dyn nzchar1(ofile10);
    check L74() else D22();
  L77():
    p19 = prom<V +>{
      ofile11 = ld ofile;
      ofile12 = force? ofile11;
      checkMissing(ofile12);
      return ofile12;
    };
    r53 = dyn readLines(p19);
    check L78() else D24();
  L82():
    invisible = ldf invisible in base;
    r62 = dyn invisible();
    check L84() else D27();
  L83():
    r60 = dyn base4();
    goto L31(r60);
  D22():
    deopt 85 [c13, r51];
  D24():
    deopt 90 [r53];
  D27():
    deopt 103 [r62];
  L74():
    goto L28(c13, r51);
  L78():
    st tagLines = r53;
    writeLines = ldf writeLines;
    check L79() else D25();
  L84():
    goto L31(r62);
  D25():
    deopt 93 [];
  L79():
    p21 = prom<V +>{
      sort = ldf sort;
      p20 = prom<V +>{
        tagLines = ld tagLines;
        tagLines1 = force? tagLines;
        checkMissing(tagLines1);
        return tagLines1;
      };
      r55 = dyn sort(p20);
      return r55;
    };
    p22 = prom<V +>{
      ofile13 = ld ofile;
      ofile14 = force? ofile13;
      checkMissing(ofile14);
      return ofile14;
    };
    r58 = dyn writeLines[, con](p21, p22);
    check L80() else D26();
  D26():
    deopt 97 [r58];
  L80():
    goto L30();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}