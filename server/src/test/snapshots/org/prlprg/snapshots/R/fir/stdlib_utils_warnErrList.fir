fun main() {
  () -+> V { reg r:cls, reg split:cls, reg ChickWeight:*, reg ChickWeight1:V, reg p:p(V +), reg ChickWeight2:*, reg ChickWeight3:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg sapply:cls, reg ChWtgrps:*, reg ChWtgrps1:V, reg p2:p(V +), reg nrow:*, reg nrow1:V, reg p3:p(V +), reg r7:V, reg lapply:cls, reg ChWtgrps2:*, reg ChWtgrps3:V, reg p4:p(V +), reg r9:cls, reg p5:p(V +), reg r11:V, reg warnErrList:cls, reg nlis1:*, reg nlis2:V, reg p6:p(V +), reg r13:V, reg stopifnot:cls, reg sapply1:cls, reg nl1:*, reg nl2:V, reg p7:p(V +), reg is_null:*, reg is_null1:V, reg p8:p(V +), reg r16:V, reg p9:p(V +), reg r18:V, reg lapply1:cls, reg ChWtgrps4:*, reg ChWtgrps5:V, reg p10:p(V +), reg r20:cls, reg p11:p(V +), reg r22:V, reg warnErrList1:cls, reg nlis3:*, reg nlis4:V, reg p12:p(V +), reg r24:V, reg stopifnot1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg nl3:*, reg nl4:V, reg nlis5:*, reg nlis6:V, reg identical:cls, reg r27:V, reg p13:p(V +), reg r29:V, reg lapply2:cls, reg ChWtgrps6:*, reg ChWtgrps7:V, reg p14:p(V +), reg r31:cls, reg p15:p(V +), reg r33:V, reg warnErrList2:cls, reg nlis7:*, reg nlis8:V, reg p16:p(V +), reg r35:V, reg stopifnot2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg nlis9:*, reg nlis10:V, reg c1:L, reg nlis12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r38:V, reg inherits:cls, reg r39:V, reg p17:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg nl5:*, reg nl6:V, reg c2:L, reg nl8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r43:V, reg nlis13:*, reg nlis14:V, reg c3:L, reg nlis16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r44:V, reg identical1:cls, reg r45:V, reg p18:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r47:V, reg r48:V, reg nl9:*, reg nl10:V, reg c4:L, reg nl12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r49:V, reg c5:V, reg p19:p(V +), reg r51:V, reg requireNamespace:cls, reg r52:V, reg c6:L, reg data:cls, reg Soybean:*, reg Soybean1:V, reg p20:p(V +), reg r54:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg Soybean2:*, reg Soybean3:V, reg attr:cls, reg r57:V, reg lapply3:cls, reg split1:cls, reg Soybean4:*, reg Soybean5:V, reg p21:p(V +), reg Soybean6:*, reg Soybean7:V, reg c7:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r59:V, reg p22:p(V +), reg r61:V, reg p23:p(V +), reg r63:cls, reg p24:p(V +), reg r65:V, reg warnErrList3:cls, reg L:*, reg L1:V, reg p25:p(V +), reg r67:V |
    mkenv;
    r = clos inner3217078087;
    st warnErrList = r;
    split = ldf split;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      ChickWeight = ld ChickWeight;
      ChickWeight1 = force? ChickWeight;
      checkMissing(ChickWeight1);
      return ChickWeight1;
    };
    p1 = prom<V +>{
      ChickWeight2 = ld ChickWeight;
      ChickWeight3 = force? ChickWeight2;
      checkMissing(ChickWeight3);
      c = `is.object`(ChickWeight3);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", ChickWeight3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r2 = dyn __(ChickWeight3, <missing>, "Chick");
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn split(p, p1);
    check L3() else D1();
  D1():
    deopt 7 [r4];
  L3():
    st ChWtgrps = r4;
    sapply = ldf sapply;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p2 = prom<V +>{
      ChWtgrps = ld ChWtgrps;
      ChWtgrps1 = force? ChWtgrps;
      checkMissing(ChWtgrps1);
      return ChWtgrps1;
    };
    p3 = prom<V +>{
      nrow = ld nrow;
      nrow1 = force? nrow;
      checkMissing(nrow1);
      return nrow1;
    };
    r7 = dyn sapply(p2, p3);
    check L5() else D3();
  D3():
    deopt 13 [r7];
  L5():
    lapply = ldf lapply;
    check L6() else D4();
  D4():
    deopt 15 [];
  L6():
    p4 = prom<V +>{
      ChWtgrps2 = ld ChWtgrps;
      ChWtgrps3 = force? ChWtgrps2;
      checkMissing(ChWtgrps3);
      return ChWtgrps3;
    };
    p5 = prom<V +>{
      r9 = clos inner4198839347;
      return r9;
    };
    r11 = dyn lapply(p4, p5);
    check L7() else D5();
  D5():
    deopt 18 [r11];
  L7():
    st nlis1 = r11;
    warnErrList = ldf warnErrList;
    check L8() else D6();
  D6():
    deopt 21 [];
  L8():
    p6 = prom<V +>{
      nlis1 = ld nlis1;
      nlis2 = force? nlis1;
      checkMissing(nlis2);
      return nlis2;
    };
    r13 = dyn warnErrList(p6);
    check L9() else D7();
  D7():
    deopt 23 [r13];
  L9():
    st nl1 = r13;
    stopifnot = ldf stopifnot;
    check L10() else D8();
  D8():
    deopt 26 [];
  L10():
    p9 = prom<V +>{
      sapply1 = ldf sapply;
      p7 = prom<V +>{
        nl1 = ld nl1;
        nl2 = force? nl1;
        checkMissing(nl2);
        return nl2;
      };
      p8 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r16 = dyn sapply1(p7, p8);
      return r16;
    };
    r18 = dyn stopifnot(p9);
    check L11() else D9();
  D9():
    deopt 28 [r18];
  L11():
    lapply1 = ldf lapply;
    check L12() else D10();
  D10():
    deopt 30 [];
  L12():
    p10 = prom<V +>{
      ChWtgrps4 = ld ChWtgrps;
      ChWtgrps5 = force? ChWtgrps4;
      checkMissing(ChWtgrps5);
      return ChWtgrps5;
    };
    p11 = prom<V +>{
      r20 = clos inner4198839347;
      return r20;
    };
    r22 = dyn lapply1(p10, p11);
    check L13() else D11();
  D11():
    deopt 33 [r22];
  L13():
    st nlis2 = r22;
    warnErrList1 = ldf warnErrList;
    check L14() else D12();
  D12():
    deopt 36 [];
  L14():
    p12 = prom<V +>{
      nlis3 = ld nlis2;
      nlis4 = force? nlis3;
      checkMissing(nlis4);
      return nlis4;
    };
    r24 = dyn warnErrList1(p12);
    check L15() else D13();
  D13():
    deopt 38 [r24];
  L15():
    st nl2 = r24;
    stopifnot1 = ldf stopifnot;
    check L16() else D14();
  D14():
    deopt 41 [];
  L16():
    p13 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r26):
      return r26;
    L1():
      nl3 = ld nl2;
      nl4 = force? nl3;
      checkMissing(nl4);
      nlis5 = ld nlis2;
      nlis6 = force? nlis5;
      checkMissing(nlis6);
      identical = ldf identical in base;
      r27 = dyn identical(nl4, nlis6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r27);
    L2():
      r25 = dyn base(<sym nl2>, <sym nlis2>);
      goto L0(r25);
    };
    r29 = dyn stopifnot1(p13);
    check L17() else D15();
  D15():
    deopt 43 [r29];
  L17():
    lapply2 = ldf lapply;
    check L18() else D16();
  D16():
    deopt 45 [];
  L18():
    p14 = prom<V +>{
      ChWtgrps6 = ld ChWtgrps;
      ChWtgrps7 = force? ChWtgrps6;
      checkMissing(ChWtgrps7);
      return ChWtgrps7;
    };
    p15 = prom<V +>{
      r31 = clos inner4198839347;
      return r31;
    };
    r33 = dyn lapply2(p14, p15);
    check L19() else D17();
  D17():
    deopt 48 [r33];
  L19():
    st nlis3 = r33;
    warnErrList2 = ldf warnErrList;
    check L20() else D18();
  D18():
    deopt 51 [];
  L20():
    p16 = prom<V +>{
      nlis7 = ld nlis3;
      nlis8 = force? nlis7;
      checkMissing(nlis8);
      return nlis8;
    };
    r35 = dyn warnErrList2(p16);
    check L21() else D19();
  D19():
    deopt 53 [r35];
  L21():
    st nl3 = r35;
    stopifnot2 = ldf stopifnot;
    check L22() else D20();
  D20():
    deopt 56 [];
  L22():
    p17 = prom<V +>{
      sym1 = ldf inherits;
      base1 = ldf inherits in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r37):
      return r37;
    L2():
      nlis9 = ld nlis3;
      nlis10 = force? nlis9;
      checkMissing(nlis10);
      c1 = `is.object`(nlis10);
      if c1 then L4() else L5(nlis10);
    L3():
      r36 = dyn base1(<lang `[[`(nlis3, 1.0)>, "error");
      goto L0(r36);
    L1(dx3):
      inherits = ldf inherits in base;
      r39 = dyn inherits(dx3, "error", FALSE);
      goto L0(r39);
    L4():
      dr2 = tryDispatchBuiltin.1("[[", nlis10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(nlis12):
      __1 = ldf `[[` in base;
      r38 = dyn __1(nlis12, 1.0);
      goto L1(r38);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    p18 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r42):
      return r42;
    L3():
      nl5 = ld nl3;
      nl6 = force? nl5;
      checkMissing(nl6);
      c2 = `is.object`(nl6);
      if c2 then L5() else L6(nl6);
    L4():
      r41 = dyn base2(<lang `[`(nl3, `-`(1.0))>, <lang `[`(nlis3, `-`(1.0))>);
      goto L0(r41);
    L1(dx5):
      nlis13 = ld nlis3;
      nlis14 = force? nlis13;
      checkMissing(nlis14);
      c3 = `is.object`(nlis14);
      if c3 then L8() else L9(nlis14);
    L5():
      dr4 = tryDispatchBuiltin.1("[", nl6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(nl8):
      __2 = ldf `[` in base;
      r43 = dyn __2(nl8, -1.0);
      goto L1(r43);
    L2(dx7):
      identical1 = ldf identical in base;
      r45 = dyn identical1(dx5, dx7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r45);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L8():
      dr6 = tryDispatchBuiltin.1("[", nlis14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(dr6);
    L9(nlis16):
      __3 = ldf `[` in base;
      r44 = dyn __3(nlis16, -1.0);
      goto L2(r44);
    L10():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    };
    p19 = prom<V +>{
      sym3 = ldf `is.null`;
      base3 = ldf `is.null` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r48):
      return r48;
    L2():
      nl9 = ld nl3;
      nl10 = force? nl9;
      checkMissing(nl10);
      c4 = `is.object`(nl10);
      if c4 then L4() else L5(nl10);
    L3():
      r47 = dyn base3(<lang `[[`(nl3, 1.0)>);
      goto L0(r47);
    L1(dx9):
      c5 = `==`(dx9, NULL);
      goto L0(c5);
    L4():
      dr8 = tryDispatchBuiltin.1("[[", nl10);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(nl12):
      __4 = ldf `[[` in base;
      r49 = dyn __4(nl12, 1.0);
      goto L1(r49);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r51 = dyn stopifnot2(p17, p18, p19);
    check L23() else D21();
  D21():
    deopt 60 [r51];
  L23():
    requireNamespace = ldf requireNamespace;
    check L24() else D22();
  D22():
    deopt 62 [];
  L24():
    r52 = dyn requireNamespace("nlme");
    check L25() else D23();
  D23():
    deopt 64 [r52];
  L25():
    c6 = `as.logical`(r52);
    if c6 then L26() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L26():
    data = ldf data;
    check L27() else D24();
  D24():
    deopt 66 [];
  L27():
    p20 = prom<V +>{
      Soybean = ld Soybean;
      Soybean1 = force? Soybean;
      checkMissing(Soybean1);
      return Soybean1;
    };
    r54 = dyn data[, package](p20, "nlme");
    check L28() else D25();
  D25():
    deopt 70 [r54];
  L28():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L1():
    lapply3 = ldf lapply;
    check L33() else D28();
  L29():
    Soybean2 = ld Soybean;
    check L31() else D26();
  L30():
    r55 = dyn base4(<sym Soybean>, "formula");
    goto L1();
  D26():
    deopt 73 [Soybean2];
  D28():
    deopt 79 [];
  L31():
    Soybean3 = force? Soybean2;
    checkMissing(Soybean3);
    attr = ldf attr in base;
    r57 = dyn attr(Soybean3, "formula");
    check L32() else D27();
  L33():
    p23 = prom<V +>{
      split1 = ldf split;
      p21 = prom<V +>{
        Soybean4 = ld Soybean;
        Soybean5 = force? Soybean4;
        checkMissing(Soybean5);
        return Soybean5;
      };
      p22 = prom<V +>{
        Soybean6 = ld Soybean;
        Soybean7 = force? Soybean6;
        checkMissing(Soybean7);
        c7 = `is.object`(Soybean7);
        if c7 then L1() else L2();
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", Soybean7);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2();
      L2():
        __5 = ldf `[` in base;
        r59 = dyn __5(Soybean7, <missing>, "Plot");
        goto L0(r59);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r61 = dyn split1(p21, p22);
      return r61;
    };
    p24 = prom<V +>{
      r63 = clos inner2097711392;
      return r63;
    };
    r65 = dyn lapply3(p23, p24);
    check L34() else D29();
  D27():
    deopt 77 [r57];
  D29():
    deopt 82 [r65];
  L32():
    goto L1();
  L34():
    st L = r65;
    warnErrList3 = ldf warnErrList;
    check L35() else D30();
  D30():
    deopt 85 [];
  L35():
    p25 = prom<V +>{
      L = ld L;
      L1 = force? L;
      checkMissing(L1);
      return L1;
    };
    r67 = dyn warnErrList3(p25);
    check L36() else D31();
  D31():
    deopt 87 [r67];
  L36():
    st Lw = r67;
    invisible.0();
    popenv;
    return r67;
  }
}
fun inner3217078087(x, warn, errValue) {
  (reg x:*, reg warn:*, reg errValue:*) -+> V { var x:*, var warn:*, reg warn_isMissing:L, reg warn_orDefault:*, var errValue:*, reg errValue_isMissing:L, reg errValue_orDefault:*, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg inherits:*, reg inherits1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg errs:*, reg errs1:V, reg any:cls, reg r5:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg errs2:*, reg errs3:V, reg __:cls, reg r6:V, reg deparse1:cls, reg conditionCall:cls, reg v_err:*, reg v_err1:V, reg c2:L, reg v_err3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg table:cls, reg vapply1:cls, reg v_err4:*, reg v_err5:V, reg p4:p(V +), reg conditionMessage:*, reg conditionMessage1:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg tt:*, reg tt1:V, reg length:cls, reg r19:V, reg r20:V, reg c3:L, reg sprintf:cls, reg ngettext:cls, reg tt2:*, reg tt3:V, reg c4:L, reg tt5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg tt6:*, reg tt7:V, reg c5:L, reg tt9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r25:V, reg p9:p(V +), reg e_call:*, reg e_call1:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg tt10:*, reg tt11:V, reg names:cls, reg r30:V, reg c6:L, reg r32:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r33:V, reg p11:p(V +), reg r35:V, reg r36:V, reg paste:cls, reg gettextf:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg tt12:*, reg tt13:V, reg sum:cls, reg r39:V, reg p12:p(V +), reg e_call2:*, reg e_call3:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg paste1:cls, reg capture_output:cls, reg sort:cls, reg tt14:*, reg tt15:V, reg p15:p(V +), reg r45:V, reg p16:p(V +), reg r47:V, reg p17:p(V +), reg r49:V, reg p18:p(V +), reg r51:V, reg warn1:*, reg warn2:V, reg c7:L, reg warning:cls, reg msg:*, reg msg1:V, reg p19:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg r56:V, reg errValue1:*, reg errValue2:V, reg list:cls, reg r57:V, reg l:*, reg c8:L, reg r59:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg errs4:*, reg errs5:V, reg ___:cls, reg r62:V, reg msg2:*, reg msg3:V, reg l3:*, reg attr__:cls, reg r63:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    warn_isMissing = missing.0(warn);
    if warn_isMissing then L0(TRUE) else L0(warn);
  L0(warn_orDefault):
    st warn = warn_orDefault;
    errValue_isMissing = missing.0(errValue);
    if errValue_isMissing then L1(NULL) else L1(errValue);
  L1(errValue_orDefault):
    st errValue = errValue_orDefault;
    vapply = ldf vapply;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r2 = dyn vapply[, , , what](p, p1, NA_LGL, "error");
    check L14() else D1();
  D1():
    deopt 7 [r2];
  L14():
    st errs = r2;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r4):
    c = `as.logical`(r4);
    if c then L19() else L3();
  L15():
    errs = ld errs;
    check L17() else D2();
  L16():
    r3 = dyn base(<sym errs>);
    goto L2(r3);
  D2():
    deopt 11 [errs];
  L3():
    goto L12();
  L12():
    x7 = ld x;
    check L56() else D25();
  L17():
    errs1 = force? errs;
    checkMissing(errs1);
    any = ldf any in base;
    r5 = dyn any(errs1);
    check L18() else D3();
  L19():
    x3 = ld x;
    check L20() else D4();
  D3():
    deopt 14 [r5];
  D4():
    deopt 15 [x3];
  D25():
    deopt 89 [x7];
  L18():
    goto L2(r5);
  L20():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L21() else L22(x4);
  L56():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L4(dx1):
    st `v.err` = dx1;
    deparse1 = ldf deparse1;
    check L25() else D6();
  L21():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x6):
    errs2 = ld errs;
    check L24() else D5();
  D5():
    deopt 17 [x6, errs2];
  D6():
    deopt 22 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L24():
    errs3 = force? errs2;
    __ = ldf `[` in base;
    r6 = dyn __(x6, errs3);
    goto L4(r6);
  L25():
    p3 = prom<V +>{
      conditionCall = ldf conditionCall;
      p2 = prom<V +>{
        v_err = ld `v.err`;
        v_err1 = force? v_err;
        checkMissing(v_err1);
        c2 = `is.object`(v_err1);
        if c2 then L1() else L2(v_err1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", v_err1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(v_err3):
        __1 = ldf `[[` in base;
        r7 = dyn __1(v_err3, 1.0);
        goto L0(r7);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r9 = dyn conditionCall(p2);
      return r9;
    };
    r11 = dyn deparse1[, collapse](p3, "\n");
    check L26() else D7();
  D7():
    deopt 26 [r11];
  L26():
    st `e.call` = r11;
    table = ldf table;
    check L27() else D8();
  D8():
    deopt 29 [];
  L27():
    p6 = prom<V +>{
      vapply1 = ldf vapply;
      p4 = prom<V +>{
        v_err4 = ld `v.err`;
        v_err5 = force? v_err4;
        checkMissing(v_err5);
        return v_err5;
      };
      p5 = prom<V +>{
        conditionMessage = ld conditionMessage;
        conditionMessage1 = force? conditionMessage;
        checkMissing(conditionMessage1);
        return conditionMessage1;
      };
      r14 = dyn vapply1(p4, p5, "");
      return r14;
    };
    r16 = dyn table(p6);
    check L28() else D9();
  D9():
    deopt 31 [r16];
  L28():
    st tt = r16;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L5(r18):
    r20 = `==`(r18, 1);
    c3 = `as.logical`(r20);
    if c3 then L33() else L6();
  L29():
    tt = ld tt;
    check L31() else D10();
  L30():
    r17 = dyn base1(<sym tt>);
    goto L5(r17);
  D10():
    deopt 35 [tt];
  L6():
    paste = ldf paste;
    check L37() else D14();
  L7(r36):
    st msg = r36;
    warn1 = ld warn;
    check L39() else D16();
  L31():
    tt1 = force? tt;
    checkMissing(tt1);
    length = ldf length in base;
    r19 = dyn length(tt1);
    check L32() else D11();
  L33():
    sprintf = ldf sprintf;
    check L34() else D12();
  D11():
    deopt 38 [r19];
  D12():
    deopt 42 [];
  D14():
    deopt 49 [];
  D16():
    deopt 56 [warn1];
  L32():
    goto L5(r19);
  L34():
    p8 = prom<V +>{
      ngettext = ldf ngettext;
      p7 = prom<V +>{
        tt2 = ld tt;
        tt3 = force? tt2;
        checkMissing(tt3);
        c4 = `is.object`(tt3);
        if c4 then L1() else L2(tt3);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", tt3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(tt5):
        __2 = ldf `[[` in base;
        r21 = dyn __2(tt5, 1);
        goto L0(r21);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r23 = dyn ngettext(p7, "%d error caught in %s: %s", "%d times caught the same error in %s: %s");
      return r23;
    };
    p9 = prom<V +>{
      tt6 = ld tt;
      tt7 = force? tt6;
      checkMissing(tt7);
      c5 = `is.object`(tt7);
      if c5 then L1() else L2(tt7);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", tt7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(tt9):
      __3 = ldf `[[` in base;
      r25 = dyn __3(tt9, 1);
      goto L0(r25);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p10 = prom<V +>{
      e_call = ld `e.call`;
      e_call1 = force? e_call;
      checkMissing(e_call1);
      return e_call1;
    };
    p11 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r29):
      c6 = `is.object`(r29);
      if c6 then L4() else L5(r29);
    L2():
      tt10 = ld tt;
      tt11 = force? tt10;
      checkMissing(tt11);
      names = ldf names in base;
      r30 = dyn names(tt11);
      goto L0(r30);
    L3():
      r28 = dyn base2(<sym tt>);
      goto L0(r28);
    L1(dx9):
      return dx9;
    L4():
      dr8 = tryDispatchBuiltin.1("[[", r29);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(r32):
      __4 = ldf `[[` in base;
      r33 = dyn __4(r32, 1);
      goto L1(r33);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r35 = dyn sprintf(p8, p9, p10, p11);
    check L35() else D13();
  L37():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sym3 = ldf sum;
        base3 = ldf sum in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r38):
        return r38;
      L1():
        tt12 = ld tt;
        tt13 = force? tt12;
        checkMissing(tt13);
        sum = ldf sum in base;
        r39 = dyn sum(tt13);
        goto L0(r39);
      L2():
        r37 = dyn base3(<sym tt>);
        goto L0(r37);
      };
      p13 = prom<V +>{
        e_call2 = ld `e.call`;
        e_call3 = force? e_call2;
        checkMissing(e_call3);
        return e_call3;
      };
      r42 = dyn gettextf("%d errors caught in %s.  The error messages and their frequencies are", p12, p13);
      return r42;
    };
    p18 = prom<V +>{
      paste1 = ldf paste;
      p17 = prom<V +>{
        capture_output = ldf `capture.output`;
        p16 = prom<V +>{
          sort = ldf sort;
          p15 = prom<V +>{
            tt14 = ld tt;
            tt15 = force? tt14;
            checkMissing(tt15);
            return tt15;
          };
          r45 = dyn sort(p15);
          return r45;
        };
        r47 = dyn capture_output(p16);
        return r47;
      };
      r49 = dyn paste1[, collapse](p17, "\n");
      return r49;
    };
    r51 = dyn paste[, , sep](p14, p18, "\n");
    check L38() else D15();
  L39():
    warn2 = force? warn1;
    checkMissing(warn2);
    c7 = `as.logical`(warn2);
    if c7 then L40() else L8();
  D13():
    deopt 47 [r35];
  D15():
    deopt 54 [r51];
  L8():
    goto L9();
  L9():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L35():
    goto L7(r35);
  L38():
    goto L7(r51);
  L40():
    warning = ldf warning;
    check L41() else D17();
  D17():
    deopt 59 [];
  L10(r56):
    l = ld x;
    c8 = `is.object`(l);
    if c8 then L48() else L49(r56, l);
  L41():
    p19 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r53 = dyn warning[, `call.`, domain](p19, FALSE, NA_LGL);
    check L42() else D18();
  L44():
    errValue1 = ld errValue;
    check L46() else D19();
  L45():
    r55 = dyn base4(<sym errValue>);
    goto L10(r55);
  D18():
    deopt 65 [r53];
  D19():
    deopt 70 [errValue1];
  L11(dx11):
    st x = dx11;
    msg2 = ld msg;
    check L52() else D22();
  L42():
    goto L9();
  L46():
    errValue2 = force? errValue1;
    checkMissing(errValue2);
    list = ldf list in base;
    r57 = dyn list(errValue2);
    check L47() else D20();
  L48():
    dr10 = tryDispatchBuiltin.0("[<-", l, r56);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L50() else L49(r56, dr10);
  L49(r59, l2):
    errs4 = ld errs;
    check L51() else D21();
  D20():
    deopt 73 [r57];
  D21():
    deopt 75 [r59, l2, r56, errs4];
  D22():
    deopt 79 [msg2];
  L47():
    goto L10(r57);
  L50():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L51():
    errs5 = force? errs4;
    ___ = ldf `[<-` in base;
    r62 = dyn ___(l2, r56, errs5);
    goto L11(r62);
  L52():
    msg3 = force? msg2;
    checkMissing(msg3);
    l3 = ld x;
    attr__ = ldf `attr<-`;
    check L53() else D23();
  D23():
    deopt 82 [msg3, l3, msg3];
  L53():
    r63 = dyn attr__(l3, NULL, "warningMsg", msg3);
    check L54() else D24();
  D24():
    deopt 85 [msg3, r63];
  L54():
    st x = r63;
    goto L12();
  }
}
fun inner4198839347(DAT) {
  (reg DAT:*) -+> V { var DAT:*, reg tryCatch:cls, reg identity:*, reg identity1:V, reg p:p(V +), reg lm:cls, reg __:cls, reg r1:V, reg p1:p(V +), reg DAT1:*, reg DAT2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st DAT = DAT;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    p3 = prom<V +>{
      lm = ldf lm;
      p1 = prom<V +>{
        __ = ldf `~` in base;
        r1 = dyn __(<sym weight>, <lang `*`(`(`(`+`(Time, I(`^`(Time, 2.0)))), Diet)>);
        return r1;
      };
      p2 = prom<V +>{
        DAT1 = ld DAT;
        DAT2 = force? DAT1;
        checkMissing(DAT2);
        return DAT2;
      };
      r4 = dyn lm[, data](p1, p2);
      return r4;
    };
    r6 = dyn tryCatch[error, ](p, p3);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner2097711392(DD) {
  (reg DD:*) -+> V { var DD:*, reg tryCatch:cls, reg identity:*, reg identity1:V, reg p:p(V +), reg nls:cls, reg __:cls, reg r1:V, reg p1:p(V +), reg DD1:*, reg DD2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st DD = DD;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    p3 = prom<V +>{
      nls = ldf nls;
      p1 = prom<V +>{
        __ = ldf `~` in base;
        r1 = dyn __(<sym weight>, <lang SSlogis(Time, Asym, xmid, scal)>);
        return r1;
      };
      p2 = prom<V +>{
        DD1 = ld DD;
        DD2 = force? DD1;
        checkMissing(DD2);
        return DD2;
      };
      r4 = dyn nls[, data](p1, p2);
      return r4;
    };
    r6 = dyn tryCatch[error, ](p, p3);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}