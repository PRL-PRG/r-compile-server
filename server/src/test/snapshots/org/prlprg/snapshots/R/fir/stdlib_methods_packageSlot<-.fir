fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner525648730;
    st `packageSlot<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner525648730(object, value) {
  (reg object:*, reg value:*) -+> V { var object:*, var value:*, reg value1:*, reg value2:V, reg l:*, reg attr__:cls, reg r:V, reg object1:*, reg object2:V |
    mkenv;
    st object = object;
    st value = value;
    value1 = ld value;
    check L0() else D0();
  D0():
    deopt 0 [value1];
  L0():
    value2 = force? value1;
    checkMissing(value2);
    l = ld object;
    attr__ = ldf `attr<-`;
    check L1() else D1();
  D1():
    deopt 3 [value2, l, value2];
  L1():
    r = dyn attr__(l, NULL, "package", value2);
    check L2() else D2();
  D2():
    deopt 6 [value2, r];
  L2():
    st object = r;
    object1 = ld object;
    check L3() else D3();
  D3():
    deopt 8 [object1];
  L3():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  }
}