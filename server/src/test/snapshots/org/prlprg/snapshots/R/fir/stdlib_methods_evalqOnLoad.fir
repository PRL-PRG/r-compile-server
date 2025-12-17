fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner43458643;
    st evalqOnLoad = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner43458643(expr, where, aname) {
  (reg expr:*, reg where:*, reg aname:*) -+> V { var expr:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var aname:*, reg aname_isMissing:L, reg aname_orDefault:*, reg evalOnLoad:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg aname1:*, reg aname2:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st expr = expr;
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
    aname_isMissing = missing.0(aname);
    if aname_isMissing then L2("") else L2(aname);
  L2(aname_orDefault):
    st aname = aname_orDefault;
    evalOnLoad = ldf evalOnLoad;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      substitute = ldf substitute in base;
      r6 = dyn substitute(<sym expr>);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym expr>);
      goto L0(r4);
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p4 = prom<V +>{
      aname1 = ld aname;
      aname2 = force? aname1;
      checkMissing(aname2);
      return aname2;
    };
    r10 = dyn evalOnLoad(p2, p3, p4);
    check L4() else D1();
  D1():
    deopt 5 [r10];
  L4():
    popenv;
    return r10;
  }
}