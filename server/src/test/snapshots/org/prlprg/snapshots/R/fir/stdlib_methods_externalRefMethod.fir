fun main() {
  () -+> V { reg new:cls, reg r:cls, reg p:p(V +), reg structure:cls, reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    new = ldf new;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      r = clos inner1246119658;
      return r;
    };
    p1 = prom<V +>{
      structure = ldf structure;
      r2 = dyn structure[, package]("externalRefMethod", "methods");
      return r2;
    };
    r4 = dyn new[, `.Data`, className, package]("classGeneratorFunction", p, p1, "methods");
    check L1() else D1();
  D1():
    deopt 9 [r4];
  L1():
    st externalRefMethod = r4;
    invisible.0();
    popenv;
    return r4;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg new:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    new = ldf new;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn new[, `...`]("externalRefMethod", ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    popenv;
    return r;
  }
}