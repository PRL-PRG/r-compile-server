fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1413434093`;
    st asS4 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1413434093`(object, flag, complete) {
  (reg object:*, reg flag:*, reg complete:*) -+> V { var object:*, var flag:*, reg flag_isMissing:L, reg flag_orDefault:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg flag1:*, reg flag2:V, reg complete1:*, reg complete2:V, reg setS4Object:cls, reg r2:V |
    mkenv;
    st object = object;
    flag_isMissing = missing.0(flag);
    if flag_isMissing then L0(TRUE) else L0(flag);
  L0(flag_orDefault):
    st flag = flag_orDefault;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L1(TRUE) else L1(complete);
  L1(complete_orDefault):
    st complete = complete_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<lang setS4Object(object, flag, complete)>);
    goto L2(r);
  D0():
    deopt 2 [object1];
  L5():
    object2 = force? object1;
    checkMissing(object2);
    flag1 = ld flag;
    check L6() else D1();
  D1():
    deopt 4 [flag1];
  L6():
    flag2 = force? flag1;
    checkMissing(flag2);
    complete1 = ld complete;
    check L7() else D2();
  D2():
    deopt 6 [complete1];
  L7():
    complete2 = force? complete1;
    checkMissing(complete2);
    setS4Object = ldf setS4Object in base;
    r2 = dyn setS4Object(object2, flag2, complete2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}