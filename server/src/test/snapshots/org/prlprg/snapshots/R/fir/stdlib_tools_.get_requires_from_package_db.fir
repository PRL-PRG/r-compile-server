fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner758166817;
    st `.get_requires_from_package_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner758166817(db, category) {
  (reg db:*, reg category:*) -+> V { var db:*, var category:*, reg category_isMissing:L, reg category_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg category1:*, reg category2:V, reg p1:p(V +), reg r5:V, reg _in_:cls, reg category3:*, reg category4:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg db1:*, reg db2:V, reg names:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg c1:L, reg unlist:cls, reg strsplit:cls, reg db3:*, reg db4:V, reg c2:L, reg db6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg category5:*, reg category6:V, reg __:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg sub:cls, reg requires:*, reg requires1:V, reg p6:p(V +), reg r18:V, reg category7:*, reg category8:V, reg r19:V, reg c3:L, reg requires2:*, reg requires3:V, reg c4:L, reg requires5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg requires6:*, reg requires7:V, reg r20:V, reg __1:cls, reg r21:V, reg dx4:V, reg character:cls, reg r22:V, reg requires8:*, reg requires9:V |
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
      r2 = dyn c("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances", "RdMacros");
      goto L0(r2);
    L2():
      r = dyn base("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances", "RdMacros");
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
    character = ldf character;
    check L25() else D11();
  L6():
    requires8 = ld requires;
    check L27() else D13();
  L11():
    unlist = ldf unlist;
    check L12() else D4();
  D4():
    deopt 11 [];
  D11():
    deopt 37 [];
  D13():
    deopt 40 [requires8];
  L12():
    p5 = prom<V +>{
      strsplit = ldf strsplit;
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
      r14 = dyn strsplit(p4, ",");
      return r14;
    };
    r16 = dyn unlist(p5);
    check L13() else D5();
  L25():
    r22 = dyn character();
    check L26() else D12();
  L27():
    requires9 = force? requires8;
    checkMissing(requires9);
    popenv;
    return requires9;
  D5():
    deopt 13 [r16];
  D12():
    deopt 38 [r22];
  L13():
    st requires = r16;
    sub = ldf sub;
    check L14() else D6();
  L26():
    st requires = r22;
    goto L6();
  D6():
    deopt 16 [];
  L14():
    p6 = prom<V +>{
      requires = ld requires;
      requires1 = force? requires;
      checkMissing(requires1);
      return requires1;
    };
    r18 = dyn sub("^[[:space:]]*([[:alnum:].]+).*$", "\\1", p6);
    check L15() else D7();
  D7():
    deopt 20 [r18];
  L15():
    st requires = r18;
    category7 = ld category;
    check L16() else D8();
  D8():
    deopt 22 [category7];
  L16():
    category8 = force? category7;
    checkMissing(category8);
    r19 = `==`(category8, "Depends");
    c3 = `as.logical`(r19);
    if c3 then L17() else L3();
  L3():
    goto L5(NULL);
  L5(dx4):
    goto L6();
  L17():
    requires2 = ld requires;
    check L18() else D9();
  D9():
    deopt 26 [requires2];
  L18():
    requires3 = force? requires2;
    checkMissing(requires3);
    c4 = `is.object`(requires3);
    if c4 then L19() else L20(requires3);
  L4(dx3):
    st requires = dx3;
    goto L5(dx3);
  L19():
    dr2 = tryDispatchBuiltin.1("[", requires3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(requires5):
    requires6 = ld requires;
    check L22() else D10();
  D10():
    deopt 28 [requires5, requires6];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L22():
    requires7 = force? requires6;
    checkMissing(requires7);
    r20 = `!=`(requires7, "R");
    __1 = ldf `[` in base;
    r21 = dyn __1(requires5, r20);
    goto L4(r21);
  }
}