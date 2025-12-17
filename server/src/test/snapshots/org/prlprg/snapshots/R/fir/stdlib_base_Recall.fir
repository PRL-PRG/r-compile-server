fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg fib:*, reg fib1:V, reg rm:cls, reg fib2:*, reg fib3:V, reg p:p(V +), reg r3:V, reg fibonacci:cls, reg r4:V |
    mkenv;
    r = clos inner1246119658;
    st Recall = r;
    r1 = clos inner4266987626;
    st fib = r1;
    fib = ld fib;
    check L0() else D0();
  D0():
    deopt 6 [fib];
  L0():
    fib1 = force? fib;
    checkMissing(fib1);
    st fibonacci = fib1;
    rm = ldf rm;
    check L1() else D1();
  D1():
    deopt 10 [];
  L1():
    p = prom<V +>{
      fib2 = ld fib;
      fib3 = force? fib2;
      checkMissing(fib3);
      return fib3;
    };
    r3 = dyn rm(p);
    check L2() else D2();
  D2():
    deopt 12 [r3];
  L2():
    fibonacci = ldf fibonacci;
    check L3() else D3();
  D3():
    deopt 14 [];
  L3():
    r4 = dyn fibonacci(10.0);
    check L4() else D4();
  D4():
    deopt 16 [r4];
  L4():
    popenv;
    return r4;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg r2:V |
    mkenv;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _Internal = ldf `.Internal` in base;
    r2 = dyn _Internal(<lang Recall(...)>);
    goto L0(r2);
  L2():
    r = dyn base(<lang Recall(...)>);
    goto L0(r);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg n3:*, reg n4:V, reg r1:V, reg c1:L, reg Recall:cls, reg n5:*, reg n6:V, reg r2:V, reg p:p(V +), reg r4:V, reg Recall1:cls, reg n7:*, reg n8:V, reg r5:V, reg p1:p(V +), reg r7:V, reg r8:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L2() else D0();
  D0():
    deopt 0 [n1];
  L2():
    n2 = force? n1;
    checkMissing(n2);
    r = `<=`(n2, 2.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    Recall = ldf Recall;
    check L8() else D2();
  L3():
    n3 = ld n;
    check L4() else D1();
  D1():
    deopt 4 [n3];
  D2():
    deopt 13 [];
  L4():
    n4 = force? n3;
    checkMissing(n4);
    r1 = `>=`(n4, 0.0);
    c1 = `as.logical`(r1);
    if c1 then L5() else L1();
  L8():
    p = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r2 = `-`(n6, 1.0);
      return r2;
    };
    r4 = dyn Recall(p);
    check L9() else D3();
  D3():
    deopt 15 [r4];
  L1():
    popenv;
    return 0.0;
  L5():
    popenv;
    return 1.0;
  L9():
    Recall1 = ldf Recall;
    check L10() else D4();
  D4():
    deopt 16 [r4];
  L10():
    p1 = prom<V +>{
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      r5 = `-`(n8, 2.0);
      return r5;
    };
    r7 = dyn Recall1(p1);
    check L11() else D5();
  D5():
    deopt 18 [r4, r7];
  L11():
    r8 = `+`(r4, r7);
    popenv;
    return r8;
  }
}