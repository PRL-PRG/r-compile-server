fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1003765932;
    st helpCompletions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1003765932(prefix, suffix) {
  (reg prefix:*, reg suffix:*) -+> V { var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var suffix:*, reg _in_:cls, reg prefix1:*, reg prefix2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg c1:L, reg character:cls, reg r6:V, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c2:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r10:V, reg c4:L, reg matchAvailableTopics:cls, reg prefix3:*, reg prefix4:V, reg p2:p(V +), reg suffix1:*, reg suffix2:V, reg p3:p(V +), reg r13:V, reg r14:V, reg normalCompletions:cls, reg suffix3:*, reg suffix4:V, reg p4:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg nc:*, reg nc1:V, reg length:cls, reg r19:V, reg c5:L, reg sprintf:cls, reg prefix5:*, reg prefix6:V, reg p5:p(V +), reg nc2:*, reg nc3:V, reg p6:p(V +), reg r22:V, reg character1:cls, reg r23:V |
    mkenv;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L0("") else L0(prefix);
  L0(prefix_orDefault):
    st prefix = prefix_orDefault;
    st suffix = suffix;
    _in_ = ldf `%in%`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("?", "??");
      goto L0(r3);
    L2():
      r1 = dyn base("?", "??");
      goto L0(r1);
    };
    r5 = dyn _in_(p, p1);
    check L9() else D1();
  D1():
    deopt 4 [r5];
  L9():
    c1 = `as.logical`(r5);
    if c1 then L10() else L1();
  L1():
    _CompletionEnv = ld `.CompletionEnv`;
    check L15() else D4();
  L10():
    character = ldf character;
    check L11() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [_CompletionEnv];
  L11():
    r6 = dyn character(0.0);
    check L12() else D3();
  L15():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c2 = `is.object`(_CompletionEnv1);
    if c2 then L17() else L18(_CompletionEnv1);
  D3():
    deopt 8 [r6];
  L12():
    popenv;
    return r6;
  L16(dx1):
    c3 = `is.object`(dx1);
    if c3 then L20() else L21(dx1);
  L17():
    dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(_CompletionEnv3):
    r9 = `$`(_CompletionEnv3, <sym settings>);
    goto L16(r9);
  L3(dx5):
    c4 = `as.logical`(dx5);
    if c4 then L23() else L4();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L20():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(dx3):
    __ = ldf `[[` in base;
    r10 = dyn __(dx3, "help");
    goto L3(r10);
  L4():
    normalCompletions = ldf normalCompletions;
    check L27() else D7();
  L5(r14):
    st nc = r14;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L22():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L23():
    matchAvailableTopics = ldf matchAvailableTopics;
    check L24() else D5();
  D5():
    deopt 19 [];
  D7():
    deopt 24 [];
  L6(r18):
    c5 = `as.logical`(r18);
    if c5 then L33() else L7();
  L24():
    p2 = prom<V +>{
      prefix3 = ld prefix;
      prefix4 = force? prefix3;
      checkMissing(prefix4);
      return prefix4;
    };
    p3 = prom<V +>{
      suffix1 = ld suffix;
      suffix2 = force? suffix1;
      checkMissing(suffix2);
      return suffix2;
    };
    r13 = dyn matchAvailableTopics(p2, p3);
    check L25() else D6();
  L27():
    p4 = prom<V +>{
      suffix3 = ld suffix;
      suffix4 = force? suffix3;
      checkMissing(suffix4);
      return suffix4;
    };
    r16 = dyn normalCompletions[, `check.mode`](p4, FALSE);
    check L28() else D8();
  L29():
    nc = ld nc;
    check L31() else D9();
  L30():
    r17 = dyn base1(<sym nc>);
    goto L6(r17);
  D6():
    deopt 22 [r13];
  D8():
    deopt 28 [r16];
  D9():
    deopt 32 [nc];
  L7():
    character1 = ldf character;
    check L37() else D13();
  L25():
    goto L5(r13);
  L28():
    goto L5(r16);
  L31():
    nc1 = force? nc;
    checkMissing(nc1);
    length = ldf length in base;
    r19 = dyn length(nc1);
    check L32() else D10();
  L33():
    sprintf = ldf sprintf;
    check L34() else D11();
  D10():
    deopt 35 [r19];
  D11():
    deopt 37 [];
  D13():
    deopt 43 [];
  L32():
    goto L6(r19);
  L34():
    p5 = prom<V +>{
      prefix5 = ld prefix;
      prefix6 = force? prefix5;
      checkMissing(prefix6);
      return prefix6;
    };
    p6 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      return nc3;
    };
    r22 = dyn sprintf("%s?%s", p5, p6);
    check L35() else D12();
  L37():
    r23 = dyn character1();
    check L38() else D14();
  D12():
    deopt 41 [r22];
  D14():
    deopt 44 [r23];
  L35():
    popenv;
    return r22;
  L38():
    popenv;
    return r23;
  }
}