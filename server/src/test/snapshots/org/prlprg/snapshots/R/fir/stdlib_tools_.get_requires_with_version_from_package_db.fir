fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2289067196;
    st `.get_requires_with_version_from_package_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2289067196(db, category) {
  (reg db:*, reg category:*) -+> V { var db:*, var category:*, reg category_isMissing:L, reg category_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg category1:*, reg category2:V, reg p1:p(V +), reg r5:V, reg _in_:cls, reg category3:*, reg category4:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg db1:*, reg db2:V, reg names:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg c1:L, reg _split_dependencies:cls, reg db3:*, reg db4:V, reg c2:L, reg db6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg category5:*, reg category6:V, reg __:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg category7:*, reg category8:V, reg r15:V, reg c3:L, reg res:*, reg res1:V, reg c4:L, reg res3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg res6:V, reg r17:V, reg res7:*, reg res8:V, reg names1:cls, reg r18:V, reg r19:V, reg __1:cls, reg r20:V, reg res9:*, reg res10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg list:cls, reg r23:V |
    mkenv;
    st db = db;
    category_isMissing = missing.0(category);
    if category_isMissing then L0() else L1(category);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances");
      goto L0(r2);
    L2():
      r = dyn base("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances");
      goto L0(r);
    };
    goto L1(p);
  L1(category_orDefault):
    st category = category_orDefault;
    match_arg = ldf `match.arg`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      category1 = ld category;
      category2 = force? category1;
      checkMissing(category2);
      return category2;
    };
    r5 = dyn match_arg(p1);
    check L8() else D1();
  D1():
    deopt 3 [r5];
  L8():
    st category = r5;
    _in_ = ldf `%in%`;
    check L9() else D2();
  D2():
    deopt 6 [];
  L9():
    p2 = prom<V +>{
      category3 = ld category;
      category4 = force? category3;
      checkMissing(category4);
      return category4;
    };
    p3 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      names = ldf names in base;
      r9 = dyn names(db2);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym db>);
      goto L0(r7);
    };
    r11 = dyn _in_(p2, p3);
    check L10() else D3();
  D3():
    deopt 9 [r11];
  L10():
    c1 = `as.logical`(r11);
    if c1 then L11() else L2();
  L2():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L11():
    _split_dependencies = ldf `.split_dependencies`;
    check L12() else D4();
  D4():
    deopt 11 [];
  L6(r22):
    popenv;
    return r22;
  L12():
    p4 = prom<V +>{
      db3 = ld db;
      db4 = force? db3;
      checkMissing(db4);
      c2 = `is.object`(db4);
      if c2 then L1() else L2(db4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", db4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db6):
      category5 = ld category;
      category6 = force? category5;
      __ = ldf `[` in base;
      r12 = dyn __(db6, category6);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn _split_dependencies(p4);
    check L13() else D5();
  L27():
    list = ldf list in base;
    r23 = dyn list();
    check L29() else D11();
  L28():
    r21 = dyn base3();
    goto L6(r21);
  D5():
    deopt 13 [r14];
  D11():
    deopt 35 [r23];
  L13():
    st res = r14;
    category7 = ld category;
    check L14() else D6();
  L29():
    goto L6(r23);
  D6():
    deopt 15 [category7];
  L14():
    category8 = force? category7;
    checkMissing(category8);
    r15 = `==`(category8, "Depends");
    c3 = `as.logical`(r15);
    if c3 then L15() else L3();
  L3():
    res9 = ld res;
    check L25() else D10();
  L15():
    res = ld res;
    check L16() else D7();
  D7():
    deopt 19 [res];
  D10():
    deopt 30 [res9];
  L16():
    res1 = force? res;
    checkMissing(res1);
    c4 = `is.object`(res1);
    if c4 then L17() else L18(res1);
  L25():
    res10 = force? res9;
    checkMissing(res10);
    popenv;
    return res10;
  L4(dx3):
    popenv;
    return dx3;
  L17():
    dr2 = tryDispatchBuiltin.1("[", res1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(res3):
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L5(res6, r17):
    r19 = `!=`(r17, "R");
    __1 = ldf `[` in base;
    r20 = dyn __1(res6, r19);
    goto L4(r20);
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L20():
    res7 = ld res;
    check L22() else D8();
  L21():
    r16 = dyn base2(<sym res>);
    goto L5(res3, r16);
  D8():
    deopt 23 [res3, res7];
  L22():
    res8 = force? res7;
    checkMissing(res8);
    names1 = ldf names in base;
    r18 = dyn names1(res8);
    check L23() else D9();
  D9():
    deopt 26 [res3, r18];
  L23():
    goto L5(res3, r18);
  }
}