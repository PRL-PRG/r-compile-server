fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2245717122;
    st `influence.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2245717122(model, `do.coef`, `...`) {
  (reg model:*, reg do_coef:*, reg ddd:dots) -+> V { var model:*, var `do.coef`:*, reg do_coef_isMissing:L, reg do_coef_orDefault:*, var `...`:dots?, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg do_coef1:*, reg do_coef2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg na_omit:cls, reg residuals:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg c:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg model5:*, reg model6:V, reg c1:L, reg r10:V, reg model8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r12:V, reg dx3:V, reg r13:V, reg r14:V, reg __:cls, reg r15:V, reg naresid:cls, reg model9:*, reg model10:V, reg c2:L, reg model12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg p4:p(V +), reg pRes:*, reg pRes1:V, reg p5:p(V +), reg r19:V, reg l:*, reg names:cls, reg r20:V, reg c3:L, reg r23:S, reg l2:*, reg r24:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r26:S, reg l4:*, reg dx7:V, reg sym:cls, reg base:cls, reg guard:L, reg r33:V, reg r34:S, reg l7:*, reg r35:V, reg r36:S, reg r37:V, reg res:*, reg res1:V, reg names1:cls, reg r38:V, reg r39:V, reg ___:cls, reg r40:V, reg names__:cls, reg r41:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r42:V, reg r43:V, reg res2:*, reg res3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r44:V, reg r45:V, reg pRes2:*, reg pRes3:V, reg list:cls, reg r46:V, reg c4:cls, reg r47:V |
    mkenv;
    st model = model;
    do_coef_isMissing = missing.0(do_coef);
    if do_coef_isMissing then L0(TRUE) else L0(do_coef);
  L0(do_coef_orDefault):
    st `do.coef` = do_coef_orDefault;
    st `...` = ddd;
    lm_influence = ldf `lm.influence`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      model1 = ld model;
      model2 = force? model1;
      checkMissing(model2);
      return model2;
    };
    p1 = prom<V +>{
      do_coef1 = ld `do.coef`;
      do_coef2 = force? do_coef1;
      checkMissing(do_coef2);
      return do_coef2;
    };
    ddd1 = ld `...`;
    r2 = dyn lm_influence[, `do.coef`, `...`](p, p1, ddd1);
    check L7() else D1();
  D1():
    deopt 6 [r2];
  L7():
    st res = r2;
    na_omit = ldf `na.omit`;
    check L8() else D2();
  D2():
    deopt 9 [];
  L8():
    p3 = prom<V +>{
      residuals = ldf residuals;
      p2 = prom<V +>{
        model3 = ld model;
        model4 = force? model3;
        checkMissing(model4);
        return model4;
      };
      r4 = dyn residuals[, type](p2, "pearson");
      return r4;
    };
    r6 = dyn na_omit(p3);
    check L9() else D3();
  D3():
    deopt 11 [r6];
  L9():
    c = `is.object`(r6);
    if c then L10() else L11(r6);
  L1(dx1):
    st pRes = dx1;
    naresid = ldf naresid;
    check L18() else D5();
  L10():
    dr = tryDispatchBuiltin.1("[", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r8):
    model5 = ld model;
    check L13() else D4();
  D4():
    deopt 12 [r8, model5];
  D5():
    deopt 20 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    model6 = force? model5;
    checkMissing(model6);
    c1 = `is.object`(model6);
    if c1 then L15() else L16(r8, model6);
  L18():
    p4 = prom<V +>{
      model9 = ld model;
      model10 = force? model9;
      checkMissing(model10);
      c2 = `is.object`(model10);
      if c2 then L1() else L2(model10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", model10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(model12):
      r16 = `$`(model12, <sym na.action>);
      goto L0(r16);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      pRes = ld pRes;
      pRes1 = force? pRes;
      checkMissing(pRes1);
      return pRes1;
    };
    r19 = dyn naresid(p4, p5);
    check L19() else D6();
  D6():
    deopt 23 [r19];
  L14(r12, dx3):
    r14 = `!=`(dx3, 0.0);
    __ = ldf `[` in base;
    r15 = dyn __(r12, r14);
    goto L1(r15);
  L15():
    dr2 = tryDispatchBuiltin.1("$", model6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(r8, dr2);
  L16(r10, model8):
    r13 = `$`(model8, <sym prior.weights>);
    goto L14(r10, r13);
  L19():
    st pRes = r19;
    l = ld res;
    names = ldf names;
    check L20() else D7();
  D7():
    deopt 28 ["dev.res", l, "dev.res"];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(r8, dx2);
  L20():
    r20 = dyn names("dev.res", NULL);
    check L21() else D8();
  D8():
    deopt 30 ["dev.res", l, "dev.res", r20];
  L21():
    c3 = `is.object`(r20);
    if c3 then L22() else L23("dev.res", l, r20);
  L2(r26, l4, dx7):
    names__ = ldf `names<-`;
    check L29() else D11();
  L22():
    dr6 = tryDispatchBuiltin.0("[<-", r20, "dev.res");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L24() else L23("dev.res", l, dr6);
  L23(r23, l2, r24):
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  D11():
    deopt 41 [r26, l4, dx7];
  L3(r34, l7, r35, r36, r37):
    r39 = `==`(r37, "wt.res");
    ___ = ldf `[<-` in base;
    r40 = dyn ___(r35, r36, r39);
    goto L2(r34, l7, r40);
  L24():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L2("dev.res", l, dx6);
  L25():
    res = ld res;
    check L27() else D9();
  L26():
    r33 = dyn base(<sym res>);
    goto L3(r23, l2, r24, "dev.res", r33);
  L29():
    r41 = dyn names__(l4, NULL, dx7);
    check L30() else D12();
  D9():
    deopt 34 [r23, l2, r24, "dev.res", res];
  D12():
    deopt 43 [r26, r41];
  L27():
    res1 = force? res;
    checkMissing(res1);
    names1 = ldf names in base;
    r38 = dyn names1(res1);
    check L28() else D10();
  L30():
    st res = r41;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  D10():
    deopt 37 [r23, l2, r24, "dev.res", r38];
  L4(r43):
    popenv;
    return r43;
  L28():
    goto L3(r23, l2, r24, "dev.res", r38);
  L31():
    res2 = ld res;
    check L33() else D13();
  L32():
    r42 = dyn base1(<sym res>, <lang list(pear.res=pRes)>);
    goto L4(r42);
  D13():
    deopt 47 [res2];
  L33():
    res3 = force? res2;
    checkMissing(res3);
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L5(r45):
    c4 = ldf c in base;
    r47 = dyn c4(res3, r45);
    check L38() else D16();
  L34():
    pRes2 = ld pRes;
    check L36() else D14();
  L35():
    r44 = dyn base2[`pear.res`](<sym pRes>);
    goto L5(r44);
  D14():
    deopt 51 [pRes2];
  D16():
    deopt 57 [r47];
  L36():
    pRes3 = force? pRes2;
    checkMissing(pRes3);
    list = ldf list in base;
    r46 = dyn list(pRes3);
    check L37() else D15();
  L38():
    goto L4(r47);
  D15():
    deopt 55 [r46];
  L37():
    goto L5(r46);
  }
}