fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2300758201;
    st drop1 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2300758201(object, scope, `...`) {
  (reg object:*, reg scope:*, reg ddd:dots) -+> V { var object:*, var scope:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st scope = scope;
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
    r2 = dyn UseMethod("drop1");
    goto L0(r2);
  L2():
    r = dyn base("drop1");
    goto L0(r);
  }
}