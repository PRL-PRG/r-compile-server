fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner389459126;
    st `predict.StructTS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner389459126(object, `n.ahead`, `se.fit`, `...`) {
  (reg object:*, reg n_ahead:*, reg se_fit:*, reg ddd:dots) -+> V { var object:*, var `n.ahead`:*, reg n_ahead_isMissing:L, reg n_ahead_orDefault:*, var `se.fit`:*, reg se_fit_isMissing:L, reg se_fit_orDefault:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg KalmanForecast:cls, reg n_ahead1:*, reg n_ahead2:V, reg p:p(V +), reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg r4:V, reg ts:cls, reg z:*, reg z1:V, reg c2:L, reg z3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r5:V, reg p2:p(V +), reg xtsp:*, reg xtsp1:V, reg c3:L, reg xtsp3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r7:V, reg xtsp4:*, reg xtsp5:V, reg c4:L, reg dx9:V, reg r9:R, reg xtsp7:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r11:R, reg dx13:V, reg __2:cls, reg r12:V, reg r13:V, reg r14:V, reg p3:p(V +), reg xtsp8:*, reg xtsp9:V, reg c5:L, reg xtsp11:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg se_fit1:*, reg se_fit2:V, reg c6:L, reg ts1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r19:V, reg r20:V, reg z4:*, reg z5:V, reg c7:L, reg z7:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r21:V, reg r22:V, reg p5:p(V +), reg xtsp12:*, reg xtsp13:V, reg c8:L, reg xtsp15:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __5:cls, reg r24:V, reg xtsp16:*, reg xtsp17:V, reg c9:L, reg dx21:V, reg r26:R, reg xtsp19:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg r28:R, reg dx25:V, reg __6:cls, reg r29:V, reg r30:V, reg r31:V, reg p6:p(V +), reg xtsp20:*, reg xtsp21:V, reg c10:L, reg xtsp23:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg __7:cls, reg r33:V, reg p7:p(V +), reg r35:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg pred:*, reg pred1:V, reg se:*, reg se1:V, reg list:cls, reg r38:V, reg pred2:*, reg pred3:V |
    mkenv;
    st object = object;
    n_ahead_isMissing = missing.0(n_ahead);
    if n_ahead_isMissing then L0(1) else L0(n_ahead);
  L0(n_ahead_orDefault):
    st `n.ahead` = n_ahead_orDefault;
    se_fit_isMissing = missing.0(se_fit);
    if se_fit_isMissing then L1(TRUE) else L1(se_fit);
  L1(se_fit_orDefault):
    st `se.fit` = se_fit_orDefault;
    st `...` = ddd;
    object1 = ld object;
    check L4() else D0();
  D0():
    deopt 0 [object1];
  L4():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L6() else L7(object2);
  L5(dx1):
    st xtsp = dx1;
    KalmanForecast = ldf KalmanForecast;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(object4):
    r = `$`(object4, <sym xtsp>);
    goto L5(r);
  D1():
    deopt 5 [];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    p = prom<V +>{
      n_ahead1 = ld `n.ahead`;
      n_ahead2 = force? n_ahead1;
      checkMissing(n_ahead2);
      return n_ahead2;
    };
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c1 = `is.object`(object6);
      if c1 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r2 = `$`(object8, <sym model>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r4 = dyn KalmanForecast(p, p1);
    check L10() else D2();
  D2():
    deopt 8 [r4];
  L10():
    st z = r4;
    ts = ldf ts;
    check L11() else D3();
  D3():
    deopt 11 [];
  L11():
    p2 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c2 = `is.object`(z1);
      if c2 then L1() else L2(z1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", z1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(z3):
      __ = ldf `[[` in base;
      r5 = dyn __(z3, 1);
      goto L0(r5);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      xtsp = ld xtsp;
      xtsp1 = force? xtsp;
      checkMissing(xtsp1);
      c3 = `is.object`(xtsp1);
      if c3 then L2() else L3(xtsp1);
    L0(dx7):
      xtsp4 = ld xtsp;
      xtsp5 = force? xtsp4;
      checkMissing(xtsp5);
      c4 = `is.object`(xtsp5);
      if c4 then L5() else L6(dx7, 1.0, xtsp5);
    L2():
      dr6 = tryDispatchBuiltin.1("[", xtsp1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(xtsp3):
      __1 = ldf `[` in base;
      r7 = dyn __1(xtsp3, 2);
      goto L0(r7);
    L1(dx12, r11, dx13):
      r13 = `/`(r11, dx13);
      r14 = `+`(dx12, r13);
      return r14;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", xtsp5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dx7, 1.0, dr8);
    L6(dx9, r9, xtsp7):
      __2 = ldf `[` in base;
      r12 = dyn __2(xtsp7, 3);
      goto L1(dx9, r9, r12);
    L7():
      dx11 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx7, 1.0, dx11);
    };
    p4 = prom<V +>{
      xtsp8 = ld xtsp;
      xtsp9 = force? xtsp8;
      checkMissing(xtsp9);
      c5 = `is.object`(xtsp9);
      if c5 then L1() else L2(xtsp9);
    L0(dx15):
      return dx15;
    L1():
      dr10 = tryDispatchBuiltin.1("[", xtsp9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(xtsp11):
      __3 = ldf `[` in base;
      r16 = dyn __3(xtsp11, 3);
      goto L0(r16);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    };
    r18 = dyn ts[, start, frequency](p2, p3, p4);
    check L12() else D4();
  D4():
    deopt 17 [r18];
  L12():
    st pred = r18;
    se_fit1 = ld `se.fit`;
    check L13() else D5();
  D5():
    deopt 19 [se_fit1];
  L13():
    se_fit2 = force? se_fit1;
    checkMissing(se_fit2);
    c6 = `as.logical`(se_fit2);
    if c6 then L14() else L2();
  L2():
    pred2 = ld pred;
    check L23() else D11();
  L14():
    ts1 = ldf ts;
    check L15() else D6();
  D6():
    deopt 22 [];
  D11():
    deopt 40 [pred2];
  L15():
    p5 = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r20):
      return r20;
    L2():
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c7 = `is.object`(z5);
      if c7 then L4() else L5(z5);
    L3():
      r19 = dyn base(<lang `[[`(z, 2)>);
      goto L0(r19);
    L1(dx17):
      r22 = sqrt(dx17);
      goto L0(r22);
    L4():
      dr12 = tryDispatchBuiltin.1("[[", z5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L6() else L5(dr12);
    L5(z7):
      __4 = ldf `[[` in base;
      r21 = dyn __4(z7, 2);
      goto L1(r21);
    L6():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx16);
    };
    p6 = prom<V +>{
      xtsp12 = ld xtsp;
      xtsp13 = force? xtsp12;
      checkMissing(xtsp13);
      c8 = `is.object`(xtsp13);
      if c8 then L2() else L3(xtsp13);
    L0(dx19):
      xtsp16 = ld xtsp;
      xtsp17 = force? xtsp16;
      checkMissing(xtsp17);
      c9 = `is.object`(xtsp17);
      if c9 then L5() else L6(dx19, 1.0, xtsp17);
    L2():
      dr14 = tryDispatchBuiltin.1("[", xtsp13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(xtsp15):
      __5 = ldf `[` in base;
      r24 = dyn __5(xtsp15, 2);
      goto L0(r24);
    L1(dx24, r28, dx25):
      r30 = `/`(r28, dx25);
      r31 = `+`(dx24, r30);
      return r31;
    L4():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    L5():
      dr16 = tryDispatchBuiltin.1("[", xtsp17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(dx19, 1.0, dr16);
    L6(dx21, r26, xtsp19):
      __6 = ldf `[` in base;
      r29 = dyn __6(xtsp19, 3);
      goto L1(dx21, r26, r29);
    L7():
      dx23 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx19, 1.0, dx23);
    };
    p7 = prom<V +>{
      xtsp20 = ld xtsp;
      xtsp21 = force? xtsp20;
      checkMissing(xtsp21);
      c10 = `is.object`(xtsp21);
      if c10 then L1() else L2(xtsp21);
    L0(dx27):
      return dx27;
    L1():
      dr18 = tryDispatchBuiltin.1("[", xtsp21);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(xtsp23):
      __7 = ldf `[` in base;
      r33 = dyn __7(xtsp23, 3);
      goto L0(r33);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx26);
    };
    r35 = dyn ts1[, start, frequency](p5, p6, p7);
    check L16() else D7();
  L23():
    pred3 = force? pred2;
    checkMissing(pred3);
    popenv;
    return pred3;
  D7():
    deopt 28 [r35];
  L16():
    st se = r35;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(r37):
    popenv;
    return r37;
  L17():
    pred = ld pred;
    check L19() else D8();
  L18():
    r36 = dyn base1[pred, se](<sym pred>, <sym se>);
    goto L3(r36);
  D8():
    deopt 32 [pred];
  L19():
    pred1 = force? pred;
    checkMissing(pred1);
    se = ld se;
    check L20() else D9();
  D9():
    deopt 35 [se];
  L20():
    se1 = force? se;
    checkMissing(se1);
    list = ldf list in base;
    r38 = dyn list(pred1, se1);
    check L21() else D10();
  D10():
    deopt 39 [r38];
  L21():
    goto L3(r38);
  }
}