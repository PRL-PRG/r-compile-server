fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st NCOL = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg dim:cls, reg r6:V, reg length:cls, reg r7:V, reg r8:V, reg c2:L, reg d:*, reg d1:V, reg c3:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L9():
    popenv;
    return 0;
  L2(r3):
    r8 = `>`(r3, 1);
    c2 = `as.logical`(r8);
    if c2 then L18() else L4();
  L11():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L12():
    r2 = dyn base1(<lang `<-`(d, dim(x))>);
    goto L2(r2);
  L3(r5):
    st d = r5;
    length = ldf length in base;
    r7 = dyn length(r5);
    check L17() else D3();
  L4():
    popenv;
    return 1;
  L13():
    x3 = ld x;
    check L15() else D1();
  L14():
    r4 = dyn base2(<sym x>);
    goto L3(r4);
  L18():
    d = ld d;
    check L19() else D4();
  D1():
    deopt 10 [x3];
  D3():
    deopt 16 [r7];
  D4():
    deopt 19 [d];
  L15():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r6 = dyn dim(x4);
    check L16() else D2();
  L17():
    goto L2(r7);
  L19():
    d1 = force? d;
    checkMissing(d1);
    c3 = `is.object`(d1);
    if c3 then L20() else L21(d1);
  D2():
    deopt 13 [r6];
  L5(dx1):
    popenv;
    return dx1;
  L16():
    goto L3(r6);
  L20():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(d3):
    __ = ldf `[` in base;
    r9 = dyn __(d3, 2);
    goto L5(r9);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  }
}