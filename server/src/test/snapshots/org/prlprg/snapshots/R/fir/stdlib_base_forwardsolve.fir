fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2610842955;
    st forwardsolve = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2610842955(l, x, k, `upper.tri`, transpose) {
  (reg l:*, reg x:*, reg k:*, reg upper_tri:*, reg transpose:*) -+> V { var l:*, var x:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg ncol:cls, reg l1:*, reg l2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `upper.tri`:*, reg upper_tri_isMissing:L, reg upper_tri_orDefault:*, var transpose:*, reg transpose_isMissing:L, reg transpose_orDefault:*, reg as_matrix:cls, reg l3:*, reg l4:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r7:V, reg x_mat:*, reg x_mat1:V, reg r8:V, reg c:L, reg as_matrix1:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg l5:*, reg l6:V, reg x5:*, reg x6:V, reg k1:*, reg k2:V, reg upper_tri1:*, reg upper_tri2:V, reg transpose1:*, reg transpose2:V, reg backsolve:cls, reg r14:V, reg x_mat2:*, reg x_mat3:V, reg c1:L, reg z:*, reg z1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg z2:*, reg z3:V, reg drop:cls, reg r17:V |
    mkenv;
    st l = l;
    st x = x;
    k_isMissing = missing.0(k);
    if k_isMissing then L0() else L1(k);
  L0():
    p1 = prom<V +>{
      ncol = ldf ncol;
      p = prom<V +>{
        l1 = ld l;
        l2 = force? l1;
        checkMissing(l2);
        return l2;
      };
      r1 = dyn ncol(p);
      return r1;
    };
    goto L1(p1);
  L1(k_orDefault):
    st k = k_orDefault;
    upper_tri_isMissing = missing.0(upper_tri);
    if upper_tri_isMissing then L2(FALSE) else L2(upper_tri);
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
      l3 = ld l;
      l4 = force? l3;
      checkMissing(l4);
      return l4;
    };
    r4 = dyn as_matrix(p2);
    check L11() else D1();
  D1():
    deopt 3 [r4];
  L11():
    st l = r4;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L4(r6):
    st `x.mat` = r6;
    x_mat = ld `x.mat`;
    check L16() else D4();
  L12():
    x1 = ld x;
    check L14() else D2();
  L13():
    r5 = dyn base(<sym x>);
    goto L4(r5);
  D2():
    deopt 7 [x1];
  D4():
    deopt 12 [x_mat];
  L14():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r7 = dyn is_matrix(x2);
    check L15() else D3();
  L16():
    x_mat1 = force? x_mat;
    checkMissing(x_mat1);
    r8 = `!`(x_mat1);
    c = `as.logical`(r8);
    if c then L17() else L5();
  D3():
    deopt 10 [r7];
  L5():
    goto L6();
  L6():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L15():
    goto L4(r7);
  L17():
    as_matrix1 = ldf `as.matrix`;
    check L18() else D5();
  D5():
    deopt 16 [];
  L7(r13):
    st z = r13;
    x_mat2 = ld `x.mat`;
    check L29() else D13();
  L18():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn as_matrix1(p3);
    check L19() else D6();
  L21():
    l5 = ld l;
    check L23() else D7();
  L22():
    r12 = dyn base1(<lang backsolve(l, x, k, upper.tri, transpose)>);
    goto L7(r12);
  D6():
    deopt 18 [r10];
  D7():
    deopt 24 [l5];
  D13():
    deopt 37 [x_mat2];
  L19():
    st x = r10;
    goto L6();
  L23():
    l6 = force? l5;
    checkMissing(l6);
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
  L9(r16):
    popenv;
    return r16;
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
    r15 = dyn base2(<sym z>);
    goto L9(r15);
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
    r17 = dyn drop(z3);
    check L36() else D16();
  D11():
    deopt 32 [transpose1];
  D16():
    deopt 46 [r17];
  L27():
    transpose2 = force? transpose1;
    checkMissing(transpose2);
    backsolve = ldf backsolve in base;
    r14 = dyn backsolve(l6, x6, k2, upper_tri2, transpose2);
    check L28() else D12();
  L36():
    goto L9(r17);
  D12():
    deopt 35 [r14];
  L28():
    goto L7(r14);
  }
}