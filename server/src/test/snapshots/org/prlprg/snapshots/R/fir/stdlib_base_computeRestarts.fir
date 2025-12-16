fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2129812385`;
    st computeRestarts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2129812385`(cond) {
  (reg cond:*) -+> V { var cond:*, reg cond_isMissing:L, reg cond_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg i:*, reg i1:V, reg _getRestart:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg r5:*, reg r6:V, reg c:V, reg c1:L, reg val:*, reg val1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg cond1:*, reg cond2:V, reg c2:V, reg c3:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c8:L, reg r12:V, reg r13:*, reg r14:V, reg c9:L, reg c11:L, reg r16:V, reg dr:V, reg dc:L, reg dx:V, reg c13:L, reg dx1:V, reg r17:V, reg c14:V, reg c15:L, reg c16:V, reg c18:L, reg c19:V, reg r18:*, reg r19:V, reg c21:L, reg c23:L, reg r21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c25:L, reg dx3:V, reg r22:V, reg dx4:cls, reg cond3:*, reg cond4:V, reg p:p(V +), reg r24:V, reg c26:L, reg c27:V, reg c29:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg val2:*, reg val3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg r29:*, reg r30:V, reg list:cls, reg r31:V, reg c30:cls, reg r32:V, reg i2:*, reg i3:V, reg r33:V |
    mkenv;
    cond_isMissing = missing.0(cond);
    if cond_isMissing then L0(NULL) else L0(cond);
  L0(cond_orDefault):
    st cond = cond_orDefault;
    st val = NULL;
    st i = 1;
    goto L12();
  L12():
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    st r = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    i = ld i;
    check L15() else D0();
  L14():
    r = dyn base(<lang .getRestart(i)>);
    goto L1(r);
  D0():
    deopt 8 [i];
  L2(r4):
    c1 = `as.logical`(r4);
    if c1 then L20() else L3();
  L15():
    i1 = force? i;
    checkMissing(i1);
    _getRestart = ldf `.getRestart` in base;
    r2 = dyn _getRestart(i1);
    check L16() else D1();
  L17():
    r5 = ld r;
    check L19() else D2();
  L18():
    r3 = dyn base1(<sym r>);
    goto L2(r3);
  D1():
    deopt 11 [r2];
  D2():
    deopt 14 [r5];
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L16():
    goto L1(r2);
  L19():
    r6 = force? r5;
    checkMissing(r6);
    c = `==`(r6, NULL);
    goto L2(c);
  L20():
    val = ld val;
    check L21() else D3();
  D3():
    deopt 17 [val];
  L5(r10):
    c3 = `as.logical`(r10);
    if c3 then L6(c3) else L27();
  L21():
    val1 = force? val;
    checkMissing(val1);
    popenv;
    return val1;
  L24():
    cond1 = ld cond;
    check L26() else D4();
  L25():
    r9 = dyn base2(<sym cond>);
    goto L5(r9);
  D4():
    deopt 21 [cond1];
  L6(c4):
    c18 = `as.logical`(c4);
    if c18 then L8(c18) else L36();
  L26():
    cond2 = force? cond1;
    checkMissing(cond2);
    c2 = `==`(cond2, NULL);
    goto L5(c2);
  L27():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L7(c8, r12):
    c15 = `as.logical`(r12);
    c16 = `||`(c8, c15);
    goto L6(c16);
  L8(c19):
    c29 = `as.logical`(c19);
    if c29 then L44() else L9();
  L28():
    r13 = ld r;
    check L30() else D5();
  L29():
    r11 = dyn base3(<lang `$`(r, test)>);
    goto L7(c3, r11);
  L36():
    r18 = ld r;
    check L37() else D6();
  D5():
    deopt 25 [c3, r13];
  D6():
    deopt 30 [c18, r18];
  L4():
    i2 = ld i;
    check L54() else D12();
  L9():
    goto L4();
  L30():
    r14 = force? r13;
    checkMissing(r14);
    c9 = `is.object`(r14);
    if c9 then L32() else L33(c3, r14);
  L37():
    r19 = force? r18;
    checkMissing(r19);
    c21 = `is.object`(r19);
    if c21 then L39() else L40(c18, r19);
  L44():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  D12():
    deopt 52 [i2];
  L10(r26):
    st val = r26;
    goto L4();
  L31(c13, dx1):
    c14 = `==`(dx1, NULL);
    goto L7(c13, c14);
  L32():
    dr = tryDispatchBuiltin.1("$", r14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(c3, dr);
  L33(c11, r16):
    r17 = `$`(r16, <sym test>);
    goto L31(c11, r17);
  L38(c25, dx3):
    checkFun.0(dx3);
    dx4 = dx3 as cls;
    p = prom<V +>{
      cond3 = ld cond;
      cond4 = force? cond3;
      checkMissing(cond4);
      return cond4;
    };
    r24 = dyn dx4(p);
    check L42() else D7();
  L39():
    dr2 = tryDispatchBuiltin.1("$", r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(c18, dr2);
  L40(c23, r21):
    r22 = `$`(r21, <sym test>);
    goto L38(c23, r22);
  L45():
    val2 = ld val;
    check L47() else D8();
  L46():
    r25 = dyn base4(<sym val>, <lang list(r)>);
    goto L10(r25);
  L54():
    i3 = force? i2;
    checkMissing(i3);
    r33 = `+`(i3, 1);
    st i = r33;
    goto L12();
  D7():
    deopt 35 [c25, r24];
  D8():
    deopt 39 [val2];
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L31(c3, dx);
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L38(c18, dx2);
  L42():
    c26 = `as.logical`(r24);
    c27 = `||`(c25, c26);
    goto L8(c27);
  L47():
    val3 = force? val2;
    checkMissing(val3);
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L11(r28):
    c30 = ldf c in base;
    r32 = dyn c30(val3, r28);
    check L52() else D11();
  L48():
    r29 = ld r;
    check L50() else D9();
  L49():
    r27 = dyn base5(<sym r>);
    goto L11(r27);
  D9():
    deopt 43 [r29];
  D11():
    deopt 48 [r32];
  L50():
    r30 = force? r29;
    checkMissing(r30);
    list = ldf list in base;
    r31 = dyn list(r30);
    check L51() else D10();
  L52():
    goto L10(r32);
  D10():
    deopt 46 [r31];
  L51():
    goto L11(r31);
  }
}