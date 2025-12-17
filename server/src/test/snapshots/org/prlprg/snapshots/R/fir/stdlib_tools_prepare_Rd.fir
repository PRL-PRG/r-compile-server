fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4280342993;
    st prepare_Rd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4280342993(Rd, encoding, defines, stages, fragment, options, stage2, stage3, `...`, msglevel) {
  (reg Rd:*, reg encoding:*, reg defines:*, reg stages:*, reg fragment:*, reg options:*, reg stage2:*, reg stage3:*, reg ddd:dots, reg msglevel:*) -+> V { var Rd:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var defines:*, reg defines_isMissing:L, reg defines_orDefault:*, var stages:*, reg stages_isMissing:L, reg stages_orDefault:*, var fragment:*, reg fragment_isMissing:L, reg fragment_orDefault:*, var options:*, reg options_isMissing:L, reg options_orDefault:*, reg RweaveRdDefaults:*, reg RweaveRdDefaults1:V, reg p:p(V +), var stage2:*, reg stage2_isMissing:L, reg stage2_orDefault:*, var stage3:*, reg stage3_isMissing:L, reg stage3_orDefault:*, var `...`:dots?, var msglevel:*, reg msglevel_isMissing:L, reg msglevel_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg Rd1:*, reg Rd2:V, reg c:L, reg c1:L, reg Rd3:*, reg Rd4:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg Rd5:*, reg Rd6:V, reg inherits:cls, reg r11:V, reg c2:L, reg summary:cls, reg Rd7:*, reg Rd8:V, reg p2:p(V +), reg r13:V, reg c3:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg parse_Rd:cls, reg Rd9:*, reg Rd10:V, reg p3:p(V +), reg encoding1:*, reg encoding2:V, reg p4:p(V +), reg fragment1:*, reg fragment2:V, reg p5:p(V +), reg ddd1:dots?, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg Rd11:*, reg Rd12:V, reg attr:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg Rd13:*, reg Rd14:V, reg attr1:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg Rd15:*, reg Rd16:V, reg attr2:cls, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg Rdfile:*, reg Rdfile1:V, reg c4:V, reg c5:L, reg c7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg c10:L, reg r33:V, reg srcref:*, reg srcref1:V, reg c11:V, reg r34:V, reg c12:L, reg c13:V, reg c15:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg srcref2:*, reg srcref3:V, reg attr3:cls, reg r37:V, reg c16:L, reg r39:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r40:V, reg fragment3:*, reg fragment4:V, reg c17:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg Rd17:*, reg Rd18:V, reg attr4:cls, reg r44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg pratt:*, reg pratt1:V, reg c18:V, reg c19:L, reg _in_:cls, reg stages1:*, reg stages2:V, reg p6:p(V +), reg r49:V, reg c20:L, reg processRdSexprs:cls, reg Rd19:*, reg Rd20:V, reg p7:p(V +), reg options1:*, reg options2:V, reg p8:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg Rd21:*, reg Rd22:V, reg attr5:cls, reg r54:V, reg p9:p(V +), reg r56:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg r59:V, reg defines1:*, reg defines2:V, reg c21:V, reg r60:V, reg c22:L, reg processRdIfdefs:cls, reg Rd23:*, reg Rd24:V, reg p10:p(V +), reg defines3:*, reg defines4:V, reg p11:p(V +), reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r65:V, reg r66:V, reg c23:cls, reg r67:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg _in_1:cls, reg stage4:*, reg stage5:V, reg p12:p(V +), reg stages3:*, reg stages4:V, reg p13:p(V +), reg r70:V, reg c25:L, reg processRdSexprs1:cls, reg Rd25:*, reg Rd26:V, reg p14:p(V +), reg stage6:*, reg stage7:V, reg p15:p(V +), reg options3:*, reg options4:V, reg p16:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r74:V, reg r75:V, reg Rd27:*, reg Rd28:V, reg attr6:cls, reg r76:V, reg p17:p(V +), reg r78:V, reg i7:I, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg concordance:*, reg concordance1:V, reg c26:V, reg c27:L, reg try:cls, reg as_Rconcordance:cls, reg unlist:cls, reg Rd29:*, reg Rd30:V, reg c28:L, reg Rd32:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg RdTags:cls, reg Rd33:*, reg Rd34:V, reg p18:p(V +), reg r83:V, reg r84:V, reg __:cls, reg r85:V, reg p19:p(V +), reg r87:V, reg p20:p(V +), reg r89:V, reg p21:p(V +), reg r91:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r92:V, reg r93:V, reg concordance2:*, reg concordance3:V, reg inherits1:cls, reg r94:V, reg c29:L, reg r95:dots, reg pratt2:*, reg pratt3:V, reg r97:V, reg c30:L, reg c32:V, reg stage8:*, reg stage9:V, reg c33:L, reg c34:V, reg c36:L, reg prepare2_Rd:cls, reg Rd35:*, reg Rd36:V, reg p22:p(V +), reg Rdfile2:*, reg Rdfile3:V, reg p23:p(V +), reg stages5:*, reg stages6:V, reg p24:p(V +), reg r101:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r103:V, reg r104:V, reg Rd37:*, reg Rd38:V, reg attr7:cls, reg r105:V, reg pratt4:*, reg pratt5:V, reg r106:V, reg c37:L, reg c39:V, reg stage10:*, reg stage11:V, reg c40:L, reg c41:V, reg c43:L, reg prepare3_Rd:cls, reg Rd39:*, reg Rd40:V, reg p25:p(V +), reg Rdfile4:*, reg Rdfile5:V, reg p26:p(V +), reg msglevel1:*, reg msglevel2:V, reg p27:p(V +), reg r110:V, reg setDynamicFlags:cls, reg Rd41:*, reg Rd42:V, reg p28:p(V +), reg apply:cls, reg sapply:cls, reg Rd43:*, reg Rd44:V, reg p29:p(V +), reg getDynamicFlags:*, reg getDynamicFlags1:V, reg p30:p(V +), reg r115:V, reg p31:p(V +), reg any:*, reg any1:V, reg p32:p(V +), reg r118:V, reg p33:p(V +), reg r120:V, reg structure:cls, reg Rd45:*, reg Rd46:V, reg p34:p(V +), reg Rdfile6:*, reg Rdfile7:V, reg p35:p(V +), reg meta:*, reg meta1:V, reg p36:p(V +), reg srcref4:*, reg srcref5:V, reg p37:p(V +), reg concordance4:*, reg concordance5:V, reg p38:p(V +), reg r126:V |
    mkenv;
    st Rd = Rd;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    defines_isMissing = missing.0(defines);
    if defines_isMissing then L1(NULL) else L1(defines);
  L1(defines_orDefault):
    st defines = defines_orDefault;
    stages_isMissing = missing.0(stages);
    if stages_isMissing then L2(NULL) else L2(stages);
  L2(stages_orDefault):
    st stages = stages_orDefault;
    fragment_isMissing = missing.0(fragment);
    if fragment_isMissing then L3(FALSE) else L3(fragment);
  L3(fragment_orDefault):
    st fragment = fragment_orDefault;
    options_isMissing = missing.0(options);
    if options_isMissing then L4() else L5(options);
  L4():
    p = prom<V +>{
      RweaveRdDefaults = ld RweaveRdDefaults;
      RweaveRdDefaults1 = force? RweaveRdDefaults;
      checkMissing(RweaveRdDefaults1);
      return RweaveRdDefaults1;
    };
    goto L5(p);
  L5(options_orDefault):
    st options = options_orDefault;
    stage2_isMissing = missing.0(stage2);
    if stage2_isMissing then L6(TRUE) else L6(stage2);
  L6(stage2_orDefault):
    st stage2 = stage2_orDefault;
    stage3_isMissing = missing.0(stage3);
    if stage3_isMissing then L7(TRUE) else L7(stage3);
  L7(stage3_orDefault):
    st stage3 = stage3_orDefault;
    st `...` = ddd;
    msglevel_isMissing = missing.0(msglevel);
    if msglevel_isMissing then L8(0.0) else L8(msglevel);
  L8(msglevel_orDefault):
    st msglevel = msglevel_orDefault;
    st concordance = NULL;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L52() else L53();
  L9(r2):
    c1 = `as.logical`(r2);
    if c1 then L55() else L10();
  L52():
    Rd1 = ld Rd;
    check L54() else D0();
  L53():
    r1 = dyn base(<sym Rd>);
    goto L9(r1);
  D0():
    deopt 4 [Rd1];
  L10():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L11():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L54():
    Rd2 = force? Rd1;
    checkMissing(Rd2);
    c = `is.character`(Rd2);
    goto L9(c);
  L55():
    Rd3 = ld Rd;
    check L56() else D1();
  D1():
    deopt 7 [Rd3];
  L12(r10):
    c2 = `as.logical`(r10);
    if c2 then L64() else L13();
  L16(r28):
    st srcref = r28;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L56():
    Rd4 = force? Rd3;
    checkMissing(Rd4);
    st Rdfile = Rd4;
    eval = ldf eval;
    check L57() else D2();
  L60():
    Rd5 = ld Rd;
    check L62() else D4();
  L61():
    r9 = dyn base2(<sym Rd>, "connection");
    goto L12(r9);
  L82():
    Rd15 = ld Rd;
    check L84() else D14();
  L83():
    r27 = dyn base5(<sym Rd>, "srcref");
    goto L16(r27);
  D2():
    deopt 11 [];
  D4():
    deopt 17 [Rd5];
  D14():
    deopt 57 [Rd15];
  L13():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L17(r31):
    c5 = `as.logical`(r31);
    if c5 then L89() else L18(c5);
  L57():
    p1 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      substitute = ldf substitute in base;
      r5 = dyn substitute(<lang parse_Rd(f, encoding=enc, fragment=frag, ...)>, <lang list(f=Rd, enc=encoding, frag=fragment)>);
      goto L0(r5);
    L2():
      r3 = dyn base1(<lang parse_Rd(f, encoding=enc, fragment=frag, ...)>, <lang list(f=Rd, enc=encoding, frag=fragment)>);
      goto L0(r3);
    };
    r7 = dyn eval(p1);
    check L58() else D3();
  L62():
    Rd6 = force? Rd5;
    checkMissing(Rd6);
    inherits = ldf inherits in base;
    r11 = dyn inherits(Rd6, "connection", FALSE);
    check L63() else D5();
  L64():
    summary = ldf summary;
    check L65() else D6();
  L84():
    Rd16 = force? Rd15;
    checkMissing(Rd16);
    attr2 = ldf attr in base;
    r29 = dyn attr2(Rd16, "srcref");
    check L85() else D15();
  L86():
    Rdfile = ld Rdfile;
    check L88() else D16();
  L87():
    r30 = dyn base6(<sym Rdfile>);
    goto L17(r30);
  D3():
    deopt 13 [r7];
  D5():
    deopt 22 [r11];
  D6():
    deopt 24 [];
  D15():
    deopt 61 [r29];
  D16():
    deopt 64 [Rdfile];
  L14(r22):
    st Rdfile = r22;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L78() else L79();
  L18(c7):
    c15 = `as.logical`(c7);
    if c15 then L94() else L20();
  L58():
    st Rd = r7;
    goto L11();
  L63():
    goto L12(r11);
  L65():
    p2 = prom<V +>{
      Rd7 = ld Rd;
      Rd8 = force? Rd7;
      checkMissing(Rd8);
      return Rd8;
    };
    r13 = dyn summary(p2);
    check L66() else D7();
  L74():
    Rd11 = ld Rd;
    check L76() else D10();
  L75():
    r21 = dyn base3(<sym Rd>, "Rdfile");
    goto L14(r21);
  L85():
    goto L16(r29);
  L88():
    Rdfile1 = force? Rdfile;
    checkMissing(Rdfile1);
    c4 = `==`(Rdfile1, NULL);
    goto L17(c4);
  L89():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  D7():
    deopt 26 [r13];
  D10():
    deopt 41 [Rd11];
  L15(r25):
    st concordance = r25;
    goto L11();
  L19(c10, r33):
    r34 = `!`(r33);
    c12 = `as.logical`(r34);
    c13 = `&&`(c10, c12);
    goto L18(c13);
  L20():
    goto L22();
  L22():
    fragment3 = ld fragment;
    check L104() else D20();
  L66():
    c3 = `is.object`(r13);
    if c3 then L68() else L69(r13);
  L76():
    Rd12 = force? Rd11;
    checkMissing(Rd12);
    attr = ldf attr in base;
    r23 = dyn attr(Rd12, "Rdfile");
    check L77() else D11();
  L78():
    Rd13 = ld Rd;
    check L80() else D12();
  L79():
    r24 = dyn base4(<sym Rd>, "concordance");
    goto L15(r24);
  L90():
    srcref = ld srcref;
    check L92() else D17();
  L91():
    r32 = dyn base7(<sym srcref>);
    goto L19(c5, r32);
  L94():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  D11():
    deopt 45 [r23];
  D12():
    deopt 49 [Rd13];
  D17():
    deopt 68 [c5, srcref];
  D20():
    deopt 84 [fragment3];
  L21(r36):
    c16 = `is.object`(r36);
    if c16 then L100() else L101(r36);
  L67(dx1):
    st Rdfile = dx1;
    parse_Rd = ldf parse_Rd;
    check L71() else D8();
  L68():
    dr = tryDispatchBuiltin.1("$", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L70() else L69(dr);
  L69(r15):
    r16 = `$`(r15, <sym description>);
    goto L67(r16);
  L77():
    goto L14(r23);
  L80():
    Rd14 = force? Rd13;
    checkMissing(Rd14);
    attr1 = ldf attr in base;
    r26 = dyn attr1(Rd14, "concordance");
    check L81() else D13();
  L92():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c11 = `==`(srcref1, NULL);
    goto L19(c5, c11);
  L95():
    srcref2 = ld srcref;
    check L97() else D18();
  L96():
    r35 = dyn base8(<sym srcref>, "srcfile");
    goto L21(r35);
  L104():
    fragment4 = force? fragment3;
    checkMissing(fragment4);
    c17 = `as.logical`(fragment4);
    if c17 then L105() else L23();
  D8():
    deopt 30 [];
  D13():
    deopt 53 [r26];
  D18():
    deopt 75 [srcref2];
  L23():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  L24():
    structure = ldf structure;
    check L174() else D53();
  L70():
    dx = getTryDispatchBuiltinValue(dr);
    goto L67(dx);
  L71():
    p3 = prom<V +>{
      Rd9 = ld Rd;
      Rd10 = force? Rd9;
      checkMissing(Rd10);
      return Rd10;
    };
    p4 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p5 = prom<V +>{
      fragment1 = ld fragment;
      fragment2 = force? fragment1;
      checkMissing(fragment2);
      return fragment2;
    };
    ddd1 = ld `...`;
    r20 = dyn parse_Rd[, encoding, fragment, `...`](p3, p4, p5, ddd1);
    check L72() else D9();
  L81():
    goto L15(r26);
  L97():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    attr3 = ldf attr in base;
    r37 = dyn attr3(srcref3, "srcfile");
    check L98() else D19();
  L99(dx3):
    st Rdfile = dx3;
    goto L22();
  L100():
    dr2 = tryDispatchBuiltin.1("$", r36);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L102() else L101(dr2);
  L101(r39):
    r40 = `$`(r39, <sym filename>);
    goto L99(r40);
  L105():
    st meta = NULL;
    goto L24();
  D9():
    deopt 37 [r20];
  D19():
    deopt 79 [r37];
  D53():
    deopt 232 [];
  L25(r43):
    st pratt = r43;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L72():
    st Rd = r20;
    goto L11();
  L98():
    goto L21(r37);
  L102():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L99(dx2);
  L107():
    Rd17 = ld Rd;
    check L109() else D21();
  L108():
    r42 = dyn base9(<sym Rd>, "prepared");
    goto L25(r42);
  L174():
    p34 = prom<V +>{
      Rd45 = ld Rd;
      Rd46 = force? Rd45;
      checkMissing(Rd46);
      return Rd46;
    };
    p35 = prom<V +>{
      Rdfile6 = ld Rdfile;
      Rdfile7 = force? Rdfile6;
      checkMissing(Rdfile7);
      return Rdfile7;
    };
    p36 = prom<V +>{
      meta = ld meta;
      meta1 = force? meta;
      checkMissing(meta1);
      return meta1;
    };
    p37 = prom<V +>{
      srcref4 = ld srcref;
      srcref5 = force? srcref4;
      checkMissing(srcref5);
      return srcref5;
    };
    p38 = prom<V +>{
      concordance4 = ld concordance;
      concordance5 = force? concordance4;
      checkMissing(concordance5);
      return concordance5;
    };
    r126 = dyn structure[, Rdfile, class, meta, srcref, concordance](p34, p35, "Rd", p36, p37, p38);
    check L175() else D54();
  D21():
    deopt 91 [Rd17];
  D54():
    deopt 244 [r126];
  L26(r46):
    c19 = `as.logical`(r46);
    if c19 then L114() else L27();
  L109():
    Rd18 = force? Rd17;
    checkMissing(Rd18);
    attr4 = ldf attr in base;
    r44 = dyn attr4(Rd18, "prepared");
    check L110() else D22();
  L111():
    pratt = ld pratt;
    check L113() else D23();
  L112():
    r45 = dyn base10(<sym pratt>);
    goto L26(r45);
  L175():
    popenv;
    return r126;
  D22():
    deopt 95 [r44];
  D23():
    deopt 98 [pratt];
  L27():
    goto L28();
  L28():
    _in_ = ldf `%in%`;
    check L116() else D24();
  L110():
    goto L25(r44);
  L113():
    pratt1 = force? pratt;
    checkMissing(pratt1);
    c18 = `==`(pratt1, NULL);
    goto L26(c18);
  L114():
    st pratt = 0;
    goto L28();
  D24():
    deopt 107 [];
  L116():
    p6 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    r49 = dyn _in_("build", p6);
    check L117() else D25();
  D25():
    deopt 110 [r49];
  L117():
    c20 = `as.logical`(r49);
    if c20 then L118() else L29();
  L29():
    goto L30();
  L30():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L122() else L123();
  L118():
    processRdSexprs = ldf processRdSexprs;
    check L119() else D26();
  D26():
    deopt 112 [];
  L31(r59):
    r60 = `!`(r59);
    c22 = `as.logical`(r60);
    if c22 then L125() else L32();
  L119():
    p7 = prom<V +>{
      Rd19 = ld Rd;
      Rd20 = force? Rd19;
      checkMissing(Rd20);
      return Rd20;
    };
    p8 = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      return options2;
    };
    p9 = prom<V +>{
      sym11 = ldf attr;
      base11 = ldf attr in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      Rd21 = ld Rd;
      Rd22 = force? Rd21;
      checkMissing(Rd22);
      attr5 = ldf attr in base;
      r54 = dyn attr5(Rd22, "macros");
      goto L0(r54);
    L2():
      r52 = dyn base11(<sym Rd>, "macros");
      goto L0(r52);
    };
    r56 = dyn processRdSexprs[, , , macros](p7, "build", p8, p9);
    check L120() else D27();
  L122():
    defines1 = ld defines;
    check L124() else D28();
  L123():
    r58 = dyn base12(<sym defines>);
    goto L31(r58);
  D27():
    deopt 118 [r56];
  D28():
    deopt 123 [defines1];
  L32():
    goto L33();
  L33():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L129() else L130();
  L120():
    st Rd = r56;
    goto L30();
  L124():
    defines2 = force? defines1;
    checkMissing(defines2);
    c21 = `==`(defines2, NULL);
    goto L31(c21);
  L125():
    processRdIfdefs = ldf processRdIfdefs;
    check L126() else D29();
  D29():
    deopt 128 [];
  L34(r66):
    s = toForSeq(r66);
    l = length(s);
    i = 0;
    goto L35(i);
  L126():
    p10 = prom<V +>{
      Rd23 = ld Rd;
      Rd24 = force? Rd23;
      checkMissing(Rd24);
      return Rd24;
    };
    p11 = prom<V +>{
      defines3 = ld defines;
      defines4 = force? defines3;
      checkMissing(defines4);
      return defines4;
    };
    r63 = dyn processRdIfdefs(p10, p11);
    check L127() else D30();
  L129():
    c23 = ldf c in base;
    r67 = dyn c23("install", "render");
    check L131() else D31();
  L130():
    r65 = dyn base13("install", "render");
    goto L34(r65);
  D30():
    deopt 131 [r63];
  D31():
    deopt 140 [r67];
  L35(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l, i2);
    if c24 then L132() else L38();
  L127():
    st Rd = r63;
    goto L33();
  L131():
    goto L34(r67);
  L38():
    x = `[[`(s, i2, NULL, TRUE);
    st stage = x;
    _in_1 = ldf `%in%`;
    check L133() else D32();
  L132():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L139() else L140();
  D32():
    deopt 142 [i2];
  L39(r81):
    c27 = `as.logical`(r81);
    if c27 then L142() else L40();
  L133():
    p12 = prom<V +>{
      stage4 = ld stage;
      stage5 = force? stage4;
      checkMissing(stage5);
      return stage5;
    };
    p13 = prom<V +>{
      stages3 = ld stages;
      stages4 = force? stages3;
      checkMissing(stages4);
      return stages4;
    };
    r70 = dyn _in_1(p12, p13);
    check L134() else D33();
  L139():
    concordance = ld concordance;
    check L141() else D36();
  L140():
    r80 = dyn base15(<sym concordance>);
    goto L39(r80);
  D33():
    deopt 145 [i2, r70];
  D36():
    deopt 161 [concordance];
  L40():
    goto L44();
  L44():
    pratt2 = ld pratt;
    check L152() else D41();
  L134():
    c25 = `as.logical`(r70);
    if c25 then L135() else L36();
  L141():
    concordance1 = force? concordance;
    checkMissing(concordance1);
    c26 = `==`(concordance1, NULL);
    goto L39(c26);
  L142():
    try = ldf try;
    check L143() else D37();
  D37():
    deopt 165 [];
  D41():
    deopt 184 [pratt2];
  L36():
    goto L37(i2);
  L37(i7):
    goto L35(i7);
  L135():
    processRdSexprs1 = ldf processRdSexprs;
    check L136() else D34();
  L143():
    p21 = prom<V +>{
      as_Rconcordance = ldf `as.Rconcordance`;
      p20 = prom<V +>{
        unlist = ldf unlist;
        p19 = prom<V +>{
          Rd29 = ld Rd;
          Rd30 = force? Rd29;
          checkMissing(Rd30);
          c28 = `is.object`(Rd30);
          if c28 then L1() else L2(Rd30);
        L0(dx6):
          return dx6;
        L1():
          dr4 = tryDispatchBuiltin.1("[", Rd30);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(Rd32):
          RdTags = ldf RdTags;
          p18 = prom<V +>{
            Rd33 = ld Rd;
            Rd34 = force? Rd33;
            checkMissing(Rd34);
            return Rd34;
          };
          r83 = dyn RdTags(p18);
          r84 = `==`(r83, "COMMENT");
          __ = ldf `[` in base;
          r85 = dyn __(Rd32, r84);
          goto L0(r85);
        L3():
          dx5 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx5);
        };
        r87 = dyn unlist(p19);
        return r87;
      };
      r89 = dyn as_Rconcordance[, silent](p20, TRUE);
      return r89;
    };
    r91 = dyn try(p21);
    check L144() else D38();
  L152():
    pratt3 = force? pratt2;
    checkMissing(pratt3);
    r97 = `<`(pratt3, 2);
    c30 = `as.logical`(r97);
    if c30 then L153() else L45(c30);
  D34():
    deopt 147 [i2];
  D38():
    deopt 167 [r91];
  L45(c32):
    c36 = `as.logical`(c32);
    if c36 then L156() else L46();
  L136():
    p14 = prom<V +>{
      Rd25 = ld Rd;
      Rd26 = force? Rd25;
      checkMissing(Rd26);
      return Rd26;
    };
    p15 = prom<V +>{
      stage6 = ld stage;
      stage7 = force? stage6;
      checkMissing(stage7);
      return stage7;
    };
    p16 = prom<V +>{
      options3 = ld options;
      options4 = force? options3;
      checkMissing(options4);
      return options4;
    };
    p17 = prom<V +>{
      sym14 = ldf attr;
      base14 = ldf attr in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      Rd27 = ld Rd;
      Rd28 = force? Rd27;
      checkMissing(Rd28);
      attr6 = ldf attr in base;
      r76 = dyn attr6(Rd28, "macros");
      goto L0(r76);
    L2():
      r74 = dyn base14(<sym Rd>, "macros");
      goto L0(r74);
    };
    r78 = dyn processRdSexprs1[, , , macros](p14, p15, p16, p17);
    check L137() else D35();
  L144():
    st concordance = r91;
    sym16 = ldf inherits;
    base16 = ldf inherits in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L145() else L146();
  L153():
    stage8 = ld stage2;
    check L154() else D42();
  D35():
    deopt 153 [i2, r78];
  D42():
    deopt 188 [c30, stage8];
  L41(r93):
    c29 = `as.logical`(r93);
    if c29 then L149() else L42();
  L46():
    goto L47();
  L47():
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L160() else L161();
  L137():
    st Rd = r78;
    goto L37(i2);
  L145():
    concordance2 = ld concordance;
    check L147() else D39();
  L146():
    r92 = dyn base16(<sym concordance>, "try-error");
    goto L41(r92);
  L154():
    stage9 = force? stage8;
    checkMissing(stage9);
    c33 = `as.logical`(stage9);
    c34 = `&&`(c30, c33);
    goto L45(c34);
  L156():
    prepare2_Rd = ldf prepare2_Rd;
    check L157() else D43();
  D39():
    deopt 171 [concordance2];
  D43():
    deopt 192 [];
  L42():
    goto L43(NULL);
  L43(r95):
    goto L44();
  L48(r104):
    st meta = r104;
    pratt4 = ld pratt;
    check L164() else D47();
  L147():
    concordance3 = force? concordance2;
    checkMissing(concordance3);
    inherits1 = ldf inherits in base;
    r94 = dyn inherits1(concordance3, "try-error", FALSE);
    check L148() else D40();
  L149():
    st concordance = NULL;
    goto L43(NULL);
  L157():
    p22 = prom<V +>{
      Rd35 = ld Rd;
      Rd36 = force? Rd35;
      checkMissing(Rd36);
      return Rd36;
    };
    p23 = prom<V +>{
      Rdfile2 = ld Rdfile;
      Rdfile3 = force? Rdfile2;
      checkMissing(Rdfile3);
      return Rdfile3;
    };
    p24 = prom<V +>{
      stages5 = ld stages;
      stages6 = force? stages5;
      checkMissing(stages6);
      return stages6;
    };
    r101 = dyn prepare2_Rd(p22, p23, p24);
    check L158() else D44();
  L160():
    Rd37 = ld Rd;
    check L162() else D45();
  L161():
    r103 = dyn base17(<sym Rd>, "meta");
    goto L48(r103);
  D40():
    deopt 176 [r94];
  D44():
    deopt 196 [r101];
  D45():
    deopt 202 [Rd37];
  D47():
    deopt 208 [pratt4];
  L148():
    goto L41(r94);
  L158():
    st Rd = r101;
    goto L47();
  L162():
    Rd38 = force? Rd37;
    checkMissing(Rd38);
    attr7 = ldf attr in base;
    r105 = dyn attr7(Rd38, "meta");
    check L163() else D46();
  L164():
    pratt5 = force? pratt4;
    checkMissing(pratt5);
    r106 = `<`(pratt5, 3);
    c37 = `as.logical`(r106);
    if c37 then L165() else L49(c37);
  D46():
    deopt 206 [r105];
  L49(c39):
    c43 = `as.logical`(c39);
    if c43 then L168() else L50();
  L163():
    goto L48(r105);
  L165():
    stage10 = ld stage3;
    check L166() else D48();
  D48():
    deopt 212 [c37, stage10];
  L50():
    goto L51();
  L51():
    setDynamicFlags = ldf setDynamicFlags;
    check L172() else D51();
  L166():
    stage11 = force? stage10;
    checkMissing(stage11);
    c40 = `as.logical`(stage11);
    c41 = `&&`(c37, c40);
    goto L49(c41);
  L168():
    prepare3_Rd = ldf prepare3_Rd;
    check L169() else D49();
  D49():
    deopt 216 [];
  D51():
    deopt 226 [];
  L169():
    p25 = prom<V +>{
      Rd39 = ld Rd;
      Rd40 = force? Rd39;
      checkMissing(Rd40);
      return Rd40;
    };
    p26 = prom<V +>{
      Rdfile4 = ld Rdfile;
      Rdfile5 = force? Rdfile4;
      checkMissing(Rdfile5);
      return Rdfile5;
    };
    p27 = prom<V +>{
      msglevel1 = ld msglevel;
      msglevel2 = force? msglevel1;
      checkMissing(msglevel2);
      return msglevel2;
    };
    r110 = dyn prepare3_Rd[, , msglevel](p25, p26, p27);
    check L170() else D50();
  L172():
    p28 = prom<V +>{
      Rd41 = ld Rd;
      Rd42 = force? Rd41;
      checkMissing(Rd42);
      return Rd42;
    };
    p33 = prom<V +>{
      apply = ldf apply;
      p31 = prom<V +>{
        sapply = ldf sapply;
        p29 = prom<V +>{
          Rd43 = ld Rd;
          Rd44 = force? Rd43;
          checkMissing(Rd44);
          return Rd44;
        };
        p30 = prom<V +>{
          getDynamicFlags = ld getDynamicFlags;
          getDynamicFlags1 = force? getDynamicFlags;
          checkMissing(getDynamicFlags1);
          return getDynamicFlags1;
        };
        r115 = dyn sapply(p29, p30);
        return r115;
      };
      p32 = prom<V +>{
        any = ld any;
        any1 = force? any;
        checkMissing(any1);
        return any1;
      };
      r118 = dyn apply(p31, 1.0, p32);
      return r118;
    };
    r120 = dyn setDynamicFlags(p28, p33);
    check L173() else D52();
  D50():
    deopt 221 [r110];
  D52():
    deopt 229 [r120];
  L170():
    st Rd = r110;
    goto L51();
  L173():
    st Rd = r120;
    goto L24();
  }
}