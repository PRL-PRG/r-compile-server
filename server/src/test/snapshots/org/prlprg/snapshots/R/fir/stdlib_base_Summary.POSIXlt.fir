fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1829836194`;
    st `Summary.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1829836194`(`...`, `na.rm`, finite) {
  (reg ddd:dots, reg na_rm:*, reg finite:*) -+> V { var `...`:dots?, var `na.rm`:*, var finite:*, reg finite_isMissing:L, reg finite_orDefault:*, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg i_ddd:dots, reg i:V, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg stop:cls, reg r1:V, reg ok:*, reg ok1:V, reg r2:V, reg c10:L, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg list:cls, reg ddd1:dots?, reg r10:V, reg do_call:cls, reg _check_tzones:*, reg _check_tzones1:V, reg p2:p(V +), reg args:*, reg args1:V, reg p3:p(V +), reg r13:V, reg lapply:cls, reg args2:*, reg args3:V, reg p4:p(V +), reg as_POSIXct:*, reg as_POSIXct1:V, reg p5:p(V +), reg r16:V, reg _Generic4:*, reg _Generic5:V, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg i_ddd1:dots, reg i1:V, reg c17:L, reg c18:L, reg c19:L, reg stop2:cls, reg r18:V, reg do_call1:cls, reg _Generic6:*, reg _Generic7:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg args4:*, reg args5:V, reg na_rm1:*, reg na_rm2:V, reg c20:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg do_call2:cls, reg range:*, reg range1:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg args6:*, reg args7:V, reg na_rm3:*, reg na_rm4:V, reg finite1:*, reg finite2:V, reg c21:cls, reg r28:V, reg p9:p(V +), reg r30:V, reg as_POSIXlt:cls, reg _POSIXct:cls, reg val:*, reg val1:V, reg p10:p(V +), reg tz:*, reg tz1:V, reg p11:p(V +), reg r33:V, reg p12:p(V +), reg r35:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    finite_isMissing = missing.0(finite);
    if finite_isMissing then L0(FALSE) else L0(finite);
  L0(finite_orDefault):
    st finite = finite_orDefault;
    _Generic = ld `.Generic`;
    check L14() else D0();
  D0():
    deopt 0 [_Generic];
  L14():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c = `is.vector`(_Generic1, "any");
    if c then L15() else L16();
  L15():
    c1 = inherits(_Generic1, "factor", FALSE);
    if c1 then L17() else L18();
  L16():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L17():
    c2 = `is.character`(_Generic1);
    if c2 then L19() else L20();
  L18():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L17();
  L1():
    goto L5(TRUE);
  L2():
    goto L5(FALSE);
  L5(r1):
    st ok = r1;
    ok = ld ok;
    check L32() else D2();
  L19():
    c3 = `==`.6(_Generic1, "max");
    if c3 then L1() else L21();
  L20():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c6 = `==`.5(i, 1);
    if c6 then L3() else L24();
  D2():
    deopt 13 [ok];
  L3():
    stop = ldf stop;
    check L28() else D1();
  L4():
    goto L5(NULL);
  L21():
    c4 = `==`.6(_Generic1, "min");
    if c4 then L1() else L22();
  L24():
    c7 = `==`.5(i, 2);
    if c7 then L3() else L25();
  L32():
    ok1 = force? ok;
    checkMissing(ok1);
    r2 = `!`(ok1);
    c10 = `as.logical`(r2);
    if c10 then L33() else L6();
  D1():
    deopt 3 [];
  L6():
    goto L7();
  L7():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L22():
    c5 = `==`.6(_Generic1, "range");
    if c5 then L1() else L23();
  L25():
    c8 = `==`.5(i, 3);
    if c8 then L1() else L26();
  L28():
    dyn stop("empty alternative in numeric switch");
    goto L4();
  L33():
    stop1 = ldf stop;
    check L34() else D3();
  D3():
    deopt 17 [];
  L8(r9):
    st args = r9;
    do_call = ldf `do.call`;
    check L41() else D7();
  L23():
    goto L2();
  L26():
    c9 = `==`.5(i, 4);
    if c9 then L2() else L27();
  L34():
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
    check L35() else D4();
  L37():
    list = ldf list;
    check L39() else D5();
  L38():
    r8 = dyn base(<sym ...>);
    goto L8(r8);
  D4():
    deopt 21 [r6];
  D5():
    deopt 26 [];
  D7():
    deopt 31 [];
  L27():
    goto L4();
  L35():
    goto L7();
  L39():
    ddd1 = ld `...`;
    r10 = dyn list[`...`](ddd1);
    check L40() else D6();
  L41():
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
    check L42() else D8();
  D6():
    deopt 28 [r10];
  D8():
    deopt 34 [r13];
  L40():
    goto L8(r10);
  L42():
    st tz = r13;
    lapply = ldf lapply;
    check L43() else D9();
  D9():
    deopt 37 [];
  L43():
    p4 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p5 = prom<V +>{
      as_POSIXct = ld `as.POSIXct`;
      as_POSIXct1 = force? as_POSIXct;
      checkMissing(as_POSIXct1);
      return as_POSIXct1;
    };
    r16 = dyn lapply(p4, p5);
    check L44() else D10();
  D10():
    deopt 40 [r16];
  L44():
    st args = r16;
    _Generic4 = ld `.Generic`;
    check L45() else D11();
  D11():
    deopt 42 [_Generic4];
  L45():
    _Generic5 = force? _Generic4;
    checkMissing(_Generic5);
    c11 = `is.vector`(_Generic5, "any");
    if c11 then L46() else L47();
  L46():
    c12 = inherits(_Generic5, "factor", FALSE);
    if c12 then L48() else L49();
  L47():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L48():
    c13 = `is.character`(_Generic5);
    if c13 then L50() else L51();
  L49():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L48();
  L9():
    do_call1 = ldf `do.call`;
    check L60() else D13();
  L10():
    do_call2 = ldf `do.call`;
    check L63() else D15();
  L11():
    goto L13(NULL);
  L13(r18):
    st val = r18;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L66() else D17();
  L50():
    c14 = `==`.6(_Generic5, "max");
    if c14 then L9() else L52();
  L51():
    i_ddd1 = dots[_Generic5];
    i1 = `as.integer`(i_ddd1);
    c17 = `==`.5(i1, 1);
    if c17 then L12() else L55();
  D13():
    deopt 50 [];
  D15():
    deopt 55 [];
  D17():
    deopt 62 [];
  L12():
    stop2 = ldf stop;
    check L58() else D12();
  L52():
    c15 = `==`.6(_Generic5, "min");
    if c15 then L9() else L53();
  L55():
    c18 = `==`.5(i1, 2);
    if c18 then L9() else L56();
  L60():
    p6 = prom<V +>{
      _Generic6 = ld `.Generic`;
      _Generic7 = force? _Generic6;
      checkMissing(_Generic7);
      return _Generic7;
    };
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      c20 = ldf c in base;
      r22 = dyn c20(args5, na_rm2);
      goto L0(r22);
    L2():
      r20 = dyn base1[, `na.rm`](<sym args>, <sym na.rm>);
      goto L0(r20);
    };
    r24 = dyn do_call1(p6, p7);
    check L61() else D14();
  L63():
    p8 = prom<V +>{
      range = ld range;
      range1 = force? range;
      checkMissing(range1);
      return range1;
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      args6 = ld args;
      args7 = force? args6;
      checkMissing(args7);
      na_rm3 = ld `na.rm`;
      na_rm4 = force? na_rm3;
      checkMissing(na_rm4);
      finite1 = ld finite;
      finite2 = force? finite1;
      checkMissing(finite2);
      c21 = ldf c in base;
      r28 = dyn c21(args7, na_rm4, finite2);
      goto L0(r28);
    L2():
      r26 = dyn base2[, `na.rm`, finite](<sym args>, <sym na.rm>, <sym finite>);
      goto L0(r26);
    };
    r30 = dyn do_call2(p8, p9);
    check L64() else D16();
  L66():
    p12 = prom<V +>{
      _POSIXct = ldf `.POSIXct`;
      p10 = prom<V +>{
        val = ld val;
        val1 = force? val;
        checkMissing(val1);
        return val1;
      };
      p11 = prom<V +>{
        tz = ld tz;
        tz1 = force? tz;
        checkMissing(tz1);
        return tz1;
      };
      r33 = dyn _POSIXct(p10, p11);
      return r33;
    };
    r35 = dyn as_POSIXlt(p12);
    check L67() else D18();
  D12():
    deopt 45 [];
  D14():
    deopt 53 [r24];
  D16():
    deopt 58 [r30];
  D18():
    deopt 64 [r35];
  L53():
    c16 = `==`.6(_Generic5, "range");
    if c16 then L10() else L54();
  L56():
    c19 = `==`.5(i1, 3);
    if c19 then L10() else L57();
  L58():
    dyn stop2("empty alternative in numeric switch");
    goto L11();
  L61():
    goto L13(r24);
  L64():
    goto L13(r30);
  L67():
    popenv;
    return r35;
  L54():
    goto L11();
  L57():
    goto L11();
  }
}