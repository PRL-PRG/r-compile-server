fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3884583351;
    st dffits = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3884583351(model, infl, res) {
  (reg model:*, reg infl:*, reg res:*) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var res:*, reg res_isMissing:L, reg res_orDefault:*, reg weighted_residuals:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg res1:*, reg res2:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg res5:V, reg r7:V, reg infl1:*, reg infl2:V, reg c:L, reg res7:V, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg res9:V, reg dx1:V, reg r8:V, reg r9:V, reg r10:V, reg infl5:*, reg infl6:V, reg c1:L, reg r12:V, reg infl8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r14:V, reg dx3:V, reg r15:V, reg infl9:*, reg infl10:V, reg c2:L, reg r18:V, reg dx5:V, reg r19:R, reg infl12:V, reg dr4:V, reg dc2:L, reg dx7:V, reg r22:V, reg dx8:V, reg r23:R, reg dx9:V, reg r24:V, reg r25:V, reg r26:V, reg r27:V, reg l:*, reg c3:L, reg r29:R, reg l2:*, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:R, reg l5:*, reg r38:R, reg r39:V, reg res10:*, reg res11:V, reg is_infinite:cls, reg r40:V, reg ___:cls, reg r41:V, reg res12:*, reg res13:V |
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
    res1 = ld res;
    check L7() else D0();
  D0():
    deopt 0 [res1];
  L7():
    res2 = force? res1;
    checkMissing(res2);
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L4(res5, r7):
    r10 = `*`(res5, r7);
    infl5 = ld infl;
    check L15() else D2();
  L8():
    infl1 = ld infl;
    check L10() else D1();
  L9():
    r6 = dyn base(<lang `$`(infl, hat)>);
    goto L4(res2, r6);
  D1():
    deopt 2 [res2, infl1];
  D2():
    deopt 6 [r10, infl5];
  L10():
    infl2 = force? infl1;
    checkMissing(infl2);
    c = `is.object`(infl2);
    if c then L12() else L13(res2, infl2);
  L15():
    infl6 = force? infl5;
    checkMissing(infl6);
    c1 = `is.object`(infl6);
    if c1 then L17() else L18(r10, infl6);
  L11(res9, dx1):
    r9 = sqrt(dx1);
    goto L4(res9, r9);
  L12():
    dr = tryDispatchBuiltin.1("$", infl2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(res2, dr);
  L13(res7, infl4):
    r8 = `$`(infl4, <sym hat>);
    goto L11(res7, r8);
  L16(r14, dx3):
    infl9 = ld infl;
    check L20() else D3();
  L17():
    dr2 = tryDispatchBuiltin.1("$", infl6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(r10, dr2);
  L18(r12, infl8):
    r15 = `$`(infl8, <sym sigma>);
    goto L16(r12, r15);
  D3():
    deopt 9 [r14, dx3, 1.0, infl9];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(res2, dx);
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(r10, dx2);
  L20():
    infl10 = force? infl9;
    checkMissing(infl10);
    c2 = `is.object`(infl10);
    if c2 then L22() else L23(r14, dx3, 1.0, infl10);
  L21(r22, dx8, r23, dx9):
    r25 = `-`(r23, dx9);
    r26 = `*`(dx8, r25);
    r27 = `/`(r22, r26);
    st res = r27;
    l = ld res;
    c3 = `is.object`(l);
    if c3 then L25() else L26(NA_REAL, l);
  L22():
    dr4 = tryDispatchBuiltin.1("$", infl10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L24() else L23(r14, dx3, 1.0, dr4);
  L23(r18, dx5, r19, infl12):
    r24 = `$`(infl12, <sym hat>);
    goto L21(r18, dx5, r19, r24);
  L5(dx11):
    st res = dx11;
    res12 = ld res;
    check L32() else D6();
  L24():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L21(r14, dx3, 1.0, dx7);
  L25():
    dr6 = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L27() else L26(NA_REAL, dr6);
  L26(r29, l2):
    sym1 = ldf `is.infinite`;
    base1 = ldf `is.infinite` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  D6():
    deopt 27 [res12];
  L6(r37, l5, r38, r39):
    ___ = ldf `[<-` in base;
    r41 = dyn ___(l5, r38, r39);
    goto L5(r41);
  L27():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx10);
  L28():
    res10 = ld res;
    check L30() else D4();
  L29():
    r36 = dyn base1(<sym res>);
    goto L6(r29, l2, NA_REAL, r36);
  L32():
    res13 = force? res12;
    checkMissing(res13);
    popenv;
    return res13;
  D4():
    deopt 21 [r29, l2, NA_REAL, res10];
  L30():
    res11 = force? res10;
    checkMissing(res11);
    is_infinite = ldf `is.infinite` in base;
    r40 = dyn is_infinite(res11);
    check L31() else D5();
  D5():
    deopt 24 [r29, l2, NA_REAL, r40];
  L31():
    goto L6(r29, l2, NA_REAL, r40);
  }
}