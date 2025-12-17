fun main() {
  () -+> V { reg r:cls, reg nextn:cls, reg r1:V, reg table:cls, reg nextn1:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg r7:V, reg plot:cls, reg n:*, reg n1:V, reg p2:p(V +), reg nextn2:cls, reg n2:*, reg n3:V, reg p3:p(V +), reg r10:V, reg n4:*, reg n5:V, reg r11:V, reg p4:p(V +), reg p5:p(V +), reg r14:V |
    mkenv;
    r = clos inner1423764879;
    st nextn = r;
    nextn = ldf nextn;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn nextn(1001.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    table = ldf table;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      nextn1 = ldf nextn;
      p = prom<V +>{
        r2 = `:`(599.0, 630.0);
        return r2;
      };
      r4 = dyn nextn1(p);
      return r4;
    };
    r6 = dyn table(p1);
    check L3() else D3();
  D3():
    deopt 10 [r6];
  L3():
    r7 = `:`(1.0, 100.0);
    st n = r7;
    plot = ldf plot;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p2 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    p4 = prom<V +>{
      nextn2 = ldf nextn;
      p3 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        return n3;
      };
      r10 = dyn nextn2(p3);
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r11 = `-`(r10, n5);
      return r11;
    };
    p5 = prom<V +>{
      return 0.5;
    };
    r14 = dyn plot[, , type, lwd, cex](p2, p4, "o", 2.0, p5);
    check L5() else D5();
  D5():
    deopt 26 [r14];
  L5():
    popenv;
    return r14;
  }
}
fun inner1423764879(n, factors) {
  (reg n:*, reg factors:*) -+> V { var n:*, var factors:*, reg factors_isMissing:L, reg factors_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg C_nextn:*, reg C_nextn1:V, reg n1:*, reg n2:V, reg factors1:*, reg factors2:V, reg vargs:dots, reg r6:V |
    mkenv;
    st n = n;
    factors_isMissing = missing.0(factors);
    if factors_isMissing then L0() else L1(factors);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(2.0, 3.0, 5.0);
      goto L0(r2);
    L2():
      r = dyn base(2.0, 3.0, 5.0);
      goto L0(r);
    };
    goto L1(p);
  L1(factors_orDefault):
    st factors = factors_orDefault;
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L2(r5):
    popenv;
    return r5;
  L3():
    C_nextn = ld C_nextn;
    check L5() else D0();
  L4():
    r4 = dyn base1(<sym C_nextn>, <sym n>, <sym factors>);
    goto L2(r4);
  D0():
    deopt 1 [C_nextn];
  L5():
    C_nextn1 = force? C_nextn;
    checkMissing(C_nextn1);
    n1 = ld n;
    check L6() else D1();
  D1():
    deopt 2 [C_nextn1, n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    factors1 = ld factors;
    check L7() else D2();
  D2():
    deopt 3 [C_nextn1, n2, factors1];
  L7():
    factors2 = force? factors1;
    checkMissing(factors2);
    vargs = dots[n2, factors2];
    r6 = `.Call`(C_nextn1, vargs, <missing>);
    goto L2(r6);
  }
}