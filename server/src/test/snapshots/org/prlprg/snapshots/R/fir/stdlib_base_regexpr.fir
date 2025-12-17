fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4170804266;
    st regexpr = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4170804266(pattern, text, `ignore.case`, perl, fixed, useBytes) {
  (reg pattern:*, reg text:*, reg ignore_case:*, reg perl:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var text:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg is_factor:cls, reg text1:*, reg text2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg levels:cls, reg text3:*, reg text4:V, reg p1:p(V +), reg r5:V, reg length:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c8:L, reg r10:V, reg r11:V, reg text5:*, reg text6:V, reg length1:cls, reg r12:V, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg regexpr:cls, reg pattern1:*, reg pattern2:V, reg p2:p(V +), reg levels1:cls, reg text7:*, reg text8:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p5:p(V +), reg perl1:*, reg perl2:V, reg p6:p(V +), reg fixed1:*, reg fixed2:V, reg p7:p(V +), reg useBytes1:*, reg useBytes2:V, reg p8:p(V +), reg r22:V, reg structure:cls, reg out:*, reg out1:V, reg c13:L, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg text9:*, reg text10:V, reg __:cls, reg r23:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg out4:*, reg out5:V, reg attr:cls, reg r27:V, reg c14:L, reg r29:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg text11:*, reg text12:V, reg __1:cls, reg r30:V, reg p10:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg out6:*, reg out7:V, reg attr1:cls, reg r34:V, reg p11:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg out8:*, reg out9:V, reg attr2:cls, reg r38:V, reg p12:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg out10:*, reg out11:V, reg attr3:cls, reg r42:V, reg c15:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg text13:*, reg text14:V, reg __2:cls, reg r45:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg out12:*, reg out13:V, reg attr4:cls, reg r49:V, reg c16:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg text15:*, reg text16:V, reg __3:cls, reg r52:V, reg p14:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg out14:*, reg out15:V, reg attr5:cls, reg r56:V, reg p15:p(V +), reg r58:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg text17:*, reg text18:V, reg c17:L, reg r61:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg text19:*, reg text20:V, reg as_character:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg pattern3:*, reg pattern4:V, reg as_character1:cls, reg r70:V, reg text21:*, reg text22:V, reg ignore_case3:*, reg ignore_case4:V, reg perl3:*, reg perl4:V, reg fixed3:*, reg fixed4:V, reg useBytes3:*, reg useBytes4:V, reg regexpr1:cls, reg r71:V |
    mkenv;
    st pattern = pattern;
    st text = text;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L2(FALSE) else L2(fixed);
  L2(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    is_factor = ldf `is.factor`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r1 = dyn is_factor(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    c = `as.logical`(r1);
    if c then L16() else L4(c);
  L4(c2):
    c12 = `as.logical`(c2);
    if c12 then L27() else L7();
  L16():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L5(c5, r3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L7():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L33() else L34();
  L17():
    levels = ldf levels;
    check L19() else D2();
  L18():
    r2 = dyn base(<lang levels(text)>);
    goto L5(c, r2);
  L27():
    regexpr = ldf regexpr;
    check L28() else D7();
  D2():
    deopt 7 [c];
  D7():
    deopt 20 [];
  L6(c8, r10, r11):
    r13 = `<`(r10, r11);
    c9 = `as.logical`(r13);
    c10 = `&&`(c8, c9);
    goto L4(c10);
  L8(r60):
    r61 = `!`(r60);
    c18 = `as.logical`(r61);
    if c18 then L36() else L9();
  L19():
    p1 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    r5 = dyn levels(p1);
    check L20() else D3();
  L22():
    text5 = ld text;
    check L24() else D5();
  L23():
    r9 = dyn base1(<sym text>);
    goto L6(c5, r3, r9);
  L28():
    p2 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p4 = prom<V +>{
      levels1 = ldf levels;
      p3 = prom<V +>{
        text7 = ld text;
        text8 = force? text7;
        checkMissing(text8);
        return text8;
      };
      r16 = dyn levels1(p3);
      return r16;
    };
    p5 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    p6 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p7 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p8 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r22 = dyn regexpr(p2, p4, p5, p6, p7, p8);
    check L29() else D8();
  L33():
    text17 = ld text;
    check L35() else D11();
  L34():
    r59 = dyn base8(<sym text>);
    goto L8(r59);
  D3():
    deopt 9 [c, r5];
  D5():
    deopt 13 [c5, r3, text5];
  D8():
    deopt 27 [r22];
  D11():
    deopt 46 [text17];
  L9():
    goto L11();
  L11():
    sym10 = ldf `.Internal`;
    base10 = ldf `.Internal` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L42() else L43();
  L20():
    length = ldf length in base;
    r6 = dyn length(r5);
    check L21() else D4();
  L24():
    text6 = force? text5;
    checkMissing(text6);
    length1 = ldf length in base;
    r12 = dyn length1(text6);
    check L25() else D6();
  L29():
    st out = r22;
    structure = ldf structure;
    check L30() else D9();
  L35():
    text18 = force? text17;
    checkMissing(text18);
    c17 = `is.character`(text18);
    goto L8(c17);
  L36():
    sym9 = ldf `as.character`;
    base9 = ldf `as.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L37() else L38();
  D4():
    deopt 11 [c, r6];
  D6():
    deopt 16 [c5, r3, r12];
  D9():
    deopt 30 [];
  L10(r63):
    st text = r63;
    goto L11();
  L12(r67):
    popenv;
    return r67;
  L21():
    goto L5(c, r6);
  L25():
    goto L6(c5, r3, r12);
  L30():
    p9 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      c13 = `is.object`(out1);
      if c13 then L1() else L2(out1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", out1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(out3):
      text9 = ld text;
      text10 = force? text9;
      __ = ldf `[` in base;
      r23 = dyn __(out3, text10);
      goto L0(r23);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p10 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r26):
      c14 = `is.object`(r26);
      if c14 then L4() else L5(r26);
    L2():
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      attr = ldf attr in base;
      r27 = dyn attr(out5, "match.length");
      goto L0(r27);
    L3():
      r25 = dyn base2(<sym out>, "match.length");
      goto L0(r25);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r26);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r29):
      text11 = ld text;
      text12 = force? text11;
      __1 = ldf `[` in base;
      r30 = dyn __1(r29, text12);
      goto L1(r30);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    p11 = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      attr1 = ldf attr in base;
      r34 = dyn attr1(out7, "index.type");
      goto L0(r34);
    L2():
      r32 = dyn base3(<sym out>, "index.type");
      goto L0(r32);
    };
    p12 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      attr2 = ldf attr in base;
      r38 = dyn attr2(out9, "useBytes");
      goto L0(r38);
    L2():
      r36 = dyn base4(<sym out>, "useBytes");
      goto L0(r36);
    };
    p13 = prom<V +>{
      sym5 = ldf attr;
      base5 = ldf attr in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r41):
      c15 = `is.object`(r41);
      if c15 then L4() else L5();
    L2():
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      attr3 = ldf attr in base;
      r42 = dyn attr3(out11, "capture.start");
      goto L0(r42);
    L3():
      r40 = dyn base5(<sym out>, "capture.start");
      goto L0(r40);
    L1(dx5):
      return dx5;
    L4():
      dr4 = tryDispatchBuiltin.1("[", r41);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5();
    L5():
      text13 = ld text;
      text14 = force? text13;
      __2 = ldf `[` in base;
      r45 = dyn __2(r41, text14, <missing>, FALSE);
      goto L1(r45);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    p14 = prom<V +>{
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r48):
      c16 = `is.object`(r48);
      if c16 then L4() else L5();
    L2():
      out12 = ld out;
      out13 = force? out12;
      checkMissing(out13);
      attr4 = ldf attr in base;
      r49 = dyn attr4(out13, "capture.length");
      goto L0(r49);
    L3():
      r47 = dyn base6(<sym out>, "capture.length");
      goto L0(r47);
    L1(dx7):
      return dx7;
    L4():
      dr6 = tryDispatchBuiltin.1("[", r48);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5();
    L5():
      text15 = ld text;
      text16 = force? text15;
      __3 = ldf `[` in base;
      r52 = dyn __3(r48, text16, <missing>, FALSE);
      goto L1(r52);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    p15 = prom<V +>{
      sym7 = ldf attr;
      base7 = ldf attr in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      out14 = ld out;
      out15 = force? out14;
      checkMissing(out15);
      attr5 = ldf attr in base;
      r56 = dyn attr5(out15, "capture.names");
      goto L0(r56);
    L2():
      r54 = dyn base7(<sym out>, "capture.names");
      goto L0(r54);
    };
    r58 = dyn structure[, `match.length`, `index.type`, useBytes, `capture.start`, `capture.length`, `capture.names`](p9, p10, p11, p12, p13, p14, p15);
    check L31() else D10();
  L37():
    text19 = ld text;
    check L39() else D12();
  L38():
    r62 = dyn base9(<sym text>);
    goto L10(r62);
  L42():
    sym11 = ldf `as.character`;
    base11 = ldf `as.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L44() else L45();
  L43():
    r66 = dyn base10(<lang regexpr(as.character(pattern), text, ignore.case, perl, fixed, useBytes)>);
    goto L12(r66);
  D10():
    deopt 44 [r58];
  D12():
    deopt 52 [text19];
  L13(r69):
    text21 = ld text;
    check L48() else D16();
  L31():
    popenv;
    return r58;
  L39():
    text20 = force? text19;
    checkMissing(text20);
    as_character = ldf `as.character` in base;
    r64 = dyn as_character(text20);
    check L40() else D13();
  L44():
    pattern3 = ld pattern;
    check L46() else D14();
  L45():
    r68 = dyn base11(<sym pattern>);
    goto L13(r68);
  D13():
    deopt 55 [r64];
  D14():
    deopt 63 [pattern3];
  D16():
    deopt 67 [text21];
  L40():
    goto L10(r64);
  L46():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    as_character1 = ldf `as.character` in base;
    r70 = dyn as_character1(pattern4);
    check L47() else D15();
  L48():
    text22 = force? text21;
    checkMissing(text22);
    ignore_case3 = ld `ignore.case`;
    check L49() else D17();
  D15():
    deopt 66 [r70];
  D17():
    deopt 69 [ignore_case3];
  L47():
    goto L13(r70);
  L49():
    ignore_case4 = force? ignore_case3;
    checkMissing(ignore_case4);
    perl3 = ld perl;
    check L50() else D18();
  D18():
    deopt 71 [perl3];
  L50():
    perl4 = force? perl3;
    checkMissing(perl4);
    fixed3 = ld fixed;
    check L51() else D19();
  D19():
    deopt 73 [fixed3];
  L51():
    fixed4 = force? fixed3;
    checkMissing(fixed4);
    useBytes3 = ld useBytes;
    check L52() else D20();
  D20():
    deopt 75 [useBytes3];
  L52():
    useBytes4 = force? useBytes3;
    checkMissing(useBytes4);
    regexpr1 = ldf regexpr in base;
    r71 = dyn regexpr1(r69, text22, ignore_case4, perl4, fixed4, useBytes4);
    check L53() else D21();
  D21():
    deopt 78 [r71];
  L53():
    goto L12(r71);
  }
}