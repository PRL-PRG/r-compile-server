fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner104994629;
    st aspell_package_vignettes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner104994629(dir, control, program, dictionaries) {
  (reg dir:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), reg __:cls, reg r6:V, reg r7:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r9:V, reg __1:cls, reg r10:V, reg r11:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r13:V, reg vinfo:*, reg vinfo1:V, reg c:L, reg vinfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg files:*, reg files1:V, reg length:cls, reg r17:V, reg r18:V, reg c1:L, reg aspell:cls, reg character1:cls, reg r19:V, reg p4:p(V +), reg r21:V, reg ___:cls, reg r24:V, reg r25:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg meta:*, reg meta1:V, reg c2:L, reg meta3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r30:V, reg is_na:cls, reg r31:V, reg c3:L, reg _aspell_package_defaults:cls, reg dir7:*, reg dir8:V, reg p6:p(V +), reg encoding:*, reg encoding1:V, reg p7:p(V +), reg r35:V, reg c4:L, reg r37:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg defaults:*, reg defaults1:V, reg c5:V, reg r41:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg defaults2:*, reg defaults3:V, reg c7:L, reg defaults5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r44:V, reg c8:V, reg r45:V, reg c9:L, reg d:*, reg d1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg defaults6:*, reg defaults7:V, reg c10:L, reg defaults9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r48:V, reg c11:V, reg r49:V, reg c12:L, reg d3:*, reg d4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg defaults10:*, reg defaults11:V, reg c13:L, reg defaults13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r52:V, reg c14:V, reg r53:V, reg c15:L, reg aspell_find_dictionaries:cls, reg d6:*, reg d7:V, reg p8:p(V +), reg file_path:cls, reg dir9:*, reg dir10:V, reg p9:p(V +), reg r56:V, reg p10:p(V +), reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg defaults14:*, reg defaults15:V, reg c16:L, reg defaults17:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r62:V, reg c17:V, reg r63:V, reg c18:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg control1:*, reg control2:V, reg sprintf:cls, reg shQuote:cls, reg file_path1:cls, reg dir11:*, reg dir12:V, reg p11:p(V +), reg d8:*, reg d9:V, reg p12:p(V +), reg r68:V, reg p13:p(V +), reg r70:V, reg p14:p(V +), reg r72:V, reg c19:cls, reg r73:V, reg r74:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p15:p(V +), reg r77:V, reg split:cls, reg files2:*, reg files3:V, reg p16:p(V +), reg vinfo4:*, reg vinfo5:V, reg c20:L, reg vinfo7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r79:V, reg p17:p(V +), reg r81:V, reg split1:cls, reg vinfo8:*, reg vinfo9:V, reg c21:L, reg vinfo11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r82:V, reg p18:p(V +), reg vinfo12:*, reg vinfo13:V, reg c22:L, reg vinfo15:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r84:V, reg p19:p(V +), reg r86:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p20:p(V +), reg Map:cls, reg r88:cls, reg p21:p(V +), reg fgroups:*, reg fgroups1:V, reg p22:p(V +), reg egroups:*, reg egroups1:V, reg p23:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r92:V, reg r93:V, reg fgroups2:*, reg fgroups3:V, reg names:cls, reg r94:V, reg p24:p(V +), reg r96:V, reg p25:p(V +), reg r98:V |
    mkenv;
    st dir = dir;
    control_isMissing = missing.0(control);
    if control_isMissing then L0() else L1(control);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(control_orDefault):
    st control = control_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L2(NULL) else L2(program);
  L2(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L3() else L4(dictionaries);
  L3():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    goto L4(p1);
  L4(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    __ = ldf `::`;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    r6 = dyn __("tools", "file_path_as_absolute");
    check L29() else D1();
  D1():
    deopt 4 [r6];
  L29():
    checkFun.0(r6);
    r7 = r6 as cls;
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r9 = dyn r7(p2);
    check L30() else D2();
  D2():
    deopt 7 [r9];
  L30():
    st dir = r9;
    __1 = ldf `::`;
    check L31() else D3();
  D3():
    deopt 10 [];
  L31():
    r10 = dyn __1("tools", "pkgVignettes");
    check L32() else D4();
  D4():
    deopt 13 [r10];
  L32():
    checkFun.0(r10);
    r11 = r10 as cls;
    p3 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r13 = dyn r11[dir](p3);
    check L33() else D5();
  D5():
    deopt 17 [r13];
  L33():
    st vinfo = r13;
    vinfo = ld vinfo;
    check L34() else D6();
  D6():
    deopt 19 [vinfo];
  L34():
    vinfo1 = force? vinfo;
    checkMissing(vinfo1);
    c = `is.object`(vinfo1);
    if c then L36() else L37(vinfo1);
  L35(dx1):
    st files = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L36():
    dr = tryDispatchBuiltin.1("$", vinfo1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(vinfo3):
    r14 = `$`(vinfo3, <sym docs>);
    goto L35(r14);
  L5(r16):
    r18 = `!`(r16);
    c1 = `as.logical`(r18);
    if c1 then L43() else L6();
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L35(dx);
  L39():
    files = ld files;
    check L41() else D7();
  L40():
    r15 = dyn base1(<sym files>);
    goto L5(r15);
  D7():
    deopt 25 [files];
  L6():
    ___ = ldf `:::`;
    check L48() else D11();
  L41():
    files1 = force? files;
    checkMissing(files1);
    length = ldf length in base;
    r17 = dyn length(files1);
    check L42() else D8();
  L43():
    aspell = ldf aspell;
    check L44() else D9();
  D8():
    deopt 28 [r17];
  D9():
    deopt 31 [];
  D11():
    deopt 38 [];
  L42():
    goto L5(r17);
  L44():
    p4 = prom<V +>{
      character1 = ldf character;
      r19 = dyn character1();
      return r19;
    };
    r21 = dyn aspell(p4);
    check L45() else D10();
  L48():
    r24 = dyn ___("tools", ".get_package_metadata");
    check L49() else D12();
  D10():
    deopt 33 [r21];
  D12():
    deopt 41 [r24];
  L45():
    popenv;
    return r21;
  L49():
    checkFun.0(r24);
    r25 = r24 as cls;
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r27 = dyn r25[, installed](p5, FALSE);
    check L50() else D13();
  D13():
    deopt 46 [r27];
  L50():
    st meta = r27;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L8(r29):
    c3 = `as.logical`(r29);
    if c3 then L58() else L10();
  L51():
    meta = ld meta;
    check L53() else D14();
  L52():
    r28 = dyn base2(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L8(r28);
  D14():
    deopt 50 [meta];
  L10():
    goto L11();
  L11():
    _aspell_package_defaults = ldf `.aspell_package_defaults`;
    check L60() else D16();
  L53():
    meta1 = force? meta;
    checkMissing(meta1);
    c2 = `is.object`(meta1);
    if c2 then L54() else L55(meta1);
  L58():
    st encoding = "unknown";
    goto L11();
  D16():
    deopt 64 [];
  L9(dx3):
    st encoding = dx3;
    is_na = ldf `is.na` in base;
    r31 = dyn is_na(dx3);
    check L57() else D15();
  L54():
    dr2 = tryDispatchBuiltin.1("[", meta1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(dr2);
  L55(meta3):
    __2 = ldf `[` in base;
    r30 = dyn __2(meta3, "Encoding");
    goto L9(r30);
  L60():
    p6 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p7 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r35 = dyn _aspell_package_defaults(p6, p7);
    check L61() else D17();
  D15():
    deopt 57 [r31];
  D17():
    deopt 67 [r35];
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L57():
    goto L8(r31);
  L61():
    c4 = `is.object`(r35);
    if c4 then L63() else L64(r35);
  L62(dx5):
    st defaults = dx5;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L63():
    dr4 = tryDispatchBuiltin.1("$", r35);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(dr4);
  L64(r37):
    r38 = `$`(r37, <sym vignettes>);
    goto L62(r38);
  L12(r40):
    r41 = `!`(r40);
    c6 = `as.logical`(r41);
    if c6 then L69() else L13();
  L65():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L62(dx4);
  L66():
    defaults = ld defaults;
    check L68() else D18();
  L67():
    r39 = dyn base3(<sym defaults>);
    goto L12(r39);
  D18():
    deopt 71 [defaults];
  L13():
    goto L27();
  L27():
    aspell_find_program = ldf aspell_find_program;
    check L117() else D31();
  L68():
    defaults1 = force? defaults;
    checkMissing(defaults1);
    c5 = `==`(defaults1, NULL);
    goto L12(c5);
  L69():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  D31():
    deopt 138 [];
  L14(r43):
    r45 = `!`(r43);
    c9 = `as.logical`(r45);
    if c9 then L77() else L15();
  L70():
    defaults2 = ld defaults;
    check L72() else D19();
  L71():
    r42 = dyn base4(<lang `<-`(d, `$`(defaults, control))>);
    goto L14(r42);
  L117():
    p15 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r77 = dyn aspell_find_program(p15);
    check L118() else D32();
  D19():
    deopt 76 [defaults2];
  D32():
    deopt 140 [r77];
  L15():
    goto L16();
  L16():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  L72():
    defaults3 = force? defaults2;
    checkMissing(defaults3);
    c7 = `is.object`(defaults3);
    if c7 then L74() else L75(defaults3);
  L77():
    d = ld d;
    check L78() else D20();
  L118():
    st program = r77;
    split = ldf split;
    check L119() else D33();
  D20():
    deopt 82 [d];
  D33():
    deopt 143 [];
  L17(r47):
    r49 = `!`(r47);
    c12 = `as.logical`(r49);
    if c12 then L87() else L18();
  L73(dx7):
    st d = dx7;
    c8 = `==`(dx7, NULL);
    goto L14(c8);
  L74():
    dr6 = tryDispatchBuiltin.1("$", defaults3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L76() else L75(dr6);
  L75(defaults5):
    r44 = `$`(defaults5, <sym control>);
    goto L73(r44);
  L78():
    d1 = force? d;
    checkMissing(d1);
    st control = d1;
    goto L16();
  L80():
    defaults6 = ld defaults;
    check L82() else D21();
  L81():
    r46 = dyn base5(<lang `<-`(d, `$`(defaults, program))>);
    goto L17(r46);
  L119():
    p16 = prom<V +>{
      files2 = ld files;
      files3 = force? files2;
      checkMissing(files3);
      return files3;
    };
    p17 = prom<V +>{
      vinfo4 = ld vinfo;
      vinfo5 = force? vinfo4;
      checkMissing(vinfo5);
      c20 = `is.object`(vinfo5);
      if c20 then L1() else L2(vinfo5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", vinfo5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(vinfo7):
      r79 = `$`(vinfo7, <sym engines>);
      goto L0(r79);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r81 = dyn split(p16, p17);
    check L120() else D34();
  D21():
    deopt 88 [defaults6];
  D34():
    deopt 146 [r81];
  L18():
    goto L19();
  L19():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L76():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L73(dx6);
  L82():
    defaults7 = force? defaults6;
    checkMissing(defaults7);
    c10 = `is.object`(defaults7);
    if c10 then L84() else L85(defaults7);
  L87():
    d3 = ld d;
    check L88() else D22();
  L120():
    st fgroups = r81;
    split1 = ldf split;
    check L121() else D35();
  D22():
    deopt 94 [d3];
  D35():
    deopt 149 [];
  L20(r51):
    r53 = `!`(r51);
    c15 = `as.logical`(r53);
    if c15 then L97() else L21();
  L83(dx9):
    st d = dx9;
    c11 = `==`(dx9, NULL);
    goto L17(c11);
  L84():
    dr8 = tryDispatchBuiltin.1("$", defaults7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(dr8);
  L85(defaults9):
    r48 = `$`(defaults9, <sym program>);
    goto L83(r48);
  L88():
    d4 = force? d3;
    checkMissing(d4);
    st program = d4;
    goto L19();
  L90():
    defaults10 = ld defaults;
    check L92() else D23();
  L91():
    r50 = dyn base6(<lang `<-`(d, `$`(defaults, dictionaries))>);
    goto L20(r50);
  L121():
    p18 = prom<V +>{
      vinfo8 = ld vinfo;
      vinfo9 = force? vinfo8;
      checkMissing(vinfo9);
      c21 = `is.object`(vinfo9);
      if c21 then L1() else L2(vinfo9);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", vinfo9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(vinfo11):
      r82 = `$`(vinfo11, <sym encodings>);
      goto L0(r82);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p19 = prom<V +>{
      vinfo12 = ld vinfo;
      vinfo13 = force? vinfo12;
      checkMissing(vinfo13);
      c22 = `is.object`(vinfo13);
      if c22 then L1() else L2(vinfo13);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", vinfo13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(vinfo15):
      r84 = `$`(vinfo15, <sym engines>);
      goto L0(r84);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r86 = dyn split1(p18, p19);
    check L122() else D36();
  D23():
    deopt 100 [defaults10];
  D36():
    deopt 152 [r86];
  L21():
    goto L22();
  L22():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L101() else L102();
  L86():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L83(dx8);
  L92():
    defaults11 = force? defaults10;
    checkMissing(defaults11);
    c13 = `is.object`(defaults11);
    if c13 then L94() else L95(defaults11);
  L97():
    aspell_find_dictionaries = ldf aspell_find_dictionaries;
    check L98() else D24();
  L122():
    st egroups = r86;
    do_call = ldf `do.call`;
    check L123() else D37();
  D24():
    deopt 107 [];
  D37():
    deopt 155 [];
  L23(r61):
    r63 = `!`(r61);
    c18 = `as.logical`(r63);
    if c18 then L108() else L24();
  L93(dx11):
    st d = dx11;
    c14 = `==`(dx11, NULL);
    goto L20(c14);
  L94():
    dr10 = tryDispatchBuiltin.1("$", defaults11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L96() else L95(dr10);
  L95(defaults13):
    r52 = `$`(defaults13, <sym dictionaries>);
    goto L93(r52);
  L98():
    p8 = prom<V +>{
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      return d7;
    };
    p10 = prom<V +>{
      file_path = ldf `file.path`;
      p9 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r56 = dyn file_path(p9, ".aspell");
      return r56;
    };
    r58 = dyn aspell_find_dictionaries(p8, p10);
    check L99() else D25();
  L101():
    defaults14 = ld defaults;
    check L103() else D26();
  L102():
    r60 = dyn base7(<lang `<-`(d, `$`(defaults, personal))>);
    goto L23(r60);
  L123():
    p20 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p25 = prom<V +>{
      Map = ldf Map;
      p21 = prom<V +>{
        r88 = clos inner4250573597;
        return r88;
      };
      p22 = prom<V +>{
        fgroups = ld fgroups;
        fgroups1 = force? fgroups;
        checkMissing(fgroups1);
        return fgroups1;
      };
      p23 = prom<V +>{
        egroups = ld egroups;
        egroups1 = force? egroups;
        checkMissing(egroups1);
        return egroups1;
      };
      p24 = prom<V +>{
        sym9 = ldf names;
        base9 = ldf names in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r93):
        return r93;
      L1():
        fgroups2 = ld fgroups;
        fgroups3 = force? fgroups2;
        checkMissing(fgroups3);
        names = ldf names in base;
        r94 = dyn names(fgroups3);
        goto L0(r94);
      L2():
        r92 = dyn base9(<sym fgroups>);
        goto L0(r92);
      };
      r96 = dyn Map(p21, p22, p23, p24);
      return r96;
    };
    r98 = dyn do_call(p20, p25);
    check L124() else D38();
  D25():
    deopt 110 [r58];
  D26():
    deopt 115 [defaults14];
  D38():
    deopt 158 [r98];
  L24():
    goto L26(NULL);
  L26(r74):
    goto L27();
  L96():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L93(dx10);
  L99():
    st dictionaries = r58;
    goto L22();
  L103():
    defaults15 = force? defaults14;
    checkMissing(defaults15);
    c16 = `is.object`(defaults15);
    if c16 then L105() else L106(defaults15);
  L108():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L109() else L110();
  L124():
    popenv;
    return r98;
  L25(r65):
    st control = r65;
    goto L26(r65);
  L104(dx13):
    st d = dx13;
    c17 = `==`(dx13, NULL);
    goto L23(c17);
  L105():
    dr12 = tryDispatchBuiltin.1("$", defaults15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L107() else L106(dr12);
  L106(defaults17):
    r62 = `$`(defaults17, <sym personal>);
    goto L104(r62);
  L109():
    control1 = ld control;
    check L111() else D27();
  L110():
    r64 = dyn base8(<sym control>, <lang sprintf("-p %s", shQuote(file.path(dir, ".aspell", d)))>);
    goto L25(r64);
  D27():
    deopt 123 [control1];
  L107():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L104(dx12);
  L111():
    control2 = force? control1;
    checkMissing(control2);
    sprintf = ldf sprintf;
    check L112() else D28();
  D28():
    deopt 126 [];
  L112():
    p14 = prom<V +>{
      shQuote = ldf shQuote;
      p13 = prom<V +>{
        file_path1 = ldf `file.path`;
        p11 = prom<V +>{
          dir11 = ld dir;
          dir12 = force? dir11;
          checkMissing(dir12);
          return dir12;
        };
        p12 = prom<V +>{
          d8 = ld d;
          d9 = force? d8;
          checkMissing(d9);
          return d9;
        };
        r68 = dyn file_path1(p11, ".aspell", p12);
        return r68;
      };
      r70 = dyn shQuote(p13);
      return r70;
    };
    r72 = dyn sprintf("-p %s", p14);
    check L113() else D29();
  D29():
    deopt 129 [r72];
  L113():
    c19 = ldf c in base;
    r73 = dyn c19(control2, r72);
    check L114() else D30();
  D30():
    deopt 131 [r73];
  L114():
    goto L25(r73);
  }
}
fun inner4250573597(fgroup, egroup, engine) {
  (reg fgroup:*, reg egroup:*, reg engine:*) -+> V { var fgroup:*, var egroup:*, var engine:*, reg __:cls, reg r:V, reg r1:cls, reg engine1:*, reg engine2:V, reg p:p(V +), reg r3:V, reg aspell:cls, reg fgroup1:*, reg fgroup2:V, reg p1:p(V +), reg engine3:*, reg engine4:V, reg c:L, reg engine6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r6:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg engine7:*, reg engine8:V, reg c2:L, reg engine10:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r10:V, reg c3:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r11:V, reg aspell_control_package_vignettes:*, reg aspell_control_package_vignettes1:V, reg c4:L, reg aspell_control_package_vignettes3:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg aspell_control_package_vignettes6:V, reg r13:V, reg program:*, reg program1:V, reg names:cls, reg r14:V, reg __1:cls, reg r15:V, reg control:*, reg control1:V, reg c5:cls, reg r16:V, reg p3:p(V +), reg egroup1:*, reg egroup2:V, reg p4:p(V +), reg program2:*, reg program3:V, reg p5:p(V +), reg dictionaries:*, reg dictionaries1:V, reg p6:p(V +), reg r21:V |
    mkenv;
    st fgroup = fgroup;
    st egroup = egroup;
    st engine = engine;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("tools", "vignetteEngine");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      engine1 = ld engine;
      engine2 = force? engine1;
      checkMissing(engine2);
      return engine2;
    };
    r3 = dyn r1(p);
    check L2() else D2();
  D2():
    deopt 7 [r3];
  L2():
    st engine = r3;
    aspell = ldf aspell;
    check L3() else D3();
  D3():
    deopt 10 [];
  L3():
    p1 = prom<V +>{
      fgroup1 = ld fgroup;
      fgroup2 = force? fgroup1;
      checkMissing(fgroup2);
      return fgroup2;
    };
    p2 = prom<V +>{
      engine3 = ld engine;
      engine4 = force? engine3;
      checkMissing(engine4);
      c = `is.object`(engine4);
      if c then L1() else L2(engine4);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", engine4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(engine6):
      r5 = `$`(engine6, <sym aspell>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      return dx5;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r6 = `$`(dx3, <sym filter>);
      goto L4(r6);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r9):
      return r9;
    L3():
      engine7 = ld engine;
      engine8 = force? engine7;
      checkMissing(engine8);
      c2 = `is.object`(engine8);
      if c2 then L6() else L7(engine8);
    L4():
      r8 = dyn base(<lang `$`(`$`(engine, aspell), control)>, <lang `[[`(aspell_control_package_vignettes, names(program))>, <sym control>);
      goto L0(r8);
    L5(dx7):
      c3 = `is.object`(dx7);
      if c3 then L10() else L11(dx7);
    L6():
      dr4 = tryDispatchBuiltin.1("$", engine8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L8() else L7(dr4);
    L7(engine10):
      r10 = `$`(engine10, <sym aspell>);
      goto L5(r10);
    L8():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L5(dx6);
    L9(dx11):
      aspell_control_package_vignettes = ld aspell_control_package_vignettes;
      aspell_control_package_vignettes1 = force? aspell_control_package_vignettes;
      checkMissing(aspell_control_package_vignettes1);
      c4 = `is.object`(aspell_control_package_vignettes1);
      if c4 then L13() else L14(aspell_control_package_vignettes1);
    L10():
      dr6 = tryDispatchBuiltin.1("$", dx7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L12() else L11(dr6);
    L11(dx9):
      r11 = `$`(dx9, <sym control>);
      goto L9(r11);
    L1(dx13):
      control = ld control;
      control1 = force? control;
      checkMissing(control1);
      c5 = ldf c in base;
      r16 = dyn c5(dx11, dx13, control1);
      goto L0(r16);
    L12():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L9(dx10);
    L13():
      dr8 = tryDispatchBuiltin.1("[[", aspell_control_package_vignettes1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L15() else L14(dr8);
    L14(aspell_control_package_vignettes3):
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L16() else L17();
    L2(aspell_control_package_vignettes6, r13):
      __1 = ldf `[[` in base;
      r15 = dyn __1(aspell_control_package_vignettes6, r13);
      goto L1(r15);
    L15():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx12);
    L16():
      program = ld program;
      program1 = force? program;
      checkMissing(program1);
      names = ldf names in base;
      r14 = dyn names(program1);
      goto L2(aspell_control_package_vignettes3, r14);
    L17():
      r12 = dyn base1(<sym program>);
      goto L2(aspell_control_package_vignettes3, r12);
    };
    p4 = prom<V +>{
      egroup1 = ld egroup;
      egroup2 = force? egroup1;
      checkMissing(egroup2);
      return egroup2;
    };
    p5 = prom<V +>{
      program2 = ld program;
      program3 = force? program2;
      checkMissing(program3);
      return program3;
    };
    p6 = prom<V +>{
      dictionaries = ld dictionaries;
      dictionaries1 = force? dictionaries;
      checkMissing(dictionaries1);
      return dictionaries1;
    };
    r21 = dyn aspell[, filter, control, encoding, program, dictionaries](p1, p2, p3, p4, p5, p6);
    check L4() else D4();
  D4():
    deopt 22 [r21];
  L4():
    popenv;
    return r21;
  }
}