fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3069603236;
    st `as.data.frame.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3069603236(x, `row.names`, optional, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg as_data_frame:cls, reg as_table:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg row_names1:*, reg row_names2:V, reg p2:p(V +), reg optional1:*, reg optional2:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    as_data_frame = ldf `as.data.frame`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      as_table = ldf `as.table`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn as_table(p);
      return r1;
    };
    p2 = prom<V +>{
      row_names1 = ld `row.names`;
      row_names2 = force? row_names1;
      checkMissing(row_names2);
      return row_names2;
    };
    p3 = prom<V +>{
      optional1 = ld optional;
      optional2 = force? optional1;
      checkMissing(optional2);
      return optional2;
    };
    r5 = dyn as_data_frame(p1, p2, p3);
    check L3() else D1();
  D1():
    deopt 5 [r5];
  L3():
    popenv;
    return r5;
  }
}