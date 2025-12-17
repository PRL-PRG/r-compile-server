fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st make_sysdata_rda = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg get_IANA_URI_scheme_db:cls, reg r:V, reg get_IANA_HTTP_status_code_db:cls, reg r1:V, reg IANA_HTTP_status_code_db:*, reg IANA_HTTP_status_code_db1:V, reg c:L, reg IANA_HTTP_status_code_db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg IANA_HTTP_status_code_db4:*, reg IANA_HTTP_status_code_db5:V, reg c1:L, reg IANA_HTTP_status_code_db7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg l:*, reg names__:cls, reg r4:V, reg save:cls, reg IANA_URI_scheme_db:*, reg IANA_URI_scheme_db1:V, reg p:p(V +), reg IANA_HTTP_status_code_db8:*, reg IANA_HTTP_status_code_db9:V, reg p1:p(V +), reg table_of_HTTP_status_codes:*, reg table_of_HTTP_status_codes1:V, reg p2:p(V +), reg r8:V |
    mkenv;
    get_IANA_URI_scheme_db = ldf get_IANA_URI_scheme_db;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn get_IANA_URI_scheme_db();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    st IANA_URI_scheme_db = r;
    get_IANA_HTTP_status_code_db = ldf get_IANA_HTTP_status_code_db;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    r1 = dyn get_IANA_HTTP_status_code_db();
    check L3() else D3();
  D3():
    deopt 6 [r1];
  L3():
    st IANA_HTTP_status_code_db = r1;
    IANA_HTTP_status_code_db = ld IANA_HTTP_status_code_db;
    check L4() else D4();
  D4():
    deopt 8 [IANA_HTTP_status_code_db];
  L4():
    IANA_HTTP_status_code_db1 = force? IANA_HTTP_status_code_db;
    checkMissing(IANA_HTTP_status_code_db1);
    c = `is.object`(IANA_HTTP_status_code_db1);
    if c then L6() else L7(IANA_HTTP_status_code_db1);
  L5(dx1):
    st table_of_HTTP_status_codes = dx1;
    IANA_HTTP_status_code_db4 = ld IANA_HTTP_status_code_db;
    check L9() else D5();
  L6():
    dr = tryDispatchBuiltin.1("$", IANA_HTTP_status_code_db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(IANA_HTTP_status_code_db3):
    r2 = `$`(IANA_HTTP_status_code_db3, <sym Description>);
    goto L5(r2);
  D5():
    deopt 12 [IANA_HTTP_status_code_db4];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    IANA_HTTP_status_code_db5 = force? IANA_HTTP_status_code_db4;
    checkMissing(IANA_HTTP_status_code_db5);
    c1 = `is.object`(IANA_HTTP_status_code_db5);
    if c1 then L11() else L12(IANA_HTTP_status_code_db5);
  L10(dx3):
    l = ld table_of_HTTP_status_codes;
    names__ = ldf `names<-`;
    check L14() else D6();
  L11():
    dr2 = tryDispatchBuiltin.1("$", IANA_HTTP_status_code_db5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(IANA_HTTP_status_code_db7):
    r3 = `$`(IANA_HTTP_status_code_db7, <sym Value>);
    goto L10(r3);
  D6():
    deopt 16 [dx3, l, dx3];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L14():
    r4 = dyn names__(l, NULL, dx3);
    check L15() else D7();
  D7():
    deopt 18 [dx3, r4];
  L15():
    st table_of_HTTP_status_codes = r4;
    save = ldf save;
    check L16() else D8();
  D8():
    deopt 21 [];
  L16():
    p = prom<V +>{
      IANA_URI_scheme_db = ld IANA_URI_scheme_db;
      IANA_URI_scheme_db1 = force? IANA_URI_scheme_db;
      checkMissing(IANA_URI_scheme_db1);
      return IANA_URI_scheme_db1;
    };
    p1 = prom<V +>{
      IANA_HTTP_status_code_db8 = ld IANA_HTTP_status_code_db;
      IANA_HTTP_status_code_db9 = force? IANA_HTTP_status_code_db8;
      checkMissing(IANA_HTTP_status_code_db9);
      return IANA_HTTP_status_code_db9;
    };
    p2 = prom<V +>{
      table_of_HTTP_status_codes = ld table_of_HTTP_status_codes;
      table_of_HTTP_status_codes1 = force? table_of_HTTP_status_codes;
      checkMissing(table_of_HTTP_status_codes1);
      return table_of_HTTP_status_codes1;
    };
    r8 = dyn save[, , , file, compress](p, p1, p2, "sysdata.rda", TRUE);
    check L17() else D9();
  D9():
    deopt 29 [r8];
  L17():
    popenv;
    return r8;
  }
}