fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2733360753;
    st `transform.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2733360753(_data, `...`) {
  (reg _data:*, reg ddd:dots) -+> V { var _data:*, var `...`:dots?, reg transform_data_frame:cls, reg as_data_frame:cls, reg _data1:*, reg _data2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st _data = _data;
    st `...` = ddd;
    transform_data_frame = ldf `transform.data.frame`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p = prom<V +>{
        _data1 = ld _data;
        _data2 = force? _data1;
        checkMissing(_data2);
        return _data2;
      };
      r1 = dyn as_data_frame(p);
      return r1;
    };
    ddd1 = ld `...`;
    r3 = dyn transform_data_frame[, `...`](p1, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}