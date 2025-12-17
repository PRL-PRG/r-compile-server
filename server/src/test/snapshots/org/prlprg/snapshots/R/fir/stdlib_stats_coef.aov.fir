fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3602630564;
    st `coef.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3602630564(object, complete, `...`) {
  (reg object:*, reg complete:*, reg ddd:dots) -+> V { var object:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg complete1:*, reg complete2:V, reg c1:L, reg cf:*, reg cf1:V, reg cf2:*, reg cf3:V, reg c2:L, reg cf5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg cf8:V, reg r2:V, reg cf9:*, reg cf10:V, reg is_na:cls, reg r3:V, reg r4:V, reg __:cls, reg r5:V |
    mkenv;
    st object = object;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(FALSE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    st `...` = ddd;
    object1 = ld object;
    check L4() else D0();
  D0():
    deopt 0 [object1];
  L4():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L6() else L7(object2);
  L5(dx1):
    st cf = dx1;
    complete1 = ld complete;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(object4):
    r = `$`(object4, <sym coefficients>);
    goto L5(r);
  D1():
    deopt 4 [complete1];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    complete2 = force? complete1;
    checkMissing(complete2);
    c1 = `as.logical`(complete2);
    if c1 then L10() else L1();
  L1():
    cf2 = ld cf;
    check L13() else D3();
  L10():
    cf = ld cf;
    check L11() else D2();
  D2():
    deopt 6 [cf];
  D3():
    deopt 8 [cf2];
  L11():
    cf1 = force? cf;
    checkMissing(cf1);
    popenv;
    return cf1;
  L13():
    cf3 = force? cf2;
    checkMissing(cf3);
    c2 = `is.object`(cf3);
    if c2 then L14() else L15(cf3);
  L2(dx3):
    popenv;
    return dx3;
  L14():
    dr2 = tryDispatchBuiltin.1("[", cf3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(dr2);
  L15(cf5):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L3(cf8, r2):
    r4 = `!`(r2);
    __ = ldf `[` in base;
    r5 = dyn __(cf8, r4);
    goto L2(r5);
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L17():
    cf9 = ld cf;
    check L19() else D4();
  L18():
    r1 = dyn base(<sym cf>);
    goto L3(cf5, r1);
  D4():
    deopt 12 [cf5, cf9];
  L19():
    cf10 = force? cf9;
    checkMissing(cf10);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(cf10);
    check L20() else D5();
  D5():
    deopt 15 [cf5, r3];
  L20():
    goto L3(cf5, r3);
  }
}