fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-886612436`;
    st rcond = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-886612436`(x, norm, triangular, uplo, `...`) {
  (reg x:*, reg norm:*, reg triangular:*, reg uplo:*, reg ddd:dots) -+> V { var x:*, var norm:*, reg norm_isMissing:L, reg norm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var triangular:*, reg triangular_isMissing:L, reg triangular_orDefault:*, var uplo:*, reg uplo_isMissing:L, reg uplo_orDefault:*, var `...`:dots?, reg match_arg:cls, reg norm1:*, reg norm2:V, reg p1:p(V +), reg r5:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg dim:cls, reg r10:V, reg length:cls, reg r11:V, reg r12:V, reg p2:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg d:*, reg d1:V, reg all:cls, reg r17:V, reg r18:V, reg c1:L, reg d2:*, reg d3:V, reg c2:L, reg d5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg d6:*, reg d7:V, reg c3:L, reg dx3:V, reg d9:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r22:V, reg r23:V, reg c4:L, reg rcond:cls, reg qr_R:cls, reg qr:cls, reg d10:*, reg d11:V, reg c5:L, reg d13:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r24:V, reg d14:*, reg d15:V, reg c6:L, reg dx11:V, reg d17:V, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg dx15:V, reg __3:cls, reg r25:V, reg r26:V, reg c7:L, reg t:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r28:V, reg x5:*, reg x6:V, reg p4:p(V +), reg r30:V, reg p5:p(V +), reg r32:V, reg p6:p(V +), reg norm3:*, reg norm4:V, reg p7:p(V +), reg ddd1:dots?, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg x7:*, reg x8:V, reg c8:L, reg c9:L, reg triangular1:*, reg triangular2:V, reg c10:L, reg uplo1:*, reg uplo2:V, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg i_ddd:dots, reg i:V, reg c16:L, reg c17:L, reg c18:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg x9:*, reg x10:V, reg norm5:*, reg norm6:V, reg La_ztrcon:cls, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg x11:*, reg x12:V, reg norm7:*, reg norm8:V, reg La_ztrcon3:cls, reg r45:V, reg stop:cls, reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg x13:*, reg x14:V, reg norm9:*, reg norm10:V, reg La_zgecon:cls, reg r49:V, reg triangular3:*, reg triangular4:V, reg c19:L, reg uplo3:*, reg uplo4:V, reg c20:L, reg c21:L, reg c22:L, reg c23:L, reg c24:L, reg i_ddd1:dots, reg i1:V, reg c25:L, reg c26:L, reg c27:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:V, reg x15:*, reg x16:V, reg norm11:*, reg norm12:V, reg La_dtrcon:cls, reg r52:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg x17:*, reg x18:V, reg norm13:*, reg norm14:V, reg La_dtrcon3:cls, reg r55:V, reg stop1:cls, reg r56:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg x19:*, reg x20:V, reg norm15:*, reg norm16:V, reg La_dgecon:cls, reg r59:V |
    mkenv;
    st x = x;
    norm_isMissing = missing.0(norm);
    if norm_isMissing then L0() else L1(norm);
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
      r2 = dyn c("O", "I", "1");
      goto L0(r2);
    L2():
      r = dyn base("O", "I", "1");
      goto L0(r);
    };
    goto L1(p);
  L1(norm_orDefault):
    st norm = norm_orDefault;
    triangular_isMissing = missing.0(triangular);
    if triangular_isMissing then L2(FALSE) else L2(triangular);
  L2(triangular_orDefault):
    st triangular = triangular_orDefault;
    uplo_isMissing = missing.0(uplo);
    if uplo_isMissing then L3("U") else L3(uplo);
  L3(uplo_orDefault):
    st uplo = uplo_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L29() else D0();
  D0():
    deopt 1 [];
  L29():
    p1 = prom<V +>{
      norm1 = ld norm;
      norm2 = force? norm1;
      checkMissing(norm2);
      return norm2;
    };
    r5 = dyn match_arg(p1);
    check L30() else D1();
  D1():
    deopt 3 [r5];
  L30():
    st norm = r5;
    stopifnot = ldf stopifnot;
    check L31() else D2();
  D2():
    deopt 6 [];
  L31():
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      r12 = `==`(r7, 2);
      return r12;
    L2():
      sym2 = ldf dim;
      base2 = ldf dim in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r6 = dyn base1(<lang `<-`(d, dim(x))>);
      goto L0(r6);
    L1(r9):
      st d = r9;
      length = ldf length in base;
      r11 = dyn length(r9);
      goto L0(r11);
    L4():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dim = ldf dim in base;
      r10 = dyn dim(x2);
      goto L1(r10);
    L5():
      r8 = dyn base2(<sym x>);
      goto L1(r8);
    };
    r14 = dyn stopifnot(p2);
    check L32() else D3();
  D3():
    deopt 8 [r14];
  L32():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L4(r16):
    r18 = `!`(r16);
    c1 = `as.logical`(r18);
    if c1 then L37() else L5();
  L33():
    d = ld d;
    check L35() else D4();
  L34():
    r15 = dyn base3(<sym d>);
    goto L4(r15);
  D4():
    deopt 11 [d];
  L5():
    d2 = ld d;
    check L40() else D6();
  L35():
    d1 = force? d;
    checkMissing(d1);
    all = ldf all in base;
    r17 = dyn all(d1);
    check L36() else D5();
  L37():
    popenv;
    return +Infinity;
  D5():
    deopt 14 [r17];
  D6():
    deopt 21 [d2];
  L36():
    goto L4(r17);
  L40():
    d3 = force? d2;
    checkMissing(d3);
    c2 = `is.object`(d3);
    if c2 then L41() else L42(d3);
  L7(dx1):
    d6 = ld d;
    check L44() else D7();
  L41():
    dr = tryDispatchBuiltin.1("[", d3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(d5):
    __ = ldf `[` in base;
    r21 = dyn __(d5, 1);
    goto L7(r21);
  D7():
    deopt 25 [dx1, d6];
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L44():
    d7 = force? d6;
    checkMissing(d7);
    c3 = `is.object`(d7);
    if c3 then L45() else L46(dx1, d7);
  L8(dx6, dx7):
    r23 = `!=`(dx6, dx7);
    c4 = `as.logical`(r23);
    if c4 then L48() else L9();
  L45():
    dr2 = tryDispatchBuiltin.1("[", d7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L47() else L46(dx1, dr2);
  L46(dx3, d9):
    __1 = ldf `[` in base;
    r22 = dyn __1(d9, 2);
    goto L8(dx3, r22);
  L9():
    sym4 = ldf `is.complex`;
    base4 = ldf `is.complex` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L47():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx1, dx5);
  L48():
    rcond = ldf rcond;
    check L49() else D8();
  D8():
    deopt 32 [];
  L11(r39):
    c9 = `as.logical`(r39);
    if c9 then L56() else L12();
  L49():
    p6 = prom<V +>{
      qr_R = ldf `qr.R`;
      p5 = prom<V +>{
        qr = ldf qr;
        p4 = prom<V +>{
          d10 = ld d;
          d11 = force? d10;
          checkMissing(d11);
          c5 = `is.object`(d11);
          if c5 then L3() else L4(d11);
        L0(dx9):
          d14 = ld d;
          d15 = force? d14;
          checkMissing(d15);
          c6 = `is.object`(d15);
          if c6 then L6() else L7(dx9, d15);
        L3():
          dr4 = tryDispatchBuiltin.1("[", d11);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L5() else L4(dr4);
        L4(d13):
          __2 = ldf `[` in base;
          r24 = dyn __2(d13, 1);
          goto L0(r24);
        L1(dx14, dx15):
          r26 = `<`(dx14, dx15);
          c7 = `as.logical`(r26);
          if c7 then L9() else L2();
        L5():
          dx8 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx8);
        L6():
          dr6 = tryDispatchBuiltin.1("[", d15);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L8() else L7(dx9, dr6);
        L7(dx11, d17):
          __3 = ldf `[` in base;
          r25 = dyn __3(d17, 2);
          goto L1(dx11, r25);
        L2():
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        L8():
          dx13 = getTryDispatchBuiltinValue(dr6);
          goto L1(dx9, dx13);
        L9():
          t = ldf t;
          p3 = prom<V +>{
            x3 = ld x;
            x4 = force? x3;
            checkMissing(x4);
            return x4;
          };
          r28 = dyn t(p3);
          return r28;
        };
        r30 = dyn qr(p4);
        return r30;
      };
      r32 = dyn qr_R(p5);
      return r32;
    };
    p7 = prom<V +>{
      norm3 = ld norm;
      norm4 = force? norm3;
      checkMissing(norm4);
      return norm4;
    };
    ddd1 = ld `...`;
    r35 = dyn rcond[, triangular, uplo, norm, `...`](p6, TRUE, "U", p7, ddd1);
    check L50() else D9();
  L53():
    x7 = ld x;
    check L55() else D10();
  L54():
    r38 = dyn base4(<sym x>);
    goto L11(r38);
  D9():
    deopt 41 [r35];
  D10():
    deopt 46 [x7];
  L12():
    triangular3 = ld triangular;
    check L93() else D24();
  L50():
    popenv;
    return r35;
  L55():
    x8 = force? x7;
    checkMissing(x8);
    c8 = `is.complex`(x8);
    goto L11(c8);
  L56():
    triangular1 = ld triangular;
    check L57() else D11();
  D11():
    deopt 49 [triangular1];
  D24():
    deopt 85 [triangular3];
  L57():
    triangular2 = force? triangular1;
    checkMissing(triangular2);
    c10 = `as.logical`(triangular2);
    if c10 then L58() else L13();
  L93():
    triangular4 = force? triangular3;
    checkMissing(triangular4);
    c19 = `as.logical`(triangular4);
    if c19 then L94() else L21();
  L13():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L21():
    sym10 = ldf `.Internal`;
    base10 = ldf `.Internal` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L123() else L124();
  L58():
    uplo1 = ld uplo;
    check L59() else D12();
  L94():
    uplo3 = ld uplo;
    check L95() else D25();
  D12():
    deopt 51 [uplo1];
  D25():
    deopt 87 [uplo3];
  L20(r48):
    popenv;
    return r48;
  L28(r58):
    popenv;
    return r58;
  L59():
    uplo2 = force? uplo1;
    checkMissing(uplo2);
    c11 = `is.vector`(uplo2, "any");
    if c11 then L60() else L61();
  L87():
    x13 = ld x;
    check L89() else D21();
  L88():
    r47 = dyn base7(<lang La_zgecon(x, norm)>);
    goto L20(r47);
  L95():
    uplo4 = force? uplo3;
    checkMissing(uplo4);
    c20 = `is.vector`(uplo4, "any");
    if c20 then L96() else L97();
  L123():
    x19 = ld x;
    check L125() else D34();
  L124():
    r57 = dyn base10(<lang La_dgecon(x, norm)>);
    goto L28(r57);
  D21():
    deopt 79 [x13];
  D34():
    deopt 115 [x19];
  L60():
    c12 = inherits(uplo2, "factor", FALSE);
    if c12 then L62() else L63();
  L61():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L89():
    x14 = force? x13;
    checkMissing(x14);
    norm9 = ld norm;
    check L90() else D22();
  L96():
    c21 = inherits(uplo4, "factor", FALSE);
    if c21 then L98() else L99();
  L97():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L125():
    x20 = force? x19;
    checkMissing(x20);
    norm15 = ld norm;
    check L126() else D35();
  D22():
    deopt 81 [norm9];
  D35():
    deopt 117 [norm15];
  L62():
    c13 = `is.character`(uplo2);
    if c13 then L64() else L65();
  L63():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L62();
  L90():
    norm10 = force? norm9;
    checkMissing(norm10);
    La_zgecon = ldf La_zgecon in base;
    r49 = dyn La_zgecon(x14, norm10);
    check L91() else D23();
  L98():
    c22 = `is.character`(uplo4);
    if c22 then L100() else L101();
  L99():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L98();
  L126():
    norm16 = force? norm15;
    checkMissing(norm16);
    La_dgecon = ldf La_dgecon in base;
    r59 = dyn La_dgecon(x20, norm16);
    check L127() else D36();
  D23():
    deopt 84 [r49];
  D36():
    deopt 120 [r59];
  L14():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L15():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L16():
    stop = ldf stop;
    check L84() else D19();
  L22():
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L108() else L109();
  L23():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L114() else L115();
  L24():
    stop1 = ldf stop;
    check L120() else D32();
  L64():
    c14 = `==`.6(uplo2, "U");
    if c14 then L14() else L66();
  L65():
    i_ddd = dots[uplo2];
    i = `as.integer`(i_ddd);
    c16 = `==`.5(i, 1);
    if c16 then L14() else L68();
  L91():
    goto L20(r49);
  L100():
    c23 = `==`.6(uplo4, "U");
    if c23 then L22() else L102();
  L101():
    i_ddd1 = dots[uplo4];
    i1 = `as.integer`(i_ddd1);
    c25 = `==`.5(i1, 1);
    if c25 then L22() else L104();
  L127():
    goto L28(r59);
  D19():
    deopt 74 [];
  D32():
    deopt 110 [];
  L18(r41):
    popenv;
    return r41;
  L19(r44):
    popenv;
    return r44;
  L26(r51):
    popenv;
    return r51;
  L27(r54):
    popenv;
    return r54;
  L66():
    c15 = `==`.6(uplo2, "L");
    if c15 then L15() else L67();
  L68():
    c17 = `==`.5(i, 2);
    if c17 then L15() else L69();
  L72():
    x9 = ld x;
    check L74() else D13();
  L73():
    r40 = dyn base5(<lang La_ztrcon(x, norm)>);
    goto L18(r40);
  L78():
    x11 = ld x;
    check L80() else D16();
  L79():
    r43 = dyn base6(<lang La_ztrcon3(x, norm, "L")>);
    goto L19(r43);
  L84():
    r46 = dyn stop("'uplo' must be \"U\" or \"L\"");
    check L85() else D20();
  L102():
    c24 = `==`.6(uplo4, "L");
    if c24 then L23() else L103();
  L104():
    c26 = `==`.5(i1, 2);
    if c26 then L23() else L105();
  L108():
    x15 = ld x;
    check L110() else D26();
  L109():
    r50 = dyn base8(<lang La_dtrcon(x, norm)>);
    goto L26(r50);
  L114():
    x17 = ld x;
    check L116() else D29();
  L115():
    r53 = dyn base9(<lang La_dtrcon3(x, norm, "L")>);
    goto L27(r53);
  L120():
    r56 = dyn stop1("'uplo' must be \"U\" or \"L\"");
    check L121() else D33();
  D13():
    deopt 58 [x9];
  D16():
    deopt 66 [x11];
  D20():
    deopt 76 [r46];
  D26():
    deopt 94 [x15];
  D29():
    deopt 102 [x17];
  D33():
    deopt 112 [r56];
  L67():
    goto L16();
  L69():
    c18 = `==`.5(i, 3);
    if c18 then L16() else L70();
  L74():
    x10 = force? x9;
    checkMissing(x10);
    norm5 = ld norm;
    check L75() else D14();
  L80():
    x12 = force? x11;
    checkMissing(x12);
    norm7 = ld norm;
    check L81() else D17();
  L85():
    popenv;
    return r46;
  L103():
    goto L24();
  L105():
    c27 = `==`.5(i1, 3);
    if c27 then L24() else L106();
  L110():
    x16 = force? x15;
    checkMissing(x16);
    norm11 = ld norm;
    check L111() else D27();
  L116():
    x18 = force? x17;
    checkMissing(x18);
    norm13 = ld norm;
    check L117() else D30();
  L121():
    popenv;
    return r56;
  D14():
    deopt 60 [norm5];
  D17():
    deopt 68 [norm7];
  D27():
    deopt 96 [norm11];
  D30():
    deopt 104 [norm13];
  L70():
    invisible.0();
    popenv;
    return NULL;
  L75():
    norm6 = force? norm5;
    checkMissing(norm6);
    La_ztrcon = ldf La_ztrcon in base;
    r42 = dyn La_ztrcon(x10, norm6);
    check L76() else D15();
  L81():
    norm8 = force? norm7;
    checkMissing(norm8);
    La_ztrcon3 = ldf La_ztrcon3 in base;
    r45 = dyn La_ztrcon3(x12, norm8, "L");
    check L82() else D18();
  L106():
    invisible.0();
    popenv;
    return NULL;
  L111():
    norm12 = force? norm11;
    checkMissing(norm12);
    La_dtrcon = ldf La_dtrcon in base;
    r52 = dyn La_dtrcon(x16, norm12);
    check L112() else D28();
  L117():
    norm14 = force? norm13;
    checkMissing(norm14);
    La_dtrcon3 = ldf La_dtrcon3 in base;
    r55 = dyn La_dtrcon3(x18, norm14, "L");
    check L118() else D31();
  D15():
    deopt 63 [r42];
  D18():
    deopt 72 [r45];
  D28():
    deopt 99 [r52];
  D31():
    deopt 108 [r55];
  L76():
    goto L18(r42);
  L82():
    goto L19(r45);
  L112():
    goto L26(r52);
  L118():
    goto L27(r55);
  }
}