fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner362722233;
    st `weighted.mean.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner362722233(x, w, `...`, `na.rm`) {
  (reg x:*, reg w:*, reg ddd:dots, reg na_rm:*) -+> V { var x:*, var w:*, var `...`:dots?, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg na_rm1:*, reg na_rm2:V, reg c1:L, reg x1:*, reg x2:V, reg c2:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg x7:V, reg r4:V, reg x8:*, reg x9:V, reg is_na:cls, reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x10:*, reg x11:V, reg sum:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg r15:V, reg x12:*, reg x13:V, reg length:cls, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg w1:*, reg w2:V, reg length1:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg r27:V, reg x14:*, reg x15:V, reg length2:cls, reg r28:V, reg r29:V, reg c3:L, reg stop:cls, reg r30:V, reg na_rm3:*, reg na_rm4:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg x16:*, reg x17:V, reg is_na1:cls, reg r34:V, reg r35:V, reg w3:*, reg w4:V, reg c5:L, reg w6:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg i:*, reg i1:V, reg __1:cls, reg r36:V, reg x18:*, reg x19:V, reg c6:L, reg x21:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg i2:*, reg i3:V, reg __2:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg x22:*, reg x23:V, reg w7:*, reg w8:V, reg r40:V, reg c7:L, reg r42:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg w9:*, reg w10:V, reg r43:V, reg __3:cls, reg r44:V, reg sum1:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg r50:V, reg w11:*, reg w12:V, reg sum2:cls, reg r51:V, reg r52:V |
    mkenv;
    st x = x;
    st w = w;
    st `...` = ddd;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L1(r1):
    c = `as.logical`(r1);
    if c then L24() else L2();
  L22():
    missing = ldf missing in base;
    r2 = dyn missing(<sym w>);
    goto L1(r2);
  L23():
    r = dyn base(<sym w>);
    goto L1(r);
  L2():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L24():
    na_rm1 = ld `na.rm`;
    check L25() else D0();
  D0():
    deopt 3 [na_rm1];
  L10(r21):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L25():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c1 = `as.logical`(na_rm2);
    if c1 then L26() else L3();
  L46():
    w1 = ld w;
    check L48() else D8();
  L47():
    r20 = dyn base4(<sym w>);
    goto L10(r20);
  D8():
    deopt 35 [w1];
  L3():
    goto L6();
  L6():
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L11(r26, r27):
    r29 = `!=`(r26, r27);
    c3 = `as.logical`(r29);
    if c3 then L54() else L12();
  L26():
    x1 = ld x;
    check L27() else D1();
  L48():
    w2 = force? w1;
    checkMissing(w2);
    length1 = ldf length in base;
    r22 = dyn length1(w2);
    check L49() else D9();
  L50():
    x14 = ld x;
    check L52() else D10();
  L51():
    r25 = dyn base5(<sym x>);
    goto L11(r21, r25);
  D1():
    deopt 5 [x1];
  D9():
    deopt 38 [r22];
  D10():
    deopt 40 [r21, x14];
  L7(r9):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L12():
    goto L13();
  L13():
    na_rm3 = ld `na.rm`;
    check L58() else D14();
  L27():
    x2 = force? x1;
    checkMissing(x2);
    c2 = `is.object`(x2);
    if c2 then L28() else L29(x2);
  L36():
    x10 = ld x;
    check L38() else D4();
  L37():
    r8 = dyn base2(<sym x>);
    goto L7(r8);
  L49():
    goto L10(r22);
  L52():
    x15 = force? x14;
    checkMissing(x15);
    length2 = ldf length in base;
    r28 = dyn length2(x15);
    check L53() else D11();
  L54():
    stop = ldf stop;
    check L55() else D12();
  D4():
    deopt 20 [x10];
  D11():
    deopt 43 [r21, r28];
  D12():
    deopt 46 [];
  D14():
    deopt 51 [na_rm3];
  L4(dx1):
    st x = dx1;
    goto L6();
  L8(r14, r15):
    r17 = `/`(r14, r15);
    popenv;
    return r17;
  L28():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(x4):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L38():
    x11 = force? x10;
    checkMissing(x11);
    sum = ldf sum in base;
    r10 = dyn sum(x11);
    check L39() else D5();
  L40():
    x12 = ld x;
    check L42() else D6();
  L41():
    r13 = dyn base3(<sym x>);
    goto L8(r9, r13);
  L53():
    goto L11(r21, r28);
  L55():
    r30 = dyn stop("'x' and 'w' must have the same length");
    check L56() else D13();
  L58():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    c4 = `as.logical`(na_rm4);
    if c4 then L59() else L14();
  D5():
    deopt 23 [r10];
  D6():
    deopt 25 [r9, x12];
  D13():
    deopt 48 [r30];
  L5(x7, r4):
    r6 = `!`(r4);
    __ = ldf `[` in base;
    r7 = dyn __(x7, r6);
    goto L4(r7);
  L14():
    goto L18();
  L18():
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L31():
    x8 = ld x;
    check L33() else D2();
  L32():
    r3 = dyn base1(<sym x>);
    goto L5(x4, r3);
  L39():
    goto L7(r10);
  L42():
    x13 = force? x12;
    checkMissing(x13);
    length = ldf length in base;
    r16 = dyn length(x13);
    check L43() else D7();
  L56():
    goto L13();
  L59():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  D2():
    deopt 9 [x4, x8];
  D7():
    deopt 28 [r9, r16];
  L15(r33):
    r35 = `!`(r33);
    st i = r35;
    w3 = ld w;
    check L64() else D17();
  L19(r39):
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L33():
    x9 = force? x8;
    checkMissing(x9);
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(x9);
    check L34() else D3();
  L43():
    goto L8(r9, r16);
  L60():
    x16 = ld x;
    check L62() else D15();
  L61():
    r32 = dyn base6(<sym x>);
    goto L15(r32);
  L75():
    x22 = ld x;
    check L77() else D21();
  L76():
    r38 = dyn base7(<lang `[`(`(`(`*`(x, w)), `!=`(w, 0.0))>);
    goto L19(r38);
  D3():
    deopt 12 [x4, r5];
  D15():
    deopt 55 [x16];
  D17():
    deopt 61 [w3];
  D21():
    deopt 77 [x22];
  L21(r49, r50):
    r52 = `/`(r49, r50);
    popenv;
    return r52;
  L34():
    goto L5(x4, r5);
  L62():
    x17 = force? x16;
    checkMissing(x17);
    is_na1 = ldf `is.na` in base;
    r34 = dyn is_na1(x17);
    check L63() else D16();
  L64():
    w4 = force? w3;
    checkMissing(w4);
    c5 = `is.object`(w4);
    if c5 then L65() else L66(w4);
  L77():
    x23 = force? x22;
    checkMissing(x23);
    w7 = ld w;
    check L78() else D22();
  L84():
    w11 = ld w;
    check L86() else D25();
  L85():
    r48 = dyn base8(<sym w>);
    goto L21(r39, r48);
  D16():
    deopt 58 [r34];
  D22():
    deopt 78 [x23, w7];
  D25():
    deopt 89 [r39, w11];
  L16(dx4):
    st w = dx4;
    x18 = ld x;
    check L69() else D19();
  L63():
    goto L15(r34);
  L65():
    dr2 = tryDispatchBuiltin.1("[", w4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L67() else L66(dr2);
  L66(w6):
    i = ld i;
    check L68() else D18();
  L78():
    w8 = force? w7;
    checkMissing(w8);
    r40 = `*`(x23, w8);
    c7 = `is.object`(r40);
    if c7 then L79() else L80(r40);
  L86():
    w12 = force? w11;
    checkMissing(w12);
    sum2 = ldf sum in base;
    r51 = dyn sum2(w12);
    check L87() else D26();
  D18():
    deopt 63 [w6, i];
  D19():
    deopt 67 [x18];
  D26():
    deopt 92 [r39, r51];
  L20(dx9):
    sum1 = ldf sum in base;
    r45 = dyn sum1(dx9);
    check L83() else D24();
  L67():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx3);
  L68():
    i1 = force? i;
    __1 = ldf `[` in base;
    r36 = dyn __1(w6, i1);
    goto L16(r36);
  L69():
    x19 = force? x18;
    checkMissing(x19);
    c6 = `is.object`(x19);
    if c6 then L70() else L71(x19);
  L79():
    dr6 = tryDispatchBuiltin.1("[", r40);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L81() else L80(dr6);
  L80(r42):
    w9 = ld w;
    check L82() else D23();
  L87():
    goto L21(r39, r51);
  D23():
    deopt 81 [r42, w9];
  D24():
    deopt 87 [r45];
  L17(dx6):
    st x = dx6;
    goto L18();
  L70():
    dr4 = tryDispatchBuiltin.1("[", x19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(dr4);
  L71(x21):
    i2 = ld i;
    check L73() else D20();
  L81():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx8);
  L82():
    w10 = force? w9;
    checkMissing(w10);
    r43 = `!=`(w10, 0.0);
    __3 = ldf `[` in base;
    r44 = dyn __3(r42, r43);
    goto L20(r44);
  L83():
    goto L19(r45);
  D20():
    deopt 69 [x21, i2];
  L72():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx5);
  L73():
    i3 = force? i2;
    __2 = ldf `[` in base;
    r37 = dyn __2(x21, i3);
    goto L17(r37);
  }
}