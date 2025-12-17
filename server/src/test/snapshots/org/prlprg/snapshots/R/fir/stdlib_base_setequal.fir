fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st setequal = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg as_vector:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg as_vector1:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg y3:*, reg y4:V, reg match:cls, reg r8:V, reg anyNA:cls, reg r9:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c5:L, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg c8:L, reg r13:V, reg y5:*, reg y6:V, reg x5:*, reg x6:V, reg match1:cls, reg r14:V, reg anyNA1:cls, reg r15:V, reg c9:L, reg c10:V, reg r16:V |
    mkenv;
    st x = x;
    st y = y;
    as_vector = ldf `as.vector`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_vector(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    st x = r1;
    as_vector1 = ldf `as.vector`;
    check L7() else D2();
  D2():
    deopt 6 [];
  L7():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r3 = dyn as_vector1(p1);
    check L8() else D3();
  D3():
    deopt 8 [r3];
  L8():
    st y = r3;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r5):
    c = `as.logical`(r5);
    if c then L2(c) else L17();
  L9():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L10():
    r4 = dyn base(<lang match(x, y)>);
    goto L0(r4);
  L1(r7):
    anyNA = ldf anyNA in base;
    r9 = dyn anyNA(r7);
    check L16() else D7();
  L2(c1):
    r16 = `!`(c1);
    popenv;
    return r16;
  L11():
    x3 = ld x;
    check L13() else D4();
  L12():
    r6 = dyn base1(<sym x>, <sym y>);
    goto L1(r6);
  L17():
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D4():
    deopt 14 [x3];
  D7():
    deopt 23 [r9];
  L3(c5, r11):
    c9 = `as.logical`(r11);
    c10 = `||`(c5, c9);
    goto L2(c10);
  L13():
    x4 = force? x3;
    checkMissing(x4);
    y3 = ld y;
    check L14() else D5();
  L16():
    goto L0(r9);
  L18():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L19():
    r10 = dyn base2(<lang match(y, x)>);
    goto L3(c, r10);
  D5():
    deopt 16 [y3];
  L4(c8, r13):
    anyNA1 = ldf anyNA in base;
    r15 = dyn anyNA1(r13);
    check L25() else D11();
  L14():
    y4 = force? y3;
    checkMissing(y4);
    match = ldf match in base;
    r8 = dyn match(x4, y4, NA_INT, NULL);
    check L15() else D6();
  L20():
    y5 = ld y;
    check L22() else D8();
  L21():
    r12 = dyn base3(<sym y>, <sym x>);
    goto L4(c, r12);
  D6():
    deopt 21 [r8];
  D8():
    deopt 28 [c, y5];
  D11():
    deopt 37 [c8, r15];
  L15():
    goto L1(r8);
  L22():
    y6 = force? y5;
    checkMissing(y6);
    x5 = ld x;
    check L23() else D9();
  L25():
    goto L3(c8, r15);
  D9():
    deopt 30 [c, x5];
  L23():
    x6 = force? x5;
    checkMissing(x6);
    match1 = ldf match in base;
    r14 = dyn match1(y6, x6, NA_INT, NULL);
    check L24() else D10();
  D10():
    deopt 35 [c, r14];
  L24():
    goto L4(c, r14);
  }
}