fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1978040662;
    st suppressPackageStartupMessages = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1978040662(expr) {
  (reg expr:*) -+> V { var expr:*, reg withCallingHandlers:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st expr = expr;
    withCallingHandlers = ldf withCallingHandlers;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      r1 = clos inner1914006432;
      return r1;
    };
    r3 = dyn withCallingHandlers[, packageStartupMessage](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1914006432(c) {
  (reg c:*) -+> V { var c:*, reg tryInvokeRestart:cls, reg r:V |
    mkenv;
    st c = c;
    tryInvokeRestart = ldf tryInvokeRestart;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn tryInvokeRestart("muffleMessage");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}