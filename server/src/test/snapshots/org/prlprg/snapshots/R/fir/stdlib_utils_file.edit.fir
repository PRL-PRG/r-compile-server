fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1781287994;
    st `file.edit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1781287994(`...`, title, editor, fileEncoding) {
  (reg ddd:dots, reg title:*, reg editor:*, reg fileEncoding:*) -+> V { var `...`:dots?, var title:*, reg title_isMissing:L, reg title_orDefault:*, reg file:*, reg file1:V, reg p:p(V +), var editor:*, reg editor_isMissing:L, reg editor_orDefault:*, reg getOption:cls, reg r1:V, reg p1:p(V +), var fileEncoding:*, reg fileEncoding_isMissing:L, reg fileEncoding_orDefault:*, reg path_expand:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg ddd1:dots?, reg r5:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg title1:*, reg title2:V, reg as_character:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg file2:*, reg file3:V, reg length:cls, reg r15:V, reg rep_len:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg fileEncoding1:*, reg fileEncoding2:V, reg nzchar:cls, reg r19:V, reg c1:L, reg c3:V, reg fileEncoding3:*, reg fileEncoding4:V, reg r20:V, reg c4:L, reg c5:V, reg c7:L, reg file4:*, reg file5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg file6:*, reg file7:V, reg r23:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg tempfile:cls, reg r24:V, reg file8:cls, reg file9:*, reg file10:V, reg c9:L, reg file12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r25:V, reg p3:p(V +), reg fileEncoding5:*, reg fileEncoding6:V, reg p4:p(V +), reg r28:V, reg writeLines:cls, reg readLines:cls, reg con:*, reg con1:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg tfile:*, reg tfile1:V, reg p7:p(V +), reg r33:V, reg close:cls, reg con2:*, reg con3:V, reg p8:p(V +), reg r35:V, reg tfile2:*, reg tfile3:V, reg l1:*, reg c10:L, reg i8:I, reg tfile5:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ___:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg editor1:*, reg editor2:V, reg is_function:cls, reg r39:V, reg c11:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg editor3:cls, reg file13:*, reg file14:V, reg p9:p(V +), reg title3:*, reg title4:V, reg p10:p(V +), reg r44:V, reg invisible:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg C_fileedit:*, reg C_fileedit1:V, reg file15:*, reg file16:V, reg title5:*, reg title6:V, reg editor4:*, reg editor5:V, reg _External2:cls, reg r50:V, reg invisible1:cls, reg r51:V |
    mkenv;
    st `...` = ddd;
    title_isMissing = missing.0(title);
    if title_isMissing then L0() else L1(title);
  L0():
    p = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    goto L1(p);
  L1(title_orDefault):
    st title = title_orDefault;
    editor_isMissing = missing.0(editor);
    if editor_isMissing then L2() else L3(editor);
  L2():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r1 = dyn getOption("editor");
      return r1;
    };
    goto L3(p1);
  L3(editor_orDefault):
    st editor = editor_orDefault;
    fileEncoding_isMissing = missing.0(fileEncoding);
    if fileEncoding_isMissing then L4("") else L4(fileEncoding);
  L4(fileEncoding_orDefault):
    st fileEncoding = fileEncoding_orDefault;
    path_expand = ldf `path.expand`;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c;
      ddd1 = ld `...`;
      r5 = dyn c[`...`](ddd1);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym ...>);
      goto L0(r3);
    };
    r7 = dyn path_expand(p2);
    check L22() else D1();
  D1():
    deopt 3 [r7];
  L22():
    st file = r7;
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L5(r9):
    st title = r9;
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L23():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L24():
    r8 = dyn base1(<lang as.character(title)>, <lang length(file)>);
    goto L5(r8);
  L6(r11):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L8(r18):
    c1 = `as.logical`(r18);
    if c1 then L38() else L9(c1);
  L25():
    title1 = ld title;
    check L27() else D2();
  L26():
    r10 = dyn base2(<sym title>);
    goto L6(r10);
  L34():
    fileEncoding1 = ld fileEncoding;
    check L36() else D7();
  L35():
    r17 = dyn base4(<sym fileEncoding>);
    goto L8(r17);
  D2():
    deopt 9 [title1];
  D7():
    deopt 24 [fileEncoding1];
  L7(r14):
    rep_len = ldf rep_len in base;
    r16 = dyn rep_len(r11, r14);
    check L33() else D6();
  L9(c3):
    c7 = `as.logical`(c3);
    if c7 then L41() else L10();
  L27():
    title2 = force? title1;
    checkMissing(title2);
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(title2);
    check L28() else D3();
  L29():
    file2 = ld file;
    check L31() else D4();
  L30():
    r13 = dyn base3(<sym file>);
    goto L7(r13);
  L36():
    fileEncoding2 = force? fileEncoding1;
    checkMissing(fileEncoding2);
    nzchar = ldf nzchar in base;
    r19 = dyn nzchar(fileEncoding2);
    check L37() else D8();
  L38():
    fileEncoding3 = ld fileEncoding;
    check L39() else D9();
  D3():
    deopt 12 [r12];
  D4():
    deopt 15 [file2];
  D6():
    deopt 20 [r16];
  D8():
    deopt 27 [r19];
  D9():
    deopt 28 [c1, fileEncoding3];
  L10():
    goto L15();
  L15():
    sym6 = ldf `is.function`;
    base6 = ldf `is.function` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L28():
    goto L6(r12);
  L31():
    file3 = force? file2;
    checkMissing(file3);
    length = ldf length in base;
    r15 = dyn length(file3);
    check L32() else D5();
  L33():
    goto L5(r16);
  L37():
    goto L8(r19);
  L39():
    fileEncoding4 = force? fileEncoding3;
    checkMissing(fileEncoding4);
    r20 = `!=`(fileEncoding4, "native.enc");
    c4 = `as.logical`(r20);
    c5 = `&&`(c1, c4);
    goto L9(c5);
  L41():
    file4 = ld file;
    check L42() else D10();
  D5():
    deopt 18 [r15];
  D10():
    deopt 33 [file4];
  L16(r38):
    c11 = `as.logical`(r38);
    if c11 then L65() else L17();
  L32():
    goto L7(r15);
  L42():
    file5 = force? file4;
    checkMissing(file5);
    st tfile = file5;
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L61():
    editor1 = ld editor;
    check L63() else D22();
  L62():
    r37 = dyn base6(<sym editor>);
    goto L16(r37);
  D22():
    deopt 74 [editor1];
  L11(r22):
    s = toForSeq(r22);
    l = length(s);
    i = 0;
    goto L12(i);
  L17():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  L43():
    file6 = ld file;
    check L45() else D11();
  L44():
    r21 = dyn base5(<sym file>);
    goto L11(r21);
  L63():
    editor2 = force? editor1;
    checkMissing(editor2);
    is_function = ldf `is.function` in base;
    r39 = dyn is_function(editor2);
    check L64() else D23();
  L65():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  D11():
    deopt 37 [file6];
  D23():
    deopt 77 [r39];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L46() else L14();
  L18(r41):
    popenv;
    return r41;
  L19(r47):
    popenv;
    return r47;
  L45():
    file7 = force? file6;
    checkMissing(file7);
    r23 = seq_along(file7);
    goto L11(r23);
  L64():
    goto L16(r39);
  L66():
    editor3 = ldf editor;
    check L68() else D24();
  L67():
    r40 = dyn base7(<lang editor(file=file, title=title)>);
    goto L18(r40);
  L72():
    sym9 = ldf `.External2`;
    base9 = ldf `.External2` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L74() else L75();
  L73():
    r46 = dyn base8(<lang .External2(C_fileedit, file, title, editor)>);
    goto L19(r46);
  D24():
    deopt 81 [];
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    tempfile = ldf tempfile;
    check L47() else D12();
  L20(r49):
    invisible1 = ldf invisible in base;
    r51 = dyn invisible1(r49);
    check L81() else D32();
  L46():
    goto L15();
  L68():
    p9 = prom<V +>{
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    p10 = prom<V +>{
      title3 = ld title;
      title4 = force? title3;
      checkMissing(title4);
      return title4;
    };
    r44 = dyn editor3[file, title](p9, p10);
    check L69() else D25();
  L74():
    C_fileedit = ld C_fileedit;
    check L76() else D27();
  L75():
    r48 = dyn base9(<sym C_fileedit>, <sym file>, <sym title>, <sym editor>);
    goto L20(r48);
  D12():
    deopt 41 [i2];
  D25():
    deopt 86 [r44];
  D27():
    deopt 93 [C_fileedit];
  D32():
    deopt 104 [r51];
  L47():
    r24 = dyn tempfile();
    check L48() else D13();
  L69():
    invisible = ldf invisible in base;
    r45 = dyn invisible(r44);
    check L70() else D26();
  L76():
    C_fileedit1 = force? C_fileedit;
    checkMissing(C_fileedit1);
    file15 = ld file;
    check L77() else D28();
  L81():
    goto L19(r51);
  D13():
    deopt 42 [i2, r24];
  D26():
    deopt 88 [r45];
  D28():
    deopt 95 [file15];
  L48():
    st tfile = r24;
    file8 = ldf file;
    check L49() else D14();
  L70():
    goto L18(r45);
  L77():
    file16 = force? file15;
    checkMissing(file16);
    title5 = ld title;
    check L78() else D29();
  D14():
    deopt 45 [i2];
  D29():
    deopt 97 [title5];
  L49():
    p3 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      c9 = `is.object`(file10);
      if c9 then L1() else L2(file10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", file10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(file12):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r25 = dyn __(file12, i6);
      goto L0(r25);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      fileEncoding5 = ld fileEncoding;
      fileEncoding6 = force? fileEncoding5;
      checkMissing(fileEncoding6);
      return fileEncoding6;
    };
    r28 = dyn file8[, encoding](p3, p4);
    check L50() else D15();
  L78():
    title6 = force? title5;
    checkMissing(title6);
    editor4 = ld editor;
    check L79() else D30();
  D15():
    deopt 49 [i2, r28];
  D30():
    deopt 99 [editor4];
  L50():
    st con = r28;
    writeLines = ldf writeLines;
    check L51() else D16();
  L79():
    editor5 = force? editor4;
    checkMissing(editor5);
    _External2 = ldf `.External2` in base;
    r50 = dyn _External2(C_fileedit1, file16, title6, editor5);
    check L80() else D31();
  D16():
    deopt 52 [i2];
  D31():
    deopt 102 [r50];
  L51():
    p6 = prom<V +>{
      readLines = ldf readLines;
      p5 = prom<V +>{
        con = ld con;
        con1 = force? con;
        checkMissing(con1);
        return con1;
      };
      r30 = dyn readLines(p5);
      return r30;
    };
    p7 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    r33 = dyn writeLines(p6, p7);
    check L52() else D17();
  L80():
    goto L20(r50);
  D17():
    deopt 55 [i2, r33];
  L52():
    close = ldf close;
    check L53() else D18();
  D18():
    deopt 57 [i2];
  L53():
    p8 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r35 = dyn close(p8);
    check L54() else D19();
  D19():
    deopt 59 [i2, r35];
  L54():
    tfile2 = ld tfile;
    check L55() else D20();
  D20():
    deopt 60 [i2, tfile2];
  L55():
    tfile3 = force? tfile2;
    checkMissing(tfile3);
    l1 = ld file;
    c10 = `is.object`(l1);
    if c10 then L56() else L57(i2, tfile3, l1);
  L13(i10, dx3):
    st file = dx3;
    goto L12(i10);
  L56():
    dr2 = tryDispatchBuiltin.0("[<-", l1, tfile3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(i2, tfile3, dr2);
  L57(i8, tfile5, l3):
    i11 = ld i;
    check L59() else D21();
  D21():
    deopt 63 [i8, tfile5, l3, tfile3, i11];
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(i2, dx2);
  L59():
    i12 = force? i11;
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l3, tfile3, i12);
    goto L13(i8, r36);
  }
}