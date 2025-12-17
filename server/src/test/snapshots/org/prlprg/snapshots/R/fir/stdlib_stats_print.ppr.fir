fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.ppr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg cat:cls, reg r4:V, reg dput:cls, reg cl:*, reg cl1:V, reg p:p(V +), reg r6:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r9:V, reg cat1:cls, reg r10:V, reg setNames:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r11:V, reg p1:p(V +), reg paste:cls, reg ml:*, reg ml1:V, reg r13:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg print:cls, reg format:cls, reg gof:*, reg gof1:V, reg c6:L, reg gof3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg mu:*, reg mu1:V, reg ml2:*, reg ml3:V, reg r18:V, reg __:cls, reg r19:V, reg p4:p(V +), reg ddd1:dots?, reg r21:V, reg p5:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg x17:*, reg x18:V, reg invisible:cls, reg r26:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L11() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(cl, `$`(x, call))>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L2();
  L2():
    x5 = ld x;
    check L17() else D5();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L8() else L9(x2);
  L11():
    cat = ldf cat;
    check L12() else D1();
  D1():
    deopt 8 [];
  D5():
    deopt 19 [x5];
  L7(dx1):
    st cl = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L8():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(x4):
    r2 = `$`(x4, <sym call>);
    goto L7(r2);
  L12():
    r4 = dyn cat("Call:\n");
    check L13() else D2();
  L17():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L19() else L20(x6);
  D2():
    deopt 10 [r4];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L13():
    dput = ldf dput;
    check L14() else D3();
  L18(dx3):
    st mu = dx3;
    x9 = ld x;
    check L22() else D6();
  L19():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(x8):
    r8 = `$`(x8, <sym mu>);
    goto L18(r8);
  D3():
    deopt 12 [];
  D6():
    deopt 23 [x9];
  L14():
    p = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r6 = dyn dput[, control](p, NULL);
    check L15() else D4();
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L22():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L24() else L25(x10);
  D4():
    deopt 16 [r6];
  L15():
    goto L2();
  L23(dx5):
    st ml = dx5;
    cat1 = ldf cat;
    check L27() else D7();
  L24():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(x12):
    r9 = `$`(x12, <sym ml>);
    goto L23(r9);
  D7():
    deopt 28 [];
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L23(dx4);
  L27():
    r10 = dyn cat1("\nGoodness of fit:\n");
    check L28() else D8();
  D8():
    deopt 30 [r10];
  L28():
    setNames = ldf setNames;
    check L29() else D9();
  D9():
    deopt 32 [];
  L29():
    p1 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c5 = `is.object`(x14);
      if c5 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r11 = `$`(x16, <sym gofn>);
      goto L0(r11);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        ml = ld ml;
        ml1 = force? ml;
        checkMissing(ml1);
        r13 = `:`(1, ml1);
        return r13;
      };
      r15 = dyn paste(p2, "terms");
      return r15;
    };
    r17 = dyn setNames(p1, p3);
    check L30() else D10();
  D10():
    deopt 35 [r17];
  L30():
    st gof = r17;
    print = ldf print;
    check L31() else D11();
  D11():
    deopt 38 [];
  L31():
    p5 = prom<V +>{
      format = ldf format;
      p4 = prom<V +>{
        gof = ld gof;
        gof1 = force? gof;
        checkMissing(gof1);
        c6 = `is.object`(gof1);
        if c6 then L1() else L2(gof1);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", gof1);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(gof3):
        mu = ld mu;
        mu1 = force? mu;
        checkMissing(mu1);
        ml2 = ld ml;
        ml3 = force? ml2;
        checkMissing(ml3);
        r18 = `:`(mu1, ml3);
        __ = ldf `[` in base;
        r19 = dyn __(gof3, r18);
        goto L0(r19);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      ddd1 = ld `...`;
      r21 = dyn format[, `...`](p4, ddd1);
      return r21;
    };
    r23 = dyn print[, quote](p5, FALSE);
    check L32() else D12();
  D12():
    deopt 42 [r23];
  L32():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L3(r25):
    popenv;
    return r25;
  L33():
    x17 = ld x;
    check L35() else D13();
  L34():
    r24 = dyn base1(<sym x>);
    goto L3(r24);
  D13():
    deopt 45 [x17];
  L35():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r26 = dyn invisible(x18);
    check L36() else D14();
  D14():
    deopt 48 [r26];
  L36():
    goto L3(r26);
  }
}