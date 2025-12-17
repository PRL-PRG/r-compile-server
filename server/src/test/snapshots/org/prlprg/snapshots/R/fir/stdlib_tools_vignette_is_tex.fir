fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2466915962;
    st vignette_is_tex = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2466915962(file, `...`) {
  (reg file:*, reg ddd:dots) -+> V { var file:*, var `...`:dots?, reg endsWith:cls, reg tolower:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st file = file;
    st `...` = ddd;
    endsWith = ldf endsWith;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      tolower = ldf tolower;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r1 = dyn tolower(p);
      return r1;
    };
    r3 = dyn endsWith(p1, ".tex");
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}