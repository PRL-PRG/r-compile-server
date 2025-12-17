fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.check_bogus_return` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg character:cls, reg r:V, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg package1:*, reg package2:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg stop:cls, reg r10:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r14:V, reg _notin_:cls, reg package5:*, reg package6:V, reg p2:p(V +), reg _get_standard_package_names:cls, reg r16:V, reg c2:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r19:V, reg p3:p(V +), reg r21:V, reg c3:L, reg _load_namespace_quietly:cls, reg package7:*, reg package8:V, reg p4:p(V +), reg dirname:cls, reg dir1:*, reg dir2:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg r26:V, reg asNamespace:cls, reg package9:*, reg package10:V, reg p7:p(V +), reg r28:V, reg find_bad_closures:cls, reg code_env:*, reg code_env1:V, reg p8:p(V +), reg r30:V, reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg missing1:cls, reg r35:V, reg c4:L, reg stop1:cls, reg r36:V, reg file_path_as_absolute:cls, reg dir3:*, reg dir4:V, reg p9:p(V +), reg r39:V, reg file_path:cls, reg dir5:*, reg dir6:V, reg p10:p(V +), reg r41:V, reg dir_exists:cls, reg code_dir:*, reg code_dir1:V, reg p11:p(V +), reg r43:V, reg c5:L, reg new_env:cls, reg r44:V, reg file_path1:cls, reg dir7:*, reg dir8:V, reg p12:p(V +), reg r46:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p13:p(V +), reg r48:V, reg c6:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p14:p(V +), reg r50:V, reg r51:V, reg character1:cls, reg r52:V, reg _source_assignments_in_code_dir:cls, reg code_dir2:*, reg code_dir3:V, reg p15:p(V +), reg code_env2:*, reg code_env3:V, reg p16:p(V +), reg meta:*, reg meta1:V, reg p17:p(V +), reg r56:V, reg find_bad_closures1:cls, reg code_env4:*, reg code_env5:V, reg p18:p(V +), reg r58:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg r60:V, reg bad_closures:*, reg bad_closures1:V, reg list:cls, reg r61:V, reg l:*, reg class__:cls, reg r62:V, reg out:*, reg out1:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    character = ldf character;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    r = dyn character();
    check L17() else D1();
  D1():
    deopt 2 [r];
  L17():
    st bad_closures = r;
    r1 = clos inner2916718377;
    st find_bad_closures = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L20() else L2();
  L18():
    missing = ldf missing in base;
    r4 = dyn missing(<sym package>);
    goto L1(r4);
  L19():
    r2 = dyn base(<sym package>);
    goto L1(r2);
  L2():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L8():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L72() else L73();
  L20():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r7):
    r9 = `!=`(r7, 1);
    c1 = `as.logical`(r9);
    if c1 then L25() else L4();
  L9(r34):
    c4 = `as.logical`(r34);
    if c4 then L44() else L10();
  L15(r60):
    st out = r60;
    l = ld out;
    class__ = ldf `class<-`;
    check L76() else D40();
  L21():
    package1 = ld package;
    check L23() else D2();
  L22():
    r6 = dyn base1(<sym package>);
    goto L3(r6);
  L42():
    missing1 = ldf missing in base;
    r35 = dyn missing1(<sym dir>);
    goto L9(r35);
  L43():
    r33 = dyn base2(<sym dir>);
    goto L9(r33);
  L72():
    bad_closures = ld bad_closures;
    check L74() else D38();
  L73():
    r59 = dyn base3[bad_closures](<sym bad_closures>);
    goto L15(r59);
  D2():
    deopt 13 [package1];
  D38():
    deopt 117 [bad_closures];
  D40():
    deopt 126 ["check_bogus_return", l, "check_bogus_return"];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L29() else D6();
  L10():
    goto L11();
  L11():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L48() else D18();
  L23():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r8 = dyn length(package2);
    check L24() else D3();
  L25():
    stop = ldf stop;
    check L26() else D4();
  L44():
    stop1 = ldf stop;
    check L45() else D16();
  L74():
    bad_closures1 = force? bad_closures;
    checkMissing(bad_closures1);
    list = ldf list in base;
    r61 = dyn list(bad_closures1);
    check L75() else D39();
  L76():
    r62 = dyn class__(l, NULL, "check_bogus_return");
    check L77() else D41();
  D3():
    deopt 16 [r8];
  D4():
    deopt 20 [];
  D6():
    deopt 26 [];
  D16():
    deopt 57 [];
  D18():
    deopt 63 [];
  D39():
    deopt 121 [r61];
  D41():
    deopt 128 ["check_bogus_return", r62];
  L24():
    goto L3(r8);
  L26():
    r10 = dyn stop("argument 'package' must be of length 1");
    check L27() else D5();
  L29():
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
    r14 = dyn find_package(p, p1);
    check L30() else D7();
  L45():
    r36 = dyn stop1("you must specify 'package' or 'dir'");
    check L46() else D17();
  L48():
    p9 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r39 = dyn file_path_as_absolute(p9);
    check L49() else D19();
  L75():
    goto L15(r61);
  L77():
    st out = r62;
    out = ld out;
    check L78() else D42();
  D5():
    deopt 22 [r10];
  D7():
    deopt 29 [r14];
  D17():
    deopt 59 [r36];
  D19():
    deopt 65 [r39];
  D42():
    deopt 130 [out];
  L27():
    goto L5();
  L30():
    st dir = r14;
    _notin_ = ldf `%notin%`;
    check L31() else D8();
  L46():
    goto L11();
  L49():
    st dir = r39;
    file_path = ldf `file.path`;
    check L50() else D20();
  L78():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D8():
    deopt 32 [];
  D20():
    deopt 68 [];
  L31():
    p2 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p3 = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r16 = dyn _get_standard_package_names();
      c2 = `is.object`(r16);
      if c2 then L1() else L2(r16);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r16);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r18):
      r19 = `$`(r18, <sym base>);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r21 = dyn _notin_(p2, p3);
    check L32() else D9();
  L50():
    p10 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r41 = dyn file_path(p10, "R");
    check L51() else D21();
  D9():
    deopt 35 [r21];
  D21():
    deopt 71 [r41];
  L32():
    c3 = `as.logical`(r21);
    if c3 then L33() else L6();
  L51():
    st code_dir = r41;
    dir_exists = ldf `dir.exists`;
    check L52() else D22();
  D22():
    deopt 74 [];
  L6():
    goto L7(NULL);
  L7(r31):
    goto L8();
  L33():
    _load_namespace_quietly = ldf `.load_namespace_quietly`;
    check L34() else D10();
  L52():
    p11 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r43 = dyn dir_exists(p11);
    check L53() else D23();
  D10():
    deopt 37 [];
  D23():
    deopt 76 [r43];
  L34():
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
      r24 = dyn dirname(p5);
      return r24;
    };
    r26 = dyn _load_namespace_quietly(p4, p6);
    check L35() else D11();
  L53():
    c5 = `as.logical`(r43);
    if c5 then L54() else L12();
  D11():
    deopt 40 [r26];
  L12():
    goto L8();
  L35():
    asNamespace = ldf asNamespace;
    check L36() else D12();
  L54():
    new_env = ldf `new.env`;
    check L55() else D24();
  D12():
    deopt 42 [];
  D24():
    deopt 78 [];
  L36():
    p7 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r28 = dyn asNamespace(p7);
    check L37() else D13();
  L55():
    r44 = dyn new_env[hash](TRUE);
    check L56() else D25();
  D13():
    deopt 44 [r28];
  D25():
    deopt 81 [r44];
  L37():
    st code_env = r28;
    find_bad_closures = ldf find_bad_closures;
    check L38() else D14();
  L56():
    st code_env = r44;
    file_path1 = ldf `file.path`;
    check L57() else D26();
  D14():
    deopt 47 [];
  D26():
    deopt 84 [];
  L38():
    p8 = prom<V +>{
      code_env = ld code_env;
      code_env1 = force? code_env;
      checkMissing(code_env1);
      return code_env1;
    };
    r30 = dyn find_bad_closures(p8);
    check L39() else D15();
  L57():
    p12 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r46 = dyn file_path1(p12, "DESCRIPTION");
    check L58() else D27();
  D15():
    deopt 49 [r30];
  D27():
    deopt 87 [r46];
  L39():
    st bad_closures = r30;
    goto L7(r30);
  L58():
    st dfile = r46;
    file_test = ldf file_test;
    check L59() else D28();
  D28():
    deopt 90 [];
  L59():
    p13 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r48 = dyn file_test("-f", p13);
    check L60() else D29();
  D29():
    deopt 93 [r48];
  L60():
    c6 = `as.logical`(r48);
    if c6 then L61() else L13();
  L13():
    character1 = ldf character;
    check L65() else D32();
  L14(r51):
    st meta = r51;
    _source_assignments_in_code_dir = ldf `.source_assignments_in_code_dir`;
    check L67() else D34();
  L61():
    _read_description = ldf `.read_description`;
    check L62() else D30();
  D30():
    deopt 95 [];
  D32():
    deopt 99 [];
  D34():
    deopt 103 [];
  L62():
    p14 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r50 = dyn _read_description(p14);
    check L63() else D31();
  L65():
    r52 = dyn character1();
    check L66() else D33();
  L67():
    p15 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    p16 = prom<V +>{
      code_env2 = ld code_env;
      code_env3 = force? code_env2;
      checkMissing(code_env3);
      return code_env3;
    };
    p17 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    r56 = dyn _source_assignments_in_code_dir(p15, p16, p17);
    check L68() else D35();
  D31():
    deopt 97 [r50];
  D33():
    deopt 100 [r52];
  D35():
    deopt 107 [r56];
  L63():
    goto L14(r50);
  L66():
    goto L14(r52);
  L68():
    find_bad_closures1 = ldf find_bad_closures;
    check L69() else D36();
  D36():
    deopt 109 [];
  L69():
    p18 = prom<V +>{
      code_env4 = ld code_env;
      code_env5 = force? code_env4;
      checkMissing(code_env5);
      return code_env5;
    };
    r58 = dyn find_bad_closures1(p18);
    check L70() else D37();
  D37():
    deopt 111 [r58];
  L70():
    st bad_closures = r58;
    goto L8();
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
  (reg v:*) -+> V { var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg __:cls, reg r4:V, reg r5:cls, reg v3:*, reg v4:V, reg p:p(V +), reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V |
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
    r7 = dyn r5[, merge](p, FALSE);
    check L9() else D4();
  D4():
    deopt 17 [r7];
  L9():
    c1 = `is.object`(r7);
    if c1 then L11() else L12(r7);
  L10(dx1):
    popenv;
    return dx1;
  L11():
    dr = tryDispatchBuiltin.1("$", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(r9):
    r10 = `$`(r9, <sym variables>);
    goto L10(r10);
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
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
    r = dyn base(<lang `%in%`(s, "return")>);
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
    r3 = dyn _in_(p, "return");
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