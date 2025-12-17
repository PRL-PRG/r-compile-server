fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.getFileComp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg get:cls, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p:p(V +), reg r1:V |
    mkenv;
    get = ldf get;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r1 = dyn get[, envir]("fileName", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}