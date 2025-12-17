fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg summary_data_frame:cls, reg as_data_frame_matrix:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    summary_data_frame = ldf `summary.data.frame`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_data_frame_matrix = ldf `as.data.frame.matrix`;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r1 = dyn as_data_frame_matrix(p);
      return r1;
    };
    ddd1 = ld `...`;
    r3 = dyn summary_data_frame[, `...`](p1, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}