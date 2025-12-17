fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `Math.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg stop:cls, reg gettextf:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic = ld `.Generic`;
        _Generic1 = force? _Generic;
        checkMissing(_Generic1);
        return _Generic1;
      };
      r1 = dyn gettextf("'%s' not defined for \"POSIXt\" objects", p);
      return r1;
    };
    r3 = dyn stop[, domain](p1, NA_LGL);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}