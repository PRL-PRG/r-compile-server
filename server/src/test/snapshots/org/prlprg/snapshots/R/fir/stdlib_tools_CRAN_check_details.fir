fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3948649135;
    st CRAN_check_details = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3948649135(flavors) {
  (reg flavors:*) -+> V { var flavors:*, reg flavors_isMissing:L, reg flavors_orDefault:*, reg read_CRAN_object:cls, reg CRAN_baseurl_for_web_area:cls, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg flavors1:*, reg flavors2:V, reg c:V, reg r5:V, reg c1:L, reg db:*, reg db1:V, reg c2:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg db9:V, reg r9:V, reg db10:*, reg db11:V, reg c3:L, reg db14:V, reg db15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg db17:V, reg dx3:V, reg r10:V, reg flavors3:*, reg flavors4:V, reg match:cls, reg r11:V, reg is_na:cls, reg r12:V, reg r13:V, reg __:cls, reg r14:V, reg db18:*, reg db19:V |
    mkenv;
    flavors_isMissing = missing.0(flavors);
    if flavors_isMissing then L0(NULL) else L0(flavors);
  L0(flavors_orDefault):
    st flavors = flavors_orDefault;
    read_CRAN_object = ldf read_CRAN_object;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      CRAN_baseurl_for_web_area = ldf CRAN_baseurl_for_web_area;
      r = dyn CRAN_baseurl_for_web_area();
      return r;
    };
    r2 = dyn read_CRAN_object(p, "web/checks/check_details.rds");
    check L8() else D1();
  D1():
    deopt 4 [r2];
  L8():
    st db = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L12() else L2();
  L9():
    flavors1 = ld flavors;
    check L11() else D2();
  L10():
    r3 = dyn base(<sym flavors>);
    goto L1(r3);
  D2():
    deopt 7 [flavors1];
  L2():
    goto L6();
  L6():
    db18 = ld db;
    check L30() else D8();
  L11():
    flavors2 = force? flavors1;
    checkMissing(flavors2);
    c = `==`(flavors2, NULL);
    goto L1(c);
  L12():
    db = ld db;
    check L13() else D3();
  D3():
    deopt 11 [db];
  D8():
    deopt 35 [db18];
  L13():
    db1 = force? db;
    checkMissing(db1);
    c2 = `is.object`(db1);
    if c2 then L14() else L15(db1);
  L30():
    db19 = force? db18;
    checkMissing(db19);
    popenv;
    return db19;
  L3(dx1):
    st db = dx1;
    goto L6();
  L14():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(db3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L4(r7):
    r13 = `!`(r7);
    __ = ldf `[` in base;
    r14 = dyn __(db1, r13, <missing>);
    goto L3(r14);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L17():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L18():
    r6 = dyn base1(<lang match(`$`(db, Flavor), flavors)>);
    goto L4(r6);
  L5(db9, r9):
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(r9);
    check L28() else D7();
  L19():
    db10 = ld db;
    check L21() else D4();
  L20():
    r8 = dyn base2(<lang `$`(db, Flavor)>, <sym flavors>);
    goto L5(db3, r8);
  D4():
    deopt 17 [db3, db10];
  D7():
    deopt 27 [db9, r12];
  L21():
    db11 = force? db10;
    checkMissing(db11);
    c3 = `is.object`(db11);
    if c3 then L23() else L24(db3, db11);
  L28():
    goto L4(r12);
  L22(db17, dx3):
    flavors3 = ld flavors;
    check L26() else D5();
  L23():
    dr2 = tryDispatchBuiltin.1("$", db11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(db3, dr2);
  L24(db14, db15):
    r10 = `$`(db15, <sym Flavor>);
    goto L22(db14, r10);
  D5():
    deopt 20 [db17, flavors3];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(db3, dx2);
  L26():
    flavors4 = force? flavors3;
    checkMissing(flavors4);
    match = ldf match in base;
    r11 = dyn match(dx3, flavors4, NA_INT, NULL);
    check L27() else D6();
  D6():
    deopt 25 [db17, r11];
  L27():
    goto L5(db17, r11);
  }
}