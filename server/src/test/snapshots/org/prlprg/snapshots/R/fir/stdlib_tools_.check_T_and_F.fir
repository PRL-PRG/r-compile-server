fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.check_T_and_F` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg isTRUE:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_getenv:cls, reg r2:V, reg as_logical:cls, reg r3:V, reg p:p(V +), reg r5:V, reg character:cls, reg r6:V, reg character1:cls, reg r7:V, reg r8:cls, reg r9:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg missing:cls, reg r12:V, reg r13:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg package1:*, reg package2:V, reg length:cls, reg r16:V, reg r17:V, reg c1:L, reg stop:cls, reg r18:V, reg find_package:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r22:V, reg check_examples:*, reg check_examples1:V, reg c2:L, reg _get_example_texts_from_example_dir:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r24:V, reg p4:p(V +), reg r26:V, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg missing1:cls, reg r31:V, reg c3:L, reg stop1:cls, reg r32:V, reg file_path_as_absolute:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg r35:V, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r37:V, reg packageHasNamespace:cls, reg basename:cls, reg dir7:*, reg dir8:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg dirname:cls, reg dir9:*, reg dir10:V, reg p9:p(V +), reg r42:V, reg p10:p(V +), reg r44:V, reg r45:V, reg c4:L, reg c6:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p11:p(V +), reg r47:V, reg c7:L, reg c8:V, reg c10:L, reg new_env:cls, reg r48:V, reg file_path2:cls, reg dir11:*, reg dir12:V, reg p12:p(V +), reg r50:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p13:p(V +), reg r52:V, reg c11:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p14:p(V +), reg r54:V, reg r55:V, reg character2:cls, reg r56:V, reg _source_assignments_in_code_dir:cls, reg code_dir2:*, reg code_dir3:V, reg p15:p(V +), reg code_env:*, reg code_env1:V, reg p16:p(V +), reg meta:*, reg meta1:V, reg p17:p(V +), reg r60:V, reg find_bad_closures:cls, reg code_env2:*, reg code_env3:V, reg p18:p(V +), reg r62:V, reg check_examples2:*, reg check_examples3:V, reg c12:L, reg _get_example_texts_from_source_dir:cls, reg dir13:*, reg dir14:V, reg p19:p(V +), reg r65:V, reg check_examples4:*, reg check_examples5:V, reg c13:L, reg find_bad_examples:cls, reg example_texts:*, reg example_texts1:V, reg p20:p(V +), reg r67:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r69:V, reg r70:V, reg bad_closures:*, reg bad_closures1:V, reg bad_examples:*, reg bad_examples1:V, reg list:cls, reg r71:V, reg l:*, reg class__:cls, reg r72:V, reg out:*, reg out1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    isTRUE = ldf isTRUE;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p = prom<V +>{
      sym = ldf `as.logical`;
      base = ldf `as.logical` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      Sys_getenv = ldf `Sys.getenv`;
      r2 = dyn Sys_getenv("_R_CHECK_RD_EXAMPLES_T_AND_F_");
      as_logical = ldf `as.logical` in base;
      r3 = dyn as_logical(r2);
      goto L0(r3);
    L2():
      r = dyn base(<lang Sys.getenv("_R_CHECK_RD_EXAMPLES_T_AND_F_")>);
      goto L0(r);
    };
    r5 = dyn isTRUE(p);
    check L22() else D1();
  D1():
    deopt 3 [r5];
  L22():
    st check_examples = r5;
    character = ldf character;
    check L23() else D2();
  D2():
    deopt 6 [];
  L23():
    r6 = dyn character();
    check L24() else D3();
  D3():
    deopt 7 [r6];
  L24():
    st bad_closures = r6;
    character1 = ldf character;
    check L25() else D4();
  D4():
    deopt 10 [];
  L25():
    r7 = dyn character1();
    check L26() else D5();
  D5():
    deopt 11 [r7];
  L26():
    st bad_examples = r7;
    r8 = clos inner2916718377;
    st find_bad_closures = r8;
    r9 = clos inner2071718627;
    st find_bad_examples = r9;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L1(r11):
    r13 = `!`(r11);
    c = `as.logical`(r13);
    if c then L29() else L2();
  L27():
    missing = ldf missing in base;
    r12 = dyn missing(<sym package>);
    goto L1(r12);
  L28():
    r10 = dyn base1(<sym package>);
    goto L1(r10);
  L2():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L8():
    check_examples4 = ld check_examples;
    check L85() else D42();
  L29():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D42():
    deopt 130 [check_examples4];
  L3(r15):
    r17 = `!=`(r15, 1);
    c1 = `as.logical`(r17);
    if c1 then L34() else L4();
  L9(r30):
    c3 = `as.logical`(r30);
    if c3 then L48() else L10();
  L30():
    package1 = ld package;
    check L32() else D6();
  L31():
    r14 = dyn base2(<sym package>);
    goto L3(r14);
  L46():
    missing1 = ldf missing in base;
    r31 = dyn missing1(<sym dir>);
    goto L9(r31);
  L47():
    r29 = dyn base3(<sym dir>);
    goto L9(r29);
  L85():
    check_examples5 = force? check_examples4;
    checkMissing(check_examples5);
    c13 = `as.logical`(check_examples5);
    if c13 then L86() else L18();
  D6():
    deopt 25 [package1];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L38() else D10();
  L10():
    goto L11();
  L11():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L52() else D17();
  L18():
    goto L19();
  L19():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L90() else L91();
  L32():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r16 = dyn length(package2);
    check L33() else D7();
  L34():
    stop = ldf stop;
    check L35() else D8();
  L48():
    stop1 = ldf stop;
    check L49() else D15();
  L86():
    find_bad_examples = ldf find_bad_examples;
    check L87() else D43();
  D7():
    deopt 28 [r16];
  D8():
    deopt 32 [];
  D10():
    deopt 38 [];
  D15():
    deopt 56 [];
  D17():
    deopt 62 [];
  D43():
    deopt 133 [];
  L20(r70):
    st out = r70;
    l = ld out;
    class__ = ldf `class<-`;
    check L95() else D48();
  L33():
    goto L3(r16);
  L35():
    r18 = dyn stop("argument 'package' must be of length 1");
    check L36() else D9();
  L38():
    p1 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p2 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r22 = dyn find_package(p1, p2);
    check L39() else D11();
  L49():
    r32 = dyn stop1("you must specify 'package' or 'dir'");
    check L50() else D16();
  L52():
    p5 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r35 = dyn file_path_as_absolute(p5);
    check L53() else D18();
  L87():
    p20 = prom<V +>{
      example_texts = ld example_texts;
      example_texts1 = force? example_texts;
      checkMissing(example_texts1);
      return example_texts1;
    };
    r67 = dyn find_bad_examples(p20);
    check L88() else D44();
  L90():
    bad_closures = ld bad_closures;
    check L92() else D45();
  L91():
    r69 = dyn base4[bad_closures, bad_examples](<sym bad_closures>, <sym bad_examples>);
    goto L20(r69);
  D9():
    deopt 34 [r18];
  D11():
    deopt 41 [r22];
  D16():
    deopt 58 [r32];
  D18():
    deopt 64 [r35];
  D44():
    deopt 135 [r67];
  D45():
    deopt 141 [bad_closures];
  D48():
    deopt 153 ["check_T_and_F", l, "check_T_and_F"];
  L36():
    goto L5();
  L39():
    st dir = r22;
    check_examples = ld check_examples;
    check L40() else D12();
  L50():
    goto L11();
  L53():
    st dir = r35;
    file_path1 = ldf `file.path`;
    check L54() else D19();
  L88():
    st bad_examples = r67;
    goto L19();
  L92():
    bad_closures1 = force? bad_closures;
    checkMissing(bad_closures1);
    bad_examples = ld bad_examples;
    check L93() else D46();
  L95():
    r72 = dyn class__(l, NULL, "check_T_and_F");
    check L96() else D49();
  D12():
    deopt 43 [check_examples];
  D19():
    deopt 67 [];
  D46():
    deopt 144 [bad_examples];
  D49():
    deopt 155 ["check_T_and_F", r72];
  L40():
    check_examples1 = force? check_examples;
    checkMissing(check_examples1);
    c2 = `as.logical`(check_examples1);
    if c2 then L41() else L6();
  L54():
    p6 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r37 = dyn file_path1(p6, "R");
    check L55() else D20();
  L93():
    bad_examples1 = force? bad_examples;
    checkMissing(bad_examples1);
    list = ldf list in base;
    r71 = dyn list(bad_closures1, bad_examples1);
    check L94() else D47();
  L96():
    st out = r72;
    out = ld out;
    check L97() else D50();
  D20():
    deopt 70 [r37];
  D47():
    deopt 148 [r71];
  D50():
    deopt 157 [out];
  L6():
    goto L7(NULL);
  L7(r27):
    goto L8();
  L41():
    _get_example_texts_from_example_dir = ldf `.get_example_texts_from_example_dir`;
    check L42() else D13();
  L55():
    st code_dir = r37;
    packageHasNamespace = ldf packageHasNamespace;
    check L56() else D21();
  L94():
    goto L20(r71);
  L97():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D13():
    deopt 46 [];
  D21():
    deopt 73 [];
  L42():
    p4 = prom<V +>{
      file_path = ldf `file.path`;
      p3 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r24 = dyn file_path(p3, "R-ex");
      return r24;
    };
    r26 = dyn _get_example_texts_from_example_dir(p4);
    check L43() else D14();
  L56():
    p8 = prom<V +>{
      basename = ldf basename;
      p7 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r39 = dyn basename(p7);
      return r39;
    };
    p10 = prom<V +>{
      dirname = ldf dirname;
      p9 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r42 = dyn dirname(p9);
      return r42;
    };
    r44 = dyn packageHasNamespace(p8, p10);
    check L57() else D22();
  D14():
    deopt 48 [r26];
  D22():
    deopt 76 [r44];
  L43():
    st example_texts = r26;
    goto L7(r26);
  L57():
    r45 = `!`(r44);
    c4 = `as.logical`(r45);
    if c4 then L58() else L12(c4);
  L12(c6):
    c10 = `as.logical`(c6);
    if c10 then L62() else L13();
  L58():
    dir_exists = ldf `dir.exists`;
    check L59() else D23();
  D23():
    deopt 79 [c4];
  L13():
    goto L16();
  L16():
    check_examples2 = ld check_examples;
    check L80() else D39();
  L59():
    p11 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r47 = dyn dir_exists(p11);
    check L60() else D24();
  L62():
    new_env = ldf `new.env`;
    check L63() else D25();
  D24():
    deopt 81 [c4, r47];
  D25():
    deopt 84 [];
  D39():
    deopt 121 [check_examples2];
  L60():
    c7 = `as.logical`(r47);
    c8 = `&&`(c4, c7);
    goto L12(c8);
  L63():
    r48 = dyn new_env[hash](TRUE);
    check L64() else D26();
  L80():
    check_examples3 = force? check_examples2;
    checkMissing(check_examples3);
    c12 = `as.logical`(check_examples3);
    if c12 then L81() else L17();
  D26():
    deopt 87 [r48];
  L17():
    goto L8();
  L64():
    st code_env = r48;
    file_path2 = ldf `file.path`;
    check L65() else D27();
  L81():
    _get_example_texts_from_source_dir = ldf `.get_example_texts_from_source_dir`;
    check L82() else D40();
  D27():
    deopt 90 [];
  D40():
    deopt 124 [];
  L65():
    p12 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r50 = dyn file_path2(p12, "DESCRIPTION");
    check L66() else D28();
  L82():
    p19 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r65 = dyn _get_example_texts_from_source_dir(p19);
    check L83() else D41();
  D28():
    deopt 93 [r50];
  D41():
    deopt 126 [r65];
  L66():
    st dfile = r50;
    file_test = ldf file_test;
    check L67() else D29();
  L83():
    st example_texts = r65;
    goto L8();
  D29():
    deopt 96 [];
  L67():
    p13 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r52 = dyn file_test("-f", p13);
    check L68() else D30();
  D30():
    deopt 99 [r52];
  L68():
    c11 = `as.logical`(r52);
    if c11 then L69() else L14();
  L14():
    character2 = ldf character;
    check L73() else D33();
  L15(r55):
    st meta = r55;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L75() else D35();
  L69():
    _read_description = ldf `.read_description`;
    check L70() else D31();
  D31():
    deopt 101 [];
  D33():
    deopt 105 [];
  D35():
    deopt 109 [];
  L70():
    p14 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r54 = dyn _read_description(p14);
    check L71() else D32();
  L73():
    r56 = dyn character2();
    check L74() else D34();
  L75():
    p15 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    p16 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    p17 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r60 = dyn _source_assignments_in_code_dir(p15, p16, p17);
    check L76() else D36();
  D32():
    deopt 103 [r54];
  D34():
    deopt 106 [r56];
  D36():
    deopt 113 [r60];
  L71():
    goto L15(r54);
  L74():
    goto L15(r56);
  L76():
    find_bad_closures = ldf find_bad_closures;
    check L77() else D37();
  D37():
    deopt 115 [];
  L77():
    p18 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    r62 = dyn find_bad_closures(p18);
    check L78() else D38();
  D38():
    deopt 117 [r62];
  L78():
    st bad_closures = r62;
    goto L16();
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg lapply:cls, reg as_list:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:cls, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x:*, reg x1:V, reg names:cls, reg r8:V, reg c:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r12:cls, reg p4:p(V +), reg r14:V, reg __:cls, reg r15:V |
    mkenv;
    st env = env;
    lapply = ldf lapply;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      as_list = ldf `as.list`;
      p = prom<V +>{
        env1 = ld env;
        env2 = force? env1;
        checkMissing(env2);
        return env2;
      };
      r1 = dyn as_list[, `all.names`, sorted](p, TRUE, TRUE);
      return r1;
    };
    p2 = prom<V +>{
      r3 = clos inner2854634098;
      return r3;
    };
    r5 = dyn lapply(p1, p2);
    check L3() else D1();
  D1():
    deopt 4 [r5];
  L3():
    st x = r5;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r7):
    c = `is.object`(r7);
    if c then L8() else L9(r7);
  L4():
    x = ld x;
    check L6() else D2();
  L5():
    r6 = dyn base(<sym x>);
    goto L0(r6);
  D2():
    deopt 8 [x];
  L1(dx1):
    popenv;
    return dx1;
  L6():
    x1 = force? x;
    checkMissing(x1);
    names = ldf names in base;
    r8 = dyn names(x1);
    check L7() else D3();
  L8():
    dr = tryDispatchBuiltin.1("[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(r10):
    vapply = ldf vapply;
    check L11() else D4();
  D3():
    deopt 11 [r8];
  D4():
    deopt 13 [r10];
  L7():
    goto L0(r8);
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
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
    check L12() else D5();
  D5():
    deopt 17 [r10, r14];
  L12():
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
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg s1:*, reg s2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg any:cls, reg r8:V |
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
    r = dyn base(<lang `%in%`(s, c("T", "F"))>);
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
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c("T", "F");
      goto L0(r5);
    L2():
      r3 = dyn base1("T", "F");
      goto L0(r3);
    };
    r7 = dyn _in_(p, p1);
    check L4() else D1();
  D1():
    deopt 6 [r7];
  L4():
    any = ldf any in base;
    r8 = dyn any(r7);
    check L5() else D2();
  D2():
    deopt 8 [r8];
  L5():
    goto L0(r8);
  }
}
fun inner2071718627(txts) {
  (reg txts:*) -+> V { var txts:*, reg new_env:cls, reg r:V, reg lapply:cls, reg txts1:*, reg txts2:V, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg txts3:*, reg txts4:V, reg names:cls, reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lengths:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r11:V, reg r12:V, reg __:cls, reg r13:V |
    mkenv;
    st txts = txts;
    new_env = ldf `new.env`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn new_env[hash](TRUE);
    check L3() else D1();
  D1():
    deopt 4 [r];
  L3():
    st env = r;
    lapply = ldf lapply;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p = prom<V +>{
      txts1 = ld txts;
      txts2 = force? txts1;
      checkMissing(txts2);
      return txts2;
    };
    p1 = prom<V +>{
      r2 = clos inner4259292012;
      return r2;
    };
    r4 = dyn lapply(p, p1);
    check L5() else D3();
  D3():
    deopt 10 [r4];
  L5():
    st x = r4;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r6):
    c = `is.object`(r6);
    if c then L10() else L11(r6);
  L6():
    txts3 = ld txts;
    check L8() else D4();
  L7():
    r5 = dyn base(<sym txts>);
    goto L0(r5);
  D4():
    deopt 14 [txts3];
  L1(dx1):
    popenv;
    return dx1;
  L8():
    txts4 = force? txts3;
    checkMissing(txts4);
    names = ldf names in base;
    r7 = dyn names(txts4);
    check L9() else D5();
  L10():
    dr = tryDispatchBuiltin.1("[", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r9):
    lengths = ldf lengths;
    check L13() else D6();
  D5():
    deopt 17 [r7];
  D6():
    deopt 19 [r9];
  L9():
    goto L0(r7);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r11 = dyn lengths(p2);
    check L14() else D7();
  D7():
    deopt 21 [r9, r11];
  L14():
    r12 = `>`(r11, 0);
    __ = ldf `[` in base;
    r13 = dyn __(r9, r12);
    goto L1(r13);
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg tryCatch:cls, reg eval:cls, reg str2expression:cls, reg paste:cls, reg paste1:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg env:*, reg env1:V, reg p4:p(V +), reg find_bad_closures:cls, reg env2:*, reg env3:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:cls, reg p7:p(V +), reg r14:V |
    mkenv;
    st txt = txt;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p6 = prom<V +>{
      eval = ldf eval;
      p3 = prom<V +>{
        str2expression = ldf str2expression;
        p2 = prom<V +>{
          paste = ldf paste;
          p1 = prom<V +>{
            paste1 = ldf paste;
            p = prom<V +>{
              txt1 = ld txt;
              txt2 = force? txt1;
              checkMissing(txt2);
              return txt2;
            };
            r1 = dyn paste1[, collapse](p, "\n");
            return r1;
          };
          r3 = dyn paste[, , , collapse]("FOO <- function() {", p1, "}", "\n");
          return r3;
        };
        r5 = dyn str2expression(p2);
        return r5;
      };
      p4 = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      dyn eval(p3, p4);
      find_bad_closures = ldf find_bad_closures;
      p5 = prom<V +>{
        env2 = ld env;
        env3 = force? env2;
        checkMissing(env3);
        return env3;
      };
      r10 = dyn find_bad_closures(p5);
      return r10;
    };
    p7 = prom<V +>{
      r12 = clos inner3708401697;
      return r12;
    };
    r14 = dyn tryCatch[, error](p6, p7);
    check L1() else D1();
  D1():
    deopt 5 [r14];
  L1():
    popenv;
    return r14;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg character:cls, reg r:V |
    mkenv;
    st e = e;
    character = ldf character;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn character();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}