fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg r6:V, reg cat1:cls, reg deparse:cls, reg formula:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg cat2:cls, reg deparse1:cls, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg print:cls, reg x7:*, reg x8:V, reg c1:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r19:V, reg dx8:cls, reg r20:V, reg p6:p(V +), reg digits1:*, reg digits2:V, reg p7:p(V +), reg ddd1:dots?, reg r23:V, reg cat3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg x11:*, reg x12:V, reg c3:L, reg x14:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r26:V, reg c4:V, reg r27:V, reg c5:L, reg c7:V, reg diff:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg x15:*, reg x16:V, reg c8:L, reg x18:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r30:V, reg range:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg c9:L, reg c10:V, reg c12:L, reg p9:p(V +), reg format:cls, reg x19:*, reg x20:V, reg c13:L, reg x22:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg r35:V, reg c14:L, reg dx16:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg r36:V, reg dx19:cls, reg r37:V, reg p10:p(V +), reg digits3:*, reg digits4:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg _p_nls_convInfo:cls, reg x23:*, reg x24:V, reg p13:p(V +), reg digits5:*, reg digits6:V, reg p14:p(V +), reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg x25:*, reg x26:V, reg invisible:cls, reg r48:V |
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
    cat = ldf cat;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r6 = dyn cat("Nonlinear regression model\n");
    check L4() else D1();
  D1():
    deopt 3 [r6];
  L4():
    cat1 = ldf cat;
    check L5() else D2();
  D2():
    deopt 5 [];
  L5():
    p3 = prom<V +>{
      deparse = ldf deparse;
      p2 = prom<V +>{
        formula = ldf formula;
        p1 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r8 = dyn formula(p1);
        return r8;
      };
      r10 = dyn deparse(p2);
      return r10;
    };
    r12 = dyn cat1[, , , sep]("  model: ", p3, "\n", "");
    check L6() else D3();
  D3():
    deopt 11 [r12];
  L6():
    cat2 = ldf cat;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p5 = prom<V +>{
      deparse1 = ldf deparse;
      p4 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        c = `is.object`(x4);
        if c then L1() else L2(x4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x6):
        r13 = `$`(x6, <sym data>);
        goto L0(r13);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r15 = dyn deparse1(p4);
      return r15;
    };
    r17 = dyn cat2[, , , sep]("   data: ", p5, "\n", "");
    check L8() else D5();
  D5():
    deopt 19 [r17];
  L8():
    print = ldf print;
    check L9() else D6();
  D6():
    deopt 21 [];
  L9():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c1 = `is.object`(x8);
      if c1 then L1() else L2(x8);
    L0(dx3):
      c2 = `is.object`(dx3);
      if c2 then L5() else L6(dx3);
    L1():
      dr2 = tryDispatchBuiltin.1("$", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      r18 = `$`(x10, <sym m>);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L4(dx7):
      checkFun.0(dx7);
      dx8 = dx7 as cls;
      r20 = dyn dx8();
      return r20;
    L5():
      dr4 = tryDispatchBuiltin.1("$", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      r19 = `$`(dx5, <sym getAllPars>);
      goto L4(r19);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx6);
    };
    p7 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r23 = dyn print[, digits, `...`](p6, p7, ddd1);
    check L10() else D7();
  D7():
    deopt 26 [r23];
  L10():
    cat3 = ldf cat;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    p9 = prom<V +>{
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r25):
      r27 = `!`(r25);
      c5 = `as.logical`(r27);
      if c5 then L9() else L1(c5);
    L3():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c3 = `is.object`(x12);
      if c3 then L6() else L7(x12);
    L4():
      r24 = dyn base1(<lang `$`(x, weights)>);
      goto L0(r24);
    L1(c7):
      c12 = `as.logical`(c7);
      if c12 then L11() else L2();
    L5(dx10):
      c4 = `==`(dx10, NULL);
      goto L0(c4);
    L6():
      dr6 = tryDispatchBuiltin.1("$", x12);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L8() else L7(dr6);
    L7(x14):
      r26 = `$`(x14, <sym weights>);
      goto L5(r26);
    L9():
      diff = ldf diff;
      p8 = prom<V +>{
        sym2 = ldf range;
        base2 = ldf range in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        c8 = `is.object`(x16);
        if c8 then L4() else L5(x16);
      L2():
        r28 = dyn base2(<lang `$`(x, weights)>);
        goto L0(r28);
      L3(dx12):
        range = ldf range in base;
        r31 = dyn range(dx12);
        goto L0(r31);
      L4():
        dr8 = tryDispatchBuiltin.1("$", x16);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L6() else L5(dr8);
      L5(x18):
        r30 = `$`(x18, <sym weights>);
        goto L3(r30);
      L6():
        dx11 = getTryDispatchBuiltinValue(dr8);
        goto L3(dx11);
      };
      r33 = dyn diff(p8);
      c9 = `as.logical`(r33);
      c10 = `&&`(c5, c9);
      goto L1(c10);
    L2():
      invisible.0();
      return NULL;
    L8():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L5(dx9);
    L11():
      return "weighted ";
    };
    p12 = prom<V +>{
      format = ldf format;
      p10 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        c13 = `is.object`(x20);
        if c13 then L1() else L2(x20);
      L0(dx14):
        c14 = `is.object`(dx14);
        if c14 then L5() else L6(dx14);
      L1():
        dr10 = tryDispatchBuiltin.1("$", x20);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(x22):
        r35 = `$`(x22, <sym m>);
        goto L0(r35);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx13);
      L4(dx18):
        checkFun.0(dx18);
        dx19 = dx18 as cls;
        r37 = dyn dx19();
        return r37;
      L5():
        dr12 = tryDispatchBuiltin.1("$", dx14);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L7() else L6(dr12);
      L6(dx16):
        r36 = `$`(dx16, <sym deviance>);
        goto L4(r36);
      L7():
        dx17 = getTryDispatchBuiltinValue(dr12);
        goto L4(dx17);
      };
      p11 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r40 = dyn format[, digits](p10, p11);
      return r40;
    };
    r42 = dyn cat3[, , , , , sep](" ", p9, "residual sum-of-squares: ", p12, "\n", "");
    check L12() else D9();
  D9():
    deopt 36 [r42];
  L12():
    _p_nls_convInfo = ldf `.p.nls.convInfo`;
    check L13() else D10();
  D10():
    deopt 38 [];
  L13():
    p13 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p14 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    r45 = dyn _p_nls_convInfo[, digits](p13, p14);
    check L14() else D11();
  D11():
    deopt 42 [r45];
  L14():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L2(r47):
    popenv;
    return r47;
  L15():
    x25 = ld x;
    check L17() else D12();
  L16():
    r46 = dyn base3(<sym x>);
    goto L2(r46);
  D12():
    deopt 45 [x25];
  L17():
    x26 = force? x25;
    checkMissing(x26);
    invisible = ldf invisible in base;
    r48 = dyn invisible(x26);
    check L18() else D13();
  D13():
    deopt 48 [r48];
  L18():
    goto L2(r48);
  }
}