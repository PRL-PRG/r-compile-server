fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4069375805;
    st OlsonNames = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner4069375805(tzdir) {
  (reg tzdir:*) -+> V { var tzdir:*, reg tzdir_isMissing:L, reg tzdir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tzdir1:*, reg tzdir2:V, reg c:V, reg c1:L, reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg c3:L, reg Sys_getenv:cls, reg file_path:cls, reg R_home:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg r9:V, reg Sys_getenv1:cls, reg r10:V, reg r11:V, reg c4:L, reg file_path1:cls, reg R_home1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg grepl:cls, reg R_Version:cls, reg r15:V, reg c5:L, reg r17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg p3:p(V +), reg r20:V, reg c6:L, reg c8:V, reg Sys_getenv2:cls, reg r21:V, reg r22:V, reg c9:L, reg c10:V, reg c12:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg Sys_getenv3:cls, reg r25:V, reg file_path2:cls, reg R_home2:cls, reg r26:V, reg p4:p(V +), reg r28:V, reg c13:cls, reg r29:V, reg tzdirs:*, reg tzdirs1:V, reg c14:L, reg tzdirs3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg file_exists:cls, reg tzdirs4:*, reg tzdirs5:V, reg p5:p(V +), reg r31:V, reg __:cls, reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg tzdirs6:*, reg tzdirs7:V, reg length:cls, reg r35:V, reg r36:V, reg c15:L, reg warning:cls, reg r37:V, reg character:cls, reg r38:V, reg tzdirs8:*, reg tzdirs9:V, reg c16:L, reg tzdirs11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r40:V, reg dir_exists:cls, reg tzdir3:*, reg tzdir4:V, reg p6:p(V +), reg r43:V, reg r44:V, reg c17:L, reg stop:cls, reg sprintf:cls, reg sQuote:cls, reg tzdir5:*, reg tzdir6:V, reg p7:p(V +), reg r46:V, reg p8:p(V +), reg r48:V, reg p9:p(V +), reg r50:V, reg list_files:cls, reg tzdir7:*, reg tzdir8:V, reg p10:p(V +), reg r52:V, reg file_exists1:cls, reg file_path3:cls, reg tzdir9:*, reg tzdir10:V, reg p11:p(V +), reg r54:V, reg p12:p(V +), reg r56:V, reg c18:L, reg readLines:cls, reg vf:*, reg vf1:V, reg p13:p(V +), reg r58:V, reg r59:V, reg file_exists2:cls, reg file_path4:cls, reg tzdir11:*, reg tzdir12:V, reg p14:p(V +), reg r61:V, reg p15:p(V +), reg r63:V, reg c19:L, reg readLines1:cls, reg vf2:*, reg vf3:V, reg p16:p(V +), reg r65:V, reg file_exists3:cls, reg file_path5:cls, reg tzdir13:*, reg tzdir14:V, reg p17:p(V +), reg r67:V, reg p18:p(V +), reg r69:V, reg c20:L, reg readLines2:cls, reg vf4:*, reg vf5:V, reg p19:p(V +), reg r71:V, reg grepl1:cls, reg patt:*, reg patt1:V, reg p20:p(V +), reg l:*, reg l1:V, reg p21:p(V +), reg r74:V, reg c21:L, reg sub:cls, reg patt2:*, reg patt3:V, reg p22:p(V +), reg l2:*, reg l3:V, reg p23:p(V +), reg r77:V, reg r78:V, reg setdiff:cls, reg x:*, reg x1:V, reg p24:p(V +), reg r80:V, reg grep:cls, reg x2:*, reg x3:V, reg p25:p(V +), reg r82:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r83:V, reg r84:V, reg ver:*, reg ver1:V, reg c22:V, reg r85:V, reg c23:L, reg ver2:*, reg ver3:V, reg l4:*, reg attr__:cls, reg r86:V, reg ans:*, reg ans1:V |
    mkenv;
    tzdir_isMissing = missing.0(tzdir);
    if tzdir_isMissing then L0(NULL) else L0(tzdir);
  L0(tzdir_orDefault):
    st tzdir = tzdir_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L27() else L2();
  L24():
    tzdir1 = ld tzdir;
    check L26() else D0();
  L25():
    r = dyn base(<sym tzdir>);
    goto L1(r);
  D0():
    deopt 1 [tzdir1];
  L2():
    dir_exists = ldf `dir.exists`;
    check L80() else D27();
  L13():
    list_files = ldf `list.files`;
    check L86() else D31();
  L26():
    tzdir2 = force? tzdir1;
    checkMissing(tzdir2);
    c = `==`(tzdir2, NULL);
    goto L1(c);
  L27():
    _Platform = ld `.Platform`;
    check L28() else D1();
  D1():
    deopt 4 [_Platform];
  D27():
    deopt 93 [];
  D31():
    deopt 106 [];
  L28():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c2 = `is.object`(_Platform1);
    if c2 then L30() else L31(_Platform1);
  L80():
    p6 = prom<V +>{
      tzdir3 = ld tzdir;
      tzdir4 = force? tzdir3;
      checkMissing(tzdir4);
      return tzdir4;
    };
    r43 = dyn dir_exists(p6);
    check L81() else D28();
  L86():
    p10 = prom<V +>{
      tzdir7 = ld tzdir;
      tzdir8 = force? tzdir7;
      checkMissing(tzdir8);
      return tzdir8;
    };
    r52 = dyn list_files[, recursive](p10, TRUE);
    check L87() else D32();
  D28():
    deopt 95 [r43];
  D32():
    deopt 110 [r52];
  L29(dx1):
    r3 = `==`(dx1, "windows");
    c3 = `as.logical`(r3);
    if c3 then L33() else L3();
  L30():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(_Platform3):
    r2 = `$`(_Platform3, <sym OS.type>);
    goto L29(r2);
  L81():
    r44 = `!`(r43);
    c17 = `as.logical`(r44);
    if c17 then L82() else L14();
  L87():
    st x = r52;
    file_exists1 = ldf `file.exists`;
    check L88() else D33();
  D33():
    deopt 113 [];
  L3():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L37() else D4();
  L4(r9):
    goto L13();
  L14():
    goto L13();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L33():
    Sys_getenv = ldf `Sys.getenv`;
    check L34() else D2();
  L82():
    stop = ldf stop;
    check L83() else D29();
  L88():
    p12 = prom<V +>{
      file_path3 = ldf `file.path`;
      p11 = prom<V +>{
        tzdir9 = ld tzdir;
        tzdir10 = force? tzdir9;
        checkMissing(tzdir10);
        return tzdir10;
      };
      r54 = dyn file_path3(p11, "VERSION");
      st vf = r54;
      setInvisible.0();
      return r54;
    };
    r56 = dyn file_exists1(p12);
    check L89() else D34();
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  D29():
    deopt 98 [];
  D34():
    deopt 115 [r56];
  L34():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r4 = dyn R_home("share");
        return r4;
      };
      r6 = dyn file_path(p, "zoneinfo");
      return r6;
    };
    r8 = dyn Sys_getenv("TZDIR", p1);
    check L35() else D3();
  L37():
    r10 = dyn Sys_getenv1("TZDIR");
    check L38() else D5();
  L83():
    p9 = prom<V +>{
      sprintf = ldf sprintf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          tzdir5 = ld tzdir;
          tzdir6 = force? tzdir5;
          checkMissing(tzdir6);
          return tzdir6;
        };
        r46 = dyn sQuote(p7);
        return r46;
      };
      r48 = dyn sprintf("%s is not a directory", p8);
      return r48;
    };
    r50 = dyn stop[, domain](p9, NA_LGL);
    check L84() else D30();
  L89():
    c18 = `as.logical`(r56);
    if c18 then L90() else L15();
  D3():
    deopt 13 [r8];
  D5():
    deopt 18 [r10];
  D30():
    deopt 102 [r50];
  L15():
    file_exists2 = ldf `file.exists`;
    check L94() else D37();
  L16(r59):
    st ver = r59;
    setdiff = ldf setdiff;
    check L112() else D49();
  L35():
    st tzdir = r8;
    goto L4(r8);
  L38():
    r11 = `==`(r10, "internal");
    c4 = `as.logical`(r11);
    if c4 then L39() else L5();
  L84():
    goto L13();
  L90():
    readLines = ldf readLines;
    check L91() else D35();
  D35():
    deopt 117 [];
  D37():
    deopt 123 [];
  D49():
    deopt 163 [];
  L5():
    grepl = ldf grepl;
    check L43() else D8();
  L39():
    file_path1 = ldf `file.path`;
    check L40() else D6();
  L91():
    p13 = prom<V +>{
      vf = ld vf;
      vf1 = force? vf;
      checkMissing(vf1);
      return vf1;
    };
    r58 = dyn readLines[, warn](p13, FALSE);
    check L92() else D36();
  L94():
    p15 = prom<V +>{
      file_path4 = ldf `file.path`;
      p14 = prom<V +>{
        tzdir11 = ld tzdir;
        tzdir12 = force? tzdir11;
        checkMissing(tzdir12);
        return tzdir12;
      };
      r61 = dyn file_path4(p14, "+VERSION");
      st vf = r61;
      setInvisible.0();
      return r61;
    };
    r63 = dyn file_exists2(p15);
    check L95() else D38();
  L112():
    p24 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r80 = dyn setdiff(p24, "VERSION");
    check L113() else D50();
  D6():
    deopt 22 [];
  D8():
    deopt 28 [];
  D36():
    deopt 121 [r58];
  D38():
    deopt 125 [r63];
  D50():
    deopt 166 [r80];
  L40():
    p2 = prom<V +>{
      R_home1 = ldf `R.home`;
      r12 = dyn R_home1("share");
      return r12;
    };
    r14 = dyn file_path1(p2, "zoneinfo");
    check L41() else D7();
  L43():
    p3 = prom<V +>{
      R_Version = ldf `R.Version`;
      r15 = dyn R_Version();
      c5 = `is.object`(r15);
      if c5 then L1() else L2(r15);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r15);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r17):
      r18 = `$`(r17, <sym os>);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r20 = dyn grepl("darwin", p3);
    check L44() else D9();
  L92():
    goto L16(r58);
  L95():
    c19 = `as.logical`(r63);
    if c19 then L96() else L17();
  L113():
    st x = r80;
    grep = ldf grep;
    check L114() else D51();
  D7():
    deopt 25 [r14];
  D9():
    deopt 31 [r20];
  D51():
    deopt 169 [];
  L17():
    file_exists3 = ldf `file.exists`;
    check L100() else D41();
  L41():
    st tzdir = r14;
    goto L4(r14);
  L44():
    c6 = `as.logical`(r20);
    if c6 then L45() else L6(c6);
  L96():
    readLines1 = ldf readLines;
    check L97() else D39();
  L114():
    p25 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r82 = dyn grep[, , value]("^[ABCDEFGHIJKLMNOPQRSTUVWXYZ]", p25, TRUE);
    check L115() else D52();
  D39():
    deopt 127 [];
  D41():
    deopt 133 [];
  D52():
    deopt 174 [r82];
  L6(c8):
    c12 = `as.logical`(c8);
    if c12 then L49() else L7();
  L45():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L46() else D10();
  L97():
    p16 = prom<V +>{
      vf2 = ld vf;
      vf3 = force? vf2;
      checkMissing(vf3);
      return vf3;
    };
    r65 = dyn readLines1[, warn](p16, FALSE);
    check L98() else D40();
  L100():
    p18 = prom<V +>{
      file_path5 = ldf `file.path`;
      p17 = prom<V +>{
        tzdir13 = ld tzdir;
        tzdir14 = force? tzdir13;
        checkMissing(tzdir14);
        return tzdir14;
      };
      r67 = dyn file_path5(p17, "tzdata.zi");
      st vf = r67;
      setInvisible.0();
      return r67;
    };
    r69 = dyn file_exists3(p18);
    check L101() else D42();
  L115():
    st ans = r82;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L116() else L117();
  D10():
    deopt 33 [c6];
  D40():
    deopt 131 [r65];
  D42():
    deopt 135 [r69];
  L7():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L21(r84):
    r85 = `!`(r84);
    c23 = `as.logical`(r85);
    if c23 then L119() else L22();
  L46():
    r21 = dyn Sys_getenv2("TZDIR");
    check L47() else D11();
  L49():
    st tzdir = "/var/db/timezone/zoneinfo";
    goto L4("/var/db/timezone/zoneinfo");
  L98():
    goto L16(r65);
  L101():
    c20 = `as.logical`(r69);
    if c20 then L102() else L18();
  L116():
    ver = ld ver;
    check L118() else D53();
  L117():
    r83 = dyn base3(<sym ver>);
    goto L21(r83);
  D11():
    deopt 35 [c6, r21];
  D53():
    deopt 177 [ver];
  L8(r24):
    st tzdirs = r24;
    tzdirs = ld tzdirs;
    check L58() else D17();
  L18():
    goto L16(NULL);
  L22():
    goto L23();
  L23():
    ans = ld ans;
    check L124() else D57();
  L47():
    r22 = `==`(r21, "macOS");
    c9 = `as.logical`(r22);
    c10 = `&&`(c6, c9);
    goto L6(c10);
  L51():
    Sys_getenv3 = ldf `Sys.getenv`;
    check L53() else D12();
  L52():
    r23 = dyn base1(<lang Sys.getenv("TZDIR")>, <lang file.path(R.home("share"), "zoneinfo")>, "/usr/share/zoneinfo", "/share/zoneinfo", "/usr/share/lib/zoneinfo", "/usr/lib/zoneinfo", "/usr/local/etc/zoneinfo", "/etc/zoneinfo", "/usr/etc/zoneinfo");
    goto L8(r23);
  L102():
    readLines2 = ldf readLines;
    check L103() else D43();
  L118():
    ver1 = force? ver;
    checkMissing(ver1);
    c22 = `==`(ver1, NULL);
    goto L21(c22);
  L119():
    ver2 = ld ver;
    check L120() else D54();
  D12():
    deopt 45 [];
  D17():
    deopt 63 [tzdirs];
  D43():
    deopt 137 [];
  D54():
    deopt 181 [ver2];
  D57():
    deopt 191 [ans];
  L53():
    r25 = dyn Sys_getenv3("TZDIR");
    check L54() else D13();
  L58():
    tzdirs1 = force? tzdirs;
    checkMissing(tzdirs1);
    c14 = `is.object`(tzdirs1);
    if c14 then L59() else L60(tzdirs1);
  L103():
    p19 = prom<V +>{
      vf4 = ld vf;
      vf5 = force? vf4;
      checkMissing(vf5);
      return vf5;
    };
    r71 = dyn readLines2[, n](p19, 1);
    check L104() else D44();
  L120():
    ver3 = force? ver2;
    checkMissing(ver3);
    l4 = ld ans;
    attr__ = ldf `attr<-`;
    check L121() else D55();
  L124():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D13():
    deopt 47 [r25];
  D44():
    deopt 141 [r71];
  D55():
    deopt 184 [ver3, l4, ver3];
  L9(dx5):
    st tzdirs = dx5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  L54():
    file_path2 = ldf `file.path`;
    check L55() else D14();
  L59():
    dr4 = tryDispatchBuiltin.1("[", tzdirs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(dr4);
  L60(tzdirs3):
    file_exists = ldf `file.exists`;
    check L62() else D18();
  L104():
    st l = r71;
    st patt = "^# version ";
    grepl1 = ldf grepl;
    check L105() else D45();
  L121():
    r86 = dyn attr__(l4, NULL, "Version", ver3);
    check L122() else D56();
  D14():
    deopt 49 [];
  D18():
    deopt 66 [tzdirs3];
  D45():
    deopt 147 [];
  D56():
    deopt 187 [ver3, r86];
  L10(r34):
    r36 = `!`(r34);
    c15 = `as.logical`(r36);
    if c15 then L68() else L11();
  L55():
    p4 = prom<V +>{
      R_home2 = ldf `R.home`;
      r26 = dyn R_home2("share");
      return r26;
    };
    r28 = dyn file_path2(p4, "zoneinfo");
    check L56() else D15();
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L62():
    p5 = prom<V +>{
      tzdirs4 = ld tzdirs;
      tzdirs5 = force? tzdirs4;
      checkMissing(tzdirs5);
      return tzdirs5;
    };
    r31 = dyn file_exists(p5);
    check L63() else D19();
  L64():
    tzdirs6 = ld tzdirs;
    check L66() else D20();
  L65():
    r33 = dyn base2(<sym tzdirs>);
    goto L10(r33);
  L105():
    p20 = prom<V +>{
      patt = ld patt;
      patt1 = force? patt;
      checkMissing(patt1);
      return patt1;
    };
    p21 = prom<V +>{
      l = ld l;
      l1 = force? l;
      checkMissing(l1);
      return l1;
    };
    r74 = dyn grepl1(p20, p21);
    check L106() else D46();
  L122():
    st ans = r86;
    goto L23();
  D15():
    deopt 52 [r28];
  D19():
    deopt 68 [tzdirs3, r31];
  D20():
    deopt 73 [tzdirs6];
  D46():
    deopt 150 [r74];
  L11():
    tzdirs8 = ld tzdirs;
    check L75() else D26();
  L56():
    c13 = ldf c in base;
    r29 = dyn c13(r25, r28, "/usr/share/zoneinfo", "/share/zoneinfo", "/usr/share/lib/zoneinfo", "/usr/lib/zoneinfo", "/usr/local/etc/zoneinfo", "/etc/zoneinfo", "/usr/etc/zoneinfo");
    check L57() else D16();
  L63():
    __ = ldf `[` in base;
    r32 = dyn __(tzdirs3, r31);
    goto L9(r32);
  L66():
    tzdirs7 = force? tzdirs6;
    checkMissing(tzdirs7);
    length = ldf length in base;
    r35 = dyn length(tzdirs7);
    check L67() else D21();
  L68():
    warning = ldf warning;
    check L69() else D22();
  L106():
    c21 = `as.logical`(r74);
    if c21 then L107() else L19();
  D16():
    deopt 61 [r29];
  D21():
    deopt 76 [r35];
  D22():
    deopt 79 [];
  D26():
    deopt 86 [tzdirs8];
  L19():
    goto L20(NULL);
  L20(r78):
    goto L16(r78);
  L57():
    goto L8(r29);
  L67():
    goto L10(r35);
  L69():
    r37 = dyn warning("no Olson database found");
    check L70() else D23();
  L75():
    tzdirs9 = force? tzdirs8;
    checkMissing(tzdirs9);
    c16 = `is.object`(tzdirs9);
    if c16 then L76() else L77(tzdirs9);
  L107():
    sub = ldf sub;
    check L108() else D47();
  D23():
    deopt 81 [r37];
  D47():
    deopt 152 [];
  L12(dx7):
    st tzdir = dx7;
    goto L4(dx7);
  L70():
    character = ldf character;
    check L71() else D24();
  L76():
    dr6 = tryDispatchBuiltin.1("[", tzdirs9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(dr6);
  L77(tzdirs11):
    __1 = ldf `[` in base;
    r40 = dyn __1(tzdirs11, 1);
    goto L12(r40);
  L108():
    p22 = prom<V +>{
      patt2 = ld patt;
      patt3 = force? patt2;
      checkMissing(patt3);
      return patt3;
    };
    p23 = prom<V +>{
      l2 = ld l;
      l3 = force? l2;
      checkMissing(l3);
      return l3;
    };
    r77 = dyn sub(p22, "", p23);
    check L109() else D48();
  D24():
    deopt 83 [];
  D48():
    deopt 156 [r77];
  L71():
    r38 = dyn character();
    check L72() else D25();
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L109():
    goto L20(r77);
  D25():
    deopt 84 [r38];
  L72():
    popenv;
    return r38;
  }
}