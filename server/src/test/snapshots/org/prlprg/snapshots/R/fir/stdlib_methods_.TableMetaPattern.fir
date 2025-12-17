fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.TableMetaPattern` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg paste0:cls, reg substring:cls, reg methodsPackageMetaName:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      substring = ldf substring;
      p = prom<V +>{
        methodsPackageMetaName = ldf methodsPackageMetaName;
        r = dyn methodsPackageMetaName("T", "");
        return r;
      };
      r2 = dyn substring(p, 2.0);
      return r2;
    };
    r4 = dyn paste0("^[.]", p1);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}