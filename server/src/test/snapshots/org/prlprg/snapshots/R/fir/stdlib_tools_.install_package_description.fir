fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2600996674;
    st `.install_package_description` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2600996674(dir, outDir, builtStamp) {
  (reg dir:*, reg outDir:*, reg builtStamp:*) -+> V { var dir:*, var outDir:*, var builtStamp:*, reg builtStamp_isMissing:L, reg builtStamp_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg _check_package_description:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg lengths:cls, reg ok:*, reg ok1:V, reg p3:p(V +), reg r11:V, reg as_integer:cls, reg r12:V, reg r13:V, reg any:cls, reg r14:V, reg c:L, reg stop:cls, reg paste:cls, reg gettext:cls, reg r15:V, reg p4:p(V +), reg paste1:cls, reg format:cls, reg ok2:*, reg ok3:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg _read_description:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p9:p(V +), reg r27:V, reg p10:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg db:*, reg db1:V, reg names:cls, reg r32:V, reg _in_:cls, reg nm:*, reg nm1:V, reg p11:p(V +), reg r34:V, reg c1:L, reg db2:*, reg db3:V, reg c2:L, reg db5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg db8:V, reg r36:V, reg nm2:*, reg nm3:V, reg match:cls, reg r37:V, reg r38:V, reg __:cls, reg r39:V, reg warning:cls, reg gettextf:cls, reg db9:*, reg db10:V, reg c3:L, reg db12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r40:V, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg R_version:*, reg R_version1:V, reg c4:L, reg R_version3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r46:V, reg grepl:cls, reg OStype:*, reg OStype1:V, reg p14:p(V +), reg r48:V, reg c5:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg c10:L, reg r50:V, reg Sys_getenv:cls, reg r51:V, reg nzchar:cls, reg r52:V, reg c11:L, reg c12:V, reg c14:L, reg sub:cls, reg OStype2:*, reg OStype3:V, reg p15:p(V +), reg r54:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg builtStamp1:*, reg builtStamp2:V, reg length:cls, reg r58:V, reg r59:V, reg c15:L, reg format1:cls, reg Sys_time:cls, reg r60:V, reg p16:p(V +), reg r62:V, reg paste2:cls, reg paste3:cls, reg R_version4:*, reg R_version5:V, reg c16:L, reg R_version7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg R_version10:V, reg r65:V, reg c17:cls, reg r66:V, reg __2:cls, reg r67:V, reg p17:p(V +), reg r69:V, reg p18:p(V +), reg dir_exists:cls, reg file_path2:cls, reg dir5:*, reg dir6:V, reg p19:p(V +), reg r72:V, reg p20:p(V +), reg r74:V, reg c18:L, reg OStype4:*, reg OStype5:V, reg p21:p(V +), reg builtStamp3:*, reg builtStamp4:V, reg p22:p(V +), reg _OStype:cls, reg r77:V, reg p23:p(V +), reg r79:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r80:V, reg r81:V, reg db13:*, reg db14:V, reg _expand_package_description_db_R_fields:cls, reg db15:*, reg db16:V, reg p24:p(V +), reg r83:V, reg Built:*, reg Built1:V, reg c19:cls, reg r84:V, reg _write_description:cls, reg db17:*, reg db18:V, reg p25:p(V +), reg file_path3:cls, reg outDir1:*, reg outDir2:V, reg p26:p(V +), reg r87:V, reg p27:p(V +), reg r89:V, reg file_path4:cls, reg outDir3:*, reg outDir4:V, reg p28:p(V +), reg r91:V, reg dir_exists1:cls, reg outMetaDir:*, reg outMetaDir1:V, reg p29:p(V +), reg r93:V, reg r94:V, reg c20:L, reg c22:V, reg dir_create:cls, reg outMetaDir2:*, reg outMetaDir3:V, reg p30:p(V +), reg r96:V, reg r97:V, reg c23:L, reg c24:V, reg c26:L, reg stop1:cls, reg gettextf1:cls, reg outMetaDir4:*, reg outMetaDir5:V, reg p31:p(V +), reg r99:V, reg p32:p(V +), reg r101:V, reg _split_description:cls, reg db19:*, reg db20:V, reg p33:p(V +), reg r104:V, reg saveRDS:cls, reg saveInfo:*, reg saveInfo1:V, reg p34:p(V +), reg file_path5:cls, reg outMetaDir6:*, reg outMetaDir7:V, reg p35:p(V +), reg r107:V, reg p36:p(V +), reg r109:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r110:V, reg r111:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r112:V, reg r113:V, reg internalsID:cls, reg r114:V, reg list:cls, reg r115:V, reg saveRDS1:cls, reg features:*, reg features1:V, reg p37:p(V +), reg file_path6:cls, reg outMetaDir8:*, reg outMetaDir9:V, reg p38:p(V +), reg r118:V, reg p39:p(V +), reg r120:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r121:V, reg r122:V, reg invisible:cls, reg r123:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    builtStamp_isMissing = missing.0(builtStamp);
    if builtStamp_isMissing then L0() else L1(builtStamp);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(builtStamp_orDefault):
    st builtStamp = builtStamp_orDefault;
    _check_package_description = ldf `.check_package_description`;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r3 = dyn file_path(p1, "DESCRIPTION");
      return r3;
    };
    r5 = dyn _check_package_description(p2);
    check L26() else D1();
  D1():
    deopt 3 [r5];
  L26():
    st ok = r5;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L2(r7):
    c = `as.logical`(r7);
    if c then L35() else L4();
  L27():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L28():
    r6 = dyn base(<lang `>`(as.integer(lengths(ok)), 0)>);
    goto L2(r6);
  L3(r9):
    r13 = `>`(r9, 0);
    any = ldf any in base;
    r14 = dyn any(r13);
    check L34() else D5();
  L4():
    goto L5();
  L5():
    _read_description = ldf `.read_description`;
    check L39() else D8();
  L29():
    lengths = ldf lengths;
    check L31() else D2();
  L30():
    r8 = dyn base1(<lang lengths(ok)>);
    goto L3(r8);
  L35():
    stop = ldf stop;
    check L36() else D6();
  D2():
    deopt 10 [];
  D5():
    deopt 18 [r14];
  D6():
    deopt 20 [];
  D8():
    deopt 30 [];
  L31():
    p3 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r11 = dyn lengths(p3);
    check L32() else D3();
  L34():
    goto L2(r14);
  L36():
    p8 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        gettext = ldf gettext;
        r15 = dyn gettext("Invalid DESCRIPTION file");
        return r15;
      };
      p7 = prom<V +>{
        paste1 = ldf paste;
        p6 = prom<V +>{
          format = ldf format;
          p5 = prom<V +>{
            ok2 = ld ok;
            ok3 = force? ok2;
            checkMissing(ok3);
            return ok3;
          };
          r18 = dyn format(p5);
          return r18;
        };
        r20 = dyn paste1[, collapse](p6, "\n\n");
        return r20;
      };
      r22 = dyn paste[, , sep](p4, p7, "\n\n");
      return r22;
    };
    r24 = dyn stop[, domain, `call.`](p8, NA_LGL, FALSE);
    check L37() else D7();
  L39():
    p10 = prom<V +>{
      file_path1 = ldf `file.path`;
      p9 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r27 = dyn file_path1(p9, "DESCRIPTION");
      return r27;
    };
    r29 = dyn _read_description(p10);
    check L40() else D9();
  D3():
    deopt 12 [r11];
  D7():
    deopt 26 [r24];
  D9():
    deopt 32 [r29];
  L32():
    as_integer = ldf `as.integer` in base;
    r12 = dyn as_integer(r11);
    check L33() else D4();
  L37():
    goto L5();
  L40():
    st db = r29;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  D4():
    deopt 14 [r12];
  L6(r31):
    st nm = r31;
    _in_ = ldf `%in%`;
    check L45() else D12();
  L33():
    goto L3(r12);
  L41():
    db = ld db;
    check L43() else D10();
  L42():
    r30 = dyn base2(<sym db>);
    goto L6(r30);
  D10():
    deopt 36 [db];
  D12():
    deopt 42 [];
  L43():
    db1 = force? db;
    checkMissing(db1);
    names = ldf names in base;
    r32 = dyn names(db1);
    check L44() else D11();
  L45():
    p11 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r34 = dyn _in_("Built", p11);
    check L46() else D13();
  D11():
    deopt 39 [r32];
  D13():
    deopt 45 [r34];
  L44():
    goto L6(r32);
  L46():
    c1 = `as.logical`(r34);
    if c1 then L47() else L7();
  L7():
    goto L10();
  L10():
    R_version = ld `R.version`;
    check L59() else D19();
  L47():
    db2 = ld db;
    check L48() else D14();
  D14():
    deopt 46 [db2];
  D19():
    deopt 70 [R_version];
  L48():
    db3 = force? db2;
    checkMissing(db3);
    c2 = `is.object`(db3);
    if c2 then L49() else L50(db3);
  L59():
    R_version1 = force? R_version;
    checkMissing(R_version1);
    c4 = `is.object`(R_version1);
    if c4 then L61() else L62(R_version1);
  L8(dx1):
    st db = dx1;
    warning = ldf warning;
    check L56() else D17();
  L49():
    dr = tryDispatchBuiltin.1("[", db3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(db5):
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L60(dx5):
    st OStype = dx5;
    grepl = ldf grepl;
    check L64() else D20();
  L61():
    dr4 = tryDispatchBuiltin.1("$", R_version1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(R_version3):
    r46 = `$`(R_version3, <sym platform>);
    goto L60(r46);
  D17():
    deopt 61 [];
  D20():
    deopt 75 [];
  L9(db8, r36):
    r38 = `-`(<missing>, r36);
    __ = ldf `[` in base;
    r39 = dyn __(db8, r38);
    goto L8(r39);
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L52():
    nm2 = ld nm;
    check L54() else D15();
  L53():
    r35 = dyn base3("Built", <sym nm>);
    goto L9(db5, r35);
  L56():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        db9 = ld db;
        db10 = force? db9;
        checkMissing(db10);
        c3 = `is.object`(db10);
        if c3 then L1() else L2(db10);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", db10);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(db12):
        __1 = ldf `[` in base;
        r40 = dyn __1(db12, "Package");
        goto L0(r40);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r42 = dyn gettextf("*** someone has corrupted the Built field in package '%s' ***", p12);
      return r42;
    };
    r44 = dyn warning[, domain, `call.`](p13, NA_LGL, FALSE);
    check L57() else D18();
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L60(dx4);
  L64():
    p14 = prom<V +>{
      OStype = ld OStype;
      OStype1 = force? OStype;
      checkMissing(OStype1);
      return OStype1;
    };
    r48 = dyn grepl("-apple-darwin", p14);
    check L65() else D21();
  D15():
    deopt 51 [db5, nm2];
  D18():
    deopt 67 [r44];
  D21():
    deopt 78 [r48];
  L54():
    nm3 = force? nm2;
    checkMissing(nm3);
    match = ldf match in base;
    r37 = dyn match("Built", nm3, NA_INT, NULL);
    check L55() else D16();
  L57():
    goto L10();
  L65():
    c5 = `as.logical`(r48);
    if c5 then L66() else L11(c5);
  D16():
    deopt 56 [db5, r37];
  L11(c7):
    c14 = `as.logical`(c7);
    if c14 then L73() else L13();
  L55():
    goto L9(db5, r37);
  L66():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L12(c10, r50):
    c11 = `as.logical`(r50);
    c12 = `&&`(c10, c11);
    goto L11(c12);
  L13():
    goto L14();
  L14():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  L67():
    Sys_getenv = ldf `Sys.getenv`;
    check L69() else D22();
  L68():
    r49 = dyn base4(<lang Sys.getenv("R_ARCH")>);
    goto L12(c5, r49);
  L73():
    sub = ldf sub;
    check L74() else D25();
  D22():
    deopt 82 [c5];
  D25():
    deopt 89 [];
  L15(r57):
    r59 = `==`(r57, 0);
    c15 = `as.logical`(r59);
    if c15 then L81() else L16();
  L69():
    r51 = dyn Sys_getenv("R_ARCH");
    check L70() else D23();
  L74():
    p15 = prom<V +>{
      OStype2 = ld OStype;
      OStype3 = force? OStype2;
      checkMissing(OStype3);
      return OStype3;
    };
    r54 = dyn sub(".*-apple-darwin", "universal-apple-darwin", p15);
    check L75() else D26();
  L77():
    builtStamp1 = ld builtStamp;
    check L79() else D27();
  L78():
    r56 = dyn base5(<sym builtStamp>);
    goto L15(r56);
  D23():
    deopt 84 [c5, r51];
  D26():
    deopt 93 [r54];
  D27():
    deopt 99 [builtStamp1];
  L16():
    goto L17();
  L17():
    paste2 = ldf paste0;
    check L85() else D31();
  L70():
    nzchar = ldf nzchar in base;
    r52 = dyn nzchar(r51);
    check L71() else D24();
  L75():
    st OStype = r54;
    goto L14();
  L79():
    builtStamp2 = force? builtStamp1;
    checkMissing(builtStamp2);
    length = ldf length in base;
    r58 = dyn length(builtStamp2);
    check L80() else D28();
  L81():
    format1 = ldf format;
    check L82() else D29();
  D24():
    deopt 86 [c5, r52];
  D28():
    deopt 102 [r58];
  D29():
    deopt 106 [];
  D31():
    deopt 118 [];
  L71():
    goto L12(c5, r52);
  L80():
    goto L15(r58);
  L82():
    p16 = prom<V +>{
      Sys_time = ldf `Sys.time`;
      r60 = dyn Sys_time();
      return r60;
    };
    r62 = dyn format1[, , tz, usetz](p16, "%Y-%m-%d %H:%M:%S", "UTC", TRUE);
    check L83() else D30();
  L85():
    p18 = prom<V +>{
      paste3 = ldf paste;
      p17 = prom<V +>{
        R_version4 = ld `R.version`;
        R_version5 = force? R_version4;
        checkMissing(R_version5);
        c16 = `is.object`(R_version5);
        if c16 then L2() else L3(R_version5);
      L0(dx7):
        return dx7;
      L2():
        dr6 = tryDispatchBuiltin.1("[", R_version5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L4() else L3(dr6);
      L3(R_version7):
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L5() else L6();
      L1(R_version10, r65):
        __2 = ldf `[` in base;
        r67 = dyn __2(R_version10, r65);
        goto L0(r67);
      L4():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      L5():
        c17 = ldf c in base;
        r66 = dyn c17("major", "minor");
        goto L1(R_version7, r66);
      L6():
        r64 = dyn base6("major", "minor");
        goto L1(R_version7, r64);
      };
      r69 = dyn paste3[, collapse](p17, ".");
      return r69;
    };
    p21 = prom<V +>{
      dir_exists = ldf `dir.exists`;
      p20 = prom<V +>{
        file_path2 = ldf `file.path`;
        p19 = prom<V +>{
          dir5 = ld dir;
          dir6 = force? dir5;
          checkMissing(dir6);
          return dir6;
        };
        r72 = dyn file_path2(p19, "src");
        return r72;
      };
      r74 = dyn dir_exists(p20);
      c18 = `as.logical`(r74);
      if c18 then L1() else L0();
    L0():
      return "";
    L1():
      OStype4 = ld OStype;
      OStype5 = force? OStype4;
      checkMissing(OStype5);
      return OStype5;
    };
    p22 = prom<V +>{
      builtStamp3 = ld builtStamp;
      builtStamp4 = force? builtStamp3;
      checkMissing(builtStamp4);
      return builtStamp4;
    };
    p23 = prom<V +>{
      _OStype = ldf `.OStype`;
      r77 = dyn _OStype();
      return r77;
    };
    r79 = dyn paste2("R ", p18, "; ", p21, "; ", p22, "; ", p23);
    check L86() else D32();
  D30():
    deopt 113 [r62];
  D32():
    deopt 127 [r79];
  L83():
    st builtStamp = r62;
    goto L17();
  L86():
    st Built = r79;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L18(r81):
    st db = r81;
    _write_description = ldf `.write_description`;
    check L94() else D38();
  L87():
    db13 = ld db;
    check L89() else D33();
  L88():
    r80 = dyn base7[, , Built](<sym db>, <lang .expand_package_description_db_R_fields(db)>, <sym Built>);
    goto L18(r80);
  D33():
    deopt 131 [db13];
  D38():
    deopt 144 [];
  L89():
    db14 = force? db13;
    checkMissing(db14);
    _expand_package_description_db_R_fields = ldf `.expand_package_description_db_R_fields`;
    check L90() else D34();
  L94():
    p25 = prom<V +>{
      db17 = ld db;
      db18 = force? db17;
      checkMissing(db18);
      return db18;
    };
    p27 = prom<V +>{
      file_path3 = ldf `file.path`;
      p26 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      r87 = dyn file_path3(p26, "DESCRIPTION");
      return r87;
    };
    r89 = dyn _write_description(p25, p27);
    check L95() else D39();
  D34():
    deopt 134 [];
  D39():
    deopt 147 [r89];
  L90():
    p24 = prom<V +>{
      db15 = ld db;
      db16 = force? db15;
      checkMissing(db16);
      return db16;
    };
    r83 = dyn _expand_package_description_db_R_fields(p24);
    check L91() else D35();
  L95():
    file_path4 = ldf `file.path`;
    check L96() else D40();
  D35():
    deopt 136 [r83];
  D40():
    deopt 149 [];
  L91():
    Built = ld Built;
    check L92() else D36();
  L96():
    p28 = prom<V +>{
      outDir3 = ld outDir;
      outDir4 = force? outDir3;
      checkMissing(outDir4);
      return outDir4;
    };
    r91 = dyn file_path4(p28, "Meta");
    check L97() else D41();
  D36():
    deopt 137 [Built];
  D41():
    deopt 152 [r91];
  L92():
    Built1 = force? Built;
    checkMissing(Built1);
    c19 = ldf c in base;
    r84 = dyn c19(db14, r83, Built1);
    check L93() else D37();
  L97():
    st outMetaDir = r91;
    dir_exists1 = ldf `dir.exists`;
    check L98() else D42();
  D37():
    deopt 141 [r84];
  D42():
    deopt 155 [];
  L93():
    goto L18(r84);
  L98():
    p29 = prom<V +>{
      outMetaDir = ld outMetaDir;
      outMetaDir1 = force? outMetaDir;
      checkMissing(outMetaDir1);
      return outMetaDir1;
    };
    r93 = dyn dir_exists1(p29);
    check L99() else D43();
  D43():
    deopt 157 [r93];
  L99():
    r94 = `!`(r93);
    c20 = `as.logical`(r94);
    if c20 then L100() else L19(c20);
  L19(c22):
    c26 = `as.logical`(c22);
    if c26 then L104() else L20();
  L100():
    dir_create = ldf `dir.create`;
    check L101() else D44();
  D44():
    deopt 160 [c20];
  L20():
    goto L21();
  L21():
    _split_description = ldf `.split_description`;
    check L108() else D48();
  L101():
    p30 = prom<V +>{
      outMetaDir2 = ld outMetaDir;
      outMetaDir3 = force? outMetaDir2;
      checkMissing(outMetaDir3);
      return outMetaDir3;
    };
    r96 = dyn dir_create(p30);
    check L102() else D45();
  L104():
    stop1 = ldf stop;
    check L105() else D46();
  D45():
    deopt 162 [c20, r96];
  D46():
    deopt 166 [];
  D48():
    deopt 174 [];
  L102():
    r97 = `!`(r96);
    c23 = `as.logical`(r97);
    c24 = `&&`(c20, c23);
    goto L19(c24);
  L105():
    p32 = prom<V +>{
      gettextf1 = ldf gettextf;
      p31 = prom<V +>{
        outMetaDir4 = ld outMetaDir;
        outMetaDir5 = force? outMetaDir4;
        checkMissing(outMetaDir5);
        return outMetaDir5;
      };
      r99 = dyn gettextf1("cannot open directory '%s'", p31);
      return r99;
    };
    r101 = dyn stop1[, domain](p32, NA_LGL);
    check L106() else D47();
  L108():
    p33 = prom<V +>{
      db19 = ld db;
      db20 = force? db19;
      checkMissing(db20);
      return db20;
    };
    r104 = dyn _split_description(p33);
    check L109() else D49();
  D47():
    deopt 170 [r101];
  D49():
    deopt 176 [r104];
  L106():
    goto L21();
  L109():
    st saveInfo = r104;
    saveRDS = ldf saveRDS;
    check L110() else D50();
  D50():
    deopt 179 [];
  L110():
    p34 = prom<V +>{
      saveInfo = ld saveInfo;
      saveInfo1 = force? saveInfo;
      checkMissing(saveInfo1);
      return saveInfo1;
    };
    p36 = prom<V +>{
      file_path5 = ldf `file.path`;
      p35 = prom<V +>{
        outMetaDir6 = ld outMetaDir;
        outMetaDir7 = force? outMetaDir6;
        checkMissing(outMetaDir7);
        return outMetaDir7;
      };
      r107 = dyn file_path5(p35, "package.rds");
      return r107;
    };
    r109 = dyn saveRDS(p34, p36);
    check L111() else D51();
  D51():
    deopt 182 [r109];
  L111():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L22(r111):
    st features = r111;
    saveRDS1 = ldf saveRDS;
    check L118() else D54();
  L112():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L114() else L115();
  L113():
    r110 = dyn base8[internalsID](<lang .Internal(internalsID())>);
    goto L22(r110);
  D54():
    deopt 194 [];
  L23(r113):
    list = ldf list in base;
    r115 = dyn list(r113);
    check L117() else D53();
  L114():
    internalsID = ldf internalsID in base;
    r114 = dyn internalsID();
    check L116() else D52();
  L115():
    r112 = dyn base9(<lang internalsID()>);
    goto L23(r112);
  L118():
    p37 = prom<V +>{
      features = ld features;
      features1 = force? features;
      checkMissing(features1);
      return features1;
    };
    p39 = prom<V +>{
      file_path6 = ldf `file.path`;
      p38 = prom<V +>{
        outMetaDir8 = ld outMetaDir;
        outMetaDir9 = force? outMetaDir8;
        checkMissing(outMetaDir9);
        return outMetaDir9;
      };
      r118 = dyn file_path6(p38, "features.rds");
      return r118;
    };
    r120 = dyn saveRDS1(p37, p39);
    check L119() else D55();
  D52():
    deopt 188 [r114];
  D53():
    deopt 191 [r115];
  D55():
    deopt 197 [r120];
  L116():
    goto L23(r114);
  L117():
    goto L22(r115);
  L119():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L120() else L121();
  L24(r122):
    popenv;
    return r122;
  L120():
    invisible = ldf invisible in base;
    r123 = dyn invisible();
    check L122() else D56();
  L121():
    r121 = dyn base10();
    goto L24(r121);
  D56():
    deopt 201 [r123];
  L122():
    goto L24(r123);
  }
}