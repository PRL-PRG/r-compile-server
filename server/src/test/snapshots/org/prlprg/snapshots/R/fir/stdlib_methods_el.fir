fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1415598160;
    st el = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1415598160(object, where) {
  (reg object:*, reg where:*) -+> V { var object:*, var where:*, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg where1:*, reg where2:V, reg __:cls, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r1:V |
    mkenv;
    st object = object;
    st where = where;
    object1 = ld object;
    check L2() else D0();
  D0():
    deopt 0 [object1];
  L2():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L3() else L4(object2);
  L0(dx1):
    c1 = `is.object`(dx1);
    if c1 then L7() else L8(dx1);
  L3():
    dr = tryDispatchBuiltin.1("[", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(object4):
    where1 = ld where;
    check L6() else D1();
  D1():
    deopt 2 [object4, where1];
  L1(dx5):
    popenv;
    return dx5;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    where2 = force? where1;
    __ = ldf `[` in base;
    r = dyn __(object4, where2);
    goto L0(r);
  L7():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(dr2);
  L8(dx3):
    __1 = ldf `[[` in base;
    r1 = dyn __1(dx3, 1);
    goto L1(r1);
  L9():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  }
}