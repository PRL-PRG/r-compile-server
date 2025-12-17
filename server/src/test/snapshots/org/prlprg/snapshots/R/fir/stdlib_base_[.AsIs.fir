fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner207663193;
    st `[.AsIs` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner207663193(x, i, `...`) {
  (reg x:*, reg i:*, reg ddd:dots) -+> V { var x:*, var i:*, var `...`:dots?, reg I:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st i = i;
    st `...` = ddd;
    I = ldf I;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod("[");
      return r;
    };
    r2 = dyn I(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}