fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner860501261;
    st `.get_S3_generics_in_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner860501261(env, nms) {
  (reg env:*, reg nms:*) -+> V { var env:*, var nms:*, reg nms_isMissing:L, reg nms_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nms1:*, reg nms2:V, reg c:V, reg c1:L, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg env1:*, reg env2:V, reg names:cls, reg r4:V, reg p:p(V +), reg r6:V, reg _in_:cls, reg nms3:*, reg nms4:V, reg p1:p(V +), reg r9:V, reg c2:L, reg character:cls, reg r10:V, reg Filter:cls, reg r11:cls, reg p2:p(V +), reg nms5:*, reg nms6:V, reg p3:p(V +), reg r14:V |
    mkenv;
    st env = env;
    nms_isMissing = missing.0(nms);
    if nms_isMissing then L0(NULL) else L0(nms);
  L0(nms_orDefault):
    st nms = nms_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L8() else L2();
  L5():
    nms1 = ld nms;
    check L7() else D0();
  L6():
    r = dyn base(<sym nms>);
    goto L1(r);
  D0():
    deopt 1 [nms1];
  L2():
    goto L3();
  L3():
    _in_ = ldf `%in%`;
    check L12() else D3();
  L7():
    nms2 = force? nms1;
    checkMissing(nms2);
    c = `==`(nms2, NULL);
    goto L1(c);
  L8():
    sort = ldf sort;
    check L9() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L9():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      names = ldf names in base;
      r4 = dyn names(env2);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym env>);
      goto L0(r2);
    };
    r6 = dyn sort(p);
    check L10() else D2();
  L12():
    p1 = prom<V +>{
      nms3 = ld nms;
      nms4 = force? nms3;
      checkMissing(nms4);
      return nms4;
    };
    r9 = dyn _in_(".no_S3_generics", p1);
    check L13() else D4();
  D2():
    deopt 7 [r6];
  D4():
    deopt 15 [r9];
  L10():
    st nms = r6;
    goto L3();
  L13():
    c2 = `as.logical`(r9);
    if c2 then L14() else L4();
  L4():
    Filter = ldf Filter;
    check L18() else D7();
  L14():
    character = ldf character;
    check L15() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 20 [];
  L15():
    r10 = dyn character();
    check L16() else D6();
  L18():
    p2 = prom<V +>{
      r11 = clos inner1384373858;
      return r11;
    };
    p3 = prom<V +>{
      nms5 = ld nms;
      nms6 = force? nms5;
      checkMissing(nms6);
      return nms6;
    };
    r14 = dyn Filter(p2, p3);
    check L19() else D8();
  D6():
    deopt 18 [r10];
  D8():
    deopt 23 [r14];
  L16():
    popenv;
    return r10;
  L19():
    popenv;
    return r14;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg _is_S3_generic:cls, reg f1:*, reg f2:V, reg p:p(V +), reg env:*, reg env1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st f = f;
    _is_S3_generic = ldf `.is_S3_generic`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r2 = dyn _is_S3_generic[, envir](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}