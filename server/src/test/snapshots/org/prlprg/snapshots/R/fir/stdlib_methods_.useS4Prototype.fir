fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3357840545;
    st `.useS4Prototype` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3357840545(on, where) {
  (reg on:*, reg where:*) -+> V { var on:*, reg on_isMissing:L, reg on_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _methodsNamespace:*, reg _methodsNamespace1:V, reg p:p(V +), reg on1:*, reg on2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg C_Rf_allocS4Object:*, reg C_Rf_allocS4Object1:V, reg vargs:dots, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg _assignOverBinding:cls, reg where1:*, reg where2:V, reg p1:p(V +), reg pp:*, reg pp1:V, reg p2:p(V +), reg r10:V |
    mkenv;
    on_isMissing = missing.0(on);
    if on_isMissing then L0(TRUE) else L0(on);
  L0(on_orDefault):
    st on = on_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p = prom<V +>{
      _methodsNamespace = ld `.methodsNamespace`;
      _methodsNamespace1 = force? _methodsNamespace;
      checkMissing(_methodsNamespace1);
      return _methodsNamespace1;
    };
    goto L2(p);
  L2(where_orDefault):
    st where = where_orDefault;
    on1 = ld on;
    check L7() else D0();
  D0():
    deopt 0 [on1];
  L7():
    on2 = force? on1;
    checkMissing(on2);
    c = `as.logical`(on2);
    if c then L8() else L3();
  L3():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L5():
    _assignOverBinding = ldf `.assignOverBinding`;
    check L16() else D3();
  L8():
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  D3():
    deopt 13 [];
  L4(r2):
    st pp = r2;
    goto L5();
  L6(r6):
    st pp = r6;
    goto L5();
  L9():
    C_Rf_allocS4Object = ld C_Rf_allocS4Object;
    check L11() else D1();
  L10():
    r1 = dyn base(<sym C_Rf_allocS4Object>);
    goto L4(r1);
  L13():
    list = ldf list in base;
    r7 = dyn list();
    check L15() else D2();
  L14():
    r5 = dyn base1();
    goto L6(r5);
  L16():
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p2 = prom<V +>{
      pp = ld pp;
      pp1 = force? pp;
      checkMissing(pp1);
      return pp1;
    };
    r10 = dyn _assignOverBinding[, where, , ](".defaultPrototype", p1, p2, FALSE);
    check L17() else D4();
  D1():
    deopt 3 [C_Rf_allocS4Object];
  D2():
    deopt 10 [r7];
  D4():
    deopt 19 [r10];
  L11():
    C_Rf_allocS4Object1 = force? C_Rf_allocS4Object;
    checkMissing(C_Rf_allocS4Object1);
    vargs = dots[];
    r3 = `.Call`(C_Rf_allocS4Object1, vargs, <missing>);
    goto L4(r3);
  L15():
    goto L6(r7);
  L17():
    popenv;
    return r10;
  }
}