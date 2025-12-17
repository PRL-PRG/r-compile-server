fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3289531897;
    st `cooks.distance.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3289531897(model, infl, res, dispersion, hat, `...`) {
  (reg model:*, reg infl:*, reg res:*, reg dispersion:*, reg hat:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var res:*, reg res_isMissing:L, reg res_orDefault:*, reg infl1:*, reg infl2:V, reg c:L, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p2:p(V +), var dispersion:*, reg dispersion_isMissing:L, reg dispersion_orDefault:*, reg summary:cls, reg model3:*, reg model4:V, reg p3:p(V +), reg r6:V, reg c1:L, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg p4:p(V +), var hat:*, reg hat_isMissing:L, reg hat_orDefault:*, reg infl5:*, reg infl6:V, reg c2:L, reg infl8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p5:p(V +), var `...`:dots?, reg model5:*, reg model6:V, reg c3:L, reg model8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg res1:*, reg res2:V, reg hat1:*, reg hat2:V, reg r14:V, reg r15:V, reg r16:V, reg hat3:*, reg hat4:V, reg r17:V, reg dispersion1:*, reg dispersion2:V, reg p6:*, reg p7:V, reg r18:V, reg r19:V, reg l:*, reg c4:L, reg r21:R, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym:cls, reg base:cls, reg guard:L, reg r28:V, reg r29:R, reg l5:*, reg r30:R, reg r31:V, reg res3:*, reg res4:V, reg is_infinite:cls, reg r32:V, reg ___:cls, reg r33:V, reg res5:*, reg res6:V |
    mkenv;
    st model = model;
    infl_isMissing = missing.0(infl);
    if infl_isMissing then L0() else L1(infl);
  L0():
    p1 = prom<V +>{
      influence = ldf influence;
      p = prom<V +>{
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        return model2;
      };
      r1 = dyn influence[, `do.coef`](p, FALSE);
      return r1;
    };
    goto L1(p1);
  L1(infl_orDefault):
    st infl = infl_orDefault;
    res_isMissing = missing.0(res);
    if res_isMissing then L2() else L3(res);
  L2():
    p2 = prom<V +>{
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
      r3 = `$`(infl4, <sym pear.res>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p2);
  L3(res_orDefault):
    st res = res_orDefault;
    dispersion_isMissing = missing.0(dispersion);
    if dispersion_isMissing then L4() else L5(dispersion);
  L4():
    p4 = prom<V +>{
      summary = ldf summary;
      p3 = prom<V +>{
        model3 = ld model;
        model4 = force? model3;
        checkMissing(model4);
        return model4;
      };
      r6 = dyn summary(p3);
      c1 = `is.object`(r6);
      if c1 then L1() else L2(r6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r8):
      r9 = `$`(r8, <sym dispersion>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L5(p4);
  L5(dispersion_orDefault):
    st dispersion = dispersion_orDefault;
    hat_isMissing = missing.0(hat);
    if hat_isMissing then L6() else L7(hat);
  L6():
    p5 = prom<V +>{
      infl5 = ld infl;
      infl6 = force? infl5;
      checkMissing(infl6);
      c2 = `is.object`(infl6);
      if c2 then L1() else L2(infl6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", infl6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(infl8):
      r11 = `$`(infl8, <sym hat>);
      goto L0(r11);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    goto L7(p5);
  L7(hat_orDefault):
    st hat = hat_orDefault;
    st `...` = ddd;
    model5 = ld model;
    check L10() else D0();
  D0():
    deopt 0 [model5];
  L10():
    model6 = force? model5;
    checkMissing(model6);
    c3 = `is.object`(model6);
    if c3 then L12() else L13(model6);
  L11(dx7):
    st p = dx7;
    res1 = ld res;
    check L15() else D1();
  L12():
    dr6 = tryDispatchBuiltin.1("$", model6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L14() else L13(dr6);
  L13(model8):
    r13 = `$`(model8, <sym rank>);
    goto L11(r13);
  D1():
    deopt 4 [res1];
  L14():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L15():
    res2 = force? res1;
    checkMissing(res2);
    hat1 = ld hat;
    check L16() else D2();
  D2():
    deopt 6 [res2, 1.0, hat1];
  L16():
    hat2 = force? hat1;
    checkMissing(hat2);
    r14 = `-`(1.0, hat2);
    r15 = `/`(res2, r14);
    r16 = `^`(r15, 2.0);
    hat3 = ld hat;
    check L17() else D3();
  D3():
    deopt 11 [r16, hat3];
  L17():
    hat4 = force? hat3;
    checkMissing(hat4);
    r17 = `*`(r16, hat4);
    dispersion1 = ld dispersion;
    check L18() else D4();
  D4():
    deopt 13 [r17, dispersion1];
  L18():
    dispersion2 = force? dispersion1;
    checkMissing(dispersion2);
    p6 = ld p;
    check L19() else D5();
  D5():
    deopt 14 [r17, dispersion2, p6];
  L19():
    p7 = force? p6;
    checkMissing(p7);
    r18 = `*`(dispersion2, p7);
    r19 = `/`(r17, r18);
    st res = r19;
    l = ld res;
    c4 = `is.object`(l);
    if c4 then L20() else L21(NA_REAL, l);
  L8(dx9):
    st res = dx9;
    res5 = ld res;
    check L27() else D8();
  L20():
    dr8 = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L22() else L21(NA_REAL, dr8);
  L21(r21, l2):
    sym = ldf `is.infinite`;
    base = ldf `is.infinite` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  D8():
    deopt 30 [res5];
  L9(r29, l5, r30, r31):
    ___ = ldf `[<-` in base;
    r33 = dyn ___(l5, r30, r31);
    goto L8(r33);
  L22():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx8);
  L23():
    res3 = ld res;
    check L25() else D6();
  L24():
    r28 = dyn base(<sym res>);
    goto L9(r21, l2, NA_REAL, r28);
  L27():
    res6 = force? res5;
    checkMissing(res6);
    popenv;
    return res6;
  D6():
    deopt 24 [r21, l2, NA_REAL, res3];
  L25():
    res4 = force? res3;
    checkMissing(res4);
    is_infinite = ldf `is.infinite` in base;
    r32 = dyn is_infinite(res4);
    check L26() else D7();
  D7():
    deopt 27 [r21, l2, NA_REAL, r32];
  L26():
    goto L9(r21, l2, NA_REAL, r32);
  }
}