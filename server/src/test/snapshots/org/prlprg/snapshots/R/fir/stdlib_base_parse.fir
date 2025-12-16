fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg cat:cls, reg fil:*, reg fil1:V, reg p:p(V +), reg r3:V, reg parse:cls, reg fil2:*, reg fil3:V, reg p1:p(V +), reg r5:V, reg unlink:cls, reg fil4:*, reg fil5:V, reg p2:p(V +), reg r7:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg str2lang:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg quote:cls, reg r13:V, reg identical:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg str2lang1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg quote1:cls, reg r20:V, reg identical1:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg str2lang2:cls, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg quote2:cls, reg r27:V, reg identical2:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg qa:*, reg qa1:V, reg c:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg r35:V, reg qa2:*, reg qa3:V, reg is_call:cls, reg r36:V, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg str2lang3:cls, reg r41:V, reg identical3:cls, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg str2expression:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg c1:cls, reg r47:V, reg p3:p(V +), reg r49:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r50:V, reg r51:V, reg expression:cls, reg r52:V, reg identical4:cls, reg r53:V, reg p4:p(V +), reg r55:V, reg srcfile:cls, reg r56:V, reg tryCatch:cls, reg parse1:cls, reg txt:*, reg txt1:V, reg p5:p(V +), reg sf:*, reg sf1:V, reg p6:p(V +), reg r59:V, reg p7:p(V +), reg r61:cls, reg p8:p(V +), reg r63:V, reg getParseData:cls, reg sf2:*, reg sf3:V, reg p9:p(V +), reg r65:V |
    mkenv;
    r = clos inner88433544;
    st parse = r;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn tempfile[fileext](".Rdmped");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    st fil = r1;
    cat = ldf cat;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r3 = dyn cat[, file]("x <- c(1, 4)\n  x ^ 3 -10 ; outer(1:7, 5:9)\n", p);
    check L3() else D3();
  D3():
    deopt 14 [r3];
  L3():
    parse = ldf parse;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p1 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r5 = dyn parse[file, n](p1, 3.0);
    check L5() else D5();
  D5():
    deopt 21 [r5];
  L5():
    unlink = ldf unlink;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    p2 = prom<V +>{
      fil4 = ld fil;
      fil5 = force? fil4;
      checkMissing(fil5);
      return fil5;
    };
    r7 = dyn unlink(p2);
    check L7() else D7();
  D7():
    deopt 25 [r7];
  L7():
    stopifnot = ldf stopifnot;
    check L8() else D8();
  D8():
    deopt 27 [];
  L8():
    p4 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L11() else L12();
    L0():
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L15() else L16();
    L11():
      str2lang = ldf str2lang;
      r10 = dyn str2lang("x[3] <- 1+4");
      sym1 = ldf quote;
      base1 = ldf quote in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L13() else L14();
    L12():
      r8 = dyn base(<lang str2lang("x[3] <- 1+4")>, <lang quote(`<-`(`[`(x, 3.0), `+`(1.0, 4.0)))>);
      goto L0();
    L1(r12):
      identical = ldf identical in base;
      r14 = dyn identical(r10, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L2():
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L19() else L20();
    L13():
      quote = ldf quote in base;
      r13 = dyn quote(<lang `<-`(`[`(x, 3.0), `+`(1.0, 4.0))>);
      goto L1(r13);
    L14():
      r11 = dyn base1(<lang `<-`(`[`(x, 3.0), `+`(1.0, 4.0))>);
      goto L1(r11);
    L15():
      str2lang1 = ldf str2lang;
      r17 = dyn str2lang1("log(y)");
      sym3 = ldf quote;
      base3 = ldf quote in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L17() else L18();
    L16():
      r15 = dyn base2(<lang str2lang("log(y)")>, <lang quote(log(y))>);
      goto L2();
    L3(r19):
      identical1 = ldf identical in base;
      r21 = dyn identical1(r17, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L2();
    L4():
      sym6 = ldf `is.symbol`;
      base6 = ldf `is.symbol` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L23() else L24();
    L17():
      quote1 = ldf quote in base;
      r20 = dyn quote1(<lang log(y)>);
      goto L3(r20);
    L18():
      r18 = dyn base3(<lang log(y)>);
      goto L3(r18);
    L19():
      str2lang2 = ldf str2lang;
      r24 = dyn str2lang2("abc");
      sym5 = ldf quote;
      base5 = ldf quote in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L21() else L22();
    L20():
      r22 = dyn base4(<lang str2lang("abc")>, <lang `<-`(qa, quote(abc))>);
      goto L4();
    L5(r26):
      st qa = r26;
      identical2 = ldf identical in base;
      r28 = dyn identical2(r24, r26, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L4();
    L6(r30):
      sym7 = ldf `is.call`;
      base7 = ldf `is.call` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L25() else L26();
    L21():
      quote2 = ldf quote in base;
      r27 = dyn quote2(<sym abc>);
      goto L5(r27);
    L22():
      r25 = dyn base5(<sym abc>);
      goto L5(r25);
    L23():
      qa = ld qa;
      qa1 = force? qa;
      checkMissing(qa1);
      c = `is.symbol`(qa1);
      goto L6(c);
    L24():
      r29 = dyn base6(<sym qa>);
      goto L6(r29);
    L7(r34, r35):
      r37 = `!`(r35);
      `&&`(r34, r37);
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L27() else L28();
    L25():
      qa2 = ld qa;
      qa3 = force? qa2;
      checkMissing(qa3);
      is_call = ldf `is.call` in base;
      r36 = dyn is_call(qa3);
      goto L7(r30, r36);
    L26():
      r33 = dyn base7(<sym qa>);
      goto L7(r30, r33);
    L8():
      sym9 = ldf identical;
      base9 = ldf identical in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L29() else L30();
    L27():
      str2lang3 = ldf str2lang;
      r41 = dyn str2lang3("1.375");
      identical3 = ldf identical in base;
      r42 = dyn identical3(r41, 1.375, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L8();
    L28():
      r39 = dyn base8(<lang str2lang("1.375")>, 1.375);
      goto L8();
    L9(r44):
      return r44;
    L29():
      str2expression = ldf str2expression;
      p3 = prom<V +>{
        sym10 = ldf c;
        base10 = ldf c in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r46):
        return r46;
      L1():
        c1 = ldf c in base;
        r47 = dyn c1("# a comment", "", "42");
        goto L0(r47);
      L2():
        r45 = dyn base10("# a comment", "", "42");
        goto L0(r45);
      };
      r49 = dyn str2expression(p3);
      sym11 = ldf expression;
      base11 = ldf expression in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L31() else L32();
    L30():
      r43 = dyn base9(<lang str2expression(c("# a comment", "", "42"))>, <lang expression(42.0)>);
      goto L9(r43);
    L10(r51):
      identical4 = ldf identical in base;
      r53 = dyn identical4(r49, r51, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L9(r53);
    L31():
      expression = ldf expression in base;
      r52 = dyn expression(42.0);
      goto L10(r52);
    L32():
      r50 = dyn base11(42.0);
      goto L10(r50);
    };
    r55 = dyn stopifnot[exprs](p4);
    check L9() else D9();
  D9():
    deopt 30 [r55];
  L9():
    st txt = "\nx <- 1\nan error\n";
    srcfile = ldf srcfile;
    check L10() else D10();
  D10():
    deopt 35 [];
  L10():
    r56 = dyn srcfile("txt");
    check L11() else D11();
  D11():
    deopt 37 [r56];
  L11():
    st sf = r56;
    tryCatch = ldf tryCatch;
    check L12() else D12();
  D12():
    deopt 40 [];
  L12():
    p7 = prom<V +>{
      parse1 = ldf parse;
      p5 = prom<V +>{
        txt = ld txt;
        txt1 = force? txt;
        checkMissing(txt1);
        return txt1;
      };
      p6 = prom<V +>{
        sf = ld sf;
        sf1 = force? sf;
        checkMissing(sf1);
        return sf1;
      };
      r59 = dyn parse1[text, srcfile](p5, p6);
      return r59;
    };
    p8 = prom<V +>{
      r61 = clos inner1560918050;
      return r61;
    };
    r63 = dyn tryCatch[, error](p7, p8);
    check L13() else D13();
  D13():
    deopt 44 [r63];
  L13():
    getParseData = ldf getParseData;
    check L14() else D14();
  D14():
    deopt 46 [];
  L14():
    p9 = prom<V +>{
      sf2 = ld sf;
      sf3 = force? sf2;
      checkMissing(sf3);
      return sf3;
    };
    r65 = dyn getParseData(p9);
    check L15() else D15();
  D15():
    deopt 48 [r65];
  L15():
    popenv;
    return r65;
  }
}
fun inner88433544(file, n, text, prompt, `keep.source`, srcfile, encoding) {
  (reg file:*, reg n:*, reg text:*, reg prompt:*, reg keep_source:*, reg srcfile:*, reg encoding:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var text:*, reg text_isMissing:L, reg text_orDefault:*, var prompt:*, reg prompt_isMissing:L, reg prompt_orDefault:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var srcfile:*, reg srcfile_isMissing:L, reg srcfile_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg isTRUE:cls, reg keep_source1:*, reg keep_source2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg text1:*, reg text2:V, reg c:V, reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg text3:*, reg text4:V, reg length:cls, reg r9:V, reg r10:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg expression:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg c3:L, reg keep_source3:*, reg keep_source4:V, reg c4:L, reg srcfilecopy:cls, reg srcfile1:*, reg srcfile2:V, reg p2:p(V +), reg text5:*, reg text6:V, reg p3:p(V +), reg r21:V, reg r22:V, reg stdin:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg file1:*, reg file2:V, reg c5:L, reg c6:L, reg file3:*, reg file4:V, reg r28:V, reg c7:L, reg stdin1:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg missing1:cls, reg r32:V, reg c8:L, reg r33:V, reg r34:V, reg file5:*, reg file6:V, reg file7:cls, reg filename:*, reg filename1:V, reg p4:p(V +), reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg missing2:cls, reg r39:V, reg c9:L, reg filename2:*, reg filename3:V, reg keep_source5:*, reg keep_source6:V, reg c10:L, reg readLines:cls, reg file8:*, reg file9:V, reg p5:p(V +), reg encoding1:*, reg encoding2:V, reg p6:p(V +), reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg text7:*, reg text8:V, reg length1:cls, reg r45:V, reg r46:V, reg c11:L, reg close:cls, reg file10:*, reg file11:V, reg p7:p(V +), reg r49:V, reg stdin2:cls, reg r50:V, reg srcfilecopy1:cls, reg filename5:*, reg filename6:V, reg p8:p(V +), reg text9:*, reg text10:V, reg p9:p(V +), reg file_mtime:cls, reg filename7:*, reg filename8:V, reg p10:p(V +), reg r54:V, reg p11:p(V +), reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg on_exit:cls, reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg file12:*, reg file13:V, reg n1:*, reg n2:V, reg text11:*, reg text12:V, reg prompt1:*, reg prompt2:V, reg srcfile3:*, reg srcfile4:V, reg encoding3:*, reg encoding4:V, reg parse:cls, reg r61:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L1(NULL) else L1(n);
  L1(n_orDefault):
    st n = n_orDefault;
    text_isMissing = missing.0(text);
    if text_isMissing then L2(NULL) else L2(text);
  L2(text_orDefault):
    st text = text_orDefault;
    prompt_isMissing = missing.0(prompt);
    if prompt_isMissing then L3("?") else L3(prompt);
  L3(prompt_orDefault):
    st prompt = prompt_orDefault;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L4() else L5(keep_source);
  L4():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("keep.source");
      return r;
    };
    goto L5(p);
  L5(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    srcfile_isMissing = missing.0(srcfile);
    if srcfile_isMissing then L6(NULL) else L6(srcfile);
  L6(srcfile_orDefault):
    st srcfile = srcfile_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L7("unknown") else L7(encoding);
  L7(encoding_orDefault):
    st encoding = encoding_orDefault;
    isTRUE = ldf isTRUE;
    check L35() else D0();
  D0():
    deopt 1 [];
  L35():
    p1 = prom<V +>{
      keep_source1 = ld `keep.source`;
      keep_source2 = force? keep_source1;
      checkMissing(keep_source2);
      return keep_source2;
    };
    r3 = dyn isTRUE(p1);
    check L36() else D1();
  D1():
    deopt 3 [r3];
  L36():
    st `keep.source` = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L8(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L40() else L9();
  L37():
    text1 = ld text;
    check L39() else D2();
  L38():
    r4 = dyn base(<sym text>);
    goto L8(r4);
  D2():
    deopt 6 [text1];
  L9():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L19():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L103() else L104();
  L39():
    text2 = force? text1;
    checkMissing(text2);
    c = `==`(text2, NULL);
    goto L8(c);
  L40():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L10(r8):
    r10 = `==`(r8, 0);
    c2 = `as.logical`(r10);
    if c2 then L45() else L11();
  L20(r27):
    c6 = `as.logical`(r27);
    if c6 then L65() else L21();
  L34(r60):
    popenv;
    return r60;
  L41():
    text3 = ld text;
    check L43() else D3();
  L42():
    r7 = dyn base1(<sym text>);
    goto L10(r7);
  L62():
    file1 = ld file;
    check L64() else D10();
  L63():
    r26 = dyn base4(<sym file>);
    goto L20(r26);
  L103():
    file12 = ld file;
    check L105() else D29();
  L104():
    r59 = dyn base9(<lang parse(file, n, text, prompt, srcfile, encoding)>);
    goto L34(r59);
  D3():
    deopt 12 [text3];
  D10():
    deopt 47 [file1];
  D29():
    deopt 130 [file12];
  L11():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L21():
    goto L19();
  L43():
    text4 = force? text3;
    checkMissing(text4);
    length = ldf length in base;
    r9 = dyn length(text4);
    check L44() else D4();
  L45():
    sym2 = ldf expression;
    base2 = ldf expression in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L64():
    file2 = force? file1;
    checkMissing(file2);
    c5 = `is.character`(file2);
    goto L20(c5);
  L65():
    file3 = ld file;
    check L66() else D11();
  L105():
    file13 = force? file12;
    checkMissing(file13);
    n1 = ld n;
    check L106() else D30();
  D4():
    deopt 15 [r9];
  D11():
    deopt 50 [file3];
  D30():
    deopt 132 [n1];
  L12(r12):
    popenv;
    return r12;
  L14(r17):
    c3 = `as.logical`(r17);
    if c3 then L52() else L15();
  L44():
    goto L10(r9);
  L46():
    expression = ldf expression in base;
    r13 = dyn expression();
    goto L12(r13);
  L47():
    r11 = dyn base2();
    goto L12(r11);
  L50():
    missing = ldf missing in base;
    r18 = dyn missing(<sym srcfile>);
    goto L14(r18);
  L51():
    r16 = dyn base3(<sym srcfile>);
    goto L14(r16);
  L66():
    file4 = force? file3;
    checkMissing(file4);
    r28 = `==`(file4, "");
    c7 = `as.logical`(r28);
    if c7 then L67() else L22();
  L106():
    n2 = force? n1;
    checkMissing(n2);
    text11 = ld text;
    check L107() else D31();
  D31():
    deopt 134 [text11];
  L15():
    goto L18();
  L18():
    stdin = ldf stdin;
    check L59() else D8();
  L22():
    file5 = ld file;
    check L75() else D14();
  L26(r34):
    goto L19();
  L52():
    st srcfile = "<text>";
    keep_source3 = ld `keep.source`;
    check L53() else D5();
  L67():
    stdin1 = ldf stdin;
    check L68() else D12();
  L107():
    text12 = force? text11;
    checkMissing(text12);
    prompt1 = ld prompt;
    check L108() else D32();
  D5():
    deopt 30 [keep_source3];
  D8():
    deopt 43 [];
  D12():
    deopt 55 [];
  D14():
    deopt 66 [file5];
  D32():
    deopt 136 [prompt1];
  L53():
    keep_source4 = force? keep_source3;
    checkMissing(keep_source4);
    c4 = `as.logical`(keep_source4);
    if c4 then L54() else L16();
  L59():
    r24 = dyn stdin();
    check L60() else D9();
  L68():
    r29 = dyn stdin1();
    check L69() else D13();
  L75():
    file6 = force? file5;
    checkMissing(file6);
    st filename = file6;
    file7 = ldf file;
    check L76() else D15();
  L108():
    prompt2 = force? prompt1;
    checkMissing(prompt2);
    srcfile3 = ld srcfile;
    check L109() else D33();
  D9():
    deopt 44 [r24];
  D13():
    deopt 56 [r29];
  D15():
    deopt 70 [];
  D33():
    deopt 138 [srcfile3];
  L16():
    goto L17(NULL);
  L17(r22):
    goto L18();
  L54():
    srcfilecopy = ldf srcfilecopy;
    check L55() else D6();
  L60():
    st file = r24;
    goto L19();
  L69():
    st file = r29;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  L76():
    p4 = prom<V +>{
      filename = ld filename;
      filename1 = force? filename;
      checkMissing(filename1);
      return filename1;
    };
    r36 = dyn file7(p4, "r");
    check L77() else D16();
  L109():
    srcfile4 = force? srcfile3;
    checkMissing(srcfile4);
    encoding3 = ld encoding;
    check L110() else D34();
  D6():
    deopt 33 [];
  D16():
    deopt 73 [r36];
  D34():
    deopt 140 [encoding3];
  L23(r31):
    c8 = `as.logical`(r31);
    if c8 then L72() else L24();
  L55():
    p2 = prom<V +>{
      srcfile1 = ld srcfile;
      srcfile2 = force? srcfile1;
      checkMissing(srcfile2);
      return srcfile2;
    };
    p3 = prom<V +>{
      text5 = ld text;
      text6 = force? text5;
      checkMissing(text6);
      return text6;
    };
    r21 = dyn srcfilecopy(p2, p3);
    check L56() else D7();
  L70():
    missing1 = ldf missing in base;
    r32 = dyn missing1(<sym srcfile>);
    goto L23(r32);
  L71():
    r30 = dyn base5(<sym srcfile>);
    goto L23(r30);
  L77():
    st file = r36;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L110():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    parse = ldf parse in base;
    r61 = dyn parse(file13, n2, text12, prompt2, srcfile4, encoding4);
    check L111() else D35();
  D7():
    deopt 36 [r21];
  D35():
    deopt 143 [r61];
  L24():
    goto L25(NULL);
  L25(r33):
    goto L26(r33);
  L27(r38):
    c9 = `as.logical`(r38);
    if c9 then L80() else L28();
  L56():
    st srcfile = r21;
    goto L17(r21);
  L72():
    st srcfile = "<stdin>";
    goto L25("<stdin>");
  L78():
    missing2 = ldf missing in base;
    r39 = dyn missing2(<sym srcfile>);
    goto L27(r39);
  L79():
    r37 = dyn base6(<sym srcfile>);
    goto L27(r37);
  L111():
    goto L34(r61);
  L28():
    goto L29();
  L29():
    keep_source5 = ld `keep.source`;
    check L83() else D18();
  L80():
    filename2 = ld filename;
    check L81() else D17();
  D17():
    deopt 78 [filename2];
  D18():
    deopt 83 [keep_source5];
  L81():
    filename3 = force? filename2;
    checkMissing(filename3);
    st srcfile = filename3;
    goto L29();
  L83():
    keep_source6 = force? keep_source5;
    checkMissing(keep_source6);
    c10 = `as.logical`(keep_source6);
    if c10 then L84() else L30();
  L30():
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L100() else L101();
  L84():
    readLines = ldf readLines;
    check L85() else D19();
  D19():
    deopt 86 [];
  L85():
    p5 = prom<V +>{
      file8 = ld file;
      file9 = force? file8;
      checkMissing(file9);
      return file9;
    };
    p6 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r42 = dyn readLines[, warn, encoding](p5, FALSE, p6);
    check L86() else D20();
  L100():
    on_exit = ldf `on.exit` in base;
    r58 = dyn on_exit(<lang close(file)>);
    goto L26(r58);
  L101():
    r57 = dyn base8(<lang close(file)>);
    goto L26(r57);
  D20():
    deopt 92 [r42];
  L86():
    st text = r42;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L31(r44):
    r46 = `!`(r44);
    c11 = `as.logical`(r46);
    if c11 then L91() else L32();
  L87():
    text7 = ld text;
    check L89() else D21();
  L88():
    r43 = dyn base7(<sym text>);
    goto L31(r43);
  D21():
    deopt 96 [text7];
  L32():
    goto L33();
  L33():
    close = ldf close;
    check L93() else D23();
  L89():
    text8 = force? text7;
    checkMissing(text8);
    length1 = ldf length in base;
    r45 = dyn length1(text8);
    check L90() else D22();
  L91():
    st text = "";
    goto L33();
  D22():
    deopt 99 [r45];
  D23():
    deopt 107 [];
  L90():
    goto L31(r45);
  L93():
    p7 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    r49 = dyn close(p7);
    check L94() else D24();
  D24():
    deopt 109 [r49];
  L94():
    stdin2 = ldf stdin;
    check L95() else D25();
  D25():
    deopt 111 [];
  L95():
    r50 = dyn stdin2();
    check L96() else D26();
  D26():
    deopt 112 [r50];
  L96():
    st file = r50;
    srcfilecopy1 = ldf srcfilecopy;
    check L97() else D27();
  D27():
    deopt 115 [];
  L97():
    p8 = prom<V +>{
      filename5 = ld filename;
      filename6 = force? filename5;
      checkMissing(filename6);
      return filename6;
    };
    p9 = prom<V +>{
      text9 = ld text;
      text10 = force? text9;
      checkMissing(text10);
      return text10;
    };
    p11 = prom<V +>{
      file_mtime = ldf `file.mtime`;
      p10 = prom<V +>{
        filename7 = ld filename;
        filename8 = force? filename7;
        checkMissing(filename8);
        return filename8;
      };
      r54 = dyn file_mtime(p10);
      return r54;
    };
    r56 = dyn srcfilecopy1[, , , isFile](p8, p9, p11, TRUE);
    check L98() else D28();
  D28():
    deopt 121 [r56];
  L98():
    st srcfile = r56;
    goto L26(r56);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return "Syntax error.";
  }
}