fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `xtfrm.AsIs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg cl:*, reg cl1:V, reg c:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cl4:*, reg cl5:V, reg r3:V, reg __:cls, reg r4:V, reg l:*, reg oldClass__:cls, reg r5:V, reg NextMethod:cls, reg r6:V |
    mkenv;
    st x = x;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st cl = r1;
    cl = ld cl;
    check L6() else D2();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [cl];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L5() else D1();
  L6():
    cl1 = force? cl;
    checkMissing(cl1);
    c = `is.object`(cl1);
    if c then L7() else L8(cl1);
  D1():
    deopt 5 [r2];
  L1(dx1):
    l = ld x;
    oldClass__ = ldf `oldClass<-`;
    check L11() else D4();
  L5():
    goto L0(r2);
  L7():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(cl3):
    cl4 = ld cl;
    check L10() else D3();
  D3():
    deopt 9 [cl3, cl4];
  D4():
    deopt 15 [dx1, l, dx1];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    cl5 = force? cl4;
    checkMissing(cl5);
    r3 = `!=`(cl5, "AsIs");
    __ = ldf `[` in base;
    r4 = dyn __(cl3, r3);
    goto L1(r4);
  L11():
    r5 = dyn oldClass__(l, NULL, dx1);
    check L12() else D5();
  D5():
    deopt 17 [dx1, r5];
  L12():
    st x = r5;
    NextMethod = ldf NextMethod;
    check L13() else D6();
  D6():
    deopt 20 [];
  L13():
    r6 = dyn NextMethod("xtfrm");
    check L14() else D7();
  D7():
    deopt 22 [r6];
  L14():
    popenv;
    return r6;
  }
}