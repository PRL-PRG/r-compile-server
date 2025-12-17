fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4148249736;
    st fft = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4148249736(z, inverse) {
  (reg z:*, reg inverse:*) -+> V { var z:*, var inverse:*, reg inverse_isMissing:L, reg inverse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_fft:*, reg C_fft1:V, reg z1:*, reg z2:V, reg inverse1:*, reg inverse2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st z = z;
    inverse_isMissing = missing.0(inverse);
    if inverse_isMissing then L0(FALSE) else L0(inverse);
  L0(inverse_orDefault):
    st inverse = inverse_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_fft = ld C_fft;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_fft>, <sym z>, <sym inverse>);
    goto L1(r);
  D0():
    deopt 1 [C_fft];
  L4():
    C_fft1 = force? C_fft;
    checkMissing(C_fft1);
    z1 = ld z;
    check L5() else D1();
  D1():
    deopt 2 [C_fft1, z1];
  L5():
    z2 = force? z1;
    checkMissing(z2);
    inverse1 = ld inverse;
    check L6() else D2();
  D2():
    deopt 3 [C_fft1, z2, inverse1];
  L6():
    inverse2 = force? inverse1;
    checkMissing(inverse2);
    vargs = dots[z2, inverse2];
    r2 = `.Call`(C_fft1, vargs, <missing>);
    goto L1(r2);
  }
}