fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st `.extendsForS3` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg extends:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st Class = Class;
    extends = ldf extends;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn extends[, maybe](p, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}