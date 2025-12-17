fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2822337996;
    st processRdSexprs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2822337996(block, stage, options, env, macros) {
  (reg block:*, reg stage:*, reg options:*, reg env:*, reg macros:*) -+> V { var block:*, var stage:*, var options:*, reg options_isMissing:L, reg options_orDefault:*, reg RweaveRdDefaults:*, reg RweaveRdDefaults1:V, reg p:p(V +), var env:*, reg env_isMissing:L, reg env_orDefault:*, reg new_env:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg globalenv:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), var macros:*, reg r7:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg getDynamicFlags:cls, reg block1:*, reg block2:V, reg p3:p(V +), reg r11:V, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg r18:V, reg stage1:*, reg stage2:V, reg c1:cls, reg r19:V, reg __:cls, reg r20:V, reg any:cls, reg r21:V, reg r22:V, reg c2:L, reg block3:*, reg block4:V, reg expandDynamicFlags:cls, reg recurse:cls, reg block5:*, reg block6:V, reg p4:p(V +), reg r26:V, reg p5:p(V +), reg options1:*, reg options2:V, reg p6:p(V +), reg r29:V |
    mkenv;
    st block = block;
    st stage = stage;
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
    env_isMissing = missing.0(env);
    if env_isMissing then L2() else L3(env);
  L2():
    p2 = prom<V +>{
      new_env = ldf `new.env`;
      p1 = prom<V +>{
        sym = ldf globalenv;
        base = ldf globalenv in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        globalenv = ldf globalenv in base;
        r3 = dyn globalenv();
        goto L0(r3);
      L2():
        r1 = dyn base();
        goto L0(r1);
      };
      r5 = dyn new_env[hash, parent](TRUE, p1);
      return r5;
    };
    goto L3(p2);
  L3(env_orDefault):
    st env = env_orDefault;
    st macros = macros;
    r7 = clos inner1468096329;
    st recurse = r7;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L4(r9):
    r22 = `!`(r9);
    c2 = `as.logical`(r22);
    if c2 then L21() else L7();
  L9():
    getDynamicFlags = ldf getDynamicFlags;
    check L11() else D0();
  L10():
    r8 = dyn base1(<lang `[`(getDynamicFlags(block), c("\\Sexpr", stage))>);
    goto L4(r8);
  D0():
    deopt 6 [];
  L7():
    expandDynamicFlags = ldf expandDynamicFlags;
    check L25() else D6();
  L11():
    p3 = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      return block2;
    };
    r11 = dyn getDynamicFlags(p3);
    check L12() else D1();
  L21():
    block3 = ld block;
    check L22() else D5();
  D1():
    deopt 8 [r11];
  D5():
    deopt 20 [block3];
  D6():
    deopt 26 [];
  L12():
    c = `is.object`(r11);
    if c then L13() else L14(r11);
  L22():
    block4 = force? block3;
    checkMissing(block4);
    popenv;
    return block4;
  L25():
    p5 = prom<V +>{
      recurse = ldf recurse;
      p4 = prom<V +>{
        block5 = ld block;
        block6 = force? block5;
        checkMissing(block6);
        return block6;
      };
      r26 = dyn recurse(p4);
      return r26;
    };
    p6 = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      return options2;
    };
    r29 = dyn expandDynamicFlags(p5, p6);
    check L26() else D7();
  D7():
    deopt 29 [r29];
  L5(dx1):
    any = ldf any in base;
    r21 = dyn any(dx1);
    check L20() else D4();
  L13():
    dr = tryDispatchBuiltin.1("[", r11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(r13):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L26():
    popenv;
    return r29;
  D4():
    deopt 18 [r21];
  L6(r17, r18):
    __ = ldf `[` in base;
    r20 = dyn __(r17, r18);
    goto L5(r20);
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L16():
    stage1 = ld stage;
    check L18() else D2();
  L17():
    r16 = dyn base2("\\Sexpr", <sym stage>);
    goto L6(r13, r16);
  L20():
    goto L4(r21);
  D2():
    deopt 12 [r13, stage1];
  L18():
    stage2 = force? stage1;
    checkMissing(stage2);
    c1 = ldf c in base;
    r19 = dyn c1("\\Sexpr", stage2);
    check L19() else D3();
  D3():
    deopt 15 [r13, r19];
  L19():
    goto L6(r13, r19);
  }
}
fun inner1468096329(block) {
  (reg block:*) -+> V { var block:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getDynamicFlags:cls, reg block1:*, reg block2:V, reg p:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg r10:V, reg stage:*, reg stage1:V, reg c1:cls, reg r11:V, reg __:cls, reg r12:V, reg any:cls, reg r13:V, reg r14:V, reg c2:L, reg block3:*, reg block4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg block5:*, reg block6:V, reg is_list:cls, reg r19:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg block7:*, reg block8:V, reg attr:cls, reg r24:V, reg c4:V, reg r25:V, reg c5:L, reg tag:*, reg tag1:V, reg r26:V, reg c6:L, reg processRdChunk:cls, reg block9:*, reg block10:V, reg p1:p(V +), reg stage2:*, reg stage3:V, reg p2:p(V +), reg options:*, reg options1:V, reg p3:p(V +), reg env:*, reg env1:V, reg p4:p(V +), reg macros:*, reg macros1:V, reg p5:p(V +), reg r32:V, reg r33:V, reg tag2:*, reg tag3:V, reg r34:V, reg c7:L, reg ___:cls, reg r35:V, reg r36:cls, reg block11:*, reg block12:V, reg p6:p(V +), reg options2:*, reg options3:V, reg p7:p(V +), reg RweaveRdOptions:*, reg RweaveRdOptions1:V, reg p8:p(V +), reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg block13:*, reg block14:V, reg is_list1:cls, reg r44:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg block15:*, reg block16:V, reg r47:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg recurse:cls, reg block17:*, reg block18:V, reg c10:L, reg block20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __1:cls, reg r48:V, reg p9:p(V +), reg r50:V, reg l1:*, reg c11:L, reg i8:I, reg r52:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i10:I, reg dx5:V, reg i11:*, reg i12:V, reg ____:cls, reg r55:V, reg i13:V, reg block21:*, reg block22:V |
    mkenv;
    st block = block;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r1):
    r14 = `!`(r1);
    c2 = `as.logical`(r14);
    if c2 then L34() else L3();
  L22():
    getDynamicFlags = ldf getDynamicFlags;
    check L24() else D0();
  L23():
    r = dyn base(<lang `[`(getDynamicFlags(block), c("\\Sexpr", stage))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L24():
    p = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      return block2;
    };
    r3 = dyn getDynamicFlags(p);
    check L25() else D1();
  L34():
    block3 = ld block;
    check L35() else D5();
  D1():
    deopt 5 [r3];
  D5():
    deopt 17 [block3];
  L5(r18):
    c3 = `as.logical`(r18);
    if c3 then L42() else L6();
  L25():
    c = `is.object`(r3);
    if c then L26() else L27(r3);
  L35():
    block4 = force? block3;
    checkMissing(block4);
    popenv;
    return block4;
  L38():
    block5 = ld block;
    check L40() else D6();
  L39():
    r17 = dyn base2(<sym block>);
    goto L5(r17);
  D6():
    deopt 24 [block5];
  L1(dx1):
    any = ldf any in base;
    r13 = dyn any(dx1);
    check L33() else D4();
  L6():
    goto L21();
  L21():
    block21 = ld block;
    check L79() else D23();
  L26():
    dr = tryDispatchBuiltin.1("[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(r5):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L40():
    block6 = force? block5;
    checkMissing(block6);
    is_list = ldf `is.list` in base;
    r19 = dyn is_list(block6);
    check L41() else D7();
  L42():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  D4():
    deopt 15 [r13];
  D7():
    deopt 27 [r19];
  D23():
    deopt 98 [block21];
  L2(r9, r10):
    __ = ldf `[` in base;
    r12 = dyn __(r9, r10);
    goto L1(r12);
  L7(r21):
    r25 = `!`(r21);
    c5 = `as.logical`(r25);
    if c5 then L49() else L9();
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L29():
    stage = ld stage;
    check L31() else D2();
  L30():
    r8 = dyn base1("\\Sexpr", <sym stage>);
    goto L2(r5, r8);
  L33():
    goto L0(r13);
  L41():
    goto L5(r19);
  L43():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L44():
    r20 = dyn base3(<lang `<-`(tag, attr(block, "Rd_tag"))>);
    goto L7(r20);
  L79():
    block22 = force? block21;
    checkMissing(block22);
    popenv;
    return block22;
  D2():
    deopt 9 [r5, stage];
  L8(r23):
    st tag = r23;
    c4 = `==`(r23, NULL);
    goto L7(c4);
  L9():
    goto L13();
  L13():
    sym5 = ldf `is.list`;
    base5 = ldf `is.list` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L31():
    stage1 = force? stage;
    checkMissing(stage1);
    c1 = ldf c in base;
    r11 = dyn c1("\\Sexpr", stage1);
    check L32() else D3();
  L45():
    block7 = ld block;
    check L47() else D8();
  L46():
    r22 = dyn base4(<sym block>, "Rd_tag");
    goto L8(r22);
  L49():
    tag = ld tag;
    check L50() else D10();
  D3():
    deopt 12 [r5, r11];
  D8():
    deopt 31 [block7];
  D10():
    deopt 39 [tag];
  L14(r43):
    c8 = `as.logical`(r43);
    if c8 then L66() else L15();
  L32():
    goto L2(r5, r11);
  L47():
    block8 = force? block7;
    checkMissing(block8);
    attr = ldf attr in base;
    r24 = dyn attr(block8, "Rd_tag");
    check L48() else D9();
  L50():
    tag1 = force? tag;
    checkMissing(tag1);
    r26 = `==`(tag1, "\\Sexpr");
    c6 = `as.logical`(r26);
    if c6 then L51() else L10();
  L62():
    block13 = ld block;
    check L64() else D17();
  L63():
    r42 = dyn base5(<sym block>);
    goto L14(r42);
  D9():
    deopt 35 [r24];
  D17():
    deopt 74 [block13];
  L10():
    tag2 = ld tag;
    check L55() else D13();
  L11(r33):
    goto L13();
  L15():
    goto L20(NULL);
  L20(i13):
    goto L21();
  L48():
    goto L8(r24);
  L51():
    processRdChunk = ldf processRdChunk;
    check L52() else D11();
  L64():
    block14 = force? block13;
    checkMissing(block14);
    is_list1 = ldf `is.list` in base;
    r44 = dyn is_list1(block14);
    check L65() else D18();
  L66():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  D11():
    deopt 44 [];
  D13():
    deopt 53 [tag2];
  D18():
    deopt 77 [r44];
  L16(r46):
    s = toForSeq(r46);
    l = length(s);
    i = 0;
    goto L17(i);
  L52():
    p1 = prom<V +>{
      block9 = ld block;
      block10 = force? block9;
      checkMissing(block10);
      return block10;
    };
    p2 = prom<V +>{
      stage2 = ld stage;
      stage3 = force? stage2;
      checkMissing(stage3);
      return stage3;
    };
    p3 = prom<V +>{
      options = ld options;
      options1 = force? options;
      checkMissing(options1);
      return options1;
    };
    p4 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p5 = prom<V +>{
      macros = ld macros;
      macros1 = force? macros;
      checkMissing(macros1);
      return macros1;
    };
    r32 = dyn processRdChunk[, , , , macros](p1, p2, p3, p4, p5);
    check L53() else D12();
  L55():
    tag3 = force? tag2;
    checkMissing(tag3);
    r34 = `==`(tag3, "\\RdOpts");
    c7 = `as.logical`(r34);
    if c7 then L56() else L12();
  L65():
    goto L14(r44);
  L67():
    block15 = ld block;
    check L69() else D19();
  L68():
    r45 = dyn base6(<sym block>);
    goto L16(r45);
  D12():
    deopt 51 [r32];
  D19():
    deopt 79 [block15];
  L12():
    goto L11(NULL);
  L17(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L70() else L19();
  L53():
    st block = r32;
    goto L11(r32);
  L56():
    ___ = ldf `:::`;
    check L57() else D14();
  L69():
    block16 = force? block15;
    checkMissing(block16);
    r47 = seq_along(block16);
    goto L16(r47);
  D14():
    deopt 58 [];
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    recurse = ldf recurse;
    check L71() else D20();
  L57():
    r35 = dyn ___("utils", "SweaveParseOptions");
    check L58() else D15();
  L70():
    goto L20(i2);
  D15():
    deopt 61 [r35];
  D20():
    deopt 83 [i2];
  L58():
    checkFun.0(r35);
    r36 = r35 as cls;
    p6 = prom<V +>{
      block11 = ld block;
      block12 = force? block11;
      checkMissing(block12);
      return block12;
    };
    p7 = prom<V +>{
      options2 = ld options;
      options3 = force? options2;
      checkMissing(options3);
      return options3;
    };
    p8 = prom<V +>{
      RweaveRdOptions = ld RweaveRdOptions;
      RweaveRdOptions1 = force? RweaveRdOptions;
      checkMissing(RweaveRdOptions1);
      return RweaveRdOptions1;
    };
    r40 = dyn r36(p6, p7, p8);
    check L59() else D16();
  L71():
    p9 = prom<V +>{
      block17 = ld block;
      block18 = force? block17;
      checkMissing(block18);
      c10 = `is.object`(block18);
      if c10 then L1() else L2(block18);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", block18);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(block20):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r48 = dyn __1(block20, i6);
      goto L0(r48);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r50 = dyn recurse(p9);
    check L72() else D21();
  D16():
    deopt 66 [r40];
  D21():
    deopt 85 [i2, r50];
  L59():
    sst options = r40;
    goto L11(r40);
  L72():
    l1 = ld block;
    c11 = `is.object`(l1);
    if c11 then L73() else L74(i2, r50, l1);
  L18(i10, dx5):
    st block = dx5;
    goto L17(i10);
  L73():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r50);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(i2, r50, dr4);
  L74(i8, r52, l3):
    i11 = ld i;
    check L76() else D22();
  D22():
    deopt 87 [i8, r52, l3, r50, i11];
  L75():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(i2, dx4);
  L76():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r55 = dyn ____(l3, r50, i12);
    goto L18(i8, r55);
  }
}