fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3928207482;
    st `print.changedFiles` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3928207482(x, verbose, `...`) {
  (reg x:*, reg verbose:*, reg ddd:dots) -+> V { var x:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg c1:L, reg cat:cls, reg paste0:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg length1:cls, reg r13:V, reg c4:L, reg cat1:cls, reg paste1:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r14:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg x17:*, reg x18:V, reg c6:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r20:V, reg verbose1:*, reg verbose2:V, reg r21:V, reg c7:L, reg changes:*, reg changes1:V, reg c8:L, reg changes3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg rowSums:cls, reg changes4:*, reg changes5:V, reg p4:p(V +), reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg changes6:*, reg changes7:V, reg c9:L, reg changes9:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg colSums:cls, reg changes10:*, reg changes11:V, reg p5:p(V +), reg r27:V, reg r28:V, reg __1:cls, reg r29:V, reg verbose3:*, reg verbose4:V, reg c10:L, reg c11:V, reg nrow:cls, reg changes12:*, reg changes13:V, reg p6:p(V +), reg r31:V, reg c13:L, reg c14:V, reg c16:L, reg cat2:cls, reg r32:V, reg print:cls, reg changes14:*, reg changes15:V, reg p7:p(V +), reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg x21:*, reg x22:V, reg invisible:cls, reg r38:V |
    mkenv;
    st x = x;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L23() else L2();
  L15():
    x1 = ld x;
    check L17() else D0();
  L16():
    r = dyn base(<lang `$`(x, added)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    goto L3();
  L3():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L17():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L19() else L20(x2);
  L23():
    cat = ldf cat;
    check L24() else D2();
  D2():
    deopt 8 [];
  L4(r11):
    c4 = `as.logical`(r11);
    if c4 then L35() else L5();
  L18(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L22() else D1();
  L19():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(x4):
    r2 = `$`(x4, <sym added>);
    goto L18(r2);
  L24():
    p1 = prom<V +>{
      paste0 = ldf paste0;
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
        r4 = `$`(x8, <sym added>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r6 = dyn paste0[, , collapse]("  ", p, "\n");
      return r6;
    };
    r8 = dyn cat[, , , sep]("Files added:\n", p1, "\n", "");
    check L25() else D3();
  L27():
    x9 = ld x;
    check L29() else D4();
  L28():
    r10 = dyn base1(<lang `$`(x, deleted)>);
    goto L4(r10);
  D1():
    deopt 6 [r3];
  D3():
    deopt 14 [r8];
  D4():
    deopt 19 [x9];
  L5():
    goto L6();
  L6():
    x17 = ld x;
    check L39() else D8();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    goto L1(r3);
  L25():
    goto L3();
  L29():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L31() else L32(x10);
  L35():
    cat1 = ldf cat;
    check L36() else D6();
  D6():
    deopt 25 [];
  D8():
    deopt 34 [x17];
  L30(dx5):
    length1 = ldf length in base;
    r13 = dyn length1(dx5);
    check L34() else D5();
  L31():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(dr4);
  L32(x12):
    r12 = `$`(x12, <sym deleted>);
    goto L30(r12);
  L36():
    p3 = prom<V +>{
      paste1 = ldf paste0;
      p2 = prom<V +>{
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
        r14 = `$`(x16, <sym deleted>);
        goto L0(r14);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r16 = dyn paste1[, , collapse]("  ", p2, "\n");
      return r16;
    };
    r18 = dyn cat1[, , , sep]("Files deleted:\n", p3, "\n", "");
    check L37() else D7();
  L39():
    x18 = force? x17;
    checkMissing(x18);
    c6 = `is.object`(x18);
    if c6 then L41() else L42(x18);
  D5():
    deopt 23 [r13];
  D7():
    deopt 31 [r18];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L34():
    goto L4(r13);
  L37():
    goto L6();
  L40(dx9):
    st changes = dx9;
    verbose1 = ld verbose;
    check L44() else D9();
  L41():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L43() else L42(dr8);
  L42(x20):
    r20 = `$`(x20, <sym changes>);
    goto L40(r20);
  D9():
    deopt 38 [verbose1];
  L43():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L40(dx8);
  L44():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    r21 = `!`(verbose2);
    c7 = `as.logical`(r21);
    if c7 then L45() else L7();
  L7():
    goto L10();
  L10():
    verbose3 = ld verbose;
    check L59() else D16();
  L45():
    changes = ld changes;
    check L46() else D10();
  D10():
    deopt 41 [changes];
  D16():
    deopt 75 [verbose3];
  L46():
    changes1 = force? changes;
    checkMissing(changes1);
    c8 = `is.object`(changes1);
    if c8 then L47() else L48(changes1);
  L59():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c10 = `as.logical`(verbose4);
    if c10 then L11(c10) else L60();
  L8(dx11):
    st changes = dx11;
    changes6 = ld changes;
    check L52() else D13();
  L11(c11):
    c16 = `as.logical`(c11);
    if c16 then L64() else L12();
  L47():
    dr10 = tryDispatchBuiltin.1("[", changes1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L49() else L48(dr10);
  L48(changes3):
    rowSums = ldf rowSums;
    check L50() else D11();
  L60():
    nrow = ldf nrow;
    check L61() else D17();
  D11():
    deopt 44 [changes3];
  D13():
    deopt 57 [changes6];
  D17():
    deopt 78 [c10];
  L12():
    goto L13();
  L13():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L70() else L71();
  L49():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L8(dx10);
  L50():
    p4 = prom<V +>{
      changes4 = ld changes;
      changes5 = force? changes4;
      checkMissing(changes5);
      return changes5;
    };
    r23 = dyn rowSums[, `na.rm`](p4, TRUE);
    check L51() else D12();
  L52():
    changes7 = force? changes6;
    checkMissing(changes7);
    c9 = `is.object`(changes7);
    if c9 then L53() else L54(changes7);
  L61():
    p6 = prom<V +>{
      changes12 = ld changes;
      changes13 = force? changes12;
      checkMissing(changes13);
      return changes13;
    };
    r31 = dyn nrow(p6);
    check L62() else D18();
  L64():
    cat2 = ldf cat;
    check L65() else D19();
  D12():
    deopt 48 [changes3, r23];
  D18():
    deopt 80 [c10, r31];
  D19():
    deopt 83 [];
  L9(dx13):
    st changes = dx13;
    goto L10();
  L14(r37):
    popenv;
    return r37;
  L51():
    r24 = `>`(r23, 0.0);
    __ = ldf `[` in base;
    r25 = dyn __(changes1, r24, <missing>, FALSE);
    goto L8(r25);
  L53():
    dr12 = tryDispatchBuiltin.1("[", changes7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L55() else L54(dr12);
  L54(changes9):
    colSums = ldf colSums;
    check L56() else D14();
  L62():
    c13 = `as.logical`(r31);
    c14 = `||`(c10, c13);
    goto L11(c14);
  L65():
    r32 = dyn cat2("File changes:\n");
    check L66() else D20();
  L70():
    x21 = ld x;
    check L72() else D23();
  L71():
    r36 = dyn base2(<sym x>);
    goto L14(r36);
  D14():
    deopt 61 [changes9];
  D20():
    deopt 85 [r32];
  D23():
    deopt 94 [x21];
  L55():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L9(dx12);
  L56():
    p5 = prom<V +>{
      changes10 = ld changes;
      changes11 = force? changes10;
      checkMissing(changes11);
      return changes11;
    };
    r27 = dyn colSums[, `na.rm`](p5, TRUE);
    check L57() else D15();
  L66():
    print = ldf print;
    check L67() else D21();
  L72():
    x22 = force? x21;
    checkMissing(x22);
    invisible = ldf invisible in base;
    r38 = dyn invisible(x22);
    check L73() else D24();
  D15():
    deopt 65 [changes9, r27];
  D21():
    deopt 87 [];
  D24():
    deopt 97 [r38];
  L57():
    r28 = `>`(r27, 0.0);
    __1 = ldf `[` in base;
    r29 = dyn __1(changes7, <missing>, r28, FALSE);
    goto L9(r29);
  L67():
    p7 = prom<V +>{
      changes14 = ld changes;
      changes15 = force? changes14;
      checkMissing(changes15);
      return changes15;
    };
    r34 = dyn print(p7);
    check L68() else D22();
  L73():
    goto L14(r38);
  D22():
    deopt 89 [r34];
  L68():
    goto L13();
  }
}