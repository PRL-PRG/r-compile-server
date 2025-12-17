fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2215012248;
    st `.write_Rd_contents_as_RDS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2215012248(contents, outFile) {
  (reg contents:*, reg outFile:*) -+> V { var contents:*, var outFile:*, reg saveRDS:cls, reg contents1:*, reg contents2:V, reg p:p(V +), reg outFile1:*, reg outFile2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st contents = contents;
    st outFile = outFile;
    saveRDS = ldf saveRDS;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      contents1 = ld contents;
      contents2 = force? contents1;
      checkMissing(contents2);
      return contents2;
    };
    p1 = prom<V +>{
      outFile1 = ld outFile;
      outFile2 = force? outFile1;
      checkMissing(outFile2);
      return outFile2;
    };
    r2 = dyn saveRDS[, file, compress](p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}