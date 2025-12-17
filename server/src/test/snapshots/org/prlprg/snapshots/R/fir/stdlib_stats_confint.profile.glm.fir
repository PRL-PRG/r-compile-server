fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2393499510;
    st `confint.profile.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2393499510(object, parm, level, trace, test, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg trace:*, reg test:*, reg ddd:dots) -+> V { var object:*, var parm:*, reg parm_isMissing:L, reg parm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pnames:*, reg pnames1:V, reg r2:I, reg p:p(V +), var level:*, reg level_isMissing:L, reg level_orDefault:*, var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object1:*, reg object2:V, reg attr:cls, reg r6:V, reg p1:p(V +), var `...`:dots?, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg test1:*, reg test2:V, reg c:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg object3:*, reg object4:V, reg attr1:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg coef:cls, reg of:*, reg of1:V, reg p2:p(V +), reg r17:V, reg names:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg parm1:*, reg parm2:V, reg c2:L, reg c3:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg parm3:*, reg parm4:V, reg pnames2:*, reg pnames3:V, reg match:cls, reg r23:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r27:V, reg r28:V, reg object5:*, reg object6:V, reg attr2:cls, reg r29:V, reg c4:V, reg c5:L, reg l:*, reg attr__:cls, reg r30:V, reg test3:*, reg test4:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r32:V, reg test7:V, reg r33:V, reg object7:*, reg object8:V, reg attr3:cls, reg r34:V, reg r35:V, reg c6:L, reg message:cls, reg test8:*, reg test9:V, reg p3:p(V +), reg r37:V, reg __:cls, reg r38:V, reg r39:cls, reg r40:V, reg profile:cls, reg of2:*, reg of3:V, reg p4:p(V +), reg parm5:*, reg parm6:V, reg p5:p(V +), reg level1:*, reg level2:V, reg r43:V, reg r44:V, reg p6:p(V +), reg trace1:*, reg trace2:V, reg p7:p(V +), reg test10:*, reg test11:V, reg p8:p(V +), reg r48:V, reg level3:*, reg level4:V, reg r50:V, reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg a:*, reg a1:V, reg a2:*, reg a3:V, reg r54:V, reg c7:cls, reg r55:V, reg paste:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg round:cls, reg r58:V, reg p9:p(V +), reg r60:V, reg array:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r63:V, reg r64:V, reg parm7:*, reg parm8:V, reg length:cls, reg r65:V, reg c8:cls, reg r66:V, reg p10:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg r69:V, reg pnames4:*, reg pnames5:V, reg c9:L, reg pnames7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg parm9:*, reg parm10:V, reg __1:cls, reg r70:V, reg pct:*, reg pct1:V, reg list:cls, reg r71:V, reg p11:p(V +), reg r73:V, reg qnorm:cls, reg a4:*, reg a5:V, reg p12:p(V +), reg r75:V, reg parm11:*, reg parm12:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg object9:*, reg object10:V, reg c11:L, reg i6:I, reg object12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg pnames8:*, reg pnames9:V, reg c12:L, reg i10:I, reg object14:V, reg pnames11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i12:I, reg object16:V, reg dx5:V, reg pm:*, reg pm1:V, reg __2:cls, reg r76:V, reg __3:cls, reg r77:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r78:V, reg i15:I, reg r79:V, reg pro:*, reg pro1:V, reg c13:V, reg c14:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r81:V, reg i22:I, reg r82:V, reg pnames12:*, reg pnames13:V, reg length1:cls, reg r83:V, reg r84:V, reg c15:L, reg spline:cls, reg pro2:*, reg pro3:V, reg c16:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __4:cls, reg r85:V, reg c17:L, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg pm2:*, reg pm3:V, reg __5:cls, reg r86:V, reg p13:p(V +), reg pro6:*, reg pro7:V, reg c18:L, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r88:V, reg p14:p(V +), reg r90:V, reg i25:I, reg spline1:cls, reg pro10:*, reg pro11:V, reg c19:L, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __7:cls, reg r92:V, reg p15:p(V +), reg pro14:*, reg pro15:V, reg c20:L, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r94:V, reg p16:p(V +), reg r96:V, reg approx:cls, reg sp:*, reg sp1:V, reg c21:L, reg sp3:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r97:V, reg p17:p(V +), reg sp4:*, reg sp5:V, reg c22:L, reg sp7:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r99:V, reg p18:p(V +), reg cutoff:*, reg cutoff1:V, reg p19:p(V +), reg r102:V, reg c23:L, reg i27:I, reg r104:V, reg dr20:V, reg dc10:L, reg dx22:V, reg i29:I, reg dx23:V, reg r105:V, reg l2:*, reg c24:L, reg i31:I, reg dx25:V, reg l4:*, reg dr22:V, reg dc11:L, reg dx27:V, reg i33:I, reg dx29:V, reg pnames14:*, reg pnames15:V, reg c25:L, reg i35:I, reg dx32:V, reg l6:*, reg dx33:V, reg pnames17:V, reg dr24:V, reg dc12:L, reg dx36:V, reg i37:I, reg dx37:V, reg dx38:V, reg dx39:V, reg pm4:*, reg pm5:V, reg __9:cls, reg r106:V, reg ___:cls, reg r107:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r108:V, reg r109:V, reg ci:*, reg ci1:V, reg drop:cls, reg r110:V |
    mkenv;
    st object = object;
    parm_isMissing = missing.0(parm);
    if parm_isMissing then L0() else L1(parm);
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      pnames = ld pnames;
      pnames1 = force? pnames;
      checkMissing(pnames1);
      r2 = seq_along(pnames1);
      goto L0(r2);
    L2():
      r = dyn base(<sym pnames>);
      goto L0(r);
    };
    goto L1(p);
  L1(parm_orDefault):
    st parm = parm_orDefault;
    level_isMissing = missing.0(level);
    if level_isMissing then L2(0.95) else L2(level);
  L2(level_orDefault):
    st level = level_orDefault;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L3(FALSE) else L3(trace);
  L3(trace_orDefault):
    st trace = trace_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L4() else L5(test);
  L4():
    p1 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      attr = ldf attr in base;
      r6 = dyn attr(object2, "test");
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym object>, "test");
      goto L0(r4);
    };
    goto L5(p1);
  L5(test_orDefault):
    st test = test_orDefault;
    st `...` = ddd;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L6(r9):
    c1 = `as.logical`(r9);
    if c1 then L39() else L7();
  L36():
    test1 = ld test;
    check L38() else D0();
  L37():
    r8 = dyn base2(<sym test>);
    goto L6(r8);
  D0():
    deopt 1 [test1];
  L7():
    goto L8();
  L8():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L38():
    test2 = force? test1;
    checkMissing(test2);
    c = `==`(test2, NULL);
    goto L6(c);
  L39():
    st test = "LRT";
    goto L8();
  L9(r12):
    st of = r12;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L41():
    object3 = ld object;
    check L43() else D1();
  L42():
    r11 = dyn base3(<sym object>, "original.fit");
    goto L9(r11);
  D1():
    deopt 11 [object3];
  L10(r15):
    st pnames = r15;
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L43():
    object4 = force? object3;
    checkMissing(object4);
    attr1 = ldf attr in base;
    r13 = dyn attr1(object4, "original.fit");
    check L44() else D2();
  L45():
    coef = ldf coef;
    check L47() else D3();
  L46():
    r14 = dyn base4(<lang coef(of)>);
    goto L10(r14);
  D2():
    deopt 15 [r13];
  D3():
    deopt 20 [];
  L11(r20):
    c3 = `as.logical`(r20);
    if c3 then L53() else L12();
  L44():
    goto L9(r13);
  L47():
    p2 = prom<V +>{
      of = ld of;
      of1 = force? of;
      checkMissing(of1);
      return of1;
    };
    r17 = dyn coef(p2);
    check L48() else D4();
  L50():
    parm1 = ld parm;
    check L52() else D6();
  L51():
    r19 = dyn base5(<sym parm>);
    goto L11(r19);
  D4():
    deopt 22 [r17];
  D6():
    deopt 27 [parm1];
  L12():
    goto L14();
  L14():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L60() else L61();
  L48():
    names = ldf names in base;
    r18 = dyn names(r17);
    check L49() else D5();
  L52():
    parm2 = force? parm1;
    checkMissing(parm2);
    c2 = `is.character`(parm2);
    goto L11(c2);
  L53():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  D5():
    deopt 24 [r18];
  L13(r22):
    st parm = r22;
    goto L14();
  L15(r26):
    c5 = `as.logical`(r26);
    if c5 then L66() else L17();
  L49():
    goto L10(r18);
  L54():
    parm3 = ld parm;
    check L56() else D7();
  L55():
    r21 = dyn base6[, , nomatch](<sym parm>, <sym pnames>, 0);
    goto L13(r21);
  L60():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L62() else L63();
  L61():
    r25 = dyn base7(<lang attr(object, "test")>);
    goto L15(r25);
  D7():
    deopt 32 [parm3];
  L16(r28):
    c4 = `==`(r28, NULL);
    goto L15(c4);
  L17():
    goto L18();
  L18():
    test3 = ld test;
    check L70() else D14();
  L56():
    parm4 = force? parm3;
    checkMissing(parm4);
    pnames2 = ld pnames;
    check L57() else D8();
  L62():
    object5 = ld object;
    check L64() else D10();
  L63():
    r27 = dyn base8(<sym object>, "test");
    goto L16(r27);
  L66():
    l = ld object;
    attr__ = ldf `attr<-`;
    check L67() else D12();
  D8():
    deopt 34 [pnames2];
  D10():
    deopt 46 [object5];
  D12():
    deopt 55 ["LRT", l, "LRT"];
  D14():
    deopt 62 [test3];
  L57():
    pnames3 = force? pnames2;
    checkMissing(pnames3);
    match = ldf match in base;
    r23 = dyn match(parm4, pnames3, 0, NULL);
    check L58() else D9();
  L64():
    object6 = force? object5;
    checkMissing(object6);
    attr2 = ldf attr in base;
    r29 = dyn attr2(object6, "test");
    check L65() else D11();
  L67():
    r30 = dyn attr__(l, NULL, "test", "LRT");
    check L68() else D13();
  L70():
    test4 = force? test3;
    checkMissing(test4);
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L71() else L72();
  D9():
    deopt 39 [r23];
  D11():
    deopt 50 [r29];
  D13():
    deopt 58 ["LRT", r30];
  L19(test7, r33):
    r35 = `!=`(test7, r33);
    c6 = `as.logical`(r35);
    if c6 then L75() else L20();
  L58():
    goto L13(r23);
  L65():
    goto L16(r29);
  L68():
    st object = r30;
    goto L18();
  L71():
    object7 = ld object;
    check L73() else D15();
  L72():
    r32 = dyn base9(<sym object>, "test");
    goto L19(test4, r32);
  D15():
    deopt 65 [test4, object7];
  L20():
    goto L21();
  L21():
    level3 = ld level;
    check L84() else D24();
  L73():
    object8 = force? object7;
    checkMissing(object8);
    attr3 = ldf attr in base;
    r34 = dyn attr3(object8, "test");
    check L74() else D16();
  L75():
    message = ldf message;
    check L76() else D17();
  D16():
    deopt 69 [test4, r34];
  D17():
    deopt 72 [];
  D24():
    deopt 100 [1.0, level3];
  L74():
    goto L19(test4, r34);
  L76():
    p3 = prom<V +>{
      test8 = ld test;
      test9 = force? test8;
      checkMissing(test9);
      return test9;
    };
    r37 = dyn message("Reprofiling for ", p3, " statistic. Waiting...");
    check L77() else D18();
  L84():
    level4 = force? level3;
    checkMissing(level4);
    r50 = `-`(1.0, level4);
    r51 = `/`(r50, 2.0);
    st a = r51;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L85() else L86();
  D18():
    deopt 76 [r37];
  L22(r53):
    st a = r53;
    paste = ldf paste;
    check L90() else D28();
  L77():
    __ = ldf `::`;
    check L78() else D19();
  L85():
    a = ld a;
    check L87() else D25();
  L86():
    r52 = dyn base10(<sym a>, <lang `-`(1.0, a)>);
    goto L22(r52);
  D19():
    deopt 78 [];
  D25():
    deopt 108 [a];
  D28():
    deopt 118 [];
  L78():
    r38 = dyn __("utils", "flush.console");
    check L79() else D20();
  L87():
    a1 = force? a;
    checkMissing(a1);
    a2 = ld a;
    check L88() else D26();
  L90():
    p9 = prom<V +>{
      sym11 = ldf round;
      base11 = ldf round in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      round = ldf round in base;
      r58 = dyn round(<lang `*`(100.0, a)>, 1.0);
      goto L0(r58);
    L2():
      r56 = dyn base11(<lang `*`(100.0, a)>, 1.0);
      goto L0(r56);
    };
    r60 = dyn paste(p9, "%");
    check L91() else D29();
  D20():
    deopt 81 [r38];
  D26():
    deopt 111 [1.0, a2];
  D29():
    deopt 121 [r60];
  L79():
    checkFun.0(r38);
    r39 = r38 as cls;
    r40 = dyn r39();
    check L80() else D21();
  L88():
    a3 = force? a2;
    checkMissing(a3);
    r54 = `-`(1.0, a3);
    c7 = ldf c in base;
    r55 = dyn c7(a1, r54);
    check L89() else D27();
  L91():
    st pct = r60;
    array = ldf array;
    check L92() else D30();
  D21():
    deopt 83 [r40];
  D27():
    deopt 115 [r55];
  D30():
    deopt 124 [];
  L80():
    profile = ldf profile;
    check L81() else D22();
  L89():
    goto L22(r55);
  L92():
    p10 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r62):
      return r62;
    L2():
      sym13 = ldf length;
      base13 = ldf length in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L3():
      r61 = dyn base12(<lang length(parm)>, 2);
      goto L0(r61);
    L1(r64):
      c8 = ldf c in base;
      r66 = dyn c8(r64, 2);
      goto L0(r66);
    L4():
      parm7 = ld parm;
      parm8 = force? parm7;
      checkMissing(parm8);
      length = ldf length in base;
      r65 = dyn length(parm8);
      goto L1(r65);
    L5():
      r63 = dyn base13(<sym parm>);
      goto L1(r63);
    };
    p11 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r69):
      return r69;
    L2():
      pnames4 = ld pnames;
      pnames5 = force? pnames4;
      checkMissing(pnames5);
      c9 = `is.object`(pnames5);
      if c9 then L4() else L5(pnames5);
    L3():
      r68 = dyn base14(<lang `[`(pnames, parm)>, <sym pct>);
      goto L0(r68);
    L1(dx1):
      pct = ld pct;
      pct1 = force? pct;
      checkMissing(pct1);
      list = ldf list in base;
      r71 = dyn list(dx1, pct1);
      goto L0(r71);
    L4():
      dr = tryDispatchBuiltin.1("[", pnames5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(pnames7):
      parm9 = ld parm;
      parm10 = force? parm9;
      __1 = ldf `[` in base;
      r70 = dyn __1(pnames7, parm10);
      goto L1(r70);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r73 = dyn array[, dim, dimnames](NA_LGL, p10, p11);
    check L93() else D31();
  D22():
    deopt 85 [];
  D31():
    deopt 130 [r73];
  L81():
    p4 = prom<V +>{
      of2 = ld of;
      of3 = force? of2;
      checkMissing(of3);
      return of3;
    };
    p5 = prom<V +>{
      parm5 = ld parm;
      parm6 = force? parm5;
      checkMissing(parm6);
      return parm6;
    };
    p6 = prom<V +>{
      level1 = ld level;
      level2 = force? level1;
      checkMissing(level2);
      r43 = `-`(1.0, level2);
      r44 = `/`(r43, 4.0);
      return r44;
    };
    p7 = prom<V +>{
      trace1 = ld trace;
      trace2 = force? trace1;
      checkMissing(trace2);
      return trace2;
    };
    p8 = prom<V +>{
      test10 = ld test;
      test11 = force? test10;
      checkMissing(test11);
      return test11;
    };
    r48 = dyn profile[, which, alpha, trace, test](p4, p5, p6, p7, p8);
    check L82() else D23();
  L93():
    st ci = r73;
    qnorm = ldf qnorm;
    check L94() else D32();
  D23():
    deopt 95 [r48];
  D32():
    deopt 133 [];
  L82():
    st object = r48;
    goto L21();
  L94():
    p12 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    r75 = dyn qnorm(p12);
    check L95() else D33();
  D33():
    deopt 135 [r75];
  L95():
    st cutoff = r75;
    parm11 = ld parm;
    check L96() else D34();
  D34():
    deopt 137 [parm11];
  L96():
    parm12 = force? parm11;
    checkMissing(parm12);
    s = toForSeq(parm12);
    l1 = length(s);
    i = 0;
    goto L23(i);
  L23(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l1, i2);
    if c10 then L97() else L34();
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st pm = x;
    object9 = ld object;
    check L98() else D35();
  L97():
    sym17 = ldf drop;
    base17 = ldf drop in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L137() else L138();
  D35():
    deopt 139 [i2, object9];
  L35(r109):
    popenv;
    return r109;
  L98():
    object10 = force? object9;
    checkMissing(object10);
    c11 = `is.object`(object10);
    if c11 then L99() else L100(i2, object10);
  L137():
    ci = ld ci;
    check L139() else D49();
  L138():
    r108 = dyn base17(<sym ci>);
    goto L35(r108);
  D49():
    deopt 203 [ci];
  L24(i8, dx3):
    st pro = dx3;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L107() else L108();
  L99():
    dr2 = tryDispatchBuiltin.1("[[", object10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L101() else L100(i2, dr2);
  L100(i6, object12):
    pnames8 = ld pnames;
    check L102() else D36();
  L139():
    ci1 = force? ci;
    checkMissing(ci1);
    drop = ldf drop in base;
    r110 = dyn drop(ci1);
    check L140() else D50();
  D36():
    deopt 141 [i6, object12, pnames8];
  D50():
    deopt 206 [r110];
  L26(i15, r79):
    c14 = `as.logical`(r79);
    if c14 then L110() else L27();
  L101():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(i2, dx2);
  L102():
    pnames9 = force? pnames8;
    checkMissing(pnames9);
    c12 = `is.object`(pnames9);
    if c12 then L103() else L104(i6, object12, pnames9);
  L107():
    pro = ld pro;
    check L109() else D38();
  L108():
    r78 = dyn base15(<sym pro>);
    goto L26(i8, r78);
  L140():
    goto L35(r110);
  D38():
    deopt 149 [i8, pro];
  L25(i12, object16, dx5):
    __3 = ldf `[[` in base;
    r77 = dyn __3(object16, dx5);
    goto L24(i12, r77);
  L27():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L113() else L114();
  L103():
    dr4 = tryDispatchBuiltin.1("[", pnames9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L105() else L104(i6, object12, dr4);
  L104(i10, object14, pnames11):
    pm = ld pm;
    check L106() else D37();
  L109():
    pro1 = force? pro;
    checkMissing(pro1);
    c13 = `==`(pro1, NULL);
    goto L26(i8, c13);
  L110():
    goto L23(i15);
  D37():
    deopt 143 [i10, object14, pnames11, pm];
  L29(i22, r82):
    r84 = `>`(r82, 1);
    c15 = `as.logical`(r84);
    if c15 then L117() else L30();
  L105():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(i6, object12, dx4);
  L106():
    pm1 = force? pm;
    __2 = ldf `[` in base;
    r76 = dyn __2(pnames11, pm1);
    goto L25(i10, object14, r76);
  L113():
    pnames12 = ld pnames;
    check L115() else D39();
  L114():
    r81 = dyn base16(<sym pnames>);
    goto L29(i15, r81);
  D39():
    deopt 158 [i15, pnames12];
  L30():
    spline1 = ldf spline;
    check L121() else D43();
  L31(i25):
    approx = ldf approx;
    check L123() else D45();
  L115():
    pnames13 = force? pnames12;
    checkMissing(pnames13);
    length1 = ldf length in base;
    r83 = dyn length1(pnames13);
    check L116() else D40();
  L117():
    spline = ldf spline;
    check L118() else D41();
  D40():
    deopt 161 [i15, r83];
  D41():
    deopt 165 [i22];
  D43():
    deopt 173 [i22];
  D45():
    deopt 181 [i25];
  L116():
    goto L29(i15, r83);
  L118():
    p13 = prom<V +>{
      pro2 = ld pro;
      pro3 = force? pro2;
      checkMissing(pro3);
      c16 = `is.object`(pro3);
      if c16 then L2() else L3();
    L0(dx7):
      c17 = `is.object`(dx7);
      if c17 then L5() else L6();
    L2():
      dr6 = tryDispatchBuiltin.1("[", pro3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3();
    L3():
      __4 = ldf `[` in base;
      r85 = dyn __4(pro3, <missing>, "par.vals");
      goto L0(r85);
    L1(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6();
    L6():
      pm2 = ld pm;
      pm3 = force? pm2;
      __5 = ldf `[` in base;
      r86 = dyn __5(dx7, <missing>, pm3);
      goto L1(r86);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx10);
    };
    p14 = prom<V +>{
      pro6 = ld pro;
      pro7 = force? pro6;
      checkMissing(pro7);
      c18 = `is.object`(pro7);
      if c18 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("[", pro7);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __6 = ldf `[` in base;
      r88 = dyn __6(pro7, <missing>, 1.0);
      goto L0(r88);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    r90 = dyn spline[x, y](p13, p14);
    check L119() else D42();
  L121():
    p15 = prom<V +>{
      pro10 = ld pro;
      pro11 = force? pro10;
      checkMissing(pro11);
      c19 = `is.object`(pro11);
      if c19 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[", pro11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __7 = ldf `[` in base;
      r92 = dyn __7(pro11, <missing>, "par.vals");
      goto L0(r92);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p16 = prom<V +>{
      pro14 = ld pro;
      pro15 = force? pro14;
      checkMissing(pro15);
      c20 = `is.object`(pro15);
      if c20 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("[", pro15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r94 = dyn __8(pro15, <missing>, 1.0);
      goto L0(r94);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r96 = dyn spline1[x, y](p15, p16);
    check L122() else D44();
  L123():
    p17 = prom<V +>{
      sp = ld sp;
      sp1 = force? sp;
      checkMissing(sp1);
      c21 = `is.object`(sp1);
      if c21 then L1() else L2(sp1);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("$", sp1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(sp3):
      r97 = `$`(sp3, <sym y>);
      goto L0(r97);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    p18 = prom<V +>{
      sp4 = ld sp;
      sp5 = force? sp4;
      checkMissing(sp5);
      c22 = `is.object`(sp5);
      if c22 then L1() else L2(sp5);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("$", sp5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(sp7):
      r99 = `$`(sp7, <sym x>);
      goto L0(r99);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p19 = prom<V +>{
      cutoff = ld cutoff;
      cutoff1 = force? cutoff;
      checkMissing(cutoff1);
      return cutoff1;
    };
    r102 = dyn approx[, , xout](p17, p18, p19);
    check L124() else D46();
  D42():
    deopt 170 [i22, r90];
  D44():
    deopt 178 [i22, r96];
  D46():
    deopt 186 [i25, r102];
  L119():
    st sp = r90;
    goto L31(i22);
  L122():
    st sp = r96;
    goto L31(i22);
  L124():
    c23 = `is.object`(r102);
    if c23 then L126() else L127(i25, r102);
  L125(i29, dx23):
    l2 = ld ci;
    c24 = `is.object`(l2);
    if c24 then L129() else L130(i29, dx23, l2);
  L126():
    dr20 = tryDispatchBuiltin.1("$", r102);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L128() else L127(i25, dr20);
  L127(i27, r104):
    r105 = `$`(r104, <sym y>);
    goto L125(i27, r105);
  L32(i33, dx29):
    st ci = dx29;
    goto L23(i33);
  L128():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L125(i25, dx22);
  L129():
    dr22 = tryDispatchBuiltin.0("[<-", l2, dx23);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L131() else L130(i29, dx23, dr22);
  L130(i31, dx25, l4):
    pnames14 = ld pnames;
    check L132() else D47();
  D47():
    deopt 189 [i31, dx25, l4, dx23, pnames14];
  L131():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L32(i29, dx27);
  L132():
    pnames15 = force? pnames14;
    checkMissing(pnames15);
    c25 = `is.object`(pnames15);
    if c25 then L133() else L134(i31, dx25, l4, dx23, pnames15);
  L33(i37, dx37, dx38, dx39):
    ___ = ldf `[<-` in base;
    r107 = dyn ___(l2, dx39, <missing>, dx38);
    goto L32(i37, r107);
  L133():
    dr24 = tryDispatchBuiltin.1("[", pnames15);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L135() else L134(i31, dx25, l4, dx23, dr24);
  L134(i35, dx32, l6, dx33, pnames17):
    pm4 = ld pm;
    check L136() else D48();
  D48():
    deopt 191 [i35, dx32, l6, dx33, pnames17, pm4];
  L135():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L33(i31, dx25, dx23, dx36);
  L136():
    pm5 = force? pm4;
    __9 = ldf `[` in base;
    r106 = dyn __9(pnames17, pm5);
    goto L33(i35, dx32, dx33, r106);
  }
}