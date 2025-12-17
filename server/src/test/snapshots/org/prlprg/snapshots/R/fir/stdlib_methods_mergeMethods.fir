fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2450096059;
    st mergeMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2450096059(m1, m2, genericLabel) {
  (reg m1:*, reg m2:*, reg genericLabel:*) -+> V { var m1:*, var m2:*, var genericLabel:*, reg genericLabel_isMissing:L, reg genericLabel_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg _MlistDefunct:cls, reg r2:V |
    mkenv;
    st m1 = m1;
    st m2 = m2;
    genericLabel_isMissing = missing.0(genericLabel);
    if genericLabel_isMissing then L0() else L1(genericLabel);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(genericLabel_orDefault):
    st genericLabel = genericLabel_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r2 = dyn _MlistDefunct("mergeMethods()");
    check L3() else D1();
  D1():
    deopt 3 [r2];
  L3():
    popenv;
    return r2;
  }
}