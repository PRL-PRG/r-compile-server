fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1105046467;
    st toRd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1105046467(obj, `...`) {
  (reg obj:*, reg ddd:dots) -+> V { var obj:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st obj = obj;
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
    r2 = dyn UseMethod("toRd");
    goto L0(r2);
  L2():
    r = dyn base("toRd");
    goto L0(r);
  }
}