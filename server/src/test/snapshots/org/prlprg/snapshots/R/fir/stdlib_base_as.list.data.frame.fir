fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.list.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg l:*, reg attr__:cls, reg r3:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st x = r1;
    l = ld x;
    attr__ = ldf `attr<-`;
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
    deopt 10 [NULL, l, NULL];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L4() else D1();
  L5():
    r3 = dyn attr__(l, NULL, "row.names", NULL);
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 13 [NULL, r3];
  L4():
    goto L0(r2);
  L6():
    st x = r3;
    x3 = ld x;
    check L7() else D4();
  D4():
    deopt 15 [x3];
  L7():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}