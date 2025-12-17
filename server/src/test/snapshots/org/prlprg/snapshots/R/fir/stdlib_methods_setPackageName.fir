fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner756214029;
    st setPackageName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner756214029(pkg, env) {
  (reg pkg:*, reg env:*) -+> V { var pkg:*, var env:*, reg assign:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st pkg = pkg;
    st env = env;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r2 = dyn assign[, , envir](".packageName", p, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}