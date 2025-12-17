fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3624283997;
    st `[.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3624283997(x, i) {
  (reg x:*, reg i:*) -+> V { var x:*, var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg NextMethod:cls, reg r3:V, reg cl:*, reg cl1:V, reg l:*, reg oldClass__:cls, reg r4:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st i = i;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st cl = r1;
    NextMethod = ldf NextMethod;
    check L5() else D2();
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L4() else D1();
  L5():
    r3 = dyn NextMethod("[");
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r3];
  L4():
    goto L0(r2);
  L6():
    st y = r3;
    cl = ld cl;
    check L7() else D4();
  D4():
    deopt 12 [cl];
  L7():
    cl1 = force? cl;
    checkMissing(cl1);
    l = ld y;
    oldClass__ = ldf `oldClass<-`;
    check L8() else D5();
  D5():
    deopt 15 [cl1, l, cl1];
  L8():
    r4 = dyn oldClass__(l, NULL, cl1);
    check L9() else D6();
  D6():
    deopt 17 [cl1, r4];
  L9():
    st y = r4;
    y = ld y;
    check L10() else D7();
  D7():
    deopt 19 [y];
  L10():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}