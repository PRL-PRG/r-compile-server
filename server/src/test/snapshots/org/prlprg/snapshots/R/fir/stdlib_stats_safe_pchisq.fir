fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner517978451;
    st safe_pchisq = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner517978451(q, df, `...`) {
  (reg q:*, reg df:*, reg ddd:dots) -+> V { var q:*, var df:*, var `...`:dots?, reg l:*, reg c:L, reg r1:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg df1:*, reg df2:V, reg r4:V, reg ___:cls, reg r5:V, reg pchisq:cls, reg q1:*, reg q2:V, reg p:p(V +), reg df3:*, reg df4:V, reg p1:p(V +), reg ddd1:dots?, reg r8:V |
    mkenv;
    st q = q;
    st df = df;
    st `...` = ddd;
    l = ld df;
    c = `is.object`(l);
    if c then L1() else L2(NA_LGL, l);
  L0(dx1):
    st df = dx1;
    pchisq = ldf pchisq;
    check L5() else D1();
  L1():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L3() else L2(NA_LGL, dr);
  L2(r1, l2):
    df1 = ld df;
    check L4() else D0();
  D0():
    deopt 3 [r1, l2, NA_LGL, df1];
  D1():
    deopt 10 [];
  L3():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L4():
    df2 = force? df1;
    checkMissing(df2);
    r4 = `<=`(df2, 0.0);
    ___ = ldf `[<-` in base;
    r5 = dyn ___(l2, NA_LGL, r4);
    goto L0(r5);
  L5():
    p = prom<V +>{
      q1 = ld q;
      q2 = force? q1;
      checkMissing(q2);
      return q2;
    };
    p1 = prom<V +>{
      df3 = ld df;
      df4 = force? df3;
      checkMissing(df4);
      return df4;
    };
    ddd1 = ld `...`;
    r8 = dyn pchisq[q, df, `...`](p, p1, ddd1);
    check L6() else D2();
  D2():
    deopt 16 [r8];
  L6():
    popenv;
    return r8;
  }
}