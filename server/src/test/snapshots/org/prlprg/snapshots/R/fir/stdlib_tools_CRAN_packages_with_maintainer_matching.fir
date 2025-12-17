fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2453577050;
    st CRAN_packages_with_maintainer_matching = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2453577050(pattern, db, `...`) {
  (reg pattern:*, reg db:*, reg ddd:dots) -+> V { var pattern:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, reg CRAN_package_db:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg grep:cls, reg pattern1:*, reg pattern2:V, reg p1:p(V +), reg db1:*, reg db2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg p2:p(V +), reg ddd1:dots?, reg r5:V, reg db5:*, reg db6:V, reg c1:L, reg db8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r6:V |
    mkenv;
    st pattern = pattern;
    db_isMissing = missing.0(db);
    if db_isMissing then L0() else L1(db);
  L0():
    p = prom<V +>{
      CRAN_package_db = ldf CRAN_package_db;
      r = dyn CRAN_package_db();
      return r;
    };
    goto L1(p);
  L1(db_orDefault):
    st db = db_orDefault;
    st `...` = ddd;
    grep = ldf grep;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p1 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p2 = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      c = `is.object`(db2);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", db2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r3 = dyn __(db2, <missing>, "Maintainer");
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    r5 = dyn grep[, , `...`](p1, p2, ddd1);
    check L4() else D1();
  D1():
    deopt 5 [r5];
  L4():
    st ind = r5;
    db5 = ld db;
    check L5() else D2();
  D2():
    deopt 7 [db5];
  L5():
    db6 = force? db5;
    checkMissing(db6);
    c1 = `is.object`(db6);
    if c1 then L6() else L7(db6);
  L2(dx3):
    popenv;
    return dx3;
  L6():
    dr2 = tryDispatchBuiltin.1("[", db6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(db8):
    ind = ld ind;
    check L9() else D3();
  D3():
    deopt 9 [db8, ind];
  L8():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L9():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r6 = dyn __1(db8, ind1, "Package");
    goto L2(r6);
  }
}