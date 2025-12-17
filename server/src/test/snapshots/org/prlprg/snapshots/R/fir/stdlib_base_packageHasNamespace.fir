fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1241052995;
    st packageHasNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1241052995(package, `package.lib`) {
  (reg package:*, reg package_lib:*) -+> V { var package:*, var `package.lib`:*, reg file_exists:cls, reg file_path:cls, reg package_lib1:*, reg package_lib2:V, reg p:p(V +), reg package1:*, reg package2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st package = package;
    st `package.lib` = package_lib;
    file_exists = ldf `file.exists`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        package_lib1 = ld `package.lib`;
        package_lib2 = force? package_lib1;
        checkMissing(package_lib2);
        return package_lib2;
      };
      p1 = prom<V +>{
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        return package2;
      };
      r2 = dyn file_path(p, p1, "NAMESPACE");
      return r2;
    };
    r4 = dyn file_exists(p2);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}