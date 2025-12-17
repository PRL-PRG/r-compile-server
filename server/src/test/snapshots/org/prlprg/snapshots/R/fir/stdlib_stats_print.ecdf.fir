fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3655879025;
    st `print.ecdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3655879025(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var `...`:dots?, reg r3:cls, reg cat:cls, reg r4:V, reg print:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg attr:cls, reg r7:V, reg p1:p(V +), reg ddd1:dots?, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg environment:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r13:V, reg c:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg length:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:I, reg r22:V, reg n:*, reg n1:V, reg min:cls, reg r23:V, reg r24:V, reg n2:*, reg n3:V, reg r25:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg n4:*, reg n5:V, reg r28:V, reg max:cls, reg r29:V, reg n6:*, reg n7:V, reg r30:V, reg r31:V, reg integer:cls, reg r32:V, reg cat1:cls, reg n8:*, reg n9:V, reg p3:p(V +), reg numform:cls, reg xx:*, reg xx1:V, reg c2:L, reg xx3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i1:*, reg i2:V, reg __:cls, reg r34:V, reg p4:p(V +), reg r36:V, reg p5:p(V +), reg n10:*, reg n11:V, reg r38:V, reg c3:L, reg p6:p(V +), reg n12:*, reg n13:V, reg r40:V, reg c4:L, reg p7:p(V +), reg numform1:cls, reg xx4:*, reg xx5:V, reg c5:L, reg xx7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i3:*, reg i4:V, reg __1:cls, reg r42:V, reg p8:p(V +), reg r44:V, reg p9:p(V +), reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg x5:*, reg x6:V, reg invisible:cls, reg r49:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      r1 = `-`(r, 2);
      return r1;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    r3 = clos inner2501545716;
    st numform = r3;
    cat = ldf cat;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    r4 = dyn cat("Empirical CDF \nCall: ");
    check L9() else D1();
  D1():
    deopt 6 [r4];
  L9():
    print = ldf print;
    check L10() else D2();
  D2():
    deopt 8 [];
  L10():
    p1 = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r7 = dyn attr(x2, "call");
      goto L0(r7);
    L2():
      r5 = dyn base(<sym x>, "call");
      goto L0(r5);
    };
    ddd1 = ld `...`;
    r9 = dyn print[, `...`](p1, ddd1);
    check L11() else D3();
  D3():
    deopt 11 [r9];
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(r11):
    st n = r11;
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L12():
    environment = ldf environment;
    check L14() else D4();
  L13():
    r10 = dyn base1(<lang `<-`(xx, `$`(environment(x), x))>);
    goto L2(r10);
  D4():
    deopt 15 [];
  L3(r21, r22):
    r24 = `:`(r21, r22);
    st i1 = r24;
    n2 = ld n;
    check L25() else D9();
  L14():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r13 = dyn environment(p2);
    check L15() else D5();
  L21():
    n = ld n;
    check L23() else D7();
  L22():
    r20 = dyn base2(3, <sym n>);
    goto L3(1, r20);
  D5():
    deopt 17 [r13];
  D7():
    deopt 27 [1, n];
  D9():
    deopt 33 [n2];
  L15():
    c = `is.object`(r13);
    if c then L17() else L18(r13);
  L23():
    n1 = force? n;
    checkMissing(n1);
    min = ldf min in base;
    r23 = dyn min(3, n1);
    check L24() else D8();
  L25():
    n3 = force? n2;
    checkMissing(n3);
    r25 = `>=`(n3, 4);
    c1 = `as.logical`(r25);
    if c1 then L26() else L4();
  D8():
    deopt 30 [1, r23];
  L4():
    integer = ldf integer;
    check L33() else D13();
  L6(r31):
    st i2 = r31;
    cat1 = ldf cat;
    check L35() else D15();
  L16(dx1):
    st xx = dx1;
    length = ldf length in base;
    r17 = dyn length(dx1);
    check L20() else D6();
  L17():
    dr = tryDispatchBuiltin.1("$", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(r15):
    r16 = `$`(r15, <sym x>);
    goto L16(r16);
  L24():
    goto L3(1, r23);
  L26():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  D6():
    deopt 21 [r17];
  D13():
    deopt 49 [];
  D15():
    deopt 53 [];
  L5(r27):
    n6 = ld n;
    check L31() else D12();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L20():
    goto L2(r17);
  L27():
    n4 = ld n;
    check L29() else D10();
  L28():
    r26 = dyn base3(4, <lang `-`(n, 1)>);
    goto L5(r26);
  L33():
    r32 = dyn integer();
    check L34() else D14();
  L35():
    p3 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    p5 = prom<V +>{
      numform = ldf numform;
      p4 = prom<V +>{
        xx = ld xx;
        xx1 = force? xx;
        checkMissing(xx1);
        c2 = `is.object`(xx1);
        if c2 then L1() else L2(xx1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", xx1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(xx3):
        i1 = ld i1;
        i2 = force? i1;
        __ = ldf `[` in base;
        r34 = dyn __(xx3, i2);
        goto L0(r34);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r36 = dyn numform(p4);
      return r36;
    };
    p6 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      r38 = `>`(n11, 3);
      c3 = `as.logical`(r38);
      if c3 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return ", ";
    };
    p7 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      r40 = `>`(n13, 5);
      c4 = `as.logical`(r40);
      if c4 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return " ..., ";
    };
    p9 = prom<V +>{
      numform1 = ldf numform;
      p8 = prom<V +>{
        xx4 = ld xx;
        xx5 = force? xx4;
        checkMissing(xx5);
        c5 = `is.object`(xx5);
        if c5 then L1() else L2(xx5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", xx5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(xx7):
        i3 = ld i2;
        i4 = force? i3;
        __1 = ldf `[` in base;
        r42 = dyn __1(xx7, i4);
        goto L0(r42);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r44 = dyn numform1(p8);
      return r44;
    };
    r46 = dyn cat1[, , , , , , , , sep](" x[1:", p3, "] = ", p5, p6, p7, p9, "\n", "");
    check L36() else D16();
  D10():
    deopt 40 [n4];
  D12():
    deopt 45 [r27, n6];
  D14():
    deopt 50 [r32];
  D16():
    deopt 64 [r46];
  L29():
    n5 = force? n4;
    checkMissing(n5);
    r28 = `-`(n5, 1);
    max = ldf max in base;
    r29 = dyn max(4, r28);
    check L30() else D11();
  L31():
    n7 = force? n6;
    checkMissing(n7);
    r30 = `:`(r27, n7);
    goto L6(r30);
  L34():
    goto L6(r32);
  L36():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  D11():
    deopt 45 [r29];
  L7(r48):
    popenv;
    return r48;
  L30():
    goto L5(r29);
  L37():
    x5 = ld x;
    check L39() else D17();
  L38():
    r47 = dyn base4(<sym x>);
    goto L7(r47);
  D17():
    deopt 67 [x5];
  L39():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r49 = dyn invisible(x6);
    check L40() else D18();
  D18():
    deopt 70 [r49];
  L40():
    goto L7(r49);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg formatC:cls, reg x1:*, reg x2:V, reg p:p(V +), reg digits:*, reg digits1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      formatC = ldf formatC;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        digits = ld digits;
        digits1 = force? digits;
        checkMissing(digits1);
        return digits1;
      };
      r2 = dyn formatC[, digits](p, p1);
      return r2;
    };
    r4 = dyn paste[, collapse](p2, ", ");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}