fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-468229730`;
    st vapply = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-468229730`(X, FUN, `FUN.VALUE`, `...`, `USE.NAMES`) {
  (reg X:*, reg FUN:*, reg FUN_VALUE:*, reg ddd:dots, reg USE_NAMES:*) -+> V { var X:*, var FUN:*, var `FUN.VALUE`:*, var `...`:dots?, var `USE.NAMES`:*, reg USE_NAMES_isMissing:L, reg USE_NAMES_orDefault:*, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg X1:*, reg X2:V, reg is_vector:cls, reg r4:V, reg r5:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg X3:*, reg X4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg as_list:cls, reg X5:*, reg X6:V, reg p1:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg _Internal:cls, reg r13:V |
    mkenv;
    st X = X;
    st FUN = FUN;
    st `FUN.VALUE` = FUN_VALUE;
    st `...` = ddd;
    USE_NAMES_isMissing = missing.0(USE_NAMES);
    if USE_NAMES_isMissing then L0(TRUE) else L0(USE_NAMES);
  L0(USE_NAMES_orDefault):
    st `USE.NAMES` = USE_NAMES_orDefault;
    match_fun = ldf `match.fun`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st FUN = r1;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L2(c) else L13();
  L9():
    X1 = ld X;
    check L11() else D2();
  L10():
    r2 = dyn base(<sym X>);
    goto L1(r2);
  D2():
    deopt 7 [X1];
  L2(c1):
    c10 = `as.logical`(c1);
    if c10 then L18() else L4();
  L11():
    X2 = force? X1;
    checkMissing(X2);
    is_vector = ldf `is.vector` in base;
    r4 = dyn is_vector(X2, "any");
    check L12() else D3();
  L13():
    sym1 = ldf `is.object`;
    base1 = ldf `is.object` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D3():
    deopt 11 [r4];
  L3(c5, r7):
    c7 = `as.logical`(r7);
    c8 = `||`(c5, c7);
    goto L2(c8);
  L4():
    goto L5();
  L5():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L12():
    goto L1(r4);
  L14():
    X3 = ld X;
    check L16() else D4();
  L15():
    r6 = dyn base1(<sym X>);
    goto L3(c, r6);
  L18():
    as_list = ldf `as.list`;
    check L19() else D5();
  D4():
    deopt 14 [c, X3];
  D5():
    deopt 19 [];
  L6(r12):
    popenv;
    return r12;
  L16():
    X4 = force? X3;
    checkMissing(X4);
    c6 = `is.object`(X4);
    goto L3(c, c6);
  L19():
    p1 = prom<V +>{
      X5 = ld X;
      X6 = force? X5;
      checkMissing(X6);
      return X6;
    };
    r9 = dyn as_list(p1);
    check L20() else D6();
  L22():
    _Internal = ldf `.Internal` in base;
    r13 = dyn _Internal(<lang vapply(X, FUN, FUN.VALUE, USE.NAMES)>);
    goto L6(r13);
  L23():
    r11 = dyn base2(<lang vapply(X, FUN, FUN.VALUE, USE.NAMES)>);
    goto L6(r11);
  D6():
    deopt 21 [r9];
  L20():
    st X = r9;
    goto L5();
  }
}