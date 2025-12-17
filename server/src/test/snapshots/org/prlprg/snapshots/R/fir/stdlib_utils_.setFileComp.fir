fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2099050573;
    st `.setFileComp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2099050573(state) {
  (reg state:*) -+> V { var state:*, reg assign:cls, reg state1:*, reg state2:V, reg p:p(V +), reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st state = state;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      state1 = ld state;
      state2 = force? state1;
      checkMissing(state2);
      return state2;
    };
    p1 = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r2 = dyn assign[, , envir]("fileName", p, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}