fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner543500260;
    st prohibitGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner543500260(name, where) {
  (reg name:*, reg where:*) -+> V { var name:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg _saveToImplicitGenerics:cls, reg name1:*, reg name2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V |
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
    _saveToImplicitGenerics = ldf `.saveToImplicitGenerics`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
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
    r6 = dyn _saveToImplicitGenerics(p2, FALSE, p3);
    check L3() else D1();
  D1():
    deopt 5 [r6];
  L3():
    popenv;
    return r6;
  }
}