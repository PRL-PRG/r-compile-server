fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3758338652;
    st CRAN_package_maintainers_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3758338652(db) {
  (reg db:*) -+> V { var db:*, reg db_isMissing:L, reg db_orDefault:*, reg CRAN_package_db:cls, reg r:V, reg p:p(V +), reg db1:*, reg db2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg tolower:cls, reg sub:cls, reg maintainer:*, reg maintainer1:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg gsub:cls, reg maintainer2:*, reg maintainer3:V, reg p3:p(V +), reg r8:V, reg list2DF:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg db5:*, reg db6:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg address:*, reg address1:V, reg maintainer4:*, reg maintainer5:V, reg list:cls, reg r12:V, reg p4:p(V +), reg r14:V |
    mkenv;
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
    db1 = ld db;
    check L3() else D0();
  D0():
    deopt 0 [db1];
  L3():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L4() else L5();
  L2(dx1):
    st maintainer = dx1;
    tolower = ldf tolower;
    check L7() else D1();
  L4():
    dr = tryDispatchBuiltin.1("[", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5();
  L5():
    __ = ldf `[` in base;
    r2 = dyn __(db2, <missing>, "Maintainer");
    goto L2(r2);
  D1():
    deopt 8 [];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L7():
    p2 = prom<V +>{
      sub = ldf sub;
      p1 = prom<V +>{
        maintainer = ld maintainer;
        maintainer1 = force? maintainer;
        checkMissing(maintainer1);
        return maintainer1;
      };
      r4 = dyn sub(".*<(.*)>.*", "\\1", p1);
      return r4;
    };
    r6 = dyn tolower(p2);
    check L8() else D2();
  D2():
    deopt 10 [r6];
  L8():
    st address = r6;
    gsub = ldf gsub;
    check L9() else D3();
  D3():
    deopt 13 [];
  L9():
    p3 = prom<V +>{
      maintainer2 = ld maintainer;
      maintainer3 = force? maintainer2;
      checkMissing(maintainer3);
      return maintainer3;
    };
    r8 = dyn gsub[, , , fixed]("\n", " ", p3, TRUE);
    check L10() else D4();
  D4():
    deopt 19 [r8];
  L10():
    st maintainer = r8;
    list2DF = ldf list2DF;
    check L11() else D5();
  D5():
    deopt 22 [];
  L11():
    p4 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r10):
      return r10;
    L2():
      db5 = ld db;
      db6 = force? db5;
      checkMissing(db6);
      c1 = `is.object`(db6);
      if c1 then L4() else L5();
    L3():
      r9 = dyn base[Package, Address, Maintainer](<lang `[`(db, , "Package")>, <sym address>, <sym maintainer>);
      goto L0(r9);
    L1(dx3):
      address = ld address;
      address1 = force? address;
      checkMissing(address1);
      maintainer4 = ld maintainer;
      maintainer5 = force? maintainer4;
      checkMissing(maintainer5);
      list = ldf list in base;
      r12 = dyn list(dx3, address1, maintainer5);
      goto L0(r12);
    L4():
      dr2 = tryDispatchBuiltin.1("[", db6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5();
    L5():
      __1 = ldf `[` in base;
      r11 = dyn __1(db6, <missing>, "Package");
      goto L1(r11);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r14 = dyn list2DF(p4);
    check L12() else D6();
  D6():
    deopt 24 [r14];
  L12():
    popenv;
    return r14;
  }
}