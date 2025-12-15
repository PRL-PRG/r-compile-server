fun main() {
  () -+> V { reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg r4:V, reg new:cls, reg r5:V, reg l:*, reg ___:cls, reg r6:V, reg str:cls, reg o:*, reg o1:V, reg p1:p(V +), reg r8:V |
    mkenv;
    setClass = ldf setClass;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list("numeric");
      goto L0(r2);
    L2():
      r = dyn base[x]("numeric");
      goto L0(r);
    };
    r4 = dyn setClass[, slots]("C", p);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    new = ldf new;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    r5 = dyn new[, x]("C", 1.0);
    check L3() else D3();
  D3():
    deopt 11 [r5];
  L3():
    st o = r5;
    l = ld o;
    ___ = ldf `@<-`;
    check L4() else D4();
  D4():
    deopt 16 [42.0, l, 42.0];
  L4():
    r6 = dyn ___(l, NULL, "x", 42.0);
    check L5() else D5();
  D5():
    deopt 19 [42.0, r6];
  L5():
    st o = r6;
    str = ldf str;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p1 = prom<V +>{
      o = ld o;
      o1 = force? o;
      checkMissing(o1);
      return o1;
    };
    r8 = dyn str(p1);
    check L7() else D7();
  D7():
    deopt 24 [r8];
  L7():
    popenv;
    return r8;
  }
}