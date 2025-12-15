fun main() {
  () -+> V { reg r:cls, reg fibonacci:cls, reg r1:V |
    mkenv;
    r = clos inner2119503979;
    st fibonacci = r;
    fibonacci = ldf fibonacci;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn fibonacci(7.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2119503979(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg n3:*, reg n4:V, reg fibonacci:cls, reg n5:*, reg n6:V, reg r3:V, reg p:p(V +), reg r5:V, reg fibonacci1:cls, reg n7:*, reg n8:V, reg r6:V, reg p1:p(V +), reg r8:V, reg r9:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L2() else D0();
  D0():
    deopt 0 [n1];
  L2():
    n2 = force? n1;
    checkMissing(n2);
    r = `<=`(n2, 1.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    fibonacci = ldf fibonacci;
    check L7() else D2();
  L3():
    n3 = ld n;
    check L4() else D1();
  D1():
    deopt 4 [n3];
  D2():
    deopt 10 [];
  L4():
    n4 = force? n3;
    checkMissing(n4);
    popenv;
    return n4;
  L7():
    p = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r3 = `-`(n6, 1.0);
      return r3;
    };
    r5 = dyn fibonacci(p);
    check L8() else D3();
  D3():
    deopt 12 [r5];
  L8():
    fibonacci1 = ldf fibonacci;
    check L9() else D4();
  D4():
    deopt 13 [r5];
  L9():
    p1 = prom<V +>{
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      r6 = `-`(n8, 2.0);
      return r6;
    };
    r8 = dyn fibonacci1(p1);
    check L10() else D5();
  D5():
    deopt 15 [r5, r8];
  L10():
    r9 = `+`(r5, r8);
    popenv;
    return r9;
  }
}