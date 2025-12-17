fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg saveRDS:cls, reg women:*, reg women1:V, reg p:p(V +), reg fil:*, reg fil1:V, reg p1:p(V +), reg r4:V, reg readRDS:cls, reg fil2:*, reg fil3:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg women2:*, reg women3:V, reg women4:*, reg women5:V, reg identical:cls, reg r9:V, reg gzfile:cls, reg fil4:*, reg fil5:V, reg p3:p(V +), reg r11:V, reg readRDS1:cls, reg con:*, reg con1:V, reg p4:p(V +), reg r13:V, reg close:cls, reg con2:*, reg con3:V, reg p5:p(V +), reg r15:V, reg gzfile1:cls, reg fil6:*, reg fil7:V, reg p6:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg unserialize:cls, reg con4:*, reg con5:V, reg p7:p(V +), reg r21:V, reg women6:*, reg women7:V, reg identical1:cls, reg r22:V, reg close1:cls, reg con6:*, reg con7:V, reg p8:p(V +), reg r24:V, reg gzfile2:cls, reg fil8:*, reg fil9:V, reg p9:p(V +), reg r26:V, reg readBin:cls, reg con8:*, reg con9:V, reg p10:p(V +), reg r28:V, reg close2:cls, reg con10:*, reg con11:V, reg p11:p(V +), reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg unserialize1:cls, reg wm:*, reg wm1:V, reg p12:p(V +), reg r34:V, reg women8:*, reg women9:V, reg identical2:cls, reg r35:V, reg tempfile1:cls, reg r36:V, reg file:cls, reg fil10:*, reg fil11:V, reg p13:p(V +), reg r38:V, reg serialize:cls, reg women10:*, reg women11:V, reg p14:p(V +), reg con12:*, reg con13:V, reg p15:p(V +), reg r41:V, reg close3:cls, reg con14:*, reg con15:V, reg p16:p(V +), reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg women12:*, reg women13:V, reg readRDS2:cls, reg fil12:*, reg fil13:V, reg p17:p(V +), reg r47:V, reg identical3:cls, reg r48:V, reg tempfile2:cls, reg r49:V, reg bzfile:cls, reg fil14:*, reg fil15:V, reg p18:p(V +), reg r51:V, reg serialize1:cls, reg women14:*, reg women15:V, reg p19:p(V +), reg con16:*, reg con17:V, reg p20:p(V +), reg r54:V, reg close4:cls, reg con18:*, reg con19:V, reg p21:p(V +), reg r56:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg women16:*, reg women17:V, reg readRDS3:cls, reg fil16:*, reg fil17:V, reg p22:p(V +), reg r60:V, reg identical4:cls, reg r61:V, reg unlink:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg fil18:*, reg fil19:V, reg fil20:*, reg fil21:V, reg fil22:*, reg fil23:V, reg c:cls, reg r64:V, reg p23:p(V +), reg r66:V |
    mkenv;
    r = clos inner1910579422;
    st readRDS = r;
    tempfile = ldf tempfile;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    r1 = dyn tempfile[, fileext]("women", ".rds");
    check L6() else D1();
  D1():
    deopt 8 [r1];
  L6():
    st fil = r1;
    saveRDS = ldf saveRDS;
    check L7() else D2();
  D2():
    deopt 11 [];
  L7():
    p = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      return women1;
    };
    p1 = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r4 = dyn saveRDS(p, p1);
    check L8() else D3();
  D3():
    deopt 14 [r4];
  L8():
    readRDS = ldf readRDS;
    check L9() else D4();
  D4():
    deopt 16 [];
  L9():
    p2 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r6 = dyn readRDS(p2);
    check L10() else D5();
  D5():
    deopt 18 [r6];
  L10():
    st women2 = r6;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0():
    gzfile = ldf gzfile;
    check L16() else D9();
  L11():
    women2 = ld women;
    check L13() else D6();
  L12():
    r7 = dyn base(<sym women>, <sym women2>);
    goto L0();
  D6():
    deopt 22 [women2];
  D9():
    deopt 36 [];
  L13():
    women3 = force? women2;
    checkMissing(women3);
    women4 = ld women2;
    check L14() else D7();
  L16():
    p3 = prom<V +>{
      fil4 = ld fil;
      fil5 = force? fil4;
      checkMissing(fil5);
      return fil5;
    };
    r11 = dyn gzfile(p3);
    check L17() else D10();
  D7():
    deopt 24 [women4];
  D10():
    deopt 38 [r11];
  L14():
    women5 = force? women4;
    checkMissing(women5);
    identical = ldf identical in base;
    r9 = dyn identical(women3, women5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L15() else D8();
  L17():
    st con = r11;
    readRDS1 = ldf readRDS;
    check L18() else D11();
  D8():
    deopt 34 [r9];
  D11():
    deopt 41 [];
  L15():
    goto L0();
  L18():
    p4 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r13 = dyn readRDS1(p4);
    check L19() else D12();
  D12():
    deopt 43 [r13];
  L19():
    close = ldf close;
    check L20() else D13();
  D13():
    deopt 45 [];
  L20():
    p5 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r15 = dyn close(p5);
    check L21() else D14();
  D14():
    deopt 47 [r15];
  L21():
    gzfile1 = ldf gzfile;
    check L22() else D15();
  D15():
    deopt 49 [];
  L22():
    p6 = prom<V +>{
      fil6 = ld fil;
      fil7 = force? fil6;
      checkMissing(fil7);
      return fil7;
    };
    r17 = dyn gzfile1(p6, "rb");
    check L23() else D16();
  D16():
    deopt 52 [r17];
  L23():
    st con = r17;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L1():
    close1 = ldf close;
    check L30() else D21();
  L24():
    unserialize = ldf unserialize;
    check L26() else D17();
  L25():
    r18 = dyn base1(<lang unserialize(con)>, <sym women>);
    goto L1();
  D17():
    deopt 57 [];
  D21():
    deopt 72 [];
  L26():
    p7 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    r21 = dyn unserialize(p7);
    check L27() else D18();
  L30():
    p8 = prom<V +>{
      con6 = ld con;
      con7 = force? con6;
      checkMissing(con7);
      return con7;
    };
    r24 = dyn close1(p8);
    check L31() else D22();
  D18():
    deopt 59 [r21];
  D22():
    deopt 74 [r24];
  L27():
    women6 = ld women;
    check L28() else D19();
  L31():
    gzfile2 = ldf gzfile;
    check L32() else D23();
  D19():
    deopt 60 [women6];
  D23():
    deopt 76 [];
  L28():
    women7 = force? women6;
    checkMissing(women7);
    identical1 = ldf identical in base;
    r22 = dyn identical1(r21, women7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L29() else D20();
  L32():
    p9 = prom<V +>{
      fil8 = ld fil;
      fil9 = force? fil8;
      checkMissing(fil9);
      return fil9;
    };
    r26 = dyn gzfile2(p9, "rb");
    check L33() else D24();
  D20():
    deopt 70 [r22];
  D24():
    deopt 79 [r26];
  L29():
    goto L1();
  L33():
    st con = r26;
    readBin = ldf readBin;
    check L34() else D25();
  D25():
    deopt 82 [];
  L34():
    p10 = prom<V +>{
      con8 = ld con;
      con9 = force? con8;
      checkMissing(con9);
      return con9;
    };
    r28 = dyn readBin[, , n](p10, "raw", 10000.0);
    check L35() else D26();
  D26():
    deopt 87 [r28];
  L35():
    st wm = r28;
    close2 = ldf close;
    check L36() else D27();
  D27():
    deopt 90 [];
  L36():
    p11 = prom<V +>{
      con10 = ld con;
      con11 = force? con10;
      checkMissing(con11);
      return con11;
    };
    r30 = dyn close2(p11);
    check L37() else D28();
  D28():
    deopt 92 [r30];
  L37():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L2():
    tempfile1 = ldf tempfile;
    check L44() else D33();
  L38():
    unserialize1 = ldf unserialize;
    check L40() else D29();
  L39():
    r31 = dyn base2(<lang unserialize(wm)>, <sym women>);
    goto L2();
  D29():
    deopt 96 [];
  D33():
    deopt 111 [];
  L40():
    p12 = prom<V +>{
      wm = ld wm;
      wm1 = force? wm;
      checkMissing(wm1);
      return wm1;
    };
    r34 = dyn unserialize1(p12);
    check L41() else D30();
  L44():
    r36 = dyn tempfile1("women");
    check L45() else D34();
  D30():
    deopt 98 [r34];
  D34():
    deopt 113 [r36];
  L41():
    women8 = ld women;
    check L42() else D31();
  L45():
    st fil2 = r36;
    file = ldf file;
    check L46() else D35();
  D31():
    deopt 99 [women8];
  D35():
    deopt 116 [];
  L42():
    women9 = force? women8;
    checkMissing(women9);
    identical2 = ldf identical in base;
    r35 = dyn identical2(r34, women9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L43() else D32();
  L46():
    p13 = prom<V +>{
      fil10 = ld fil2;
      fil11 = force? fil10;
      checkMissing(fil11);
      return fil11;
    };
    r38 = dyn file(p13, "w");
    check L47() else D36();
  D32():
    deopt 109 [r35];
  D36():
    deopt 119 [r38];
  L43():
    goto L2();
  L47():
    st con = r38;
    serialize = ldf serialize;
    check L48() else D37();
  D37():
    deopt 122 [];
  L48():
    p14 = prom<V +>{
      women10 = ld women;
      women11 = force? women10;
      checkMissing(women11);
      return women11;
    };
    p15 = prom<V +>{
      con12 = ld con;
      con13 = force? con12;
      checkMissing(con13);
      return con13;
    };
    r41 = dyn serialize(p14, p15);
    check L49() else D38();
  D38():
    deopt 125 [r41];
  L49():
    close3 = ldf close;
    check L50() else D39();
  D39():
    deopt 127 [];
  L50():
    p16 = prom<V +>{
      con14 = ld con;
      con15 = force? con14;
      checkMissing(con15);
      return con15;
    };
    r43 = dyn close3(p16);
    check L51() else D40();
  D40():
    deopt 129 [r43];
  L51():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L3():
    tempfile2 = ldf tempfile;
    check L58() else D45();
  L52():
    women12 = ld women;
    check L54() else D41();
  L53():
    r44 = dyn base3(<sym women>, <lang readRDS(fil2)>);
    goto L3();
  D41():
    deopt 132 [women12];
  D45():
    deopt 148 [];
  L54():
    women13 = force? women12;
    checkMissing(women13);
    readRDS2 = ldf readRDS;
    check L55() else D42();
  L58():
    r49 = dyn tempfile2("women");
    check L59() else D46();
  D42():
    deopt 135 [];
  D46():
    deopt 150 [r49];
  L55():
    p17 = prom<V +>{
      fil12 = ld fil2;
      fil13 = force? fil12;
      checkMissing(fil13);
      return fil13;
    };
    r47 = dyn readRDS2(p17);
    check L56() else D43();
  L59():
    st fil3 = r49;
    bzfile = ldf bzfile;
    check L60() else D47();
  D43():
    deopt 137 [r47];
  D47():
    deopt 153 [];
  L56():
    identical3 = ldf identical in base;
    r48 = dyn identical3(women13, r47, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L57() else D44();
  L60():
    p18 = prom<V +>{
      fil14 = ld fil3;
      fil15 = force? fil14;
      checkMissing(fil15);
      return fil15;
    };
    r51 = dyn bzfile(p18, "w");
    check L61() else D48();
  D44():
    deopt 146 [r48];
  D48():
    deopt 156 [r51];
  L57():
    goto L3();
  L61():
    st con = r51;
    serialize1 = ldf serialize;
    check L62() else D49();
  D49():
    deopt 159 [];
  L62():
    p19 = prom<V +>{
      women14 = ld women;
      women15 = force? women14;
      checkMissing(women15);
      return women15;
    };
    p20 = prom<V +>{
      con16 = ld con;
      con17 = force? con16;
      checkMissing(con17);
      return con17;
    };
    r54 = dyn serialize1(p19, p20);
    check L63() else D50();
  D50():
    deopt 162 [r54];
  L63():
    close4 = ldf close;
    check L64() else D51();
  D51():
    deopt 164 [];
  L64():
    p21 = prom<V +>{
      con18 = ld con;
      con19 = force? con18;
      checkMissing(con19);
      return con19;
    };
    r56 = dyn close4(p21);
    check L65() else D52();
  D52():
    deopt 166 [r56];
  L65():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L4():
    unlink = ldf unlink;
    check L72() else D57();
  L66():
    women16 = ld women;
    check L68() else D53();
  L67():
    r57 = dyn base4(<sym women>, <lang readRDS(fil3)>);
    goto L4();
  D53():
    deopt 169 [women16];
  D57():
    deopt 185 [];
  L68():
    women17 = force? women16;
    checkMissing(women17);
    readRDS3 = ldf readRDS;
    check L69() else D54();
  L72():
    p23 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      fil18 = ld fil;
      fil19 = force? fil18;
      checkMissing(fil19);
      fil20 = ld fil2;
      fil21 = force? fil20;
      checkMissing(fil21);
      fil22 = ld fil3;
      fil23 = force? fil22;
      checkMissing(fil23);
      c = ldf c in base;
      r64 = dyn c(fil19, fil21, fil23);
      goto L0(r64);
    L2():
      r62 = dyn base5(<sym fil>, <sym fil2>, <sym fil3>);
      goto L0(r62);
    };
    r66 = dyn unlink(p23);
    check L73() else D58();
  D54():
    deopt 172 [];
  D58():
    deopt 187 [r66];
  L69():
    p22 = prom<V +>{
      fil16 = ld fil3;
      fil17 = force? fil16;
      checkMissing(fil17);
      return fil17;
    };
    r60 = dyn readRDS3(p22);
    check L70() else D55();
  L73():
    popenv;
    return r66;
  D55():
    deopt 174 [r60];
  L70():
    identical4 = ldf identical in base;
    r61 = dyn identical4(women17, r60, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L71() else D56();
  D56():
    deopt 183 [r61];
  L71():
    goto L4();
  }
}
fun inner1910579422(file, refhook) {
  (reg file:*, reg refhook:*) -+> V { var file:*, var refhook:*, reg refhook_isMissing:L, reg refhook_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg gzfile:cls, reg file3:*, reg file4:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg on_exit:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg file5:*, reg file6:V, reg inherits:cls, reg r10:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg file7:*, reg file8:V, reg inherits1:cls, reg r13:V, reg c3:L, reg gzcon:cls, reg file9:*, reg file10:V, reg p1:p(V +), reg r15:V, reg r16:V, reg file11:*, reg file12:V, reg stop:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg con:*, reg con1:V, reg refhook1:*, reg refhook2:V, reg unserializeFromConn:cls, reg r20:V |
    mkenv;
    st file = file;
    refhook_isMissing = missing.0(refhook);
    if refhook_isMissing then L0(NULL) else L0(refhook);
  L0(refhook_orDefault):
    st refhook = refhook_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L14() else L2();
  L11():
    file1 = ld file;
    check L13() else D0();
  L12():
    r = dyn base(<sym file>);
    goto L1(r);
  D0():
    deopt 1 [file1];
  L2():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L4():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L13():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L1(c);
  L14():
    gzfile = ldf gzfile;
    check L15() else D1();
  D1():
    deopt 5 [];
  L5(r9):
    c2 = `as.logical`(r9);
    if c2 then L24() else L6();
  L10(r19):
    popenv;
    return r19;
  L15():
    p = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r3 = dyn gzfile(p, "rb");
    check L16() else D2();
  L20():
    file5 = ld file;
    check L22() else D3();
  L21():
    r8 = dyn base2(<sym file>, "connection");
    goto L5(r8);
  L37():
    con = ld con;
    check L39() else D12();
  L38():
    r18 = dyn base4(<lang unserializeFromConn(con, refhook)>);
    goto L10(r18);
  D2():
    deopt 8 [r3];
  D3():
    deopt 15 [file5];
  D12():
    deopt 42 [con];
  L6():
    stop = ldf stop;
    check L35() else D10();
  L16():
    st con = r3;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L22():
    file6 = force? file5;
    checkMissing(file6);
    inherits = ldf inherits in base;
    r10 = dyn inherits(file6, "connection", FALSE);
    check L23() else D4();
  L24():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L39():
    con1 = force? con;
    checkMissing(con1);
    refhook1 = ld refhook;
    check L40() else D13();
  D4():
    deopt 20 [r10];
  D10():
    deopt 37 [];
  D13():
    deopt 44 [refhook1];
  L3(r5):
    goto L4();
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L29() else L8();
  L17():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(con)>);
    goto L3(r6);
  L18():
    r4 = dyn base1(<lang close(con)>);
    goto L3(r4);
  L23():
    goto L5(r10);
  L25():
    file7 = ld file;
    check L27() else D5();
  L26():
    r11 = dyn base3(<sym file>, "url");
    goto L7(r11);
  L35():
    r17 = dyn stop("bad 'file' argument");
    check L36() else D11();
  L40():
    refhook2 = force? refhook1;
    checkMissing(refhook2);
    unserializeFromConn = ldf unserializeFromConn in base;
    r20 = dyn unserializeFromConn(con1, refhook2);
    check L41() else D14();
  D5():
    deopt 23 [file7];
  D11():
    deopt 39 [r17];
  D14():
    deopt 47 [r20];
  L8():
    file11 = ld file;
    check L33() else D9();
  L9(r16):
    st con = r16;
    goto L4();
  L27():
    file8 = force? file7;
    checkMissing(file8);
    inherits1 = ldf inherits in base;
    r13 = dyn inherits1(file8, "url", FALSE);
    check L28() else D6();
  L29():
    gzcon = ldf gzcon;
    check L30() else D7();
  L36():
    goto L4();
  L41():
    goto L10(r20);
  D6():
    deopt 28 [r13];
  D7():
    deopt 30 [];
  D9():
    deopt 33 [file11];
  L28():
    goto L7(r13);
  L30():
    p1 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r15 = dyn gzcon(p1);
    check L31() else D8();
  L33():
    file12 = force? file11;
    checkMissing(file12);
    goto L9(file12);
  D8():
    deopt 32 [r15];
  L31():
    goto L9(r15);
  }
}