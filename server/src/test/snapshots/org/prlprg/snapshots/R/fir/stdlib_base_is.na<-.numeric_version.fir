fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `.numeric_version` = r;
    st `is.na` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg integer:cls, reg r2:V, reg list:cls, reg r3:V, reg l:*, reg c:L, reg r5:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg value1:*, reg value2:V, reg ___:cls, reg r8:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    l = ld x;
    c = `is.object`(l);
    if c then L7() else L8(r1, l);
  L2():
    integer = ldf integer;
    check L4() else D0();
  L3():
    r = dyn base(<lang integer()>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(dx1):
    st x = dx1;
    x1 = ld x;
    check L11() else D4();
  L4():
    r2 = dyn integer();
    check L5() else D1();
  L7():
    dr = tryDispatchBuiltin.0("[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(r1, dr);
  L8(r5, l2):
    value1 = ld value;
    check L10() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 8 [r5, l2, r1, value1];
  D4():
    deopt 12 [x1];
  L5():
    list = ldf list in base;
    r3 = dyn list(r2);
    check L6() else D2();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    value2 = force? value1;
    ___ = ldf `[<-` in base;
    r8 = dyn ___(l2, r1, value2);
    goto L1(r8);
  L11():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  D2():
    deopt 6 [r3];
  L6():
    goto L0(r3);
  }
}