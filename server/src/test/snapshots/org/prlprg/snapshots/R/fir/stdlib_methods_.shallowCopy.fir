fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2132611370;
    st `.shallowCopy` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2132611370(object, selfEnv) {
  (reg object:*, reg selfEnv:*) -+> V { var object:*, var selfEnv:*, reg list2env:cls, reg as_list:cls, reg selfEnv1:*, reg selfEnv2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg newEnv:*, reg newEnv1:V, reg l:*, reg attr__:cls, reg r4:V, reg assign:cls, reg object1:*, reg object2:V, reg p2:p(V +), reg newEnv2:*, reg newEnv3:V, reg p3:p(V +), reg r7:V, reg object3:*, reg object4:V |
    mkenv;
    st object = object;
    st selfEnv = selfEnv;
    list2env = ldf list2env;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_list = ldf `as.list`;
      p = prom<V +>{
        selfEnv1 = ld selfEnv;
        selfEnv2 = force? selfEnv1;
        checkMissing(selfEnv2);
        return selfEnv2;
      };
      r1 = dyn as_list[, `all.names`](p, TRUE);
      return r1;
    };
    r3 = dyn list2env[, hash](p1, TRUE);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    st newEnv = r3;
    newEnv = ld newEnv;
    check L2() else D2();
  D2():
    deopt 7 [newEnv];
  L2():
    newEnv1 = force? newEnv;
    checkMissing(newEnv1);
    l = ld object;
    attr__ = ldf `attr<-`;
    check L3() else D3();
  D3():
    deopt 10 [newEnv1, l, newEnv1];
  L3():
    r4 = dyn attr__(l, NULL, ".xData", newEnv1);
    check L4() else D4();
  D4():
    deopt 13 [newEnv1, r4];
  L4():
    st object = r4;
    assign = ldf assign;
    check L5() else D5();
  D5():
    deopt 16 [];
  L5():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p3 = prom<V +>{
      newEnv2 = ld newEnv;
      newEnv3 = force? newEnv2;
      checkMissing(newEnv3);
      return newEnv3;
    };
    r7 = dyn assign[, , envir](".self", p2, p3);
    check L6() else D6();
  D6():
    deopt 21 [r7];
  L6():
    object3 = ld object;
    check L7() else D7();
  D7():
    deopt 22 [object3];
  L7():
    object4 = force? object3;
    checkMissing(object4);
    popenv;
    return object4;
  }
}