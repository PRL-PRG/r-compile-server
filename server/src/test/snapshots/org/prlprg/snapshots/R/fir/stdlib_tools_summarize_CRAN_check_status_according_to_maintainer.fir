fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916907186;
    st summarize_CRAN_check_status_according_to_maintainer = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916907186(db, results, details, issues) {
  (reg db:*, reg results:*, reg details:*, reg issues:*) -+> V { var db:*, reg db_isMissing:L, reg db_orDefault:*, reg CRAN_package_db:cls, reg r:V, reg p:p(V +), var results:*, reg results_isMissing:L, reg results_orDefault:*, reg CRAN_check_results:cls, reg r2:V, reg p1:p(V +), var details:*, reg details_isMissing:L, reg details_orDefault:*, reg CRAN_check_details:cls, reg r4:V, reg p2:p(V +), var issues:*, reg issues_isMissing:L, reg issues_orDefault:*, reg CRAN_check_issues:cls, reg r6:V, reg p3:p(V +), reg duplicated:cls, reg db1:*, reg db2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p4:p(V +), reg r10:V, reg r11:V, reg db5:*, reg db6:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg tolower:cls, reg sub:cls, reg maintainer:*, reg maintainer1:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg split:cls, reg format:cls, reg summarize_CRAN_check_status:cls, reg db9:*, reg db10:V, reg c2:L, reg db12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind:*, reg ind1:V, reg __2:cls, reg r17:V, reg p7:p(V +), reg results1:*, reg results2:V, reg p8:p(V +), reg details1:*, reg details2:V, reg p9:p(V +), reg issues1:*, reg issues2:V, reg p10:p(V +), reg r22:V, reg p11:p(V +), reg r24:V, reg p12:p(V +), reg maintainer2:*, reg maintainer3:V, reg c3:L, reg maintainer5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r26:V, reg p13:p(V +), reg r28:V |
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
    results_isMissing = missing.0(results);
    if results_isMissing then L2() else L3(results);
  L2():
    p1 = prom<V +>{
      CRAN_check_results = ldf CRAN_check_results;
      r2 = dyn CRAN_check_results();
      return r2;
    };
    goto L3(p1);
  L3(results_orDefault):
    st results = results_orDefault;
    details_isMissing = missing.0(details);
    if details_isMissing then L4() else L5(details);
  L4():
    p2 = prom<V +>{
      CRAN_check_details = ldf CRAN_check_details;
      r4 = dyn CRAN_check_details();
      return r4;
    };
    goto L5(p2);
  L5(details_orDefault):
    st details = details_orDefault;
    issues_isMissing = missing.0(issues);
    if issues_isMissing then L6() else L7(issues);
  L6():
    p3 = prom<V +>{
      CRAN_check_issues = ldf CRAN_check_issues;
      r6 = dyn CRAN_check_issues();
      return r6;
    };
    goto L7(p3);
  L7(issues_orDefault):
    st issues = issues_orDefault;
    duplicated = ldf duplicated;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p4 = prom<V +>{
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
      r8 = dyn __(db2, <missing>, "Package");
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn duplicated(p4);
    check L10() else D1();
  D1():
    deopt 3 [r10];
  L10():
    r11 = `!`(r10);
    st ind = r11;
    db5 = ld db;
    check L11() else D2();
  D2():
    deopt 6 [db5];
  L11():
    db6 = force? db5;
    checkMissing(db6);
    c1 = `is.object`(db6);
    if c1 then L12() else L13();
  L8(dx3):
    st maintainer = dx3;
    tolower = ldf tolower;
    check L15() else D3();
  L12():
    dr2 = tryDispatchBuiltin.1("[", db6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13();
  L13():
    __1 = ldf `[` in base;
    r12 = dyn __1(db6, <missing>, "Maintainer");
    goto L8(r12);
  D3():
    deopt 14 [];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L15():
    p6 = prom<V +>{
      sub = ldf sub;
      p5 = prom<V +>{
        maintainer = ld maintainer;
        maintainer1 = force? maintainer;
        checkMissing(maintainer1);
        return maintainer1;
      };
      r14 = dyn sub(".*<(.*)>.*", "\\1", p5);
      return r14;
    };
    r16 = dyn tolower(p6);
    check L16() else D4();
  D4():
    deopt 16 [r16];
  L16():
    st maintainer = r16;
    split = ldf split;
    check L17() else D5();
  D5():
    deopt 19 [];
  L17():
    p12 = prom<V +>{
      format = ldf format;
      p11 = prom<V +>{
        summarize_CRAN_check_status = ldf summarize_CRAN_check_status;
        p7 = prom<V +>{
          db9 = ld db;
          db10 = force? db9;
          checkMissing(db10);
          c2 = `is.object`(db10);
          if c2 then L1() else L2(db10);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", db10);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(db12):
          ind = ld ind;
          ind1 = force? ind;
          __2 = ldf `[` in base;
          r17 = dyn __2(db12, ind1, "Package");
          goto L0(r17);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        p8 = prom<V +>{
          results1 = ld results;
          results2 = force? results1;
          checkMissing(results2);
          return results2;
        };
        p9 = prom<V +>{
          details1 = ld details;
          details2 = force? details1;
          checkMissing(details2);
          return details2;
        };
        p10 = prom<V +>{
          issues1 = ld issues;
          issues2 = force? issues1;
          checkMissing(issues2);
          return issues2;
        };
        r22 = dyn summarize_CRAN_check_status(p7, p8, p9, p10);
        return r22;
      };
      r24 = dyn format[, header](p11, TRUE);
      return r24;
    };
    p13 = prom<V +>{
      maintainer2 = ld maintainer;
      maintainer3 = force? maintainer2;
      checkMissing(maintainer3);
      c3 = `is.object`(maintainer3);
      if c3 then L1() else L2(maintainer3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", maintainer3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(maintainer5):
      ind2 = ld ind;
      ind3 = force? ind2;
      __3 = ldf `[` in base;
      r26 = dyn __3(maintainer5, ind3);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r28 = dyn split(p12, p13);
    check L18() else D6();
  D6():
    deopt 22 [r28];
  L18():
    popenv;
    return r28;
  }
}