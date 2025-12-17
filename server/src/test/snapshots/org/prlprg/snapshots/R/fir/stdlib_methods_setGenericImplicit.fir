fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2177411221;
    st setGenericImplicit = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2177411221(name, where, restore) {
  (reg name:*, reg where:*, reg restore:*) -+> V { var name:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var restore:*, reg restore_isMissing:L, reg restore_orDefault:*, reg isGeneric:cls, reg name1:*, reg name2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg name3:*, reg name4:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg getGeneric:cls, reg name5:*, reg name6:V, reg p7:p(V +), reg where3:*, reg where4:V, reg p8:p(V +), reg r18:V, reg restore1:*, reg restore2:V, reg c1:L, reg removeMethods:cls, reg name7:*, reg name8:V, reg p9:p(V +), reg where5:*, reg where6:V, reg p10:p(V +), reg r21:V, reg removeGeneric:cls, reg name9:*, reg name10:V, reg p11:p(V +), reg where7:*, reg where8:V, reg p12:p(V +), reg r25:V, reg _saveToImplicitGenerics:cls, reg name11:*, reg name12:V, reg p13:p(V +), reg generic:*, reg generic1:V, reg p14:p(V +), reg where9:*, reg where10:V, reg p15:p(V +), reg r29:V |
    mkenv;
    st name = name;
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
    restore_isMissing = missing.0(restore);
    if restore_isMissing then L2(TRUE) else L2(restore);
  L2(restore_orDefault):
    st restore = restore_orDefault;
    isGeneric = ldf isGeneric;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn isGeneric(p2, p3);
    check L8() else D1();
  D1():
    deopt 4 [r6];
  L8():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L9() else L3();
  L3():
    getGeneric = ldf getGeneric;
    check L14() else D4();
  L9():
    warning = ldf warning;
    check L10() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 18 [];
  L10():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          name3 = ld name;
          name4 = force? name3;
          checkMissing(name4);
          return name4;
        };
        r9 = dyn sQuote(p4);
        return r9;
      };
      r11 = dyn gettextf("%s is not currently a generic:  define it first to create a non-default implicit form", p5);
      return r11;
    };
    r13 = dyn warning[, domain](p6, NA_LGL);
    check L11() else D3();
  L14():
    p7 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p8 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r18 = dyn getGeneric[, where](p7, p8);
    check L15() else D5();
  D3():
    deopt 11 [r13];
  D5():
    deopt 22 [r18];
  L11():
    popenv;
    return FALSE;
  L15():
    st generic = r18;
    restore1 = ld restore;
    check L16() else D6();
  D6():
    deopt 24 [restore1];
  L16():
    restore2 = force? restore1;
    checkMissing(restore2);
    c1 = `as.logical`(restore2);
    if c1 then L17() else L5();
  L5():
    removeGeneric = ldf removeGeneric;
    check L21() else D9();
  L6():
    _saveToImplicitGenerics = ldf `.saveToImplicitGenerics`;
    check L23() else D11();
  L17():
    removeMethods = ldf removeMethods;
    check L18() else D7();
  D7():
    deopt 27 [];
  D9():
    deopt 33 [];
  D11():
    deopt 38 [];
  L18():
    p9 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p10 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r21 = dyn removeMethods(p9, p10, TRUE);
    check L19() else D8();
  L21():
    p11 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p12 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r25 = dyn removeGeneric(p11, p12);
    check L22() else D10();
  L23():
    p13 = prom<V +>{
      name11 = ld name;
      name12 = force? name11;
      checkMissing(name12);
      return name12;
    };
    p14 = prom<V +>{
      generic = ld generic;
      generic1 = force? generic;
      checkMissing(generic1);
      return generic1;
    };
    p15 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r29 = dyn _saveToImplicitGenerics(p13, p14, p15);
    check L24() else D12();
  D8():
    deopt 31 [r21];
  D10():
    deopt 36 [r25];
  D12():
    deopt 42 [r29];
  L19():
    goto L6();
  L22():
    goto L6();
  L24():
    popenv;
    return r29;
  }
}