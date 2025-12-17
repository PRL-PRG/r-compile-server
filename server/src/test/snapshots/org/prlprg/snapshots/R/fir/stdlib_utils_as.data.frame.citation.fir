fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3069603236;
    st `as.data.frame.citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3069603236(x, `row.names`, optional, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg as_bibentry:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg NextMethod:cls, reg r2:V |
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
    as_bibentry = ldf `as.bibentry`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_bibentry(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st x = r1;
    NextMethod = ldf NextMethod;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    r2 = dyn NextMethod();
    check L5() else D3();
  D3():
    deopt 7 [r2];
  L5():
    popenv;
    return r2;
  }
}