fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st NROW = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg length:cls, reg r5:V, reg c:L, reg d:*, reg d1:V, reg c1:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg length1:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L2();
  L5():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang `<-`(d, dim(x))>);
    goto L0(r);
  L1(r3):
    st d = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L11() else D2();
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L12():
    d = ld d;
    check L13() else D3();
  D0():
    deopt 4 [x1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 11 [d];
  L4(r8):
    popenv;
    return r8;
  L9():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L10() else D1();
  L11():
    goto L0(r5);
  L13():
    d1 = force? d;
    checkMissing(d1);
    c1 = `is.object`(d1);
    if c1 then L14() else L15(d1);
  L18():
    x3 = ld x;
    check L20() else D4();
  L19():
    r7 = dyn base2(<sym x>);
    goto L4(r7);
  D1():
    deopt 7 [r4];
  D4():
    deopt 18 [x3];
  L3(dx1):
    popenv;
    return dx1;
  L10():
    goto L1(r4);
  L14():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(d3):
    __ = ldf `[` in base;
    r6 = dyn __(d3, 1);
    goto L3(r6);
  L20():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r9 = dyn length1(x4);
    check L21() else D5();
  D5():
    deopt 21 [r9];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L21():
    goto L4(r9);
  }
}