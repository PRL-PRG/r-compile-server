fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3097143473;
    st `extractAIC.survreg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3097143473(fit, scale, k, `...`) {
  (reg fit:*, reg scale:*, reg k:*, reg ddd:dots) -+> V { var fit:*, var scale:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fit1:*, reg fit2:V, reg c:L, reg fit4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg sum:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg edf:*, reg edf1:V, reg fit5:*, reg fit6:V, reg c1:L, reg r7:R, reg fit8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r9:R, reg dx3:V, reg r10:V, reg c2:L, reg r12:R, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg r14:R, reg dx7:V, reg __:cls, reg r15:V, reg r16:V, reg k1:*, reg k2:V, reg edf2:*, reg edf3:V, reg r17:V, reg r18:V, reg c3:cls, reg r19:V |
    mkenv;
    st fit = fit;
    st scale = scale;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    st edf = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L4():
    fit1 = ld fit;
    check L6() else D0();
  L5():
    r = dyn base(<lang `$`(fit, df)>);
    goto L1(r);
  D0():
    deopt 2 [fit1];
  L2(r5):
    popenv;
    return r5;
  L6():
    fit2 = force? fit1;
    checkMissing(fit2);
    c = `is.object`(fit2);
    if c then L8() else L9(fit2);
  L12():
    edf = ld edf;
    check L14() else D2();
  L13():
    r4 = dyn base1(<sym edf>, <lang `+`(`*`(`-`(2.0), `[`(`$`(fit, loglik), 2)), `*`(k, edf))>);
    goto L2(r4);
  D2():
    deopt 10 [edf];
  L7(dx1):
    sum = ldf sum in base;
    r3 = dyn sum(dx1);
    check L11() else D1();
  L8():
    dr = tryDispatchBuiltin.1("$", fit2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(fit4):
    r2 = `$`(fit4, <sym df>);
    goto L7(r2);
  L14():
    edf1 = force? edf;
    checkMissing(edf1);
    fit5 = ld fit;
    check L15() else D3();
  D1():
    deopt 6 [r3];
  D3():
    deopt 13 [-2.0, fit5];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    goto L1(r3);
  L15():
    fit6 = force? fit5;
    checkMissing(fit6);
    c1 = `is.object`(fit6);
    if c1 then L17() else L18(-2.0, fit6);
  L16(r9, dx3):
    c2 = `is.object`(dx3);
    if c2 then L20() else L21(r9, dx3);
  L17():
    dr2 = tryDispatchBuiltin.1("$", fit6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(-2.0, dr2);
  L18(r7, fit8):
    r10 = `$`(fit8, <sym loglik>);
    goto L16(r7, r10);
  L3(r14, dx7):
    r16 = `*`(r14, dx7);
    k1 = ld k;
    check L23() else D4();
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(-2.0, dx2);
  L20():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(r9, dr4);
  L21(r12, dx5):
    __ = ldf `[` in base;
    r15 = dyn __(dx5, 2);
    goto L3(r12, r15);
  D4():
    deopt 19 [r16, k1];
  L22():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(r9, dx6);
  L23():
    k2 = force? k1;
    checkMissing(k2);
    edf2 = ld edf;
    check L24() else D5();
  D5():
    deopt 20 [r16, k2, edf2];
  L24():
    edf3 = force? edf2;
    checkMissing(edf3);
    r17 = `*`(k2, edf3);
    r18 = `+`(r16, r17);
    c3 = ldf c in base;
    r19 = dyn c3(edf1, r18);
    check L25() else D6();
  D6():
    deopt 25 [r19];
  L25():
    goto L2(r19);
  }
}