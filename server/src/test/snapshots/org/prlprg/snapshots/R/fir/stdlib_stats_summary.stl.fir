fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner733487144;
    st `summary.stl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner733487144(object, digits, `...`) {
  (reg object:*, reg digits:*, reg ddd:dots) -+> V { var object:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg cat:cls, reg r2:V, reg dput:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p1:p(V +), reg r5:V, reg cat1:cls, reg r6:V, reg print:cls, reg summary:cls, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg ddd1:dots?, reg r10:V, reg p4:p(V +), reg r12:V, reg cat2:cls, reg r13:V, reg apply:cls, reg cbind:cls, reg object9:*, reg object10:V, reg c2:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg p5:p(V +), reg object13:*, reg object14:V, reg c3:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r16:V, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg rep:cls, reg r19:V, reg ___:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg IQR:*, reg IQR1:V, reg p8:p(V +), reg r25:V, reg print1:cls, reg rbind:cls, reg format:cls, reg iqr:*, reg iqr1:V, reg p9:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg digits3:*, reg digits4:V, reg r29:V, reg max:cls, reg r30:V, reg p10:p(V +), reg r32:V, reg p11:p(V +), reg format1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg round:cls, reg r36:V, reg p12:p(V +), reg r38:V, reg p13:p(V +), reg r40:V, reg p14:p(V +), reg r42:V, reg cat3:cls, reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg object17:*, reg object18:V, reg c4:L, reg object20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r46:V, reg r47:V, reg all:cls, reg r48:V, reg c5:L, reg cat4:cls, reg r49:V, reg cat5:cls, reg r51:V, reg print2:cls, reg summary1:cls, reg object21:*, reg object22:V, reg c6:L, reg object24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r52:V, reg p15:p(V +), reg digits5:*, reg digits6:V, reg p16:p(V +), reg ddd2:dots?, reg r55:V, reg p17:p(V +), reg r57:V, reg cat6:cls, reg r58:V, reg str:cls, reg object25:*, reg object26:V, reg c7:L, reg object28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __:cls, reg r59:V, reg p18:p(V +), reg r61:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r62:V, reg r63:V, reg object29:*, reg object30:V, reg invisible:cls, reg r64:V |
    mkenv;
    st object = object;
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
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r2 = dyn cat(" Call:\n ");
    check L7() else D1();
  D1():
    deopt 3 [r2];
  L7():
    dput = ldf dput;
    check L8() else D2();
  D2():
    deopt 5 [];
  L8():
    p1 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r3 = `$`(object4, <sym call>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn dput[, control](p1, NULL);
    check L9() else D3();
  D3():
    deopt 9 [r5];
  L9():
    cat1 = ldf cat;
    check L10() else D4();
  D4():
    deopt 11 [];
  L10():
    r6 = dyn cat1("\n Time.series components:\n");
    check L11() else D5();
  D5():
    deopt 13 [r6];
  L11():
    print = ldf print;
    check L12() else D6();
  D6():
    deopt 15 [];
  L12():
    p4 = prom<V +>{
      summary = ldf summary;
      p2 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        c1 = `is.object`(object6);
        if c1 then L1() else L2(object6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", object6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(object8):
        r7 = `$`(object8, <sym time.series>);
        goto L0(r7);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p3 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      ddd1 = ld `...`;
      r10 = dyn summary[, digits, `...`](p2, p3, ddd1);
      return r10;
    };
    r12 = dyn print(p4);
    check L13() else D7();
  D7():
    deopt 17 [r12];
  L13():
    cat2 = ldf cat;
    check L14() else D8();
  D8():
    deopt 19 [];
  L14():
    r13 = dyn cat2(" IQR:\n");
    check L15() else D9();
  D9():
    deopt 21 [r13];
  L15():
    apply = ldf apply;
    check L16() else D10();
  D10():
    deopt 23 [];
  L16():
    p7 = prom<V +>{
      cbind = ldf cbind;
      p5 = prom<V +>{
        object9 = ld object;
        object10 = force? object9;
        checkMissing(object10);
        c2 = `is.object`(object10);
        if c2 then L1() else L2(object10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", object10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(object12):
        r14 = `$`(object12, <sym time.series>);
        goto L0(r14);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p6 = prom<V +>{
        object13 = ld object;
        object14 = force? object13;
        checkMissing(object14);
        c3 = `is.object`(object14);
        if c3 then L2() else L3(object14);
      L1(dx7):
        sym = ldf rep;
        base = ldf rep in base;
        guard = `==`.4(sym, base);
        if guard then L5() else L6();
      L2():
        dr6 = tryDispatchBuiltin.1("$", object14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L4() else L3(dr6);
      L3(object16):
        r16 = `$`(object16, <sym time.series>);
        goto L1(r16);
      L0(r18):
        ___ = ldf `%*%` in base;
        r20 = dyn ___(dx7, r18);
        return r20;
      L4():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L1(dx6);
      L5():
        rep = ldf rep in base;
        r19 = dyn rep(1.0, 3.0);
        goto L0(r19);
      L6():
        r17 = dyn base(1.0, 3.0);
        goto L0(r17);
      };
      r22 = dyn cbind[STL, data](p5, p6);
      return r22;
    };
    p8 = prom<V +>{
      IQR = ld IQR;
      IQR1 = force? IQR;
      checkMissing(IQR1);
      return IQR1;
    };
    r25 = dyn apply(p7, 2, p8);
    check L17() else D11();
  D11():
    deopt 27 [r25];
  L17():
    st iqr = r25;
    print1 = ldf print;
    check L18() else D12();
  D12():
    deopt 30 [];
  L18():
    p14 = prom<V +>{
      rbind = ldf rbind;
      p11 = prom<V +>{
        format = ldf format;
        p9 = prom<V +>{
          iqr = ld iqr;
          iqr1 = force? iqr;
          checkMissing(iqr1);
          return iqr1;
        };
        p10 = prom<V +>{
          sym1 = ldf max;
          base1 = ldf max in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r28):
          return r28;
        L1():
          digits3 = ld digits;
          digits4 = force? digits3;
          checkMissing(digits4);
          r29 = `-`(digits4, 3);
          max = ldf max in base;
          r30 = dyn max(2, r29);
          goto L0(r30);
        L2():
          r27 = dyn base1(2, <lang `-`(digits, 3)>);
          goto L0(r27);
        };
        r32 = dyn format[, digits](p9, p10);
        return r32;
      };
      p13 = prom<V +>{
        format1 = ldf format;
        p12 = prom<V +>{
          sym2 = ldf round;
          base2 = ldf round in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r35):
          return r35;
        L1():
          round = ldf round in base;
          r36 = dyn round(<lang `/`(`*`(100.0, iqr), `[`(iqr, "data"))>, 1.0);
          goto L0(r36);
        L2():
          r34 = dyn base2(<lang `/`(`*`(100.0, iqr), `[`(iqr, "data"))>, 1.0);
          goto L0(r34);
        };
        r38 = dyn format1(p12);
        return r38;
      };
      r40 = dyn rbind[, `   %`](p11, p13);
      return r40;
    };
    r42 = dyn print1[, quote](p14, FALSE);
    check L19() else D13();
  D13():
    deopt 34 [r42];
  L19():
    cat3 = ldf cat;
    check L20() else D14();
  D14():
    deopt 36 [];
  L20():
    r43 = dyn cat3("\n Weights:");
    check L21() else D15();
  D15():
    deopt 38 [r43];
  L21():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L2(r45):
    c5 = `as.logical`(r45);
    if c5 then L30() else L3();
  L22():
    object17 = ld object;
    check L24() else D16();
  L23():
    r44 = dyn base3(<lang `==`(`$`(object, weights), 1.0)>);
    goto L2(r44);
  D16():
    deopt 41 [object17];
  L3():
    cat5 = ldf cat;
    check L34() else D20();
  L4():
    cat6 = ldf cat;
    check L38() else D24();
  L24():
    object18 = force? object17;
    checkMissing(object18);
    c4 = `is.object`(object18);
    if c4 then L26() else L27(object18);
  L30():
    cat4 = ldf cat;
    check L31() else D18();
  D18():
    deopt 49 [];
  D20():
    deopt 53 [];
  D24():
    deopt 61 [];
  L25(dx9):
    r47 = `==`(dx9, 1.0);
    all = ldf all in base;
    r48 = dyn all(r47);
    check L29() else D17();
  L26():
    dr8 = tryDispatchBuiltin.1("$", object18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L28() else L27(dr8);
  L27(object20):
    r46 = `$`(object20, <sym weights>);
    goto L25(r46);
  L31():
    r49 = dyn cat4(" all == 1\n");
    check L32() else D19();
  L34():
    r51 = dyn cat5("\n");
    check L35() else D21();
  L38():
    r58 = dyn cat6("\n Other components: ");
    check L39() else D25();
  D17():
    deopt 47 [r48];
  D19():
    deopt 51 [r49];
  D21():
    deopt 55 [r51];
  D25():
    deopt 63 [r58];
  L28():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L25(dx8);
  L29():
    goto L2(r48);
  L32():
    goto L4();
  L35():
    print2 = ldf print;
    check L36() else D22();
  L39():
    str = ldf str;
    check L40() else D26();
  D22():
    deopt 57 [];
  D26():
    deopt 65 [];
  L36():
    p17 = prom<V +>{
      summary1 = ldf summary;
      p15 = prom<V +>{
        object21 = ld object;
        object22 = force? object21;
        checkMissing(object22);
        c6 = `is.object`(object22);
        if c6 then L1() else L2(object22);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("$", object22);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(object24):
        r52 = `$`(object24, <sym weights>);
        goto L0(r52);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      p16 = prom<V +>{
        digits5 = ld digits;
        digits6 = force? digits5;
        checkMissing(digits6);
        return digits6;
      };
      ddd2 = ld `...`;
      r55 = dyn summary1[, digits, `...`](p15, p16, ddd2);
      return r55;
    };
    r57 = dyn print2(p17);
    check L37() else D23();
  L40():
    p18 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c7 = `is.object`(object26);
      if c7 then L1() else L2(object26);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", object26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object28):
      __ = ldf `[` in base;
      r59 = dyn __(object28, <int -1, -2, -3>);
      goto L0(r59);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r61 = dyn str[, `give.attr`](p18, FALSE);
    check L41() else D27();
  D23():
    deopt 59 [r57];
  D27():
    deopt 69 [r61];
  L37():
    goto L4();
  L41():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L5(r63):
    popenv;
    return r63;
  L42():
    object29 = ld object;
    check L44() else D28();
  L43():
    r62 = dyn base4(<sym object>);
    goto L5(r62);
  D28():
    deopt 72 [object29];
  L44():
    object30 = force? object29;
    checkMissing(object30);
    invisible = ldf invisible in base;
    r64 = dyn invisible(object30);
    check L45() else D29();
  D29():
    deopt 75 [r64];
  L45():
    goto L5(r64);
  }
}