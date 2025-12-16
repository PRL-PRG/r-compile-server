fun main() {
  () -+> V { reg r:cls, reg file_show:cls, reg file_path:cls, reg R_home:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner1958681005;
    st `file.show` = r;
    file_show = ldf `file.show`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r1 = dyn R_home("doc");
        return r1;
      };
      r3 = dyn file_path(p, "COPYRIGHTS");
      return r3;
    };
    r5 = dyn file_show(p1);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner1958681005(`...`, header, title, `delete.file`, pager, encoding) {
  (reg ddd:dots, reg header:*, reg title:*, reg delete_file:*, reg pager:*, reg encoding:*) -+> V { var `...`:dots?, var header:*, reg header_isMissing:L, reg header_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), var title:*, reg title_isMissing:L, reg title_orDefault:*, var `delete.file`:*, reg delete_file_isMissing:L, reg delete_file_orDefault:*, var pager:*, reg pager_isMissing:L, reg pager_orDefault:*, reg getOption:cls, reg r4:V, reg p1:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg path_expand:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c:cls, reg ddd1:dots?, reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg files:*, reg files1:V, reg length:cls, reg r13:V, reg nfiles:*, reg nfiles1:V, reg r14:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg invisible:cls, reg r17:V, reg l10n_info:cls, reg r20:V, reg c2:L, reg r22:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r23:V, reg c3:L, reg c5:V, reg encoding1:*, reg encoding2:V, reg r24:V, reg c6:L, reg c7:V, reg c9:L, reg l10n_info1:cls, reg r26:V, reg c10:L, reg r28:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r29:V, reg c11:L, reg c13:V, reg encoding3:*, reg encoding4:V, reg r30:V, reg c14:L, reg c15:V, reg c17:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg encoding5:*, reg encoding6:V, reg is_na:cls, reg r34:V, reg r35:V, reg c18:L, reg c20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg c23:L, reg r37:V, reg encoding7:*, reg encoding8:V, reg nzchar:cls, reg r38:V, reg c24:L, reg c25:V, reg c27:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg files2:*, reg files3:V, reg r41:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c28:L, reg x:V, reg files4:*, reg files5:V, reg c29:L, reg i6:I, reg files7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg i9:*, reg i10:V, reg __2:cls, reg r42:V, reg tempfile:cls, reg r43:V, reg readLines:cls, reg f:*, reg f1:V, reg p3:p(V +), reg r45:V, reg try:cls, reg iconv:cls, reg tmp:*, reg tmp1:V, reg p4:p(V +), reg encoding9:*, reg encoding10:V, reg p5:p(V +), reg r48:V, reg p6:p(V +), reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg i13:I, reg r52:V, reg tmp2:*, reg tmp3:V, reg inherits:cls, reg r53:V, reg c30:L, reg file_copy:cls, reg f2:*, reg f3:V, reg p7:p(V +), reg tf:*, reg tf1:V, reg p8:p(V +), reg r56:V, reg i16:I, reg writeLines:cls, reg tmp4:*, reg tmp5:V, reg p9:p(V +), reg tf2:*, reg tf3:V, reg p10:p(V +), reg r60:V, reg tf4:*, reg tf5:V, reg l1:*, reg c31:L, reg i18:I, reg tf7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i20:I, reg dx7:V, reg i21:*, reg i22:V, reg ___:cls, reg r61:V, reg delete_file1:*, reg delete_file2:V, reg c32:L, reg unlink:cls, reg f4:*, reg f5:V, reg p11:p(V +), reg r63:V, reg i25:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg pager1:*, reg pager2:V, reg is_function:cls, reg r68:V, reg c33:L, reg pager3:cls, reg files8:*, reg files9:V, reg p12:p(V +), reg header1:*, reg header2:V, reg p13:p(V +), reg title1:*, reg title2:V, reg p14:p(V +), reg delete_file3:*, reg delete_file4:V, reg p15:p(V +), reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg files10:*, reg files11:V, reg header3:*, reg header4:V, reg title3:*, reg title4:V, reg delete_file5:*, reg delete_file6:V, reg pager4:*, reg pager5:V, reg file_show:cls, reg r76:V |
    mkenv;
    st `...` = ddd;
    header_isMissing = missing.0(header);
    if header_isMissing then L0() else L1(header);
  L0():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep("", <sym nfiles>);
      goto L0(r2);
    L2():
      r = dyn base("", <sym nfiles>);
      goto L0(r);
    };
    goto L1(p);
  L1(header_orDefault):
    st header = header_orDefault;
    title_isMissing = missing.0(title);
    if title_isMissing then L2("R Information") else L2(title);
  L2(title_orDefault):
    st title = title_orDefault;
    delete_file_isMissing = missing.0(delete_file);
    if delete_file_isMissing then L3(FALSE) else L3(delete_file);
  L3(delete_file_orDefault):
    st `delete.file` = delete_file_orDefault;
    pager_isMissing = missing.0(pager);
    if pager_isMissing then L4() else L5(pager);
  L4():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("pager");
      return r4;
    };
    goto L5(p1);
  L5(pager_orDefault):
    st pager = pager_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L6("") else L6(encoding);
  L6(encoding_orDefault):
    st encoding = encoding_orDefault;
    path_expand = ldf `path.expand`;
    check L37() else D0();
  D0():
    deopt 1 [];
  L37():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c;
      ddd1 = ld `...`;
      r8 = dyn c[`...`](ddd1);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym ...>);
      goto L0(r6);
    };
    r10 = dyn path_expand(p2);
    check L38() else D1();
  D1():
    deopt 3 [r10];
  L38():
    st files = r10;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L7(r12):
    st nfiles = r12;
    nfiles = ld nfiles;
    check L43() else D4();
  L39():
    files = ld files;
    check L41() else D2();
  L40():
    r11 = dyn base2(<sym files>);
    goto L7(r11);
  D2():
    deopt 7 [files];
  D4():
    deopt 12 [nfiles];
  L41():
    files1 = force? files;
    checkMissing(files1);
    length = ldf length in base;
    r13 = dyn length(files1);
    check L42() else D3();
  L43():
    nfiles1 = force? nfiles;
    checkMissing(nfiles1);
    r14 = `==`(nfiles1, 0);
    c1 = `as.logical`(r14);
    if c1 then L44() else L8();
  D3():
    deopt 10 [r13];
  L8():
    l10n_info = ldf l10n_info;
    check L50() else D6();
  L42():
    goto L7(r13);
  L44():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  D6():
    deopt 25 [];
  L9(r16):
    popenv;
    return r16;
  L45():
    invisible = ldf invisible in base;
    r17 = dyn invisible(NULL);
    check L47() else D5();
  L46():
    r15 = dyn base3(NULL);
    goto L9(r15);
  L50():
    r20 = dyn l10n_info();
    check L51() else D7();
  D5():
    deopt 20 [r17];
  D7():
    deopt 26 [r20];
  L47():
    goto L9(r17);
  L51():
    c2 = `is.object`(r20);
    if c2 then L52() else L53(r20);
  L11(dx1):
    c3 = `as.logical`(dx1);
    if c3 then L55() else L12(c3);
  L52():
    dr = tryDispatchBuiltin.1("[[", r20);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(dr);
  L53(r22):
    __ = ldf `[[` in base;
    r23 = dyn __(r22, "UTF-8");
    goto L11(r23);
  L12(c5):
    c9 = `as.logical`(c5);
    if c9 then L58() else L13();
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L55():
    encoding1 = ld encoding;
    check L56() else D8();
  D8():
    deopt 30 [c3, encoding1];
  L13():
    goto L14();
  L14():
    l10n_info1 = ldf l10n_info;
    check L60() else D9();
  L56():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    r24 = `==`(encoding2, "UTF-8");
    c6 = `as.logical`(r24);
    c7 = `&&`(c3, c6);
    goto L12(c7);
  L58():
    st encoding = "";
    goto L14();
  D9():
    deopt 41 [];
  L60():
    r26 = dyn l10n_info1();
    check L61() else D10();
  D10():
    deopt 42 [r26];
  L61():
    c10 = `is.object`(r26);
    if c10 then L62() else L63(r26);
  L15(dx3):
    c11 = `as.logical`(dx3);
    if c11 then L65() else L16(c11);
  L62():
    dr2 = tryDispatchBuiltin.1("[[", r26);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(dr2);
  L63(r28):
    __1 = ldf `[[` in base;
    r29 = dyn __1(r28, "Latin-1");
    goto L15(r29);
  L16(c13):
    c17 = `as.logical`(c13);
    if c17 then L68() else L17();
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L65():
    encoding3 = ld encoding;
    check L66() else D11();
  D11():
    deopt 46 [c11, encoding3];
  L17():
    goto L18();
  L18():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L66():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    r30 = `==`(encoding4, "latin1");
    c14 = `as.logical`(r30);
    c15 = `&&`(c11, c14);
    goto L16(c15);
  L68():
    st encoding = "";
    goto L18();
  L19(r33):
    r35 = `!`(r33);
    c18 = `as.logical`(r35);
    if c18 then L74() else L20(c18);
  L70():
    encoding5 = ld encoding;
    check L72() else D12();
  L71():
    r32 = dyn base4(<sym encoding>);
    goto L19(r32);
  D12():
    deopt 58 [encoding5];
  L20(c20):
    c27 = `as.logical`(c20);
    if c27 then L80() else L22();
  L72():
    encoding6 = force? encoding5;
    checkMissing(encoding6);
    is_na = ldf `is.na` in base;
    r34 = dyn is_na(encoding6);
    check L73() else D13();
  L74():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  D13():
    deopt 61 [r34];
  L21(c23, r37):
    c24 = `as.logical`(r37);
    c25 = `&&`(c23, c24);
    goto L20(c25);
  L22():
    goto L33();
  L33():
    sym8 = ldf `is.function`;
    base8 = ldf `is.function` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L73():
    goto L19(r34);
  L75():
    encoding7 = ld encoding;
    check L77() else D14();
  L76():
    r36 = dyn base5(<sym encoding>);
    goto L21(c18, r36);
  L80():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  D14():
    deopt 65 [c18, encoding7];
  L23(r40):
    s = toForSeq(r40);
    l = length(s);
    i = 0;
    goto L24(i);
  L34(r67):
    c33 = `as.logical`(r67);
    if c33 then L121() else L35();
  L77():
    encoding8 = force? encoding7;
    checkMissing(encoding8);
    nzchar = ldf nzchar in base;
    r38 = dyn nzchar(encoding8);
    check L78() else D15();
  L81():
    files2 = ld files;
    check L83() else D16();
  L82():
    r39 = dyn base6(<sym files>);
    goto L23(r39);
  L117():
    pager1 = ld pager;
    check L119() else D36();
  L118():
    r66 = dyn base8(<sym pager>);
    goto L34(r66);
  D15():
    deopt 68 [c18, r38];
  D16():
    deopt 71 [files2];
  D36():
    deopt 139 [pager1];
  L24(i1):
    i2 = `+`.1(i1, 1);
    c28 = `<`.1(l, i2);
    if c28 then L84() else L32();
  L35():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  L78():
    goto L21(c18, r38);
  L83():
    files3 = force? files2;
    checkMissing(files3);
    r41 = seq_along(files3);
    goto L23(r41);
  L119():
    pager2 = force? pager1;
    checkMissing(pager2);
    is_function = ldf `is.function` in base;
    r68 = dyn is_function(pager2);
    check L120() else D37();
  L121():
    pager3 = ldf pager;
    check L122() else D38();
  D37():
    deopt 142 [r68];
  D38():
    deopt 144 [];
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    files4 = ld files;
    check L85() else D17();
  L36(r75):
    popenv;
    return r75;
  L84():
    st `delete.file` = TRUE;
    goto L33();
  L120():
    goto L34(r68);
  L122():
    p12 = prom<V +>{
      files8 = ld files;
      files9 = force? files8;
      checkMissing(files9);
      return files9;
    };
    p13 = prom<V +>{
      header1 = ld header;
      header2 = force? header1;
      checkMissing(header2);
      return header2;
    };
    p14 = prom<V +>{
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    };
    p15 = prom<V +>{
      delete_file3 = ld `delete.file`;
      delete_file4 = force? delete_file3;
      checkMissing(delete_file4);
      return delete_file4;
    };
    r73 = dyn pager3[, header, title, `delete.file`](p12, p13, p14, p15);
    check L123() else D39();
  L125():
    files10 = ld files;
    check L127() else D40();
  L126():
    r74 = dyn base9(<lang file.show(files, header, title, delete.file, pager)>);
    goto L36(r74);
  D17():
    deopt 74 [i2, files4];
  D39():
    deopt 152 [r73];
  D40():
    deopt 155 [files10];
  L85():
    files5 = force? files4;
    checkMissing(files5);
    c29 = `is.object`(files5);
    if c29 then L86() else L87(i2, files5);
  L123():
    popenv;
    return r73;
  L127():
    files11 = force? files10;
    checkMissing(files11);
    header3 = ld header;
    check L128() else D41();
  D41():
    deopt 157 [header3];
  L25(i8, dx5):
    st f = dx5;
    tempfile = ldf tempfile;
    check L90() else D19();
  L86():
    dr4 = tryDispatchBuiltin.1("[", files5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L88() else L87(i2, dr4);
  L87(i6, files7):
    i9 = ld i;
    check L89() else D18();
  L128():
    header4 = force? header3;
    checkMissing(header4);
    title3 = ld title;
    check L129() else D42();
  D18():
    deopt 76 [i6, files7, i9];
  D19():
    deopt 81 [i8];
  D42():
    deopt 159 [title3];
  L88():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(i2, dx4);
  L89():
    i10 = force? i9;
    __2 = ldf `[` in base;
    r42 = dyn __2(files7, i10);
    goto L25(i6, r42);
  L90():
    r43 = dyn tempfile();
    check L91() else D20();
  L129():
    title4 = force? title3;
    checkMissing(title4);
    delete_file5 = ld `delete.file`;
    check L130() else D43();
  D20():
    deopt 82 [i8, r43];
  D43():
    deopt 161 [delete_file5];
  L91():
    st tf = r43;
    readLines = ldf readLines;
    check L92() else D21();
  L130():
    delete_file6 = force? delete_file5;
    checkMissing(delete_file6);
    pager4 = ld pager;
    check L131() else D44();
  D21():
    deopt 85 [i8];
  D44():
    deopt 163 [pager4];
  L92():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r45 = dyn readLines[, warn](p3, FALSE);
    check L93() else D22();
  L131():
    pager5 = force? pager4;
    checkMissing(pager5);
    file_show = ldf `file.show` in base;
    r76 = dyn file_show(files11, header4, title4, delete_file6, pager5);
    check L132() else D45();
  D22():
    deopt 89 [i8, r45];
  D45():
    deopt 166 [r76];
  L93():
    st tmp = r45;
    try = ldf try;
    check L94() else D23();
  L132():
    goto L36(r76);
  D23():
    deopt 92 [i8];
  L94():
    p6 = prom<V +>{
      iconv = ldf iconv;
      p4 = prom<V +>{
        tmp = ld tmp;
        tmp1 = force? tmp;
        checkMissing(tmp1);
        return tmp1;
      };
      p5 = prom<V +>{
        encoding9 = ld encoding;
        encoding10 = force? encoding9;
        checkMissing(encoding10);
        return encoding10;
      };
      r48 = dyn iconv(p4, p5, "", "byte");
      return r48;
    };
    r50 = dyn try(p6);
    check L95() else D24();
  D24():
    deopt 94 [i8, r50];
  L95():
    st tmp2 = r50;
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L26(i13, r52):
    c30 = `as.logical`(r52);
    if c30 then L100() else L27();
  L96():
    tmp2 = ld tmp2;
    check L98() else D25();
  L97():
    r51 = dyn base7(<sym tmp2>, "try-error");
    goto L26(i8, r51);
  D25():
    deopt 98 [i8, tmp2];
  L27():
    writeLines = ldf writeLines;
    check L104() else D29();
  L28(i16):
    tf4 = ld tf;
    check L106() else D31();
  L98():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    inherits = ldf inherits in base;
    r53 = dyn inherits(tmp3, "try-error", FALSE);
    check L99() else D26();
  L100():
    file_copy = ldf `file.copy`;
    check L101() else D27();
  D26():
    deopt 103 [i8, r53];
  D27():
    deopt 105 [i13];
  D29():
    deopt 110 [i13];
  D31():
    deopt 114 [i16, tf4];
  L99():
    goto L26(i8, r53);
  L101():
    p7 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p8 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r56 = dyn file_copy(p7, p8);
    check L102() else D28();
  L104():
    p9 = prom<V +>{
      tmp4 = ld tmp2;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      return tmp5;
    };
    p10 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r60 = dyn writeLines(p9, p10);
    check L105() else D30();
  L106():
    tf5 = force? tf4;
    checkMissing(tf5);
    l1 = ld files;
    c31 = `is.object`(l1);
    if c31 then L107() else L108(i16, tf5, l1);
  D28():
    deopt 108 [i13, r56];
  D30():
    deopt 113 [i13, r60];
  L29(i20, dx7):
    st files = dx7;
    delete_file1 = ld `delete.file`;
    check L111() else D33();
  L102():
    goto L28(i13);
  L105():
    goto L28(i13);
  L107():
    dr6 = tryDispatchBuiltin.0("[<-", l1, tf5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L109() else L108(i16, tf5, dr6);
  L108(i18, tf7, l3):
    i21 = ld i;
    check L110() else D32();
  D32():
    deopt 117 [i18, tf7, l3, tf5, i21];
  D33():
    deopt 121 [i20, delete_file1];
  L109():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L29(i16, dx6);
  L110():
    i22 = force? i21;
    ___ = ldf `[<-` in base;
    r61 = dyn ___(l3, tf5, i22);
    goto L29(i18, r61);
  L111():
    delete_file2 = force? delete_file1;
    checkMissing(delete_file2);
    c32 = `as.logical`(delete_file2);
    if c32 then L112() else L30();
  L30():
    goto L31(i20);
  L31(i25):
    goto L24(i25);
  L112():
    unlink = ldf unlink;
    check L113() else D34();
  D34():
    deopt 124 [i20];
  L113():
    p11 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r63 = dyn unlink(p11);
    check L114() else D35();
  D35():
    deopt 126 [i20, r63];
  L114():
    goto L31(i20);
  }
}