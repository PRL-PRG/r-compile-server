fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner675217645;
    st `as.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner675217645(object, env) {
  (reg object:*, reg env:*) -+> V { var object:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg inherits:cls, reg r4:V, reg c:L, reg object3:*, reg object4:V, reg formula:cls, reg object5:*, reg object6:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg baseenv:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg environment:cls, reg rval:*, reg rval1:V, reg p3:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg baseenv1:cls, reg r17:V, reg identical:cls, reg r18:V, reg c1:L, reg c2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg c6:L, reg r20:V, reg missing:cls, reg r21:V, reg r22:V, reg c7:L, reg c8:V, reg c10:L, reg env1:*, reg env2:V, reg l:*, reg environment__:cls, reg r23:V, reg rval2:*, reg rval3:V |
    mkenv;
    st object = object;
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
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L2(r3):
    c = `as.logical`(r3);
    if c then L14() else L3();
  L10():
    object1 = ld object;
    check L12() else D0();
  L11():
    r2 = dyn base(<sym object>, "formula");
    goto L2(r2);
  D0():
    deopt 2 [object1];
  L3():
    formula = ldf formula;
    check L17() else D3();
  L12():
    object2 = force? object1;
    checkMissing(object2);
    inherits = ldf inherits in base;
    r4 = dyn inherits(object2, "formula", FALSE);
    check L13() else D1();
  L14():
    object3 = ld object;
    check L15() else D2();
  D1():
    deopt 7 [r4];
  D2():
    deopt 8 [object3];
  D3():
    deopt 11 [];
  L13():
    goto L2(r4);
  L15():
    object4 = force? object3;
    checkMissing(object4);
    popenv;
    return object4;
  L17():
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p2 = prom<V +>{
      sym1 = ldf baseenv;
      base1 = ldf baseenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      baseenv = ldf baseenv in base;
      r8 = dyn baseenv();
      goto L0(r8);
    L2():
      r6 = dyn base1();
      goto L0(r6);
    };
    r10 = dyn formula[, env](p1, p2);
    check L18() else D4();
  D4():
    deopt 15 [r10];
  L18():
    st rval = r10;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L4(r12):
    c1 = `as.logical`(r12);
    if c1 then L6(c1) else L27();
  L19():
    environment = ldf environment;
    check L21() else D5();
  L20():
    r11 = dyn base2(<lang environment(rval)>, <lang baseenv()>);
    goto L4(r11);
  D5():
    deopt 20 [];
  L6(c2):
    c10 = `as.logical`(c2);
    if c10 then L31() else L8();
  L21():
    p3 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      return rval1;
    };
    r14 = dyn environment(p3);
    check L22() else D6();
  L27():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  D6():
    deopt 22 [r14];
  L7(c6, r20):
    r22 = `!`(r20);
    c7 = `as.logical`(r22);
    c8 = `||`(c6, c7);
    goto L6(c8);
  L8():
    goto L9();
  L9():
    rval2 = ld rval;
    check L36() else D12();
  L22():
    sym3 = ldf baseenv;
    base3 = ldf baseenv in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L28():
    missing = ldf missing in base;
    r21 = dyn missing(<sym env>);
    goto L7(c1, r21);
  L29():
    r19 = dyn base4(<sym env>);
    goto L7(c1, r19);
  L31():
    env1 = ld env;
    check L32() else D9();
  D9():
    deopt 41 [env1];
  D12():
    deopt 50 [rval2];
  L5(r16):
    identical = ldf identical in base;
    r18 = dyn identical(r14, r16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L26() else D8();
  L23():
    baseenv1 = ldf baseenv in base;
    r17 = dyn baseenv1();
    check L25() else D7();
  L24():
    r15 = dyn base3();
    goto L5(r15);
  L32():
    env2 = force? env1;
    checkMissing(env2);
    l = ld rval;
    environment__ = ldf `environment<-`;
    check L33() else D10();
  L36():
    rval3 = force? rval2;
    checkMissing(rval3);
    popenv;
    return rval3;
  D7():
    deopt 26 [r17];
  D8():
    deopt 35 [r18];
  D10():
    deopt 44 [env2, l, env2];
  L25():
    goto L5(r17);
  L26():
    goto L4(r18);
  L33():
    r23 = dyn environment__(l, NULL, env2);
    check L34() else D11();
  D11():
    deopt 46 [env2, r23];
  L34():
    st rval = r23;
    goto L9();
  }
}