fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418102221;
    st `.classDefIsLocked` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418102221(classDef) {
  (reg classDef:*) -+> V { var classDef:*, reg classMetaName:cls, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg _NamespaceOrEnvironment:cls, reg __1:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg env:*, reg env1:V, reg is_environment:cls, reg r8:V, reg c:L, reg c2:V, reg exists:cls, reg what:*, reg what1:V, reg p2:p(V +), reg env2:*, reg env3:V, reg p3:p(V +), reg r11:V, reg c3:L, reg c4:V, reg c6:L, reg c8:V, reg bindingIsLocked:cls, reg what2:*, reg what3:V, reg p4:p(V +), reg env4:*, reg env5:V, reg p5:p(V +), reg r14:V, reg c9:L, reg c10:V |
    mkenv;
    st classDef = classDef;
    classMetaName = ldf classMetaName;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym classDef>, <sym className>);
      return r;
    };
    r2 = dyn classMetaName(p);
    check L4() else D1();
  D1():
    deopt 3 [r2];
  L4():
    st what = r2;
    _NamespaceOrEnvironment = ldf `.NamespaceOrEnvironment`;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p1 = prom<V +>{
      __1 = ldf `@` in base;
      r3 = dyn __1(<sym classDef>, <sym package>);
      return r3;
    };
    r5 = dyn _NamespaceOrEnvironment(p1);
    check L6() else D3();
  D3():
    deopt 8 [r5];
  L6():
    st env = r5;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r7):
    c = `as.logical`(r7);
    if c then L11() else L1(c);
  L7():
    env = ld env;
    check L9() else D4();
  L8():
    r6 = dyn base(<sym env>);
    goto L0(r6);
  D4():
    deopt 12 [env];
  L1(c2):
    c6 = `as.logical`(c2);
    if c6 then L15() else L2(c6);
  L9():
    env1 = force? env;
    checkMissing(env1);
    is_environment = ldf `is.environment` in base;
    r8 = dyn is_environment(env1);
    check L10() else D5();
  L11():
    exists = ldf exists;
    check L12() else D6();
  D5():
    deopt 15 [r8];
  D6():
    deopt 17 [c];
  L2(c8):
    popenv;
    return c8;
  L10():
    goto L0(r8);
  L12():
    p2 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p3 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r11 = dyn exists[, envir, inherits](p2, p3, FALSE);
    check L13() else D7();
  L15():
    bindingIsLocked = ldf bindingIsLocked;
    check L16() else D8();
  D7():
    deopt 23 [c, r11];
  D8():
    deopt 26 [c6];
  L13():
    c3 = `as.logical`(r11);
    c4 = `&&`(c, c3);
    goto L1(c4);
  L16():
    p4 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p5 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r14 = dyn bindingIsLocked(p4, p5);
    check L17() else D9();
  D9():
    deopt 29 [c6, r14];
  L17():
    c9 = `as.logical`(r14);
    c10 = `&&`(c6, c9);
    goto L2(c10);
  }
}