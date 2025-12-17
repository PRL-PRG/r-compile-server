fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2953276916;
    st `model.frame.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2953276916(formula, `...`) {
  (reg formula:*, reg ddd:dots) -+> V { var formula:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg dots:*, reg dots1:V, reg c:L, reg dots3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg dots6:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg dots9:V, reg r6:V, reg c1:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg dots12:V, reg r9:V, reg dots13:*, reg dots14:V, reg names:cls, reg r10:V, reg match:cls, reg r11:V, reg __:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg nargs:*, reg nargs1:V, reg length:cls, reg r15:V, reg c2:L, reg c3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg c7:L, reg r17:V, reg formula1:*, reg formula2:V, reg c8:L, reg c10:L, reg formula4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c12:L, reg dx3:V, reg r18:V, reg c13:V, reg c14:L, reg c15:V, reg c17:L, reg formula5:*, reg formula6:V, reg c18:L, reg formula8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r22:V, reg r23:V, reg c19:cls, reg r24:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r25:V, reg r26:V, reg fcall:*, reg fcall1:V, reg names1:cls, reg r27:V, reg match1:cls, reg r28:V, reg fcall2:*, reg fcall3:V, reg c20:L, reg fcall5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r29:V, reg fcall8:V, reg r30:V, reg m:*, reg m1:V, reg c21:cls, reg r31:V, reg __1:cls, reg r32:V, reg l:*, reg c22:L, reg r34:L, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r37:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r38:V, reg r39:V, reg quote:cls, reg r40:V, reg l3:*, reg c23:L, reg r42:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ____:cls, reg r45:V, reg formula9:*, reg formula10:V, reg c24:L, reg formula12:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r46:V, reg l6:*, reg c25:L, reg dx15:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx17:V, reg dx19:V, reg r47:V, reg terms:cls, reg formula13:*, reg formula14:V, reg p:p(V +), reg r49:V, reg l9:*, reg c26:L, reg r51:V, reg l11:*, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r54:V, reg nargs2:*, reg nargs3:V, reg l12:*, reg c27:L, reg nargs5:V, reg l14:*, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r55:V, reg nargs12:V, reg l17:*, reg nargs13:V, reg r56:V, reg nargs14:*, reg nargs15:V, reg names2:cls, reg r57:V, reg ___:cls, reg r58:V, reg ____1:cls, reg environment:cls, reg formula15:*, reg formula16:V, reg c28:L, reg formula18:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r59:V, reg p1:p(V +), reg r61:V, reg p2:p(V +), reg parent_frame:cls, reg r63:V, reg p3:p(V +), reg r65:V, reg eval:cls, reg fcall9:*, reg fcall10:V, reg p4:p(V +), reg env:*, reg env1:V, reg p5:p(V +), reg r68:V, reg formula19:*, reg formula20:V, reg c29:L, reg formula22:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r69:V |
    mkenv;
    st formula = formula;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    st dots = r1;
    dots = ld dots;
    check L22() else D2();
  L18():
    list = ldf list;
    check L20() else D0();
  L19():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 6 [dots];
  L20():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L21() else D1();
  L22():
    dots1 = force? dots;
    checkMissing(dots1);
    c = `is.object`(dots1);
    if c then L23() else L24(dots1);
  D1():
    deopt 4 [r2];
  L1(dx1):
    st nargs = dx1;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L21():
    goto L0(r2);
  L23():
    dr = tryDispatchBuiltin.1("[", dots1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(dots3):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L2(dots6, r4):
    __ = ldf `[` in base;
    r12 = dyn __(dots6, r4);
    goto L1(r12);
  L5(r14):
    c2 = `as.logical`(r14);
    if c2 then L6(c2) else L40();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L26():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L27():
    r3 = dyn base1(<lang c("data", "na.action", "subset")>, <lang names(dots)>, 0.0);
    goto L2(dots3, r3);
  L36():
    nargs = ld nargs;
    check L38() else D7();
  L37():
    r13 = dyn base4(<sym nargs>);
    goto L5(r13);
  D7():
    deopt 31 [nargs];
  L3(dots9, r6):
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L6(c3):
    c17 = `as.logical`(c3);
    if c17 then L49() else L8();
  L28():
    c1 = ldf c in base;
    r7 = dyn c1("data", "na.action", "subset");
    check L30() else D3();
  L29():
    r5 = dyn base2("data", "na.action", "subset");
    goto L3(dots3, r5);
  L38():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    length = ldf length in base;
    r15 = dyn length(nargs1);
    check L39() else D8();
  L40():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  D3():
    deopt 16 [dots3, r7];
  D8():
    deopt 34 [r15];
  L4(dots12, r9):
    match = ldf match in base;
    r11 = dyn match(r6, r9, 0.0, NULL);
    check L35() else D6();
  L7(c7, r17):
    c14 = `as.logical`(r17);
    c15 = `||`(c7, c14);
    goto L6(c15);
  L8():
    formula19 = ld formula;
    check L110() else D28();
  L30():
    goto L3(dots3, r7);
  L31():
    dots13 = ld dots;
    check L33() else D4();
  L32():
    r8 = dyn base3(<sym dots>);
    goto L4(dots9, r8);
  L39():
    goto L5(r15);
  L41():
    formula1 = ld formula;
    check L43() else D9();
  L42():
    r16 = dyn base5(<lang `$`(formula, model)>);
    goto L7(c2, r16);
  L49():
    formula5 = ld formula;
    check L50() else D10();
  D4():
    deopt 19 [dots9, dots13];
  D6():
    deopt 26 [dots12, r11];
  D9():
    deopt 36 [c2, formula1];
  D10():
    deopt 41 [formula5];
  D28():
    deopt 127 [formula19];
  L33():
    dots14 = force? dots13;
    checkMissing(dots14);
    names = ldf names in base;
    r10 = dyn names(dots14);
    check L34() else D5();
  L35():
    goto L2(dots12, r11);
  L43():
    formula2 = force? formula1;
    checkMissing(formula2);
    c8 = `is.object`(formula2);
    if c8 then L45() else L46(c2, formula2);
  L50():
    formula6 = force? formula5;
    checkMissing(formula6);
    c18 = `is.object`(formula6);
    if c18 then L52() else L53(formula6);
  L110():
    formula20 = force? formula19;
    checkMissing(formula20);
    c29 = `is.object`(formula20);
    if c29 then L112() else L113(formula20);
  D5():
    deopt 22 [dots9, r10];
  L34():
    goto L4(dots9, r10);
  L44(c12, dx3):
    c13 = `==`(dx3, NULL);
    goto L7(c12, c13);
  L45():
    dr2 = tryDispatchBuiltin.1("$", formula2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L47() else L46(c2, dr2);
  L46(c10, formula4):
    r18 = `$`(formula4, <sym model>);
    goto L44(c10, r18);
  L51(dx5):
    st fcall = dx5;
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L52():
    dr4 = tryDispatchBuiltin.1("$", formula6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(dr4);
  L53(formula8):
    r19 = `$`(formula8, <sym call>);
    goto L51(r19);
  L111(dx27):
    popenv;
    return dx27;
  L112():
    dr22 = tryDispatchBuiltin.1("$", formula20);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L114() else L113(dr22);
  L113(formula22):
    r69 = `$`(formula22, <sym model>);
    goto L111(r69);
  L9(r21):
    st m = r21;
    fcall2 = ld fcall;
    check L65() else D15();
  L47():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L44(c2, dx2);
  L54():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L51(dx4);
  L55():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L57() else L58();
  L56():
    r20 = dyn base6(<lang c("formula", "data", "subset", "weights", "na.action", "offset")>, <lang names(fcall)>, 0);
    goto L9(r20);
  L114():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L111(dx26);
  D15():
    deopt 68 [fcall2];
  L10(r23):
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L57():
    c19 = ldf c in base;
    r24 = dyn c19("formula", "data", "subset", "weights", "na.action", "offset");
    check L59() else D11();
  L58():
    r22 = dyn base7("formula", "data", "subset", "weights", "na.action", "offset");
    goto L10(r22);
  L65():
    fcall3 = force? fcall2;
    checkMissing(fcall3);
    c20 = `is.object`(fcall3);
    if c20 then L66() else L67(fcall3);
  D11():
    deopt 56 [r24];
  L11(r26):
    match1 = ldf match in base;
    r28 = dyn match1(r23, r26, 0, NULL);
    check L64() else D14();
  L12(dx7):
    st fcall = dx7;
    l = ld fcall;
    c22 = `is.object`(l);
    if c22 then L74() else L75(TRUE, l);
  L59():
    goto L10(r24);
  L60():
    fcall = ld fcall;
    check L62() else D12();
  L61():
    r25 = dyn base8(<sym fcall>);
    goto L11(r25);
  L66():
    dr6 = tryDispatchBuiltin.1("[", fcall3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L68() else L67(dr6);
  L67(fcall5):
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L69() else L70();
  D12():
    deopt 59 [fcall];
  D14():
    deopt 66 [r28];
  L13(fcall8, r30):
    __1 = ldf `[` in base;
    r32 = dyn __1(fcall8, r30);
    goto L12(r32);
  L62():
    fcall1 = force? fcall;
    checkMissing(fcall1);
    names1 = ldf names in base;
    r27 = dyn names1(fcall1);
    check L63() else D13();
  L64():
    goto L9(r28);
  L68():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L69():
    m = ld m;
    check L71() else D16();
  L70():
    r29 = dyn base9(1, <sym m>);
    goto L13(fcall5, r29);
  L73(dx9):
    st fcall = dx9;
    sym10 = ldf quote;
    base10 = ldf quote in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L77() else L78();
  L74():
    dr8 = tryDispatchBuiltin.0("$<-", l, TRUE);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(TRUE, dr8);
  L75(r34, l2):
    r37 = `$<-`(l2, <sym drop.unused.levels>, TRUE);
    goto L73(r37);
  D13():
    deopt 62 [r27];
  D16():
    deopt 73 [fcall5, m];
  L14(r39):
    l3 = ld fcall;
    c23 = `is.object`(l3);
    if c23 then L79() else L80(r39, l3);
  L63():
    goto L11(r27);
  L71():
    m1 = force? m;
    checkMissing(m1);
    c21 = ldf c in base;
    r31 = dyn c21(1, m1);
    check L72() else D17();
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L73(dx8);
  L77():
    quote = ldf quote in base;
    r40 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L14(r40);
  L78():
    r38 = dyn base10(<lang `::`(stats, model.frame)>);
    goto L14(r38);
  D17():
    deopt 76 [fcall5, r31];
  L15(dx11):
    st fcall = dx11;
    formula9 = ld formula;
    check L82() else D18();
  L72():
    goto L13(fcall5, r31);
  L79():
    dr10 = tryDispatchBuiltin.0("[[<-", l3, r39);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(r39, dr10);
  L80(r42, l5):
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l5, r39, 1);
    goto L15(r45);
  D18():
    deopt 92 [formula9];
  L81():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx10);
  L82():
    formula10 = force? formula9;
    checkMissing(formula10);
    c24 = `is.object`(formula10);
    if c24 then L84() else L85(formula10);
  L83(dx13):
    l6 = ld fcall;
    c25 = `is.object`(l6);
    if c25 then L88() else L89(dx13, l6);
  L84():
    dr12 = tryDispatchBuiltin.1("$", formula10);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L86() else L85(dr12);
  L85(formula12):
    r46 = `$`(formula12, <sym xlevels>);
    goto L83(r46);
  L86():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L83(dx12);
  L87(dx19):
    st fcall = dx19;
    terms = ldf terms;
    check L91() else D19();
  L88():
    dr14 = tryDispatchBuiltin.0("$<-", l6, dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L90() else L89(dx13, dr14);
  L89(dx15, l8):
    r47 = `$<-`(l8, <sym xlev>, dx13);
    goto L87(r47);
  D19():
    deopt 99 [];
  L90():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L87(dx17);
  L91():
    p = prom<V +>{
      formula13 = ld formula;
      formula14 = force? formula13;
      checkMissing(formula14);
      return formula14;
    };
    r49 = dyn terms(p);
    check L92() else D20();
  D20():
    deopt 101 [r49];
  L92():
    l9 = ld fcall;
    c26 = `is.object`(l9);
    if c26 then L94() else L95(r49, l9);
  L93(dx21):
    st fcall = dx21;
    nargs2 = ld nargs;
    check L97() else D21();
  L94():
    dr16 = tryDispatchBuiltin.0("$<-", l9, r49);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L96() else L95(r49, dr16);
  L95(r51, l11):
    r54 = `$<-`(l11, <sym formula>, r49);
    goto L93(r54);
  D21():
    deopt 105 [nargs2];
  L96():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L93(dx20);
  L97():
    nargs3 = force? nargs2;
    checkMissing(nargs3);
    l12 = ld fcall;
    c27 = `is.object`(l12);
    if c27 then L98() else L99(nargs3, l12);
  L16(dx23):
    st fcall = dx23;
    ____1 = ldf `%||%`;
    check L105() else D24();
  L98():
    dr18 = tryDispatchBuiltin.0("[<-", l12, nargs3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L100() else L99(nargs3, dr18);
  L99(nargs5, l14):
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  D24():
    deopt 117 [];
  L17(nargs12, l17, nargs13, r56):
    ___ = ldf `[<-` in base;
    r58 = dyn ___(l17, nargs13, r56);
    goto L16(r58);
  L100():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L16(dx22);
  L101():
    nargs14 = ld nargs;
    check L103() else D22();
  L102():
    r55 = dyn base11(<sym nargs>);
    goto L17(nargs5, l14, nargs3, r55);
  L105():
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        formula15 = ld formula;
        formula16 = force? formula15;
        checkMissing(formula16);
        c28 = `is.object`(formula16);
        if c28 then L1() else L2(formula16);
      L0(dx25):
        return dx25;
      L1():
        dr20 = tryDispatchBuiltin.1("$", formula16);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(formula18):
        r59 = `$`(formula18, <sym terms>);
        goto L0(r59);
      L3():
        dx24 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx24);
      };
      r61 = dyn environment(p1);
      return r61;
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r63 = dyn parent_frame();
      return r63;
    };
    r65 = dyn ____1(p2, p3);
    check L106() else D25();
  D22():
    deopt 110 [nargs5, l14, nargs3, nargs14];
  D25():
    deopt 120 [r65];
  L103():
    nargs15 = force? nargs14;
    checkMissing(nargs15);
    names2 = ldf names in base;
    r57 = dyn names2(nargs15);
    check L104() else D23();
  L106():
    st env = r65;
    eval = ldf eval;
    check L107() else D26();
  D23():
    deopt 113 [nargs5, l14, nargs3, r57];
  D26():
    deopt 123 [];
  L104():
    goto L17(nargs5, l14, nargs3, r57);
  L107():
    p4 = prom<V +>{
      fcall9 = ld fcall;
      fcall10 = force? fcall9;
      checkMissing(fcall10);
      return fcall10;
    };
    p5 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r68 = dyn eval(p4, p5);
    check L108() else D27();
  D27():
    deopt 126 [r68];
  L108():
    popenv;
    return r68;
  }
}