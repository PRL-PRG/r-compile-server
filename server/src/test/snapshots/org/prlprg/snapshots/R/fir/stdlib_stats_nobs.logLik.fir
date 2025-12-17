fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `nobs.logLik` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg res:*, reg res1:V, reg c:V, reg c1:L, reg stop:cls, reg r5:V, reg res2:*, reg res3:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st res = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r = dyn base(<sym object>, "nobs");
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L11() else L2();
  L6():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r2 = dyn attr(object2, "nobs");
    check L7() else D1();
  L8():
    res = ld res;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym res>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [res];
  L2():
    goto L3();
  L3():
    res2 = ld res;
    check L15() else D5();
  L7():
    goto L0(r2);
  L10():
    res1 = force? res;
    checkMissing(res1);
    c = `==`(res1, NULL);
    goto L1(c);
  L11():
    stop = ldf stop;
    check L12() else D3();
  D3():
    deopt 13 [];
  D5():
    deopt 18 [res2];
  L12():
    r5 = dyn stop("no \"nobs\" attribute is available");
    check L13() else D4();
  L15():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D4():
    deopt 15 [r5];
  L13():
    goto L3();
  }
}