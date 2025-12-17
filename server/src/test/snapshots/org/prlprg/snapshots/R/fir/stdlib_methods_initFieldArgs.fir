fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2040299639;
    st initFieldArgs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2040299639(`.Object`, classDef, selfEnv, `...`) {
  (reg _Object:*, reg classDef:*, reg selfEnv:*, reg ddd:dots) -+> V { var `.Object`:*, var classDef:*, var selfEnv:*, var `...`:dots?, reg initRefFields:cls, reg _Object1:*, reg _Object2:V, reg p:p(V +), reg classDef1:*, reg classDef2:V, reg p1:p(V +), reg selfEnv1:*, reg selfEnv2:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg list:cls, reg ddd1:dots?, reg r5:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st `.Object` = _Object;
    st classDef = classDef;
    st selfEnv = selfEnv;
    st `...` = ddd;
    initRefFields = ldf initRefFields;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _Object1 = ld `.Object`;
      _Object2 = force? _Object1;
      checkMissing(_Object2);
      return _Object2;
    };
    p1 = prom<V +>{
      classDef1 = ld classDef;
      classDef2 = force? classDef1;
      checkMissing(classDef2);
      return classDef2;
    };
    p2 = prom<V +>{
      selfEnv1 = ld selfEnv;
      selfEnv2 = force? selfEnv1;
      checkMissing(selfEnv2);
      return selfEnv2;
    };
    p3 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r5 = dyn list[`...`](ddd1);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym ...>);
      goto L0(r3);
    };
    r7 = dyn initRefFields(p, p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}