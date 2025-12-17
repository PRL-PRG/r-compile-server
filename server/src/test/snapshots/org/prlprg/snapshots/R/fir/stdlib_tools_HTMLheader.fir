fun main() {
  () -+> V { reg r:cls, reg cat:cls, reg HTMLheader:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner1716862637;
    st HTMLheader = r;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      HTMLheader = ldf HTMLheader;
      r1 = dyn HTMLheader("This is a sample header");
      return r1;
    };
    r3 = dyn cat[, sep](p, "\n");
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1716862637(title, logo, up, top, Rhome, css, headerTitle, outputEncoding) {
  (reg title:*, reg logo:*, reg up:*, reg top:*, reg Rhome:*, reg css:*, reg headerTitle:*, reg outputEncoding:*) -+> V { var title:*, reg title_isMissing:L, reg title_orDefault:*, var logo:*, reg logo_isMissing:L, reg logo_orDefault:*, var up:*, reg up_isMissing:L, reg up_orDefault:*, var top:*, reg top_isMissing:L, reg top_orDefault:*, reg file_path:cls, reg Rhome1:*, reg Rhome2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var Rhome:*, reg Rhome_isMissing:L, reg Rhome_orDefault:*, var css:*, reg css_isMissing:L, reg css_orDefault:*, reg file_path1:cls, reg Rhome3:*, reg Rhome4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var headerTitle:*, reg headerTitle_isMissing:L, reg headerTitle_orDefault:*, reg paste:cls, reg title1:*, reg title2:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), var outputEncoding:*, reg outputEncoding_isMissing:L, reg outputEncoding_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg paste1:cls, reg headerTitle1:*, reg headerTitle2:V, reg p6:p(V +), reg r12:V, reg paste2:cls, reg mime_canonical_encoding:cls, reg outputEncoding1:*, reg outputEncoding2:V, reg p7:p(V +), reg r14:V, reg p8:p(V +), reg r16:V, reg paste3:cls, reg css1:*, reg css2:V, reg p9:p(V +), reg r18:V, reg paste4:cls, reg title3:*, reg title4:V, reg p10:p(V +), reg r20:V, reg c:cls, reg r21:V, reg logo1:*, reg logo2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg result:*, reg result1:V, reg paste5:cls, reg file_path2:cls, reg Rhome5:*, reg Rhome6:V, reg p11:p(V +), reg r25:V, reg p12:p(V +), reg r27:V, reg c2:cls, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg result2:*, reg result3:V, reg c3:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg up1:*, reg up2:V, reg c4:V, reg r35:V, reg c5:L, reg c6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg c10:L, reg r37:V, reg top1:*, reg top2:V, reg c11:V, reg r38:V, reg c12:L, reg c13:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg result4:*, reg result5:V, reg c16:cls, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg up3:*, reg up4:V, reg c17:V, reg r44:V, reg c18:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg result6:*, reg result7:V, reg paste6:cls, reg up5:*, reg up6:V, reg p13:p(V +), reg file_path3:cls, reg Rhome7:*, reg Rhome8:V, reg p14:p(V +), reg r49:V, reg p15:p(V +), reg r51:V, reg c19:cls, reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg top3:*, reg top4:V, reg c20:V, reg r56:V, reg c21:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg result8:*, reg result9:V, reg paste7:cls, reg top5:*, reg top6:V, reg p16:p(V +), reg file_path4:cls, reg Rhome9:*, reg Rhome10:V, reg p17:p(V +), reg r61:V, reg p18:p(V +), reg r63:V, reg c22:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg result10:*, reg result11:V, reg c23:cls, reg r68:V, reg result12:*, reg result13:V |
    mkenv;
    title_isMissing = missing.0(title);
    if title_isMissing then L0("R") else L0(title);
  L0(title_orDefault):
    st title = title_orDefault;
    logo_isMissing = missing.0(logo);
    if logo_isMissing then L1(TRUE) else L1(logo);
  L1(logo_orDefault):
    st logo = logo_orDefault;
    up_isMissing = missing.0(up);
    if up_isMissing then L2(NULL) else L2(up);
  L2(up_orDefault):
    st up = up_orDefault;
    top_isMissing = missing.0(top);
    if top_isMissing then L3() else L4(top);
  L3():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        Rhome1 = ld Rhome;
        Rhome2 = force? Rhome1;
        checkMissing(Rhome2);
        return Rhome2;
      };
      r1 = dyn file_path(p, "doc/html/index.html");
      return r1;
    };
    goto L4(p1);
  L4(top_orDefault):
    st top = top_orDefault;
    Rhome_isMissing = missing.0(Rhome);
    if Rhome_isMissing then L5("") else L5(Rhome);
  L5(Rhome_orDefault):
    st Rhome = Rhome_orDefault;
    css_isMissing = missing.0(css);
    if css_isMissing then L6() else L7(css);
  L6():
    p3 = prom<V +>{
      file_path1 = ldf `file.path`;
      p2 = prom<V +>{
        Rhome3 = ld Rhome;
        Rhome4 = force? Rhome3;
        checkMissing(Rhome4);
        return Rhome4;
      };
      r4 = dyn file_path1(p2, "doc/html/R.css");
      return r4;
    };
    goto L7(p3);
  L7(css_orDefault):
    st css = css_orDefault;
    headerTitle_isMissing = missing.0(headerTitle);
    if headerTitle_isMissing then L8() else L9(headerTitle);
  L8():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        title1 = ld title;
        title2 = force? title1;
        checkMissing(title2);
        return title2;
      };
      r7 = dyn paste("R:", p4);
      return r7;
    };
    goto L9(p5);
  L9(headerTitle_orDefault):
    st headerTitle = headerTitle_orDefault;
    outputEncoding_isMissing = missing.0(outputEncoding);
    if outputEncoding_isMissing then L10("UTF-8") else L10(outputEncoding);
  L10(outputEncoding_orDefault):
    st outputEncoding = outputEncoding_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L11(r10):
    st result = r10;
    logo1 = ld logo;
    check L42() else D9();
  L31():
    paste1 = ldf paste0;
    check L33() else D0();
  L32():
    r9 = dyn base("<!DOCTYPE html>", "<html>", <lang paste0("<head><title>", headerTitle, "</title>")>, <lang paste0("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=", mime_canonical_encoding(outputEncoding), "\" />")>, "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", <lang paste0("<link rel=\"stylesheet\" type=\"text/css\" href=\"", css, "\" />")>, "</head><body><div class=\"container\">", <lang paste("<h1>", title)>);
    goto L11(r9);
  D0():
    deopt 5 [];
  D9():
    deopt 32 [logo1];
  L33():
    p6 = prom<V +>{
      headerTitle1 = ld headerTitle;
      headerTitle2 = force? headerTitle1;
      checkMissing(headerTitle2);
      return headerTitle2;
    };
    r12 = dyn paste1("<head><title>", p6, "</title>");
    check L34() else D1();
  L42():
    logo2 = force? logo1;
    checkMissing(logo2);
    c1 = `as.logical`(logo2);
    if c1 then L43() else L12();
  D1():
    deopt 9 [r12];
  L12():
    goto L14();
  L14():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L34():
    paste2 = ldf paste0;
    check L35() else D2();
  L43():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  D2():
    deopt 11 [];
  L13(r23):
    st result = r23;
    goto L14();
  L15(r31):
    st result = r31;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L35():
    p8 = prom<V +>{
      mime_canonical_encoding = ldf mime_canonical_encoding;
      p7 = prom<V +>{
        outputEncoding1 = ld outputEncoding;
        outputEncoding2 = force? outputEncoding1;
        checkMissing(outputEncoding2);
        return outputEncoding2;
      };
      r14 = dyn mime_canonical_encoding(p7);
      return r14;
    };
    r16 = dyn paste2("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=", p8, "\" />");
    check L36() else D3();
  L44():
    result = ld result;
    check L46() else D10();
  L45():
    r22 = dyn base1(<sym result>, <lang paste0("<img class=\"toplogo\" src=\"", file.path(Rhome, "doc/html/Rlogo.svg"), "\" alt=\"[R logo]\" />")>);
    goto L13(r22);
  L51():
    result2 = ld result;
    check L53() else D14();
  L52():
    r30 = dyn base2(<sym result>, "</h1>", "<hr/>");
    goto L15(r30);
  D3():
    deopt 15 [r16];
  D10():
    deopt 36 [result];
  D14():
    deopt 51 [result2];
  L16(r34):
    r35 = `!`(r34);
    c5 = `as.logical`(r35);
    if c5 then L17(c5) else L58();
  L36():
    paste3 = ldf paste0;
    check L37() else D4();
  L46():
    result1 = force? result;
    checkMissing(result1);
    paste5 = ldf paste0;
    check L47() else D11();
  L53():
    result3 = force? result2;
    checkMissing(result3);
    c3 = ldf c in base;
    r32 = dyn c3(result3, "</h1>", "<hr/>");
    check L54() else D15();
  L55():
    up1 = ld up;
    check L57() else D16();
  L56():
    r33 = dyn base3(<sym up>);
    goto L16(r33);
  D4():
    deopt 18 [];
  D11():
    deopt 39 [];
  D15():
    deopt 56 [r32];
  D16():
    deopt 59 [up1];
  L17(c6):
    c15 = `as.logical`(c6);
    if c15 then L63() else L19();
  L37():
    p9 = prom<V +>{
      css1 = ld css;
      css2 = force? css1;
      checkMissing(css2);
      return css2;
    };
    r18 = dyn paste3("<link rel=\"stylesheet\" type=\"text/css\" href=\"", p9, "\" />");
    check L38() else D5();
  L47():
    p12 = prom<V +>{
      file_path2 = ldf `file.path`;
      p11 = prom<V +>{
        Rhome5 = ld Rhome;
        Rhome6 = force? Rhome5;
        checkMissing(Rhome6);
        return Rhome6;
      };
      r25 = dyn file_path2(p11, "doc/html/Rlogo.svg");
      return r25;
    };
    r27 = dyn paste5("<img class=\"toplogo\" src=\"", p12, "\" alt=\"[R logo]\" />");
    check L48() else D12();
  L54():
    goto L15(r32);
  L57():
    up2 = force? up1;
    checkMissing(up2);
    c4 = `==`(up2, NULL);
    goto L16(c4);
  L58():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  D5():
    deopt 22 [r18];
  D12():
    deopt 43 [r27];
  L18(c10, r37):
    r38 = `!`(r37);
    c12 = `as.logical`(r38);
    c13 = `||`(c10, c12);
    goto L17(c13);
  L19():
    goto L30();
  L30():
    result12 = ld result;
    check L95() else D32();
  L38():
    paste4 = ldf paste;
    check L39() else D6();
  L48():
    c2 = ldf c in base;
    r28 = dyn c2(result1, r27);
    check L49() else D13();
  L59():
    top1 = ld top;
    check L61() else D17();
  L60():
    r36 = dyn base4(<sym top>);
    goto L18(c5, r36);
  L63():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  D6():
    deopt 25 [];
  D13():
    deopt 45 [r28];
  D17():
    deopt 64 [c5, top1];
  D32():
    deopt 131 [result12];
  L20(r40):
    st result = r40;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L39():
    p10 = prom<V +>{
      title3 = ld title;
      title4 = force? title3;
      checkMissing(title4);
      return title4;
    };
    r20 = dyn paste4("<h1>", p10);
    check L40() else D7();
  L49():
    goto L13(r28);
  L61():
    top2 = force? top1;
    checkMissing(top2);
    c11 = `==`(top2, NULL);
    goto L18(c5, c11);
  L64():
    result4 = ld result;
    check L66() else D18();
  L65():
    r39 = dyn base5(<sym result>, "<div style=\"text-align: center;\">");
    goto L20(r39);
  L95():
    result13 = force? result12;
    checkMissing(result13);
    popenv;
    return result13;
  D7():
    deopt 28 [r20];
  D18():
    deopt 71 [result4];
  L21(r43):
    r44 = `!`(r43);
    c18 = `as.logical`(r44);
    if c18 then L71() else L22();
  L40():
    c = ldf c in base;
    r21 = dyn c("<!DOCTYPE html>", "<html>", r12, r16, "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", r18, "</head><body><div class=\"container\">", r20);
    check L41() else D8();
  L66():
    result5 = force? result4;
    checkMissing(result5);
    c16 = ldf c in base;
    r41 = dyn c16(result5, "<div style=\"text-align: center;\">");
    check L67() else D19();
  L68():
    up3 = ld up;
    check L70() else D20();
  L69():
    r42 = dyn base6(<sym up>);
    goto L21(r42);
  D8():
    deopt 30 [r21];
  D19():
    deopt 75 [r41];
  D20():
    deopt 78 [up3];
  L22():
    goto L24();
  L24():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L79() else L80();
  L41():
    goto L11(r21);
  L67():
    goto L20(r41);
  L70():
    up4 = force? up3;
    checkMissing(up4);
    c17 = `==`(up4, NULL);
    goto L21(c17);
  L71():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L23(r46):
    st result = r46;
    goto L24();
  L25(r55):
    r56 = `!`(r55);
    c21 = `as.logical`(r56);
    if c21 then L82() else L26();
  L72():
    result6 = ld result;
    check L74() else D21();
  L73():
    r45 = dyn base7(<sym result>, <lang paste0("<a href=\"", up, "\"><img class=\"arrow\" src=\"", file.path(Rhome, "doc/html/left.jpg"), "\" alt=\"[Up]\" /></a>")>);
    goto L23(r45);
  L79():
    top3 = ld top;
    check L81() else D25();
  L80():
    r54 = dyn base8(<sym top>);
    goto L25(r54);
  D21():
    deopt 84 [result6];
  D25():
    deopt 100 [top3];
  L26():
    goto L28();
  L28():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L90() else L91();
  L74():
    result7 = force? result6;
    checkMissing(result7);
    paste6 = ldf paste0;
    check L75() else D22();
  L81():
    top4 = force? top3;
    checkMissing(top4);
    c20 = `==`(top4, NULL);
    goto L25(c20);
  L82():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L83() else L84();
  D22():
    deopt 87 [];
  L27(r58):
    st result = r58;
    goto L28();
  L29(r67):
    st result = r67;
    goto L30();
  L75():
    p13 = prom<V +>{
      up5 = ld up;
      up6 = force? up5;
      checkMissing(up6);
      return up6;
    };
    p15 = prom<V +>{
      file_path3 = ldf `file.path`;
      p14 = prom<V +>{
        Rhome7 = ld Rhome;
        Rhome8 = force? Rhome7;
        checkMissing(Rhome8);
        return Rhome8;
      };
      r49 = dyn file_path3(p14, "doc/html/left.jpg");
      return r49;
    };
    r51 = dyn paste6("<a href=\"", p13, "\"><img class=\"arrow\" src=\"", p15, "\" alt=\"[Up]\" /></a>");
    check L76() else D23();
  L83():
    result8 = ld result;
    check L85() else D26();
  L84():
    r57 = dyn base9(<sym result>, <lang paste0("<a href=\"", top, "\"><img class=\"arrow\" src=\"", file.path(Rhome, "doc/html/up.jpg"), "\" alt=\"[Top]\" /></a>")>);
    goto L27(r57);
  L90():
    result10 = ld result;
    check L92() else D30();
  L91():
    r66 = dyn base10(<sym result>, "</div>");
    goto L29(r66);
  D23():
    deopt 93 [r51];
  D26():
    deopt 106 [result8];
  D30():
    deopt 123 [result10];
  L76():
    c19 = ldf c in base;
    r52 = dyn c19(result7, r51);
    check L77() else D24();
  L85():
    result9 = force? result8;
    checkMissing(result9);
    paste7 = ldf paste0;
    check L86() else D27();
  L92():
    result11 = force? result10;
    checkMissing(result11);
    c23 = ldf c in base;
    r68 = dyn c23(result11, "</div>");
    check L93() else D31();
  D24():
    deopt 95 [r52];
  D27():
    deopt 109 [];
  D31():
    deopt 127 [r68];
  L77():
    goto L23(r52);
  L86():
    p16 = prom<V +>{
      top5 = ld top;
      top6 = force? top5;
      checkMissing(top6);
      return top6;
    };
    p18 = prom<V +>{
      file_path4 = ldf `file.path`;
      p17 = prom<V +>{
        Rhome9 = ld Rhome;
        Rhome10 = force? Rhome9;
        checkMissing(Rhome10);
        return Rhome10;
      };
      r61 = dyn file_path4(p17, "doc/html/up.jpg");
      return r61;
    };
    r63 = dyn paste7("<a href=\"", p16, "\"><img class=\"arrow\" src=\"", p18, "\" alt=\"[Top]\" /></a>");
    check L87() else D28();
  L93():
    goto L29(r68);
  D28():
    deopt 115 [r63];
  L87():
    c22 = ldf c in base;
    r64 = dyn c22(result9, r63);
    check L88() else D29();
  D29():
    deopt 117 [r64];
  L88():
    goto L27(r64);
  }
}