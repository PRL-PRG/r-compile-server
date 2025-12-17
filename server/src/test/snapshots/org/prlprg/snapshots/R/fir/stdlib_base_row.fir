fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg r1:V, reg p:p(V +), reg r3:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg row:cls, reg x4:*, reg x5:V, reg p1:p(V +), reg r5:V, reg col:cls, reg x6:*, reg x7:V, reg p2:p(V +), reg r7:V, reg r8:V, reg __:cls, reg r9:V, reg dx2:*, reg dx3:V, reg matrix1:cls, reg r10:V, reg l:*, reg c1:L, reg r12:R, reg l2:*, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg row1:cls, reg x8:*, reg x9:V, reg p3:p(V +), reg r16:V, reg col1:cls, reg x10:*, reg x11:V, reg p4:p(V +), reg r18:V, reg r19:V, reg ___:cls, reg r20:V, reg x12:*, reg x13:V, reg _row:cls, reg p5:p(V +), reg r22:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg i34:*, reg i35:V, reg _row1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg c2:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg identical:cls, reg r30:V, reg p7:p(V +), reg r32:V |
    mkenv;
    r = clos inner2523631525;
    st row = r;
    matrix = ldf matrix;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      r1 = `:`(1.0, 12.0);
      return r1;
    };
    r3 = dyn matrix(p, 3.0, 4.0);
    check L3() else D1();
  D1():
    deopt 8 [r3];
  L3():
    st x = r3;
    x = ld x;
    check L4() else D2();
  D2():
    deopt 10 [x];
  L4():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L5() else L6(x1);
  L0(dx1):
    st dx = dx1;
    dx2 = ld dx;
    check L12() else D7();
  L5():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(x3):
    row = ldf row;
    check L8() else D3();
  D3():
    deopt 13 [x3];
  D7():
    deopt 22 [dx2];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    p1 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r5 = dyn row(p1);
    check L9() else D4();
  L12():
    dx3 = force? dx2;
    checkMissing(dx3);
    matrix1 = ldf matrix;
    check L13() else D8();
  D4():
    deopt 15 [x3, r5];
  D8():
    deopt 25 [];
  L9():
    col = ldf col;
    check L10() else D5();
  L13():
    r10 = dyn matrix1[, nrow, ncol](0.0, 5.0, 5.0);
    check L14() else D9();
  D5():
    deopt 16 [x3, r5];
  D9():
    deopt 31 [r10];
  L10():
    p2 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r7 = dyn col(p2);
    check L11() else D6();
  L14():
    st x = r10;
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L15() else L16(1.0, l);
  D6():
    deopt 18 [x3, r5, r7];
  L1(dx5):
    st x = dx5;
    x12 = ld x;
    check L22() else D14();
  L11():
    r8 = `==`(r5, r7);
    __ = ldf `[` in base;
    r9 = dyn __(x3, r8);
    goto L0(r9);
  L15():
    dr2 = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(1.0, dr2);
  L16(r12, l2):
    row1 = ldf row;
    check L18() else D10();
  D10():
    deopt 37 [r12, l2, 1.0];
  D14():
    deopt 46 [x12];
  L17():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  L18():
    p3 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r16 = dyn row1(p3);
    check L19() else D11();
  L22():
    x13 = force? x12;
    checkMissing(x13);
    _row = ldf `.row`;
    check L23() else D15();
  D11():
    deopt 39 [r12, l2, 1.0, r16];
  D15():
    deopt 49 [];
  L19():
    col1 = ldf col;
    check L20() else D12();
  L23():
    p5 = prom<V +>{
      return <int 3, 4>;
    };
    r22 = dyn _row(p5);
    check L24() else D16();
  D12():
    deopt 40 [r12, l2, 1.0, r16];
  D16():
    deopt 51 [r22];
  L20():
    p4 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r18 = dyn col1(p4);
    check L21() else D13();
  L24():
    st i34 = r22;
    stopifnot = ldf stopifnot;
    check L25() else D17();
  D13():
    deopt 42 [r12, l2, 1.0, r16, r18];
  D17():
    deopt 54 [];
  L21():
    r19 = `==`(r16, r18);
    ___ = ldf `[<-` in base;
    r20 = dyn ___(l2, 1.0, r19);
    goto L1(r20);
  L25():
    p7 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r24):
      return r24;
    L1():
      i34 = ld i34;
      i35 = force? i34;
      checkMissing(i35);
      _row1 = ldf `.row`;
      p6 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        c2 = ldf c in base;
        r27 = dyn c2(3.0, 4.0);
        goto L0(r27);
      L2():
        r25 = dyn base1(3.0, 4.0);
        goto L0(r25);
      };
      r29 = dyn _row1(p6);
      identical = ldf identical in base;
      r30 = dyn identical(i35, r29, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r30);
    L2():
      r23 = dyn base(<sym i34>, <lang .row(c(3.0, 4.0))>);
      goto L0(r23);
    };
    r32 = dyn stopifnot(p7);
    check L26() else D18();
  D18():
    deopt 56 [r32];
  L26():
    popenv;
    return r32;
  }
}
fun inner2523631525(x, `as.factor`) {
  (reg x:*, reg as_factor:*) -+> V { var x:*, var `as.factor`:*, reg as_factor_isMissing:L, reg as_factor_orDefault:*, reg as_factor1:*, reg as_factor2:V, reg c:L, reg rownames:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg factor:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg dim:cls, reg r6:V, reg row:cls, reg r7:V, reg p1:p(V +), reg labs:*, reg labs1:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg dim1:cls, reg r13:V, reg l:*, reg dim__:cls, reg r14:V, reg res:*, reg res1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg x7:*, reg x8:V, reg dim2:cls, reg r19:V, reg row1:cls, reg r20:V |
    mkenv;
    st x = x;
    as_factor_isMissing = missing.0(as_factor);
    if as_factor_isMissing then L0(FALSE) else L0(as_factor);
  L0(as_factor_orDefault):
    st `as.factor` = as_factor_orDefault;
    as_factor1 = ld `as.factor`;
    check L5() else D0();
  D0():
    deopt 0 [as_factor1];
  L5():
    as_factor2 = force? as_factor1;
    checkMissing(as_factor2);
    c = `as.logical`(as_factor2);
    if c then L6() else L1();
  L1():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L6():
    rownames = ldf rownames;
    check L7() else D1();
  D1():
    deopt 3 [];
  L3(r16):
    popenv;
    return r16;
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn rownames[, `do.NULL`, prefix](p, FALSE, "");
    check L8() else D2();
  L19():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L20():
    r15 = dyn base3(<lang row(dim(x))>);
    goto L3(r15);
  D2():
    deopt 9 [r1];
  L4(r18):
    row1 = ldf row in base;
    r20 = dyn row1(r18);
    check L25() else D12();
  L8():
    st labs = r1;
    factor = ldf factor;
    check L9() else D3();
  L21():
    x7 = ld x;
    check L23() else D10();
  L22():
    r17 = dyn base4(<sym x>);
    goto L4(r17);
  D3():
    deopt 12 [];
  D10():
    deopt 35 [x7];
  D12():
    deopt 40 [r20];
  L9():
    p1 = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r3):
      return r3;
    L2():
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r2 = dyn base(<lang row(dim(x))>);
      goto L0(r2);
    L1(r5):
      row = ldf row in base;
      r7 = dyn row(r5);
      goto L0(r7);
    L4():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      dim = ldf dim in base;
      r6 = dyn dim(x4);
      goto L1(r6);
    L5():
      r4 = dyn base1(<sym x>);
      goto L1(r4);
    };
    p2 = prom<V +>{
      labs = ld labs;
      labs1 = force? labs;
      checkMissing(labs1);
      return labs1;
    };
    r10 = dyn factor[, labels](p1, p2);
    check L10() else D4();
  L23():
    x8 = force? x7;
    checkMissing(x8);
    dim2 = ldf dim in base;
    r19 = dyn dim2(x8);
    check L24() else D11();
  L25():
    goto L3(r20);
  D4():
    deopt 16 [r10];
  D11():
    deopt 38 [r19];
  L10():
    st res = r10;
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L24():
    goto L4(r19);
  L2(r12):
    l = ld res;
    dim__ = ldf `dim<-`;
    check L15() else D7();
  L11():
    x5 = ld x;
    check L13() else D5();
  L12():
    r11 = dyn base2(<sym x>);
    goto L2(r11);
  D5():
    deopt 20 [x5];
  D7():
    deopt 25 [r12, l, r12];
  L13():
    x6 = force? x5;
    checkMissing(x6);
    dim1 = ldf dim in base;
    r13 = dyn dim1(x6);
    check L14() else D6();
  L15():
    r14 = dyn dim__(l, NULL, r12);
    check L16() else D8();
  D6():
    deopt 23 [r13];
  D8():
    deopt 27 [r12, r14];
  L14():
    goto L2(r13);
  L16():
    st res = r14;
    res = ld res;
    check L17() else D9();
  D9():
    deopt 29 [res];
  L17():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  }
}