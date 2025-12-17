fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner430904460;
    st `.allowPrimitiveMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner430904460(onOff) {
  (reg onOff:*) -+> V { var onOff:*, reg onOff1:*, reg onOff2:V, reg c:L, reg r:S, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg C_R_M_setPrimitiveMethods:*, reg C_R_M_setPrimitiveMethods1:V, reg code:*, reg code1:V, reg vargs:dots, reg r3:V |
    mkenv;
    st onOff = onOff;
    onOff1 = ld onOff;
    check L3() else D0();
  D0():
    deopt 0 [onOff1];
  L3():
    onOff2 = force? onOff1;
    checkMissing(onOff2);
    c = `as.logical`(onOff2);
    if c then L4() else L0();
  L0():
    goto L1("CLEAR");
  L1(r):
    st code = r;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L4():
    goto L1("SET");
  L2(r2):
    popenv;
    return r2;
  L6():
    C_R_M_setPrimitiveMethods = ld C_R_M_setPrimitiveMethods;
    check L8() else D1();
  L7():
    r1 = dyn base(<sym C_R_M_setPrimitiveMethods>, "", NULL, <sym code>, NULL, NULL);
    goto L2(r1);
  D1():
    deopt 8 [C_R_M_setPrimitiveMethods];
  L8():
    C_R_M_setPrimitiveMethods1 = force? C_R_M_setPrimitiveMethods;
    checkMissing(C_R_M_setPrimitiveMethods1);
    code = ld code;
    check L9() else D2();
  D2():
    deopt 11 [C_R_M_setPrimitiveMethods1, "", NULL, code];
  L9():
    code1 = force? code;
    checkMissing(code1);
    vargs = dots["", NULL, code1, NULL, NULL];
    r3 = `.Call`(C_R_M_setPrimitiveMethods1, vargs, <missing>);
    goto L2(r3);
  }
}