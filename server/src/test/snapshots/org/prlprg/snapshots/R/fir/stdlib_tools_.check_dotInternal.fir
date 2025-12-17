fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4027848113;
    st `.check_dotInternal` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4027848113(package, dir, `lib.loc`, details) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg details:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var details:*, reg details_isMissing:L, reg details_orDefault:*, reg character:cls, reg r:V, reg r1:cls, reg r2:cls, reg r3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg character1:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing:cls, reg r10:V, reg r11:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg package1:*, reg package2:V, reg length:cls, reg r14:V, reg r15:V, reg c1:L, reg stop:cls, reg r16:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r20:V, reg _notin_:cls, reg package5:*, reg package6:V, reg p2:p(V +), reg _get_standard_package_names:cls, reg r22:V, reg c2:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg p3:p(V +), reg r27:V, reg c3:L, reg _load_namespace_quietly:cls, reg package7:*, reg package8:V, reg p4:p(V +), reg dirname:cls, reg dir1:*, reg dir2:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg asNamespace:cls, reg package9:*, reg package10:V, reg p7:p(V +), reg r34:V, reg find_bad_closures:cls, reg code_env:*, reg code_env1:V, reg p8:p(V +), reg r36:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg _isMethodsDispatchOn:cls, reg r39:V, reg c4:L, reg find_bad_S4methods:cls, reg code_env2:*, reg code_env3:V, reg p9:p(V +), reg r41:V, reg _get_ref_classes:cls, reg code_env4:*, reg code_env5:V, reg p10:p(V +), reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg refs:*, reg refs1:V, reg length1:cls, reg r46:V, reg c5:L, reg find_bad_refClasses:cls, reg refs2:*, reg refs3:V, reg p11:p(V +), reg r48:V, reg r49:V, reg r50:V, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg missing1:cls, reg r55:V, reg c6:L, reg stop1:cls, reg r56:V, reg file_path_as_absolute:cls, reg dir3:*, reg dir4:V, reg p12:p(V +), reg r59:V, reg file_path:cls, reg dir5:*, reg dir6:V, reg p13:p(V +), reg r61:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p14:p(V +), reg r63:V, reg c7:L, reg new_env:cls, reg r64:V, reg file_path1:cls, reg dir7:*, reg dir8:V, reg p15:p(V +), reg r66:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p16:p(V +), reg r68:V, reg c8:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p17:p(V +), reg r70:V, reg r71:V, reg character2:cls, reg r72:V, reg _source_assignments_in_code_dir:cls, reg code_dir2:*, reg code_dir3:V, reg p18:p(V +), reg code_env6:*, reg code_env7:V, reg p19:p(V +), reg meta:*, reg meta1:V, reg p20:p(V +), reg r76:V, reg find_bad_closures1:cls, reg code_env8:*, reg code_env9:V, reg p21:p(V +), reg r78:V, reg character3:cls, reg r79:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r80:V, reg r81:V, reg bad_closures:*, reg bad_closures1:V, reg length2:cls, reg r82:V, reg c9:L, reg c11:V, reg details1:*, reg details2:V, reg c12:L, reg c13:V, reg c15:L, reg lapply:cls, reg bad_closures2:*, reg bad_closures3:V, reg p22:p(V +), reg r84:cls, reg p23:p(V +), reg r86:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r88:V, reg r89:V, reg bad_closures4:*, reg bad_closures5:V, reg internals:*, reg internals1:V, reg bad_S4methods:*, reg bad_S4methods1:V, reg bad_refs:*, reg bad_refs1:V, reg list1:cls, reg r90:V, reg l:*, reg class__:cls, reg r91:V, reg out:*, reg out1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    details_isMissing = missing.0(details);
    if details_isMissing then L1(TRUE) else L1(details);
  L1(details_orDefault):
    st details = details_orDefault;
    character = ldf character;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    r = dyn character();
    check L29() else D1();
  D1():
    deopt 2 [r];
  L29():
    st bad_closures = r;
    r1 = clos inner2916718377;
    st find_bad_closures = r1;
    r2 = clos inner2916718377;
    st find_bad_S4methods = r2;
    r3 = clos inner2010994272;
    st find_bad_refClasses = r3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L2(r5):
    st bad_S4methods = r5;
    character1 = ldf character;
    check L33() else D3();
  L30():
    list = ldf list in base;
    r6 = dyn list();
    check L32() else D2();
  L31():
    r4 = dyn base();
    goto L2(r4);
  D2():
    deopt 16 [r6];
  D3():
    deopt 19 [];
  L32():
    goto L2(r6);
  L33():
    r7 = dyn character1();
    check L34() else D4();
  D4():
    deopt 20 [r7];
  L34():
    st bad_refs = r7;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L3(r9):
    r11 = `!`(r9);
    c = `as.logical`(r11);
    if c then L37() else L4();
  L35():
    missing = ldf missing in base;
    r10 = dyn missing(<sym package>);
    goto L3(r10);
  L36():
    r8 = dyn base1(<sym package>);
    goto L3(r8);
  L4():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L16():
    character3 = ldf character;
    check L106() else D50();
  L37():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D50():
    deopt 160 [];
  L5(r13):
    r15 = `!=`(r13, 1);
    c1 = `as.logical`(r15);
    if c1 then L42() else L6();
  L17(r54):
    c6 = `as.logical`(r54);
    if c6 then L78() else L18();
  L38():
    package1 = ld package;
    check L40() else D5();
  L39():
    r12 = dyn base2(<sym package>);
    goto L5(r12);
  L76():
    missing1 = ldf missing in base;
    r55 = dyn missing1(<sym dir>);
    goto L17(r55);
  L77():
    r53 = dyn base5(<sym dir>);
    goto L17(r53);
  L106():
    r79 = dyn character3();
    check L107() else D51();
  D5():
    deopt 28 [package1];
  D51():
    deopt 161 [r79];
  L6():
    goto L7();
  L7():
    find_package = ldf `find.package`;
    check L46() else D9();
  L18():
    goto L19();
  L19():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L82() else D30();
  L40():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r14 = dyn length(package2);
    check L41() else D6();
  L42():
    stop = ldf stop;
    check L43() else D7();
  L78():
    stop1 = ldf stop;
    check L79() else D28();
  L107():
    st internals = r79;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L108() else L109();
  D6():
    deopt 31 [r14];
  D7():
    deopt 35 [];
  D9():
    deopt 41 [];
  D28():
    deopt 101 [];
  D30():
    deopt 107 [];
  L23(r81):
    c9 = `as.logical`(r81);
    if c9 then L112() else L24(c9);
  L41():
    goto L5(r14);
  L43():
    r16 = dyn stop("argument 'package' must be of length 1");
    check L44() else D8();
  L46():
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
    r20 = dyn find_package(p, p1);
    check L47() else D10();
  L79():
    r56 = dyn stop1("you must specify 'package' or 'dir'");
    check L80() else D29();
  L82():
    p12 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r59 = dyn file_path_as_absolute(p12);
    check L83() else D31();
  L108():
    bad_closures = ld bad_closures;
    check L110() else D52();
  L109():
    r80 = dyn base6(<sym bad_closures>);
    goto L23(r80);
  D8():
    deopt 37 [r16];
  D10():
    deopt 44 [r20];
  D29():
    deopt 103 [r56];
  D31():
    deopt 109 [r59];
  D52():
    deopt 165 [bad_closures];
  L24(c11):
    c15 = `as.logical`(c11);
    if c15 then L115() else L25();
  L44():
    goto L7();
  L47():
    st dir = r20;
    _notin_ = ldf `%notin%`;
    check L48() else D11();
  L80():
    goto L19();
  L83():
    st dir = r59;
    file_path = ldf `file.path`;
    check L84() else D32();
  L110():
    bad_closures1 = force? bad_closures;
    checkMissing(bad_closures1);
    length2 = ldf length in base;
    r82 = dyn length2(bad_closures1);
    check L111() else D53();
  L112():
    details1 = ld details;
    check L113() else D54();
  D11():
    deopt 47 [];
  D32():
    deopt 112 [];
  D53():
    deopt 168 [r82];
  D54():
    deopt 169 [c9, details1];
  L25():
    goto L26();
  L26():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L119() else L120();
  L48():
    p2 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p3 = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r22 = dyn _get_standard_package_names();
      c2 = `is.object`(r22);
      if c2 then L1() else L2(r22);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r22);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r24):
      r25 = `$`(r24, <sym base>);
      goto L0(r25);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r27 = dyn _notin_(p2, p3);
    check L49() else D12();
  L84():
    p13 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r61 = dyn file_path(p13, "R");
    check L85() else D33();
  L111():
    goto L23(r82);
  L113():
    details2 = force? details1;
    checkMissing(details2);
    c12 = `as.logical`(details2);
    c13 = `&&`(c9, c12);
    goto L24(c13);
  L115():
    lapply = ldf lapply;
    check L116() else D55();
  D12():
    deopt 50 [r27];
  D33():
    deopt 115 [r61];
  D55():
    deopt 173 [];
  L27(r89):
    st out = r89;
    l = ld out;
    class__ = ldf `class<-`;
    check L126() else D62();
  L49():
    c3 = `as.logical`(r27);
    if c3 then L50() else L8();
  L85():
    st code_dir = r61;
    dir_exists = ldf `dir.exists`;
    check L86() else D34();
  L116():
    p22 = prom<V +>{
      bad_closures2 = ld bad_closures;
      bad_closures3 = force? bad_closures2;
      checkMissing(bad_closures3);
      return bad_closures3;
    };
    p23 = prom<V +>{
      r84 = clos inner1942959787;
      return r84;
    };
    r86 = dyn lapply(p22, p23);
    check L117() else D56();
  L119():
    bad_closures4 = ld bad_closures;
    check L121() else D57();
  L120():
    r88 = dyn base7[bad_closures, internals, bad_S4methods, bad_refs](<sym bad_closures>, <sym internals>, <sym bad_S4methods>, <sym bad_refs>);
    goto L27(r88);
  D34():
    deopt 118 [];
  D56():
    deopt 176 [r86];
  D57():
    deopt 181 [bad_closures4];
  D62():
    deopt 199 ["check_dotInternal", l, "check_dotInternal"];
  L8():
    goto L15(NULL);
  L15(r51):
    goto L16();
  L50():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L51() else D13();
  L86():
    p14 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r63 = dyn dir_exists(p14);
    check L87() else D35();
  L117():
    goto L26();
  L121():
    bad_closures5 = force? bad_closures4;
    checkMissing(bad_closures5);
    internals = ld internals;
    check L122() else D58();
  L126():
    r91 = dyn class__(l, NULL, "check_dotInternal");
    check L127() else D63();
  D13():
    deopt 52 [];
  D35():
    deopt 120 [r63];
  D58():
    deopt 184 [internals];
  D63():
    deopt 201 ["check_dotInternal", r91];
  L51():
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
      r30 = dyn dirname(p5);
      return r30;
    };
    r32 = dyn _load_namespace_quietly(p4, p6);
    check L52() else D14();
  L87():
    c7 = `as.logical`(r63);
    if c7 then L88() else L20();
  L122():
    internals1 = force? internals;
    checkMissing(internals1);
    bad_S4methods = ld bad_S4methods;
    check L123() else D59();
  L127():
    st out = r91;
    out = ld out;
    check L128() else D64();
  D14():
    deopt 55 [r32];
  D59():
    deopt 187 [bad_S4methods];
  D64():
    deopt 203 [out];
  L20():
    goto L16();
  L52():
    asNamespace = ldf asNamespace;
    check L53() else D15();
  L88():
    new_env = ldf `new.env`;
    check L89() else D36();
  L123():
    bad_S4methods1 = force? bad_S4methods;
    checkMissing(bad_S4methods1);
    bad_refs = ld bad_refs;
    check L124() else D60();
  L128():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D15():
    deopt 57 [];
  D36():
    deopt 122 [];
  D60():
    deopt 190 [bad_refs];
  L53():
    p7 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r34 = dyn asNamespace(p7);
    check L54() else D16();
  L89():
    r64 = dyn new_env[hash](TRUE);
    check L90() else D37();
  L124():
    bad_refs1 = force? bad_refs;
    checkMissing(bad_refs1);
    list1 = ldf list in base;
    r90 = dyn list1(bad_closures5, internals1, bad_S4methods1, bad_refs1);
    check L125() else D61();
  D16():
    deopt 59 [r34];
  D37():
    deopt 125 [r64];
  D61():
    deopt 194 [r90];
  L54():
    st code_env = r34;
    find_bad_closures = ldf find_bad_closures;
    check L55() else D17();
  L90():
    st code_env = r64;
    file_path1 = ldf `file.path`;
    check L91() else D38();
  L125():
    goto L27(r90);
  D17():
    deopt 62 [];
  D38():
    deopt 128 [];
  L55():
    p8 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r36 = dyn find_bad_closures(p8);
    check L56() else D18();
  L91():
    p15 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r66 = dyn file_path1(p15, "DESCRIPTION");
    check L92() else D39();
  D18():
    deopt 64 [r36];
  D39():
    deopt 131 [r66];
  L56():
    st bad_closures = r36;
    sym3 = ldf `.isMethodsDispatchOn`;
    base3 = ldf `.isMethodsDispatchOn` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L92():
    st dfile = r66;
    file_test = ldf file_test;
    check L93() else D40();
  D40():
    deopt 134 [];
  L9(r38):
    c4 = `as.logical`(r38);
    if c4 then L60() else L10();
  L57():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r39 = dyn _isMethodsDispatchOn();
    check L59() else D19();
  L58():
    r37 = dyn base3();
    goto L9(r37);
  L93():
    p16 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r68 = dyn file_test("-f", p16);
    check L94() else D41();
  D19():
    deopt 69 [r39];
  D41():
    deopt 137 [r68];
  L10():
    goto L14(NULL);
  L14(r50):
    goto L15(r50);
  L59():
    goto L9(r39);
  L60():
    find_bad_S4methods = ldf find_bad_S4methods;
    check L61() else D20();
  L94():
    c8 = `as.logical`(r68);
    if c8 then L95() else L21();
  D20():
    deopt 71 [];
  L21():
    character2 = ldf character;
    check L99() else D44();
  L22(r71):
    st meta = r71;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L101() else D46();
  L61():
    p9 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    r41 = dyn find_bad_S4methods(p9);
    check L62() else D21();
  L95():
    _read_description = ldf `.read_description`;
    check L96() else D42();
  D21():
    deopt 73 [r41];
  D42():
    deopt 139 [];
  D44():
    deopt 143 [];
  D46():
    deopt 147 [];
  L62():
    st bad_S4methods = r41;
    _get_ref_classes = ldf `.get_ref_classes`;
    check L63() else D22();
  L96():
    p17 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r70 = dyn _read_description(p17);
    check L97() else D43();
  L99():
    r72 = dyn character2();
    check L100() else D45();
  L101():
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
    r76 = dyn _source_assignments_in_code_dir(p18, p19, p20);
    check L102() else D47();
  D22():
    deopt 76 [];
  D43():
    deopt 141 [r70];
  D45():
    deopt 144 [r72];
  D47():
    deopt 151 [r76];
  L63():
    p10 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r43 = dyn _get_ref_classes(p10);
    check L64() else D23();
  L97():
    goto L22(r70);
  L100():
    goto L22(r72);
  L102():
    find_bad_closures1 = ldf find_bad_closures;
    check L103() else D48();
  D23():
    deopt 78 [r43];
  D48():
    deopt 153 [];
  L64():
    st refs = r43;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L103():
    p21 = prom<V +>{
      code_env8 = ld code_env;
      code_env9 = force? code_env8;
      checkMissing(code_env9);
      return code_env9;
    };
    r78 = dyn find_bad_closures1(p21);
    check L104() else D49();
  D49():
    deopt 155 [r78];
  L11(r45):
    c5 = `as.logical`(r45);
    if c5 then L69() else L12();
  L65():
    refs = ld refs;
    check L67() else D24();
  L66():
    r44 = dyn base4(<sym refs>);
    goto L11(r44);
  L104():
    st bad_closures = r78;
    goto L16();
  D24():
    deopt 82 [refs];
  L12():
    goto L13(NULL);
  L13(r49):
    goto L14(r49);
  L67():
    refs1 = force? refs;
    checkMissing(refs1);
    length1 = ldf length in base;
    r46 = dyn length1(refs1);
    check L68() else D25();
  L69():
    find_bad_refClasses = ldf find_bad_refClasses;
    check L70() else D26();
  D25():
    deopt 85 [r46];
  D26():
    deopt 87 [];
  L68():
    goto L11(r46);
  L70():
    p11 = prom<V +>{
      refs2 = ld refs;
      refs3 = force? refs2;
      checkMissing(refs3);
      return refs3;
    };
    r48 = dyn find_bad_refClasses(p11);
    check L71() else D27();
  D27():
    deopt 89 [r48];
  L71():
    st bad_refs = r48;
    goto L13(r48);
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
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r3:V, reg any:cls, reg r4:V |
    mkenv;
    st s = s;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _in_ = ldf `%in%`;
    check L3() else D0();
  L2():
    r = dyn base(<lang `%in%`(s, ".Internal")>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r3 = dyn _in_(p, ".Internal");
    check L4() else D1();
  D1():
    deopt 6 [r3];
  L4():
    any = ldf any in base;
    r4 = dyn any(r3);
    check L5() else D2();
  D2():
    deopt 8 [r4];
  L5():
    goto L0(r4);
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
    r = dyn base(<lang vapply(z, function((v=), any(`%in%`(`::`(codetools, findGlobals)(v), ".Internal")), NULL), NA_LGL)>);
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
fun inner1942959787(o) {
  (reg o:*) -+> V { var o:*, reg get:cls, reg o1:*, reg o2:V, reg p:p(V +), reg code_env:*, reg code_env1:V, reg p1:p(V +), reg r2:V, reg _find_calls:cls, reg v:*, reg v1:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg calls:*, reg calls1:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg calls2:*, reg calls3:V, reg c1:L, reg calls5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _call_names:cls, reg calls6:*, reg calls7:V, reg p3:p(V +), reg r12:V, reg r13:V, reg __:cls, reg r14:V, reg lapply:cls, reg calls8:*, reg calls9:V, reg p4:p(V +), reg __1:*, reg __2:V, reg p5:p(V +), reg r17:V, reg sapply:cls, reg calls10:*, reg calls11:V, reg p6:p(V +), reg r19:cls, reg p7:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg internals:*, reg internals1:V, reg calls12:*, reg calls13:V, reg c2:cls, reg r24:V |
    mkenv;
    st o = o;
    get = ldf get;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      o1 = ld o;
      o2 = force? o1;
      checkMissing(o2);
      return o2;
    };
    p1 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r2 = dyn get[, envir](p, p1);
    check L6() else D1();
  D1():
    deopt 5 [r2];
  L6():
    st v = r2;
    _find_calls = ldf `.find_calls`;
    check L7() else D2();
  D2():
    deopt 8 [];
  L7():
    p2 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    r4 = dyn _find_calls[, recursive](p2, TRUE);
    check L8() else D3();
  D3():
    deopt 12 [r4];
  L8():
    st calls = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L13() else L1();
  L9():
    calls = ld calls;
    check L11() else D4();
  L10():
    r5 = dyn base(<sym calls>);
    goto L0(r5);
  D4():
    deopt 16 [calls];
  L1():
    calls2 = ld calls;
    check L16() else D6();
  L11():
    calls1 = force? calls;
    checkMissing(calls1);
    length = ldf length in base;
    r7 = dyn length(calls1);
    check L12() else D5();
  L13():
    popenv;
    return NULL;
  D5():
    deopt 19 [r7];
  D6():
    deopt 26 [calls2];
  L12():
    goto L0(r7);
  L16():
    calls3 = force? calls2;
    checkMissing(calls3);
    c1 = `is.object`(calls3);
    if c1 then L17() else L18(calls3);
  L3(dx1):
    st calls = dx1;
    lapply = ldf lapply;
    check L22() else D9();
  L17():
    dr = tryDispatchBuiltin.1("[", calls3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(calls5):
    _call_names = ldf `.call_names`;
    check L20() else D7();
  D7():
    deopt 29 [calls5];
  D9():
    deopt 37 [];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L20():
    p3 = prom<V +>{
      calls6 = ld calls;
      calls7 = force? calls6;
      checkMissing(calls7);
      return calls7;
    };
    r12 = dyn _call_names(p3);
    check L21() else D8();
  L22():
    p4 = prom<V +>{
      calls8 = ld calls;
      calls9 = force? calls8;
      checkMissing(calls9);
      return calls9;
    };
    p5 = prom<V +>{
      __1 = ld `[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r17 = dyn lapply(p4, p5, 2);
    check L23() else D10();
  D8():
    deopt 31 [calls5, r12];
  D10():
    deopt 41 [r17];
  L21():
    r13 = `==`(r12, ".Internal");
    __ = ldf `[` in base;
    r14 = dyn __(calls5, r13);
    goto L3(r14);
  L23():
    st calls2 = r17;
    sapply = ldf sapply;
    check L24() else D11();
  D11():
    deopt 44 [];
  L24():
    p6 = prom<V +>{
      calls10 = ld calls2;
      calls11 = force? calls10;
      checkMissing(calls11);
      return calls11;
    };
    p7 = prom<V +>{
      r19 = clos inner2501545716;
      return r19;
    };
    r21 = dyn sapply(p6, p7);
    check L25() else D12();
  D12():
    deopt 47 [r21];
  L25():
    st calls3 = r21;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L4(r23):
    sst internals = r23;
    invisible.0();
    popenv;
    return r23;
  L26():
    internals = ld internals;
    check L28() else D13();
  L27():
    r22 = dyn base1(<sym internals>, <sym calls3>);
    goto L4(r22);
  D13():
    deopt 51 [internals];
  L28():
    internals1 = force? internals;
    checkMissing(internals1);
    calls12 = ld calls3;
    check L29() else D14();
  D14():
    deopt 53 [calls12];
  L29():
    calls13 = force? calls12;
    checkMissing(calls13);
    c2 = ldf c in base;
    r24 = dyn c2(internals1, calls13);
    check L30() else D15();
  D15():
    deopt 56 [r24];
  L30():
    goto L4(r24);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg deparse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn deparse(p);
      c = `is.object`(r1);
      if c then L1() else L2(r1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r3):
      __ = ldf `[` in base;
      r4 = dyn __(r3, 1);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn sub("\\(.*", "", p1);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}