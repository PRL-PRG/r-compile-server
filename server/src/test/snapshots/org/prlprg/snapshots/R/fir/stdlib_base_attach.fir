fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg utils:*, reg utils1:V, reg p:p(V +), reg r4:V, reg summary:cls, reg women:*, reg women1:V, reg c:L, reg women3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p1:p(V +), reg r7:V, reg attach:cls, reg women4:*, reg women5:V, reg p2:p(V +), reg r9:V, reg summary1:cls, reg height:*, reg height1:V, reg p3:p(V +), reg r11:V, reg height2:*, reg height3:V, reg r12:V, reg find:cls, reg r13:V, reg summary2:cls, reg height4:*, reg height5:V, reg p4:p(V +), reg r15:V, reg rm:cls, reg height6:*, reg height7:V, reg p5:p(V +), reg r17:V, reg summary3:cls, reg height8:*, reg height9:V, reg p6:p(V +), reg r19:V, reg height10:*, reg height11:V, reg r20:V, reg find1:cls, reg r21:V, reg summary4:cls, reg height12:*, reg height13:V, reg p7:p(V +), reg r23:V, reg detach:cls, reg r24:V, reg summary5:cls, reg women6:*, reg women7:V, reg c1:L, reg women9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r25:V, reg p8:p(V +), reg r27:V |
    mkenv;
    r = clos inner573367459;
    st attach = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    summary = ldf summary;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym utils>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      utils = ld utils;
      utils1 = force? utils;
      checkMissing(utils1);
      return utils1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      c = `is.object`(women1);
      if c then L1() else L2(women1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", women1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(women3):
      r5 = `$`(women3, <sym height>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn summary(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r7];
  L4():
    goto L0();
  L6():
    attach = ldf attach;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      women4 = ld women;
      women5 = force? women4;
      checkMissing(women5);
      return women5;
    };
    r9 = dyn attach(p2);
    check L8() else D5();
  D5():
    deopt 15 [r9];
  L8():
    summary1 = ldf summary;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    p3 = prom<V +>{
      height = ld height;
      height1 = force? height;
      checkMissing(height1);
      return height1;
    };
    r11 = dyn summary1(p3);
    check L10() else D7();
  D7():
    deopt 19 [r11];
  L10():
    height2 = ld height;
    check L11() else D8();
  D8():
    deopt 20 [height2];
  L11():
    height3 = force? height2;
    checkMissing(height3);
    r12 = `*`(height3, 2.54);
    st height = r12;
    find = ldf find;
    check L12() else D9();
  D9():
    deopt 26 [];
  L12():
    r13 = dyn find("height");
    check L13() else D10();
  D10():
    deopt 28 [r13];
  L13():
    summary2 = ldf summary;
    check L14() else D11();
  D11():
    deopt 30 [];
  L14():
    p4 = prom<V +>{
      height4 = ld height;
      height5 = force? height4;
      checkMissing(height5);
      return height5;
    };
    r15 = dyn summary2(p4);
    check L15() else D12();
  D12():
    deopt 32 [r15];
  L15():
    rm = ldf rm;
    check L16() else D13();
  D13():
    deopt 34 [];
  L16():
    p5 = prom<V +>{
      height6 = ld height;
      height7 = force? height6;
      checkMissing(height7);
      return height7;
    };
    r17 = dyn rm(p5);
    check L17() else D14();
  D14():
    deopt 36 [r17];
  L17():
    summary3 = ldf summary;
    check L18() else D15();
  D15():
    deopt 38 [];
  L18():
    p6 = prom<V +>{
      height8 = ld height;
      height9 = force? height8;
      checkMissing(height9);
      return height9;
    };
    r19 = dyn summary3(p6);
    check L19() else D16();
  D16():
    deopt 40 [r19];
  L19():
    height10 = ld height;
    check L20() else D17();
  D17():
    deopt 41 [height10];
  L20():
    height11 = force? height10;
    checkMissing(height11);
    r20 = `*`(height11, 25.4);
    sst height = r20;
    find1 = ldf find;
    check L21() else D18();
  D18():
    deopt 47 [];
  L21():
    r21 = dyn find1("height");
    check L22() else D19();
  D19():
    deopt 49 [r21];
  L22():
    summary4 = ldf summary;
    check L23() else D20();
  D20():
    deopt 51 [];
  L23():
    p7 = prom<V +>{
      height12 = ld height;
      height13 = force? height12;
      checkMissing(height13);
      return height13;
    };
    r23 = dyn summary4(p7);
    check L24() else D21();
  D21():
    deopt 53 [r23];
  L24():
    detach = ldf detach;
    check L25() else D22();
  D22():
    deopt 55 [];
  L25():
    r24 = dyn detach("women");
    check L26() else D23();
  D23():
    deopt 57 [r24];
  L26():
    summary5 = ldf summary;
    check L27() else D24();
  D24():
    deopt 59 [];
  L27():
    p8 = prom<V +>{
      women6 = ld women;
      women7 = force? women6;
      checkMissing(women7);
      c1 = `is.object`(women7);
      if c1 then L1() else L2(women7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", women7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(women9):
      r25 = `$`(women9, <sym height>);
      goto L0(r25);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r27 = dyn summary5(p8);
    check L28() else D25();
  D25():
    deopt 61 [r27];
  L28():
    popenv;
    return r27;
  }
}
fun inner573367459(what, pos, name, `warn.conflicts`) {
  (reg what:*, reg pos:*, reg name:*, reg warn_conflicts:*) -+> V { var what:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var `warn.conflicts`:*, reg warn_conflicts_isMissing:L, reg warn_conflicts_orDefault:*, reg r6:cls, reg pos1:*, reg pos2:V, reg r7:V, reg c:L, reg stop:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg what1:*, reg what2:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c7:L, reg r13:V, reg what3:*, reg what4:V, reg length:cls, reg r14:V, reg r15:V, reg c8:L, reg c9:V, reg c11:L, reg file_exists:cls, reg what5:*, reg what6:V, reg p2:p(V +), reg r17:V, reg r18:V, reg c12:L, reg stop1:cls, reg gettextf:cls, reg what7:*, reg what8:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg missing:cls, reg r26:V, reg c13:L, reg paste0:cls, reg what9:*, reg what10:V, reg p5:p(V +), reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg pos3:*, reg pos4:V, reg name1:*, reg name2:V, reg attach:cls, reg r32:V, reg load:cls, reg what11:*, reg what12:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg pos5:*, reg pos6:V, reg as_environment:cls, reg r36:V, reg p7:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg what13:*, reg what14:V, reg pos7:*, reg pos8:V, reg name3:*, reg name4:V, reg attach1:cls, reg r42:V, reg warn_conflicts1:*, reg warn_conflicts2:V, reg c14:L, reg c16:V, reg exists:cls, reg value:*, reg value1:V, reg p8:p(V +), reg r44:V, reg r45:V, reg c17:L, reg c18:V, reg c20:L, reg checkConflicts:cls, reg value2:*, reg value3:V, reg p9:p(V +), reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg value4:*, reg value5:V, reg names:cls, reg r53:V, reg length1:cls, reg r54:V, reg c21:L, reg c23:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg c26:L, reg r56:V, reg _isMethodsDispatchOn:cls, reg r57:V, reg c27:L, reg c28:V, reg c30:L, reg __:cls, reg r58:V, reg r59:cls, reg value6:*, reg value7:V, reg p10:p(V +), reg r61:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg value8:*, reg value9:V, reg invisible:cls, reg r65:V |
    mkenv;
    st what = what;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0(2) else L0(pos);
  L0(pos_orDefault):
    st pos = pos_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1() else L2(name);
  L1():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym what>);
        goto L0(r2);
      L2():
        r = dyn base(<sym what>);
        goto L0(r);
      };
      r4 = dyn deparse1[, backtick](p, FALSE);
      return r4;
    };
    goto L2(p1);
  L2(name_orDefault):
    st name = name_orDefault;
    warn_conflicts_isMissing = missing.0(warn_conflicts);
    if warn_conflicts_isMissing then L3(TRUE) else L3(warn_conflicts);
  L3(warn_conflicts_orDefault):
    st `warn.conflicts` = warn_conflicts_orDefault;
    r6 = clos inner769234730;
    st checkConflicts = r6;
    pos1 = ld pos;
    check L28() else D0();
  D0():
    deopt 3 [pos1];
  L28():
    pos2 = force? pos1;
    checkMissing(pos2);
    r7 = `==`(pos2, 1);
    c = `as.logical`(r7);
    if c then L29() else L4();
  L4():
    goto L5();
  L5():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L29():
    stop = ldf stop;
    check L30() else D1();
  D1():
    deopt 8 [];
  L6(r11):
    c2 = `as.logical`(r11);
    if c2 then L36() else L7(c2);
  L30():
    r8 = dyn stop("'pos=1' is not possible and has been warned about for years");
    check L31() else D2();
  L33():
    what1 = ld what;
    check L35() else D3();
  L34():
    r10 = dyn base1(<sym what>);
    goto L6(r10);
  D2():
    deopt 10 [r8];
  D3():
    deopt 14 [what1];
  L7(c4):
    c11 = `as.logical`(c4);
    if c11 then L42() else L9();
  L31():
    goto L5();
  L35():
    what2 = force? what1;
    checkMissing(what2);
    c1 = `is.character`(what2);
    goto L6(c1);
  L36():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L8(c7, r13):
    r15 = `==`(r13, 1);
    c8 = `as.logical`(r15);
    c9 = `&&`(c7, c8);
    goto L7(c9);
  L9():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  L16():
    warn_conflicts1 = ld `warn.conflicts`;
    check L69() else D21();
  L37():
    what3 = ld what;
    check L39() else D4();
  L38():
    r12 = dyn base2(<sym what>);
    goto L8(c2, r12);
  L42():
    file_exists = ldf `file.exists`;
    check L43() else D6();
  D4():
    deopt 19 [c2, what3];
  D6():
    deopt 27 [];
  D21():
    deopt 77 [warn_conflicts1];
  L17(r41):
    st value = r41;
    goto L16();
  L39():
    what4 = force? what3;
    checkMissing(what4);
    length = ldf length in base;
    r14 = dyn length(what4);
    check L40() else D5();
  L43():
    p2 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    r17 = dyn file_exists(p2);
    check L44() else D7();
  L63():
    what13 = ld what;
    check L65() else D17();
  L64():
    r40 = dyn base6(<lang attach(what, pos, name)>);
    goto L17(r40);
  L69():
    warn_conflicts2 = force? warn_conflicts1;
    checkMissing(warn_conflicts2);
    c14 = `as.logical`(warn_conflicts2);
    if c14 then L70() else L18(c14);
  D5():
    deopt 22 [c2, r14];
  D7():
    deopt 29 [r17];
  D17():
    deopt 68 [what13];
  L18(c16):
    c20 = `as.logical`(c16);
    if c20 then L74() else L19();
  L40():
    goto L8(c2, r14);
  L44():
    r18 = `!`(r17);
    c12 = `as.logical`(r18);
    if c12 then L45() else L10();
  L65():
    what14 = force? what13;
    checkMissing(what14);
    pos7 = ld pos;
    check L66() else D18();
  L70():
    exists = ldf exists;
    check L71() else D22();
  D18():
    deopt 70 [pos7];
  D22():
    deopt 80 [c14];
  L10():
    goto L11();
  L11():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L19():
    goto L20();
  L20():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L45():
    stop1 = ldf stop;
    check L46() else D8();
  L66():
    pos8 = force? pos7;
    checkMissing(pos8);
    name3 = ld name;
    check L67() else D19();
  L71():
    p8 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r44 = dyn exists[, envir, inherits](".conflicts.OK", p8, FALSE);
    check L72() else D23();
  L74():
    checkConflicts = ldf checkConflicts;
    check L75() else D24();
  D8():
    deopt 32 [];
  D19():
    deopt 72 [name3];
  D23():
    deopt 86 [c14, r44];
  D24():
    deopt 90 [];
  L12(r25):
    c13 = `as.logical`(r25);
    if c13 then L51() else L13();
  L21(r50):
    c21 = `as.logical`(r50);
    if c21 then L85() else L23(c21);
  L46():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        what7 = ld what;
        what8 = force? what7;
        checkMissing(what8);
        return what8;
      };
      r20 = dyn gettextf("file '%s' not found", p3);
      return r20;
    };
    r22 = dyn stop1[, domain](p4, NA_LGL);
    check L47() else D9();
  L49():
    missing = ldf missing in base;
    r26 = dyn missing(<sym name>);
    goto L12(r26);
  L50():
    r24 = dyn base3(<sym name>);
    goto L12(r24);
  L67():
    name4 = force? name3;
    checkMissing(name4);
    attach1 = ldf attach in base;
    r42 = dyn attach1(what14, pos8, name4);
    check L68() else D20();
  L72():
    r45 = `!`(r44);
    c17 = `as.logical`(r45);
    c18 = `&&`(c14, c17);
    goto L18(c18);
  L75():
    p9 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r47 = dyn checkConflicts(p9);
    check L76() else D25();
  L78():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  L79():
    r49 = dyn base7(<lang names(value)>);
    goto L21(r49);
  D9():
    deopt 36 [r22];
  D20():
    deopt 75 [r42];
  D25():
    deopt 92 [r47];
  L13():
    goto L14();
  L14():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L22(r52):
    length1 = ldf length in base;
    r54 = dyn length1(r52);
    check L84() else D28();
  L23(c23):
    c30 = `as.logical`(c23);
    if c30 then L90() else L25();
  L47():
    goto L11();
  L51():
    paste0 = ldf paste0;
    check L52() else D10();
  L68():
    goto L17(r42);
  L76():
    goto L20();
  L80():
    value4 = ld value;
    check L82() else D26();
  L81():
    r51 = dyn base8(<sym value>);
    goto L22(r51);
  L85():
    sym9 = ldf `.isMethodsDispatchOn`;
    base9 = ldf `.isMethodsDispatchOn` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  D10():
    deopt 43 [];
  D26():
    deopt 99 [value4];
  D28():
    deopt 104 [r54];
  L15(r31):
    st value = r31;
    load = ldf load;
    check L60() else D15();
  L24(c26, r56):
    c27 = `as.logical`(r56);
    c28 = `&&`(c26, c27);
    goto L23(c28);
  L25():
    goto L26();
  L26():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L95() else L96();
  L52():
    p5 = prom<V +>{
      what9 = ld what;
      what10 = force? what9;
      checkMissing(what10);
      return what10;
    };
    r28 = dyn paste0("file:", p5);
    check L53() else D11();
  L55():
    pos3 = ld pos;
    check L57() else D12();
  L56():
    r30 = dyn base4(<lang attach(NULL, pos, name)>);
    goto L15(r30);
  L82():
    value5 = force? value4;
    checkMissing(value5);
    names = ldf names in base;
    r53 = dyn names(value5);
    check L83() else D27();
  L84():
    goto L21(r54);
  L86():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r57 = dyn _isMethodsDispatchOn();
    check L88() else D29();
  L87():
    r55 = dyn base9();
    goto L24(c21, r55);
  L90():
    __ = ldf `::`;
    check L91() else D30();
  D11():
    deopt 46 [r28];
  D12():
    deopt 53 [pos3];
  D15():
    deopt 61 [];
  D27():
    deopt 102 [r53];
  D29():
    deopt 108 [c21, r57];
  D30():
    deopt 111 [];
  L27(r64):
    popenv;
    return r64;
  L53():
    st name = r28;
    goto L14();
  L57():
    pos4 = force? pos3;
    checkMissing(pos4);
    name1 = ld name;
    check L58() else D13();
  L60():
    p6 = prom<V +>{
      what11 = ld what;
      what12 = force? what11;
      checkMissing(what12);
      return what12;
    };
    p7 = prom<V +>{
      sym5 = ldf `as.environment`;
      base5 = ldf `as.environment` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      pos5 = ld pos;
      pos6 = force? pos5;
      checkMissing(pos6);
      as_environment = ldf `as.environment` in base;
      r36 = dyn as_environment(pos6);
      goto L0(r36);
    L2():
      r34 = dyn base5(<sym pos>);
      goto L0(r34);
    };
    r38 = dyn load[, envir](p6, p7);
    check L61() else D16();
  L83():
    goto L22(r53);
  L88():
    goto L24(c21, r57);
  L91():
    r58 = dyn __("methods", "cacheMetaData");
    check L92() else D31();
  L95():
    value8 = ld value;
    check L97() else D33();
  L96():
    r63 = dyn base10(<sym value>);
    goto L27(r63);
  D13():
    deopt 55 [name1];
  D16():
    deopt 65 [r38];
  D31():
    deopt 114 [r58];
  D33():
    deopt 123 [value8];
  L58():
    name2 = force? name1;
    checkMissing(name2);
    attach = ldf attach in base;
    r32 = dyn attach(NULL, pos4, name2);
    check L59() else D14();
  L61():
    goto L16();
  L92():
    checkFun.0(r58);
    r59 = r58 as cls;
    p10 = prom<V +>{
      value6 = ld value;
      value7 = force? value6;
      checkMissing(value7);
      return value7;
    };
    r61 = dyn r59(p10, TRUE);
    check L93() else D32();
  L97():
    value9 = force? value8;
    checkMissing(value9);
    invisible = ldf invisible in base;
    r65 = dyn invisible(value9);
    check L98() else D34();
  D14():
    deopt 58 [r32];
  D32():
    deopt 118 [r61];
  D34():
    deopt 126 [r65];
  L59():
    goto L15(r32);
  L93():
    goto L26();
  L98():
    goto L27(r65);
  }
}
fun inner769234730(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg search:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sp:*, reg sp1:V, reg r6:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg i7:I, reg r8:V, reg env1:*, reg env2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg i10:I, reg r10:V, reg i11:*, reg i12:V, reg as_environment:cls, reg r11:V, reg identical:cls, reg r12:V, reg c2:L, reg i15:*, reg i16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg lib_pos:*, reg lib_pos1:V, reg as_environment1:cls, reg r18:V, reg names:cls, reg r19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg _isMethodsDispatchOn:cls, reg r22:V, reg c3:L, reg ob:*, reg ob1:V, reg c4:L, reg ob3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg ob4:*, reg ob5:V, reg p:p(V +), reg r24:V, reg __:cls, reg r25:V, reg gsub:cls, reg these:*, reg these1:V, reg p1:p(V +), reg r27:V, reg gsub1:cls, reg these2:*, reg these3:V, reg p2:p(V +), reg r29:V, reg gen:*, reg gen1:V, reg c5:L, reg gen3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg from:*, reg from1:V, reg r30:V, reg __1:cls, reg r31:V, reg ob6:*, reg ob7:V, reg c6:L, reg ob9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _in_:cls, reg ob10:*, reg ob11:V, reg p3:p(V +), reg gen4:*, reg gen5:V, reg p4:p(V +), reg r34:V, reg r35:V, reg __2:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg sp2:*, reg sp3:V, reg r39:I, reg c7:L, reg r41:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg r46:V, reg lib_pos2:*, reg lib_pos3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg r56:V, reg c8:cls, reg r57:V, reg sp4:*, reg sp5:V, reg match:cls, reg r58:V, reg c9:cls, reg r59:V, reg r60:V, reg __3:cls, reg r61:V, reg ipos:*, reg ipos1:V, reg s1:V, reg l1:I, reg i20:I, reg i21:I, reg i22:I, reg c10:L, reg x1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r62:V, reg i27:I, reg r63:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg i30:I, reg r65:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg i33:I, reg r67:V, reg i34:*, reg i35:V, reg as_environment2:cls, reg r68:V, reg names1:cls, reg r69:V, reg ob12:*, reg ob13:V, reg match1:cls, reg r70:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r71:V, reg i38:I, reg r72:V, reg obj_same:*, reg obj_same1:V, reg r73:V, reg any:cls, reg r74:V, reg c11:L, reg ob14:*, reg ob15:V, reg c12:L, reg i42:I, reg ob17:V, reg dr8:V, reg dc4:L, reg dx9:V, reg i44:I, reg dx10:V, reg obj_same2:*, reg obj_same3:V, reg __4:cls, reg r75:V, reg same:*, reg same1:V, reg c13:L, reg i46:I, reg same3:V, reg dr10:V, reg dc5:L, reg dx11:V, reg i48:I, reg dx12:V, reg _in_1:cls, reg same4:*, reg same5:V, reg p5:p(V +), reg dont_mind:*, reg dont_mind1:V, reg p6:p(V +), reg r78:V, reg r79:V, reg __5:cls, reg r80:V, reg which:cls, reg startsWith1:cls, reg same6:*, reg same7:V, reg p7:p(V +), reg r82:V, reg p8:p(V +), reg r84:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r85:V, reg i51:I, reg r86:V, reg Classobjs:*, reg Classobjs1:V, reg length:cls, reg r87:V, reg c14:L, reg same8:*, reg same9:V, reg c15:L, reg i55:I, reg same11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i57:I, reg dx14:V, reg Classobjs2:*, reg Classobjs3:V, reg r88:V, reg __6:cls, reg r89:V, reg i58:I, reg r90:cls, reg same12:*, reg same13:V, reg c16:L, reg i60:I, reg same15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg i62:I, reg dx17:V, reg same_isFn:cls, reg i63:*, reg i64:V, reg p9:p(V +), reg r92:V, reg same_isFn1:cls, reg lib_pos4:*, reg lib_pos5:V, reg p10:p(V +), reg r94:V, reg r95:V, reg __7:cls, reg r96:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r97:V, reg i67:I, reg r98:V, reg same16:*, reg same17:V, reg length1:cls, reg r99:V, reg c17:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg i72:I, reg r101:V, reg sp6:*, reg sp7:V, reg sp8:*, reg sp9:V, reg c18:L, reg i74:I, reg sp12:V, reg sp13:V, reg dr16:V, reg dc8:L, reg dx18:V, reg i76:I, reg sp15:V, reg dx19:V, reg i77:*, reg i78:V, reg __8:cls, reg r102:V, reg r103:V, reg sum:cls, reg r104:V, reg r105:V, reg c19:L, reg sprintf:cls, reg sp16:*, reg sp17:V, reg c20:L, reg sp19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg i81:*, reg i82:V, reg __9:cls, reg r106:V, reg p11:p(V +), reg i83:*, reg i84:V, reg p12:p(V +), reg r109:V, reg i85:I, reg r110:V, reg sp20:*, reg sp21:V, reg c21:L, reg i87:I, reg sp23:V, reg dr20:V, reg dc10:L, reg dx22:V, reg i89:*, reg i90:V, reg __10:cls, reg r111:V, reg packageStartupMessage:cls, reg _maskedMsg:cls, reg sort:cls, reg same18:*, reg same19:V, reg p13:p(V +), reg r113:V, reg p14:p(V +), reg pkg:*, reg pkg1:V, reg p15:p(V +), reg i91:*, reg i92:V, reg lib_pos6:*, reg lib_pos7:V, reg r116:V, reg p16:p(V +), reg r118:V, reg p17:p(V +), reg r120:V, reg i93:I, reg r121:V, reg i94:I |
    mkenv;
    st env = env;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L0(r1):
    st `dont.mind` = r1;
    search = ldf search;
    check L47() else D1();
  L44():
    c = ldf c in base;
    r2 = dyn c("last.dump", "last.warning", ".Last.value", ".Random.seed", ".Last.lib", ".onDetach", ".packageName", ".noGenerics", ".required", ".no_S3_generics", ".Depends", ".requireCachedGenerics");
    check L46() else D0();
  L45():
    r = dyn base("last.dump", "last.warning", ".Last.value", ".Random.seed", ".Last.lib", ".onDetach", ".packageName", ".noGenerics", ".required", ".no_S3_generics", ".Depends", ".requireCachedGenerics");
    goto L0(r);
  D0():
    deopt 15 [r2];
  D1():
    deopt 18 [];
  L46():
    goto L0(r2);
  L47():
    r3 = dyn search();
    check L48() else D2();
  D2():
    deopt 19 [r3];
  L48():
    st sp = r3;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L1(r5):
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L2(i);
  L49():
    sp = ld sp;
    check L51() else D3();
  L50():
    r4 = dyn base1(<sym sp>);
    goto L1(r4);
  D3():
    deopt 22 [sp];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L52() else L8();
  L51():
    sp1 = force? sp;
    checkMissing(sp1);
    r6 = seq_along(sp1);
    goto L1(r6);
  L6():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L53() else L54();
  L52():
    goto L6();
  L3(i7, r8):
    c2 = `as.logical`(r8);
    if c2 then L61() else L5();
  L9(r15):
    st ob = r15;
    sym6 = ldf `.isMethodsDispatchOn`;
    base6 = ldf `.isMethodsDispatchOn` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L53():
    env1 = ld env;
    check L55() else D4();
  L54():
    r7 = dyn base2(<sym env>, <lang as.environment(i)>);
    goto L3(i2, r7);
  L65():
    sym5 = ldf `as.environment`;
    base5 = ldf `as.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L66():
    r14 = dyn base4(<lang as.environment(lib.pos)>);
    goto L9(r14);
  D4():
    deopt 27 [i2, env1];
  L5():
    goto L2(i7);
  L10(r17):
    names = ldf names in base;
    r19 = dyn names(r17);
    check L71() else D11();
  L11(r21):
    c3 = `as.logical`(r21);
    if c3 then L75() else L12();
  L55():
    env2 = force? env1;
    checkMissing(env2);
    sym3 = ldf `as.environment`;
    base3 = ldf `as.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L61():
    i15 = ld i;
    check L62() else D8();
  L67():
    lib_pos = ld `lib.pos`;
    check L69() else D9();
  L68():
    r16 = dyn base5(<sym lib.pos>);
    goto L10(r16);
  L72():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r22 = dyn _isMethodsDispatchOn();
    check L74() else D12();
  L73():
    r20 = dyn base6();
    goto L11(r20);
  D8():
    deopt 44 [i7, i15];
  D9():
    deopt 58 [lib_pos];
  D11():
    deopt 63 [r19];
  D12():
    deopt 68 [r22];
  L4(i10, r10):
    identical = ldf identical in base;
    r12 = dyn identical(env2, r10, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L60() else D7();
  L12():
    goto L16();
  L16():
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L56():
    i11 = ld i;
    check L58() else D5();
  L57():
    r9 = dyn base3(<sym i>);
    goto L4(i2, r9);
  L62():
    i16 = force? i15;
    checkMissing(i16);
    st `lib.pos` = i16;
    goto L6();
  L69():
    lib_pos1 = force? lib_pos;
    checkMissing(lib_pos1);
    as_environment1 = ldf `as.environment` in base;
    r18 = dyn as_environment1(lib_pos1);
    check L70() else D10();
  L71():
    goto L9(r19);
  L74():
    goto L11(r22);
  L75():
    ob = ld ob;
    check L76() else D13();
  D5():
    deopt 31 [i2, i11];
  D7():
    deopt 43 [i10, r12];
  D10():
    deopt 61 [r18];
  D13():
    deopt 69 [ob];
  L17(r38):
    c7 = `is.object`(r38);
    if c7 then L101() else L102(r38);
  L58():
    i12 = force? i11;
    checkMissing(i12);
    as_environment = ldf `as.environment` in base;
    r11 = dyn as_environment(i12);
    check L59() else D6();
  L60():
    goto L3(i10, r12);
  L70():
    goto L10(r18);
  L76():
    ob1 = force? ob;
    checkMissing(ob1);
    c4 = `is.object`(ob1);
    if c4 then L77() else L78(ob1);
  L98():
    sp2 = ld sp;
    check L100() else D25();
  L99():
    r37 = dyn base7(<sym sp>);
    goto L17(r37);
  D6():
    deopt 34 [i2, r11];
  D25():
    deopt 113 [sp2];
  L13(dx1):
    st these = dx1;
    gsub = ldf gsub;
    check L82() else D16();
  L18(dx8):
    st ipos = dx8;
    ipos = ld ipos;
    check L115() else D31();
  L59():
    goto L4(i2, r11);
  L77():
    dr = tryDispatchBuiltin.1("[", ob1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L79() else L78(dr);
  L78(ob3):
    startsWith = ldf startsWith;
    check L80() else D14();
  L100():
    sp3 = force? sp2;
    checkMissing(sp3);
    r39 = seq_along(sp3);
    goto L17(r39);
  L101():
    dr6 = tryDispatchBuiltin.1("[", r38);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L103() else L102(dr6);
  L102(r41):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  D14():
    deopt 72 [ob3];
  D16():
    deopt 79 [];
  D31():
    deopt 139 [ipos];
  L19(r45, r46):
    r60 = `-`(<missing>, r46);
    __3 = ldf `[` in base;
    r61 = dyn __3(r45, r60);
    goto L18(r61);
  L79():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L80():
    p = prom<V +>{
      ob4 = ld ob;
      ob5 = force? ob4;
      checkMissing(ob5);
      return ob5;
    };
    r24 = dyn startsWith(p, ".__T__");
    check L81() else D15();
  L82():
    p1 = prom<V +>{
      these = ld these;
      these1 = force? these;
      checkMissing(these1);
      return these1;
    };
    r27 = dyn gsub(".__T__(.*):([^:]+)", "\\1", p1);
    check L83() else D17();
  L103():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx7);
  L104():
    lib_pos2 = ld `lib.pos`;
    check L106() else D26();
  L105():
    r44 = dyn base8(<sym lib.pos>, <lang match(c("Autoloads", "CheckExEnv"), sp, 0)>);
    goto L19(r41, r44);
  L115():
    ipos1 = force? ipos;
    checkMissing(ipos1);
    s1 = toForSeq(ipos1);
    l1 = length(s1);
    i20 = 0;
    goto L22(i20);
  D15():
    deopt 75 [ob3, r24];
  D17():
    deopt 83 [r27];
  D26():
    deopt 118 [r41, lib_pos2];
  L22(i21):
    i22 = `+`.1(i21, 1);
    c10 = `<`.1(l1, i22);
    if c10 then L116() else L43();
  L81():
    __ = ldf `[` in base;
    r25 = dyn __(ob3, r24);
    goto L13(r25);
  L83():
    st gen = r27;
    gsub1 = ldf gsub;
    check L84() else D18();
  L106():
    lib_pos3 = force? lib_pos2;
    checkMissing(lib_pos3);
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  D18():
    deopt 86 [];
  L20(r50, r51):
    c9 = ldf c in base;
    r59 = dyn c9(lib_pos3, r51);
    check L114() else D30();
  L43():
    x1 = `[[`(s1, i22, NULL, TRUE);
    st i = x1;
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L117() else L118();
  L84():
    p2 = prom<V +>{
      these2 = ld these;
      these3 = force? these2;
      checkMissing(these3);
      return these3;
    };
    r29 = dyn gsub1(".__T__(.*):([^:]+)", "\\2", p2);
    check L85() else D19();
  L107():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L109() else L110();
  L108():
    r49 = dyn base9(<lang c("Autoloads", "CheckExEnv")>, <sym sp>, 0);
    goto L20(r41, r49);
  L116():
    invisible.0();
    popenv;
    return i22;
  D19():
    deopt 90 [r29];
  D30():
    deopt 135 [r50, r59];
  L21(r55, r56):
    sp4 = ld sp;
    check L112() else D28();
  L23(i27, r63):
    st `obj.same` = r63;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L128() else L129();
  L85():
    st from = r29;
    gen = ld gen;
    check L86() else D20();
  L109():
    c8 = ldf c in base;
    r57 = dyn c8("Autoloads", "CheckExEnv");
    check L111() else D27();
  L110():
    r54 = dyn base10("Autoloads", "CheckExEnv");
    goto L21(r41, r54);
  L114():
    goto L19(r50, r59);
  L117():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L119() else L120();
  L118():
    r62 = dyn base11[, , nomatch](<lang names(as.environment(i))>, <sym ob>, 0);
    goto L23(i22, r62);
  D20():
    deopt 92 [gen];
  D27():
    deopt 127 [r41, r57];
  D28():
    deopt 128 [r55, sp4];
  L24(i30, r65):
    ob12 = ld ob;
    check L126() else D35();
  L26(i38, r72):
    c11 = `as.logical`(r72);
    if c11 then L132() else L27();
  L86():
    gen1 = force? gen;
    checkMissing(gen1);
    c5 = `is.object`(gen1);
    if c5 then L87() else L88(gen1);
  L111():
    goto L21(r41, r57);
  L112():
    sp5 = force? sp4;
    checkMissing(sp5);
    match = ldf match in base;
    r58 = dyn match(r56, sp5, 0, NULL);
    check L113() else D29();
  L119():
    sym13 = ldf `as.environment`;
    base13 = ldf `as.environment` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L121() else L122();
  L120():
    r64 = dyn base12(<lang as.environment(i)>);
    goto L24(i22, r64);
  L128():
    obj_same = ld `obj.same`;
    check L130() else D37();
  L129():
    r71 = dyn base14(<lang `>`(obj.same, 0)>);
    goto L26(i27, r71);
  D29():
    deopt 133 [r55, r58];
  D35():
    deopt 153 [i30, ob12];
  D37():
    deopt 162 [i27, obj_same];
  L14(dx3):
    st gen = dx3;
    ob6 = ld ob;
    check L91() else D22();
  L25(i33, r67):
    names1 = ldf names in base;
    r69 = dyn names1(r67);
    check L125() else D34();
  L27():
    goto L42(i38);
  L42(i94):
    goto L22(i94);
  L87():
    dr2 = tryDispatchBuiltin.1("[", gen1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L89() else L88(dr2);
  L88(gen3):
    from = ld from;
    check L90() else D21();
  L113():
    goto L20(r55, r58);
  L121():
    i34 = ld i;
    check L123() else D32();
  L122():
    r66 = dyn base13(<sym i>);
    goto L25(i22, r66);
  L126():
    ob13 = force? ob12;
    checkMissing(ob13);
    match1 = ldf match in base;
    r70 = dyn match1(r65, ob13, 0, NULL);
    check L127() else D36();
  L130():
    obj_same1 = force? obj_same;
    checkMissing(obj_same1);
    r73 = `>`(obj_same1, 0);
    any = ldf any in base;
    r74 = dyn any(r73);
    check L131() else D38();
  L132():
    ob14 = ld ob;
    check L133() else D39();
  D21():
    deopt 94 [gen3, from];
  D22():
    deopt 100 [ob6];
  D32():
    deopt 147 [i22, i34];
  D34():
    deopt 152 [i33, r69];
  D36():
    deopt 158 [i30, r70];
  D38():
    deopt 167 [i27, r74];
  D39():
    deopt 168 [i38, ob14];
  L89():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L90():
    from1 = force? from;
    checkMissing(from1);
    r30 = `!=`(from1, ".GlobalEnv");
    __1 = ldf `[` in base;
    r31 = dyn __1(gen3, r30);
    goto L14(r31);
  L91():
    ob7 = force? ob6;
    checkMissing(ob7);
    c6 = `is.object`(ob7);
    if c6 then L92() else L93(ob7);
  L123():
    i35 = force? i34;
    checkMissing(i35);
    as_environment2 = ldf `as.environment` in base;
    r68 = dyn as_environment2(i35);
    check L124() else D33();
  L125():
    goto L24(i33, r69);
  L127():
    goto L23(i30, r70);
  L131():
    goto L26(i27, r74);
  L133():
    ob15 = force? ob14;
    checkMissing(ob15);
    c12 = `is.object`(ob15);
    if c12 then L134() else L135(i38, ob15);
  D33():
    deopt 150 [i22, r68];
  L15(dx5):
    st ob = dx5;
    goto L16();
  L28(i44, dx10):
    st same = dx10;
    same = ld same;
    check L138() else D41();
  L92():
    dr4 = tryDispatchBuiltin.1("[", ob7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L94() else L93(dr4);
  L93(ob9):
    _in_ = ldf `%in%`;
    check L95() else D23();
  L124():
    goto L25(i22, r68);
  L134():
    dr8 = tryDispatchBuiltin.1("[", ob15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L136() else L135(i38, dr8);
  L135(i42, ob17):
    obj_same2 = ld `obj.same`;
    check L137() else D40();
  D23():
    deopt 103 [ob9];
  D40():
    deopt 170 [i42, ob17, obj_same2];
  D41():
    deopt 174 [i44, same];
  L94():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L95():
    p3 = prom<V +>{
      ob10 = ld ob;
      ob11 = force? ob10;
      checkMissing(ob11);
      return ob11;
    };
    p4 = prom<V +>{
      gen4 = ld gen;
      gen5 = force? gen4;
      checkMissing(gen5);
      return gen5;
    };
    r34 = dyn _in_(p3, p4);
    check L96() else D24();
  L136():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L28(i38, dx9);
  L137():
    obj_same3 = force? obj_same2;
    __4 = ldf `[` in base;
    r75 = dyn __4(ob17, obj_same3);
    goto L28(i42, r75);
  L138():
    same1 = force? same;
    checkMissing(same1);
    c13 = `is.object`(same1);
    if c13 then L139() else L140(i44, same1);
  D24():
    deopt 106 [ob9, r34];
  L29(i48, dx12):
    st same = dx12;
    which = ldf which;
    check L144() else D44();
  L96():
    r35 = `!`(r34);
    __2 = ldf `[` in base;
    r36 = dyn __2(ob9, r35);
    goto L15(r36);
  L139():
    dr10 = tryDispatchBuiltin.1("[", same1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L141() else L140(i44, dr10);
  L140(i46, same3):
    _in_1 = ldf `%in%`;
    check L142() else D42();
  D42():
    deopt 177 [i46, same3];
  D44():
    deopt 185 [i48];
  L141():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L29(i44, dx11);
  L142():
    p5 = prom<V +>{
      same4 = ld same;
      same5 = force? same4;
      checkMissing(same5);
      return same5;
    };
    p6 = prom<V +>{
      dont_mind = ld `dont.mind`;
      dont_mind1 = force? dont_mind;
      checkMissing(dont_mind1);
      return dont_mind1;
    };
    r78 = dyn _in_1(p5, p6);
    check L143() else D43();
  L144():
    p8 = prom<V +>{
      startsWith1 = ldf startsWith;
      p7 = prom<V +>{
        same6 = ld same;
        same7 = force? same6;
        checkMissing(same7);
        return same7;
      };
      r82 = dyn startsWith1(p7, ".__");
      return r82;
    };
    r84 = dyn which(p8);
    check L145() else D45();
  D43():
    deopt 180 [i46, same3, r78];
  D45():
    deopt 187 [i48, r84];
  L143():
    r79 = `!`(r78);
    __5 = ldf `[` in base;
    r80 = dyn __5(same3, r79);
    goto L29(i46, r80);
  L145():
    st Classobjs = r84;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L146() else L147();
  L30(i51, r86):
    c14 = `as.logical`(r86);
    if c14 then L150() else L31();
  L146():
    Classobjs = ld Classobjs;
    check L148() else D46();
  L147():
    r85 = dyn base15(<sym Classobjs>);
    goto L30(i48, r85);
  D46():
    deopt 191 [i48, Classobjs];
  L31():
    goto L33(i51);
  L33(i58):
    r90 = clos inner1105644068;
    st `same.isFn` = r90;
    same12 = ld same;
    check L157() else D50();
  L148():
    Classobjs1 = force? Classobjs;
    checkMissing(Classobjs1);
    length = ldf length in base;
    r87 = dyn length(Classobjs1);
    check L149() else D47();
  L150():
    same8 = ld same;
    check L151() else D48();
  D47():
    deopt 194 [i48, r87];
  D48():
    deopt 195 [i51, same8];
  D50():
    deopt 207 [i58, same12];
  L149():
    goto L30(i48, r87);
  L151():
    same9 = force? same8;
    checkMissing(same9);
    c15 = `is.object`(same9);
    if c15 then L152() else L153(i51, same9);
  L157():
    same13 = force? same12;
    checkMissing(same13);
    c16 = `is.object`(same13);
    if c16 then L158() else L159(i58, same13);
  L32(i57, dx14):
    st same = dx14;
    goto L33(i57);
  L34(i62, dx17):
    st same = dx17;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L165() else L166();
  L152():
    dr12 = tryDispatchBuiltin.1("[", same9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L154() else L153(i51, dr12);
  L153(i55, same11):
    Classobjs2 = ld Classobjs;
    check L155() else D49();
  L158():
    dr14 = tryDispatchBuiltin.1("[", same13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L160() else L159(i58, dr14);
  L159(i60, same15):
    same_isFn = ldf `same.isFn`;
    check L161() else D51();
  D49():
    deopt 197 [i55, same11, Classobjs2];
  D51():
    deopt 210 [i60, same15];
  L35(i67, r98):
    c17 = `as.logical`(r98);
    if c17 then L169() else L36();
  L154():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L32(i51, dx13);
  L155():
    Classobjs3 = force? Classobjs2;
    checkMissing(Classobjs3);
    r88 = `-`(<missing>, Classobjs3);
    __6 = ldf `[` in base;
    r89 = dyn __6(same11, r88);
    goto L32(i55, r89);
  L160():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L34(i58, dx16);
  L161():
    p9 = prom<V +>{
      i63 = ld i;
      i64 = force? i63;
      checkMissing(i64);
      return i64;
    };
    r92 = dyn same_isFn(p9);
    check L162() else D52();
  L165():
    same16 = ld same;
    check L167() else D55();
  L166():
    r97 = dyn base16(<sym same>);
    goto L35(i62, r97);
  D52():
    deopt 212 [i60, same15, r92];
  D55():
    deopt 221 [i62, same16];
  L36():
    goto L41(i67, NULL);
  L41(i93, r121):
    goto L42(i93);
  L162():
    same_isFn1 = ldf `same.isFn`;
    check L163() else D53();
  L167():
    same17 = force? same16;
    checkMissing(same17);
    length1 = ldf length in base;
    r99 = dyn length1(same17);
    check L168() else D56();
  L169():
    sym17 = ldf sum;
    base17 = ldf sum in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L170() else L171();
  D53():
    deopt 213 [i60, same15, r92];
  D56():
    deopt 224 [i62, r99];
  L37(i72, r101):
    r105 = `>`(r101, 1);
    c19 = `as.logical`(r105);
    if c19 then L179() else L39();
  L163():
    p10 = prom<V +>{
      lib_pos4 = ld `lib.pos`;
      lib_pos5 = force? lib_pos4;
      checkMissing(lib_pos5);
      return lib_pos5;
    };
    r94 = dyn same_isFn1(p10);
    check L164() else D54();
  L168():
    goto L35(i62, r99);
  L170():
    sp6 = ld sp;
    check L172() else D57();
  L171():
    r100 = dyn base17(<lang `==`(sp, `[`(sp, i))>);
    goto L37(i67, r100);
  D54():
    deopt 215 [i60, same15, r92, r94];
  D57():
    deopt 227 [i67, sp6];
  L39():
    sp20 = ld sp;
    check L183() else D63();
  L40(i85, r110):
    st pkg = r110;
    packageStartupMessage = ldf packageStartupMessage;
    check L188() else D65();
  L164():
    r95 = `==`(r92, r94);
    __7 = ldf `[` in base;
    r96 = dyn __7(same15, r95);
    goto L34(i60, r96);
  L172():
    sp7 = force? sp6;
    checkMissing(sp7);
    sp8 = ld sp;
    check L173() else D58();
  L179():
    sprintf = ldf sprintf;
    check L180() else D61();
  D58():
    deopt 228 [i67, sp7, sp8];
  D61():
    deopt 239 [i72];
  D63():
    deopt 244 [i72, sp20];
  D65():
    deopt 251 [i85];
  L173():
    sp9 = force? sp8;
    checkMissing(sp9);
    c18 = `is.object`(sp9);
    if c18 then L174() else L175(i67, sp7, sp9);
  L180():
    p11 = prom<V +>{
      sp16 = ld sp;
      sp17 = force? sp16;
      checkMissing(sp17);
      c20 = `is.object`(sp17);
      if c20 then L1() else L2(sp17);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("[", sp17);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(sp19):
      i81 = ld i;
      i82 = force? i81;
      __9 = ldf `[` in base;
      r106 = dyn __9(sp19, i82);
      goto L0(r106);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p12 = prom<V +>{
      i83 = ld i;
      i84 = force? i83;
      checkMissing(i84);
      return i84;
    };
    r109 = dyn sprintf("%s (pos = %d)", p11, p12);
    check L181() else D62();
  L183():
    sp21 = force? sp20;
    checkMissing(sp21);
    c21 = `is.object`(sp21);
    if c21 then L184() else L185(i72, sp21);
  L188():
    p17 = prom<V +>{
      _maskedMsg = ldf `.maskedMsg`;
      p14 = prom<V +>{
        sort = ldf sort;
        p13 = prom<V +>{
          same18 = ld same;
          same19 = force? same18;
          checkMissing(same19);
          return same19;
        };
        r113 = dyn sort(p13);
        return r113;
      };
      p15 = prom<V +>{
        pkg = ld pkg;
        pkg1 = force? pkg;
        checkMissing(pkg1);
        return pkg1;
      };
      p16 = prom<V +>{
        i91 = ld i;
        i92 = force? i91;
        checkMissing(i92);
        lib_pos6 = ld `lib.pos`;
        lib_pos7 = force? lib_pos6;
        checkMissing(lib_pos7);
        r116 = `<`(i92, lib_pos7);
        return r116;
      };
      r118 = dyn _maskedMsg[, , by](p14, p15, p16);
      return r118;
    };
    r120 = dyn packageStartupMessage[, domain](p17, NA_LGL);
    check L189() else D66();
  D62():
    deopt 243 [i72, r109];
  D66():
    deopt 255 [i85, r120];
  L38(i76, sp15, dx19):
    r103 = `==`(sp15, dx19);
    sum = ldf sum in base;
    r104 = dyn sum(r103);
    check L178() else D60();
  L174():
    dr16 = tryDispatchBuiltin.1("[", sp9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L176() else L175(i67, sp7, dr16);
  L175(i74, sp12, sp13):
    i77 = ld i;
    check L177() else D59();
  L181():
    goto L40(i72, r109);
  L184():
    dr20 = tryDispatchBuiltin.1("[", sp21);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L186() else L185(i72, dr20);
  L185(i87, sp23):
    i89 = ld i;
    check L187() else D64();
  L189():
    goto L41(i85, r120);
  D59():
    deopt 230 [i74, sp12, sp13, i77];
  D60():
    deopt 235 [i76, r104];
  D64():
    deopt 246 [i87, sp23, i89];
  L176():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L38(i67, sp7, dx18);
  L177():
    i78 = force? i77;
    __8 = ldf `[` in base;
    r102 = dyn __8(sp13, i78);
    goto L38(i74, sp12, r102);
  L178():
    goto L37(i76, r104);
  L186():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L40(i72, dx22);
  L187():
    i90 = force? i89;
    __10 = ldf `[` in base;
    r111 = dyn __10(sp23, i90);
    goto L40(i87, r111);
  }
}
fun inner1105644068(where) {
  (reg where:*) -+> V { var where:*, reg vapply:cls, reg same:*, reg same1:V, reg p:p(V +), reg exists:*, reg exists1:V, reg p1:p(V +), reg where1:*, reg where2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st where = where;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      same = ld same;
      same1 = force? same;
      checkMissing(same1);
      return same1;
    };
    p1 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r3 = dyn vapply[, , , where, mode, inherits](p, p1, NA_LGL, p2, "function", FALSE);
    check L1() else D1();
  D1():
    deopt 11 [r3];
  L1():
    popenv;
    return r3;
  }
}