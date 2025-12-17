fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4120097962;
    st specialCompletions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4120097962(text, spl) {
  (reg text:*, reg spl:*) -+> V { var text:*, var spl:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg spl1:*, reg spl2:V, reg which_max:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg spl3:*, reg spl4:V, reg names:cls, reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg wm:*, reg wm1:V, reg __:cls, reg r8:V, reg spl5:*, reg spl6:V, reg c1:L, reg spl8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg wm2:*, reg wm3:V, reg __1:cls, reg r9:V, reg opStart:*, reg opStart1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg opStart4:V, reg r11:V, reg op:*, reg op1:V, reg nchar:cls, reg r12:V, reg r13:V, reg opStart5:*, reg opStart6:V, reg r14:V, reg c2:L, reg character:cls, reg r15:V, reg substr:cls, reg text1:*, reg text2:V, reg p:p(V +), reg opStart7:*, reg opStart8:V, reg r19:V, reg p1:p(V +), reg r21:V, reg substr1:cls, reg text3:*, reg text4:V, reg p2:p(V +), reg opEnd:*, reg opEnd1:V, reg p3:p(V +), reg r24:V, reg op2:*, reg op3:V, reg r25:V, reg c3:L, reg helpCompletions:cls, reg prefix:*, reg prefix1:V, reg p4:p(V +), reg suffix:*, reg suffix1:V, reg p5:p(V +), reg r28:V, reg opStart9:*, reg opStart10:V, reg r31:V, reg c4:L, reg character1:cls, reg r32:V, reg specialOpCompletionsHelper:cls, reg op4:*, reg op5:V, reg p6:p(V +), reg suffix2:*, reg suffix3:V, reg p7:p(V +), reg prefix2:*, reg prefix3:V, reg p8:p(V +), reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg comps:*, reg comps1:V, reg length:cls, reg r41:V, reg r42:V, reg c5:L, reg sprintf:cls, reg prefix4:*, reg prefix5:V, reg p9:p(V +), reg op6:*, reg op7:V, reg p10:p(V +), reg comps2:*, reg comps3:V, reg p11:p(V +), reg r47:V |
    mkenv;
    st text = text;
    st spl = spl;
    sym = ldf `which.max`;
    base = ldf `which.max` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    st wm = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L14():
    spl1 = ld spl;
    check L16() else D0();
  L15():
    r = dyn base(<sym spl>);
    goto L0(r);
  D0():
    deopt 2 [spl1];
  L1(r4):
    c = `is.object`(r4);
    if c then L22() else L23(r4);
  L16():
    spl2 = force? spl1;
    checkMissing(spl2);
    which_max = ldf `which.max` in base;
    r2 = dyn which_max(spl2);
    check L17() else D1();
  L18():
    spl3 = ld spl;
    check L20() else D2();
  L19():
    r3 = dyn base1(<sym spl>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [spl3];
  L2(dx1):
    st op = dx1;
    spl5 = ld spl;
    check L26() else D5();
  L17():
    goto L0(r2);
  L20():
    spl4 = force? spl3;
    checkMissing(spl4);
    names = ldf names in base;
    r5 = dyn names(spl4);
    check L21() else D3();
  L22():
    dr = tryDispatchBuiltin.1("[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r7):
    wm = ld wm;
    check L25() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 13 [r7, wm];
  D5():
    deopt 17 [spl5];
  L21():
    goto L1(r5);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L25():
    wm1 = force? wm;
    __ = ldf `[` in base;
    r8 = dyn __(r7, wm1);
    goto L2(r8);
  L26():
    spl6 = force? spl5;
    checkMissing(spl6);
    c1 = `is.object`(spl6);
    if c1 then L27() else L28(spl6);
  L3(dx3):
    st opStart = dx3;
    opStart = ld opStart;
    check L31() else D7();
  L27():
    dr2 = tryDispatchBuiltin.1("[", spl6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(spl8):
    wm2 = ld wm;
    check L30() else D6();
  D6():
    deopt 19 [spl8, wm2];
  D7():
    deopt 23 [opStart];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L30():
    wm3 = force? wm2;
    __1 = ldf `[` in base;
    r9 = dyn __1(spl8, wm3);
    goto L3(r9);
  L31():
    opStart1 = force? opStart;
    checkMissing(opStart1);
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L4(opStart4, r11):
    r13 = `+`(opStart4, r11);
    st opEnd = r13;
    opStart5 = ld opStart;
    check L36() else D10();
  L32():
    op = ld op;
    check L34() else D8();
  L33():
    r10 = dyn base2(<sym op>);
    goto L4(opStart1, r10);
  D8():
    deopt 26 [opStart1, op];
  D10():
    deopt 35 [opStart5];
  L34():
    op1 = force? op;
    checkMissing(op1);
    nchar = ldf nchar in base;
    r12 = dyn nchar(op1, "chars", FALSE, NA_LGL);
    check L35() else D9();
  L36():
    opStart6 = force? opStart5;
    checkMissing(opStart6);
    r14 = `<`(opStart6, 1.0);
    c2 = `as.logical`(r14);
    if c2 then L37() else L5();
  D9():
    deopt 32 [opStart1, r12];
  L5():
    substr = ldf substr;
    check L42() else D13();
  L35():
    goto L4(opStart1, r12);
  L37():
    character = ldf character;
    check L38() else D11();
  D11():
    deopt 40 [];
  D13():
    deopt 46 [];
  L38():
    r15 = dyn character();
    check L39() else D12();
  L42():
    p = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    p1 = prom<V +>{
      opStart7 = ld opStart;
      opStart8 = force? opStart7;
      checkMissing(opStart8);
      r19 = `-`(opStart8, 1);
      return r19;
    };
    r21 = dyn substr(p, 1, p1);
    check L43() else D14();
  D12():
    deopt 41 [r15];
  D14():
    deopt 50 [r21];
  L39():
    popenv;
    return r15;
  L43():
    st prefix = r21;
    substr1 = ldf substr;
    check L44() else D15();
  D15():
    deopt 53 [];
  L44():
    p2 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    p3 = prom<V +>{
      opEnd = ld opEnd;
      opEnd1 = force? opEnd;
      checkMissing(opEnd1);
      return opEnd1;
    };
    r24 = dyn substr1(p2, p3, 1000000);
    check L45() else D16();
  D16():
    deopt 57 [r24];
  L45():
    st suffix = r24;
    op2 = ld op;
    check L46() else D17();
  D17():
    deopt 59 [op2];
  L46():
    op3 = force? op2;
    checkMissing(op3);
    r25 = `==`(op3, "?");
    c3 = `as.logical`(r25);
    if c3 then L47() else L7();
  L7():
    opStart9 = ld opStart;
    check L52() else D20();
  L47():
    helpCompletions = ldf helpCompletions;
    check L48() else D18();
  D18():
    deopt 64 [];
  D20():
    deopt 71 [opStart9];
  L48():
    p4 = prom<V +>{
      prefix = ld prefix;
      prefix1 = force? prefix;
      checkMissing(prefix1);
      return prefix1;
    };
    p5 = prom<V +>{
      suffix = ld suffix;
      suffix1 = force? suffix;
      checkMissing(suffix1);
      return suffix1;
    };
    r28 = dyn helpCompletions(p4, p5);
    check L49() else D19();
  L52():
    opStart10 = force? opStart9;
    checkMissing(opStart10);
    r31 = `<=`(opStart10, 1.0);
    c4 = `as.logical`(r31);
    if c4 then L53() else L9();
  D19():
    deopt 67 [r28];
  L9():
    specialOpCompletionsHelper = ldf specialOpCompletionsHelper;
    check L58() else D23();
  L49():
    popenv;
    return r28;
  L53():
    character1 = ldf character;
    check L54() else D21();
  D21():
    deopt 76 [];
  D23():
    deopt 82 [];
  L54():
    r32 = dyn character1();
    check L55() else D22();
  L58():
    p6 = prom<V +>{
      op4 = ld op;
      op5 = force? op4;
      checkMissing(op5);
      return op5;
    };
    p7 = prom<V +>{
      suffix2 = ld suffix;
      suffix3 = force? suffix2;
      checkMissing(suffix3);
      return suffix3;
    };
    p8 = prom<V +>{
      prefix2 = ld prefix;
      prefix3 = force? prefix2;
      checkMissing(prefix3);
      return prefix3;
    };
    r38 = dyn specialOpCompletionsHelper(p6, p7, p8);
    check L59() else D24();
  D22():
    deopt 77 [r32];
  D24():
    deopt 86 [r38];
  L55():
    popenv;
    return r32;
  L59():
    st comps = r38;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L11(r40):
    r42 = `==`(r40, 0);
    c5 = `as.logical`(r42);
    if c5 then L64() else L12();
  L60():
    comps = ld comps;
    check L62() else D25();
  L61():
    r39 = dyn base3(<sym comps>);
    goto L11(r39);
  D25():
    deopt 90 [comps];
  L12():
    goto L13();
  L13():
    sprintf = ldf sprintf;
    check L66() else D27();
  L62():
    comps1 = force? comps;
    checkMissing(comps1);
    length = ldf length in base;
    r41 = dyn length(comps1);
    check L63() else D26();
  L64():
    st comps = "";
    goto L13();
  D26():
    deopt 93 [r41];
  D27():
    deopt 102 [];
  L63():
    goto L11(r41);
  L66():
    p9 = prom<V +>{
      prefix4 = ld prefix;
      prefix5 = force? prefix4;
      checkMissing(prefix5);
      return prefix5;
    };
    p10 = prom<V +>{
      op6 = ld op;
      op7 = force? op6;
      checkMissing(op7);
      return op7;
    };
    p11 = prom<V +>{
      comps2 = ld comps;
      comps3 = force? comps2;
      checkMissing(comps3);
      return comps3;
    };
    r47 = dyn sprintf("%s%s%s", p9, p10, p11);
    check L67() else D28();
  D28():
    deopt 107 [r47];
  L67():
    popenv;
    return r47;
  }
}