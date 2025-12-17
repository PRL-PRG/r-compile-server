fun main() {
  () -+> V { reg r:cls, reg ARMAtoMA:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg n:*, reg n1:V, reg r6:V, reg r7:V, reg n2:*, reg n3:V, reg r8:V, reg r9:V, reg r10:V |
    mkenv;
    r = clos inner1712107733;
    st ARMAtoMA = r;
    ARMAtoMA = ldf ARMAtoMA;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, -0.25);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, <lang `-`(0.25)>);
      goto L0(r1);
    };
    r5 = dyn ARMAtoMA(p, 1.0, 10.0);
    check L1() else D1();
  D1():
    deopt 8 [r5];
  L1():
    st n = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    n = ld n;
    check L2() else D2();
  D2():
    deopt 14 [1.0, 3.0, n];
  L2():
    n1 = force? n;
    checkMissing(n1);
    r6 = `*`(3.0, n1);
    r7 = `+`(1.0, r6);
    n2 = ld n;
    check L3() else D3();
  D3():
    deopt 18 [r7, 2.0, n2];
  L3():
    n3 = force? n2;
    checkMissing(n3);
    r8 = `-`(<missing>, n3);
    r9 = `^`(2.0, r8);
    r10 = `*`(r7, r9);
    popenv;
    return r10;
  }
}
fun inner1712107733(ar, ma, `lag.max`) {
  (reg ar:*, reg ma:*, reg lag_max:*) -+> V { var ar:*, reg ar_isMissing:L, reg ar_orDefault:*, reg numeric:cls, reg r:V, reg p:p(V +), var ma:*, reg ma_isMissing:L, reg ma_orDefault:*, reg numeric1:cls, reg r2:V, reg p1:p(V +), var `lag.max`:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg C_ARMAtoMA:*, reg C_ARMAtoMA1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg C_ARMAtoMA4:V, reg r7:V, reg ar1:*, reg ar2:V, reg as_double:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg C_ARMAtoMA7:V, reg r12:V, reg r13:V, reg ma1:*, reg ma2:V, reg as_double1:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg C_ARMAtoMA10:V, reg r20:V, reg r21:V, reg r22:V, reg lag_max1:*, reg lag_max2:V, reg as_integer:cls, reg r23:V, reg vargs:dots, reg r24:V |
    mkenv;
    ar_isMissing = missing.0(ar);
    if ar_isMissing then L0() else L1(ar);
  L0():
    p = prom<V +>{
      numeric = ldf numeric;
      r = dyn numeric();
      return r;
    };
    goto L1(p);
  L1(ar_orDefault):
    st ar = ar_orDefault;
    ma_isMissing = missing.0(ma);
    if ma_isMissing then L2() else L3(ma);
  L2():
    p1 = prom<V +>{
      numeric1 = ldf numeric;
      r2 = dyn numeric1();
      return r2;
    };
    goto L3(p1);
  L3(ma_orDefault):
    st ma = ma_orDefault;
    st `lag.max` = lag_max;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L4(r5):
    popenv;
    return r5;
  L8():
    C_ARMAtoMA = ld C_ARMAtoMA;
    check L10() else D0();
  L9():
    r4 = dyn base(<sym C_ARMAtoMA>, <lang as.double(ar)>, <lang as.double(ma)>, <lang as.integer(lag.max)>);
    goto L4(r4);
  D0():
    deopt 1 [C_ARMAtoMA];
  L10():
    C_ARMAtoMA1 = force? C_ARMAtoMA;
    checkMissing(C_ARMAtoMA1);
    sym1 = ldf `as.double`;
    base1 = ldf `as.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L5(C_ARMAtoMA4, r7):
    sym2 = ldf `as.double`;
    base2 = ldf `as.double` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L11():
    ar1 = ld ar;
    check L13() else D1();
  L12():
    r6 = dyn base1(<sym ar>);
    goto L5(C_ARMAtoMA1, r6);
  D1():
    deopt 4 [C_ARMAtoMA1, ar1];
  L6(C_ARMAtoMA7, r12, r13):
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L13():
    ar2 = force? ar1;
    checkMissing(ar2);
    as_double = ldf `as.double` in base;
    r8 = dyn as_double(ar2);
    check L14() else D2();
  L15():
    ma1 = ld ma;
    check L17() else D3();
  L16():
    r11 = dyn base2(<sym ma>);
    goto L6(C_ARMAtoMA4, r7, r11);
  D2():
    deopt 7 [C_ARMAtoMA1, r8];
  D3():
    deopt 9 [C_ARMAtoMA4, r7, ma1];
  L7(C_ARMAtoMA10, r20, r21, r22):
    vargs = dots[r20, r21, r22];
    r24 = `.Call`(C_ARMAtoMA10, vargs, <missing>);
    goto L4(r24);
  L14():
    goto L5(C_ARMAtoMA1, r8);
  L17():
    ma2 = force? ma1;
    checkMissing(ma2);
    as_double1 = ldf `as.double` in base;
    r14 = dyn as_double1(ma2);
    check L18() else D4();
  L19():
    lag_max1 = ld `lag.max`;
    check L21() else D5();
  L20():
    r19 = dyn base3(<sym lag.max>);
    goto L7(C_ARMAtoMA7, r12, r13, r19);
  D4():
    deopt 12 [C_ARMAtoMA4, r7, r14];
  D5():
    deopt 14 [C_ARMAtoMA7, r12, r13, lag_max1];
  L18():
    goto L6(C_ARMAtoMA4, r7, r14);
  L21():
    lag_max2 = force? lag_max1;
    checkMissing(lag_max2);
    as_integer = ldf `as.integer` in base;
    r23 = dyn as_integer(lag_max2);
    check L22() else D6();
  D6():
    deopt 17 [C_ARMAtoMA7, r12, r13, r23];
  L22():
    goto L7(C_ARMAtoMA7, r12, r13, r23);
  }
}