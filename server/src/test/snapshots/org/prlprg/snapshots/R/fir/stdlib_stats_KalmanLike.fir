fun main() {
  () -+> V { reg r:cls, reg arima:cls, reg presidents:*, reg presidents1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg predict:cls, reg fit3:*, reg fit4:V, reg p2:p(V +), reg r8:V, reg KalmanForecast:cls, reg fit5:*, reg fit6:V, reg c1:L, reg fit8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p3:p(V +), reg r11:V, reg pr:*, reg pr1:V, reg c2:L, reg pr3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg fit9:*, reg fit10:V, reg c3:L, reg dx5:V, reg fit12:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg r13:V, reg c4:L, reg dx12:V, reg dx13:V, reg dr6:V, reg dc3:L, reg dx15:V, reg dx16:V, reg dx17:V, reg __:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg pr4:*, reg pr5:V, reg c5:L, reg pr7:V, reg dr8:V, reg dc4:L, reg dx18:V, reg dx19:V, reg r18:V, reg fit13:*, reg fit14:V, reg c6:L, reg dx21:V, reg fit16:V, reg dr10:V, reg dc5:L, reg dx23:V, reg dx24:V, reg dx25:V, reg r19:V, reg r20:V, reg r21:V, reg fit17:*, reg fit18:V, reg c7:L, reg fit20:V, reg dr12:V, reg dc6:L, reg dx26:V, reg dx27:V, reg r22:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg KalmanForecast1:cls, reg mod:*, reg mod1:V, reg p4:p(V +), reg r24:V, reg print:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg pr8:*, reg pr9:V, reg c9:L, reg pr11:V, reg dr14:V, reg dc7:L, reg dx28:V, reg dx29:V, reg r27:V, reg fit21:*, reg fit22:V, reg c10:L, reg dx31:V, reg fit24:V, reg dr16:V, reg dc8:L, reg dx33:V, reg dx34:V, reg dx35:V, reg r28:V, reg c11:L, reg dx38:V, reg dx39:V, reg dr18:V, reg dc9:L, reg dx41:V, reg dx42:V, reg dx43:V, reg __1:cls, reg r29:V, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg pr12:*, reg pr13:V, reg c12:L, reg pr15:V, reg dr20:V, reg dc10:L, reg dx44:V, reg dx45:V, reg r33:V, reg fit25:*, reg fit26:V, reg c13:L, reg dx47:V, reg fit28:V, reg dr22:V, reg dc11:L, reg dx49:V, reg dx50:V, reg dx51:V, reg r34:V, reg r35:V, reg r36:V, reg list:cls, reg r37:V, reg p5:p(V +), reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg i7:I, reg r41:V, reg pr16:*, reg pr17:V, reg attr:cls, reg r42:V |
    mkenv;
    r = clos inner3445983298;
    st KalmanLike = r;
    arima = ldf arima;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    p = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(3.0, 0.0, 0.0);
      goto L0(r4);
    L2():
      r2 = dyn base(3.0, 0.0, 0.0);
      goto L0(r2);
    };
    r6 = dyn arima(p, p1);
    check L6() else D1();
  D1():
    deopt 7 [r6];
  L6():
    st fit3 = r6;
    predict = ldf predict;
    check L7() else D2();
  D2():
    deopt 10 [];
  L7():
    p2 = prom<V +>{
      fit3 = ld fit3;
      fit4 = force? fit3;
      checkMissing(fit4);
      return fit4;
    };
    r8 = dyn predict(p2, 12.0);
    check L8() else D3();
  D3():
    deopt 13 [r8];
  L8():
    KalmanForecast = ldf KalmanForecast;
    check L9() else D4();
  D4():
    deopt 15 [];
  L9():
    p3 = prom<V +>{
      fit5 = ld fit3;
      fit6 = force? fit5;
      checkMissing(fit6);
      c1 = `is.object`(fit6);
      if c1 then L1() else L2(fit6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", fit6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(fit8):
      r9 = `$`(fit8, <sym model>);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn KalmanForecast(12.0, p3);
    check L10() else D5();
  D5():
    deopt 18 [r11];
  L10():
    st pr = r11;
    pr = ld pr;
    check L11() else D6();
  D6():
    deopt 20 [pr];
  L11():
    pr1 = force? pr;
    checkMissing(pr1);
    c2 = `is.object`(pr1);
    if c2 then L13() else L14(pr1);
  L12(dx3):
    fit9 = ld fit3;
    check L16() else D7();
  L13():
    dr2 = tryDispatchBuiltin.1("$", pr1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(pr3):
    r12 = `$`(pr3, <sym pred>);
    goto L12(r12);
  D7():
    deopt 22 [dx3, fit9];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    fit10 = force? fit9;
    checkMissing(fit10);
    c3 = `is.object`(fit10);
    if c3 then L18() else L19(dx3, fit10);
  L17(dx8, dx9):
    c4 = `is.object`(dx9);
    if c4 then L21() else L22(dx8, dx9);
  L18():
    dr4 = tryDispatchBuiltin.1("$", fit10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L20() else L19(dx3, dr4);
  L19(dx5, fit12):
    r13 = `$`(fit12, <sym coef>);
    goto L17(dx5, r13);
  L0(dx16, dx17):
    `+`(dx16, dx17);
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx3, dx7);
  L21():
    dr6 = tryDispatchBuiltin.1("[", dx9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L23() else L22(dx8, dr6);
  L22(dx12, dx13):
    __ = ldf `[` in base;
    r14 = dyn __(dx13, 4.0);
    goto L0(dx12, r14);
  L1():
    fit17 = ld fit3;
    check L36() else D10();
  L23():
    dx15 = getTryDispatchBuiltinValue(dr6);
    goto L0(dx8, dx15);
  L24():
    pr4 = ld pr;
    check L26() else D8();
  L25():
    r16 = dyn base1(<lang `*`(`$`(pr, var), `$`(fit3, sigma2))>);
    goto L1();
  D8():
    deopt 30 [pr4];
  D10():
    deopt 37 [fit17];
  L26():
    pr5 = force? pr4;
    checkMissing(pr5);
    c5 = `is.object`(pr5);
    if c5 then L28() else L29(pr5);
  L36():
    fit18 = force? fit17;
    checkMissing(fit18);
    c7 = `is.object`(fit18);
    if c7 then L38() else L39(fit18);
  L27(dx19):
    fit13 = ld fit3;
    check L31() else D9();
  L28():
    dr8 = tryDispatchBuiltin.1("$", pr5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L30() else L29(dr8);
  L29(pr7):
    r18 = `$`(pr7, <sym var>);
    goto L27(r18);
  L37(dx27):
    st mod = dx27;
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L2(i);
  L38():
    dr12 = tryDispatchBuiltin.1("$", fit18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L40() else L39(dr12);
  L39(fit20):
    r22 = `$`(fit20, <sym model>);
    goto L37(r22);
  D9():
    deopt 32 [dx19, fit13];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L41() else L4();
  L30():
    dx18 = getTryDispatchBuiltinValue(dr8);
    goto L27(dx18);
  L31():
    fit14 = force? fit13;
    checkMissing(fit14);
    c6 = `is.object`(fit14);
    if c6 then L33() else L34(dx19, fit14);
  L40():
    dx26 = getTryDispatchBuiltinValue(dr12);
    goto L37(dx26);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st y = x;
    KalmanForecast1 = ldf KalmanForecast;
    check L42() else D11();
  L32(dx24, dx25):
    r20 = `*`(dx24, dx25);
    r21 = sqrt(r20);
    goto L1();
  L33():
    dr10 = tryDispatchBuiltin.1("$", fit14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L35() else L34(dx19, dr10);
  L34(dx21, fit16):
    r19 = `$`(fit16, <sym sigma2>);
    goto L32(dx21, r19);
  L41():
    invisible.0();
    popenv;
    return i2;
  D11():
    deopt 44 [i2];
  L35():
    dx23 = getTryDispatchBuiltinValue(dr10);
    goto L32(dx19, dx23);
  L42():
    p4 = prom<V +>{
      mod = ld mod;
      mod1 = force? mod;
      checkMissing(mod1);
      return mod1;
    };
    r24 = dyn KalmanForecast1(4.0, p4, TRUE);
    check L43() else D12();
  D12():
    deopt 48 [i2, r24];
  L43():
    st pr = r24;
    print = ldf print;
    check L44() else D13();
  D13():
    deopt 51 [i2];
  L44():
    p5 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r26):
      return r26;
    L3():
      pr8 = ld pr;
      pr9 = force? pr8;
      checkMissing(pr9);
      c9 = `is.object`(pr9);
      if c9 then L6() else L7(pr9);
    L4():
      r25 = dyn base2[pred, se](<lang `+`(`$`(pr, pred), `[`(`$`(fit3, coef), "intercept"))>, <lang sqrt(`*`(`$`(pr, var), `$`(fit3, sigma2)))>);
      goto L0(r25);
    L5(dx29):
      fit21 = ld fit3;
      fit22 = force? fit21;
      checkMissing(fit22);
      c10 = `is.object`(fit22);
      if c10 then L10() else L11(dx29, fit22);
    L6():
      dr14 = tryDispatchBuiltin.1("$", pr9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L8() else L7(dr14);
    L7(pr11):
      r27 = `$`(pr11, <sym pred>);
      goto L5(r27);
    L8():
      dx28 = getTryDispatchBuiltinValue(dr14);
      goto L5(dx28);
    L9(dx34, dx35):
      c11 = `is.object`(dx35);
      if c11 then L13() else L14(dx34, dx35);
    L10():
      dr16 = tryDispatchBuiltin.1("$", fit22);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L12() else L11(dx29, dr16);
    L11(dx31, fit24):
      r28 = `$`(fit24, <sym coef>);
      goto L9(dx31, r28);
    L1(dx42, dx43):
      r30 = `+`(dx42, dx43);
      sym3 = ldf sqrt;
      base3 = ldf sqrt in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L16() else L17();
    L12():
      dx33 = getTryDispatchBuiltinValue(dr16);
      goto L9(dx29, dx33);
    L13():
      dr18 = tryDispatchBuiltin.1("[", dx35);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L15() else L14(dx34, dr18);
    L14(dx38, dx39):
      __1 = ldf `[` in base;
      r29 = dyn __1(dx39, "intercept");
      goto L1(dx38, r29);
    L2(r32):
      list = ldf list in base;
      r37 = dyn list(r30, r32);
      goto L0(r37);
    L15():
      dx41 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx34, dx41);
    L16():
      pr12 = ld pr;
      pr13 = force? pr12;
      checkMissing(pr13);
      c12 = `is.object`(pr13);
      if c12 then L19() else L20(pr13);
    L17():
      r31 = dyn base3(<lang `*`(`$`(pr, var), `$`(fit3, sigma2))>);
      goto L2(r31);
    L18(dx45):
      fit25 = ld fit3;
      fit26 = force? fit25;
      checkMissing(fit26);
      c13 = `is.object`(fit26);
      if c13 then L23() else L24(dx45, fit26);
    L19():
      dr20 = tryDispatchBuiltin.1("$", pr13);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L21() else L20(dr20);
    L20(pr15):
      r33 = `$`(pr15, <sym var>);
      goto L18(r33);
    L21():
      dx44 = getTryDispatchBuiltinValue(dr20);
      goto L18(dx44);
    L22(dx50, dx51):
      r35 = `*`(dx50, dx51);
      r36 = sqrt(r35);
      goto L2(r36);
    L23():
      dr22 = tryDispatchBuiltin.1("$", fit26);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L25() else L24(dx45, dr22);
    L24(dx47, fit28):
      r34 = `$`(fit28, <sym sigma2>);
      goto L22(dx47, r34);
    L25():
      dx49 = getTryDispatchBuiltinValue(dr22);
      goto L22(dx45, dx49);
    };
    r39 = dyn print(p5);
    check L45() else D14();
  D14():
    deopt 53 [i2, r39];
  L45():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L3(i7, r41):
    st mod = r41;
    goto L2(i7);
  L46():
    pr16 = ld pr;
    check L48() else D15();
  L47():
    r40 = dyn base4(<sym pr>, "mod");
    goto L3(i2, r40);
  D15():
    deopt 56 [i2, pr16];
  L48():
    pr17 = force? pr16;
    checkMissing(pr17);
    attr = ldf attr in base;
    r42 = dyn attr(pr17, "mod");
    check L49() else D16();
  D16():
    deopt 60 [i2, r42];
  L49():
    goto L3(i2, r42);
  }
}
fun inner3445983298(y, mod, nit, update) {
  (reg y:*, reg mod:*, reg nit:*, reg update:*) -+> V { var y:*, var mod:*, var nit:*, reg nit_isMissing:L, reg nit_orDefault:*, var update:*, reg update_isMissing:L, reg update_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_KalmanLike:*, reg C_KalmanLike1:V, reg y1:*, reg y2:V, reg mod1:*, reg mod2:V, reg nit1:*, reg nit2:V, reg update1:*, reg update2:V, reg vargs:dots, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:R, reg r9:V, reg x:*, reg x1:V, reg c:L, reg r11:R, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg r13:R, reg dx1:V, reg __:cls, reg r14:V, reg r15:V, reg x4:*, reg x5:V, reg c1:L, reg r18:R, reg r19:V, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r22:R, reg r23:V, reg dx3:V, reg __1:cls, reg r24:V, reg r25:V, reg r26:V, reg x8:*, reg x9:V, reg c2:L, reg x11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r27:V, reg list:cls, reg r28:V, reg update3:*, reg update4:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg x12:*, reg x13:V, reg attr:cls, reg r31:V, reg l:*, reg attr__:cls, reg r32:V, reg z:*, reg z1:V |
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
    if guard then L11() else L12();
  L2(r1):
    st x = r1;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L11():
    C_KalmanLike = ld C_KalmanLike;
    check L13() else D0();
  L12():
    r = dyn base(<sym C_KalmanLike>, <sym y>, <sym mod>, <sym nit>, FALSE, <sym update>);
    goto L2(r);
  D0():
    deopt 1 [C_KalmanLike];
  L3(r4):
    st z = r4;
    update3 = ld update;
    check L35() else D9();
  L13():
    C_KalmanLike1 = force? C_KalmanLike;
    checkMissing(C_KalmanLike1);
    y1 = ld y;
    check L14() else D1();
  L18():
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L19():
    r3 = dyn base1[Lik, s2](<lang `*`(0.5, `(`(`+`(log(`[`(x, 1)), `[`(x, 2))))>, <lang `[`(x, 1)>);
    goto L3(r3);
  D1():
    deopt 2 [C_KalmanLike1, y1];
  D9():
    deopt 36 [update3];
  L4(r8, r9):
    x4 = ld x;
    check L26() else D6();
  L14():
    y2 = force? y1;
    checkMissing(y2);
    mod1 = ld mod;
    check L15() else D2();
  L20():
    x = ld x;
    check L22() else D5();
  L21():
    r7 = dyn base2(<lang `[`(x, 1)>);
    goto L4(0.5, r7);
  L35():
    update4 = force? update3;
    checkMissing(update4);
    c3 = `as.logical`(update4);
    if c3 then L36() else L8();
  D2():
    deopt 3 [C_KalmanLike1, y2, mod1];
  D5():
    deopt 14 [0.5, x];
  D6():
    deopt 19 [r8, r9, x4];
  L8():
    goto L10();
  L10():
    z = ld z;
    check L44() else D14();
  L15():
    mod2 = force? mod1;
    checkMissing(mod2);
    nit1 = ld nit;
    check L16() else D3();
  L22():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L23() else L24(0.5, x1);
  L26():
    x5 = force? x4;
    checkMissing(x5);
    c1 = `is.object`(x5);
    if c1 then L27() else L28(r8, r9, x5);
  L36():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  D3():
    deopt 4 [C_KalmanLike1, y2, mod2, nit1];
  D14():
    deopt 53 [z];
  L5(r13, dx1):
    r15 = log(dx1, 2.718281828459045);
    goto L4(r13, r15);
  L6(r22, r23, dx3):
    r25 = `+`(r23, dx3);
    r26 = `*`(r22, r25);
    x8 = ld x;
    check L30() else D7();
  L9(r30):
    l = ld z;
    attr__ = ldf `attr<-`;
    check L41() else D12();
  L16():
    nit2 = force? nit1;
    checkMissing(nit2);
    update1 = ld update;
    check L17() else D4();
  L23():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(0.5, dr);
  L24(r11, x3):
    __ = ldf `[` in base;
    r14 = dyn __(x3, 1);
    goto L5(r11, r14);
  L27():
    dr2 = tryDispatchBuiltin.1("[", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(r8, r9, dr2);
  L28(r18, r19, x7):
    __1 = ldf `[` in base;
    r24 = dyn __1(x7, 2);
    goto L6(r18, r19, r24);
  L37():
    x12 = ld x;
    check L39() else D10();
  L38():
    r29 = dyn base3(<sym x>, "mod");
    goto L9(r29);
  L44():
    z1 = force? z;
    checkMissing(z1);
    popenv;
    return z1;
  D4():
    deopt 6 [C_KalmanLike1, y2, mod2, nit2, FALSE, update1];
  D7():
    deopt 27 [x8];
  D10():
    deopt 40 [x12];
  D12():
    deopt 46 [r30, l, r30];
  L17():
    update2 = force? update1;
    checkMissing(update2);
    vargs = dots[y2, mod2, nit2, FALSE, update2];
    r2 = `.Call`(C_KalmanLike1, vargs, <missing>);
    goto L2(r2);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(0.5, dx);
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(r8, r9, dx2);
  L30():
    x9 = force? x8;
    checkMissing(x9);
    c2 = `is.object`(x9);
    if c2 then L31() else L32(x9);
  L39():
    x13 = force? x12;
    checkMissing(x13);
    attr = ldf attr in base;
    r31 = dyn attr(x13, "mod");
    check L40() else D11();
  L41():
    r32 = dyn attr__(l, NULL, "mod", r30);
    check L42() else D13();
  D11():
    deopt 44 [r31];
  D13():
    deopt 49 [r30, r32];
  L7(dx5):
    list = ldf list in base;
    r28 = dyn list(r26, dx5);
    check L34() else D8();
  L31():
    dr4 = tryDispatchBuiltin.1("[", x9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(dr4);
  L32(x11):
    __2 = ldf `[` in base;
    r27 = dyn __2(x11, 1);
    goto L7(r27);
  L40():
    goto L9(r31);
  L42():
    st z = r32;
    goto L10();
  D8():
    deopt 34 [r28];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L34():
    goto L3(r28);
  }
}