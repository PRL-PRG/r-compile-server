fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner769234730;
    st environmentName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner769234730(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg environmentName:cls, reg r2:V |
    mkenv;
    st env = env;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    env1 = ld env;
    check L3() else D0();
  L2():
    r = dyn base(<lang environmentName(env)>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  L3():
    env2 = force? env1;
    checkMissing(env2);
    environmentName = ldf environmentName in base;
    r2 = dyn environmentName(env2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}