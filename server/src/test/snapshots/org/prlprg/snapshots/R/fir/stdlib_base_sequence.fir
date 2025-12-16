fun main() {
  () -+> V { reg r:cls, reg sequence:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sequence1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sequence2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg sequence3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg c4:cls, reg r22:V, reg p4:p(V +), reg r24:V |
    mkenv;
    r = clos inner2026254161;
    st sequence = r;
    sequence = ldf sequence;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(3.0, 2.0);
      goto L0(r3);
    L2():
      r1 = dyn base(3.0, 2.0);
      goto L0(r1);
    };
    r5 = dyn sequence(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    sequence1 = ldf sequence;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1(3.0, 2.0);
      goto L0(r8);
    L2():
      r6 = dyn base1(3.0, 2.0);
      goto L0(r6);
    };
    r10 = dyn sequence1[, from](p1, 2);
    check L3() else D3();
  D3():
    deopt 12 [r10];
  L3():
    sequence2 = ldf sequence;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2(3.0, 2.0);
      goto L0(r13);
    L2():
      r11 = dyn base2(3.0, 2.0);
      goto L0(r11);
    };
    r15 = dyn sequence2[, from, by](p2, 2, 2);
    check L5() else D5();
  D5():
    deopt 20 [r15];
  L5():
    sequence3 = ldf sequence;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3(3.0, 2.0);
      goto L0(r18);
    L2():
      r16 = dyn base3(3.0, 2.0);
      goto L0(r16);
    };
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c4 = ldf c in base;
      r22 = dyn c4(-1, 1);
      goto L0(r22);
    L2():
      r20 = dyn base4(<lang `-`(1)>, 1);
      goto L0(r20);
    };
    r24 = dyn sequence3[, by](p3, p4);
    check L7() else D7();
  D7():
    deopt 26 [r24];
  L7():
    popenv;
    return r24;
  }
}
fun inner2026254161(nvec, `...`) {
  (reg nvec:*, reg ddd:dots) -+> V { var nvec:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st nvec = nvec;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("sequence");
    goto L0(r2);
  L2():
    r = dyn base("sequence");
    goto L0(r);
  }
}