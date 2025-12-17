fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2466915962;
    st getVignetteEncoding = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2466915962(file, `...`) {
  (reg file:*, reg ddd:dots) -+> V { var file:*, var `...`:dots?, reg readLines:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg _getVignetteEncoding:cls, reg lines:*, reg lines1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st file = file;
    st `...` = ddd;
    readLines = ldf readLines;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r1 = dyn readLines[, warn](p, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st lines = r1;
    _getVignetteEncoding = ldf `.getVignetteEncoding`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    ddd1 = ld `...`;
    r3 = dyn _getVignetteEncoding[, `...`](p1, ddd1);
    check L3() else D3();
  D3():
    deopt 11 [r3];
  L3():
    popenv;
    return r3;
  }
}