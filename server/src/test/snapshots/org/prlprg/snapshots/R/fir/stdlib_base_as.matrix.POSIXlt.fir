fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.matrix.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_matrix:cls, reg as_data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg ddd1:dots?, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_matrix = ldf `as.matrix`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p = prom<V +>{
        sym = ldf unclass;
        base = ldf unclass in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        unclass = ldf unclass in base;
        r2 = dyn unclass(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn as_data_frame(p);
      return r4;
    };
    ddd1 = ld `...`;
    r6 = dyn as_matrix[, `...`](p1, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r6];
  L1():
    popenv;
    return r6;
  }
}