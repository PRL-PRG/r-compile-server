fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2239533017;
    st `.printNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2239533017(header, names, separateLine) {
  (reg header:*, reg names:*, reg separateLine:*) -+> V { var header:*, var names:*, var separateLine:*, reg separateLine_isMissing:L, reg separateLine_orDefault:*, reg paste0:cls, reg names1:*, reg names2:V, reg p:p(V +), reg r1:V, reg separateLine1:*, reg separateLine2:V, reg c:L, reg cat:cls, reg header1:*, reg header2:V, reg p1:p(V +), reg r3:V, reg cat1:cls, reg names3:*, reg names4:V, reg p2:p(V +), reg r5:V, reg cat2:cls, reg header3:*, reg header4:V, reg p3:p(V +), reg r8:V, reg cat3:cls, reg names5:*, reg names6:V, reg p4:p(V +), reg r10:V, reg cat4:cls, reg r11:V |
    mkenv;
    st header = header;
    st names = names;
    separateLine_isMissing = missing.0(separateLine);
    if separateLine_isMissing then L0(TRUE) else L0(separateLine);
  L0(separateLine_orDefault):
    st separateLine = separateLine_orDefault;
    paste0 = ldf paste0;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      names1 = ld names;
      names2 = force? names1;
      checkMissing(names2);
      return names2;
    };
    r1 = dyn paste0("\"", p, "\"");
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st names = r1;
    separateLine1 = ld separateLine;
    check L5() else D2();
  D2():
    deopt 7 [separateLine1];
  L5():
    separateLine2 = force? separateLine1;
    checkMissing(separateLine2);
    c = `as.logical`(separateLine2);
    if c then L6() else L1();
  L1():
    cat2 = ldf cat;
    check L12() else D7();
  L2():
    cat4 = ldf cat;
    check L16() else D11();
  L6():
    cat = ldf cat;
    check L7() else D3();
  D3():
    deopt 10 [];
  D7():
    deopt 27 [];
  D11():
    deopt 42 [];
  L7():
    p1 = prom<V +>{
      header1 = ld header;
      header2 = force? header1;
      checkMissing(header2);
      return header2;
    };
    r3 = dyn cat[, , sep](p1, "\n", "");
    check L8() else D4();
  L12():
    p3 = prom<V +>{
      header3 = ld header;
      header4 = force? header3;
      checkMissing(header4);
      return header4;
    };
    r8 = dyn cat2[, , sep](p3, ": ", "");
    check L13() else D8();
  L16():
    r11 = dyn cat4("\n");
    check L17() else D12();
  D4():
    deopt 15 [r3];
  D8():
    deopt 32 [r8];
  D12():
    deopt 44 [r11];
  L8():
    cat1 = ldf cat;
    check L9() else D5();
  L13():
    cat3 = ldf cat;
    check L14() else D9();
  L17():
    popenv;
    return r11;
  D5():
    deopt 17 [];
  D9():
    deopt 34 [];
  L9():
    p2 = prom<V +>{
      names3 = ld names;
      names4 = force? names3;
      checkMissing(names4);
      return names4;
    };
    r5 = dyn cat1[, sep, fill, labels](p2, ", ", TRUE, "    ");
    check L10() else D6();
  L14():
    p4 = prom<V +>{
      names5 = ld names;
      names6 = force? names5;
      checkMissing(names6);
      return names6;
    };
    r10 = dyn cat3[, sep, fill](p4, ", ", TRUE);
    check L15() else D10();
  D6():
    deopt 25 [r5];
  D10():
    deopt 40 [r10];
  L10():
    goto L2();
  L15():
    goto L2();
  }
}