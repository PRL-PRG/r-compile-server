fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-800697889`;
    st saveRDS = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-800697889`(object, file, ascii, version, compress, refhook) {
  (reg object:*, reg file:*, reg ascii:*, reg version:*, reg compress:*, reg refhook:*) -+> V { var object:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var ascii:*, reg ascii_isMissing:L, reg ascii_orDefault:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, var refhook:*, reg refhook_isMissing:L, reg refhook_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg file3:*, reg file4:V, reg length:cls, reg r4:V, reg r5:V, reg c2:L, reg c3:V, reg file5:*, reg file6:V, reg r6:V, reg c5:L, reg c6:V, reg c8:L, reg stop:cls, reg gettextf:cls, reg r7:V, reg p:p(V +), reg r9:V, reg object1:*, reg object2:V, reg _in_:cls, reg ascii1:*, reg ascii2:V, reg p1:p(V +), reg r12:V, reg c9:L, reg r13:S, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg compress1:*, reg compress2:V, reg c10:L, reg c11:L, reg compress3:*, reg compress4:V, reg c12:L, reg gzfile:cls, reg file7:*, reg file8:V, reg p2:p(V +), reg mode:*, reg mode1:V, reg p3:p(V +), reg r18:V, reg r19:V, reg file9:cls, reg file10:*, reg file11:V, reg p4:p(V +), reg mode2:*, reg mode3:V, reg p5:p(V +), reg r22:V, reg r23:V, reg compress5:*, reg compress6:V, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg c18:L, reg i_ddd:dots, reg i:V, reg c19:L, reg c20:L, reg c21:L, reg c22:L, reg bzfile:cls, reg file12:*, reg file13:V, reg p6:p(V +), reg mode4:*, reg mode5:V, reg p7:p(V +), reg r26:V, reg xzfile:cls, reg file14:*, reg file15:V, reg p8:p(V +), reg mode6:*, reg mode7:V, reg p9:p(V +), reg r29:V, reg gzfile1:cls, reg file16:*, reg file17:V, reg p10:p(V +), reg mode8:*, reg mode9:V, reg p11:p(V +), reg r32:V, reg stop1:cls, reg compress7:*, reg compress8:V, reg p12:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg on_exit:cls, reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg file18:*, reg file19:V, reg inherits:cls, reg r41:V, reg c23:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg missing:cls, reg r44:V, reg r45:V, reg c24:L, reg warning:cls, reg r46:V, reg file20:*, reg file21:V, reg stop2:cls, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg object3:*, reg object4:V, reg con:*, reg con1:V, reg ascii3:*, reg ascii4:V, reg version1:*, reg version2:V, reg refhook1:*, reg refhook2:V, reg serializeToConn:cls, reg r51:V |
    mkenv;
    st object = object;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    ascii_isMissing = missing.0(ascii);
    if ascii_isMissing then L1(FALSE) else L1(ascii);
  L1(ascii_orDefault):
    st ascii = ascii_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L2(NULL) else L2(version);
  L2(version_orDefault):
    st version = version_orDefault;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L3(TRUE) else L3(compress);
  L3(compress_orDefault):
    st compress = compress_orDefault;
    refhook_isMissing = missing.0(refhook);
    if refhook_isMissing then L4(NULL) else L4(refhook);
  L4(refhook_orDefault):
    st refhook = refhook_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L5(r1):
    c1 = `as.logical`(r1);
    if c1 then L34() else L6();
  L31():
    file1 = ld file;
    check L33() else D0();
  L32():
    r = dyn base(<sym file>);
    goto L5(r);
  D0():
    deopt 1 [file1];
  L6():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L24():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L108() else L109();
  L33():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L5(c);
  L34():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L7(r3):
    r5 = `!=`(r3, 1.0);
    c2 = `as.logical`(r5);
    if c2 then L8(c2) else L39();
  L25(r40):
    c23 = `as.logical`(r40);
    if c23 then L97() else L26();
  L30(r50):
    popenv;
    return r50;
  L35():
    file3 = ld file;
    check L37() else D1();
  L36():
    r2 = dyn base1(<sym file>);
    goto L7(r2);
  L93():
    file18 = ld file;
    check L95() else D24();
  L94():
    r39 = dyn base4(<sym file>, "connection");
    goto L25(r39);
  L108():
    object3 = ld object;
    check L110() else D31();
  L109():
    r49 = dyn base6(<lang serializeToConn(object, con, ascii, version, refhook)>);
    goto L30(r49);
  D1():
    deopt 6 [file3];
  D24():
    deopt 85 [file18];
  D31():
    deopt 110 [object3];
  L8(c3):
    c8 = `as.logical`(c3);
    if c8 then L42() else L9();
  L26():
    stop2 = ldf stop;
    check L106() else D29();
  L37():
    file4 = force? file3;
    checkMissing(file4);
    length = ldf length in base;
    r4 = dyn length(file4);
    check L38() else D2();
  L39():
    file5 = ld file;
    check L40() else D3();
  L95():
    file19 = force? file18;
    checkMissing(file19);
    inherits = ldf inherits in base;
    r41 = dyn inherits(file19, "connection", FALSE);
    check L96() else D25();
  L97():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L98() else L99();
  L110():
    object4 = force? object3;
    checkMissing(object4);
    con = ld con;
    check L111() else D32();
  D2():
    deopt 9 [r4];
  D3():
    deopt 12 [c2, file5];
  D25():
    deopt 90 [r41];
  D29():
    deopt 105 [];
  D32():
    deopt 112 [con];
  L9():
    goto L10();
  L10():
    object1 = ld object;
    check L46() else D6();
  L27(r43):
    r45 = `!`(r43);
    c24 = `as.logical`(r45);
    if c24 then L100() else L28();
  L38():
    goto L7(r4);
  L40():
    file6 = force? file5;
    checkMissing(file6);
    r6 = `==`(file6, "");
    c5 = `as.logical`(r6);
    c6 = `||`(c2, c5);
    goto L8(c6);
  L42():
    stop = ldf stop;
    check L43() else D4();
  L96():
    goto L25(r41);
  L98():
    missing = ldf missing in base;
    r44 = dyn missing(<sym compress>);
    goto L27(r44);
  L99():
    r42 = dyn base5(<sym compress>);
    goto L27(r42);
  L106():
    r48 = dyn stop2("bad 'file' argument");
    check L107() else D30();
  L111():
    con1 = force? con;
    checkMissing(con1);
    ascii3 = ld ascii;
    check L112() else D33();
  D4():
    deopt 18 [];
  D6():
    deopt 25 [object1];
  D30():
    deopt 107 [r48];
  D33():
    deopt 114 [ascii3];
  L28():
    goto L29();
  L29():
    file20 = ld file;
    check L104() else D28();
  L43():
    p = prom<V +>{
      gettextf = ldf gettextf;
      r7 = dyn gettextf("'%s' must be a non-empty string", "file");
      return r7;
    };
    r9 = dyn stop[, domain](p, NA_LGL);
    check L44() else D5();
  L46():
    object2 = force? object1;
    checkMissing(object2);
    st object = object2;
    _in_ = ldf `%in%`;
    check L47() else D7();
  L100():
    warning = ldf warning;
    check L101() else D26();
  L107():
    goto L24();
  L112():
    ascii4 = force? ascii3;
    checkMissing(ascii4);
    version1 = ld version;
    check L113() else D34();
  D5():
    deopt 22 [r9];
  D7():
    deopt 29 [];
  D26():
    deopt 96 [];
  D28():
    deopt 101 [file20];
  D34():
    deopt 116 [version1];
  L44():
    goto L10();
  L47():
    p1 = prom<V +>{
      ascii1 = ld ascii;
      ascii2 = force? ascii1;
      checkMissing(ascii2);
      return ascii2;
    };
    r12 = dyn _in_(p1, FALSE);
    check L48() else D8();
  L101():
    r46 = dyn warning("'compress' is ignored unless 'file' is a file name");
    check L102() else D27();
  L104():
    file21 = force? file20;
    checkMissing(file21);
    st con = file21;
    goto L24();
  L113():
    version2 = force? version1;
    checkMissing(version2);
    refhook1 = ld refhook;
    check L114() else D35();
  D8():
    deopt 32 [r12];
  D27():
    deopt 98 [r46];
  D35():
    deopt 118 [refhook1];
  L48():
    c9 = `as.logical`(r12);
    if c9 then L49() else L11();
  L102():
    goto L29();
  L114():
    refhook2 = force? refhook1;
    checkMissing(refhook2);
    serializeToConn = ldf serializeToConn in base;
    r51 = dyn serializeToConn(object4, con1, ascii4, version2, refhook2);
    check L115() else D36();
  D36():
    deopt 121 [r51];
  L11():
    goto L12("w");
  L12(r13):
    st mode = r13;
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L49():
    goto L12("wb");
  L115():
    goto L30(r51);
  L13(r15):
    c11 = `as.logical`(r15);
    if c11 then L54() else L14();
  L51():
    compress1 = ld compress;
    check L53() else D9();
  L52():
    r14 = dyn base2(<sym compress>);
    goto L13(r14);
  D9():
    deopt 39 [compress1];
  L14():
    compress5 = ld compress;
    check L63() else D15();
  L17(r23):
    st con = r23;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L90() else L91();
  L53():
    compress2 = force? compress1;
    checkMissing(compress2);
    c10 = `is.logical`(compress2);
    goto L13(c10);
  L54():
    compress3 = ld compress;
    check L55() else D10();
  D10():
    deopt 42 [compress3];
  D15():
    deopt 54 [compress5];
  L23(r36):
    goto L24();
  L55():
    compress4 = force? compress3;
    checkMissing(compress4);
    c12 = `as.logical`(compress4);
    if c12 then L56() else L15();
  L63():
    compress6 = force? compress5;
    checkMissing(compress6);
    c13 = `is.vector`(compress6, "any");
    if c13 then L64() else L65();
  L90():
    on_exit = ldf `on.exit` in base;
    r37 = dyn on_exit(<lang close(con)>);
    goto L23(r37);
  L91():
    r35 = dyn base3(<lang close(con)>);
    goto L23(r35);
  L15():
    file9 = ldf file;
    check L60() else D13();
  L16(r19):
    goto L17(r19);
  L56():
    gzfile = ldf gzfile;
    check L57() else D11();
  L64():
    c14 = inherits(compress6, "factor", FALSE);
    if c14 then L66() else L67();
  L65():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D11():
    deopt 45 [];
  D13():
    deopt 50 [];
  L57():
    p2 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    p3 = prom<V +>{
      mode = ld mode;
      mode1 = force? mode;
      checkMissing(mode1);
      return mode1;
    };
    r18 = dyn gzfile(p2, p3);
    check L58() else D12();
  L60():
    p4 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    p5 = prom<V +>{
      mode2 = ld mode;
      mode3 = force? mode2;
      checkMissing(mode3);
      return mode3;
    };
    r22 = dyn file9(p4, p5);
    check L61() else D14();
  L66():
    c15 = `is.character`(compress6);
    if c15 then L68() else L69();
  L67():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L66();
  D12():
    deopt 48 [r18];
  D14():
    deopt 53 [r22];
  L18():
    bzfile = ldf bzfile;
    check L78() else D16();
  L19():
    xzfile = ldf xzfile;
    check L81() else D18();
  L20():
    gzfile1 = ldf gzfile;
    check L84() else D20();
  L21():
    stop1 = ldf stop;
    check L87() else D22();
  L58():
    goto L16(r18);
  L61():
    goto L16(r22);
  L68():
    c16 = `==`.6(compress6, "bzip2");
    if c16 then L18() else L70();
  L69():
    i_ddd = dots[compress6];
    i = `as.integer`(i_ddd);
    c19 = `==`.5(i, 1);
    if c19 then L18() else L73();
  D16():
    deopt 59 [];
  D18():
    deopt 64 [];
  D20():
    deopt 69 [];
  D22():
    deopt 74 [];
  L70():
    c17 = `==`.6(compress6, "xz");
    if c17 then L19() else L71();
  L73():
    c20 = `==`.5(i, 2);
    if c20 then L19() else L74();
  L78():
    p6 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    p7 = prom<V +>{
      mode4 = ld mode;
      mode5 = force? mode4;
      checkMissing(mode5);
      return mode5;
    };
    r26 = dyn bzfile(p6, p7);
    check L79() else D17();
  L81():
    p8 = prom<V +>{
      file14 = ld file;
      file15 = force? file14;
      checkMissing(file15);
      return file15;
    };
    p9 = prom<V +>{
      mode6 = ld mode;
      mode7 = force? mode6;
      checkMissing(mode7);
      return mode7;
    };
    r29 = dyn xzfile(p8, p9);
    check L82() else D19();
  L84():
    p10 = prom<V +>{
      file16 = ld file;
      file17 = force? file16;
      checkMissing(file17);
      return file17;
    };
    p11 = prom<V +>{
      mode8 = ld mode;
      mode9 = force? mode8;
      checkMissing(mode9);
      return mode9;
    };
    r32 = dyn gzfile1(p10, p11);
    check L85() else D21();
  L87():
    p12 = prom<V +>{
      compress7 = ld compress;
      compress8 = force? compress7;
      checkMissing(compress8);
      return compress8;
    };
    r34 = dyn stop1("invalid 'compress' argument: ", p12);
    check L88() else D23();
  D17():
    deopt 62 [r26];
  D19():
    deopt 67 [r29];
  D21():
    deopt 72 [r32];
  D23():
    deopt 77 [r34];
  L71():
    c18 = `==`.6(compress6, "gzip");
    if c18 then L20() else L72();
  L74():
    c21 = `==`.5(i, 3);
    if c21 then L20() else L75();
  L79():
    goto L17(r26);
  L82():
    goto L17(r29);
  L85():
    goto L17(r32);
  L88():
    goto L17(r34);
  L72():
    goto L21();
  L75():
    c22 = `==`.5(i, 4);
    if c22 then L21() else L76();
  L76():
    goto L17(NULL);
  }
}