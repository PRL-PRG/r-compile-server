fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner995737185;
    st list_data_in_pkg = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner995737185(package, `lib.loc`, dir, use_datalist) {
  (reg package:*, reg lib_loc:*, reg dir:*, reg use_datalist:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var dir:*, var use_datalist:*, reg use_datalist_isMissing:L, reg use_datalist_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg find_package:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg dir1:*, reg dir2:V, reg length:cls, reg r9:V, reg r10:V, reg c1:L, reg stop:cls, reg packageNotFoundError:cls, reg package3:*, reg package4:V, reg p2:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p3:p(V +), reg sys_call:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg missing1:cls, reg r22:V, reg c2:L, reg stop1:cls, reg r23:V, reg dir_exists:cls, reg dir3:*, reg dir4:V, reg p6:p(V +), reg r26:V, reg r27:V, reg c3:L, reg stop2:cls, reg gettextf:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg file_path_as_absolute:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg r34:V, reg character:cls, reg r35:V, reg dir_exists1:cls, reg file_path:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg r37:V, reg p11:p(V +), reg r39:V, reg c4:L, reg file_exists:cls, reg file_path1:cls, reg dataDir:*, reg dataDir1:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg r43:V, reg c5:L, reg readRDS:cls, reg sv:*, reg sv1:V, reg p14:p(V +), reg r45:V, reg file_exists1:cls, reg file_path2:cls, reg dataDir2:*, reg dataDir3:V, reg p15:p(V +), reg r48:V, reg p16:p(V +), reg r50:V, reg c6:L, reg c8:V, reg use_datalist1:*, reg use_datalist2:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg file_info:cls, reg sv2:*, reg sv3:V, reg p17:p(V +), reg r52:V, reg c15:L, reg c17:L, reg r54:V, reg dr:V, reg dc:L, reg dx:V, reg c19:L, reg dx1:V, reg r55:V, reg r56:V, reg c20:L, reg c21:V, reg c23:L, reg strsplit:cls, reg readLines:cls, reg sv4:*, reg sv5:V, reg p18:p(V +), reg r58:V, reg p19:p(V +), reg r60:V, reg lapply:cls, reg ans:*, reg ans1:V, reg p20:p(V +), reg r62:cls, reg p21:p(V +), reg r64:V, reg lapply1:cls, reg ans2:*, reg ans3:V, reg p22:p(V +), reg r66:cls, reg p23:p(V +), reg r68:V, reg nms:*, reg nms1:V, reg l:*, reg names__:cls, reg r69:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r70:V, reg r71:V, reg package5:*, reg package6:V, reg length1:cls, reg r72:V, reg r73:V, reg c24:L, reg setwd:cls, reg dir11:*, reg dir12:V, reg p24:p(V +), reg r75:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r76:V, reg r77:V, reg on_exit:cls, reg r78:V, reg list_files_with_type:cls, reg dataDir4:*, reg dataDir5:V, reg p25:p(V +), reg r81:V, reg unique:cls, reg basename:cls, reg file_path_sans_ext:cls, reg files:*, reg files1:V, reg p26:p(V +), reg r83:V, reg p27:p(V +), reg r85:V, reg p28:p(V +), reg r87:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r88:V, reg r89:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r90:V, reg r91:V, reg files2:*, reg files3:V, reg length2:cls, reg r92:V, reg vector:cls, reg r93:V, reg new_env:cls, reg r94:V, reg files4:*, reg files5:V, reg l1:*, reg names__1:cls, reg r95:V, reg files6:*, reg files7:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c25:L, reg x:V, reg tryCatch:cls, reg suppressMessages:cls, reg suppressWarnings:cls, reg __:cls, reg r96:V, reg r97:cls, reg f:*, reg f1:V, reg p29:p(V +), reg package7:*, reg package8:V, reg p30:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p31:p(V +), reg dataEnv:*, reg dataEnv1:V, reg p32:p(V +), reg r102:V, reg p33:p(V +), reg r104:V, reg p34:p(V +), reg r106:V, reg p35:p(V +), reg identity:*, reg identity1:V, reg p36:p(V +), reg r109:V, reg ls:cls, reg dataEnv2:*, reg dataEnv3:V, reg p37:p(V +), reg r111:V, reg l3:*, reg c26:L, reg i6:I, reg r113:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg f2:*, reg f3:V, reg ____:cls, reg r116:V, reg rm:cls, reg ans4:*, reg ans5:V, reg c27:L, reg ans7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg f4:*, reg f5:V, reg __1:cls, reg r117:V, reg p38:p(V +), reg dataEnv4:*, reg dataEnv5:V, reg p39:p(V +), reg r120:V, reg ans8:*, reg ans9:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    st dir = dir;
    use_datalist_isMissing = missing.0(use_datalist);
    if use_datalist_isMissing then L1(TRUE) else L1(use_datalist);
  L1(use_datalist_orDefault):
    st use_datalist = use_datalist_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L30() else L3();
  L28():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L2(r2);
  L29():
    r = dyn base(<sym package>);
    goto L2(r);
  L3():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L7():
    dir_exists1 = ldf `dir.exists`;
    check L58() else D16();
  L30():
    find_package = ldf `find.package`;
    check L31() else D0();
  D0():
    deopt 5 [];
  D16():
    deopt 61 [];
  L8(r21):
    c2 = `as.logical`(r21);
    if c2 then L44() else L9();
  L31():
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
    r6 = dyn find_package[, , quiet](p, p1, TRUE);
    check L32() else D1();
  L42():
    missing1 = ldf missing in base;
    r22 = dyn missing1(<sym dir>);
    goto L8(r22);
  L43():
    r20 = dyn base2(<sym dir>);
    goto L8(r20);
  L58():
    p11 = prom<V +>{
      file_path = ldf `file.path`;
      p10 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r37 = dyn file_path(p10, "data");
      st dataDir = r37;
      invisible.0();
      return r37;
    };
    r39 = dyn dir_exists1(p11);
    check L59() else D17();
  D1():
    deopt 10 [r6];
  D17():
    deopt 63 [r39];
  L9():
    goto L10();
  L10():
    dir_exists = ldf `dir.exists`;
    check L48() else D8();
  L32():
    st dir = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L44():
    stop1 = ldf stop;
    check L45() else D6();
  L59():
    c4 = `as.logical`(r39);
    if c4 then L60() else L13();
  D6():
    deopt 29 [];
  D8():
    deopt 35 [];
  L4(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L37() else L5();
  L13():
    popenv;
    return NULL;
  L33():
    dir1 = ld dir;
    check L35() else D2();
  L34():
    r7 = dyn base1(<sym dir>);
    goto L4(r7);
  L45():
    r23 = dyn stop1("you must specify 'package' or 'dir'");
    check L46() else D7();
  L48():
    p6 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r26 = dyn dir_exists(p6);
    check L49() else D9();
  L60():
    file_exists = ldf `file.exists`;
    check L61() else D18();
  D2():
    deopt 14 [dir1];
  D7():
    deopt 31 [r23];
  D9():
    deopt 37 [r26];
  D18():
    deopt 65 [];
  L5():
    goto L6(NULL);
  L6(r18):
    goto L7();
  L35():
    dir2 = force? dir1;
    checkMissing(dir2);
    length = ldf length in base;
    r9 = dyn length(dir2);
    check L36() else D3();
  L37():
    stop = ldf stop;
    check L38() else D4();
  L46():
    goto L10();
  L49():
    r27 = `!`(r26);
    c3 = `as.logical`(r27);
    if c3 then L50() else L11();
  L61():
    p13 = prom<V +>{
      file_path1 = ldf `file.path`;
      p12 = prom<V +>{
        dataDir = ld dataDir;
        dataDir1 = force? dataDir;
        checkMissing(dataDir1);
        return dataDir1;
      };
      r41 = dyn file_path1(p12, "Rdata.rds");
      st sv = r41;
      invisible.0();
      return r41;
    };
    r43 = dyn file_exists(p13);
    check L62() else D19();
  D3():
    deopt 17 [r9];
  D4():
    deopt 20 [];
  D19():
    deopt 67 [r43];
  L11():
    goto L12();
  L12():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L54() else D12();
  L36():
    goto L4(r9);
  L38():
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
        r13 = dyn sys_call();
        return r13;
      };
      r15 = dyn packageNotFoundError(p2, p3, p4);
      return r15;
    };
    r17 = dyn stop(p5);
    check L39() else D5();
  L50():
    stop2 = ldf stop;
    check L51() else D10();
  L62():
    c5 = `as.logical`(r43);
    if c5 then L63() else L14();
  D5():
    deopt 22 [r17];
  D10():
    deopt 40 [];
  D12():
    deopt 48 [];
  L14():
    file_exists1 = ldf `file.exists`;
    check L67() else D22();
  L15():
    ans8 = ld ans;
    check L129() else D60();
  L39():
    goto L6(r17);
  L51():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r29 = dyn gettextf("directory '%s' does not exist", p7);
      return r29;
    };
    r31 = dyn stop2[, domain](p8, NA_LGL);
    check L52() else D11();
  L54():
    p9 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r34 = dyn file_path_as_absolute(p9);
    check L55() else D13();
  L63():
    readRDS = ldf readRDS;
    check L64() else D20();
  D11():
    deopt 44 [r31];
  D13():
    deopt 50 [r34];
  D20():
    deopt 69 [];
  D22():
    deopt 74 [];
  D60():
    deopt 195 [ans8];
  L52():
    goto L12();
  L55():
    st dir = r34;
    character = ldf character;
    check L56() else D14();
  L64():
    p14 = prom<V +>{
      sv = ld sv;
      sv1 = force? sv;
      checkMissing(sv1);
      return sv1;
    };
    r45 = dyn readRDS(p14);
    check L65() else D21();
  L67():
    p16 = prom<V +>{
      file_path2 = ldf `file.path`;
      p15 = prom<V +>{
        dataDir2 = ld dataDir;
        dataDir3 = force? dataDir2;
        checkMissing(dataDir3);
        return dataDir3;
      };
      r48 = dyn file_path2(p15, "datalist");
      st sv = r48;
      invisible.0();
      return r48;
    };
    r50 = dyn file_exists1(p16);
    check L68() else D23();
  L129():
    ans9 = force? ans8;
    checkMissing(ans9);
    popenv;
    return ans9;
  D14():
    deopt 53 [];
  D21():
    deopt 71 [r45];
  D23():
    deopt 76 [r50];
  L56():
    r35 = dyn character(0);
    check L57() else D15();
  L65():
    st ans = r45;
    goto L15();
  L68():
    c6 = `as.logical`(r50);
    if c6 then L69() else L16(c6);
  D15():
    deopt 55 [r35];
  L16(c8):
    c12 = `as.logical`(c8);
    if c12 then L72() else L17(c12);
  L57():
    st package = r35;
    st `lib.loc` = NULL;
    goto L7();
  L69():
    use_datalist1 = ld use_datalist;
    check L70() else D24();
  D24():
    deopt 77 [c6, use_datalist1];
  L17(c14):
    c23 = `as.logical`(c14);
    if c23 then L80() else L18();
  L70():
    use_datalist2 = force? use_datalist1;
    checkMissing(use_datalist2);
    c9 = `as.logical`(use_datalist2);
    c10 = `&&`(c6, c9);
    goto L16(c10);
  L72():
    file_info = ldf `file.info`;
    check L73() else D25();
  D25():
    deopt 81 [c12];
  L18():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L91() else L92();
  L73():
    p17 = prom<V +>{
      sv2 = ld sv;
      sv3 = force? sv2;
      checkMissing(sv3);
      return sv3;
    };
    r52 = dyn file_info(p17);
    check L74() else D26();
  L80():
    strsplit = ldf strsplit;
    check L81() else D27();
  D26():
    deopt 83 [c12, r52];
  D27():
    deopt 88 [];
  L19(r71):
    r73 = `!`(r71);
    c24 = `as.logical`(r73);
    if c24 then L95() else L20();
  L74():
    c15 = `is.object`(r52);
    if c15 then L76() else L77(c12, r52);
  L81():
    p19 = prom<V +>{
      readLines = ldf readLines;
      p18 = prom<V +>{
        sv4 = ld sv;
        sv5 = force? sv4;
        checkMissing(sv5);
        return sv5;
      };
      r58 = dyn readLines[, warn](p18, FALSE);
      return r58;
    };
    r60 = dyn strsplit(p19, ":");
    check L82() else D28();
  L91():
    package5 = ld package;
    check L93() else D36();
  L92():
    r70 = dyn base3(<sym package>);
    goto L19(r70);
  D28():
    deopt 91 [r60];
  D36():
    deopt 114 [package5];
  L20():
    goto L22();
  L22():
    list_files_with_type = ldf list_files_with_type;
    check L101() else D40();
  L75(c19, dx1):
    r56 = `!`(dx1);
    c20 = `as.logical`(r56);
    c21 = `&&`(c19, c20);
    goto L17(c21);
  L76():
    dr = tryDispatchBuiltin.1("$", r52);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L78() else L77(c12, dr);
  L77(c17, r54):
    r55 = `$`(r54, <sym isdir>);
    goto L75(c17, r55);
  L82():
    st ans = r60;
    lapply = ldf lapply;
    check L83() else D29();
  L93():
    package6 = force? package5;
    checkMissing(package6);
    length1 = ldf length in base;
    r72 = dyn length1(package6);
    check L94() else D37();
  L95():
    setwd = ldf setwd;
    check L96() else D38();
  D29():
    deopt 94 [];
  D37():
    deopt 117 [r72];
  D38():
    deopt 120 [];
  D40():
    deopt 130 [];
  L78():
    dx = getTryDispatchBuiltinValue(dr);
    goto L75(c12, dx);
  L83():
    p20 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    p21 = prom<V +>{
      r62 = clos inner2501545716;
      return r62;
    };
    r64 = dyn lapply(p20, p21);
    check L84() else D30();
  L94():
    goto L19(r72);
  L96():
    p24 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r75 = dyn setwd(p24);
    check L97() else D39();
  L101():
    p25 = prom<V +>{
      dataDir4 = ld dataDir;
      dataDir5 = force? dataDir4;
      checkMissing(dataDir5);
      return dataDir5;
    };
    r81 = dyn list_files_with_type(p25, "data");
    check L102() else D41();
  D30():
    deopt 97 [r64];
  D39():
    deopt 122 [r75];
  D41():
    deopt 133 [r81];
  L84():
    st nms = r64;
    lapply1 = ldf lapply;
    check L85() else D31();
  L97():
    st owd = r75;
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  L102():
    st files = r81;
    unique = ldf unique;
    check L103() else D42();
  D31():
    deopt 100 [];
  D42():
    deopt 136 [];
  L21(r77):
    goto L22();
  L85():
    p22 = prom<V +>{
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      return ans3;
    };
    p23 = prom<V +>{
      r66 = clos inner2501545716;
      return r66;
    };
    r68 = dyn lapply1(p22, p23);
    check L86() else D32();
  L98():
    on_exit = ldf `on.exit` in base;
    r78 = dyn on_exit(<lang setwd(owd)>);
    goto L21(r78);
  L99():
    r76 = dyn base4(<lang setwd(owd)>);
    goto L21(r76);
  L103():
    p28 = prom<V +>{
      basename = ldf basename;
      p27 = prom<V +>{
        file_path_sans_ext = ldf file_path_sans_ext;
        p26 = prom<V +>{
          files = ld files;
          files1 = force? files;
          checkMissing(files1);
          return files1;
        };
        r83 = dyn file_path_sans_ext(p26, TRUE);
        return r83;
      };
      r85 = dyn basename(p27);
      return r85;
    };
    r87 = dyn unique(p28);
    check L104() else D43();
  D32():
    deopt 103 [r68];
  D43():
    deopt 138 [r87];
  L86():
    st ans = r68;
    nms = ld nms;
    check L87() else D33();
  L104():
    st files = r87;
    sym5 = ldf vector;
    base5 = ldf vector in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L105() else L106();
  D33():
    deopt 105 [nms];
  L23(r89):
    st ans = r89;
    new_env = ldf `new.env`;
    check L112() else D47();
  L87():
    nms1 = force? nms;
    checkMissing(nms1);
    l = ld ans;
    names__ = ldf `names<-`;
    check L88() else D34();
  L105():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L107() else L108();
  L106():
    r88 = dyn base5("list", <lang length(files)>);
    goto L23(r88);
  D34():
    deopt 108 [nms1, l, nms1];
  D47():
    deopt 153 [];
  L24(r91):
    vector = ldf vector in base;
    r93 = dyn vector("list", r91);
    check L111() else D46();
  L88():
    r69 = dyn names__(l, NULL, nms1);
    check L89() else D35();
  L107():
    files2 = ld files;
    check L109() else D44();
  L108():
    r90 = dyn base6(<sym files>);
    goto L24(r90);
  L112():
    r94 = dyn new_env[hash](TRUE);
    check L113() else D48();
  D35():
    deopt 110 [nms1, r69];
  D44():
    deopt 145 [files2];
  D46():
    deopt 150 [r93];
  D48():
    deopt 156 [r94];
  L89():
    st ans = r69;
    goto L15();
  L109():
    files3 = force? files2;
    checkMissing(files3);
    length2 = ldf length in base;
    r92 = dyn length2(files3);
    check L110() else D45();
  L111():
    goto L23(r93);
  L113():
    st dataEnv = r94;
    files4 = ld files;
    check L114() else D49();
  D45():
    deopt 148 [r92];
  D49():
    deopt 158 [files4];
  L110():
    goto L24(r92);
  L114():
    files5 = force? files4;
    checkMissing(files5);
    l1 = ld ans;
    names__1 = ldf `names<-`;
    check L115() else D50();
  D50():
    deopt 161 [files5, l1, files5];
  L115():
    r95 = dyn names__1(l1, NULL, files5);
    check L116() else D51();
  D51():
    deopt 163 [files5, r95];
  L116():
    st ans = r95;
    files6 = ld files;
    check L117() else D52();
  D52():
    deopt 165 [files6];
  L117():
    files7 = force? files6;
    checkMissing(files7);
    s = toForSeq(files7);
    l2 = length(s);
    i = 0;
    goto L25(i);
  L25(i1):
    i2 = `+`.1(i1, 1);
    c25 = `<`.1(l2, i2);
    if c25 then L118() else L27();
  L27():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    tryCatch = ldf tryCatch;
    check L119() else D53();
  L118():
    goto L15();
  D53():
    deopt 168 [i2];
  L119():
    p35 = prom<V +>{
      suppressMessages = ldf suppressMessages;
      p34 = prom<V +>{
        suppressWarnings = ldf suppressWarnings;
        p33 = prom<V +>{
          __ = ldf `::`;
          r96 = dyn __("utils", "data");
          checkFun.0(r96);
          r97 = r96 as cls;
          p29 = prom<V +>{
            f = ld f;
            f1 = force? f;
            checkMissing(f1);
            return f1;
          };
          p30 = prom<V +>{
            package7 = ld package;
            package8 = force? package7;
            checkMissing(package8);
            return package8;
          };
          p31 = prom<V +>{
            lib_loc5 = ld `lib.loc`;
            lib_loc6 = force? lib_loc5;
            checkMissing(lib_loc6);
            return lib_loc6;
          };
          p32 = prom<V +>{
            dataEnv = ld dataEnv;
            dataEnv1 = force? dataEnv;
            checkMissing(dataEnv1);
            return dataEnv1;
          };
          r102 = dyn r97[list, package, `lib.loc`, envir](p29, p30, p31, p32);
          return r102;
        };
        r104 = dyn suppressWarnings(p33);
        return r104;
      };
      r106 = dyn suppressMessages(p34);
      return r106;
    };
    p36 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r109 = dyn tryCatch[, error](p35, p36);
    check L120() else D54();
  D54():
    deopt 172 [i2, r109];
  L120():
    ls = ldf ls;
    check L121() else D55();
  D55():
    deopt 174 [i2];
  L121():
    p37 = prom<V +>{
      dataEnv2 = ld dataEnv;
      dataEnv3 = force? dataEnv2;
      checkMissing(dataEnv3);
      return dataEnv3;
    };
    r111 = dyn ls[envir, `all.names`](p37, TRUE);
    check L122() else D56();
  D56():
    deopt 179 [i2, r111];
  L122():
    l3 = ld ans;
    c26 = `is.object`(l3);
    if c26 then L123() else L124(i2, r111, l3);
  L26(i8, dx3):
    st ans = dx3;
    rm = ldf rm;
    check L127() else D58();
  L123():
    dr2 = tryDispatchBuiltin.0("[[<-", l3, r111);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L125() else L124(i2, r111, dr2);
  L124(i6, r113, l5):
    f2 = ld f;
    check L126() else D57();
  D57():
    deopt 181 [i6, r113, l5, r111, f2];
  D58():
    deopt 186 [i8];
  L125():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(i2, dx2);
  L126():
    f3 = force? f2;
    ____ = ldf `[[<-` in base;
    r116 = dyn ____(l5, r111, f3);
    goto L26(i6, r116);
  L127():
    p38 = prom<V +>{
      ans4 = ld ans;
      ans5 = force? ans4;
      checkMissing(ans5);
      c27 = `is.object`(ans5);
      if c27 then L1() else L2(ans5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", ans5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(ans7):
      f4 = ld f;
      f5 = force? f4;
      __1 = ldf `[[` in base;
      r117 = dyn __1(ans7, f5);
      goto L0(r117);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p39 = prom<V +>{
      dataEnv4 = ld dataEnv;
      dataEnv5 = force? dataEnv4;
      checkMissing(dataEnv5);
      return dataEnv5;
    };
    r120 = dyn rm[list, envir](p38, p39);
    check L128() else D59();
  D59():
    deopt 191 [i8, r120];
  L128():
    goto L25(i8);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    __ = ldf `[` in base;
    r = dyn __(x4, 1);
    goto L0(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}