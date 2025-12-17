fun main() {
  () -+> V { reg r:cls, reg median:cls, reg p:p(V +), reg r2:V, reg median1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos inner3248147110;
    st median = r;
    median = ldf median;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r2 = dyn median(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    median1 = ldf median;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c(<int 1, 2, 3>, 100.0, 1000.0);
      goto L0(r5);
    L2():
      r3 = dyn base(<lang `:`(1.0, 3.0)>, 100.0, 1000.0);
      goto L0(r3);
    };
    r7 = dyn median1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun inner3248147110(x, `na.rm`, `...`) {
  (reg x:*, reg na_rm:*, reg ddd:dots) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("median");
    goto L1(r2);
  L3():
    r = dyn base("median");
    goto L1(r);
  }
}