fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `env.profile` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg env_profile:cls, reg r2:V |
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
    r = dyn base(<lang env.profile(env)>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  L3():
    env2 = force? env1;
    checkMissing(env2);
    env_profile = ldf `env.profile` in base;
    r2 = dyn env_profile(env2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}