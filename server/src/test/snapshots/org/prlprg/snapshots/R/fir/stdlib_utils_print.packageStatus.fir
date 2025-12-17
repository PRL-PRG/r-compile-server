fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.packageStatus` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg r:V, reg print:cls, reg table:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r2:V, reg p:p(V +), reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r4:V, reg c3:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg ddd1:dots?, reg r9:V, reg cat1:cls, reg r10:V, reg nlevels:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r11:V, reg c5:L, reg dx15:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg r12:V, reg p3:p(V +), reg r14:V, reg c6:L, reg print1:cls, reg table1:cls, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r15:V, reg c8:L, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg r16:V, reg p4:p(V +), reg x17:*, reg x18:V, reg c9:L, reg x20:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg r18:V, reg c10:L, reg dx27:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg r19:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg ddd2:dots?, reg r23:V, reg cat2:cls, reg r25:V, reg sym:cls, reg base:cls, reg guard:L, reg r26:V, reg r27:V, reg x21:*, reg x22:V, reg invisible:cls, reg r28:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn cat("Number of installed packages:\n");
    check L4() else D1();
  D1():
    deopt 3 [r];
  L4():
    print = ldf print;
    check L5() else D2();
  D2():
    deopt 5 [];
  L5():
    p2 = prom<V +>{
      table = ldf table;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L1() else L2(x2);
      L0(dx1):
        c1 = `is.object`(dx1);
        if c1 then L5() else L6(dx1);
      L1():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x4):
        r1 = `$`(x4, <sym inst>);
        goto L0(r1);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L4(dx5):
        return dx5;
      L5():
        dr2 = tryDispatchBuiltin.1("$", dx1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L7() else L6(dr2);
      L6(dx3):
        r2 = `$`(dx3, <sym LibPath>);
        goto L4(r2);
      L7():
        dx4 = getTryDispatchBuiltinValue(dr2);
        goto L4(dx4);
      };
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c2 = `is.object`(x6);
        if c2 then L1() else L2(x6);
      L0(dx7):
        c3 = `is.object`(dx7);
        if c3 then L5() else L6(dx7);
      L1():
        dr4 = tryDispatchBuiltin.1("$", x6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x8):
        r4 = `$`(x8, <sym inst>);
        goto L0(r4);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx6);
      L4(dx11):
        return dx11;
      L5():
        dr6 = tryDispatchBuiltin.1("$", dx7);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L7() else L6(dr6);
      L6(dx9):
        r5 = `$`(dx9, <sym Status>);
        goto L4(r5);
      L7():
        dx10 = getTryDispatchBuiltinValue(dr6);
        goto L4(dx10);
      };
      r7 = dyn table(p, p1);
      return r7;
    };
    ddd1 = ld `...`;
    r9 = dyn print[, `...`](p2, ddd1);
    check L6() else D3();
  D3():
    deopt 8 [r9];
  L6():
    cat1 = ldf cat;
    check L7() else D4();
  D4():
    deopt 10 [];
  L7():
    r10 = dyn cat1("\nNumber of available packages (each package counted only once):\n");
    check L8() else D5();
  D5():
    deopt 12 [r10];
  L8():
    nlevels = ldf nlevels;
    check L9() else D6();
  D6():
    deopt 14 [];
  L9():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c4 = `is.object`(x10);
      if c4 then L1() else L2(x10);
    L0(dx13):
      c5 = `is.object`(dx13);
      if c5 then L5() else L6(dx13);
    L1():
      dr8 = tryDispatchBuiltin.1("$", x10);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x12):
      r11 = `$`(x12, <sym avail>);
      goto L0(r11);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    L4(dx17):
      return dx17;
    L5():
      dr10 = tryDispatchBuiltin.1("$", dx13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(dr10);
    L6(dx15):
      r12 = `$`(dx15, <sym Repository>);
      goto L4(r12);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L4(dx16);
    };
    r14 = dyn nlevels(p3);
    check L10() else D7();
  D7():
    deopt 16 [r14];
  L10():
    c6 = `as.logical`(r14);
    if c6 then L11() else L0();
  L0():
    cat2 = ldf cat;
    check L15() else D10();
  L1():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L11():
    print1 = ldf print;
    check L12() else D8();
  D8():
    deopt 18 [];
  D10():
    deopt 23 [];
  L2(r27):
    popenv;
    return r27;
  L12():
    p6 = prom<V +>{
      table1 = ldf table;
      p4 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c7 = `is.object`(x14);
        if c7 then L1() else L2(x14);
      L0(dx19):
        c8 = `is.object`(dx19);
        if c8 then L5() else L6(dx19);
      L1():
        dr12 = tryDispatchBuiltin.1("$", x14);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x16):
        r15 = `$`(x16, <sym avail>);
        goto L0(r15);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx18);
      L4(dx23):
        return dx23;
      L5():
        dr14 = tryDispatchBuiltin.1("$", dx19);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L7() else L6(dr14);
      L6(dx21):
        r16 = `$`(dx21, <sym Repository>);
        goto L4(r16);
      L7():
        dx22 = getTryDispatchBuiltinValue(dr14);
        goto L4(dx22);
      };
      p5 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c9 = `is.object`(x18);
        if c9 then L1() else L2(x18);
      L0(dx25):
        c10 = `is.object`(dx25);
        if c10 then L5() else L6(dx25);
      L1():
        dr16 = tryDispatchBuiltin.1("$", x18);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(x20):
        r18 = `$`(x20, <sym avail>);
        goto L0(r18);
      L3():
        dx24 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx24);
      L4(dx29):
        return dx29;
      L5():
        dr18 = tryDispatchBuiltin.1("$", dx25);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L7() else L6(dr18);
      L6(dx27):
        r19 = `$`(dx27, <sym Status>);
        goto L4(r19);
      L7():
        dx28 = getTryDispatchBuiltinValue(dr18);
        goto L4(dx28);
      };
      r21 = dyn table1(p4, p5);
      return r21;
    };
    ddd2 = ld `...`;
    r23 = dyn print1[, `...`](p6, ddd2);
    check L13() else D9();
  L15():
    r25 = dyn cat2("(no repositories)\n");
    check L16() else D11();
  L17():
    x21 = ld x;
    check L19() else D12();
  L18():
    r26 = dyn base(<sym x>);
    goto L2(r26);
  D9():
    deopt 21 [r23];
  D11():
    deopt 25 [r25];
  D12():
    deopt 28 [x21];
  L13():
    goto L1();
  L16():
    goto L1();
  L19():
    x22 = force? x21;
    checkMissing(x22);
    invisible = ldf invisible in base;
    r28 = dyn invisible(x22);
    check L20() else D13();
  D13():
    deopt 31 [r28];
  L20():
    goto L2(r28);
  }
}