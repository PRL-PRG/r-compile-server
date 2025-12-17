fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.test_package_depends_R_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg q:cls, reg _Rtest_package_depends_R_version:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st dir = dir;
    q = ldf q;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _Rtest_package_depends_R_version = ldf `.Rtest_package_depends_R_version`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn _Rtest_package_depends_R_version(p);
      return r1;
    };
    r3 = dyn q[status](p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}