fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1624193668;
    st `within.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1624193668(data, expr, `...`) {
  (reg data:*, reg expr:*, reg ddd:dots) -+> V { var data:*, var expr:*, var `...`:dots?, reg parent_frame:cls, reg r:V, reg evalq:cls, reg environment:cls, reg r1:V, reg p:p(V +), reg data1:*, reg data2:V, reg p1:p(V +), reg parent:*, reg parent1:V, reg p2:p(V +), reg r5:V, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg p3:p(V +), reg e:*, reg e1:V, reg p4:p(V +), reg r11:V, reg as_list:cls, reg e2:*, reg e3:V, reg p5:p(V +), reg r13:V, reg l:*, reg l1:V, reg c:L, reg l3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg l4:*, reg l5:V, reg p6:p(V +), reg is_null:*, reg is_null1:V, reg p7:p(V +), reg r16:V, reg r17:V, reg __:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg l6:*, reg l7:V, reg names:cls, reg r21:V, reg setdiff:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg data3:*, reg data4:V, reg names1:cls, reg r24:V, reg p8:p(V +), reg nl:*, reg nl1:V, reg p9:p(V +), reg r27:V, reg l8:*, reg l9:V, reg l10:*, reg c1:L, reg l13:V, reg l14:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nl2:*, reg nl3:V, reg ___:cls, reg r28:V, reg l17:*, reg c2:L, reg r30:dots, reg l19:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg del:*, reg del1:V, reg ___1:cls, reg r33:V, reg data5:*, reg data6:V |
    mkenv;
    st data = data;
    st expr = expr;
    st `...` = ddd;
    parent_frame = ldf `parent.frame`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn parent_frame();
    check L5() else D1();
  D1():
    deopt 2 [r];
  L5():
    st parent = r;
    evalq = ldf evalq;
    check L6() else D2();
  D2():
    deopt 5 [];
  L6():
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
    check L7() else D3();
  D3():
    deopt 9 [r5];
  L7():
    st e = r5;
    eval = ldf eval;
    check L8() else D4();
  D4():
    deopt 12 [];
  L8():
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
    check L9() else D5();
  D5():
    deopt 15 [r11];
  L9():
    as_list = ldf `as.list`;
    check L10() else D6();
  D6():
    deopt 17 [];
  L10():
    p5 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r13 = dyn as_list[, `all.names`](p5, TRUE);
    check L11() else D7();
  D7():
    deopt 21 [r13];
  L11():
    st l = r13;
    l = ld l;
    check L12() else D8();
  D8():
    deopt 23 [l];
  L12():
    l1 = force? l;
    checkMissing(l1);
    c = `is.object`(l1);
    if c then L13() else L14(l1);
  L0(dx1):
    st l = dx1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L13():
    dr = tryDispatchBuiltin.1("[", l1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(l3):
    vapply = ldf vapply;
    check L16() else D9();
  D9():
    deopt 26 [l3];
  L1(r20):
    st nl = r20;
    setdiff = ldf setdiff;
    check L22() else D13();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L16():
    p6 = prom<V +>{
      l4 = ld l;
      l5 = force? l4;
      checkMissing(l5);
      return l5;
    };
    p7 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r16 = dyn vapply[, , , `USE.NAMES`](p6, p7, NA_LGL, FALSE);
    check L17() else D10();
  L18():
    l6 = ld l;
    check L20() else D11();
  L19():
    r19 = dyn base1(<sym l>);
    goto L1(r19);
  D10():
    deopt 32 [l3, r16];
  D11():
    deopt 38 [l6];
  D13():
    deopt 44 [];
  L17():
    r17 = `!`(r16);
    __ = ldf `[` in base;
    r18 = dyn __(l3, r17);
    goto L0(r18);
  L20():
    l7 = force? l6;
    checkMissing(l7);
    names = ldf names in base;
    r21 = dyn names(l7);
    check L21() else D12();
  L22():
    p8 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      names1 = ldf names in base;
      r24 = dyn names1(data4);
      goto L0(r24);
    L2():
      r22 = dyn base2(<sym data>);
      goto L0(r22);
    };
    p9 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    r27 = dyn setdiff(p8, p9);
    check L23() else D14();
  D12():
    deopt 41 [r21];
  D14():
    deopt 47 [r27];
  L21():
    goto L1(r21);
  L23():
    st del = r27;
    l8 = ld l;
    check L24() else D15();
  D15():
    deopt 49 [l8];
  L24():
    l9 = force? l8;
    checkMissing(l9);
    l10 = ld data;
    c1 = `is.object`(l10);
    if c1 then L25() else L26(l9, l10);
  L2(dx3):
    st data = dx3;
    l17 = ld data;
    c2 = `is.object`(l17);
    if c2 then L29() else L30(NULL, l17);
  L25():
    dr2 = tryDispatchBuiltin.0("[<-", l10, l9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(l9, dr2);
  L26(l13, l14):
    nl2 = ld nl;
    check L28() else D16();
  D16():
    deopt 52 [l13, l14, l9, nl2];
  L3(dx5):
    st data = dx5;
    data5 = ld data;
    check L33() else D18();
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L28():
    nl3 = force? nl2;
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l14, l9, nl3);
    goto L2(r28);
  L29():
    dr4 = tryDispatchBuiltin.0("[<-", l17, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(NULL, dr4);
  L30(r30, l19):
    del = ld del;
    check L32() else D17();
  D17():
    deopt 59 [r30, l19, NULL, del];
  D18():
    deopt 63 [data5];
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L32():
    del1 = force? del;
    ___1 = ldf `[<-` in base;
    r33 = dyn ___1(l19, NULL, del1);
    goto L3(r33);
  L33():
    data6 = force? data5;
    checkMissing(data6);
    popenv;
    return data6;
  }
}