fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2985125836;
    st `anyNA.numeric_version` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2985125836(x, recursive) {
  (reg x:*, reg recursive:*) -+> V { var x:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lengths:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg unclass:cls, reg r4:V, reg p:p(V +), reg r6:V, reg r7:V, reg any:cls, reg r8:V |
    mkenv;
    st x = x;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    lengths = ldf lengths;
    check L4() else D0();
  L3():
    r = dyn base(<lang `==`(lengths(unclass(x)), 0)>);
    goto L1(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r4 = dyn unclass(x2);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym x>);
      goto L0(r2);
    };
    r6 = dyn lengths(p);
    check L5() else D1();
  D1():
    deopt 5 [r6];
  L5():
    r7 = `==`(r6, 0);
    any = ldf any in base;
    r8 = dyn any(r7);
    check L6() else D2();
  D2():
    deopt 9 [r8];
  L6():
    goto L1(r8);
  }
}