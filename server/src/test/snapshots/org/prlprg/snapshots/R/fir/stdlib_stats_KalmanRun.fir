fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3445983298;
    st KalmanRun = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3445983298(y, mod, nit, update) {
  (reg y:*, reg mod:*, reg nit:*, reg update:*) -+> V { var y:*, var mod:*, var nit:*, reg nit_isMissing:L, reg nit_orDefault:*, var update:*, reg update_isMissing:L, reg update_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_KalmanLike:*, reg C_KalmanLike1:V, reg y1:*, reg y2:V, reg mod1:*, reg mod2:V, reg nit1:*, reg nit2:V, reg update1:*, reg update2:V, reg vargs:dots, reg r2:V, reg z:*, reg z1:V, reg c:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:R, reg r10:V, reg x:*, reg x1:V, reg c1:L, reg r12:R, reg x3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r14:R, reg dx3:V, reg __:cls, reg r15:V, reg r16:V, reg x4:*, reg x5:V, reg c2:L, reg r19:R, reg r20:V, reg x7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r23:R, reg r24:V, reg dx5:V, reg __1:cls, reg r25:V, reg r26:V, reg r27:V, reg x8:*, reg x9:V, reg c3:L, reg x11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r28:V, reg c4:cls, reg r29:V, reg l:*, reg c5:L, reg r31:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r34:V, reg z4:*, reg z5:V |
    mkenv;
    st y = y;
    st mod = mod;
    nit_isMissing = missing.0(nit);
    if nit_isMissing then L0(0) else L0(nit);
  L0(nit_orDefault):
    st nit = nit_orDefault;
    update_isMissing = missing.0(update);
    if update_isMissing then L1(FALSE) else L1(update);
  L1(update_orDefault):
    st update = update_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r1):
    st z = r1;
    z = ld z;
    check L16() else D5();
  L9():
    C_KalmanLike = ld C_KalmanLike;
    check L11() else D0();
  L10():
    r = dyn base(<sym C_KalmanLike>, <sym y>, <sym mod>, <sym nit>, TRUE, <sym update>);
    goto L2(r);
  D0():
    deopt 1 [C_KalmanLike];
  D5():
    deopt 10 [z];
  L11():
    C_KalmanLike1 = force? C_KalmanLike;
    checkMissing(C_KalmanLike1);
    y1 = ld y;
    check L12() else D1();
  L16():
    z1 = force? z;
    checkMissing(z1);
    c = `is.object`(z1);
    if c then L18() else L19(z1);
  D1():
    deopt 2 [C_KalmanLike1, y1];
  L12():
    y2 = force? y1;
    checkMissing(y2);
    mod1 = ld mod;
    check L13() else D2();
  L17(dx1):
    st x = dx1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L18():
    dr = tryDispatchBuiltin.1("$", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(z3):
    r3 = `$`(z3, <sym values>);
    goto L17(r3);
  D2():
    deopt 3 [C_KalmanLike1, y2, mod1];
  L3(r5):
    l = ld z;
    c5 = `is.object`(l);
    if c5 then L38() else L39(r5, l);
  L13():
    mod2 = force? mod1;
    checkMissing(mod2);
    nit1 = ld nit;
    check L14() else D3();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L21():
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L22():
    r4 = dyn base1[Lik, s2](<lang `*`(0.5, `(`(`+`(log(`[`(x, 1)), `[`(x, 2))))>, <lang `[`(x, 1)>);
    goto L3(r4);
  D3():
    deopt 4 [C_KalmanLike1, y2, mod2, nit1];
  L4(r9, r10):
    x4 = ld x;
    check L29() else D7();
  L8(dx9):
    st z = dx9;
    z4 = ld z;
    check L41() else D10();
  L14():
    nit2 = force? nit1;
    checkMissing(nit2);
    update1 = ld update;
    check L15() else D4();
  L23():
    x = ld x;
    check L25() else D6();
  L24():
    r8 = dyn base2(<lang `[`(x, 1)>);
    goto L4(0.5, r8);
  L38():
    dr8 = tryDispatchBuiltin.0("[[<-", l, r5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L40() else L39(r5, dr8);
  L39(r31, l2):
    ____ = ldf `[[<-` in base;
    r34 = dyn ____(l2, r5, 1);
    goto L8(r34);
  D4():
    deopt 6 [C_KalmanLike1, y2, mod2, nit2, TRUE, update1];
  D6():
    deopt 18 [0.5, x];
  D7():
    deopt 23 [r9, r10, x4];
  D10():
    deopt 44 [z4];
  L15():
    update2 = force? update1;
    checkMissing(update2);
    vargs = dots[y2, mod2, nit2, TRUE, update2];
    r2 = `.Call`(C_KalmanLike1, vargs, <missing>);
    goto L2(r2);
  L25():
    x1 = force? x;
    checkMissing(x1);
    c1 = `is.object`(x1);
    if c1 then L26() else L27(0.5, x1);
  L29():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.object`(x5);
    if c2 then L30() else L31(r9, r10, x5);
  L40():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx8);
  L41():
    z5 = force? z4;
    checkMissing(z5);
    popenv;
    return z5;
  L5(r14, dx3):
    r16 = log(dx3, 2.718281828459045);
    goto L4(r14, r16);
  L6(r23, r24, dx5):
    r26 = `+`(r24, dx5);
    r27 = `*`(r23, r26);
    x8 = ld x;
    check L33() else D8();
  L26():
    dr2 = tryDispatchBuiltin.1("[", x1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(0.5, dr2);
  L27(r12, x3):
    __ = ldf `[` in base;
    r15 = dyn __(x3, 1);
    goto L5(r12, r15);
  L30():
    dr4 = tryDispatchBuiltin.1("[", x5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(r9, r10, dr4);
  L31(r19, r20, x7):
    __1 = ldf `[` in base;
    r25 = dyn __1(x7, 2);
    goto L6(r19, r20, r25);
  D8():
    deopt 31 [x8];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(0.5, dx2);
  L32():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(r9, r10, dx4);
  L33():
    x9 = force? x8;
    checkMissing(x9);
    c3 = `is.object`(x9);
    if c3 then L34() else L35(x9);
  L7(dx7):
    c4 = ldf c in base;
    r29 = dyn c4(r27, dx7);
    check L37() else D9();
  L34():
    dr6 = tryDispatchBuiltin.1("[", x9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L36() else L35(dr6);
  L35(x11):
    __2 = ldf `[` in base;
    r28 = dyn __2(x11, 1);
    goto L7(r28);
  D9():
    deopt 38 [r29];
  L36():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx6);
  L37():
    goto L3(r29);
  }
}