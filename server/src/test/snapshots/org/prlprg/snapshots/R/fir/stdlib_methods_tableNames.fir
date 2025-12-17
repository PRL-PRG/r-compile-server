fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1452058138;
    st tableNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1452058138(generic, where, table) {
  (reg generic:*, reg where:*, reg table:*) -+> V { var generic:*, var where:*, var table:*, reg getGeneric:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing1:cls, reg r7:V, reg c1:L, reg _getMethodsTable:cls, reg fdef:*, reg fdef1:V, reg p1:p(V +), reg r9:V, reg r10:V, reg get:cls, reg _TableMetaName:cls, reg __:cls, reg r11:V, reg p2:p(V +), reg __1:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg table1:*, reg table2:V, reg names:cls, reg r25:V |
    mkenv;
    st generic = generic;
    st where = where;
    st table = table;
    getGeneric = ldf getGeneric;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r1 = dyn getGeneric(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st fdef = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r3):
    c = `as.logical`(r3);
    if c then L11() else L1();
  L9():
    missing = ldf missing in base;
    r4 = dyn missing(<sym table>);
    goto L0(r4);
  L10():
    r2 = dyn base(<sym table>);
    goto L0(r2);
  L1():
    goto L5();
  L5():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L11():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(r6):
    c1 = `as.logical`(r6);
    if c1 then L14() else L3();
  L6(r24):
    popenv;
    return r24;
  L12():
    missing1 = ldf missing in base;
    r7 = dyn missing1(<sym where>);
    goto L2(r7);
  L13():
    r5 = dyn base1(<sym where>);
    goto L2(r5);
  L21():
    table1 = ld table;
    check L23() else D6();
  L22():
    r23 = dyn base3(<sym table>);
    goto L6(r23);
  D6():
    deopt 28 [table1];
  L3():
    get = ldf get;
    check L18() else D4();
  L4(r10):
    st table = r10;
    goto L5();
  L14():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L15() else D2();
  L23():
    table2 = force? table1;
    checkMissing(table2);
    names = ldf names in base;
    r25 = dyn names(table2);
    check L24() else D7();
  D2():
    deopt 12 [];
  D4():
    deopt 16 [];
  D7():
    deopt 31 [r25];
  L15():
    p1 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r9 = dyn _getMethodsTable(p1);
    check L16() else D3();
  L18():
    p4 = prom<V +>{
      _TableMetaName = ldf `.TableMetaName`;
      p2 = prom<V +>{
        __ = ldf `@` in base;
        r11 = dyn __(<sym fdef>, <sym generic>);
        return r11;
      };
      p3 = prom<V +>{
        __1 = ldf `@` in base;
        r13 = dyn __1(<sym fdef>, <sym package>);
        return r13;
      };
      r15 = dyn _TableMetaName(p2, p3);
      return r15;
    };
    p5 = prom<V +>{
      sym2 = ldf `as.environment`;
      base2 = ldf `as.environment` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      as_environment = ldf `as.environment` in base;
      r19 = dyn as_environment(where2);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym where>);
      goto L0(r17);
    };
    r21 = dyn get[, envir, inherits](p4, p5, FALSE);
    check L19() else D5();
  L24():
    goto L6(r25);
  D3():
    deopt 14 [r9];
  D5():
    deopt 22 [r21];
  L16():
    goto L4(r9);
  L19():
    goto L4(r21);
  }
}