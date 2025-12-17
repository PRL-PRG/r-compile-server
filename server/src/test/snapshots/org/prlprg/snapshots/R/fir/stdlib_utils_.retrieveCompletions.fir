fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.retrieveCompletions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg unique:cls, reg get:cls, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    unique = ldf unique;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      get = ldf get;
      p = prom<V +>{
        _CompletionEnv = ld `.CompletionEnv`;
        _CompletionEnv1 = force? _CompletionEnv;
        checkMissing(_CompletionEnv1);
        return _CompletionEnv1;
      };
      r1 = dyn get[, envir]("comps", p);
      return r1;
    };
    r3 = dyn unique(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}