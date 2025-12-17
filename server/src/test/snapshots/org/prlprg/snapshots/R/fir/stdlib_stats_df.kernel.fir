fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2649136551;
    st `df.kernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:R, reg r4:V, reg k1:*, reg k2:V, reg c:L, reg r6:R, reg k4:V, reg dr:V, reg dc:L, reg dx:V, reg r8:R, reg dx1:V, reg k5:*, reg k6:V, reg c1:L, reg r10:R, reg k9:V, reg k10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r12:R, reg k12:V, reg dx3:V, reg r13:V, reg r14:V, reg k13:*, reg k14:V, reg c2:L, reg r17:R, reg k17:V, reg r18:V, reg k18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r21:R, reg k20:V, reg r22:V, reg dx5:V, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg r26:V, reg sum:cls, reg r27:V, reg r28:V |
    mkenv;
    st k = k;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r3, r4):
    r28 = `/`(r3, r4);
    popenv;
    return r28;
  L2():
    k1 = ld k;
    check L4() else D0();
  L3():
    r2 = dyn base(<lang `^`(`[`(k, `:`(`-`(`$`(k, m)), `$`(k, m))), 2.0)>);
    goto L0(2.0, r2);
  D0():
    deopt 3 [2.0, k1];
  L4():
    k2 = force? k1;
    checkMissing(k2);
    c = `is.object`(k2);
    if c then L5() else L6(2.0, k2);
  L1(r8, dx1):
    r26 = `^`(dx1, 2.0);
    sum = ldf sum in base;
    r27 = dyn sum(r26);
    check L18() else D3();
  L5():
    dr = tryDispatchBuiltin.1("[", k2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(2.0, dr);
  L6(r6, k4):
    k5 = ld k;
    check L8() else D1();
  D1():
    deopt 5 [r6, k4, k5];
  D3():
    deopt 16 [r8, r27];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(2.0, dx);
  L8():
    k6 = force? k5;
    checkMissing(k6);
    c1 = `is.object`(k6);
    if c1 then L10() else L11(r6, k4, k6);
  L18():
    goto L0(r8, r27);
  L9(r12, k12, dx3):
    r14 = `-`(<missing>, dx3);
    k13 = ld k;
    check L13() else D2();
  L10():
    dr2 = tryDispatchBuiltin.1("$", k6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(r6, k4, dr2);
  L11(r10, k9, k10):
    r13 = `$`(k10, <sym m>);
    goto L9(r10, k9, r13);
  D2():
    deopt 8 [r12, k12, r14, k13];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(r6, k4, dx2);
  L13():
    k14 = force? k13;
    checkMissing(k14);
    c2 = `is.object`(k14);
    if c2 then L15() else L16(r12, k12, r14, k14);
  L14(r21, k20, r22, dx5):
    r24 = `:`(r22, dx5);
    __ = ldf `[` in base;
    r25 = dyn __(k20, r24);
    goto L1(r21, r25);
  L15():
    dr4 = tryDispatchBuiltin.1("$", k14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L17() else L16(r12, k12, r14, dr4);
  L16(r17, k17, r18, k18):
    r23 = `$`(k18, <sym m>);
    goto L14(r17, k17, r18, r23);
  L17():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(r12, k12, r14, dx4);
  }
}