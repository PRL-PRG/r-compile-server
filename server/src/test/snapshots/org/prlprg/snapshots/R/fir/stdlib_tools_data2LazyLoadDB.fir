fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner463290990;
    st data2LazyLoadDB = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner463290990(package, `lib.loc`, compress) {
  (reg package:*, reg lib_loc:*, reg compress:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, reg options:cls, reg r:V, reg find_package:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg pkgpath:*, reg pkgpath1:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg stop:cls, reg packageNotFoundError:cls, reg package3:*, reg package4:V, reg p2:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p3:p(V +), reg sys_call:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg file_path:cls, reg pkgpath2:*, reg pkgpath3:V, reg p6:p(V +), reg r17:V, reg _read_description:cls, reg file_path1:cls, reg pkgpath4:*, reg pkgpath5:V, reg p7:p(V +), reg r19:V, reg p8:p(V +), reg r21:V, reg c1:L, reg r23:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg enc:*, reg enc1:V, reg is_na:cls, reg r27:V, reg r28:V, reg c2:L, reg options1:cls, reg enc2:*, reg enc3:V, reg p9:p(V +), reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg on_exit:cls, reg r33:V, reg dir_exists:cls, reg dataDir:*, reg dataDir1:V, reg p10:p(V +), reg r36:V, reg c3:L, reg file_exists:cls, reg file_path2:cls, reg dataDir2:*, reg dataDir3:V, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V, reg c4:L, reg c6:V, reg file_exists1:cls, reg file_path3:cls, reg dataDir4:*, reg dataDir5:V, reg p13:p(V +), reg paste0:cls, reg package5:*, reg package6:V, reg p14:p(V +), reg r43:V, reg p15:p(V +), reg r45:V, reg p16:p(V +), reg r47:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg file_exists2:cls, reg file_path4:cls, reg dataDir6:*, reg dataDir7:V, reg p17:p(V +), reg paste1:cls, reg package7:*, reg package8:V, reg p18:p(V +), reg r50:V, reg p19:p(V +), reg r52:V, reg p20:p(V +), reg r54:V, reg c13:L, reg c14:V, reg c16:L, reg warning:cls, reg r55:V, reg new_env:cls, reg r56:V, reg new_env1:cls, reg r57:V, reg list_files_with_type:cls, reg dataDir8:*, reg dataDir9:V, reg p21:p(V +), reg r59:V, reg unique:cls, reg basename:cls, reg file_path_sans_ext:cls, reg files:*, reg files1:V, reg p22:p(V +), reg r61:V, reg p23:p(V +), reg r63:V, reg p24:p(V +), reg r65:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r66:V, reg r67:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r68:V, reg r69:V, reg files2:*, reg files3:V, reg length1:cls, reg r70:V, reg vector:cls, reg r71:V, reg files4:*, reg files5:V, reg l:*, reg names__:cls, reg r72:V, reg character:cls, reg r73:V, reg files6:*, reg files7:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c17:L, reg x:V, reg __1:cls, reg r74:V, reg r75:cls, reg f:*, reg f1:V, reg p25:p(V +), reg package9:*, reg package10:V, reg p26:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p27:p(V +), reg dataEnv:*, reg dataEnv1:V, reg p28:p(V +), reg r80:V, reg __2:cls, reg r81:V, reg r82:cls, reg f2:*, reg f3:V, reg p29:p(V +), reg package11:*, reg package12:V, reg p30:p(V +), reg lib_loc7:*, reg lib_loc8:V, reg p31:p(V +), reg tmpEnv:*, reg tmpEnv1:V, reg p32:p(V +), reg r87:V, reg ls:cls, reg tmpEnv2:*, reg tmpEnv3:V, reg p33:p(V +), reg r89:V, reg rm:cls, reg tmp:*, reg tmp1:V, reg p34:p(V +), reg tmpEnv4:*, reg tmpEnv5:V, reg p35:p(V +), reg r92:V, reg tmp2:*, reg tmp3:V, reg l2:*, reg c18:L, reg i6:I, reg tmp5:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg f4:*, reg f5:V, reg ____:cls, reg r93:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r94:V, reg i11:I, reg r95:V, reg loaded:*, reg loaded1:V, reg tmp8:*, reg tmp9:V, reg c19:cls, reg r96:V, reg duplicated:cls, reg loaded2:*, reg loaded3:V, reg p36:p(V +), reg r98:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r99:V, reg r100:V, reg dup:*, reg dup1:V, reg any:cls, reg r101:V, reg c20:L, reg warning1:cls, reg sprintf:cls, reg ngettext:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r102:V, reg r103:V, reg dup2:*, reg dup3:V, reg sum:cls, reg r104:V, reg p37:p(V +), reg r106:V, reg p38:p(V +), reg paste2:cls, reg sQuote:cls, reg loaded4:*, reg loaded5:V, reg c21:L, reg loaded7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg dup4:*, reg dup5:V, reg __3:cls, reg r108:V, reg p39:p(V +), reg r110:V, reg p40:p(V +), reg r112:V, reg p41:p(V +), reg r114:V, reg p42:p(V +), reg r116:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r118:V, reg r119:V, reg loaded8:*, reg loaded9:V, reg length2:cls, reg r120:V, reg c22:L, reg file_path5:cls, reg dataDir10:*, reg dataDir11:V, reg p43:p(V +), reg r122:V, reg makeLazyLoadDB:cls, reg dataEnv2:*, reg dataEnv3:V, reg p44:p(V +), reg dbbase:*, reg dbbase1:V, reg p45:p(V +), reg compress1:*, reg compress2:V, reg p46:p(V +), reg r126:V, reg saveRDS:cls, reg dlist:*, reg dlist1:V, reg p47:p(V +), reg file_path6:cls, reg dataDir12:*, reg dataDir13:V, reg p48:p(V +), reg r129:V, reg p49:p(V +), reg compress3:*, reg compress4:V, reg p50:p(V +), reg r132:V, reg unlink:cls, reg f6:*, reg f7:V, reg p51:p(V +), reg r134:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L1(TRUE) else L1(compress);
  L1(compress_orDefault):
    st compress = compress_orDefault;
    options = ldf options;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    r = dyn options[warn](1.0);
    check L26() else D1();
  D1():
    deopt 4 [r];
  L26():
    find_package = ldf `find.package`;
    check L27() else D2();
  D2():
    deopt 6 [];
  L27():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r3 = dyn find_package[, , quiet](p, p1, TRUE);
    check L28() else D3();
  D3():
    deopt 11 [r3];
  L28():
    st pkgpath = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L2(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L33() else L3();
  L29():
    pkgpath = ld pkgpath;
    check L31() else D4();
  L30():
    r4 = dyn base(<sym pkgpath>);
    goto L2(r4);
  D4():
    deopt 15 [pkgpath];
  L3():
    goto L4();
  L4():
    file_path = ldf `file.path`;
    check L37() else D8();
  L31():
    pkgpath1 = force? pkgpath;
    checkMissing(pkgpath1);
    length = ldf length in base;
    r6 = dyn length(pkgpath1);
    check L32() else D5();
  L33():
    stop = ldf stop;
    check L34() else D6();
  D5():
    deopt 18 [r6];
  D6():
    deopt 21 [];
  D8():
    deopt 27 [];
  L32():
    goto L2(r6);
  L34():
    p5 = prom<V +>{
      packageNotFoundError = ldf packageNotFoundError;
      p2 = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      p3 = prom<V +>{
        lib_loc3 = ld `lib.loc`;
        lib_loc4 = force? lib_loc3;
        checkMissing(lib_loc4);
        return lib_loc4;
      };
      p4 = prom<V +>{
        sys_call = ldf `sys.call`;
        r10 = dyn sys_call();
        return r10;
      };
      r12 = dyn packageNotFoundError(p2, p3, p4);
      return r12;
    };
    r14 = dyn stop(p5);
    check L35() else D7();
  L37():
    p6 = prom<V +>{
      pkgpath2 = ld pkgpath;
      pkgpath3 = force? pkgpath2;
      checkMissing(pkgpath3);
      return pkgpath3;
    };
    r17 = dyn file_path(p6, "data");
    check L38() else D9();
  D7():
    deopt 23 [r14];
  D9():
    deopt 30 [r17];
  L35():
    goto L4();
  L38():
    st dataDir = r17;
    _read_description = ldf `.read_description`;
    check L39() else D10();
  D10():
    deopt 33 [];
  L39():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        pkgpath4 = ld pkgpath;
        pkgpath5 = force? pkgpath4;
        checkMissing(pkgpath5);
        return pkgpath5;
      };
      r19 = dyn file_path1(p7, "DESCRIPTION");
      return r19;
    };
    r21 = dyn _read_description(p8);
    check L40() else D11();
  D11():
    deopt 35 [r21];
  L40():
    c1 = `is.object`(r21);
    if c1 then L41() else L42(r21);
  L5(dx1):
    st enc = dx1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L41():
    dr = tryDispatchBuiltin.1("[", r21);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(r23):
    __ = ldf `[` in base;
    r24 = dyn __(r23, "Encoding");
    goto L5(r24);
  L6(r26):
    r28 = `!`(r26);
    c2 = `as.logical`(r28);
    if c2 then L48() else L7();
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L44():
    enc = ld enc;
    check L46() else D12();
  L45():
    r25 = dyn base1(<sym enc>);
    goto L6(r25);
  D12():
    deopt 42 [enc];
  L7():
    goto L9();
  L9():
    dir_exists = ldf `dir.exists`;
    check L54() else D16();
  L46():
    enc1 = force? enc;
    checkMissing(enc1);
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(enc1);
    check L47() else D13();
  L48():
    options1 = ldf options;
    check L49() else D14();
  D13():
    deopt 45 [r27];
  D14():
    deopt 48 [];
  D16():
    deopt 59 [];
  L47():
    goto L6(r27);
  L49():
    p9 = prom<V +>{
      enc2 = ld enc;
      enc3 = force? enc2;
      checkMissing(enc3);
      return enc3;
    };
    r30 = dyn options1[encoding](p9);
    check L50() else D15();
  L54():
    p10 = prom<V +>{
      dataDir = ld dataDir;
      dataDir1 = force? dataDir;
      checkMissing(dataDir1);
      return dataDir1;
    };
    r36 = dyn dir_exists(p10);
    check L55() else D17();
  D15():
    deopt 51 [r30];
  D17():
    deopt 61 [r36];
  L50():
    st op = r30;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L55():
    c3 = `as.logical`(r36);
    if c3 then L56() else L10();
  L8(r32):
    goto L9();
  L10():
    invisible.0();
    popenv;
    return NULL;
  L51():
    on_exit = ldf `on.exit` in base;
    r33 = dyn on_exit(<lang options(encoding=`[[`(op, 1))>);
    goto L8(r33);
  L52():
    r31 = dyn base2(<lang options(encoding=`[[`(op, 1))>);
    goto L8(r31);
  L56():
    file_exists = ldf `file.exists`;
    check L57() else D18();
  D18():
    deopt 63 [];
  L57():
    p12 = prom<V +>{
      file_path2 = ldf `file.path`;
      p11 = prom<V +>{
        dataDir2 = ld dataDir;
        dataDir3 = force? dataDir2;
        checkMissing(dataDir3);
        return dataDir3;
      };
      r38 = dyn file_path2(p11, "Rdata.rds");
      return r38;
    };
    r40 = dyn file_exists(p12);
    check L58() else D19();
  D19():
    deopt 65 [r40];
  L58():
    c4 = `as.logical`(r40);
    if c4 then L59() else L11(c4);
  L11(c6):
    c10 = `as.logical`(c6);
    if c10 then L63() else L12(c10);
  L59():
    file_exists1 = ldf `file.exists`;
    check L60() else D20();
  D20():
    deopt 67 [c4];
  L12(c12):
    c16 = `as.logical`(c12);
    if c16 then L67() else L13();
  L60():
    p16 = prom<V +>{
      file_path3 = ldf `file.path`;
      p13 = prom<V +>{
        dataDir4 = ld dataDir;
        dataDir5 = force? dataDir4;
        checkMissing(dataDir5);
        return dataDir5;
      };
      p15 = prom<V +>{
        paste0 = ldf paste0;
        p14 = prom<V +>{
          package5 = ld package;
          package6 = force? package5;
          checkMissing(package6);
          return package6;
        };
        r43 = dyn paste0(p14, ".rdx");
        return r43;
      };
      r45 = dyn file_path3(p13, p15);
      return r45;
    };
    r47 = dyn file_exists1(p16);
    check L61() else D21();
  L63():
    file_exists2 = ldf `file.exists`;
    check L64() else D22();
  D21():
    deopt 69 [c4, r47];
  D22():
    deopt 72 [c10];
  L13():
    new_env = ldf `new.env`;
    check L71() else D26();
  L61():
    c7 = `as.logical`(r47);
    c8 = `&&`(c4, c7);
    goto L11(c8);
  L64():
    p20 = prom<V +>{
      file_path4 = ldf `file.path`;
      p17 = prom<V +>{
        dataDir6 = ld dataDir;
        dataDir7 = force? dataDir6;
        checkMissing(dataDir7);
        return dataDir7;
      };
      p19 = prom<V +>{
        paste1 = ldf paste0;
        p18 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          return package8;
        };
        r50 = dyn paste1(p18, ".rdb");
        return r50;
      };
      r52 = dyn file_path4(p17, p19);
      return r52;
    };
    r54 = dyn file_exists2(p20);
    check L65() else D23();
  L67():
    warning = ldf warning;
    check L68() else D24();
  D23():
    deopt 74 [c10, r54];
  D24():
    deopt 77 [];
  D26():
    deopt 81 [];
  L65():
    c13 = `as.logical`(r54);
    c14 = `&&`(c10, c13);
    goto L12(c14);
  L68():
    r55 = dyn warning("package seems to be using lazy loading for data already");
    check L69() else D25();
  L71():
    r56 = dyn new_env[hash](TRUE);
    check L72() else D27();
  D25():
    deopt 79 [r55];
  D27():
    deopt 84 [r56];
  L69():
    popenv;
    return r55;
  L72():
    st dataEnv = r56;
    new_env1 = ldf `new.env`;
    check L73() else D28();
  D28():
    deopt 87 [];
  L73():
    r57 = dyn new_env1();
    check L74() else D29();
  D29():
    deopt 88 [r57];
  L74():
    st tmpEnv = r57;
    list_files_with_type = ldf list_files_with_type;
    check L75() else D30();
  D30():
    deopt 91 [];
  L75():
    p21 = prom<V +>{
      dataDir8 = ld dataDir;
      dataDir9 = force? dataDir8;
      checkMissing(dataDir9);
      return dataDir9;
    };
    r59 = dyn list_files_with_type(p21, "data");
    check L76() else D31();
  D31():
    deopt 94 [r59];
  L76():
    st files = r59;
    st f0 = r59;
    unique = ldf unique;
    check L77() else D32();
  D32():
    deopt 98 [];
  L77():
    p24 = prom<V +>{
      basename = ldf basename;
      p23 = prom<V +>{
        file_path_sans_ext = ldf file_path_sans_ext;
        p22 = prom<V +>{
          files = ld files;
          files1 = force? files;
          checkMissing(files1);
          return files1;
        };
        r61 = dyn file_path_sans_ext(p22, TRUE);
        return r61;
      };
      r63 = dyn basename(p23);
      return r63;
    };
    r65 = dyn unique(p24);
    check L78() else D33();
  D33():
    deopt 100 [r65];
  L78():
    st files = r65;
    sym3 = ldf vector;
    base3 = ldf vector in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L79() else L80();
  L14(r67):
    st dlist = r67;
    files4 = ld files;
    check L86() else D37();
  L79():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L80():
    r66 = dyn base3("list", <lang length(files)>);
    goto L14(r66);
  D37():
    deopt 114 [files4];
  L15(r69):
    vector = ldf vector in base;
    r71 = dyn vector("list", r69);
    check L85() else D36();
  L81():
    files2 = ld files;
    check L83() else D34();
  L82():
    r68 = dyn base4(<sym files>);
    goto L15(r68);
  L86():
    files5 = force? files4;
    checkMissing(files5);
    l = ld dlist;
    names__ = ldf `names<-`;
    check L87() else D38();
  D34():
    deopt 107 [files2];
  D36():
    deopt 112 [r71];
  D38():
    deopt 117 [files5, l, files5];
  L83():
    files3 = force? files2;
    checkMissing(files3);
    length1 = ldf length in base;
    r70 = dyn length1(files3);
    check L84() else D35();
  L85():
    goto L14(r71);
  L87():
    r72 = dyn names__(l, NULL, files5);
    check L88() else D39();
  D35():
    deopt 110 [r70];
  D39():
    deopt 119 [files5, r72];
  L84():
    goto L15(r70);
  L88():
    st dlist = r72;
    character = ldf character;
    check L89() else D40();
  D40():
    deopt 122 [];
  L89():
    r73 = dyn character(0);
    check L90() else D41();
  D41():
    deopt 124 [r73];
  L90():
    st loaded = r73;
    files6 = ld files;
    check L91() else D42();
  D42():
    deopt 126 [files6];
  L91():
    files7 = force? files6;
    checkMissing(files7);
    s = toForSeq(files7);
    l1 = length(s);
    i = 0;
    goto L16(i);
  L16(i1):
    i2 = `+`.1(i1, 1);
    c17 = `<`.1(l1, i2);
    if c17 then L92() else L19();
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    __1 = ldf `::`;
    check L93() else D43();
  L92():
    duplicated = ldf duplicated;
    check L113() else D58();
  D43():
    deopt 129 [i2];
  D58():
    deopt 197 [];
  L93():
    r74 = dyn __1("utils", "data");
    check L94() else D44();
  L113():
    p36 = prom<V +>{
      loaded2 = ld loaded;
      loaded3 = force? loaded2;
      checkMissing(loaded3);
      return loaded3;
    };
    r98 = dyn duplicated(p36);
    check L114() else D59();
  D44():
    deopt 132 [i2, r74];
  D59():
    deopt 199 [r98];
  L94():
    checkFun.0(r74);
    r75 = r74 as cls;
    p25 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p26 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    p27 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    p28 = prom<V +>{
      dataEnv = ld dataEnv;
      dataEnv1 = force? dataEnv;
      checkMissing(dataEnv1);
      return dataEnv1;
    };
    r80 = dyn r75[list, package, `lib.loc`, envir, overwrite](p25, p26, p27, p28, TRUE);
    check L95() else D45();
  L114():
    st dup = r98;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  D45():
    deopt 144 [i2, r80];
  L20(r100):
    c20 = `as.logical`(r100);
    if c20 then L119() else L21();
  L95():
    __2 = ldf `::`;
    check L96() else D46();
  L115():
    dup = ld dup;
    check L117() else D60();
  L116():
    r99 = dyn base6(<sym dup>);
    goto L20(r99);
  D46():
    deopt 146 [i2];
  D60():
    deopt 203 [dup];
  L21():
    goto L22();
  L22():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L123() else L124();
  L96():
    r81 = dyn __2("utils", "data");
    check L97() else D47();
  L117():
    dup1 = force? dup;
    checkMissing(dup1);
    any = ldf any in base;
    r101 = dyn any(dup1);
    check L118() else D61();
  L119():
    warning1 = ldf warning;
    check L120() else D62();
  D47():
    deopt 149 [i2, r81];
  D61():
    deopt 206 [r101];
  D62():
    deopt 208 [];
  L23(r119):
    c22 = `as.logical`(r119);
    if c22 then L127() else L24();
  L97():
    checkFun.0(r81);
    r82 = r81 as cls;
    p29 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p30 = prom<V +>{
      package11 = ld package;
      package12 = force? package11;
      checkMissing(package12);
      return package12;
    };
    p31 = prom<V +>{
      lib_loc7 = ld `lib.loc`;
      lib_loc8 = force? lib_loc7;
      checkMissing(lib_loc8);
      return lib_loc8;
    };
    p32 = prom<V +>{
      tmpEnv = ld tmpEnv;
      tmpEnv1 = force? tmpEnv;
      checkMissing(tmpEnv1);
      return tmpEnv1;
    };
    r87 = dyn r82[list, package, `lib.loc`, envir, overwrite](p29, p30, p31, p32, TRUE);
    check L98() else D48();
  L118():
    goto L20(r101);
  L120():
    p42 = prom<V +>{
      sprintf = ldf sprintf;
      p38 = prom<V +>{
        ngettext = ldf ngettext;
        p37 = prom<V +>{
          sym7 = ldf sum;
          base7 = ldf sum in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r103):
          return r103;
        L1():
          dup2 = ld dup;
          dup3 = force? dup2;
          checkMissing(dup3);
          sum = ldf sum in base;
          r104 = dyn sum(dup3);
          goto L0(r104);
        L2():
          r102 = dyn base7(<sym dup>);
          goto L0(r102);
        };
        r106 = dyn ngettext(p37, "object %s is created by more than one data call", "objects %s are created by more than one data call");
        return r106;
      };
      p41 = prom<V +>{
        paste2 = ldf paste;
        p40 = prom<V +>{
          sQuote = ldf sQuote;
          p39 = prom<V +>{
            loaded4 = ld loaded;
            loaded5 = force? loaded4;
            checkMissing(loaded5);
            c21 = `is.object`(loaded5);
            if c21 then L1() else L2(loaded5);
          L0(dx5):
            return dx5;
          L1():
            dr4 = tryDispatchBuiltin.1("[", loaded5);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(loaded7):
            dup4 = ld dup;
            dup5 = force? dup4;
            __3 = ldf `[` in base;
            r108 = dyn __3(loaded7, dup5);
            goto L0(r108);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          r110 = dyn sQuote(p39);
          return r110;
        };
        r112 = dyn paste2[, collapse](p40, ", ");
        return r112;
      };
      r114 = dyn sprintf(p38, p41);
      return r114;
    };
    r116 = dyn warning1[, `call.`, domain](p42, FALSE, NA_LGL);
    check L121() else D63();
  L123():
    loaded8 = ld loaded;
    check L125() else D64();
  L124():
    r118 = dyn base8(<sym loaded>);
    goto L23(r118);
  D48():
    deopt 161 [i2, r87];
  D63():
    deopt 214 [r116];
  D64():
    deopt 219 [loaded8];
  L24():
    invisible.0();
    popenv;
    return NULL;
  L98():
    ls = ldf ls;
    check L99() else D49();
  L121():
    goto L22();
  L125():
    loaded9 = force? loaded8;
    checkMissing(loaded9);
    length2 = ldf length in base;
    r120 = dyn length2(loaded9);
    check L126() else D65();
  L127():
    file_path5 = ldf `file.path`;
    check L128() else D66();
  D49():
    deopt 163 [i2];
  D65():
    deopt 222 [r120];
  D66():
    deopt 224 [];
  L99():
    p33 = prom<V +>{
      tmpEnv2 = ld tmpEnv;
      tmpEnv3 = force? tmpEnv2;
      checkMissing(tmpEnv3);
      return tmpEnv3;
    };
    r89 = dyn ls[envir, `all.names`](p33, TRUE);
    check L100() else D50();
  L126():
    goto L23(r120);
  L128():
    p43 = prom<V +>{
      dataDir10 = ld dataDir;
      dataDir11 = force? dataDir10;
      checkMissing(dataDir11);
      return dataDir11;
    };
    r122 = dyn file_path5(p43, "Rdata");
    check L129() else D67();
  D50():
    deopt 168 [i2, r89];
  D67():
    deopt 227 [r122];
  L100():
    st tmp = r89;
    rm = ldf rm;
    check L101() else D51();
  L129():
    st dbbase = r122;
    makeLazyLoadDB = ldf makeLazyLoadDB;
    check L130() else D68();
  D51():
    deopt 171 [i2];
  D68():
    deopt 230 [];
  L101():
    p34 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    p35 = prom<V +>{
      tmpEnv4 = ld tmpEnv;
      tmpEnv5 = force? tmpEnv4;
      checkMissing(tmpEnv5);
      return tmpEnv5;
    };
    r92 = dyn rm[list, envir](p34, p35);
    check L102() else D52();
  L130():
    p44 = prom<V +>{
      dataEnv2 = ld dataEnv;
      dataEnv3 = force? dataEnv2;
      checkMissing(dataEnv3);
      return dataEnv3;
    };
    p45 = prom<V +>{
      dbbase = ld dbbase;
      dbbase1 = force? dbbase;
      checkMissing(dbbase1);
      return dbbase1;
    };
    p46 = prom<V +>{
      compress1 = ld compress;
      compress2 = force? compress1;
      checkMissing(compress2);
      return compress2;
    };
    r126 = dyn makeLazyLoadDB[, , compress](p44, p45, p46);
    check L131() else D69();
  D52():
    deopt 176 [i2, r92];
  D69():
    deopt 235 [r126];
  L102():
    tmp2 = ld tmp;
    check L103() else D53();
  L131():
    saveRDS = ldf saveRDS;
    check L132() else D70();
  D53():
    deopt 177 [i2, tmp2];
  D70():
    deopt 237 [];
  L103():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    l2 = ld dlist;
    c18 = `is.object`(l2);
    if c18 then L104() else L105(i2, tmp3, l2);
  L132():
    p47 = prom<V +>{
      dlist = ld dlist;
      dlist1 = force? dlist;
      checkMissing(dlist1);
      return dlist1;
    };
    p49 = prom<V +>{
      file_path6 = ldf `file.path`;
      p48 = prom<V +>{
        dataDir12 = ld dataDir;
        dataDir13 = force? dataDir12;
        checkMissing(dataDir13);
        return dataDir13;
      };
      r129 = dyn file_path6(p48, "Rdata.rds");
      return r129;
    };
    p50 = prom<V +>{
      compress3 = ld compress;
      compress4 = force? compress3;
      checkMissing(compress4);
      return compress4;
    };
    r132 = dyn saveRDS[, , compress](p47, p49, p50);
    check L133() else D71();
  D71():
    deopt 242 [r132];
  L17(i8, dx3):
    st dlist = dx3;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L108() else L109();
  L104():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, tmp3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L106() else L105(i2, tmp3, dr2);
  L105(i6, tmp5, l4):
    f4 = ld f;
    check L107() else D54();
  L133():
    unlink = ldf unlink;
    check L134() else D72();
  D54():
    deopt 180 [i6, tmp5, l4, tmp3, f4];
  D72():
    deopt 244 [];
  L18(i11, r95):
    st loaded = r95;
    goto L16(i11);
  L106():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(i2, dx2);
  L107():
    f5 = force? f4;
    ____ = ldf `[[<-` in base;
    r93 = dyn ____(l4, tmp3, f5);
    goto L17(i6, r93);
  L108():
    loaded = ld loaded;
    check L110() else D55();
  L109():
    r94 = dyn base5(<sym loaded>, <sym tmp>);
    goto L18(i8, r94);
  L134():
    p51 = prom<V +>{
      f6 = ld f0;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r134 = dyn unlink(p51);
    check L135() else D73();
  D55():
    deopt 186 [i8, loaded];
  D73():
    deopt 246 [r134];
  L110():
    loaded1 = force? loaded;
    checkMissing(loaded1);
    tmp8 = ld tmp;
    check L111() else D56();
  L135():
    popenv;
    return r134;
  D56():
    deopt 188 [i8, tmp8];
  L111():
    tmp9 = force? tmp8;
    checkMissing(tmp9);
    c19 = ldf c in base;
    r96 = dyn c19(loaded1, tmp9);
    check L112() else D57();
  D57():
    deopt 191 [i8, r96];
  L112():
    goto L18(i8, r96);
  }
}