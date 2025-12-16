fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner494926210;
    st `within.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner494926210(data, expr, keepAttrs, `...`) {
  (reg data:*, reg expr:*, reg keepAttrs:*, reg ddd:dots) -+> V { var data:*, var expr:*, var keepAttrs:*, reg keepAttrs_isMissing:L, reg keepAttrs_orDefault:*, var `...`:dots?, reg parent_frame:cls, reg r:V, reg evalq:cls, reg environment:cls, reg r1:V, reg p:p(V +), reg data1:*, reg data2:V, reg p1:p(V +), reg parent:*, reg parent1:V, reg p2:p(V +), reg r5:V, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg p3:p(V +), reg e:*, reg e1:V, reg p4:p(V +), reg r11:V, reg keepAttrs1:*, reg keepAttrs2:V, reg c:L, reg as_list:cls, reg e2:*, reg e3:V, reg p5:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg l:*, reg l1:V, reg names:cls, reg r16:V, reg setdiff:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg data3:*, reg data4:V, reg names1:cls, reg r19:V, reg p6:p(V +), reg nl:*, reg nl1:V, reg p7:p(V +), reg r22:V, reg l2:*, reg l3:V, reg l4:*, reg c1:L, reg l7:V, reg l8:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nl2:*, reg nl3:V, reg ___:cls, reg r23:V, reg l11:*, reg c2:L, reg r25:dots, reg l13:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg del:*, reg del1:V, reg ___1:cls, reg r28:V, reg data5:*, reg data6:V, reg as_list1:cls, reg e4:*, reg e5:V, reg p8:p(V +), reg r30:V |
    mkenv;
    st data = data;
    st expr = expr;
    keepAttrs_isMissing = missing.0(keepAttrs);
    if keepAttrs_isMissing then L0(TRUE) else L0(keepAttrs);
  L0(keepAttrs_orDefault):
    st keepAttrs = keepAttrs_orDefault;
    st `...` = ddd;
    parent_frame = ldf `parent.frame`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn parent_frame();
    check L6() else D1();
  D1():
    deopt 2 [r];
  L6():
    st parent = r;
    evalq = ldf evalq;
    check L7() else D2();
  D2():
    deopt 5 [];
  L7():
    p = prom<V +>{
      environment = ldf environment;
      r1 = dyn environment();
      return r1;
    };
    p1 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    p2 = prom<V +>{
      parent = ld parent;
      parent1 = force? parent;
      checkMissing(parent1);
      return parent1;
    };
    r5 = dyn evalq(p, p1, p2);
    check L8() else D3();
  D3():
    deopt 9 [r5];
  L8():
    st e = r5;
    eval = ldf eval;
    check L9() else D4();
  D4():
    deopt 12 [];
  L9():
    p3 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      substitute = ldf substitute in base;
      r8 = dyn substitute(<sym expr>);
      goto L0(r8);
    L2():
      r6 = dyn base(<sym expr>);
      goto L0(r6);
    };
    p4 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r11 = dyn eval(p3, p4);
    check L10() else D5();
  D5():
    deopt 15 [r11];
  L10():
    keepAttrs1 = ld keepAttrs;
    check L11() else D6();
  D6():
    deopt 16 [keepAttrs1];
  L11():
    keepAttrs2 = force? keepAttrs1;
    checkMissing(keepAttrs2);
    c = `as.logical`(keepAttrs2);
    if c then L12() else L1();
  L1():
    as_list1 = ldf `as.list`;
    check L32() else D17();
  L12():
    as_list = ldf `as.list`;
    check L13() else D7();
  D7():
    deopt 19 [];
  D17():
    deopt 55 [];
  L13():
    p5 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r13 = dyn as_list[, `all.names`](p5, TRUE);
    check L14() else D8();
  L32():
    p8 = prom<V +>{
      e4 = ld e;
      e5 = force? e4;
      checkMissing(e5);
      return e5;
    };
    r30 = dyn as_list1[, `all.names`](p8, TRUE);
    check L33() else D18();
  D8():
    deopt 23 [r13];
  D18():
    deopt 59 [r30];
  L14():
    st l = r13;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L33():
    popenv;
    return r30;
  L2(r15):
    st nl = r15;
    setdiff = ldf setdiff;
    check L19() else D11();
  L15():
    l = ld l;
    check L17() else D9();
  L16():
    r14 = dyn base1(<sym l>);
    goto L2(r14);
  D9():
    deopt 27 [l];
  D11():
    deopt 33 [];
  L17():
    l1 = force? l;
    checkMissing(l1);
    names = ldf names in base;
    r16 = dyn names(l1);
    check L18() else D10();
  L19():
    p6 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      names1 = ldf names in base;
      r19 = dyn names1(data4);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym data>);
      goto L0(r17);
    };
    p7 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    r22 = dyn setdiff(p6, p7);
    check L20() else D12();
  D10():
    deopt 30 [r16];
  D12():
    deopt 36 [r22];
  L18():
    goto L2(r16);
  L20():
    st del = r22;
    l2 = ld l;
    check L21() else D13();
  D13():
    deopt 38 [l2];
  L21():
    l3 = force? l2;
    checkMissing(l3);
    l4 = ld data;
    c1 = `is.object`(l4);
    if c1 then L22() else L23(l3, l4);
  L3(dx1):
    st data = dx1;
    l11 = ld data;
    c2 = `is.object`(l11);
    if c2 then L26() else L27(NULL, l11);
  L22():
    dr = tryDispatchBuiltin.0("[<-", l4, l3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(l3, dr);
  L23(l7, l8):
    nl2 = ld nl;
    check L25() else D14();
  D14():
    deopt 41 [l7, l8, l3, nl2];
  L4(dx3):
    st data = dx3;
    data5 = ld data;
    check L30() else D16();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L25():
    nl3 = force? nl2;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l8, l3, nl3);
    goto L3(r23);
  L26():
    dr2 = tryDispatchBuiltin.0("[<-", l11, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(NULL, dr2);
  L27(r25, l13):
    del = ld del;
    check L29() else D15();
  D15():
    deopt 48 [r25, l13, NULL, del];
  D16():
    deopt 52 [data5];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L29():
    del1 = force? del;
    ___1 = ldf `[<-` in base;
    r28 = dyn ___1(l13, NULL, del1);
    goto L4(r28);
  L30():
    data6 = force? data5;
    checkMissing(data6);
    popenv;
    return data6;
  }
}