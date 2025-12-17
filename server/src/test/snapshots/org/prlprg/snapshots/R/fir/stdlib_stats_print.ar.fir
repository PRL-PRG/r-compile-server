fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.ar` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg deparse:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg NCOL:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p3:p(V +), reg r13:V, reg nser:*, reg nser1:V, reg r14:V, reg c2:L, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg x15:V, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg x18:V, reg r18:V, reg x19:*, reg x20:V, reg c4:L, reg x23:V, reg x24:V, reg dr6:V, reg dc3:L, reg dx6:V, reg x26:V, reg dx7:V, reg r19:V, reg c5:V, reg r20:V, reg c6:L, reg x29:V, reg r21:V, reg c7:cls, reg r22:V, reg __:cls, reg r23:V, reg aperm:cls, reg res:*, reg res1:V, reg c8:L, reg res3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r24:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg c9:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg l:*, reg c10:L, reg r32:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r35:V, reg print:cls, reg res4:*, reg res5:V, reg p6:p(V +), reg digits1:*, reg digits2:V, reg p7:p(V +), reg r38:V, reg x30:*, reg x31:V, reg c11:L, reg x33:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r40:V, reg c12:L, reg cat1:cls, reg r41:V, reg setNames:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg round:cls, reg r44:V, reg p8:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg x34:*, reg x35:V, reg c13:L, reg x37:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r48:V, reg r49:I, reg p9:p(V +), reg r51:V, reg print_default:cls, reg coef:*, reg coef1:V, reg p10:p(V +), reg r53:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg x38:*, reg x39:V, reg c14:L, reg x41:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r57:V, reg c15:V, reg r58:V, reg c16:L, reg c18:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg c21:L, reg r60:V, reg xint:*, reg xint1:V, reg is_na:cls, reg r61:V, reg r62:V, reg c22:L, reg c23:V, reg c25:L, reg cat2:cls, reg format:cls, reg xint2:*, reg xint3:V, reg p11:p(V +), reg digits3:*, reg digits4:V, reg p12:p(V +), reg r65:V, reg p13:p(V +), reg format1:cls, reg x42:*, reg x43:V, reg c26:L, reg x45:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r67:V, reg c27:L, reg dx21:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r68:V, reg p14:p(V +), reg digits5:*, reg digits6:V, reg p15:p(V +), reg r71:V, reg p16:p(V +), reg r73:V, reg cat3:cls, reg x46:*, reg x47:V, reg c28:L, reg x49:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r75:V, reg p17:p(V +), reg format2:cls, reg x50:*, reg x51:V, reg c29:L, reg x53:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg r77:V, reg p18:p(V +), reg digits7:*, reg digits8:V, reg p19:p(V +), reg r80:V, reg p20:p(V +), reg r82:V, reg cat4:cls, reg r83:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r84:V, reg r85:V, reg x54:*, reg x55:V, reg invisible:cls, reg r86:V |
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
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
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
      r8 = dyn deparse(p1);
      return r8;
    };
    r10 = dyn cat[, , , sep]("\nCall:\n", p2, "\n\n", "");
    check L18() else D1();
  D1():
    deopt 7 [r10];
  L18():
    NCOL = ldf NCOL;
    check L19() else D2();
  D2():
    deopt 9 [];
  L19():
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
      r11 = `$`(x8, <sym var.pred>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn NCOL(p3);
    check L20() else D3();
  D3():
    deopt 11 [r13];
  L20():
    st nser = r13;
    nser = ld nser;
    check L21() else D4();
  D4():
    deopt 13 [nser];
  L21():
    nser1 = force? nser;
    checkMissing(nser1);
    r14 = `>`(nser1, 1);
    c2 = `as.logical`(r14);
    if c2 then L22() else L2();
  L2():
    x30 = ld x;
    check L48() else D12();
  L8():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L82() else L83();
  L22():
    x9 = ld x;
    check L23() else D5();
  D5():
    deopt 17 [x9];
  D12():
    deopt 51 [x30];
  L16(r85):
    popenv;
    return r85;
  L23():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L24() else L25(x10);
  L48():
    x31 = force? x30;
    checkMissing(x31);
    c11 = `is.object`(x31);
    if c11 then L50() else L51(x31);
  L82():
    x54 = ld x;
    check L84() else D28();
  L83():
    r84 = dyn base8(<sym x>);
    goto L16(r84);
  D28():
    deopt 113 [x54];
  L3(dx5):
    st res = dx5;
    aperm = ldf aperm;
    check L39() else D8();
  L24():
    dr4 = tryDispatchBuiltin.1("[", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(x12):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L49(dx13):
    c12 = `as.logical`(dx13);
    if c12 then L53() else L9();
  L50():
    dr12 = tryDispatchBuiltin.1("$", x31);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L52() else L51(dr12);
  L51(x33):
    r40 = `$`(x33, <sym order>);
    goto L49(r40);
  L84():
    x55 = force? x54;
    checkMissing(x55);
    invisible = ldf invisible in base;
    r86 = dyn invisible(x55);
    check L85() else D29();
  D8():
    deopt 38 [];
  D29():
    deopt 116 [r86];
  L4(x15, r16):
    __ = ldf `[` in base;
    r23 = dyn __(x15, r16);
    goto L3(r23);
  L9():
    goto L10();
  L10():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L27():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L28():
    r15 = dyn base1("ar", <lang if(`!`(is.null(`$`(x, x.intercept))), "x.intercept")>, "var.pred");
    goto L4(x12, r15);
  L39():
    p4 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c8 = `is.object`(res1);
      if c8 then L1() else L2(res1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", res1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(res3):
      r24 = `$`(res3, <sym ar>);
      goto L0(r24);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c9 = ldf c in base;
      r28 = dyn c9(2, 3, 1);
      goto L0(r28);
    L2():
      r26 = dyn base3(2, 3, 1);
      goto L0(r26);
    };
    r30 = dyn aperm(p4, p5);
    check L40() else D9();
  L52():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L49(dx12);
  L53():
    cat1 = ldf cat;
    check L54() else D13();
  L85():
    goto L16(r86);
  D9():
    deopt 41 [r30];
  D13():
    deopt 55 [];
  L5(x18, r18):
    r20 = `!`(r18);
    c6 = `as.logical`(r20);
    if c6 then L36() else L6();
  L11(r56):
    r58 = `!`(r56);
    c16 = `as.logical`(r58);
    if c16 then L68() else L12(c16);
  L29():
    x19 = ld x;
    check L31() else D6();
  L30():
    r17 = dyn base2(<lang `$`(x, x.intercept)>);
    goto L5(x12, r17);
  L40():
    l = ld res;
    c10 = `is.object`(l);
    if c10 then L42() else L43(r30, l);
  L54():
    r41 = dyn cat1("Coefficients:\n");
    check L55() else D14();
  L61():
    x38 = ld x;
    check L63() else D19();
  L62():
    r55 = dyn base6(<lang `<-`(xint, `$`(x, x.intercept))>);
    goto L11(r55);
  D6():
    deopt 23 [x12, x19];
  D14():
    deopt 57 [r41];
  D19():
    deopt 73 [x38];
  L6():
    goto L7(x18, NULL);
  L7(x29, r21):
    c7 = ldf c in base;
    r22 = dyn c7("ar", r21, "var.pred");
    check L38() else D7();
  L12(c18):
    c25 = `as.logical`(c18);
    if c25 then L74() else L14();
  L31():
    x20 = force? x19;
    checkMissing(x20);
    c4 = `is.object`(x20);
    if c4 then L33() else L34(x12, x20);
  L36():
    goto L7(x18, "x.intercept");
  L41(dx11):
    st res = dx11;
    print = ldf print;
    check L45() else D10();
  L42():
    dr10 = tryDispatchBuiltin.0("$<-", l, r30);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L44() else L43(r30, dr10);
  L43(r32, l2):
    r35 = `$<-`(l2, <sym ar>, r30);
    goto L41(r35);
  L55():
    setNames = ldf setNames;
    check L56() else D15();
  L63():
    x39 = force? x38;
    checkMissing(x39);
    c14 = `is.object`(x39);
    if c14 then L65() else L66(x39);
  L68():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  D7():
    deopt 34 [x29, r22];
  D10():
    deopt 46 [];
  D15():
    deopt 59 [];
  L13(c21, r60):
    r62 = `!`(r60);
    c22 = `as.logical`(r62);
    c23 = `&&`(c21, c22);
    goto L12(c23);
  L14():
    goto L15();
  L15():
    cat3 = ldf cat;
    check L78() else D24();
  L32(x26, dx7):
    c5 = `==`(dx7, NULL);
    goto L5(x26, c5);
  L33():
    dr6 = tryDispatchBuiltin.1("$", x20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(x12, dr6);
  L34(x23, x24):
    r19 = `$`(x24, <sym x.intercept>);
    goto L32(x23, r19);
  L38():
    goto L4(x29, r22);
  L44():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L41(dx10);
  L45():
    p6 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      return res5;
    };
    p7 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r38 = dyn print[, digits](p6, p7);
    check L46() else D11();
  L56():
    p8 = prom<V +>{
      sym4 = ldf round;
      base4 = ldf round in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      round = ldf round in base;
      r44 = dyn round(<lang drop(`$`(x, ar))>, <sym digits>);
      goto L0(r44);
    L2():
      r42 = dyn base4[, digits](<lang drop(`$`(x, ar))>, <sym digits>);
      goto L0(r42);
    };
    p9 = prom<V +>{
      sym5 = ldf seq_len;
      base5 = ldf seq_len in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      x34 = ld x;
      x35 = force? x34;
      checkMissing(x35);
      c13 = `is.object`(x35);
      if c13 then L4() else L5(x35);
    L2():
      r46 = dyn base5(<lang `$`(x, order)>);
      goto L0(r46);
    L3(dx15):
      r49 = seq_len(dx15);
      goto L0(r49);
    L4():
      dr14 = tryDispatchBuiltin.1("$", x35);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L6() else L5(dr14);
    L5(x37):
      r48 = `$`(x37, <sym order>);
      goto L3(r48);
    L6():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L3(dx14);
    };
    r51 = dyn setNames(p8, p9);
    check L57() else D16();
  L64(dx17):
    st xint = dx17;
    c15 = `==`(dx17, NULL);
    goto L11(c15);
  L65():
    dr16 = tryDispatchBuiltin.1("$", x39);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L67() else L66(dr16);
  L66(x41):
    r57 = `$`(x41, <sym x.intercept>);
    goto L64(r57);
  L69():
    xint = ld xint;
    check L71() else D20();
  L70():
    r59 = dyn base7(<sym xint>);
    goto L13(c16, r59);
  L74():
    cat2 = ldf cat;
    check L75() else D22();
  D11():
    deopt 50 [r38];
  D16():
    deopt 62 [r51];
  D20():
    deopt 81 [c16, xint];
  D22():
    deopt 88 [];
  D24():
    deopt 101 [];
  L35():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L32(x12, dx6);
  L46():
    goto L8();
  L57():
    st coef = r51;
    print_default = ldf `print.default`;
    check L58() else D17();
  L67():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L64(dx16);
  L71():
    xint1 = force? xint;
    checkMissing(xint1);
    is_na = ldf `is.na` in base;
    r61 = dyn is_na(xint1);
    check L72() else D21();
  L75():
    p13 = prom<V +>{
      format = ldf format;
      p11 = prom<V +>{
        xint2 = ld xint;
        xint3 = force? xint2;
        checkMissing(xint3);
        return xint3;
      };
      p12 = prom<V +>{
        digits3 = ld digits;
        digits4 = force? digits3;
        checkMissing(digits4);
        return digits4;
      };
      r65 = dyn format[, digits](p11, p12);
      return r65;
    };
    p16 = prom<V +>{
      format1 = ldf format;
      p14 = prom<V +>{
        x42 = ld x;
        x43 = force? x42;
        checkMissing(x43);
        c26 = `is.object`(x43);
        if c26 then L1() else L2(x43);
      L0(dx19):
        c27 = `is.object`(dx19);
        if c27 then L5() else L6(dx19);
      L1():
        dr18 = tryDispatchBuiltin.1("$", x43);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(x45):
        r67 = `$`(x45, <sym asy.se.coef>);
        goto L0(r67);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      L4(dx23):
        return dx23;
      L5():
        dr20 = tryDispatchBuiltin.1("$", dx19);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L7() else L6(dr20);
      L6(dx21):
        r68 = `$`(dx21, <sym x.mean>);
        goto L4(r68);
      L7():
        dx22 = getTryDispatchBuiltinValue(dr20);
        goto L4(dx22);
      };
      p15 = prom<V +>{
        digits5 = ld digits;
        digits6 = force? digits5;
        checkMissing(digits6);
        return digits6;
      };
      r71 = dyn format1[, digits](p14, p15);
      return r71;
    };
    r73 = dyn cat2[, , , , , , sep]("\nIntercept: ", p13, " (", p16, ") ", "\n", "");
    check L76() else D23();
  L78():
    p17 = prom<V +>{
      x46 = ld x;
      x47 = force? x46;
      checkMissing(x47);
      c28 = `is.object`(x47);
      if c28 then L1() else L2(x47);
    L0(dx25):
      return dx25;
    L1():
      dr22 = tryDispatchBuiltin.1("$", x47);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(x49):
      r75 = `$`(x49, <sym order>);
      goto L0(r75);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx24);
    };
    p20 = prom<V +>{
      format2 = ldf format;
      p18 = prom<V +>{
        x50 = ld x;
        x51 = force? x50;
        checkMissing(x51);
        c29 = `is.object`(x51);
        if c29 then L1() else L2(x51);
      L0(dx27):
        return dx27;
      L1():
        dr24 = tryDispatchBuiltin.1("$", x51);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(x53):
        r77 = `$`(x53, <sym var.pred>);
        goto L0(r77);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx26);
      };
      p19 = prom<V +>{
        digits7 = ld digits;
        digits8 = force? digits7;
        checkMissing(digits8);
        return digits8;
      };
      r80 = dyn format2[, digits](p18, p19);
      return r80;
    };
    r82 = dyn cat3("\nOrder selected", p17, " sigma^2 estimated as ", p20);
    check L79() else D25();
  D17():
    deopt 65 [];
  D21():
    deopt 84 [c16, r61];
  D23():
    deopt 97 [r73];
  D25():
    deopt 106 [r82];
  L58():
    p10 = prom<V +>{
      coef = ld coef;
      coef1 = force? coef;
      checkMissing(coef1);
      return coef1;
    };
    r53 = dyn print_default[, `print.gap`](p10, 2);
    check L59() else D18();
  L72():
    goto L13(c16, r61);
  L76():
    goto L15();
  L79():
    cat4 = ldf cat;
    check L80() else D26();
  D18():
    deopt 69 [r53];
  D26():
    deopt 108 [];
  L59():
    goto L10();
  L80():
    r83 = dyn cat4("\n");
    check L81() else D27();
  D27():
    deopt 110 [r83];
  L81():
    goto L8();
  }
}