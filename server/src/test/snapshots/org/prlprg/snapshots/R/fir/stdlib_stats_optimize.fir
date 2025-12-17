fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg r5:cls, reg optimize:cls, reg f:*, reg f1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p2:p(V +), reg p3:p(V +), reg r12:V, reg xmin:*, reg xmin1:V, reg optimize1:cls, reg r13:cls, reg p4:p(V +), reg r15:V, reg r16:cls, reg r17:cls, reg plot:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg p6:p(V +), reg p7:p(V +), reg r21:V, reg optimize2:cls, reg fp:*, reg fp1:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg c1:cls, reg r25:V, reg p9:p(V +), reg r27:V, reg optimize3:cls, reg fp2:*, reg fp3:V, reg p10:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg c2:cls, reg r31:V, reg p11:p(V +), reg r33:V |
    mkenv;
    r = clos inner174310025;
    st optimize = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    r5 = clos inner741670229;
    st f = r5;
    optimize = ldf optimize;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 12 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c(0.0, 1.0);
      goto L0(r9);
    L2():
      r7 = dyn base1(0.0, 1.0);
      goto L0(r7);
    };
    p3 = prom<V +>{
      return 0.3333333333333333;
    };
    r12 = dyn optimize[, , tol, a](p1, p2, 1.0E-4, p3);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 19 [r12];
  L4():
    goto L0();
  L6():
    st xmin = r12;
    xmin = ld xmin;
    check L7() else D4();
  D4():
    deopt 21 [xmin];
  L7():
    xmin1 = force? xmin;
    checkMissing(xmin1);
    optimize1 = ldf optimize;
    check L8() else D5();
  D5():
    deopt 24 [];
  L8():
    p4 = prom<V +>{
      r13 = clos inner2501545716;
      return r13;
    };
    r15 = dyn optimize1[, lower, upper](p4, 0.0, 10.0);
    check L9() else D6();
  D6():
    deopt 30 [r15];
  L9():
    r16 = clos inner2501545716;
    st f = r16;
    r17 = clos inner2501545716;
    st fp = r17;
    plot = ldf plot;
    check L10() else D7();
  D7():
    deopt 38 [];
  L10():
    p5 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p6 = prom<V +>{
      return -2.0;
    };
    p7 = prom<V +>{
      return <int 0, 1>;
    };
    r21 = dyn plot[, , , ylim, col](p5, p6, 5.0, p7, 2.0);
    check L11() else D8();
  D8():
    deopt 46 [r21];
  L11():
    optimize2 = ldf optimize;
    check L12() else D9();
  D9():
    deopt 48 [];
  L12():
    p8 = prom<V +>{
      fp = ld fp;
      fp1 = force? fp;
      checkMissing(fp1);
      return fp1;
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      c1 = ldf c in base;
      r25 = dyn c1(-4.0, 20.0);
      goto L0(r25);
    L2():
      r23 = dyn base2(<lang `-`(4.0)>, 20.0);
      goto L0(r23);
    };
    r27 = dyn optimize2(p8, p9);
    check L13() else D10();
  D10():
    deopt 51 [r27];
  L13():
    optimize3 = ldf optimize;
    check L14() else D11();
  D11():
    deopt 53 [];
  L14():
    p10 = prom<V +>{
      fp2 = ld fp;
      fp3 = force? fp2;
      checkMissing(fp3);
      return fp3;
    };
    p11 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c2 = ldf c in base;
      r31 = dyn c2(-7.0, 20.0);
      goto L0(r31);
    L2():
      r29 = dyn base3(<lang `-`(7.0)>, 20.0);
      goto L0(r29);
    };
    r33 = dyn optimize3(p10, p11);
    check L15() else D12();
  D12():
    deopt 56 [r33];
  L15():
    popenv;
    return r33;
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
fun inner741670229(x, a) {
  (reg x:*, reg a:*) -+> V { var x:*, var a:*, reg x1:*, reg x2:V, reg a1:*, reg a2:V, reg r:V, reg r1:V |
    mkenv;
    st x = x;
    st a = a;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    a1 = ld a;
    check L1() else D1();
  D1():
    deopt 1 [x2, a1];
  L1():
    a2 = force? a1;
    checkMissing(a2);
    r = `-`(x2, a2);
    r1 = `^`(r, 2.0);
    popenv;
    return r1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V, reg print:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r2:V, reg r3:V, reg r4:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `^`(x2, 2.0);
    print = ldf print;
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r2 = dyn print(p);
    check L2() else D2();
  D2():
    deopt 6 [r, r2];
  L2():
    r3 = `-`(r2, 1.0);
    r4 = `*`(r, r3);
    popenv;
    return r4;
  }
}