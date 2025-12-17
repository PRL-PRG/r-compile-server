fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `elNamed<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg value1:*, reg value2:V, reg l:*, reg c:L, reg value4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg ____:cls, reg r:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    value1 = ld value;
    check L1() else D0();
  D0():
    deopt 0 [value1];
  L1():
    value2 = force? value1;
    checkMissing(value2);
    l = ld x;
    c = `is.object`(l);
    if c then L2() else L3(value2, l);
  L0(dx1):
    st x = dx1;
    x1 = ld x;
    check L6() else D2();
  L2():
    dr = tryDispatchBuiltin.0("[[<-", l, value2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(value2, dr);
  L3(value4, l2):
    name1 = ld name;
    check L5() else D1();
  D1():
    deopt 3 [value4, l2, value2, name1];
  D2():
    deopt 7 [x1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    name2 = force? name1;
    ____ = ldf `[[<-` in base;
    r = dyn ____(l2, value2, name2);
    goto L0(r);
  L6():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}