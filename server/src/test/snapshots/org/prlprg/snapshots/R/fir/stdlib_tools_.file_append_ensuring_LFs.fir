fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4116132045;
    st `.file_append_ensuring_LFs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4116132045(file1, file2) {
  (reg file1:*, reg file2:*) -+> V { var file1:*, var file2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_codeFilesAppend:*, reg C_codeFilesAppend1:V, reg file3:*, reg file4:V, reg file5:*, reg file6:V, reg vargs:dots, reg r2:V |
    mkenv;
    st file1 = file1;
    st file2 = file2;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_codeFilesAppend = ld C_codeFilesAppend;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_codeFilesAppend>, <sym file1>, <sym file2>);
    goto L0(r);
  D0():
    deopt 1 [C_codeFilesAppend];
  L3():
    C_codeFilesAppend1 = force? C_codeFilesAppend;
    checkMissing(C_codeFilesAppend1);
    file3 = ld file1;
    check L4() else D1();
  D1():
    deopt 2 [C_codeFilesAppend1, file3];
  L4():
    file4 = force? file3;
    checkMissing(file4);
    file5 = ld file2;
    check L5() else D2();
  D2():
    deopt 3 [C_codeFilesAppend1, file4, file5];
  L5():
    file6 = force? file5;
    checkMissing(file6);
    vargs = dots[file4, file6];
    r2 = `.Call`(C_codeFilesAppend1, vargs, <missing>);
    goto L0(r2);
  }
}