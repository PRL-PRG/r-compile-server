fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x:*, reg x1:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x2:*, reg x3:V, reg y:*, reg y1:V, reg r7:V, reg list:cls, reg r8:V |
    mkenv;
    st x = 5.0;
    st y = 10.0;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf log;
    base1 = ldf log in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang log(x)>, <lang log(x, y)>);
    goto L0(r);
  L1(r3):
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L5():
    x = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D0():
    deopt 9 [x];
  L2(r6):
    list = ldf list in base;
    r8 = dyn list(r3, r6);
    check L12() else D3();
  L7():
    x1 = force? x;
    checkMissing(x1);
    r4 = log(x1, 2.718281828459045);
    goto L1(r4);
  L8():
    x2 = ld x;
    check L10() else D1();
  L9():
    r5 = dyn base2(<sym x>, <sym y>);
    goto L2(r5);
  D1():
    deopt 13 [x2];
  D3():
    deopt 18 [r8];
  L10():
    x3 = force? x2;
    checkMissing(x3);
    y = ld y;
    check L11() else D2();
  L12():
    goto L0(r8);
  D2():
    deopt 14 [x3, y];
  L11():
    y1 = force? y;
    checkMissing(y1);
    r7 = log(x3, y1);
    goto L2(r7);
  }
}