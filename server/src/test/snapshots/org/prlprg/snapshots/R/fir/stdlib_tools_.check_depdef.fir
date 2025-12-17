fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner718194365;
    st `.check_depdef` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner718194365(package, dir, `lib.loc`, WINDOWS) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg WINDOWS:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var WINDOWS:*, reg WINDOWS_isMissing:L, reg WINDOWS_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg WINDOWS1:*, reg WINDOWS2:V, reg r9:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg bad_dev:*, reg bad_dev1:V, reg c4:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg bad_depr:*, reg bad_depr1:V, reg bad_def:*, reg bad_def1:V, reg bad_dev2:*, reg bad_dev3:V, reg c5:cls, reg r16:V, reg character:cls, reg r17:V, reg character1:cls, reg r18:V, reg r19:cls, reg r20:cls, reg r21:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg list:cls, reg r24:V, reg character2:cls, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg missing:cls, reg r28:V, reg r29:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg package1:*, reg package2:V, reg length:cls, reg r32:V, reg r33:V, reg c7:L, reg stop:cls, reg r34:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r38:V, reg _notin_:cls, reg package5:*, reg package6:V, reg p2:p(V +), reg _get_standard_package_names:cls, reg r40:V, reg c8:L, reg r42:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r43:V, reg p3:p(V +), reg r45:V, reg c9:L, reg _load_namespace_quietly:cls, reg package7:*, reg package8:V, reg p4:p(V +), reg dirname:cls, reg dir1:*, reg dir2:V, reg p5:p(V +), reg r48:V, reg p6:p(V +), reg r50:V, reg asNamespace:cls, reg package9:*, reg package10:V, reg p7:p(V +), reg r52:V, reg find_bad_closures:cls, reg code_env:*, reg code_env1:V, reg p8:p(V +), reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg _isMethodsDispatchOn:cls, reg r57:V, reg c10:L, reg find_bad_S4methods:cls, reg code_env2:*, reg code_env3:V, reg p9:p(V +), reg r59:V, reg _get_ref_classes:cls, reg code_env4:*, reg code_env5:V, reg p10:p(V +), reg r61:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg refs:*, reg refs1:V, reg length1:cls, reg r64:V, reg c11:L, reg find_bad_refClasses:cls, reg refs2:*, reg refs3:V, reg p11:p(V +), reg r66:V, reg r67:V, reg r68:V, reg r69:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg missing1:cls, reg r73:V, reg c12:L, reg stop1:cls, reg r74:V, reg file_path_as_absolute:cls, reg dir3:*, reg dir4:V, reg p12:p(V +), reg r77:V, reg file_path:cls, reg dir5:*, reg dir6:V, reg p13:p(V +), reg r79:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p14:p(V +), reg r81:V, reg c13:L, reg new_env:cls, reg r82:V, reg file_path1:cls, reg dir7:*, reg dir8:V, reg p15:p(V +), reg r84:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p16:p(V +), reg r86:V, reg c14:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p17:p(V +), reg r88:V, reg r89:V, reg character3:cls, reg r90:V, reg _source_assignments_in_code_dir:cls, reg code_dir2:*, reg code_dir3:V, reg p18:p(V +), reg code_env6:*, reg code_env7:V, reg p19:p(V +), reg meta:*, reg meta1:V, reg p20:p(V +), reg r94:V, reg find_bad_closures1:cls, reg code_env8:*, reg code_env9:V, reg p21:p(V +), reg r96:V, reg sort:cls, reg unique:cls, reg found:*, reg found1:V, reg p22:p(V +), reg r98:V, reg p23:p(V +), reg r100:V, reg found2:*, reg found3:V, reg c15:L, reg found5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg _in_:cls, reg found6:*, reg found7:V, reg p24:p(V +), reg bad_depr2:*, reg bad_depr3:V, reg p25:p(V +), reg r103:V, reg __:cls, reg r104:V, reg found8:*, reg found9:V, reg c16:L, reg found11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _in_1:cls, reg found12:*, reg found13:V, reg p26:p(V +), reg bad_def2:*, reg bad_def3:V, reg p27:p(V +), reg r107:V, reg __1:cls, reg r108:V, reg found14:*, reg found15:V, reg c17:L, reg found17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg _in_2:cls, reg found18:*, reg found19:V, reg p28:p(V +), reg bad_dev4:*, reg bad_dev5:V, reg p29:p(V +), reg r111:V, reg __2:cls, reg r112:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r113:V, reg r114:V, reg bad_closures:*, reg bad_closures1:V, reg deprecated:*, reg deprecated1:V, reg defunct:*, reg defunct1:V, reg devices:*, reg devices1:V, reg list1:cls, reg r115:V, reg l:*, reg class__:cls, reg r116:V, reg out:*, reg out1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    WINDOWS_isMissing = missing.0(WINDOWS);
    if WINDOWS_isMissing then L1(FALSE) else L1(WINDOWS);
  L1(WINDOWS_orDefault):
    st WINDOWS = WINDOWS_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L2(r1):
    st bad_depr = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L34():
    c = ldf c in base;
    r2 = dyn c("plclust");
    check L36() else D0();
  L35():
    r = dyn base("plclust");
    goto L2(r);
  D0():
    deopt 4 [r2];
  L3(r4):
    st bad_def = r4;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L36():
    goto L2(r2);
  L37():
    c1 = ldf c in base;
    r5 = dyn c1("La.eigen", "tetragamma", "pentagamma", "package.description", "gammaCody", "manglePackageName", ".readRDS", ".saveRDS", "mem.limits", "trySilent", "traceOn", "traceOff", "print.coefmat", "anovalist.lm", "lm.fit.null", "lm.wfit.null", "glm.fit.null", "tkcmd", "tkfile.tail", "tkfile.dir", "tkopen", "tkclose", "tkputs", "tkread", "Rd_parse", "CRAN.packages", "zip.file.extract", "real", "as.real", "is.real", ".find.package", ".path.package");
    check L39() else D1();
  L38():
    r3 = dyn base1("La.eigen", "tetragamma", "pentagamma", "package.description", "gammaCody", "manglePackageName", ".readRDS", ".saveRDS", "mem.limits", "trySilent", "traceOn", "traceOff", "print.coefmat", "anovalist.lm", "lm.fit.null", "lm.wfit.null", "glm.fit.null", "tkcmd", "tkfile.tail", "tkfile.dir", "tkopen", "tkclose", "tkputs", "tkread", "Rd_parse", "CRAN.packages", "zip.file.extract", "real", "as.real", "is.real", ".find.package", ".path.package");
    goto L3(r3);
  D1():
    deopt 41 [r5];
  L4(r7):
    st bad_dev = r7;
    WINDOWS1 = ld WINDOWS;
    check L43() else D3();
  L39():
    goto L3(r5);
  L40():
    c2 = ldf c in base;
    r8 = dyn c2("quartz", "x11", "X11");
    check L42() else D2();
  L41():
    r6 = dyn base2("quartz", "x11", "X11");
    goto L4(r6);
  D2():
    deopt 49 [r8];
  D3():
    deopt 51 [WINDOWS1];
  L42():
    goto L4(r8);
  L43():
    WINDOWS2 = force? WINDOWS1;
    checkMissing(WINDOWS2);
    r9 = `!`(WINDOWS2);
    c3 = `as.logical`(r9);
    if c3 then L44() else L5();
  L5():
    goto L7();
  L7():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L44():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L6(r11):
    st bad_dev = r11;
    goto L7();
  L8(r15):
    st bad = r15;
    character = ldf character;
    check L56() else D10();
  L45():
    bad_dev = ld bad_dev;
    check L47() else D4();
  L46():
    r10 = dyn base3(<sym bad_dev>, "windows", "win.graph", "win.metafile", "win.print");
    goto L6(r10);
  L50():
    bad_depr = ld bad_depr;
    check L52() else D6();
  L51():
    r14 = dyn base4(<sym bad_depr>, <sym bad_def>, <sym bad_dev>);
    goto L8(r14);
  D4():
    deopt 56 [bad_dev];
  D6():
    deopt 69 [bad_depr];
  D10():
    deopt 79 [];
  L47():
    bad_dev1 = force? bad_dev;
    checkMissing(bad_dev1);
    c4 = ldf c in base;
    r12 = dyn c4(bad_dev1, "windows", "win.graph", "win.metafile", "win.print");
    check L48() else D5();
  L52():
    bad_depr1 = force? bad_depr;
    checkMissing(bad_depr1);
    bad_def = ld bad_def;
    check L53() else D7();
  L56():
    r17 = dyn character();
    check L57() else D11();
  D5():
    deopt 63 [r12];
  D7():
    deopt 71 [bad_def];
  D11():
    deopt 80 [r17];
  L48():
    goto L6(r12);
  L53():
    bad_def1 = force? bad_def;
    checkMissing(bad_def1);
    bad_dev2 = ld bad_dev;
    check L54() else D8();
  L57():
    st bad_closures = r17;
    character1 = ldf character;
    check L58() else D12();
  D8():
    deopt 73 [bad_dev2];
  D12():
    deopt 83 [];
  L54():
    bad_dev3 = force? bad_dev2;
    checkMissing(bad_dev3);
    c5 = ldf c in base;
    r16 = dyn c5(bad_depr1, bad_def1, bad_dev3);
    check L55() else D9();
  L58():
    r18 = dyn character1();
    check L59() else D13();
  D9():
    deopt 76 [r16];
  D13():
    deopt 84 [r18];
  L55():
    goto L8(r16);
  L59():
    st found = r18;
    r19 = clos inner2916718377;
    st find_bad_closures = r19;
    r20 = clos inner2916718377;
    st find_bad_S4methods = r20;
    r21 = clos inner2010994272;
    st find_bad_refClasses = r21;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L9(r23):
    st bad_S4methods = r23;
    character2 = ldf character;
    check L63() else D15();
  L60():
    list = ldf list in base;
    r24 = dyn list();
    check L62() else D14();
  L61():
    r22 = dyn base5();
    goto L9(r22);
  D14():
    deopt 98 [r24];
  D15():
    deopt 101 [];
  L62():
    goto L9(r24);
  L63():
    r25 = dyn character2();
    check L64() else D16();
  D16():
    deopt 102 [r25];
  L64():
    st bad_refs = r25;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L10(r27):
    r29 = `!`(r27);
    c6 = `as.logical`(r29);
    if c6 then L67() else L11();
  L65():
    missing = ldf missing in base;
    r28 = dyn missing(<sym package>);
    goto L10(r28);
  L66():
    r26 = dyn base6(<sym package>);
    goto L10(r26);
  L11():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L106() else L107();
  L23():
    sort = ldf sort;
    check L136() else D62();
  L67():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  D62():
    deopt 242 [];
  L12(r31):
    r33 = `!=`(r31, 1);
    c7 = `as.logical`(r33);
    if c7 then L72() else L13();
  L24(r72):
    c12 = `as.logical`(r72);
    if c12 then L108() else L25();
  L68():
    package1 = ld package;
    check L70() else D17();
  L69():
    r30 = dyn base7(<sym package>);
    goto L12(r30);
  L106():
    missing1 = ldf missing in base;
    r73 = dyn missing1(<sym dir>);
    goto L24(r73);
  L107():
    r71 = dyn base10(<sym dir>);
    goto L24(r71);
  L136():
    p23 = prom<V +>{
      unique = ldf unique;
      p22 = prom<V +>{
        found = ld found;
        found1 = force? found;
        checkMissing(found1);
        return found1;
      };
      r98 = dyn unique(p22);
      return r98;
    };
    r100 = dyn sort(p23);
    check L137() else D63();
  D17():
    deopt 110 [package1];
  D63():
    deopt 244 [r100];
  L13():
    goto L14();
  L14():
    find_package = ldf `find.package`;
    check L76() else D21();
  L25():
    goto L26();
  L26():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L112() else D42();
  L70():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r32 = dyn length(package2);
    check L71() else D18();
  L72():
    stop = ldf stop;
    check L73() else D19();
  L108():
    stop1 = ldf stop;
    check L109() else D40();
  L137():
    st found = r100;
    found2 = ld found;
    check L138() else D64();
  D18():
    deopt 113 [r32];
  D19():
    deopt 117 [];
  D21():
    deopt 123 [];
  D40():
    deopt 183 [];
  D42():
    deopt 189 [];
  D64():
    deopt 246 [found2];
  L71():
    goto L12(r32);
  L73():
    r34 = dyn stop("argument 'package' must be of length 1");
    check L74() else D20();
  L76():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r38 = dyn find_package(p, p1);
    check L77() else D22();
  L109():
    r74 = dyn stop1("you must specify 'package' or 'dir'");
    check L110() else D41();
  L112():
    p12 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r77 = dyn file_path_as_absolute(p12);
    check L113() else D43();
  L138():
    found3 = force? found2;
    checkMissing(found3);
    c15 = `is.object`(found3);
    if c15 then L139() else L140(found3);
  D20():
    deopt 119 [r34];
  D22():
    deopt 126 [r38];
  D41():
    deopt 185 [r74];
  D43():
    deopt 191 [r77];
  L30(dx3):
    st deprecated = dx3;
    found8 = ld found;
    check L144() else D67();
  L74():
    goto L14();
  L77():
    st dir = r38;
    _notin_ = ldf `%notin%`;
    check L78() else D23();
  L110():
    goto L26();
  L113():
    st dir = r77;
    file_path = ldf `file.path`;
    check L114() else D44();
  L139():
    dr2 = tryDispatchBuiltin.1("[", found3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L141() else L140(dr2);
  L140(found5):
    _in_ = ldf `%in%`;
    check L142() else D65();
  D23():
    deopt 129 [];
  D44():
    deopt 194 [];
  D65():
    deopt 249 [found5];
  D67():
    deopt 255 [found8];
  L78():
    p2 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p3 = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r40 = dyn _get_standard_package_names();
      c8 = `is.object`(r40);
      if c8 then L1() else L2(r40);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r40);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r42):
      r43 = `$`(r42, <sym base>);
      goto L0(r43);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r45 = dyn _notin_(p2, p3);
    check L79() else D24();
  L114():
    p13 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r79 = dyn file_path(p13, "R");
    check L115() else D45();
  L141():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx2);
  L142():
    p24 = prom<V +>{
      found6 = ld found;
      found7 = force? found6;
      checkMissing(found7);
      return found7;
    };
    p25 = prom<V +>{
      bad_depr2 = ld bad_depr;
      bad_depr3 = force? bad_depr2;
      checkMissing(bad_depr3);
      return bad_depr3;
    };
    r103 = dyn _in_(p24, p25);
    check L143() else D66();
  L144():
    found9 = force? found8;
    checkMissing(found9);
    c16 = `is.object`(found9);
    if c16 then L145() else L146(found9);
  D24():
    deopt 132 [r45];
  D45():
    deopt 197 [r79];
  D66():
    deopt 252 [found5, r103];
  L31(dx5):
    st defunct = dx5;
    found14 = ld found;
    check L150() else D70();
  L79():
    c9 = `as.logical`(r45);
    if c9 then L80() else L15();
  L115():
    st code_dir = r79;
    dir_exists = ldf `dir.exists`;
    check L116() else D46();
  L143():
    __ = ldf `[` in base;
    r104 = dyn __(found5, r103);
    goto L30(r104);
  L145():
    dr4 = tryDispatchBuiltin.1("[", found9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L147() else L146(dr4);
  L146(found11):
    _in_1 = ldf `%in%`;
    check L148() else D68();
  D46():
    deopt 200 [];
  D68():
    deopt 258 [found11];
  D70():
    deopt 264 [found14];
  L15():
    goto L22(NULL);
  L22(r69):
    goto L23();
  L80():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L81() else D25();
  L116():
    p14 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r81 = dyn dir_exists(p14);
    check L117() else D47();
  L147():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L148():
    p26 = prom<V +>{
      found12 = ld found;
      found13 = force? found12;
      checkMissing(found13);
      return found13;
    };
    p27 = prom<V +>{
      bad_def2 = ld bad_def;
      bad_def3 = force? bad_def2;
      checkMissing(bad_def3);
      return bad_def3;
    };
    r107 = dyn _in_1(p26, p27);
    check L149() else D69();
  L150():
    found15 = force? found14;
    checkMissing(found15);
    c17 = `is.object`(found15);
    if c17 then L151() else L152(found15);
  D25():
    deopt 134 [];
  D47():
    deopt 202 [r81];
  D69():
    deopt 261 [found11, r107];
  L32(dx7):
    st devices = dx7;
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L156() else L157();
  L81():
    p4 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p6 = prom<V +>{
      dirname = ldf dirname;
      p5 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r48 = dyn dirname(p5);
      return r48;
    };
    r50 = dyn _load_namespace_quietly(p4, p6);
    check L82() else D26();
  L117():
    c13 = `as.logical`(r81);
    if c13 then L118() else L27();
  L149():
    __1 = ldf `[` in base;
    r108 = dyn __1(found11, r107);
    goto L31(r108);
  L151():
    dr6 = tryDispatchBuiltin.1("[", found15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L153() else L152(dr6);
  L152(found17):
    _in_2 = ldf `%in%`;
    check L154() else D71();
  D26():
    deopt 137 [r50];
  D71():
    deopt 267 [found17];
  L27():
    goto L23();
  L33(r114):
    st out = r114;
    l = ld out;
    class__ = ldf `class<-`;
    check L163() else D78();
  L82():
    asNamespace = ldf asNamespace;
    check L83() else D27();
  L118():
    new_env = ldf `new.env`;
    check L119() else D48();
  L153():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L32(dx6);
  L154():
    p28 = prom<V +>{
      found18 = ld found;
      found19 = force? found18;
      checkMissing(found19);
      return found19;
    };
    p29 = prom<V +>{
      bad_dev4 = ld bad_dev;
      bad_dev5 = force? bad_dev4;
      checkMissing(bad_dev5);
      return bad_dev5;
    };
    r111 = dyn _in_2(p28, p29);
    check L155() else D72();
  L156():
    bad_closures = ld bad_closures;
    check L158() else D73();
  L157():
    r113 = dyn base11[bad_closures, deprecated, defunct, devices](<sym bad_closures>, <sym deprecated>, <sym defunct>, <sym devices>);
    goto L33(r113);
  D27():
    deopt 139 [];
  D48():
    deopt 204 [];
  D72():
    deopt 270 [found17, r111];
  D73():
    deopt 275 [bad_closures];
  D78():
    deopt 293 ["check_depdef", l, "check_depdef"];
  L83():
    p7 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r52 = dyn asNamespace(p7);
    check L84() else D28();
  L119():
    r82 = dyn new_env[hash](TRUE);
    check L120() else D49();
  L155():
    __2 = ldf `[` in base;
    r112 = dyn __2(found17, r111);
    goto L32(r112);
  L158():
    bad_closures1 = force? bad_closures;
    checkMissing(bad_closures1);
    deprecated = ld deprecated;
    check L159() else D74();
  L163():
    r116 = dyn class__(l, NULL, "check_depdef");
    check L164() else D79();
  D28():
    deopt 141 [r52];
  D49():
    deopt 207 [r82];
  D74():
    deopt 278 [deprecated];
  D79():
    deopt 295 ["check_depdef", r116];
  L84():
    st code_env = r52;
    find_bad_closures = ldf find_bad_closures;
    check L85() else D29();
  L120():
    st code_env = r82;
    file_path1 = ldf `file.path`;
    check L121() else D50();
  L159():
    deprecated1 = force? deprecated;
    checkMissing(deprecated1);
    defunct = ld defunct;
    check L160() else D75();
  L164():
    st out = r116;
    out = ld out;
    check L165() else D80();
  D29():
    deopt 144 [];
  D50():
    deopt 210 [];
  D75():
    deopt 281 [defunct];
  D80():
    deopt 297 [out];
  L85():
    p8 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r54 = dyn find_bad_closures(p8);
    check L86() else D30();
  L121():
    p15 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r84 = dyn file_path1(p15, "DESCRIPTION");
    check L122() else D51();
  L160():
    defunct1 = force? defunct;
    checkMissing(defunct1);
    devices = ld devices;
    check L161() else D76();
  L165():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D30():
    deopt 146 [r54];
  D51():
    deopt 213 [r84];
  D76():
    deopt 284 [devices];
  L86():
    st bad_closures = r54;
    sym8 = ldf `.isMethodsDispatchOn`;
    base8 = ldf `.isMethodsDispatchOn` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L87() else L88();
  L122():
    st dfile = r84;
    file_test = ldf file_test;
    check L123() else D52();
  L161():
    devices1 = force? devices;
    checkMissing(devices1);
    list1 = ldf list in base;
    r115 = dyn list1(bad_closures1, deprecated1, defunct1, devices1);
    check L162() else D77();
  D52():
    deopt 216 [];
  D77():
    deopt 288 [r115];
  L16(r56):
    c10 = `as.logical`(r56);
    if c10 then L90() else L17();
  L87():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r57 = dyn _isMethodsDispatchOn();
    check L89() else D31();
  L88():
    r55 = dyn base8();
    goto L16(r55);
  L123():
    p16 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r86 = dyn file_test("-f", p16);
    check L124() else D53();
  L162():
    goto L33(r115);
  D31():
    deopt 151 [r57];
  D53():
    deopt 219 [r86];
  L17():
    goto L21(NULL);
  L21(r68):
    goto L22(r68);
  L89():
    goto L16(r57);
  L90():
    find_bad_S4methods = ldf find_bad_S4methods;
    check L91() else D32();
  L124():
    c14 = `as.logical`(r86);
    if c14 then L125() else L28();
  D32():
    deopt 153 [];
  L28():
    character3 = ldf character;
    check L129() else D56();
  L29(r89):
    st meta = r89;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L131() else D58();
  L91():
    p9 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    r59 = dyn find_bad_S4methods(p9);
    check L92() else D33();
  L125():
    _read_description = ldf `.read_description`;
    check L126() else D54();
  D33():
    deopt 155 [r59];
  D54():
    deopt 221 [];
  D56():
    deopt 225 [];
  D58():
    deopt 229 [];
  L92():
    st bad_S4methods = r59;
    _get_ref_classes = ldf `.get_ref_classes`;
    check L93() else D34();
  L126():
    p17 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r88 = dyn _read_description(p17);
    check L127() else D55();
  L129():
    r90 = dyn character3();
    check L130() else D57();
  L131():
    p18 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    p19 = prom<V +>{
      code_env6 = ld code_env;
      code_env7 = force? code_env6;
      checkMissing(code_env7);
      return code_env7;
    };
    p20 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r94 = dyn _source_assignments_in_code_dir(p18, p19, p20);
    check L132() else D59();
  D34():
    deopt 158 [];
  D55():
    deopt 223 [r88];
  D57():
    deopt 226 [r90];
  D59():
    deopt 233 [r94];
  L93():
    p10 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r61 = dyn _get_ref_classes(p10);
    check L94() else D35();
  L127():
    goto L29(r88);
  L130():
    goto L29(r90);
  L132():
    find_bad_closures1 = ldf find_bad_closures;
    check L133() else D60();
  D35():
    deopt 160 [r61];
  D60():
    deopt 235 [];
  L94():
    st refs = r61;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L133():
    p21 = prom<V +>{
      code_env8 = ld code_env;
      code_env9 = force? code_env8;
      checkMissing(code_env9);
      return code_env9;
    };
    r96 = dyn find_bad_closures1(p21);
    check L134() else D61();
  D61():
    deopt 237 [r96];
  L18(r63):
    c11 = `as.logical`(r63);
    if c11 then L99() else L19();
  L95():
    refs = ld refs;
    check L97() else D36();
  L96():
    r62 = dyn base9(<sym refs>);
    goto L18(r62);
  L134():
    st bad_closures = r96;
    goto L23();
  D36():
    deopt 164 [refs];
  L19():
    goto L20(NULL);
  L20(r67):
    goto L21(r67);
  L97():
    refs1 = force? refs;
    checkMissing(refs1);
    length1 = ldf length in base;
    r64 = dyn length1(refs1);
    check L98() else D37();
  L99():
    find_bad_refClasses = ldf find_bad_refClasses;
    check L100() else D38();
  D37():
    deopt 167 [r64];
  D38():
    deopt 169 [];
  L98():
    goto L18(r64);
  L100():
    p11 = prom<V +>{
      refs2 = ld refs;
      refs3 = force? refs2;
      checkMissing(refs3);
      return refs3;
    };
    r66 = dyn find_bad_refClasses(p11);
    check L101() else D39();
  D39():
    deopt 171 [r66];
  L101():
    st bad_refs = r66;
    goto L20(r66);
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg as_list:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg lapply:cls, reg objects_in_env:*, reg objects_in_env1:V, reg p1:p(V +), reg r3:cls, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x:*, reg x1:V, reg names:cls, reg r8:V, reg c:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r12:cls, reg p4:p(V +), reg r14:V, reg __:cls, reg r15:V |
    mkenv;
    st env = env;
    as_list = ldf `as.list`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r1 = dyn as_list[, `all.names`, sorted](p, TRUE, TRUE);
    check L3() else D1();
  D1():
    deopt 7 [r1];
  L3():
    st objects_in_env = r1;
    lapply = ldf lapply;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p1 = prom<V +>{
      objects_in_env = ld objects_in_env;
      objects_in_env1 = force? objects_in_env;
      checkMissing(objects_in_env1);
      return objects_in_env1;
    };
    p2 = prom<V +>{
      r3 = clos inner2854634098;
      return r3;
    };
    r5 = dyn lapply(p1, p2);
    check L5() else D3();
  D3():
    deopt 13 [r5];
  L5():
    st x = r5;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r7):
    c = `is.object`(r7);
    if c then L10() else L11(r7);
  L6():
    x = ld x;
    check L8() else D4();
  L7():
    r6 = dyn base(<sym x>);
    goto L0(r6);
  D4():
    deopt 17 [x];
  L1(dx1):
    popenv;
    return dx1;
  L8():
    x1 = force? x;
    checkMissing(x1);
    names = ldf names in base;
    r8 = dyn names(x1);
    check L9() else D5();
  L10():
    dr = tryDispatchBuiltin.1("[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r10):
    vapply = ldf vapply;
    check L13() else D6();
  D5():
    deopt 20 [r8];
  D6():
    deopt 22 [r10];
  L9():
    goto L0(r8);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p4 = prom<V +>{
      r12 = clos inner1236783023;
      return r12;
    };
    r14 = dyn vapply(p3, p4, NA_LGL);
    check L14() else D7();
  D7():
    deopt 26 [r10, r14];
  L14():
    __ = ldf `[` in base;
    r15 = dyn __(r10, r14);
    goto L1(r15);
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg __:cls, reg r4:V, reg r5:cls, reg v3:*, reg v4:V, reg p:p(V +), reg r7:V |
    mkenv;
    st v = v;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    r3 = `==`(r1, "closure");
    c = `as.logical`(r3);
    if c then L6() else L1();
  L2():
    v1 = ld v;
    check L4() else D0();
  L3():
    r = dyn base(<sym v>);
    goto L0(r);
  D0():
    deopt 2 [v1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    v2 = force? v1;
    checkMissing(v2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(v2);
    check L5() else D1();
  L6():
    __ = ldf `::`;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  L5():
    goto L0(r2);
  L7():
    r4 = dyn __("codetools", "findGlobals");
    check L8() else D3();
  D3():
    deopt 12 [r4];
  L8():
    checkFun.0(r4);
    r5 = r4 as cls;
    p = prom<V +>{
      v3 = ld v;
      v4 = force? v3;
      checkMissing(v4);
      return v4;
    };
    r7 = dyn r5(p);
    check L9() else D4();
  D4():
    deopt 15 [r7];
  L9():
    popenv;
    return r7;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg s1:*, reg s2:V, reg p:p(V +), reg bad:*, reg bad1:V, reg p1:p(V +), reg r4:V, reg any:cls, reg r5:V, reg res:*, reg res1:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg found:*, reg found1:V, reg s3:*, reg s4:V, reg c1:cls, reg r8:V, reg res2:*, reg res3:V |
    mkenv;
    st s = s;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st res = r1;
    res = ld res;
    check L9() else D3();
  L4():
    _in_ = ldf `%in%`;
    check L6() else D0();
  L5():
    r = dyn base(<lang `%in%`(s, bad)>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 10 [res];
  L6():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    p1 = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      return bad1;
    };
    r4 = dyn _in_(p, p1);
    check L7() else D1();
  L9():
    res1 = force? res;
    checkMissing(res1);
    c = `as.logical`(res1);
    if c then L10() else L1();
  D1():
    deopt 6 [r4];
  L1():
    goto L3();
  L3():
    res2 = ld res;
    check L17() else D7();
  L7():
    any = ldf any in base;
    r5 = dyn any(r4);
    check L8() else D2();
  L10():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D2():
    deopt 8 [r5];
  D7():
    deopt 23 [res2];
  L2(r7):
    sst found = r7;
    goto L3();
  L8():
    goto L0(r5);
  L11():
    found = ld found;
    check L13() else D4();
  L12():
    r6 = dyn base1(<sym found>, <sym s>);
    goto L2(r6);
  L17():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D4():
    deopt 14 [found];
  L13():
    found1 = force? found;
    checkMissing(found1);
    s3 = ld s;
    check L14() else D5();
  D5():
    deopt 16 [s3];
  L14():
    s4 = force? s3;
    checkMissing(s4);
    c1 = ldf c in base;
    r8 = dyn c1(found1, s4);
    check L15() else D6();
  D6():
    deopt 19 [r8];
  L15():
    goto L2(r8);
  }
}
fun inner2010994272(refs) {
  (reg refs:*) -+> V { var refs:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg refs1:*, reg refs2:V, reg names:cls, reg r2:V, reg lapply:cls, reg refs3:*, reg refs4:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg cl:*, reg cl1:V, reg c:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg unlist:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r8:V, reg __:cls, reg r9:V |
    mkenv;
    st refs = refs;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st cl = r1;
    lapply = ldf lapply;
    check L6() else D2();
  L2():
    refs1 = ld refs;
    check L4() else D0();
  L3():
    r = dyn base(<sym refs>);
    goto L0(r);
  D0():
    deopt 2 [refs1];
  D2():
    deopt 8 [];
  L4():
    refs2 = force? refs1;
    checkMissing(refs2);
    names = ldf names in base;
    r2 = dyn names(refs2);
    check L5() else D1();
  L6():
    p = prom<V +>{
      refs3 = ld refs;
      refs4 = force? refs3;
      checkMissing(refs4);
      return refs4;
    };
    p1 = prom<V +>{
      r4 = clos inner2148457334;
      return r4;
    };
    r6 = dyn lapply(p, p1);
    check L7() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r6];
  L5():
    goto L0(r2);
  L7():
    st x = r6;
    cl = ld cl;
    check L8() else D4();
  D4():
    deopt 13 [cl];
  L8():
    cl1 = force? cl;
    checkMissing(cl1);
    c = `is.object`(cl1);
    if c then L9() else L10(cl1);
  L1(dx1):
    popenv;
    return dx1;
  L9():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(cl3):
    unlist = ldf unlist;
    check L12() else D5();
  D5():
    deopt 16 [cl3];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r8 = dyn unlist(p2);
    check L13() else D6();
  D6():
    deopt 18 [cl3, r8];
  L13():
    __ = ldf `[` in base;
    r9 = dyn __(cl3, r8);
    goto L1(r9);
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vapply:cls, reg z1:*, reg z2:V, reg p:p(V +), reg r3:cls, reg p1:p(V +), reg r5:V, reg any:cls, reg r6:V |
    mkenv;
    st z = z;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    vapply = ldf vapply;
    check L3() else D0();
  L2():
    r = dyn base(<lang vapply(z, function((v=), {
          `<-`(s, `::`(codetools, findGlobals)(v));
          `<<-`(found, c(found, s));
          any(`%in%`(s, bad))
        }, NULL), NA_LGL)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      return z2;
    };
    p1 = prom<V +>{
      r3 = clos inner2854634098;
      return r3;
    };
    r5 = dyn vapply(p, p1, NA_LGL);
    check L4() else D1();
  D1():
    deopt 7 [r5];
  L4():
    any = ldf any in base;
    r6 = dyn any(r5);
    check L5() else D2();
  D2():
    deopt 9 [r6];
  L5():
    goto L0(r6);
  }
}