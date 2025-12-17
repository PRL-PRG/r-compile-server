fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1441460260;
    st `slot<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1441460260(object, name, check, value) {
  (reg object:*, reg name:*, reg check:*, reg value:*) -+> V { var object:*, var name:*, var check:*, reg check_isMissing:L, reg check_orDefault:*, var value:*, reg check1:*, reg check2:V, reg c:L, reg checkSlotAssignment:cls, reg object1:*, reg object2:V, reg p:p(V +), reg name1:*, reg name2:V, reg p1:p(V +), reg value1:*, reg value2:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg C_R_set_slot:*, reg C_R_set_slot1:V, reg object3:*, reg object4:V, reg name3:*, reg name4:V, reg value3:*, reg value4:V, reg vargs:dots, reg r7:V |
    mkenv;
    st object = object;
    st name = name;
    check_isMissing = missing.0(check);
    if check_isMissing then L0(TRUE) else L0(check);
  L0(check_orDefault):
    st check = check_orDefault;
    st value = value;
    check1 = ld check;
    check L4() else D0();
  D0():
    deopt 0 [check1];
  L4():
    check2 = force? check1;
    checkMissing(check2);
    c = `as.logical`(check2);
    if c then L5() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L5():
    checkSlotAssignment = ldf checkSlotAssignment;
    check L6() else D1();
  D1():
    deopt 3 [];
  L3(r6):
    popenv;
    return r6;
  L6():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p1 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r3 = dyn checkSlotAssignment(p, p1, p2);
    check L7() else D2();
  L9():
    C_R_set_slot = ld C_R_set_slot;
    check L11() else D3();
  L10():
    r5 = dyn base(<sym C_R_set_slot>, <sym object>, <sym name>, <sym value>);
    goto L3(r5);
  D2():
    deopt 7 [r3];
  D3():
    deopt 12 [C_R_set_slot];
  L7():
    st value = r3;
    goto L2();
  L11():
    C_R_set_slot1 = force? C_R_set_slot;
    checkMissing(C_R_set_slot1);
    object3 = ld object;
    check L12() else D4();
  D4():
    deopt 13 [C_R_set_slot1, object3];
  L12():
    object4 = force? object3;
    checkMissing(object4);
    name3 = ld name;
    check L13() else D5();
  D5():
    deopt 14 [C_R_set_slot1, object4, name3];
  L13():
    name4 = force? name3;
    checkMissing(name4);
    value3 = ld value;
    check L14() else D6();
  D6():
    deopt 15 [C_R_set_slot1, object4, name4, value3];
  L14():
    value4 = force? value3;
    checkMissing(value4);
    vargs = dots[object4, name4, value4];
    r7 = `.Call`(C_R_set_slot1, vargs, <missing>);
    goto L3(r7);
  }
}