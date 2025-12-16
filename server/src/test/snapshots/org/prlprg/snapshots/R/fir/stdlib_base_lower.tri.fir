fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg r1:V, reg p:p(V +), reg r3:V, reg lower_tri:cls, reg m2:*, reg m3:V, reg p1:p(V +), reg r5:V, reg l:*, reg c:L, reg r7:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lower_tri1:cls, reg m4:*, reg m5:V, reg p2:p(V +), reg r11:V, reg ___:cls, reg r12:V, reg m6:*, reg m7:V |
    mkenv;
    r = clos inner923355066;
    st `lower.tri` = r;
    matrix = ldf matrix;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      r1 = `:`(1.0, 20.0);
      return r1;
    };
    r3 = dyn matrix(p, 4.0, 5.0);
    check L2() else D1();
  D1():
    deopt 8 [r3];
  L2():
    st m2 = r3;
    lower_tri = ldf `lower.tri`;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p1 = prom<V +>{
      m2 = ld m2;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r5 = dyn lower_tri(p1);
    check L4() else D3();
  D3():
    deopt 13 [r5];
  L4():
    l = ld m2;
    c = `is.object`(l);
    if c then L5() else L6(NA_LGL, l);
  L0(dx1):
    st m2 = dx1;
    m6 = ld m2;
    check L10() else D6();
  L5():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(NA_LGL, dr);
  L6(r7, l2):
    lower_tri1 = ldf `lower.tri`;
    check L8() else D4();
  D4():
    deopt 18 [r7, l2, NA_LGL];
  D6():
    deopt 23 [m6];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    p2 = prom<V +>{
      m4 = ld m2;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r11 = dyn lower_tri1(p2);
    check L9() else D5();
  L10():
    m7 = force? m6;
    checkMissing(m7);
    popenv;
    return m7;
  D5():
    deopt 20 [r7, l2, NA_LGL, r11];
  L9():
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, NA_LGL, r11);
    goto L0(r12);
  }
}
fun inner923355066(x, diag) {
  (reg x:*, reg diag:*) -+> V { var x:*, var diag:*, reg diag_isMissing:L, reg diag_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg d:*, reg d1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg as_matrix:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r10:V, reg dim1:cls, reg r11:V, reg diag1:*, reg diag2:V, reg c1:L, reg _row:cls, reg d2:*, reg d3:V, reg p1:p(V +), reg r14:V, reg _col:cls, reg d4:*, reg d5:V, reg p2:p(V +), reg r16:V, reg r17:V, reg _row1:cls, reg d6:*, reg d7:V, reg p3:p(V +), reg r19:V, reg _col1:cls, reg d8:*, reg d9:V, reg p4:p(V +), reg r21:V, reg r22:V |
    mkenv;
    st x = x;
    diag_isMissing = missing.0(diag);
    if diag_isMissing then L0(FALSE) else L0(diag);
  L0(diag_orDefault):
    st diag = diag_orDefault;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    st d = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    r6 = `!=`(r4, 2);
    c = `as.logical`(r6);
    if c then L15() else L3();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L10() else D1();
  L11():
    d = ld d;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym d>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [d];
  L3():
    goto L5();
  L5():
    diag1 = ld diag;
    check L22() else D7();
  L10():
    goto L1(r2);
  L13():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r5 = dyn length(d1);
    check L14() else D3();
  L15():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D3():
    deopt 12 [r5];
  D7():
    deopt 26 [diag1];
  L4(r8):
    st d = r8;
    goto L5();
  L14():
    goto L2(r5);
  L16():
    as_matrix = ldf `as.matrix`;
    check L18() else D4();
  L17():
    r7 = dyn base2(<lang as.matrix(x)>);
    goto L4(r7);
  L22():
    diag2 = force? diag1;
    checkMissing(diag2);
    c1 = `as.logical`(diag2);
    if c1 then L23() else L6();
  D4():
    deopt 18 [];
  L6():
    _row1 = ldf `.row`;
    check L29() else D12();
  L18():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn as_matrix(p);
    check L19() else D5();
  L23():
    _row = ldf `.row`;
    check L24() else D8();
  D5():
    deopt 20 [r10];
  D8():
    deopt 29 [];
  D12():
    deopt 37 [];
  L19():
    dim1 = ldf dim in base;
    r11 = dyn dim1(r10);
    check L20() else D6();
  L24():
    p1 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r14 = dyn _row(p1);
    check L25() else D9();
  L29():
    p3 = prom<V +>{
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      return d7;
    };
    r19 = dyn _row1(p3);
    check L30() else D13();
  D6():
    deopt 22 [r11];
  D9():
    deopt 31 [r14];
  D13():
    deopt 39 [r19];
  L20():
    goto L4(r11);
  L25():
    _col = ldf `.col`;
    check L26() else D10();
  L30():
    _col1 = ldf `.col`;
    check L31() else D14();
  D10():
    deopt 32 [r14];
  D14():
    deopt 40 [r19];
  L26():
    p2 = prom<V +>{
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      return d5;
    };
    r16 = dyn _col(p2);
    check L27() else D11();
  L31():
    p4 = prom<V +>{
      d8 = ld d;
      d9 = force? d8;
      checkMissing(d9);
      return d9;
    };
    r21 = dyn _col1(p4);
    check L32() else D15();
  D11():
    deopt 34 [r14, r16];
  D15():
    deopt 42 [r19, r21];
  L27():
    r17 = `>=`(r14, r16);
    popenv;
    return r17;
  L32():
    r22 = `>`(r19, r21);
    popenv;
    return r22;
  }
}