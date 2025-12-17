fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3457772070;
    st `.find_owner_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3457772070(v, env, last, default) {
  (reg v:*, reg env:*, reg last:*, reg default:*) -+> V { var v:*, var env:*, var last:*, reg last_isMissing:L, reg last_orDefault:*, var default:*, reg default_isMissing:L, reg default_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg last1:*, reg last2:V, reg identical:cls, reg r2:V, reg r3:V, reg c:L, reg exists:cls, reg v1:*, reg v2:V, reg p:p(V +), reg env3:*, reg env4:V, reg p1:p(V +), reg r6:V, reg c1:L, reg env5:*, reg env6:V, reg parent_env:cls, reg env7:*, reg env8:V, reg p2:p(V +), reg r10:V, reg default1:*, reg default2:V |
    mkenv;
    st v = v;
    st env = env;
    last_isMissing = missing.0(last);
    if last_isMissing then L0(NA_LGL) else L0(last);
  L0(last_orDefault):
    st last = last_orDefault;
    default_isMissing = missing.0(default);
    if default_isMissing then L1(NA_LGL) else L1(default);
  L1(default_orDefault):
    st default = default_orDefault;
    goto L6();
  L6():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L12() else L3();
  L7():
    env1 = ld env;
    check L9() else D0();
  L8():
    r = dyn base(<sym env>, <sym last>);
    goto L2(r);
  D0():
    deopt 2 [env1];
  L3():
    default1 = ld default;
    check L22() else D8();
  L9():
    env2 = force? env1;
    checkMissing(env2);
    last1 = ld last;
    check L10() else D1();
  L12():
    exists = ldf exists;
    check L13() else D3();
  D1():
    deopt 4 [last1];
  D3():
    deopt 17 [];
  D8():
    deopt 35 [default1];
  L10():
    last2 = force? last1;
    checkMissing(last2);
    identical = ldf identical in base;
    r2 = dyn identical(env2, last2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L11() else D2();
  L13():
    p = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    p1 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r6 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L14() else D4();
  L22():
    default2 = force? default1;
    checkMissing(default2);
    popenv;
    return default2;
  D2():
    deopt 14 [r2];
  D4():
    deopt 23 [r6];
  L11():
    goto L2(r2);
  L14():
    c1 = `as.logical`(r6);
    if c1 then L15() else L4();
  L4():
    parent_env = ldf `parent.env`;
    check L19() else D6();
  L15():
    env5 = ld env;
    check L16() else D5();
  D5():
    deopt 24 [env5];
  D6():
    deopt 28 [];
  L16():
    env6 = force? env5;
    checkMissing(env6);
    popenv;
    return env6;
  L19():
    p2 = prom<V +>{
      env7 = ld env;
      env8 = force? env7;
      checkMissing(env8);
      return env8;
    };
    r10 = dyn parent_env(p2);
    check L20() else D7();
  D7():
    deopt 30 [r10];
  L20():
    st env = r10;
    goto L6();
  }
}