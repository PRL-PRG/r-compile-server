fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3961809445;
    st `print.prcomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3961809445(x, `print.x`, `...`) {
  (reg x:*, reg print_x:*, reg ddd:dots) -+> V { var x:*, var `print.x`:*, reg print_x_isMissing:L, reg print_x_orDefault:*, var `...`:dots?, reg cat:cls, reg sprintf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg print:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p2:p(V +), reg ddd1:dots?, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg dim:cls, reg r14:V, reg cat1:cls, reg sprintf1:cls, reg d:*, reg d1:V, reg c3:L, reg d3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r15:V, reg p3:p(V +), reg d4:*, reg d5:V, reg c4:L, reg d7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg print1:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r22:V, reg p6:p(V +), reg ddd2:dots?, reg r24:V, reg print_x1:*, reg print_x2:V, reg c6:L, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg c11:L, reg r26:V, reg x17:*, reg x18:V, reg c12:L, reg c14:L, reg x20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c16:L, reg dx13:V, reg r27:V, reg length1:cls, reg r28:V, reg c17:L, reg c18:V, reg c20:L, reg cat2:cls, reg r29:V, reg print2:cls, reg x21:*, reg x22:V, reg c21:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r30:V, reg p7:p(V +), reg ddd3:dots?, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg x25:*, reg x26:V, reg invisible:cls, reg r36:V |
    mkenv;
    st x = x;
    print_x_isMissing = missing.0(print_x);
    if print_x_isMissing then L0(FALSE) else L0(print_x);
  L0(print_x_orDefault):
    st `print.x` = print_x_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        sym = ldf length;
        base = ldf length in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L4() else L5(x2);
      L2():
        r = dyn base(<lang `$`(x, sdev)>);
        goto L0(r);
      L3(dx1):
        length = ldf length in base;
        r3 = dyn length(dx1);
        goto L0(r3);
      L4():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(x4):
        r2 = `$`(x4, <sym sdev>);
        goto L3(r2);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L3(dx);
      };
      r5 = dyn sprintf("Standard deviations (1, .., p=%d):\n", p);
      return r5;
    };
    r7 = dyn cat(p1);
    check L8() else D1();
  D1():
    deopt 3 [r7];
  L8():
    print = ldf print;
    check L9() else D2();
  D2():
    deopt 5 [];
  L9():
    p2 = prom<V +>{
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
      r8 = `$`(x8, <sym sdev>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    ddd1 = ld `...`;
    r10 = dyn print[, `...`](p2, ddd1);
    check L10() else D3();
  D3():
    deopt 8 [r10];
  L10():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L1(r12):
    st d = r12;
    cat1 = ldf cat;
    check L19() else D6();
  L11():
    x9 = ld x;
    check L13() else D4();
  L12():
    r11 = dyn base1(<lang `$`(x, rotation)>);
    goto L1(r11);
  D4():
    deopt 11 [x9];
  D6():
    deopt 18 [];
  L13():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L15() else L16(x10);
  L19():
    p5 = prom<V +>{
      sprintf1 = ldf sprintf;
      p3 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        c3 = `is.object`(d1);
        if c3 then L1() else L2(d1);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", d1);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(d3):
        __ = ldf `[` in base;
        r15 = dyn __(d3, 1.0);
        goto L0(r15);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p4 = prom<V +>{
        d4 = ld d;
        d5 = force? d4;
        checkMissing(d5);
        c4 = `is.object`(d5);
        if c4 then L1() else L2(d5);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", d5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(d7):
        __1 = ldf `[` in base;
        r17 = dyn __1(d7, 2.0);
        goto L0(r17);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r19 = dyn sprintf1("\nRotation (n x k) = (%d x %d):\n", p3, p4);
      return r19;
    };
    r21 = dyn cat1(p5);
    check L20() else D7();
  D7():
    deopt 20 [r21];
  L14(dx5):
    dim = ldf dim in base;
    r14 = dyn dim(dx5);
    check L18() else D5();
  L15():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L17() else L16(dr4);
  L16(x12):
    r13 = `$`(x12, <sym rotation>);
    goto L14(r13);
  L20():
    print1 = ldf print;
    check L21() else D8();
  D5():
    deopt 15 [r14];
  D8():
    deopt 22 [];
  L17():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L18():
    goto L1(r14);
  L21():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c5 = `is.object`(x14);
      if c5 then L1() else L2(x14);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x16):
      r22 = `$`(x16, <sym rotation>);
      goto L0(r22);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    ddd2 = ld `...`;
    r24 = dyn print1[, `...`](p6, ddd2);
    check L22() else D9();
  D9():
    deopt 25 [r24];
  L22():
    print_x1 = ld `print.x`;
    check L23() else D10();
  D10():
    deopt 26 [print_x1];
  L23():
    print_x2 = force? print_x1;
    checkMissing(print_x2);
    c6 = `as.logical`(print_x2);
    if c6 then L24() else L2(c6);
  L2(c8):
    c20 = `as.logical`(c8);
    if c20 then L34() else L4();
  L24():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L3(c11, r26):
    c17 = `as.logical`(r26);
    c18 = `&&`(c11, c17);
    goto L2(c18);
  L4():
    goto L5();
  L5():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L25():
    x17 = ld x;
    check L27() else D11();
  L26():
    r25 = dyn base2(<lang `$`(x, x)>);
    goto L3(c6, r25);
  L34():
    cat2 = ldf cat;
    check L35() else D13();
  D11():
    deopt 30 [c6, x17];
  D13():
    deopt 37 [];
  L6(r35):
    popenv;
    return r35;
  L27():
    x18 = force? x17;
    checkMissing(x18);
    c12 = `is.object`(x18);
    if c12 then L29() else L30(c6, x18);
  L35():
    r29 = dyn cat2("\nRotated variables:\n");
    check L36() else D14();
  L40():
    x25 = ld x;
    check L42() else D17();
  L41():
    r34 = dyn base3(<sym x>);
    goto L6(r34);
  D14():
    deopt 39 [r29];
  D17():
    deopt 49 [x25];
  L28(c16, dx13):
    length1 = ldf length in base;
    r28 = dyn length1(dx13);
    check L32() else D12();
  L29():
    dr12 = tryDispatchBuiltin.1("$", x18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L31() else L30(c6, dr12);
  L30(c14, x20):
    r27 = `$`(x20, <sym x>);
    goto L28(c14, r27);
  L36():
    print2 = ldf print;
    check L37() else D15();
  L42():
    x26 = force? x25;
    checkMissing(x26);
    invisible = ldf invisible in base;
    r36 = dyn invisible(x26);
    check L43() else D18();
  D12():
    deopt 34 [c16, r28];
  D15():
    deopt 41 [];
  D18():
    deopt 52 [r36];
  L31():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L28(c6, dx12);
  L32():
    goto L3(c16, r28);
  L37():
    p7 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c21 = `is.object`(x22);
      if c21 then L1() else L2(x22);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x24):
      r30 = `$`(x24, <sym x>);
      goto L0(r30);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    ddd3 = ld `...`;
    r32 = dyn print2[, `...`](p7, ddd3);
    check L38() else D16();
  L43():
    goto L6(r36);
  D16():
    deopt 44 [r32];
  L38():
    goto L5();
  }
}