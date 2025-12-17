fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3560810862;
    st invokeRestartInteractively = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3560810862(r) {
  (reg r:*) -+> V { var r:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg interactive:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg isRestart:cls, reg r7:*, reg r8:V, reg p:p(V +), reg r10:V, reg r11:V, reg c1:L, reg findRestart:cls, reg r12:*, reg r13:V, reg p1:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg res:*, reg res1:V, reg c2:V, reg c3:L, reg stop1:cls, reg gettextf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg r20:*, reg r21:V, reg as_character:cls, reg r22:V, reg p2:p(V +), reg r24:V, reg p3:p(V +), reg r26:V, reg res2:*, reg res3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg r30:*, reg r31:V, reg c4:L, reg r33:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg c5:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg restartFormals:cls, reg r37:*, reg r38:V, reg p4:p(V +), reg r40:V, reg names:cls, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg pars:*, reg pars1:V, reg length:cls, reg r44:V, reg c7:L, reg cat:cls, reg r45:V, reg pars2:*, reg pars3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg p5:*, reg p6:V, reg r46:V, reg c9:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg i9:I, reg r48:V, reg args:*, reg args1:V, reg eval:cls, reg parse:cls, reg prompt:*, reg prompt1:V, reg p7:p(V +), reg r50:V, reg p8:p(V +), reg r52:V, reg c10:cls, reg r53:V, reg i10:I, reg paste0:cls, reg p9:*, reg p10:V, reg p11:p(V +), reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg i13:I, reg r58:V, reg args2:*, reg args3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg i16:I, reg r60:V, reg eval1:cls, reg parse1:cls, reg prompt2:*, reg prompt3:V, reg p12:p(V +), reg r62:V, reg p13:p(V +), reg r64:V, reg list:cls, reg r65:V, reg c11:cls, reg r66:V, reg i17:V, reg r67:*, reg r68:V, reg c12:L, reg r70:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r71:V, reg dx4:cls, reg r72:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg r74:V, reg r75:*, reg r76:V, reg args4:*, reg args5:V, reg _invokeRestart:cls, reg r77:V |
    mkenv;
    st r = r;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L0(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L28() else L1();
  L25():
    interactive = ldf interactive in base;
    r3 = dyn interactive();
    check L27() else D0();
  L26():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 3 [r3];
  L1():
    goto L2();
  L2():
    isRestart = ldf isRestart;
    check L32() else D3();
  L27():
    goto L0(r3);
  L28():
    stop = ldf stop;
    check L29() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 12 [];
  L29():
    r5 = dyn stop("not an interactive session");
    check L30() else D2();
  L32():
    p = prom<V +>{
      r7 = ld r;
      r8 = force? r7;
      checkMissing(r8);
      return r8;
    };
    r10 = dyn isRestart(p);
    check L33() else D4();
  D2():
    deopt 8 [r5];
  D4():
    deopt 14 [r10];
  L30():
    goto L2();
  L33():
    r11 = `!`(r10);
    c1 = `as.logical`(r11);
    if c1 then L34() else L3();
  L3():
    goto L7();
  L7():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L34():
    findRestart = ldf findRestart;
    check L35() else D5();
  D5():
    deopt 17 [];
  L8(r29):
    c6 = `as.logical`(r29);
    if c6 then L53() else L9();
  L35():
    p1 = prom<V +>{
      r12 = ld r;
      r13 = force? r12;
      checkMissing(r13);
      return r13;
    };
    r15 = dyn findRestart(p1);
    check L36() else D6();
  L46():
    r30 = ld r;
    check L48() else D11();
  L47():
    r28 = dyn base3(<lang `$`(r, interactive)>);
    goto L8(r28);
  D6():
    deopt 19 [r15];
  D11():
    deopt 39 [r30];
  L9():
    r67 = ld r;
    check L89() else D32();
  L23():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L36():
    st res = r15;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L48():
    r31 = force? r30;
    checkMissing(r31);
    c4 = `is.object`(r31);
    if c4 then L50() else L51(r31);
  L53():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  D32():
    deopt 114 [r67];
  L4(r17):
    c3 = `as.logical`(r17);
    if c3 then L40() else L5();
  L10(r36):
    st pars = r36;
    st args = NULL;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L24(r74):
    popenv;
    return r74;
  L37():
    res = ld res;
    check L39() else D7();
  L38():
    r16 = dyn base1(<sym res>);
    goto L4(r16);
  L49(dx1):
    c5 = `==`(dx1, NULL);
    goto L8(c5);
  L50():
    dr = tryDispatchBuiltin.1("$", r31);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(dr);
  L51(r33):
    r34 = `$`(r33, <sym interactive>);
    goto L49(r34);
  L54():
    restartFormals = ldf restartFormals;
    check L56() else D12();
  L55():
    r35 = dyn base4(<lang restartFormals(r)>);
    goto L10(r35);
  L89():
    r68 = force? r67;
    checkMissing(r68);
    c12 = `is.object`(r68);
    if c12 then L91() else L92(r68);
  L95():
    r75 = ld r;
    check L97() else D34();
  L96():
    r73 = dyn base9(<lang .invokeRestart(r, args)>);
    goto L24(r73);
  D7():
    deopt 22 [res];
  D12():
    deopt 46 [];
  D34():
    deopt 122 [r75];
  L5():
    goto L6();
  L6():
    res2 = ld res;
    check L44() else D10();
  L11(r43):
    c7 = `as.logical`(r43);
    if c7 then L63() else L12();
  L39():
    res1 = force? res;
    checkMissing(res1);
    c2 = `==`(res1, NULL);
    goto L4(c2);
  L40():
    stop1 = ldf stop;
    check L41() else D8();
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L49(dx);
  L56():
    p4 = prom<V +>{
      r37 = ld r;
      r38 = force? r37;
      checkMissing(r38);
      return r38;
    };
    r40 = dyn restartFormals(p4);
    check L57() else D13();
  L59():
    pars = ld pars;
    check L61() else D15();
  L60():
    r42 = dyn base5(<sym pars>);
    goto L11(r42);
  L90(dx3):
    checkFun.0(dx3);
    dx4 = dx3 as cls;
    r72 = dyn dx4();
    check L94() else D33();
  L91():
    dr2 = tryDispatchBuiltin.1("$", r68);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L93() else L92(dr2);
  L92(r70):
    r71 = `$`(r70, <sym interactive>);
    goto L90(r71);
  L97():
    r76 = force? r75;
    checkMissing(r76);
    args4 = ld args;
    check L98() else D35();
  D8():
    deopt 26 [];
  D10():
    deopt 33 [res2];
  D13():
    deopt 48 [r40];
  D15():
    deopt 57 [pars];
  D33():
    deopt 118 [r72];
  D35():
    deopt 124 [args4];
  L12():
    goto L22(NULL);
  L22(i17):
    goto L23();
  L41():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sym2 = ldf `as.character`;
        base2 = ldf `as.character` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r19):
        return r19;
      L1():
        r20 = ld r;
        r21 = force? r20;
        checkMissing(r21);
        as_character = ldf `as.character` in base;
        r22 = dyn as_character(r21);
        goto L0(r22);
      L2():
        r18 = dyn base2(<sym r>);
        goto L0(r18);
      };
      r24 = dyn gettextf("no 'restart' '%s' found", p2);
      return r24;
    };
    r26 = dyn stop1[, domain](p3, NA_LGL);
    check L42() else D9();
  L44():
    res3 = force? res2;
    checkMissing(res3);
    st r = res3;
    goto L7();
  L57():
    names = ldf names in base;
    r41 = dyn names(r40);
    check L58() else D14();
  L61():
    pars1 = force? pars;
    checkMissing(pars1);
    length = ldf length in base;
    r44 = dyn length(pars1);
    check L62() else D16();
  L63():
    cat = ldf cat;
    check L64() else D17();
  L93():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L90(dx2);
  L94():
    st args = r72;
    goto L23();
  L98():
    args5 = force? args4;
    checkMissing(args5);
    _invokeRestart = ldf `.invokeRestart` in base;
    r77 = dyn _invokeRestart(r76, args5);
    check L99() else D36();
  D9():
    deopt 30 [r26];
  D14():
    deopt 50 [r41];
  D16():
    deopt 60 [r44];
  D17():
    deopt 62 [];
  D36():
    deopt 127 [r77];
  L42():
    goto L6();
  L58():
    goto L10(r41);
  L62():
    goto L11(r44);
  L64():
    r45 = dyn cat("Enter values for restart arguments:\n\n");
    check L65() else D18();
  L99():
    goto L24(r77);
  D18():
    deopt 64 [r45];
  L65():
    pars2 = ld pars;
    check L66() else D19();
  D19():
    deopt 65 [pars2];
  L66():
    pars3 = force? pars2;
    checkMissing(pars3);
    s = toForSeq(pars3);
    l = length(s);
    i = 0;
    goto L15(i);
  L15(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L14() else L21();
  L14():
    goto L22(i2);
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    p5 = ld p;
    check L67() else D20();
  D20():
    deopt 69 [i2, p5];
  L67():
    p6 = force? p5;
    checkMissing(p6);
    r46 = `==`(p6, "...");
    c9 = `as.logical`(r46);
    if c9 then L68() else L16();
  L16():
    paste0 = ldf paste0;
    check L76() else D25();
  L18(i10):
    goto L15(i10);
  L68():
    st prompt = "... (a list): ";
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  D25():
    deopt 88 [i2];
  L17(i9, r48):
    st args = r48;
    goto L18(i9);
  L69():
    args = ld args;
    check L71() else D21();
  L70():
    r47 = dyn base6(<sym args>, <lang eval(parse(prompt=prompt))>);
    goto L17(i2, r47);
  L76():
    p11 = prom<V +>{
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      return p10;
    };
    r56 = dyn paste0(p11, ": ");
    check L77() else D26();
  D21():
    deopt 78 [i2, args];
  D26():
    deopt 91 [i2, r56];
  L71():
    args1 = force? args;
    checkMissing(args1);
    eval = ldf eval;
    check L72() else D22();
  L77():
    st prompt = r56;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  D22():
    deopt 81 [i2];
  L19(i13, r58):
    st args = r58;
    goto L18(i13);
  L72():
    p8 = prom<V +>{
      parse = ldf parse;
      p7 = prom<V +>{
        prompt = ld prompt;
        prompt1 = force? prompt;
        checkMissing(prompt1);
        return prompt1;
      };
      r50 = dyn parse[prompt](p7);
      return r50;
    };
    r52 = dyn eval(p8);
    check L73() else D23();
  L78():
    args2 = ld args;
    check L80() else D27();
  L79():
    r57 = dyn base7(<sym args>, <lang list(eval(parse(prompt=prompt)))>);
    goto L19(i2, r57);
  D23():
    deopt 83 [i2, r52];
  D27():
    deopt 95 [i2, args2];
  L73():
    c10 = ldf c in base;
    r53 = dyn c10(args1, r52);
    check L74() else D24();
  L80():
    args3 = force? args2;
    checkMissing(args3);
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  D24():
    deopt 85 [i2, r53];
  L20(i16, r60):
    c11 = ldf c in base;
    r66 = dyn c11(args3, r60);
    check L86() else D31();
  L74():
    goto L17(i2, r53);
  L81():
    eval1 = ldf eval;
    check L83() else D28();
  L82():
    r59 = dyn base8(<lang eval(parse(prompt=prompt))>);
    goto L20(i2, r59);
  D28():
    deopt 100 [i2];
  D31():
    deopt 106 [i16, r66];
  L83():
    p13 = prom<V +>{
      parse1 = ldf parse;
      p12 = prom<V +>{
        prompt2 = ld prompt;
        prompt3 = force? prompt2;
        checkMissing(prompt3);
        return prompt3;
      };
      r62 = dyn parse1[prompt](p12);
      return r62;
    };
    r64 = dyn eval1(p13);
    check L84() else D29();
  L86():
    goto L19(i16, r66);
  D29():
    deopt 102 [i2, r64];
  L84():
    list = ldf list in base;
    r65 = dyn list(r64);
    check L85() else D30();
  D30():
    deopt 104 [i2, r65];
  L85():
    goto L20(i2, r65);
  }
}