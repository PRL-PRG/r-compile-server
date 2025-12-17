fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1826123595;
    st `.Rdfiles2tex` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1826123595(files, outfile, encoding, outputEncoding, append, extraDirs, internals, silent, pkglist) {
  (reg files:*, reg outfile:*, reg encoding:*, reg outputEncoding:*, reg append:*, reg extraDirs:*, reg internals:*, reg silent:*, reg pkglist:*) -+> V { var files:*, var outfile:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var outputEncoding:*, reg outputEncoding_isMissing:L, reg outputEncoding_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var extraDirs:*, reg extraDirs_isMissing:L, reg extraDirs_orDefault:*, var internals:*, reg internals_isMissing:L, reg internals_orDefault:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var pkglist:*, reg pkglist_isMissing:L, reg pkglist_orDefault:*, reg dir_exists:cls, reg files1:*, reg files2:V, reg p:p(V +), reg r1:V, reg c:L, reg _pkg2tex:cls, reg files3:*, reg files4:V, reg p1:p(V +), reg outfile1:*, reg outfile2:V, reg p2:p(V +), reg internals1:*, reg internals2:V, reg p3:p(V +), reg encoding1:*, reg encoding2:V, reg p4:p(V +), reg outputEncoding1:*, reg outputEncoding2:V, reg p5:p(V +), reg extraDirs1:*, reg extraDirs2:V, reg p6:p(V +), reg append1:*, reg append2:V, reg p7:p(V +), reg silent1:*, reg silent2:V, reg p8:p(V +), reg pkglist1:*, reg pkglist2:V, reg p9:p(V +), reg r11:V, reg strsplit:cls, reg files5:*, reg files6:V, reg p10:p(V +), reg r13:V, reg c1:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg silent3:*, reg silent4:V, reg r17:V, reg c2:L, reg message:cls, reg r18:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg outfile3:*, reg outfile4:V, reg c3:L, reg c4:L, reg file:cls, reg outfile5:*, reg outfile6:V, reg p11:p(V +), reg append3:*, reg append4:V, reg c5:L, reg p12:p(V +), reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg on_exit:cls, reg r27:V, reg initialRdMacros:cls, reg pkglist3:*, reg pkglist4:V, reg p13:p(V +), reg r30:V, reg files7:*, reg files8:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg silent5:*, reg silent6:V, reg r31:V, reg c7:L, reg cat:cls, reg basename:cls, reg f:*, reg f1:V, reg p14:p(V +), reg r33:V, reg p15:p(V +), reg r35:V, reg i7:I, reg parse_Rd:cls, reg f2:*, reg f3:V, reg p16:p(V +), reg encoding3:*, reg encoding4:V, reg p17:p(V +), reg macros:*, reg macros1:V, reg p18:p(V +), reg r40:V, reg internals3:*, reg internals4:V, reg r41:V, reg c8:L, reg i9:I, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg i12:I, reg c13:L, reg r43:V, reg _Rd_get_metadata:cls, reg rd:*, reg rd1:V, reg p19:p(V +), reg r45:V, reg r46:V, reg any:cls, reg r47:V, reg c14:L, reg c15:V, reg c17:L, reg character:cls, reg r49:V, reg textConnection:cls, reg r50:V, reg Rd2latex:cls, reg rd2:*, reg rd3:V, reg p20:p(V +), reg con:*, reg con1:V, reg p21:p(V +), reg outputEncoding3:*, reg outputEncoding4:V, reg p22:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r54:V, reg r55:V, reg c18:cls, reg r56:V, reg p23:p(V +), reg r58:V, reg close:cls, reg con2:*, reg con3:V, reg p24:p(V +), reg r60:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg i20:I, reg r62:V, reg res:*, reg res1:V, reg attr:cls, reg r63:V, reg c19:L, reg file_path:cls, reg dirname:cls, reg f4:*, reg f5:V, reg p25:p(V +), reg r65:V, reg p26:p(V +), reg r67:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg i25:I, reg r69:V, reg _file_path_to_LaTeX_graphicspath:cls, reg graphicspath:*, reg graphicspath1:V, reg p27:p(V +), reg r71:V, reg lines:*, reg lines1:V, reg c20:cls, reg r72:V, reg i26:I, reg writeLines:cls, reg lines2:*, reg lines3:V, reg p28:p(V +), reg outfile7:*, reg outfile8:V, reg p29:p(V +), reg r76:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r77:V, reg r78:V, reg hasFigures:*, reg hasFigures1:V, reg list:cls, reg r79:V |
    mkenv;
    st files = files;
    st outfile = outfile;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    outputEncoding_isMissing = missing.0(outputEncoding);
    if outputEncoding_isMissing then L1("UTF-8") else L1(outputEncoding);
  L1(outputEncoding_orDefault):
    st outputEncoding = outputEncoding_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L2(FALSE) else L2(append);
  L2(append_orDefault):
    st append = append_orDefault;
    extraDirs_isMissing = missing.0(extraDirs);
    if extraDirs_isMissing then L3(NULL) else L3(extraDirs);
  L3(extraDirs_orDefault):
    st extraDirs = extraDirs_orDefault;
    internals_isMissing = missing.0(internals);
    if internals_isMissing then L4(FALSE) else L4(internals);
  L4(internals_orDefault):
    st internals = internals_orDefault;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L5(FALSE) else L5(silent);
  L5(silent_orDefault):
    st silent = silent_orDefault;
    pkglist_isMissing = missing.0(pkglist);
    if pkglist_isMissing then L6(NULL) else L6(pkglist);
  L6(pkglist_orDefault):
    st pkglist = pkglist_orDefault;
    dir_exists = ldf `dir.exists`;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    p = prom<V +>{
      files1 = ld files;
      files2 = force? files1;
      checkMissing(files2);
      return files2;
    };
    r1 = dyn dir_exists(p);
    check L29() else D1();
  D1():
    deopt 3 [r1];
  L29():
    c = `as.logical`(r1);
    if c then L30() else L7();
  L7():
    strsplit = ldf strsplit;
    check L34() else D4();
  L30():
    _pkg2tex = ldf `.pkg2tex`;
    check L31() else D2();
  D2():
    deopt 5 [];
  D4():
    deopt 26 [];
  L31():
    p1 = prom<V +>{
      files3 = ld files;
      files4 = force? files3;
      checkMissing(files4);
      return files4;
    };
    p2 = prom<V +>{
      outfile1 = ld outfile;
      outfile2 = force? outfile1;
      checkMissing(outfile2);
      return outfile2;
    };
    p3 = prom<V +>{
      internals1 = ld internals;
      internals2 = force? internals1;
      checkMissing(internals2);
      return internals2;
    };
    p4 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p5 = prom<V +>{
      outputEncoding1 = ld outputEncoding;
      outputEncoding2 = force? outputEncoding1;
      checkMissing(outputEncoding2);
      return outputEncoding2;
    };
    p6 = prom<V +>{
      extraDirs1 = ld extraDirs;
      extraDirs2 = force? extraDirs1;
      checkMissing(extraDirs2);
      return extraDirs2;
    };
    p7 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      return append2;
    };
    p8 = prom<V +>{
      silent1 = ld silent;
      silent2 = force? silent1;
      checkMissing(silent2);
      return silent2;
    };
    p9 = prom<V +>{
      pkglist1 = ld pkglist;
      pkglist2 = force? pkglist1;
      checkMissing(pkglist2);
      return pkglist2;
    };
    r11 = dyn _pkg2tex[, , internals, asChapter, encoding, outputEncoding, extraDirs, append, silent, pkglist](p1, p2, p3, FALSE, p4, p5, p6, p7, p8, p9);
    check L32() else D3();
  L34():
    p10 = prom<V +>{
      files5 = ld files;
      files6 = force? files5;
      checkMissing(files6);
      return files6;
    };
    r13 = dyn strsplit(p10, "[[:space:]]+");
    check L35() else D5();
  D3():
    deopt 24 [r11];
  D5():
    deopt 29 [r13];
  L32():
    popenv;
    return r11;
  L35():
    c1 = `is.object`(r13);
    if c1 then L36() else L37(r13);
  L8(dx1):
    st files = dx1;
    silent3 = ld silent;
    check L39() else D6();
  L36():
    dr = tryDispatchBuiltin.1("[[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(r15):
    __ = ldf `[[` in base;
    r16 = dyn __(r15, 1);
    goto L8(r16);
  D6():
    deopt 34 [silent3];
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L39():
    silent4 = force? silent3;
    checkMissing(silent4);
    r17 = `!`(silent4);
    c2 = `as.logical`(r17);
    if c2 then L40() else L9();
  L9():
    goto L10();
  L10():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L40():
    message = ldf message;
    check L41() else D7();
  D7():
    deopt 38 [];
  L11(r21):
    c4 = `as.logical`(r21);
    if c4 then L47() else L12();
  L41():
    r18 = dyn message("Converting Rd files to LaTeX ...");
    check L42() else D8();
  L44():
    outfile3 = ld outfile;
    check L46() else D9();
  L45():
    r20 = dyn base(<sym outfile>);
    goto L11(r20);
  D8():
    deopt 40 [r18];
  D9():
    deopt 44 [outfile3];
  L12():
    goto L14();
  L14():
    st hasFigures = FALSE;
    initialRdMacros = ldf initialRdMacros;
    check L53() else D12();
  L42():
    goto L10();
  L46():
    outfile4 = force? outfile3;
    checkMissing(outfile4);
    c3 = `is.character`(outfile4);
    goto L11(c3);
  L47():
    file = ldf file;
    check L48() else D10();
  D10():
    deopt 48 [];
  D12():
    deopt 62 [];
  L48():
    p11 = prom<V +>{
      outfile5 = ld outfile;
      outfile6 = force? outfile5;
      checkMissing(outfile6);
      return outfile6;
    };
    p12 = prom<V +>{
      append3 = ld append;
      append4 = force? append3;
      checkMissing(append4);
      c5 = `as.logical`(append4);
      if c5 then L1() else L0();
    L0():
      return "wt";
    L1():
      return "at";
    };
    r24 = dyn file(p11, p12);
    check L49() else D11();
  L53():
    p13 = prom<V +>{
      pkglist3 = ld pkglist;
      pkglist4 = force? pkglist3;
      checkMissing(pkglist4);
      return pkglist4;
    };
    r30 = dyn initialRdMacros[pkglist](p13);
    check L54() else D13();
  D11():
    deopt 51 [r24];
  D13():
    deopt 65 [r30];
  L49():
    st outfile = r24;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L54():
    st macros = r30;
    files7 = ld files;
    check L55() else D14();
  D14():
    deopt 67 [files7];
  L13(r26):
    goto L14();
  L50():
    on_exit = ldf `on.exit` in base;
    r27 = dyn on_exit(<lang close(outfile)>);
    goto L13(r27);
  L51():
    r25 = dyn base1(<lang close(outfile)>);
    goto L13(r25);
  L55():
    files8 = force? files7;
    checkMissing(files8);
    s = toForSeq(files8);
    l = length(s);
    i = 0;
    goto L15(i);
  L15(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L56() else L26();
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    silent5 = ld silent;
    check L57() else D15();
  L56():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L99() else L100();
  D15():
    deopt 69 [i2, silent5];
  L27(r78):
    popenv;
    return r78;
  L57():
    silent6 = force? silent5;
    checkMissing(silent6);
    r31 = `!`(silent6);
    c7 = `as.logical`(r31);
    if c7 then L58() else L16();
  L99():
    hasFigures = ld hasFigures;
    check L101() else D42();
  L100():
    r77 = dyn base6[hasFigures](<sym hasFigures>);
    goto L27(r77);
  D42():
    deopt 177 [hasFigures];
  L16():
    goto L17(i2);
  L17(i7):
    parse_Rd = ldf parse_Rd;
    check L62() else D18();
  L58():
    cat = ldf cat;
    check L59() else D16();
  L101():
    hasFigures1 = force? hasFigures;
    checkMissing(hasFigures1);
    list = ldf list in base;
    r79 = dyn list(hasFigures1);
    check L102() else D43();
  D16():
    deopt 73 [i2];
  D18():
    deopt 83 [i7];
  D43():
    deopt 181 [r79];
  L59():
    p15 = prom<V +>{
      basename = ldf basename;
      p14 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r33 = dyn basename(p14);
      return r33;
    };
    r35 = dyn cat[, , , sep]("  ", p15, "\n", "");
    check L60() else D17();
  L62():
    p16 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p17 = prom<V +>{
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      return encoding4;
    };
    p18 = prom<V +>{
      macros = ld macros;
      macros1 = force? macros;
      checkMissing(macros1);
      return macros1;
    };
    r40 = dyn parse_Rd[, encoding, macros](p16, p17, p18);
    check L63() else D19();
  L102():
    goto L27(r79);
  D17():
    deopt 79 [i2, r35];
  D19():
    deopt 89 [i7, r40];
  L60():
    goto L17(i2);
  L63():
    st rd = r40;
    internals3 = ld internals;
    check L64() else D20();
  D20():
    deopt 91 [i7, internals3];
  L64():
    internals4 = force? internals3;
    checkMissing(internals4);
    r41 = `!`(internals4);
    c8 = `as.logical`(r41);
    if c8 then L65() else L18(i7, c8);
  L18(i9, c10):
    c17 = `as.logical`(c10);
    if c17 then L72() else L20();
  L65():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L66() else L67();
  L19(i12, c13, r43):
    c14 = `as.logical`(r43);
    c15 = `&&`(c13, c14);
    goto L18(i12, c15);
  L20():
    character = ldf character;
    check L75() else D24();
  L66():
    _Rd_get_metadata = ldf `.Rd_get_metadata`;
    check L68() else D21();
  L67():
    r42 = dyn base2(<lang `==`(.Rd_get_metadata(rd, "keyword"), "internal")>);
    goto L19(i7, c8, r42);
  L72():
    goto L15(i9);
  D21():
    deopt 97 [i7, c8];
  D24():
    deopt 111 [i9];
  L68():
    p19 = prom<V +>{
      rd = ld rd;
      rd1 = force? rd;
      checkMissing(rd1);
      return rd1;
    };
    r45 = dyn _Rd_get_metadata(p19, "keyword");
    check L69() else D22();
  L75():
    r49 = dyn character();
    check L76() else D25();
  D22():
    deopt 100 [i7, c8, r45];
  D25():
    deopt 112 [i9, r49];
  L69():
    r46 = `==`(r45, "internal");
    any = ldf any in base;
    r47 = dyn any(r46);
    check L70() else D23();
  L76():
    st lines = r49;
    textConnection = ldf textConnection;
    check L77() else D26();
  D23():
    deopt 104 [i7, c8, r47];
  D26():
    deopt 115 [i9];
  L70():
    goto L19(i7, c8, r47);
  L77():
    r50 = dyn textConnection[, , local]("lines", "w", TRUE);
    check L78() else D27();
  D27():
    deopt 120 [i9, r50];
  L78():
    st con = r50;
    Rd2latex = ldf Rd2latex;
    check L79() else D28();
  D28():
    deopt 123 [i9];
  L79():
    p20 = prom<V +>{
      rd2 = ld rd;
      rd3 = force? rd2;
      checkMissing(rd3);
      return rd3;
    };
    p21 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    p22 = prom<V +>{
      outputEncoding3 = ld outputEncoding;
      outputEncoding4 = force? outputEncoding3;
      checkMissing(outputEncoding4);
      return outputEncoding4;
    };
    p23 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      c18 = ldf c in base;
      r56 = dyn c18("build", "install", "render");
      goto L0(r56);
    L2():
      r54 = dyn base3("build", "install", "render");
      goto L0(r54);
    };
    r58 = dyn Rd2latex[, , outputEncoding, writeEncoding, stages](p20, p21, p22, FALSE, p23);
    check L80() else D29();
  D29():
    deopt 132 [i9, r58];
  L80():
    st res = r58;
    close = ldf close;
    check L81() else D30();
  D30():
    deopt 135 [i9];
  L81():
    p24 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r60 = dyn close(p24);
    check L82() else D31();
  D31():
    deopt 137 [i9, r60];
  L82():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L83() else L84();
  L22(i20, r62):
    c19 = `as.logical`(r62);
    if c19 then L87() else L23();
  L83():
    res = ld res;
    check L85() else D32();
  L84():
    r61 = dyn base4(<sym res>, "hasFigures");
    goto L22(i9, r61);
  D32():
    deopt 140 [i9, res];
  L23():
    goto L25(i20);
  L25(i26):
    writeLines = ldf writeLines;
    check L97() else D40();
  L85():
    res1 = force? res;
    checkMissing(res1);
    attr = ldf attr in base;
    r63 = dyn attr(res1, "hasFigures");
    check L86() else D33();
  L87():
    file_path = ldf `file.path`;
    check L88() else D34();
  D33():
    deopt 144 [i9, r63];
  D34():
    deopt 146 [i20];
  D40():
    deopt 168 [i26];
  L86():
    goto L22(i9, r63);
  L88():
    p26 = prom<V +>{
      dirname = ldf dirname;
      p25 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r65 = dyn dirname(p25);
      return r65;
    };
    r67 = dyn file_path(p26, "figures");
    check L89() else D35();
  L97():
    p28 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    p29 = prom<V +>{
      outfile7 = ld outfile;
      outfile8 = force? outfile7;
      checkMissing(outfile8);
      return outfile8;
    };
    r76 = dyn writeLines(p28, p29);
    check L98() else D41();
  D35():
    deopt 149 [i20, r67];
  D41():
    deopt 171 [i26, r76];
  L89():
    st graphicspath = r67;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L98():
    goto L15(i26);
  L24(i25, r69):
    st lines = r69;
    st hasFigures = TRUE;
    goto L25(i25);
  L90():
    _file_path_to_LaTeX_graphicspath = ldf `.file_path_to_LaTeX_graphicspath`;
    check L92() else D36();
  L91():
    r68 = dyn base5(<lang .file_path_to_LaTeX_graphicspath(graphicspath)>, <sym lines>);
    goto L24(i20, r68);
  D36():
    deopt 154 [i20];
  L92():
    p27 = prom<V +>{
      graphicspath = ld graphicspath;
      graphicspath1 = force? graphicspath;
      checkMissing(graphicspath1);
      return graphicspath1;
    };
    r71 = dyn _file_path_to_LaTeX_graphicspath(p27);
    check L93() else D37();
  D37():
    deopt 156 [i20, r71];
  L93():
    lines = ld lines;
    check L94() else D38();
  D38():
    deopt 157 [i20, lines];
  L94():
    lines1 = force? lines;
    checkMissing(lines1);
    c20 = ldf c in base;
    r72 = dyn c20(r71, lines1);
    check L95() else D39();
  D39():
    deopt 160 [i20, r72];
  L95():
    goto L24(i20, r72);
  }
}