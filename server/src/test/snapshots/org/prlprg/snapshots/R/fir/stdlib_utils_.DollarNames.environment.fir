fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3204389973;
    st `.DollarNames.environment` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3204389973(x, pattern) {
  (reg x:*, reg pattern:*) -+> V { var x:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r1:V, reg r2:V, reg c2:L, reg ls:cls, reg x1:*, reg x2:V, reg p:p(V +), reg pattern1:*, reg pattern2:V, reg p1:p(V +), reg r5:V, reg findMatches:cls, reg pattern3:*, reg pattern4:V, reg p2:p(V +), reg ls1:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st x = x;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    _CompletionEnv = ld `.CompletionEnv`;
    check L3() else D0();
  D0():
    deopt 0 [_CompletionEnv];
  L3():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c = `is.object`(_CompletionEnv1);
    if c then L5() else L6(_CompletionEnv1);
  L4(dx1):
    c1 = `is.object`(dx1);
    if c1 then L8() else L9(dx1);
  L5():
    dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(_CompletionEnv3):
    r = `$`(_CompletionEnv3, <sym settings>);
    goto L4(r);
  L1(dx5):
    r2 = `!`(dx5);
    c2 = `as.logical`(r2);
    if c2 then L11() else L2();
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(dr2);
  L9(dx3):
    __ = ldf `[[` in base;
    r1 = dyn __(dx3, "fuzzy");
    goto L1(r1);
  L2():
    findMatches = ldf findMatches;
    check L15() else D3();
  L10():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  L11():
    ls = ldf ls;
    check L12() else D1();
  D1():
    deopt 8 [];
  D3():
    deopt 16 [];
  L12():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    r5 = dyn ls[, `all.names`, pattern](p, TRUE, p1);
    check L13() else D2();
  L15():
    p2 = prom<V +>{
      pattern3 = ld pattern;
      pattern4 = force? pattern3;
      checkMissing(pattern4);
      return pattern4;
    };
    p4 = prom<V +>{
      ls1 = ldf ls;
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r8 = dyn ls1[, `all.names`](p3, TRUE);
      return r8;
    };
    r10 = dyn findMatches(p2, p4);
    check L16() else D4();
  D2():
    deopt 14 [r5];
  D4():
    deopt 19 [r10];
  L13():
    popenv;
    return r5;
  L16():
    popenv;
    return r10;
  }
}