fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3796144728;
    st aspell_package_R_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3796144728(dir, ignore, control, program, dictionaries) {
  (reg dir:*, reg ignore:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p1:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character1:cls, reg r6:V, reg p2:p(V +), reg __:cls, reg r8:V, reg r9:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r11:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r13:V, reg dir_exists:cls, reg subdir:*, reg subdir1:V, reg p5:p(V +), reg r15:V, reg c:L, reg __1:cls, reg r16:V, reg r17:cls, reg subdir2:*, reg subdir3:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg c1:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg r24:V, reg character2:cls, reg r25:V, reg ___:cls, reg r26:V, reg r27:cls, reg dir5:*, reg dir6:V, reg p8:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg meta:*, reg meta1:V, reg c2:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r32:V, reg is_na:cls, reg r33:V, reg c3:L, reg _aspell_package_defaults:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg encoding:*, reg encoding1:V, reg p10:p(V +), reg r37:V, reg c4:L, reg r39:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg defaults:*, reg defaults1:V, reg c5:V, reg r43:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg defaults2:*, reg defaults3:V, reg c7:L, reg defaults5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r46:V, reg c8:V, reg r47:V, reg c9:L, reg d:*, reg d1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg defaults6:*, reg defaults7:V, reg c10:L, reg defaults9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r50:V, reg c11:V, reg r51:V, reg c12:L, reg d3:*, reg d4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg defaults10:*, reg defaults11:V, reg c13:L, reg defaults13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r54:V, reg c14:V, reg r55:V, reg c15:L, reg d6:*, reg d7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg defaults14:*, reg defaults15:V, reg c16:L, reg defaults17:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r58:V, reg c17:V, reg r59:V, reg c18:L, reg aspell_find_dictionaries:cls, reg d9:*, reg d10:V, reg p11:p(V +), reg file_path1:cls, reg dir9:*, reg dir10:V, reg p12:p(V +), reg r62:V, reg p13:p(V +), reg r64:V, reg r65:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p14:p(V +), reg r68:V, reg aspell:cls, reg files:*, reg files1:V, reg p15:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg ignore1:*, reg ignore2:V, reg list1:cls, reg r72:V, reg p16:p(V +), reg control1:*, reg control2:V, reg p17:p(V +), reg encoding2:*, reg encoding3:V, reg p18:p(V +), reg program3:*, reg program4:V, reg p19:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p20:p(V +), reg r78:V |
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
    r13 = dyn file_path(p4, "R");
    check L32() else D4();
  D4():
    deopt 13 [r13];
  L32():
    st subdir = r13;
    dir_exists = ldf `dir.exists`;
    check L33() else D5();
  D5():
    deopt 16 [];
  L33():
    p5 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r15 = dyn dir_exists(p5);
    check L34() else D6();
  D6():
    deopt 18 [r15];
  L34():
    c = `as.logical`(r15);
    if c then L35() else L7();
  L7():
    character2 = ldf character;
    check L40() else D10();
  L8(r24):
    st files = r24;
    ___ = ldf `:::`;
    check L42() else D12();
  L35():
    __1 = ldf `::`;
    check L36() else D7();
  D7():
    deopt 20 [];
  D10():
    deopt 31 [];
  D12():
    deopt 35 [];
  L36():
    r16 = dyn __1("tools", "list_files_with_type");
    check L37() else D8();
  L40():
    r25 = dyn character2();
    check L41() else D11();
  L42():
    r26 = dyn ___("tools", ".get_package_metadata");
    check L43() else D13();
  D8():
    deopt 23 [r16];
  D11():
    deopt 32 [r25];
  D13():
    deopt 38 [r26];
  L37():
    checkFun.0(r16);
    r17 = r16 as cls;
    p6 = prom<V +>{
      subdir2 = ld subdir;
      subdir3 = force? subdir2;
      checkMissing(subdir3);
      return subdir3;
    };
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c1 = ldf c in base;
      r21 = dyn c1("unix", "windows");
      goto L0(r21);
    L2():
      r19 = dyn base1("unix", "windows");
      goto L0(r19);
    };
    r23 = dyn r17[, , OS_subdirs](p6, "code", p7);
    check L38() else D9();
  L41():
    goto L8(r25);
  L43():
    checkFun.0(r26);
    r27 = r26 as cls;
    p8 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r29 = dyn r27[, installed](p8, FALSE);
    check L44() else D14();
  D9():
    deopt 29 [r23];
  D14():
    deopt 43 [r29];
  L38():
    goto L8(r23);
  L44():
    st meta = r29;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L9(r31):
    c3 = `as.logical`(r31);
    if c3 then L52() else L11();
  L45():
    meta = ld meta;
    check L47() else D15();
  L46():
    r30 = dyn base2(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L9(r30);
  D15():
    deopt 47 [meta];
  L11():
    goto L12();
  L12():
    _aspell_package_defaults = ldf `.aspell_package_defaults`;
    check L54() else D17();
  L47():
    meta1 = force? meta;
    checkMissing(meta1);
    c2 = `is.object`(meta1);
    if c2 then L48() else L49(meta1);
  L52():
    st encoding = "unknown";
    goto L12();
  D17():
    deopt 61 [];
  L10(dx1):
    st encoding = dx1;
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(dx1);
    check L51() else D16();
  L48():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(dr);
  L49(meta3):
    __2 = ldf `[` in base;
    r32 = dyn __2(meta3, "Encoding");
    goto L10(r32);
  L54():
    p9 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p10 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r37 = dyn _aspell_package_defaults(p9, p10);
    check L55() else D18();
  D16():
    deopt 54 [r33];
  D18():
    deopt 64 [r37];
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L51():
    goto L9(r33);
  L55():
    c4 = `is.object`(r37);
    if c4 then L57() else L58(r37);
  L56(dx3):
    st defaults = dx3;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L57():
    dr2 = tryDispatchBuiltin.1("$", r37);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(r39):
    r40 = `$`(r39, <sym R_files>);
    goto L56(r40);
  L13(r42):
    r43 = `!`(r42);
    c6 = `as.logical`(r43);
    if c6 then L63() else L14();
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L56(dx2);
  L60():
    defaults = ld defaults;
    check L62() else D19();
  L61():
    r41 = dyn base3(<sym defaults>);
    goto L13(r41);
  D19():
    deopt 68 [defaults];
  L14():
    goto L27();
  L27():
    aspell_find_program = ldf aspell_find_program;
    check L106() else D29();
  L62():
    defaults1 = force? defaults;
    checkMissing(defaults1);
    c5 = `==`(defaults1, NULL);
    goto L13(c5);
  L63():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  D29():
    deopt 126 [];
  L15(r45):
    r47 = `!`(r45);
    c9 = `as.logical`(r47);
    if c9 then L71() else L16();
  L64():
    defaults2 = ld defaults;
    check L66() else D20();
  L65():
    r44 = dyn base4(<lang `<-`(d, `$`(defaults, ignore))>);
    goto L15(r44);
  L106():
    p14 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r68 = dyn aspell_find_program(p14);
    check L107() else D30();
  D20():
    deopt 73 [defaults2];
  D30():
    deopt 128 [r68];
  L16():
    goto L17();
  L17():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L66():
    defaults3 = force? defaults2;
    checkMissing(defaults3);
    c7 = `is.object`(defaults3);
    if c7 then L68() else L69(defaults3);
  L71():
    d = ld d;
    check L72() else D21();
  L107():
    st program = r68;
    aspell = ldf aspell;
    check L108() else D31();
  D21():
    deopt 79 [d];
  D31():
    deopt 131 [];
  L18(r49):
    r51 = `!`(r49);
    c12 = `as.logical`(r51);
    if c12 then L81() else L19();
  L67(dx5):
    st d = dx5;
    c8 = `==`(dx5, NULL);
    goto L15(c8);
  L68():
    dr4 = tryDispatchBuiltin.1("$", defaults3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(dr4);
  L69(defaults5):
    r46 = `$`(defaults5, <sym ignore>);
    goto L67(r46);
  L72():
    d1 = force? d;
    checkMissing(d1);
    st ignore = d1;
    goto L17();
  L74():
    defaults6 = ld defaults;
    check L76() else D22();
  L75():
    r48 = dyn base5(<lang `<-`(d, `$`(defaults, control))>);
    goto L18(r48);
  L108():
    p15 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p16 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      list1 = ldf list in base;
      r72 = dyn list1("R", ignore2);
      goto L0(r72);
    L2():
      r70 = dyn base8[, ignore]("R", <sym ignore>);
      goto L0(r70);
    };
    p17 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    p18 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    p19 = prom<V +>{
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      return program4;
    };
    p20 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r78 = dyn aspell[, filter, control, encoding, program, dictionaries](p15, p16, p17, p18, p19, p20);
    check L109() else D32();
  D22():
    deopt 85 [defaults6];
  D32():
    deopt 143 [r78];
  L19():
    goto L20();
  L20():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L70():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L67(dx4);
  L76():
    defaults7 = force? defaults6;
    checkMissing(defaults7);
    c10 = `is.object`(defaults7);
    if c10 then L78() else L79(defaults7);
  L81():
    d3 = ld d;
    check L82() else D23();
  L109():
    popenv;
    return r78;
  D23():
    deopt 91 [d3];
  L21(r53):
    r55 = `!`(r53);
    c15 = `as.logical`(r55);
    if c15 then L91() else L22();
  L77(dx7):
    st d = dx7;
    c11 = `==`(dx7, NULL);
    goto L18(c11);
  L78():
    dr6 = tryDispatchBuiltin.1("$", defaults7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79(dr6);
  L79(defaults9):
    r50 = `$`(defaults9, <sym control>);
    goto L77(r50);
  L82():
    d4 = force? d3;
    checkMissing(d4);
    st control = d4;
    goto L20();
  L84():
    defaults10 = ld defaults;
    check L86() else D24();
  L85():
    r52 = dyn base6(<lang `<-`(d, `$`(defaults, program))>);
    goto L21(r52);
  D24():
    deopt 97 [defaults10];
  L22():
    goto L23();
  L23():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  L80():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L77(dx6);
  L86():
    defaults11 = force? defaults10;
    checkMissing(defaults11);
    c13 = `is.object`(defaults11);
    if c13 then L88() else L89(defaults11);
  L91():
    d6 = ld d;
    check L92() else D25();
  D25():
    deopt 103 [d6];
  L24(r57):
    r59 = `!`(r57);
    c18 = `as.logical`(r59);
    if c18 then L101() else L25();
  L87(dx9):
    st d = dx9;
    c14 = `==`(dx9, NULL);
    goto L21(c14);
  L88():
    dr8 = tryDispatchBuiltin.1("$", defaults11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(dr8);
  L89(defaults13):
    r54 = `$`(defaults13, <sym program>);
    goto L87(r54);
  L92():
    d7 = force? d6;
    checkMissing(d7);
    st program = d7;
    goto L23();
  L94():
    defaults14 = ld defaults;
    check L96() else D26();
  L95():
    r56 = dyn base7(<lang `<-`(d, `$`(defaults, dictionaries))>);
    goto L24(r56);
  D26():
    deopt 109 [defaults14];
  L25():
    goto L26(NULL);
  L26(r65):
    goto L27();
  L90():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L87(dx8);
  L96():
    defaults15 = force? defaults14;
    checkMissing(defaults15);
    c16 = `is.object`(defaults15);
    if c16 then L98() else L99(defaults15);
  L101():
    aspell_find_dictionaries = ldf aspell_find_dictionaries;
    check L102() else D27();
  D27():
    deopt 116 [];
  L97(dx11):
    st d = dx11;
    c17 = `==`(dx11, NULL);
    goto L24(c17);
  L98():
    dr10 = tryDispatchBuiltin.1("$", defaults15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L100() else L99(dr10);
  L99(defaults17):
    r58 = `$`(defaults17, <sym dictionaries>);
    goto L97(r58);
  L102():
    p11 = prom<V +>{
      d9 = ld d;
      d10 = force? d9;
      checkMissing(d10);
      return d10;
    };
    p13 = prom<V +>{
      file_path1 = ldf `file.path`;
      p12 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r62 = dyn file_path1(p12, ".aspell");
      return r62;
    };
    r64 = dyn aspell_find_dictionaries(p11, p13);
    check L103() else D28();
  D28():
    deopt 119 [r64];
  L100():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L97(dx10);
  L103():
    st dictionaries = r64;
    goto L26(r64);
  }
}