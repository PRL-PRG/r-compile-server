fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner146019176;
    st `determinant.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner146019176(x, logarithm, `...`) {
  (reg x:*, reg logarithm:*, reg ddd:dots) -+> V { var x:*, var logarithm:*, reg logarithm_isMissing:L, reg logarithm_orDefault:*, var `...`:dots?, reg ncol:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg nrow:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg n:*, reg n1:V, reg r7:V, reg c1:L, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg structure1:cls, reg logarithm1:*, reg logarithm2:V, reg c2:L, reg p2:p(V +), reg logarithm3:*, reg logarithm4:V, reg p3:p(V +), reg r12:V, reg list:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg c3:L, reg c4:L, reg stop1:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg x7:*, reg x8:V, reg logarithm5:*, reg logarithm6:V, reg det_ge_real:cls, reg r24:V |
    mkenv;
    st x = x;
    logarithm_isMissing = missing.0(logarithm);
    if logarithm_isMissing then L0(TRUE) else L0(logarithm);
  L0(logarithm_orDefault):
    st logarithm = logarithm_orDefault;
    st `...` = ddd;
    ncol = ldf ncol;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn ncol(p);
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    st n = r1;
    nrow = ldf nrow;
    check L11() else D2();
  D2():
    deopt 5 [r1];
  L11():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn nrow(p1);
    check L12() else D3();
  D3():
    deopt 7 [r1, r3];
  L12():
    r4 = `!=`(r1, r3);
    c = `as.logical`(r4);
    if c then L13() else L1();
  L1():
    goto L2();
  L2():
    n = ld n;
    check L17() else D6();
  L13():
    stop = ldf stop;
    check L14() else D4();
  D4():
    deopt 10 [];
  D6():
    deopt 15 [n];
  L14():
    r5 = dyn stop("'x' must be a square matrix");
    check L15() else D5();
  L17():
    n1 = force? n;
    checkMissing(n1);
    r7 = `<`(n1, 1);
    c1 = `as.logical`(r7);
    if c1 then L18() else L3();
  D5():
    deopt 12 [r5];
  L3():
    sym1 = ldf `is.complex`;
    base1 = ldf `is.complex` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L15():
    goto L2();
  L18():
    structure = ldf structure;
    check L19() else D7();
  D7():
    deopt 20 [];
  L5(r19):
    c4 = `as.logical`(r19);
    if c4 then L26() else L6();
  L19():
    p4 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      structure1 = ldf structure;
      p2 = prom<V +>{
        logarithm1 = ld logarithm;
        logarithm2 = force? logarithm1;
        checkMissing(logarithm2);
        c2 = `as.logical`(logarithm2);
        if c2 then L1() else L0();
      L0():
        return 1.0;
      L1():
        return 0.0;
      };
      p3 = prom<V +>{
        logarithm3 = ld logarithm;
        logarithm4 = force? logarithm3;
        checkMissing(logarithm4);
        return logarithm4;
      };
      r12 = dyn structure1[, logarithm](p2, p3);
      list = ldf list in base;
      r13 = dyn list(r12, 1);
      goto L0(r13);
    L2():
      r8 = dyn base[modulus, sign](<lang structure(if(logarithm, 0.0, 1.0), logarithm=logarithm)>, 1);
      goto L0(r8);
    };
    r15 = dyn structure[, class](p4, "det");
    check L20() else D8();
  L23():
    x5 = ld x;
    check L25() else D9();
  L24():
    r18 = dyn base1(<sym x>);
    goto L5(r18);
  D8():
    deopt 24 [r15];
  D9():
    deopt 29 [x5];
  L6():
    goto L7();
  L7():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L20():
    popenv;
    return r15;
  L25():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.complex`(x6);
    goto L5(c3);
  L26():
    stop1 = ldf stop;
    check L27() else D10();
  D10():
    deopt 33 [];
  L8(r23):
    popenv;
    return r23;
  L27():
    r20 = dyn stop1("'determinant' not currently defined for complex matrices");
    check L28() else D11();
  L30():
    x7 = ld x;
    check L32() else D12();
  L31():
    r22 = dyn base2(<lang det_ge_real(x, logarithm)>);
    goto L8(r22);
  D11():
    deopt 35 [r20];
  D12():
    deopt 40 [x7];
  L28():
    goto L7();
  L32():
    x8 = force? x7;
    checkMissing(x8);
    logarithm5 = ld logarithm;
    check L33() else D13();
  D13():
    deopt 42 [logarithm5];
  L33():
    logarithm6 = force? logarithm5;
    checkMissing(logarithm6);
    det_ge_real = ldf det_ge_real in base;
    r24 = dyn det_ge_real(x8, logarithm6);
    check L34() else D14();
  D14():
    deopt 45 [r24];
  L34():
    goto L8(r24);
  }
}