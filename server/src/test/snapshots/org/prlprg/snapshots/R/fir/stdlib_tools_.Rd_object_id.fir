fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2780271846;
    st `.Rd_object_id` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2780271846(package, nora) {
  (reg package:*, reg nora:*) -+> V { var package:*, var nora:*, reg sprintf:cls, reg package1:*, reg package2:V, reg p:p(V +), reg nora1:*, reg nora2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st package = package;
    st nora = nora;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      nora1 = ld nora;
      nora2 = force? nora1;
      checkMissing(nora2);
      return nora2;
    };
    r2 = dyn sprintf("%s::%s", p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}