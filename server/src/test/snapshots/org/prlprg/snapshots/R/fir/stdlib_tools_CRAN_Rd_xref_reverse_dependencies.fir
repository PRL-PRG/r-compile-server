fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner905672623;
    st CRAN_Rd_xref_reverse_dependencies = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner905672623(packages, db, details) {
  (reg packages:*, reg db:*, reg details:*) -+> V { var packages:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, var details:*, reg details_isMissing:L, reg details_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg c:V, reg c1:L, reg CRAN_Rd_xref_db_with_expansions:cls, reg r2:V, reg split_data_frame:cls, reg db3:*, reg db4:V, reg p:p(V +), reg db5:*, reg db6:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg c3:L, reg r9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg packages1:*, reg packages2:V, reg __1:cls, reg r10:V, reg details1:*, reg details2:V, reg r11:V, reg c4:L, reg lapply:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r13:cls, reg p3:p(V +), reg r15:V, reg y2:*, reg y3:V |
    mkenv;
    st packages = packages;
    db_isMissing = missing.0(db);
    if db_isMissing then L0(NULL) else L0(db);
  L0(db_orDefault):
    st db = db_orDefault;
    details_isMissing = missing.0(details);
    if details_isMissing then L1(FALSE) else L1(details);
  L1(details_orDefault):
    st details = details_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L11() else L3();
  L8():
    db1 = ld db;
    check L10() else D0();
  L9():
    r = dyn base(<sym db>);
    goto L2(r);
  D0():
    deopt 1 [db1];
  L3():
    goto L4();
  L4():
    split_data_frame = ldf `split.data.frame`;
    check L15() else D3();
  L10():
    db2 = force? db1;
    checkMissing(db2);
    c = `==`(db2, NULL);
    goto L2(c);
  L11():
    CRAN_Rd_xref_db_with_expansions = ldf CRAN_Rd_xref_db_with_expansions;
    check L12() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  L12():
    r2 = dyn CRAN_Rd_xref_db_with_expansions();
    check L13() else D2();
  L15():
    p = prom<V +>{
      db3 = ld db;
      db4 = force? db3;
      checkMissing(db4);
      return db4;
    };
    p1 = prom<V +>{
      db5 = ld db;
      db6 = force? db5;
      checkMissing(db6);
      c2 = `is.object`(db6);
      if c2 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", db6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r5 = dyn __(db6, <missing>, "T_Package");
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn split_data_frame(p, p1);
    check L16() else D4();
  D2():
    deopt 6 [r2];
  D4():
    deopt 14 [r7];
  L13():
    st db = r2;
    goto L4();
  L16():
    c3 = `is.object`(r7);
    if c3 then L17() else L18(r7);
  L5(dx3):
    st y = dx3;
    details1 = ld details;
    check L21() else D6();
  L17():
    dr2 = tryDispatchBuiltin.1("[", r7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(r9):
    packages1 = ld packages;
    check L20() else D5();
  D5():
    deopt 15 [r9, packages1];
  D6():
    deopt 19 [details1];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L20():
    packages2 = force? packages1;
    __1 = ldf `[` in base;
    r10 = dyn __1(r9, packages2);
    goto L5(r10);
  L21():
    details2 = force? details1;
    checkMissing(details2);
    r11 = `!`(details2);
    c4 = `as.logical`(r11);
    if c4 then L22() else L6();
  L6():
    goto L7();
  L7():
    y2 = ld y;
    check L26() else D9();
  L22():
    lapply = ldf lapply;
    check L23() else D7();
  D7():
    deopt 23 [];
  D9():
    deopt 30 [y2];
  L23():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p3 = prom<V +>{
      r13 = clos inner3708401697;
      return r13;
    };
    r15 = dyn lapply(p2, p3);
    check L24() else D8();
  L26():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D8():
    deopt 26 [r15];
  L24():
    st y = r15;
    goto L7();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg unique:cls, reg e1:*, reg e2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st e = e;
    unique = ldf unique;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r = dyn __(e2, <missing>, "S_Package");
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn unique(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}