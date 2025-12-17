fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner330488393;
    st `.getOrMakeMethodsList` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner330488393(f, where, genericFun) {
  (reg f:*, reg where:*, reg genericFun:*) -+> V { var f:*, var where:*, var genericFun:*, reg getMethodsMetaData:cls, reg f1:*, reg f2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg allMethods:*, reg allMethods1:V, reg c:V, reg c1:L, reg __:cls, reg r5:V, reg c2:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r8:V, reg warning:cls, reg r9:V, reg allMethods2:*, reg allMethods3:V |
    mkenv;
    st f = f;
    st where = where;
    st genericFun = genericFun;
    getMethodsMetaData = ldf getMethodsMetaData;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn getMethodsMetaData[, where](p, p1);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    st allMethods = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r4):
    c1 = `as.logical`(r4);
    if c1 then L9() else L1();
  L6():
    allMethods = ld allMethods;
    check L8() else D2();
  L7():
    r3 = dyn base(<sym allMethods>);
    goto L0(r3);
  D2():
    deopt 8 [allMethods];
  L1():
    goto L3();
  L3():
    allMethods2 = ld allMethods;
    check L16() else D5();
  L8():
    allMethods1 = force? allMethods;
    checkMissing(allMethods1);
    c = `==`(allMethods1, NULL);
    goto L0(c);
  L9():
    __ = ldf `@` in base;
    r5 = dyn __(<sym genericFun>, <sym signature>);
    c2 = `is.object`(r5);
    if c2 then L10() else L11(r5);
  D5():
    deopt 23 [allMethods2];
  L2(dx1):
    st argName = dx1;
    warning = ldf warning;
    check L13() else D3();
  L10():
    dr = tryDispatchBuiltin.1("[[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r7):
    __1 = ldf `[[` in base;
    r8 = dyn __1(r7, 1);
    goto L2(r8);
  L16():
    allMethods3 = force? allMethods2;
    checkMissing(allMethods3);
    popenv;
    return allMethods3;
  D3():
    deopt 18 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    r9 = dyn warning("\"MethodsList\" is defunct; allMethods now are empty");
    check L14() else D4();
  D4():
    deopt 20 [r9];
  L14():
    goto L3();
  }
}