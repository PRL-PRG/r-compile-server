fun main() {
  () -+> V { reg r:cls, reg cbind:cls, reg p:p(V +), reg r2:V, reg norm:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r4:V, reg norm1:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r6:V, reg norm2:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r8:V, reg stopifnot:cls, reg all_equal:cls, reg norm3:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg r16:V, reg sum:cls, reg r17:V, reg r18:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V, reg r23:cls, reg hilbert:cls, reg r24:V, reg eval:cls, reg formals:cls, reg __:cls, reg r25:V, reg p8:p(V +), reg r27:V, reg c:L, reg r29:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r30:V, reg p9:p(V +), reg r32:V, reg sapply:cls, reg nTyp:*, reg nTyp1:V, reg p10:p(V +), reg norm4:*, reg norm5:V, reg p11:p(V +), reg h9:*, reg h10:V, reg p12:p(V +), reg r36:V, reg stopifnot1:cls, reg sapply1:cls, reg nTyp2:*, reg nTyp3:V, reg p13:p(V +), reg norm6:*, reg norm7:V, reg p14:p(V +), reg matrix:cls, reg r39:V, reg p15:p(V +), reg r41:V, reg sapply2:cls, reg nTyp4:*, reg nTyp5:V, reg p16:p(V +), reg norm8:*, reg norm9:V, reg p17:p(V +), reg matrix1:cls, reg r45:V, reg p18:p(V +), reg r47:V, reg r48:V, reg p19:p(V +), reg r50:V |
    mkenv;
    r = clos inner389378610;
    st norm = r;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r2 = dyn cbind(1.0, p);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    st x1 = r2;
    norm = ldf norm;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      x1 = ld x1;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn norm(p1);
    check L3() else D3();
  D3():
    deopt 12 [r4];
  L3():
    norm1 = ldf norm;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      x3 = ld x1;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r6 = dyn norm1(p2, "I");
    check L5() else D5();
  D5():
    deopt 17 [r6];
  L5():
    norm2 = ldf norm;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p3 = prom<V +>{
      x5 = ld x1;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r8 = dyn norm2(p3, "M");
    check L7() else D7();
  D7():
    deopt 22 [r8];
  L7():
    stopifnot = ldf stopifnot;
    check L8() else D8();
  D8():
    deopt 24 [];
  L8():
    p7 = prom<V +>{
      all_equal = ldf `all.equal`;
      p5 = prom<V +>{
        norm3 = ldf norm;
        p4 = prom<V +>{
          x7 = ld x1;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r10 = dyn norm3(p4, "F");
        return r10;
      };
      p6 = prom<V +>{
        sym = ldf sqrt;
        base = ldf sqrt in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r13):
        return r13;
      L2():
        sym1 = ldf sum;
        base1 = ldf sum in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L4() else L5();
      L3():
        r12 = dyn base(<lang sum(`^`(x1, 2.0))>);
        goto L0(r12);
      L1(r15):
        r18 = sqrt(r15);
        goto L0(r18);
      L4():
        x9 = ld x1;
        x10 = force? x9;
        checkMissing(x10);
        r16 = `^`(x10, 2.0);
        sum = ldf sum in base;
        r17 = dyn sum(r16);
        goto L1(r17);
      L5():
        r14 = dyn base1(<lang `^`(x1, 2.0)>);
        goto L1(r14);
      };
      r20 = dyn all_equal(p5, p6);
      return r20;
    };
    r22 = dyn stopifnot(p7);
    check L9() else D9();
  D9():
    deopt 26 [r22];
  L9():
    r23 = clos inner4266987626;
    st hilbert = r23;
    hilbert = ldf hilbert;
    check L10() else D10();
  D10():
    deopt 31 [];
  L10():
    r24 = dyn hilbert(9.0);
    check L11() else D11();
  D11():
    deopt 33 [r24];
  L11():
    st h9 = r24;
    eval = ldf eval;
    check L12() else D12();
  D12():
    deopt 36 [];
  L12():
    p9 = prom<V +>{
      formals = ldf formals;
      p8 = prom<V +>{
        __ = ldf `::`;
        r25 = dyn __("base", "norm");
        return r25;
      };
      r27 = dyn formals(p8);
      c = `is.object`(r27);
      if c then L1() else L2(r27);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r27);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r29):
      r30 = `$`(r29, <sym type>);
      goto L0(r30);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r32 = dyn eval(p9);
    check L13() else D13();
  D13():
    deopt 38 [r32];
  L13():
    st nTyp = r32;
    sapply = ldf sapply;
    check L14() else D14();
  D14():
    deopt 41 [];
  L14():
    p10 = prom<V +>{
      nTyp = ld nTyp;
      nTyp1 = force? nTyp;
      checkMissing(nTyp1);
      return nTyp1;
    };
    p11 = prom<V +>{
      norm4 = ld norm;
      norm5 = force? norm4;
      checkMissing(norm5);
      return norm5;
    };
    p12 = prom<V +>{
      h9 = ld h9;
      h10 = force? h9;
      checkMissing(h10);
      return h10;
    };
    r36 = dyn sapply[, , x](p10, p11, p12);
    check L15() else D15();
  D15():
    deopt 46 [r36];
  L15():
    stopifnot1 = ldf stopifnot;
    check L16() else D16();
  D16():
    deopt 48 [];
  L16():
    p19 = prom<V +>{
      sapply1 = ldf sapply;
      p13 = prom<V +>{
        nTyp2 = ld nTyp;
        nTyp3 = force? nTyp2;
        checkMissing(nTyp3);
        return nTyp3;
      };
      p14 = prom<V +>{
        norm6 = ld norm;
        norm7 = force? norm6;
        checkMissing(norm7);
        return norm7;
      };
      p15 = prom<V +>{
        matrix = ldf matrix;
        r39 = dyn matrix(<missing>, 1.0, 0.0);
        return r39;
      };
      r41 = dyn sapply1[, , x](p13, p14, p15);
      `==`(r41, 0.0);
      sapply2 = ldf sapply;
      p16 = prom<V +>{
        nTyp4 = ld nTyp;
        nTyp5 = force? nTyp4;
        checkMissing(nTyp5);
        return nTyp5;
      };
      p17 = prom<V +>{
        norm8 = ld norm;
        norm9 = force? norm8;
        checkMissing(norm9);
        return norm9;
      };
      p18 = prom<V +>{
        matrix1 = ldf matrix;
        r45 = dyn matrix1(<missing>, 0.0, 0.0);
        return r45;
      };
      r47 = dyn sapply2[, , x](p16, p17, p18);
      r48 = `==`(r47, 0.0);
      return r48;
    };
    r50 = dyn stopifnot1[exprs](p19);
    check L17() else D17();
  D17():
    deopt 51 [r50];
  L17():
    popenv;
    return r50;
  }
}
fun inner389378610(x, type) {
  (reg x:*, reg type:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg type1:*, reg type2:V, reg identical:cls, reg r6:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg length:cls, reg r9:V, reg r10:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r13:V, reg c3:L, reg svd:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r15:V, reg c4:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg c5:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg is_numeric:cls, reg r22:V, reg c6:L, reg c7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg c11:L, reg r24:V, reg x9:*, reg x10:V, reg c12:L, reg c13:L, reg c14:V, reg c16:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg x11:*, reg x12:V, reg type3:*, reg type4:V, reg La_dlange:cls, reg r27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg x13:*, reg x14:V, reg c17:L, reg c18:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg x15:*, reg x16:V, reg type5:*, reg type6:V, reg La_zlange:cls, reg r32:V, reg stop:cls, reg gettextf:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg x17:*, reg x18:V, reg typeof:cls, reg r35:V, reg p2:p(V +), reg r37:V, reg p3:p(V +), reg r39:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("O", "I", "F", "M", "2");
      goto L0(r2);
    L2():
      r = dyn base("O", "I", "F", "M", "2");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L21() else L3();
  L17():
    type1 = ld type;
    check L19() else D0();
  L18():
    r4 = dyn base1("2", <sym type>);
    goto L2(r4);
  D0():
    deopt 3 [type1];
  L3():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L19():
    type2 = force? type1;
    checkMissing(type2);
    identical = ldf identical in base;
    r6 = dyn identical("2", type2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L20() else D1();
  L21():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  D1():
    deopt 13 [r6];
  L4(r8):
    r10 = `!`(r8);
    c2 = `as.logical`(r10);
    if c2 then L26() else L5();
  L9(r21):
    c6 = `as.logical`(r21);
    if c6 then L10(c6) else L48();
  L20():
    goto L2(r6);
  L22():
    x1 = ld x;
    check L24() else D2();
  L23():
    r7 = dyn base2(<sym x>);
    goto L4(r7);
  L44():
    x7 = ld x;
    check L46() else D8();
  L45():
    r20 = dyn base4(<sym x>);
    goto L9(r20);
  D2():
    deopt 16 [x1];
  D8():
    deopt 45 [x7];
  L5():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L10(c7):
    c16 = `as.logical`(c7);
    if c16 then L53() else L12();
  L24():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r9 = dyn length(x2);
    check L25() else D3();
  L26():
    popenv;
    return 0.0;
  L46():
    x8 = force? x7;
    checkMissing(x8);
    is_numeric = ldf `is.numeric` in base;
    r22 = dyn is_numeric(x8);
    check L47() else D9();
  L48():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  D3():
    deopt 19 [r9];
  D9():
    deopt 48 [r22];
  L6(r12):
    c3 = `as.logical`(r12);
    if c3 then L32() else L7();
  L11(c11, r24):
    c13 = `as.logical`(r24);
    c14 = `||`(c11, c13);
    goto L10(c14);
  L12():
    sym7 = ldf `is.complex`;
    base7 = ldf `is.complex` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L60() else L61();
  L25():
    goto L4(r9);
  L28():
    x3 = ld x;
    check L30() else D4();
  L29():
    r11 = dyn base3(<sym x>);
    goto L6(r11);
  L47():
    goto L9(r22);
  L49():
    x9 = ld x;
    check L51() else D10();
  L50():
    r23 = dyn base5(<sym x>);
    goto L11(c6, r23);
  L53():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  D4():
    deopt 25 [x3];
  D10():
    deopt 50 [c6, x9];
  L7():
    svd = ldf svd;
    check L34() else D6();
  L13(r26):
    popenv;
    return r26;
  L14(r29):
    c18 = `as.logical`(r29);
    if c18 then L63() else L15();
  L30():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r13 = dyn anyNA(x4);
    check L31() else D5();
  L32():
    popenv;
    return NA_REAL;
  L51():
    x10 = force? x9;
    checkMissing(x10);
    c12 = `is.logical`(x10);
    goto L11(c6, c12);
  L54():
    x11 = ld x;
    check L56() else D11();
  L55():
    r25 = dyn base6(<lang La_dlange(x, type)>);
    goto L13(r25);
  L60():
    x13 = ld x;
    check L62() else D14();
  L61():
    r28 = dyn base7(<sym x>);
    goto L14(r28);
  D5():
    deopt 28 [r13];
  D6():
    deopt 32 [];
  D11():
    deopt 56 [x11];
  D14():
    deopt 63 [x13];
  L15():
    stop = ldf stop;
    check L70() else D18();
  L31():
    goto L6(r13);
  L34():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r15 = dyn svd[, nu, nv](p1, 0, 0);
    check L35() else D7();
  L56():
    x12 = force? x11;
    checkMissing(x12);
    type3 = ld type;
    check L57() else D12();
  L62():
    x14 = force? x13;
    checkMissing(x14);
    c17 = `is.complex`(x14);
    goto L14(c17);
  L63():
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L64() else L65();
  D7():
    deopt 38 [r15];
  D12():
    deopt 58 [type3];
  D18():
    deopt 75 [];
  L16(r31):
    popenv;
    return r31;
  L35():
    c4 = `is.object`(r15);
    if c4 then L37() else L38(r15);
  L57():
    type4 = force? type3;
    checkMissing(type4);
    La_dlange = ldf La_dlange in base;
    r27 = dyn La_dlange(x12, type4);
    check L58() else D13();
  L64():
    x15 = ld x;
    check L66() else D15();
  L65():
    r30 = dyn base8(<lang La_zlange(x, type)>);
    goto L16(r30);
  L70():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sym9 = ldf typeof;
        base9 = ldf typeof in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r34):
        return r34;
      L1():
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        typeof = ldf typeof in base;
        r35 = dyn typeof(x18);
        goto L0(r35);
      L2():
        r33 = dyn base9(<sym x>);
        goto L0(r33);
      };
      r37 = dyn gettextf("invalid '%s': type \"%s\"", "x", p2);
      return r37;
    };
    r39 = dyn stop[, domain](p3, NA_LGL);
    check L71() else D19();
  D13():
    deopt 61 [r27];
  D15():
    deopt 68 [x15];
  D19():
    deopt 79 [r39];
  L36(dx1):
    c5 = `is.object`(dx1);
    if c5 then L40() else L41(dx1);
  L37():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(r17):
    r18 = `$`(r17, <sym d>);
    goto L36(r18);
  L58():
    goto L13(r27);
  L66():
    x16 = force? x15;
    checkMissing(x16);
    type5 = ld type;
    check L67() else D16();
  L71():
    popenv;
    return r39;
  D16():
    deopt 70 [type5];
  L8(dx5):
    popenv;
    return dx5;
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(dx);
  L40():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(dx3):
    __ = ldf `[` in base;
    r19 = dyn __(dx3, 1);
    goto L8(r19);
  L67():
    type6 = force? type5;
    checkMissing(type6);
    La_zlange = ldf La_zlange in base;
    r32 = dyn La_zlange(x16, type6);
    check L68() else D17();
  D17():
    deopt 73 [r32];
  L42():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx4);
  L68():
    goto L16(r32);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg outer:cls, reg i:*, reg i1:V, reg r1:V, reg p:p(V +), reg i2:*, reg i3:V, reg p1:p(V +), reg __:*, reg __1:V, reg p2:p(V +), reg r5:V, reg r6:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L0() else D0();
  D0():
    deopt 1 [1.0, n1];
  L0():
    n2 = force? n1;
    checkMissing(n2);
    r = `:`(1.0, n2);
    st i = r;
    outer = ldf outer;
    check L1() else D1();
  D1():
    deopt 7 [1.0];
  L1():
    p = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      r1 = `-`(i1, 1.0);
      return r1;
    };
    p1 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    p2 = prom<V +>{
      __ = ld `+`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r5 = dyn outer(p, p1, p2);
    check L2() else D2();
  D2():
    deopt 11 [1.0, r5];
  L2():
    r6 = `/`(1.0, r5);
    popenv;
    return r6;
  }
}