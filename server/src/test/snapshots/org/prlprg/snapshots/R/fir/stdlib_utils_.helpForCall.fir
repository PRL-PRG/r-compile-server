fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3408527011;
    st `.helpForCall` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3408527011(expr, envir, doEval) {
  (reg expr:*, reg envir:*, reg doEval:*) -+> V { var expr:*, var envir:*, var doEval:*, reg doEval_isMissing:L, reg doEval_orDefault:*, reg r:cls, reg expr1:*, reg expr2:V, reg c:L, reg expr4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg f:*, reg f1:V, reg is_call:cls, reg r4:V, reg c1:L, reg c3:V, reg f2:*, reg f3:V, reg c4:L, reg c6:L, reg f5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c8:L, reg dx3:V, reg __1:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c11:L, reg dx6:V, reg r7:V, reg quote:cls, reg r8:V, reg r9:V, reg c12:L, reg c13:L, reg c14:V, reg f6:*, reg f7:V, reg c17:L, reg c20:L, reg c21:L, reg f9:V, reg dr4:V, reg dc2:L, reg dx7:V, reg c24:L, reg c25:L, reg dx8:V, reg __2:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c30:L, reg c31:L, reg dx11:V, reg r12:V, reg quote1:cls, reg r13:V, reg r14:V, reg c32:L, reg c33:V, reg c36:L, reg c37:V, reg c39:L, reg f10:*, reg f11:V, reg c40:L, reg f13:V, reg dr6:V, reg dc3:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r15:V, reg paste0:cls, reg package:*, reg package1:V, reg p:p(V +), reg r17:V, reg _in_:cls, reg where:*, reg where1:V, reg p1:p(V +), reg search:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg r22:V, reg c41:L, reg f14:*, reg f15:V, reg c42:L, reg f17:V, reg dr8:V, reg dc4:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r24:V, reg topenv:cls, reg envir1:*, reg envir2:V, reg p3:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg f18:*, reg f19:V, reg c43:L, reg c44:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg f20:*, reg f21:V, reg as_character:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg where2:*, reg where3:V, reg c45:V, reg c46:L, reg c47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg c51:L, reg r36:V, reg _isMethodsDispatchOn:cls, reg r37:V, reg r38:V, reg c52:L, reg c53:V, reg c55:L, reg c56:V, reg __5:cls, reg r39:V, reg r40:cls, reg f22:*, reg f23:V, reg p4:p(V +), reg where4:*, reg where5:V, reg p5:p(V +), reg r43:V, reg r44:V, reg c58:L, reg c59:V, reg c61:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg f24:*, reg f25:V, reg c62:L, reg r47:V, reg c63:L, reg c64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg c68:L, reg r49:V, reg f26:*, reg f27:V, reg length:cls, reg r50:V, reg r51:V, reg c69:L, reg c70:V, reg c72:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg f28:*, reg f29:V, reg class:cls, reg r54:V, reg p6:p(V +), reg r56:V, reg p7:p(V +), reg sQuote:cls, reg deparse:cls, reg expr5:*, reg expr6:V, reg p8:p(V +), reg r59:V, reg p9:p(V +), reg r61:V, reg p10:p(V +), reg r63:V, reg p11:p(V +), reg r65:V, reg _tryHelp:cls, reg f30:*, reg f31:V, reg p12:p(V +), reg package2:*, reg package3:V, reg p13:p(V +), reg r69:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg h:*, reg h1:V, reg c73:V, reg c74:L, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg f32:*, reg f33:V, reg p14:p(V +), reg r73:V, reg p15:p(V +), reg r75:V, reg p16:p(V +), reg r77:V, reg r78:V, reg __6:cls, reg r80:V, reg r81:cls, reg f34:*, reg f35:V, reg p17:p(V +), reg r83:V, reg c75:L, reg f36:*, reg f37:V, reg __7:cls, reg r84:V, reg __8:cls, reg r86:V, reg r87:cls, reg f38:*, reg f39:V, reg p18:p(V +), reg where6:*, reg where7:V, reg p19:p(V +), reg r90:V, reg _signatureFromCall:cls, reg fdef:*, reg fdef1:V, reg p20:p(V +), reg expr7:*, reg expr8:V, reg p21:p(V +), reg envir3:*, reg envir4:V, reg p22:p(V +), reg doEval1:*, reg doEval2:V, reg p23:p(V +), reg r95:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r96:V, reg r97:V, reg sigClasses:*, reg sigClasses1:V, reg names:cls, reg r98:V, reg __9:cls, reg r99:V, reg r100:cls, reg f40:*, reg f41:V, reg p24:p(V +), reg sigClasses2:*, reg sigClasses3:V, reg p25:p(V +), reg fdef2:*, reg fdef3:V, reg p26:p(V +), reg r104:V, reg __10:cls, reg r105:V, reg r106:cls, reg method:*, reg method1:V, reg p27:p(V +), reg r108:V, reg c76:L, reg __11:cls, reg r109:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r110:V, reg r111:V, reg sigClasses4:*, reg sigClasses5:V, reg length1:cls, reg r112:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r115:V, reg r116:V, reg r117:V, reg sigNames:*, reg sigNames1:V, reg length2:cls, reg r118:V, reg r119:V, reg c77:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r120:V, reg r121:V, reg sigClasses6:*, reg sigClasses7:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r122:V, reg r123:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r124:V, reg r125:V, reg sigNames2:*, reg sigNames3:V, reg length3:cls, reg r126:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r129:V, reg r130:V, reg r131:V, reg sigClasses8:*, reg sigClasses9:V, reg length4:cls, reg r132:V, reg r133:V, reg rep_int:cls, reg r134:V, reg c78:cls, reg r135:V, reg r136:V, reg warning:cls, reg gettextf2:cls, reg sQuote2:cls, reg f42:*, reg f43:V, reg p28:p(V +), reg r139:V, reg p29:p(V +), reg sQuote3:cls, reg sigFormat:cls, reg sigNames4:*, reg sigNames5:V, reg p30:p(V +), reg sigClasses10:*, reg sigClasses11:V, reg p31:p(V +), reg r143:V, reg p32:p(V +), reg r145:V, reg p33:p(V +), reg r147:V, reg p34:p(V +), reg r149:V, reg topicName:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r150:V, reg r151:V, reg f44:*, reg f45:V, reg sigClasses12:*, reg sigClasses13:V, reg c79:cls, reg r152:V, reg p35:p(V +), reg r154:V, reg _tryHelp1:cls, reg topic:*, reg topic1:V, reg p36:p(V +), reg package4:*, reg package5:V, reg p37:p(V +), reg r157:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r158:V, reg r159:V, reg h2:*, reg h3:V, reg c80:V, reg c81:L, reg stop2:cls, reg gettextf3:cls, reg sQuote4:cls, reg f46:*, reg f47:V, reg p38:p(V +), reg r161:V, reg p39:p(V +), reg sQuote5:cls, reg sigFormat1:cls, reg sigNames6:*, reg sigNames7:V, reg p40:p(V +), reg sigClasses14:*, reg sigClasses15:V, reg p41:p(V +), reg r165:V, reg p42:p(V +), reg r167:V, reg p43:p(V +), reg r169:V, reg p44:p(V +), reg r171:V, reg h4:*, reg h5:V |
    mkenv;
    st expr = expr;
    st envir = envir;
    doEval_isMissing = missing.0(doEval);
    if doEval_isMissing then L0(TRUE) else L0(doEval);
  L0(doEval_orDefault):
    st doEval = doEval_orDefault;
    r = clos inner734514464;
    st sigFormat = r;
    expr1 = ld expr;
    check L48() else D0();
  D0():
    deopt 3 [expr1];
  L48():
    expr2 = force? expr1;
    checkMissing(expr2);
    c = `is.object`(expr2);
    if c then L49() else L50(expr2);
  L1(dx1):
    st f = dx1;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L52() else L53();
  L49():
    dr = tryDispatchBuiltin.1("[[", expr2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(expr4):
    __ = ldf `[[` in base;
    r1 = dyn __(expr4, 1);
    goto L1(r1);
  L2(r3):
    c1 = `as.logical`(r3);
    if c1 then L56() else L3(c1);
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L52():
    f = ld f;
    check L54() else D1();
  L53():
    r2 = dyn base(<sym f>);
    goto L2(r2);
  D1():
    deopt 11 [f];
  L3(c3):
    c39 = `as.logical`(c3);
    if c39 then L72() else L9();
  L54():
    f1 = force? f;
    checkMissing(f1);
    is_call = ldf `is.call` in base;
    r4 = dyn is_call(f1);
    check L55() else D2();
  L56():
    f2 = ld f;
    check L57() else D3();
  D2():
    deopt 14 [r4];
  D3():
    deopt 15 [c1, f2];
  L9():
    st package = NULL;
    topenv = ldf topenv;
    check L88() else D11();
  L14():
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L90() else L91();
  L55():
    goto L2(r4);
  L57():
    f3 = force? f2;
    checkMissing(f3);
    c4 = `is.object`(f3);
    if c4 then L58() else L59(c1, f3);
  L72():
    f10 = ld f;
    check L73() else D5();
  D5():
    deopt 33 [f10];
  D11():
    deopt 66 [];
  L4(c8, dx3):
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L61() else L62();
  L15(r28):
    c44 = `as.logical`(r28);
    if c44 then L93() else L16();
  L58():
    dr2 = tryDispatchBuiltin.1("[[", f3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(c1, dr2);
  L59(c6, f5):
    __1 = ldf `[[` in base;
    r5 = dyn __1(f5, 1);
    goto L4(c6, r5);
  L73():
    f11 = force? f10;
    checkMissing(f11);
    c40 = `is.object`(f11);
    if c40 then L74() else L75(f11);
  L88():
    p3 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r26 = dyn topenv(p3);
    check L89() else D12();
  L90():
    f18 = ld f;
    check L92() else D13();
  L91():
    r27 = dyn base3(<sym f>);
    goto L15(r27);
  D12():
    deopt 68 [r26];
  D13():
    deopt 71 [f18];
  L5(c11, dx6, r7):
    r9 = `==`(dx6, r7);
    c12 = `as.logical`(r9);
    if c12 then L6(c11, c12) else L63();
  L10(dx13):
    st package = dx13;
    paste0 = ldf paste0;
    check L77() else D6();
  L16():
    goto L18();
  L18():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(c1, dx2);
  L61():
    quote = ldf quote in base;
    r8 = dyn quote(<sym `::`>);
    goto L5(c8, dx3, r8);
  L62():
    r6 = dyn base1(<sym `::`>);
    goto L5(c8, dx3, r6);
  L74():
    dr6 = tryDispatchBuiltin.1("[[", f11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L76() else L75(dr6);
  L75(f13):
    __3 = ldf `[[` in base;
    r15 = dyn __3(f13, 2);
    goto L10(r15);
  L89():
    st where = r26;
    goto L14();
  L92():
    f19 = force? f18;
    checkMissing(f19);
    c43 = `is.symbol`(f19);
    goto L15(c43);
  L93():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L94() else L95();
  D6():
    deopt 40 [];
  L6(c13, c14):
    c36 = `as.logical`(c14);
    c37 = `&&`(c13, c36);
    goto L3(c37);
  L17(r30):
    st f = r30;
    goto L18();
  L19(r34):
    c46 = `as.logical`(r34);
    if c46 then L20(c46) else L102();
  L63():
    f6 = ld f;
    check L64() else D4();
  L76():
    dx12 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx12);
  L77():
    p = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      return package1;
    };
    r17 = dyn paste0("package:", p);
    check L78() else D7();
  L94():
    f20 = ld f;
    check L96() else D14();
  L95():
    r29 = dyn base4(<sym f>);
    goto L17(r29);
  L99():
    where2 = ld where;
    check L101() else D16();
  L100():
    r33 = dyn base5(<sym where>);
    goto L19(r33);
  D4():
    deopt 23 [c11, c12, f6];
  D7():
    deopt 43 [r17];
  D14():
    deopt 76 [f20];
  D16():
    deopt 84 [where2];
  L20(c47):
    c55 = `as.logical`(c47);
    if c55 then L22(c55) else L107();
  L64():
    f7 = force? f6;
    checkMissing(f7);
    c17 = `is.object`(f7);
    if c17 then L65() else L66(c11, c12, f7);
  L78():
    st where = r17;
    _in_ = ldf `%in%`;
    check L79() else D8();
  L96():
    f21 = force? f20;
    checkMissing(f21);
    as_character = ldf `as.character` in base;
    r31 = dyn as_character(f21);
    check L97() else D15();
  L101():
    where3 = force? where2;
    checkMissing(where3);
    c45 = `==`(where3, NULL);
    goto L19(c45);
  L102():
    sym6 = ldf `.isMethodsDispatchOn`;
    base6 = ldf `.isMethodsDispatchOn` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  D8():
    deopt 46 [];
  D15():
    deopt 79 [r31];
  L7(c24, c25, dx8):
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L21(c51, r36):
    r38 = `!`(r36);
    c52 = `as.logical`(r38);
    c53 = `||`(c51, c52);
    goto L20(c53);
  L22(c56):
    c61 = `as.logical`(c56);
    if c61 then L112() else L23();
  L65():
    dr4 = tryDispatchBuiltin.1("[[", f7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L67() else L66(c11, c12, dr4);
  L66(c20, c21, f9):
    __2 = ldf `[[` in base;
    r10 = dyn __2(f9, 1);
    goto L7(c20, c21, r10);
  L79():
    p1 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    p2 = prom<V +>{
      search = ldf search;
      r19 = dyn search();
      return r19;
    };
    r21 = dyn _in_(p1, p2);
    check L80() else D9();
  L97():
    goto L17(r31);
  L103():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r37 = dyn _isMethodsDispatchOn();
    check L105() else D17();
  L104():
    r35 = dyn base6();
    goto L21(c46, r35);
  L107():
    __5 = ldf `::`;
    check L108() else D18();
  D9():
    deopt 49 [r21];
  D17():
    deopt 90 [c46, r37];
  D18():
    deopt 94 [c55];
  L8(c30, c31, dx11, r12):
    r14 = `==`(dx11, r12);
    c32 = `as.logical`(r14);
    c33 = `||`(c31, c32);
    goto L6(c30, c33);
  L23():
    __6 = ldf `::`;
    check L136() else D31();
  L32():
    h4 = ld h;
    check L197() else D68();
  L67():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L7(c11, c12, dx7);
  L68():
    quote1 = ldf quote in base;
    r13 = dyn quote1(<sym `:::`>);
    goto L8(c24, c25, dx8, r13);
  L69():
    r11 = dyn base2(<sym `:::`>);
    goto L8(c24, c25, dx8, r11);
  L80():
    r22 = `!`(r21);
    c41 = `as.logical`(r22);
    if c41 then L81() else L11();
  L105():
    goto L21(c46, r37);
  L108():
    r39 = dyn __5("methods", "isGeneric");
    check L109() else D19();
  L112():
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  D19():
    deopt 97 [c55, r39];
  D31():
    deopt 147 [];
  D68():
    deopt 282 [h4];
  L11():
    goto L12();
  L12():
    f14 = ld f;
    check L83() else D10();
  L24(r46):
    r47 = `!`(r46);
    c63 = `as.logical`(r47);
    if c63 then L25(c63) else L116();
  L81():
    st where = NULL;
    goto L12();
  L109():
    checkFun.0(r39);
    r40 = r39 as cls;
    p4 = prom<V +>{
      f22 = ld f;
      f23 = force? f22;
      checkMissing(f23);
      return f23;
    };
    p5 = prom<V +>{
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      return where5;
    };
    r43 = dyn r40[, where](p4, p5);
    check L110() else D20();
  L113():
    f24 = ld f;
    check L115() else D21();
  L114():
    r45 = dyn base7(<sym f>);
    goto L24(r45);
  L136():
    r80 = dyn __6("methods", "is");
    check L137() else D32();
  L197():
    h5 = force? h4;
    checkMissing(h5);
    popenv;
    return h5;
  D10():
    deopt 56 [f14];
  D20():
    deopt 102 [c55, r43];
  D21():
    deopt 106 [f24];
  D32():
    deopt 150 [r80];
  L25(c64):
    c72 = `as.logical`(c64);
    if c72 then L122() else L27();
  L83():
    f15 = force? f14;
    checkMissing(f15);
    c42 = `is.object`(f15);
    if c42 then L84() else L85(f15);
  L110():
    r44 = `!`(r43);
    c58 = `as.logical`(r44);
    c59 = `||`(c55, c58);
    goto L22(c59);
  L115():
    f25 = force? f24;
    checkMissing(f25);
    c62 = `is.character`(f25);
    goto L24(c62);
  L116():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L137():
    checkFun.0(r80);
    r81 = r80 as cls;
    p17 = prom<V +>{
      f34 = ld f;
      f35 = force? f34;
      checkMissing(f35);
      return f35;
    };
    r83 = dyn r81(p17, "genericFunction");
    check L138() else D33();
  D33():
    deopt 154 [r83];
  L13(dx15):
    st f = dx15;
    goto L14();
  L26(c68, r49):
    r51 = `!=`(r49, 1);
    c69 = `as.logical`(r51);
    c70 = `||`(c68, c69);
    goto L25(c70);
  L27():
    goto L28();
  L28():
    _tryHelp = ldf `.tryHelp`;
    check L126() else D26();
  L84():
    dr8 = tryDispatchBuiltin.1("[[", f15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(dr8);
  L85(f17):
    __4 = ldf `[[` in base;
    r24 = dyn __4(f17, 3);
    goto L13(r24);
  L117():
    f26 = ld f;
    check L119() else D22();
  L118():
    r48 = dyn base8(<sym f>);
    goto L26(c63, r48);
  L122():
    stop = ldf stop;
    check L123() else D24();
  L138():
    c75 = `as.logical`(r83);
    if c75 then L139() else L33();
  D22():
    deopt 112 [c63, f26];
  D24():
    deopt 120 [];
  D26():
    deopt 128 [];
  L33():
    __8 = ldf `::`;
    check L142() else D35();
  L34():
    _signatureFromCall = ldf `.signatureFromCall`;
    check L145() else D38();
  L86():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx14);
  L119():
    f27 = force? f26;
    checkMissing(f27);
    length = ldf length in base;
    r50 = dyn length(f27);
    check L120() else D23();
  L123():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          sym9 = ldf class;
          base9 = ldf class in base;
          guard9 = `==`.4(sym9, base9);
          if guard9 then L1() else L2();
        L0(r53):
          return r53;
        L1():
          f28 = ld f;
          f29 = force? f28;
          checkMissing(f29);
          class = ldf class in base;
          r54 = dyn class(f29);
          goto L0(r54);
        L2():
          r52 = dyn base9(<sym f>);
          goto L0(r52);
        };
        r56 = dyn dQuote(p6);
        return r56;
      };
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          deparse = ldf deparse;
          p8 = prom<V +>{
            expr5 = ld expr;
            expr6 = force? expr5;
            checkMissing(expr6);
            return expr6;
          };
          r59 = dyn deparse(p8);
          return r59;
        };
        r61 = dyn sQuote(p9);
        return r61;
      };
      r63 = dyn gettextf("the object of class %s in the function call %s could not be used as a documentation topic", p7, p10);
      return r63;
    };
    r65 = dyn stop[, domain](p11, NA_LGL);
    check L124() else D25();
  L126():
    p12 = prom<V +>{
      f30 = ld f;
      f31 = force? f30;
      checkMissing(f31);
      return f31;
    };
    p13 = prom<V +>{
      package2 = ld package;
      package3 = force? package2;
      checkMissing(package3);
      return package3;
    };
    r69 = dyn _tryHelp[, package](p12, p13);
    check L127() else D27();
  L139():
    f36 = ld f;
    check L140() else D34();
  D23():
    deopt 115 [c63, r50];
  D25():
    deopt 124 [r65];
  D27():
    deopt 132 [r69];
  D34():
    deopt 155 [f36];
  D35():
    deopt 162 [];
  D38():
    deopt 173 [];
  L120():
    goto L26(c63, r50);
  L124():
    goto L28();
  L127():
    st h = r69;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L128() else L129();
  L140():
    f37 = force? f36;
    checkMissing(f37);
    st fdef = f37;
    __7 = ldf `@` in base;
    r84 = dyn __7(<sym fdef>, <sym generic>);
    st f = r84;
    goto L34();
  L142():
    r86 = dyn __8("methods", "getGeneric");
    check L143() else D36();
  L145():
    p20 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    p21 = prom<V +>{
      expr7 = ld expr;
      expr8 = force? expr7;
      checkMissing(expr8);
      return expr8;
    };
    p22 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    p23 = prom<V +>{
      doEval1 = ld doEval;
      doEval2 = force? doEval1;
      checkMissing(doEval2);
      return doEval2;
    };
    r95 = dyn _signatureFromCall(p20, p21, p22, p23);
    check L146() else D39();
  D36():
    deopt 165 [r86];
  D39():
    deopt 178 [r95];
  L29(r71):
    c74 = `as.logical`(r71);
    if c74 then L131() else L30();
  L128():
    h = ld h;
    check L130() else D28();
  L129():
    r70 = dyn base10(<sym h>);
    goto L29(r70);
  L143():
    checkFun.0(r86);
    r87 = r86 as cls;
    p18 = prom<V +>{
      f38 = ld f;
      f39 = force? f38;
      checkMissing(f39);
      return f39;
    };
    p19 = prom<V +>{
      where6 = ld where;
      where7 = force? where6;
      checkMissing(where7);
      return where7;
    };
    r90 = dyn r87[, where](p18, p19);
    check L144() else D37();
  L146():
    st sigClasses = r95;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L147() else L148();
  D28():
    deopt 135 [h];
  D37():
    deopt 170 [r90];
  L30():
    goto L31(NULL);
  L31(r78):
    goto L32();
  L35(r97):
    st sigNames = r97;
    __9 = ldf `::`;
    check L151() else D42();
  L130():
    h1 = force? h;
    checkMissing(h1);
    c73 = `==`(h1, NULL);
    goto L29(c73);
  L131():
    stop1 = ldf stop;
    check L132() else D29();
  L144():
    st fdef = r90;
    goto L34();
  L147():
    sigClasses = ld sigClasses;
    check L149() else D40();
  L148():
    r96 = dyn base11(<sym sigClasses>);
    goto L35(r96);
  D29():
    deopt 139 [];
  D40():
    deopt 182 [sigClasses];
  D42():
    deopt 188 [];
  L132():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        sQuote1 = ldf sQuote;
        p14 = prom<V +>{
          f32 = ld f;
          f33 = force? f32;
          checkMissing(f33);
          return f33;
        };
        r73 = dyn sQuote1(p14);
        return r73;
      };
      r75 = dyn gettextf1("no methods for %s and no documentation for it as a function", p15);
      return r75;
    };
    r77 = dyn stop1[, domain](p16, NA_LGL);
    check L133() else D30();
  L149():
    sigClasses1 = force? sigClasses;
    checkMissing(sigClasses1);
    names = ldf names in base;
    r98 = dyn names(sigClasses1);
    check L150() else D41();
  L151():
    r99 = dyn __9("methods", "selectMethod");
    check L152() else D43();
  D30():
    deopt 143 [r77];
  D41():
    deopt 185 [r98];
  D43():
    deopt 191 [r99];
  L133():
    goto L31(r77);
  L150():
    goto L35(r98);
  L152():
    checkFun.0(r99);
    r100 = r99 as cls;
    p24 = prom<V +>{
      f40 = ld f;
      f41 = force? f40;
      checkMissing(f41);
      return f41;
    };
    p25 = prom<V +>{
      sigClasses2 = ld sigClasses;
      sigClasses3 = force? sigClasses2;
      checkMissing(sigClasses3);
      return sigClasses3;
    };
    p26 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r104 = dyn r100[, , optional, fdef](p24, p25, TRUE, p26);
    check L153() else D44();
  D44():
    deopt 199 [r104];
  L153():
    st method = r104;
    __10 = ldf `::`;
    check L154() else D45();
  D45():
    deopt 202 [];
  L154():
    r105 = dyn __10("methods", "is");
    check L155() else D46();
  D46():
    deopt 205 [r105];
  L155():
    checkFun.0(r105);
    r106 = r105 as cls;
    p27 = prom<V +>{
      method = ld method;
      method1 = force? method;
      checkMissing(method1);
      return method1;
    };
    r108 = dyn r106(p27, "MethodDefinition");
    check L156() else D47();
  D47():
    deopt 209 [r108];
  L156():
    c76 = `as.logical`(r108);
    if c76 then L157() else L36();
  L36():
    warning = ldf warning;
    check L184() else D59();
  L45():
    topicName = ldf topicName;
    check L186() else D61();
  L157():
    __11 = ldf `@` in base;
    r109 = dyn __11(<sym method>, <sym defined>);
    st sigClasses = r109;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L158() else L159();
  D59():
    deopt 252 [];
  D61():
    deopt 258 [];
  L37(r111):
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L162() else L163();
  L158():
    sigClasses4 = ld sigClasses;
    check L160() else D48();
  L159():
    r110 = dyn base12(<sym sigClasses>);
    goto L37(r110);
  L184():
    p34 = prom<V +>{
      gettextf2 = ldf gettextf;
      p29 = prom<V +>{
        sQuote2 = ldf sQuote;
        p28 = prom<V +>{
          f42 = ld f;
          f43 = force? f42;
          checkMissing(f43);
          return f43;
        };
        r139 = dyn sQuote2(p28);
        return r139;
      };
      p33 = prom<V +>{
        sQuote3 = ldf sQuote;
        p32 = prom<V +>{
          sigFormat = ldf sigFormat;
          p30 = prom<V +>{
            sigNames4 = ld sigNames;
            sigNames5 = force? sigNames4;
            checkMissing(sigNames5);
            return sigNames5;
          };
          p31 = prom<V +>{
            sigClasses10 = ld sigClasses;
            sigClasses11 = force? sigClasses10;
            checkMissing(sigClasses11);
            return sigClasses11;
          };
          r143 = dyn sigFormat(p30, p31);
          return r143;
        };
        r145 = dyn sQuote3(p32);
        return r145;
      };
      r147 = dyn gettextf2("no method defined for function %s and signature %s", p29, p33);
      return r147;
    };
    r149 = dyn warning[, domain](p34, NA_LGL);
    check L185() else D60();
  L186():
    p35 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r151):
      return r151;
    L1():
      f44 = ld f;
      f45 = force? f44;
      checkMissing(f45);
      sigClasses12 = ld sigClasses;
      sigClasses13 = force? sigClasses12;
      checkMissing(sigClasses13);
      c79 = ldf c in base;
      r152 = dyn c79(f45, sigClasses13);
      goto L0(r152);
    L2():
      r150 = dyn base18(<sym f>, <sym sigClasses>);
      goto L0(r150);
    };
    r154 = dyn topicName("method", p35);
    check L187() else D62();
  D48():
    deopt 215 [sigClasses4];
  D60():
    deopt 256 [r149];
  D62():
    deopt 261 [r154];
  L38(r116, r117):
    r119 = `<`(r116, r117);
    c77 = `as.logical`(r119);
    if c77 then L166() else L39();
  L160():
    sigClasses5 = force? sigClasses4;
    checkMissing(sigClasses5);
    length1 = ldf length in base;
    r112 = dyn length1(sigClasses5);
    check L161() else D49();
  L162():
    sigNames = ld sigNames;
    check L164() else D50();
  L163():
    r115 = dyn base13(<sym sigNames>);
    goto L38(r111, r115);
  L185():
    goto L45();
  L187():
    st topic = r154;
    _tryHelp1 = ldf `.tryHelp`;
    check L188() else D63();
  D49():
    deopt 218 [r112];
  D50():
    deopt 220 [r111, sigNames];
  D63():
    deopt 264 [];
  L39():
    goto L44(NULL);
  L44(r136):
    goto L45();
  L161():
    goto L37(r112);
  L164():
    sigNames1 = force? sigNames;
    checkMissing(sigNames1);
    length2 = ldf length in base;
    r118 = dyn length2(sigNames1);
    check L165() else D51();
  L166():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L167() else L168();
  L188():
    p36 = prom<V +>{
      topic = ld topic;
      topic1 = force? topic;
      checkMissing(topic1);
      return topic1;
    };
    p37 = prom<V +>{
      package4 = ld package;
      package5 = force? package4;
      checkMissing(package5);
      return package5;
    };
    r157 = dyn _tryHelp1[, package](p36, p37);
    check L189() else D64();
  D51():
    deopt 223 [r111, r118];
  D64():
    deopt 268 [r157];
  L40(r121):
    st sigClasses = r121;
    goto L44(r121);
  L165():
    goto L38(r111, r118);
  L167():
    sigClasses6 = ld sigClasses;
    check L169() else D52();
  L168():
    r120 = dyn base14(<sym sigClasses>, <lang rep.int("ANY", `-`(length(sigNames), length(sigClasses)))>);
    goto L40(r120);
  L189():
    st h = r157;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L190() else L191();
  D52():
    deopt 227 [sigClasses6];
  L46(r159):
    c81 = `as.logical`(r159);
    if c81 then L193() else L47();
  L169():
    sigClasses7 = force? sigClasses6;
    checkMissing(sigClasses7);
    sym15 = ldf `rep.int`;
    base15 = ldf `rep.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L170() else L171();
  L190():
    h2 = ld h;
    check L192() else D65();
  L191():
    r158 = dyn base19(<sym h>);
    goto L46(r158);
  D65():
    deopt 271 [h2];
  L41(r123):
    c78 = ldf c in base;
    r135 = dyn c78(sigClasses7, r123);
    check L181() else D58();
  L47():
    goto L32();
  L170():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L172() else L173();
  L171():
    r122 = dyn base15("ANY", <lang `-`(length(sigNames), length(sigClasses))>);
    goto L41(r122);
  L192():
    h3 = force? h2;
    checkMissing(h3);
    c80 = `==`(h3, NULL);
    goto L46(c80);
  L193():
    stop2 = ldf stop;
    check L194() else D66();
  D58():
    deopt 247 [r135];
  D66():
    deopt 275 [];
  L42(r125):
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L176() else L177();
  L172():
    sigNames2 = ld sigNames;
    check L174() else D53();
  L173():
    r124 = dyn base16(<sym sigNames>);
    goto L42(r124);
  L181():
    goto L40(r135);
  L194():
    p44 = prom<V +>{
      gettextf3 = ldf gettextf;
      p39 = prom<V +>{
        sQuote4 = ldf sQuote;
        p38 = prom<V +>{
          f46 = ld f;
          f47 = force? f46;
          checkMissing(f47);
          return f47;
        };
        r161 = dyn sQuote4(p38);
        return r161;
      };
      p43 = prom<V +>{
        sQuote5 = ldf sQuote;
        p42 = prom<V +>{
          sigFormat1 = ldf sigFormat;
          p40 = prom<V +>{
            sigNames6 = ld sigNames;
            sigNames7 = force? sigNames6;
            checkMissing(sigNames7);
            return sigNames7;
          };
          p41 = prom<V +>{
            sigClasses14 = ld sigClasses;
            sigClasses15 = force? sigClasses14;
            checkMissing(sigClasses15);
            return sigClasses15;
          };
          r165 = dyn sigFormat1(p40, p41);
          return r165;
        };
        r167 = dyn sQuote5(p42);
        return r167;
      };
      r169 = dyn gettextf3("no documentation for function %s and signature %s", p39, p43);
      return r169;
    };
    r171 = dyn stop2[, domain](p44, NA_LGL);
    check L195() else D67();
  D53():
    deopt 234 [sigNames2];
  D67():
    deopt 279 [r171];
  L43(r130, r131):
    r133 = `-`(r130, r131);
    rep_int = ldf `rep.int` in base;
    r134 = dyn rep_int("ANY", r133);
    check L180() else D57();
  L174():
    sigNames3 = force? sigNames2;
    checkMissing(sigNames3);
    length3 = ldf length in base;
    r126 = dyn length3(sigNames3);
    check L175() else D54();
  L176():
    sigClasses8 = ld sigClasses;
    check L178() else D55();
  L177():
    r129 = dyn base17(<sym sigClasses>);
    goto L43(r125, r129);
  L195():
    goto L32();
  D54():
    deopt 237 [r126];
  D55():
    deopt 239 [r125, sigClasses8];
  D57():
    deopt 245 [r134];
  L175():
    goto L42(r126);
  L178():
    sigClasses9 = force? sigClasses8;
    checkMissing(sigClasses9);
    length4 = ldf length in base;
    r132 = dyn length4(sigClasses9);
    check L179() else D56();
  L180():
    goto L41(r134);
  D56():
    deopt 242 [r125, r132];
  L179():
    goto L43(r125, r132);
  }
}
fun inner734514464(sigNames, sigClasses) {
  (reg sigNames:*, reg sigClasses:*) -+> V { var sigNames:*, var sigClasses:*, reg paste:cls, reg sprintf:cls, reg sigNames1:*, reg sigNames2:V, reg p:p(V +), reg sigClasses1:*, reg sigClasses2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st sigNames = sigNames;
    st sigClasses = sigClasses;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        sigNames1 = ld sigNames;
        sigNames2 = force? sigNames1;
        checkMissing(sigNames2);
        return sigNames2;
      };
      p1 = prom<V +>{
        sigClasses1 = ld sigClasses;
        sigClasses2 = force? sigClasses1;
        checkMissing(sigClasses2);
        return sigClasses2;
      };
      r2 = dyn sprintf("%s = \"%s\"", p, p1);
      return r2;
    };
    r4 = dyn paste[, collapse](p2, ", ");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}