fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2253952301;
    st `.saveToImplicitGenerics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2253952301(name, def, where) {
  (reg name:*, reg def:*, reg where:*) -+> V { var name:*, var def:*, var where:*, reg _cacheGenericTable:cls, reg name1:*, reg name2:V, reg p:p(V +), reg def1:*, reg def2:V, reg p1:p(V +), reg _ImplicitGenericsTable:cls, reg where1:*, reg where2:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st name = name;
    st def = def;
    st where = where;
    _cacheGenericTable = ldf `.cacheGenericTable`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p3 = prom<V +>{
      _ImplicitGenericsTable = ldf `.ImplicitGenericsTable`;
      p2 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r3 = dyn _ImplicitGenericsTable(p2);
      return r3;
    };
    r5 = dyn _cacheGenericTable(p, p1, p3);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}