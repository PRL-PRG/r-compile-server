fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1799546519;
    st `.assignEnd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1799546519(end) {
  (reg end:*) -+> V { var end:*, reg assign:cls, reg end1:*, reg end2:V, reg p:p(V +), reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st end = end;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      end1 = ld end;
      end2 = force? end1;
      checkMissing(end2);
      return end2;
    };
    p1 = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r2 = dyn assign[, , envir]("end", p, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}