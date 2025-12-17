fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner734049554;
    st asS3 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner734049554(object, flag, complete) {
  (reg object:*, reg flag:*, reg complete:*) -+> V { var object:*, var flag:*, reg flag_isMissing:L, reg flag_orDefault:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg flag1:*, reg flag2:V, reg as_logical:cls, reg r4:V, reg r5:V, reg complete1:*, reg complete2:V, reg setS4Object:cls, reg r6:V |
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
    if guard then L4() else L5();
  L2(r1):
    popenv;
    return r1;
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r = dyn base(<lang setS4Object(object, `!`(as.logical(flag)), complete)>);
    goto L2(r);
  D0():
    deopt 2 [object1];
  L6():
    object2 = force? object1;
    checkMissing(object2);
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3(r3):
    r5 = `!`(r3);
    complete1 = ld complete;
    check L11() else D3();
  L7():
    flag1 = ld flag;
    check L9() else D1();
  L8():
    r2 = dyn base1(<sym flag>);
    goto L3(r2);
  D1():
    deopt 6 [flag1];
  D3():
    deopt 11 [complete1];
  L9():
    flag2 = force? flag1;
    checkMissing(flag2);
    as_logical = ldf `as.logical` in base;
    r4 = dyn as_logical(flag2);
    check L10() else D2();
  L11():
    complete2 = force? complete1;
    checkMissing(complete2);
    setS4Object = ldf setS4Object in base;
    r6 = dyn setS4Object(object2, r5, complete2);
    check L12() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 14 [r6];
  L10():
    goto L3(r4);
  L12():
    goto L2(r6);
  }
}