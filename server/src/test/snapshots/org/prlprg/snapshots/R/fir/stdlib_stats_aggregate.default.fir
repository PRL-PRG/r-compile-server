fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `aggregate.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg is_ts:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg aggregate_ts:cls, reg as_ts:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg ddd1:dots?, reg r5:V, reg aggregate_data_frame:cls, reg as_data_frame:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg ddd2:dots?, reg r9:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    is_ts = ldf `is.ts`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_ts(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    aggregate_data_frame = ldf `aggregate.data.frame`;
    check L7() else D4();
  L3():
    aggregate_ts = ldf `aggregate.ts`;
    check L4() else D2();
  D2():
    deopt 5 [];
  D4():
    deopt 10 [];
  L4():
    p2 = prom<V +>{
      as_ts = ldf `as.ts`;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r3 = dyn as_ts(p1);
      return r3;
    };
    ddd1 = ld `...`;
    r5 = dyn aggregate_ts[, `...`](p2, ddd1);
    check L5() else D3();
  L7():
    p4 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p3 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r7 = dyn as_data_frame(p3);
      return r7;
    };
    ddd2 = ld `...`;
    r9 = dyn aggregate_data_frame[, `...`](p4, ddd2);
    check L8() else D5();
  D3():
    deopt 8 [r5];
  D5():
    deopt 13 [r9];
  L5():
    popenv;
    return r5;
  L8():
    popenv;
    return r9;
  }
}