fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.data.frame.logLik` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:cls, reg r2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_data_frame = ldf `as.data.frame`;
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
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = ldf c in base;
      r2 = dyn c(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    ddd1 = ld `...`;
    r4 = dyn as_data_frame[, `...`](p, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}