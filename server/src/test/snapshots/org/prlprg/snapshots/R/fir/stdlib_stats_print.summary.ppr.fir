fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.summary.ppr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg print_ppr:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg cat:cls, reg r3:V, reg print:cls, reg format:cls, reg x7:*, reg x8:V, reg c1:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p1:p(V +), reg ddd2:dots?, reg r6:V, reg p2:p(V +), reg r8:V, reg cat1:cls, reg r9:V, reg print1:cls, reg format1:cls, reg x11:*, reg x12:V, reg c2:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg p3:p(V +), reg ddd3:dots?, reg r12:V, reg p4:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg x15:*, reg x16:V, reg c3:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r17:V, reg r18:V, reg any:cls, reg r19:V, reg c4:L, reg cat2:cls, reg r20:V, reg setNames:cls, reg x19:*, reg x20:V, reg c5:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r21:V, reg p5:p(V +), reg paste:cls, reg mu:*, reg mu1:V, reg r23:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg print2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg round:cls, reg r30:V, reg p8:p(V +), reg ddd4:dots?, reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg x23:*, reg x24:V, reg invisible:cls, reg r36:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    print_ppr = ldf `print.ppr`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r1 = dyn print_ppr[, `...`](p, ddd1);
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    x3 = ld x;
    check L6() else D2();
  D2():
    deopt 5 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L8() else L9(x4);
  L7(dx1):
    st mu = dx1;
    cat = ldf cat;
    check L11() else D3();
  L8():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(x6):
    r2 = `$`(x6, <sym mu>);
    goto L7(r2);
  D3():
    deopt 10 [];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    r3 = dyn cat("\nProjection direction vectors ('alpha'):\n");
    check L12() else D4();
  D4():
    deopt 12 [r3];
  L12():
    print = ldf print;
    check L13() else D5();
  D5():
    deopt 14 [];
  L13():
    p2 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        c1 = `is.object`(x8);
        if c1 then L1() else L2(x8);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x8);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x10):
        r4 = `$`(x10, <sym alpha>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      ddd2 = ld `...`;
      r6 = dyn format[, `...`](p1, ddd2);
      return r6;
    };
    r8 = dyn print[, quote](p2, FALSE);
    check L14() else D6();
  D6():
    deopt 18 [r8];
  L14():
    cat1 = ldf cat;
    check L15() else D7();
  D7():
    deopt 20 [];
  L15():
    r9 = dyn cat1("\nCoefficients of ridge terms ('beta'):\n");
    check L16() else D8();
  D8():
    deopt 22 [r9];
  L16():
    print1 = ldf print;
    check L17() else D9();
  D9():
    deopt 24 [];
  L17():
    p4 = prom<V +>{
      format1 = ldf format;
      p3 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        c2 = `is.object`(x12);
        if c2 then L1() else L2(x12);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x14):
        r10 = `$`(x14, <sym beta>);
        goto L0(r10);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      ddd3 = ld `...`;
      r12 = dyn format1[, `...`](p3, ddd3);
      return r12;
    };
    r14 = dyn print1[, quote](p4, FALSE);
    check L18() else D10();
  D10():
    deopt 28 [r14];
  L18():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r16):
    c4 = `as.logical`(r16);
    if c4 then L27() else L1();
  L19():
    x15 = ld x;
    check L21() else D11();
  L20():
    r15 = dyn base(<lang `>`(`$`(x, edf), 0.0)>);
    goto L0(r15);
  D11():
    deopt 31 [x15];
  L1():
    goto L2();
  L2():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L21():
    x16 = force? x15;
    checkMissing(x16);
    c3 = `is.object`(x16);
    if c3 then L23() else L24(x16);
  L27():
    cat2 = ldf cat;
    check L28() else D13();
  D13():
    deopt 39 [];
  L3(r35):
    popenv;
    return r35;
  L22(dx7):
    r18 = `>`(dx7, 0.0);
    any = ldf any in base;
    r19 = dyn any(r18);
    check L26() else D12();
  L23():
    dr6 = tryDispatchBuiltin.1("$", x16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L25() else L24(dr6);
  L24(x18):
    r17 = `$`(x18, <sym edf>);
    goto L22(r17);
  L28():
    r20 = dyn cat2("\nEquivalent df for ridge terms:\n");
    check L29() else D14();
  L35():
    x23 = ld x;
    check L37() else D19();
  L36():
    r34 = dyn base2(<sym x>);
    goto L3(r34);
  D12():
    deopt 37 [r19];
  D14():
    deopt 41 [r20];
  D19():
    deopt 57 [x23];
  L25():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L22(dx6);
  L26():
    goto L0(r19);
  L29():
    setNames = ldf setNames;
    check L30() else D15();
  L37():
    x24 = force? x23;
    checkMissing(x24);
    invisible = ldf invisible in base;
    r36 = dyn invisible(x24);
    check L38() else D20();
  D15():
    deopt 43 [];
  D20():
    deopt 60 [r36];
  L30():
    p5 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c5 = `is.object`(x20);
      if c5 then L1() else L2(x20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x22):
      r21 = `$`(x22, <sym edf>);
      goto L0(r21);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        mu = ld mu;
        mu1 = force? mu;
        checkMissing(mu1);
        r23 = `:`(1, mu1);
        return r23;
      };
      r25 = dyn paste("term", p6);
      return r25;
    };
    r27 = dyn setNames(p5, p7);
    check L31() else D16();
  L38():
    goto L3(r36);
  D16():
    deopt 46 [r27];
  L31():
    st edf = r27;
    print2 = ldf print;
    check L32() else D17();
  D17():
    deopt 49 [];
  L32():
    p8 = prom<V +>{
      sym1 = ldf round;
      base1 = ldf round in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      round = ldf round in base;
      r30 = dyn round(<sym edf>, 2.0);
      goto L0(r30);
    L2():
      r28 = dyn base1(<sym edf>, 2.0);
      goto L0(r28);
    };
    ddd4 = ld `...`;
    r32 = dyn print2[, `...`](p8, ddd4);
    check L33() else D18();
  D18():
    deopt 52 [r32];
  L33():
    goto L2();
  }
}