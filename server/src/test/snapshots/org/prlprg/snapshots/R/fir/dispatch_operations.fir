fun main() {
  () -+> V { reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg as_data_frame:cls, reg M:*, reg M1:V, reg p1:p(V +), reg r6:V, reg r7:cls, reg h:cls, reg d:*, reg d1:V, reg p2:p(V +), reg r9:V |
    mkenv;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(1.2, 1.3, 1.4);
      goto L0(r2);
    L2():
      r = dyn base(1.2, 1.3, 1.4);
      goto L0(r);
    };
    r4 = dyn matrix[, , , byrow](p, 3.0, 3.0, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    st M = r4;
    as_data_frame = ldf `as.data.frame`;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      M = ld M;
      M1 = force? M;
      checkMissing(M1);
      return M1;
    };
    r6 = dyn as_data_frame(p1);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    st d = r6;
    r7 = clos inner469955298;
    st h = r7;
    h = ldf h;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p2 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r9 = dyn h(100.0, p2);
    check L5() else D5();
  D5():
    deopt 21 [r9];
  L5():
    popenv;
    return r9;
  }
}
fun inner469955298(n, d) {
  (reg n:*, reg d:*) -+> V { var n:*, var d:*, reg n1:*, reg n2:V, reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg l1:*, reg c1:L, reg i6:I, reg r2:R, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg ___:cls, reg r5:V, reg d1:*, reg d2:V |
    mkenv;
    st n = n;
    st d = d;
    n1 = ld n;
    check L3() else D0();
  D0():
    deopt 1 [1.0, n1];
  L3():
    n2 = force? n1;
    checkMissing(n2);
    r = `:`(1.0, n2);
    s = toForSeq(r);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L4() else L2();
  L2():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    l1 = ld d;
    c1 = `is.object`(l1);
    if c1 then L5() else L6(i2, 5.5, l1);
  L4():
    d1 = ld d;
    check L8() else D1();
  D1():
    deopt 15 [d1];
  L1(i8, dx1):
    st d = dx1;
    goto L0(i8);
  L5():
    dr = tryDispatchBuiltin.0("[<-", l1, 5.5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(i2, 5.5, dr);
  L6(i6, r2, l3):
    ___ = ldf `[<-` in base;
    r5 = dyn ___(l3, 5.5, 3.0, 2.0);
    goto L1(i6, r5);
  L8():
    d2 = force? d1;
    checkMissing(d2);
    popenv;
    return d2;
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(i2, dx);
  }
}