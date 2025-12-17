fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner75665465;
    st `.make_S3_group_generic_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner75665465(parent) {
  (reg parent:*) -+> V { var parent:*, reg parent_isMissing:L, reg parent_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg new_env:cls, reg parent1:*, reg parent2:V, reg p1:p(V +), reg r3:V, reg assign:cls, reg r4:cls, reg p2:p(V +), reg env:*, reg env1:V, reg p3:p(V +), reg r7:V, reg assign1:cls, reg r8:cls, reg p4:p(V +), reg env2:*, reg env3:V, reg p5:p(V +), reg r11:V, reg assign2:cls, reg r12:cls, reg p6:p(V +), reg env4:*, reg env5:V, reg p7:p(V +), reg r15:V, reg assign3:cls, reg r16:cls, reg p8:p(V +), reg env6:*, reg env7:V, reg p9:p(V +), reg r19:V, reg assign4:cls, reg r20:cls, reg p10:p(V +), reg env8:*, reg env9:V, reg p11:p(V +), reg r23:V, reg env10:*, reg env11:V |
    mkenv;
    parent_isMissing = missing.0(parent);
    if parent_isMissing then L0() else L1(parent);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(parent_orDefault):
    st parent = parent_orDefault;
    new_env = ldf `new.env`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      parent1 = ld parent;
      parent2 = force? parent1;
      checkMissing(parent2);
      return parent2;
    };
    r3 = dyn new_env[parent](p1);
    check L3() else D1();
  D1():
    deopt 4 [r3];
  L3():
    st env = r3;
    assign = ldf assign;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p2 = prom<V +>{
      r4 = clos inner2044426018;
      return r4;
    };
    p3 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r7 = dyn assign[, , envir]("Math", p2, p3);
    check L5() else D3();
  D3():
    deopt 12 [r7];
  L5():
    assign1 = ldf assign;
    check L6() else D4();
  D4():
    deopt 14 [];
  L6():
    p4 = prom<V +>{
      r8 = clos inner4284372013;
      return r8;
    };
    p5 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r11 = dyn assign1[, , envir]("Ops", p4, p5);
    check L7() else D5();
  D5():
    deopt 19 [r11];
  L7():
    assign2 = ldf assign;
    check L8() else D6();
  D6():
    deopt 21 [];
  L8():
    p6 = prom<V +>{
      r12 = clos inner799576941;
      return r12;
    };
    p7 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r15 = dyn assign2[, , envir]("matrixOps", p6, p7);
    check L9() else D7();
  D7():
    deopt 26 [r15];
  L9():
    assign3 = ldf assign;
    check L10() else D8();
  D8():
    deopt 28 [];
  L10():
    p8 = prom<V +>{
      r16 = clos inner4129521850;
      return r16;
    };
    p9 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r19 = dyn assign3[, , envir]("Summary", p8, p9);
    check L11() else D9();
  D9():
    deopt 33 [r19];
  L11():
    assign4 = ldf assign;
    check L12() else D10();
  D10():
    deopt 35 [];
  L12():
    p10 = prom<V +>{
      r20 = clos inner2148457334;
      return r20;
    };
    p11 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r23 = dyn assign4[, , envir]("Complex", p10, p11);
    check L13() else D11();
  D11():
    deopt 40 [r23];
  L13():
    env10 = ld env;
    check L14() else D12();
  D12():
    deopt 41 [env10];
  L14():
    env11 = force? env10;
    checkMissing(env11);
    popenv;
    return env11;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("Math");
    goto L0(r2);
  L2():
    r = dyn base("Math");
    goto L0(r);
  }
}
fun inner4284372013(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("Ops");
    goto L0(r2);
  L2():
    r = dyn base("Ops");
    goto L0(r);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("matrixOps");
    goto L0(r2);
  L2():
    r = dyn base("matrixOps");
    goto L0(r);
  }
}
fun inner4129521850(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st `...` = ddd;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("Summary");
    goto L1(r2);
  L3():
    r = dyn base("Summary");
    goto L1(r);
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st z = z;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("Complex");
    goto L0(r2);
  L2():
    r = dyn base("Complex");
    goto L0(r);
  }
}