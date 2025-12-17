fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2557411396;
    st aspell_package_Rd_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2557411396(dir, drop, control, program, dictionaries) {
  (reg dir:*, reg drop:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg p1:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character:cls, reg r8:V, reg p2:p(V +), reg normalizePath:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r11:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r13:V, reg dir_exists:cls, reg subdir:*, reg subdir1:V, reg p5:p(V +), reg r15:V, reg c1:L, reg __:cls, reg r16:V, reg r17:cls, reg subdir2:*, reg subdir3:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg c2:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg r24:V, reg character1:cls, reg r25:V, reg ___:cls, reg r26:V, reg r27:cls, reg dir5:*, reg dir6:V, reg p8:p(V +), reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg meta:*, reg meta1:V, reg c3:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r32:V, reg is_na:cls, reg r33:V, reg c4:L, reg _aspell_package_defaults:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg encoding:*, reg encoding1:V, reg p10:p(V +), reg r37:V, reg c5:L, reg r39:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg defaults:*, reg defaults1:V, reg c6:V, reg r43:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg defaults2:*, reg defaults3:V, reg c8:L, reg defaults5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r46:V, reg c9:V, reg r47:V, reg c10:L, reg d:*, reg d1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg defaults6:*, reg defaults7:V, reg c11:L, reg defaults9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r50:V, reg c12:V, reg r51:V, reg c13:L, reg d3:*, reg d4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg defaults10:*, reg defaults11:V, reg c14:L, reg defaults13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r54:V, reg c15:V, reg r55:V, reg c16:L, reg d6:*, reg d7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg defaults14:*, reg defaults15:V, reg c17:L, reg defaults17:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r58:V, reg c18:V, reg r59:V, reg c19:L, reg aspell_find_dictionaries:cls, reg d9:*, reg d10:V, reg p11:p(V +), reg file_path1:cls, reg dir9:*, reg dir10:V, reg p12:p(V +), reg r62:V, reg p13:p(V +), reg r64:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg r67:V, reg defaults18:*, reg defaults19:V, reg c20:L, reg defaults21:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r68:V, reg c21:V, reg r69:V, reg c22:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg control1:*, reg control2:V, reg sprintf:cls, reg shQuote:cls, reg file_path2:cls, reg dir11:*, reg dir12:V, reg p14:p(V +), reg d11:*, reg d12:V, reg p15:p(V +), reg r74:V, reg p16:p(V +), reg r76:V, reg p17:p(V +), reg r78:V, reg c23:cls, reg r79:V, reg r80:V, reg __2:cls, reg r82:V, reg r83:cls, reg dir13:*, reg dir14:V, reg p18:p(V +), reg file_path3:cls, reg R_home:cls, reg r85:V, reg p19:p(V +), reg r87:V, reg p20:p(V +), reg r89:V, reg aspell:cls, reg files:*, reg files1:V, reg p21:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg r92:V, reg drop1:*, reg drop2:V, reg macros:*, reg macros1:V, reg list1:cls, reg r93:V, reg p22:p(V +), reg control3:*, reg control4:V, reg p23:p(V +), reg encoding2:*, reg encoding3:V, reg p24:p(V +), reg program1:*, reg program2:V, reg p25:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p26:p(V +), reg r99:V |
    mkenv;
    st dir = dir;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0() else L1(drop);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("\\abbr", "\\acronym", "\\author", "\\references");
      goto L0(r2);
    L2():
      r = dyn base("\\abbr", "\\acronym", "\\author", "\\references");
      goto L0(r);
    };
    goto L1(p);
  L1(drop_orDefault):
    st drop = drop_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L2() else L3(control);
  L2():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      list = ldf list in base;
      r6 = dyn list();
      goto L0(r6);
    L2():
      r4 = dyn base1();
      goto L0(r4);
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
      character = ldf character;
      r8 = dyn character();
      return r8;
    };
    goto L6(p2);
  L6(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    normalizePath = ldf normalizePath;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r11 = dyn normalizePath(p3, "/");
    check L33() else D1();
  D1():
    deopt 4 [r11];
  L33():
    st dir = r11;
    file_path = ldf `file.path`;
    check L34() else D2();
  D2():
    deopt 7 [];
  L34():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r13 = dyn file_path(p4, "man");
    check L35() else D3();
  D3():
    deopt 10 [r13];
  L35():
    st subdir = r13;
    dir_exists = ldf `dir.exists`;
    check L36() else D4();
  D4():
    deopt 13 [];
  L36():
    p5 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r15 = dyn dir_exists(p5);
    check L37() else D5();
  D5():
    deopt 15 [r15];
  L37():
    c1 = `as.logical`(r15);
    if c1 then L38() else L7();
  L7():
    character1 = ldf character;
    check L43() else D9();
  L8(r24):
    st files = r24;
    ___ = ldf `:::`;
    check L45() else D11();
  L38():
    __ = ldf `::`;
    check L39() else D6();
  D6():
    deopt 17 [];
  D9():
    deopt 28 [];
  D11():
    deopt 32 [];
  L39():
    r16 = dyn __("tools", "list_files_with_type");
    check L40() else D7();
  L43():
    r25 = dyn character1();
    check L44() else D10();
  L45():
    r26 = dyn ___("tools", ".get_package_metadata");
    check L46() else D12();
  D7():
    deopt 20 [r16];
  D10():
    deopt 29 [r25];
  D12():
    deopt 35 [r26];
  L40():
    checkFun.0(r16);
    r17 = r16 as cls;
    p6 = prom<V +>{
      subdir2 = ld subdir;
      subdir3 = force? subdir2;
      checkMissing(subdir3);
      return subdir3;
    };
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c2 = ldf c in base;
      r21 = dyn c2("unix", "windows");
      goto L0(r21);
    L2():
      r19 = dyn base2("unix", "windows");
      goto L0(r19);
    };
    r23 = dyn r17[, , OS_subdirs](p6, "docs", p7);
    check L41() else D8();
  L44():
    goto L8(r25);
  L46():
    checkFun.0(r26);
    r27 = r26 as cls;
    p8 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r29 = dyn r27[, installed](p8, FALSE);
    check L47() else D13();
  D8():
    deopt 26 [r23];
  D13():
    deopt 40 [r29];
  L41():
    goto L8(r23);
  L47():
    st meta = r29;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L9(r31):
    c4 = `as.logical`(r31);
    if c4 then L55() else L11();
  L48():
    meta = ld meta;
    check L50() else D14();
  L49():
    r30 = dyn base3(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L9(r30);
  D14():
    deopt 44 [meta];
  L11():
    goto L12();
  L12():
    _aspell_package_defaults = ldf `.aspell_package_defaults`;
    check L57() else D16();
  L50():
    meta1 = force? meta;
    checkMissing(meta1);
    c3 = `is.object`(meta1);
    if c3 then L51() else L52(meta1);
  L55():
    st encoding = "unknown";
    goto L12();
  D16():
    deopt 58 [];
  L10(dx1):
    st encoding = dx1;
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(dx1);
    check L54() else D15();
  L51():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(meta3):
    __1 = ldf `[` in base;
    r32 = dyn __1(meta3, "Encoding");
    goto L10(r32);
  L57():
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
    check L58() else D17();
  D15():
    deopt 51 [r33];
  D17():
    deopt 61 [r37];
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L54():
    goto L9(r33);
  L58():
    c5 = `is.object`(r37);
    if c5 then L60() else L61(r37);
  L59(dx3):
    st defaults = dx3;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L60():
    dr2 = tryDispatchBuiltin.1("$", r37);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L62() else L61(dr2);
  L61(r39):
    r40 = `$`(r39, <sym Rd_files>);
    goto L59(r40);
  L13(r42):
    r43 = `!`(r42);
    c7 = `as.logical`(r43);
    if c7 then L66() else L14();
  L62():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L59(dx2);
  L63():
    defaults = ld defaults;
    check L65() else D18();
  L64():
    r41 = dyn base4(<sym defaults>);
    goto L13(r41);
  D18():
    deopt 65 [defaults];
  L14():
    goto L31();
  L31():
    __2 = ldf `::`;
    check L124() else D33();
  L65():
    defaults1 = force? defaults;
    checkMissing(defaults1);
    c6 = `==`(defaults1, NULL);
    goto L13(c6);
  L66():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  D33():
    deopt 144 [];
  L15(r45):
    r47 = `!`(r45);
    c10 = `as.logical`(r47);
    if c10 then L74() else L16();
  L67():
    defaults2 = ld defaults;
    check L69() else D19();
  L68():
    r44 = dyn base5(<lang `<-`(d, `$`(defaults, drop))>);
    goto L15(r44);
  L124():
    r82 = dyn __2("tools", "loadPkgRdMacros");
    check L125() else D34();
  D19():
    deopt 70 [defaults2];
  D34():
    deopt 147 [r82];
  L16():
    goto L17();
  L17():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L69():
    defaults3 = force? defaults2;
    checkMissing(defaults3);
    c8 = `is.object`(defaults3);
    if c8 then L71() else L72(defaults3);
  L74():
    d = ld d;
    check L75() else D20();
  L125():
    checkFun.0(r82);
    r83 = r82 as cls;
    p18 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    p20 = prom<V +>{
      file_path3 = ldf `file.path`;
      p19 = prom<V +>{
        R_home = ldf `R.home`;
        r85 = dyn R_home("share");
        return r85;
      };
      r87 = dyn file_path3(p19, "Rd", "macros", "system.Rd");
      return r87;
    };
    r89 = dyn r83[, macros](p18, p20);
    check L126() else D35();
  D20():
    deopt 76 [d];
  D35():
    deopt 152 [r89];
  L18(r49):
    r51 = `!`(r49);
    c13 = `as.logical`(r51);
    if c13 then L84() else L19();
  L70(dx5):
    st d = dx5;
    c9 = `==`(dx5, NULL);
    goto L15(c9);
  L71():
    dr4 = tryDispatchBuiltin.1("$", defaults3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L73() else L72(dr4);
  L72(defaults5):
    r46 = `$`(defaults5, <sym drop>);
    goto L70(r46);
  L75():
    d1 = force? d;
    checkMissing(d1);
    st drop = d1;
    goto L17();
  L77():
    defaults6 = ld defaults;
    check L79() else D21();
  L78():
    r48 = dyn base6(<lang `<-`(d, `$`(defaults, control))>);
    goto L18(r48);
  L126():
    st macros = r89;
    aspell = ldf aspell;
    check L127() else D36();
  D21():
    deopt 82 [defaults6];
  D36():
    deopt 155 [];
  L19():
    goto L20();
  L20():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L73():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L70(dx4);
  L79():
    defaults7 = force? defaults6;
    checkMissing(defaults7);
    c11 = `is.object`(defaults7);
    if c11 then L81() else L82(defaults7);
  L84():
    d3 = ld d;
    check L85() else D22();
  L127():
    p21 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p22 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      drop1 = ld drop;
      drop2 = force? drop1;
      checkMissing(drop2);
      macros = ld macros;
      macros1 = force? macros;
      checkMissing(macros1);
      list1 = ldf list in base;
      r93 = dyn list1("Rd", drop2, macros1);
      goto L0(r93);
    L2():
      r91 = dyn base11[, drop, macros]("Rd", <sym drop>, <sym macros>);
      goto L0(r91);
    };
    p23 = prom<V +>{
      control3 = ld control;
      control4 = force? control3;
      checkMissing(control4);
      return control4;
    };
    p24 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    p25 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    p26 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r99 = dyn aspell[, filter, control, encoding, program, dictionaries](p21, p22, p23, p24, p25, p26);
    check L128() else D37();
  D22():
    deopt 88 [d3];
  D37():
    deopt 167 [r99];
  L21(r53):
    r55 = `!`(r53);
    c16 = `as.logical`(r55);
    if c16 then L94() else L22();
  L80(dx7):
    st d = dx7;
    c12 = `==`(dx7, NULL);
    goto L18(c12);
  L81():
    dr6 = tryDispatchBuiltin.1("$", defaults7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(dr6);
  L82(defaults9):
    r50 = `$`(defaults9, <sym control>);
    goto L80(r50);
  L85():
    d4 = force? d3;
    checkMissing(d4);
    st control = d4;
    goto L20();
  L87():
    defaults10 = ld defaults;
    check L89() else D23();
  L88():
    r52 = dyn base7(<lang `<-`(d, `$`(defaults, program))>);
    goto L21(r52);
  L128():
    popenv;
    return r99;
  D23():
    deopt 94 [defaults10];
  L22():
    goto L23();
  L23():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  L83():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L80(dx6);
  L89():
    defaults11 = force? defaults10;
    checkMissing(defaults11);
    c14 = `is.object`(defaults11);
    if c14 then L91() else L92(defaults11);
  L94():
    d6 = ld d;
    check L95() else D24();
  D24():
    deopt 100 [d6];
  L24(r57):
    r59 = `!`(r57);
    c19 = `as.logical`(r59);
    if c19 then L104() else L25();
  L90(dx9):
    st d = dx9;
    c15 = `==`(dx9, NULL);
    goto L21(c15);
  L91():
    dr8 = tryDispatchBuiltin.1("$", defaults11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(dr8);
  L92(defaults13):
    r54 = `$`(defaults13, <sym program>);
    goto L90(r54);
  L95():
    d7 = force? d6;
    checkMissing(d7);
    st program = d7;
    goto L23();
  L97():
    defaults14 = ld defaults;
    check L99() else D25();
  L98():
    r56 = dyn base8(<lang `<-`(d, `$`(defaults, dictionaries))>);
    goto L24(r56);
  D25():
    deopt 106 [defaults14];
  L25():
    goto L26();
  L26():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  L93():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L90(dx8);
  L99():
    defaults15 = force? defaults14;
    checkMissing(defaults15);
    c17 = `is.object`(defaults15);
    if c17 then L101() else L102(defaults15);
  L104():
    aspell_find_dictionaries = ldf aspell_find_dictionaries;
    check L105() else D26();
  D26():
    deopt 113 [];
  L27(r67):
    r69 = `!`(r67);
    c22 = `as.logical`(r69);
    if c22 then L115() else L28();
  L100(dx11):
    st d = dx11;
    c18 = `==`(dx11, NULL);
    goto L24(c18);
  L101():
    dr10 = tryDispatchBuiltin.1("$", defaults15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L103() else L102(dr10);
  L102(defaults17):
    r58 = `$`(defaults17, <sym dictionaries>);
    goto L100(r58);
  L105():
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
    check L106() else D27();
  L108():
    defaults18 = ld defaults;
    check L110() else D28();
  L109():
    r66 = dyn base9(<lang `<-`(d, `$`(defaults, personal))>);
    goto L27(r66);
  D27():
    deopt 116 [r64];
  D28():
    deopt 121 [defaults18];
  L28():
    goto L30(NULL);
  L30(r80):
    goto L31();
  L103():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L100(dx10);
  L106():
    st dictionaries = r64;
    goto L26();
  L110():
    defaults19 = force? defaults18;
    checkMissing(defaults19);
    c20 = `is.object`(defaults19);
    if c20 then L112() else L113(defaults19);
  L115():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L116() else L117();
  L29(r71):
    st control = r71;
    goto L30(r71);
  L111(dx13):
    st d = dx13;
    c21 = `==`(dx13, NULL);
    goto L27(c21);
  L112():
    dr12 = tryDispatchBuiltin.1("$", defaults19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L114() else L113(dr12);
  L113(defaults21):
    r68 = `$`(defaults21, <sym personal>);
    goto L111(r68);
  L116():
    control1 = ld control;
    check L118() else D29();
  L117():
    r70 = dyn base10(<sym control>, <lang sprintf("-p %s", shQuote(file.path(dir, ".aspell", d)))>);
    goto L29(r70);
  D29():
    deopt 129 [control1];
  L114():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L111(dx12);
  L118():
    control2 = force? control1;
    checkMissing(control2);
    sprintf = ldf sprintf;
    check L119() else D30();
  D30():
    deopt 132 [];
  L119():
    p17 = prom<V +>{
      shQuote = ldf shQuote;
      p16 = prom<V +>{
        file_path2 = ldf `file.path`;
        p14 = prom<V +>{
          dir11 = ld dir;
          dir12 = force? dir11;
          checkMissing(dir12);
          return dir12;
        };
        p15 = prom<V +>{
          d11 = ld d;
          d12 = force? d11;
          checkMissing(d12);
          return d12;
        };
        r74 = dyn file_path2(p14, ".aspell", p15);
        return r74;
      };
      r76 = dyn shQuote(p16);
      return r76;
    };
    r78 = dyn sprintf("-p %s", p17);
    check L120() else D31();
  D31():
    deopt 135 [r78];
  L120():
    c23 = ldf c in base;
    r79 = dyn c23(control2, r78);
    check L121() else D32();
  D32():
    deopt 137 [r79];
  L121():
    goto L29(r79);
  }
}