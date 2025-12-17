fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2682058355;
    st dgamma = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2682058355(x, shape, rate, scale, log) {
  (reg x:*, reg shape:*, reg rate:*, reg scale:*, reg log:*) -+> V { var x:*, var shape:*, var rate:*, reg rate_isMissing:L, reg rate_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg rate1:*, reg rate2:V, reg r:V, reg p:p(V +), var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg missing1:cls, reg r8:V, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg rate3:*, reg rate4:V, reg scale1:*, reg scale2:V, reg r12:V, reg r13:V, reg abs:cls, reg r14:V, reg r15:V, reg c10:L, reg warning:cls, reg r16:V, reg r17:V, reg stop:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg C_dgamma:*, reg C_dgamma1:V, reg x1:*, reg x2:V, reg shape1:*, reg shape2:V, reg scale3:*, reg scale4:V, reg log1:*, reg log2:V, reg vargs:dots, reg r22:V |
    mkenv;
    st x = x;
    st shape = shape;
    rate_isMissing = missing.0(rate);
    if rate_isMissing then L0(1.0) else L0(rate);
  L0(rate_orDefault):
    st rate = rate_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1() else L2(scale);
  L1():
    p = prom<V +>{
      rate1 = ld rate;
      rate2 = force? rate1;
      checkMissing(rate2);
      r = `/`(1.0, rate2);
      return r;
    };
    goto L2(p);
  L2(scale_orDefault):
    st scale = scale_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L3(FALSE) else L3(log);
  L3(log_orDefault):
    st log = log_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L4(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L15() else L5(c);
  L13():
    missing = ldf missing in base;
    r4 = dyn missing(<sym rate>);
    goto L4(r4);
  L14():
    r2 = dyn base(<sym rate>);
    goto L4(r2);
  L5(c2):
    c9 = `as.logical`(c2);
    if c9 then L19() else L7();
  L15():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L6(c5, r7):
    r9 = `!`(r7);
    c6 = `as.logical`(r9);
    c7 = `&&`(c5, c6);
    goto L5(c7);
  L7():
    goto L11();
  L11():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L16():
    missing1 = ldf missing in base;
    r8 = dyn missing1(<sym scale>);
    goto L6(c, r8);
  L17():
    r6 = dyn base1(<sym scale>);
    goto L6(c, r6);
  L19():
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L8(r11):
    r15 = `<`(r11, 1.0E-15);
    c10 = `as.logical`(r15);
    if c10 then L25() else L9();
  L12(r21):
    popenv;
    return r21;
  L20():
    rate3 = ld rate;
    check L22() else D0();
  L21():
    r10 = dyn base2(<lang `-`(`*`(rate, scale), 1.0)>);
    goto L8(r10);
  L32():
    C_dgamma = ld C_dgamma;
    check L34() else D7();
  L33():
    r20 = dyn base3(<sym C_dgamma>, <sym x>, <sym shape>, <sym scale>, <sym log>);
    goto L12(r20);
  D0():
    deopt 11 [rate3];
  D7():
    deopt 32 [C_dgamma];
  L9():
    stop = ldf stop;
    check L29() else D5();
  L10(r17):
    goto L11();
  L22():
    rate4 = force? rate3;
    checkMissing(rate4);
    scale1 = ld scale;
    check L23() else D1();
  L25():
    warning = ldf warning;
    check L26() else D3();
  L34():
    C_dgamma1 = force? C_dgamma;
    checkMissing(C_dgamma1);
    x1 = ld x;
    check L35() else D8();
  D1():
    deopt 12 [rate4, scale1];
  D3():
    deopt 22 [];
  D5():
    deopt 26 [];
  D8():
    deopt 33 [C_dgamma1, x1];
  L23():
    scale2 = force? scale1;
    checkMissing(scale2);
    r12 = `*`(rate4, scale2);
    r13 = `-`(r12, 1.0);
    abs = ldf abs in base;
    r14 = dyn abs(r13);
    check L24() else D2();
  L26():
    r16 = dyn warning("specify 'rate' or 'scale' but not both");
    check L27() else D4();
  L29():
    r18 = dyn stop("specify 'rate' or 'scale' but not both");
    check L30() else D6();
  L35():
    x2 = force? x1;
    checkMissing(x2);
    shape1 = ld shape;
    check L36() else D9();
  D2():
    deopt 18 [r14];
  D4():
    deopt 24 [r16];
  D6():
    deopt 28 [r18];
  D9():
    deopt 34 [C_dgamma1, x2, shape1];
  L24():
    goto L8(r14);
  L27():
    goto L10(r16);
  L30():
    goto L10(r18);
  L36():
    shape2 = force? shape1;
    checkMissing(shape2);
    scale3 = ld scale;
    check L37() else D10();
  D10():
    deopt 35 [C_dgamma1, x2, shape2, scale3];
  L37():
    scale4 = force? scale3;
    checkMissing(scale4);
    log1 = ld log;
    check L38() else D11();
  D11():
    deopt 36 [C_dgamma1, x2, shape2, scale4, log1];
  L38():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, shape2, scale4, log2];
    r22 = `.Call`(C_dgamma1, vargs, <missing>);
    goto L12(r22);
  }
}