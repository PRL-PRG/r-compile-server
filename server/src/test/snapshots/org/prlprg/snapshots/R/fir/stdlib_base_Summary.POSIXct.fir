fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1829836194`;
    st `Summary.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1829836194`(`...`, `na.rm`, finite) {
  (reg ddd:dots, reg na_rm:*, reg finite:*) -+> V { var `...`:dots?, var `na.rm`:*, var finite:*, reg finite_isMissing:L, reg finite_orDefault:*, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg i_ddd:dots, reg i:V, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg stop:cls, reg r1:V, reg ok:*, reg ok1:V, reg r2:V, reg c10:L, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg list:cls, reg ddd1:dots?, reg r10:V, reg do_call:cls, reg _check_tzones:*, reg _check_tzones1:V, reg p2:p(V +), reg args:*, reg args1:V, reg p3:p(V +), reg r13:V, reg _POSIXct:cls, reg NextMethod:cls, reg _Generic4:*, reg _Generic5:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg tz:*, reg tz1:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg args2:*, reg args3:V, reg c11:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg oldClass:cls, reg r21:V, reg p7:p(V +), reg r23:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    finite_isMissing = missing.0(finite);
    if finite_isMissing then L0(FALSE) else L0(finite);
  L0(finite_orDefault):
    st finite = finite_orDefault;
    _Generic = ld `.Generic`;
    check L9() else D0();
  D0():
    deopt 0 [_Generic];
  L9():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c = `is.vector`(_Generic1, "any");
    if c then L10() else L11();
  L10():
    c1 = inherits(_Generic1, "factor", FALSE);
    if c1 then L12() else L13();
  L11():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L12():
    c2 = `is.character`(_Generic1);
    if c2 then L14() else L15();
  L13():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L12();
  L1():
    goto L5(TRUE);
  L2():
    goto L5(FALSE);
  L5(r1):
    st ok = r1;
    ok = ld ok;
    check L27() else D2();
  L14():
    c3 = `==`.6(_Generic1, "max");
    if c3 then L1() else L16();
  L15():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c6 = `==`.5(i, 1);
    if c6 then L3() else L19();
  D2():
    deopt 13 [ok];
  L3():
    stop = ldf stop;
    check L23() else D1();
  L4():
    goto L5(NULL);
  L16():
    c4 = `==`.6(_Generic1, "min");
    if c4 then L1() else L17();
  L19():
    c7 = `==`.5(i, 2);
    if c7 then L3() else L20();
  L27():
    ok1 = force? ok;
    checkMissing(ok1);
    r2 = `!`(ok1);
    c10 = `as.logical`(r2);
    if c10 then L28() else L6();
  D1():
    deopt 3 [];
  L6():
    goto L7();
  L7():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L17():
    c5 = `==`.6(_Generic1, "range");
    if c5 then L1() else L18();
  L20():
    c8 = `==`.5(i, 3);
    if c8 then L1() else L21();
  L23():
    dyn stop("empty alternative in numeric switch");
    goto L4();
  L28():
    stop1 = ldf stop;
    check L29() else D3();
  D3():
    deopt 17 [];
  L8(r9):
    st args = r9;
    do_call = ldf `do.call`;
    check L36() else D7();
  L18():
    goto L2();
  L21():
    c9 = `==`.5(i, 4);
    if c9 then L2() else L22();
  L29():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r4 = dyn gettextf("'%s' not defined for \"POSIXt\" objects", p);
      return r4;
    };
    r6 = dyn stop1[, domain](p1, NA_LGL);
    check L30() else D4();
  L32():
    list = ldf list;
    check L34() else D5();
  L33():
    r8 = dyn base(<sym ...>);
    goto L8(r8);
  D4():
    deopt 21 [r6];
  D5():
    deopt 26 [];
  D7():
    deopt 31 [];
  L22():
    goto L4();
  L30():
    goto L7();
  L34():
    ddd1 = ld `...`;
    r10 = dyn list[`...`](ddd1);
    check L35() else D6();
  L36():
    p2 = prom<V +>{
      _check_tzones = ld `.check_tzones`;
      _check_tzones1 = force? _check_tzones;
      checkMissing(_check_tzones1);
      return _check_tzones1;
    };
    p3 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r13 = dyn do_call(p2, p3);
    check L37() else D8();
  D6():
    deopt 28 [r10];
  D8():
    deopt 34 [r13];
  L35():
    goto L8(r10);
  L37():
    st tz = r13;
    _POSIXct = ldf `.POSIXct`;
    check L38() else D9();
  D9():
    deopt 37 [];
  L38():
    p5 = prom<V +>{
      NextMethod = ldf NextMethod;
      p4 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r15 = dyn NextMethod(p4);
      return r15;
    };
    p6 = prom<V +>{
      tz = ld tz;
      tz1 = force? tz;
      checkMissing(tz1);
      return tz1;
    };
    p7 = prom<V +>{
      sym1 = ldf oldClass;
      base1 = ldf oldClass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r19):
      return r19;
    L2():
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      c11 = `is.object`(args3);
      if c11 then L4() else L5(args3);
    L3():
      r18 = dyn base1(<lang `[[`(args, 1)>);
      goto L0(r18);
    L1(dx1):
      oldClass = ldf oldClass in base;
      r21 = dyn oldClass(dx1);
      goto L0(r21);
    L4():
      dr = tryDispatchBuiltin.1("[[", args3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(args5):
      __ = ldf `[[` in base;
      r20 = dyn __(args5, 1);
      goto L1(r20);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r23 = dyn _POSIXct[, tz, cl](p5, p6, p7);
    check L39() else D10();
  D10():
    deopt 43 [r23];
  L39():
    popenv;
    return r23;
  }
}