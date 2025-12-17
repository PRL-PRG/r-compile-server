fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4046407011;
    st `.TableMetaName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4046407011(name, package) {
  (reg name:*, reg package:*) -+> V { var name:*, var package:*, reg methodsPackageMetaName:cls, reg paste:cls, reg name1:*, reg name2:V, reg p:p(V +), reg package1:*, reg package2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st name = name;
    st package = package;
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      paste = ldf paste;
      p = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      p1 = prom<V +>{
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        return package2;
      };
      r2 = dyn paste[, , sep](p, p1, ":");
      return r2;
    };
    r4 = dyn methodsPackageMetaName("T", p2);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}