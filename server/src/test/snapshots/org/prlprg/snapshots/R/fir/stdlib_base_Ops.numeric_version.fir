fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2136888366;
    st `Ops.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2136888366(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nargs:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg _Generic2:*, reg _Generic3:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg i_ddd:dots, reg i:V, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg stop1:cls, reg r10:V, reg boolean:*, reg boolean1:V, reg r11:V, reg c17:L, reg stop2:cls, reg gettextf1:cls, reg _Generic4:*, reg _Generic5:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg is_numeric_version:cls, reg e3:*, reg e4:V, reg p4:p(V +), reg r18:V, reg r19:V, reg c18:L, reg as_numeric_version:cls, reg e5:*, reg e6:V, reg p5:p(V +), reg r21:V, reg is_numeric_version1:cls, reg e7:*, reg e8:V, reg p6:p(V +), reg r24:V, reg r25:V, reg c19:L, reg as_numeric_version1:cls, reg e9:*, reg e10:V, reg p7:p(V +), reg r27:V, reg get:cls, reg _Generic6:*, reg _Generic7:V, reg p8:p(V +), reg r30:V, reg op:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg r32:V, reg e11:*, reg e12:V, reg e13:*, reg e14:V, reg compareNumericVersion:cls, reg r33:V, reg p9:p(V +), reg r35:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L17() else L1();
  L14():
    nargs = ldf nargs in base;
    r2 = dyn nargs();
    check L16() else D0();
  L15():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1():
    goto L2();
  L2():
    _Generic2 = ld `.Generic`;
    check L21() else D3();
  L16():
    goto L0(r2);
  L17():
    stop = ldf stop;
    check L18() else D1();
  D1():
    deopt 7 [];
  D3():
    deopt 14 [_Generic2];
  L18():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic = ld `.Generic`;
        _Generic1 = force? _Generic;
        checkMissing(_Generic1);
        return _Generic1;
      };
      r5 = dyn gettextf("unary '%s' not defined for \"numeric_version\" objects", p);
      return r5;
    };
    r7 = dyn stop[, domain](p1, NA_LGL);
    check L19() else D2();
  L21():
    _Generic3 = force? _Generic2;
    checkMissing(_Generic3);
    c1 = `is.vector`(_Generic3, "any");
    if c1 then L22() else L23();
  D2():
    deopt 11 [r7];
  L19():
    goto L2();
  L22():
    c2 = inherits(_Generic3, "factor", FALSE);
    if c2 then L24() else L25();
  L23():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L24():
    c3 = `is.character`(_Generic3);
    if c3 then L26() else L27();
  L25():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L24();
  L3():
    goto L7(TRUE);
  L4():
    goto L7(FALSE);
  L7(r10):
    st boolean = r10;
    boolean = ld boolean;
    check L45() else D5();
  L26():
    c4 = `==`.6(_Generic3, "<");
    if c4 then L3() else L28();
  L27():
    i_ddd = dots[_Generic3];
    i = `as.integer`(i_ddd);
    c10 = `==`.5(i, 1);
    if c10 then L5() else L34();
  D5():
    deopt 27 [boolean];
  L5():
    stop1 = ldf stop;
    check L41() else D4();
  L6():
    goto L7(NULL);
  L28():
    c5 = `==`.6(_Generic3, ">");
    if c5 then L3() else L29();
  L34():
    c11 = `==`.5(i, 2);
    if c11 then L5() else L35();
  L45():
    boolean1 = force? boolean;
    checkMissing(boolean1);
    r11 = `!`(boolean1);
    c17 = `as.logical`(r11);
    if c17 then L46() else L8();
  D4():
    deopt 17 [];
  L8():
    goto L9();
  L9():
    is_numeric_version = ldf `is.numeric_version`;
    check L50() else D8();
  L29():
    c6 = `==`.6(_Generic3, "==");
    if c6 then L3() else L30();
  L35():
    c12 = `==`.5(i, 3);
    if c12 then L5() else L36();
  L41():
    dyn stop1("empty alternative in numeric switch");
    goto L6();
  L46():
    stop2 = ldf stop;
    check L47() else D6();
  D6():
    deopt 31 [];
  D8():
    deopt 39 [];
  L30():
    c7 = `==`.6(_Generic3, "!=");
    if c7 then L3() else L31();
  L36():
    c13 = `==`.5(i, 4);
    if c13 then L5() else L37();
  L47():
    p3 = prom<V +>{
      gettextf1 = ldf gettextf;
      p2 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r13 = dyn gettextf1("'%s' not defined for \"numeric_version\" objects", p2);
      return r13;
    };
    r15 = dyn stop2[, domain](p3, NA_LGL);
    check L48() else D7();
  L50():
    p4 = prom<V +>{
      e3 = ld e1;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r18 = dyn is_numeric_version(p4);
    check L51() else D9();
  D7():
    deopt 35 [r15];
  D9():
    deopt 41 [r18];
  L31():
    c8 = `==`.6(_Generic3, "<=");
    if c8 then L3() else L32();
  L37():
    c14 = `==`.5(i, 5);
    if c14 then L5() else L38();
  L48():
    goto L9();
  L51():
    r19 = `!`(r18);
    c18 = `as.logical`(r19);
    if c18 then L52() else L10();
  L10():
    goto L11();
  L11():
    is_numeric_version1 = ldf `is.numeric_version`;
    check L56() else D12();
  L32():
    c9 = `==`.6(_Generic3, ">=");
    if c9 then L3() else L33();
  L38():
    c15 = `==`.5(i, 6);
    if c15 then L3() else L39();
  L52():
    as_numeric_version = ldf `as.numeric_version`;
    check L53() else D10();
  D10():
    deopt 44 [];
  D12():
    deopt 51 [];
  L33():
    goto L4();
  L39():
    c16 = `==`.5(i, 7);
    if c16 then L4() else L40();
  L53():
    p5 = prom<V +>{
      e5 = ld e1;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    r21 = dyn as_numeric_version(p5);
    check L54() else D11();
  L56():
    p6 = prom<V +>{
      e7 = ld e2;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    r24 = dyn is_numeric_version1(p6);
    check L57() else D13();
  D11():
    deopt 46 [r21];
  D13():
    deopt 53 [r24];
  L40():
    goto L6();
  L54():
    st e1 = r21;
    goto L11();
  L57():
    r25 = `!`(r24);
    c19 = `as.logical`(r25);
    if c19 then L58() else L12();
  L12():
    goto L13();
  L13():
    get = ldf get;
    check L62() else D16();
  L58():
    as_numeric_version1 = ldf `as.numeric_version`;
    check L59() else D14();
  D14():
    deopt 56 [];
  D16():
    deopt 63 [];
  L59():
    p7 = prom<V +>{
      e9 = ld e2;
      e10 = force? e9;
      checkMissing(e10);
      return e10;
    };
    r27 = dyn as_numeric_version1(p7);
    check L60() else D15();
  L62():
    p8 = prom<V +>{
      _Generic6 = ld `.Generic`;
      _Generic7 = force? _Generic6;
      checkMissing(_Generic7);
      return _Generic7;
    };
    r30 = dyn get[, mode](p8, "function");
    check L63() else D17();
  D15():
    deopt 58 [r27];
  D17():
    deopt 67 [r30];
  L60():
    st e2 = r27;
    goto L13();
  L63():
    st op = r30;
    op = ldf op;
    check L64() else D18();
  D18():
    deopt 70 [];
  L64():
    p9 = prom<V +>{
      sym1 = ldf `.Internal`;
      base1 = ldf `.Internal` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      e11 = ld e1;
      e12 = force? e11;
      checkMissing(e12);
      e13 = ld e2;
      e14 = force? e13;
      checkMissing(e14);
      compareNumericVersion = ldf compareNumericVersion in base;
      r33 = dyn compareNumericVersion(e12, e14);
      goto L0(r33);
    L2():
      r31 = dyn base1(<lang compareNumericVersion(e1, e2)>);
      goto L0(r31);
    };
    r35 = dyn op(p9, 0);
    check L65() else D19();
  D19():
    deopt 73 [r35];
  L65():
    popenv;
    return r35;
  }
}