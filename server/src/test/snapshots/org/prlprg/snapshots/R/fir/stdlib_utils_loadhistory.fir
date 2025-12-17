fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1597759635;
    st loadhistory = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1597759635(file) {
  (reg file:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg C_loadhistory:*, reg C_loadhistory1:V, reg file1:*, reg file2:V, reg _External2:cls, reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0(".Rhistory") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf `.External2`;
    base1 = ldf `.External2` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang .External2(C_loadhistory, file)>);
    goto L1(r);
  L2(r3):
    invisible = ldf invisible in base;
    r5 = dyn invisible(r3);
    check L10() else D3();
  L5():
    C_loadhistory = ld C_loadhistory;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym C_loadhistory>, <sym file>);
    goto L2(r2);
  D0():
    deopt 4 [C_loadhistory];
  D3():
    deopt 11 [r5];
  L7():
    C_loadhistory1 = force? C_loadhistory;
    checkMissing(C_loadhistory1);
    file1 = ld file;
    check L8() else D1();
  L10():
    goto L1(r5);
  D1():
    deopt 6 [file1];
  L8():
    file2 = force? file1;
    checkMissing(file2);
    _External2 = ldf `.External2` in base;
    r4 = dyn _External2(C_loadhistory1, file2);
    check L9() else D2();
  D2():
    deopt 9 [r4];
  L9():
    goto L2(r4);
  }
}