fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner766562580;
    st `.assignLinebuffer` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner766562580(line) {
  (reg line:*) -+> V { var line:*, reg assign:cls, reg line1:*, reg line2:V, reg p:p(V +), reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st line = line;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      return line2;
    };
    p1 = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r2 = dyn assign[, , envir]("linebuffer", p, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}