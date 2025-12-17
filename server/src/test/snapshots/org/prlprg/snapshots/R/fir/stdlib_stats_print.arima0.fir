fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2231764714;
    st `print.arima0` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2231764714(x, digits, se, `...`) {
  (reg x:*, reg digits:*, reg se:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var se:*, reg se_isMissing:L, reg se_orDefault:*, var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg cat1:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg round:cls, reg r14:V, reg se1:*, reg se2:V, reg c1:L, reg c3:V, reg nrow:cls, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p3:p(V +), reg r17:V, reg c5:L, reg c6:V, reg c8:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg coef:*, reg coef1:V, reg length:cls, reg r22:V, reg rep_len:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg round1:cls, reg r26:V, reg l:*, reg c9:L, reg r28:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg x9:*, reg x10:V, reg c10:L, reg r33:V, reg l4:*, reg r34:V, reg x12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r37:V, reg l6:*, reg r38:V, reg dx7:V, reg r39:V, reg ___:cls, reg r40:V, reg matrix:cls, reg coef2:*, reg coef3:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg coef4:*, reg coef5:V, reg names:cls, reg r46:V, reg list:cls, reg r47:V, reg p5:p(V +), reg r49:V, reg rbind:cls, reg coef6:*, reg coef7:V, reg p6:p(V +), reg ses:*, reg ses1:V, reg p7:p(V +), reg r52:V, reg print_default:cls, reg coef8:*, reg coef9:V, reg p8:p(V +), reg r55:V, reg x13:*, reg x14:V, reg c11:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r56:V, reg c12:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg cm:*, reg cm1:V, reg c13:V, reg c14:L, reg c15:V, reg cm2:*, reg cm3:V, reg r60:V, reg c17:L, reg c18:V, reg c20:L, reg cat2:cls, reg format:cls, reg x17:*, reg x18:V, reg c21:L, reg x20:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r61:V, reg p9:p(V +), reg digits1:*, reg digits2:V, reg p10:p(V +), reg r64:V, reg p11:p(V +), reg format1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg round2:cls, reg r68:V, reg p12:p(V +), reg r70:V, reg p13:p(V +), reg format2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg round3:cls, reg r74:V, reg p14:p(V +), reg r76:V, reg p15:p(V +), reg r78:V, reg cat3:cls, reg format3:cls, reg x21:*, reg x22:V, reg c22:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r80:V, reg p16:p(V +), reg digits3:*, reg digits4:V, reg p17:p(V +), reg r83:V, reg p18:p(V +), reg format4:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r85:V, reg r86:V, reg round4:cls, reg r87:V, reg p19:p(V +), reg r89:V, reg p20:p(V +), reg r91:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r92:V, reg r93:V, reg x25:*, reg x26:V, reg invisible:cls, reg r94:V |
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
    se_isMissing = missing.0(se);
    if se_isMissing then L2(TRUE) else L2(se);
  L2(se_orDefault):
    st se = se_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p2 = prom<V +>{
      deparse = ldf deparse;
      p1 = prom<V +>{
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
        r6 = `$`(x4, <sym call>);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r8 = dyn deparse[, `width.cutoff`](p1, 75);
      return r8;
    };
    r10 = dyn cat[, , , sep]("\nCall:", p2, "", "\n");
    check L17() else D1();
  D1():
    deopt 7 [r10];
  L17():
    cat1 = ldf cat;
    check L18() else D2();
  D2():
    deopt 9 [];
  L18():
    r11 = dyn cat1("Coefficients:\n");
    check L19() else D3();
  D3():
    deopt 11 [r11];
  L19():
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(r13):
    st coef = r13;
    se1 = ld se;
    check L22() else D4();
  L20():
    round = ldf round in base;
    r14 = dyn round(<lang `$`(x, coef)>, <sym digits>);
    goto L3(r14);
  L21():
    r12 = dyn base1[, digits](<lang `$`(x, coef)>, <sym digits>);
    goto L3(r12);
  D4():
    deopt 16 [se1];
  L22():
    se2 = force? se1;
    checkMissing(se2);
    c1 = `as.logical`(se2);
    if c1 then L23() else L4(c1);
  L4(c3):
    c8 = `as.logical`(c3);
    if c8 then L27() else L5();
  L23():
    nrow = ldf nrow;
    check L24() else D5();
  D5():
    deopt 19 [c1];
  L5():
    goto L10();
  L10():
    print_default = ldf `print.default`;
    check L50() else D15();
  L24():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c4 = `is.object`(x6);
      if c4 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r15 = `$`(x8, <sym var.coef>);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn nrow(p3);
    check L25() else D6();
  L27():
    sym2 = ldf rep_len;
    base2 = ldf rep_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  D6():
    deopt 21 [c1, r17];
  D15():
    deopt 62 [];
  L6(r19):
    st ses = r19;
    sym4 = ldf round;
    base4 = ldf round in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L25():
    c5 = `as.logical`(r17);
    c6 = `&&`(c1, c5);
    goto L4(c6);
  L28():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L29():
    r18 = dyn base2(0.0, <lang length(coef)>);
    goto L6(r18);
  L50():
    p8 = prom<V +>{
      coef8 = ld coef;
      coef9 = force? coef8;
      checkMissing(coef9);
      return coef9;
    };
    r55 = dyn print_default[, `print.gap`](p8, 2.0);
    check L51() else D16();
  D16():
    deopt 66 [r55];
  L7(r21):
    rep_len = ldf rep_len in base;
    r23 = dyn rep_len(0.0, r21);
    check L34() else D9();
  L8(r25):
    l = ld ses;
    c9 = `is.object`(l);
    if c9 then L37() else L38(r25, l);
  L30():
    coef = ld coef;
    check L32() else D7();
  L31():
    r20 = dyn base3(<sym coef>);
    goto L7(r20);
  L35():
    round1 = ldf round in base;
    r26 = dyn round1(<lang sqrt(diag(`$`(x, var.coef)))>, <sym digits>);
    goto L8(r26);
  L36():
    r24 = dyn base4[, digits](<lang sqrt(diag(`$`(x, var.coef)))>, <sym digits>);
    goto L8(r24);
  L51():
    x13 = ld x;
    check L52() else D17();
  D7():
    deopt 28 [coef];
  D9():
    deopt 33 [r23];
  D17():
    deopt 67 [x13];
  L9(dx5):
    st ses = dx5;
    matrix = ldf matrix;
    check L45() else D11();
  L32():
    coef1 = force? coef;
    checkMissing(coef1);
    length = ldf length in base;
    r22 = dyn length(coef1);
    check L33() else D8();
  L34():
    goto L6(r23);
  L37():
    dr4 = tryDispatchBuiltin.0("[<-", l, r25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L39() else L38(r25, dr4);
  L38(r28, l2):
    x9 = ld x;
    check L40() else D10();
  L52():
    x14 = force? x13;
    checkMissing(x14);
    c11 = `is.object`(x14);
    if c11 then L54() else L55(x14);
  D8():
    deopt 31 [r22];
  D10():
    deopt 39 [r28, l2, r25, x9];
  D11():
    deopt 45 [];
  L33():
    goto L7(r22);
  L39():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L40():
    x10 = force? x9;
    checkMissing(x10);
    c10 = `is.object`(x10);
    if c10 then L42() else L43(r28, l2, r25, x10);
  L45():
    p4 = prom<V +>{
      coef2 = ld coef;
      coef3 = force? coef2;
      checkMissing(coef3);
      return coef3;
    };
    p5 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r43):
      return r43;
    L2():
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r42 = dyn base5(NULL, <lang names(coef)>);
      goto L0(r42);
    L1(r45):
      list = ldf list in base;
      r47 = dyn list(NULL, r45);
      goto L0(r47);
    L4():
      coef4 = ld coef;
      coef5 = force? coef4;
      checkMissing(coef5);
      names = ldf names in base;
      r46 = dyn names(coef5);
      goto L1(r46);
    L5():
      r44 = dyn base6(<sym coef>);
      goto L1(r44);
    };
    r49 = dyn matrix[, , dimnames](p4, 1.0, p5);
    check L46() else D12();
  L53(dx9):
    c12 = `is.object`(dx9);
    if c12 then L58() else L59(dx9);
  L54():
    dr8 = tryDispatchBuiltin.1("$", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(dr8);
  L55(x16):
    r56 = `$`(x16, <sym call>);
    goto L53(r56);
  D12():
    deopt 50 [r49];
  L41(r37, l6, r38, dx7):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l6, r38, dx7);
    goto L9(r40);
  L42():
    dr6 = tryDispatchBuiltin.1("$", x10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(r28, l2, r25, dr6);
  L43(r33, l4, r34, x12):
    r39 = `$`(x12, <sym mask>);
    goto L41(r33, l4, r34, r39);
  L46():
    st coef = r49;
    rbind = ldf rbind;
    check L47() else D13();
  L56():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L53(dx8);
  L57(dx13):
    st cm = dx13;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  L58():
    dr10 = tryDispatchBuiltin.1("$", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L60() else L59(dr10);
  L59(dx11):
    r57 = `$`(dx11, <sym method>);
    goto L57(r57);
  D13():
    deopt 53 [];
  L11(r59):
    c14 = `as.logical`(r59);
    if c14 then L12(c14) else L64();
  L44():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L41(r28, l2, r25, dx6);
  L47():
    p6 = prom<V +>{
      coef6 = ld coef;
      coef7 = force? coef6;
      checkMissing(coef7);
      return coef7;
    };
    p7 = prom<V +>{
      ses = ld ses;
      ses1 = force? ses;
      checkMissing(ses1);
      return ses1;
    };
    r52 = dyn rbind[, `s.e.`](p6, p7);
    check L48() else D14();
  L60():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L57(dx12);
  L61():
    cm = ld cm;
    check L63() else D18();
  L62():
    r58 = dyn base7(<sym cm>);
    goto L11(r58);
  D14():
    deopt 57 [r52];
  D18():
    deopt 73 [cm];
  L12(c15):
    c20 = `as.logical`(c15);
    if c20 then L67() else L13();
  L48():
    st coef = r52;
    goto L10();
  L63():
    cm1 = force? cm;
    checkMissing(cm1);
    c13 = `==`(cm1, NULL);
    goto L11(c13);
  L64():
    cm2 = ld cm;
    check L65() else D19();
  D19():
    deopt 76 [c14, cm2];
  L13():
    cat3 = ldf cat;
    check L71() else D22();
  L14():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L73() else L74();
  L65():
    cm3 = force? cm2;
    checkMissing(cm3);
    r60 = `!=`(cm3, "CSS");
    c17 = `as.logical`(r60);
    c18 = `||`(c14, c17);
    goto L12(c18);
  L67():
    cat2 = ldf cat;
    check L68() else D20();
  D20():
    deopt 82 [];
  D22():
    deopt 94 [];
  L15(r93):
    popenv;
    return r93;
  L68():
    p11 = prom<V +>{
      format = ldf format;
      p9 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c21 = `is.object`(x18);
        if c21 then L1() else L2(x18);
      L0(dx15):
        return dx15;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x18);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x20):
        r61 = `$`(x20, <sym sigma2>);
        goto L0(r61);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx14);
      };
      p10 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r64 = dyn format[, digits](p9, p10);
      return r64;
    };
    p13 = prom<V +>{
      format1 = ldf format;
      p12 = prom<V +>{
        sym8 = ldf round;
        base8 = ldf round in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r67):
        return r67;
      L1():
        round2 = ldf round in base;
        r68 = dyn round2(<lang `$`(x, loglik)>, 2.0);
        goto L0(r68);
      L2():
        r66 = dyn base8(<lang `$`(x, loglik)>, 2.0);
        goto L0(r66);
      };
      r70 = dyn format1(p12);
      return r70;
    };
    p15 = prom<V +>{
      format2 = ldf format;
      p14 = prom<V +>{
        sym9 = ldf round;
        base9 = ldf round in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r73):
        return r73;
      L1():
        round3 = ldf round in base;
        r74 = dyn round3(<lang `$`(x, aic)>, 2.0);
        goto L0(r74);
      L2():
        r72 = dyn base9(<lang `$`(x, aic)>, 2.0);
        goto L0(r72);
      };
      r76 = dyn format2(p14);
      return r76;
    };
    r78 = dyn cat2[, , , , , , , sep]("\nsigma^2 estimated as ", p11, ":  log likelihood = ", p13, ",  aic = ", p15, "\n", "");
    check L69() else D21();
  L71():
    p18 = prom<V +>{
      format3 = ldf format;
      p16 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c22 = `is.object`(x22);
        if c22 then L1() else L2(x22);
      L0(dx17):
        return dx17;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x22);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x24):
        r80 = `$`(x24, <sym sigma2>);
        goto L0(r80);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx16);
      };
      p17 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r83 = dyn format3[, digits](p16, p17);
      return r83;
    };
    p20 = prom<V +>{
      format4 = ldf format;
      p19 = prom<V +>{
        sym10 = ldf round;
        base10 = ldf round in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r86):
        return r86;
      L1():
        round4 = ldf round in base;
        r87 = dyn round4(<lang `$`(x, loglik)>, 2.0);
        goto L0(r87);
      L2():
        r85 = dyn base10(<lang `$`(x, loglik)>, 2.0);
        goto L0(r85);
      };
      r89 = dyn format4(p19);
      return r89;
    };
    r91 = dyn cat3[, , , , , sep]("\nsigma^2 estimated as ", p18, ":  part log likelihood = ", p20, "\n", "");
    check L72() else D23();
  L73():
    x25 = ld x;
    check L75() else D24();
  L74():
    r92 = dyn base11(<sym x>);
    goto L15(r92);
  D21():
    deopt 92 [r78];
  D23():
    deopt 102 [r91];
  D24():
    deopt 105 [x25];
  L69():
    goto L14();
  L72():
    goto L14();
  L75():
    x26 = force? x25;
    checkMissing(x26);
    invisible = ldf invisible in base;
    r94 = dyn invisible(x26);
    check L76() else D25();
  D25():
    deopt 108 [r94];
  L76():
    goto L15(r94);
  }
}