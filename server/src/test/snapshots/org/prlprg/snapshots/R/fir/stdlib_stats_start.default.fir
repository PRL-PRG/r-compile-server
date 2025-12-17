fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2104823373;
    st `start.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2104823373(x, `ts.eps`, `...`) {
  (reg x:*, reg ts_eps:*, reg ddd:dots) -+> V { var x:*, var `ts.eps`:*, reg ts_eps_isMissing:L, reg ts_eps_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg hasTsp:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg attr:cls, reg r6:V, reg tsp:*, reg tsp1:V, reg c:L, reg tsp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg tsp4:*, reg tsp5:V, reg c1:L, reg dx3:V, reg tsp7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r8:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg tsp8:*, reg tsp9:V, reg c2:L, reg tsp11:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg dx12:V, reg r14:V, reg round:cls, reg r15:V, reg r16:V, reg abs:cls, reg r17:V, reg ts_eps1:*, reg ts_eps2:V, reg r18:V, reg c3:L, reg c5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c8:L, reg r20:V, reg is:*, reg is1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c11:L, reg is4:V, reg r22:V, reg round1:cls, reg r23:V, reg r24:V, reg abs1:cls, reg r25:V, reg ts_eps3:*, reg ts_eps4:V, reg r26:V, reg c12:L, reg c13:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg tsp12:*, reg tsp13:V, reg c16:L, reg tsp15:V, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg __3:cls, reg r29:V, reg ts_eps5:*, reg ts_eps6:V, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg tsp16:*, reg tsp17:V, reg c17:L, reg tsp19:V, reg dr8:V, reg dc4:L, reg dx15:V, reg dx16:V, reg __4:cls, reg r34:V, reg tsp20:*, reg tsp21:V, reg c18:L, reg dx18:V, reg tsp23:V, reg dr10:V, reg dc5:L, reg dx20:V, reg dx21:V, reg dx22:V, reg __5:cls, reg r35:V, reg is5:*, reg is6:V, reg r36:V, reg r37:V, reg r38:V, reg r39:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg is7:*, reg is8:V, reg fs:*, reg fs1:V, reg r42:V, reg c19:cls, reg r43:V, reg tsp24:*, reg tsp25:V, reg c20:L, reg tsp27:V, reg dr12:V, reg dc6:L, reg dx23:V, reg dx24:V, reg __6:cls, reg r44:V |
    mkenv;
    st x = x;
    ts_eps_isMissing = missing.0(ts_eps);
    if ts_eps_isMissing then L0() else L1(ts_eps);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("ts.eps");
      return r;
    };
    goto L1(p);
  L1(ts_eps_orDefault):
    st `ts.eps` = ts_eps_orDefault;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r3):
    st tsp = r3;
    tsp = ld tsp;
    check L24() else D3();
  L19():
    hasTsp = ldf hasTsp;
    check L21() else D0();
  L20():
    r2 = dyn base(<lang hasTsp(x)>, "tsp");
    goto L2(r2);
  D0():
    deopt 3 [];
  D3():
    deopt 10 [tsp];
  L21():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn hasTsp(p1);
    check L22() else D1();
  L24():
    tsp1 = force? tsp;
    checkMissing(tsp1);
    c = `is.object`(tsp1);
    if c then L25() else L26(tsp1);
  D1():
    deopt 5 [r5];
  L3(dx1):
    tsp4 = ld tsp;
    check L28() else D4();
  L22():
    attr = ldf attr in base;
    r6 = dyn attr(r5, "tsp");
    check L23() else D2();
  L25():
    dr = tryDispatchBuiltin.1("[", tsp1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(tsp3):
    __ = ldf `[` in base;
    r7 = dyn __(tsp3, 1);
    goto L3(r7);
  D2():
    deopt 8 [r6];
  D4():
    deopt 14 [dx1, tsp4];
  L23():
    goto L2(r6);
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L28():
    tsp5 = force? tsp4;
    checkMissing(tsp5);
    c1 = `is.object`(tsp5);
    if c1 then L29() else L30(dx1, tsp5);
  L4(dx6, dx7):
    r9 = `*`(dx6, dx7);
    st is = r9;
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L29():
    dr2 = tryDispatchBuiltin.1("[", tsp5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dx1, dr2);
  L30(dx3, tsp7):
    __1 = ldf `[` in base;
    r8 = dyn __1(tsp7, 3);
    goto L4(dx3, r8);
  L5(r11):
    ts_eps1 = ld `ts.eps`;
    check L41() else D7();
  L31():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx1, dx5);
  L32():
    tsp8 = ld tsp;
    check L34() else D5();
  L33():
    r10 = dyn base1(<lang `-`(`[`(tsp, 3), round(`[`(tsp, 3)))>);
    goto L5(r10);
  D5():
    deopt 23 [tsp8];
  D7():
    deopt 32 [r11, ts_eps1];
  L34():
    tsp9 = force? tsp8;
    checkMissing(tsp9);
    c2 = `is.object`(tsp9);
    if c2 then L35() else L36(tsp9);
  L41():
    ts_eps2 = force? ts_eps1;
    checkMissing(ts_eps2);
    r18 = `<`(r11, ts_eps2);
    c3 = `as.logical`(r18);
    if c3 then L42() else L8(c3);
  L6(dx9):
    sym2 = ldf round;
    base2 = ldf round in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L8(c5):
    c15 = `as.logical`(c5);
    if c15 then L51() else L11();
  L35():
    dr4 = tryDispatchBuiltin.1("[", tsp9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(dr4);
  L36(tsp11):
    __2 = ldf `[` in base;
    r12 = dyn __2(tsp11, 3);
    goto L6(r12);
  L42():
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L7(dx12, r14):
    r16 = `-`(dx12, r14);
    abs = ldf abs in base;
    r17 = dyn abs(r16);
    check L40() else D6();
  L9(c8, r20):
    ts_eps3 = ld `ts.eps`;
    check L49() else D10();
  L11():
    tsp24 = ld tsp;
    check L76() else D19();
  L37():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx8);
  L38():
    round = ldf round in base;
    r15 = dyn round(<lang `[`(tsp, 3)>);
    goto L7(dx9, r15);
  L39():
    r13 = dyn base2(<lang `[`(tsp, 3)>);
    goto L7(dx9, r13);
  L43():
    is = ld is;
    check L45() else D8();
  L44():
    r19 = dyn base3(<lang `-`(is, round(is))>);
    goto L9(c3, r19);
  L51():
    sym5 = ldf floor;
    base5 = ldf floor in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  D6():
    deopt 32 [r17];
  D8():
    deopt 37 [c3, is];
  D10():
    deopt 43 [c8, r20, ts_eps3];
  D19():
    deopt 84 [tsp24];
  L12(r28):
    st is = r28;
    sym6 = ldf floor;
    base6 = ldf floor in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L40():
    goto L5(r17);
  L45():
    is1 = force? is;
    checkMissing(is1);
    sym4 = ldf round;
    base4 = ldf round in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L49():
    ts_eps4 = force? ts_eps3;
    checkMissing(ts_eps4);
    r26 = `<`(r20, ts_eps4);
    c12 = `as.logical`(r26);
    c13 = `&&`(c8, c12);
    goto L8(c13);
  L52():
    tsp12 = ld tsp;
    check L54() else D11();
  L53():
    r27 = dyn base5(<lang `+`(`[`(tsp, 1), ts.eps)>);
    goto L12(r27);
  L76():
    tsp25 = force? tsp24;
    checkMissing(tsp25);
    c20 = `is.object`(tsp25);
    if c20 then L77() else L78(tsp25);
  D11():
    deopt 48 [tsp12];
  L10(c11, is4, r22):
    r24 = `-`(is4, r22);
    abs1 = ldf abs in base;
    r25 = dyn abs1(r24);
    check L48() else D9();
  L14(r33):
    st fs = r33;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L18(dx24):
    popenv;
    return dx24;
  L46():
    round1 = ldf round in base;
    r23 = dyn round1(<sym is>);
    goto L10(c3, is1, r23);
  L47():
    r21 = dyn base4(<sym is>);
    goto L10(c3, is1, r21);
  L54():
    tsp13 = force? tsp12;
    checkMissing(tsp13);
    c16 = `is.object`(tsp13);
    if c16 then L55() else L56(tsp13);
  L59():
    tsp16 = ld tsp;
    check L61() else D13();
  L60():
    r32 = dyn base6(<lang `+`(`*`(`[`(tsp, 3), `(`(`-`(`[`(tsp, 1), is))), 0.001)>);
    goto L14(r32);
  L77():
    dr12 = tryDispatchBuiltin.1("[", tsp25);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L79() else L78(dr12);
  L78(tsp27):
    __6 = ldf `[` in base;
    r44 = dyn __6(tsp27, 1);
    goto L18(r44);
  D9():
    deopt 43 [c11, r25];
  D13():
    deopt 58 [tsp16];
  L13(dx14):
    ts_eps5 = ld `ts.eps`;
    check L58() else D12();
  L17(r41):
    popenv;
    return r41;
  L48():
    goto L9(c11, r25);
  L55():
    dr6 = tryDispatchBuiltin.1("[", tsp13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(dr6);
  L56(tsp15):
    __3 = ldf `[` in base;
    r29 = dyn __3(tsp15, 1);
    goto L13(r29);
  L61():
    tsp17 = force? tsp16;
    checkMissing(tsp17);
    c17 = `is.object`(tsp17);
    if c17 then L62() else L63(tsp17);
  L70():
    is7 = ld is;
    check L72() else D16();
  L71():
    r40 = dyn base7(<sym is>, <lang `+`(fs, 1.0)>);
    goto L17(r40);
  L79():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L18(dx23);
  D12():
    deopt 52 [dx14, ts_eps5];
  D16():
    deopt 76 [is7];
  L15(dx16):
    tsp20 = ld tsp;
    check L65() else D14();
  L57():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx13);
  L58():
    ts_eps6 = force? ts_eps5;
    checkMissing(ts_eps6);
    r30 = `+`(dx14, ts_eps6);
    r31 = floor(r30);
    goto L12(r31);
  L62():
    dr8 = tryDispatchBuiltin.1("[", tsp17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L64() else L63(dr8);
  L63(tsp19):
    __4 = ldf `[` in base;
    r34 = dyn __4(tsp19, 3);
    goto L15(r34);
  L72():
    is8 = force? is7;
    checkMissing(is8);
    fs = ld fs;
    check L73() else D17();
  D14():
    deopt 62 [dx16, tsp20];
  D17():
    deopt 78 [fs];
  L64():
    dx15 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx15);
  L65():
    tsp21 = force? tsp20;
    checkMissing(tsp21);
    c18 = `is.object`(tsp21);
    if c18 then L66() else L67(dx16, tsp21);
  L73():
    fs1 = force? fs;
    checkMissing(fs1);
    r42 = `+`(fs1, 1.0);
    c19 = ldf c in base;
    r43 = dyn c19(is8, r42);
    check L74() else D18();
  D18():
    deopt 83 [r43];
  L16(dx21, dx22):
    is5 = ld is;
    check L69() else D15();
  L66():
    dr10 = tryDispatchBuiltin.1("[", tsp21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L68() else L67(dx16, dr10);
  L67(dx18, tsp23):
    __5 = ldf `[` in base;
    r35 = dyn __5(tsp23, 1);
    goto L16(dx18, r35);
  L74():
    goto L17(r43);
  D15():
    deopt 66 [dx21, dx22, is5];
  L68():
    dx20 = getTryDispatchBuiltinValue(dr10);
    goto L16(dx16, dx20);
  L69():
    is6 = force? is5;
    checkMissing(is6);
    r36 = `-`(dx22, is6);
    r37 = `*`(dx21, r36);
    r38 = `+`(r37, 0.001);
    r39 = floor(r38);
    goto L14(r39);
  }
}