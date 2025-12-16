fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.simple.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg print:cls, reg noquote:cls, reg cbind:cls, reg unlist:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg ddd1:dots?, reg r7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      noquote = ldf noquote;
      p2 = prom<V +>{
        cbind = ldf cbind;
        p1 = prom<V +>{
          unlist = ldf unlist;
          p = prom<V +>{
            x1 = ld x;
            x2 = force? x1;
            checkMissing(x2);
            return x2;
          };
          r1 = dyn unlist(p);
          return r1;
        };
        r3 = dyn cbind[`_`](p1);
        return r3;
      };
      r5 = dyn noquote(p2);
      return r5;
    };
    ddd1 = ld `...`;
    r7 = dyn print[, `...`](p3, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    popenv;
    return r7;
  }
}