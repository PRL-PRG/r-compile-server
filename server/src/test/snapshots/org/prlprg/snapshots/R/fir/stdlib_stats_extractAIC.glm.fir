fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3937076614;
    st `extractAIC.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3937076614(fit, scale, k, `...`) {
  (reg fit:*, reg scale:*, reg k:*, reg ddd:dots) -+> V { var fit:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fit1:*, reg fit2:V, reg c:L, reg fit4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg n:*, reg n1:V, reg fit5:*, reg fit6:V, reg c1:L, reg n3:V, reg fit8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg n5:V, reg dx3:V, reg r4:V, reg r5:V, reg fit9:*, reg fit10:V, reg c2:L, reg fit12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg edf:*, reg edf1:V, reg aic:*, reg aic1:V, reg k1:*, reg k2:V, reg r9:V, reg edf2:*, reg edf3:V, reg r10:V, reg r11:V, reg c3:cls, reg r12:V |
    mkenv;
    st fit = fit;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L1(2.0) else L1(k);
  L1(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r1):
    st n = r1;
    n = ld n;
    check L12() else D2();
  L4():
    fit1 = ld fit;
    check L6() else D0();
  L5():
    r = dyn base(<lang `$`(fit, residuals)>);
    goto L2(r);
  D0():
    deopt 2 [fit1];
  D2():
    deopt 8 [n];
  L6():
    fit2 = force? fit1;
    checkMissing(fit2);
    c = `is.object`(fit2);
    if c then L8() else L9(fit2);
  L12():
    n1 = force? n;
    checkMissing(n1);
    fit5 = ld fit;
    check L13() else D3();
  D3():
    deopt 9 [n1, fit5];
  L7(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L11() else D1();
  L8():
    dr = tryDispatchBuiltin.1("$", fit2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(fit4):
    r2 = `$`(fit4, <sym residuals>);
    goto L7(r2);
  L13():
    fit6 = force? fit5;
    checkMissing(fit6);
    c1 = `is.object`(fit6);
    if c1 then L15() else L16(n1, fit6);
  D1():
    deopt 6 [r3];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    goto L2(r3);
  L14(n5, dx3):
    r5 = `-`(n5, dx3);
    st edf = r5;
    fit9 = ld fit;
    check L18() else D4();
  L15():
    dr2 = tryDispatchBuiltin.1("$", fit6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(n1, dr2);
  L16(n3, fit8):
    r4 = `$`(fit8, <sym df.residual>);
    goto L14(n3, r4);
  D4():
    deopt 14 [fit9];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(n1, dx2);
  L18():
    fit10 = force? fit9;
    checkMissing(fit10);
    c2 = `is.object`(fit10);
    if c2 then L20() else L21(fit10);
  L19(dx5):
    st aic = dx5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L20():
    dr4 = tryDispatchBuiltin.1("$", fit10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(fit12):
    r6 = `$`(fit12, <sym aic>);
    goto L19(r6);
  L3(r8):
    popenv;
    return r8;
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L23():
    edf = ld edf;
    check L25() else D5();
  L24():
    r7 = dyn base1(<sym edf>, <lang `+`(aic, `*`(`(`(`-`(k, 2.0)), edf))>);
    goto L3(r7);
  D5():
    deopt 20 [edf];
  L25():
    edf1 = force? edf;
    checkMissing(edf1);
    aic = ld aic;
    check L26() else D6();
  D6():
    deopt 22 [aic];
  L26():
    aic1 = force? aic;
    checkMissing(aic1);
    k1 = ld k;
    check L27() else D7();
  D7():
    deopt 23 [aic1, k1];
  L27():
    k2 = force? k1;
    checkMissing(k2);
    r9 = `-`(k2, 2.0);
    edf2 = ld edf;
    check L28() else D8();
  D8():
    deopt 26 [aic1, r9, edf2];
  L28():
    edf3 = force? edf2;
    checkMissing(edf3);
    r10 = `*`(r9, edf3);
    r11 = `+`(aic1, r10);
    c3 = ldf c in base;
    r12 = dyn c3(edf1, r11);
    check L29() else D9();
  D9():
    deopt 31 [r12];
  L29():
    goto L3(r12);
  }
}