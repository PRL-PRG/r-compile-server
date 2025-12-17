fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1959752393;
    st isClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1959752393(Class, formal, where) {
  (reg Class:*, reg formal:*, reg where:*) -+> V { var Class:*, var formal:*, reg formal_isMissing:L, reg formal_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg getClassDef:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r8:V, reg c:V, reg r9:V |
    mkenv;
    st Class = Class;
    formal_isMissing = missing.0(formal);
    if formal_isMissing then L0(TRUE) else L0(formal);
  L0(formal_orDefault):
    st formal = formal_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
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
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r5):
    r9 = `!`(r5);
    popenv;
    return r9;
  L4():
    getClassDef = ldf getClassDef;
    check L6() else D0();
  L5():
    r4 = dyn base(<lang getClassDef(Class, where)>);
    goto L3(r4);
  D0():
    deopt 2 [];
  L6():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r8 = dyn getClassDef(p2, p3);
    check L7() else D1();
  D1():
    deopt 5 [r8];
  L7():
    c = `==`(r8, NULL);
    goto L3(c);
  }
}