fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.dummy_coef_list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg print_dummy_coef:cls, reg x4:*, reg x5:V, reg c1:L, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg strata:*, reg strata1:V, reg __:cls, reg r3:V, reg p:p(V +), reg ddd1:dots?, reg paste:cls, reg strata2:*, reg strata3:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x8:*, reg x9:V, reg invisible:cls, reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L8() else L2();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L7() else D1();
  D1():
    deopt 5 [r2];
  L2():
    x3 = `[[`(s, i2, NULL, TRUE);
    st strata = x3;
    print_dummy_coef = ldf `print.dummy_coef`;
    check L9() else D2();
  L7():
    goto L0(r2);
  L8():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D2():
    deopt 7 [i2];
  L3(r10):
    popenv;
    return r10;
  L9():
    p = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      c1 = `is.object`(x5);
      if c1 then L1() else L2(x5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x7):
      strata = ld strata;
      strata1 = force? strata;
      __ = ldf `[[` in base;
      r3 = dyn __(x7, strata1);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        strata2 = ld strata;
        strata3 = force? strata2;
        checkMissing(strata3);
        return strata3;
      };
      r6 = dyn paste("\n     Error:", p1);
      return r6;
    };
    r8 = dyn print_dummy_coef[, `...`, title](p, ddd1, p2);
    check L10() else D3();
  L11():
    x8 = ld x;
    check L13() else D4();
  L12():
    r9 = dyn base1(<sym x>);
    goto L3(r9);
  D3():
    deopt 12 [i2, r8];
  D4():
    deopt 18 [x8];
  L10():
    goto L1(i2);
  L13():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r11 = dyn invisible(x9);
    check L14() else D5();
  D5():
    deopt 21 [r11];
  L14():
    goto L3(r11);
  }
}