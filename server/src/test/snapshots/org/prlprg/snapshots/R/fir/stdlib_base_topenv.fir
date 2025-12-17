fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner32921296;
    st topenv = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner32921296(envir, matchThisEnv) {
  (reg envir:*, reg matchThisEnv:*) -+> V { var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var matchThisEnv:*, reg matchThisEnv_isMissing:L, reg matchThisEnv_orDefault:*, reg getOption:cls, reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg envir1:*, reg envir2:V, reg matchThisEnv1:*, reg matchThisEnv2:V, reg topenv:cls, reg r6:V |
    mkenv;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    matchThisEnv_isMissing = missing.0(matchThisEnv);
    if matchThisEnv_isMissing then L2() else L3(matchThisEnv);
  L2():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r2 = dyn getOption("topLevelEnvironment");
      return r2;
    };
    goto L3(p1);
  L3(matchThisEnv_orDefault):
    st matchThisEnv = matchThisEnv_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L4(r5):
    popenv;
    return r5;
  L5():
    envir1 = ld envir;
    check L7() else D0();
  L6():
    r4 = dyn base(<lang topenv(envir, matchThisEnv)>);
    goto L4(r4);
  D0():
    deopt 2 [envir1];
  L7():
    envir2 = force? envir1;
    checkMissing(envir2);
    matchThisEnv1 = ld matchThisEnv;
    check L8() else D1();
  D1():
    deopt 4 [matchThisEnv1];
  L8():
    matchThisEnv2 = force? matchThisEnv1;
    checkMissing(matchThisEnv2);
    topenv = ldf topenv in base;
    r6 = dyn topenv(envir2, matchThisEnv2);
    check L9() else D2();
  D2():
    deopt 7 [r6];
  L9():
    goto L4(r6);
  }
}