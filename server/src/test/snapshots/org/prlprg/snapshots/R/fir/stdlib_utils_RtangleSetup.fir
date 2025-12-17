fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3523793899;
    st RtangleSetup = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3523793899(file, syntax, output, annotate, split, quiet, `drop.evalFALSE`, `...`) {
  (reg file:*, reg syntax:*, reg output:*, reg annotate:*, reg split:*, reg quiet:*, reg drop_evalFALSE:*, reg ddd:dots) -+> V { var file:*, var syntax:*, var output:*, reg output_isMissing:L, reg output_orDefault:*, var annotate:*, reg annotate_isMissing:L, reg annotate_orDefault:*, var split:*, reg split_isMissing:L, reg split_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var `drop.evalFALSE`:*, reg drop_evalFALSE_isMissing:L, reg drop_evalFALSE_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg output1:*, reg output2:V, reg c:V, reg c1:L, reg basename:cls, reg sub:cls, reg syntax1:*, reg syntax2:V, reg c2:L, reg syntax4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p:p(V +), reg file1:*, reg file2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg paste0:cls, reg prefix_string:*, reg prefix_string1:V, reg p3:p(V +), reg r12:V, reg basename1:cls, reg sub1:cls, reg output3:*, reg output4:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg split1:*, reg split2:V, reg r18:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg output5:*, reg output6:V, reg identical:cls, reg r21:V, reg c4:L, reg stdout:cls, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg output7:*, reg output8:V, reg identical1:cls, reg r26:V, reg c5:L, reg stderr:cls, reg r27:V, reg quiet1:*, reg quiet2:V, reg r28:V, reg c6:L, reg cat:cls, reg output9:*, reg output10:V, reg p6:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg file3:*, reg file4:V, reg attr:cls, reg r34:V, reg _in_:cls, reg encoding:*, reg encoding1:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg c7:cls, reg r38:V, reg p8:p(V +), reg r40:V, reg c8:L, reg file5:cls, reg output11:*, reg output12:V, reg p9:p(V +), reg encoding2:*, reg encoding3:V, reg p10:p(V +), reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg paste1:cls, reg sprintf:cls, reg file6:*, reg file7:V, reg p11:p(V +), reg r48:V, reg p12:p(V +), reg r50:V, reg c9:cls, reg r51:V, reg writeLines:cls, reg lines:*, reg lines1:V, reg p13:p(V +), reg output13:*, reg output14:V, reg p14:p(V +), reg r54:V, reg quiet3:*, reg quiet4:V, reg r56:V, reg c10:L, reg cat1:cls, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg split3:*, reg split4:V, reg prefix_string2:*, reg prefix_string3:V, reg list1:cls, reg r61:V, reg options:*, reg options1:V, reg l:*, reg c11:L, reg options3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r62:V, reg dots:*, reg dots1:V, reg l3:*, reg c12:L, reg dots3:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg dots10:V, reg l8:*, reg dots11:V, reg r64:V, reg dots12:*, reg dots13:V, reg names:cls, reg r65:V, reg ___:cls, reg r66:V, reg RweaveLatexOptions:cls, reg options6:*, reg options7:V, reg p15:p(V +), reg r68:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg output15:*, reg output16:V, reg annotate1:*, reg annotate2:V, reg options8:*, reg options9:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg list2:cls, reg r73:V, reg quiet5:*, reg quiet6:V, reg syntax5:*, reg syntax6:V, reg drop_evalFALSE1:*, reg drop_evalFALSE2:V, reg list3:cls, reg r74:V |
    mkenv;
    st file = file;
    st syntax = syntax;
    output_isMissing = missing.0(output);
    if output_isMissing then L0(NULL) else L0(output);
  L0(output_orDefault):
    st output = output_orDefault;
    annotate_isMissing = missing.0(annotate);
    if annotate_isMissing then L1(TRUE) else L1(annotate);
  L1(annotate_orDefault):
    st annotate = annotate_orDefault;
    split_isMissing = missing.0(split);
    if split_isMissing then L2(FALSE) else L2(split);
  L2(split_orDefault):
    st split = split_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L3(FALSE) else L3(quiet);
  L3(quiet_orDefault):
    st quiet = quiet_orDefault;
    drop_evalFALSE_isMissing = missing.0(drop_evalFALSE);
    if drop_evalFALSE_isMissing then L4(FALSE) else L4(drop_evalFALSE);
  L4(drop_evalFALSE_orDefault):
    st `drop.evalFALSE` = drop_evalFALSE_orDefault;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L5(r1):
    st dots = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L29():
    list = ldf list;
    check L31() else D0();
  L30():
    r = dyn base(<sym ...>);
    goto L5(r);
  D0():
    deopt 2 [];
  L6(r4):
    c1 = `as.logical`(r4);
    if c1 then L36() else L7();
  L31():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L32() else D1();
  L33():
    output1 = ld output;
    check L35() else D2();
  L34():
    r3 = dyn base1(<sym output>);
    goto L6(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 7 [output1];
  L7():
    basename1 = ldf basename;
    check L42() else D7();
  L8():
    split1 = ld split;
    check L44() else D9();
  L32():
    goto L5(r2);
  L35():
    output2 = force? output1;
    checkMissing(output2);
    c = `==`(output2, NULL);
    goto L6(c);
  L36():
    basename = ldf basename;
    check L37() else D3();
  D3():
    deopt 11 [];
  D7():
    deopt 22 [];
  D9():
    deopt 26 [split1];
  L37():
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
    check L38() else D4();
  L42():
    p5 = prom<V +>{
      sub1 = ldf sub;
      p4 = prom<V +>{
        output3 = ld output;
        output4 = force? output3;
        checkMissing(output4);
        return output4;
      };
      r15 = dyn sub1("\\.[rsRS]$", "", p4);
      return r15;
    };
    r17 = dyn basename1(p5);
    check L43() else D8();
  L44():
    split2 = force? split1;
    checkMissing(split2);
    r18 = `!`(split2);
    c3 = `as.logical`(r18);
    if c3 then L45() else L9();
  D4():
    deopt 13 [r10];
  D8():
    deopt 24 [r17];
  L9():
    quiet3 = ld quiet;
    check L85() else D32();
  L21():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L38():
    st `prefix.string` = r10;
    paste0 = ldf paste0;
    check L39() else D5();
  L43():
    st `prefix.string` = r17;
    goto L8();
  L45():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  D5():
    deopt 16 [];
  D32():
    deopt 119 [quiet3];
  L10(r20):
    c4 = `as.logical`(r20);
    if c4 then L50() else L11();
  L24(r60):
    st options = r60;
    options = ld options;
    check L95() else D38();
  L39():
    p3 = prom<V +>{
      prefix_string = ld `prefix.string`;
      prefix_string1 = force? prefix_string;
      checkMissing(prefix_string1);
      return prefix_string1;
    };
    r12 = dyn paste0(p3, ".R");
    check L40() else D6();
  L46():
    output5 = ld output;
    check L48() else D10();
  L47():
    r19 = dyn base2(<sym output>, "stdout");
    goto L10(r19);
  L85():
    quiet4 = force? quiet3;
    checkMissing(quiet4);
    r56 = `!`(quiet4);
    c10 = `as.logical`(r56);
    if c10 then L86() else L22();
  L90():
    split3 = ld split;
    check L92() else D35();
  L91():
    r59 = dyn base7[split, prefix, `prefix.string`, engine, eval, `show.line.nos`](<sym split>, TRUE, <sym prefix.string>, "R", TRUE, FALSE);
    goto L24(r59);
  D6():
    deopt 19 [r12];
  D10():
    deopt 31 [output5];
  D35():
    deopt 133 [split3];
  D38():
    deopt 150 [options];
  L11():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L12():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L22():
    goto L23();
  L23():
    st output = NULL;
    goto L21();
  L40():
    st output = r12;
    goto L8();
  L48():
    output6 = force? output5;
    checkMissing(output6);
    identical = ldf identical in base;
    r21 = dyn identical(output6, "stdout", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L49() else D11();
  L50():
    stdout = ldf stdout;
    check L51() else D12();
  L86():
    cat1 = ldf cat;
    check L87() else D33();
  L92():
    split4 = force? split3;
    checkMissing(split4);
    prefix_string2 = ld `prefix.string`;
    check L93() else D36();
  L95():
    options1 = force? options;
    checkMissing(options1);
    l = ld options;
    c11 = `is.object`(l);
    if c11 then L97() else L98(options1, l);
  D11():
    deopt 42 [r21];
  D12():
    deopt 44 [];
  D33():
    deopt 123 [];
  D36():
    deopt 138 [prefix_string2];
  L13(r25):
    c5 = `as.logical`(r25);
    if c5 then L58() else L14();
  L20(r46):
    st lines = r46;
    writeLines = ldf writeLines;
    check L82() else D30();
  L49():
    goto L10(r21);
  L51():
    r22 = dyn stdout();
    check L52() else D13();
  L54():
    output7 = ld output;
    check L56() else D14();
  L55():
    r24 = dyn base3(<sym output>, "stderr");
    goto L13(r24);
  L77():
    paste1 = ldf paste;
    check L79() else D27();
  L78():
    r45 = dyn base6(<lang paste("###", sprintf("R code from vignette source '%s'", file))>, "");
    goto L20(r45);
  L87():
    r57 = dyn cat1("Writing chunks to files ...\n");
    check L88() else D34();
  L93():
    prefix_string3 = force? prefix_string2;
    checkMissing(prefix_string3);
    list1 = ldf list in base;
    r61 = dyn list1(split4, TRUE, prefix_string3, "R", TRUE, FALSE);
    check L94() else D37();
  L96(dx3):
    st options = dx3;
    dots = ld dots;
    check L100() else D39();
  L97():
    dr2 = tryDispatchBuiltin.0("$<-", l, options1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L99() else L98(options1, dr2);
  L98(options3, l2):
    r62 = `$<-`(l2, <sym .defaults>, options1);
    goto L96(r62);
  D13():
    deopt 45 [r22];
  D14():
    deopt 49 [output7];
  D27():
    deopt 106 [];
  D30():
    deopt 115 [];
  D34():
    deopt 125 [r57];
  D37():
    deopt 148 [r61];
  D39():
    deopt 155 [dots];
  L14():
    quiet1 = ld quiet;
    check L62() else D18();
  L52():
    st output = r22;
    goto L12();
  L56():
    output8 = force? output7;
    checkMissing(output8);
    identical1 = ldf identical in base;
    r26 = dyn identical1(output8, "stderr", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L57() else D15();
  L58():
    stderr = ldf stderr;
    check L59() else D16();
  L79():
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p11 = prom<V +>{
        file6 = ld file;
        file7 = force? file6;
        checkMissing(file7);
        return file7;
      };
      r48 = dyn sprintf("R code from vignette source '%s'", p11);
      return r48;
    };
    r50 = dyn paste1("###", p12);
    check L80() else D28();
  L82():
    p13 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    p14 = prom<V +>{
      output13 = ld output;
      output14 = force? output13;
      checkMissing(output14);
      return output14;
    };
    r54 = dyn writeLines(p13, p14);
    check L83() else D31();
  L88():
    goto L23();
  L94():
    goto L24(r61);
  L99():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L96(dx2);
  L100():
    dots1 = force? dots;
    checkMissing(dots1);
    l3 = ld options;
    c12 = `is.object`(l3);
    if c12 then L101() else L102(dots1, l3);
  D15():
    deopt 60 [r26];
  D16():
    deopt 62 [];
  D18():
    deopt 65 [quiet1];
  D28():
    deopt 109 [r50];
  D31():
    deopt 118 [r54];
  L25(dx5):
    st options = dx5;
    RweaveLatexOptions = ldf RweaveLatexOptions;
    check L108() else D42();
  L57():
    goto L13(r26);
  L59():
    r27 = dyn stderr();
    check L60() else D17();
  L62():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r28 = `!`(quiet2);
    c6 = `as.logical`(r28);
    if c6 then L63() else L15();
  L80():
    c9 = ldf c in base;
    r51 = dyn c9(r50, "");
    check L81() else D29();
  L83():
    goto L21();
  L101():
    dr4 = tryDispatchBuiltin.0("[<-", l3, dots1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L103() else L102(dots1, dr4);
  L102(dots3, l5):
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  D17():
    deopt 63 [r27];
  D29():
    deopt 112 [r51];
  D42():
    deopt 167 [];
  L15():
    goto L16();
  L16():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L26(dots10, l8, dots11, r64):
    ___ = ldf `[<-` in base;
    r66 = dyn ___(l8, dots11, r64);
    goto L25(r66);
  L60():
    st output = r27;
    goto L12();
  L63():
    cat = ldf cat;
    check L64() else D19();
  L81():
    goto L20(r51);
  L103():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(dx4);
  L104():
    dots12 = ld dots;
    check L106() else D40();
  L105():
    r63 = dyn base8(<sym dots>);
    goto L26(dots3, l5, dots1, r63);
  L108():
    p15 = prom<V +>{
      options6 = ld options;
      options7 = force? options6;
      checkMissing(options7);
      return options7;
    };
    r68 = dyn RweaveLatexOptions(p15);
    check L109() else D43();
  D19():
    deopt 69 [];
  D40():
    deopt 160 [dots3, l5, dots1, dots12];
  D43():
    deopt 169 [r68];
  L17(r33):
    st encoding = r33;
    _in_ = ldf `%in%`;
    check L71() else D23();
  L64():
    p6 = prom<V +>{
      output9 = ld output;
      output10 = force? output9;
      checkMissing(output10);
      return output10;
    };
    r30 = dyn cat("Writing to file", p6, "\n");
    check L65() else D20();
  L67():
    file3 = ld file;
    check L69() else D21();
  L68():
    r32 = dyn base4(<sym file>, "encoding");
    goto L17(r32);
  L106():
    dots13 = force? dots12;
    checkMissing(dots13);
    names = ldf names in base;
    r65 = dyn names(dots13);
    check L107() else D41();
  L109():
    st options = r68;
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  D20():
    deopt 73 [r30];
  D21():
    deopt 78 [file3];
  D23():
    deopt 85 [];
  D41():
    deopt 163 [dots3, l5, dots1, r65];
  L27(r70):
    popenv;
    return r70;
  L65():
    goto L16();
  L69():
    file4 = force? file3;
    checkMissing(file4);
    attr = ldf attr in base;
    r34 = dyn attr(file4, "encoding");
    check L70() else D22();
  L71():
    p7 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    p8 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c7 = ldf c in base;
      r38 = dyn c7("ASCII", "bytes");
      goto L0(r38);
    L2():
      r36 = dyn base5("ASCII", "bytes");
      goto L0(r36);
    };
    r40 = dyn _in_(p7, p8);
    check L72() else D24();
  L107():
    goto L26(dots3, l5, dots1, r65);
  L110():
    output15 = ld output;
    check L112() else D44();
  L111():
    r69 = dyn base9[output, annotate, options, chunkout, quiet, syntax, `drop.evalFALSE`](<sym output>, <sym annotate>, <sym options>, <lang list()>, <sym quiet>, <sym syntax>, <sym drop.evalFALSE>);
    goto L27(r69);
  D22():
    deopt 82 [r34];
  D24():
    deopt 88 [r40];
  D44():
    deopt 173 [output15];
  L70():
    goto L17(r34);
  L72():
    c8 = `as.logical`(r40);
    if c8 then L73() else L18();
  L112():
    output16 = force? output15;
    checkMissing(output16);
    annotate1 = ld annotate;
    check L113() else D45();
  D45():
    deopt 176 [annotate1];
  L18():
    goto L19();
  L19():
    file5 = ldf file;
    check L75() else D25();
  L73():
    st encoding = "";
    goto L19();
  L113():
    annotate2 = force? annotate1;
    checkMissing(annotate2);
    options8 = ld options;
    check L114() else D46();
  D25():
    deopt 95 [];
  D46():
    deopt 179 [options8];
  L75():
    p9 = prom<V +>{
      output11 = ld output;
      output12 = force? output11;
      checkMissing(output12);
      return output12;
    };
    p10 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    r44 = dyn file5[, open, encoding](p9, "w", p10);
    check L76() else D26();
  L114():
    options9 = force? options8;
    checkMissing(options9);
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  D26():
    deopt 101 [r44];
  L28(r72):
    quiet5 = ld quiet;
    check L118() else D48();
  L76():
    st output = r44;
    goto L12();
  L115():
    list2 = ldf list in base;
    r73 = dyn list2();
    check L117() else D47();
  L116():
    r71 = dyn base10();
    goto L28(r71);
  D47():
    deopt 185 [r73];
  D48():
    deopt 187 [quiet5];
  L117():
    goto L28(r73);
  L118():
    quiet6 = force? quiet5;
    checkMissing(quiet6);
    syntax5 = ld syntax;
    check L119() else D49();
  D49():
    deopt 190 [syntax5];
  L119():
    syntax6 = force? syntax5;
    checkMissing(syntax6);
    drop_evalFALSE1 = ld `drop.evalFALSE`;
    check L120() else D50();
  D50():
    deopt 193 [drop_evalFALSE1];
  L120():
    drop_evalFALSE2 = force? drop_evalFALSE1;
    checkMissing(drop_evalFALSE2);
    list3 = ldf list in base;
    r74 = dyn list3(output16, annotate2, options9, r72, quiet6, syntax6, drop_evalFALSE2);
    check L121() else D51();
  D51():
    deopt 197 [r74];
  L121():
    goto L27(r74);
  }
}