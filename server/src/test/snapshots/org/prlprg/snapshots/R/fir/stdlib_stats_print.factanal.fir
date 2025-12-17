fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner297855152;
    st `print.factanal` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner297855152(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg cat1:cls, reg r5:V, reg print:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg round:cls, reg r8:V, reg p2:p(V +), reg ddd1:dots?, reg r10:V, reg print1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p3:p(V +), reg digits1:*, reg digits2:V, reg p4:p(V +), reg ddd2:dots?, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg c3:V, reg r18:V, reg c4:L, reg solve:cls, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r19:V, reg p5:p(V +), reg r21:V, reg tmat:*, reg tmat1:V, reg t:cls, reg tmat2:*, reg tmat3:V, reg p6:p(V +), reg r23:V, reg ___:cls, reg r24:V, reg x17:*, reg x18:V, reg c6:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r25:V, reg paste0:cls, reg factors:*, reg factors1:V, reg r26:V, reg p7:p(V +), reg r28:V, reg l:*, reg colnames__:cls, reg r29:V, reg l1:*, reg rownames__:cls, reg r30:V, reg isTRUE:cls, reg all_equal:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg R:*, reg R1:V, reg c7:cls, reg r33:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg diag:cls, reg factors2:*, reg factors3:V, reg p9:p(V +), reg r38:V, reg c8:cls, reg r39:V, reg p10:p(V +), reg r41:V, reg p11:p(V +), reg r43:V, reg r44:V, reg c9:L, reg cat2:cls, reg r45:V, reg print2:cls, reg R2:*, reg R3:V, reg p12:p(V +), reg digits3:*, reg digits4:V, reg p13:p(V +), reg ddd3:dots?, reg r48:V, reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r51:V, reg r52:V, reg x21:*, reg x22:V, reg c10:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r53:V, reg c11:V, reg r54:V, reg c12:L, reg x25:*, reg x26:V, reg c13:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r55:V, reg cat3:cls, reg factors4:*, reg factors5:V, reg p14:p(V +), reg factors6:*, reg factors7:V, reg r57:V, reg c14:L, reg p15:p(V +), reg r59:V, reg cat4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg round1:cls, reg r62:V, reg p16:p(V +), reg x29:*, reg x30:V, reg c15:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r64:V, reg p17:p(V +), reg x33:*, reg x34:V, reg c16:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r66:V, reg r67:V, reg c17:L, reg p18:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r69:V, reg r70:V, reg signif:cls, reg r71:V, reg p19:p(V +), reg r73:V, reg cat5:cls, reg paste1:cls, reg x37:*, reg x38:V, reg c18:L, reg x40:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r75:V, reg p20:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r77:V, reg r78:V, reg round2:cls, reg r79:V, reg p21:p(V +), reg r81:V, reg p22:p(V +), reg r83:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r84:V, reg r85:V, reg x41:*, reg x42:V, reg invisible:cls, reg r86:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(3.0) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p1 = prom<V +>{
      deparse = ldf deparse;
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
        r = `$`(x4, <sym call>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn deparse(p);
      return r2;
    };
    r4 = dyn cat[, , , sep]("\nCall:\n", p1, "\n\n", "");
    check L11() else D1();
  D1():
    deopt 7 [r4];
  L11():
    cat1 = ldf cat;
    check L12() else D2();
  D2():
    deopt 9 [];
  L12():
    r5 = dyn cat1("Uniquenesses:\n");
    check L13() else D3();
  D3():
    deopt 11 [r5];
  L13():
    print = ldf print;
    check L14() else D4();
  D4():
    deopt 13 [];
  L14():
    p2 = prom<V +>{
      sym = ldf round;
      base = ldf round in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      round = ldf round in base;
      r8 = dyn round(<lang `$`(x, uniquenesses)>, <sym digits>);
      goto L0(r8);
    L2():
      r6 = dyn base(<lang `$`(x, uniquenesses)>, <sym digits>);
      goto L0(r6);
    };
    ddd1 = ld `...`;
    r10 = dyn print[, `...`](p2, ddd1);
    check L15() else D5();
  D5():
    deopt 16 [r10];
  L15():
    print1 = ldf print;
    check L16() else D6();
  D6():
    deopt 18 [];
  L16():
    p3 = prom<V +>{
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
      r11 = `$`(x8, <sym loadings>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd2 = ld `...`;
    r14 = dyn print1[, digits, `...`](p3, p4, ddd2);
    check L17() else D7();
  D7():
    deopt 23 [r14];
  L17():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L1(r16):
    r18 = `!`(r16);
    c4 = `as.logical`(r18);
    if c4 then L25() else L2();
  L18():
    x9 = ld x;
    check L20() else D8();
  L19():
    r15 = dyn base1(<lang `$`(x, rotmat)>);
    goto L1(r15);
  D8():
    deopt 25 [x9];
  L2():
    goto L5();
  L5():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L20():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L22() else L23(x10);
  L25():
    solve = ldf solve;
    check L26() else D9();
  D9():
    deopt 31 [];
  L6(r52):
    r54 = `!`(r52);
    c12 = `as.logical`(r54);
    if c12 then L59() else L7();
  L21(dx5):
    c3 = `==`(dx5, NULL);
    goto L1(c3);
  L22():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(dr4);
  L23(x12):
    r17 = `$`(x12, <sym rotmat>);
    goto L21(r17);
  L26():
    p5 = prom<V +>{
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
      r19 = `$`(x16, <sym rotmat>);
      goto L0(r19);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r21 = dyn solve(p5);
    check L27() else D10();
  L52():
    x21 = ld x;
    check L54() else D28();
  L53():
    r51 = dyn base4(<lang `$`(x, STATISTIC)>);
    goto L6(r51);
  D10():
    deopt 33 [r21];
  D28():
    deopt 85 [x21];
  L7():
    cat5 = ldf cat;
    check L70() else D34();
  L8():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  L24():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(dx4);
  L27():
    st tmat = r21;
    tmat = ld tmat;
    check L28() else D11();
  L54():
    x22 = force? x21;
    checkMissing(x22);
    c10 = `is.object`(x22);
    if c10 then L56() else L57(x22);
  L59():
    x25 = ld x;
    check L60() else D29();
  D11():
    deopt 36 [tmat];
  D29():
    deopt 90 [x25];
  D34():
    deopt 113 [];
  L9(r85):
    popenv;
    return r85;
  L28():
    tmat1 = force? tmat;
    checkMissing(tmat1);
    t = ldf t;
    check L29() else D12();
  L55(dx11):
    c11 = `==`(dx11, NULL);
    goto L6(c11);
  L56():
    dr10 = tryDispatchBuiltin.1("$", x22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L58() else L57(dr10);
  L57(x24):
    r53 = `$`(x24, <sym STATISTIC>);
    goto L55(r53);
  L60():
    x26 = force? x25;
    checkMissing(x26);
    c13 = `is.object`(x26);
    if c13 then L62() else L63(x26);
  L70():
    p22 = prom<V +>{
      paste1 = ldf paste;
      p20 = prom<V +>{
        x37 = ld x;
        x38 = force? x37;
        checkMissing(x38);
        c18 = `is.object`(x38);
        if c18 then L1() else L2(x38);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("$", x38);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(x40):
        r75 = `$`(x40, <sym dof>);
        goto L0(r75);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      p21 = prom<V +>{
        sym7 = ldf round;
        base7 = ldf round in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r78):
        return r78;
      L1():
        round2 = ldf round in base;
        r79 = dyn round2(<lang `[`(`$`(x, criteria), "objective")>, 4.0);
        goto L0(r79);
      L2():
        r77 = dyn base7(<lang `[`(`$`(x, criteria), "objective")>, 4.0);
        goto L0(r77);
      };
      r81 = dyn paste1("\nThe degrees of freedom for the model is", p20, "and the fit was", p21, "\n");
      return r81;
    };
    r83 = dyn cat5(p22);
    check L71() else D35();
  L72():
    x41 = ld x;
    check L74() else D36();
  L73():
    r84 = dyn base8(<sym x>);
    goto L9(r84);
  D12():
    deopt 39 [];
  D35():
    deopt 115 [r83];
  D36():
    deopt 118 [x41];
  L29():
    p6 = prom<V +>{
      tmat2 = ld tmat;
      tmat3 = force? tmat2;
      checkMissing(tmat3);
      return tmat3;
    };
    r23 = dyn t(p6);
    check L30() else D13();
  L58():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L55(dx10);
  L61(dx13):
    st factors = dx13;
    cat3 = ldf cat;
    check L65() else D30();
  L62():
    dr12 = tryDispatchBuiltin.1("$", x26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L64() else L63(dr12);
  L63(x28):
    r55 = `$`(x28, <sym factors>);
    goto L61(r55);
  L71():
    goto L8();
  L74():
    x42 = force? x41;
    checkMissing(x42);
    invisible = ldf invisible in base;
    r86 = dyn invisible(x42);
    check L75() else D37();
  D13():
    deopt 41 [r23];
  D30():
    deopt 95 [];
  D37():
    deopt 121 [r86];
  L30():
    ___ = ldf `%*%` in base;
    r24 = dyn ___(tmat1, r23);
    check L31() else D14();
  L64():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L61(dx12);
  L65():
    p14 = prom<V +>{
      factors4 = ld factors;
      factors5 = force? factors4;
      checkMissing(factors5);
      return factors5;
    };
    p15 = prom<V +>{
      factors6 = ld factors;
      factors7 = force? factors6;
      checkMissing(factors7);
      r57 = `==`(factors7, 1.0);
      c14 = `as.logical`(r57);
      if c14 then L1() else L0();
    L0():
      return "factors are";
    L1():
      return "factor is";
    };
    r59 = dyn cat3("\nTest of the hypothesis that", p14, p15, "sufficient.\n");
    check L66() else D31();
  L75():
    goto L9(r86);
  D14():
    deopt 43 [r24];
  D31():
    deopt 100 [r59];
  L31():
    st R = r24;
    x17 = ld x;
    check L32() else D15();
  L66():
    cat4 = ldf cat;
    check L67() else D32();
  D15():
    deopt 45 [x17];
  D32():
    deopt 102 [];
  L32():
    x18 = force? x17;
    checkMissing(x18);
    c6 = `is.object`(x18);
    if c6 then L34() else L35(x18);
  L67():
    p16 = prom<V +>{
      sym5 = ldf round;
      base5 = ldf round in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      round1 = ldf round in base;
      r62 = dyn round1(<lang `$`(x, STATISTIC)>, 2.0);
      goto L0(r62);
    L2():
      r60 = dyn base5(<lang `$`(x, STATISTIC)>, 2.0);
      goto L0(r60);
    };
    p17 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c15 = `is.object`(x30);
      if c15 then L1() else L2(x30);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x30);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x32):
      r64 = `$`(x32, <sym dof>);
      goto L0(r64);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p18 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c16 = `is.object`(x34);
      if c16 then L2() else L3(x34);
    L1(dx17):
      r67 = `==`(dx17, 1.0);
      c17 = `as.logical`(r67);
      if c17 then L5() else L0();
    L2():
      dr16 = tryDispatchBuiltin.1("$", x34);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(x36):
      r66 = `$`(x36, <sym dof>);
      goto L1(r66);
    L0():
      return "degrees";
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx16);
    L5():
      return "degree";
    };
    p19 = prom<V +>{
      sym6 = ldf signif;
      base6 = ldf signif in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      signif = ldf signif in base;
      r71 = dyn signif(<lang `$`(x, PVAL)>, 3.0);
      goto L0(r71);
    L2():
      r69 = dyn base6(<lang `$`(x, PVAL)>, 3.0);
      goto L0(r69);
    };
    r73 = dyn cat4("The chi square statistic is", p16, "on", p17, p18, "of freedom.\nThe p-value is", p19, "\n");
    check L68() else D33();
  D33():
    deopt 111 [r73];
  L33(dx9):
    st factors = dx9;
    paste0 = ldf paste0;
    check L37() else D16();
  L34():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L36() else L35(dr8);
  L35(x20):
    r25 = `$`(x20, <sym factors>);
    goto L33(r25);
  L68():
    goto L8();
  D16():
    deopt 50 [];
  L36():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L33(dx8);
  L37():
    p7 = prom<V +>{
      factors = ld factors;
      factors1 = force? factors;
      checkMissing(factors1);
      r26 = `:`(1.0, factors1);
      return r26;
    };
    r28 = dyn paste0("Factor", p7);
    check L38() else D17();
  D17():
    deopt 53 [r28];
  L38():
    l = ld R;
    colnames__ = ldf `colnames<-`;
    check L39() else D18();
  D18():
    deopt 55 [r28, l, r28];
  L39():
    r29 = dyn colnames__(l, NULL, r28);
    check L40() else D19();
  D19():
    deopt 57 [r28, r29];
  L40():
    st R = r29;
    l1 = ld R;
    rownames__ = ldf `rownames<-`;
    check L41() else D20();
  D20():
    deopt 60 [r28, l1, r28];
  L41():
    r30 = dyn rownames__(l1, NULL, r28);
    check L42() else D21();
  D21():
    deopt 62 [r28, r30];
  L42():
    st R = r30;
    isTRUE = ldf isTRUE;
    check L43() else D22();
  D22():
    deopt 65 [];
  L43():
    p11 = prom<V +>{
      all_equal = ldf `all.equal`;
      p8 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r32):
        return r32;
      L1():
        R = ld R;
        R1 = force? R;
        checkMissing(R1);
        c7 = ldf c in base;
        r33 = dyn c7(R1);
        goto L0(r33);
      L2():
        r31 = dyn base2(<sym R>);
        goto L0(r31);
      };
      p10 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r36):
        return r36;
      L1():
        diag = ldf diag;
        p9 = prom<V +>{
          factors2 = ld factors;
          factors3 = force? factors2;
          checkMissing(factors3);
          return factors3;
        };
        r38 = dyn diag(p9);
        c8 = ldf c in base;
        r39 = dyn c8(r38);
        goto L0(r39);
      L2():
        r35 = dyn base3(<lang diag(factors)>);
        goto L0(r35);
      };
      r41 = dyn all_equal(p8, p10);
      return r41;
    };
    r43 = dyn isTRUE(p11);
    check L44() else D23();
  D23():
    deopt 67 [r43];
  L44():
    r44 = `!`(r43);
    c9 = `as.logical`(r44);
    if c9 then L45() else L3();
  L3():
    goto L4(NULL);
  L4(r49):
    goto L5();
  L45():
    cat2 = ldf cat;
    check L46() else D24();
  D24():
    deopt 70 [];
  L46():
    r45 = dyn cat2("\nFactor Correlations:\n");
    check L47() else D25();
  D25():
    deopt 72 [r45];
  L47():
    print2 = ldf print;
    check L48() else D26();
  D26():
    deopt 74 [];
  L48():
    p12 = prom<V +>{
      R2 = ld R;
      R3 = force? R2;
      checkMissing(R3);
      return R3;
    };
    p13 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    ddd3 = ld `...`;
    r48 = dyn print2[, digits, `...`](p12, p13, ddd3);
    check L49() else D27();
  D27():
    deopt 79 [r48];
  L49():
    goto L4(r48);
  }
}