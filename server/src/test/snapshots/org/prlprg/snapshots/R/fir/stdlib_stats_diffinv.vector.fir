fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3993031833;
    st `diffinv.vector` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3993031833(x, lag, differences, xi, `...`) {
  (reg x:*, reg lag:*, reg differences:*, reg xi:*, reg ddd:dots) -+> V { var x:*, var lag:*, reg lag_isMissing:L, reg lag_orDefault:*, var differences:*, reg differences_isMissing:L, reg differences_orDefault:*, var xi:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_vector:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg lag1:*, reg lag2:V, reg as_integer:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg differences1:*, reg differences2:V, reg as_integer1:cls, reg r11:V, reg lag3:*, reg lag4:V, reg r12:V, reg c1:L, reg c2:V, reg differences3:*, reg differences4:V, reg r13:V, reg c4:L, reg c5:V, reg c7:L, reg stop1:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg c8:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg rep:cls, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg xi1:*, reg xi2:V, reg length:cls, reg r25:V, reg lag5:*, reg lag6:V, reg differences5:*, reg differences6:V, reg r26:V, reg r27:V, reg c9:L, reg stop2:cls, reg r28:V, reg differences7:*, reg differences8:V, reg r30:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg x3:*, reg x4:V, reg as_double:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg xi3:*, reg xi4:V, reg as_double1:cls, reg r36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r39:V, reg r40:V, reg x5:*, reg x6:V, reg length1:cls, reg r41:V, reg as_integer2:cls, reg r42:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg n:*, reg n1:V, reg is_na:cls, reg r45:V, reg c11:L, reg stop3:cls, reg gettextf:cls, reg r46:V, reg p:p(V +), reg r48:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r50:V, reg r51:V, reg C_intgrt_vec:*, reg C_intgrt_vec1:V, reg x7:*, reg x8:V, reg xi5:*, reg xi6:V, reg lag7:*, reg lag8:V, reg vargs:dots, reg r52:V, reg diffinv_vector:cls, reg diffinv_vector1:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg lag9:*, reg lag10:V, reg p2:p(V +), reg differences9:*, reg differences10:V, reg r55:V, reg p3:p(V +), reg diff:cls, reg xi7:*, reg xi8:V, reg p4:p(V +), reg lag11:*, reg lag12:V, reg p5:p(V +), reg r59:V, reg p6:p(V +), reg r61:V, reg p7:p(V +), reg lag13:*, reg lag14:V, reg p8:p(V +), reg xi9:*, reg xi10:V, reg c12:L, reg xi12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lag15:*, reg lag16:V, reg r64:V, reg __:cls, reg r65:V, reg p9:p(V +), reg r67:V |
    mkenv;
    st x = x;
    lag_isMissing = missing.0(lag);
    if lag_isMissing then L0(1) else L0(lag);
  L0(lag_orDefault):
    st lag = lag_orDefault;
    differences_isMissing = missing.0(differences);
    if differences_isMissing then L1(1) else L1(differences);
  L1(differences_orDefault):
    st differences = differences_orDefault;
    st xi = xi;
    st `...` = ddd;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L30() else L3();
  L26():
    x1 = ld x;
    check L28() else D0();
  L27():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    goto L4();
  L4():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L28():
    x2 = force? x1;
    checkMissing(x2);
    is_vector = ldf `is.vector` in base;
    r2 = dyn is_vector(x2, "any");
    check L29() else D1();
  L30():
    stop = ldf stop;
    check L31() else D2();
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [];
  L5(r7):
    st lag = r7;
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L29():
    goto L2(r2);
  L31():
    r4 = dyn stop("'x' is not a vector");
    check L32() else D3();
  L34():
    lag1 = ld lag;
    check L36() else D4();
  L35():
    r6 = dyn base1(<sym lag>);
    goto L5(r6);
  D3():
    deopt 11 [r4];
  D4():
    deopt 16 [lag1];
  L6(r10):
    st differences = r10;
    lag3 = ld lag;
    check L42() else D8();
  L32():
    goto L4();
  L36():
    lag2 = force? lag1;
    checkMissing(lag2);
    as_integer = ldf `as.integer` in base;
    r8 = dyn as_integer(lag2);
    check L37() else D5();
  L38():
    differences1 = ld differences;
    check L40() else D6();
  L39():
    r9 = dyn base2(<sym differences>);
    goto L6(r9);
  D5():
    deopt 19 [r8];
  D6():
    deopt 23 [differences1];
  D8():
    deopt 28 [lag3];
  L37():
    goto L5(r8);
  L40():
    differences2 = force? differences1;
    checkMissing(differences2);
    as_integer1 = ldf `as.integer` in base;
    r11 = dyn as_integer1(differences2);
    check L41() else D7();
  L42():
    lag4 = force? lag3;
    checkMissing(lag4);
    r12 = `<`(lag4, 1);
    c1 = `as.logical`(r12);
    if c1 then L7(c1) else L43();
  D7():
    deopt 26 [r11];
  L7(c2):
    c7 = `as.logical`(c2);
    if c7 then L46() else L8();
  L41():
    goto L6(r11);
  L43():
    differences3 = ld differences;
    check L44() else D9();
  D9():
    deopt 32 [c1, differences3];
  L8():
    goto L9();
  L9():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L44():
    differences4 = force? differences3;
    checkMissing(differences4);
    r13 = `<`(differences4, 1);
    c4 = `as.logical`(r13);
    c5 = `||`(c1, c4);
    goto L7(c5);
  L46():
    stop1 = ldf stop;
    check L47() else D10();
  D10():
    deopt 38 [];
  L10(r17):
    c8 = `as.logical`(r17);
    if c8 then L52() else L11();
  L47():
    r14 = dyn stop1("bad value for 'lag' or 'differences'");
    check L48() else D11();
  L50():
    missing = ldf missing in base;
    r18 = dyn missing(<sym xi>);
    goto L10(r18);
  L51():
    r16 = dyn base3(<sym xi>);
    goto L10(r16);
  D11():
    deopt 40 [r14];
  L11():
    goto L13();
  L13():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L48():
    goto L9();
  L52():
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L12(r20):
    st xi = r20;
    goto L13();
  L14(r24):
    lag5 = ld lag;
    check L60() else D14();
  L53():
    rep = ldf rep in base;
    r21 = dyn rep(0.0, <lang `*`(lag, differences)>);
    goto L12(r21);
  L54():
    r19 = dyn base4(0.0, <lang `*`(lag, differences)>);
    goto L12(r19);
  L56():
    xi1 = ld xi;
    check L58() else D12();
  L57():
    r23 = dyn base5(<sym xi>);
    goto L14(r23);
  D12():
    deopt 54 [xi1];
  D14():
    deopt 57 [r24, lag5];
  L58():
    xi2 = force? xi1;
    checkMissing(xi2);
    length = ldf length in base;
    r25 = dyn length(xi2);
    check L59() else D13();
  L60():
    lag6 = force? lag5;
    checkMissing(lag6);
    differences5 = ld differences;
    check L61() else D15();
  D13():
    deopt 57 [r25];
  D15():
    deopt 58 [r24, lag6, differences5];
  L59():
    goto L14(r25);
  L61():
    differences6 = force? differences5;
    checkMissing(differences6);
    r26 = `*`(lag6, differences6);
    r27 = `!=`(r24, r26);
    c9 = `as.logical`(r27);
    if c9 then L62() else L15();
  L15():
    goto L16();
  L16():
    differences7 = ld differences;
    check L66() else D18();
  L62():
    stop2 = ldf stop;
    check L63() else D16();
  D16():
    deopt 63 [];
  D18():
    deopt 68 [differences7];
  L63():
    r28 = dyn stop2("'xi' does not have the right length");
    check L64() else D17();
  L66():
    differences8 = force? differences7;
    checkMissing(differences8);
    r30 = `==`(differences8, 1);
    c10 = `as.logical`(r30);
    if c10 then L67() else L17();
  D17():
    deopt 65 [r28];
  L17():
    diffinv_vector = ldf `diffinv.vector`;
    check L98() else D34();
  L64():
    goto L16();
  L67():
    sym6 = ldf `as.double`;
    base6 = ldf `as.double` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  D34():
    deopt 119 [];
  L18(r32):
    st x = r32;
    sym7 = ldf `as.double`;
    base7 = ldf `as.double` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L68():
    x3 = ld x;
    check L70() else D19();
  L69():
    r31 = dyn base6(<sym x>);
    goto L18(r31);
  L98():
    p7 = prom<V +>{
      diffinv_vector1 = ldf `diffinv.vector`;
      p1 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      p2 = prom<V +>{
        lag9 = ld lag;
        lag10 = force? lag9;
        checkMissing(lag10);
        return lag10;
      };
      p3 = prom<V +>{
        differences9 = ld differences;
        differences10 = force? differences9;
        checkMissing(differences10);
        r55 = `-`(differences10, 1);
        return r55;
      };
      p6 = prom<V +>{
        diff = ldf diff;
        p4 = prom<V +>{
          xi7 = ld xi;
          xi8 = force? xi7;
          checkMissing(xi8);
          return xi8;
        };
        p5 = prom<V +>{
          lag11 = ld lag;
          lag12 = force? lag11;
          checkMissing(lag12);
          return lag12;
        };
        r59 = dyn diff[, lag, differences](p4, p5, 1);
        return r59;
      };
      r61 = dyn diffinv_vector1(p1, p2, p3, p6);
      return r61;
    };
    p8 = prom<V +>{
      lag13 = ld lag;
      lag14 = force? lag13;
      checkMissing(lag14);
      return lag14;
    };
    p9 = prom<V +>{
      xi9 = ld xi;
      xi10 = force? xi9;
      checkMissing(xi10);
      c12 = `is.object`(xi10);
      if c12 then L1() else L2(xi10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", xi10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(xi12):
      lag15 = ld lag;
      lag16 = force? lag15;
      checkMissing(lag16);
      r64 = `:`(1, lag16);
      __ = ldf `[` in base;
      r65 = dyn __(xi12, r64);
      goto L0(r65);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r67 = dyn diffinv_vector(p7, p8, 1, p9);
    check L99() else D35();
  D19():
    deopt 74 [x3];
  D35():
    deopt 124 [r67];
  L19(r35):
    st xi = r35;
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L70():
    x4 = force? x3;
    checkMissing(x4);
    as_double = ldf `as.double` in base;
    r33 = dyn as_double(x4);
    check L71() else D20();
  L72():
    xi3 = ld xi;
    check L74() else D21();
  L73():
    r34 = dyn base7(<sym xi>);
    goto L19(r34);
  L99():
    popenv;
    return r67;
  D20():
    deopt 77 [r33];
  D21():
    deopt 81 [xi3];
  L20(r38):
    st n = r38;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L83() else L84();
  L71():
    goto L18(r33);
  L74():
    xi4 = force? xi3;
    checkMissing(xi4);
    as_double1 = ldf `as.double` in base;
    r36 = dyn as_double1(xi4);
    check L75() else D22();
  L76():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L78() else L79();
  L77():
    r37 = dyn base8(<lang length(x)>);
    goto L20(r37);
  D22():
    deopt 84 [r36];
  L21(r40):
    as_integer2 = ldf `as.integer` in base;
    r42 = dyn as_integer2(r40);
    check L82() else D25();
  L22(r44):
    c11 = `as.logical`(r44);
    if c11 then L87() else L23();
  L75():
    goto L19(r36);
  L78():
    x5 = ld x;
    check L80() else D23();
  L79():
    r39 = dyn base9(<sym x>);
    goto L21(r39);
  L83():
    n = ld n;
    check L85() else D26();
  L84():
    r43 = dyn base10(<sym n>);
    goto L22(r43);
  D23():
    deopt 90 [x5];
  D25():
    deopt 95 [r42];
  D26():
    deopt 99 [n];
  L23():
    goto L24();
  L24():
    sym11 = ldf `.Call`;
    base11 = ldf `.Call` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L91() else L92();
  L80():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r41 = dyn length1(x6);
    check L81() else D24();
  L82():
    goto L20(r42);
  L85():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r45 = dyn is_na(n1);
    check L86() else D27();
  L87():
    stop3 = ldf stop;
    check L88() else D28();
  D24():
    deopt 93 [r41];
  D27():
    deopt 102 [r45];
  D28():
    deopt 104 [];
  L25(r51):
    popenv;
    return r51;
  L81():
    goto L21(r41);
  L86():
    goto L22(r45);
  L88():
    p = prom<V +>{
      gettextf = ldf gettextf;
      r46 = dyn gettextf("invalid value of %s", "length(x)");
      return r46;
    };
    r48 = dyn stop3[, domain](p, NA_LGL);
    check L89() else D29();
  L91():
    C_intgrt_vec = ld C_intgrt_vec;
    check L93() else D30();
  L92():
    r50 = dyn base11(<sym C_intgrt_vec>, <sym x>, <sym xi>, <sym lag>);
    goto L25(r50);
  D29():
    deopt 108 [r48];
  D30():
    deopt 112 [C_intgrt_vec];
  L89():
    goto L24();
  L93():
    C_intgrt_vec1 = force? C_intgrt_vec;
    checkMissing(C_intgrt_vec1);
    x7 = ld x;
    check L94() else D31();
  D31():
    deopt 113 [C_intgrt_vec1, x7];
  L94():
    x8 = force? x7;
    checkMissing(x8);
    xi5 = ld xi;
    check L95() else D32();
  D32():
    deopt 114 [C_intgrt_vec1, x8, xi5];
  L95():
    xi6 = force? xi5;
    checkMissing(xi6);
    lag7 = ld lag;
    check L96() else D33();
  D33():
    deopt 115 [C_intgrt_vec1, x8, xi6, lag7];
  L96():
    lag8 = force? lag7;
    checkMissing(lag8);
    vargs = dots[x8, xi6, lag8];
    r52 = `.Call`(C_intgrt_vec1, vargs, <missing>);
    goto L25(r52);
  }
}