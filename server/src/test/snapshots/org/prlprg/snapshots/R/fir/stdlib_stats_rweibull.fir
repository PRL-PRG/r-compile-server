fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner662750217;
    st rweibull = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner662750217(n, shape, scale) {
  (reg n:*, reg shape:*, reg scale:*) -+> V { var n:*, var shape:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rweibull:*, reg C_rweibull1:V, reg n1:*, reg n2:V, reg shape1:*, reg shape2:V, reg scale1:*, reg scale2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    st shape = shape;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(1.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_rweibull = ld C_rweibull;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_rweibull>, <sym n>, <sym shape>, <sym scale>);
    goto L1(r);
  D0():
    deopt 1 [C_rweibull];
  L4():
    C_rweibull1 = force? C_rweibull;
    checkMissing(C_rweibull1);
    n1 = ld n;
    check L5() else D1();
  D1():
    deopt 2 [C_rweibull1, n1];
  L5():
    n2 = force? n1;
    checkMissing(n2);
    shape1 = ld shape;
    check L6() else D2();
  D2():
    deopt 3 [C_rweibull1, n2, shape1];
  L6():
    shape2 = force? shape1;
    checkMissing(shape2);
    scale1 = ld scale;
    check L7() else D3();
  D3():
    deopt 4 [C_rweibull1, n2, shape2, scale1];
  L7():
    scale2 = force? scale1;
    checkMissing(scale2);
    vargs = dots[n2, shape2, scale2];
    r2 = `.Call`(C_rweibull1, vargs, <missing>);
    goto L1(r2);
  }
}