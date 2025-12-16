fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-151885757`;
    st `print.noquote` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-151885757`(x, quote, right, `...`) {
  (reg x:*, reg quote:*, reg right:*, reg ddd:dots) -+> V { var x:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg cl:*, reg cl1:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:S, reg r16:V, reg cl2:*, reg cl3:V, reg c3:L, reg r18:S, reg cl5:V, reg dr:V, reg dc:L, reg dx:V, reg r20:S, reg dx1:V, reg isNQ:*, reg isNQ1:V, reg __:cls, reg r21:V, reg names:cls, reg r22:V, reg r23:V, reg any:cls, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg isNQ2:*, reg isNQ3:V, reg any1:cls, reg r28:V, reg c4:L, reg x3:*, reg x4:V, reg cl6:*, reg cl7:V, reg c5:L, reg cl9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg isNQ4:*, reg isNQ5:V, reg r29:V, reg __1:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg cl10:*, reg cl11:V, reg length:cls, reg r33:V, reg c6:L, reg cl12:*, reg cl13:V, reg cl14:V, reg l:*, reg attr__:cls, reg r34:V, reg cl15:V, reg print:cls, reg x5:*, reg x6:V, reg p:p(V +), reg quote1:*, reg quote2:V, reg p1:p(V +), reg right1:*, reg right2:V, reg p2:p(V +), reg ddd1:dots?, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg copy:*, reg copy1:V, reg c7:L, reg ox:*, reg ox1:V, reg ox2:V, reg x7:*, reg x8:V, reg invisible:cls, reg r41:V |
    mkenv;
    st x = x;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L0(FALSE) else L0(quote);
  L0(quote_orDefault):
    st quote = quote_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L1(FALSE) else L1(right);
  L1(right_orDefault):
    st right = right_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L2(r1):
    r5 = `!`(r1);
    st copy = r5;
    c1 = `as.logical`(r5);
    if c1 then L28() else L4();
  L22():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L23():
    r = dyn base(<lang `<-`(cl, attr(x, "class"))>);
    goto L2(r);
  L3(r3):
    st cl = r3;
    c = `==`(r3, NULL);
    goto L2(c);
  L4():
    goto L18();
  L18():
    print = ldf print;
    check L67() else D17();
  L24():
    x1 = ld x;
    check L26() else D0();
  L25():
    r2 = dyn base1(<sym x>, "class");
    goto L3(r2);
  L28():
    cl = ld cl;
    check L29() else D2();
  D0():
    deopt 3 [x1];
  D2():
    deopt 12 [cl];
  D17():
    deopt 76 [];
  L26():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "class");
    check L27() else D1();
  L29():
    cl1 = force? cl;
    checkMissing(cl1);
    r6 = `==`(cl1, "noquote");
    st isNQ = r6;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L67():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p1 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p2 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    ddd1 = ld `...`;
    r38 = dyn print[, quote, right, `...`](p, p1, p2, ddd1);
    check L68() else D18();
  D1():
    deopt 7 [r4];
  D18():
    deopt 83 [r38];
  L5(r8):
    c2 = `as.logical`(r8);
    if c2 then L32() else L6();
  L27():
    goto L3(r4);
  L30():
    missing = ldf missing in base;
    r9 = dyn missing(<sym right>);
    goto L5(r9);
  L31():
    r7 = dyn base2(<sym right>);
    goto L5(r7);
  L68():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L6():
    goto L10();
  L10():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L19(r40):
    popenv;
    return r40;
  L32():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L69():
    copy = ld copy;
    check L71() else D19();
  L70():
    r39 = dyn base7(<lang if(copy, ox, x)>);
    goto L19(r39);
  D19():
    deopt 86 [copy];
  L7(r11):
    st right = r11;
    goto L10();
  L11(r27):
    st copy = r27;
    c4 = `as.logical`(r27);
    if c4 then L49() else L12();
  L33():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L34():
    r10 = dyn base3(<lang `==`("right", names(`[`(cl, isNQ)))>);
    goto L7(r10);
  L45():
    isNQ2 = ld isNQ;
    check L47() else D7();
  L46():
    r26 = dyn base5(<sym isNQ>);
    goto L11(r26);
  L71():
    copy1 = force? copy;
    checkMissing(copy1);
    c7 = `as.logical`(copy1);
    if c7 then L72() else L20();
  D7():
    deopt 40 [isNQ2];
  L8(r15, r16):
    r23 = `==`(r15, r16);
    any = ldf any in base;
    r24 = dyn any(r23);
    check L43() else D6();
  L12():
    goto L17(NULL);
  L17(cl15):
    goto L18();
  L20():
    x7 = ld x;
    check L75() else D21();
  L21(ox2):
    invisible = ldf invisible in base;
    r41 = dyn invisible(ox2);
    check L76() else D22();
  L35():
    cl2 = ld cl;
    check L37() else D3();
  L36():
    r14 = dyn base4(<lang `[`(cl, isNQ)>);
    goto L8("right", r14);
  L47():
    isNQ3 = force? isNQ2;
    checkMissing(isNQ3);
    any1 = ldf any in base;
    r28 = dyn any1(isNQ3);
    check L48() else D8();
  L49():
    x3 = ld x;
    check L50() else D9();
  L72():
    ox = ld ox;
    check L73() else D20();
  D3():
    deopt 25 ["right", cl2];
  D6():
    deopt 34 [r24];
  D8():
    deopt 43 [r28];
  D9():
    deopt 45 [x3];
  D20():
    deopt 88 [ox];
  D21():
    deopt 90 [x7];
  D22():
    deopt 93 [r41];
  L37():
    cl3 = force? cl2;
    checkMissing(cl3);
    c3 = `is.object`(cl3);
    if c3 then L38() else L39("right", cl3);
  L43():
    goto L7(r24);
  L48():
    goto L11(r28);
  L50():
    x4 = force? x3;
    checkMissing(x4);
    st ox = x4;
    cl6 = ld cl;
    check L51() else D10();
  L73():
    ox1 = force? ox;
    checkMissing(ox1);
    goto L21(ox1);
  L75():
    x8 = force? x7;
    checkMissing(x8);
    goto L21(x8);
  L76():
    goto L19(r41);
  D10():
    deopt 48 [cl6];
  L9(r20, dx1):
    names = ldf names in base;
    r22 = dyn names(dx1);
    check L42() else D5();
  L38():
    dr = tryDispatchBuiltin.1("[", cl3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39("right", dr);
  L39(r18, cl5):
    isNQ = ld isNQ;
    check L41() else D4();
  L51():
    cl7 = force? cl6;
    checkMissing(cl7);
    c5 = `is.object`(cl7);
    if c5 then L52() else L53(cl7);
  D4():
    deopt 27 [r18, cl5, isNQ];
  D5():
    deopt 31 [r20, r22];
  L13(dx3):
    st cl = dx3;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9("right", dx);
  L41():
    isNQ1 = force? isNQ;
    __ = ldf `[` in base;
    r21 = dyn __(cl5, isNQ1);
    goto L9(r18, r21);
  L42():
    goto L8(r20, r22);
  L52():
    dr2 = tryDispatchBuiltin.1("[", cl7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(cl9):
    isNQ4 = ld isNQ;
    check L55() else D11();
  D11():
    deopt 50 [cl9, isNQ4];
  L14(r32):
    c6 = `as.logical`(r32);
    if c6 then L60() else L15();
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L55():
    isNQ5 = force? isNQ4;
    checkMissing(isNQ5);
    r29 = `!`(isNQ5);
    __1 = ldf `[` in base;
    r30 = dyn __1(cl9, r29);
    goto L13(r30);
  L56():
    cl10 = ld cl;
    check L58() else D12();
  L57():
    r31 = dyn base6(<sym cl>);
    goto L14(r31);
  D12():
    deopt 57 [cl10];
  L15():
    goto L16(NULL);
  L16(cl14):
    l = ld x;
    attr__ = ldf `attr<-`;
    check L63() else D15();
  L58():
    cl11 = force? cl10;
    checkMissing(cl11);
    length = ldf length in base;
    r33 = dyn length(cl11);
    check L59() else D13();
  L60():
    cl12 = ld cl;
    check L61() else D14();
  D13():
    deopt 60 [r33];
  D14():
    deopt 61 [cl12];
  D15():
    deopt 66 [cl14, l, cl14];
  L59():
    goto L14(r33);
  L61():
    cl13 = force? cl12;
    checkMissing(cl13);
    goto L16(cl13);
  L63():
    r34 = dyn attr__(l, NULL, "class", cl14);
    check L64() else D16();
  D16():
    deopt 69 [cl14, r34];
  L64():
    st x = r34;
    goto L17(cl14);
  }
}