fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1466705707`;
    st `Summary.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1466705707`(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          _Generic = ld `.Generic`;
          _Generic1 = force? _Generic;
          checkMissing(_Generic1);
          return _Generic1;
        };
        r1 = dyn sQuote(p);
        return r1;
      };
      r3 = dyn gettextf("%s not meaningful for factors", p1);
      return r3;
    };
    r5 = dyn stop(p2);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    popenv;
    return r5;
  }
}