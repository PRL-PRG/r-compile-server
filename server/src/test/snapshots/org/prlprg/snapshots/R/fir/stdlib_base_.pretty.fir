fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner60920582;
    st `.pretty` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner60920582(x, n, `min.n`, `shrink.sml`, `high.u.bias`, `u5.bias`, `eps.correct`, `f.min`, bounds) {
  (reg x:*, reg n:*, reg min_n:*, reg shrink_sml:*, reg high_u_bias:*, reg u5_bias:*, reg eps_correct:*, reg f_min:*, reg bounds:*) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `min.n`:*, reg min_n_isMissing:L, reg min_n_orDefault:*, reg n1:*, reg n2:V, reg ___:cls, reg r:V, reg p:p(V +), var `shrink.sml`:*, reg shrink_sml_isMissing:L, reg shrink_sml_orDefault:*, var `high.u.bias`:*, reg high_u_bias_isMissing:L, reg high_u_bias_orDefault:*, var `u5.bias`:*, reg u5_bias_isMissing:L, reg u5_bias_orDefault:*, reg high_u_bias1:*, reg high_u_bias2:V, reg r2:V, reg r3:V, reg p1:p(V +), var `eps.correct`:*, reg eps_correct_isMissing:L, reg eps_correct_orDefault:*, var `f.min`:*, reg f_min_isMissing:L, reg f_min_orDefault:*, reg p2:p(V +), var bounds:*, reg bounds_isMissing:L, reg bounds_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg x7:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg x10:V, reg r9:V, reg x11:*, reg x12:V, reg as_numeric:cls, reg r10:V, reg is_finite:cls, reg r11:V, reg __:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x13:*, reg x14:V, reg length:cls, reg r15:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x15:*, reg x16:V, reg min:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg x17:*, reg x18:V, reg max:cls, reg r23:V, reg n3:*, reg n4:V, reg min_n1:*, reg min_n2:V, reg shrink_sml1:*, reg shrink_sml2:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg high_u_bias3:*, reg high_u_bias4:V, reg u5_bias1:*, reg u5_bias2:V, reg f_min1:*, reg f_min2:V, reg c2:cls, reg r26:V, reg eps_correct1:*, reg eps_correct2:V, reg bounds1:*, reg bounds2:V, reg pretty:cls, reg r27:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(5) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    min_n_isMissing = missing.0(min_n);
    if min_n_isMissing then L1() else L2(min_n);
  L1():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      ___ = ldf `%/%` in base;
      r = dyn ___(n2, 3);
      return r;
    };
    goto L2(p);
  L2(min_n_orDefault):
    st `min.n` = min_n_orDefault;
    shrink_sml_isMissing = missing.0(shrink_sml);
    if shrink_sml_isMissing then L3(0.75) else L3(shrink_sml);
  L3(shrink_sml_orDefault):
    st `shrink.sml` = shrink_sml_orDefault;
    high_u_bias_isMissing = missing.0(high_u_bias);
    if high_u_bias_isMissing then L4(1.5) else L4(high_u_bias);
  L4(high_u_bias_orDefault):
    st `high.u.bias` = high_u_bias_orDefault;
    u5_bias_isMissing = missing.0(u5_bias);
    if u5_bias_isMissing then L5() else L6(u5_bias);
  L5():
    p1 = prom<V +>{
      high_u_bias1 = ld `high.u.bias`;
      high_u_bias2 = force? high_u_bias1;
      checkMissing(high_u_bias2);
      r2 = `*`(1.5, high_u_bias2);
      r3 = `+`(0.5, r2);
      return r3;
    };
    goto L6(p1);
  L6(u5_bias_orDefault):
    st `u5.bias` = u5_bias_orDefault;
    eps_correct_isMissing = missing.0(eps_correct);
    if eps_correct_isMissing then L7(0) else L7(eps_correct);
  L7(eps_correct_orDefault):
    st `eps.correct` = eps_correct_orDefault;
    f_min_isMissing = missing.0(f_min);
    if f_min_isMissing then L8() else L9(f_min);
  L8():
    p2 = prom<V +>{
      return 9.5367431640625E-7;
    };
    goto L9(p2);
  L9(f_min_orDefault):
    st `f.min` = f_min_orDefault;
    bounds_isMissing = missing.0(bounds);
    if bounds_isMissing then L10(TRUE) else L10(bounds);
  L10(bounds_orDefault):
    st bounds = bounds_orDefault;
    x1 = ld x;
    check L20() else D0();
  D0():
    deopt 0 [x1];
  L20():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L21() else L22(x2);
  L11(dx1):
    st x = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L21():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x4):
    sym = ldf `is.finite`;
    base = ldf `is.finite` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L12(x7, r7):
    __ = ldf `[` in base;
    r12 = dyn __(x7, r7);
    goto L11(r12);
  L14(r14):
    c1 = `as.logical`(r14);
    if c1 then L35() else L15();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L24():
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L25():
    r6 = dyn base(<lang `<-`(x, as.numeric(x))>);
    goto L12(x4, r6);
  L31():
    x13 = ld x;
    check L33() else D4();
  L32():
    r13 = dyn base2(<sym x>);
    goto L14(r13);
  D4():
    deopt 17 [x13];
  L13(x10, r9):
    st x = r9;
    is_finite = ldf `is.finite` in base;
    r11 = dyn is_finite(r9);
    check L30() else D3();
  L15():
    invisible.0();
    popenv;
    return NULL;
  L26():
    x11 = ld x;
    check L28() else D1();
  L27():
    r8 = dyn base1(<sym x>);
    goto L13(x4, r8);
  L33():
    x14 = force? x13;
    checkMissing(x14);
    length = ldf length in base;
    r15 = dyn length(x14);
    check L34() else D5();
  L35():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  D1():
    deopt 6 [x4, x11];
  D3():
    deopt 12 [x10, r11];
  D5():
    deopt 20 [r15];
  L16(r17):
    popenv;
    return r17;
  L28():
    x12 = force? x11;
    checkMissing(x12);
    as_numeric = ldf `as.numeric` in base;
    r10 = dyn as_numeric(x12);
    check L29() else D2();
  L30():
    goto L12(x10, r11);
  L34():
    goto L14(r15);
  L36():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L37():
    r16 = dyn base3(<lang pretty(min(x), max(x), n, min.n, shrink.sml, c(high.u.bias, u5.bias, f.min), eps.correct, bounds)>);
    goto L16(r16);
  D2():
    deopt 9 [x4, r10];
  L17(r19):
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L29():
    goto L13(x4, r10);
  L38():
    x15 = ld x;
    check L40() else D6();
  L39():
    r18 = dyn base4(<sym x>);
    goto L17(r18);
  D6():
    deopt 25 [x15];
  L18(r22):
    n3 = ld n;
    check L46() else D10();
  L40():
    x16 = force? x15;
    checkMissing(x16);
    min = ldf min in base;
    r20 = dyn min(x16);
    check L41() else D7();
  L42():
    x17 = ld x;
    check L44() else D8();
  L43():
    r21 = dyn base5(<sym x>);
    goto L18(r21);
  D7():
    deopt 28 [r20];
  D8():
    deopt 31 [x17];
  D10():
    deopt 35 [n3];
  L41():
    goto L17(r20);
  L44():
    x18 = force? x17;
    checkMissing(x18);
    max = ldf max in base;
    r23 = dyn max(x18);
    check L45() else D9();
  L46():
    n4 = force? n3;
    checkMissing(n4);
    min_n1 = ld `min.n`;
    check L47() else D11();
  D9():
    deopt 34 [r23];
  D11():
    deopt 37 [min_n1];
  L45():
    goto L18(r23);
  L47():
    min_n2 = force? min_n1;
    checkMissing(min_n2);
    shrink_sml1 = ld `shrink.sml`;
    check L48() else D12();
  D12():
    deopt 39 [shrink_sml1];
  L48():
    shrink_sml2 = force? shrink_sml1;
    checkMissing(shrink_sml2);
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L19(r25):
    eps_correct1 = ld `eps.correct`;
    check L55() else D17();
  L49():
    high_u_bias3 = ld `high.u.bias`;
    check L51() else D13();
  L50():
    r24 = dyn base6(<sym high.u.bias>, <sym u5.bias>, <sym f.min>);
    goto L19(r24);
  D13():
    deopt 43 [high_u_bias3];
  D17():
    deopt 51 [eps_correct1];
  L51():
    high_u_bias4 = force? high_u_bias3;
    checkMissing(high_u_bias4);
    u5_bias1 = ld `u5.bias`;
    check L52() else D14();
  L55():
    eps_correct2 = force? eps_correct1;
    checkMissing(eps_correct2);
    bounds1 = ld bounds;
    check L56() else D18();
  D14():
    deopt 45 [u5_bias1];
  D18():
    deopt 53 [bounds1];
  L52():
    u5_bias2 = force? u5_bias1;
    checkMissing(u5_bias2);
    f_min1 = ld `f.min`;
    check L53() else D15();
  L56():
    bounds2 = force? bounds1;
    checkMissing(bounds2);
    pretty = ldf pretty in base;
    r27 = dyn pretty(r19, r22, n4, min_n2, shrink_sml2, r25, eps_correct2, bounds2);
    check L57() else D19();
  D15():
    deopt 47 [f_min1];
  D19():
    deopt 56 [r27];
  L53():
    f_min2 = force? f_min1;
    checkMissing(f_min2);
    c2 = ldf c in base;
    r26 = dyn c2(high_u_bias4, u5_bias2, f_min2);
    check L54() else D16();
  L57():
    goto L16(r27);
  D16():
    deopt 50 [r26];
  L54():
    goto L19(r26);
  }
}