fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.character.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _numeric2roman:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _numeric2roman = ldf `.numeric2roman`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _numeric2roman(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}