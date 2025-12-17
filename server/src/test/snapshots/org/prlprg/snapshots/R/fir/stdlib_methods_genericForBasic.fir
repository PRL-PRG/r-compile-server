fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1799906966;
    st genericForBasic = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1799906966(f, where, mustFind) {
  (reg f:*, reg where:*, reg mustFind:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var mustFind:*, reg mustFind_isMissing:L, reg mustFind_orDefault:*, reg _BasicFunsList:*, reg _BasicFunsList1:V, reg c:L, reg _BasicFunsList3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f1:*, reg f2:V, reg __:cls, reg r4:V, reg mustFind1:*, reg mustFind2:V, reg c1:L, reg c3:V, reg isFALSE:cls, reg ans:*, reg ans1:V, reg p2:p(V +), reg r6:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg f3:*, reg f4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg ans2:*, reg ans3:V |
    mkenv;
    st f = f;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    mustFind_isMissing = missing.0(mustFind);
    if mustFind_isMissing then L2(TRUE) else L2(mustFind);
  L2(mustFind_orDefault):
    st mustFind = mustFind_orDefault;
    _BasicFunsList = ld `.BasicFunsList`;
    check L7() else D0();
  D0():
    deopt 0 [_BasicFunsList];
  L7():
    _BasicFunsList1 = force? _BasicFunsList;
    checkMissing(_BasicFunsList1);
    c = `is.object`(_BasicFunsList1);
    if c then L8() else L9(_BasicFunsList1);
  L3(dx1):
    st ans = dx1;
    mustFind1 = ld mustFind;
    check L12() else D2();
  L8():
    dr = tryDispatchBuiltin.1("[[", _BasicFunsList1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(_BasicFunsList3):
    f1 = ld f;
    check L11() else D1();
  D1():
    deopt 2 [_BasicFunsList3, f1];
  D2():
    deopt 6 [mustFind1];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L11():
    f2 = force? f1;
    __ = ldf `[[` in base;
    r4 = dyn __(_BasicFunsList3, f2);
    goto L3(r4);
  L12():
    mustFind2 = force? mustFind1;
    checkMissing(mustFind2);
    c1 = `as.logical`(mustFind2);
    if c1 then L13() else L4(c1);
  L4(c3):
    c7 = `as.logical`(c3);
    if c7 then L17() else L5();
  L13():
    isFALSE = ldf isFALSE;
    check L14() else D3();
  D3():
    deopt 9 [c1];
  L5():
    goto L6();
  L6():
    ans2 = ld ans;
    check L21() else D7();
  L14():
    p2 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    r6 = dyn isFALSE(p2);
    check L15() else D4();
  L17():
    stop = ldf stop;
    check L18() else D5();
  D4():
    deopt 11 [c1, r6];
  D5():
    deopt 14 [];
  D7():
    deopt 21 [ans2];
  L15():
    c4 = `as.logical`(r6);
    c5 = `&&`(c1, c4);
    goto L4(c5);
  L18():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r8 = dyn sQuote(p3);
        return r8;
      };
      r10 = dyn gettextf("methods may not be defined for primitive function %s in this version of R", p4);
      return r10;
    };
    r12 = dyn stop[, domain](p5, NA_LGL);
    check L19() else D6();
  L21():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D6():
    deopt 18 [r12];
  L19():
    goto L6();
  }
}