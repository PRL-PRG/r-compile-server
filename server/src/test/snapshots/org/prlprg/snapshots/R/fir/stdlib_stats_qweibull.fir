fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2770762601;
    st qweibull = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2770762601(p, shape, scale, `lower.tail`, `log.p`) {
  (reg p:*, reg shape:*, reg scale:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var shape:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_qweibull:*, reg C_qweibull1:V, reg p1:*, reg p2:V, reg shape1:*, reg shape2:V, reg scale1:*, reg scale2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st p = p;
    st shape = shape;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(1.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L1(TRUE) else L1(lower_tail);
  L1(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L2(FALSE) else L2(log_p);
  L2(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    C_qweibull = ld C_qweibull;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_qweibull>, <sym p>, <sym shape>, <sym scale>, <sym lower.tail>, <sym log.p>);
    goto L3(r);
  D0():
    deopt 1 [C_qweibull];
  L6():
    C_qweibull1 = force? C_qweibull;
    checkMissing(C_qweibull1);
    p1 = ld p;
    check L7() else D1();
  D1():
    deopt 2 [C_qweibull1, p1];
  L7():
    p2 = force? p1;
    checkMissing(p2);
    shape1 = ld shape;
    check L8() else D2();
  D2():
    deopt 3 [C_qweibull1, p2, shape1];
  L8():
    shape2 = force? shape1;
    checkMissing(shape2);
    scale1 = ld scale;
    check L9() else D3();
  D3():
    deopt 4 [C_qweibull1, p2, shape2, scale1];
  L9():
    scale2 = force? scale1;
    checkMissing(scale2);
    lower_tail1 = ld `lower.tail`;
    check L10() else D4();
  D4():
    deopt 5 [C_qweibull1, p2, shape2, scale2, lower_tail1];
  L10():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L11() else D5();
  D5():
    deopt 6 [C_qweibull1, p2, shape2, scale2, lower_tail2, log_p1];
  L11():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, shape2, scale2, lower_tail2, log_p2];
    r2 = `.Call`(C_qweibull1, vargs, <missing>);
    goto L3(r2);
  }
}