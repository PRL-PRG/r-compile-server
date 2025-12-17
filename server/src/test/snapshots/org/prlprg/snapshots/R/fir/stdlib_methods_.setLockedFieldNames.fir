fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner40256888;
    st `.setLockedFieldNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner40256888(def, value) {
  (reg def:*, reg value:*) -+> V { var def:*, var value:*, reg __:cls, reg r:V, reg value1:*, reg value2:V, reg l:*, reg c:L, reg value4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _lockedFieldsMetaName:*, reg _lockedFieldsMetaName1:V, reg ____:cls, reg r1:V, reg value7:*, reg value8:V |
    mkenv;
    st def = def;
    st value = value;
    __ = ldf `@` in base;
    r = dyn __(<sym def>, <sym fieldPrototypes>);
    st env = r;
    value1 = ld value;
    check L1() else D0();
  D0():
    deopt 3 [value1];
  L1():
    value2 = force? value1;
    checkMissing(value2);
    l = ld env;
    c = `is.object`(l);
    if c then L2() else L3(value2, l);
  L0(dx1):
    st env = dx1;
    value7 = ld value;
    check L6() else D2();
  L2():
    dr = tryDispatchBuiltin.0("[[<-", l, value2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(value2, dr);
  L3(value4, l2):
    _lockedFieldsMetaName = ld `.lockedFieldsMetaName`;
    check L5() else D1();
  D1():
    deopt 6 [value4, l2, value2, _lockedFieldsMetaName];
  D2():
    deopt 10 [value7];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    _lockedFieldsMetaName1 = force? _lockedFieldsMetaName;
    ____ = ldf `[[<-` in base;
    r1 = dyn ____(l2, value2, _lockedFieldsMetaName1);
    goto L0(r1);
  L6():
    value8 = force? value7;
    checkMissing(value8);
    popenv;
    return value8;
  }
}