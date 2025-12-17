fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4121509597;
    st `print.summary.princomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4121509597(x, digits, loadings, cutoff, `...`) {
  (reg x:*, reg digits:*, reg loadings:*, reg cutoff:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var loadings:*, reg loadings_isMissing:L, reg loadings_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var cutoff:*, reg cutoff_isMissing:L, reg cutoff_orDefault:*, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), var `...`:dots?, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r4:V, reg r5:V, reg vars:*, reg vars1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg vars4:V, reg r7:V, reg vars5:*, reg vars6:V, reg sum:cls, reg r8:V, reg r9:V, reg cat:cls, reg r10:V, reg print:cls, reg rbind:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r11:V, reg p2:p(V +), reg vars7:*, reg vars8:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg vars9:*, reg vars10:V, reg cumsum:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V, reg loadings1:*, reg loadings2:V, reg c4:L, reg cat1:cls, reg r21:V, reg format:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg round:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg strrep:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg cx:*, reg cx1:V, reg c5:L, reg cx3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r29:V, reg nchar:cls, reg r30:V, reg p7:p(V +), reg r32:V, reg l:*, reg c6:L, reg r34:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg l5:*, reg r43:V, reg r44:V, reg x17:*, reg x18:V, reg c7:L, reg r47:V, reg l7:*, reg r48:V, reg x20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg r51:V, reg l9:*, reg r52:V, reg dx13:V, reg r53:V, reg abs:cls, reg r54:V, reg cutoff1:*, reg cutoff2:V, reg r55:V, reg ___:cls, reg r56:V, reg print1:cls, reg cx4:*, reg cx5:V, reg p8:p(V +), reg ddd1:dots?, reg r58:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg x21:*, reg x22:V, reg invisible:cls, reg r62:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(3) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    loadings_isMissing = missing.0(loadings);
    if loadings_isMissing then L1() else L2(loadings);
  L1():
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
      r = `$`(x4, <sym print.loadings>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L2(p);
  L2(loadings_orDefault):
    st loadings = loadings_orDefault;
    cutoff_isMissing = missing.0(cutoff);
    if cutoff_isMissing then L3() else L4(cutoff);
  L3():
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
      r2 = `$`(x8, <sym cutoff>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L4(p1);
  L4(cutoff_orDefault):
    st cutoff = cutoff_orDefault;
    st `...` = ddd;
    x9 = ld x;
    check L11() else D0();
  D0():
    deopt 0 [x9];
  L11():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L13() else L14(x10);
  L12(dx5):
    r5 = `^`(dx5, 2.0);
    st vars = r5;
    vars = ld vars;
    check L16() else D1();
  L13():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L15() else L14(dr4);
  L14(x12):
    r4 = `$`(x12, <sym sdev>);
    goto L12(r4);
  D1():
    deopt 6 [vars];
  L15():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L16():
    vars1 = force? vars;
    checkMissing(vars1);
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L5(vars4, r7):
    r9 = `/`(vars4, r7);
    st vars = r9;
    cat = ldf cat;
    check L21() else D4();
  L17():
    vars5 = ld vars;
    check L19() else D2();
  L18():
    r6 = dyn base(<sym vars>);
    goto L5(vars1, r6);
  D2():
    deopt 9 [vars1, vars5];
  D4():
    deopt 16 [];
  L19():
    vars6 = force? vars5;
    checkMissing(vars6);
    sum = ldf sum in base;
    r8 = dyn sum(vars6);
    check L20() else D3();
  L21():
    r10 = dyn cat("Importance of components:\n");
    check L22() else D5();
  D3():
    deopt 12 [vars1, r8];
  D5():
    deopt 18 [r10];
  L20():
    goto L5(vars1, r8);
  L22():
    print = ldf print;
    check L23() else D6();
  D6():
    deopt 20 [];
  L23():
    p5 = prom<V +>{
      rbind = ldf rbind;
      p2 = prom<V +>{
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
        r11 = `$`(x16, <sym sdev>);
        goto L0(r11);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p3 = prom<V +>{
        vars7 = ld vars;
        vars8 = force? vars7;
        checkMissing(vars8);
        return vars8;
      };
      p4 = prom<V +>{
        sym1 = ldf cumsum;
        base1 = ldf cumsum in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r15):
        return r15;
      L1():
        vars9 = ld vars;
        vars10 = force? vars9;
        checkMissing(vars10);
        cumsum = ldf cumsum in base;
        r16 = dyn cumsum(vars10);
        goto L0(r16);
      L2():
        r14 = dyn base1(<sym vars>);
        goto L0(r14);
      };
      r18 = dyn rbind[`Standard deviation`, `Proportion of Variance`, `Cumulative Proportion`](p2, p3, p4);
      return r18;
    };
    r20 = dyn print(p5);
    check L24() else D7();
  D7():
    deopt 22 [r20];
  L24():
    loadings1 = ld loadings;
    check L25() else D8();
  D8():
    deopt 23 [loadings1];
  L25():
    loadings2 = force? loadings1;
    checkMissing(loadings2);
    c4 = `as.logical`(loadings2);
    if c4 then L26() else L6();
  L6():
    goto L9();
  L9():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L26():
    cat1 = ldf cat;
    check L27() else D9();
  D9():
    deopt 26 [];
  L10(r61):
    popenv;
    return r61;
  L27():
    r21 = dyn cat1("\nLoadings:\n");
    check L28() else D10();
  L48():
    x21 = ld x;
    check L50() else D20();
  L49():
    r60 = dyn base5(<sym x>);
    goto L10(r60);
  D10():
    deopt 28 [r21];
  D20():
    deopt 62 [x21];
  L28():
    format = ldf format;
    check L29() else D11();
  L50():
    x22 = force? x21;
    checkMissing(x22);
    invisible = ldf invisible in base;
    r62 = dyn invisible(x22);
    check L51() else D21();
  D11():
    deopt 30 [];
  D21():
    deopt 65 [r62];
  L29():
    p6 = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      round = ldf round in base;
      r24 = dyn round(<lang `$`(x, loadings)>, <sym digits>);
      goto L0(r24);
    L2():
      r22 = dyn base2[, digits](<lang `$`(x, loadings)>, <sym digits>);
      goto L0(r22);
    };
    r26 = dyn format(p6);
    check L30() else D12();
  L51():
    goto L10(r62);
  D12():
    deopt 32 [r26];
  L30():
    st cx = r26;
    strrep = ldf strrep;
    check L31() else D13();
  D13():
    deopt 35 [];
  L31():
    p7 = prom<V +>{
      sym3 = ldf nchar;
      base3 = ldf nchar in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r28):
      return r28;
    L2():
      cx = ld cx;
      cx1 = force? cx;
      checkMissing(cx1);
      c5 = `is.object`(cx1);
      if c5 then L4() else L5(cx1);
    L3():
      r27 = dyn base3[, type](<lang `[`(cx, 1.0, 1.0)>, "w");
      goto L0(r27);
    L1(dx9):
      nchar = ldf nchar in base;
      r30 = dyn nchar(dx9, "w", FALSE, NA_LGL);
      goto L0(r30);
    L4():
      dr8 = tryDispatchBuiltin.1("[", cx1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(cx3):
      __ = ldf `[` in base;
      r29 = dyn __(cx3, 1.0, 1.0);
      goto L1(r29);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r32 = dyn strrep(" ", p7);
    check L32() else D14();
  D14():
    deopt 38 [r32];
  L32():
    l = ld cx;
    c6 = `is.object`(l);
    if c6 then L33() else L34(r32, l);
  L7(dx11):
    st cx = dx11;
    print1 = ldf print;
    check L45() else D18();
  L33():
    dr10 = tryDispatchBuiltin.0("[<-", l, r32);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L35() else L34(r32, dr10);
  L34(r34, l2):
    sym4 = ldf abs;
    base4 = ldf abs in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  D18():
    deopt 52 [];
  L8(r42, l5, r43, r44):
    cutoff1 = ld cutoff;
    check L44() else D17();
  L35():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L7(dx10);
  L36():
    x17 = ld x;
    check L38() else D15();
  L37():
    r41 = dyn base4(<lang `$`(x, loadings)>);
    goto L8(r34, l2, r32, r41);
  L45():
    p8 = prom<V +>{
      cx4 = ld cx;
      cx5 = force? cx4;
      checkMissing(cx5);
      return cx5;
    };
    ddd1 = ld `...`;
    r58 = dyn print1[, quote, `...`](p8, FALSE, ddd1);
    check L46() else D19();
  D15():
    deopt 42 [r34, l2, r32, x17];
  D17():
    deopt 46 [r42, l5, r43, r44, cutoff1];
  D19():
    deopt 57 [r58];
  L38():
    x18 = force? x17;
    checkMissing(x18);
    c7 = `is.object`(x18);
    if c7 then L40() else L41(r34, l2, r32, x18);
  L44():
    cutoff2 = force? cutoff1;
    checkMissing(cutoff2);
    r55 = `<`(r44, cutoff2);
    ___ = ldf `[<-` in base;
    r56 = dyn ___(l5, r43, r55);
    goto L7(r56);
  L46():
    goto L9();
  L39(r51, l9, r52, dx13):
    abs = ldf abs in base;
    r54 = dyn abs(dx13);
    check L43() else D16();
  L40():
    dr12 = tryDispatchBuiltin.1("$", x18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L42() else L41(r34, l2, r32, dr12);
  L41(r47, l7, r48, x20):
    r53 = `$`(x20, <sym loadings>);
    goto L39(r47, l7, r48, r53);
  D16():
    deopt 46 [r51, l9, r52, r54];
  L42():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L39(r34, l2, r32, dx12);
  L43():
    goto L8(r51, l9, r52, r54);
  }
}