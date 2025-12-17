fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3796144728;
    st aspell_package_description = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3796144728(dir, ignore, control, program, dictionaries) {
  (reg dir:*, reg ignore:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p1:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character1:cls, reg r6:V, reg p2:p(V +), reg __:cls, reg r8:V, reg r9:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r11:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r13:V, reg ___:cls, reg r14:V, reg r15:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg meta:*, reg meta1:V, reg c:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r20:V, reg is_na:cls, reg r21:V, reg c1:L, reg Sys_getenv:cls, reg r23:V, reg str2logical:cls, reg defaults:*, reg defaults1:V, reg p6:p(V +), reg r25:V, reg c2:L, reg _aspell_package_defaults:cls, reg dir7:*, reg dir8:V, reg p7:p(V +), reg encoding:*, reg encoding1:V, reg p8:p(V +), reg r28:V, reg c3:L, reg r30:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r31:V, reg dx4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg defaults2:*, reg defaults3:V, reg c4:V, reg r34:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg defaults4:*, reg defaults5:V, reg c6:L, reg defaults7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r37:V, reg c7:V, reg r38:V, reg c8:L, reg d:*, reg d1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg defaults8:*, reg defaults9:V, reg c9:L, reg defaults11:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r41:V, reg c10:V, reg r42:V, reg c11:L, reg d3:*, reg d4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg defaults12:*, reg defaults13:V, reg c12:L, reg defaults15:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r45:V, reg c13:V, reg r46:V, reg c14:L, reg d6:*, reg d7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg defaults16:*, reg defaults17:V, reg c15:L, reg defaults19:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r49:V, reg c16:V, reg r50:V, reg c17:L, reg aspell_find_dictionaries:cls, reg d9:*, reg d10:V, reg p9:p(V +), reg file_path1:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg r53:V, reg p11:p(V +), reg r55:V, reg r56:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p12:p(V +), reg r59:V, reg aspell:cls, reg files:*, reg files1:V, reg p13:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg ignore1:*, reg ignore2:V, reg list1:cls, reg r63:V, reg p14:p(V +), reg control1:*, reg control2:V, reg p15:p(V +), reg encoding2:*, reg encoding3:V, reg p16:p(V +), reg program3:*, reg program4:V, reg p17:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p18:p(V +), reg r69:V |
    mkenv;
    st dir = dir;
    ignore_isMissing = missing.0(ignore);
    if ignore_isMissing then L0() else L1(ignore);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(ignore_orDefault):
    st ignore = ignore_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L2() else L3(control);
  L2():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list();
      goto L0(r4);
    L2():
      r2 = dyn base();
      goto L0(r2);
    };
    goto L3(p1);
  L3(control_orDefault):
    st control = control_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L4(NULL) else L4(program);
  L4(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L5() else L6(dictionaries);
  L5():
    p2 = prom<V +>{
      character1 = ldf character;
      r6 = dyn character1();
      return r6;
    };
    goto L6(p2);
  L6(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    __ = ldf `::`;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    r8 = dyn __("tools", "file_path_as_absolute");
    check L29() else D1();
  D1():
    deopt 4 [r8];
  L29():
    checkFun.0(r8);
    r9 = r8 as cls;
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r11 = dyn r9(p3);
    check L30() else D2();
  D2():
    deopt 7 [r11];
  L30():
    st dir = r11;
    file_path = ldf `file.path`;
    check L31() else D3();
  D3():
    deopt 10 [];
  L31():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r13 = dyn file_path(p4, "DESCRIPTION");
    check L32() else D4();
  D4():
    deopt 13 [r13];
  L32():
    st files = r13;
    ___ = ldf `:::`;
    check L33() else D5();
  D5():
    deopt 16 [];
  L33():
    r14 = dyn ___("tools", ".get_package_metadata");
    check L34() else D6();
  D6():
    deopt 19 [r14];
  L34():
    checkFun.0(r14);
    r15 = r14 as cls;
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r17 = dyn r15[, installed](p5, FALSE);
    check L35() else D7();
  D7():
    deopt 24 [r17];
  L35():
    st meta = r17;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L7(r19):
    c1 = `as.logical`(r19);
    if c1 then L43() else L9();
  L36():
    meta = ld meta;
    check L38() else D8();
  L37():
    r18 = dyn base1(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L7(r18);
  D8():
    deopt 28 [meta];
  L9():
    goto L10();
  L10():
    Sys_getenv = ldf `Sys.getenv`;
    check L45() else D10();
  L38():
    meta1 = force? meta;
    checkMissing(meta1);
    c = `is.object`(meta1);
    if c then L39() else L40(meta1);
  L43():
    st encoding = "unknown";
    goto L10();
  D10():
    deopt 42 [];
  L8(dx1):
    st encoding = dx1;
    is_na = ldf `is.na` in base;
    r21 = dyn is_na(dx1);
    check L42() else D9();
  L39():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(dr);
  L40(meta3):
    __1 = ldf `[` in base;
    r20 = dyn __1(meta3, "Encoding");
    goto L8(r20);
  L45():
    r23 = dyn Sys_getenv("_R_ASPELL_USE_DEFAULTS_FOR_PACKAGE_DESCRIPTION_", "TRUE");
    check L46() else D11();
  D9():
    deopt 35 [r21];
  D11():
    deopt 45 [r23];
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L42():
    goto L7(r21);
  L46():
    st defaults = r23;
    str2logical = ldf str2logical;
    check L47() else D12();
  D12():
    deopt 48 [];
  L47():
    p6 = prom<V +>{
      defaults = ld defaults;
      defaults1 = force? defaults;
      checkMissing(defaults1);
      return defaults1;
    };
    r25 = dyn str2logical(p6);
    check L48() else D13();
  D13():
    deopt 50 [r25];
  L48():
    c2 = `as.logical`(r25);
    if c2 then L49() else L11();
  L11():
    goto L12(NULL);
  L12(dx4):
    st defaults = dx4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L49():
    _aspell_package_defaults = ldf `.aspell_package_defaults`;
    check L50() else D14();
  D14():
    deopt 52 [];
  L13(r33):
    r34 = `!`(r33);
    c5 = `as.logical`(r34);
    if c5 then L60() else L14();
  L50():
    p7 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p8 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r28 = dyn _aspell_package_defaults(p7, p8);
    check L51() else D15();
  L57():
    defaults2 = ld defaults;
    check L59() else D16();
  L58():
    r32 = dyn base2(<sym defaults>);
    goto L13(r32);
  D15():
    deopt 55 [r28];
  D16():
    deopt 61 [defaults2];
  L14():
    goto L27();
  L27():
    aspell_find_program = ldf aspell_find_program;
    check L103() else D26();
  L51():
    c3 = `is.object`(r28);
    if c3 then L53() else L54(r28);
  L59():
    defaults3 = force? defaults2;
    checkMissing(defaults3);
    c4 = `==`(defaults3, NULL);
    goto L13(c4);
  L60():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  D26():
    deopt 119 [];
  L15(r36):
    r38 = `!`(r36);
    c8 = `as.logical`(r38);
    if c8 then L68() else L16();
  L52(dx3):
    goto L12(dx3);
  L53():
    dr2 = tryDispatchBuiltin.1("$", r28);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L55() else L54(dr2);
  L54(r30):
    r31 = `$`(r30, <sym description>);
    goto L52(r31);
  L61():
    defaults4 = ld defaults;
    check L63() else D17();
  L62():
    r35 = dyn base3(<lang `<-`(d, `$`(defaults, ignore))>);
    goto L15(r35);
  L103():
    p12 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r59 = dyn aspell_find_program(p12);
    check L104() else D27();
  D17():
    deopt 66 [defaults4];
  D27():
    deopt 121 [r59];
  L16():
    goto L17();
  L17():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L55():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L52(dx2);
  L63():
    defaults5 = force? defaults4;
    checkMissing(defaults5);
    c6 = `is.object`(defaults5);
    if c6 then L65() else L66(defaults5);
  L68():
    d = ld d;
    check L69() else D18();
  L104():
    st program = r59;
    aspell = ldf aspell;
    check L105() else D28();
  D18():
    deopt 72 [d];
  D28():
    deopt 124 [];
  L18(r40):
    r42 = `!`(r40);
    c11 = `as.logical`(r42);
    if c11 then L78() else L19();
  L64(dx6):
    st d = dx6;
    c7 = `==`(dx6, NULL);
    goto L15(c7);
  L65():
    dr4 = tryDispatchBuiltin.1("$", defaults5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L67() else L66(dr4);
  L66(defaults7):
    r37 = `$`(defaults7, <sym ignore>);
    goto L64(r37);
  L69():
    d1 = force? d;
    checkMissing(d1);
    st ignore = d1;
    goto L17();
  L71():
    defaults8 = ld defaults;
    check L73() else D19();
  L72():
    r39 = dyn base4(<lang `<-`(d, `$`(defaults, control))>);
    goto L18(r39);
  L105():
    p13 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p14 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      list1 = ldf list in base;
      r63 = dyn list1("dcf", ignore2);
      goto L0(r63);
    L2():
      r61 = dyn base7[, ignore]("dcf", <sym ignore>);
      goto L0(r61);
    };
    p15 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    p16 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    p17 = prom<V +>{
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      return program4;
    };
    p18 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r69 = dyn aspell[, filter, control, encoding, program, dictionaries](p13, p14, p15, p16, p17, p18);
    check L106() else D29();
  D19():
    deopt 78 [defaults8];
  D29():
    deopt 136 [r69];
  L19():
    goto L20();
  L20():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L67():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L64(dx5);
  L73():
    defaults9 = force? defaults8;
    checkMissing(defaults9);
    c9 = `is.object`(defaults9);
    if c9 then L75() else L76(defaults9);
  L78():
    d3 = ld d;
    check L79() else D20();
  L106():
    popenv;
    return r69;
  D20():
    deopt 84 [d3];
  L21(r44):
    r46 = `!`(r44);
    c14 = `as.logical`(r46);
    if c14 then L88() else L22();
  L74(dx8):
    st d = dx8;
    c10 = `==`(dx8, NULL);
    goto L18(c10);
  L75():
    dr6 = tryDispatchBuiltin.1("$", defaults9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L77() else L76(dr6);
  L76(defaults11):
    r41 = `$`(defaults11, <sym control>);
    goto L74(r41);
  L79():
    d4 = force? d3;
    checkMissing(d4);
    st control = d4;
    goto L20();
  L81():
    defaults12 = ld defaults;
    check L83() else D21();
  L82():
    r43 = dyn base5(<lang `<-`(d, `$`(defaults, program))>);
    goto L21(r43);
  D21():
    deopt 90 [defaults12];
  L22():
    goto L23();
  L23():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L77():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L74(dx7);
  L83():
    defaults13 = force? defaults12;
    checkMissing(defaults13);
    c12 = `is.object`(defaults13);
    if c12 then L85() else L86(defaults13);
  L88():
    d6 = ld d;
    check L89() else D22();
  D22():
    deopt 96 [d6];
  L24(r48):
    r50 = `!`(r48);
    c17 = `as.logical`(r50);
    if c17 then L98() else L25();
  L84(dx10):
    st d = dx10;
    c13 = `==`(dx10, NULL);
    goto L21(c13);
  L85():
    dr8 = tryDispatchBuiltin.1("$", defaults13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L87() else L86(dr8);
  L86(defaults15):
    r45 = `$`(defaults15, <sym program>);
    goto L84(r45);
  L89():
    d7 = force? d6;
    checkMissing(d7);
    st program = d7;
    goto L23();
  L91():
    defaults16 = ld defaults;
    check L93() else D23();
  L92():
    r47 = dyn base6(<lang `<-`(d, `$`(defaults, dictionaries))>);
    goto L24(r47);
  D23():
    deopt 102 [defaults16];
  L25():
    goto L26(NULL);
  L26(r56):
    goto L27();
  L87():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L84(dx9);
  L93():
    defaults17 = force? defaults16;
    checkMissing(defaults17);
    c15 = `is.object`(defaults17);
    if c15 then L95() else L96(defaults17);
  L98():
    aspell_find_dictionaries = ldf aspell_find_dictionaries;
    check L99() else D24();
  D24():
    deopt 109 [];
  L94(dx12):
    st d = dx12;
    c16 = `==`(dx12, NULL);
    goto L24(c16);
  L95():
    dr10 = tryDispatchBuiltin.1("$", defaults17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L97() else L96(dr10);
  L96(defaults19):
    r49 = `$`(defaults19, <sym dictionaries>);
    goto L94(r49);
  L99():
    p9 = prom<V +>{
      d9 = ld d;
      d10 = force? d9;
      checkMissing(d10);
      return d10;
    };
    p11 = prom<V +>{
      file_path1 = ldf `file.path`;
      p10 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r53 = dyn file_path1(p10, ".aspell");
      return r53;
    };
    r55 = dyn aspell_find_dictionaries(p9, p11);
    check L100() else D25();
  D25():
    deopt 112 [r55];
  L97():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L94(dx11);
  L100():
    st dictionaries = r55;
    goto L26(r55);
  }
}