fun main() {
  () -+> V { reg r:cls, reg print:cls, reg x2:*, reg x3:V, reg p:p(V +), reg r2:V, reg zapsmall:cls, reg x4:*, reg x5:V, reg p1:p(V +), reg r4:V, reg zapsmall1:cls, reg x6:*, reg x7:V, reg p2:p(V +), reg r6:V, reg zapsmall2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x8:*, reg x9:V, reg c:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg zapsmall3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg x10:*, reg x11:V, reg c1:cls, reg r14:V, reg p4:p(V +), reg p5:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg r20:V, reg zapsmall4:cls, reg z:*, reg z1:V, reg p6:p(V +), reg r22:V, reg r23:cls, reg zapShow:cls, reg x12:*, reg x13:V, reg p7:p(V +), reg r25:V, reg r26:cls, reg zapShow1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg x14:*, reg x15:V, reg c2:cls, reg r29:V, reg p8:p(V +), reg mF_rob:*, reg mF_rob1:V, reg p9:p(V +), reg r32:V, reg zapShow2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg x16:*, reg x17:V, reg c3:cls, reg r35:V, reg p10:p(V +), reg mF_rob2:*, reg mF_rob3:V, reg p11:p(V +), reg p12:p(V +), reg r39:V, reg zapShow3:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg x18:*, reg x19:V, reg c4:cls, reg r42:V, reg p13:p(V +), reg mF_rob4:*, reg mF_rob5:V, reg p14:p(V +), reg r45:V, reg zapShow4:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg x20:*, reg x21:V, reg c5:cls, reg r48:V, reg p15:p(V +), reg mF_rob6:*, reg mF_rob7:V, reg p16:p(V +), reg r51:V, reg zapShow5:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg x22:*, reg x23:V, reg c6:cls, reg r54:V, reg p17:p(V +), reg mF_rob8:*, reg mF_rob9:V, reg p18:p(V +), reg r57:V |
    mkenv;
    r = clos inner3666179601;
    st zapsmall = r;
    st x2 = <real 3.141592653589793E-5, 0.0031415926535897933, 0.3141592653589793, 31.41592653589793, 3141.5926535897934>;
    print = ldf print;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    p = prom<V +>{
      x2 = ld x2;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r2 = dyn print[, digits](p, 4.0);
    check L2() else D1();
  D1():
    deopt 11 [r2];
  L2():
    zapsmall = ldf zapsmall;
    check L3() else D2();
  D2():
    deopt 13 [];
  L3():
    p1 = prom<V +>{
      x4 = ld x2;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r4 = dyn zapsmall(p1);
    check L4() else D3();
  D3():
    deopt 15 [r4];
  L4():
    zapsmall1 = ldf zapsmall;
    check L5() else D4();
  D4():
    deopt 17 [];
  L5():
    p2 = prom<V +>{
      x6 = ld x2;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r6 = dyn zapsmall1[, digits](p2, 4.0);
    check L6() else D5();
  D5():
    deopt 21 [r6];
  L6():
    zapsmall2 = ldf zapsmall;
    check L7() else D6();
  D6():
    deopt 23 [];
  L7():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x8 = ld x2;
      x9 = force? x8;
      checkMissing(x9);
      c = ldf c in base;
      r9 = dyn c(x9, +Infinity);
      goto L0(r9);
    L2():
      r7 = dyn base(<sym x2>, +Infinity);
      goto L0(r7);
    };
    r11 = dyn zapsmall2(p3);
    check L8() else D7();
  D7():
    deopt 25 [r11];
  L8():
    zapsmall3 = ldf zapsmall;
    check L9() else D8();
  D8():
    deopt 27 [];
  L9():
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      x10 = ld x2;
      x11 = force? x10;
      checkMissing(x11);
      c1 = ldf c in base;
      r14 = dyn c1(x11, +Infinity);
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym x2>, +Infinity);
      goto L0(r12);
    };
    p5 = prom<V +>{
      return -Infinity;
    };
    r17 = dyn zapsmall3[, `min.d`](p4, p5);
    check L10() else D9();
  D9():
    deopt 31 [r17];
  L10():
    sym2 = ldf exp;
    base2 = ldf exp in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L0(r19):
    st z = r19;
    zapsmall4 = ldf zapsmall;
    check L13() else D10();
  L11():
    r20 = exp(<cplx 0.0i, 1.5707963267948966i, 3.141592653589793i, 4.71238898038469i, 6.283185307179586i>);
    goto L0(r20);
  L12():
    r18 = dyn base2(<lang `/`(`*`(`*`(1.0i, `:`(0.0, 4.0)), pi), 2.0)>);
    goto L0(r18);
  D10():
    deopt 38 [];
  L13():
    p6 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r22 = dyn zapsmall4(p6);
    check L14() else D11();
  D11():
    deopt 40 [r22];
  L14():
    r23 = clos inner2044426018;
    st zapShow = r23;
    zapShow = ldf zapShow;
    check L15() else D12();
  D12():
    deopt 45 [];
  L15():
    p7 = prom<V +>{
      x12 = ld x2;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r25 = dyn zapShow(p7);
    check L16() else D13();
  D13():
    deopt 47 [r25];
  L16():
    r26 = clos inner948964368;
    st mF_rob = r26;
    zapShow1 = ldf zapShow;
    check L17() else D14();
  D14():
    deopt 52 [];
  L17():
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      x14 = ld x2;
      x15 = force? x14;
      checkMissing(x15);
      c2 = ldf c in base;
      r29 = dyn c2(x15, +Infinity);
      goto L0(r29);
    L2():
      r27 = dyn base3(<sym x2>, +Infinity);
      goto L0(r27);
    };
    p9 = prom<V +>{
      mF_rob = ld mF_rob;
      mF_rob1 = force? mF_rob;
      checkMissing(mF_rob1);
      return mF_rob1;
    };
    r32 = dyn zapShow1[, mFUN](p8, p9);
    check L18() else D15();
  D15():
    deopt 56 [r32];
  L18():
    zapShow2 = ldf zapShow;
    check L19() else D16();
  D16():
    deopt 58 [];
  L19():
    p10 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      x16 = ld x2;
      x17 = force? x16;
      checkMissing(x17);
      c3 = ldf c in base;
      r35 = dyn c3(x17, +Infinity);
      goto L0(r35);
    L2():
      r33 = dyn base4(<sym x2>, +Infinity);
      goto L0(r33);
    };
    p11 = prom<V +>{
      mF_rob2 = ld mF_rob;
      mF_rob3 = force? mF_rob2;
      checkMissing(mF_rob3);
      return mF_rob3;
    };
    p12 = prom<V +>{
      return -5.0;
    };
    r39 = dyn zapShow2[, mFUN, `min.d`](p10, p11, p12);
    check L20() else D17();
  D17():
    deopt 64 [r39];
  L20():
    zapShow3 = ldf zapShow;
    check L21() else D18();
  D18():
    deopt 66 [];
  L21():
    p13 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      x18 = ld x2;
      x19 = force? x18;
      checkMissing(x19);
      c4 = ldf c in base;
      r42 = dyn c4(x19, 999.0);
      goto L0(r42);
    L2():
      r40 = dyn base5(<sym x2>, 999.0);
      goto L0(r40);
    };
    p14 = prom<V +>{
      mF_rob4 = ld mF_rob;
      mF_rob5 = force? mF_rob4;
      checkMissing(mF_rob5);
      return mF_rob5;
    };
    r45 = dyn zapShow3[, mFUN](p13, p14);
    check L22() else D19();
  D19():
    deopt 70 [r45];
  L22():
    zapShow4 = ldf zapShow;
    check L23() else D20();
  D20():
    deopt 72 [];
  L23():
    p15 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      x20 = ld x2;
      x21 = force? x20;
      checkMissing(x21);
      c5 = ldf c in base;
      r48 = dyn c5(x21, 999.0);
      goto L0(r48);
    L2():
      r46 = dyn base6(<sym x2>, 999.0);
      goto L0(r46);
    };
    p16 = prom<V +>{
      mF_rob6 = ld mF_rob;
      mF_rob7 = force? mF_rob6;
      checkMissing(mF_rob7);
      return mF_rob7;
    };
    r51 = dyn zapShow4[, mFUN, `min.d`](p15, p16, 3.0);
    check L24() else D21();
  D21():
    deopt 78 [r51];
  L24():
    zapShow5 = ldf zapShow;
    check L25() else D22();
  D22():
    deopt 80 [];
  L25():
    p17 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      x22 = ld x2;
      x23 = force? x22;
      checkMissing(x23);
      c6 = ldf c in base;
      r54 = dyn c6(x23, 999.0);
      goto L0(r54);
    L2():
      r52 = dyn base7(<sym x2>, 999.0);
      goto L0(r52);
    };
    p18 = prom<V +>{
      mF_rob8 = ld mF_rob;
      mF_rob9 = force? mF_rob8;
      checkMissing(mF_rob9);
      return mF_rob9;
    };
    r57 = dyn zapShow5[, mFUN, `min.d`](p17, p18, 8.0);
    check L26() else D23();
  D23():
    deopt 86 [r57];
  L26():
    popenv;
    return r57;
  }
}
fun inner3666179601(x, digits, mFUN, `min.d`) {
  (reg x:*, reg digits:*, reg mFUN:*, reg min_d:*) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var mFUN:*, reg mFUN_isMissing:L, reg mFUN_orDefault:*, reg r2:cls, reg p1:p(V +), var `min.d`:*, reg min_d_isMissing:L, reg min_d_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg digits1:*, reg digits2:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg stop:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x1:*, reg x2:V, reg is_na:cls, reg r14:V, reg all:cls, reg r15:V, reg c1:L, reg x3:*, reg x4:V, reg mFUN1:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg ina:*, reg ina1:V, reg p3:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg round:cls, reg r23:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    mFUN_isMissing = missing.0(mFUN);
    if mFUN_isMissing then L2() else L3(mFUN);
  L2():
    p1 = prom<V +>{
      r2 = clos inner948964368;
      return r2;
    };
    goto L3(p1);
  L3(mFUN_orDefault):
    st mFUN = mFUN_orDefault;
    min_d_isMissing = missing.0(min_d);
    if min_d_isMissing then L4(0) else L4(min_d);
  L4(min_d_orDefault):
    st `min.d` = min_d_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L5(r5):
    r7 = `==`(r5, 0);
    c = `as.logical`(r7);
    if c then L17() else L6();
  L13():
    digits1 = ld digits;
    check L15() else D0();
  L14():
    r4 = dyn base(<sym digits>);
    goto L5(r4);
  D0():
    deopt 2 [digits1];
  L6():
    goto L7();
  L7():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L15():
    digits2 = force? digits1;
    checkMissing(digits2);
    length = ldf length in base;
    r6 = dyn length(digits2);
    check L16() else D1();
  L17():
    stop = ldf stop;
    check L18() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 9 [];
  L8(r11):
    c1 = `as.logical`(r11);
    if c1 then L28() else L10();
  L16():
    goto L5(r6);
  L18():
    r8 = dyn stop("invalid 'digits'");
    check L19() else D3();
  L21():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L22():
    r10 = dyn base1(<lang `<-`(ina, is.na(x))>);
    goto L8(r10);
  D3():
    deopt 11 [r8];
  L9(r13):
    st ina = r13;
    all = ldf all in base;
    r15 = dyn all(r13);
    check L27() else D6();
  L10():
    mFUN1 = ldf mFUN;
    check L32() else D8();
  L19():
    goto L7();
  L23():
    x1 = ld x;
    check L25() else D4();
  L24():
    r12 = dyn base2(<sym x>);
    goto L9(r12);
  L28():
    x3 = ld x;
    check L29() else D7();
  D4():
    deopt 18 [x1];
  D6():
    deopt 24 [r15];
  D7():
    deopt 25 [x3];
  D8():
    deopt 31 [];
  L25():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r14 = dyn is_na(x2);
    check L26() else D5();
  L27():
    goto L8(r15);
  L29():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L32():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p3 = prom<V +>{
      ina = ld ina;
      ina1 = force? ina;
      checkMissing(ina1);
      return ina1;
    };
    r20 = dyn mFUN1(p2, p3);
    check L33() else D9();
  D5():
    deopt 21 [r14];
  D9():
    deopt 34 [r20];
  L26():
    goto L9(r14);
  L33():
    st mx = r20;
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L12(r22):
    popenv;
    return r22;
  L34():
    round = ldf round in base;
    r23 = dyn round(<sym x>, <lang if(`>`(mx, 0.0), max(min.d, `-`(digits, as.numeric(log10(mx)))), digits)>);
    goto L12(r23);
  L35():
    r21 = dyn base3[, digits](<sym x>, <lang if(`>`(mx, 0.0), max(min.d, `-`(digits, as.numeric(log10(mx)))), digits)>);
    goto L12(r21);
  }
}
fun inner948964368(x, ina) {
  (reg x:*, reg ina:*) -+> V { var x:*, var ina:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ina1:*, reg ina2:V, reg r4:V, reg __:cls, reg r5:V, reg abs:cls, reg r6:V, reg max:cls, reg r7:V |
    mkenv;
    st x = x;
    st ina = ina;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang abs(`[`(x, `!`(ina)))>);
    goto L0(r);
  L1(r3):
    max = ldf max in base;
    r7 = dyn max(r3);
    check L13() else D3();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base1(<lang `[`(x, `!`(ina))>);
    goto L1(r2);
  D0():
    deopt 4 [x1];
  D3():
    deopt 13 [r7];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L8() else L9(x2);
  L13():
    goto L0(r7);
  L2(dx1):
    abs = ldf abs in base;
    r6 = dyn abs(dx1);
    check L12() else D2();
  L8():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(x4):
    ina1 = ld ina;
    check L11() else D1();
  D1():
    deopt 6 [x4, ina1];
  D2():
    deopt 11 [r6];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L11():
    ina2 = force? ina1;
    checkMissing(ina2);
    r4 = `!`(ina2);
    __ = ldf `[` in base;
    r5 = dyn __(x4, r4);
    goto L2(r5);
  L12():
    goto L1(r6);
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg rbind:cls, reg x1:*, reg x2:V, reg p:p(V +), reg zapsmall:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    rbind = ldf rbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      zapsmall = ldf zapsmall;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      ddd1 = ld `...`;
      r2 = dyn zapsmall[, `...`](p1, ddd1);
      return r2;
    };
    r4 = dyn rbind[orig, zapped](p, p2);
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    popenv;
    return r4;
  }
}