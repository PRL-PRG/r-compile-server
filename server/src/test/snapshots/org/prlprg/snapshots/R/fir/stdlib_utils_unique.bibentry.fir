fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `unique.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg class:cls, reg r3:V, reg l:*, reg class__:cls, reg r4:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    NextMethod = ldf NextMethod;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn NextMethod("unique");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    st y = r;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r2):
    l = ld y;
    class__ = ldf `class<-`;
    check L7() else D4();
  L3():
    x1 = ld x;
    check L5() else D2();
  L4():
    r1 = dyn base(<sym x>);
    goto L0(r1);
  D2():
    deopt 7 [x1];
  D4():
    deopt 12 [r2, l, r2];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    class = ldf class in base;
    r3 = dyn class(x2);
    check L6() else D3();
  L7():
    r4 = dyn class__(l, NULL, r2);
    check L8() else D5();
  D3():
    deopt 10 [r3];
  D5():
    deopt 14 [r2, r4];
  L6():
    goto L0(r3);
  L8():
    st y = r4;
    y = ld y;
    check L9() else D6();
  D6():
    deopt 16 [y];
  L9():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}