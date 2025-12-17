fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2987363276;
    st paste0 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2987363276(`...`, collapse, recycle0) {
  (reg ddd:dots, reg collapse:*, reg recycle0:*) -+> V { var `...`:dots?, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, var recycle0:*, reg recycle0_isMissing:L, reg recycle0_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg collapse1:*, reg collapse2:V, reg recycle1:*, reg recycle2:V, reg paste0:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L0(NULL) else L0(collapse);
  L0(collapse_orDefault):
    st collapse = collapse_orDefault;
    recycle0_isMissing = missing.0(recycle0);
    if recycle0_isMissing then L1(FALSE) else L1(recycle0);
  L1(recycle0_orDefault):
    st recycle0 = recycle0_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r1):
    popenv;
    return r1;
  L4():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang paste0(list(...), collapse, recycle0)>);
    goto L2(r);
  L3(r3):
    collapse1 = ld collapse;
    check L10() else D2();
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym ...>);
    goto L3(r2);
  D0():
    deopt 4 [];
  D2():
    deopt 7 [collapse1];
  L8():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L9() else D1();
  L10():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    recycle1 = ld recycle0;
    check L11() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 9 [recycle1];
  L9():
    goto L3(r4);
  L11():
    recycle2 = force? recycle1;
    checkMissing(recycle2);
    paste0 = ldf paste0 in base;
    r5 = dyn paste0(r3, collapse2, recycle2);
    check L12() else D4();
  D4():
    deopt 12 [r5];
  L12():
    goto L2(r5);
  }
}