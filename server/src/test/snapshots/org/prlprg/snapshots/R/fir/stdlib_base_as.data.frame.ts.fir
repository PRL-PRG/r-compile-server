fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.data.frame.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg as_data_frame_matrix:cls, reg x3:*, reg x4:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg as_data_frame_vector:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg ddd2:dots?, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    as_data_frame_vector = ldf `as.data.frame.vector`;
    check L10() else D4();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L5() else D1();
  L6():
    as_data_frame_matrix = ldf `as.data.frame.matrix`;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    ddd1 = ld `...`;
    r4 = dyn as_data_frame_matrix[, `...`](p, ddd1);
    check L8() else D3();
  L10():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    ddd2 = ld `...`;
    r6 = dyn as_data_frame_vector[, `...`](p1, ddd2);
    check L11() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 15 [r6];
  L8():
    popenv;
    return r4;
  L11():
    popenv;
    return r6;
  }
}