fun main() {
  () -+> V { reg r:cls, reg seq:cls, reg r1:V, reg seq1:cls, reg __:cls, reg r2:V, reg r3:cls, reg r4:V, reg p:p(V +), reg r6:V, reg seq2:cls, reg r7:V, reg seq3:cls, reg p1:p(V +), reg r9:V, reg seq4:cls, reg r10:V, reg seq5:cls, reg r11:V, reg seq6:cls, reg r12:V |
    mkenv;
    r = clos `inner-901363989`;
    st seq = r;
    seq = ldf seq;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn seq[, , `length.out`](0.0, 1.0, 11.0);
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    seq1 = ldf seq;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p = prom<V +>{
      __ = ldf `::`;
      r2 = dyn __("stats", "rnorm");
      checkFun.0(r2);
      r3 = r2 as cls;
      r4 = dyn r3(20.0);
      return r4;
    };
    r6 = dyn seq1(p);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    seq2 = ldf seq;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    r7 = dyn seq2[, , by](1.0, 9.0, 2.0);
    check L5() else D5();
  D5():
    deopt 20 [r7];
  L5():
    seq3 = ldf seq;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p1 = prom<V +>{
      return 3.141592653589793;
    };
    r9 = dyn seq3[, , by](1.0, 9.0, p1);
    check L7() else D7();
  D7():
    deopt 27 [r9];
  L7():
    seq4 = ldf seq;
    check L8() else D8();
  D8():
    deopt 29 [];
  L8():
    r10 = dyn seq4[, , by](1.0, 6.0, 3.0);
    check L9() else D9();
  D9():
    deopt 34 [r10];
  L9():
    seq5 = ldf seq;
    check L10() else D10();
  D10():
    deopt 36 [];
  L10():
    r11 = dyn seq5[, , by](1.575, 5.125, 0.05);
    check L11() else D11();
  D11():
    deopt 41 [r11];
  L11():
    seq6 = ldf seq;
    check L12() else D12();
  D12():
    deopt 43 [];
  L12():
    r12 = dyn seq6(17.0);
    check L13() else D13();
  D13():
    deopt 45 [r12];
  L13():
    popenv;
    return r12;
  }
}
fun `inner-901363989`(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
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
    r2 = dyn UseMethod("seq");
    goto L0(r2);
  L2():
    r = dyn base("seq");
    goto L0(r);
  }
}