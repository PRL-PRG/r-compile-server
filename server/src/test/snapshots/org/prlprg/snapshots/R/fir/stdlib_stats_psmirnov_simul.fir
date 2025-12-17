fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner964900509;
    st psmirnov_simul = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner964900509(q, sizes, z, alternative, `lower.tail`, `log.p`, B) {
  (reg q:*, reg sizes:*, reg z:*, reg alternative:*, reg lower_tail:*, reg log_p:*, reg B:*) -+> V { var q:*, var sizes:*, var z:*, reg z_isMissing:L, reg z_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, var B:*, reg rsmirnov:cls, reg B1:*, reg B2:V, reg p1:p(V +), reg sizes1:*, reg sizes2:V, reg p2:p(V +), reg z1:*, reg z2:V, reg p3:p(V +), reg alternative1:*, reg alternative2:V, reg p4:p(V +), reg r8:V, reg ecdf:cls, reg Dsim:*, reg Dsim1:V, reg p5:p(V +), reg r10:V, reg r11:cls, reg q1:*, reg q2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg q5:V, reg r13:V, reg _Machine:*, reg _Machine1:V, reg c1:L, reg q7:V, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg q9:V, reg dx1:V, reg r14:V, reg r15:V, reg r16:V, reg p6:p(V +), reg r18:V, reg log_p1:*, reg log_p2:V, reg c2:L, reg lower_tail1:*, reg lower_tail2:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg ret:*, reg ret1:V, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg ret2:*, reg ret3:V, reg r24:V, reg r25:V, reg lower_tail3:*, reg lower_tail4:V, reg c4:L, reg ret4:*, reg ret5:V, reg ret6:*, reg ret7:V, reg r26:V |
    mkenv;
    st q = q;
    st sizes = sizes;
    z_isMissing = missing.0(z);
    if z_isMissing then L0(NULL) else L0(z);
  L0(z_orDefault):
    st z = z_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L1() else L2(alternative);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("two.sided", "less", "greater");
      goto L0(r2);
    L2():
      r = dyn base("two.sided", "less", "greater");
      goto L0(r);
    };
    goto L2(p);
  L2(alternative_orDefault):
    st alternative = alternative_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L3(TRUE) else L3(lower_tail);
  L3(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L4(FALSE) else L4(log_p);
  L4(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    st B = B;
    rsmirnov = ldf rsmirnov;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p1 = prom<V +>{
      B1 = ld B;
      B2 = force? B1;
      checkMissing(B2);
      return B2;
    };
    p2 = prom<V +>{
      sizes1 = ld sizes;
      sizes2 = force? sizes1;
      checkMissing(sizes2);
      return sizes2;
    };
    p3 = prom<V +>{
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      return z2;
    };
    p4 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r8 = dyn rsmirnov[, sizes, z, alternative](p1, p2, p3, p4);
    check L11() else D1();
  D1():
    deopt 9 [r8];
  L11():
    st Dsim = r8;
    ecdf = ldf ecdf;
    check L12() else D2();
  D2():
    deopt 12 [];
  L12():
    p5 = prom<V +>{
      Dsim = ld Dsim;
      Dsim1 = force? Dsim;
      checkMissing(Dsim1);
      return Dsim1;
    };
    r10 = dyn ecdf(p5);
    check L13() else D3();
  D3():
    deopt 14 [r10];
  L13():
    checkFun.0(r10);
    r11 = r10 as cls;
    p6 = prom<V +>{
      q1 = ld q;
      q2 = force? q1;
      checkMissing(q2);
      sym1 = ldf sqrt;
      base1 = ldf sqrt in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(q5, r13):
      r16 = `-`(q5, r13);
      return r16;
    L1():
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c1 = `is.object`(_Machine1);
      if c1 then L4() else L5(q2, _Machine1);
    L2():
      r12 = dyn base1(<lang `$`(.Machine, double.eps)>);
      goto L0(q2, r12);
    L3(q9, dx1):
      r15 = sqrt(dx1);
      goto L0(q9, r15);
    L4():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(q2, dr);
    L5(q7, _Machine3):
      r14 = `$`(_Machine3, <sym double.eps>);
      goto L3(q7, r14);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(q2, dx);
    };
    r18 = dyn r11(p6);
    check L14() else D4();
  D4():
    deopt 17 [r18];
  L14():
    st ret = r18;
    log_p1 = ld `log.p`;
    check L15() else D5();
  D5():
    deopt 19 [log_p1];
  L15():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    c2 = `as.logical`(log_p2);
    if c2 then L16() else L5();
  L5():
    lower_tail3 = ld `lower.tail`;
    check L27() else D9();
  L16():
    lower_tail1 = ld `lower.tail`;
    check L17() else D6();
  D6():
    deopt 21 [lower_tail1];
  D9():
    deopt 32 [lower_tail3];
  L17():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    c3 = `as.logical`(lower_tail2);
    if c3 then L18() else L6();
  L27():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    c4 = `as.logical`(lower_tail4);
    if c4 then L28() else L9();
  L6():
    sym3 = ldf log1p;
    base3 = ldf log1p in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L9():
    ret6 = ld ret;
    check L31() else D11();
  L18():
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L28():
    ret4 = ld ret;
    check L29() else D10();
  D10():
    deopt 34 [ret4];
  D11():
    deopt 37 [1.0, ret6];
  L7(r20):
    popenv;
    return r20;
  L8(r23):
    popenv;
    return r23;
  L19():
    ret = ld ret;
    check L21() else D7();
  L20():
    r19 = dyn base2(<sym ret>);
    goto L7(r19);
  L23():
    ret2 = ld ret;
    check L25() else D8();
  L24():
    r22 = dyn base3(<lang `-`(ret)>);
    goto L8(r22);
  L29():
    ret5 = force? ret4;
    checkMissing(ret5);
    popenv;
    return ret5;
  L31():
    ret7 = force? ret6;
    checkMissing(ret7);
    r26 = `-`(1.0, ret7);
    popenv;
    return r26;
  D7():
    deopt 24 [ret];
  D8():
    deopt 28 [ret2];
  L21():
    ret1 = force? ret;
    checkMissing(ret1);
    r21 = log(ret1, 2.718281828459045);
    goto L7(r21);
  L25():
    ret3 = force? ret2;
    checkMissing(ret3);
    r24 = `-`(<missing>, ret3);
    r25 = log1p(r24);
    goto L8(r25);
  }
}