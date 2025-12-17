fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st inBasicFuns = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg _BasicFunsList:*, reg _BasicFunsList1:V, reg c:L, reg _BasicFunsList3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f1:*, reg f2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg fun:*, reg fun1:V, reg c1:V, reg r3:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c7:L, reg r5:V, reg fun2:*, reg fun3:V, reg identical:cls, reg r6:V, reg r7:V, reg c8:L, reg c9:V |
    mkenv;
    st f = f;
    _BasicFunsList = ld `.BasicFunsList`;
    check L4() else D0();
  D0():
    deopt 0 [_BasicFunsList];
  L4():
    _BasicFunsList1 = force? _BasicFunsList;
    checkMissing(_BasicFunsList1);
    c = `is.object`(_BasicFunsList1);
    if c then L5() else L6(_BasicFunsList1);
  L0(dx1):
    st fun = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L5():
    dr = tryDispatchBuiltin.1("[[", _BasicFunsList1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(_BasicFunsList3):
    f1 = ld f;
    check L8() else D1();
  D1():
    deopt 2 [_BasicFunsList3, f1];
  L1(r2):
    r3 = `!`(r2);
    c2 = `as.logical`(r3);
    if c2 then L12() else L2(c2);
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    f2 = force? f1;
    __ = ldf `[[` in base;
    r = dyn __(_BasicFunsList3, f2);
    goto L0(r);
  L9():
    fun = ld fun;
    check L11() else D2();
  L10():
    r1 = dyn base(<sym fun>);
    goto L1(r1);
  D2():
    deopt 7 [fun];
  L2(c4):
    popenv;
    return c4;
  L11():
    fun1 = force? fun;
    checkMissing(fun1);
    c1 = `==`(fun1, NULL);
    goto L1(c1);
  L12():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L3(c7, r5):
    r7 = `!`(r5);
    c8 = `as.logical`(r7);
    c9 = `&&`(c7, c8);
    goto L2(c9);
  L13():
    fun2 = ld fun;
    check L15() else D3();
  L14():
    r4 = dyn base1(<sym fun>, FALSE);
    goto L3(c2, r4);
  D3():
    deopt 13 [c2, fun2];
  L15():
    fun3 = force? fun2;
    checkMissing(fun3);
    identical = ldf identical in base;
    r6 = dyn identical(fun3, FALSE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L16() else D4();
  D4():
    deopt 24 [c2, r6];
  L16():
    goto L3(c2, r6);
  }
}