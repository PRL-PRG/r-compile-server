fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2067717203`;
    st intToUtf8 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2067717203`(x, multiple, allow_surrogate_pairs) {
  (reg x:*, reg multiple:*, reg allow_surrogate_pairs:*) -+> V { var x:*, var multiple:*, reg multiple_isMissing:L, reg multiple_orDefault:*, var allow_surrogate_pairs:*, reg allow_surrogate_pairs_isMissing:L, reg allow_surrogate_pairs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg multiple1:*, reg multiple2:V, reg allow_surrogate_pairs1:*, reg allow_surrogate_pairs2:V, reg intToUtf8:cls, reg r2:V |
    mkenv;
    st x = x;
    multiple_isMissing = missing.0(multiple);
    if multiple_isMissing then L0(FALSE) else L0(multiple);
  L0(multiple_orDefault):
    st multiple = multiple_orDefault;
    allow_surrogate_pairs_isMissing = missing.0(allow_surrogate_pairs);
    if allow_surrogate_pairs_isMissing then L1(FALSE) else L1(allow_surrogate_pairs);
  L1(allow_surrogate_pairs_orDefault):
    st allow_surrogate_pairs = allow_surrogate_pairs_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang intToUtf8(x, multiple, allow_surrogate_pairs)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    multiple1 = ld multiple;
    check L6() else D1();
  D1():
    deopt 4 [multiple1];
  L6():
    multiple2 = force? multiple1;
    checkMissing(multiple2);
    allow_surrogate_pairs1 = ld allow_surrogate_pairs;
    check L7() else D2();
  D2():
    deopt 6 [allow_surrogate_pairs1];
  L7():
    allow_surrogate_pairs2 = force? allow_surrogate_pairs1;
    checkMissing(allow_surrogate_pairs2);
    intToUtf8 = ldf intToUtf8 in base;
    r2 = dyn intToUtf8(x2, multiple2, allow_surrogate_pairs2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}