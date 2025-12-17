fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3954176606;
    st `.assignStart` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3954176606(start) {
  (reg start:*) -+> V { var start:*, reg assign:cls, reg start1:*, reg start2:V, reg p:p(V +), reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st start = start;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      start1 = ld start;
      start2 = force? start1;
      checkMissing(start2);
      return start2;
    };
    p1 = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r2 = dyn assign[, , envir]("start", p, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}