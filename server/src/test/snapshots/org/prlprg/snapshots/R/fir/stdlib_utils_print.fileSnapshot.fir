fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3928207482;
    st `print.fileSnapshot` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3928207482(x, verbose, `...`) {
  (reg x:*, reg verbose:*, reg ddd:dots) -+> V { var x:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var `...`:dots?, reg cat:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r4:V, reg p2:p(V +), reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r6:V, reg p3:p(V +), reg deparse:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg x21:*, reg x22:V, reg c5:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r12:V, reg p6:p(V +), reg deparse1:cls, reg x25:*, reg x26:V, reg c6:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r14:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg nrow:cls, reg x29:*, reg x30:V, reg c7:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r18:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V, reg verbose1:*, reg verbose2:V, reg c8:L, reg ncol:cls, reg x33:*, reg x34:V, reg c9:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r23:V, reg p11:p(V +), reg r25:V, reg c10:L, reg print:cls, reg x37:*, reg x38:V, reg c11:L, reg x40:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r26:V, reg p12:p(V +), reg r28:V, reg r29:V, reg cat1:cls, reg rownames:cls, reg x41:*, reg x42:V, reg c12:L, reg x44:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r30:V, reg p13:p(V +), reg r32:V, reg p14:p(V +), reg r34:V, reg sym:cls, reg base:cls, reg guard:L, reg r36:V, reg r37:V, reg x45:*, reg x46:V, reg invisible:cls, reg r38:V |
    mkenv;
    st x = x;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r = `$`(x4, <sym path>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r2 = `$`(x8, <sym timestamp>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r4 = `$`(x12, <sym file.info>);
      goto L0(r4);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r6 = `$`(x16, <sym md5sum>);
      goto L0(r6);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p5 = prom<V +>{
      deparse = ldf deparse;
      p4 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c4 = `is.object`(x18);
        if c4 then L1() else L2(x18);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", x18);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(x20):
        r8 = `$`(x20, <sym digest>);
        goto L0(r8);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r10 = dyn deparse[, control](p4, NULL);
      return r10;
    };
    p6 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c5 = `is.object`(x22);
      if c5 then L1() else L2(x22);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x24):
      r12 = `$`(x24, <sym full.names>);
      goto L0(r12);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p8 = prom<V +>{
      deparse1 = ldf deparse;
      p7 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        c6 = `is.object`(x26);
        if c6 then L1() else L2(x26);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x26);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x28):
        r14 = `$`(x28, <sym args>);
        goto L0(r14);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r16 = dyn deparse1[, control](p7, NULL);
      return r16;
    };
    p10 = prom<V +>{
      nrow = ldf nrow;
      p9 = prom<V +>{
        x29 = ld x;
        x30 = force? x29;
        checkMissing(x30);
        c7 = `is.object`(x30);
        if c7 then L1() else L2(x30);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x30);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x32):
        r18 = `$`(x32, <sym info>);
        goto L0(r18);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r20 = dyn nrow(p9);
      return r20;
    };
    r22 = dyn cat[, , , , , , , , , , , , , , , , , sep]("File snapshot:\n path = ", p, "\n timestamp = ", p1, "\n file.info = ", p2, "\n md5sum = ", p3, "\n digest = ", p5, "\n full.names = ", p6, "\n args = ", p8, "\n ", p10, " files recorded.\n", "");
    check L7() else D1();
  D1():
    deopt 21 [r22];
  L7():
    verbose1 = ld verbose;
    check L8() else D2();
  D2():
    deopt 22 [verbose1];
  L8():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c8 = `as.logical`(verbose2);
    if c8 then L9() else L1();
  L1():
    goto L4();
  L4():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L9():
    ncol = ldf ncol;
    check L10() else D3();
  D3():
    deopt 25 [];
  L5(r37):
    popenv;
    return r37;
  L10():
    p11 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c9 = `is.object`(x34);
      if c9 then L1() else L2(x34);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x34);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x36):
      r23 = `$`(x36, <sym info>);
      goto L0(r23);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r25 = dyn ncol(p11);
    check L11() else D4();
  L19():
    x45 = ld x;
    check L21() else D9();
  L20():
    r36 = dyn base(<sym x>);
    goto L5(r36);
  D4():
    deopt 27 [r25];
  D9():
    deopt 43 [x45];
  L11():
    c10 = `as.logical`(r25);
    if c10 then L12() else L2();
  L21():
    x46 = force? x45;
    checkMissing(x46);
    invisible = ldf invisible in base;
    r38 = dyn invisible(x46);
    check L22() else D10();
  D10():
    deopt 46 [r38];
  L2():
    cat1 = ldf cat;
    check L16() else D7();
  L3(r29):
    goto L4();
  L12():
    print = ldf print;
    check L13() else D5();
  L22():
    goto L5(r38);
  D5():
    deopt 29 [];
  D7():
    deopt 33 [];
  L13():
    p12 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c11 = `is.object`(x38);
      if c11 then L1() else L2(x38);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", x38);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x40):
      r26 = `$`(x40, <sym info>);
      goto L0(r26);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r28 = dyn print(p12);
    check L14() else D6();
  L16():
    p14 = prom<V +>{
      rownames = ldf rownames;
      p13 = prom<V +>{
        x41 = ld x;
        x42 = force? x41;
        checkMissing(x42);
        c12 = `is.object`(x42);
        if c12 then L1() else L2(x42);
      L0(dx21):
        return dx21;
      L1():
        dr20 = tryDispatchBuiltin.1("$", x42);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(x44):
        r30 = `$`(x44, <sym info>);
        goto L0(r30);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx20);
      };
      r32 = dyn rownames(p13);
      return r32;
    };
    r34 = dyn cat1[, , sep]("Files:", p14, "\n ");
    check L17() else D8();
  D6():
    deopt 31 [r28];
  D8():
    deopt 38 [r34];
  L14():
    goto L3(r28);
  L17():
    goto L3(r34);
  }
}