fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2595920047;
    st RweaveLatexSetup = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2595920047(file, syntax, output, quiet, debug, stylepath, `...`) {
  (reg file:*, reg syntax:*, reg output:*, reg quiet:*, reg debug:*, reg stylepath:*, reg ddd:dots) -+> V { var file:*, var syntax:*, var output:*, reg output_isMissing:L, reg output_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var debug:*, reg debug_isMissing:L, reg debug_orDefault:*, var stylepath:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg output1:*, reg output2:V, reg c:V, reg c1:L, reg basename:cls, reg sub:cls, reg syntax1:*, reg syntax2:V, reg c2:L, reg syntax4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p:p(V +), reg file1:*, reg file2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg paste0:cls, reg prefix_string:*, reg prefix_string1:V, reg p3:p(V +), reg r12:V, reg basename1:cls, reg sub1:cls, reg output3:*, reg output4:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg quiet1:*, reg quiet2:V, reg r18:V, reg c3:L, reg cat:cls, reg output5:*, reg output6:V, reg p6:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg file3:*, reg file4:V, reg attr:cls, reg r24:V, reg _in_:cls, reg encoding:*, reg encoding1:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg c4:cls, reg r28:V, reg p8:p(V +), reg r30:V, reg c5:L, reg file5:cls, reg output7:*, reg output8:V, reg p9:p(V +), reg encoding2:*, reg encoding3:V, reg p10:p(V +), reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg missing:cls, reg r37:V, reg c6:L, reg Sys_getenv:cls, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg p11:*, reg p12:V, reg length:cls, reg r41:V, reg r42:V, reg c7:L, reg c9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg c12:L, reg r44:V, reg p13:*, reg p14:V, reg c13:L, reg c15:L, reg p16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c17:L, reg dx3:V, reg __:cls, reg r45:V, reg nzchar:cls, reg r46:V, reg c18:L, reg c19:V, reg c21:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg p17:*, reg p18:V, reg identical:cls, reg r49:V, reg r50:V, reg stylepath1:*, reg stylepath2:V, reg c22:L, reg file_path:cls, reg R_home:cls, reg r52:V, reg p19:p(V +), reg r54:V, reg _Platform:*, reg _Platform1:V, reg c23:L, reg _Platform3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r55:V, reg r56:V, reg c24:L, reg chartr:cls, reg styfile:*, reg styfile1:V, reg p20:p(V +), reg r58:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg grep:cls, reg styfile2:*, reg styfile3:V, reg p21:p(V +), reg r63:V, reg length1:cls, reg r64:V, reg c25:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg styfile4:*, reg styfile5:V, reg p22:p(V +), reg r66:V, reg p23:p(V +), reg r68:V, reg p24:p(V +), reg gettext:cls, reg r70:V, reg p25:p(V +), reg r72:V, reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r75:V, reg r76:V, reg prefix_string2:*, reg prefix_string3:V, reg __1:cls, reg r77:V, reg r78:cls, reg r79:V, reg c26:L, reg r81:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r82:V, reg __2:cls, reg r83:V, reg r84:cls, reg r85:V, reg c27:L, reg r87:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r88:V, reg __3:cls, reg r89:V, reg r90:cls, reg r91:V, reg c28:L, reg r93:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r94:V, reg list1:cls, reg r95:V, reg options:*, reg options1:V, reg l:*, reg c29:L, reg options3:V, reg l2:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r96:V, reg dots:*, reg dots1:V, reg l3:*, reg c30:L, reg dots3:V, reg l5:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg dots10:V, reg l8:*, reg dots11:V, reg r98:V, reg dots12:*, reg dots13:V, reg names:cls, reg r99:V, reg ___:cls, reg r100:V, reg RweaveLatexOptions:cls, reg options6:*, reg options7:V, reg p26:p(V +), reg r102:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r103:V, reg r104:V, reg output9:*, reg output10:V, reg styfile6:*, reg styfile7:V, reg debug1:*, reg debug2:V, reg quiet3:*, reg quiet4:V, reg syntax5:*, reg syntax6:V, reg options8:*, reg options9:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r105:V, reg r106:V, reg list2:cls, reg r107:V, reg integer:cls, reg r108:V, reg list3:cls, reg r109:V |
    mkenv;
    st file = file;
    st syntax = syntax;
    output_isMissing = missing.0(output);
    if output_isMissing then L0(NULL) else L0(output);
  L0(output_orDefault):
    st output = output_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L1(FALSE) else L1(quiet);
  L1(quiet_orDefault):
    st quiet = quiet_orDefault;
    debug_isMissing = missing.0(debug);
    if debug_isMissing then L2(FALSE) else L2(debug);
  L2(debug_orDefault):
    st debug = debug_orDefault;
    st stylepath = stylepath;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L3(r1):
    st dots = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L34():
    list = ldf list;
    check L36() else D0();
  L35():
    r = dyn base(<sym ...>);
    goto L3(r);
  D0():
    deopt 2 [];
  L4(r4):
    c1 = `as.logical`(r4);
    if c1 then L41() else L5();
  L36():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L37() else D1();
  L38():
    output1 = ld output;
    check L40() else D2();
  L39():
    r3 = dyn base1(<sym output>);
    goto L4(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 7 [output1];
  L5():
    basename1 = ldf basename;
    check L47() else D7();
  L6():
    quiet1 = ld quiet;
    check L49() else D9();
  L37():
    goto L3(r2);
  L40():
    output2 = force? output1;
    checkMissing(output2);
    c = `==`(output2, NULL);
    goto L4(c);
  L41():
    basename = ldf basename;
    check L42() else D3();
  D3():
    deopt 11 [];
  D7():
    deopt 22 [];
  D9():
    deopt 26 [quiet1];
  L42():
    p2 = prom<V +>{
      sub = ldf sub;
      p = prom<V +>{
        syntax1 = ld syntax;
        syntax2 = force? syntax1;
        checkMissing(syntax2);
        c2 = `is.object`(syntax2);
        if c2 then L1() else L2(syntax2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", syntax2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(syntax4):
        r5 = `$`(syntax4, <sym extension>);
        goto L0(r5);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p1 = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r8 = dyn sub(p, "", p1);
      return r8;
    };
    r10 = dyn basename(p2);
    check L43() else D4();
  L47():
    p5 = prom<V +>{
      sub1 = ldf sub;
      p4 = prom<V +>{
        output3 = ld output;
        output4 = force? output3;
        checkMissing(output4);
        return output4;
      };
      r15 = dyn sub1("\\.tex$", "", p4);
      return r15;
    };
    r17 = dyn basename1(p5);
    check L48() else D8();
  L49():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r18 = `!`(quiet2);
    c3 = `as.logical`(r18);
    if c3 then L50() else L7();
  D4():
    deopt 13 [r10];
  D8():
    deopt 24 [r17];
  L7():
    goto L8();
  L8():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L43():
    st `prefix.string` = r10;
    paste0 = ldf paste0;
    check L44() else D5();
  L48():
    st `prefix.string` = r17;
    goto L6();
  L50():
    cat = ldf cat;
    check L51() else D10();
  D5():
    deopt 16 [];
  D10():
    deopt 30 [];
  L9(r23):
    st encoding = r23;
    _in_ = ldf `%in%`;
    check L58() else D14();
  L44():
    p3 = prom<V +>{
      prefix_string = ld `prefix.string`;
      prefix_string1 = force? prefix_string;
      checkMissing(prefix_string1);
      return prefix_string1;
    };
    r12 = dyn paste0(p3, ".tex");
    check L45() else D6();
  L51():
    p6 = prom<V +>{
      output5 = ld output;
      output6 = force? output5;
      checkMissing(output6);
      return output6;
    };
    r20 = dyn cat[, , , , sep]("Writing to file ", p6, "\n", "Processing code chunks with options ...\n", "");
    check L52() else D11();
  L54():
    file3 = ld file;
    check L56() else D12();
  L55():
    r22 = dyn base2(<sym file>, "encoding");
    goto L9(r22);
  D6():
    deopt 19 [r12];
  D11():
    deopt 37 [r20];
  D12():
    deopt 42 [file3];
  D14():
    deopt 49 [];
  L45():
    st output = r12;
    goto L6();
  L52():
    goto L8();
  L56():
    file4 = force? file3;
    checkMissing(file4);
    attr = ldf attr in base;
    r24 = dyn attr(file4, "encoding");
    check L57() else D13();
  L58():
    p7 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c4 = ldf c in base;
      r28 = dyn c4("ASCII", "bytes");
      goto L0(r28);
    L2():
      r26 = dyn base3("ASCII", "bytes");
      goto L0(r26);
    };
    r30 = dyn _in_(p7, p8);
    check L59() else D15();
  D13():
    deopt 46 [r24];
  D15():
    deopt 52 [r30];
  L57():
    goto L9(r24);
  L59():
    c5 = `as.logical`(r30);
    if c5 then L60() else L10();
  L10():
    goto L11();
  L11():
    file5 = ldf file;
    check L62() else D16();
  L60():
    st encoding = "";
    goto L11();
  D16():
    deopt 59 [];
  L62():
    p9 = prom<V +>{
      output7 = ld output;
      output8 = force? output7;
      checkMissing(output8);
      return output8;
    };
    p10 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    r34 = dyn file5[, open, encoding](p9, "w", p10);
    check L63() else D17();
  D17():
    deopt 65 [r34];
  L63():
    st output = r34;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L12(r36):
    c6 = `as.logical`(r36);
    if c6 then L66() else L13();
  L64():
    missing = ldf missing in base;
    r37 = dyn missing(<sym stylepath>);
    goto L12(r37);
  L65():
    r35 = dyn base4(<sym stylepath>);
    goto L12(r35);
  L13():
    goto L21();
  L21():
    stylepath1 = ld stylepath;
    check L89() else D26();
  L66():
    Sys_getenv = ldf `Sys.getenv`;
    check L67() else D18();
  D18():
    deopt 71 [];
  D26():
    deopt 112 [stylepath1];
  L67():
    r38 = dyn Sys_getenv("SWEAVE_STYLEPATH_DEFAULT");
    check L68() else D19();
  L89():
    stylepath2 = force? stylepath1;
    checkMissing(stylepath2);
    c22 = `as.logical`(stylepath2);
    if c22 then L90() else L22();
  D19():
    deopt 73 [r38];
  L22():
    st styfile = "Sweave";
    goto L28();
  L28():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L112() else L113();
  L68():
    st p = r38;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L90():
    file_path = ldf `file.path`;
    check L91() else D27();
  D27():
    deopt 115 [];
  L14(r40):
    r42 = `>=`(r40, 1);
    c7 = `as.logical`(r42);
    if c7 then L73() else L15(c7);
  L29(r76):
    st options = r76;
    options = ld options;
    check L137() else D48();
  L69():
    p11 = ld p;
    check L71() else D20();
  L70():
    r39 = dyn base5(<sym p>);
    goto L14(r39);
  L91():
    p19 = prom<V +>{
      R_home = ldf `R.home`;
      r52 = dyn R_home("share");
      return r52;
    };
    r54 = dyn file_path(p19, "texmf", "tex", "latex", "Sweave");
    check L92() else D28();
  L112():
    prefix_string2 = ld `prefix.string`;
    check L114() else D37();
  L113():
    r75 = dyn base9[prefix, `prefix.string`, engine, print, eval, fig, pdf, eps, png, jpeg, grdevice, width, height, resolution, term, echo, `keep.source`, results, split, `strip.white`, include, `pdf.version`, `pdf.encoding`, `pdf.compress`, expand, concordance, `figs.only`](TRUE, <sym prefix.string>, "R", FALSE, TRUE, FALSE, TRUE, FALSE, FALSE, FALSE, "", 6.0, 6.0, 300.0, TRUE, TRUE, TRUE, "verbatim", FALSE, "true", TRUE, <lang `$`(`::`(grDevices, pdf.options)(), version)>, <lang `$`(`::`(grDevices, pdf.options)(), encoding)>, <lang `$`(`::`(grDevices, pdf.options)(), compress)>, TRUE, FALSE, TRUE);
    goto L29(r75);
  D20():
    deopt 77 [p11];
  D28():
    deopt 121 [r54];
  D37():
    deopt 162 [prefix_string2];
  D48():
    deopt 239 [options];
  L15(c9):
    c21 = `as.logical`(c9);
    if c21 then L82() else L18();
  L71():
    p12 = force? p11;
    checkMissing(p12);
    length = ldf length in base;
    r41 = dyn length(p12);
    check L72() else D21();
  L73():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L92():
    st styfile = r54;
    _Platform = ld `.Platform`;
    check L93() else D29();
  L114():
    prefix_string3 = force? prefix_string2;
    checkMissing(prefix_string3);
    __1 = ldf `::`;
    check L115() else D38();
  L137():
    options1 = force? options;
    checkMissing(options1);
    l = ld options;
    c29 = `is.object`(l);
    if c29 then L139() else L140(options1, l);
  D21():
    deopt 80 [r41];
  D29():
    deopt 123 [_Platform];
  D38():
    deopt 204 [];
  L16(c12, r44):
    c18 = `as.logical`(r44);
    c19 = `&&`(c12, c18);
    goto L15(c19);
  L18():
    goto L20(FALSE);
  L20(r50):
    st stylepath = r50;
    goto L21();
  L72():
    goto L14(r41);
  L74():
    p13 = ld p;
    check L76() else D22();
  L75():
    r43 = dyn base6(<lang `[`(p, 1)>);
    goto L16(c7, r43);
  L82():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L93():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c23 = `is.object`(_Platform1);
    if c23 then L95() else L96(_Platform1);
  L115():
    r77 = dyn __1("grDevices", "pdf.options");
    check L116() else D39();
  L138(dx13):
    st options = dx13;
    dots = ld dots;
    check L142() else D49();
  L139():
    dr12 = tryDispatchBuiltin.0("$<-", l, options1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L141() else L140(options1, dr12);
  L140(options3, l2):
    r96 = `$<-`(l2, <sym .defaults>, options1);
    goto L138(r96);
  D22():
    deopt 85 [c7, p13];
  D39():
    deopt 207 [r77];
  D49():
    deopt 244 [dots];
  L19(r48):
    goto L20(r48);
  L76():
    p14 = force? p13;
    checkMissing(p14);
    c13 = `is.object`(p14);
    if c13 then L77() else L78(c7, p14);
  L83():
    p17 = ld p;
    check L85() else D24();
  L84():
    r47 = dyn base7(<sym p>, "TRUE");
    goto L19(r47);
  L94(dx5):
    r56 = `==`(dx5, "windows");
    c24 = `as.logical`(r56);
    if c24 then L98() else L23();
  L95():
    dr4 = tryDispatchBuiltin.1("$", _Platform1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L97() else L96(dr4);
  L96(_Platform3):
    r55 = `$`(_Platform3, <sym OS.type>);
    goto L94(r55);
  L116():
    checkFun.0(r77);
    r78 = r77 as cls;
    r79 = dyn r78();
    check L117() else D40();
  L141():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L138(dx12);
  L142():
    dots1 = force? dots;
    checkMissing(dots1);
    l3 = ld options;
    c30 = `is.object`(l3);
    if c30 then L143() else L144(dots1, l3);
  D24():
    deopt 95 [p17];
  D40():
    deopt 209 [r79];
  L17(c17, dx3):
    nzchar = ldf nzchar in base;
    r46 = dyn nzchar(dx3);
    check L80() else D23();
  L23():
    goto L24();
  L24():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L30(dx15):
    st options = dx15;
    RweaveLatexOptions = ldf RweaveLatexOptions;
    check L150() else D52();
  L77():
    dr2 = tryDispatchBuiltin.1("[", p14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(c7, dr2);
  L78(c15, p16):
    __ = ldf `[` in base;
    r45 = dyn __(p16, 1);
    goto L17(c15, r45);
  L85():
    p18 = force? p17;
    checkMissing(p18);
    identical = ldf identical in base;
    r49 = dyn identical(p18, "TRUE", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L86() else D25();
  L97():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L94(dx4);
  L98():
    chartr = ldf chartr;
    check L99() else D30();
  L117():
    c26 = `is.object`(r79);
    if c26 then L119() else L120(r79);
  L143():
    dr14 = tryDispatchBuiltin.0("[<-", l3, dots1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L145() else L144(dots1, dr14);
  L144(dots3, l5):
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L146() else L147();
  D23():
    deopt 91 [c17, r46];
  D25():
    deopt 106 [r49];
  D30():
    deopt 129 [];
  D52():
    deopt 256 [];
  L25(r61):
    c25 = `as.logical`(r61);
    if c25 then L107() else L26();
  L31(dots10, l8, dots11, r98):
    ___ = ldf `[<-` in base;
    r100 = dyn ___(l8, dots11, r98);
    goto L30(r100);
  L79():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(c7, dx2);
  L80():
    goto L16(c17, r46);
  L86():
    goto L19(r49);
  L99():
    p20 = prom<V +>{
      styfile = ld styfile;
      styfile1 = force? styfile;
      checkMissing(styfile1);
      return styfile1;
    };
    r58 = dyn chartr("\\", "/", p20);
    check L100() else D31();
  L102():
    grep = ldf grep;
    check L104() else D32();
  L103():
    r60 = dyn base8(<lang grep(" ", styfile)>);
    goto L25(r60);
  L118(dx7):
    __2 = ldf `::`;
    check L122() else D41();
  L119():
    dr6 = tryDispatchBuiltin.1("$", r79);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L121() else L120(dr6);
  L120(r81):
    r82 = `$`(r81, <sym version>);
    goto L118(r82);
  L145():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L30(dx14);
  L146():
    dots12 = ld dots;
    check L148() else D50();
  L147():
    r97 = dyn base10(<sym dots>);
    goto L31(dots3, l5, dots1, r97);
  L150():
    p26 = prom<V +>{
      options6 = ld options;
      options7 = force? options6;
      checkMissing(options7);
      return options7;
    };
    r102 = dyn RweaveLatexOptions(p26);
    check L151() else D53();
  D31():
    deopt 133 [r58];
  D32():
    deopt 140 [];
  D41():
    deopt 213 [];
  D50():
    deopt 249 [dots3, l5, dots1, dots12];
  D53():
    deopt 258 [r102];
  L26():
    goto L27(NULL);
  L27(r73):
    goto L28();
  L100():
    st styfile = r58;
    goto L24();
  L104():
    p21 = prom<V +>{
      styfile2 = ld styfile;
      styfile3 = force? styfile2;
      checkMissing(styfile3);
      return styfile3;
    };
    r63 = dyn grep(" ", p21);
    check L105() else D33();
  L107():
    warning = ldf warning;
    check L108() else D35();
  L121():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L118(dx6);
  L122():
    r83 = dyn __2("grDevices", "pdf.options");
    check L123() else D42();
  L148():
    dots13 = force? dots12;
    checkMissing(dots13);
    names = ldf names in base;
    r99 = dyn names(dots13);
    check L149() else D51();
  L151():
    st options = r102;
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L152() else L153();
  D33():
    deopt 143 [r63];
  D35():
    deopt 147 [];
  D42():
    deopt 216 [r83];
  D51():
    deopt 252 [dots3, l5, dots1, r99];
  L32(r104):
    popenv;
    return r104;
  L105():
    length1 = ldf length in base;
    r64 = dyn length1(r63);
    check L106() else D34();
  L108():
    p24 = prom<V +>{
      gettextf = ldf gettextf;
      p23 = prom<V +>{
        sQuote = ldf sQuote;
        p22 = prom<V +>{
          styfile4 = ld styfile;
          styfile5 = force? styfile4;
          checkMissing(styfile5);
          return styfile5;
        };
        r66 = dyn sQuote(p22);
        return r66;
      };
      r68 = dyn gettextf("path to %s contains spaces,\n", p23);
      return r68;
    };
    p25 = prom<V +>{
      gettext = ldf gettext;
      r70 = dyn gettext("this may cause problems when running LaTeX");
      return r70;
    };
    r72 = dyn warning[, , domain](p24, p25, NA_LGL);
    check L109() else D36();
  L123():
    checkFun.0(r83);
    r84 = r83 as cls;
    r85 = dyn r84();
    check L124() else D43();
  L149():
    goto L31(dots3, l5, dots1, r99);
  L152():
    output9 = ld output;
    check L154() else D54();
  L153():
    r103 = dyn base11[output, styfile, havesty, haveconcordance, debug, quiet, syntax, options, chunkout, srclines](<sym output>, <sym styfile>, FALSE, FALSE, <sym debug>, <sym quiet>, <sym syntax>, <sym options>, <lang list()>, <lang integer()>);
    goto L32(r103);
  D34():
    deopt 145 [r64];
  D36():
    deopt 152 [r72];
  D43():
    deopt 218 [r85];
  D54():
    deopt 262 [output9];
  L106():
    goto L25(r64);
  L109():
    goto L27(r72);
  L124():
    c27 = `is.object`(r85);
    if c27 then L126() else L127(r85);
  L154():
    output10 = force? output9;
    checkMissing(output10);
    styfile6 = ld styfile;
    check L155() else D55();
  D55():
    deopt 265 [styfile6];
  L125(dx9):
    __3 = ldf `::`;
    check L129() else D44();
  L126():
    dr8 = tryDispatchBuiltin.1("$", r85);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L128() else L127(dr8);
  L127(r87):
    r88 = `$`(r87, <sym encoding>);
    goto L125(r88);
  L155():
    styfile7 = force? styfile6;
    checkMissing(styfile7);
    debug1 = ld debug;
    check L156() else D56();
  D44():
    deopt 222 [];
  D56():
    deopt 272 [debug1];
  L128():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L125(dx8);
  L129():
    r89 = dyn __3("grDevices", "pdf.options");
    check L130() else D45();
  L156():
    debug2 = force? debug1;
    checkMissing(debug2);
    quiet3 = ld quiet;
    check L157() else D57();
  D45():
    deopt 225 [r89];
  D57():
    deopt 275 [quiet3];
  L130():
    checkFun.0(r89);
    r90 = r89 as cls;
    r91 = dyn r90();
    check L131() else D46();
  L157():
    quiet4 = force? quiet3;
    checkMissing(quiet4);
    syntax5 = ld syntax;
    check L158() else D58();
  D46():
    deopt 227 [r91];
  D58():
    deopt 278 [syntax5];
  L131():
    c28 = `is.object`(r91);
    if c28 then L133() else L134(r91);
  L158():
    syntax6 = force? syntax5;
    checkMissing(syntax6);
    options8 = ld options;
    check L159() else D59();
  D59():
    deopt 281 [options8];
  L132(dx11):
    list1 = ldf list in base;
    r95 = dyn list1(TRUE, prefix_string3, "R", FALSE, TRUE, FALSE, TRUE, FALSE, FALSE, FALSE, "", 6.0, 6.0, 300.0, TRUE, TRUE, TRUE, "verbatim", FALSE, "true", TRUE, dx7, dx9, dx11, TRUE, FALSE, TRUE);
    check L136() else D47();
  L133():
    dr10 = tryDispatchBuiltin.1("$", r91);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L135() else L134(dr10);
  L134(r93):
    r94 = `$`(r93, <sym compress>);
    goto L132(r94);
  L159():
    options9 = force? options8;
    checkMissing(options9);
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L160() else L161();
  D47():
    deopt 237 [r95];
  L33(r106):
    integer = ldf integer;
    check L163() else D61();
  L135():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L132(dx10);
  L136():
    goto L29(r95);
  L160():
    list2 = ldf list in base;
    r107 = dyn list2();
    check L162() else D60();
  L161():
    r105 = dyn base12();
    goto L33(r105);
  D60():
    deopt 287 [r107];
  D61():
    deopt 290 [];
  L162():
    goto L33(r107);
  L163():
    r108 = dyn integer();
    check L164() else D62();
  D62():
    deopt 291 [r108];
  L164():
    list3 = ldf list in base;
    r109 = dyn list3(output10, styfile7, FALSE, FALSE, debug2, quiet4, syntax6, options9, r106, r108);
    check L165() else D63();
  D63():
    deopt 294 [r109];
  L165():
    goto L32(r109);
  }
}