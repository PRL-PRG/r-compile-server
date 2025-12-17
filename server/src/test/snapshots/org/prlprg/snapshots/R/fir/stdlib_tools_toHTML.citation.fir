fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2558257476;
    st `toHTML.citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2558257476(x, header, `...`) {
  (reg x:*, reg header:*, reg ddd:dots) -+> V { var x:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg len:*, reg len1:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg r7:cls, reg r8:cls, reg r9:cls, reg r10:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg x3:*, reg x4:V, reg attr:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg header1:*, reg header2:V, reg c1:L, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c7:L, reg r17:V, reg header3:*, reg header4:V, reg c8:L, reg c9:L, reg c10:V, reg r18:V, reg c12:L, reg warning:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg header5:*, reg header6:V, reg identical:cls, reg r23:V, reg c13:L, reg HTMLheader:cls, reg ddd1:dots?, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg c14:cls, reg r27:V, reg isFALSE:cls, reg header7:*, reg header8:V, reg p:p(V +), reg r30:V, reg c15:L, reg character1:cls, reg r31:V, reg character2:cls, reg r32:V, reg isTRUE:cls, reg header9:*, reg header10:V, reg p1:p(V +), reg r34:V, reg c16:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg package:*, reg package1:V, reg c17:V, reg c18:L, reg r39:V, reg sprintf:cls, reg package2:*, reg package3:V, reg p2:p(V +), reg r41:V, reg c19:cls, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg header11:*, reg header12:V, reg c20:cls, reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg c21:cls, reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg header13:*, reg header14:V, reg is_non_blank_string:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg x5:*, reg x6:V, reg attr1:cls, reg r54:V, reg p3:p(V +), reg r56:V, reg c22:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg r58:V, reg htmlify:cls, reg mheader:*, reg mheader1:V, reg p4:p(V +), reg r60:V, reg c23:cls, reg r61:V, reg r62:V, reg do_call:cls, reg c24:*, reg c25:V, reg p5:p(V +), reg lapply:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg format_entry_as_text:*, reg format_entry_as_text1:V, reg p7:p(V +), reg r66:V, reg p8:p(V +), reg r68:V, reg is_non_blank_string1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg x9:*, reg x10:V, reg attr2:cls, reg r71:V, reg p9:p(V +), reg r73:V, reg c26:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r74:V, reg r75:V, reg htmlify1:cls, reg mfooter:*, reg mfooter1:V, reg p10:p(V +), reg r77:V, reg c27:cls, reg r78:V, reg r79:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg ngettext:cls, reg len2:*, reg len3:V, reg p11:p(V +), reg r83:V, reg do_call1:cls, reg c28:*, reg c29:V, reg p12:p(V +), reg lapply1:cls, reg x11:*, reg x12:V, reg p13:p(V +), reg format_entry_as_BibTeX:*, reg format_entry_as_BibTeX1:V, reg p14:p(V +), reg r87:V, reg p15:p(V +), reg r89:V, reg c30:cls, reg r90:V, reg footer:*, reg footer1:V, reg c31:cls, reg r91:V |
    mkenv;
    st x = x;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(TRUE) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L1(r1):
    st len = r1;
    len = ld len;
    check L35() else D2();
  L31():
    x1 = ld x;
    check L33() else D0();
  L32():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [len];
  L33():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L34() else D1();
  L35():
    len1 = force? len;
    checkMissing(len1);
    r3 = `!`(len1);
    c = `as.logical`(r3);
    if c then L36() else L2();
  D1():
    deopt 5 [r2];
  L2():
    r7 = clos inner1236783023;
    st is_non_blank_string = r7;
    r8 = clos inner2501545716;
    st format_entry_as_text = r8;
    r9 = clos inner2501545716;
    st format_entry_as_BibTeX = r9;
    r10 = clos inner2900012077;
    st htmlify = r10;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L34():
    goto L1(r2);
  L36():
    character = ldf character;
    check L37() else D3();
  D3():
    deopt 11 [];
  L4(r12):
    st package = r12;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L37():
    r4 = dyn character();
    check L38() else D4();
  L41():
    x3 = ld x;
    check L43() else D5();
  L42():
    r11 = dyn base1(<sym x>, "package");
    goto L4(r11);
  D4():
    deopt 12 [r4];
  D5():
    deopt 30 [x3];
  L5(r15):
    c2 = `as.logical`(r15);
    if c2 then L6(c2) else L48();
  L38():
    popenv;
    return r4;
  L43():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r13 = dyn attr(x4, "package");
    check L44() else D6();
  L45():
    header1 = ld header;
    check L47() else D7();
  L46():
    r14 = dyn base2(<sym header>);
    goto L5(r14);
  D6():
    deopt 34 [r13];
  D7():
    deopt 37 [header1];
  L6(c3):
    r18 = `!`(c3);
    c12 = `as.logical`(r18);
    if c12 then L53() else L8();
  L44():
    goto L4(r13);
  L47():
    header2 = force? header1;
    checkMissing(header2);
    c1 = `is.character`(header2);
    goto L5(c1);
  L48():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L7(c7, r17):
    c9 = `as.logical`(r17);
    c10 = `||`(c7, c9);
    goto L6(c10);
  L8():
    goto L9();
  L9():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L49():
    header3 = ld header;
    check L51() else D8();
  L50():
    r16 = dyn base3(<sym header>);
    goto L7(c2, r16);
  L53():
    warning = ldf warning;
    check L54() else D9();
  D8():
    deopt 41 [c2, header3];
  D9():
    deopt 47 [];
  L10(r22):
    c13 = `as.logical`(r22);
    if c13 then L61() else L11();
  L51():
    header4 = force? header3;
    checkMissing(header4);
    c8 = `is.logical`(header4);
    goto L7(c2, c8);
  L54():
    r19 = dyn warning("unknown header specification");
    check L55() else D10();
  L57():
    header5 = ld header;
    check L59() else D11();
  L58():
    r21 = dyn base4(<sym header>, "R");
    goto L10(r21);
  D10():
    deopt 49 [r19];
  D11():
    deopt 57 [header5];
  L11():
    isFALSE = ldf isFALSE;
    check L68() else D16();
  L13():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  L55():
    st header = TRUE;
    goto L9();
  L59():
    header6 = force? header5;
    checkMissing(header6);
    identical = ldf identical in base;
    r23 = dyn identical(header6, "R", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L60() else D12();
  L61():
    HTMLheader = ldf HTMLheader;
    check L62() else D13();
  D12():
    deopt 68 [r23];
  D13():
    deopt 70 [];
  D16():
    deopt 82 [];
  L23(r51):
    popenv;
    return r51;
  L60():
    goto L10(r23);
  L62():
    ddd1 = ld `...`;
    r24 = dyn HTMLheader[`...`](ddd1);
    check L63() else D14();
  L68():
    p = prom<V +>{
      header7 = ld header;
      header8 = force? header7;
      checkMissing(header8);
      return header8;
    };
    r30 = dyn isFALSE(p);
    check L69() else D17();
  L97():
    header13 = ld header;
    check L99() else D31();
  L98():
    r50 = dyn base10(<sym header>, <lang if(is_non_blank_string(`<-`(mheader, attr(x, "mheader"))), c("<p>", htmlify(mheader), "</p>"))>, <lang do.call(c, lapply(x, format_entry_as_text))>, <lang if(is_non_blank_string(`<-`(mfooter, attr(x, "mfooter"))), c("<p>", htmlify(mfooter), "</p>"))>, <lang c("<p>", ngettext(len, "Corresponding BibTeX entry:", "Corresponding BibTeX entries:"), "</p>", do.call(c, lapply(x, format_entry_as_BibTeX)))>, <sym footer>);
    goto L23(r50);
  D14():
    deopt 72 [r24];
  D17():
    deopt 84 [r30];
  D31():
    deopt 140 [header13];
  L63():
    st header = r24;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L69():
    c15 = `as.logical`(r30);
    if c15 then L70() else L14();
  L99():
    header14 = force? header13;
    checkMissing(header14);
    is_non_blank_string = ldf is_non_blank_string;
    check L100() else D32();
  D32():
    deopt 143 [];
  L12(r26):
    st footer = r26;
    goto L13();
  L14():
    isTRUE = ldf isTRUE;
    check L76() else D22();
  L64():
    c14 = ldf c in base;
    r27 = dyn c14("</div></body>", "</html>");
    check L66() else D15();
  L65():
    r25 = dyn base5("</div></body>", "</html>");
    goto L12(r25);
  L70():
    character1 = ldf character;
    check L71() else D18();
  L100():
    p3 = prom<V +>{
      sym11 = ldf attr;
      base11 = ldf attr in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r53):
      st mheader = r53;
      invisible.0();
      return r53;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr1 = ldf attr in base;
      r54 = dyn attr1(x6, "mheader");
      goto L0(r54);
    L2():
      r52 = dyn base11(<sym x>, "mheader");
      goto L0(r52);
    };
    r56 = dyn is_non_blank_string(p3);
    check L101() else D33();
  D15():
    deopt 79 [r27];
  D18():
    deopt 86 [];
  D22():
    deopt 96 [];
  D33():
    deopt 145 [r56];
  L66():
    goto L12(r27);
  L71():
    r31 = dyn character1(0);
    check L72() else D19();
  L76():
    p1 = prom<V +>{
      header9 = ld header;
      header10 = force? header9;
      checkMissing(header10);
      return header10;
    };
    r34 = dyn isTRUE(p1);
    check L77() else D23();
  L101():
    c22 = `as.logical`(r56);
    if c22 then L102() else L24();
  D19():
    deopt 88 [r31];
  D23():
    deopt 98 [r34];
  L24():
    goto L26(NULL);
  L26(r62):
    do_call = ldf `do.call`;
    check L109() else D37();
  L72():
    st header = r31;
    character2 = ldf character;
    check L73() else D20();
  L77():
    c16 = `as.logical`(r34);
    if c16 then L78() else L15();
  L102():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L103() else L104();
  D20():
    deopt 91 [];
  D37():
    deopt 159 [];
  L15():
    goto L20();
  L20():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L90() else L91();
  L25(r58):
    goto L26(r58);
  L73():
    r32 = dyn character2(0);
    check L74() else D21();
  L78():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  L103():
    htmlify = ldf htmlify;
    check L105() else D34();
  L104():
    r57 = dyn base12("<p>", <lang htmlify(mheader)>, "</p>");
    goto L25(r57);
  L109():
    p5 = prom<V +>{
      c24 = ld c;
      c25 = force? c24;
      checkMissing(c25);
      return c25;
    };
    p8 = prom<V +>{
      lapply = ldf lapply;
      p6 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p7 = prom<V +>{
        format_entry_as_text = ld format_entry_as_text;
        format_entry_as_text1 = force? format_entry_as_text;
        checkMissing(format_entry_as_text1);
        return format_entry_as_text1;
      };
      r66 = dyn lapply(p6, p7);
      return r66;
    };
    r68 = dyn do_call(p5, p8);
    check L110() else D38();
  D21():
    deopt 93 [r32];
  D34():
    deopt 150 [];
  D38():
    deopt 162 [r68];
  L16(r36):
    st header = r36;
    goto L20();
  L21(r45):
    st header = r45;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L94() else L95();
  L74():
    st footer = r32;
    goto L13();
  L79():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L81() else L82();
  L80():
    r35 = dyn base6("<head>", <lang if(is.null(package), "<title>Citation information</title>", sprintf("<title>%s citation information</title>", package))>, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />", "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", "</head>");
    goto L16(r35);
  L90():
    header11 = ld header;
    check L92() else D28();
  L91():
    r44 = dyn base8("<!DOCTYPE html>", "<html>", <sym header>, "<body><div class=\"container\">");
    goto L21(r44);
  L105():
    p4 = prom<V +>{
      mheader = ld mheader;
      mheader1 = force? mheader;
      checkMissing(mheader1);
      return mheader1;
    };
    r60 = dyn htmlify(p4);
    check L106() else D35();
  L110():
    is_non_blank_string1 = ldf is_non_blank_string;
    check L111() else D39();
  D28():
    deopt 125 [header11];
  D35():
    deopt 152 [r60];
  D39():
    deopt 164 [];
  L17(r38):
    c18 = `as.logical`(r38);
    if c18 then L84() else L18();
  L22(r48):
    st footer = r48;
    goto L13();
  L81():
    package = ld package;
    check L83() else D24();
  L82():
    r37 = dyn base7(<sym package>);
    goto L17(r37);
  L92():
    header12 = force? header11;
    checkMissing(header12);
    c20 = ldf c in base;
    r46 = dyn c20("<!DOCTYPE html>", "<html>", header12, "<body><div class=\"container\">");
    check L93() else D29();
  L94():
    c21 = ldf c in base;
    r49 = dyn c21("</div></body>", "</html>");
    check L96() else D30();
  L95():
    r47 = dyn base9("</div></body>", "</html>");
    goto L22(r47);
  L106():
    c23 = ldf c in base;
    r61 = dyn c23("<p>", r60, "</p>");
    check L107() else D36();
  L111():
    p9 = prom<V +>{
      sym13 = ldf attr;
      base13 = ldf attr in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r70):
      st mfooter = r70;
      invisible.0();
      return r70;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr2 = ldf attr in base;
      r71 = dyn attr2(x10, "mfooter");
      goto L0(r71);
    L2():
      r69 = dyn base13(<sym x>, "mfooter");
      goto L0(r69);
    };
    r73 = dyn is_non_blank_string1(p9);
    check L112() else D40();
  D24():
    deopt 103 [package];
  D29():
    deopt 129 [r46];
  D30():
    deopt 136 [r49];
  D36():
    deopt 155 [r61];
  D40():
    deopt 166 [r73];
  L18():
    sprintf = ldf sprintf;
    check L86() else D25();
  L19(r39):
    c19 = ldf c in base;
    r42 = dyn c19("<head>", r39, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />", "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", "</head>");
    check L88() else D27();
  L83():
    package1 = force? package;
    checkMissing(package1);
    c17 = `==`(package1, NULL);
    goto L17(c17);
  L84():
    goto L19("<title>Citation information</title>");
  L93():
    goto L21(r46);
  L96():
    goto L22(r49);
  L107():
    goto L25(r61);
  L112():
    c26 = `as.logical`(r73);
    if c26 then L113() else L27();
  D25():
    deopt 109 [];
  D27():
    deopt 117 [r42];
  L27():
    goto L29(NULL);
  L29(r79):
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L120() else L121();
  L86():
    p2 = prom<V +>{
      package2 = ld package;
      package3 = force? package2;
      checkMissing(package3);
      return package3;
    };
    r41 = dyn sprintf("<title>%s citation information</title>", p2);
    check L87() else D26();
  L88():
    goto L16(r42);
  L113():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L114() else L115();
  D26():
    deopt 112 [r41];
  L28(r75):
    goto L29(r75);
  L30(r81):
    footer = ld footer;
    check L127() else D49();
  L87():
    goto L19(r41);
  L114():
    htmlify1 = ldf htmlify;
    check L116() else D41();
  L115():
    r74 = dyn base14("<p>", <lang htmlify(mfooter)>, "</p>");
    goto L28(r74);
  L120():
    ngettext = ldf ngettext;
    check L122() else D44();
  L121():
    r80 = dyn base15("<p>", <lang ngettext(len, "Corresponding BibTeX entry:", "Corresponding BibTeX entries:")>, "</p>", <lang do.call(c, lapply(x, format_entry_as_BibTeX))>);
    goto L30(r80);
  D41():
    deopt 171 [];
  D44():
    deopt 183 [];
  D49():
    deopt 196 [footer];
  L116():
    p10 = prom<V +>{
      mfooter = ld mfooter;
      mfooter1 = force? mfooter;
      checkMissing(mfooter1);
      return mfooter1;
    };
    r77 = dyn htmlify1(p10);
    check L117() else D42();
  L122():
    p11 = prom<V +>{
      len2 = ld len;
      len3 = force? len2;
      checkMissing(len3);
      return len3;
    };
    r83 = dyn ngettext(p11, "Corresponding BibTeX entry:", "Corresponding BibTeX entries:");
    check L123() else D45();
  L127():
    footer1 = force? footer;
    checkMissing(footer1);
    c31 = ldf c in base;
    r91 = dyn c31(header14, r62, r68, r79, r81, footer1);
    check L128() else D50();
  D42():
    deopt 173 [r77];
  D45():
    deopt 187 [r83];
  D50():
    deopt 199 [r91];
  L117():
    c27 = ldf c in base;
    r78 = dyn c27("<p>", r77, "</p>");
    check L118() else D43();
  L123():
    do_call1 = ldf `do.call`;
    check L124() else D46();
  L128():
    goto L23(r91);
  D43():
    deopt 176 [r78];
  D46():
    deopt 190 [];
  L118():
    goto L28(r78);
  L124():
    p12 = prom<V +>{
      c28 = ld c;
      c29 = force? c28;
      checkMissing(c29);
      return c29;
    };
    p15 = prom<V +>{
      lapply1 = ldf lapply;
      p13 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      p14 = prom<V +>{
        format_entry_as_BibTeX = ld format_entry_as_BibTeX;
        format_entry_as_BibTeX1 = force? format_entry_as_BibTeX;
        checkMissing(format_entry_as_BibTeX1);
        return format_entry_as_BibTeX1;
      };
      r87 = dyn lapply1(p13, p14);
      return r87;
    };
    r89 = dyn do_call1(p12, p15);
    check L125() else D47();
  D47():
    deopt 193 [r89];
  L125():
    c30 = ldf c in base;
    r90 = dyn c30("<p>", r83, "</p>", r89);
    check L126() else D48();
  D48():
    deopt 195 [r90];
  L126():
    goto L30(r90);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg grep:cls, reg s3:*, reg s4:V, reg p:p(V +), reg r7:V, reg length1:cls, reg r8:V, reg c6:L, reg c7:V |
    mkenv;
    st s = s;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L7() else L1(c);
  L3():
    s1 = ld s;
    check L5() else D0();
  L4():
    r = dyn base(<sym s>);
    goto L0(r);
  D0():
    deopt 2 [s1];
  L1(c2):
    popenv;
    return c2;
  L5():
    s2 = force? s1;
    checkMissing(s2);
    length = ldf length in base;
    r2 = dyn length(s2);
    check L6() else D1();
  L7():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L6():
    goto L0(r2);
  L8():
    grep = ldf grep;
    check L10() else D2();
  L9():
    r4 = dyn base1(<lang grep("[^[:blank:]]", s)>);
    goto L2(c, r4);
  D2():
    deopt 11 [c];
  L10():
    p = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r7 = dyn grep("[^[:blank:]]", p);
    check L11() else D3();
  D3():
    deopt 14 [c, r7];
  L11():
    length1 = ldf length in base;
    r8 = dyn length1(r7);
    check L12() else D4();
  D4():
    deopt 16 [c, r8];
  L12():
    goto L2(c, r8);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg is_non_blank_string:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg r4:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg htmlify:cls, reg header:*, reg header1:V, reg p1:p(V +), reg r8:V, reg c2:cls, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg c4:V, reg r14:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg htmlify1:cls, reg tv:*, reg tv1:V, reg p2:p(V +), reg r18:V, reg c6:cls, reg r19:V, reg r20:V, reg format:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg r22:V, reg is_non_blank_string1:cls, reg x11:*, reg x12:V, reg c7:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg p4:p(V +), reg r25:V, reg c8:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg htmlify2:cls, reg footer:*, reg footer1:V, reg p5:p(V +), reg r29:V, reg c9:cls, reg r30:V, reg r31:V, reg c10:cls, reg r32:V |
    mkenv;
    st x = x;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    popenv;
    return r1;
  L11():
    is_non_blank_string = ldf is_non_blank_string;
    check L13() else D0();
  L12():
    r = dyn base(<lang if(is_non_blank_string(`<-`(header, `$`(x, header))), c("<p>", htmlify(header), "</p>"))>, "<blockquote>", <lang if(`!`(is.null(`<-`(tv, `$`(x, textVersion)))), {
        c("<p>", htmlify(tv), "</p>")
      }, {
        format(x, "html")
      })>, "</blockquote>", <lang if(is_non_blank_string(`<-`(footer, `$`(x, footer))), c("<p>", htmlify(footer), "</p>"))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      st header = dx1;
      invisible.0();
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r2 = `$`(x4, <sym header>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn is_non_blank_string(p);
    check L14() else D1();
  D1():
    deopt 5 [r4];
  L14():
    c1 = `as.logical`(r4);
    if c1 then L15() else L1();
  L1():
    goto L3(NULL);
  L3(r10):
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L15():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L2(r6):
    goto L3(r6);
  L4(r12):
    r14 = `!`(r12);
    c5 = `as.logical`(r14);
    if c5 then L29() else L5();
  L16():
    htmlify = ldf htmlify;
    check L18() else D2();
  L17():
    r5 = dyn base1("<p>", <lang htmlify(header)>, "</p>");
    goto L2(r5);
  L22():
    x5 = ld x;
    check L24() else D5();
  L23():
    r11 = dyn base2(<lang `<-`(tv, `$`(x, textVersion))>);
    goto L4(r11);
  D2():
    deopt 10 [];
  D5():
    deopt 20 [x5];
  L5():
    format = ldf format;
    check L36() else D9();
  L7(r20):
    is_non_blank_string1 = ldf is_non_blank_string;
    check L38() else D11();
  L18():
    p1 = prom<V +>{
      header = ld header;
      header1 = force? header;
      checkMissing(header1);
      return header1;
    };
    r8 = dyn htmlify(p1);
    check L19() else D3();
  L24():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L26() else L27(x6);
  L29():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  D3():
    deopt 12 [r8];
  D9():
    deopt 37 [];
  D11():
    deopt 43 [];
  L6(r16):
    goto L7(r16);
  L19():
    c2 = ldf c in base;
    r9 = dyn c2("<p>", r8, "</p>");
    check L20() else D4();
  L25(dx3):
    st tv = dx3;
    c4 = `==`(dx3, NULL);
    goto L4(c4);
  L26():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(x8):
    r13 = `$`(x8, <sym textVersion>);
    goto L25(r13);
  L30():
    htmlify1 = ldf htmlify;
    check L32() else D6();
  L31():
    r15 = dyn base3("<p>", <lang htmlify(tv)>, "</p>");
    goto L6(r15);
  L36():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r22 = dyn format(p3, "html");
    check L37() else D10();
  L38():
    p4 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c7 = `is.object`(x12);
      if c7 then L1() else L2(x12);
    L0(dx5):
      st footer = dx5;
      invisible.0();
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x14):
      r23 = `$`(x14, <sym footer>);
      goto L0(r23);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r25 = dyn is_non_blank_string1(p4);
    check L39() else D12();
  D4():
    deopt 15 [r9];
  D6():
    deopt 30 [];
  D10():
    deopt 40 [r22];
  D12():
    deopt 45 [r25];
  L20():
    goto L2(r9);
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L32():
    p2 = prom<V +>{
      tv = ld tv;
      tv1 = force? tv;
      checkMissing(tv1);
      return tv1;
    };
    r18 = dyn htmlify1(p2);
    check L33() else D7();
  L37():
    goto L7(r22);
  L39():
    c8 = `as.logical`(r25);
    if c8 then L40() else L8();
  D7():
    deopt 32 [r18];
  L8():
    goto L10(NULL);
  L10(r31):
    c10 = ldf c in base;
    r32 = dyn c10(r10, "<blockquote>", r20, "</blockquote>", r31);
    check L47() else D16();
  L33():
    c6 = ldf c in base;
    r19 = dyn c6("<p>", r18, "</p>");
    check L34() else D8();
  L40():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D8():
    deopt 35 [r19];
  D16():
    deopt 59 [r32];
  L9(r27):
    goto L10(r27);
  L34():
    goto L6(r19);
  L41():
    htmlify2 = ldf htmlify;
    check L43() else D13();
  L42():
    r26 = dyn base4("<p>", <lang htmlify(footer)>, "</p>");
    goto L9(r26);
  L47():
    goto L0(r32);
  D13():
    deopt 50 [];
  L43():
    p5 = prom<V +>{
      footer = ld footer;
      footer1 = force? footer;
      checkMissing(footer1);
      return footer1;
    };
    r29 = dyn htmlify2(p5);
    check L44() else D14();
  D14():
    deopt 52 [r29];
  L44():
    c9 = ldf c in base;
    r30 = dyn c9("<p>", r29, "</p>");
    check L45() else D15();
  D15():
    deopt 55 [r30];
  L45():
    goto L9(r30);
  }
}
fun inner2900012077(s, a) {
  (reg s:*, reg a:*) -+> V { var s:*, var a:*, reg a_isMissing:L, reg a_orDefault:*, reg _replace_chars_by_hex_subs:cls, reg s1:*, reg s2:V, reg p:p(V +), reg invalid_HTML_chars_re:*, reg invalid_HTML_chars_re1:V, reg p1:p(V +), reg r2:V, reg fsub:cls, reg s3:*, reg s4:V, reg p2:p(V +), reg r4:V, reg fsub1:cls, reg s5:*, reg s6:V, reg p3:p(V +), reg r6:V, reg fsub2:cls, reg s7:*, reg s8:V, reg p4:p(V +), reg r8:V, reg a1:*, reg a2:V, reg c:L, reg _gsub_with_transformed_matches:cls, reg s9:*, reg s10:V, reg p5:p(V +), reg urlify:*, reg urlify1:V, reg p6:p(V +), reg r11:V, reg _gsub_with_transformed_matches1:cls, reg s11:*, reg s12:V, reg p7:p(V +), reg urlify2:*, reg urlify3:V, reg p8:p(V +), reg r14:V, reg _gsub_with_transformed_matches2:cls, reg s13:*, reg s14:V, reg p9:p(V +), reg urlify4:*, reg urlify5:V, reg p10:p(V +), reg r17:V, reg _gsub_with_transformed_matches3:cls, reg s15:*, reg s16:V, reg p11:p(V +), reg urlify6:*, reg urlify7:V, reg p12:p(V +), reg r20:V, reg s17:*, reg s18:V |
    mkenv;
    st s = s;
    a_isMissing = missing.0(a);
    if a_isMissing then L0(TRUE) else L0(a);
  L0(a_orDefault):
    st a = a_orDefault;
    _replace_chars_by_hex_subs = ldf `.replace_chars_by_hex_subs`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    p1 = prom<V +>{
      invalid_HTML_chars_re = ld invalid_HTML_chars_re;
      invalid_HTML_chars_re1 = force? invalid_HTML_chars_re;
      checkMissing(invalid_HTML_chars_re1);
      return invalid_HTML_chars_re1;
    };
    r2 = dyn _replace_chars_by_hex_subs(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r2];
  L4():
    st s = r2;
    fsub = ldf fsub;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    p2 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r4 = dyn fsub("&", "&amp;", p2);
    check L6() else D3();
  D3():
    deopt 11 [r4];
  L6():
    st s = r4;
    fsub1 = ldf fsub;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p3 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r6 = dyn fsub1("<", "&lt;", p3);
    check L8() else D5();
  D5():
    deopt 18 [r6];
  L8():
    st s = r6;
    fsub2 = ldf fsub;
    check L9() else D6();
  D6():
    deopt 21 [];
  L9():
    p4 = prom<V +>{
      s7 = ld s;
      s8 = force? s7;
      checkMissing(s8);
      return s8;
    };
    r8 = dyn fsub2(">", "&gt;", p4);
    check L10() else D7();
  D7():
    deopt 25 [r8];
  L10():
    st s = r8;
    a1 = ld a;
    check L11() else D8();
  D8():
    deopt 27 [a1];
  L11():
    a2 = force? a1;
    checkMissing(a2);
    c = `as.logical`(a2);
    if c then L12() else L1();
  L1():
    goto L2();
  L2():
    s17 = ld s;
    check L22() else D17();
  L12():
    _gsub_with_transformed_matches = ldf `.gsub_with_transformed_matches`;
    check L13() else D9();
  D9():
    deopt 30 [];
  D17():
    deopt 67 [s17];
  L13():
    p5 = prom<V +>{
      s9 = ld s;
      s10 = force? s9;
      checkMissing(s10);
      return s10;
    };
    p6 = prom<V +>{
      urlify = ld urlify;
      urlify1 = force? urlify;
      checkMissing(urlify1);
      return urlify1;
    };
    r11 = dyn _gsub_with_transformed_matches("&lt;(URL: *)?((https?|ftp)://[^[:space:]]+)[[:space:]]*&gt;", "&lt;<a href=\"%s\">\\2</a>&gt;", p5, p6, 2);
    check L14() else D10();
  L22():
    s18 = force? s17;
    checkMissing(s18);
    popenv;
    return s18;
  D10():
    deopt 36 [r11];
  L14():
    st s = r11;
    _gsub_with_transformed_matches1 = ldf `.gsub_with_transformed_matches`;
    check L15() else D11();
  D11():
    deopt 39 [];
  L15():
    p7 = prom<V +>{
      s11 = ld s;
      s12 = force? s11;
      checkMissing(s12);
      return s12;
    };
    p8 = prom<V +>{
      urlify2 = ld urlify;
      urlify3 = force? urlify2;
      checkMissing(urlify3);
      return urlify3;
    };
    r14 = dyn _gsub_with_transformed_matches1("([^>\"?])((https?|ftp)://[[:alnum:]/.:@+\\_~%#?=&;,-]+[[:alnum:]/])", "\\1<a href=\"%s\">\\2</a>", p7, p8, 2);
    check L16() else D12();
  D12():
    deopt 45 [r14];
  L16():
    st s = r14;
    _gsub_with_transformed_matches2 = ldf `.gsub_with_transformed_matches`;
    check L17() else D13();
  D13():
    deopt 48 [];
  L17():
    p9 = prom<V +>{
      s13 = ld s;
      s14 = force? s13;
      checkMissing(s14);
      return s14;
    };
    p10 = prom<V +>{
      urlify4 = ld urlify;
      urlify5 = force? urlify4;
      checkMissing(urlify5);
      return urlify5;
    };
    r17 = dyn _gsub_with_transformed_matches2("&lt;(DOI|doi):[[:space:]]*([^<[:space:]]+[[:alnum:]])&gt;", "&lt;<a href=\"https://doi.org/%s\">doi:\\2</a>&gt;", p9, p10, 2);
    check L18() else D14();
  D14():
    deopt 54 [r17];
  L18():
    st s = r17;
    _gsub_with_transformed_matches3 = ldf `.gsub_with_transformed_matches`;
    check L19() else D15();
  D15():
    deopt 57 [];
  L19():
    p11 = prom<V +>{
      s15 = ld s;
      s16 = force? s15;
      checkMissing(s16);
      return s16;
    };
    p12 = prom<V +>{
      urlify6 = ld urlify;
      urlify7 = force? urlify6;
      checkMissing(urlify7);
      return urlify7;
    };
    r20 = dyn _gsub_with_transformed_matches3("[^>\"](DOI|doi):[[:space:]]*([^<[:space:]&]+[[:alnum:]])", "&lt;<a href=\"https://doi.org/%s\">doi:\\2</a>&gt;", p11, p12, 2);
    check L20() else D16();
  D16():
    deopt 63 [r20];
  L20():
    st s = r20;
    goto L2();
  }
}