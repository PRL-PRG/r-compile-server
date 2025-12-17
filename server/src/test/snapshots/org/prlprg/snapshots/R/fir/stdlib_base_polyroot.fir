fun main() {
  () -+> V { reg r:cls, reg polyroot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg round:cls, reg r8:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg print:cls, reg polyroot1:cls, reg n1:*, reg n2:V, reg r9:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg polyroot2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg p3:p(V +), reg r18:V |
    mkenv;
    r = clos inner2148457334;
    st polyroot = r;
    polyroot = ldf polyroot;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, 2.0, 1.0);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, 2.0, 1.0);
      goto L0(r1);
    };
    r5 = dyn polyroot(p);
    check L4() else D1();
  D1():
    deopt 6 [r5];
  L4():
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0():
    s = toForSeq(<int 1, 2, 3, 4>);
    l = length(s);
    i = 0;
    goto L1(i);
  L5():
    round = ldf round in base;
    r8 = dyn round(<lang polyroot(choose(8.0, `:`(0.0, 8.0)))>, 11.0);
    goto L0();
  L6():
    r6 = dyn base1(<lang polyroot(choose(8.0, `:`(0.0, 8.0)))>, 11.0);
    goto L0();
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L7() else L2();
  L2():
    x = `[[`(s, i2, NULL, TRUE);
    st n1 = x;
    print = ldf print;
    check L8() else D2();
  L7():
    polyroot2 = ldf polyroot;
    check L10() else D4();
  D2():
    deopt 13 [i2];
  D4():
    deopt 22 [];
  L8():
    p2 = prom<V +>{
      polyroot1 = ldf polyroot;
      p1 = prom<V +>{
        n1 = ld n1;
        n2 = force? n1;
        checkMissing(n2);
        r9 = `:`(1.0, n2);
        return r9;
      };
      r11 = dyn polyroot1(p1);
      return r11;
    };
    r13 = dyn print[, digits](p2, 4.0);
    check L9() else D3();
  L10():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c2 = ldf c in base;
      r16 = dyn c2(1.0, 2.0, 1.0, 0.0, 0.0);
      goto L0(r16);
    L2():
      r14 = dyn base2(1.0, 2.0, 1.0, 0.0, 0.0);
      goto L0(r14);
    };
    r18 = dyn polyroot2(p3);
    check L11() else D5();
  D3():
    deopt 17 [i2, r13];
  D5():
    deopt 24 [r18];
  L9():
    goto L1(i2);
  L11():
    popenv;
    return r18;
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg z1:*, reg z2:V, reg polyroot:cls, reg r2:V |
    mkenv;
    st z = z;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    z1 = ld z;
    check L3() else D0();
  L2():
    r = dyn base(<lang polyroot(z)>);
    goto L0(r);
  D0():
    deopt 2 [z1];
  L3():
    z2 = force? z1;
    checkMissing(z2);
    polyroot = ldf polyroot in base;
    r2 = dyn polyroot(z2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}