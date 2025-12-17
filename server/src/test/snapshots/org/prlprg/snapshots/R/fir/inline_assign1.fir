fun main() {
  () -+> V { reg l:*, reg ____:cls, reg b:*, reg b1:V, reg p:p(V +), reg r1:V, reg l1:*, reg _____:cls, reg b2:*, reg b3:V, reg p1:p(V +), reg r3:V, reg l2:*, reg _____1:cls, reg b4:*, reg b5:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st x = 1.0;
    sst y = 2.0;
    l = ld a;
    ____ = ldf `::<-`;
    check L0() else D0();
  D0():
    deopt 9 [1.0, l, 1.0];
  L0():
    p = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r1 = dyn ____(l, NULL, p, 1.0);
    check L1() else D1();
  D1():
    deopt 12 [1.0, r1];
  L1():
    st a = r1;
    l1 = ld a;
    _____ = ldf `:::<-`;
    check L2() else D2();
  D2():
    deopt 17 [3.0, l1, 3.0];
  L2():
    p1 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    r3 = dyn _____(l1, NULL, p1, 3.0);
    check L3() else D3();
  D3():
    deopt 20 [3.0, r3];
  L3():
    st a = r3;
    l2 = sld a;
    _____1 = ldf `:::<-`;
    check L4() else D4();
  D4():
    deopt 25 [3.0, l2, 3.0];
  L4():
    p2 = prom<V +>{
      b4 = ld b;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    r5 = dyn _____1(l2, NULL, p2, 3.0);
    check L5() else D5();
  D5():
    deopt 28 [3.0, r5];
  L5():
    sst a = r5;
    setInvisible.0();
    popenv;
    return 3.0;
  }
}