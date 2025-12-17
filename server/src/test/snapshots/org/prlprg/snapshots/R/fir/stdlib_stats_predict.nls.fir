fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r5:V, reg nls:cls, reg __:cls, reg r6:V, reg p1:p(V +), reg BOD:*, reg BOD1:V, reg p2:p(V +), reg r9:V, reg predict:cls, reg fm:*, reg fm1:V, reg p3:p(V +), reg r11:V, reg par:cls, reg r12:V, reg plot:cls, reg __1:cls, reg r13:V, reg p4:p(V +), reg BOD2:*, reg BOD3:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c:cls, reg r18:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg c1:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg seq:cls, reg r25:V, reg lines:cls, reg tt:*, reg tt1:V, reg p8:p(V +), reg predict1:cls, reg fm2:*, reg fm3:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg tt2:*, reg tt3:V, reg list:cls, reg r30:V, reg p10:p(V +), reg r32:V, reg p11:p(V +), reg r34:V, reg par1:cls, reg opar:*, reg opar1:V, reg p12:p(V +), reg r36:V, reg options1:cls, reg od:*, reg od1:V, reg p13:p(V +), reg r38:V |
    mkenv;
    r = clos inner3425619178;
    st `predict.nls` = r;
    options = ldf options;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn options[digits](5.0);
    check L2() else D1();
  D1():
    deopt 7 [r1];
  L2():
    st od = r1;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    nls = ldf nls;
    check L7() else D4();
  L3():
    require = ldf require;
    check L5() else D2();
  L4():
    r2 = dyn base(<sym graphics>);
    goto L0();
  D2():
    deopt 11 [];
  D4():
    deopt 15 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r5 = dyn require(p);
    check L6() else D3();
  L7():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r6 = dyn __(<sym demand>, <lang SSasympOrig(Time, A, lrc)>);
      return r6;
    };
    p2 = prom<V +>{
      BOD = ld BOD;
      BOD1 = force? BOD;
      checkMissing(BOD1);
      return BOD1;
    };
    r9 = dyn nls[, data](p1, p2);
    check L8() else D5();
  D3():
    deopt 13 [r5];
  D5():
    deopt 19 [r9];
  L6():
    goto L0();
  L8():
    st fm = r9;
    predict = ldf predict;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p3 = prom<V +>{
      fm = ld fm;
      fm1 = force? fm;
      checkMissing(fm1);
      return fm1;
    };
    r11 = dyn predict(p3);
    check L10() else D7();
  D7():
    deopt 24 [r11];
  L10():
    par = ldf par;
    check L11() else D8();
  D8():
    deopt 26 [];
  L11():
    r12 = dyn par[las](1.0);
    check L12() else D9();
  D9():
    deopt 29 [r12];
  L12():
    st opar = r12;
    plot = ldf plot;
    check L13() else D10();
  D10():
    deopt 32 [];
  L13():
    p4 = prom<V +>{
      __1 = ldf `~` in base;
      r13 = dyn __1(<sym demand>, <sym Time>);
      return r13;
    };
    p5 = prom<V +>{
      BOD2 = ld BOD;
      BOD3 = force? BOD2;
      checkMissing(BOD3);
      return BOD3;
    };
    p6 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c = ldf c in base;
      r18 = dyn c(0.0, 7.0);
      goto L0(r18);
    L2():
      r16 = dyn base1(0.0, 7.0);
      goto L0(r16);
    };
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c1 = ldf c in base;
      r22 = dyn c1(0.0, 20.0);
      goto L0(r22);
    L2():
      r20 = dyn base2(0.0, 20.0);
      goto L0(r20);
    };
    r24 = dyn plot[, data, col, main, xlim, ylim](p4, p5, 4.0, "BOD data and fitted first-order curve", p6, p7);
    check L14() else D11();
  D11():
    deopt 44 [r24];
  L14():
    seq = ldf seq;
    check L15() else D12();
  D12():
    deopt 46 [];
  L15():
    r25 = dyn seq[, , `length.out`](0.0, 8.0, 101.0);
    check L16() else D13();
  D13():
    deopt 51 [r25];
  L16():
    st tt = r25;
    lines = ldf lines;
    check L17() else D14();
  D14():
    deopt 54 [];
  L17():
    p8 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    p11 = prom<V +>{
      predict1 = ldf predict;
      p9 = prom<V +>{
        fm2 = ld fm;
        fm3 = force? fm2;
        checkMissing(fm3);
        return fm3;
      };
      p10 = prom<V +>{
        sym3 = ldf list;
        base3 = ldf list in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        tt2 = ld tt;
        tt3 = force? tt2;
        checkMissing(tt3);
        list = ldf list in base;
        r30 = dyn list(tt3);
        goto L0(r30);
      L2():
        r28 = dyn base3[Time](<sym tt>);
        goto L0(r28);
      };
      r32 = dyn predict1(p9, p10);
      return r32;
    };
    r34 = dyn lines(p8, p11);
    check L18() else D15();
  D15():
    deopt 57 [r34];
  L18():
    par1 = ldf par;
    check L19() else D16();
  D16():
    deopt 59 [];
  L19():
    p12 = prom<V +>{
      opar = ld opar;
      opar1 = force? opar;
      checkMissing(opar1);
      return opar1;
    };
    r36 = dyn par1(p12);
    check L20() else D17();
  D17():
    deopt 61 [r36];
  L20():
    options1 = ldf options;
    check L21() else D18();
  D18():
    deopt 63 [];
  L21():
    p13 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r38 = dyn options1(p13);
    check L22() else D19();
  D19():
    deopt 65 [r38];
  L22():
    popenv;
    return r38;
  }
}
fun inner3425619178(object, newdata, `se.fit`, scale, df, interval, level, `...`) {
  (reg object:*, reg newdata:*, reg se_fit:*, reg scale:*, reg df:*, reg interval:*, reg level:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `se.fit`:*, reg se_fit_isMissing:L, reg se_fit_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var df:*, reg df_isMissing:L, reg df_orDefault:*, var interval:*, reg interval_isMissing:L, reg interval_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c1:L, reg as_vector:cls, reg fitted:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg object3:*, reg object4:V, reg c2:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg c3:V, reg r16:V, reg c4:L, reg _checkMFClasses:cls, reg cl:*, reg cl1:V, reg p3:p(V +), reg newdata1:*, reg newdata2:V, reg p4:p(V +), reg r19:V, reg object7:*, reg object8:V, reg c5:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg c6:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r22:V, reg dx8:cls, reg newdata3:*, reg newdata4:V, reg p5:p(V +), reg r24:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    se_fit_isMissing = missing.0(se_fit);
    if se_fit_isMissing then L0(FALSE) else L0(se_fit);
  L0(se_fit_orDefault):
    st `se.fit` = se_fit_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(NULL) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
    df_isMissing = missing.0(df);
    if df_isMissing then L2(+Infinity) else L2(df);
  L2(df_orDefault):
    st df = df_orDefault;
    interval_isMissing = missing.0(interval);
    if interval_isMissing then L3() else L4(interval);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("none", "confidence", "prediction");
      goto L0(r2);
    L2():
      r = dyn base("none", "confidence", "prediction");
      goto L0(r);
    };
    goto L4(p);
  L4(interval_orDefault):
    st interval = interval_orDefault;
    level_isMissing = missing.0(level);
    if level_isMissing then L5(0.95) else L5(level);
  L5(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L6(r5):
    c1 = `as.logical`(r5);
    if c1 then L14() else L7();
  L12():
    missing = ldf missing in base;
    r6 = dyn missing(<sym newdata>);
    goto L6(r6);
  L13():
    r4 = dyn base1(<sym newdata>);
    goto L6(r4);
  L7():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L14():
    as_vector = ldf `as.vector`;
    check L15() else D0();
  D0():
    deopt 4 [];
  L9(r14):
    r16 = `!`(r14);
    c4 = `as.logical`(r16);
    if c4 then L26() else L10();
  L15():
    p2 = prom<V +>{
      fitted = ldf fitted;
      p1 = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r8 = dyn fitted(p1);
      return r8;
    };
    r10 = dyn as_vector(p2);
    check L16() else D1();
  L19():
    object3 = ld object;
    check L21() else D2();
  L20():
    r13 = dyn base2(<lang `<-`(cl, `$`(object, dataClasses))>);
    goto L9(r13);
  D1():
    deopt 6 [r10];
  D2():
    deopt 11 [object3];
  L10():
    goto L11();
  L11():
    object7 = ld object;
    check L30() else D5();
  L16():
    popenv;
    return r10;
  L21():
    object4 = force? object3;
    checkMissing(object4);
    c2 = `is.object`(object4);
    if c2 then L23() else L24(object4);
  L26():
    _checkMFClasses = ldf `.checkMFClasses`;
    check L27() else D3();
  D3():
    deopt 18 [];
  D5():
    deopt 24 [object7];
  L22(dx1):
    st cl = dx1;
    c3 = `==`(dx1, NULL);
    goto L9(c3);
  L23():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(object6):
    r15 = `$`(object6, <sym dataClasses>);
    goto L22(r15);
  L27():
    p3 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p4 = prom<V +>{
      newdata1 = ld newdata;
      newdata2 = force? newdata1;
      checkMissing(newdata2);
      return newdata2;
    };
    r19 = dyn _checkMFClasses(p3, p4);
    check L28() else D4();
  L30():
    object8 = force? object7;
    checkMissing(object8);
    c5 = `is.object`(object8);
    if c5 then L32() else L33(object8);
  D4():
    deopt 21 [r19];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L28():
    goto L11();
  L31(dx3):
    c6 = `is.object`(dx3);
    if c6 then L36() else L37(dx3);
  L32():
    dr2 = tryDispatchBuiltin.1("$", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(object10):
    r21 = `$`(object10, <sym m>);
    goto L31(r21);
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L35(dx7):
    checkFun.0(dx7);
    dx8 = dx7 as cls;
    p5 = prom<V +>{
      newdata3 = ld newdata;
      newdata4 = force? newdata3;
      checkMissing(newdata4);
      return newdata4;
    };
    r24 = dyn dx8(p5);
    check L39() else D6();
  L36():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(dr4);
  L37(dx5):
    r22 = `$`(dx5, <sym predict>);
    goto L35(r22);
  D6():
    deopt 30 [r24];
  L38():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx6);
  L39():
    popenv;
    return r24;
  }
}