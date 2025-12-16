fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2083163048`;
    st labels = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2083163048`(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
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
    r2 = dyn UseMethod("labels");
    goto L0(r2);
  L2():
    r = dyn base("labels");
    goto L0(r);
  }
}