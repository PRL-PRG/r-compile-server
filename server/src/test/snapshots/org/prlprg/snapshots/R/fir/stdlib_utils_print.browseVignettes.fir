fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.browseVignettes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg message:cls, reg gettextf:cls, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg attr:cls, reg r6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg invisible:cls, reg r15:V, reg r18:cls, reg __:cls, reg r19:V, reg r20:cls, reg r21:V, reg tempfile:cls, reg r22:V, reg sink:cls, reg file:*, reg file1:V, reg p3:p(V +), reg r24:V, reg port:*, reg port1:V, reg r25:V, reg c1:L, reg file_path:cls, reg R_home:cls, reg r27:V, reg p4:p(V +), reg r29:V, reg cat:cls, reg sprintf:cls, reg css_file:*, reg css_file1:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg r33:V, reg cat1:cls, reg sprintf1:cls, reg deparse2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg x7:*, reg x8:V, reg attr1:cls, reg r36:V, reg p7:p(V +), reg r38:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg cat2:cls, reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg x9:*, reg x10:V, reg names:cls, reg r46:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x11:V, reg cat3:cls, reg sprintf2:cls, reg pkg:*, reg pkg1:V, reg p10:p(V +), reg r48:V, reg p11:p(V +), reg r50:V, reg cat4:cls, reg r51:V, reg oneLink:cls, reg x12:*, reg x13:V, reg c3:L, reg x15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pkg2:*, reg pkg3:V, reg __1:cls, reg r52:V, reg p12:p(V +), reg r54:V, reg cat5:cls, reg paste:cls, reg links:*, reg links1:V, reg p13:p(V +), reg r56:V, reg p14:p(V +), reg r58:V, reg cat6:cls, reg r59:V, reg cat7:cls, reg r60:V, reg cat8:cls, reg r61:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg x16:*, reg x17:V, reg attr2:cls, reg r66:V, reg nzchar:cls, reg r67:V, reg c4:L, reg cat9:cls, reg sprintf3:cls, reg foot:*, reg foot1:V, reg p15:p(V +), reg r69:V, reg p16:p(V +), reg r71:V, reg cat10:cls, reg r73:V, reg sink1:cls, reg r74:V, reg port2:*, reg port3:V, reg r75:V, reg c5:L, reg browseURL:cls, reg sprintf4:cls, reg port4:*, reg port5:V, reg p17:p(V +), reg basename:cls, reg file2:*, reg file3:V, reg p18:p(V +), reg r78:V, reg p19:p(V +), reg r80:V, reg p20:p(V +), reg r82:V, reg browseURL1:cls, reg sprintf5:cls, reg file4:*, reg file5:V, reg p21:p(V +), reg r85:V, reg p22:p(V +), reg r87:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r88:V, reg r89:V, reg x18:*, reg x19:V, reg invisible1:cls, reg r90:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L20() else L1();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    r18 = clos inner1236783023;
    st oneLink = r18;
    __ = ldf `::`;
    check L29() else D6();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L19() else D1();
  L20():
    message = ldf message;
    check L21() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D6():
    deopt 27 [];
  L19():
    goto L0(r2);
  L21():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        deparse1 = ldf deparse1;
        p = prom<V +>{
          sym1 = ldf attr;
          base1 = ldf attr in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r5):
          return r5;
        L1():
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          attr = ldf attr in base;
          r6 = dyn attr(x4, "call");
          goto L0(r6);
        L2():
          r4 = dyn base1(<sym x>, "call");
          goto L0(r4);
        };
        r8 = dyn deparse1(p);
        return r8;
      };
      r10 = dyn gettextf("No vignettes found by %s", p1);
      return r10;
    };
    r12 = dyn message[, domain](p2, NA_LGL);
    check L22() else D3();
  L29():
    r19 = dyn __("tools", "startDynamicHelp");
    check L30() else D7();
  D3():
    deopt 13 [r12];
  D7():
    deopt 30 [r19];
  L22():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L30():
    checkFun.0(r19);
    r20 = r19 as cls;
    r21 = dyn r20(NA_LGL);
    check L31() else D8();
  D8():
    deopt 33 [r21];
  L2(r14):
    popenv;
    return r14;
  L23():
    x5 = ld x;
    check L25() else D4();
  L24():
    r13 = dyn base2(<sym x>);
    goto L2(r13);
  L31():
    st port = r21;
    tempfile = ldf tempfile;
    check L32() else D9();
  D4():
    deopt 16 [x5];
  D9():
    deopt 36 [];
  L25():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r15 = dyn invisible(x6);
    check L26() else D5();
  L32():
    r22 = dyn tempfile[, fileext]("Rvig.", ".html");
    check L33() else D10();
  D5():
    deopt 19 [r15];
  D10():
    deopt 40 [r22];
  L26():
    goto L2(r15);
  L33():
    st file = r22;
    sink = ldf sink;
    check L34() else D11();
  D11():
    deopt 43 [];
  L34():
    p3 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r24 = dyn sink(p3);
    check L35() else D12();
  D12():
    deopt 45 [r24];
  L35():
    port = ld port;
    check L36() else D13();
  D13():
    deopt 46 [port];
  L36():
    port1 = force? port;
    checkMissing(port1);
    r25 = `>`(port1, 0);
    c1 = `as.logical`(r25);
    if c1 then L37() else L4();
  L4():
    file_path = ldf `file.path`;
    check L39() else D14();
  L5():
    cat = ldf cat;
    check L41() else D16();
  L37():
    st css_file = "/doc/html/R.css";
    goto L5();
  D14():
    deopt 54 [];
  D16():
    deopt 61 [];
  L39():
    p4 = prom<V +>{
      R_home = ldf `R.home`;
      r27 = dyn R_home("doc");
      return r27;
    };
    r29 = dyn file_path(p4, "html", "R.css");
    check L40() else D15();
  L41():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        css_file = ld css_file;
        css_file1 = force? css_file;
        checkMissing(css_file1);
        return css_file1;
      };
      r31 = dyn sprintf("<!DOCTYPE html>\n<html>\n<head>\n<title>R Vignettes</title>\n<meta http-equiv='Content-Type' content='text/html; charset=utf-8' />\n<meta name='viewport' content='width=device-width, initial-scale=1.0, user-scalable=yes' />\n<link rel='stylesheet' type='text/css' href='%s' />\n</head>\n<body>\n<div class='container'>\n", p5);
      return r31;
    };
    r33 = dyn cat(p6);
    check L42() else D17();
  D15():
    deopt 58 [r29];
  D17():
    deopt 63 [r33];
  L40():
    st css_file = r29;
    goto L5();
  L42():
    cat1 = ldf cat;
    check L43() else D18();
  D18():
    deopt 65 [];
  L43():
    p9 = prom<V +>{
      sprintf1 = ldf sprintf;
      p8 = prom<V +>{
        deparse2 = ldf deparse1;
        p7 = prom<V +>{
          sym3 = ldf attr;
          base3 = ldf attr in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r35):
          return r35;
        L1():
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          attr1 = ldf attr in base;
          r36 = dyn attr1(x8, "call");
          goto L0(r36);
        L2():
          r34 = dyn base3(<sym x>, "call");
          goto L0(r34);
        };
        r38 = dyn deparse2(p7);
        return r38;
      };
      r40 = dyn sprintf1("<h2>Vignettes found by <code><q>%s</q></code></h2>", p8);
      return r40;
    };
    r42 = dyn cat1(p9);
    check L44() else D19();
  D19():
    deopt 67 [r42];
  L44():
    cat2 = ldf cat;
    check L45() else D20();
  D20():
    deopt 69 [];
  L45():
    r43 = dyn cat2("<div class=\"vignettes\">");
    check L46() else D21();
  D21():
    deopt 71 [r43];
  L46():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L6(r45):
    s = toForSeq(r45);
    l = length(s);
    i = 0;
    goto L7(i);
  L47():
    x9 = ld x;
    check L49() else D22();
  L48():
    r44 = dyn base4(<sym x>);
    goto L6(r44);
  D22():
    deopt 74 [x9];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L51() else L8();
  L49():
    x10 = force? x9;
    checkMissing(x10);
    names = ldf names in base;
    r46 = dyn names(x10);
    check L50() else D23();
  D23():
    deopt 77 [r46];
  L8():
    x11 = `[[`(s, i2, NULL, TRUE);
    st pkg = x11;
    cat3 = ldf cat;
    check L52() else D24();
  L50():
    goto L6(r46);
  L51():
    cat7 = ldf cat;
    check L62() else D34();
  D24():
    deopt 79 [i2];
  D34():
    deopt 105 [];
  L52():
    p11 = prom<V +>{
      sprintf2 = ldf sprintf;
      p10 = prom<V +>{
        pkg = ld pkg;
        pkg1 = force? pkg;
        checkMissing(pkg1);
        return pkg1;
      };
      r48 = dyn sprintf2("<h3>Vignettes in package <code>%s</code></h3>\n", p10);
      return r48;
    };
    r50 = dyn cat3(p11);
    check L53() else D25();
  L62():
    r60 = dyn cat7("</div>");
    check L63() else D35();
  D25():
    deopt 81 [i2, r50];
  D35():
    deopt 107 [r60];
  L53():
    cat4 = ldf cat;
    check L54() else D26();
  L63():
    cat8 = ldf cat;
    check L64() else D36();
  D26():
    deopt 83 [i2];
  D36():
    deopt 109 [];
  L54():
    r51 = dyn cat4("<ul>\n");
    check L55() else D27();
  L64():
    r61 = dyn cat8("<hr/>");
    check L65() else D37();
  D27():
    deopt 85 [i2, r51];
  D37():
    deopt 111 [r61];
  L55():
    oneLink = ldf oneLink;
    check L56() else D28();
  L65():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  D28():
    deopt 87 [i2];
  L9(r63):
    c4 = `as.logical`(r63);
    if c4 then L73() else L11();
  L56():
    p12 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c3 = `is.object`(x13);
      if c3 then L1() else L2(x13);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x13);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x15):
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      __1 = ldf `[[` in base;
      r52 = dyn __1(x15, pkg3);
      goto L0(r52);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r54 = dyn oneLink(p12);
    check L57() else D29();
  L66():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L67():
    r62 = dyn base5(<lang `<-`(foot, attr(x, "footer"))>);
    goto L9(r62);
  D29():
    deopt 89 [i2, r54];
  L10(r65):
    st foot = r65;
    nzchar = ldf nzchar in base;
    r67 = dyn nzchar(r65);
    check L72() else D40();
  L11():
    goto L12();
  L12():
    cat10 = ldf cat;
    check L77() else D43();
  L57():
    st links = r54;
    cat5 = ldf cat;
    check L58() else D30();
  L68():
    x16 = ld x;
    check L70() else D38();
  L69():
    r64 = dyn base6(<sym x>, "footer");
    goto L10(r64);
  L73():
    cat9 = ldf cat;
    check L74() else D41();
  D30():
    deopt 92 [i2];
  D38():
    deopt 116 [x16];
  D40():
    deopt 123 [r67];
  D41():
    deopt 125 [];
  D43():
    deopt 131 [];
  L58():
    p14 = prom<V +>{
      paste = ldf paste;
      p13 = prom<V +>{
        links = ld links;
        links1 = force? links;
        checkMissing(links1);
        return links1;
      };
      r56 = dyn paste(p13);
      return r56;
    };
    r58 = dyn cat5[, collapse](p14, "\n");
    check L59() else D31();
  L70():
    x17 = force? x16;
    checkMissing(x17);
    attr2 = ldf attr in base;
    r66 = dyn attr2(x17, "footer");
    check L71() else D39();
  L72():
    goto L9(r67);
  L74():
    p16 = prom<V +>{
      sprintf3 = ldf sprintf;
      p15 = prom<V +>{
        foot = ld foot;
        foot1 = force? foot;
        checkMissing(foot1);
        return foot1;
      };
      r69 = dyn sprintf3("<p>%s</p>", p15);
      return r69;
    };
    r71 = dyn cat9(p16);
    check L75() else D42();
  L77():
    r73 = dyn cat10("</div>\n</body>\n</html>\n");
    check L78() else D44();
  D31():
    deopt 96 [i2, r58];
  D39():
    deopt 120 [r66];
  D42():
    deopt 127 [r71];
  D44():
    deopt 133 [r73];
  L59():
    cat6 = ldf cat;
    check L60() else D32();
  L71():
    goto L10(r66);
  L75():
    goto L12();
  L78():
    sink1 = ldf sink;
    check L79() else D45();
  D32():
    deopt 98 [i2];
  D45():
    deopt 135 [];
  L60():
    r59 = dyn cat6("\n</ul>\n");
    check L61() else D33();
  L79():
    r74 = dyn sink1();
    check L80() else D46();
  D33():
    deopt 100 [i2, r59];
  D46():
    deopt 136 [r74];
  L61():
    goto L7(i2);
  L80():
    port2 = ld port;
    check L81() else D47();
  D47():
    deopt 137 [port2];
  L81():
    port3 = force? port2;
    checkMissing(port3);
    r75 = `>`(port3, 0);
    c5 = `as.logical`(r75);
    if c5 then L82() else L13();
  L13():
    browseURL1 = ldf browseURL;
    check L86() else D50();
  L14():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L82():
    browseURL = ldf browseURL;
    check L83() else D48();
  D48():
    deopt 142 [];
  D50():
    deopt 146 [];
  L15(r89):
    popenv;
    return r89;
  L83():
    p20 = prom<V +>{
      sprintf4 = ldf sprintf;
      p17 = prom<V +>{
        port4 = ld port;
        port5 = force? port4;
        checkMissing(port5);
        return port5;
      };
      p19 = prom<V +>{
        basename = ldf basename;
        p18 = prom<V +>{
          file2 = ld file;
          file3 = force? file2;
          checkMissing(file3);
          return file3;
        };
        r78 = dyn basename(p18);
        return r78;
      };
      r80 = dyn sprintf4("http://127.0.0.1:%d/session/%s", p17, p19);
      return r80;
    };
    r82 = dyn browseURL(p20);
    check L84() else D49();
  L86():
    p22 = prom<V +>{
      sprintf5 = ldf sprintf;
      p21 = prom<V +>{
        file4 = ld file;
        file5 = force? file4;
        checkMissing(file5);
        return file5;
      };
      r85 = dyn sprintf5("file://%s", p21);
      return r85;
    };
    r87 = dyn browseURL1(p22);
    check L87() else D51();
  L88():
    x18 = ld x;
    check L90() else D52();
  L89():
    r88 = dyn base7(<sym x>);
    goto L15(r88);
  D49():
    deopt 144 [r82];
  D51():
    deopt 148 [r87];
  D52():
    deopt 151 [x18];
  L84():
    goto L14();
  L87():
    goto L14();
  L90():
    x19 = force? x18;
    checkMissing(x19);
    invisible1 = ldf invisible in base;
    r90 = dyn invisible1(x19);
    check L91() else D53();
  D53():
    deopt 154 [r90];
  L91():
    goto L15(r90);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg gsub:cls, reg s3:*, reg s4:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg p:p(V +), reg r9:V, reg port:*, reg port1:V, reg r10:V, reg c2:L, reg sprintf:cls, reg pkg:*, reg pkg1:V, reg p1:p(V +), reg r12:V, reg sprintf1:cls, reg s7:*, reg s8:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg s11:*, reg s12:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r17:V, reg s15:*, reg s16:V, reg c5:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r18:V, reg s19:*, reg s20:V, reg c6:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r19:V, reg sub:cls, reg pdf:*, reg pdf1:V, reg p3:p(V +), reg r21:V, reg sprintf2:cls, reg title:*, reg title1:V, reg p4:p(V +), reg ifelse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg pdf2:*, reg pdf3:V, reg nzchar:cls, reg r25:V, reg p5:p(V +), reg sprintf3:cls, reg prefix:*, reg prefix1:V, reg p6:p(V +), reg pdf4:*, reg pdf5:V, reg p7:p(V +), reg toupper:cls, reg pdfext:*, reg pdfext1:V, reg p8:p(V +), reg r30:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg p11:p(V +), reg sprintf4:cls, reg prefix2:*, reg prefix3:V, reg p12:p(V +), reg src:*, reg src1:V, reg p13:p(V +), reg r38:V, reg p14:p(V +), reg ifelse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg rcode:*, reg rcode1:V, reg nzchar1:cls, reg r42:V, reg p15:p(V +), reg sprintf5:cls, reg prefix4:*, reg prefix5:V, reg p16:p(V +), reg rcode2:*, reg rcode3:V, reg p17:p(V +), reg r46:V, reg p18:p(V +), reg r48:V, reg p19:p(V +), reg r50:V |
    mkenv;
    st s = s;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L12() else L1();
  L8():
    s1 = ld s;
    check L10() else D0();
  L9():
    r = dyn base(<sym s>);
    goto L0(r);
  D0():
    deopt 2 [s1];
  L1():
    gsub = ldf gsub;
    check L17() else D4();
  L10():
    s2 = force? s1;
    checkMissing(s2);
    length = ldf length in base;
    r2 = dyn length(s2);
    check L11() else D1();
  L12():
    character = ldf character;
    check L13() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 16 [];
  L11():
    goto L0(r2);
  L13():
    r4 = dyn character(0);
    check L14() else D3();
  L17():
    p = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      c1 = `is.object`(s4);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", s4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r7 = dyn __(s4, <missing>, "Title");
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn gsub("&", "&amp;", p);
    check L18() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 20 [r9];
  L14():
    popenv;
    return r4;
  L18():
    st title = r9;
    port = ld port;
    check L19() else D6();
  D6():
    deopt 22 [port];
  L19():
    port1 = force? port;
    checkMissing(port1);
    r10 = `>`(port1, 0);
    c2 = `as.logical`(r10);
    if c2 then L20() else L3();
  L3():
    sprintf1 = ldf sprintf;
    check L24() else D9();
  L4():
    s11 = ld s;
    check L26() else D11();
  L20():
    sprintf = ldf sprintf;
    check L21() else D7();
  D7():
    deopt 27 [];
  D9():
    deopt 33 [];
  D11():
    deopt 38 [s11];
  L21():
    p1 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r12 = dyn sprintf("/library/%s/doc", p1);
    check L22() else D8();
  L24():
    p2 = prom<V +>{
      s7 = ld s;
      s8 = force? s7;
      checkMissing(s8);
      c3 = `is.object`(s8);
      if c3 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", s8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r14 = dyn __1(s8, <missing>, "Dir");
      goto L0(r14);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r16 = dyn sprintf1("file://%s/doc", p2);
    check L25() else D10();
  L26():
    s12 = force? s11;
    checkMissing(s12);
    c4 = `is.object`(s12);
    if c4 then L27() else L28();
  D8():
    deopt 30 [r12];
  D10():
    deopt 36 [r16];
  L5(dx5):
    st src = dx5;
    s15 = ld s;
    check L30() else D12();
  L22():
    st prefix = r12;
    goto L4();
  L25():
    st prefix = r16;
    goto L4();
  L27():
    dr4 = tryDispatchBuiltin.1("[", s12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28();
  L28():
    __2 = ldf `[` in base;
    r17 = dyn __2(s12, <missing>, "File");
    goto L5(r17);
  D12():
    deopt 45 [s15];
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L30():
    s16 = force? s15;
    checkMissing(s16);
    c5 = `is.object`(s16);
    if c5 then L31() else L32();
  L6(dx7):
    st pdf = dx7;
    s19 = ld s;
    check L34() else D13();
  L31():
    dr6 = tryDispatchBuiltin.1("[", s16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L33() else L32();
  L32():
    __3 = ldf `[` in base;
    r18 = dyn __3(s16, <missing>, "PDF");
    goto L6(r18);
  D13():
    deopt 52 [s19];
  L33():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L34():
    s20 = force? s19;
    checkMissing(s20);
    c6 = `is.object`(s20);
    if c6 then L35() else L36();
  L7(dx9):
    st rcode = dx9;
    sub = ldf sub;
    check L38() else D14();
  L35():
    dr8 = tryDispatchBuiltin.1("[", s20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L37() else L36();
  L36():
    __4 = ldf `[` in base;
    r19 = dyn __4(s20, <missing>, "R");
    goto L7(r19);
  D14():
    deopt 60 [];
  L37():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx8);
  L38():
    p3 = prom<V +>{
      pdf = ld pdf;
      pdf1 = force? pdf;
      checkMissing(pdf1);
      return pdf1;
    };
    r21 = dyn sub("^.*\\.", "", p3);
    check L39() else D15();
  D15():
    deopt 64 [r21];
  L39():
    st pdfext = r21;
    sprintf2 = ldf sprintf;
    check L40() else D16();
  D16():
    deopt 67 [];
  L40():
    p4 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    p11 = prom<V +>{
      ifelse = ldf ifelse;
      p5 = prom<V +>{
        sym1 = ldf nzchar;
        base1 = ldf nzchar in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        pdf2 = ld pdf;
        pdf3 = force? pdf2;
        checkMissing(pdf3);
        nzchar = ldf nzchar in base;
        r25 = dyn nzchar(pdf3);
        goto L0(r25);
      L2():
        r23 = dyn base1(<sym pdf>);
        goto L0(r23);
      };
      p10 = prom<V +>{
        sprintf3 = ldf sprintf;
        p6 = prom<V +>{
          prefix = ld prefix;
          prefix1 = force? prefix;
          checkMissing(prefix1);
          return prefix1;
        };
        p7 = prom<V +>{
          pdf4 = ld pdf;
          pdf5 = force? pdf4;
          checkMissing(pdf5);
          return pdf5;
        };
        p9 = prom<V +>{
          toupper = ldf toupper;
          p8 = prom<V +>{
            pdfext = ld pdfext;
            pdfext1 = force? pdfext;
            checkMissing(pdfext1);
            return pdfext1;
          };
          r30 = dyn toupper(p8);
          return r30;
        };
        r32 = dyn sprintf3("<a href='%s/%s'>%s</a>&nbsp;", p6, p7, p9);
        return r32;
      };
      r34 = dyn ifelse(p5, p10, "");
      return r34;
    };
    p14 = prom<V +>{
      sprintf4 = ldf sprintf;
      p12 = prom<V +>{
        prefix2 = ld prefix;
        prefix3 = force? prefix2;
        checkMissing(prefix3);
        return prefix3;
      };
      p13 = prom<V +>{
        src = ld src;
        src1 = force? src;
        checkMissing(src1);
        return src1;
      };
      r38 = dyn sprintf4("<a href='%s/%s'>source</a>&nbsp;", p12, p13);
      return r38;
    };
    p19 = prom<V +>{
      ifelse1 = ldf ifelse;
      p15 = prom<V +>{
        sym2 = ldf nzchar;
        base2 = ldf nzchar in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r41):
        return r41;
      L1():
        rcode = ld rcode;
        rcode1 = force? rcode;
        checkMissing(rcode1);
        nzchar1 = ldf nzchar in base;
        r42 = dyn nzchar1(rcode1);
        goto L0(r42);
      L2():
        r40 = dyn base2(<sym rcode>);
        goto L0(r40);
      };
      p18 = prom<V +>{
        sprintf5 = ldf sprintf;
        p16 = prom<V +>{
          prefix4 = ld prefix;
          prefix5 = force? prefix4;
          checkMissing(prefix5);
          return prefix5;
        };
        p17 = prom<V +>{
          rcode2 = ld rcode;
          rcode3 = force? rcode2;
          checkMissing(rcode3);
          return rcode3;
        };
        r46 = dyn sprintf5("<a href='%s/%s'>R code</a>&nbsp;", p16, p17);
        return r46;
      };
      r48 = dyn ifelse1(p15, p18, "");
      return r48;
    };
    r50 = dyn sprintf2("  <li>%s  -  \n    %s  \n    %s  \n    %s \n  </li>\n", p4, p11, p14, p19);
    check L41() else D17();
  D17():
    deopt 73 [r50];
  L41():
    popenv;
    return r50;
  }
}