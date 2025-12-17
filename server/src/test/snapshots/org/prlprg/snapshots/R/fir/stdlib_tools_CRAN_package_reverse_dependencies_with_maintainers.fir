fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1364988774;
    st CRAN_package_reverse_dependencies_with_maintainers = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1364988774(packages, which, recursive, db) {
  (reg packages:*, reg which:*, reg recursive:*, reg db:*) -+> V { var packages:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, reg CRAN_package_db:cls, reg r:V, reg p:p(V +), reg package_dependencies:cls, reg packages1:*, reg packages2:V, reg p1:p(V +), reg db1:*, reg db2:V, reg p2:p(V +), reg which1:*, reg which2:V, reg p3:p(V +), reg recursive1:*, reg recursive2:V, reg p4:p(V +), reg r6:V, reg sort:cls, reg unique:cls, reg unlist:cls, reg rdepends:*, reg rdepends1:V, reg p5:p(V +), reg r8:V, reg p6:p(V +), reg r10:V, reg p7:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg rdepends2:*, reg rdepends3:V, reg db3:*, reg db4:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg match:cls, reg r16:V, reg db7:*, reg db8:V, reg c1:L, reg db10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pos:*, reg pos1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg db13:V, reg pos4:V, reg r18:V, reg c2:cls, reg r19:V, reg __1:cls, reg r20:V |
    mkenv;
    st packages = packages;
    which_isMissing = missing.0(which);
    if which_isMissing then L0("strong") else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(FALSE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    db_isMissing = missing.0(db);
    if db_isMissing then L2() else L3(db);
  L2():
    p = prom<V +>{
      CRAN_package_db = ldf CRAN_package_db;
      r = dyn CRAN_package_db();
      return r;
    };
    goto L3(p);
  L3(db_orDefault):
    st db = db_orDefault;
    package_dependencies = ldf package_dependencies;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p1 = prom<V +>{
      packages1 = ld packages;
      packages2 = force? packages1;
      checkMissing(packages2);
      return packages2;
    };
    p2 = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    p3 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    p4 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r6 = dyn package_dependencies[, , , recursive, reverse](p1, p2, p3, p4, TRUE);
    check L9() else D1();
  D1():
    deopt 9 [r6];
  L9():
    st rdepends = r6;
    sort = ldf sort;
    check L10() else D2();
  D2():
    deopt 12 [];
  L10():
    p7 = prom<V +>{
      unique = ldf unique;
      p6 = prom<V +>{
        unlist = ldf unlist;
        p5 = prom<V +>{
          rdepends = ld rdepends;
          rdepends1 = force? rdepends;
          checkMissing(rdepends1);
          return rdepends1;
        };
        r8 = dyn unlist(p5);
        return r8;
      };
      r10 = dyn unique(p6);
      return r10;
    };
    r12 = dyn sort(p7);
    check L11() else D3();
  D3():
    deopt 14 [r12];
  L11():
    st rdepends = r12;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L4(r14):
    st pos = r14;
    db7 = ld db;
    check L20() else D7();
  L12():
    rdepends2 = ld rdepends;
    check L14() else D4();
  L13():
    r13 = dyn base[, , nomatch](<sym rdepends>, <lang `[`(db, , "Package")>, 0);
    goto L4(r13);
  D4():
    deopt 18 [rdepends2];
  D7():
    deopt 31 [db7];
  L14():
    rdepends3 = force? rdepends2;
    checkMissing(rdepends3);
    db3 = ld db;
    check L15() else D5();
  L20():
    db8 = force? db7;
    checkMissing(db8);
    c1 = `is.object`(db8);
    if c1 then L21() else L22(db8);
  D5():
    deopt 20 [db3];
  L6(dx3):
    popenv;
    return dx3;
  L15():
    db4 = force? db3;
    checkMissing(db4);
    c = `is.object`(db4);
    if c then L16() else L17();
  L21():
    dr2 = tryDispatchBuiltin.1("[", db8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(db10):
    pos = ld pos;
    check L24() else D8();
  D8():
    deopt 33 [db10, pos];
  L5(dx1):
    match = ldf match in base;
    r16 = dyn match(rdepends3, dx1, 0, NULL);
    check L19() else D6();
  L16():
    dr = tryDispatchBuiltin.1("[", db4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17();
  L17():
    __ = ldf `[` in base;
    r15 = dyn __(db4, <missing>, "Package");
    goto L5(r15);
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L24():
    pos1 = force? pos;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D6():
    deopt 29 [r16];
  L7(db13, pos4, r18):
    __1 = ldf `[` in base;
    r20 = dyn __1(db13, pos4, r18);
    goto L6(r20);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L19():
    goto L4(r16);
  L25():
    c2 = ldf c in base;
    r19 = dyn c2("Package", "Version", "Maintainer");
    check L27() else D9();
  L26():
    r17 = dyn base1("Package", "Version", "Maintainer");
    goto L7(db10, pos1, r17);
  D9():
    deopt 40 [db10, pos1, r19];
  L27():
    goto L7(db10, pos1, r19);
  }
}