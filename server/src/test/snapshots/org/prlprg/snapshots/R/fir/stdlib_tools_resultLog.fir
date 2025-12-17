fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3782021761;
    st resultLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3782021761(Log, text) {
  (reg Log:*, reg text:*) -+> V { var Log:*, var text:*, reg printLog:cls, reg Log1:*, reg Log2:V, reg p:p(V +), reg text1:*, reg text2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st Log = Log;
    st text = text;
    printLog = ldf printLog;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      Log1 = ld Log;
      Log2 = force? Log1;
      checkMissing(Log2);
      return Log2;
    };
    p1 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r2 = dyn printLog(p, " ", p1, "\n");
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}