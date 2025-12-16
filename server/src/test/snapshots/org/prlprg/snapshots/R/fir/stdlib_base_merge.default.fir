fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1776965194;
    st `merge.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1776965194(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg merge:cls, reg as_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg as_data_frame1:cls, reg y1:*, reg y2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg ddd1:dots?, reg r6:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    merge = ldf merge;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn as_data_frame(p);
      return r1;
    };
    p3 = prom<V +>{
      as_data_frame1 = ldf `as.data.frame`;
      p2 = prom<V +>{
        y1 = ld y;
        y2 = force? y1;
        checkMissing(y2);
        return y2;
      };
      r4 = dyn as_data_frame1(p2);
      return r4;
    };
    ddd1 = ld `...`;
    r6 = dyn merge[, , `...`](p1, p3, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}