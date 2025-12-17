fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st `.build_Rd_xref_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg Rd_db:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg Rd_db1:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r9:V, reg lapply:cls, reg db:*, reg db1:V, reg p3:p(V +), reg _Rd_get_xrefs:*, reg _Rd_get_xrefs1:V, reg p4:p(V +), reg r12:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L6() else L2();
  L4():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L5():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    Rd_db1 = ldf Rd_db;
    check L10() else D2();
  L3(r7):
    st db = r7;
    lapply = ldf lapply;
    check L12() else D4();
  L6():
    Rd_db = ldf Rd_db;
    check L7() else D0();
  D0():
    deopt 5 [];
  D2():
    deopt 11 [];
  D4():
    deopt 17 [];
  L7():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r6 = dyn Rd_db[, `lib.loc`](p, p1);
    check L8() else D1();
  L10():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r9 = dyn Rd_db1[dir](p2);
    check L11() else D3();
  L12():
    p3 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p4 = prom<V +>{
      _Rd_get_xrefs = ld `.Rd_get_xrefs`;
      _Rd_get_xrefs1 = force? _Rd_get_xrefs;
      checkMissing(_Rd_get_xrefs1);
      return _Rd_get_xrefs1;
    };
    r12 = dyn lapply(p3, p4);
    check L13() else D5();
  D1():
    deopt 9 [r6];
  D3():
    deopt 14 [r9];
  D5():
    deopt 20 [r12];
  L8():
    goto L3(r6);
  L11():
    goto L3(r9);
  L13():
    popenv;
    return r12;
  }
}