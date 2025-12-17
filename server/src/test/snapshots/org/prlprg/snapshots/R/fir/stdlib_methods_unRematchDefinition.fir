fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3939969715;
    st unRematchDefinition = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3939969715(definition) {
  (reg definition:*) -+> V { var definition:*, reg isRematched:cls, reg definition1:*, reg definition2:V, reg p:p(V +), reg r1:V, reg c:L, reg body:cls, reg definition3:*, reg definition4:V, reg p1:p(V +), reg r3:V, reg c1:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r7:V, reg definition5:*, reg definition6:V |
    mkenv;
    st definition = definition;
    isRematched = ldf isRematched;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      definition1 = ld definition;
      definition2 = force? definition1;
      checkMissing(definition2);
      return definition2;
    };
    r1 = dyn isRematched(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    c = `as.logical`(r1);
    if c then L6() else L0();
  L0():
    goto L3();
  L3():
    definition5 = ld definition;
    check L16() else D4();
  L6():
    body = ldf body;
    check L7() else D2();
  D2():
    deopt 5 [];
  D4():
    deopt 17 [definition5];
  L7():
    p1 = prom<V +>{
      definition3 = ld definition;
      definition4 = force? definition3;
      checkMissing(definition4);
      return definition4;
    };
    r3 = dyn body(p1);
    check L8() else D3();
  L16():
    definition6 = force? definition5;
    checkMissing(definition6);
    popenv;
    return definition6;
  D3():
    deopt 7 [r3];
  L8():
    c1 = `is.object`(r3);
    if c1 then L9() else L10(r3);
  L1(dx1):
    c2 = `is.object`(dx1);
    if c2 then L12() else L13(dx1);
  L9():
    dr = tryDispatchBuiltin.1("[[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(r5):
    __ = ldf `[[` in base;
    r6 = dyn __(r5, 2.0);
    goto L1(r6);
  L2(dx5):
    st definition = dx5;
    goto L3();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dr2);
  L13(dx3):
    __1 = ldf `[[` in base;
    r7 = dyn __1(dx3, 3.0);
    goto L2(r7);
  L14():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx4);
  }
}