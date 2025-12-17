fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1508352869;
    st qgamma = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1508352869(p, shape, rate, scale, `lower.tail`, `log.p`) {
  (reg p:*, reg shape:*, reg rate:*, reg scale:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var shape:*, var rate:*, reg rate_isMissing:L, reg rate_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg rate1:*, reg rate2:V, reg r:V, reg p1:p(V +), var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg missing1:cls, reg r8:V, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg rate3:*, reg rate4:V, reg scale1:*, reg scale2:V, reg r12:V, reg r13:V, reg abs:cls, reg r14:V, reg r15:V, reg c10:L, reg warning:cls, reg r16:V, reg r17:V, reg stop:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg C_qgamma:*, reg C_qgamma1:V, reg p2:*, reg p3:V, reg shape1:*, reg shape2:V, reg scale3:*, reg scale4:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r22:V |
    mkenv;
    st p = p;
    st shape = shape;
    rate_isMissing = missing.0(rate);
    if rate_isMissing then L0(1.0) else L0(rate);
  L0(rate_orDefault):
    st rate = rate_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1() else L2(scale);
  L1():
    p1 = prom<V +>{
      rate1 = ld rate;
      rate2 = force? rate1;
      checkMissing(rate2);
      r = `/`(1.0, rate2);
      return r;
    };
    goto L2(p1);
  L2(scale_orDefault):
    st scale = scale_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L3(TRUE) else L3(lower_tail);
  L3(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L4(FALSE) else L4(log_p);
  L4(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L5(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L16() else L6(c);
  L14():
    missing = ldf missing in base;
    r4 = dyn missing(<sym rate>);
    goto L5(r4);
  L15():
    r2 = dyn base(<sym rate>);
    goto L5(r2);
  L6(c2):
    c9 = `as.logical`(c2);
    if c9 then L20() else L8();
  L16():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L7(c5, r7):
    r9 = `!`(r7);
    c6 = `as.logical`(r9);
    c7 = `&&`(c5, c6);
    goto L6(c7);
  L8():
    goto L12();
  L12():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L17():
    missing1 = ldf missing in base;
    r8 = dyn missing1(<sym scale>);
    goto L7(c, r8);
  L18():
    r6 = dyn base1(<sym scale>);
    goto L7(c, r6);
  L20():
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L9(r11):
    r15 = `<`(r11, 1.0E-15);
    c10 = `as.logical`(r15);
    if c10 then L26() else L10();
  L13(r21):
    popenv;
    return r21;
  L21():
    rate3 = ld rate;
    check L23() else D0();
  L22():
    r10 = dyn base2(<lang `-`(`*`(rate, scale), 1.0)>);
    goto L9(r10);
  L33():
    C_qgamma = ld C_qgamma;
    check L35() else D7();
  L34():
    r20 = dyn base3(<sym C_qgamma>, <sym p>, <sym shape>, <sym scale>, <sym lower.tail>, <sym log.p>);
    goto L13(r20);
  D0():
    deopt 11 [rate3];
  D7():
    deopt 32 [C_qgamma];
  L10():
    stop = ldf stop;
    check L30() else D5();
  L11(r17):
    goto L12();
  L23():
    rate4 = force? rate3;
    checkMissing(rate4);
    scale1 = ld scale;
    check L24() else D1();
  L26():
    warning = ldf warning;
    check L27() else D3();
  L35():
    C_qgamma1 = force? C_qgamma;
    checkMissing(C_qgamma1);
    p2 = ld p;
    check L36() else D8();
  D1():
    deopt 12 [rate4, scale1];
  D3():
    deopt 22 [];
  D5():
    deopt 26 [];
  D8():
    deopt 33 [C_qgamma1, p2];
  L24():
    scale2 = force? scale1;
    checkMissing(scale2);
    r12 = `*`(rate4, scale2);
    r13 = `-`(r12, 1.0);
    abs = ldf abs in base;
    r14 = dyn abs(r13);
    check L25() else D2();
  L27():
    r16 = dyn warning("specify 'rate' or 'scale' but not both");
    check L28() else D4();
  L30():
    r18 = dyn stop("specify 'rate' or 'scale' but not both");
    check L31() else D6();
  L36():
    p3 = force? p2;
    checkMissing(p3);
    shape1 = ld shape;
    check L37() else D9();
  D2():
    deopt 18 [r14];
  D4():
    deopt 24 [r16];
  D6():
    deopt 28 [r18];
  D9():
    deopt 34 [C_qgamma1, p3, shape1];
  L25():
    goto L9(r14);
  L28():
    goto L11(r16);
  L31():
    goto L11(r18);
  L37():
    shape2 = force? shape1;
    checkMissing(shape2);
    scale3 = ld scale;
    check L38() else D10();
  D10():
    deopt 35 [C_qgamma1, p3, shape2, scale3];
  L38():
    scale4 = force? scale3;
    checkMissing(scale4);
    lower_tail1 = ld `lower.tail`;
    check L39() else D11();
  D11():
    deopt 36 [C_qgamma1, p3, shape2, scale4, lower_tail1];
  L39():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L40() else D12();
  D12():
    deopt 37 [C_qgamma1, p3, shape2, scale4, lower_tail2, log_p1];
  L40():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p3, shape2, scale4, lower_tail2, log_p2];
    r22 = `.Call`(C_qgamma1, vargs, <missing>);
    goto L13(r22);
  }
}