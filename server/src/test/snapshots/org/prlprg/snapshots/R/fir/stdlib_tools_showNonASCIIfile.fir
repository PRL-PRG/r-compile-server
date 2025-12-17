fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st showNonASCIIfile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg showNonASCII:cls, reg readLines:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st file = file;
    showNonASCII = ldf showNonASCII;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      readLines = ldf readLines;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r1 = dyn readLines[, warn](p, FALSE);
      return r1;
    };
    r3 = dyn showNonASCII(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}