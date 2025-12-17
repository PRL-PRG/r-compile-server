fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1317922881;
    st `.getLockedFieldNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1317922881(def) {
  (reg def:*) -+> V { var def:*, reg __:cls, reg r:V, reg ____:cls, reg env:*, reg env1:V, reg c:L, reg env3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _lockedFieldsMetaName:*, reg _lockedFieldsMetaName1:V, reg __1:cls, reg r1:V, reg p:p(V +), reg character:cls, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st def = def;
    __ = ldf `@` in base;
    r = dyn __(<sym def>, <sym fieldPrototypes>);
    st env = r;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      c = `is.object`(env1);
      if c then L1() else L2(env1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", env1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(env3):
      _lockedFieldsMetaName = ld `.lockedFieldsMetaName`;
      _lockedFieldsMetaName1 = force? _lockedFieldsMetaName;
      __1 = ldf `[[` in base;
      r1 = dyn __1(env3, _lockedFieldsMetaName1);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      character = ldf character;
      r3 = dyn character();
      return r3;
    };
    r5 = dyn ____(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    popenv;
    return r5;
  }
}