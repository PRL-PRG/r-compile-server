fun main() {
  () -+> V { reg r:cls, reg packageName:cls, reg r1:V, reg packageName1:cls, reg environment:cls, reg mean:*, reg mean1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner1653757434;
    st packageName = r;
    packageName = ldf packageName;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn packageName();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    packageName1 = ldf packageName;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        mean = ld mean;
        mean1 = force? mean;
        checkMissing(mean1);
        return mean1;
      };
      r3 = dyn environment(p);
      return r3;
    };
    r5 = dyn packageName1(p1);
    check L3() else D3();
  D3():
    deopt 9 [r5];
  L3():
    popenv;
    return r5;
  }
}
fun inner1653757434(env) {
  (reg env:*) -+> V { var env:*, reg env_isMissing:L, reg env_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg env1:*, reg env2:V, reg is_environment:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg topenv:cls, reg env3:*, reg env4:V, reg p1:p(V +), reg r9:V, reg ____:cls, reg get0:cls, reg env5:*, reg env6:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg env7:*, reg env8:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg identical:cls, reg r15:V, reg c1:L, reg p4:p(V +), reg r17:V |
    mkenv;
    env_isMissing = missing.0(env);
    if env_isMissing then L0() else L1(env);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(env_orDefault):
    st env = env_orDefault;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L9() else L3();
  L5():
    env1 = ld env;
    check L7() else D0();
  L6():
    r2 = dyn base(<sym env>);
    goto L2(r2);
  D0():
    deopt 2 [env1];
  L3():
    goto L4();
  L4():
    topenv = ldf topenv;
    check L13() else D4();
  L7():
    env2 = force? env1;
    checkMissing(env2);
    is_environment = ldf `is.environment` in base;
    r4 = dyn is_environment(env2);
    check L8() else D1();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L8():
    goto L2(r4);
  L10():
    r6 = dyn stop("'env' must be an environment");
    check L11() else D3();
  L13():
    p1 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r9 = dyn topenv(p1);
    check L14() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 16 [r9];
  L11():
    goto L4();
  L14():
    st env = r9;
    ____ = ldf `%||%`;
    check L15() else D6();
  D6():
    deopt 19 [];
  L15():
    p3 = prom<V +>{
      get0 = ldf get0;
      p2 = prom<V +>{
        env5 = ld env;
        env6 = force? env5;
        checkMissing(env6);
        return env6;
      };
      r11 = dyn get0[, envir, inherits](".packageName", p2, FALSE);
      return r11;
    };
    p4 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r14):
      c1 = `as.logical`(r14);
      if c1 then L4() else L1();
    L2():
      env7 = ld env;
      env8 = force? env7;
      checkMissing(env8);
      _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
      _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
      checkMissing(_BaseNamespaceEnv1);
      identical = ldf identical in base;
      r15 = dyn identical(env8, _BaseNamespaceEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r15);
    L3():
      r13 = dyn base1(<sym env>, <sym .BaseNamespaceEnv>);
      goto L0(r13);
    L1():
      invisible.0();
      return NULL;
    L4():
      return "base";
    };
    r17 = dyn ____(p3, p4);
    check L16() else D7();
  D7():
    deopt 22 [r17];
  L16():
    popenv;
    return r17;
  }
}