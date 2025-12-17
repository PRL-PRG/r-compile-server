fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner475717200;
    st analyze_licenses_in_repository = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner475717200(dir, unpacked, full) {
  (reg dir:*, reg unpacked:*, reg full:*) -+> V { var dir:*, var unpacked:*, reg unpacked_isMissing:L, reg unpacked_orDefault:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, reg build_license_db:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg unpacked1:*, reg unpacked2:V, reg p1:p(V +), reg r2:V, reg full1:*, reg full2:V, reg r3:V, reg c:L, reg _remove_stale_dups:cls, reg db:*, reg db1:V, reg p2:p(V +), reg r5:V, reg analyze_licenses_in_license_db:cls, reg db2:*, reg db3:V, reg p3:p(V +), reg r8:V |
    mkenv;
    st dir = dir;
    unpacked_isMissing = missing.0(unpacked);
    if unpacked_isMissing then L0(FALSE) else L0(unpacked);
  L0(unpacked_orDefault):
    st unpacked = unpacked_orDefault;
    full_isMissing = missing.0(full);
    if full_isMissing then L1(TRUE) else L1(full);
  L1(full_orDefault):
    st full = full_orDefault;
    build_license_db = ldf build_license_db;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      unpacked1 = ld unpacked;
      unpacked2 = force? unpacked1;
      checkMissing(unpacked2);
      return unpacked2;
    };
    r2 = dyn build_license_db(p, p1);
    check L5() else D1();
  D1():
    deopt 4 [r2];
  L5():
    st db = r2;
    full1 = ld full;
    check L6() else D2();
  D2():
    deopt 6 [full1];
  L6():
    full2 = force? full1;
    checkMissing(full2);
    r3 = `!`(full2);
    c = `as.logical`(r3);
    if c then L7() else L2();
  L2():
    goto L3();
  L3():
    analyze_licenses_in_license_db = ldf analyze_licenses_in_license_db;
    check L11() else D5();
  L7():
    _remove_stale_dups = ldf `.remove_stale_dups`;
    check L8() else D3();
  D3():
    deopt 10 [];
  D5():
    deopt 17 [];
  L8():
    p2 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r5 = dyn _remove_stale_dups(p2);
    check L9() else D4();
  L11():
    p3 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    r8 = dyn analyze_licenses_in_license_db(p3);
    check L12() else D6();
  D4():
    deopt 12 [r5];
  D6():
    deopt 19 [r8];
  L9():
    st db = r5;
    goto L3();
  L12():
    popenv;
    return r8;
  }
}