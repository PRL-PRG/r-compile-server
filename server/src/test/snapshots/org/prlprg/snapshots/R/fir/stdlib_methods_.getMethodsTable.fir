fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4195457123;
    st `.getMethodsTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4195457123(fdef, env, check, inherited) {
  (reg fdef:*, reg env:*, reg check:*, reg inherited:*) -+> V { var fdef:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var check:*, reg check_isMissing:L, reg check_orDefault:*, var inherited:*, reg inherited_isMissing:L, reg inherited_orDefault:*, reg inherited1:*, reg inherited2:V, reg c:L, reg r3:S, reg check1:*, reg check2:V, reg c1:L, reg c3:V, reg exists:cls, reg name:*, reg name1:V, reg p2:p(V +), reg env1:*, reg env2:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c4:L, reg c5:V, reg c7:L, reg _setupMethodsTables:cls, reg fdef3:*, reg fdef4:V, reg p4:p(V +), reg r9:V, reg exists1:cls, reg name2:*, reg name3:V, reg p5:p(V +), reg env3:*, reg env4:V, reg p6:p(V +), reg r12:V, reg r13:V, reg c8:L, reg stop:cls, reg r14:V, reg r15:V, reg get:cls, reg name4:*, reg name5:V, reg p7:p(V +), reg env5:*, reg env6:V, reg p8:p(V +), reg r19:V |
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
    inherited_isMissing = missing.0(inherited);
    if inherited_isMissing then L3(FALSE) else L3(inherited);
  L3(inherited_orDefault):
    st inherited = inherited_orDefault;
    inherited1 = ld inherited;
    check L11() else D0();
  D0():
    deopt 0 [inherited1];
  L11():
    inherited2 = force? inherited1;
    checkMissing(inherited2);
    c = `as.logical`(inherited2);
    if c then L12() else L4();
  L4():
    goto L5(".MTable");
  L5(r3):
    st name = r3;
    check1 = ld check;
    check L14() else D1();
  L12():
    goto L5(".AllMTable");
  D1():
    deopt 7 [check1];
  L14():
    check2 = force? check1;
    checkMissing(check2);
    c1 = `as.logical`(check2);
    if c1 then L15() else L6(c1);
  L6(c3):
    c7 = `as.logical`(c3);
    if c7 then L19() else L7();
  L15():
    exists = ldf exists;
    check L16() else D2();
  D2():
    deopt 10 [c1];
  L7():
    goto L10();
  L10():
    get = ldf get;
    check L29() else D10();
  L16():
    p2 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    p3 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r6 = dyn exists[, envir, inherits](p2, p3, FALSE);
    check L17() else D3();
  L19():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L20() else D4();
  D3():
    deopt 16 [c1, r6];
  D4():
    deopt 20 [];
  D10():
    deopt 43 [];
  L17():
    r7 = `!`(r6);
    c4 = `as.logical`(r7);
    c5 = `&&`(c1, c4);
    goto L6(c5);
  L20():
    p4 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r9 = dyn _setupMethodsTables[, initialize](p4, TRUE);
    check L21() else D5();
  L29():
    p7 = prom<V +>{
      name4 = ld name;
      name5 = force? name4;
      checkMissing(name5);
      return name5;
    };
    p8 = prom<V +>{
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      return env6;
    };
    r19 = dyn get[, envir](p7, p8);
    check L30() else D11();
  D5():
    deopt 24 [r9];
  D11():
    deopt 47 [r19];
  L21():
    exists1 = ldf exists;
    check L22() else D6();
  L30():
    popenv;
    return r19;
  D6():
    deopt 26 [];
  L22():
    p5 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    p6 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r12 = dyn exists1[, envir, inherits](p5, p6, FALSE);
    check L23() else D7();
  D7():
    deopt 32 [r12];
  L23():
    r13 = `!`(r12);
    c8 = `as.logical`(r13);
    if c8 then L24() else L8();
  L8():
    goto L9(NULL);
  L9(r15):
    goto L10();
  L24():
    stop = ldf stop;
    check L25() else D8();
  D8():
    deopt 35 [];
  L25():
    r14 = dyn stop("invalid methods table request");
    check L26() else D9();
  D9():
    deopt 37 [r14];
  L26():
    goto L9(r14);
  }
}