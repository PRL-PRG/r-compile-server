fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1374486495;
    st dweibull = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1374486495(x, shape, scale, log) {
  (reg x:*, reg shape:*, reg scale:*, reg log:*) -+> V { var x:*, var shape:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dweibull:*, reg C_dweibull1:V, reg x1:*, reg x2:V, reg shape1:*, reg shape2:V, reg scale1:*, reg scale2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st shape = shape;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(1.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L1(FALSE) else L1(log);
  L1(log_orDefault):
    st log = log_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_dweibull = ld C_dweibull;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_dweibull>, <sym x>, <sym shape>, <sym scale>, <sym log>);
    goto L2(r);
  D0():
    deopt 1 [C_dweibull];
  L5():
    C_dweibull1 = force? C_dweibull;
    checkMissing(C_dweibull1);
    x1 = ld x;
    check L6() else D1();
  D1():
    deopt 2 [C_dweibull1, x1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    shape1 = ld shape;
    check L7() else D2();
  D2():
    deopt 3 [C_dweibull1, x2, shape1];
  L7():
    shape2 = force? shape1;
    checkMissing(shape2);
    scale1 = ld scale;
    check L8() else D3();
  D3():
    deopt 4 [C_dweibull1, x2, shape2, scale1];
  L8():
    scale2 = force? scale1;
    checkMissing(scale2);
    log1 = ld log;
    check L9() else D4();
  D4():
    deopt 5 [C_dweibull1, x2, shape2, scale2, log1];
  L9():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, shape2, scale2, log2];
    r2 = `.Call`(C_dweibull1, vargs, <missing>);
    goto L2(r2);
  }
}