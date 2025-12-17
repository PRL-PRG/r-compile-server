fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3924448841;
    st `sort_by.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg inherits:cls, reg r2:V, reg c:L, reg _formula2varlist:cls, reg y3:*, reg y4:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg y5:*, reg y6:V, reg is_list:cls, reg r9:V, reg r10:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg y7:*, reg y8:V, reg list:cls, reg r13:V, reg do_call:cls, reg order:*, reg order1:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg unname:cls, reg y9:*, reg y10:V, reg p3:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg list1:cls, reg ddd1:dots?, reg r22:V, reg c2:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg x3:*, reg x4:V, reg c3:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg o:*, reg o1:V, reg __:cls, reg r26:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L1();
  L8():
    y1 = ld y;
    check L10() else D0();
  L9():
    r = dyn base(<sym y>, "formula");
    goto L0(r);
  D0():
    deopt 2 [y1];
  L1():
    goto L2();
  L2():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L10():
    y2 = force? y1;
    checkMissing(y2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(y2, "formula", FALSE);
    check L11() else D1();
  L12():
    _formula2varlist = ldf `.formula2varlist`;
    check L13() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  L3(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L20() else L4();
  L11():
    goto L0(r2);
  L13():
    p = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn _formula2varlist(p, p1);
    check L14() else D3();
  L16():
    y5 = ld y;
    check L18() else D4();
  L17():
    r7 = dyn base1(<sym y>);
    goto L3(r7);
  D3():
    deopt 12 [r5];
  D4():
    deopt 18 [y5];
  L4():
    goto L6();
  L6():
    do_call = ldf `do.call`;
    check L26() else D8();
  L14():
    st y = r5;
    goto L2();
  L18():
    y6 = force? y5;
    checkMissing(y6);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(y6);
    check L19() else D5();
  L20():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D5():
    deopt 21 [r9];
  D8():
    deopt 33 [];
  L5(r12):
    st y = r12;
    goto L6();
  L19():
    goto L3(r9);
  L21():
    y7 = ld y;
    check L23() else D6();
  L22():
    r11 = dyn base2(<sym y>);
    goto L5(r11);
  L26():
    p2 = prom<V +>{
      order = ld order;
      order1 = force? order;
      checkMissing(order1);
      return order1;
    };
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r17):
      return r17;
    L2():
      unname = ldf unname;
      p3 = prom<V +>{
        y9 = ld y;
        y10 = force? y9;
        checkMissing(y10);
        return y10;
      };
      r19 = dyn unname(p3);
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r16 = dyn base3(<lang unname(y)>, <lang list(...)>);
      goto L0(r16);
    L1(r21):
      c2 = ldf c in base;
      r23 = dyn c2(r19, r21);
      goto L0(r23);
    L4():
      list1 = ldf list;
      ddd1 = ld `...`;
      r22 = dyn list1[`...`](ddd1);
      goto L1(r22);
    L5():
      r20 = dyn base4(<sym ...>);
      goto L1(r20);
    };
    r25 = dyn do_call(p2, p4);
    check L27() else D9();
  D6():
    deopt 25 [y7];
  D9():
    deopt 36 [r25];
  L23():
    y8 = force? y7;
    checkMissing(y8);
    list = ldf list in base;
    r13 = dyn list(y8);
    check L24() else D7();
  L27():
    st o = r25;
    x3 = ld x;
    check L28() else D10();
  D7():
    deopt 28 [r13];
  D10():
    deopt 38 [x3];
  L24():
    goto L5(r13);
  L28():
    x4 = force? x3;
    checkMissing(x4);
    c3 = `is.object`(x4);
    if c3 then L29() else L30(x4);
  L7(dx1):
    popenv;
    return dx1;
  L29():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(x6):
    o = ld o;
    check L32() else D11();
  D11():
    deopt 40 [x6, o];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L32():
    o1 = force? o;
    __ = ldf `[` in base;
    r26 = dyn __(x4, o1, <missing>, FALSE);
    goto L7(r26);
  }
}