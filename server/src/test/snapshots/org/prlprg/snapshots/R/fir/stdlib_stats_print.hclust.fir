fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.hclust` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg cat:cls, reg deparse:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg c5:V, reg r13:V, reg c6:L, reg cat1:cls, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r14:V, reg p2:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x17:*, reg x18:V, reg c8:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r20:V, reg c9:V, reg r21:V, reg c10:L, reg cat2:cls, reg x21:*, reg x22:V, reg c11:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r22:V, reg p3:p(V +), reg r24:V, reg cat3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg x25:*, reg x26:V, reg c12:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r28:V, reg length:cls, reg r29:V, reg r30:V, reg p4:p(V +), reg r32:V, reg cat4:cls, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg x29:*, reg x30:V, reg invisible:cls, reg r36:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L17() else L1();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<lang `$`(x, call)>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L2();
  L2():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L14() else L15(x2);
  L17():
    cat = ldf cat;
    check L18() else D1();
  D1():
    deopt 7 [];
  L3(r11):
    r13 = `!`(r11);
    c6 = `as.logical`(r13);
    if c6 then L28() else L4();
  L13(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L14():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(x4):
    r2 = `$`(x4, <sym call>);
    goto L13(r2);
  L18():
    p1 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
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
        r4 = `$`(x8, <sym call>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r6 = dyn deparse(p);
      return r6;
    };
    r8 = dyn cat[, , , sep]("\nCall:\n", p1, "\n\n", "");
    check L19() else D2();
  L21():
    x9 = ld x;
    check L23() else D3();
  L22():
    r10 = dyn base1(<lang `$`(x, method)>);
    goto L3(r10);
  D2():
    deopt 13 [r8];
  D3():
    deopt 17 [x9];
  L4():
    goto L5();
  L5():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L19():
    goto L2();
  L23():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L25() else L26(x10);
  L28():
    cat1 = ldf cat;
    check L29() else D4();
  D4():
    deopt 23 [];
  L6(r19):
    r21 = `!`(r19);
    c10 = `as.logical`(r21);
    if c10 then L39() else L7();
  L24(dx5):
    c5 = `==`(dx5, NULL);
    goto L3(c5);
  L25():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26(dr4);
  L26(x12):
    r12 = `$`(x12, <sym method>);
    goto L24(r12);
  L29():
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c7 = `is.object`(x14);
      if c7 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r14 = `$`(x16, <sym method>);
      goto L0(r14);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r16 = dyn cat1("Cluster method   :", p2, "\n");
    check L30() else D5();
  L32():
    x17 = ld x;
    check L34() else D6();
  L33():
    r18 = dyn base2(<lang `$`(x, dist.method)>);
    goto L6(r18);
  D5():
    deopt 27 [r16];
  D6():
    deopt 31 [x17];
  L7():
    goto L8();
  L8():
    cat3 = ldf cat;
    check L43() else D9();
  L27():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx4);
  L30():
    goto L5();
  L34():
    x18 = force? x17;
    checkMissing(x18);
    c8 = `is.object`(x18);
    if c8 then L36() else L37(x18);
  L39():
    cat2 = ldf cat;
    check L40() else D7();
  D7():
    deopt 37 [];
  D9():
    deopt 45 [];
  L35(dx9):
    c9 = `==`(dx9, NULL);
    goto L6(c9);
  L36():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L38() else L37(dr8);
  L37(x20):
    r20 = `$`(x20, <sym dist.method>);
    goto L35(r20);
  L40():
    p3 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c11 = `is.object`(x22);
      if c11 then L1() else L2(x22);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x24):
      r22 = `$`(x24, <sym dist.method>);
      goto L0(r22);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r24 = dyn cat2("Distance         :", p3, "\n");
    check L41() else D8();
  L43():
    p4 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      r30 = `+`(r27, 1.0);
      return r30;
    L1():
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c12 = `is.object`(x26);
      if c12 then L4() else L5(x26);
    L2():
      r26 = dyn base3(<lang `$`(x, height)>);
      goto L0(r26);
    L3(dx13):
      length = ldf length in base;
      r29 = dyn length(dx13);
      goto L0(r29);
    L4():
      dr12 = tryDispatchBuiltin.1("$", x26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L6() else L5(dr12);
    L5(x28):
      r28 = `$`(x28, <sym height>);
      goto L3(r28);
    L6():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L3(dx12);
    };
    r32 = dyn cat3("Number of objects:", p4, "\n");
    check L44() else D10();
  D8():
    deopt 41 [r24];
  D10():
    deopt 49 [r32];
  L38():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L35(dx8);
  L41():
    goto L8();
  L44():
    cat4 = ldf cat;
    check L45() else D11();
  D11():
    deopt 51 [];
  L45():
    r33 = dyn cat4("\n");
    check L46() else D12();
  D12():
    deopt 53 [r33];
  L46():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L9(r35):
    popenv;
    return r35;
  L47():
    x29 = ld x;
    check L49() else D13();
  L48():
    r34 = dyn base4(<sym x>);
    goto L9(r34);
  D13():
    deopt 56 [x29];
  L49():
    x30 = force? x29;
    checkMissing(x30);
    invisible = ldf invisible in base;
    r36 = dyn invisible(x30);
    check L50() else D14();
  D14():
    deopt 59 [r36];
  L50():
    goto L9(r36);
  }
}