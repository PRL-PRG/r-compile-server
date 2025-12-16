fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg hilbert:cls, reg r2:V, reg h8:*, reg h9:V, reg solve:cls, reg h10:*, reg h11:V, reg p:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg round:cls, reg r7:V, reg hilbert1:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg A:*, reg A1:V, reg as_complex:cls, reg r11:V, reg l:*, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r16:V, reg try:cls, reg solve1:cls, reg A2:*, reg A3:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg r20:V |
    mkenv;
    r = clos `inner-1797206294`;
    st solve = r;
    r1 = clos inner2119503979;
    st hilbert = r1;
    hilbert = ldf hilbert;
    check L3() else D0();
  D0():
    deopt 7 [];
  L3():
    r2 = dyn hilbert(8.0);
    check L4() else D1();
  D1():
    deopt 9 [r2];
  L4():
    st h8 = r2;
    h8 = ld h8;
    check L5() else D2();
  D2():
    deopt 11 [h8];
  L5():
    h9 = force? h8;
    checkMissing(h9);
    solve = ldf solve;
    check L6() else D3();
  D3():
    deopt 14 [];
  L6():
    p = prom<V +>{
      h10 = ld h8;
      h11 = force? h10;
      checkMissing(h11);
      return h11;
    };
    r4 = dyn solve(p);
    check L7() else D4();
  D4():
    deopt 16 [r4];
  L7():
    st sh8 = r4;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0():
    hilbert1 = ldf hilbert;
    check L10() else D5();
  L8():
    round = ldf round in base;
    r7 = dyn round(<lang `%*%`(sh8, h8)>, 3.0);
    goto L0();
  L9():
    r5 = dyn base(<lang `%*%`(sh8, h8)>, 3.0);
    goto L0();
  D5():
    deopt 22 [];
  L10():
    r8 = dyn hilbert1(4.0);
    check L11() else D6();
  D6():
    deopt 24 [r8];
  L11():
    st A = r8;
    sym1 = ldf `as.complex`;
    base1 = ldf `as.complex` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1(r10):
    l = ld A;
    c = `is.object`(l);
    if c then L16() else L17(r10);
  L12():
    A = ld A;
    check L14() else D7();
  L13():
    r9 = dyn base1(<sym A>);
    goto L1(r9);
  D7():
    deopt 28 [A];
  L2(dx1):
    st A = dx1;
    try = ldf try;
    check L19() else D9();
  L14():
    A1 = force? A;
    checkMissing(A1);
    as_complex = ldf `as.complex` in base;
    r11 = dyn as_complex(A1);
    check L15() else D8();
  L16():
    dr = tryDispatchBuiltin.0("[<-", l, r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(r10);
  L17(r13):
    ___ = ldf `[<-` in base;
    r16 = dyn ___(l, <missing>, r10);
    goto L2(r16);
  D8():
    deopt 31 [r11];
  D9():
    deopt 38 [];
  L15():
    goto L1(r11);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L19():
    p2 = prom<V +>{
      solve1 = ldf solve;
      p1 = prom<V +>{
        A2 = ld A;
        A3 = force? A2;
        checkMissing(A3);
        return A3;
      };
      r18 = dyn solve1(p1);
      return r18;
    };
    r20 = dyn try(p2);
    check L20() else D10();
  D10():
    deopt 40 [r20];
  L20():
    popenv;
    return r20;
  }
}
fun `inner-1797206294`(a, b, `...`) {
  (reg a:*, reg b:*, reg ddd:dots) -+> V { var a:*, var b:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st a = a;
    st b = b;
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
    r2 = dyn UseMethod("solve");
    goto L0(r2);
  L2():
    r = dyn base("solve");
    goto L0(r);
  }
}
fun inner2119503979(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg outer:cls, reg i:*, reg i1:V, reg r1:V, reg p:p(V +), reg i2:*, reg i3:V, reg p1:p(V +), reg __:*, reg __1:V, reg p2:p(V +), reg r5:V, reg r6:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L0() else D0();
  D0():
    deopt 1 [1.0, n1];
  L0():
    n2 = force? n1;
    checkMissing(n2);
    r = `:`(1.0, n2);
    st i = r;
    outer = ldf outer;
    check L1() else D1();
  D1():
    deopt 7 [1.0];
  L1():
    p = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      r1 = `-`(i1, 1.0);
      return r1;
    };
    p1 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    p2 = prom<V +>{
      __ = ld `+`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r5 = dyn outer(p, p1, p2);
    check L2() else D2();
  D2():
    deopt 11 [1.0, r5];
  L2():
    r6 = `/`(1.0, r5);
    popenv;
    return r6;
  }
}