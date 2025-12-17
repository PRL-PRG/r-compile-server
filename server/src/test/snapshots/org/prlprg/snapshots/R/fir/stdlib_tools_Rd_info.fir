fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2605656128;
    st Rd_info = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2605656128(file, encoding) {
  (reg file:*, reg encoding:*) -+> V { var file:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg inherits:cls, reg r2:V, reg c:L, reg file3:*, reg file4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg Rd:*, reg Rd1:V, reg attr:cls, reg r7:V, reg attr1:cls, reg r8:V, reg c1:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg stop:cls, reg r12:V, reg _Rd_get_metadata:cls, reg Rd2:*, reg Rd3:V, reg p:p(V +), reg r14:V, reg _Rd_get_metadata1:cls, reg Rd4:*, reg Rd5:V, reg p1:p(V +), reg r16:V, reg _w_o_:cls, reg _Rd_get_metadata2:cls, reg Rd6:*, reg Rd7:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg _Rd_keywords_auto:*, reg _Rd_keywords_auto1:V, reg p4:p(V +), reg r21:V, reg _Rd_get_doc_type:cls, reg Rd8:*, reg Rd9:V, reg p5:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg _Rd_get_metadata3:cls, reg Rd10:*, reg Rd11:V, reg p6:p(V +), reg r27:V, reg c2:cls, reg r28:V, reg c3:L, reg r30:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __:cls, reg r31:V, reg _Rd_get_name:cls, reg Rd12:*, reg Rd13:V, reg p7:p(V +), reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg Rd_name:*, reg Rd_name1:V, reg length:cls, reg r36:V, reg r37:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg gettextf:cls, reg description:*, reg description1:V, reg p8:p(V +), reg r41:V, reg gettextf1:cls, reg r42:V, reg gettext:cls, reg r43:V, reg c5:cls, reg r44:V, reg stop1:cls, reg paste:cls, reg msg:*, reg msg1:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V, reg _Rd_get_title:cls, reg Rd14:*, reg Rd15:V, reg p11:p(V +), reg r51:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg Rd_title:*, reg Rd_title1:V, reg nzchar:cls, reg r54:V, reg r55:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg gettextf2:cls, reg description2:*, reg description3:V, reg p12:p(V +), reg r59:V, reg gettext1:cls, reg r60:V, reg gettext2:cls, reg r61:V, reg c7:cls, reg r62:V, reg stop2:cls, reg paste1:cls, reg msg2:*, reg msg3:V, reg p13:p(V +), reg r64:V, reg p14:p(V +), reg r66:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg r69:V, reg Rd_name2:*, reg Rd_name3:V, reg Rd_type:*, reg Rd_type1:V, reg Rd_title2:*, reg Rd_title3:V, reg aliases:*, reg aliases1:V, reg concepts:*, reg concepts1:V, reg keywords:*, reg keywords1:V, reg encoding1:*, reg encoding2:V, reg list:cls, reg r70:V |
    mkenv;
    st file = file;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r1):
    c = `as.logical`(r1);
    if c then L21() else L2();
  L17():
    file1 = ld file;
    check L19() else D0();
  L18():
    r = dyn base(<sym file>, "Rd");
    goto L1(r);
  D0():
    deopt 2 [file1];
  L2():
    stop = ldf stop;
    check L35() else D6();
  L5():
    _Rd_get_metadata = ldf `.Rd_get_metadata`;
    check L37() else D8();
  L19():
    file2 = force? file1;
    checkMissing(file2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(file2, "Rd", FALSE);
    check L20() else D1();
  L21():
    file3 = ld file;
    check L22() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [file3];
  D6():
    deopt 26 [];
  D8():
    deopt 30 [];
  L20():
    goto L1(r2);
  L22():
    file4 = force? file3;
    checkMissing(file4);
    st Rd = file4;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L35():
    r12 = dyn stop("Rd object required");
    check L36() else D7();
  L37():
    p = prom<V +>{
      Rd2 = ld Rd;
      Rd3 = force? Rd2;
      checkMissing(Rd3);
      return Rd3;
    };
    r14 = dyn _Rd_get_metadata(p, "alias");
    check L38() else D9();
  D7():
    deopt 28 [r12];
  D9():
    deopt 33 [r14];
  L3(r4):
    c1 = `is.object`(r4);
    if c1 then L31() else L32(r4);
  L23():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L24():
    r3 = dyn base1(<lang attr(Rd, "srcref")>, "srcfile");
    goto L3(r3);
  L36():
    goto L5();
  L38():
    st aliases = r14;
    _Rd_get_metadata1 = ldf `.Rd_get_metadata`;
    check L39() else D10();
  D10():
    deopt 36 [];
  L4(r6):
    attr1 = ldf attr in base;
    r8 = dyn attr1(r6, "srcfile");
    check L29() else D5();
  L25():
    Rd = ld Rd;
    check L27() else D3();
  L26():
    r5 = dyn base2(<sym Rd>, "srcref");
    goto L4(r5);
  L30(dx1):
    st description = dx1;
    goto L5();
  L31():
    dr = tryDispatchBuiltin.1("$", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(r10):
    r11 = `$`(r10, <sym filename>);
    goto L30(r11);
  L39():
    p1 = prom<V +>{
      Rd4 = ld Rd;
      Rd5 = force? Rd4;
      checkMissing(Rd5);
      return Rd5;
    };
    r16 = dyn _Rd_get_metadata1(p1, "concept");
    check L40() else D11();
  D3():
    deopt 15 [Rd];
  D5():
    deopt 22 [r8];
  D11():
    deopt 39 [r16];
  L27():
    Rd1 = force? Rd;
    checkMissing(Rd1);
    attr = ldf attr in base;
    r7 = dyn attr(Rd1, "srcref");
    check L28() else D4();
  L29():
    goto L3(r8);
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L40():
    st concepts = r16;
    _w_o_ = ldf `%w/o%`;
    check L41() else D12();
  D4():
    deopt 19 [r7];
  D12():
    deopt 42 [];
  L28():
    goto L4(r7);
  L41():
    p3 = prom<V +>{
      _Rd_get_metadata2 = ldf `.Rd_get_metadata`;
      p2 = prom<V +>{
        Rd6 = ld Rd;
        Rd7 = force? Rd6;
        checkMissing(Rd7);
        return Rd7;
      };
      r18 = dyn _Rd_get_metadata2(p2, "keyword");
      return r18;
    };
    p4 = prom<V +>{
      _Rd_keywords_auto = ld `.Rd_keywords_auto`;
      _Rd_keywords_auto1 = force? _Rd_keywords_auto;
      checkMissing(_Rd_keywords_auto1);
      return _Rd_keywords_auto1;
    };
    r21 = dyn _w_o_(p3, p4);
    check L42() else D13();
  D13():
    deopt 45 [r21];
  L42():
    st keywords = r21;
    _Rd_get_doc_type = ldf `.Rd_get_doc_type`;
    check L43() else D14();
  D14():
    deopt 48 [];
  L43():
    p5 = prom<V +>{
      Rd8 = ld Rd;
      Rd9 = force? Rd8;
      checkMissing(Rd9);
      return Rd9;
    };
    r23 = dyn _Rd_get_doc_type(p5);
    check L44() else D15();
  D15():
    deopt 50 [r23];
  L44():
    st Rd_type = r23;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L6(r25):
    c3 = `is.object`(r25);
    if c3 then L50() else L51(r25);
  L45():
    _Rd_get_metadata3 = ldf `.Rd_get_metadata`;
    check L47() else D16();
  L46():
    r24 = dyn base3(<lang .Rd_get_metadata(Rd, "encoding")>, "");
    goto L6(r24);
  D16():
    deopt 55 [];
  L7(dx4):
    st encoding = dx4;
    _Rd_get_name = ldf `.Rd_get_name`;
    check L53() else D19();
  L47():
    p6 = prom<V +>{
      Rd10 = ld Rd;
      Rd11 = force? Rd10;
      checkMissing(Rd11);
      return Rd11;
    };
    r27 = dyn _Rd_get_metadata3(p6, "encoding");
    check L48() else D17();
  L50():
    dr2 = tryDispatchBuiltin.1("[", r25);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(r30):
    __ = ldf `[` in base;
    r31 = dyn __(r30, 1);
    goto L7(r31);
  D17():
    deopt 58 [r27];
  D19():
    deopt 67 [];
  L48():
    c2 = ldf c in base;
    r28 = dyn c2(r27, "");
    check L49() else D18();
  L52():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx3);
  L53():
    p7 = prom<V +>{
      Rd12 = ld Rd;
      Rd13 = force? Rd12;
      checkMissing(Rd13);
      return Rd13;
    };
    r33 = dyn _Rd_get_name(p7);
    check L54() else D20();
  D18():
    deopt 61 [r28];
  D20():
    deopt 69 [r33];
  L49():
    goto L6(r28);
  L54():
    st Rd_name = r33;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L8(r35):
    r37 = `!`(r35);
    c4 = `as.logical`(r37);
    if c4 then L59() else L9();
  L55():
    Rd_name = ld Rd_name;
    check L57() else D21();
  L56():
    r34 = dyn base4(<sym Rd_name>);
    goto L8(r34);
  D21():
    deopt 73 [Rd_name];
  L9():
    goto L11();
  L11():
    _Rd_get_title = ldf `.Rd_get_title`;
    check L72() else D32();
  L57():
    Rd_name1 = force? Rd_name;
    checkMissing(Rd_name1);
    length = ldf length in base;
    r36 = dyn length(Rd_name1);
    check L58() else D22();
  L59():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  D22():
    deopt 76 [r36];
  D32():
    deopt 107 [];
  L10(r39):
    st msg = r39;
    stop1 = ldf stop;
    check L69() else D30();
  L58():
    goto L8(r36);
  L60():
    gettextf = ldf gettextf;
    check L62() else D23();
  L61():
    r38 = dyn base5(<lang gettextf("missing/empty %s field in '%s'", "\\name", description)>, <lang gettextf("Rd files must have a non-empty %s.", "\\name")>, <lang gettext("See chapter 'Writing R documentation' in manual 'Writing R Extensions'.")>);
    goto L10(r38);
  L72():
    p11 = prom<V +>{
      Rd14 = ld Rd;
      Rd15 = force? Rd14;
      checkMissing(Rd15);
      return Rd15;
    };
    r51 = dyn _Rd_get_title(p11);
    check L73() else D33();
  D23():
    deopt 81 [];
  D30():
    deopt 99 [];
  D33():
    deopt 109 [r51];
  L62():
    p8 = prom<V +>{
      description = ld description;
      description1 = force? description;
      checkMissing(description1);
      return description1;
    };
    r41 = dyn gettextf("missing/empty %s field in '%s'", "\\name", p8);
    check L63() else D24();
  L69():
    p10 = prom<V +>{
      paste = ldf paste;
      p9 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r46 = dyn paste[, collapse](p9, "\n");
      return r46;
    };
    r48 = dyn stop1[, domain](p10, NA_LGL);
    check L70() else D31();
  L73():
    st Rd_title = r51;
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  D24():
    deopt 85 [r41];
  D31():
    deopt 103 [r48];
  L12(r53):
    r55 = `!`(r53);
    c6 = `as.logical`(r55);
    if c6 then L78() else L13();
  L63():
    gettextf1 = ldf gettextf;
    check L64() else D25();
  L70():
    goto L11();
  L74():
    Rd_title = ld Rd_title;
    check L76() else D34();
  L75():
    r52 = dyn base6(<sym Rd_title>);
    goto L12(r52);
  D25():
    deopt 87 [];
  D34():
    deopt 113 [Rd_title];
  L13():
    goto L15();
  L15():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L91() else L92();
  L64():
    r42 = dyn gettextf1("Rd files must have a non-empty %s.", "\\name");
    check L65() else D26();
  L76():
    Rd_title1 = force? Rd_title;
    checkMissing(Rd_title1);
    nzchar = ldf nzchar in base;
    r54 = dyn nzchar(Rd_title1);
    check L77() else D35();
  L78():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  D26():
    deopt 90 [r42];
  D35():
    deopt 116 [r54];
  L14(r57):
    st msg = r57;
    stop2 = ldf stop;
    check L88() else D43();
  L16(r69):
    popenv;
    return r69;
  L65():
    gettext = ldf gettext;
    check L66() else D27();
  L77():
    goto L12(r54);
  L79():
    gettextf2 = ldf gettextf;
    check L81() else D36();
  L80():
    r56 = dyn base7(<lang gettextf("missing/empty \\title field in '%s'", description)>, <lang gettext("Rd files must have a non-empty \\title.")>, <lang gettext("See chapter 'Writing R documentation' in manual 'Writing R Extensions'.")>);
    goto L14(r56);
  L91():
    Rd_name2 = ld Rd_name;
    check L93() else D45();
  L92():
    r68 = dyn base8[name, type, title, aliases, concepts, keywords, encoding](<sym Rd_name>, <sym Rd_type>, <sym Rd_title>, <sym aliases>, <sym concepts>, <sym keywords>, <sym encoding>);
    goto L16(r68);
  D27():
    deopt 92 [];
  D36():
    deopt 121 [];
  D43():
    deopt 137 [];
  D45():
    deopt 146 [Rd_name2];
  L66():
    r43 = dyn gettext("See chapter 'Writing R documentation' in manual 'Writing R Extensions'.");
    check L67() else D28();
  L81():
    p12 = prom<V +>{
      description2 = ld description;
      description3 = force? description2;
      checkMissing(description3);
      return description3;
    };
    r59 = dyn gettextf2("missing/empty \\title field in '%s'", p12);
    check L82() else D37();
  L88():
    p14 = prom<V +>{
      paste1 = ldf paste;
      p13 = prom<V +>{
        msg2 = ld msg;
        msg3 = force? msg2;
        checkMissing(msg3);
        return msg3;
      };
      r64 = dyn paste1[, collapse](p13, "\n");
      return r64;
    };
    r66 = dyn stop2[, domain](p14, NA_LGL);
    check L89() else D44();
  L93():
    Rd_name3 = force? Rd_name2;
    checkMissing(Rd_name3);
    Rd_type = ld Rd_type;
    check L94() else D46();
  D28():
    deopt 94 [r43];
  D37():
    deopt 124 [r59];
  D44():
    deopt 141 [r66];
  D46():
    deopt 149 [Rd_type];
  L67():
    c5 = ldf c in base;
    r44 = dyn c5(r41, r42, r43);
    check L68() else D29();
  L82():
    gettext1 = ldf gettext;
    check L83() else D38();
  L89():
    goto L15();
  L94():
    Rd_type1 = force? Rd_type;
    checkMissing(Rd_type1);
    Rd_title2 = ld Rd_title;
    check L95() else D47();
  D29():
    deopt 96 [r44];
  D38():
    deopt 126 [];
  D47():
    deopt 152 [Rd_title2];
  L68():
    goto L10(r44);
  L83():
    r60 = dyn gettext1("Rd files must have a non-empty \\title.");
    check L84() else D39();
  L95():
    Rd_title3 = force? Rd_title2;
    checkMissing(Rd_title3);
    aliases = ld aliases;
    check L96() else D48();
  D39():
    deopt 128 [r60];
  D48():
    deopt 155 [aliases];
  L84():
    gettext2 = ldf gettext;
    check L85() else D40();
  L96():
    aliases1 = force? aliases;
    checkMissing(aliases1);
    concepts = ld concepts;
    check L97() else D49();
  D40():
    deopt 130 [];
  D49():
    deopt 158 [concepts];
  L85():
    r61 = dyn gettext2("See chapter 'Writing R documentation' in manual 'Writing R Extensions'.");
    check L86() else D41();
  L97():
    concepts1 = force? concepts;
    checkMissing(concepts1);
    keywords = ld keywords;
    check L98() else D50();
  D41():
    deopt 132 [r61];
  D50():
    deopt 161 [keywords];
  L86():
    c7 = ldf c in base;
    r62 = dyn c7(r59, r60, r61);
    check L87() else D42();
  L98():
    keywords1 = force? keywords;
    checkMissing(keywords1);
    encoding1 = ld encoding;
    check L99() else D51();
  D42():
    deopt 134 [r62];
  D51():
    deopt 164 [encoding1];
  L87():
    goto L14(r62);
  L99():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    list = ldf list in base;
    r70 = dyn list(Rd_name3, Rd_type1, Rd_title3, aliases1, concepts1, keywords1, encoding2);
    check L100() else D52();
  D52():
    deopt 168 [r70];
  L100():
    goto L16(r70);
  }
}