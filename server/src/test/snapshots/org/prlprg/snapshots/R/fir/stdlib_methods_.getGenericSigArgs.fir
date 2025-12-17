fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2438678821;
    st `.getGenericSigArgs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2438678821(fdef, env, check) {
  (reg fdef:*, reg env:*, reg check:*) -+> V { var fdef:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var check:*, reg check_isMissing:L, reg check_orDefault:*, reg check1:*, reg check2:V, reg c:L, reg c2:V, reg exists:cls, reg env1:*, reg env2:V, reg p2:p(V +), reg r4:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg _setupMethodsTables:cls, reg fdef3:*, reg fdef4:V, reg p3:p(V +), reg r7:V, reg get:cls, reg env3:*, reg env4:V, reg p4:p(V +), reg r10:V, reg get1:cls, reg env5:*, reg env6:V, reg p5:p(V +), reg r12:V, reg n:*, reg n1:V, reg l:*, reg length__:cls, reg r13:V, reg args:*, reg args1:V |
    mkenv;
    st fdef = fdef;
    env_isMissing = missing.0(env);
    if env_isMissing then L0() else L1(env);
  L0():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        fdef1 = ld fdef;
        fdef2 = force? fdef1;
        checkMissing(fdef2);
        return fdef2;
      };
      r1 = dyn environment(p);
      return r1;
    };
    goto L1(p1);
  L1(env_orDefault):
    st env = env_orDefault;
    check_isMissing = missing.0(check);
    if check_isMissing then L2(TRUE) else L2(check);
  L2(check_orDefault):
    st check = check_orDefault;
    check1 = ld check;
    check L6() else D0();
  D0():
    deopt 0 [check1];
  L6():
    check2 = force? check1;
    checkMissing(check2);
    c = `as.logical`(check2);
    if c then L7() else L3(c);
  L3(c2):
    c6 = `as.logical`(c2);
    if c6 then L11() else L4();
  L7():
    exists = ldf exists;
    check L8() else D1();
  D1():
    deopt 3 [c];
  L4():
    goto L5();
  L5():
    get = ldf get;
    check L15() else D5();
  L8():
    p2 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r4 = dyn exists[, envir, inherits](".SigLength", p2, FALSE);
    check L9() else D2();
  L11():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L12() else D3();
  D2():
    deopt 9 [c, r4];
  D3():
    deopt 13 [];
  D5():
    deopt 19 [];
  L9():
    r5 = `!`(r4);
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L3(c4);
  L12():
    p3 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r7 = dyn _setupMethodsTables(p3);
    check L13() else D4();
  L15():
    p4 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r10 = dyn get[, envir](".SigLength", p4);
    check L16() else D6();
  D4():
    deopt 15 [r7];
  D6():
    deopt 23 [r10];
  L13():
    goto L5();
  L16():
    st n = r10;
    get1 = ldf get;
    check L17() else D7();
  D7():
    deopt 26 [];
  L17():
    p5 = prom<V +>{
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      return env6;
    };
    r12 = dyn get1[, envir](".SigArgs", p5);
    check L18() else D8();
  D8():
    deopt 30 [r12];
  L18():
    st args = r12;
    n = ld n;
    check L19() else D9();
  D9():
    deopt 32 [n];
  L19():
    n1 = force? n;
    checkMissing(n1);
    l = ld args;
    length__ = ldf `length<-`;
    check L20() else D10();
  D10():
    deopt 35 [n1, l, n1];
  L20():
    r13 = dyn length__(l, NULL, n1);
    check L21() else D11();
  D11():
    deopt 37 [n1, r13];
  L21():
    st args = r13;
    args = ld args;
    check L22() else D12();
  D12():
    deopt 39 [args];
  L22():
    args1 = force? args;
    checkMissing(args1);
    popenv;
    return args1;
  }
}