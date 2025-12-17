fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3963952129;
    st `rstudent.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3963952129(model, infl, res, `...`) {
  (reg model:*, reg infl:*, reg res:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var res:*, reg res_isMissing:L, reg res_orDefault:*, reg infl1:*, reg infl2:V, reg c:L, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p2:p(V +), var `...`:dots?, reg res1:*, reg res2:V, reg infl5:*, reg infl6:V, reg c1:L, reg res4:V, reg infl8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg res6:V, reg dx3:V, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg res9:V, reg dx6:V, reg r7:V, reg infl9:*, reg infl10:V, reg c2:L, reg res11:V, reg dx8:V, reg r9:R, reg infl12:V, reg dr4:V, reg dc2:L, reg dx10:V, reg res13:V, reg dx11:V, reg r11:R, reg dx12:V, reg r12:V, reg r13:V, reg r14:V, reg r15:V, reg r16:V, reg l:*, reg c3:L, reg r18:R, reg l2:*, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:R, reg l5:*, reg r27:R, reg r28:V, reg res14:*, reg res15:V, reg is_infinite:cls, reg r29:V, reg ___:cls, reg r30:V, reg res16:*, reg res17:V |
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
      r3 = `$`(infl4, <sym wt.res>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p2);
  L3(res_orDefault):
    st res = res_orDefault;
    st `...` = ddd;
    res1 = ld res;
    check L7() else D0();
  D0():
    deopt 0 [res1];
  L7():
    res2 = force? res1;
    checkMissing(res2);
    infl5 = ld infl;
    check L8() else D1();
  D1():
    deopt 1 [res2, infl5];
  L8():
    infl6 = force? infl5;
    checkMissing(infl6);
    c1 = `is.object`(infl6);
    if c1 then L10() else L11(res2, infl6);
  L9(res6, dx3):
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L10():
    dr2 = tryDispatchBuiltin.1("$", infl6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(res2, dr2);
  L11(res4, infl8):
    r5 = `$`(infl8, <sym sigma>);
    goto L9(res4, r5);
  L4(res9, dx6, r7):
    r15 = `*`(dx6, r7);
    r16 = `/`(res9, r15);
    st res = r16;
    l = ld res;
    c3 = `is.object`(l);
    if c3 then L20() else L21(NA_REAL, l);
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(res2, dx2);
  L13():
    infl9 = ld infl;
    check L15() else D2();
  L14():
    r6 = dyn base(<lang `-`(1.0, `$`(infl, hat))>);
    goto L4(res6, dx3, r6);
  D2():
    deopt 5 [res6, dx3, 1.0, infl9];
  L5(dx14):
    st res = dx14;
    res16 = ld res;
    check L27() else D5();
  L15():
    infl10 = force? infl9;
    checkMissing(infl10);
    c2 = `is.object`(infl10);
    if c2 then L17() else L18(res6, dx3, 1.0, infl10);
  L20():
    dr6 = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L22() else L21(NA_REAL, dr6);
  L21(r18, l2):
    sym1 = ldf `is.infinite`;
    base1 = ldf `is.infinite` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D5():
    deopt 24 [res16];
  L6(r26, l5, r27, r28):
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l5, r27, r28);
    goto L5(r30);
  L16(res13, dx11, r11, dx12):
    r13 = `-`(r11, dx12);
    r14 = sqrt(r13);
    goto L4(res13, dx11, r14);
  L17():
    dr4 = tryDispatchBuiltin.1("$", infl10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(res6, dx3, 1.0, dr4);
  L18(res11, dx8, r9, infl12):
    r12 = `$`(infl12, <sym hat>);
    goto L16(res11, dx8, r9, r12);
  L22():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx13);
  L23():
    res14 = ld res;
    check L25() else D3();
  L24():
    r25 = dyn base1(<sym res>);
    goto L6(r18, l2, NA_REAL, r25);
  L27():
    res17 = force? res16;
    checkMissing(res17);
    popenv;
    return res17;
  D3():
    deopt 18 [r18, l2, NA_REAL, res14];
  L19():
    dx10 = getTryDispatchBuiltinValue(dr4);
    goto L16(res6, dx3, 1.0, dx10);
  L25():
    res15 = force? res14;
    checkMissing(res15);
    is_infinite = ldf `is.infinite` in base;
    r29 = dyn is_infinite(res15);
    check L26() else D4();
  D4():
    deopt 21 [r18, l2, NA_REAL, r29];
  L26():
    goto L6(r18, l2, NA_REAL, r29);
  }
}