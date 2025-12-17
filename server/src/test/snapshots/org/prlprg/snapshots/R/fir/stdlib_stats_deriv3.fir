fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2050808161;
    st deriv3 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2050808161(expr, `...`) {
  (reg expr:*, reg ddd:dots) -+> V { var expr:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st expr = expr;
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
    r2 = dyn UseMethod("deriv3");
    goto L0(r2);
  L2():
    r = dyn base("deriv3");
    goto L0(r);
  }
}