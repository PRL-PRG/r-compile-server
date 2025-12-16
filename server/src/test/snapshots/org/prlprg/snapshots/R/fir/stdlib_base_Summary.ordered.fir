fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1466705707`;
    st `Summary.ordered` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1466705707`(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg _Generic:*, reg _Generic1:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg i_ddd:dots, reg i:V, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg stop:cls, reg r1:V, reg ok:*, reg ok1:V, reg r2:V, reg c10:L, reg stop1:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg list:cls, reg ddd1:dots?, reg r10:V, reg lapply:cls, reg args:*, reg args1:V, reg p2:p(V +), reg levels:*, reg levels1:V, reg p3:p(V +), reg r13:V, reg levl:*, reg levl1:V, reg c11:L, reg levl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg vapply:cls, reg args2:*, reg args3:V, reg p4:p(V +), reg is_ordered:*, reg is_ordered1:V, reg p5:p(V +), reg r19:V, reg all:cls, reg r20:V, reg r21:V, reg c12:L, reg c13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg c17:L, reg r23:V, reg vapply1:cls, reg levl4:*, reg levl5:V, reg p6:p(V +), reg identical:*, reg identical1:V, reg p7:p(V +), reg levset:*, reg levset1:V, reg p8:p(V +), reg r27:V, reg all1:cls, reg r28:V, reg r29:V, reg c18:L, reg c19:V, reg c21:L, reg stop2:cls, reg gettextf1:cls, reg _Generic4:*, reg _Generic5:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg lapply1:cls, reg args4:*, reg args5:V, reg p11:p(V +), reg as_integer:*, reg as_integer1:V, reg p12:p(V +), reg r37:V, reg do_call:cls, reg _Generic6:*, reg _Generic7:V, reg p13:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg codes:*, reg codes1:V, reg na_rm1:*, reg na_rm2:V, reg c22:cls, reg r41:V, reg p14:p(V +), reg r43:V, reg ordered:cls, reg levset2:*, reg levset3:V, reg c23:L, reg levset5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r44:V, reg p15:p(V +), reg levset6:*, reg levset7:V, reg p16:p(V +), reg r47:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
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
  L0():
    goto L4(TRUE);
  L1():
    goto L4(FALSE);
  L4(r1):
    st ok = r1;
    ok = ld ok;
    check L32() else D2();
  L19():
    c3 = `==`.6(_Generic1, "max");
    if c3 then L0() else L21();
  L20():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c6 = `==`.5(i, 1);
    if c6 then L2() else L24();
  D2():
    deopt 13 [ok];
  L2():
    stop = ldf stop;
    check L28() else D1();
  L3():
    goto L4(NULL);
  L21():
    c4 = `==`.6(_Generic1, "min");
    if c4 then L0() else L22();
  L24():
    c7 = `==`.5(i, 2);
    if c7 then L2() else L25();
  L32():
    ok1 = force? ok;
    checkMissing(ok1);
    r2 = `!`(ok1);
    c10 = `as.logical`(r2);
    if c10 then L33() else L5();
  D1():
    deopt 3 [];
  L5():
    goto L6();
  L6():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L22():
    c5 = `==`.6(_Generic1, "range");
    if c5 then L0() else L23();
  L25():
    c8 = `==`.5(i, 3);
    if c8 then L0() else L26();
  L28():
    dyn stop("empty alternative in numeric switch");
    goto L3();
  L33():
    stop1 = ldf stop;
    check L34() else D3();
  D3():
    deopt 17 [];
  L7(r9):
    st args = r9;
    lapply = ldf lapply;
    check L41() else D7();
  L23():
    goto L1();
  L26():
    c9 = `==`.5(i, 4);
    if c9 then L1() else L27();
  L34():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r4 = dyn gettextf("'%s' not defined for ordered factors", p);
      return r4;
    };
    r6 = dyn stop1[, domain](p1, NA_LGL);
    check L35() else D4();
  L37():
    list = ldf list;
    check L39() else D5();
  L38():
    r8 = dyn base(<sym ...>);
    goto L7(r8);
  D4():
    deopt 21 [r6];
  D5():
    deopt 26 [];
  D7():
    deopt 31 [];
  L27():
    goto L3();
  L35():
    goto L6();
  L39():
    ddd1 = ld `...`;
    r10 = dyn list[`...`](ddd1);
    check L40() else D6();
  L41():
    p2 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p3 = prom<V +>{
      levels = ld levels;
      levels1 = force? levels;
      checkMissing(levels1);
      return levels1;
    };
    r13 = dyn lapply(p2, p3);
    check L42() else D8();
  D6():
    deopt 28 [r10];
  D8():
    deopt 34 [r13];
  L40():
    goto L7(r10);
  L42():
    st levl = r13;
    levl = ld levl;
    check L43() else D9();
  D9():
    deopt 36 [levl];
  L43():
    levl1 = force? levl;
    checkMissing(levl1);
    c11 = `is.object`(levl1);
    if c11 then L44() else L45(levl1);
  L8(dx1):
    st levset = dx1;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L44():
    dr = tryDispatchBuiltin.1("[[", levl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(levl3):
    __ = ldf `[[` in base;
    r14 = dyn __(levl3, 1.0);
    goto L8(r14);
  L9(r16):
    r21 = `!`(r16);
    c12 = `as.logical`(r21);
    if c12 then L10(c12) else L52();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L47():
    vapply = ldf vapply;
    check L49() else D10();
  L48():
    r15 = dyn base1(<lang vapply(args, is.ordered, NA_LGL)>);
    goto L9(r15);
  D10():
    deopt 45 [];
  L10(c13):
    c21 = `as.logical`(c13);
    if c21 then L59() else L12();
  L49():
    p4 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p5 = prom<V +>{
      is_ordered = ld `is.ordered`;
      is_ordered1 = force? is_ordered;
      checkMissing(is_ordered1);
      return is_ordered1;
    };
    r19 = dyn vapply(p4, p5, NA_LGL);
    check L50() else D11();
  L52():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L53() else L54();
  D11():
    deopt 49 [r19];
  L11(c17, r23):
    r29 = `!`(r23);
    c18 = `as.logical`(r29);
    c19 = `||`(c17, c18);
    goto L10(c19);
  L12():
    goto L13();
  L13():
    lapply1 = ldf lapply;
    check L63() else D18();
  L50():
    all = ldf all in base;
    r20 = dyn all(r19);
    check L51() else D12();
  L53():
    vapply1 = ldf vapply;
    check L55() else D13();
  L54():
    r22 = dyn base2(<lang vapply(levl, identical, NA_LGL, levset)>);
    goto L11(c12, r22);
  L59():
    stop2 = ldf stop;
    check L60() else D16();
  D12():
    deopt 51 [r20];
  D13():
    deopt 56 [c12];
  D16():
    deopt 67 [];
  D18():
    deopt 73 [];
  L51():
    goto L9(r20);
  L55():
    p6 = prom<V +>{
      levl4 = ld levl;
      levl5 = force? levl4;
      checkMissing(levl5);
      return levl5;
    };
    p7 = prom<V +>{
      identical = ld identical;
      identical1 = force? identical;
      checkMissing(identical1);
      return identical1;
    };
    p8 = prom<V +>{
      levset = ld levset;
      levset1 = force? levset;
      checkMissing(levset1);
      return levset1;
    };
    r27 = dyn vapply1(p6, p7, NA_LGL, p8);
    check L56() else D14();
  L60():
    p10 = prom<V +>{
      gettextf1 = ldf gettextf;
      p9 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r31 = dyn gettextf1("'%s' is only meaningful for ordered factors if all arguments have the same level sets", p9);
      return r31;
    };
    r33 = dyn stop2(p10);
    check L61() else D17();
  L63():
    p11 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    p12 = prom<V +>{
      as_integer = ld `as.integer`;
      as_integer1 = force? as_integer;
      checkMissing(as_integer1);
      return as_integer1;
    };
    r37 = dyn lapply1(p11, p12);
    check L64() else D19();
  D14():
    deopt 61 [c12, r27];
  D17():
    deopt 69 [r33];
  D19():
    deopt 76 [r37];
  L56():
    all1 = ldf all in base;
    r28 = dyn all1(r27);
    check L57() else D15();
  L61():
    goto L13();
  L64():
    st codes = r37;
    do_call = ldf `do.call`;
    check L65() else D20();
  D15():
    deopt 63 [c12, r28];
  D20():
    deopt 79 [];
  L57():
    goto L11(c12, r28);
  L65():
    p13 = prom<V +>{
      _Generic6 = ld `.Generic`;
      _Generic7 = force? _Generic6;
      checkMissing(_Generic7);
      return _Generic7;
    };
    p14 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      codes = ld codes;
      codes1 = force? codes;
      checkMissing(codes1);
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      c22 = ldf c in base;
      r41 = dyn c22(codes1, na_rm2);
      goto L0(r41);
    L2():
      r39 = dyn base3[, `na.rm`](<sym codes>, <sym na.rm>);
      goto L0(r39);
    };
    r43 = dyn do_call(p13, p14);
    check L66() else D21();
  D21():
    deopt 82 [r43];
  L66():
    st ind = r43;
    ordered = ldf ordered;
    check L67() else D22();
  D22():
    deopt 85 [];
  L67():
    p15 = prom<V +>{
      levset2 = ld levset;
      levset3 = force? levset2;
      checkMissing(levset3);
      c23 = `is.object`(levset3);
      if c23 then L1() else L2(levset3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", levset3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(levset5):
      ind = ld ind;
      ind1 = force? ind;
      __1 = ldf `[` in base;
      r44 = dyn __1(levset5, ind1);
      goto L0(r44);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p16 = prom<V +>{
      levset6 = ld levset;
      levset7 = force? levset6;
      checkMissing(levset7);
      return levset7;
    };
    r47 = dyn ordered[, levels](p15, p16);
    check L68() else D23();
  D23():
    deopt 89 [r47];
  L68():
    popenv;
    return r47;
  }
}