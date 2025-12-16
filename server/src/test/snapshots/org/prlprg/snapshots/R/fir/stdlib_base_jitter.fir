fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg round:cls, reg r3:V, reg jitter:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg rep:cls, reg r6:V, reg p:p(V +), reg r8:V, reg jitter1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg rep1:cls, reg r11:V, reg p1:p(V +), reg r13:V |
    mkenv;
    r = clos `inner-1098326296`;
    st jitter = r;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    jitter = ldf jitter;
    check L3() else D0();
  L1():
    round = ldf round in base;
    r3 = dyn round(<lang jitter(c(rep(1.0, 3.0), rep(1.2, 4.0), rep(3.0, 3.0)))>, 3.0);
    goto L0();
  L2():
    r1 = dyn base(<lang jitter(c(rep(1.0, 3.0), rep(1.2, 4.0), rep(3.0, 3.0)))>, 3.0);
    goto L0();
  D0():
    deopt 7 [];
  L3():
    p = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      rep = ldf rep in base;
      r6 = dyn rep(0.0, 7.0);
      goto L0(r6);
    L2():
      r4 = dyn base1(0.0, 7.0);
      goto L0(r4);
    };
    r8 = dyn jitter(p);
    check L4() else D1();
  D1():
    deopt 9 [r8];
  L4():
    jitter1 = ldf jitter;
    check L5() else D2();
  D2():
    deopt 11 [];
  L5():
    p1 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      rep1 = ldf rep in base;
      r11 = dyn rep1(10000.0, 5.0);
      goto L0(r11);
    L2():
      r9 = dyn base2(10000.0, 5.0);
      goto L0(r9);
    };
    r13 = dyn jitter1(p1);
    check L6() else D3();
  D3():
    deopt 13 [r13];
  L6():
    popenv;
    return r13;
  }
}
fun `inner-1098326296`(x, factor, amount) {
  (reg x:*, reg factor:*, reg amount:*) -+> V { var x:*, var factor:*, reg factor_isMissing:L, reg factor_orDefault:*, var amount:*, reg amount_isMissing:L, reg amount_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x5:*, reg x6:V, reg is_numeric:cls, reg r8:V, reg r9:V, reg c1:L, reg stop:cls, reg r10:V, reg diff:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg x13:V, reg r15:V, reg x14:*, reg x15:V, reg is_finite:cls, reg r16:V, reg __:cls, reg r17:V, reg range:cls, reg r18:V, reg p:p(V +), reg r20:V, reg z:*, reg z1:V, reg r21:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg r24:*, reg r25:V, reg c4:L, reg r27:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r28:V, reg abs:cls, reg r29:V, reg z2:*, reg z3:V, reg r31:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg amount1:*, reg amount2:V, reg c6:V, reg c7:L, reg diff1:cls, reg unique:cls, reg sort_int:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg round:cls, reg r37:V, reg p1:p(V +), reg r39:V, reg p2:p(V +), reg r41:V, reg p3:p(V +), reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg d:*, reg d1:V, reg length1:cls, reg r46:V, reg c8:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg d2:*, reg d3:V, reg min:cls, reg r49:V, reg r50:V, reg xx:*, reg xx1:V, reg r51:V, reg c9:L, reg xx2:*, reg xx3:V, reg r52:V, reg z4:*, reg z5:V, reg r53:V, reg factor1:*, reg factor2:V, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg r59:V, reg d4:*, reg d5:V, reg abs1:cls, reg r60:V, reg r61:V, reg amount3:*, reg amount4:V, reg r63:V, reg c10:L, reg factor3:*, reg factor4:V, reg z6:*, reg z7:V, reg r64:V, reg r65:V, reg x16:*, reg x17:V, reg __2:cls, reg r66:V, reg r67:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg x18:*, reg x19:V, reg length2:cls, reg r70:V, reg p4:p(V +), reg amount5:*, reg amount6:V, reg r72:V, reg p5:p(V +), reg amount7:*, reg amount8:V, reg p6:p(V +), reg r75:V, reg r76:V |
    mkenv;
    st x = x;
    factor_isMissing = missing.0(factor);
    if factor_isMissing then L0(1.0) else L0(factor);
  L0(factor_orDefault):
    st factor = factor_orDefault;
    amount_isMissing = missing.0(amount);
    if amount_isMissing then L1(NULL) else L1(amount);
  L1(amount_orDefault):
    st amount = amount_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L2(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L28() else L3();
  L24():
    x1 = ld x;
    check L26() else D0();
  L25():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L26():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L27() else D1();
  L28():
    x3 = ld x;
    check L29() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [x3];
  L5(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L36() else L6();
  L27():
    goto L2(r2);
  L29():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L32():
    x5 = ld x;
    check L34() else D3();
  L33():
    r6 = dyn base1(<sym x>);
    goto L5(r6);
  D3():
    deopt 15 [x5];
  L6():
    goto L7();
  L7():
    diff = ldf diff;
    check L40() else D7();
  L34():
    x6 = force? x5;
    checkMissing(x6);
    is_numeric = ldf `is.numeric` in base;
    r8 = dyn is_numeric(x6);
    check L35() else D4();
  L36():
    stop = ldf stop;
    check L37() else D5();
  D4():
    deopt 18 [r8];
  D5():
    deopt 21 [];
  D7():
    deopt 27 [];
  L35():
    goto L5(r8);
  L37():
    r10 = dyn stop("'x' must be numeric");
    check L38() else D6();
  L40():
    p = prom<V +>{
      sym2 = ldf range;
      base2 = ldf range in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r13):
      st r = r13;
      invisible.0();
      return r13;
    L3():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c2 = `is.object`(x8);
      if c2 then L5() else L6(x8);
    L4():
      r12 = dyn base2(<lang `[`(x, is.finite(x))>);
      goto L0(r12);
    L1(dx1):
      range = ldf range in base;
      r18 = dyn range(dx1);
      goto L0(r18);
    L5():
      dr = tryDispatchBuiltin.1("[", x8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(x10):
      sym3 = ldf `is.finite`;
      base3 = ldf `is.finite` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L2(x13, r15):
      __ = ldf `[` in base;
      r17 = dyn __(x13, r15);
      goto L1(r17);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      is_finite = ldf `is.finite` in base;
      r16 = dyn is_finite(x15);
      goto L2(x10, r16);
    L9():
      r14 = dyn base3(<sym x>);
      goto L2(x10, r14);
    };
    r20 = dyn diff(p);
    check L41() else D8();
  D6():
    deopt 23 [r10];
  D8():
    deopt 29 [r20];
  L38():
    goto L7();
  L41():
    st z = r20;
    z = ld z;
    check L42() else D9();
  D9():
    deopt 31 [z];
  L42():
    z1 = force? z;
    checkMissing(z1);
    r21 = `==`(z1, 0.0);
    c3 = `as.logical`(r21);
    if c3 then L43() else L8();
  L8():
    goto L11();
  L11():
    z2 = ld z;
    check L52() else D12();
  L43():
    sym4 = ldf abs;
    base4 = ldf abs in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D12():
    deopt 47 [z2];
  L9(r23):
    st z = r23;
    goto L11();
  L44():
    r24 = ld r;
    check L46() else D10();
  L45():
    r22 = dyn base4(<lang `[`(r, 1)>);
    goto L9(r22);
  L52():
    z3 = force? z2;
    checkMissing(z3);
    r31 = `==`(z3, 0.0);
    c5 = `as.logical`(r31);
    if c5 then L53() else L12();
  D10():
    deopt 37 [r24];
  L12():
    goto L13();
  L13():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L46():
    r25 = force? r24;
    checkMissing(r25);
    c4 = `is.object`(r25);
    if c4 then L47() else L48(r25);
  L53():
    st z = 1.0;
    goto L13();
  L10(dx3):
    abs = ldf abs in base;
    r29 = dyn abs(dx3);
    check L50() else D11();
  L14(r34):
    c7 = `as.logical`(r34);
    if c7 then L58() else L15();
  L47():
    dr2 = tryDispatchBuiltin.1("[", r25);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(dr2);
  L48(r27):
    __1 = ldf `[` in base;
    r28 = dyn __1(r27, 1);
    goto L10(r28);
  L55():
    amount1 = ld amount;
    check L57() else D13();
  L56():
    r33 = dyn base5(<sym amount>);
    goto L14(r33);
  D11():
    deopt 43 [r29];
  D13():
    deopt 57 [amount1];
  L15():
    amount3 = ld amount;
    check L82() else D26();
  L22():
    x16 = ld x;
    check L87() else D29();
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L50():
    goto L9(r29);
  L57():
    amount2 = force? amount1;
    checkMissing(amount2);
    c6 = `==`(amount2, NULL);
    goto L14(c6);
  L58():
    diff1 = ldf diff;
    check L59() else D14();
  D14():
    deopt 61 [];
  D26():
    deopt 101 [amount3];
  D29():
    deopt 114 [x16];
  L59():
    p3 = prom<V +>{
      unique = ldf unique;
      p2 = prom<V +>{
        sort_int = ldf `sort.int`;
        p1 = prom<V +>{
          sym6 = ldf round;
          base6 = ldf round in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r36):
          return r36;
        L1():
          round = ldf round in base;
          r37 = dyn round(<sym x>, <lang `-`(3.0, floor(log10(z)))>);
          goto L0(r37);
        L2():
          r35 = dyn base6(<sym x>, <lang `-`(3.0, floor(log10(z)))>);
          goto L0(r35);
        };
        r39 = dyn sort_int(p1);
        return r39;
      };
      r41 = dyn unique(p2);
      st xx = r41;
      invisible.0();
      return r41;
    };
    r43 = dyn diff1(p3);
    check L60() else D15();
  L82():
    amount4 = force? amount3;
    checkMissing(amount4);
    r63 = `==`(amount4, 0.0);
    c10 = `as.logical`(r63);
    if c10 then L83() else L23();
  L87():
    x17 = force? x16;
    checkMissing(x17);
    __2 = ldf `::`;
    check L88() else D30();
  D15():
    deopt 63 [r43];
  D30():
    deopt 116 [x17];
  L23():
    goto L22();
  L60():
    st d = r43;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  L83():
    factor3 = ld factor;
    check L84() else D27();
  L88():
    r66 = dyn __2("stats", "runif");
    check L89() else D31();
  D27():
    deopt 105 [factor3];
  D31():
    deopt 119 [x17, r66];
  L16(r45):
    c8 = `as.logical`(r45);
    if c8 then L65() else L17();
  L61():
    d = ld d;
    check L63() else D16();
  L62():
    r44 = dyn base7(<sym d>);
    goto L16(r44);
  L84():
    factor4 = force? factor3;
    checkMissing(factor4);
    z6 = ld z;
    check L85() else D28();
  L89():
    checkFun.0(r66);
    r67 = r66 as cls;
    p4 = prom<V +>{
      sym10 = ldf length;
      base10 = ldf length in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      length2 = ldf length in base;
      r70 = dyn length2(x19);
      goto L0(r70);
    L2():
      r68 = dyn base10(<sym x>);
      goto L0(r68);
    };
    p5 = prom<V +>{
      amount5 = ld amount;
      amount6 = force? amount5;
      checkMissing(amount6);
      r72 = `-`(<missing>, amount6);
      return r72;
    };
    p6 = prom<V +>{
      amount7 = ld amount;
      amount8 = force? amount7;
      checkMissing(amount8);
      return amount8;
    };
    r75 = dyn r67(p4, p5, p6);
    check L90() else D32();
  D16():
    deopt 67 [d];
  D28():
    deopt 106 [factor4, z6];
  D32():
    deopt 124 [x17, r75];
  L17():
    xx = ld xx;
    check L71() else D20();
  L19(r50):
    st d = r50;
    factor1 = ld factor;
    check L76() else D23();
  L63():
    d1 = force? d;
    checkMissing(d1);
    length1 = ldf length in base;
    r46 = dyn length1(d1);
    check L64() else D17();
  L65():
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L66() else L67();
  L85():
    z7 = force? z6;
    checkMissing(z7);
    r64 = `/`(z7, 50.0);
    r65 = `*`(factor4, r64);
    st amount = r65;
    goto L22();
  L90():
    r76 = `+`(x17, r75);
    popenv;
    return r76;
  D17():
    deopt 70 [r46];
  D20():
    deopt 77 [xx];
  D23():
    deopt 90 [factor1];
  L18(r48):
    goto L19(r48);
  L64():
    goto L16(r46);
  L66():
    d2 = ld d;
    check L68() else D18();
  L67():
    r47 = dyn base8(<sym d>);
    goto L18(r47);
  L71():
    xx1 = force? xx;
    checkMissing(xx1);
    r51 = `!=`(xx1, 0.0);
    c9 = `as.logical`(r51);
    if c9 then L72() else L20();
  L76():
    factor2 = force? factor1;
    checkMissing(factor2);
    r54 = `/`(factor2, 5.0);
    sym9 = ldf abs;
    base9 = ldf abs in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L77() else L78();
  D18():
    deopt 73 [d2];
  L20():
    z4 = ld z;
    check L75() else D22();
  L21(r58, r59):
    r61 = `*`(r58, r59);
    st amount = r61;
    goto L22();
  L68():
    d3 = force? d2;
    checkMissing(d3);
    min = ldf min in base;
    r49 = dyn min(d3);
    check L69() else D19();
  L72():
    xx2 = ld xx;
    check L73() else D21();
  L77():
    d4 = ld d;
    check L79() else D24();
  L78():
    r57 = dyn base9(<sym d>);
    goto L21(r54, r57);
  D19():
    deopt 76 [r49];
  D21():
    deopt 81 [xx2];
  D22():
    deopt 85 [z4];
  D24():
    deopt 95 [r54, d4];
  L69():
    goto L18(r49);
  L73():
    xx3 = force? xx2;
    checkMissing(xx3);
    r52 = `/`(xx3, 10.0);
    goto L19(r52);
  L75():
    z5 = force? z4;
    checkMissing(z5);
    r53 = `/`(z5, 10.0);
    goto L19(r53);
  L79():
    d5 = force? d4;
    checkMissing(d5);
    abs1 = ldf abs in base;
    r60 = dyn abs1(d5);
    check L80() else D25();
  D25():
    deopt 98 [r54, r60];
  L80():
    goto L21(r54, r60);
  }
}