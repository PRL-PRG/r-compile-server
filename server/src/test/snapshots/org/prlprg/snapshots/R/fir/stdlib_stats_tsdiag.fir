fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2629226219;
    st tsdiag = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2629226219(object, `gof.lag`, `...`) {
  (reg object:*, reg gof_lag:*, reg ddd:dots) -+> V { var object:*, var `gof.lag`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `gof.lag` = gof_lag;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("tsdiag");
    goto L0(r2);
  L2():
    r = dyn base("tsdiag");
    goto L0(r);
  }
}