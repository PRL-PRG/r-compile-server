fun main() {
  () -+> V { reg r:cls, reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg txt:*, reg txt1:V, reg nchar:cls, reg r10:V, reg sum:cls, reg r11:V, reg memCompress:cls, reg txt2:*, reg txt3:V, reg p2:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg txt_gz:*, reg txt_gz1:V, reg length:cls, reg r16:V, reg strsplit:cls, reg memDecompress:cls, reg txt_gz2:*, reg txt_gz3:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg c:L, reg r22:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r23:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg txt4:*, reg txt5:V, reg txt6:*, reg txt7:V, reg identical:cls, reg r26:V, reg p5:p(V +), reg r28:V, reg strsplit1:cls, reg memDecompress1:cls, reg txt_gz4:*, reg txt_gz5:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg c1:L, reg r34:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r35:V, reg stopifnot1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg txt2b:*, reg txt2b1:V, reg txt8:*, reg txt9:V, reg identical1:cls, reg r38:V, reg p8:p(V +), reg r40:V, reg memCompress1:cls, reg txt10:*, reg txt11:V, reg p9:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg txt_bz2:*, reg txt_bz3:V, reg length1:cls, reg r45:V, reg strsplit2:cls, reg memDecompress2:cls, reg txt_bz4:*, reg txt_bz5:V, reg p10:p(V +), reg r47:V, reg p11:p(V +), reg r49:V, reg c2:L, reg r51:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r52:V, reg stopifnot2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg txt12:*, reg txt13:V, reg txt14:*, reg txt15:V, reg identical2:cls, reg r55:V, reg p12:p(V +), reg r57:V, reg memCompress2:cls, reg txt16:*, reg txt17:V, reg p13:p(V +), reg r59:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg txt_xz:*, reg txt_xz1:V, reg length2:cls, reg r62:V, reg strsplit3:cls, reg memDecompress3:cls, reg txt_xz2:*, reg txt_xz3:V, reg p14:p(V +), reg r64:V, reg p15:p(V +), reg r66:V, reg c3:L, reg r68:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r69:V, reg stopifnot3:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg txt18:*, reg txt19:V, reg txt20:*, reg txt21:V, reg identical3:cls, reg r72:V, reg p16:p(V +), reg r74:V, reg tempfile:cls, reg r75:V, reg gzfile:cls, reg tf:*, reg tf1:V, reg p17:p(V +), reg r77:V, reg writeLines:cls, reg txt22:*, reg txt23:V, reg p18:p(V +), reg con:*, reg con1:V, reg p19:p(V +), reg r80:V, reg close:cls, reg con2:*, reg con3:V, reg p20:p(V +), reg r82:V, reg file_size:cls, reg tf2:*, reg tf3:V, reg p21:p(V +), reg r84:V, reg readBin:cls, reg tf4:*, reg tf5:V, reg p22:p(V +), reg nf:*, reg nf1:V, reg p23:p(V +), reg r87:V, reg unlink:cls, reg tf6:*, reg tf7:V, reg p24:p(V +), reg r89:V, reg strsplit4:cls, reg memDecompress4:cls, reg foo:*, reg foo1:V, reg p25:p(V +), reg r91:V, reg p26:p(V +), reg r93:V, reg c4:L, reg r95:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r96:V, reg stopifnot4:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r97:V, reg r98:V, reg txt24:*, reg txt25:V, reg txt26:*, reg txt27:V, reg identical4:cls, reg r99:V, reg p27:p(V +), reg r101:V |
    mkenv;
    r = clos inner390573611;
    st memCompress = r;
    readLines = ldf readLines;
    check L10() else D0();
  D0():
    deopt 4 [];
  L10():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r1 = dyn R_home("doc");
        return r1;
      };
      r3 = dyn file_path(p, "COPYING");
      return r3;
    };
    r5 = dyn readLines(p1);
    check L11() else D1();
  D1():
    deopt 6 [r5];
  L11():
    st txt = r5;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0():
    memCompress = ldf memCompress;
    check L19() else D5();
  L12():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r6 = dyn base(<lang nchar(txt)>);
    goto L0();
  D5():
    deopt 22 [];
  L1(r9):
    sum = ldf sum in base;
    r11 = dyn sum(r9);
    check L18() else D4();
  L14():
    txt = ld txt;
    check L16() else D2();
  L15():
    r8 = dyn base1(<sym txt>);
    goto L1(r8);
  L19():
    p2 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r13 = dyn memCompress(p2, "g");
    check L20() else D6();
  D2():
    deopt 12 [txt];
  D4():
    deopt 20 [r11];
  D6():
    deopt 25 [r13];
  L16():
    txt1 = force? txt;
    checkMissing(txt1);
    nchar = ldf nchar in base;
    r10 = dyn nchar(txt1, "chars", FALSE, NA_LGL);
    check L17() else D3();
  L18():
    goto L0();
  L20():
    st `txt.gz` = r13;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D3():
    deopt 18 [r10];
  L2():
    strsplit = ldf strsplit;
    check L25() else D9();
  L17():
    goto L1(r10);
  L21():
    txt_gz = ld `txt.gz`;
    check L23() else D7();
  L22():
    r14 = dyn base2(<sym txt.gz>);
    goto L2();
  D7():
    deopt 29 [txt_gz];
  D9():
    deopt 34 [];
  L23():
    txt_gz1 = force? txt_gz;
    checkMissing(txt_gz1);
    length = ldf length in base;
    r16 = dyn length(txt_gz1);
    check L24() else D8();
  L25():
    p4 = prom<V +>{
      memDecompress = ldf memDecompress;
      p3 = prom<V +>{
        txt_gz2 = ld `txt.gz`;
        txt_gz3 = force? txt_gz2;
        checkMissing(txt_gz3);
        return txt_gz3;
      };
      r18 = dyn memDecompress[, , asChar](p3, "g", TRUE);
      return r18;
    };
    r20 = dyn strsplit(p4, "\n");
    check L26() else D10();
  D8():
    deopt 32 [r16];
  D10():
    deopt 37 [r20];
  L24():
    goto L2();
  L26():
    c = `is.object`(r20);
    if c then L27() else L28(r20);
  L3(dx1):
    st txt2 = dx1;
    stopifnot = ldf stopifnot;
    check L30() else D11();
  L27():
    dr = tryDispatchBuiltin.1("[[", r20);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(r22):
    __ = ldf `[[` in base;
    r23 = dyn __(r22, 1.0);
    goto L3(r23);
  D11():
    deopt 43 [];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L30():
    p5 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      txt6 = ld txt2;
      txt7 = force? txt6;
      checkMissing(txt7);
      identical = ldf identical in base;
      r26 = dyn identical(txt5, txt7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r26);
    L2():
      r24 = dyn base3(<sym txt>, <sym txt2>);
      goto L0(r24);
    };
    r28 = dyn stopifnot(p5);
    check L31() else D12();
  D12():
    deopt 45 [r28];
  L31():
    strsplit1 = ldf strsplit;
    check L32() else D13();
  D13():
    deopt 47 [];
  L32():
    p7 = prom<V +>{
      memDecompress1 = ldf memDecompress;
      p6 = prom<V +>{
        txt_gz4 = ld `txt.gz`;
        txt_gz5 = force? txt_gz4;
        checkMissing(txt_gz5);
        return txt_gz5;
      };
      r30 = dyn memDecompress1[, asChar](p6, TRUE);
      return r30;
    };
    r32 = dyn strsplit1(p7, "\n");
    check L33() else D14();
  D14():
    deopt 50 [r32];
  L33():
    c1 = `is.object`(r32);
    if c1 then L34() else L35(r32);
  L4(dx3):
    st txt2b = dx3;
    stopifnot1 = ldf stopifnot;
    check L37() else D15();
  L34():
    dr2 = tryDispatchBuiltin.1("[[", r32);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(r34):
    __1 = ldf `[[` in base;
    r35 = dyn __1(r34, 1.0);
    goto L4(r35);
  D15():
    deopt 56 [];
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L37():
    p8 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      txt2b = ld txt2b;
      txt2b1 = force? txt2b;
      checkMissing(txt2b1);
      txt8 = ld txt2;
      txt9 = force? txt8;
      checkMissing(txt9);
      identical1 = ldf identical in base;
      r38 = dyn identical1(txt2b1, txt9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r38);
    L2():
      r36 = dyn base4(<sym txt2b>, <sym txt2>);
      goto L0(r36);
    };
    r40 = dyn stopifnot1(p8);
    check L38() else D16();
  D16():
    deopt 58 [r40];
  L38():
    memCompress1 = ldf memCompress;
    check L39() else D17();
  D17():
    deopt 60 [];
  L39():
    p9 = prom<V +>{
      txt10 = ld txt;
      txt11 = force? txt10;
      checkMissing(txt11);
      return txt11;
    };
    r42 = dyn memCompress1(p9, "b");
    check L40() else D18();
  D18():
    deopt 63 [r42];
  L40():
    st `txt.bz2` = r42;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L5():
    strsplit2 = ldf strsplit;
    check L45() else D21();
  L41():
    txt_bz2 = ld `txt.bz2`;
    check L43() else D19();
  L42():
    r43 = dyn base5(<sym txt.bz2>);
    goto L5();
  D19():
    deopt 67 [txt_bz2];
  D21():
    deopt 72 [];
  L43():
    txt_bz3 = force? txt_bz2;
    checkMissing(txt_bz3);
    length1 = ldf length in base;
    r45 = dyn length1(txt_bz3);
    check L44() else D20();
  L45():
    p11 = prom<V +>{
      memDecompress2 = ldf memDecompress;
      p10 = prom<V +>{
        txt_bz4 = ld `txt.bz2`;
        txt_bz5 = force? txt_bz4;
        checkMissing(txt_bz5);
        return txt_bz5;
      };
      r47 = dyn memDecompress2[, asChar](p10, TRUE);
      return r47;
    };
    r49 = dyn strsplit2(p11, "\n");
    check L46() else D22();
  D20():
    deopt 70 [r45];
  D22():
    deopt 75 [r49];
  L44():
    goto L5();
  L46():
    c2 = `is.object`(r49);
    if c2 then L47() else L48(r49);
  L6(dx5):
    st txt3 = dx5;
    stopifnot2 = ldf stopifnot;
    check L50() else D23();
  L47():
    dr4 = tryDispatchBuiltin.1("[[", r49);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dr4);
  L48(r51):
    __2 = ldf `[[` in base;
    r52 = dyn __2(r51, 1.0);
    goto L6(r52);
  D23():
    deopt 81 [];
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L50():
    p12 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      txt12 = ld txt;
      txt13 = force? txt12;
      checkMissing(txt13);
      txt14 = ld txt3;
      txt15 = force? txt14;
      checkMissing(txt15);
      identical2 = ldf identical in base;
      r55 = dyn identical2(txt13, txt15, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r55);
    L2():
      r53 = dyn base6(<sym txt>, <sym txt3>);
      goto L0(r53);
    };
    r57 = dyn stopifnot2(p12);
    check L51() else D24();
  D24():
    deopt 83 [r57];
  L51():
    memCompress2 = ldf memCompress;
    check L52() else D25();
  D25():
    deopt 85 [];
  L52():
    p13 = prom<V +>{
      txt16 = ld txt;
      txt17 = force? txt16;
      checkMissing(txt17);
      return txt17;
    };
    r59 = dyn memCompress2(p13, "x");
    check L53() else D26();
  D26():
    deopt 88 [r59];
  L53():
    st `txt.xz` = r59;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L7():
    strsplit3 = ldf strsplit;
    check L58() else D29();
  L54():
    txt_xz = ld `txt.xz`;
    check L56() else D27();
  L55():
    r60 = dyn base7(<sym txt.xz>);
    goto L7();
  D27():
    deopt 92 [txt_xz];
  D29():
    deopt 97 [];
  L56():
    txt_xz1 = force? txt_xz;
    checkMissing(txt_xz1);
    length2 = ldf length in base;
    r62 = dyn length2(txt_xz1);
    check L57() else D28();
  L58():
    p15 = prom<V +>{
      memDecompress3 = ldf memDecompress;
      p14 = prom<V +>{
        txt_xz2 = ld `txt.xz`;
        txt_xz3 = force? txt_xz2;
        checkMissing(txt_xz3);
        return txt_xz3;
      };
      r64 = dyn memDecompress3[, asChar](p14, TRUE);
      return r64;
    };
    r66 = dyn strsplit3(p15, "\n");
    check L59() else D30();
  D28():
    deopt 95 [r62];
  D30():
    deopt 100 [r66];
  L57():
    goto L7();
  L59():
    c3 = `is.object`(r66);
    if c3 then L60() else L61(r66);
  L8(dx7):
    st txt3 = dx7;
    stopifnot3 = ldf stopifnot;
    check L63() else D31();
  L60():
    dr6 = tryDispatchBuiltin.1("[[", r66);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(dr6);
  L61(r68):
    __3 = ldf `[[` in base;
    r69 = dyn __3(r68, 1.0);
    goto L8(r69);
  D31():
    deopt 106 [];
  L62():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L63():
    p16 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      txt18 = ld txt;
      txt19 = force? txt18;
      checkMissing(txt19);
      txt20 = ld txt3;
      txt21 = force? txt20;
      checkMissing(txt21);
      identical3 = ldf identical in base;
      r72 = dyn identical3(txt19, txt21, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r72);
    L2():
      r70 = dyn base8(<sym txt>, <sym txt3>);
      goto L0(r70);
    };
    r74 = dyn stopifnot3(p16);
    check L64() else D32();
  D32():
    deopt 108 [r74];
  L64():
    tempfile = ldf tempfile;
    check L65() else D33();
  D33():
    deopt 110 [];
  L65():
    r75 = dyn tempfile[fileext](".gz");
    check L66() else D34();
  D34():
    deopt 113 [r75];
  L66():
    st tf = r75;
    gzfile = ldf gzfile;
    check L67() else D35();
  D35():
    deopt 116 [];
  L67():
    p17 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r77 = dyn gzfile(p17, "w");
    check L68() else D36();
  D36():
    deopt 119 [r77];
  L68():
    st con = r77;
    writeLines = ldf writeLines;
    check L69() else D37();
  D37():
    deopt 122 [];
  L69():
    p18 = prom<V +>{
      txt22 = ld txt;
      txt23 = force? txt22;
      checkMissing(txt23);
      return txt23;
    };
    p19 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r80 = dyn writeLines(p18, p19);
    check L70() else D38();
  D38():
    deopt 125 [r80];
  L70():
    close = ldf close;
    check L71() else D39();
  D39():
    deopt 127 [];
  L71():
    p20 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r82 = dyn close(p20);
    check L72() else D40();
  D40():
    deopt 129 [r82];
  L72():
    file_size = ldf `file.size`;
    check L73() else D41();
  D41():
    deopt 131 [];
  L73():
    p21 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r84 = dyn file_size(p21);
    check L74() else D42();
  D42():
    deopt 133 [r84];
  L74():
    st nf = r84;
    readBin = ldf readBin;
    check L75() else D43();
  D43():
    deopt 136 [];
  L75():
    p22 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    p23 = prom<V +>{
      nf = ld nf;
      nf1 = force? nf;
      checkMissing(nf1);
      return nf1;
    };
    r87 = dyn readBin[, , n](p22, "raw", p23);
    check L76() else D44();
  D44():
    deopt 141 [r87];
  L76():
    st foo = r87;
    unlink = ldf unlink;
    check L77() else D45();
  D45():
    deopt 144 [];
  L77():
    p24 = prom<V +>{
      tf6 = ld tf;
      tf7 = force? tf6;
      checkMissing(tf7);
      return tf7;
    };
    r89 = dyn unlink(p24);
    check L78() else D46();
  D46():
    deopt 146 [r89];
  L78():
    strsplit4 = ldf strsplit;
    check L79() else D47();
  D47():
    deopt 148 [];
  L79():
    p26 = prom<V +>{
      memDecompress4 = ldf memDecompress;
      p25 = prom<V +>{
        foo = ld foo;
        foo1 = force? foo;
        checkMissing(foo1);
        return foo1;
      };
      r91 = dyn memDecompress4[, asChar](p25, TRUE);
      return r91;
    };
    r93 = dyn strsplit4(p26, "\n");
    check L80() else D48();
  D48():
    deopt 151 [r93];
  L80():
    c4 = `is.object`(r93);
    if c4 then L81() else L82(r93);
  L9(dx9):
    st txt3 = dx9;
    stopifnot4 = ldf stopifnot;
    check L84() else D49();
  L81():
    dr8 = tryDispatchBuiltin.1("[[", r93);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L83() else L82(dr8);
  L82(r95):
    __4 = ldf `[[` in base;
    r96 = dyn __4(r95, 1.0);
    goto L9(r96);
  D49():
    deopt 157 [];
  L83():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9(dx8);
  L84():
    p27 = prom<V +>{
      sym9 = ldf identical;
      base9 = ldf identical in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r98):
      return r98;
    L1():
      txt24 = ld txt;
      txt25 = force? txt24;
      checkMissing(txt25);
      txt26 = ld txt3;
      txt27 = force? txt26;
      checkMissing(txt27);
      identical4 = ldf identical in base;
      r99 = dyn identical4(txt25, txt27, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r99);
    L2():
      r97 = dyn base9(<sym txt>, <sym txt3>);
      goto L0(r97);
    };
    r101 = dyn stopifnot4(p27);
    check L85() else D50();
  D50():
    deopt 159 [r101];
  L85():
    popenv;
    return r101;
  }
}
fun inner390573611(from, type) {
  (reg from:*, reg type:*) -+> V { var from:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg from1:*, reg from2:V, reg c1:L, reg c2:L, reg charToRaw:cls, reg paste:cls, reg from3:*, reg from4:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg from5:*, reg from6:V, reg is_raw:cls, reg r13:V, reg r14:V, reg c3:L, reg stop:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p3:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg c4:cls, reg r22:V, reg match:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg from7:*, reg from8:V, reg type3:*, reg type4:V, reg memCompress:cls, reg r26:V |
    mkenv;
    st from = from;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("gzip", "bzip2", "xz", "none");
      goto L0(r2);
    L2():
      r = dyn base("gzip", "bzip2", "xz", "none");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r5):
    c2 = `as.logical`(r5);
    if c2 then L13() else L3();
  L10():
    from1 = ld from;
    check L12() else D0();
  L11():
    r4 = dyn base1(<sym from>);
    goto L2(r4);
  D0():
    deopt 1 [from1];
  L3():
    sym2 = ldf `is.raw`;
    base2 = ldf `is.raw` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L4():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L12():
    from2 = force? from1;
    checkMissing(from2);
    c1 = `is.character`(from2);
    goto L2(c1);
  L13():
    charToRaw = ldf charToRaw;
    check L14() else D1();
  D1():
    deopt 5 [];
  L5(r12):
    r14 = `!`(r12);
    c3 = `as.logical`(r14);
    if c3 then L21() else L6();
  L7(r17):
    st type = r17;
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L14():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        from3 = ld from;
        from4 = force? from3;
        checkMissing(from4);
        return from4;
      };
      r7 = dyn paste[, collapse](p1, "\n");
      return r7;
    };
    r9 = dyn charToRaw(p2);
    check L15() else D2();
  L17():
    from5 = ld from;
    check L19() else D3();
  L18():
    r11 = dyn base2(<sym from>);
    goto L5(r11);
  L25():
    match_arg = ldf `match.arg`;
    check L27() else D7();
  L26():
    r16 = dyn base3(<lang match.arg(type)>, <lang c("none", "gzip", "bzip2", "xz")>);
    goto L7(r16);
  D2():
    deopt 7 [r9];
  D3():
    deopt 11 [from5];
  D7():
    deopt 25 [];
  L6():
    goto L4();
  L9(r25):
    popenv;
    return r25;
  L15():
    st from = r9;
    goto L4();
  L19():
    from6 = force? from5;
    checkMissing(from6);
    is_raw = ldf `is.raw` in base;
    r13 = dyn is_raw(from6);
    check L20() else D4();
  L21():
    stop = ldf stop;
    check L22() else D5();
  L27():
    p3 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r19 = dyn match_arg(p3);
    check L28() else D8();
  L33():
    from7 = ld from;
    check L35() else D11();
  L34():
    r24 = dyn base5(<lang memCompress(from, type)>);
    goto L9(r24);
  D4():
    deopt 14 [r13];
  D5():
    deopt 17 [];
  D8():
    deopt 27 [r19];
  D11():
    deopt 43 [from7];
  L20():
    goto L5(r13);
  L22():
    r15 = dyn stop("'from' must be raw or character");
    check L23() else D6();
  L28():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L35():
    from8 = force? from7;
    checkMissing(from8);
    type3 = ld type;
    check L36() else D12();
  D6():
    deopt 19 [r15];
  D12():
    deopt 45 [type3];
  L8(r21):
    match = ldf match in base;
    r23 = dyn match(r19, r21, NA_INT, NULL);
    check L32() else D10();
  L23():
    goto L4();
  L29():
    c4 = ldf c in base;
    r22 = dyn c4("none", "gzip", "bzip2", "xz");
    check L31() else D9();
  L30():
    r20 = dyn base4("none", "gzip", "bzip2", "xz");
    goto L8(r20);
  L36():
    type4 = force? type3;
    checkMissing(type4);
    memCompress = ldf memCompress in base;
    r26 = dyn memCompress(from8, type4);
    check L37() else D13();
  D9():
    deopt 35 [r22];
  D10():
    deopt 39 [r23];
  D13():
    deopt 48 [r26];
  L31():
    goto L8(r22);
  L32():
    goto L7(r23);
  L37():
    goto L9(r26);
  }
}