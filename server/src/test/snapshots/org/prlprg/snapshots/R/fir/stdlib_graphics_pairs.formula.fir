fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3808599156;
    st `pairs.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3808599156(formula, data, `...`, subset, `na.action`) {
  (reg formula:*, reg data:*, reg ddd:dots, reg subset:*, reg na_action:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg __:cls, reg r:V, reg p:p(V +), reg match_call:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg eval:cls, reg m:*, reg m1:V, reg c:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p1:p(V +), reg parent_frame:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg is_matrix:cls, reg r10:V, reg c1:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p3:p(V +), reg r12:V, reg l:*, reg c2:L, reg r14:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r16:V, reg dx3:V, reg r17:V, reg l3:*, reg ___:cls, reg ddd1:dots?, reg r19:V, reg na_action1:*, reg na_action2:V, reg l4:*, reg c3:L, reg na_action4:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg quote:cls, reg r23:V, reg l7:*, reg c4:L, reg r25:V, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r28:V, reg eval1:cls, reg m4:*, reg m5:V, reg p4:p(V +), reg parent_frame1:cls, reg r30:V, reg p5:p(V +), reg r32:V, reg pairs:cls, reg mf:*, reg mf1:V, reg p6:p(V +), reg ddd2:dots?, reg r34:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L1() else L2(na_action);
  L1():
    p = prom<V +>{
      __ = ldf `::`;
      r = dyn __("stats", "na.pass");
      return r;
    };
    goto L2(p);
  L2(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    match_call = ldf `match.call`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r2 = dyn match_call[`expand.dots`](FALSE);
    check L9() else D1();
  D1():
    deopt 4 [r2];
  L9():
    st m = r2;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L3(r4):
    c1 = `as.logical`(r4);
    if c1 then L15() else L4();
  L10():
    eval = ldf eval;
    check L12() else D2();
  L11():
    r3 = dyn base(<lang eval(`$`(m, data), parent.frame())>);
    goto L3(r3);
  D2():
    deopt 9 [];
  L4():
    goto L5();
  L5():
    l3 = ld m;
    ___ = ldf `$<-`;
    check L23() else D7();
  L12():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c = `is.object`(m1);
      if c then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r5 = `$`(m3, <sym data>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r7 = dyn parent_frame();
      return r7;
    };
    r9 = dyn eval(p1, p2);
    check L13() else D3();
  L15():
    as_data_frame = ldf `as.data.frame`;
    check L16() else D5();
  D3():
    deopt 12 [r9];
  D5():
    deopt 16 [];
  D7():
    deopt 27 [NULL, l3, NULL];
  L13():
    is_matrix = ldf `is.matrix` in base;
    r10 = dyn is_matrix(r9);
    check L14() else D4();
  L16():
    p3 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r12 = dyn as_data_frame(p3);
    check L17() else D6();
  L23():
    ddd1 = ld `...`;
    r19 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL);
    check L24() else D8();
  D4():
    deopt 14 [r10];
  D6():
    deopt 18 [r12];
  D8():
    deopt 30 [NULL, r19];
  L14():
    goto L3(r10);
  L17():
    l = ld m;
    c2 = `is.object`(l);
    if c2 then L19() else L20(r12, l);
  L24():
    st m = r19;
    na_action1 = ld `na.action`;
    check L25() else D9();
  D9():
    deopt 32 [na_action1];
  L18(r16, dx3):
    st m = dx3;
    goto L5();
  L19():
    dr2 = tryDispatchBuiltin.0("$<-", l, r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(r12, dr2);
  L20(r14, l2):
    r17 = `$<-`(l2, <sym data>, r12);
    goto L18(r14, r17);
  L25():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    l4 = ld m;
    c3 = `is.object`(l4);
    if c3 then L27() else L28(na_action2, l4);
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(r12, dx2);
  L26(dx5):
    st m = dx5;
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L27():
    dr4 = tryDispatchBuiltin.0("$<-", l4, na_action2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(na_action2, dr4);
  L28(na_action4, l6):
    r20 = `$<-`(l6, <sym na.action>, na_action2);
    goto L26(r20);
  L6(r22):
    l7 = ld m;
    c4 = `is.object`(l7);
    if c4 then L32() else L33(r22, l7);
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx4);
  L30():
    quote = ldf quote in base;
    r23 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L6(r23);
  L31():
    r21 = dyn base1(<lang `::`(stats, model.frame)>);
    goto L6(r21);
  L7(dx7):
    st m = dx7;
    eval1 = ldf eval;
    check L35() else D10();
  L32():
    dr6 = tryDispatchBuiltin.0("[[<-", l7, r22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(r22, dr6);
  L33(r25, l9):
    ____ = ldf `[[<-` in base;
    r28 = dyn ____(l9, r22, 1);
    goto L7(r28);
  D10():
    deopt 46 [];
  L34():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx6);
  L35():
    p4 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p5 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r30 = dyn parent_frame1();
      return r30;
    };
    r32 = dyn eval1(p4, p5);
    check L36() else D11();
  D11():
    deopt 49 [r32];
  L36():
    st mf = r32;
    pairs = ldf pairs;
    check L37() else D12();
  D12():
    deopt 52 [];
  L37():
    p6 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    ddd2 = ld `...`;
    r34 = dyn pairs[, `...`](p6, ddd2);
    check L38() else D13();
  D13():
    deopt 55 [r34];
  L38():
    popenv;
    return r34;
  }
}