fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner725573545;
    st `.getImplicitGenericFromCache` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner725573545(name, where, pkg) {
  (reg name:*, reg where:*, reg pkg:*) -+> V { var name:*, var where:*, var pkg:*, reg pkg_isMissing:L, reg pkg_orDefault:*, reg _getGenericFromCacheTable:cls, reg name1:*, reg name2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg pkg1:*, reg pkg2:V, reg p2:p(V +), reg _implicitTable:*, reg _implicitTable1:V, reg p3:p(V +), reg r4:V |
    mkenv;
    st name = name;
    st where = where;
    pkg_isMissing = missing.0(pkg);
    if pkg_isMissing then L0("") else L0(pkg);
  L0(pkg_orDefault):
    st pkg = pkg_orDefault;
    _getGenericFromCacheTable = ldf `.getGenericFromCacheTable`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p2 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p3 = prom<V +>{
      _implicitTable = ld `.implicitTable`;
      _implicitTable1 = force? _implicitTable;
      checkMissing(_implicitTable1);
      return _implicitTable1;
    };
    r4 = dyn _getGenericFromCacheTable(p, p1, p2, p3);
    check L2() else D1();
  D1():
    deopt 6 [r4];
  L2():
    popenv;
    return r4;
  }
}