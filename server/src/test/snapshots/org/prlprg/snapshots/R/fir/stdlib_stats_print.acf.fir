fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner627526706;
    st `print.acf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner627526706(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg match:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg cat:cls, reg msg:*, reg msg1:V, reg c3:L, reg msg3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg type:*, reg type1:V, reg __:cls, reg r10:V, reg p:p(V +), reg sQuote:cls, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V, reg ncol:cls, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r17:V, reg p3:p(V +), reg r19:V, reg type2:*, reg type3:V, reg r20:V, reg c6:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg round:cls, reg r23:V, reg l:*, reg c7:L, reg r25:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r27:V, reg dx9:V, reg r28:V, reg nser:*, reg nser1:V, reg r30:V, reg c8:L, reg setNames:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg x13:*, reg x14:V, reg c9:L, reg x16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r33:V, reg drop:cls, reg r34:V, reg p4:p(V +), reg format:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg x17:*, reg x18:V, reg c10:L, reg x20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r38:V, reg drop1:cls, reg r39:V, reg p5:p(V +), reg r41:V, reg p6:p(V +), reg r43:V, reg print:cls, reg acfs:*, reg acfs1:V, reg p7:p(V +), reg digits1:*, reg digits2:V, reg p8:p(V +), reg ddd1:dots?, reg r46:V, reg format1:cls, reg x21:*, reg x22:V, reg c11:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r48:V, reg p9:p(V +), reg ddd2:dots?, reg r50:V, reg format2:cls, reg x25:*, reg x26:V, reg c12:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r51:V, reg p10:p(V +), reg r53:V, reg array:cls, reg paste0:cls, reg acfs2:*, reg acfs3:V, reg p11:p(V +), reg lags:*, reg lags1:V, reg p12:p(V +), reg r56:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg x29:*, reg x30:V, reg c13:L, reg x32:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r60:V, reg dim:cls, reg r61:V, reg p14:p(V +), reg r63:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg rep:cls, reg r68:V, reg x33:*, reg x34:V, reg c14:L, reg x36:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r69:V, reg x37:*, reg x38:V, reg c15:L, reg x40:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r70:V, reg list:cls, reg r71:V, reg l3:*, reg dimnames__:cls, reg r72:V, reg print1:cls, reg acfs4:*, reg acfs5:V, reg p15:p(V +), reg ddd3:dots?, reg r74:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r75:V, reg r76:V, reg x41:*, reg x42:V, reg invisible:cls, reg r77:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(3) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    st type = r1;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<lang `$`(x, type)>, <lang c("correlation", "covariance", "partial")>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L3(r8):
    st msg = r8;
    cat = ldf cat;
    check L26() else D4();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L16() else L17(x2);
  L23():
    c2 = ldf c in base;
    r9 = dyn c2("Autocorrelations", "Autocovariances", "Partial autocorrelations");
    check L25() else D3();
  L24():
    r7 = dyn base2("Autocorrelations", "Autocovariances", "Partial autocorrelations");
    goto L3(r7);
  D3():
    deopt 23 [r9];
  D4():
    deopt 26 [];
  L15(dx1):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L16():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(x4):
    r2 = `$`(x4, <sym type>);
    goto L15(r2);
  L25():
    goto L3(r9);
  L26():
    p = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      c3 = `is.object`(msg1);
      if c3 then L1() else L2(msg1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", msg1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(msg3):
      type = ld type;
      type1 = force? type;
      __ = ldf `[` in base;
      r10 = dyn __(msg3, type1);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      sQuote = ldf sQuote;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c4 = `is.object`(x6);
        if c4 then L1() else L2(x6);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x8):
        r12 = `$`(x8, <sym series>);
        goto L0(r12);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r14 = dyn sQuote(p1);
      return r14;
    };
    r16 = dyn cat[, , , , , sep]("\n", p, " of series ", p2, ", by lag\n\n", "");
    check L27() else D5();
  D5():
    deopt 34 [r16];
  L2(r4):
    match = ldf match in base;
    r6 = dyn match(dx1, r4, NA_INT, NULL);
    check L22() else D2();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    c1 = ldf c in base;
    r5 = dyn c1("correlation", "covariance", "partial");
    check L21() else D1();
  L20():
    r3 = dyn base1("correlation", "covariance", "partial");
    goto L2(r3);
  L27():
    ncol = ldf ncol;
    check L28() else D6();
  D1():
    deopt 11 [r5];
  D2():
    deopt 15 [r6];
  D6():
    deopt 36 [];
  L21():
    goto L2(r5);
  L22():
    goto L1(r6);
  L28():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c5 = `is.object`(x10);
      if c5 then L1() else L2(x10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x12):
      r17 = `$`(x12, <sym lag>);
      goto L0(r17);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r19 = dyn ncol(p3);
    check L29() else D7();
  D7():
    deopt 38 [r19];
  L29():
    st nser = r19;
    type2 = ld type;
    check L30() else D8();
  D8():
    deopt 40 [type2];
  L30():
    type3 = force? type2;
    checkMissing(type3);
    r20 = `!=`(type3, 2.0);
    c6 = `as.logical`(r20);
    if c6 then L31() else L4();
  L4():
    goto L6();
  L6():
    nser = ld nser;
    check L39() else D9();
  L31():
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D9():
    deopt 52 [nser];
  L5(r22):
    l = ld x;
    c7 = `is.object`(l);
    if c7 then L35() else L36(r22, l);
  L32():
    round = ldf round in base;
    r23 = dyn round(<lang `$`(x, acf)>, <sym digits>);
    goto L5(r23);
  L33():
    r21 = dyn base3(<lang `$`(x, acf)>, <sym digits>);
    goto L5(r21);
  L39():
    nser1 = force? nser;
    checkMissing(nser1);
    r30 = `==`(nser1, 1.0);
    c8 = `as.logical`(r30);
    if c8 then L40() else L7();
  L7():
    format1 = ldf format;
    check L46() else D14();
  L8():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L71() else L72();
  L34(r27, dx9):
    st x = dx9;
    goto L6();
  L35():
    dr8 = tryDispatchBuiltin.0("$<-", l, r22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L37() else L36(r22, dr8);
  L36(r25, l2):
    r28 = `$<-`(l2, <sym acf>, r22);
    goto L34(r25, r28);
  L40():
    setNames = ldf setNames;
    check L41() else D10();
  D10():
    deopt 57 [];
  D14():
    deopt 70 [];
  L11(r76):
    popenv;
    return r76;
  L37():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L34(r22, dx8);
  L41():
    p4 = prom<V +>{
      sym4 = ldf drop;
      base4 = ldf drop in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c9 = `is.object`(x14);
      if c9 then L4() else L5(x14);
    L2():
      r31 = dyn base4(<lang `$`(x, acf)>);
      goto L0(r31);
    L3(dx11):
      drop = ldf drop in base;
      r34 = dyn drop(dx11);
      goto L0(r34);
    L4():
      dr10 = tryDispatchBuiltin.1("$", x14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5(dr10);
    L5(x16):
      r33 = `$`(x16, <sym acf>);
      goto L3(r33);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L3(dx10);
    };
    p6 = prom<V +>{
      format = ldf format;
      p5 = prom<V +>{
        sym5 = ldf drop;
        base5 = ldf drop in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r37):
        return r37;
      L1():
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c10 = `is.object`(x18);
        if c10 then L4() else L5(x18);
      L2():
        r36 = dyn base5(<lang `$`(x, lag)>);
        goto L0(r36);
      L3(dx13):
        drop1 = ldf drop in base;
        r39 = dyn drop1(dx13);
        goto L0(r39);
      L4():
        dr12 = tryDispatchBuiltin.1("$", x18);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L6() else L5(dr12);
      L5(x20):
        r38 = `$`(x20, <sym lag>);
        goto L3(r38);
      L6():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L3(dx12);
      };
      r41 = dyn format[, digits](p5, 3);
      return r41;
    };
    r43 = dyn setNames(p4, p6);
    check L42() else D11();
  L46():
    p9 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c11 = `is.object`(x22);
      if c11 then L1() else L2(x22);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x24):
      r48 = `$`(x24, <sym acf>);
      goto L0(r48);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    ddd2 = ld `...`;
    r50 = dyn format1[, `...`](p9, ddd2);
    check L47() else D15();
  L71():
    x41 = ld x;
    check L73() else D27();
  L72():
    r75 = dyn base9(<sym x>);
    goto L11(r75);
  D11():
    deopt 60 [r43];
  D15():
    deopt 73 [r50];
  D27():
    deopt 116 [x41];
  L42():
    st acfs = r43;
    print = ldf print;
    check L43() else D12();
  L47():
    st acfs = r50;
    format2 = ldf format;
    check L48() else D16();
  L73():
    x42 = force? x41;
    checkMissing(x42);
    invisible = ldf invisible in base;
    r77 = dyn invisible(x42);
    check L74() else D28();
  D12():
    deopt 63 [];
  D16():
    deopt 76 [];
  D28():
    deopt 119 [r77];
  L43():
    p7 = prom<V +>{
      acfs = ld acfs;
      acfs1 = force? acfs;
      checkMissing(acfs1);
      return acfs1;
    };
    p8 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r46 = dyn print[, digits, `...`](p7, p8, ddd1);
    check L44() else D13();
  L48():
    p10 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c12 = `is.object`(x26);
      if c12 then L1() else L2(x26);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x26);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x28):
      r51 = `$`(x28, <sym lag>);
      goto L0(r51);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r53 = dyn format2[, digits](p10, 3);
    check L49() else D17();
  L74():
    goto L11(r77);
  D13():
    deopt 68 [r46];
  D17():
    deopt 80 [r53];
  L44():
    goto L8();
  L49():
    st lags = r53;
    array = ldf array;
    check L50() else D18();
  D18():
    deopt 83 [];
  L50():
    p13 = prom<V +>{
      paste0 = ldf paste0;
      p11 = prom<V +>{
        acfs2 = ld acfs;
        acfs3 = force? acfs2;
        checkMissing(acfs3);
        return acfs3;
      };
      p12 = prom<V +>{
        lags = ld lags;
        lags1 = force? lags;
        checkMissing(lags1);
        return lags1;
      };
      r56 = dyn paste0(p11, " (", p12, ")");
      return r56;
    };
    p14 = prom<V +>{
      sym6 = ldf dim;
      base6 = ldf dim in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c13 = `is.object`(x30);
      if c13 then L4() else L5(x30);
    L2():
      r58 = dyn base6(<lang `$`(x, acf)>);
      goto L0(r58);
    L3(dx19):
      dim = ldf dim in base;
      r61 = dyn dim(dx19);
      goto L0(r61);
    L4():
      dr18 = tryDispatchBuiltin.1("$", x30);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(x32):
      r60 = `$`(x32, <sym acf>);
      goto L3(r60);
    L6():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx18);
    };
    r63 = dyn array[, dim](p13, p14);
    check L51() else D19();
  D19():
    deopt 87 [r63];
  L51():
    st acfs = r63;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L52() else L53();
  L9(r65):
    l3 = ld acfs;
    dimnames__ = ldf `dimnames<-`;
    check L67() else D23();
  L52():
    sym8 = ldf rep;
    base8 = ldf rep in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L54() else L55();
  L53():
    r64 = dyn base7(<lang rep("", nrow(`$`(x, lag)))>, <lang `$`(x, snames)>, <lang `$`(x, snames)>);
    goto L9(r64);
  D23():
    deopt 103 [r65, l3, r65];
  L10(r67):
    x33 = ld x;
    check L56() else D20();
  L54():
    rep = ldf rep in base;
    r68 = dyn rep("", <lang nrow(`$`(x, lag))>);
    goto L10(r68);
  L55():
    r66 = dyn base8("", <lang nrow(`$`(x, lag))>);
    goto L10(r66);
  L67():
    r72 = dyn dimnames__(l3, NULL, r65);
    check L68() else D24();
  D20():
    deopt 94 [x33];
  D24():
    deopt 105 [r65, r72];
  L56():
    x34 = force? x33;
    checkMissing(x34);
    c14 = `is.object`(x34);
    if c14 then L58() else L59(x34);
  L68():
    st acfs = r72;
    print1 = ldf print;
    check L69() else D25();
  D25():
    deopt 108 [];
  L57(dx21):
    x37 = ld x;
    check L61() else D21();
  L58():
    dr20 = tryDispatchBuiltin.1("$", x34);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L60() else L59(dr20);
  L59(x36):
    r69 = `$`(x36, <sym snames>);
    goto L57(r69);
  L69():
    p15 = prom<V +>{
      acfs4 = ld acfs;
      acfs5 = force? acfs4;
      checkMissing(acfs5);
      return acfs5;
    };
    ddd3 = ld `...`;
    r74 = dyn print1[, quote, `...`](p15, FALSE, ddd3);
    check L70() else D26();
  D21():
    deopt 97 [x37];
  D26():
    deopt 113 [r74];
  L60():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L57(dx20);
  L61():
    x38 = force? x37;
    checkMissing(x38);
    c15 = `is.object`(x38);
    if c15 then L63() else L64(x38);
  L70():
    goto L8();
  L62(dx23):
    list = ldf list in base;
    r71 = dyn list(r67, dx21, dx23);
    check L66() else D22();
  L63():
    dr22 = tryDispatchBuiltin.1("$", x38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L65() else L64(dr22);
  L64(x40):
    r70 = `$`(x40, <sym snames>);
    goto L62(r70);
  D22():
    deopt 101 [r71];
  L65():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L62(dx22);
  L66():
    goto L9(r71);
  }
}