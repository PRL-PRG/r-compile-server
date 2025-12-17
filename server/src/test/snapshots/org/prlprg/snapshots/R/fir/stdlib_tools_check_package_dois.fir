fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3222564391;
    st check_package_dois = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3222564391(dir, verbose) {
  (reg dir:*, reg verbose:*) -+> V { var dir:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg doi_db_from_package_sources:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg check_doi_db:cls, reg db:*, reg db1:V, reg p1:p(V +), reg verbose1:*, reg verbose2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st dir = dir;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    doi_db_from_package_sources = ldf doi_db_from_package_sources;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn doi_db_from_package_sources[, Rd](p, TRUE);
    check L2() else D1();
  D1():
    deopt 5 [r1];
  L2():
    st db = r1;
    check_doi_db = ldf check_doi_db;
    check L3() else D2();
  D2():
    deopt 8 [];
  L3():
    p1 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p2 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    r4 = dyn check_doi_db[, verbose, parallel](p1, p2, TRUE);
    check L4() else D3();
  D3():
    deopt 14 [r4];
  L4():
    popenv;
    return r4;
  }
}