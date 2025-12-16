fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1751249312`;
    st `sequence.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1751249312`(nvec, from, by, `...`) {
  (reg nvec:*, reg from:*, reg by:*, reg ddd:dots) -+> V { var nvec:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, var by:*, reg by_isMissing:L, reg by_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg nvec1:*, reg nvec2:V, reg as_integer:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg from1:*, reg from2:V, reg as_integer1:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg by1:*, reg by2:V, reg as_integer2:cls, reg r10:V, reg sequence:cls, reg r11:V |
    mkenv;
    st nvec = nvec;
    from_isMissing = missing.0(from);
    if from_isMissing then L0(1) else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    by_isMissing = missing.0(by);
    if by_isMissing then L1(1) else L1(by);
  L1(by_orDefault):
    st by = by_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    popenv;
    return r1;
  L6():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r = dyn base(<lang sequence(as.integer(nvec), as.integer(from), as.integer(by))>);
    goto L2(r);
  L3(r3):
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L8():
    nvec1 = ld nvec;
    check L10() else D0();
  L9():
    r2 = dyn base1(<sym nvec>);
    goto L3(r2);
  D0():
    deopt 4 [nvec1];
  L4(r6):
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L10():
    nvec2 = force? nvec1;
    checkMissing(nvec2);
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(nvec2);
    check L11() else D1();
  L12():
    from1 = ld from;
    check L14() else D2();
  L13():
    r5 = dyn base2(<sym from>);
    goto L4(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [from1];
  L5(r9):
    sequence = ldf sequence in base;
    r11 = dyn sequence(r3, r6, r9);
    check L20() else D6();
  L11():
    goto L3(r4);
  L14():
    from2 = force? from1;
    checkMissing(from2);
    as_integer1 = ldf `as.integer` in base;
    r7 = dyn as_integer1(from2);
    check L15() else D3();
  L16():
    by1 = ld by;
    check L18() else D4();
  L17():
    r8 = dyn base3(<sym by>);
    goto L5(r8);
  D3():
    deopt 13 [r7];
  D4():
    deopt 16 [by1];
  D6():
    deopt 21 [r11];
  L15():
    goto L4(r7);
  L18():
    by2 = force? by1;
    checkMissing(by2);
    as_integer2 = ldf `as.integer` in base;
    r10 = dyn as_integer2(by2);
    check L19() else D5();
  L20():
    goto L2(r11);
  D5():
    deopt 19 [r10];
  L19():
    goto L5(r10);
  }
}