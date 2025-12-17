fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3097143473;
    st `extractAIC.coxph` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3097143473(fit, scale, k, `...`) {
  (reg fit:*, reg scale:*, reg k:*, reg ddd:dots) -+> V { var fit:*, var scale:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg fit1:*, reg fit2:V, reg c:L, reg fit4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg is_na:cls, reg r5:V, reg r6:V, reg sum:cls, reg r7:V, reg fit5:*, reg fit6:V, reg c1:L, reg fit8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg dx10:V, reg r10:V, reg fit9:*, reg fit10:V, reg c3:L, reg dx12:V, reg fit12:V, reg dr6:V, reg dc3:L, reg dx14:V, reg dx15:V, reg dx16:V, reg r11:V, reg length:cls, reg r12:V, reg __:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg edf:*, reg edf1:V, reg loglik:*, reg loglik1:V, reg r16:V, reg k1:*, reg k2:V, reg edf2:*, reg edf3:V, reg r17:V, reg r18:V, reg c4:cls, reg r19:V |
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
    if guard then L6() else L7();
  L1(r1):
    st edf = r1;
    fit5 = ld fit;
    check L17() else D3();
  L6():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r = dyn base(<lang `!`(is.na(`$`(fit, coefficients)))>);
    goto L1(r);
  D3():
    deopt 13 [fit5];
  L2(r3):
    r6 = `!`(r3);
    sum = ldf sum in base;
    r7 = dyn sum(r6);
    check L16() else D2();
  L8():
    fit1 = ld fit;
    check L10() else D0();
  L9():
    r2 = dyn base1(<lang `$`(fit, coefficients)>);
    goto L2(r2);
  L17():
    fit6 = force? fit5;
    checkMissing(fit6);
    c1 = `is.object`(fit6);
    if c1 then L19() else L20(fit6);
  D0():
    deopt 4 [fit1];
  D2():
    deopt 11 [r7];
  L10():
    fit2 = force? fit1;
    checkMissing(fit2);
    c = `is.object`(fit2);
    if c then L12() else L13(fit2);
  L16():
    goto L1(r7);
  L18(dx3):
    c2 = `is.object`(dx3);
    if c2 then L22() else L23(dx3);
  L19():
    dr2 = tryDispatchBuiltin.1("$", fit6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(fit8):
    r8 = `$`(fit8, <sym loglik>);
    goto L18(r8);
  L3(dx7):
    st loglik = dx7;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L11(dx1):
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(dx1);
    check L15() else D1();
  L12():
    dr = tryDispatchBuiltin.1("$", fit2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(fit4):
    r4 = `$`(fit4, <sym coefficients>);
    goto L11(r4);
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L22():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dr4);
  L23(dx5):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D1():
    deopt 8 [r5];
  L4(dx10, r10):
    __ = ldf `[` in base;
    r13 = dyn __(dx10, r10);
    goto L3(r13);
  L5(r15):
    popenv;
    return r15;
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L15():
    goto L2(r5);
  L24():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx6);
  L25():
    fit9 = ld fit;
    check L27() else D4();
  L26():
    r9 = dyn base2(<lang `$`(fit, loglik)>);
    goto L4(dx5, r9);
  L33():
    edf = ld edf;
    check L35() else D6();
  L34():
    r14 = dyn base3(<sym edf>, <lang `+`(`*`(`-`(2.0), loglik), `*`(k, edf))>);
    goto L5(r14);
  D4():
    deopt 18 [dx5, fit9];
  D6():
    deopt 27 [edf];
  L27():
    fit10 = force? fit9;
    checkMissing(fit10);
    c3 = `is.object`(fit10);
    if c3 then L29() else L30(dx5, fit10);
  L35():
    edf1 = force? edf;
    checkMissing(edf1);
    loglik = ld loglik;
    check L36() else D7();
  D7():
    deopt 30 [-2.0, loglik];
  L28(dx15, dx16):
    length = ldf length in base;
    r12 = dyn length(dx16);
    check L32() else D5();
  L29():
    dr6 = tryDispatchBuiltin.1("$", fit10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(dx5, dr6);
  L30(dx12, fit12):
    r11 = `$`(fit12, <sym loglik>);
    goto L28(dx12, r11);
  L36():
    loglik1 = force? loglik;
    checkMissing(loglik1);
    r16 = `*`(-2.0, loglik1);
    k1 = ld k;
    check L37() else D8();
  D5():
    deopt 22 [dx15, r12];
  D8():
    deopt 32 [r16, k1];
  L31():
    dx14 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx5, dx14);
  L32():
    goto L4(dx15, r12);
  L37():
    k2 = force? k1;
    checkMissing(k2);
    edf2 = ld edf;
    check L38() else D9();
  D9():
    deopt 33 [r16, k2, edf2];
  L38():
    edf3 = force? edf2;
    checkMissing(edf3);
    r17 = `*`(k2, edf3);
    r18 = `+`(r16, r17);
    c4 = ldf c in base;
    r19 = dyn c4(edf1, r18);
    check L39() else D10();
  D10():
    deopt 38 [r19];
  L39():
    goto L5(r19);
  }
}