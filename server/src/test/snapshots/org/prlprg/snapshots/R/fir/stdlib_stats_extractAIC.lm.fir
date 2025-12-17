fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3937076614;
    st `extractAIC.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3937076614(fit, scale, k, `...`) {
  (reg fit:*, reg scale:*, reg k:*, reg ddd:dots) -+> V { var fit:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fit1:*, reg fit2:V, reg c:L, reg fit4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg n:*, reg n1:V, reg fit5:*, reg fit6:V, reg c1:L, reg n3:V, reg fit8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg n5:V, reg dx3:V, reg r4:V, reg r5:V, reg deviance_lm:cls, reg fit9:*, reg fit10:V, reg p:p(V +), reg r7:V, reg scale1:*, reg scale2:V, reg r8:V, reg c2:L, reg RSS:*, reg RSS1:V, reg scale3:*, reg scale4:V, reg r9:V, reg n6:*, reg n7:V, reg r10:V, reg r11:V, reg n8:*, reg n9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg n12:V, reg r13:V, reg RSS2:*, reg RSS3:V, reg n13:*, reg n14:V, reg r14:V, reg r15:V, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg edf:*, reg edf1:V, reg dev:*, reg dev1:V, reg k1:*, reg k2:V, reg edf2:*, reg edf3:V, reg r19:V, reg r20:V, reg c3:cls, reg r21:V |
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
    if guard then L7() else L8();
  L2(r1):
    st n = r1;
    n = ld n;
    check L15() else D2();
  L7():
    fit1 = ld fit;
    check L9() else D0();
  L8():
    r = dyn base(<lang `$`(fit, residuals)>);
    goto L2(r);
  D0():
    deopt 2 [fit1];
  D2():
    deopt 8 [n];
  L9():
    fit2 = force? fit1;
    checkMissing(fit2);
    c = `is.object`(fit2);
    if c then L11() else L12(fit2);
  L15():
    n1 = force? n;
    checkMissing(n1);
    fit5 = ld fit;
    check L16() else D3();
  D3():
    deopt 9 [n1, fit5];
  L10(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L14() else D1();
  L11():
    dr = tryDispatchBuiltin.1("$", fit2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(fit4):
    r2 = `$`(fit4, <sym residuals>);
    goto L10(r2);
  L16():
    fit6 = force? fit5;
    checkMissing(fit6);
    c1 = `is.object`(fit6);
    if c1 then L18() else L19(n1, fit6);
  D1():
    deopt 6 [r3];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    goto L2(r3);
  L17(n5, dx3):
    r5 = `-`(n5, dx3);
    st edf = r5;
    deviance_lm = ldf `deviance.lm`;
    check L21() else D4();
  L18():
    dr2 = tryDispatchBuiltin.1("$", fit6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(n1, dr2);
  L19(n3, fit8):
    r4 = `$`(fit8, <sym df.residual>);
    goto L17(n3, r4);
  D4():
    deopt 15 [];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(n1, dx2);
  L21():
    p = prom<V +>{
      fit9 = ld fit;
      fit10 = force? fit9;
      checkMissing(fit10);
      return fit10;
    };
    r7 = dyn deviance_lm(p);
    check L22() else D5();
  D5():
    deopt 17 [r7];
  L22():
    st RSS = r7;
    scale1 = ld scale;
    check L23() else D6();
  D6():
    deopt 19 [scale1];
  L23():
    scale2 = force? scale1;
    checkMissing(scale2);
    r8 = `>`(scale2, 0.0);
    c2 = `as.logical`(r8);
    if c2 then L24() else L3();
  L3():
    n8 = ld n;
    check L29() else D10();
  L4(r11):
    st dev = r11;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L24():
    RSS = ld RSS;
    check L25() else D7();
  D7():
    deopt 23 [RSS];
  D10():
    deopt 29 [n8];
  L6(r18):
    popenv;
    return r18;
  L25():
    RSS1 = force? RSS;
    checkMissing(RSS1);
    scale3 = ld scale;
    check L26() else D8();
  L29():
    n9 = force? n8;
    checkMissing(n9);
    sym1 = ldf log;
    base1 = ldf log in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L34():
    edf = ld edf;
    check L36() else D13();
  L35():
    r17 = dyn base2(<sym edf>, <lang `+`(dev, `*`(k, edf))>);
    goto L6(r17);
  D8():
    deopt 24 [RSS1, scale3];
  D13():
    deopt 40 [edf];
  L5(n12, r13):
    r16 = `*`(n12, r13);
    goto L4(r16);
  L26():
    scale4 = force? scale3;
    checkMissing(scale4);
    r9 = `/`(RSS1, scale4);
    n6 = ld n;
    check L27() else D9();
  L30():
    RSS2 = ld RSS;
    check L32() else D11();
  L31():
    r12 = dyn base1(<lang `/`(RSS, n)>);
    goto L5(n9, r12);
  L36():
    edf1 = force? edf;
    checkMissing(edf1);
    dev = ld dev;
    check L37() else D14();
  D9():
    deopt 26 [r9, n6];
  D11():
    deopt 31 [n9, RSS2];
  D14():
    deopt 42 [dev];
  L27():
    n7 = force? n6;
    checkMissing(n7);
    r10 = `-`(r9, n7);
    goto L4(r10);
  L32():
    RSS3 = force? RSS2;
    checkMissing(RSS3);
    n13 = ld n;
    check L33() else D12();
  L37():
    dev1 = force? dev;
    checkMissing(dev1);
    k1 = ld k;
    check L38() else D15();
  D12():
    deopt 32 [n9, RSS3, n13];
  D15():
    deopt 43 [dev1, k1];
  L33():
    n14 = force? n13;
    checkMissing(n14);
    r14 = `/`(RSS3, n14);
    r15 = log(r14, 2.718281828459045);
    goto L5(n9, r15);
  L38():
    k2 = force? k1;
    checkMissing(k2);
    edf2 = ld edf;
    check L39() else D16();
  D16():
    deopt 44 [dev1, k2, edf2];
  L39():
    edf3 = force? edf2;
    checkMissing(edf3);
    r19 = `*`(k2, edf3);
    r20 = `+`(dev1, r19);
    c3 = ldf c in base;
    r21 = dyn c3(edf1, r20);
    check L40() else D17();
  D17():
    deopt 49 [r21];
  L40():
    goto L6(r21);
  }
}