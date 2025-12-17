fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner634092767;
    st MethodsListSelect = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner634092767(f, env, mlist, fEnv, finalDefault, evalArgs, useInherited, fdef, resetAllowed) {
  (reg f:*, reg env:*, reg mlist:*, reg fEnv:*, reg finalDefault:*, reg evalArgs:*, reg useInherited:*, reg fdef:*, reg resetAllowed:*) -+> V { var f:*, var env:*, var mlist:*, reg mlist_isMissing:L, reg mlist_orDefault:*, var fEnv:*, reg fEnv_isMissing:L, reg fEnv_orDefault:*, reg is:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg c:L, reg environment:cls, reg fdef3:*, reg fdef4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg baseenv:cls, reg r6:V, reg p2:p(V +), var finalDefault:*, reg finalDefault_isMissing:L, reg finalDefault_orDefault:*, reg finalDefaultMethod:cls, reg mlist1:*, reg mlist2:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), var evalArgs:*, reg evalArgs_isMissing:L, reg evalArgs_orDefault:*, var useInherited:*, reg useInherited_isMissing:L, reg useInherited_orDefault:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p5:p(V +), reg env1:*, reg env2:V, reg p6:p(V +), reg r13:V, reg p7:p(V +), var resetAllowed:*, reg resetAllowed_isMissing:L, reg resetAllowed_orDefault:*, reg _MlistDefunct:cls, reg r15:V |
    mkenv;
    st f = f;
    st env = env;
    mlist_isMissing = missing.0(mlist);
    if mlist_isMissing then L0(NULL) else L0(mlist);
  L0(mlist_orDefault):
    st mlist = mlist_orDefault;
    fEnv_isMissing = missing.0(fEnv);
    if fEnv_isMissing then L1() else L2(fEnv);
  L1():
    p2 = prom<V +>{
      is = ldf is;
      p = prom<V +>{
        fdef1 = ld fdef;
        fdef2 = force? fdef1;
        checkMissing(fdef2);
        return fdef2;
      };
      r1 = dyn is(p, "genericFunction");
      c = `as.logical`(r1);
      if c then L2() else L0();
    L0():
      sym = ldf baseenv;
      base = ldf baseenv in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L2():
      environment = ldf environment;
      p1 = prom<V +>{
        fdef3 = ld fdef;
        fdef4 = force? fdef3;
        checkMissing(fdef4);
        return fdef4;
      };
      r3 = dyn environment(p1);
      return r3;
    L1(r5):
      return r5;
    L4():
      baseenv = ldf baseenv in base;
      r6 = dyn baseenv();
      goto L1(r6);
    L5():
      r4 = dyn base();
      goto L1(r4);
    };
    goto L2(p2);
  L2(fEnv_orDefault):
    st fEnv = fEnv_orDefault;
    finalDefault_isMissing = missing.0(finalDefault);
    if finalDefault_isMissing then L3() else L4(finalDefault);
  L3():
    p4 = prom<V +>{
      finalDefaultMethod = ldf finalDefaultMethod;
      p3 = prom<V +>{
        mlist1 = ld mlist;
        mlist2 = force? mlist1;
        checkMissing(mlist2);
        return mlist2;
      };
      r9 = dyn finalDefaultMethod(p3);
      return r9;
    };
    goto L4(p4);
  L4(finalDefault_orDefault):
    st finalDefault = finalDefault_orDefault;
    evalArgs_isMissing = missing.0(evalArgs);
    if evalArgs_isMissing then L5(TRUE) else L5(evalArgs);
  L5(evalArgs_orDefault):
    st evalArgs = evalArgs_orDefault;
    useInherited_isMissing = missing.0(useInherited);
    if useInherited_isMissing then L6(TRUE) else L6(useInherited);
  L6(useInherited_orDefault):
    st useInherited = useInherited_orDefault;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L7() else L8(fdef);
  L7():
    p7 = prom<V +>{
      getGeneric = ldf getGeneric;
      p5 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p6 = prom<V +>{
        env1 = ld env;
        env2 = force? env1;
        checkMissing(env2);
        return env2;
      };
      r13 = dyn getGeneric[, where](p5, p6);
      return r13;
    };
    goto L8(p7);
  L8(fdef_orDefault):
    st fdef = fdef_orDefault;
    resetAllowed_isMissing = missing.0(resetAllowed);
    if resetAllowed_isMissing then L9(TRUE) else L9(resetAllowed);
  L9(resetAllowed_orDefault):
    st resetAllowed = resetAllowed_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    r15 = dyn _MlistDefunct("MethodsListSelect()");
    check L11() else D1();
  D1():
    deopt 3 [r15];
  L11():
    popenv;
    return r15;
  }
}