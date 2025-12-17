fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2231764714;
    st `print.Arima` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2231764714(x, digits, se, `...`) {
  (reg x:*, reg digits:*, reg se:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var se:*, reg se_isMissing:L, reg se_orDefault:*, var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg length:cls, reg r14:V, reg c2:L, reg cat1:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg round:cls, reg r18:V, reg se1:*, reg se2:V, reg c3:L, reg c5:V, reg NROW:cls, reg x9:*, reg x10:V, reg c6:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg p3:p(V +), reg r21:V, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg coef:*, reg coef1:V, reg length1:cls, reg r26:V, reg rep_int:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg round1:cls, reg r30:V, reg l:*, reg c11:L, reg r32:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg x13:*, reg x14:V, reg c12:L, reg r37:V, reg l4:*, reg r38:V, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r41:V, reg l6:*, reg r42:V, reg dx9:V, reg r43:V, reg ___:cls, reg r44:V, reg matrix:cls, reg coef2:*, reg coef3:V, reg p4:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg coef4:*, reg coef5:V, reg names:cls, reg r50:V, reg list:cls, reg r51:V, reg p5:p(V +), reg r53:V, reg rbind:cls, reg coef6:*, reg coef7:V, reg p6:p(V +), reg ses:*, reg ses1:V, reg p7:p(V +), reg r56:V, reg print_default:cls, reg coef8:*, reg coef9:V, reg p8:p(V +), reg r59:V, reg x17:*, reg x18:V, reg c13:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r61:V, reg c14:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg cm:*, reg cm1:V, reg c15:V, reg c16:L, reg c17:V, reg cm2:*, reg cm3:V, reg r65:V, reg c19:L, reg c20:V, reg c22:L, reg cat2:cls, reg format:cls, reg x21:*, reg x22:V, reg c23:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r66:V, reg p9:p(V +), reg digits1:*, reg digits2:V, reg p10:p(V +), reg r69:V, reg p11:p(V +), reg format1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg round2:cls, reg r73:V, reg p12:p(V +), reg r75:V, reg p13:p(V +), reg format2:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r77:V, reg r78:V, reg round3:cls, reg r79:V, reg p14:p(V +), reg r81:V, reg p15:p(V +), reg r83:V, reg cat3:cls, reg format3:cls, reg x25:*, reg x26:V, reg c24:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r85:V, reg p16:p(V +), reg digits3:*, reg digits4:V, reg p17:p(V +), reg r88:V, reg p18:p(V +), reg format4:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg round4:cls, reg r92:V, reg p19:p(V +), reg r94:V, reg p20:p(V +), reg r96:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r97:V, reg r98:V, reg x29:*, reg x30:V, reg invisible:cls, reg r99:V |
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
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
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
    check L20() else D1();
  D1():
    deopt 7 [r10];
  L20():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r12):
    c2 = `as.logical`(r12);
    if c2 then L29() else L4();
  L21():
    x5 = ld x;
    check L23() else D2();
  L22():
    r11 = dyn base1(<lang `$`(x, coef)>);
    goto L3(r11);
  D2():
    deopt 10 [x5];
  L4():
    goto L13();
  L13():
    x17 = ld x;
    check L65() else D19();
  L23():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L25() else L26(x6);
  L29():
    cat1 = ldf cat;
    check L30() else D4();
  D4():
    deopt 16 [];
  D19():
    deopt 76 [x17];
  L24(dx3):
    length = ldf length in base;
    r14 = dyn length(dx3);
    check L28() else D3();
  L25():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dr2);
  L26(x8):
    r13 = `$`(x8, <sym coef>);
    goto L24(r13);
  L30():
    r15 = dyn cat1("Coefficients:\n");
    check L31() else D5();
  L65():
    x18 = force? x17;
    checkMissing(x18);
    c13 = `is.object`(x18);
    if c13 then L67() else L68(x18);
  D3():
    deopt 14 [r14];
  D5():
    deopt 18 [r15];
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L28():
    goto L3(r14);
  L31():
    sym2 = ldf round;
    base2 = ldf round in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L66(dx11):
    c14 = `is.object`(dx11);
    if c14 then L71() else L72(dx11);
  L67():
    dr10 = tryDispatchBuiltin.1("$", x18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L69() else L68(dr10);
  L68(x20):
    r61 = `$`(x20, <sym call>);
    goto L66(r61);
  L5(r17):
    st coef = r17;
    se1 = ld se;
    check L34() else D6();
  L32():
    round = ldf round in base;
    r18 = dyn round(<lang `$`(x, coef)>, <sym digits>);
    goto L5(r18);
  L33():
    r16 = dyn base2[, digits](<lang `$`(x, coef)>, <sym digits>);
    goto L5(r16);
  L69():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L66(dx10);
  L70(dx15):
    st cm = dx15;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L74() else L75();
  L71():
    dr12 = tryDispatchBuiltin.1("$", dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L73() else L72(dr12);
  L72(dx13):
    r62 = `$`(dx13, <sym method>);
    goto L70(r62);
  D6():
    deopt 23 [se1];
  L14(r64):
    c16 = `as.logical`(r64);
    if c16 then L15(c16) else L77();
  L34():
    se2 = force? se1;
    checkMissing(se2);
    c3 = `as.logical`(se2);
    if c3 then L35() else L6(c3);
  L73():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L70(dx14);
  L74():
    cm = ld cm;
    check L76() else D20();
  L75():
    r63 = dyn base8(<sym cm>);
    goto L14(r63);
  D20():
    deopt 82 [cm];
  L6(c5):
    c10 = `as.logical`(c5);
    if c10 then L39() else L7();
  L15(c17):
    c22 = `as.logical`(c17);
    if c22 then L80() else L16();
  L35():
    NROW = ldf NROW;
    check L36() else D7();
  L76():
    cm1 = force? cm;
    checkMissing(cm1);
    c15 = `==`(cm1, NULL);
    goto L14(c15);
  L77():
    cm2 = ld cm;
    check L78() else D21();
  D7():
    deopt 26 [c3];
  D21():
    deopt 85 [c16, cm2];
  L7():
    goto L12();
  L12():
    print_default = ldf `print.default`;
    check L62() else D17();
  L16():
    cat3 = ldf cat;
    check L84() else D24();
  L17():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L86() else L87();
  L36():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c6 = `is.object`(x10);
      if c6 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r19 = `$`(x12, <sym var.coef>);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r21 = dyn NROW(p3);
    check L37() else D8();
  L39():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L78():
    cm3 = force? cm2;
    checkMissing(cm3);
    r65 = `!=`(cm3, "CSS");
    c19 = `as.logical`(r65);
    c20 = `||`(c16, c19);
    goto L15(c20);
  L80():
    cat2 = ldf cat;
    check L81() else D22();
  D8():
    deopt 28 [c3, r21];
  D17():
    deopt 69 [];
  D22():
    deopt 91 [];
  D24():
    deopt 103 [];
  L8(r23):
    st ses = r23;
    sym5 = ldf round;
    base5 = ldf round in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L18(r98):
    popenv;
    return r98;
  L37():
    c7 = `as.logical`(r21);
    c8 = `&&`(c3, c7);
    goto L6(c8);
  L40():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L41():
    r22 = dyn base3(0.0, <lang length(coef)>);
    goto L8(r22);
  L62():
    p8 = prom<V +>{
      coef8 = ld coef;
      coef9 = force? coef8;
      checkMissing(coef9);
      return coef9;
    };
    r59 = dyn print_default[, `print.gap`](p8, 2.0);
    check L63() else D18();
  L81():
    p11 = prom<V +>{
      format = ldf format;
      p9 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c23 = `is.object`(x22);
        if c23 then L1() else L2(x22);
      L0(dx17):
        return dx17;
      L1():
        dr14 = tryDispatchBuiltin.1("$", x22);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(x24):
        r66 = `$`(x24, <sym sigma2>);
        goto L0(r66);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx16);
      };
      p10 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r69 = dyn format[, digits](p9, p10);
      return r69;
    };
    p13 = prom<V +>{
      format1 = ldf format;
      p12 = prom<V +>{
        sym9 = ldf round;
        base9 = ldf round in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r72):
        return r72;
      L1():
        round2 = ldf round in base;
        r73 = dyn round2(<lang `$`(x, loglik)>, 2);
        goto L0(r73);
      L2():
        r71 = dyn base9(<lang `$`(x, loglik)>, 2);
        goto L0(r71);
      };
      r75 = dyn format1(p12);
      return r75;
    };
    p15 = prom<V +>{
      format2 = ldf format;
      p14 = prom<V +>{
        sym10 = ldf round;
        base10 = ldf round in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r78):
        return r78;
      L1():
        round3 = ldf round in base;
        r79 = dyn round3(<lang `$`(x, aic)>, 2);
        goto L0(r79);
      L2():
        r77 = dyn base10(<lang `$`(x, aic)>, 2);
        goto L0(r77);
      };
      r81 = dyn format2(p14);
      return r81;
    };
    r83 = dyn cat2[, , , , , , , sep]("\nsigma^2 estimated as ", p11, ":  log likelihood = ", p13, ",  aic = ", p15, "\n", "");
    check L82() else D23();
  L84():
    p18 = prom<V +>{
      format3 = ldf format;
      p16 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        c24 = `is.object`(x26);
        if c24 then L1() else L2(x26);
      L0(dx19):
        return dx19;
      L1():
        dr16 = tryDispatchBuiltin.1("$", x26);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(x28):
        r85 = `$`(x28, <sym sigma2>);
        goto L0(r85);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx18);
      };
      p17 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r88 = dyn format3[, digits](p16, p17);
      return r88;
    };
    p20 = prom<V +>{
      format4 = ldf format;
      p19 = prom<V +>{
        sym11 = ldf round;
        base11 = ldf round in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r91):
        return r91;
      L1():
        round4 = ldf round in base;
        r92 = dyn round4(<lang `$`(x, loglik)>, 2.0);
        goto L0(r92);
      L2():
        r90 = dyn base11(<lang `$`(x, loglik)>, 2.0);
        goto L0(r90);
      };
      r94 = dyn format4(p19);
      return r94;
    };
    r96 = dyn cat3[, , , , , sep]("\nsigma^2 estimated as ", p18, ":  part log likelihood = ", p20, "\n", "");
    check L85() else D25();
  L86():
    x29 = ld x;
    check L88() else D26();
  L87():
    r97 = dyn base12(<sym x>);
    goto L18(r97);
  D18():
    deopt 73 [r59];
  D23():
    deopt 101 [r83];
  D25():
    deopt 111 [r96];
  D26():
    deopt 114 [x29];
  L9(r25):
    rep_int = ldf `rep.int` in base;
    r27 = dyn rep_int(0.0, r25);
    check L46() else D11();
  L10(r29):
    l = ld ses;
    c11 = `is.object`(l);
    if c11 then L49() else L50(r29, l);
  L42():
    coef = ld coef;
    check L44() else D9();
  L43():
    r24 = dyn base4(<sym coef>);
    goto L9(r24);
  L47():
    round1 = ldf round in base;
    r30 = dyn round1(<lang sqrt(diag(`$`(x, var.coef)))>, <sym digits>);
    goto L10(r30);
  L48():
    r28 = dyn base5[, digits](<lang sqrt(diag(`$`(x, var.coef)))>, <sym digits>);
    goto L10(r28);
  L63():
    goto L13();
  L82():
    goto L17();
  L85():
    goto L17();
  L88():
    x30 = force? x29;
    checkMissing(x30);
    invisible = ldf invisible in base;
    r99 = dyn invisible(x30);
    check L89() else D27();
  D9():
    deopt 35 [coef];
  D11():
    deopt 40 [r27];
  D27():
    deopt 117 [r99];
  L11(dx7):
    st ses = dx7;
    matrix = ldf matrix;
    check L57() else D13();
  L44():
    coef1 = force? coef;
    checkMissing(coef1);
    length1 = ldf length in base;
    r26 = dyn length1(coef1);
    check L45() else D10();
  L46():
    goto L8(r27);
  L49():
    dr6 = tryDispatchBuiltin.0("[<-", l, r29);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L51() else L50(r29, dr6);
  L50(r32, l2):
    x13 = ld x;
    check L52() else D12();
  L89():
    goto L18(r99);
  D10():
    deopt 38 [r26];
  D12():
    deopt 46 [r32, l2, r29, x13];
  D13():
    deopt 52 [];
  L45():
    goto L9(r26);
  L51():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L52():
    x14 = force? x13;
    checkMissing(x14);
    c12 = `is.object`(x14);
    if c12 then L54() else L55(r32, l2, r29, x14);
  L57():
    p4 = prom<V +>{
      coef2 = ld coef;
      coef3 = force? coef2;
      checkMissing(coef3);
      return coef3;
    };
    p5 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r47):
      return r47;
    L2():
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r46 = dyn base6(NULL, <lang names(coef)>);
      goto L0(r46);
    L1(r49):
      list = ldf list in base;
      r51 = dyn list(NULL, r49);
      goto L0(r51);
    L4():
      coef4 = ld coef;
      coef5 = force? coef4;
      checkMissing(coef5);
      names = ldf names in base;
      r50 = dyn names(coef5);
      goto L1(r50);
    L5():
      r48 = dyn base7(<sym coef>);
      goto L1(r48);
    };
    r53 = dyn matrix[, , dimnames](p4, 1, p5);
    check L58() else D14();
  D14():
    deopt 57 [r53];
  L53(r41, l6, r42, dx9):
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l6, r42, dx9);
    goto L11(r44);
  L54():
    dr8 = tryDispatchBuiltin.1("$", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(r32, l2, r29, dr8);
  L55(r37, l4, r38, x16):
    r43 = `$`(x16, <sym mask>);
    goto L53(r37, l4, r38, r43);
  L58():
    st coef = r53;
    rbind = ldf rbind;
    check L59() else D15();
  D15():
    deopt 60 [];
  L56():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L53(r32, l2, r29, dx8);
  L59():
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
    r56 = dyn rbind[, `s.e.`](p6, p7);
    check L60() else D16();
  D16():
    deopt 64 [r56];
  L60():
    st coef = r56;
    goto L12();
  }
}