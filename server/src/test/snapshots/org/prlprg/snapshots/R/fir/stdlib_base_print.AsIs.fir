fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.AsIs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg cl:*, reg cl1:V, reg c:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cl4:*, reg cl5:V, reg r3:V, reg __:cls, reg r4:V, reg l:*, reg oldClass__:cls, reg r5:V, reg NextMethod:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg invisible:cls, reg r9:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st cl = r1;
    cl = ld cl;
    check L7() else D2();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [cl];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L6() else D1();
  L7():
    cl1 = force? cl;
    checkMissing(cl1);
    c = `is.object`(cl1);
    if c then L8() else L9(cl1);
  D1():
    deopt 5 [r2];
  L1(dx1):
    l = ld x;
    oldClass__ = ldf `oldClass<-`;
    check L12() else D4();
  L6():
    goto L0(r2);
  L8():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(cl3):
    cl4 = ld cl;
    check L11() else D3();
  D3():
    deopt 9 [cl3, cl4];
  D4():
    deopt 15 [dx1, l, dx1];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    cl5 = force? cl4;
    checkMissing(cl5);
    r3 = `!=`(cl5, "AsIs");
    __ = ldf `[` in base;
    r4 = dyn __(cl3, r3);
    goto L1(r4);
  L12():
    r5 = dyn oldClass__(l, NULL, dx1);
    check L13() else D5();
  D5():
    deopt 17 [dx1, r5];
  L13():
    st x = r5;
    NextMethod = ldf NextMethod;
    check L14() else D6();
  D6():
    deopt 20 [];
  L14():
    r6 = dyn NextMethod("print");
    check L15() else D7();
  D7():
    deopt 22 [r6];
  L15():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L2(r8):
    popenv;
    return r8;
  L16():
    x3 = ld x;
    check L18() else D8();
  L17():
    r7 = dyn base1(<sym x>);
    goto L2(r7);
  D8():
    deopt 25 [x3];
  L18():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r9 = dyn invisible(x4);
    check L19() else D9();
  D9():
    deopt 28 [r9];
  L19():
    goto L2(r9);
  }
}