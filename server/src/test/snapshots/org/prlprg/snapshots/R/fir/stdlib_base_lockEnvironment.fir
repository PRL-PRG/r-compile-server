fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner27112593;
    st lockEnvironment = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner27112593(env, bindings) {
  (reg env:*, reg bindings:*) -+> V { var env:*, var bindings:*, reg bindings_isMissing:L, reg bindings_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg bindings1:*, reg bindings2:V, reg lockEnvironment:cls, reg r2:V |
    mkenv;
    st env = env;
    bindings_isMissing = missing.0(bindings);
    if bindings_isMissing then L0(FALSE) else L0(bindings);
  L0(bindings_orDefault):
    st bindings = bindings_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    env1 = ld env;
    check L4() else D0();
  L3():
    r = dyn base(<lang lockEnvironment(env, bindings)>);
    goto L1(r);
  D0():
    deopt 2 [env1];
  L4():
    env2 = force? env1;
    checkMissing(env2);
    bindings1 = ld bindings;
    check L5() else D1();
  D1():
    deopt 4 [bindings1];
  L5():
    bindings2 = force? bindings1;
    checkMissing(bindings2);
    lockEnvironment = ldf lockEnvironment in base;
    r2 = dyn lockEnvironment(env2, bindings2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}