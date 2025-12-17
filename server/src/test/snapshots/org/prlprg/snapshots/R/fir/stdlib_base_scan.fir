fun main() {
  () -+> V { reg r:cls, reg cat:cls, reg r1:V, reg scan:cls, reg r2:V, reg scan1:cls, reg r3:V, reg scan2:cls, reg r4:V, reg scan3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg p:p(V +), reg r9:V, reg scan4:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg list1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg unlink:cls, reg r15:V, reg scan5:cls, reg r16:V |
    mkenv;
    r = clos inner1650997039;
    st scan = r;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn cat[, , , file, sep]("TITLE extra line", "2 3 5 7", "11 13 17", "ex.data", "\n");
    check L1() else D1();
  D1():
    deopt 12 [r1];
  L1():
    scan = ldf scan;
    check L2() else D2();
  D2():
    deopt 14 [];
  L2():
    r2 = dyn scan[, skip, quiet]("ex.data", 1.0, TRUE);
    check L3() else D3();
  D3():
    deopt 20 [r2];
  L3():
    st pp = r2;
    scan1 = ldf scan;
    check L4() else D4();
  D4():
    deopt 23 [];
  L4():
    r3 = dyn scan1[, skip]("ex.data", 1.0);
    check L5() else D5();
  D5():
    deopt 27 [r3];
  L5():
    scan2 = ldf scan;
    check L6() else D6();
  D6():
    deopt 29 [];
  L6():
    r4 = dyn scan2[, skip, nlines]("ex.data", 1.0, 1.0);
    check L7() else D7();
  D7():
    deopt 35 [r4];
  L7():
    scan3 = ldf scan;
    check L8() else D8();
  D8():
    deopt 37 [];
  L8():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      list = ldf list in base;
      r7 = dyn list("", "", "");
      goto L0(r7);
    L2():
      r5 = dyn base("", "", "");
      goto L0(r5);
    };
    r9 = dyn scan3[, what]("ex.data", p);
    check L9() else D9();
  D9():
    deopt 41 [r9];
  L9():
    scan4 = ldf scan;
    check L10() else D10();
  D10():
    deopt 43 [];
  L10():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      list1 = ldf list in base;
      r12 = dyn list1("", "", "");
      goto L0(r12);
    L2():
      r10 = dyn base1("", "", "");
      goto L0(r10);
    };
    r14 = dyn scan4[, what, flush]("ex.data", p1, TRUE);
    check L11() else D11();
  D11():
    deopt 49 [r14];
  L11():
    unlink = ldf unlink;
    check L12() else D12();
  D12():
    deopt 51 [];
  L12():
    r15 = dyn unlink("ex.data");
    check L13() else D13();
  D13():
    deopt 53 [r15];
  L13():
    scan5 = ldf scan;
    check L14() else D14();
  D14():
    deopt 55 [];
  L14():
    r16 = dyn scan5[text]("1 2 3");
    check L15() else D15();
  D15():
    deopt 58 [r16];
  L15():
    popenv;
    return r16;
  }
}
fun inner1650997039(file, what, nmax, n, sep, quote, dec, skip, nlines, `na.strings`, flush, fill, `strip.white`, quiet, `blank.lines.skip`, `multi.line`, `comment.char`, allowEscapes, fileEncoding, encoding, text, skipNul) {
  (reg file:*, reg what:*, reg nmax:*, reg n:*, reg sep:*, reg quote:*, reg dec:*, reg skip:*, reg nlines:*, reg na_strings:*, reg flush:*, reg fill:*, reg strip_white:*, reg quiet:*, reg blank_lines_skip:*, reg multi_line:*, reg comment_char:*, reg allowEscapes:*, reg fileEncoding:*, reg encoding:*, reg text:*, reg skipNul:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, var what:*, reg what_isMissing:L, reg what_orDefault:*, reg double:cls, reg r:V, reg p:p(V +), var nmax:*, reg nmax_isMissing:L, reg nmax_orDefault:*, reg p1:p(V +), var n:*, reg n_isMissing:L, reg n_orDefault:*, reg p2:p(V +), var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg sep1:*, reg sep2:V, reg identical:cls, reg r6:V, reg c:L, reg p3:p(V +), var dec:*, reg dec_isMissing:L, reg dec_orDefault:*, var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, var nlines:*, reg nlines_isMissing:L, reg nlines_orDefault:*, var `na.strings`:*, reg na_strings_isMissing:L, reg na_strings_orDefault:*, var flush:*, reg flush_isMissing:L, reg flush_orDefault:*, var fill:*, reg fill_isMissing:L, reg fill_orDefault:*, var `strip.white`:*, reg strip_white_isMissing:L, reg strip_white_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var `blank.lines.skip`:*, reg blank_lines_skip_isMissing:L, reg blank_lines_skip_orDefault:*, var `multi.line`:*, reg multi_line_isMissing:L, reg multi_line_orDefault:*, var `comment.char`:*, reg comment_char_isMissing:L, reg comment_char_orDefault:*, var allowEscapes:*, reg allowEscapes_isMissing:L, reg allowEscapes_orDefault:*, var fileEncoding:*, reg fileEncoding_isMissing:L, reg fileEncoding_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var text:*, var skipNul:*, reg skipNul_isMissing:L, reg skipNul_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg na_strings1:*, reg na_strings2:V, reg as_character:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg r14:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg missing1:cls, reg r17:V, reg c2:L, reg n1:*, reg n2:V, reg pmax:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg what1:*, reg what2:V, reg length:cls, reg r20:V, reg p4:p(V +), reg r22:V, reg r23:V, reg r24:V, reg stop:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg missing2:cls, reg r29:V, reg c3:L, reg c5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg c8:L, reg r31:V, reg missing3:cls, reg r32:V, reg r33:V, reg c9:L, reg c10:V, reg c12:L, reg textConnection:cls, reg text1:*, reg text2:V, reg p5:p(V +), reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg on_exit:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg file1:*, reg file2:V, reg c13:L, reg c14:L, reg file3:*, reg file4:V, reg r42:V, reg c15:L, reg stdin:cls, reg r43:V, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg fileEncoding1:*, reg fileEncoding2:V, reg nzchar:cls, reg r47:V, reg c16:L, reg file5:cls, reg file6:*, reg file7:V, reg p6:p(V +), reg fileEncoding3:*, reg fileEncoding4:V, reg p7:p(V +), reg r50:V, reg r51:V, reg file8:cls, reg file9:*, reg file10:V, reg p8:p(V +), reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg on_exit1:cls, reg r55:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg r58:V, reg file11:*, reg file12:V, reg inherits:cls, reg r59:V, reg r60:V, reg c17:L, reg stop1:cls, reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg file13:*, reg file14:V, reg what3:*, reg what4:V, reg nmax1:*, reg nmax2:V, reg sep3:*, reg sep4:V, reg dec1:*, reg dec2:V, reg quote1:*, reg quote2:V, reg skip1:*, reg skip2:V, reg nlines1:*, reg nlines2:V, reg na_strings3:*, reg na_strings4:V, reg flush1:*, reg flush2:V, reg fill1:*, reg fill2:V, reg strip_white1:*, reg strip_white2:V, reg quiet1:*, reg quiet2:V, reg blank_lines_skip1:*, reg blank_lines_skip2:V, reg multi_line1:*, reg multi_line2:V, reg comment_char1:*, reg comment_char2:V, reg allowEscapes1:*, reg allowEscapes2:V, reg encoding1:*, reg encoding2:V, reg skipNul1:*, reg skipNul2:V, reg scan:cls, reg r65:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    what_isMissing = missing.0(what);
    if what_isMissing then L1() else L2(what);
  L1():
    p = prom<V +>{
      double = ldf double;
      r = dyn double();
      return r;
    };
    goto L2(p);
  L2(what_orDefault):
    st what = what_orDefault;
    nmax_isMissing = missing.0(nmax);
    if nmax_isMissing then L3() else L4(nmax);
  L3():
    p1 = prom<V +>{
      return -1;
    };
    goto L4(p1);
  L4(nmax_orDefault):
    st nmax = nmax_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L5() else L6(n);
  L5():
    p2 = prom<V +>{
      return -1;
    };
    goto L6(p2);
  L6(n_orDefault):
    st n = n_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L7("") else L7(sep);
  L7(sep_orDefault):
    st sep = sep_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L8() else L9(quote);
  L8():
    p3 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r5):
      c = `as.logical`(r5);
      if c then L4() else L1();
    L2():
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      identical = ldf identical in base;
      r6 = dyn identical(sep2, "\n", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r6);
    L3():
      r4 = dyn base(<sym sep>, "\n");
      goto L0(r4);
    L1():
      return "'\"";
    L4():
      return "";
    };
    goto L9(p3);
  L9(quote_orDefault):
    st quote = quote_orDefault;
    dec_isMissing = missing.0(dec);
    if dec_isMissing then L10(".") else L10(dec);
  L10(dec_orDefault):
    st dec = dec_orDefault;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L11(0) else L11(skip);
  L11(skip_orDefault):
    st skip = skip_orDefault;
    nlines_isMissing = missing.0(nlines);
    if nlines_isMissing then L12(0) else L12(nlines);
  L12(nlines_orDefault):
    st nlines = nlines_orDefault;
    na_strings_isMissing = missing.0(na_strings);
    if na_strings_isMissing then L13("NA") else L13(na_strings);
  L13(na_strings_orDefault):
    st `na.strings` = na_strings_orDefault;
    flush_isMissing = missing.0(flush);
    if flush_isMissing then L14(FALSE) else L14(flush);
  L14(flush_orDefault):
    st flush = flush_orDefault;
    fill_isMissing = missing.0(fill);
    if fill_isMissing then L15(FALSE) else L15(fill);
  L15(fill_orDefault):
    st fill = fill_orDefault;
    strip_white_isMissing = missing.0(strip_white);
    if strip_white_isMissing then L16(FALSE) else L16(strip_white);
  L16(strip_white_orDefault):
    st `strip.white` = strip_white_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L17(FALSE) else L17(quiet);
  L17(quiet_orDefault):
    st quiet = quiet_orDefault;
    blank_lines_skip_isMissing = missing.0(blank_lines_skip);
    if blank_lines_skip_isMissing then L18(TRUE) else L18(blank_lines_skip);
  L18(blank_lines_skip_orDefault):
    st `blank.lines.skip` = blank_lines_skip_orDefault;
    multi_line_isMissing = missing.0(multi_line);
    if multi_line_isMissing then L19(TRUE) else L19(multi_line);
  L19(multi_line_orDefault):
    st `multi.line` = multi_line_orDefault;
    comment_char_isMissing = missing.0(comment_char);
    if comment_char_isMissing then L20("") else L20(comment_char);
  L20(comment_char_orDefault):
    st `comment.char` = comment_char_orDefault;
    allowEscapes_isMissing = missing.0(allowEscapes);
    if allowEscapes_isMissing then L21(FALSE) else L21(allowEscapes);
  L21(allowEscapes_orDefault):
    st allowEscapes = allowEscapes_orDefault;
    fileEncoding_isMissing = missing.0(fileEncoding);
    if fileEncoding_isMissing then L22("") else L22(fileEncoding);
  L22(fileEncoding_orDefault):
    st fileEncoding = fileEncoding_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L23("unknown") else L23(encoding);
  L23(encoding_orDefault):
    st encoding = encoding_orDefault;
    st text = text;
    skipNul_isMissing = missing.0(skipNul);
    if skipNul_isMissing then L24(FALSE) else L24(skipNul);
  L24(skipNul_orDefault):
    st skipNul = skipNul_orDefault;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L25(r9):
    st `na.strings` = r9;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L50():
    na_strings1 = ld `na.strings`;
    check L52() else D0();
  L51():
    r8 = dyn base1(<sym na.strings>);
    goto L25(r8);
  D0():
    deopt 2 [na_strings1];
  L26(r12):
    r14 = `!`(r12);
    c1 = `as.logical`(r14);
    if c1 then L56() else L27();
  L52():
    na_strings2 = force? na_strings1;
    checkMissing(na_strings2);
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(na_strings2);
    check L53() else D1();
  L54():
    missing = ldf missing in base;
    r13 = dyn missing(<sym n>);
    goto L26(r13);
  L55():
    r11 = dyn base2(<sym n>);
    goto L26(r11);
  D1():
    deopt 5 [r10];
  L27():
    goto L31();
  L31():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L53():
    goto L25(r10);
  L56():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L28(r16):
    c2 = `as.logical`(r16);
    if c2 then L59() else L29();
  L32(r28):
    c3 = `as.logical`(r28);
    if c3 then L69() else L33(c3);
  L57():
    missing1 = ldf missing in base;
    r17 = dyn missing1(<sym nmax>);
    goto L28(r17);
  L58():
    r15 = dyn base3(<sym nmax>);
    goto L28(r15);
  L67():
    missing2 = ldf missing in base;
    r29 = dyn missing2(<sym file>);
    goto L32(r29);
  L68():
    r27 = dyn base5(<sym file>);
    goto L32(r27);
  L29():
    stop = ldf stop;
    check L64() else D5();
  L30(r24):
    goto L31();
  L33(c5):
    c12 = `as.logical`(c5);
    if c12 then L73() else L35();
  L59():
    n1 = ld n;
    check L60() else D2();
  L69():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  D2():
    deopt 14 [n1];
  D5():
    deopt 23 [];
  L34(c8, r31):
    r33 = `!`(r31);
    c9 = `as.logical`(r33);
    c10 = `&&`(c8, c9);
    goto L33(c10);
  L35():
    goto L37();
  L37():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L79() else L80();
  L60():
    n2 = force? n1;
    checkMissing(n2);
    pmax = ldf pmax;
    check L61() else D3();
  L64():
    r25 = dyn stop("either specify 'nmax' or 'n', but not both.");
    check L65() else D6();
  L70():
    missing3 = ldf missing in base;
    r32 = dyn missing3(<sym text>);
    goto L34(c3, r32);
  L71():
    r30 = dyn base6(<sym text>);
    goto L34(c3, r30);
  L73():
    textConnection = ldf textConnection;
    check L74() else D7();
  D3():
    deopt 16 [n2];
  D6():
    deopt 25 [r25];
  D7():
    deopt 37 [];
  L38(r41):
    c14 = `as.logical`(r41);
    if c14 then L82() else L39();
  L61():
    p4 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      length = ldf length in base;
      r20 = dyn length(what2);
      goto L0(r20);
    L2():
      r18 = dyn base4(<sym what>);
      goto L0(r18);
    };
    r22 = dyn pmax(p4, 1);
    check L62() else D4();
  L65():
    goto L30(r25);
  L74():
    p5 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r35 = dyn textConnection[, encoding](p5, "UTF-8");
    check L75() else D8();
  L79():
    file1 = ld file;
    check L81() else D9();
  L80():
    r40 = dyn base8(<sym file>);
    goto L38(r40);
  D4():
    deopt 19 [n2, r22];
  D8():
    deopt 41 [r35];
  D9():
    deopt 52 [file1];
  L39():
    goto L45();
  L45():
    sym11 = ldf inherits;
    base11 = ldf inherits in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  L62():
    r23 = `/`(n2, r22);
    st nmax = r23;
    goto L30(r23);
  L75():
    st file = r35;
    st encoding = "UTF-8";
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L81():
    file2 = force? file1;
    checkMissing(file2);
    c13 = `is.character`(file2);
    goto L38(c13);
  L82():
    file3 = ld file;
    check L83() else D10();
  D10():
    deopt 55 [file3];
  L36(r37):
    goto L37();
  L46(r58):
    r60 = `!`(r58);
    c17 = `as.logical`(r60);
    if c17 then L105() else L47();
  L76():
    on_exit = ldf `on.exit` in base;
    r38 = dyn on_exit(<lang close(file)>);
    goto L36(r38);
  L77():
    r36 = dyn base7(<lang close(file)>);
    goto L36(r36);
  L83():
    file4 = force? file3;
    checkMissing(file4);
    r42 = `==`(file4, "");
    c15 = `as.logical`(r42);
    if c15 then L84() else L40();
  L101():
    file11 = ld file;
    check L103() else D19();
  L102():
    r57 = dyn base11(<sym file>, "connection");
    goto L46(r57);
  D19():
    deopt 89 [file11];
  L40():
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L88() else L89();
  L41(r44):
    goto L45();
  L47():
    goto L48();
  L48():
    sym12 = ldf `.Internal`;
    base12 = ldf `.Internal` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L109() else L110();
  L84():
    stdin = ldf stdin;
    check L85() else D11();
  L103():
    file12 = force? file11;
    checkMissing(file12);
    inherits = ldf inherits in base;
    r59 = dyn inherits(file12, "connection", FALSE);
    check L104() else D20();
  L105():
    stop1 = ldf stop;
    check L106() else D21();
  D11():
    deopt 60 [];
  D20():
    deopt 94 [r59];
  D21():
    deopt 97 [];
  L42(r46):
    c16 = `as.logical`(r46);
    if c16 then L92() else L43();
  L49(r64):
    popenv;
    return r64;
  L85():
    r43 = dyn stdin();
    check L86() else D12();
  L88():
    fileEncoding1 = ld fileEncoding;
    check L90() else D13();
  L89():
    r45 = dyn base9(<sym fileEncoding>);
    goto L42(r45);
  L104():
    goto L46(r59);
  L106():
    r61 = dyn stop1("'file' must be a character string or connection");
    check L107() else D22();
  L109():
    file13 = ld file;
    check L111() else D23();
  L110():
    r63 = dyn base12(<lang scan(file, what, nmax, sep, dec, quote, skip, nlines, na.strings, flush, fill, strip.white, quiet, blank.lines.skip, multi.line, comment.char, allowEscapes, encoding, skipNul)>);
    goto L49(r63);
  D12():
    deopt 61 [r43];
  D13():
    deopt 65 [fileEncoding1];
  D22():
    deopt 99 [r61];
  D23():
    deopt 104 [file13];
  L43():
    file8 = ldf file;
    check L96() else D17();
  L44(r51):
    st file = r51;
    sym10 = ldf `on.exit`;
    base10 = ldf `on.exit` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L98() else L99();
  L86():
    st file = r43;
    goto L41(r43);
  L90():
    fileEncoding2 = force? fileEncoding1;
    checkMissing(fileEncoding2);
    nzchar = ldf nzchar in base;
    r47 = dyn nzchar(fileEncoding2);
    check L91() else D14();
  L92():
    file5 = ldf file;
    check L93() else D15();
  L107():
    goto L48();
  L111():
    file14 = force? file13;
    checkMissing(file14);
    what3 = ld what;
    check L112() else D24();
  D14():
    deopt 68 [r47];
  D15():
    deopt 70 [];
  D17():
    deopt 77 [];
  D24():
    deopt 106 [what3];
  L91():
    goto L42(r47);
  L93():
    p6 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    p7 = prom<V +>{
      fileEncoding3 = ld fileEncoding;
      fileEncoding4 = force? fileEncoding3;
      checkMissing(fileEncoding4);
      return fileEncoding4;
    };
    r50 = dyn file5[, , encoding](p6, "r", p7);
    check L94() else D16();
  L96():
    p8 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r53 = dyn file8(p8, "r");
    check L97() else D18();
  L98():
    on_exit1 = ldf `on.exit` in base;
    r55 = dyn on_exit1(<lang close(file)>);
    goto L41(r55);
  L99():
    r54 = dyn base10(<lang close(file)>);
    goto L41(r54);
  L112():
    what4 = force? what3;
    checkMissing(what4);
    nmax1 = ld nmax;
    check L113() else D25();
  D16():
    deopt 75 [r50];
  D18():
    deopt 80 [r53];
  D25():
    deopt 108 [nmax1];
  L94():
    goto L44(r50);
  L97():
    goto L44(r53);
  L113():
    nmax2 = force? nmax1;
    checkMissing(nmax2);
    sep3 = ld sep;
    check L114() else D26();
  D26():
    deopt 110 [sep3];
  L114():
    sep4 = force? sep3;
    checkMissing(sep4);
    dec1 = ld dec;
    check L115() else D27();
  D27():
    deopt 112 [dec1];
  L115():
    dec2 = force? dec1;
    checkMissing(dec2);
    quote1 = ld quote;
    check L116() else D28();
  D28():
    deopt 114 [quote1];
  L116():
    quote2 = force? quote1;
    checkMissing(quote2);
    skip1 = ld skip;
    check L117() else D29();
  D29():
    deopt 116 [skip1];
  L117():
    skip2 = force? skip1;
    checkMissing(skip2);
    nlines1 = ld nlines;
    check L118() else D30();
  D30():
    deopt 118 [nlines1];
  L118():
    nlines2 = force? nlines1;
    checkMissing(nlines2);
    na_strings3 = ld `na.strings`;
    check L119() else D31();
  D31():
    deopt 120 [na_strings3];
  L119():
    na_strings4 = force? na_strings3;
    checkMissing(na_strings4);
    flush1 = ld flush;
    check L120() else D32();
  D32():
    deopt 122 [flush1];
  L120():
    flush2 = force? flush1;
    checkMissing(flush2);
    fill1 = ld fill;
    check L121() else D33();
  D33():
    deopt 124 [fill1];
  L121():
    fill2 = force? fill1;
    checkMissing(fill2);
    strip_white1 = ld `strip.white`;
    check L122() else D34();
  D34():
    deopt 126 [strip_white1];
  L122():
    strip_white2 = force? strip_white1;
    checkMissing(strip_white2);
    quiet1 = ld quiet;
    check L123() else D35();
  D35():
    deopt 128 [quiet1];
  L123():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    blank_lines_skip1 = ld `blank.lines.skip`;
    check L124() else D36();
  D36():
    deopt 130 [blank_lines_skip1];
  L124():
    blank_lines_skip2 = force? blank_lines_skip1;
    checkMissing(blank_lines_skip2);
    multi_line1 = ld `multi.line`;
    check L125() else D37();
  D37():
    deopt 132 [multi_line1];
  L125():
    multi_line2 = force? multi_line1;
    checkMissing(multi_line2);
    comment_char1 = ld `comment.char`;
    check L126() else D38();
  D38():
    deopt 134 [comment_char1];
  L126():
    comment_char2 = force? comment_char1;
    checkMissing(comment_char2);
    allowEscapes1 = ld allowEscapes;
    check L127() else D39();
  D39():
    deopt 136 [allowEscapes1];
  L127():
    allowEscapes2 = force? allowEscapes1;
    checkMissing(allowEscapes2);
    encoding1 = ld encoding;
    check L128() else D40();
  D40():
    deopt 138 [encoding1];
  L128():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    skipNul1 = ld skipNul;
    check L129() else D41();
  D41():
    deopt 140 [skipNul1];
  L129():
    skipNul2 = force? skipNul1;
    checkMissing(skipNul2);
    scan = ldf scan in base;
    r65 = dyn scan(file14, what4, nmax2, sep4, dec2, quote2, skip2, nlines2, na_strings4, flush2, fill2, strip_white2, quiet2, blank_lines_skip2, multi_line2, comment_char2, allowEscapes2, encoding2, skipNul2);
    check L130() else D42();
  D42():
    deopt 143 [r65];
  L130():
    goto L49(r65);
  }
}