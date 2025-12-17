fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner604369832;
    st `.check_package_parseRd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner604369832(dir, silent, def_enc, minlevel) {
  (reg dir:*, reg silent:*, reg def_enc:*, reg minlevel:*) -+> V { var dir:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var def_enc:*, reg def_enc_isMissing:L, reg def_enc_orDefault:*, var minlevel:*, reg minlevel_isMissing:L, reg minlevel_orDefault:*, reg p:p(V +), reg file_exists:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg c:L, reg read_dcf:cls, reg dfile:*, reg dfile1:V, reg p3:p(V +), reg r6:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r13:V, reg c3:L, reg r14:V, reg loadPkgRdMacros:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r17:V, reg Sys_getenv:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg on_exit:cls, reg r21:V, reg Sys_setenv:cls, reg normalizePath:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg list_files_with_type:cls, reg file_path1:cls, reg dir7:*, reg dir8:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg c4:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg file_exists1:cls, reg file_path2:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg r37:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg nfile:*, reg nfile1:V, reg pg:*, reg pg1:V, reg c6:cls, reg r40:V, reg character:cls, reg r42:V, reg pg2:*, reg pg3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg tryCatch:cls, reg suppressMessages:cls, reg f:*, reg f1:V, reg nfile2:*, reg nfile3:V, reg r43:V, reg c8:L, reg checkRd:cls, reg f2:*, reg f3:V, reg p12:p(V +), reg r45:V, reg checkRd1:cls, reg f4:*, reg f5:V, reg p13:p(V +), reg enc2:*, reg enc3:V, reg p14:p(V +), reg def_enc1:*, reg def_enc2:V, reg p15:p(V +), reg macros:*, reg macros1:V, reg p16:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg c9:cls, reg r52:V, reg p17:p(V +), reg r54:V, reg p18:p(V +), reg r56:V, reg p19:p(V +), reg identity:*, reg identity1:V, reg p20:p(V +), reg r59:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg i7:I, reg r61:V, reg tmp:*, reg tmp1:V, reg inherits:cls, reg r62:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg i12:I, reg r64:V, reg bad:*, reg bad1:V, reg f6:*, reg f7:V, reg c11:cls, reg r65:V, reg silent1:*, reg silent2:V, reg r66:V, reg c12:L, reg message:cls, reg geterrmessage:cls, reg r67:V, reg p21:p(V +), reg r69:V, reg i15:I, reg r70:V, reg i16:I, reg print:cls, reg tmp2:*, reg tmp3:V, reg p22:p(V +), reg minlevel1:*, reg minlevel2:V, reg p23:p(V +), reg r74:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg bad2:*, reg bad3:V, reg length:cls, reg r77:V, reg c13:L, reg sQuote:cls, reg sub:cls, reg bad4:*, reg bad5:V, reg p24:p(V +), reg r79:V, reg p25:p(V +), reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r83:V, reg r84:V, reg bad6:*, reg bad7:V, reg length1:cls, reg r85:V, reg r86:V, reg c14:L, reg cat:cls, reg paste:cls, reg bad8:*, reg bad9:V, reg p26:p(V +), reg r88:V, reg p27:p(V +), reg r90:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r92:V, reg r93:V, reg bad10:*, reg bad11:V, reg length2:cls, reg r94:V, reg c15:L, reg cat1:cls, reg bad12:*, reg bad13:V, reg p28:p(V +), reg r96:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg invisible:cls, reg r99:V |
    mkenv;
    st dir = dir;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L0(FALSE) else L0(silent);
  L0(silent_orDefault):
    st silent = silent_orDefault;
    def_enc_isMissing = missing.0(def_enc);
    if def_enc_isMissing then L1(FALSE) else L1(def_enc);
  L1(def_enc_orDefault):
    st def_enc = def_enc_orDefault;
    minlevel_isMissing = missing.0(minlevel);
    if minlevel_isMissing then L2() else L3(minlevel);
  L2():
    p = prom<V +>{
      return -1.0;
    };
    goto L3(p);
  L3(minlevel_orDefault):
    st minlevel = minlevel_orDefault;
    file_exists = ldf `file.exists`;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r2 = dyn file_path(p1, "DESCRIPTION");
      st dfile = r2;
      invisible.0();
      return r2;
    };
    r4 = dyn file_exists(p2);
    check L33() else D1();
  D1():
    deopt 3 [r4];
  L33():
    c = `as.logical`(r4);
    if c then L34() else L4();
  L4():
    st enc = "ASCII";
    goto L10();
  L10():
    loadPkgRdMacros = ldf loadPkgRdMacros;
    check L50() else D6();
  L34():
    read_dcf = ldf `read.dcf`;
    check L35() else D2();
  D2():
    deopt 5 [];
  D6():
    deopt 32 [];
  L35():
    p3 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r6 = dyn read_dcf(p3);
    check L36() else D3();
  L50():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r17 = dyn loadPkgRdMacros(p4);
    check L51() else D7();
  D3():
    deopt 7 [r6];
  D7():
    deopt 34 [r17];
  L36():
    c1 = `is.object`(r6);
    if c1 then L37() else L38();
  L51():
    st macros = r17;
    Sys_getenv = ldf `Sys.getenv`;
    check L52() else D8();
  D8():
    deopt 37 [];
  L5(dx1):
    c2 = `is.object`(dx1);
    if c2 then L40() else L41(dx1);
  L37():
    dr = tryDispatchBuiltin.1("[", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38();
  L38():
    __ = ldf `[` in base;
    r9 = dyn __(r6, 1, <missing>);
    goto L5(r9);
  L52():
    r18 = dyn Sys_getenv[, unset]("_R_RD_MACROS_PACKAGE_DIR_", NA_LGL);
    check L53() else D9();
  D9():
    deopt 41 [r18];
  L6(dx5):
    st enc = dx5;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L40():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(dx3):
    __1 = ldf `[` in base;
    r10 = dyn __1(dx3, "Encoding");
    goto L6(r10);
  L53():
    st oenv = r18;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L47() else L8();
  L11():
    Sys_setenv = ldf `Sys.setenv`;
    check L56() else D10();
  L42():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx4);
  L43():
    enc = ld enc;
    check L45() else D4();
  L44():
    r11 = dyn base(<sym enc>);
    goto L7(r11);
  L54():
    on_exit = ldf `on.exit` in base;
    r21 = dyn on_exit(<lang if(`!`(is.na(oenv)), Sys.setenv(_R_RD_MACROS_PACKAGE_DIR_=oenv), Sys.unsetenv("_R_RD_MACROS_PACKAGE_DIR_"))>);
    goto L11();
  L55():
    r19 = dyn base1(<lang if(`!`(is.na(oenv)), Sys.setenv(_R_RD_MACROS_PACKAGE_DIR_=oenv), Sys.unsetenv("_R_RD_MACROS_PACKAGE_DIR_"))>);
    goto L11();
  D4():
    deopt 18 [enc];
  D10():
    deopt 47 [];
  L8():
    st def_enc = TRUE;
    goto L9(TRUE);
  L9(r14):
    goto L10();
  L45():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(enc1);
    check L46() else D5();
  L47():
    st enc = "ASCII";
    goto L9("ASCII");
  L56():
    p6 = prom<V +>{
      normalizePath = ldf normalizePath;
      p5 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r23 = dyn normalizePath(p5);
      return r23;
    };
    r25 = dyn Sys_setenv[_R_RD_MACROS_PACKAGE_DIR_](p6);
    check L57() else D11();
  D5():
    deopt 21 [r13];
  D11():
    deopt 50 [r25];
  L46():
    goto L7(r13);
  L57():
    list_files_with_type = ldf list_files_with_type;
    check L58() else D12();
  D12():
    deopt 52 [];
  L58():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r27 = dyn file_path1(p7, "man");
      return r27;
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c4 = ldf c in base;
      r31 = dyn c4("unix", "windows");
      goto L0(r31);
    L2():
      r29 = dyn base2("unix", "windows");
      goto L0(r29);
    };
    r33 = dyn list_files_with_type[, , `full.names`, OS_subdirs](p8, "docs", TRUE, p9);
    check L59() else D13();
  D13():
    deopt 59 [r33];
  L59():
    st pg = r33;
    file_exists1 = ldf `file.exists`;
    check L60() else D14();
  D14():
    deopt 62 [];
  L60():
    p11 = prom<V +>{
      file_path2 = ldf `file.path`;
      p10 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r35 = dyn file_path2(p10, "inst", "NEWS.Rd");
      st nfile = r35;
      invisible.0();
      return r35;
    };
    r37 = dyn file_exists1(p11);
    check L61() else D15();
  D15():
    deopt 64 [r37];
  L61():
    c5 = `as.logical`(r37);
    if c5 then L62() else L12();
  L12():
    goto L14();
  L14():
    character = ldf character;
    check L69() else D19();
  L62():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  D19():
    deopt 77 [];
  L13(r39):
    st pg = r39;
    goto L14();
  L63():
    nfile = ld nfile;
    check L65() else D16();
  L64():
    r38 = dyn base3(<sym nfile>, <sym pg>);
    goto L13(r38);
  L69():
    r42 = dyn character();
    check L70() else D20();
  D16():
    deopt 67 [nfile];
  D20():
    deopt 78 [r42];
  L65():
    nfile1 = force? nfile;
    checkMissing(nfile1);
    pg = ld pg;
    check L66() else D17();
  L70():
    st bad = r42;
    pg2 = ld pg;
    check L71() else D21();
  D17():
    deopt 69 [pg];
  D21():
    deopt 80 [pg2];
  L66():
    pg1 = force? pg;
    checkMissing(pg1);
    c6 = ldf c in base;
    r40 = dyn c6(nfile1, pg1);
    check L67() else D18();
  L71():
    pg3 = force? pg2;
    checkMissing(pg3);
    s = toForSeq(pg3);
    l = length(s);
    i = 0;
    goto L15(i);
  D18():
    deopt 72 [r40];
  L15(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L72() else L22();
  L67():
    goto L13(r40);
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    tryCatch = ldf tryCatch;
    check L73() else D22();
  L72():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L93() else L94();
  D22():
    deopt 83 [i2];
  L23(r76):
    c13 = `as.logical`(r76);
    if c13 then L97() else L24();
  L73():
    p19 = prom<V +>{
      suppressMessages = ldf suppressMessages;
      p18 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        nfile2 = ld nfile;
        nfile3 = force? nfile2;
        checkMissing(nfile3);
        r43 = `==`(f1, nfile3);
        c8 = `as.logical`(r43);
        if c8 then L1() else L0();
      L0():
        checkRd1 = ldf checkRd;
        p13 = prom<V +>{
          f4 = ld f;
          f5 = force? f4;
          checkMissing(f5);
          return f5;
        };
        p14 = prom<V +>{
          enc2 = ld enc;
          enc3 = force? enc2;
          checkMissing(enc3);
          return enc3;
        };
        p15 = prom<V +>{
          def_enc1 = ld def_enc;
          def_enc2 = force? def_enc1;
          checkMissing(def_enc2);
          return def_enc2;
        };
        p16 = prom<V +>{
          macros = ld macros;
          macros1 = force? macros;
          checkMissing(macros1);
          return macros1;
        };
        p17 = prom<V +>{
          sym4 = ldf c;
          base4 = ldf c in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r51):
          return r51;
        L1():
          c9 = ldf c in base;
          r52 = dyn c9("build", "install", "render");
          goto L0(r52);
        L2():
          r50 = dyn base4("build", "install", "render");
          goto L0(r50);
        };
        r54 = dyn checkRd1[, encoding, def_enc, macros, stages](p13, p14, p15, p16, p17);
        return r54;
      L1():
        checkRd = ldf checkRd;
        p12 = prom<V +>{
          f2 = ld f;
          f3 = force? f2;
          checkMissing(f3);
          return f3;
        };
        r45 = dyn checkRd[, encoding, def_enc, stages](p12, "UTF-8", TRUE, "install");
        return r45;
      };
      r56 = dyn suppressMessages(p18);
      return r56;
    };
    p20 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r59 = dyn tryCatch[, error](p19, p20);
    check L74() else D23();
  L93():
    bad2 = ld bad;
    check L95() else D34();
  L94():
    r75 = dyn base7(<sym bad>);
    goto L23(r75);
  D23():
    deopt 87 [i2, r59];
  D34():
    deopt 126 [bad2];
  L24():
    goto L25();
  L25():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L101() else L102();
  L74():
    st tmp = r59;
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L95():
    bad3 = force? bad2;
    checkMissing(bad3);
    length = ldf length in base;
    r77 = dyn length(bad3);
    check L96() else D35();
  L97():
    sQuote = ldf sQuote;
    check L98() else D36();
  D35():
    deopt 129 [r77];
  D36():
    deopt 131 [];
  L16(i7, r61):
    c10 = `as.logical`(r61);
    if c10 then L79() else L17();
  L26(r84):
    r86 = `>`(r84, 1);
    c14 = `as.logical`(r86);
    if c14 then L105() else L27();
  L75():
    tmp = ld tmp;
    check L77() else D24();
  L76():
    r60 = dyn base5(<sym tmp>, "error");
    goto L16(i2, r60);
  L96():
    goto L23(r77);
  L98():
    p25 = prom<V +>{
      sub = ldf sub;
      p24 = prom<V +>{
        bad4 = ld bad;
        bad5 = force? bad4;
        checkMissing(bad5);
        return bad5;
      };
      r79 = dyn sub(".*/", "", p24);
      return r79;
    };
    r81 = dyn sQuote(p25);
    check L99() else D37();
  L101():
    bad6 = ld bad;
    check L103() else D38();
  L102():
    r83 = dyn base8(<sym bad>);
    goto L26(r83);
  D24():
    deopt 91 [i2, tmp];
  D37():
    deopt 133 [r81];
  D38():
    deopt 139 [bad6];
  L17():
    print = ldf print;
    check L91() else D32();
  L21(i16):
    goto L15(i16);
  L27():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L28():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L117() else L118();
  L77():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    inherits = ldf inherits in base;
    r62 = dyn inherits(tmp1, "error", FALSE);
    check L78() else D25();
  L79():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L99():
    st bad = r81;
    goto L25();
  L103():
    bad7 = force? bad6;
    checkMissing(bad7);
    length1 = ldf length in base;
    r85 = dyn length1(bad7);
    check L104() else D39();
  L105():
    cat = ldf cat;
    check L106() else D40();
  D25():
    deopt 96 [i2, r62];
  D32():
    deopt 116 [i7];
  D39():
    deopt 142 [r85];
  D40():
    deopt 146 [];
  L18(i12, r64):
    st bad = r64;
    silent1 = ld silent;
    check L85() else D29();
  L29(r93):
    c15 = `as.logical`(r93);
    if c15 then L113() else L30();
  L31(r98):
    popenv;
    return r98;
  L78():
    goto L16(i2, r62);
  L80():
    bad = ld bad;
    check L82() else D26();
  L81():
    r63 = dyn base6(<sym bad>, <sym f>);
    goto L18(i7, r63);
  L91():
    p22 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      return tmp3;
    };
    p23 = prom<V +>{
      minlevel1 = ld minlevel;
      minlevel2 = force? minlevel1;
      checkMissing(minlevel2);
      return minlevel2;
    };
    r74 = dyn print[, minlevel](p22, p23);
    check L92() else D33();
  L104():
    goto L26(r85);
  L106():
    p27 = prom<V +>{
      paste = ldf paste;
      p26 = prom<V +>{
        bad8 = ld bad;
        bad9 = force? bad8;
        checkMissing(bad9);
        return bad9;
      };
      r88 = dyn paste[, collapse](p26, ", ");
      return r88;
    };
    r90 = dyn cat[, , , sep]("problems found in ", p27, "\n", "");
    check L107() else D41();
  L109():
    bad10 = ld bad;
    check L111() else D42();
  L110():
    r92 = dyn base9(<sym bad>);
    goto L29(r92);
  L117():
    invisible = ldf invisible in base;
    r99 = dyn invisible();
    check L119() else D46();
  L118():
    r97 = dyn base10();
    goto L31(r97);
  D26():
    deopt 99 [i7, bad];
  D29():
    deopt 106 [i12, silent1];
  D33():
    deopt 120 [i7, r74];
  D41():
    deopt 152 [r90];
  D42():
    deopt 155 [bad10];
  D46():
    deopt 172 [r99];
  L30():
    goto L28();
  L82():
    bad1 = force? bad;
    checkMissing(bad1);
    f6 = ld f;
    check L83() else D27();
  L85():
    silent2 = force? silent1;
    checkMissing(silent2);
    r66 = `!`(silent2);
    c12 = `as.logical`(r66);
    if c12 then L86() else L19();
  L92():
    goto L21(i7);
  L107():
    goto L28();
  L111():
    bad11 = force? bad10;
    checkMissing(bad11);
    length2 = ldf length in base;
    r94 = dyn length2(bad11);
    check L112() else D43();
  L113():
    cat1 = ldf cat;
    check L114() else D44();
  L119():
    goto L31(r99);
  D27():
    deopt 101 [i7, f6];
  D43():
    deopt 158 [r94];
  D44():
    deopt 160 [];
  L19():
    goto L20(i12, NULL);
  L20(i15, r70):
    goto L21(i15);
  L83():
    f7 = force? f6;
    checkMissing(f7);
    c11 = ldf c in base;
    r65 = dyn c11(bad1, f7);
    check L84() else D28();
  L86():
    message = ldf message;
    check L87() else D30();
  L112():
    goto L29(r94);
  L114():
    p28 = prom<V +>{
      bad12 = ld bad;
      bad13 = force? bad12;
      checkMissing(bad13);
      return bad13;
    };
    r96 = dyn cat1[, , , sep]("problem found in ", p28, "\n", "");
    check L115() else D45();
  D28():
    deopt 104 [i7, r65];
  D30():
    deopt 110 [i12];
  D45():
    deopt 166 [r96];
  L84():
    goto L18(i7, r65);
  L87():
    p21 = prom<V +>{
      geterrmessage = ldf geterrmessage;
      r67 = dyn geterrmessage();
      return r67;
    };
    r69 = dyn message(p21);
    check L88() else D31();
  L115():
    goto L28();
  D31():
    deopt 112 [i12, r69];
  L88():
    goto L20(i12, r69);
  }
}