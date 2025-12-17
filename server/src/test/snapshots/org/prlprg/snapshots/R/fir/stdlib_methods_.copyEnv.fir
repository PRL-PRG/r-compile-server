fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.copyEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg list2env:cls, reg as_list:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg parent_env:cls, reg env3:*, reg env4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st env = env;
    list2env = ldf list2env;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_list = ldf `as.list`;
      p = prom<V +>{
        env1 = ld env;
        env2 = force? env1;
        checkMissing(env2);
        return env2;
      };
      r1 = dyn as_list[, `all.names`](p, TRUE);
      return r1;
    };
    p3 = prom<V +>{
      parent_env = ldf `parent.env`;
      p2 = prom<V +>{
        env3 = ld env;
        env4 = force? env3;
        checkMissing(env4);
        return env4;
      };
      r4 = dyn parent_env(p2);
      return r4;
    };
    r6 = dyn list2env[, hash, parent](p1, TRUE, p3);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    popenv;
    return r6;
  }
}