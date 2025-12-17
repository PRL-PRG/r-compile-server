fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1864794844;
    st `.removeMethodsMetaTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1864794844(generic, where) {
  (reg generic:*, reg where:*) -+> V { var generic:*, var where:*, reg _TableMetaName:cls, reg __:cls, reg r:V, reg p:p(V +), reg __1:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg exists:cls, reg tname:*, reg tname1:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r7:V, reg c:L, reg rm:cls, reg tname2:*, reg tname3:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r10:V |
    mkenv;
    st generic = generic;
    st where = where;
    _TableMetaName = ldf `.TableMetaName`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
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
    check L2() else D1();
  D1():
    deopt 4 [r4];
  L2():
    st tname = r4;
    exists = ldf exists;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p2 = prom<V +>{
      tname = ld tname;
      tname1 = force? tname;
      checkMissing(tname1);
      return tname1;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r7 = dyn exists[, , inherits](p2, p3, FALSE);
    check L4() else D3();
  D3():
    deopt 12 [r7];
  L4():
    c = `as.logical`(r7);
    if c then L5() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L5():
    rm = ldf rm;
    check L6() else D4();
  D4():
    deopt 14 [];
  L6():
    p4 = prom<V +>{
      tname2 = ld tname;
      tname3 = force? tname2;
      checkMissing(tname3);
      return tname3;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r10 = dyn rm[list, pos](p4, p5);
    check L7() else D5();
  D5():
    deopt 19 [r10];
  L7():
    popenv;
    return r10;
  }
}