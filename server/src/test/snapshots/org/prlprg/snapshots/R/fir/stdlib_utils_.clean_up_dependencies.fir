fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.clean_up_dependencies` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg unique_default:cls, reg ___:cls, reg r:V, reg r1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st x = x;
    unique_default = ldf `unique.default`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      ___ = ldf `:::`;
      r = dyn ___("tools", ".extract_dependency_package_names");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r3 = dyn r1(p);
      return r3;
    };
    r5 = dyn unique_default(p1);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    popenv;
    return r5;
  }
}