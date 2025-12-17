fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2387545022;
    st `pretty.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2387545022(x, n, `min.n`, `shrink.sml`, `high.u.bias`, `u5.bias`, `eps.correct`, `f.min`, `...`) {
  (reg x:*, reg n:*, reg min_n:*, reg shrink_sml:*, reg high_u_bias:*, reg u5_bias:*, reg eps_correct:*, reg f_min:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `min.n`:*, reg min_n_isMissing:L, reg min_n_orDefault:*, reg n1:*, reg n2:V, reg ___:cls, reg r:V, reg p:p(V +), var `shrink.sml`:*, reg shrink_sml_isMissing:L, reg shrink_sml_orDefault:*, var `high.u.bias`:*, reg high_u_bias_isMissing:L, reg high_u_bias_orDefault:*, var `u5.bias`:*, reg u5_bias_isMissing:L, reg u5_bias_orDefault:*, reg high_u_bias1:*, reg high_u_bias2:V, reg r2:V, reg r3:V, reg p1:p(V +), var `eps.correct`:*, reg eps_correct_isMissing:L, reg eps_correct_orDefault:*, var `f.min`:*, reg f_min_isMissing:L, reg f_min_orDefault:*, reg p2:p(V +), var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg x7:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg x10:V, reg r9:V, reg x11:*, reg x12:V, reg as_numeric:cls, reg r10:V, reg is_finite:cls, reg r11:V, reg __:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x13:*, reg x14:V, reg length:cls, reg r15:V, reg r16:V, reg c1:L, reg x15:*, reg x16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg x17:*, reg x18:V, reg min:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg x19:*, reg x20:V, reg max:cls, reg r26:V, reg n3:*, reg n4:V, reg min_n1:*, reg min_n2:V, reg shrink_sml1:*, reg shrink_sml2:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg high_u_bias3:*, reg high_u_bias4:V, reg u5_bias1:*, reg u5_bias2:V, reg f_min1:*, reg f_min2:V, reg c2:cls, reg r29:V, reg eps_correct1:*, reg eps_correct2:V, reg pretty:cls, reg r30:V, reg z:*, reg z1:V, reg c3:L, reg z3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg z4:*, reg z5:V, reg c4:L, reg z7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r34:V, reg z8:*, reg z9:V, reg c5:L, reg z11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r35:V, reg n5:*, reg n6:V, reg r36:V, reg seq_int:cls, reg r37:V, reg eps_correct3:*, reg eps_correct4:V, reg r38:V, reg c6:L, reg c8:V, reg n7:*, reg n8:V, reg c9:L, reg c10:V, reg c12:L, reg diff:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg z12:*, reg z13:V, reg c13:L, reg z15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r41:V, reg z16:*, reg z17:V, reg c14:L, reg z19:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r42:V, reg range:cls, reg r43:V, reg n9:*, reg n10:V, reg r44:V, reg p3:p(V +), reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg s:*, reg s1:V, reg abs:cls, reg r51:V, reg delta:*, reg delta1:V, reg r52:V, reg r53:V, reg any:cls, reg r54:V, reg c15:L, reg l:*, reg c16:L, reg r56:R, reg l2:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r58:R, reg dx13:V, reg small:*, reg small1:V, reg ___1:cls, reg r59:V, reg r60:V, reg s2:*, reg s3:V |
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
    st `...` = ddd;
    x1 = ld x;
    check L29() else D0();
  D0():
    deopt 0 [x1];
  L29():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L30() else L31(x2);
  L10(dx1):
    st x = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L30():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(x4):
    sym = ldf `is.finite`;
    base = ldf `is.finite` in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L11(x7, r7):
    __ = ldf `[` in base;
    r12 = dyn __(x7, r7);
    goto L10(r12);
  L13(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L44() else L14();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L33():
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L34():
    r6 = dyn base(<lang `<-`(x, as.numeric(x))>);
    goto L11(x4, r6);
  L40():
    x13 = ld x;
    check L42() else D4();
  L41():
    r13 = dyn base2(<sym x>);
    goto L13(r13);
  D4():
    deopt 17 [x13];
  L12(x10, r9):
    st x = r9;
    is_finite = ldf `is.finite` in base;
    r11 = dyn is_finite(r9);
    check L39() else D3();
  L14():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L35():
    x11 = ld x;
    check L37() else D1();
  L36():
    r8 = dyn base1(<sym x>);
    goto L12(x4, r8);
  L42():
    x14 = force? x13;
    checkMissing(x14);
    length = ldf length in base;
    r15 = dyn length(x14);
    check L43() else D5();
  L44():
    x15 = ld x;
    check L45() else D6();
  D1():
    deopt 6 [x4, x11];
  D3():
    deopt 12 [x10, r11];
  D5():
    deopt 20 [r15];
  D6():
    deopt 22 [x15];
  L16(r20):
    st z = r20;
    z = ld z;
    check L69() else D20();
  L37():
    x12 = force? x11;
    checkMissing(x12);
    as_numeric = ldf `as.numeric` in base;
    r10 = dyn as_numeric(x12);
    check L38() else D2();
  L39():
    goto L11(x10, r11);
  L43():
    goto L13(r15);
  L45():
    x16 = force? x15;
    checkMissing(x16);
    popenv;
    return x16;
  L48():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L49():
    r19 = dyn base3(<lang pretty(min(x), max(x), n, min.n, shrink.sml, c(high.u.bias, u5.bias, f.min), eps.correct, TRUE)>);
    goto L16(r19);
  D2():
    deopt 9 [x4, r10];
  D20():
    deopt 63 [z];
  L17(r22):
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L38():
    goto L12(x4, r10);
  L50():
    x17 = ld x;
    check L52() else D7();
  L51():
    r21 = dyn base4(<sym x>);
    goto L17(r21);
  L69():
    z1 = force? z;
    checkMissing(z1);
    c3 = `is.object`(z1);
    if c3 then L71() else L72(z1);
  D7():
    deopt 31 [x17];
  L18(r25):
    n3 = ld n;
    check L58() else D11();
  L52():
    x18 = force? x17;
    checkMissing(x18);
    min = ldf min in base;
    r23 = dyn min(x18);
    check L53() else D8();
  L54():
    x19 = ld x;
    check L56() else D9();
  L55():
    r24 = dyn base5(<sym x>);
    goto L18(r24);
  L70(dx3):
    st n = dx3;
    sym7 = ldf `seq.int`;
    base7 = ldf `seq.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L71():
    dr2 = tryDispatchBuiltin.1("$", z1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(z3):
    r31 = `$`(z3, <sym n>);
    goto L70(r31);
  D8():
    deopt 34 [r23];
  D9():
    deopt 37 [x19];
  D11():
    deopt 41 [n3];
  L20(r33):
    st s = r33;
    eps_correct3 = ld `eps.correct`;
    check L88() else D25();
  L53():
    goto L17(r23);
  L56():
    x20 = force? x19;
    checkMissing(x20);
    max = ldf max in base;
    r26 = dyn max(x20);
    check L57() else D10();
  L58():
    n4 = force? n3;
    checkMissing(n4);
    min_n1 = ld `min.n`;
    check L59() else D12();
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L70(dx2);
  L74():
    z4 = ld z;
    check L76() else D21();
  L75():
    r32 = dyn base7[, , `length.out`](<lang `$`(z, l)>, <lang `$`(z, u)>, <lang `+`(n, 1)>);
    goto L20(r32);
  D10():
    deopt 40 [r26];
  D12():
    deopt 43 [min_n1];
  D21():
    deopt 69 [z4];
  D25():
    deopt 83 [eps_correct3];
  L57():
    goto L18(r26);
  L59():
    min_n2 = force? min_n1;
    checkMissing(min_n2);
    shrink_sml1 = ld `shrink.sml`;
    check L60() else D13();
  L76():
    z5 = force? z4;
    checkMissing(z5);
    c4 = `is.object`(z5);
    if c4 then L78() else L79(z5);
  L88():
    eps_correct4 = force? eps_correct3;
    checkMissing(eps_correct4);
    r38 = `!`(eps_correct4);
    c6 = `as.logical`(r38);
    if c6 then L89() else L21(c6);
  D13():
    deopt 45 [shrink_sml1];
  L21(c8):
    c12 = `as.logical`(c8);
    if c12 then L92() else L22();
  L60():
    shrink_sml2 = force? shrink_sml1;
    checkMissing(shrink_sml2);
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L77(dx5):
    z8 = ld z;
    check L81() else D22();
  L78():
    dr4 = tryDispatchBuiltin.1("$", z5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L80() else L79(dr4);
  L79(z7):
    r34 = `$`(z7, <sym l>);
    goto L77(r34);
  L89():
    n7 = ld n;
    check L90() else D26();
  D22():
    deopt 72 [z8];
  D26():
    deopt 86 [c6, n7];
  L19(r28):
    eps_correct1 = ld `eps.correct`;
    check L67() else D18();
  L22():
    goto L28();
  L28():
    s2 = ld s;
    check L110() else D34();
  L61():
    high_u_bias3 = ld `high.u.bias`;
    check L63() else D14();
  L62():
    r27 = dyn base6(<sym high.u.bias>, <sym u5.bias>, <sym f.min>);
    goto L19(r27);
  L80():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L77(dx4);
  L81():
    z9 = force? z8;
    checkMissing(z9);
    c5 = `is.object`(z9);
    if c5 then L83() else L84(z9);
  L90():
    n8 = force? n7;
    checkMissing(n8);
    c9 = `as.logical`(n8);
    c10 = `&&`(c6, c9);
    goto L21(c10);
  L92():
    diff = ldf diff;
    check L93() else D27();
  D14():
    deopt 49 [high_u_bias3];
  D18():
    deopt 57 [eps_correct1];
  D27():
    deopt 90 [];
  D34():
    deopt 120 [s2];
  L63():
    high_u_bias4 = force? high_u_bias3;
    checkMissing(high_u_bias4);
    u5_bias1 = ld `u5.bias`;
    check L64() else D15();
  L67():
    eps_correct2 = force? eps_correct1;
    checkMissing(eps_correct2);
    pretty = ldf pretty in base;
    r30 = dyn pretty(r22, r25, n4, min_n2, shrink_sml2, r28, eps_correct2, TRUE);
    check L68() else D19();
  L82(dx7):
    n5 = ld n;
    check L86() else D23();
  L83():
    dr6 = tryDispatchBuiltin.1("$", z9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(dr6);
  L84(z11):
    r35 = `$`(z11, <sym u>);
    goto L82(r35);
  L93():
    p3 = prom<V +>{
      sym8 = ldf range;
      base8 = ldf range in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r40):
      n9 = ld n;
      n10 = force? n9;
      checkMissing(n10);
      r44 = `/`(r40, n10);
      return r44;
    L1():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c13 = `is.object`(z13);
      if c13 then L4() else L5(z13);
    L2():
      r39 = dyn base8(<lang `$`(z, l)>, <lang `$`(z, u)>);
      goto L0(r39);
    L3(dx9):
      z16 = ld z;
      z17 = force? z16;
      checkMissing(z17);
      c14 = `is.object`(z17);
      if c14 then L8() else L9(z17);
    L4():
      dr8 = tryDispatchBuiltin.1("$", z13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(z15):
      r41 = `$`(z15, <sym l>);
      goto L3(r41);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L3(dx8);
    L7(dx11):
      range = ldf range in base;
      r43 = dyn range(dx9, dx11);
      goto L0(r43);
    L8():
      dr10 = tryDispatchBuiltin.1("$", z17);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L10() else L9(dr10);
    L9(z19):
      r42 = `$`(z19, <sym u>);
      goto L7(r42);
    L10():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L7(dx10);
    };
    r46 = dyn diff(p3);
    check L94() else D28();
  L110():
    s3 = force? s2;
    checkMissing(s3);
    popenv;
    return s3;
  D15():
    deopt 51 [u5_bias1];
  D19():
    deopt 61 [r30];
  D23():
    deopt 75 [n5];
  D28():
    deopt 92 [r46];
  L64():
    u5_bias2 = force? u5_bias1;
    checkMissing(u5_bias2);
    f_min1 = ld `f.min`;
    check L65() else D16();
  L68():
    goto L16(r30);
  L85():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L82(dx6);
  L86():
    n6 = force? n5;
    checkMissing(n6);
    r36 = `+`(n6, 1);
    seq_int = ldf `seq.int` in base;
    r37 = dyn seq_int(dx5, dx7, r36);
    check L87() else D24();
  L94():
    st delta = r46;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  D16():
    deopt 53 [f_min1];
  D24():
    deopt 81 [r37];
  L23(r48):
    c15 = `as.logical`(r48);
    if c15 then L103() else L25();
  L65():
    f_min2 = force? f_min1;
    checkMissing(f_min2);
    c2 = ldf c in base;
    r29 = dyn c2(high_u_bias4, u5_bias2, f_min2);
    check L66() else D17();
  L87():
    goto L20(r37);
  L95():
    sym10 = ldf abs;
    base10 = ldf abs in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  L96():
    r47 = dyn base9(<lang `<-`(small, `<`(abs(s), `*`(1.0E-14, delta)))>);
    goto L23(r47);
  D17():
    deopt 56 [r29];
  L24(r50):
    delta = ld delta;
    check L101() else D31();
  L25():
    goto L27(NULL);
  L27(r60):
    goto L28();
  L66():
    goto L19(r29);
  L97():
    s = ld s;
    check L99() else D29();
  L98():
    r49 = dyn base10(<sym s>);
    goto L24(r49);
  L103():
    l = ld s;
    c16 = `is.object`(l);
    if c16 then L104() else L105(0.0, l);
  D29():
    deopt 98 [s];
  D31():
    deopt 102 [r50, 1.0E-14, delta];
  L26(r58, dx13):
    st s = dx13;
    goto L27(r58);
  L99():
    s1 = force? s;
    checkMissing(s1);
    abs = ldf abs in base;
    r51 = dyn abs(s1);
    check L100() else D30();
  L101():
    delta1 = force? delta;
    checkMissing(delta1);
    r52 = `*`(1.0E-14, delta1);
    r53 = `<`(r50, r52);
    st small = r53;
    any = ldf any in base;
    r54 = dyn any(r53);
    check L102() else D32();
  L104():
    dr12 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L106() else L105(0.0, dr12);
  L105(r56, l2):
    small = ld small;
    check L107() else D33();
  D30():
    deopt 101 [r51];
  D32():
    deopt 108 [r54];
  D33():
    deopt 112 [r56, l2, 0.0, small];
  L100():
    goto L24(r51);
  L102():
    goto L23(r54);
  L106():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L26(0.0, dx12);
  L107():
    small1 = force? small;
    ___1 = ldf `[<-` in base;
    r59 = dyn ___1(l2, 0.0, small1);
    goto L26(r56, r59);
  }
}