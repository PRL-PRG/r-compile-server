fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2237582675;
    st `.formula2varlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2237582675(formula, data, warnLHS, ignoreLHS) {
  (reg formula:*, reg data:*, reg warnLHS:*, reg ignoreLHS:*) -+> V { var formula:*, var data:*, var warnLHS:*, reg warnLHS_isMissing:L, reg warnLHS_orDefault:*, var ignoreLHS:*, reg ignoreLHS_isMissing:L, reg ignoreLHS_orDefault:*, reg warnLHS1:*, reg warnLHS2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg formula1:*, reg formula2:V, reg inherits:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg data1:*, reg data2:V, reg is_list:cls, reg r9:V, reg r10:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c6:L, reg r12:V, reg data3:*, reg data4:V, reg is_environment:cls, reg r13:V, reg r14:V, reg c7:L, reg c8:V, reg c10:L, reg as_data_frame:cls, reg data5:*, reg data6:V, reg p1:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg formula3:*, reg formula4:V, reg length:cls, reg r20:V, reg r21:V, reg c11:L, reg warnLHS3:*, reg warnLHS4:V, reg c12:L, reg ignoreLHS1:*, reg ignoreLHS2:V, reg c13:L, reg warning:cls, reg r22:V, reg r23:V, reg warning1:cls, reg r24:V, reg ignoreLHS3:*, reg ignoreLHS4:V, reg c14:L, reg formula5:*, reg formula6:V, reg c15:L, reg formula8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r26:V, reg dx2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg formula9:*, reg formula10:V, reg c16:L, reg formula12:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r29:V, reg length1:cls, reg r30:V, reg r31:V, reg c17:L, reg c19:V, reg formula13:*, reg formula14:V, reg c20:L, reg c22:L, reg formula16:V, reg dr4:V, reg dc2:L, reg dx6:V, reg c24:L, reg dx7:V, reg __2:cls, reg r32:V, reg c25:L, reg c27:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg c29:L, reg dx11:V, reg __3:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg c32:L, reg dx14:V, reg r35:V, reg quote:cls, reg r36:V, reg r37:V, reg c33:L, reg c34:V, reg c36:L, reg eval:cls, reg formula17:*, reg formula18:V, reg c37:L, reg formula20:V, reg dr8:V, reg dc4:L, reg dx15:V, reg dx16:V, reg __4:cls, reg r38:V, reg p2:p(V +), reg data7:*, reg data8:V, reg p3:p(V +), reg environment:cls, reg formula21:*, reg formula22:V, reg p4:p(V +), reg r42:V, reg p5:p(V +), reg r44:V, reg __5:cls, reg r46:V, reg r47:cls, reg formula23:*, reg formula24:V, reg p6:p(V +), reg r49:V, reg eval1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg fterms:*, reg fterms1:V, reg attr:cls, reg r52:V, reg p7:p(V +), reg data9:*, reg data10:V, reg p8:p(V +), reg environment1:cls, reg formula25:*, reg formula26:V, reg p9:p(V +), reg r56:V, reg p10:p(V +), reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg fterms2:*, reg fterms3:V, reg attr1:cls, reg r61:V, reg l:*, reg names__:cls, reg r62:V, reg ans:*, reg ans1:V |
    mkenv;
    st formula = formula;
    st data = data;
    warnLHS_isMissing = missing.0(warnLHS);
    if warnLHS_isMissing then L0(TRUE) else L0(warnLHS);
  L0(warnLHS_orDefault):
    st warnLHS = warnLHS_orDefault;
    ignoreLHS_isMissing = missing.0(ignoreLHS);
    if ignoreLHS_isMissing then L1() else L2(ignoreLHS);
  L1():
    p = prom<V +>{
      warnLHS1 = ld warnLHS;
      warnLHS2 = force? warnLHS1;
      checkMissing(warnLHS2);
      return warnLHS2;
    };
    goto L2(p);
  L2(ignoreLHS_orDefault):
    st ignoreLHS = ignoreLHS_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L3(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L34() else L4();
  L30():
    formula1 = ld formula;
    check L32() else D0();
  L31():
    r1 = dyn base(<sym formula>, "formula");
    goto L3(r1);
  D0():
    deopt 2 [formula1];
  L4():
    goto L5();
  L5():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L32():
    formula2 = force? formula1;
    checkMissing(formula2);
    inherits = ldf inherits in base;
    r3 = dyn inherits(formula2, "formula", FALSE);
    check L33() else D1();
  L34():
    stop = ldf stop;
    check L35() else D2();
  D1():
    deopt 7 [r3];
  D2():
    deopt 10 [];
  L6(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L42() else L7(c1);
  L33():
    goto L3(r3);
  L35():
    r5 = dyn stop("'formula' must be a formula");
    check L36() else D3();
  L38():
    data1 = ld data;
    check L40() else D4();
  L39():
    r7 = dyn base1(<sym data>);
    goto L6(r7);
  D3():
    deopt 12 [r5];
  D4():
    deopt 17 [data1];
  L7(c3):
    c10 = `as.logical`(c3);
    if c10 then L48() else L9();
  L36():
    goto L5();
  L40():
    data2 = force? data1;
    checkMissing(data2);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(data2);
    check L41() else D5();
  L42():
    sym2 = ldf `is.environment`;
    base2 = ldf `is.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  D5():
    deopt 20 [r9];
  L8(c6, r12):
    r14 = `!`(r12);
    c7 = `as.logical`(r14);
    c8 = `&&`(c6, c7);
    goto L7(c8);
  L9():
    goto L10();
  L10():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L41():
    goto L6(r9);
  L43():
    data3 = ld data;
    check L45() else D6();
  L44():
    r11 = dyn base2(<sym data>);
    goto L8(c1, r11);
  L48():
    as_data_frame = ldf `as.data.frame`;
    check L49() else D8();
  D6():
    deopt 24 [c1, data3];
  D8():
    deopt 31 [];
  L11(r19):
    r21 = `==`(r19, 3.0);
    c11 = `as.logical`(r21);
    if c11 then L56() else L12();
  L45():
    data4 = force? data3;
    checkMissing(data4);
    is_environment = ldf `is.environment` in base;
    r13 = dyn is_environment(data4);
    check L46() else D7();
  L49():
    p1 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r16 = dyn as_data_frame(p1);
    check L50() else D9();
  L52():
    formula3 = ld formula;
    check L54() else D10();
  L53():
    r18 = dyn base3(<sym formula>);
    goto L11(r18);
  D7():
    deopt 27 [c1, r13];
  D9():
    deopt 33 [r16];
  D10():
    deopt 39 [formula3];
  L12():
    goto L20();
  L20():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L75() else L76();
  L46():
    goto L8(c1, r13);
  L50():
    st data = r16;
    goto L10();
  L54():
    formula4 = force? formula3;
    checkMissing(formula4);
    length = ldf length in base;
    r20 = dyn length(formula4);
    check L55() else D11();
  L56():
    warnLHS3 = ld warnLHS;
    check L57() else D12();
  D11():
    deopt 42 [r20];
  D12():
    deopt 45 [warnLHS3];
  L21(r28):
    r31 = `>`(r28, 1);
    c17 = `as.logical`(r31);
    if c17 then L82() else L23(c17);
  L55():
    goto L11(r20);
  L57():
    warnLHS4 = force? warnLHS3;
    checkMissing(warnLHS4);
    c12 = `as.logical`(warnLHS4);
    if c12 then L58() else L13();
  L75():
    formula9 = ld formula;
    check L77() else D20();
  L76():
    r27 = dyn base4(<lang `[[`(formula, 2.0)>);
    goto L21(r27);
  D20():
    deopt 73 [formula9];
  L13():
    goto L16();
  L16():
    ignoreLHS3 = ld ignoreLHS;
    check L67() else D18();
  L23(c19):
    c36 = `as.logical`(c19);
    if c36 then L93() else L27();
  L58():
    ignoreLHS1 = ld ignoreLHS;
    check L59() else D13();
  L77():
    formula10 = force? formula9;
    checkMissing(formula10);
    c16 = `is.object`(formula10);
    if c16 then L78() else L79(formula10);
  L82():
    formula13 = ld formula;
    check L83() else D22();
  D13():
    deopt 47 [ignoreLHS1];
  D18():
    deopt 59 [ignoreLHS3];
  D22():
    deopt 82 [c17, formula13];
  L22(dx5):
    length1 = ldf length in base;
    r30 = dyn length1(dx5);
    check L81() else D21();
  L27():
    __5 = ldf `::`;
    check L97() else D25();
  L28():
    ans = ld ans;
    check L108() else D34();
  L59():
    ignoreLHS2 = force? ignoreLHS1;
    checkMissing(ignoreLHS2);
    c13 = `as.logical`(ignoreLHS2);
    if c13 then L60() else L14();
  L67():
    ignoreLHS4 = force? ignoreLHS3;
    checkMissing(ignoreLHS4);
    c14 = `as.logical`(ignoreLHS4);
    if c14 then L68() else L17();
  L78():
    dr2 = tryDispatchBuiltin.1("[[", formula10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L80() else L79(dr2);
  L79(formula12):
    __1 = ldf `[[` in base;
    r29 = dyn __1(formula12, 2.0);
    goto L22(r29);
  L83():
    formula14 = force? formula13;
    checkMissing(formula14);
    c20 = `is.object`(formula14);
    if c20 then L84() else L85(c17, formula14);
  L93():
    eval = ldf eval;
    check L94() else D23();
  D21():
    deopt 79 [r30];
  D23():
    deopt 95 [];
  D25():
    deopt 102 [];
  D34():
    deopt 129 [ans];
  L14():
    warning1 = ldf warning;
    check L64() else D16();
  L15(r23):
    goto L16();
  L17():
    goto L19(NULL);
  L19(dx2):
    goto L20();
  L24(c24, dx7):
    c25 = `is.object`(dx7);
    if c25 then L87() else L88(c24, dx7);
  L60():
    warning = ldf warning;
    check L61() else D14();
  L68():
    formula5 = ld formula;
    check L69() else D19();
  L80():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx4);
  L81():
    goto L21(r30);
  L84():
    dr4 = tryDispatchBuiltin.1("[[", formula14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L86() else L85(c17, dr4);
  L85(c22, formula16):
    __2 = ldf `[[` in base;
    r32 = dyn __2(formula16, 2.0);
    goto L24(c22, r32);
  L94():
    p2 = prom<V +>{
      formula17 = ld formula;
      formula18 = force? formula17;
      checkMissing(formula18);
      c37 = `is.object`(formula18);
      if c37 then L1() else L2(formula18);
    L0(dx16):
      return dx16;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", formula18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(formula20):
      __4 = ldf `[[` in base;
      r38 = dyn __4(formula20, 2.0);
      goto L0(r38);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx15);
    };
    p3 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    p5 = prom<V +>{
      environment = ldf environment;
      p4 = prom<V +>{
        formula21 = ld formula;
        formula22 = force? formula21;
        checkMissing(formula22);
        return formula22;
      };
      r42 = dyn environment(p4);
      return r42;
    };
    r44 = dyn eval(p2, p3, p5);
    check L95() else D24();
  L97():
    r46 = dyn __5("stats", "terms");
    check L98() else D26();
  L108():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D14():
    deopt 50 [];
  D16():
    deopt 54 [];
  D19():
    deopt 61 [formula5];
  D24():
    deopt 99 [r44];
  D26():
    deopt 105 [r46];
  L25(c29, dx11):
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L61():
    r22 = dyn warning("Unexpected LHS in 'formula' has been ignored.");
    check L62() else D15();
  L64():
    r24 = dyn warning1("Unexpected LHS in 'formula' has been combined with RHS.");
    check L65() else D17();
  L69():
    formula6 = force? formula5;
    checkMissing(formula6);
    c15 = `is.object`(formula6);
    if c15 then L70() else L71(formula6);
  L86():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L24(c17, dx6);
  L87():
    dr6 = tryDispatchBuiltin.1("[[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88(c24, dr6);
  L88(c27, dx9):
    __3 = ldf `[[` in base;
    r33 = dyn __3(dx9, 1.0);
    goto L25(c27, r33);
  L95():
    st ans = r44;
    goto L28();
  L98():
    checkFun.0(r46);
    r47 = r46 as cls;
    p6 = prom<V +>{
      formula23 = ld formula;
      formula24 = force? formula23;
      checkMissing(formula24);
      return formula24;
    };
    r49 = dyn r47(p6);
    check L99() else D27();
  D15():
    deopt 52 [r22];
  D17():
    deopt 56 [r24];
  D27():
    deopt 108 [r49];
  L18(dx1):
    st formula = dx1;
    goto L19(dx1);
  L26(c32, dx14, r35):
    r37 = `==`(dx14, r35);
    c33 = `as.logical`(r37);
    c34 = `&&`(c32, c33);
    goto L23(c34);
  L62():
    goto L15(r22);
  L65():
    goto L15(r24);
  L70():
    dr = tryDispatchBuiltin.1("[", formula6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L72() else L71(dr);
  L71(formula8):
    __ = ldf `[` in base;
    r26 = dyn __(formula8, -2.0);
    goto L18(r26);
  L89():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L25(c24, dx10);
  L90():
    quote = ldf quote in base;
    r36 = dyn quote(<sym list>);
    goto L26(c29, dx11, r36);
  L91():
    r34 = dyn base5(<sym list>);
    goto L26(c29, dx11, r34);
  L99():
    st fterms = r49;
    eval1 = ldf eval;
    check L100() else D28();
  D28():
    deopt 111 [];
  L72():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L100():
    p7 = prom<V +>{
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      fterms = ld fterms;
      fterms1 = force? fterms;
      checkMissing(fterms1);
      attr = ldf attr in base;
      r52 = dyn attr(fterms1, "variables");
      goto L0(r52);
    L2():
      r50 = dyn base6(<sym fterms>, "variables");
      goto L0(r50);
    };
    p8 = prom<V +>{
      data9 = ld data;
      data10 = force? data9;
      checkMissing(data10);
      return data10;
    };
    p10 = prom<V +>{
      environment1 = ldf environment;
      p9 = prom<V +>{
        formula25 = ld formula;
        formula26 = force? formula25;
        checkMissing(formula26);
        return formula26;
      };
      r56 = dyn environment1(p9);
      return r56;
    };
    r58 = dyn eval1(p7, p8, p10);
    check L101() else D29();
  D29():
    deopt 115 [r58];
  L101():
    st ans = r58;
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L102() else L103();
  L29(r60):
    l = ld ans;
    names__ = ldf `names<-`;
    check L106() else D32();
  L102():
    fterms2 = ld fterms;
    check L104() else D30();
  L103():
    r59 = dyn base7(<sym fterms>, "term.labels");
    goto L29(r59);
  D30():
    deopt 119 [fterms2];
  D32():
    deopt 125 [r60, l, r60];
  L104():
    fterms3 = force? fterms2;
    checkMissing(fterms3);
    attr1 = ldf attr in base;
    r61 = dyn attr1(fterms3, "term.labels");
    check L105() else D31();
  L106():
    r62 = dyn names__(l, NULL, r60);
    check L107() else D33();
  D31():
    deopt 123 [r61];
  D33():
    deopt 127 [r60, r62];
  L105():
    goto L29(r61);
  L107():
    st ans = r62;
    goto L28();
  }
}