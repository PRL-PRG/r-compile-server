fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `.SSget` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg get:cls, reg _SSname:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg _SSenv:*, reg _SSenv1:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    get = ldf get;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _SSname = ldf `.SSname`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn _SSname(p);
      return r1;
    };
    p2 = prom<V +>{
      _SSenv = ld `.SSenv`;
      _SSenv1 = force? _SSenv;
      checkMissing(_SSenv1);
      return _SSenv1;
    };
    r4 = dyn get[, envir, inherits](p1, p2, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    popenv;
    return r4;
  }
}