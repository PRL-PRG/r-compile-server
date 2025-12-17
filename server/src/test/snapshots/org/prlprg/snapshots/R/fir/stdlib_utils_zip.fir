fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2077421050;
    st zip = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2077421050(zipfile, files, flags, extras, zip) {
  (reg zipfile:*, reg files:*, reg flags:*, reg extras:*, reg zip:*) -+> V { var zipfile:*, var files:*, var flags:*, reg flags_isMissing:L, reg flags_orDefault:*, var extras:*, reg extras_isMissing:L, reg extras_orDefault:*, var zip:*, reg zip_isMissing:L, reg zip_orDefault:*, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg files1:*, reg files2:V, reg c6:L, reg r7:V, reg c7:L, reg c8:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c16:L, reg c17:L, reg r9:V, reg files3:*, reg files4:V, reg length:cls, reg r10:V, reg r11:V, reg c18:L, reg c19:V, reg c22:L, reg c23:V, reg c25:L, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg zip1:*, reg zip2:V, reg c26:L, reg r16:V, reg c27:L, reg c28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg c32:L, reg r18:V, reg zip3:*, reg zip4:V, reg length1:cls, reg r19:V, reg r20:V, reg c33:L, reg c34:V, reg c36:L, reg c37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg c41:L, reg r22:V, reg zip5:*, reg zip6:V, reg nzchar:cls, reg r23:V, reg r24:V, reg c42:L, reg c43:V, reg c45:L, reg stop1:cls, reg gettextf:cls, reg r25:V, reg p1:p(V +), reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg flags1:*, reg flags2:V, reg shQuote:cls, reg path_expand:cls, reg zipfile1:*, reg zipfile2:V, reg p2:p(V +), reg r32:V, reg p3:p(V +), reg r34:V, reg shQuote1:cls, reg files5:*, reg files6:V, reg p4:p(V +), reg r36:V, reg extras1:*, reg extras2:V, reg c46:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg args:*, reg args1:V, reg Sys_getenv1:cls, reg r44:V, reg c47:cls, reg r45:V, reg nchar:cls, reg r46:V, reg sum:cls, reg r47:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg r52:V, reg args2:*, reg args3:V, reg length2:cls, reg r53:V, reg r54:V, reg r55:V, reg c48:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg flags3:*, reg flags4:V, reg shQuote2:cls, reg path_expand1:cls, reg zipfile3:*, reg zipfile4:V, reg p5:p(V +), reg r59:V, reg p6:p(V +), reg r61:V, reg extras3:*, reg extras4:V, reg c49:cls, reg r62:V, reg files7:*, reg files8:V, reg _Platform:*, reg _Platform1:V, reg c50:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r63:V, reg r64:V, reg c51:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg r66:V, reg system2:cls, reg zip7:*, reg zip8:V, reg p7:p(V +), reg args4:*, reg args5:V, reg p8:p(V +), reg input:*, reg input1:V, reg p9:p(V +), reg r70:V, reg invisible:cls, reg r71:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg r73:V, reg system3:cls, reg zip9:*, reg zip10:V, reg p10:p(V +), reg args6:*, reg args7:V, reg p11:p(V +), reg input2:*, reg input3:V, reg p12:p(V +), reg r77:V, reg invisible1:cls, reg r78:V |
    mkenv;
    st zipfile = zipfile;
    st files = files;
    flags_isMissing = missing.0(flags);
    if flags_isMissing then L0("-r9X") else L0(flags);
  L0(flags_orDefault):
    st flags = flags_orDefault;
    extras_isMissing = missing.0(extras);
    if extras_isMissing then L1("") else L1(extras);
  L1(extras_orDefault):
    st extras = extras_orDefault;
    zip_isMissing = missing.0(zip);
    if zip_isMissing then L2() else L3(zip);
  L2():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("R_ZIPCMD", "zip");
      return r;
    };
    goto L3(p);
  L3(zip_orDefault):
    st zip = zip_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L4(r3):
    c = `as.logical`(r3);
    if c then L31() else L5(c);
  L29():
    missing = ldf missing in base;
    r4 = dyn missing(<sym flags>);
    goto L4(r4);
  L30():
    r2 = dyn base(<sym flags>);
    goto L4(r2);
  L5(c2):
    c25 = `as.logical`(c2);
    if c25 then L42() else L9();
  L31():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L6(c5, r6):
    r7 = `!`(r6);
    c7 = `as.logical`(r7);
    if c7 then L7(c5, c7) else L35();
  L9():
    goto L10();
  L10():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L32():
    files1 = ld files;
    check L34() else D0();
  L33():
    r5 = dyn base1(<sym files>);
    goto L6(c, r5);
  L42():
    stop = ldf stop;
    check L43() else D3();
  D0():
    deopt 4 [c, files1];
  D3():
    deopt 18 [];
  L7(c8, c9):
    c22 = `as.logical`(c9);
    c23 = `&&`(c8, c22);
    goto L5(c23);
  L11(r15):
    r16 = `!`(r15);
    c27 = `as.logical`(r16);
    if c27 then L12(c27) else L49();
  L34():
    files2 = force? files1;
    checkMissing(files2);
    c6 = `is.character`(files2);
    goto L6(c, c6);
  L35():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L43():
    r12 = dyn stop("'files' must be a character vector specifying one or more filepaths");
    check L44() else D4();
  L46():
    zip1 = ld zip;
    check L48() else D5();
  L47():
    r14 = dyn base3(<sym zip>);
    goto L11(r14);
  D4():
    deopt 20 [r12];
  D5():
    deopt 24 [zip1];
  L8(c16, c17, r9):
    r11 = `!`(r9);
    c18 = `as.logical`(r11);
    c19 = `||`(c17, c18);
    goto L7(c16, c19);
  L12(c28):
    c36 = `as.logical`(c28);
    if c36 then L14(c36) else L55();
  L36():
    files3 = ld files;
    check L38() else D1();
  L37():
    r8 = dyn base2(<sym files>);
    goto L8(c5, c7, r8);
  L44():
    goto L10();
  L48():
    zip2 = force? zip1;
    checkMissing(zip2);
    c26 = `is.character`(zip2);
    goto L11(c26);
  L49():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  D1():
    deopt 10 [c5, c7, files3];
  L13(c32, r18):
    r20 = `!=`(r18, 1);
    c33 = `as.logical`(r20);
    c34 = `||`(c32, c33);
    goto L12(c34);
  L14(c37):
    c45 = `as.logical`(c37);
    if c45 then L61() else L16();
  L38():
    files4 = force? files3;
    checkMissing(files4);
    length = ldf length in base;
    r10 = dyn length(files4);
    check L39() else D2();
  L50():
    zip3 = ld zip;
    check L52() else D6();
  L51():
    r17 = dyn base4(<sym zip>);
    goto L13(c27, r17);
  L55():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  D2():
    deopt 13 [c5, c7, r10];
  D6():
    deopt 30 [c27, zip3];
  L15(c41, r22):
    r24 = `!`(r22);
    c42 = `as.logical`(r24);
    c43 = `||`(c41, c42);
    goto L14(c43);
  L16():
    goto L17();
  L17():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L39():
    goto L8(c5, c7, r10);
  L52():
    zip4 = force? zip3;
    checkMissing(zip4);
    length1 = ldf length in base;
    r19 = dyn length1(zip4);
    check L53() else D7();
  L56():
    zip5 = ld zip;
    check L58() else D8();
  L57():
    r21 = dyn base5(<sym zip>);
    goto L15(c36, r21);
  L61():
    stop1 = ldf stop;
    check L62() else D10();
  D7():
    deopt 33 [c27, r19];
  D8():
    deopt 39 [c36, zip5];
  D10():
    deopt 46 [];
  L18(r30):
    st args = r30;
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L53():
    goto L13(c27, r19);
  L58():
    zip6 = force? zip5;
    checkMissing(zip6);
    nzchar = ldf nzchar in base;
    r23 = dyn nzchar(zip6);
    check L59() else D9();
  L62():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      r25 = dyn gettextf("'%s' must be a non-empty character string", "zip");
      return r25;
    };
    r27 = dyn stop1[, domain](p1, NA_LGL);
    check L63() else D11();
  L65():
    flags1 = ld flags;
    check L67() else D12();
  L66():
    r29 = dyn base6(<sym flags>, <lang shQuote(path.expand(zipfile))>, <lang shQuote(files)>, <sym extras>);
    goto L18(r29);
  D9():
    deopt 42 [c36, r23];
  D11():
    deopt 50 [r27];
  D12():
    deopt 55 [flags1];
  L19(r39):
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L86() else L87();
  L59():
    goto L15(c36, r23);
  L63():
    goto L17();
  L67():
    flags2 = force? flags1;
    checkMissing(flags2);
    shQuote = ldf shQuote;
    check L68() else D13();
  L74():
    sym8 = ldf nchar;
    base8 = ldf nchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L75():
    r38 = dyn base7(<lang nchar(c(args, Sys.getenv()))>);
    goto L19(r38);
  D13():
    deopt 58 [];
  L20(r41):
    sum = ldf sum in base;
    r47 = dyn sum(r41);
    check L85() else D24();
  L22(r51, r52):
    r54 = `+`(r51, r52);
    r55 = `>`(r54, 8000.0);
    c48 = `as.logical`(r55);
    if c48 then L90() else L23();
  L68():
    p3 = prom<V +>{
      path_expand = ldf `path.expand`;
      p2 = prom<V +>{
        zipfile1 = ld zipfile;
        zipfile2 = force? zipfile1;
        checkMissing(zipfile2);
        return zipfile2;
      };
      r32 = dyn path_expand(p2);
      return r32;
    };
    r34 = dyn shQuote(p3);
    check L69() else D14();
  L76():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L78() else L79();
  L77():
    r40 = dyn base8(<lang c(args, Sys.getenv())>);
    goto L20(r40);
  L86():
    args2 = ld args;
    check L88() else D25();
  L87():
    r50 = dyn base10(<sym args>);
    goto L22(r39, r50);
  D14():
    deopt 60 [r34];
  D24():
    deopt 89 [r47];
  D25():
    deopt 91 [r39, args2];
  L21(r43):
    nchar = ldf nchar in base;
    r46 = dyn nchar(r43, "chars", FALSE, NA_LGL);
    check L84() else D23();
  L23():
    st input = NULL;
    goto L25();
  L25():
    _Platform = ld `.Platform`;
    check L100() else D33();
  L69():
    shQuote1 = ldf shQuote;
    check L70() else D15();
  L78():
    args = ld args;
    check L80() else D19();
  L79():
    r42 = dyn base9(<sym args>, <lang Sys.getenv()>);
    goto L21(r42);
  L85():
    goto L19(r47);
  L88():
    args3 = force? args2;
    checkMissing(args3);
    length2 = ldf length in base;
    r53 = dyn length2(args3);
    check L89() else D26();
  L90():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L91() else L92();
  D15():
    deopt 62 [];
  D19():
    deopt 76 [args];
  D23():
    deopt 87 [r46];
  D26():
    deopt 94 [r39, r53];
  D33():
    deopt 118 [_Platform];
  L24(r57):
    st args = r57;
    files7 = ld files;
    check L98() else D32();
  L70():
    p4 = prom<V +>{
      files5 = ld files;
      files6 = force? files5;
      checkMissing(files6);
      return files6;
    };
    r36 = dyn shQuote1(p4);
    check L71() else D16();
  L80():
    args1 = force? args;
    checkMissing(args1);
    Sys_getenv1 = ldf `Sys.getenv`;
    check L81() else D20();
  L84():
    goto L20(r46);
  L89():
    goto L22(r39, r53);
  L91():
    flags3 = ld flags;
    check L93() else D27();
  L92():
    r56 = dyn base11(<sym flags>, "-@", <lang shQuote(path.expand(zipfile))>, <sym extras>);
    goto L24(r56);
  L100():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c50 = `is.object`(_Platform1);
    if c50 then L102() else L103(_Platform1);
  D16():
    deopt 64 [r36];
  D20():
    deopt 79 [];
  D27():
    deopt 100 [flags3];
  D32():
    deopt 112 [files7];
  L71():
    extras1 = ld extras;
    check L72() else D17();
  L81():
    r44 = dyn Sys_getenv1();
    check L82() else D21();
  L93():
    flags4 = force? flags3;
    checkMissing(flags4);
    shQuote2 = ldf shQuote;
    check L94() else D28();
  L98():
    files8 = force? files7;
    checkMissing(files8);
    st input = files8;
    goto L25();
  L101(dx1):
    r64 = `==`(dx1, "windows");
    c51 = `as.logical`(r64);
    if c51 then L105() else L26();
  L102():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L104() else L103(dr);
  L103(_Platform3):
    r63 = `$`(_Platform3, <sym OS.type>);
    goto L101(r63);
  D17():
    deopt 65 [extras1];
  D21():
    deopt 80 [r44];
  D28():
    deopt 104 [];
  L26():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L112() else L113();
  L72():
    extras2 = force? extras1;
    checkMissing(extras2);
    c46 = ldf c in base;
    r37 = dyn c46(flags2, r34, r36, extras2);
    check L73() else D18();
  L82():
    c47 = ldf c in base;
    r45 = dyn c47(args1, r44);
    check L83() else D22();
  L94():
    p6 = prom<V +>{
      path_expand1 = ldf `path.expand`;
      p5 = prom<V +>{
        zipfile3 = ld zipfile;
        zipfile4 = force? zipfile3;
        checkMissing(zipfile4);
        return zipfile4;
      };
      r59 = dyn path_expand1(p5);
      return r59;
    };
    r61 = dyn shQuote2(p6);
    check L95() else D29();
  L104():
    dx = getTryDispatchBuiltinValue(dr);
    goto L101(dx);
  L105():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L106() else L107();
  D18():
    deopt 68 [r37];
  D22():
    deopt 82 [r45];
  D29():
    deopt 106 [r61];
  L27(r66):
    popenv;
    return r66;
  L28(r73):
    popenv;
    return r73;
  L73():
    goto L18(r37);
  L83():
    goto L21(r45);
  L95():
    extras3 = ld extras;
    check L96() else D30();
  L106():
    system2 = ldf system2;
    check L108() else D34();
  L107():
    r65 = dyn base12(<lang system2(zip, args, input=input, invisible=TRUE)>);
    goto L27(r65);
  L112():
    system3 = ldf system2;
    check L114() else D37();
  L113():
    r72 = dyn base13(<lang system2(zip, args, input=input)>);
    goto L28(r72);
  D30():
    deopt 107 [extras3];
  D34():
    deopt 126 [];
  D37():
    deopt 139 [];
  L96():
    extras4 = force? extras3;
    checkMissing(extras4);
    c49 = ldf c in base;
    r62 = dyn c49(flags4, "-@", r61, extras4);
    check L97() else D31();
  L108():
    p7 = prom<V +>{
      zip7 = ld zip;
      zip8 = force? zip7;
      checkMissing(zip8);
      return zip8;
    };
    p8 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    p9 = prom<V +>{
      input = ld input;
      input1 = force? input;
      checkMissing(input1);
      return input1;
    };
    r70 = dyn system2[, , input, invisible](p7, p8, p9, TRUE);
    check L109() else D35();
  L114():
    p10 = prom<V +>{
      zip9 = ld zip;
      zip10 = force? zip9;
      checkMissing(zip10);
      return zip10;
    };
    p11 = prom<V +>{
      args6 = ld args;
      args7 = force? args6;
      checkMissing(args7);
      return args7;
    };
    p12 = prom<V +>{
      input2 = ld input;
      input3 = force? input2;
      checkMissing(input3);
      return input3;
    };
    r77 = dyn system3[, , input](p10, p11, p12);
    check L115() else D38();
  D31():
    deopt 110 [r62];
  D35():
    deopt 133 [r70];
  D38():
    deopt 144 [r77];
  L97():
    goto L24(r62);
  L109():
    invisible = ldf invisible in base;
    r71 = dyn invisible(r70);
    check L110() else D36();
  L115():
    invisible1 = ldf invisible in base;
    r78 = dyn invisible1(r77);
    check L116() else D39();
  D36():
    deopt 135 [r71];
  D39():
    deopt 146 [r78];
  L110():
    goto L27(r71);
  L116():
    goto L28(r78);
  }
}