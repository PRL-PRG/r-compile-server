fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st setPackageSlot = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg value1:*, reg value2:V, reg l:*, reg packageSlot__:cls, reg r:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    st value = value;
    value1 = ld value;
    check L0() else D0();
  D0():
    deopt 0 [value1];
  L0():
    value2 = force? value1;
    checkMissing(value2);
    l = ld x;
    packageSlot__ = ldf `packageSlot<-`;
    check L1() else D1();
  D1():
    deopt 3 [value2, l, value2];
  L1():
    r = dyn packageSlot__(l, NULL, value2);
    check L2() else D2();
  D2():
    deopt 5 [value2, r];
  L2():
    st x = r;
    x1 = ld x;
    check L3() else D3();
  D3():
    deopt 7 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}