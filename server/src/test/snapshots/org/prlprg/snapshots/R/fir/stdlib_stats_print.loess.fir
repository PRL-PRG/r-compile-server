fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.loess` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg c1:V, reg r9:V, reg c2:L, reg cat:cls, reg r10:V, reg dput:cls, reg cl:*, reg cl1:V, reg p1:p(V +), reg r12:V, reg cat1:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg p2:p(V +), reg r16:V, reg cat2:cls, reg format:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg round:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg cat3:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r24:V, reg c5:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r25:V, reg r26:V, reg c6:L, reg p5:p(V +), reg format1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg signif:cls, reg r30:V, reg p6:p(V +), reg r32:V, reg p7:p(V +), reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg x13:*, reg x14:V, reg invisible:cls, reg r37:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2(r7):
    r9 = `!`(r7);
    c2 = `as.logical`(r9);
    if c2 then L13() else L3();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r6 = dyn base1(<lang `<-`(cl, `$`(x, call))>);
    goto L2(r6);
  D0():
    deopt 1 [x1];
  L3():
    goto L4();
  L4():
    cat1 = ldf cat;
    check L19() else D5();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L10() else L11(x2);
  L13():
    cat = ldf cat;
    check L14() else D1();
  D1():
    deopt 8 [];
  D5():
    deopt 20 [];
  L9(dx1):
    st cl = dx1;
    c1 = `==`(dx1, NULL);
    goto L2(c1);
  L10():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x4):
    r8 = `$`(x4, <sym call>);
    goto L9(r8);
  L14():
    r10 = dyn cat("Call:\n");
    check L15() else D2();
  L19():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r14 = `$`(x8, <sym n>);
      goto L0(r14);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r16 = dyn cat1("\nNumber of Observations:", p2, "\n");
    check L20() else D6();
  D2():
    deopt 10 [r10];
  D6():
    deopt 24 [r16];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L15():
    dput = ldf dput;
    check L16() else D3();
  L20():
    cat2 = ldf cat;
    check L21() else D7();
  D3():
    deopt 12 [];
  D7():
    deopt 26 [];
  L16():
    p1 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r12 = dyn dput[, control](p1, NULL);
    check L17() else D4();
  L21():
    p4 = prom<V +>{
      format = ldf format;
      p3 = prom<V +>{
        sym2 = ldf round;
        base2 = ldf round in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r18):
        return r18;
      L1():
        round = ldf round in base;
        r19 = dyn round(<lang `$`(x, enp)>, 2);
        goto L0(r19);
      L2():
        r17 = dyn base2(<lang `$`(x, enp)>, 2);
        goto L0(r17);
      };
      r21 = dyn format(p3);
      return r21;
    };
    r23 = dyn cat2("Equivalent Number of Parameters:", p4, "\n");
    check L22() else D8();
  D4():
    deopt 16 [r12];
  D8():
    deopt 30 [r23];
  L17():
    goto L4();
  L22():
    cat3 = ldf cat;
    check L23() else D9();
  D9():
    deopt 32 [];
  L23():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c4 = `is.object`(x10);
      if c4 then L2() else L3(x10);
    L1(dx5):
      c5 = `is.object`(dx5);
      if c5 then L6() else L7(dx5);
    L2():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(x12):
      r24 = `$`(x12, <sym pars>);
      goto L1(r24);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L5(dx9):
      r26 = `==`(dx9, "gaussian");
      c6 = `as.logical`(r26);
      if c6 then L9() else L0();
    L6():
      dr6 = tryDispatchBuiltin.1("$", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L8() else L7(dr6);
    L7(dx7):
      r25 = `$`(dx7, <sym family>);
      goto L5(r25);
    L0():
      return "Scale Estimate:";
    L8():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L5(dx8);
    L9():
      return "Standard Error:";
    };
    p7 = prom<V +>{
      format1 = ldf format;
      p6 = prom<V +>{
        sym3 = ldf signif;
        base3 = ldf signif in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        signif = ldf signif in base;
        r30 = dyn signif(<lang `$`(x, s)>, <sym digits>);
        goto L0(r30);
      L2():
        r28 = dyn base3(<lang `$`(x, s)>, <sym digits>);
        goto L0(r28);
      };
      r32 = dyn format1(p6);
      return r32;
    };
    r34 = dyn cat3("Residual", p5, p7, "\n");
    check L24() else D10();
  D10():
    deopt 37 [r34];
  L24():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L25() else L26();
  L5(r36):
    popenv;
    return r36;
  L25():
    x13 = ld x;
    check L27() else D11();
  L26():
    r35 = dyn base4(<sym x>);
    goto L5(r35);
  D11():
    deopt 40 [x13];
  L27():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r37 = dyn invisible(x14);
    check L28() else D12();
  D12():
    deopt 43 [r37];
  L28():
    goto L5(r37);
  }
}