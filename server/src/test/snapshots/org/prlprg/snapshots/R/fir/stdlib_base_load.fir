fun main() {
  () -+> V { reg r:cls, reg setwd:cls, reg tempdir:cls, reg r1:V, reg p:p(V +), reg r3:V, reg save:cls, reg ls:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg rm:cls, reg xx:*, reg xx1:V, reg p2:p(V +), reg r8:V, reg r9:cls, reg r10:cls, reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg r14:V, reg load:cls, reg r15:V, reg xx2:*, reg xx3:V, reg rm1:cls, reg xx4:*, reg xx5:V, reg p3:p(V +), reg r17:V, reg attach:cls, reg r18:V, reg ls1:cls, reg r19:V, reg detach:cls, reg r20:V, reg unlink:cls, reg r21:V, reg setwd1:cls, reg oldwd:*, reg oldwd1:V, reg p4:p(V +), reg r23:V |
    mkenv;
    r = clos `inner-482789552`;
    st load = r;
    setwd = ldf setwd;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r1 = dyn tempdir();
      return r1;
    };
    r3 = dyn setwd(p);
    check L2() else D1();
  D1():
    deopt 6 [r3];
  L2():
    st oldwd = r3;
    st xx = 3.141592653589793;
    save = ldf save;
    check L3() else D2();
  D2():
    deopt 12 [];
  L3():
    p1 = prom<V +>{
      ls = ldf ls;
      r4 = dyn ls[`all.names`](TRUE);
      return r4;
    };
    r6 = dyn save[list, file](p1, "all.rda");
    check L4() else D3();
  D3():
    deopt 17 [r6];
  L4():
    rm = ldf rm;
    check L5() else D4();
  D4():
    deopt 19 [];
  L5():
    p2 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    r8 = dyn rm(p2);
    check L6() else D5();
  D5():
    deopt 21 [r8];
  L6():
    r9 = clos inner560854305;
    checkFun.0(r9);
    r10 = r9 as cls;
    r11 = dyn r10();
    check L7() else D6();
  D6():
    deopt 25 [r11];
  L7():
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r13):
    st xx = r13;
    load = ldf load;
    check L10() else D7();
  L8():
    r14 = exp(<int 1, 2, 3>);
    goto L0(r14);
  L9():
    r12 = dyn base(<lang `:`(1.0, 3.0)>);
    goto L0(r12);
  D7():
    deopt 32 [];
  L10():
    r15 = dyn load("all.rda");
    check L11() else D8();
  D8():
    deopt 34 [r15];
  L11():
    xx2 = ld xx;
    check L12() else D9();
  D9():
    deopt 35 [xx2];
  L12():
    xx3 = force? xx2;
    checkMissing(xx3);
    rm1 = ldf rm;
    check L13() else D10();
  D10():
    deopt 38 [];
  L13():
    p3 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r17 = dyn rm1(p3);
    check L14() else D11();
  D11():
    deopt 40 [r17];
  L14():
    attach = ldf attach;
    check L15() else D12();
  D12():
    deopt 42 [];
  L15():
    r18 = dyn attach("all.rda");
    check L16() else D13();
  D13():
    deopt 44 [r18];
  L16():
    ls1 = ldf ls;
    check L17() else D14();
  D14():
    deopt 46 [];
  L17():
    r19 = dyn ls1[pos](2.0);
    check L18() else D15();
  D15():
    deopt 49 [r19];
  L18():
    detach = ldf detach;
    check L19() else D16();
  D16():
    deopt 51 [];
  L19():
    r20 = dyn detach("file:all.rda");
    check L20() else D17();
  D17():
    deopt 53 [r20];
  L20():
    unlink = ldf unlink;
    check L21() else D18();
  D18():
    deopt 55 [];
  L21():
    r21 = dyn unlink("all.rda");
    check L22() else D19();
  D19():
    deopt 57 [r21];
  L22():
    setwd1 = ldf setwd;
    check L23() else D20();
  D20():
    deopt 59 [];
  L23():
    p4 = prom<V +>{
      oldwd = ld oldwd;
      oldwd1 = force? oldwd;
      checkMissing(oldwd1);
      return oldwd1;
    };
    r23 = dyn setwd1(p4);
    check L24() else D21();
  D21():
    deopt 61 [r23];
  L24():
    popenv;
    return r23;
  }
}
fun `inner-482789552`(file, envir, verbose) {
  (reg file:*, reg envir:*, reg verbose:*) -+> V { var file:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg gzfile:cls, reg file3:*, reg file4:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg on_exit:cls, reg r8:V, reg readChar:cls, reg con:*, reg con1:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg magic:*, reg magic1:V, reg length:cls, reg r13:V, reg r14:V, reg c2:L, reg stop:cls, reg r15:V, reg grepl:cls, reg magic2:*, reg magic3:V, reg p3:p(V +), reg r18:V, reg r19:V, reg c3:L, reg grepl1:cls, reg magic4:*, reg magic5:V, reg p4:p(V +), reg r21:V, reg c4:L, reg stop1:cls, reg r22:V, reg warning:cls, reg sprintf:cls, reg sQuote:cls, reg basename:cls, reg file5:*, reg file6:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg gsub:cls, reg magic6:*, reg magic7:V, reg p8:p(V +), reg r30:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg file7:*, reg file8:V, reg envir1:*, reg envir2:V, reg load:cls, reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg file9:*, reg file10:V, reg inherits:cls, reg r43:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg file11:*, reg file12:V, reg inherits1:cls, reg r46:V, reg c6:L, reg c7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg c11:L, reg r48:V, reg file13:*, reg file14:V, reg inherits2:cls, reg r49:V, reg c12:L, reg c13:V, reg c15:L, reg file15:*, reg file16:V, reg file17:V, reg gzcon:cls, reg file18:*, reg file19:V, reg p11:p(V +), reg r51:V, reg stop2:cls, reg r52:V, reg verbose1:*, reg verbose2:V, reg c16:L, reg cat:cls, reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg con2:*, reg con3:V, reg envir3:*, reg envir4:V, reg verbose3:*, reg verbose4:V, reg loadFromConn2:cls, reg r57:V |
    mkenv;
    st file = file;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2(FALSE) else L2(verbose);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L3(r3):
    c1 = `as.logical`(r3);
    if c1 then L28() else L4();
  L25():
    file1 = ld file;
    check L27() else D0();
  L26():
    r2 = dyn base(<sym file>);
    goto L3(r2);
  D0():
    deopt 1 [file1];
  L4():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L14():
    verbose1 = ld verbose;
    check L85() else D31();
  L27():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L3(c);
  L28():
    gzfile = ldf gzfile;
    check L29() else D1();
  D1():
    deopt 5 [];
  D31():
    deopt 107 [verbose1];
  L15(r42):
    c5 = `as.logical`(r42);
    if c5 then L66() else L16();
  L29():
    p1 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r5 = dyn gzfile(p1);
    check L30() else D2();
  L62():
    file9 = ld file;
    check L64() else D20();
  L63():
    r41 = dyn base4(<sym file>, "connection");
    goto L15(r41);
  L85():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c16 = `as.logical`(verbose2);
    if c16 then L86() else L22();
  D2():
    deopt 7 [r5];
  D20():
    deopt 73 [file9];
  L16():
    stop2 = ldf stop;
    check L83() else D29();
  L22():
    goto L23();
  L23():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L30():
    st con = r5;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L64():
    file10 = force? file9;
    checkMissing(file10);
    inherits = ldf inherits in base;
    r43 = dyn inherits(file10, "connection", FALSE);
    check L65() else D21();
  L66():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L86():
    cat = ldf cat;
    check L87() else D32();
  D21():
    deopt 78 [r43];
  D29():
    deopt 104 [];
  D32():
    deopt 110 [];
  L5():
    readChar = ldf readChar;
    check L33() else D3();
  L17(r45):
    c6 = `as.logical`(r45);
    if c6 then L18(c6) else L71();
  L24(r56):
    popenv;
    return r56;
  L31():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang close(con)>);
    goto L5();
  L32():
    r6 = dyn base1(<lang close(con)>);
    goto L5();
  L65():
    goto L15(r43);
  L67():
    file11 = ld file;
    check L69() else D22();
  L68():
    r44 = dyn base5(<sym file>, "gzfile");
    goto L17(r44);
  L83():
    r52 = dyn stop2("bad 'file' argument");
    check L84() else D30();
  L87():
    r53 = dyn cat("Loading objects:\n");
    check L88() else D33();
  L90():
    con2 = ld con;
    check L92() else D34();
  L91():
    r55 = dyn base7(<lang loadFromConn2(con, envir, verbose)>);
    goto L24(r55);
  D3():
    deopt 13 [];
  D22():
    deopt 81 [file11];
  D30():
    deopt 106 [r52];
  D33():
    deopt 112 [r53];
  D34():
    deopt 117 [con2];
  L18(c7):
    c15 = `as.logical`(c7);
    if c15 then L77() else L20();
  L33():
    p2 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r10 = dyn readChar[, , useBytes](p2, 5, TRUE);
    check L34() else D4();
  L69():
    file12 = force? file11;
    checkMissing(file12);
    inherits1 = ldf inherits in base;
    r46 = dyn inherits1(file12, "gzfile", FALSE);
    check L70() else D23();
  L71():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L84():
    goto L14();
  L88():
    goto L23();
  L92():
    con3 = force? con2;
    checkMissing(con3);
    envir3 = ld envir;
    check L93() else D35();
  D4():
    deopt 18 [r10];
  D23():
    deopt 86 [r46];
  D35():
    deopt 119 [envir3];
  L19(c11, r48):
    c12 = `as.logical`(r48);
    c13 = `||`(c11, c12);
    goto L18(c13);
  L20():
    gzcon = ldf gzcon;
    check L80() else D27();
  L21(file17):
    st con = file17;
    goto L14();
  L34():
    st magic = r10;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L70():
    goto L17(r46);
  L72():
    file13 = ld file;
    check L74() else D24();
  L73():
    r47 = dyn base6(<sym file>, "gzcon");
    goto L19(c6, r47);
  L77():
    file15 = ld file;
    check L78() else D26();
  L93():
    envir4 = force? envir3;
    checkMissing(envir4);
    verbose3 = ld verbose;
    check L94() else D36();
  D24():
    deopt 89 [c6, file13];
  D26():
    deopt 96 [file15];
  D27():
    deopt 99 [];
  D36():
    deopt 121 [verbose3];
  L6(r12):
    r14 = `!`(r12);
    c2 = `as.logical`(r14);
    if c2 then L39() else L7();
  L35():
    magic = ld magic;
    check L37() else D5();
  L36():
    r11 = dyn base2(<sym magic>);
    goto L6(r11);
  L74():
    file14 = force? file13;
    checkMissing(file14);
    inherits2 = ldf inherits in base;
    r49 = dyn inherits2(file14, "gzcon", FALSE);
    check L75() else D25();
  L78():
    file16 = force? file15;
    checkMissing(file16);
    goto L21(file16);
  L80():
    p11 = prom<V +>{
      file18 = ld file;
      file19 = force? file18;
      checkMissing(file19);
      return file19;
    };
    r51 = dyn gzcon(p11);
    check L81() else D28();
  L94():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    loadFromConn2 = ldf loadFromConn2 in base;
    r57 = dyn loadFromConn2(con3, envir4, verbose4);
    check L95() else D37();
  D5():
    deopt 22 [magic];
  D25():
    deopt 94 [c6, r49];
  D28():
    deopt 101 [r51];
  D37():
    deopt 124 [r57];
  L7():
    goto L8();
  L8():
    grepl = ldf grepl;
    check L43() else D9();
  L37():
    magic1 = force? magic;
    checkMissing(magic1);
    length = ldf length in base;
    r13 = dyn length(magic1);
    check L38() else D6();
  L39():
    stop = ldf stop;
    check L40() else D7();
  L75():
    goto L19(c6, r49);
  L81():
    goto L21(r51);
  L95():
    goto L24(r57);
  D6():
    deopt 25 [r13];
  D7():
    deopt 28 [];
  D9():
    deopt 34 [];
  L38():
    goto L6(r13);
  L40():
    r15 = dyn stop("empty (zero-byte) input file");
    check L41() else D8();
  L43():
    p3 = prom<V +>{
      magic2 = ld magic;
      magic3 = force? magic2;
      checkMissing(magic3);
      return magic3;
    };
    r18 = dyn grepl("RD[ABX][2-9]\n", p3);
    check L44() else D10();
  D8():
    deopt 30 [r15];
  D10():
    deopt 37 [r18];
  L41():
    goto L8();
  L44():
    r19 = `!`(r18);
    c3 = `as.logical`(r19);
    if c3 then L45() else L9();
  L9():
    goto L14();
  L45():
    grepl1 = ldf grepl;
    check L46() else D11();
  D11():
    deopt 40 [];
  L46():
    p4 = prom<V +>{
      magic4 = ld magic;
      magic5 = force? magic4;
      checkMissing(magic5);
      return magic5;
    };
    r21 = dyn grepl1("RD[ABX][2-9]\r", p4);
    check L47() else D12();
  D12():
    deopt 43 [r21];
  L47():
    c4 = `as.logical`(r21);
    if c4 then L48() else L10();
  L10():
    goto L11();
  L11():
    warning = ldf warning;
    check L52() else D15();
  L48():
    stop1 = ldf stop;
    check L49() else D13();
  D13():
    deopt 45 [];
  D15():
    deopt 51 [];
  L49():
    r22 = dyn stop1("input has been corrupted, with LF replaced by CR");
    check L50() else D14();
  L52():
    p10 = prom<V +>{
      sprintf = ldf sprintf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          basename = ldf basename;
          p5 = prom<V +>{
            file5 = ld file;
            file6 = force? file5;
            checkMissing(file6);
            return file6;
          };
          r25 = dyn basename(p5);
          return r25;
        };
        r27 = dyn sQuote(p6);
        return r27;
      };
      p9 = prom<V +>{
        gsub = ldf gsub;
        p8 = prom<V +>{
          magic6 = ld magic;
          magic7 = force? magic6;
          checkMissing(magic7);
          return magic7;
        };
        r30 = dyn gsub("[\n\r]*", "", p8);
        return r30;
      };
      r32 = dyn sprintf("file %s has magic number '%s'\n", p7, p9);
      return r32;
    };
    r34 = dyn warning[, , , domain, `call.`](p10, "  ", "Use of save versions prior to 2 is deprecated", NA_LGL, FALSE);
    check L53() else D16();
  D14():
    deopt 47 [r22];
  D16():
    deopt 59 [r34];
  L50():
    goto L11();
  L53():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L12(r36):
    popenv;
    return r36;
  L54():
    file7 = ld file;
    check L56() else D17();
  L55():
    r35 = dyn base3(<lang load(file, envir)>);
    goto L12(r35);
  D17():
    deopt 62 [file7];
  L56():
    file8 = force? file7;
    checkMissing(file8);
    envir1 = ld envir;
    check L57() else D18();
  D18():
    deopt 64 [envir1];
  L57():
    envir2 = force? envir1;
    checkMissing(envir2);
    load = ldf load in base;
    r37 = dyn load(file8, envir2);
    check L58() else D19();
  D19():
    deopt 67 [r37];
  L58():
    goto L12(r37);
  }
}
fun inner560854305() {
  () -+> V { reg load:cls, reg r:V, reg ls:cls, reg r1:V |
    mkenv;
    load = ldf load;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn load("all.rda");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    ls = ldf ls;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    r1 = dyn ls();
    check L3() else D3();
  D3():
    deopt 6 [r1];
  L3():
    popenv;
    return r1;
  }
}