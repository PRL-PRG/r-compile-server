fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3036331442;
    st useMTable = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3036331442(onOff) {
  (reg onOff:*) -+> V { var onOff:*, reg onOff_isMissing:L, reg onOff_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_set_method_dispatch:*, reg C_R_set_method_dispatch1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg C_R_set_method_dispatch4:V, reg r3:V, reg onOff1:*, reg onOff2:V, reg as_logical:cls, reg r4:V, reg vargs:dots, reg r5:V |
    mkenv;
    onOff_isMissing = missing.0(onOff);
    if onOff_isMissing then L0(NA_LGL) else L0(onOff);
  L0(onOff_orDefault):
    st onOff = onOff_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    popenv;
    return r1;
  L3():
    C_R_set_method_dispatch = ld C_R_set_method_dispatch;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_R_set_method_dispatch>, <lang as.logical(onOff)>);
    goto L1(r);
  D0():
    deopt 1 [C_R_set_method_dispatch];
  L5():
    C_R_set_method_dispatch1 = force? C_R_set_method_dispatch;
    checkMissing(C_R_set_method_dispatch1);
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2(C_R_set_method_dispatch4, r3):
    vargs = dots[r3];
    r5 = `.Call`(C_R_set_method_dispatch4, vargs, <missing>);
    goto L1(r5);
  L6():
    onOff1 = ld onOff;
    check L8() else D1();
  L7():
    r2 = dyn base1(<sym onOff>);
    goto L2(C_R_set_method_dispatch1, r2);
  D1():
    deopt 4 [C_R_set_method_dispatch1, onOff1];
  L8():
    onOff2 = force? onOff1;
    checkMissing(onOff2);
    as_logical = ldf `as.logical` in base;
    r4 = dyn as_logical(onOff2);
    check L9() else D2();
  D2():
    deopt 7 [C_R_set_method_dispatch1, r4];
  L9():
    goto L2(C_R_set_method_dispatch1, r4);
  }
}