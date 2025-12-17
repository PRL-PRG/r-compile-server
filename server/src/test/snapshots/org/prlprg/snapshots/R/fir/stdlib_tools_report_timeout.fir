fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1148639420;
    st report_timeout = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1148639420(tlim) {
  (reg tlim:*) -+> V { var tlim:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tlim1:*, reg tlim2:V, reg trunc:cls, reg r2:V, reg tlim3:*, reg tlim4:V, reg r3:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg round:cls, reg r6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg tlim5:*, reg tlim6:V, reg r11:V, reg c1:L, reg warning1:cls, reg gettextf1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg round1:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg warning2:cls, reg gettextf2:cls, reg tlim7:*, reg tlim8:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V |
    mkenv;
    st tlim = tlim;
    sym = ldf trunc;
    base = ldf trunc in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st tlim = r1;
    tlim3 = ld tlim;
    check L7() else D2();
  L3():
    tlim1 = ld tlim;
    check L5() else D0();
  L4():
    r = dyn base(<sym tlim>);
    goto L0(r);
  D0():
    deopt 2 [tlim1];
  D2():
    deopt 7 [tlim3];
  L5():
    tlim2 = force? tlim1;
    checkMissing(tlim2);
    trunc = ldf trunc in base;
    r2 = dyn trunc(tlim2);
    check L6() else D1();
  L7():
    tlim4 = force? tlim3;
    checkMissing(tlim4);
    r3 = `>=`(tlim4, 3600.0);
    c = `as.logical`(r3);
    if c then L8() else L1();
  D1():
    deopt 5 [r2];
  L1():
    tlim5 = ld tlim;
    check L12() else D5();
  L6():
    goto L0(r2);
  L8():
    warning = ldf warning;
    check L9() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 19 [tlim5];
  L9():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sym1 = ldf round;
        base1 = ldf round in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        round = ldf round in base;
        r6 = dyn round(<lang `/`(tlim, 3600.0)>, 1);
        goto L0(r6);
      L2():
        r4 = dyn base1(<lang `/`(tlim, 3600.0)>, 1);
        goto L0(r4);
      };
      r8 = dyn gettextf("elapsed-time limit of %g %s reached for sub-process", p, "hours");
      return r8;
    };
    r10 = dyn warning[, domain, `call.`](p1, NA_LGL, FALSE);
    check L10() else D4();
  L12():
    tlim6 = force? tlim5;
    checkMissing(tlim6);
    r11 = `>=`(tlim6, 60.0);
    c1 = `as.logical`(r11);
    if c1 then L13() else L2();
  D4():
    deopt 18 [r10];
  L2():
    warning2 = ldf warning;
    check L17() else D8();
  L10():
    popenv;
    return r10;
  L13():
    warning1 = ldf warning;
    check L14() else D6();
  D6():
    deopt 24 [];
  D8():
    deopt 32 [];
  L14():
    p3 = prom<V +>{
      gettextf1 = ldf gettextf;
      p2 = prom<V +>{
        sym2 = ldf round;
        base2 = ldf round in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        round1 = ldf round in base;
        r14 = dyn round1(<lang `/`(tlim, 60.0)>, 1);
        goto L0(r14);
      L2():
        r12 = dyn base2(<lang `/`(tlim, 60.0)>, 1);
        goto L0(r12);
      };
      r16 = dyn gettextf1("elapsed-time limit of %g %s reached for sub-process", p2, "minutes");
      return r16;
    };
    r18 = dyn warning1[, domain, `call.`](p3, NA_LGL, FALSE);
    check L15() else D7();
  L17():
    p5 = prom<V +>{
      gettextf2 = ldf gettextf;
      p4 = prom<V +>{
        tlim7 = ld tlim;
        tlim8 = force? tlim7;
        checkMissing(tlim8);
        return tlim8;
      };
      r20 = dyn gettextf2("elapsed-time limit of %g %s reached for sub-process", p4, "seconds");
      return r20;
    };
    r22 = dyn warning2[, domain, `call.`](p5, NA_LGL, FALSE);
    check L18() else D9();
  D7():
    deopt 30 [r18];
  D9():
    deopt 38 [r22];
  L15():
    popenv;
    return r18;
  L18():
    popenv;
    return r22;
  }
}