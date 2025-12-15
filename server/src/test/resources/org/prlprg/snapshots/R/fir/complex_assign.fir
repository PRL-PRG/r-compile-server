fun main() {
  () -+> V { reg matrix:cls, reg r:V, reg l:*, reg diag:cls, reg r1:V, reg c:L, reg r4:R, reg l2:*, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg r7:R, reg l4:*, reg dx1:V, reg ___:cls, reg r8:V, reg diag__:cls, reg r9:V |
    mkenv;
    matrix = ldf matrix;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn matrix(4.0, 2.0, 2.0);
    check L2() else D1();
  D1():
    deopt 5 [r];
  L2():
    st b = r;
    l = ld b;
    diag = ldf diag;
    check L3() else D2();
  D2():
    deopt 10 [5.0, l, 5.0];
  L3():
    r1 = dyn diag(5.0, NULL);
    check L4() else D3();
  D3():
    deopt 12 [5.0, l, 5.0, r1];
  L4():
    c = `is.object`(r1);
    if c then L5() else L6(5.0, l, r1);
  L0(r7, l4, dx1):
    diag__ = ldf `diag<-`;
    check L8() else D4();
  L5():
    dr = tryDispatchBuiltin.0("[<-", r1, 5.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(5.0, l, dr);
  L6(r4, l2, r5):
    ___ = ldf `[<-` in base;
    r8 = dyn ___(r5, 5.0, 2.0);
    goto L0(r4, l2, r8);
  D4():
    deopt 17 [r7, l4, dx1];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(5.0, l, dx);
  L8():
    r9 = dyn diag__(l4, NULL, dx1);
    check L9() else D5();
  D5():
    deopt 19 [r7, r9];
  L9():
    st b = r9;
    popenv;
    return 1.0;
  }
}