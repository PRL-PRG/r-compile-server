fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1466705707`;
    st `Summary.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1466705707`(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg r:cls, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg i_ddd:dots, reg i:V, reg c7:L, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg stop:cls, reg r2:V, reg ok:*, reg ok1:V, reg r3:V, reg c12:L, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg list:cls, reg ddd1:dots?, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg x:*, reg x1:V, reg length:cls, reg r14:V, reg Nargs:*, reg Nargs1:V, reg r15:V, reg c13:L, reg _difftime:cls, reg do_call:cls, reg _Generic4:*, reg _Generic5:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg r19:V, reg sapply:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg attr:*, reg attr1:V, reg p5:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg units:*, reg units1:V, reg units2:*, reg units3:V, reg c14:L, reg units6:V, reg units7:V, reg dr:V, reg dc:L, reg dx:V, reg units9:V, reg dx1:V, reg __:cls, reg r25:V, reg r26:V, reg all:cls, reg r27:V, reg c15:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg lapply:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg as_vector:*, reg as_vector1:V, reg p7:p(V +), reg r32:V, reg na_rm1:*, reg na_rm2:V, reg c16:cls, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg lapply1:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg coerceTimeUnit:*, reg coerceTimeUnit1:V, reg p9:p(V +), reg r39:V, reg na_rm3:*, reg na_rm4:V, reg c17:cls, reg r40:V, reg _difftime1:cls, reg do_call1:cls, reg _Generic6:*, reg _Generic7:V, reg p10:p(V +), reg args:*, reg args1:V, reg p11:p(V +), reg r43:V, reg p12:p(V +), reg units10:*, reg units11:V, reg c18:L, reg units13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r45:V, reg p13:p(V +), reg r47:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    r = clos inner354062069;
    st coerceTimeUnit = r;
    _Generic = ld `.Generic`;
    check L16() else D0();
  D0():
    deopt 3 [_Generic];
  L16():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c = `is.vector`(_Generic1, "any");
    if c then L17() else L18();
  L17():
    c1 = inherits(_Generic1, "factor", FALSE);
    if c1 then L19() else L20();
  L18():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L19():
    c2 = `is.character`(_Generic1);
    if c2 then L21() else L22();
  L20():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L19();
  L0():
    goto L4(TRUE);
  L1():
    goto L4(FALSE);
  L4(r2):
    st ok = r2;
    ok = ld ok;
    check L36() else D2();
  L21():
    c3 = `==`.6(_Generic1, "max");
    if c3 then L0() else L23();
  L22():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c7 = `==`.5(i, 1);
    if c7 then L2() else L27();
  D2():
    deopt 16 [ok];
  L2():
    stop = ldf stop;
    check L32() else D1();
  L3():
    goto L4(NULL);
  L23():
    c4 = `==`.6(_Generic1, "min");
    if c4 then L0() else L24();
  L27():
    c8 = `==`.5(i, 2);
    if c8 then L2() else L28();
  L36():
    ok1 = force? ok;
    checkMissing(ok1);
    r3 = `!`(ok1);
    c12 = `as.logical`(r3);
    if c12 then L37() else L5();
  D1():
    deopt 6 [];
  L5():
    goto L6();
  L6():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L24():
    c5 = `==`.6(_Generic1, "sum");
    if c5 then L0() else L25();
  L28():
    c9 = `==`.5(i, 3);
    if c9 then L2() else L29();
  L32():
    dyn stop("empty alternative in numeric switch");
    goto L3();
  L37():
    stop1 = ldf stop;
    check L38() else D3();
  D3():
    deopt 20 [];
  L7(r10):
    st x = r10;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L25():
    c6 = `==`.6(_Generic1, "range");
    if c6 then L0() else L26();
  L29():
    c10 = `==`.5(i, 4);
    if c10 then L0() else L30();
  L38():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r5 = dyn gettextf("'%s' not defined for \"difftime\" objects", p);
      return r5;
    };
    r7 = dyn stop1[, domain](p1, NA_LGL);
    check L39() else D4();
  L41():
    list = ldf list;
    check L43() else D5();
  L42():
    r9 = dyn base(<sym ...>);
    goto L7(r9);
  D4():
    deopt 24 [r7];
  D5():
    deopt 29 [];
  L8(r13):
    st Nargs = r13;
    Nargs = ld Nargs;
    check L49() else D9();
  L26():
    goto L1();
  L30():
    c11 = `==`.5(i, 5);
    if c11 then L1() else L31();
  L39():
    goto L6();
  L43():
    ddd1 = ld `...`;
    r11 = dyn list[`...`](ddd1);
    check L44() else D6();
  L45():
    x = ld x;
    check L47() else D7();
  L46():
    r12 = dyn base1(<sym x>);
    goto L8(r12);
  D6():
    deopt 31 [r11];
  D7():
    deopt 35 [x];
  D9():
    deopt 40 [Nargs];
  L31():
    goto L3();
  L44():
    goto L7(r11);
  L47():
    x1 = force? x;
    checkMissing(x1);
    length = ldf length in base;
    r14 = dyn length(x1);
    check L48() else D8();
  L49():
    Nargs1 = force? Nargs;
    checkMissing(Nargs1);
    r15 = `==`(Nargs1, 0.0);
    c13 = `as.logical`(r15);
    if c13 then L50() else L9();
  D8():
    deopt 38 [r14];
  L9():
    sapply = ldf sapply;
    check L54() else D12();
  L48():
    goto L8(r14);
  L50():
    _difftime = ldf `.difftime`;
    check L51() else D10();
  D10():
    deopt 45 [];
  D12():
    deopt 50 [];
  L51():
    p3 = prom<V +>{
      do_call = ldf `do.call`;
      p2 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r17 = dyn do_call(p2);
      return r17;
    };
    r19 = dyn _difftime(p3, "secs");
    check L52() else D11();
  L54():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p5 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r22 = dyn sapply(p4, p5, "units");
    check L55() else D13();
  D11():
    deopt 48 [r19];
  D13():
    deopt 54 [r22];
  L52():
    popenv;
    return r19;
  L55():
    st units = r22;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L10(r24):
    c15 = `as.logical`(r24);
    if c15 then L64() else L12();
  L56():
    units = ld units;
    check L58() else D14();
  L57():
    r23 = dyn base2(<lang `==`(units, `[`(units, 1))>);
    goto L10(r23);
  D14():
    deopt 58 [units];
  L12():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L14():
    _difftime1 = ldf `.difftime`;
    check L78() else D25();
  L58():
    units1 = force? units;
    checkMissing(units1);
    units2 = ld units;
    check L59() else D15();
  L64():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L65() else L66();
  D15():
    deopt 59 [units1, units2];
  D25():
    deopt 97 [];
  L13(r29):
    st args = r29;
    goto L14();
  L15(r36):
    st args = r36;
    st units = "secs";
    goto L14();
  L59():
    units3 = force? units2;
    checkMissing(units3);
    c14 = `is.object`(units3);
    if c14 then L60() else L61(units1, units3);
  L65():
    lapply = ldf lapply;
    check L67() else D17();
  L66():
    r28 = dyn base3[, `na.rm`](<lang lapply(x, as.vector)>, <sym na.rm>);
    goto L13(r28);
  L72():
    lapply1 = ldf lapply;
    check L74() else D21();
  L73():
    r35 = dyn base4[, `na.rm`](<lang lapply(x, coerceTimeUnit)>, <sym na.rm>);
    goto L15(r35);
  L78():
    p12 = prom<V +>{
      do_call1 = ldf `do.call`;
      p10 = prom<V +>{
        _Generic6 = ld `.Generic`;
        _Generic7 = force? _Generic6;
        checkMissing(_Generic7);
        return _Generic7;
      };
      p11 = prom<V +>{
        args = ld args;
        args1 = force? args;
        checkMissing(args1);
        return args1;
      };
      r43 = dyn do_call1(p10, p11);
      return r43;
    };
    p13 = prom<V +>{
      units10 = ld units;
      units11 = force? units10;
      checkMissing(units11);
      c18 = `is.object`(units11);
      if c18 then L1() else L2(units11);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", units11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(units13):
      __1 = ldf `[[` in base;
      r45 = dyn __1(units13, 1);
      goto L0(r45);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r47 = dyn _difftime1(p12, p13);
    check L79() else D26();
  D17():
    deopt 70 [];
  D21():
    deopt 83 [];
  D26():
    deopt 100 [r47];
  L11(units9, dx1):
    r26 = `==`(units9, dx1);
    all = ldf all in base;
    r27 = dyn all(r26);
    check L63() else D16();
  L60():
    dr = tryDispatchBuiltin.1("[", units3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L62() else L61(units1, dr);
  L61(units6, units7):
    __ = ldf `[` in base;
    r25 = dyn __(units7, 1);
    goto L11(units6, r25);
  L67():
    p6 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p7 = prom<V +>{
      as_vector = ld `as.vector`;
      as_vector1 = force? as_vector;
      checkMissing(as_vector1);
      return as_vector1;
    };
    r32 = dyn lapply(p6, p7);
    check L68() else D18();
  L74():
    p8 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p9 = prom<V +>{
      coerceTimeUnit = ld coerceTimeUnit;
      coerceTimeUnit1 = force? coerceTimeUnit;
      checkMissing(coerceTimeUnit1);
      return coerceTimeUnit1;
    };
    r39 = dyn lapply1(p8, p9);
    check L75() else D22();
  L79():
    popenv;
    return r47;
  D16():
    deopt 66 [r27];
  D18():
    deopt 73 [r32];
  D22():
    deopt 86 [r39];
  L62():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(units1, dx);
  L63():
    goto L10(r27);
  L68():
    na_rm1 = ld `na.rm`;
    check L69() else D19();
  L75():
    na_rm3 = ld `na.rm`;
    check L76() else D23();
  D19():
    deopt 74 [na_rm1];
  D23():
    deopt 87 [na_rm3];
  L69():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c16 = ldf c in base;
    r33 = dyn c16(r32, na_rm2);
    check L70() else D20();
  L76():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    c17 = ldf c in base;
    r40 = dyn c17(r39, na_rm4);
    check L77() else D24();
  D20():
    deopt 78 [r33];
  D24():
    deopt 91 [r40];
  L70():
    goto L13(r33);
  L77():
    goto L15(r40);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg as_vector:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg i_ddd:dots, reg i:V, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg r3:V, reg x7:*, reg x8:V, reg r4:V, reg x9:*, reg x10:V, reg r5:V, reg x11:*, reg x12:V, reg r6:V, reg p:p(V +), reg r8:V |
    mkenv;
    st x = x;
    as_vector = ldf `as.vector`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L7() else L8();
    L0(r1):
      c = `is.vector`(r1, "any");
      if c then L9() else L10();
    L7():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "units");
      goto L0(r2);
    L8():
      r = dyn base(<sym x>, "units");
      goto L0(r);
    L9():
      c1 = inherits(r1, "factor", FALSE);
      if c1 then L11() else L12();
    L10():
      stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
      unreachable;
    L11():
      c2 = `is.character`(r1);
      if c2 then L13() else L14();
    L12():
      warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
      goto L11();
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    L2():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      r3 = `*`(60.0, x6);
      return r3;
    L3():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      r4 = `*`(3600.0, x8);
      return r4;
    L4():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      r5 = `*`(86400.0, x10);
      return r5;
    L5():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      r6 = `*`(604800.0, x12);
      return r6;
    L6():
      invisible.0();
      return NULL;
    L13():
      c3 = `==`.6(r1, "secs");
      if c3 then L1() else L15();
    L14():
      i_ddd = dots[r1];
      i = `as.integer`(i_ddd);
      c8 = `==`.5(i, 1);
      if c8 then L1() else L20();
    L15():
      c4 = `==`.6(r1, "mins");
      if c4 then L2() else L16();
    L20():
      c9 = `==`.5(i, 2);
      if c9 then L2() else L21();
    L16():
      c5 = `==`.6(r1, "hours");
      if c5 then L3() else L17();
    L21():
      c10 = `==`.5(i, 3);
      if c10 then L3() else L22();
    L17():
      c6 = `==`.6(r1, "days");
      if c6 then L4() else L18();
    L22():
      c11 = `==`.5(i, 4);
      if c11 then L4() else L23();
    L18():
      c7 = `==`.6(r1, "weeks");
      if c7 then L5() else L19();
    L23():
      c12 = `==`.5(i, 5);
      if c12 then L5() else L24();
    L19():
      goto L6();
    L24():
      goto L6();
    };
    r8 = dyn as_vector(p);
    check L1() else D1();
  D1():
    deopt 3 [r8];
  L1():
    popenv;
    return r8;
  }
}