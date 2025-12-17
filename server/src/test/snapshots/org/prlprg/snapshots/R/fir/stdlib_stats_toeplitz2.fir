fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1698715540;
    st toeplitz2 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1698715540(x, nrow, ncol) {
  (reg x:*, reg nrow:*, reg ncol:*) -+> V { var x:*, var nrow:*, reg nrow_isMissing:L, reg nrow_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg ncol1:*, reg ncol2:V, reg r4:V, reg p:p(V +), var ncol:*, reg ncol_isMissing:L, reg ncol_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg length1:cls, reg r8:V, reg r9:V, reg nrow1:*, reg nrow2:V, reg r10:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg is_vector:cls, reg r14:V, reg r15:V, reg c:L, reg stop:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg missing:cls, reg r20:V, reg r21:V, reg c1:L, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg nrow3:*, reg nrow4:V, reg length2:cls, reg r24:V, reg r25:V, reg p2:p(V +), reg nrow5:*, reg nrow6:V, reg r27:V, reg p3:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg missing1:cls, reg r33:V, reg r34:V, reg c2:L, reg stopifnot1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg ncol3:*, reg ncol4:V, reg length3:cls, reg r37:V, reg r38:V, reg p4:p(V +), reg ncol5:*, reg ncol6:V, reg r40:V, reg p5:p(V +), reg r42:V, reg stopifnot2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg x7:*, reg x8:V, reg length4:cls, reg r46:V, reg nrow7:*, reg nrow8:V, reg ncol7:*, reg ncol8:V, reg r47:V, reg r48:V, reg r49:V, reg p6:p(V +), reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg nrow9:*, reg nrow10:V, reg ncol9:*, reg ncol10:V, reg c3:cls, reg r54:V, reg array:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ncol11:*, reg ncol12:V, reg _col:cls, reg d:*, reg d1:V, reg p7:p(V +), reg r56:V, reg r57:V, reg _row:cls, reg d2:*, reg d3:V, reg p8:p(V +), reg r59:V, reg r60:V, reg __:cls, reg r61:V, reg p9:p(V +), reg d4:*, reg d5:V, reg p10:p(V +), reg r64:V |
    mkenv;
    st x = x;
    nrow_isMissing = missing.0(nrow);
    if nrow_isMissing then L0() else L1(nrow);
  L0():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `+`(r1, 1);
      ncol1 = ld ncol;
      ncol2 = force? ncol1;
      checkMissing(ncol2);
      r4 = `-`(r3, ncol2);
      return r4;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r2 = dyn length(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(nrow_orDefault):
    st nrow = nrow_orDefault;
    ncol_isMissing = missing.0(ncol);
    if ncol_isMissing then L2() else L3(ncol);
  L2():
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      r9 = `+`(r7, 1);
      nrow1 = ld nrow;
      nrow2 = force? nrow1;
      checkMissing(nrow2);
      r10 = `-`(r9, nrow2);
      return r10;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      length1 = ldf length in base;
      r8 = dyn length1(x4);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym x>);
      goto L0(r6);
    };
    goto L3(p1);
  L3(ncol_orDefault):
    st ncol = ncol_orDefault;
    sym2 = ldf `is.vector`;
    base2 = ldf `is.vector` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L4(r13):
    r15 = `!`(r13);
    c = `as.logical`(r15);
    if c then L18() else L5();
  L14():
    x5 = ld x;
    check L16() else D0();
  L15():
    r12 = dyn base2(<sym x>);
    goto L4(r12);
  D0():
    deopt 2 [x5];
  L5():
    goto L6();
  L6():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L16():
    x6 = force? x5;
    checkMissing(x6);
    is_vector = ldf `is.vector` in base;
    r14 = dyn is_vector(x6, "any");
    check L17() else D1();
  L18():
    stop = ldf stop;
    check L19() else D2();
  D1():
    deopt 6 [r14];
  D2():
    deopt 9 [];
  L7(r19):
    r21 = `!`(r19);
    c1 = `as.logical`(r21);
    if c1 then L24() else L8();
  L17():
    goto L4(r14);
  L19():
    r16 = dyn stop("'x' is not a vector");
    check L20() else D3();
  L22():
    missing = ldf missing in base;
    r20 = dyn missing(<sym nrow>);
    goto L7(r20);
  L23():
    r18 = dyn base3(<sym nrow>);
    goto L7(r18);
  D3():
    deopt 11 [r16];
  L8():
    goto L9();
  L9():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  L20():
    goto L6();
  L24():
    stopifnot = ldf stopifnot;
    check L25() else D4();
  D4():
    deopt 19 [];
  L10(r32):
    r34 = `!`(r32);
    c2 = `as.logical`(r34);
    if c2 then L30() else L11();
  L25():
    p2 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r23):
      r25 = `==`(r23, 1);
      return r25;
    L1():
      nrow3 = ld nrow;
      nrow4 = force? nrow3;
      checkMissing(nrow4);
      length2 = ldf length in base;
      r24 = dyn length2(nrow4);
      goto L0(r24);
    L2():
      r22 = dyn base4(<sym nrow>);
      goto L0(r22);
    };
    p3 = prom<V +>{
      nrow5 = ld nrow;
      nrow6 = force? nrow5;
      checkMissing(nrow6);
      r27 = `>=`(nrow6, 0.0);
      return r27;
    };
    r29 = dyn stopifnot(p2, p3);
    check L26() else D5();
  L28():
    missing1 = ldf missing in base;
    r33 = dyn missing1(<sym ncol>);
    goto L10(r33);
  L29():
    r31 = dyn base5(<sym ncol>);
    goto L10(r31);
  D5():
    deopt 22 [r29];
  L11():
    goto L12();
  L12():
    stopifnot2 = ldf stopifnot;
    check L34() else D8();
  L26():
    goto L9();
  L30():
    stopifnot1 = ldf stopifnot;
    check L31() else D6();
  D6():
    deopt 30 [];
  D8():
    deopt 37 [];
  L31():
    p4 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r36):
      r38 = `==`(r36, 1);
      return r38;
    L1():
      ncol3 = ld ncol;
      ncol4 = force? ncol3;
      checkMissing(ncol4);
      length3 = ldf length in base;
      r37 = dyn length3(ncol4);
      goto L0(r37);
    L2():
      r35 = dyn base6(<sym ncol>);
      goto L0(r35);
    };
    p5 = prom<V +>{
      ncol5 = ld ncol;
      ncol6 = force? ncol5;
      checkMissing(ncol6);
      r40 = `>=`(ncol6, 0.0);
      return r40;
    };
    r42 = dyn stopifnot1(p4, p5);
    check L32() else D7();
  L34():
    p6 = prom<V +>{
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r45):
      nrow7 = ld nrow;
      nrow8 = force? nrow7;
      checkMissing(nrow8);
      ncol7 = ld ncol;
      ncol8 = force? ncol7;
      checkMissing(ncol8);
      r47 = `+`(nrow8, ncol8);
      r48 = `-`(r47, 1);
      r49 = `>=`(r45, r48);
      return r49;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      length4 = ldf length in base;
      r46 = dyn length4(x8);
      goto L0(r46);
    L2():
      r44 = dyn base7(<sym x>);
      goto L0(r44);
    };
    r51 = dyn stopifnot2(p6);
    check L35() else D9();
  D7():
    deopt 33 [r42];
  D9():
    deopt 39 [r51];
  L32():
    goto L12();
  L35():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L36() else L37();
  L13(r53):
    st d = r53;
    array = ldf array;
    check L41() else D13();
  L36():
    nrow9 = ld nrow;
    check L38() else D10();
  L37():
    r52 = dyn base8(<sym nrow>, <sym ncol>);
    goto L13(r52);
  D10():
    deopt 42 [nrow9];
  D13():
    deopt 50 [];
  L38():
    nrow10 = force? nrow9;
    checkMissing(nrow10);
    ncol9 = ld ncol;
    check L39() else D11();
  L41():
    p9 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c4 = `is.object`(x10);
      if c4 then L1() else L2(x10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x12):
      ncol11 = ld ncol;
      ncol12 = force? ncol11;
      checkMissing(ncol12);
      _col = ldf `.col`;
      p7 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        return d1;
      };
      r56 = dyn _col(p7);
      r57 = `-`(ncol12, r56);
      _row = ldf `.row`;
      p8 = prom<V +>{
        d2 = ld d;
        d3 = force? d2;
        checkMissing(d3);
        return d3;
      };
      r59 = dyn _row(p8);
      r60 = `+`(r57, r59);
      __ = ldf `[` in base;
      r61 = dyn __(x12, r60);
      goto L0(r61);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p10 = prom<V +>{
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      return d5;
    };
    r64 = dyn array(p9, p10);
    check L42() else D14();
  D11():
    deopt 44 [ncol9];
  D14():
    deopt 53 [r64];
  L39():
    ncol10 = force? ncol9;
    checkMissing(ncol10);
    c3 = ldf c in base;
    r54 = dyn c3(nrow10, ncol10);
    check L40() else D12();
  L42():
    popenv;
    return r64;
  D12():
    deopt 47 [r54];
  L40():
    goto L13(r54);
  }
}