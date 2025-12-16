fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st getRversion = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg package_version:cls, reg R_version:*, reg R_version1:V, reg p:p(V +), reg r1:V |
    mkenv;
    package_version = ldf package_version;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      return R_version1;
    };
    r1 = dyn package_version(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}