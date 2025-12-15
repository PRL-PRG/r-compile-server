fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r2:V, reg x2:*, reg x3:V, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x4:*, reg x5:V, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x6:*, reg x7:V, reg r13:V, reg r14:V, reg list:cls, reg r15:V |
    mkenv;
    st x = 4.0;
    st y = 0.2;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    popenv;
    return r1;
  L4():
    x = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<lang `*`(`/`(`*`(x, y), x), 10.0)>, <lang `^`(exp(x), 2.0)>, <lang sqrt(exp(x))>);
    goto L0(r);
  D0():
    deopt 8 [x];
  L6():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L7() else D1();
  D1():
    deopt 9 [x1, y];
  L7():
    y1 = force? y;
    checkMissing(y1);
    r2 = `*`(x1, y1);
    x2 = ld x;
    check L8() else D2();
  D2():
    deopt 11 [r2, x2];
  L8():
    x3 = force? x2;
    checkMissing(x3);
    r3 = `/`(r2, x3);
    r4 = `*`(r3, 10.0);
    sym1 = ldf exp;
    base1 = ldf exp in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L1(r6):
    r8 = `^`(r6, 2.0);
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L9():
    x4 = ld x;
    check L11() else D3();
  L10():
    r5 = dyn base1(<sym x>);
    goto L1(r5);
  D3():
    deopt 17 [x4];
  L2(r10):
    list = ldf list in base;
    r15 = dyn list(r4, r8, r10);
    check L17() else D5();
  L11():
    x5 = force? x4;
    checkMissing(x5);
    r7 = exp(x5);
    goto L1(r7);
  L12():
    sym3 = ldf exp;
    base3 = ldf exp in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L13():
    r9 = dyn base2(<lang exp(x)>);
    goto L2(r9);
  D5():
    deopt 29 [r15];
  L3(r12):
    r14 = sqrt(r12);
    goto L2(r14);
  L14():
    x6 = ld x;
    check L16() else D4();
  L15():
    r11 = dyn base3(<sym x>);
    goto L3(r11);
  L17():
    goto L0(r15);
  D4():
    deopt 24 [x6];
  L16():
    x7 = force? x6;
    checkMissing(x7);
    r13 = exp(x7);
    goto L3(r13);
  }
}