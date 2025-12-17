fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.summary.manova` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg length:cls, reg r5:V, reg c1:L, reg print_anova:cls, reg stats:*, reg stats1:V, reg p1:p(V +), reg r7:V, reg cat:cls, reg r9:V, reg print:cls, reg data_frame:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg p2:p(V +), reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg x13:*, reg x14:V, reg invisible:cls, reg r19:V |
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
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r3):
    c1 = `as.logical`(r3);
    if c1 then L14() else L3();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r2 = dyn base(<lang `<-`(stats, `$`(x, stats))>);
    goto L2(r2);
  D0():
    deopt 2 [x1];
  L3():
    cat = ldf cat;
    check L18() else D4();
  L4():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L10() else L11(x2);
  L14():
    print_anova = ldf `print.anova`;
    check L15() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 13 [];
  L5(r18):
    popenv;
    return r18;
  L9(dx1):
    st stats = dx1;
    length = ldf length in base;
    r5 = dyn length(dx1);
    check L13() else D1();
  L10():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x4):
    r4 = `$`(x4, <sym stats>);
    goto L9(r4);
  L15():
    p1 = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r7 = dyn print_anova(p1);
    check L16() else D3();
  L18():
    r9 = dyn cat("No error degrees of freedom\n\n");
    check L19() else D5();
  L22():
    x13 = ld x;
    check L24() else D8();
  L23():
    r17 = dyn base1(<sym x>);
    goto L5(r17);
  D1():
    deopt 7 [r5];
  D3():
    deopt 11 [r7];
  D5():
    deopt 15 [r9];
  D8():
    deopt 22 [x13];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    goto L2(r5);
  L16():
    goto L4();
  L19():
    print = ldf print;
    check L20() else D6();
  L24():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r19 = dyn invisible(x14);
    check L25() else D9();
  D6():
    deopt 17 [];
  D9():
    deopt 25 [r19];
  L20():
    p4 = prom<V +>{
      data_frame = ldf `data.frame`;
      p2 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c2 = `is.object`(x6);
        if c2 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        r10 = `$`(x8, <sym Df>);
        goto L0(r10);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p3 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c3 = `is.object`(x10);
        if c3 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r12 = `$`(x12, <sym row.names>);
        goto L0(r12);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r14 = dyn data_frame[Df, `row.names`](p2, p3);
      return r14;
    };
    r16 = dyn print(p4);
    check L21() else D7();
  L25():
    goto L5(r19);
  D7():
    deopt 19 [r16];
  L21():
    goto L4();
  }
}