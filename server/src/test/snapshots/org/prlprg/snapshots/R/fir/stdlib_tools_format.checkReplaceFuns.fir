fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkReplaceFuns` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg _pretty_format:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg unclass:cls, reg r5:V, reg p:p(V +), reg r7:V, reg character:cls, reg r8:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    character = ldf character;
    check L10() else D4();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L5() else D1();
  L6():
    _pretty_format = ldf `.pretty_format`;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 11 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r5 = dyn unclass(x4);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym x>);
      goto L0(r3);
    };
    r7 = dyn _pretty_format(p);
    check L8() else D3();
  L10():
    r8 = dyn character();
    check L11() else D5();
  D3():
    deopt 9 [r7];
  D5():
    deopt 12 [r8];
  L8():
    popenv;
    return r7;
  L11():
    popenv;
    return r8;
  }
}