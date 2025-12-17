fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2384130294;
    st formatOL = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2384130294(x, type, offset, start, width) {
  (reg x:*, reg type:*, reg offset:*, reg start:*, reg width:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var start:*, reg start_isMissing:L, reg start_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg character:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c2:cls, reg r15:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg type_tokens:*, reg type_tokens1:V, reg type_full_names:*, reg type_full_names1:V, reg c3:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg type3:*, reg type4:V, reg nchar:cls, reg r24:V, reg r25:V, reg c4:L, reg type_tokens2:*, reg type_tokens3:V, reg c5:L, reg type_tokens5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg type_tokens8:V, reg r27:V, reg type5:*, reg type6:V, reg type_full_names2:*, reg type_full_names3:V, reg match:cls, reg r28:V, reg __:cls, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg x3:*, reg x4:V, reg length1:cls, reg r32:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg start1:*, reg start2:V, reg c6:L, reg start4:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r35:V, reg len:*, reg len1:V, reg seq_int:cls, reg r36:V, reg labels:*, reg labels1:V, reg c7:L, reg labels3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg len2:*, reg len3:V, reg __2:cls, reg r37:V, reg _in_:cls, reg type7:*, reg type8:V, reg p3:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg c8:cls, reg r41:V, reg p4:p(V +), reg r43:V, reg c9:L, reg upper:*, reg upper1:V, reg r44:V, reg c10:L, reg stop:cls, reg gettextf:cls, reg r45:V, reg p5:p(V +), reg r47:V, reg type9:*, reg type10:V, reg r49:V, reg c11:L, reg LETTERS:*, reg LETTERS1:V, reg c12:L, reg LETTERS3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg labels4:*, reg labels5:V, reg __3:cls, reg r50:V, reg dx9:V, reg letters:*, reg letters1:V, reg c13:L, reg letters3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg labels6:*, reg labels7:V, reg __4:cls, reg r51:V, reg _in_1:cls, reg type11:*, reg type12:V, reg p6:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg c14:cls, reg r55:V, reg p7:p(V +), reg r57:V, reg c15:L, reg upper2:*, reg upper3:V, reg r58:V, reg c16:L, reg stop1:cls, reg gettextf1:cls, reg r59:V, reg p8:p(V +), reg r61:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg as_roman:cls, reg labels8:*, reg labels9:V, reg p9:p(V +), reg r66:V, reg as_character:cls, reg r67:V, reg type13:*, reg type14:V, reg r68:V, reg c17:L, reg tolower:cls, reg labels10:*, reg labels11:V, reg p10:p(V +), reg r70:V, reg r71:V, reg _format_rl_table:cls, reg sprintf:cls, reg labels12:*, reg labels13:V, reg p11:p(V +), reg r73:V, reg p12:p(V +), reg x5:*, reg x6:V, reg p13:p(V +), reg offset1:*, reg offset2:V, reg p14:p(V +), reg width1:*, reg width2:V, reg p15:p(V +), reg r78:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("arabic") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L1(0.0) else L1(offset);
  L1(offset_orDefault):
    st offset = offset_orDefault;
    start_isMissing = missing.0(start);
    if start_isMissing then L2(1.0) else L2(start);
  L2(start_orDefault):
    st start = start_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L3() else L4(width);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.9, r);
      return r1;
    };
    goto L4(p);
  L4(width_orDefault):
    st width = width_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L5(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L36() else L6();
  L32():
    x1 = ld x;
    check L34() else D0();
  L33():
    r3 = dyn base(<sym x>);
    goto L5(r3);
  D0():
    deopt 2 [x1];
  L6():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L34():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r5 = dyn length(x2);
    check L35() else D1();
  L36():
    character = ldf character;
    check L37() else D2();
  D1():
    deopt 5 [r5];
  D2():
    deopt 8 [];
  L8(r11):
    st type_tokens = r11;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L35():
    goto L5(r5);
  L37():
    r7 = dyn character();
    check L38() else D3();
  L41():
    c1 = ldf c in base;
    r12 = dyn c1("1", "A", "a", "I", "i");
    check L43() else D4();
  L42():
    r10 = dyn base1("1", "A", "a", "I", "i");
    goto L8(r10);
  D3():
    deopt 9 [r7];
  D4():
    deopt 21 [r12];
  L9(r14):
    st type_full_names = r14;
    match_arg = ldf `match.arg`;
    check L47() else D6();
  L38():
    popenv;
    return r7;
  L43():
    goto L8(r12);
  L44():
    c2 = ldf c in base;
    r15 = dyn c2("arabic", "Alph", "alph", "Roman", "roman");
    check L46() else D5();
  L45():
    r13 = dyn base2("arabic", "Alph", "alph", "Roman", "roman");
    goto L9(r13);
  D5():
    deopt 31 [r15];
  D6():
    deopt 34 [];
  L46():
    goto L9(r15);
  L47():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      type_tokens = ld type_tokens;
      type_tokens1 = force? type_tokens;
      checkMissing(type_tokens1);
      type_full_names = ld type_full_names;
      type_full_names1 = force? type_full_names;
      checkMissing(type_full_names1);
      c3 = ldf c in base;
      r19 = dyn c3(type_tokens1, type_full_names1);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym type_tokens>, <sym type_full_names>);
      goto L0(r17);
    };
    r21 = dyn match_arg(p1, p2);
    check L48() else D7();
  D7():
    deopt 37 [r21];
  L48():
    st type = r21;
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L10(r23):
    r25 = `>`(r23, 1);
    c4 = `as.logical`(r25);
    if c4 then L53() else L11();
  L49():
    type3 = ld type;
    check L51() else D8();
  L50():
    r22 = dyn base4(<sym type>, "b");
    goto L10(r22);
  D8():
    deopt 41 [type3];
  L11():
    goto L14();
  L14():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L51():
    type4 = force? type3;
    checkMissing(type4);
    nchar = ldf nchar in base;
    r24 = dyn nchar(type4, "b", FALSE, NA_LGL);
    check L52() else D9();
  L53():
    type_tokens2 = ld type_tokens;
    check L54() else D10();
  D9():
    deopt 47 [r24];
  D10():
    deopt 50 [type_tokens2];
  L15(r31):
    st len = r31;
    sym7 = ldf `seq.int`;
    base7 = ldf `seq.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L52():
    goto L10(r24);
  L54():
    type_tokens3 = force? type_tokens2;
    checkMissing(type_tokens3);
    c5 = `is.object`(type_tokens3);
    if c5 then L55() else L56(type_tokens3);
  L64():
    x3 = ld x;
    check L66() else D14();
  L65():
    r30 = dyn base6(<sym x>);
    goto L15(r30);
  D14():
    deopt 68 [x3];
  L12(dx1):
    st type = dx1;
    goto L14();
  L16(r34):
    st labels = r34;
    labels = ld labels;
    check L76() else D19();
  L55():
    dr = tryDispatchBuiltin.1("[", type_tokens3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L57() else L56(dr);
  L56(type_tokens5):
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L66():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r32 = dyn length1(x4);
    check L67() else D15();
  L68():
    start1 = ld start;
    check L70() else D16();
  L69():
    r33 = dyn base7[, `length.out`](<lang `[`(start, 1)>, <sym len>);
    goto L16(r33);
  D15():
    deopt 71 [r32];
  D16():
    deopt 75 [start1];
  D19():
    deopt 86 [labels];
  L13(type_tokens8, r27):
    __ = ldf `[` in base;
    r29 = dyn __(type_tokens8, r27);
    goto L12(r29);
  L57():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L58():
    type5 = ld type;
    check L60() else D11();
  L59():
    r26 = dyn base5(<sym type>, <sym type_full_names>);
    goto L13(type_tokens5, r26);
  L67():
    goto L15(r32);
  L70():
    start2 = force? start1;
    checkMissing(start2);
    c6 = `is.object`(start2);
    if c6 then L71() else L72(start2);
  L76():
    labels1 = force? labels;
    checkMissing(labels1);
    c7 = `is.object`(labels1);
    if c7 then L77() else L78(labels1);
  D11():
    deopt 54 [type_tokens5, type5];
  L17(dx4):
    len = ld len;
    check L74() else D17();
  L18(dx6):
    st upper = dx6;
    _in_ = ldf `%in%`;
    check L81() else D21();
  L60():
    type6 = force? type5;
    checkMissing(type6);
    type_full_names2 = ld type_full_names;
    check L61() else D12();
  L71():
    dr2 = tryDispatchBuiltin.1("[", start2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(start4):
    __1 = ldf `[` in base;
    r35 = dyn __1(start4, 1);
    goto L17(r35);
  L77():
    dr4 = tryDispatchBuiltin.1("[", labels1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L79() else L78(dr4);
  L78(labels3):
    len2 = ld len;
    check L80() else D20();
  D12():
    deopt 56 [type_tokens5, type_full_names2];
  D17():
    deopt 80 [len];
  D20():
    deopt 88 [labels3, len2];
  D21():
    deopt 93 [];
  L61():
    type_full_names3 = force? type_full_names2;
    checkMissing(type_full_names3);
    match = ldf match in base;
    r28 = dyn match(type6, type_full_names3, NA_INT, NULL);
    check L62() else D13();
  L73():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx3);
  L74():
    len1 = force? len;
    checkMissing(len1);
    seq_int = ldf `seq.int` in base;
    r36 = dyn seq_int(dx4, len1);
    check L75() else D18();
  L79():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx5);
  L80():
    len3 = force? len2;
    __2 = ldf `[` in base;
    r37 = dyn __2(labels3, len3);
    goto L18(r37);
  L81():
    p3 = prom<V +>{
      type7 = ld type;
      type8 = force? type7;
      checkMissing(type8);
      return type8;
    };
    p4 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c8 = ldf c in base;
      r41 = dyn c8("A", "a");
      goto L0(r41);
    L2():
      r39 = dyn base8("A", "a");
      goto L0(r39);
    };
    r43 = dyn _in_(p3, p4);
    check L82() else D22();
  D13():
    deopt 61 [type_tokens5, r28];
  D18():
    deopt 84 [r36];
  D22():
    deopt 96 [r43];
  L62():
    goto L13(type_tokens5, r28);
  L75():
    goto L16(r36);
  L82():
    c9 = `as.logical`(r43);
    if c9 then L83() else L19();
  L19():
    _in_1 = ldf `%in%`;
    check L103() else D31();
  L25():
    _format_rl_table = ldf `.format_rl_table`;
    check L122() else D42();
  L83():
    upper = ld upper;
    check L84() else D23();
  D23():
    deopt 97 [upper];
  D31():
    deopt 125 [];
  D42():
    deopt 164 [];
  L84():
    upper1 = force? upper;
    checkMissing(upper1);
    r44 = `>`(upper1, 26);
    c10 = `as.logical`(r44);
    if c10 then L85() else L20();
  L103():
    p6 = prom<V +>{
      type11 = ld type;
      type12 = force? type11;
      checkMissing(type12);
      return type12;
    };
    p7 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      c14 = ldf c in base;
      r55 = dyn c14("I", "i");
      goto L0(r55);
    L2():
      r53 = dyn base9("I", "i");
      goto L0(r53);
    };
    r57 = dyn _in_1(p6, p7);
    check L104() else D32();
  L122():
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p11 = prom<V +>{
        labels12 = ld labels;
        labels13 = force? labels12;
        checkMissing(labels13);
        return labels13;
      };
      r73 = dyn sprintf("%s.", p11);
      return r73;
    };
    p13 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p14 = prom<V +>{
      offset1 = ld offset;
      offset2 = force? offset1;
      checkMissing(offset2);
      return offset2;
    };
    p15 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    r78 = dyn _format_rl_table(p12, p13, p14, p15);
    check L123() else D43();
  D32():
    deopt 128 [r57];
  D43():
    deopt 169 [r78];
  L20():
    goto L21();
  L21():
    type9 = ld type;
    check L89() else D26();
  L85():
    stop = ldf stop;
    check L86() else D24();
  L104():
    c15 = `as.logical`(r57);
    if c15 then L105() else L26();
  L123():
    popenv;
    return r78;
  D24():
    deopt 102 [];
  D26():
    deopt 109 [type9];
  L26():
    goto L25();
  L86():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      r45 = dyn gettextf("too many list items (at most up to %d)", 26);
      return r45;
    };
    r47 = dyn stop[, domain](p5, NA_LGL);
    check L87() else D25();
  L89():
    type10 = force? type9;
    checkMissing(type10);
    r49 = `==`(type10, "A");
    c11 = `as.logical`(r49);
    if c11 then L90() else L22();
  L105():
    upper2 = ld upper;
    check L106() else D33();
  D25():
    deopt 106 [r47];
  D33():
    deopt 129 [upper2];
  L22():
    letters = ld letters;
    check L97() else D29();
  L24(dx9):
    st labels = dx9;
    goto L25();
  L87():
    goto L21();
  L90():
    LETTERS = ld LETTERS;
    check L91() else D27();
  L106():
    upper3 = force? upper2;
    checkMissing(upper3);
    r58 = `>`(upper3, 3999);
    c16 = `as.logical`(r58);
    if c16 then L107() else L27();
  D27():
    deopt 113 [LETTERS];
  D29():
    deopt 118 [letters];
  L27():
    goto L28();
  L28():
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L91():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c12 = `is.object`(LETTERS1);
    if c12 then L92() else L93(LETTERS1);
  L97():
    letters1 = force? letters;
    checkMissing(letters1);
    c13 = `is.object`(letters1);
    if c13 then L98() else L99(letters1);
  L107():
    stop1 = ldf stop;
    check L108() else D34();
  D34():
    deopt 134 [];
  L23(dx8):
    goto L24(dx8);
  L29(r64):
    st labels = r64;
    type13 = ld type;
    check L116() else D39();
  L92():
    dr6 = tryDispatchBuiltin.1("[", LETTERS1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L94() else L93(dr6);
  L93(LETTERS3):
    labels4 = ld labels;
    check L95() else D28();
  L98():
    dr8 = tryDispatchBuiltin.1("[", letters1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L100() else L99(dr8);
  L99(letters3):
    labels6 = ld labels;
    check L101() else D30();
  L108():
    p8 = prom<V +>{
      gettextf1 = ldf gettextf;
      r59 = dyn gettextf1("too many list items (at most up to %d)", 3999);
      return r59;
    };
    r61 = dyn stop1[, domain](p8, NA_LGL);
    check L109() else D35();
  L111():
    as_roman = ldf `as.roman`;
    check L113() else D36();
  L112():
    r63 = dyn base10(<lang as.roman(labels)>);
    goto L29(r63);
  D28():
    deopt 115 [LETTERS3, labels4];
  D30():
    deopt 120 [letters3, labels6];
  D35():
    deopt 138 [r61];
  D36():
    deopt 144 [];
  D39():
    deopt 150 [type13];
  L94():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L23(dx7);
  L95():
    labels5 = force? labels4;
    __3 = ldf `[` in base;
    r50 = dyn __3(LETTERS3, labels5);
    goto L23(r50);
  L100():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx10);
  L101():
    labels7 = force? labels6;
    __4 = ldf `[` in base;
    r51 = dyn __4(letters3, labels7);
    goto L24(r51);
  L109():
    goto L28();
  L113():
    p9 = prom<V +>{
      labels8 = ld labels;
      labels9 = force? labels8;
      checkMissing(labels9);
      return labels9;
    };
    r66 = dyn as_roman(p9);
    check L114() else D37();
  L116():
    type14 = force? type13;
    checkMissing(type14);
    r68 = `==`(type14, "i");
    c17 = `as.logical`(r68);
    if c17 then L117() else L30();
  D37():
    deopt 146 [r66];
  L30():
    goto L31(NULL);
  L31(r71):
    goto L25();
  L114():
    as_character = ldf `as.character` in base;
    r67 = dyn as_character(r66);
    check L115() else D38();
  L117():
    tolower = ldf tolower;
    check L118() else D40();
  D38():
    deopt 148 [r67];
  D40():
    deopt 155 [];
  L115():
    goto L29(r67);
  L118():
    p10 = prom<V +>{
      labels10 = ld labels;
      labels11 = force? labels10;
      checkMissing(labels11);
      return labels11;
    };
    r70 = dyn tolower(p10);
    check L119() else D41();
  D41():
    deopt 157 [r70];
  L119():
    st labels = r70;
    goto L31(r70);
  }
}