fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner144469624;
    st `.makeActiveBinding` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner144469624(thisField) {
  (reg thisField:*) -+> V { var thisField:*, reg is:cls, reg thisField1:*, reg thisField2:V, reg p:p(V +), reg r1:V, reg c:L, reg thisField3:*, reg thisField4:V, reg new:cls, reg thisField5:*, reg thisField6:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st thisField = thisField;
    is = ldf is;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      thisField1 = ld thisField;
      thisField2 = force? thisField1;
      checkMissing(thisField2);
      return thisField2;
    };
    r1 = dyn is(p, "activeBindingFunction");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    new = ldf new;
    check L6() else D3();
  L3():
    thisField3 = ld thisField;
    check L4() else D2();
  D2():
    deopt 5 [thisField3];
  D3():
    deopt 8 [];
  L4():
    thisField4 = force? thisField3;
    checkMissing(thisField4);
    popenv;
    return thisField4;
  L6():
    p1 = prom<V +>{
      thisField5 = ld thisField;
      thisField6 = force? thisField5;
      checkMissing(thisField6);
      return thisField6;
    };
    r3 = dyn new("activeBindingFunction", p1);
    check L7() else D4();
  D4():
    deopt 11 [r3];
  L7():
    popenv;
    return r3;
  }
}