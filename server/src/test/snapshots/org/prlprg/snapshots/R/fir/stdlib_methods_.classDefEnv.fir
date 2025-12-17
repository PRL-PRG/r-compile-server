fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418102221;
    st `.classDefEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418102221(classDef) {
  (reg classDef:*) -+> V { var classDef:*, reg _requirePackage:cls, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st classDef = classDef;
    _requirePackage = ldf `.requirePackage`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym classDef>, <sym package>);
      return r;
    };
    r2 = dyn _requirePackage(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}