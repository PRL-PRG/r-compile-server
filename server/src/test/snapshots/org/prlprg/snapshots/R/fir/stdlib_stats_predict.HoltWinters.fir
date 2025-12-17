fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg HoltWinters:cls, reg co2:*, reg co3:V, reg p1:p(V +), reg r6:V, reg predict:cls, reg m:*, reg m1:V, reg p2:p(V +), reg r8:V, reg plot:cls, reg m2:*, reg m3:V, reg p3:p(V +), reg p4:*, reg p5:V, reg p6:p(V +), reg r11:V |
    mkenv;
    r = clos inner2230301403;
    st `predict.HoltWinters` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    HoltWinters = ldf HoltWinters;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      co2 = ld co2;
      co3 = force? co2;
      checkMissing(co3);
      return co3;
    };
    r6 = dyn HoltWinters(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    st m = r6;
    predict = ldf predict;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r8 = dyn predict[, , `prediction.interval`](p2, 50.0, TRUE);
    check L8() else D5();
  D5():
    deopt 19 [r8];
  L8():
    st p = r8;
    plot = ldf plot;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p3 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    p6 = prom<V +>{
      p4 = ld p;
      p5 = force? p4;
      checkMissing(p5);
      return p5;
    };
    r11 = dyn plot(p3, p6);
    check L10() else D7();
  D7():
    deopt 25 [r11];
  L10():
    popenv;
    return r11;
  }
}
fun inner2230301403(object, `n.ahead`, `prediction.interval`, level, `...`) {
  (reg object:*, reg n_ahead:*, reg prediction_interval:*, reg level:*, reg ddd:dots) -+> V { var object:*, var `n.ahead`:*, reg n_ahead_isMissing:L, reg n_ahead_orDefault:*, var `prediction.interval`:*, reg prediction_interval_isMissing:L, reg prediction_interval_orDefault:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg frequency:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg r3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg rep:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg c2:L, reg r10:V, reg c3:L, reg c4:V, reg object9:*, reg object10:V, reg c6:L, reg c8:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c10:L, reg dx5:V, reg r11:V, reg c11:L, reg c12:V, reg c14:L, reg fit:*, reg fit1:V, reg as_vector:cls, reg n_ahead1:*, reg n_ahead2:V, reg r12:V, reg object13:*, reg object14:V, reg c15:L, reg r14:V, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r16:V, reg dx7:V, reg r17:V, reg c16:L, reg r19:V, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg r21:V, reg dx11:V, reg __:cls, reg r22:V, reg r23:V, reg p1:p(V +), reg r25:V, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg object17:*, reg object18:V, reg c17:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r30:V, reg c18:L, reg r31:V, reg c19:L, reg c20:V, reg object21:*, reg object22:V, reg c22:L, reg c24:L, reg object24:V, reg dr12:V, reg dc6:L, reg dx14:V, reg c26:L, reg dx15:V, reg r32:V, reg c27:L, reg c28:V, reg c30:L, reg object25:*, reg object26:V, reg c31:L, reg object28:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r33:V, reg r34:V, reg c32:L, reg fit2:*, reg fit3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg fit6:V, reg r36:V, reg rep1:cls, reg r37:V, reg r38:V, reg r39:V, reg fit7:*, reg fit8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg fit11:V, reg r41:V, reg rep2:cls, reg r42:V, reg r43:V, reg prediction_interval1:*, reg prediction_interval2:V, reg c33:L, reg qnorm:cls, reg level1:*, reg level2:V, reg r45:V, reg r46:V, reg p2:p(V +), reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg r53:V, reg sapply:cls, reg n_ahead3:*, reg n_ahead4:V, reg r54:V, reg p3:p(V +), reg vars:*, reg vars1:V, reg p4:p(V +), reg r57:V, reg r58:V, reg r59:V, reg ts:cls, reg cbind:cls, reg fit12:*, reg fit13:V, reg p5:p(V +), reg prediction_interval3:*, reg prediction_interval4:V, reg c34:L, reg fit14:*, reg fit15:V, reg int:*, reg int1:V, reg r62:V, reg p6:p(V +), reg prediction_interval5:*, reg prediction_interval6:V, reg c35:L, reg fit16:*, reg fit17:V, reg int2:*, reg int3:V, reg r64:V, reg p7:p(V +), reg r66:V, reg p8:p(V +), reg end:cls, reg lag:cls, reg fitted:cls, reg object29:*, reg object30:V, reg p9:p(V +), reg r69:V, reg c36:L, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __1:cls, reg r72:V, reg p10:p(V +), reg p11:p(V +), reg r75:V, reg p12:p(V +), reg r77:V, reg p13:p(V +), reg frequency1:cls, reg fitted1:cls, reg object31:*, reg object32:V, reg p14:p(V +), reg r80:V, reg c37:L, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg __2:cls, reg r83:V, reg p15:p(V +), reg r85:V, reg p16:p(V +), reg r87:V |
    mkenv;
    st object = object;
    n_ahead_isMissing = missing.0(n_ahead);
    if n_ahead_isMissing then L0(1) else L0(n_ahead);
  L0(n_ahead_orDefault):
    st `n.ahead` = n_ahead_orDefault;
    prediction_interval_isMissing = missing.0(prediction_interval);
    if prediction_interval_isMissing then L1(FALSE) else L1(prediction_interval);
  L1(prediction_interval_orDefault):
    st `prediction.interval` = prediction_interval_orDefault;
    level_isMissing = missing.0(level);
    if level_isMissing then L2(0.95) else L2(level);
  L2(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    frequency = ldf frequency;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
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
      r = `$`(object4, <sym x>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn frequency(p);
    check L20() else D1();
  D1():
    deopt 3 [r2];
  L20():
    st f = r2;
    r3 = clos inner1031285476;
    st vars = r3;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L3(r5):
    st fit = r5;
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L21():
    rep = ldf rep in base;
    r6 = dyn rep(<lang as.vector(`[`(`$`(object, coefficients), 1))>, <sym n.ahead>);
    goto L3(r6);
  L22():
    r4 = dyn base(<lang as.vector(`[`(`$`(object, coefficients), 1))>, <sym n.ahead>);
    goto L3(r4);
  L4(r8):
    r10 = `!`(r8);
    c3 = `as.logical`(r10);
    if c3 then L5(c3) else L30();
  L23():
    object5 = ld object;
    check L25() else D2();
  L24():
    r7 = dyn base1(<lang `$`(object, beta)>);
    goto L4(r7);
  D2():
    deopt 13 [object5];
  L5(c4):
    c14 = `as.logical`(c4);
    if c14 then L37() else L6();
  L25():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L27() else L28(object6);
  L30():
    object9 = ld object;
    check L31() else D3();
  D3():
    deopt 18 [c3, object9];
  L6():
    goto L7();
  L7():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L26(dx3):
    c2 = `is.logical`(dx3);
    goto L4(c2);
  L27():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(object8):
    r9 = `$`(object8, <sym beta>);
    goto L26(r9);
  L31():
    object10 = force? object9;
    checkMissing(object10);
    c6 = `is.object`(object10);
    if c6 then L33() else L34(c3, object10);
  L37():
    fit = ld fit;
    check L38() else D4();
  D4():
    deopt 22 [fit];
  L8(r29):
    r31 = `!`(r29);
    c19 = `as.logical`(r31);
    if c19 then L9(c19) else L49();
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L32(c10, dx5):
    c11 = `as.logical`(dx5);
    c12 = `||`(c10, c11);
    goto L5(c12);
  L33():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(c3, dr4);
  L34(c8, object12):
    r11 = `$`(object12, <sym beta>);
    goto L32(c8, r11);
  L38():
    fit1 = force? fit;
    checkMissing(fit1);
    as_vector = ldf `as.vector`;
    check L39() else D5();
  L42():
    object17 = ld object;
    check L44() else D7();
  L43():
    r28 = dyn base2(<lang `$`(object, gamma)>);
    goto L8(r28);
  D5():
    deopt 24 [fit1];
  D7():
    deopt 32 [object17];
  L9(c20):
    c30 = `as.logical`(c20);
    if c30 then L56() else L10();
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(c3, dx4);
  L39():
    p1 = prom<V +>{
      n_ahead1 = ld `n.ahead`;
      n_ahead2 = force? n_ahead1;
      checkMissing(n_ahead2);
      r12 = `:`(1, n_ahead2);
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c15 = `is.object`(object14);
      if c15 then L2() else L3(r12, object14);
    L1(r16, dx7):
      c16 = `is.object`(dx7);
      if c16 then L5() else L6(r16, dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("$", object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(r12, dr6);
    L3(r14, object16):
      r17 = `$`(object16, <sym coefficients>);
      goto L1(r14, r17);
    L0(r21, dx11):
      r23 = `*`(r21, dx11);
      return r23;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(r12, dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(r16, dr8);
    L6(r19, dx9):
      __ = ldf `[` in base;
      r22 = dyn __(dx9, 2);
      goto L0(r19, r22);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(r16, dx10);
    };
    r25 = dyn as_vector(p1);
    check L40() else D6();
  L44():
    object18 = force? object17;
    checkMissing(object18);
    c17 = `is.object`(object18);
    if c17 then L46() else L47(object18);
  L49():
    object21 = ld object;
    check L50() else D8();
  D6():
    deopt 26 [fit1, r25];
  D8():
    deopt 37 [c19, object21];
  L10():
    goto L15();
  L15():
    prediction_interval1 = ld `prediction.interval`;
    check L71() else D12();
  L40():
    r26 = `+`(fit1, r25);
    st fit = r26;
    goto L7();
  L45(dx13):
    c18 = `is.logical`(dx13);
    goto L8(c18);
  L46():
    dr10 = tryDispatchBuiltin.1("$", object18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L48() else L47(dr10);
  L47(object20):
    r30 = `$`(object20, <sym gamma>);
    goto L45(r30);
  L50():
    object22 = force? object21;
    checkMissing(object22);
    c22 = `is.object`(object22);
    if c22 then L52() else L53(c19, object22);
  L56():
    object25 = ld object;
    check L57() else D9();
  D9():
    deopt 41 [object25];
  D12():
    deopt 60 [prediction_interval1];
  L48():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L45(dx12);
  L51(c26, dx15):
    c27 = `as.logical`(dx15);
    c28 = `||`(c26, c27);
    goto L9(c28);
  L52():
    dr12 = tryDispatchBuiltin.1("$", object22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L54() else L53(c19, dr12);
  L53(c24, object24):
    r32 = `$`(object24, <sym gamma>);
    goto L51(c24, r32);
  L57():
    object26 = force? object25;
    checkMissing(object26);
    c31 = `is.object`(object26);
    if c31 then L59() else L60(object26);
  L71():
    prediction_interval2 = force? prediction_interval1;
    checkMissing(prediction_interval2);
    c33 = `as.logical`(prediction_interval2);
    if c33 then L72() else L16();
  L16():
    goto L18();
  L18():
    ts = ldf ts;
    check L80() else D17();
  L54():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L51(c19, dx14);
  L58(dx17):
    r34 = `==`(dx17, "additive");
    c32 = `as.logical`(r34);
    if c32 then L62() else L11();
  L59():
    dr14 = tryDispatchBuiltin.1("$", object26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L61() else L60(dr14);
  L60(object28):
    r33 = `$`(object28, <sym seasonal>);
    goto L58(r33);
  L72():
    qnorm = ldf qnorm;
    check L73() else D13();
  D13():
    deopt 63 [];
  D17():
    deopt 77 [];
  L11():
    fit7 = ld fit;
    check L67() else D11();
  L13(r39):
    goto L15();
  L61():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L58(dx16);
  L62():
    fit2 = ld fit;
    check L63() else D10();
  L73():
    p2 = prom<V +>{
      level1 = ld level;
      level2 = force? level1;
      checkMissing(level2);
      r45 = `+`(1.0, level2);
      r46 = `/`(r45, 2.0);
      return r46;
    };
    r48 = dyn qnorm(p2);
    check L74() else D14();
  L80():
    p8 = prom<V +>{
      cbind = ldf cbind;
      p5 = prom<V +>{
        fit12 = ld fit;
        fit13 = force? fit12;
        checkMissing(fit13);
        return fit13;
      };
      p6 = prom<V +>{
        prediction_interval3 = ld `prediction.interval`;
        prediction_interval4 = force? prediction_interval3;
        checkMissing(prediction_interval4);
        c34 = `as.logical`(prediction_interval4);
        if c34 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        fit14 = ld fit;
        fit15 = force? fit14;
        checkMissing(fit15);
        int = ld int;
        int1 = force? int;
        checkMissing(int1);
        r62 = `+`(fit15, int1);
        return r62;
      };
      p7 = prom<V +>{
        prediction_interval5 = ld `prediction.interval`;
        prediction_interval6 = force? prediction_interval5;
        checkMissing(prediction_interval6);
        c35 = `as.logical`(prediction_interval6);
        if c35 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        fit16 = ld fit;
        fit17 = force? fit16;
        checkMissing(fit17);
        int2 = ld int;
        int3 = force? int2;
        checkMissing(int3);
        r64 = `-`(fit17, int3);
        return r64;
      };
      r66 = dyn cbind[fit, upr, lwr](p5, p6, p7);
      return r66;
    };
    p13 = prom<V +>{
      end = ldf end;
      p12 = prom<V +>{
        lag = ldf lag;
        p10 = prom<V +>{
          fitted = ldf fitted;
          p9 = prom<V +>{
            object29 = ld object;
            object30 = force? object29;
            checkMissing(object30);
            return object30;
          };
          r69 = dyn fitted(p9);
          c36 = `is.object`(r69);
          if c36 then L1() else L2();
        L0(dx19):
          return dx19;
        L1():
          dr16 = tryDispatchBuiltin.1("[", r69);
          dc8 = getTryDispatchBuiltinDispatched(dr16);
          if dc8 then L3() else L2();
        L2():
          __1 = ldf `[` in base;
          r72 = dyn __1(r69, <missing>, 1.0);
          goto L0(r72);
        L3():
          dx18 = getTryDispatchBuiltinValue(dr16);
          goto L0(dx18);
        };
        p11 = prom<V +>{
          return -1.0;
        };
        r75 = dyn lag[, k](p10, p11);
        return r75;
      };
      r77 = dyn end(p12);
      return r77;
    };
    p16 = prom<V +>{
      frequency1 = ldf frequency;
      p15 = prom<V +>{
        fitted1 = ldf fitted;
        p14 = prom<V +>{
          object31 = ld object;
          object32 = force? object31;
          checkMissing(object32);
          return object32;
        };
        r80 = dyn fitted1(p14);
        c37 = `is.object`(r80);
        if c37 then L1() else L2();
      L0(dx21):
        return dx21;
      L1():
        dr18 = tryDispatchBuiltin.1("[", r80);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r83 = dyn __2(r80, <missing>, 1.0);
        goto L0(r83);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx20);
      };
      r85 = dyn frequency1(p15);
      return r85;
    };
    r87 = dyn ts[, start, frequency](p8, p13, p16);
    check L81() else D18();
  D10():
    deopt 46 [fit2];
  D11():
    deopt 52 [fit7];
  D14():
    deopt 65 [r48];
  D18():
    deopt 83 [r87];
  L63():
    fit3 = force? fit2;
    checkMissing(fit3);
    sym3 = ldf rep;
    base3 = ldf rep in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L67():
    fit8 = force? fit7;
    checkMissing(fit8);
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  L74():
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L81():
    popenv;
    return r87;
  L12(fit6, r36):
    r38 = `+`(fit6, r36);
    st fit = r38;
    goto L13(r38);
  L14(fit11, r41):
    r43 = `*`(fit11, r41);
    st fit = r43;
    goto L13(r43);
  L17(r52, r53):
    r59 = `*`(r52, r53);
    st int = r59;
    goto L18();
  L64():
    rep1 = ldf rep in base;
    r37 = dyn rep1(<lang `[`(`$`(object, coefficients), `-`(`(`(`:`(1, `(`(`+`(1.0, `(`(`||`(`!`(is.logical(`$`(object, beta))), `$`(object, beta)))))))))>, <lang length(fit)>);
    goto L12(fit3, r37);
  L65():
    r35 = dyn base3[, `length.out`](<lang `[`(`$`(object, coefficients), `-`(`(`(`:`(1, `(`(`+`(1.0, `(`(`||`(`!`(is.logical(`$`(object, beta))), `$`(object, beta)))))))))>, <lang length(fit)>);
    goto L12(fit3, r35);
  L68():
    rep2 = ldf rep in base;
    r42 = dyn rep2(<lang `[`(`$`(object, coefficients), `-`(`(`(`:`(1, `(`(`+`(1.0, `(`(`||`(`!`(is.logical(`$`(object, beta))), `$`(object, beta)))))))))>, <lang length(fit)>);
    goto L14(fit8, r42);
  L69():
    r40 = dyn base4[, `length.out`](<lang `[`(`$`(object, coefficients), `-`(`(`(`:`(1, `(`(`+`(1.0, `(`(`||`(`!`(is.logical(`$`(object, beta))), `$`(object, beta)))))))))>, <lang length(fit)>);
    goto L14(fit8, r40);
  L75():
    sapply = ldf sapply;
    check L77() else D15();
  L76():
    r51 = dyn base5(<lang sapply(`:`(1, n.ahead), vars)>);
    goto L17(r48, r51);
  D15():
    deopt 67 [r48];
  L77():
    p3 = prom<V +>{
      n_ahead3 = ld `n.ahead`;
      n_ahead4 = force? n_ahead3;
      checkMissing(n_ahead4);
      r54 = `:`(1, n_ahead4);
      return r54;
    };
    p4 = prom<V +>{
      vars = ld vars;
      vars1 = force? vars;
      checkMissing(vars1);
      return vars1;
    };
    r57 = dyn sapply(p3, p4);
    check L78() else D16();
  D16():
    deopt 70 [r48, r57];
  L78():
    r58 = sqrt(r57);
    goto L17(r48, r58);
  }
}
fun inner1031285476(h) {
  (reg h:*) -+> V { var h:*, reg r:cls, reg var:cls, reg residuals:cls, reg object:*, reg object1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg object2:*, reg object3:V, reg c:L, reg r6:V, reg object5:V, reg dr:V, reg dc:L, reg dx:V, reg r8:V, reg dx1:V, reg r9:V, reg r10:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg r17:V, reg h1:*, reg h2:V, reg r18:V, reg sapply:cls, reg h3:*, reg h4:V, reg r19:V, reg r20:V, reg p2:p(V +), reg r22:cls, reg p3:p(V +), reg r24:V, reg r25:V, reg sum:cls, reg r26:V, reg r27:V, reg r28:V, reg h5:*, reg h6:V, reg r29:V, reg f:*, reg f1:V, reg __:cls, reg r30:V, reg r31:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r34:V, reg sapply1:cls, reg h7:*, reg h8:V, reg r35:V, reg r36:V, reg p4:p(V +), reg r38:cls, reg p5:p(V +), reg r40:V, reg sum1:cls, reg r41:V, reg r42:V |
    mkenv;
    st h = h;
    r = clos inner678197094;
    st psi = r;
    var = ldf var;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p1 = prom<V +>{
      residuals = ldf residuals;
      p = prom<V +>{
        object = ld object;
        object1 = force? object;
        checkMissing(object1);
        return object1;
      };
      r2 = dyn residuals(p);
      return r2;
    };
    r4 = dyn var(p1);
    check L4() else D1();
  D1():
    deopt 6 [r4];
  L4():
    object2 = ld object;
    check L5() else D2();
  D2():
    deopt 6 [r4, object2];
  L5():
    object3 = force? object2;
    checkMissing(object3);
    c = `is.object`(object3);
    if c then L7() else L8(r4, object3);
  L6(r8, dx1):
    r10 = `==`(dx1, "additive");
    c1 = `as.logical`(r10);
    if c1 then L10() else L0();
  L7():
    dr = tryDispatchBuiltin.1("$", object3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(r4, dr);
  L8(r6, object5):
    r9 = `$`(object5, <sym seasonal>);
    goto L6(r6, r9);
  L0():
    h5 = ld h;
    check L18() else D7();
  L2(r27, r28):
    r42 = `*`(r27, r28);
    popenv;
    return r42;
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(r4, dx);
  L10():
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  D7():
    deopt 27 [r8, 1.0, h5];
  L1(r16, r17):
    goto L2(r16, r17);
  L11():
    h1 = ld h;
    check L13() else D3();
  L12():
    r15 = dyn base(1.0, <lang `*`(`(`(`>`(h, 1.0)), sapply(`:`(1, `(`(`-`(h, 1.0))), function((j=), crossprod(psi(j)), NULL)))>);
    goto L1(r8, r15);
  L18():
    h6 = force? h5;
    checkMissing(h6);
    r29 = `-`(h6, 1.0);
    f = ld f;
    check L19() else D8();
  D3():
    deopt 14 [r8, h1];
  D8():
    deopt 31 [r8, 1.0, f];
  L13():
    h2 = force? h1;
    checkMissing(h2);
    r18 = `>`(h2, 1.0);
    sapply = ldf sapply;
    check L14() else D4();
  L19():
    f1 = force? f;
    checkMissing(f1);
    __ = ldf `%%` in base;
    r30 = dyn __(r29, f1);
    check L20() else D9();
  D4():
    deopt 18 [r8, r18];
  D9():
    deopt 34 [r8, 1.0, r30];
  L14():
    p2 = prom<V +>{
      h3 = ld h;
      h4 = force? h3;
      checkMissing(h4);
      r19 = `-`(h4, 1.0);
      r20 = `:`(1, r19);
      return r20;
    };
    p3 = prom<V +>{
      r22 = clos inner678197094;
      return r22;
    };
    r24 = dyn sapply(p2, p3);
    check L15() else D5();
  L20():
    r31 = `+`(1.0, r30);
    st rel = r31;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D5():
    deopt 21 [r8, r18, r24];
  L15():
    r25 = `*`(r18, r24);
    sum = ldf sum in base;
    r26 = dyn sum(1.0, r25);
    check L16() else D6();
  L21():
    sapply1 = ldf sapply;
    check L23() else D10();
  L22():
    r34 = dyn base1(<lang sapply(`:`(0.0, `(`(`-`(h, 1.0))), function((j=), crossprod(`/`(`*`(psi(j), `[`(`$`(object, coefficients), `+`(2.0, rel))), `[`(`$`(object, coefficients), `+`(2.0, `%%`(`(`(`-`(rel, j)), f))))), NULL))>);
    goto L2(r8, r34);
  D6():
    deopt 24 [r8, r26];
  D10():
    deopt 40 [r8];
  L16():
    goto L1(r8, r26);
  L23():
    p4 = prom<V +>{
      h7 = ld h;
      h8 = force? h7;
      checkMissing(h8);
      r35 = `-`(h8, 1.0);
      r36 = `:`(0.0, r35);
      return r36;
    };
    p5 = prom<V +>{
      r38 = clos inner678197094;
      return r38;
    };
    r40 = dyn sapply1(p4, p5);
    check L24() else D11();
  D11():
    deopt 43 [r8, r40];
  L24():
    sum1 = ldf sum in base;
    r41 = dyn sum1(r40);
    check L25() else D12();
  D12():
    deopt 45 [r8, r41];
  L25():
    goto L2(r8, r41);
  }
}
fun inner678197094(j) {
  (reg j:*) -+> V { var j:*, reg object:*, reg object1:V, reg c:L, reg object3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg j1:*, reg j2:V, reg object4:*, reg object5:V, reg c1:L, reg dx3:V, reg r2:R, reg j4:V, reg object7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg r4:R, reg j6:V, reg dx7:V, reg r5:V, reg r6:V, reg r7:V, reg r8:V, reg j7:*, reg j8:V, reg f:*, reg f1:V, reg __:cls, reg r9:V, reg r10:V, reg object8:*, reg object9:V, reg c2:L, reg r13:V, reg r14:V, reg object11:V, reg dr4:V, reg dc2:L, reg dx8:V, reg r17:V, reg r18:V, reg dx9:V, reg r19:V, reg r20:V, reg object12:*, reg object13:V, reg c3:L, reg r24:V, reg r25:V, reg r26:R, reg object15:V, reg dr6:V, reg dc3:L, reg dx10:V, reg r30:V, reg r31:V, reg r32:R, reg dx11:V, reg r33:V, reg r34:V, reg r35:V, reg r36:V |
    mkenv;
    st j = j;
    object = ld object;
    check L0() else D0();
  D0():
    deopt 0 [object];
  L0():
    object1 = force? object;
    checkMissing(object1);
    c = `is.object`(object1);
    if c then L2() else L3(object1);
  L1(dx1):
    j1 = ld j;
    check L5() else D1();
  L2():
    dr = tryDispatchBuiltin.1("$", object1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(object3):
    r = `$`(object3, <sym alpha>);
    goto L1(r);
  D1():
    deopt 3 [dx1, 1.0, j1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5():
    j2 = force? j1;
    checkMissing(j2);
    object4 = ld object;
    check L6() else D2();
  D2():
    deopt 4 [dx1, 1.0, j2, object4];
  L6():
    object5 = force? object4;
    checkMissing(object5);
    c1 = `is.object`(object5);
    if c1 then L8() else L9(dx1, 1.0, j2, object5);
  L7(dx6, r4, j6, dx7):
    r6 = `*`(j6, dx7);
    r7 = `+`(r4, r6);
    r8 = `*`(dx6, r7);
    j7 = ld j;
    check L11() else D3();
  L8():
    dr2 = tryDispatchBuiltin.1("$", object5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(dx1, 1.0, j2, dr2);
  L9(dx3, r2, j4, object7):
    r5 = `$`(object7, <sym beta>);
    goto L7(dx3, r2, j4, r5);
  D3():
    deopt 10 [r8, j7];
  L10():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx1, 1.0, j2, dx5);
  L11():
    j8 = force? j7;
    checkMissing(j8);
    f = ld f;
    check L12() else D4();
  D4():
    deopt 12 [r8, f];
  L12():
    f1 = force? f;
    checkMissing(f1);
    __ = ldf `%%` in base;
    r9 = dyn __(j8, f1);
    check L13() else D5();
  D5():
    deopt 15 [r8, r9];
  L13():
    r10 = `==`(r9, 0.0);
    object8 = ld object;
    check L14() else D6();
  D6():
    deopt 17 [r8, r10, object8];
  L14():
    object9 = force? object8;
    checkMissing(object9);
    c2 = `is.object`(object9);
    if c2 then L16() else L17(r8, r10, object9);
  L15(r17, r18, dx9):
    r20 = `*`(r18, dx9);
    object12 = ld object;
    check L19() else D7();
  L16():
    dr4 = tryDispatchBuiltin.1("$", object9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(r8, r10, dr4);
  L17(r13, r14, object11):
    r19 = `$`(object11, <sym gamma>);
    goto L15(r13, r14, r19);
  D7():
    deopt 21 [r17, r20, 1.0, object12];
  L18():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L15(r8, r10, dx8);
  L19():
    object13 = force? object12;
    checkMissing(object13);
    c3 = `is.object`(object13);
    if c3 then L21() else L22(r17, r20, 1.0, object13);
  L20(r30, r31, r32, dx11):
    r34 = `-`(r32, dx11);
    r35 = `*`(r31, r34);
    r36 = `+`(r30, r35);
    popenv;
    return r36;
  L21():
    dr6 = tryDispatchBuiltin.1("$", object13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L23() else L22(r17, r20, 1.0, dr6);
  L22(r24, r25, r26, object15):
    r33 = `$`(object15, <sym alpha>);
    goto L20(r24, r25, r26, r33);
  L23():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L20(r17, r20, 1.0, dx10);
  }
}