fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3734944374;
    st `.signatureFromCall` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3734944374(fdef, expr, envir, doEval) {
  (reg fdef:*, reg expr:*, reg envir:*, reg doEval:*) -+> V { var fdef:*, var expr:*, var envir:*, var doEval:*, reg doEval_isMissing:L, reg doEval_orDefault:*, reg formals:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg match_call:cls, reg fdef3:*, reg fdef4:V, reg p1:p(V +), reg expr1:*, reg expr2:V, reg p2:p(V +), reg r4:V, reg call:*, reg call1:V, reg c:L, reg call3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg l:*, reg c1:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg dx12:V, reg l5:*, reg dx13:V, reg r7:V, reg call4:*, reg call5:V, reg c2:L, reg dx16:V, reg l7:*, reg dx17:V, reg call7:V, reg dr4:V, reg dc2:L, reg dx20:V, reg dx21:V, reg l9:*, reg dx22:V, reg dx23:V, reg __1:cls, reg r8:V, reg names:cls, reg r9:V, reg ___:cls, reg r10:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg call8:*, reg call9:V, reg names1:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg c3:L, reg __2:cls, reg r16:V, reg c4:L, reg r18:V, reg dr6:V, reg dc3:L, reg dx24:V, reg dx25:V, reg __3:cls, reg r19:V, reg l10:*, reg ___1:cls, reg ddd:*, reg r20:V, reg __4:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sigNames:*, reg sigNames1:V, reg length:cls, reg r26:V, reg rep_int:cls, reg r27:V, reg sigNames2:*, reg sigNames3:V, reg l11:*, reg names__:cls, reg r28:V, reg sigNames4:*, reg sigNames5:V, reg s:V, reg l12:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg __5:cls, reg r29:V, reg r30:cls, reg args:*, reg args1:V, reg p4:p(V +), reg arg:*, reg arg1:V, reg p5:p(V +), reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg i7:I, reg r35:V, reg missing:cls, reg r36:V, reg r37:V, reg c6:L, reg i9:I, reg c8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg i12:I, reg c11:L, reg r39:V, reg argExpr:*, reg argExpr1:V, reg c12:V, reg r40:V, reg c13:L, reg c14:V, reg c16:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg i18:I, reg r42:V, reg argExpr2:*, reg argExpr3:V, reg c17:L, reg c18:L, reg i19:I, reg c19:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg i23:I, reg c23:L, reg r44:V, reg argExpr4:*, reg argExpr5:V, reg c24:L, reg c25:L, reg c26:V, reg doEval1:*, reg doEval2:V, reg c28:L, reg i25:I, reg c29:V, reg simple:*, reg simple1:V, reg r45:V, reg c31:L, reg c32:V, reg c34:L, reg try:cls, reg eval:cls, reg argExpr6:*, reg argExpr7:V, reg p6:p(V +), reg envir1:*, reg envir2:V, reg p7:p(V +), reg r48:V, reg p8:p(V +), reg r50:V, reg __6:cls, reg r51:V, reg r52:cls, reg argVal:*, reg argVal1:V, reg p9:p(V +), reg r54:V, reg c35:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg arg2:*, reg arg3:V, reg p10:p(V +), reg r56:V, reg p11:p(V +), reg deparse:cls, reg argExpr8:*, reg argExpr9:V, reg p12:p(V +), reg r59:V, reg p13:p(V +), reg r61:V, reg p14:p(V +), reg r63:V, reg i32:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg i35:I, reg r66:V, reg argVal2:*, reg argVal3:V, reg class:cls, reg r67:V, reg c36:L, reg i37:I, reg r69:V, reg dr8:V, reg dc4:L, reg dx27:V, reg i39:I, reg dx28:V, reg __7:cls, reg r70:V, reg l13:*, reg c37:L, reg i41:I, reg dx30:V, reg l15:*, reg dr10:V, reg dc5:L, reg dx32:V, reg i43:I, reg dx33:V, reg dx34:V, reg arg4:*, reg arg5:V, reg ____:cls, reg r71:V, reg i44:I, reg dx35:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg i47:I, reg r73:V, reg argExpr10:*, reg argExpr11:V, reg as_character:cls, reg r74:V, reg l16:*, reg c38:L, reg i49:I, reg r76:V, reg l18:*, reg dr12:V, reg dc6:L, reg dx36:V, reg i51:I, reg r78:V, reg dx37:V, reg arg6:*, reg arg7:V, reg ____1:cls, reg r79:V, reg i52:I, reg sigClasses:*, reg sigClasses1:V |
    mkenv;
    st fdef = fdef;
    st expr = expr;
    st envir = envir;
    doEval_isMissing = missing.0(doEval);
    if doEval_isMissing then L0(TRUE) else L0(doEval);
  L0(doEval_orDefault):
    st doEval = doEval_orDefault;
    formals = ldf formals;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn formals(p);
    check L33() else D1();
  D1():
    deopt 3 [r1];
  L33():
    st args = r1;
    match_call = ldf `match.call`;
    check L34() else D2();
  D2():
    deopt 6 [];
  L34():
    p1 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p2 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r4 = dyn match_call[, , `expand.dots`](p1, p2, FALSE);
    check L35() else D3();
  D3():
    deopt 11 [r4];
  L35():
    st call = r4;
    call = ld call;
    check L36() else D4();
  D4():
    deopt 13 [call];
  L36():
    call1 = force? call;
    checkMissing(call1);
    c = `is.object`(call1);
    if c then L37() else L38(call1);
  L1(dx1):
    l = ld args;
    c1 = `is.object`(l);
    if c1 then L40() else L41(dx1, l);
  L37():
    dr = tryDispatchBuiltin.1("[", call1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(call3):
    __ = ldf `[` in base;
    r5 = dyn __(call3, -1);
    goto L1(r5);
  L2(dx7):
    st args = dx7;
    _in_ = ldf `%in%`;
    check L50() else D7();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L40():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dx1, dr2);
  L41(dx3, l2):
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  D7():
    deopt 31 [];
  L3(dx12, l5, dx13, r7):
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l5, dx13, r7);
    goto L2(r10);
  L42():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx5);
  L43():
    call4 = ld call;
    check L45() else D5();
  L44():
    r6 = dyn base(<lang `[`(call, `-`(1))>);
    goto L3(dx3, l2, dx1, r6);
  L50():
    p3 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      call8 = ld call;
      call9 = force? call8;
      checkMissing(call9);
      names1 = ldf names in base;
      r13 = dyn names1(call9);
      goto L0(r13);
    L2():
      r11 = dyn base1(<sym call>);
      goto L0(r11);
    };
    r15 = dyn _in_("...", p3);
    check L51() else D8();
  D5():
    deopt 21 [dx3, l2, dx1, call4];
  D8():
    deopt 34 [r15];
  L45():
    call5 = force? call4;
    checkMissing(call5);
    c2 = `is.object`(call5);
    if c2 then L46() else L47(dx3, l2, dx1, call5);
  L51():
    c3 = `as.logical`(r15);
    if c3 then L52() else L5();
  L4(dx21, l9, dx22, dx23):
    names = ldf names in base;
    r9 = dyn names(dx23);
    check L49() else D6();
  L5():
    goto L7();
  L7():
    __4 = ldf `@` in base;
    r21 = dyn __4(<sym fdef>, <sym signature>);
    st sigNames = r21;
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L46():
    dr4 = tryDispatchBuiltin.1("[", call5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dx3, l2, dx1, dr4);
  L47(dx16, l7, dx17, call7):
    __1 = ldf `[` in base;
    r8 = dyn __1(call7, -1);
    goto L4(dx16, l7, dx17, r8);
  L52():
    __2 = ldf `$` in base;
    r16 = dyn __2(<sym args>, <sym ...>);
    c4 = `is.object`(r16);
    if c4 then L53() else L54(r16);
  D6():
    deopt 27 [dx21, l9, dx22, r9];
  L6(dx25):
    l10 = ld args;
    ___1 = ldf `$<-`;
    check L56() else D9();
  L8(r23):
    st sigClasses = r23;
    sigNames2 = ld sigNames;
    check L66() else D14();
  L48():
    dx20 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx3, l2, dx1, dx20);
  L49():
    goto L3(dx21, l9, dx22, r9);
  L53():
    dr6 = tryDispatchBuiltin.1("[[", r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L55() else L54(dr6);
  L54(r18):
    __3 = ldf `[[` in base;
    r19 = dyn __3(r18, 1);
    goto L6(r19);
  L59():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L60():
    r22 = dyn base2("missing", <lang length(sigNames)>);
    goto L8(r22);
  D9():
    deopt 41 [dx25, l10, dx25];
  D14():
    deopt 63 [sigNames2];
  L9(r25):
    rep_int = ldf `rep.int` in base;
    r27 = dyn rep_int("missing", r25);
    check L65() else D13();
  L55():
    dx24 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx24);
  L56():
    ddd = ld `...`;
    r20 = dyn ___1[, , `...`, ](l10, NULL, ddd, dx25);
    check L57() else D10();
  L61():
    sigNames = ld sigNames;
    check L63() else D11();
  L62():
    r24 = dyn base3(<sym sigNames>);
    goto L9(r24);
  L66():
    sigNames3 = force? sigNames2;
    checkMissing(sigNames3);
    l11 = ld sigClasses;
    names__ = ldf `names<-`;
    check L67() else D15();
  D10():
    deopt 44 [dx25, r20];
  D11():
    deopt 56 [sigNames];
  D13():
    deopt 61 [r27];
  D15():
    deopt 66 [sigNames3, l11, sigNames3];
  L57():
    st args = r20;
    goto L7();
  L63():
    sigNames1 = force? sigNames;
    checkMissing(sigNames1);
    length = ldf length in base;
    r26 = dyn length(sigNames1);
    check L64() else D12();
  L65():
    goto L8(r27);
  L67():
    r28 = dyn names__(l11, NULL, sigNames3);
    check L68() else D16();
  D12():
    deopt 59 [r26];
  D16():
    deopt 68 [sigNames3, r28];
  L64():
    goto L9(r26);
  L68():
    st sigClasses = r28;
    sigNames4 = ld sigNames;
    check L69() else D17();
  D17():
    deopt 70 [sigNames4];
  L69():
    sigNames5 = force? sigNames4;
    checkMissing(sigNames5);
    s = toForSeq(sigNames5);
    l12 = length(s);
    i = 0;
    goto L12(i);
  L12(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l12, i2);
    if c5 then L11() else L31();
  L11():
    sigClasses = ld sigClasses;
    check L124() else D39();
  L31():
    x = `[[`(s, i2, NULL, TRUE);
    st arg = x;
    __5 = ldf `::`;
    check L70() else D18();
  D18():
    deopt 75 [i2];
  D39():
    deopt 163 [sigClasses];
  L70():
    r29 = dyn __5("methods", "elNamed");
    check L71() else D19();
  L124():
    sigClasses1 = force? sigClasses;
    checkMissing(sigClasses1);
    popenv;
    return sigClasses1;
  D19():
    deopt 78 [i2, r29];
  L71():
    checkFun.0(r29);
    r30 = r29 as cls;
    p4 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p5 = prom<V +>{
      arg = ld arg;
      arg1 = force? arg;
      checkMissing(arg1);
      return arg1;
    };
    r33 = dyn r30(p4, p5);
    check L72() else D20();
  D20():
    deopt 82 [i2, r33];
  L72():
    st argExpr = r33;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  L13(i7, r35):
    r37 = `!`(r35);
    c6 = `as.logical`(r37);
    if c6 then L75() else L14(i7, c6);
  L73():
    missing = ldf missing in base;
    r36 = dyn missing(<sym argExpr>);
    goto L13(i2, r36);
  L74():
    r34 = dyn base4(<sym argExpr>);
    goto L13(i2, r34);
  L14(i9, c8):
    c16 = `as.logical`(c8);
    if c16 then L80() else L16();
  L75():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L15(i12, c11, r39):
    r40 = `!`(r39);
    c13 = `as.logical`(r40);
    c14 = `&&`(c11, c13);
    goto L14(i12, c14);
  L16():
    goto L30(i9);
  L30(i52):
    goto L12(i52);
  L76():
    argExpr = ld argExpr;
    check L78() else D21();
  L77():
    r38 = dyn base5(<sym argExpr>);
    goto L15(i7, c6, r38);
  L80():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  D21():
    deopt 89 [i7, c6, argExpr];
  L17(i18, r42):
    c18 = `as.logical`(r42);
    if c18 then L18(i18, c18) else L84();
  L78():
    argExpr1 = force? argExpr;
    checkMissing(argExpr1);
    c12 = `==`(argExpr1, NULL);
    goto L15(i7, c6, c12);
  L81():
    argExpr2 = ld argExpr;
    check L83() else D22();
  L82():
    r41 = dyn base6(<sym argExpr>);
    goto L17(i9, r41);
  D22():
    deopt 95 [i9, argExpr2];
  L18(i19, c19):
    st simple = c19;
    doEval1 = ld doEval;
    check L89() else D24();
  L83():
    argExpr3 = force? argExpr2;
    checkMissing(argExpr3);
    c17 = `is.character`(argExpr3);
    goto L17(i9, c17);
  L84():
    sym7 = ldf `is.name`;
    base7 = ldf `is.name` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  D24():
    deopt 104 [i19, doEval1];
  L19(i23, c23, r44):
    c25 = `as.logical`(r44);
    c26 = `||`(c23, c25);
    goto L18(i23, c26);
  L85():
    argExpr4 = ld argExpr;
    check L87() else D23();
  L86():
    r43 = dyn base7(<sym argExpr>);
    goto L19(i18, c18, r43);
  L89():
    doEval2 = force? doEval1;
    checkMissing(doEval2);
    c28 = `as.logical`(doEval2);
    if c28 then L20(i19, c28) else L90();
  D23():
    deopt 99 [i18, c18, argExpr4];
  L20(i25, c29):
    c34 = `as.logical`(c29);
    if c34 then L93() else L21();
  L87():
    argExpr5 = force? argExpr4;
    checkMissing(argExpr5);
    c24 = `is.symbol`(argExpr5);
    goto L19(i18, c18, c24);
  L90():
    simple = ld simple;
    check L91() else D25();
  D25():
    deopt 106 [i19, c28, simple];
  L21():
    sym9 = ldf `as.character`;
    base9 = ldf `as.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  L27(i44, dx35):
    goto L30(i44);
  L91():
    simple1 = force? simple;
    checkMissing(simple1);
    r45 = `!`(simple1);
    c31 = `as.logical`(r45);
    c32 = `||`(c28, c31);
    goto L20(i19, c32);
  L93():
    try = ldf try;
    check L94() else D26();
  D26():
    deopt 111 [i25];
  L28(i47, r73):
    l16 = ld sigClasses;
    c38 = `is.object`(l16);
    if c38 then L119() else L120(i47, r73, l16);
  L94():
    p8 = prom<V +>{
      eval = ldf eval;
      p6 = prom<V +>{
        argExpr6 = ld argExpr;
        argExpr7 = force? argExpr6;
        checkMissing(argExpr7);
        return argExpr7;
      };
      p7 = prom<V +>{
        envir1 = ld envir;
        envir2 = force? envir1;
        checkMissing(envir2);
        return envir2;
      };
      r48 = dyn eval(p6, p7);
      return r48;
    };
    r50 = dyn try(p8);
    check L95() else D27();
  L115():
    argExpr10 = ld argExpr;
    check L117() else D36();
  L116():
    r72 = dyn base9(<sym argExpr>);
    goto L28(i25, r72);
  D27():
    deopt 113 [i25, r50];
  D36():
    deopt 148 [i25, argExpr10];
  L29(i51, r78, dx37):
    st sigClasses = dx37;
    goto L27(i51, r78);
  L95():
    st argVal = r50;
    __6 = ldf `::`;
    check L96() else D28();
  L117():
    argExpr11 = force? argExpr10;
    checkMissing(argExpr11);
    as_character = ldf `as.character` in base;
    r74 = dyn as_character(argExpr11);
    check L118() else D37();
  L119():
    dr12 = tryDispatchBuiltin.0("[[<-", l16, r73);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L121() else L120(i47, r73, dr12);
  L120(i49, r76, l18):
    arg6 = ld arg;
    check L122() else D38();
  D28():
    deopt 116 [i25];
  D37():
    deopt 151 [i25, r74];
  D38():
    deopt 153 [i49, r76, l18, r73, arg6];
  L96():
    r51 = dyn __6("methods", "is");
    check L97() else D29();
  L118():
    goto L28(i25, r74);
  L121():
    dx36 = getTryDispatchBuiltinValue(dr12);
    goto L29(i47, r73, dx36);
  L122():
    arg7 = force? arg6;
    ____1 = ldf `[[<-` in base;
    r79 = dyn ____1(l18, r73, arg7);
    goto L29(i49, r76, r79);
  D29():
    deopt 119 [i25, r51];
  L97():
    checkFun.0(r51);
    r52 = r51 as cls;
    p9 = prom<V +>{
      argVal = ld argVal;
      argVal1 = force? argVal;
      checkMissing(argVal1);
      return argVal1;
    };
    r54 = dyn r52(p9, "try-error");
    check L98() else D30();
  D30():
    deopt 123 [i25, r54];
  L98():
    c35 = `as.logical`(r54);
    if c35 then L99() else L22();
  L22():
    goto L23(i25);
  L23(i32):
    sym8 = ldf class;
    base8 = ldf class in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L103() else L104();
  L99():
    stop = ldf stop;
    check L100() else D31();
  D31():
    deopt 125 [i25];
  L24(i35, r66):
    c36 = `is.object`(r66);
    if c36 then L107() else L108(i35, r66);
  L100():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          arg2 = ld arg;
          arg3 = force? arg2;
          checkMissing(arg3);
          return arg3;
        };
        r56 = dyn sQuote(p10);
        return r56;
      };
      p13 = prom<V +>{
        deparse = ldf deparse;
        p12 = prom<V +>{
          argExpr8 = ld argExpr;
          argExpr9 = force? argExpr8;
          checkMissing(argExpr9);
          return argExpr9;
        };
        r59 = dyn deparse(p12);
        return r59;
      };
      r61 = dyn gettextf("error in trying to evaluate the expression for argument %s (%s)", p11, p13);
      return r61;
    };
    r63 = dyn stop[, domain](p14, NA_LGL);
    check L101() else D32();
  L103():
    argVal2 = ld argVal;
    check L105() else D33();
  L104():
    r65 = dyn base8(<sym argVal>);
    goto L24(i32, r65);
  D32():
    deopt 129 [i25, r63];
  D33():
    deopt 134 [i32, argVal2];
  L25(i39, dx28):
    l13 = ld sigClasses;
    c37 = `is.object`(l13);
    if c37 then L110() else L111(i39, dx28, l13);
  L101():
    goto L23(i25);
  L105():
    argVal3 = force? argVal2;
    checkMissing(argVal3);
    class = ldf class in base;
    r67 = dyn class(argVal3);
    check L106() else D34();
  L107():
    dr8 = tryDispatchBuiltin.1("[", r66);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L109() else L108(i35, dr8);
  L108(i37, r69):
    __7 = ldf `[` in base;
    r70 = dyn __7(r69, 1);
    goto L25(i37, r70);
  D34():
    deopt 137 [i32, r67];
  L26(i43, dx33, dx34):
    st sigClasses = dx34;
    goto L27(i43, dx33);
  L106():
    goto L24(i32, r67);
  L109():
    dx27 = getTryDispatchBuiltinValue(dr8);
    goto L25(i35, dx27);
  L110():
    dr10 = tryDispatchBuiltin.0("[[<-", l13, dx28);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L112() else L111(i39, dx28, dr10);
  L111(i41, dx30, l15):
    arg4 = ld arg;
    check L113() else D35();
  D35():
    deopt 142 [i41, dx30, l15, dx28, arg4];
  L112():
    dx32 = getTryDispatchBuiltinValue(dr10);
    goto L26(i39, dx28, dx32);
  L113():
    arg5 = force? arg4;
    ____ = ldf `[[<-` in base;
    r71 = dyn ____(l15, dx28, arg5);
    goto L26(i41, dx30, r71);
  }
}