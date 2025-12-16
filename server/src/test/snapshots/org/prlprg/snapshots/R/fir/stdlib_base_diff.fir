fun main() {
  () -+> V { reg r:cls, reg diff:cls, reg p:p(V +), reg r2:V, reg diff1:cls, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg cumsum:cls, reg r9:V, reg cumsum1:cls, reg r10:V, reg diff2:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r12:V, reg diff3:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r14:V, reg diff4:cls, reg _leap_seconds:*, reg _leap_seconds1:V, reg p4:p(V +), reg r16:V, reg diff5:cls, reg _leap_seconds2:*, reg _leap_seconds3:V, reg p5:p(V +), reg r18:V, reg diff6:cls, reg as_Date:cls, reg _leap_seconds4:*, reg _leap_seconds5:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V |
    mkenv;
    r = clos `inner-103057629`;
    st diff = r;
    diff = ldf diff;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r2 = dyn diff(p, 2.0);
    check L3() else D1();
  D1():
    deopt 7 [r2];
  L3():
    diff1 = ldf diff;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r4 = dyn diff1(p1, 2.0, 2.0);
    check L5() else D3();
  D3():
    deopt 13 [r4];
  L5():
    sym = ldf cumsum;
    base = ldf cumsum in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r6):
    st x = r6;
    diff2 = ldf diff;
    check L12() else D6();
  L6():
    sym1 = ldf cumsum;
    base1 = ldf cumsum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r5 = dyn base(<lang cumsum(`:`(1.0, 10.0))>);
    goto L0(r5);
  D6():
    deopt 26 [];
  L1(r8):
    cumsum1 = ldf cumsum in base;
    r10 = dyn cumsum1(r8);
    check L11() else D5();
  L8():
    cumsum = ldf cumsum in base;
    r9 = dyn cumsum(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    check L10() else D4();
  L9():
    r7 = dyn base1(<lang `:`(1.0, 10.0)>);
    goto L1(r7);
  L12():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r12 = dyn diff2[, lag](p2, 2.0);
    check L13() else D7();
  D4():
    deopt 21 [r9];
  D5():
    deopt 23 [r10];
  D7():
    deopt 30 [r12];
  L10():
    goto L1(r9);
  L11():
    goto L0(r10);
  L13():
    diff3 = ldf diff;
    check L14() else D8();
  D8():
    deopt 32 [];
  L14():
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r14 = dyn diff3[, differences](p3, 2.0);
    check L15() else D9();
  D9():
    deopt 36 [r14];
  L15():
    diff4 = ldf diff;
    check L16() else D10();
  D10():
    deopt 38 [];
  L16():
    p4 = prom<V +>{
      _leap_seconds = ld `.leap.seconds`;
      _leap_seconds1 = force? _leap_seconds;
      checkMissing(_leap_seconds1);
      return _leap_seconds1;
    };
    r16 = dyn diff4(p4);
    check L17() else D11();
  D11():
    deopt 40 [r16];
  L17():
    diff5 = ldf diff;
    check L18() else D12();
  D12():
    deopt 42 [];
  L18():
    p5 = prom<V +>{
      _leap_seconds2 = ld `.leap.seconds`;
      _leap_seconds3 = force? _leap_seconds2;
      checkMissing(_leap_seconds3);
      return _leap_seconds3;
    };
    r18 = dyn diff5[, units](p5, "weeks");
    check L19() else D13();
  D13():
    deopt 46 [r18];
  L19():
    diff6 = ldf diff;
    check L20() else D14();
  D14():
    deopt 48 [];
  L20():
    p7 = prom<V +>{
      as_Date = ldf `as.Date`;
      p6 = prom<V +>{
        _leap_seconds4 = ld `.leap.seconds`;
        _leap_seconds5 = force? _leap_seconds4;
        checkMissing(_leap_seconds5);
        return _leap_seconds5;
      };
      r20 = dyn as_Date(p6);
      return r20;
    };
    r22 = dyn diff6[, units](p7, "weeks");
    check L21() else D15();
  D15():
    deopt 52 [r22];
  L21():
    popenv;
    return r22;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("diff");
    goto L0(r2);
  L2():
    r = dyn base("diff");
    goto L0(r);
  }
}