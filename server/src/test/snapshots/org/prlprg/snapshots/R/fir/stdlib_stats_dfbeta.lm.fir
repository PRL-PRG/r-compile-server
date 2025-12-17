fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2774340926;
    st `dfbeta.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2774340926(model, infl, `...`) {
  (reg model:*, reg infl:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `...`:dots?, reg infl1:*, reg infl2:V, reg c:L, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg infl5:*, reg infl6:V, reg c1:L, reg infl8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg is_matrix:cls, reg r7:V, reg mlm:*, reg mlm1:V, reg r8:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg wr:*, reg wr1:V, reg names:cls, reg r13:V, reg variable_names:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r15:V, reg list:cls, reg r16:V, reg l:*, reg dimnames__:cls, reg r17:V, reg b:*, reg b1:V |
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
      r1 = dyn lm_influence[, `do.coef`](p, TRUE);
      return r1;
    };
    goto L1(p1);
  L1(infl_orDefault):
    st infl = infl_orDefault;
    st `...` = ddd;
    infl1 = ld infl;
    check L7() else D0();
  D0():
    deopt 0 [infl1];
  L7():
    infl2 = force? infl1;
    checkMissing(infl2);
    c = `is.object`(infl2);
    if c then L9() else L10(infl2);
  L8(dx1):
    st b = dx1;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L9():
    dr = tryDispatchBuiltin.1("$", infl2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(infl4):
    r3 = `$`(infl4, <sym coefficients>);
    goto L8(r3);
  L2(r5):
    st mlm = r5;
    mlm = ld mlm;
    check L20() else D3();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    infl5 = ld infl;
    check L14() else D1();
  L13():
    r4 = dyn base(<lang `<-`(wr, `$`(infl, wt.res))>);
    goto L2(r4);
  D1():
    deopt 6 [infl5];
  D3():
    deopt 13 [mlm];
  L14():
    infl6 = force? infl5;
    checkMissing(infl6);
    c1 = `is.object`(infl6);
    if c1 then L16() else L17(infl6);
  L20():
    mlm1 = force? mlm;
    checkMissing(mlm1);
    r8 = `!`(mlm1);
    c2 = `as.logical`(r8);
    if c2 then L21() else L3();
  L3():
    goto L6();
  L6():
    b = ld b;
    check L34() else D11();
  L15(dx3):
    st wr = dx3;
    is_matrix = ldf `is.matrix` in base;
    r7 = dyn is_matrix(dx3);
    check L19() else D2();
  L16():
    dr2 = tryDispatchBuiltin.1("$", infl6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(infl8):
    r6 = `$`(infl8, <sym wt.res>);
    goto L15(r6);
  L21():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D2():
    deopt 11 [r7];
  D11():
    deopt 37 [b];
  L4(r10):
    l = ld b;
    dimnames__ = ldf `dimnames<-`;
    check L31() else D9();
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L19():
    goto L2(r7);
  L22():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L23():
    r9 = dyn base1(<lang names(wr)>, <lang variable.names(model)>);
    goto L4(r9);
  L34():
    b1 = force? b;
    checkMissing(b1);
    popenv;
    return b1;
  D9():
    deopt 31 [r10, l, r10];
  L5(r12):
    variable_names = ldf `variable.names`;
    check L28() else D6();
  L24():
    wr = ld wr;
    check L26() else D4();
  L25():
    r11 = dyn base2(<sym wr>);
    goto L5(r11);
  L31():
    r17 = dyn dimnames__(l, NULL, r10);
    check L32() else D10();
  D4():
    deopt 20 [wr];
  D6():
    deopt 25 [];
  D10():
    deopt 33 [r10, r17];
  L26():
    wr1 = force? wr;
    checkMissing(wr1);
    names = ldf names in base;
    r13 = dyn names(wr1);
    check L27() else D5();
  L28():
    p2 = prom<V +>{
      model3 = ld model;
      model4 = force? model3;
      checkMissing(model4);
      return model4;
    };
    r15 = dyn variable_names(p2);
    check L29() else D7();
  L32():
    st b = r17;
    goto L6();
  D5():
    deopt 23 [r13];
  D7():
    deopt 27 [r15];
  L27():
    goto L5(r13);
  L29():
    list = ldf list in base;
    r16 = dyn list(r12, r15);
    check L30() else D8();
  D8():
    deopt 29 [r16];
  L30():
    goto L4(r16);
  }
}