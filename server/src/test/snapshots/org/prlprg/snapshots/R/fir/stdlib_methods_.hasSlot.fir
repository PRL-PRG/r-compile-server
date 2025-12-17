fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1396911006;
    st `.hasSlot` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1396911006(object, name) {
  (reg object:*, reg name:*) -+> V { var object:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_hasSlot:*, reg C_R_hasSlot1:V, reg object1:*, reg object2:V, reg name1:*, reg name2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st object = object;
    st name = name;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_R_hasSlot = ld C_R_hasSlot;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_R_hasSlot>, <sym object>, <sym name>);
    goto L0(r);
  D0():
    deopt 1 [C_R_hasSlot];
  L3():
    C_R_hasSlot1 = force? C_R_hasSlot;
    checkMissing(C_R_hasSlot1);
    object1 = ld object;
    check L4() else D1();
  D1():
    deopt 2 [C_R_hasSlot1, object1];
  L4():
    object2 = force? object1;
    checkMissing(object2);
    name1 = ld name;
    check L5() else D2();
  D2():
    deopt 3 [C_R_hasSlot1, object2, name1];
  L5():
    name2 = force? name1;
    checkMissing(name2);
    vargs = dots[object2, name2];
    r2 = `.Call`(C_R_hasSlot1, vargs, <missing>);
    goto L0(r2);
  }
}