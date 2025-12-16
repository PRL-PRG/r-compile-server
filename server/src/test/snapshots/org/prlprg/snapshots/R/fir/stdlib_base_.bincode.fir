fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg _bincode:cls, reg x:*, reg x1:V, reg p:p(V +), reg b:*, reg b1:V, reg p1:p(V +), reg r9:V, reg _bincode1:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg b2:*, reg b3:V, reg p3:p(V +), reg r12:V, reg _bincode2:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg b4:*, reg b5:V, reg p5:p(V +), reg r15:V, reg _bincode3:cls, reg x6:*, reg x7:V, reg p6:p(V +), reg b6:*, reg b7:V, reg p7:p(V +), reg r18:V |
    mkenv;
    r = clos `inner-1320662670`;
    st `.bincode` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st x = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r3 = dyn c(0.0, 0.01, 0.5, 0.99, 1.0);
    check L4() else D0();
  L3():
    r1 = dyn base(0.0, 0.01, 0.5, 0.99, 1.0);
    goto L0(r1);
  D0():
    deopt 11 [r3];
  L1(r5):
    st b = r5;
    _bincode = ldf `.bincode`;
    check L8() else D2();
  L4():
    goto L0(r3);
  L5():
    c1 = ldf c in base;
    r6 = dyn c1(0.0, 0.0, 1.0, 1.0);
    check L7() else D1();
  L6():
    r4 = dyn base1(0.0, 0.0, 1.0, 1.0);
    goto L1(r4);
  D1():
    deopt 20 [r6];
  D2():
    deopt 23 [];
  L7():
    goto L1(r6);
  L8():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r9 = dyn _bincode(p, p1, TRUE);
    check L9() else D3();
  D3():
    deopt 27 [r9];
  L9():
    _bincode1 = ldf `.bincode`;
    check L10() else D4();
  D4():
    deopt 29 [];
  L10():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    r12 = dyn _bincode1(p2, p3, FALSE);
    check L11() else D5();
  D5():
    deopt 33 [r12];
  L11():
    _bincode2 = ldf `.bincode`;
    check L12() else D6();
  D6():
    deopt 35 [];
  L12():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p5 = prom<V +>{
      b4 = ld b;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    r15 = dyn _bincode2(p4, p5, TRUE, TRUE);
    check L13() else D7();
  D7():
    deopt 40 [r15];
  L13():
    _bincode3 = ldf `.bincode`;
    check L14() else D8();
  D8():
    deopt 42 [];
  L14():
    p6 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p7 = prom<V +>{
      b6 = ld b;
      b7 = force? b6;
      checkMissing(b7);
      return b7;
    };
    r18 = dyn _bincode3(p6, p7, FALSE, TRUE);
    check L15() else D9();
  D9():
    deopt 47 [r18];
  L15():
    popenv;
    return r18;
  }
}
fun `inner-1320662670`(x, breaks, right, `include.lowest`) {
  (reg x:*, reg breaks:*, reg right:*, reg include_lowest:*) -+> V { var x:*, var breaks:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `include.lowest`:*, reg include_lowest_isMissing:L, reg include_lowest_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg breaks1:*, reg breaks2:V, reg right1:*, reg right2:V, reg include_lowest1:*, reg include_lowest2:V, reg bincode:cls, reg r2:V |
    mkenv;
    st x = x;
    st breaks = breaks;
    right_isMissing = missing.0(right);
    if right_isMissing then L0(TRUE) else L0(right);
  L0(right_orDefault):
    st right = right_orDefault;
    include_lowest_isMissing = missing.0(include_lowest);
    if include_lowest_isMissing then L1(FALSE) else L1(include_lowest);
  L1(include_lowest_orDefault):
    st `include.lowest` = include_lowest_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang bincode(x, breaks, right, include.lowest)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    breaks1 = ld breaks;
    check L6() else D1();
  D1():
    deopt 4 [breaks1];
  L6():
    breaks2 = force? breaks1;
    checkMissing(breaks2);
    right1 = ld right;
    check L7() else D2();
  D2():
    deopt 6 [right1];
  L7():
    right2 = force? right1;
    checkMissing(right2);
    include_lowest1 = ld `include.lowest`;
    check L8() else D3();
  D3():
    deopt 8 [include_lowest1];
  L8():
    include_lowest2 = force? include_lowest1;
    checkMissing(include_lowest2);
    bincode = ldf bincode in base;
    r2 = dyn bincode(x2, breaks2, right2, include_lowest2);
    check L9() else D4();
  D4():
    deopt 11 [r2];
  L9():
    goto L2(r2);
  }
}