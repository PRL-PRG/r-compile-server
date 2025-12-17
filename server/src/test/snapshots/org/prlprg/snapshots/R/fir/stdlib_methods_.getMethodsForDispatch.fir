fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4083244991;
    st `.getMethodsForDispatch` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4083244991(fdef) {
  (reg fdef:*) -+> V { var fdef:*, reg __:cls, reg r:V, reg r1:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r3:V, reg __1:cls, reg r4:V, reg r5:cls, reg ev:*, reg ev1:V, reg p1:p(V +), reg r7:V, reg c:L, reg __2:cls, reg r8:V, reg r9:cls, reg ev2:*, reg ev3:V, reg p2:p(V +), reg r11:V |
    mkenv;
    st fdef = fdef;
    __ = ldf `::`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn __("base", "environment");
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r3 = dyn r1(p);
    check L3() else D2();
  D2():
    deopt 7 [r3];
  L3():
    st ev = r3;
    __1 = ldf `::`;
    check L4() else D3();
  D3():
    deopt 10 [];
  L4():
    r4 = dyn __1("base", "exists");
    check L5() else D4();
  D4():
    deopt 13 [r4];
  L5():
    checkFun.0(r4);
    r5 = r4 as cls;
    p1 = prom<V +>{
      ev = ld ev;
      ev1 = force? ev;
      checkMissing(ev1);
      return ev1;
    };
    r7 = dyn r5[, envir](".Methods", p1);
    check L6() else D5();
  D5():
    deopt 18 [r7];
  L6():
    c = `as.logical`(r7);
    if c then L7() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L7():
    __2 = ldf `::`;
    check L8() else D6();
  D6():
    deopt 20 [];
  L8():
    r8 = dyn __2("base", "get");
    check L9() else D7();
  D7():
    deopt 23 [r8];
  L9():
    checkFun.0(r8);
    r9 = r8 as cls;
    p2 = prom<V +>{
      ev2 = ld ev;
      ev3 = force? ev2;
      checkMissing(ev3);
      return ev3;
    };
    r11 = dyn r9[, envir](".Methods", p2);
    check L10() else D8();
  D8():
    deopt 28 [r11];
  L10():
    popenv;
    return r11;
  }
}