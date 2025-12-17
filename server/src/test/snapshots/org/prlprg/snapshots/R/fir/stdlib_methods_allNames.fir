fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st allNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg value:*, reg value1:V, reg c:V, reg c1:L, reg character:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg length:cls, reg r7:V, reg p:p(V +), reg r9:V, reg value2:*, reg value3:V |
    mkenv;
    st x = x;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st value = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L10() else L2();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L6() else D1();
  L7():
    value = ld value;
    check L9() else D2();
  L8():
    r3 = dyn base1(<sym value>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [value];
  L2():
    value2 = ld value;
    check L14() else D5();
  L6():
    goto L0(r2);
  L9():
    value1 = force? value;
    checkMissing(value1);
    c = `==`(value1, NULL);
    goto L1(c);
  L10():
    character = ldf character;
    check L11() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 15 [value2];
  L11():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      length = ldf length in base;
      r7 = dyn length(x4);
      goto L0(r7);
    L2():
      r5 = dyn base2(<sym x>);
      goto L0(r5);
    };
    r9 = dyn character(p);
    check L12() else D4();
  L14():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D4():
    deopt 14 [r9];
  L12():
    popenv;
    return r9;
  }
}