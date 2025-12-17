fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner651031350;
    st R_license_db_refresh_cache = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner651031350(paths) {
  (reg paths:*) -+> V { var paths:*, reg paths_isMissing:L, reg paths_orDefault:*, reg R_license_db:cls, reg _make_R_license_db:cls, reg paths1:*, reg paths2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg R_license_db_vars:cls, reg _make_R_license_db_vars:cls, reg r4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    paths_isMissing = missing.0(paths);
    if paths_isMissing then L0(NULL) else L0(paths);
  L0(paths_orDefault):
    st paths = paths_orDefault;
    R_license_db = ldf R_license_db;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      _make_R_license_db = ldf `.make_R_license_db`;
      p = prom<V +>{
        paths1 = ld paths;
        paths2 = force? paths1;
        checkMissing(paths2);
        return paths2;
      };
      r1 = dyn _make_R_license_db(p);
      return r1;
    };
    r3 = dyn R_license_db(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    R_license_db_vars = ldf R_license_db_vars;
    check L3() else D2();
  D2():
    deopt 5 [];
  L3():
    p2 = prom<V +>{
      _make_R_license_db_vars = ldf `.make_R_license_db_vars`;
      r4 = dyn _make_R_license_db_vars();
      return r4;
    };
    r6 = dyn R_license_db_vars(p2);
    check L4() else D3();
  D3():
    deopt 7 [r6];
  L4():
    popenv;
    return r6;
  }
}