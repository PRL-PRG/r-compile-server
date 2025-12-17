fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1591825523;
    st `print.TukeyHSD` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1591825523(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg r2:V, reg cat1:cls, reg format:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:R, reg r7:V, reg x1:*, reg x2:V, reg attr:cls, reg r8:V, reg r9:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg attr1:cls, reg r16:V, reg c:L, reg cat2:cls, reg r17:V, reg cat3:cls, reg deparse:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x5:*, reg x6:V, reg attr2:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg x7:*, reg x8:V, reg unclass:cls, reg r28:V, reg l:*, reg attr__:cls, reg r29:V, reg l1:*, reg attr__1:cls, reg r30:V, reg l2:*, reg attr__2:cls, reg r31:V, reg lapply:cls, reg xx:*, reg xx1:V, reg p5:p(V +), reg r33:cls, reg p6:p(V +), reg digits1:*, reg digits2:V, reg p7:p(V +), reg r36:V, reg l3:*, reg c1:L, reg r38:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r41:V, reg print_default:cls, reg xx2:*, reg xx3:V, reg p8:p(V +), reg digits3:*, reg digits4:V, reg p9:p(V +), reg ddd1:dots?, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg x9:*, reg x10:V, reg invisible:cls, reg r47:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r2 = dyn cat("  Tukey multiple comparisons of means\n");
    check L9() else D1();
  D1():
    deopt 3 [r2];
  L9():
    cat1 = ldf cat;
    check L10() else D2();
  D2():
    deopt 5 [];
  L10():
    p2 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        sym = ldf attr;
        base = ldf attr in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r6, r7):
        r9 = `*`(r6, r7);
        return r9;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        attr = ldf attr in base;
        r8 = dyn attr(x2, "conf.level");
        goto L0(100.0, r8);
      L2():
        r5 = dyn base(<sym x>, "conf.level");
        goto L0(100.0, r5);
      };
      r11 = dyn format(p1, 2.0);
      return r11;
    };
    r13 = dyn cat1[, , , sep]("    ", p2, "% family-wise confidence level\n", "");
    check L11() else D3();
  D3():
    deopt 11 [r13];
  L11():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(r15):
    c = `as.logical`(r15);
    if c then L16() else L3();
  L12():
    x3 = ld x;
    check L14() else D4();
  L13():
    r14 = dyn base1(<sym x>, "ordered");
    goto L2(r14);
  D4():
    deopt 14 [x3];
  L3():
    goto L4();
  L4():
    cat3 = ldf cat;
    check L20() else D8();
  L14():
    x4 = force? x3;
    checkMissing(x4);
    attr1 = ldf attr in base;
    r16 = dyn attr1(x4, "ordered");
    check L15() else D5();
  L16():
    cat2 = ldf cat;
    check L17() else D6();
  D5():
    deopt 18 [r16];
  D6():
    deopt 20 [];
  D8():
    deopt 26 [];
  L15():
    goto L2(r16);
  L17():
    r17 = dyn cat2("    factor levels have been ordered\n");
    check L18() else D7();
  L20():
    p4 = prom<V +>{
      deparse = ldf deparse;
      p3 = prom<V +>{
        sym2 = ldf attr;
        base2 = ldf attr in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r20):
        return r20;
      L1():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        attr2 = ldf attr in base;
        r21 = dyn attr2(x6, "orig.call");
        goto L0(r21);
      L2():
        r19 = dyn base2(<sym x>, "orig.call");
        goto L0(r19);
      };
      r23 = dyn deparse(p3, 500);
      return r23;
    };
    r25 = dyn cat3[, , , sep]("\nFit: ", p4, "\n\n", "");
    check L21() else D9();
  D7():
    deopt 22 [r17];
  D9():
    deopt 32 [r25];
  L18():
    goto L4();
  L21():
    sym3 = ldf unclass;
    base3 = ldf unclass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L5(r27):
    st xx = r27;
    l = ld xx;
    attr__ = ldf `attr<-`;
    check L26() else D12();
  L22():
    x7 = ld x;
    check L24() else D10();
  L23():
    r26 = dyn base3(<sym x>);
    goto L5(r26);
  D10():
    deopt 35 [x7];
  D12():
    deopt 43 [NULL, l, NULL];
  L24():
    x8 = force? x7;
    checkMissing(x8);
    unclass = ldf unclass in base;
    r28 = dyn unclass(x8);
    check L25() else D11();
  L26():
    r29 = dyn attr__(l, NULL, "ordered", NULL);
    check L27() else D13();
  D11():
    deopt 38 [r28];
  D13():
    deopt 46 [NULL, r29];
  L25():
    goto L5(r28);
  L27():
    st xx = r29;
    l1 = ld xx;
    attr__1 = ldf `attr<-`;
    check L28() else D14();
  D14():
    deopt 49 [NULL, l1, NULL];
  L28():
    r30 = dyn attr__1(l1, NULL, "conf.level", NULL);
    check L29() else D15();
  D15():
    deopt 52 [NULL, r30];
  L29():
    st xx = r30;
    l2 = ld xx;
    attr__2 = ldf `attr<-`;
    check L30() else D16();
  D16():
    deopt 55 [NULL, l2, NULL];
  L30():
    r31 = dyn attr__2(l2, NULL, "orig.call", NULL);
    check L31() else D17();
  D17():
    deopt 58 [NULL, r31];
  L31():
    st xx = r31;
    lapply = ldf lapply;
    check L32() else D18();
  D18():
    deopt 61 [];
  L32():
    p5 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p6 = prom<V +>{
      r33 = clos inner4094464336;
      return r33;
    };
    p7 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r36 = dyn lapply[, , digits](p5, p6, p7);
    check L33() else D19();
  D19():
    deopt 66 [r36];
  L33():
    l3 = ld xx;
    c1 = `is.object`(l3);
    if c1 then L34() else L35(r36);
  L6(dx1):
    st xx = dx1;
    print_default = ldf `print.default`;
    check L37() else D20();
  L34():
    dr = tryDispatchBuiltin.0("[<-", l3, r36);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(r36);
  L35(r38):
    ___ = ldf `[<-` in base;
    r41 = dyn ___(l3, <missing>, r36);
    goto L6(r41);
  D20():
    deopt 73 [];
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L37():
    p8 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p9 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd1 = ld `...`;
    r44 = dyn print_default[, , `...`](p8, p9, ddd1);
    check L38() else D21();
  D21():
    deopt 77 [r44];
  L38():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L7(r46):
    popenv;
    return r46;
  L39():
    x9 = ld x;
    check L41() else D22();
  L40():
    r45 = dyn base4(<sym x>);
    goto L7(r45);
  D22():
    deopt 80 [x9];
  L41():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r47 = dyn invisible(x10);
    check L42() else D23();
  D23():
    deopt 83 [r47];
  L42():
    goto L7(r47);
  }
}
fun inner4094464336(z, digits) {
  (reg z:*, reg digits:*) -+> V { var z:*, var digits:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg round:cls, reg r2:V, reg l:*, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r7:V, reg z1:*, reg z2:V |
    mkenv;
    st z = z;
    st digits = digits;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    l = ld z;
    c = `is.object`(l);
    if c then L4() else L5(r1);
  L2():
    round = ldf round in base;
    r2 = dyn round(<lang `[`(z, , "p adj")>, <sym digits>);
    goto L0(r2);
  L3():
    r = dyn base(<lang `[`(z, , "p adj")>, <sym digits>);
    goto L0(r);
  L1(dx1):
    st z = dx1;
    z1 = ld z;
    check L7() else D0();
  L4():
    dr = tryDispatchBuiltin.0("[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(r1);
  L5(r4):
    ___ = ldf `[<-` in base;
    r7 = dyn ___(l, <missing>, "p adj", r1);
    goto L1(r7);
  D0():
    deopt 9 [z1];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L7():
    z2 = force? z1;
    checkMissing(z2);
    popenv;
    return z2;
  }
}