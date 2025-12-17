fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2774340926;
    st `dfbetas.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2774340926(model, infl, `...`) {
  (reg model:*, reg infl:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `...`:dots?, reg qr:cls, reg model3:*, reg model4:V, reg p2:p(V +), reg r4:V, reg chol2inv:cls, reg qrm:*, reg qrm1:V, reg c:L, reg qrm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p3:p(V +), reg qrm4:*, reg qrm5:V, reg c1:L, reg qrm7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p4:p(V +), reg r9:V, reg dfbeta:cls, reg model5:*, reg model6:V, reg p5:p(V +), reg infl1:*, reg infl2:V, reg p6:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg db:*, reg db1:V, reg dim:cls, reg r17:V, reg length:cls, reg r18:V, reg r19:V, reg c2:L, reg aperm:cls, reg db2:*, reg db3:V, reg p7:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c3:cls, reg r23:V, reg p8:p(V +), reg r25:V, reg db4:*, reg db5:V, reg outer:cls, reg infl3:*, reg infl4:V, reg c4:L, reg infl6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg diag:cls, reg xxi:*, reg xxi1:V, reg p10:p(V +), reg r32:V, reg r33:V, reg p11:p(V +), reg r35:V, reg r36:V |
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
    qr = ldf qr;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p2 = prom<V +>{
      model3 = ld model;
      model4 = force? model3;
      checkMissing(model4);
      return model4;
    };
    r4 = dyn qr(p2);
    check L7() else D1();
  D1():
    deopt 3 [r4];
  L7():
    st qrm = r4;
    chol2inv = ldf chol2inv;
    check L8() else D2();
  D2():
    deopt 6 [];
  L8():
    p3 = prom<V +>{
      qrm = ld qrm;
      qrm1 = force? qrm;
      checkMissing(qrm1);
      c = `is.object`(qrm1);
      if c then L1() else L2(qrm1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", qrm1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(qrm3):
      r5 = `$`(qrm3, <sym qr>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      qrm4 = ld qrm;
      qrm5 = force? qrm4;
      checkMissing(qrm5);
      c1 = `is.object`(qrm5);
      if c1 then L1() else L2(qrm5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", qrm5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(qrm7):
      r7 = `$`(qrm7, <sym rank>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r9 = dyn chol2inv(p3, p4);
    check L9() else D3();
  D3():
    deopt 9 [r9];
  L9():
    st xxi = r9;
    dfbeta = ldf dfbeta;
    check L10() else D4();
  D4():
    deopt 12 [];
  L10():
    p5 = prom<V +>{
      model5 = ld model;
      model6 = force? model5;
      checkMissing(model6);
      return model6;
    };
    p6 = prom<V +>{
      infl1 = ld infl;
      infl2 = force? infl1;
      checkMissing(infl2);
      return infl2;
    };
    r12 = dyn dfbeta(p5, p6);
    check L11() else D5();
  D5():
    deopt 15 [r12];
  L11():
    st db = r12;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r14):
    r19 = `==`(r14, 3);
    c2 = `as.logical`(r19);
    if c2 then L19() else L4();
  L12():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r13 = dyn base(<lang dim(db)>);
    goto L2(r13);
  L3(r16):
    length = ldf length in base;
    r18 = dyn length(r16);
    check L18() else D8();
  L4():
    goto L5();
  L5():
    db4 = ld db;
    check L23() else D11();
  L14():
    db = ld db;
    check L16() else D6();
  L15():
    r15 = dyn base1(<sym db>);
    goto L3(r15);
  L19():
    aperm = ldf aperm;
    check L20() else D9();
  D6():
    deopt 21 [db];
  D8():
    deopt 26 [r18];
  D9():
    deopt 30 [];
  D11():
    deopt 37 [db4];
  L16():
    db1 = force? db;
    checkMissing(db1);
    dim = ldf dim in base;
    r17 = dyn dim(db1);
    check L17() else D7();
  L18():
    goto L2(r18);
  L20():
    p7 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    p8 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c3 = ldf c in base;
      r23 = dyn c3(1, <int 3, 2>);
      goto L0(r23);
    L2():
      r21 = dyn base2(1, <lang `:`(3.0, 2.0)>);
      goto L0(r21);
    };
    r25 = dyn aperm(p7, p8);
    check L21() else D10();
  L23():
    db5 = force? db4;
    checkMissing(db5);
    outer = ldf outer;
    check L24() else D12();
  D7():
    deopt 24 [r17];
  D10():
    deopt 33 [r25];
  D12():
    deopt 39 [db5];
  L17():
    goto L3(r17);
  L21():
    st db = r25;
    goto L5();
  L24():
    p9 = prom<V +>{
      infl3 = ld infl;
      infl4 = force? infl3;
      checkMissing(infl4);
      c4 = `is.object`(infl4);
      if c4 then L1() else L2(infl4);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", infl4);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(infl6):
      r27 = `$`(infl6, <sym sigma>);
      goto L0(r27);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p11 = prom<V +>{
      sym3 = ldf sqrt;
      base3 = ldf sqrt in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      diag = ldf diag;
      p10 = prom<V +>{
        xxi = ld xxi;
        xxi1 = force? xxi;
        checkMissing(xxi1);
        return xxi1;
      };
      r32 = dyn diag(p10);
      r33 = sqrt(r32);
      goto L0(r33);
    L2():
      r29 = dyn base3(<lang diag(xxi)>);
      goto L0(r29);
    };
    r35 = dyn outer(p9, p11);
    check L25() else D13();
  D13():
    deopt 42 [db5, r35];
  L25():
    r36 = `/`(db5, r35);
    popenv;
    return r36;
  }
}