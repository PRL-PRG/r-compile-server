fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3051290384;
    st expandDynamicFlags = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3051290384(block, options) {
  (reg block:*, reg options:*) -+> V { var block:*, var options:*, reg options_isMissing:L, reg options_orDefault:*, reg RweaveRdDefaults:*, reg RweaveRdDefaults1:V, reg p:p(V +), reg r1:cls, reg recurse:cls, reg block1:*, reg block2:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st block = block;
    options_isMissing = missing.0(options);
    if options_isMissing then L0() else L1(options);
  L0():
    p = prom<V +>{
      RweaveRdDefaults = ld RweaveRdDefaults;
      RweaveRdDefaults1 = force? RweaveRdDefaults;
      checkMissing(RweaveRdDefaults1);
      return RweaveRdDefaults1;
    };
    goto L1(p);
  L1(options_orDefault):
    st options = options_orDefault;
    r1 = clos inner1468096329;
    st recurse = r1;
    recurse = ldf recurse;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p1 = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      return block2;
    };
    r3 = dyn recurse(p1);
    check L3() else D1();
  D1():
    deopt 6 [r3];
  L3():
    popenv;
    return r3;
  }
}
fun inner1468096329(block) {
  (reg block:*) -+> V { var block:*, reg getDynamicFlags:cls, reg block1:*, reg block2:V, reg p:p(V +), reg r1:V, reg flags:*, reg flags1:V, reg c:L, reg flags3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg block3:*, reg block4:V, reg attr:cls, reg r7:V, reg identical:cls, reg r8:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg block5:*, reg block6:V, reg attr1:cls, reg r13:V, reg c3:V, reg c4:L, reg ___:cls, reg r15:V, reg r16:cls, reg opts:*, reg opts1:V, reg p1:p(V +), reg options:*, reg options1:V, reg p2:p(V +), reg RweaveRdOptions:*, reg RweaveRdOptions1:V, reg p3:p(V +), reg r20:V, reg l:*, reg c5:L, reg r22:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r24:L, reg dx3:V, reg options2:*, reg options3:V, reg c6:L, reg r27:L, reg l4:*, reg r28:L, reg options5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r31:L, reg l6:*, reg r32:L, reg dx5:V, reg r33:V, reg ___1:cls, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg tag:*, reg tag1:V, reg identical1:cls, reg r38:V, reg c7:L, reg ___2:cls, reg r39:V, reg r40:cls, reg block7:*, reg block8:V, reg p4:p(V +), reg options6:*, reg options7:V, reg p5:p(V +), reg RweaveRdOptions2:*, reg RweaveRdOptions3:V, reg p6:p(V +), reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg block9:*, reg block10:V, reg r47:I, reg s:V, reg l7:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg recurse:cls, reg block11:*, reg block12:V, reg c9:L, reg block14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i5:*, reg i6:V, reg __1:cls, reg r48:V, reg p7:p(V +), reg r50:V, reg l8:*, reg c10:L, reg i8:I, reg r52:V, reg l10:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i10:I, reg dx9:V, reg i11:*, reg i12:V, reg ____:cls, reg r55:V, reg flags4:*, reg flags5:V, reg getDynamicFlags1:cls, reg block15:*, reg block16:V, reg c11:L, reg block18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i13:*, reg i14:V, reg __2:cls, reg r56:V, reg p8:p(V +), reg r58:V, reg r59:V, reg setDynamicFlags:cls, reg block19:*, reg block20:V, reg p9:p(V +), reg flags6:*, reg flags7:V, reg p10:p(V +), reg r62:V, reg block21:*, reg block22:V |
    mkenv;
    st block = block;
    getDynamicFlags = ldf getDynamicFlags;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      return block2;
    };
    r1 = dyn getDynamicFlags(p);
    check L19() else D1();
  D1():
    deopt 3 [r1];
  L19():
    st flags = r1;
    flags = ld flags;
    check L20() else D2();
  D2():
    deopt 5 [flags];
  L20():
    flags1 = force? flags;
    checkMissing(flags1);
    c = `is.object`(flags1);
    if c then L21() else L22(flags1);
  L0(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L24() else L1();
  L21():
    dr = tryDispatchBuiltin.1("[", flags1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(flags3):
    __ = ldf `[` in base;
    r2 = dyn __(flags3, "\\Sexpr");
    goto L0(r2);
  L1():
    goto L17();
  L17():
    block21 = ld block;
    check L78() else D26();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L24():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  D26():
    deopt 120 [block21];
  L2(r4):
    c2 = `as.logical`(r4);
    if c2 then L32() else L4();
  L25():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L26():
    r3 = dyn base(<lang `<-`(tag, attr(block, "Rd_tag"))>, "\\Sexpr");
    goto L2(r3);
  L78():
    block22 = force? block21;
    checkMissing(block22);
    popenv;
    return block22;
  L3(r6):
    st tag = r6;
    identical = ldf identical in base;
    r8 = dyn identical(r6, "\\Sexpr", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L31() else D5();
  L4():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L10():
    setDynamicFlags = ldf setDynamicFlags;
    check L75() else D24();
  L27():
    block3 = ld block;
    check L29() else D3();
  L28():
    r5 = dyn base1(<sym block>, "Rd_tag");
    goto L3(r5);
  L32():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  D3():
    deopt 14 [block3];
  D5():
    deopt 29 [r8];
  D24():
    deopt 113 [];
  L5(r10):
    c4 = `as.logical`(r10);
    if c4 then L39() else L7();
  L11(r37):
    c7 = `as.logical`(r37);
    if c7 then L57() else L12();
  L29():
    block4 = force? block3;
    checkMissing(block4);
    attr = ldf attr in base;
    r7 = dyn attr(block4, "Rd_tag");
    check L30() else D4();
  L31():
    goto L2(r8);
  L33():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L34():
    r9 = dyn base2(<lang `<-`(opts, attr(block, "Rd_option"))>);
    goto L5(r9);
  L53():
    tag = ld tag;
    check L55() else D12();
  L54():
    r36 = dyn base4(<sym tag>, "\\RdOpts");
    goto L11(r36);
  L75():
    p9 = prom<V +>{
      block19 = ld block;
      block20 = force? block19;
      checkMissing(block20);
      return block20;
    };
    p10 = prom<V +>{
      flags6 = ld flags;
      flags7 = force? flags6;
      checkMissing(flags7);
      return flags7;
    };
    r62 = dyn setDynamicFlags(p9, p10);
    check L76() else D25();
  D4():
    deopt 18 [r7];
  D12():
    deopt 66 [tag];
  D25():
    deopt 116 [r62];
  L6(r12):
    st opts = r12;
    c3 = `==`(r12, NULL);
    goto L5(c3);
  L7():
    goto L8();
  L8():
    ___ = ldf `:::`;
    check L41() else D8();
  L12():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L30():
    goto L3(r7);
  L35():
    block5 = ld block;
    check L37() else D6();
  L36():
    r11 = dyn base3(<sym block>, "Rd_option");
    goto L6(r11);
  L39():
    st opts = "";
    goto L8();
  L55():
    tag1 = force? tag;
    checkMissing(tag1);
    identical1 = ldf identical in base;
    r38 = dyn identical1(tag1, "\\RdOpts", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L56() else D13();
  L57():
    ___2 = ldf `:::`;
    check L58() else D14();
  L76():
    st block = r62;
    goto L17();
  D6():
    deopt 33 [block5];
  D8():
    deopt 46 [];
  D13():
    deopt 77 [r38];
  D14():
    deopt 79 [];
  L13(r46):
    s = toForSeq(r46);
    l7 = length(s);
    i = 0;
    goto L14(i);
  L37():
    block6 = force? block5;
    checkMissing(block6);
    attr1 = ldf attr in base;
    r13 = dyn attr1(block6, "Rd_option");
    check L38() else D7();
  L41():
    r15 = dyn ___("utils", "SweaveParseOptions");
    check L42() else D9();
  L56():
    goto L11(r38);
  L58():
    r39 = dyn ___2("utils", "SweaveParseOptions");
    check L59() else D15();
  L62():
    block9 = ld block;
    check L64() else D17();
  L63():
    r45 = dyn base5(<sym block>);
    goto L13(r45);
  D7():
    deopt 37 [r13];
  D9():
    deopt 49 [r15];
  D15():
    deopt 82 [r39];
  D17():
    deopt 90 [block9];
  L14(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l7, i2);
    if c8 then L65() else L16();
  L38():
    goto L6(r13);
  L42():
    checkFun.0(r15);
    r16 = r15 as cls;
    p1 = prom<V +>{
      opts = ld opts;
      opts1 = force? opts;
      checkMissing(opts1);
      return opts1;
    };
    p2 = prom<V +>{
      options = ld options;
      options1 = force? options;
      checkMissing(options1);
      return options1;
    };
    p3 = prom<V +>{
      RweaveRdOptions = ld RweaveRdOptions;
      RweaveRdOptions1 = force? RweaveRdOptions;
      checkMissing(RweaveRdOptions1);
      return RweaveRdOptions1;
    };
    r20 = dyn r16(p1, p2, p3);
    check L43() else D10();
  L59():
    checkFun.0(r39);
    r40 = r39 as cls;
    p4 = prom<V +>{
      block7 = ld block;
      block8 = force? block7;
      checkMissing(block8);
      return block8;
    };
    p5 = prom<V +>{
      options6 = ld options;
      options7 = force? options6;
      checkMissing(options7);
      return options7;
    };
    p6 = prom<V +>{
      RweaveRdOptions2 = ld RweaveRdOptions;
      RweaveRdOptions3 = force? RweaveRdOptions2;
      checkMissing(RweaveRdOptions3);
      return RweaveRdOptions3;
    };
    r44 = dyn r40(p4, p5, p6);
    check L60() else D16();
  L64():
    block10 = force? block9;
    checkMissing(block10);
    r47 = seq_along(block10);
    goto L13(r47);
  D10():
    deopt 54 [r20];
  D16():
    deopt 87 [r44];
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    recurse = ldf recurse;
    check L66() else D18();
  L43():
    st options = r20;
    l = ld flags;
    c5 = `is.object`(l);
    if c5 then L44() else L45(TRUE, l);
  L60():
    sst options = r44;
    goto L10();
  L65():
    goto L10();
  D18():
    deopt 94 [i2];
  L9(r24, dx3):
    st flags = dx3;
    goto L10();
  L44():
    dr2 = tryDispatchBuiltin.0("[<-", l, TRUE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(TRUE, dr2);
  L45(r22, l2):
    options2 = ld options;
    check L47() else D11();
  L66():
    p7 = prom<V +>{
      block11 = ld block;
      block12 = force? block11;
      checkMissing(block12);
      c9 = `is.object`(block12);
      if c9 then L1() else L2(block12);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", block12);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(block14):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r48 = dyn __1(block14, i6);
      goto L0(r48);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r50 = dyn recurse(p7);
    check L67() else D19();
  D11():
    deopt 59 [r22, l2, TRUE, options2];
  D19():
    deopt 96 [i2, r50];
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(TRUE, dx2);
  L47():
    options3 = force? options2;
    checkMissing(options3);
    c6 = `is.object`(options3);
    if c6 then L49() else L50(r22, l2, TRUE, options3);
  L67():
    l8 = ld block;
    c10 = `is.object`(l8);
    if c10 then L68() else L69(i2, r50, l8);
  L15(i10, dx9):
    st block = dx9;
    flags4 = ld flags;
    check L72() else D21();
  L48(r31, l6, r32, dx5):
    ___1 = ldf `[<-` in base;
    r34 = dyn ___1(l6, r32, dx5);
    goto L9(r31, r34);
  L49():
    dr4 = tryDispatchBuiltin.1("$", options3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L51() else L50(r22, l2, TRUE, dr4);
  L50(r27, l4, r28, options5):
    r33 = `$`(options5, <sym stage>);
    goto L48(r27, l4, r28, r33);
  L68():
    dr8 = tryDispatchBuiltin.0("[[<-", l8, r50);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(i2, r50, dr8);
  L69(i8, r52, l10):
    i11 = ld i;
    check L71() else D20();
  D20():
    deopt 98 [i8, r52, l10, r50, i11];
  D21():
    deopt 102 [i10, flags4];
  L51():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L48(r22, l2, TRUE, dx4);
  L70():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L15(i2, dx8);
  L71():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r55 = dyn ____(l10, r50, i12);
    goto L15(i8, r55);
  L72():
    flags5 = force? flags4;
    checkMissing(flags5);
    getDynamicFlags1 = ldf getDynamicFlags;
    check L73() else D22();
  D22():
    deopt 104 [i10, flags5];
  L73():
    p8 = prom<V +>{
      block15 = ld block;
      block16 = force? block15;
      checkMissing(block16);
      c11 = `is.object`(block16);
      if c11 then L1() else L2(block16);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", block16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(block18):
      i13 = ld i;
      i14 = force? i13;
      __2 = ldf `[[` in base;
      r56 = dyn __2(block18, i14);
      goto L0(r56);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r58 = dyn getDynamicFlags1(p8);
    check L74() else D23();
  D23():
    deopt 106 [i10, flags5, r58];
  L74():
    r59 = `||`(flags5, r58);
    st flags = r59;
    goto L14(i10);
  }
}