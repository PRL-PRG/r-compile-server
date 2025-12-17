fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1612861408;
    st `is.unsorted` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1612861408(x, `na.rm`, strictly) {
  (reg x:*, reg na_rm:*, reg strictly:*) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var strictly:*, reg strictly_isMissing:L, reg strictly_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg na_rm1:*, reg na_rm2:V, reg r6:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c6:L, reg r8:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r9:V, reg c7:L, reg c8:V, reg c10:L, reg na_rm3:*, reg na_rm4:V, reg c11:L, reg c13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c16:L, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c19:L, reg r15:V, reg x5:*, reg x6:V, reg is_na:cls, reg r16:V, reg any:cls, reg r17:V, reg c20:L, reg c21:V, reg c23:L, reg x7:*, reg x8:V, reg c24:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ii:*, reg ii1:V, reg r18:V, reg __:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x11:*, reg x12:V, reg na_rm5:*, reg na_rm6:V, reg strictly1:*, reg strictly2:V, reg is_unsorted:cls, reg r22:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    strictly_isMissing = missing.0(strictly);
    if strictly_isMissing then L1(FALSE) else L1(strictly);
  L1(strictly_orDefault):
    st strictly = strictly_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L2(r1):
    r3 = `<=`(r1, 1);
    c = `as.logical`(r3);
    if c then L20() else L3();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    na_rm1 = ld `na.rm`;
    check L23() else D2();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L19() else D1();
  L20():
    popenv;
    return FALSE;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [na_rm1];
  L19():
    goto L2(r2);
  L23():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    r6 = `!`(na_rm2);
    c1 = `as.logical`(r6);
    if c1 then L24() else L5(c1);
  L5(c3):
    c10 = `as.logical`(c3);
    if c10 then L30() else L7();
  L24():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L6(c6, r8):
    c7 = `as.logical`(r8);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7():
    na_rm3 = ld `na.rm`;
    check L33() else D5();
  L25():
    x3 = ld x;
    check L27() else D3();
  L26():
    r7 = dyn base1(<sym x>);
    goto L6(c1, r7);
  L30():
    popenv;
    return NA_LGL;
  D3():
    deopt 18 [c1, x3];
  D5():
    deopt 28 [na_rm3];
  L27():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r9 = dyn anyNA(x4);
    check L28() else D4();
  L33():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    c11 = `as.logical`(na_rm4);
    if c11 then L34() else L9(c11);
  D4():
    deopt 21 [c1, r9];
  L9(c13):
    c23 = `as.logical`(c13);
    if c23 then L43() else L12();
  L28():
    goto L6(c1, r9);
  L34():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L10(c16, r13):
    c20 = `as.logical`(r13);
    c21 = `&&`(c16, c20);
    goto L9(c21);
  L12():
    goto L14();
  L14():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L35():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L36():
    r12 = dyn base2(<lang `<-`(ii, is.na(x))>);
    goto L10(c11, r12);
  L43():
    x7 = ld x;
    check L44() else D9();
  D9():
    deopt 42 [x7];
  L11(c19, r15):
    st ii = r15;
    any = ldf any in base;
    r17 = dyn any(r15);
    check L41() else D8();
  L15(r21):
    popenv;
    return r21;
  L37():
    x5 = ld x;
    check L39() else D6();
  L38():
    r14 = dyn base3(<sym x>);
    goto L11(c11, r14);
  L44():
    x8 = force? x7;
    checkMissing(x8);
    c24 = `is.object`(x8);
    if c24 then L45() else L46(x8);
  L50():
    x11 = ld x;
    check L52() else D11();
  L51():
    r20 = dyn base4(<lang is.unsorted(x, na.rm, strictly)>);
    goto L15(r20);
  D6():
    deopt 34 [c11, x5];
  D8():
    deopt 40 [c19, r17];
  D11():
    deopt 53 [x11];
  L13(dx1):
    st x = dx1;
    goto L14();
  L39():
    x6 = force? x5;
    checkMissing(x6);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(x6);
    check L40() else D7();
  L41():
    goto L10(c19, r17);
  L45():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(x10):
    ii = ld ii;
    check L48() else D10();
  L52():
    x12 = force? x11;
    checkMissing(x12);
    na_rm5 = ld `na.rm`;
    check L53() else D12();
  D7():
    deopt 37 [c11, r16];
  D10():
    deopt 44 [x10, ii];
  D12():
    deopt 55 [na_rm5];
  L40():
    goto L11(c11, r16);
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L48():
    ii1 = force? ii;
    checkMissing(ii1);
    r18 = `!`(ii1);
    __ = ldf `[` in base;
    r19 = dyn __(x10, r18);
    goto L13(r19);
  L53():
    na_rm6 = force? na_rm5;
    checkMissing(na_rm6);
    strictly1 = ld strictly;
    check L54() else D13();
  D13():
    deopt 57 [strictly1];
  L54():
    strictly2 = force? strictly1;
    checkMissing(strictly2);
    is_unsorted = ldf `is.unsorted` in base;
    r22 = dyn is_unsorted(x12, na_rm6, strictly2);
    check L55() else D14();
  D14():
    deopt 60 [r22];
  L55():
    goto L15(r22);
  }
}