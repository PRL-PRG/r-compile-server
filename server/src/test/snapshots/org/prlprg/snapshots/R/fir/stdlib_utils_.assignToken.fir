fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3773442701;
    st `.assignToken` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3773442701(text) {
  (reg text:*) -+> V { var text:*, reg assign:cls, reg text1:*, reg text2:V, reg p:p(V +), reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st text = text;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    p1 = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r2 = dyn assign[, , envir]("token", p, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}