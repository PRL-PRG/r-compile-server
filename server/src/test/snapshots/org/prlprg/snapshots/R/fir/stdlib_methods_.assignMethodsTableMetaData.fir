fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner952305147;
    st `.assignMethodsTableMetaData` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner952305147(name, generic, where, table) {
  (reg name:*, reg generic:*, reg where:*, reg table:*) -+> V { var name:*, var generic:*, var where:*, var table:*, reg _TableMetaName:cls, reg __:cls, reg r:V, reg p:p(V +), reg __1:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c:L, reg _copyEnv:cls, reg _getMethodsTable:cls, reg generic1:*, reg generic2:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg assign:cls, reg what:*, reg what1:V, reg p4:p(V +), reg table1:*, reg table2:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r17:V, reg p6:p(V +), reg r19:V |
    mkenv;
    st name = name;
    st generic = generic;
    st where = where;
    st table = table;
    _TableMetaName = ldf `.TableMetaName`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym generic>, <sym generic>);
      return r;
    };
    p1 = prom<V +>{
      __1 = ldf `@` in base;
      r2 = dyn __1(<sym generic>, <sym package>);
      return r2;
    };
    r4 = dyn _TableMetaName(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r4];
  L4():
    st what = r4;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r6):
    c = `as.logical`(r6);
    if c then L7() else L1();
  L5():
    missing = ldf missing in base;
    r7 = dyn missing(<sym table>);
    goto L0(r7);
  L6():
    r5 = dyn base(<sym table>);
    goto L0(r5);
  L1():
    goto L2();
  L2():
    assign = ldf assign;
    check L11() else D4();
  L7():
    _copyEnv = ldf `.copyEnv`;
    check L8() else D2();
  D2():
    deopt 10 [];
  D4():
    deopt 17 [];
  L8():
    p3 = prom<V +>{
      _getMethodsTable = ldf `.getMethodsTable`;
      p2 = prom<V +>{
        generic1 = ld generic;
        generic2 = force? generic1;
        checkMissing(generic2);
        return generic2;
      };
      r9 = dyn _getMethodsTable(p2);
      return r9;
    };
    r11 = dyn _copyEnv(p3);
    check L9() else D3();
  L11():
    p4 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p5 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    p6 = prom<V +>{
      sym1 = ldf `as.environment`;
      base1 = ldf `as.environment` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      as_environment = ldf `as.environment` in base;
      r17 = dyn as_environment(where2);
      goto L0(r17);
    L2():
      r15 = dyn base1(<sym where>);
      goto L0(r15);
    };
    r19 = dyn assign[, , envir](p4, p5, p6);
    check L12() else D5();
  D3():
    deopt 12 [r11];
  D5():
    deopt 22 [r19];
  L9():
    st table = r11;
    goto L2();
  L12():
    popenv;
    return r19;
  }
}