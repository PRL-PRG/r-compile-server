fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2836108684;
    st safe_pf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2836108684(q, df1, `...`) {
  (reg q:*, reg df1:*, reg ddd:dots) -+> V { var q:*, var df1:*, var `...`:dots?, reg l:*, reg c:L, reg r1:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg df2:*, reg df3:V, reg r4:V, reg ___:cls, reg r5:V, reg pf:cls, reg q1:*, reg q2:V, reg p:p(V +), reg df4:*, reg df5:V, reg p1:p(V +), reg ddd1:dots?, reg r8:V |
    mkenv;
    st q = q;
    st df1 = df1;
    st `...` = ddd;
    l = ld df1;
    c = `is.object`(l);
    if c then L1() else L2(NA_LGL, l);
  L0(dx1):
    st df1 = dx1;
    pf = ldf pf;
    check L5() else D1();
  L1():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L3() else L2(NA_LGL, dr);
  L2(r1, l2):
    df2 = ld df1;
    check L4() else D0();
  D0():
    deopt 3 [r1, l2, NA_LGL, df2];
  D1():
    deopt 10 [];
  L3():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L4():
    df3 = force? df2;
    checkMissing(df3);
    r4 = `<=`(df3, 0.0);
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
      df4 = ld df1;
      df5 = force? df4;
      checkMissing(df5);
      return df5;
    };
    ddd1 = ld `...`;
    r8 = dyn pf[q, df1, `...`](p, p1, ddd1);
    check L6() else D2();
  D2():
    deopt 16 [r8];
  L6():
    popenv;
    return r8;
  }
}