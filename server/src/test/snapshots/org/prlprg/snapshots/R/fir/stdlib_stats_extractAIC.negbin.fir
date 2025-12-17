fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3097143473;
    st `extractAIC.negbin` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3097143473(fit, scale, k, `...`) {
  (reg fit:*, reg scale:*, reg k:*, reg ddd:dots) -+> V { var fit:*, var scale:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fit1:*, reg fit2:V, reg c:L, reg fit4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg n:*, reg n1:V, reg fit5:*, reg fit6:V, reg c1:L, reg n3:V, reg fit8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg n5:V, reg dx3:V, reg r4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg edf:*, reg edf1:V, reg fit9:*, reg fit10:V, reg c2:L, reg fit12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg r9:V, reg k1:*, reg k2:V, reg edf2:*, reg edf3:V, reg r10:V, reg r11:V, reg c3:cls, reg r12:V |
    mkenv;
    st fit = fit;
    st scale = scale;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    st n = r1;
    n = ld n;
    check L11() else D2();
  L3():
    fit1 = ld fit;
    check L5() else D0();
  L4():
    r = dyn base(<lang `$`(fit, residuals)>);
    goto L1(r);
  D0():
    deopt 2 [fit1];
  D2():
    deopt 8 [n];
  L5():
    fit2 = force? fit1;
    checkMissing(fit2);
    c = `is.object`(fit2);
    if c then L7() else L8(fit2);
  L11():
    n1 = force? n;
    checkMissing(n1);
    fit5 = ld fit;
    check L12() else D3();
  D3():
    deopt 9 [n1, fit5];
  L6(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L10() else D1();
  L7():
    dr = tryDispatchBuiltin.1("$", fit2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(fit4):
    r2 = `$`(fit4, <sym residuals>);
    goto L6(r2);
  L12():
    fit6 = force? fit5;
    checkMissing(fit6);
    c1 = `is.object`(fit6);
    if c1 then L14() else L15(n1, fit6);
  D1():
    deopt 6 [r3];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    goto L1(r3);
  L13(n5, dx3):
    r5 = `-`(n5, dx3);
    st edf = r5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L14():
    dr2 = tryDispatchBuiltin.1("$", fit6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(n1, dr2);
  L15(n3, fit8):
    r4 = `$`(fit8, <sym df.residual>);
    goto L13(n3, r4);
  L2(r7):
    popenv;
    return r7;
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(n1, dx2);
  L17():
    edf = ld edf;
    check L19() else D4();
  L18():
    r6 = dyn base1(<sym edf>, <lang `+`(`-`(`$`(fit, twologlik)), `*`(k, edf))>);
    goto L2(r6);
  D4():
    deopt 16 [edf];
  L19():
    edf1 = force? edf;
    checkMissing(edf1);
    fit9 = ld fit;
    check L20() else D5();
  D5():
    deopt 18 [fit9];
  L20():
    fit10 = force? fit9;
    checkMissing(fit10);
    c2 = `is.object`(fit10);
    if c2 then L22() else L23(fit10);
  L21(dx5):
    r9 = `-`(<missing>, dx5);
    k1 = ld k;
    check L25() else D6();
  L22():
    dr4 = tryDispatchBuiltin.1("$", fit10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dr4);
  L23(fit12):
    r8 = `$`(fit12, <sym twologlik>);
    goto L21(r8);
  D6():
    deopt 21 [r9, k1];
  L24():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(dx4);
  L25():
    k2 = force? k1;
    checkMissing(k2);
    edf2 = ld edf;
    check L26() else D7();
  D7():
    deopt 22 [r9, k2, edf2];
  L26():
    edf3 = force? edf2;
    checkMissing(edf3);
    r10 = `*`(k2, edf3);
    r11 = `+`(r9, r10);
    c3 = ldf c in base;
    r12 = dyn c3(edf1, r11);
    check L27() else D8();
  D8():
    deopt 27 [r12];
  L27():
    goto L2(r12);
  }
}