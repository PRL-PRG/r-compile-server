fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1968648398;
    st `file.append` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1968648398(file1, file2) {
  (reg file1:*, reg file2:*) -+> V { var file1:*, var file2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file3:*, reg file4:V, reg file5:*, reg file6:V, reg file_append:cls, reg r2:V |
    mkenv;
    st file1 = file1;
    st file2 = file2;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    file3 = ld file1;
    check L3() else D0();
  L2():
    r = dyn base(<lang file.append(file1, file2)>);
    goto L0(r);
  D0():
    deopt 2 [file3];
  L3():
    file4 = force? file3;
    checkMissing(file4);
    file5 = ld file2;
    check L4() else D1();
  D1():
    deopt 4 [file5];
  L4():
    file6 = force? file5;
    checkMissing(file6);
    file_append = ldf `file.append` in base;
    r2 = dyn file_append(file4, file6);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}