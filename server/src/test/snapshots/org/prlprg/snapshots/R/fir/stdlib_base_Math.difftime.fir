fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `Math.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg i_ddd:dots, reg i:V, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg stop:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg attr:cls, reg r3:V, reg _difftime:cls, reg NextMethod:cls, reg r4:V, reg p:p(V +), reg units:*, reg units1:V, reg p1:p(V +), reg r7:V, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _Generic = ld `.Generic`;
    check L5() else D0();
  D0():
    deopt 0 [_Generic];
  L5():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c = `is.vector`(_Generic1, "any");
    if c then L6() else L7();
  L6():
    c1 = inherits(_Generic1, "factor", FALSE);
    if c1 then L8() else L9();
  L7():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L8():
    c2 = `is.character`(_Generic1);
    if c2 then L10() else L11();
  L9():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L8();
  L0():
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L1():
    stop1 = ldf stop;
    check L38() else D7();
  L10():
    c3 = `==`.6(_Generic1, "abs");
    if c3 then L0() else L12();
  L11():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c10 = `==`.5(i, 1);
    if c10 then L2() else L19();
  D7():
    deopt 23 [];
  L2():
    stop = ldf stop;
    check L27() else D1();
  L4(r2):
    st units = r2;
    _difftime = ldf `.difftime`;
    check L35() else D5();
  L12():
    c4 = `==`.6(_Generic1, "sign");
    if c4 then L0() else L13();
  L19():
    c11 = `==`.5(i, 2);
    if c11 then L2() else L20();
  L31():
    x1 = ld x;
    check L33() else D3();
  L32():
    r1 = dyn base(<sym x>, "units");
    goto L4(r1);
  L38():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r9 = dyn gettextf("'%s' not defined for \"difftime\" objects", p2);
      return r9;
    };
    r11 = dyn stop1[, domain](p3, NA_LGL);
    check L39() else D8();
  D1():
    deopt 3 [];
  D3():
    deopt 11 [x1];
  D5():
    deopt 18 [];
  D8():
    deopt 27 [r11];
  L13():
    c5 = `==`.6(_Generic1, "floor");
    if c5 then L0() else L14();
  L20():
    c12 = `==`.5(i, 3);
    if c12 then L2() else L21();
  L27():
    r = dyn stop("empty alternative in numeric switch");
    check L28() else D2();
  L33():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r3 = dyn attr(x2, "units");
    check L34() else D4();
  L35():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r4 = dyn NextMethod();
      return r4;
    };
    p1 = prom<V +>{
      units = ld units;
      units1 = force? units;
      checkMissing(units1);
      return units1;
    };
    r7 = dyn _difftime(p, p1);
    check L36() else D6();
  L39():
    popenv;
    return r11;
  D2():
    deopt 5 [r];
  D4():
    deopt 15 [r3];
  D6():
    deopt 21 [r7];
  L14():
    c6 = `==`.6(_Generic1, "ceiling");
    if c6 then L0() else L15();
  L21():
    c13 = `==`.5(i, 4);
    if c13 then L2() else L22();
  L28():
    popenv;
    return r;
  L34():
    goto L4(r3);
  L36():
    popenv;
    return r7;
  L15():
    c7 = `==`.6(_Generic1, "trunc");
    if c7 then L0() else L16();
  L22():
    c14 = `==`.5(i, 5);
    if c14 then L2() else L23();
  L16():
    c8 = `==`.6(_Generic1, "round");
    if c8 then L0() else L17();
  L23():
    c15 = `==`.5(i, 6);
    if c15 then L2() else L24();
  L17():
    c9 = `==`.6(_Generic1, "signif");
    if c9 then L0() else L18();
  L24():
    c16 = `==`.5(i, 7);
    if c16 then L0() else L25();
  L18():
    goto L1();
  L25():
    c17 = `==`.5(i, 8);
    if c17 then L1() else L26();
  L26():
    invisible.0();
    popenv;
    return NULL;
  }
}