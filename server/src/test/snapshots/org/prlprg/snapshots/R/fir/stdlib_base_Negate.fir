fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st Negate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg match_fun:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg r2:cls |
    mkenv;
    st f = f;
    match_fun = ldf `match.fun`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn match_fun(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st f = r1;
    r2 = clos inner1246119658;
    popenv;
    return r2;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg f:cls, reg ddd1:dots?, reg r:V, reg r1:V |
    mkenv;
    st `...` = ddd;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn f[`...`](ddd1);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    r1 = `!`(r);
    popenv;
    return r1;
  }
}