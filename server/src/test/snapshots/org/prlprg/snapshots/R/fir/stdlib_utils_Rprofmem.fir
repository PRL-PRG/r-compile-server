fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner11835980;
    st Rprofmem = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner11835980(filename, append, threshold) {
  (reg filename:*, reg append:*, reg threshold:*) -+> V { var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var threshold:*, reg threshold_isMissing:L, reg threshold_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg filename1:*, reg filename2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg C_Rprofmem:*, reg C_Rprofmem1:V, reg filename3:*, reg filename4:V, reg append1:*, reg append2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg r8:V, reg threshold1:*, reg threshold2:V, reg as_double:cls, reg r9:V, reg _External:cls, reg r10:V, reg invisible:cls, reg r11:V |
    mkenv;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0("Rprofmem.out") else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    threshold_isMissing = missing.0(threshold);
    if threshold_isMissing then L2(0.0) else L2(threshold);
  L2(threshold_orDefault):
    st threshold = threshold_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L12() else L4();
  L9():
    filename1 = ld filename;
    check L11() else D0();
  L10():
    r = dyn base(<sym filename>);
    goto L3(r);
  D0():
    deopt 1 [filename1];
  L4():
    goto L5();
  L5():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L11():
    filename2 = force? filename1;
    checkMissing(filename2);
    c = `==`(filename2, NULL);
    goto L3(c);
  L12():
    st filename = "";
    goto L5();
  L6(r4):
    popenv;
    return r4;
  L14():
    sym2 = ldf `.External`;
    base2 = ldf `.External` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r3 = dyn base1(<lang .External(C_Rprofmem, filename, append, as.double(threshold))>);
    goto L6(r3);
  L7(r6):
    invisible = ldf invisible in base;
    r11 = dyn invisible(r6);
    check L26() else D7();
  L16():
    C_Rprofmem = ld C_Rprofmem;
    check L18() else D1();
  L17():
    r5 = dyn base2(<sym C_Rprofmem>, <sym filename>, <sym append>, <lang as.double(threshold)>);
    goto L7(r5);
  D1():
    deopt 13 [C_Rprofmem];
  D7():
    deopt 28 [r11];
  L18():
    C_Rprofmem1 = force? C_Rprofmem;
    checkMissing(C_Rprofmem1);
    filename3 = ld filename;
    check L19() else D2();
  L26():
    goto L6(r11);
  D2():
    deopt 15 [filename3];
  L19():
    filename4 = force? filename3;
    checkMissing(filename4);
    append1 = ld append;
    check L20() else D3();
  D3():
    deopt 17 [append1];
  L20():
    append2 = force? append1;
    checkMissing(append2);
    sym3 = ldf `as.double`;
    base3 = ldf `as.double` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L8(r8):
    _External = ldf `.External` in base;
    r10 = dyn _External(C_Rprofmem1, filename4, append2, r8);
    check L25() else D6();
  L21():
    threshold1 = ld threshold;
    check L23() else D4();
  L22():
    r7 = dyn base3(<sym threshold>);
    goto L8(r7);
  D4():
    deopt 21 [threshold1];
  D6():
    deopt 26 [r10];
  L23():
    threshold2 = force? threshold1;
    checkMissing(threshold2);
    as_double = ldf `as.double` in base;
    r9 = dyn as_double(threshold2);
    check L24() else D5();
  L25():
    goto L7(r10);
  D5():
    deopt 24 [r9];
  L24():
    goto L8(r9);
  }
}