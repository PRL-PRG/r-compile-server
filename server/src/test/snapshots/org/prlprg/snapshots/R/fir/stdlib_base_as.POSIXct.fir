fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1726095348`;
    st `as.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1726095348`(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("as.POSIXct");
    goto L1(r2);
  L3():
    r = dyn base("as.POSIXct");
    goto L1(r);
  }
}