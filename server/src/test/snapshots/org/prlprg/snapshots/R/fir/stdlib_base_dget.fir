fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-115815145`;
    st dget = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-115815145`(file, `keep.source`) {
  (reg file:*, reg keep_source:*) -+> V { var file:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg eval:cls, reg parse:cls, reg file1:*, reg file2:V, reg p:p(V +), reg keep_source1:*, reg keep_source2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st file = file;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L0(FALSE) else L0(keep_source);
  L0(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    eval = ldf eval;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      parse = ldf parse;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      p1 = prom<V +>{
        keep_source1 = ld `keep.source`;
        keep_source2 = force? keep_source1;
        checkMissing(keep_source2);
        return keep_source2;
      };
      r2 = dyn parse[file, `keep.source`](p, p1);
      return r2;
    };
    r4 = dyn eval(p2);
    check L2() else D1();
  D1():
    deopt 3 [r4];
  L2():
    popenv;
    return r4;
  }
}