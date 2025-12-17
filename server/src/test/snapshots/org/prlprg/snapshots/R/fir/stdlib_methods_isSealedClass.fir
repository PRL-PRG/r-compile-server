fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1266124685;
    st isSealedClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1266124685(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg Class1:*, reg Class2:V, reg c:L, reg c1:L, reg getClass:cls, reg Class3:*, reg Class4:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r8:V, reg is:cls, reg Class5:*, reg Class6:V, reg p4:p(V +), reg r11:V, reg r12:V, reg c2:L, reg __:cls, reg r13:V |
    mkenv;
    st Class = Class;
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
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L9() else L3();
  L6():
    Class1 = ld Class;
    check L8() else D0();
  L7():
    r4 = dyn base(<sym Class>);
    goto L2(r4);
  D0():
    deopt 1 [Class1];
  L3():
    goto L4();
  L4():
    is = ldf is;
    check L13() else D3();
  L8():
    Class2 = force? Class1;
    checkMissing(Class2);
    c = `is.character`(Class2);
    goto L2(c);
  L9():
    getClass = ldf getClass;
    check L10() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 14 [];
  L10():
    p2 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r8 = dyn getClass(p2, TRUE, p3);
    check L11() else D2();
  L13():
    p4 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    r11 = dyn is(p4, "classRepresentation");
    check L14() else D4();
  D2():
    deopt 9 [r8];
  D4():
    deopt 17 [r11];
  L11():
    st Class = r8;
    goto L4();
  L14():
    r12 = `!`(r11);
    c2 = `as.logical`(r12);
    if c2 then L15() else L5();
  L5():
    __ = ldf `@` in base;
    r13 = dyn __(<sym Class>, <sym sealed>);
    popenv;
    return r13;
  L15():
    popenv;
    return FALSE;
  }
}