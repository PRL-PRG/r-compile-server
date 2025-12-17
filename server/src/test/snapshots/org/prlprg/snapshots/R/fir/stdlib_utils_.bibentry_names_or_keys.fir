fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.bibentry_names_or_keys` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg names:cls, reg r4:V, reg c:V, reg c1:L, reg _bibentry_get_key:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r6:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L2();
  L4():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang `<-`(y, names(x))>);
    goto L0(r);
  L1(r3):
    st y = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    goto L3();
  L3():
    y = ld y;
    check L14() else D4();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L10():
    _bibentry_get_key = ldf `.bibentry_get_key`;
    check L11() else D2();
  D0():
    deopt 3 [x1];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [y];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r4 = dyn names(x2);
    check L9() else D1();
  L11():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r6 = dyn _bibentry_get_key(p);
    check L12() else D3();
  L14():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D1():
    deopt 6 [r4];
  D3():
    deopt 12 [r6];
  L9():
    goto L1(r4);
  L12():
    st y = r6;
    goto L3();
  }
}