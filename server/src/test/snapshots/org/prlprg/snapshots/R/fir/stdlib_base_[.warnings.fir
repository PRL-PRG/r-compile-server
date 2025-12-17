fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `[.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg structure:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod("[");
      return r;
    };
    r2 = dyn structure[, class](p, "warnings");
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}