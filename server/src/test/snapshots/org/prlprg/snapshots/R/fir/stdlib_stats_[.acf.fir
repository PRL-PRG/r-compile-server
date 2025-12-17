fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3886051477;
    st `[.acf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3886051477(x, i, j) {
  (reg x:*, reg i:*, reg j:*) -+> V { var x:*, var i:*, var j:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ncol:cls, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p:p(V +), reg r7:V, reg r8:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg missing1:cls, reg r12:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg nrow:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p1:p(V +), reg r17:V, reg r18:I, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg i1:*, reg i2:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg c5:L, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __:cls, reg r22:V, reg match:cls, reg r23:V, reg x13:*, reg x14:V, reg c6:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r24:V, reg c7:L, reg dx13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg ii:*, reg ii1:V, reg j1:*, reg j2:V, reg j3:*, reg j4:V, reg __1:cls, reg r25:V, reg l:*, reg c8:L, reg dx17:V, reg l2:*, reg dr12:V, reg dc6:L, reg dx19:V, reg dx21:V, reg r26:V, reg x17:*, reg x18:V, reg c9:L, reg x20:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg r27:V, reg c10:L, reg dx25:V, reg dr16:V, reg dc8:L, reg dx26:V, reg dx27:V, reg ii2:*, reg ii3:V, reg j5:*, reg j6:V, reg j7:*, reg j8:V, reg __2:cls, reg r28:V, reg l3:*, reg c11:L, reg dx29:V, reg l5:*, reg dr18:V, reg dc9:L, reg dx31:V, reg dx33:V, reg r29:V, reg x21:*, reg x22:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    c = `as.logical`(r1);
    if c then L13() else L1();
  L11():
    missing = ldf missing in base;
    r2 = dyn missing(<sym j>);
    goto L0(r2);
  L12():
    r = dyn base(<sym j>);
    goto L0(r);
  L1():
    goto L3();
  L3():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L13():
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(r4):
    st j = r4;
    goto L3();
  L4(r11):
    c2 = `as.logical`(r11);
    if c2 then L21() else L5();
  L14():
    ncol = ldf ncol;
    check L16() else D0();
  L15():
    r3 = dyn base1(<lang ncol(`$`(x, lag))>);
    goto L2(r3);
  L19():
    missing1 = ldf missing in base;
    r12 = dyn missing1(<sym i>);
    goto L4(r12);
  L20():
    r10 = dyn base2(<sym i>);
    goto L4(r10);
  D0():
    deopt 5 [];
  L5():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  L7(r19):
    st ii = r19;
    x13 = ld x;
    check L39() else D7();
  L16():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c1 = `is.object`(x2);
      if c1 then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r5 = `$`(x4, <sym lag>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn ncol(p);
    check L17() else D1();
  L21():
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  D1():
    deopt 7 [r7];
  D7():
    deopt 38 [x13];
  L6(r14):
    goto L7(r14);
  L17():
    r8 = seq_len(r7);
    goto L2(r8);
  L22():
    nrow = ldf nrow;
    check L24() else D2();
  L23():
    r13 = dyn base3(<lang nrow(`$`(x, lag))>);
    goto L6(r13);
  L27():
    i1 = ld i;
    check L29() else D4();
  L28():
    r20 = dyn base4[, , nomatch](<sym i>, <lang `[`(`$`(x, lag), , 1.0, 1.0)>, NA_INT);
    goto L7(r20);
  L39():
    x14 = force? x13;
    checkMissing(x14);
    c6 = `is.object`(x14);
    if c6 then L41() else L42(x14);
  D2():
    deopt 17 [];
  D4():
    deopt 23 [i1];
  L24():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r15 = `$`(x8, <sym lag>);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn nrow(p1);
    check L25() else D3();
  L29():
    i2 = force? i1;
    checkMissing(i2);
    x9 = ld x;
    check L30() else D5();
  L40(dx11):
    c7 = `is.object`(dx11);
    if c7 then L44() else L45(dx11);
  L41():
    dr8 = tryDispatchBuiltin.1("$", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L43() else L42(dr8);
  L42(x16):
    r24 = `$`(x16, <sym acf>);
    goto L40(r24);
  D3():
    deopt 19 [r17];
  D5():
    deopt 25 [x9];
  L9(dx15):
    l = ld x;
    c8 = `is.object`(l);
    if c8 then L51() else L52(dx15, l);
  L25():
    r18 = seq_len(r17);
    goto L6(r18);
  L30():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L32() else L33(x10);
  L43():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L40(dx10);
  L44():
    dr10 = tryDispatchBuiltin.1("[", dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L46() else L45(dr10);
  L45(dx13):
    ii = ld ii;
    check L47() else D8();
  D8():
    deopt 41 [dx13, ii];
  L31(dx5):
    c5 = `is.object`(dx5);
    if c5 then L35() else L36();
  L32():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(x12):
    r21 = `$`(x12, <sym lag>);
    goto L31(r21);
  L46():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx14);
  L47():
    ii1 = force? ii;
    j1 = ld j;
    check L48() else D9();
  L50(dx21):
    st x = dx21;
    x17 = ld x;
    check L54() else D11();
  L51():
    dr12 = tryDispatchBuiltin.0("$<-", l, dx15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L53() else L52(dx15, dr12);
  L52(dx17, l2):
    r26 = `$<-`(l2, <sym acf>, dx15);
    goto L50(r26);
  D9():
    deopt 43 [dx13, j1];
  D11():
    deopt 54 [x17];
  L8(dx9):
    match = ldf match in base;
    r23 = dyn match(i2, dx9, NA_INT, NULL);
    check L38() else D6();
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L35():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L37() else L36();
  L36():
    __ = ldf `[` in base;
    r22 = dyn __(dx5, <missing>, 1.0, 1.0);
    goto L8(r22);
  L48():
    j2 = force? j1;
    j3 = ld j;
    check L49() else D10();
  L53():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L50(dx19);
  L54():
    x18 = force? x17;
    checkMissing(x18);
    c9 = `is.object`(x18);
    if c9 then L56() else L57(x18);
  D6():
    deopt 36 [r23];
  D10():
    deopt 45 [dx13, j3];
  L37():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx8);
  L38():
    goto L7(r23);
  L49():
    j4 = force? j3;
    __1 = ldf `[` in base;
    r25 = dyn __1(dx11, ii1, j2, j4, FALSE);
    goto L9(r25);
  L55(dx23):
    c10 = `is.object`(dx23);
    if c10 then L59() else L60(dx23);
  L56():
    dr14 = tryDispatchBuiltin.1("$", x18);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L58() else L57(dr14);
  L57(x20):
    r27 = `$`(x20, <sym lag>);
    goto L55(r27);
  L10(dx27):
    l3 = ld x;
    c11 = `is.object`(l3);
    if c11 then L66() else L67(dx27, l3);
  L58():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L55(dx22);
  L59():
    dr16 = tryDispatchBuiltin.1("[", dx23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L61() else L60(dr16);
  L60(dx25):
    ii2 = ld ii;
    check L62() else D12();
  D12():
    deopt 57 [dx25, ii2];
  L61():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L10(dx26);
  L62():
    ii3 = force? ii2;
    j5 = ld j;
    check L63() else D13();
  L65(dx33):
    st x = dx33;
    x21 = ld x;
    check L69() else D15();
  L66():
    dr18 = tryDispatchBuiltin.0("$<-", l3, dx27);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L68() else L67(dx27, dr18);
  L67(dx29, l5):
    r29 = `$<-`(l5, <sym lag>, dx27);
    goto L65(r29);
  D13():
    deopt 59 [dx25, j5];
  D15():
    deopt 70 [x21];
  L63():
    j6 = force? j5;
    j7 = ld j;
    check L64() else D14();
  L68():
    dx31 = getTryDispatchBuiltinValue(dr18);
    goto L65(dx31);
  L69():
    x22 = force? x21;
    checkMissing(x22);
    popenv;
    return x22;
  D14():
    deopt 61 [dx25, j7];
  L64():
    j8 = force? j7;
    __2 = ldf `[` in base;
    r28 = dyn __2(dx23, ii3, j6, j8, FALSE);
    goto L10(r28);
  }
}