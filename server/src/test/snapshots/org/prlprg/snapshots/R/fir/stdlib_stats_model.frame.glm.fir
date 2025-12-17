fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2953276916;
    st `model.frame.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2953276916(formula, `...`) {
  (reg formula:*, reg ddd:dots) -+> V { var formula:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg dots:*, reg dots1:V, reg c:L, reg dots3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg dots6:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg dots9:V, reg r6:V, reg c1:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg dots12:V, reg r9:V, reg dots13:*, reg dots14:V, reg names:cls, reg r10:V, reg match:cls, reg r11:V, reg __:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg nargs:*, reg nargs1:V, reg length:cls, reg r15:V, reg c2:L, reg c3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg c7:L, reg r17:V, reg formula1:*, reg formula2:V, reg c8:L, reg c10:L, reg formula4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c12:L, reg dx3:V, reg r18:V, reg c13:V, reg c14:L, reg c15:V, reg c17:L, reg formula5:*, reg formula6:V, reg c18:L, reg formula8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg l:*, reg c19:L, reg r21:S, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg quote:cls, reg r27:V, reg l3:*, reg c20:L, reg r29:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r32:V, reg nargs2:*, reg nargs3:V, reg l6:*, reg c21:L, reg nargs5:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg nargs12:V, reg l11:*, reg nargs13:V, reg r34:V, reg nargs14:*, reg nargs15:V, reg names1:cls, reg r35:V, reg ___:cls, reg r36:V, reg ____1:cls, reg environment:cls, reg formula9:*, reg formula10:V, reg c22:L, reg formula12:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r37:V, reg p:p(V +), reg r39:V, reg p1:p(V +), reg parent_frame:cls, reg r41:V, reg p2:p(V +), reg r43:V, reg eval:cls, reg fcall:*, reg fcall1:V, reg p3:p(V +), reg env:*, reg env1:V, reg p4:p(V +), reg r46:V, reg formula13:*, reg formula14:V, reg c23:L, reg formula16:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r47:V |
    mkenv;
    st formula = formula;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st dots = r1;
    dots = ld dots;
    check L17() else D2();
  L13():
    list = ldf list;
    check L15() else D0();
  L14():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 6 [dots];
  L15():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L16() else D1();
  L17():
    dots1 = force? dots;
    checkMissing(dots1);
    c = `is.object`(dots1);
    if c then L18() else L19(dots1);
  D1():
    deopt 4 [r2];
  L1(dx1):
    st nargs = dx1;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L16():
    goto L0(r2);
  L18():
    dr = tryDispatchBuiltin.1("[", dots1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(dots3):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L2(dots6, r4):
    __ = ldf `[` in base;
    r12 = dyn __(dots6, r4);
    goto L1(r12);
  L5(r14):
    c2 = `as.logical`(r14);
    if c2 then L6(c2) else L35();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L21():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L22():
    r3 = dyn base1(<lang c("data", "na.action", "subset")>, <lang names(dots)>, 0);
    goto L2(dots3, r3);
  L31():
    nargs = ld nargs;
    check L33() else D7();
  L32():
    r13 = dyn base4(<sym nargs>);
    goto L5(r13);
  D7():
    deopt 31 [nargs];
  L3(dots9, r6):
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L6(c3):
    c17 = `as.logical`(c3);
    if c17 then L44() else L8();
  L23():
    c1 = ldf c in base;
    r7 = dyn c1("data", "na.action", "subset");
    check L25() else D3();
  L24():
    r5 = dyn base2("data", "na.action", "subset");
    goto L3(dots3, r5);
  L33():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    length = ldf length in base;
    r15 = dyn length(nargs1);
    check L34() else D8();
  L35():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L36() else L37();
  D3():
    deopt 16 [dots3, r7];
  D8():
    deopt 34 [r15];
  L4(dots12, r9):
    match = ldf match in base;
    r11 = dyn match(r6, r9, 0, NULL);
    check L30() else D6();
  L7(c7, r17):
    c14 = `as.logical`(r17);
    c15 = `||`(c7, c14);
    goto L6(c15);
  L8():
    formula13 = ld formula;
    check L72() else D18();
  L25():
    goto L3(dots3, r7);
  L26():
    dots13 = ld dots;
    check L28() else D4();
  L27():
    r8 = dyn base3(<sym dots>);
    goto L4(dots9, r8);
  L34():
    goto L5(r15);
  L36():
    formula1 = ld formula;
    check L38() else D9();
  L37():
    r16 = dyn base5(<lang `$`(formula, model)>);
    goto L7(c2, r16);
  L44():
    formula5 = ld formula;
    check L45() else D10();
  D4():
    deopt 19 [dots9, dots13];
  D6():
    deopt 26 [dots12, r11];
  D9():
    deopt 36 [c2, formula1];
  D10():
    deopt 41 [formula5];
  D18():
    deopt 80 [formula13];
  L28():
    dots14 = force? dots13;
    checkMissing(dots14);
    names = ldf names in base;
    r10 = dyn names(dots14);
    check L29() else D5();
  L30():
    goto L2(dots12, r11);
  L38():
    formula2 = force? formula1;
    checkMissing(formula2);
    c8 = `is.object`(formula2);
    if c8 then L40() else L41(c2, formula2);
  L45():
    formula6 = force? formula5;
    checkMissing(formula6);
    c18 = `is.object`(formula6);
    if c18 then L47() else L48(formula6);
  L72():
    formula14 = force? formula13;
    checkMissing(formula14);
    c23 = `is.object`(formula14);
    if c23 then L74() else L75(formula14);
  D5():
    deopt 22 [dots9, r10];
  L29():
    goto L4(dots9, r10);
  L39(c12, dx3):
    c13 = `==`(dx3, NULL);
    goto L7(c12, c13);
  L40():
    dr2 = tryDispatchBuiltin.1("$", formula2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(c2, dr2);
  L41(c10, formula4):
    r18 = `$`(formula4, <sym model>);
    goto L39(c10, r18);
  L46(dx5):
    st fcall = dx5;
    l = ld fcall;
    c19 = `is.object`(l);
    if c19 then L51() else L52("model.frame", l);
  L47():
    dr4 = tryDispatchBuiltin.1("$", formula6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dr4);
  L48(formula8):
    r19 = `$`(formula8, <sym call>);
    goto L46(r19);
  L73(dx15):
    popenv;
    return dx15;
  L74():
    dr14 = tryDispatchBuiltin.1("$", formula14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L76() else L75(dr14);
  L75(formula16):
    r47 = `$`(formula16, <sym model>);
    goto L73(r47);
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(c2, dx2);
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L46(dx4);
  L50(dx7):
    st fcall = dx7;
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L51():
    dr6 = tryDispatchBuiltin.0("$<-", l, "model.frame");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52("model.frame", dr6);
  L52(r21, l2):
    r24 = `$<-`(l2, <sym method>, "model.frame");
    goto L50(r24);
  L76():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L73(dx14);
  L9(r26):
    l3 = ld fcall;
    c20 = `is.object`(l3);
    if c20 then L56() else L57(r26, l3);
  L53():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L50(dx6);
  L54():
    quote = ldf quote in base;
    r27 = dyn quote(<lang `::`(stats, glm)>);
    goto L9(r27);
  L55():
    r25 = dyn base6(<lang `::`(stats, glm)>);
    goto L9(r25);
  L10(dx9):
    st fcall = dx9;
    nargs2 = ld nargs;
    check L59() else D11();
  L56():
    dr8 = tryDispatchBuiltin.0("[[<-", l3, r26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57(r26, dr8);
  L57(r29, l5):
    ____ = ldf `[[<-` in base;
    r32 = dyn ____(l5, r26, 1);
    goto L10(r32);
  D11():
    deopt 58 [nargs2];
  L58():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L59():
    nargs3 = force? nargs2;
    checkMissing(nargs3);
    l6 = ld fcall;
    c21 = `is.object`(l6);
    if c21 then L60() else L61(nargs3, l6);
  L11(dx11):
    st fcall = dx11;
    ____1 = ldf `%||%`;
    check L67() else D14();
  L60():
    dr10 = tryDispatchBuiltin.0("[<-", l6, nargs3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L62() else L61(nargs3, dr10);
  L61(nargs5, l8):
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  D14():
    deopt 70 [];
  L12(nargs12, l11, nargs13, r34):
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l11, nargs13, r34);
    goto L11(r36);
  L62():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L63():
    nargs14 = ld nargs;
    check L65() else D12();
  L64():
    r33 = dyn base7(<sym nargs>);
    goto L12(nargs5, l8, nargs3, r33);
  L67():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        formula9 = ld formula;
        formula10 = force? formula9;
        checkMissing(formula10);
        c22 = `is.object`(formula10);
        if c22 then L1() else L2(formula10);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", formula10);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(formula12):
        r37 = `$`(formula12, <sym terms>);
        goto L0(r37);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r39 = dyn environment(p);
      return r39;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r41 = dyn parent_frame();
      return r41;
    };
    r43 = dyn ____1(p1, p2);
    check L68() else D15();
  D12():
    deopt 63 [nargs5, l8, nargs3, nargs14];
  D15():
    deopt 73 [r43];
  L65():
    nargs15 = force? nargs14;
    checkMissing(nargs15);
    names1 = ldf names in base;
    r35 = dyn names1(nargs15);
    check L66() else D13();
  L68():
    st env = r43;
    eval = ldf eval;
    check L69() else D16();
  D13():
    deopt 66 [nargs5, l8, nargs3, r35];
  D16():
    deopt 76 [];
  L66():
    goto L12(nargs5, l8, nargs3, r35);
  L69():
    p3 = prom<V +>{
      fcall = ld fcall;
      fcall1 = force? fcall;
      checkMissing(fcall1);
      return fcall1;
    };
    p4 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r46 = dyn eval(p3, p4);
    check L70() else D17();
  D17():
    deopt 79 [r46];
  L70():
    popenv;
    return r46;
  }
}