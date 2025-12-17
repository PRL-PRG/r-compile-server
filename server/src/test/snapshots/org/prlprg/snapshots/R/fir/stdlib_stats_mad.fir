fun main() {
  () -+> V { reg r:cls, reg mad:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg print:cls, reg mad1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg mad2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c2:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg c3:cls, reg r21:V, reg sort:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg x:*, reg x1:V, reg median:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg r25:V, reg r26:V, reg abs:cls, reg r27:V, reg p5:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg mad3:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r33:V, reg mad4:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r35:V, reg mad5:cls, reg x8:*, reg x9:V, reg p8:p(V +), reg r37:V, reg c4:cls, reg r38:V |
    mkenv;
    r = clos inner833810193;
    st mad = r;
    mad = ldf mad;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang `:`(1.0, 9.0)>);
      goto L0(r1);
    };
    r5 = dyn mad(p);
    check L3() else D1();
  D1():
    deopt 6 [r5];
  L3():
    print = ldf print;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p2 = prom<V +>{
      mad1 = ldf mad;
      p1 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r7):
        return r7;
      L1():
        c1 = ldf c in base;
        r8 = dyn c1(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>);
        goto L0(r8);
      L2():
        r6 = dyn base1(<lang `:`(1.0, 9.0)>);
        goto L0(r6);
      };
      r10 = dyn mad1[, constant](p1, 1.0);
      return r10;
    };
    r12 = dyn print(p2);
    check L5() else D3();
  D3():
    deopt 10 [r12];
  L5():
    mad2 = ldf mad;
    check L6() else D4();
  D4():
    deopt 11 [r12];
  L6():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c2 = ldf c in base;
      r15 = dyn c2(<int 1, 2, 3, 4, 5, 6, 7, 8>, 100.0);
      goto L0(r15);
    L2():
      r13 = dyn base2(<lang `:`(1.0, 8.0)>, 100.0);
      goto L0(r13);
    };
    r17 = dyn mad2[, constant](p3, 1.0);
    check L7() else D5();
  D5():
    deopt 15 [r12, r17];
  L7():
    `==`(r12, r17);
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L8() else L9();
  L0(r20):
    st x = r20;
    sort = ldf sort;
    check L11() else D7();
  L8():
    c3 = ldf c in base;
    r21 = dyn c3(1.0, 2.0, 3.0, 5.0, 7.0, 8.0);
    check L10() else D6();
  L9():
    r19 = dyn base3(1.0, 2.0, 3.0, 5.0, 7.0, 8.0);
    goto L0(r19);
  D6():
    deopt 26 [r21];
  D7():
    deopt 29 [];
  L10():
    goto L0(r21);
  L11():
    p5 = prom<V +>{
      sym4 = ldf abs;
      base4 = ldf abs in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      median = ldf median;
      p4 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r25 = dyn median(p4);
      r26 = `-`(x1, r25);
      abs = ldf abs in base;
      r27 = dyn abs(r26);
      goto L0(r27);
    L2():
      r22 = dyn base4(<lang `-`(x, median(x))>);
      goto L0(r22);
    };
    r29 = dyn sort(p5);
    check L12() else D8();
  D8():
    deopt 31 [r29];
  L12():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L13() else L14();
  L1(r31):
    popenv;
    return r31;
  L13():
    mad3 = ldf mad;
    check L15() else D9();
  L14():
    r30 = dyn base5(<lang mad(x, constant=1.0)>, <lang mad(x, constant=1.0, low=TRUE)>, <lang mad(x, constant=1.0, high=TRUE)>);
    goto L1(r30);
  D9():
    deopt 35 [];
  L15():
    p6 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r33 = dyn mad3[, constant](p6, 1.0);
    check L16() else D10();
  D10():
    deopt 39 [r33];
  L16():
    mad4 = ldf mad;
    check L17() else D11();
  D11():
    deopt 41 [];
  L17():
    p7 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r35 = dyn mad4[, constant, low](p7, 1.0, TRUE);
    check L18() else D12();
  D12():
    deopt 47 [r35];
  L18():
    mad5 = ldf mad;
    check L19() else D13();
  D13():
    deopt 49 [];
  L19():
    p8 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r37 = dyn mad5[, constant, high](p8, 1.0, TRUE);
    check L20() else D14();
  D14():
    deopt 55 [r37];
  L20():
    c4 = ldf c in base;
    r38 = dyn c4(r33, r35, r37);
    check L21() else D15();
  D15():
    deopt 57 [r38];
  L21():
    goto L1(r38);
  }
}
fun inner833810193(x, center, constant, `na.rm`, low, high) {
  (reg x:*, reg center:*, reg constant:*, reg na_rm:*, reg low:*, reg high:*) -+> V { var x:*, var center:*, reg center_isMissing:L, reg center_orDefault:*, reg median:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var constant:*, reg constant_isMissing:L, reg constant_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var low:*, reg low_isMissing:L, reg low_orDefault:*, var high:*, reg high_isMissing:L, reg high_orDefault:*, reg na_rm1:*, reg na_rm2:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg x9:V, reg r4:V, reg x10:*, reg x11:V, reg is_na:cls, reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x12:*, reg x13:V, reg length:cls, reg r10:V, reg constant1:*, reg constant2:V, reg low1:*, reg low2:V, reg c2:L, reg constant3:V, reg c3:V, reg high1:*, reg high2:V, reg c5:L, reg c6:V, reg c8:L, reg constant7:V, reg c10:V, reg n:*, reg n1:V, reg __1:cls, reg r11:V, reg r12:V, reg c11:L, reg c12:V, reg c14:L, reg low3:*, reg low4:V, reg c15:L, reg constant12:V, reg c17:V, reg high3:*, reg high4:V, reg c18:L, reg c19:V, reg c21:L, reg stop:cls, reg r13:V, reg constant16:V, reg n2:*, reg n3:V, reg ___:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg constant19:V, reg r19:V, reg r20:V, reg high5:*, reg high6:V, reg as_integer:cls, reg r21:V, reg r22:V, reg sort:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg x14:*, reg x15:V, reg center1:*, reg center2:V, reg r25:V, reg abs:cls, reg r26:V, reg p2:p(V +), reg n4:*, reg n5:V, reg p3:p(V +), reg r29:V, reg c22:L, reg constant21:V, reg r31:V, reg dr2:V, reg dc1:L, reg dx3:V, reg constant23:V, reg dx4:V, reg n6:*, reg n7:V, reg __2:cls, reg r32:V, reg constant24:V, reg dx5:V, reg median1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg x16:*, reg x17:V, reg center3:*, reg center4:V, reg r35:V, reg abs1:cls, reg r36:V, reg p4:p(V +), reg r38:V, reg r39:V |
    mkenv;
    st x = x;
    center_isMissing = missing.0(center);
    if center_isMissing then L0() else L1(center);
  L0():
    p1 = prom<V +>{
      median = ldf median;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn median(p);
      return r1;
    };
    goto L1(p1);
  L1(center_orDefault):
    st center = center_orDefault;
    constant_isMissing = missing.0(constant);
    if constant_isMissing then L2(1.4826) else L2(constant);
  L2(constant_orDefault):
    st constant = constant_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L3(FALSE) else L3(na_rm);
  L3(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    low_isMissing = missing.0(low);
    if low_isMissing then L4(FALSE) else L4(low);
  L4(low_orDefault):
    st low = low_orDefault;
    high_isMissing = missing.0(high);
    if high_isMissing then L5(FALSE) else L5(high);
  L5(high_orDefault):
    st high = high_orDefault;
    na_rm1 = ld `na.rm`;
    check L20() else D0();
  D0():
    deopt 0 [na_rm1];
  L20():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c = `as.logical`(na_rm2);
    if c then L21() else L6();
  L6():
    goto L9();
  L9():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L21():
    x3 = ld x;
    check L22() else D1();
  D1():
    deopt 2 [x3];
  L10(r9):
    st n = r9;
    constant1 = ld constant;
    check L35() else D6();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L23() else L24(x4);
  L31():
    x12 = ld x;
    check L33() else D4();
  L32():
    r8 = dyn base1(<sym x>);
    goto L10(r8);
  D4():
    deopt 17 [x12];
  D6():
    deopt 22 [constant1];
  L7(dx1):
    st x = dx1;
    goto L9();
  L23():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(x6):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L33():
    x13 = force? x12;
    checkMissing(x13);
    length = ldf length in base;
    r10 = dyn length(x13);
    check L34() else D5();
  L35():
    constant2 = force? constant1;
    checkMissing(constant2);
    low1 = ld low;
    check L36() else D7();
  D5():
    deopt 20 [r10];
  D7():
    deopt 23 [constant2, low1];
  L8(x9, r4):
    r6 = `!`(r4);
    __ = ldf `[` in base;
    r7 = dyn __(x9, r6);
    goto L7(r7);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L26():
    x10 = ld x;
    check L28() else D2();
  L27():
    r3 = dyn base(<sym x>);
    goto L8(x6, r3);
  L34():
    goto L10(r10);
  L36():
    low2 = force? low1;
    checkMissing(low2);
    c2 = `as.logical`(low2);
    if c2 then L11(constant2, c2) else L37();
  D2():
    deopt 6 [x6, x10];
  L11(constant3, c3):
    c8 = `as.logical`(c3);
    if c8 then L40() else L12(constant3, c8);
  L28():
    x11 = force? x10;
    checkMissing(x11);
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(x11);
    check L29() else D3();
  L37():
    high1 = ld high;
    check L38() else D8();
  D3():
    deopt 9 [x6, r5];
  D8():
    deopt 25 [constant2, c2, high1];
  L12(constant7, c10):
    c14 = `as.logical`(c10);
    if c14 then L44() else L13();
  L29():
    goto L8(x6, r5);
  L38():
    high2 = force? high1;
    checkMissing(high2);
    c5 = `as.logical`(high2);
    c6 = `||`(c2, c5);
    goto L11(constant2, c6);
  L40():
    n = ld n;
    check L41() else D9();
  D9():
    deopt 29 [constant3, c8, n];
  L13():
    median1 = ldf median;
    check L66() else D22();
  L19(constant24, dx5):
    r39 = `*`(constant24, dx5);
    popenv;
    return r39;
  L41():
    n1 = force? n;
    checkMissing(n1);
    __1 = ldf `%%` in base;
    r11 = dyn __1(n1, 2.0);
    check L42() else D10();
  L44():
    low3 = ld low;
    check L45() else D11();
  D10():
    deopt 33 [constant3, c8, r11];
  D11():
    deopt 37 [constant7, low3];
  D22():
    deopt 71 [constant7];
  L42():
    r12 = `==`(r11, 0.0);
    c11 = `as.logical`(r12);
    c12 = `&&`(c8, c11);
    goto L12(constant3, c12);
  L45():
    low4 = force? low3;
    checkMissing(low4);
    c15 = `as.logical`(low4);
    if c15 then L46() else L14(constant7, c15);
  L66():
    p4 = prom<V +>{
      sym4 = ldf abs;
      base4 = ldf abs in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      center3 = ld center;
      center4 = force? center3;
      checkMissing(center4);
      r35 = `-`(x17, center4);
      abs1 = ldf abs in base;
      r36 = dyn abs1(r35);
      goto L0(r36);
    L2():
      r33 = dyn base4(<lang `-`(x, center)>);
      goto L0(r33);
    };
    r38 = dyn median1(p4);
    check L67() else D23();
  D23():
    deopt 73 [constant7, r38];
  L14(constant12, c17):
    c21 = `as.logical`(c17);
    if c21 then L49() else L15();
  L46():
    high3 = ld high;
    check L47() else D12();
  L67():
    goto L19(constant7, r38);
  D12():
    deopt 39 [constant7, c15, high3];
  L15():
    goto L16(constant12);
  L16(constant16):
    n2 = ld n;
    check L53() else D15();
  L47():
    high4 = force? high3;
    checkMissing(high4);
    c18 = `as.logical`(high4);
    c19 = `&&`(c15, c18);
    goto L14(constant7, c19);
  L49():
    stop = ldf stop;
    check L50() else D13();
  D13():
    deopt 43 [constant12];
  D15():
    deopt 49 [constant16, n2];
  L50():
    r13 = dyn stop("'low' and 'high' cannot be both TRUE");
    check L51() else D14();
  L53():
    n3 = force? n2;
    checkMissing(n3);
    ___ = ldf `%/%` in base;
    r15 = dyn ___(n3, 2.0);
    check L54() else D16();
  D14():
    deopt 45 [constant12, r13];
  D16():
    deopt 53 [constant16, r15];
  L51():
    goto L16(constant12);
  L54():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L17(constant19, r19, r20):
    r22 = `+`(r19, r20);
    st n2 = r22;
    sort = ldf sort;
    check L59() else D19();
  L55():
    high5 = ld high;
    check L57() else D17();
  L56():
    r18 = dyn base2(<sym high>);
    goto L17(constant16, r15, r18);
  D17():
    deopt 55 [constant16, r15, high5];
  D19():
    deopt 62 [constant19];
  L57():
    high6 = force? high5;
    checkMissing(high6);
    as_integer = ldf `as.integer` in base;
    r21 = dyn as_integer(high6);
    check L58() else D18();
  L59():
    p2 = prom<V +>{
      sym3 = ldf abs;
      base3 = ldf abs in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      center1 = ld center;
      center2 = force? center1;
      checkMissing(center2);
      r25 = `-`(x15, center2);
      abs = ldf abs in base;
      r26 = dyn abs(r25);
      goto L0(r26);
    L2():
      r23 = dyn base3(<lang `-`(x, center)>);
      goto L0(r23);
    };
    p3 = prom<V +>{
      n4 = ld n2;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r29 = dyn sort[, partial](p2, p3);
    check L60() else D20();
  D18():
    deopt 58 [constant16, r15, r21];
  D20():
    deopt 66 [constant19, r29];
  L58():
    goto L17(constant16, r15, r21);
  L60():
    c22 = `is.object`(r29);
    if c22 then L61() else L62(constant19, r29);
  L18(constant23, dx4):
    goto L19(constant23, dx4);
  L61():
    dr2 = tryDispatchBuiltin.1("[", r29);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(constant19, dr2);
  L62(constant21, r31):
    n6 = ld n2;
    check L64() else D21();
  D21():
    deopt 67 [constant21, r31, n6];
  L63():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L18(constant19, dx3);
  L64():
    n7 = force? n6;
    __2 = ldf `[` in base;
    r32 = dyn __2(r31, n7);
    goto L18(constant21, r32);
  }
}