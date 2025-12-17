fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3895870030;
    st pacf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3895870030(x, `lag.max`, plot, `na.action`, `...`) {
  (reg x:*, reg lag_max:*, reg plot:*, reg na_action:*, reg ddd:dots) -+> V { var x:*, var `lag.max`:*, var plot:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `lag.max` = lag_max;
    st plot = plot;
    st `na.action` = na_action;
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
    r2 = dyn UseMethod("pacf");
    goto L0(r2);
  L2():
    r = dyn base("pacf");
    goto L0(r);
  }
}