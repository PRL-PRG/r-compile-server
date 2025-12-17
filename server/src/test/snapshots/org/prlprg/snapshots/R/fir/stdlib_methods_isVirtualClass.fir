fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1266124685;
    st isVirtualClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1266124685(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg isClassDef:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg r5:V, reg c:L, reg __:cls, reg r6:V, reg isClass:cls, reg Class3:*, reg Class4:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r9:V, reg c1:L, reg __1:cls, reg r10:V |
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
    isClassDef = ldf isClassDef;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r5 = dyn isClassDef(p2);
    check L5() else D1();
  D1():
    deopt 3 [r5];
  L5():
    c = `as.logical`(r5);
    if c then L6() else L2();
  L2():
    isClass = ldf isClass;
    check L8() else D2();
  L6():
    __ = ldf `@` in base;
    r6 = dyn __(<sym Class>, <sym virtual>);
    popenv;
    return r6;
  D2():
    deopt 7 [];
  L8():
    p3 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn isClass[, where](p3, p4);
    check L9() else D3();
  D3():
    deopt 11 [r9];
  L9():
    c1 = `as.logical`(r9);
    if c1 then L10() else L3();
  L3():
    popenv;
    return TRUE;
  L10():
    __1 = ldf `@` in base;
    r10 = dyn __1(<lang getClass(Class, where=where)>, <sym virtual>);
    popenv;
    return r10;
  }
}