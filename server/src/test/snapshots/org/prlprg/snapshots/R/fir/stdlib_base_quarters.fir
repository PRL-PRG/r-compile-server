fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-321517228`;
    st quarters = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-321517228`(x, abbreviate) {
  (reg x:*, reg abbreviate:*) -+> V { var x:*, var abbreviate:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st abbreviate = abbreviate;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("quarters");
    goto L0(r2);
  L2():
    r = dyn base("quarters");
    goto L0(r);
  }
}