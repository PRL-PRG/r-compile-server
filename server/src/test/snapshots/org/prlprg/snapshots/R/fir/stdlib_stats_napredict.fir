fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner785164255;
    st napredict = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner785164255(omit, x, `...`) {
  (reg omit:*, reg x:*, reg ddd:dots) -+> V { var omit:*, var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st omit = omit;
    st x = x;
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
    r2 = dyn UseMethod("napredict");
    goto L0(r2);
  L2():
    r = dyn base("napredict");
    goto L0(r);
  }
}