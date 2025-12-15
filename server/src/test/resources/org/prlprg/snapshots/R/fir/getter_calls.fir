fun main() {
  () -+> V { reg l:*, reg names:cls, reg r:V, reg c:L, reg r3:S, reg l2:*, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg r6:S, reg l4:*, reg dx1:V, reg ___:cls, reg r7:V, reg names__:cls, reg r8:V, reg x:*, reg x1:V |
    mkenv;
    st x = <int 1, 2, 3>;
    l = ld x;
    names = ldf names;
    check L1() else D0();
  D0():
    deopt 6 ["a", l, "a"];
  L1():
    r = dyn names("a", NULL);
    check L2() else D1();
  D1():
    deopt 8 ["a", l, "a", r];
  L2():
    c = `is.object`(r);
    if c then L3() else L4("a", l, r);
  L0(r6, l4, dx1):
    names__ = ldf `names<-`;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[<-", r, "a");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4("a", l, dr);
  L4(r3, l2, r4):
    ___ = ldf `[<-` in base;
    r7 = dyn ___(r4, "a", 3.0);
    goto L0(r3, l2, r7);
  D2():
    deopt 13 [r6, l4, dx1];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0("a", l, dx);
  L6():
    r8 = dyn names__(l4, NULL, dx1);
    check L7() else D3();
  D3():
    deopt 15 [r6, r8];
  L7():
    st x = r8;
    x = ld x;
    check L8() else D4();
  D4():
    deopt 17 [x];
  L8():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}