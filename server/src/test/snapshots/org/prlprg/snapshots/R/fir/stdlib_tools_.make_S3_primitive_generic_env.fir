fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1959564261;
    st `.make_S3_primitive_generic_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1959564261(parent, fixup) {
  (reg parent:*, reg fixup:*) -+> V { var parent:*, reg parent_isMissing:L, reg parent_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var fixup:*, reg fixup_isMissing:L, reg fixup_orDefault:*, reg list2env:cls, reg as_list:cls, reg __:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg parent1:*, reg parent2:V, reg p3:p(V +), reg r7:V, reg fixup1:*, reg fixup2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg get:cls, reg f:*, reg f1:V, reg p4:p(V +), reg env:*, reg env1:V, reg p5:p(V +), reg r13:V, reg alist:cls, reg r14:V, reg l1:*, reg formals__:cls, reg r15:V, reg assign:cls, reg f2:*, reg f3:V, reg p6:p(V +), reg fx:*, reg fx1:V, reg p7:p(V +), reg env2:*, reg env3:V, reg p8:p(V +), reg r19:V, reg env4:*, reg env5:V |
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
    fixup_isMissing = missing.0(fixup);
    if fixup_isMissing then L2(FALSE) else L2(fixup);
  L2(fixup_orDefault):
    st fixup = fixup_orDefault;
    list2env = ldf list2env;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p2 = prom<V +>{
      as_list = ldf `as.list`;
      p1 = prom<V +>{
        __ = ldf `::`;
        r2 = dyn __("base", ".GenericArgsEnv");
        return r2;
      };
      r4 = dyn as_list[, `all.names`](p1, TRUE);
      return r4;
    };
    p3 = prom<V +>{
      parent1 = ld parent;
      parent2 = force? parent1;
      checkMissing(parent2);
      return parent2;
    };
    r7 = dyn list2env[, hash, parent](p2, TRUE, p3);
    check L9() else D1();
  D1():
    deopt 7 [r7];
  L9():
    st env = r7;
    fixup1 = ld fixup;
    check L10() else D2();
  D2():
    deopt 9 [fixup1];
  L10():
    fixup2 = force? fixup1;
    checkMissing(fixup2);
    c = `as.logical`(fixup2);
    if c then L11() else L3();
  L3():
    goto L7();
  L7():
    env4 = ld env;
    check L25() else D12();
  L11():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  D12():
    deopt 61 [env4];
  L4(r9):
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L5(i);
  L12():
    c1 = ldf c in base;
    r10 = dyn c1("+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "==", "!=", "<", "<=", ">=", ">");
    check L14() else D3();
  L13():
    r8 = dyn base("+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "==", "!=", "<", "<=", ">=", ">");
    goto L4(r8);
  L25():
    env5 = force? env4;
    checkMissing(env5);
    popenv;
    return env5;
  D3():
    deopt 29 [r10];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L15() else L6();
  L14():
    goto L4(r10);
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    get = ldf get;
    check L16() else D4();
  L15():
    goto L7();
  D4():
    deopt 31 [i2];
  L16():
    p4 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p5 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r13 = dyn get[, envir](p4, p5);
    check L17() else D5();
  D5():
    deopt 35 [i2, r13];
  L17():
    st fx = r13;
    alist = ldf alist;
    check L18() else D6();
  D6():
    deopt 38 [i2];
  L18():
    r14 = dyn alist[x, y](<missing>, <missing>);
    check L19() else D7();
  D7():
    deopt 43 [i2, r14];
  L19():
    l1 = ld fx;
    formals__ = ldf `formals<-`;
    check L20() else D8();
  D8():
    deopt 45 [i2, r14, l1, r14];
  L20():
    r15 = dyn formals__(l1, NULL, r14);
    check L21() else D9();
  D9():
    deopt 47 [i2, r14, r15];
  L21():
    st fx = r15;
    assign = ldf assign;
    check L22() else D10();
  D10():
    deopt 50 [i2];
  L22():
    p6 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p7 = prom<V +>{
      fx = ld fx;
      fx1 = force? fx;
      checkMissing(fx1);
      return fx1;
    };
    p8 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r19 = dyn assign[, , envir](p6, p7, p8);
    check L23() else D11();
  D11():
    deopt 55 [i2, r19];
  L23():
    goto L5(i2);
  }
}