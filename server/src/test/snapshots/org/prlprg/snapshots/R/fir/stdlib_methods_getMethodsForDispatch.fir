fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3992733961;
    st getMethodsForDispatch = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3992733961(fdef, inherited) {
  (reg fdef:*, reg inherited:*) -+> V { var fdef:*, var inherited:*, reg inherited_isMissing:L, reg inherited_orDefault:*, reg _getMethodsTable:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg environment:cls, reg fdef3:*, reg fdef4:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg inherited1:*, reg inherited2:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st fdef = fdef;
    inherited_isMissing = missing.0(inherited);
    if inherited_isMissing then L0(FALSE) else L0(inherited);
  L0(inherited_orDefault):
    st inherited = inherited_orDefault;
    _getMethodsTable = ldf `.getMethodsTable`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        fdef3 = ld fdef;
        fdef4 = force? fdef3;
        checkMissing(fdef4);
        return fdef4;
      };
      r2 = dyn environment(p1);
      return r2;
    };
    p3 = prom<V +>{
      inherited1 = ld inherited;
      inherited2 = force? inherited1;
      checkMissing(inherited2);
      return inherited2;
    };
    r5 = dyn _getMethodsTable[, , inherited](p, p2, p3);
    check L2() else D1();
  D1():
    deopt 6 [r5];
  L2():
    popenv;
    return r5;
  }
}