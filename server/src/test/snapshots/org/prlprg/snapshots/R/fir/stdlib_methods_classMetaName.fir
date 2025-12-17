fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3672943467;
    st classMetaName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg methodsPackageMetaName:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st name = name;
    methodsPackageMetaName = ldf methodsPackageMetaName;
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
    r1 = dyn methodsPackageMetaName("C", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}