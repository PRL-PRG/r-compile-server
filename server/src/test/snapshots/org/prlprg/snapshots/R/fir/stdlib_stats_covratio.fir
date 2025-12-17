fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3884583351;
    st covratio = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3884583351(model, infl, res) {
  (reg model:*, reg infl:*, reg res:*) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var res:*, reg res_isMissing:L, reg res_orDefault:*, reg weighted_residuals:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg nrow:cls, reg qr_lm:cls, reg model5:*, reg model6:V, reg p4:p(V +), reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg p5:p(V +), reg r12:V, reg model7:*, reg model8:V, reg c1:L, reg model10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg infl1:*, reg infl2:V, reg c2:L, reg r15:R, reg infl4:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r17:R, reg dx5:V, reg r18:V, reg r19:V, reg res1:*, reg res2:V, reg infl5:*, reg infl6:V, reg c3:L, reg res4:V, reg infl8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg res6:V, reg dx7:V, reg r20:V, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg res9:V, reg dx10:V, reg r22:V, reg omh:*, reg omh1:V, reg r23:V, reg r24:V, reg r25:V, reg l:*, reg c4:L, reg r27:R, reg l2:*, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r34:V, reg r35:R, reg l5:*, reg r36:R, reg r37:V, reg e_star:*, reg e_star1:V, reg is_infinite:cls, reg r38:V, reg ___:cls, reg r39:V, reg omh2:*, reg omh3:V, reg n:*, reg n1:V, reg p6:*, reg p7:V, reg r40:V, reg r41:V, reg e_star2:*, reg e_star3:V, reg r42:V, reg r43:V, reg n2:*, reg n3:V, reg p8:*, reg p9:V, reg r44:V, reg r45:V, reg p10:*, reg p11:V, reg r46:V, reg r47:V, reg r48:V |
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
    nrow = ldf nrow;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p5 = prom<V +>{
      qr_lm = ldf `qr.lm`;
      p4 = prom<V +>{
        model5 = ld model;
        model6 = force? model5;
        checkMissing(model6);
        return model6;
      };
      r7 = dyn qr_lm(p4);
      c = `is.object`(r7);
      if c then L1() else L2(r7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r9):
      r10 = `$`(r9, <sym qr>);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r12 = dyn nrow(p5);
    check L8() else D1();
  D1():
    deopt 3 [r12];
  L8():
    st n = r12;
    model7 = ld model;
    check L9() else D2();
  D2():
    deopt 5 [model7];
  L9():
    model8 = force? model7;
    checkMissing(model8);
    c1 = `is.object`(model8);
    if c1 then L11() else L12(model8);
  L10(dx3):
    st p = dx3;
    infl1 = ld infl;
    check L14() else D3();
  L11():
    dr2 = tryDispatchBuiltin.1("$", model8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(model10):
    r13 = `$`(model10, <sym rank>);
    goto L10(r13);
  D3():
    deopt 10 [1.0, infl1];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L14():
    infl2 = force? infl1;
    checkMissing(infl2);
    c2 = `is.object`(infl2);
    if c2 then L16() else L17(1.0, infl2);
  L15(r17, dx5):
    r19 = `-`(r17, dx5);
    st omh = r19;
    res1 = ld res;
    check L19() else D4();
  L16():
    dr4 = tryDispatchBuiltin.1("$", infl2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(1.0, dr4);
  L17(r15, infl4):
    r18 = `$`(infl4, <sym hat>);
    goto L15(r15, r18);
  D4():
    deopt 15 [res1];
  L18():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(1.0, dx4);
  L19():
    res2 = force? res1;
    checkMissing(res2);
    infl5 = ld infl;
    check L20() else D5();
  D5():
    deopt 16 [res2, infl5];
  L20():
    infl6 = force? infl5;
    checkMissing(infl6);
    c3 = `is.object`(infl6);
    if c3 then L22() else L23(res2, infl6);
  L21(res6, dx7):
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L22():
    dr6 = tryDispatchBuiltin.1("$", infl6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L24() else L23(res2, dr6);
  L23(res4, infl8):
    r20 = `$`(infl8, <sym sigma>);
    goto L21(res4, r20);
  L4(res9, dx10, r22):
    r24 = `*`(dx10, r22);
    r25 = `/`(res9, r24);
    st `e.star` = r25;
    l = ld `e.star`;
    c4 = `is.object`(l);
    if c4 then L28() else L29(NA_REAL, l);
  L24():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(res2, dx6);
  L25():
    omh = ld omh;
    check L27() else D6();
  L26():
    r21 = dyn base(<sym omh>);
    goto L4(res6, dx7, r21);
  D6():
    deopt 19 [res6, dx7, omh];
  L5(dx12):
    st `e.star` = dx12;
    omh2 = ld omh;
    check L35() else D9();
  L27():
    omh1 = force? omh;
    checkMissing(omh1);
    r23 = sqrt(omh1);
    goto L4(res6, dx7, r23);
  L28():
    dr8 = tryDispatchBuiltin.0("[<-", l, NA_REAL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L30() else L29(NA_REAL, dr8);
  L29(r27, l2):
    sym1 = ldf `is.infinite`;
    base1 = ldf `is.infinite` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  D9():
    deopt 37 [1.0, omh2];
  L6(r35, l5, r36, r37):
    ___ = ldf `[<-` in base;
    r39 = dyn ___(l5, r36, r37);
    goto L5(r39);
  L30():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx11);
  L31():
    e_star = ld `e.star`;
    check L33() else D7();
  L32():
    r34 = dyn base1(<sym e.star>);
    goto L6(r27, l2, NA_REAL, r34);
  L35():
    omh3 = force? omh2;
    checkMissing(omh3);
    n = ld n;
    check L36() else D10();
  D7():
    deopt 30 [r27, l2, NA_REAL, e_star];
  D10():
    deopt 38 [1.0, omh3, n];
  L33():
    e_star1 = force? e_star;
    checkMissing(e_star1);
    is_infinite = ldf `is.infinite` in base;
    r38 = dyn is_infinite(e_star1);
    check L34() else D8();
  L36():
    n1 = force? n;
    checkMissing(n1);
    p6 = ld p;
    check L37() else D11();
  D8():
    deopt 33 [r27, l2, NA_REAL, r38];
  D11():
    deopt 39 [1.0, omh3, n1, p6];
  L34():
    goto L6(r27, l2, NA_REAL, r38);
  L37():
    p7 = force? p6;
    checkMissing(p7);
    r40 = `-`(n1, p7);
    r41 = `-`(r40, 1.0);
    e_star2 = ld `e.star`;
    check L38() else D12();
  D12():
    deopt 43 [1.0, omh3, r41, e_star2];
  L38():
    e_star3 = force? e_star2;
    checkMissing(e_star3);
    r42 = `^`(e_star3, 2.0);
    r43 = `+`(r41, r42);
    n2 = ld n;
    check L39() else D13();
  D13():
    deopt 47 [1.0, omh3, r43, n2];
  L39():
    n3 = force? n2;
    checkMissing(n3);
    p8 = ld p;
    check L40() else D14();
  D14():
    deopt 48 [1.0, omh3, r43, n3, p8];
  L40():
    p9 = force? p8;
    checkMissing(p9);
    r44 = `-`(n3, p9);
    r45 = `/`(r43, r44);
    p10 = ld p;
    check L41() else D15();
  D15():
    deopt 51 [1.0, omh3, r45, p10];
  L41():
    p11 = force? p10;
    checkMissing(p11);
    r46 = `^`(r45, p11);
    r47 = `*`(omh3, r46);
    r48 = `/`(1.0, r47);
    popenv;
    return r48;
  }
}