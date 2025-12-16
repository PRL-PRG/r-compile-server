fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-750572641`;
    st getElement = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-750572641`(object, name) {
  (reg object:*, reg name:*) -+> V { var object:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg isS4:cls, reg r2:V, reg c:L, reg __:cls, reg r3:V, reg r4:cls, reg object3:*, reg object4:V, reg p:p(V +), reg name1:*, reg name2:V, reg p1:p(V +), reg r7:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name3:*, reg name4:V, reg __1:cls, reg r8:V |
    mkenv;
    st object = object;
    st name = name;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    object5 = ld object;
    check L12() else D5();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    isS4 = ldf isS4 in base;
    r2 = dyn isS4(object2);
    check L6() else D1();
  L7():
    __ = ldf `::`;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D5():
    deopt 15 [object5];
  L6():
    goto L0(r2);
  L8():
    r3 = dyn __("methods", "slot");
    check L9() else D3();
  L12():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L13() else L14(object6);
  D3():
    deopt 10 [r3];
  L2(dx1):
    popenv;
    return dx1;
  L9():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p1 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r7 = dyn r4(p, p1);
    check L10() else D4();
  L13():
    dr = tryDispatchBuiltin.1("[[", object6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(object8):
    name3 = ld name;
    check L16() else D6();
  D4():
    deopt 14 [r7];
  D6():
    deopt 17 [object8, name3];
  L10():
    popenv;
    return r7;
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L16():
    name4 = force? name3;
    __1 = ldf `[[` in base;
    r8 = dyn __1(object6, name4, TRUE);
    goto L2(r8);
  }
}