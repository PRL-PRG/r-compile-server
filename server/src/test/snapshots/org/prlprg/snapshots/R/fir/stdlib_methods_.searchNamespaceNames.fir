fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.searchNamespaceNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg paste0:cls, reg getNamespaceName:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st env = env;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      getNamespaceName = ldf getNamespaceName;
      p = prom<V +>{
        env1 = ld env;
        env2 = force? env1;
        checkMissing(env2);
        return env2;
      };
      r1 = dyn getNamespaceName(p);
      return r1;
    };
    r3 = dyn paste0("namespace:", p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}