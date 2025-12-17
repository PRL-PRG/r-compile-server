fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_pragmas` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg length1:cls, reg r5:V, reg r6:V, reg c1:L, reg writeLines:cls, reg r7:V, reg writeLines1:cls, reg r9:V, reg _pretty_print:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r11:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L5();
  L5():
    x7 = ld x;
    check L24() else D10();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D1():
    deopt 5 [r2];
  D10():
    deopt 28 [x7];
  L2(r4):
    r6 = `==`(r4, 1);
    c1 = `as.logical`(r6);
    if c1 then L15() else L3();
  L9():
    goto L0(r2);
  L11():
    x3 = ld x;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L24():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  D2():
    deopt 8 [x3];
  L3():
    writeLines1 = ldf writeLines;
    check L19() else D6();
  L4():
    _pretty_print = ldf `.pretty_print`;
    check L21() else D8();
  L13():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r5 = dyn length1(x4);
    check L14() else D3();
  L15():
    writeLines = ldf writeLines;
    check L16() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 15 [];
  D6():
    deopt 19 [];
  D8():
    deopt 23 [];
  L14():
    goto L2(r5);
  L16():
    r7 = dyn writeLines("File which contain pragma(s) suppressing diagnostics:");
    check L17() else D5();
  L19():
    r9 = dyn writeLines1("Files which contain pragma(s) suppressing diagnostics:");
    check L20() else D7();
  L21():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r11 = dyn _pretty_print(p);
    check L22() else D9();
  D5():
    deopt 17 [r7];
  D7():
    deopt 21 [r9];
  D9():
    deopt 25 [r11];
  L17():
    goto L4();
  L20():
    goto L4();
  L22():
    goto L5();
  }
}