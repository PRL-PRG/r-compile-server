fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2552018762;
    st functionArgs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2552018762(fun, text, S3methods, S4methods, `keep.dots`, `add.args`) {
  (reg fun:*, reg text:*, reg S3methods:*, reg S4methods:*, reg keep_dots:*, reg add_args:*) -+> V { var fun:*, var text:*, var S3methods:*, reg S3methods_isMissing:L, reg S3methods_orDefault:*, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r1:V, reg p:p(V +), var S4methods:*, reg S4methods_isMissing:L, reg S4methods_orDefault:*, var `keep.dots`:*, reg keep_dots_isMissing:L, reg keep_dots_orDefault:*, reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c2:L, reg _CompletionEnv7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r3:V, reg c3:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r4:V, reg p1:p(V +), var `add.args`:*, reg add_args_isMissing:L, reg add_args_orDefault:*, reg rc_getOption:cls, reg r6:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg fun1:*, reg fun2:V, reg length:cls, reg r10:V, reg r11:V, reg c4:L, reg c5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg c9:L, reg r13:V, reg fun3:*, reg fun4:V, reg r14:V, reg any:cls, reg r15:V, reg c10:L, reg c11:V, reg c13:L, reg character:cls, reg r16:V, reg specialFunctionArgs:cls, reg fun5:*, reg fun6:V, reg p3:p(V +), reg text1:*, reg text2:V, reg p4:p(V +), reg r21:V, reg S3methods1:*, reg S3methods2:V, reg c14:L, reg c16:V, reg exists:cls, reg fun7:*, reg fun8:V, reg p5:p(V +), reg r23:V, reg c17:L, reg c18:V, reg c20:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg fun9:*, reg fun10:V, reg tryCatch:cls, reg methods:cls, reg fun11:*, reg fun12:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:cls, reg p8:p(V +), reg r31:cls, reg p9:p(V +), reg r33:V, reg c21:cls, reg r34:V, reg S4methods1:*, reg S4methods2:V, reg c22:L, reg warning:cls, reg r36:V, reg unique:cls, reg unlist:cls, reg lapply:cls, reg fun13:*, reg fun14:V, reg p10:p(V +), reg argNames:*, reg argNames1:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg findMatches:cls, reg sprintf:cls, reg makeRegexpSafe:cls, reg text3:*, reg text4:V, reg p14:p(V +), reg r46:V, reg p15:p(V +), reg r48:V, reg p16:p(V +), reg allArgs:*, reg allArgs1:V, reg p17:p(V +), reg r51:V, reg ans:*, reg ans1:V, reg r52:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r53:V, reg r54:V, reg whereDots:*, reg whereDots1:V, reg any1:cls, reg r55:V, reg c23:L, reg ans2:*, reg ans3:V, reg c24:L, reg ans5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg whereDots2:*, reg whereDots3:V, reg r56:V, reg __2:cls, reg r57:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r58:V, reg r59:V, reg ans6:*, reg ans7:V, reg length1:cls, reg r60:V, reg c25:L, reg c27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r61:V, reg c30:L, reg r62:V, reg add_args1:*, reg add_args2:V, reg c31:V, reg r63:V, reg c32:L, reg c33:V, reg c35:L, reg sprintf1:cls, reg ans8:*, reg ans9:V, reg p18:p(V +), reg add_args3:*, reg add_args4:V, reg p19:p(V +), reg r66:V, reg keep_dots1:*, reg keep_dots2:V, reg c36:L, reg c38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r68:V, reg c41:L, reg r69:V, reg whereDots4:*, reg whereDots5:V, reg any2:cls, reg r70:V, reg c42:L, reg c43:V, reg c45:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r71:V, reg r72:V, reg ans10:*, reg ans11:V, reg c46:cls, reg r73:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r75:V, reg r76:V, reg specialFunArgs:*, reg specialFunArgs1:V, reg ans12:*, reg ans13:V, reg c47:cls, reg r77:V |
    mkenv;
    st fun = fun;
    st text = text;
    S3methods_isMissing = missing.0(S3methods);
    if S3methods_isMissing then L0() else L1(S3methods);
  L0():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      c = `is.object`(_CompletionEnv1);
      if c then L2() else L3(_CompletionEnv1);
    L1(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(_CompletionEnv3):
      r = `$`(_CompletionEnv3, <sym settings>);
      goto L1(r);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __ = ldf `[[` in base;
      r1 = dyn __(dx3, "S3");
      goto L0(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    goto L1(p);
  L1(S3methods_orDefault):
    st S3methods = S3methods_orDefault;
    S4methods_isMissing = missing.0(S4methods);
    if S4methods_isMissing then L2(FALSE) else L2(S4methods);
  L2(S4methods_orDefault):
    st S4methods = S4methods_orDefault;
    keep_dots_isMissing = missing.0(keep_dots);
    if keep_dots_isMissing then L3() else L4(keep_dots);
  L3():
    p1 = prom<V +>{
      _CompletionEnv4 = ld `.CompletionEnv`;
      _CompletionEnv5 = force? _CompletionEnv4;
      checkMissing(_CompletionEnv5);
      c2 = `is.object`(_CompletionEnv5);
      if c2 then L2() else L3(_CompletionEnv5);
    L1(dx7):
      c3 = `is.object`(dx7);
      if c3 then L5() else L6(dx7);
    L2():
      dr4 = tryDispatchBuiltin.1("$", _CompletionEnv5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(_CompletionEnv7):
      r3 = `$`(_CompletionEnv7, <sym settings>);
      goto L1(r3);
    L0(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx6);
    L5():
      dr6 = tryDispatchBuiltin.1("[[", dx7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx9):
      __1 = ldf `[[` in base;
      r4 = dyn __1(dx9, "dots");
      goto L0(r4);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx10);
    };
    goto L4(p1);
  L4(keep_dots_orDefault):
    st `keep.dots` = keep_dots_orDefault;
    add_args_isMissing = missing.0(add_args);
    if add_args_isMissing then L5() else L6(add_args);
  L5():
    p2 = prom<V +>{
      rc_getOption = ldf `rc.getOption`;
      r6 = dyn rc_getOption("funarg.suffix");
      return r6;
    };
    goto L6(p2);
  L6(add_args_orDefault):
    st `add.args` = add_args_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L7(r9):
    r11 = `<`(r9, 1);
    c4 = `as.logical`(r11);
    if c4 then L8(c4) else L37();
  L33():
    fun1 = ld fun;
    check L35() else D0();
  L34():
    r8 = dyn base(<sym fun>);
    goto L7(r8);
  D0():
    deopt 2 [fun1];
  L8(c5):
    c13 = `as.logical`(c5);
    if c13 then L43() else L10();
  L35():
    fun2 = force? fun1;
    checkMissing(fun2);
    length = ldf length in base;
    r10 = dyn length(fun2);
    check L36() else D1();
  L37():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  D1():
    deopt 5 [r10];
  L9(c9, r13):
    c10 = `as.logical`(r13);
    c11 = `||`(c9, c10);
    goto L8(c11);
  L10():
    specialFunctionArgs = ldf specialFunctionArgs;
    check L48() else D6();
  L36():
    goto L7(r10);
  L38():
    fun3 = ld fun;
    check L40() else D2();
  L39():
    r12 = dyn base1(<lang `==`(fun, "")>);
    goto L9(c4, r12);
  L43():
    character = ldf character;
    check L44() else D4();
  D2():
    deopt 10 [c4, fun3];
  D4():
    deopt 18 [];
  D6():
    deopt 24 [];
  L40():
    fun4 = force? fun3;
    checkMissing(fun4);
    r14 = `==`(fun4, "");
    any = ldf any in base;
    r15 = dyn any(r14);
    check L41() else D3();
  L44():
    r16 = dyn character();
    check L45() else D5();
  L48():
    p3 = prom<V +>{
      fun5 = ld fun;
      fun6 = force? fun5;
      checkMissing(fun6);
      return fun6;
    };
    p4 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r21 = dyn specialFunctionArgs(p3, p4);
    check L49() else D7();
  D3():
    deopt 15 [c4, r15];
  D5():
    deopt 19 [r16];
  D7():
    deopt 27 [r21];
  L41():
    goto L9(c4, r15);
  L45():
    popenv;
    return r16;
  L49():
    st specialFunArgs = r21;
    S3methods1 = ld S3methods;
    check L50() else D8();
  D8():
    deopt 29 [S3methods1];
  L50():
    S3methods2 = force? S3methods1;
    checkMissing(S3methods2);
    c14 = `as.logical`(S3methods2);
    if c14 then L51() else L12(c14);
  L12(c16):
    c20 = `as.logical`(c16);
    if c20 then L55() else L13();
  L51():
    exists = ldf exists;
    check L52() else D9();
  D9():
    deopt 32 [c14];
  L13():
    goto L15();
  L15():
    S4methods1 = ld S4methods;
    check L63() else D15();
  L52():
    p5 = prom<V +>{
      fun7 = ld fun;
      fun8 = force? fun7;
      checkMissing(fun8);
      return fun8;
    };
    r23 = dyn exists[, mode](p5, "function");
    check L53() else D10();
  L55():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  D10():
    deopt 36 [c14, r23];
  D15():
    deopt 55 [S4methods1];
  L14(r25):
    st fun = r25;
    goto L15();
  L53():
    c17 = `as.logical`(r23);
    c18 = `&&`(c14, c17);
    goto L12(c18);
  L56():
    fun9 = ld fun;
    check L58() else D11();
  L57():
    r24 = dyn base2(<sym fun>, <lang tryCatch(methods(fun), warning=function((w=), {}, NULL), error=function((e=), {}, NULL))>);
    goto L14(r24);
  L63():
    S4methods2 = force? S4methods1;
    checkMissing(S4methods2);
    c22 = `as.logical`(S4methods2);
    if c22 then L64() else L16();
  D11():
    deopt 40 [fun9];
  L16():
    goto L17();
  L17():
    unique = ldf unique;
    check L68() else D18();
  L58():
    fun10 = force? fun9;
    checkMissing(fun10);
    tryCatch = ldf tryCatch;
    check L59() else D12();
  L64():
    warning = ldf warning;
    check L65() else D16();
  D12():
    deopt 43 [];
  D16():
    deopt 58 [];
  D18():
    deopt 64 [];
  L59():
    p7 = prom<V +>{
      methods = ldf methods;
      p6 = prom<V +>{
        fun11 = ld fun;
        fun12 = force? fun11;
        checkMissing(fun12);
        return fun12;
      };
      r27 = dyn methods(p6);
      return r27;
    };
    p8 = prom<V +>{
      r29 = clos inner530606259;
      return r29;
    };
    p9 = prom<V +>{
      r31 = clos inner3708401697;
      return r31;
    };
    r33 = dyn tryCatch[, warning, error](p7, p8, p9);
    check L60() else D13();
  L65():
    r36 = dyn warning("cannot handle S4 methods yet");
    check L66() else D17();
  L68():
    p13 = prom<V +>{
      unlist = ldf unlist;
      p12 = prom<V +>{
        lapply = ldf lapply;
        p10 = prom<V +>{
          fun13 = ld fun;
          fun14 = force? fun13;
          checkMissing(fun14);
          return fun14;
        };
        p11 = prom<V +>{
          argNames = ld argNames;
          argNames1 = force? argNames;
          checkMissing(argNames1);
          return argNames1;
        };
        r40 = dyn lapply(p10, p11);
        return r40;
      };
      r42 = dyn unlist(p12);
      return r42;
    };
    r44 = dyn unique(p13);
    check L69() else D19();
  D13():
    deopt 49 [r33];
  D17():
    deopt 60 [r36];
  D19():
    deopt 66 [r44];
  L60():
    c21 = ldf c in base;
    r34 = dyn c21(fun10, r33);
    check L61() else D14();
  L66():
    goto L17();
  L69():
    st allArgs = r44;
    findMatches = ldf findMatches;
    check L70() else D20();
  D14():
    deopt 51 [r34];
  D20():
    deopt 69 [];
  L61():
    goto L14(r34);
  L70():
    p16 = prom<V +>{
      sprintf = ldf sprintf;
      p15 = prom<V +>{
        makeRegexpSafe = ldf makeRegexpSafe;
        p14 = prom<V +>{
          text3 = ld text;
          text4 = force? text3;
          checkMissing(text4);
          return text4;
        };
        r46 = dyn makeRegexpSafe(p14);
        return r46;
      };
      r48 = dyn sprintf("^%s", p15);
      return r48;
    };
    p17 = prom<V +>{
      allArgs = ld allArgs;
      allArgs1 = force? allArgs;
      checkMissing(allArgs1);
      return allArgs1;
    };
    r51 = dyn findMatches(p16, p17);
    check L71() else D21();
  D21():
    deopt 72 [r51];
  L71():
    st ans = r51;
    ans = ld ans;
    check L72() else D22();
  D22():
    deopt 74 [ans];
  L72():
    ans1 = force? ans;
    checkMissing(ans1);
    r52 = `==`(ans1, "...");
    st whereDots = r52;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L18(r54):
    c23 = `as.logical`(r54);
    if c23 then L77() else L19();
  L73():
    whereDots = ld whereDots;
    check L75() else D23();
  L74():
    r53 = dyn base3(<sym whereDots>);
    goto L18(r53);
  D23():
    deopt 81 [whereDots];
  L19():
    goto L21();
  L21():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  L75():
    whereDots1 = force? whereDots;
    checkMissing(whereDots1);
    any1 = ldf any in base;
    r55 = dyn any1(whereDots1);
    check L76() else D24();
  L77():
    ans2 = ld ans;
    check L78() else D25();
  D24():
    deopt 84 [r55];
  D25():
    deopt 85 [ans2];
  L22(r59):
    c25 = `as.logical`(r59);
    if c25 then L88() else L23(c25);
  L76():
    goto L18(r55);
  L78():
    ans3 = force? ans2;
    checkMissing(ans3);
    c24 = `is.object`(ans3);
    if c24 then L79() else L80(ans3);
  L84():
    ans6 = ld ans;
    check L86() else D27();
  L85():
    r58 = dyn base4(<sym ans>);
    goto L22(r58);
  D27():
    deopt 96 [ans6];
  L20(dx13):
    st ans = dx13;
    goto L21();
  L23(c27):
    c35 = `as.logical`(c27);
    if c35 then L93() else L25();
  L79():
    dr8 = tryDispatchBuiltin.1("[", ans3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L81() else L80(dr8);
  L80(ans5):
    whereDots2 = ld whereDots;
    check L82() else D26();
  L86():
    ans7 = force? ans6;
    checkMissing(ans7);
    length1 = ldf length in base;
    r60 = dyn length1(ans7);
    check L87() else D28();
  L88():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  D26():
    deopt 87 [ans5, whereDots2];
  D28():
    deopt 99 [r60];
  L24(c30, r62):
    r63 = `!`(r62);
    c32 = `as.logical`(r63);
    c33 = `&&`(c30, c32);
    goto L23(c33);
  L25():
    goto L26();
  L26():
    keep_dots1 = ld `keep.dots`;
    check L97() else D32();
  L81():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx12);
  L82():
    whereDots3 = force? whereDots2;
    checkMissing(whereDots3);
    r56 = `!`(whereDots3);
    __2 = ldf `[` in base;
    r57 = dyn __2(ans5, r56);
    goto L20(r57);
  L87():
    goto L22(r60);
  L89():
    add_args1 = ld `add.args`;
    check L91() else D29();
  L90():
    r61 = dyn base5(<sym add.args>);
    goto L24(c25, r61);
  L93():
    sprintf1 = ldf sprintf;
    check L94() else D30();
  D29():
    deopt 101 [c25, add_args1];
  D30():
    deopt 107 [];
  D32():
    deopt 115 [keep_dots1];
  L91():
    add_args2 = force? add_args1;
    checkMissing(add_args2);
    c31 = `==`(add_args2, NULL);
    goto L24(c25, c31);
  L94():
    p18 = prom<V +>{
      ans8 = ld ans;
      ans9 = force? ans8;
      checkMissing(ans9);
      return ans9;
    };
    p19 = prom<V +>{
      add_args3 = ld `add.args`;
      add_args4 = force? add_args3;
      checkMissing(add_args4);
      return add_args4;
    };
    r66 = dyn sprintf1("%s%s", p18, p19);
    check L95() else D31();
  L97():
    keep_dots2 = force? keep_dots1;
    checkMissing(keep_dots2);
    c36 = `as.logical`(keep_dots2);
    if c36 then L98() else L27(c36);
  D31():
    deopt 111 [r66];
  L27(c38):
    c45 = `as.logical`(c38);
    if c45 then L104() else L29();
  L95():
    st ans = r66;
    goto L26();
  L98():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L99() else L100();
  L28(c41, r69):
    c42 = `as.logical`(r69);
    c43 = `&&`(c41, c42);
    goto L27(c43);
  L29():
    goto L31();
  L31():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L110() else L111();
  L99():
    whereDots4 = ld whereDots;
    check L101() else D33();
  L100():
    r68 = dyn base6(<sym whereDots>);
    goto L28(c36, r68);
  L104():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  D33():
    deopt 119 [c36, whereDots4];
  L30(r72):
    st ans = r72;
    goto L31();
  L32(r76):
    popenv;
    return r76;
  L101():
    whereDots5 = force? whereDots4;
    checkMissing(whereDots5);
    any2 = ldf any in base;
    r70 = dyn any2(whereDots5);
    check L102() else D34();
  L105():
    ans10 = ld ans;
    check L107() else D35();
  L106():
    r71 = dyn base7(<sym ans>, "...");
    goto L30(r71);
  L110():
    specialFunArgs = ld specialFunArgs;
    check L112() else D37();
  L111():
    r75 = dyn base8(<sym specialFunArgs>, <sym ans>);
    goto L32(r75);
  D34():
    deopt 122 [c36, r70];
  D35():
    deopt 126 [ans10];
  D37():
    deopt 136 [specialFunArgs];
  L102():
    goto L28(c36, r70);
  L107():
    ans11 = force? ans10;
    checkMissing(ans11);
    c46 = ldf c in base;
    r73 = dyn c46(ans11, "...");
    check L108() else D36();
  L112():
    specialFunArgs1 = force? specialFunArgs;
    checkMissing(specialFunArgs1);
    ans12 = ld ans;
    check L113() else D38();
  D36():
    deopt 130 [r73];
  D38():
    deopt 138 [ans12];
  L108():
    goto L30(r73);
  L113():
    ans13 = force? ans12;
    checkMissing(ans13);
    c47 = ldf c in base;
    r77 = dyn c47(specialFunArgs1, ans13);
    check L114() else D39();
  D39():
    deopt 141 [r77];
  L114():
    goto L32(r77);
  }
}
fun inner530606259(w) {
  (reg w:*) -+> V { var w:* |
    mkenv;
    st w = w;
    popenv;
    return NULL;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}