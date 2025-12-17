fun main() {
  () -+> V { reg r:cls, reg rbind:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg backsolve:cls, reg r14:*, reg r15:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg c3:cls, reg r19:V, reg p4:p(V +), reg r21:V, reg r22:*, reg r23:V, reg y:*, reg y1:V, reg ___:cls, reg r24:V, reg backsolve1:cls, reg r25:*, reg r26:V, reg p5:p(V +), reg x:*, reg x1:V, reg p6:p(V +), reg r29:V |
    mkenv;
    r = clos inner3530561750;
    st backsolve = r;
    rbind = ldf rbind;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, 2.0, 3.0);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, 2.0, 3.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1(0.0, 1.0, 1.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(0.0, 1.0, 1.0);
      goto L0(r5);
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c2 = ldf c in base;
      r11 = dyn c2(0.0, 0.0, 2.0);
      goto L0(r11);
    L2():
      r9 = dyn base2(0.0, 0.0, 2.0);
      goto L0(r9);
    };
    r13 = dyn rbind(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 8 [r13];
  L1():
    st r = r13;
    backsolve = ldf backsolve;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p3 = prom<V +>{
      r14 = ld r;
      r15 = force? r14;
      checkMissing(r15);
      return r15;
    };
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      st x = r18;
      invisible.0();
      return r18;
    L1():
      c3 = ldf c in base;
      r19 = dyn c3(8.0, 4.0, 2.0);
      goto L0(r19);
    L2():
      r17 = dyn base3(8.0, 4.0, 2.0);
      goto L0(r17);
    };
    r21 = dyn backsolve(p3, p4);
    check L3() else D3();
  D3():
    deopt 14 [r21];
  L3():
    st y = r21;
    r22 = ld r;
    check L4() else D4();
  D4():
    deopt 17 [r22];
  L4():
    r23 = force? r22;
    checkMissing(r23);
    y = ld y;
    check L5() else D5();
  D5():
    deopt 19 [y];
  L5():
    y1 = force? y;
    checkMissing(y1);
    ___ = ldf `%*%` in base;
    r24 = dyn ___(r23, y1);
    check L6() else D6();
  D6():
    deopt 22 [r24];
  L6():
    backsolve1 = ldf backsolve;
    check L7() else D7();
  D7():
    deopt 24 [];
  L7():
    p5 = prom<V +>{
      r25 = ld r;
      r26 = force? r25;
      checkMissing(r26);
      return r26;
    };
    p6 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r29 = dyn backsolve1[, , transpose](p5, p6, TRUE);
    check L8() else D8();
  D8():
    deopt 29 [r29];
  L8():
    popenv;
    return r29;
  }
}
fun inner3530561750(r, x, k, `upper.tri`, transpose) {
  (reg r:*, reg x:*, reg k:*, reg upper_tri:*, reg transpose:*) -+> V { var r:*, var x:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg ncol:cls, reg r1:*, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var `upper.tri`:*, reg upper_tri_isMissing:L, reg upper_tri_orDefault:*, var transpose:*, reg transpose_isMissing:L, reg transpose_orDefault:*, reg as_matrix:cls, reg r6:*, reg r7:V, reg p2:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r12:V, reg x_mat:*, reg x_mat1:V, reg r13:V, reg c:L, reg as_matrix1:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg r19:*, reg r20:V, reg x5:*, reg x6:V, reg k1:*, reg k2:V, reg upper_tri1:*, reg upper_tri2:V, reg transpose1:*, reg transpose2:V, reg backsolve:cls, reg r21:V, reg x_mat2:*, reg x_mat3:V, reg c1:L, reg z:*, reg z1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg z2:*, reg z3:V, reg drop:cls, reg r24:V |
    mkenv;
    st r = r;
    st x = x;
    k_isMissing = missing.0(k);
    if k_isMissing then L0() else L1(k);
  L0():
    p1 = prom<V +>{
      ncol = ldf ncol;
      p = prom<V +>{
        r1 = ld r;
        r2 = force? r1;
        checkMissing(r2);
        return r2;
      };
      r4 = dyn ncol(p);
      return r4;
    };
    goto L1(p1);
  L1(k_orDefault):
    st k = k_orDefault;
    upper_tri_isMissing = missing.0(upper_tri);
    if upper_tri_isMissing then L2(TRUE) else L2(upper_tri);
  L2(upper_tri_orDefault):
    st `upper.tri` = upper_tri_orDefault;
    transpose_isMissing = missing.0(transpose);
    if transpose_isMissing then L3(FALSE) else L3(transpose);
  L3(transpose_orDefault):
    st transpose = transpose_orDefault;
    as_matrix = ldf `as.matrix`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p2 = prom<V +>{
      r6 = ld r;
      r7 = force? r6;
      checkMissing(r7);
      return r7;
    };
    r9 = dyn as_matrix(p2);
    check L11() else D1();
  D1():
    deopt 3 [r9];
  L11():
    st r = r9;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L4(r11):
    st `x.mat` = r11;
    x_mat = ld `x.mat`;
    check L16() else D4();
  L12():
    x1 = ld x;
    check L14() else D2();
  L13():
    r10 = dyn base(<sym x>);
    goto L4(r10);
  D2():
    deopt 7 [x1];
  D4():
    deopt 12 [x_mat];
  L14():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r12 = dyn is_matrix(x2);
    check L15() else D3();
  L16():
    x_mat1 = force? x_mat;
    checkMissing(x_mat1);
    r13 = `!`(x_mat1);
    c = `as.logical`(r13);
    if c then L17() else L5();
  D3():
    deopt 10 [r12];
  L5():
    goto L6();
  L6():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L15():
    goto L4(r12);
  L17():
    as_matrix1 = ldf `as.matrix`;
    check L18() else D5();
  D5():
    deopt 16 [];
  L7(r18):
    st z = r18;
    x_mat2 = ld `x.mat`;
    check L29() else D13();
  L18():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r15 = dyn as_matrix1(p3);
    check L19() else D6();
  L21():
    r19 = ld r;
    check L23() else D7();
  L22():
    r17 = dyn base1(<lang backsolve(r, x, k, upper.tri, transpose)>);
    goto L7(r17);
  D6():
    deopt 18 [r15];
  D7():
    deopt 24 [r19];
  D13():
    deopt 37 [x_mat2];
  L19():
    st x = r15;
    goto L6();
  L23():
    r20 = force? r19;
    checkMissing(r20);
    x5 = ld x;
    check L24() else D8();
  L29():
    x_mat3 = force? x_mat2;
    checkMissing(x_mat3);
    c1 = `as.logical`(x_mat3);
    if c1 then L30() else L8();
  D8():
    deopt 26 [x5];
  L8():
    sym2 = ldf drop;
    base2 = ldf drop in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L24():
    x6 = force? x5;
    checkMissing(x6);
    k1 = ld k;
    check L25() else D9();
  L30():
    z = ld z;
    check L31() else D14();
  D9():
    deopt 28 [k1];
  D14():
    deopt 39 [z];
  L9(r23):
    popenv;
    return r23;
  L25():
    k2 = force? k1;
    checkMissing(k2);
    upper_tri1 = ld `upper.tri`;
    check L26() else D10();
  L31():
    z1 = force? z;
    checkMissing(z1);
    popenv;
    return z1;
  L33():
    z2 = ld z;
    check L35() else D15();
  L34():
    r22 = dyn base2(<sym z>);
    goto L9(r22);
  D10():
    deopt 30 [upper_tri1];
  D15():
    deopt 43 [z2];
  L26():
    upper_tri2 = force? upper_tri1;
    checkMissing(upper_tri2);
    transpose1 = ld transpose;
    check L27() else D11();
  L35():
    z3 = force? z2;
    checkMissing(z3);
    drop = ldf drop in base;
    r24 = dyn drop(z3);
    check L36() else D16();
  D11():
    deopt 32 [transpose1];
  D16():
    deopt 46 [r24];
  L27():
    transpose2 = force? transpose1;
    checkMissing(transpose2);
    backsolve = ldf backsolve in base;
    r21 = dyn backsolve(r20, x6, k2, upper_tri2, transpose2);
    check L28() else D12();
  L36():
    goto L9(r24);
  D12():
    deopt 35 [r21];
  L28():
    goto L7(r21);
  }
}