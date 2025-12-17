fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner174310025;
    st optimise = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner174310025(f, interval, `...`, lower, upper, maximum, tol) {
  (reg f:*, reg interval:*, reg ddd:dots, reg lower:*, reg upper:*, reg maximum:*, reg tol:*) -+> V { var f:*, var interval:*, var `...`:dots?, var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interval1:*, reg interval2:V, reg min:cls, reg r2:V, reg p:p(V +), var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg interval3:*, reg interval4:V, reg max:cls, reg r6:V, reg p1:p(V +), var maximum:*, reg maximum_isMissing:L, reg maximum_orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg r9:V, reg p2:p(V +), reg maximum1:*, reg maximum2:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg C_do_fmin:*, reg C_do_fmin1:V, reg r13:cls, reg lower1:*, reg lower2:V, reg upper1:*, reg upper2:V, reg tol1:*, reg tol2:V, reg _External2:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg val:*, reg val1:V, reg f1:cls, reg val2:*, reg val3:V, reg p3:p(V +), reg ddd1:dots?, reg r18:V, reg list:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg C_do_fmin2:*, reg C_do_fmin3:V, reg r22:cls, reg lower3:*, reg lower4:V, reg upper3:*, reg upper4:V, reg tol3:*, reg tol4:V, reg _External3:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg val4:*, reg val5:V, reg f2:cls, reg val6:*, reg val7:V, reg p4:p(V +), reg ddd2:dots?, reg r27:V, reg list1:cls, reg r28:V |
    mkenv;
    st f = f;
    st interval = interval;
    st `...` = ddd;
    lower_isMissing = missing.0(lower);
    if lower_isMissing then L0() else L1(lower);
  L0():
    p = prom<V +>{
      sym = ldf min;
      base = ldf min in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      interval1 = ld interval;
      interval2 = force? interval1;
      checkMissing(interval2);
      min = ldf min in base;
      r2 = dyn min(interval2);
      goto L0(r2);
    L2():
      r = dyn base(<sym interval>);
      goto L0(r);
    };
    goto L1(p);
  L1(lower_orDefault):
    st lower = lower_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L2() else L3(upper);
  L2():
    p1 = prom<V +>{
      sym1 = ldf max;
      base1 = ldf max in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      interval3 = ld interval;
      interval4 = force? interval3;
      checkMissing(interval4);
      max = ldf max in base;
      r6 = dyn max(interval4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym interval>);
      goto L0(r4);
    };
    goto L3(p1);
  L3(upper_orDefault):
    st upper = upper_orDefault;
    maximum_isMissing = missing.0(maximum);
    if maximum_isMissing then L4(FALSE) else L4(maximum);
  L4(maximum_orDefault):
    st maximum = maximum_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L5() else L6(tol);
  L5():
    p2 = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(_Machine1);
    L0(dx1):
      r9 = `^`(dx1, 0.25);
      return r9;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Machine3):
      r8 = `$`(_Machine3, <sym double.eps>);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L6(p2);
  L6(tol_orDefault):
    st tol = tol_orDefault;
    maximum1 = ld maximum;
    check L12() else D0();
  D0():
    deopt 0 [maximum1];
  L12():
    maximum2 = force? maximum1;
    checkMissing(maximum2);
    c1 = `as.logical`(maximum2);
    if c1 then L13() else L7();
  L7():
    sym4 = ldf `.External2`;
    base4 = ldf `.External2` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L13():
    sym2 = ldf `.External2`;
    base2 = ldf `.External2` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L8(r12):
    st val = r12;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L10(r21):
    st val = r21;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L14():
    C_do_fmin = ld C_do_fmin;
    check L16() else D1();
  L15():
    r11 = dyn base2(<sym C_do_fmin>, <lang function((arg=), `-`(f(arg, ...)), NULL)>, <sym lower>, <sym upper>, <sym tol>);
    goto L8(r11);
  L28():
    C_do_fmin2 = ld C_do_fmin;
    check L30() else D10();
  L29():
    r20 = dyn base4(<sym C_do_fmin>, <lang function((arg=), f(arg, ...), NULL)>, <sym lower>, <sym upper>, <sym tol>);
    goto L10(r20);
  D1():
    deopt 4 [C_do_fmin];
  D10():
    deopt 32 [C_do_fmin2];
  L9(r16):
    popenv;
    return r16;
  L11(r25):
    popenv;
    return r25;
  L16():
    C_do_fmin1 = force? C_do_fmin;
    checkMissing(C_do_fmin1);
    r13 = clos inner3031791826;
    lower1 = ld lower;
    check L17() else D2();
  L21():
    val = ld val;
    check L23() else D6();
  L22():
    r15 = dyn base3[maximum, objective](<sym val>, <lang f(val, ...)>);
    goto L9(r15);
  L30():
    C_do_fmin3 = force? C_do_fmin2;
    checkMissing(C_do_fmin3);
    r22 = clos inner3031791826;
    lower3 = ld lower;
    check L31() else D11();
  L35():
    val4 = ld val;
    check L37() else D15();
  L36():
    r24 = dyn base5[minimum, objective](<sym val>, <lang f(val, ...)>);
    goto L11(r24);
  D2():
    deopt 8 [lower1];
  D6():
    deopt 19 [val];
  D11():
    deopt 36 [lower3];
  D15():
    deopt 47 [val4];
  L17():
    lower2 = force? lower1;
    checkMissing(lower2);
    upper1 = ld upper;
    check L18() else D3();
  L23():
    val1 = force? val;
    checkMissing(val1);
    f1 = ldf f;
    check L24() else D7();
  L31():
    lower4 = force? lower3;
    checkMissing(lower4);
    upper3 = ld upper;
    check L32() else D12();
  L37():
    val5 = force? val4;
    checkMissing(val5);
    f2 = ldf f;
    check L38() else D16();
  D3():
    deopt 10 [upper1];
  D7():
    deopt 23 [];
  D12():
    deopt 38 [upper3];
  D16():
    deopt 51 [];
  L18():
    upper2 = force? upper1;
    checkMissing(upper2);
    tol1 = ld tol;
    check L19() else D4();
  L24():
    p3 = prom<V +>{
      val2 = ld val;
      val3 = force? val2;
      checkMissing(val3);
      return val3;
    };
    ddd1 = ld `...`;
    r18 = dyn f1[, `...`](p3, ddd1);
    check L25() else D8();
  L32():
    upper4 = force? upper3;
    checkMissing(upper4);
    tol3 = ld tol;
    check L33() else D13();
  L38():
    p4 = prom<V +>{
      val6 = ld val;
      val7 = force? val6;
      checkMissing(val7);
      return val7;
    };
    ddd2 = ld `...`;
    r27 = dyn f2[, `...`](p4, ddd2);
    check L39() else D17();
  D4():
    deopt 12 [tol1];
  D8():
    deopt 26 [r18];
  D13():
    deopt 40 [tol3];
  D17():
    deopt 54 [r27];
  L19():
    tol2 = force? tol1;
    checkMissing(tol2);
    _External2 = ldf `.External2` in base;
    r14 = dyn _External2(C_do_fmin1, r13, lower2, upper2, tol2);
    check L20() else D5();
  L25():
    list = ldf list in base;
    r19 = dyn list(val1, r18);
    check L26() else D9();
  L33():
    tol4 = force? tol3;
    checkMissing(tol4);
    _External3 = ldf `.External2` in base;
    r23 = dyn _External3(C_do_fmin3, r22, lower4, upper4, tol4);
    check L34() else D14();
  L39():
    list1 = ldf list in base;
    r28 = dyn list1(val5, r27);
    check L40() else D18();
  D5():
    deopt 15 [r14];
  D9():
    deopt 29 [r19];
  D14():
    deopt 43 [r23];
  D18():
    deopt 57 [r28];
  L20():
    goto L8(r14);
  L26():
    goto L9(r19);
  L34():
    goto L10(r23);
  L40():
    goto L11(r28);
  }
}
fun inner3031791826(arg) {
  (reg arg:*) -+> V { var arg:*, reg f:cls, reg arg1:*, reg arg2:V, reg p:p(V +), reg ddd:*, reg r1:V, reg r2:V |
    mkenv;
    st arg = arg;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      arg1 = ld arg;
      arg2 = force? arg1;
      checkMissing(arg2);
      return arg2;
    };
    ddd = ld `...`;
    r1 = dyn f[, `...`](p, ddd);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    r2 = `-`(<missing>, r1);
    popenv;
    return r2;
  }
}