fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2656251490;
    st `.uncacheImplicitGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2656251490(name, def) {
  (reg name:*, reg def:*) -+> V { var name:*, var def:*, reg _uncacheGenericTable:cls, reg name1:*, reg name2:V, reg p:p(V +), reg def1:*, reg def2:V, reg p1:p(V +), reg _implicitTable:*, reg _implicitTable1:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st name = name;
    st def = def;
    _uncacheGenericTable = ldf `.uncacheGenericTable`;
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
    p2 = prom<V +>{
      _implicitTable = ld `.implicitTable`;
      _implicitTable1 = force? _implicitTable;
      checkMissing(_implicitTable1);
      return _implicitTable1;
    };
    r3 = dyn _uncacheGenericTable(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}