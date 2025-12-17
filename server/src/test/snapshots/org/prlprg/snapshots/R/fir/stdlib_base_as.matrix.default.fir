fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.matrix.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg array:cls, reg x5:*, reg x6:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x7:*, reg x8:V, reg length:cls, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg x9:*, reg x10:V, reg names:cls, reg r15:V, reg c2:V, reg r16:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg x11:*, reg x12:V, reg names1:cls, reg r21:V, reg list:cls, reg r22:V, reg p2:p(V +), reg r24:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    array = ldf array;
    check L9() else D3();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L5() else D1();
  L6():
    x3 = ld x;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [x3];
  D3():
    deopt 9 [];
  L5():
    goto L0(r2);
  L7():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L9():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r5):
      return r5;
    L2():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r4 = dyn base1(<lang length(x)>, 1);
      goto L0(r4);
    L1(r7):
      c1 = ldf c in base;
      r9 = dyn c1(r7, 1);
      goto L0(r9);
    L4():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      length = ldf length in base;
      r8 = dyn length(x8);
      goto L1(r8);
    L5():
      r6 = dyn base2(<sym x>);
      goto L1(r6);
    };
    p2 = prom<V +>{
      sym3 = ldf `is.null`;
      base3 = ldf `is.null` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L0(r12):
      r16 = `!`(r12);
      c3 = `as.logical`(r16);
      if c3 then L9() else L2();
    L5():
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L6():
      r11 = dyn base3(<lang names(x)>);
      goto L0(r11);
    L1(r14):
      c2 = `==`(r14, NULL);
      goto L0(c2);
    L2():
      return NULL;
    L7():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      names = ldf names in base;
      r15 = dyn names(x10);
      goto L1(r15);
    L8():
      r13 = dyn base4(<sym x>);
      goto L1(r13);
    L9():
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L10() else L11();
    L3(r18):
      return r18;
    L10():
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L12() else L13();
    L11():
      r17 = dyn base5(<lang names(x)>, NULL);
      goto L3(r17);
    L4(r20):
      list = ldf list in base;
      r22 = dyn list(r20, NULL);
      goto L3(r22);
    L12():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      names1 = ldf names in base;
      r21 = dyn names1(x12);
      goto L4(r21);
    L13():
      r19 = dyn base6(<sym x>);
      goto L4(r19);
    };
    r24 = dyn array(p, p1, p2);
    check L10() else D4();
  D4():
    deopt 13 [r24];
  L10():
    popenv;
    return r24;
  }
}