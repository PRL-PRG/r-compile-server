fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1466705707`;
    st `Summary.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1466705707`(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg i_ddd:dots, reg i:V, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg stop:cls, reg r1:V, reg ok:*, reg ok1:V, reg r2:V, reg c10:L, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg _Date:cls, reg NextMethod:cls, reg _Generic4:*, reg _Generic5:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg list:cls, reg ddd1:dots?, reg r15:V, reg c11:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg oldClass:cls, reg r19:V, reg p4:p(V +), reg r21:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    _Generic = ld `.Generic`;
    check L7() else D0();
  D0():
    deopt 0 [_Generic];
  L7():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c = `is.vector`(_Generic1, "any");
    if c then L8() else L9();
  L8():
    c1 = inherits(_Generic1, "factor", FALSE);
    if c1 then L10() else L11();
  L9():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L10():
    c2 = `is.character`(_Generic1);
    if c2 then L12() else L13();
  L11():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L10();
  L0():
    goto L4(TRUE);
  L1():
    goto L4(FALSE);
  L4(r1):
    st ok = r1;
    ok = ld ok;
    check L25() else D2();
  L12():
    c3 = `==`.6(_Generic1, "max");
    if c3 then L0() else L14();
  L13():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c6 = `==`.5(i, 1);
    if c6 then L2() else L17();
  D2():
    deopt 13 [ok];
  L2():
    stop = ldf stop;
    check L21() else D1();
  L3():
    goto L4(NULL);
  L14():
    c4 = `==`.6(_Generic1, "min");
    if c4 then L0() else L15();
  L17():
    c7 = `==`.5(i, 2);
    if c7 then L2() else L18();
  L25():
    ok1 = force? ok;
    checkMissing(ok1);
    r2 = `!`(ok1);
    c10 = `as.logical`(r2);
    if c10 then L26() else L5();
  D1():
    deopt 3 [];
  L5():
    goto L6();
  L6():
    _Date = ldf `.Date`;
    check L30() else D5();
  L15():
    c5 = `==`.6(_Generic1, "range");
    if c5 then L0() else L16();
  L18():
    c8 = `==`.5(i, 3);
    if c8 then L0() else L19();
  L21():
    dyn stop("empty alternative in numeric switch");
    goto L3();
  L26():
    stop1 = ldf stop;
    check L27() else D3();
  D3():
    deopt 17 [];
  D5():
    deopt 25 [];
  L16():
    goto L1();
  L19():
    c9 = `==`.5(i, 4);
    if c9 then L1() else L20();
  L27():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r4 = dyn gettextf("%s not defined for \"Date\" objects", p);
      return r4;
    };
    r6 = dyn stop1[, domain](p1, NA_LGL);
    check L28() else D4();
  L30():
    p3 = prom<V +>{
      NextMethod = ldf NextMethod;
      p2 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r9 = dyn NextMethod(p2);
      return r9;
    };
    p4 = prom<V +>{
      sym = ldf oldClass;
      base = ldf oldClass in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r12):
      return r12;
    L3():
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r11 = dyn base(<lang `[[`(list(...), 1)>);
      goto L0(r11);
    L1(r14):
      c11 = `is.object`(r14);
      if c11 then L7() else L8(r14);
    L5():
      list = ldf list;
      ddd1 = ld `...`;
      r15 = dyn list[`...`](ddd1);
      goto L1(r15);
    L6():
      r13 = dyn base1(<sym ...>);
      goto L1(r13);
    L2(dx1):
      oldClass = ldf oldClass in base;
      r19 = dyn oldClass(dx1);
      goto L0(r19);
    L7():
      dr = tryDispatchBuiltin.1("[[", r14);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(r17):
      __ = ldf `[[` in base;
      r18 = dyn __(r17, 1);
      goto L2(r18);
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    };
    r21 = dyn _Date(p3, p4);
    check L31() else D6();
  D4():
    deopt 21 [r6];
  D6():
    deopt 28 [r21];
  L20():
    goto L3();
  L28():
    goto L6();
  L31():
    popenv;
    return r21;
  }
}