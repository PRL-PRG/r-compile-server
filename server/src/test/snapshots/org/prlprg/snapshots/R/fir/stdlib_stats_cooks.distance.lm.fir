fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner69436157;
    st `cooks.distance.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner69436157(model, infl, res, sd, hat, `...`) {
  (reg model:*, reg infl:*, reg res:*, reg sd:*, reg hat:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var res:*, reg res_isMissing:L, reg res_orDefault:*, reg weighted_residuals:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var sd:*, reg sd_isMissing:L, reg sd_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg deviance:cls, reg model5:*, reg model6:V, reg p4:p(V +), reg r9:V, reg df_residual:cls, reg model7:*, reg model8:V, reg p5:p(V +), reg r11:V, reg r12:V, reg r13:V, reg p6:p(V +), var hat:*, reg hat_isMissing:L, reg hat_orDefault:*, reg infl1:*, reg infl2:V, reg c:L, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg p7:p(V +), var `...`:dots?, reg model9:*, reg model10:V, reg c1:L, reg model12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg res1:*, reg res2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg res5:V, reg r19:V, reg outer:cls, reg hat1:*, reg hat2:V, reg r20:V, reg p8:p(V +), reg sd1:*, reg sd2:V, reg p9:p(V +), reg r23:V, reg c2:cls, reg r24:V, reg r25:V, reg r26:V, reg hat3:*, reg hat4:V, reg r27:V, reg p10:*, reg p11:V, reg r28:V, reg l:*, reg c3:L, reg r30:R, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg r38:R, reg l5:*, reg r39:R, reg r40:V, reg res6:*, reg res7:V, reg is_infinite:cls, reg r41:V, reg ___:cls, reg r42:V, reg res8:*, reg res9:V |
    mkenv;
    st model = model;
    infl_isMissing = missing.0(infl);
    if infl_isMissing then L0() else L1(infl);
  L0():
    p1 = prom<V +>{
      lm_influence = ldf `lm.influence`;
      p = prom<V +>{
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        return model2;
      };
      r1 = dyn lm_influence[, `do.coef`](p, FALSE);
      return r1;
    };
    goto L1(p1);
  L1(infl_orDefault):
    st infl = infl_orDefault;
    res_isMissing = missing.0(res);
    if res_isMissing then L2() else L3(res);
  L2():
    p3 = prom<V +>{
      weighted_residuals = ldf `weighted.residuals`;
      p2 = prom<V +>{
        model3 = ld model;
        model4 = force? model3;
        checkMissing(model4);
        return model4;
      };
      r4 = dyn weighted_residuals(p2);
      return r4;
    };
    goto L3(p3);
  L3(res_orDefault):
    st res = res_orDefault;
    sd_isMissing = missing.0(sd);
    if sd_isMissing then L4() else L5(sd);
  L4():
    p6 = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      deviance = ldf deviance;
      p4 = prom<V +>{
        model5 = ld model;
        model6 = force? model5;
        checkMissing(model6);
        return model6;
      };
      r9 = dyn deviance(p4);
      df_residual = ldf `df.residual`;
      p5 = prom<V +>{
        model7 = ld model;
        model8 = force? model7;
        checkMissing(model8);
        return model8;
      };
      r11 = dyn df_residual(p5);
      r12 = `/`(r9, r11);
      r13 = sqrt(r12);
      goto L0(r13);
    L2():
      r6 = dyn base(<lang `/`(deviance(model), df.residual(model))>);
      goto L0(r6);
    };
    goto L5(p6);
  L5(sd_orDefault):
    st sd = sd_orDefault;
    hat_isMissing = missing.0(hat);
    if hat_isMissing then L6() else L7(hat);
  L6():
    p7 = prom<V +>{
      infl1 = ld infl;
      infl2 = force? infl1;
      checkMissing(infl2);
      c = `is.object`(infl2);
      if c then L1() else L2(infl2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", infl2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(infl4):
      r15 = `$`(infl4, <sym hat>);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L7(p7);
  L7(hat_orDefault):
    st hat = hat_orDefault;
    st `...` = ddd;
    model9 = ld model;
    check L11() else D0();
  D0():
    deopt 0 [model9];
  L11():
    model10 = force? model9;
    checkMissing(model10);
    c1 = `is.object`(model10);
    if c1 then L13() else L14(model10);
  L12(dx3):
    st p = dx3;
    res1 = ld res;
    check L16() else D1();
  L13():
    dr2 = tryDispatchBuiltin.1("$", model10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(model12):
    r17 = `$`(model12, <sym rank>);
    goto L12(r17);
  D1():
    deopt 4 [res1];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    res2 = force? res1;
    checkMissing(res2);
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L8(res5, r19):
    r25 = `/`(res5, r19);
    r26 = `^`(r25, 2.0);
    hat3 = ld hat;
    check L22() else D5();
  L17():
    outer = ldf outer;
    check L19() else D2();
  L18():
    r18 = dyn base1(<lang outer(`-`(1.0, hat), sd)>);
    goto L8(res2, r18);
  D2():
    deopt 8 [res2];
  D5():
    deopt 16 [r26, hat3];
  L19():
    p8 = prom<V +>{
      hat1 = ld hat;
      hat2 = force? hat1;
      checkMissing(hat2);
      r20 = `-`(1.0, hat2);
      return r20;
    };
    p9 = prom<V +>{
      sd1 = ld sd;
      sd2 = force? sd1;
      checkMissing(sd2);
      return sd2;
    };
    r23 = dyn outer(p8, p9);
    check L20() else D3();
  L22():
    hat4 = force? hat3;
    checkMissing(hat4);
    r27 = `*`(r26, hat4);
    p10 = ld p;
    check L23() else D6();
  D3():
    deopt 11 [res2, r23];
  D6():
    deopt 18 [r27, p10];
  L20():
    c2 = ldf c in base;
    r24 = dyn c2(r23);
    check L21() else D4();
  L23():
    p11 = force? p10;
    checkMissing(p11);
    r28 = `/`(r27, p11);
    st res = r28;
    l = ld res;
    c3 = `is.object`(l);
    if c3 then L24() else L25(NA_REAL, l);
  D4():
    deopt 13 [res2, r24];
  L9(dx5):
    st res = dx5;
    res8 = ld res;
    check L31() else D9();
  L21():
    goto L8(res2, r24);
  L24():
    dr4 = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(NA_REAL, dr4);
  L25(r30, l2):
    sym2 = ldf `is.infinite`;
    base2 = ldf `is.infinite` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  D9():
    deopt 33 [res8];
  L10(r38, l5, r39, r40):
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l5, r39, r40);
    goto L9(r42);
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L27():
    res6 = ld res;
    check L29() else D7();
  L28():
    r37 = dyn base2(<sym res>);
    goto L10(r30, l2, NA_REAL, r37);
  L31():
    res9 = force? res8;
    checkMissing(res9);
    popenv;
    return res9;
  D7():
    deopt 27 [r30, l2, NA_REAL, res6];
  L29():
    res7 = force? res6;
    checkMissing(res7);
    is_infinite = ldf `is.infinite` in base;
    r41 = dyn is_infinite(res7);
    check L30() else D8();
  D8():
    deopt 30 [r30, l2, NA_REAL, r41];
  L30():
    goto L10(r30, l2, NA_REAL, r41);
  }
}