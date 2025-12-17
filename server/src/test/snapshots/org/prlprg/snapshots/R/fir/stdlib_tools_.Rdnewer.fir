fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1701656441;
    st `.Rdnewer` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1701656441(dir, file) {
  (reg dir:*, reg file:*) -+> V { var dir:*, var file:*, reg q:cls, reg __Rdnewer:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg file1:*, reg file2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st dir = dir;
    st file = file;
    q = ldf q;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      __Rdnewer = ldf `..Rdnewer`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p1 = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r2 = dyn __Rdnewer(p, p1);
      return r2;
    };
    r4 = dyn q[, status, runLast]("no", p2, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    popenv;
    return r4;
  }
}