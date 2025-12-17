fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner725573545;
    st `.getImplicitGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner725573545(name, where, pkg) {
  (reg name:*, reg where:*, reg pkg:*) -+> V { var name:*, var where:*, var pkg:*, reg pkg_isMissing:L, reg pkg_orDefault:*, reg _getImplicitGenericFromCache:cls, reg name1:*, reg name2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg pkg1:*, reg pkg2:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg value:*, reg value1:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c6:L, reg r7:V, reg where3:*, reg where4:V, reg c7:L, reg c9:L, reg where6:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg _ImplicitGenericsMetaName:*, reg _ImplicitGenericsMetaName1:V, reg __:cls, reg r8:V, reg c12:V, reg r9:V, reg c13:L, reg c14:V, reg c16:L, reg _getGenericFromCacheTable:cls, reg name3:*, reg name4:V, reg p3:p(V +), reg where7:*, reg where8:V, reg p4:p(V +), reg pkg3:*, reg pkg4:V, reg p5:p(V +), reg tbl:*, reg tbl1:V, reg p6:p(V +), reg r14:V, reg value2:*, reg value3:V |
    mkenv;
    st name = name;
    st where = where;
    pkg_isMissing = missing.0(pkg);
    if pkg_isMissing then L0("") else L0(pkg);
  L0(pkg_orDefault):
    st pkg = pkg_orDefault;
    _getImplicitGenericFromCache = ldf `.getImplicitGenericFromCache`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p2 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r3 = dyn _getImplicitGenericFromCache(p, p1, p2);
    check L7() else D1();
  D1():
    deopt 5 [r3];
  L7():
    st value = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L11() else L2(c1);
  L8():
    value = ld value;
    check L10() else D2();
  L9():
    r4 = dyn base(<sym value>);
    goto L1(r4);
  D2():
    deopt 8 [value];
  L2(c3):
    c16 = `as.logical`(c3);
    if c16 then L20() else L5();
  L10():
    value1 = force? value;
    checkMissing(value1);
    c = `==`(value1, NULL);
    goto L1(c);
  L11():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L3(c6, r7):
    r9 = `!`(r7);
    c13 = `as.logical`(r9);
    c14 = `&&`(c6, c13);
    goto L2(c14);
  L5():
    value2 = ld value;
    check L24() else D7();
  L12():
    where3 = ld where;
    check L14() else D3();
  L13():
    r6 = dyn base1(<lang `<-`(tbl, `[[`(where, .ImplicitGenericsMetaName))>);
    goto L3(c1, r6);
  L20():
    _getGenericFromCacheTable = ldf `.getGenericFromCacheTable`;
    check L21() else D5();
  D3():
    deopt 12 [c1, where3];
  D5():
    deopt 22 [];
  D7():
    deopt 28 [value2];
  L14():
    where4 = force? where3;
    checkMissing(where4);
    c7 = `is.object`(where4);
    if c7 then L15() else L16(c1, where4);
  L21():
    p3 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p4 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    p5 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p6 = prom<V +>{
      tbl = ld tbl;
      tbl1 = force? tbl;
      checkMissing(tbl1);
      return tbl1;
    };
    r14 = dyn _getGenericFromCacheTable(p3, p4, p5, p6);
    check L22() else D6();
  L24():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D6():
    deopt 27 [r14];
  L4(c11, dx1):
    st tbl = dx1;
    c12 = `==`(dx1, NULL);
    goto L3(c11, c12);
  L15():
    dr = tryDispatchBuiltin.1("[[", where4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(c1, dr);
  L16(c9, where6):
    _ImplicitGenericsMetaName = ld `.ImplicitGenericsMetaName`;
    check L18() else D4();
  L22():
    popenv;
    return r14;
  D4():
    deopt 14 [c9, where6, _ImplicitGenericsMetaName];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c1, dx);
  L18():
    _ImplicitGenericsMetaName1 = force? _ImplicitGenericsMetaName;
    __ = ldf `[[` in base;
    r8 = dyn __(where6, _ImplicitGenericsMetaName1);
    goto L4(c9, r8);
  }
}