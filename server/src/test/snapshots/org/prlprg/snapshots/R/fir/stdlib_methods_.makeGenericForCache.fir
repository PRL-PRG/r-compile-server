fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4083244991;
    st `.makeGenericForCache` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4083244991(fdef) {
  (reg fdef:*) -+> V { var fdef:*, reg fdef1:*, reg fdef2:V, reg environment:cls, reg fdef3:*, reg fdef4:V, reg p:p(V +), reg r1:V, reg lapply:cls, reg as_list:cls, reg ev:*, reg ev1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:cls, reg p3:p(V +), reg r7:V, reg list2env:cls, reg objs:*, reg objs1:V, reg p4:p(V +), reg parent_env:cls, reg ev2:*, reg ev3:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg l:*, reg environment__:cls, reg r13:V, reg value:*, reg value1:V |
    mkenv;
    st fdef = fdef;
    fdef1 = ld fdef;
    check L0() else D0();
  D0():
    deopt 0 [fdef1];
  L0():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    st value = fdef2;
    environment = ldf environment;
    check L1() else D1();
  D1():
    deopt 4 [];
  L1():
    p = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r1 = dyn environment(p);
    check L2() else D2();
  D2():
    deopt 6 [r1];
  L2():
    st ev = r1;
    lapply = ldf lapply;
    check L3() else D3();
  D3():
    deopt 9 [];
  L3():
    p2 = prom<V +>{
      as_list = ldf `as.list`;
      p1 = prom<V +>{
        ev = ld ev;
        ev1 = force? ev;
        checkMissing(ev1);
        return ev1;
      };
      r3 = dyn as_list[, `all.names`](p1, TRUE);
      return r3;
    };
    p3 = prom<V +>{
      r5 = clos inner1912617395;
      return r5;
    };
    r7 = dyn lapply(p2, p3);
    check L4() else D4();
  D4():
    deopt 12 [r7];
  L4():
    st objs = r7;
    list2env = ldf list2env;
    check L5() else D5();
  D5():
    deopt 15 [];
  L5():
    p4 = prom<V +>{
      objs = ld objs;
      objs1 = force? objs;
      checkMissing(objs1);
      return objs1;
    };
    p6 = prom<V +>{
      parent_env = ldf `parent.env`;
      p5 = prom<V +>{
        ev2 = ld ev;
        ev3 = force? ev2;
        checkMissing(ev3);
        return ev3;
      };
      r10 = dyn parent_env(p5);
      return r10;
    };
    r12 = dyn list2env[, hash, parent](p4, TRUE, p6);
    check L6() else D6();
  D6():
    deopt 21 [r12];
  L6():
    l = ld value;
    environment__ = ldf `environment<-`;
    check L7() else D7();
  D7():
    deopt 23 [r12, l, r12];
  L7():
    r13 = dyn environment__(l, NULL, r12);
    check L8() else D8();
  D8():
    deopt 25 [r12, r13];
  L8():
    st value = r13;
    value = ld value;
    check L9() else D9();
  D9():
    deopt 27 [value];
  L9():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg obj1:*, reg obj2:V, reg is_environment:cls, reg r2:V, reg c:L, reg _copyEnv:cls, reg obj3:*, reg obj4:V, reg p:p(V +), reg r4:V, reg obj5:*, reg obj6:V |
    mkenv;
    st obj = obj;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    obj1 = ld obj;
    check L5() else D0();
  L4():
    r = dyn base(<sym obj>);
    goto L0(r);
  D0():
    deopt 2 [obj1];
  L1():
    goto L2();
  L2():
    obj5 = ld obj;
    check L11() else D4();
  L5():
    obj2 = force? obj1;
    checkMissing(obj2);
    is_environment = ldf `is.environment` in base;
    r2 = dyn is_environment(obj2);
    check L6() else D1();
  L7():
    _copyEnv = ldf `.copyEnv`;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 13 [obj5];
  L6():
    goto L0(r2);
  L8():
    p = prom<V +>{
      obj3 = ld obj;
      obj4 = force? obj3;
      checkMissing(obj4);
      return obj4;
    };
    r4 = dyn _copyEnv(p);
    check L9() else D3();
  L11():
    obj6 = force? obj5;
    checkMissing(obj6);
    popenv;
    return obj6;
  D3():
    deopt 9 [r4];
  L9():
    st obj = r4;
    goto L2();
  }
}