fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner791558112;
    st `plot.HoltWinters` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner791558112(x, `predicted.values`, intervals, separator, col, `col.predicted`, `col.intervals`, `col.separator`, lty, `lty.predicted`, `lty.intervals`, `lty.separator`, ylab, main, ylim, `...`) {
  (reg x:*, reg predicted_values:*, reg intervals:*, reg separator:*, reg col:*, reg col_predicted:*, reg col_intervals:*, reg col_separator:*, reg lty:*, reg lty_predicted:*, reg lty_intervals:*, reg lty_separator:*, reg ylab:*, reg main:*, reg ylim:*, reg ddd:dots) -+> V { var x:*, var `predicted.values`:*, reg predicted_values_isMissing:L, reg predicted_values_orDefault:*, var intervals:*, reg intervals_isMissing:L, reg intervals_orDefault:*, var separator:*, reg separator_isMissing:L, reg separator_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var `col.predicted`:*, reg col_predicted_isMissing:L, reg col_predicted_orDefault:*, var `col.intervals`:*, reg col_intervals_isMissing:L, reg col_intervals_orDefault:*, var `col.separator`:*, reg col_separator_isMissing:L, reg col_separator_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var `lty.predicted`:*, reg lty_predicted_isMissing:L, reg lty_predicted_orDefault:*, var `lty.intervals`:*, reg lty_intervals_isMissing:L, reg lty_intervals_orDefault:*, var `lty.separator`:*, reg lty_separator_isMissing:L, reg lty_separator_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ylim1:*, reg ylim2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg na_omit:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg fitted:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r7:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg x3:*, reg x4:V, reg c3:L, reg x6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg predicted_values1:*, reg predicted_values2:V, reg c4:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg range:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg predicted_values3:*, reg predicted_values4:V, reg length:cls, reg r19:V, reg r20:V, reg c5:L, reg c6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c10:L, reg r22:V, reg predicted_values5:*, reg predicted_values6:V, reg is_na:cls, reg r23:V, reg r24:V, reg c11:L, reg c12:V, reg dev_hold:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg on_exit:cls, reg r28:V, reg plot:cls, reg ts:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg fitted1:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r32:V, reg c14:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r35:V, reg preds:*, reg preds1:V, reg c15:L, reg predicted_values7:*, reg predicted_values8:V, reg c16:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r36:V, reg dx8:V, reg c17:cls, reg r37:V, reg p3:p(V +), reg start:cls, reg fitted2:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r40:V, reg c18:L, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __3:cls, reg r43:V, reg p5:p(V +), reg r45:V, reg p6:p(V +), reg frequency:cls, reg fitted3:cls, reg x11:*, reg x12:V, reg p7:p(V +), reg r48:V, reg c19:L, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __4:cls, reg r51:V, reg p8:p(V +), reg r53:V, reg p9:p(V +), reg r55:V, reg p10:p(V +), reg col_predicted1:*, reg col_predicted2:V, reg p11:p(V +), reg ylim3:*, reg ylim4:V, reg p12:p(V +), reg ylab1:*, reg ylab2:V, reg p13:p(V +), reg main1:*, reg main2:V, reg p14:p(V +), reg lty_predicted1:*, reg lty_predicted2:V, reg p15:p(V +), reg ddd1:dots?, reg r62:V, reg preds2:*, reg preds3:V, reg c20:L, reg c22:V, reg intervals1:*, reg intervals2:V, reg c23:L, reg c24:V, reg c26:L, reg c28:V, reg ncol:cls, reg predicted_values11:*, reg predicted_values12:V, reg p16:p(V +), reg r64:V, reg r65:V, reg c29:L, reg c30:V, reg c32:L, reg lines:cls, reg predicted_values13:*, reg predicted_values14:V, reg c33:L, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __5:cls, reg r66:V, reg p17:p(V +), reg col_intervals1:*, reg col_intervals2:V, reg p18:p(V +), reg lty_intervals1:*, reg lty_intervals2:V, reg p19:p(V +), reg r70:V, reg lines1:cls, reg predicted_values17:*, reg predicted_values18:V, reg c34:L, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg __6:cls, reg r71:V, reg p20:p(V +), reg col_intervals3:*, reg col_intervals4:V, reg p21:p(V +), reg lty_intervals3:*, reg lty_intervals4:V, reg p22:p(V +), reg r75:V, reg lines2:cls, reg x13:*, reg x14:V, reg c35:L, reg x16:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r77:V, reg p23:p(V +), reg col1:*, reg col2:V, reg p24:p(V +), reg lty1:*, reg lty2:V, reg p25:p(V +), reg r81:V, reg separator1:*, reg separator2:V, reg c36:L, reg c38:V, reg preds4:*, reg preds5:V, reg c39:L, reg c40:V, reg c42:L, reg abline:cls, reg time:cls, reg x17:*, reg x18:V, reg c43:L, reg x20:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r82:V, reg p26:p(V +), reg r84:V, reg c44:L, reg r86:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r89:V, reg r90:V, reg r91:V, reg x21:*, reg x22:V, reg c45:L, reg r93:V, reg x24:V, reg dr22:V, reg dc11:L, reg dx23:V, reg r95:V, reg dx24:V, reg r96:V, reg length1:cls, reg r97:V, reg __7:cls, reg r98:V, reg p27:p(V +), reg lty_separator1:*, reg lty_separator2:V, reg p28:p(V +), reg col_separator1:*, reg col_separator2:V, reg p29:p(V +), reg r102:V |
    mkenv;
    st x = x;
    predicted_values_isMissing = missing.0(predicted_values);
    if predicted_values_isMissing then L0(NA_LGL) else L0(predicted_values);
  L0(predicted_values_orDefault):
    st `predicted.values` = predicted_values_orDefault;
    intervals_isMissing = missing.0(intervals);
    if intervals_isMissing then L1(TRUE) else L1(intervals);
  L1(intervals_orDefault):
    st intervals = intervals_orDefault;
    separator_isMissing = missing.0(separator);
    if separator_isMissing then L2(TRUE) else L2(separator);
  L2(separator_orDefault):
    st separator = separator_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L3(1.0) else L3(col);
  L3(col_orDefault):
    st col = col_orDefault;
    col_predicted_isMissing = missing.0(col_predicted);
    if col_predicted_isMissing then L4(2.0) else L4(col_predicted);
  L4(col_predicted_orDefault):
    st `col.predicted` = col_predicted_orDefault;
    col_intervals_isMissing = missing.0(col_intervals);
    if col_intervals_isMissing then L5(4.0) else L5(col_intervals);
  L5(col_intervals_orDefault):
    st `col.intervals` = col_intervals_orDefault;
    col_separator_isMissing = missing.0(col_separator);
    if col_separator_isMissing then L6(1.0) else L6(col_separator);
  L6(col_separator_orDefault):
    st `col.separator` = col_separator_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L7(1.0) else L7(lty);
  L7(lty_orDefault):
    st lty = lty_orDefault;
    lty_predicted_isMissing = missing.0(lty_predicted);
    if lty_predicted_isMissing then L8(1.0) else L8(lty_predicted);
  L8(lty_predicted_orDefault):
    st `lty.predicted` = lty_predicted_orDefault;
    lty_intervals_isMissing = missing.0(lty_intervals);
    if lty_intervals_isMissing then L9(1.0) else L9(lty_intervals);
  L9(lty_intervals_orDefault):
    st `lty.intervals` = lty_intervals_orDefault;
    lty_separator_isMissing = missing.0(lty_separator);
    if lty_separator_isMissing then L10(3.0) else L10(lty_separator);
  L10(lty_separator_orDefault):
    st `lty.separator` = lty_separator_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L11("Observed / Fitted") else L11(ylab);
  L11(ylab_orDefault):
    st ylab = ylab_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L12("Holt-Winters filtering") else L12(main);
  L12(main_orDefault):
    st main = main_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L13(NULL) else L13(ylim);
  L13(ylim_orDefault):
    st ylim = ylim_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L14(r1):
    c1 = `as.logical`(r1);
    if c1 then L31() else L15();
  L28():
    ylim1 = ld ylim;
    check L30() else D0();
  L29():
    r = dyn base(<sym ylim>);
    goto L14(r);
  D0():
    deopt 1 [ylim1];
  L15():
    goto L17();
  L17():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L30():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c = `==`(ylim2, NULL);
    goto L14(c);
  L31():
    sym1 = ldf range;
    base1 = ldf range in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L16(r3):
    st ylim = r3;
    goto L17();
  L18(r18):
    r20 = `>`(r18, 1.0);
    c5 = `as.logical`(r20);
    if c5 then L19(c5) else L42();
  L32():
    na_omit = ldf `na.omit`;
    check L34() else D1();
  L33():
    r2 = dyn base1(<lang na.omit(c(`[`(fitted(x), , 1.0), `$`(x, x), predicted.values))>);
    goto L16(r2);
  L38():
    predicted_values3 = ld `predicted.values`;
    check L40() else D4();
  L39():
    r17 = dyn base3(<sym predicted.values>);
    goto L18(r17);
  D1():
    deopt 7 [];
  D4():
    deopt 17 [predicted_values3];
  L19(c6):
    st preds = c6;
    dev_hold = ldf `dev.hold`;
    check L48() else D8();
  L34():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r5):
      return r5;
    L2():
      fitted = ldf fitted;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r7 = dyn fitted(p);
      c2 = `is.object`(r7);
      if c2 then L4() else L5();
    L3():
      r4 = dyn base2(<lang `[`(fitted(x), , 1.0)>, <lang `$`(x, x)>, <sym predicted.values>);
      goto L0(r4);
    L1(dx1):
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c3 = `is.object`(x4);
      if c3 then L8() else L9(x4);
    L4():
      dr = tryDispatchBuiltin.1("[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5();
    L5():
      __ = ldf `[` in base;
      r10 = dyn __(r7, <missing>, 1.0);
      goto L1(r10);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L7(dx3):
      predicted_values1 = ld `predicted.values`;
      predicted_values2 = force? predicted_values1;
      checkMissing(predicted_values2);
      c4 = ldf c in base;
      r12 = dyn c4(dx1, dx3, predicted_values2);
      goto L0(r12);
    L8():
      dr2 = tryDispatchBuiltin.1("$", x4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(x6):
      r11 = `$`(x6, <sym x>);
      goto L7(r11);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L7(dx2);
    };
    r14 = dyn na_omit(p1);
    check L35() else D2();
  L40():
    predicted_values4 = force? predicted_values3;
    checkMissing(predicted_values4);
    length = ldf length in base;
    r19 = dyn length(predicted_values4);
    check L41() else D5();
  L42():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  D2():
    deopt 9 [r14];
  D5():
    deopt 20 [r19];
  D8():
    deopt 33 [];
  L20(c10, r22):
    r24 = `!`(r22);
    c11 = `as.logical`(r24);
    c12 = `||`(c10, c11);
    goto L19(c12);
  L35():
    range = ldf range in base;
    r15 = dyn range(r14);
    check L36() else D3();
  L41():
    goto L18(r19);
  L43():
    predicted_values5 = ld `predicted.values`;
    check L45() else D6();
  L44():
    r21 = dyn base4(<sym predicted.values>);
    goto L20(c5, r21);
  L48():
    r25 = dyn dev_hold();
    check L49() else D9();
  D3():
    deopt 11 [r15];
  D6():
    deopt 25 [c5, predicted_values5];
  D9():
    deopt 34 [r25];
  L36():
    goto L16(r15);
  L45():
    predicted_values6 = force? predicted_values5;
    checkMissing(predicted_values6);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(predicted_values6);
    check L46() else D7();
  L49():
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  D7():
    deopt 28 [c5, r23];
  L21():
    plot = ldf plot;
    check L52() else D10();
  L46():
    goto L20(c5, r23);
  L50():
    on_exit = ldf `on.exit` in base;
    r28 = dyn on_exit(<lang dev.flush()>);
    goto L21();
  L51():
    r26 = dyn base5(<lang dev.flush()>);
    goto L21();
  D10():
    deopt 39 [];
  L52():
    p10 = prom<V +>{
      ts = ldf ts;
      p3 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L5() else L6();
      L0(r30):
        return r30;
      L5():
        fitted1 = ldf fitted;
        p2 = prom<V +>{
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r32 = dyn fitted1(p2);
        c14 = `is.object`(r32);
        if c14 then L7() else L8();
      L6():
        r29 = dyn base6(<lang `[`(fitted(x), , 1.0)>, <lang if(preds, `[`(predicted.values, , 1.0))>);
        goto L0(r29);
      L1(dx5):
        preds = ld preds;
        preds1 = force? preds;
        checkMissing(preds1);
        c15 = `as.logical`(preds1);
        if c15 then L10() else L2();
      L7():
        dr4 = tryDispatchBuiltin.1("[", r32);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L9() else L8();
      L8():
        __1 = ldf `[` in base;
        r35 = dyn __1(r32, <missing>, 1.0);
        goto L1(r35);
      L2():
        goto L4(NULL);
      L4(dx8):
        c17 = ldf c in base;
        r37 = dyn c17(dx5, dx8);
        goto L0(r37);
      L9():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      L10():
        predicted_values7 = ld `predicted.values`;
        predicted_values8 = force? predicted_values7;
        checkMissing(predicted_values8);
        c16 = `is.object`(predicted_values8);
        if c16 then L11() else L12();
      L3(dx7):
        goto L4(dx7);
      L11():
        dr6 = tryDispatchBuiltin.1("[", predicted_values8);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L13() else L12();
      L12():
        __2 = ldf `[` in base;
        r36 = dyn __2(predicted_values8, <missing>, 1.0);
        goto L3(r36);
      L13():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L3(dx6);
      };
      p6 = prom<V +>{
        start = ldf start;
        p5 = prom<V +>{
          fitted2 = ldf fitted;
          p4 = prom<V +>{
            x9 = ld x;
            x10 = force? x9;
            checkMissing(x10);
            return x10;
          };
          r40 = dyn fitted2(p4);
          c18 = `is.object`(r40);
          if c18 then L1() else L2();
        L0(dx10):
          return dx10;
        L1():
          dr8 = tryDispatchBuiltin.1("[", r40);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2();
        L2():
          __3 = ldf `[` in base;
          r43 = dyn __3(r40, <missing>, 1.0);
          goto L0(r43);
        L3():
          dx9 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx9);
        };
        r45 = dyn start(p5);
        return r45;
      };
      p9 = prom<V +>{
        frequency = ldf frequency;
        p8 = prom<V +>{
          fitted3 = ldf fitted;
          p7 = prom<V +>{
            x11 = ld x;
            x12 = force? x11;
            checkMissing(x12);
            return x12;
          };
          r48 = dyn fitted3(p7);
          c19 = `is.object`(r48);
          if c19 then L1() else L2();
        L0(dx12):
          return dx12;
        L1():
          dr10 = tryDispatchBuiltin.1("[", r48);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2();
        L2():
          __4 = ldf `[` in base;
          r51 = dyn __4(r48, <missing>, 1.0);
          goto L0(r51);
        L3():
          dx11 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx11);
        };
        r53 = dyn frequency(p8);
        return r53;
      };
      r55 = dyn ts[, start, frequency](p3, p6, p9);
      return r55;
    };
    p11 = prom<V +>{
      col_predicted1 = ld `col.predicted`;
      col_predicted2 = force? col_predicted1;
      checkMissing(col_predicted2);
      return col_predicted2;
    };
    p12 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p13 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p14 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p15 = prom<V +>{
      lty_predicted1 = ld `lty.predicted`;
      lty_predicted2 = force? lty_predicted1;
      checkMissing(lty_predicted2);
      return lty_predicted2;
    };
    ddd1 = ld `...`;
    r62 = dyn plot[, col, ylim, ylab, main, lty, `...`](p10, p11, p12, p13, p14, p15, ddd1);
    check L53() else D11();
  D11():
    deopt 52 [r62];
  L53():
    preds2 = ld preds;
    check L54() else D12();
  D12():
    deopt 53 [preds2];
  L54():
    preds3 = force? preds2;
    checkMissing(preds3);
    c20 = `as.logical`(preds3);
    if c20 then L55() else L22(c20);
  L22(c22):
    c26 = `as.logical`(c22);
    if c26 then L58() else L23(c26);
  L55():
    intervals1 = ld intervals;
    check L56() else D13();
  D13():
    deopt 55 [c20, intervals1];
  L23(c28):
    c32 = `as.logical`(c28);
    if c32 then L62() else L24();
  L56():
    intervals2 = force? intervals1;
    checkMissing(intervals2);
    c23 = `as.logical`(intervals2);
    c24 = `&&`(c20, c23);
    goto L22(c24);
  L58():
    ncol = ldf ncol;
    check L59() else D14();
  D14():
    deopt 59 [c26];
  L24():
    goto L25();
  L25():
    lines2 = ldf lines;
    check L68() else D20();
  L59():
    p16 = prom<V +>{
      predicted_values11 = ld `predicted.values`;
      predicted_values12 = force? predicted_values11;
      checkMissing(predicted_values12);
      return predicted_values12;
    };
    r64 = dyn ncol(p16);
    check L60() else D15();
  L62():
    lines = ldf lines;
    check L63() else D16();
  D15():
    deopt 61 [c26, r64];
  D16():
    deopt 66 [];
  D20():
    deopt 84 [];
  L60():
    r65 = `>`(r64, 1.0);
    c29 = `as.logical`(r65);
    c30 = `&&`(c26, c29);
    goto L23(c30);
  L63():
    p17 = prom<V +>{
      predicted_values13 = ld `predicted.values`;
      predicted_values14 = force? predicted_values13;
      checkMissing(predicted_values14);
      c33 = `is.object`(predicted_values14);
      if c33 then L1() else L2();
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", predicted_values14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r66 = dyn __5(predicted_values14, <missing>, 2.0);
      goto L0(r66);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    p18 = prom<V +>{
      col_intervals1 = ld `col.intervals`;
      col_intervals2 = force? col_intervals1;
      checkMissing(col_intervals2);
      return col_intervals2;
    };
    p19 = prom<V +>{
      lty_intervals1 = ld `lty.intervals`;
      lty_intervals2 = force? lty_intervals1;
      checkMissing(lty_intervals2);
      return lty_intervals2;
    };
    r70 = dyn lines[, col, lty](p17, p18, p19);
    check L64() else D17();
  L68():
    p23 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c35 = `is.object`(x14);
      if c35 then L1() else L2(x14);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x14);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x16):
      r77 = `$`(x16, <sym x>);
      goto L0(r77);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    p24 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p25 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    r81 = dyn lines2[, col, lty](p23, p24, p25);
    check L69() else D21();
  D17():
    deopt 72 [r70];
  D21():
    deopt 90 [r81];
  L64():
    lines1 = ldf lines;
    check L65() else D18();
  L69():
    separator1 = ld separator;
    check L70() else D22();
  D18():
    deopt 74 [];
  D22():
    deopt 91 [separator1];
  L65():
    p20 = prom<V +>{
      predicted_values17 = ld `predicted.values`;
      predicted_values18 = force? predicted_values17;
      checkMissing(predicted_values18);
      c34 = `is.object`(predicted_values18);
      if c34 then L1() else L2();
    L0(dx16):
      return dx16;
    L1():
      dr14 = tryDispatchBuiltin.1("[", predicted_values18);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __6 = ldf `[` in base;
      r71 = dyn __6(predicted_values18, <missing>, 3.0);
      goto L0(r71);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx15);
    };
    p21 = prom<V +>{
      col_intervals3 = ld `col.intervals`;
      col_intervals4 = force? col_intervals3;
      checkMissing(col_intervals4);
      return col_intervals4;
    };
    p22 = prom<V +>{
      lty_intervals3 = ld `lty.intervals`;
      lty_intervals4 = force? lty_intervals3;
      checkMissing(lty_intervals4);
      return lty_intervals4;
    };
    r75 = dyn lines1[, col, lty](p20, p21, p22);
    check L66() else D19();
  L70():
    separator2 = force? separator1;
    checkMissing(separator2);
    c36 = `as.logical`(separator2);
    if c36 then L71() else L26(c36);
  D19():
    deopt 80 [r75];
  L26(c38):
    c42 = `as.logical`(c38);
    if c42 then L74() else L27();
  L66():
    goto L25();
  L71():
    preds4 = ld preds;
    check L72() else D23();
  D23():
    deopt 93 [c36, preds4];
  L27():
    invisible.0();
    popenv;
    return NULL;
  L72():
    preds5 = force? preds4;
    checkMissing(preds5);
    c39 = `as.logical`(preds5);
    c40 = `&&`(c36, c39);
    goto L26(c40);
  L74():
    abline = ldf abline;
    check L75() else D24();
  D24():
    deopt 97 [];
  L75():
    p27 = prom<V +>{
      time = ldf time;
      p26 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c43 = `is.object`(x18);
        if c43 then L1() else L2(x18);
      L0(dx20):
        return dx20;
      L1():
        dr18 = tryDispatchBuiltin.1("$", x18);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(x20):
        r82 = `$`(x20, <sym x>);
        goto L0(r82);
      L3():
        dx19 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx19);
      };
      r84 = dyn time(p26);
      c44 = `is.object`(r84);
      if c44 then L2() else L3(r84);
    L0(dx22):
      return dx22;
    L2():
      dr20 = tryDispatchBuiltin.1("[", r84);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(r86):
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L1(r90, r91):
      __7 = ldf `[` in base;
      r98 = dyn __7(r90, r91);
      goto L0(r98);
    L4():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    L5():
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c45 = `is.object`(x22);
      if c45 then L8() else L9(r86, x22);
    L6():
      r89 = dyn base7(<lang `$`(x, x)>);
      goto L1(r86, r89);
    L7(r95, dx24):
      length1 = ldf length in base;
      r97 = dyn length1(dx24);
      goto L1(r95, r97);
    L8():
      dr22 = tryDispatchBuiltin.1("$", x22);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L10() else L9(r86, dr22);
    L9(r93, x24):
      r96 = `$`(x24, <sym x>);
      goto L7(r93, r96);
    L10():
      dx23 = getTryDispatchBuiltinValue(dr22);
      goto L7(r86, dx23);
    };
    p28 = prom<V +>{
      lty_separator1 = ld `lty.separator`;
      lty_separator2 = force? lty_separator1;
      checkMissing(lty_separator2);
      return lty_separator2;
    };
    p29 = prom<V +>{
      col_separator1 = ld `col.separator`;
      col_separator2 = force? col_separator1;
      checkMissing(col_separator2);
      return col_separator2;
    };
    r102 = dyn abline[v, lty, col](p27, p28, p29);
    check L76() else D25();
  D25():
    deopt 104 [r102];
  L76():
    popenv;
    return r102;
  }
}