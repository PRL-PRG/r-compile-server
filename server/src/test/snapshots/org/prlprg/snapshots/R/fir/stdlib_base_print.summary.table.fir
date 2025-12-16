fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1175888996;
    st `print.summary.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1175888996(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg inherits:cls, reg r8:V, reg r9:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg c2:V, reg r19:V, reg c3:L, reg cat:cls, reg r20:V, reg print:cls, reg x7:*, reg x8:V, reg c4:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg p3:p(V +), reg r23:V, reg cat1:cls, reg x11:*, reg x12:V, reg c5:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r25:V, reg p4:p(V +), reg r27:V, reg cat2:cls, reg x15:*, reg x16:V, reg c6:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r28:V, reg p5:p(V +), reg r30:V, reg x19:*, reg x20:V, reg c7:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r31:V, reg r32:V, reg c8:L, reg cat3:cls, reg r33:V, reg x23:*, reg x24:V, reg c9:L, reg x26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r34:V, reg cat4:cls, reg format:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg round:cls, reg r37:V, reg p6:p(V +), reg r39:V, reg p7:p(V +), reg x27:*, reg x28:V, reg c10:L, reg x30:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r41:V, reg p8:p(V +), reg format_pval:cls, reg x31:*, reg x32:V, reg c11:L, reg x34:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r43:V, reg p9:p(V +), reg digits1:*, reg digits2:V, reg p10:p(V +), reg r46:V, reg p11:p(V +), reg r48:V, reg x35:*, reg x36:V, reg c12:L, reg x38:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r49:V, reg r50:V, reg c13:L, reg cat5:cls, reg r51:V, reg r52:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg x39:*, reg x40:V, reg invisible:cls, reg r56:V |
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
      r4 = dyn max(1, r3);
      goto L0(r4);
    L2():
      r = dyn base(1, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L17() else L3();
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r6 = dyn base1(<sym x>, "summary.table");
    goto L2(r6);
  D0():
    deopt 2 [x1];
  L3():
    goto L4();
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r8 = dyn inherits(x2, "summary.table", FALSE);
    check L16() else D1();
  L17():
    stop = ldf stop;
    check L18() else D2();
  D1():
    deopt 7 [r8];
  D2():
    deopt 10 [];
  L5(r17):
    r19 = `!`(r17);
    c3 = `as.logical`(r19);
    if c3 then L28() else L6();
  L16():
    goto L2(r8);
  L18():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dQuote = ldf dQuote;
        r10 = dyn dQuote("summary.table");
        return r10;
      };
      r12 = dyn gettextf("'x' must inherit from class %s", p1);
      return r12;
    };
    r14 = dyn stop[, domain](p2, NA_LGL);
    check L19() else D3();
  L21():
    x3 = ld x;
    check L23() else D4();
  L22():
    r16 = dyn base2(<lang `$`(x, call)>);
    goto L5(r16);
  D3():
    deopt 14 [r14];
  D4():
    deopt 18 [x3];
  L6():
    goto L7();
  L7():
    cat1 = ldf cat;
    check L34() else D9();
  L19():
    goto L4();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L25() else L26(x4);
  L28():
    cat = ldf cat;
    check L29() else D5();
  D5():
    deopt 24 [];
  D9():
    deopt 34 [];
  L24(dx1):
    c2 = `==`(dx1, NULL);
    goto L5(c2);
  L25():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(x6):
    r18 = `$`(x6, <sym call>);
    goto L24(r18);
  L29():
    r20 = dyn cat("Call: ");
    check L30() else D6();
  L34():
    p4 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c5 = `is.object`(x12);
      if c5 then L1() else L2(x12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x14):
      r25 = `$`(x14, <sym n.cases>);
      goto L0(r25);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r27 = dyn cat1("Number of cases in table:", p4, "\n");
    check L35() else D10();
  D6():
    deopt 26 [r20];
  D10():
    deopt 38 [r27];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L30():
    print = ldf print;
    check L31() else D7();
  L35():
    cat2 = ldf cat;
    check L36() else D11();
  D7():
    deopt 28 [];
  D11():
    deopt 40 [];
  L31():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c4 = `is.object`(x8);
      if c4 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      r21 = `$`(x10, <sym call>);
      goto L0(r21);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r23 = dyn print(p3);
    check L32() else D8();
  L36():
    p5 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      c6 = `is.object`(x16);
      if c6 then L1() else L2(x16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x18):
      r28 = `$`(x18, <sym n.vars>);
      goto L0(r28);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r30 = dyn cat2("Number of factors:", p5, "\n");
    check L37() else D12();
  D8():
    deopt 30 [r23];
  D12():
    deopt 44 [r30];
  L32():
    goto L7();
  L37():
    x19 = ld x;
    check L38() else D13();
  D13():
    deopt 45 [x19];
  L38():
    x20 = force? x19;
    checkMissing(x20);
    c7 = `is.object`(x20);
    if c7 then L40() else L41(x20);
  L39(dx9):
    r32 = `>`(dx9, 1.0);
    c8 = `as.logical`(r32);
    if c8 then L43() else L8();
  L40():
    dr8 = tryDispatchBuiltin.1("$", x20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L42() else L41(dr8);
  L41(x22):
    r31 = `$`(x22, <sym n.vars>);
    goto L39(r31);
  L8():
    goto L11();
  L11():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L42():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L39(dx8);
  L43():
    cat3 = ldf cat;
    check L44() else D14();
  D14():
    deopt 51 [];
  L12(r55):
    popenv;
    return r55;
  L44():
    r33 = dyn cat3("Test for independence of all factors:\n");
    check L45() else D15();
  L63():
    x39 = ld x;
    check L65() else D22();
  L64():
    r54 = dyn base4(<sym x>);
    goto L12(r54);
  D15():
    deopt 53 [r33];
  D22():
    deopt 84 [x39];
  L45():
    x23 = ld x;
    check L46() else D16();
  L65():
    x40 = force? x39;
    checkMissing(x40);
    invisible = ldf invisible in base;
    r56 = dyn invisible(x40);
    check L66() else D23();
  D16():
    deopt 54 [x23];
  D23():
    deopt 87 [r56];
  L46():
    x24 = force? x23;
    checkMissing(x24);
    c9 = `is.object`(x24);
    if c9 then L48() else L49(x24);
  L66():
    goto L12(r56);
  L47(dx11):
    st ch = dx11;
    cat4 = ldf cat;
    check L51() else D17();
  L48():
    dr10 = tryDispatchBuiltin.1("$", x24);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L50() else L49(dr10);
  L49(x26):
    r34 = `$`(x26, <sym statistic>);
    goto L47(r34);
  D17():
    deopt 59 [];
  L50():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L47(dx10);
  L51():
    p7 = prom<V +>{
      format = ldf format;
      p6 = prom<V +>{
        sym3 = ldf round;
        base3 = ldf round in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r36):
        return r36;
      L1():
        round = ldf round in base;
        r37 = dyn round(<sym ch>, <lang max(0.0, `-`(digits, log10(ch)))>);
        goto L0(r37);
      L2():
        r35 = dyn base3(<sym ch>, <lang max(0.0, `-`(digits, log10(ch)))>);
        goto L0(r35);
      };
      r39 = dyn format(p6);
      return r39;
    };
    p8 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      c10 = `is.object`(x28);
      if c10 then L1() else L2(x28);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x28);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x30):
      r41 = `$`(x30, <sym parameter>);
      goto L0(r41);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p11 = prom<V +>{
      format_pval = ldf `format.pval`;
      p9 = prom<V +>{
        x31 = ld x;
        x32 = force? x31;
        checkMissing(x32);
        c11 = `is.object`(x32);
        if c11 then L1() else L2(x32);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x32);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x34):
        r43 = `$`(x34, <sym p.value>);
        goto L0(r43);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      p10 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r46 = dyn format_pval[, , eps](p9, p10, 0.0);
      return r46;
    };
    r48 = dyn cat4[, , , , , , , sep]("\tChisq = ", p7, ", df = ", p8, ", p-value = ", p11, "\n", "");
    check L52() else D18();
  D18():
    deopt 69 [r48];
  L52():
    x35 = ld x;
    check L53() else D19();
  D19():
    deopt 70 [x35];
  L53():
    x36 = force? x35;
    checkMissing(x36);
    c12 = `is.object`(x36);
    if c12 then L55() else L56(x36);
  L54(dx17):
    r50 = `!`(dx17);
    c13 = `as.logical`(r50);
    if c13 then L58() else L9();
  L55():
    dr16 = tryDispatchBuiltin.1("$", x36);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L57() else L56(dr16);
  L56(x38):
    r49 = `$`(x38, <sym approx.ok>);
    goto L54(r49);
  L9():
    goto L10(NULL);
  L10(r52):
    goto L11();
  L57():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L54(dx16);
  L58():
    cat5 = ldf cat;
    check L59() else D20();
  D20():
    deopt 75 [];
  L59():
    r51 = dyn cat5("\tChi-squared approximation may be incorrect\n");
    check L60() else D21();
  D21():
    deopt 77 [r51];
  L60():
    goto L10(r51);
  }
}