fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3796144728;
    st aspell_package_C_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3796144728(dir, ignore, control, program, dictionaries) {
  (reg dir:*, reg ignore:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p1:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character1:cls, reg r6:V, reg p2:p(V +), reg __:cls, reg r8:V, reg r9:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r11:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg paste:cls, reg basename:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg files:*, reg files1:V, reg c:L, reg files3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_test:cls, reg files4:*, reg files5:V, reg p8:p(V +), reg r20:V, reg __1:cls, reg r21:V, reg ___:cls, reg r22:V, reg r23:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg meta:*, reg meta1:V, reg c1:L, reg meta3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r28:V, reg is_na:cls, reg r29:V, reg c2:L, reg _aspell_package_defaults:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg encoding:*, reg encoding1:V, reg p11:p(V +), reg r33:V, reg c3:L, reg r35:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r36:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg r38:V, reg defaults:*, reg defaults1:V, reg c4:V, reg r39:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg defaults2:*, reg defaults3:V, reg c6:L, reg defaults5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r42:V, reg c7:V, reg r43:V, reg c8:L, reg d:*, reg d1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg defaults6:*, reg defaults7:V, reg c9:L, reg defaults9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r46:V, reg c10:V, reg r47:V, reg c11:L, reg d3:*, reg d4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg defaults10:*, reg defaults11:V, reg c12:L, reg defaults13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r50:V, reg c13:V, reg r51:V, reg c14:L, reg d6:*, reg d7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg defaults14:*, reg defaults15:V, reg c15:L, reg defaults17:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r54:V, reg c16:V, reg r55:V, reg c17:L, reg aspell_find_dictionaries:cls, reg d9:*, reg d10:V, reg p12:p(V +), reg file_path1:cls, reg dir11:*, reg dir12:V, reg p13:p(V +), reg r58:V, reg p14:p(V +), reg r60:V, reg r61:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p15:p(V +), reg r64:V, reg aspell:cls, reg files6:*, reg files7:V, reg p16:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg ignore1:*, reg ignore2:V, reg list1:cls, reg r68:V, reg p17:p(V +), reg control1:*, reg control2:V, reg p18:p(V +), reg encoding2:*, reg encoding3:V, reg p19:p(V +), reg program3:*, reg program4:V, reg p20:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p21:p(V +), reg r74:V |
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
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    r8 = dyn __("tools", "file_path_as_absolute");
    check L28() else D1();
  D1():
    deopt 4 [r8];
  L28():
    checkFun.0(r8);
    r9 = r8 as cls;
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r11 = dyn r9(p3);
    check L29() else D2();
  D2():
    deopt 7 [r11];
  L29():
    st dir = r11;
    file_path = ldf `file.path`;
    check L30() else D3();
  D3():
    deopt 10 [];
  L30():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        basename = ldf basename;
        p5 = prom<V +>{
          dir5 = ld dir;
          dir6 = force? dir5;
          checkMissing(dir6);
          return dir6;
        };
        r14 = dyn basename(p5);
        return r14;
      };
      r16 = dyn paste[, , collapse](p6, "pot", ".");
      return r16;
    };
    r18 = dyn file_path(p4, "po", p7);
    check L31() else D4();
  D4():
    deopt 14 [r18];
  L31():
    st files = r18;
    files = ld files;
    check L32() else D5();
  D5():
    deopt 16 [files];
  L32():
    files1 = force? files;
    checkMissing(files1);
    c = `is.object`(files1);
    if c then L33() else L34(files1);
  L7(dx1):
    st files = dx1;
    ___ = ldf `:::`;
    check L38() else D8();
  L33():
    dr = tryDispatchBuiltin.1("[", files1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(files3):
    file_test = ldf file_test;
    check L36() else D6();
  D6():
    deopt 19 [files3];
  D8():
    deopt 26 [];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L36():
    p8 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r20 = dyn file_test("-f", p8);
    check L37() else D7();
  L38():
    r22 = dyn ___("tools", ".get_package_metadata");
    check L39() else D9();
  D7():
    deopt 22 [files3, r20];
  D9():
    deopt 29 [r22];
  L37():
    __1 = ldf `[` in base;
    r21 = dyn __1(files3, r20);
    goto L7(r21);
  L39():
    checkFun.0(r22);
    r23 = r22 as cls;
    p9 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r25 = dyn r23[, installed](p9, FALSE);
    check L40() else D10();
  D10():
    deopt 34 [r25];
  L40():
    st meta = r25;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L8(r27):
    c2 = `as.logical`(r27);
    if c2 then L48() else L10();
  L41():
    meta = ld meta;
    check L43() else D11();
  L42():
    r26 = dyn base1(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L8(r26);
  D11():
    deopt 38 [meta];
  L10():
    goto L11();
  L11():
    _aspell_package_defaults = ldf `.aspell_package_defaults`;
    check L50() else D13();
  L43():
    meta1 = force? meta;
    checkMissing(meta1);
    c1 = `is.object`(meta1);
    if c1 then L44() else L45(meta1);
  L48():
    st encoding = "unknown";
    goto L11();
  D13():
    deopt 52 [];
  L9(dx3):
    st encoding = dx3;
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(dx3);
    check L47() else D12();
  L44():
    dr2 = tryDispatchBuiltin.1("[", meta1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(dr2);
  L45(meta3):
    __2 = ldf `[` in base;
    r28 = dyn __2(meta3, "Encoding");
    goto L9(r28);
  L50():
    p10 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p11 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r33 = dyn _aspell_package_defaults(p10, p11);
    check L51() else D14();
  D12():
    deopt 45 [r29];
  D14():
    deopt 55 [r33];
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L47():
    goto L8(r29);
  L51():
    c3 = `is.object`(r33);
    if c3 then L53() else L54(r33);
  L52(dx5):
    st defaults = dx5;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L53():
    dr4 = tryDispatchBuiltin.1("$", r33);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(dr4);
  L54(r35):
    r36 = `$`(r35, <sym C_files>);
    goto L52(r36);
  L12(r38):
    r39 = `!`(r38);
    c5 = `as.logical`(r39);
    if c5 then L59() else L13();
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L52(dx4);
  L56():
    defaults = ld defaults;
    check L58() else D15();
  L57():
    r37 = dyn base2(<sym defaults>);
    goto L12(r37);
  D15():
    deopt 59 [defaults];
  L13():
    goto L26();
  L26():
    aspell_find_program = ldf aspell_find_program;
    check L102() else D25();
  L58():
    defaults1 = force? defaults;
    checkMissing(defaults1);
    c4 = `==`(defaults1, NULL);
    goto L12(c4);
  L59():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  D25():
    deopt 117 [];
  L14(r41):
    r43 = `!`(r41);
    c8 = `as.logical`(r43);
    if c8 then L67() else L15();
  L60():
    defaults2 = ld defaults;
    check L62() else D16();
  L61():
    r40 = dyn base3(<lang `<-`(d, `$`(defaults, ignore))>);
    goto L14(r40);
  L102():
    p15 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r64 = dyn aspell_find_program(p15);
    check L103() else D26();
  D16():
    deopt 64 [defaults2];
  D26():
    deopt 119 [r64];
  L15():
    goto L16();
  L16():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L62():
    defaults3 = force? defaults2;
    checkMissing(defaults3);
    c6 = `is.object`(defaults3);
    if c6 then L64() else L65(defaults3);
  L67():
    d = ld d;
    check L68() else D17();
  L103():
    st program = r64;
    aspell = ldf aspell;
    check L104() else D27();
  D17():
    deopt 70 [d];
  D27():
    deopt 122 [];
  L17(r45):
    r47 = `!`(r45);
    c11 = `as.logical`(r47);
    if c11 then L77() else L18();
  L63(dx7):
    st d = dx7;
    c7 = `==`(dx7, NULL);
    goto L14(c7);
  L64():
    dr6 = tryDispatchBuiltin.1("$", defaults3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(dr6);
  L65(defaults5):
    r42 = `$`(defaults5, <sym ignore>);
    goto L63(r42);
  L68():
    d1 = force? d;
    checkMissing(d1);
    st ignore = d1;
    goto L16();
  L70():
    defaults6 = ld defaults;
    check L72() else D18();
  L71():
    r44 = dyn base4(<lang `<-`(d, `$`(defaults, control))>);
    goto L17(r44);
  L104():
    p16 = prom<V +>{
      files6 = ld files;
      files7 = force? files6;
      checkMissing(files7);
      return files7;
    };
    p17 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      list1 = ldf list in base;
      r68 = dyn list1("pot", ignore2);
      goto L0(r68);
    L2():
      r66 = dyn base7[, ignore]("pot", <sym ignore>);
      goto L0(r66);
    };
    p18 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    p19 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    p20 = prom<V +>{
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      return program4;
    };
    p21 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r74 = dyn aspell[, filter, control, encoding, program, dictionaries](p16, p17, p18, p19, p20, p21);
    check L105() else D28();
  D18():
    deopt 76 [defaults6];
  D28():
    deopt 134 [r74];
  L18():
    goto L19();
  L19():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  L66():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L63(dx6);
  L72():
    defaults7 = force? defaults6;
    checkMissing(defaults7);
    c9 = `is.object`(defaults7);
    if c9 then L74() else L75(defaults7);
  L77():
    d3 = ld d;
    check L78() else D19();
  L105():
    popenv;
    return r74;
  D19():
    deopt 82 [d3];
  L20(r49):
    r51 = `!`(r49);
    c14 = `as.logical`(r51);
    if c14 then L87() else L21();
  L73(dx9):
    st d = dx9;
    c10 = `==`(dx9, NULL);
    goto L17(c10);
  L74():
    dr8 = tryDispatchBuiltin.1("$", defaults7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(dr8);
  L75(defaults9):
    r46 = `$`(defaults9, <sym control>);
    goto L73(r46);
  L78():
    d4 = force? d3;
    checkMissing(d4);
    st control = d4;
    goto L19();
  L80():
    defaults10 = ld defaults;
    check L82() else D20();
  L81():
    r48 = dyn base5(<lang `<-`(d, `$`(defaults, program))>);
    goto L20(r48);
  D20():
    deopt 88 [defaults10];
  L21():
    goto L22();
  L22():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L73(dx8);
  L82():
    defaults11 = force? defaults10;
    checkMissing(defaults11);
    c12 = `is.object`(defaults11);
    if c12 then L84() else L85(defaults11);
  L87():
    d6 = ld d;
    check L88() else D21();
  D21():
    deopt 94 [d6];
  L23(r53):
    r55 = `!`(r53);
    c17 = `as.logical`(r55);
    if c17 then L97() else L24();
  L83(dx11):
    st d = dx11;
    c13 = `==`(dx11, NULL);
    goto L20(c13);
  L84():
    dr10 = tryDispatchBuiltin.1("$", defaults11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L86() else L85(dr10);
  L85(defaults13):
    r50 = `$`(defaults13, <sym program>);
    goto L83(r50);
  L88():
    d7 = force? d6;
    checkMissing(d7);
    st program = d7;
    goto L22();
  L90():
    defaults14 = ld defaults;
    check L92() else D22();
  L91():
    r52 = dyn base6(<lang `<-`(d, `$`(defaults, dictionaries))>);
    goto L23(r52);
  D22():
    deopt 100 [defaults14];
  L24():
    goto L25(NULL);
  L25(r61):
    goto L26();
  L86():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L83(dx10);
  L92():
    defaults15 = force? defaults14;
    checkMissing(defaults15);
    c15 = `is.object`(defaults15);
    if c15 then L94() else L95(defaults15);
  L97():
    aspell_find_dictionaries = ldf aspell_find_dictionaries;
    check L98() else D23();
  D23():
    deopt 107 [];
  L93(dx13):
    st d = dx13;
    c16 = `==`(dx13, NULL);
    goto L23(c16);
  L94():
    dr12 = tryDispatchBuiltin.1("$", defaults15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L96() else L95(dr12);
  L95(defaults17):
    r54 = `$`(defaults17, <sym dictionaries>);
    goto L93(r54);
  L98():
    p12 = prom<V +>{
      d9 = ld d;
      d10 = force? d9;
      checkMissing(d10);
      return d10;
    };
    p14 = prom<V +>{
      file_path1 = ldf `file.path`;
      p13 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r58 = dyn file_path1(p13, ".aspell");
      return r58;
    };
    r60 = dyn aspell_find_dictionaries(p12, p14);
    check L99() else D24();
  D24():
    deopt 110 [r60];
  L96():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L93(dx12);
  L99():
    st dictionaries = r60;
    goto L25(r60);
  }
}