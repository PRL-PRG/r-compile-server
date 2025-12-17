fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.getAnywhere` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg sum:cls, reg r4:V, reg n:*, reg n1:V, reg r5:V, reg c1:L, reg cat:cls, reg sQuote:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg n2:*, reg n3:V, reg r12:V, reg c3:L, reg cat1:cls, reg sQuote1:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r13:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg cat2:cls, reg r18:V, reg cat3:cls, reg paste0:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r19:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg cat4:cls, reg r24:V, reg print:cls, reg x17:*, reg x18:V, reg c6:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r25:V, reg c7:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __:cls, reg r26:V, reg p6:p(V +), reg r28:V, reg cat5:cls, reg n4:*, reg n5:V, reg p7:p(V +), reg sQuote2:cls, reg x21:*, reg x22:V, reg c8:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r30:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg r34:V, reg cat6:cls, reg r35:V, reg cat7:cls, reg paste1:cls, reg x25:*, reg x26:V, reg c9:L, reg x28:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r36:V, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg r40:V, reg cat8:cls, reg r41:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r42:V, reg r43:V, reg x29:*, reg x30:V, reg invisible:cls, reg r44:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st n = r1;
    n = ld n;
    check L13() else D2();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<lang `!`(`$`(x, dups))>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 9 [n];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L9() else L10(x2);
  L13():
    n1 = force? n;
    checkMissing(n1);
    r5 = `==`(n1, 0);
    c1 = `as.logical`(r5);
    if c1 then L14() else L1();
  L1():
    n2 = ld n;
    check L18() else D5();
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L8(dx1):
    r3 = `!`(dx1);
    sum = ldf sum in base;
    r4 = dyn sum(r3);
    check L12() else D1();
  L9():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x4):
    r2 = `$`(x4, <sym dups>);
    goto L8(r2);
  L14():
    cat = ldf cat;
    check L15() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [];
  D5():
    deopt 19 [n2];
  L4(r43):
    popenv;
    return r43;
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    goto L0(r4);
  L15():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
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
        r6 = `$`(x8, <sym name>);
        goto L0(r6);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r8 = dyn sQuote(p);
      return r8;
    };
    r10 = dyn cat("no object named", p1, "was found\n");
    check L16() else D4();
  L18():
    n3 = force? n2;
    checkMissing(n3);
    r12 = `==`(n3, 1);
    c3 = `as.logical`(r12);
    if c3 then L19() else L3();
  L39():
    x29 = ld x;
    check L41() else D24();
  L40():
    r42 = dyn base1(<sym x>);
    goto L4(r42);
  D4():
    deopt 18 [r10];
  D24():
    deopt 70 [x29];
  L3():
    cat5 = ldf cat;
    check L31() else D16();
  L16():
    goto L2();
  L19():
    cat1 = ldf cat;
    check L20() else D6();
  L41():
    x30 = force? x29;
    checkMissing(x30);
    invisible = ldf invisible in base;
    r44 = dyn invisible(x30);
    check L42() else D25();
  D6():
    deopt 24 [];
  D16():
    deopt 48 [];
  D25():
    deopt 73 [r44];
  L20():
    p3 = prom<V +>{
      sQuote1 = ldf sQuote;
      p2 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c4 = `is.object`(x10);
        if c4 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r13 = `$`(x12, <sym name>);
        goto L0(r13);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r15 = dyn sQuote1(p2);
      return r15;
    };
    r17 = dyn cat1("A single object matching", p3, "was found\n");
    check L21() else D7();
  L31():
    p7 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    p9 = prom<V +>{
      sQuote2 = ldf sQuote;
      p8 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c8 = `is.object`(x22);
        if c8 then L1() else L2(x22);
      L0(dx15):
        return dx15;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x22);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x24):
        r30 = `$`(x24, <sym name>);
        goto L0(r30);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx14);
      };
      r32 = dyn sQuote2(p8);
      return r32;
    };
    r34 = dyn cat5(p7, "differing objects matching", p9, "were found\n");
    check L32() else D17();
  L42():
    goto L4(r44);
  D7():
    deopt 28 [r17];
  D17():
    deopt 53 [r34];
  L21():
    cat2 = ldf cat;
    check L22() else D8();
  L32():
    cat6 = ldf cat;
    check L33() else D18();
  D8():
    deopt 30 [];
  D18():
    deopt 55 [];
  L22():
    r18 = dyn cat2("It was found in the following places\n");
    check L23() else D9();
  L33():
    r35 = dyn cat6("in the following places\n");
    check L34() else D19();
  D9():
    deopt 32 [r18];
  D19():
    deopt 57 [r35];
  L23():
    cat3 = ldf cat;
    check L24() else D10();
  L34():
    cat7 = ldf cat;
    check L35() else D20();
  D10():
    deopt 34 [];
  D20():
    deopt 59 [];
  L24():
    p5 = prom<V +>{
      paste0 = ldf paste0;
      p4 = prom<V +>{
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
        r19 = `$`(x16, <sym where>);
        goto L0(r19);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r21 = dyn paste0("  ", p4);
      return r21;
    };
    r23 = dyn cat3[, sep](p5, "\n");
    check L25() else D11();
  L35():
    p11 = prom<V +>{
      paste1 = ldf paste0;
      p10 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        c9 = `is.object`(x26);
        if c9 then L1() else L2(x26);
      L0(dx17):
        return dx17;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x26);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x28):
        r36 = `$`(x28, <sym where>);
        goto L0(r36);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx16);
      };
      r38 = dyn paste1("  ", p10);
      return r38;
    };
    r40 = dyn cat7[, sep](p11, "\n");
    check L36() else D21();
  D11():
    deopt 38 [r23];
  D21():
    deopt 63 [r40];
  L25():
    cat4 = ldf cat;
    check L26() else D12();
  L36():
    cat8 = ldf cat;
    check L37() else D22();
  D12():
    deopt 40 [];
  D22():
    deopt 65 [];
  L26():
    r24 = dyn cat4("with value\n\n");
    check L27() else D13();
  L37():
    r41 = dyn cat8("Use [] to view one of them\n");
    check L38() else D23();
  D13():
    deopt 42 [r24];
  D23():
    deopt 67 [r41];
  L27():
    print = ldf print;
    check L28() else D14();
  L38():
    goto L2();
  D14():
    deopt 44 [];
  L28():
    p6 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c6 = `is.object`(x18);
      if c6 then L2() else L3(x18);
    L1(dx9):
      c7 = `is.object`(dx9);
      if c7 then L5() else L6(dx9);
    L2():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(x20):
      r25 = `$`(x20, <sym objs>);
      goto L1(r25);
    L0(dx13):
      return dx13;
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    L5():
      dr10 = tryDispatchBuiltin.1("[[", dx9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(dr10);
    L6(dx11):
      __ = ldf `[[` in base;
      r26 = dyn __(dx11, 1);
      goto L0(r26);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    r28 = dyn print(p6);
    check L29() else D15();
  D15():
    deopt 46 [r28];
  L29():
    goto L2();
  }
}