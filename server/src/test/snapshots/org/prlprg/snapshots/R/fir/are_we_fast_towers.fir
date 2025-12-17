fun main() {
  () -+> V { reg r:cls, reg towers:cls, reg r1:V |
    mkenv;
    r = clos inner3069788994;
    st towers = r;
    towers = ldf towers;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn towers(7.0, 1.0, 2.0, 3.0);
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner3069788994(n, from_peg, to_peg, using_peg) {
  (reg n:*, reg from_peg:*, reg to_peg:*, reg using_peg:*) -+> V { var n:*, var from_peg:*, var to_peg:*, var using_peg:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg towers:cls, reg n3:*, reg n4:V, reg r3:V, reg p:p(V +), reg from_peg1:*, reg from_peg2:V, reg p1:p(V +), reg using_peg1:*, reg using_peg2:V, reg p2:p(V +), reg to_peg1:*, reg to_peg2:V, reg p3:p(V +), reg r8:V, reg moves:*, reg moves1:V, reg r9:V, reg moves2:*, reg moves3:V, reg towers1:cls, reg n5:*, reg n6:V, reg r10:V, reg p4:p(V +), reg using_peg3:*, reg using_peg4:V, reg p5:p(V +), reg to_peg3:*, reg to_peg4:V, reg p6:p(V +), reg from_peg3:*, reg from_peg4:V, reg p7:p(V +), reg r15:V, reg r16:V, reg moves4:*, reg moves5:V |
    mkenv;
    st n = n;
    st from_peg = from_peg;
    st to_peg = to_peg;
    st using_peg = using_peg;
    n1 = ld n;
    check L2() else D0();
  D0():
    deopt 0 [n1];
  L2():
    n2 = force? n1;
    checkMissing(n2);
    r = `==`(n2, 1.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    towers = ldf towers;
    check L6() else D1();
  L3():
    popenv;
    return 1.0;
  D1():
    deopt 10 [];
  L6():
    p = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r3 = `-`(n4, 1.0);
      return r3;
    };
    p1 = prom<V +>{
      from_peg1 = ld from_peg;
      from_peg2 = force? from_peg1;
      checkMissing(from_peg2);
      return from_peg2;
    };
    p2 = prom<V +>{
      using_peg1 = ld using_peg;
      using_peg2 = force? using_peg1;
      checkMissing(using_peg2);
      return using_peg2;
    };
    p3 = prom<V +>{
      to_peg1 = ld to_peg;
      to_peg2 = force? to_peg1;
      checkMissing(to_peg2);
      return to_peg2;
    };
    r8 = dyn towers(p, p1, p2, p3);
    check L7() else D2();
  D2():
    deopt 15 [r8];
  L7():
    st moves = r8;
    moves = ld moves;
    check L8() else D3();
  D3():
    deopt 17 [moves];
  L8():
    moves1 = force? moves;
    checkMissing(moves1);
    r9 = `+`(moves1, 1.0);
    st moves = r9;
    moves2 = ld moves;
    check L9() else D4();
  D4():
    deopt 22 [moves2];
  L9():
    moves3 = force? moves2;
    checkMissing(moves3);
    towers1 = ldf towers;
    check L10() else D5();
  D5():
    deopt 24 [moves3];
  L10():
    p4 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r10 = `-`(n6, 1.0);
      return r10;
    };
    p5 = prom<V +>{
      using_peg3 = ld using_peg;
      using_peg4 = force? using_peg3;
      checkMissing(using_peg4);
      return using_peg4;
    };
    p6 = prom<V +>{
      to_peg3 = ld to_peg;
      to_peg4 = force? to_peg3;
      checkMissing(to_peg4);
      return to_peg4;
    };
    p7 = prom<V +>{
      from_peg3 = ld from_peg;
      from_peg4 = force? from_peg3;
      checkMissing(from_peg4);
      return from_peg4;
    };
    r15 = dyn towers1(p4, p5, p6, p7);
    check L11() else D6();
  D6():
    deopt 29 [moves3, r15];
  L11():
    r16 = `+`(moves3, r15);
    st moves = r16;
    moves4 = ld moves;
    check L12() else D7();
  D7():
    deopt 32 [moves4];
  L12():
    moves5 = force? moves4;
    checkMissing(moves5);
    popenv;
    return moves5;
  }
}