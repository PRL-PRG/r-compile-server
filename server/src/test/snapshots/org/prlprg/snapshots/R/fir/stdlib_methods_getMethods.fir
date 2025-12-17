fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4070425121;
    st getMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4070425121(f, where, table) {
  (reg f:*, reg where:*, reg table:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var table:*, reg table_isMissing:L, reg table_orDefault:*, reg table1:*, reg table2:V, reg r4:V, reg c:L, reg _MlistDefunct:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg getGeneric:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r12:V, reg __:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg fdef:*, reg fdef1:V, reg c1:V, reg r16:V, reg c2:L, reg table3:*, reg table4:V, reg c3:L, reg getMethodsForDispatch:cls, reg fdef2:*, reg fdef3:V, reg p4:p(V +), reg r18:V |
    mkenv;
    st f = f;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    table_isMissing = missing.0(table);
    if table_isMissing then L2(FALSE) else L2(table);
  L2(table_orDefault):
    st table = table_orDefault;
    table1 = ld table;
    check L9() else D0();
  D0():
    deopt 0 [table1];
  L9():
    table2 = force? table1;
    checkMissing(table2);
    r4 = `!`(table2);
    c = `as.logical`(r4);
    if c then L10() else L3();
  L3():
    goto L4();
  L4():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L10():
    _MlistDefunct = ldf `.MlistDefunct`;
    check L11() else D1();
  D1():
    deopt 4 [];
  L5(r8):
    st nowhere = r8;
    getGeneric = ldf getGeneric;
    check L16() else D3();
  L11():
    r5 = dyn _MlistDefunct("getMethods", "findMethods");
    check L12() else D2();
  L14():
    missing = ldf missing in base;
    r9 = dyn missing(<sym where>);
    goto L5(r9);
  L15():
    r7 = dyn base(<sym where>);
    goto L5(r7);
  D2():
    deopt 7 [r5];
  D3():
    deopt 15 [];
  L12():
    goto L4();
  L16():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r12 = dyn getGeneric[, where](p2, p3);
    check L17() else D4();
  D4():
    deopt 19 [r12];
  L17():
    st fdef = r12;
    __ = ldf `@` in base;
    r13 = dyn __(<sym fdef>, <sym generic>);
    st f = r13;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L6(r15):
    r16 = `!`(r15);
    c2 = `as.logical`(r16);
    if c2 then L21() else L7();
  L18():
    fdef = ld fdef;
    check L20() else D5();
  L19():
    r14 = dyn base1(<sym fdef>);
    goto L6(r14);
  D5():
    deopt 25 [fdef];
  L7():
    invisible.0();
    popenv;
    return NULL;
  L20():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c1 = `==`(fdef1, NULL);
    goto L6(c1);
  L21():
    table3 = ld table;
    check L22() else D6();
  D6():
    deopt 29 [table3];
  L22():
    table4 = force? table3;
    checkMissing(table4);
    c3 = `as.logical`(table4);
    if c3 then L23() else L8();
  L8():
    invisible.0();
    popenv;
    return NULL;
  L23():
    getMethodsForDispatch = ldf getMethodsForDispatch;
    check L24() else D7();
  D7():
    deopt 32 [];
  L24():
    p4 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r18 = dyn getMethodsForDispatch(p4, TRUE);
    check L25() else D8();
  D8():
    deopt 35 [r18];
  L25():
    popenv;
    return r18;
  }
}