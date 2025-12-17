fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3253127715;
    st `.assignActionListNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3253127715(where) {
  (reg where:*) -+> V { var where:*, reg _actionMetaName:cls, reg r:V, reg exists:cls, reg actionListName:*, reg actionListName1:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r3:V, reg c:L, reg get:cls, reg actionListName2:*, reg actionListName3:V, reg p2:p(V +), reg where3:*, reg where4:V, reg p3:p(V +), reg r6:V, reg character:cls, reg r7:V |
    mkenv;
    st where = where;
    _actionMetaName = ldf `.actionMetaName`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn _actionMetaName("");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    st actionListName = r;
    exists = ldf exists;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p = prom<V +>{
      actionListName = ld actionListName;
      actionListName1 = force? actionListName;
      checkMissing(actionListName1);
      return actionListName1;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r3 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L4() else D3();
  D3():
    deopt 12 [r3];
  L4():
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    character = ldf character;
    check L9() else D6();
  L5():
    get = ldf get;
    check L6() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L6():
    p2 = prom<V +>{
      actionListName2 = ld actionListName;
      actionListName3 = force? actionListName2;
      checkMissing(actionListName3);
      return actionListName3;
    };
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r6 = dyn get[, envir](p2, p3);
    check L7() else D5();
  L9():
    r7 = dyn character();
    check L10() else D7();
  D5():
    deopt 18 [r6];
  D7():
    deopt 21 [r7];
  L7():
    popenv;
    return r6;
  L10():
    popenv;
    return r7;
  }
}