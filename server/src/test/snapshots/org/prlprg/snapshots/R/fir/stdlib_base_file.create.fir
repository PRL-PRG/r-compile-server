fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner76452885;
    st `file.create` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner76452885(`...`, showWarnings) {
  (reg ddd:dots, reg showWarnings:*) -+> V { var `...`:dots?, var showWarnings:*, reg showWarnings_isMissing:L, reg showWarnings_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg ddd1:dots?, reg r4:V, reg showWarnings1:*, reg showWarnings2:V, reg file_create:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    showWarnings_isMissing = missing.0(showWarnings);
    if showWarnings_isMissing then L0(TRUE) else L0(showWarnings);
  L0(showWarnings_orDefault):
    st showWarnings = showWarnings_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang file.create(c(...), showWarnings)>);
    goto L1(r);
  L2(r3):
    showWarnings1 = ld showWarnings;
    check L9() else D2();
  L5():
    c = ldf c;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym ...>);
    goto L2(r2);
  D0():
    deopt 4 [];
  D2():
    deopt 7 [showWarnings1];
  L7():
    ddd1 = ld `...`;
    r4 = dyn c[`...`](ddd1);
    check L8() else D1();
  L9():
    showWarnings2 = force? showWarnings1;
    checkMissing(showWarnings2);
    file_create = ldf `file.create` in base;
    r5 = dyn file_create(r3, showWarnings2);
    check L10() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 10 [r5];
  L8():
    goto L2(r4);
  L10():
    goto L1(r5);
  }
}