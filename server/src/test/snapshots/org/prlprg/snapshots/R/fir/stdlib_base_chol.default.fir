fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1313961552;
    st `chol.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1313961552(x, pivot, LINPACK, tol, `...`) {
  (reg x:*, reg pivot:*, reg LINPACK:*, reg tol:*, reg ddd:dots) -+> V { var x:*, var pivot:*, reg pivot_isMissing:L, reg pivot_orDefault:*, var LINPACK:*, reg LINPACK_isMissing:L, reg LINPACK_orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg c1:L, reg c2:L, reg stop1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg as_matrix:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r14:V, reg pivot1:*, reg pivot2:V, reg tol1:*, reg tol2:V, reg La_chol:cls, reg r15:V |
    mkenv;
    st x = x;
    pivot_isMissing = missing.0(pivot);
    if pivot_isMissing then L0(FALSE) else L0(pivot);
  L0(pivot_orDefault):
    st pivot = pivot_orDefault;
    LINPACK_isMissing = missing.0(LINPACK);
    if LINPACK_isMissing then L1(FALSE) else L1(LINPACK);
  L1(LINPACK_orDefault):
    st LINPACK = LINPACK_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L2() else L3(tol);
  L2():
    p = prom<V +>{
      return -1.0;
    };
    goto L3(p);
  L3(tol_orDefault):
    st tol = tol_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L4(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L13() else L5();
  L11():
    missing = ldf missing in base;
    r3 = dyn missing(<sym LINPACK>);
    goto L4(r3);
  L12():
    r1 = dyn base(<sym LINPACK>);
    goto L4(r1);
  L5():
    goto L6();
  L6():
    sym1 = ldf `is.complex`;
    base1 = ldf `is.complex` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    stop = ldf stop;
    check L14() else D0();
  D0():
    deopt 5 [];
  L7(r8):
    c2 = `as.logical`(r8);
    if c2 then L20() else L8();
  L14():
    r5 = dyn stop("the LINPACK argument has been defunct since R 3.1.0");
    check L15() else D1();
  L17():
    x1 = ld x;
    check L19() else D2();
  L18():
    r7 = dyn base1(<sym x>);
    goto L7(r7);
  D1():
    deopt 7 [r5];
  D2():
    deopt 11 [x1];
  L8():
    goto L9();
  L9():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L15():
    goto L6();
  L19():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.complex`(x2);
    goto L7(c1);
  L20():
    stop1 = ldf stop;
    check L21() else D3();
  D3():
    deopt 15 [];
  L10(r12):
    popenv;
    return r12;
  L21():
    r9 = dyn stop1("complex matrices not permitted at present");
    check L22() else D4();
  L24():
    as_matrix = ldf `as.matrix`;
    check L26() else D5();
  L25():
    r11 = dyn base2(<lang La_chol(as.matrix(x), pivot, tol)>);
    goto L10(r11);
  D4():
    deopt 17 [r9];
  D5():
    deopt 23 [];
  L22():
    goto L9();
  L26():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r14 = dyn as_matrix(p1);
    check L27() else D6();
  D6():
    deopt 25 [r14];
  L27():
    pivot1 = ld pivot;
    check L28() else D7();
  D7():
    deopt 26 [pivot1];
  L28():
    pivot2 = force? pivot1;
    checkMissing(pivot2);
    tol1 = ld tol;
    check L29() else D8();
  D8():
    deopt 28 [tol1];
  L29():
    tol2 = force? tol1;
    checkMissing(tol2);
    La_chol = ldf La_chol in base;
    r15 = dyn La_chol(r14, pivot2, tol2);
    check L30() else D9();
  D9():
    deopt 31 [r15];
  L30():
    goto L10(r15);
  }
}